# Contas de teste do aCis local

O loginserver do aCis local (`C:\Workspace-java\aCis_gameserver\config\loginserver.properties`) tem `AutoCreateAccounts = True`: a conta é criada no primeiro login. São contas só do servidor local de desenvolvimento, nunca as do usuário. Uma conta por tarefa.

| Conta | Senha | Quem usa |
|---|---|---|
| `l2webtest6` | `l2webtest6` | #0055 (HTML do servidor: buffer, gatekeeper, board, quest; vaga ui4) |

`l2webtest` até `l2webtest5` estão com outras sessões (os branches das vagas ui2, ui3 e net têm este mesmo arquivo com as linhas delas: juntar as tabelas no merge).

Uso: `sh e2e.sh login l2webtest6 l2webtest6`. Um login por vez: mais de 3 conexões em menos de 1 s bloqueiam o IP por 5 minutos.
