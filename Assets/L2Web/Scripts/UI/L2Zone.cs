// Zona atual (03 §4.3, Engine.dll): ZoneName-e.dat (FL2GameData::ZoneNameListLoad) e as texturas de consulta l2zonename
// (indice de paleta = id do registro; exportadas por Docs/tools/export_zonename.py para cache/ui/l2zonename.bin).
// processGetZoneNameInfo (0x10462970) -> GetZoneNameInfo (0x10462780); o tique do ALineagePlayerController (FUN_105d5420)
// recalcula a cada 2 s e pede o ZoneTitleWnd.
using System;
using System.Collections.Generic;
using System.IO;

namespace L2Web.UI
{
    /// <summary>Registro do ZoneName-e.dat (FZoneNameInfo, 0x4c bytes; os deslocamentos sao os da memoria).</summary>
    public sealed class ZoneRecord
    {
        public int Seq, Id, MapX, MapY;
        /// <summary>+0x10 / +0x14: faixa de altura (Bottom &lt; z &lt; Top, estrito).</summary>
        public float Top, Bottom;
        public string Name;
        public int TownBtnLocX, TownBtnLocY, TownMapX, TownMapY, TownMapWidth, TownMapHeight;
        public float TownMapScale;
        public string TownMapTex;
    }

    public sealed class L2Zone
    {
        readonly Dictionary<int, ZoneRecord> byKey = new();
        readonly Dictionary<ZoneRecord, int> keyOf = new();
        readonly Dictionary<(int, int), (int w, int h, byte[] idx)> tiles = new();
        public readonly List<ZoneRecord> Records = new();
        /// <summary>FL2GameData+0x7f9d0: registro atual (GetCurrentZoneName).</summary>
        public ZoneRecord Current;

        /// <summary>FUN_1044bf90: id &lt; 200 = territorio global (id &lt;&lt; 8); senao ((MapY &lt;&lt; 8 | MapX) &lt;&lt; 8 | id) &lt;&lt; 8.</summary>
        public static int Key(int id, int mapX, int mapY) => id < 200 ? id << 8 : ((mapY << 8 | mapX) << 8 | id) << 8;

        /// <summary>UGameEngine::GetSWMapXY (0x105887b0): trunc((x + 360448) / 32768 + 9), trunc((y + 294912) / 32768 + 9).</summary>
        public static (int x, int y) TileOf(int x, int y) =>
            ((int)((x + 360448.0) * (1.0 / 32768) + 9.0), (int)((y + 294912.0) * (1.0 / 32768) + 9.0));

        /// <summary>
        /// ZoneNameListLoad (FUN_10476dd0): u32 n; por registro i32 seq, id, MapX, MapY, f32 Top, Bottom, ASCF Name, 6 x i32,
        /// f32 escala, ASCF textura. A chave repetida de um id &gt;= 200 vai para chave+1 (andares); TMap.Set substitui o resto.
        /// </summary>
        public void LoadZoneNames(byte[] d)
        {
            var n = BitConverter.ToInt32(d, 0);
            var p = 4;
            for (var i = 0; i < n; i++)
            {
                var r = new ZoneRecord
                {
                    Seq = BitConverter.ToInt32(d, p), Id = BitConverter.ToInt32(d, p + 4), MapX = BitConverter.ToInt32(d, p + 8), MapY = BitConverter.ToInt32(d, p + 12),
                    Top = BitConverter.ToSingle(d, p + 16), Bottom = BitConverter.ToSingle(d, p + 20),
                };
                p += 24;
                r.Name = Ascf(d, ref p);
                r.TownBtnLocX = BitConverter.ToInt32(d, p);
                r.TownBtnLocY = BitConverter.ToInt32(d, p + 4);
                r.TownMapX = BitConverter.ToInt32(d, p + 8);
                r.TownMapY = BitConverter.ToInt32(d, p + 12);
                r.TownMapWidth = BitConverter.ToInt32(d, p + 16);
                r.TownMapHeight = BitConverter.ToInt32(d, p + 20);
                r.TownMapScale = BitConverter.ToSingle(d, p + 24);
                p += 28;
                r.TownMapTex = Ascf(d, ref p);
                Records.Add(r);
                var key = Key(r.Id, r.MapX, r.MapY);
                while (byKey.ContainsKey(key) && r.Id > 199) key++;
                if (byKey.TryGetValue(key, out var old)) keyOf.Remove(old);
                byKey[key] = r;
                keyOf[r] = key;
            }
        }

        static string Ascf(byte[] d, ref int p) => L2Texts.FString(d, ref p);

        /// <summary>l2zonename.bin: i32 n; n x (i32 tileX, tileY, w, h, w*h indices).</summary>
        public void LoadTiles(byte[] d)
        {
            var n = BitConverter.ToInt32(d, 0);
            var p = 4;
            for (var i = 0; i < n; i++)
            {
                int tx = BitConverter.ToInt32(d, p), ty = BitConverter.ToInt32(d, p + 4), w = BitConverter.ToInt32(d, p + 8), h = BitConverter.ToInt32(d, p + 12);
                p += 16;
                var idx = new byte[w * h];
                Buffer.BlockCopy(d, p, idx, 0, idx.Length);
                p += idx.Length;
                tiles[(tx, ty)] = (w, h, idx);
            }
        }

        /// <summary>
        /// processGetZoneNameInfo (0x10462970): indice do texel ((x - origem) * USize * 2^-15, truncado; 0 sem textura) e
        /// GetZoneNameInfo (0x10462780): chave, chave+1... (ate 256) ate um registro com Bottom &lt; z &lt; Top, que vira o atual;
        /// sem registro na faixa devolve null e o atual fica como estava.
        /// </summary>
        public ZoneRecord Lookup(int x, int y, int z)
        {
            var (tx, ty) = TileOf(x, y);
            var index = 0;
            if (tiles.TryGetValue((tx, ty), out var t))
            {
                var ox = (int)((tx - 20) * 32768.0);
                var oy = (int)((ty - 18) * 32768.0);
                var u = (int)((x - ox) * t.w * (1.0 / 32768));
                var v = (int)((y - oy) * t.h * (1.0 / 32768));
                var at = v * t.w + u;
                index = at >= 0 && at < t.idx.Length ? t.idx[at] : 0;
            }
            return Info(index, tx, ty, z);
        }

        public ZoneRecord Info(int index, int tx, int ty, float z)
        {
            var key = Key(index, tx, ty);
            for (var i = 0; i < 256; i++, key++)
            {
                if (!byKey.TryGetValue(key, out var r)) return null;
                if (r.Bottom < z && z < r.Top)
                {
                    Current = r;
                    return r;
                }
            }
            return null;
        }

        /// <summary>Chave (id da zona) de um registro carregado; null se ele foi substituido.</summary>
        public int? KeyOf(ZoneRecord r) => r != null && keyOf.TryGetValue(r, out var k) ? k : null;

        /// <summary>ZoneMap[id] (GL2GameData+0x7f9cc).</summary>
        public ZoneRecord Record(int key) => byKey.TryGetValue(key, out var r) ? r : null;

        /// <summary>GetCurrentZoneID: chave do registro atual; -1 sem registro.</summary>
        public int CurrentKey => KeyOf(Current) ?? -1;

        /// <summary>GetZoneID(x, y, z) (0x10479890): consulta e restaura o atual; -1 sem registro na faixa.</summary>
        public int KeyAt(int x, int y, int z)
        {
            var keep = Current;
            var r = Lookup(x, y, z);
            Current = keep;
            return r == null ? -1 : KeyOf(r) ?? -1;
        }

        /// <summary>A textura de consulta da regiao existe (o tique so atualiza nessas).</summary>
        public bool HasTile(int x, int y) => tiles.ContainsKey(TileOf(x, y));

        // ------------------------------------------------------------ tique do ALineagePlayerController (FUN_105d5420)
        float sinceCheck, sinceTitle;
        ZoneRecord prev;
        /// <summary>Nome pendente para o ZoneTitleWnd (ZoneName, SubZoneName1, SubZoneName2: o nome partido em '\n').</summary>
        public Action<string[]> ShowTitle = _ => { };

        /// <summary>InvalidateZoneName: o proximo tique mostra o titulo mesmo com o mesmo nome.</summary>
        public void Invalidate() => prev = null;

        /// <summary>
        /// Os dois contadores somam dt; com mais de 2 s zera o primeiro e consulta a zona do pawn (so se a regiao tem textura). Um
        /// registro novo (ponteiro diferente do anterior), com mais de 8 s desde o ultimo titulo e nome diferente (ou sem
        /// anterior) pede o titulo e zera o segundo contador.
        /// </summary>
        public void Tick(float dt, int x, int y, int z)
        {
            sinceCheck += dt;
            sinceTitle += dt;
            if (sinceCheck <= 2.0f) return;
            sinceCheck = 0;
            if (!HasTile(x, y)) return;
            var r = Lookup(x, y, z);
            if (r == null || r == prev || !(8.0f < sinceTitle)) return;
            if (prev == null || prev.Name != r.Name) ShowTitle(r.Name.Split('\n'));
            sinceTitle = 0;
            prev = r;
        }

        static L2Zone instance;

        /// <summary>Dados da copia local (ZoneName-e.dat do cliente e cache/ui/l2zonename.bin); null se faltar algum.</summary>
        public static L2Zone Instance
        {
            get
            {
                if (instance != null) return instance;
                try
                {
                    var dat = GameData.ClientFile("ZoneName-e.dat");
                    var bin = Path.Combine(UnityEngine.Application.streamingAssetsPath, "L2Web", "cache", "ui", "l2zonename.bin");
                    if (!File.Exists(dat) || !File.Exists(bin)) return null;
                    var z = new L2Zone();
                    z.LoadZoneNames(L2Files.Decrypt(File.ReadAllBytes(dat)));
                    z.LoadTiles(File.ReadAllBytes(bin));
                    instance = z;
                }
                catch (Exception e)
                {
                    UnityEngine.Debug.LogWarning("zona: " + e.Message);
                }
                return instance;
            }
        }
    }
}
