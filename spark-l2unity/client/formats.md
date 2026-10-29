# Formatos de arquivo do cliente

## Inventário (REA/raw/file_inventory.tsv — 5.091 arquivos, 4,1 GB)

| Tipo | Qtd | Bytes | Onde | O que é |
|---|---|---|---|---|
| `.spa` | 430 | 3.695.377.808 | `L2_Data/StreamingAssets/arte/` | Pacotes de arte (AssetBundles Unity cifrados por stream): 153 `cena_X_Y.spa` (tiles do mapa), 154 `data_maps_X_Y.spa`, `data_textures_g11..g15.spa`, `data_zones.spa`, `shaders.spa` (174 MB), `data_music.spa`, `data_multidao.spa`, `data_malhasl2.spa`, `data_systextures_*.spa`… |
| `.spi` | 1 | 732.692 | `arte/indice.spi` | Índice dos pacotes (`SparkArteIndice`: pacotes, dependências, iniciais, assets, cenas) — mesmo contêiner SPK1 |
| `.spk` | 4.609 | 126.571.348 | `StreamingAssets/Data/**` | Dados de jogo cifrados: 4.572 `LineageEffects/<id>.json.spk`, 37 tabelas `Data/Meta/*.txt.spk|*.json.spk` |
| `.geodata` | 4 | 12.791.135 | `Data/Maps/Geodata/16_24, 16_25, 17_24, 17_25` | ZIP (deflate) com um único membro `geodata` (~8,7 MB cada), datado 2024-02-03 — formato L2J (regiões 16_24..17_25 = área Giran/Dion/Aden central) |
| `.bank` | 10 | 25.635.438 | `StreamingAssets/*.bank` | FMOD Studio banks: Master, Master.strings, AmbSound, ChrSound, InterfaceSound, ItemSound, MonSound, Music, SkillSound, StepSound |
| `.assets/.resS/level0/level1/globalgamemanagers` | | ~310 MB | `L2_Data/` | Build Unity padrão (cenas `Assets/Resources/Scenes/Menu.unity` e `Game.unity`) |
| `.dll/.exe` | 10 | 105 MB | raiz e `Plugins/x86_64` | Unity 6000.3.21f1, IL2CPP, plugins FMOD, Resonance Audio, Burst, libonigwrap (Oniguruma — regex para TextMate/highlight) |
| `global-metadata.dat` | 1 | 11.965.636 | `L2_Data/il2cpp_data/Metadata/` | Metadata IL2CPP **versão 39**, não cifrada (ver `il2cpp_metadata_v39_layout.md`) |

## `SPK1` — contêiner cifrado de dados (`SparkCripto`)

```
offset 0  : "SPK1"            (4 bytes, campo SparkCripto.MAGIA)
offset 4  : corpo cifrado     (tamanho múltiplo de 16 — todos os 4.610 arquivos satisfazem (len-4) % 16 == 0)
```

Evidências:
- literal `"SparkCripto: formato invalido (sem carimbo SPK1)"` e literal `"AES"` no metadata;
- classe `SparkCripto` com campos `MAGIA`, `_p` (senha), `_sal` (salt) e métodos `Chave()`, `Cifra(claro)`, `CifraEstavel(claro)`, `EhCifrado(dados)`, `Decifra(cifrado)`;
- corpo múltiplo de 16 ⇒ cifra de bloco com padding (AES). `CifraEstavel` sugere IV determinístico (saída reprodutível para o patcher), `Cifra` sugere IV aleatório prefixado.
- **Confirmado em `native_analysis.md`:** corpo = `IV[16]` + AES-256-CBC-PKCS7; chave = `SHA256("Pr0j3ct-SP4RK-Inf1nity-d4t4-2026|l2-spark::conteudo::v1")` (`_p` = 5 fragmentos unidos por `-`, `_sal` = `l2-spark::conteudo::v1`). Verificado decifrando `LineageEffects/1.json.spk`.
- Leitura via `SparkDados.LerBytes/LerTexto/LerLinhas/AbrirTexto` (campo `EXT` = ".spk"), que decifra na hora: o jogo pede `Data/Meta/Armorgrp_Classic.txt` e `SparkDados` abre `Armorgrp_Classic.txt.spk`.

## `SPA1` — pacote de arte com cifra de stream (`SparkCifraStream`)

```
offset 0  : "SPA1"
offset 4  : uint32 = 0 (reservado/versão) — igual em todos os 430 arquivos
offset 8  : AssetBundle Unity cifrado byte a byte (tamanhos arbitrários, sem alinhamento)
```

Evidências:
- classe `SparkCifraStream : Stream` (CanRead/CanSeek, `set_Position` → cifra com acesso aleatório) com campos `CABECALHO` (=8), `MAGIA`, `OURO` (constante "ouro" = razão áurea 0x9E3779B9, típica de hash/xorshift), `_k`, `_base` (FileStream), `_semente` (seed), `_tamanho`, `_pos`, `_trava`;
- construtores `(arquivo, nomePacote)` e `(cifrado: Stream, nomePacote)` → a chave depende do **nome do pacote**;
- literais `"SparkCifraStream: nao e um pacote de arte ("` e `"SparkCifraStream: Seek antes do inicio"`;
- `SparkArte.Abre/AbreSo/DoPacote/LoadAsync` carregam via `AssetBundle.LoadFromStream` sobre o `SparkCifraStream` (por isso a cifra precisa ser seekable).
- **Confirmado em `native_analysis.md`:** keystream = splitmix64(seed, posição>>3) byte a byte; seed = primeiros 8 bytes de `SHA256(4 palavras derivadas de _k ‖ '|' ‖ nome-do-arquivo-sem-extensão em minúsculas)`. Verificado: `cena_15_20.spa` → `UnityFS`. Constantes em `native_analysis.md` e `tools/spark_decrypt.py`.

## `indice.spi` (`SparkArteIndice`)
Campos: `VERSAO`, `Pacotes`, `Dependencias`, `Iniciais`, `_porNome`, `_assets`, `_cenas`. Métodos `Chave`, `CaminhoResources`, `Pacote`, `Busca`, `BuscaPasta`, `Cena`, `Grava/Le`. É o catálogo asset→pacote usado por `SparkArte.Load(…)` para substituir `Resources.Load` (literal `" (nem no pacote nem no Resources)"`).

## `servidor.txt` / `servidor.txt.vps`
```
ip=192.99.42.182
porta=2108
```
`SparkServidor.Resolve()` lê `StreamingAssets/servidor.txt` (campo `ARQUIVO`); `-servidor host:porta` na linha de comando tem prioridade (`DaLinhaDeComando`). O `.vps` é uma cópia com comentários do editor ("protecao 1.3", VPS em `/opt/infinity`, trocar para `127.0.0.1` para servidor local). Porta 2108 em vez da 2106 padrão.

## `grafico.txt` / `grafico_teste.txt`
`api=dx12` (gravado pelo launcher e por `SparkApiGrafica` no cliente). `grafico_teste.txt` é um marcador: se o jogo fechar antes de 20 s com ele presente, o launcher volta para DX11.

## `Launcher/`
`cache.tsv` (ver launcher/README.md), `version.txt` (`2026.10.28-1511`), `news.json` (166 notícias, de 2026-09-07 a 2026-10-28, bilíngue pt/en), `launcher.log`, `settings.txt`.

## `boot.config`
`gfx-enable-gfx-jobs=1`, `gfx-threading-mode=6`, `hdr-display-enabled=0`, `gc-max-time-slice=3`, `build-guid=ec07d47596784128bfd1fa510011543a`.

## Tabelas `Data/Meta` (nomes = tabelas .dat do cliente original, já convertidas para txt/json)
Armorgrp/Weapongrp/EtcItemgrp/ItemStatData/ItemName (Classic), Chargrp (Freya, Lindvior), Npcgrp/NpcName (Classic e Interlude), Skillgrp/SkillName/SkillSoundgrp/SkillSoundSource (Classic), SkillEncanto/SkillEfeito/MobSkillAnim/SomArmadura (Interlude), SysString/SystemMsg/ActionName (Classic-eu), logongrp, chargrp, mais os JSON próprios do servidor: `Augments_Infinity`, `Itens_Infinity`, `Existentes_Infinity`, `Henna_Infinity`, `Receitas_Infinity`, `Sets_Infinity`, `Portas.json`, `QuestName_Interlude.json`, `SkillConsumo_Servidor.txt`, `EfeitosAcessorio_Classic.json`.
