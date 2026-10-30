# #0023 — Assets menores: textura guardada uma vez só

| Campo | Valor |
|---|---|
| Vaga | render |
| Branch | `feat/render-texturas-unicas` |
| Estado | fazendo |
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

## Decisões e REA

- Observado (coordenadora, 2026-10-29): `shared\StreamingAssets-L2Web` tem 12 GB depois da limpeza do `l2anim\export\raw` e dos logs; o build copia a pasta inteira.
- Observado: `cache\statics` tem 6.663 `.glb` (5,99 GB), dos quais 5,80 GB são PNG embutido (97%); só 9.217 imagens diferentes (nome + tamanho), 1,16 GB; as outras 4,65 GB são cópias repetidas entre arquivos. Medido lendo o chunk JSON de cada `.glb`.
- Observado: `l2anim\export\cache\mesh` tem 6.758 `.glb` (1,54 GB), 1,23 GB de PNG, e só 0,09 GB repetido.
- Observado: `cache\raw` tem 10.942 PNG em 482 pacotes (1,6 GB); 8.866 (1,07 GB) não aparecem nos 951 JSON lidos pelo cliente. O `FxAssets` monta `/raw/<pacote>/Texture/<nome>.png` pelo nome quando a referência não está no mapa dele (`Render/Fx/FxAssets.cs:143`), por isso a fase 2 exige a confirmação em execução.
- Observado: o exportador original dos `.glb` do cenário não está no repo (veio do pipeline do l2web); a fase 1 é um pós-processamento dos `.glb` existentes.
- Inferido: o Spark (4,1 GB) empacota os assets em `.spa` (assinatura `SPA1`, conteúdo comprimido ou cifrado), uma cena por região e texturas em pacotes compartilhados; tem rotinas DXT1 no código. Formato interno não analisado.

## Entrega

- **Commits:** a sub-sessão preenche ao terminar.
- **Testes:** a sub-sessão preenche ao terminar (total e falhas).
- **Tamanhos (antes → depois):** a sub-sessão preenche ao terminar.
- **Falta / fora do escopo:** a sub-sessão preenche ao terminar.

## Pedidos

Nenhum por enquanto.
