# Porte do l2web (TypeScript/three.js) para Unity 6.6 (URP)

Fonte original: `C:\Users\Clayton\projeto\l2web\client` (leia o `.ts` inteiro antes de portar; o comportamento deve ser o mesmo).
Docs do original: `C:\Users\Clayton\projeto\l2web\README.md`, `PLAN.md`, `ROADMAP.md`, `docs/protocolo.md`, `docs/re/*.md`.

## Arquitetura no Unity

- **Rede**: TCP direto no login server (2106) e no game server (IP/porta do ServerList). Sem gateway WebSocket.
  Toda a criptografia continua no cliente (igual ao original). A leitura do socket roda numa thread; os pacotes
  vao para uma fila e sao despachados na thread principal (`GameClient`/`LoginClient` chamam os handlers no `Update`).
- **Assets**: vem do servidor de desenvolvimento do l2web (`tools/dev.ts`, `Config.AssetBase` = `http://127.0.0.1:8700`),
  pelas MESMAS URLs que o navegador usava (`/api/model?...`, `/cache/...`, `/terrain/...`, `/map/...`, `/bsp/...`,
  `/statics/...`, `/ui/...`, `/icons/...`, `/sound/...`, `/music/...`, `/drop/...`, `/anim_tables.json`, `/texts.json`,
  `/l2anim/data.js`). Use `Http.Fetch/GetBytes/GetText/GetJson/GetTexture` (`Assets/L2Web/Scripts/Http.cs`).
  Nenhum asset da NCSoft entra no projeto Unity.
- **Modelos .glb**: glTFast 6.20 em tempo de execucao (`GLTFast.GltfImport`, `LoadGltfBinary`/`Load(url)`,
  `InstantiateMainSceneAsync`), com `ImportSettings { AnimationMethod = AnimationMethod.Legacy }` para as animacoes
  (componente `Animation`, um por parte, como os mixers por parte do three).
- **Coordenadas**: `L2Web.World.Coords` (ja escrito). unity = (-x, z, y) * 0.01. Heading -> `Coords.HeadingToUnityDeg`.
  Contas que o TS fazia no espaco do three: converta com `Coords.ThreeToUnity(v)` (nega X) e
  `Coords.ThreeYawToUnityDeg(rad)`. O glTFast ja nega X das malhas, entao modelos e mundo ficam coerentes.
  Prefira calcular em coordenadas do L2 e converter so no fim com `Coords.ToUnity`.
- **Async**: `Promise<T>` -> `Task<T>`; `void promise` -> `task.Forget()` (`TaskExt` em Http.cs);
  `setTimeout(fn, ms)` -> `await Task.Delay(ms)`; `performance.now()` -> `LoadTrack.Now()` (ms);
  `track(p)` -> `LoadTrack.Track(p)`. `requestAnimationFrame`/loop -> metodo `Tick(float dt)` chamado pelo `Update`
  do MonoBehaviour principal (`L2Web.App`, Scripts/App.cs, escrito por ultimo).
- **localStorage** -> `Config.Get/Set` (PlayerPrefs).
- **Materiais criados em codigo**: URP (`Shader.Find("Universal Render Pipeline/Lit")`, `.../Unlit`,
  `.../Particles/Unlit`). Cores do three (0xRRGGBB) -> `new Color32(r,g,b,255)`.
- **Entrada**: Input System novo (`UnityEngine.InputSystem`: `Keyboard.current`, `Mouse.current`). O projeto usa SO o
  Input System (activeInputHandler = 1); `UnityEngine.Input` NAO funciona.
- **UI**: uGUI montado em codigo (Canvas Screen Space Overlay, `CanvasScaler`), texto com o `UnityEngine.UI.Text` /
  `InputField` legados e a fonte embutida `Resources.GetBuiltinResource<Font>("LegacyRuntime.ttf")` (o projeto NAO tem
  os TMP Essentials importados; TextMeshPro nao renderiza). Rich text do uGUI (`<b>`, `<color=#rrggbb>`) pode ser usado.
  Texturas da interface original vem de `/ui/...` (cache/ui do l2web).
- **JSON**: Newtonsoft (`Newtonsoft.Json`, `JObject`/`JToken` quando o formato for dinamico).

## Convencao de nomes (obrigatoria: os modulos sao portados em paralelo e se referenciam por estes nomes)

- Arquivo `client/<dir>/<arq>.ts` -> `Assets/L2Web/Scripts/<Dir>/<Nome>.cs`, namespace `L2Web.<Dir>`
  (`Net`, `World`, `Render`, `UI`). Arquivos da raiz (`data.ts`, `loadtrack.ts`, `main.ts`) -> namespace `L2Web`.
- Funcoes e constantes exportadas soltas de um arquivo viram membros `public static` de uma classe estatica com o
  nome da tabela abaixo. Se o arquivo exporta uma classe com esse mesmo nome, os membros estaticos vao nela.
- Classes exportadas mantem o nome. `interface`/`type` de objeto -> `public class` com campos publicos.
- **Todo membro publico em PascalCase**: `parseUserInfo` -> `ParseUserInfo`, `objectId` -> `ObjectId`,
  `VALIDATE_INTERVAL` -> `ValidateInterval`, `onClose` -> `OnClose`.
- Tipos: inteiros do protocolo (`c/h/d`) -> `int`, `q` -> `long`, `f` -> `double`; posicoes, tempos, velocidades
  no mundo -> `float`; ids/heading -> `int`. Uniao de literais string (`'text' | 'npc'`) -> `string`.
  Opcional `x?: T` -> `T?`/nullable ou referencia null. `Map` -> `Dictionary`, `Set` -> `HashSet`, `Uint8Array` -> `byte[]`.
  Callbacks `onX?: (a) => void` -> `public Action<A> OnX;`. Funcoes que devolvem "off" -> `Action`.
- `THREE.Object3D` -> `GameObject`/`Transform`; `THREE.Vector3` (mundo) -> `UnityEngine.Vector3` em espaco Unity.

| Arquivo TS | Classe estatica / principal em C# |
|---|---|
| net/packet.ts | `PacketReader`, `PacketWriter`; soltas -> `Packet` (`Packet.Hex`) |
| net/blowfish.ts, blowfish_tables.ts | `Blowfish` (`Blowfish.GetLE/PutLE`), `BlowfishTables` |
| net/logincrypt.ts / gamecrypt.ts / rsa.ts | `LoginCrypt` / `GameCrypt` / `Rsa` |
| net/transport.ts | `Transport` (TCP) |
| net/loginclient.ts | `LoginClient` (`LoginClient.Login(...)`), `LoginError`, `LoginResult`, `ServerInfo` |
| net/gameclient.ts | `GameClient` |
| net/gamepackets.ts | `GamePackets` (`GamePackets.ParseUserInfo`, `GamePackets.MoveTo`, `GamePackets.Status.CurHp`...), tipos `UserInfo`, `CharInfo`, `NpcInfo`, `CharSlot`, `Appearance`, `HwidInfo`... |
| net/uipackets.ts / socialpackets.ts | `UiPackets` / `SocialPackets` |
| data.ts | `GameData` (namespace `L2Web`) |
| loadtrack.ts | `LoadTrack` (pronto) |
| l2anim/out/tool/calc.js (window.L2Calc) | `L2Calc` (namespace `L2Web.World`) |
| world/coords.ts | `Coords` (pronto) |
| world/movement.ts | `PawnMotion`; soltas -> `Movement` |
| world/combat.ts / skills.ts | `Combat` / `Skills` (+ `CastPlan`) |
| world/entities.ts | `Entity`, `World` (classe `World` no namespace `L2Web.World`: use `L2Web.World.World` quando ambiguo); soltas -> `Entities` |
| render/actor.ts | `Actor` (estaticos tambem em `Actor`) |
| render/camera.ts | `L2Camera`; soltas -> `CamUtil` (`CAMERA` -> `CamUtil.Cfg`, `rotatorDir` -> `CamUtil.RotatorDir`) |
| render/scene.ts | `GameScene` |
| render/effects.ts / sky.ts | `Effects` / `DayNight` |
| render/terrain.ts | `GeoTerrain` |
| render/terrain_ue.ts | `UeTerrain` |
| render/statics.ts | `Statics` |
| render/audio.ts | `MusicPlayer`, `SfxPlayer`; soltas -> `AudioUtil` |
| render/lobby.ts | `LobbyScene` |
| ui/l2wnd.ts | `L2Layer`, `L2Wnd`; soltas -> `L2WndUtil` |
| ui/windows.ts / html.ts | `UiWindow` / `L2Html` |
| ui/gameui.ts | `GameUi` (estaticos tambem em `GameUi`) |
| ui/lobbyui.ts | `CreatePanel`, `CreateState`; soltas -> `LobbyUi` |
| ui/loading.ts / social.ts / settings.ts / preview.ts | `LoadingScreen` / `SocialUi` / `SettingsUi` / `UiPreview` |
| main.ts | `App` (MonoBehaviour, namespace `L2Web`) |

## Testes

EditMode (NUnit) em `Assets/L2Web/Tests/Editor` (asmdef `L2Web.Tests`). Dados: `Assets/L2Web/Tests/Data/golden.json`
e `Assets/L2Web/Tests/Data/fixtures/*.bin` (copias de `test/`). Caminho: `Path.Combine(Application.dataPath, "L2Web/Tests/Data", ...)`.

## Estado (2a leva)

Prontos e testados: `Scripts/Net/*` (rede, 22 testes + login real), `Scripts/World/*` + `GameData.cs` + `Render/Actor.cs`
(mundo, atores glTFast), `Scripts/Render/*` (GameScene, L2Camera/CamUtil, GeoTerrain, UeTerrain, Statics, Effects, DayNight,
MusicPlayer/SfxPlayer/AudioUtil, RenderMats). LEIA o C# real dessas classes antes de usa-las (nao adivinhe pela convencao):
algumas funcoes que no TS devolviam objetos anonimos devolvem classes com sufixo `Info` (ex.: `AttackInfo`, `TeleportInfo`,
`ItemListInfo`, `StatusUpdateInfo.Attrs`); `Paperdoll` e uma classe com campos int; `SysParam` tem `Type`, `Text`, `Value`.

Base da interface: `Scripts/UI/UiRoot.cs` (Canvas unico em pixels, EventSystem do Input System, `Box/Place/Fill/Label/Panel/Css`,
`PointerOverUi()`, `TypingInField()`, `Scale`). Toda tela/janela e filha de `UiRoot.Rect`.
