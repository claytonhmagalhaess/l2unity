// Efeitos sonoros (AnimNotify_Sound e passos): WAV PCM recortado dos .uax pelo dev server (/sound/<nome>.wav),
// posicionado em 3D (render/audio.ts). No Unity: AudioSources 3D num pool (atenuacao linear ate `Radius`, como o
// PannerNode 'linear' do Web Audio), ouvinte (AudioListener) na camera, e loops de ambiente do mapa
// (AmbientSoundObject, /map/<tile>_ambient.json). Posicoes em espaco do Unity.
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using L2Web.World;
using UnityEngine;
using UnityEngine.Networking;

namespace L2Web.Render
{
    public class SfxPlayer
    {
        public sealed class Ambient
        {
            public string Sound;
            public float X;
            public float Y;
            public float Z;
            public float Radius;
            public float Volume;
            public float Pitch;
            public int Type;
        }

        sealed class AmbVoice
        {
            public AudioSource Src;
            public float Target;
        }

        readonly Dictionary<string, Task<AudioClip>> buffers = new();
        readonly List<AudioSource> pool = new();
        GameObject host;
        AudioSource ui;
        Camera listenerCam;

        public float Volume = AudioUtil.StoreFloat("sfx", 0.7f);
        /// <summary>Alcance (unidades do Unity; 30 = 3000 do L2).</summary>
        public float Radius = 30;
        public int MaxVoices = 24;
        public int MaxAmbient = 10;

        /// <summary>No navegador o AudioContext so comecava depois de um gesto do usuario; no Unity nao precisa.</summary>
        public void Unlock()
        {
        }

        public void SetVolume(float v)
        {
            Volume = Mathf.Clamp01(v);
            AudioUtil.StoreSet("sfx", Volume.ToString(System.Globalization.CultureInfo.InvariantCulture));
            foreach (var kv in ambActive)
                if (kv.Value.Src)
                    kv.Value.Src.volume = kv.Value.Target * Volume;
        }

        GameObject Host()
        {
            if (host) return host;
            host = new GameObject("l2web sfx");
            if (Application.isPlaying) UnityEngine.Object.DontDestroyOnLoad(host);
            return host;
        }

        /// <summary>Ouvinte na camera: garante um AudioListener ativo nela (desliga os outros).</summary>
        public void SetListener(Camera cam)
        {
            if (!cam || cam == listenerCam) return;
            listenerCam = cam;
            if (cam.GetComponent<AudioListener>()) return;
            foreach (var l in UnityEngine.Object.FindObjectsByType<AudioListener>(FindObjectsInactive.Exclude))
                l.enabled = false;
            cam.gameObject.AddComponent<AudioListener>();
        }

        Task<AudioClip> Load(string name)
        {
            if (!buffers.TryGetValue(name, out var p))
            {
                p = LoadClip(name);
                buffers[name] = p;
            }
            return p;
        }

        static async Task<AudioClip> LoadClip(string name)
        {
            var bytes = await Http.GetBytes($"/sound/{Uri.EscapeDataString(name)}.wav");
            return bytes == null ? null : DecodeWav(name, bytes);
        }

        /// <summary>
        /// WAV PCM (8/16 bits) recortado do .uax para AudioClip. Lido a mao em vez do decodificador do FMOD, que recusa
        /// alguns cabecalhos do cliente ("Unsupported file or audio format") por causa de blocos extras/tamanhos impares.
        /// </summary>
        public static AudioClip DecodeWav(string name, byte[] b)
        {
            if (b.Length < 12 || b[0] != 'R' || b[1] != 'I' || b[2] != 'F' || b[3] != 'F') return null;
            int channels = 0, rate = 0, bits = 0, fmt = 0, dataOff = -1, dataLen = 0;
            var p = 12;
            while (p + 8 <= b.Length)
            {
                var id = System.Text.Encoding.ASCII.GetString(b, p, 4);
                var len = BitConverter.ToInt32(b, p + 4);
                var body = p + 8;
                if (len < 0) break;
                if (id == "fmt " && body + 16 <= b.Length)
                {
                    fmt = BitConverter.ToInt16(b, body);
                    channels = BitConverter.ToInt16(b, body + 2);
                    rate = BitConverter.ToInt32(b, body + 4);
                    bits = BitConverter.ToInt16(b, body + 14);
                }
                else if (id == "data")
                {
                    dataOff = body;
                    dataLen = Math.Min(len, b.Length - body);
                    break;
                }
                p = body + len + (len & 1);
            }
            if (fmt != 1 || dataOff < 0 || channels < 1 || rate <= 0 || (bits != 8 && bits != 16)) return null;
            var bytesPer = bits / 8;
            var frames = dataLen / (bytesPer * channels);
            if (frames <= 0) return null;
            var data = new float[frames * channels];
            if (bits == 16)
                for (var i = 0; i < data.Length; i++) data[i] = BitConverter.ToInt16(b, dataOff + i * 2) / 32768f;
            else
                for (var i = 0; i < data.Length; i++) data[i] = (b[dataOff + i] - 128) / 128f;
            var clip = AudioClip.Create(name, frames, channels, rate, false);
            clip.SetData(data, 0);
            return clip;
        }

        AudioSource NewSource(string name, bool spatial)
        {
            var go = new GameObject(name);
            go.transform.SetParent(Host().transform, false);
            var a = go.AddComponent<AudioSource>();
            a.playOnAwake = false;
            a.dopplerLevel = 0;
            a.spatialBlend = spatial ? 1 : 0;
            a.rolloffMode = AudioRolloffMode.Linear;
            a.minDistance = 1;
            a.maxDistance = Radius;
            return a;
        }

        int Voices()
        {
            var n = 0;
            foreach (var s in pool)
                if (s && s.isPlaying)
                    n++;
            return n;
        }

        // ------------------------------------------------------------ ambiente (AmbientSoundObject do mapa)
        readonly Dictionary<string, Task<List<Ambient>>> ambTiles = new();
        readonly Dictionary<Ambient, AmbVoice> ambActive = new();

        Task<List<Ambient>> AmbientOf(string tile)
        {
            if (!ambTiles.TryGetValue(tile, out var p))
            {
                p = LoadAmbient(tile);
                ambTiles[tile] = p;
            }
            return p;
        }

        static async Task<List<Ambient>> LoadAmbient(string tile)
        {
            try
            {
                return await Http.GetJson<List<Ambient>>($"/map/{tile}_ambient.json") ?? new List<Ambient>();
            }
            catch
            {
                return new List<Ambient>();
            }
        }

        /// <summary>Liga os loops de ambiente ao alcance (SoundRadius*25) do jogador e desliga os que sairam ou trocaram dia/noite.</summary>
        public async Task UpdateAmbient(float x, float y, float z, bool night)
        {
            var (tx, ty) = Coords.MapTile(x, y);
            var list = await AmbientOf($"{tx}_{ty}");
            var cand = new List<(Ambient a, float d)>();
            foreach (var a in list)
            {
                if (a.Type == 1 ? night : a.Type == 2 ? !night : false) continue;
                var d = Mathf.Sqrt((a.X - x) * (a.X - x) + (a.Y - y) * (a.Y - y) + (a.Z - z) * (a.Z - z));
                if (d < a.Radius) cand.Add((a, d));
            }
            cand.Sort((p, q) => p.d.CompareTo(q.d));
            var want = new HashSet<Ambient>();
            for (var i = 0; i < cand.Count && i < MaxAmbient; i++) want.Add(cand[i].a);
            var drop = new List<Ambient>();
            foreach (var kv in ambActive)
                if (!want.Contains(kv.Key))
                    drop.Add(kv.Key);
            foreach (var a in drop)
            {
                var v = ambActive[a];
                ambActive.Remove(a);
                FadeOutAndDestroy(v.Src, 0.3f, 1.5f).Forget();
            }
            foreach (var a in want)
            {
                if (ambActive.ContainsKey(a)) continue;
                var clip = await Load(a.Sound);
                if (!clip || ambActive.ContainsKey(a)) continue;
                var src = NewSource("ambiente " + a.Sound, true);
                src.clip = clip;
                src.loop = true;
                src.pitch = a.Pitch > 0 ? a.Pitch : 1;
                src.maxDistance = Mathf.Max(1.01f, a.Radius * 0.01f);
                src.transform.position = Coords.ToUnity(a.X, a.Y, a.Z);
                src.volume = 0;
                src.time = UnityEngine.Random.value * clip.length * 0.999f;
                src.Play();
                var voice = new AmbVoice { Src = src, Target = a.Volume };
                ambActive[a] = voice;
                FadeIn(voice, 0.5f).Forget();
            }
        }

        /// <summary>setTargetAtTime do Web Audio: aproxima exponencialmente o volume alvo (constante de tempo tau).</summary>
        async Task FadeIn(AmbVoice v, float tau)
        {
            var t0 = Time.realtimeSinceStartup;
            while (v.Src && ambActive.ContainsValue(v))
            {
                var t = Time.realtimeSinceStartup - t0;
                var k = 1 - Mathf.Exp(-t / tau);
                v.Src.volume = v.Target * Volume * k;
                if (k > 0.995f) break;
                await Task.Delay(50);
            }
        }

        static async Task FadeOutAndDestroy(AudioSource src, float tau, float stopAfter)
        {
            if (!src) return;
            var v0 = src.volume;
            var t0 = Time.realtimeSinceStartup;
            for (;;)
            {
                var t = Time.realtimeSinceStartup - t0;
                if (!src || t >= stopAfter) break;
                src.volume = v0 * Mathf.Exp(-t / tau);
                await Task.Delay(50);
            }
            if (src) RenderMats.Destroy(src.gameObject);
        }

        public void StopAmbient()
        {
            foreach (var v in ambActive.Values)
                if (v.Src)
                    RenderMats.Destroy(v.Src.gameObject);
            ambActive.Clear();
        }

        /// <summary>Som da interface (sem posicao): abrir/fechar janelas, clique.</summary>
        public void PlayUi(string name, float gain = 0.8f)
        {
            if (Volume <= 0) return;
            PlayUiAsync(name.ToLowerInvariant(), gain).Forget();
        }

        async Task PlayUiAsync(string name, float gain)
        {
            var clip = await Load(name);
            if (!clip) return;
            if (!ui) ui = NewSource("interface", false);
            ui.PlayOneShot(clip, gain * Volume);
        }

        /// <summary>Toca um som do cliente na posicao (Unity) dada; gain = Volume/255 do notify.</summary>
        public void Play(string name, Vector3 pos, float gain = 1)
        {
            if (Volume <= 0 || Voices() >= MaxVoices) return;
            PlayAsync(name.ToLowerInvariant(), pos, gain).Forget();
        }

        async Task PlayAsync(string name, Vector3 pos, float gain)
        {
            var clip = await Load(name);
            if (!clip) return;
            AudioSource src = null;
            var busy = 0;
            foreach (var s in pool)
            {
                if (!s) continue;
                if (s.isPlaying) busy++;
                else if (!src) src = s;
            }
            if (busy >= MaxVoices) return;
            if (!src)
            {
                src = NewSource("sfx", true);
                pool.RemoveAll(s => !s);
                pool.Add(src);
            }
            src.maxDistance = Radius;
            src.transform.position = pos;
            src.clip = clip;
            src.volume = gain * Volume;
            src.pitch = 1;
            src.loop = false;
            src.Play();
        }
    }
}
