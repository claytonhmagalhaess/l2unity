# l2web no Unity

Recriação em Unity 6.6 (URP, C#) do `C:\Users\Clayton\projeto\l2web`, o cliente Lineage II (Interlude) do navegador:
mesmo fluxo e as mesmas regras, agora como aplicação nativa. Conecta num servidor aCis real sem modificá-lo.

- Convenções e mapa arquivo TS → classe C#: [`Assets/L2Web/PORTING.md`](Assets/L2Web/PORTING.md)
- Documentação de protocolo, engenharia reversa e roadmap continuam no projeto original (`docs/`, `PLAN.md`, `ROADMAP.md`).

## O que funciona

Login (RSA + Blowfish), lista de servidores, seleção/criação/exclusão de personagem sobre a cena 3D do `Lobby.unr`
(câmeras do Matinee), entrada no mundo, andar por clique/segurando o botão/teclado (o servidor valida e desvia pelo
geodata), corrida/caminhada com as animações certas para a arma, outros jogadores e NPCs com modelo, equipamento e
animação, alvo, HP/MP/CP, combate e skills (animação, efeitos e tempos do cliente), chat (ler, falar, canais),
janelas originais do `Interface.xdat` (status, inventário, skills, ações, menu do sistema, radar, atalhos F1–F12 em 3
barras, buffs, HTML de NPC, community board, lojas, multisell, diálogos, morte/restart), party, troca, loja privada,
amigos e clã, sentar, dia/noite, música e sons por zona, opções, troca de personagem e logout. O cenário é o geodata
do servidor mais o terreno do Unreal, o BSP e os StaticMeshes reais do mapa.

## Diferenças em relação ao navegador

| Navegador | Unity |
|---|---|
| gateway WebSocket ↔ TCP (porta 8701) | TCP direto no login (2106) e no game server; o gateway não é necessário |
| three.js + GLTFLoader | glTFast em tempo de execução (animações legadas, um `Animation` por parte) |
| DOM/CSS | uGUI montado em código com as texturas originais (`/ui/...`) |
| localStorage | PlayerPrefs (`Config.Get/Set`, chaves `l2web.*`) |
| `#uitest`, `#lobby=` | campos `uiTest` e `lobbyTest` do componente `App` |

**Assets locais (padrão).** A cópia em `Assets/StreamingAssets/L2Web/` (~10 GB: cache do l2web, `l2anim/export` e
`l2anim/out`, `client/music` e `client/Sounds` do cliente Interlude e o geodata do servidor) é lida por `LocalAssets.cs`,
que faz em C# o que o `tools/dev.ts` e o servidor do l2anim faziam: manifestos de modelo (`model_spec.json` + a mesma chave
md5 do `build_model.py`), pedaços de terreno do geodata L2D, WAV recortados dos `.uax` com o XOR desfeito, Ogg com a
assinatura "L2SD" corrigida, ícones e o resto do cache; as respostas batem byte a byte com as do `dev.ts`. O Unity não
importa nada de `StreamingAssets` e copia a pasta para os builds. Todos os 17.359 modelos do `model_spec.json` (player,
npc, weapon, hair, armor) foram pré-gerados pelo `build_model.py` do l2anim e estão na cópia; só faltam 32 peças de
acessório cujas malhas não existem nos pacotes do cliente (o l2anim também as pula). O que mais o `dev.ts` gerava sob
demanda (tiles de mapa ainda não convertidos) só existe se já estiver na cópia. Na janela de conexão do login (Ctrl+Alt+O), o campo de assets aceita `local`
ou a URL do `dev.ts` (modo antigo, pela rede). Teste sem servidor nenhum: `Build\L2Web.exe -l2offline 30 -l2shots pasta`
monta Giran com modelos e música e informa no log quantos pedidos de rede foram feitos (0 no modo local).

## Como rodar

1. Os assets já estão no projeto; o `dev.ts` do l2web não é mais necessário.
2. Servidor L2 ligado (login 2106, game 7777).
3. Abra este projeto no Unity 6000.6.7f1, abra a cena `Assets/Scenes/L2Web.unity` e dê Play.
4. Na tela de login, **Ctrl+Alt+O** (janela de conexão, só de desenvolvimento; o botão Options abre as opções do jogo,
   como no original): login server (`127.0.0.1:2106`), assets (`local`) e
   protocolo ("Servidor com HWID (versão 515)" para o servidor em `C:\Workspace-java\aCis_gameserver`; "aCis original
   (746)" para um aCis sem modificações).

### Executável (Windows)

`Build/L2Web.exe` (gerado com File > Build Profiles ou pelo `BuildPipeline`, cena `Assets/Scenes/L2Web.unity`). Shaders no build
(validado com *Strict Shader Variant Matching*, zero variantes faltando no lobby, nos 9 tipos de material que o
exportador gera para os 7.174 modelos em cache e no mundo): o shader graph `glTF-pbrMetallicRoughness` está em Always
Included Shaders, `Assets/L2Web/Resources/ShaderWarmup/*.mat` garante `_ALPHATEST_ON` e `INSTANCING_ON`, as variantes de
instancing e os três modos de neblina são mantidos (Graphics Settings; a neblina é ligada em código e o build a removia)
e `Assets/L2Web/Shaders/L2WebVariants.shadervariants` fica em Preloaded Shaders. `-l2variants arquivo` carrega e renderiza
uma lista de .glb (em lotes de 24) na frente da câmera do lobby: com a lista dos 7.174 modelos em cache e o build estrito,
0 falhas de carga e 0 variantes faltando. HTTP está liberado no Player para o servidor de assets. Teste automático do executável
(o `tools/e2e.ts` do original):

```
Build\L2Web.exe -screen-fullscreen 0 -screen-width 1280 -screen-height 800 -l2login l2webtest:l2webtest -l2enter 0 -l2shots capturas -l2quit 6
```

`-l2hold segundos` mantém o executável no mundo com o inventário aberto e registra no log (`[hold]`) a posição da janela,
do personagem, a música e cada botão/tecla recebido. `powershell -File osinput.ps1 -Exe Build\L2Web.exe -Log teste.log`
usa isso para testar o executável com mouse e teclado reais do Windows (arrasta o inventário, clica no chão, X senta e
levanta; `osinput2.ps1` também passa o mouse num item (dica), arrasta o item para o slot 7 da barra e fecha a janela
pelo X; `osinput3.ps1` abre as skills (K) e arrasta a Dash para o F8, fecha as janelas (K, I), gira a câmera com o
botão direito até a Clarissa aparecer, clica nela e no link "Quest" do diálogo, digita e envia "oi" no chat, abre as
Opções (Alt+O) e liga/desliga o mudo; `osinput4.ps1` clica no link "[Noblesse Only] teleport" da Clarissa, abre o board
(Alt+B) e o Marketplace; `osinput5.ps1` (com o figurante no Editor) seleciona o outro jogador com um clique, convida
para a party e pede troca pelos botões da janela de alvo, oferece 1 Scroll of Escape (janela de quantidade) e confirma;
`osinput6.ps1` usa `-l2goto 30093` (o executável vai sozinho até o Groot pelo geodata) e compra 1 corante pela janela de
compra (link "Buy Dye", quantidade digitada, Comprar); o log traz o nível RMS do áudio que sai; só envia eventos com a janela do jogo em primeiro plano e devolve o cursor no fim). A injeção precisa de
movimento absoluto (`mouse_event`) e teclas com scan code: o Input System lê o raw input, que o `SetCursorPos` não gera.

Controles: os do cliente original. As teclas da interface vêm da tabela `GamingStateShortcut` do `Interface.xdat`
(F1–F12 e 1–0/−/= usam a barra 1, Ctrl/Shift+F forçam/usam parado, Alt+1..0 e Alt+F1..F10 trocam a página, Esc cancela o
alvo, Enter foca o chat, V/Alt+V inventário, T/K/C/U/N abas da janela principal, X menu do sistema, B board, Alt+H esconde
as janelas, Alt+J o chat, Alt+PgUp/PgDn troca a aba do chat); o resto é o `user.ini` (W/S/setas andam, A/D/setas giram,
botão direito gira a câmera, roda dá zoom). H mostra a ajuda do porte.

## Estrutura

```
Assets/L2Web/Scripts/
  App.cs          fluxo principal (porte do main.ts): telas, pacotes -> mundo/cena/interface, mouse e teclado
  Config.cs Http.cs LoadTrack.cs GameData.cs
  Net/            pacotes, Blowfish, LoginCrypt, RSA, GameCrypt, transporte TCP, cliente de login e de jogo
  World/          coordenadas L2 <-> Unity, entidades, movimento, combate, skills, L2Calc (calc.js do l2anim)
  Render/         GameScene, câmera L2, ator glTF, terreno do geodata e do Unreal, StaticMeshes/BSP, céu, efeitos,
                  áudio, LobbyScene; shaders em Render/Resources
  UI/             UiRoot (Canvas), janelas do Interface.xdat (L2Wnd), HUD (GameUi), HTML de NPC, social, opções,
                  telas do lobby, carregamento
Assets/L2Web/Tests/Editor/   testes EditMode (NUnit): criptografia contra os vetores do Java do aCis, pacotes
                             reais, movimento, combate/L2Calc, câmera
Assets/Scenes/L2Web.unity    cena com o componente App
Assets/L2Web/Scripts/Dev/    Figurante (segundo cliente sem tela que aceita party/troca/amizade, como o game-test.ts
                             com AUTOACCEPT) e TestMouse (mouse virtual do Input System para testar arrastar/dicas)
compile.sh e2e.sh            atalhos para o Unity CLI (recompilar; teste ponta a ponta em Play mode)
```

Diferenças intencionais em relação ao web: o geodata só aparece onde não há terreno do Unreal nem StaticMeshes (o
original deixava manchas cinzas em campo aberto, ex. Breka's Stronghold), os tiles do terreno do Unreal são costurados com
o vizinho (o original deixava uma fresta de 128 unidades nas divisas), os pedaços de geodata são refeitos quando o terreno do
Unreal de um tile chega (depois de um teletransporte o chão cinza do geodata cobria tudo) e o áudio não passa pelo FMOD:
os WAV são lidos à mão e as músicas, Ogg Vorbis de um libVorbis pré-1.0 (2001) que o FMOD recusa, são decodificadas
em streaming pelo NVorbis (`Assets/L2Web/ThirdParty/NVorbis`, MIT).

Robustez a mais que o web: o `Http` limita a 16 pedidos simultâneos e tenta de novo falhas de conexão/5xx (na abertura o
lobby, o cenário e a interface pedem centenas de arquivos; uma falha momentânea deixava a interface sem texturas até
reiniciar), e falhas não ficam no cache de texturas.

Coordenadas: `unity = (-x, z, y) * 0.01` (o glTFast nega o X do glTF; o Unreal e o Unity são de mão esquerda).

## Testes

- `unity command test run --mode EditMode` (ou o Test Runner do Editor): 50 testes.
- `sh e2e.sh start`, `sh e2e.sh login [conta] [senha]`, `sh e2e.sh enter [slot]`, `sh e2e.sh cap <nome>`,
  `sh e2e.sh logs`, `sh e2e.sh stop`: fluxo completo contra o servidor local, com capturas da Game view.
  Navegação de teste até NPCs dentro de prédios: `L2Web.Dev.Navigator.GoTalk(npcId)` (busca no geodata carregado e anda
  em trechos curtos, porque o pathfinding do servidor tem buffer limitado).
  Party/troca: `sh e2e.sh eval 'L2Web.Dev.Figurante.Start("l2webtest2","l2webtest2"); return "";'` e convide/peça troca.
  Recompilar com o Play mode ligado recarrega o domínio e derruba a conexão: o Editor está configurado para recompilar
  só ao sair do Play mode.
  O Play mode precisa recarregar o domínio (Project Settings > Editor > Enter Play Mode Settings: "Reload Domain and
  Scene"): os caches de modelos, texturas e cenário são estáticos e, sem o recarregamento, a sessão seguinte reaproveitava
  objetos que o Unity destrói ao sair do Play (personagens e texturas sumiam; "AnimationClip has been destroyed").
  O aCis bloqueia por 5 min o IP que abre mais de 3 conexões em menos de 1 s; não rode logins em paralelo.
