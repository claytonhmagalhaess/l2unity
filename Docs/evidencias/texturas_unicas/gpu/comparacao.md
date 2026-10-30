# #0023 fase 3: compressão de GPU (protótipo e medida, nada aplicado em `shared\`)

**Estado: bloqueada, aguardando decisão do usuário.** Nenhum asset foi convertido; o protótipo (`Render/GpuTexProto.cs`) só age com
`-l2gpucomp` ou `-l2gpubench`.

## Tamanho (todas as texturas, `Docs/tools/gpu_tex_estimate.py`: DXT1 sem alfa, DXT5 com alfa, com a cadeia de mips)

| conjunto | PNG em disco | BC em disco (sem gzip) | RGBA32+mips na GPU hoje | BC na GPU |
|---|---|---|---|---|
| `cache/statics_tex` (8.528, 1.800 com alfa) | 1,112 GB | 0,568 GB | 3,764 GB | 0,568 GB |
| `cache/raw` antes da fase 2 (10.942, 2.909 com alfa) | 1,358 GB | 1,623 GB | 8,232 GB | 1,623 GB |
| amostra Giran 22_22 (769, 216 com alfa) | 49,2 MB | 27,4 MB (17,8 MB com gzip) | 175,3 MB | 27,4 MB |

- No cenário, BC economiza ~0,54 GB em disco (1,11 → 0,57 GB; com gzip/LZ4 do pacote cairia mais, ~36% na amostra) e ~85% da
  memória de vídeo. No `cache/raw` (efeitos, céu, partículas) o BC fica **maior** que o PNG em disco: só vale pela memória de vídeo.
- O glTFast hoje cria uma `Texture2D` por `.glb`; a mesma textura usada por vários `.glb` é decodificada e sobe para a GPU várias vezes
  (na vista offline de Giran o protótipo comprimiu ~2.500 `Texture2D`; o tile 22_22 sozinho usa 769 PNG diferentes). Um cache de
  textura por `uri` reduziria a memória de vídeo mesmo sem BC (não medido aqui).

## Tempo de carga (amostra Giran, `-l2gpubench`, no player, thread principal)

| | total 769 texturas | mediana | máximo |
|---|---|---|---|
| `LoadImage` do PNG (decodificação + mips + envio) | 599 ms | 0,38 ms | 18,7 ms |
| `LoadRawTextureData` do BC pronto | 8 ms | 0,007 ms | 0,45 ms |

Detalhe por textura em `bench_giran.tsv` (build final, `-batchmode -nographics`; numa execução com janela e GPU deu 602 ms × 15 ms).
Não conta a leitura do disco, que cai junto com o tamanho do arquivo.

## Imagem

1920×1080, mesmo executável, mesmo ponto (`png_*` sem e `bc_*` com `-l2gpucomp`); BC = `Texture2D.Compress` de alta qualidade
em tempo de execução, nas texturas dos StaticMeshes e do BSP; terreno e personagens ficam em PNG. A diferença é pequena (abaixo de 0,4% dos pixels com diferença > 8, parte disso é o ruído entre execuções, ver
`../comparacao.md`); `ti_poco_png_x_bc_zoom.png` amplia o poço de TI (PNG à esquerda, BC à direita). Um compressor offline
(Compressonator, texconv, ou KTX2/Basis pelo pacote `com.unity.cloud.ktx`) costuma dar qualidade igual ou melhor que o
`Texture2D.Compress`.

## Para aplicar (decisão do usuário)

1. Formato: BC1/BC3 em arquivo próprio (`.dds` ou cru + cabeçalho) carregado com `LoadRawTextureData` não exige pacote novo, mas o
   glTFast não lê `.dds`: os `.glb` passariam a referenciar a textura por outro caminho (extensão própria ou troca do material
   depois da carga). KTX2 (BasisU/UASTC) é lido pelo glTFast com o pacote `com.unity.cloud.ktx` (pedido à coordenadora, `Packages/manifest.json`).
2. Escopo: só `statics_tex` (ganho em disco e em memória) ou também `raw`/personagens (ganho só em memória).
3. Qualidade: conferir as texturas com alfa (folhagem, grades) num compressor offline antes de aplicar.

## Diferença de pixels PNG × BC

| captura | A | B | pixels diferentes | diferença > 8 | média abs. | máx. |
|---|---|---|---|---|---|---|
| giran_png_x_bc | `png_giran/offline.png` | `bc_giran/offline.png` | 54.61% | 0.17% | 0.385 | 219 |
| ti_png_x_bc | `png_ti/offline.png` | `bc_ti/offline.png` | 21.18% | 0.37% | 0.223 | 194 |
