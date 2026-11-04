# Efeitos de skill ao vivo no aCis local (#0053)

Capturas do porte no aCis local (Editor, Play mode, 1920×1080) com a conta `l2webtest4` (`Docs/contas_teste.md`): `FxMago` (Human Mystic → Wizard, nível 20–30, Staff of Life + Brigandine Shield) e `FxGuerreiro` (Human Fighter, Cursed Maingauche), em Turek (Orc Barracks) e em Giran. Os buffs do servidor (x500) encurtam muito os casts: Battle Heal com `hit` 714 ms.

Quadros em sequência e pares antes/depois em `Docs/evidencias/efeitos-skill/` (índice no fim). "Antes" é a mistura linear de antes da #0053, reproduzida com `FxGammaPass.LinearDebug` (`-l2fxlinear`) na mesma sessão. "Depois" é a mistura em gama.

Colunas:
- **Classes e fase**: atores que nasceram, com o instante desde o envio do pacote (registro `FXLIVE`/`FXHOOK` do porte).
- **Posição/osso**: deslocamento em unidades UE em relação à raiz (pés) do caster. Trailer = segue o pawn.
- **Escala**: `bSizeScale` → CR/9 (CR do mago 7,5 → 0,83).
- **Duração**: `AdjustparticleLife(ShotTime + 0,2)` no cast.
- **Mistura**: DrawStyle de cada emissor.

| Skill | Tipo (09) | Classes e fase | Posição / osso | Escala | Duração | Textura / malha · mistura | Comparado com o original |
|---|---|---|---|---|---|---|---|
| 1015 Battle Heal (SVE `skill.wh.1011`) | cura | Casting `wh_heal_ca` (0,10 s); Shot `wh_heal_ta` no alvo (0,70 s) | AttachOn 5 (Trail), offset (0,0,−1)·H → pés; `wh_heal_ta` com bSpawnOnTarget | 0,83 (bSizeScale) | cast curto: ShotTime 0,56 → `AdjustparticleLife(0,76)`. Os círculos `MeshEmitter3/0` (vida 3 → −0,2) não nascem, e o `MeshEmitter1` começa já em fade-out (RGB 44/255). Igual ao 0x1060ac50 | `magiccirclewhite00/01` Brighten/Translucent (malha); `fx_m_t0004` Beam + `fx_m_t0005` Sprite Translucent | pendente (pedido 0048). Antes: só uma coluna fraca. Depois: coluna de luz nítida (`05`/`06`) |
| 1068 Might (legado) | buff em si | Init `m_u004_a` (0,10 s); Shot `m_u004_b` (1,30 s) | Trailer nos pés; `m_u004_b` a +23 (centro do cilindro) | — | ShotTime + 1 (SpawnSkillEffect) | `supportenchant00/02` Brighten/Translucent; `fx_m_t0005` Brighten | pendente (`18`) |
| 1040 Shield (legado) | buff em si | Init `m_u008_a`; Shot `m_u008_b` (1,35 s) | pés; centro | — | idem | `magiccirclewhite00/01` Brighten/Translucent; `white_shield00` Brighten | pendente (`19`) |
| — | buff em outro | não capturado: sem grupo nem segundo personagem online (o `FxGuerreiro` é da mesma conta) | — | — | — | — | pendente (pedido 0048) |
| 1177 Wind Strike (legado) | magia com projétil | Init `m_u000_a` (pés) + `m_u000_b` (mão); Shot `m_u000_c` (NSkillProjectile, Speed 1000, AccSpeed 3000, ~0,2 s até o alvo); Explosion `m_u000_d` no alvo | pés / osso da mão; projétil sai da mão | — | ShotTime + 1 | `fx_m_t0001/0006` (MeshEmitter AlphaBlend + Sprite Translucent); `windknifewave00` Brighten, `windknifeball00` AlphaBlend | pendente (`01` antes/depois, `10`). Em gama, o redemoinho AlphaBlend fica mais transparente e menos leitoso |
| 1184 Ice Bolt (SVE `skill.el.1184`) | magia com projétil (alvo) | Casting `el_ice_bolt_ca` (0,10 s); Shot `el_ice_bolt_ta` no alvo (1,00 s) | pés; no alvo (bSpawnOnTarget) | 0,83 | ShotTime + 0,2 | `etcpotion02` Translucent; 6× `fx_m_t0035` AlphaBlend | pendente (`12`) |
| 1220 Blaze (SVE = `el_flame_strike_*`) | projétil de fogo | Casting `el_flame_strike_ca` + `_pr` (0,10 s); Shot `el_flame_strike_fl` (projétil, 1,10 s); Explosion `_ta` | pés; `_pr` a +46 (offset (0,0,1)·H) | 0,83 | ShotTime + 0,2 | `firebomb02` Brighten (malha), `fx_m_t0034` Translucent/Brighten, `fx_m_t0072` AlphaBlend | pendente (`13`) |
| 1181 Flame Strike (SVE `skill.el.1181`) | magia de área | igual ao Blaze; Explosion `el_flame_strike_ta` em cada alvo associado (bOnMultiTarget) + anel no chão | pés; alvo | 0,83 | ShotTime + 0,2 | idem | pendente (`02` antes/depois, `11`). Em gama, o fogo aditivo nos pés fica mais forte e saturado |
| 1172 Aura Burn (SVE) | magia no alvo | Casting `el_aura_burn_ca`; Shot `el_aura_burn_ta` (0,55 s) | pés; alvo (+13) | 0,83 | ShotTime + 0,2 | `auracharge00/01` Translucent/Brighten; `fx_m_t0069`; `shockwave00` | pendente (`14`) |
| 1167 Poisonous Cloud (legado) | área no chão | Init `m_u021_a` (0,70 s); Shot `m_u021_b` (1,75 s) no ponto do alvo | pés; no alvo (phys None) | — | ShotTime + 1 | `magiccircleblack00/02` AlphaBlend, `01` Brighten; `fx_m_t0089` AlphaBlend, `fx_m_t0061` Darken | pendente (`15`) |
| 1164 Curse: Weakness (legado) | debuff no alvo | Init `m_u007_a` (0,10 s); Shot `m_u007_b` no alvo (0,55 s) | pés; alvo | — | ShotTime + 1 | `magiccircleblack00/02` AlphaBlend, `01` Brighten; `black_poison00` Darken, `fx_m_t0089` AlphaBlend | pendente (`16`). Círculo vermelho e preto nos pés e fumaça roxa no alvo |
| 1069 Sleep (legado) | debuff | Init `m_u018_a` (0,10 s); o Shot `m_u018_b` não saiu na janela de 3,2 s do registro (não verificado) | pés | — | — | `supportenchant00/02`, `fx_m_t0005` | pendente (`17`) |
| — | canalização/feixe | a amostra tem um feixe (`wh_heal_ta.BeamEmitter0` do heal) e nenhuma skill de canalização: as invocações do Wizard (1111, 1225) pedem cristais que o personagem não tem | — | — | — | — | pendente (pedido 0048) |
| 16 Mortal Blow (legado) | física de arma com rastro | Init `s_u001_a` + `RibbonSet` (AttachTrailer = SwordTrail) (0,05 s); Shot `s_u001_b` no alvo (0,35 s); golpes `p_u002_a`/`p_u004_a` (DamageEffect, crítico) | `s_u001_a` a +23; `RibbonSet` no `Weapon_R_Bone`; `s_u001_b` no alvo | — | rastro: LifeSpan ShotTime + DurationRatio | `RibbonSet` Ribbon Translucent | pendente (`20`) |
| 2160 Blessed Spiritshot D | spiritshot | SNTE `e_u513_a` (SpiritOnSticks D) a 0,60 s | `Weapon_R_Bone` (1HS: LH −1, RH 1) | — | própria | `spirit_gun00`, `skill_power01` (malhas Translucent), `fx_m_t0000/0060/0116` | pendente. **Antes: nada nascia** (`07`); depois: brilho azul-violeta no cajado (`08`) |
| 2150 Soulshot D | soulshot | SNTE `e_u506_a` (OnSticks D) a 0,15 s, no mago e no guerreiro | `Weapon_R_Bone` | — | própria | `spirit_gun00`, `skill_power01`, `fx_m_t0000/0056` | pendente. Antes: nada nascia; depois: `09` |

Lobby (seleção de personagem): mesmos emissores do mapa e mesmo shader. Comparado com a captura do cliente original (`Docs/evidencias/original/1920_03_lobby.png`):
- os raios de luz das janelas (`Emitter13/14/17/22/58/77`, BeamEmitter Translucent `L2_Lobby_T.fx_m_t0086`, opacidade 0,28–0,5) só aparecem com a mistura em gama, como no original (`03`, `04`);
- os halos laranja das tochas (Sprite AlphaBlend `FX_E_T.LightGlowSet.fx_e_t_smoke001`) ficam mais fracos que no original. **Divergente/pendente**: enquadramento e câmera diferentes, sem captura alinhada.

## Índice das evidências

| Arquivo | O que mostra |
|---|---|
| `01_wind_strike_antes_depois.jpg` | cast do Wind Strike: antes (linear) × depois (gama) |
| `02_flame_strike_cast_antes_depois.jpg` | cast do Flame Strike nos pés |
| `03_lobby_emissores_antes_depois.jpg` | lobby: raios de luz ausentes antes, presentes depois |
| `04_lobby_tochas_original_antes_depois.jpg` | recorte das tochas: original, antes, depois |
| `05_battle_heal_antes_seq.jpg` / `06_battle_heal_depois_seq.jpg` | Battle Heal em si, antes e depois (TFactor das malhas + gama) |
| `07_blessed_spiritshot_antes_seq.jpg` / `08_blessed_spiritshot_depois_seq.jpg` | ativação do spiritshot: nada antes, brilho no cajado depois |
| `09_soulshot_d_depois_seq.jpg` | ativação do soulshot D |
| `10`–`20` | sequências (0,12 s entre quadros) de Wind Strike, Flame Strike, Ice Bolt, Blaze, Aura Burn, Poisonous Cloud, Curse Weakness, Sleep, Might, Shield e Mortal Blow com SwordTrail |
