# REA — engenharia reversa do cliente "Infinity" (Project SPARK)

Alvo: pasta `C:\Users\Clayton\Downloads\Launcher` (launcher 1.0.3 + cliente Unity `L2.exe` versão `2026.10.28-1511`, 5.091 arquivos, 4,1 GB). Análise estática feita em 2026-10-29 com o MCP REA (provedores `rea-dotnet-static` e Ghidra 12.1.4), scripts Python próprios para o metadata IL2CPP e ilspycmd para o C# do launcher. Nada foi executado; nenhuma conexão foi feita aos servidores.

## Resumo executivo

1. **Launcher** (`InfinityLauncher.exe`): WinForms .NET 4.8 sem ofuscação. Baixa `launcher.json` de `l2spark.vercel.app`, pega a URL do manifest (fallback: bucket Cloudflare R2 `pub-b1817e859aff494da9f49d01ee0d9e35.r2.dev/manifest.json`), compara SHA-256 de cada arquivo com um cache local (`Launcher/cache.tsv`), baixa com retomada HTTP Range, auto-atualiza a si mesmo e abre `L2.exe -force-d3d11|d3d12|vulkan`. Mostra status/ranking/notícias via API do site. Código completo decompilado em `launcher/src/`.
2. **Cliente**: Unity 6000.3.21f1 IL2CPP (URP), derivado do projeto open-source **L2-Unity** (shnok) com 187 classes `Spark*` adicionadas pelo Project SPARK. Conecta por TCP ao login server `192.99.42.182:2108` (`StreamingAssets/servidor.txt`, override `-servidor host:porta`) usando o protocolo retail Interlude (RSA 1024 + Blowfish no login, XOR `GameCrypt` no game) com opcodes extras próprios.
3. **Proteção de conteúdo** (recuperada e verificada): todos os dados (`.spk`, 4.610 arquivos) são `"SPK1" ‖ IV ‖ AES-256-CBC-PKCS7` com chave `SHA256("Pr0j3ct-SP4RK-Inf1nity-d4t4-2026|l2-spark::conteudo::v1")` (`SparkCripto`); toda a arte (`.spa`, 430 AssetBundles, 3,7 GB) é `"SPA1" ‖ 0 ‖ UnityFS XOR keystream splitmix64`, semeado por `SHA256(mistura de 4 constantes ‖ "|" ‖ nome do arquivo em minúsculas)` (`SparkCifraStream`). `tools/spark_decrypt.py` reproduz as duas e abriu um `.spk` (JSON) e um `.spa` (`UnityFS`). O metadata IL2CPP **não** está cifrado, mas usa o layout novo da versão 39 (Unity 6.3), que as ferramentas públicas ainda não entendem — o layout foi reconstruído aqui.
4. **HUD** (ver `hud/README.md`): UI Toolkit; layouts e estilos extraídos de `resources.assets`, texturas exportadas, e o comportamento de cada interação (botões do mouse, hover, arrasto, teclas padrão e comandos de chat) documentado a partir dos handlers decompilados.
5. **Nada é assinado**: manifest, binários e o próprio launcher são aceitos só pelo SHA-256 declarado no manifest servido pelo site.

## Estrutura desta pasta

| Caminho | Conteúdo |
|---|---|
| `launcher/README.md` | Análise do launcher (classes, endpoints, formato do manifest, fluxo de update, CLI, segurança) |
| `launcher/src/` | C# decompilado (ilspycmd) + recursos embutidos |
| `launcher/members.md`, `call_edges.md`, `user_strings.md` | Saída estruturada do REA (`inspect_managed_members`) |
| `client/README.md` | Arquitetura do cliente Unity |
| `client/network.md` | Rede, criptografia, opcodes, lista de pacotes |
| `client/formats.md` | Formatos SPK1/SPA1/geodata/manifest/cache/servidor.txt |
| `client/native_analysis.md` | Decompilação (Ghidra) de SparkCripto/SparkCifraStream/cripto de rede |
| `hud/README.md` | **HUD completa**: 94 UXML + 42 USS reconstruídos, 1.648 texturas PNG, 1.721 handlers decompilados/anotados, fiação de eventos (`events.md`), teclas padrão, comportamento de clique/hover/arrasto/teclado por janela |
| `hud/opcoes.md` | Janela de Opções completa (abas, controles, campos `SparkOpcoes`, chaves `spark.opt.*`, padrões, teclas remapeáveis) |
| `hud/uxml/`, `hud/uss/`, `hud/textures/`, `hud/code/` | Artefatos da HUD |
| `client/all_method_symbols.tsv` | 82.920 símbolos (todas as assemblies) → endereço no GameAssembly |
| `client/il2cpp_metadata_v39_layout.md` | Layout do `global-metadata.dat` v39 (reconstruído) |
| `client/assembly_csharp_api.md` | API completa do Assembly-CSharp com endereços nativos (30.778 linhas) |
| `client/class_index.md`, `spark_classes.md`, `enums.md`, `assemblies.md`, `method_rvas.tsv` | Índices derivados |
| `client/il2cpp_string_literals_interessantes.txt` | 716 literais C# relevantes |
| `raw/` | Inventário (`file_inventory.tsv`), hashes (`binary_hashes.tsv`), strings brutas, metadata parseado (`global_metadata_parsed.json`), todas as 21.904 literais, cópias dos arquivos de configuração, `rea_evidence_bundle.json` (ledger de evidências do REA) |
| `tools/` | `parse_meta.py` (metadata v39), `build_api.py` (API + ponteiros), `spark_decrypt.py` (SPK1/SPA1), `parse_uitk.py` (UXML/USS binários), `annotate_decomp.py` (anota Ghidra com metadata), `DecompTargets.java` (Ghidra headless) |

## Identidade dos binários (SHA-256)

| Arquivo | SHA-256 | Bytes |
|---|---|---|
| InfinityLauncher.exe | 58494954d29d5b7eea7ef59098f8352c3b8653effa56658483d8078c43af8b8c | 427.520 |
| L2.exe | 17415b7fb5958ec8b32ed91653209555ce24fba261da96857f6adf31bb4bbb4a | 667.136 |
| GameAssembly.dll | afa466fdc8a6cadcaa8ede294d69f0cc0a5cd6df723e12e9e3c73142c4992d32 | 58.377.216 |
| UnityPlayer.dll | 5158c9f49db8ce4ed77a5bf10d0ad0faee7a9f246ec9a9c97e7cb9ae1cccec1d | 36.673.448 |
| global-metadata.dat | 4d2a303f3c8e812ca4244c72559eb2defb06a5af85950a083a65d98eb1000191 | 11.965.636 |

(lista completa em `raw/binary_hashes.tsv`)

## Metodologia e limites

- REA: `open_binary`/`inspect_managed_artifact`/`inspect_managed_members` no launcher (evidências `ev_acc17349…`, `ev_e6ca8cc7…`); `open_binary(provider ghidra)` no GameAssembly — a importação de 58 MB excedeu o limite de inicialização de 330 s do provedor (`REA_GHIDRA_STARTUP_TIMEOUT_MS`), então as funções-alvo foram decompiladas com o mesmo Ghidra 12.1.4 em modo headless `-noanalysis` (script em `tools/`).
- Metadata IL2CPP: parser próprio (layout v39 inferido e validado por nomes e opcodes conhecidos). Índices de tipo (`tN`) não foram resolvidos para nomes porque a tabela `Il2CppType` vive no GameAssembly e não foi necessária.
- Observação ≠ execução: tudo aqui é estático. Comportamento de rede, valores de sessão e o conteúdo decifrado dos pacotes não foram observados.
- Não foram extraídos nem decifrados assets; só o formato e as rotinas foram documentados.
