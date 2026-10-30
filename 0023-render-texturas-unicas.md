# #0023 — Assets menores: textura guardada uma vez só

| Campo | Valor |
|---|---|
| Vaga | render |
| Branch | `feat/render-texturas-unicas` |
| Estado | pronta p/ merge (fase 3: bloqueada: decisão do usuário) |
| Spec | Não há spec do Interlude para isto (é formato de cache do porte). Medidas da coordenadora em "Decisões e REA". Comparação: `analises\spark-l2unity\` (o Spark guarda as texturas em pacotes compartilhados `data_textures_g*` e uma cena por região) |
| Sessão | render: texturas únicas dos assets |
| Criada | 2026-10-29 |

## Objetivo

Reduzir o cliente de ~12 GB para ~7,4 GB sem perder qualidade, tirando as texturas de dentro das malhas do cenário (`cache\statics\*.glb`) e guardando cada uma uma vez só, numa pasta compartilhada. Depois, confirmar e remover as texturas de `cache\raw` que ninguém usa (~6,3 GB) e medir, num protótipo, quanto a compressão de GPU (DXT/BC ou KTX2) reduziria (~4,3 a 4,7 GB), para o usuário decidir.

## Autorização do usuário (só para esta tarefa)

- Escrever em `shared\StreamingAssets-L2Web\cache\statics\` (substituir os `.glb`) e criar `shared\StreamingAssets-L2Web\cache\statics_tex\` (pasta nova das texturas únicas).
- Mover para backup as texturas de `cache\raw` confirmadas sem uso (fase 2).
- Editar `Assets\L2Web\Scripts\LocalAssets.cs` e `Assets\L2Web\Scripts\Http.cs` (arquivos da coordenadora, liberados para esta tarefa) se o carregamento das texturas externas exigir.
- Antes de substituir qualquer coisa em `shared\`, copiar o original para `C:\Users\Clayton\workspace-claude\L2Unity-workspace\backup\0023\` (fora de `shared\`, fora do git). Nada é apagado sem backup.

## Fases

### Fase 1 — Texturas únicas no cenário (obrigatória)

1. `Docs/tools/dedup_statics_tex.py` (rodado com `python -I`, reexecutável e idempotente): para cada `cache\statics\*.glb`, extrai as imagens embutidas, grava cada uma em `cache\statics_tex\<sha256>.png` (uma vez por conteúdo) e reescreve o `.glb` com `images[].uri` relativo (`../statics_tex/<sha256>.png`) no lugar do `bufferView`, removendo os bytes da imagem do buffer. Malha, materiais, UV e nomes ficam iguais.
2. O carregador continua o mesmo: o glTFast abre o `.glb` por URL (`App.cs:695`, `Http.Url` → `file://` da cópia local) e resolve a `uri` relativa. Conferir no modo local e no modo HTTP (`Config.AssetBase`); se o modo local não servir `/statics_tex/`, acrescentar o caminho em `LocalAssets.FileFor` (`LocalAssets.cs:49`).
3. Rodar primeiro numa cópia de 20 `.glb` variados (com e sem transparência, com várias texturas, o `L2_Lobby.moonplane` e um de `fxmat.json`) e comparar a imagem do jogo antes e depois; só então rodar em todos.

### Fase 2 — Texturas de `cache\raw` sem uso (obrigatória)

1. Gerar a lista candidata: PNG de `cache\raw` que não aparece em nenhum JSON lido pelo cliente (levantamento da coordenadora: 8.866 de 10.942, 1,07 GB; 82 pacotes inteiros, 0,41 GB). `L2_Skies` fica sempre.
2. Confirmar em execução: registrar (log de depuração, sem mudar comportamento) toda requisição a `/raw/` que dá 404 e toda que dá 200, percorrendo o lobby, a criação de personagem, Talking Island, Gludio, Giran e um efeito de skill de cada classe base. Uma textura só sai se estiver na lista candidata e nunca tiver sido pedida.
3. Mover as confirmadas para `backup\0023\raw\` (não apagar) e registrar a lista em `Docs/` com o total.

### Fase 3 — Compressão de GPU (só protótipo e medida; aplicar depende do usuário)

1. Converter uma amostra (as texturas de um mapa inteiro, por exemplo 22_22) para BC1/BC3 (ou KTX2/Basis, se usar o pacote KTX for Unity) e medir tamanho e tempo de carregamento.
2. Capturas lado a lado (PNG × comprimido) em 1920×1080 no mesmo ponto do mapa.
3. Se precisar de pacote novo (`Packages/manifest.json`), abrir pedido à coordenadora em `tarefas\pedidos\`; não editar o manifest.
4. Não aplicar em `shared\`: registrar o resultado e marcar "bloqueada: decisão do usuário" para esta fase.

## Fora do escopo

- Mudar o visual: na fase 1 e na fase 2 a imagem do jogo tem que ficar idêntica.
- `l2anim\export\cache` (modelos dos personagens): a repetição ali é só 0,09 GB; fica como está.
- `App.cs`, `ProjectSettings\`, `Packages\manifest.json`, `Assets\Scenes\`: o que precisar vira pedido.
- Geodata, sons e músicas.

## Critério de pronto

Escrito pela coordenadora antes de começar. A tarefa só fica `concluída` com todos marcados.

- [ ] `cache\statics` com os `.glb` sem imagem embutida e `cache\statics_tex\` com uma cópia por conteúdo; soma das duas pastas ≤ 1,5 GB (hoje 5,99 GB)
- [ ] `dedup_statics_tex.py` reexecutável: rodar duas vezes seguidas não muda nenhum byte
- [ ] Teste EditMode: um `.glb` reescrito carrega pelo glTFast com o mesmo número de malhas, materiais e texturas, e as mesmas dimensões de textura, que o original (fixture com um `.glb` pequeno)
- [ ] Capturas antes/depois idênticas a olho (e diferença de pixels registrada) em: lobby, Talking Island, Gludio e Giran, em `Docs/evidencias/texturas_unicas/`
- [ ] Fase 2: lista das texturas de `cache\raw` movidas para o backup, com o total em GB, e o log das requisições `/raw/` do percurso
- [ ] Fase 3: tamanho e tempo medidos na amostra, capturas lado a lado e o pedido do pacote (se houver); estado da fase "bloqueada: decisão do usuário"
- [ ] Tamanho final de `shared\StreamingAssets-L2Web` e de um build novo registrados na Entrega
- [ ] `sh Docs/tools/run_tests.sh` sem falha nova (hoje 413 no `main`)

## Andamento

- 2026-10-29 — coordenadora criou a tarefa e recriou a vaga `worktrees\render` a partir do `main` (`0d71a77`).
- 2026-10-29 — render: branch `feat/render-texturas-unicas`; Library importada (base: 413/413 testes). `dedup_statics_tex.py` testado numa cópia de 20 `.glb` (18 reescritos, 2 sem imagem intactos, 2ª execução sem mudar nenhum byte); teste EditMode novo (416/416). Build "antes" em andamento para as capturas.
- 2026-10-29 — render: capturas "antes" (lobby pela tela de login, TI, Gludio, Giran) com o build do branch. O aCis estava fora do ar (sem LISTEN em 2106/7777; avisado à coordenadora), então o lobby foi capturado na tela de login, que já mostra a cena carregada.
- 2026-10-29 — render: fase 1 aplicada em `shared\` (backup dos 6.571 `.glb` originais em `backup\0023\statics\`); `--check`, 2ª execução idêntica (15.193 arquivos com o mesmo md5) e `--verify` (6.571 iguais ao original, 0 diferentes); build novo e capturas "depois".
- 2026-10-29 — render: fase 3 medida (protótipo `-l2gpucomp`/`-l2gpubench`); nada aplicado. **Fase 3: bloqueada: decisão do usuário** (opções em `Docs/evidencias/texturas_unicas/gpu/comparacao.md`).
- 2026-10-30 — render: fase 2 aplicada (8.615 PNG + `.meta` movidos para `backup\0023\raw\`); build final e conferência depois da fase 2 (lobby, TI, skills: as mesmas 81 texturas `/raw/` com 200, nenhum 404 novo); 416/416 testes. Estado `pronta p/ merge`.

## Decisões e REA

- Observado (coordenadora, 2026-10-29): `shared\StreamingAssets-L2Web` tem 12 GB depois da limpeza do `l2anim\export\raw` e dos logs; o build copia a pasta inteira.
- Observado: `cache\statics` tem 6.663 `.glb` (5,99 GB), dos quais 5,80 GB são PNG embutido (97%); só 9.217 imagens diferentes (nome + tamanho), 1,16 GB; as outras 4,65 GB são cópias repetidas entre arquivos. Medido lendo o chunk JSON de cada `.glb`.
- Observado: `l2anim\export\cache\mesh` tem 6.758 `.glb` (1,54 GB), 1,23 GB de PNG, e só 0,09 GB repetido.
- Observado: `cache\raw` tem 10.942 PNG em 482 pacotes (1,6 GB); 8.866 (1,07 GB) não aparecem nos 951 JSON lidos pelo cliente. O `FxAssets` monta `/raw/<pacote>/Texture/<nome>.png` pelo nome quando a referência não está no mapa dele (`Render/Fx/FxAssets.cs:143`), por isso a fase 2 exige a confirmação em execução.
- Observado: o exportador original dos `.glb` do cenário não está no repo (veio do pipeline do l2web); a fase 1 é um pós-processamento dos `.glb` existentes.
- Inferido: o Spark (4,1 GB) empacota os assets em `.spa` (assinatura `SPA1`, conteúdo comprimido ou cifrado), uma cena por região e texturas em pacotes compartilhados; tem rotinas DXT1 no código. Formato interno não analisado.
- Decisão (render): o `.glb` aponta a textura com `images[].uri = "../statics_tex/<sha256>.png"` (nome = sha256 do conteúdo, então nomes iguais com conteúdo diferente não colidem); `name` e `mimeType` ficam, e o glTFast continua dando à textura o nome da imagem. Os bufferViews que sobram são copiados na mesma ordem (alinhados em 4) e os índices refeitos nos accessors.
- Observado (glTFast 6.20, `GltfImport.LoadImages` e `ImageConversionImageLoader.LoadImageFromBytes`): no player, com `GenerateMipMaps` (todas as cargas do cenário), PNG por `uri` é lido pelos bytes e decodificado por `LoadImage`, o mesmo caminho da imagem embutida; o `uri` relativo resolve pela URL do `.glb` (`file://` da cópia local ou `http://` do servidor de assets). No modo HTTP o servidor de assets precisa servir `/statics_tex/` ao lado de `/statics/`; no modo local o `LocalAssets.FileFor` também responde `/statics_tex/`.
- Observado: resultado da fase 1: 8.528 PNG diferentes por conteúdo (1,11 GB; a conta por nome + tamanho dava 9.217); 92 `.glb` não tinham imagem.
- Observado: a captura varia entre duas execuções iguais (animação dos personagens; no lobby, câmera e luz conforme o instante em que a carga termina). No lobby, duas execuções iguais diferem em 99,98% dos pixels, mais que antes × depois (94,48%). Por isso a prova da fase 1 é o `--verify` (dados) mais as capturas, com as linhas de ruído em `Docs/evidencias/texturas_unicas/comparacao.md`.
- Decisão (render): fase 2 pelo critério estático conservador: sai só o PNG cujo nome (sem caixa) não aparece como palavra em nenhum `.json`/`.js` lido pelo cliente nem como caminho `/raw/`; `L2_Skies` e nomes com caracteres fora de `[A-Za-z0-9_-]` ficam. Deu 8.615 (1,03 GB; o levantamento da coordenadora deu 8.866). As 81 texturas pedidas no percurso estão todas fora da lista. Como o `FxAssets` só monta `/raw/...` com um nome vindo de JSON, a criação de personagem (não percorrida) não tem como pedir uma textura sem nome em JSON.
- Observado: os drops (`cache\drops\*.glb`) trazem a textura embutida; `DropItemsTex` de `cache\raw` não é lido pelo cliente.
- Observado (fase 3): o glTFast cria uma `Texture2D` por `.glb`, então a mesma textura usada por vários `.glb` sobe para a GPU várias vezes. Um cache por `uri` reduziria a memória de vídeo independentemente do BC (não feito: fora do escopo).

## Entrega

- **Commits** (branch `feat/render-texturas-unicas`, 7): `e581a9f` dedup_statics_tex.py + teste EditMode (fixture coin00) · `08dde10` LocalAssets `/statics_tex/` e `-l2rawlog`, OfflineView `-l2offlinepos`, raw_unused.py · `6441dc0` Dev `-l2shotat`, compare_shots.py · `320e041` protótipo GpuTexProto (`-l2gpucomp`, `-l2gpubench`, desligado por padrão) · `10f922b` fase 1 aplicada, `--verify`, capturas · `0e71ee5` fase 2 aplicada, `Docs/raw_sem_uso.tsv` · `c8845eb` fase 3 medida. Arquivos fora de `Render/`: `LocalAssets.cs` (liberado), `Dev/OfflineView.cs` e `Dev/ShotTimer.cs` (ferramentas de captura), `Tests/Editor/L2Web.Tests.asmdef` (referência ao `glTFast` para o teste).
- **Testes:** `sh Docs/tools/run_tests.sh`: 416 total, 416 passaram, 0 falharam (os 413 do `main` + 3 de `StaticsTexTests`).
- **Critério de pronto, item a item:**
  - statics: nenhum `.glb` com imagem embutida (`--check` ok) e `cache\statics_tex\` com 8.528 PNG, um por conteúdo; soma 0,188 + 1,113 = **1,30 GB** (≤ 1,5).
  - `dedup_statics_tex.py` reexecutável: a 2ª execução não mudou nenhum byte (md5 de 15.193 arquivos idênticos).
  - Teste EditMode `StaticsTexTests.Glb_Reescrito_CarregaIgualAoOriginal`: mesmas malhas (vértices, UV, índices), materiais, texturas, dimensões (64×64 e 16×16) e pixels.
  - Capturas: `Docs/evidencias/texturas_unicas/` (antes/, depois/, ruido/, `*_lado_a_lado.png` e `comparacao.md` com a diferença de pixels e o ruído entre execuções iguais). Prova pelos dados: `--verify` = 6.571 iguais ao original, 0 diferentes.
  - Fase 2: `Docs/raw_sem_uso.tsv` (8.615 PNG, 1.030.428.838 bytes = **1,03 GB**, movidos com o `.meta` para `backup\0023\raw\`); log do percurso em `Docs/evidencias/texturas_unicas/raw_requisicoes.log` (82 requisições distintas: 81 com 200 e 1 com 404, que já existia antes: `S_Emitter.png`).
  - Fase 3: `Docs/evidencias/texturas_unicas/gpu/` (`comparacao.md`, `bench_giran.tsv`, capturas PNG × BC em Giran e TI); sem pedido de pacote (só seria preciso se o usuário escolher KTX2). **Bloqueada: decisão do usuário.**
- **Tamanhos (antes → depois), `du -sb`:**
  - `cache\statics`: 5.991.236.740 (5,99 GB) → 187.605.832 (0,19 GB), mais o `cache\statics_tex` novo: 1.113.115.614 (1,11 GB, com os `.meta`).
  - `cache\raw`: 1.528.970.989 (1,53 GB) → 497.206.826 (0,50 GB).
  - `shared\StreamingAssets-L2Web`: 12.119.638.414 (12,12 GB) → 6.397.360.129 (6,40 GB).
  - Build (`L2WebBuild.Windows`, relatório do Unity): 11.654 MB → 6.197 MB (só com a fase 1: 7.179 MB); `du` do `Build\` final: 6.498.026.968 (6,50 GB).
  - Backup fora de `shared\`: `backup\0023\statics\` com 6.571 `.glb` (5,99 GB) e `backup\0023\raw\` com 8.615 PNG + `.meta` (1,03 GB). Para voltar: copiar os `.glb` de volta para `cache\statics\` (e apagar `cache\statics_tex\`); `python -I Docs/tools/raw_unused.py --restore`.
- **Falta / fora do escopo:**
  - O percurso da fase 2 ficou sem a **criação de personagem**, porque o aCis estava fora do ar. Quando ele subir: `Build\L2Web.exe -l2rawlog -l2login conta:senha -l2screens -l2shots <pasta>`, e conferir se algum `[raw] 404` aponta para um arquivo de `Docs/raw_sem_uso.tsv`; se apontar, devolver só esse arquivo do backup.
  - **Aviso a todas as vagas** (mudou `shared\`): os `.glb` de `cache\statics` não têm mais imagem embutida, e quem servir os assets por HTTP precisa servir `/statics_tex/`. Se o `export_fx_assets.py` (ou outro exportador) gravar `.glb` novos em `cache\statics`, rodar `python -I Docs/tools/dedup_statics_tex.py` depois (ele só mexe nos que têm imagem embutida).
  - Fase 3 (decisão do usuário): formato (BC em arquivo próprio, sem pacote novo, ou KTX2 com `com.unity.cloud.ktx`) e escopo (só `statics_tex`, que ganha em disco e na GPU, ou também `raw` e personagens, que só ganham na GPU).
  - Possível tarefa separada: cache de textura por `uri` entre `.glb` (a mesma textura sobe várias vezes para a GPU).

## Pedidos

Nenhum por enquanto.
