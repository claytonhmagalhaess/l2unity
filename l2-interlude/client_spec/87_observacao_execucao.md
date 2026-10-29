# Observação em execução (sessão de 27/10/2026, 20:38–20:42)

O cliente foi executado com autorização do usuário, que fez o login. A observação foi **passiva**: nada foi injetado nem escrito no processo. Dados brutos em `out/re/runtime/` (`files_before.csv`, `files_changed.csv`, `windowsinfo_session.json`); mapa de memória por consulta em `scripts/runtime_memmap.ps1`.

## Ambiente

- `L2.exe` iniciado a partir de `System\` (PID 48396), janela "Lineage II", 35 threads e cerca de 239 MB na tela de login.
- Servidor: o aCis do próprio usuário (`C:\Workspace-java\aCis_gameserver`, `net.sf.l2j.gameserver.GameServer`, em debug no IntelliJ), escutando só em `:7777`. Já na tela de login o cliente tinha uma conexão `127.0.0.1:54896 → 127.0.0.1:7777`.
- Entrada no mundo registrada pelo servidor: `[27-10-2026 20:38:46] Enter World -> ADMIN(268480673) IP: /127.0.0.1 HWID: {93f25a3c-…}` (`log/player/enterworld/ADMIN.log`). O HWID é enviado pelo cliente modificado; o aCis original não tem esse campo.

## Proteção do processo (confirma 93 §6 e 99)

- A lista de módulos do processo volta **vazia** tanto do PowerShell 64-bit quanto do 32-bit (`Process.Modules`), e o `tasklist /m` mostra `N/A`, com o processo respondendo. A lista de carregamento do PEB foi escondida.
- `OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ)` é **negado**; só a consulta limitada funciona. A proteção corta os direitos de acesso ao processo.
- Esse comportamento é coerente com a proteção do servidor (`clmods.dll`, empacotada) identificada estaticamente. Não foi feita nenhuma tentativa de contornar; por isso não há lista de módulos nem leitura de memória nesta sessão.

## Arquivos gravados pelo cliente

| arquivo | quando | o que confirma do mapa estático |
|---|---|---|
| `System\s_info.ini` | 20:38:50 (seleção de servidor, logo antes da entrada no mundo) | `NCServerSelectWnd` usa as strings `s_info.ini`, `Date` e `Time` (98/99): seções `[1]..[3]` com `Time=0` e `[Date] Time=740503` |
| `System\WindowsInfo.ini` | 20:42:32 (saída) | **47 de 47** janelas com posição gravada têm `savePosition = 1` no xdat (`unk109`, 01 §1.2.4): 40 janelas raiz, as 6 barras de atalho filhas de `ShortcutWnd` (as duas com `-1`, `Horizontal_1/_2`, não foram gravadas) e o `GMInventoryWnd`, que herda de `InventoryWnd` pelo `superName`. **6 de 6** janelas com tamanho gravado (`DuelManager`, `PartyWnd`, `PetStatusWnd`, `StatusWnd`, `SummonedStatusWnd`, `TargetStatusWnd`) são exatamente as que têm `saveSize = 1` (`unk110`), o que confirma a correção desse campo. As seções numéricas `[1]..[8]` guardam o chat e as suas abas (`[6]` = 348×187, o tamanho do `ChatWnd`) |
| `System\Option.ini` | 20:42:33 | seções `[Video] [Game] [Audio] [L2WaterEffect] [ClippingRange] [FirstRun] [Key]` mais as seções do servidor `[AutoEnchant] [Neophron] [Potions]` (93 §6) |
| `systextures\Crest.utx` | 20:42:32 | cache de brasões de clã/aliança (pacotes de brasão, 94) |
| `System\L2CompiledShader.bin` | 20:42:32 | cache de shaders do `D3DDrv` |

## Limites desta observação

- Sem acesso à memória (bloqueado pela proteção), não houve rastreio de chamadas, pacotes decifrados nem eventos de UI no processo. O protocolo foi observado só pelos efeitos: conexão, entrada no mundo no servidor e arquivos gravados.
- O servidor não gravou log de chat nesta sessão, então o envio de chat (93 §8.1) não foi conferido em execução.
