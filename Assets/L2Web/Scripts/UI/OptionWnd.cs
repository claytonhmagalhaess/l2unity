// OptionWnd do Interface.xdat (J5 da matriz, spec 04 §2) com a logica do OptionWnd.uc: abas VideoTab/AudioTab/GameTab
// embutidas, Init*Option ao mostrar (relendo o Option.ini), OK = Apply* + FirstRun=2 + fecha, Aplicar = Apply*, Cancelar =
// FirstRun=2 + desfaz so o audio. Os mapeamentos (indice do combo <-> valor do INI) sao os das linhas citadas do .uc.
using System;
using System.Collections.Generic;
using UnityEngine;

namespace L2Web.UI
{
    public sealed class OptionWnd
    {
        public readonly L2Wnd Win;
        L2Wnd video, audio, game;
        /// <summary>Efeitos no porte: volumes (musica/efeitos) e o que mais o App quiser aplicar depois de gravar.</summary>
        public Action<float, float> SetVolumes = (_, _) => { };
        public Action OnApplied = () => { };
        /// <summary>WindowInitBtn -> SetDefaultPosition() (:1207-1209): todas as janelas na posicao padrao.</summary>
        public Action OnInitialize = () => { };
        public Func<int> PartyMemberCount = () => 0;
        int prevSfx, prevMusic, prevSys, prevTut;

        static readonly float[] TickVolume = { 0f, 0.2f, 0.4f, 0.6f, 0.8f, 1f };

        public OptionWnd(L2Layer layer)
        {
            Win = new L2Wnd("OptionWnd", layer, new WndOpts { Embed = new[] { "VideoTab", "AudioTab", "GameTab" }, AriaLabel = "Options" });
            Win.Embedded.TryGetValue("VideoTab", out video);
            Win.Embedded.TryGetValue("AudioTab", out audio);
            Win.Embedded.TryGetValue("GameTab", out game);
            // OnLoad (:120): "Hide Dropped Item(s)" volta a False a cada inicio
            L2Options.SetBool("Game", "HideDropItem", false);
            foreach (var t in new[] { video, audio, game })
            {
                if (t == null) continue;
                foreach (var n in new[] { "Video", "Audio", "Game" })
                {
                    t.OnClick(n + "OKBtn", OnOK);
                    t.OnClick(n + "CancelBtn", OnCancel);
                }
                t.OnClick("VideoApplyBtn", OnApply); // o AudioTab tambem usa este nome (bug inofensivo do xdat)
                t.OnClick("GameApplyBtn", OnApply);
                t.OnClick("WindowInitBtn", () => OnInitialize());
            }
            if (audio != null)
                foreach (var n in new[] { "EffectVolumeSliderCtrl", "MusicVolumeSliderCtrl", "SystemVolumeSliderCtrl", "TutorialVolumeSliderCtrl" })
                {
                    var s = audio.Slider(n);
                    if (s != null) s.OnChange = tick => OnSlider(n, tick);
                }
            var mute = audio?.Check("mutecheckbox");
            if (mute) mute.onValueChanged.AddListener(on => SetSlidersEnabled(!on));
            var group = game?.Check("NameBox2");
            if (group) group.onValueChanged.AddListener(on => SetGroupChildren(on));
            var frame = video?.Check("FrameBox");
            if (frame) frame.onValueChanged.AddListener(on => MinFrameRate(on));
            Win.OnShow = InitAll;
        }

        public void Toggle()
        {
            if (Win.Visible) Win.Hide();
            else Win.Show();
        }

        // ------------------------------------------------------------ leitura (Init*Option)
        void InitAll()
        {
            InitVideo();
            InitAudio();
            InitGame();
        }

        void Combo(L2Wnd w, string name, int i) => w?.Combo(name)?.Select(i);
        int ComboIdx(L2Wnd w, string name) => w?.Combo(name)?.Selected ?? -1;
        void Check(L2Wnd w, string name, bool on)
        {
            var t = w?.Check(name);
            if (t) t.SetIsOnWithoutNotify(on);
        }
        bool IsChecked(L2Wnd w, string name) => w?.Check(name)?.isOn ?? false;

        /// <summary>Gamma (:275-286): >=1.2 -> 0, [1.0,1.2) -> 1, [0.8,1.0) -> 2, [0.6,0.8) -> 3, &lt;0.6 -> 4.</summary>
        public static int GammaIndex(float g) => g >= 1.2f ? 0 : g >= 1.0f ? 1 : g >= 0.8f ? 2 : g >= 0.6f ? 3 : 4;
        public static readonly float[] GammaValue = { 1.2f, 1.0f, 0.8f, 0.6f, 0.4f };

        /// <summary>RenderActorLimited (:349-362): >=6 -> 0 ... &lt;=1 -> 5; gravacao (:888-911) = 6 - indice.</summary>
        public static int PawnLimitIndex(int v) => v >= 6 ? 0 : v <= 1 ? 5 : 6 - v;

        /// <summary>Volume -> tick por faixas de 0,2 (:433-450).</summary>
        public static int VolumeTick(float v) => v >= 1f ? 5 : v >= 0.8f ? 4 : v >= 0.6f ? 3 : v >= 0.4f ? 2 : v >= 0.2f ? 1 : 0;

        void InitVideo()
        {
            if (video == null) return;
            var res = video.Combo("ResBox");
            if (res != null)
            {
                // GetResolutionList: as resolucoes do monitor (sem repetir por taxa), "W*H 32bit"
                resolutions.Clear();
                var items = new List<string>();
                foreach (var r in Screen.resolutions)
                {
                    if (resolutions.Exists(x => x.w == r.width && x.h == r.height)) continue;
                    resolutions.Add((r.width, r.height));
                    items.Add($"{r.width}*{r.height} 32bit");
                }
                if (resolutions.Count == 0)
                {
                    resolutions.Add((Screen.width, Screen.height));
                    items.Add($"{Screen.width}*{Screen.height} 32bit");
                }
                res.SetItems(items);
                var w = L2Options.GetInt("Video", "GamePlayViewportX", Screen.width);
                var h = L2Options.GetInt("Video", "GamePlayViewportY", Screen.height);
                var ri = resolutions.FindIndex(x => x.w == w && x.h == h);
                res.Select(ri >= 0 ? ri : resolutions.FindIndex(x => x.w == Screen.width && x.h == Screen.height));
                // OnComboBoxItemSelected("ResBox"): ResetRefreshRate(w, h) seleciona a ultima taxa (:83-96, :1321-1330)
                res.OnSelect = i => ResetRefreshRate(i, true);
                ResetRefreshRate(res.Selected, false);
            }
            Combo(video, "GammaBox", GammaIndex(L2Options.GetFloat("Video", "Gamma", 1f)));
            Combo(video, "TextureBox", Mathf.Clamp(L2Options.GetInt("Video", "TextureDetail"), 0, 2));
            Combo(video, "ModelBox", Mathf.Clamp(L2Options.GetInt("Video", "ModelDetail"), 0, 1));
            Combo(video, "AnimBox", Mathf.Clamp(L2Options.GetInt("Video", "SkipAnim"), 0, 1));
            Combo(video, "TerrainBox", Mathf.Clamp(L2Options.GetInt("Video", "TerrainClippingRange"), 0, 4));
            Combo(video, "CharBox", Mathf.Clamp(L2Options.GetInt("Video", "PawnClippingRange"), 0, 4));
            Combo(video, "PawnBox", PawnLimitIndex(L2Options.GetInt("Video", "RenderActorLimited", 6)));
            Check(video, "FrameBox", L2Options.GetBool("Video", "IsKeepMinFrameRate"));
            Combo(video, "ReflectBox", L2Options.GetBool("L2WaterEffect", "IsUseEffect") ? Mathf.Clamp(L2Options.GetInt("L2WaterEffect", "EffectType"), 1, 2) : 0);
            var aa = video.Combo("AABox");
            if (aa != null)
            {
                // GetMultiSample: o porte responde 2 (None, 2X, 4X)
                aa.SetItems(new[] { GameData.SysString(869, "None"), GameData.SysString(870, "2X"), GameData.SysString(871, "4X") });
                var hdr = L2Options.GetInt("Video", "PostProc");
                aa.SetEnabled(hdr < 3 || hdr > 5);
                aa.Select(aa.Enabled ? Mathf.Clamp(L2Options.GetInt("Video", "AntiAliasing"), 0, 2) : 0);
            }
            Check(video, "ShadowBox", L2Options.GetBool("Video", "PawnShadow"));
            Check(video, "DecoBox", L2Options.GetBool("Video", "RenderDeco"));
            Check(video, "GPUAnimationCheckBox", L2Options.GetBool("Video", "GPUAnimation", true));
            Check(video, "TriBox", L2Options.GetBool("Video", "UseTrilinear", true));
            Combo(video, "CaptureBox", Mathf.Clamp(L2Options.GetInt("Game", "ScreenShotQuality", 1), 0, 3));
            var pp = L2Options.GetInt("Video", "PostProc");
            Combo(video, "HDRBox", pp >= 0 && pp <= 5 && pp < (video.Combo("HDRBox")?.Items.Count ?? 3) ? pp : 0);
            Combo(video, "WeatherEffectComboBox", Mathf.Clamp(L2Options.GetInt("Video", "WeatherEffect"), 0, 3));
            MinFrameRate(IsChecked(video, "FrameBox"));
        }

        /// <summary>Resolucoes do ResBox, na ordem dos itens.</summary>
        readonly List<(int w, int h)> resolutions = new();

        /// <summary>Taxas de atualizacao da resolucao (GetRefreshRateList) numa lista "NHz".</summary>
        List<int> RefreshRates(int w, int h)
        {
            var rates = new List<int>();
            foreach (var r in Screen.resolutions)
            {
                if (r.width != w || r.height != h) continue;
                var hz = Mathf.RoundToInt((float)r.refreshRateRatio.value);
                if (hz > 0 && !rates.Contains(hz)) rates.Add(hz);
            }
            if (rates.Count == 0) rates.Add(Mathf.Max(1, Mathf.RoundToInt((float)Screen.currentResolution.refreshRateRatio.value)));
            return rates;
        }

        /// <summary>
        /// ResetRefreshRate (:1321-1330): repovoa o RefreshRateBox com as taxas da resolucao; ao trocar a resolucao seleciona a
        /// ultima, ao abrir seleciona a igual a Video.RefreshRate (:261-273).
        /// </summary>
        void ResetRefreshRate(int resIndex, bool selectLast)
        {
            var rate = video?.Combo("RefreshRateBox");
            if (rate == null || resIndex < 0 || resIndex >= resolutions.Count) return;
            var (w, h) = resolutions[resIndex];
            var rates = RefreshRates(w, h);
            var items = new List<string>();
            foreach (var hz in rates) items.Add(hz + "Hz");
            rate.SetItems(items);
            if (selectLast) rate.Select(items.Count - 1);
            else
            {
                var saved = L2Options.GetInt("Video", "RefreshRate", 0);
                var idx = rates.IndexOf(saved);
                rate.Select(idx >= 0 ? idx : items.Count - 1);
            }
        }

        /// <summary>MinFrameRateOn/Off (:1244-1289): com "manter quadro minimo" os combos de detalhe ficam desabilitados.</summary>
        void MinFrameRate(bool on)
        {
            if (video == null) return;
            foreach (var n in new[] { "TextureBox", "ModelBox", "AnimBox", "TerrainBox", "CharBox", "ReflectBox", "HDRBox", "WeatherEffectComboBox" })
                video.Combo(n)?.SetEnabled(!on);
            foreach (var n in new[] { "ShadowBox", "DecoBox" })
            {
                var t = video.Check(n);
                if (t) t.interactable = !on;
            }
        }

        void InitAudio()
        {
            if (audio == null) return;
            prevSfx = VolumeTick(L2Options.GetFloat("Audio", "SoundVolume", 0.2f));
            prevMusic = VolumeTick(L2Options.GetFloat("Audio", "MusicVolume", 0.2f));
            prevSys = VolumeTick(L2Options.GetFloat("Audio", "WavVoiceVolume", 0.2f));
            prevTut = VolumeTick(L2Options.GetFloat("Audio", "OggVoiceVolume", 0.2f));
            audio.Slider("EffectVolumeSliderCtrl")?.SetTick(prevSfx);
            audio.Slider("MusicVolumeSliderCtrl")?.SetTick(prevMusic);
            audio.Slider("SystemVolumeSliderCtrl")?.SetTick(prevSys);
            audio.Slider("TutorialVolumeSliderCtrl")?.SetTick(prevTut);
            var mute = L2Options.GetBool("Audio", "AudioMuteOn");
            Check(audio, "mutecheckbox", mute);
            SetSlidersEnabled(!mute);
            if (mute) SetVolumes(0, 0);
        }

        void SetSlidersEnabled(bool on)
        {
            foreach (var n in new[] { "EffectVolumeSliderCtrl", "MusicVolumeSliderCtrl", "SystemVolumeSliderCtrl", "TutorialVolumeSliderCtrl" })
            {
                var s = audio?.Slider(n);
                if (s != null) s.Enabled = on;
            }
        }

        static readonly Dictionary<string, string> SliderKey = new()
        {
            ["EffectVolumeSliderCtrl"] = "SoundVolume", ["MusicVolumeSliderCtrl"] = "MusicVolume",
            ["SystemVolumeSliderCtrl"] = "WavVoiceVolume", ["TutorialVolumeSliderCtrl"] = "OggVoiceVolume",
        };

        /// <summary>OnModifyCurrentTickSliderCtrl (:1333-1356): grava na hora; musica 0 vira 0,005 para nao parar.</summary>
        void OnSlider(string name, int tick)
        {
            var v = TickVolume[Mathf.Clamp(tick, 0, 5)];
            if (name == "MusicVolumeSliderCtrl" && v == 0) v = 0.005f;
            L2Options.SetFloat("Audio", SliderKey[name], v);
            SetVolumes(L2Options.GetFloat("Audio", "MusicVolume", 0.2f), L2Options.GetFloat("Audio", "SoundVolume", 0.2f));
        }

        void InitGame()
        {
            if (game == null) return;
            Check(game, "OpacityBox", L2Options.GetBool("Game", "TransparencyMode"));
            var lang = game.Combo("LanguageBox");
            if (lang != null)
            {
                // LANG_English: so "English", desabilitado
                lang.SetItems(new[] { "English" });
                lang.Select(0);
                lang.SetEnabled(false);
            }
            Check(game, "NameBox0", L2Options.GetBool("Game", "MyName", true));
            Check(game, "NameBox1", L2Options.GetBool("Game", "NPCName", true));
            Check(game, "NameBox2", L2Options.GetBool("Game", "GroupName", true));
            Check(game, "NameBox3", L2Options.GetBool("Game", "PledgeMemberName", true));
            Check(game, "NameBox4", L2Options.GetBool("Game", "PartyMemberName", true));
            Check(game, "NameBox5", L2Options.GetBool("Game", "OtherPCName", true));
            SetGroupChildren(IsChecked(game, "NameBox2"));
            Check(game, "ZoneNameBox", L2Options.GetBool("Game", "ShowZoneTitle"));
            Check(game, "GametipBox", L2Options.GetBool("Game", "ShowGameTipMsg"));
            Check(game, "CursorBox", L2Options.GetBool("Video", "UseColorCursor", true));
            Check(game, "ArrowBox", L2Options.GetBool("Game", "ArrowMode", true));
            Check(game, "EnterChatBox", L2Options.GetBool("Game", "EnterChatting", true));
            Check(game, "OldChatBox", L2Options.GetBool("Game", "OldChatting", true));
            // IsUseKeyCrypt() falso no porte: desmarcado e desabilitado (:623-640)
            Check(game, "KeyboardBox", false);
            var kb = game.Check("KeyboardBox");
            if (kb) kb.interactable = false;
            // CanUseJoystick() falso: desabilitado
            Check(game, "JoypadBox", L2Options.GetBool("Game", "UseJoystick"));
            var jp = game.Check("JoypadBox");
            if (jp) jp.interactable = false;
            Check(game, "CameraBox", L2Options.GetBool("Game", "AutoTrackingPawn"));
            Check(game, "DuelBox", L2Options.GetBool("Game", "IsRejectingDuel"));
            Check(game, "DropItemBox", L2Options.GetBool("Game", "HideDropItem"));
            var loot = game.Combo("LootingBox");
            if (loot != null)
            {
                loot.Select(Mathf.Clamp(L2Options.GetInt("Game", "PartyLooting"), 0, 4));
                loot.SetEnabled(PartyMemberCount() == 0); // RefreshLootingBox (:228-234)
            }
        }

        void SetGroupChildren(bool on)
        {
            foreach (var n in new[] { "NameBox3", "NameBox4", "NameBox5" })
            {
                var t = game?.Check(n);
                if (t) t.interactable = on;
            }
        }

        // ------------------------------------------------------------ gravacao (Apply*Option)
        void ApplyVideo()
        {
            if (video == null) return;
            // ordem de :822-984
            L2Options.SetBool("Video", "UseTrilinear", IsChecked(video, "TriBox"));
            L2Options.SetInt("Video", "TextureDetail", ComboIdx(video, "TextureBox"));
            L2Options.SetInt("Video", "ModelDetail", ComboIdx(video, "ModelBox"));
            L2Options.SetInt("Video", "SkipAnim", ComboIdx(video, "AnimBox"));
            L2Options.SetInt("Video", "PawnClippingRange", ComboIdx(video, "CharBox"));
            L2Options.SetInt("Video", "TerrainClippingRange", ComboIdx(video, "TerrainBox"));
            var g = ComboIdx(video, "GammaBox");
            if (g >= 0) L2Options.SetFloat("Video", "Gamma", GammaValue[g]);
            L2Options.SetInt("Video", "PostProc", ComboIdx(video, "HDRBox"));
            L2Options.SetBool("Video", "RenderDeco", IsChecked(video, "DecoBox"));
            L2Options.SetBool("Video", "PawnShadow", IsChecked(video, "ShadowBox"));
            var refl = ComboIdx(video, "ReflectBox");
            L2Options.SetInt("L2WaterEffect", "EffectType", refl);
            L2Options.SetBool("L2WaterEffect", "IsUseEffect", refl != 0);
            var pawn = ComboIdx(video, "PawnBox");
            if (pawn >= 0) L2Options.SetInt("Video", "RenderActorLimited", 6 - pawn);
            L2Options.SetInt("Video", "AntiAliasing", Math.Max(0, ComboIdx(video, "AABox")));
            L2Options.SetInt("Game", "ScreenShotQuality", ComboIdx(video, "CaptureBox"));
            // SetResolution(resIdx, rateIdx) em todo OK/Aplicar (:921-925): so muda se (W, H, Hz) diferem do atual
            var ri = ComboIdx(video, "ResBox");
            if (ri >= 0 && ri < resolutions.Count)
            {
                var (w, h) = resolutions[ri];
                var rates = RefreshRates(w, h);
                var rateIdx = ComboIdx(video, "RefreshRateBox");
                var hz = rateIdx >= 0 && rateIdx < rates.Count ? rates[rateIdx] : 0;
                L2Web.Render.VideoOptions.SetResolution(w, h, hz);
            }
            L2Options.SetInt("Video", "WeatherEffect", ComboIdx(video, "WeatherEffectComboBox"));
            L2Options.SetBool("Video", "GPUAnimation", IsChecked(video, "GPUAnimationCheckBox"));
            L2Options.SetBool("Video", "IsKeepMinFrameRate", IsChecked(video, "FrameBox"));
            InitVideo();
        }

        void ApplyAudio()
        {
            if (audio == null) return;
            foreach (var kv in SliderKey)
            {
                var s = audio.Slider(kv.Key);
                if (s != null) L2Options.SetFloat("Audio", kv.Value, TickVolume[s.Tick]);
            }
            var mute = IsChecked(audio, "mutecheckbox");
            L2Options.SetBool("Audio", "AudioMuteOn", mute);
            if (mute) SetVolumes(0, 0);
            else SetVolumes(L2Options.GetFloat("Audio", "MusicVolume", 0.2f), L2Options.GetFloat("Audio", "SoundVolume", 0.2f));
        }

        void ApplyGame()
        {
            if (game == null) return;
            // :1066-1071: IsNative = (indice 0); em LANG_English o combo so tem "English" no indice 0, entao grava True
            L2Options.SetBool("Game", "IsNative", (game.Combo("LanguageBox")?.Selected ?? 0) == 0);
            L2Options.SetBool("Game", "MyName", IsChecked(game, "NameBox0"));
            L2Options.SetBool("Game", "NPCName", IsChecked(game, "NameBox1"));
            L2Options.SetBool("Game", "PledgeMemberName", IsChecked(game, "NameBox3"));
            L2Options.SetBool("Game", "PartyMemberName", IsChecked(game, "NameBox4"));
            L2Options.SetBool("Game", "OtherPCName", IsChecked(game, "NameBox5"));
            L2Options.SetBool("Game", "GroupName", IsChecked(game, "NameBox2")); // por ultimo, como o .uc
            L2Options.SetBool("Game", "TransparencyMode", IsChecked(game, "OpacityBox"));
            L2Options.SetBool("Game", "ArrowMode", IsChecked(game, "ArrowBox"));
            L2Options.SetBool("Game", "AutoTrackingPawn", IsChecked(game, "CameraBox"));
            L2Options.SetBool("Game", "EnterChatting", IsChecked(game, "EnterChatBox"));
            L2Options.SetBool("Game", "OldChatting", IsChecked(game, "OldChatBox"));
            L2Options.SetBool("Game", "ShowZoneTitle", IsChecked(game, "ZoneNameBox"));
            L2Options.SetBool("Game", "ShowGameTipMsg", IsChecked(game, "GametipBox"));
            L2Options.SetBool("Game", "IsRejectingDuel", IsChecked(game, "DuelBox"));
            L2Options.SetBool("Game", "HideDropItem", IsChecked(game, "DropItemBox"));
            var loot = game.Combo("LootingBox");
            if (loot != null && loot.Enabled) L2Options.SetInt("Game", "PartyLooting", loot.Selected);
            L2Options.SetBool("Video", "UseColorCursor", IsChecked(game, "CursorBox"));
            // SystemMsgWnd/Damage/ExpendableItem: os controles nao existem no OptionWnd; o porte nao grava essas chaves (04 §2.5)
        }

        void ApplyAll()
        {
            ApplyVideo();
            ApplyAudio();
            ApplyGame();
            L2Options.Save();
            OnApplied();
        }

        /// <summary>Botao OK (tambem usado pelo modo automatico -l2options).</summary>
        public void Ok() => OnOK();

        void OnOK()
        {
            ApplyAll();
            L2Options.SetInt("FirstRun", "FirstRun", 2);
            L2Options.Save();
            Win.Hide();
        }

        void OnApply() => ApplyAll();

        /// <summary>Cancelar (:1178-1190): FirstRun=2 e reverte so o audio pelos ticks guardados.</summary>
        void OnCancel()
        {
            L2Options.SetInt("FirstRun", "FirstRun", 2);
            OnSlider("EffectVolumeSliderCtrl", prevSfx);
            OnSlider("MusicVolumeSliderCtrl", prevMusic);
            OnSlider("SystemVolumeSliderCtrl", prevSys);
            OnSlider("TutorialVolumeSliderCtrl", prevTut);
            L2Options.Save();
            Win.Hide();
        }
    }
}
