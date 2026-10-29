# Classes Spark* (customizações do Project SPARK sobre a base L2-Unity) — 366 classes


## SparkAnimacaoDaSkill
- campos: _codigo, _arma, _clipes
- métodos: _codigo  , _arma  , _clipes  , get_Codigo, get_Arma, get_Clipes

## SparkAnimacoesExtras
- campos: PESCA_LANCA, PESCA_ESPERA, PESCA_CONTROLA, PESCA_PUXA, PESCA_FIM, CADEIRA_SENTA, CADEIRA_ESPERA, CADEIRA_LEVANTA, ARREMESSADO, _clipes, _velocidades, _porRaca
- métodos: PESCA_LANCA  , PESCA_ESPERA  , PESCA_CONTROLA  , PESCA_PUXA  , PESCA_FIM  , CADEIRA_SENTA  , CADEIRA_ESPERA  , CADEIRA_LEVANTA  , ARREMESSADO  , _clipes  , _velocidades  , _porRaca  , get_Total, Clipe, Velocidade, Da, .ctor, .cctor

## SparkEsqueletoAssado.Ancora
- campos: value__, Bacia, Cabeca, MaoDireita, MaoEsquerda, ArmaDireita, ArmaEsquerda
- métodos: value__  , Bacia  , Cabeca  , MaoDireita  , MaoEsquerda  , ArmaDireita  , ArmaEsquerda  

## SparkEsqueletoAssado.Clipe
- campos: Clip, Nome, Evento, LinhaInicial, Quadros, Fps, Duracao, Loop
- métodos: Clip  , Nome  , Evento  , LinhaInicial  , Quadros  , Fps  , Duracao  , Loop  

## SparkEsqueletoAssado
- campos: QUADROS_POR_SEGUNDO, TEXELS_POR_OSSO, ANCORAS, _raca, _ossos, _chaves, _chaveOsso, _textura, _clipes, _ancoraOsso, _ancoras, _ancorasRot, _ancoraEscala, _porClipe, _porNomeDoClipe, _porOsso
- métodos: QUADROS_POR_SEGUNDO  , TEXELS_POR_OSSO  , ANCORAS  , _raca  , _ossos  , _chaves  , _chaveOsso  , _textura  , _clipes  , _ancoraOsso  , _ancoras  , _ancorasRot  , _ancoraEscala  , _porClipe  , _porNomeDoClipe  , _porOsso  , get_Raca, get_QuantidadeDeOssos, get_NomesDosOssos, get_Textura, get_Linhas, get_QuantidadeDeClipes, DadosDoClipe, OssoDaAncora, NomeDoOsso, OnEnable, IndiceDoClipe, IndiceDoOsso, Linha, Quadros, PosicaoDaAncora, get_TemAncoras, LeAncora, EscalaDaAncora, Grava, .ctor

## SparkMultidao.PersonagemGpu
- campos: M0, M1, M2, AnimA, AnimB
- métodos: M0  , M1  , M2  , AnimA  , AnimB  

## SparkMultidao.PecaGpu
- campos: Personagem, Pele, Pintura, Flags, L0, L1, L2
- métodos: Personagem  , Pele  , Pintura  , Flags  , L0  , L1  , L2  

## SparkMultidao.PinturaGpu
- campos: Cor, Emissao, Params
- métodos: Cor  , Emissao  , Params  

## SparkMultidao.VerticeGpu
- campos: Pos, Nrm, Uv
- métodos: Pos  , Nrm  , Uv  

## SparkMultidao.Personagem
- campos: Entidade, Raiz, Animancer, Animator, Anim, Sync, Assado, Fatia, Dentro, Slot, Dist, Espera, Motivo, Sair, Escondidos, Grupos, Camada, EstadoA, EstadoB, ClipeA, ClipeB, Gpu, Seguidos, Reolha
- métodos: Entidade  , Raiz  , Animancer  , Animator  , Anim  , Sync  , Assado  , Fatia  , Dentro  , Slot  , Dist  , Espera  , Motivo  , Sair  , Escondidos  , Grupos  , Camada  , EstadoA  , EstadoB  , ClipeA  , ClipeB  , Gpu  , Seguidos  , Reolha  , .ctor

## SparkMultidao.Seguido
- campos: Osso, Ancora, Ativo, Pos, Rot
- métodos: Osso  , Ancora  , Ativo  , Pos  , Rot  , .ctor

## SparkMultidao.Peca
- campos: Inicio, Quantos
- métodos: Inicio  , Quantos  , .ctor

## SparkMultidao.Origem
- campos: Subs
- métodos: Subs  , .ctor

## SparkMultidao.Album
- campos: W, H, Mips, Formato, Arr, Fatias, Lotes
- métodos: W  , H  , Mips  , Formato  , Arr  , Fatias  , Lotes  , .ctor

## SparkMultidao.Pintura
- campos: Indice, Lote
- métodos: Indice  , Lote  , .ctor

## SparkMultidao.Lote
- campos: Mat, Base, Emissao, Grupos, Lista, Comando, Comandos
- métodos: Mat  , Base  , Emissao  , Grupos  , Lista  , Comando  , Comandos  , .ctor

## SparkMultidao.Inst
- campos: P, Pele, Pintura, Flags, Local
- métodos: P  , Pele  , Pintura  , Flags  , Local  

## SparkMultidao.Grupo
- campos: Peca, Inst
- métodos: Peca  , Inst  , .ctor

## SparkMultidao
- campos: SHADER, PASTA_ASSADOS, HISTERESE, VOLTAS_POR_QUADRO, ENTRADAS_POR_QUADRO, ESPERA_RECUSA, SEM_OSSO, CHECA_A_CADA, TAMANHO_ALBUM, FATIAS_MAX, FLAG_RIGIDA, ID_PERSONAGENS, ID_PECAS, ID_PINTURAS, ID_REMAP, ID_BIND, ID_VERT, ID_OSSOS, ID_BASE, ID_EMISSAO, ID_CULL, _gerente, _todos, _porEntidade, _porSync, _assados, _fatiasDeRaca, _origens, _peles, _pinturasPorMaterial, _albuns, _lotes, _listaLotes, _pinturas, _remap, _bind, _vert, _vertices, _indices, _slotsLivres, _slotsUsados, _verticesSubidos, _indicesSubidos, _layer, _renderingLayerMask, _temLayer, _shader, _carregou, _semSuporte, _malha, _poses, _bufPersonagens, _bufPecas, _bufPinturas, _bufRemap, _bufBind, _bufVert, _bufComandos, _dados, _pecas, _comandos, _sujo, _peleSuja, _pinturaSuja, _malhaSuja, _tmpRenderers, _tmpEsconder, _tmpPecas, _tmpDist, _tmpV, _tmpN, _tmpUv, _tmpI, _falha, _relogio, M_POLITICA, M_ENTRA, M_POSE, M_SOBE, M_DESENHA, <Dentro>k__BackingField, <NaoAssados>k__BackingField, <Voltas>k__BackingField, <Entradas>k__BackingField, <Ms>k__BackingField, _maiorOsso, LAYOUT, SEM_CONTA, _capVertices, _capIndices
- métodos: SHADER  , PASTA_ASSADOS  , HISTERESE  , VOLTAS_POR_QUADRO  , ENTRADAS_POR_QUADRO  , ESPERA_RECUSA  , SEM_OSSO  , CHECA_A_CADA  , TAMANHO_ALBUM  , FATIAS_MAX  , FLAG_RIGIDA  , ID_PERSONAGENS  , ID_PECAS  , ID_PINTURAS  , ID_REMAP  , ID_BIND  , ID_VERT  , ID_OSSOS  , ID_BASE  , ID_EMISSAO  , ID_CULL  , _gerente  , _todos  , _porEntidade  , _porSync  , _assados  , _fatiasDeRaca  , _origens  , _peles  , _pinturasPorMaterial  , _albuns  , _lotes  , _listaLotes  , _pinturas  , _remap  , _bind  , _vert  , _vertices  , _indices  , _slotsLivres  , _slotsUsados  , _verticesSubidos  , _indicesSubidos  , _layer  , _renderingLayerMask  , _temLayer  , _shader  , _carregou  , _semSuporte  , _malha  , _poses  , _bufPersonagens  , _bufPecas  , _bufPinturas  , _bufRemap  , _bufBind  , _bufVert  , _bufComandos  , _dados  , _pecas  , _comandos  , _sujo  , _peleSuja  , _pinturaSuja  , _malhaSuja  , _tmpRenderers  , _tmpEsconder  , _tmpPecas  , _tmpDist  , _tmpV  , _tmpN  , _tmpUv  , _tmpI  , _falha  , _relogio  , M_POLITICA  , M_ENTRA  , M_POSE  , M_SOBE  , M_DESENHA  , <Dentro>k__BackingField  , <NaoAssados>k__BackingField  , <Voltas>k__BackingField  , <Entradas>k__BackingField  , <Ms>k__BackingField  , _maiorOsso  , LAYOUT  , SEM_CONTA  , _capVertices  , _capIndices  , Zera, get_Dentro, set_Dentro, get_Registrados, get_NaoAssados, set_NaoAssados, get_Voltas, set_Voltas, get_Entradas, set_Entradas, get_Ms, set_Ms, get_SemSuporte, get_GruposAtivos, get_Comandos, get_Instancias, get_Motivos, ContaMotivos, Diagnostico, Registra, Contem, SaiAgora, AoMudarPecas, AoMudarArma, Anexou, PosicaoDoOsso, MatrizDoOsso, Segue, get_HardwareSuporta, Consulta, AncoraLocal, Gerente, Carrega, MontaPoses, AssadoDe, Libera, OnDestroy, LateUpdate, Quadro, Forcado, Pronto, Topo, Atualiza, Entra, Sai, TiraTodos, Remove, Limpa, NovoSlot, MontaSeguidos, PoeSeguido, OlhaSeguidos, MoveSeguidos, Falha, Coleta, AlgumaPintura, GuardaLayer, PecaComPele, PecaRigida, GrupoDe, OrigemDe, Copia, MaiorOssoComPeso, PeleDe, PinturaDe, CriaPintura, Tex, Cor, Num, Pula, AlbumDe, Fatia, LoteDe, AplicaAlbuns, SobeMalha, SobePeles, SobePinturas, RefazPecas, Desenha, .ctor, .cctor

## SparkAnimacaoLOD.Nivel
- campos: value__, Inteiro, Espacado, Fora, Multidao
- métodos: value__  , Inteiro  , Espacado  , Fora  , Multidao  

## SparkAnimacaoLOD.Personagem
- campos: Entidade, Raiz, Animancer, Animator, CullingOriginal, Malhas, Centro, Meia, TemCaixa, Revisao, Nivel, Acumulado, Falta
- métodos: Entidade  , Raiz  , Animancer  , Animator  , CullingOriginal  , Malhas  , Centro  , Meia  , TemCaixa  , Revisao  , Nivel  , Acumulado  , Falta  , .ctor

## SparkAnimacaoLOD
- campos: FOLGA, MARGEM, SOMBRA_MAX, REVISAO, HISTERESE, _motor, _todos, _porEntidade, _planos, _tmp, _desligado, <Inteiros>k__BackingField, <Espacados>k__BackingField, <ForaDaTela>k__BackingField, <NaMultidao>k__BackingField, <PosesManuais>k__BackingField
- métodos: FOLGA  , MARGEM  , SOMBRA_MAX  , REVISAO  , HISTERESE  , _motor  , _todos  , _porEntidade  , _planos  , _tmp  , _desligado  , <Inteiros>k__BackingField  , <Espacados>k__BackingField  , <ForaDaTela>k__BackingField  , <NaMultidao>k__BackingField  , <PosesManuais>k__BackingField  , get_Inteiros, set_Inteiros, get_Espacados, set_Espacados, get_ForaDaTela, set_ForaDaTela, get_NaMultidao, set_NaMultidao, get_PosesManuais, set_PosesManuais, get_Resumo, Liga, AtualizaPoseAgora, Pronto, LateUpdate, Aplica, NaTela, ColetaMalhas, Restaura, Remove, Limpa, OnDestroy, .ctor, .cctor

## SparkDesempenho.Relacao
- campos: value__, Outro, Party, Importante
- métodos: value__  , Outro  , Party  , Importante  

## SparkDesempenho
- campos: AnimacaoForaDaTela, AnimacaoPorDistancia, DistanciaMediaBase, DistanciaLongeBase, PosesPorSegundoMedia, PosesPorSegundoLonge, MovimentoEconomico, MultidaoLigada, MaxDetalhados, OrcamentoDeEfeitos, EfeitosDeTerceirosMax, EfeitosEconomicos, EfeitosPorSegundoMedia, EfeitosPorSegundoLonge, SonsIguaisMax, RelacaoDeTeste, EntidadesDeTeste, _quadroCamera, _camera, _temCamera
- métodos: AnimacaoForaDaTela  , AnimacaoPorDistancia  , DistanciaMediaBase  , DistanciaLongeBase  , PosesPorSegundoMedia  , PosesPorSegundoLonge  , MovimentoEconomico  , MultidaoLigada  , MaxDetalhados  , OrcamentoDeEfeitos  , EfeitosDeTerceirosMax  , EfeitosEconomicos  , EfeitosPorSegundoMedia  , EfeitosPorSegundoLonge  , SonsIguaisMax  , RelacaoDeTeste  , EntidadesDeTeste  , _quadroCamera  , _camera  , _temCamera  , get_DistanciaMedia, get_DistanciaLonge, get_DistanciaDeEfeitos, get_DensidadeDeTerceiros, PosicaoDoJogador, RelacaoCom, SomPrioritario, Mostra, PosicaoDaCamera, IntervaloDoEfeito, .cctor

## SparkMalhaUnica.Estado
- campos: Combinado, Entrada, Escondidas, Originais, Assinatura, EsperandoDesde
- métodos: Combinado  , Entrada  , Escondidas  , Originais  , Assinatura  , EsperandoDesde  , .ctor

## SparkMalhaUnica.Nascimento
- campos: Mats, Malha, Sombra
- métodos: Mats  , Malha  , Sombra  , De, .ctor

## SparkMalhaUnica.Chave
- campos: A, B
- métodos: A  , B  , Equals, GetHashCode

## SparkMalhaUnica.Entrada
- campos: Chave, Malha, Materiais, Refs
- métodos: Chave  , Malha  , Materiais  , Refs  , .ctor

## SparkMalhaUnica.Resultado
- campos: value__, Pronto, Adiar
- métodos: value__  , Pronto  , Adiar  

## SparkMalhaUnica
- campos: NOME, ORCAMENTO_MS, ESPERA_MAXIMA, MAX_LIVRES, _ligada, _sombraUnica, _instancia, _cache, _livres, _aceita, _fila, _naFila, _adiados, _todos, _relogio, <MalhasMontadas>k__BackingField, <MsMontando>k__BackingField, <UltimaRecusada>k__BackingField, _tmpSmr, _tmpPecas, _tmpMats, _tmpMalhas, _tmpNasc, _tmpM, _tmpOssos, _tmpLig, _tmpMapa, _tmpBase, _tmpMatCombinado, _relogio2, _v, _n, _t, _uv0, _uv1, _cor, _tri, _cv, _cn, _ct, _cuv0, _cuv1, _ccor, _cbw, _grupos, _semSombra, _soSombra, _cullsUsados, PASSES_DE_DESENHO
- métodos: NOME  , ORCAMENTO_MS  , ESPERA_MAXIMA  , MAX_LIVRES  , _ligada  , _sombraUnica  , _instancia  , _cache  , _livres  , _aceita  , _fila  , _naFila  , _adiados  , _todos  , _relogio  , <MalhasMontadas>k__BackingField  , <MsMontando>k__BackingField  , <UltimaRecusada>k__BackingField  , _tmpSmr  , _tmpPecas  , _tmpMats  , _tmpMalhas  , _tmpNasc  , _tmpM  , _tmpOssos  , _tmpLig  , _tmpMapa  , _tmpBase  , _tmpMatCombinado  , _relogio2  , _v  , _n  , _t  , _uv0  , _uv1  , _cor  , _tri  , _cv  , _cn  , _ct  , _cuv0  , _cuv1  , _ccor  , _cbw  , _grupos  , _semSombra  , _soSombra  , _cullsUsados  , PASSES_DE_DESENHO  , get_Ligada, set_Ligada, get_SombraUnica, set_SombraUnica, Zera, get_Personagens, get_NaFila, get_MalhasEmCache, get_MalhasMontadas, set_MalhasMontadas, get_MsMontando, set_MsMontando, get_MalhasRecusadas, get_UltimaRecusada, set_UltimaRecusada, get_Juntados, RefazTodos, EstadoDe, AntesDeSincronizar, Pede, Pendente, Esquece, AoMudar, Gerente, LateUpdate, Visivel, Assinatura, TiraMortos, MesmosMateriais, AceitaMalha, Junta, Mistura, Perto, Desfaz, Solta, Monta, SombraSemTextura, SemSombra, SoSombra, JuntaSombra, Osso, .ctor, .cctor

## SparkPassadas
- campos: _fatores
- métodos: _fatores  , Zera, Fator, Fatores

## SparkVelocidade
- campos: _avisados
- métodos: _avisados  , Zera, Segura, Aplica, Valida, Avisa, .cctor

## SparkMusica.Volume
- campos: id, loop, caixa, nos, tamanho
- métodos: id  , loop  , caixa  , nos  , tamanho  , .ctor

## SparkMusica
- campos: PASTA, INTERVALO, FADE, PAUSA_LOBBY, PAUSA_CIDADE, PAUSA_CAMPO, ESCALA_L2, RACAS, _instancia, _faixas, _volumes, _fontes, _ganho, _alvo, _ativa, _inicio, _chave, _lista, _loop, _pausa, _proxima, _ultima, _checagem, _ouvinteLobby, _jogador, _chegou
- métodos: PASTA  , INTERVALO  , FADE  , PAUSA_LOBBY  , PAUSA_CIDADE  , PAUSA_CAMPO  , ESCALA_L2  , RACAS  , _instancia  , _faixas  , _volumes  , _fontes  , _ganho  , _alvo  , _ativa  , _inicio  , _chave  , _lista  , _loop  , _pausa  , _proxima  , _ultima  , _checagem  , _ouvinteLobby  , _jogador  , _chegou  , get_Ativa, Liga, Awake, CarregaTabela, Numeros, Update, Decide, VolumeEm, Dentro, Troca, TocaProxima, Solta, GaranteOuvinte, .ctor, .cctor

## SparkPassos.Peca
- campos: Posicao, Sons
- métodos: Posicao  , Sons  

## SparkPassos
- campos: RAIO, TOLERANCIA, TERRENO_ANDAR, TERRENO_CORRER, GRAMA_ANDAR, GRAMA_CORRER, ATOR, _tabela, _porCollider
- métodos: RAIO  , TOLERANCIA  , TERRENO_ANDAR  , TERRENO_CORRER  , GRAMA_ANDAR  , GRAMA_CORRER  , ATOR  , _tabela  , _porCollider  , Zera, Toca, SonsDoChao, TemGrama, SonsDe, Tabela, .cctor

## SparkSons.Pendente
- campos: Clipe, Posicao, Volume, Raio, Quando, Prioritario
- métodos: Clipe  , Posicao  , Volume  , Raio  , Quando  , Prioritario  

## SparkSons
- campos: FONTES, RAIO_PADRAO, RAIO_POR_UNIDADE, _instance, _indice, _clipes, _faltando, _fontes, _prioritaria, _volume, _proxima, _fonteVoz, Pedidos, Tocados, CortadosIguais, CortadosLonge, Roubados, _pendentes, _proximaOuvinte, _ouvinte
- métodos: FONTES  , RAIO_PADRAO  , RAIO_POR_UNIDADE  , _instance  , _indice  , _clipes  , _faltando  , _fontes  , _prioritaria  , _volume  , _proxima  , _fonteVoz  , Pedidos  , Tocados  , CortadosIguais  , CortadosLonge  , Roubados  , _pendentes  , _proximaOuvinte  , _ouvinte  , get_Instance, Awake, OnDestroy, Tem, ClipeDe, Toca, TocaInterfaceFonte, TocaInterface, PlaySound, Update, Fonte, Forca, TocaAgora, GaranteOuvinte, Clipe, Chave, Indice, .ctor

## SparkSonsMonstro.Notify
- campos: T, Som, Arma, Volume, Raio, Chance, Clipe, Procurado
- métodos: T  , Som  , Arma  , Volume  , Raio  , Chance  , Clipe  , Procurado  , .ctor

## SparkSonsMonstro
- campos: JANELA, TETO, RAIO_POR_UNIDADE, _animDaMalha, _porAnim, _clipes, _inicioJanela, _naJanela
- métodos: JANELA  , TETO  , RAIO_POR_UNIDADE  , _animDaMalha  , _porAnim  , _clipes  , _inicioJanela  , _naJanela  , DaMalha, DaSequencia, Clipe, Toca, TocaUmDe, Passa, Carrega, .cctor

## SparkDiagMovimento
- campos: NaTela, L2, TELEPORTE, _arquivo, _falhou
- métodos: NaTela  , L2  , TELEPORTE  , _arquivo  , _falhou  , Registra, Escreve

## SparkCasal
- campos: -
- métodos: Pergunta, Acao, Responde

## SparkRefino
- campos: AbrirColocar, AbrirTirar, ItemAceito, PedraAceita, GemstoneAceita, Resultado, PrecoParaTirar, TirouResultado
- métodos: AbrirColocar  , AbrirTirar  , ItemAceito  , PedraAceita  , GemstoneAceita  , Resultado  , PrecoParaTirar  , TirouResultado  , add_AbrirColocar, remove_AbrirColocar, add_AbrirTirar, remove_AbrirTirar, add_ItemAceito, remove_ItemAceito, add_PedraAceita, remove_PedraAceita, add_GemstoneAceita, remove_GemstoneAceita, add_Resultado, remove_Resultado, add_PrecoParaTirar, remove_PrecoParaTirar, add_TirouResultado, remove_TirouResultado, Pacote, ConfirmaItem, ConfirmaPedra, ConfirmaGemstone, Refina, ConfirmaTirar, Tira, Manda

## SparkBoard
- campos: _montando, Pagina, Fechou, <Ultima>k__BackingField
- métodos: _montando  , Pagina  , Fechou  , <Ultima>k__BackingField  , add_Pagina, remove_Pagina, add_Fechou, remove_Fechou, get_Ultima, set_Ultima, Pacote, Mostra, Abre, Vai, Zera, .cctor

## SparkCosturaRosto
- campos: EPS, _cache
- métodos: EPS  , _cache  , Aplica, Soldada, .cctor

## SparkClan.Membro
- campos: Nome, Nivel, Classe, ObjId, Online, Unidade, Destaque
- métodos: Nome  , Nivel  , Classe  , ObjId  , Online  , Unidade  , Destaque  , .ctor

## SparkClan.Unidade
- campos: Id, Nome, Lider
- métodos: Id  , Nome  , Lider  , .ctor

## SparkClan.Guerra
- campos: Clan, Aba
- métodos: Clan  , Aba  , .ctor

## SparkClan
- campos: CP_JOIN, CP_TITLE, CP_WAREHOUSE, CP_RANKS, CP_WAR, CP_DISMISS, CP_CREST, CP_MASTER, CP_LEVELS, CP_CH_DOOR, CP_CH_OTHER, CP_CH_AUCTION, CP_CH_DISMISS, CP_CH_FUNCTIONS, CP_CS_DOOR, CP_CS_MANOR, CP_CS_SIEGE, CP_CS_USE, CP_CS_DISMISS, CP_CS_TAXES, CP_CS_MERCENARIES, CP_CS_FUNCTIONS, ACADEMIA, GUARDA1, GUARDA2, CAVALEIRO1, CAVALEIRO2, CAVALEIRO3, CAVALEIRO4, <Id>k__BackingField, <Nome>k__BackingField, <Lider>k__BackingField, <CrestId>k__BackingField, <Nivel>k__BackingField, <Castelo>k__BackingField, <Sede>k__BackingField, <Rank>k__BackingField, <Reputacao>k__BackingField, <AllyId>k__BackingField, <AllyNome>k__BackingField, <AllyCrestId>k__BackingField, <EmGuerra>k__BackingField, Membros, Unidades, Skills, Ranks, Guerras, Mudou, InfoDoMembro, Privilegios, RanksMudaram, GuerrasMudaram, SkillsMudaram, _crests, _allyCrests, _pedidos, _nomes, _allys, _pedidosDeAlly, _esperandoNome, _rankPedido, RANK_LIDER, RANK_MAIN, RANK_ROYAL, RANK_KNIGHTS, RANK_ACADEMIA, PRIVS_DA_ACADEMIA, _salas, _ultimoAcesso
- métodos: CP_JOIN  , CP_TITLE  , CP_WAREHOUSE  , CP_RANKS  , CP_WAR  , CP_DISMISS  , CP_CREST  , CP_MASTER  , CP_LEVELS  , CP_CH_DOOR  , CP_CH_OTHER  , CP_CH_AUCTION  , CP_CH_DISMISS  , CP_CH_FUNCTIONS  , CP_CS_DOOR  , CP_CS_MANOR  , CP_CS_SIEGE  , CP_CS_USE  , CP_CS_DISMISS  , CP_CS_TAXES  , CP_CS_MERCENARIES  , CP_CS_FUNCTIONS  , ACADEMIA  , GUARDA1  , GUARDA2  , CAVALEIRO1  , CAVALEIRO2  , CAVALEIRO3  , CAVALEIRO4  , <Id>k__BackingField  , <Nome>k__BackingField  , <Lider>k__BackingField  , <CrestId>k__BackingField  , <Nivel>k__BackingField  , <Castelo>k__BackingField  , <Sede>k__BackingField  , <Rank>k__BackingField  , <Reputacao>k__BackingField  , <AllyId>k__BackingField  , <AllyNome>k__BackingField  , <AllyCrestId>k__BackingField  , <EmGuerra>k__BackingField  , Membros  , Unidades  , Skills  , Ranks  , Guerras  , Mudou  , InfoDoMembro  , Privilegios  , RanksMudaram  , GuerrasMudaram  , SkillsMudaram  , _crests  , _allyCrests  , _pedidos  , _nomes  , _allys  , _pedidosDeAlly  , _esperandoNome  , _rankPedido  , RANK_LIDER  , RANK_MAIN  , RANK_ROYAL  , RANK_KNIGHTS  , RANK_ACADEMIA  , PRIVS_DA_ACADEMIA  , _salas  , _ultimoAcesso  , get_Id, set_Id, get_Nome, set_Nome, get_Lider, set_Lider, get_CrestId, set_CrestId, get_Nivel, set_Nivel, get_Castelo, set_Castelo, get_Sede, set_Sede, get_Rank, set_Rank, get_Reputacao, set_Reputacao, get_AllyId, set_AllyId, get_AllyNome, set_AllyNome, get_AllyCrestId, set_AllyCrestId, get_EmGuerra, set_EmGuerra, add_Mudou, remove_Mudou, add_InfoDoMembro, remove_InfoDoMembro, add_Privilegios, remove_Privilegios, add_RanksMudaram, remove_RanksMudaram, add_GuerrasMudaram, remove_GuerrasMudaram, add_SkillsMudaram, remove_SkillsMudaram, get_TemClan, get_MeuNome, get_SouLider, get_MeusPrivilegios, Pode, Pacote, Simples, Ex, ListaToda, InfoUpdate, Poe, Limpa, Reinicia, AllyDoClan, Crest, AllyCrest, NomeDoClan, PedeLista, Convida, Sai, Expulsa, Titulo, DeclaraGuerra, TerminaGuerra, Rende, GravaCrest, GravaAllyCrest, PedePoderDoRank, GravaPoderDoRank, PedeRanks, PedePoderDoMembro, MudaRank, PedeInfoDoMembro, PedeGuerras, MudaUnidade, Padrinho, ConvidaAlianca, SaiDaAlianca, ExpulsaDaAlianca, DissolveAlianca, InfoDaAlianca, Manda, NomeDe, Pergunta, NomeDoRank, RankVisivel, PermitidosNoRank, NomeDaUnidade, TipoDaUnidade, NomeDaSede, NomeDaSedeOuNada, NomeDoCasteloOuNada, UltimoLogin, Plural, NomeDoCastelo, .cctor, <RankVisivel>g__TemUnidade|170_0

## SparkDds
- campos: CREST_W, CREST_H, ALLY_W, ALLY_H
- métodos: CREST_W  , CREST_H  , ALLY_W  , ALLY_H  , Le, Cor, Alfa3, Alfa5, De565, Mistura, CarregaImagem, Reduz, Previa, Dxt1, LeBmp, EscreveDxt1, Para565, Cabecalho

## SparkEfeitoDoAcessorio.Dados
- campos: efeito, escala
- métodos: efeito  , escala  , .ctor

## SparkEfeitoDoAcessorio
- campos: _tabela, _semPrefab, _malha, _acessorio, _cabeca, _local, _escala, _proximaBusca, _dono, _achouDono
- métodos: _tabela  , _semPrefab  , _malha  , _acessorio  , _cabeca  , _local  , _escala  , _proximaBusca  , _dono  , _achouDono  , Info, Prende, AcertaEscala, AchaCabeca, LateUpdate, .ctor, .cctor

## SparkCraft.Receita
- campos: Anao, Nome, ItemDaReceita, Nivel, Materiais, Produto, Quantidade, Mp, Chance
- métodos: Anao  , Nome  , ItemDaReceita  , Nivel  , Materiais  , Produto  , Quantidade  , Mp  , Chance  , .ctor

## SparkCraft.NaLoja
- campos: Receita, Preco
- métodos: Receita  , Preco  

## SparkCraft
- campos: Livro, LivroDoAnao, MpMax, LivroChegou, InfoChegou, OficinaDono, OficinaAdena, OficinaLivro, OficinaLista, MeuLetreiro, MontagemChegou, LojaDono, LojaMp, LojaMpMax, MinhaAdena, LojaLista, LojaChegou, LojaInfoChegou, _receitas
- métodos: Livro  , LivroDoAnao  , MpMax  , LivroChegou  , InfoChegou  , OficinaDono  , OficinaAdena  , OficinaLivro  , OficinaLista  , MeuLetreiro  , MontagemChegou  , LojaDono  , LojaMp  , LojaMpMax  , MinhaAdena  , LojaLista  , LojaChegou  , LojaInfoChegou  , _receitas  , add_LivroChegou, remove_LivroChegou, add_InfoChegou, remove_InfoChegou, add_MontagemChegou, remove_MontagemChegou, add_LojaChegou, remove_LojaChegou, add_LojaInfoChegou, remove_LojaInfoChegou, Info, NomeDoProduto, Tenho, TemMateriais, Pacote, AbreLivro, Apaga, PedeInfo, Faz, AbreMontagem, IniciaOficina, SaiDaMontagem, PedeInfoNaLoja, FazNaLoja, VoltaNaLoja, Manda, Reinicia, .cctor

## SparkDuelo.Linha
- campos: Raiz, Nome, Cp, Hp, Mp, TextoHp
- métodos: Raiz  , Nome  , Cp  , Hp  , Mp  , TextoHp  , .ctor

## SparkDuelo
- campos: <EmDuelo>k__BackingField, _painel, _linhas
- métodos: <EmDuelo>k__BackingField  , _painel  , _linhas  , EhDoDuelo, get_EmDuelo, set_EmDuelo, Pacote, Resultado, Convite, Responde, Atualiza, NovaLinha, Barra, Enche, Esconde, .cctor

## SparkAguaInterativa.Estado
- campos: Ultima, Velocidade, Superficie, ProximaChecagem, ProximoAnel, NaAgua, Visto, Lista
- métodos: Ultima  , Velocidade  , Superficie  , ProximaChecagem  , ProximoAnel  , NaAgua  , Visto  , Lista  , .ctor

## SparkAguaInterativa.Candidato
- campos: E, D
- métodos: E  , D  

## SparkAguaInterativa
- campos: PASTA, MAX_PONTOS, FUNDO_PE, FONTE, TEXEL, VELOCIDADE, AMORTECIMENTO, DESLOCA, NPONTOS, PONTOS, ALTURA, AREA, LIGA, COR_BRILHO, FORCA_BRILHO, FORCA_CEU, ESCURECE, RELEVO, ELEVACAO, LISURA, Tamanho, Resolucao, Velocidade, Amortecimento, PassosPorSegundo, MaxPontos, ForcaAndando, ForcaNadando, VelocidadeCheia, ForcaParado, FrequenciaParado, ForcaPasso, ForcaEntrada, RaioPe, RaioNado, CorDoBrilho, ForcaDoBrilho, ForcaDoCeu, Escurecimento, Relevo, Lisura, Elevacao, Respingos, RespingosDeTerceirosPorSegundo, GotasPorPasso, TesteCirculo, TesteRaio, TesteVelocidade, Ativa, PontosAgora, MalhasDesenhadas, _instancia, _suporta, _formato, _a, _b, _resUsada, _matSim, _matCamada, _matRespingo, _cmd, _mpb, _limpar, _origem, _acumulado, _texelUsado, _tamanhoUsado, _pontos, _continuos, _pendentes, _camadas, _estados, _candidatos, _sai, PORDISTANCIA, _proximaLista, _lista, _ps, _tentouParticulas, _terceirosNoSegundo, _segundo, _testeAchou, _testeCentro, _testeAngulo
- métodos: PASTA  , MAX_PONTOS  , FUNDO_PE  , FONTE  , TEXEL  , VELOCIDADE  , AMORTECIMENTO  , DESLOCA  , NPONTOS  , PONTOS  , ALTURA  , AREA  , LIGA  , COR_BRILHO  , FORCA_BRILHO  , FORCA_CEU  , ESCURECE  , RELEVO  , ELEVACAO  , LISURA  , Tamanho  , Resolucao  , Velocidade  , Amortecimento  , PassosPorSegundo  , MaxPontos  , ForcaAndando  , ForcaNadando  , VelocidadeCheia  , ForcaParado  , FrequenciaParado  , ForcaPasso  , ForcaEntrada  , RaioPe  , RaioNado  , CorDoBrilho  , ForcaDoBrilho  , ForcaDoCeu  , Escurecimento  , Relevo  , Lisura  , Elevacao  , Respingos  , RespingosDeTerceirosPorSegundo  , GotasPorPasso  , TesteCirculo  , TesteRaio  , TesteVelocidade  , Ativa  , PontosAgora  , MalhasDesenhadas  , _instancia  , _suporta  , _formato  , _a  , _b  , _resUsada  , _matSim  , _matCamada  , _matRespingo  , _cmd  , _mpb  , _limpar  , _origem  , _acumulado  , _texelUsado  , _tamanhoUsado  , _pontos  , _continuos  , _pendentes  , _camadas  , _estados  , _candidatos  , _sai  , PORDISTANCIA  , _proximaLista  , _lista  , _ps  , _tentouParticulas  , _terceirosNoSegundo  , _segundo  , _testeAchou  , _testeCentro  , _testeAngulo  , get_FUNDO_ONDA, Liga, get_HardwareSuporta, Passo, PeNaAgua, Respinga, VelocidadeDe, LateUpdate, Apaga, Desliga, Prepara, NovaTextura, Libera, OnDestroy, Segue, Limpa, Troca, Pontos, Candidatos, Candidata, Simula, Ponto, Desenha, Emite, CriaParticulas, Teste, TesteRespingo, AguaNaFrente, .ctor, .cctor

## SparkAguaRuntime.Zona
- campos: Id, Nome, Material, MinZ, MaxZ, X, Y, MinX, MaxX, MinY, MaxY, Mat, Tentou
- métodos: Id  , Nome  , Material  , MinZ  , MaxZ  , X  , Y  , MinX  , MaxX  , MinY  , MaxY  , Mat  , Tentou  , .ctor

## SparkAguaRuntime.Arquivo
- campos: Zonas
- métodos: Zonas  , .ctor

## SparkAguaRuntime.Superficie
- campos: Rend, Caixa, Tri, Grade, X0, Z0, NX, NZ
- métodos: Rend  , Caixa  , Tri  , Grade  , X0  , Z0  , NX  , NZ  , .ctor

## SparkAguaRuntime.Camada
- campos: Rend, Malha, Subs, Caixa
- métodos: Rend  , Malha  , Subs  , Caixa  

## SparkAguaRuntime
- campos: FOAM_WIDTH, PADRAO, L2, FOLGA_Z, FUNDO_MAX, CELULA, _camadas, _regioes, _superficies, _ehAgua, _feitos
- métodos: FOAM_WIDTH  , PADRAO  , L2  , FOLGA_Z  , FUNDO_MAX  , CELULA  , _camadas  , _regioes  , _superficies  , _ehAgua  , _feitos  , ComGrade, Registra, AoCarregar, Submersa, CamadasNaArea, RegistraCamada, AlturaAcima, Prepara, SemColisao, EhAgua, EhCascata, PreparaMalha, PreparaCaixa, MaterialDaRegiao, MaterialDe, Dentro, CarregaRegioes, .cctor

## SparkAjusteEfeitos
- campos: Instancia, Versao, AzulEnchant, VermelhoMais16, InfinityFumaca, InfinityForcaFumaca, InfinityClaraoMesmaCor, InfinityClarao, InfinityForcaClarao, InfinityTamanhoClarao, InfinityRaio, InfinityOpacidadeFogo, EpicForcaRaio, HeroiLuz, HeroiForcaLuz, HeroiTamanhoLuz, HeroiLuzNaFrente, HeroiCorRaios, HeroiForcaRaios, HeroiTamanhoRaios, HeroiQuantidadeRaios, HeroiOpacidadeRaios, HeroiOpacidadeAneis, HeroiCalor, HeroiForcaCalor, HeroiQuantidadeCalor, HeroiTamanhoCalor, HeroiSubidaCalor, ARQUIVO, _carregado
- métodos: Instancia  , Versao  , AzulEnchant  , VermelhoMais16  , InfinityFumaca  , InfinityForcaFumaca  , InfinityClaraoMesmaCor  , InfinityClarao  , InfinityForcaClarao  , InfinityTamanhoClarao  , InfinityRaio  , InfinityOpacidadeFogo  , EpicForcaRaio  , HeroiLuz  , HeroiForcaLuz  , HeroiTamanhoLuz  , HeroiLuzNaFrente  , HeroiCorRaios  , HeroiForcaRaios  , HeroiTamanhoRaios  , HeroiQuantidadeRaios  , HeroiOpacidadeRaios  , HeroiOpacidadeAneis  , HeroiCalor  , HeroiForcaCalor  , HeroiQuantidadeCalor  , HeroiTamanhoCalor  , HeroiSubidaCalor  , ARQUIVO  , _carregado  , Awake, OnValidate, get_A, .ctor

## SparkAjusteJson
- campos: -
- métodos: Carrega, Salva, Falta, Texto, Copia

## SparkAnelDeTime.Lote
- campos: Malha, Material, Cor, Vertices, Cores, Uvs, Indices
- métodos: Malha  , Material  , Cor  , Vertices  , Cores  , Uvs  , Indices  , .ctor

## SparkAnelDeTime
- campos: PREFAB, ESCALA, DISTANCIA, MAXIMO, INTERVALO, ALTURA_SIMPLES, FORA, LARANJA, _instancia, _alvo, _corAplicada, _molde, _aneis, _versaoMontaria, _sai, _candidatos, _ficam, _proxima, _simples, _lotes, _materialCirculo, _corCirculo, _raioSimples, _giro
- métodos: PREFAB  , ESCALA  , DISTANCIA  , MAXIMO  , INTERVALO  , ALTURA_SIMPLES  , FORA  , LARANJA  , _instancia  , _alvo  , _corAplicada  , _molde  , _aneis  , _versaoMontaria  , _sai  , _candidatos  , _ficam  , _proxima  , _simples  , _lotes  , _materialCirculo  , _corCirculo  , _raioSimples  , _giro  , Liga, Awake, Update, get_Diametro, get_DiametroNormal, NoBicho, PoeNoBicho, LateUpdate, LimpaLote, LoteDo, TimeDe, Considera, Prepara, Laranja, Tinge, .ctor, .cctor

## SparkAuraHeroi.Aura
- campos: Raiz, Ancora, Ancora2, Desloc, Montada, Bicho, TemAncora, Ref, RefFixo, BaciaDoRef, AmostraDesde, Reancora, EsperaDesde
- métodos: Raiz  , Ancora  , Ancora2  , Desloc  , Montada  , Bicho  , TemAncora  , Ref  , RefFixo  , BaciaDoRef  , AmostraDesde  , Reancora  , EsperaDesde  , .ctor

## SparkAuraHeroi
- campos: DISTANCIA, MAXIMO, INTERVALO, ALTURA, _instancia, ESPERA_PARA_MEDIR, _auras, _renderers, _candidatos, _sai, _proxima, _versao, _versaoMontaria, _brilho, _calor, _matCalor, _forcaCalor
- métodos: DISTANCIA  , MAXIMO  , INTERVALO  , ALTURA  , _instancia  , ESPERA_PARA_MEDIR  , _auras  , _renderers  , _candidatos  , _sai  , _proxima  , _versao  , _versaoMontaria  , _brilho  , _calor  , _matCalor  , _forcaCalor  , ParadoHaTempo, MaterialCalor, Liga, Update, LateUpdate, Refaz, AlturaMontado, NaBacia, EhBacia, Osso, AlturaDeRepouso, Medidas, Considera, Monta, Particulas, Carrega, .ctor, .cctor

## SparkBrilhoEnchant.Regiao
- campos: value__, Inteira, Lamina, Cabeca, Malha, Lanca
- métodos: value__  , Inteira  , Lamina  , Cabeca  , Malha  , Lanca  

## SparkBrilhoEnchant
- campos: PASTA, MINIMO, FOGO_MINIMO, SemMormaco, _ponto, _brilho, _matAura, _chama, _fumaca, _fogo, _raio, _fumacaAditiva, _tubos, _trechos, _pontos, _fortes, _livres
- métodos: PASTA  , MINIMO  , FOGO_MINIMO  , SemMormaco  , _ponto  , _brilho  , _matAura  , _chama  , _fumaca  , _fogo  , _raio  , _fumacaAditiva  , _tubos  , _trechos  , _pontos  , _fortes  , _livres  , TemFumaca, RegiaoDo, EhDoEnchant, CorDo, EhEpica, EhInfinita, Aplica, Pontos, Trecho, Portador, MaterialForte, MaterialCorLivre, CorLivre, Forca, Alfa, LinhaDoTubo, ParaCor, Bloco, Casca, Faixa, Tubo, Alisa, PelaMalha, Sistema, Carrega, .cctor, <Aplica>g__Escala|21_0, <Forca>g__C|31_0, <Alfa>g__C|32_0, <Alfa>g__G|32_1, <Faixa>g__Mediana|39_0

## SparkBrilhoMaterial.Item
- campos: Material, Cor1, Cor2, Periodo, Fase, Senoide
- métodos: Material  , Cor1  , Cor2  , Periodo  , Fase  , Senoide  , .ctor

## SparkBrilhoMaterial.Tabela
- campos: Lista
- métodos: Lista  , .ctor

## SparkBrilhoMaterial
- campos: EMISSAO, _tabela, _copias, _ativos, _instancia
- métodos: EMISSAO  , _tabela  , _copias  , _ativos  , _instancia  , Carrega, Registra, Liga, Cor, Update, .ctor, .cctor

## SparkCachoeiraBalanco
- campos: PERTO, AMPLITUDE, LARGURA, FAIXAS, _f, _r, _copia, _base, _trabalho, _dir, _peso, _fase, _queda, _amplitude, _parado
- métodos: PERTO  , AMPLITUDE  , LARGURA  , FAIXAS  , _f  , _r  , _copia  , _base  , _trabalho  , _dir  , _peso  , _fase  , _queda  , _amplitude  , _parado  , Awake, Update, OnDestroy, Prepara, Balanca, .ctor, <Prepara>g__Faixa|18_0

## SparkCachoeiraRuntime
- campos: SHADER, SHADER_AGUA, BASE_Y, _materialRespingo, ALTURA_RESPINGO, COM_RESPINGO, CASCATA, MAX_RESPINGOS, AJUSTE_POR_PECA, NEVOA, NEVOA_SEM_DOBRAR, NEVOA_ALTURA_REF, NEVOA_DESCE, MAX_NEVOAS, USA_RESPINGO
- métodos: SHADER  , SHADER_AGUA  , BASE_Y  , _materialRespingo  , ALTURA_RESPINGO  , COM_RESPINGO  , CASCATA  , MAX_RESPINGOS  , AJUSTE_POR_PECA  , NEVOA  , NEVOA_SEM_DOBRAR  , NEVOA_ALTURA_REF  , NEVOA_DESCE  , MAX_NEVOAS  , USA_RESPINGO  , Registra, AoCarregar, Prepara, Liga, CriaRespingo, MaterialRespingo, .cctor

## SparkCachoeiraSkyrim.Ajuste
- campos: corpo, saia, nevoa, doisLados, giro, escala, largura, profundidade, topoExtra, peExtra, deslocamento, deslocamentoSaia, deslocamentoNevoa, escalaBase, cor, semPartes, efeitoNoPe, emissoresNoPe, escalaEfeitoNoPe, mostrarSkyrim
- métodos: corpo  , saia  , nevoa  , doisLados  , giro  , escala  , largura  , profundidade  , topoExtra  , peExtra  , deslocamento  , deslocamentoSaia  , deslocamentoNevoa  , escalaBase  , cor  , semPartes  , efeitoNoPe  , emissoresNoPe  , escalaEfeitoNoPe  , mostrarSkyrim  , .ctor

## SparkCachoeiraSkyrim
- campos: TILE, ALVO, MODELOS, COR, ACERTOS, _a, _alvo, _montagem, _corpo, _saia, _nevoa, _efeitoPe, _caixaL2, _frenteL2, _bordaL2, _bordaSky, _peSky, _peY, _giroAuto
- métodos: TILE  , ALVO  , MODELOS  , COR  , ACERTOS  , _a  , _alvo  , _montagem  , _corpo  , _saia  , _nevoa  , _efeitoPe  , _caixaL2  , _frenteL2  , _bordaL2  , _bordaSky  , _peSky  , _peY  , _giroAuto  , Registra, AoCarregar, Start, OnDestroy, Monta, Posiciona, Instancia, EfeitoDoMapa, SoEstes, Pontos, Caixa, Frente, .ctor, .cctor

## SparkCachoeiraUV.Medida
- campos: DirU, DirV, MetrosPorU, MetrosPorV
- métodos: DirU  , DirV  , MetrosPorU  , MetrosPorV  , ToString

## SparkCachoeiraUV
- campos: -
- métodos: Mede

## SparkCubicos.Grupo
- campos: Raiz, Ids, Cubos, Brilhos, Altura, Modelo, Atual, Nasceu
- métodos: Raiz  , Ids  , Cubos  , Brilhos  , Altura  , Modelo  , Atual  , Nasceu  , .ctor

## SparkCubicos.Visual
- campos: Malha, Escala, Centro
- métodos: Malha  , Escala  , Centro  

## SparkCubicos
- campos: MAXIMO, INTERVALO, ESPACO, ACIMA, ATRAS, GIRO, SEGUE, LONGE, NASCE, TAMANHO, ALTURA_PADRAO, MALHAS, TEXTURAS, _instancia, _grupos, _candidatos, _ficam, _sai, _proxima, _visuais, _materiais, _brilho, _quad
- métodos: MAXIMO  , INTERVALO  , ESPACO  , ACIMA  , ATRAS  , GIRO  , SEGUE  , LONGE  , NASCE  , TAMANHO  , ALTURA_PADRAO  , MALHAS  , TEXTURAS  , _instancia  , _grupos  , _candidatos  , _ficam  , _sai  , _proxima  , _visuais  , _materiais  , _brilho  , _quad  , Liga, TipoDe, Update, LateUpdate, CentroDe, Considera, Iguais, Apaga, Monta, VisualDe, MaterialDe, MaterialDoBrilho, Quad, .ctor, .cctor

## SparkDesintegra.Sistema
- campos: Ps, TamMin, TamMax, Subida
- métodos: Ps  , TamMin  , TamMax  , Subida  , .ctor

## SparkDesintegra.Particulas
- campos: Raiz, Cinza, Brasa
- métodos: Raiz  , Cinza  , Brasa  , .ctor

## SparkDesintegra.Efeito
- campos: Sumindo, Inicio, Duracao, Raiz, TemRaiz, Centro, Tamanho, Base, Topo, Renderers, Originais, Contagem, Partes, Malhas, Part, AcumCinza, AcumBrasa, TaxaCinza, TaxaBrasa
- métodos: Sumindo  , Inicio  , Duracao  , Raiz  , TemRaiz  , Centro  , Tamanho  , Base  , Topo  , Renderers  , Originais  , Contagem  , Partes  , Malhas  , Part  , AcumCinza  , AcumBrasa  , TaxaCinza  , TaxaBrasa  , Limpa, .ctor

## SparkDesintegra.Oculto
- campos: Raiz, Fim
- métodos: Raiz  , Fim  

## SparkDesintegra
- campos: TEMPO_SUMIR, TEMPO_SUMIR_CORPO, TEMPO_APARECER, TEMPO_OCULTO_TELEPORTE, MAX_ATIVOS, MAX_NOVOS_POR_QUADRO, DISTANCIA_JOGADOR, DISTANCIA_NPC, MAX_MATERIAIS, MAX_MALHAS_LIVRES, MAX_PARTES_LIVRES, PASTA, BORDA_SUMIR, BORDA_APARECER, LARGURA_BORDA, INICIO_APARECER, RUIDO_POR_ALTURA, ID_PROGRESSO, ID_BASE, ID_TOPO, ID_ORIGEM, ID_RUIDO, ID_BORDA, ID_LARGURA, _instancia, _shader, _shaderPanner, _carregou, _matCinza, _matBrasa, _versoes, _shaderAceito, _tmpRenderers, _tmpMats, _blocoCriado, _ativos, _efeitosLivres, _particulasLivres, _partesLivres, _malhasLivres, _candidatos, _ordem, _ocultos, _tmpColeta, _planos, _quadro, _novosNoQuadro, _camera, _cascas, PASSES, SHADER_PANNER, PorDistancia, _tmpColeta2
- métodos: TEMPO_SUMIR  , TEMPO_SUMIR_CORPO  , TEMPO_APARECER  , TEMPO_OCULTO_TELEPORTE  , MAX_ATIVOS  , MAX_NOVOS_POR_QUADRO  , DISTANCIA_JOGADOR  , DISTANCIA_NPC  , MAX_MATERIAIS  , MAX_MALHAS_LIVRES  , MAX_PARTES_LIVRES  , PASTA  , BORDA_SUMIR  , BORDA_APARECER  , LARGURA_BORDA  , INICIO_APARECER  , RUIDO_POR_ALTURA  , ID_PROGRESSO  , ID_BASE  , ID_TOPO  , ID_ORIGEM  , ID_RUIDO  , ID_BORDA  , ID_LARGURA  , _instancia  , _shader  , _shaderPanner  , _carregou  , _matCinza  , _matBrasa  , _versoes  , _shaderAceito  , _tmpRenderers  , _tmpMats  , _blocoCriado  , _ativos  , _efeitosLivres  , _particulasLivres  , _partesLivres  , _malhasLivres  , _candidatos  , _ordem  , _ocultos  , _tmpColeta  , _planos  , _quadro  , _novosNoQuadro  , _camera  , _cascas  , PASSES  , SHADER_PANNER  , PorDistancia  , _tmpColeta2  , get__bloco, Aparecer, AparecerProprio, Sumir, SumirNoTeleporte, Ocupado, Carrega, Particula, Gerente, Aceita, Versao, Liga, Poda, Coleta, Permite, Distancia, TemEfeito, ComecaAparecer, ComecaSumir, Preenche, Oculta, LateUpdate, EscolheCandidatos, Avanca, Aplica, Termina, NovoEfeito, NovaParte, ComecaParticulas, Ajusta, CriaParticulas, CriaSistema, Emite, PreviaAplica, .ctor, .cctor

## SparkEfeitoRepetido
- campos: _copias, _periodo, _falta, _proxima
- métodos: _copias  , _periodo  , _falta  , _proxima  , Liga, Update, .ctor

## SparkEfeitosAnim.Notify
- campos: T, Tremor, Efeito, Osso, Preso, Desvio, Giro, Escala, Intensidade, Alcance, Vezes
- métodos: T  , Tremor  , Efeito  , Osso  , Preso  , Desvio  , Giro  , Escala  , Intensidade  , Alcance  , Vezes  , .ctor

## SparkEfeitosAnim
- campos: _animDaMalha, _porAnim
- métodos: _animDaMalha  , _porAnim  , DaMalha, DaSequencia, Toca, AchaOsso, F, V, Poe, Carrega

## SparkTremor
- campos: FORCA, MAX, _forca, _fim, _duracao, FORCA_TERREMOTO, PERTO, LONGE, PISO, _tForca, _tInicio, _tFim
- métodos: FORCA  , MAX  , _forca  , _fim  , _duracao  , FORCA_TERREMOTO  , PERTO  , LONGE  , PISO  , _tForca  , _tInicio  , _tFim  , Treme, ForcaDoTerremoto, PacoteTerremoto, Terremoto, Deslocamento

## SparkAjusteAugment
- campos: BrilhoNaBolha, ForcaBrilho, TamanhoBrilho, BrilhoX, BrilhoY, BrilhoZ, ForcaRaios, TamanhoRaios, RaiosX, RaiosY, RaiosZ, Curva
- métodos: BrilhoNaBolha  , ForcaBrilho  , TamanhoBrilho  , BrilhoX  , BrilhoY  , BrilhoZ  , ForcaRaios  , TamanhoRaios  , RaiosX  , RaiosY  , RaiosZ  , Curva  , .ctor

## SparkAjusteAugmentArma
- campos: Item, Lamina
- métodos: Item  , Lamina  , .ctor

## SparkAjusteAugmentMalha
- campos: Nome, Malha
- métodos: Nome  , Malha  , .ctor

## SparkEnchantAugmentWp
- campos: Instancia, ARQUIVO, SuaArma, VersaoAjuste, PorArma, Espada, Katana, SamuraiLongsword, EspadaCurva, EspadaDuasMaos, EspadaDuasMaosCurva, Adaga, AdagaCurva, Arco, Duais, DuaisEsquerda, DuaisKatana, DuaisKatanaEsquerda, DuaisCurva, DuaisCurvaEsquerda, Punhos, Lanca, Machado, MachadoDuasMaos, Maca, Martelo, MarteloDuasMaos, Cetro, Cajado, Outras, _carregado
- métodos: Instancia  , ARQUIVO  , SuaArma  , VersaoAjuste  , PorArma  , Espada  , Katana  , SamuraiLongsword  , EspadaCurva  , EspadaDuasMaos  , EspadaDuasMaosCurva  , Adaga  , AdagaCurva  , Arco  , Duais  , DuaisEsquerda  , DuaisKatana  , DuaisKatanaEsquerda  , DuaisCurva  , DuaisCurvaEsquerda  , Punhos  , Lanca  , Machado  , MachadoDuasMaos  , Maca  , Martelo  , MarteloDuasMaos  , Cetro  , Cajado  , Outras  , _carregado  , Da, Awake, Completa, ComMedida, OnValidate, Recarrega, get_A, .ctor

## SparkAjusteInfinity
- campos: ForcaBolha, TamanhoBrilho, BolhaComprimento, BolhaGrossura, BolhaPosicao, LaminaFixa, ForcaLamina, LaminaPosicaoX, LaminaPosicaoY, LaminaPosicaoZ, LaminaGrossura, LaminaTamanho, LaminaPulso, PulsoGrossura, PulsoTamanho, ForcaPulso, Curva
- métodos: ForcaBolha  , TamanhoBrilho  , BolhaComprimento  , BolhaGrossura  , BolhaPosicao  , LaminaFixa  , ForcaLamina  , LaminaPosicaoX  , LaminaPosicaoY  , LaminaPosicaoZ  , LaminaGrossura  , LaminaTamanho  , LaminaPulso  , PulsoGrossura  , PulsoTamanho  , ForcaPulso  , Curva  , .ctor

## SparkEnchantInfinityWp
- campos: Instancia, ARQUIVO, PRIMEIRA, ULTIMA, InfinityBlade, InfinityCleaver, InfinityAxe, InfinityRod, InfinityCrusher, InfinityScepter, InfinityStinger, InfinityFang, InfinityBow, InfinityWing, InfinityWingEsquerda, InfinitySpear, NOMES, _carregado, WING
- métodos: Instancia  , ARQUIVO  , PRIMEIRA  , ULTIMA  , InfinityBlade  , InfinityCleaver  , InfinityAxe  , InfinityRod  , InfinityCrusher  , InfinityScepter  , InfinityStinger  , InfinityFang  , InfinityBow  , InfinityWing  , InfinityWingEsquerda  , InfinitySpear  , NOMES  , _carregado  , WING  , Nome, Da, Awake, Completa, OnValidate, Recarrega, get_A, .ctor, .cctor

## SparkEnchantNasArmas
- campos: SO_ARCO, DISTANCIA, MAXIMO, INTERVALO, _instancia, _aplicado, _perto, _vistas, _sai, _proxima, _versao, _minhaArma, _meuAugment
- métodos: SO_ARCO  , DISTANCIA  , MAXIMO  , INTERVALO  , _instancia  , _aplicado  , _perto  , _vistas  , _sai  , _proxima  , _versao  , _minhaArma  , _meuAugment  , Liga, Update, Considera, Augment, Infinita, EhArco, AplicaAmaldicoada, Aplica, .ctor

## SparkEnchantRetail.Arma
- campos: Malha, MalhaEsq, Efeito, EfeitoOffset, EfeitoEscala, EfeitoVelocidade, Escala, Offset, EscalaEsq, OffsetEsq, TemEsquerda
- métodos: Malha  , MalhaEsq  , Efeito  , EfeitoOffset  , EfeitoEscala  , EfeitoVelocidade  , Escala  , Offset  , EscalaEsq  , OffsetEsq  , TemEsquerda  , .ctor

## SparkEnchantRetail.Efeito
- campos: Nome, Textura, Emissores
- métodos: Nome  , Textura  , Emissores  , .ctor

## SparkEnchantRetail.ListaEfeitos
- campos: Efeitos
- métodos: Efeitos  , .ctor

## SparkEnchantRetail.Mapa
- campos: X, Y, Z, SX, SY, SZ, F
- métodos: X  , Y  , Z  , SX  , SY  , SZ  , F  , Ponto, Eixo, Unidade

## SparkEnchantRetail.CurvaL2
- campos: Liga, X0, L, Lamina, Y, Z, Forma
- métodos: Liga  , X0  , L  , Lamina  , Y  , Z  , Forma  , De, Entorta

## SparkEnchantRetail.Alvo
- campos: Liga, Centro, Meio, Raio, De
- métodos: Liga  , Centro  , Meio  , Raio  , De  

## SparkEnchantRetail
- campos: PASTA, MINIMO, CHAMAS, NIVEIS, _malhasCurvas, _armas, _caixas, _curvas, _efeitos, _mapas, _padrao, _esfera, _shader, _frente, _lado, _matChamas, _mats, HERO_BOLHA, HERO_LAMINA, MAT_HERO_BOLHA, MAT_HERO_LAMINA, _versaoMats, Diagnostico, ZARICHE, AKAMANAH, LADO_MINIMO, _extensoes
- métodos: PASTA  , MINIMO  , CHAMAS  , NIVEIS  , _malhasCurvas  , _armas  , _caixas  , _curvas  , _efeitos  , _mapas  , _padrao  , _esfera  , _shader  , _frente  , _lado  , _matChamas  , _mats  , HERO_BOLHA  , HERO_LAMINA  , MAT_HERO_BOLHA  , MAT_HERO_LAMINA  , _versaoMats  , Diagnostico  , ZARICHE  , AKAMANAH  , LADO_MINIMO  , _extensoes  , ItemDaMalha, LaminaCurva, Conhece, Descreve, MalhaDaLamina, NomeDoAjuste, NomeDoAjusteAugment, DescreveAugment, Aplica, EhAmaldicoada, EstagioAmaldicoado, AplicaAmaldicoada, Variacao, Heroi, MontaHeroi, AlvoDoAugment, Extensao, Percentil, CentroDaBolha, ConfiguraCurva, EsferaCurva, MalhaCurva, LimpaMalhasCurvas, MaterialDo, MapaDa, EixoL2, Carrega, CarregaDados, CarregaArte, Numeros, Geosfera, .cctor, <Geosfera>g__Meio|63_0

## SparkLamina
- campos: value__, Ambas, Direita, Esquerda
- métodos: value__  , Ambas  , Direita  , Esquerda  

## SparkCurvaLamina
- campos: DaMalha, Inicio, Y, Z, Forma
- métodos: DaMalha  , Inicio  , Y  , Z  , Forma  , get_Liga, .ctor

## SparkAjusteBolha
- campos: ForcaBolha, TamanhoBrilho, Comprimento, Grossura, PosicaoX, PosicaoY, PosicaoZ, FogoPosicaoX, FogoPosicaoY, FogoPosicaoZ, FogoTamanho, FogoGrossura, FogoForca, Curva
- métodos: ForcaBolha  , TamanhoBrilho  , Comprimento  , Grossura  , PosicaoX  , PosicaoY  , PosicaoZ  , FogoPosicaoX  , FogoPosicaoY  , FogoPosicaoZ  , FogoTamanho  , FogoGrossura  , FogoForca  , Curva  , CorrigeFogo, .ctor

## SparkAjusteBolhaArma
- campos: Item, Lamina
- métodos: Item  , Lamina  , .ctor

## SparkAjusteBolhaMalha
- campos: Nome, Malha
- métodos: Nome  , Malha  , .ctor

## SparkEnchantWp
- campos: Instancia, ARQUIVO, EnchantRetail, SuaArma, ForcaChamas, TamanhoChamas, VersaoAjuste, PorArma, Espada, Katana, SamuraiLongsword, EspadaCurva, EspadaDuasMaos, EspadaDuasMaosCurva, Adaga, AdagaCurva, Arco, Duais, DuaisEsquerda, DuaisKatana, DuaisKatanaEsquerda, DuaisCurva, DuaisCurvaEsquerda, Punhos, Lanca, Machado, MachadoDuasMaos, Maca, Martelo, MarteloDuasMaos, Cetro, Cajado, Outras, ESPADA, ESPADA2, ADAGA, ARCO, DUAIS, PUNHOS, LANCA, MACHADO, MACHADO2, MACA, MARTELO, MARTELO2, CETRO, CAJADO, OUTRAS, KATANA, DUAIS_ESQ, DUAIS_KATANA, DUAIS_KATANA_ESQ, ESPADA_CURVA, ESPADA2_CURVA, ADAGA_CURVA, DUAIS_CURVA, DUAIS_CURVA_ESQ, SAMURAI, NOMES, _carregado, EXCECAO
- métodos: Instancia  , ARQUIVO  , EnchantRetail  , SuaArma  , ForcaChamas  , TamanhoChamas  , VersaoAjuste  , PorArma  , Espada  , Katana  , SamuraiLongsword  , EspadaCurva  , EspadaDuasMaos  , EspadaDuasMaosCurva  , Adaga  , AdagaCurva  , Arco  , Duais  , DuaisEsquerda  , DuaisKatana  , DuaisKatanaEsquerda  , DuaisCurva  , DuaisCurvaEsquerda  , Punhos  , Lanca  , Machado  , MachadoDuasMaos  , Maca  , Martelo  , MarteloDuasMaos  , Cetro  , Cajado  , Outras  , ESPADA  , ESPADA2  , ADAGA  , ARCO  , DUAIS  , PUNHOS  , LANCA  , MACHADO  , MACHADO2  , MACA  , MARTELO  , MARTELO2  , CETRO  , CAJADO  , OUTRAS  , KATANA  , DUAIS_ESQ  , DUAIS_KATANA  , DUAIS_KATANA_ESQ  , ESPADA_CURVA  , ESPADA2_CURVA  , ADAGA_CURVA  , DUAIS_CURVA  , DUAIS_CURVA_ESQ  , SAMURAI  , NOMES  , _carregado  , EXCECAO  , Do, Da, EhDual, TipoDaExcecao, AchaExcecao, EhSamurai, EhKatana, Categoria, Awake, Completa, ComMedida, OnValidate, Recarrega, get_A, .ctor, .cctor, <Categoria>g__Tem|69_0

## SparkEnchantWpExc.AntigoEnchant
- campos: Excecoes
- métodos: Excecoes  , .ctor

## SparkEnchantWpExc.AntigoAugment
- campos: Excecoes
- métodos: Excecoes  , .ctor

## SparkEnchantWpExc
- campos: Instancia, ARQUIVO, SuaArma, VersaoAjuste, Enchant, Augment, PADRAO, _carregado
- métodos: Instancia  , ARQUIVO  , SuaArma  , VersaoAjuste  , Enchant  , Augment  , PADRAO  , _carregado  , Awake, Completa, OnValidate, Recarrega, get_A, .ctor, .cctor

## SparkFogo
- campos: _papel
- métodos: _papel  , Awake, OnEnable, OnDisable, get_Escala, MostraPapel, .ctor

## SparkFogoMarca
- campos: PALAVRAS, MAXIMO_DE_VERTICES
- métodos: PALAVRAS  , MAXIMO_DE_VERTICES  , Liga, Carregou, Marca, PeloNome, .cctor

## SparkFogoNoEixo
- campos: Linha, Desvio, Raio, _ps, _buf
- métodos: Linha  , Desvio  , Raio  , _ps  , _buf  , Awake, LateUpdate, Posiciona, RaioEm, Ponto, .ctor

## SparkFogoPool
- campos: ORCAMENTO, DISTANCIA_MAXIMA, INTERVALO, CAMINHO_FOGO, MALHA_LOBBY, MATERIAL_LOBBY, BRILHO_LOBBY, COR_DA_LUZ, INTENSIDADE_DA_LUZ, ALCANCE_DA_LUZ, ALTURA_DA_LUZ, _malhaLobby, _materiaisLobby, BRILHO_DO_PACOTE, _chamas, _instancia, _molde, _emUso, _livres, _saiu, _candidatas, _proximaChecagem
- métodos: ORCAMENTO  , DISTANCIA_MAXIMA  , INTERVALO  , CAMINHO_FOGO  , MALHA_LOBBY  , MATERIAL_LOBBY  , BRILHO_LOBBY  , COR_DA_LUZ  , INTENSIDADE_DA_LUZ  , ALCANCE_DA_LUZ  , ALTURA_DA_LUZ  , _malhaLobby  , _materiaisLobby  , BRILHO_DO_PACOTE  , _chamas  , _instancia  , _molde  , _emUso  , _livres  , _saiu  , _candidatas  , _proximaChecagem  , Registra, Esquece, Garante, Awake, Update, Cria, AjustaPacote, .ctor, .cctor

## SparkHeroiAnel.Dados
- campos: quadros, vertices, pos, tri, uv
- métodos: quadros  , vertices  , pos  , tri  , uv  , .ctor

## SparkHeroiAnel
- campos: _dados, _material, Fps, Fase, Deriva, _malha, _v, _tempo
- métodos: _dados  , _material  , Fps  , Fase  , Deriva  , _malha  , _v  , _tempo  , Cria, Carrega, Monta, Quadro, Update, Passo, .ctor

## SparkParaCamera
- campos: CameraFixa, Distancia
- métodos: CameraFixa  , Distancia  , LateUpdate, Ajusta, .ctor

## SparkVariacaoRetail.Arma
- campos: Direita, Esquerda, Grupo, Offset, Escala, Velocidade
- métodos: Direita  , Esquerda  , Grupo  , Offset  , Escala  , Velocidade  , .ctor

## SparkVariacaoRetail
- campos: ARQUIVO, _faixas, _efeitos, _armas, _grupos
- métodos: ARQUIVO  , _faixas  , _efeitos  , _armas  , _grupos  , Efeito, Qualidade, Chave, Carrega

## SparkEnchant
- campos: SUCESSO, FALHOU, ERRO, FALHOU_BLESSED, Abrir, AlvoAceito, Resultado
- métodos: SUCESSO  , FALHOU  , ERRO  , FALHOU_BLESSED  , Abrir  , AlvoAceito  , Resultado  , add_Abrir, remove_Abrir, add_AlvoAceito, remove_AlvoAceito, add_Resultado, remove_Resultado, Escolher, Fim, Alvo, PoeAlvo, Encanta, Cancela, Manda, GrauDoScroll, ScrollDeArma, Blessed, Crystal

## SparkPesca.Pose
- campos: Cadeira, Sentou, Desde, Modelo, Assento, ModeloLocal, Rumo, ModeloRotacao, Termina, Repete, Ate
- métodos: Cadeira  , Sentou  , Desde  , Modelo  , Assento  , ModeloLocal  , Rumo  , ModeloRotacao  , Termina  , Repete  , Ate  , .ctor

## SparkPesca.Boia
- campos: Objeto, Linha, Agua, Lancou, Saida, Saiu, Mordeu, Puxao, Fase, Gear, Arma, Malha, PontaLocal
- métodos: Objeto  , Linha  , Agua  , Lancou  , Saida  , Saiu  , Mordeu  , Puxao  , Fase  , Gear  , Arma  , Malha  , PontaLocal  , .ctor

## SparkPesca
- campos: INTERVALO, _instancia, _poses, _sai, _proxima, BACIA_ACIMA, BACIA_PADRAO, ATRASO_VOO, VOO, PUXAO, PONTOS, ACIMA_DA_AGUA, _boias, _semBoia, _matVermelho, _matBranco, _matLinha
- métodos: INTERVALO  , _instancia  , _poses  , _sai  , _proxima  , BACIA_ACIMA  , BACIA_PADRAO  , ATRASO_VOO  , VOO  , PUXAO  , PONTOS  , ACIMA_DA_AGUA  , _boias  , _semBoia  , _matVermelho  , _matBranco  , _matLinha  , Liga, Quem, Inicio, Combate, Puxa, Fim, Cadeira, BaciaSentado, Devolve, Toca, Termina, Solta, Update, Confere, PoeBoia, TiraBoia, Cor, Parte, MontaBoia, MontaLinha, Ponta, LateUpdate, .ctor, .cctor

## SparkPescaJanela
- campos: JANELA_TENDENCIA, SEM_PACOTE, COR_HP, COR_FALSO, ROXO, _janela, _barra, _tempo, _hp, _estado, _placar, _dica, _resultado, _hpInicial, _hpAtual, _aberta, _ultimoPacote, _resultadoAte, _fechaEm, _isca, _historico
- métodos: JANELA_TENDENCIA  , SEM_PACOTE  , COR_HP  , COR_FALSO  , ROXO  , _janela  , _barra  , _tempo  , _hp  , _estado  , _placar  , _dica  , _resultado  , _hpInicial  , _hpAtual  , _aberta  , _ultimoPacote  , _resultadoAte  , _fechaEm  , _isca  , _historico  , Pacote, Abre, Atualiza, Fim, Mostra, Placar, Relogio, Monta, .cctor

## SparkAmigos.Amigo
- campos: Id, Nome, Online
- métodos: Id  , Nome  , Online  , .ctor

## SparkAmigos
- campos: Lista, Mudou
- métodos: Lista  , Mudou  , add_Mudou, remove_Mudou, ListaChegou, Convite, Mensagem, EhAmigo, Convida, Responde, Remove, PedeLista, Escreve, Bloqueia, Desbloqueia, ListaDeBloqueio, BloqueiaTodos, DesbloqueiaTodos, Manda, Zera, .cctor

## SparkGeoView
- campos: SUB, RAIO, CELULA, ESCALA, ACIMA, FOLGA, CERCA, INTERVALO_MIN, REPETE_SEM_RESPOSTA, RECOLORE_Z, VERDE, AZUL, VERMELHO, <Ligado>k__BackingField, _instancia, _temDados, _largura, _altura, _x0, _y0, _camadas, _inicio, _z, _nswe, _centroPedido, _jaPediu, _pediuEm, _esperando, _zDesenho, _go, _malha, _material, _v, _c, _t
- métodos: SUB  , RAIO  , CELULA  , ESCALA  , ACIMA  , FOLGA  , CERCA  , INTERVALO_MIN  , REPETE_SEM_RESPOSTA  , RECOLORE_Z  , VERDE  , AZUL  , VERMELHO  , <Ligado>k__BackingField  , _instancia  , _temDados  , _largura  , _altura  , _x0  , _y0  , _camadas  , _inicio  , _z  , _nswe  , _centroPedido  , _jaPediu  , _pediuEm  , _esperando  , _zDesenho  , _go  , _malha  , _material  , _v  , _c  , _t  , get_Ligado, set_Ligado, Liga, EhDaGeo, Update, Alterna, Pede, Pacote, Limpa, Monta, Fraca, Quadrado, Cerca, Tri, ParaUnity, ParaL2, CriaMaterial, OnDestroy, .ctor, .cctor

## SparkBotsArma
- campos: PRIMEIRO_ID, AUGMENT, LADO, FILEIRA, FRENTE, POR_LINHA, NORMAIS, INFINITY, _bots
- métodos: PRIMEIRO_ID  , AUGMENT  , LADO  , FILEIRA  , FRENTE  , POR_LINHA  , NORMAIS  , INFINITY  , _bots  , get_Quantos, Trata, Limpa, Cria, Spawna, .cctor

## SparkGmQuest.Estado
- campos: Id, Situacao, Cond, NomeDoEstado, Marcas, Extra
- métodos: Id  , Situacao  , Cond  , NomeDoEstado  , Marcas  , Extra  , .ctor

## SparkGmQuest
- campos: SUB, EXTRA, REPETIVEL, ESTADOS, Dono, DonoId, Quests, Chegou
- métodos: SUB  , EXTRA  , REPETIVEL  , ESTADOS  , Dono  , DonoId  , Quests  , Chegou  , add_Chegou, remove_Chegou, Le, .cctor

## SparkGmVer.Ficha
- campos: Nome, X, Y, Z, ObjId, Raca, Sexo, Classe, Nivel, Exp, Str, Dex, Con, Int, Wit, Men, HpMax, Hp, MpMax, Mp, Sp, Peso, PesoMax
- métodos: Nome  , X  , Y  , Z  , ObjId  , Raca  , Sexo  , Classe  , Nivel  , Exp  , Str  , Dex  , Con  , Int  , Wit  , Men  , HpMax  , Hp  , MpMax  , Mp  , Sp  , Peso  , PesoMax  , .ctor

## SparkGmVer.Item
- campos: ObjId, ItemId, Quantidade, Encanto, Augment, Equipado
- métodos: ObjId  , ItemId  , Quantidade  , Encanto  , Augment  , Equipado  , .ctor

## SparkGmVer
- campos: UltimaFicha, Dono, Itens, Skills, Quests, AdenaNoWarehouse, LimiteDoInventario, Chegou
- métodos: UltimaFicha  , Dono  , Itens  , Skills  , Quests  , AdenaNoWarehouse  , LimiteDoInventario  , Chegou  , add_Chegou, remove_Chegou, Pede, Pacote, .cctor

## SparkRastreio.Linha
- campos: Hora, Texto, Cor, Repete, Andar, Quando
- métodos: Hora  , Texto  , Cor  , Repete  , Andar  , Quando  , .ctor

## SparkRastreio
- campos: SUB_ACOES, SUB_CHAT, MAX_LINHAS, CANAL_AMIGO, LARGURA, ACIMA, PASSO, PONTOS_MAX, CHEGOU, PARADO, FOLGA, VIDA, VERDE, Acoes, Chat, AlvoAcoes, AlvoChat, Mudou, _instancia, _quem, _temDestino, _destino, _desde, _ultimaPos, _paradoDesde, _go, _linha, _material, _pontos
- métodos: SUB_ACOES  , SUB_CHAT  , MAX_LINHAS  , CANAL_AMIGO  , LARGURA  , ACIMA  , PASSO  , PONTOS_MAX  , CHEGOU  , PARADO  , FOLGA  , VIDA  , VERDE  , Acoes  , Chat  , AlvoAcoes  , AlvoChat  , Mudou  , _instancia  , _quem  , _temDestino  , _destino  , _desde  , _ultimaPos  , _paradoDesde  , _go  , _linha  , _material  , _pontos  , add_Mudou, remove_Mudou, Liga, EhDoRastreio, PedeAcoes, PedeChat, Para, Manda, Limpa, Pacote, Acao, Fala, Poe, Escapa, NomeDoCanal, CorDoCanal, Quem, LateUpdate, Desenha, Monta, Esconde, OnDestroy, .ctor, .cctor

## SparkTerritorio
- campos: SUB, ESCALA, PAREDE, BORDA, BORDA_ALTURA, _instancia, _go, _malha, _material, _v, _c, _t
- métodos: SUB  , ESCALA  , PAREDE  , BORDA  , BORDA_ALTURA  , _instancia  , _go  , _malha  , _material  , _v  , _c  , _t  , Liga, Pacote, Monta, Faixa, ParaUnity, CriaMaterial, OnDestroy, .ctor, .cctor

## SparkHenna.Dados
- campos: Dye, N, Preco, Int, Str, Con, Men, Dex, Wit, NomeOficial, Icone, Extra
- métodos: Dye  , N  , Preco  , Int  , Str  , Con  , Men  , Dex  , Wit  , NomeOficial  , Icone  , Extra  , .ctor

## SparkHenna.Opcao
- campos: Simbolo, Dye, Quantos, Preco, Pode
- métodos: Simbolo  , Dye  , Quantos  , Preco  , Pode  

## SparkHenna.Previa
- campos: Simbolo, Dye, Quantos, Preco, Pode, Adena, Antes, Depois
- métodos: Simbolo  , Dye  , Quantos  , Preco  , Pode  , Adena  , Antes  , Depois  , .ctor

## SparkHenna
- campos: STATS, Lista, AdenaDaLista, Slots, Desenhados, Bonus, UltimaPrevia, ListaChegou, PreviaChegou, Mudou, _dados
- métodos: STATS  , Lista  , AdenaDaLista  , Slots  , Desenhados  , Bonus  , UltimaPrevia  , ListaChegou  , PreviaChegou  , Mudou  , _dados  , add_ListaChegou, remove_ListaChegou, add_PreviaChegou, remove_PreviaChegou, add_Mudou, remove_Mudou, Info, Nome, NomeOficial, Icone, Dica, Valores, PacoteLista, PacotePrevia, PacoteAtual, PedePrevia, Desenha, Manda, Reinicia, .cctor

## SparkItensNoChao.Item
- campos: ObjectId, Objeto, Destino, Origem, Inicio, Nome, Brilho
- métodos: ObjectId  , Objeto  , Destino  , Origem  , Inicio  , Nome  , Brilho  , .ctor

## SparkItensNoChao
- campos: SACO, QUEDA, TAMANHO_MINIMO, TEXTO_NA_TELA, ESCALA_DROP, _fonte, _instance, _itens, _modelos, _materiais, _pegos, PEGO_RECENTE, <MouseSobre>k__BackingField, <UltimoPedido>k__BackingField, <UltimoPedidoEm>k__BackingField, ALCANCE_VOANDO, RAIO_PICKUP, BRILHO_EFEITO, BRILHO_DURACAO, BRILHO_TETO, _brilhoPrefab, _brilhoCarregado
- métodos: SACO  , QUEDA  , TAMANHO_MINIMO  , TEXTO_NA_TELA  , ESCALA_DROP  , _fonte  , _instance  , _itens  , _modelos  , _materiais  , _pegos  , PEGO_RECENTE  , <MouseSobre>k__BackingField  , <UltimoPedido>k__BackingField  , <UltimoPedidoEm>k__BackingField  , ALCANCE_VOANDO  , RAIO_PICKUP  , BRILHO_EFEITO  , BRILHO_DURACAO  , BRILHO_TETO  , _brilhoPrefab  , _brilhoCarregado  , Fonte, Caixa, get_Instance, OnDestroy, Cria, Pegou, Remove, Tem, get_MouseSobre, set_MouseSobre, Limpa, Pega, get_UltimoPedido, set_UltimoPedido, get_UltimoPedidoEm, set_UltimoPedidoEm, PosicaoDe, PegaMaisPerto, Distancia, Update, BrilhosAtivos, Brilho, Modelo, PoeTexturaDoDrop, Nome, .ctor

## SparkItemNoChao
- campos: ObjectId
- métodos: ObjectId  , .ctor

## SparkSessao.Entrada
- campos: ItemId, Quantidade
- métodos: ItemId  , Quantidade  , .ctor

## SparkSessao
- campos: ADENA, VALIDADE_DA_VOLTA, _itens, _voltando, _voltandoAte, _temBase, _expBase, <Adena>k__BackingField, Mudou
- métodos: ADENA  , VALIDADE_DA_VOLTA  , _itens  , _voltando  , _voltandoAte  , _temBase  , _expBase  , <Adena>k__BackingField  , Mudou  , get_Adena, set_Adena, get_Itens, add_Mudou, remove_Mudou, Zera, Reinicia, Limpa, get_Exp, ExpAtual, Voltando, Antes, Depois, Totais, Ganhou, .cctor

## SparkMacros.Comando
- campos: Linha, Tipo, D1, D2, Texto
- métodos: Linha  , Tipo  , D1  , D2  , Texto  , .ctor

## SparkMacros.Macro
- campos: Id, Nome, Descricao, Sigla, Icone, Comandos
- métodos: Id  , Nome  , Descricao  , Sigla  , Icone  , Comandos  , .ctor

## SparkMacros.MacroRunner
- campos: _rodando
- métodos: _rodando  , Roda, Executa, Conjurando, .ctor

## SparkMacros
- campos: MAX_MACROS, MAX_LINHAS, MAX_SOMA, MAX_BANCO, MAX_DESCRICAO, MAX_SIGLA, MAX_NOME, ICONES, TIPO_TEXTO, Lista, _revisao, _total, Mudou, _livreEm, _runner
- métodos: MAX_MACROS  , MAX_LINHAS  , MAX_SOMA  , MAX_BANCO  , MAX_DESCRICAO  , MAX_SIGLA  , MAX_NOME  , ICONES  , TIPO_TEXTO  , Lista  , _revisao  , _total  , Mudou  , _livreEm  , _runner  , add_Mudou, remove_Mudou, Pacote, Busca, Icone, Valida, Ocupado, Grava, Apaga, Manda, Zera, Executa, UsaAtalho, NomeDoItem, ItemPeloNome, SkillPeloNome, .cctor

## SparkCorreio.Carta
- campos: Id, DoSistema, Assunto, Quem, Cod, SegundosRestantes, NaoLida, TemAnexos, Devolvida
- métodos: Id  , DoSistema  , Assunto  , Quem  , Cod  , SegundosRestantes  , NaoLida  , TemAnexos  , Devolvida  , .ctor

## SparkCorreio.CartaAberta
- campos: Recebida, Id, DoSistema, Cod, Quem, Assunto, Texto, Itens, AdenaPedida, TemAnexos, Devolvida
- métodos: Recebida  , Id  , DoSistema  , Cod  , Quem  , Assunto  , Texto  , Itens  , AdenaPedida  , TemAnexos  , Devolvida  , .ctor

## SparkCorreio
- campos: MAX_ANEXOS, MAX_NOME, MAX_ASSUNTO, MAX_TEXTO, Entrada, Enviadas, PodemIr, <Aberta>k__BackingField, <TaxaDaCarta>k__BackingField, <TaxaPorAnexo>k__BackingField, <NaoLidas>k__BackingField, <AvisoPendente>k__BackingField, MudouEntrada, MudouEnviadas, MudouItens, Abriu, MudouNaoLidas, Chegou
- métodos: MAX_ANEXOS  , MAX_NOME  , MAX_ASSUNTO  , MAX_TEXTO  , Entrada  , Enviadas  , PodemIr  , <Aberta>k__BackingField  , <TaxaDaCarta>k__BackingField  , <TaxaPorAnexo>k__BackingField  , <NaoLidas>k__BackingField  , <AvisoPendente>k__BackingField  , MudouEntrada  , MudouEnviadas  , MudouItens  , Abriu  , MudouNaoLidas  , Chegou  , get_Aberta, set_Aberta, get_TaxaDaCarta, set_TaxaDaCarta, get_TaxaPorAnexo, set_TaxaPorAnexo, get_NaoLidas, set_NaoLidas, get_AvisoPendente, set_AvisoPendente, add_MudouEntrada, remove_MudouEntrada, add_MudouEnviadas, remove_MudouEnviadas, add_MudouItens, remove_MudouItens, add_Abriu, remove_Abriu, add_MudouNaoLidas, remove_MudouNaoLidas, add_Chegou, remove_Chegou, Pacote, EhDoCorreio, LeEntrada, LeEnviadas, LeAberta, LeItens, LeEstado, LeItem, Zera, PedeEntrada, PedeEnviadas, PedeItens, AbreRecebida, AbreEnviada, ApagaRecebida, ApagaEnviada, PegaAnexo, RecusaAnexo, CancelaEnvio, Envia, Taxa, Ex, Manda, Restante, .cctor

## SparkBigHead.Active
- campos: Head, OriginalScale, Progress, On
- métodos: Head  , OriginalScale  , Progress  , On  , .ctor

## SparkBigHead
- campos: BIT, SCALE, TRANSITION, INTERVAL, _active, _seen, _finished, _next
- métodos: BIT  , SCALE  , TRANSITION  , INTERVAL  , _active  , _seen  , _finished  , _next  , Update, Check, LateUpdate, HeadBone, .ctor

## SparkDiagEfeitos
- campos: _conferiu, _ligado, _saida
- métodos: _conferiu  , _ligado  , _saida  , get_Ligado, Inicia, Escreve, Recolhido

## SparkEfeitosDeEstado.Ponto
- campos: value__, Centro, Cabeca, Pes
- métodos: value__  , Centro  , Cabeca  , Pes  

## SparkEfeitosDeEstado.Ativo
- campos: Go, Ue2, Proximo, Ciclo, Cabeca, Dono
- métodos: Go  , Ue2  , Proximo  , Ciclo  , Cabeca  , Dono  , .ctor

## SparkEfeitosDeEstado
- campos: SANGUE, MAPA, ACIMA_DA_CABECA, _semPrefab, _ativos, _vistos, _sobra, _proximaVarredura
- métodos: SANGUE  , MAPA  , ACIMA_DA_CABECA  , _semPrefab  , _ativos  , _vistos  , _sobra  , _proximaVarredura  , Update, Leve, Olha, OssoDaCabeca, .ctor, .cctor, <Olha>g__NoCorpo|12_0

## SparkFurtivo.Tipo
- campos: value__, Nao, Lit, Arvore
- métodos: value__  , Nao  , Lit  , Arvore  

## SparkFurtivo
- campos: BIT, OPACIDADE, INTERVALO, MAX_VARIANTES, SHADER, ID_BASE_MAP, ID_BASE_COR, ID_CORTE, ID_METAL, ID_LISURA, ID_EMISSAO_MAPA, ID_EMISSAO_COR, ID_CULL, ID_OPACIDADE, _shader, _carregou, _variantes, _originais, _tipos, _tmpR, _tmpM, _furtivos, _vistos, _sobra, _proxima
- métodos: BIT  , OPACIDADE  , INTERVALO  , MAX_VARIANTES  , SHADER  , ID_BASE_MAP  , ID_BASE_COR  , ID_CORTE  , ID_METAL  , ID_LISURA  , ID_EMISSAO_MAPA  , ID_EMISSAO_COR  , ID_CULL  , ID_OPACIDADE  , _shader  , _carregou  , _variantes  , _originais  , _tipos  , _tmpR  , _tmpM  , _furtivos  , _vistos  , _sobra  , _proxima  , Original, SemVariantes, Update, Olha, Troca, Carrega, TipoDe, Variante, Liga, Cor, Num, Poda, .ctor, .cctor

## SparkManor.Tela
- campos: value__, Nenhuma, Sementes, Venda, InfoSementes, InfoColheitas, InfoPadrao, AjusteSementes, AjusteColheitas, Detalhe
- métodos: value__  , Nenhuma  , Sementes  , Venda  , InfoSementes  , InfoColheitas  , InfoPadrao  , AjusteSementes  , AjusteColheitas  , Detalhe  

## SparkManor.Linha
- campos: ObjectId, ItemId, Nivel, Premio1, Premio2, Manor, Sobra, Inicio, Preco, Tipo, Minhas, Estoque, PrecoSemente, PrecoColheita, Limite, Custo, PrecoMin, PrecoMax, HojeQtd, HojePreco, HojeTipo, ProximoQtd, ProximoPreco, ProximoTipo
- métodos: ObjectId  , ItemId  , Nivel  , Premio1  , Premio2  , Manor  , Sobra  , Inicio  , Preco  , Tipo  , Minhas  , Estoque  , PrecoSemente  , PrecoColheita  , Limite  , Custo  , PrecoMin  , PrecoMax  , HojeQtd  , HojePreco  , HojeTipo  , ProximoQtd  , ProximoPreco  , ProximoTipo  , .ctor

## SparkManor
- campos: Castelos, <Atual>k__BackingField, <ManorId>k__BackingField, <Adena>k__BackingField, <DetalheColheita>k__BackingField, Linhas, Chegou
- métodos: Castelos  , <Atual>k__BackingField  , <ManorId>k__BackingField  , <Adena>k__BackingField  , <DetalheColheita>k__BackingField  , Linhas  , Chegou  , get_Atual, set_Atual, get_ManorId, set_ManorId, get_Adena, set_Adena, get_DetalheColheita, set_DetalheColheita, add_Chegou, remove_Chegou, EhDoManor, NomeDoCastelo, LojaDeSementes, Pacote, Troca, Manda, PedeCastelos, CompraSementes, VendeColheitas, AjustaSementes, AjustaColheitas, Zera, .cctor

## SparkObservador
- campos: _instance, CHAVE_AJUDA, CAIXA_OLIMPIADA, CAIXA_CASTELO, ALTURA_MAX, ALTURA_MIN, ALTURA_INICIAL, VELOCIDADE, MUDOU_DE_LUGAR, _ativo, _olimpiada, _barra, _ajuda, _pivo, _temCentro, _centro, _meia, _chao, _alvoAntigo, _grudavaNoOsso, _escondidos, _proximaVarredura
- métodos: _instance  , CHAVE_AJUDA  , CAIXA_OLIMPIADA  , CAIXA_CASTELO  , ALTURA_MAX  , ALTURA_MIN  , ALTURA_INICIAL  , VELOCIDADE  , MUDOU_DE_LUGAR  , _ativo  , _olimpiada  , _barra  , _ajuda  , _pivo  , _temCentro  , _centro  , _meia  , _chao  , _alvoAntigo  , _grudavaNoOsso  , _escondidos  , _proximaVarredura  , get_Ativo, Awake, OnDestroy, Monta, Entra, Sai, PedeSair, MostraAjuda, FechaAjuda, Restaura, Update, Centra, Move, Esconde, .ctor, .cctor, <Monta>b__26_0

## SparkOlimpiada.Lutador
- campos: Lado, ObjectId, Classe, Hp, HpMax, Cp, CpMax, Arma, Augment, Nome, Buffs
- métodos: Lado  , ObjectId  , Classe  , Hp  , HpMax  , Cp  , CpMax  , Arma  , Augment  , Nome  , Buffs  , .ctor

## SparkOlimpiada.Resultado
- campos: Empate, Vencedor, Lados
- métodos: Empate  , Vencedor  , Lados  , .ctor

## SparkOlimpiada.Linha
- campos: Lado, ClanId, Classe, Dano, Pontos, Diferenca, Nome, Clan
- métodos: Lado  , ClanId  , Classe  , Dano  , Pontos  , Diferenca  , Nome  , Clan  , .ctor

## SparkOlimpiada
- campos: <Modo>k__BackingField, Lutadores, <Ultimo>k__BackingField, Mudou, ChegouResultado
- métodos: <Modo>k__BackingField  , Lutadores  , <Ultimo>k__BackingField  , Mudou  , ChegouResultado  , get_Modo, set_Modo, get_Ultimo, set_Ultimo, add_Mudou, remove_Mudou, add_ChegouResultado, remove_ChegouResultado, EhDaOlimpiada, get_Ativa, Pacote, Zera, NomeDaClasse, .cctor

## SparkApiGrafica.Conferente
- campos: -
- métodos: Update, .ctor

## SparkApiGrafica
- campos: NOMES, CHAVES, ARGUMENTOS, CONFIRMA_APOS, <Aviso>k__BackingField
- métodos: NOMES  , CHAVES  , ARGUMENTOS  , CONFIRMA_APOS  , <Aviso>k__BackingField  , get_Aviso, set_Aviso, get_Pasta, get_Arquivo, get_ArquivoTeste, get_Atual, get_NomeAtual, LeEscolha, GravaEscolha, Reinicia, ExeDoJogo, AoAbrir, Confere, .cctor

## SparkDetalhePersonagem.Estado
- campos: Sombra, Aplicada, Revisao, Lod, LodPendente, RevisaoLod
- métodos: Sombra  , Aplicada  , Revisao  , Lod  , LodPendente  , RevisaoLod  , .ctor

## SparkDetalhePersonagem.Lod
- campos: Original
- métodos: Original  , .ctor

## SparkDetalhePersonagem.Trabalho
- campos: Original, Simplificadores, Lidos, Tarefa, Versoes, Prontas
- métodos: Original  , Simplificadores  , Lidos  , Tarefa  , Versoes  , Prontas  , .ctor

## SparkDetalhePersonagem
- campos: _instancia, INTERVALO, INTERVALO_LISTA, REVISAO, LIMPEZA, _entidades, _proxima, _proximaLista, _proximaLimpeza, _estados, _originais, _pecas, _ordem, _lods, _malhas, _simplificadas, _fila, _naFila, _trabalhos, _relogio, _avisouErro, QUALIDADES, MAX_TRABALHOS, ORCAMENTO_MS, _mortas, _rendMortos, _smrMortos, _malhasMortas
- métodos: _instancia  , INTERVALO  , INTERVALO_LISTA  , REVISAO  , LIMPEZA  , _entidades  , _proxima  , _proximaLista  , _proximaLimpeza  , _estados  , _originais  , _pecas  , _ordem  , _lods  , _malhas  , _simplificadas  , _fila  , _naFila  , _trabalhos  , _relogio  , _avisouErro  , QUALIDADES  , MAX_TRABALHOS  , ORCAMENTO_MS  , _mortas  , _rendMortos  , _smrMortos  , _malhasMortas  , Garante, Update, EstadoDe, Conta, AtualizaSombras, AplicaSombra, get_LodsProntos, get_LodsNaFila, get_LodsEmUso, EntraNoLod, AtualizaLod, AplicaLod, EhSimplificadaDe, Simplificadas, Opcoes, GeraLods, Passo, Termina, DesfazLods, Limpa, OnDestroy, .ctor, .cctor

## SparkFps
- campos: _instance, SUB_PING, SEM_RESPOSTA, INTERVALO_VIVO, LAGADO, _rotulo, _quadros, _tempo, _fps, _trava, _numero, _enviadoEm, _esperando, _ping, _proximoPing, _pingMostrado
- métodos: _instance  , SUB_PING  , SEM_RESPOSTA  , INTERVALO_VIVO  , LAGADO  , _rotulo  , _quadros  , _tempo  , _fps  , _trava  , _numero  , _enviadoEm  , _esperando  , _ping  , _proximoPing  , _pingMostrado  , get_Instance, Awake, OnDestroy, Monta, Atualiza, Resposta, get_Lagado, Update, PedePing, Escreve, .ctor, .cctor

## SparkOpcoes.Executor
- campos: _instancia, _proxima, _camera
- métodos: _instancia  , _proxima  , _camera  , Garante, Update, .ctor

## SparkOpcoes
- campos: Largura, Altura, Hz, Modo, VSync, Fps, FpsSemFoco, Preset, Escala, Sombras, Aa, Distancia, Texturas, Bloom, Profundidade, Cinema, Brilho, SombraPersonagem, DetalhePersonagem, DistanciaNome, LodPersonagem, SombraSimples, MultidaoGpu, Upscaler, NitidezFsr, ResDinamica, ApiGrafica, MostraEfeitos, QualidadeEfeitos, DistanciaEfeitos, OndasNaAgua, <ModoMinimo>k__BackingField, Geral, Musica, Efeitos, Interface, Ambiente, MudoSemFoco, Mudo, EfeitoDeParty, CorDaParty, LootDaParty, LOOTS, NOMES_CORES_PARTY, CORES_PARTY, MostraFps, MostraPing, NOMES_CORES_INFO, CORES_INFO, CorInfo, TAMANHOS_INFO, FONTES_INFO, TamanhoInfo, InverteY, InverteRoda, EnterChat, OpacidadeChat, EscalaAtalhos, OPACIDADE_CHAT_MIN, OPACIDADE_CHAT_MAX, ESCALA_ATALHOS_MIN, ESCALA_ATALHOS_MAX, TamanhoBuff, TAMANHO_BUFF_MIN, TAMANHO_BUFF_MAX, CHAVES_TEXTO_DANO, TextoDano, Ceu, CEUS, CEU_MINUTOS, CeuMudou, Clima, CLIMAS, ClimaMudou, PRESETS, MODOS, FPS, FPS_SEM_FOCO, ESCALAS, SOMBRAS, AAS, DISTANCIAS, TEXTURAS, SOMBRAS_PERSONAGEM, DETALHES, DISTANCIAS_NOME, MOSTRA_EFEITOS, QUALIDADES_EFEITO, DISTANCIAS_EFEITO, UPSCALERS, NITIDEZES, NITIDEZ_FSR, RES_DINAMICA, SOMBRAS_PERTO, Mudou, _carregou, _copia, _volume, _bloom, _dof, _ca, _lf, _cor
- métodos: Largura  , Altura  , Hz  , Modo  , VSync  , Fps  , FpsSemFoco  , Preset  , Escala  , Sombras  , Aa  , Distancia  , Texturas  , Bloom  , Profundidade  , Cinema  , Brilho  , SombraPersonagem  , DetalhePersonagem  , DistanciaNome  , LodPersonagem  , SombraSimples  , MultidaoGpu  , Upscaler  , NitidezFsr  , ResDinamica  , ApiGrafica  , MostraEfeitos  , QualidadeEfeitos  , DistanciaEfeitos  , OndasNaAgua  , <ModoMinimo>k__BackingField  , Geral  , Musica  , Efeitos  , Interface  , Ambiente  , MudoSemFoco  , Mudo  , EfeitoDeParty  , CorDaParty  , LootDaParty  , LOOTS  , NOMES_CORES_PARTY  , CORES_PARTY  , MostraFps  , MostraPing  , NOMES_CORES_INFO  , CORES_INFO  , CorInfo  , TAMANHOS_INFO  , FONTES_INFO  , TamanhoInfo  , InverteY  , InverteRoda  , EnterChat  , OpacidadeChat  , EscalaAtalhos  , OPACIDADE_CHAT_MIN  , OPACIDADE_CHAT_MAX  , ESCALA_ATALHOS_MIN  , ESCALA_ATALHOS_MAX  , TamanhoBuff  , TAMANHO_BUFF_MIN  , TAMANHO_BUFF_MAX  , CHAVES_TEXTO_DANO  , TextoDano  , Ceu  , CEUS  , CEU_MINUTOS  , CeuMudou  , Clima  , CLIMAS  , ClimaMudou  , PRESETS  , MODOS  , FPS  , FPS_SEM_FOCO  , ESCALAS  , SOMBRAS  , AAS  , DISTANCIAS  , TEXTURAS  , SOMBRAS_PERSONAGEM  , DETALHES  , DISTANCIAS_NOME  , MOSTRA_EFEITOS  , QUALIDADES_EFEITO  , DISTANCIAS_EFEITO  , UPSCALERS  , NITIDEZES  , NITIDEZ_FSR  , RES_DINAMICA  , SOMBRAS_PERTO  , Mudou  , _carregou  , _copia  , _volume  , _bloom  , _dof  , _ca  , _lf  , _cor  , AplicaMultidao, get_ModoMinimo, set_ModoMinimo, add_CeuMudou, remove_CeuMudou, MudaCeu, RazaoDoCeu, add_ClimaMudou, remove_ClimaMudou, MudaClima, ClimaValido, PadraoTextoDano, get_DistanciaDoNome, get_FatorDeDetalhe, get_LodPerto, get_LodLonge, add_Mudou, remove_Mudou, Carrega, Recarrega, PadraoVideo, PadraoAudio, PadraoJogo, PadraoInterface, Salva, SalvaJogo, GravaControles, LeClima, Le, LeF, Grava, GravaF, UsaPreset, AplicaTudo, ResolucaoExiste, AplicaTela, get_AssetEmUso, AplicaQualidade, get_FatorDeDistancia, AplicaCamera, AplicaEfeitos, AplicaInterface, AplicaAudio, TrocaMudo, TrocaMinimo, PoeMinimo, DaMinhaParty, .cctor

## SparkResolucao
- campos: DEGRAUS, JANELA, ESPERA_TROCA, PESADO_SEGUIDAS, FOLGA_SEGUIDAS, TESTE_SUBIDA, BLOQUEIO_MIN, BLOQUEIO_MAX, _instancia, _asset, <EscalaAtual>k__BackingField, <Caminho>k__BackingField, <NativaRecusada>k__BackingField, <MedidaMs>k__BackingField, <AlvoMs>k__BackingField, <MedeGpu>k__BackingField, _degrau, _nativo, _janela, _somaQuadro, _somaGpu, _quadros, _quadrosGpu, _pesado, _folga, _ultimaTroca, _subiuEm, _bloqueioAte, _bloqueio, _conferirNativa, _gpuNoTopo, _proximaCamera, _camera, _tempos
- métodos: DEGRAUS  , JANELA  , ESPERA_TROCA  , PESADO_SEGUIDAS  , FOLGA_SEGUIDAS  , TESTE_SUBIDA  , BLOQUEIO_MIN  , BLOQUEIO_MAX  , _instancia  , _asset  , <EscalaAtual>k__BackingField  , <Caminho>k__BackingField  , <NativaRecusada>k__BackingField  , <MedidaMs>k__BackingField  , <AlvoMs>k__BackingField  , <MedeGpu>k__BackingField  , _degrau  , _nativo  , _janela  , _somaQuadro  , _somaGpu  , _quadros  , _quadrosGpu  , _pesado  , _folga  , _ultimaTroca  , _subiuEm  , _bloqueioAte  , _bloqueio  , _conferirNativa  , _gpuNoTopo  , _proximaCamera  , _camera  , _tempos  , get_EscalaAtual, set_EscalaAtual, get_Caminho, set_Caminho, get_NativaRecusada, set_NativaRecusada, get_MedidaMs, set_MedidaMs, get_AlvoMs, set_AlvoMs, get_MedeGpu, set_MedeGpu, get_NomeUpscaler, get_FsrDisponivel, Aplica, get_EscalaFixa, QuerNativo, get_ApiTemNativa, Reinicia, LigaNativa, PoeDegrau, AlvoFps, Update, OnDestroy, .ctor, .cctor

## SparkTeclas.Item
- campos: Rotulo, Grupo, Acao, Atalhos, Padrao, SoComChat
- métodos: Rotulo  , Grupo  , Acao  , Atalhos  , Padrao  , SoComChat  , get_Chave, .ctor

## SparkTeclas.Captura
- campos: Ativa, _item, _slot, _fim, _desde, _modSozinho
- métodos: Ativa  , _item  , _slot  , _fim  , _desde  , _modSozinho  , Comeca, Termina, LidaDigitando, TeclaDeTexto, EModificador, Update, .ctor

## SparkTeclas
- campos: CHAVE, CHAVE_ANTIGA_JOGO, CHAVE_ANTIGA_NOSSO, _nosso, _jogo, _itens, _padraoNosso, Mudou, PAGINAS_NA_TECLA, VOO, _captura, QuadroDaTroca
- métodos: CHAVE  , CHAVE_ANTIGA_JOGO  , CHAVE_ANTIGA_NOSSO  , _nosso  , _jogo  , _itens  , _padraoNosso  , Mudou  , PAGINAS_NA_TECLA  , VOO  , _captura  , QuadroDaTroca  , add_Mudou, remove_Mudou, get_Nosso, CriaNosso, Nossa, Apertou, TextoDaAcao, Segurando, CarregaJogo, Salva, VoltaAoPadrao, Lista, MontaLista, Deriva, NomeDoModificador, Junta, Separa, MontaBindings, Texto, TextoDe, QuemUsa, PaginaPedida, TrocandoPagina, VooEBarra, TeclaDoVoo, EmUso, get_Trocando, Troca, Grava, .cctor, <MontaLista>g__Jogo|22_0, <MontaLista>g__Nossa|22_1

## SparkCanal
- campos: <Ativo>k__BackingField, <Lider>k__BackingField, <Membros>k__BackingField, <Partys>k__BackingField, Mudou, ChegouMembros
- métodos: <Ativo>k__BackingField  , <Lider>k__BackingField  , <Membros>k__BackingField  , <Partys>k__BackingField  , Mudou  , ChegouMembros  , get_Ativo, set_Ativo, get_Lider, set_Lider, get_Membros, set_Membros, get_Partys, add_Mudou, remove_Mudou, add_ChegouMembros, remove_ChegouMembros, get_SouLiderDoCanal, Abriu, Fechou, Info, MembrosDaParty, Convidado, Convida, PedeLista, Sai, Desfaz, Expulsa, PedeMembros, .cctor

## SparkParty
- campos: _membros, <LiderId>k__BackingField, <Distribuicao>k__BackingField, Mudou, _petEfeitosDe, _petEfeitos, <PetEfeitosEm>k__BackingField, _posicoes, TANQUE, GUERREIRO, ADAGA, ARQUEIRO, MAGO, INVOCADOR, CURA, BUFFER, _papel, _base, _primeira, _magoBase, NOBLESSE, _cancoes
- métodos: _membros  , <LiderId>k__BackingField  , <Distribuicao>k__BackingField  , Mudou  , _petEfeitosDe  , _petEfeitos  , <PetEfeitosEm>k__BackingField  , _posicoes  , TANQUE  , GUERREIRO  , ADAGA  , ARQUEIRO  , MAGO  , INVOCADOR  , CURA  , BUFFER  , _papel  , _base  , _primeira  , _magoBase  , NOBLESSE  , _cancoes  , get_Membros, get_LiderId, set_LiderId, get_Distribuicao, set_Distribuicao, get_DistribuicaoDoConvite, get_EmParty, get_SouLider, add_Mudou, remove_Mudou, Tudo, Entrou, Saiu, Acabou, Atualiza, Efeitos, get_PetEfeitosEm, set_PetEfeitosEm, EfeitosDoPet, PetEfeitos, Posicoes, PosicaoDoMembro, PorNome, Convida, Sai, Expulsa, PassaLider, NomeDoAlvoJogador, IconeDaClasse, EhCancao, EhDebuff, .cctor

## SparkTokens
- campos: _tokens
- métodos: _tokens  , Marca, De, Limpa, .cctor

## SparkAjusteMontaria.Ajuste
- campos: Modelo, Npc, Osso, Deslocamento, EscalaDoBicho, AlturaDaCamera, Corrida, PernasAbertas
- métodos: Modelo  , Npc  , Osso  , Deslocamento  , EscalaDoBicho  , AlturaDaCamera  , Corrida  , PernasAbertas  , .ctor

## SparkAjusteMontaria
- campos: ARQUIVO, _a, <Versao>k__BackingField, Ajustes, BaiumGrande, BaiumPequeno, MiniValakas, MiniAntharas, BARRA_MALHA, BARRA_NPC, BARRA_NOME, _barraVista, CAIXA_DO_CORPO
- métodos: ARQUIVO  , _a  , <Versao>k__BackingField  , Ajustes  , BaiumGrande  , BaiumPequeno  , MiniValakas  , MiniAntharas  , BARRA_MALHA  , BARRA_NPC  , BARRA_NOME  , _barraVista  , CAIXA_DO_CORPO  , get_Versao, set_Versao, Barras, PoeBarras, BarrasDasLinhas, AplicaBarras, EscalaPetsAPe, Awake, Para, Linha, EscalaDoInvocado, CaixaDoCorpo, Acha, OnValidate, .ctor, .cctor

## SparkMontaria.Montado
- campos: Tipo, _e, _bicho, _assento, _cavaleiro, _cavaleiroLocal, _anim, _espera, _corre, _ultima, _correndo, _primeiro, _velSuave, _subidaSuave, _malha, _npc, _comPasso, _estado, _ossos, _versao, _desloc, _escalaOriginal, _assentoPadrao, _inclinacao, TemCaixa, CaixaDoCorpo, Caixa, <AlturaDaCamera>k__BackingField, _clipes, CONTAINER
- métodos: Tipo  , _e  , _bicho  , _assento  , _cavaleiro  , _cavaleiroLocal  , _anim  , _espera  , _corre  , _ultima  , _correndo  , _primeiro  , _velSuave  , _subidaSuave  , _malha  , _npc  , _comPasso  , _estado  , _ossos  , _versao  , _desloc  , _escalaOriginal  , _assentoPadrao  , _inclinacao  , TemCaixa  , CaixaDoCorpo  , Caixa  , <AlturaDaCamera>k__BackingField  , _clipes  , CONTAINER  , get_Cavaleiro, get_Bicho, get_AlturaDaCamera, set_AlturaDaCamera, Cria, CliqueDoConjunto, CaixaDoBicho, Clipe, AlguemExige, Assento, ClipeDoCavaleiro, Reajusta, Atualiza, Passo, Desmonta, .ctor, .cctor

## SparkMontaria
- campos: STRIDER, WYVERN, INTERVALO, _instancia, _montados, _sai, _proxima, CLIPE, CONTAINER_PET
- métodos: STRIDER  , WYVERN  , INTERVALO  , _instancia  , _montados  , _sai  , _proxima  , CLIPE  , CONTAINER_PET  , Liga, AlturaDaCamera, AncoraDoNome, Bicho, Ride, EstaMontado, Corpo, Pegada, CorpoDoBicho, Update, LateUpdate, Aplica, CorridaDoPet, .ctor, .cctor

## SparkPet.Dados
- campos: Tipo, ObjectId, NpcId, Nome, Comida, ComidaMax, Hp, HpMax, Mp, MpMax, Sp, Nivel, Xp, XpDoNivel, XpDoProximo, Peso, PesoMax, PAtk, PDef, MAtk, MDef, Precisao, Esquiva, Critico, Velocidade, VelAtaque, VelCast, Soulshots, Spiritshots, Montavel
- métodos: Tipo  , ObjectId  , NpcId  , Nome  , Comida  , ComidaMax  , Hp  , HpMax  , Mp  , MpMax  , Sp  , Nivel  , Xp  , XpDoNivel  , XpDoProximo  , Peso  , PesoMax  , PAtk  , PDef  , MAtk  , MDef  , Precisao  , Esquiva  , Critico  , Velocidade  , VelAtaque  , VelCast  , Soulshots  , Spiritshots  , Montavel  , .ctor

## SparkPet.Item
- campos: ObjectId, ItemId, Count, Enchant, Equipado
- métodos: ObjectId  , ItemId  , Count  , Enchant  , Equipado  , .ctor

## SparkPet
- campos: SERVITOR, PET, <Atual>k__BackingField, Mudou, Mostra, Sumiu, JANELA_DESINVOCADO, _desinvocados, Itens, MudouItens, <Montaria>k__BackingField, MudouMontaria, MONTAR, SKILLS_POR_MALHA
- métodos: SERVITOR  , PET  , <Atual>k__BackingField  , Mudou  , Mostra  , Sumiu  , JANELA_DESINVOCADO  , _desinvocados  , Itens  , MudouItens  , <Montaria>k__BackingField  , MudouMontaria  , MONTAR  , SKILLS_POR_MALHA  , get_Atual, set_Atual, add_Mudou, remove_Mudou, add_Mostra, remove_Mostra, add_Sumiu, remove_Sumiu, get_EhPet, Info, StatusUpdate, Delete, MarcaDesinvocado, Desinvocado, StatusShow, Removido, Some, Zera, add_MudouItens, remove_MudouItens, ItemList, InventoryUpdate, UsaItem, Da, Pega, get_Montaria, set_Montaria, add_MudouMontaria, remove_MudouMontaria, Ride, Acao, get_Seguir, get_Atacar, get_Parar, get_IrAoAlvo, get_Desinvocar, Ordens, Skills, NomeDaAcao, IconeDaAcao, .cctor

## SparkQuests.Passo
- campos: Titulo, Texto, Npc, Itens, Alvo
- métodos: Titulo  , Texto  , Npc  , Itens  , Alvo  , .ctor

## SparkQuests.Meta
- campos: Id, N
- métodos: Id  , N  , .ctor

## SparkQuests.Dados
- campos: Nome, Min, Max, Tipo, Intro, NpcInicio, LocInicio, Requisito, NoServidor, Passos
- métodos: Nome  , Min  , Max  , Tipo  , Intro  , NpcInicio  , LocInicio  , Requisito  , NoServidor  , Passos  , .ctor

## SparkQuests.Ativa
- campos: Id, Condicao
- métodos: Id  , Condicao  

## SparkQuests.BossDoRadar
- campos: x, y, z, nome
- métodos: x  , y  , z  , nome  , .ctor

## SparkQuests.BossesDoRadar
- campos: raid, grand
- métodos: raid  , grand  , .ctor

## SparkQuests
- campos: Ativas, Mudou, MAX_ALARMES, Alarmes, <Local>k__BackingField, MudouAcompanhamento, _conhecidas, _primeiraLista, _dono, _dados, <Radar>k__BackingField, _radar, _tirouTodos, _bossesDoRadar
- métodos: Ativas  , Mudou  , MAX_ALARMES  , Alarmes  , <Local>k__BackingField  , MudouAcompanhamento  , _conhecidas  , _primeiraLista  , _dono  , _dados  , <Radar>k__BackingField  , _radar  , _tirouTodos  , _bossesDoRadar  , add_Mudou, remove_Mudou, get_Local, set_Local, add_MudouAcompanhamento, remove_MudouAcompanhamento, Info, get_Todas, Pacote, AcompanhaLista, NoAlarme, Alarme, MostraLocal, get_Radar, set_Radar, MostraRadar, RadarEm, RadarDoServidor, NomeDoPonto, PassoDe, AlvoDoLocal, TemAlvo, get_Chave, Carrega, Salva, PassoAtual, PassoFeito, Tipo, Repetivel, PedeLista, Abandona, Manda, Reinicia, .cctor

## SparkTutorial
- campos: EV_ANDOU, EV_GIROU, EV_RECENTROU, EV_SENTOU, EV_MORREU, EV_HP_BAIXO, ADENA, BLUE_GEMSTONE, <Mascara>k__BackingField, _instance, _mandados, _eu, _estavaMorto, _estavaSentado, _girou, _proxima
- métodos: EV_ANDOU  , EV_GIROU  , EV_RECENTROU  , EV_SENTOU  , EV_MORREU  , EV_HP_BAIXO  , ADENA  , BLUE_GEMSTONE  , <Mascara>k__BackingField  , _instance  , _mandados  , _eu  , _estavaMorto  , _estavaSentado  , _girou  , _proxima  , get_Mascara, set_Mascara, get_Instance, OnDestroy, MostraHtml, Interrogacao, Habilita, Zera, Fecha, Link, CliqueNaInterrogacao, Evento, UmaVez, ItensChegaram, Manda, Update, .ctor, .cctor

## SparkSeteSelos.Pagina1
- campos: Ciclo, MsgPeriodo, MsgPrazo, MeuLado, MeuSelo, Pedras, AncientAdena, PedrasLado, FestivalLado, TotalLado, PorCento
- métodos: Ciclo  , MsgPeriodo  , MsgPrazo  , MeuLado  , MeuSelo  , Pedras  , AncientAdena  , PedrasLado  , FestivalLado  , TotalLado  , PorCento  , .ctor

## SparkSeteSelos.Festival
- campos: Id, Minimo, Pontos, Party
- métodos: Id  , Minimo  , Pontos  , Party  , .ctor

## SparkSeteSelos.Selo
- campos: Id, Dono, Previsto, Msg, PorCento
- métodos: Id  , Dono  , Previsto  , Msg  , PorCento  , .ctor

## SparkSeteSelos
- campos: NENHUM, DUSK, DAWN, <Periodo>k__BackingField, <Status>k__BackingField, Festivais, Selos, Previsao, MinimoManter, MinimoTomar, VencedorPrevisto, <Ceu>k__BackingField, Chegou, MudouCeu
- métodos: NENHUM  , DUSK  , DAWN  , <Periodo>k__BackingField  , <Status>k__BackingField  , Festivais  , Selos  , Previsao  , MinimoManter  , MinimoTomar  , VencedorPrevisto  , <Ceu>k__BackingField  , Chegou  , MudouCeu  , get_Periodo, set_Periodo, get_Status, set_Status, get_Ceu, set_Ceu, add_Chegou, remove_Chegou, add_MudouCeu, remove_MudouCeu, Pacote, PacoteCeu, PedePagina, Zera, NomeDoLado, LadoCurto, NomeDoSelo, NomeDoPeriodo, NomeDoFestival, Msg, .cctor

## SparkSiege.Cla
- campos: Id, Nome, Lider, AllyId, Ally, Tipo
- métodos: Id  , Nome  , Lider  , AllyId  , Ally  , Tipo  , .ctor

## SparkSiege
- campos: DONO, ESPERANDO, APROVADO, <Castelo>k__BackingField, <SouLiderDono>k__BackingField, <DonoId>k__BackingField, <Dono>k__BackingField, <DonoLider>k__BackingField, <DonoAlly>k__BackingField, <DataDoSiege>k__BackingField, <DiferencaDoRelogio>k__BackingField, Atacantes, Defensores, <TemDono>k__BackingField, Abriu, MudouAtacantes, MudouDefensores
- métodos: DONO  , ESPERANDO  , APROVADO  , <Castelo>k__BackingField  , <SouLiderDono>k__BackingField  , <DonoId>k__BackingField  , <Dono>k__BackingField  , <DonoLider>k__BackingField  , <DonoAlly>k__BackingField  , <DataDoSiege>k__BackingField  , <DiferencaDoRelogio>k__BackingField  , Atacantes  , Defensores  , <TemDono>k__BackingField  , Abriu  , MudouAtacantes  , MudouDefensores  , get_Castelo, set_Castelo, get_SouLiderDono, set_SouLiderDono, get_DonoId, set_DonoId, get_Dono, set_Dono, get_DonoLider, set_DonoLider, get_DonoAlly, set_DonoAlly, get_DataDoSiege, set_DataDoSiege, get_DiferencaDoRelogio, set_DiferencaDoRelogio, get_TemDono, set_TemDono, add_Abriu, remove_Abriu, add_MudouAtacantes, remove_MudouAtacantes, add_MudouDefensores, remove_MudouDefensores, Info, Lista, NomeDoCastelo, PedeAtacantes, PedeDefensores, Inscreve, Sai, Aprova, Manda, Zera, .cctor

## SparkMobSkillAnim
- campos: _trava, _tabela, _caminho
- métodos: _trava  , _tabela  , _caminho  , GuardaCaminho, Busca, Carrega, .cctor

## SparkSkillEncanto.Nivel
- campos: Base, Nome, Efeito, Descricao
- métodos: Base  , Nome  , Efeito  , Descricao  , .ctor

## SparkSkillEncanto
- campos: _trava, _tabela, _caminho
- métodos: _trava  , _tabela  , _caminho  , GuardaCaminho, Busca, Mais, Carrega, Unico, .cctor

## SparkSkillServidor.Consumo
- campos: Mp, Hp, ItemId, ItemQtd, ReuseMs, Alcance, CastMs, CoolMs
- métodos: Mp  , Hp  , ItemId  , ItemQtd  , ReuseMs  , Alcance  , CastMs  , CoolMs  , .ctor

## SparkSkillServidor
- campos: _trava, _tabela, _caminho, FRASE_CONSUMO
- métodos: _trava  , _tabela  , _caminho  , FRASE_CONSUMO  , GuardaCaminho, Busca, CoolMs, TiraConsumoClassic, FicaNoTexto, Carrega, .cctor

## SparkAjusteEscala.Ajuste
- campos: Modelo, Multiplicador, Elevacao
- métodos: Modelo  , Multiplicador  , Elevacao  , .ctor

## SparkAjusteEscala
- campos: ARQUIVO, _a, _reaplica, Ajustes
- métodos: ARQUIVO  , _a  , _reaplica  , Ajustes  , Liga, Awake, Multiplicador, Linha, AplicaElevacao, OnValidate, Update, .ctor

## SparkAutoPocao
- campos: PREFIXO, SLOTS, PADRAO, NOMES, RECURSO, <Ligado>k__BackingField, <BarraLigada>k__BackingField, Item, Gatilho, Armado, Permitidos, Mudou, _ultimoEstado, INTERVALO, _fila, _ultimoEnvio
- métodos: PREFIXO  , SLOTS  , PADRAO  , NOMES  , RECURSO  , <Ligado>k__BackingField  , <BarraLigada>k__BackingField  , Item  , Gatilho  , Armado  , Permitidos  , Mudou  , _ultimoEstado  , INTERVALO  , _fila  , _ultimoEnvio  , get_Ligado, set_Ligado, get_BarraLigada, set_BarraLigada, add_Mudou, remove_Mudou, Linha, LeEstado, Escolhe, Alterna, LigaBarra, Manda, Drena, Envia, NaBolsa, PrimeiroNaBolsa, .cctor

## SparkDialogo.Pergunta
- campos: Mensagem, Parametros, Tempo, QuemPediu
- métodos: Mensagem  , Parametros  , Tempo  , QuemPediu  , .ctor

## SparkDialogo
- campos: -
- métodos: Le, Pacote, Responde

## SparkEscalaNpc.Item
- campos: Id, Escala
- métodos: Id  , Escala  , .ctor

## SparkEscalaNpc.Arquivo
- campos: Lista
- métodos: Lista  , .ctor

## SparkEscalaNpc
- campos: _escalas, INVISIVEIS
- métodos: _escalas  , INVISIVEIS  , Para, Liga, EscondeInvisiveis, .cctor

## SparkNado.Zona
- campos: Id, MinZ, MaxZ, X, Y, MinX, MaxX, MinY, MaxY
- métodos: Id  , MinZ  , MaxZ  , X  , Y  , MinX  , MaxX  , MinY  , MaxY  , .ctor

## SparkNado.Arquivo
- campos: Zonas
- métodos: Zonas  , .ctor

## SparkNado
- campos: L2, _instancia, _zonas, Boia, AjusteSuperficie, CorDaAgua, Visibilidade, SomAbafado, ZonaMortaDaCamera, <Submerso>k__BackingField, <SuperficieDaCamera>k__BackingField, _nadando, _sai, _proxima, _proximaBracada, _volume, _cor, _vinheta, _loop, _passaBaixa, _dsp, _dspLigado, _eraSubmerso, _clipesPorRaca
- métodos: L2  , _instancia  , _zonas  , Boia  , AjusteSuperficie  , CorDaAgua  , Visibilidade  , SomAbafado  , ZonaMortaDaCamera  , <Submerso>k__BackingField  , <SuperficieDaCamera>k__BackingField  , _nadando  , _sai  , _proxima  , _proximaBracada  , _volume  , _cor  , _vinheta  , _loop  , _passaBaixa  , _dsp  , _dspLigado  , _eraSubmerso  , _clipesPorRaca  , get_Submerso, set_Submerso, get_SuperficieDaCamera, set_SuperficieDaCamera, get_Cor, get_VisibilidadeAgua, get_LinhaDeBoia, get_ZonaMorta, Liga, Carrega, Agua, Dentro, Nadando, Update, Confere, Movendo, Clipes, Bracadas, AtualizaSubmerso, AguaAberta, CriaVolume, Abafa, OnDestroy, .ctor, .cctor

## SparkSaida
- campos: _liberado
- métodos: _liberado  , Liga, Sai, Deixa

## SparkLoja.Modo
- campos: value__, Comprar, Vender, MinhaVenda, MinhaCompra
- métodos: value__  , Comprar  , Vender  , MinhaVenda  , MinhaCompra  

## SparkLoja
- campos: VENDA, COMPRA, OFICINA, PACOTE, CRISTAL, _tipos, _letreiros, <Filtro>k__BackingField, LETREIRO_MAX, _cima, _baixo, _precos, _maximos, <ModoAtual>k__BackingField, <DonoId>k__BackingField, <Dono>k__BackingField, <Pacote>k__BackingField, <MinhaAdena>k__BackingField, <Aberta>k__BackingField, <Mensagem>k__BackingField, Mudou
- métodos: VENDA  , COMPRA  , OFICINA  , PACOTE  , CRISTAL  , _tipos  , _letreiros  , <Filtro>k__BackingField  , LETREIRO_MAX  , _cima  , _baixo  , _precos  , _maximos  , <ModoAtual>k__BackingField  , <DonoId>k__BackingField  , <Dono>k__BackingField  , <Pacote>k__BackingField  , <MinhaAdena>k__BackingField  , <Aberta>k__BackingField  , <Mensagem>k__BackingField  , Mudou  , TipoDe, get_Filtro, set_Filtro, PassaNoFiltro, CorDoTipo, PrefixoDoTipo, PrefixoDe, LetreiroDe, Tipo, Letreiro, get_Cima, get_Baixo, get_ModoAtual, set_ModoAtual, get_DonoId, set_DonoId, get_Dono, set_Dono, get_Pacote, set_Pacote, get_MinhaAdena, set_MinhaAdena, get_Aberta, set_Aberta, get_Mensagem, set_Mensagem, get_MinhaLoja, add_Mudou, remove_Mudou, PrecoDe, AbriuVenda, AbriuCompra, AbriuMinhaVenda, AbriuMinhaCompra, Abre, MaximoDe, get_TudoJunto, Apagado, DesceTudo, SobeTudo, get_PedePreco, Desce, Sobe, QuantoEmBaixo, Total, PesoDaTroca, Confirma, Envia, Fecha, Zera, Limpa, Troca, .cctor

## SparkLojaCristal.Item
- campos: ObjectId, ItemId, Enchant, Cristal, Total, Meu, DaLoja
- métodos: ObjectId  , ItemId  , Enchant  , Cristal  , Total  , Meu  , DaLoja  , .ctor

## SparkLojaCristal
- campos: AjustePct, AjusteMin, AjusteMax, AjusteGrade, AjusteMensagem, AjusteChegou, LojaDono, LojaPct, LojaGrade, LojaNome, Itens, ListaChegou, _taxas
- métodos: AjustePct  , AjusteMin  , AjusteMax  , AjusteGrade  , AjusteMensagem  , AjusteChegou  , LojaDono  , LojaPct  , LojaGrade  , LojaNome  , Itens  , ListaChegou  , _taxas  , add_AjusteChegou, remove_AjusteChegou, add_ListaChegou, remove_ListaChegou, TaxaDe, EhDaLoja, ClassePermitida, NomeDaGrade, Pacote, PedeMontagem, Abre, Cristaliza, Manda, Zera, .cctor

## SparkTroca
- campos: _inventario, _meus, _dele, <Aberta>k__BackingField, <ParceiroId>k__BackingField, <Parceiro>k__BackingField, <NivelDoParceiro>k__BackingField, <EuConfirmei>k__BackingField, <OutroConfirmado>k__BackingField, Mudou
- métodos: _inventario  , _meus  , _dele  , <Aberta>k__BackingField  , <ParceiroId>k__BackingField  , <Parceiro>k__BackingField  , <NivelDoParceiro>k__BackingField  , <EuConfirmei>k__BackingField  , <OutroConfirmado>k__BackingField  , Mudou  , get_Inventario, get_Meus, get_Dele, get_Aberta, set_Aberta, get_ParceiroId, set_ParceiroId, get_Parceiro, set_Parceiro, get_NivelDoParceiro, set_NivelDoParceiro, get_EuConfirmei, set_EuConfirmei, get_OutroConfirmado, set_OutroConfirmado, add_Mudou, remove_Mudou, Pedido, Comecou, Entrou, Sobrou, OutroConfirmou, Acabou, Pede, Oferece, Confirma, Cancela, Zera, Limpa, PesoDaTroca, Peso, .cctor

## SparkVip.Premio
- campos: ItemId, Quantidade
- métodos: ItemId  , Quantidade  , .ctor

## SparkVip
- campos: MAXIMO, <Nivel>k__BackingField, <Segundos>k__BackingField, <RecebidoEm>k__BackingField, Rates, <PresencaLigada>k__BackingField, <PresencaSoVip>k__BackingField, <DiaAReceber>k__BackingField, <UltimoRecebido>k__BackingField, <PodeReceber>k__BackingField, Premios, Mudou, MudouPresenca, SouGm
- métodos: MAXIMO  , <Nivel>k__BackingField  , <Segundos>k__BackingField  , <RecebidoEm>k__BackingField  , Rates  , <PresencaLigada>k__BackingField  , <PresencaSoVip>k__BackingField  , <DiaAReceber>k__BackingField  , <UltimoRecebido>k__BackingField  , <PodeReceber>k__BackingField  , Premios  , Mudou  , MudouPresenca  , SouGm  , get_Nivel, set_Nivel, get_Segundos, set_Segundos, get_RecebidoEm, set_RecebidoEm, get_PresencaLigada, set_PresencaLigada, get_PresencaSoVip, set_PresencaSoVip, get_DiaAReceber, set_DiaAReceber, get_UltimoRecebido, set_UltimoRecebido, get_PodeReceber, set_PodeReceber, add_Mudou, remove_Mudou, add_MudouPresenca, remove_MudouPresenca, EhDoVip, Pacote, FaltaAgora, NomeDoNivel, Tempo, PedeInfo, PedePresenca, PegaPresenca, Manda, Zera, .cctor

## SparkArmazem.Modo
- campos: value__, Depositar, Retirar
- métodos: value__  , Depositar  , Retirar  

## SparkArmazem
- campos: TAXA_POR_ITEM, _cima, _baixo, <ModoAtual>k__BackingField, <Tipo>k__BackingField, <MinhaAdena>k__BackingField, <Aberta>k__BackingField, <Geracao>k__BackingField, Mudou
- métodos: TAXA_POR_ITEM  , _cima  , _baixo  , <ModoAtual>k__BackingField  , <Tipo>k__BackingField  , <MinhaAdena>k__BackingField  , <Aberta>k__BackingField  , <Geracao>k__BackingField  , Mudou  , get_Cima, get_Baixo, get_ModoAtual, set_ModoAtual, get_Tipo, set_Tipo, get_MinhaAdena, set_MinhaAdena, get_Aberta, set_Aberta, get_Geracao, set_Geracao, add_Mudou, remove_Mudou, Pacote, NomeDoTipo, Desce, Sobe, Taxa, AdenaDepois, PesoDaTroca, Confirma, Fecha, Troca, .cctor

## SparkCercas
- campos: SUB, ESCALA, ALTURA, CELULA, POSTE, ESPESSURA_CLIQUE, TIPO_ENTIDADE, COR_GRADE, COR_POSTE, _cercas, _matGrade, _matPoste, _camadaClique, _malhaPoste, _texGrade
- métodos: SUB  , ESCALA  , ALTURA  , CELULA  , POSTE  , ESPESSURA_CLIQUE  , TIPO_ENTIDADE  , COR_GRADE  , COR_POSTE  , _cercas  , _matGrade  , _matPoste  , _camadaClique  , _malhaPoste  , _texGrade  , EhDaCerca, Pacote, Remove, Zera, Cria, Poste, MalhaPoste, Grade, Cliques, MaterialGrade, MaterialPoste, TexturaGrade, Transparente, .cctor

## SparkObjetoEstaticoEntity
- campos: <StaticObjectId>k__BackingField, <Tipo>k__BackingField
- métodos: <StaticObjectId>k__BackingField  , <Tipo>k__BackingField  , get_StaticObjectId, set_StaticObjectId, get_Tipo, set_Tipo, Configura, OnStopMoving, OnStartMoving, .ctor

## SparkObjetosEstaticos.Objeto
- campos: ObjectId, StaticId, Tipo, Posicao, Raiz
- métodos: ObjectId  , StaticId  , Tipo  , Posicao  , Raiz  , .ctor

## SparkObjetosEstaticos.Trono
- campos: Id, P, F
- métodos: Id  , P  , F  , .ctor

## SparkObjetosEstaticos.ArquivoTronos
- campos: Tronos
- métodos: Tronos  , .ctor

## SparkObjetosEstaticos
- campos: _objetos, _camadaClique, _tronos
- métodos: _objetos  , _camadaClique  , _tronos  , NomeDoTipo, Pacote, Tronos, Assento, MapaDaVila, Remove, Zera, Cria, .cctor

## SparkPortaEntity
- campos: <DoorId>k__BackingField
- métodos: <DoorId>k__BackingField  , get_DoorId, set_DoorId, Configura, Atualiza, OnStopMoving, OnStartMoving, .ctor

## SparkPortas.Dados
- campos: id, tile, g, p, f, u, s, pa, fa, ua, t
- métodos: id  , tile  , g  , p  , f  , u  , s  , pa  , fa  , ua  , t  , .ctor

## SparkPortas.Arquivo
- campos: portas
- métodos: portas  , .ctor

## SparkPortas.Porta
- campos: ObjectId, D, Raiz, Mover, Malha, Grau, Aberta, Progresso, Hp, HpMax, Inimiga, Entidade, Clique
- métodos: ObjectId  , D  , Raiz  , Mover  , Malha  , Grau  , Aberta  , Progresso  , Hp  , HpMax  , Inimiga  , Entidade  , Clique  , .ctor

## SparkPortas
- campos: _camadaClique, _instance, _dados, _portas, _moldes, _avisouSemDados
- métodos: _camadaClique  , _instance  , _dados  , _portas  , _moldes  , _avisouSemDados  , get_Quantas, Instancia, DadosDa, Info, Status, Remove, EhPorta, Zera, Cria, Caixa, CriaClique, TrocaGrau, Posiciona, Update, .ctor, .cctor

## SparkPacoteEx
- campos: -
- métodos: .ctor

## SparkPacoteLivre
- campos: -
- métodos: .ctor, D, C, H, Q, S, B, Fim

## SparkPacoteSimples
- campos: -
- métodos: .ctor

## SparkPacoteTexto
- campos: -
- métodos: .ctor

## SparkLeitor
- campos: <Opcode>k__BackingField
- métodos: <Opcode>k__BackingField  , get_Opcode, .ctor, Parse, get_Resta, Ex, D, H, C, Q, S, B

## SparkMedidorRede
- campos: JANELA, MS_POR_TICK, _pacotes, _piorEsperaPacote, _filaPacotes, _eventos, _piorEventosQuadro, _piorEsperaEvento, _instancia, _visivel, _inicio, _quadros, _piorQuadro, _texto, _estilo, _tempos, _somaCpu, _somaRender, _somaGpu, _amostras
- métodos: JANELA  , MS_POR_TICK  , _pacotes  , _piorEsperaPacote  , _filaPacotes  , _eventos  , _piorEventosQuadro  , _piorEsperaEvento  , _instancia  , _visivel  , _inicio  , _quadros  , _piorQuadro  , _texto  , _estilo  , _tempos  , _somaCpu  , _somaRender  , _somaGpu  , _amostras  , Liga, PacoteSaiuDaFila, EventosDoQuadro, Update, Tempos, OnGUI, .ctor, .cctor

## SparkServidor
- campos: ARQUIVO
- métodos: ARQUIVO  , Resolve, DaLinhaDeComando, DoArquivo

## SparkMovimentoRemoto
- campos: Lote, <PassosNoLote>k__BackingField, <PassosPorCC>k__BackingField, RAIOS_POR_JOB, _instancia, _transformes, _movimentos, _iterando, _buracos, _noLote, _raios, _acertos
- métodos: Lote  , <PassosNoLote>k__BackingField  , <PassosPorCC>k__BackingField  , RAIOS_POR_JOB  , _instancia  , _transformes  , _movimentos  , _iterando  , _buracos  , _noLote  , _raios  , _acertos  , get_PassosNoLote, set_PassosNoLote, get_PassosPorCC, set_PassosPorCC, get_Movimentos, Zera, Garante, Registra, Tira, Compacta, OnDestroy, Update, GaranteCapacidade, .ctor, .cctor

## SparkClima.Pes
- campos: E, D, DedoE, DedoD
- métodos: E  , D  , DedoE  , DedoD  

## SparkClima
- campos: PASTA, SONS, MAX_MARCAS, TEMPO, CHUVA, NEVE, MOLHADO, COBERTURA, VENTO, CENTRO, LUZ, CEU, ONDAS, ONDAS_LUT, PEGADAS, PEGADAS_AREA, NUVENS, RELAMPAGO, RAIO_CEU, RAIO_VISIVEL, MAIN_TEX, GRADE, OPACIDADE, CAIXA, QUEDA, TAMANHO, GIRO, GIRO_INICIAL, BALANCO, TOTAL, VISIVEL, RASTRO, E_NEVE, BRILHO, AREA, NEVE_REPETICAO, POCA, POCA_REPETICAO, RAIO, FONTE, PEGADA, DESLOCA, SOME, NMARCAS, MARCAS, MARCAS_DIR, Gotas, CaixaChuva, QuedaChuva, TamanhoGota, TamanhoGotaFina, Densidade, OpacidadeChuva, Respingos, AreaRespingos, Flocos, CaixaNeve, QuedaNeve, TamanhoFloco, OpacidadeNeve, Balanco, BrilhoFloco, GiroNeve, Transicao, SegundosParaMolhar, SegundosParaSecar, SegundosParaCobrir, SegundosParaDerreter, RaioDaAgua, SolNaChuva, SolNaNeve, SolNaTempestade, Nuvens, IntervaloRelampago, AtrasoTrovao, VolumeChuvaFraca, VolumeChuva, VolumeTempestade, VolumeTrovao, VolumePasso, AreaPegadas, ResolucaoPegadas, EscalaPe, PegadaSome, PegadaSomeNevando, DistanciaPegadas, Parado, Chuva, Neve, Molhado, Cobertura, Tempestade, Nevado, Relampago, Ligado, AguasDesenhadas, _instancia, _matChuva, _matNeve, _matRespingo, _matChao, _matAgua, _matPegadas, _matCeu, _teto, _tetoLonge, _pa, _pb, _origemPegadas, _temOrigemPegadas, _pegadasAte, _cmd, _mpb, _marcas, _marcasDir, _circulos, _bufMarcas, _bufMarcasDir, _pes, _ultimaPos, _sai, _proximosCirculos, _aguas, _sol, _procuraSol, _foto, _densidade, _fina, _nuvens, _volumeAlvo, _abrigo, _leve, _proximoRaio, _raioEm, _trovaoEm, _raio, _raioVisivel, _somForte, _somFraca, _somAbrigo, _somTrovao, _trovoes, _passosAgua, _passosNeve, _sonsCarregados, DiagnosticoPegadas, _linhasDiag, _ossosDosPes, _vistos, _humanoide
- métodos: PASTA  , SONS  , MAX_MARCAS  , TEMPO  , CHUVA  , NEVE  , MOLHADO  , COBERTURA  , VENTO  , CENTRO  , LUZ  , CEU  , ONDAS  , ONDAS_LUT  , PEGADAS  , PEGADAS_AREA  , NUVENS  , RELAMPAGO  , RAIO_CEU  , RAIO_VISIVEL  , MAIN_TEX  , GRADE  , OPACIDADE  , CAIXA  , QUEDA  , TAMANHO  , GIRO  , GIRO_INICIAL  , BALANCO  , TOTAL  , VISIVEL  , RASTRO  , E_NEVE  , BRILHO  , AREA  , NEVE_REPETICAO  , POCA  , POCA_REPETICAO  , RAIO  , FONTE  , PEGADA  , DESLOCA  , SOME  , NMARCAS  , MARCAS  , MARCAS_DIR  , Gotas  , CaixaChuva  , QuedaChuva  , TamanhoGota  , TamanhoGotaFina  , Densidade  , OpacidadeChuva  , Respingos  , AreaRespingos  , Flocos  , CaixaNeve  , QuedaNeve  , TamanhoFloco  , OpacidadeNeve  , Balanco  , BrilhoFloco  , GiroNeve  , Transicao  , SegundosParaMolhar  , SegundosParaSecar  , SegundosParaCobrir  , SegundosParaDerreter  , RaioDaAgua  , SolNaChuva  , SolNaNeve  , SolNaTempestade  , Nuvens  , IntervaloRelampago  , AtrasoTrovao  , VolumeChuvaFraca  , VolumeChuva  , VolumeTempestade  , VolumeTrovao  , VolumePasso  , AreaPegadas  , ResolucaoPegadas  , EscalaPe  , PegadaSome  , PegadaSomeNevando  , DistanciaPegadas  , Parado  , Chuva  , Neve  , Molhado  , Cobertura  , Tempestade  , Nevado  , Relampago  , Ligado  , AguasDesenhadas  , _instancia  , _matChuva  , _matNeve  , _matRespingo  , _matChao  , _matAgua  , _matPegadas  , _matCeu  , _teto  , _tetoLonge  , _pa  , _pb  , _origemPegadas  , _temOrigemPegadas  , _pegadasAte  , _cmd  , _mpb  , _marcas  , _marcasDir  , _circulos  , _bufMarcas  , _bufMarcasDir  , _pes  , _ultimaPos  , _sai  , _proximosCirculos  , _aguas  , _sol  , _procuraSol  , _foto  , _densidade  , _fina  , _nuvens  , _volumeAlvo  , _abrigo  , _leve  , _proximoRaio  , _raioEm  , _trovaoEm  , _raio  , _raioVisivel  , _somForte  , _somFraca  , _somAbrigo  , _somTrovao  , _trovoes  , _passosAgua  , _passosNeve  , _sonsCarregados  , DiagnosticoPegadas  , _linhasDiag  , _ossosDosPes  , _vistos  , _humanoide  , Chove, Neva, CaemFlocos, EhTempestade, EhChuvaFraca, Liga, LateUpdate, Desliga, Prepara, Globais, CamadaDa, Desenha, Relampagos, Dispara, Trovao, NovaFonte, Clipe, Clipes, CarregaSons, Sons, Toca, SomDoPasso, Passo, Diagnostico, OssosDosPes, MarcaNoPe, Marca, PassoDeMonstro, Circulos, Humanoide, Considera, AtualizaPegadas, NovaPegadas, LiberaPegadas, Mata, OnDestroy, AplicaNaLuz, Cinza, .ctor, .cctor, <OssosDosPes>g__Termina|173_0

## SparkClimaArte
- campos: Nome, Gota, GotaGrade, Floco, FlocoGrade, Ondas, OndasLut, Poca, PocaRepeticao, Neve, NeveRepeticao, Pegada, _nossa, PEGADAS_GRADE, PEGADA_CIRCULO, PEGADA_BOTA
- métodos: Nome  , Gota  , GotaGrade  , Floco  , FlocoGrade  , Ondas  , OndasLut  , Poca  , PocaRepeticao  , Neve  , NeveRepeticao  , Pegada  , _nossa  , PEGADAS_GRADE  , PEGADA_CIRCULO  , PEGADA_BOTA  , get_Nossa, Nova, Fecha, GeraGota, GeraFloco, GeraOndas, GeraOndasLut, Hash, RuidoQueRepete, Fbm, GeraPoca, GeraNeve, GeraPegadas, Circulo, Bota, Elipse, .ctor

## SparkClimaPes.Pe
- campos: Raca, Comprimento, Largura, Abertura, Sola
- métodos: Raca  , Comprimento  , Largura  , Abertura  , Sola  , .ctor

## SparkClimaPes
- campos: W, H, PADRAO, PES
- métodos: W  , H  , PADRAO  , PES  , Indice, Silhueta, .cctor

## SparkClimaTeto
- campos: SEM, ACERTOS, ACIMA, ALCANCE, Res, Tamanho, _renova, _agua, _idTextura, _idArea, _raios, _acertos, _job, _rodando, _origemPendente, _origem, _pronto, _proxima, _dados, _ignora, CAMADAS_DE_PERSONAGEM, _aguas, _textura, _sujo
- métodos: SEM  , ACERTOS  , ACIMA  , ALCANCE  , Res  , Tamanho  , _renova  , _agua  , _idTextura  , _idArea  , _raios  , _acertos  , _job  , _rodando  , _origemPendente  , _origem  , _pronto  , _proxima  , _dados  , _ignora  , CAMADAS_DE_PERSONAGEM  , _aguas  , _textura  , _sujo  , get_Pronto, get_Origem, .ctor, AoCarregar, AoDescarregar, Atualiza, CapturaAgora, Alinha, Manda, Ignora, Le, Publica, Altura, Esquece, Dispose, .cctor

## SparkEfeitoParticulas
- campos: Conjuracao, _sistemas, _ue2
- métodos: Conjuracao  , _sistemas  , _ue2  , Reinicia, ParaNoFimDoCast, .ctor

## SparkUE2Emissor
- campos: Nome, Malha, Desligado, MaxParticulas, Renasce, NascimentoAutomatico, PorSegundoInicial, PorSegundo, Vida, AtrasoInicial, TempoInicial, AquecimentoRelativo, AquecimentoPorSegundo, OutroEmissorLocal, Independente, Deslocamento, Forma, LocalMin, LocalMax, RaioEsfera, PolarMin, PolarMax, VelMin, VelMax, PerdaMin, PerdaMax, Aceleracao, VelMaxAbs, DirecaoVelocidade, Revolucao, RevCentroMin, RevCentroMax, RevPorSegMin, RevPorSegMax, RotacaoDe, RotacaoOffset, TamMin, TamMax, TamUniforme, UsaEscalaTam, EscalaTamRegular, RepeteTam, EscalaTam, UsaEscalaCor, RepeteCor, EscalaCorTempo, EscalaCor, CorMultMin, CorMultMax, Opacidade, FadeIn, FadeOut, FadeInFim, FadeOutInicio, FatorFadeIn, FatorFadeOut, Gira, GiroInicialMin, GiroInicialMax, GiroPorSegMin, GiroPorSegMax, ChanceHorario, Estilo, CorNaMalha, Direcao, NormalProjecao, SubU, SubV, SubInicio, SubFim, SubAleatoria, Material, MalhaParticula, CurvaNaMalha, MateriaisMalha, Quadros, QuadrosPorSeg, QuadrosParte
- métodos: Nome  , Malha  , Desligado  , MaxParticulas  , Renasce  , NascimentoAutomatico  , PorSegundoInicial  , PorSegundo  , Vida  , AtrasoInicial  , TempoInicial  , AquecimentoRelativo  , AquecimentoPorSegundo  , OutroEmissorLocal  , Independente  , Deslocamento  , Forma  , LocalMin  , LocalMax  , RaioEsfera  , PolarMin  , PolarMax  , VelMin  , VelMax  , PerdaMin  , PerdaMax  , Aceleracao  , VelMaxAbs  , DirecaoVelocidade  , Revolucao  , RevCentroMin  , RevCentroMax  , RevPorSegMin  , RevPorSegMax  , RotacaoDe  , RotacaoOffset  , TamMin  , TamMax  , TamUniforme  , UsaEscalaTam  , EscalaTamRegular  , RepeteTam  , EscalaTam  , UsaEscalaCor  , RepeteCor  , EscalaCorTempo  , EscalaCor  , CorMultMin  , CorMultMax  , Opacidade  , FadeIn  , FadeOut  , FadeInFim  , FadeOutInicio  , FatorFadeIn  , FatorFadeOut  , Gira  , GiroInicialMin  , GiroInicialMax  , GiroPorSegMin  , GiroPorSegMax  , ChanceHorario  , Estilo  , CorNaMalha  , Direcao  , NormalProjecao  , SubU  , SubV  , SubInicio  , SubFim  , SubAleatoria  , Material  , MalhaParticula  , CurvaNaMalha  , MateriaisMalha  , Quadros  , QuadrosPorSeg  , QuadrosParte  , Copia, .ctor

## SparkUE2Efeito.Particula
- campos: Pos, VelAnt, Vel, TamInicial, Tam, GiroInicial, GiroPorSeg, RevCentro, RevPorSeg, CorMult, Cor, Tempo, VidaMax, Extra, Sub, Ativa, RecemNascida
- métodos: Pos  , VelAnt  , Vel  , TamInicial  , Tam  , GiroInicial  , GiroPorSeg  , RevCentro  , RevPorSeg  , CorMult  , Cor  , Tempo  , VidaMax  , Extra  , Sub  , Ativa  , RecemNascida  , .ctor

## SparkUE2Efeito.Estado
- campos: D, P, Ativas, Indice, OutroIndice, Sobra, Atraso, Aquecido, MalhaSprite, ObjSprite, ObjMalhas, MatsMalhas, UltimaCor, Quadro, V, UV, C, T
- métodos: D  , P  , Ativas  , Indice  , OutroIndice  , Sobra  , Atraso  , Aquecido  , MalhaSprite  , ObjSprite  , ObjMalhas  , MatsMalhas  , UltimaCor  , Quadro  , V  , UV  , C  , T  , .ctor

## SparkUE2Efeito
- campos: UU, Emissores, CameraForcada, _estados, _parando, ID_COR, ID_TEX, _tempoTotal, <MaxMalhasDesenhadas>k__BackingField, <MaxSpritesDesenhados>k__BackingField, DeFrenteParaCamera, Intensidade, EsticaComAEscala, Terceiro, Entorta, CurvaInicio, CurvaComprimento, CurvaForma, CurvaPonta, Densidade, _acumulado, _falta, _desenhar, _paraEm, _vidaAlvo, _vidaMaisLonga
- métodos: UU  , Emissores  , CameraForcada  , _estados  , _parando  , ID_COR  , ID_TEX  , _tempoTotal  , <MaxMalhasDesenhadas>k__BackingField  , <MaxSpritesDesenhados>k__BackingField  , DeFrenteParaCamera  , Intensidade  , EsticaComAEscala  , Terceiro  , Entorta  , CurvaInicio  , CurvaComprimento  , CurvaForma  , CurvaPonta  , Densidade  , _acumulado  , _falta  , _desenhar  , _paraEm  , _vidaAlvo  , _vidaMaisLonga  , get_TempoSimulado, get_MaxMalhasDesenhadas, set_MaxMalhasDesenhadas, get_MaxSpritesDesenhados, set_MaxSpritesDesenhados, FatorDaCurva, Curvado, GiroDaCurva, Reinicia, Para, ParaDepois, AjustaVida, ExtraDeVida, TempoCurva, OnEnable, OnDisable, Update, LateUpdate, Prepara, Simula, Atualiza, Nasce, Desenha, Particulas, DesenhaSprites, CelulaAtlas, DesenhaMalhas, U, LocalParaMundoUU, MundoParaLocalUU, RotacaoOffset, Aleatorio, Curva, CurvaCor, OnDestroy, .ctor, .cctor

## SparkBrilhoFade.Fade
- campos: Nome, Cor1, Cor2, Periodo, Materiais, Copias
- métodos: Nome  , Cor1  , Cor2  , Periodo  , Materiais  , Copias  , .ctor

## SparkBrilhoFade.Arquivo
- campos: Fades
- métodos: Fades  , .ctor

## SparkBrilhoFade
- campos: EMISSAO, _instancia, _porMaterial, _copia, _fades
- métodos: EMISSAO  , _instancia  , _porMaterial  , _copia  , _fades  , Liga, Carrega, Prepara, Update, .ctor, .cctor

## SparkCaverna
- campos: TETO, INTERVALO, FADE, MINIMO, _instancia, _proxima, _alvo, <Fator>k__BackingField, ZonaDaBussola, ZONA_DE_PAZ, RAIOS, _proximoDiagnostico, IMEDIATO, SALTO, _imediatoAte, _ultimoJogador, _ultimaPosicao, PAREDE, PAREDES_MINIMO, ANEL_PERTO, ANEL_PERTO_MINIMO, ANEL_LONGE, ANEL_LONGE_MINIMO, LEITURAS_ENTRAR, LEITURAS_SAIR, _seguidas, _ultimaLeitura, LADOS, _recortado
- métodos: TETO  , INTERVALO  , FADE  , MINIMO  , _instancia  , _proxima  , _alvo  , <Fator>k__BackingField  , ZonaDaBussola  , ZONA_DE_PAZ  , RAIOS  , _proximoDiagnostico  , IMEDIATO  , SALTO  , _imediatoAte  , _ultimoJogador  , _ultimaPosicao  , PAREDE  , PAREDES_MINIMO  , ANEL_PERTO  , ANEL_PERTO_MINIMO  , ANEL_LONGE  , ANEL_LONGE_MINIMO  , LEITURAS_ENTRAR  , LEITURAS_SAIR  , _seguidas  , _ultimaLeitura  , LADOS  , _recortado  , get_Fator, set_Fator, Liga, get_Imediato, Reavalia, Update, Recortado, RaioSolido, CobertoComHisterese, Coberto, TetoNoAnel, .ctor, .cctor

## SparkEmissoresDoMapa.Lugar
- campos: Tile, Efeito, Pos, Giro, Escala, Vivo, P, SemDobrar
- métodos: Tile  , Efeito  , Pos  , Giro  , Escala  , Vivo  , P  , SemDobrar  , .ctor

## SparkEmissoresDoMapa.Arquivo
- campos: Lugares
- métodos: Lugares  , .ctor

## SparkEmissoresDoMapa
- campos: RAIO, RAIO_SAIDA, _instancia, _lugares, _moldes, _proxima, _pendentes
- métodos: RAIO  , RAIO_SAIDA  , _instancia  , _lugares  , _moldes  , _proxima  , _pendentes  , Liga, Awake, Acrescenta, Perto, Junta, Update, Giro, GiroDoMapa, Acende, .ctor, .cctor

## SparkLuzesDoMapa.Luz
- campos: Tile, Pos, Cor, Alcance, Intensidade, Cone, Giro, P
- métodos: Tile  , Pos  , Cor  , Alcance  , Intensidade  , Cone  , Giro  , P  , .ctor

## SparkLuzesDoMapa.Arquivo
- campos: Luzes
- métodos: Luzes  , .ctor

## SparkLuzesDoMapa
- campos: ORCAMENTO, DISTANCIA, INTERVALO, FADE, SALOES, _instancia, _luzes, _acesas, _apagando, _livres, _candidatas, _escolhidas, _sair, _fim, _proxima
- métodos: ORCAMENTO  , DISTANCIA  , INTERVALO  , FADE  , SALOES  , _instancia  , _luzes  , _acesas  , _apagando  , _livres  , _candidatas  , _escolhidas  , _sair  , _fim  , _proxima  , Liga, Carrega, Awake, Configura, Update, .ctor, .cctor

## SparkMoveisDoMapa.Movel
- campos: Tile, Ator, Malha, P, R, S, Taxa, Max, Tempo, Inicio, MaxAleatorio, Nc
- métodos: Tile  , Ator  , Malha  , P  , R  , S  , Taxa  , Max  , Tempo  , Inicio  , MaxAleatorio  , Nc  , .ctor

## SparkMoveisDoMapa.Arquivo
- campos: Moveis
- métodos: Moveis  , .ctor

## SparkMoveisDoMapa.Vivo
- campos: T, M, Amp, W, Fase, Perto
- métodos: T  , M  , Amp  , W  , Fase  , Perto  , .ctor

## SparkMoveisDoMapa
- campos: RAIZ, RAIO, RAIO_SAIDA, _instancia, _porTile, _moldes, _vivos, _proxima
- métodos: RAIZ  , RAIO  , RAIO_SAIDA  , _instancia  , _porTile  , _moldes  , _vivos  , _proxima  , Liga, Lugares, Carregou, Monta, Update, Balanco, Eixo, GiroUE, .ctor, .cctor

## SparkNeblinaLocal.Lugar
- campos: Nome, Ligado, Centro, Tamanho, Cor, Quantidade, TamanhoDaFolha, Vento, EncherCaverna
- métodos: Nome  , Ligado  , Centro  , Tamanho  , Cor  , Quantidade  , TamanhoDaFolha  , Vento  , EncherCaverna  , .ctor

## SparkNeblinaLocal
- campos: VIDA, ARQUIVO, _instancia, CriarAqui, Lugares, _feitos, _refazer, _base
- métodos: VIDA  , ARQUIVO  , _instancia  , CriarAqui  , Lugares  , _feitos  , _refazer  , _base  , Liga, Awake, Update, OnValidate, Refaz, CriaMaterial, Cria, MontaParticulas, .ctor

## SparkNeblinaCaverna
- campos: TETO, ANEL, ANEL_MINIMO, _l, _ps, _pontos, _proximaBusca, _sobra, _semNovidade, _cheia
- métodos: TETO  , ANEL  , ANEL_MINIMO  , _l  , _ps  , _pontos  , _proximaBusca  , _sobra  , _semNovidade  , _cheia  , Monta, Update, Perto, Enche, Solta, Busca, .ctor

## SparkRelease
- campos: -
- métodos: DesligaLog

## SparkEstresse.Papel
- campos: value__, Corre, Parado, Ataca, Conjura
- métodos: value__  , Corre  , Parado  , Ataca  , Conjura  

## SparkEstresse.Bot
- campos: Entidade, Papel, Angulo, RaioDoBot, Velocidade, Skill, Alvo, ProximoCast, TiroEm, Atirou, Rh, Servidor, Destino, SrvAndando, ProximoPacote
- métodos: Entidade  , Papel  , Angulo  , RaioDoBot  , Velocidade  , Skill  , Alvo  , ProximoCast  , TiroEm  , Atirou  , Rh  , Servidor  , Destino  , SrvAndando  , ProximoPacote  , .ctor

## SparkEstresse.Medida
- campos: Fps, Ms, Pior1, Principal, Batches, DrawCalls, SetPass, Sombras, Tris, Bots, SmrLigados, Juntados, GcKb, GpuMs, Efeitos
- métodos: Fps  , Ms  , Pior1  , Principal  , Batches  , DrawCalls  , SetPass  , Sombras  , Tris  , Bots  , SmrLigados  , Juntados  , GcKb  , GpuMs  , Efeitos  

## SparkEstresse
- campos: Quantidade, Coliseu, AutoMedir, Centro, Raio, Efeitos, Rede, Multidao, Variedade, POR_QUADRO, TILE, _bots, _peitos, _pernas, _luvas, _botas, _acessorios, _armas, _chao, _proximoId, _pronto, _camera, _sol, _yaw, _pitch, _dist, _orbita, _aviso, _batches, _drawCalls, _setPass, _sombras, _tris, _principal, _gc, _acumTempo, _acumQuadros, _fps, _ms, _proximaContagem, _smrLigados, _smrTotal, _medindo, _ultimaMedida, _tempos, _gpuMs, _tmpSmr, CAMPO_DEFAULT, CAMPO_ATK, CAMPO_SPATK, SKILLS, MASS, _skills, _mass, _papeis, _casts, _acumCasts, _castsPorSegundo, _acumCastsTempo, _estilo
- métodos: Quantidade  , Coliseu  , AutoMedir  , Centro  , Raio  , Efeitos  , Rede  , Multidao  , Variedade  , POR_QUADRO  , TILE  , _bots  , _peitos  , _pernas  , _luvas  , _botas  , _acessorios  , _armas  , _chao  , _proximoId  , _pronto  , _camera  , _sol  , _yaw  , _pitch  , _dist  , _orbita  , _aviso  , _batches  , _drawCalls  , _setPass  , _sombras  , _tris  , _principal  , _gc  , _acumTempo  , _acumQuadros  , _fps  , _ms  , _proximaContagem  , _smrLigados  , _smrTotal  , _medindo  , _ultimaMedida  , _tempos  , _gpuMs  , _tmpSmr  , CAMPO_DEFAULT  , CAMPO_ATK  , CAMPO_SPATK  , SKILLS  , MASS  , _skills  , _mass  , _papeis  , _casts  , _acumCasts  , _castsPorSegundo  , _acumCastsTempo  , _estilo  , OnEnable, OnDisable, Start, CarregaTabelas, PreparaCamera, AchaChao, CriaPlano, TemModelo, MontaListas, Corta, Sorteia, Cria, CriaUm, PosicaoDe, Clipe, TocaPapel, Remove, TrocaEquipamento, Desintegra, Distancia, PreparaEfeitos, MarcaPapeis, OutroBot, Conjura, TocaSom, PreparaRede, get_RedeLigada, PontoNaRoda, SimulaServidor, Update, MedeGpu, ContaRenderers, Teclas, Olha, Valor, Mede, Linha, get_Arquivo, Grava, MedeEGrava, EsperaJuncao, MedeAntesDepois, OnGUI, .ctor, .cctor, <Desintegra>b__71_0

## SparkArte.Pedido
- campos: _op, _pronto
- métodos: _op  , _pronto  , .ctor, get_isDone, get_asset

## SparkArte
- campos: PASTA, INDICE, EXT, BUFFER, _iniciado, _indice, _pasta, _abertos, _fluxos, _falhou, _shadersPorNome, _fixos, <PacotesAbertos>k__BackingField, <MsAbrindo>k__BackingField, _folhas, EXT_TEXTURA
- métodos: PASTA  , INDICE  , EXT  , BUFFER  , _iniciado  , _indice  , _pasta  , _abertos  , _fluxos  , _falhou  , _shadersPorNome  , _fixos  , <PacotesAbertos>k__BackingField  , <MsAbrindo>k__BackingField  , _folhas  , EXT_TEXTURA  , get_PacotesAbertos, set_PacotesAbertos, get_MsAbrindo, set_MsAbrindo, get_Ativo, AoIniciar, Inicia, Usa, Solta, Load, FolhaDeEstilo, Faltou, LoadAll, LoadAsync, AchaShader, GaranteCena, SoltaCena, SoltaCenasDescarregadas, DoPacote, Escolhe, Abre, AbreSo, .cctor

## SparkArteIndice.Entrada
- campos: Pacote, Asset
- métodos: Pacote  , Asset  

## SparkArteIndice
- campos: VERSAO, Pacotes, Dependencias, Iniciais, _porNome, _assets, _cenas, _ordenadas, _total
- métodos: VERSAO  , Pacotes  , Dependencias  , Iniciais  , _porNome  , _assets  , _cenas  , _ordenadas  , _total  , get_TotalAssets, get_TotalCenas, Chave, CaminhoResources, Pacote, TemPacote, AdicionaAsset, Adiciona, AdicionaCena, DefineDependencias, Busca, BuscaPasta, Cena, get_Cenas, Grava, Le, .ctor

## SparkCifraStream
- campos: CABECALHO, MAGIA, OURO, _k, _base, _semente, _tamanho, _pos, _trava
- métodos: CABECALHO  , MAGIA  , OURO  , _k  , _base  , _semente  , _tamanho  , _pos  , _trava  , .ctor, get_CanRead, get_CanSeek, get_CanWrite, get_Length, get_Position, set_Position, Read, Seek, Flush, SetLength, Write, Dispose, CifraArquivo, Semente, Mistura, Xor, .cctor

## SparkCripto
- campos: MAGIA, _p, _sal
- métodos: MAGIA  , _p  , _sal  , Chave, Cifra, CifraEstavel, EhCifrado, Decifra, .cctor

## SparkDados
- campos: EXT
- métodos: EXT  , Existe, LerBytes, LerTexto, LerLinhas, AbrirTexto

## SparkDiagVariantes
- campos: TILES, _pasta
- métodos: TILES  , _pasta  , Inicia, Start, .ctor, .cctor

## SparkRefinoWindow
- campos: _instance, _pronta, _modoTirar, _titulo, _instrucao, _resultadoTitulo, _resultado, _espacos, _lista, _caixaLista, _acao, _espaco, _espacoNome, _espacoNumero, _animando, _orbe, _copias, _item, _pedra, _gem, _gemId, _gemQuantas, _gemOk, _precoTirar, _assinatura, ESPERA, _livreEm
- métodos: _instance  , _pronta  , _modoTirar  , _titulo  , _instrucao  , _resultadoTitulo  , _resultado  , _espacos  , _lista  , _caixaLista  , _acao  , _espaco  , _espacoNome  , _espacoNumero  , _animando  , _orbe  , _copias  , _item  , _pedra  , _gem  , _gemId  , _gemQuantas  , _gemOk  , _precoTirar  , _assinatura  , ESPERA  , _livreEm  , get_Instance, Awake, OnDestroy, LoadAssets, Monta, ToggleHideWindow, ShowWindow, HideWindow, BuildWindow, AbreColocar, AbreTirar, Limpa, ItemAceito, PedraAceita, GemstoneAceita, Resultado, PrecoParaTirar, TirouResultado, Atualiza, NomeDoBotao, PoeNoEspaco, Item, MontaLista, Ocupado, Escolhe, Acao, CorDaSkill, ComecaEfeito, EfeitoDoResultado, TerminaEfeito, .ctor, <HideWindow>b__32_0, <BuildWindow>b__33_0, <ComecaEfeito>b__55_0, <EfeitoDoResultado>b__56_0

## SparkBalao
- campos: MAXIMO, DURACAO, _baloes
- métodos: MAXIMO  , DURACAO  , _baloes  , Diz, De, .cctor

## SparkChatFiltro
- campos: NORMAL, SHOUT, TRADE, PARTY, CLAN, ALLY, HERO, WHISPER, UNION, ANNOUNCE, GM, DANO, SISTEMA, DROPS, ITENS, XPSP, PARTY_SIS, PRIMEIRO_DE_SISTEMA, CANAIS, GENERAL, ABA_TRADE, ABA_PARTY, ABA_CLAN, ABA_ALLY, ABA_HERO, ABA_DROPS, ABAS, ROTULOS, PREFIXOS, CASAS, CASAS_PADRAO, IDS_DANO, IDS_XP, IDS_DROPS, IDS_ITENS, IDS_PARTY, Mudou, _carregado, _filtros, _casas, _janelaDeSistema
- métodos: NORMAL  , SHOUT  , TRADE  , PARTY  , CLAN  , ALLY  , HERO  , WHISPER  , UNION  , ANNOUNCE  , GM  , DANO  , SISTEMA  , DROPS  , ITENS  , XPSP  , PARTY_SIS  , PRIMEIRO_DE_SISTEMA  , CANAIS  , GENERAL  , ABA_TRADE  , ABA_PARTY  , ABA_CLAN  , ABA_ALLY  , ABA_HERO  , ABA_DROPS  , ABAS  , ROTULOS  , PREFIXOS  , CASAS  , CASAS_PADRAO  , IDS_DANO  , IDS_XP  , IDS_DROPS  , IDS_ITENS  , IDS_PARTY  , Mudou  , _carregado  , _filtros  , _casas  , _janelaDeSistema  , add_Mudou, remove_Mudou, Bit, Padrao, Carrega, Mostra, Liga, Casa, TrocaCasa, get_JanelaDeSistema, set_JanelaDeSistema, AlgumaCategoriaDeSistema, VoltaAoPadrao, CanalDoChat, CanalDoSistema, MontaFiltros, CorDoCanal, Le, Grava, .cctor

## SparkComandos
- campos: _acoes, _usuario
- métodos: _acoes  , _usuario  , ComandoDaAcao, Executa, OutroJogador, Mira, Diz, .cctor

## SparkLinkItem
- campos: MARCA, ETIQUETA, MAXIMO, COR, PREFIXO_LINK, _rotulos
- métodos: MARCA  , ETIQUETA  , MAXIMO  , COR  , PREFIXO_LINK  , _rotulos  , Linka, ParaEnvio, ParaChat, ParaBalao, MostraDica, Rotulo, Quantidade, Le, .cctor

## SparkCraftWindow.Modo
- campos: value__, Livro, Montagem, Loja
- métodos: value__  , Livro  , Montagem  , Loja  

## SparkCraftWindow
- campos: _instance, _pronta, _modo, _titulo, _cabEsq, _vazio, _produto, _infoLinha, _mp, _resultado, _letreiroRotulo, _precoRotulo, _lista, _naOficina, _icone, _materiais, _detalhe, _blocoOficina, _blocoPreco, _secaoOficina, _letreiro, _preco, _acao, _acao2, _escolhida, _mpAtual, _mpMax, _minhaLista, _iniciou, _livreEm
- métodos: _instance  , _pronta  , _modo  , _titulo  , _cabEsq  , _vazio  , _produto  , _infoLinha  , _mp  , _resultado  , _letreiroRotulo  , _precoRotulo  , _lista  , _naOficina  , _icone  , _materiais  , _detalhe  , _blocoOficina  , _blocoPreco  , _secaoOficina  , _letreiro  , _preco  , _acao  , _acao2  , _escolhida  , _mpAtual  , _mpMax  , _minhaLista  , _iniciou  , _livreEm  , get_Instance, Awake, OnDestroy, LoadAssets, Monta, ToggleHideWindow, ShowWindow, HideWindow, BuildWindow, Secao, AbreLivro, AbreMontagem, AbreLoja, Mostra, NomeDoBotao, MontaLista, MontaOficina, InfoChegou, LojaInfoChegou, MostraDetalhe, Ocupado, Acao, Acao2, .ctor, <BuildWindow>b__40_0, <AbreLoja>b__44_0, <MostraDetalhe>b__51_0, <Acao2>b__54_2

## SparkEnchantWindow
- campos: _instance, _pronta, _titulo, _instrucao, _resultado, _lista, _acao, _espacoScroll, _espacoItem, _centro, _nomeScroll, _nomeItem, _numScroll, _numItem, _scrollId, _alvo, _pedido, _encantando, _encantandoDesde, CARGA, _carregando, _carregaDesde, _barra, _defineBarra, _animando, _orbe, _copias, _somProcesso, _assinatura, ESPERA, _livreEm
- métodos: _instance  , _pronta  , _titulo  , _instrucao  , _resultado  , _lista  , _acao  , _espacoScroll  , _espacoItem  , _centro  , _nomeScroll  , _nomeItem  , _numScroll  , _numItem  , _scrollId  , _alvo  , _pedido  , _encantando  , _encantandoDesde  , CARGA  , _carregando  , _carregaDesde  , _barra  , _defineBarra  , _animando  , _orbe  , _copias  , _somProcesso  , _assinatura  , ESPERA  , _livreEm  , get_Instance, Som, CortaProcesso, Awake, OnDestroy, LoadAssets, Monta, ToggleHideWindow, ShowWindow, HideWindow, BuildWindow, Abre, AlvoAceito, Resultado, ComecaEfeito, EfeitoDoResultado, TerminaEfeito, Scroll, Atualiza, Poe, Item, Serve, MontaLista, Ocupado, Escolhe, Acao, Carrega, .ctor, <HideWindow>b__38_0, <BuildWindow>b__39_0, <BuildWindow>b__39_1, <BuildWindow>b__39_2

## SparkGmWindow
- campos: _instance, ALTURA, _pronta, _nome, _itemId, _itemQtd, _npcId, _x, _y, _z, _anuncio, _fakes, _busca, _buscaQtd, _skillNivel, _ultimoAlvo, _status, _livreEm, _abas, _verTitulo, _verLista, _verModo, CANAIS, _canais, _resultados, _tipoBusca, _trocaTipo, _questBusca, _questLista, _questTitulo, _soDoJogador, MAX_QUESTS, AVISO, _ceuAtual, _climaAtual, _srvLido, _srvItens, _srvNpcs, _srvSkills, _srvQuests, _hora
- métodos: _instance  , ALTURA  , _pronta  , _nome  , _itemId  , _itemQtd  , _npcId  , _x  , _y  , _z  , _anuncio  , _fakes  , _busca  , _buscaQtd  , _skillNivel  , _ultimoAlvo  , _status  , _livreEm  , _abas  , _verTitulo  , _verLista  , _verModo  , CANAIS  , _canais  , _resultados  , _tipoBusca  , _trocaTipo  , _questBusca  , _questLista  , _questTitulo  , _soDoJogador  , MAX_QUESTS  , AVISO  , _ceuAtual  , _climaAtual  , _srvLido  , _srvItens  , _srvNpcs  , _srvSkills  , _srvQuests  , _hora  , get_Instance, Awake, OnDestroy, MostraClima, MostraCeu, LoadAssets, Monta, ToggleHideWindow, ShowWindow, HideWindow, BuildWindow, Painel, MontaComandos, MontaJogador, Ver, Chegou, Info, LinhaDeItem, LinhaComIcone, NomeDaClasse, NomeDoLugar, MontaBusca, Busca, Itens, LeServidor, ItensDoServidor, Acha, MontaQuest, QuestAbriu, PedeQuests, QuestChegou, MostraQuests, NomeDaQuest, PassosDaQuest, LinhaDeQuest, QuestCarregada, PerguntaQuest, Secao, Dica, Linha, Rotulo, Campo, Botao, Botoes, PegaAlvo, Numero, Avisa, HoraValida, Manda, ComNome, NoAlvo, DaItem, DaAoAlvo, Pergunta, SemAlvo, JogadorNoAlvo, Confirma, .ctor, .cctor, <BuildWindow>b__46_0, <BuildWindow>b__46_1, <BuildWindow>b__46_2, <MontaComandos>b__48_0, <MontaComandos>b__48_1, <MontaComandos>b__48_2, <MontaComandos>b__48_3, <MontaComandos>b__48_4, <MontaComandos>b__48_5, <MontaComandos>b__48_6, <MontaComandos>b__48_7, <MontaComandos>b__48_8, <MontaComandos>b__48_9, <MontaComandos>b__48_10, <MontaComandos>b__48_11, <MontaComandos>b__48_12, <MontaComandos>b__48_13, <MontaComandos>b__48_14, <MontaComandos>b__48_15, <MontaComandos>b__48_16, <MontaComandos>b__48_17, <MontaComandos>b__48_18, <MontaComandos>b__48_19, <MontaComandos>b__48_20, <MontaComandos>b__48_21, <MontaComandos>b__48_22, <MontaComandos>b__48_23, <MontaComandos>b__48_25, <MontaComandos>b__48_26, <MontaComandos>b__48_27, <MontaComandos>b__48_28, <MontaComandos>b__48_29, <MontaComandos>b__48_30, <MontaComandos>b__48_31, <MontaComandos>b__48_32, <MontaComandos>b__48_33, <MontaJogador>b__49_0, <MontaJogador>b__49_1, <MontaJogador>b__49_2, <MontaJogador>b__49_3, <MontaJogador>b__49_4, <MontaJogador>b__49_5, <MontaJogador>b__49_6, <MontaJogador>b__49_7, <MontaJogador>b__49_8, <MontaJogador>b__49_9, <MontaJogador>b__49_10, <MontaBusca>b__57_0, <MontaBusca>b__57_1, <MontaQuest>b__68_0, <MontaQuest>b__68_1, <MontaQuest>b__68_2

## SparkRastreioWindow
- campos: _instance, LARGURA, ALTURA, _pronta, _abaAcoes, _trocaAba, _cabeca, _lista, _rotulos, _rolarParaBaixo
- métodos: _instance  , LARGURA  , ALTURA  , _pronta  , _abaAcoes  , _trocaAba  , _cabeca  , _lista  , _rotulos  , _rolarParaBaixo  , get_Instance, Awake, OnDestroy, LoadAssets, Monta, ToggleHideWindow, ShowWindow, HideWindow, Abre, BuildWindow, Cabecalho, Redesenha, Acrescenta, Texto, Mudou, .ctor, <BuildWindow>b__20_0, <BuildWindow>b__20_1, <BuildWindow>b__20_2, <BuildWindow>b__20_3

## SparkDyesNoInventario
- campos: LADO, VAO, ACIMA, _linha
- métodos: LADO  , VAO  , ACIMA  , _linha  , Monta, Desenha

## SparkHennaWindow
- campos: _instance, _pronta, _lista, _contagem, _adena, _total, _escolhidoNome, _custo, _aviso, _desenhados, _stats, _detalhe, _desenha, _escolhido
- métodos: _instance  , _pronta  , _lista  , _contagem  , _adena  , _total  , _escolhidoNome  , _custo  , _aviso  , _desenhados  , _stats  , _detalhe  , _desenha  , _escolhido  , get_Instance, Awake, OnDestroy, LoadAssets, Monta, ToggleHideWindow, ShowWindow, HideWindow, BuildWindow, Secao, ListaChegou, Redesenha, PreviaChegou, MostraPrevia, Desenha, .ctor, <ListaChegou>b__25_0

## SparkDicaItem
- campos: COR_TITULO, COR_ROTULO, COR_BONUS, COR_AUGMENT, COR_DESCRICAO, COR_EXTRA, COR_SET, COR_SET_ATIVO, COR_SET_APAGADO, COR_ENCANTO, _augments, NOMES, _itensServidor, GRAU_NA_LINHA, COR_NIVEL, _sets, PECAS
- métodos: COR_TITULO  , COR_ROTULO  , COR_BONUS  , COR_AUGMENT  , COR_DESCRICAO  , COR_EXTRA  , COR_SET  , COR_SET_ATIVO  , COR_SET_APAGADO  , COR_ENCANTO  , _augments  , NOMES  , _itensServidor  , GRAU_NA_LINHA  , COR_NIVEL  , _sets  , PECAS  , Monta, ManaDaSombra, DadosServidor, GrauDoItem, GrauDaArma, Grau, NomeGrau, TiraGrau, EhLinhaDeTipo, Inteiro, Real, AtributosDoServidor, AtributosDoCliente, TipoArma, LugarDoServidor, TituloComNivel, MontaSet, TipoArmadura, LugarArmadura, Efeito, Sets, MontaSimples, TipoComum, Descricao, Linha, LinhaDecimal, Divide, BonusDefesa, BonusMagia, BonusAtaque, LinhasAugment, Augments, .cctor

## SparkAmaldicoadas.Arma
- campos: ItemId, ComPortador, L2
- métodos: ItemId  , ComPortador  , L2  

## SparkAmaldicoadas
- campos: PEDE_LOCAL, SUB_LOCAL, ZARICHE, AKAMANAH, INTERVALO, PASTA, Armas, Mudou, _semResposta
- métodos: PEDE_LOCAL  , SUB_LOCAL  , ZARICHE  , AKAMANAH  , INTERVALO  , PASTA  , Armas  , Mudou  , _semResposta  , add_Mudou, remove_Mudou, Pede, Pacote, Nome, Icone, .cctor

## SparkMapaWindow.Cidade
- campos: Nome, Arte, L2
- métodos: Nome  , Arte  , L2  , .ctor

## SparkMapaWindow.Area
- campos: Nome, L2
- métodos: Nome  , L2  , .ctor

## SparkMapaWindow.Andar
- campos: Nome, Tex, Canto, Escala, ZTopo, ZBase, _caixas, _zCaixa, _tudo
- métodos: Nome  , Tex  , Canto  , Escala  , ZTopo  , ZBase  , _caixas  , _zCaixa  , _tudo  , .ctor, Com, NaCaixa, get_Meio, NaPlanta, NaConstrucao, Contem, NaTextura

## SparkMapaWindow.Masmorra
- campos: Nome, Entrada, Andares, EhCidade
- métodos: Nome  , Entrada  , Andares  , EhCidade  , .ctor

## SparkMapaWindow.Loja
- campos: cidade, nome, x, y, icone
- métodos: cidade  , nome  , x  , y  , icone  , .ctor

## SparkMapaWindow.ListaDeLojas
- campos: porLinha, celula, lojas
- métodos: porLinha  , celula  , lojas  , .ctor

## SparkMapaWindow.Boss
- campos: id, nivel, x, y, z, nome
- métodos: id  , nivel  , x  , y  , z  , nome  , .ctor

## SparkMapaWindow.ListaDeBosses
- campos: raid, grand
- métodos: raid  , grand  , .ctor

## SparkMapaWindow.Floresta
- campos: Tile, Caixas, Canto
- métodos: Tile  , Caixas  , Canto  , .ctor

## SparkMapaWindow
- campos: _instance, CIDADES, AREAS, MASMORRAS, PLANTA_DE_CIDADE, INTERNO, INTERNO_LADO, INTERNO_ZOOM_MAX, _fonteMapa, COR_CIDADE, COR_AREA, _areas, DESLOCAMENTOS, ZOOM_MAX_ARTE, ARTE_L, ARTE_A, LADO, TILE_PX, UU, REGIAO_MIN, REGIAO_MAX, REGIAO_INICIO, TILES, LOJAS, LOJA_ICONE, LOJAS_ESCALA, LOJAS_NOMES, REGIAO_CIDADE, COR_LOJA, _lojas, _nomesZoom, _ocupado, DESLOCAMENTOS_ZOOM, _pronta, _vista, _camada, _arte, _jogador, _cidades, _pino, _pinoNome, _titulo, _dica, _nomeCidade, _horaJogo, _minutoMostrado, _amaldicoadas, _pedeAmaldicoadasEm, AMALDICOADA_L, AMALDICOADA_A, AMALDICOADA_PE_X, AMALDICOADA_PE_Y, _seta, _setaGraus, COR_EU, COR_MEMBRO, _membrosMapa, _dicaNome, _hover, _dicaNomeTexto, _aviso, _btnMembro, _indiceMembro, _someAviso, _planta, _entradas, _abasAndar, _masmorra, _andar, _zoomInt, _deslInt, _internoAuto, _ondeEstava, _bosses, _painelRaid, _listaRaid, _linhasRaid, _btnEu, _btnRaid, CHAVE_PEQUENO, LARGURA, ALTURA, PEQUENO, _pequeno, _fora, _btnTamanho, _noMundo, _zoomArte, _deslArte, _escala, _centro, _tiles, _semFoto, SEM_FOTO_TENTA_DE_NOVO, _arrastando, _ultimo, _inercia, _velArrasto, _tempoMove, _zoomFalta, _zoomCursor, _abre, _fade, INERCIA_QUEDA, INERCIA_MIN, ZOOM_VELOCIDADE, FADE_ABRE, FADE_FECHA, ESCALA_FECHADA, PASSO_ZOOM, FLORESTAS, FLORESTAS_PASTA, FADE_FLORESTA, _veus, _veuAlfa, _mouse, _mouseNaVista, _afim, _residuo, _nomeRegiao, _escolheAba, FUNDO_MAR, FUNDO_ESCURO
- métodos: _instance  , CIDADES  , AREAS  , MASMORRAS  , PLANTA_DE_CIDADE  , INTERNO  , INTERNO_LADO  , INTERNO_ZOOM_MAX  , _fonteMapa  , COR_CIDADE  , COR_AREA  , _areas  , DESLOCAMENTOS  , ZOOM_MAX_ARTE  , ARTE_L  , ARTE_A  , LADO  , TILE_PX  , UU  , REGIAO_MIN  , REGIAO_MAX  , REGIAO_INICIO  , TILES  , LOJAS  , LOJA_ICONE  , LOJAS_ESCALA  , LOJAS_NOMES  , REGIAO_CIDADE  , COR_LOJA  , _lojas  , _nomesZoom  , _ocupado  , DESLOCAMENTOS_ZOOM  , _pronta  , _vista  , _camada  , _arte  , _jogador  , _cidades  , _pino  , _pinoNome  , _titulo  , _dica  , _nomeCidade  , _horaJogo  , _minutoMostrado  , _amaldicoadas  , _pedeAmaldicoadasEm  , AMALDICOADA_L  , AMALDICOADA_A  , AMALDICOADA_PE_X  , AMALDICOADA_PE_Y  , _seta  , _setaGraus  , COR_EU  , COR_MEMBRO  , _membrosMapa  , _dicaNome  , _hover  , _dicaNomeTexto  , _aviso  , _btnMembro  , _indiceMembro  , _someAviso  , _planta  , _entradas  , _abasAndar  , _masmorra  , _andar  , _zoomInt  , _deslInt  , _internoAuto  , _ondeEstava  , _bosses  , _painelRaid  , _listaRaid  , _linhasRaid  , _btnEu  , _btnRaid  , CHAVE_PEQUENO  , LARGURA  , ALTURA  , PEQUENO  , _pequeno  , _fora  , _btnTamanho  , _noMundo  , _zoomArte  , _deslArte  , _escala  , _centro  , _tiles  , _semFoto  , SEM_FOTO_TENTA_DE_NOVO  , _arrastando  , _ultimo  , _inercia  , _velArrasto  , _tempoMove  , _zoomFalta  , _zoomCursor  , _abre  , _fade  , INERCIA_QUEDA  , INERCIA_MIN  , ZOOM_VELOCIDADE  , FADE_ABRE  , FADE_FECHA  , ESCALA_FECHADA  , PASSO_ZOOM  , FLORESTAS  , FLORESTAS_PASTA  , FADE_FLORESTA  , _veus  , _veuAlfa  , _mouse  , _mouseNaVista  , _afim  , _residuo  , _nomeRegiao  , _escolheAba  , FUNDO_MAR  , FUNDO_ESCURO  , get_Instance, PlantaDeCidade, PlantaDaCidade, AndarParaRadar, UsaPlanta, RadarUsaPlanta, LocalInterno, get_FonteMapa, Rotulo, Letra, Awake, OnDestroy, LoadAssets, Monta, ToggleHideWindow, ShowWindow, MostraHoraDoJogo, HideWindow, Update, AplicaFade, Arrasta, PosicaoDoArrasto, ParaMovimento, AplicaZoom, Florestas, BuildWindow, Marcador, MostraMundo, EntraNaRegiao, CentraNoJogador, Centra, MostraPonto, ProximoMembro, AlternaTamanho, AplicaTamanho, TextoDoBotao, AjustaPainelRaid, AlternaRaid, MontaPainelRaid, MostraAbaRaid, Radar, RadarMudou, MarcaRadar, AbreInterno, SaiDoInterno, MontaAbas, TrocaAndar, ConfereInterno, ZoomMinimoInterno, MarcadorDeEntrada, Avisa, PartyMudou, PontoNoMapa, PosicionaDicaNome, PosicionaMembros, NaVista, NaPlantaAtual, Roda, TamanhoDaVista, ZoomMinimoDaArte, Redesenha, MontaLojas, PosicionaNomesZoom, PosicionaLojas, DesenhaTiles, Tile, NomeDaRegiao, NomeDoLugar, PosicionaPino, PedeAmaldicoadas, PosicionaAmaldicoadas, PosicionaJogador, GiraSeta, PosicaoDoJogador, PosicaoDoJogador3, CalculaDeformacao, ArteParaL2, Afim, L2ParaArte, Resolve, .ctor, .cctor, <BuildWindow>b__155_0, <BuildWindow>b__155_1, <BuildWindow>b__155_2, <BuildWindow>b__155_3, <BuildWindow>b__155_4, <BuildWindow>b__155_5, <BuildWindow>b__155_6, <BuildWindow>b__155_7, <BuildWindow>b__155_8, <MontaPainelRaid>b__169_1, <Avisa>b__182_0, <Resolve>g__Det|213_0

## SparkQuestHud
- campos: _instance, UU, RAIO, CHEGOU, _quadro, _lista, _seta, _setaImagem, _rolagem, _arrastando, _pegou, CHAVE_POSICAO, ALTURA_MAX_LISTA, _setaNome, _contas, _posicionado, CHAVE_PROPORCAO
- métodos: _instance  , UU  , RAIO  , CHEGOU  , _quadro  , _lista  , _seta  , _setaImagem  , _rolagem  , _arrastando  , _pegou  , CHAVE_POSICAO  , ALTURA_MAX_LISTA  , _setaNome  , _contas  , _posicionado  , CHAVE_PROPORCAO  , get_Instance, Awake, OnDestroy, Monta, PosicaoInicial, Guarda, Padrao, Move, Redesenha, AtualizaContas, LateUpdate, .ctor

## SparkQuestInfoWindow
- campos: _instance, ALTURA, _pronta, _aba, _escolhida, _cabeca, _nome, _info, _intro, _lista, _local, _linhas
- métodos: _instance  , ALTURA  , _pronta  , _aba  , _escolhida  , _cabeca  , _nome  , _info  , _intro  , _lista  , _local  , _linhas  , get_Instance, Awake, OnDestroy, LoadAssets, Monta, ToggleHideWindow, ShowWindow, HideWindow, Abre, BuildWindow, MeuNivel, Redesenha, Escolhe, Detalhe, TemLocal, NomeDoNpc, MostraLocal, .ctor, <BuildWindow>b__22_0, <BuildWindow>b__22_1, <Redesenha>b__24_1

## SparkQuestWindow
- campos: _instance, _pronta, _lista, _contagem, _detalhe, _vazio, _nome, _info, _passoTitulo, _npc, _texto, _intro, _passos, _abandona, _defineAlarme, _defineLocal, _defineSeta, _rodapeSeta, _nomeSeta, _escolhida, _aba, _tituloItens, _itens, _metas, _trocaAba, _contas
- métodos: _instance  , _pronta  , _lista  , _contagem  , _detalhe  , _vazio  , _nome  , _info  , _passoTitulo  , _npc  , _texto  , _intro  , _passos  , _abandona  , _defineAlarme  , _defineLocal  , _defineSeta  , _rodapeSeta  , _nomeSeta  , _escolhida  , _aba  , _tituloItens  , _itens  , _metas  , _trocaAba  , _contas  , get_Instance, Awake, OnDestroy, Seleciona, LoadAssets, Monta, ToggleHideWindow, ShowWindow, HideWindow, BuildWindow, Secao, Redesenha, MostraDetalhe, MontaItens, DicaDoItem, AtualizaItens, Abandona, .ctor, <BuildWindow>b__35_0, <BuildWindow>b__35_3, <BuildWindow>b__35_4, <BuildWindow>b__35_1, <MostraDetalhe>b__38_0

## SparkTutorialWindow
- campos: _instance, ARTE, _pronta, _l2Button, _l2dropdown, _content, _scrollView, _windowName, _campos, _botao, _texNormal, _texLuz, _texOver, _texDown, _mouseEmCima, _apertado, _aceso, _pisca, _marcas, _sobreBotao
- métodos: _instance  , ARTE  , _pronta  , _l2Button  , _l2dropdown  , _content  , _scrollView  , _windowName  , _campos  , _botao  , _texNormal  , _texLuz  , _texOver  , _texDown  , _mouseEmCima  , _apertado  , _aceso  , _pisca  , _marcas  , _sobreBotao  , get_Instance, Awake, OnDestroy, LoadAssets, Monta, ToggleHideWindow, ShowWindow, HideWindow, BuildWindow, Mostra, Fecha, Limpa, Clique, Interrogacao, MontaBotao, CliqueNoBotao, AtualizaBotao, Pinta, .ctor, <Mostra>b__29_0, <Clique>b__32_0, <MontaBotao>b__35_0, <MontaBotao>b__35_1, <MontaBotao>b__35_2, <MontaBotao>b__35_3, <MontaBotao>b__35_4

## SparkRadarWindow.Candidato
- campos: E, D2, Tipo
- métodos: E  , D2  , Tipo  

## SparkRadarWindow.PorDistancia
- campos: -
- métodos: Compare, .ctor

## SparkRadarWindow.Tile
- campos: El, Pedido, Tex, Lado, Visto
- métodos: El  , Pedido  , Tex  , Lado  , Visto  , .ctor

## SparkRadarWindow.Pontos
- campos: _camada, _lado, _els, _tex, _pos, _usados
- métodos: _camada  , _lado  , _els  , _tex  , _pos  , _usados  , .ctor, Poe, Termina

## SparkRadarWindow
- campos: _instance, ARTE, TILES, LADO_TILE, UU, LARGURA, ALTURA, CX, CY, RAIO_PX, ALCANCES, ZOOM_PADRAO, MAX_PONTOS, BUSCA, DESENHO, ALT_MIN, ALT_MAX, CHAVE_ABERTO, CHAVE_ZOOM, COR_MAR, MONSTRO, NPC, JOGADOR, PISCA, _pronta, _zoom, _circulo, _giro, _mundo, _camadaTiles, _anel, _regiao, _gage, _seta, _comuns, _party, _quest, _alvo, _texTipo, _texAlvo, _texGage, _texParty, _texQuest, _texAzul, _texCinza, _texVerde, _texLaranja, _texVermelho, _regiaoAtual, _nivelGage, _quadroAlvo, _proximaBusca, _proximoDesenho, _giroGraus, _setaGraus, _origem, _deslize, _escala, _porDistancia, _candidatos, _idsParty, _campoObjetos, _procurouCampo, _donoDoDic, _dic, _tiles, _semFoto, _saem, FOLGA_ANDAR, COR_ESCURO, _planta, _nomeAndar, _andarRadar, _andarMostrado, _andarPedido, _pedidoPlanta, _texPlanta, _ladoPlanta
- métodos: _instance  , ARTE  , TILES  , LADO_TILE  , UU  , LARGURA  , ALTURA  , CX  , CY  , RAIO_PX  , ALCANCES  , ZOOM_PADRAO  , MAX_PONTOS  , BUSCA  , DESENHO  , ALT_MIN  , ALT_MAX  , CHAVE_ABERTO  , CHAVE_ZOOM  , COR_MAR  , MONSTRO  , NPC  , JOGADOR  , PISCA  , _pronta  , _zoom  , _circulo  , _giro  , _mundo  , _camadaTiles  , _anel  , _regiao  , _gage  , _seta  , _comuns  , _party  , _quest  , _alvo  , _texTipo  , _texAlvo  , _texGage  , _texParty  , _texQuest  , _texAzul  , _texCinza  , _texVerde  , _texLaranja  , _texVermelho  , _regiaoAtual  , _nivelGage  , _quadroAlvo  , _proximaBusca  , _proximoDesenho  , _giroGraus  , _setaGraus  , _origem  , _deslize  , _escala  , _porDistancia  , _candidatos  , _idsParty  , _campoObjetos  , _procurouCampo  , _donoDoDic  , _dic  , _tiles  , _semFoto  , _saem  , FOLGA_ANDAR  , COR_ESCURO  , _planta  , _nomeAndar  , _andarRadar  , _andarMostrado  , _andarPedido  , _pedidoPlanta  , _texPlanta  , _ladoPlanta  , get_Instance, get_Alcance, Awake, OnDestroy, LoadAssets, Monta, InitWindow, ToggleHideWindow, ShowWindow, HideWindow, BuildWindow, Tex, Camada, Imagem, Botao, Zoom, Update, Busca, DicionarioDoMundo, Considera, Desenha, NaBorda, Desliza, Gira, DesenhaTiles, TiraTilesNaoVistos, LiberaTiles, ConferePlanta, MostraPlanta, DesenhaPlanta, NomeCurto, UsaPlanta, MapaUsaPlanta, Altitude, Regiao, .ctor, .cctor, <BuildWindow>b__94_0, <BuildWindow>b__94_1, <BuildWindow>b__94_2

## SparkEnchantSkillWindow.Skill
- campos: Id, Nivel, Sp, Exp
- métodos: Id  , Nivel  , Sp  , Exp  

## SparkEnchantSkillWindow.LinhaDaLista
- campos: Raiz, Icone, Nome, Encanto, Custo, Indice
- métodos: Raiz  , Icone  , Nome  , Encanto  , Custo  , Indice  , .ctor

## SparkEnchantSkillWindow
- campos: _instance, LARGURA, ALTURA, ESPERA_RESPOSTA, ROTULO, VALOR, DESCRICAO, _pronta, _paginaLista, _paginaInfo, _lista, _vazio, _linhas, _skills, _infoIcone, _itemIcone, _itemLinha, _infoNome, _infoEncanto, _chance, _descricao, _exp, _sp, _itemNome, _meuSp, _meuExp, _aprender, _infoId, _infoNivel, _esperandoAte
- métodos: _instance  , LARGURA  , ALTURA  , ESPERA_RESPOSTA  , ROTULO  , VALOR  , DESCRICAO  , _pronta  , _paginaLista  , _paginaInfo  , _lista  , _vazio  , _linhas  , _skills  , _infoIcone  , _itemIcone  , _itemLinha  , _infoNome  , _infoEncanto  , _chance  , _descricao  , _exp  , _sp  , _itemNome  , _meuSp  , _meuExp  , _aprender  , _infoId  , _infoNivel  , _esperandoAte  , get_Instance, Awake, OnDestroy, LoadAssets, Monta, ShowWindow, HideWindow, Pacote, Manda, RecebeLista, RecebeInfo, Escolhe, Aprende, Esperando, MostraPagina, BuildWindow, MontaLista, MontaInfo, Icone, Par, Redesenha, NovaLinha, PreencheInfo, NomeDoEnchant, Numero, .ctor, .cctor, <Aprende>b__45_0, <MontaInfo>b__50_0

## SparkAlvoExpandido
- campos: CHAVE, ALTURA_JANELA, ALTURA_FUNDO, _janela, _fundo, _tamanho, _moldura, _nome, _brasao, _botao, _extra, _icones, _aberto, _montadoPara, _montadoAberto, _clanMontado, _allyMontado, _botaoDrop, _dropVisivel, _dropDe, _pedidosDeNome, _nomesDeClan, _brasaoClan, _brasaoAlly, _propriedades
- métodos: CHAVE  , ALTURA_JANELA  , ALTURA_FUNDO  , _janela  , _fundo  , _tamanho  , _moldura  , _nome  , _brasao  , _botao  , _extra  , _icones  , _aberto  , _montadoPara  , _montadoAberto  , _clanMontado  , _allyMontado  , _botaoDrop  , _dropVisivel  , _dropDe  , _pedidosDeNome  , _nomesDeClan  , _brasaoClan  , _brasaoAlly  , _propriedades  , .ctor, BotaoDrop, MostraBotaoDrop, DesenhaBotao, Atualiza, NomeDoClan, MontaPlayer, AtualizaBrasoes, CorDoClan, Linha, Texto, MontaNpc, Propriedades, AjustaAltura, <.ctor>b__20_0, <.ctor>b__20_2

## SparkArquivo.OpenFileName
- campos: lStructSize, hwndOwner, hInstance, lpstrFilter, lpstrCustomFilter, nMaxCustFilter, nFilterIndex, lpstrFile, nMaxFile, lpstrFileTitle, nMaxFileTitle, lpstrInitialDir, lpstrTitle, Flags, nFileOffset, nFileExtension, lpstrDefExt, lCustData, lpfnHook, lpTemplateName, pvReserved, dwReserved, FlagsEx
- métodos: lStructSize  , hwndOwner  , hInstance  , lpstrFilter  , lpstrCustomFilter  , nMaxCustFilter  , nFilterIndex  , lpstrFile  , nMaxFile  , lpstrFileTitle  , nMaxFileTitle  , lpstrInitialDir  , lpstrTitle  , Flags  , nFileOffset  , nFileExtension  , lpstrDefExt  , lCustData  , lpfnHook  , lpTemplateName  , pvReserved  , dwReserved  , FlagsEx  , .ctor

## SparkArquivo
- campos: OFN_NOCHANGEDIR, OFN_PATHMUSTEXIST, OFN_FILEMUSTEXIST, OFN_EXPLORER
- métodos: OFN_NOCHANGEDIR  , OFN_PATHMUSTEXIST  , OFN_FILEMUSTEXIST  , OFN_EXPLORER  , GetOpenFileName, GetActiveWindow, Imagem

## SparkAvisoNaTela.Aviso
- campos: Texto, Ate, Duracao
- métodos: Texto  , Ate  , Duracao  , .ctor

## SparkAvisoNaTela
- campos: _camadas, _ativos, _relogio
- métodos: _camadas  , _ativos  , _relogio  , Pacote, Mostra, Anima, .cctor

## SparkDropWindow.Item
- campos: Categoria, Id, Min, Max, Chance
- métodos: Categoria  , Id  , Min  , Max  , Chance  

## SparkDropWindow.LinhaDaLista
- campos: Raiz, Icone, Nome, Quantidade, Chance
- métodos: Raiz  , Icone  , Nome  , Quantidade  , Chance  , .ctor

## SparkDropWindow
- campos: _instance, PREFIXO, LARGURA, ALTURA, INTERVALO_PEDIDO, _pronta, _titulo, _vazio, _lista, _trocaAba, _aba, _linhas, _chegando, _nomeChegando, _dropChegando, _spoilChegando, _mostrando, _drop, _spoil, _pedidoDe, _pedidoEm
- métodos: _instance  , PREFIXO  , LARGURA  , ALTURA  , INTERVALO_PEDIDO  , _pronta  , _titulo  , _vazio  , _lista  , _trocaAba  , _aba  , _linhas  , _chegando  , _nomeChegando  , _dropChegando  , _spoilChegando  , _mostrando  , _drop  , _spoil  , _pedidoDe  , _pedidoEm  , get_Instance, Awake, OnDestroy, LoadAssets, Monta, ShowWindow, HideWindow, Pede, Linha, Recebe, LeItem, Mostra, BuildWindow, Coluna, Redesenha, NovaLinha, Numero, Porcentagem, .ctor, <BuildWindow>b__36_0

## SparkEstilo
- campos: FUNDO, FUNDO_CLARO, BORDA, BORDA_FRACA, TEXTO, APAGADO, DOURADO, TITULO, VERDE, VERMELHO, AZUL, ESCOLHIDO, HOVER, UI, _fonte, _texturas
- métodos: FUNDO  , FUNDO_CLARO  , BORDA  , BORDA_FRACA  , TEXTO  , APAGADO  , DOURADO  , TITULO  , VERDE  , VERMELHO  , AZUL  , ESCOLHIDO  , HOVER  , UI  , _fonte  , _texturas  , get_Fonte, Textura, Fatia, Borda, Espaco, Janela, Moldura, Painel, Divisor, CabecalhoDeLista, Texto, Botao, Liga, Fechar, Abas, Lista, Linha, Marca, Escolhida, Ponto, Etiqueta, Marcador, Seletor, Campo, .cctor

## SparkForjaEfeitos
- campos: OURO, VERMELHO, LINHA_CLARA, LINHA_ESCURA
- métodos: OURO  , VERMELHO  , LINHA_CLARA  , LINHA_ESCURA  , Anima, Suave, SaiRapido, Camada, Centro, Quadro, Poe, Abre, Fecha, Junta, Volta, Some, Limpa, Brilho, Faiscas, TextoSobe, Treme, Racha, Barra, Espaco, CaixaDaLista, LinhaAlternada, Marca, .cctor

## SparkHtml.No
- campos: Tag, Texto, Atributos, Filhos
- métodos: Tag  , Texto  , Atributos  , Filhos  , Attr, .ctor

## SparkHtml.Contexto
- campos: Clique, Titulo, Campos, BotaoL2, Lista, EspacoDoBr, CorDoLink, SublinhaLink
- métodos: Clique  , Titulo  , Campos  , BotaoL2  , Lista  , EspacoDoBr  , CorDoLink  , SublinhaLink  , .ctor

## SparkHtml.Bloco
- campos: Destino, Centro, _linha, _texto, _vazias, _espacoDoBr
- métodos: Destino  , Centro  , _linha  , _texto  , _vazias  , _espacoDoBr  , .ctor, Linha, Texto, get_NoInicio, SoltaTexto, Peca, Inteiro, Quebra, Fecha

## SparkHtml
- campos: VAZIAS, _ctx, TEXTO, LINK
- métodos: VAZIAS  , _ctx  , TEXTO  , LINK  , Le, FimDaTag, LeAtributos, IndiceSemCaixa, .ctor, Desenha, Filhos, Tabela, Linha, LarguraFixa, SoImagens, MinimoDaTabela, Fundo, Botao, AjustaFonte, BotaoDeLista, TemImagem, LinkComImagem, Campo, Combo, Imagem, Textura, Estilo, Largura, Numero, Cor, RichInterno, TextoPuro, Entidades, .cctor, <Le>g__Descarrega|2_0, <LarguraFixa>g__Anda|17_0, <MinimoDaTabela>g__Linhas|19_0, <RichInterno>g__Anda|34_0, <TextoPuro>g__Anda|35_0

## SparkLootingRights
- campos: PREFIXO, SEM_NOTICIA, _quadro, _lista, _sobre, _ultima, _relogio
- métodos: PREFIXO  , SEM_NOTICIA  , _quadro  , _lista  , _sobre  , _ultima  , _relogio  , Linha, Garante, Arrasta, Fecha, Mostra

## SparkPiscaHp
- campos: Pasta, QuadrosPorSegundo, _carregado, _avisoEsq, _avisoMeio, _avisoDir, _fundoEsq, _fundoMeio, _fundoDir, _camada, _esq, _meio, _dir, _ligado, _quadro
- métodos: Pasta  , QuadrosPorSegundo  , _carregado  , _avisoEsq  , _avisoMeio  , _avisoDir  , _fundoEsq  , _fundoMeio  , _fundoDir  , _camada  , _esq  , _meio  , _dir  , _ligado  , _quadro  , .ctor, Parte, CarregaTexturas, Fundo, Atualiza

## SparkPreviaRegen.Falta
- campos: Quanto, Vence
- métodos: Quanto  , Vence  

## SparkPreviaRegen
- campos: SUB, HP, MP, CP, _porTipo
- métodos: SUB  , HP  , MP  , CP  , _porTipo  , Pacote, Quanto, .cctor

## SparkPreviaRegenBarra
- campos: PASTA_HP, OPACIDADE_HP_MP, OPACIDADE, PONTA, ALTURA, TAM, QUADROS, QPS, VEL_ESCURO, VEL_VIVO, OPACIDADE_ESCURO, OPACIDADE_VIVO, HP_ESCURO, HP_VIVO, MP_ESCURO, MP_VIVO, _quadrosEscuro, _quadrosVivo, _barra, _camada, _meio, _dir, _fumaca, _escuro, _vivo, _tipo, _texturas, _esq, _largura, _quadro
- métodos: PASTA_HP  , OPACIDADE_HP_MP  , OPACIDADE  , PONTA  , ALTURA  , TAM  , QUADROS  , QPS  , VEL_ESCURO  , VEL_VIVO  , OPACIDADE_ESCURO  , OPACIDADE_VIVO  , HP_ESCURO  , HP_VIVO  , MP_ESCURO  , MP_VIVO  , _quadrosEscuro  , _quadrosVivo  , _barra  , _camada  , _meio  , _dir  , _fumaca  , _escuro  , _vivo  , _tipo  , _texturas  , _esq  , _largura  , _quadro  , .ctor, CamadaFumaca, Atualiza, Fumaca, QuadrosFumaca, Fbm, Ruido, Sorteio, Texturas, .cctor

## SparkTextoDano.Pedidor
- campos: _proximo
- métodos: _proximo  , Update, .ctor

## SparkTextoDano.Esperada
- campos: Canal, Valor, Resta, Ate
- métodos: Canal  , Valor  , Resta  , Ate  

## SparkTextoDano.Texto
- campos: Caixa, Numero, Palavra, Entidade, Dono, Altura, Mundo, Inicio, Movimento, X0, Y0, Vivo
- métodos: Caixa  , Numero  , Palavra  , Entidade  , Dono  , Altura  , Mundo  , Inicio  , Movimento  , X0  , Y0  , Vivo  , .ctor

## SparkTextoDano.Executor
- campos: -
- métodos: Update, .ctor

## SparkTextoDano
- campos: J_HP, J_MP, J_XP, J_SP, J_DANO, J_DOT, J_CRIT, J_IMUNE, J_RESISTE, J_BLOQUEIO, J_ESQUIVA, A_DANO, A_DOT, A_CRIT, A_OVERHIT, A_IMUNE, A_RESISTE, A_BLOQUEIO, A_ESQUIVA, R_HP, R_MP, R_CRIT, R_IMUNE, S_HP, S_MP, S_XP, S_DANO, S_DOT, S_CRIT, S_IMUNE, S_RESISTE, S_ESQUIVA, ALVO, JOGADOR, SERVO, NORMAL, DOT, CRITICO, OVERHIT, CURA_HP, CURA_MP, SP, XP, RESISTE, BLOQUEIO, ESQUIVA, IMUNE, CURA_CRITICA, MAXIMO, QUADROS_POR_SEGUNDO, PASTA, _ouvindo, _petId, _petHp, _petMp, SUB, M_CAUSADO, M_RECEBIDO, M_SERVO, F_CRITICO, F_OVERHIT, F_ESCUDO, F_ERRO, F_DOT, F_IMUNE, _mascaraServidor, _mascaraPedida, _jogadorDoPedido, _pediuEm, _tentativas, _pedidor, CANAL_MEU, CANAL_EM_MIM, CANAL_NO_SERVO, _esperadas, _critico, _skillEmMim, _skillNoServo, _ultimoAlvo, _minhasSkills, _quandoSkill, _proximaSkill, MOVIMENTO_1, MOVIMENTO_2, MOVIMENTO_4, MOVIMENTO_6, MOVIMENTO_7, MOVIMENTO_8, MOVIMENTO_9, MOVIMENTO_11, P_ZERO, P_TRES, P_CURA_CRITICA, P_J_NORMAL, P_J_CRITICO, P_J_HP, P_J_MP, P_J_SP, P_J_XP, P_A_NORMAL, P_A_CRITICO, P_A_CURA, P_S_CURA, _textos, _contador, _texturas, _camada, _executor, _fonte
- métodos: J_HP  , J_MP  , J_XP  , J_SP  , J_DANO  , J_DOT  , J_CRIT  , J_IMUNE  , J_RESISTE  , J_BLOQUEIO  , J_ESQUIVA  , A_DANO  , A_DOT  , A_CRIT  , A_OVERHIT  , A_IMUNE  , A_RESISTE  , A_BLOQUEIO  , A_ESQUIVA  , R_HP  , R_MP  , R_CRIT  , R_IMUNE  , S_HP  , S_MP  , S_XP  , S_DANO  , S_DOT  , S_CRIT  , S_IMUNE  , S_RESISTE  , S_ESQUIVA  , ALVO  , JOGADOR  , SERVO  , NORMAL  , DOT  , CRITICO  , OVERHIT  , CURA_HP  , CURA_MP  , SP  , XP  , RESISTE  , BLOQUEIO  , ESQUIVA  , IMUNE  , CURA_CRITICA  , MAXIMO  , QUADROS_POR_SEGUNDO  , PASTA  , _ouvindo  , _petId  , _petHp  , _petMp  , SUB  , M_CAUSADO  , M_RECEBIDO  , M_SERVO  , F_CRITICO  , F_OVERHIT  , F_ESCUDO  , F_ERRO  , F_DOT  , F_IMUNE  , _mascaraServidor  , _mascaraPedida  , _jogadorDoPedido  , _pediuEm  , _tentativas  , _pedidor  , CANAL_MEU  , CANAL_EM_MIM  , CANAL_NO_SERVO  , _esperadas  , _critico  , _skillEmMim  , _skillNoServo  , _ultimoAlvo  , _minhasSkills  , _quandoSkill  , _proximaSkill  , MOVIMENTO_1  , MOVIMENTO_2  , MOVIMENTO_4  , MOVIMENTO_6  , MOVIMENTO_7  , MOVIMENTO_8  , MOVIMENTO_9  , MOVIMENTO_11  , P_ZERO  , P_TRES  , P_CURA_CRITICA  , P_J_NORMAL  , P_J_CRITICO  , P_J_HP  , P_J_MP  , P_J_SP  , P_J_XP  , P_A_NORMAL  , P_A_CRITICO  , P_A_CURA  , P_S_CURA  , _textos  , _contador  , _texturas  , _camada  , _executor  , _fonte  , get_Ligado, Op, Espera, Golpe, MostraGolpe, Mensagem, SkillLancada, Status, GaranteOuvintes, PetMudou, Servidor, MascaraDasOpcoes, ConferePedido, LigaPedidor, Pe, Pacote, Evento, Guarda, Consome, MinhaSkillEm, AlvoAtual, EhServo, MeuServo, Numero, Movimento, Posicoes, CaixaDoNumero, CorDoNumero, Palavra, GaranteCamada, Textura, Solta, Libera, Anda, .cctor

## SparkFindWindow
- campos: _instance, ESCONDIDO, PREFIXO, CABECALHO, W, H, LX, LY, LW, LH, RX, RW, _busca, _dica, _status, _statusItens, _itens, _vendedores, _itemEscolhido, _nItens, _nVendedores, _pronta
- métodos: _instance  , ESCONDIDO  , PREFIXO  , CABECALHO  , W  , H  , LX  , LY  , LW  , LH  , RX  , RW  , _busca  , _dica  , _status  , _statusItens  , _itens  , _vendedores  , _itemEscolhido  , _nItens  , _nVendedores  , _pronta  , get_Instance, Awake, OnDestroy, LoadAssets, Monta, Escondida, Linha, Abre, BuildWindow, ShowWindow, HideWindow, Busca, LinhaDeItem, LinhaDeVendedor, Poe, Caixa, Rotulo, Cabeca, Lista, Coluna, Preco, Custo, Botao, Texto, .ctor, <BuildWindow>b__31_0

## SparkLojaCristalWindow.Modo
- campos: value__, Ajuste, Loja
- métodos: value__  , Ajuste  , Loja  

## SparkLojaCristalWindow
- campos: _instance, _pronta, _modo, _fora, _blocoAjuste, _blocoLoja, _icone, _detalhe, _titulo, _gradeAjuste, _exemplo, _cabLista, _infoLoja, _nome, _total, _meu, _daLoja, _vazio, _pct, _mensagem, _lista, _cristaliza, _escolhido, _livreEm
- métodos: _instance  , _pronta  , _modo  , _fora  , _blocoAjuste  , _blocoLoja  , _icone  , _detalhe  , _titulo  , _gradeAjuste  , _exemplo  , _cabLista  , _infoLoja  , _nome  , _total  , _meu  , _daLoja  , _vazio  , _pct  , _mensagem  , _lista  , _cristaliza  , _escolhido  , _livreEm  , get_Instance, Awake, OnDestroy, LoadAssets, Monta, ShowWindow, HideWindow, BuildWindow, Secao, Fila, MontaAjuste, MontaLoja, Linha, Tamanho, AbreAjuste, AbreLoja, LePct, MostraExemplo, Inicia, MontaLista, NomeDo, Escolhido, MostraDetalhe, Cristaliza, .ctor, <MontaAjuste>b__36_0, <MontaAjuste>b__36_1, <MontaLoja>b__37_0, <AbreLoja>b__41_0, <Escolhido>b__47_0

## SparkUI
- campos: -
- métodos: Campo, Rolagem, NomeDoItem

## SparkContasSalvas.Conta
- campos: Descricao, Id, Senha
- métodos: Descricao  , Id  , Senha  

## SparkContasSalvas
- campos: CHAVE
- métodos: CHAVE  , Lista, Grava, Limpa

## SparkFontesFallback
- campos: TEXT_SETTINGS, FAMILIAS, PONTOS, MARGEM, _original
- métodos: TEXT_SETTINGS  , FAMILIAS  , PONTOS  , MARGEM  , _original  , Configura, .cctor