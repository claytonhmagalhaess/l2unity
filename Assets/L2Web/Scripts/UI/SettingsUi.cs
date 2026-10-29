// Painel de opcoes (Fase 12, ui/settings.ts): musica, qualidade (resolucao, distancia de visao, LOD de animacao) e
// camera (sensibilidade do mouse, como o multiplicador de CameraYaw/CameraPitch, e bUseAutoTrackingPawn). Fica no
// Config (PlayerPrefs, chave "l2web.settings", o mesmo JSON do localStorage do navegador).
using System;
using System.Globalization;
using L2Web.Render;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.UI;

namespace L2Web.UI
{
    public sealed class Settings
    {
        [JsonProperty("resolution")] public float Resolution = 1;
        [JsonProperty("viewDistance")] public float ViewDistance = 14000;
        [JsonProperty("animLod")] public bool AnimLod = true;
        [JsonProperty("camSensitivity")] public float CamSensitivity = 1;
        [JsonProperty("autoTracking")] public bool AutoTracking = true;
        /// <summary>Escala da interface original (o cliente desenha em pixels fixos).</summary>
        [JsonProperty("uiScale")] public float UiScale = 1;
    }

    /// <summary>Dependencias do SettingsUi (o objeto deps do TS).</summary>
    public sealed class SettingsDeps
    {
        public Func<GameScene> Scene = () => null;
        public MusicPlayer Music;
        public SfxPlayer Sfx;
        public L2Web.World.World World;
        public Func<L2Layer> Layer = () => null;
    }

    public sealed class SettingsUi
    {
        const string Key = "settings";

        public readonly UiWindow Win;
        public readonly Settings S = Load();
        readonly SettingsDeps deps;

        static Settings Load()
        {
            var s = new Settings();
            try
            {
                var j = Config.Get(Key, "{}");
                JsonConvert.PopulateObject(string.IsNullOrEmpty(j) ? "{}" : j, s);
            }
            catch
            {
                s = new Settings();
            }
            return s;
        }

        public SettingsUi(RectTransform root, SettingsDeps deps)
        {
            this.deps = deps;
            Win = new UiWindow("settings", "Opções", root, width: 300, x: 240, y: 110);
            Render();
        }

        public void Toggle()
        {
            Render();
            Win.Toggle();
        }

        /// <summary>Aplica as opcoes na cena (chamado tambem quando a cena e criada).</summary>
        public void Apply()
        {
            var sc = deps.Scene?.Invoke();
            if (sc != null)
            {
                sc.SetQuality(S.Resolution, S.ViewDistance);
                sc.Cam.Sensitivity = S.CamSensitivity;
                sc.Cam.AutoTracking = S.AutoTracking;
            }
            if (deps.World != null) deps.World.Lod = S.AnimLod;
            var layer = deps.Layer?.Invoke();
            if (layer != null && !Mathf.Approximately(layer.Scale, S.UiScale)) layer.Scale = S.UiScale;
        }

        void Save()
        {
            try
            {
                Config.Set(Key, JsonConvert.SerializeObject(S));
            }
            catch
            {
                /* sem armazenamento */
            }
            Apply();
        }

        static string Pct(float v) => $"{Mathf.RoundToInt(v * 100)}%";

        void Render()
        {
            var m = deps.Music;
            var body = Win.Body;
            UiKit.Clear(body);
            void Section(string t)
            {
                // .optsec: margin 10px 0 4px (a primeira sem margem de cima)
                if (body.childCount > 0) UiKit.Space(body, 6);
                UiKit.Heading(body, t).name = "optsec";
            }
            RectTransform Row(string label)
            {
                var r = UiKit.Row(body, 8, TextAnchor.MiddleLeft, "optrow");
                var g = r.GetComponent<HorizontalLayoutGroup>();
                g.padding = new RectOffset(0, 0, 3, 3);
                var l = UiKit.Text(r, label, 12);
                l.horizontalOverflow = HorizontalWrapMode.Wrap;
                UiKit.Layout(l, -1, -1, 1, 0);
                return r;
            }
            void Range(string label, float min, float max, float step, float value, Func<float, string> fmt, Action<float> on)
            {
                var r = Row(label);
                var steps = Mathf.RoundToInt((max - min) / step);
                Text o = null;
                // input range com passo: o Slider anda em passos inteiros (0..steps)
                var s = UiKit.Slider(r, 0, steps, Mathf.Round((value - min) / step), null, 110, true);
                o = UiKit.Text(r, fmt(value), 12, UiKit.Muted, FontStyle.Normal, TextAnchor.MiddleRight);
                UiKit.Layout(o, 52, -1, 0, 52);
                s.onValueChanged.AddListener(k =>
                {
                    var v = (float)Math.Round(min + k * step, 4);
                    o.text = fmt(v);
                    on(v);
                });
            }
            void Check(string label, bool value, Action<bool> on)
            {
                var r = Row(label);
                UiKit.Check(r, null, value, v => on(v));
            }

            Section("Som");
            Range("Música", 0, 1, 0.05f, m?.Volume ?? 0.5f, Pct, v => m?.SetVolume(v));
            Check("Música sem som (M)", m?.Muted ?? false, v =>
            {
                if (m != null && v != m.Muted) m.ToggleMute();
            });
            Range("Efeitos", 0, 1, 0.05f, deps.Sfx?.Volume ?? 0.7f, Pct, v => deps.Sfx?.SetVolume(v));

            Section("Gráficos");
            Range("Resolução", 0.5f, 1, 0.25f, S.Resolution, Pct, v =>
            {
                S.Resolution = v;
                Save();
            });
            Range("Distância de visão", 6000, 30000, 2000, S.ViewDistance, v => $"{(v / 1000).ToString(CultureInfo.InvariantCulture)} mil", v =>
            {
                S.ViewDistance = v;
                Save();
            });
            Check("Animar devagar o que está longe ou fora da tela", S.AnimLod, v =>
            {
                S.AnimLod = v;
                Save();
            });

            Section("Interface");
            Range("Escala da interface", 0.75f, 2, 0.05f, S.UiScale, Pct, v =>
            {
                S.UiScale = v;
                Save();
            });
            var reset = UiKit.Row(body, 0, TextAnchor.MiddleLeft, "reset");
            UiKit.Button(reset, "Restaurar posição das janelas", () => deps.Layer?.Invoke()?.ResetPositions());

            Section("Câmera");
            Range("Sensibilidade do mouse", 0.25f, 3, 0.25f, S.CamSensitivity, v => v.ToString("0.00", CultureInfo.InvariantCulture) + "×", v =>
            {
                S.CamSensitivity = v;
                Save();
            });
            Check("Câmera segue o personagem", S.AutoTracking, v =>
            {
                S.AutoTracking = v;
                Save();
            });
        }
    }
}
