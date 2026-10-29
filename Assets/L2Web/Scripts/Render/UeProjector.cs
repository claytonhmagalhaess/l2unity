// Projector do UE2 sobre o terreno (Projector8 da trilha do login; scratchpad/lobby_sway_re.md 2.1). AProjector::CalcMatrix
// (0x106477f0, FOV != 0): F = Rotation.Vector(), W = ProjTexture.USize * DrawScale, NearDist = (W/2) / tan(FOV/2), apice
// A = Location - F NearDist; no quadro do projetor (x = eixo Y do rotator, y = eixo Z, z = F) u = 0,5 + k x/z, v = 0,5 + k y/z
// com k = 0,5 / tan(FOV/2), ate MaxTraceDistance. No terreno o material base e nulo: MaterialBlendingOp 1 = MODULATE2X da
// textura com a cor do vertice, atenuacao para o cinza (127) nas faces de costas, neblina cinza e o framebuffer
// DESTCOLOR/SRCCOLOR (FB' = 2 src FB). A cor de vertice do passe e a cor assada do terreno (UTerrainSector::SetIntensityMap
// escreve no Diffuse do stream do setor e o passe do projetor liga o mesmo stream com a iluminacao desligada [O,
// lobby_remaining_re.md]): pixel = sat(2 T Cv), FB' = sat(2 pixel FB); Cv acompanha a hora (UeTerrain.OnRelit).
// Aqui: uma malha que segue o terreno (raios no MeshCollider) dentro da pegada do frustum, com o UV da projecao.
using System.Threading.Tasks;
using L2Web.World;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.Rendering;

namespace L2Web.Render
{
    public static class UeProjector
    {
        public const int Grid = 48;

        /// <summary>UV (u, v) do ponto P (UE) e a profundidade z no quadro do projetor.</summary>
        public static Vector3 Project(Vector3 p, Vector3 apex, Vector3 right, Vector3 up, Vector3 fwd, float k)
        {
            var d = p - apex;
            var z = Vector3.Dot(d, fwd);
            if (z <= 1e-3f) return new Vector3(-1, -1, z);
            return new Vector3(0.5f + k * Vector3.Dot(d, right) / z, 0.5f + k * Vector3.Dot(d, up) / z, z);
        }

        public static async Task<GameObject> Build(JObject pj, Collider terrain, Transform parent)
        {
            if (pj == null || !terrain || (bool?)pj["terrain"] == false) return null;
            var url = (string)pj["texture"];
            // lida linear: o cinza 127 da textura tem que valer 0,498 na conta 2x
            var tex = url != null ? await Http.GetTexture(url, true) : null;
            if (!tex || !terrain) return null;
            tex.wrapMode = TextureWrapMode.Clamp;
            var loc = Vec((JArray)pj["loc"]);
            var rot = (JArray)pj["rot"];
            var m = L2Web.Render.Fx.FxMath.RotationMatrix(new L2Web.Render.Fx.FRotator((int)rot[0], (int)rot[1], rot.Count > 2 ? (int)rot[2] : 0));
            Vector3 fwd = m.GetColumn(0), right = m.GetColumn(1), up = m.GetColumn(2);
            var fov = Mathf.Max(0.01f, (float?)pj["fov"] ?? 0) * Mathf.Deg2Rad;
            var w = tex.width * ((float?)pj["drawScale"] ?? 1);
            var near = w / 2 / Mathf.Tan(fov / 2);
            var k = 0.5f / Mathf.Tan(fov / 2);
            var apex = loc - fwd * near;
            var maxTrace = (float?)pj["maxTrace"] ?? 1000;
            // centro da pegada: onde F encontra o terreno
            var o = Coords.ToUnity(loc.x, loc.y, loc.z);
            var dirU = Coords.ToUnity(fwd.x, fwd.y, fwd.z).normalized;
            if (!terrain.Raycast(new Ray(o, dirU), out var hit, maxTrace * Coords.Scale)) return null;
            var center = Coords.FromUnityF(hit.point);
            var dist = (center - loc).magnitude;
            var half = w * (near + dist) / near * 0.55f;
            var verts = new Vector3[(Grid + 1) * (Grid + 1)];
            var uvs = new Vector2[verts.Length];
            var cols = new Color[verts.Length];
            var ok = new bool[verts.Length];
            for (var j = 0; j <= Grid; j++)
                for (var i = 0; i <= Grid; i++)
                {
                    var idx = j * (Grid + 1) + i;
                    float x = center.x - half + 2 * half * i / Grid, y = center.y - half + 2 * half * j / Grid;
                    var top = Coords.ToUnity(x, y, loc.z);
                    if (!terrain.Raycast(new Ray(top, Vector3.down), out var h, maxTrace * Coords.Scale * 2)) continue;
                    var ue = Coords.FromUnityF(h.point);
                    var uv = Project(ue, apex, right, up, fwd, k);
                    // alem do MaxTraceDistance a partir do Location o projetor nao alcanca
                    if (uv.z - near > maxTrace) continue;
                    verts[idx] = h.point + Vector3.up * 0.01f;
                    uvs[idx] = new Vector2(uv.x, uv.y);
                    // Cv = cor assada do terreno no ponto (fora do frustum a textura e cinza neutro: some sem costura)
                    var cv = UeTerrain.ColorAt(x, y);
                    cols[idx] = cv.HasValue ? (Color)cv.Value : new Color(0.5f, 0.5f, 0.5f, 1);
                    ok[idx] = true;
                }
            var tris = new System.Collections.Generic.List<int>();
            for (var j = 0; j < Grid; j++)
                for (var i = 0; i < Grid; i++)
                {
                    int a = j * (Grid + 1) + i, b = a + 1, c = a + Grid + 1, d = c + 1;
                    if (!ok[a] || !ok[b] || !ok[c] || !ok[d]) continue;
                    tris.AddRange(new[] { a, c, b, b, c, d });
                }
            var mesh = new Mesh { name = (string)pj["name"] };
            mesh.indexFormat = IndexFormat.UInt32;
            mesh.vertices = verts;
            mesh.uv = uvs;
            mesh.colors = cols;
            mesh.SetTriangles(tris, 0);
            mesh.RecalculateBounds();
            // a hora muda a cor assada: recolore os vertices do projetor
            var ueXs = new float[verts.Length];
            var ueYs = new float[verts.Length];
            for (var j = 0; j <= Grid; j++)
                for (var i = 0; i <= Grid; i++)
                {
                    var idx = j * (Grid + 1) + i;
                    ueXs[idx] = center.x - half + 2 * half * i / Grid;
                    ueYs[idx] = center.y - half + 2 * half * j / Grid;
                }
            UeTerrain.OnRelit += () =>
            {
                if (!mesh) return;
                var c2 = mesh.colors;
                for (var k = 0; k < c2.Length; k++)
                    if (ok[k] && UeTerrain.ColorAt(ueXs[k], ueYs[k]) is { } cv2)
                        c2[k] = cv2;
                mesh.colors = c2;
            };
            var go = new GameObject("projetor " + (string)pj["name"]);
            go.transform.SetParent(parent, false);
            go.transform.SetPositionAndRotation(Vector3.zero, Quaternion.identity);
            go.transform.localScale = Vector3.one;
            go.AddComponent<MeshFilter>().sharedMesh = mesh;
            var mr = go.AddComponent<MeshRenderer>();
            mr.shadowCastingMode = ShadowCastingMode.Off;
            mr.receiveShadows = false;
            var mat = RenderMats.Fx(Color.white, false, true, tex, false, true);
            var op = (int?)pj["frameOp"] ?? 1;
            if (op == 3)
            {
                // PB_Add: ONE/ONE com neblina preta
                mat.SetFloat("_SrcBlend", (float)BlendMode.One);
                mat.SetFloat("_DstBlend", (float)BlendMode.One);
                mat.SetFloat("_Fog", 2);
            }
            else if (op == 2)
            {
                mat.SetFloat("_SrcBlend", (float)BlendMode.SrcAlpha);
                mat.SetFloat("_DstBlend", (float)BlendMode.OneMinusSrcAlpha);
            }
            else
            {
                // PB_None / PB_Modulate: FB' = 2 src FB, neblina cinza
                mat.SetFloat("_SrcBlend", (float)BlendMode.DstColor);
                mat.SetFloat("_DstBlend", (float)BlendMode.SrcColor);
                mat.SetFloat("_Fog", 3);
                mat.SetFloat("_Gamma2x", 1);
            }
            mat.SetFloat("_ZWrite", 0);
            // a cor de vertice (Cv) multiplica a textura: MODULATE2X(TEXTURE, DIFFUSE)
            mat.SetFloat("_VColor", 1);
            mat.renderQueue = (int)RenderQueue.Transparent - 10;
            mr.sharedMaterial = mat;
            return go;
        }

        static Vector3 Vec(JArray a) => new((float)a[0], (float)a[1], (float)a[2]);
    }
}
