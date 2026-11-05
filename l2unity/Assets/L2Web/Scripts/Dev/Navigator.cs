// Navegacao de teste ate um NPC: o pathfinding do servidor tem buffer limitado (~500 celulas), entao um destino longe
// dentro de um predio falha inteiro e o personagem nem sai do lugar. Aqui uma busca em largura sobre o geodata que o
// cliente ja carrega (flags NSWE e altura da camada baixa) acha o caminho; ele e enviado em trechos curtos (o servidor
// valida cada um) e, perto do NPC, fala com ele (Action duas vezes, como o clique).
//   L2Web.Dev.Navigator.GoTalk(30093)   ->  Navigator.Status / Navigator.Log
using System.Collections.Generic;
using System.Threading.Tasks;
using L2Web.Net;
using L2Web.Render;
using UnityEngine;

namespace L2Web.Dev
{
    public static class Navigator
    {
        public static string Status = "parado";
        public static readonly List<string> Log = new();

        const int C = GeoTerrain.CellSize;

        public static void GoTalk(int npcId, float reach = 100) => Run(npcId, reach).Forget();

        static float Dist(float ax, float ay, float bx, float by) => Mathf.Sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by));

        /// <summary>Caminho (centros de celula) de (sx, sy) ate a primeira celula a `reach` de (tx, ty); null se nao achou.</summary>
        public static List<Vector2> FindPath(float sx, float sy, float tx, float ty, float reach, int radiusCells = 320)
        {
            int ox = Mathf.FloorToInt(sx / C) - radiusCells, oy = Mathf.FloorToInt(sy / C) - radiusCells, n = radiusCells * 2 + 1;
            var prev = new int[n * n];
            for (var i = 0; i < prev.Length; i++) prev[i] = -2;
            int Idx(int cx, int cy) => (cy - oy) * n + (cx - ox);
            var start = Idx(Mathf.FloorToInt(sx / C), Mathf.FloorToInt(sy / C));
            var q = new Queue<int>();
            q.Enqueue(start);
            prev[start] = -1;
            // E, W, S, N: bit do NSWE, deslocamento
            int[] bit = { 1, 2, 4, 8 }, dx = { 1, -1, 0, 0 }, dy = { 0, 0, 1, -1 };
            var goal = -1;
            while (q.Count > 0)
            {
                var cur = q.Dequeue();
                int cx = cur % n + ox, cy = cur / n + oy;
                float wx = cx * C + C / 2f, wy = cy * C + C / 2f;
                if (Dist(wx, wy, tx, ty) <= reach)
                {
                    goal = cur;
                    break;
                }
                if (!GeoTerrain.CellAt(wx, wy, out var f, out var h, out _)) continue;
                for (var k = 0; k < 4; k++)
                {
                    if ((f & bit[k]) == 0) continue;
                    int nx = cx + dx[k], ny = cy + dy[k];
                    if (nx < ox || ny < oy || nx >= ox + n || ny >= oy + n) continue;
                    var ni = Idx(nx, ny);
                    if (prev[ni] != -2) continue;
                    if (!GeoTerrain.CellAt(nx * C + C / 2f, ny * C + C / 2f, out _, out var nh, out _)) continue;
                    if (Mathf.Abs(nh - h) > 48) continue;
                    prev[ni] = cur;
                    q.Enqueue(ni);
                }
            }
            if (goal < 0) return null;
            var path = new List<Vector2>();
            for (var c = goal; c >= 0; c = prev[c]) path.Add(new Vector2((c % n + ox) * C + C / 2f, (c / n + oy) * C + C / 2f));
            path.Reverse();
            return path;
        }

        static async Task Run(int npcId, float reach)
        {
            Log.Clear();
            var app = App.Instance;
            World.Entity npc = null;
            foreach (var e in app.World.Entities.Values)
                if (e.NpcId == npcId)
                    npc = e;
            if (npc == null)
            {
                Status = "NPC nao esta em volta";
                return;
            }
            var s = app.World.Self;
            var path = FindPath(s.X, s.Y, npc.X, npc.Y, reach);
            if (path == null)
            {
                Status = "sem caminho no geodata carregado";
                return;
            }
            // trechos de ate ~20 celulas, cortando nas curvas
            var way = new List<Vector2>();
            var last = path[0];
            for (var i = 1; i < path.Count; i++)
            {
                var turn = i + 1 < path.Count && (path[i + 1] - path[i]).normalized != (path[i] - path[i - 1]).normalized;
                if (turn || Vector2.Distance(last, path[i]) >= 20 * C || i == path.Count - 1)
                {
                    way.Add(path[i]);
                    last = path[i];
                }
            }
            Log.Add($"caminho de {path.Count} celulas, {way.Count} trechos");
            for (var w = 0; w < way.Count; w++)
            {
                var p = way[w];
                s = app.World.Self;
                var z = GeoTerrain.GroundHeight(p.x, p.y, s.Z) ?? s.Z;
                app.MoveTo(Mathf.RoundToInt(p.x), Mathf.RoundToInt(p.y), Mathf.RoundToInt(z));
                Status = $"trecho {w + 1}/{way.Count}, {Mathf.RoundToInt(Dist(s.X, s.Y, npc.X, npc.Y))} do NPC";
                await Task.Delay(300);
                for (var t = 0; t < 60 && app.World.Self.Motion.Moving; t++) await Task.Delay(100);
            }
            s = app.World.Self;
            Log.Add($"chegou a {Mathf.RoundToInt(Dist(s.X, s.Y, npc.X, npc.Y))} do NPC");
            app.Send(GamePackets.Action(npc.ObjectId, (int)s.X, (int)s.Y, (int)s.Z));
            await Task.Delay(800);
            app.Send(GamePackets.Action(npc.ObjectId, (int)s.X, (int)s.Y, (int)s.Z));
            Status = $"falou com {npc.Name} a {Mathf.RoundToInt(Dist(app.World.Self.X, app.World.Self.Y, npc.X, npc.Y))}";
        }
    }
}
