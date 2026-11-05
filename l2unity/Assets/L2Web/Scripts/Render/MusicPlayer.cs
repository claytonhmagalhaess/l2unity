// Musica de zona como no cliente (render/audio.ts): MusicVolume do mapa (nMusicID) -> playlist do musicinfo.dat ->
// /music/<nome>.ogg (arquivos "L2SD" do cliente corrigidos pelo dev server). Troca com fade, volume ajustavel e mudo.
// No Unity: AudioSource 2D num GameObject proprio; o .ogg e decodificado em streaming pelo NVorbis (o FMOD recusa os Vorbis de 2001 do cliente).
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using L2Web.World;
using UnityEngine;
using UnityEngine.Networking;

namespace L2Web.Render
{
    public class MusicPlayer
    {
        public sealed class Vol
        {
            public int MusicId;
            public float X;
            public float Y;
            public float Z;
            public bool Force;
        }

        static readonly Dictionary<string, Task<List<Vol>>> tiles = new();

        static Task<List<Vol>> Volumes(string tile)
        {
            if (!tiles.TryGetValue(tile, out var p))
            {
                p = LoadVolumes(tile);
                tiles[tile] = p;
            }
            return p;
        }

        static async Task<List<Vol>> LoadVolumes(string tile)
        {
            try
            {
                return await Http.GetJson<List<Vol>>($"/map/{tile}_music.json") ?? new List<Vol>();
            }
            catch
            {
                return new List<Vol>();
            }
        }

        AudioSource audio;
        AudioClip clip;
        int currentId;
        List<string> playlist = new();
        int idx;
        int token;
        GameObject host;

        public float Volume = AudioUtil.StoreFloat("volume", 0.5f);
        public bool Muted = AudioUtil.Store("muted", "0") == "1";
        /// <summary>Playlists do musicinfo.dat (texts.json -> music): id da musica -> nomes dos .ogg.</summary>
        public Dictionary<string, string[]> Lists = new();
        /// <summary>Raio (unidades) em que um MusicVolume vale.</summary>
        public float Radius = 5000;
        public string Label = "";

        public void SetVolume(float v)
        {
            Volume = Mathf.Clamp01(v);
            AudioUtil.StoreSet("volume", Volume.ToString(System.Globalization.CultureInfo.InvariantCulture));
            if (audio) audio.volume = Muted ? 0 : Volume;
        }

        public bool ToggleMute()
        {
            Muted = !Muted;
            AudioUtil.StoreSet("muted", Muted ? "1" : "0");
            if (audio) audio.volume = Muted ? 0 : Volume;
            return Muted;
        }

        /// <summary>Escolhe a musica pelo MusicVolume mais proximo da posicao (tile atual).</summary>
        public async Task Update(float x, float y)
        {
            var (tx, ty) = Coords.MapTile(x, y);
            var vols = await Volumes($"{tx}_{ty}");
            Vol best = null;
            var bd = Radius;
            foreach (var v in vols)
            {
                var d = Mathf.Sqrt((v.X - x) * (v.X - x) + (v.Y - y) * (v.Y - y));
                if (d < bd)
                {
                    bd = d;
                    best = v;
                }
            }
            var id = best?.MusicId ?? 0;
            if (id == currentId) return;
            currentId = id;
            playlist = new List<string>();
            if (Lists != null && Lists.TryGetValue(id.ToString(), out var names) && names != null)
                foreach (var n in names)
                    playlist.Add(n.ToLowerInvariant());
            idx = 0;
            Label = playlist.Count > 0 ? playlist[0] : "";
            FadeTo(playlist.Count > 0 ? playlist[0] : null);
        }

        void FadeTo(string name)
        {
            var my = ++token;
            var old = audio;
            var oldClip = clip;
            if (old) FadeOut(old, oldClip).Forget();
            audio = null;
            clip = null;
            if (name == null) return;
            Play(name, my).Forget();
        }

        static async Task FadeOut(AudioSource src, AudioClip c)
        {
            var v0 = src.volume;
            for (var k = 0.1f; k < 1 && src; k += 0.1f)
            {
                src.volume = Mathf.Max(0, v0 * (1 - k));
                await Task.Delay(80);
            }
            if (src)
            {
                src.Stop();
                RenderMats.Destroy(src.gameObject);
            }
            Release(c);
            if (c) RenderMats.Destroy(c);
        }

        async Task Play(string name, int my)
        {
            var bytes = await Http.GetBytes($"/music/{Uri.EscapeDataString(name)}.ogg");
            if (bytes == null || my != token) return;
            AudioClip c;
            try
            {
                c = DecodeOgg(name, bytes);
            }
            catch (Exception e)
            {
                Debug.LogWarning($"musica {name}: {e.Message}");
                return;
            }
            if (!c) return;
            if (my != token)
            {
                Release(c);
                RenderMats.Destroy(c);
                return;
            }
            c.name = name;
            host ??= NewHost();
            var go = new GameObject("musica " + name);
            go.transform.SetParent(host.transform, false);
            var a = go.AddComponent<AudioSource>();
            a.clip = c;
            a.loop = false;
            a.spatialBlend = 0;
            a.volume = 0;
            a.playOnAwake = false;
            a.Play();
            audio = a;
            clip = c;
            // fade de entrada
            for (var k = 0.1f; ; k += 0.1f)
            {
                if (audio != a || !a) break;
                a.volume = Mathf.Min(1, k) * (Muted ? 0 : Volume);
                if (k >= 1) break;
                await Task.Delay(120);
            }
            // o "ended" do HTMLAudioElement: passa para a proxima da playlist
            // so conta como fim depois de ter visto tocar (audio desligado/edit mode nao fica pulando de faixa)
            var played = false;
            while (audio == a && a)
            {
                await Task.Delay(500);
                if (a && a.isPlaying) played = true;
                if (played && audio == a && a && !a.isPlaying && a.time <= 0.01f && Application.isFocused)
                {
                    Next();
                    return;
                }
            }
        }

        /// <summary>
        /// Ogg Vorbis para AudioClip em streaming, decodificado pelo NVorbis no callback de audio. As musicas do cliente
        /// sao de um libVorbis pre-1.0 (2001) que o FMOD recusa ("Unsupported file or audio format").
        /// </summary>
        public static AudioClip DecodeOgg(string name, byte[] bytes)
        {
            var reader = new NVorbis.VorbisReader(new System.IO.MemoryStream(bytes), true);
            var total = reader.TotalSamples;
            if (reader.Channels <= 0 || reader.SampleRate <= 0 || total <= 0)
            {
                reader.Dispose();
                return null;
            }
            var gate = new object();
            var clip = AudioClip.Create(name, (int)Math.Min(total, int.MaxValue), reader.Channels, reader.SampleRate, true,
                data =>
                {
                    int n;
                    lock (gate) n = reader.ReadSamples(data, 0, data.Length);
                    for (var i = Math.Max(0, n); i < data.Length; i++) data[i] = 0;
                },
                pos =>
                {
                    lock (gate) reader.SamplePosition = pos;
                });
            readers[clip] = reader;
            return clip;
        }

        static readonly Dictionary<AudioClip, NVorbis.VorbisReader> readers = new();

        static void Release(AudioClip c)
        {
            if (c && readers.TryGetValue(c, out var r))
            {
                readers.Remove(c);
                r.Dispose();
            }
        }

        static GameObject NewHost()
        {
            var go = new GameObject("l2web musica");
            if (Application.isPlaying) UnityEngine.Object.DontDestroyOnLoad(go);
            return go;
        }

        void Next()
        {
            if (playlist.Count == 0) return;
            idx = (idx + 1) % playlist.Count;
            Label = playlist[idx];
            FadeTo(playlist[idx]);
        }

        public void Stop()
        {
            currentId = 0;
            FadeTo(null);
        }
    }
}
