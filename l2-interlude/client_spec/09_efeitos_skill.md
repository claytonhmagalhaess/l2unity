# 09 — Efeitos visuais de skill e sistema de partículas

Como o cliente Interlude escolhe, posiciona e simula os efeitos visuais: das skills, dos projéteis, do rastro de espada, das armas e dos NPCs. Cobre também a simulação das partículas da Unreal Engine 2 (com as extensões do L2) com detalhe suficiente para reimplementar em outra engine.

Legenda: **[O]** lido no pseudocódigo ou no assembly, com endereço; **[I]** inferido; **[N]** não fechado.
Endereços: `0x103xxxxx` são os *thunks* exportados (o nome que está no `index.tsv`); o corpo real fica em `0x104…/0x105…/0x106…`.

## 1. Dados extraídos

| Arquivo | Conteúdo | Gerador |
|---|---|---|
| `out/re/fx/lineageeffect.json` | 864 classes de efeito (subclasses de `Emitter`); por classe: superclasse, defaults do ator, emissores com todas as propriedades e, em 15 delas, o script UnrealScript | `scripts/fx_parse.py` |
| `out/re/fx/LineageKetraEffect.json`, `Rider_Effect.json` | 12 + 10 classes dos pacotes de efeito extras | idem |
| `out/re/fx/engine_defaults.json` | defaults das classes `Emitter`, `ParticleEmitter`, `SpriteEmitter`, `MeshEmitter`, `BeamEmitter`, `RibbonEmitter`, `VertMeshEmitter`, `SparkEmitter`, `TrailEmitter` do `Engine.u` (valem quando o emissor não grava a propriedade) | idem |
| `out/re/fx/engine_src/*.uc` | fonte das classes de partícula (variáveis, enums, structs; o build removeu o bloco `defaultproperties`) | idem |
| `out/re/fx/skill_fx_map.json` | skill → `skill_visual_effect` → fases (Casting, Shot, Explosion, Channeling) → ações e classes; e os efeitos de `weapongrp`, `Npcgrp`, `armorgrp`, `chargrp` | `scripts/fx_map.py` |
| `out/re/fx/assets_check.json` | conferência das classes e dos assets (texturas e malhas) referenciados | idem |
| `out/re/fx/legacy_skill_fx.json` | efeitos fixos no código das funções legadas (§3) | `scripts/legacy_fx_table.py` |
| `out/re/fx/fx_golden.json` | valores de referência das partes determinísticas da simulação (§5) | `scripts/fx_golden.py` |
| `out/skill_visual.json` | `SkillVisualEffect` do `Animations/skill.usk` | `scripts/usk_parse.py` |

Regenerar (a partir de `l2anim`):
```
python -I scripts/fx_parse.py "<cliente>/System" out/re/fx
python -I scripts/fx_map.py . "<cliente>"
python -I scripts/legacy_fx_table.py bin/engine.dll out/re/fx/legacy_skill_fx.json
python -I scripts/fx_golden.py out/re/fx
```

### 1.1 Números
- **Emissores** [O]: 3711 no `lineageeffect.u` (SpriteEmitter 2413, MeshEmitter 1232, BeamEmitter 29, VertMeshEmitter 36, RibbonEmitter 1). Nenhuma propriedade ficou sem decodificar.
- **Superclasses** [O]: além de `Engine.Emitter`, aparecem `Engine.Actor`, `Engine.AirEmitter`, `Engine.NCubics`, `Engine.NProjectile`, `Engine.NSkillProjectile`, `Engine.WaterHitEmitter`. Os 15 efeitos com script são projéteis (`NArrow`, `NSpear`, `NSkillProjectile`), respingos na água (`WaterHitEmitter`) e efeitos que tocam som (`m_u002_*`).
- **Skills** [O]: das 2.694 do `skillgrp`, **953 têm `skill_visual_effect`**. A coluna `desc` do `txt/skillgrp.txt` é esse campo (`skill.<grupo>.<id>`). Elas apontam para 235 objetos do `skill.usk`, e 232 existem; faltam `skill.bl.1147`, `skill.it.2178`, `skill.mo.87`. Das 1741 sem o campo, 764 são passivas. Entre as ativas sem efeito em dados, 477 ganham efeito pelo código legado (§3).
- **Outras tabelas** [O]: `weapongrp` (`effect`, `effA`, `effB`) usa 22 classes (`c_u001…c_u008` etc.). `Npcgrp` (`rb_effect`, `effect`), `armorgrp` (`att_eff`) e `chargrp` (`attack_eff`) usam quase só `p_u002_a` (efeito de golpe). Ao todo, os dados referenciam 255 classes. Só `LineageEffect.p_u110_a` (1 NPC) não existe.
- **Assets** [O]: os emissores referenciam 495 texturas e malhas, em `systextures/LineageEffectsTextures(2).utx`, `staticmeshes/LineageEffectsStaticmeshes.usx`, `textures/FX_E_T.utx`, `fx_m_t.utx`, `staticmeshes/fx_e_s.usx`, `fx_m_s.usx`, `animations/LineageEffectMeshes.ukx`, `Rider_Effect*` e `LineageNpcsTex.utx`. Todos existem, menos:
  - 12 do `LineageKetraMesh.usx`, que usa cifra própria do servidor e não foi aberto;
  - `LineageEffectsStaticmeshes.Monster.Barler_bright0`, que também falta no cliente original.
- **Fora do escopo:** `AntharasHighEffect.u`, `ValakasHighEffect.u` e `LindviorHighEffect.u` não são `Lineage2Ver` nem pacote UE2 em claro. São conteúdo do servidor modificado, com cifra própria, e não foram abertos.

## 2. Disparo e posicionamento dos efeitos de skill

> Nesta seção, as referências "§N" sem o prefixo se referem às subseções 2.N.


Legenda: **[O]** lido no pseudocódigo/disassembly (endereço citado) · **[I]** inferido · **[N]** não fechado.
Endereços: `0x103xxxxx` = thunk exportado (nome no índice) → `0x104…/0x105…/0x106…` = corpo real.
Layouts de propriedades: calculados a partir do `Engine.u` (cadeia `UField.Next` das propriedades, empacotamento UE2) e conferidos contra os offsets lidos no código (ex.: `Emitter` termina em 0x4dc = início de `NProjectile`; `Actor` termina em 0x3bc = `Emitters`). Scripts auxiliares: `scripts/fx_aux/ue_layout.py`, `ue_props.py`, `ue_enum.py`, `ue_dis.py`; layouts em `out/re/fx/layout_{actor,pawn,particleemitter}.txt`.

---

### 2.1 Quem dispara cada fase e quando

#### 2.1.1 Do pacote ao `USkillVisualEffect`

| Etapa | Função | O que faz |
|---|---|---|
| MagicSkillUse (0x48) | `UGameEngine::OnReceiveMagicSkillUse` 0x1030b735→0x1049cb10 (há uma 2ª sobrecarga, 0x1030bd57→0x1049c4a0) | [O] `GetMSData(skill,level)`. Se `MSData+0x30` (MagicType) ≠ 0 → `APawn::SetMagicInfo(...)` + `APawn::InitSkillProcess`, `pawn+0x62c=5` (NAction = magia). Se MagicType == 0 (skill "instantânea") → caminho *transient* (abaixo). |
| SetMagicInfo | `APawn::SetMagicInfo` 0x10310b7c→0x104f2840 | [O] `FNMagicInfo::Clear(pawn+0x4f0)`; `MagicID(+0x4f8)`, `LevelID(+0x4fc)`, `DummyPtr(+0x4f4)=MSData`. Se `MSData+0x44` (FName = coluna `desc`/skill_visual_effect do skillgrp) ≠ `"none"`: `Agent(+0x4f0) = StaticFindObject(USkillVisualEffect, ANY_PACKAGE, *name)`; se não achou ou não `IsA` → `StaticLoadObject(USkillVisualEffect, NULL, *name, NULL, 0, NULL)`. Também grava `SkillHitTime(+0x510)`, `MagicSpeed(+0x524)`, `MagicType(+0x52c)=MSData+0x30`, `TargetPawn(+0x520)`, `ActiveTime(+0x51c)=0`. |
| Carga do pacote | — | [I] o nome é `skill.<grupo>.<id>` (ex. `skill.wh.1011`) → `StaticLoadObject` carrega o pacote `skill` = `Animations/skill.usk` pelos Paths do ini (não lido; l2.ini cifrado). Carga dinâmica e sob demanda, com cache via `StaticFindObject`. |
| MagicSkillLaunched (0x76) | parser 0x10429790 → `UGameEngine::OnReceiveMagicSkillLaunched` (vtable 0x684/0x688; 0x10313ca5→0x1049c410 e 0x10313bec→0x104925b0) → `APawn::AddAssociatedActorNotify` 0x10306aa0→0x10513230 | [O] para cada alvo do pacote: se o caster está em magia (`+0x62c==5`), mesmo MagicID e tem TargetPawn: `AssociatedActor(+0x550).Add(alvo)`, `alvo.SpelledNEffectActor(+0x37c).Add(caster)`, `bTargetExcepted(+0x530)=1`. MagicType 12 → `SkillEffectUnionDDTarget`. **É daí que vêm os alvos múltiplos usados por `bOnMultiTarget`.** |

`pawn+0x4f0` é o primeiro campo de `NMagicInfo` (`Agent`); o tipo efetivo é `USkillVisualEffect*` [O] (lido como tal em MagicProcess/SkillEffectFinalize).

#### 2.1.2 Linha do tempo do cast (`APawn::MagicProcess` 0x103024d7→0x10511ab0)

| Momento | Gatilho | Com Agent ≠ NULL | Sem Agent (fallback legado) |
|---|---|---|---|
| 1º tick de magia (`ActiveTime(+0x51c)==0`) logo após InitSkillProcess | MagicProcess | [O] zera `PendingNotify(+0x59c)`/`PendingPreshotNotify(+0x5a0)`; `TriggerCasting(pawn, TargetPawn)`; `MagicAniStatus(+0x528)=3` | `APawn::SkillEffectInit` 0x10311cca→0x104f2ed0 |
| AnimNotify de canalização | `UAnimNotify_Channeling::Notify` 0x103029af→0x106bd780 põe `PendingChannelingNotify(+0x5a4)=1` (só se `+0x63c≠0` e `+0x62c==5`) | [O] `TriggerChanneling(pawn, TargetPawn)` | `APawn::SkillEffectChanneling` |
| AnimNotify de pré-disparo | `UAnimNotify_AttackPreShot::Notify` 0x103037ba→0x106bd6a0 põe `+0x5a0=1` | [O] `StagePreshot(+0x50c)++`; `TriggerPreshot` — **vazia** (0x10311130→0x104ec250 só `return`) | `APawn::SkillEffectPreShot` |
| AnimNotify de disparo | `UAnimNotify_AttackShot::Notify` 0x10311cd9→0x106bd0c0: `PendingNotify=2` se o nome completo do notify == `LastShotName(+0x598)`; senão `=1` se `IsCastingMultiShotSkill` | [O] `APawn::SkillEffectFinalize` 0x1030f457→0x10511640: `StageShot(+0x508)++` e `TriggerShot(pawn)` | `APawn::SkillEffectShot` (cria `ANSkillProjectile` legado) |
| Fim da sequência de anims sem notify de disparo | MagicProcess: se `LastShotName==None` | [O] força `PendingNotify=2` e chama SkillEffectFinalize | idem |
| Chegada do projétil | `ANSkillProjectile::processHitWall` 0x10302e5a→0x104e98b0 | [O] `HitRot(+0x5f4)=Rotation(HitNormal)`; `TriggerExplosion(proj.MagicInfo.Agent(+0x538), proj)` | `ANSkillProjectile::SkillEffectExplosion` 0x1030293c→0x104e3650 |
| Skill instantânea (MagicType 0) | OnReceiveMagicSkillUse | [O] acha/carrega o SVE como acima e chama `TriggerTransientEffect(sve, pawn, NULL, skillID)` | `APawn::SpawnNTransientEffect` 0x1030f646→0x104efb30; se falhar, `NActionStop` |

No disparo final (`PendingNotify==2`) SkillEffectFinalize ainda [O]: notifica o alvo e os AssociatedActor (`thunk_FUN_104e9650`), destaca e destrói os atores de `pawn+0x370` (NSkillProjectileActor), e `FNMagicInfo::Clear(+0x4f0, 0)`; depois `FArray::Empty(+0x370)` e `Empty(+0x550)`. `FNMagicInfo::Clear` (0x103091a1) só esvazia arrays (`EffectActor` etc.), **não destrói** os emissores do cast: eles morrem pelo próprio tempo de vida (ver §5) [O].

`FlyingTime` (SVE+0x74) não move nada: é lido só em `InitSkillProcess` (0x103048e5→0x104ef470, ~0x104ef65d) para descontar o tempo de voo do `SkillHitTime` ao calcular `AniDues`/`ShotTime`. Sem Agent usa constantes (0.4 para MagicType 2/10/5/8; 0 para 3/12; 2.0 para 14; 0.15 nos demais); com Agent usa `max(FlyingTime,0.15)`, exceto MagicType 3 com FlyingTime<0.15 → 0 [O].

#### 2.1.3 Skills sem `skill_visual_effect`
`desc == "none"` ou falha de carga → `Agent = NULL` → todas as fases caem nas funções legadas `SkillEffectInit/Channeling/PreShot/Shot/Explosion` e `SpawnNTransientEffect` [O]. `SkillEffectInit` é um `switch(MagicID)` gigante (~420 `case`) com nomes de classe fixos (`LineageEffect.s_u010_a`, `m_u001_a`, `e_u031_a`, ossos `bone01`, `dummy05`…) instanciados por `AActor::SpawnSkillEffect` 0x103147c7 (`StaticLoadClass` + `SpawnActor`) [O]. Ou seja, efeitos de skills antigas estão **no código**, não em dados [O/I].

---

### 2.2 Layout de `USkillVisualEffect` e `FSkillActionInfo`

UObject do L2 ocupa 0x34 bytes (1º campo de script em +0x34) [O].

| Offset | Propriedade (Engine.u) | Tipo | Usado por |
|---|---|---|---|
| +0x34 | `Desc` | name | — |
| +0x38/+0x3c | `CastingActions` (data/num) | array<SkillActionInfo> | TriggerCasting, TriggerTransientEffect |
| +0x44/+0x48 | `ChannelingActions` | array | TriggerChanneling |
| +0x50/+0x54 | `PreshotActions` | array | ninguém (TriggerPreshot vazia) |
| +0x5c/+0x60 | `ShotActions` | array | TriggerShot |
| +0x68/+0x6c | `ExplosionActions` | array | TriggerExplosion |
| +0x74 | `FlyingTime` | float | InitSkillProcess |

`FSkillActionInfo` (8 bytes, stride 8 nos loops) = `{ +0 Action: SkillAction*, +4 SpecificStage: int }` [O] (`FSkillActionInfo::operator=` 0x10303963; props do struct no Engine.u).

**SpecificStage** só é lido em `TriggerShot` (0x104ed420) [O]: a ação dispara se
`(SpecificStage == 0 && pawn.PendingNotify(+0x59c) == 2) || SpecificStage == pawn.StageShot(+0x508)`.
Como `StageShot` é incrementado antes do TriggerShot, `SpecificStage=N` = "no N-ésimo notify de disparo" (multi-shot), `0` = "só no disparo final". Casting/Channeling/Explosion ignoram SpecificStage [O]. No `skill.usk` extraído todos os 510 itens têm SpecificStage 0.

---

### 2.3 `USkillAction*::Notify` — spawn e posicionamento

Todas as Trigger* chamam a virtual `Action->Notify(BaseActor, DestActor)` (vtable +0x68) que devolve `AEmitter*` [O]. `USkillAction::Notify` (base) 0x10309ead→0x104ec060 devolve NULL [O].

#### 2.3.1 Campos lidos (offset → propriedade; nomes do Engine.u, iguais aos do `skill_visual.json`)

| Classe | Offset | Propriedade | Tipo / default (Engine.u) |
|---|---|---|---|
| SkillAction | +0x34 | `EffectClass` | class<…> |
| SkillAction | +0x38 bit0 | `bOnMultiTarget` | bool |
| LocateEffect | +0x3c | `AttachOn` | byte enum `EAttachMethod` {0 EAM_None, 1 EAM_RH, 2 EAM_LH, 3 EAM_BoneSpecified, 4 EAM_AliasSpecified, 5 EAM_Trail, 6 EAM_RF, 7 EAM_LF}; default 0 |
| LocateEffect | +0x40 | `AttachBoneName` | name |
| LocateEffect | +0x44 bit0 | `bAbsolute` | bool |
| LocateEffect | +0x48 | `SpawnDelay` | float |
| LocateEffect | +0x4c bit0 | `bUseCharacterRotation` | bool |
| LocateEffect | +0x50..+0x58 | `offset` | vector |
| LocateEffect | +0x5c bit0 | `bRelativeToCylinder` | bool, **default True** |
| LocateEffect | +0x5c bit1 | `bSpawnOnTarget` | bool |
| LocateEffect | +0x5c bit2 | `bSizeScale` | bool |
| SwordTrail | +0x3c | `DurationRatio` | float, default 0.8 |
| SwordTrail | +0x40 bit0 | `bRightHand` | bool, default True |

Não existem `bRelativeToCaster`, `Rotation` ou `DrawScale` nas ações [O]: a rotação é derivada e a escala vem de `CastingEffectScale`/`bSizeScale`.

#### 2.3.2 `USkillAction_LocateEffect::Notify` 0x10308b02→0x104ec6f0 [O, disassembly]

1. **Ator de referência** `R = bSpawnOnTarget ? Dest : Base`. Se `R==NULL` → NULL.
2. **Escala base** `S = (!bSpawnOnTarget && R é APawn) ? R.CastingEffectScale(pawn+0x181c) : 1.0`.
3. **Rotação** `Rot`:
   - `bUseCharacterRotation` → `R.Rotation`;
   - senão, se `Base` é `ANSkillProjectile` → `Base.HitRot(+0x5f4)` (e marca "base é projétil");
   - senão, se `Dest≠NULL && Dest≠Base` → `(Dest.Location − Base.Location).Rotation()`;
   - senão → `Base.Rotation`.
4. **Offset**: se `bRelativeToCylinder && offset≠0` → `(offset.X·R.CollisionRadius, offset.Y, offset.Z·H)` com `H = R.CollisionHeight`, ou, se `R.Mesh` é SkeletalMesh, `H = meshInfo(+0x98)·R.DrawScale`; depois **rotacionado** por `Rot` (`GMath.UnitCoords / Rot`). Senão `offset` cru (eixos do mundo).
5. `Rot.Pitch = 0` antes do spawn (0x104ec93c) — o efeito nasce sempre nivelado.
6. **Spawn**: `XLevel->SpawnActor(EffectClass, None, Loc, Rot, Template=NULL, bNoCollisionFail=1, bRemoteOwned=0, Owner, Instigator=0)` (vtable XLevel+0xc0).
   - `AttachOn==EAM_None`: `Loc = (base é projétil ? proj.LastTargetLocation(+0x4e8) : R.Location) + offset`, `Owner=NULL`.
   - demais: `Loc = offset`, `Owner = R`.
   - Se o objeto não é `AEmitter` → NULL.
7. **AttachOn** (jump table 0x104ecdc0):
   - 0 None → `SetPhysics(PHYS_None)` (vtable +0x1c8).
   - 1 RH / 2 LH → nome do osso via `R` vtable +0x21c / +0x220 (mesma convenção de `AttachTrailer`: bRightHand→0x21c) [O]; nome exato da função [I].
   - 3 BoneSpecified → `AttachBoneName`.
   - 4 AliasSpecified → `USkeletalMeshInstance::GetAliasesTagBoneName(AttachBoneName)` + `GetAliasesTagCoords(...)` (origem somada ao RelativeLocation).
   - 5 Trail → `SetPhysics(PHYS_Trailer=10)`; se `bUseCharacterRotation`: `bRelativeTrail=1`, `RelativeTrailOffset(+0x68)=offset`, e `bTrailerSameRotation=1` salvo se o efeito tem `bSelfRotation`; senão `bTrailerPrePivot=1` e `Emitter.TrailerPrePivot(+0x47c)=offset`.
   - 6 RF / 7 LF → `R.RightFootBone(+0x454)` / `R.LeftFootBone(+0x458)`.
8. **Escala**: `if bSizeScale: S *= R.CollisionRadius/9.0`; `if |S−1|>0.0001: AEmitter::SetSizeScale(S)`.
9. **Anexo** (AttachOn ∉ {0,5}): osso `None` ou `AActor::AttachToBone(R, emitter, bone, bAbsolute)` falhar → `DestroyActor` e NULL. Senão `RelativeLocation(+0x1fc) = offset + origem do alias`.
10. **SpawnDelay** (exige `Base->GetMagicInfo()` (vtable +0x2b0) ≠ NULL, senão destrói o emissor!):
    `d = SpawnDelay>=0 ? SpawnDelay : MagicInfo.ShotTime(+0x24) + SpawnDelay` (negativo = relativo ao fim do cast; o teste do
    pseudocódigo é `0.0 <= SpawnDelay`, logo SpawnDelay 0 dá d = 0 e **não** atrasa — corrigido em 2026-10-28, antes dizia `>0`).
    - `d>0` → `AEmitter::SetDelayed(d, all=1)` (soma `d` ao `InitialDelayRange` de cada ParticleEmitter, 0x103070ae→0x10609600) e `FixedLifeTime(+0x474) = ShotTime − d`;
    - `d≤0 && SpawnDelay==0` → `FixedLifeTime = 0`; `d≤0 && SpawnDelay≠0` → `FixedLifeTime = ShotTime`.

#### 2.3.3 Como cada Trigger usa o Notify

| Trigger | Base, Dest | Pós-processamento [O] |
|---|---|---|
| `TriggerCasting` 0x10306c35→0x104ed030 | (pawn, TargetPawn) | se `ShotTime(+0x514)>0`: `AdjustparticleLife(FixedLifeTime≠0 ? FixedLifeTime : (MagicType==13 ? ShotTime−0.4667 : ShotTime+0.2))`; `EffectActor(+0x55c).Add(em)`. No fim `PlaySkillSound(pawn,pawn,1)`. |
| `TriggerChanneling` 0x1030ad3f→0x104ed1b0 | (pawn, TargetPawn) | se `Emitters[0]` é `UBeamEmitter`: `DetermineEndPointBy(+0x4e4)=3 (PTEP_Actor)`, `BeamEndPoints[0].ActorTag = FName("%s%i", pawn.Tag, pawn.CreatureID(+0x60))`, `MaxParticles(+0x10c) = int((ShotTime − AniDues[0] + 0.4667)·InitialParticlesPerSecond)`; senão `AdjustparticleLife(FixedLifeTime ou ShotTime − AniDues[0](+0x58c) + 0.4667)`. `EffectActor.Add(em)`. Sem som. |
| `TriggerShot` 0x10305051→0x104ed420 | filtro SpecificStage (§2). Se `(bOnMultiTarget && AssociatedActor.Num(+0x554)) || TargetPawn==NULL` → `Notify(pawn, AssociatedActor[i])` para cada um (resultado descartado; com TargetPawn NULL e lista vazia nada nasce). Senão `Notify(pawn, TargetPawn)`: se o resultado é `ANSkillProjectile` → `SkillID(+0x5f0)=MagicID`, `TargetActor(+0x4e4)=TargetPawn`, `SetPhysics(PHYS_NProjectile=0x11)`, `proj.MagicInfo(+0x538)=pawn.MagicInfo`, `TargetPawn.SpelledNEffectActor(+0x37c)` recebe o proj (helper 0x104ed3d0; Add vs AddUnique [N]); senão `EffectActor.Add(em)`. Depois: se `EffectID(+0x568).Num≠0 && EffectID[0]==0 && TargetPawn` → `Action_Attack(pawn, TargetPawn, 1,0,0,1,0,0,1)`; `PlaySkillSound(pawn,pawn,2)`. |
| `TriggerExplosion` 0x103043f9→0x104ec510 | MagicInfo = `proj->GetMagicInfo()` (`ANProjectile::GetMagicInfo` = proj+0x538). `bOnMultiTarget && MI.AssociatedActor.Num` → `Notify(proj, AssociatedActor[i])`; senão `Notify(proj, proj.TargetActor)`. Sem ajuste de vida. Fim: `PlaySkillSound(proj.TargetActor as APawn, proj, últimoEmissor, 3)`. |
| `TriggerTransientEffect` 0x103089d6→0x104ec2e0 | (pawn, NULL) sobre **CastingActions** | sem ajuste de vida; toca os 3 sons de cast de `GetSkillSoundData(skillID, 1)` na posição do pawn. |
| `TriggerPreshot` | — | vazia. |

#### 2.3.4 `USkillAction_SwordTrail::Notify` 0x103015b4→0x104ecfa0 [O]
Só se `Base` é APawn, `GL2KeepMinFrameRate==0` e `!bNpc` (pawn+0x694 bit2): `APawn::AttachTrailer(pawn, NULL, 0, DurationRatio, bRightHand)`; devolve o ator se for AEmitter. Ignora EffectClass.

---

### 2.4 Projéteis e rastro

#### 2.4.1 `ANSkillProjectile` / `ANProjectile`
Layout [O, Engine.u + código]: `Speed +0x4dc`, `AccSpeed +0x4e0`, `TargetActor +0x4e4`, `LastTargetLocation +0x4e8`, `LastTargetRotation +0x4f4`, `TraceActor +0x500`, bits `+0x504` {b0 bTrackingCamera, b1 bPreDestroy, b2 bHermiteInterpolation}, `VelInitial +0x508`, `VelFinal +0x514`, `LocInitial +0x520`, `Duration +0x52c`, `CurTime +0x530`, `Disp +0x534`, `MagicInfo +0x538` (NMagicInfo, 0xb8 bytes), `SkillID +0x5f0`, `HitRot +0x5f4`. Defaults Engine.u: `Speed=10, AccSpeed=10, LifeSpan=100, CollisionRadius/Height=5`; `SkillID=-1`. Classes `*_fl` do LineageEffect: tipicamente `Speed 1000, AccSpeed 3000`.

- `AActor::setPhysics` 0x1030eb15→0x106394f0 [O]: ao entrar em PHYS_NProjectile com `bSelfRotation`, orienta o ator para o ponto de impacto do alvo (`TargetActor` vtable +0x2b4) e grava `LastTargetRotation`; física ≠ Walking/None/… solta o Base (vtable +0x16c), logo o projétil desanexa do osso [O/I].
- `ANSkillProjectile::Tick` 0x10313df4→0x104e3540 [O]: a cada tick `LastTargetLocation` = ponto de impacto do alvo (`TargetActor` vtable +0x2b4 com a posição do Owner; sem Owner usa `eventGetEffTargetLocation`), depois `ANProjectile::Tick`.
- `ANProjectile::Tick` 0x1030b4ab→0x104e2490 [O]: chama `AEmitter::Tick`; com `Physics==PHYS_None` e sem alvo → destrói. Em PHYS_NProjectile: `dir = normalize(LastTargetLocation − Location)`; rotação = `dir.Rotation()` (ou, com `bSelfRotation`, gira só pelo delta e atualiza `LastTargetRotation`); `Speed = |Velocity|`, `Velocity = Speed·dir`, `Acceleration = AccSpeed·dir`. Se há `L2NMover(+0x2c4)` usa `FNMover::GetVelocity` (trajetórias especiais).
- `AActor::physNProjectile` 0x1030cc9d→0x1063dd50 [O]: `Velocity *= 1 − 0.2·fricção_da_zona·dt`, `Velocity += Acceleration·dt`, `MoveActor(Velocity·dt)`; modo Hermite (`bHermiteInterpolation`) interpola `LocInitial→LastTargetLocation` com `VelInitial/VelFinal` em `CurTime/Duration`. Chegada [I sobre o teste exato]: quando a distância ao alvo deixa de diminuir, `FarMoveActor` até o alvo, chama `HitWall(−dir)` (vtable +0x1d4) → `processHitWall` → `TriggerExplosion`, e `SetPhysics(PHYS_None)`.
- `ANProjectile::PrepareInterpolation` 0x10313a1b→0x104e2240 [O]: só em `APawn::ThrowAttackProcess` (ataque normal): se distância > 550 liga Hermite com arco (`tan(...)`), `Duration=0.4`, `bSelfRotation=1`.
- `ANSkillProjectile::processHitWall` 0x104e98b0 [O]: se Owner/Target ausentes ou `MagicInfo.MagicID(+0x540)≠0` → explosão (SVE ou legado), force-feedback opcional, e vtable +0x334 [I: destruição/kill]; caso contrário (projétil sem skill) aplica dano visual e `DestroyActor`.
- `ANProjectile::PreDestroy` 0x1030cc84 [O]: `bPreDestroy` → vtable +0x32c [I: Kill, deixa partículas terminarem]; senão `DestroyActor`.
- `ANProjectile::TargetDestroyNotify` 0x1030fce0 [O]: zera `TargetActor` se for o destruído.

#### 2.4.2 `APawn::AttachTrailer(Actor*, int NumPoints, float Dur, int bRightHand)` 0x103110fe→0x104f2b40 [O]
Exige mesh esquelética e instância da arma (mão direita/esquerda) com comprimento >0. Spawna `LineageEffect.RibbonSet` via `SpawnSkillEffect`, `SetPhysics(PHYS_None)`, `LifeSpan(+0xe8) = ShotTime + Dur`. No `RibbonEmitter` [0]: `EndBoneOffset=(L·1.06,0,0)`, `StartBoneOffset=(L·0.53,0,0)`, `RibbonWidth=L·1.06` (L = comprimento da arma·escala), `FadeOutStartTime=ShotTime`, `FadeInEndTime=ShotTime/3`, `NumPoints=param` se >0, `ThresholdTime=ShotTime/2`, `ThresholdTime2=ShotTime`, `BoneNameStart=BoneNameEnd=osso da mão` (vtable 0x21c se bRightHand, 0x220 senão) e `AttachToBone(pawn, ribbon, osso)`. Também chamado pelo legado `SkillEffectInit` com `(NULL,0,0.8,1)` se `!GL2KeepMinFrameRate && !bNpc`.

#### 2.4.3 `APawn::PlaySkillSound(AActor* Src, AActor* SoundActor, int Type)` 0x10307360→0x104ee5a0 [O]
`Src->GetMagicInfo()` → `GetSkillSoundData(MagicID, LevelID)`. Tipo 1 = 3 sons de cast (FName +0x08.., vol +0x2c, raio +0x38); tipo 2 = 3 sons de shot (+0x14.., vol +0x44, raio +0x50); tipo 3 = 3 sons de explosão (+0x20.., vol +0x5c, raio +0x68). Volume/255; tocado na posição do `this` (caster; na explosão o `this` é o alvo). Tipos 1 e 2 tocam ainda uma voz por classe: FName em `(Type·15 + CharClassID)·4 + 0x38`, vol +0xec, raio +0xf0 (CharClassID de `+0x698` ou do dono `+0x718`). Tipo 3 sem voz.

---

### 2.5 Ciclo de vida do `AEmitter` e propriedades L2

Layout `Emitter` (Engine.u, conferido): `Emitters +0x3bc`, bits `+0x3c8` {b0 AutoDestroy, b1 AutoReset, b2 DisableFogging}, `GlobalOffsetRange +0x3cc`, `TimeTillResetRange +0x3e4`, `AutoReplay +0x3ec`, `SpeedRate +0x3f0` (default 1.0), `bRotEmitter +0x3f4`, `RotPerSecond +0x3f8`, `FixedBoundingBox +0x404`, `SpawnSound +0x40c`, `SoundRadius +0x418`, `SoundVolume +0x41c`, `SoundLooping +0x420`, `SoundPitchMin/Max +0x424/+0x428`, `Initialized +0x42c`, `BoundingBox +0x430`, `TimeTillReset +0x464`, `DeleteParticleEmitters +0x470`, `FixedLifeTime +0x474`, `FirstSpawnParticle +0x478`, `TrailerPrePivot +0x47c`, `bUseLight +0x488`…`EL_LifeSpan +0x49c`, `EL_InitialDelay +0x4a0`, `bUseQuake +0x4a4`, `ShakeType +0x4a8`, `ShakeIntensity +0x4ac`, `ShakeVector +0x4b0`, `ShakeRange +0x4bc`, `ShakeCount +0x4c0`, `ShakeTime +0x4c4`, `EQ_InitialDelay +0x4c8`, `VisibleLimit +0x4cc`, `VisibilityInterpRange +0x4d4`, `bSetSizeScale +0x4d8` (default True).
Actor (L2): bits `+0x64` {b16 bTrailerAllowRotation, b17 bTrailerSameRotation, b18 bTrailerPrePivot, b19 bTrailerNoOwnerDestroy, b20 bRelativeTrail}, `RelativeTrailOffset +0x68`, `+0x74` b0 `bSelfRotation`, `LifeSpan +0xe8`, `bSunAffect +0x13c` b0, `DrawScale +0x27c`, `PrePivot +0x28c`, `SwayRotationOrig +0x2d0`, `Mass +0x2fc`, `TexModifyInfo +0x3a0`.

| Propriedade | Onde é lida | Efeito |
|---|---|---|
| `SpeedRate` | `AEmitter::Tick` 0x10310f96→0x1060bd00 [O]; `UVertMeshEmitter::SpawnParticle` 0x1030db0c [O] | `dt_efetivo = SpeedRate·dt` para todo o tick do emissor (rotação, delays, luz, quake, reset); taxa de animação das partículas VertMesh. Setter `AEmitter::SetSpeedRate` sem chamadores no caminho de skill [N]. |
| `bRotEmitter`/`RotPerSecond` | `AEmitter::EmitterRotation` 0x10313b79→0x106096f0 [O] | `Rotation += RotPerSecond·dt_efetivo` via `MoveActor`. |
| `AutoDestroy` | `AEmitter::Tick` [O] | quando todos os ParticleEmitters terminaram, nada pendente de delay e fora do editor → `DestroyActor`. Também desabilita PE com `PE.AutoDestroy`. |
| `AutoReset`/`TimeTillResetRange` | `AEmitter::Tick` [O] | se AutoReset e !AutoDestroy: conta `TimeTillReset`, re-sorteia `GlobalOffset`, `Reset()` em todos os PE, limpa `FirstSpawnParticle`. |
| `AutoReplay` | `AEmitter::Tick` [O] | só com `GIsEditor` (comentário do .uc: "only editor"). Sem efeito no jogo. |
| `FixedLifeTime` | escrito por LocateEffect, lido por TriggerCasting/Channeling [O] | substitui a duração calculada do cast em `AdjustparticleLife`. |
| `AdjustparticleLife(T)` 0x1031205d→0x1060ac50 | [O] | `delta = T − max(LifetimeRange.Max dos PE com ForcedLifeTime)`; `EL_LifeSpan += delta`; PE com `ForcedLifeTime`: `LifetimeRange += delta`; com `ForcedFade`: `FadeOutStartTime += delta`; com `ForcedMaxParticles`: `MaxParticles = int((T − LifetimeRange.center)·int(InitialParticlesPerSecond))`. Faz o efeito de cast durar exatamente o cast. |
| `SetSizeScale(S)` 0x10304c23→0x1060ad10 | [O] | só se `bSetSizeScale`; multiplica por S em cada PE: `Acceleration`, `StartLocationRange`, `SphereRadiusRange`, `StartLocationPolarRange`, `StartSizeRange`, `StartVelocityRange`; Beam: `Low/HighFrequencyNoiseRange`. Usa valores atuais (default-actor só para `AAirEmitter`). |
| `bUseLight`, `EL_InitialDelay`, `EL_LifeSpan` | `AEmitter::Tick` [O] | após o delay `SpawnEmitterLight`. |
| `bUseQuake`, `Shake*`, `EQ_InitialDelay` | `AEmitter::Tick` → `SpawnEmitterQuake` [O]; conteúdo de SpawnEmitterQuake [N] | tremor de câmera após o delay. |
| `SpawnSound`, `SoundRadius/Volume/Looping/PitchMin/Max` | `AEmitter::Tick` [O] | no 1º spawn de partícula (`CheckFirstSpawnParticle`) toca cada som (looping → slot 2); com `WeatherSoundCheck` do PE, só dentro das janelas de hora do `UL2NEnvManager`. |
| `TrailerPrePivot` / `bTrailerPrePivot` | `AActor::physTrailer` 0x10311d83→0x10638c80 via `AEmitter::GetTrailerPrePivot` 0x10314565 [O] | posição = `Owner.Location + TrailerPrePivot` (em mundo, sem rotacionar). |
| `bRelativeTrail` / `RelativeTrailOffset` | physTrailer [O] | posição = `Owner.Location + RelativeTrailOffset` rotacionado (rotação do dono [I]). |
| `bTrailerSameRotation` | physTrailer [O] | se `!bSelfRotation`, rotação = `Owner.Rotation`. |
| `bSelfRotation` | physTrailer, `ANProjectile::Tick`, `setPhysics` [O] | trailer: não força rotação e continua o trailer mesmo com Base; projétil: gira só pelo delta da direção. |
| `bTrailerNoOwnerDestroy` | physTrailer [O] | sem Owner: se **ligado** → `DestroyActor`, se desligado o efeito fica parado (o comentário do .uc está copiado e não ajuda). |
| `bTrailerAllowRotation` | physTrailer (ramo de DrawType ≠ sprite/partícula) [O] | não usado por emissores (DrawType=DT_Particle 10). |
| `bSunAffect` | `UMeshEmitter::RenderParticles` 0x10311833, `UVertMeshEmitter::RenderParticles` 0x10309958 [O] | cor das partículas mesh modulada pela luz do sol do `UL2NEnvManager`. |
| `SwayRotationOrig` | `AActor::PostLoad` 0x103092d2 [O] | cópia da Rotation no load (ator de mapa/árvores); irrelevante para efeitos spawnados. |
| `TexModifyInfo` | `AActor::IsModifiedTexture` 0x10311464 (bUseModify && bAlphaBlend) [O] | modificador de textura do ator; uso no render de partículas [N]. |
| `LifeSpan` | escrito por AttachTrailer; default NProjectile 100 | [I] expiração padrão UE2 em `AActor::Tick`. |
| `DrawScale` | lido em LocateEffect só como fator de altura de mesh esquelética [O] | efeito do DrawScale do próprio emissor no tamanho das partículas [N]. |
| `Speed`, `AccSpeed` | `ANProjectile::Tick`/`physNProjectile` [O] | ver §4.1. Onde `Velocity` recebe `Speed` na largada [N]. |
| `Physics` (default de classe) | LocateEffect sobrescreve para None (AttachOn 0) ou Trailer (5) [O] | nas anexações a osso fica o default da classe. |
| `bNoDelete` | default Emitter = True; 815 classes gravam False [O dados] | [I] necessário para `SpawnActor` em runtime. |

---

### 2.6 Opções de qualidade que suprimem/alteram efeitos

| Opção | Onde | Efeito [O] |
|---|---|---|
| `GL2KeepMinFrameRate` | `USkillAction_SwordTrail::Notify` 0x104ecfa0; `APawn::SkillEffectInit` 0x104f2ed0 | não cria rastro de espada (RibbonSet). |
| `GL2KeepMinFrameRate` | `OnReceiveMagicSkillUse` 0x1049cb10 / 0x1049c4a0 | descarta MagicSkillUse de outros pawns: se o caster não é o pawn local e `caster vtable+0x218()` é 0 [N: significado], ou se a distância ao pawn local > `GL2PawnCR·32768·0.0625` (= 2048·PawnCR). Nada de anim nem efeito. |
| `GL2KeepMinFrameRate` | `APawn::Action_Attack` 0x10626210/0x10626bb0, `ANProjectile::processHitWall`, `ANSkillProjectile::processHitWall` | passado como argumento às virtuais de reação a golpe (+0x210/+0x214) [I: suprime efeito de impacto]. |
| `GL2KeepMinFrameRate` | `UGameEngine::RenderCameraEffect` 0x1058b670 | sem pós-processo (`GL2PostProcessType`). |
| `GL2KeepMinFrameRate` | `APawn::TickSpecial`, `SpineRotation`, `Update*Rotation`, skeletal render/GetFrame, BSP/água | otimizações não-FX (rotação de rosto/coluna, LOD). |
| `bNpc` (pawn+0x694 b2) | SwordTrail::Notify, SkillEffectInit | NPC nunca recebe rastro de espada. |
| `GL2FFEffectUse` | MagicProcess, SkillEffectFinalize, processHitWall, OnReceiveMagicSkillUse | [I] force feedback (IDs `MSData+0x70/+0x74`); não visual. |
| Outros globais vistos (`GL2RenderActorLimit`, `GEmitterCurCount/PeakCount`, `GL2GlowEffect`, `GL2HDREffect`, `GIsL2WaterEffect`, `GL2UseHitWateEffect`) | render geral/contadores | não estão no caminho SkillVisualEffect [O: ausentes das funções acima]; efeito específico [N]. |

---

### 2.x Lacunas [N]

1. Onde `Velocity` recebe o `Speed` inicial do projétil (setPhysics/script não mostram; com Velocity 0 o projétil acelera só por `AccSpeed`).
2. Teste exato de chegada em `physNProjectile` (Ghidra perdeu argumentos do helper de distância) e o que é a virtual +0x334 chamada após a explosão.
3. Nomes das virtuais de APawn +0x21c/+0x220 (osso da mão direita/esquerda — inferido por AttachTrailer), +0x2b4 (ponto de impacto), +0x218 (filtro do KeepMinFrameRate).
4. Uso de `DrawScale`, `TexModifyInfo` e `bDirectional` do emissor no render das partículas; conteúdo de `SpawnEmitterQuake`/`SpawnEmitterLight`.
5. Resolução do caminho `skill.usk` (Paths do l2.ini cifrado).
6. `SetSpeedRate` não tem chamador no fluxo de skill: se a velocidade de cast altera `SpeedRate`, é por outro caminho.
7. Ordem exata dos 4 bits de `+0x5c`/`+0x64` foi derivada da cadeia de propriedades do Engine.u; conferida para bTrailerPrePivot/bRelativeTrail/bTrailerSameRotation/bSpawnOnTarget pelo código, mas bTrailerNoOwnerDestroy (b19) só pela cadeia.

## 3. Efeitos legados (fixos no código)

> Nesta seção, as referências "§N" sem o prefixo se referem às subseções 3.N.


Legenda: **[O]** lido no binário/pseudocódigo · **[I]** inferido · **[N]** lacuna (não determinado).

Artefatos:
- Tabela: `out/re/fx/legacy_skill_fx.json` (~5 MB)
- Gerador reprodutível: `scripts/legacy_fx_table.py`
  (`python -I scripts/legacy_fx_table.py [bin/engine.dll] [saida.json]`, leva ~25 s). Ele depende de `bin/engine.dll`, `out/re/rtti_engine.json`, `out/re/fx/layout_{actor,pawn,particleemitter}.txt`, `txt/skillgrp.txt` e `out/re/fx/lineageeffect.json`. Opcionalmente lê `soulshot.int` do cliente instalado (variável `L2_SOULSHOT_INT`).

### 3.1 Método

1. **Sem o pseudocódigo do Ghidra.** Ele usa goto e rótulos compartilhados, e o de `SkillEffectShot` nem existe (timeout no decompile). Em vez dele, o script desmonta `engine.dll` com capstone e pefile, resolve as tabelas de salto de dois níveis (`movzx eax, byte [eax+B]; jmp [4*eax+T]`) e enumera os IDs do switch com um interpretador concreto mínimo, de 0 a 70000. [O]
2. **Execução simbólica x86 + x87 para cada MagicID concreto,** a partir da entrada da função. O despacho e todos os testes internos de ID se resolvem sozinhos. Condições simbólicas bifurcam o caminho: GL2KeepMinFrameRate, bNpc, TargetPawn, SkillLevel, nome de osso igual a None, bTargetExcepted etc. Tabelas de salto com índice simbólico (por exemplo `switch(SkillLevel)`) viram condições `X in [..]`. No ramo em que `X == c` vale, X é substituído por c. [O]
3. **Pilha.** A pilha é modelada em offsets relativos. O purge de cada chamada sai de:
   - uma tabela de assinaturas conhecidas (FName, FRotator, FCoords, FVector, StaticLoadClass, IsA…);
   - `ret N` da função chamada;
   - `add esp` logo após a chamada (cdecl);
   - bytes empilhados, no caso de chamadas virtuais.

   Os slots de vtable são nomeados pelo RTTI: 0x21c `GetRHandBoneName`, 0x220 `GetLHandBoneName`, 0x2b0 `GetMagicInfo`, 0x7c `GetEmitter`, `ULevel+0xc0` SpawnActor. O slot 0x1c8 é `setPhysics`, inferido pela assinatura `(BYTE, AActor*, FVector(0,0,1))`. [O/I]
4. **Formas x87 com registrador** (fsub/fsubr, fxch, fld st(i)) são decodificadas pelo byte ModRM. O texto do capstone é ambíguo nesses casos, e isso foi corrigido depois que um teste contra o pseudocódigo falhou. [O]
5. **Eventos registrados por caminho:**
   - SpawnSkillEffect, com os 15 argumentos;
   - StaticLoadClass seguido de ULevel::SpawnActor;
   - AttachToBone, por nome ou por índice;
   - escritas em campos do efeito (LifeSpan, RelativeRotation, TrailerPrePivot, Emitters[k].*, campos de projétil);
   - setPhysics, SetSizeScale, AdjustparticleLife, SetDelayed;
   - AttachTrailer (RibbonSet);
   - FNPawnLight/AddPawnLight, PlaySkillSound, NCubicSkillInit.

   Os caminhos se agrupam em variantes. `effects[].when` traz os literais comuns às variantes que contêm o efeito; `alt_args` traz os argumentos que mudam em outra variante, por exemplo direção pelo alvo ou pela própria rotação quando `TargetPawn == this`.
6. **Suposições [I],** também listadas em `_meta.suposicoes_I`:
   - spawn nunca retorna NULL;
   - o efeito é um AEmitter, então `GetEmitter()` devolve ele mesmo;
   - o pawn tem SkeletalMesh;
   - elementos de TArray não são nulos;
   - laços são explorados até 2 voltas.

### 3.2 Funções e cobertura

| função (thunk → corpo) | switch em | IDs tratados | blocos de caso | efeitos (spawn) | classes | default (ID não listado) |
|---|---|---|---|---|---|---|
| `APawn::SkillEffectInit` 0x10311cca → 0x104f2ed0 | `MagicInfo.MagicID` (+0x4f8) | 568 (565 com efeito) | 81 | 681 | 83 | nada: sai em 0x104fa6b2 sem som [O] |
| `APawn::SkillEffectChanneling` 0x103113bf → 0x104fd570 | +0x4f8 | 7 (1419–1421, 1423, 7038–7040) | 1 | 14 | 2 | nada [O] |
| `APawn::SkillEffectPreShot` 0x10313610 → 0x104fd870 | +0x4f8 (exige `TargetPawn != 0`) | 23 | 5 (+1 bloco vazio com 1916 IDs) | 25 | 4 | nada [O] |
| `APawn::SkillEffectShot` 0x10307cf7 → 0x104fe660 | +0x4f8 | 566 (564) | 103 | 1094 | 101 | nada; devolve projétil NULL [O] |
| `ANSkillProjectile::SkillEffectExplosion` 0x1030293c → 0x104e3650 | projétil +0x5f0 (SkillID) | 98 | 25 | 237 | 25 | nada; o som final só toca se algo nasceu [O] |
| `APawn::SpawnNTransientEffect(Target, id)` 0x1030f646 → 0x104efb30 | arg1 | 108 (93 com spawn) | 38 | 156 | 41 | só a cauda de som `GetSkillSoundData(id,1)` [O] |

- União: **707 IDs** com algum efeito legado.
- Nas funções `APawn`, todo caso tratado termina em `PlaySkillSound(this, fx, 1|2|3)` (Init 1, Shot 2, Explosion 3) se algo nasceu. [O]
- `SpawnNTransientEffect` cobre item-skills: soulshot/spiritshot 2039, 2047, 2061, 2150–2164; poções; cubics 4049–4055, 4164–4166, 5115–5116 via `ANCubics::NCubicSkillInit`; e o level-up de arma amaldiçoada 20005. [O]

#### Validação contra `txt/skillgrp.txt` (está em `_validation` no JSON)

- **Skills:** 2694 ids no total; 1897 ativas (oper_type 0/1); 1741 sem SVE (desc vazia em todos os níveis; só 4544 tem desc mista).
- **Ativas sem SVE:** 945. Dessas, **477 ganham efeito pelo legado** e 468 ficam sem nada (por exemplo 42, 444, 1312–1314, 2001–2030…).
- **Por função** (ativas sem SVE cobertas): Init 376, Shot 363, Explosion 77, SpawnNTransientEffect 66, PreShot 23, Channeling 7.
- **IDs legados que também têm SVE em dados:** 221. Nesses casos o legado é ignorado, porque `Agent != NULL` usa o SVE.
- **IDs legados ausentes do skillgrp:** 93, 1065, 1138, 1241, 20000–20002, 20004, 20005. Nenhum ID legado é passivo ou toggle.
- **Classes:** 243 `LineageEffect.*` distintas, contando as 28 resolvidas de `soulshot.int`. **Todas as 243 existem** em `lineageeffect.json` (chave `classes`); nenhuma está ausente.
- **Classes não estáticas:**
  - `Cast<APawn>(HitActor).DamageEffect`: classe por NPC.
  - `None`: ID 5007 com nível fora de 1..5.
  - `?`: caminho inviável do 20005 (ver lacunas).

#### Conferência manual, 5 casos sorteados (seed 2026)

1. **Init 1224** (bloco do `case 2,0xb,0xc…` em `legacy_init.c`): `m_u018_a` em modo relativo, AttachType 1, offset `-forward(DesiredRotation)·CollisionRadius/1.5`. Bate com o pseudocódigo (`local_7f8 = -1.0`, `/1.5`) e com a lista de IDs que compartilham o bloco. **[O] ✓**
2. **Shot 99** (asm 0x1050976a, sem pseudocódigo): se `bTargetExcepted`, `s_u016_b` (string 0x108ab408) em cada `AssociatedActor[i]`; senão no `TargetPawn` (cauda 0x1050ce88). Flags (1,1,0,0), AttachType 1, `PlaySkillSound(…,2)`. **[O] ✓**
3. **Shot 4152** (asm 0x1050bace): `m_u003_c` (0x108a7a50) e depois `m_u003_b` (0x108a7a18) via StaticLoadClass + SpawnActor, `setPhysics(PHYS_NProjectile)`, Speed 0.1 (0x1089df54), AccSpeed 450 (0x108a7a14). **[O] ✓**
4. **Shot 4176:** mesmo bloco do 99, resultado idêntico. **✓**
5. **SpawnNTransientEffect 2162** (pseudocódigo `case 0x86b..0x874`): grade = `(id-0x86b)%5+1` = 3 = B; SpiritOnSticks/SpiritOnBooks por mão, conforme `soulshot.int[CurWeaponType].LH/RH`; `Emitters[0..1].StartVelocityRange.X = bound` (ou 30.0); RelativeRotation (0,0x4000,0) no "Books". **[O] ✓**

Conferência extra: **Explosion 1100** (`case 0x44c`). Sem HitActor, `m_u028_c` nasce absoluto em LastTargetLocation com `Rotation(HitNormal)`. Com HitActor, nasce preso a ele, mais `AddPawnLight` em `LastTargetLocation − dir·Radius·2`. **[O] ✓** Foi esse caso que expôs o bug do x87 citado no método.

### 3.3 Semântica de `AActor::SpawnSkillEffect(A, B, FName, AttachType, Offset, Rot, SpeedRate, bRelative, bSetSpeedRate, bProjectile, bRegister)` (corpo 0x104eeec0) [O]

- **Spawn:** `StaticLoadClass(Class)` e depois `XLevel->SpawnActor(cls, None, Loc, Rot, NULL, 1, 0, Owner=B, NULL)`.
- **Posição:**
  - `A` != NULL e !bProjectile e !bRelative: Loc/Rot = `A.Location/A.Rotation`. O Offset é ignorado.
  - `A` == NULL ou bProjectile: Loc/Rot = Offset/Rot absolutos.
  - bRelative: nasce em (0,0,0) e `GetEmitter().TrailerPrePivot` recebe o deslocamento:
    - Z = −altura com AttachType 1 (pés) e +altura com AttachType 3; 0 e 2 não alteram. Altura = `A.CollisionHeight` ou `SkeletalMesh+0x98 × DrawScale`.
    - `X/Y += Offset.X/Y` (somente se os dois forem ≠ 0).
    - `Offset.Z` soma em `TrailerPrePivot.Y`. É um bug do original ou uma intenção desconhecida [O/N].
- **SpeedRate:** `AEmitter.SpeedRate` (+0x3f0) recebe SpeedRate se bSetSpeedRate.
- **B != NULL e `MagicAniStatus == 0`:**
  - `AdjustparticleLife(ShotTime + 1.0)`;
  - se `CollisionRadius > 11` e AttachType ≠ 0: `SetSizeScale(CollisionRadius × CastingEffectScale / 9)`.
- **bProjectile:** TargetActor (+0x4e4) = `MagicInfo.TargetPawn`, `setPhysics(PHYS_NProjectile)`, `MagicInfo.MagicID/LevelID`, SkillID (+0x5f0), e registro no pawn.
- **bRegister:** adiciona o efeito a `MagicInfo.EffectActor`.
- **`AttachToBone(Actor, int idx, flag)`** usa `RefSkeleton[idx].Name`. idx 0 é o osso raiz; quando o nome do osso da mão é None, o cliente cai para idx 2.

### 3.4 Padrões comuns (contagem de efeitos)

- **Init, círculo de conjuração** (428/681): `base=this, owner=this, AttachType=1, bRelative=1, bRegister=1, SpeedRate 1.0`, offset `-forward(DesiredRotation)·CollisionRadius/1.5` (atrás do pawn). Quando o alvo é outro, há variante com `forward(Rotation(Target−Self))·CollisionRadius` (`alt_args`, condição `TargetPawn == this`). [O]
- **Init, brilho na mão** (138 absolutos + 49 attach):
  - nasce em `this.Location` (base NULL), `setPhysics(PHYS_None)`, `LifeSpan = MagicInfo.ShotTime`;
  - `AttachToBone(GetRHandBoneName()` ou `GetLHandBoneName())`, com fallback `AttachToBone(fx, 2, 0)` se o nome for None;
  - ossos fixos raros: `bone01`, `Bone04`, `dummy04`, `dummy05`, `bip01 ponytail2nub` (este testado com `MatchRefBone`). [O]
- **Shot, impacto ou alvo:**
  - `base = owner = TargetPawn`, ou cada `AssociatedActor[i]` (multi-alvo, quando `bTargetExcepted != 0`);
  - AttachType 1 (pés) ou 2 (centro), bRelative 1, bRegister 0;
  - projéteis legados: StaticLoadClass + SpawnActor, `setPhysics(PHYS_NProjectile)`, Speed/AccSpeed constantes, `TrailerPrePivot.Z = mesh bound`, `AttachToBone(idx 0)`, FNMover;
  - 18 efeitos usam `SpeedRate = this.SkillSpeedRate`;
  - muitos casos exigem `MagicInfo.PendingNotify == 2` (último shot). [O]
- **Explosion:**
  - em HitActor, relativo (AttachType 0 ou 1) e preso ao osso raiz;
  - sem HitActor, absoluto em `LastTargetLocation` com `Rotation(HitNormal)`;
  - 25 IDs spawnam `HitActor.DamageEffect` (classe definida por NPC);
  - 80 luzes via `APawn::AddPawnLight` + `FNPawnLight::Init`. [O]
- **Escalas:**
  - SpeedRate 1.0 quase sempre;
  - `SetSizeScale` explícito é raro:
    - `CollisionRadius/9`: 5 Init, 4 Shot (alvo ou AssociatedActor) e 2 SNTE;
    - `9/CollisionRadius`: 2 Init (4128 e 4315; `fdivr` conferido no pseudocódigo);
    - `2.0`: 1 Shot;
    - `0.6`: 4 SNTE;
  - DrawScale nunca é escrito pelo código: vem dos defaults da classe em `lineageeffect.json`. [O/I]
- **Luzes `FNPawnLight`:** 102 IDs no Init (série 1002–1010, 1092–1169…), 7 no Shot, 80 no Explosion. Os parâmetros de cor e raio estão nos `args` de `FNPawnLight::Init` (semântica [I]).

### 3.5 Casos especiais

- **RibbonSet** (rastro de espada): Init 3, 16, 30, 36, 48, 96, 100, 190, 223, 245, 255, 260, 4032 chamam `AttachTrailer(NULL, 0, 0.8, 1)` só se `GL2KeepMinFrameRate == 0 && !bNpc`. [O]
- **5007** (Frintezza, `mb_frintessa_organ_*`): 10 spawns em **coordenadas de mundo fixas** (≈174170, −89940, −5058). A classe depende de `SkillLevel` (`switch(SkillLevel-1)`: heal, rampage, psycho, plague…). Fora de 1..5 o FName é None e nada carrega. [O]
- **Montaria:** Init 1016, 1254, 2014, 2049 e 2062 testam `RidePawn`. [O]
- **Channeling** (1419–1421, 1423, 7038–7040): `s_u808_red_a/b` em `MagicInfo.LocList[0]` (posição de mundo). Ajusta `Emitters[0..1].LifetimeRange` em laço sobre os sub-emissores. [O]
- **PreShot** (arqueiro): `s_u003_d` (16 IDs), `e_u300_heart_arrow` (3260–3262) e `NSpear_sp` (4228, com Mesh). São projéteis "na mão" via SpawnActor + `AttachToBone(this.RightHandBone)`. 343/354 somam `s_u509_d` diante do alvo. [O]
- **Soulshot/spiritshot (SNTE).** A classe vem de `soulshot.int`, carregado por `FL2GameData::SoulShotDataLoad` em `FL2GameData` @0x10b3c870: `[grade]` 0x54 bytes em +0x7f62c e `[tipo de arma]` LH/RH em +0x7f5ec. [O]
  - O arquivo do cliente (Ver111, XOR 0xAC) foi lido e resolvido: soulshot NG..S = `e_u505..e_u510_{a,b}`; spiritshot = `e_u512..e_u517_{a,b}`. [O]
  - Escolha da classe: LH/RH = 1 dá Sticks se o bound do mesh da arma for > 12, senão Books; 0 dá Books; −1 não gera nada. [O]
- **20005** (level-up de arma amaldiçoada): `AttackItemClassID` 8190 (Zariche) gera `it_zariche_levelup` na mão direita; 8689 (Akamanah) gera `e_u540_levelup` nas duas mãos. [O]

### 3.6 Lacunas [N] e ressalvas

- **[N] Retorno float de funções não modeladas.** Aparece como `st0?`. Afeta 1 lifespan do Init (`GetXxxRate() × AniDues[0]`).
- **[N] Construtores de vetor (`_vector_constructor_iterator_`) não são emulados.** O 20005 ganha um caminho inviável, com classe `?`, quando a arma não é 8190 nem 8689; nada nasce de fato.
- **[N] Campos sem semântica conhecida:** `USkeletalMesh+0x98` (altura ou bound), `+0x150/+0x154` (array de floats usado como "comprimento" da arma) e `Cast<USkeletalMeshInstance>(MeshInstance)+0x188`.
- **[I] Laços explorados até 2 voltas.** Efeitos multi-alvo aparecem uma vez com `AssociatedActor[0]`, que deve ser lido como "cada AssociatedActor". Os literais de laço ficam só em `variants`.
- **[I] Slot 0x1c8 = setPhysics** é inferido pela assinatura. O enum vem de `Actor.uc` (L2 adiciona `PHYS_MovingTrailer`, `PHYS_EffectTrailer`, `PHYS_NProjectile`…).
- **[N] PlaySkillSound e a cauda de som do SNTE** (`skillsoundgrp`) não foram resolvidos até o arquivo de som.
- **[N] Sem conferência contra pseudocódigo para SkillEffectShot.** O Ghidra deu timeout; os casos foram conferidos só pelo asm (itens 2–4).
- **Escopo:** a tabela descreve só o que o código decide. LifeSpan e Physics padrão, `AutoDestroy` e emissores vêm dos defaults da classe em `lineageeffect.json`.

## 4. Simulação das partículas

> Nesta seção, as referências "§N" sem o prefixo se referem às subseções 4.N.


Fonte: pseudocódigo Ghidra de `Engine.dll` (`out/re/decomp_all/engine`), conferido com disassembly (capstone sobre `bin/engine.dll`) nos pontos em que o Ghidra perdeu argumentos de FPU. Classes `.uc` em `out/re/fx/engine_src`, defaults em `out/re/fx/engine_defaults.json`, uso real em `out/re/fx/lineageeffect.json`.

Legenda: **[O]** lido no pseudocódigo/assembly (com endereço); **[I]** inferido (UE2 público, nome, contexto); **[N]** lacuna.

Endereços: o `index.tsv` aponta para *thunks* `0x103xxxxx` (jmp); o corpo real fica em `0x105/0x106xxxxx`. Cito o endereço do índice (thunk) e, quando útil, o do corpo.

---

### 4.0 Convenções, layout e utilitários

#### 4.0.1 Layout de memória (validado)
O layout foi calculado a partir da ordem das variáveis do `.uc` com base `UObject = 0x34` e bools empacotados em bitfields, e validado contra vários acessos conhecidos (Reset, Initialize, Scale, execTrigger, CleanUp, HandleActorForce, AEmitter::Tick). A tabela completa está em `out/re/fx/layout_particleemitter.txt`. Offsets usados neste documento:

| Off | Campo | Off | Campo |
|---|---|---|---|
| 0x034 | Acceleration | 0x2b8 | b0 UseSizeScale, b1 UseRegularSizeScale |
| 0x040 | b0 IndependentSprayAccel, b1 UseCollision | 0x2bc | SizeScale[] (8 B: RelativeTime, RelativeSize) |
| 0x044 | ExtentMultiplier | 0x2c8 | SizeScaleRepeats |
| 0x050 | DampingFactorRange | 0x2cc | StartSizeRange |
| 0x068/0x06c | UseCollisionPlanes / CollisionPlanes[] | 0x2e4 | UniformSize |
| 0x078/0x07c | UseMaxCollisions / MaxCollisions | 0x338 | ParticlesPerSecond |
| 0x084/0x088 | SpawnFromOtherEmitter / SpawnAmount | 0x33c | InitialParticlesPerSecond |
| 0x0a4 | b0 UseSpawnedVelocityScale, b1 UseColorScale | 0x340 | AutomaticInitialSpawning |
| 0x0a8 | ColorScale[] (8 B: RelativeTime, FColor) | 0x344 | DrawStyle (byte) |
| 0x0b4 | ColorScaleRepeats | 0x348 | Texture |
| 0x0b8 | ColorMultiplierRange | 0x34c/0x350 | TextureU/VSubdivisions |
| 0x0d0 | Opacity | 0x354 | b0 BlendBetweenSubdivisions, b1 UseSubdivisionScale |
| 0x0d4 | OpacityRatio (transient) | 0x358 | SubdivisionScale[] (float) |
| 0x0d8 | FadeOutFactor (plane X,Y,Z,W) | 0x364/0x368 | SubdivisionStart / SubdivisionEnd |
| 0x0e8/0x0ec | FadeOutStartTime / FadeOut | 0x36c | UseRandomSubdivision |
| 0x0f0 | FadeInFactor | 0x370 | SecondsBeforeInactive |
| 0x100/0x104 | FadeInEndTime / b0 FadeIn, b1 UseActorForces | 0x374 | MinSquaredVelocity |
| 0x108 | CoordinateSystem (byte) | 0x378 | InitialTimeRange |
| 0x10c | MaxParticles | 0x380 | LifetimeRange |
| 0x110 | ResetAfterChange | 0x388 | InitialDelayRange |
| 0x114 | EffectAxis | 0x390 | b0 TriggerDisabled, b1 ResetOnTrigger |
| 0x118 | LevelOfWeather | 0x394/0x39c | SpawnOnTriggerRange / SpawnOnTriggerPPS |
| 0x11c | CheckLevelOfWeather | 0x3a0 | StartVelocityRange |
| 0x120 | ParticleChoice | 0x3b8 | StartVelocityRadialRange |
| 0x124 | WeatherEffect | 0x3c0 | MaxAbsVelocity |
| 0x128 | WeatherRangeTime[] (range) | 0x3cc | VelocityLossRange |
| 0x134 | bits: 0 WeatherSoundCheck, 1 ForcedLifeTime, 2 ForcedFade, 3 ForcedMaxParticles, 4 RespawnDeadParticles, 5 AutoDestroy, 6 AutoReset, 7 Disabled, 8 DisableFogging | 0x3e4/0x3e8 | AddVelocityFromOtherEmitter / AddVelocityMultiplierRange |
| 0x138 | AutoResetTimeRange | 0x400 | GetVelocityDirectionFrom |
| 0x14c | StartLocationOffset | 0x404/0x408/0x414 | UseVelocityScale / VelocityScale[] (16 B) / VelocityScaleRepeats |
| 0x158 | StartLocationRange | 0x418/0x41c | WarmupTicksPerSecond / RelativeWarmupTime |
| 0x170 | AddLocationFromOtherEmitter | 0x420 | Owner (AEmitter*) |
| 0x174 | StartLocationShape | 0x424 | b0 Initialized, b1 Inactive |
| 0x178 | SphereRadiusRange | 0x428 | InactiveTime |
| 0x180 | StartLocationPolarRange | 0x42c | Particles (TArray, elemento 0xE0) |
| 0x198 | StartMassRange | 0x438/0x43c/0x440 | ParticleIndex / ActiveParticles / PPSFraction |
| 0x1f4/0x1f8 | AlphaRef / b0 AlphaTest, b1 AcceptsProjectors, b2 ZTest, b3 ZWrite, b4 UseRevolution | 0x444 | BoundingBox |
| 0x1fc/0x214 | RevolutionCenterOffsetRange / RevolutionsPerSecondRange | 0x46c | b0 RealDisableFogging, b1 AllParticlesDead, b2 WarmedUp |
| 0x22c/0x230/0x23c | UseRevolutionScale / RevolutionScale[] (16 B) / RevolutionScaleRepeats | 0x470/0x474 | OtherIndex / InitialDelay |
| 0x240 | UseRotationFrom | 0x478/0x484 | GlobalOffset / TimeTillReset |
| 0x244 | SpinParticles | 0x48c | MaxActiveParticles |
| 0x248 | RotationOffset | 0x490/0x494 | CurrentCollisionSoundIndex / CurrentSpawningSoundIndex |
| 0x254 | SpinCCWorCW | 0x49c | MaxSizeScale |
| 0x260/0x278 | SpinsPerSecondRange / StartSpinRange | 0x4a0/0x4a4 | KillPending / DeferredParticles |
| 0x290/0x294 | DampRotation / RotationDampingFactorRange | 0x4c0 | CurrentSpawnOnTrigger |
| 0x2ac | RotationNormal | 0x4c8 | CurLifeTime |

**struct Particle (0xE0 bytes) [O]** (confirmado por HandleActorForce e pelos acessos de UpdateParticles): Location 0x00, OldLocation 0x0c, Velocity 0x18, StartSize 0x24, SpinsPerSecond 0x30, StartSpin 0x3c, RevolutionCenter 0x48, RevolutionsPerSecond 0x54, RevolutionsMultiplier 0x60, Size 0x6c, StartLocation 0x78, ColorMultiplier 0x84, VelocityMultiplier 0x90, OldMeshLocation 0x9c, Color 0xa8 (FColor em memória B,G,R,A), Time 0xac, MaxLifetime 0xb0, Mass 0xb4 (**guarda 1/Mass**), HitCount 0xb8, Flags 0xbc, Subdivision 0xc0, BoneIndex 0xc4, Rotation 0xc8, **Acceleration 0xd4** (aceleração por partícula, extensão em relação ao UE2 2110 público).

**Flags da partícula [O]:** `1 = Active`, `2 = NoTick` (parou após colisão, ver §4.9), `4 = InitialSpawn` (recém-criada neste frame: não integra nem soma dt).

**AEmitter [O]:** 0x1bc Location, 0x1c8 Rotation, 0x1d4 Velocity, 0x28c PrePivot, 0x3bc Emitters[], 0x3c8 b0 AutoDestroy / b1 AutoReset / b2 DisableFogging, 0x3cc GlobalOffsetRange, 0x3e4 TimeTillResetRange, 0x3ec AutoReplay, **0x3f0 SpeedRate**, 0x3f4 bRotEmitter, 0x3f8 RotPerSecond, 0x40c SpawnSound[], 0x418 SoundRadius, 0x41c SoundVolume, 0x420 SoundLooping, 0x424/0x428 SoundPitchMin/Max, 0x42c Initialized, 0x430 BoundingBox, 0x44c/0x450 EmitterRadius/Height, 0x454 ActorForcesEnabled, 0x458 GlobalOffset, 0x464 TimeTillReset, 0x468 UseParticleProjectors, 0x46c ParticleMaterial, 0x474 FixedLifeTime, 0x478 FirstSpawnParticle, 0x488 bUseLight, 0x49c EL_LifeSpan, 0x4a0 EL_InitialDelay, 0x4a4 bUseQuake, 0x4c8 EQ_InitialDelay, 0x4cc VisibleLimit, 0x4d4 VisibilityInterpRange, 0x4d8 bSetSizeScale.

#### 4.0.2 Aleatoriedade [O]
- `appFrand() = rand() / 32767.0` (Core 0x1010381e) → intervalo **[0,1] fechado** (pode dar 1.0).
- `FRange::GetRand() = Max + (Min − Max) * frand` (Core 0x1010212b). Distribuição equivalente a `Min + (Max−Min)*u`, mas a fórmula exata é a de cima.
- `FRangeVector::GetRand()` (Core 0x10103e86): sorteia **Z primeiro, depois Y, depois X**: `z = Z.Max+(Z.Min−Z.Max)*frand1; y = …frand2; x = …frand3`.
- `FRange::GetCenter() = (Min+Max)*0.5` (Core 0x10101532). `FRange::Size()` = max − min.
- `VRand()` (0x10603960): sorteia `v = (1−2f,1−2f,1−2f)` até `0.1 ≤ |v| ≤ 1`, devolve `v/|v|` (vetor unitário uniforme).
- `FUN_107a6660` = `_ftol` (**truncamento** em direção a zero). `FUN_107a7fda` = `fmod`. `FUN_10370460(x,a,b)` = `Clamp(x,a,b)`.
- Ângulos/rotações em unidades UE (65536 = 360°). Spin é pré-multiplicado por **65535** (não 65536) no spawn [O].

#### 4.0.3 Enums (valores numéricos) [O no .uc]
- `EParticleDrawStyle`: 0 Regular, 1 AlphaBlend, 2 Modulated, 3 Translucent, 4 AlphaModulate_MightNotFogCorrectly, 5 Darken, 6 Brighten.
- `EParticleCoordinateSystem`: 0 Independent, 1 Relative, 2 Absolute, 3 RelativeRotation, 4 Spray (3 e 4 são extensões).
- `EParticleParticleChoice` (L2): 0 PTWC_MaxParticle, 1 PTWC_ParticlePerSecond.
- `EParticleRotationSource`: 0 None, 1 Actor, 2 Offset, 3 Normal.
- `EParticleVelocityDirection`: 0 None, 1 StartPositionAndOwner, 2 OwnerAndStartPosition, 3 AddRadial.
- `EParticleStartLocationShape`: 0 Box, 1 Sphere, 2 Polar, 3 All.
- `EParticleEffectAxis`: 0 NegativeX, 1 PositiveZ.
- `EParticleCollisionSound`: 0 None, 1 LinearGlobal, 2 LinearLocal, 3 Random.
- `EParticleMeshSpawning`: 0 None, 1 Linear, 2 Random. `ESkelLocationUpdate`: 0 None, 1 SpawnOffset, 2 Location.
- `EParticleDirectionUsage` (Sprite): 0 None, 1 Up, 2 Right, 3 Forward, 4 Normal, 5 UpAndNormal, 6 RightAndNormal, 7 Scale.
- `EBeamEndPointType`: 0 Velocity, 1 Distance, 2 Offset, 3 Actor, 4 TraceOffset, 5 OffsetAsAbsolute.

#### 4.0.4 Defaults relevantes da classe (engine_defaults.json) [O]
ParticleEmitter: MaxParticles 10, CoordinateSystem 1 (Relative), RespawnDeadParticles true, AutomaticInitialSpawning true, DrawStyle 3 (Translucent), LifetimeRange 4..4, StartSizeRange 100, UseRegularSizeScale **true**, SpinCCWorCW (0.5,0.5,0.5), Opacity 1, FadeIn/OutFactor (1,1,1,1), ColorMultiplierRange 1, StartMassRange 1, MaxAbsVelocity 10000, AlphaTest true, ZTest true (ZWrite false), TriggerDisabled true, LevelOfWeather 2, SpawnFromOtherEmitter/AddLocationFromOtherEmitter/AddVelocityFromOtherEmitter −1. MeshEmitter: UseMeshBlendMode true, StartSizeRange 1. SpriteEmitter: ProjectionNormal (0,0,1). Emitter: SpeedRate 1.0, VisibilityInterpRange 500, bSetSizeScale true.

---

### 4.1 Inicialização do emissor

#### 4.1.1 `UParticleEmitter::Initialize(int N)` — 0x10311ddd [O]
```
Particles.Empty(); Particles.AddZeroed(N)          // elemento 0xE0
Reset()                                             // vfunc +0x70
RealExtentMultiplier = ExtentMultiplier
RealMeshNormal       = SafeNormal(MeshNormal)
MaxActiveParticles   = N
OpacityRatio         = 1.0
Initialized          = 1
WeatherSoundCheck    = 0      // bit0 de 0x134: é flag de runtime "som já tocando" (§6)
```
`USpriteEmitter::Initialize` (0x1030d6ed) [O]: chama o acima; `RealProjectionNormal = SafeNormal(ProjectionNormal)`; **`UniformSize = UniformSize || (UseDirectionAs == PTDU_None)`**.

#### 4.1.2 `Reset()` — 0x10302a3b [O]
```
ActiveParticles = 0; ParticleIndex = 0; OtherIndex = 0
AllParticlesDead = 0; WarmedUp = 0
Owner = NULL                     // reatribuído a cada Tick pelo AEmitter
InitialDelay  = InitialDelayRange.GetRand()
TimeTillReset = AutoResetTimeRange.GetRand()
```
Nota: Reset **não** zera PPSFraction nem desativa as partículas (os slots continuam com Flags antigos, mas como ActiveParticles=0 o laço de update não os visita) [O].

#### 4.1.3 `CleanUp()` — 0x1030f4bb [O]
`Particles.Empty(); ActiveParticles=0; ParticleIndex=0; OpacityRatio=1; Initialized=0`.

#### 4.1.4 `PostEditChange()` — 0x1030d8dc [O]
```
if (Particles.Num != MaxParticles || ResetAfterChange) { CleanUp(); Initialize(MaxParticles) }
if (UseCollisionPlanes) normaliza cada CollisionPlanes[i] (como FVector)
```
`USpriteEmitter::PostEditChange` (0x1030ca09): chama a base e **sempre** CleanUp()+Initialize(MaxParticles). `PostLoad` (0x10301d7a) chama `Initialize(MaxParticles)`.

#### 4.1.5 Quem chama Initialize em jogo [O] (AEmitter::Tick 0x10310f96, corpo 0x1060bf67)
A cada tick, para cada emissor não-Disabled: `if (!Initialized) Initialize(MaxParticles)`. Portanto a contagem de slots = `MaxParticles` (já modificado por ForcedMaxParticles/SetMaxParticles antes do primeiro tick, §6).

#### 4.1.6 InitialDelay [O] (Tick, corpo 0x1060bfb9)
```
if (InitialDelay != 0) {
   InitialDelay -= dtScaled            // dtScaled = dt * SpeedRate
   if (InitialDelay > 0) { anyDelayed = true; continue }   // emissor não atualiza nem renderiza partículas novas
   InitialDelay = 0
}
```
O `InitialDelay` é sorteado em Reset (uma vez por ciclo de vida/reset).

#### 4.1.7 Warmup [O] (Tick, corpo 0x1060c01d–0x1060c093, assembly)
```
if (!WarmedUp && WarmupTicksPerSecond != 0 && RelativeWarmupTime != 0) {
   W      = LifetimeRange.GetCenter() * RelativeWarmupTime     // segundos simulados
   dtw    = 1.0 / WarmupTicksPerSecond
   N      = ftol(WarmupTicksPerSecond * W)                     // truncado
   repeat N: UpdateParticles(dtw)
   WarmedUp = 1
}
```
Acontece depois do InitialDelay e da cópia de GlobalOffset, antes do update normal do frame.

#### 4.1.8 Disabled [O]
`Disabled` (0x134 bit7): o emissor é pulado no Tick (`(flags & 0x80) == 0` para entrar) e no Render. `AutoDestroy` do emissor liga `Disabled` quando todas as partículas morrem (§2.5). `execTrigger` com `TriggerDisabled` alterna Disabled (§7.4). `AEmitter::SetDisabled(bool, all, index)` (0x10302fcc) escreve o bit.

---

### 4.2 Spawn por tick (`UParticleEmitter::UpdateParticles(dt)` — 0x1030b81b, corpo 0x10605dd0)

Ordem exata no início de UpdateParticles [O]:
1. `BoundingBox.Init()`; `CurLifeTime += dt`; se `Owner == NULL` → retorna 0.
2. Clampa `AddLocationFromOtherEmitter`, `AddVelocityFromOtherEmitter`, `SpawnFromOtherEmitter` a `Owner.Emitters.Num−1` (se ≥0).
3. Skeletal (UseSkeletalLocationAs/SkeletalMeshActor): obtém juntas/normais em `MeshVertsAndNormals`.
4. Lógica de clima (WeatherEffect, §6.2).
5. Cálculo do PPS, spawn, partículas diferidas, laço de update.

#### 4.2.1 Taxa de spawn (PPS) [O]
```
if (ActiveParticles < MaxActiveParticles) {          // ainda há slots nunca usados
    if (!AutomaticInitialSpawning)
        PPS = InitialParticlesPerSecond   (× fator de clima se WeatherEffect && ParticleChoice==PTWC_ParticlePerSecond, §6.2)
    else
        PPS = MaxActiveParticles / LifetimeRange.GetCenter()
} else
    PPS = ParticlesPerSecond
if (CurrentSpawnOnTrigger != 0) PPS += SpawnOnTriggerPPS
if (PPS > 0 && !KillPending) PPSFraction = SpawnParticles(PPSFraction, PPS, dt)
```
**Importante:** `ActiveParticles` é a *marca d'água* de slots já usados (`max(ActiveParticles, ParticleIndex+1)`), **não** a contagem de vivas. Logo: a fase "inicial" dura até preencher `MaxActiveParticles` slots uma vez; depois usa-se `ParticlesPerSecond` (quase sempre 0 nos efeitos do L2) e os mortos só voltam via `RespawnDeadParticles`.

#### 4.2.2 `SpawnParticles(OldLeftover, Rate, dt)` — 0x10302775 [O]
```
if (Rate <= 0 || Owner == NULL) return 0
x       = OldLeftover + Rate*dt
Number  = floor(x);  NewLeftover = x − Number
inv     = 1/Rate
Number  = Clamp(Number, 0, MaxActiveParticles)
if (CurrentSpawnOnTrigger) { Number = Clamp(Number,0,CurrentSpawnOnTrigger); CurrentSpawnOnTrigger -= Number }
for i in 0..Number-1:
    SpawnTime = inv*OldLeftover + dt − inv − i*inv      // = tempo decorrido desde o "nascimento" dentro do frame
    if SpawnParticle(ParticleIndex, SpawnTime, Flags=4 /*InitialSpawn*/, SpawnFlags=0, (0,0,0)):
        ParticleIndex += 1
        ActiveParticles = max(ActiveParticles, ParticleIndex)
        ParticleIndex %= MaxActiveParticles
return NewLeftover
```
O slot `ParticleIndex` é sobrescrito **mesmo que a partícula ali ainda esteja viva** (buffer circular) [O].

#### 4.2.3 Partículas diferidas (script `SpawnParticle(Amount)`) [O]
`execSpawnParticle` (0x1030b050) faz `DeferredParticles += Amount`. Em UpdateParticles, se `!KillPending`: `n = Clamp(DeferredParticles, 0, MaxActiveParticles)`; para cada: `SpawnParticle(ParticleIndex, 0, 0, 0, 0)` + mesmo avanço circular; depois `DeferredParticles = 0`.

#### 4.2.4 Laço de update e morte [O]
Itera `i` em `[0, min(ActiveParticles, MaxActiveParticles))`:
```
if (!(Flags & Active)) { dead++; continue }
integrate = !(Flags & NoTick) || CoordinateSystem == PTCS_Relative
if (Flags & InitialSpawn) { integrate = false; Flags &= ~InitialSpawn }   // Time já contém SpawnTime
else Time += dt
if (Time > MaxLifetime) {
   if (RespawnDeadParticles) {
       t = (MaxLifetime == 0) ? 0 : fmod((Time − MaxLifetime) + InitialTimeRange.GetRand(), MaxLifetime)   // [O] __CIfmod(st1,st0), 0x10606393
       SpawnParticle(i, t, 0, 0, 0)        // respawn no mesmo slot, segue para colisão/cor/tamanho deste tick
   } else { Flags &= ~Active; dead++; continue }
}
... integração (§4)
```

#### 4.2.5 Fim de UpdateParticles: AllParticlesDead e valor de retorno [O]
```
MaxSizeScale = 1; if (UseSizeScale && !UseRegularSizeScale) MaxSizeScale = max(1, max_i SizeScale[i].RelativeSize)
if ((dead < MaxActiveParticles && ActiveParticles != dead) || PPS != 0 || RespawnDeadParticles)
     AllParticlesDead = 0
else AllParticlesDead = 1
return ActiveParticles − dead      // nº de vivas
```
(`SpawnParticle` também zera AllParticlesDead.)

#### 4.2.6 Inatividade (SecondsBeforeInactive) [O] (Tick, corpo 0x1060c09c)
```
if (!AllParticlesDead) {
   if (Inactive) InactiveTime += dtScaled else InactiveTime = 0
   if (SecondsBeforeInactive == 0 || InactiveTime <= SecondsBeforeInactive) UpdateParticles(dtScaled)
   ... sons (§6.3)
   Inactive = 1            // é zerado por RenderParticles (0x10301d89) quando o emissor é desenhado
   if (UseActorForces) HandleActorForce(...) para atores com força tocando o emissor
}
```
Ou seja, "Inactive" = não foi renderizado desde o último tick. Só 5 emissores do L2 usam SecondsBeforeInactive.

#### 4.2.7 AutoDestroy / AutoReset [O] (Tick)
Por emissor, quando `AllParticlesDead`:
```
if (!emitter.AutoReset || Emitter.AutoReset) {
    if (editor && Emitter.AutoReplay && ...) Reset()
    else if (emitter.AutoDestroy && !Emitter.AutoDestroy) emitter.Disabled = 1
} else {                                    // AutoReset do emissor, sem AutoReset global
    if (TimeTillReset − dtScaled <= 0) { TimeTillReset = AutoResetTimeRange.GetRand(); Reset() }
    else TimeTillReset −= dtScaled
}
```
Depois do laço (fora do editor), com `allDead` = nenhum emissor ativo-vivo neste tick e `someEnabled`:
```
if (allDead && someEnabled && Emitters.Num != 0 && Emitter.AutoDestroy && !anyDelayed) Level.DestroyActor(this)
else if (allDead && Emitter.AutoReset && !Emitter.AutoDestroy) {
    if (TimeTillReset − dtScaled <= 0) {
        GlobalOffset  = GlobalOffsetRange.GetRand(); TimeTillReset = TimeTillResetRange.GetRand()
        for each emitter: Reset(); FirstSpawnParticle = 0
    } else TimeTillReset −= dtScaled
}
```
Emissores ainda em InitialDelay contam como "atrasados" e impedem o AutoDestroy.

---

### 4.3 Spawn de cada partícula — `UParticleEmitter::SpawnParticle(Index, SpawnTime, Flags, SpawnFlags, LocalOffset)` — 0x103122ec (corpo 0x10604180) [O]

`SpawnFlags`: bit0 = não somar GlobalOffset; bit1 = não somar localização/velocidade do Owner (usado no spawn por colisão, valor 3).

Retorna 0 sem spawnar se `MaxParticles == 0 || Owner == NULL || KillPending || LifetimeRange.Max <= 0`.

Ordem exata:
```
P = Particles[Index]
P.Location = StartLocationOffset
P.Velocity = StartVelocityRange.GetRand()

// 3.1 forma inicial
if (Shape == Box || Shape == All)    P.Location += StartLocationRange.GetRand()
if (Shape == Sphere || Shape == All) P.Location += VRand() * SphereRadiusRange.GetRand()
if (Shape == Polar || Shape == All) {
    r = StartLocationPolarRange.GetRand()           // X = azimute (graus), Y = ângulo polar a partir de +Z (graus), Z = raio
    P.Location += ( r.Z*cos(X°)*sin(Y°),  r.Z*sin(X°)*sin(Y°),  r.Z*cos(Y°) )   // graus→rad com π/180
}

// 3.2 mesh spawning (MeshSpawningStaticMesh) — ver nota; ColorMultiplier = (1,1,1) antes
// 3.3 skeletal: BoneIndex = Clamp(ftol(RelativeBoneIndexRange.GetRand() ...), 0, nBones-1)  [I args]; se UseSkeletalLocationAs: OldMeshLocation = bone*SkeletalScale; Location += OldMeshLocation

// 3.4 AddLocationFromOtherEmitter
OtherIndex++
if (0 <= A < Owner.Emitters.Num && Other.ActiveParticles > 0) {
    Q = Other.Particles[OtherIndex % Other.ActiveParticles]
    P.Location += Q.Location
    if (Other.CoordinateSystem == Independent || Other.CoordinateSystem == Spray) P.Location −= Owner.Location
}

// 3.5 UseRotationFrom (rotaciona a posição local)
Actor  (1): P.Location = Rot(Owner.Rotation) ∘ Rot(RotationOffset) · P.Location     [I ordem exata da composição FCoords]
Offset (2): P.Location = Rot(RotationOffset) · P.Location
Normal (3): R = RotationNormal.Rotation(); if (EffectAxis == PositiveZ) R.Pitch −= 16384; P.Location = Rot(R) · P.Location

// 3.6 revolução
P.RevolutionCenter     = RevolutionCenterOffsetRange.GetRand()
P.RevolutionsPerSecond = RevolutionsPerSecondRange.GetRand()

// 3.7 sistema de coordenadas
switch CoordinateSystem:
  Independent(0): if (!(SpawnFlags&2)) P.Location += Owner.Location + SpawnTime*Owner.Velocity
                  P.RevolutionCenter += Owner.Location;  P.Acceleration = Acceleration
  Relative(1), Absolute(2): P.Acceleration = Acceleration         // posição fica em espaço local (Relative) ou absoluto (Absolute)
  RelativeRotation(3): como Independent + P.Rotation = Owner.Rotation; P.Acceleration = Acceleration
  Spray(4): P.RevolutionCenter += Owner.Location; P.Rotation = Owner.Rotation
            (P.Acceleration provisório; o valor final é escrito em 3.10)
if (!(SpawnFlags&1)) P.Location += GlobalOffset
P.Location += LocalOffset
P.OldLocation = P.StartLocation = P.Location

// 3.8 escalares
P.ColorMultiplier *= ColorMultiplierRange.GetRand()      // componente a componente (X→R, Y→G, Z→B)
P.MaxLifetime = LifetimeRange.GetRand()
P.Time        = InitialTimeRange.GetRand() + SpawnTime
P.HitCount = 0;  P.Flags = Flags | Active
P.Mass        = StartMassRange.GetRand()
P.StartSize   = StartSizeRange.GetRand();  if (UniformSize) P.StartSize.Y = P.StartSize.Z = P.StartSize.X
P.Size        = P.StartSize
P.Velocity   += P.Acceleration * SpawnTime
P.VelocityMultiplier = (1,1,1);  P.RevolutionsMultiplier = (1,1,1)

// 3.9 rotação da velocidade (mesmo UseRotationFrom de 3.5) e direção
UseRotationFrom Actor/Offset/Normal: P.Velocity = mesma rotação · P.Velocity
if (GetVelocityDirectionFrom != None) {
    if (CoordinateSystem == Relative || == Spray) dir = SafeNormal(P.Location)
    else                                          dir = SafeNormal(Owner.Location − P.Location)
    StartPositionAndOwner(1): P.Velocity = −P.Velocity * dir          // produto componente a componente!
    OwnerAndStartPosition(2): P.Velocity =  P.Velocity * dir          // idem
    AddRadial(3):             P.Velocity += dir * StartVelocityRadialRange.GetRand()
}
if (AddVelocityFromOtherEmitter válido && Other.ActiveParticles>0)
    P.Velocity += Other.Particles[OtherIndex % Other.ActiveParticles].Velocity * AddVelocityMultiplierRange.GetRand()

// 3.10 Spray
if (CoordinateSystem == Spray) {
    P.Location = Rot(Owner.Rotation)·P.Location
    if (!(SpawnFlags&2)) P.Location += Owner.Location + SpawnTime*Owner.Velocity
    P.Velocity = Rot(Owner.Rotation)·P.Velocity
    P.Acceleration = IndependentSprayAccel ? Acceleration : Rot(Owner.Rotation)·Acceleration   // [O] valor final; coerente com o comentário do .uc
}
P.Location += SpawnTime * P.Velocity
if (P.Mass != 0) P.Mass = 1/P.Mass                  // guarda massa inversa

// 3.11 spin
P.StartSpin      = StartSpinRange.GetRand()
P.SpinsPerSecond = SpinsPerSecondRange.GetRand()
for c in X,Y,Z: if (appFrand() < SpinCCWorCW.c) P.SpinsPerSecond.c *= −1
P.StartSpin *= 65535;  P.SpinsPerSecond *= 65535     // unidades UE (revoluções → 0..65535)

// 3.12 subdivisão (assembly 0x10605332)
if (!UseRandomSubdivision)      P.Subdivision = −1          // índice calculado no render pela idade
else if (SubdivisionEnd != 0)   P.Subdivision = ftol(frand*(SubdivisionEnd − SubdivisionStart) + SubdivisionStart)
else                            P.Subdivision = ftol(frand*TextureUSubdivisions*TextureVSubdivisions)

// 3.13 tempo inicial maior que a vida → respawn imediato
if (P.MaxLifetime < P.Time && P.MaxLifetime != 0) SpawnParticle(Index, fmod(P.Time, P.MaxLifetime), 0, 0, 0)   // [O] 0x106053df

// 3.14 som de spawn (SpawningSound/Sounds[]) — §6.3 ; AllParticlesDead = 0 ; return 1
```
Notas:
- O sinal do termo `SpawnTime*Owner.Velocity` é **positivo** [O: FUN_103301a0 = `out = s*v`]. Em UE2 público eu esperaria `−`, então isto é uma diferença real a reproduzir.
- `GetVelocityDirectionFrom` usa `dir` com sentidos opostos dependendo do sistema de coordenadas (Relative/Spray: do centro para fora; demais: da partícula para o dono). Reproduza literalmente.
- O ramo "mesh spawning" (`MeshSpawning`, `VelocityFromMesh`, `UseColorFromMesh`, `SpawnOnlyInDirectionOfNormal`) existe [O 0x10604370…] mas não aparece nos efeitos do L2 da amostra; omitido aqui.

---

### 4.4 Update por tick (continuação do laço de §2.4) [O, corpo 0x10606400–0x10607b80]

Sejam `dt` o delta (já × SpeedRate) e `P` a partícula.

#### 4.4.1 Integração (só se `integrate`)
```
P.Velocity    += P.Acceleration * dt                 // aceleração por partícula (copiada no spawn)
P.OldLocation  = P.Location
P.Location    += (P.VelocityMultiplier * P.Velocity) * dt      // componente a componente
if (skeletal UseSkeletalLocationAs == Location) { novo = bone*SkeletalScale; P.Location += novo − P.OldMeshLocation; P.OldMeshLocation = novo }
if (UseRevolution) {                                  // assembly 0x106065b6
    o  = P.Location − P.RevolutionCenter
    o  = RotateAngleAxis(o, ftol(P.RevolutionsMultiplier.X*P.RevolutionsPerSecond.X*dt*65535), (1,0,0))
    o  = RotateAngleAxis(o, ftol(P.RevolutionsMultiplier.Y*P.RevolutionsPerSecond.Y*dt*65535), (0,1,0))
    o  = RotateAngleAxis(o, ftol(P.RevolutionsMultiplier.Z*P.RevolutionsPerSecond.Z*dt*65535), (0,0,1))
    P.Location = o + P.RevolutionCenter
}
```

#### 4.4.2 Colisão (se `integrate` e CoordinateSystem != Relative) [O]
```
hit = false
if (UseCollision) {
   ext = SafeNormal(P.Location − P.OldLocation) * RealExtentMultiplier * P.Size     // comp. a comp.
   SingleLineCheck(OldLocation → Location+ext, TRACE flags 0x84)
   if (hit) { HitNormal = n; HitLocation = loc − ext }
}
if (!hit && UseCollisionPlanes) para cada plano: se sign(dist(Location)) != sign(dist(OldLocation)):
        HitLocation = interseção do segmento com o plano; HitNormal = normal do plano; hit = true
if (hit) {
   som de colisão (CollisionSound/Sounds/CollisionSoundIndex/Probability)
   if (UseMaxCollisions && P.HitCount+1 >= floor(MaxCollisions.GetRand())) {
        if (RespawnDeadParticles) SpawnParticle(i, dt*0.5, ...) else { Active=0; dead++; continue }   // [I] constante 0.5
   } else {
        P.Velocity −= Acceleration*dt*0.5            // usa a Acceleration do emissor
        P.Velocity  = MirrorByVector(P.Velocity, HitNormal)
        P.Velocity *= DampingFactorRange.GetRand()
        if (DampRotation) P.SpinsPerSecond *= RotationDampingFactorRange.GetRand()
        P.Location = P.OldLocation = HitLocation + HitNormal*0.01
        P.HitCount++
   }
   SpawnFromOtherEmitter: SpawnAmount partículas no outro emissor em HitLocation+0.01*HitNormal (SpawnFlags=3),
        com Velocity += HitNormal * UseSpawnedVelocityScale? SpawnedVelocityScaleRange.GetRand()
}
```
Colisão é rara nos efeitos do L2 (não aparece entre as propriedades mais usadas).

#### 4.4.3 Idade relativa [O]
```
RelTime = (MaxLifetime == 0) ? 0 : Clamp(Time / MaxLifetime, 0, 1)
```
(`Time` em segundos desde o nascimento, incluindo `InitialTimeRange`.)

#### 4.4.4 Interpolação genérica de tabelas (Size/Velocity/Revolution/Color) [O]
Todas seguem o mesmo esquema:
```
t = frac( (Repeats + 1) * RelTime )                 // appFractional; Repeats=0 → t = RelTime (exceto t=1 → 0!)
i = primeiro índice com t <= Table[i].RelativeTime
(prevT, prevV) = (i == 0) ? (0, valor_neutro) : Table[i−1]
a = (Table[i].RelativeTime == 0) ? 1 : (t − prevT) / (Table[i].RelativeTime − prevT)
valor = prevV + a*(Table[i].V − prevV)
se nenhum i satisfaz: a tabela não altera o valor deste tick
```
Atenção: com `Repeats = 0` e `RelTime = 1.0`, `frac(1.0) = 0` → usa o 1º ponto (efeito de borda real do original).
Valor neutro: tamanho 1.0; VelocityScale (1,1,1); RevolutionScale (1,1,1); cor **FColor(255,255,255,255)**.

#### 4.4.5 Tamanho [O]
```
s = 1.0
if (UseSizeScale) {
    if (!UseRegularSizeScale) { if (MaxLifetime != 0) s = interp(SizeScale, SizeScaleRepeats) }   // caso usado por 2.765 emissores
    else s = 1.0 / (Time + 1.0)                                                                       // UseRegularSizeScale=true (default!)
}
P.Size = s * P.StartSize
```
Observação de dados: o default da classe é `UseRegularSizeScale=true`; os efeitos que usam tabela gravam `UseRegularSizeScale=False` explicitamente. Emissores com `UseSizeScale=True` sem esse override (54) encolhem por `1/(Time+1)`.

#### 4.4.6 VelocityScale e RevolutionScale [O]
`if (UseVelocityScale && MaxLifetime != 0) P.VelocityMultiplier = interp(VelocityScale, VelocityScaleRepeats)` (lerp vetorial FUN_10535750).
`if (UseRevolutionScale && MaxLifetime != 0) P.RevolutionsMultiplier = interp(RevolutionScale, RevolutionScaleRepeats)`.
Valem a partir do **próximo** tick (a integração já ocorreu).

#### 4.4.7 Cor, fade e opacidade [O] (ordem exata)
```
C = (255,255,255,255)
if (UseColorScale && MaxLifetime != 0) {
    interp ColorScale; R,G,B = round(prev + a*(next − prev))
    A = (DrawStyle == AlphaBlend) ? round(prevA + a*(nextA − prevA)) : 255
}
C.R = round(C.R * P.ColorMultiplier.X); C.G = round(C.G * CM.Y); C.B = round(C.B * CM.Z)    // alpha não é multiplicado

fadeOut = FadeOut && FadeOutStartTime < Time && FadeOutStartTime != MaxLifetime
fadeIn  = FadeIn  && Time < FadeInEndTime   && FadeInEndTime != 0
if (fadeOut || fadeIn) {
    if (fadeOut) { f = (Time − FadeOutStartTime) / (MaxLifetime − FadeOutStartTime); F = FadeOutFactor }   // fade-out tem prioridade
    else         { f = (FadeInEndTime − Time) / FadeInEndTime;                    F = FadeInFactor  }
    k = f * 255
    switch DrawStyle:
      Modulated(2):  C = (127,127,127, 255 − round(F.W*k))       // RGB substituído por cinza neutro
      AlphaBlend(1): C.A = Clamp(C.A − F.W*k, 0, 255)
      default:       C.R = Clamp(C.R − F.X*k,0,255); C.G = Clamp(C.G − F.Y*k); C.B = Clamp(C.B − F.Z*k); C.A = Clamp(C.A − F.W*k)
}
P.Color = C
o = OpacityRatio * Opacity
if (o < 1 && DrawStyle != Regular) {
    if (DrawStyle ∈ {AlphaBlend, Modulated, AlphaModulate}) P.Color.A = round(P.Color.A * o)
    else /* Translucent, Darken, Brighten */          P.Color.RGB = round(P.Color.RGB * o)
}
```
- `FadeOutStartTime`/`FadeInEndTime` estão em **segundos absolutos** de vida, não relativos [O].
- Em estilos aditivos (Translucent/Brighten/Darken) o fade escurece RGB → equivale a transparência.

#### 4.4.8 Bounding box [O]
Independent/Absolute/Spray: `BoundingBox += P.Location`. Relative e RelativeRotation: `BoundingBox += Owner.Location + Rot(Owner.Rotation)·P.Location`. (`USpriteEmitter::UpdateParticles` 0x1030405c expande pela maior dimensão de StartSizeRange × MaxSizeScale.)

#### 4.4.9 Limite e perda de velocidade (sempre, mesmo sem integrate) [O]
```
for c in X,Y,Z: if (MaxAbsVelocity.c != 0) P.Velocity.c = Clamp(P.Velocity.c, −MaxAbsVelocity.c, MaxAbsVelocity.c)
L = VelocityLossRange.GetRand()                   // sorteado POR PARTÍCULA, POR TICK
if (CoordinateSystem == Spray && !IndependentSprayAccel)
     P.Velocity −= Rot(P.Rotation) · ( L * (Rot(P.Rotation)^-1 · P.Velocity) * dt )
else P.Velocity −= L * P.Velocity * dt            // comp. a comp. (decaimento linear; dt grande pode inverter o sinal)
if (hit && MinSquaredVelocity != 0 && |P.Velocity|² < MinSquaredVelocity) P.Flags |= NoTick
UpdateParticle(dt, i)                              // hook virtual (vazio na base; Trail/Spark usam)
```
Ordem final por partícula: Accel→Location→Revolução→Colisão→RelTime→Size→VelocityScale→RevolutionScale→Cor/Fade/Opacity→BBox→MaxAbsVelocity→VelocityLoss.

#### 4.4.10 Spin [O] (aplicado no render, §5.2)
`ang = round(SpinsPerSecond.X * Time + StartSpin.X) & 0xFFFF` se `SpinsPerSecond.X ≥ 0`; senão `ang = 0xFFFF − (round(StartSpin.X − SpinsPerSecond.X*Time) & 0xFFFF)`. Sprite usa só o componente X. (Mesh usa X,Y,Z → Rotator, ver §5.4.)

#### 4.4.11 Forças de atores (UseActorForces) — `HandleActorForce` 0x10310d93 [O]
Para ator com `ForceType==1` (0x35c) e `ForceRadius` (0x360) > 0: para cada partícula ativa com Mass≠0 dentro do raio: `dir = SafeNormal(P.Location − A.Location)` (sinal invertido se dir·A.Velocity ≤ 0); `s = (|A.Velocity| − dir·P.Velocity) * R² * ForceScale(0x364)`, se `s>0`: `s *= (P.Y−A.Y)*(P.Z−A.Z)` [sic] e `P.Velocity += s*dir`; `Flags &= ~NoTick`. Usado por 31 emissores.

---

### 4.5 Render

#### 4.5.1 Estado de material comum (UParticleMaterial do AEmitter) [O]
`USpriteEmitter::RenderParticles` (0x10306d2f) preenche `Owner.ParticleMaterial`: `+0x578 DrawStyle`, `+0x588 Texture` (0 se o viewport está no modo 7), `+0x58c..0x594 Refraction/RefrUScale/RefrVScale`, `+0x57c = BlendBetweenSubdivisions && !UseRandomSubdivision`, `+0x580 = 1` (two-sided), `+0x584 = 0`, `+0x598 AlphaTest`, `+0x59c AlphaRef`, `+0x5a0 ZTest`, `+0x5a4 ZWrite`, `+0x5ac AcceptsProjectors`, `+0x5a8 wireframe`. Transformação local→mundo: `Translate(Owner.Location)·Rotate(Owner.Rotation)` **somente** se CoordinateSystem == Relative; senão identidade. Desenho: lista indexada, 4 vértices / 2 triângulos por partícula ativa. Também passa `CurLifeTime` ao render interface (tempo para shader).

**DrawStyle → blending D3D** (D3DDrv `FUN_100273d0`, switch em `ParticleMaterial+0x578`) [O]:

| DrawStyle | SrcBlend | DestBlend | AlphaBlendEnable | Cor de fog forçada | Equivalente Unity |
|---|---|---|---|---|---|
| 0 Regular | ONE | ZERO | 0 | — | `Blend One Zero` (opaco, alpha-test) |
| 1 AlphaBlend | SRCALPHA | INVSRCALPHA | 1 | — | `Blend SrcAlpha OneMinusSrcAlpha` |
| 2 Modulated | DESTCOLOR | SRCCOLOR | 1 | (127,127,127) | `Blend DstColor SrcColor` (modulate 2×) |
| 3 Translucent | ONE | ONE | 1 | preto | `Blend One One` (aditivo) |
| 4 AlphaModulate | ONE | INVSRCALPHA | 1 | preto | `Blend One OneMinusSrcAlpha` (pré-multiplicado) |
| 5 Darken | ZERO | INVSRCCOLOR | 1 | preto | `Blend Zero OneMinusSrcColor` |
| 6 Brighten | ONE | INVSRCCOLOR | 1 | preto | `Blend One OneMinusSrcColor` (screen) |

ZWrite/ZTest/AlphaTest/AlphaRef vêm das flags do emissor (defaults: ZTest on, ZWrite off, AlphaTest on, AlphaRef 0) [O]. Cor de vértice = `P.Color` (modulada pela textura) [I: combinador de textura não lido]. Uso nos dados: Translucent (default, implícito) domina; AlphaBlend 488, Brighten 471, Darken 253, Regular 32.

#### 4.5.2 SpriteEmitter — `FillVertexBuffer` 0x1030a880 (corpo 0x106f0300) [O]
Eixos de câmera [O constantes −1000/1000 em 0x108cb134/0x108a07b4; nomes Up/Right [I]]: `Up = normalize(Deproject(0,−1000,0,1) − Deproject(0,0,0,1))`, `Right = normalize(Deproject(1000,0,0,1) − Deproject(0,0,0,1))`, `Fwd = normalize(Up × Right)`; em Relative, transformados para o espaço local do Owner. `PN = RealProjectionNormal` (rotacionado por Owner.Rotation se UseRotationFrom == Actor).

Por partícula ativa:
```
dir = (UseDirectionAs == Normal) ? PN : normalize(P.Location − P.OldLocation)       // direção de movimento
side (Up/Right):            normalize(dir × (P.Location − CamPos))
side (UpAndNormal/RightAndNormal): dir × PN
switch UseDirectionAs:
  None(0):           A = Size.X*Up,   B = Size.X*Right          // quadrado (UniformSize forçado)
  Up(1)/UpAndNormal(5):    A = Size.Y*dir,  B = Size.X*side
  Right(2)/RightAndNormal(6): A = Size.Y*side, B = Size.X*dir
  Forward(3)/Normal(4): base ortonormal a partir de dir (GetNonParallel + produtos vetoriais), plano perpendicular a dir, tamanhos Size.Y/Size.X   [I detalhes: pseudocódigo confuso]
  Scale(7):          A = Size.Y*Up,   B = Size.X*Right
if (SpinParticles) { A,B = RotateAngleAxis(A/B, ang(§4.10), eixo = Fwd) }
vértices (pos, cor, UV0, UV1):
  v0 = P − A − B   (u0, v1)      v1 = P − A + B   (u1, v1)
  v2 = P + A − B   (u0, v0)      v3 = P + A + B   (u1, v0)
```
`Size` aqui é o "raio" (meia-largura): o quad tem lado `2*Size`.

**UV por subdivisão** (U = TextureUSubdivisions, V = TextureVSubdivisions, `du = 1/U`, `dv = 1/V`) [O, assembly 0x106f099e–0x106f0c41]:
```
if (U == 0 || V == 0)  UV = (0,0)-(1,1)
else if (P.Subdivision != −1)  idx = P.Subdivision             // aleatória fixa
else if (MaxLifetime != 0) {
    N = U*V
    if (UseSubdivisionScale) idx = primeiro j com RelTime <= SubdivisionScale[j]
    else if (SubdivisionEnd == 0) idx = floor(N * RelTime)
    else idx = floor(max(1, SubdivisionEnd − SubdivisionStart) * RelTime) + SubdivisionStart
    idx = Clamp(idx, 0, N−1)
}
u0 = du * (idx / V)      v0 = dv * (idx % V)        // ATENÇÃO: divide e tira o resto por V (ordem "por coluna")
u1 = min(u0 + du, 1)     v1 = min(v0 + dv, 1)
```
Formato do vértice confirmado por `FSpriteParticleVertexStream::GetComponents` (0x106f1a00) [O]: `{Float3 Position, Color Diffuse, Float2 TexCoord0, Float2 TexCoord1}`, stride 0x20 → o 1º float do par é o U de textura. Logo o índice percorre a folha **coluna por coluna** (idx 1 = célula abaixo da 0) quando `U == V` (caso de quase todos os efeitos, ex.: 4×4). Isso pressupõe que `A` (eixo de `Deproject(0,−1000)`) é o "Up" da tela (textura em pé); ver Lacunas.

**BlendBetweenSubdivisions** (somente quando Subdivision == −1): UV1 = célula `idx+1` (ou a mesma se `idx+1 == N`); fator `b = frac(RelTime*N)` (ou fração dentro do segmento de SubdivisionScale); **o alpha da cor do vértice é substituído por `round(b*255)`** e o material faz lerp(tex(UV0), tex(UV1), alpha). Portanto, com blend ligado, o alpha da partícula não chega ao blending [O].

No OpenGL a cor é trocada para RGBA (swizzle) [O].

#### 4.5.3 Visibilidade/LOD do AEmitter::Render (0x1030371f) [O]
`d = |ViewTarget.Location − Emitter.Location|`.
- Se `VisibleLimit` (range) ≠ 0: desenha só se `Min ≤ d ≤ Max`; `edge = min(d − Min, Max − d)`; se `VisibilityInterpRange > 0`: `OpacityRatio = min(edge / VisibilityInterpRange, 1)` aplicado a todos os emissores.
- Senão: não desenha se `d > GL2ActorCR * 32768 * 0.0625` (= 2048 × fator de distância de atores das opções).
- Emissores com `WeatherEffect` só desenham se a hora do jogo `h*100 + m + s/100` estiver em algum `WeatherRangeTime[k]` (`Min < t < Max`; limites conforme pseudocódigo).
- Emissores Disabled não desenham.

#### 4.5.4 MeshEmitter — `RenderParticles` 0x10311833 [O]
Só desenha se `StaticMesh != NULL` e BoundingBox válido. Luz: se `UseMeshBlendMode` e o viewport é "lit", usa iluminação dinâmica/ambiente do nível.
- `UseMeshBlendMode = false`: força o `ParticleMaterial` com DrawStyle do emissor, textura do material da seção, `+0x580 = RenderTwoSided`, `+0x584 = 1`, AlphaTest/Ref/ZTest/ZWrite do emissor (mesmo blending da tabela 5.1).
- `UseMeshBlendMode = true`: usa o material próprio da malha; se `UseParticleColor`, envolve num material modificador de cor (global `DAT_10c78c44`) para aplicar `P.Color`.
- `Initialize` (0x10312ee5): `MeshExtent = max(|BBox.Min−C|,|BBox.Max−C|)` da StaticMesh; `RealExtentMultiplier = MeshExtent * ExtentMultiplier`. `Reset` (0x1031018b): material por seção = `Owner.GetSkin(s)` → `StaticMesh.Materials[s]` → default.
- Spin por partícula [O 0x105e7a34]: `Pitch = ftol(SpinsPerSecond.Y*Time + StartSpin.Y)`, `Yaw = ftol(SpinsPerSecond.X*Time + StartSpin.X)`, `Roll = ftol(SpinsPerSecond.Z*Time + StartSpin.Z)` (só se SpinParticles).
- Matriz (vetor-linha, aplicada da esquerda para a direita) [O]:
  - Relative(1): `T(−Owner.PrePivot) · S(P.Size) · R(spin) · T(P.Location) · R(Owner.Rotation) · T(Owner.Location)`
  - Spray(4): `T(−PrePivot) · S(P.Size) · R(P.Rotation) · R(spin) · T(P.Location)` (usa a rotação do dono gravada no spawn)
  - demais: `T(−PrePivot) · S(P.Size) · R(spin) · T(P.Location)`
  - `UseRotationFrom`/`RotationOffset` não são lidos no render do mesh.
- Cor: sempre enviada por partícula — com L2Shader como constante `tFactor = P.Color/255`; sem shader via `SetTransform` + cor (TFactor). Com `UseMeshBlendMode=false` o ParticleMaterial usa `+0x584 = 1` (modulação pelo TFactor [I]). Logo em Unity: multiplicar a cor do material pela cor da partícula (MaterialPropertyBlock / instancing).
- Tamanho do mesh = `P.Size` (StartSizeRange × SizeScale) como escala direta (defaults de MeshEmitter: StartSizeRange 1).

#### 4.5.5 BeamEmitter (29 emissores) [O salvo indicação; corpo 0x10535xxx–0x10537xxx]
Offsets: 0x4d0 BeamDistanceRange, 0x4d8 BeamEndPoints[] (ActorTag, Offset rangevector, Weight; 0x20 B), 0x4e4 DetermineEndPointBy, 0x4e8/0x4ec BeamTextureU/VScale, 0x4f0 RotatingSheets, 0x4f4 TriggerEndpoint, 0x4f8 LowFrequencyNoiseRange, 0x510 LowFrequencyPoints (LF, default 3), 0x514 HighFrequencyNoiseRange, 0x52c HighFrequencyPoints (HF, default 10), 0x530/0x53c LF/HFScaleFactors[] (FrequencyScale vec, RelativeLength), 0x548/0x54c LF/HFScaleRepeats, 0x550 b0 UseHighFrequencyScale b1 UseLowFrequencyScale b2 NoiseDeterminesEndPoint, 0x554 DynamicHFNoiseRange, 0x56c DynamicHFNoisePointsRange, 0x574 DynamicTimeBetweenNoiseRange, 0x57c UseBranching, 0x580 BranchProbability, 0x588 BranchHFPointsRange, 0x590 BranchEmitter, 0x594 BranchSpawnAmountRange, 0x59c LinkupLifetime, 0x5b4 HFPoints[] (Location,t), 0x5c0 LFPoints[], 0x5cc HitActors[], 0x5d8 TimeSinceLastDynamicNoise.

**Initialize** (0x10305272): `S = RotatingSheets==0 ? 1 : RotatingSheets`; `VPP = HF*S*2`, `IPP = (HF−1)*S*6`, `PPP = (HF−1)*S*2`; `HFPoints.Add(HF*MaxParticles)`, `LFPoints.Add(LF*MaxParticles)`; UpdateActorHitList [I]. **Scale(f)**: Offsets, BeamDistanceRange, LF/HF noise ×f.

**UpdateParticles** (0x1030b9c9): `BeamValueSum = Σ Weight`; clampa BranchEmitter; `Super::UpdateParticles(dt)`; `TimeSinceLastDynamicNoise += dt`. Os pontos do feixe **não** são recalculados no update (fixos desde o spawn; só o ruído dinâmico os altera). BBox = união de HF[0] e HF[HF−1] (+Owner em Relative), expandido por `StartSizeRange.X.Max*MaxSizeScale*(max|HFNoise| + max|LFNoise|)`.

**SpawnParticle** (0x103142ea) — após o spawn base:
1. Endpoint (modos 2..5): `r = frand*BeamValueSum`, escolhe o 1º i com `acc < r ≤ acc+W_i`; senão idx 0 (ou −1 se vazio).
2. `Delta` (relativo a P.Location), `EndAbs`, `snap`:
   - 0 Velocity: `Delta = P.Velocity*P.MaxLifetime`; snap 0.
   - 1 Distance: `P.Velocity = Normalize(P.Velocity)` (altera a partícula); `Delta = P.Velocity*BeamDistanceRange.GetRand()`; snap 0.
   - 2 Offset: `Delta = Offset[idx].GetRand(); EndAbs = P.Location+Delta`; snap 1.
   - 3 Actor: `A = HitActors[idx]`: `Delta = A.Location − Owner.Location` (relativo ao **Owner**); `EndAbs = A.Location`; se TriggerEndpoint, `A.Trigger(Owner)` a cada spawn; snap 0. HitActors resolvidos por nome (`ActorTag` comparado ao nome do objeto) em UpdateActorHitList.
   - 4 TraceOffset: como Offset + `SingleLineCheck(P.Location→EndAbs)`; se bater, `EndAbs = HitLocation`; snap 1.
   - 5 OffsetAsAbsolute: `EndAbs = Offset.GetRand(); Delta = EndAbs − P.Location`; snap 1.
   - `NoiseDeterminesEndPoint` → snap 0.
3. LF: `LF[0] = P.Location`; para i=1..LF−1: `nL = UseLowFrequencyScale ? HighFrequencyNoiseRange.GetRand() ⊙ interp(LFScaleFactors, frac(i/LF*(LFScaleRepeats+1))) : LowFrequencyNoiseRange.GetRand()` (**bug original: o ramo com escala usa o range HF**); `LF[i] = P.Location + Delta*(i/(LF−1)) + nL`; se snap, `LF[LF−1] = EndAbs`.
4. HF: `HF[0] = (LF[0], t=0)`; para j=1..HF−1: `nH` análogo (HighFrequencyNoiseRange, HFScaleFactors/HFScaleRepeats com `frac(j/HF*(Rep+1))`); interpolação linear por partes entre LF consecutivos com parâmetro `u = (LF−1)*acc` (acc avança `1/(HF−1)` e volta `1/(LF−1)` ao trocar de segmento); `HF[j] = lerp(LF[c],LF[c+1],u) + nH`, `t = j/(HF−1)`; se snap, `HF[HF−1].Loc = EndAbs`.
5. Branching (por HF[j], antes do snap): se UseBranching, `BranchHFPointsRange.Min < j < Max` e `frand ≤ BranchProbability.GetRand()`: spawna `ftol(BranchSpawnAmountRange.GetRand())` partículas em `Emitters[BranchEmitter]` com `SpawnFlags=3` e `LocalOffset = HF[j].Loc`; se LinkupLifetime copia Time/MaxLifetime do pai.

**Ruído dinâmico** (no Render): `T = DynamicTimeBetweenNoiseRange.GetRand()`; `k = (T≠0) ? ftol(TimeSinceLastDynamicNoise/T) : 1`; `TimeSinceLastDynamicNoise = fmod(…, T)` (por partícula; a 1ª consome o acumulador). Para cada sheet e j com `Min < j < Max` (DynamicHFNoisePointsRange): `HF[j].Loc += DynamicHFNoiseRange.GetRand()*k` — **cumulativo** (random walk) e aplicado S vezes por frame.

**Render** (0x10313057): sem Texture não desenha. Vértice {Pos, Color, U, V}; cor única por partícula (`P.Color`). Para cada sheet s: `prev = 2*HF[0] − HF[1]`; para cada j: `d = HF[j] − prev`; `side = Normalize(d × (prev − Cam))`; se s≠0 `side = RotateAngleAxis(side, (32768/S)*s, Normalize(d))` (sheets espalhados em 180°); `side *= P.Size.X`; vértices `HF[j] ± side` com `U = BeamTextureUScale*HF[j].t`, `V = 0` / `BeamTextureVScale`. Triângulos (b,b+1,b+2),(b+1,b+3,b+2). Mesmo ParticleMaterial/DrawStyle da tabela 5.1; Relative usa a matriz do Owner.

#### 4.5.6 RibbonEmitter (1 emissor) [O, corpo 0x10692d10–0x10694f00]
Offsets do Ribbon (o parser do .uc havia errado a struct; corretos): 0x4d0 SampleRate, 0x4d4 DecayRate, 0x4d8 NumPoints, 0x4dc AccDrop, 0x4e0 PointsDropRate, 0x4e4 ThresholdTime, 0x4e8 MinPoints, 0x4ec ThresholdTime2, 0x4f0 RibbonWidth, 0x4f4 GetPointAxisFrom, 0x4f8 AxisNormal, 0x504 MinSampleDist, 0x508 MinSampleDot, 0x50c PointOriginOffset, 0x510/0x514 RibbonTextureU/VScale, 0x518 NumSheets, 0x51c SheetScale[], 0x528/0x534 Start/EndBoneOffset, 0x540/0x544 BoneNameStart/End, 0x548 RibbonPoints[] (0x34 B: Location, LocationUnder, MovingDirection, MovingDirectionUnder, Width), 0x554 bUseInterpolation, 0x558 CntrPoints, 0x55c ScaleRatio, 0x560 bits (0 bSamplePoints,1 bDecayPoints,2 bDecayPointsWhenStopped,3 bSyncDecayWhenKilled,4 bLengthBasedTextureU,5 bUseSheetScale,6 bUseBones,7 bUseBoneDistance), 0x564 SampleTimer, 0x56c RealSampleRate, 0x574 SheetsUsed, 0x578 LastSampledPoint, 0x5ac bKilled/bDecaying.
- `PostLoad`/`PostEditChange` forçam `MaxParticles = 1`: a partícula 0 só carrega tempo de vida, cor e tamanho do rastro. `Initialize`: `RealSampleRate = SampleRate`, `SampleTimer = SampleRate`, `SheetsUsed = max(NumSheets,1)`. `SpawnParticle`: se bSamplePoints, esvazia RibbonPoints.
- **Pontos só vêm de bones** (`GetNewRibbonPoint` 0x10306f23): exige bUseBones + SkeletalMesh no Owner + BoneNameStart/End válidos e `GetPointAxisFrom == BoneNormal(3)`; os modos OwnerX/Y/Z, StartBoneDirection e AxisNormal **não geram pontos** neste build. `S = bone(Start) + rot(bone)·StartBoneOffset`, `E` idem; `dir = SafeNormal(E−S)`; em Relative (único caso coerente): `L = InvRot(A.Rotation)·(S−A.Location)`, `dir` idem (+RotationOffset), `Under = L − PointOriginOffset*RibbonWidth*dir`, `Loc = L + (1−PointOriginOffset)*RibbonWidth*dir`.
- Update: índice 0 = cabeça (reescrita todo frame); a cada `SampleTimer ≥ RealSampleRate` insere amostra no índice 1 se `Dist(Last.Under,Under)+Dist(Last.Loc,Loc) ≥ MinSampleDist`, senão (bDecayPoints) remove o mais velho. Parado/Kill: se bDecayPointsWhenStopped remove um ponto a cada RealSampleRate (bSyncDecayWhenKilled: `RealSampleRate = (MaxLifetime−Time)/(Num−1)`). `MinSampleDot`, `AxisNormal`, `DecayRate` não são lidos.
- Interpolação (bUseInterpolation): tangentes `(Loc − pt[3].Loc)/ScaleRatio`; insere `CntrPoints−1` pontos Hermite `(2α³−3α²+1)P0 + (α³−2α²+α)T0 + (−2α³+3α²)P1 + (α³−α²)T1`.
- AccDrop (todo frame): se `Num ≥ MinPoints+PointsDropRate` e (BYPOINT e `Num ≥ NumPoints` ou BYTIME/DUAL e `P0.Time ≥ ThresholdTime`): `NumPoints −= PointsDropRate` (**altera a propriedade**); senão DUAL e `Time ≥ ThresholdTime2`: `NumPoints −= 1`; depois trunca a `NumPoints`.
- Render: largura efetiva = `RibbonWidth` (GetPointScale/GetGlobalScale/SheetScale calculados e **descartados**); cor única `P0.Color`; 2 vértices por ponto (topo = Location, V=0; base = LocationUnder, V=RibbonTextureVScale); `U = RibbonTextureUScale * clamp((i+frac)/(Num−1))` com `frac = SampleTimer/RealSampleRate` (ajustes de deslize nas pontas em decay/crescimento), ou acumulado por comprimento com bLengthBasedTextureU; triângulos (2q,2q+1,2q+2),(2q+1,2q+3,2q+2); SheetsUsed draws idênticos; Relative usa a matriz do dono; two-sided.

#### 4.5.7 VertMeshEmitter (36 emissores) [O, 0x10309958 etc.]
- Offsets: 0x4d0 VertexStreams, 0x4dc IndexBuffer, 0x4e8 AnimFrame[], 0x4f4 AnimRate[], 0x500 StartAnimFrame[], 0x50c VertexMesh, 0x510 UseMeshBlendMode/RenderTwoSided/UseParticleColor, 0x514 MeshExtent.
- `SpawnParticle`: cria stream de vértices por slot; `MeshInstance.PlayAnim(canal 0, sequência = nome do próprio VertexMesh, Rate = AEmitter.SpeedRate, tween 0, loop)`; `AnimFrame[idx] = 0`.
- `UpdateParticles`: para cada slot, carrega `AnimFrame[i]` na instância compartilhada, avança a animação por `dt` e salva de volta → cada partícula tem sua fase, começando em 0 no nascimento. **`AnimRate` e `StartAnimFrame` nunca são lidos.**
- Render: gera os vértices do frame atual por partícula (interpolação da instância [I]) e usa a mesma matriz/material/cor do MeshEmitter (§5.4). Em Unity: um `Animator`/vertex-animation por partícula com tempo = idade × taxa da sequência, em loop.

---

### 4.6 Extensões do L2

#### 4.6.1 ForcedLifeTime / ForcedFade / ForcedMaxParticles — duração de cast [O]
Chamadas por código C++ de skill: `USkillVisualEffect::TriggerCasting` (`AdjustparticleLife(castTime + 0.2)`, ou `castTime − 0.4667` para um tipo; `FixedLifeTime` do Emitter, se ≠ 0, tem prioridade), `TriggerChanneling`, `APawn::SkillEffectInit` (`AdjustparticleLife(Pawn.CastTime@0x514)`), `SpawnNTransientEffect` (`AdjustparticleLife(8.0)`), `ANCubics` (2.0 ou 1.8).

`AEmitter::AdjustparticleLife(L)` (0x1031205d) = `SetParticleLifeTimeRange(L)` + `SetParticleMaxParticles(L)`:
```
SetParticleLifeTimeRange(L):                         // 0x10302810 (corpo 0x10608e00)
   M = max over emitters with ForcedLifeTime of LifetimeRange.Max
   delta = L − M
   EL_LifeSpan += delta                               // luz do emissor também estica
   for e with ForcedLifeTime: e.LifetimeRange.Min += delta; e.LifetimeRange.Max += delta
                              if (e.ForcedFade) e.FadeOutStartTime += delta
SetParticleMaxParticles(L):                          // 0x10310681 (corpo 0x10608f40), assembly
   for e with ForcedMaxParticles:
       e.MaxParticles = ftol( (L − e.LifetimeRange.GetCenter()) * ftol(e.InitialParticlesPerSecond) )
```
Interpretação: emissores "contínuos" (ForcedMaxParticles, normalmente sem ForcedLifeTime) recebem slots suficientes para emitir a IPPS durante `L − vida_média` segundos; emissores ForcedLifeTime têm a vida esticada para durar o cast; ForcedFade desloca o início do fade-out junto. Como Initialize só ocorre no 1º tick, isto deve ser chamado logo após spawnar o ator. Contagens nos dados: ForcedMaxParticles 467, ForcedFade 319, ForcedLifeTime 303.

#### 4.6.2 LevelOfWeather / CheckLevelOfWeather / ParticleChoice / WeatherEffect [O] (UpdateParticles, corpo 0x10605f20–0x106060de)
`level = GIsEditor ? LevelOfWeather : GL2LevelOfWeather` (global ajustado pela UI de opções, nwindow `00008.c:14195`). `CheckLevelOfWeather` guarda o nível já aplicado. Só vale para emissores com `WeatherEffect`:
```
if (CheckLevelOfWeather != level) Initialize( level==0 ? 0 : level==1 ? MaxParticles/2 : level==3 ? MaxParticles*2 : MaxParticles )
if (ParticleChoice == PTWC_MaxParticle) {
    MaxActiveParticles = level==0 ? 0 : level==1 ? MaxParticles/2 : level==3 ? MaxParticles*2 : MaxParticles
    CheckLevelOfWeather = level
} else /* PTWC_ParticlePerSecond, na fase inicial */
    IPPS_efetivo = level==0 ? 0 : level==1 ? 0.5*IPPS : level==3 ? 2*IPPS : IPPS ;  CheckLevelOfWeather = level
```
Escala: 0 = desligado, 1 = metade, 2 = normal (default), 3 = dobro. Não há uso de WeatherEffect/ParticleChoice no `lineageeffect.u` (efeitos de clima ficam em mapas/outros pacotes).

#### 4.6.3 WeatherSoundCheck e sons [O] (AEmitter::Tick)
- `WeatherSoundCheck` (0x134 bit0) é **flag de runtime**: zerado em Initialize; `CheckFirstSpawnParticle` (0x1031067c) liga-o no primeiro emissor com partículas e marca `Emitter.FirstSpawnParticle`; então toca cada `SpawnSound[k]` do AEmitter (se SoundRadius e SoundVolume ≠ 0) com `volume = SoundVolume/255`, `raio = SoundRadius`, `pitch = SoundPitchMin + (Max−Min)*frand`, looping se SoundLooping (slot 2). O valor salvo no pacote (489 emissores com True) é irrelevante.
- Para `WeatherEffect`: em jogo, hora `t = h*100 + m + s/100`; se `t` dentro de algum WeatherRangeTime → toca o som em loop (marca bit0); se saiu de todos → para o som e limpa o bit.

#### 4.6.4 SubdivisionScale / UseSubdivisionScale [O]
Tabela de limiares de RelTime para cada célula (substitui a divisão linear) — §5.2. Só 2 emissores usam.

#### 4.6.5 Outros setters L2 do AEmitter [O]
- `SetSpeedRate(r)` (0x10303639): `SpeedRate = r`; o Tick usa `dt*SpeedRate` para InitialDelay, UpdateParticles, timers e rotação (velocidade de animação de skill).
- `SetSpeedScale(s)` (0x10313ca0; s≤0 → 0.001): por emissor `LifetimeRange /= s`, `IPPS *= s`, `Acceleration *= s²`, `FadeInEndTime /= s`, `FadeOutStartTime /= s`, `SpinsPerSecondRange *= s`, `StartVelocityRange *= s`, `MinSquaredVelocity *= s`, `MaxAbsVelocity.X *= s` **duas vezes** (bug: .Y não é escalado), `MaxAbsVelocity.Z *= s`, `VelocityLossRange *= s`; Spark: `TimeBetweenSegmentsRange /= s`. Usado por AL2Float::Tick (1.0/2.0).
- `SetSizeScale(f)` (0x10304c23; só se bSetSizeScale): **a partir dos defaults da classe** (para AAirEmitter) ou do próprio ator: StartSizeRange, StartLocationRange, StartLocationPolarRange (inteiro), SphereRadiusRange, StartVelocityRange, Acceleration ×f; Beam: Low/HighFrequencyNoiseRange ×f. Usado com 0.5/0.6 em efeitos de NPC.
- `SetOpacity(o)` (0x10304890; o≤0→0.001): `Opacity *= o` (cumulativo). Usado em `AssociateAttackedNotify` com `0.9 − (n−3)*0.08` quando n>2 (efeitos de impacto simultâneos) e em FNWeaponEffect (`Opacity=` do ini).
- `SetOpacityRatio(r)` (0x10309fe3): `OpacityRatio = r` (fade por distância, §5.3).
- `SetMaxParticles(f)` (0x10313f39; f>0): para emissores com IPPS≠0 e MaxParticles≠0: `MaxParticles = ftol(MaxParticles*f)`; `IPPS *= f` (FNWeaponEffect `Num=`).
- `SetDelayed(d, all, idx)` (0x103070ae): `InitialDelayRange += d`.

#### 4.6.6 Relação com opções de qualidade [O]
- `GL2KeepMinFrameRate` **não** é lido pelo código de partículas. Ele afeta, entre outros, `UGameEngine::OnReceiveMagicSkillUse` (ignora o efeito de skill de outros pawns além de `GL2PawnCR*2048` unidades), animação de pés/cintura, LOD de textura/malha esquelética.
- Distância de efeitos: `GL2ActorCR` (§5.3). Quantidade de clima: `GL2LevelOfWeather` (§6.2). Efeitos de "força" (screen effects): `GL2FFEffectUse`.
- **[N]** não encontrei um "nível de efeitos" global que escale MaxParticles de todos os emissores.

---

### 4.7 AEmitter

#### 4.7.1 `AEmitter::Initialize()` — 0x10301e15 [O]
Uma vez (`Initialized==0`): cria `ParticleMaterial` transiente; `GlobalOffset = GlobalOffsetRange.GetRand()`; `TimeTillReset = TimeTillResetRange.GetRand()`; `Initialized = 1`. Sempre: `BoundingBox.Init()`. `Spawned()` (fora do editor) liga `DeleteParticleEmitters`.

#### 4.7.2 `AEmitter::Tick(dt)` — 0x10310f96 (corpo 0x1060bd00) [O]
```
AActor::Tick(); dts = SpeedRate*dt
EmitterRotation(dts)                                       // §7.5
if (!Initialized) Initialize()
if (bDeleteMe) return ; if (TickType == ViewportsOnly && !editor) return
BoundingBox.Init(); UseParticleProjectors = 0
EmitterLight/Quake: se bUseLight/bUseQuake: EL/EQ_InitialDelay==0 → spawna já e marca −1; >0 → decrementa e spawna ao cruzar 0
for each emitter e (não NULL, não Disabled):
    UseParticleProjectors |= e.AcceptsProjectors
    if (!e.Initialized) e.Initialize(e.MaxParticles)
    e.Owner = this
    e.RealDisableFogging = e.DisableFogging || this.DisableFogging
    InitialDelay (§1.6) ; e.GlobalOffset = this.GlobalOffset ; Warmup (§1.7)
    if (!e.AllParticlesDead) { §2.6 ; sons §6.3 } else { §2.7 }
    if (!e.AllParticlesDead && e.BoundingBox.IsValid) this.BoundingBox += e.BoundingBox
ActorForces: liga/desliga colisão do ator e ajusta CollisionRadius/Height = 1.2× extensão do bbox
AutoDestroy/AutoReset globais (§2.7)
```

#### 4.7.3 `Kill()` — 0x1030d445 [O]
Para cada emissor: `RespawnDeadParticles=0; InitialParticlesPerSecond=0; ParticlesPerSecond=0; AutoReset=0; AutoDestroy=0; KillPending=1` (bloqueia todo spawn). No ator: `AutoDestroy=1; AutoReset=0`. As partículas vivas terminam a vida normalmente; quando todos os emissores ficam `AllParticlesDead`, o ator é destruído.

#### 4.7.4 Trigger [O] (`UParticleEmitter::execTrigger` 0x1031252b; o `Emitter.Trigger` do script chama Trigger() em cada emissor)
```
if (!Disabled) return                     // [O] assembly 0x10603849 (js): só reage se o emissor estiver Disabled
if (TriggerDisabled) Disabled = !Disabled
if (ResetOnTrigger) Reset()
CurrentSpawnOnTrigger = ftol(SpawnOnTriggerRange.GetRand() + CurrentSpawnOnTrigger)   // [O] assembly 0x1060388e (acumula)
if (CurrentSpawnOnTrigger) { AllParticlesDead = 0; Inactive = 0 }
```

#### 4.7.5 bRotEmitter / RotPerSecond — `EmitterRotation` 0x10313b79 [O]
`if (bRotEmitter) { NewRot = Rotation + RotPerSecond*dts; if (NewRot != Rotation) XLevel.MoveActor(this, Delta=0, NewRot) }`.

#### 4.7.6 Como os emissores filhos seguem o ator (CoordinateSystem) [O]
| Sistema | Spawn | Update | Render |
|---|---|---|---|
| Independent(0) | posição local + `Owner.Location + SpawnTime*Owner.Velocity` (mundo) | mundo | identidade → partículas ficam para trás quando o ator se move |
| Relative(1) | posição local (sem Owner) | local; integra mesmo com NoTick; sem colisão | `T(Owner.Location)·R(Owner.Rotation)` → seguem o ator rigidamente (inclui rotação) |
| Absolute(2) | posição como dada (sem Owner) | mundo | identidade |
| RelativeRotation(3) | como Independent + guarda `P.Rotation = Owner.Rotation` | bbox calculado como Relative | identidade **[N]** semântica final |
| Spray(4) | offset e velocidade rotacionados por Owner.Rotation, + Owner.Location (mundo) | mundo; VelocityLoss no frame da partícula se !IndependentSprayAccel | identidade (esguicho orientado, sem seguir depois) |
Contagem nos dados: Relative (default) maioria; Spray 298; Independent 95.

---

### 4.8 Lacunas [N]
1. **Ordem das células de UV**: confirmado [O] que `U0 = (idx / V)/U` e `V0 = (idx % V)/V` (componentes do vértice lidos). Falta confirmar a convenção de `FSceneNode::Deproject` (se `(0,−1000)` é "para cima" na tela); se fosse "para baixo", a textura sairia invertida em V e a leitura visual mudaria. Validar com um efeito 4×4 animado (ex.: `at_mortal_blow_cs`, Subdivision 14..16) comparando captura do jogo vs. port.
2. Argumentos exatos do `ftol` de BoneIndex (skeletal spawn; Ghidra perdeu operandos de FPU).
3. Composição exata de `FCoords` em UseRotationFrom=Actor (ordem Owner.Rotation vs RotationOffset).
4. PTDU_Forward/Normal: base perpendicular exata e qual eixo recebe Size.X/Size.Y.
5. PTCS_RelativeRotation (3): uso de `P.Rotation` no render (Sprite e Mesh não o usam; só Spray usa P.Rotation no Mesh).
9. VertMesh: semântica exata das vfuncs da UVertMeshInstance (frame em +0xc8, avanço 0xa8, GetMeshVerts 0x120) e da taxa de animação da sequência.
10. Ribbon: se algum ribbon do jogo funciona sem bones (o único do pacote precisa de bones); onde `NumPoints` volta ao valor original após AccDrop.
11. Beam: casos degenerados LF==1/HF==1 (divisão por zero) e possível leitura além do array LF por arredondamento.
6. Combinador de textura × cor de vértice (Modulate vs Modulate2X) e tratamento de `Refraction` (L2 shader) no D3DDrv.
7. Mesh spawning, skeletal spawning e sons: descritos só por alto.
8. Escala global de partículas por opção de "qualidade de efeitos": não encontrada.

## 5. Valores de referência (`out/re/fx/fx_golden.json`)

Gerado por `scripts/fx_golden.py`, para testes de paridade. Para cada emissor (propriedades do emissor sobre os defaults da classe), em 21 idades relativas `RelTime = 0, 0.05 … 1.0`:
- `color`: RGBA depois do `ColorScale` (§4.4.4 e §4.4.7). O alfa só é interpolado em AlphaBlend. O arredondamento é *round-half-even* (`fistp`). O valor é anterior a `ColorMultiplier`, fade e opacidade.
- `size`: fator do `SizeScale` quando `UseRegularSizeScale=false`, ou `size_regular` = `1/(Time+1)` quando é `true`. `null` quer dizer que a tabela não altera o valor naquele ponto.
- `fade`: `["out"|"in", f]` nos tempos `RelTime × LifetimeRange.Max`.

Ficam de fora os sorteios (`frand`) e a conversão final do fade para byte, que não está fechada. Atenção ao efeito de borda real em `RelTime=1.0`: com `Repeats=0`, `frac(1.0)=0`, então a tabela volta ao 1º ponto (§4.4.4).

## 6. Não coberto

- **Disparo:** ver §2.x.
- **Legado:** ver §3.6.
- **Partículas:** ver §4.8.
- **Pacotes cifrados pelo servidor modificado:** `AntharasHighEffect.u`, `ValakasHighEffect.u`, `LindviorHighEffect.u`, `LineageKetraMesh.usx`.
- **Texturas e malhas:** não foram convertidas aqui. O pipeline do l2anim (umodel) exporta esses pacotes como os de personagem.
- **Validação visual contra o jogo:** não feita. Fica pendente, por exemplo, a ordem das células de UV com um efeito 4×4 (§4.8 item 1).
