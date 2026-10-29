# InfinityLauncher.exe - tipos e membros (REA inspect_managed_members, evidence ev_e6ca8cc7e124fddf8edfaa83c4337e35e94d3c49b336227377c9aaa585826495)


## <Module>  (token 0x02000001, extends None)

## <>f__AnonymousType0`3  (token 0x02000002, extends 0x0100000e)
fields:
  - <I>i__Field : var:0
  - <R>i__Field : var:1
  - <V>i__Field : var:2
methods:
  - get_I() -> var:0  [il 7 bytes, rva 0x2050]
  - get_R() -> var:1  [il 7 bytes, rva 0x2058]
  - get_V() -> var:2  [il 7 bytes, rva 0x2060]
  - .ctor(var:0, var:1, var:2) -> void  [il 28 bytes, rva 0x2068]
  - Equals(object) -> bool  [il 89 bytes, rva 0x2088]
  - GetHashCode() -> i4  [il 75 bytes, rva 0x20f0]
  - ToString() -> string  [il 138 bytes, rva 0x2148]

## SparkLauncher.ArquivoJogo  (token 0x02000003, extends 0x0100000e)
fields:
  - Caminho : string
  - Tamanho : i8
  - Sha : string
methods:
  - .ctor() -> void  [il 7 bytes, rva 0x21de]

## SparkLauncher.Manifesto  (token 0x02000004, extends 0x0100000e)
fields:
  - Url : string
  - Versao : string
  - Base : string
  - Exe : string
  - LauncherVersao : string
  - LauncherUrl : string
  - LauncherSha : string
  - Arquivos : class:73<class:12>
  - Apagar : class:73<string>
methods:
  - get_TotalBytes() -> i8  [il 43 bytes, rva 0x21e6]
  - .ctor() -> void  [il 40 bytes, rva 0x2212]

## SparkLauncher.Plano  (token 0x02000005, extends 0x0100000e)
fields:
  - Baixar : class:73<class:12>
  - Apagar : class:73<string>
methods:
  - get_Bytes() -> i8  [il 43 bytes, rva 0x223b]
  - get_Vazio() -> bool  [il 30 bytes, rva 0x2267]
  - .ctor() -> void  [il 29 bytes, rva 0x2286]

## SparkLauncher.Atualizador  (token 0x02000006, extends 0x0100000e)
fields:
  - Paralelos : i4
  - ParalelosMiudos : i4
  - Miudo : i8
  - Grande : i8
  - Tentativas : i4
  - SemDados : valuetype:81
  - Http : class:85
  - Raiz : string
  - arqCache : string
  - cache : class:89<string,valuetype:88>
  - travaCache : object
  - Fase : string modreq:93
  - Detalhe : string modreq:93
  - Feito : i8
  - Total : i8
  - Rede : i8
  - ArqFeitos : i4
  - ArqTotal : i4
methods:
  - .ctor(string) -> void  [il 105 bytes, rva 0x22a4]
  - CriaHttp() -> class:85  [il 101 bytes, rva 0x231c]
  - BaixaTexto(string, valuetype:109, i4) -> class:105<string>  [il 71 bytes, rva 0x2390]
  - SemCache(string) -> string  [il 58 bytes, rva 0x23e4]
  - BuscaManifesto(string, valuetype:109) -> class:105<class:16>  [il 63 bytes, rva 0x242c]
  - Json() -> class:117  [il 25 bytes, rva 0x2477]
  - LeManifesto(string, string) -> class:16  [il 579 bytes, rva 0x2494]
  - CaminhoSeguro(string) -> void  [il 172 bytes, rva 0x2718]
  - Local(string) -> string  [il 22 bytes, rva 0x27d0]
  - CarregaCache() -> void  [il 178 bytes, rva 0x27e8]
  - SalvaCache() -> void  [il 280 bytes, rva 0x28b8]
  - Anota(string, string) -> void  [il 107 bytes, rva 0x2a28]
  - MigraPastaDoJogo(class:16) -> void  [il 461 bytes, rva 0x2ab0]
  - Confere(class:16, bool, valuetype:109) -> class:20  [il 852 bytes, rva 0x2cc0]
  - HashArquivo(string, u1[], valuetype:109) -> string  [il 119 bytes, rva 0x3054]
  - Hex(u1[]) -> string  [il 54 bytes, rva 0x30f4]
  - FaltaNoDisco(class:20) -> i8  [il 24 bytes, rva 0x3136]
  - ConfereEspaco(class:20) -> void  [il 156 bytes, rva 0x3150]
  - Executa(class:16, class:20, valuetype:109) -> class:165  [il 79 bytes, rva 0x31f8]
  - Url(string, string) -> string  [il 51 bytes, rva 0x3253]
  - Baixa(string, class:12, valuetype:109) -> class:165  [il 51 bytes, rva 0x3287]
  - BaixaPara(string, string, i8, string, string, valuetype:109, bool) -> class:165  [il 115 bytes, rva 0x32bc]
  - get_ArqVersao() -> string  [il 22 bytes, rva 0x333b]
  - VersaoInstalada() -> string  [il 42 bytes, rva 0x3354]
  - GravaVersaoInstalada(string) -> void  [il 18 bytes, rva 0x339c]
  - LauncherNovo(class:16) -> bool  [il 57 bytes, rva 0x33cc]
  - AtualizaLauncher(class:16, valuetype:109) -> class:165  [il 71 bytes, rva 0x3414]
  - LimpaLauncherVelho() -> void  [il 38 bytes, rva 0x3467]
  - .cctor() -> void  [il 30 bytes, rva 0x348e]
  - <FaltaNoDisco>b__35_0(class:12) -> i8  [il 61 bytes, rva 0x34b0]

## SparkLauncher.Config  (token 0x02000007, extends 0x0100000e)
fields:
  - Site : string
  - LauncherJson : string
  - ManifestReserva : string
  - Noticias : string
  - PaginaNoticia : string
  - Discord : string
  - YouTube : string
  - Facebook : string
  - NomePastaDados : string
methods:
  - get_Versao() -> class:169  [il 16 bytes, rva 0x34f9]
  - get_VersaoTexto() -> string  [il 12 bytes, rva 0x350a]
  - get_Exe() -> string  [il 16 bytes, rva 0x3517]
  - get_Raiz() -> string  [il 11 bytes, rva 0x3528]
  - get_Dados() -> string  [il 16 bytes, rva 0x3534]

## SparkLauncher.L  (token 0x02000008, extends 0x0100000e)
fields:
  - Pt : bool
methods:
  - T(string, string) -> string  [il 11 bytes, rva 0x3545]

## SparkLauncher.Log  (token 0x02000009, extends 0x0100000e)
fields:
  - trava : object
  - console : bool
methods:
  - AttachConsole(i4) -> bool  [il 0 bytes, rva 0x0]
  - LigaConsole() -> void  [il 17 bytes, rva 0x3554]
  - Escreve(string) -> void  [il 173 bytes, rva 0x3584]
  - .cctor() -> void  [il 11 bytes, rva 0x3668]

## SparkLauncher.Formata  (token 0x0200000a, extends 0x0100000e)
methods:
  - get_C() -> class:249  [il 24 bytes, rva 0x3674]
  - Bytes(r8) -> string  [il 214 bytes, rva 0x3690]
  - Tempo(r8) -> string  [il 215 bytes, rva 0x3774]

## SparkLauncher.ErroLauncher  (token 0x0200000b, extends 0x0100001e)
methods:
  - .ctor(string, class:121) -> void  [il 9 bytes, rva 0x3857]

## SparkLauncher.Nativo  (token 0x0200000c, extends 0x0100000e)
fields:
  - MOVEFILE_REPLACE_EXISTING : i4
  - MOVEFILE_WRITE_THROUGH : i4
methods:
  - MoveFileEx(string, string, i4) -> bool  [il 0 bytes, rva 0x0]
  - Troca(string, string) -> void  [il 135 bytes, rva 0x3864]
  - DiscoCheio(class:121) -> bool  [il 36 bytes, rva 0x38f8]

## SparkLauncher.Args  (token 0x0200000d, extends 0x0100000e)
fields:
  - Lista : class:73<string>
methods:
  - Tem(string) -> bool  [il 12 bytes, rva 0x3928]
  - Valor(string) -> string  [il 47 bytes, rva 0x3938]
  - Linha(string[]) -> string  [il 174 bytes, rva 0x3974]
  - .cctor() -> void  [il 11 bytes, rva 0x3a40]

## SparkLauncher.Grafico  (token 0x0200000e, extends 0x0100000e)
fields:
  - Nomes : string[]
  - Chaves : string[]
  - Argumentos : string[]
  - SegundosParaFalha : i4
methods:
  - Arquivo(string) -> string  [il 12 bytes, rva 0x3a4c]
  - Teste(string) -> string  [il 12 bytes, rva 0x3a59]
  - PastaDoJogo(string) -> string  [il 32 bytes, rva 0x3a66]
  - Le(string) -> i4  [il 117 bytes, rva 0x3a88]
  - Grava(string, i4) -> void  [il 116 bytes, rva 0x3b1c]
  - ArgumentoParaAbrir(string) -> string  [il 72 bytes, rva 0x3bac]
  - ConfereFalha(string, string) -> string  [il 174 bytes, rva 0x3c10]
  - JogoAberto(string) -> bool  [il 41 bytes, rva 0x3cdc]
  - .cctor() -> void  [il 106 bytes, rva 0x3d24]

## SparkLauncher.Janela  (token 0x0200000f, extends 0x01000040)
fields:
  - W : r4
  - H : r4
  - s : r4
  - cabecalho : class:261
  - cabecalhoEscalado : class:261
  - miniaturas : class:261[]
  - widgets : class:73<class:152>
  - sobre : class:152
  - apertado : class:152
  - estado : valuetype:136
  - erro : string
  - at : class:24
  - manifesto : class:16
  - plano : class:20
  - fechando : class:209
  - relogio : class:265
  - minuto : class:265
  - amostras : class:269<valuetype:133<r8,i8>>
  - tempo : class:197
  - velocidade : r8
  - inicioTrabalho : r8
  - noticias : class:73<class:140>
  - ranking : class:89<string,class:73<class:144>>
  - rankingFalhou : bool
  - abaRanking : string
  - servidorOnline : valuetype:225<bool>
  - jogadoresOnline : valuetype:225<i4>
  - wJogar : class:152
  - wTentar : class:152
  - wEngrenagem : class:152
  - brutoNoticias : class:89<string,class:89<string,object>>
  - PNoticias : valuetype:273
  - PRanking : valuetype:273
  - PStatus : valuetype:273
  - PBarra : valuetype:273
  - PJogar : valuetype:273
  - PEngrenagem : valuetype:273
  - Branco : valuetype:277
  - Cinza : valuetype:277
  - Apagado : valuetype:277
  - Prata : valuetype:277
  - Verde : valuetype:277
  - Vermelho : valuetype:277
methods:
  - .ctor() -> void  [il 335 bytes, rva 0x3d9c]
  - get_CreateParams() -> class:281  [il 43 bytes, rva 0x3f08]
  - GetDpiForWindow(native-int) -> i4  [il 0 bytes, rva 0x0]
  - ReleaseCapture() -> bool  [il 0 bytes, rva 0x0]
  - SendMessage(native-int, i4, native-int, native-int) -> native-int  [il 0 bytes, rva 0x0]
  - SetForegroundWindow(native-int) -> bool  [il 0 bytes, rva 0x0]
  - ShowWindow(native-int, i4) -> bool  [il 0 bytes, rva 0x0]
  - DwmSetWindowAttribute(native-int, i4, i4&, i4) -> i4  [il 0 bytes, rva 0x0]
  - Mostra(native-int) -> void  [il 17 bytes, rva 0x3f34]
  - OnHandleCreated(class:285) -> void  [il 113 bytes, rva 0x3f48]
  - AplicaEscala(i4, valuetype:289, valuetype:225<valuetype:289>) -> void  [il 376 bytes, rva 0x3ff0]
  - WndProc(valuetype:301&) -> void  [il 140 bytes, rva 0x4184]
  - Logico(valuetype:309) -> valuetype:305  [il 36 bytes, rva 0x421c]
  - Acha(valuetype:309) -> class:152  [il 96 bytes, rva 0x4244]
  - OnMouseMove(class:313) -> void  [il 70 bytes, rva 0x42b0]
  - OnMouseLeave(class:285) -> void  [il 14 bytes, rva 0x4302]
  - OnMouseDown(class:313) -> void  [il 79 bytes, rva 0x4314]
  - OnMouseUp(class:313) -> void  [il 70 bytes, rva 0x4370]
  - OnShown(class:285) -> void  [il 51 bytes, rva 0x43c4]
  - OnFormClosing(class:317) -> void  [il 36 bytes, rva 0x4403]
  - Confere() -> class:165  [il 55 bytes, rva 0x4428]
  - Define() -> void  [il 196 bytes, rva 0x446c]
  - Falhou(class:121) -> void  [il 84 bytes, rva 0x453c]
  - Trabalha(bool) -> class:165  [il 63 bytes, rva 0x459c]
  - ConfirmaPasta() -> bool  [il 259 bytes, rva 0x45e8]
  - Jogar() -> void  [il 117 bytes, rva 0x46f8]
  - VigiaApi(class:321, string) -> void  [il 85 bytes, rva 0x478c]
  - CliquePrincipal() -> void  [il 83 bytes, rva 0x47f0]
  - Tentar() -> class:165  [il 55 bytes, rva 0x4850]
  - JogoInstalado() -> bool  [il 43 bytes, rva 0x4893]
  - Tique() -> void  [il 274 bytes, rva 0x48c0]
  - AtualizaSite(bool) -> class:165  [il 63 bytes, rva 0x49e0]
  - CarregaNoticias() -> class:165  [il 55 bytes, rva 0x4a2c]
  - Campo(class:89<string,object>, string) -> string  [il 120 bytes, rva 0x4a70]
  - TrocaIdioma(bool) -> void  [il 165 bytes, rva 0x4af4]
  - DataNoticia(string) -> string  [il 66 bytes, rva 0x4bb8]
  - Abre(string) -> void  [il 52 bytes, rva 0x4c08]
  - MontaWidgets() -> void  [il 920 bytes, rva 0x4c58]
  - Hover(class:152) -> bool  [il 23 bytes, rva 0x4ffc]
  - AbreMenu() -> void  [il 1068 bytes, rva 0x5014]
  - Item(class:325, string, class:329, bool, bool) -> void  [il 135 bytes, rva 0x544c]
  - OnPaintBackground(class:337) -> void  [il 1 bytes, rva 0x54df]
  - OnPaint(class:337) -> void  [il 19 bytes, rva 0x54e1]
  - SalvaPrint(string) -> void  [il 124 bytes, rva 0x54f8]
  - Pinta(class:293, class:261) -> void  [il 979 bytes, rva 0x559c]
  - Painel(class:293, valuetype:273, string) -> void  [il 825 bytes, rva 0x59c8]
  - PintaNoticias(class:293) -> void  [il 831 bytes, rva 0x5d50]
  - PintaRanking(class:293) -> void  [il 1287 bytes, rva 0x60c4]
  - PintaStatus(class:293) -> void  [il 901 bytes, rva 0x660c]
  - PintaRodape(class:293) -> void  [il 2152 bytes, rva 0x69c8]
  - PintaJogar(class:293) -> void  [il 1066 bytes, rva 0x72c4]
  - Link(class:293, class:152, string) -> void  [il 294 bytes, rva 0x77a8]
  - Aba(class:293, class:152, string, bool) -> void  [il 239 bytes, rva 0x78ec]
  - Chanfro(valuetype:273, r4) -> class:353  [il 244 bytes, rva 0x79f8]
  - Hexagono(valuetype:273, r4) -> class:353  [il 194 bytes, rva 0x7af8]
  - Arredondado(valuetype:273, r4) -> class:353  [il 180 bytes, rva 0x7bc8]
  - Moldura(class:293, valuetype:273, r4, i4) -> void  [il 214 bytes, rva 0x7c88]
  - Losango(class:293, r4, r4, r4, valuetype:277) -> void  [il 98 bytes, rva 0x7d94]
  - Estrela(class:293, r4, r4, r4, r4) -> void  [il 415 bytes, rva 0x7e14]
  - Engrenagem(class:293, r4, r4, r4, valuetype:277) -> void  [il 232 bytes, rva 0x7fe8]
  - Icone(class:293, i4, r4, r4) -> void  [il 775 bytes, rva 0x80f8]
  - .cctor() -> void  [il 313 bytes, rva 0x8488]
  - <.ctor>b__33_0(object, class:285) -> void  [il 7 bytes, rva 0x85cd]
  - <.ctor>b__33_1(object, class:285) -> void  [il 43 bytes, rva 0x85d8]
  - <>n__0(class:285) -> void  [il 8 bytes, rva 0x860f]
  - <Confere>b__55_0() -> class:20  [il 30 bytes, rva 0x8618]
  - <CarregaNoticias>b__67_2(class:89<string,object>) -> class:140  [il 86 bytes, rva 0x8638]
  - <MontaWidgets>b__79_0() -> void  [il 8 bytes, rva 0x869a]
  - <MontaWidgets>b__79_4() -> void  [il 18 bytes, rva 0x86a3]
  - <MontaWidgets>b__79_5() -> void  [il 18 bytes, rva 0x86b6]
  - <MontaWidgets>b__79_6() -> bool  [il 10 bytes, rva 0x86c9]
  - <MontaWidgets>b__79_7() -> void  [il 8 bytes, rva 0x86d4]
  - <MontaWidgets>b__79_8() -> bool  [il 21 bytes, rva 0x86dd]

## SparkLauncher.Program  (token 0x02000010, extends 0x0100000e)
fields:
  - unico : class:401
methods:
  - Main(string[]) -> i4  [il 433 bytes, rva 0x86f4]
  - TrazJanelaAberta() -> void  [il 82 bytes, rva 0x88c4]
  - ConferePasta() -> void  [il 172 bytes, rva 0x8924]
  - Jogar(class:24, string) -> class:321  [il 134 bytes, rva 0x89ec]
  - Cli() -> class:105<i4>  [il 47 bytes, rva 0x8a80]

## SparkLauncher.Preferencias  (token 0x02000011, extends 0x0100000e)
fields:
  - FecharAoJogar : bool
methods:
  - get_Arq() -> string  [il 16 bytes, rva 0x8abb]
  - Carrega() -> void  [il 176 bytes, rva 0x8acc]
  - Salva() -> void  [il 106 bytes, rva 0x8b98]

## SparkLauncher.Recurso  (token 0x02000012, extends 0x0100000e)
methods:
  - Abre(string) -> class:233  [il 12 bytes, rva 0x8c20]
  - Imagem(string) -> class:261  [il 52 bytes, rva 0x8c30]
  - Bytes(string) -> u1[]  [il 51 bytes, rva 0x8c8c]

## SparkLauncher.Texto  (token 0x02000013, extends 0x0100000e)
fields:
  - colecao : class:437
  - cinzel : class:441
  - corpo : class:441
  - fontes : class:89<string,class:361>
  - tipo : class:445
  - avancos : class:89<string,r4>
methods:
  - .cctor() -> void  [il 216 bytes, rva 0x8ce8]
  - Existe(string) -> bool  [il 28 bytes, rva 0x8dcc]
  - Pega(class:441, r4, valuetype:449) -> class:361  [il 114 bytes, rva 0x8e10]
  - Cinzel(r4, bool) -> class:361  [il 19 bytes, rva 0x8e8e]
  - Corpo(r4) -> class:361  [il 13 bytes, rva 0x8ea2]
  - Largura(class:293, string, class:361, r4) -> r4  [il 64 bytes, rva 0x8eb0]
  - Avanco(class:293, char, class:361) -> r4  [il 187 bytes, rva 0x8efc]
  - Espacado(class:293, string, class:361, valuetype:277, r4, r4, r4) -> void  [il 130 bytes, rva 0x8fc4]
  - Corta(class:293, string, class:361, r4, r4) -> string  [il 86 bytes, rva 0x9064]
  - Simples(class:293, string, class:361, valuetype:277, r4, r4) -> void  [il 47 bytes, rva 0x90c8]
  - Quebra(class:293, string, class:361, valuetype:277, valuetype:273, i4) -> void  [il 116 bytes, rva 0x9114]
  - Centro(class:293, string, class:361, valuetype:277, valuetype:273) -> void  [il 78 bytes, rva 0x91b0]

## <>c  (token 0x02000014, extends 0x0100000e)
nested in: Manifesto
fields:
  - <>9 : class:80
  - <>9__10_0 : class:77<class:12,i8>
methods:
  - .cctor() -> void  [il 11 bytes, rva 0x9228]
  - .ctor() -> void  [il 7 bytes, rva 0x9234]
  - <get_TotalBytes>b__10_0(class:12) -> i8  [il 7 bytes, rva 0x923c]

## <>c  (token 0x02000015, extends 0x0100000e)
nested in: Plano
fields:
  - <>9 : class:84
  - <>9__3_0 : class:77<class:12,i8>
methods:
  - .cctor() -> void  [il 11 bytes, rva 0x9244]
  - .ctor() -> void  [il 7 bytes, rva 0x9250]
  - <get_Bytes>b__3_0(class:12) -> i8  [il 7 bytes, rva 0x9258]

## EntradaCache  (token 0x02000016, extends 0x0100002b)
nested in: Atualizador
fields:
  - Tamanho : i8
  - Data : i8
  - Sha : string

## <>c  (token 0x02000017, extends 0x0100000e)
nested in: Atualizador
fields:
  - <>9 : class:92
  - <>9__26_0 : class:77<string,bool>
  - <>9__32_0 : class:77<class:12,i8>
  - <>9__32_1 : class:77<class:12,string>
  - <>9__37_0 : class:77<class:12,bool>
  - <>9__37_1 : class:77<class:12,i8>
  - <>9__37_3 : class:77<class:12,string>
  - <>9__37_6 : class:77<class:165,bool>
  - <>9__37_7 : class:77<class:165,class:121>
  - <>9__37_8 : class:77<class:121,bool>
  - <>9__37_10 : class:77<class:12,bool>
  - <>9__37_11 : class:77<class:12,bool>
  - <>9__47_0 : class:177<class:165>
methods:
  - .cctor() -> void  [il 11 bytes, rva 0x9260]
  - .ctor() -> void  [il 7 bytes, rva 0x926c]
  - <CaminhoSeguro>b__26_0(string) -> bool  [il 38 bytes, rva 0x9274]
  - <Confere>b__32_0(class:12) -> i8  [il 7 bytes, rva 0x929b]
  - <Confere>b__32_1(class:12) -> string  [il 7 bytes, rva 0x92a3]
  - <Executa>b__37_0(class:12) -> bool  [il 18 bytes, rva 0x92ab]
  - <Executa>b__37_1(class:12) -> i8  [il 7 bytes, rva 0x92be]
  - <Executa>b__37_3(class:12) -> string  [il 7 bytes, rva 0x92c6]
  - <Executa>b__37_6(class:165) -> bool  [il 7 bytes, rva 0x92ce]
  - <Executa>b__37_7(class:165) -> class:121  [il 12 bytes, rva 0x92d6]
  - <Executa>b__37_8(class:121) -> bool  [il 13 bytes, rva 0x92e3]
  - <Executa>b__37_10(class:12) -> bool  [il 15 bytes, rva 0x92f1]
  - <Executa>b__37_11(class:12) -> bool  [il 31 bytes, rva 0x9301]
  - <LimpaLauncherVelho>b__47_0() -> class:165  [il 47 bytes, rva 0x9324]

## <>c__DisplayClass31_0  (token 0x02000018, extends 0x0100000e)
nested in: Atualizador
fields:
  - prefixoVelho : string
  - <>9__0 : class:77<string,bool>
methods:
  - .ctor() -> void  [il 7 bytes, rva 0x935f]
  - <MigraPastaDoJogo>b__0(string) -> bool  [il 24 bytes, rva 0x9367]

## <>c__DisplayClass37_0  (token 0x02000019, extends 0x0100000e)
nested in: Atualizador
fields:
  - ct : valuetype:109
  - <>4__this : class:24
  - m : class:16
  - ultimoSalvo : class:197
  - grandes : class:73<class:12>
methods:
  - .ctor() -> void  [il 7 bytes, rva 0x9380]
  - <Executa>g__Lote|2(class:201<class:12>, i4) -> class:165  [il 71 bytes, rva 0x9388]

## <>c__DisplayClass37_1  (token 0x0200001a, extends 0x0100000e)
nested in: Atualizador
fields:
  - fila : class:205<class:12>
  - falha : class:209
  - CS$<>8__locals1 : class:100
methods:
  - .ctor() -> void  [il 7 bytes, rva 0x93db]
  - <Executa>g__Trabalhador|4() -> class:165  [il 55 bytes, rva 0x93e4]
  - <Executa>b__5(i4) -> class:165  [il 18 bytes, rva 0x9427]

## <>c__DisplayClass37_2  (token 0x0200001b, extends 0x0100000e)
nested in: Atualizador
fields:
  - paraGrandes : class:209
  - CS$<>8__locals2 : class:100
methods:
  - .ctor() -> void  [il 7 bytes, rva 0x943a]
  - <Executa>b__9() -> class:165  [il 55 bytes, rva 0x9444]

## <>c__DisplayClass40_0  (token 0x0200001c, extends 0x0100000e)
nested in: Atualizador
fields:
  - r : class:213
methods:
  - .ctor() -> void  [il 7 bytes, rva 0x9487]
  - <BaixaPara>b__0() -> void  [il 12 bytes, rva 0x948f]

## <AtualizaLauncher>d__46  (token 0x0200001d, extends 0x0100002b)
nested in: Atualizador
fields:
  - <>1__state : i4
  - <>t__builder : valuetype:193
  - <>4__this : class:24
  - m : class:16
  - ct : valuetype:109
  - <exe>5__2 : string
  - <novo>5__3 : string
  - <velho>5__4 : string
  - <>u__1 : valuetype:221<class:213>
  - <>u__2 : valuetype:189
methods:
  - MoveNext() -> void  [il 914 bytes, rva 0x949c]
  - SetStateMachine(class:181) -> void  [il 13 bytes, rva 0x98b8]

## <BaixaPara>d__40  (token 0x0200001e, extends 0x0100002b)
nested in: Atualizador
fields:
  - <>1__state : i4
  - <>t__builder : valuetype:193
  - destino : string
  - ct : valuetype:109
  - tamanho : i8
  - <>4__this : class:24
  - nome : string
  - url : string
  - <>8__1 : class:112
  - shaEsperado : string
  - anotar : bool
  - <parte>5__2 : string
  - <recomecou>5__3 : bool
  - <contadoNoTotal>5__4 : i8
  - <buffer>5__5 : u1[]
  - <tentativa>5__6 : i4
  - <tem>5__7 : i8
  - <sha>5__8 : class:153
  - <cab>5__9 : class:209
  - <>u__1 : valuetype:221<class:213>
  - <>7__wrap9 : class:213
  - <>7__wrap10 : valuetype:241
  - <rede>5__12 : class:233
  - <>u__2 : valuetype:221<class:233>
  - <fs>5__13 : class:157
  - <leitura>5__14 : class:105<i4>
  - <>u__3 : valuetype:221<class:165>
  - <>u__4 : valuetype:221<i4>
  - <>u__5 : valuetype:189
methods:
  - MoveNext() -> void  [il 3319 bytes, rva 0x98c8]
  - SetStateMachine(class:181) -> void  [il 13 bytes, rva 0xa708]

## <BaixaTexto>d__21  (token 0x0200001f, extends 0x0100002b)
nested in: Atualizador
fields:
  - <>1__state : i4
  - <>t__builder : valuetype:245<string>
  - ct : valuetype:109
  - segundos : i4
  - url : string
  - <cts>5__2 : class:209
  - <r>5__3 : class:213
  - <>u__1 : valuetype:221<class:213>
  - <>u__2 : valuetype:221<u1[]>
methods:
  - MoveNext() -> void  [il 539 bytes, rva 0xa718]
  - SetStateMachine(class:181) -> void  [il 13 bytes, rva 0xa98c]

## <BuscaManifesto>d__23  (token 0x02000020, extends 0x0100002b)
nested in: Atualizador
fields:
  - <>1__state : i4
  - <>t__builder : valuetype:245<class:16>
  - forcado : string
  - ct : valuetype:109
  - <url>5__2 : string
  - <>7__wrap2 : class:117
  - <>u__1 : valuetype:221<string>
methods:
  - MoveNext() -> void  [il 630 bytes, rva 0xa99c]
  - SetStateMachine(class:181) -> void  [il 13 bytes, rva 0xac6c]

## <Executa>d__37  (token 0x02000021, extends 0x0100002b)
nested in: Atualizador
fields:
  - <>1__state : i4
  - <>t__builder : valuetype:193
  - ct : valuetype:109
  - <>4__this : class:24
  - m : class:16
  - plano : class:20
  - <>8__1 : class:108
  - <>8__2 : class:100
  - <tarefaGrandes>5__2 : class:165
  - <>7__wrap2 : object
  - <>7__wrap3 : i4
  - <>u__1 : valuetype:189
methods:
  - MoveNext() -> void  [il 1531 bytes, rva 0xac7c]
  - SetStateMachine(class:181) -> void  [il 13 bytes, rva 0xb330]

## Estado  (token 0x02000022, extends 0x0100005d)
nested in: Janela
fields:
  - value__ : i4
  - Conferindo : valuetype:136
  - Pronto : valuetype:136
  - Atualizar : valuetype:136
  - Instalar : valuetype:136
  - Trabalhando : valuetype:136
  - Erro : valuetype:136

## Noticia  (token 0x02000023, extends 0x0100000e)
nested in: Janela
fields:
  - Id : string
  - Data : string
  - Titulo : string
  - Resumo : string
methods:
  - .ctor() -> void  [il 7 bytes, rva 0xb33e]

## Jogador  (token 0x02000024, extends 0x0100000e)
nested in: Janela
fields:
  - Nome : string
  - Clan : string
  - Nivel : i4
  - Pvp : i4
  - Online : bool
methods:
  - .ctor() -> void  [il 7 bytes, rva 0xb346]

## RECT  (token 0x02000025, extends 0x0100002b)
nested in: Janela
fields:
  - L : i4
  - T : i4
  - R : i4
  - B : i4

## Widget  (token 0x02000026, extends 0x0100000e)
nested in: Janela
fields:
  - Area : valuetype:273
  - Clique : class:329
  - Visivel : class:177<bool>
  - Ativo : class:177<bool>
  - Fechar : bool
  - Nome : string
methods:
  - .ctor() -> void  [il 81 bytes, rva 0xb350]

## CoresMenu  (token 0x02000027, extends 0x0100005e)
nested in: Janela
fields:
  - Fundo : valuetype:277
  - Borda : valuetype:277
  - Sel : valuetype:277
methods:
  - get_ToolStripDropDownBackground() -> valuetype:277  [il 6 bytes, rva 0xb3ad]
  - get_MenuBorder() -> valuetype:277  [il 6 bytes, rva 0xb3b4]
  - get_MenuItemBorder() -> valuetype:277  [il 12 bytes, rva 0xb3bb]
  - get_MenuItemSelected() -> valuetype:277  [il 6 bytes, rva 0xb3c8]
  - get_MenuItemSelectedGradientBegin() -> valuetype:277  [il 6 bytes, rva 0xb3cf]
  - get_MenuItemSelectedGradientEnd() -> valuetype:277  [il 6 bytes, rva 0xb3d6]
  - get_ImageMarginGradientBegin() -> valuetype:277  [il 6 bytes, rva 0xb3dd]
  - get_ImageMarginGradientMiddle() -> valuetype:277  [il 6 bytes, rva 0xb3e4]
  - get_ImageMarginGradientEnd() -> valuetype:277  [il 6 bytes, rva 0xb3eb]
  - get_SeparatorDark() -> valuetype:277  [il 12 bytes, rva 0xb3f2]
  - get_SeparatorLight() -> valuetype:277  [il 6 bytes, rva 0xb3ff]
  - get_CheckBackground() -> valuetype:277  [il 12 bytes, rva 0xb406]
  - get_CheckSelectedBackground() -> valuetype:277  [il 12 bytes, rva 0xb413]
  - get_CheckPressedBackground() -> valuetype:277  [il 12 bytes, rva 0xb420]
  - .ctor() -> void  [il 7 bytes, rva 0xb42d]
  - .cctor() -> void  [il 49 bytes, rva 0xb435]

## <<-ctor>b__33_1>d  (token 0x02000028, extends 0x0100002b)
nested in: Janela
fields:
  - <>1__state : i4
  - <>t__builder : valuetype:385
  - <>4__this : class:60
  - <>u__1 : valuetype:381
methods:
  - MoveNext() -> void  [il 151 bytes, rva 0xb468]
  - SetStateMachine(class:181) -> void  [il 13 bytes, rva 0xb51c]

## <>c  (token 0x02000029, extends 0x0100000e)
nested in: Janela
fields:
  - <>9 : class:164
  - <>9__66_2 : class:77<class:89<string,object>,class:144>
  - <>9__67_0 : class:77<class:89<string,object>,bool>
  - <>9__67_1 : class:77<class:89<string,object>,string>
  - <>9__79_1 : class:329
  - <>9__82_1 : class:329
  - <>9__82_2 : class:329
  - <>9__82_3 : class:329
  - <>9__82_4 : class:329
  - <>9__82_5 : class:329
  - <>9__82_8 : class:329
methods:
  - .cctor() -> void  [il 11 bytes, rva 0xb52a]
  - .ctor() -> void  [il 7 bytes, rva 0xb536]
  - <AtualizaSite>b__66_2(class:89<string,object>) -> class:144  [il 154 bytes, rva 0xb540]
  - <CarregaNoticias>b__67_0(class:89<string,object>) -> bool  [il 27 bytes, rva 0xb5e6]
  - <CarregaNoticias>b__67_1(class:89<string,object>) -> string  [il 17 bytes, rva 0xb602]
  - <MontaWidgets>b__79_1() -> void  [il 11 bytes, rva 0xb614]
  - <AbreMenu>b__82_1() -> void  [il 11 bytes, rva 0xb620]
  - <AbreMenu>b__82_2() -> void  [il 11 bytes, rva 0xb62c]
  - <AbreMenu>b__82_3() -> void  [il 11 bytes, rva 0xb638]
  - <AbreMenu>b__82_4() -> void  [il 11 bytes, rva 0xb644]
  - <AbreMenu>b__82_5() -> void  [il 11 bytes, rva 0xb650]
  - <AbreMenu>b__82_8() -> void  [il 19 bytes, rva 0xb65c]

## <>c__DisplayClass58_0  (token 0x0200002a, extends 0x0100000e)
nested in: Janela
fields:
  - <>4__this : class:60
  - reparar : bool
methods:
  - .ctor() -> void  [il 7 bytes, rva 0xb670]
  - <Trabalha>b__1() -> class:20  [il 50 bytes, rva 0xb678]
  - <Trabalha>b__0() -> class:165  [il 55 bytes, rva 0xb6ab]
  - <Trabalha>b__2() -> class:20  [il 45 bytes, rva 0xb6e3]

## <>c__DisplayClass59_0  (token 0x0200002b, extends 0x0100000e)
nested in: Janela
fields:
  - meu : string
methods:
  - .ctor() -> void  [il 7 bytes, rva 0xb711]
  - <ConfirmaPasta>b__0(string) -> bool  [il 48 bytes, rva 0xb719]

## <>c__DisplayClass61_0  (token 0x0200002c, extends 0x0100000e)
nested in: Janela
fields:
  - p : class:321
  - <>4__this : class:60
  - pasta : string
  - exe : string
  - <>9__1 : class:329
methods:
  - .ctor() -> void  [il 7 bytes, rva 0xb74a]
  - <VigiaApi>b__0() -> void  [il 76 bytes, rva 0xb754]
  - <VigiaApi>b__1() -> void  [il 87 bytes, rva 0xb7c8]

## <>c__DisplayClass66_0  (token 0x0200002d, extends 0x0100000e)
nested in: Janela
fields:
  - ct : valuetype:109
  - <>4__this : class:60
methods:
  - .ctor() -> void  [il 7 bytes, rva 0xb82b]
  - <AtualizaSite>b__0() -> class:165  [il 55 bytes, rva 0xb834]
  - <AtualizaSite>b__1() -> class:165  [il 55 bytes, rva 0xb878]

## <>c__DisplayClass79_0  (token 0x0200002e, extends 0x0100000e)
nested in: Janela
fields:
  - k : i4
  - <>4__this : class:60
methods:
  - .ctor() -> void  [il 7 bytes, rva 0xb8bb]
  - <MontaWidgets>b__2() -> bool  [il 40 bytes, rva 0xb8c3]
  - <MontaWidgets>b__3() -> void  [il 43 bytes, rva 0xb8ec]

## <>c__DisplayClass82_0  (token 0x0200002f, extends 0x0100000e)
nested in: Janela
fields:
  - <>4__this : class:60
  - pastaJogo : string
  - m : class:325
  - <>9__11 : class:329
methods:
  - .ctor() -> void  [il 7 bytes, rva 0xb918]
  - <AbreMenu>b__0() -> void  [il 14 bytes, rva 0xb920]
  - <AbreMenu>b__6() -> void  [il 13 bytes, rva 0xb92f]
  - <AbreMenu>b__7() -> void  [il 13 bytes, rva 0xb93d]
  - <AbreMenu>b__9(object, class:393) -> void  [il 44 bytes, rva 0xb94c]
  - <AbreMenu>b__11() -> void  [il 12 bytes, rva 0xb984]

## <>c__DisplayClass82_1  (token 0x02000030, extends 0x0100000e)
nested in: Janela
fields:
  - esta : i4
  - CS$<>8__locals1 : class:188
methods:
  - .ctor() -> void  [il 7 bytes, rva 0xb991]
  - <AbreMenu>b__10() -> void  [il 23 bytes, rva 0xb999]

## <>c__DisplayClass83_0  (token 0x02000031, extends 0x0100000e)
nested in: Janela
fields:
  - acao : class:329
methods:
  - .ctor() -> void  [il 7 bytes, rva 0xb9b1]
  - <Item>b__0(object, class:285) -> void  [il 12 bytes, rva 0xb9b9]

## <AtualizaSite>d__66  (token 0x02000032, extends 0x0100002b)
nested in: Janela
fields:
  - <>1__state : i4
  - <>t__builder : valuetype:193
  - <>4__this : class:60
  - tudo : bool
  - <>u__1 : valuetype:381
methods:
  - MoveNext() -> void  [il 290 bytes, rva 0xb9c8]
  - SetStateMachine(class:181) -> void  [il 13 bytes, rva 0xbb08]

## <CarregaNoticias>d__67  (token 0x02000033, extends 0x0100002b)
nested in: Janela
fields:
  - <>1__state : i4
  - <>t__builder : valuetype:193
  - <>4__this : class:60
  - <arqCache>5__2 : string
  - <texto>5__3 : string
  - <>u__1 : valuetype:389<string>
methods:
  - MoveNext() -> void  [il 526 bytes, rva 0xbb18]
  - SetStateMachine(class:181) -> void  [il 13 bytes, rva 0xbdb0]

## <Confere>d__55  (token 0x02000034, extends 0x0100002b)
nested in: Janela
fields:
  - <>1__state : i4
  - <>t__builder : valuetype:193
  - <>4__this : class:60
  - <>u__1 : valuetype:389<class:16>
  - <>u__2 : valuetype:381
  - <>u__3 : valuetype:389<class:20>
methods:
  - MoveNext() -> void  [il 573 bytes, rva 0xbdc0]
  - SetStateMachine(class:181) -> void  [il 13 bytes, rva 0xc058]

## <OnShown>d__53  (token 0x02000035, extends 0x0100002b)
nested in: Janela
fields:
  - <>1__state : i4
  - <>t__builder : valuetype:385
  - <>4__this : class:60
  - e : class:285
  - <site>5__2 : class:165
  - <arq>5__3 : string
  - <>u__1 : valuetype:381
methods:
  - MoveNext() -> void  [il 619 bytes, rva 0xc068]
  - SetStateMachine(class:181) -> void  [il 13 bytes, rva 0xc2fc]

## <Tentar>d__63  (token 0x02000036, extends 0x0100002b)
nested in: Janela
fields:
  - <>1__state : i4
  - <>t__builder : valuetype:193
  - <>4__this : class:60
  - <>u__1 : valuetype:381
methods:
  - MoveNext() -> void  [il 276 bytes, rva 0xc30c]
  - SetStateMachine(class:181) -> void  [il 13 bytes, rva 0xc43c]

## <Trabalha>d__58  (token 0x02000037, extends 0x0100002b)
nested in: Janela
fields:
  - <>1__state : i4
  - <>t__builder : valuetype:193
  - <>4__this : class:60
  - reparar : bool
  - <>8__1 : class:168
  - <>u__1 : valuetype:381
  - <>u__2 : valuetype:389<class:20>
methods:
  - MoveNext() -> void  [il 793 bytes, rva 0xc44c]
  - SetStateMachine(class:181) -> void  [il 13 bytes, rva 0xc7c0]

## <>c  (token 0x02000038, extends 0x0100000e)
nested in: Program
fields:
  - <>9 : class:224
  - <>9__1_0 : class:413
  - <>9__1_1 : class:417
methods:
  - .cctor() -> void  [il 11 bytes, rva 0xc7ce]
  - .ctor() -> void  [il 7 bytes, rva 0xc7da]
  - <Main>b__1_0(object, class:421) -> void  [il 34 bytes, rva 0xc7e2]
  - <Main>b__1_1(object, class:425) -> void  [il 34 bytes, rva 0xc805]

## <>c__DisplayClass5_0  (token 0x02000039, extends 0x0100000e)
nested in: Program
fields:
  - ct : valuetype:109
  - at : class:24
  - m : class:16
  - completa : bool
  - redeAntes : i8
  - inicio : class:197
methods:
  - .ctor() -> void  [il 7 bytes, rva 0xc828]
  - <Cli>b__0() -> class:20  [il 30 bytes, rva 0xc830]
  - <Cli>b__2() -> class:20  [il 25 bytes, rva 0xc84f]

## <>c__DisplayClass5_1  (token 0x0200003a, extends 0x0100000e)
nested in: Program
fields:
  - parar : class:209
  - CS$<>8__locals1 : class:228
methods:
  - .ctor() -> void  [il 7 bytes, rva 0xc869]
  - <Cli>b__1() -> class:165  [il 55 bytes, rva 0xc874]

## <Cli>d__5  (token 0x0200003b, extends 0x0100002b)
nested in: Program
fields:
  - <>1__state : i4
  - <>t__builder : valuetype:245<i4>
  - <>8__1 : class:228
  - <>8__2 : class:232
  - <relogio>5__2 : class:197
  - <>u__1 : valuetype:389<class:16>
  - <>u__2 : valuetype:381
  - <>u__3 : valuetype:389<class:20>
  - <relato>5__3 : class:165
methods:
  - MoveNext() -> void  [il 1980 bytes, rva 0xc8b8]
  - SetStateMachine(class:181) -> void  [il 13 bytes, rva 0xd0fc]

## <<LimpaLauncherVelho>b__47_0>d  (token 0x0200003c, extends 0x0100002b)
nested in: <>c
fields:
  - <>1__state : i4
  - <>t__builder : valuetype:193
  - <i>5__2 : i4
  - <>u__1 : valuetype:189
methods:
  - MoveNext() -> void  [il 275 bytes, rva 0xd10c]
  - SetStateMachine(class:181) -> void  [il 13 bytes, rva 0xd248]

## <<Executa>g__Lote|2>d  (token 0x0200003d, extends 0x0100002b)
nested in: <>c__DisplayClass37_0
fields:
  - <>1__state : i4
  - <>t__builder : valuetype:193
  - <>4__this : class:100
  - lista : class:201<class:12>
  - paralelos : i4
  - <>8__1 : class:104
  - <tarefas>5__2 : class:73<class:165>
  - <>u__1 : valuetype:189
methods:
  - MoveNext() -> void  [il 584 bytes, rva 0xd258]
  - SetStateMachine(class:181) -> void  [il 13 bytes, rva 0xd4f8]

## <<Executa>g__Trabalhador|4>d  (token 0x0200003e, extends 0x0100002b)
nested in: <>c__DisplayClass37_1
fields:
  - <>1__state : i4
  - <>t__builder : valuetype:193
  - <>4__this : class:104
  - <>u__1 : valuetype:189
methods:
  - MoveNext() -> void  [il 297 bytes, rva 0xd508]
  - SetStateMachine(class:181) -> void  [il 13 bytes, rva 0xd650]

## <<Executa>b__9>d  (token 0x0200003f, extends 0x0100002b)
nested in: <>c__DisplayClass37_2
fields:
  - <>1__state : i4
  - <>t__builder : valuetype:193
  - <>4__this : class:108
  - <>7__wrap1 : valuetype:145<class:12>
  - <>u__1 : valuetype:189
methods:
  - MoveNext() -> void  [il 314 bytes, rva 0xd660]
  - SetStateMachine(class:181) -> void  [il 13 bytes, rva 0xd7c4]

## <>c  (token 0x02000040, extends 0x0100000e)
nested in: Widget
fields:
  - <>9 : class:256
  - <>9__6_0 : class:177<bool>
  - <>9__6_1 : class:177<bool>
methods:
  - .cctor() -> void  [il 11 bytes, rva 0xd7d2]
  - .ctor() -> void  [il 7 bytes, rva 0xd7de]
  - <.ctor>b__6_0() -> bool  [il 2 bytes, rva 0xd7e6]
  - <.ctor>b__6_1() -> bool  [il 2 bytes, rva 0xd7e9]

## <<AtualizaSite>b__0>d  (token 0x02000041, extends 0x0100002b)
nested in: <>c__DisplayClass66_0
fields:
  - <>1__state : i4
  - <>t__builder : valuetype:193
  - <>4__this : class:180
  - <gb>5__2 : bool
  - <lb>5__3 : bool
  - <>7__wrap3 : class:117
  - <>u__1 : valuetype:389<string>
methods:
  - MoveNext() -> void  [il 455 bytes, rva 0xd7ec]
  - SetStateMachine(class:181) -> void  [il 13 bytes, rva 0xd9f4]

## <<AtualizaSite>b__1>d  (token 0x02000042, extends 0x0100002b)
nested in: <>c__DisplayClass66_0
fields:
  - <>1__state : i4
  - <>t__builder : valuetype:193
  - <>4__this : class:180
  - <>7__wrap1 : class:117
  - <>u__1 : valuetype:389<string>
methods:
  - MoveNext() -> void  [il 439 bytes, rva 0xda04]
  - SetStateMachine(class:181) -> void  [il 13 bytes, rva 0xdbfc]

## <<Cli>b__1>d  (token 0x02000043, extends 0x0100002b)
nested in: <>c__DisplayClass5_1
fields:
  - <>1__state : i4
  - <>t__builder : valuetype:193
  - <>4__this : class:232
  - <>u__1 : valuetype:381
methods:
  - MoveNext() -> void  [il 446 bytes, rva 0xdc0c]
  - SetStateMachine(class:181) -> void  [il 13 bytes, rva 0xde0c]