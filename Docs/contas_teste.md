# Contas de teste do aCis local

Só para o aCis local (login 2106, jogo 7777). O loginserver (`C:\Workspace-java\aCis_gameserver\config\loginserver.properties`) tem `AutoCreateAccounts = True`: a conta é criada no primeiro login. São contas só do servidor local de desenvolvimento, nunca as do usuário. Um login por vez: mais de 3 conexões em menos de 1 s bloqueiam o IP por 5 minutos.

Os testes ao vivo rodam na sessão de testes (seção "Testes" do `CLAUDE.md` do workspace).

| Conta | Senha | Uso |
|---|---|---|
| `l2webtest` | `l2webtest` | conta padrão do `e2e.sh` e do `compare_env.py`; #0050 (tooltip da multisell) |
| `l2webtest2` | `l2webtest2` | figurante de grupo, troca e duelo (`L2Web.Dev.Figurante`); #0051 (Character Status, Actions e Clã) |
| `l2webtest3` | `l2webtest3` | #0052 (janela de buffs) |
| `l2webtest4` | `l2webtest4` | #0053 (efeitos de skill; personagens `FxMago` e `FxGuerreiro`) |
| `l2webtest5` | `l2webtest5` | #0054 (barras de HP) |
| `l2webtest6` | `l2webtest6` | #0055 (HTML do servidor) |
| `l2webtest7` | `l2webtest7` | #0056 (pawns no chão fora de Giran) |

Personagens novos nascem no nível 20 em Giran com os buffs do macro `MACRO_FIGHTER_PVP`/`MACRO_MAGE_PVP` (`config\players.properties`, `data\xml\bufferSkills.xml`), entre eles canções e danças de 2 min. O NPC 10002 (Buffer) dá o mesmo macro pelo bypass `npc_<objectId>_MACRO_FIGHTER_PVP`.

Uso: `sh e2e.sh login l2webtest2 l2webtest2`.
