# Contas de teste do aCis local

Só para o aCis local (login 2106, jogo 7777), que cria a conta no primeiro login (`AutoCreateAccounts = True` em `config\loginserver.properties`). Nunca use a conta do usuário. Um login por vez: mais de 3 conexões em menos de 1 s bloqueiam o IP por 5 minutos.

| Conta | Senha | Uso |
|---|---|---|
| `l2webtest` | `l2webtest` | conta padrão do `e2e.sh` e do `compare_env.py` |
| `l2webtest2` | `l2webtest2` | figurante de grupo e troca (`L2Web.Dev.Figurante`) |
| `l2webtest3` | `l2webtest3` | #0052 (janela de buffs) |

Personagens novos nascem no nível 20 em Giran com os buffs do macro `MACRO_FIGHTER_PVP`/`MACRO_MAGE_PVP` (`config\players.properties`, `data\xml\bufferSkills.xml`), entre eles canções e danças de 2 min. O NPC 10002 (Buffer) dá o mesmo macro pelo bypass `npc_<objectId>_MACRO_FIGHTER_PVP`.
