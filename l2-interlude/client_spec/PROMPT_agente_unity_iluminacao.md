Refaça a iluminação e a animação de cenário do cliente Unity (C:\Users\Clayton\workspace-claude\L2Unity-workspace\l2unity\Assets\L2Web) a partir do que foi extraído do cliente oficial do Lineage II Interlude.

O protótipo l2web (JS/three.js) está congelado: não o modifique e não o use como referência. Constantes e quadros-chave herdados dele saem do código. Exemplos: os quadros-chave próprios do DayNight.cs, o LightScale 1/π, a luz hemisférica do three e a regra "noite de 00:00 a 06:00".

Fonte de verdade: C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim
- docs\client_spec\08_ambiente_iluminacao.md: as regras;
- out\re\env\env_config.json: Env.int e TimeEnv0..3, com todas as curvas;
- out\re\env\env_golden.json: o resultado esperado a cada 15 min, nos 4 ambientes;
- out\re\maps\<mapa>.json: luzes, sol/lua/céu, neblina, partículas, portas e malhas animadas de cada mapa.
Na dúvida, confira o pseudocódigo: python -I C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim\scripts\decomp_get.py C:\Users\Clayton\workspace-claude\L2Unity-workspace\analises\l2-interlude\re engine "<regex>" (ex.: UL2NEnvManager::UpdateNTime, FDynamicLight::Update). Se a spec divergir do pseudocódigo, vale o pseudocódigo: corrija a spec.

O que construir:
1. Os dados do jogo em Resources: leia o env_config.json ou o Env.int/TimeEnv do próprio cliente, com XOR 0xAC e cp949.
2. Gerenciador de ambiente, equivalente ao UL2NEnvManager. Ele cuida de:
   - o relógio pelo ClientSetTime (minutos, razão), avançando por tempo real × razão;
   - as fases [6,8), [8,22), [22,24) e [0,6);
   - as curvas por hora, interpoladas por chave com arredondamento para o par; fora do intervalo a curva não escreve (fica 0);
   - FGetHSV(H,S,255) × Bri/255;
   - SSQInfo 256..259 → ambientes 0..3, com troca imediata e a mistura com o ambiente 0.
3. Céu: cor do skybox, haze ring, nuvens 1..3 com as texturas do Env.int, rolagem TexU/VPanSpeed e lens flares do SkyZoneInfo.
4. Sol e lua: elevação de 10°/h e 30°/h, azimute 180°, SlopeSunAngle 30° em torno de X, escala e Radius. A luz direcional usa a cor HSV, separada para atores, static mesh, terreno e BSP.
5. Luz ambiente por tipo de superfície (ActorAmbient, StaticMeshAmbient, TerrainAmbient, BSPAmbient). Ela substitui o hemisfério do three.
6. Luzes dos mapas, com a modulação por LightType (Pulse, SubtlePulse, Flicker, Blink, Strobe…). bTimeLight fica inativo: nenhum mapa o liga.
7. Terreno: os 8 mapas de intensidade (TIntMap, horas 1,5 + 3·i), com mistura linear a cada 0,1 h de jogo.
8. Neblina: nível pelo alcance de terreno das opções → StartRange/EndRange × 2048, mais ZoneInfo, L2FogInfo e WaterVolume.
9. Cenário: MovableStaticMeshActor (oscilação por eixo), Mover (portas pelo servidor: 0x4C, 0x4D, 0x99) e emissores com as propriedades do mapa.

Loop, até tudo passar:
- Mantenha C:\Users\Clayton\workspace-claude\L2Unity-workspace\l2unity\Docs\iluminacao.md com uma linha por item: regra da 08, arquivo:linha, estado e evidência.
- Para cada item: teste EditMode primeiro. Use EnvParityTests com env_golden.json nas 96 horas e nos 4 ambientes (cores exatas, floats com tolerância 1e-4) e as contagens de out\re\maps. Depois implemente, até o teste passar, e rode a suíte:
"C:\Program Files\Unity\Hub\Editor\6000.6.7f1\Editor\Unity.exe" -batchmode -nographics -projectPath "C:\Users\Clayton\workspace-claude\L2Unity-workspace\l2unity" -runTests -testPlatform EditMode -testResults "C:\Users\Clayton\workspace-claude\L2Unity-workspace\l2unity\Docs\test-results.xml" -logFile -
- Apague o código antigo que o novo substituir. Não deixe dois sistemas de dia e noite.

Regras:
- Não modifique o aCis nem o l2web. Não contorne a proteção do cliente original.
- Separe o observado ([O]/[Obs]) do inferido ([I]).
- Para os itens que a 08 lista como não cobertos, investigue no pseudocódigo e acrescente o achado à 08.

Conclua só quando:
- todos os itens estiverem aprovados com teste;
- a suíte passar;
- não restar nada de iluminação vindo do three.js;
- as capturas do mesmo ponto às 03h, 07h, 12h e 20h de jogo baterem com o original (hora pelo comando de GM no aCis), e também com o céu vermelho (SSQInfo 259).
