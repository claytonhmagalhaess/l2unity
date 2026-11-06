# #0062 parte 2: correção da frente do modelo (57df023 / head e281525) × prévia 4ccc06c

## 1. Suíte (57df023, batchmode)
- Compilação: sem erros.
- 970/970, 0 falhas.
- ActorFrontTests 11/11; os 3 UnityTest carregaram os glb do orc, do MFighter e do Valakas.

## 2. Ao vivo (aCis local, l2webtest9 / Npc61, Breka's Stronghold)
O ao vivo rodou no head e281525, que em relação ao 57df023 só acrescenta evidências. A guarda conferiu que o personagem logado era o Npc61 no começo e no fim de cada rodada. Desta vez não entrou teclado nem login de fora.

A câmera ficou atrás do personagem, olhando para o monstro (L2Camera.Yaw = direção personagem→monstro). O orc aparece nas rajadas: `rajadas/`, `mosaico_*.png` e `zoom_a_ocioso.png`.

### Model y (Yaw.GetChild(0).localEulerAngles.y)
| | Prévia 4ccc06c | Correção |
|---|---|---|
| Personagem (Npc61) | 270,0 (378 amostras) | 270,0 (565 amostras) |
| Monstros (Breka Orc 20267, Breka Orc Archer 20268) | **0,0** (378 amostras) | **270,0** (565 amostras) |

### FacingHeading (pés) × Heading × movimento (unidades L2, 16384 = 90°)
- **Prévia:** `FacingHeading()` = null em todos os NPCs (os ossos têm nomes diferentes), por isso não dá para comparar.
- **Correção:** FacingHeading preenchido nos NPCs.

| Situação (correção) | Resultado |
|---|---|
| Orc ocioso andando (Walk, 15 amostras) | Heading−mov mediana 0; Facing−Heading mediana 1101. \|Facing−mov\|: mediana 3512, máximo 20896. O máximo é a virada do início, quando o corpo gira ~6500 por 100 ms; depois oscila com o passo. Ex.: Heading 57344 × Facing 58445 / 59427 / 57805 / 56482 / 57940 |
| Orc atacando o personagem | No golpe, Heading ≈ paraSelf. Facing−Heading fica entre +3000 e +7700 (~17–42°), pela pose de ataque. A mediana do atk01 (7737) inclui amostras das 23:15:56–23:16:03, antes do meu passo, com o orc batendo em outro alvo (Heading 17956 × paraSelf 40014) |
| Arqueiro atacando (atk01) | Heading = paraSelf (diferença 1). Facing−Heading ≈ +4830 (~26°) |
| Arqueiro recuando (run, 18 amostras) | Heading−mov mediana 2: a lógica vira para a fuga. **Os pés (FacingHeading) apontam ~180° do movimento:** Heading 40890 e mov 40890 contra Facing entre 363 e 8523, perto do paraSelf (~7000). O arqueiro corre "de costas" para a direção da fuga. Pode ser a animação de recuo do arqueiro ou a medida pelos ossos dos pés nesse rig; vale olhar d_arqueiro_* e o mosaico |
| Arqueiro andando (Walk, 24) | Heading−mov −6; Facing−Heading −1013 |

### Visual
- Prévia: o orc andando é visto de costas, mas como os números mostram, a malha está girada −90° em relação ao Heading.
- Correção: o orc anda de perfil na direção do movimento (zoom_a_ocioso.png).

## 3. NPC de cidade virando para o jogador
Não rodado: a sessão ficou em Breka's Stronghold. Fica para outro pedido, se for preciso.

Logs de erro: 0 nas duas rodadas. Aconteceu uma falha minha: o `unity open` do meu script abriu um 2º Editor no mesmo projeto, que eu fechei. O script foi corrigido para só abrir quando não há Editor.
