# Mapa de todas as funções do cliente (`engine.dll`, `NWindow.dll` e demais módulos)

Gerado por `scripts/function_map.py` e `scripts/function_map_doc.py`. Cada função do grafo do Ghidra (projetos persistentes em `ghidra_proj/`) foi atribuída a uma **classe C++** e a um **subsistema**, com o tipo de evidência. Dados completos, função por função: `out/re/function_map_engine.json` e `out/re/function_map_nwindow.json`; RTTI em `out/re/rtti_engine.json` / `out/re/rtti_NWindow.json`.

Tipos de evidência:

- **nome** — nome exportado/demangled (inclui corpo de thunk exportado)
- **rtti** — entrada de vtable com RTTI MSVC
- **guard** — string L"Classe::Método" das macros guard/unguard do Unreal, empilhada no corpo ou no funclet catch da função
- **vtable** — construtor/destrutor: grava em [this] o endereço de uma vtable com RTTI
- **eh** — funclet de exceção ligado à função-mãe pela FuncInfo
- **thunk** — thunk de link incremental -> destino
- **inferido** — classe majoritária de chamadores/chamados (grafo do Ghidra)
- **vizinhanca** — classe pela vizinhança de endereço (mesma unidade de compilação)

As seis primeiras são observadas no binário; as duas últimas são inferências e estão marcadas.

## Pseudocódigo de todas as funções

Todas as funções de código foram decompiladas (`ghidra_scripts/DecompileAll.java`; as que falharam, com `DecompileRetry.java`: timeout de 600 s, limite de instruções maior e, quando o decompilador em C cai, o estilo `normalize`, que grava o P-code de alto nível). Resultado em `out/re/decomp_all/<módulo>/NNNNN.c` (1.000 funções por arquivo), com `index.tsv` (endereço, nome, arquivo, status); status consolidado em `out/re/decomp_all/status.json` (`scripts/decomp_status.py`): 88153 em C, 6903 thunks (registram o destino), 2 em P-code, 0 sem saída.

## Resumo do cliente inteiro

| módulo | funções | com classe e subsistema | por evidência observada |
|---|---|---|---|
| engine | 45802 | 45802 (100%) | 39515 (86.3%) |
| nwindow | 24783 | 24783 (100%) | 22300 (90.0%) |
| alaudio | 1121 | 1121 (100%) | 929 (82.9%) |
| core | 8504 | 8504 (100%) | 7456 (87.7%) |
| d3ddrv | 3527 | 3527 (100%) | 1857 (52.7%) |
| fire | 1046 | 1046 (100%) | 926 (88.5%) |
| ipdrv | 2444 | 2444 (100%) | 2147 (87.8%) |
| l2 | 1901 | 1901 (100%) | 1566 (82.4%) |
| lineagecreature | 657 | 657 (100%) | 577 (87.8%) |
| window | 4216 | 4216 (100%) | 3904 (92.6%) |
| windrv | 1057 | 1057 (100%) | 942 (89.1%) |
| **total** | **95058** | **95058 (100%)** | **82119 (86.4%)** |

Não contam no total 2 entradas do grafo do Ghidra fora do `.text` (no engine, em `.data` não inicializado, zerado no carregamento): não são código, e o decompilador falha nelas por fluxo sem fim.

Fora do mapeamento de propósito (acréscimos do servidor, não do cliente Interlude): `clmods.dll` (proteção empacotada e assinada), `entry.dll` (export `G1ta0_ICQ_441022136`) e `wsock32.dll` (proxy de Winsock com `proxy_connect`/`proxy_bind`…, CRT moderno) e `Vmfx.dll` (empacotado com UPX; único export `DirectXSetupGetVersion`; carregado por um import acrescentado ao `Window.dll` e também citado pelo `npkscrypt.dll`). Bibliotecas de terceiros sem código do jogo: `msxml4*.dll`, `ogg/vorbis*.dll`, `openal32.dll`/`defopenal32.dll`/`wrap_oal.dll` (OpenAL), `dsetup.dll` (DirectX), `ifc23.dll` (force-feedback da Immersion), `encvag.dll` (codificador de áudio VAG; nenhum módulo o referencia) e `npk*.dll` (GameGuard/keycrypt). Os 11 módulos da tabela são todo o código próprio do cliente.

## engine: 45802 funções

- Com classe e subsistema: **45802 de 45802 (100%)**.
- Por evidência observada: **39515 (86.3%)**; inferida: 6287 (13.7%).
- Código morto (nenhuma chamada, ponteiro em dados/código ou relocação no binário): 690.
- Classes distintas: 749.

| evidência | funções |
|---|---|
| nome | 17554 |
| rtti | 1057 |
| guard | 97 |
| vtable | 207 |
| eh | 16538 |
| thunk | 4062 |
| inferido | 4614 |
| vizinhanca | 1673 |

| subsistema | funções | observadas | principais classes (funções) |
|---|---|---|---|
| mundo e atores | 8845 | 92% | APawn (1759), AActor (1446), APlayerController (310), AController (256), AVehicleRoutePoint (204), ALineagePlayerController (179), AEmitter (175), AMover (174) |
| renderizacao | 8597 | 88% | UStaticMesh (501), UCanvas (454), FRenderResource (378), FLevelSceneNode (320), UTexture (320), UL2NEnvManager (220), AFluidSurfaceInfo (203), UL2NEnvLight (176) |
| animacao e malhas esqueletais | 3671 | 85% | USkeletalMesh (722), USkeletalMeshInstance (545), USubSkeletalMeshInstance (486), UMeshAnimation (216), UVertMeshEmitter (215), UVertMeshInstance (203), ULodMesh (144), UVertMesh (106) |
| rede | 3577 | 84% | UNetworkHandler (1518), UNetConnection (322), UActorChannel (173), CClientSocket (166), AGameReplicationInfo (123), FURL (104), UChannel (99), UNetDriver (99) |
| fisica e colisao | 2917 | 87% | UModel (690), NCBoneSimul (275), NCClothSimul (115), FCollisionHash (100), FKAggregateGeom (96), FPoly (95), FOctreeNode (95), NCCloakSimul (94) |
| dados do jogo (.dat) | 2842 | 63% | FL2GameData (2782), FL2ItemDataBase (27), FL2EtcItemData (15), FL2WeaponItemData (9), FL2ArmorItemData (9) |
| efeitos e particulas | 2410 | 92% | UParticleEmitter (269), UBeamEmitter (165), UMeshEmitter (116), URibbonEmitter (115), UGlowEffect (108), UTrailEmitter (106), USkillVisualEffect (101), USparkEmitter (80) |
| nucleo do jogo (UGameEngine) | 2334 | 93% | UGameEngine (1945), AGameInfo (230), UEngine (159) |
| terreno e decoracao | 2121 | 81% | ATerrainInfo (885), UTerrainSector (291), AProjector (110), FTerrainTools (107), UTerrainPrimitive (84), UTerrainMaterial (59), UProjectorPrimitive (42), UTerrainBrushSmooth (42) |
| nucleo Unreal (objetos, script VM, IO) | 1358 | 86% | FConfigCacheIni (155), TArray<unsigned_char> (108), FCodecHuffman (106), TLazyArray (78), FL2Token (61), UPackageCheckInfo (46), AFileLog (40), FCodecFull (39) |
| nivel (ULevel, carga e tick do mundo) | 1275 | 87% | ULevel (877), ALevelInfo (174), ULevelBase (132), ULevelObject (45), ULevelSummary (35), HLevelObject (12) |
| interface/entrada | 1184 | 88% | UInput (270), UInteractionMaster (188), UViewport (167), UClient (93), UL2ConsoleWnd (90), UBaseGUIController (76), AHUD (67), UInteraction (53) |
| estatisticas e perfilagem | 1172 | 89% | FStats (407), FEngineStats (344), AStatLog (189), FStatGraph (132), AStatLogFile (53), AGameStats (29), FStatGraphLine (18) |
| cinematica (Matinee) | 714 | 91% | ASceneManager (185), FMatineeTools (101), UMatAction (57), UMatSubAction (42), USubActionOrientation (39), USubActionCameraEffect (33), USubActionCameraShake (29), USubActionTrigger (28) |
| bibliotecas (CRT/MFC/zlib) | 714 | 82% | CRT/biblioteca (551), type_info (54), UnDecorator (43), DName (30), std::exception (10), pcharNode (4), pDNameNode (4), DNameStatusNode (4) |
| audio | 484 | 54% | UI3DL2Listener (214), USound (71), FWaveModInfo (47), FSoundData (44), AAmbientSound (36), UAmbientSoundObject (35), AMusicVolume (22), FMusicInfo (15) |
| replay | 399 | 85% | FL2ReplayManager (399) |
| ferramentas (commandlets) | 323 | 90% | FRebuildTools (70), USaveReplayResourceCommandlet (54), UMasterMD5Commandlet (47), FWorldBuilder (46), UServerCommandlet (23), UCheatManager (22), UScriptConvertCommandlet (17), UServerDataConvertCommandlet (15) |
| natives de UnrealScript (exec*) | 279 | 100% | AActor (142), AController (27), APlayerController (17), UCanvas (13), AStatLog (10), APawn (7), AStatLogFile (6), AInspector (6) |
| engine (outras classes) | 235 | 88% | FLazyLoader (82), FCommandMacro (33), FConfigFile (29), FAbnormalZone (22), FTriangleClipper (18), FRoughLoader (13), FSortedPathList (12), FStaticObjectInfo (8) |
| audio (OpenAL) | 133 | 95% | UDummyAudio (109), UAudioSubsystem (24) |
| funcoes livres nomeadas (utilitarios) | 104 | 72% | (funcao livre nomeada) (104) |
| sem classe C++ (funcao livre) | 72 | 90% | QuestionAnswer (41), _VT_GRP (14), MotionChunk (13), AnalogTrack (4) |
| renderizacao (Direct3D) | 41 | 98% | URenderDevice (41) |
| sistema (chamadas Win32 importadas) | 1 | 100% | KERNEL32.DLL (1) |

### Exemplos de métodos nomeados por subsistema

- **mundo e atores:** `APawn::GetSpAtk16AnimName`, `AActor::GetRightArmSkin`, `AActor::GetCloakMesh`, `ALineagePlayerController::ResetMusicControll`, `APawn::AddNCubic`, `FNMonsterRaceMgr::SetCheck`, `ABrush::IsABrush`, `AActor::eventLostChild`, `APawn::physFalling`, `AActor::ClearRenderData`
- **renderizacao:** `UShader::RequiredUVStreams`, `FTangent::FTangent`, `FStaticMeshColorStream::FStaticMeshColorStream`, `UShader::MaterialUSize`, `UL2NTimeLight::GetBaseColorPlane_HSVActorSunLight`, `FScriptedPortalSceneNode::FScriptedPortalSceneNode`, `UCanvas::DrawChatting`, `FSkinVertexStream::GetRevision`, `UWaterMaterial::UWaterMaterial`, `UVertexStreamVECTOR::GetData`
- **animacao e malhas esqueletais:** `USkeletalMeshInstance::GetBonePosition`, `UVertMeshEmitter::CleanUp`, `UMeshAnimation::GetMovement`, `USkeletalMesh::MemFootprint`, `UExtraMeshData::GetExtraMeshInstance`, `UVertMesh::Serialize`, `USkeletalMeshInstance::FindAnimObjectForSequence`, `USkeletalMeshInstance::AnimGetName`, `USkeletalMesh::MeshGetInstanceClass`, `USubSkeletalMeshInstance::MatchRefBone`
- **rede:** `UChannel::Describe`, `UNetworkHandler::RequestDropItemFromPet`, `UNetworkHandler::RequestSetPledgeCrest`, `APlayerReplicationInfo::PostNetReceive`, `UNetworkHandler::GetPledgeInfo`, `UNetworkHandler::Exec`, `UNetworkHandler::GetDistance`, `UNetworkHandler::RequestDuelStart`, `UDemoRecDriver::InitBase`, `UNetworkHandler::EndServerPingList`
- **fisica e colisao:** `FCollisionOctree::ActorPointCheck`, `NCClothSimul::DotProduct`, `FPoly::Transform`, `FCollisionHash::GetHashLink`, `UKMeshProps::UKMeshProps`, `FLineBatcher::GetRevision`, `NCBoneSimul::Init9`, `FPointRegion::FPointRegion`, `FCollisionOctree::Tick`, `NCBoneSimul::EulerIntegrate`
- **dados do jogo (.dat):** `FL2GameData::CastleNameDataSave`, `FL2GameData::CastleNameDataClear`, `FL2GameData::NpcDataSave`, `FL2GameData::ClientDataLoad`, `FL2GameData::QuestDataClear`, `FL2GameData::CommandDataSave`, `FL2GameData::RaidDataSave`, `FL2GameData::GetCommandType`, `FL2GameData::SystemMsgFormatSave`, `FL2GameData::Load`
- **efeitos e particulas:** `UGlowEffect::Destroy`, `FNAppendixEffect_COLOSSEUM_SELECTED_RED::FNAppendixEffect_COLOSSEUM_SELECTED_RED`, `UBeamEmitter::UpdateActorHitList`, `URibbonEmitter::URibbonEmitter`, `FNAppendixEffect::GetAppEffectType`, `UTrailEmitter::PostEditChange`, `URibbonEmitter::Initialize`, `FNAbnormalStat_DOT_BLEEDING::Init`, `UParticleEmitter::PostLoad`, `UParticleEmitter::RenderParticles`
- **nucleo do jogo (UGameEngine):** `UGameEngine::OnMoveToLocationInVehicle`, `UGameEngine::OnAcceptLogOut`, `UGameEngine::OnMoveBackwardToLocation`, `UGameEngine::OnImportCrestFile`, `UGameEngine::OnStartSellList`, `UGameEngine::OnCpUpdate`, `UGameEngine::OnServerObjectInfo`, `UGameEngine::L2CollectGarbage`, `UGameEngine::OnVehicleStartPacket`, `UGameEngine::ScreenFadeBlink`
- **terreno e decoracao:** `ATerrainInfo::GetQuadDomMaterialBitmap`, `FTerrainTools::SetCurrentBrush`, `UProjectorPrimitive::GetEncroachCenter`, `UTerrainBrushEdgeTurn::UTerrainBrushEdgeTurn`, `ATerrainInfo::SWUpdate`, `UTerrainBrush::MouseButtonDown`, `UTerrainPrimitive::UTerrainPrimitive`, `UTerrainBrush::MouseMove`, `ATerrainInfo::GetTextureColor`, `FTerrainTools::SetOuterRadius`
- **nucleo Unreal (objetos, script VM, IO):** `FRotatorF::Rotator`, `TArray<unsigned_char>::Empty`, `UPackageCheckInfo::UPackageCheckInfo`, `UPackageMapLevel::UPackageMapLevel`, `AFileLog::AFileLog`, `TArray<unsigned_char>::AddZeroed`, `FL2ResueOrCast::Disable`, `TArray<unsigned_char>::TArray<unsigned_char>`, `FL2ResueOrCast::Reset`, `FParser::GetRemainStr`
- **nivel (ULevel, carga e tick do mundo):** `ULevelObject::Render`, `ULevel::PostloadObjects`, `ULevel::GetRemovalSWLevel`, `ALevelInfo::SetZone`, `ULevel::CheckSlice`, `ULevel::GetZoneActor`, `ULevel::CompactActors`, `ULevel::_L2_SpawnActor`, `ULevel::AddSWLevel`, `ULevel::GetTerrainInfo`
- **interface/entrada:** `UInput::StaticConfigName`, `UViewport::PopHit`, `UClient::UpdateGamma`, `UL2ConsoleWnd::RestoreLobbyMusic`, `UInput::GetKeyName`, `UPlayerInput::UPlayerInput`, `UViewport::ExecMacro`, `UBaseGUIController::eventCloseMenu`, `UInteractionMaster::MasterProcessMessage`, `UL2ConsoleWnd::Tick`
- **estatisticas e perfilagem:** `AStatLogFile::AStatLogFile`, `FStats::FStats`, `AStatLog::AStatLog`, `FStatGraph::Render`, `FStatGraph::AddLine`, `FStats::Clear`, `FStats::UpdateString`, `AStatLog::eventLogGameSpecial2`, `FStats::RegisterStats`, `FStats::Release`
- **cinematica (Matinee):** `ASceneManager::GetTotalSceneTime`, `ASceneManager::UpdatePreviewActors`, `USubActionOrientation::IsRunning`, `ASceneManager::PreparePath`, `ASceneManager::eventSceneEnded`, `ASceneManager::RefreshSubActions`, `USubActionCameraEffect::GetStatString`, `UActionMoveCamera::UActionMoveCamera`, `USubActionFOV::USubActionFOV`, `USubActionCameraEffect::Update`
- **bibliotecas (CRT/MFC/zlib):** `CRect::CRect`, `_LocaleUpdate::_LocaleUpdate`, `std::exception::exception`, `type_info::_Type_info_dtor`, `HeapManager::Destructor`, `UnDecorator::getNumberOfDimensions`, `UnDecorator::getTypeEncoding`, `UnDecorator::UScore`, `HeapManager::getMemory`, `DName::DName`
- **audio:** `USound::USound`, `USound::Serialize`, `FWaveModInfo::UpdateWaveData`, `USound::SetPlaySound`, `AAmbientSound::AAmbientSound`, `UAmbientSoundObject::UAmbientSoundObject`, `USound::PostLoad`, `AAmbientSound::IsAAmbientSound`, `UI3DL2Listener::UI3DL2Listener`, `FWaveModInfo::HalveReduce16to8`
- **replay:** `FL2ReplayManager::PublicModeLoad`, `FL2ReplayManager::FL2ReplayManager`, `FL2ReplayManager::SetRewriteCameraInst`, `FL2ReplayManager::SetSceneName`, `FL2ReplayManager::SetBGM`, `FL2ReplayManager::OnPublicLoad`, `FL2ReplayManager::SetUseChatData`, `FL2ReplayManager::CriticalError`, `FL2ReplayManager::MakeUseCameraActionTable`, `FL2ReplayManager::AddCameraActionData`
- **ferramentas (commandlets):** `FRebuildTools::GetIdxFromName`, `FRebuildTools::Shutdown`, `FWorldBuilder::buildWorldStructure`, `FRebuildTools::Init`, `FWorldBuilder::testWorldStructure`, `FRebuildTools::FRebuildTools`, `FRebuildTools::SetCurrent`, `FRebuildTools::GetFromName`, `FRebuildTools::Delete`, `FWorldBuilder::ComboPostProcessing`
- **natives de UnrealScript (exec*):** `AActor::execKMakeRagdollAvailable`, `AActor::execSetCollision`, `AController::execAddController`, `AActor::execGetRootLocation`, `ASecurity::execNativePerform`, `AStatLogFile::execOpenLog`, `UCanvas::execDrawTileClipped`, `AActor::execGetViewport`, `AController::execEAdjustJump`, `APawn::execSetRelativeCoords`
- **audio (OpenAL):** `UDummyAudio::GetWavVoiceVolume`, `UDummyAudio::IsMusicPlaying`, `UDummyAudio::SetViewport`, `UDummyAudio::StopSound`, `UDummyAudio::PlayMusic`, `UDummyAudio::Init`, `UDummyAudio::StopMusic`, `UDummyAudio::NoteDestroy`, `UDummyAudio::ChangeVoiceChatter`, `UDummyAudio::SetMusicVolume`
- **renderizacao (Direct3D):** `URenderDevice::GetMultiSample`, `URenderDevice::ClearCompiledShaders`, `URenderDevice::SupportsTextureFormat`, `URenderDevice::StaticConstructor`, `URenderDevice::GetResParams`, `URenderDevice::ClearCompiledShader`, `URenderDevice::ResourceCached`, `URenderDevice::URenderDevice`, `URenderDevice::GetShaderVersion`
- **sistema (chamadas Win32 importadas):** `KERNEL32.DLL::RtlUnwind`

## nwindow: 24783 funções

- Com classe e subsistema: **24783 de 24783 (100%)**.
- Por evidência observada: **22300 (90.0%)**; inferida: 2483 (10.0%).
- Código morto (nenhuma chamada, ponteiro em dados/código ou relocação no binário): 38.
- Classes distintas: 457.

| evidência | funções |
|---|---|
| nome | 1937 |
| rtti | 2494 |
| guard | 1350 |
| vtable | 415 |
| eh | 16095 |
| thunk | 9 |
| inferido | 2126 |
| vizinhanca | 357 |

| subsistema | funções | observadas | principais classes (funções) |
|---|---|---|---|
| UI: janelas e controles nativos (NC*) | 12750 | 91% | NConsoleWnd (3321), NCWnd (574), ChatWnd (519), NCEditBox (355), NCDataManager (298), NCMinimapWnd (228), NCMultiEdit (215), NCChatWnd (197) |
| UI: API de script (natives do NWindow.u) | 3716 | 95% | UUIScript (1100), UUIAPI_WINDOW (147), UWindowHandle (137), UUIEventManager (68), UUIAPI_TREECTRL (65), UUIDATA_QUEST (60), UItemWindowHandle (58), UActionAPI (58) |
| UI: layout declarativo (Interface.xdat -> objetos XML*Data) | 3470 | 91% | XMLWindowData (313), XMLDataManager (299), XMLUIManager (183), XMLNode (179), XMLItemWindowData (167), XMLTextBoxData (124), XMLInvenWeightData (115), XMLButtonData (108) |
| UI: messenger (MSN / amigos) | 1719 | 81% | NotificationProcess (644), MsnWnd (223), SwitchboardSession (162), Msn (89), DispatchProcess (61), Process (59), L2FriendWnd (57), MsnTree (39) |
| bibliotecas (CRT/MFC/zlib) | 838 | 46% | std::logic_error (330), CRT/biblioteca (324), std::out_of_range (85), type_info (48), std::bad_alloc (22), std::length_error (8), _com_error (5), std::exception (4) |
| natives de UnrealScript (exec*) | 817 | 100% | UUIScript (247), UWindowHandle (44), UUIAPI_WINDOW (35), UUIDATA_QUEST (21), UItemWindowHandle (19), UUIDATA_ITEM (18), UUIDATA_PET (17), UUIDATA_RECIPE (15) |
| sem classe C++ (funcao livre) | 634 | 97% | NWndUtil (424), UIGameStateManager (89), TooltipInfo (42), ComboItem (30), Util (21), ComboElem (13), FriendList (13), FLVTexture (2) |
| UI: estruturas de dados (FItemInfo, FSkillInfo...) | 522 | 91% | NSystemMessageManager (71), NMagicSkillDataManager (38), FItemInfo (37), FLVData (36), FClanInfo (29), NItemDataManager (29), FEventMatchUserData (28), FSkillInfo (27) |
| UI: estados (login, selecao, jogo, observador...) | 137 | 98% | UIGameState (35), UIGamingState (22), UIReplayState (12), UILoginState (12), UIEventMatchObserverState (11), UIOlympiadObserverState (11), UICharacterSelectState (9), UIPawnViewerState (9) |
| funcoes livres nomeadas (utilitarios) | 60 | 68% | (funcao livre nomeada) (60) |
| engine (chamada importada) | 53 | 100% | ENGINE.DLL::UL2ConsoleWnd (20), ENGINE.DLL::UTexture (19), ENGINE.DLL::UMaterial (10), ENGINE.DLL::UBitmapMaterial (4) |
| nucleo Unreal (objetos, script VM, IO) | 34 | 94% | CORE.DLL::UObject (25), UGlobalTempObjects (3), CORE.DLL::USubsystem (3), CORE.DLL::FOutputDevice (2), CORE.DLL::FString (1) |
| sistema (chamadas Win32 importadas) | 31 | 100% | IMM32.DLL (12), WS2_32.DLL (12), VERSION.DLL (6), KERNEL32.DLL (1) |
| renderizacao | 2 | 100% | FINT64 (1), FRect (1) |

### Exemplos de métodos nomeados por subsistema

- **UI: janelas e controles nativos (NC*):** `switchD_1002adf4::caseD_3`
- **UI: API de script (natives do NWindow.u):** `UUIScript::eventOnTextureAnimEnd`, `UUIScript::eventOnButtonTimer`, `UUIScript::eventOnClickButtonWithHandle`, `UUIScript::eventOnClickButton`, `UUIScript::eventOnClickCheckBox`, `UUIScript::eventOnComboBoxItemSelected`, `UUIScript::eventOnProgressTimeUp`, `UUIScript::eventOnChatMarkedEditBox`, `UUIScript::eventOnChangeEditBox`, `UUIScript::eventOnCompleteEditBox`
- **UI: layout declarativo (Interface.xdat -> objetos XML*Data):** `FXMLTreeNodeItemInfo::FXMLTreeNodeItemInfo`, `FXMLTreeNodeInfo::FXMLTreeNodeInfo`
- **bibliotecas (CRT/MFC/zlib):** `std::exception::exception`, `_LocaleUpdate::_LocaleUpdate`, `type_info::_Type_info_dtor`
- **natives de UnrealScript (exec*):** `UUIScript::execIsPKMode`, `UUIScript::execRequestSkillList`, `UUIScript::execRequestAuthCardKeyLogin`, `UUIScript::execRequestTradeDone`, `UUIScript::execRequestStartTrade`, `UUIScript::execAnswerTradeRequest`, `UUIScript::execRequestSellItem`, `UUIScript::execRequestBuyItem`, `UUIScript::execRequestBuySeed`, `UUIScript::execRequestProcureCrop`
- **sem classe C++ (funcao livre):** `FLVTexture::FLVTexture`
- **UI: estruturas de dados (FItemInfo, FSkillInfo...):** `FLVData::FLVData`, `FItemInfo::FItemInfo`, `FUserInfo::FUserInfo`, `FSkillInfo::FSkillInfo`, `FPetInfo::FPetInfo`, `FMacroInfo::FMacroInfo`, `FClanMemberInfo::FClanMemberInfo`, `FDrawItemInfo::FDrawItemInfo`, `FStatusIconInfo::FStatusIconInfo`, `FGameTipData::FGameTipData`
- **engine (chamada importada):** `ENGINE.DLL::UTexture::PostLoad`, `ENGINE.DLL::UTexture::Destroy`, `ENGINE.DLL::UTexture::Serialize`, `ENGINE.DLL::UTexture::PostEditChange`, `ENGINE.DLL::UMaterial::IsLoaded`, `ENGINE.DLL::UMaterial::CheckCircularReferences`, `ENGINE.DLL::UMaterial::GetValidated`, `ENGINE.DLL::UMaterial::SetValidated`, `ENGINE.DLL::UMaterial::PreSetMaterial`, `ENGINE.DLL::UBitmapMaterial::MaterialUSize`
- **nucleo Unreal (objetos, script VM, IO):** `CORE.DLL::FString::Len`, `CORE.DLL::UObject::QueryInterface`, `CORE.DLL::UObject::AddRef`, `CORE.DLL::UObject::Release`, `CORE.DLL::UObject::ProcessEvent`, `CORE.DLL::UObject::ProcessDelegate`, `CORE.DLL::UObject::ProcessState`, `CORE.DLL::UObject::ProcessRemoteFunction`, `CORE.DLL::UObject::Modify`, `CORE.DLL::UObject::IsPendingKill`
- **sistema (chamadas Win32 importadas):** `IMM32.DLL::ImmGetDefaultIMEWnd`, `IMM32.DLL::ImmReleaseContext`, `IMM32.DLL::ImmGetContext`, `IMM32.DLL::ImmAssociateContext`, `IMM32.DLL::ImmNotifyIME`, `IMM32.DLL::ImmGetIMEFileNameA`, `IMM32.DLL::ImmGetCompositionStringW`, `IMM32.DLL::ImmGetCandidateListW`, `IMM32.DLL::ImmDestroyContext`, `IMM32.DLL::ImmSetConversionStatus`

## alaudio: 1121 funções

- Com classe e subsistema: **1121 de 1121 (100%)**.
- Por evidência observada: **929 (82.9%)**; inferida: 192 (17.1%).
- Código morto (nenhuma chamada, ponteiro em dados/código ou relocação no binário): 56.
- Classes distintas: 36.

| evidência | funções |
|---|---|
| nome | 657 |
| rtti | 18 |
| guard | 4 |
| vtable | 0 |
| eh | 193 |
| thunk | 57 |
| inferido | 114 |
| vizinhanca | 78 |

| subsistema | funções | observadas | principais classes (funções) |
|---|---|---|---|
| audio (OpenAL) | 502 | 78% | UALAudioSubsystem (453), (funcao livre nomeada) (46), VORBISFILE.DLL (3) |
| bibliotecas (CRT/MFC/zlib) | 502 | 84% | CRT/biblioteca (362), UnDecorator (43), type_info (39), DName (30), pcharNode (4), pDNameNode (4), DNameStatusNode (4), charNode (3) |
| nucleo Unreal (objetos, script VM, IO) | 73 | 100% | CORE.DLL::UObject (24), CORE.DLL::UBoolProperty (9), CORE.DLL::UIntProperty (9), CORE.DLL::UFloatProperty (9), CORE.DLL::UProperty (8), CORE.DLL::UField (7), UFloatProperty (2), UBoolProperty (2) |
| audio | 33 | 91% | FALAudioStats (31), USound (2) |
| engine (chamada importada) | 6 | 100% | ENGINE.DLL::USound (5), ENGINE.DLL::UAudioSubsystem (1) |
| rede | 3 | 100% | Replicator (3) |
| sistema (chamadas Win32 importadas) | 2 | 50% | KERNEL32.DLL (2) |

### Exemplos de métodos nomeados por subsistema

- **audio (OpenAL):** `UALAudioSubsystem::SoundPriority`, `UALAudioSubsystem::CheckSoundResource`, `UALAudioSubsystem::StopAllMusic`, `UALAudioSubsystem::Update`, `UALAudioSubsystem::StopMusic`, `UALAudioSubsystem::StopAllVoice`, `UALAudioSubsystem::UALAudioSubsystem`, `UALAudioSubsystem::PlaySoundW`, `UALAudioSubsystem::IsOggVoicePlaying`, `UALAudioSubsystem::StaticConstructor`
- **bibliotecas (CRT/MFC/zlib):** `type_info::_Type_info_dtor`, `_LocaleUpdate::_LocaleUpdate`, `std::exception::exception`, `HeapManager::Destructor`, `UnDecorator::getNumberOfDimensions`, `UnDecorator::getTypeEncoding`, `UnDecorator::UScore`, `HeapManager::getMemory`, `DName::DName`, `pDNameNode::pDNameNode`
- **nucleo Unreal (objetos, script VM, IO):** `CORE.DLL::UObject::QueryInterface`, `CORE.DLL::UObject::AddRef`, `CORE.DLL::UObject::Release`, `CORE.DLL::UObject::ProcessEvent`, `CORE.DLL::UObject::ProcessDelegate`, `CORE.DLL::UObject::ProcessState`, `CORE.DLL::UObject::ProcessRemoteFunction`, `CORE.DLL::UObject::Modify`, `CORE.DLL::UObject::PostLoad`, `CORE.DLL::UObject::IsPendingKill`
- **engine (chamada importada):** `ENGINE.DLL::UAudioSubsystem::CleanUp`, `ENGINE.DLL::USound::PostLoad`, `ENGINE.DLL::USound::Destroy`, `ENGINE.DLL::USound::Serialize`, `ENGINE.DLL::USound::GetDuration`, `ENGINE.DLL::USound::PS2Convert`
- **rede:** `Replicator::Replicator`
- **sistema (chamadas Win32 importadas):** `KERNEL32.DLL::RtlUnwind`

## core: 8504 funções

- Com classe e subsistema: **8504 de 8504 (100%)**.
- Por evidência observada: **7456 (87.7%)**; inferida: 1048 (12.3%).
- Código morto (nenhuma chamada, ponteiro em dados/código ou relocação no binário): 232.
- Classes distintas: 161.

| evidência | funções |
|---|---|
| nome | 4521 |
| rtti | 137 |
| guard | 4 |
| vtable | 33 |
| eh | 2206 |
| thunk | 555 |
| inferido | 723 |
| vizinhanca | 325 |

| subsistema | funções | observadas | principais classes (funções) |
|---|---|---|---|
| nucleo Unreal (objetos, script VM, IO) | 7407 | 88% | UObject (1464), FString (350), UClass (297), FArray (293), ULinkerLoad (262), (funcao livre nomeada) (250), UPackageMap (208), UStruct (176) |
| bibliotecas (CRT/MFC/zlib) | 736 | 77% | CRT/biblioteca (572), type_info (51), UnDecorator (43), DName (30), _LocaleUpdate (12), pcharNode (4), pDNameNode (4), DNameStatusNode (4) |
| natives de UnrealScript (exec*) | 278 | 100% | UObject (272), UParamStack (5), UCommandlet (1) |
| ferramentas (commandlets) | 68 | 96% | UCommandlet (68) |
| renderizacao | 10 | 100% | FVertexHit (10) |
| rede | 3 | 100% | Replicator (3) |
| sistema (chamadas Win32 importadas) | 2 | 100% | KERNEL32.DLL (2) |

### Exemplos de métodos nomeados por subsistema

- **nucleo Unreal (objetos, script VM, IO):** `UMapProperty::ExportCppItem`, `UField::GetPropertiesSize`, `FMemCache::Get`, `FString::InStr`, `UObject::MakeUniqueObjectName`, `FCoords::MirrorByVector`, `UProperty::NetSerializeItem`, `FVector::Normalize`, `UObject::UnhashObjectBuffer`, `FVector::Size`
- **bibliotecas (CRT/MFC/zlib):** `CRect::CRect`, `_LocaleUpdate::_LocaleUpdate`, `type_info::_Type_info_dtor`, `HeapManager::Destructor`, `UnDecorator::getNumberOfDimensions`, `UnDecorator::getTypeEncoding`, `UnDecorator::UScore`, `HeapManager::getMemory`, `DName::DName`, `pDNameNode::pDNameNode`
- **natives de UnrealScript (exec*):** `UObject::execStringToVector`, `UObject::execDivideEqual_FloatFloat`, `UObject::execSubtractEqual_VectorVector`, `UObject::execHighNative3`, `UObject::execAddAdd_PreInt`, `UObject::execStringToRotator`, `UParamStack::execGetInt`, `UObject::execGreater_IntInt`, `UObject::execNotEqual_BoolBool`, `UObject::execEqualEqual_NameName`
- **ferramentas (commandlets):** `UCommandlet::UCommandlet`, `UCommandlet::eventMain`, `UCommandlet::Main`, `UCommandlet::execMain`
- **renderizacao:** `FVertexHit::FVertexHit`
- **rede:** `Replicator::Replicator`
- **sistema (chamadas Win32 importadas):** `KERNEL32.DLL::GetCurrentThreadId`, `KERNEL32.DLL::RtlUnwind`

## d3ddrv: 3527 funções

- Com classe e subsistema: **3527 de 3527 (100%)**.
- Por evidência observada: **1857 (52.7%)**; inferida: 1670 (47.3%).
- Código morto (nenhuma chamada, ponteiro em dados/código ou relocação no binário): 71.
- Classes distintas: 79.

| evidência | funções |
|---|---|
| nome | 475 |
| rtti | 119 |
| guard | 2 |
| vtable | 64 |
| eh | 1176 |
| thunk | 21 |
| inferido | 1357 |
| vizinhanca | 313 |

| subsistema | funções | observadas | principais classes (funções) |
|---|---|---|---|
| renderizacao (Direct3D) | 2836 | 45% | UD3DRenderDevice (1521), FD3DRenderInterface (1117), FD3DShader (68), (funcao livre nomeada) (37), FD3DDynamicVertexStream (14), FD3DTexture (12), FD3DDynamicIndexBuffer (10), FD3DVertexShaderParameter (9) |
| bibliotecas (CRT/MFC/zlib) | 413 | 78% | CRT/biblioteca (337), type_info (57), _LocaleUpdate (11), std::bad_exception (4), std::exception (3), exception (1) |
| renderizacao | 110 | 97% | FSkinningVertexShader (17), FBaseTexture (11), FRefractionVertexShader (6), FFilterBlit1VertexShader (5), FFilterBlit2VertexShader (5), FGBlurXVertexShader (5), FGBlurYVertexShader (5), FTexture (3) |
| nucleo Unreal (objetos, script VM, IO) | 75 | 99% | CORE.DLL::UObject (25), CORE.DLL::UBoolProperty (9), CORE.DLL::UIntProperty (9), CORE.DLL::UFloatProperty (9), CORE.DLL::UProperty (8), CORE.DLL::UField (7), UGlobalTempObjects (4), UIntProperty (1) |
| terreno e decoracao | 73 | 95% | FProjectorCubeMap (48), FProjectorCubeMapFace (19), FTerrain3LayerPixelShader11 (2), FTerrain3LayerPixelShader14 (2), FTerrain4LayerPixelShader14 (2) |
| efeitos e particulas | 10 | 80% | SetParticleMaterial (10) |
| sistema (chamadas Win32 importadas) | 7 | 14% | KERNEL32.DLL (7) |
| engine (chamada importada) | 3 | 100% | ENGINE.DLL::URenderDevice (2), ENGINE.DLL::FRenderResource (1) |

### Exemplos de métodos nomeados por subsistema

- **renderizacao (Direct3D):** `UD3DRenderDevice::GetCreateTextureBytes`, `UD3DRenderDevice::GetRenderInterface`, `UD3DRenderDevice::UD3DRenderDevice`, `UD3DRenderDevice::StaticConstructor`, `UD3DRenderDevice::GetCachedResource`, `UD3DRenderDevice::FlushResource`, `UD3DRenderDevice::IsUseTrilinear`, `UD3DRenderDevice::SetUseTrilinear`, `UD3DRenderDevice::RestoreGamma`, `UD3DRenderDevice::DeleteAllTexture`
- **bibliotecas (CRT/MFC/zlib):** `_LocaleUpdate::_LocaleUpdate`, `type_info::_Type_info_dtor`, `std::exception::exception`
- **nucleo Unreal (objetos, script VM, IO):** `CORE.DLL::UObject::QueryInterface`, `CORE.DLL::UObject::AddRef`, `CORE.DLL::UObject::Release`, `CORE.DLL::UObject::ProcessEvent`, `CORE.DLL::UObject::ProcessDelegate`, `CORE.DLL::UObject::ProcessState`, `CORE.DLL::UObject::ProcessRemoteFunction`, `CORE.DLL::UObject::Modify`, `CORE.DLL::UObject::PostLoad`, `CORE.DLL::UObject::Destroy`
- **sistema (chamadas Win32 importadas):** `KERNEL32.DLL::RtlUnwind`
- **engine (chamada importada):** `ENGINE.DLL::URenderDevice::ClearCompiledShaders`, `ENGINE.DLL::URenderDevice::ClearCompiledShader`, `ENGINE.DLL::FRenderResource::GetCacheId`

## fire: 1046 funções

- Com classe e subsistema: **1046 de 1046 (100%)**.
- Por evidência observada: **926 (88.5%)**; inferida: 120 (11.5%).
- Código morto (nenhuma chamada, ponteiro em dados/código ou relocação no binário): 34.
- Classes distintas: 36.

| evidência | funções |
|---|---|
| nome | 720 |
| rtti | 21 |
| guard | 0 |
| vtable | 0 |
| eh | 157 |
| thunk | 28 |
| inferido | 74 |
| vizinhanca | 46 |

| subsistema | funções | observadas | principais classes (funções) |
|---|---|---|---|
| renderizacao (texturas procedurais) | 525 | 90% | UFireTexture (139), UWaterTexture (77), UIceTexture (75), UWetTexture (54), UWaveTexture (46), (funcao livre nomeada) (46), UFluidTexture (44), UFractalTexture (40) |
| bibliotecas (CRT/MFC/zlib) | 457 | 85% | CRT/biblioteca (317), UnDecorator (43), type_info (39), DName (30), pcharNode (4), pDNameNode (4), DNameStatusNode (4), charNode (3) |
| engine (chamada importada) | 32 | 100% | ENGINE.DLL::UTexture (17), ENGINE.DLL::UMaterial (10), ENGINE.DLL::UBitmapMaterial (4), ENGINE.DLL::UPalette (1) |
| nucleo Unreal (objetos, script VM, IO) | 24 | 100% | CORE.DLL::UObject (24) |
| rede | 3 | 100% | Replicator (3) |
| renderizacao | 2 | 100% | UPalette (2) |
| efeitos e particulas | 2 | 100% | FSpark (2) |
| sistema (chamadas Win32 importadas) | 1 | 100% | KERNEL32.DLL (1) |

### Exemplos de métodos nomeados por subsistema

- **renderizacao (texturas procedurais):** `UFireTexture::MoveSparkTwo`, `UWetTexture::UWetTexture`, `UFireTexture::MoveSpark`, `UIceTexture::UIceTexture`, `UWaterTexture::PostLoad`, `UFireTexture::CloseSpark`, `UFluidTexture::Init`, `UIceTexture::Clear`, `UFireTexture::DrawSparkLine`, `UFireTexture::PostLoad`
- **bibliotecas (CRT/MFC/zlib):** `type_info::_Type_info_dtor`, `_LocaleUpdate::_LocaleUpdate`, `std::exception::exception`, `HeapManager::Destructor`, `UnDecorator::getNumberOfDimensions`, `UnDecorator::getTypeEncoding`, `UnDecorator::UScore`, `HeapManager::getMemory`, `DName::DName`, `pDNameNode::pDNameNode`
- **engine (chamada importada):** `ENGINE.DLL::UTexture::Destroy`, `ENGINE.DLL::UTexture::Serialize`, `ENGINE.DLL::UMaterial::IsLoaded`, `ENGINE.DLL::UMaterial::CheckCircularReferences`, `ENGINE.DLL::UMaterial::GetValidated`, `ENGINE.DLL::UMaterial::SetValidated`, `ENGINE.DLL::UMaterial::PreSetMaterial`, `ENGINE.DLL::UBitmapMaterial::MaterialUSize`, `ENGINE.DLL::UBitmapMaterial::MaterialVSize`, `ENGINE.DLL::UBitmapMaterial::MaterialMappingUSize`
- **nucleo Unreal (objetos, script VM, IO):** `CORE.DLL::UObject::QueryInterface`, `CORE.DLL::UObject::AddRef`, `CORE.DLL::UObject::Release`, `CORE.DLL::UObject::ProcessEvent`, `CORE.DLL::UObject::ProcessDelegate`, `CORE.DLL::UObject::ProcessState`, `CORE.DLL::UObject::ProcessRemoteFunction`, `CORE.DLL::UObject::Modify`, `CORE.DLL::UObject::IsPendingKill`, `CORE.DLL::UObject::GotoState`
- **rede:** `Replicator::Replicator`
- **sistema (chamadas Win32 importadas):** `KERNEL32.DLL::RtlUnwind`

## ipdrv: 2444 funções

- Com classe e subsistema: **2444 de 2444 (100%)**.
- Por evidência observada: **2147 (87.8%)**; inferida: 297 (12.2%).
- Código morto (nenhuma chamada, ponteiro em dados/código ou relocação no binário): 60.
- Classes distintas: 69.

| evidência | funções |
|---|---|
| nome | 1272 |
| rtti | 68 |
| guard | 15 |
| vtable | 10 |
| eh | 605 |
| thunk | 177 |
| inferido | 174 |
| vizinhanca | 123 |

| subsistema | funções | observadas | principais classes (funções) |
|---|---|---|---|
| rede | 1199 | 85% | FMasterServerUplinkLink (202), ATcpLink (130), AInternetLink (111), FTcpLink (100), FServerQueryLink (87), UHTTPDownload (84), AUdpLink (75), UTcpNetDriver (69) |
| bibliotecas (CRT/MFC/zlib) | 464 | 85% | CRT/biblioteca (324), UnDecorator (43), type_info (39), DName (30), pcharNode (4), pDNameNode (4), DNameStatusNode (4), charNode (3) |
| mundo e atores | 264 | 88% | AMasterServerClient (92), AMasterServerUplink (59), AServerQueryClient (51), AMasterServerLink (40), AMasterServerGameStats (22) |
| nucleo Unreal (objetos, script VM, IO) | 244 | 93% | FArchiveTcpReader (54), FArchiveUdpWriter (25), CORE.DLL::UObject (25), FArchiveUdpReader (24), CORE.DLL::FArchive (24), FArchiveTcpWriter (22), FArchiveTcpSocket (18), CORE.DLL::UStrProperty (9) |
| engine (chamada importada) | 208 | 100% | ENGINE.DLL::AActor (186), ENGINE.DLL::UNetConnection (12), ENGINE.DLL::UNetDriver (7), ENGINE.DLL::UDownload (3) |
| ferramentas (commandlets) | 33 | 100% | UCompressCommandlet (17), UDecompressCommandlet (16) |
| natives de UnrealScript (exec*) | 31 | 100% | AInternetLink (9), ATcpLink (9), AUdpLink (5), AMasterServerClient (3), AMasterServerUplink (2), AServerQueryClient (2), AMasterServerLink (1) |
| sistema (chamadas Win32 importadas) | 1 | 100% | KERNEL32.DLL (1) |

### Exemplos de métodos nomeados por subsistema

- **rede:** `FUdpLink::FUdpLink`, `UTcpNetDriver::InitListen`, `ATcpLink::eventReceivedBinary`, `AUdpLink::AUdpLink`, `AInternetLink::Tick`, `UTcpNetDriver::GetSocketData`, `UTcpipConnection::UTcpipConnection`, `AInternetLink::GetSocket`, `UTcpipConnection::LowLevelDescribe`, `FTcpLink::OnConnectionSucceeded`
- **bibliotecas (CRT/MFC/zlib):** `_LocaleUpdate::_LocaleUpdate`, `type_info::_Type_info_dtor`, `std::exception::exception`, `HeapManager::Destructor`, `UnDecorator::getNumberOfDimensions`, `UnDecorator::getTypeEncoding`, `UnDecorator::UScore`, `HeapManager::getMemory`, `DName::DName`, `pDNameNode::pDNameNode`
- **mundo e atores:** `AServerQueryClient::Init`, `AMasterServerUplink::Destroy`, `AMasterServerUplink::eventLogStatLine`, `AMasterServerClient::PostScriptDestroyed`, `AMasterServerClient::Destroy`, `AMasterServerClient::delegateOnReceivedServer`, `AServerQueryClient::AServerQueryClient`, `AMasterServerGameStats::AMasterServerGameStats`, `AServerQueryClient::delegateOnPingTimeout`, `AMasterServerUplink::PostScriptDestroyed`
- **nucleo Unreal (objetos, script VM, IO):** `FArchiveTcpReader::FArchiveTcpReader`, `FArchiveUdpReader::FArchiveUdpReader`, `FArchiveTcpSocket::FArchiveTcpSocket`, `FArchiveTcpReader::Serialize`, `FArchiveTcpWriter::FArchiveTcpWriter`, `FArchiveUdpWriter::Flush`, `FArchiveUdpWriter::FArchiveUdpWriter`, `FArchiveUdpReader::AtEnd`, `FArchiveUdpWriter::Serialize`, `FArchiveUdpReader::Serialize`
- **engine (chamada importada):** `ENGINE.DLL::AActor::ProcessEvent`, `ENGINE.DLL::AActor::ProcessState`, `ENGINE.DLL::AActor::ProcessRemoteFunction`, `ENGINE.DLL::AActor::PostLoad`, `ENGINE.DLL::AActor::Serialize`, `ENGINE.DLL::AActor::IsPendingKill`, `ENGINE.DLL::AActor::InitExecution`, `ENGINE.DLL::AActor::PostEditChange`, `ENGINE.DLL::AActor::ClearL2Game`, `ENGINE.DLL::AActor::NetDirty`
- **natives de UnrealScript (exec*):** `AInternetLink::execIsDataPending`, `ATcpLink::execSendBinary`, `AInternetLink::execStringToIpAddr`, `ATcpLink::execListen`, `ATcpLink::execClose`, `ATcpLink::execSendText`, `AInternetLink::execParseURL`, `AInternetLink::execIpAddrToString`, `ATcpLink::execBindPort`, `AMasterServerClient::execStartQuery`
- **sistema (chamadas Win32 importadas):** `KERNEL32.DLL::RtlUnwind`

## l2: 1901 funções

- Com classe e subsistema: **1901 de 1901 (100%)**.
- Por evidência observada: **1566 (82.4%)**; inferida: 335 (17.6%).
- Código morto (nenhuma chamada, ponteiro em dados/código ou relocação no binário): 42.
- Classes distintas: 64.

| evidência | funções |
|---|---|
| nome | 761 |
| rtti | 137 |
| guard | 8 |
| vtable | 31 |
| eh | 365 |
| thunk | 264 |
| inferido | 273 |
| vizinhanca | 62 |

| subsistema | funções | observadas | principais classes (funções) |
|---|---|---|---|
| nucleo Unreal (objetos, script VM, IO) | 592 | 77% | FConfigCacheIni (282), FFileManagerGeneric (94), FFileManagerWindows (77), FMallocWindows (54), FConfigCache (21), CORE.DLL::FArchive (20), FOutputDeviceFile (11), FOutputDeviceWindowsError (8) |
| bibliotecas (CRT/MFC/zlib) | 534 | 84% | CRT/biblioteca (379), std::bad_exception (48), UnDecorator (44), DName (30), type_info (5), pcharNode (4), pDNameNode (4), DNameStatusNode (4) |
| inicializacao (L2.exe: lancador, config, criptografia de arquivos) | 473 | 89% | (funcao livre nomeada) (203), WINDOW.DLL::WWindow (54), FExecHook (51), FFeedbackContextWindows (51), FConfigFile (34), FMemArchive (18), WINDOW.DLL::WProperties (15), WINDOW.DLL::WLog (10) |
| UI Win32 (Window.dll: janelas de config/ferramentas) | 154 | 85% | WLog (68), WConfigPageSafeOptions (34), WConfigWizard (28), WConfigPageSafeMode (20), WObjectProperties (2), WConfigProperties (2) |
| criptografia de arquivos (Ver111/121/413) | 144 | 74% | FL2RSACodec (36), FL2DESCodec (32), FL2FileDecryptArchive (29), FArchiveFileReader (26), FL2FileEncryptArchive (21) |
| rede | 3 | 100% | Replicator (3) |
| sistema (chamadas Win32 importadas) | 1 | 100% | KERNEL32.DLL (1) |

### Exemplos de métodos nomeados por subsistema

- **nucleo Unreal (objetos, script VM, IO):** `CORE.DLL::FNotifyHook::NotifyPreChange`, `CORE.DLL::FNotifyHook::NotifyPostChange`, `CORE.DLL::FNotifyHook::NotifyExec`, `CORE.DLL::FOutputDevice::Flush`, `CORE.DLL::FOutputDevice::Release`, `CORE.DLL::FCodec::Encode`, `CORE.DLL::FCodec::Decode`, `CORE.DLL::FFileManager::Init`, `CORE.DLL::FFileManager::CreateMemReader`, `CORE.DLL::FFileManager::CalcHomeDir`
- **bibliotecas (CRT/MFC/zlib):** `type_info::_Type_info_dtor`, `_LocaleUpdate::_LocaleUpdate`, `std::exception::exception`, `HeapManager::Destructor`, `UnDecorator::getNumberOfDimensions`, `UnDecorator::getTypeEncoding`, `UnDecorator::UScore`, `HeapManager::getMemory`, `DName::DName`, `pDNameNode::pDNameNode`
- **inicializacao (L2.exe: lancador, config, criptografia de arquivos):** `WINDOW.DLL::FCommandTarget::Unused`, `WINDOW.DLL::WDialog::Show`, `WINDOW.DLL::WWindow::Serialize`, `WINDOW.DLL::WWindow::DoDestroy`, `WINDOW.DLL::WWindow::WndProc`, `WINDOW.DLL::WDialog::CallDefaultProc`, `WINDOW.DLL::WWindow::InterceptControlCommand`, `WINDOW.DLL::WWindow::GetText`, `WINDOW.DLL::WWindow::SetText`, `WINDOW.DLL::WWindow::GetLength`
- **rede:** `Replicator::Replicator`
- **sistema (chamadas Win32 importadas):** `KERNEL32.DLL::RtlUnwind`

## lineagecreature: 657 funções

- Com classe e subsistema: **657 de 657 (100%)**.
- Por evidência observada: **577 (87.8%)**; inferida: 80 (12.2%).
- Código morto (nenhuma chamada, ponteiro em dados/código ou relocação no binário): 27.
- Classes distintas: 14.

| evidência | funções |
|---|---|
| nome | 560 |
| rtti | 6 |
| guard | 0 |
| vtable | 1 |
| eh | 9 |
| thunk | 1 |
| inferido | 48 |
| vizinhanca | 32 |

| subsistema | funções | observadas | principais classes (funções) |
|---|---|---|---|
| engine (chamada importada) | 296 | 100% | ENGINE.DLL::AActor (183), ENGINE.DLL::APawn (110), ENGINE.DLL::AEnvCreatureManagerInfo (3) |
| bibliotecas (CRT/MFC/zlib) | 250 | 80% | CRT/biblioteca (211), type_info (32), std::exception (3), std::bad_exception (2), _LocaleUpdate (1), exception (1) |
| mundo e atores | 96 | 69% | AAmbientCreatureFlock (40), (funcao livre nomeada) (33), AAmbientCreature (23) |
| nucleo Unreal (objetos, script VM, IO) | 13 | 100% | CORE.DLL::UObject (13) |
| natives de UnrealScript (exec*) | 1 | 100% | AAmbientCreature (1) |
| sistema (chamadas Win32 importadas) | 1 | 100% | KERNEL32.DLL (1) |

### Exemplos de métodos nomeados por subsistema

- **engine (chamada importada):** `ENGINE.DLL::AActor::ProcessEvent`, `ENGINE.DLL::AActor::ProcessState`, `ENGINE.DLL::AActor::ProcessRemoteFunction`, `ENGINE.DLL::AActor::PostLoad`, `ENGINE.DLL::APawn::Destroy`, `ENGINE.DLL::AActor::Serialize`, `ENGINE.DLL::AActor::IsPendingKill`, `ENGINE.DLL::AActor::InitExecution`, `ENGINE.DLL::AActor::PostEditChange`, `ENGINE.DLL::APawn::ClearL2Game`
- **bibliotecas (CRT/MFC/zlib):** `type_info::_Type_info_dtor`, `_LocaleUpdate::_LocaleUpdate`, `std::exception::exception`
- **mundo e atores:** `AAmbientCreature::AAmbientCreature`, `AAmbientCreature::eventAmbientCreatureMoveTo`, `AAmbientCreatureFlock::AAmbientCreatureFlock`, `AAmbientCreature::SetTargetLocation`, `AAmbientCreature::SetFlockLocation`, `AAmbientCreature::SetState`, `AAmbientCreature::PreProcessAction`, `AAmbientCreature::SetAmbientCreatureTargetLocation`, `AAmbientCreature::CreatureStates`, `AAmbientCreature::States`
- **nucleo Unreal (objetos, script VM, IO):** `CORE.DLL::UObject::QueryInterface`, `CORE.DLL::UObject::AddRef`, `CORE.DLL::UObject::Release`, `CORE.DLL::UObject::ProcessDelegate`, `CORE.DLL::UObject::Modify`, `CORE.DLL::UObject::GotoState`, `CORE.DLL::UObject::GotoLabel`, `CORE.DLL::UObject::ShutdownAfterError`, `CORE.DLL::UObject::CallFunction`, `CORE.DLL::UObject::ScriptConsoleExec`
- **natives de UnrealScript (exec*):** `AAmbientCreature::execStartAmbientCreature`
- **sistema (chamadas Win32 importadas):** `KERNEL32.DLL::RtlUnwind`

## window: 4216 funções

- Com classe e subsistema: **4216 de 4216 (100%)**.
- Por evidência observada: **3904 (92.6%)**; inferida: 312 (7.4%).
- Código morto (nenhuma chamada, ponteiro em dados/código ou relocação no binário): 60.
- Classes distintas: 91.

| evidência | funções |
|---|---|
| nome | 2267 |
| rtti | 75 |
| guard | 1 |
| vtable | 1 |
| eh | 1387 |
| thunk | 173 |
| inferido | 218 |
| vizinhanca | 94 |

| subsistema | funções | observadas | principais classes (funções) |
|---|---|---|---|
| UI Win32 (Window.dll: janelas de config/ferramentas) | 3711 | 93% | WWindow (232), FPropertyItem (215), FTreeItem (196), WListBox (149), WProperties (141), FObjectsItem (127), WEdit (112), WPropertyPage (102) |
| bibliotecas (CRT/MFC/zlib) | 464 | 85% | CRT/biblioteca (320), UnDecorator (43), type_info (39), DName (30), CRect (4), pcharNode (4), pDNameNode (4), DNameStatusNode (4) |
| nucleo Unreal (objetos, script VM, IO) | 25 | 100% | CORE.DLL::UObject (23), CORE.DLL::FOutputDevice (2) |
| renderizacao | 12 | 100% | FWindowsBitmap (12) |
| rede | 3 | 100% | Replicator (3) |
| sistema (chamadas Win32 importadas) | 1 | 100% | KERNEL32.DLL (1) |

### Exemplos de métodos nomeados por subsistema

- **UI Win32 (Window.dll: janelas de config/ferramentas):** `WThinScrollBar::SetRange`, `WWizardPage::GetBackText`, `FPropertyItem::FPropertyItem`, `FHeaderItem::ToHSL`, `WUrlButton::GetPackageName`, `WWizardPage::GetWindowClassName`, `WWindow::OnMouseHover`, `FControlSnoop::SnoopRightMouseDown`, `WTimeScrollBar::OnMouseMove`, `WTimeScrollBar::WTimeScrollBar`
- **bibliotecas (CRT/MFC/zlib):** `CRect::CRect`, `type_info::_Type_info_dtor`, `_LocaleUpdate::_LocaleUpdate`, `std::exception::exception`, `HeapManager::Destructor`, `UnDecorator::getNumberOfDimensions`, `UnDecorator::getTypeEncoding`, `UnDecorator::UScore`, `HeapManager::getMemory`, `DName::DName`
- **nucleo Unreal (objetos, script VM, IO):** `CORE.DLL::UObject::QueryInterface`, `CORE.DLL::UObject::AddRef`, `CORE.DLL::UObject::Release`, `CORE.DLL::UObject::ProcessEvent`, `CORE.DLL::UObject::ProcessDelegate`, `CORE.DLL::UObject::ProcessState`, `CORE.DLL::UObject::ProcessRemoteFunction`, `CORE.DLL::UObject::Modify`, `CORE.DLL::UObject::PostLoad`, `CORE.DLL::UObject::IsPendingKill`
- **renderizacao:** `FWindowsBitmap::LoadFile`, `FWindowsBitmap::FWindowsBitmap`, `FWindowsBitmap::GetBitmapHandle`
- **rede:** `Replicator::Replicator`
- **sistema (chamadas Win32 importadas):** `KERNEL32.DLL::RtlUnwind`

## windrv: 1057 funções

- Com classe e subsistema: **1057 de 1057 (100%)**.
- Por evidência observada: **942 (89.1%)**; inferida: 115 (10.9%).
- Código morto (nenhuma chamada, ponteiro em dados/código ou relocação no binário): 39.
- Classes distintas: 39.

| evidência | funções |
|---|---|
| nome | 748 |
| rtti | 17 |
| guard | 0 |
| vtable | 1 |
| eh | 162 |
| thunk | 14 |
| inferido | 69 |
| vizinhanca | 46 |

| subsistema | funções | observadas | principais classes (funções) |
|---|---|---|---|
| bibliotecas (CRT/MFC/zlib) | 524 | 83% | CRT/biblioteca (365), UnDecorator (43), type_info (41), DName (30), _LocaleUpdate (13), pcharNode (4), pDNameNode (4), DNameStatusNode (4) |
| interface/entrada (janela, teclado, mouse, joystick) | 434 | 94% | UWindowsViewport (227), UWindowsClient (84), (funcao livre nomeada) (65), WINDOW.DLL::WWindow (53), DINPUT8.DLL (4), WINDOW.DLL::FCommandTarget (1) |
| nucleo Unreal (objetos, script VM, IO) | 55 | 100% | CORE.DLL::UObject (25), CORE.DLL::UBoolProperty (9), CORE.DLL::UField (7), CORE.DLL::UProperty (7), CORE.DLL::FNotifyHook (3), UBoolProperty (2), CORE.DLL::FOutputDevice (2) |
| UI Win32 (Window.dll: janelas de config/ferramentas) | 23 | 96% | WWindowsViewportWindow (23) |
| engine (chamada importada) | 10 | 100% | ENGINE.DLL::UViewport (6), ENGINE.DLL::UClient (4) |
| sistema (chamadas Win32 importadas) | 6 | 100% | IMM32.DLL (5), KERNEL32.DLL (1) |
| rede | 3 | 100% | Replicator (3) |
| UI: janelas e controles nativos (NC*) | 2 | 100% | switchD_1110950a (1), switchD_11109b4c (1) |

### Exemplos de métodos nomeados por subsistema

- **bibliotecas (CRT/MFC/zlib):** `CRect::CRect`, `type_info::_Type_info_dtor`, `_LocaleUpdate::_LocaleUpdate`, `std::exception::exception`, `HeapManager::Destructor`, `UnDecorator::getNumberOfDimensions`, `UnDecorator::getTypeEncoding`, `UnDecorator::UScore`, `HeapManager::getMemory`, `DName::DName`
- **interface/entrada (janela, teclado, mouse, joystick):** `UWindowsClient::PostEditChange`, `UWindowsViewport::ResizeViewport`, `UWindowsViewport::CloseWindow`, `UWindowsViewport::ToggleFullscreen`, `UWindowsViewport::SetMouseDisable`, `UWindowsClient::Tick`, `UWindowsViewport::ShutdownAfterError`, `UWindowsViewport::UpdateInput`, `UWindowsViewport::EndFullscreen`, `UWindowsViewport::IsFullscreen`
- **nucleo Unreal (objetos, script VM, IO):** `CORE.DLL::UObject::GetOuter`, `CORE.DLL::UObject::QueryInterface`, `CORE.DLL::UObject::AddRef`, `CORE.DLL::UObject::Release`, `CORE.DLL::UObject::ProcessEvent`, `CORE.DLL::UObject::ProcessDelegate`, `CORE.DLL::UObject::ProcessState`, `CORE.DLL::UObject::ProcessRemoteFunction`, `CORE.DLL::UObject::Modify`, `CORE.DLL::UObject::PostLoad`
- **UI Win32 (Window.dll: janelas de config/ferramentas):** `WWindowsViewportWindow::WWindowsViewportWindow`, `WWindowsViewportWindow::GetWindowClassName`, `WWindowsViewportWindow::GetPackageName`, `WWindowsViewportWindow::WndProc`
- **engine (chamada importada):** `ENGINE.DLL::UClient::Serialize`, `ENGINE.DLL::UClient::Flush`, `ENGINE.DLL::UClient::UpdateGamma`, `ENGINE.DLL::UClient::RestoreGamma`, `ENGINE.DLL::UViewport::Serialize`, `ENGINE.DLL::UViewport::ReadInput`, `ENGINE.DLL::UViewport::Present`, `ENGINE.DLL::UViewport::SetDrag`, `ENGINE.DLL::UViewport::GetServer`
- **sistema (chamadas Win32 importadas):** `IMM32.DLL::ImmDestroyContext`, `IMM32.DLL::ImmAssociateContext`, `IMM32.DLL::ImmGetContext`, `IMM32.DLL::ImmReleaseContext`, `IMM32.DLL::ImmCreateContext`, `KERNEL32.DLL::RtlUnwind`
- **rede:** `Replicator::Replicator`
- **UI: janelas e controles nativos (NC*):** `switchD_1110950a::caseD_101`, `switchD_11109b4c::caseD_200`

