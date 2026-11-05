// Efeitos presos aos pawns fora do cast (spec 09 §1.1, §2.6 e pseudocodigo): o brilho de encantamento da arma
// (FNWeaponEffect::Init 0x10313da9, criado por APawn::UpdateAbnormalState 0x10311847 quando enchant >= EnchantEffectShow do
// env.int; classe de weapongrp effA/effB com os 5 floats do slot), o halo de raid (Npcgrp rb_effect/rb_effect_fl [I]), o
// efeito de golpe (APawn::AssociateAttackedNotify 0x10310ba9: DamageEffect = Npcgrp.effect / p_u002_a na borda do
// cilindro voltada para o atacante e, com soulshot, soulshot.int[grade].Atk/AtkCr no mesmo ponto, atenuado com grupo de
// mais de 2; #0058) e a flecha do ataque normal (NArrow
// como projetil, APawn::ThrowAttackProcess [I: sem a interpolacao Hermite]).
using System;
using System.Collections.Generic;
using L2Web.World;
using Newtonsoft.Json.Linq;
using UnityEngine;

namespace L2Web.Render.Fx
{
    public sealed class FxPawnEffects
    {
        readonly FxWorld W;
        readonly SkillFx Fx;
        readonly FxCastRunner Runner;
        public JObject Tables = new();
        readonly Dictionary<int, (int key, List<FxEmitterActor> fx)> weapon = new();
        readonly Dictionary<int, FxEmitterActor> halo = new();
        float now;

        public FxPawnEffects(FxWorld w, SkillFx fx, FxCastRunner runner)
        {
            W = w;
            Fx = fx;
            Runner = runner;
        }

        JObject Enchant => Tables?["enchant"] as JObject;

        /// <summary>[EnchantEffect] EnchantEffectShow do env.int (7 no cliente): encantamento minimo com brilho [O].</summary>
        public int EnchantEffectShow => (int?)Enchant?["EnchantEffectShow"] ?? 7;

        /// <summary>Por quadro: confere armas e halos de todas as entidades carregadas.</summary>
        public void Tick(float dt, World.World world)
        {
            now += dt;
            if (world == null || W.Library == null) return;
            foreach (var e in world.Entities.Values)
            {
                if (!e.Actor.Loaded || e.Kind == "item") continue;
                UpdateWeapon(e);
                if (e.Kind == "npc") UpdateHalo(e);
            }
            // entidades que sumiram
            if (weapon.Count > 0)
            {
                var gone = new List<int>();
                foreach (var kv in weapon) if (!world.Entities.ContainsKey(kv.Key)) gone.Add(kv.Key);
                foreach (var id in gone) { foreach (var f in weapon[id].fx) f.Destroy(); weapon.Remove(id); }
            }
            if (halo.Count > 0)
            {
                var gone = new List<int>();
                foreach (var kv in halo) if (!world.Entities.ContainsKey(kv.Key) || kv.Value.Destroyed) gone.Add(kv.Key);
                foreach (var id in gone) { halo[id].Destroy(); halo.Remove(id); }
            }
        }

        // ------------------------------------------------------------------ FNWeaponEffect

        /// <summary>UpdateAbnormalState: brilho se enchant >= EnchantEffectShow (ou variacao); classe e parametros do weapongrp.</summary>
        void UpdateWeapon(Entity e)
        {
            var key = e.WeaponId * 64 + Math.Min(63, Math.Max(0, e.Enchant));
            var show = e.Kind != "npc" && e.WeaponId != 0 && e.Enchant >= EnchantEffectShow;
            if (!show) key = -1;
            if (weapon.TryGetValue(e.ObjectId, out var cur))
            {
                var alive = cur.fx.TrueForAll(f => !f.Destroyed);
                if (cur.key == key && alive) return;
                foreach (var f in cur.fx) f.Destroy();
                weapon.Remove(e.ObjectId);
            }
            if (key < 0) return;
            var list = new List<FxEmitterActor>();
            var row = Tables?["weapons"]?[e.WeaponId.ToString()] as JObject;
            if (row != null)
            {
                var pawn = Runner.Pawn(e);
                var a = SpawnWeaponEffect(pawn, e, (string)row["effA"], row["A"] as JArray, true);
                if (a != null) list.Add(a);
                var b = SpawnWeaponEffect(pawn, e, (string)row["effB"], row["B"] as JArray, false);
                if (b != null) list.Add(b);
            }
            weapon[e.ObjectId] = (key, list);
        }

        /// <summary>FNWeaponEffect::Init [O]: escala sqrt(CR*CH)/sqrt(207) x fatores do slot nas faixas de tamanho/velocidade/offset, preso ao osso da mao, Opacity/Num do env.int.</summary>
        public FxEmitterActor SpawnWeaponEffect(FxPawn pawn, Entity e, string cls, JArray prm, bool rightHand)
        {
            if (string.IsNullOrEmpty(cls) || pawn == null || !W.Library.Has(cls)) return null;
            var boneName = rightHand ? pawn.RHandBoneName : pawn.LHandBoneName;
            var bone = boneName != null ? pawn.Bone(boneName) : null;
            if (bone == null) return null;
            // junk1A/junk1B do weapongrp: offset xyz, fator de tamanho, fator de velocidade [I ordem]
            var offset = prm != null && prm.Count >= 3 ? new Vector3((float)prm[0], (float)prm[1], (float)prm[2]) : Vector3.zero;
            var sizeK = prm != null && prm.Count >= 4 ? (float)prm[3] : 1f;
            var velK = prm != null && prm.Count >= 5 ? (float)prm[4] : 1f;
            if (sizeK == 0) sizeK = 1;
            if (velK == 0) velK = 1;
            var f = Mathf.Sqrt(e.CollisionRadius * e.CollisionHeight) / Mathf.Sqrt(207f);
            var fx = W.Spawn(cls, bone.Location, bone.Rotation, pawn);
            if (fx == null) return null;
            foreach (var em in fx.Emitters)
            {
                em.D.StartSizeRange = em.D.StartSizeRange * (f * sizeK);
                em.D.StartVelocityRange = em.D.StartVelocityRange * (f * velK);
                em.D.StartLocationOffset *= f;
            }
            var en = Enchant;
            var row = en?[$"Enchant{e.Enchant}"] as JObject ?? en?["Enchant"] as JObject;
            var opacity = (float?)row?["Opacity"] ?? 1f;
            var num = (float?)row?["Num"] ?? 1f;
            fx.SetOpacity(opacity);
            fx.SetMaxParticles(num);
            fx.AttachedBone = bone;
            fx.RelativeLocation = offset * f;
            fx.Location = bone.Location + FxMath.RotateVector(fx.RelativeLocation, bone.Rotation);
            fx.LifeAnchor = e.Actor.Root;
            return fx;
        }

        // ------------------------------------------------------------------ halo de raid

        /// <summary>Npcgrp rb_effect_on/rb_effect/rb_effect_fl: halo preso ao pawn, escalado por rb_effect_fl [I].</summary>
        void UpdateHalo(Entity e)
        {
            if (halo.TryGetValue(e.ObjectId, out var h) && !h.Destroyed) return;
            var row = Tables?["npcs"]?[e.NpcId.ToString()] as JObject;
            if (row == null || ((int?)row["rb_on"] ?? 0) == 0) return;
            var cls = (string)row["rb_effect"];
            if (string.IsNullOrEmpty(cls) || !W.Library.Has(cls)) return;
            var pawn = Runner.Pawn(e);
            var fx = W.Spawn(cls, pawn.Location, pawn.Rotation, pawn);
            if (fx == null) return;
            var fl = (float?)row["rb_fl"] ?? 1f;
            if (fl > 0 && Mathf.Abs(fl - 1) > 1e-4f) fx.SetSizeScale(fl);
            fx.AttachedBone = pawn;
            fx.RelativeLocation = Vector3.zero;
            fx.LifeAnchor = e.Actor.Root;
            halo[e.ObjectId] = fx;
        }

        // ------------------------------------------------------------------ golpe

        /// <summary>Quantos membros tem o grupo (m_pDataManager+0x38 da NWindow, "PartyMemberCount"): atenua o efeito do soulshot.</summary>
        public Func<int> PartyMemberCount = () => 0;

        /// <summary>
        /// Campo do soulshot.int[grade] no golpe (AssociateAttackedNotify 0x10310ba9 e AttackedNotify 0x103046e2) [O]: "Atk"
        /// (FL2GameData+0x7f644 = 0x10bbbeb4), no critico "AtkCr" (+0x7f65c = 0x10bbbecc) ou, com bUseDarkEffect do atacante
        /// (pawn+0x1818.b0), "AtkDarkCr" (+0x7f650 = 0x10bbbec0). bUseDarkEffect so e declarado (Pawn.uc) e copiado: nada o liga.
        /// </summary>
        public static string SoulshotHitField(bool crit, bool darkEffect) => !crit ? "Atk" : darkEffect ? "AtkDarkCr" : "AtkCr";

        /// <summary>Classe do efeito do soulshot no alvo; null se o golpe nao tem soulshot (0x10) ou a grade (flags &amp; 0xF) nao e 0..5 [O].</summary>
        public static string SoulshotHitClass(JObject soulshot, int flags, bool darkEffect = false)
        {
            if (!HasSoulshot(flags)) return null;
            var cls = (string)soulshot?[LegacyFx.ShotGrades[flags & 0xf]]?[SoulshotHitField((flags & Combat.Hit.Crit) != 0, darkEffect)];
            return string.IsNullOrEmpty(cls) ? null : cls;
        }

        /// <summary>Ramo do soulshot do AssociateAttackedNotify: flag 0x10 e grade (flags &amp; 0xF) &lt; 6 [O].</summary>
        public static bool HasSoulshot(int flags) => (flags & Combat.Hit.Soulshot) != 0 && (flags & 0xf) < 6;

        /// <summary>Opacidade do efeito do soulshot com grupo grande (SetOpacity(0.9 - (n - 3) * 0.08) se n &gt; 2) [O]; 1 sem grupo.</summary>
        public static float SoulshotOpacity(int partyMembers) => partyMembers > 2 ? 0.9f - (partyMembers - 3) * 0.08f : 1f;

        /// <summary>
        /// Efeitos de um golpe, na ordem do original [O]; partyFade marca o que recebe SoulshotOpacity.
        /// Corpo a corpo (APawn::AssociateAttackedNotify): com soulshot, DamageEffect (sem KeepMinFrameRate) e o Atk/AtkCr da
        /// grade, sem p_u004_a; sem soulshot, DamageEffect e, no critico sem escudo, p_u004_a.
        /// Flecha (APawn::AttackedNotify tipo 1, com os flags do ataque guardados no atacante em +0x634): com soulshot, igual;
        /// sem soulshot, escudo sem critico nada, escudo com critico DamageEffect + p_u004_a, sem escudo so o DamageEffect.
        /// Miss nao chega aqui (APawn::Action_Attack sai antes). Arma amaldicoada (it_zariche_ta) fica de fora.
        /// </summary>
        public static List<(string cls, bool partyFade)> HitEffects(int flags, bool arrow, string damageEffect, JObject soulshot, bool keepMinFrameRate = false, bool darkEffect = false)
        {
            var list = new List<(string, bool)>();
            if ((flags & Combat.Hit.Miss) != 0) return list;
            var dmg = keepMinFrameRate || string.IsNullOrEmpty(damageEffect) ? null : damageEffect;
            var crit = (flags & Combat.Hit.Crit) != 0;
            var shield = (flags & Combat.Hit.Shield) != 0;
            if (HasSoulshot(flags))
            {
                if (dmg != null) list.Add((dmg, false));
                var ss = SoulshotHitClass(soulshot, flags, darkEffect);
                if (ss != null) list.Add((ss, true));
                return list;
            }
            if (arrow)
            {
                if (shield && !crit) return list;
                if (dmg != null) list.Add((dmg, false));
                if (shield) list.Add(("LineageEffect.p_u004_a", false));
                return list;
            }
            if (dmg != null) list.Add((dmg, false));
            if (crit && !shield) list.Add(("LineageEffect.p_u004_a", false));
            return list;
        }

        /// <summary>
        /// Ponto do golpe (AssociateAttackedNotify) [O]: Location do alvo - forward(Rotation(alvo - atacante)) * d, com d = CR/2
        /// do alvo ou, se CR + CH do alvo &gt; 150, Clamp(0.85 * distancia, 0, distancia - CR do atacante) (FUN_103704b0; 150.0
        /// em 0x108a33d8, 0.85 em 0x108ce330). rot = a rotacao do golpe, usada no spawn.
        /// </summary>
        public static Vector3 HitLocation(Vector3 target, Vector3 attacker, float targetRadius, float targetHeight, float attackerRadius, out FRotator rot)
        {
            var d = target - attacker;
            rot = FxMath.VectorToRotator(d);
            var off = targetRadius * 0.5f;
            if (targetRadius + targetHeight > 150f) off = UeClamp(d.magnitude * 0.85f, 0f, d.magnitude - attackerRadius);
            return target - rot.Forward * off;
        }

        /// <summary>FUN_103704b0: v &lt; min devolve min; senao v &lt; max devolve v; senao max (com max &lt; min, max).</summary>
        static float UeClamp(float v, float min, float max) => v < min ? min : v < max ? v : max;

        /// <summary>Golpe so com o critico: o OnAttack do App.cs antes do pedido 0053 (sem soulshot, sem escudo).</summary>
        public void OnHit(Entity target, Entity attacker, bool crit, Func<Entity, string> damageEffect)
            => OnHit(target, attacker, crit ? Combat.Hit.Crit : 0, false, damageEffect);

        /// <summary>
        /// Efeitos do golpe no alvo (HitEffects) no ponto HitLocation, com a rotacao do golpe, soltos no mundo. flags = byte do
        /// golpe no pacote Attack 0x05 (0x10 soulshot | grade, 0x20 critico, 0x40 escudo, 0x80 miss); arrow = golpe de flecha.
        /// [I] o original so mostra com o alvo desenhado no quadro anterior (bRendered, pawn+0x17fc.b0, vfunc 0x218); a flecha
        /// usa o ponto onde crava, aqui o mesmo ponto do corpo a corpo.
        /// </summary>
        public void OnHit(Entity target, Entity attacker, int flags, bool arrow, Func<Entity, string> damageEffect)
        {
            if (target == null || W.Library == null) return;
            var tp = Runner.Pawn(target);
            var loc = tp.Location;
            var rot = tp.Rotation;
            if (attacker != null && attacker != target)
                loc = HitLocation(tp.Location, Runner.Pawn(attacker).Location, target.CollisionRadius, target.CollisionHeight, attacker.CollisionRadius, out rot);
            var legacy = Runner.Legacy;
            var dmg = damageEffect?.Invoke(target) ?? "LineageEffect.p_u002_a";
            var opacity = SoulshotOpacity(PartyMemberCount?.Invoke() ?? 0);
            foreach (var (cls, fade) in HitEffects(flags, arrow, dmg, legacy?.Soulshot, legacy?.KeepMinFrameRate ?? false))
            {
                if (!W.Library.Has(cls)) continue;
                var fx = W.Spawn(cls, loc, rot, null);
                if (fx != null && fade && opacity < 1f) fx.SetOpacity(opacity);
            }
        }

        /// <summary>Flecha do ataque normal: NArrow da mao direita ate o alvo (ThrowAttackProcess) [I: sem arco Hermite].</summary>
        public FxEmitterActor OnBowShot(Entity attacker, Entity target)
        {
            if (attacker == null || target == null || W.Library == null || !W.Library.Has("LineageEffect.NArrow")) return null;
            var ap = Runner.Pawn(attacker);
            var tp = Runner.Pawn(target);
            var hand = ap.RHandBoneName != null ? ap.Bone(ap.RHandBoneName) : null;
            var from = hand?.Location ?? ap.Location;
            var fx = W.Spawn("LineageEffect.NArrow", from, FxMath.VectorToRotator(tp.Location - from), ap);
            if (fx == null) return null;
            fx.IsProjectile = true;
            fx.OnHitWall = (a, _) => a.Kill();
            fx.StartProjectile(tp);
            return fx;
        }
    }
}
