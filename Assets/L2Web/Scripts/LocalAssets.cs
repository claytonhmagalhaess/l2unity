// Assets locais (Assets/StreamingAssets/L2Web): faz em C# o que o tools/dev.ts do l2web e o server/serve.mjs do l2anim
// faziam, para o jogo rodar sem nenhum servidor de assets. Mesmas URLs que o cliente web pedia:
//   /api/model?kind=&id=      manifesto do modelo (l2anim/out/model_spec.json + chave md5 do build_model.py)
//   /cache/...                malhas e animacoes do l2anim (l2anim/export/cache)
//   /terrain/RX_RY/CX_CY.bin  pedaco de terreno lido do geodata L2D (tools/geodata.ts)
//   /sound/<nome>.wav         WAV recortado do .uax do cliente com o XOR desfeito (cache/sounds.json)
//   /music/<nome>.ogg         Ogg do cliente com a assinatura "L2SD" trocada por "OggS" e o CRC da 1a pagina refeito
//   /icons/<nome>             icone do Icon.utx exportado (nome sem diferenciar caixa)
//   /l2anim/data.js|calc.js   tabelas do l2anim
//   /map, /statics, /ui, /bsp, /terrain_ue, /drop, /anim_tables.json, /texts.json  arquivos do cache do l2web
// O que o dev.ts gerava sob demanda (tiles de mapa, BSP, terreno do Unreal, itens no chao e modelos do l2anim ainda
// nao convertidos) so existe aqui se ja estava no cache: o resto responde 404, como um asset que falta.
using System;
using System.Collections.Generic;
using System.IO;
using System.Security.Cryptography;
using System.Text;
using System.Text.RegularExpressions;
using Newtonsoft.Json.Linq;
using UnityEngine;

namespace L2Web
{
    public static class LocalAssets
    {
        static string root;

        /// <summary>Pasta dos assets locais (StreamingAssets/L2Web).</summary>
        public static string Root => root ??= Path.Combine(Application.streamingAssetsPath, "L2Web");

        /// <summary>true se a copia local existe (o cache do l2web pelo menos).</summary>
        public static bool Available => Directory.Exists(Path.Combine(Root, "cache"));

        static string P(params string[] parts) => Path.Combine(Root, Path.Combine(parts));

        /// <summary>Arquivo local de um caminho estatico (sem consulta), ou null se nao for um arquivo direto.</summary>
        public static string FileFor(string path)
        {
            var (p, _) = Split(path);
            p = Uri.UnescapeDataString(p);
            if (p.Contains("..")) return null;
            if (p.StartsWith("/cache/")) return P("l2anim", "export", "cache", p.Substring(7));
            if (p.StartsWith("/drop/")) return P("cache", "drops", p.Substring(6));
            if (p == "/l2anim/data.js" || p == "/l2anim/calc.js") return P("l2anim", "tool", p.Substring(8));
            // efeitos de skill (Docs/tools/export_fx_assets.py): tabelas em fx/, malhas de vertices em cache/fx/vm
            if (p.StartsWith("/fx/vm/")) return P("cache", "fx", "vm", p.Substring(7));
            if (p.StartsWith("/fx/")) return P("fx", p.Substring(4));
            // /raw/: texturas exportadas pelo umodel (quadros AnimNext, coronas, particulas: export_fxmat/export_lobby_emitters)
            if (p.StartsWith("/map/") || p.StartsWith("/statics/") || p.StartsWith("/ui/") || p.StartsWith("/bsp/") || p.StartsWith("/terrain_ue/") || p.StartsWith("/raw/") ||
                p == "/anim_tables.json" || p == "/texts.json")
                return P("cache", p.Substring(1).Replace('/', Path.DirectorySeparatorChar));
            return null;
        }

        static (string path, string query) Split(string url)
        {
            var q = url.IndexOf('?');
            return q < 0 ? (url, "") : (url.Substring(0, q), url.Substring(q + 1));
        }

        static Dictionary<string, string> Query(string q)
        {
            var d = new Dictionary<string, string>();
            foreach (var kv in q.Split('&'))
            {
                var i = kv.IndexOf('=');
                if (i > 0) d[Uri.UnescapeDataString(kv.Substring(0, i))] = Uri.UnescapeDataString(kv.Substring(i + 1).Replace('+', ' '));
            }
            return d;
        }

        static HttpResponse Ok(byte[] data) => new HttpResponse { Status = 200, Data = data };
        static HttpResponse NotFound(string why = "404") => new HttpResponse { Status = 404, Data = Encoding.UTF8.GetBytes(why) };

        /// <summary>Resposta para um caminho do cliente (roda fora da thread principal: so IO e contas).</summary>
        public static HttpResponse Get(string url)
        {
            try
            {
                var (path, query) = Split(url);
                path = Uri.UnescapeDataString(path);
                if (path.Contains("..")) return new HttpResponse { Status = 403 };
                if (path == "/api/ping") return Ok(Encoding.UTF8.GetBytes("{\"ok\":true}"));
                if (path == "/api/model")
                {
                    var q = Query(query);
                    var m = Manifest(q.TryGetValue("kind", out var k) ? k : "", q.TryGetValue("id", out var id) ? id : "");
                    return new HttpResponse { Status = m["error"] != null ? 404 : 200, Data = Encoding.UTF8.GetBytes(m.ToString(Newtonsoft.Json.Formatting.None)) };
                }
                var t = Regex.Match(path, @"^/terrain/(\d+)_(\d+)/(\d+)_(\d+)\.bin$");
                if (t.Success)
                {
                    var c = Chunk(int.Parse(t.Groups[1].Value), int.Parse(t.Groups[2].Value), int.Parse(t.Groups[3].Value), int.Parse(t.Groups[4].Value));
                    return c != null ? Ok(c) : NotFound("sem geodata");
                }
                var snd = Regex.Match(path, @"^/sound/([A-Za-z0-9_.]+)\.wav$");
                if (snd.Success)
                {
                    var w = Sound(snd.Groups[1].Value);
                    return w != null ? Ok(w) : NotFound("sem som");
                }
                var mus = Regex.Match(path, @"^/music/([A-Za-z0-9_]+)\.ogg$");
                if (mus.Success)
                {
                    var f = P("client", "music", mus.Groups[1].Value.ToLowerInvariant() + ".ogg");
                    return File.Exists(f) ? Ok(FixL2Ogg(File.ReadAllBytes(f))) : NotFound("sem musica");
                }
                if (path.StartsWith("/icons/"))
                {
                    var f = Icon(path.Substring(7));
                    return f != null ? Ok(File.ReadAllBytes(f)) : NotFound("sem icone");
                }
                // BSP: o dev.ts so servia o .glb quando o tile foi convertido e tinha geometria
                var file = FileFor(path);
                if (file != null && File.Exists(file)) return Ok(File.ReadAllBytes(file));
                return NotFound();
            }
            catch (Exception e)
            {
                return new HttpResponse { Status = 500, Error = e.Message };
            }
        }

        // ------------------------------------------------------------ modelos (l2anim build_model.py)
        static JObject spec;
        static readonly object specLock = new();

        static JObject Spec()
        {
            lock (specLock)
                return spec ??= JObject.Parse(File.ReadAllText(P("l2anim", "out", "model_spec.json")));
        }

        /// <summary>
        /// Manifesto como o build_model.py: para cada parte, a malha mesh/PKG.MESH.CHAVE.glb, com CHAVE = md5 de
        /// json.dumps([pkg, mesh, tex ou [], 'v5', role])[:8]. So entram as partes ja convertidas no cache.
        /// </summary>
        public static JObject Manifest(string kind, string ident)
        {
            var bucket = Spec()[kind] as JObject;
            var key = kind == "player" || kind == "armor" || kind == "hair" ? ident : int.TryParse(ident, out var n) ? n.ToString() : ident;
            var entry = bucket?[key] as JObject;
            if (entry == null) return new JObject { ["error"] = $"modelo nao encontrado: {kind} {ident}" };
            var parts = new JArray();
            foreach (var p in (JArray)entry["parts"])
            {
                var pkg = (string)p["pkg"];
                var mesh = (string)p["mesh"];
                var role = (string)p["role"] ?? "";
                var tex = p["tex"] as JArray ?? new JArray();
                var h = Md5Hex(PyDumps(new JArray(pkg, mesh, tex, "v5", role))).Substring(0, 8);
                var rel = $"mesh/{pkg}.{mesh}.{h}.glb";
                if (!File.Exists(P("l2anim", "export", "cache", "mesh", $"{pkg}.{mesh}.{h}.glb"))) continue;
                parts.Add(new JObject
                {
                    ["url"] = "/cache/" + rel, ["name"] = mesh, ["role"] = role, ["slot"] = (string)p["slot"] ?? "", ["extra"] = (bool?)p["extra"] ?? false,
                });
            }
            var anim = (string)entry["anim"];
            var animOk = anim != null && File.Exists(P("l2anim", "export", "cache", "anim", anim + ".glb"));
            if (parts.Count == 0) return new JObject { ["error"] = $"modelo nao convertido no cache: {kind} {ident}" };
            return new JObject
            {
                ["kind"] = kind, ["id"] = ident, ["label"] = entry["label"], ["anim"] = animOk ? "/cache/anim/" + anim + ".glb" : null,
                ["animSet"] = anim, ["parts"] = parts, ["scale"] = entry["scale"] ?? 1.0,
            };
        }

        /// <summary>json.dumps do Python (separadores ", " e ": ", ensure_ascii) para listas de strings/null.</summary>
        static string PyDumps(JToken t)
        {
            switch (t.Type)
            {
                case JTokenType.Array:
                    var sb = new StringBuilder("[");
                    var first = true;
                    foreach (var x in (JArray)t)
                    {
                        if (!first) sb.Append(", ");
                        sb.Append(PyDumps(x));
                        first = false;
                    }
                    return sb.Append(']').ToString();
                case JTokenType.Null:
                    return "null";
                default:
                    var s = (string)t;
                    var o = new StringBuilder("\"");
                    foreach (var ch in s)
                    {
                        if (ch == '"') o.Append("\\\"");
                        else if (ch == '\\') o.Append("\\\\");
                        else if (ch == '\n') o.Append("\\n");
                        else if (ch == '\r') o.Append("\\r");
                        else if (ch == '\t') o.Append("\\t");
                        else if (ch < 0x20 || ch > 0x7e) o.Append("\\u").Append(((int)ch).ToString("x4"));
                        else o.Append(ch);
                    }
                    return o.Append('"').ToString();
            }
        }

        static string Md5Hex(string s)
        {
            using var md5 = MD5.Create();
            var h = md5.ComputeHash(Encoding.UTF8.GetBytes(s));
            var sb = new StringBuilder();
            foreach (var b in h) sb.Append(b.ToString("x2"));
            return sb.ToString();
        }

        // ------------------------------------------------------------ geodata (tools/geodata.ts)
        const int RegionBlocks = 256, BlockCells = 8, RegionCells = RegionBlocks * BlockCells, ChunkCells = 128;

        sealed class Region
        {
            public short[] Height, High;
            public byte[] Flags;
        }

        static readonly Dictionary<string, Region> regions = new();

        static Region LoadRegion(int rx, int ry)
        {
            var key = $"{rx}_{ry}";
            lock (regions)
                if (regions.TryGetValue(key, out var r))
                    return r;
            var file = P("geodata", key + ".l2d");
            Region reg = null;
            if (File.Exists(file))
            {
                var buf = File.ReadAllBytes(file);
                var n = RegionCells * RegionCells;
                reg = new Region { Height = new short[n], High = new short[n], Flags = new byte[n] };
                var p = 0;
                short I16()
                {
                    var v = (short)(buf[p] | (buf[p + 1] << 8));
                    p += 2;
                    return v;
                }
                for (var bx = 0; bx < RegionBlocks; bx++)
                    for (var by = 0; by < RegionBlocks; by++)
                    {
                        var type = buf[p++];
                        int x0 = bx * BlockCells, y0 = by * BlockCells;
                        if (type == 0xd0)
                        {
                            var h = I16();
                            for (var cx = 0; cx < 8; cx++)
                                for (var cy = 0; cy < 8; cy++)
                                {
                                    var i = (y0 + cy) * RegionCells + x0 + cx;
                                    reg.Height[i] = h;
                                    reg.High[i] = h;
                                    reg.Flags[i] = 0x0f;
                                }
                        }
                        else if (type == 0xd1)
                        {
                            for (var c = 0; c < 64; c++)
                            {
                                var nswe = buf[p++];
                                var h = I16();
                                var i = (y0 + c % 8) * RegionCells + x0 + c / 8;
                                reg.Height[i] = h;
                                reg.High[i] = h;
                                reg.Flags[i] = (byte)(nswe & 0x0f);
                            }
                        }
                        else if (type == 0xd2)
                        {
                            for (var c = 0; c < 64; c++)
                            {
                                int layers = buf[p++];
                                short best = 32767, top = -32768;
                                var bestN = 0;
                                for (var l = 0; l < layers; l++)
                                {
                                    var nswe = buf[p++];
                                    var h = I16();
                                    if (h < best)
                                    {
                                        best = h;
                                        bestN = nswe;
                                    }
                                    if (h > top) top = h;
                                }
                                var i = (y0 + c % 8) * RegionCells + x0 + c / 8;
                                reg.Height[i] = best;
                                reg.High[i] = top;
                                reg.Flags[i] = (byte)((bestN & 0x0f) | (layers > 1 ? 0x10 : 0));
                            }
                        }
                        else throw new InvalidDataException($"{file}: tipo de bloco desconhecido 0x{type:x} em {p - 1}");
                    }
            }
            lock (regions) regions[key] = reg;
            return reg;
        }

        /// <summary>Pedaco 128x128: Int16 baixa[] + Int16 alta[] + Uint8 flags[] (formato do /terrain do dev.ts).</summary>
        static byte[] Chunk(int rx, int ry, int chx, int chy)
        {
            if (chx >= RegionCells / ChunkCells || chy >= RegionCells / ChunkCells) return null;
            var reg = LoadRegion(rx, ry);
            if (reg == null) return null;
            const int n = ChunkCells * ChunkCells;
            var o = new byte[n * 5];
            for (var y = 0; y < ChunkCells; y++)
                for (var x = 0; x < ChunkCells; x++)
                {
                    var src = (chy * ChunkCells + y) * RegionCells + chx * ChunkCells + x;
                    var dst = y * ChunkCells + x;
                    o[dst * 2] = (byte)reg.Height[src];
                    o[dst * 2 + 1] = (byte)(reg.Height[src] >> 8);
                    o[n * 2 + dst * 2] = (byte)reg.High[src];
                    o[n * 2 + dst * 2 + 1] = (byte)(reg.High[src] >> 8);
                    o[n * 4 + dst] = reg.Flags[src];
                }
            return o;
        }

        // ------------------------------------------------------------ sons e musica (dev.ts)
        static JObject soundIndex;

        /// <summary>WAV de dentro do .uax: cache/sounds.json da [arquivo, offset, tamanho, chave XOR, tipo].</summary>
        static byte[] Sound(string name)
        {
            lock (specLock)
                if (soundIndex == null)
                {
                    var f = P("cache", "sounds.json");
                    soundIndex = File.Exists(f) ? JObject.Parse(File.ReadAllText(f)) : new JObject();
                }
            if (soundIndex[name.ToLowerInvariant()] is not JArray e) return null;
            var uax = P("client", "Sounds", (string)e[0]);
            if (!File.Exists(uax)) return null;
            long off = (long)e[1];
            int size = (int)e[2], key = (int)e[3];
            var buf = new byte[size];
            using (var fs = new FileStream(uax, FileMode.Open, FileAccess.Read, FileShare.Read))
            {
                fs.Seek(off, SeekOrigin.Begin);
                var got = 0;
                while (got < size)
                {
                    var r = fs.Read(buf, got, size - got);
                    if (r <= 0) break;
                    got += r;
                }
            }
            if (key != 0)
                for (var i = 0; i < buf.Length; i++) buf[i] ^= (byte)key;
            return buf;
        }

        static uint[] oggCrc;

        /// <summary>Os .ogg do cliente trocam "OggS" da 1a pagina por "L2SD"; restaura e recalcula o CRC dela.</summary>
        public static byte[] FixL2Ogg(byte[] buf)
        {
            if (buf.Length < 27 || buf[0] != 'L' || buf[1] != '2' || buf[2] != 'S' || buf[3] != 'D') return buf;
            if (oggCrc == null)
            {
                var t = new uint[256];
                for (uint i = 0; i < 256; i++)
                {
                    var r = i << 24;
                    for (var k = 0; k < 8; k++) r = (r & 0x80000000) != 0 ? (r << 1) ^ 0x04c11db7 : r << 1;
                    t[i] = r;
                }
                oggCrc = t;
            }
            var o = (byte[])buf.Clone();
            o[0] = (byte)'O';
            o[1] = (byte)'g';
            o[2] = (byte)'g';
            o[3] = (byte)'S';
            int nseg = o[26], len = 27 + nseg;
            for (var i = 0; i < nseg; i++) len += o[27 + i];
            o[22] = o[23] = o[24] = o[25] = 0;
            uint crc = 0;
            for (var i = 0; i < len; i++) crc = (crc << 8) ^ oggCrc[((crc >> 24) ^ o[i]) & 0xff];
            o[22] = (byte)crc;
            o[23] = (byte)(crc >> 8);
            o[24] = (byte)(crc >> 16);
            o[25] = (byte)(crc >> 24);
            return o;
        }

        // ------------------------------------------------------------ icones
        static Dictionary<string, string> icons;

        static string Icon(string name)
        {
            lock (specLock)
                if (icons == null)
                {
                    icons = new Dictionary<string, string>();
                    var dir = P("cache", "icons", "Icon", "Texture");
                    if (Directory.Exists(dir))
                        foreach (var f in Directory.GetFiles(dir))
                            icons[Path.GetFileName(f).ToLowerInvariant()] = f;
                }
            return icons.TryGetValue(Uri.UnescapeDataString(name).ToLowerInvariant(), out var p) ? p : null;
        }
    }
}
