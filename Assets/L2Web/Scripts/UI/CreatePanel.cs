// Linhas Race/Class/Gender/Hairstyle/Hair Color/Face com as setas do makingback1 (CreatePanel de ui/lobbyui.ts).
// `host` e o painel .lb-making (240x182, coordenadas em pixels a partir do canto superior esquerdo); `Desc` e o texto
// do painel de descricao (#ccDesc, makingback2), atualizado com o classinfo da raca/classe.
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class CreatePanel
    {
        public CreateState State = new CreateState();
        /// <summary>(estado, campo alterado: "race", "cls", "sex", "hair", "color" ou "face").</summary>
        public Action<CreateState, string> OnChange = (_, _) => { };
        /// <summary>Texto da descricao (#ccDesc); null se nao houver.</summary>
        public Text Desc;
        /// <summary>Caixa de mensagem (console+0x658) com a sysmsg 81/82/83 quando falta um campo anterior.</summary>
        public Action<int> OnMessage = _ => { };
        /// <summary>FUN_10196f10: modelo escolhido (girar/zoom habilitados) ou nao.</summary>
        public Action<bool> OnModel = _ => { };

        readonly List<(string Key, Text Value)> rows = new();

        static readonly Color LabelColor = new Color32(0xc9, 0xc4, 0xb6, 0xff);
        /// <summary>x dos rotulos (medido na captura do original: 33 na janela de 256).</summary>
        public const float LabelX = 33;

        public CreatePanel(RectTransform host, Text desc = null)
        {
            Desc = desc;
            var labels = new (string Key, string Label)[]
            {
                ("race", GameData.SysString(164, "Race")), ("cls", GameData.SysString(165, "Class")), ("sex", GameData.SysString(166, "Gender")),
                ("hair", GameData.SysString(167, "Hairstyle")), ("color", GameData.SysString(168, "Hair Color")), ("face", GameData.SysString(169, "Face")),
            };
            for (var i = 0; i < labels.Length; i++)
            {
                var (key, label) = labels[i];
                // NCSelectCtrl 136x17 em (86, y): caixa do valor 96x17 e as setas a direita (medido na captura)
                // NCPawnSetupWnd::OnPaint (0x101977d0): rotulo em (33, y+3) #dcdcdc, sem sombra; NCSelectCtrl (0x101973d0):
                // caixa textbox1/2/3 (8 + 82 + 8) x 17, valor em (3, 3) #dcdcdc, setas PREV1/NEXT1 15x15 em (103, 1) e (121, 1)
                var sel = NativeLayout.PawnSetupSelect(i);
                var y = sel.Y;
                var l = Text(host, label, LabelX, y + 3);
                l.name = "Label " + key;
                TextBox(host, sel.X, y);
                var val = Text(host, "", sel.X + 3, y + 3);
                val.name = "Value " + key;
                var left = UiRoot.Box(label + ": anterior", host, sel.X + 103, y + 1, 15, 15);
                L2WndUtil.Button(left, "L2ui_ch3.Button.PREV1", "L2ui_ch3.Button.PREV1_down", "L2ui_ch3.Button.PREV1_over", 15, 15).OnClick = () => Step(key, -1);
                var right = UiRoot.Box(label + ": proximo", host, sel.X + 121, y + 1, 15, 15);
                L2WndUtil.Button(right, "L2ui_ch3.Button.NEXT1", "L2ui_ch3.Button.NEXT1_down", "L2ui_ch3.Button.NEXT1_over", 15, 15).OnClick = () => Step(key, 1);
                rows.Add((key, val));
            }
            Render();
        }

        static readonly Color TextColor = new Color32(0xdc, 0xdc, 0xdc, 0xff);

        /// <summary>DrawTextW: topo da linha em y, #dcdcdc, sem sombra.</summary>
        public static Text Text(RectTransform p, string s, float x, float y)
        {
            var t = UiRoot.Label(p, s, x, y, 200, 14, 11, TextColor, TextAnchor.UpperLeft);
            t.horizontalOverflow = HorizontalWrapMode.Overflow;
            t.verticalOverflow = VerticalWrapMode.Overflow;
            t.raycastTarget = false;
            return t;
        }

        /// <summary>Caixa de valor do NCSelectCtrl: textbox1 (0,0,8,17), textbox2 esticada (8,0,82,17), textbox3 (90,0,8,17).</summary>
        static void TextBox(RectTransform p, float x, float y)
        {
            L2WndUtil.Paint(UiRoot.Box("textbox1", p, x, y, 8, 17), "L2ui_ch3.etc.textbox1", 8, 17, PaintMode.Stretch, 0, 0, 8, 17);
            L2WndUtil.Paint(UiRoot.Box("textbox2", p, x + 8, y, 82, 17), "L2ui_ch3.etc.textbox2", 82, 17, PaintMode.Stretch, 0, 0, 8, 17);
            L2WndUtil.Paint(UiRoot.Box("textbox3", p, x + 90, y, 8, 17), "L2ui_ch3.etc.textbox3", 8, 17, PaintMode.Stretch, 0, 0, 8, 17);
        }

        int Count(string key)
        {
            var s = State;
            return key switch
            {
                "race" => 5,
                "cls" => s.Race == 4 ? 1 : 2,
                "sex" => 2,
                "hair" => LobbyUi.HairCount[s.Sex],
                "color" => 4,
                _ => 3,
            };
        }

        void Step(string key, int d)
        {
            var cur = State.Get(key);
            var n = Count(key);
            Apply(key, cur < 0 ? (d > 0 ? 0 : n - 1) : (cur + d + n) % n);
        }

        /// <summary>
        /// Setters do NCPawnSetupWnd (FUN_10199060 raca, FUN_101993c0 classe, FUN_10199630 sexo, FUN_10197b50 penteado e
        /// vizinhos): raca limpa o resto; classe exige raca (sysmsg 81) e limpa sexo em diante; sexo exige raca e classe (82),
        /// zera penteado/cor/rosto e escolhe o modelo; penteado, cor e rosto exigem os tres (81/82/83). Sem o anterior, os
        /// campos seguintes voltam a -1 e o modelo fica sem escolha.
        /// </summary>
        /// <summary>Regra dos setters (sem efeitos): novo estado, sysmsg a mostrar (0 = nenhuma) e se o modelo foi escolhido.</summary>
        public static CreateState Next(CreateState cur, string key, int v, out int msg, out bool model)
        {
            var s = cur.Clone();
            msg = 0;
            void Clear(int from)
            {
                for (var i = from; i < CreateState.Keys.Length; i++) s.Set(CreateState.Keys[i], -1);
            }
            var idx = Array.IndexOf(CreateState.Keys, key);
            model = false;
            if (idx == 0)
            {
                s.Race = v;
                Clear(1);
            }
            else if (s.Race < 0)
            {
                msg = 81;
                Clear(1);
            }
            else if (idx == 1)
            {
                s.Cls = s.Race == 4 ? 0 : v;
                Clear(2);
            }
            else if (s.Cls < 0)
            {
                msg = 82;
                Clear(2);
            }
            else if (idx == 2)
            {
                s.Sex = v;
                s.Hair = s.Color = s.Face = 0;
                model = true;
            }
            else if (s.Sex < 0)
            {
                msg = 83;
                Clear(3);
            }
            else
            {
                if (key == "hair") v = Math.Min(v, LobbyUi.HairCount[s.Sex] - 1);
                s.Set(key, v);
                model = true;
            }
            return s;
        }

        public void Apply(string key, int v)
        {
            var s = Next(State, key, v, out var msg, out var model);
            if (msg != 0) OnMessage(msg);
            State = s;
            Render();
            OnModel(model || s.Sex >= 0);
            OnChange(State, key);
        }

        /// <summary>Atualiza parte do estado (Partial&lt;CreateState&gt;: so os campos nao nulos).</summary>
        public void Set(int? race = null, int? cls = null, int? sex = null, int? hair = null, int? color = null, int? face = null)
        {
            State = State.Clone();
            if (race.HasValue) State.Race = race.Value;
            if (cls.HasValue) State.Cls = cls.Value;
            if (sex.HasValue) State.Sex = sex.Value;
            if (hair.HasValue) State.Hair = hair.Value;
            if (color.HasValue) State.Color = color.Value;
            if (face.HasValue) State.Face = face.Value;
            Render();
        }

        public void Render()
        {
            var s = State;
            var L = LobbyUi.Letters;
            foreach (var (key, value) in rows)
            {
                // -1 = sem escolha: a caixa fica vazia (estado inicial do NCPawnSetupWnd: so a raca preenchida)
                if (s.Get(key) < 0)
                {
                    value.text = "";
                    continue;
                }
                value.text = key switch
                {
                    "race" => LobbyUi.Races[s.Race],
                    "cls" => s.Cls == 0 ? "Fighter" : "Mystic",
                    "sex" => s.Sex == 0 ? "Male" : "Female",
                    "hair" => $"Type {L[s.Hair]}",
                    "color" => $"Type {L[s.Color]}",
                    _ => $"Type {L[s.Face]}",
                };
            }
            // classinfo-e: 0 = instrucao; 1-2 humano guerreiro/mistico, 3-4 elfo, 5-6 elfo negro, 7-8 orc, 9 anao
            // NCPawnInfoWnd: so a escolha da classe troca o texto (FUN_10196980 ignora texto vazio; a raca nao mexe)
            if (Desc && s.Cls < 0) { }
            else if (Desc)
            {
                var t = GameData.ClassInfo(s.Race == 4 ? 9 : 1 + s.Race * 2 + s.Cls);
                Desc.text = string.IsNullOrEmpty(t) ? GameData.ClassInfo(0) : t;
            }
        }
    }
}
