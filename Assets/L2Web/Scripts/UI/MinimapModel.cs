// NCMinimapWnd (MinimapCtrl, NWindow.dll) sem Unity: projecao, mapas de cidade, excecoes, centralizacao, grade, botoes "+",
// arrasto e marcadores (03 §4, conferido no pseudocodigo e na desmontagem; Docs/tools/gen_golden.py minimap). Coordenadas da
// tela relativas ao controle (W x H); "int()" = _ftol (trunca para zero).
using System;
using System.Collections.Generic;

namespace L2Web.UI
{
    public sealed class MinimapModel
    {
        /// <summary>GetMinimapPosition: (x + 0x20000) e (y + 0x40000) vezes o double 41/8192 (164 px por regiao).</summary>
        public const double UnitsToPixel = 0.0050048828125;
        public const int OffsetX = 0x20000, OffsetY = 0x40000;
        /// <summary>GetMapWidth/Height do mapa-mundi: 11 x 16 regioes de 164 px.</summary>
        public const int WorldWidth = 0x70c, WorldHeight = 0xa40;
        /// <summary>DrawGrid / DrawGridIcon / GetGridNum: celula de 61 px.</summary>
        public const int Cell = 61;

        /// <summary>InitExceptForLocationList (0x1018ae40): (minX, maxX, minY, maxY, minZ, maxZ) -> pixel fixo no mapa-mundi.</summary>
        public static readonly (int minX, int maxX, int minY, int maxY, int minZ, int maxZ, int px, int py)[] Exceptions =
        {
            (40459, 50172, 241581, 251111, -6874, -4874, 100, 2478),
            (-58000, -40000, -256000, -236000, -9000, -3780, 875, 2034),
            (-27000, -6600, -254000, -238000, -9000, -3780, 1042, 1704),
            (8000, 24000, -250000, -243000, -10000, -3780, 1229, 1731),
            (-24556, -8340, -57286, -34817, -10890, -9174, 842, 1053),
            (-98304, -65536, -229377, -196609, -5000, 0, 552, 1203),
            (-98304, -65536, -262145, -229377, -5000, 0, 552, 1203),
            (-131072, -98304, -229377, -196609, -5000, 0, 552, 1203),
        };

        public float W, H;
        public int ViewX, ViewY;
        /// <summary>+0x250: 0 = mapa-mundi; senao a chave da zona do mapa de cidade.</summary>
        public int CurMap;
        public int SavedX, SavedY;
        public bool ShowTown = true, ShowGrid = true, ShowMyLocMark = true;
        readonly L2Zone zone;
        /// <summary>Mapas de cidade (chave da zona -> registro), na ordem da carga: o indice e o do botao "+".</summary>
        public readonly List<(int key, ZoneRecord rec)> TownMaps = new();
        /// <summary>EV_MinimapShowReduceBtn (true) / EV_MinimapHideReduceBtn (false).</summary>
        public Action<bool> ReduceBtn = _ => { };
        /// <summary>Posicao (inteira) do pawn do jogador.</summary>
        public Func<(int x, int y, int z)> Player = () => (0, 0, 0);
        public readonly List<(int x, int y, int z)> Targets = new();

        public MinimapModel(L2Zone zone, float w, float h)
        {
            this.zone = zone;
            W = w;
            H = h;
            // InitializeMapDisplay: todo registro com TownMapTex vira mapa de cidade
            if (zone != null)
                foreach (var r in zone.Records)
                    if (!string.IsNullOrEmpty(r.TownMapTex) && zone.KeyOf(r) is int k && !TownMaps.Exists(t => t.key == k))
                        TownMaps.Add((k, r));
        }

        ZoneRecord Town(int map) => TownMaps.Find(t => t.key == map).rec;

        /// <summary>GetMinimapPosition: mapa-mundi ou (x - TownMapX) * TownMapScale; registro ausente = (-1, -1).</summary>
        public (int x, int y) Project(int x, int y, int map)
        {
            if (map == 0) return ((int)((x + OffsetX) * UnitsToPixel), (int)((y + OffsetY) * UnitsToPixel));
            var r = zone?.Record(map);
            if (r == null) return (-1, -1);
            return ((int)((x - r.TownMapX) * r.TownMapScale), (int)((y - r.TownMapY) * r.TownMapScale));
        }

        /// <summary>GetMapWidth/Height: mapa-mundi (ou registro sem textura) 1804 x 2624; cidade = TownMapWidth x Height.</summary>
        public (int w, int h) MapSize(int map)
        {
            var r = map == 0 ? null : zone?.Record(map);
            return r == null || string.IsNullOrEmpty(r.TownMapTex) ? (WorldWidth, WorldHeight) : (r.TownMapWidth, r.TownMapHeight);
        }

        /// <summary>GetExceptLocID: primeiro retangulo que contem (x, y[, z]); nenhum = 8.</summary>
        public static int ExceptId(int x, int y, int z, bool useZ)
        {
            for (var i = 0; i < Exceptions.Length; i++)
            {
                var e = Exceptions[i];
                if (e.minX <= x && x <= e.maxX && e.minY <= y && y <= e.maxY && (!useZ || e.minZ <= z && z <= e.maxZ)) return i;
            }
            return 8;
        }

        /// <summary>GetMinimapLocationWithException: no mapa-mundi uma excecao da o pixel fixo; senao a projecao.</summary>
        public (int x, int y) LocWithException(int x, int y, int z, bool useZ, int map)
        {
            var id = ExceptId(x, y, z, useZ);
            if (map == 0 && id >= 0 && id <= 7) return (Exceptions[id].px, Exceptions[id].py);
            return Project(x, y, map);
        }

        /// <summary>FindMapIndex: a zona do ponto (a atual se for a posicao do jogador) quando ela tem mapa de cidade.</summary>
        public int FindMapIndex(int x, int y, int z)
        {
            if (!ShowTown || zone == null) return 0;
            var p = Player();
            var id = (x, y, z) == p ? zone.CurrentKey : zone.KeyAt(x, y, z);
            if (id == -1) return 0;
            var r = zone.Record(id);
            if (r != null && string.IsNullOrEmpty(r.TownMapTex)) return 0;
            return id;
        }

        /// <summary>Centraliza (px, py) no controle, preso a [0, mapa - controle].</summary>
        public void Center(int px, int py, int mapW, int mapH)
        {
            ViewX = px < W * 0.5f ? 0 : px > mapW - W * 0.5f ? (int)(mapW - W) : (int)(px - W * 0.5f);
            ViewY = py < H * 0.5f ? 0 : py > mapH - H * 0.5f ? (int)(mapH - H) : (int)(py - H * 0.5f);
        }

        void AdjustReduceBtn() => ReduceBtn(CurMap != 0);

        /// <summary>
        /// AdjustMapView (0x1018a680; o exec passa keep = !a_ZoomToTownMap): keep fica no mapa de cidade so se for a mesma
        /// cidade; senao (zoom) guarda a vista do mapa-mundi e vai para a cidade do ponto (ou o mapa-mundi). Com a grade, o
        /// ponto vai ao centro da celula de 61 px.
        /// </summary>
        public void AdjustMapView(int x, int y, int z, bool zoomToTownMap = true, bool useGrid = false)
        {
            if (x == 0 && y == 0 && z == 0) return;
            var id = FindMapIndex(x, y, z);
            if (!zoomToTownMap)
            {
                if (CurMap != id) CurMap = 0;
            }
            else
            {
                if (CurMap == 0)
                {
                    SavedX = ViewX;
                    SavedY = ViewY;
                }
                CurMap = id;
            }
            var (mw, mh) = MapSize(CurMap);
            if (mw <= 0 || mh <= 0) return;
            AdjustReduceBtn();
            var (px, py) = LocWithException(x, y, z, true, CurMap);
            if (useGrid)
            {
                px = px / Cell * Cell + 30;
                py = py / Cell * Cell + 30;
            }
            Center(px, py, mw, mh);
        }

        /// <summary>InitPosition: mapa do jogador e centralizado nele.</summary>
        public void InitPosition()
        {
            var p = Player();
            CurMap = FindMapIndex(p.x, p.y, p.z);
            AdjustReduceBtn();
            var (px, py) = PlayerPos();
            var (mw, mh) = MapSize(CurMap);
            Center(px, py, mw, mh);
        }

        /// <summary>GetPlayerMinimapPosition: com a excecao testando z.</summary>
        public (int x, int y) PlayerPos()
        {
            var p = Player();
            return LocWithException(p.x, p.y, p.z, true, CurMap);
        }

        /// <summary>GetTargetMinimapPosition: excecao so por x, y.</summary>
        public (int x, int y) TargetPos(int x, int y, int map) => LocWithException(x, y, 0, false, map);

        /// <summary>ReduceBtnClick: volta ao mapa-mundi na vista guardada e recentra no jogador (sem trocar de mapa).</summary>
        public void ReduceClick()
        {
            if (CurMap != 0)
            {
                CurMap = 0;
                ViewX = SavedX;
                ViewY = SavedY;
            }
            var p = Player();
            AdjustMapView(p.x, p.y, p.z, false);
        }

        /// <summary>OnBtnClick ("+" i): abre o mapa da cidade; centra no jogador se ele cai dentro, senao (0, 0).</summary>
        public void TownButtonClick(int i)
        {
            if (i < 0 || i >= TownMaps.Count) return;
            var t = TownMaps[i];
            CurMap = t.key;
            SavedX = ViewX;
            SavedY = ViewY;
            ReduceBtn(true);
            var p = Player();
            var (px, py) = Project(p.x, p.y, CurMap);
            if (0 <= px && px <= t.rec.TownMapWidth && 0 <= py && py <= t.rec.TownMapHeight) Center(px, py, t.rec.TownMapWidth, t.rec.TownMapHeight);
            else ViewX = ViewY = 0;
        }

        /// <summary>RearrangeOpenTownMapButton: no mapa-mundi, cada botao 26 x 26 em TownBtnLoc - vista (fora do controle: 9999).</summary>
        public List<(int i, int x, int y, bool shown)> TownButtons(bool dragging = false)
        {
            var o = new List<(int, int, int, bool)>();
            for (var i = 0; i < TownMaps.Count; i++)
            {
                var r = TownMaps[i].rec;
                if (CurMap != 0 || r.TownBtnLocX == -1)
                {
                    o.Add((i, 0, 0, false));
                    continue;
                }
                var bx = r.TownBtnLocX - ViewX;
                var by = r.TownBtnLocY - ViewY;
                // RefreshButtonLoc (no arrasto) nao estaciona em 9999
                if (!dragging && (bx < 0 || by < 0 || bx > W || by > H)) bx = by = 9999;
                o.Add((i, bx, by, true));
            }
            return o;
        }

        /// <summary>OnMouseMove com o botao esquerdo: arrasta (o conteudo segue o mouse), preso a [0, mapa - controle].</summary>
        public void Drag(int dx, int dy)
        {
            var (mw, mh) = MapSize(CurMap);
            if (dx > 0)
            {
                ViewX += dx;
                if (ViewX > mw - W) ViewX = (int)(mw - W);
            }
            else
            {
                ViewX -= Math.Abs(dx);
                if (ViewX < 0) ViewX = 0;
            }
            if (dy > 0)
            {
                ViewY += dy;
                if (ViewY > mh - H) ViewY = (int)(mh - H);
            }
            else
            {
                ViewY -= Math.Abs(dy);
                if (ViewY < 0) ViewY = 0;
            }
        }

        /// <summary>
        /// DrawGrid (so no mapa-mundi): colunas em x = 61 - viewX % 61 + 61k, rotulo viewX/61 + 20 + k centrado em y 2 (so com
        /// x &gt; 15); linhas em y = 61 - viewY % 61 + 61k, rotulo viewY/61 + 21 + k em x 0 (so com y &gt; 20).
        /// </summary>
        public (List<(int pos, string label)> cols, List<(int pos, string label)> rows) Grid()
        {
            var cols = new List<(int, string)>();
            var rows = new List<(int, string)>();
            var x = Cell - ViewX % Cell;
            var lab = ViewX / Cell + 20;
            for (var i = 0; i <= (int)(W / Cell); i++, x += Cell, lab++) cols.Add((x, lab >= 0 && x > 15 ? lab.ToString() : null));
            var y = Cell - ViewY % Cell;
            lab = ViewY / Cell + 20;
            for (var i = 0; i <= (int)(H / Cell); i++, y += Cell, lab++) rows.Add((y, lab >= 0 && y > 20 ? (lab + 1).ToString() : null));
            return (cols, rows);
        }

        /// <summary>DrawMyLocation: posicao no controle e se cabe na margem de 12 px.</summary>
        public (int x, int y, bool shown) MyLocation()
        {
            var (px, py) = PlayerPos();
            px -= ViewX;
            py -= ViewY;
            return (px, py, ShowMyLocMark && 12 <= px && px <= W - 12 && 12 <= py && py < H - 12);
        }

        /// <summary>Alvo / membro: posicao no controle e o teste da margem de 12 px.</summary>
        public (int x, int y, bool shown) Marker(int x, int y)
        {
            var (px, py) = TargetPos(x, y, CurMap);
            px -= ViewX;
            py -= ViewY;
            return (px, py, 12 <= px && px <= W - 12 && 12 <= py && py < H - 12);
        }

        /// <summary>AddTargetLoc: so com x, y e z diferentes de zero (sem teste de repetido).</summary>
        public void AddTarget(int x, int y, int z)
        {
            if (x != 0 && y != 0 && z != 0) Targets.Add((x, y, z));
        }

        /// <summary>DeleteTargetLoc: remove os iguais sem ajustar o indice (o seguinte a um removido escapa).</summary>
        public void DeleteTarget(int x, int y, int z)
        {
            for (var i = 0; i < Targets.Count; i++)
                if (Targets[i] == (x, y, z))
                    Targets.RemoveAt(i);
        }

        /// <summary>GetGridNum: celula de 61 px no mapa-mundi.</summary>
        public (int gx, int gy) GridNum(int x, int y)
        {
            var (px, py) = TargetPos(x, y, 0);
            return (px / Cell, py / Cell);
        }

        /// <summary>IsOverlapped: a mesma celula.</summary>
        public bool IsOverlapped(int x1, int y1, int x2, int y2) => GridNum(x1, y1) == GridNum(x2, y2);
    }
}
