// Gerente dos efeitos de uma cena: instancia as classes de efeito (FxLibrary) como FxEmitterActor, avanca a simulacao
// (AEmitter::Tick) e desenha (FxRenderer) com a visibilidade do AEmitter::Render (spec 09 §4.5.3: VisibleLimit /
// VisibilityInterpRange ou a distancia GL2ActorCR x 2048). Tambem carrega os emissores dos mapas (<tile>_emitters.json de
// Docs/tools/export_map_emitters.py) como atores Emitter no mesmo simulador.
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using L2Web.World;
using Newtonsoft.Json.Linq;
using UnityEngine;

namespace L2Web.Render.Fx
{
    public sealed class FxWorld
    {
        public static FxWorld Instance;

        public readonly FxRenderer Renderer;
        public FxLibrary Library;
        public readonly List<(FxEmitterActor actor, FxRenderer.ActorView view)> Actors = new();
        readonly List<(FxEmitterActor actor, FxRenderer.ActorView view)> pendingAdd = new();
        public readonly FxRand Rng = new FxRand(Environment.TickCount);
        public Camera Camera;
        /// <summary>Alvo de vista (ViewTarget.Location, UE) para a distancia de visibilidade; nulo = posicao da camera.</summary>
        public Func<Vector3> ViewTarget;
        /// <summary>GL2ActorCR x 32768 x 0.0625: [I] GL2ActorCR = 2 (alcance de atores das opcoes) -> 4096 unidades.</summary>
        public float ActorCullDistance = 4096;
        public Func<Vector3, Vector3, (bool, Vector3, Vector3)> LineCheck;
        public Action<string, Vector3, float, float, float> Sound;
        public bool Disposed;
        readonly bool log = Array.IndexOf(Environment.GetCommandLineArgs(), "-l2fxlog") >= 0;
        public int Spawned;

        public FxWorld(Transform parent, bool main = false)
        {
            Renderer = new FxRenderer(parent);
            if (main) Instance = this;
        }

        public async Task Ready()
        {
            Library ??= await FxAssets.Library();
            await FxAssets.Map();
        }

        /// <summary>Cria o ator de uma classe (sem posicionar); null se a classe nao existe ou a biblioteca nao carregou.</summary>
        public FxEmitterActor Spawn(string cls, Vector3 location, FRotator rotation, IFxFrame owner = null)
        {
            var def = Library?.Get(cls);
            if (def == null)
            {
                if (log) Debug.LogWarning("[fx] classe ausente " + cls);
                return null;
            }
            var a = Spawn(def, location, rotation, owner);
            return a;
        }

        public FxEmitterActor Spawn(FxClassDef def, Vector3 location, FRotator rotation, IFxFrame owner = null)
        {
            var a = new FxEmitterActor(def, Rng) { Location = location, Rotation = rotation, Owner = owner, LineCheckFn = LineCheck, SoundFn = Sound };
            var v = Renderer.Create(a);
            pendingAdd.Add((a, v));
            Spawned++;
            if (log) Debug.Log($"[fx] spawn {def.Name} em {location} rot {rotation} emissores={def.Emitters.Count}");
            return a;
        }

        public void Remove(FxEmitterActor a)
        {
            a.Destroy();
        }

        /// <summary>Um quadro: Tick de cada ator, visibilidade e desenho.</summary>
        public void Tick(float dt)
        {
            if (pendingAdd.Count > 0)
            {
                Actors.AddRange(pendingAdd);
                pendingAdd.Clear();
            }
            var cam = Camera;
            var view = ViewTarget != null ? ViewTarget() : cam ? Coords.FromUnityF(cam.transform.position) : Vector3.zero;
            for (var i = Actors.Count - 1; i >= 0; i--)
            {
                var (a, v) = Actors[i];
                var alive = a.Tick(dt);
                if (!alive)
                {
                    Renderer.Destroy(v);
                    Actors.RemoveAt(i);
                    continue;
                }
                var d = Vector3.Distance(view, a.Location);
                var visible = true;
                if (!a.VisibleLimit.IsZero)
                {
                    visible = a.VisibleLimit.Min <= d && d <= a.VisibleLimit.Max;
                    if (visible && a.VisibilityInterpRange > 0)
                    {
                        var edge = Mathf.Min(d - a.VisibleLimit.Min, a.VisibleLimit.Max - d);
                        a.SetOpacityRatio(Mathf.Min(edge / a.VisibilityInterpRange, 1));
                    }
                }
                else if (d > ActorCullDistance) visible = false;
                Renderer.Draw(v, cam, visible);
            }
        }

        /// <summary>Pede as texturas/malhas de uma classe antes do spawn (o cliente carrega o pacote no StaticLoadObject).</summary>
        public void Prefetch(string cls)
        {
            var def = Library?.Get(cls);
            if (def == null) return;
            foreach (var e in def.Emitters)
            {
                if (!string.IsNullOrEmpty(e.Texture)) FxAssets.Texture(e.Texture);
                if (!string.IsNullOrEmpty(e.StaticMesh)) FxAssets.StaticMesh(e.StaticMesh);
                if (!string.IsNullOrEmpty(e.VertexMesh)) FxAssets.VertMesh(e.VertexMesh);
            }
        }

        /// <summary>Resumo dos atores vivos (diagnostico -l2fxtest/-l2fxlog).</summary>
        public string Describe()
        {
            var sb = new System.Text.StringBuilder();
            foreach (var (a, v) in Actors)
            {
                if (a.Class.Package == "map") continue;
                sb.Append($"\n  {a.Name} loc={a.Location} phys={a.Physics} age={a.Age:0.00} bone={(a.AttachedBone != null)} life={a.LifeSpan}");
                for (var i = 0; i < a.Emitters.Count; i++)
                {
                    var e = a.Emitters[i];
                    var ev = i < v.Views.Count ? v.Views[i] : null;
                    sb.Append($"\n    [{i}] {e.D.Kind} {e.D.Name} init={e.Initialized} dis={e.D.Disabled} delay={e.InitialDelay:0.00} max={e.MaxActiveParticles} live={e.LiveCount()} dead={e.AllParticlesDead} life={e.D.LifetimeRange} tex={(ev?.Tex ? ev.Tex.name : "-")} tmpl={(ev?.Template != null ? ev.Template.Parts.Count.ToString() : "-")} mat={(ev?.Mat ? "ok" : "-")} req={ev?.Requested}");
                    var n = Math.Min(e.ActiveParticles, e.Particles.Length);
                    for (var k = 0; k < n && k < 2; k++)
                    {
                        var p = e.Particles[k];
                        if (!p.IsActive) continue;
                        sb.Append($" p{k}=loc{p.Location} size{p.Size} col({p.Color.r},{p.Color.g},{p.Color.b},{p.Color.a}) t={p.Time:0.00}/{p.MaxLifetime:0.00}");
                    }
                }
            }
            return sb.ToString();
        }

        public void Clear()
        {
            foreach (var (a, v) in Actors)
            {
                a.Destroy();
                Renderer.Destroy(v);
            }
            Actors.Clear();
            foreach (var (a, v) in pendingAdd) Renderer.Destroy(v);
            pendingAdd.Clear();
        }

        public void Dispose()
        {
            Clear();
            Disposed = true;
            if (Instance == this) Instance = null;
            if (Renderer.Root) RenderMats.Destroy(Renderer.Root.gameObject);
        }

        // ------------------------------------------------------------------ emissores dos mapas

        /// <summary>Atores Emitter de um mapa ({"emitters": [{name, loc, rot, drawScale, autoReset, subs: [props + cls]}]}).</summary>
        /// <summary>Atores criados e ainda nao incorporados (ate o proximo Tick).</summary>
        public IEnumerable<FxEmitterActor> Pending { get { foreach (var (a, _) in pendingAdd) yield return a; } }

        public async Task<int> LoadMapEmitters(string url)
        {
            await Ready();
            JObject j;
            try
            {
                j = await Http.GetJson<JObject>(url);
            }
            catch (Exception e)
            {
                Debug.LogWarning("emissores: " + e.Message);
                return 0;
            }
            if (Disposed || j?["emitters"] is not JArray list) return 0;
            var n = 0;
            foreach (JObject e in list)
            {
                var def = MapEmitterClass(e, Library.EngineDefaults);
                if (def == null) continue;
                var loc = EmitterDef.Vec(e["loc"]);
                var rot = EmitterDef.Rot(e["rot"]);
                Spawn(def, loc, rot);
                n++;
            }
            return n;
        }

        /// <summary>Classe de efeito montada de um ator Emitter do mapa (defaults de Emitter + propriedades gravadas).</summary>
        public static FxClassDef MapEmitterClass(JObject e, JObject engineDefaults)
        {
            var c = new FxClassDef { Name = (string)e["name"] ?? "Emitter", Package = "map" };
            c.ApplyActor(engineDefaults?["Emitter"]?["defaults"] as JObject);
            var actorProps = new JObject();
            foreach (var kv in e)
                if (kv.Key != "subs" && kv.Key != "loc" && kv.Key != "rot" && kv.Key != "name") actorProps[kv.Key] = kv.Value;
            if (e["drawScale"] != null) actorProps["DrawScale"] = e["drawScale"];
            if (e["autoReset"] != null) actorProps["AutoReset"] = e["autoReset"];
            if (e["autoReplay"] != null) actorProps["AutoReplay"] = e["autoReplay"];
            c.ApplyActor(actorProps);
            if (e["subs"] is JArray subs)
                foreach (JObject s in subs)
                {
                    var cls = (string)s["cls"] ?? "SpriteEmitter";
                    var d = EmitterDef.ForClass(cls, engineDefaults);
                    d.Apply(s);
                    c.Emitters.Add(d);
                }
            return c.Emitters.Count > 0 ? c : null;
        }
    }
}
