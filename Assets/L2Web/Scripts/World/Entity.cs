// Entidade visivel (o proprio jogador, outros jogadores, NPCs e itens no chao): movimento (PawnMotion), animacao e
// nome. Porte da classe Entity de client/world/entities.ts.
using System;
using System.Collections.Generic;
using System.Linq;
using L2Web.Render;
using UnityEngine;

namespace L2Web.World
{
    public sealed class Entity
    {
        public readonly int ObjectId;
        /// <summary>"self" | "player" | "npc" | "item".</summary>
        public readonly string Kind;
        public readonly Actor Actor = new Actor();
        /// <summary>Posicao, velocidade, rotacao e correcao de sincronia (regras do engine.dll em PawnMotion).</summary>
        public readonly PawnMotion Motion = new PawnMotion();
        public string Name = "";
        public string Title = "";
        public bool Dead;
        public bool Sitting;
        /// <summary>NpcInfo isAttackable (bCanBeAttacked do TargetStatusWnd).</summary>
        public bool Attackable;
        /// <summary>CharInfo pledgeClass (rank no TargetStatusWnd).</summary>
        public int PledgeClass;
        /// <summary>pvpFlag, karma e cla (CharInfo/UserInfo): cursor de ataque e nomes de cla.</summary>
        public int PvpFlag, Karma, ClanId;
        public int Hp;
        public int MaxHp;
        /// <summary>Meia altura do cilindro de colisao: a Location do pawn no cliente fica no centro (pe + isto).</summary>
        public float CollisionHeight = 23;
        /// <summary>Raio do cilindro de colisao (offsets dos efeitos, SetSizeScale CR/9).</summary>
        public float CollisionRadius = 8;
        /// <summary>Encantamento da arma (byte do UserInfo/CharInfo).</summary>
        public int Enchant;
        /// <summary>Item da arma equipada (paperdoll rhand ou lrhand): efeitos do weapongrp.</summary>
        public int WeaponId;
        /// <summary>Giro pelo teclado (StartRotation): -1 esquerda, 1 direita, 0 parado.</summary>
        public int Turning;
        /// <summary>Velocidade do giro (KayboardRotationRate.Yaw quando o pacote vem sem velocidade).</summary>
        public float TurnSpeed = 10000;
        /// <summary>Ultimo clipe/fracao vistos para disparar notifies (sons) quando a animacao passa por eles.</summary>
        string nClip;
        float nFrac;
        /// <summary>Seguindo outro objeto (MoveToPawn).</summary>
        public FollowInfo Follow;
        /// <summary>Alvo deste personagem (TargetSelected 0x29; 0 com TargetUnselected): o RequestAssist usa.</summary>
        public int TargetId;
        public string Model = "";
        public int NpcId;
        public int Widx;
        public string AppearanceKey = "";
        /// <summary>Chaves de equipamento mais recentes (aplicadas quando o modelo termina de carregar).</summary>
        public List<string> EquipWanted = new();
        /// <summary>Loja privada aberta: tipo (CharInfo.StoreType) e titulo (PrivateStoreMsgSell).</summary>
        public int StoreType;
        public string StoreMsg = "";
        /// <summary>Em postura de combate (AutoAttackStart / inCombat): parado usa AtkWait em vez de Wait.</summary>
        public bool InCombat;
        public float AtkMul = 1;
        public float PAtkSpd = 300;
        public float MAtkSpd = 333;

        sealed class Casting
        {
            public CastPlan Plan;
            public float T0;
            public int TargetId;
            public int Phase;
        }

        sealed class Attacking
        {
            public float Until;
            public int TargetId;
        }

        sealed class Posture
        {
            public string Anim;
            public float Until;
        }

        /// <summary>Cast em andamento (MagicSkillUse): fases da animacao pelo plano do cliente.</summary>
        Casting casting;
        /// <summary>Ataque em andamento: clipe tocado uma vez; enquanto durar, o pawn olha para o alvo.</summary>
        Attacking attacking;
        /// <summary>Acao de postura em andamento (sentar/levantar/morrer) tocada uma vez antes do loop.</summary>
        Posture posture;
        float clock;
        GameObject label;
        string labelText = "";
        GameObject ring;

        public World World;
        /// <summary>Tempo acumulado entre atualizacoes de animacao (LOD).</summary>
        public float LodDt;

        public Entity(int objectId, string kind)
        {
            ObjectId = objectId;
            Kind = kind;
            Actor.ObjectId = objectId;
            Actor.Root.name = kind + " " + objectId;
        }

        public float X => Motion.X;
        public float Y => Motion.Y;
        public float Z => Motion.Z;
        public int Heading => (int)Math.Round(Motion.Yaw, MidpointRounding.AwayFromZero) & 0xffff;
        public Vec3 Dest => Motion.Dest;

        public bool Running
        {
            get => Motion.Running;
            set => Motion.Running = value;
        }

        public float Speed => Motion.Speed();

        string SectionKind => Kind == "npc" ? "npc" : "player";
        string Section => Kind == "npc" ? GameData.AnimSection("npc", NpcId) : GameData.AnimSection("player", Model);
        string Set => Kind == "npc" ? GameData.AnimSet("npc", NpcId) : GameData.AnimSet("player", Model);

        /// <summary>
        /// Ataque normal (pacote Attack): gira para o alvo e toca Atk01..03 uma vez com a taxa/tween do cliente.
        /// Devolve os instantes (s, a partir de agora) dos notifies AttackItem (golpe) e AttackShot (disparo).
        /// </summary>
        public AttackTimes Attack(Entity target)
        {
            var none = new AttackTimes();
            if (!Actor.Loaded || Dead) return none;
            posture = null;
            Sitting = false;
            if (target != null) Motion.DesiredYaw = Movement.HeadingOf(target.X - X, target.Y - Y);
            var section = Section;
            var spec = Combat.AttackAnim(Widx, AtkMul, key => GameData.MoveAnim(section, key, Widx).Rate);
            var a = Anim(spec.Key);
            if (a.Name == null) a = Anim("Atk01");
            if (a.Name == null) return none;
            Actor.Play(a.Name, spec.Rate, false, spec.Tween);
            var play = Actor.ClipDuration(a.Name) / spec.Rate;
            attacking = new Attacking { Until = clock + spec.Tween + play, TargetId = target?.ObjectId ?? 0 };
            var notes = GameData.ClipNotifies(Set, a.Name);
            List<float> At(string cls) => notes.Where(n => n.Cls == cls).Select(n => spec.Tween + n.Frac * play).ToList();
            return new AttackTimes { Items = At("AttackItem"), Shots = At("AttackShot"), Ranged = spec.Ranged };
        }

        /// <summary>Notifies cruzados desde a ultima chamada (fracao do clipe corrente; volta do loop incluida).</summary>
        public void PollNotifies(Action<string, string> fn)
        {
            var clip = Actor.ClipName;
            if (clip == null)
            {
                nClip = null;
                return;
            }
            var d = Actor.ClipDuration(clip);
            if (!(d > 0)) return;
            var f = Actor.ClipTime / d;
            var prev = nFrac;
            if (clip != nClip)
            {
                nClip = clip;
                prev = -1;
            }
            nFrac = f;
            if (f == prev) return;
            foreach (var n in GameData.ClipNotifies(Set, clip))
            {
                var hit = f >= prev ? n.Frac > prev && n.Frac <= f : n.Frac > prev || n.Frac <= f;
                if (hit) fn(n.Cls, n.Arg);
            }
        }

        /// <summary>Inicia o cast (MagicSkillUse): gira para o alvo e toca as fases do plano.</summary>
        public void Cast(CastPlan plan, Entity target)
        {
            if (!Actor.Loaded || Dead) return;
            posture = null;
            attacking = null;
            if (target != null && target != this) Motion.DesiredYaw = Movement.HeadingOf(target.X - X, target.Y - Y);
            casting = new Casting { Plan = plan, T0 = clock, TargetId = target?.ObjectId ?? 0, Phase = -1 };
        }

        public void CancelCast() => casting = null;

        public bool IsCasting => casting != null;

        public void SetSpeeds(float runSpd, float walkSpd, float moveMul)
        {
            Motion.RunSpd = runSpd;
            Motion.WalkSpd = walkSpd;
            Motion.MoveMul = moveMul;
        }

        /// <summary>
        /// Posicao inicial/teleporte (sem movimento em curso). O Z do servidor pode estar acima do chao (o aCis manda o Z
        /// do destino + 10, sem geodata: em Giran o unstuck chega 110-124 acima): como no OnTeleportToLocation, o pawn
        /// pousa no chao no proximo Step em que ele for conhecido (busca do L2_Teleport para o proprio, queda para os outros).
        /// </summary>
        public void Place(float x, float y, float z, int? heading = null)
        {
            Motion.Place(x, y, z);
            Motion.Drop(IsSelf);
            Motion.Dest = null;
            if (heading.HasValue) Motion.Yaw = Motion.DesiredYaw = heading.Value & 0xffff;
            Sync();
        }

        bool IsSelf => Kind == "self";

        /// <summary>Pouso de outro pawn so vai para o log ([pouso]) se mudar o Z ao menos isto; o proprio sempre.</summary>
        const float LogLandDelta = 16;

        public void ServerMove(float tx, float ty, float tz, float ox, float oy, float oz)
        {
            Follow = null;
            Motion.ServerMove(new Vec3(tx, ty, tz), new Vec3(ox, oy, oz), IsSelf);
        }

        public void ServerStop(float x, float y, float z)
        {
            Follow = null;
            Motion.ServerStop(new Vec3(x, y, z), IsSelf);
        }

        public void ServerValidate(float x, float y, float z, int heading) => Motion.ServerValidate(new Vec3(x, y, z), heading, IsSelf);

        /// <summary>Avanca o movimento. Devolve true enquanto estiver andando.</summary>
        public bool Step(float dt, World world, Func<float, float, float, float?> ground)
        {
            var target = Motion.Dest;
            if (Follow != null)
            {
                var t = world?.Get(Follow.TargetId);
                if (t != null)
                {
                    var dx = t.X - X;
                    var dy = t.Y - Y;
                    var d = (float)Math.Sqrt((double)dx * dx + (double)dy * dy);
                    target = d <= Follow.Distance ? null : new Vec3(t.X - dx / d * Follow.Distance, t.Y - dy / d * Follow.Distance, t.Z);
                }
                else Follow = null;
            }
            if (Turning != 0 && target == null)
            {
                var d = Turning * TurnSpeed * dt;
                Motion.Yaw = Motion.DesiredYaw = (Motion.Yaw + d + 65536) % 65536;
            }
            var landing = Motion.Landing;
            var z0 = Motion.Z;
            var moved = Motion.Step(dt, ground, target);
            if (landing && !Motion.Landing && (IsSelf || Math.Abs(Motion.Z - z0) >= LogLandDelta))
                Debug.Log($"[pouso] {Kind} {ObjectId} ({Motion.X:0},{Motion.Y:0}) z do pacote {z0:0} -> chao {Motion.Z:0} ({Motion.Z - z0:+0;-0;0})");
            Sync();
            return moved;
        }

        /// <summary>Heading do L2 (float) para o angulo Y de Euler do Unity (graus), truncando como o `& 0xffff` do JS.</summary>
        static float HeadingDeg(float heading) => (((int)heading) & 0xffff) / 65536f * 360f;

        void Sync()
        {
            if (Actor.Root == null) return;
            Actor.Root.localPosition = Coords.ToUnity(Motion.X, Motion.Y, Entities.DrawHeight(Motion.X, Motion.Y, Motion.Z));
            Actor.Yaw.localRotation = Quaternion.Euler(0, HeadingDeg(Motion.Yaw), 0);
        }

        /// <summary>Sentar/levantar (ChangeWaitType) e morrer/reviver: toca a animacao de transicao uma vez.</summary>
        public void SetSitting(bool sit)
        {
            if (sit == Sitting) return;
            Sitting = sit;
            StartPosture(sit ? "Sit" : "Stand");
        }

        /// <summary>Morto e com a animacao Death terminada (o pawn ja esta no DeathWait).</summary>
        public bool InDeathWait => Dead && (posture == null || posture.Anim != "Death" || clock >= posture.Until);

        public void SetDead(bool dead)
        {
            if (dead == Dead) return;
            Dead = dead;
            if (dead) StartPosture("Death");
            else posture = null;
        }

        void StartPosture(string anim)
        {
            var a = Anim(anim);
            if (a.Name == null || !Actor.HasClip(a.Name))
            {
                posture = null;
                return;
            }
            Actor.Play(a.Name, a.Rate, false, Movement.TweenWait);
            posture = new Posture { Anim = anim, Until = clock + Actor.ClipDuration(a.Name) / a.Rate };
        }

        static readonly Dictionary<string, string> AnimKindOf = new()
        {
            ["Walk"] = "walk", ["Run"] = "run", ["Wait"] = "wait", ["Turn"] = "walk", ["Sit"] = "sit", ["SitWait"] = "sit",
            ["Stand"] = "wait", ["Death"] = "death", ["DeathWait"] = "death", ["AtkWait"] = "atkwait", ["Atk01"] = "atk",
            ["Atk02"] = "atk", ["Atk03"] = "atk",
        };

        /// <summary>Clipe (e taxa base) de uma animacao de movimento ("Walk", "Run", "Wait"...) para este pawn.</summary>
        public MoveAnimInfo Anim(string which)
        {
            var a = GameData.MoveAnim(Section, which, Widx);
            if (a.Name != null && Actor.HasClip(a.Name)) return a;
            // secoes sem a chave: cai para as tabelas do l2anim e por fim pelo nome do clipe
            var kind = AnimKindOf.TryGetValue(which, out var k) ? k : "wait";
            var fromInt = Kind == "npc" ? GameData.NpcAnim(NpcId, kind) : GameData.PlayerAnim(Model, kind, Widx);
            var name = Actor.HasClip(fromInt) ? fromInt : Actor.FindClip(kind);
            return new MoveAnimInfo(name, a.Rate);
        }

        /// <summary>
        /// Atualizador de animacao de movimento (engine.dll 0x10624cc0): andando toca Walk (fase inicial ou modo andar)
        /// ou Run com taxa XxxAnimRate * moveMul e tween 0,1 s (0,4 s saindo do Wait); parado toca Turn se estiver
        /// girando rapido, senao Wait com taxa moveMul e tween 0,2 s.
        /// </summary>
        public void Animate(float dt, bool moving)
        {
            clock += dt;
            if (!Actor.Loaded || Kind == "item") return;
            Motion.HasWalkAnim = Anim("Walk").Name != null;
            var mul = Motion.MoveMul != 0 ? Motion.MoveMul : 1;
            var waitName = Anim("Wait").Name;
            if (posture != null && clock < posture.Until && !moving)
            {
                Actor.Update(dt);
                return;
            }
            if (posture != null && (moving || clock >= posture.Until)) posture = null;
            if (casting != null)
            {
                var c = casting;
                var t = clock - c.T0;
                if (moving || t >= c.Plan.End) casting = null;
                else
                {
                    var target = World?.Get(c.TargetId);
                    if (target != null && target != this) Motion.DesiredYaw = Movement.HeadingOf(target.X - X, target.Y - Y);
                    var idx = c.Plan.Phases.FindIndex(p => t < p.End);
                    if (idx < 0) idx = c.Plan.Phases.Count - 1;
                    if (idx != c.Phase)
                    {
                        var p = c.Plan.Phases[idx];
                        c.Phase = idx;
                        Actor.Play(p.Name, p.Rate, p.Loop, idx == 0 ? c.Plan.Tween : 0.05f);
                    }
                    Actor.Update(dt);
                    return;
                }
            }
            if (attacking != null)
            {
                if (moving || clock >= attacking.Until) attacking = null;
                else
                {
                    var t = World?.Get(attacking.TargetId);
                    if (t != null) Motion.DesiredYaw = Movement.HeadingOf(t.X - X, t.Y - Y);
                    Actor.Update(dt);
                    return;
                }
            }
            if (Dead)
            {
                var a = Anim("DeathWait");
                Actor.Play(a.Name, a.Rate, true, Movement.TweenWait);
            }
            else if (moving)
            {
                var a = Anim(Motion.RunPhase ? "Run" : "Walk");
                var cur = Actor.ClipName;
                var fromWait = waitName != null && cur != null && string.Equals(cur, waitName, StringComparison.OrdinalIgnoreCase);
                Actor.Play(a.Name, a.Rate * mul, true, fromWait ? Movement.TweenMoveFromWait : Movement.TweenMove);
            }
            else if (Sitting)
            {
                var a = Anim("SitWait");
                Actor.Play(a.Name, a.Rate, true, Movement.TweenWait);
            }
            else if (Motion.TurnRate > Movement.TurnAnimRate)
            {
                var a = Anim("Turn");
                Actor.Play(a.Name, a.Rate * mul, true, Movement.TweenMove);
            }
            else if (InCombat)
            {
                var a = Anim("AtkWait");
                Actor.Play(a.Name ?? Anim("Wait").Name, a.Rate * mul, true, Movement.TweenWait);
            }
            else
            {
                var a = Anim("Wait");
                Actor.Play(a.Name, a.Rate * mul, true, Movement.TweenWait);
            }
            Actor.Update(dt);
        }

        // ------------------------------------------------------------ nome e marcador de selecao

        /// <summary>Unidades do mundo por pixel de tela a 1 unidade de profundidade (World.Update recalcula pelo FOV).</summary>
        public static float PxScale = 0.0016f;

        /// <summary>Tamanho da fonte do nome em pixels (Tahoma 12 px no original).</summary>
        public const float LabelFontPx = 12;
        /// <summary>
        /// Resolucao da fonte do TextMesh e o characterSize que da 1 unidade local por pixel (o em do TextMesh mede
        /// fontSize * characterSize / 10 unidades; medido: 48 / 1 -> linhas a cada 5,44 unidades).
        /// </summary>
        const int TmFontSize = 48;
        const float TmCharSize = LabelFontPx * 10f / TmFontSize;

        static Font labelFont;

        static Font LabelFont
        {
            get
            {
                if (labelFont == null) labelFont = Resources.GetBuiltinResource<Font>("LegacyRuntime.ttf");
                return labelFont;
            }
        }

        static string Hex(Color c) => "#" + ColorUtility.ToHtmlStringRGB(c);

        static TextMesh MakeText(Transform parent, string name, string text, Color color, Vector3 offset)
        {
            var go = new GameObject(name);
            go.transform.SetParent(parent, false);
            go.transform.localPosition = offset;
            var tm = go.AddComponent<TextMesh>();
            tm.font = LabelFont;
            tm.fontSize = TmFontSize;
            tm.characterSize = TmCharSize;
            tm.anchor = TextAnchor.LowerCenter;
            tm.alignment = TextAlignment.Center;
            tm.richText = true;
            tm.lineSpacing = 1f;
            tm.color = color;
            tm.text = text;
            var mr = go.GetComponent<MeshRenderer>();
            mr.sharedMaterial = LabelFont.material;
            mr.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
            mr.receiveShadows = false;
            return tm;
        }

        /// <summary>Nome (e titulo acima, como no cliente original), tamanho fixo na tela. Cores em CSS.</summary>
        public void SetLabel(string text, string color = "#ffffff", string title = "", string titleColor = "#ffff77") =>
            SetLabel(text, Entities.CssColor(color, Color.white), title, Entities.CssColor(titleColor, new Color(1, 1, 0x77 / 255f)));

        public void SetLabel(string text, Color color, string title, Color titleColor)
        {
            title ??= "";
            var key = $"{text}{Hex(color)}{title}{Hex(titleColor)}";
            if (key == labelText) return;
            labelText = key;
            if (label != null)
            {
                RenderMats.Destroy(label);
                label = null;
            }
            if (string.IsNullOrEmpty(text) || Actor.Root == null) return;
            label = new GameObject("Label");
            label.transform.SetParent(Actor.Root, false);
            var rich = (title != "" ? $"<color={Hex(titleColor)}>{Escape(title)}</color>\n" : "") + $"<color={Hex(color)}>{Escape(text)}</color>";
            var plain = (title != "" ? Escape(title) + "\n" : "") + Escape(text);
            // contorno simples: copia preta deslocada 1 px, atras do texto
            MakeText(label.transform, "Shadow", plain, new Color(0, 0, 0, 0.9f), new Vector3(1, -1, 0.5f));
            MakeText(label.transform, "Text", rich, Color.white, Vector3.zero);
            PlaceLabel();
        }

        static string Escape(string s) => s?.Replace("<", "<​") ?? "";

        public void LabelVisible(bool on)
        {
            if (label == null) return;
            if (label.activeSelf != on) label.SetActive(on);
        }

        public void PlaceLabel()
        {
            if (label != null) label.transform.localPosition = new Vector3(0, (Actor.Height > 0 ? Actor.Height : 0.5f) + 0.06f, 0);
        }

        /// <summary>Vira o nome para a camera e o escala para ficar com tamanho fixo em pixels (o sprite do three).</summary>
        public void UpdateLabel(Camera camera)
        {
            if (label == null || !label.activeSelf || camera == null) return;
            var ct = camera.transform;
            var t = label.transform;
            t.rotation = ct.rotation;
            var depth = Mathf.Max(0.01f, Vector3.Dot(t.position - ct.position, ct.forward));
            var s = camera.orthographic ? 2 * camera.orthographicSize / Mathf.Max(1, camera.pixelHeight) : depth * PxScale;
            var ps = t.parent != null ? t.parent.lossyScale.y : 1;
            t.localScale = Vector3.one * (s / (ps > 0 ? ps : 1));
        }

        static Mesh ringMesh;
        static readonly Dictionary<int, Material> ringMats = new();

        static Mesh RingMesh()
        {
            if (ringMesh != null) return ringMesh;
            const int seg = 40;
            const float r0 = 0.16f, r1 = 0.2f;
            var v = new Vector3[(seg + 1) * 2];
            var tri = new int[seg * 6];
            for (var i = 0; i <= seg; i++)
            {
                var a = i / (float)seg * Mathf.PI * 2;
                var c = Mathf.Cos(a);
                var s = Mathf.Sin(a);
                v[i * 2] = new Vector3(c * r0, 0, s * r0);
                v[i * 2 + 1] = new Vector3(c * r1, 0, s * r1);
                if (i < seg)
                {
                    var k = i * 6;
                    tri[k] = i * 2;
                    tri[k + 1] = i * 2 + 2;
                    tri[k + 2] = i * 2 + 1;
                    tri[k + 3] = i * 2 + 1;
                    tri[k + 4] = i * 2 + 2;
                    tri[k + 5] = i * 2 + 3;
                }
            }
            ringMesh = new Mesh { name = "selection ring", vertices = v, triangles = tri };
            ringMesh.RecalculateNormals();
            ringMesh.RecalculateBounds();
            return ringMesh;
        }

        public void SetSelected(bool on)
        {
            if (on && ring == null && Actor.Root != null)
            {
                var color = Kind == "npc" ? 0xffcc44 : 0x66bbff;
                if (!ringMats.TryGetValue(color, out var mat) || mat == null)
                {
                    mat = RenderMats.Fx(RenderMats.Hex(color, 0.8f));
                    ringMats[color] = mat;
                }
                ring = RenderMats.MeshObject("SelectionRing", RingMesh(), mat, Actor.Root);
                ring.transform.localPosition = new Vector3(0, 0.02f, 0);
            }
            else if (!on && ring != null)
            {
                RenderMats.Destroy(ring);
                ring = null;
            }
        }
    }
}
