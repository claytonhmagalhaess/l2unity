// Render dos emissores (spec 09 §4.5): sprites (FillVertexBuffer 0x1030a880: eixos da camera, UseDirectionAs, giro,
// UV por subdivisao e BlendBetweenSubdivisions), feixes (0x10313057), fitas (ribbon), malhas (UMeshEmitter::RenderParticles
// 0x10311833: matriz por particula, cor por TFactor) e malhas de vertices. Simulacao em UE; os vertices vao para o Unity
// com Coords.ToUnity. Material: shader L2Web/Particle com o blending da tabela §4.5.1.
// Mistura em gama: o shader e desenhado pelo FxGammaPass (ver FxGammaPass.cs).
// [I] V da textura: o UE tem (0,0) no topo e o Unity na base, logo v_unity = 1 - v_ue (lacuna §4.8.1, a conferir na captura).
using System;
using System.Collections.Generic;
using L2Web.World;
using UnityEngine;
using UnityEngine.Rendering;

namespace L2Web.Render.Fx
{
    public sealed class FxRenderer
    {
        public sealed class EmitterView
        {
            public ParticleEmitterSim Sim;
            public GameObject Go;
            public Mesh Mesh;
            public MeshRenderer R;
            public Material Mat;
            public Texture2D Tex;
            public bool Requested;
            public FxAssets.MeshTemplate Template;
            public Material[] PartMats;
            public FxAssets.VertMeshData VMesh;
            public readonly List<Vector3> V = new();
            public readonly List<Vector2> Uv0 = new();
            public readonly List<Vector2> Uv1 = new();
            public readonly List<Color32> C = new();
            public readonly List<int> I = new();
            public MaterialPropertyBlock Block;
        }

        public sealed class ActorView
        {
            public FxEmitterActor Actor;
            public readonly List<EmitterView> Views = new();
            public Transform Root;
        }

        public readonly Transform Root;
        readonly Dictionary<string, Material> mats = new();
        static Shader shader;
        public static Shader Shader => shader ??= UnityEngine.Shader.Find("L2Web/Particle");
        /// <summary>Matriz UE -> Unity (C) e inversa, para as malhas (§4.5.4).</summary>
        static readonly Matrix4x4 C = new Matrix4x4(new Vector4(-Coords.Scale, 0, 0, 0), new Vector4(0, 0, Coords.Scale, 0), new Vector4(0, Coords.Scale, 0, 0), new Vector4(0, 0, 0, 1));
        static readonly Matrix4x4 Cinv = C.inverse;
        static readonly int ColorId = UnityEngine.Shader.PropertyToID("_Color");
        static readonly int BaseColorId = UnityEngine.Shader.PropertyToID("_BaseColor");

        public FxRenderer(Transform parent)
        {
            Root = new GameObject("efeitos UE").transform;
            if (parent) Root.SetParent(parent, false);
        }

        public static Vector3 UeDir(Vector3 unityDir) => new Vector3(-unityDir.x, unityDir.z, unityDir.y);

        /// <summary>UV da celula idx (§4.5.2): u0 = (idx / V)/U, v0 = (idx % V)/V, u1/v1 = min(+1/U, 1) / min(+1/V, 1).</summary>
        public static (float u0, float v0, float u1, float v1) SubdivisionUv(int idx, int U, int V)
        {
            if (U == 0 || V == 0) return (0, 0, 1, 1);
            float du = 1f / U, dv = 1f / V;
            var u0 = du * (idx / V);
            var v0 = dv * (idx % V);
            return (u0, v0, Mathf.Min(u0 + du, 1), Mathf.Min(v0 + dv, 1));
        }

        public ActorView Create(FxEmitterActor a)
        {
            var v = new ActorView { Actor = a };
            v.Root = new GameObject(a.Name).transform;
            v.Root.SetParent(Root, false);
            foreach (var e in a.Emitters)
            {
                var ev = new EmitterView { Sim = e };
                if (e.D.Kind != EmitterKind.Mesh)
                {
                    ev.Go = new GameObject(e.D.Name);
                    ev.Go.transform.SetParent(v.Root, false);
                    ev.Mesh = new Mesh { name = a.Name + " " + e.D.Name };
                    ev.Mesh.MarkDynamic();
                    ev.Go.AddComponent<MeshFilter>().sharedMesh = ev.Mesh;
                    ev.R = ev.Go.AddComponent<MeshRenderer>();
                    ev.R.shadowCastingMode = ShadowCastingMode.Off;
                    ev.R.receiveShadows = false;
                }
                v.Views.Add(ev);
            }
            return v;
        }

        public void Destroy(ActorView v)
        {
            foreach (var ev in v.Views)
            {
                if (ev.Mesh) RenderMats.Destroy(ev.Mesh);
                if (ev.Go) RenderMats.Destroy(ev.Go);
            }
            if (v.Root) RenderMats.Destroy(v.Root.gameObject);
            v.Views.Clear();
        }

        // ------------------------------------------------------------------ materiais

        public static (BlendMode src, BlendMode dst) Blend(DrawStyle s) => s switch
        {
            DrawStyle.Regular => (BlendMode.One, BlendMode.Zero),
            DrawStyle.AlphaBlend => (BlendMode.SrcAlpha, BlendMode.OneMinusSrcAlpha),
            DrawStyle.Modulated => (BlendMode.DstColor, BlendMode.SrcColor),
            DrawStyle.AlphaModulate => (BlendMode.One, BlendMode.OneMinusSrcAlpha),
            DrawStyle.Darken => (BlendMode.Zero, BlendMode.OneMinusSrcColor),
            DrawStyle.Brighten => (BlendMode.One, BlendMode.OneMinusSrcColor),
            _ => (BlendMode.One, BlendMode.One),
        };

        /// <summary>Cor de neblina forcada (D3DDrv): 0 sem neblina, 1 normal, 2 preto (aditivos), 3 cinza 127 (Modulated).</summary>
        public static int FogMode(DrawStyle s, bool disableFogging) => disableFogging ? 0 : s switch
        {
            DrawStyle.Regular => 1,
            DrawStyle.AlphaBlend => 1,
            DrawStyle.Modulated => 3,
            _ => 2,
        };

        public Material Material(Texture tex, DrawStyle style, bool alphaTest, int alphaRef, bool zTest, bool zWrite, bool fogOff, bool blend2)
        {
            var key = $"{(tex ? tex.name : "")}|{(int)style}|{alphaTest}|{alphaRef}|{zTest}|{zWrite}|{fogOff}|{blend2}";
            if (mats.TryGetValue(key, out var m) && m) return m;
            m = new Material(Shader) { name = "l2web particle " + key };
            if (tex) m.SetTexture("_MainTex", tex);
            var (src, dst) = Blend(style);
            m.SetFloat("_SrcBlend", (float)src);
            m.SetFloat("_DstBlend", (float)dst);
            m.SetFloat("_ZWrite", zWrite ? 1 : 0);
            m.SetFloat("_ZTest", zTest ? (float)CompareFunction.LessEqual : (float)CompareFunction.Always);
            m.SetFloat("_Cull", (float)CullMode.Off);
            m.SetFloat("_AlphaTest", alphaTest ? 1 : 0);
            m.SetFloat("_AlphaRef", alphaRef);
            m.SetFloat("_FogMode", FogMode(style, fogOff));
            m.SetFloat("_Blend2", blend2 ? 1 : 0);
            m.renderQueue = style == DrawStyle.Regular ? (int)RenderQueue.AlphaTest : (int)RenderQueue.Transparent;
            mats[key] = m;
            return m;
        }

        // ------------------------------------------------------------------ desenho

        /// <summary>Monta as malhas de um ator (depois do Tick da simulacao). camera e a camera do jogo.</summary>
        public void Draw(ActorView v, Camera cam, bool visible)
        {
            var a = v.Actor;
            foreach (var ev in v.Views)
            {
                var e = ev.Sim;
                if (!visible || e.D.Disabled || !e.Initialized || a.Destroyed)
                {
                    if (ev.Mesh) ev.Mesh.Clear();
                    continue;
                }
                e.Inactive = false; // RenderParticles zera a inatividade
                EnsureAssets(ev);
                switch (e.D.Kind)
                {
                    case EmitterKind.Mesh: DrawMesh(a, ev, cam); break;
                    case EmitterKind.Beam: DrawBeam(a, ev, cam); break;
                    case EmitterKind.Ribbon: DrawRibbon(a, ev); break;
                    case EmitterKind.VertMesh: DrawVertMesh(a, ev); break;
                    default: DrawSprites(a, ev, cam); break;
                }
            }
        }

        void EnsureAssets(EmitterView ev)
        {
            var d = ev.Sim.D;
            if (ev.Requested) return;
            ev.Requested = true;
            if (d.Kind == EmitterKind.Mesh)
            {
                FxAssets.StaticMesh(d.StaticMesh).ContinueWith(t =>
                {
                    ev.Template = t.Status == System.Threading.Tasks.TaskStatus.RanToCompletion ? t.Result : null;
                    if (ev.Template != null && !d.UseMeshBlendMode)
                    {
                        ev.PartMats = new Material[ev.Template.Parts.Count];
                        for (var i = 0; i < ev.PartMats.Length; i++)
                        {
                            var src = ev.Template.Parts[i].Materials.Length > 0 ? ev.Template.Parts[i].Materials[0] : null;
                            var tex = src && src.HasProperty("_MainTex") ? src.GetTexture("_MainTex") : src ? src.mainTexture : null;
                            ev.PartMats[i] = Material(tex, d.DrawStyle, d.AlphaTest, d.AlphaRef, d.ZTest, d.ZWrite, ev.Sim.RealDisableFogging, false);
                        }
                    }
                }, System.Threading.Tasks.TaskScheduler.FromCurrentSynchronizationContext());
                return;
            }
            if (d.Kind == EmitterKind.VertMesh)
                FxAssets.VertMesh(d.VertexMesh).ContinueWith(t => ev.VMesh = t.Status == System.Threading.Tasks.TaskStatus.RanToCompletion ? t.Result : null, System.Threading.Tasks.TaskScheduler.FromCurrentSynchronizationContext());
            FxAssets.Texture(d.Texture).ContinueWith(t =>
            {
                ev.Tex = t.Status == System.Threading.Tasks.TaskStatus.RanToCompletion ? t.Result : null;
                ev.Mat = Material(ev.Tex, d.DrawStyle, d.AlphaTest, d.AlphaRef, d.ZTest, d.ZWrite, ev.Sim.RealDisableFogging, d.BlendBetweenSubdivisions && !d.UseRandomSubdivision && d.Kind == EmitterKind.Sprite);
                if (ev.R) ev.R.sharedMaterial = ev.Mat;
            }, System.Threading.Tasks.TaskScheduler.FromCurrentSynchronizationContext());
        }

        static Vector3 ToWorld(FxEmitterActor a, ParticleEmitterSim e, Vector3 local) =>
            e.D.CoordinateSystem == CoordSystem.Relative ? a.Location + FxMath.RotateVector(local, a.Rotation) : local;

        static Vector3 ToWorldDir(FxEmitterActor a, ParticleEmitterSim e, Vector3 local) =>
            e.D.CoordinateSystem == CoordSystem.Relative ? FxMath.RotateVector(local, a.Rotation) : local;

        void Begin(EmitterView ev)
        {
            ev.V.Clear();
            ev.Uv0.Clear();
            ev.Uv1.Clear();
            ev.C.Clear();
            ev.I.Clear();
        }

        /// <summary>TFactor da particula de malha (§4.5.4): P.Color / 255 sem conversao de espaco de cor (o shader mistura em gama).</summary>
        public static Vector4 MeshTint(Color32 c) => new Vector4(c.r / 255f, c.g / 255f, c.b / 255f, c.a / 255f);

        void End(EmitterView ev)
        {
            var m = ev.Mesh;
            m.Clear();
            if (ev.V.Count == 0) return;
            FxGammaPass.DrawnFrame = Time.frameCount;
            m.SetVertices(ev.V);
            m.SetUVs(0, ev.Uv0);
            m.SetUVs(1, ev.Uv1);
            m.SetColors(ev.C);
            m.SetTriangles(ev.I, 0);
            m.RecalculateBounds();
        }

        static void Add(EmitterView ev, Vector3 ue, float u, float v, float u1, float v1, Color32 c)
        {
            ev.V.Add(Coords.ToUnity(ue.x, ue.y, ue.z));
            ev.Uv0.Add(new Vector2(u, 1 - v));
            ev.Uv1.Add(new Vector2(u1, 1 - v1));
            ev.C.Add(c);
        }

        // ------------------------------------------------------------------ §4.5.2 sprites

        void DrawSprites(FxEmitterActor a, EmitterView ev, Camera cam)
        {
            var e = ev.Sim;
            var d = e.D;
            Begin(ev);
            // [I] 33 dos 2.413 SpriteEmitter nao tem Texture: emissores auxiliares (fonte de posicao/velocidade), nao desenhados
            if (!cam || e.Particles.Length == 0 || string.IsNullOrEmpty(d.Texture)) { End(ev); return; }
            var up = UeDir(cam.transform.up);
            var right = UeDir(cam.transform.right);
            var fwd = FxMath.SafeNormal(Vector3.Cross(up, right));
            var camPos = Coords.FromUnityF(cam.transform.position);
            var pn = d.UseRotationFrom == RotationSource.Actor ? FxMath.RotateVector(e.RealProjectionNormal, a.Rotation) : e.RealProjectionNormal;
            int U = d.TextureUSubdivisions, Vs = d.TextureVSubdivisions;
            var n = U * Vs;
            var blend2 = d.BlendBetweenSubdivisions && !d.UseRandomSubdivision && U > 0 && Vs > 0;
            var count = Math.Min(e.ActiveParticles, e.Particles.Length);
            for (var i = 0; i < count; i++)
            {
                ref var p = ref e.Particles[i];
                if (!p.IsActive) continue;
                var loc = ToWorld(a, e, p.Location);
                var dir = d.UseDirectionAs == DirectionUsage.Normal ? pn : FxMath.SafeNormal(ToWorldDir(a, e, p.Location - p.OldLocation));
                Vector3 A, B;
                switch (d.UseDirectionAs)
                {
                    case DirectionUsage.Up:
                    case DirectionUsage.UpAndNormal:
                    {
                        var side = d.UseDirectionAs == DirectionUsage.Up ? FxMath.SafeNormal(Vector3.Cross(dir, loc - camPos)) : Vector3.Cross(dir, pn);
                        A = p.Size.y * dir;
                        B = p.Size.x * side;
                        break;
                    }
                    case DirectionUsage.Right:
                    case DirectionUsage.RightAndNormal:
                    {
                        var side = d.UseDirectionAs == DirectionUsage.Right ? FxMath.SafeNormal(Vector3.Cross(dir, loc - camPos)) : Vector3.Cross(dir, pn);
                        A = p.Size.y * side;
                        B = p.Size.x * dir;
                        break;
                    }
                    case DirectionUsage.Forward:
                    case DirectionUsage.Normal:
                    {
                        // [I] base ortonormal perpendicular a dir (lacuna §4.8.4)
                        var n1 = FxMath.SafeNormal(Vector3.Cross(FxMath.NonParallel(dir), dir));
                        var n2 = Vector3.Cross(dir, n1);
                        A = p.Size.y * n1;
                        B = p.Size.x * n2;
                        break;
                    }
                    case DirectionUsage.Scale:
                        A = p.Size.y * up;
                        B = p.Size.x * right;
                        break;
                    default:
                        A = p.Size.x * up;
                        B = p.Size.x * right;
                        break;
                }
                if (d.SpinParticles)
                {
                    var ang = FxMath.SpinAngle(p.SpinsPerSecond.x, p.StartSpin.x, p.Time);
                    A = FxMath.RotateAngleAxis(A, ang, fwd);
                    B = FxMath.RotateAngleAxis(B, ang, fwd);
                }
                // UV por subdivisao (indice percorre a folha coluna a coluna: u = idx / V, v = idx % V)
                float u0 = 0, v0 = 0, u1 = 1, v1 = 1, bu0 = 0, bv0 = 0, bu1 = 1, bv1 = 1;
                var rel = p.MaxLifetime == 0 ? 0 : FxMath.Clamp(p.Time / p.MaxLifetime, 0, 1);
                var c = p.Color;
                if (U > 0 && Vs > 0)
                {
                    var idx = e.SubdivisionIndex(in p, rel);
                    (u0, v0, u1, v1) = SubdivisionUv(idx, U, Vs);
                    if (blend2 && p.Subdivision == -1)
                    {
                        var nx = idx + 1 == n ? idx : idx + 1;
                        (bu0, bv0, bu1, bv1) = SubdivisionUv(nx, U, Vs);
                        float b;
                        if (d.UseSubdivisionScale && d.SubdivisionScale.Count > 0)
                        {
                            var j = Math.Min(idx, d.SubdivisionScale.Count - 1);
                            var t0 = j == 0 ? 0 : d.SubdivisionScale[j - 1];
                            var t1 = d.SubdivisionScale[j];
                            b = t1 > t0 ? FxMath.Clamp((rel - t0) / (t1 - t0), 0, 1) : 0;
                        }
                        else b = FxMath.Frac(rel * n);
                        c.a = (byte)FxMath.RoundHalfEven(b * 255);
                    }
                    else { bu0 = u0; bv0 = v0; bu1 = u1; bv1 = v1; }
                }
                var b0 = ev.V.Count;
                Add(ev, loc - A - B, u0, v1, bu0, bv1, c);
                Add(ev, loc - A + B, u1, v1, bu1, bv1, c);
                Add(ev, loc + A - B, u0, v0, bu0, bv0, c);
                Add(ev, loc + A + B, u1, v0, bu1, bv0, c);
                ev.I.Add(b0); ev.I.Add(b0 + 1); ev.I.Add(b0 + 2);
                ev.I.Add(b0 + 1); ev.I.Add(b0 + 3); ev.I.Add(b0 + 2);
            }
            End(ev);
        }

        // ------------------------------------------------------------------ §4.5.5 feixes

        void DrawBeam(FxEmitterActor a, EmitterView ev, Camera cam)
        {
            var e = (BeamEmitterSim)ev.Sim;
            var d = e.D;
            Begin(ev);
            if (!cam || e.Particles.Length == 0 || ev.Tex == null && d.Texture != null && !ev.Requested) { End(ev); return; }
            e.ApplyDynamicNoise();
            var camPos = Coords.FromUnityF(cam.transform.position);
            var hf = e.HF;
            var sheets = e.Sheets;
            var count = Math.Min(e.ActiveParticles, e.Particles.Length);
            for (var i = 0; i < count; i++)
            {
                ref var p = ref e.Particles[i];
                if (!p.IsActive || e.HFPoints.Length < (i + 1) * hf) continue;
                for (var s = 0; s < sheets; s++)
                {
                    var prev = ToWorld(a, e, 2 * e.HFPoints[i * hf].Location - e.HFPoints[i * hf + Math.Min(1, hf - 1)].Location);
                    var b0 = ev.V.Count;
                    for (var j = 0; j < hf; j++)
                    {
                        var hp = e.HFPoints[i * hf + j];
                        var loc = ToWorld(a, e, hp.Location);
                        var dd = loc - prev;
                        var side = FxMath.SafeNormal(Vector3.Cross(dd, prev - camPos));
                        if (s != 0) side = FxMath.RotateAngleAxis(side, (32768 / sheets) * s, FxMath.SafeNormal(dd));
                        side *= p.Size.x;
                        var u = d.BeamTextureUScale * hp.T;
                        Add(ev, loc + side, u, 0, u, 0, p.Color);
                        Add(ev, loc - side, u, d.BeamTextureVScale, u, d.BeamTextureVScale, p.Color);
                        prev = loc;
                    }
                    for (var j = 0; j < hf - 1; j++)
                    {
                        var b = b0 + j * 2;
                        ev.I.Add(b); ev.I.Add(b + 1); ev.I.Add(b + 2);
                        ev.I.Add(b + 1); ev.I.Add(b + 3); ev.I.Add(b + 2);
                    }
                }
            }
            End(ev);
        }

        // ------------------------------------------------------------------ §4.5.6 fitas

        void DrawRibbon(FxEmitterActor a, EmitterView ev)
        {
            var e = (RibbonEmitterSim)ev.Sim;
            var d = e.D;
            Begin(ev);
            var pts = e.RenderPoints();
            if (e.Particles.Length == 0 || !e.Particles[0].IsActive || pts.Count < 2) { End(ev); return; }
            var col = e.Particles[0].Color;
            var n = pts.Count;
            var frac = e.RealSampleRate > 0 ? FxMath.Clamp(e.SampleTimer / e.RealSampleRate, 0, 1) : 0;
            var len = 0f;
            var acc = 0f;
            if (d.bLengthBasedTextureU)
                for (var i = 1; i < n; i++) len += Vector3.Distance(pts[i].Location, pts[i - 1].Location);
            var b0 = ev.V.Count;
            for (var i = 0; i < n; i++)
            {
                float u;
                if (d.bLengthBasedTextureU && len > 0)
                {
                    if (i > 0) acc += Vector3.Distance(pts[i].Location, pts[i - 1].Location);
                    u = d.RibbonTextureUScale * acc / len;
                }
                else u = d.RibbonTextureUScale * FxMath.Clamp((i + frac) / (n - 1), 0, 1);
                var top = ToWorld(a, e, pts[i].Location);
                var under = ToWorld(a, e, pts[i].LocationUnder);
                Add(ev, top, u, 0, u, 0, col);
                Add(ev, under, u, d.RibbonTextureVScale, u, d.RibbonTextureVScale, col);
            }
            for (var q = 0; q < n - 1; q++)
            {
                var b = b0 + q * 2;
                ev.I.Add(b); ev.I.Add(b + 1); ev.I.Add(b + 2);
                ev.I.Add(b + 1); ev.I.Add(b + 3); ev.I.Add(b + 2);
            }
            End(ev);
        }

        // ------------------------------------------------------------------ §4.5.4 malhas

        /// <summary>Matriz UE da particula de malha (vetor-coluna): Relative T(O)R(O)T(P)R(spin)S(size)T(-PrePivot); Spray com R(P.Rotation).</summary>
        public static Matrix4x4 MeshMatrixUe(FxEmitterActor a, ParticleEmitterSim e, in Particle p)
        {
            var d = e.D;
            var spin = d.SpinParticles ? FxMath.RotationMatrix(FxMath.SpinRotator(p.SpinsPerSecond, p.StartSpin, p.Time)) : Matrix4x4.identity;
            var m = Matrix4x4.Translate(p.Location) * spin * Matrix4x4.Scale(p.Size) * Matrix4x4.Translate(-a.PrePivot);
            if (d.CoordinateSystem == CoordSystem.Relative) m = Matrix4x4.Translate(a.Location) * FxMath.RotationMatrix(a.Rotation) * m;
            else if (d.CoordinateSystem == CoordSystem.Spray) m = Matrix4x4.Translate(p.Location) * FxMath.RotationMatrix(p.Rotation) * spin * Matrix4x4.Scale(p.Size) * Matrix4x4.Translate(-a.PrePivot);
            return m;
        }

        void DrawMesh(FxEmitterActor a, EmitterView ev, Camera cam)
        {
            var e = ev.Sim;
            var d = e.D;
            var t = ev.Template;
            if (t == null || e.Particles.Length == 0) return;
            if (e.MeshExtent == 0 && t.MeshExtent > 0)
            {
                e.MeshExtent = t.MeshExtent;
                e.RealExtentMultiplier = d.ExtentMultiplier * t.MeshExtent;
            }
            ev.Block ??= new MaterialPropertyBlock();
            var count = Math.Min(e.ActiveParticles, e.Particles.Length);
            for (var i = 0; i < count; i++)
            {
                ref var p = ref e.Particles[i];
                if (!p.IsActive) continue;
                var m = C * MeshMatrixUe(a, e, in p) * Cinv;
                for (var k = 0; k < t.Parts.Count; k++)
                {
                    var part = t.Parts[k];
                    var own = !(!d.UseMeshBlendMode && ev.PartMats != null && k < ev.PartMats.Length);
                    var mat = !own ? ev.PartMats[k] : part.Materials.Length > 0 ? part.Materials[0] : null;
                    if (!mat) continue;
                    ev.Block.Clear();
                    if (!own)
                    {
                        // TFactor = P.Color/255 no L2Web/Particle, que mistura em gama: o valor vai cru (SetColor
                        // converteria de gama para linear no projeto linear)
                        ev.Block.SetVector(ColorId, MeshTint(p.Color));
                    }
                    else if (d.UseParticleColor)
                    {
                        // material proprio da malha (glTF, linear): SetColor faz a unica conversao gama -> linear [I]
                        ev.Block.SetColor(ColorId, p.Color);
                        ev.Block.SetColor(BaseColorId, p.Color);
                    }
                    Graphics.DrawMesh(part.Mesh, m * part.Local, mat, Root.gameObject.layer, null, 0, ev.Block, false, false, false);
                }
                FxGammaPass.DrawnFrame = Time.frameCount;
            }
        }

        // ------------------------------------------------------------------ §4.5.7 malhas de vertices

        void DrawVertMesh(FxEmitterActor a, EmitterView ev)
        {
            var e = (VertMeshEmitterSim)ev.Sim;
            var d = e.D;
            Begin(ev);
            var vm = ev.VMesh;
            if (vm == null || vm.Frames.Length == 0 || e.Particles.Length == 0) { End(ev); return; }
            const float fps = 30f; // [I] taxa da sequencia do VertMesh (lacuna §4.8.9)
            var count = Math.Min(e.ActiveParticles, e.Particles.Length);
            for (var i = 0; i < count; i++)
            {
                ref var p = ref e.Particles[i];
                if (!p.IsActive) continue;
                var nf = vm.Frames.Length;
                var ft = (i < e.AnimTime.Length ? e.AnimTime[i] : 0) * fps * a.SpeedRate;
                var f0 = ((int)ft % nf + nf) % nf;
                var f1 = (f0 + 1) % nf;
                var k = ft - Mathf.Floor(ft);
                var m = MeshMatrixUe(a, e, in p);
                var b0 = ev.V.Count;
                for (var w = 0; w < vm.Wedges.Length; w++)
                {
                    var v = Vector3.Lerp(vm.Frames[f0][vm.Wedges[w]], vm.Frames[f1][vm.Wedges[w]], k);
                    Add(ev, m.MultiplyPoint3x4(v), vm.Uv[w].x, vm.Uv[w].y, vm.Uv[w].x, vm.Uv[w].y, p.Color);
                }
                for (var w = 0; w < vm.Triangles.Length; w++) ev.I.Add(b0 + vm.Triangles[w]);
            }
            End(ev);
        }
    }
}
