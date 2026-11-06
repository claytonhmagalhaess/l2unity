# #0060 sistema de ataque: ao vivo (antes e40d43c, depois efd8fb5)

Teste no aCis local, 1024x768. Conta l2webtest8, personagem novo Ataque60 (humano guerreiro). O servidor o subiu do nível 20 para 24+ durante o teste e não o moveu sozinho. Figurante: l2webtest2 (L2webTest2, 268480759) pelo Dev.Figurante. Monstros: Turek de Orc Barracks (Global GK → levelup → 12023).

Suíte: efd8fb5 925/925 (CombatSystemTests 13/13, CombatTests 9/9, CombatParityTests 2/2, ActionFailTests 6/6); main e40d43c 912/912; nenhuma falha nova.

## Cenas
| Cena | Antes (e40d43c) | Depois (efd8fb5) |
|---|---|---|
| Corpo a corpo até matar (3 monstros) | O morto fica parado: mesma posição na hora e 1,5 s depois. O alvo continua no corpo (targetId = o morto; a TargetStatus mostra o monstro). Ex.: 268480739 em -91272,105832,-3512 | Igual: 268480895, 268480893 e 268480709 mortos, mesma posição 1,5 s depois, alvo continua neles |
| Crítico / miss no chat | "Critical hit!" aparece. Nenhum "miss" do personagem; só os "You have avoided … attack" dos monstros | "Critical hit!" (2×) aparece. Nenhum miss do personagem |
| Ctrl+clique no figurante (Giran) | Seleciona e o AttackRequest dá "You may not attack this target in a peaceful zone." | Igual |
| Monstro agressivo sem alvo | Turek não são agressivos: 40 s parado, nada | Igual parado. Provocado (Action no monstro, CancelTarget, ele continua batendo, HP 1712 → 1623 em 12 s): o alvo continua 0. O `World.AutoTargetOnAttack` existe, mas o App.cs não o chama (efd8fb5 não mexe no App.cs). Lembrando também da janela de 10 s depois de perder o alvo |
| Arco / dual | Não rodado: o personagem não tem arco nem duais | Não rodado |

Logs de erro: 0 nas duas rodadas.

Arquivos: `antes/` e `depois/` com 0060_morto1..3, 0060_chat_critico_miss, 0060_ctrl_figurante, 0060_agressivo(_provocado), cada um com a versão _chat (o chat ampliado), mais o e2e.log de cada rodada.
