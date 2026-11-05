// Ator 3D: personagem ou NPC montado a partir dos manifestos /api/model do l2anim. Porte de client/render/actor.ts.
// Mesma logica do l2anim/out/tool/viewer3d.js (um mixer por parte -> um componente Animation legado por parte,
// encaixe de armas/escudo/capa em ossos, partes do equipamento escondendo as partes base), adaptada para varios atores
// na mesma cena: cada .glb e carregado uma vez (GltfImport em cache) e instanciado por ator (glTFast).
//
// Hierarquia: Root (posicao no mundo) -> Yaw (heading) -> Model (correcao da frente) -> rig + partes com pele;
//             Root -> Hidden (inativo: cenas das partes encaixadas em ossos).
// Os clipes legados do glTFast se ligam por caminho relativo ("Bip01/Bip01_Pelvis/...") ao objeto da cena
// (SceneObjectCreation.Always), entao o Animation de cada parte fica no objeto da cena da parte.
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using GLTFast;
using L2Web.World;
using Newtonsoft.Json;
using UnityEngine;
using Object = UnityEngine.Object;

namespace L2Web.Render
{
    public sealed class ActorPartInfo
    {
        [JsonProperty("url")] public string Url;
        [JsonProperty("name")] public string Name;
        [JsonProperty("role")] public string Role;
        [JsonProperty("slot")] public string Slot;
        [JsonProperty("extra")] public bool Extra;

        public ActorPartInfo With(string role) => new ActorPartInfo { Url = Url, Name = Name, Role = role, Slot = Slot, Extra = Extra };
    }

    public sealed class ActorManifest
    {
        [JsonProperty("kind")] public string Kind;
        [JsonProperty("id")] public string Id;
        [JsonProperty("label")] public string Label;
        [JsonProperty("anim")] public string Anim;
        [JsonProperty("animSet")] public string AnimSet;
        [JsonProperty("parts")] public List<ActorPartInfo> Parts = new();
        [JsonProperty("error")] public string Error;
    }

    public sealed class Actor
    {
        /// <summary>Um "mixer" do three: o Animation legado de uma parte (ou do rig).</summary>
        sealed class Mixer
        {
            public Animation Anim;
            public AnimationState Cur;
            /// <summary>Acao anterior, congelada no ultimo quadro, enquanto dura o tween.</summary>
            public AnimationState Prev;
        }

        sealed class Part
        {
            public readonly List<GameObject> Objs = new();
            public string Slot;
            public bool Extra;
            public string Role;
            /// <summary>Cena instanciada (sob Model se tem pele propria, senao sob Hidden).</summary>
            public GameObject Scene;
            /// <summary>Cena movida para o modelo (partes com pele propria).</summary>
            public Transform Root;
            public Mixer Mixer;
        }

        // ------------------------------------------------------------ cache e fila de carga

        static readonly Dictionary<string, Task<GltfImport>> gltfCache = new();
        static readonly Dictionary<string, Task<ActorManifest>> manifestCache = new();

        // fila simples para nao disparar dezenas de geracoes/cargas ao mesmo tempo
        static int active;
        static readonly Queue<Action> queue = new();
        public const int MaxParallel = 4;

        static Task<T> Limited<T>(Func<Task<T>> fn)
        {
            var tcs = new TaskCompletionSource<T>();

            async void Run()
            {
                active++;
                try
                {
                    tcs.TrySetResult(await fn());
                }
                catch (Exception e)
                {
                    tcs.TrySetException(e);
                }
                finally
                {
                    active--;
                    if (queue.Count > 0) queue.Dequeue()();
                }
            }

            if (active < MaxParallel) Run();
            else queue.Enqueue(Run);
            return tcs.Task;
        }

        static IDeferAgent editAgent;

        static ImportSettings ImportSettings => new()
        {
            AnimationMethod = AnimationMethod.Legacy,
            GenerateMipMaps = true,
        };

        /// <summary>GltfImport do .glb (uma carga por URL, como o gltfCache do TS).</summary>
        public static Task<GltfImport> LoadGltf(string url)
        {
            if (gltfCache.TryGetValue(url, out var p)) return p;
            p = LoadGltfUncached(url);
            gltfCache[url] = p;
            return p;
        }

        static async Task<GltfImport> LoadGltfUncached(string url)
        {
            try
            {
                return await Limited(async () =>
                {
                    // fora do play mode o agente padrao (MonoBehaviour com DontDestroyOnLoad) nao pode ser criado
                    var g = Application.isPlaying ? new GltfImport() : new GltfImport(null, editAgent ??= new UninterruptedDeferAgent());
                    var ok = await g.Load(Http.Url(url), ImportSettings);
                    if (!ok)
                    {
                        g.Dispose();
                        throw new Exception("falha ao carregar " + url);
                    }
                    return g;
                });
            }
            catch
            {
                gltfCache.Remove(url);
                throw;
            }
        }

        public static Task<ActorManifest> Manifest(string kind, string id)
        {
            var key = kind + ":" + id;
            if (manifestCache.TryGetValue(key, out var p)) return p;
            p = ManifestUncached(key, kind, id);
            manifestCache[key] = p;
            return p;
        }

        static async Task<ActorManifest> ManifestUncached(string key, string kind, string id)
        {
            try
            {
                var m = await Limited(async () =>
                {
                    var r = await Http.Fetch($"/api/model?kind={Uri.EscapeDataString(kind)}&id={Uri.EscapeDataString(id)}");
                    if (r.Data == null) throw new Exception(r.Error ?? ("HTTP " + r.Status));
                    return JsonConvert.DeserializeObject<ActorManifest>(r.Text) ?? throw new Exception("manifesto vazio");
                });
                m.Parts ??= new List<ActorPartInfo>();
                if (m.Error != null) manifestCache.Remove(key);
                return m;
            }
            catch
            {
                manifestCache.Remove(key);
                throw;
            }
        }

        /// <summary>Instancia a cena principal sob `parent`, sempre com um objeto de cena (raiz dos caminhos dos clipes).</summary>
        static async Task<GameObjectInstantiator> Instantiate(GltfImport g, Transform parent)
        {
            var inst = new GameObjectInstantiator(g, parent, null, new InstantiationSettings
            {
                SceneObjectCreation = SceneObjectCreation.Always,
                SkinUpdateWhenOffscreen = true,
            });
            var ok = await g.InstantiateMainSceneAsync(inst);
            if (!ok || inst.SceneTransform == null) throw new Exception("falha ao instanciar o glb");
            return inst;
        }

        static readonly string[] AttachRoles = { "rhand", "lhand", "larm", "cape" };

        static readonly Dictionary<string, string[]> AttachBones = new()
        {
            ["rhand"] = new[] { "Weapon_R_Bone", "Bip01_R_Hand" },
            ["lhand"] = new[] { "Weapon_L_Bone", "Bip01_L_Hand" },
            ["larm"] = new[] { "Shield_L_Bone", "Bip01_L_Hand" },
            ["cape"] = new[] { "Cape_Bone", "bip01_spine2" },
            ["head"] = new[] { "Bip01_head" },
            ["body"] = new[] { "Bip01_Spine2", "Bip01_Spine1", "Bip01_Spine", "Bip01_head" },
        };

        // ------------------------------------------------------------ instancia

        /// <summary>No da posicao no mundo (unidades do Unity).</summary>
        public readonly Transform Root;
        /// <summary>Rotacao de heading (Quaternion.Euler(0, Coords.HeadingToUnityDeg(h), 0)).</summary>
        public readonly Transform Yaw;
        /// <summary>Correcao da frente do modelo (o rig nem sempre olha para a frente do L2).</summary>
        readonly Transform model;
        readonly Transform hidden;
        Transform rig;
        readonly Dictionary<string, Transform> byName = new();
        readonly List<Mixer> mixers = new();
        Mixer mixer;
        readonly Dictionary<string, AnimationClip> clips = new();
        List<Part> baseParts = new();
        readonly Dictionary<string, List<Part>> equip = new();
        List<string> equipWanted = new();
        AnimationClip curClip;
        float time;
        float speed = 1;
        bool loop = true;
        /// <summary>Tween do UE2 (LoopAnim(seq, rate, TweenTime)): mistura da pose anterior para o clipe novo.</summary>
        float tween;
        float tweenT;
        public bool Loaded;
        /// <summary>Rotulo do manifesto ("Humano Guerreiro (M)").</summary>
        public string Label = "";
        public float Height;
        public string Error;
        /// <summary>objectId da entidade dona (userData.objectId do three).</summary>
        public int ObjectId;
        bool disposed;

        public Actor()
        {
            Root = new GameObject("Actor").transform;
            Yaw = new GameObject("Yaw").transform;
            Yaw.SetParent(Root, false);
            model = new GameObject("Model").transform;
            model.SetParent(Yaw, false);
            hidden = new GameObject("Hidden").transform;
            hidden.SetParent(Root, false);
            hidden.gameObject.SetActive(false);
        }

        public bool Disposed => disposed;

        /// <summary>Carrega o modelo (contado na tela de carregamento).</summary>
        public Task<bool> Load(string kind, string id) => LoadTrack.Track(LoadModel(kind, id));

        async Task<bool> LoadModel(string kind, string id)
        {
            var man = await Manifest(kind, id);
            if (man.Error != null)
            {
                Error = man.Error;
                return false;
            }
            var animTask = man.Anim != null ? LoadGltf(man.Anim) : Task.FromResult<GltfImport>(null);
            var partTasks = man.Parts.Select(p => LoadGltf(p.Url)).ToList();
            await Task.WhenAll(partTasks.Cast<Task>().Append(animTask));
            var anim = animTask.Result;
            if (disposed) return false;
            Label = man.Label ?? "";
            Animation rigAnim = null;
            if (anim != null)
            {
                var inst = await Instantiate(anim, model);
                if (disposed) return false;
                rig = inst.SceneTransform;
                rig.name = "Rig";
                rigAnim = inst.SceneInstance?.LegacyAnimation;
            }
            else
            {
                rig = new GameObject("Rig").transform;
                rig.SetParent(model, false);
            }
            foreach (var t in rig.GetComponentsInChildren<Transform>(true))
                if (!string.IsNullOrEmpty(t.name)) byName[t.name.ToLowerInvariant()] = t;
            if (anim != null)
            {
                if (rigAnim == null) rigAnim = rig.gameObject.AddComponent<Animation>();
                SetupAnimation(rigAnim);
                mixer = new Mixer { Anim = rigAnim };
                mixers.Add(mixer);
                foreach (var c in anim.GetAnimationClips() ?? Array.Empty<AnimationClip>())
                    if (c != null) clips[c.name.ToLowerInvariant()] = c;
            }
            var parts = new List<Part>();
            for (var i = 0; i < man.Parts.Count; i++)
            {
                parts.Add(await AddPart(partTasks[i].Result, man.Parts[i]));
                if (disposed) return false;
            }
            baseParts = parts;
            AlignForward();
            Loaded = true;
            return true;
        }

        static void SetupAnimation(Animation a)
        {
            a.playAutomatically = false;
            a.cullingType = AnimationCullingType.AlwaysAnimate;
            a.Stop();
            // amostrado a mao (Sample) no Update do ator, como o mixer.update(0) do three
            a.enabled = false;
        }

        /// <summary>Malha unica sem animacao (item no chao).</summary>
        public async Task<bool> LoadStatic(string url)
        {
            try
            {
                var g = await LoadGltf(url);
                if (disposed) return false;
                var inst = await Instantiate(g, model);
                if (disposed) return false;
                var b = new Bounds();
                var any = false;
                foreach (var r in inst.SceneTransform.GetComponentsInChildren<Renderer>(true))
                {
                    if (r is SkinnedMeshRenderer smr) smr.updateWhenOffscreen = true;
                    if (!any) b = r.bounds;
                    else b.Encapsulate(r.bounds);
                    any = true;
                }
                Height = any ? b.size.y : 0.1f;
                Loaded = true;
                return true;
            }
            catch (Exception e)
            {
                Error = e.Message;
                return false;
            }
        }

        Transform AttachBone(string role)
        {
            if (!AttachBones.TryGetValue(role ?? "", out var names)) names = AttachBones["head"];
            foreach (var n in names)
                if (byName.TryGetValue(n.ToLowerInvariant(), out var b))
                    return b;
            return null;
        }

        async Task<Part> AddPart(GltfImport g, ActorPartInfo info)
        {
            var role = info.Role ?? "";
            var part = new Part { Slot = info.Slot ?? "", Extra = info.Extra, Role = role };
            var inst = await Instantiate(g, hidden);
            var scene = inst.SceneTransform;
            part.Scene = scene.gameObject;
            if (disposed) return part;
            var meshes = scene.GetComponentsInChildren<SkinnedMeshRenderer>(true);
            var attachRole = AttachRoles.Contains(role);
            var attachedAny = false;
            foreach (var m in meshes)
            {
                m.sharedMaterials = ActorMaterial.Convert(m.sharedMaterials);
                var bones = m.bones ?? Array.Empty<Transform>();
                var found = bones.Count(b => b != null && byName.ContainsKey(b.name.ToLowerInvariant()));
                var attach = attachRole || found < bones.Length / 2.0;
                if (attach)
                {
                    var bone = AttachBone(attachRole ? role : "head");
                    if (bone == null) continue;
                    // malha rigida no osso (THREE.Mesh(geometry, material) no lugar da SkinnedMesh)
                    var go = new GameObject(m.name);
                    go.layer = m.gameObject.layer;
                    go.transform.SetParent(bone, false);
                    go.AddComponent<MeshFilter>().sharedMesh = m.sharedMesh;
                    go.AddComponent<MeshRenderer>().sharedMaterials = m.sharedMaterials;
                    part.Objs.Add(go);
                    attachedAny = true;
                    continue;
                }
                m.updateWhenOffscreen = true;
                part.Objs.Add(m.gameObject);
            }
            if (meshes.Length > 0 && !attachedAny)
            {
                scene.SetParent(model, false);
                part.Root = scene;
                var anim = scene.GetComponent<Animation>();
                if (anim == null) anim = scene.gameObject.AddComponent<Animation>();
                SetupAnimation(anim);
                var mx = new Mixer { Anim = anim };
                part.Mixer = mx;
                mixers.Add(mx);
                if (curClip != null) BindMixer(mx, curClip);
            }
            return part;
        }

        void RemovePart(Part p)
        {
            foreach (var o in p.Objs)
                if (o != null && (p.Scene == null || !o.transform.IsChildOf(p.Scene.transform)))
                    RenderMats.Destroy(o);
            if (p.Scene != null) RenderMats.Destroy(p.Scene);
            if (p.Mixer != null) mixers.Remove(p.Mixer);
        }

        AnimationState StateFor(Mixer mx, AnimationClip clip)
        {
            var st = mx.Anim[clip.name];
            if (st == null || st.clip != clip)
            {
                mx.Anim.AddClip(clip, clip.name);
                st = mx.Anim[clip.name];
            }
            return st;
        }

        static void StopState(AnimationState s)
        {
            if (s == null) return;
            s.enabled = false;
            s.weight = 0;
        }

        void BindMixer(Mixer mx, AnimationClip clip, bool blend = false)
        {
            if (mx.Anim == null) return;
            StopState(mx.Prev);
            mx.Prev = null;
            var next = StateFor(mx, clip);
            if (blend && mx.Cur != null && mx.Cur != next) mx.Prev = mx.Cur; // fica parada no quadro atual e perde peso durante o tween
            else StopState(mx.Cur);
            mx.Cur = next;
            next.wrapMode = WrapMode.ClampForever;
            next.speed = 0;
            next.enabled = true;
            next.time = time;
            next.weight = blend && mx.Prev != null ? 0 : 1;
            mx.Anim.Sample();
        }

        /// <summary>Chaves 'armor:MFighter_356', 'weapon:2', 'hair:MFighter_1_2' (contado na tela de carregamento).</summary>
        public Task SetEquipment(IEnumerable<string> keys) => LoadTrack.Track(LoadEquipment(keys));

        async Task LoadEquipment(IEnumerable<string> keysIn)
        {
            var keys = (keysIn ?? Enumerable.Empty<string>()).Where(k => !string.IsNullOrEmpty(k)).ToList();
            equipWanted = keys;
            foreach (var k in equip.Keys.ToList())
            {
                if (!keys.Contains(k))
                {
                    foreach (var p in equip[k]) RemovePart(p);
                    equip.Remove(k);
                }
            }
            await Task.WhenAll(keys.Select(async k =>
            {
                if (equip.ContainsKey(k)) return;
                var sep = k.IndexOf(':');
                var kind = sep >= 0 ? k.Substring(0, sep) : k;
                var id = sep >= 0 ? k.Substring(sep + 1) : "";
                var man = await Manifest(kind, id);
                if (man.Error != null) return;
                var gl = await Task.WhenAll(man.Parts.Select(p => LoadGltf(p.Url)));
                if (disposed || !equipWanted.Contains(k) || rig == null || equip.ContainsKey(k)) return;
                var list = new List<Part>();
                equip[k] = list; // reserva a chave enquanto as partes sao instanciadas
                for (var i = 0; i < gl.Length; i++)
                {
                    var info = man.Parts[i];
                    var role = !string.IsNullOrEmpty(info.Role) ? info.Role : kind == "weapon" ? "rhand" : "";
                    list.Add(await AddPart(gl[i], info.With(role)));
                    if (disposed) return;
                }
                // outra chamada trocou o equipamento enquanto as partes eram instanciadas
                var still = equip.TryGetValue(k, out var cur) && cur == list;
                if (!still || !equipWanted.Contains(k))
                {
                    foreach (var p in list) RemovePart(p);
                    if (still) equip.Remove(k);
                }
            }));
            if (disposed) return;
            var covered = new HashSet<string>();
            foreach (var parts in equip.Values)
                foreach (var p in parts)
                {
                    if (p.Role == "body" && !p.Extra && !string.IsNullOrEmpty(p.Slot)) covered.Add(p.Slot);
                    if (p.Slot == "hairstyle") covered.Add("hair");
                }
            foreach (var p in baseParts)
                foreach (var o in p.Objs)
                    if (o != null) o.SetActive(!covered.Contains(p.Slot));
        }

        public bool HasClip(string name) => !string.IsNullOrEmpty(name) && clips.ContainsKey(name.ToLowerInvariant());

        /// <summary>Primeiro clipe que casa com GameData.AnimFallback[kind] (nome em minusculas, como o TS).</summary>
        public string FindClip(string kind)
        {
            if (!GameData.AnimFallback.TryGetValue(kind, out var re)) return null;
            foreach (var name in clips.Keys)
                if (re.IsMatch(name)) return name;
            return null;
        }

        /// <summary>Nomes (em minusculas) dos clipes do conjunto de animacoes.</summary>
        public IEnumerable<string> ClipNames => clips.Keys;

        /// <summary>
        /// Toca um clipe (como o LoopAnim/PlayAnim do UE2): speed multiplica a taxa natural e tween e o tempo,
        /// em segundos, de mistura a partir da pose atual.
        /// </summary>
        public bool Play(string name, float speed = 1, bool loop = true, float tween = 0)
        {
            if (string.IsNullOrEmpty(name) || mixer == null) return false;
            if (!clips.TryGetValue(name.ToLowerInvariant(), out var clip)) return false;
            this.speed = speed;
            this.loop = loop;
            if (curClip != clip)
            {
                var blend = tween > 0 && curClip != null;
                curClip = clip;
                time = 0;
                this.tween = blend ? tween : 0;
                tweenT = 0;
                foreach (var mx in mixers) BindMixer(mx, clip, blend);
            }
            return true;
        }

        public float ClipDuration(string name) =>
            !string.IsNullOrEmpty(name) && clips.TryGetValue(name.ToLowerInvariant(), out var c) ? c.length : 0;

        /// <summary>Tempo atual (s) no clipe corrente.</summary>
        public float ClipTime => time;

        public string ClipName => curClip != null ? curClip.name : null;

        public void Update(float dt)
        {
            if (curClip == null) return;
            var d = curClip.length;
            time += dt * speed;
            time = loop ? (d > 0 ? time % d : 0) : Mathf.Min(time, d);
            var w = 1f;
            if (tween > 0)
            {
                tweenT += dt;
                w = Mathf.Min(1, tweenT / tween);
                if (w >= 1) tween = 0;
            }
            foreach (var mx in mixers)
            {
                if (mx.Cur == null || mx.Anim == null) continue;
                mx.Cur.time = time;
                mx.Cur.weight = w;
                if (mx.Prev != null)
                {
                    if (w >= 1)
                    {
                        StopState(mx.Prev);
                        mx.Prev = null;
                    }
                    else mx.Prev.weight = 1 - w;
                }
                mx.Anim.Sample();
            }
        }

        /// <summary>Gira o modelo para que a frente (pes -> dedos) aponte para o heading 0 do L2 (-X local do Unity).</summary>
        void AlignForward()
        {
            Update(0);
            model.localRotation = Quaternion.identity;
            // mede no espaco do grupo de heading: o ator pode ja estar girado (heading vindo do servidor)
            var d = FootDirection(Yaw);
            // three: model.rotation.y = atan2(d.z, d.x) com d no espaco do three (x negado em relacao ao Unity)
            if (d.HasValue) model.localRotation = Quaternion.Euler(0, Coords.ThreeYawToUnityDeg(Mathf.Atan2(d.Value.z, -d.Value.x)), 0);
            var any = false;
            var box = new Bounds();
            foreach (var m in model.GetComponentsInChildren<SkinnedMeshRenderer>(true))
            {
                if (m.sharedMesh == null || !m.enabled || !m.gameObject.activeSelf) continue;
                var mb = m.sharedMesh.bounds;
                var mat = m.transform.localToWorldMatrix;
                for (var i = 0; i < 8; i++)
                {
                    var c = mb.center + Vector3.Scale(mb.extents, new Vector3((i & 1) != 0 ? 1 : -1, (i & 2) != 0 ? 1 : -1, (i & 4) != 0 ? 1 : -1));
                    var p = mat.MultiplyPoint3x4(c);
                    if (!any) box = new Bounds(p, Vector3.zero);
                    else box.Encapsulate(p);
                    any = true;
                }
            }
            Height = any ? box.size.y : 0;
        }

        /// <summary>Direcao pes -> dedos (plano XZ) no espaco local de `space`, ou null sem esses ossos.</summary>
        Vector3? FootDirection(Transform space)
        {
            Vector3? P(string n) => byName.TryGetValue(n, out var b) ? space.InverseTransformPoint(b.position) : null;
            var toe = new[] { P("bip01_l_toe0"), P("bip01_r_toe0") }.Where(v => v.HasValue).Select(v => v.Value).ToList();
            var foot = new[] { P("bip01_l_foot"), P("bip01_r_foot") }.Where(v => v.HasValue).Select(v => v.Value).ToList();
            if (toe.Count == 0 || foot.Count == 0) return null;
            var a = toe.Aggregate(Vector3.zero, (s, v) => s + v) / toe.Count;
            var b = foot.Aggregate(Vector3.zero, (s, v) => s + v) / foot.Count;
            var d = a - b;
            d.y = 0;
            return d.sqrMagnitude > 1e-10f ? d.normalized : null;
        }

        /// <summary>Para onde o modelo esta olhando, como heading L2 (0..65535), medido pelos ossos do pe. Diagnostico.</summary>
        public int? FacingHeading()
        {
            var d = FootDirection(Root.parent != null ? Root.parent : Root);
            if (!d.HasValue) return null;
            // Unity (-x, z) = L2 (x, y)
            var a = Mathf.Atan2(d.Value.z, -d.Value.x);
            if (a < 0) a += Mathf.PI * 2;
            return Mathf.RoundToInt(a / (Mathf.PI * 2) * 65536) & 0xffff;
        }

        /// <summary>Posicao no mundo (Unity) de um osso de encaixe (rhand, lhand, head, body...) ou do meio do corpo.</summary>
        public Vector3 BonePosition(string role)
        {
            var b = Loaded ? AttachBone(role) : null;
            if (b != null) return b.position;
            return Root.position + new Vector3(0, (Height > 0 ? Height : 0.5f) * 0.6f, 0);
        }

        /// <summary>Osso pelo nome (sem diferenciar maiusculas) ou null.</summary>
        /// <summary>
        /// Comprimento (maior dimensao, em unidades do Unreal) das malhas presas ao osso de um papel ("rhand"/"lhand"): a arma
        /// equipada. 0 sem arma. [I] = bound da malha da arma (USkeletalMesh+0x150) usado por AttachTrailer/FNWeaponEffect.
        /// </summary>
        public float AttachedLength(string role)
        {
            var bone = AttachBone(role);
            if (bone == null) return 0;
            var any = false;
            var box = new Bounds();
            foreach (var mf in bone.GetComponentsInChildren<MeshFilter>(true))
            {
                if (!mf.sharedMesh) continue;
                var b = mf.sharedMesh.bounds;
                var m = bone.worldToLocalMatrix * mf.transform.localToWorldMatrix;
                for (var i = 0; i < 8; i++)
                {
                    var c = b.center + Vector3.Scale(b.extents, new Vector3((i & 1) != 0 ? 1 : -1, (i & 2) != 0 ? 1 : -1, (i & 4) != 0 ? 1 : -1));
                    var p = m.MultiplyPoint3x4(c);
                    if (!any) { box = new Bounds(p, Vector3.zero); any = true; }
                    else box.Encapsulate(p);
                }
            }
            if (!any) return 0;
            var s = box.size;
            var l = Mathf.Max(s.x, Mathf.Max(s.y, s.z)) / Coords.Scale;
            var ls = bone.lossyScale.x;
            return ls > 0 ? l * ls : l;
        }

        public Transform Bone(string name) => name != null && byName.TryGetValue(name.ToLowerInvariant(), out var b) ? b : null;

        static Material placeholderMat;

        /// <summary>Marcador simples quando nao ha modelo (ex.: NPC custom fora do cliente).</summary>
        public void Placeholder(float height, float radius)
        {
            if (disposed) return;
            var h = Mathf.Max(0.1f, height);
            var r = Mathf.Max(0.05f, radius);
            var go = GameObject.CreatePrimitive(PrimitiveType.Capsule);
            go.name = "Placeholder";
            var col = go.GetComponent<Collider>();
            if (col) RenderMats.Destroy(col);
            go.transform.SetParent(model, false);
            // capsula do Unity: altura 2, raio 0.5
            go.transform.localScale = new Vector3(2 * r, h / 2, 2 * r);
            go.transform.localPosition = new Vector3(0, h / 2, 0);
            if (placeholderMat == null)
            {
                // o shader dos modelos glTF esta em Always Included (com as variantes no build); o URP/Lit criado em codigo
                // saia cor-de-rosa no executavel (variantes removidas)
                var sh = Shader.Find("Shader Graphs/glTF-pbrMetallicRoughness");
                if (sh == null) sh = Shader.Find("Universal Render Pipeline/Lit");
                placeholderMat = new Material(sh) { name = "actor placeholder" };
                var c = RenderMats.Hex(0x9a8f7a);
                if (placeholderMat.HasProperty("baseColorFactor")) placeholderMat.SetColor("baseColorFactor", c);
                if (placeholderMat.HasProperty("_BaseColor")) placeholderMat.SetColor("_BaseColor", c);
            }
            go.GetComponent<MeshRenderer>().sharedMaterial = placeholderMat;
            Height = h;
        }

        public void Dispose()
        {
            disposed = true;
            foreach (var m in mixers)
                if (m.Anim != null)
                    m.Anim.Stop();
            mixers.Clear();
            if (Root != null) RenderMats.Destroy(Root.gameObject);
        }
    }
}
