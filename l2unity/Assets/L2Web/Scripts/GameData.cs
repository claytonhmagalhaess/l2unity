// Tabelas do l2anim (window.L2DATA, carregado de /l2anim/data.js) e regras para escolher modelo,
// equipamento visual e animacoes a partir do que o servidor manda. Porte de client/data.ts.
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using L2Web.Net;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using UnityEngine;

namespace L2Web
{
    /// <summary>Notify de um clipe (tempo 0..1, classe e argumento), como clipNotifies do data.ts.</summary>
    public sealed class ClipNotify
    {
        public float Frac;
        public string Cls;
        public string Arg;
    }

    /// <summary>Nome e taxa base de uma animacao de movimento ({ name, rate } do moveAnim).</summary>
    public struct MoveAnimInfo
    {
        public string Name;
        public float Rate;

        public MoveAnimInfo(string name, float rate)
        {
            Name = name;
            Rate = rate;
        }
    }

    /// <summary>Mensagem do sistema ja montada; Color em CSS ("#rrggbb"), como no cliente web.</summary>
    public struct SystemMessageText
    {
        public string Text;
        public string Color;
        /// <summary>Som da mensagem (coluna do systemmsg-e.dat), vazio se nao tem.</summary>
        public string Sound;
        /// <summary>Registro do systemmsg-e.dat (grupo, tipo...), ou null se veio do texts.json.</summary>
        public SystemMsgRecord Record;
    }

    public static class GameData
    {
        // ------------------------------------------------------------ L2DATA

        static JObject l2data;
        static Dictionary<string, JObject> modelsById = new();

        /// <summary>window.L2DATA (null ate LoadL2Data).</summary>
        public static JObject L2Data => l2data;

        public static bool L2DataLoaded => l2data != null;

        /// <summary>Tabelas do l2anim; lanca se nao carregadas (como data() do TS).</summary>
        public static JObject Data()
        {
            if (l2data == null) throw new InvalidOperationException("tabelas do l2anim nao carregadas (/l2anim/data.js)");
            return l2data;
        }

        /// <summary>Baixa /l2anim/data.js ("window.L2DATA={...};") do servidor de assets.</summary>
        public static async Task<bool> LoadL2Data()
        {
            if (l2data != null) return true;
            var text = await LoadTrack.Track(Http.GetText("/l2anim/data.js"));
            if (string.IsNullOrEmpty(text)) return false;
            // o parse (3,4 MB) roda fora da thread principal
            var obj = await Task.Run(() => ParseL2DataJs(text));
            SetL2Data(obj);
            return true;
        }

        /// <summary>Carga sincrona de um data.js em disco (testes / ferramentas). Devolve false se o arquivo nao existe.</summary>
        public static bool LoadL2DataFromFile(string path)
        {
            if (!File.Exists(path)) return false;
            SetL2Data(ParseL2DataJs(File.ReadAllText(path)));
            return true;
        }

        /// <summary>Extrai o JSON de "window.L2DATA={...};".</summary>
        public static JObject ParseL2DataJs(string text)
        {
            var a = text.IndexOf('{');
            var b = text.LastIndexOf('}');
            if (a < 0 || b < a) throw new FormatException("data.js sem objeto L2DATA");
            using var sr = new StringReader(text.Substring(a, b - a + 1));
            using var jr = new JsonTextReader(sr) { DateParseHandling = DateParseHandling.None };
            return JObject.Load(jr);
        }

        public static void SetL2Data(JObject d)
        {
            l2data = d;
            modelsById = new Dictionary<string, JObject>();
            if (d?["models"] is JArray models)
                foreach (var m in models.OfType<JObject>())
                {
                    var id = (string)m["id"];
                    if (id != null && !modelsById.ContainsKey(id)) modelsById[id] = m;
                }
            World.L2Calc.ClearCache();
        }

        /// <summary>Entrada de models[] (id, set, label, int) ou null.</summary>
        public static JObject Model(string id) => id != null && modelsById.TryGetValue(id, out var m) ? m : null;

        /// <summary>Entrada de npcs[npcId] (n, set, int, spd, lv, msa...) ou null.</summary>
        public static JObject Npc(int npcId) => Data()["npcs"]?[npcId.ToString()] as JObject;

        // classes "mistico" (usam o modelo de mago no humano e o de xama no orc)
        static readonly HashSet<int> Mystic = new()
        {
            10, 11, 12, 13, 14, 15, 16, 17, 94, 95, 96, 97, 98, // humano
            25, 26, 27, 28, 29, 30, 103, 104, 105, // elfo
            38, 39, 40, 41, 42, 43, 110, 111, 112, // elfo negro
            49, 50, 51, 52, 115, 116, // orc
        };

        public static bool IsMystic(int classId) => Mystic.Contains(classId);

        /// <summary>Id do modelo do l2anim (MFighter, FMagic, MOrc...) a partir de raca/sexo/classe.</summary>
        public static string PlayerModel(int race, int sex, int classId)
        {
            var s = sex == 1 ? "F" : "M";
            var mystic = IsMystic(classId);
            switch (race)
            {
                case 0: return s + (mystic ? "Magic" : "Fighter");
                case 1: return s + "Elf";
                case 2: return s + "DarkElf";
                case 3: return s + (mystic ? "Shaman" : "Orc");
                case 4: return s + "Dwarf";
                default: return s + "Fighter";
            }
        }

        /// <summary>Indice de arma nas tabelas do .int (0 mao, 1 1HS, 2 2HS, 3 dual, 4 pole, 5 bow, 7 punho).</summary>
        public static int WeaponIndex(int weaponId)
        {
            if (weaponId == 0) return 0;
            if (!(Data()["weapons"]?[weaponId.ToString()] is JArray w)) return 1;
            var v = w.Count > 5 ? w[5] : null;
            return v == null || v.Type == JTokenType.Null ? 1 : (int)v;
        }

        public static int WeaponIndex(int? weaponId) => WeaponIndex(weaponId ?? 0);

        static int Pd(Func<string, int> slot, string name) => slot(name);

        /// <summary>
        /// Chaves de equipamento no formato do /api/model do l2anim. `slot(nome)` devolve o item do paperdoll
        /// ("rhand", "chest"...; 0 se vazio).
        /// </summary>
        public static List<string> EquipKeys(string model, Func<string, int> slot, int hairStyle, int hairColor)
        {
            var D = Data();
            var equip = (JObject)D["equip"];
            var weapons = (JObject)D["weapons"];
            var keys = new List<string>();

            JArray Armor(int id)
            {
                if (id == 0) return null;
                if (!(equip[id.ToString()] is JArray e)) return null;
                return e[3] is JArray models && models.Any(m => (string)m == model) ? e : null;
            }

            var rhand = Pd(slot, "rhand");
            if (rhand == 0) rhand = Pd(slot, "lrhand");
            if (rhand != 0 && weapons[rhand.ToString()] != null) keys.Add("weapon:" + rhand);
            var chestId = Pd(slot, "chest");
            var chest = Armor(chestId);
            if (chest != null) keys.Add($"armor:{model}_{chestId}");
            var chestType = chest != null ? (string)chest[1] : null;
            var full = chest != null && (chestType == "fullarmor" || chestType == "alldress");
            var dress = chest != null && chestType == "alldress";
            var legs = Pd(slot, "legs");
            if (!full && Armor(legs) != null) keys.Add($"armor:{model}_{legs}");
            var gloves = Pd(slot, "gloves");
            if (!dress && Armor(gloves) != null) keys.Add($"armor:{model}_{gloves}");
            var feet = Pd(slot, "feet");
            if (!dress && Armor(feet) != null) keys.Add($"armor:{model}_{feet}");
            var back = Pd(slot, "back");
            if (Armor(back) != null) keys.Add($"armor:{model}_{back}");
            var hairAcc = Pd(slot, "hair");
            if (hairAcc == 0) hairAcc = Pd(slot, "hairall");
            if (Armor(hairAcc) != null) keys.Add($"armor:{model}_{hairAcc}");
            var lhand = Pd(slot, "lhand");
            var widx = WeaponIndex(rhand);
            var twoHanded = widx == 2 || widx == 3 || widx == 4 || widx == 5 || widx == 7;
            if (lhand != 0 && !twoHanded)
            {
                var e = equip[lhand.ToString()] as JArray;
                if ((e != null && (string)e[1] == "shield") || weapons[lhand.ToString()] != null) keys.Add("weapon:" + lhand);
            }
            var styles = D["hairStyles"]?[model] is JArray st ? st.Select(x => (int)x).ToList() : new List<int> { 0 };
            var hs = styles.Contains(hairStyle) ? hairStyle : 0;
            if (hs != 0 || hairColor != 0) keys.Add($"hair:{model}_{hs}_{hairColor}");
            return keys;
        }

        /// <summary>Chaves de equipamento a partir da aparencia (UserInfo/CharInfo/CharSlot).</summary>
        public static List<string> EquipKeys(string model, Appearance a) =>
            EquipKeys(model, s => PaperdollSlot(a, s), a.HairStyle, a.HairColor);

        /// <summary>Item de um slot do paperdoll ("rhand", "chest"...) da aparencia; 0 se vazio.</summary>
        public static int PaperdollSlot(Appearance a, string slot)
        {
            var p = a?.Paperdoll;
            if (p == null) return 0;
            return p.TryGetValue(slot, out var v) ? v : 0;
        }

        // ------------------------------------------------------------ animacoes (tabelas do l2anim)

        /// <summary>AnimKind do TS: "wait" | "run" | "walk" | "atkwait" | "sit" | "death" | "atk".</summary>
        static readonly Dictionary<string, string> IntKey = new()
        {
            ["wait"] = "WaitAnimName",
            ["run"] = "RunAnimName",
            ["walk"] = "WalkAnimName",
            ["sitwait"] = "SitWaitAnimName",
            ["atkwait"] = "AtkWaitAnimName",
            ["sit"] = "",
            ["death"] = "",
            ["atk"] = "Atk01AnimName",
        };

        /// <summary>Clipes sem entrada no .int: procurados pelo nome dentro do conjunto de animacoes.</summary>
        public static readonly Dictionary<string, Regex> AnimFallback = new()
        {
            ["wait"] = new Regex("^wait", RegexOptions.IgnoreCase),
            ["run"] = new Regex("^run", RegexOptions.IgnoreCase),
            ["walk"] = new Regex("^walk", RegexOptions.IgnoreCase),
            ["atkwait"] = new Regex("^atkwait", RegexOptions.IgnoreCase),
            ["sit"] = new Regex("^sit_?wait", RegexOptions.IgnoreCase),
            ["death"] = new Regex("^death(?!wait)", RegexOptions.IgnoreCase),
            ["atk"] = new Regex("^atk0?1", RegexOptions.IgnoreCase),
        };

        static string RowString(JToken row, int idx)
        {
            if (!(row is JArray a)) return null;
            JToken v = idx >= 0 && idx < a.Count ? a[idx] : null;
            if (v == null || v.Type == JTokenType.Null) v = a.Count > 0 ? a[0] : null;
            if (v == null || v.Type == JTokenType.Null) return null;
            var s = v.Type == JTokenType.String ? (string)v : v.ToString();
            return string.IsNullOrEmpty(s) ? null : s;
        }

        /// <summary>Nome do clipe para um jogador, pelo .int do modelo e o indice da arma.</summary>
        public static string PlayerAnim(string model, string kind, int widx)
        {
            var m = Model(model);
            if (m == null || !IntKey.TryGetValue(kind, out var key)) return null;
            return RowString(m["int"]?[key], widx);
        }

        public static string NpcAnim(int npcId, string kind)
        {
            var n = Npc(npcId);
            var intName = (string)n?["int"];
            var t = string.IsNullOrEmpty(intName) ? null : Data()["npcint"]?[intName];
            if (t == null || !IntKey.TryGetValue(kind, out var key) || key == "") return null;
            return RowString(t[key], 0);
        }

        public static string NpcName(int npcId) => (string)Npc(npcId)?["n"] ?? $"NPC {npcId}";

        public static readonly string[] RaceNames = { "Humano", "Elfo", "Elfo Negro", "Orc", "Anao" };

        // ------------------------------------------------------------ animacoes de movimento (.int via tools/anim_tables.py)

        static Dictionary<string, Dictionary<string, JArray>> animTables = new();

        public static async Task LoadAnimTables()
        {
            try
            {
                var r = await Http.Fetch("/anim_tables.json");
                if (r.Ok) animTables = ParseAnimTables(r.Text);
            }
            catch (Exception)
            {
                animTables = new Dictionary<string, Dictionary<string, JArray>>();
            }
        }

        public static bool LoadAnimTablesFromFile(string path)
        {
            if (!File.Exists(path)) return false;
            animTables = ParseAnimTables(File.ReadAllText(path));
            return true;
        }

        static Dictionary<string, Dictionary<string, JArray>> ParseAnimTables(string json) =>
            JsonConvert.DeserializeObject<Dictionary<string, Dictionary<string, JArray>>>(json) ?? new Dictionary<string, Dictionary<string, JArray>>();

        /// <summary>
        /// MoveAnim do TS: "Walk" | "Run" | "Wait" | "Turn" | "Sit" | "SitWait" | "Stand" | "Death" | "DeathWait" |
        /// "AtkWait" | "Atk01" | "Atk02" | "Atk03".
        /// </summary>
        public static readonly string[] MoveAnims = { "Walk", "Run", "Wait", "Turn", "Sit", "SitWait", "Stand", "Death", "DeathWait", "AtkWait", "Atk01", "Atk02", "Atk03" };

        /// <summary>Secao do .int: o modelo do jogador (mfighter...) ou a secao do NPC (npcgrp -> int).</summary>
        public static string AnimSection(string kind, string modelOrNpc)
        {
            if (kind == "player") return (modelOrNpc ?? "").ToLowerInvariant();
            return int.TryParse(modelOrNpc, out var id) ? AnimSection(kind, id) : "";
        }

        public static string AnimSection(string kind, int npcId)
        {
            if (kind == "player") return npcId.ToString().ToLowerInvariant();
            return ((string)Npc(npcId)?["int"] ?? "").ToLowerInvariant();
        }

        static JToken Pick(JArray row, int widx)
        {
            if (row == null) return null;
            JToken v = widx >= 0 && widx < row.Count ? row[widx] : null;
            if (v == null || v.Type == JTokenType.Null) v = row.Count > 0 ? row[0] : null;
            return v == null || v.Type == JTokenType.Null ? null : v;
        }

        /// <summary>Nome e taxa base (XxxAnimRate do .int, 1.0 se ausente, como APawn::GetRunAnimRate) de uma animacao.</summary>
        public static MoveAnimInfo MoveAnim(string section, string which, int widx)
        {
            animTables.TryGetValue(section ?? "", out var t);
            JArray rowN = null, rowR = null;
            t?.TryGetValue(which + "AnimName", out rowN);
            t?.TryGetValue(which + "AnimRate", out rowR);
            var n = Pick(rowN, widx);
            var name = n == null ? null : n.Type == JTokenType.String ? (string)n : n.ToString();
            var r = Pick(rowR, widx);
            double rate = 0;
            if (r != null)
            {
                if (r.Type == JTokenType.Float || r.Type == JTokenType.Integer) rate = (double)r;
                else if (!double.TryParse(r.ToString(), System.Globalization.NumberStyles.Float, System.Globalization.CultureInfo.InvariantCulture, out rate)) rate = 0;
            }
            if (double.IsNaN(rate)) rate = 0;
            return new MoveAnimInfo(name, rate > 0 ? (float)rate : 1f);
        }

        /// <summary>Conjunto de animacoes (pacote.anim) do jogador ou do NPC.</summary>
        public static string AnimSet(string kind, string modelOrNpc)
        {
            if (kind == "player") return (string)Model(modelOrNpc)?["set"];
            return int.TryParse(modelOrNpc, out var id) ? (string)Npc(id)?["set"] : null;
        }

        public static string AnimSet(string kind, int npcId) => AnimSet(kind, npcId.ToString());

        /// <summary>Notifies (tempo 0..1 e classe, ex.: AttackItem/AttackShot) de um clipe, extraidos do .ukx pelo l2anim.</summary>
        public static List<ClipNotify> ClipNotifies(string set, string clip)
        {
            var res = new List<ClipNotify>();
            if (set == null || clip == null) return res;
            var D = Data();
            var seq = World.L2Calc.FindSeq(D, set, clip);
            if (seq == null) return res;
            var classes = D["notifyClasses"] as JArray;
            foreach (var n in seq.Notifies)
            {
                var cls = classes != null && n.Cls >= 0 && n.Cls < classes.Count ? (string)classes[n.Cls] ?? "" : "";
                res.Add(new ClipNotify { Frac = (float)n.Frac, Cls = cls, Arg = n.Extra ?? "" });
            }
            return res;
        }

        // ------------------------------------------------------------ textos do cliente (tools/build_texts.py)

        sealed class Texts
        {
            [JsonProperty("sysmsg")] public Dictionary<string, string[]> Sysmsg = new();
            [JsonProperty("items")] public Dictionary<string, string> Items = new();
            [JsonProperty("itemIcons")] public Dictionary<string, string> ItemIcons = new();
            [JsonProperty("skills")] public Dictionary<string, Dictionary<string, string>> Skills = new();
            [JsonProperty("skillIcons")] public Dictionary<string, string> SkillIcons = new();
            [JsonProperty("npcs")] public Dictionary<string, string> Npcs = new();
            [JsonProperty("actions")] public Dictionary<string, string> Actions;
            [JsonProperty("classes")] public Dictionary<string, string> Classes;
            [JsonProperty("music")] public Dictionary<string, string[]> Music;
            [JsonProperty("actionIcons")] public Dictionary<string, string> ActionIcons;
            [JsonProperty("sysstring")] public Dictionary<string, string> Sysstring;
            [JsonProperty("classinfo")] public string[] Classinfo;
            [JsonProperty("logon")] public float[][] Logon;
            [JsonProperty("servers")] public Dictionary<string, string> Servers;
            [JsonProperty("drops")] public Dictionary<string, string[]> Drops;
        }

        static Texts texts = new();

        public static async Task LoadTexts()
        {
            try
            {
                var r = await Http.Fetch("/texts.json");
                if (!r.Ok) return;
                var json = r.Text;
                texts = await Task.Run(() => JsonConvert.DeserializeObject<Texts>(json)) ?? texts;
                FixTexts();
            }
            catch (Exception)
            {
                /* sem textos: mensagens aparecem pelo numero */
            }
        }

        public static bool LoadTextsFromFile(string path)
        {
            if (!File.Exists(path)) return false;
            texts = JsonConvert.DeserializeObject<Texts>(File.ReadAllText(path)) ?? new Texts();
            FixTexts();
            return true;
        }

        static void FixTexts()
        {
            texts.Sysmsg ??= new Dictionary<string, string[]>();
            texts.Items ??= new Dictionary<string, string>();
            texts.ItemIcons ??= new Dictionary<string, string>();
            texts.Skills ??= new Dictionary<string, Dictionary<string, string>>();
            texts.SkillIcons ??= new Dictionary<string, string>();
            texts.Npcs ??= new Dictionary<string, string>();
        }

        static string Get(Dictionary<string, string> d, int id) => d != null && d.TryGetValue(id.ToString(), out var v) ? v : null;

        public static string ItemName(int id) => Get(texts.Items, id) ?? $"item {id}";

        public static string SkillName(int id, int lvl)
        {
            if (texts.Skills.TryGetValue(id.ToString(), out var levels))
            {
                if (levels.TryGetValue(lvl.ToString(), out var n) && n != null) return n;
                if (levels.TryGetValue("1", out var n1) && n1 != null) return n1;
            }
            return $"skill {id}";
        }

        public static string NpcTextName(int id) => Get(texts.Npcs, id) ?? (l2data != null ? (string)Npc(id)?["n"] : null) ?? $"NPC {id}";

        static readonly Regex SysParam = new(@"\$s(\d+)");

        static Dictionary<int, string> datSysString;
        static Dictionary<int, SystemMsgRecord> datSystemMsg;
        static bool datLoaded;

        /// <summary>
        /// sysstring-e.dat e systemmsg-e.dat da copia do cliente (StreamingAssets/L2Web/client/System), decifrados (Ver413) e
        /// lidos com todos os campos (L2Texts). Sem a copia, os textos vem do texts.json do l2web.
        /// </summary>
        static void LoadDatTexts()
        {
            if (datLoaded) return;
            datLoaded = true;
            try
            {
                var ss = ClientFile("sysstring-e.dat");
                if (File.Exists(ss)) datSysString = L2Texts.ParseSysString(L2Files.Decrypt(File.ReadAllBytes(ss)));
                var sm = ClientFile("systemmsg-e.dat");
                if (File.Exists(sm)) datSystemMsg = L2Texts.ParseSystemMsg(L2Files.Decrypt(File.ReadAllBytes(sm)));
            }
            catch (Exception e)
            {
                Debug.LogWarning("textos do cliente (.dat): " + e.Message);
            }
        }

        /// <summary>Registro completo de uma mensagem do sistema (systemmsg-e.dat), ou null.</summary>
        public static SystemMsgRecord SystemMsgRecord(int id)
        {
            LoadDatTexts();
            return datSystemMsg != null && datSystemMsg.TryGetValue(id, out var r) ? r : null;
        }

        static Dictionary<int, SystemMsgRecord> serverSystemMsg;
        static bool serverLoaded;

        /// <summary>
        /// Mensagem do systemmsg-e.dat do cliente instalado (o do servidor; copia systemmsg-e.server.dat): a faixa do lobby
        /// mostra o id 94 desse arquivo ("2013 Copyright Lineage2 NcSoft."), como na referencia do usuario; o resto do
        /// systemmsg segue a decisao N4 (textos oficiais). Null sem a copia.
        /// </summary>
        public static SystemMsgRecord ServerSystemMsgRecord(int id)
        {
            if (!serverLoaded)
            {
                serverLoaded = true;
                try
                {
                    var f = ClientFile("systemmsg-e.server.dat");
                    if (File.Exists(f)) serverSystemMsg = L2Texts.ParseSystemMsg(L2Files.Decrypt(File.ReadAllBytes(f)));
                }
                catch (Exception e)
                {
                    Debug.LogWarning("systemmsg do servidor: " + e.Message);
                }
            }
            return serverSystemMsg != null && serverSystemMsg.TryGetValue(id, out var r) ? r : null;
        }

        /// <summary>Mensagem do sistema com os parametros ja convertidos em texto, a cor e o som do cliente.</summary>
        public static SystemMessageText SystemMessage(int id, IList<string> prms)
        {
            prms ??= Array.Empty<string>();
            string Fill(string m) => SysParam.Replace(m ?? "", mm =>
            {
                var n = int.Parse(mm.Groups[1].Value) - 1;
                return n >= 0 && n < prms.Count ? prms[n] ?? "" : "";
            });
            var rec = SystemMsgRecord(id);
            if (rec != null) return new SystemMessageText { Text = Fill(rec.Msg), Color = "#" + rec.ColorHex, Sound = rec.Sound, Record = rec };
            if (!texts.Sysmsg.TryGetValue(id.ToString(), out var m) || m == null || m.Length == 0)
                return new SystemMessageText
                {
                    Text = $"Mensagem do sistema #{id}{(prms.Count > 0 ? " (" + string.Join(", ", prms) + ")" : "")}",
                    Color = "#b9d3a6",
                };
            return new SystemMessageText { Text = Fill(m[0]), Color = "#" + (m.Length > 1 ? m[1] : "ffffff") };
        }

        public static string ItemIcon(int id) => Get(texts.ItemIcons, id);
        public static string SkillIcon(int id) => Get(texts.SkillIcons, id);
        public static string ActionName(int id) => Get(texts.Actions, id) ?? $"ação {id}";
        public static string ActionIcon(int id) => Get(texts.ActionIcons, id);
        public static string ClassName(int id) => Get(texts.Classes, id) ?? $"classe {id}";
        public static Dictionary<string, string[]> MusicLists() => texts.Music ?? new Dictionary<string, string[]>();

        /// <summary>Texto fixo da interface (sysstring-e.dat); `fallback` se o indice nao existe.</summary>
        public static string SysString(int id, string fallback = "")
        {
            LoadDatTexts();
            if (datSysString != null) return datSysString.TryGetValue(id, out var v) ? v : fallback;
            return Get(texts.Sysstring, id) ?? fallback;
        }

        /// <summary>Descricoes da tela de criacao (classinfo-e.dat): 0 = instrucao, depois guerreiro/mistico de cada raca.</summary>
        public static string ClassInfo(int i) => texts.Classinfo != null && i >= 0 && i < texts.Classinfo.Length ? texts.Classinfo[i] ?? "" : "";

        /// <summary>Posicoes do lobby (logongrp.dat): 7 lugares da selecao + o central, depois 4 por raca (anao 2): x, y, z, yaw.</summary>
        public static float[][] LogonSpots() => texts.Logon ?? Array.Empty<float[]>();

        /// <summary>Nome do servidor de jogo (servername-e).</summary>
        public static string ServerName(int id) => Get(texts.Servers, id) ?? $"Servidor {id}";

        /// <summary>Arquivo de dados do cliente original na copia local (StreamingAssets/L2Web/client/System).</summary>
        static List<UI.GameTip> gameTips;

        /// <summary>gametip-e.dat da copia do cliente (GametipWnd).</summary>
        public static List<UI.GameTip> GameTips
        {
            get
            {
                if (gameTips != null) return gameTips;
                gameTips = new List<UI.GameTip>();
                try
                {
                    var f = ClientFile("gametip-e.dat");
                    if (File.Exists(f)) gameTips = UI.GameTip.Parse(L2Files.Decrypt(File.ReadAllBytes(f)));
                }
                catch (Exception e)
                {
                    Debug.LogWarning("gametip-e.dat: " + e.Message);
                }
                return gameTips;
            }
        }

        /// <summary>Registro do NpcName-e.dat (Ver413): d id, FString nome, FString titulo, 4 bytes de cor (B, G, R, A).</summary>
        public sealed class NpcNameRecord
        {
            public string Name, Title;
            public byte[] Color;
            /// <summary>Cor do titulo em CSS (rgb), como o L2Ui usa os bytes BGRA.</summary>
            public string TitleCss => Color == null ? null : $"rgb({Color[2]},{Color[1]},{Color[0]})";
        }

        static Dictionary<int, NpcNameRecord> npcNames;

        /// <summary>
        /// NpcName-e.dat da copia do cliente (FL2GameData::NpcNameDataLoad). O handler do NpcInfo (0x16) usa o nome dele quando
        /// o pacote vem com nome vazio (e a cor do titulo, User+400 = registro+0x1c), e o titulo quando o titulo vem vazio.
        /// </summary>
        public static NpcNameRecord ClientNpcName(int npcId)
        {
            if (npcNames == null)
            {
                npcNames = new Dictionary<int, NpcNameRecord>();
                try
                {
                    var f = ClientFile("NpcName-e.dat");
                    if (File.Exists(f))
                    {
                        var b = L2Files.Decrypt(File.ReadAllBytes(f));
                        var n = BitConverter.ToInt32(b, 0);
                        var p = 4;
                        for (var i = 0; i < n; i++)
                        {
                            var id = BitConverter.ToInt32(b, p);
                            p += 4;
                            var r = new NpcNameRecord { Name = L2Texts.FString(b, ref p), Title = L2Texts.FString(b, ref p) };
                            r.Color = new[] { b[p], b[p + 1], b[p + 2], b[p + 3] };
                            p += 4;
                            npcNames[id] = r;
                        }
                    }
                }
                catch (Exception e)
                {
                    Debug.LogWarning("NpcName-e.dat: " + e.Message);
                }
            }
            return npcNames.TryGetValue(npcId, out var rec) ? rec : null;
        }

        public static string ClientFile(string name) => Path.Combine(Application.streamingAssetsPath, "L2Web", "client", "System", name);

        static List<string> obscene;

        /// <summary>
        /// Lista de palavroes do obscene-e.dat (Ver413, lido por FL2GameData::ObsceneDataLoad), usada pelo filtro da
        /// recepcao do chat. Vazia sem a copia do arquivo.
        /// </summary>
        public static IReadOnlyList<string> ObsceneWords
        {
            get
            {
                if (obscene != null) return obscene;
                obscene = new List<string>();
                try
                {
                    var f = ClientFile("obscene-e.dat");
                    if (File.Exists(f)) obscene = UI.L2Chat.ParseObsceneDat(L2Files.Decrypt(File.ReadAllBytes(f)));
                }
                catch (Exception e)
                {
                    Debug.LogWarning("obscene-e.dat: " + e.Message);
                }
                return obscene;
            }
        }
    }
}
