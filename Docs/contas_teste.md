# Contas de teste do aCis local

O loginserver do aCis local (`C:\Workspace-java\aCis_gameserver\config\loginserver.properties`) tem `AutoCreateAccounts = True`: a conta é criada no primeiro login. São contas só do servidor local de desenvolvimento, nunca as do usuário.

| Conta | Senha | Quem usa |
|---|---|---|
| `l2webtest` | `l2webtest` | padrão do `e2e.sh` (#0050, tooltip da multisell) |
| `l2webtest2` | `l2webtest2` | #0051 (Character Status, Actions e Clã) |

Uso: `sh e2e.sh login l2webtest2 l2webtest2`. Um login por vez: mais de 3 conexões em menos de 1 s bloqueiam o IP por 5 minutos.
