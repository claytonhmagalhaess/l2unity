# Efeitos de skill e partículas: matriz de validação (spec 09)

Referência: `l2anim\docs\client_spec\09_efeitos_skill.md` (§2 disparo, §3 legado, §4 simulação, §5 golden). Dados em
`Assets\StreamingAssets\L2Web\fx\` (cópia de `l2anim\out\re\fx` + `fx_tables.json`/`fx_assets.json` gerados por
`Docs\tools\export_fx_assets.py`). Código em `Assets\L2Web\Scripts\Render\Fx\`. Testes em `Assets\L2Web\Tests\Editor\Fx*Tests.cs`.
Estados: `aprovado` (teste passa ou captura comparada), `aprovado [I]` (regra inferida, teste passa), `pendente`, `não implementado`.
Marcação: **[O]** lido no pseudocódigo/dados, **[I]** inferido, **[N]** lacuna da spec.

Suíte: `Docs\test-results.xml` (volta 1: 384/384; `FxParityTests` compara 3.693 emissores de `fx_golden.json`, cor exata e floats 1e-4).

## 1. Dados e assets (§1)

| # | Regra do 09 | Unity | Estado | Evidência |
|---|---|---|---|---|
| D1 | 886 classes de efeito (lineageeffect 864 + Ketra 12 + Rider 10) com defaults do ator e emissores sobre `engine_defaults.json` | `FxData.cs:564` `FxClassDef.Parse`, `:654` `FxLibrary.LoadPackage`, `:211` `EmitterDef.ForClass` | aprovado | `FxParityTests.Biblioteca_ClassesEEmissores_ComOsDefaultsDoEngine` (defaults DrawStyle 3, MaxParticles 10, UseRegularSizeScale true; at_mortal_blow_cs, el_wind_strike_fl Speed/AccSpeed, RibbonSet) |
| D2 | Todas as propriedades dos .uc (ParticleEmitter, Sprite, Mesh, Beam, Ribbon, VertMesh); float[] gravado como FColor (SubdivisionScale) | `FxData.cs:308` `Set`, `:289` `FloatFromColor` | aprovado | idem; `SubdivisionScale` = bytes R,G,B,A little-endian [I: só 2 emissores usam] |
| D3 | Nome do emissor = nome do objeto no pacote (a propriedade `Name` repete) | `FxData.cs:564` | aprovado | golden `lineageeffect.npc_statue_crystal_water.SpriteEmitter6/SpriteEmitter0` |
| D4 | Texturas (495 assets: LineageEffectsTextures(2), FX_E_T, fx_m_t, LineageNpcsTex, Rider) e malhas (LineageEffectsStaticmeshes, fx_e_s...) exportadas | `Docs/tools/export_fx_assets.py`; `FxAssets.cs:125` `Texture`, `:150` `StaticMesh`, `:234` `VertMesh` | aprovado | `fx/fx_assets.json`: 490 ok; faltam só os 10 de `LineageKetraMesh` (cifra do servidor) e `Barler_bright0` (ausente no cliente), como §1.1 |
| D5 | VertMesh (.3d do umodel) convertido para quadros de vértices + triângulos | `export_fx_assets.py` `read_3d`, `FxAssets.cs:234` | aprovado [I] | 14 malhas em `cache/fx/vm`; escala/taxa da sequência [N] §4.8.9 |

## 2. Disparo e posicionamento (§2)

| # | Regra do 09 | Unity | Estado | Evidência |
|---|---|---|---|---|
| T1 | §2.1.1 `SetMagicInfo`: MagicID/LevelID, Agent = SVE do `skill_visual_effect` (skill_fx_map), SkillHitTime, MagicType = cast_style, TargetPawn | `SkillFx.cs:257` `SetMagicInfo`; `SkillFx.cs:93` `SkillFxMap.Get` | aprovado | `FxSkillMapTests.SkillVisualEffect_ClassesPorFase_IguaisAoMapa` (953 skills, 1.913 ações, 0 classes ausentes) |
| T2 | §2.1.2 linha do tempo: Casting no 1º tick; Shot no notify `AttackShot` (último = PendingNotify 2; sem notify, no fim da sequência); Channeling/PreShot nos notifies | `FxCast.cs:143` `OnMagicSkillUse`, `:193` `Finalize`; eventos vindos de `Skills.CastPlan.Events` (L2Calc.ClientCast) | aprovado [I] | `FxSkillMapTests.TriggerShot_SpecificStage_EMultiAlvo`; instantes dos notifies = `CombatTests.Skills_*` (M4). [I] o porte usa os instantes calculados em vez do notify do clipe |
| T3 | §2.1.1 MagicSkillLaunched → AssociatedActor / bTargetExcepted | `SkillFx.cs:382` `AddAssociatedActor`; `App.cs` handler 0x76 | aprovado | `TriggerShot_SpecificStage_EMultiAlvo` (um efeito por alvo associado) |
| T4 | §2.1.3 sem `skill_visual_effect` → funções legadas | `FxCast.cs:143` (`legacy` quando Agent null) | aprovado | `Legado_CadaCaso_SpawnaClassesDaTabela` |
| T5 | §2.2 SpecificStage: dispara se `(0 && PendingNotify==2) || == StageShot` | `SkillFx.cs:323` `TriggerShot` | aprovado | `TriggerShot_SpecificStage_EMultiAlvo` |
| T6 | §2.3.2 LocateEffect: R = bSpawnOnTarget ? Dest : Base; S = CastingEffectScale; rotação (bUseCharacterRotation / HitRot do projétil / Dest−Base / Base); offset × (CR, 1, H) girado; Pitch = 0; AttachOn None = Loc + offset | `SkillFx.cs:414` `LocateEffectNotify` | aprovado | `FxSkillMapTests.LocateEffect_PosicaoEscalaEDelay` (Dash nos pés, offset 2×CR na direção do alvo) |
| T7 | §2.3.2 AttachOn 1/2 ossos da mão, 3 nome, 4 alias, 5 Trail (bRelativeTrail/TrailerPrePivot), 6/7 pés; falha de osso destrói | `SkillFx.cs:414` (passo 7 e 9); `FxCast.cs:25` `FxPawn` (ossos Weapon_R_Bone/Bip01_R_Hand [I nome das virtuais +0x21c/+0x220], pés Bip01_R_Foot [I], alias → osso homônimo ou Bip01_Spine1 [I]) | aprovado [I] | `LocateEffect_PosicaoEscalaEDelay` (Trail) |
| T8 | §2.3.2 escala: bSizeScale → S *= CR/9; SetSizeScale só se \|S−1\|>1e-4 | `SkillFx.cs:414` passo 8; `FxEmitterActor.cs:347` | aprovado | `LocateEffect_PosicaoEscalaEDelay` (CR 9 não escala), `FxSimTests.SetSizeScale_*` |
| T9 | §2.3.2 SpawnDelay: d = SpawnDelay≥0 ? SpawnDelay : ShotTime+SpawnDelay; d>0 → SetDelayed + FixedLifeTime = ShotTime−d; senão FixedLifeTime 0 / ShotTime; sem MagicInfo destrói | `SkillFx.cs:414` passo 10; `FxEmitterActor.cs:367` `SetDelayed` | aprovado | `LocateEffect_PosicaoEscalaEDelay` (0, 0.2 e −0.5), `FxSimTests.SetDelayed_*`. **Spec corrigida** (dizia `>0`; o pseudocódigo 0x104ecd0e testa `0.0 <= SpawnDelay`): com `>0` todo efeito de cast com SpawnDelay 0 esperava o cast inteiro (Battle Heal invisível na captura `fxshots2`) |
| T10 | §2.3.3 TriggerCasting: AdjustparticleLife(FixedLifeTime ‖ ShotTime+0.2 ‖ ShotTime−0.4667 no tipo 13); EffectActor; som tipo 1 | `SkillFx.cs:280` | aprovado | `TriggerShot_SpecificStage_EMultiAlvo` (wh_heal_ca registrado) |
| T11 | §2.3.3 TriggerChanneling: beam → endpoint Actor (tag pawn+CreatureID), MaxParticles = (ShotTime − AniDues[0] + 0.4667)·IPPS; senão AdjustparticleLife | `SkillFx.cs:296` | aprovado [I] | código; AniDues[0] = duração da 1ª fase do plano [I] |
| T12 | §2.3.3 TriggerShot: multi-alvo, projétil (SkillID, TargetActor, PHYS_NProjectile, MagicInfo copiado, SpelledNEffectActor), som tipo 2 | `SkillFx.cs:323` | aprovado | `TriggerShot_SpecificStage_EMultiAlvo` |
| T13 | §2.3.3 TriggerExplosion na chegada (processHitWall → HitRot), som tipo 3 no alvo | `SkillFx.cs:357`; `FxEmitterActor.cs:488` `PhysNProjectile` | aprovado [I] | `FxSimTests.Projetil_ChegaAoAlvo_EDisparaExplosao`; chegada = distância deixa de diminuir [I §2.x 2] |
| T14 | §2.1.2 MagicType 0 → TriggerTransientEffect (CastingActions sem vida ajustada, 3 sons de cast) / SpawnNTransientEffect | `SkillFx.cs:374`; `FxCast.cs:143` | aprovado | `Legado_CadaCaso_SpawnaClassesDaTabela` (SNTE 108 ids) |
| T15 | §2.3.4 SwordTrail: só pawn, !GL2KeepMinFrameRate, !bNpc → AttachTrailer | `SkillFx.cs:529` | aprovado | código (`FxSkillMapTests` RibbonSet listado) |
| T16 | §2.4.2 AttachTrailer: RibbonSet, LifeSpan = ShotTime+Dur, End/StartBoneOffset = L·1.06/L·0.53, RibbonWidth L·1.06, FadeOut ShotTime, FadeIn ShotTime/3, Threshold ShotTime/2 e ShotTime, ossos da mão | `SkillFx.cs:539`; comprimento L = `Actor.AttachedLength` [I: bound da malha da arma] | aprovado [I] | código; `Legado_*` (casos 3, 16, 30...) |
| T17 | §2.4.1 ANProjectile: Velocity = Speed·dir [I lacuna 1], Acceleration = AccSpeed·dir, físNProjectile; bSelfRotation gira pelo delta | `FxEmitterActor.cs:466`, `:488` | aprovado [I] | `Projetil_ChegaAoAlvo_EDisparaExplosao` (600 u em 0.3–0.6 s) |
| T18 | §2.4.3 PlaySkillSound: skillsoundgrp cast/shot/explosão (vol/255), vozes por classe (`*_sub`, `*_throw`) | `SkillFx.cs:588`, `:595`; `fx_tables.json` `skillsounds` | aprovado [I] | tabela (2.6k linhas) gerada do `txt/skillsoundgrp.txt`; som tocado via `SfxPlayer.Play` (raio não aplicado [I]) |
| T19 | §2.5 trailer: TrailerPrePivot no mundo / RelativeTrailOffset girado / bTrailerSameRotation / bTrailerNoOwnerDestroy | `FxEmitterActor.cs:452` `PhysTrailer` | aprovado | `FxSimTests.Trailer_SegueODono_*` |
| T20 | §2.6 GL2KeepMinFrameRate (sem rastro) | `SkillFx.KeepMinFrameRate` | aprovado | não ligado às opções do porte (padrão 0) |
| T21 | Cancelamento (0x49): efeitos do cast morrem (Kill), MagicInfo limpo | `SkillFx.cs` `Cancel`; `App.cs` handler 0x49 | aprovado [I] | [I] o original não foi lido para o cancel |

## 3. Efeitos legados (§3)

| # | Regra do 09 | Unity | Estado | Evidência |
|---|---|---|---|---|
| L1 | Tabela `legacy_skill_fx.json`: Init 568, Channeling 7, PreShot 23, Shot 566, Explosion 98, SNTE 108 | `LegacyFx.cs:641` `Run` | aprovado | `FxSkillMapTests.Legado_CadaCaso_SpawnaClassesDaTabela` (>1.300 casos: classes spawnadas ⊆ tabela, incondicionais presentes) |
| L2 | Variantes por condições (`when`, `when_any_of`), `alt_args`, laços sobre AssociatedActor | `LegacyFx.cs:641`, `:96` `Cond` | aprovado | idem; `Interprete_OffsetAtrasDoPawn_ECondicoes` |
| L3 | Interprete das expressões: `rot(p,y,r)*(v)`, `Rotation(v)`, membros X/Y/Z/Pitch/Yaw/Roll, offsets de campo (+0x1bc Location, +0x2f0 CR...), `Cast<T>`, nomes de osso, `MatchRefBone`, `soulshot.int[...]`, `in [a..b]` | `LegacyFx.cs` `LegacyExpr` (`:438` `Call`, `:469` `Offset`, `:505` `Member`) | aprovado | `Interprete_OffsetAtrasDoPawn_ECondicoes` (Init 1224: (0,−6,0) atrás do pawn) |
| L4 | §3.3 SpawnSkillEffect: posição (A / absoluto / bRelative com TrailerPrePivot ±altura, offset.Z em Y [sic]), SpeedRate, AdjustparticleLife(ShotTime+1) e SetSizeScale(CR·CES/9) com Owner e MagicAniStatus 0, bProjectile, bRegister | `LegacyFx.cs:770` | aprovado | `Legado_*`; altura = CollisionHeight [I: mesh +0x98] |
| L5 | ULevel::SpawnActor + eventos `post`: set (LifeSpan, TrailerPrePivot, RelativeRotation, Speed/AccSpeed, SkillID, TargetActor, Emitters[k].StartVelocityRange/LifetimeRange, bSelfRotation), attach (nome/índice), setPhysics, call (AdjustparticleLife, SetSizeScale, SetDelayed) | `LegacyFx.cs:828`, `:846`, `:931` | aprovado | `Legado_*` (sem exceções nos 2.207 efeitos) |
| L6 | DamageEffect do alvo (`Cast<APawn>(HitActor).DamageEffect`) = Npcgrp.effect / p_u002_a; soulshot.int[grade].* | `LegacyFx.cs:726` `ClassOf`; `GameScene.DamageEffectOf` | aprovado [I] | `Legado_*` |
| L8 | §3 SpawnNTransientEffect dos shots (0x104efb30: 0x7f7, 0x866–0x86a soulshot; 0x7ff/0x80d, 0x86b–0x874 spiritshot/blessed): por mão (LH, depois RH), valor do `soulshot.int[CurWeaponType]` (pawn+0x71d = GetAnimType; seções HAND, 1HS, 2HS, DUAL, POLE, BOW, THROW, DUALFIST de `SoulShotDataLoad`): 1 + malha > 12 → `[Spirit]OnSticks` com StartVelocityRange.X = comprimento; 0 ou arma curta → `[Spirit]OnBooks` (RelativeRotation (0,0x4000,0) na LH); −1 → nada; sem malha → nada | `LegacyFx.cs` `ShotGrade`, `ShotChoice`, `ShotEffect`; `GameScene.WireFx` (`WeaponType` = `Entity.Widx` [I]) | divergente → corrigido (#0053) | `FxShotTests`; ao vivo 2160 → `e_u513_a` e 2150 → `e_u506_a` no `Weapon_R_Bone` (`evidencias/efeitos-skill/07`–`09`). A tabela de `legacy_fx_table.py` só tinha a 1ª variante (vazia) para o caso comum, e nenhum shot mostrava efeito |
| L7 | FNPawnLight / ANCubics / NMover | — | não implementado | [N] semântica das luzes do pawn, cubics e trajetórias NMover (§3.6) |

## 4. Simulação (§4)

| # | Regra do 09 | Unity | Estado | Evidência |
|---|---|---|---|---|
| S1 | §4.0.2 appFrand = rand()/32767 [0,1]; GetRand = Max+(Min−Max)·frand; RangeVector Z→Y→X; VRand; ftol; fistp par | `FxMath.cs:41`, `:64`, `:135`; `FxRand` | aprovado | `FxSimTests.GetRand_*`, `RangeVector_SorteiaZDepoisYDepoisX`, `AppFrand_*` |
| S2 | §4.1 Initialize (slots = MaxParticles, UniformSize ‖ UseDirectionAs None), Reset (InitialDelay/TimeTillReset sorteados; PPSFraction não zera), CleanUp | `ParticleEmitterSim.cs:104`, `:123` | aprovado | `Spawn_PorSlots_*` |
| S3 | §4.1.6/4.1.7 InitialDelay e warmup (N = ftol(WTPS·Center·RWT) ticks de 1/WTPS) | `FxEmitterActor.cs:215`, `:223` | aprovado | `SetDelayed_SomaAoInitialDelayRange_EAtrasaOSpawn` |
| S4 | §4.2.1 PPS: fase inicial IPPS ou MaxActive/Center; depois ParticlesPerSecond; SpawnOnTrigger | `ParticleEmitterSim.cs:174` | aprovado | `Spawn_PorSlots_BufferCircular_EMorte` (LastPPS 0 depois) |
| S5 | §4.2.2 SpawnParticles: Number = floor(left + rate·dt), SpawnTime = inv·left + dt − inv − i·inv, buffer circular sobre vivos | `ParticleEmitterSim.cs:367` | aprovado | idem; `Spawn_InitialSpawn_NaoIntegraNoPrimeiroTick` |
| S6 | §4.2.4 laço: InitialSpawn não integra; morte / respawn com fmod(Time−Max+InitialTime, Max) | `ParticleEmitterSim.cs:200` | aprovado | `Respawn_NoMesmoSlot_ComFmod` |
| S7 | §4.3 SpawnParticle (ordem exata: forma, AddLocationFromOther, UseRotationFrom, revolução, sistema de coordenadas, GlobalOffset, escalares, direção da velocidade, Spray, spin ×65535, subdivisão, respawn imediato) | `ParticleEmitterSim.cs:391` | aprovado | `Giro_SpinPreMultiplicadoPor65535_*`, `Subdivisao_*`, golden; ordem de FCoords em Actor [I §4.8.3] |
| S8 | §4.4.1 integração e revolução (RotateAngleAxis por eixo, ×65535) | `ParticleEmitterSim.cs:231` | aprovado | código (`Rotator_DeVetor_EMatrizDeRotacao`) |
| S9 | §4.4.2 colisão (planos; SingleLineCheck delegado [I]; MaxCollisions; MirrorByVector; damping; SpawnFromOtherEmitter) | `ParticleEmitterSim.cs:243` | aprovado [I] | código; sem uso no lineageeffect |
| S10 | §4.4.3–4.4.6 RelTime, tabelas frac((Repeats+1)·RelTime) com borda frac(1)=0, tamanho (tabela ou 1/(Time+1)), VelocityScale, RevolutionScale | `ParticleEmitterSim.cs:540` `FindKey`, `:562` `SizeAt` | aprovado | `Tabelas_FracRepeatsMaisUm_ComBordaEmUm`, `Tamanho_RegularSizeScale_*`, golden size/size_regular (3.693 emissores) |
| S11 | §4.4.7 cor: ColorScale (A só AlphaBlend), ColorMultiplier (não no A), fade por DrawStyle (Modulated cinza 127), opacidade RGB/A por estilo | `ParticleEmitterSim.cs:583` `ColorAt`, `:596` `FadeAt`, `:608` `ComputeColor` | aprovado | golden cor exata + fade 1e-4; `Cor_AlphaSoEmAlphaBlend_EFadePorEstilo`, `Cor_ColorMultiplierNaoMultiplicaAlfa` |
| S12 | §4.4.9 MaxAbsVelocity, VelocityLoss sorteado por partícula/tick (Spray no quadro da partícula), NoTick | `ParticleEmitterSim.cs:325` | aprovado | código |
| S13 | §4.2.5–4.2.7 AllParticlesDead, inatividade, AutoDestroy/AutoReset por emissor e global, delay impede AutoDestroy | `ParticleEmitterSim.cs:340`; `FxEmitterActor.cs:234`, `:260` | aprovado | `AutoDestroy_QuandoTodosMorrem_EKillBloqueiaSpawn`, `SetDelayed_*` |
| S14 | §4.7.3/4.7.4 Kill, Trigger (só Disabled, acumula SpawnOnTrigger) | `FxEmitterActor.cs:297`; `ParticleEmitterSim.cs:145` | aprovado | `AutoDestroy_*`, `Trigger_SoSeDisabled_*` |
| S15 | §4.6.1 AdjustparticleLife = SetParticleLifeTimeRange + SetParticleMaxParticles (ftol((L−centro)·ftol(IPPS))) | `FxEmitterActor.cs:321` | aprovado | `AdjustparticleLife_ForcedLifeTimeFadeEMaxParticles` |
| S16 | §4.6.5 SetSizeScale (faixas × f, Beam ruído), SetDelayed, SetOpacity (×, ≤0 → 0.001), SetMaxParticles, SetSpeedRate, SetSpeedScale (bug do MaxAbsVelocity) | `FxEmitterActor.cs:347`–`:403` | aprovado | `SetSizeScale_*`, `SpeedRate_EscalaODtDoEmissor` |
| S17 | §4.7.2 AEmitter::Tick (SpeedRate, EmitterRotation, Initialize, GlobalOffset, sons no 1º spawn) | `FxEmitterActor.cs:188`, `:281` | aprovado | `SpeedRate_*`; sons via `FxWorld.Sound` |
| S18 | §4.5.1 blending por DrawStyle (One/Zero, SrcAlpha/InvSrcAlpha, DstColor/SrcColor, One/One, One/InvSrcAlpha, Zero/InvSrcColor, One/InvSrcColor), neblina preta/cinza, ZTest/ZWrite/AlphaTest/AlphaRef, **em espaço de gama** | `FxRenderer.cs` `Blend`/`Material`; shader `Resources/L2WebParticle.shader` (LightMode `L2WebFxGamma`); `FxGammaPass.cs` (cor da câmera → alvo UNORM em gama → partículas → composição de volta, HDR preservado) | divergente → corrigido (#0053); aprovado só com captura comparada: pendente | `FxSimTests.Blending_PorDrawStyle`, `FxGammaTests`. [O] D3DDrv `FUN_100427cb` (`00001.c:1530`/`:1560`): `SetRenderState(D3DRS_SRGBWRITEENABLE 0xC2, 0)` e `SetSamplerState(0, D3DSAMP_SRGBTEXTURE 0xB, 0)`, ou seja, o cliente mistura bytes em gama. Antes, a mistura era linear: aditivos fracos sobre fundo claro, AlphaBlend leitoso, Modulated escurecendo, e os raios de luz do lobby quase invisíveis (`evidencias/efeitos-skill/03`, `04`) |
| S19 | §4.5.2 sprites: eixos da câmera, UseDirectionAs (Up/Right/UpAndNormal/RightAndNormal/Scale/None; Forward/Normal [I §4.8.4]), giro em torno de Fwd, vértices ±A±B, UV u=idx/V, v=idx%V, BlendBetweenSubdivisions (UV1 + alfa = frac) | `FxRenderer.cs:247`, `:62` | aprovado (UV: pendente captura) | `Subdivisao_IndicePorIdade_EUvColunaAColuna`; orientação V (v_unity = 1 − v_ue) a conferir na captura de Mortal Blow (§4.8.1) |
| S20 | §4.5.3 visibilidade: VisibleLimit/VisibilityInterpRange → OpacityRatio; senão distância GL2ActorCR·2048 | `FxWorld.cs:75` | aprovado [I] | código; GL2ActorCR = 2 [I] |
| S21 | §4.5.4 MeshEmitter: matriz T(−PrePivot)·S·R(spin)·T(P)[·R(O)·T(O) \| ·R(P.Rotation) Spray], cor por partícula (TFactor), UseMeshBlendMode false → textura da seção com o DrawStyle | `FxRenderer.cs` `DrawMesh`, `MeshTint` | divergente → corrigido (#0053) | O TFactor ia como `pow(c, 2,2)` e depois `MaterialPropertyBlock.SetColor`, que no projeto linear converte de novo, ou seja, c^4,4: o cinza 125 virava 0,04, e o círculo do heal e os círculos das magias sumiam. Agora vai cru (`SetVector`, bytes/255) para o shader em gama (`FxGammaTests.Malha_TFactor*`). UseMeshBlendMode true (50 emissores: watericebolt, stone_*, coin*) segue com o material do glTF [I] |
| S22 | §4.5.5 BeamEmitter: endpoint ponderado, Delta por tipo, LF (bug do range HF com escala), HF interpolado, branching, ruído dinâmico cumulativo, sheets girados 32768/S, render ±side | `FxEmitterSpecial.cs:11`, `:69`, `:194`; `FxRenderer.cs:350` | aprovado [I] | código; endpoint Actor pelo `ResolveActor` (Channeling) |
| S23 | §4.5.6 RibbonEmitter: MaxParticles 1, pontos só por bones (BoneNormal), amostra por SampleRate/MinSampleDist, decay parado/kill (sync), Hermite CntrPoints, AccDrop, U por índice ou comprimento | `FxEmitterSpecial.cs:215`, `:252`, `:317`; `FxRenderer.cs:395` | aprovado [I] | código |
| S24 | §4.5.7 VertMesh: fase por partícula desde o nascimento, taxa SpeedRate | `FxEmitterSpecial.cs:350`; `FxRenderer.cs:485` | aprovado [I] | taxa 30 fps [I §4.8.9] |
| S25 | §4.6.2 LevelOfWeather / ParticleChoice | — | não implementado | sem uso no lineageeffect; mapas com WeatherEffect [N] |
| S26 | §4.4.11 forças de atores | — | não implementado | [N] |

## 5. Armas, NPCs e golpes

| # | Regra | Unity | Estado | Evidência |
|---|---|---|---|---|
| W1 | FNWeaponEffect::Init (0x10313da9): classe weapongrp effA/effB [I slot], f = sqrt(CR·CH)/sqrt(207) × fatores do slot em StartSize/StartVelocity/StartLocationOffset, preso ao osso da mão, RelativeLocation = f·offset, Opacity/Num do env.int `Enchant<n>`; mostrado se enchant ≥ EnchantEffectShow (7) (UpdateAbnormalState) | `FxPawnEffects.cs:67`, `:94`, `:36`; `fx_tables.json` `weapons`/`enchant` | aprovado [I] | tabela gerada do `txt/weapongrp.txt` + `env.int`; junk1A/B = (offset xyz, tamanho, velocidade) [I] |
| W2 | Npcgrp rb_effect_on/rb_effect/rb_effect_fl (halo de raid) | `FxPawnEffects.cs:131` | aprovado [I] | 25 NPCs na tabela; escala por rb_effect_fl [I] |
| W3 | APawn::AssociateAttackedNotify (0x10310ba9, pelo `Action_Attack` do notify AttackItem; flecha: `APawn::AttackedNotify` 0x103046e2 tipo 1) [O]: ponto = Location − forward(Rotation(alvo−atacante))·d, d = CR/2 do alvo ou, com CR+CH > 150, Clamp(0.85·dist, 0, dist − CR do atacante); rotação do golpe; solto no mundo. Flags do Attack 0x05 (`FUN_10424e80`): 0x80 miss (nada), 0x40 escudo, 0x20 crítico, 0x10 soulshot, grade = flags & 0xF. **Com soulshot e grade < 6:** DamageEffect (Npcgrp.effect / p_u002_a; sem KeepMinFrameRate) + `soulshot.int[None..S].Atk` (crítico `AtkCr`; `AtkDarkCr` só com bUseDarkEffect, que nada liga), sem p_u004_a, com opacidade 0.9−(n−3)·0.08 só nesse efeito se n = PartyMemberCount > 2. **Sem soulshot:** DamageEffect; crítico sem escudo + p_u004_a (flecha: escudo sem crítico nada, escudo com crítico + p_u004_a). [I] sem o teste bRendered do alvo; flecha no ponto do corpo a corpo; sem it_zariche_ta | `FxPawnEffects` `HitEffects`, `SoulshotHitClass`, `HitLocation`, `OnHit`; `App.cs` `OnAttack` (pedido 0053) | divergente → corrigido (#0058) | `FxSoulshotHitTests`; antes a opacidade valia para o DamageEffect com "golpes simultâneos" (o n é o tamanho do grupo) e o soulshot não aparecia |
| W4 | Flecha do ataque normal (NArrow projétil, ThrowAttackProcess) | `FxPawnEffects.cs:180` | aprovado [I] | sem Hermite [I] |

## 6. Mapas

| # | Regra | Unity | Estado | Evidência |
|---|---|---|---|---|
| M1 | Atores Emitter dos mapas (`<tile>_emitters.json` de `export_map_emitters.py`) no mesmo simulador; contagem = `out/re/maps` | `FxWorld.cs:136` `LoadMapEmitters`, `:164` `MapEmitterClass`; `MapEnv.cs`, `LobbyScene.cs` | aprovado | `FxMapTests.Tiles_ContagemDeEmitters_IgualAoInventario`, `Lobby_EmissoresViramClassesComSubEmissores` (33 emissores) |

## 7. Capturas do porte (Docs/evidencias/fx)

`Build\L2Web.exe -l2offline 150 -l2shots <dir> -l2fxtest 1015,1177,1288,263,4,427` (Giran, personagem MFighter sem arma, alvo Gremlin;
`fx_<id>_cast|shot|hit.png`, 2ª execução de cada skill com os assets já em cache):

| Skill | Tipo | O que aparece | Confere com |
|---|---|---|---|
| 1015 Battle Heal | cura/buff (SVE `skill.wh.1011`) | círculo mágico branco aos pés no cast (`wh_heal_ca`, 3 malhas `magiccircle`); feixes de luz caindo sobre o alvo no disparo (`wh_heal_ta`, Beam + BlueDust) | pendente (original). Ao vivo #0053: ver `Docs/efeitos_ao_vivo.md` |
| 1177 Wind Strike | projétil (legado Init/Shot/Explosion) | anel azul de conjuração aos pés + brilho na mão (`m_u000_a/b`); projétil `m_u000_c` sai da mão, explode no Gremlin com `m_u000_d` | pendente (original) |
| 1288 Aura Flare | área (SVE) | `el_aura_burn_ca` no cast; `el_aura_flare_ta` (esfera de aura + faíscas) em cada alvo com SpawnDelay 0.2 | pendente (original) |
| 263 Mortal Blow | golpe físico (SVE `skill.at.263`) | `at_mortal_blow_ca` no cast; no disparo `at_mortal_blow_cs`: arco amarelo (malha) e as faíscas elétricas 4×4 (células 14–16) na mão | pendente (original) — UV §4.8.1 |
| 4 Dash | buff (SVE `skill.mo.4`) | disco laranja aos pés com riscos verticais (`mo_dash_ca`, sprites UseDirectionAs Up); `mo_dash_ta` no disparo | pendente (original) |
| 427 (skill.white.427) | canalização (SVE: beam + mesh + ta) | `s_u806_ca` no cast; no notify Channeling (2,87 s): `s_u806_channeling_mesh` à frente do caster, `s_u806_channeling_beam` do Gremlin ao caster (MaxParticles = (ShotTime − AniDues[0] + 0,4667)·IPPS = 230 → o feixe dura 11,5 s e morre no fim da canalização) e `s_u806_ta` no alvo (`fx_427_cast.png`) | pendente (original) |
| 1419 | canalização legada (`s_u808_red_a/b` em `MagicInfo.LocList[0]`) | membranas 17× no pawn (sem `LocList` do servidor no modo offline a posição cai no caster: `fx_1419_shot.png` cobre a tela) | só com o pacote do servidor |

As 5 skills pedidas (buff Dash, projétil Wind Strike, área Aura Flare, golpe físico Mortal Blow, canalização 427) estão capturadas no porte;
falta a captura do cliente original para cada uma (login do usuário), em especial a orientação das células 4×4 do Mortal Blow.

Correções vindas das capturas: SpawnDelay (`>=0`, spec corrigida); sprites sem `Texture` (33 de 2.413) não são desenhados [I]
(um `s_u806_channeling_mesh.SpriteEmitter22` de 200×200 branco cobria a tela); pré-carga dos assets das classes da skill no
`SetMagicInfo` (a 1ª execução de uma classe perdia o cast enquanto o glb/PNG carregava).

## 8. Pendências

- **#0053 (ao vivo no aCis)**: tabela por skill em `Docs/efeitos_ao_vivo.md`. Correções: mistura em gama (S18), TFactor das malhas (S21), shots (L8). Faltam as capturas do original da amostra (pedido 0048), buff em outro, uma canalização e os halos AlphaBlend das tochas do lobby (mais fracos que no original).

- **Captura comparada com o original** (condição de conclusão): 5 skills (buff, projétil, área, golpe físico, canalização) e a orientação da UV
  no Mortal Blow (§4.8.1). O Unity captura com `Build\L2Web.exe -l2offline 60 -l2shots <dir> -l2fxtest 1015,1177,1288,16,1419`
  (`Dev/OfflineView.cs` `FxTest`). As capturas do original dependem do usuário (login no cliente oficial).
- Lacunas [N] da spec mantidas: velocidade inicial do projétil (Velocity = Speed·dir [I]), virtuais +0x21c/+0x220/+0x2b4, FNPawnLight,
  cubics, NMover, clima, VertMesh (taxa), PTCS_RelativeRotation no render, CastingEffectScale (pawn+0x181c, 1.0).
- Espaço de cor: resolvido na #0053 (S18). O `FxGammaPass` mistura as partículas em gama, como o D3DDrv (`FUN_100427cb`: SRGBWRITEENABLE 0, SRGBTEXTURE 0). As malhas com UseMeshBlendMode true (material do glTF) e o `L2Web/Fx` das StaticMeshes (`MatAnim`) continuam no linear.
