Garanta a paridade do cliente Unity (C:\Users\Clayton\workspace-claude\L2Unity-workspace\l2unity\Assets\L2Web) com o cliente original do Lineage II Interlude. Antes de começar, leia as instruções completas em C:\Users\Clayton\workspace-claude\L2Unity-workspace\analises\l2-interlude\client_spec\PROMPT_agente_unity.md e siga-as. A especificação por engenharia reversa está em C:\Users\Clayton\workspace-claude\L2Unity-workspace\analises\l2-interlude\client_spec (comece por 00_indice.md e 97_cobertura.md). As evidências estão em ..\out\re, incluindo o pseudocódigo de todas as funções do cliente original em out\re\decomp_all e o mapa função→classe em out\re\function_map_*.json.

Loop, até tudo passar:
1. Mantenha C:\Users\Clayton\workspace-claude\L2Unity-workspace\l2unity\Docs\validacao.md com uma linha por item (referência na spec, arquivo:linha no Unity, estado não implementado/divergente/aprovado, evidência).
2. Para o próximo item não aprovado: leia a spec e o pseudocódigo original, leia a implementação, escreva um teste EditMode com dados golden gerados dos JSON de l2anim\out\re, corrija até passar e rode a suíte inteira:
"C:\Program Files\Unity\Hub\Editor\6000.6.7f1\Editor\Unity.exe" -batchmode -nographics -projectPath "C:\Users\Clayton\workspace-claude\L2Unity-workspace\l2unity" -runTests -testPlatform EditMode -testResults "C:\Users\Clayton\workspace-claude\L2Unity-workspace\l2unity\Docs\test-results.xml" -logFile -
3. Itens de rede: valide ao vivo contra o aCis local (C:\Workspace-java\aCis_gameserver, game :7777, login :2106). Itens de tela: compare capturas com o original em 1024×768 e 1920×1080.

Itens (detalhes e critérios de aceite no arquivo completo):
- A. criptografia Ver111/121/413, RSA, Blowfish;
- B. handshake (revisão 746) e os 245 envios byte a byte;
- C. os 361 pacotes recebidos (formatos, os 28 ignorados);
- D. os 336 pares pacote→evento→janela (chain_verification.json);
- E. os 319 eventos e o formato param (0x7F, regras do appStrfind);
- F. layout do xdat (âncora: 1º ponto = do próprio controle; os 64 campos nomeados; WindowsInfo.ini com savePosition 47/47 e saveSize 6/6);
- G. as 83 posições das telas nativas (89);
- H. desenho dos controles NC* (98);
- I. chat: prefixos, tipo pela aba, sussurro, anti-flood (60/char+100+10%, repetição 2000, bloqueio >20000, −200/s, libera ≤10000, sysmsg 964/1078/966/965), filtro de palavrões só na recepção (sysstring 740);
- J. teclas, IsPKMode, IsDebuff, Option.ini;
- K. HUD, minimapa, janelas;
- L. sysstring/systemmsg;
- M. movimento, câmera, combate, skills;
- N. itens do servidor modificado (decisão do usuário);
- O. ambiente (08): relógio do ClientSetTime, curvas do TimeEnv contra env_golden.json, SSQInfo 256..259 → ambientes 0..3, sol/lua, luzes dinâmicas, sombras do terreno por hora, neblina ×2048, e o inventário dos mapas (out\re\maps).
- P. efeitos (09): skill → efeito por fase (skill_fx_map.json e legacy_skill_fx.json), posicionamento e simulação de partículas contra fx_golden.json.

Regras:
- Fontes, em ordem de prioridade: observado em execução, depois [O] no binário/pseudocódigo, por último [I] (confirme no pseudocódigo). Se a spec divergir do pseudocódigo, vale o pseudocódigo: corrija a spec.
- Não modifique o aCis nem o l2web (protótipo JS, congelado; não é fonte de verdade).
- Não contorne a proteção do cliente original (sem injeção nem leitura de memória). Compare apenas por capturas e pelos arquivos que ele grava. Execute o original só com autorização; quem faz o login é o usuário.
- Nunca marque um item como aprovado sem evidência reproduzível.

Conclua só quando:
- todos os itens estiverem aprovados (ou com decisão do usuário, no grupo N);
- a suíte EditMode passar;
- o percurso com o aCis (login → servidor → personagem → mundo → andar → chat com cada prefixo → inventário/opções → mover janelas → sair) funcionar igual ao original, com WindowsInfo.ini e Option.ini iguais aos do original;
- as capturas das telas principais baterem com o original nas duas resoluções.
