# InfinityLauncher.exe — engenharia reversa

| Item | Valor |
|---|---|
| Arquivo | `InfinityLauncher.exe` (427.520 bytes) |
| SHA-256 | `58494954d29d5b7eea7ef59098f8352c3b8653effa56658483d8078c43af8b8c` |
| Tipo | PE32 x86, assembly .NET (IL-only, AnyCPU), .NET Framework 4.8, WinForms |
| Assembly | `InfinityLauncher` 1.0.3.0 — InformationalVersion `1.0.3+c40b2ffc345c88d44900b020cfe5d3bbbf8d51f2` (hash do commit git) |
| Produto | "Project SPARK - Infinity", empresa "Project SPARK" |
| Namespace | `SparkLauncher` (18 classes de usuário + closures do compilador) |
| MVID | `c1a4cdaf-9d67-4c48-a423-52553b0494b4` |
| Proteção | nenhuma (sem ofuscação, sem strong-name, nomes em português intactos) |
| Evidência REA | `inspect_managed_artifact` → `ev_acc17349…`, `inspect_managed_members` → `ev_e6ca8cc7…` |

Fontes geradas nesta pasta:

- `src/` — código C# completo decompilado (ilspycmd 9.1, projeto `.csproj` + recursos embutidos: `cabecalho.jpg`, `noticia1..3.jpg`, fontes Cinzel 400/700, `app.manifest` com DPI PerMonitorV2 e longPathAware).
- `members.md` — tipos, campos, métodos, assinaturas e RVAs (REA).
- `call_edges.md` — grafo de chamadas por método (REA, 2.819 arestas).
- `user_strings.md` — 377 literais do heap #US (REA).

## Papel

É um atualizador/instalador com interface própria desenhada à mão (GDI+, sem controles WinForms além do `Form`). Baixa o cliente Unity do bucket Cloudflare R2, confere SHA-256 de cada arquivo, mantém um cache local de hashes e abre `L2.exe` com a API gráfica escolhida.

## Classes

| Classe | Função |
|---|---|
| `Program` | `Main`: parse de args, mutex `Local\SparkInfinityLauncher_<hash da pasta>` (uma instância por pasta), modo CLI ou `Janela`. `Jogar()` abre `L2.exe` com `-force-d3d11/-d3d12/-vulkan`. `ConferePasta()` bloqueia execução dentro de `\AppData\Local\Temp\` e pastas sem permissão de escrita. |
| `Config` | Constantes de URLs (abaixo), pasta de dados `Launcher/` ao lado do exe. |
| `Atualizador` | Todo o pipeline de atualização (manifest, verificação, download, cache, auto-update do launcher). |
| `Manifesto`, `ArquivoJogo`, `Plano` | Modelo do manifest e do plano (baixar/apagar). |
| `Grafico` | Persistência de `grafico.txt` (`api=dx11|dx12|vulkan`) e detecção de falha de API via `grafico_teste.txt`. |
| `Preferencias` | `Launcher/settings.txt` (`lang=pt|en`, `close=0|1`). |
| `Janela` | UI (1.794 linhas): notícias, status do servidor, ranking, botões INSTALAR/ATUALIZAR/JOGAR/TENTAR DE NOVO, engrenagem (API gráfica, idioma, reparar, abrir pasta, fechar ao jogar), links sociais. P/Invoke: `DwmSetWindowAttribute`, `GetDpiForWindow`, `SendMessage`, `ReleaseCapture`, `SetForegroundWindow`, `ShowWindow`. |
| `Log` | `Launcher/launcher.log` (rotaciona em 2 MiB), `AttachConsole(-1)` no modo CLI. |
| `Nativo` | `MoveFileEx(MOVEFILE_REPLACE_EXISTING|WRITE_THROUGH)` para troca atômica `.part`/`.tmp` → destino; detecção de disco cheio (HRESULT 112/39). |
| `Args`, `L`, `Texto`, `Formata`, `Recurso`, `ErroLauncher` | utilitários (args, i18n pt/en, fontes, formatação de bytes, recursos embutidos, exceção amigável). |

## Endpoints e URLs (constantes em `Config` e `Janela`)

| Uso | URL |
|---|---|
| Descoberta do manifest | `https://l2spark.vercel.app/launcher.json` → campo `manifest` |
| Manifest de reserva (fallback) | `https://pub-b1817e859aff494da9f49d01ee0d9e35.r2.dev/manifest.json` (Cloudflare R2 público) |
| Status do servidor | `https://l2spark.vercel.app/api/status?server=infinity` → `{game:bool, login:bool, online:int}` |
| Ranking | `https://l2spark.vercel.app/api/rankings?server=infinity` → `{level:[…], pvp:[…]}` com `name, clan, level, pvp, online` (top 5) |
| Notícias | `https://l2spark.vercel.app/news.json` (cache em `Launcher/news.json`), página `news.html?f=infinity#<id>` |
| Site / Discord / YouTube / Facebook | `https://l2spark.vercel.app`, `https://discord.gg/v7xnsd9dXW`, `https://www.youtube.com/@projectsparkl2`, `https://www.facebook.com/l2jspark/` |

User-Agent: `ProjectSPARK-Launcher/1.0.3 (Windows)`. TLS 1.2/1.3 forçado, gzip/deflate, sem cookies, `Cache-Control: no-cache` + query `?t=<ticks>` para furar cache de CDN.

## Formato do manifest (JSON)

```json
{
  "version": "2026.10.28-1511",
  "base": "<url base relativa ou absoluta, termina com />",
  "exe": "L2.exe",                     // opcional
  "launcher": { "version": "1.0.3", "url": "...", "sha256": "..." },   // opcional: auto-update
  "files": [ { "path": "L2_Data/.../x.spk", "size": 932, "sha256": "..." }, ... ],
  "delete": [ "caminho/relativo", ... ]  // opcional
}
```

Validação `CaminhoSeguro`: rejeita caminhos absolutos, com `:`, segmentos `..`/`.`/vazios, o próprio exe do launcher e qualquer coisa sob `Launcher/`.

## Fluxo de atualização (`Atualizador`)

1. `BuscaManifesto` — lê `launcher.json`, cai para o R2 se falhar.
2. `LauncherNovo` — se `launcher.version` > versão atual: baixa `.new`, confere SHA-256, renomeia exe atual para `.old`, troca e relança com `--atualizado` (mutex espera até 20 s). `.old` é apagado na próxima abertura.
3. `MigraPastaDoJogo` — renomeia `Infinity_Data` → `L2_Data` (migração do exe antigo `Infinity.exe`).
4. `Confere(completa)` — para cada arquivo do manifest: existe e tamanho bate? Se não → baixar. Se o cache (`cache.tsv`) tem tamanho+mtime iguais e não é verificação completa, usa o SHA do cache; senão recalcula SHA-256 (buffer 1 MiB). Arquivos em `delete` que existem → apagar. Se o plano está vazio grava `Launcher/version.txt`.
5. `Executa` — três filas: miúdos (<1 MiB) 12 paralelos, médios 4 paralelos, grandes (≥256 MiB) sequenciais em paralelo com os demais. Exige 256 MiB de folga no disco.
6. `BaixaPara` — download para `<destino>.part` com retomada via `Range:` (checa `Content-Range.From`), SHA-256 incremental, timeout de 30 s sem dados, 5 tentativas com backoff 2·n s, re-download do zero uma vez se o hash final falhar, depois `MoveFileEx` para o destino e anotação no cache.

### `Launcher/cache.tsv`
`caminho \t tamanho \t LastWriteTimeUtc.Ticks \t sha256` — 5.086 linhas, 4.290.759.741 bytes no total; conferi três entradas contra o disco e os hashes batem.

### Linha de comando
`--verificar` (exit 2 se faltar algo), `--atualizar`, `--reparar` (SHA de tudo), `--jogar` (imprime PID), `--manifest <url>`, `--lang pt|en`, `--auto`, `--screenshot <arquivo>` (salva print da janela), `--atualizado` (interno), `--apos` (interno). Códigos de saída: 0 ok, 1 erro, 2 faltam arquivos, 3 já aberto.

## Observações de segurança

- O manifest e os binários vêm por HTTPS mas **não há assinatura**: quem controlar `l2spark.vercel.app` ou o bucket R2 pode distribuir qualquer executável (há validação de caminho, não de origem). A integridade é só SHA-256 declarada no próprio manifest.
- O auto-update do launcher também só confere o SHA-256 informado pelo manifest.
- Não há telemetria além das chamadas acima; nenhuma credencial é tratada pelo launcher.
