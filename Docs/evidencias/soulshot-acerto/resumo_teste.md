# #0058, resultado ao vivo (0058-1 antes = 118b832, 0058-2 depois = 3cf9dc0)

Teste no aCis local, 1024x768, conta l2webtest4, personagem FxGuerreiro (slot 1), com Cursed Maingauche (1660) e Soulshot D (1463) automático. Monstros: Turek de Orc Barracks.

Medição: hook em memória no OnRaw do Attack 0x05 do próprio personagem. Ele grava `[ss] hitNN_flXX` com hora, objectId e npcId do alvo, dano e flags, e dispara uma rajada de 8 capturas a cada 0,1 s (`rajadas/`). Em cada quadro, a linha `[ssfx]` traz os efeitos presentes; as posições não valem, porque são os objetos-raiz.

Suítes: 118b832 e 3cf9dc0 com 922/922, FxSoulshotHitTests 10/10. A base e40d43c dá 912/912.

## ANTES (118b832)
- 11 golpes: 8 normais (0x11) e 3 críticos (0x31).
- Efeitos: p_u002_a, e_u506_a (arma) e, no crítico, p_u004_a. Nenhum e_u506_c nem e_u506_e. Bate com o esperado.

## DEPOIS (3cf9dc0)
- 8 golpes:
  - hit01 0x11 e hit02 0x31 no Sentinel 268480785 (20500);
  - hit03 0x11 e hit04 0x31 no Footman 268449952 (20499);
  - hit05 0x31 no Sentinel 268449990;
  - hit06 e hit07 0x31 nos War Hound 268449802 e 268449801 (20494);
  - hit08 0x00 (sem SS, controle) no Skirmisher 268480780 (20497).
- Golpe normal com SS D: p_u002_a + e_u506_c. É o clarão no lado do alvo voltado para o atacante, visível em hit01_fl11_2_crop.png.
- Crítico com SS D: p_u002_a + e_u506_e, sem p_u004_a (hit05 a hit07).
- Sem SS: só p_u002_a, igual ao antes.
- e_u506_a na arma: continua aparecendo.
- SS C: não testado, porque não há soulshot nem arma C no inventário.

Logs de erro: 0 nas duas rodadas.
