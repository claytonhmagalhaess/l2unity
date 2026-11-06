# Pedido 0066 — Render: ossos dos rigs de NPC não são achados pelo nome ("Bip01 R Hand" × "Bip01_R_Hand")

| Campo | Valor |
|---|---|
| De | world (tarefa #0062) |
| Para | render |
| Estado | aberto |
| Criado | 2026-11-05 |

## O que precisa

Os rigs de NPC do cache do l2anim têm os ossos com espaço no nome (`Bip01 R Hand`, `Bip01 Spine2`, `Bip01 L Toe0`). Os de jogador têm `_` (`Bip01_R_Hand`). O glTFast mantém o nome do nó como está. O porte veio do three.js, que trocava o espaço por `_` (`PropertyBinding.sanitizeNodeName`), e por isso procura os ossos sempre com `_`:
- `Render/Actor.cs`, `AttachBones` (`Weapon_R_Bone`/`Bip01_R_Hand`, `Bip01_L_Hand`, `Bip01_Spine2`...) e `AttachBone`/`Bone`/`BonePosition`;
- `Render/Fx/FxCast.cs:76-89` (`Bip01_R_Hand`, `Bip01_R_Foot`, `Bip01_Spine1`...);
- `Render/Fx/LegacyFx.cs:576` (`Bip01_L_UpperArm`).

Nos NPCs, esses ossos não são achados. `BonePosition` cai no fallback (60% da altura), os efeitos de mão, pé e coluna saem no lugar errado, e a arma de NPC (se for encaixada por osso) não encaixa.

Sugestão: no `Actor.LoadModel`, registrar também a chave normalizada, como o three fazia:

```csharp
foreach (var t in rig.GetComponentsInChildren<Transform>(true))
    if (!string.IsNullOrEmpty(t.name))
    {
        var k = t.name.ToLowerInvariant();
        byName[k] = t;
        byName[k.Replace(' ', '_')] = t;
    }
```

Os nomes dos NPCs passam a responder pelas duas grafias. Vale conferir os efeitos de NPC antes e depois, porque as posições mudam (para o lugar certo).

## Por quê

Achado na #0062 (`57df023`). Lá só o `FootDirection` (diagnóstico) passou a aceitar as duas grafias, e a frente do modelo agora vem do `RotOrigin` fixo das malhas. Nada quebra sem este pedido, mas os efeitos presos a ossos de NPC (golpe, cast, soulshot no alvo, `e_bone` da cabeça do pedido 0065) ficam na posição do fallback.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
