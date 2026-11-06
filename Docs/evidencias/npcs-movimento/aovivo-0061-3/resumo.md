# #0061 NPCs e monstros: ao vivo 0061-3 (antes e40d43c, depois cfa73ce)

Teste no aCis local, 1024x768. Conta l2webtest9, personagem novo Npc61 (humano guerreiro), que não se moveu sozinho. Local: Breka's Stronghold, pelo Global GK → levelup → 12024 (79790,130632).

Medição:
- Hook em memória no OnRaw que loga `[npcpk]` (MoveToLocation, ChangeMoveType com run, StopMove, ValidateLocation, Attack) dos npcId 20268, 20267 e 20248.
- Rajadas in-game (ScreenCapture a cada 100–150 ms) em `rajadas/`.
- `[aproximacao]` no depois.
- O personagem mata em 1–3 golpes, porque o servidor é x500. Por isso tirei a arma (RequestUnEquipItem 128) no corpo a corpo, e a recoloquei no fim.

Suítes: cfa73ce 936/936 (NpcMotionTests 11/11), 1de4edf 933/933.

## Passos
| Passo | Antes (e40d43c) | Depois (cfa73ce) |
|---|---|---|
| 1. Breka's Stronghold | ok | ok |
| 2a/b. Arqueiro 20268, ataque e recuo | 268444143: ChangeMoveType run=1 + Attack + MoveToLocation, ~0,9 s depois StopMove + run=0 + MoveToLocation (recuo), depois run=1 e MoveToLocation de volta. O arqueiro recuou para ~79441 e voltou | 268480958: mesmo padrão (Attack, MoveToLocation, StopMove, run=0, run=1). [aproximacao]: o personagem segue com MoveToPawn offset=60 (ou 30 quando o arqueiro recua) e Attack a d=65–90 |
| 2c. Clique de novo durante o golpe | Só o ValidateLocation no 1º clique (antes do golpe). No reclique não houve passo visível do arqueiro (log sem ValidateLocation nesse momento) | Igual: ValidateLocation só no 1º clique. O arqueiro morreu logo após o reclique |
| 3d. Monstro começando a correr atrás | NÃO reproduzido: o Breka Orc 268480959 não seguiu quando recuei 450 (fez run=1 e logo run=0 e parou em 80552,130488); no recuo de 250 ele já estava morto | NÃO reproduzido, pelo mesmo motivo (o 268480960 morreu antes do recuo) |
| 3e. Golpe com a espada | Rajada orc_golpe2 com 2 Attack do orc; ele bate de frente para o personagem (mosaico) | 2 Attack do orc (21:46:33 e :35), de frente para o personagem. Nas capturas não deu para afirmar se a animação é a de arma: o efeito de golpe cobre as mãos (orc_golpe2_mosaico.png nas duas pastas) |
| 4f. Fuga e volta ao spawn andando | NÃO reproduzido: com 2600 de fuga o orc nem perseguiu (ficou fora do alcance da lista) | Não repetido |
| 5g. Andar aleatório | Orc 268444123 ocioso: MoveToLocation a cada ~25–30 s (21:39:57, 21:40:23, :28, :30, :35), dentro de ~150 do ponto | Mesmo orc: MoveToLocation às 21:47:18, :34, :35, ~120 de deslocamento |
| 6. Boss | Não há boss perto | Não há |

Observação: o ChangeMoveType run=1 chega junto com o 1º Attack do monstro, nas duas versões. A diferença de "anda 0,4 s antes de correr" é do lado do cliente e não dá para ver só pelos pacotes. As rajadas estão em `orc_golpe2_*` e `arq_ataque_*`; a câmera fica atrás do personagem, então o arqueiro quase não aparece.

Logs de erro: 0 nas duas rodadas.

Arquivos: `antes/` e `depois/`, cada um com e2e.log (que traz [npcpk] e [aproximacao]), rajadas/ (arq_ataque, arq_reclique, orc_golpe2, orc_corrida2 e mais), orc_golpe2_mosaico.png e npcpk_ocioso.log.
