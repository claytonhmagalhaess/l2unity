// Conjunto de entidades visiveis e o tick delas (classe World de client/world/entities.ts).
// Fora deste namespace, use L2Web.World.World (o namespace e a classe tem o mesmo nome).
using System;
using System.Collections.Generic;
using L2Web.Net;
using UnityEngine;

namespace L2Web.World
{
    public sealed class World
    {
        public readonly Dictionary<int, Entity> Entities = new();
        public int SelfId;
        public Action OnChange = () => { };
        /// <summary>Erros de carga de modelo por chave (para mostrar no HUD).</summary>
        public readonly Dictionary<string, string> LoadErrors = new();

        Transform group;

        /// <summary>Raiz ("World") onde ficam os atores; criada na primeira vez (THREE.Group do TS).</summary>
        public Transform Group
        {
            get
            {
                if (group == null) group = new GameObject("World").transform;
                return group;
            }
        }

        /// <summary>Pendura a raiz das entidades em `parent` (cena do jogo).</summary>
        public void SetParent(Transform parent) => Group.SetParent(parent, false);

        /// <summary>Usa um Transform existente como raiz das entidades (as ja criadas sao movidas para ele).</summary>
        public void SetGroup(Transform root)
        {
            if (root == null || root == group) return;
            foreach (var e in Entities.Values)
                if (e.Actor.Root != null)
                    e.Actor.Root.SetParent(root, false);
            group = root;
        }

        public Entity Get(int id) => Entities.TryGetValue(id, out var e) ? e : null;

        // ------------------------------------------------------------ opcoes da aba Game (GL2Show*Name, GL2HideDropMesh)
        public bool ShowMyName = true, ShowNpcName = true, ShowGroupName = true, ShowClanName = true, ShowPartyName = true, ShowOtherName = true;
        public bool HideDropItems;
        /// <summary>Membro da party (PartyMemberPosition / slots da PartyWnd).</summary>
        public System.Func<int, bool> IsPartyMember = _ => false;
        public int SelfClanId;

        /// <summary>
        /// Nome visivel pelas opcoes: eu = MyName; NPC/monstro = NPCName; outros jogadores = GroupName e, dentro dele, Party
        /// (PartyMemberName), Clan (PledgeMemberName) ou General (OtherPCName) (OptionWnd.uc:602-613; GL2Show*Name) [I: a
        /// precedencia party > cla > geral].
        /// </summary>
        public bool NameVisible(Entity e)
        {
            if (e == null) return false;
            switch (e.Kind)
            {
                case "self": return ShowMyName;
                case "npc": return ShowNpcName;
                case "player":
                    if (!ShowGroupName) return false;
                    if (IsPartyMember(e.ObjectId)) return ShowPartyName;
                    if (e.ClanId != 0 && e.ClanId == SelfClanId) return ShowClanName;
                    return ShowOtherName;
                default: return true;
            }
        }

        /// <summary>Reaplica as opcoes de nome e de itens no chao em todas as entidades.</summary>
        public void RefreshNames()
        {
            foreach (var e in Entities.Values)
            {
                e.LabelVisible(NameVisible(e));
                if (e.Kind == "item" && e.Actor.Root && e.Actor.Root.gameObject.activeSelf == HideDropItems) e.Actor.Root.gameObject.SetActive(!HideDropItems);
            }
        }

        public Entity Self => Get(SelfId);

        /// <summary>Ultima entidade criada por Ensure() (para aplicar posicao so na criacao, como o OnUserInfo/OnCharInfo).</summary>
        Entity created;

        Entity Ensure(int id, string kind)
        {
            created = null;
            Entities.TryGetValue(id, out var e);
            if (e != null && e.Kind != kind && !(e.Kind == "self" && kind == "player"))
            {
                Remove(id);
                e = null;
            }
            if (e == null)
            {
                e = new Entity(id, kind) { World = this };
                created = e;
                Entities[id] = e;
                e.Actor.Root.SetParent(Group, false);
                OnChange?.Invoke();
            }
            return e;
        }

        void ApplyAppearance(Entity e, Appearance a)
        {
            var model = GameData.PlayerModel(a.Race, a.Sex, a.ClassId);
            var keys = GameData.EquipKeys(model, a);
            var p = a.Paperdoll;
            var widx = GameData.WeaponIndex(p == null ? 0 : p.Rhand != 0 ? p.Rhand : p.Lrhand);
            e.WeaponId = p == null ? 0 : p.Rhand != 0 ? p.Rhand : p.Lrhand;
            var key = model + "|" + string.Join(",", keys);
            e.Widx = widx;
            e.EquipWanted = keys;
            if (key == e.AppearanceKey) return;
            e.AppearanceKey = key;
            var first = e.Model != model;
            e.Model = model;

            async void Go()
            {
                try
                {
                    if (first && !await e.Actor.Load("player", model))
                    {
                        LoadErrors["player:" + model] = e.Actor.Error ?? "erro";
                        return;
                    }
                    // o equipamento pode ter mudado enquanto o modelo carregava: aplica o mais recente
                    await e.Actor.SetEquipment(first ? e.EquipWanted : keys);
                    e.PlaceLabel();
                }
                catch (Exception err)
                {
                    LoadErrors["player:" + model] = err.Message;
                }
            }

            Go();
        }

        static string Css(int bgr, string fallback) => global::L2Web.World.Entities.BgrCss(bgr, fallback);

        static float Or(double v, float fallback) => v != 0 ? (float)v : fallback;

        public Entity UpsertSelf(UserInfo u)
        {
            SelfId = u.ObjectId;
            var e = Ensure(u.ObjectId, "self");
            e.Name = u.Name ?? "";
            e.Title = u.Title ?? "";
            e.SetSpeeds(u.RunSpd, u.WalkSpd, (float)u.MoveMul);
            e.AtkMul = (float)u.AtkMul;
            e.PAtkSpd = u.PAtkSpd;
            e.MAtkSpd = u.MAtkSpd;
            e.Running = u.Running;
            e.Hp = u.Hp;
            e.MaxHp = u.MaxHp;
            // OnUserInfo so usa posicao/rotacao para criar o pawn; depois so atualiza status e velocidades
            e.CollisionHeight = Or(u.CollisionHeight, 23);
            e.CollisionRadius = Or(u.CollisionRadius, 8);
            e.Enchant = u.Enchant;
            if (created == e) e.Place(u.X, u.Y, u.Z, u.Heading);
            ApplyAppearance(e, u);
            e.PvpFlag = u.PvpFlag;
            e.Karma = u.Karma;
            e.ClanId = u.ClanId;
            SelfClanId = u.ClanId;
            e.SetLabel(u.Name, Css(u.NameColor, "#ffffff"), u.Title, Css(u.TitleColor, "#ffff77"));
            e.LabelVisible(NameVisible(e));
            return e;
        }

        public Entity UpsertPlayer(CharInfo c)
        {
            var e = Ensure(c.ObjectId, "player");
            e.Name = c.Name ?? "";
            e.Title = c.Title ?? "";
            var fresh = string.IsNullOrEmpty(e.AppearanceKey);
            e.SetSpeeds(c.RunSpd, c.WalkSpd, (float)c.MoveMul);
            e.AtkMul = (float)c.AtkMul;
            e.PAtkSpd = c.PAtkSpd;
            e.MAtkSpd = c.MAtkSpd;
            e.InCombat = c.InCombat;
            e.Running = c.Running;
            if (fresh)
            {
                e.Dead = c.Dead;
                e.Sitting = !c.Standing;
            }
            else
            {
                e.SetDead(c.Dead);
                e.SetSitting(!c.Standing);
            }
            e.CollisionHeight = Or(c.CollisionHeight, 23);
            e.CollisionRadius = Or(c.CollisionRadius, 8);
            e.Enchant = c.Enchant;
            if (created == e) e.Place(c.X, c.Y, c.Z, c.Heading);
            if (e.Actor.Root != null && e.Actor.Root.gameObject.activeSelf == c.Invisible) e.Actor.Root.gameObject.SetActive(!c.Invisible);
            ApplyAppearance(e, c);
            e.StoreType = c.StoreType;
            e.PledgeClass = c.PledgeClass;
            e.PvpFlag = c.PvpFlag;
            e.Karma = c.Karma;
            e.ClanId = c.ClanId;
            e.SetLabel(c.StoreType != 0 ? $"{c.Name} · [{(c.StoreType == 3 ? "Compra" : "Venda")}] {e.StoreMsg}" : c.Name,
                Css(c.NameColor, "#ffffff"), c.Title, Css(c.TitleColor, "#ffff77"));
            e.LabelVisible(NameVisible(e));
            return e;
        }

        public Entity UpsertNpc(NpcInfo n)
        {
            var e = Ensure(n.ObjectId, "npc");
            var fresh = e.NpcId != n.NpcId;
            e.NpcId = n.NpcId;
            e.Attackable = n.Attackable;
            // handler do NpcInfo no engine: nome vazio = nome do NpcName-e.dat (e a cor do titulo dele); titulo vazio = titulo do dat
            var dat = GameData.ClientNpcName(n.NpcId);
            string titleCss = null;
            if (!string.IsNullOrEmpty(n.Name)) e.Name = n.Name;
            else if (dat != null)
            {
                e.Name = dat.Name;
                titleCss = dat.TitleCss;
            }
            else e.Name = GameData.NpcName(n.NpcId);
            e.Title = !string.IsNullOrEmpty(n.Title) ? n.Title : dat?.Title ?? "";
            e.SetSpeeds(n.RunSpd, n.WalkSpd, (float)n.MoveMul);
            e.AtkMul = (float)n.AtkMul;
            e.PAtkSpd = n.PAtkSpd;
            e.MAtkSpd = n.MAtkSpd;
            e.InCombat = n.InCombat;
            e.Running = n.Running;
            if (fresh && n.Rhand != 0) e.Widx = GameData.WeaponIndex(n.Rhand) == 5 ? 5 : 0;
            if (fresh) e.Dead = n.Dead;
            else e.SetDead(n.Dead);
            e.CollisionHeight = Or(n.CollisionHeight, 23);
            e.CollisionRadius = Or(n.CollisionRadius, 8);
            if (created == e) e.Place(n.X, n.Y, n.Z, n.Heading);
            if (fresh)
            {
                var npcId = n.NpcId;
                var ch = (float)n.CollisionHeight;
                var cr = (float)n.CollisionRadius;

                async void Go()
                {
                    try
                    {
                        var ok = await e.Actor.Load("npc", npcId.ToString());
                        if (!ok)
                        {
                            LoadErrors["npc:" + npcId] = e.Actor.Error ?? "erro";
                            e.Actor.Placeholder(ch * 2 * 0.01f, cr * 0.01f);
                        }
                        e.PlaceLabel();
                    }
                    catch (Exception err)
                    {
                        LoadErrors["npc:" + npcId] = err.Message;
                    }
                }

                Go();
            }
            // como no cliente: nome branco, titulo do NPC acima em amarelo claro
            e.SetLabel(e.Name, "#ffffff", e.Title, titleCss ?? "#ffff99");
            e.LabelVisible(NameVisible(e));
            return e;
        }

        static readonly System.Random rng = new();

        /// <summary>Item no chao (SpawnItem / DropItem): malha de drop do cliente, ou um marcador se nao houver.</summary>
        public Entity UpsertItem(int objectId, int itemId, float x, float y, float z, long count)
        {
            var e = Ensure(objectId, "item");
            e.NpcId = itemId;
            e.Name = GameData.ItemName(itemId) + (count > 1 ? $" ({count})" : "");
            if (created == e)
            {
                e.Place(x, y, z, (int)Math.Floor(rng.NextDouble() * 65536));

                async void Go()
                {
                    try
                    {
                        var ok = await e.Actor.LoadStatic($"/drop/{itemId}.glb");
                        if (!ok) e.Actor.Placeholder(0.05f, 0.05f);
                        e.PlaceLabel();
                    }
                    catch (Exception)
                    {
                        e.Actor.Placeholder(0.05f, 0.05f);
                    }
                }

                Go();
            }
            e.SetLabel(e.Name, "#d9d3bf");
            return e;
        }

        public Entity UpsertItem(SpawnItemInfo i) => UpsertItem(i.ObjectId, i.ItemId, i.X, i.Y, i.Z, i.Count);

        public Entity UpsertItem(DropItemInfo i) => UpsertItem(i.ObjectId, i.ItemId, i.X, i.Y, i.Z, i.Count);

        public void Remove(int id)
        {
            if (!Entities.TryGetValue(id, out var e)) return;
            e.Actor.Dispose();
            Entities.Remove(id);
            OnChange?.Invoke();
        }

        public void Clear()
        {
            foreach (var id in new List<int>(Entities.Keys)) Remove(id);
        }

        /// <summary>Altura do chao (geodata) usada pelo movimento; definida pela cena quando o terreno existe.</summary>
        public Func<float, float, float, float?> Ground = (_, _, _) => null;

        int frame;
        /// <summary>Personagens animados no ultimo quadro (diagnostico de desempenho).</summary>
        public int Animated;
        /// <summary>LOD de animacao ligado (opcoes).</summary>
        public bool Lod = true;
        /// <summary>Notifies das animacoes (AnimNotify_Sound etc.) de quem esta perto da camera.</summary>
        public Action<Entity, string, string> OnNotify;
        /// <summary>Distancia (unidades do Unity) ate onde os notifies sao processados.</summary>
        public float NotifyRange = 30;

        readonly List<Entity> iter = new();
        readonly Plane[] planes = new Plane[6];

        static bool InFrustum(Plane[] planes, Vector3 p)
        {
            for (var i = 0; i < planes.Length; i++)
                if (planes[i].GetDistanceToPoint(p) < 0)
                    return false;
            return true;
        }

        /// <summary>Tick das entidades: movimento, animacao (com LOD), notifies e nomes. `camera` opcional.</summary>
        public void Update(float dt, Camera camera = null)
        {
            frame++;
            if (camera != null && !camera.orthographic)
                Entity.PxScale = 2 * Mathf.Tan(camera.fieldOfView * Mathf.Deg2Rad / 2) / Mathf.Max(1, camera.pixelHeight);
            Animated = 0;
            if (camera != null) GeometryUtility.CalculateFrustumPlanes(camera, planes);
            var camPos = camera != null ? camera.transform.position : Vector3.zero;
            iter.Clear();
            iter.AddRange(Entities.Values);
            foreach (var e in iter)
            {
                if (e.Actor.Disposed || !Entities.ContainsKey(e.ObjectId)) continue;
                var moving = e.Step(dt, this, Ground);
                var pos = e.Actor.Root.position;
                var dist = camera != null ? Vector3.Distance(camPos, pos) : 0;
                // LOD: longe (> 35 unidades ~ 3500 L2) ou fora da tela anima a cada 4 quadros com o tempo acumulado
                var full = true;
                if (Lod && camera != null && e.Kind != "self")
                {
                    var far = dist > 35;
                    var off = !InFrustum(planes, pos);
                    full = !far && !off;
                }
                e.LodDt += dt;
                if (full || ((long)frame + e.ObjectId) % 4 == 0)
                {
                    e.Animate(e.LodDt, moving);
                    if (OnNotify != null && camera != null && dist < NotifyRange)
                    {
                        var on = OnNotify;
                        var ent = e;
                        e.PollNotifies((cls, arg) => on(ent, cls, arg));
                    }
                    e.LodDt = 0;
                    Animated++;
                }
                // nomes so por perto (o tamanho na tela e fixo)
                if (camera != null)
                {
                    e.LabelVisible(dist < 30);
                    e.UpdateLabel(camera);
                }
            }
        }

        /// <summary>Reorienta os nomes para a camera (chame depois de mover a camera no quadro, se ela anda depois do Update).</summary>
        public void UpdateLabels(Camera camera)
        {
            if (camera == null) return;
            foreach (var e in Entities.Values) e.UpdateLabel(camera);
        }
    }
}
