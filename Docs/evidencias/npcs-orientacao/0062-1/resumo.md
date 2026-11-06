# #0062: orientação dos NPCs, main e40d43c (antes) × prévia 4ccc06c (depois)

Teste ao vivo no aCis local, conta l2webtest9 / Npc61, em Breka's Stronghold. Monstros:
- antes: Breka Orc 268480967 (sec=batur_orc) e Breka Orc Archer 268480970 (sec=batur_orc_archer);
- depois: o mesmo orc 268480967 e o arqueiro 268480971.

Medição:
- Hook em memória com `[orient]` a cada ~100 ms no monstro observado: Heading, Motion.Yaw, DesiredYaw, Actor.FacingHeading(), direção real do movimento (Movement.HeadingOf entre amostras), heading para o jogador, ClipName, Yaw.localEulerAngles.y, Model (filho 0) e sec.
- `[npcpk]` com os headings dos pacotes (ValidateLocation, StopMove, NpcInfo), além de MoveToLocation (dir), MoveToPawn, ChangeMoveType e Attack.
- Arquivos: `orient-full.log` (tudo, tirado do Editor.log), `orient-resumo.txt` (medianas por clipe) e `rajadas/`.

## Limitações
- **`Actor.FacingHeading()` voltou `null` em TODAS as amostras, nas duas versões.** Por isso não houve o dado de para onde os pés apontam. O `Yaw.GetChild(0).localEulerAngles.y` (correção da frente da malha) ficou **0,0** em todas as amostras, nas duas versões, e o `yawT` acompanhou o Heading (yawT ≈ Heading × 360 / 65536).
- As capturas não mostram o monstro: a câmera girada para o lado (L2Camera.Yaw) deixou o monstro fora do quadro. As rajadas valem só para o tempo; a evidência está nos números.
- Os monstros morrem em poucos golpes (servidor x500). No (b) o orc não chegou a correr atrás: ao recuar, ele já tinha parado (ChangeMoveType run=0).

## Resultados (diferença com sinal em unidades L2, 16384 = 90°)
| Situação | Antes (e40d43c) | Depois (4ccc06c) |
|---|---|---|
| (a) Orc ocioso andando (Walk) | 4 amostras, todas durante a virada: Heading 2149 → 61012 → 54227 → 47386 rumo a DesiredYaw 44194 (direção 44173–44198). Mediana Heading−mov = 16814, mas por estar virando (≈ 6800 por 100 ms) | 14 amostras: virou em ~0,4 s (28252 → 21655 → 15049 → 8147 → 2557) e depois ficou alinhado: **Heading−mov mediana = 9** (2557 × 2547–2560) |
| (c) Orc atacando o jogador parado (atk01/atkwait) | Heading−paraSelf mediana = **0** (atk01, 28 amostras) e 0 (atkwait) | No golpe contra o personagem (22:46:21–24): Heading 37827–37847 × paraSelf 37826–37847, diferença 0–1. A mediana −5086 do atk01 vem de amostras das 22:45:55–22:46:00, antes do meu passo (a): o orc estava em atk01 com Heading 33998 fixo e paraSelf 39084, provavelmente atacando outro alvo; nada aponta que fosse o personagem |
| (d) Arqueiro atacando | atk01/atkwait: Heading−paraSelf = 1 | atk01/atkwait: Heading−paraSelf = 0 |
| (d) Arqueiro recuando | Walk 1 amostra (25692, ainda virando) | run 10 amostras: **Heading−mov mediana = 498**; Walk 3 amostras: −14127 (virada para voltar) |
| Correção da frente (Model) | 0,0 em todas | 0,0 em todas |

Pacotes (`[npcpk]`):
- antes: MoveToLocation do orc com dir=44190 e, 4,5 s depois, ValidateLocation heading=44443. O arqueiro mandou StopMove heading=40977 depois de MoveToLocation dir=40890.
- depois: MoveToLocation dir=2555 e ValidateLocation heading=2348; MoveToPawn(alvo=self, dist=43) → Attack → StopMove heading=38624 (o jogador está em ~37840) → ChangeMoveType run=0 com NpcInfo heading=40960.

## Conclusão
Nos números, nenhuma versão mostrou uma diferença sistemática de ±16384 ou 32768:
- andando ou correndo, o Heading converge para a direção do movimento em ~0,4 s;
- atacando, o Heading aponta para o jogador (diferença ≤ 1);
- a correção da frente da malha é 0 nas duas.

Se o usuário vê o NPC andando de lado na prévia, isso não aparece no Heading/Yaw lógico. Pode estar na pose dos pés, que o FacingHeading devia medir e aqui voltou null, ou nos ~0,4 s de virada logo no início de cada movimento: o monstro já desliza na direção nova enquanto o corpo ainda gira 6000–7000 por 100 ms, e isso acontece nas duas versões.

Logs de erro: 0 nas duas rodadas. Ocorrência no depois: logo depois do recompile, o Editor ficou em domain reload; o `unity open` do meu roteiro abriu um 2º Editor no mesmo projeto, que eu fechei, e então refiz a rodada inteira.
