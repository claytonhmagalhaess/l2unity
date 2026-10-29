# Desenho dos controles nativos (NWindow.dll)

Gerado por `scripts/nc_draw_map.py`. Toda janela e controle da interface é uma classe `NC*` derivada de `NCWnd` (RTTI MSVC). O **slot 99** da vtable é o `Draw` de cada classe. Isso foi confirmado em `NCMinimapWnd` (chama `UCanvas::DrawMinimapLoc`), `NCHtmlViewer` (`UCanvas::StartTextAnim`) e `NCListBox`/`NCChatListBox` (`FL2TextAlignParser`). O desenho é feito por primitivas do `UCanvas` do engine, chamadas pela vtable do canvas (`*(this+0x34)`), cujos nomes vêm dos thunks exportados pelo `engine.dll`:

| primitiva | controles que usam |
|---|---|
| `SetClip` | 141 |
| `ReleaseClip` | 141 |
| `DrawTexture` | 114 |
| `GetTextExtent` | 90 |
| `DrawTextToCanvas` | 87 |
| `DrawStretchedTex` | 29 |
| `DrawIcon` | 15 |
| `DrawLine` | 6 |
| `DrawSpecialDigit` | 6 |
| `DrawBrightenTexture` | 5 |
| `GetViewportSceneTexture` | 4 |
| `DrawRect` | 4 |
| `Clear` | 4 |
| `SetParserParam` | 4 |
| `GetLineBuffer` | 4 |
| `StartTextAnim` | 2 |
| `EndTextAnim` | 2 |
| `DrawChatting` | 1 |
| `DrawRadarBack` | 1 |
| `DrawRadarTarget` | 1 |
| `DrawRadarEtc` | 1 |

Classes `NCWnd`: **168**; sobrescrevem `Draw`: **144**; funções `Draw` distintas: **127**.

Os parâmetros de cada chamada (posição, tamanho, coordenadas UV, textura, alfa) vêm do layout (`Interface.xdat`, ver 01) e do estado do controle. `DrawTexture(x, y, w, h, u, v, uw, vh, textura, cor/alfa, …)` é a primitiva de quase todo controle; os modos do `NCTextureCtrl` (esticar, normal, ladrilho, …) correspondem ao `TextureCtrlType` do xdat, e o `NCStatusBarCtrl` desenha fundo, barra e regeneração com alfa 0xFF/0x80 e o texto `%.2f%s`.

| classe | Draw | sobrescrito? | primitivas (contagem no fecho) | formatos de texto |
|---|---|---|---|---|
| AddFriendDialog | `0x1009ea20` | sim | DrawTextToCanvas×1, GetTextExtent×1, SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| AddGroupDialog | `0x100a02d0` | sim | DrawTextToCanvas×1, GetTextExtent×1, SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| AddedConfirmDialog | `0x1009f630` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| AlarmWnd | `0x100b2d90` | sim | DrawIcon×2, SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, GetViewportSceneTexture×1 | `%s %s` |
| ChatBox | `0x10096f30` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| ChatFrameCtrl | `0x10097220` | sim | DrawStretchedTex×1, DrawTextToCanvas×1, GetTextExtent×1, DrawIcon×1, SetClip×1, DrawTexture×1 | — |
| ChatWnd | `0x100994d0` | sim | DrawTextToCanvas×1, GetTextExtent×1, DrawIcon×1, SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| FriendBox | `0x10096cc0` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1, DrawIcon×1 | — |
| InviteBox | `0x10096870` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawStretchedTex×1, DrawTexture×1, ReleaseClip×1 | — |
| InviteWnd | `0x10096b00` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| L2ChatBox | `0x100a2970` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, ReleaseClip×1 | — |
| L2ChatFrameCtrl | `0x1001ba20` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, DrawStretchedTex×1, ReleaseClip×1 | — |
| L2ChatWnd | `0x100a2b20` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| L2FriendTree | `0x10055580` | sim | SetClip×1, ReleaseClip×1 | — |
| L2FriendTreeCtrl | `0x100c50e0` | sim | SetClip×1, ReleaseClip×1 | — |
| L2FriendWnd | `0x100b5c10` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| L2Task | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| L2TaskBox | `0x100a2c10` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1, DrawIcon×1 | — |
| L2TaskWnd | `0x100978f0` | sim | SetClip×1, DrawStretchedTex×1, DrawTexture×1, ReleaseClip×1 | — |
| L2WordWrapperWnd | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| LoadingWnd | `0x100b2c60` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | `Can not find Texture : %s` |
| LoginWnd | `0x100b2600` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| MessageDialog | `0x100a1100` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| MessengerWnd | `0x100b5fc0` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | `Can not find Texture : %s` |
| MoveGroupDialog | `0x1009fd20` | sim | DrawTextToCanvas×1, GetTextExtent×1, SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| MsnTree | `0x10055580` | sim | SetClip×1, ReleaseClip×1 | — |
| MsnTreeCtrl | `0x100c4b30` | sim | SetClip×1, ReleaseClip×1 | — |
| MsnWnd | `0x100b4630` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, DrawIcon×1, ReleaseClip×1 | `(%s)` `Can not find Texture : %s` |
| NCActionLinker | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCAnimTextureCtrl | `0x10053790` | sim | DrawTexture×2, SetClip×1, ReleaseClip×1 | — |
| NCAnnounceWnd | `0x101901c0` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCAuthWnd | `0x10181670` | sim | DrawTextToCanvas×1, GetTextExtent×1, SetClip×1, DrawTexture×1, ReleaseClip×1 | `Param%d` `script not found ,event id : %d` |
| NCAutoLogWnd | `0x10136850` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawStretchedTex×1, ReleaseClip×1 | — |
| NCBBSHtmlViewer | `0x10083660` | sim | SetClip×1, ReleaseClip×1 | — |
| NCBarCtrl | `0x10002f70` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCBenchMarkResultWnd | `0x101a7f20` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawStretchedTex×1, DrawTexture×1, ReleaseClip×1 | — |
| NCButton | `0x10005e00` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCCandidateBox | `0x10007c40` | sim | DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1 | — |
| NCChatListBox | `0x10137f00` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCChatWnd | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCCheckBox | `0x10009080` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCChineseIME | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCComboBox | `0x1000a640` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawStretchedTex×1, DrawTexture×1, ReleaseClip×1 | — |
| NCCompositeBox | `0x10008310` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawStretchedTex×1, ReleaseClip×1 | — |
| NCConsole | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCCountSpin | `0x1000d060` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawStretchedTex×1, ReleaseClip×1 | — |
| NCCreditWnd | `0x10174780` | sim | SetClip×1, DrawStretchedTex×1, ReleaseClip×1 | — |
| NCDebugConsole | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCDebugWnd | `0x100326c0` | sim | DrawIcon×3, SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, DrawRect×1 | `Can not find Texture : %s` `script not found ,event id : %d` |
| NCDialogBox | `0x1018f360` | sim | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCDrawPanel | `0x10012860` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCDynamicLinker | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCEditBox | `0x100183b0` | sim | DrawStretchedTex×2, DrawTextToCanvas×1, GetTextExtent×1, SetClip×1, ReleaseClip×1, DrawLine×1 | `Can not find Texture : %s` |
| NCEffectButton | `0x10005aa0` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCEquipItemWnd | `0x10175bc0` | sim | SetClip×1, DrawTexture×1, DrawStretchedTex×1, ReleaseClip×1 | `Can not find Texture : %s` |
| NCEulaWnd | `0x1018fdb0` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCExButton | `0x10005e00` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCFileLinker | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCFishViewportWnd | `0x101ab1c0` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawSpecialDigit×1, DrawTexture×1, ReleaseClip×1 | — |
| NCFrameCtrl | `0x1001ba20` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, DrawStretchedTex×1, ReleaseClip×1 | — |
| NCFrameWnd | `0x1001eb60` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCGMPetitionWnd | `0x101a7990` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCGaraDialogBox | `0x1000f700` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCHeaderCtrl | `0x10035330` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawStretchedTex×1, ReleaseClip×1 | — |
| NCHtmlAction | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCHtmlButton | `0x10091980` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCHtmlComboBox | `0x10091400` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawStretchedTex×1, DrawTexture×1, ReleaseClip×1 | — |
| NCHtmlEdit | `0x10093480` | sim | DrawStretchedTex×2, DrawTextToCanvas×1, GetTextExtent×1, SetClip×1, ReleaseClip×1, DrawLine×1 | `Can not find Texture : %s` |
| NCHtmlLinker | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCHtmlMultiEdit | `0x10091c30` | sim | DrawTextToCanvas×1, GetTextExtent×1, DrawStretchedTex×1, SetClip×1, DrawLine×1, ReleaseClip×1 | `Can not find Texture : %s` |
| NCHtmlPushButton | `0x10091ab0` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCHtmlSliderBar | `0x10093f70` | sim | SetClip×1, DrawStretchedTex×1, DrawTexture×1, ReleaseClip×1 | — |
| NCHtmlViewer | `0x100833e0` | sim | StartTextAnim×1, EndTextAnim×1, SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCIME | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCIMEManager | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCIcon | `0x10023d10` | sim | SetClip×1, DrawBrightenTexture×1, DrawTexture×1, ReleaseClip×1 | — |
| NCInvenItemWnd | `0x10179c30` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCInvenWeightWnd | `0x1017a1e0` | sim | SetClip×1, GetTextExtent×1, DrawTexture×1, DrawSpecialDigit×1, ReleaseClip×1 | — |
| NCInventoryWnd | `0x1017a700` | sim | GetTextExtent×2, DrawTextToCanvas×1, SetClip×1, DrawTexture×1, ReleaseClip×1 | `script not found ,event id : %d` |
| NCItemWnd | `0x10030d90` | sim | GetTextExtent×5, DrawTextToCanvas×1, DrawBrightenTexture×1, DrawStretchedTex×1, ReleaseClip×1, SetClip×1 | — |
| NCJapaneseIME | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCKeyCryptWarningDialogBox | `0x10181500` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCKoreanIME | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCListBox | `0x100326c0` | sim | DrawIcon×3, SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, DrawRect×1 | `Can not find Texture : %s` `script not found ,event id : %d` |
| NCListCtrl | `0x10035670` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawStretchedTex×1, DrawTexture×1, ReleaseClip×1 | — |
| NCLobbyFunctionWnd | `0x1017cea0` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCLobbyStartWnd | `0x1017d5a0` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCLobbyWnd | `0x1017ef00` | sim | SetClip×1, ReleaseClip×1, DrawChatting×1 | `%d%s %d%s %d%s` `%s : %s` |
| NCLoginFunctionWnd | `0x1017ff30` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCLoginServerWnd | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCMSView_CharacterSelectWnd | `0x1018d420` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCMSView_InvenItemWnd | `0x10185ed0` | sim | SetClip×1, DrawBrightenTexture×1, DrawTexture×1, ReleaseClip×1 | — |
| NCMSViewerWnd | `0x1018ced0` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawStretchedTex×1, DrawTexture×1, ReleaseClip×1 | — |
| NCMagicSkillWnd | `0x101858b0` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCMessageWnd | `0x10186c20` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCMinimapWnd | `0x101895c0` | sim | DrawTexture×1, ReleaseClip×1, SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawLine×1 | `script not found ,event id : %d` |
| NCMultiEdit | `0x1003c6f0` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawStretchedTex×1, DrawLine×1, ReleaseClip×1 | `Can not find Texture : %s` |
| NCNPCHtmlViewer | `0x100837d0` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCNameCtrl | `0x1004b510` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, ReleaseClip×1 | `+%d %s` ``%s`` |
| NCNoticeInfoWnd | `0x1018fa60` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCNpcView_CharacterSelectWnd | `0x101924e0` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawStretchedTex×1, ReleaseClip×1 | — |
| NCNpcView_CharacterSelect_List | `0x10191430` | sim | DrawIcon×3, SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, DrawRect×1 | `Can not find Texture : %s` `script not found ,event id : %d` |
| NCNpcView_InvenItemWnd | `0x10179c30` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCNpcViewerWnd | `0x101917c0` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCPawnCreateFunctionWnd | `0x10196360` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCPawnCreateWnd | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCPawnInfoWnd | `0x101975f0` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCPawnSelectWnd | `0x1017e280` | sim | DrawTextToCanvas×1, GetTextExtent×1, SetClip×1, DrawTexture×1, DrawSpecialDigit×1, ReleaseClip×1 | — |
| NCPawnSetupWnd | `0x101977d0` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCPawnView_CharacterSelectWnd | `0x1019dcf0` | sim | DrawTextToCanvas×1, GetTextExtent×1, SetClip×1, DrawStretchedTex×1, DrawTexture×1, ReleaseClip×1 | — |
| NCPawnView_CharacterSelect_List | `0x1019c5a0` | sim | DrawIcon×3, SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, DrawRect×1 | `Can not find Texture : %s` `script not found ,event id : %d` |
| NCPawnView_InvenItemWnd | `0x10179c30` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCPawnView_InvenTextWnd | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCPawnView_ShortCutWnd | `0x101a1640` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCPawnViewerWnd | `0x1019d8e0` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCPawnViewer_HairChangeWnd | `0x101a07c0` | sim | DrawTextToCanvas×1, GetTextExtent×1, SetClip×1, ReleaseClip×1 | — |
| NCPawnViewer_MixAnimWnd | `0x1019ed20` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, ReleaseClip×1 | — |
| NCPawnViewer_Simulator | `0x101a0d60` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, ReleaseClip×1 | — |
| NCProgressCtrl | `0x1000d670` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCPushButton | `0x10005e00` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCRadarWnd | `0x10042bd0` | sim | SetClip×1, DrawRadarBack×1, ReleaseClip×1, DrawRadarTarget×1, DrawRadarEtc×1 | — |
| NCRadioButton | `0x10009080` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCResizeFrame | `0x1001c190` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCScrollWnd | `0x10044680` | sim | SetClip×1, ReleaseClip×1 | — |
| NCSelectCtrl | `0x101973d0` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCServerInfoWnd | `0x101a9650` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCServerSelectListCtrl | `0x10035670` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawStretchedTex×1, DrawTexture×1, ReleaseClip×1 | — |
| NCServerSelectWnd | `0x101a8b40` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCShortcutItemWnd | `0x10047b40` | sim | GetTextExtent×5, SetClip×1, DrawTextToCanvas×1, DrawBrightenTexture×1, DrawTexture×1, ReleaseClip×1 | — |
| NCSkillItemWnd | `0x10185ed0` | sim | SetClip×1, DrawBrightenTexture×1, DrawTexture×1, ReleaseClip×1 | — |
| NCSkillWnd | `0x10185840` | sim | SetClip×1, ReleaseClip×1 | — |
| NCSliderBar | `0x10049ec0` | sim | SetClip×1, DrawStretchedTex×1, DrawTexture×1, ReleaseClip×1 | — |
| NCSliderCtrl | `0x1004b070` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCStatusBarCtrl | `0x1004c7c0` | sim | SetClip×1, DrawSpecialDigit×1, DrawTexture×1, GetTextExtent×1, ReleaseClip×1 | `%.2f%s` |
| NCStatusIconCtrl | `0x1004db50` | sim | SetClip×1, DrawTexture×1, DrawStretchedTex×1, DrawSpecialDigit×1, GetTextExtent×1, ReleaseClip×1 | — |
| NCTabButton | `0x10005e00` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCTabControl | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCTaiwanIME | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCTestHtmlViewer | `0x100837d0` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCTextBox | `0x10052600` | sim | GetTextExtent×5, SetClip×1, DrawTextToCanvas×1, DrawSpecialDigit×1, DrawTexture×1, ReleaseClip×1 | — |
| NCTextListBox | `0x10033050` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, GetViewportSceneTexture×1, DrawIcon×1, ReleaseClip×1 | — |
| NCTextureCtrl | `0x10053790` | sim | DrawTexture×2, SetClip×1, ReleaseClip×1 | — |
| NCThaiIME | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCThumbButton | `0x10005e00` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCTree | `0x10055580` | sim | SetClip×1, ReleaseClip×1 | — |
| NCTreeCtrl | `0x10055930` | sim | SetClip×1, ReleaseClip×1 | — |
| NCTutorialHtmlViewer | `0x100833e0` | sim | StartTextAnim×1, EndTextAnim×1, SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCVIPShopItemInfoWnd | `0x10184100` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, GetViewportSceneTexture×1, DrawIcon×1, DrawTexture×1 | `%s / %s` `%s :` `X %d` |
| NCVIPShopNeededItemWnd | `0x10183e30` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | `x %d` |
| NCViewportWnd | `0x101aa930` | sim | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCWarningDialogBox | `0x1000fee0` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| NCWarningWnd | `0x1018fc90` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCWnd | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| NCXMLDebugWnd | `0x1001eb60` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NCXMLTree | `0x1006a5e0` | sim | SetClip×1, ReleaseClip×1 | — |
| NCXMLTreeCtrl | `0x1006ab60` | sim | SetClip×1, ReleaseClip×1 | — |
| NCXMasSealWnd | `0x101ac290` | sim | SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| NControl | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| OfflineConfirmDialog | `0x1009e4b0` | sim | DrawTextToCanvas×1, GetTextExtent×1, SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| OptionWnd | `0x100b41e0` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | — |
| RemoveFriendDialog | `0x1009eec0` | sim | DrawTextToCanvas×1, GetTextExtent×1, SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| RemoveGroupDialog | `0x100a0d40` | sim | DrawTextToCanvas×1, GetTextExtent×1, SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| RenameGroupDialog | `0x100a07f0` | sim | DrawTextToCanvas×1, GetTextExtent×1, SetClip×1, DrawTexture×1, ReleaseClip×1 | — |
| StatusWnd | `0x100b3270` | sim | DrawStretchedTex×2, SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawLine×1, DrawTexture×1 | — |
| Task | `0x10059eb0` | herdado de NCWnd | Draw vazio (`return 0/1`): não desenha; só os filhos ou a cena 3D | — |
| TaskBox | `0x10097520` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1, DrawIcon×1 | — |
| TaskWnd | `0x100978f0` | sim | SetClip×1, DrawStretchedTex×1, DrawTexture×1, ReleaseClip×1 | — |
| VersionWnd | `0x100b2aa0` | sim | SetClip×1, DrawTextToCanvas×1, GetTextExtent×1, DrawTexture×1, ReleaseClip×1 | `%s%s` |
