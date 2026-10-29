# Área Render (vaga `worktrees\render`)

Tudo o que é desenhado: cenas (lobby e mundo), terreno, BSP, StaticMeshes, materiais, luz, céu, neblina, câmera, áudio de cena, efeitos de skill e partículas (`Fx\`), ambiente/dia-noite (`Env\`). Shaders em `Assets/L2Web/Shaders`.

**Specs** (em `C:\Users\Clayton\workspace-claude\L2Unity-workspace\analises\l2-interlude\client_spec\`): `08_ambiente_iluminacao.md` (ambiente, luz, neblina) e `09_efeitos_skill.md` (efeitos e partículas). Evidências em `C:\Users\Clayton\workspace-claude\L2Unity-workspace\analises\l2-interlude\re\env`, `re\fx`, `re\maps`. Acompanhamento em `Docs/iluminacao.md` e `Docs/efeitos.md`.

**Testes**: `EnvParityTests`, `L2FogTests`, `LightTypeTests`, `BakedLightTests`, `BspLightmapTests`, `Fx*Tests`, `Lobby*Tests`, `Camera*Tests`, `GameOptionsTests`, `VideoOptionsTests`.

**Regras**
- Shader ou variante nova: o build remove o que não está registrado. Atualize `Assets/L2Web/Shaders/L2WebVariants.shadervariants` e `Resources/ShaderWarmup`; mudança em Graphics Settings (`ProjectSettings`) é com a coordenadora.
- Os dados vêm de `StreamingAssets/L2Web` (junction compartilhada, somente leitura); exportações novas saem dos scripts de `Docs/tools` e precisam de aviso no `TAREFAS.md`, porque mudam a pasta de todas as vagas.
