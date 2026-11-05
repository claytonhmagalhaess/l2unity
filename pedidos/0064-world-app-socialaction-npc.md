# Pedido 0064 — SocialAction de NPC: handler 0x2d no App.cs e NpcSocialAnimName no anim_tables.json

| Campo | Valor |
|---|---|
| De | world (tarefa #0061) |
| Para | coordenadora |
| Estado | aberto |
| Criado | 2026-11-05 |

## O que precisa

Duas mudanças em arquivos da coordenadora. O método do mundo já está no branch `feat/world-npcs-movimento`, commit `747da34` (`Entity.Social(int id)`).

**1. `Assets\L2Web\Scripts\App.cs`: tratar o 0x2d.** Hoje não existe `On(0x2d, …)`. Junto dos outros handlers de movimento (perto do `On(0x2f, …)`):

```csharp
On(0x2d, r =>
{
    // UGameEngine::OnSocialAction (0x1030c243): NPC toca NpcSocialAnimName[id - 1] (ids 1..5); jogador: pedido 0046
    var s = GamePackets.ParseSocialAction(r);
    world.Get(s.ObjectId)?.Social(s.ActionId);
});
```

`Entity.Social` só age em `Kind == "npc"`. Quando o pedido 0046 (social do jogador) for atendido, ele entra no mesmo handler.

**2. Gerador do `cache\anim_tables.json`: exportar as linhas sociais do NPC.** O gerador é `C:\Users\Clayton\projeto\l2web\tools\anim_tables.py`, que grava em `shared\StreamingAssets-L2Web\cache\anim_tables.json`. Incluir no `KEYS` (linha 15) as três chaves:

```python
    'NpcSocialAnimName', 'NpcSocialHideRightWeapon', 'NpcSocialHideLeftWeapon',
```

Depois, gerar de novo: `python -I tools/anim_tables.py <l2anim> <saida.json>`. O `LINE` do gerador já lê `Chave[n]=valor`, então a linha sai indexada pelo slot (0..4). Exemplo: `"NpcSocialAnimName": ["spwait01", "spwait01", "spwait01"]` em `skeleton_archer`. O `Entity.Social` lê exatamente esse formato, por `GameData.MoveAnim(secao, "NpcSocial", id - 1)`.

## Por quê

O servidor manda `SocialAction` para NPCs:
- ids 2 ou 3 a cada 10–40 s com o monstro ocioso (aCis `RandomAnimationTaskManager.java:42,52-53`);
- 0–7 ao falar com o NPC (`Npc.java:240-241`);
- os scripts de boss (Baium, Queen Ant, Valakas…).

No porte nada toca: falta o handler, e o `anim_tables.json` não tem os nomes.

No original, o `OnSocialAction` (`engine.dll` 0x1030c243, decomp `00006.c:29124`) toca `NpcSocialAnimName[id-1]` com o moveMul, tween 0.1 e uma vez só. `NpcSocialAnimName[5]` é `localized` (`Pawn.uc:361`), por isso os nomes estão nos `.int` (`tools\l2anim\dec\int`):
- 714 seções com a chave;
- o mais comum é `spwait01`, depois `social01` e `social02`;
- 129 seções escondem as armas na social (os `NpcSocialHide*Weapon`, para o pedido 0065 da render).

Sem as duas mudanças nada quebra, só continua sem a animação.

## Resposta

<!-- quem atendeu: aceito / feito (commit) / recusado (motivo) -->
