// Efeitos presos aos pawns fora do cast (spec 09 §1.1, §2.6 e pseudocodigo): o brilho de encantamento da arma
// (FNWeaponEffect::Init 0x10313da9, criado por APawn::UpdateAbnormalState 0x10311847 quando enchant >= EnchantEffectShow do
// env.int; classe de weapongrp effA/effB com os 5 floats do slot), o halo de raid (Npcgrp rb_effect/rb_effect_fl [I]), o
// efeito de golpe (APawn::AssociateAttackedNotify 0x10310ba9: DamageEffect = Npcgrp.effect / p_u002_a, na borda do
// cilindro voltada para o atacante, opacidade reduzida com varios golpes simultaneos) e a flecha do ataque normal (NArrow
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
        readonly Dictionary<int, List<float>> hitsOn = new();
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

        /// <summary>
        /// APawn::AssociateAttackedNotify [O]: efeito de golpe (DamageEffect) na borda do cilindro do alvo voltada para o
        /// atacante (Location - forward(Rotation(alvo - atacante)) * CR/2), com a rotacao do golpe; critico tambem p_u004_a [I];
        /// com mais de 2 efeitos simultaneos no alvo, opacidade 0.9 - (n - 3) * 0.08.
        /// </summary>
        public void OnHit(Entity target, Entity attacker, bool crit, Func<Entity, string> damageEffect)
        {
            if (target == null || W.Library == null) return;
            var tp = Runner.Pawn(target);
            var loc = tp.Location;
            var rot = tp.Rotation;
            if (attacker != null && attacker != target)
            {
                var ap = Runner.Pawn(attacker);
                var d = tp.Location - ap.Location;
                rot = FxMath.VectorToRotator(d);
                loc = tp.Location - rot.Forward * (target.CollisionRadius * 0.5f);
            }
            var cls = damageEffect?.Invoke(target) ?? "LineageEffect.p_u002_a";
            var list = hitsOn.TryGetValue(target.ObjectId, out var l) ? l : hitsOn[target.ObjectId] = new List<float>();
            list.RemoveAll(t => now - t > 0.5f);
            list.Add(now);
            var n = list.Count;
            var fx = W.Spawn(cls, loc, rot, null);
            if (fx != null && n > 2) fx.SetOpacity(0.9f - (n - 3) * 0.08f);
            if (crit && W.Library.Has("LineageEffect.p_u004_a")) W.Spawn("LineageEffect.p_u004_a", loc, rot, null);
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
