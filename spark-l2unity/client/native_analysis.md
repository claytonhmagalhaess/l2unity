# Análise nativa do GameAssembly.dll (Ghidra 12.1.4)

Alvo: `GameAssembly.dll` SHA-256 `afa466fdc8a6cadcaa8ede294d69f0cc0a5cd6df723e12e9e3c73142c4992d32`, image base `0x180000000`.
Método: endereços obtidos do mapeamento metadata→`Il2CppCodeGenModule.methodPointers` (`method_rvas.tsv`); funções criadas e decompiladas com `tools/DecompTargets.java` em headless `-noanalysis` (69 funções, saída em `native/*.c`); globais de "metadata usage" do IL2CPP decodificados a partir do valor inicial em `.data` (`native/metadata_usage_globals.tsv`: tipo 5 = literal de string, 1 = TypeInfo, 4 = FieldInfo/RVA, 6 = MethodRef); blobs RVA e constantes lidos do `fieldAndParameterDefaultValueData` do metadata; conclusões **verificadas** decifrando arquivos reais com `tools/spark_decrypt.py`.

## 1. `SparkCripto` — contêiner SPK1 (dados `.spk`, índice `.spi`)

| Membro | Endereço | Observado |
|---|---|---|
| `.cctor` | 0x180591360 | `MAGIA = Encoding.UTF8.GetBytes("SPK1")`; `_p = new string[5]{"Pr0j3ct","SP4RK","Inf1nity","d4t4","2026"}` (literais 0x183308760, 0x1833280d0, 0x18330cb50, 0x1832da008, 0x1833113e8, nessa ordem no array) |
| `_sal` | const | `"l2-spark::conteudo::v1"` (default value do campo 7089) |
| `Chave()` | 0x18058FF60 | `SHA256.Create().ComputeHash(UTF8(string.Join("-", _p) + "\|" + _sal))` — o compilador fundiu `"\|"+_sal` na literal `"\|l2-spark::conteudo::v1"` (0x18332EFA8); `String.Join` = `FUN_1817083b0("-", _p)`, `Concat` = `FUN_1817037f0`, `SHA256.Create` = `FUN_18174b3a0` (instancia TypeInfo 26955, vizinho de `SHA256`=26954 ⇒ `SHA256Managed`), `ComputeHash` = `FUN_18172e850` |
| `EhCifrado(b)` | 0x180591240 | `b.Length >= MAGIA.Length+16 && b[0..4]=="SPK1"` |
| `Decifra(c)` | 0x180590BD0 | `Aes.Create()` (TypeInfo 16538 = `System.Security.Cryptography.Aes`), `KeySize=256` (vtable 0x228), `Mode=CBC` (0x248 ← 1), `Padding=PKCS7` (0x268 ← 2), `Key=Chave()` (0x1F8), `IV = c[4..20]` (`Buffer.BlockCopy` 0x1818cf2e0 com 16 bytes), `CreateDecryptor` (0x298), `MemoryStream(c, 20, len-20)` → `CryptoStream` → `MemoryStream.ToArray()` (0x3C8). Lança exceção com "SparkCripto: formato invalido (sem carimbo SPK1)" se o carimbo falhar |
| `Cifra(claro)` | 0x1805906A0 | mesmo `Aes`, `GenerateIV()` (0x2C8), escreve `MAGIA` + `IV` + ciphertext |
| `CifraEstavel(claro)` | 0x1805900D0 | IV determinístico derivado por SHA-256 (usa `Chave()` + `SHA256.ComputeHash` sobre um buffer montado) — detalhes do buffer não extraídos; só o patcher usa |

**Formato final:** `"SPK1" ‖ IV[16] ‖ AES-256-CBC-PKCS7(dados)`, chave = `SHA256("Pr0j3ct-SP4RK-Inf1nity-d4t4-2026|l2-spark::conteudo::v1")`.
Verificação: `Data/LineageEffects/1.json.spk` → `{"SkillId": 1, "CastingActions": [...]}` (873 bytes).

Leitura pelo jogo: `SparkDados.LerBytes/LerTexto/LerLinhas/AbrirTexto(caminho)` (0x180591630/…7C0/…6D0/…520) anexam `EXT=".spk"`, leem e chamam `Decifra`.

## 2. `SparkCifraStream` — pacote SPA1 (arte `.spa`)

| Membro | Endereço | Observado |
|---|---|---|
| `.cctor` | 0x18058F9E0 | `MAGIA = new byte[4]` ← RVA `<PrivateImplementationDetails>` campo #119 = `"SPA1"`; `_k = new ulong[4]` ← RVA campo #90 (32 bytes) |
| `_k` | const RVA | `{0x6C32A9F01D7E5B33, 0xC4E1093B7A2D86F5, 0x15F7D2C08E6B4A91, 0xA03E5B7C19D2F468}` |
| `OURO` | const | `0x9E3779B97F4A7C15` (razão áurea de 64 bits) ; `CABECALHO = 8` |
| `.ctor(arquivo, nomePacote)` | 0x18058FE60 | `FileStream(arquivo, Open, Read, Share.Read, 4096, RandomAccess)`; lê 8 bytes; exige `[0..4]=="SPA1"` (bytes 4..7 ignorados); `_tamanho = Length-8`; `_semente = Semente(nomePacote)` |
| `Semente(nome)` | 0x18058F290 | `nb = UTF8(nome.ToLowerInvariant())`; `buf[0x21+len]`; para i=0..3: `v = (_k[(i+1)&3] >> 7) ^ _k[i] ^ ((i+1)*0x2545F4914F6CDD1D)`, grava `v` LE em `buf[8i]`; `buf[0x20]='\|'`; copia `nb` em `buf[0x21..]`; `seed = BitConverter.ToUInt64(SHA256(buf), 0)` |
| `Mistura(seed, bloco)` | 0x18058EFB0 | **splitmix64**: `z = seed + bloco*0x9E3779B97F4A7C15; z = (z ^ z>>30)*0xBF58476D1CE4E5B9; z = (z ^ z>>27)*0x94D049BB133111EB; return z ^ z>>31` |
| `Xor(seed, pos, buf, ini, n)` | 0x18058F690 | para cada byte na posição absoluta `p` (contada após o cabeçalho): `buf ^= Mistura(seed, p>>3) >> (8*(p&7))`; otimizado em palavras de 8 bytes alinhadas |
| `Read` | 0x18058F000 | posiciona o `FileStream` em `_pos+8`, lê, aplica `Xor(_semente, _pos, …)`, avança `_pos` |
| `Seek/set_Position` | 0x18058F210 / 0x18058FEF0 | acesso aleatório (necessário para `AssetBundle.LoadFromStream`) |
| `CifraArquivo(plano, destino, nomePacote)` | 0x18058EBB0 | lado do patcher |

**Formato final:** `"SPA1" ‖ u32 0 ‖ (AssetBundle UnityFS) XOR keystream(seed(nome))`, `nome` = nome do arquivo sem extensão, em minúsculas (ex.: `cena_15_20`).
Verificação: `arte/cena_15_20.spa` → `UnityFS\0\0\0\0\x085.x.x…` (cabeçalho de AssetBundle).

Esta cifra não é criptografia de verdade: com os 4 `ulong` e o nome do arquivo qualquer um gera o keystream; serve só para impedir abertura direta com AssetStudio/UABE.

## 3. Rede

| Membro | Endereço | Observado |
|---|---|---|
| `LoginClient.STATIC_BLOWFISH_KEY` | RVA campo #110 (`.cctor` 0x180529F40) | `6B 60 CB 5B 82 CE 90 B1 CC 2B 6C 55 6C 6C 6C 6C` — a chave Blowfish estática padrão do login retail Lineage II (igual ao L2J) |
| `GameClient.OnConnectionSuccess` | 0x180527E70 | loga "Connected to GameServer", instancia `ProtocolVersionPacket(version)` com `version` lido de um campo estático int (offset 0x24 do bloco estático do TypeInfo 21193; o metadata tem `GameManager._protocolVersion`) e envia pelo `AsynchronousClient` |
| `ProtocolVersionPacket..ctor(int)` | 0x1804FCB20 | opcode `0x00` + `WriteI(version)` (literal 0x1832CA6A8 = MethodRef de `WriteI`) |
| `SparkServidor.DaLinhaDeComando(out ip, out porta)` | 0x180541D60 | varre `Environment.GetCommandLineArgs()`; acha `-servidor` (comparação de 5+ chars, case-insensitive), pega o próximo arg, separa em `:` → `ip`, `int.TryParse(porta)` |
| `SparkServidor.DoArquivo(out ip, out porta)` | 0x180541ED0 | lê `Application.streamingAssetsPath/servidor.txt`, ignora linhas vazias e `#`, parseia `chave=valor` com `ip` e `porta` |
| `L2_login.NewCrypt`, `GameCrypt` | 0x1807B0xxx, 0x1807AExxx | XOR-pass + checksum e cifra XOR do game server, idênticos ao L2J/L2-Unity (decompilação em `native/`) |

Valor numérico do protocolo ("protecao 1.3" no comentário do `servidor.txt.vps`): **não recuperado** — vive em `GameManager._protocolVersion`, serializado na cena, não em código.

## 4. Como reproduzir
```
python REA/tools/spark_decrypt.py spk "L2_Data/StreamingAssets/Data/Meta/Itens_Infinity.json.spk" itens.json
python REA/tools/spark_decrypt.py spa "L2_Data/StreamingAssets/arte/cena_15_20.spa" cena_15_20.unity3d
```
(O `.spa` decifrado é um AssetBundle padrão; usa `cryptography` se instalado, senão AES puro em Python.)

## 5. Limitações
- Decompilação sem auto-análise completa: callees aparecem como `FUN_*`; nomes foram atribuídos por correlação com o metadata e verificados por execução das rotinas reconstruídas.
- Provedor Ghidra do REA excedeu `REA_GHIDRA_STARTUP_TIMEOUT_MS` (330 s) para este binário; a sessão REA ficou registrada no `raw/rea_evidence_bundle.json` como tentativa.
- Não foram analisados: as demais ~11.400 funções do Assembly-CSharp, o `UnityPlayer.dll`, plugins nativos.
