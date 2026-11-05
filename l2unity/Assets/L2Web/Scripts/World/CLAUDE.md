# Área World (vaga `worktrees\world`)

Estado do mundo e regras de jogo do lado do cliente: entidades, movimento e validação pelo geodata, combate, skills e cálculos (`L2Calc`). Coordenadas: `Coords` (unity = (-x, z, y) * 0.01); calcule em coordenadas do L2 e converta só no fim.

**Specs** (em `C:\Users\Clayton\workspace-claude\L2Unity-workspace\analises\l2-interlude\client_spec\`): `01_framework_e_fluxo.md` (fluxo de entrada no mundo), `03_minimapa.md` (grade do mundo, 32768), `09_efeitos_skill.md` (tempos de skill), `92_protocolo_opcodes.md` (pacotes de movimento e combate).

Trava de pedido do clique (`ActionLatch`, `UGameEngine+0x64`): `05_barra_de_atalhos_e_teclado.md` §5.7.

Teclas de movimento e câmera do `user.ini` (`KeyboardMove`, `CameraKeys`, `ScreenShot`): `05_barra_de_atalhos_e_teclado.md` §5.6 e `analises\interface-p166\03_teclado.md` §4. A ligação às teclas fica no `App.cs` (da coordenadora).

**Arquivos**: `World`, `Entities`/`Entity`, `Movement`, `PawnMotion`, `Combat`, `Skills`, `L2Calc`, `Coords`, `ActionLatch`, `KeyboardMove` (`UserIniKeys`), `CameraKeys`, `ScreenShot`.

**Testes**: `MovementTests`, `MovementParityTests`, `CombatTests`, `CombatParityTests`, `SkillDataTests`, `PawnSelectTests`, `CreateRuleTests`, `DefPosTests`, `ZoneTests`, `ActionFailTests`, `UserIniKeysTests`.

**Regras**
- O servidor manda: o cliente prevê e corrige, nunca decide posição ou dano por conta própria.
- Mudança que afeta o desenho (animação, efeito) é da vaga `render`; avise pelo `TAREFAS.md`.
