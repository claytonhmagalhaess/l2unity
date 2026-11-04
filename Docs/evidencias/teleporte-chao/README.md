# Evidências da #0057: pouso depois do teleporte

Teste ao vivo 0057-1 da sessão de testes, no aCis local, conta `l2webtest3`, personagem `Buffs52`. A = `eb1f39d` (main, antes); B = `303b026`.

| Arquivo | O que mostra |
|---|---|
| `unstuck-A.png`, `unstuck-A-5s_pe.png` | A: `/unstuck` em Giran. O pacote 0x28 traz z −3340, o Self fica em −3340 e o personagem flutua junto ao muro, como no relato. |
| `unstuck-B.png`, `unstuck-B-5s_pe.png` | B: `[pouso] self (83442,148821) z do pacote -3290 -> chao -3400 (-110)`; os pés no chão. |
| `gk-ida-A.png`, `gk-ida-B.png`, `gk-ida-B_pe.png` | Gatekeeper Clarissa, goto 25. O servidor redirecionou para (−89894, 105455), uma área de orcs. B: `-3594 -> -3576 (+18)`. Sobra ~0,5–1 m sobre o terreno UE, que é da #0056 (chão desenhado), não do Z do teleporte. |
| `npc-grocer-B.png`, `cancel-B.png` | Bug da versão B: os NPCs das lojas de Giran (z −3506) subiam até o telhado do geodata (+348 a +458). Corrigido em `ea03f2f` (o pouso não sobe mais de 30 e o NPC não cai mais de 100). |
| `console-pouso.txt` | As linhas `[pouso]` e `[raw28]` das duas rodadas. |

Suíte em `303b026`: 888/888. O reteste de `ea03f2f` foi pedido à sessão de testes (0057-2).
