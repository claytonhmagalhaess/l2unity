# L2Unity

Cliente Lineage II (Interlude) refeito em Unity 6 (URP, C#), com as janelas, regras e comportamento do cliente original.
Conecta num servidor L2 Interlude (aCis) sem modificá-lo.

## Estrutura do repositório

| Pasta | O que é |
|---|---|
| `l2unity/` | Projeto Unity: código em `Assets/L2Web/Scripts`, cena `Assets/Scenes/L2Web.unity`, testes e documentação em `Docs/`. |
| `analises/` | Spec e engenharia reversa do cliente original (comece por `l2-interlude/client_spec/00_indice.md`). |
| `tarefas/` | Uma página por tarefa e por pedido entre áreas; `concluidas/` guarda o histórico. |
| `CLAUDE.md`, `TAREFAS.md` | Regras do workspace e quadro de tarefas. |

Os assets do jogo (~6 GB, ~105 mil arquivos) não ficam no git: ficam num bucket privado do Cloudflare R2 e são baixados
por um script (passo 3).

## Requisitos

- Windows 10 ou 11, 64 bits, com placa de vídeo DirectX 12.
- [Git](https://git-scm.com/download/win) (inclui o Git Bash, usado pelos scripts `.sh`).
- [Python 3](https://www.python.org/downloads/) (3.10 ou mais novo; não precisa de nenhum pacote extra).
- [Unity Hub](https://unity.com/download) com o editor **Unity 6000.6.7f1** (o módulo de build para Windows já vem com o
  editor no Windows).
- Uns 25 GB livres: 6 GB de assets, ~8 GB da pasta `Library` que o Unity gera na primeira abertura e ~6 GB por build.
- Um servidor L2 Interlude (aCis) para jogar: login na porta 2106 e jogo na 7777.

## Instalação

1. **Acesso.** O repositório é privado: peça o convite ao dono (GitHub → Settings → Collaborators).

2. **Clonar.**

   ```sh
   git clone https://github.com/claytonhmagalhaess/l2unity.git
   cd l2unity/l2unity
   ```

   O projeto Unity é a pasta `l2unity/l2unity` (a que tem `Assets/`, `Packages/` e `ProjectSettings/`).

3. **Baixar os assets** (na pasta `l2unity/l2unity`):

   ```sh
   python -I Docs/tools/r2_assets.py baixar
   ```

   Eles vão para `Assets/StreamingAssets/L2Web`. As credenciais ficam em `env/r2-leitura.env`; se o arquivo não vier no
   clone, peça ao dono e coloque-o em `l2unity/env/`. Se a conexão cair, rode de novo: só o que falta é baixado. Para
   conferir a pasta com o bucket: `python -I Docs/tools/r2_assets.py status`.

4. **Abrir no Unity.** No Unity Hub: **Add → Add project from disk** e escolha a pasta `l2unity/l2unity`. Na primeira
   abertura o Unity importa o projeto (pode levar vários minutos). O console pode mostrar avisos; erro de compilação não.

## Executar no Editor

1. Abra a cena **`Assets/Scenes/L2Web.unity`** (se o título da janela do Unity disser "Untitled", a cena não está aberta e
   o Play mostra uma tela vazia).
2. Clique em **Play**. Aparece a tela de login do Lineage II.
3. Na primeira vez, configure o servidor: na tela de login, **Ctrl+Alt+O** abre a janela de conexão (só de
   desenvolvimento), com
   - **login server**: endereço e porta (padrão `127.0.0.1:2106`);
   - **assets**: `local` (a pasta baixada no passo 3);
   - **protocolo**: "Servidor com HWID (versão 515)" para o aCis com HWID, ou "aCis original (746)" para um aCis sem
     modificações.

   O botão **Options** da tela abre as opções do jogo, como no cliente original.
4. Entre com a sua conta do servidor, escolha o servidor e o personagem.

## Gerar o executável

Com o Editor do projeto **fechado**, no Git Bash, na pasta `l2unity/l2unity`:

```sh
"/c/Program Files/Unity/Hub/Editor/6000.6.7f1/Editor/Unity.exe" -batchmode -quit -projectPath "$(pwd -W)" -executeMethod L2WebBuild.Windows -logFile build.log
```

O executável sai em `Build/L2Web.exe`, já com os assets dentro (~6 GB). No fim do `build.log` aparece
`[build] Succeeded erros=0`. Pelo Editor também funciona: **File → Build Profiles → Windows → Build**, com a cena
`Assets/Scenes/L2Web.unity`.

Rodar: dê dois cliques em `Build/L2Web.exe`. Argumentos úteis:

| Argumento | O que faz |
|---|---|
| `-screen-fullscreen 0 -screen-width 1280 -screen-height 800` | janela em vez de tela cheia |
| `-l2offline 30` | mostra Giran com modelos e música, sem servidor (teste dos assets) |
| `-l2login conta:senha -l2enter 0` | entra direto com a conta e o 1º personagem (testes) |
| `-l2shots pasta -l2quit 6` | tira capturas e fecha depois de 6 s |

## Testes

Com o Editor do projeto fechado, no Git Bash, na pasta `l2unity/l2unity`:

```sh
sh Docs/tools/run_tests.sh
```

Roda a suíte EditMode em batchmode e mostra o total e as falhas (resultado em `Docs/test-results.xml`).

## Problemas comuns

- **Tela vazia ao dar Play:** a cena `Assets/Scenes/L2Web.unity` não está aberta (título "Untitled").
- **Modelos, cenário ou sons faltando:** os assets não foram baixados, ou o download parou no meio. Rode
  `python -I Docs/tools/r2_assets.py status` e depois `baixar`.
- **Login recusado ou conexão caindo logo depois do login:** protocolo errado para o servidor (Ctrl+Alt+O na tela de
  login).
- **"Error detecting Visual Studio installations: JSON parse error":** vem da instalação do Visual Studio, não do projeto,
  e não afeta o jogo. Acontece quando o VS foi instalado pelo instalador da Epic (Unreal): o `campaignId` em
  `C:\ProgramData\Microsoft\VisualStudio\Packages\_Instances\<id>\state.json` fica com caracteres inválidos; trocar o
  valor por `"EpicGames_UE5"` (como administrador) resolve.
- **Unity fechando com "GPU device hung":** evite dois Editores do Unity com o jogo rodando ao mesmo tempo.

## Para quem mantém

- Enviar assets novos ou alterados para o bucket (precisa de credencial com gravação):
  `python -I Docs/tools/r2_assets.py enviar`.
- Este repositório é um espelho do workspace local (três repositórios git juntados com `git subtree`); é atualizado com
  `sh sync.sh` na pasta `github-mono` do workspace. Mais detalhes do fluxo em `CLAUDE.md` e em `l2unity/README.md`.
