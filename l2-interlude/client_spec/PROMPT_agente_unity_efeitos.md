Implemente os efeitos de skill e o sistema de partículas no cliente Unity (C:\Users\Clayton\workspace-claude\L2Unity-workspace\l2unity\Assets\L2Web). O alvo é PC Windows standalone. Refaça tudo a partir da extração do cliente oficial; o l2web está congelado e não é referência.

Fonte de verdade: C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim
- docs\client_spec\09_efeitos_skill.md (leia inteiro): §2 disparo e posicionamento, §3 tabela legada, §4 simulação das partículas;
- out\re\fx\: lineageeffect.json (886 efeitos com os emissores), engine_defaults.json, skill_fx_map.json, legacy_skill_fx.json e fx_golden.json;
- o pseudocódigo, pelo extrator: python -I C:\Users\Clayton\workspace-claude\L2Unity-workspace\tools\l2anim\scripts\decomp_get.py C:\Users\Clayton\workspace-claude\L2Unity-workspace\analises\l2-interlude\re engine "<regex>". Se a spec divergir dele, vale o pseudocódigo: corrija a spec.

Construir:
1. Simulador de partículas próprio, fiel à §4, sem ParticleSystem do Unity:
   - spawn por slots;
   - GetRand = Max+(Min−Max)·frand;
   - RelTime, as tabelas com frac((Repeats+1)·RelTime), tamanho, cor, fade e opacidade por DrawStyle;
   - velocidade e spin, SpeedRate, CoordinateSystem;
   - Sprite, Mesh, Beam, Ribbon e VertMesh, e o blending de cada DrawStyle.
2. Carga dos efeitos a partir do lineageeffect.json, com cada emissor sobre os defaults da classe, e das texturas e malhas dos pacotes de efeito.
3. Disparo por fase (§2), pelo skill_fx_map.json; sem skill_visual_effect, pelo legacy_skill_fx.json (§3). Inclui posicionamento, attach, escala, SpawnDelay, AdjustparticleLife, projéteis, rastro de espada e os efeitos de weapongrp e Npcgrp.
4. Os emissores dos mapas (out\re\maps) usam o mesmo simulador.

Loop, até tudo passar:
- Mantenha C:\Users\Clayton\workspace-claude\L2Unity-workspace\l2unity\Docs\efeitos.md com uma linha por item: regra do 09, arquivo:linha, estado e evidência.
- Para cada item, escreva antes o teste EditMode. FxParityTests compara com o fx_golden.json (cor exata, floats com tolerância 1e-4); outro teste confere se cada skill produz as mesmas classes por fase.
- Implemente até passar e rode a suíte:
"C:\Program Files\Unity\Hub\Editor\6000.6.7f1\Editor\Unity.exe" -batchmode -nographics -projectPath "C:\Users\Clayton\workspace-claude\L2Unity-workspace\l2unity" -runTests -testPlatform EditMode -testResults "C:\Users\Clayton\workspace-claude\L2Unity-workspace\l2unity\Docs\test-results.xml" -logFile -
- Apague os efeitos aproximados antigos que o novo substituir.

Regras: não modifique o aCis nem o l2web; não contorne a proteção do cliente original; separe o observado ([O]) do inferido ([I]).

Conclua só quando:
- todos os itens estiverem aprovados com teste e a suíte passar;
- 5 skills (buff, projétil, área, golpe físico e canalização) baterem em captura com o original, incluindo a orientação da UV num efeito com subdivisões (ex.: Mortal Blow), lacuna §4.8 item 1.
