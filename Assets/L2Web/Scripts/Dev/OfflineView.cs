// Vista do mundo sem servidor de jogo, para testar os assets (locais ou do dev.ts): monta a cena num ponto do mapa
// com geodata, terreno do Unreal, StaticMeshes e BSP, poe um personagem e alguns NPCs com modelo e animacao, toca a
// musica da zona e um som de interface. No executavel: -l2offline segundos [-l2shots pasta] (captura e sai)
// [-l2offlinepos x,y,z] (outro ponto no lugar de Giran).
//   L2Web.Dev.OfflineView.Begin(83400, 147950, -3400)   ->  OfflineView.Report
using System.Collections.Generic;
using System.Threading.Tasks;
using L2Web.Net;
using L2Web.Render;
using L2Web.UI;
using UnityEngine;
using GameWorld = L2Web.World.World;

namespace L2Web.Dev
{
    public class OfflineView : MonoBehaviour
    {
        /// <summary>Estado da montagem (cenario carregado, modelos, musica).</summary>
        public static string Report = "";

        public static GameScene Scene { get; private set; }
        public static GameWorld World { get; private set; }

        MusicPlayer music;
        SfxPlayer sfx;
        float musicTimer;
        float x, y, z;

        /// <summary>NPCs de Giran em volta da Gatekeeper Clarissa (id, x, y, z, heading).</summary>
        static readonly (int id, int x, int y, int z, int h)[] Npcs =
        {
            (30080, 83396, 147904, -3400, 16384), (31419, 83660, 147580, -3400, 32768), (30104, 82530, 148120, -3400, 0),
            (20001, 83560, 148120, -3400, 49152), (30473, 83260, 148150, -3400, 0),
        };

        public static OfflineView Begin(float x, float y, float z)
        {
            var go = new GameObject("L2Web Offline");
            var v = go.AddComponent<OfflineView>();
            v.x = x;
            v.y = y;
            v.z = z;
            return v;
        }

        async void Start()
        {
            if (App.Instance && App.Instance.Lobby != null) App.Instance.Lobby.Stop();
            // -l2offlinepos x,y,z: outro ponto do mapa no lugar de Giran (capturas por cidade, #0023)
            var at = App.ArgValue("-l2offlinepos")?.Split(',');
            if (at is { Length: 3 })
            {
                var ic = System.Globalization.CultureInfo.InvariantCulture;
                x = float.Parse(at[0], ic);
                y = float.Parse(at[1], ic);
                z = float.Parse(at[2], ic);
            }
            foreach (Transform c in UiRoot.Rect) c.gameObject.SetActive(false);
            World = new GameWorld { Ground = GeoTerrain.GroundHeight };
            L2Web.World.Entities.SetDrawHeight(GeoTerrain.VisualFloor);
            Scene = new GameScene(null, World);
            if (!Scene.Env.TimeForced) Scene.Env.Env.OnClientSetTime(720, 0);
            music = new MusicPlayer { Lists = GameData.MusicLists() };
            sfx = new SfxPlayer();
            Scene.WireFx(sfx);
            World.UpsertSelf(new UserInfo
            {
                ObjectId = 1, Name = "Offline", Race = 0, Sex = 0, ClassId = 0, X = (int)x, Y = (int)y, Z = (int)z,
                RunSpd = 126, WalkSpd = 88, MoveMul = 1, AtkMul = 1, PAtkSpd = 300, MAtkSpd = 333, Paperdoll = new Paperdoll(),
            });
            var oid = 100;
            foreach (var n in Npcs)
                World.UpsertNpc(new NpcInfo
                {
                    ObjectId = oid++, NpcId = n.id, X = n.x, Y = n.y, Z = n.z, Heading = n.h, RunSpd = 120, WalkSpd = 60, MoveMul = 1, AtkMul = 1,
                    PAtkSpd = 300, MAtkSpd = 333, CollisionHeight = 23, CollisionRadius = 8,
                });
            var t = GeoTerrain.LoadTerrainFor(Scene, x, y);
            var s = Statics.LoadStaticsFor(Scene, x, y);
            var u = UeTerrain.LoadUeTerrainFor(Scene, x, y);
            await Task.WhenAll(t, s, u);
            GeoTerrain.SetGeodataVisible(!UeTerrain.HasUeTerrain());
            Report = $"{t.Result} | {s.Result} | {u.Result}";
            Debug.Log("[offline] " + Report);
            sfx.PlayUi("ItemSound.inventory_open_01");
            var fxTest = App.ArgValue("-l2fxtest");
            if (fxTest != null) FxTest(fxTest).Forget();
            var secs = App.ArgValue("-l2offline");
            if (secs != null) await Finish(float.Parse(secs, System.Globalization.CultureInfo.InvariantCulture));
        }

        /// <summary>
        /// -l2fxtest 1177,4,...: o personagem lanca cada skill (MagicSkillUse simulado, hitTime do skillgrp) no NPC de teste e
        /// captura fx_&lt;id&gt;_cast.png no meio do cast, fx_&lt;id&gt;_shot.png 0,25 s depois do disparo e fx_&lt;id&gt;_hit.png 0,6 s depois.
        /// </summary>
        async Task FxTest(string ids)
        {
            var shots = App.ArgValue("-l2shots");
            while (Scene != null && !Scene.FxReady) await Task.Delay(100);
            var self = World.Self;
            L2Web.World.Entity target = null;
            foreach (var e in World.Entities.Values) if (e.Kind == "npc" && e.NpcId == 20001) target = e;
            while (self != null && (!self.Actor.Loaded || target != null && !target.Actor.Loaded)) await Task.Delay(100);
            await Task.Delay(1500);
            // -l2fxzoom: camera fixa perto do personagem (lado direito, altura do peito) para ver os sprites de perto (UV §4.8.1)
            if (App.ArgValue("-l2fxzoom") != null && self?.Actor.Root)
            {
                var root = self.Actor.Root.position;
                var fwd = self.Actor.Yaw.forward;
                var right = self.Actor.Yaw.right;
                Scene.DebugCamera = (root + fwd * 0.9f + right * 1.1f + Vector3.up * 0.75f, root + fwd * 0.25f + Vector3.up * 0.55f);
            }
            foreach (var part0 in ids.Split(','))
            foreach (var round in new[] { 0, 1 })
            {
                var part = part0;
                if (!int.TryParse(part.Trim(), out var id)) continue;
                var shotsRound = round == 1 ? shots : null;
                var rec = L2SkillData.Get(id, 1);
                var sd = L2Web.World.Skills.SkillData(id);
                var cs = rec?.CastStyle ?? int.Parse(sd?.Cs ?? "0");
                var hit = rec != null ? (int)(rec.HitTime * 1000) : int.Parse(sd?.Raw?["ht"]?.ToString() ?? "1000");
                var plan = L2Web.World.Skills.CastPlan("player", self.Model, self.Widx, self.MAtkSpd, id, hit);
                self.Motion.DesiredYaw = target != null ? L2Web.World.Movement.HeadingOf(target.X - self.X, target.Y - self.Y) : self.Motion.Yaw;
                self.Motion.Yaw = self.Motion.DesiredYaw;
                if (plan != null) self.Cast(plan, target);
                Scene.Casts.OnMagicSkillUse(self, target, id, 1, cs, hit, plan);
                var shot = plan?.Shot ?? 0.5f;
                Debug.Log($"[fxtest] skill {id} cs={cs} hit={hit} shot={shot:0.00} fases={(plan?.Phases.Count ?? 0)} agent={(Scene.SkillFx.Map.Get(id, 1) != null ? "sve" : "legado")} atores={Scene.Fx.Actors.Count}");
                await Task.Delay((int)(Mathf.Max(0.1f, shot * 0.5f) * 1000));
                await Shot(shotsRound, $"fx_{id}_cast");
                await Task.Delay((int)(Mathf.Max(0.05f, shot * 0.5f + 0.25f) * 1000));
                Debug.Log($"[fxtest] skill {id} no disparo:" + Scene.Fx.Describe());
                await Shot(shotsRound, $"fx_{id}_shot");
                await Task.Delay(350);
                Debug.Log($"[fxtest] skill {id} no hit:" + Scene.Fx.Describe());
                await Shot(shotsRound, $"fx_{id}_hit");
                Debug.Log($"[fxtest] skill {id} depois: atores={Scene.Fx.Actors.Count} spawnados={Scene.Fx.Spawned}");
                await Task.Delay(1500);
            }
        }

        static async Task Shot(string dir, string name)
        {
            if (dir == null) return;
            System.IO.Directory.CreateDirectory(dir);
            ScreenCapture.CaptureScreenshot(System.IO.Path.Combine(dir, name + ".png"));
            await Task.Delay(300);
        }

        async Task Finish(float seconds)
        {
            await Task.Delay((int)(seconds * 1000));
            var loaded = 0;
            var names = new List<string>();
            foreach (var e in World.Entities.Values)
            {
                if (e.Actor.Loaded) loaded++;
                names.Add($"{e.Name}:{(e.Actor.Loaded ? "ok" : e.Actor.Error ?? "carregando")}:{e.Actor.ClipName}");
            }
            var src = "";
            foreach (var a in FindObjectsByType<AudioSource>())
                if (a.name.StartsWith("musica"))
                    src = $"{a.name} tocando={a.isPlaying} t={a.time:0.0}";
            Debug.Log($"[offline] modelos {loaded}/{World.Entities.Count}: {string.Join(", ", names)} | musica [{src}] | {Mathf.RoundToInt(Scene.Fps)} fps | assets locais={Config.UseLocalAssets} pedidos de rede ao servidor de assets={Http.NetworkRequests}");
            var shots = App.ArgValue("-l2shots");
            if (shots != null)
            {
                System.IO.Directory.CreateDirectory(shots);
                ScreenCapture.CaptureScreenshot(System.IO.Path.Combine(shots, "offline.png"));
                await Task.Delay(800);
            }
            Application.Quit();
        }

        void Update()
        {
            if (Scene == null) return;
            var dt = Time.deltaTime;
            Scene.Tick(dt);
            sfx.SetListener(Scene.Camera);
            musicTimer -= dt;
            if (musicTimer <= 0)
            {
                musicTimer = 3;
                music.Update(World.Self.X, World.Self.Y).Forget();
            }
        }
    }
}
