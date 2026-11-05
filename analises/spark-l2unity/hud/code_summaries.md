# Resumo por função (sequência de chamadas nomeadas e literais, extraída de hud/code)


## AbstractEffectWindow__CleanupAllToggleEffects
UnityEngine_UIElements_VisualElement__RemoveAt

## AbstractEffectWindow__HideWindowIfNeeded


## AbstractEffectWindow__OnDestroy
LIT_"'routine is null'" → System_NullReferenceException___ctor → MD_UnityEngine.MonoBehaviour.StopCoroutine → UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException → LIT_"'obj'" → UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException → LIT_"'obj'" → UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException → LIT_"'Coroutines can only be stopped on a MonoBehaviour'" → System_ArgumentException___ctor → MD_UnityEngine.MonoBehaviour.StopCoroutine

## AbstractEffectWindow__UpdateBuffTimers
TI_AbstractEffectWindow.<UpdateBuffTimers>d__24 → Gear__UpdateWeaponType

## AbstractSkillbar__BuildWindow
TI_AbstractSkillbar.<BuildWindow>d__15 → Gear__UpdateWeaponType

## AbstractSkillbar__ChangePage
ArrowInputManipulator__SelectIndex → MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator → MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SkillbarSlot>.Dispose → System_Array__Clear → TI_System.Collections.Generic.List<SkillbarSlot> → MR_System.Collections.Generic.List<SkillbarSlot>..ctor → AbstractSkillbar__CreateSlot

## AbstractSkillbar__CreateSlot
MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item → UnityEngine_UIElements_VisualElement__Clear → TI_L2SlotManager → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → UnityEngine_UIElements_VisualElement__Add → TI_SkillbarSlot → L2DraggableSlot___ctor

## AbstractSkillbar__DeleteShortcut
AbstractSkillbar__CreateSlot → MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item → UnityEngine_UIElements_VisualElement__Clear → TI_L2SlotManager → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → UnityEngine_UIElements_VisualElement__Add → TI_SkillbarSlot → L2DraggableSlot___ctor → MR_System.Collections.Generic.List<SkillbarSlot>.get_Item → System_String__Format → LIT_"'Succesfully deleted slot {0}.'" → UnityEngine_Debug__Log → MR_System.Collections.Generic.List<SkillbarSlot>.get_Item → MR_System.Collections.Generic.List<SkillbarSlot>.Remove → AbstractSkillbar__CreateSlot

## AbstractSkillbar__GetSlotAt
MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator → MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SkillbarSlot>.Dispose → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SkillbarSlot>.Dispose

## AbstractSkillbar__HideBar
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## AbstractSkillbar__ResetShortcuts
MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator → MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SkillbarSlot>.Dispose → System_Array__Clear → TI_System.Collections.Generic.List<SkillbarSlot> → MR_System.Collections.Generic.List<SkillbarSlot>..ctor → AbstractSkillbar__CreateSlot

## AbstractSkillbar__ShowBar
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## AbstractSkillbar__UpdateShortcut
MR_System.Collections.Generic.List<SkillbarSlot>.get_Item → SkillbarSlot__AssignShortcut

## AbstractSkillbar___ctor
Gear__UpdateWeaponType

## ActionSlot__AssignAction
TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'empty'" → ActionNameTable__get_Instance → ActionNameTable__GetAction → UnityEngine_UIElements_VisualElement__get_style → IconTable__get_Instance → IconTable__LoadTextureByName → UnityEngine_UIElements_StyleBackground__op_Implicit → System_Int32__ToString → System_String__Concat → LIT_"'Action '"

## ActionSlot__Dica


## ActionSlot__HandleLeftClick
MR_System.Collections.Generic.Dictionary<ActionType,L2Action>.TryGetValue → GameClientPacketHandler__RequestActionUse

## ActionSlot__Limpa
UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'empty'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → LIT_"''"

## ActionSlot___ctor
L2DraggableSlot___ctor

## ActionWindow__Awake
TI_ActionWindow → UnityEngine_Object__op_Equality → TI_ActionWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## ActionWindow__BuildWindow
TI_ActionWindow.<BuildWindow>d__12 → Gear__UpdateWeaponType

## ActionWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → System_ThrowHelper__ThrowArgumentOutOfRange_IndexException → System_Array__Copy

## ActionWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/ActionWindow/ActionWindow'"

## ActionWindow__Mostra
TI_ActionWindow → MR_System.Collections.Generic.HashSet<int>.Contains → TI_ActionWindow → TI_SparkLojaCristal → UnityEngine_Object__op_Equality → MR_System.Collections.Generic.Dictionary<int,SkillInfo>.get_Values → TI_ActionWindow → UnityEngine_Object__op_Equality → PlayerSkill__get_Todas

## ActionWindow__OnDestroy
TI_ActionWindow

## ActionWindow__ShowWindow
L2PopupWindow__ShowWindow → ActionWindow__PreencheSecao → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## ArrowInputManipulator__ClearInput
LIT_"''"

## ArrowInputManipulator__LoadElements
LIT_"'L2Input'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.TextField> → LIT_"'unity-label'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>

## ArrowInputManipulator__OnLeftArrowClick


## ArrowInputManipulator__OnRightArrowClick


## ArrowInputManipulator__RegisterCallbacksOnTarget
ArrowInputManipulator__LoadElements → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent> → MD_ArrowInputManipulator.OnLeftArrowClick → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent> → MD_ArrowInputManipulator.OnRightArrowClick → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent> → TI_ButtonClickSoundManipulator → UnityEngine_UIElements_MouseManipulator___ctor → UnityEngine_UIElements_Manipulator__set_target → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_ButtonClickSoundManipulator → UnityEngine_UIElements_MouseManipulator___ctor → UnityEngine_UIElements_Manipulator__set_target → TI_UnityEngine.UIElements.IManipulator,lVar4,uVar2,unaff_RDI

## ArrowInputManipulator__ResetInput


## ArrowInputManipulator__SelectIndex
System_String__Format → LIT_"'Trying to select wrong index [{0}] for arrow manipulator.'" → UnityEngine_Debug__LogWarning

## ArrowInputManipulator__UnregisterCallbacksFromTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent> → MD_ArrowInputManipulator.OnLeftArrowClick → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.ClickEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent> → MD_ArrowInputManipulator.OnRightArrowClick → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.ClickEvent> → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## ArrowInputManipulator__UpdateValues
LIT_"''"

## ArrowInputManipulator___ctor
UnityEngine_UIElements_MouseManipulator___ctor

## AutoPotionWindow__AbreLista
TI_AutoPotionWindow.<>c__DisplayClass44_0 → Gear__UpdateWeaponType → TI_SparkAutoPocao → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Equality → AutoPotionWindow__FechaLista → UnityEngine_UIElements_VisualElement__Clear → TI_SparkAutoPocao → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → TI_SparkAutoPocao → MR_System.Collections.Generic.List<int>.GetEnumerator → MR_System.Collections.Generic.List<int>.MoveNext → TI_AutoPotionWindow.<>c__DisplayClass44_1 → Gear__UpdateWeaponType → TI_SparkAutoPocao → SparkAutoPocao__NaBolsa → SparkUI__NomeDoItem → System_Int32__ToString → System_String__Concat → LIT_"'x'" → TI_AutoPotionWindow → AutoPotionWindow__LinhaDeItem → TI_SparkEstilo → SparkEstilo__Marca → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_AutoPotionWindow.__c__DisplayClass44_1._AbreLista_b__0 → UnityEngine_UIElements_VisualElement__Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<int>.Dispose → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'No allowed potion in the inventory'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → TI_SparkAutoPocao → MR_System.Collections.Generic.List<int>.GetEnumerator → MR_System.Collections.Generic.List<int>.MoveNext → TI_SparkAutoPocao → SparkAutoPocao__NaBolsa → SparkUI__NomeDoItem → TI_AutoPotionWindow → AutoPotionWindow__LinhaDeItem → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<int>.Dispose → TI_SparkEstilo → SparkEstilo__Divisor → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Linha → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Clear slot'" → UnityEngine_UIElements_VisualElement__Add → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_AutoPotionWindow.__c__DisplayClass44_0._AbreLista_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_worldBound → UnityEngine_UIElements_VisualElementExtensions__WorldToLocal → UnityEngine_UIElements_VisualElement__get_layout → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Contains → UnityEngine_UIElement

## AutoPotionWindow__Awake
TI_AutoPotionWindow → UnityEngine_Object__op_Equality → TI_AutoPotionWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## AutoPotionWindow__BuildWindow
TI_AutoPotionWindow.<BuildWindow>d__51 → Gear__UpdateWeaponType

## AutoPotionWindow__FechaLista
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MouseOverDetectionManipulator__Disable

## AutoPotionWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## AutoPotionWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkRefinoWindow/SparkRefinoWindow'"

## AutoPotionWindow__MontaBarra
TI_AutoPotionWindow.<>c__DisplayClass36_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_AutoPotionWindow → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkEstilo → SparkEstilo__Borda → SparkEstilo__Espaco → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_MouseOverDetectionManipulator → MouseOverDetectionManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_PlayerPrefs__DeleteKey → LIT_"'spark.ap.x'" → UnityEngine_PlayerPrefs__DeleteKey → LIT_"'spark.ap.y'" → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkEstilo → SparkEstilo__Ponto → UnityEngine_UIElements_VisualElement__Add → TI_AutoPotionWindow.<>c → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_AutoPotionWindow.__c._MontaBarra_b__36_0 → TI_AutoPotionWindow.<>c → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → TI_TooltipManipulator → TooltipManipulator___ctor → LIT_"'Auto potion'" → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → UnityEngine_UIElements_VisualElement__Add → AutoPotionWindow__NovaCasa → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → SparkEstilo__Textura → LIT_"'SkillBar/Buttons/spark_autopot_gear'" → SparkEstilo__Textura → LIT_"'SkillBar/Buttons/spark_autopot_gear_over'" → SparkE

## AutoPotionWindow__MontaLista
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkEstilo → SparkEstilo__Borda → SparkEstilo__Espaco → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_MouseOverDetectionManipulator → MouseOverDetectionManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MouseOverDetectionManipulator__Disable → UnityEngine_UIElements_VisualElement__Add → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_AutoPotionWindow._MontaLista_b__42_0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## AutoPotionWindow__Monta
UnityEngine_Object__op_Inequality → MD_AutoPotionWindow.Reanexa → SkillbarWindow__remove_Girou → L2Window__AddWindow → AutoPotionWindow__MontaBarra → AutoPotionWindow__MontaLista → MD_AutoPotionWindow.Atualiza → TI_SparkAutoPocao → SparkAutoPocao__remove_Mudou → MD_AutoPotionWindow.Atualiza → SparkAutoPocao__add_Mudou → TI_SparkAutoPocao → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MouseOverDetectionManipulator__Disable → AutoPotionWindow__FechaLista → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MouseOverDetectionManipulator__Enable → AutoPotionWindow__DesenhaLuz → AutoPotionWindow__DesenhaCasa → AutoPotionWindow__FechaLista → AutoPotionWindow__AtualizaJanela

## AutoPotionWindow__OnDestroy
TI_AutoPotionWindow → UnityEngine_Object__op_Equality → TI_AutoPotionWindow → MD_AutoPotionWindow.Atualiza → TI_SparkAutoPocao → SparkAutoPocao__remove_Mudou → UnityEngine_Object__op_Inequality → MD_AutoPotionWindow.Reanexa → SkillbarWindow__remove_Girou

## AutoPotionWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → L2GameUI__WindowOpened → TI_SparkAutoPocao → LIT_"'OFF'" → LIT_"'ON'" → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkAutoPocao → LIT_"''" → TI_SparkAutoPocao → System_Int32__ToString → TI_SparkAutoPocao → AutoPotionWindow__AtualizaLinhas

## AutoPotionWindow__ToggleHideWindow
TI_SparkAutoPocao

## BasketSlot__SwapBasket
SMParam___ctor → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → TI_ShopSlotContainer → ShopSlotContainer__AddToBasket → TI_ShopSlotContainer → TI_L2InputAmountWindow → MD_BasketSlot._SwapBasket_b__4_0 → TI_BasketSlot.<>c → MD_BasketSlot.__c._SwapBasket_b__4_1 → TI_BasketSlot.<>c → L2InputAmountWindow__ShowWindow

## BasketSlot___ctor
L2DraggableSlot___ctor → TI_SlotClickSoundManipulator → SlotClickSoundManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator

## BillBoard__LateUpdate
UnityEngine_Component__get_transform → UnityEngine_Camera__get_main → UnityEngine_Component__get_transform → UnityEngine_Transform__get_position → UnityEngine_Transform__LookAt → UnityEngine_Component__get_transform → UnityEngine_Camera__get_main → UnityEngine_Component__get_transform → UnityEngine_Transform__get_forward → UnityEngine_Transform__set_forward

## BlinkingCursorManipulator__RegisterCallbacksOnTarget
MD_BlinkingCursorManipulator._RegisterCallbacksOnTarget_b__2_0

## BlinkingCursorManipulator__UnregisterCallbacksFromTarget


## BlinkingCursorManipulator___ctor
UnityEngine_UIElements_MouseManipulator___ctor

## BoardWindow__Awake
TI_BoardWindow → UnityEngine_Object__op_Equality → TI_BoardWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## BoardWindow__BuildWindow
TI_BoardWindow.<BuildWindow>d__21 → AbstractEffectWindow__UpdateBuffTimers_d__24___ctor

## BoardWindow__Clique
LIT_"'\\\\$(\\\\w+)'" → TI_BoardWindow.<>c__DisplayClass26_0 → SparkMapaWindow_Loja___ctor → LIT_"''" → System_String__Contains → LIT_"'$'" → MD_BoardWindow.__c__DisplayClass26_0._Clique_b__0 → System_Text_RegularExpressions_Regex__Replace → LIT_"'\\\\$(\\\\w+)'" → TI_L2ConfirmWindow → UnityEngine_Object__op_Equality → System_String__Split → System_Int32__TryParse → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.ContainsKey → LIT_"''" → SMParam___ctor → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → SystemMessage__PrintMessage → TI_L2ConfirmWindow → MD_BoardWindow.__c__DisplayClass26_0._Clique_b__1 → TI_BoardWindow.<>c → MD_BoardWindow.__c._Clique_b__26_2 → TI_BoardWindow.<>c → L2ConfirmWindow__ShowWindow → TI_BoardWindow → BoardWindow__Manda

## BoardWindow__Fecha


## BoardWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## BoardWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkRefinoWindow/SparkRefinoWindow'"

## BoardWindow__Mostra
UnityEngine_UIElements_VisualElement__Clear → TI_SparkHtml.Contexto → SparkHtml_Contexto___ctor → MD_BoardWindow.Clique → LIT_"''" → TI_SparkHtml → SparkHtml__Le → SparkHtml__Desenha → UnityEngine_UIElements_ScrollView__set_scrollOffset

## BoardWindow__OnDestroy
TI_BoardWindow → UnityEngine_Object__op_Equality → TI_BoardWindow → MD_BoardWindow.Mostra → TI_SparkBoard → SparkBoard__remove_Pagina → MD_BoardWindow.Fecha → TI_SparkBoard → System_Delegate__Remove → TI_SparkBoard

## BoardWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## BoardWindow__ToggleHideWindow
TI_SparkBoard → TI_SparkPacoteLivre → SparkPacoteLivre__D → SparkPacoteLivre__Fim

## BuffSlot__AddTooltip


## BuffSlot__AltClique
MR_UnityEngine.UIElements.MouseEventBase<UnityEngine.UIElements.MouseDownEvent>.get_altKey → TI_SparkPacoteLivre → SparkPacoteLivre__H → GameClient__get_CurrentPlayerId → SparkPacoteLivre__D → SparkPacoteLivre__H → SparkPacoteLivre__Fim

## BuffSlot__AssignEffect
BuffSlot__CriaBuff → IconTable__get_Instance → IconTable__LoadTextureByName → UnityEngine_Object__op_Inequality → UnityEngine_Texture__set_filterMode → UnityEngine_UIElements_StyleBackground___ctor → UnityEngine_UIElements_VisualElement__get_style

## BuffSlot__ComposeDescription
System_String__Format → LIT_"'$s{0}'" → System_String__Replace

## BuffSlot__CriaBuff
SkillgrpTable__get_Instance → SkillgrpTable__GetSkill → SkillNameTable__get_Instance → SkillNameTable__GetName → SkillNameTable__get_Instance → LIT_"''" → BuffSlot__DescricaoDeOutroNivel → LIT_"''" → System_String__Format → LIT_"'$s{0}'" → System_String__Replace → System_Int32__ToString → System_String__Concat → LIT_"'Skill '" → System_Int32__ToString → System_String__Concat → LIT_"'icon.skill4271_'" → Buff___ctor

## BuffSlot__DescricaoDeOutroNivel
SkillNameTable__get_Instance → SkillNameTable__GetNames → MR_System.Collections.Generic.Dictionary<int,SkillNameData>.GetEnumerator → MR_System.Collections.Generic.Dictionary<int,SkillNameData>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<int,SkillNameData>.Dispose

## BuffSlot__GetRemainingDuration


## BuffSlot__HideRemainingDuration
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Inequality → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## BuffSlot__ShowRemainingDuration
System_Globalization_CultureInfo__get_InvariantCulture → System_Single__ToString → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Inequality → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## BuffSlot__TogglePulse
UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'fade-low'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'fade-high'" → LIT_"'fade-low'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'fade-low'" → LIT_"'fade-high'" → MR_UnityEngine.UIElements.ObjectListPool<string>.Get → MR_System.Collections.Generic.List<string>.Contains → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → MR_System.Collections.Generic.List<string>.set_Capacity → MR_System.Collections.Generic.List<string>.Add

## BuffSlot__UpdateRemainingDuration
UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'fade-low'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'fade-high'" → LIT_"'fade-low'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'fade-low'" → LIT_"'fade-high'" → UnityEngine_UIElements_VisualElement__AddToClassList → System_Globalization_CultureInfo__get_InvariantCulture → System_Single__ToString → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Inequality → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Inequality → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## BuffSlot___ctor
L2Slot___ctor → LIT_"'Duration'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_BuffSlot.AltClique → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## BuffWindow__Awake
TI_BuffWindow → UnityEngine_Object__op_Equality → TI_BuffWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## BuffWindow__BuildWindow
TI_BuffWindow.<BuildWindow>d__8 → Gear__UpdateWeaponType

## BuffWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/BuffWindow/BuffWindow'"

## BuffWindow__OnDestroy
TI_BuffWindow

## ButtonClickSoundManipulator__MouseDownHandler
LIT_"'click_01'" → System_String__Concat → LIT_"'event:/InterfaceSound/'" → FMODUnity_RuntimeManager__PathToEventReference → SparkSons__get_Instance → SparkSons__TocaInterface → UnityEngine_Debug__LogWarning → LIT_"'Trying to play a null EventReference sound.'" → FMODUnity_RuntimeManager__PlayOneShot

## ButtonClickSoundManipulator__RegisterCallbacksOnTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_ButtonClickSoundManipulator.MouseDownHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## ButtonClickSoundManipulator__UnregisterCallbacksFromTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_ButtonClickSoundManipulator.MouseDownHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.MouseDownEvent> → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## CameraController__Awake
UnityEngine_Object__op_Equality → UnityEngine_Object__Destroy → MR_UnityEngine.Component.GetComponent<UnityEngine.Camera>

## CameraController__ClampAngle


## CameraController__DistanciaLivre
UnityEngine_Object__op_Equality → UnityEngine_Camera__get_nearClipPlane → UnityEngine_Camera__get_fieldOfView → UnityEngine_Camera__get_aspect → UnityEngine_Quaternion__op_Multiply → UnityEngine_Physics__SphereCast

## CameraController__IsObjectVisible
CameraCollisionDetection__GetCameraViewPortPoints → UnityEngine_Transform__get_position → UnityEngine_Physics__Linecast → UnityEngine_Transform__get_position → UnityEngine_Camera__WorldToViewportPoint

## CameraController__LateUpdate
UnityEngine_Object__op_Inequality → LIT_"'Mouse X'" → LIT_"'Mouse Y'" → TI_SparkOpcoes → UnityEngine_Quaternion__Internal_FromEulerRad → UnityEngine_Component__get_transform → UnityEngine_Transform__set_rotation → UnityEngine_Transform__get_position → TI_SparkMontaria → SparkMontaria__AlturaDaCamera → UnityEngine_Transform__get_position → CameraController__DistanciaLivre → UnityEngine_Quaternion__op_Multiply → UnityEngine_Component__get_transform → SparkTremor__Deslocamento → UnityEngine_Transform__set_position

## CameraController__OnDestroy


## CameraController__SetMask
UnityEngine_LayerMask__NameToLayer → LIT_"'Brush'"

## CameraController__SetTarget
UnityEngine_GameObject__get_transform → UnityEngine_Component__get_transform → MD_CameraController.__c._SetTarget_b__42_0 → TransformUtils__FindRecursive → UnityEngine_Transform__get_position → Gear__UpdateWeaponType → CameraController__UpdatePosition → UnityEngine_Component__get_transform → UnityEngine_Transform__set_position

## CameraController__Start


## CameraController__UpdateInputs
LIT_"'Mouse X'" → LIT_"'Mouse Y'" → TI_SparkOpcoes

## CameraController__UpdatePosition
UnityEngine_Quaternion__Internal_FromEulerRad → UnityEngine_Component__get_transform → UnityEngine_Transform__set_rotation → UnityEngine_Transform__get_position → TI_SparkMontaria → SparkMontaria__AlturaDaCamera → UnityEngine_Transform__get_position → CameraController__DistanciaLivre → UnityEngine_Quaternion__op_Multiply → UnityEngine_Component__get_transform → SparkTremor__Deslocamento → UnityEngine_Transform__set_position

## CameraController__UpdateZoom
TI_SparkOpcoes

## CameraController__Update
UnityEngine_Object__op_Inequality → TI_SparkOpcoes

## CameraController___ctor


## CharCreationWindow__Awake
TI_CharCreationWindow → UnityEngine_Object__op_Equality → TI_CharCreationWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## CharCreationWindow__BuildWindow
TI_CharCreationWindow.<BuildWindow>d__18 → Gear__UpdateWeaponType

## CharCreationWindow__CreateButtonPressed
TI_L2ConfirmWindow → TI_CharCreationWindow.<>c → MD_CharCreationWindow.__c._CreateButtonPressed_b__20_0 → TI_CharCreationWindow.<>c → L2ConfirmWindow__ShowWindow → CharacterCreator__ValidateCharacterCreation

## CharCreationWindow__HideRotatePawnWindow
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## CharCreationWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Login/CharCreationWindow/CharCreationW..."

## CharCreationWindow__OnDestroy
TI_CharCreationWindow

## CharCreationWindow__PreviousButtonPressed
CharCreationWindow__ClearInputs → TI_GameEvent → System_Enum__ToString → System_String__Concat → LIT_"'[GameStateMachine][EVENT] '" → UnityEngine_Debug__Log

## CharCreationWindow__ShowRotatePawnWindow
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'toggle'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'toggle'"

## CharCreationWindow__ShowWindow
L2Window__ShowWindow → ArrowInputManipulator__ClearInput → LIT_"''" → CharacterCreator__GarantePawns → UnityEngine_Object__op_Inequality → UnityEngine_Object__Destroy → CharacterCreator__SpawnCharacterCreationPawn

## CharCreationWindow__ToggleZoomin
UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'toggle'" → LoginCameraManager__ZoomOut → LIT_"'toggle'" → MR_System.Collections.Generic.List<string>.Remove → MR_UnityEngine.UIElements.ObjectListPool<string>.Release → LoginCameraManager__ZoomIn → LIT_"'toggle'" → MR_UnityEngine.UIElements.ObjectListPool<string>.Get → MR_System.Collections.Generic.List<string>.Contains → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → MR_System.Collections.Generic.List<string>.set_Capacity → MR_System.Collections.Generic.List<string>.Add

## CharSelectWindow__Awake
TI_CharSelectWindow → UnityEngine_Object__op_Equality → TI_CharSelectWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## CharSelectWindow__BuildWindow
TI_CharSelectWindow.<BuildWindow>d__23 → Gear__UpdateWeaponType

## CharSelectWindow__CreatePressed
TI_L2ConfirmWindow → System_Enum__ToString → System_String__Concat → LIT_"'[GameStateMachine][STATE] '" → UnityEngine_Debug__Log → GameManager__InitializeState

## CharSelectWindow__DeletePressed
SystemMessageTable__get_Instance → SystemMessageTable__GetSystemMessage → System_String__Replace → LIT_"'$s1'" → TI_L2ConfirmWindow → MD_CharacterSelector._DeleteCharacter_b__31_0 → MD_CharacterSelector.__c._DeleteCharacter_b__31_1 → L2ConfirmWindow__ShowWindow

## CharSelectWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Login/CharSelectWindow/CharSelectWindow'"

## CharSelectWindow__OnDestroy
TI_CharSelectWindow

## CharSelectWindow__ReLoginPressed
TI_L2ConfirmWindow → UnityEngine_Debug__Log → LIT_"'Disconnect'" → System_Threading_CancellationTokenSource__Cancel → ServerPacketHandler__CancelTokens → System_Net_Sockets_Socket__Shutdown → System_Net_Sockets_Socket__Close → System_Threading_CancellationTokenSource__Cancel → AsynchronousClient__ClientCleanup → UnityEngine_Debug__Log → LIT_"'Disconnect'" → TI_EventProcessor → UnityEngine_Object__op_Inequality → TI_EventProcessor → MD_AsynchronousClient._Disconnect_b__23_0 → EventProcessor__QueueEvent → TI_GameEvent → System_Enum__ToString → System_String__Concat → LIT_"'[GameStateMachine][EVENT] '" → UnityEngine_Debug__Log

## CharSelectWindow__SelectSlot
LIT_"'0'" → LIT_"'??'" → LIT_"'0/0'" → LIT_"'0.00%'" → LIT_"'0'" → ArrowInputManipulator__ClearInput → MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item → System_Int32__ToString → MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item → System_Enum__ToString → MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item → System_String__Format → LIT_"'{0}/{1}'" → MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item → System_String__Format → LIT_"'{0}/{1}'" → MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item → System_Single__ToString → LIT_"'0.00'" → System_String__Concat → LIT_"'%'" → MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item → System_Int32__ToString → MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item → System_Int32__ToString → TI_CharSelectWindow.<UpdateBars>d__26 → Gear__UpdateWeaponType → UnityEngine_MonoBehaviour__StartCoroutine → ArrowInputManipulator__SelectIndex

## CharSelectWindow__ShowWindow
L2Window__ShowWindow → TI_CharSelectWindow.<AutoLogin>d__32 → Gear__UpdateWeaponType → UnityEngine_MonoBehaviour__StartCoroutine

## CharSelectWindow__StartGamePressed
TI_L2ConfirmWindow → MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item → AudioManager__PlayUISound → LIT_"'game_start'" → RequestCharSelectPacket___ctor → LIT_"'Please select a character'"

## CharSelectWindow__UpdateBars
TI_CharSelectWindow.<UpdateBars>d__26 → Gear__UpdateWeaponType

## CharSelectWindow__Update
UnityEngine_Input__GetKeyDown → AudioManager__PlayUISound → LIT_"'click_01'" → TI_L2ConfirmWindow → MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item → AudioManager__PlayUISound → LIT_"'game_start'" → RequestCharSelectPacket___ctor → LIT_"'Please select a character'" → AudioManager__PlayUISound → LIT_"'click_01'" → TI_L2ConfirmWindow → TI_GameEvent → System_Enum__ToString → System_String__Concat → LIT_"'[GameStateMachine][EVENT] '" → UnityEngine_Debug__Log → LIT_"'Disconnect'" → System_Threading_CancellationTokenSource__Cancel → ServerPacketHandler__CancelTokens → System_Net_Sockets_Socket__Shutdown → System_Net_Sockets_Socket__Close → System_Threading_CancellationTokenSource__Cancel → AsynchronousClient__ClientCleanup → UnityEngine_Debug__Log → LIT_"'Disconnect'" → TI_EventProcessor → UnityEngine_Object__op_Inequality → TI_EventProcessor → MD_AsynchronousClient._Disconnect_b__23_0 → EventProcessor__QueueEvent

## CharacterInfoWindow__Awake
TI_CharacterInfoWindow → UnityEngine_Object__op_Equality → TI_CharacterInfoWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## CharacterInfoWindow__BuildWindow
TI_CharacterInfoWindow.<BuildWindow>d__51 → Gear__UpdateWeaponType

## CharacterInfoWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'charstat_close_01'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → System_ThrowHelper__ThrowArgumentOutOfRange_IndexException → System_Array__Copy

## CharacterInfoWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/CharacterInfoWindow/CharacterInfo..."

## CharacterInfoWindow__OnDestroy
TI_CharacterInfoWindow

## CharacterInfoWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'charstat_open_01'" → L2GameUI__WindowOpened → UnityEngine_Object__op_Equality → LIT_"\" → TI_CharacterInfoWindow.<UpdateWithDelay>d__53 → Gear__UpdateWeaponType → LIT_"'routine is null'" → System_NullReferenceException___ctor → MD_UnityEngine.MonoBehaviour.StartCoroutine → UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException → LIT_"'obj'" → UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException → LIT_"'obj'" → UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException → LIT_"'Coroutines can only be stopped on a MonoBehaviour'" → System_ArgumentException___ctor → MD_UnityEngine.MonoBehaviour.StartCoroutine

## CharacterInfoWindow__UpdateBars
System_String__Format → LIT_"'{0}/{1}'" → System_String__Format → LIT_"'{0}/{1}'" → System_String__Format → LIT_"'{0}/{1}'" → System_Int32__ToString → System_Single__ToString → LIT_"'0.00'" → System_String__Concat → LIT_"'%'" → LIT_"'00.00%'" → System_Single__ToString → LIT_"'0.00'" → System_String__Concat → LIT_"'%'" → UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_resolvedStyle → System_Int32__ToString → System_String__Concat → LIT_"'weight-'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → System_Int32__ToString → System_String__Concat → LIT_"'weight-'" → UnityEngine_UIElements_VisualElement__AddToClassList → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## CharacterInfoWindow__UpdateCombatValues
System_Int32__ToString → CharacterInfoWindow__Porcentagem → System_Int32__ToString → CharacterInfoWindow__Porcentagem → System_Int32__ToString

## CharacterInfoWindow__UpdatePlayer
System_Enum__ToString → System_Int32__ToString

## CharacterInfoWindow__UpdateSocial
System_Int32__ToString → System_String__Format → LIT_"'{0} / {1}'" → LIT_"'0 / 0'" → LIT_"'0'"

## CharacterInfoWindow__UpdateStats
System_Byte__ToString

## CharacterInfoWindow__UpdateValues
UnityEngine_Object__op_Equality → LIT_"\" → TI_CharacterInfoWindow.<UpdateWithDelay>d__53 → Gear__UpdateWeaponType → LIT_"'routine is null'" → System_NullReferenceException___ctor → MD_UnityEngine.MonoBehaviour.StartCoroutine → UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException → LIT_"'obj'" → UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException → LIT_"'obj'" → UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException → LIT_"'Coroutines can only be stopped on a MonoBehaviour'" → System_ArgumentException___ctor → MD_UnityEngine.MonoBehaviour.StartCoroutine

## CharacterInfoWindow__UpdateWithDelay
TI_CharacterInfoWindow.<UpdateWithDelay>d__53 → Gear__UpdateWeaponType

## CharacterInfoWindow__Update
UnityEngine_Object__op_Inequality → SparkPiscaHp__Atualiza

## CharacterSelector__Awake
UnityEngine_Object__op_Equality → UnityEngine_Object__op_Inequality → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## CharacterSelector__ConfirmSelection
MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item → AudioManager__PlayUISound → LIT_"'game_start'" → RequestCharSelectPacket___ctor → LIT_"'Please select a character'"

## CharacterSelector__SelectCharacter
Gear__UpdateWeaponType → MR_System.Collections.Generic.List<UnityEngine.GameObject>.get_Item → MR_UnityEngine.GameObject.GetComponent<SelectableCharacterEntity> → MR_System.Collections.Generic.List<Logongrp>.get_Item → SelectableCharacterEntity__SetDestination → MR_System.Collections.Generic.List<UnityEngine.GameObject>.get_Item → MR_UnityEngine.GameObject.GetComponent<SelectableCharacterEntity> → MR_System.Collections.Generic.List<Logongrp>.get_Item → SelectableCharacterEntity__SetDestination → MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Item → TI_CharSelectWindow → CharSelectWindow__SelectSlot → TI_CharSelectWindow → MD_CharacterSelector.__c__DisplayClass28_0._SelectCharacter_b__0 → MD_CharacterSelector.__c__DisplayClass28_0._SelectCharacter_b__1 → L2ConfirmWindow__ShowWindow

## CharacterSelector__SelectDefaultCharacter
System_Int32__ToString → System_String__Concat → LIT_"'Selecting default slot '" → UnityEngine_Debug__Log → CharacterSelector__SelectCharacter

## CharacterSelector__Update
UnityEngine_Object__op_Equality → UnityEngine_Input__get_mousePosition → UnityEngine_Camera__ScreenPointToRay → UnityEngine_Physics__Raycast → UnityEngine_RaycastHit__get_collider → UnityEngine_Component__get_gameObject → UnityEngine_GameObject__get_layer → UnityEngine_RaycastHit__get_transform → UnityEngine_Transform__GetParent → MR_UnityEngine.Component.GetComponent<SelectableCharacterEntity> → CharacterSelector__SelectCharacter

## ChatTab__AddMessage
System_String__Concat → LIT_"'\\r\\n'" → System_String__Concat → TI_ChatWindow → System_String__IndexOf → LIT_"'\\r\\n'" → System_String__Substring → TI_ChatWindow

## ChatTab__ConcatMessage
System_String__Concat → LIT_"'\\r\\n'" → System_String__Concat → TI_ChatWindow → System_String__IndexOf → LIT_"'\\r\\n'" → System_String__Substring → TI_ChatWindow

## ChatTab__Initialize
L2Tab__Initialize → LIT_"'Content'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → LIT_"''" → L2Scrollable___ctor

## ChatTab__OnTabHeaderClicked
UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'unselected-tab'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'active'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'unselected-tab'" → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'active'" → AudioManager__PlayUISound → LIT_"'window_open'"

## ChatTab___ctor
LIT_"'Tab'"

## ChatWindow_BordaDoSistema__Desce
UnityEngine_UIElements_VisualElement__get_layout → UnityEngine_UIElements_PointerCaptureHelper__CapturePointer

## ChatWindow_BordaDoSistema__Move
UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## ChatWindow_BordaDoSistema__RegisterCallbacksOnTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_ChatWindow.BordaDoSistema.Desce → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent> → MD_ChatWindow.BordaDoSistema.Move → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerMoveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent> → MD_ChatWindow.BordaDoSistema.Sobe → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## ChatWindow_BordaDoSistema__Sobe
UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture → UnityEngine_UIElements_PointerCaptureHelper__ReleasePointer → UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_PlayerPrefs__SetInt → LIT_"'spark_sysmsg_h'"

## ChatWindow_BordaDoSistema__UnregisterCallbacksFromTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_ChatWindow.BordaDoSistema.Desce → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent> → MD_ChatWindow.BordaDoSistema.Move → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerMoveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent> → MD_ChatWindow.BordaDoSistema.Sobe → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerUpEvent> → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## ChatWindow_BordaDoSistema___ctor
UnityEngine_UIElements_MouseManipulator___ctor

## ChatWindow_CantoDoChat__Desce
UnityEngine_UIElements_VisualElement__get_layout → UnityEngine_UIElements_PointerCaptureHelper__CapturePointer

## ChatWindow_CantoDoChat__Move
UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## ChatWindow_CantoDoChat__RegisterCallbacksOnTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_ChatWindow.CantoDoChat.Desce → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent> → MD_ChatWindow.CantoDoChat.Move → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerMoveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent> → MD_ChatWindow.CantoDoChat.Sobe → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## ChatWindow_CantoDoChat__Sobe
UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture → UnityEngine_UIElements_PointerCaptureHelper__ReleasePointer → UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_PlayerPrefs__SetInt → LIT_"'spark_chat_w'" → UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_PlayerPrefs__SetInt → LIT_"'spark_chat_h'"

## ChatWindow_CantoDoChat__UnregisterCallbacksFromTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_ChatWindow.CantoDoChat.Desce → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent> → MD_ChatWindow.CantoDoChat.Move → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerMoveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent> → MD_ChatWindow.CantoDoChat.Sobe → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerUpEvent> → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## ChatWindow__AbreMenuDaAba
TI_ChatWindow.<>c__DisplayClass56_0 → Gear__UpdateWeaponType → ChatWindow__FechaMenuDaAba → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkEstilo → SparkEstilo__Borda → SparkEstilo__Espaco → TI_SparkChatFiltro → SparkChatFiltro__Casa → TI_SparkChatFiltro → TI_ChatWindow.<>c__DisplayClass56_1 → Gear__UpdateWeaponType → TI_SparkChatFiltro → UnityEngine_UIElements_Label___ctor → TI_ChatWindow → ChatWindow__Fonte → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent> → MD_ChatWindow.__c__DisplayClass56_1._AbreMenuDaAba_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent> → MD_ChatWindow.__c__DisplayClass56_1._AbreMenuDaAba_b__2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_ChatWindow.__c__DisplayClass56_1._AbreMenuDaAba_b__3 → UnityEngine_UIElements_VisualElement__Add → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_ChatWindow.__c__DisplayClass56_0._AbreMenuDaAba_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>

## ChatWindow__AceitaSugestao
MR_System.Collections.Generic.List<string>.get_Item → ChatWindow__PoeTell

## ChatWindow__Adiciona
TI_ChatWindow.<>c__DisplayClass67_0 → Gear__UpdateWeaponType → ChatWindow__Segue → UnityEngine_UIElements_Label___ctor → UnityEngine_UIElements_TextElement__set_enableRichText → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_ChatWindow → ChatWindow__Fonte → UnityEngine_UIElements_VisualElement__set_pickingMode → System_String__Contains → LIT_"'<link=\" → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.Experimental.PointerOverLinkTagEvent> → MD_ChatWindow.__c__DisplayClass67_0._Adiciona_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.Experimental.PointerOverLinkTagEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.Experimental.PointerOutLinkTagEvent> → MD_ChatWindow.__c__DisplayClass67_0._Adiciona_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.Experimental.PointerOutLinkTagEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerLeaveEvent> → MD_ChatWindow.__c__DisplayClass67_0._Adiciona_b__2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerLeaveEvent> → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_childCount → TI_ChatWindow → ChatWindow__RolaParaBaixo → UnityEngine_UIElements_VisualElement__RemoveAt

## ChatWindow__AlturaDoSistema
UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_PlayerPrefs__SetInt → LIT_"'spark_sysmsg_h'"

## ChatWindow__AplicaFonte
UnityEngine_UIElements_VisualElement__Children → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Children → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## ChatWindow__AplicaFundo
TI_SparkOpcoes → UnityEngine_UIElements_VisualElement__get_style → TI_SparkArte → LIT_"'Data/UI/Assets/SparkChat/ChatWndBg'" → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit

## ChatWindow__AplicaJanelaDeSistema
UnityEngine_UIElements_VisualElement__get_style → TI_SparkChatFiltro → SparkChatFiltro__Carrega → TI_SparkChatFiltro → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## ChatWindow__AtualizaTell
System_Array__Clear → TI_ChatWindow → System_String__get_Chars → TI_ChatWindow → MR_System.Collections.Generic.List<string>.GetEnumerator → MR_System.Collections.Generic.List<string>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<string>.Dispose → System_String__StartsWith → MR_System.Collections.Generic.List<string>.Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<string>.Dispose → System_String__Substring → ChatWindow__PintaSugestoes

## ChatWindow__Awake
TI_ChatWindow → UnityEngine_Object__op_Equality → TI_ChatWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## ChatWindow__Botao
TI_ChatWindow.<>c__DisplayClass116_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → System_String__Concat → LIT_"'Data/UI/Assets/SparkChat/'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_UIElements_StyleBackground__op_Implicit → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent> → MD_ChatWindow.__c__DisplayClass116_0._Botao_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent> → MD_ChatWindow.__c__DisplayClass116_0._Botao_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_ChatWindow.__c__DisplayClass116_0._Botao_b__2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent> → MD_ChatWindow.__c__DisplayClass116_0._Botao_b__3 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>

## ChatWindow__BuildWindow
TI_ChatWindow.<BuildWindow>d__43 → Gear__UpdateWeaponType

## ChatWindow__CalculaViraTexto
TI_SparkOpcoes → TI_SparkTeclas → SparkTeclas__get_Trocando → TI_SparkObservador → UnityEngine_Object__op_Equality → UnityEngine_UIElements_FocusController__get_focusedElement → UnityEngine_UIElements_VisualElement__Contains → MR_UnityEngine.UIElements.VisualElement.GetFirstAncestorOfType<UnityEngine.UIElements.TextField> → UnityEngine_InputSystem_Controls_ButtonControl__get_isPressed → TI_ChatWindow → UnityEngine_InputSystem_Keyboard__get_Item → UnityEngine_InputSystem_Controls_ButtonControl__get_wasPressedThisFrame

## ChatWindow__CampoDoChatComFoco
UnityEngine_UIElements_FocusController__get_focusedElement → UnityEngine_UIElements_VisualElement_Hierarchy__get_parent

## ChatWindow__ClearChat
UnityEngine_UIElements_VisualElement__Clear → System_Array__Clear

## ChatWindow__CloseChat
L2UI__BlurFocus → MR_UnityEngine.UIElements.TextInputBaseField<string>.get_text → ChatWindow__SendChatMessage → MR_UnityEngine.UIElements.TextInputBaseField<string>.get_text → MR_System.Collections.Generic.List<string>.Add → TI_ChatWindow → MR_System.Collections.Generic.List<string>.RemoveAt → LIT_"''"

## ChatWindow__ComecaCom
LIT_"''" → TI_ChatWindow.<OpenChat>d__73 → Gear__UpdateWeaponType → UnityEngine_MonoBehaviour__StartCoroutine → MD_ChatWindow._ComecaCom_b__89_0

## ChatWindow__CorDoTipo
LIT_"'FF7200'" → LIT_"'FF00FF'" → LIT_"'00FF00'" → LIT_"'7D77FF'" → LIT_"'80FFFF'" → LIT_"'DCDCDC'" → LIT_"'EAA5F5'" → LIT_"'77FF99'" → LIT_"'FFF8B2'" → LIT_"'FF9695'" → LIT_"'408CFF'" → LIT_"'00FFFF'"

## ChatWindow__CursorNoFim
MR_UnityEngine.UIElements.TextInputBaseField<string>.set_cursorIndex → MR_UnityEngine.UIElements.TextInputBaseField<string>.set_selectIndex → MD_ChatWindow._CursorNoFim_b__88_0

## ChatWindow__Distribui
Animancer_ControllerState_ParameterID___ctor → MR_System.Collections.Generic.KeyValuePair<string,int>..ctor → MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<string,int>>.Add → MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<string,int>>.RemoveRange → TI_SparkChatFiltro → SparkChatFiltro__Carrega → TI_SparkChatFiltro → SparkChatFiltro__Mostra → ChatWindow__Adiciona

## ChatWindow__Escapa
LIT_"'<noparse><</noparse>'" → LIT_"'<'" → LIT_"''" → LIT_"'<noparse><</noparse>'" → LIT_"'oldValue'" → System_ArgumentNullException___ctor → MD_System.String.Replace → LIT_"'oldValue'" → LIT_"'String cannot be of zero length.'" → System_ArgumentException___ctor → MD_System.String.Replace → MR_System.Collections.Generic.ValueListBuilder<int>..ctor → System_String__get_Chars → MR_System.Collections.Generic.ValueListBuilder<int>.Append → MR_System.Collections.Generic.ValueListBuilder<int>.AsSpan → System_String__ReplaceHelper → MR_System.Collections.Generic.ValueListBuilder<int>.Dispose

## ChatWindow__EscondeSugestoes
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## ChatWindow__Fatia
UnityEngine_UIElements_VisualElement__get_style

## ChatWindow__FechaMenuDaAba
MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerDownEvent>

## ChatWindow__FiltroMudou
TI_SparkChatFiltro → SparkChatFiltro__Carrega → TI_SparkChatFiltro → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → TI_SparkChatFiltro → System_String__op_Inequality → TI_SparkChatFiltro → ChatWindow__Remonta → ChatWindow__AplicaJanelaDeSistema

## ChatWindow__Fonte
UnityEngine_UIElements_VisualElement__get_style → TI_SparkArte → LIT_"'Data/UI/Assets/Font/tahoma'" → MR_SparkArte.Load<UnityEngine.Font> → UnityEngine_UIElements_StyleFontDefinition___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## ChatWindow__IndiceTell
TI_ChatWindow → MR_System.Collections.Generic.List<string>.get_Item → System_String__Equals

## ChatWindow__InsereLink
TI_ChatWindow.<>c__DisplayClass102_0 → Gear__UpdateWeaponType → LIT_"''" → MR_UnityEngine.UIElements.TextInputBaseField<string>.get_cursorIndex → MR_UnityEngine.UIElements.TextInputBaseField<string>.get_maxLength → System_String__Insert → ChatWindow__OpenChat → UnityEngine_MonoBehaviour__StartCoroutine → MD_ChatWindow.__c__DisplayClass102_0._InsereLink_b__0

## ChatWindow__Lista
UnityEngine_UIElements_ScrollView___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility → UnityEngine_UIElements_ScrollView__set_verticalScrollerVisibility → UnityEngine_UIElements_ScrollView__set_mouseWheelScrollSize → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_SparkArte → LIT_"'Data/UI/_Elements/Components/L2ScrollView/L2Scrollview'" → MR_SparkArte.Load<UnityEngine.UIElements.StyleSheet> → UnityEngine_Object__op_Inequality → UnityEngine_UIElements_VisualElement__get_styleSheets → UnityEngine_UIElements_VisualElementStyleSheetSet__Add → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'l2-scroll-view'"

## ChatWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkChat/SparkChat'"

## ChatWindow__MontaChat
UnityEngine_PlayerPrefs__GetInt → LIT_"'spark_chat_w'" → UnityEngine_PlayerPrefs__GetInt → LIT_"'spark_chat_h'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkArte → LIT_"'Data/UI/Assets/SparkChat/ChatWndBg'" → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_ChatWindow → ChatWindow__Lista → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → TI_ChatWindow.<>c__DisplayClass49_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → TI_ChatWindow → UnityEngine_UIElements_VisualElement__get_style → TI_SparkChatFiltro → SparkChatFiltro__Carrega → TI_SparkChatFiltro → UnityEngine_UIElements_Label___ctor → ChatWindow__Fonte → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_Visual

## ChatWindow__MontaSistema
UnityEngine_PlayerPrefs__GetInt → LIT_"'spark_sysmsg_h'" → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkArte → LIT_"'Data/UI/Assets/SparkChat/ChatWndBg'" → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_ChatWindow → ChatWindow__Lista → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MD_ChatWindow._MontaSistema_b__50_0 → ChatWindow__Botao → LIT_"'UpBTN_nomal'" → LIT_"'UpBTN_down'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → MD_ChatWindow._MontaSistema_b__50_1 → ChatWindow__Botao → LIT_"'DownBTN_nomal'" → LIT_"'DownBTN_down'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → 

## ChatWindow__MontaTeclasDeTexto
MR_System.Collections.Generic.List<UnityEngine.InputSystem.Key>..ctor → MR_System.Collections.Generic.List<UnityEngine.InputSystem.Key>.Add → MR_System.Collections.Generic.List<UnityEngine.InputSystem.Key>.ToArray → System_Array__Copy → MR_System.Collections.Generic.List<UnityEngine.InputSystem.Key>.ToArray

## ChatWindow__NomeDoTell
System_String__get_Chars → System_String__Substring

## ChatWindow__OnDestroy
TI_ChatWindow

## ChatWindow__OpenChat
TI_ChatWindow.<OpenChat>d__73 → Gear__UpdateWeaponType

## ChatWindow__OutroCampoComFoco
UnityEngine_UIElements_FocusController__get_focusedElement → UnityEngine_UIElements_VisualElement__Contains → MR_UnityEngine.UIElements.VisualElement.GetFirstAncestorOfType<UnityEngine.UIElements.TextField>

## ChatWindow__OuveTexto
MD_ChatWindow.TextoDigitado → UnityEngine_InputSystem_Keyboard__remove_onTextInput → MD_ChatWindow.TextoDigitado → UnityEngine_InputSystem_Keyboard__add_onTextInput

## ChatWindow__Peca
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → System_String__Concat → LIT_"'Data/UI/Assets/SparkChat/'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_UIElements_StyleBackground__op_Implicit

## ChatWindow__PintaAba
UnityEngine_UIElements_VisualElement__get_style → LIT_"'ChatTabSelectNomal'" → LIT_"'ChatTabNomal'" → System_String__Concat → LIT_"'Data/UI/Assets/SparkChat/'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_UIElements_StyleBackground__op_Implicit → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit

## ChatWindow__PintaSugestoes
UnityEngine_UIElements_VisualElement__Clear → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → MR_System.Collections.Generic.List<string>.get_Item → UnityEngine_UIElements_Label___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_ChatWindow → ChatWindow__Fonte → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_Label___ctor → LIT_"'Tab'" → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_ChatWindow → ChatWindow__Fonte → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## ChatWindow__PoeTell
System_String__Concat → LIT_"'\" → LIT_"' '" → ChatWindow__AtualizaTell → MR_UnityEngine.UIElements.TextInputBaseField<string>.set_cursorIndex → MR_UnityEngine.UIElements.TextInputBaseField<string>.set_selectIndex → MD_ChatWindow._CursorNoFim_b__88_0

## ChatWindow__ReceiveChatMessage
SparkFindWindow__Escondida → LIT_"''" → TI_ChatWindow → LIT_"''" → System_String__Replace → LIT_"'<'" → LIT_"'<noparse><</noparse>'" → System_String__Concat → LIT_"': '" → LIT_"'Announcement: '" → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkAvisoNaTela → SparkAvisoNaTela__Mostra → LIT_"'<color=#'" → TI_ChatWindow → LIT_"'FF7200'" → LIT_"'FF00FF'" → LIT_"'00FF00'" → LIT_"'7D77FF'" → LIT_"'80FFFF'" → LIT_"'DCDCDC'" → LIT_"'EAA5F5'" → LIT_"'77FF99'" → LIT_"'FFF8B2'" → LIT_"'FF9695'" → LIT_"'408CFF'" → LIT_"'00FFFF'" → LIT_"'>'" → MD_ChatWindow.Escapa → TI_SparkLinkItem → SparkLinkItem__ParaChat → LIT_"'</color>'" → System_String__Concat → System_String__StartsWith → LIT_"'->'" → TI_SparkChatFiltro → ChatWindow__Distribui → ChatWindow__Adiciona → System_String__StartsWith → LIT_"'->'" → ChatWindow__RegistraTell

## ChatWindow__ReceiveSystemMessage
ChatWindow__Adiciona → TI_SparkChatFiltro → MR_System.Collections.Generic.HashSet<int>.Contains → TI_SparkChatFiltro → MR_System.Collections.Generic.HashSet<int>.Contains → TI_SparkChatFiltro → MR_System.Collections.Generic.HashSet<int>.Contains → TI_SparkChatFiltro → MR_System.Collections.Generic.HashSet<int>.Contains → TI_SparkChatFiltro → MR_System.Collections.Generic.HashSet<int>.Contains → ChatWindow__Distribui

## ChatWindow__RegistraTell
TI_ChatWindow → ChatWindow__IndiceTell → TI_ChatWindow → MR_System.Collections.Generic.List<string>.RemoveAt → TI_ChatWindow → MR_System.Collections.Generic.List<string>.Insert → TI_ChatWindow → MR_System.Collections.Generic.List<string>.RemoveRange → ChatWindow__AtualizaTell

## ChatWindow__Remonta
UnityEngine_UIElements_VisualElement__Clear → TI_SparkChatFiltro → SparkChatFiltro__Casa → MR_System.Collections.Generic.List<string>..ctor → TI_ChatWindow → MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<string,int>>.get_Item → TI_SparkChatFiltro → SparkChatFiltro__Mostra → MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<string,int>>.get_Item → MR_System.Collections.Generic.List<string>.Add → MR_System.Collections.Generic.List<string>.get_Item → ChatWindow__Adiciona → TI_ChatWindow.<>c__DisplayClass113_0 → Gear__UpdateWeaponType → MD_ChatWindow.__c__DisplayClass113_0._RolaParaBaixo_b__0

## ChatWindow__RolaParaBaixo
TI_ChatWindow.<>c__DisplayClass113_0 → Gear__UpdateWeaponType → MD_ChatWindow.__c__DisplayClass113_0._RolaParaBaixo_b__0

## ChatWindow__Segue
TI_ChatWindow.<>c__DisplayClass66_0 → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<UnityEngine.UIElements.ScrollView,bool>.TryGetValue → MR_System.Collections.Generic.Dictionary<UnityEngine.UIElements.ScrollView,bool>.set_Item → MD_ChatWindow.__c__DisplayClass66_0._Segue_b__0 → UnityEngine_UIElements_Scroller__add_valueChanged → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent> → MD_ChatWindow.__c__DisplayClass66_0._Segue_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.GeometryChangedEvent>

## ChatWindow__SendChatMessage
Gear__UpdateWeaponType → ChatWindow__ReceiveChatMessage → System_String__StartsWith → LIT_"'//'" → TI_SparkBotsArma → SparkBotsArma__Trata → GameClientPacketHandler__SendGMCommand → System_String__StartsWith → LIT_"'/'" → TI_SparkComandos → SparkComandos__Executa → TI_SparkLinkItem → SparkLinkItem__ParaEnvio → TI_SparkChatFiltro → SparkChatFiltro__Casa → System_String__get_Chars → LIT_"'+!#@$%\" → System_Char__ToString → System_String__Concat → System_String__get_Chars → System_String__Split → LIT_"''" → System_String__IsNullOrWhiteSpace → TI_SparkComandos → SparkComandos__Diz → LIT_"'Usage: \" → GameClientPacketHandler__SendMessage

## ChatWindow__TamanhoDaFonte


## ChatWindow__TamanhoPadrao
UnityEngine_PlayerPrefs__DeleteKey → LIT_"'spark_chat_w'" → UnityEngine_PlayerPrefs__DeleteKey → LIT_"'spark_chat_h'" → UnityEngine_PlayerPrefs__DeleteKey → LIT_"'spark_sysmsg_h'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## ChatWindow__TeclaDoTell
MR_UnityEngine.UIElements.KeyboardEventBase<UnityEngine.UIElements.KeyDownEvent>.get_shiftKey → MR_UnityEngine.UIElements.TextInputBaseField<string>.get_cursorIndex → LIT_"''" → ChatWindow__AceitaSugestao → UnityEngine_UIElements_FocusController__IgnoreEvent

## ChatWindow__TellMudou
LIT_"'\" → TI_ChatWindow → System_String__get_Chars → ChatWindow__AtualizaTell → TI_ChatWindow → MR_System.Collections.Generic.List<string>.get_Item → System_String__Concat → LIT_"'\" → LIT_"' '" → ChatWindow__CursorNoFim → ChatWindow__AtualizaTell → System_Array__Clear → TI_ChatWindow → System_String__get_Chars → TI_ChatWindow → MR_System.Collections.Generic.List<string>.GetEnumerator → MR_System.Collections.Generic.List<string>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<string>.Dispose → System_String__StartsWith → MR_System.Collections.Generic.List<string>.Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<string>.Dispose → System_String__Substring → ChatWindow__PintaSugestoes

## ChatWindow__TextoDigitado
TI_SparkOpcoes → System_Char__IsControl → ChatWindow__CampoDoChatComFoco → TI_SparkObservador → System_Text_StringBuilder__Append

## ChatWindow__TrocaAba
TI_ChatWindow.<>c__DisplayClass113_0 → Gear__UpdateWeaponType → MD_ChatWindow.__c__DisplayClass113_0._RolaParaBaixo_b__0 → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → ChatWindow__PintaAba

## ChatWindow__TrocaOculto
ChatWindow__CloseChat

## ChatWindow__TrocaOpcoes
TI_ChatWindow.<>c__DisplayClass64_0 → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<System.Action>..ctor → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_SparkEstilo → SparkEstilo__Janela → SparkEstilo__Espaco → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Chat Options'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → MD_ChatWindow.__c__DisplayClass64_0._TrocaOpcoes_b__0 → SparkEstilo__Fechar → UnityEngine_UIElements_VisualElement__Add → MD_ChatWindow.__c__DisplayClass64_0._TrocaOpcoes_b__1 → TI_ChatWindow.<>c → LIT_"'Show system message window'" → TI_ChatWindow.<>c → MD_ChatWindow.__c._TrocaOpcoes_b__64_2 → TI_ChatWindow.<>c → MD_ChatWindow.__c._TrocaOpcoes_b__64_3 → TI_ChatWindow.<>c → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Right-click a chat tab to change it. Each tab shows the ..." → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Lista → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkChatFiltro → SparkChatFiltro__MontaFiltros → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngin

## ChatWindow__TrocaTell
ChatWindow__PintaSugestoes → ChatWindow__CursorNoFim → TI_ChatWindow → System_String__get_Chars → System_String__Substring → ChatWindow__IndiceTell → TI_ChatWindow → MR_System.Collections.Generic.List<string>.get_Item → ChatWindow__PoeTell

## ChatWindow__Update
TI_SparkOpcoes → MD_ChatWindow.TextoDigitado → UnityEngine_InputSystem_Keyboard__remove_onTextInput → MD_ChatWindow.TextoDigitado → UnityEngine_InputSystem_Keyboard__add_onTextInput → ChatWindow__CalculaViraTexto → ChatWindow__OpenChat → UnityEngine_MonoBehaviour__StartCoroutine → System_String__Concat → MR_UnityEngine.UIElements.TextInputBaseField<string>.get_maxLength → System_String__Substring → ChatWindow__CursorNoFim → System_Text_StringBuilder__Clear → ChatWindow__OpenChat → UnityEngine_MonoBehaviour__StartCoroutine → ChatWindow__AceitaSugestao → ChatWindow__CloseChat → ChatWindow__CampoDoChatComFoco → LIT_"''" → MR_System.Collections.Generic.List<string>.get_Item → MR_UnityEngine.UIElements.TextInputBaseField<string>.set_cursorIndex → MR_System.Collections.Generic.List<string>.get_Item → MR_UnityEngine.UIElements.TextInputBaseField<string>.set_cursorIndex, → UnityEngine_UIElements_CallbackEventHandler__NotifyPropertyChanged → ChatWindow__TrocaTell

## ChatWindow__ZeraTell
TI_ChatWindow → System_Array__Clear → TI_ChatWindow → UnityEngine_Object__op_Inequality → TI_ChatWindow → System_Array__Clear → TI_ChatWindow → System_String__get_Chars → TI_ChatWindow → MR_System.Collections.Generic.List<string>.GetEnumerator → MR_System.Collections.Generic.List<string>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<string>.Dispose → System_String__StartsWith → MR_System.Collections.Generic.List<string>.Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<string>.Dispose → System_String__Substring → ChatWindow__PintaSugestoes

## ChatWindow___cctor
TI_ChatWindow → MR_System.Collections.Generic.List<string>..ctor → TI_ChatWindow

## ChatWindow___ctor
MR_System.Collections.Generic.List<string>..ctor → MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<string,int>>..ctor → MR_System.Collections.Generic.Dictionary<UnityEngine.UIElements.ScrollView,bool>..ctor → System_Text_StringBuilder___ctor → TI_L2Window

## ClanWindow__Awake
TI_ClanWindow → UnityEngine_Object__op_Equality → TI_ClanWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## ClanWindow__BuildWindow
TI_ClanWindow.<BuildWindow>d__27 → Gear__UpdateWeaponType

## ClanWindow__HideWindow
UnityEngine_Object__op_Inequality → L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## ClanWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/ClanWindow/ClanWindow'"

## ClanWindow__MontaAlianca
LIT_"'Alliance crest (8x12)'" → UnityEngine_UIElements_VisualElement___ctor → TI_SparkEstilo → SparkEstilo__Painel → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → SparkEstilo__Espaco → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__Add → MD_SparkClan.InfoDaAlianca → SparkEstilo__Botao → LIT_"'Alliance Info'" → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → MD_ClanWindow._MontaAlianca_b__123_0 → SparkEstilo__Botao → LIT_"'Invite Target Clan'" → UnityEngine_UIElements_VisualElement__Add → TI_ClanWindow.<>c → LIT_"'Leave Alliance'" → TI_ClanWindow.<>c → MD_ClanWindow.__c._MontaAlianca_b__123_1 → TI_ClanWindow.<>c → TI_SparkEstilo → SparkEstilo__Botao → TI_ClanWindow → ClanWindow__Rodape → UnityEngine_UIElements_VisualElement__Add → TI_ClanWindow.<>c → LIT_"'Dissolve Alliance'" → TI_ClanWindow.<>c → MD_ClanWindow.__c._MontaAlianca_b__123_2 → TI_ClanWindow.<>c → TI_SparkEstilo → SparkEstilo__Botao → TI_ClanWindow → ClanWindow__Rodape → UnityEngine_UIElements_VisualElement__Add → ClanWindow__Secao → LIT_"'Dismiss a clan from the alliance'" → UnityEngine_UIElements_VisualElement__Add → ClanWindow__LinhaDeEdicao → SparkEstilo__Campo → UnityEngine_UIElements_VisualElement__Add → MD_ClanWindow._MontaAlianca_b__123_3 → SparkEstilo__Botao → LIT_"'Dismiss'" → ClanWindow__Pequeno → UnityEngine_UIElements_VisualElement__Add → ClanWindow__Secao → LIT_"'Alliance crest (8x12)'" → UnityEngine_UIElements_VisualElement__Add → MD_SparkClan.GravaAllyCrest → TI_ClanWindow.Envio → ClanWindow_Envio___ctor → LIT_"'Choose the alliance crest'" → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'To create an alliance, the clan leader of a level 5 clan..." → UnityEngine_UIElements_VisualElement__get_styl

## ClanWindow__MontaCrest
UnityEngine_UIElements_VisualElement___ctor → TI_SparkEstilo → SparkEstilo__Painel → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → SparkEstilo__Espaco → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkEstilo → SparkEstilo__Borda → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Current Clan Crest'" → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'16x12, shown next to the name of every member. Any .png,..." → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MD_ClanWindow._MontaCrest_b__132_0 → SparkEstilo__Botao → LIT_"'Delete'" → UnityEngine_UIElements_VisualElement__Add → TI_ClanWindow → ClanWindow__Secao → LIT_"'New crest'" → UnityEngine_UIElements_VisualElement__Add → MD_SparkClan.GravaCrest → TI_ClanWindow.Envio → ClanWindow_Envio___ctor → LIT_"'Choose the clan crest'" → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit

## ClanWindow__MontaGuerras
UnityEngine_UIElements_VisualElement___ctor → TI_ClanWindow → ClanWindow__LinhaDeEdicao → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → ClanWindow__Coluna → LIT_"'Clan name'" → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Campo → UnityEngine_UIElements_VisualElement__Add → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.KeyDownEvent> → MD_ClanWindow._MontaGuerras_b__110_0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.KeyDownEvent> → MD_ClanWindow._MontaGuerras_b__110_1 → SparkEstilo__Botao → LIT_"'Declare War'" → ClanWindow__Pequeno → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Painel → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkEstilo__CabecalhoDeLista → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → ClanWindow__Coluna → LIT_"''" → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → ClanWindow__Coluna → LIT_"'Clan'" → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → ClanWindow__Coluna → LIT_"'Status'" → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Lista → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → MD_ClanWindow._MontaGuerras_b__110_2 → SparkEstilo__Botao → LIT_"'Declare Back'" → UnityEngine_UIElements_VisualElement__Add → MD_ClanWindow._MontaGuerras_b__110_3 → SparkEstilo__Botao → LIT_"'End War'" → ClanWindow__Rodape → UnityEngine_UIElements_VisualElement__Add → MD_ClanWindow._MontaGuerras_b__110_4 → SparkEstilo__Botao → LIT_"'Surrender'" → ClanWindow__Rodape → UnityEngine_UIElements_VisualElement__Add → MD_ClanWindow.PedeGuerras → SparkEstilo__Botao → LIT_"'Refresh'" → ClanWindow__Rodape → UnityEngine_UIElements_VisualElement__Add

## ClanWindow__MontaInfo
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Wrap>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → TI_ClanWindow → ClanWindow__Cartao → LIT_"'LEVEL'" → UnityEngine_UIElements_VisualElement__Add → ClanWindow__Cartao → LIT_"'REPUTATION'" → UnityEngine_UIElements_VisualElement__Add → ClanWindow__Cartao → LIT_"'RANK'" → UnityEngine_UIElements_VisualElement__Add → ClanWindow__Cartao → LIT_"'MEMBERS'" → UnityEngine_UIElements_VisualElement__Add → ClanWindow__Cartao → LIT_"'ALLIANCE'" → UnityEngine_UIElements_VisualElement__Add → ClanWindow__Cartao → LIT_"'CASTLE'" → UnityEngine_UIElements_VisualElement__Add → ClanWindow__Cartao → LIT_"'CLAN HALL'" → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Clan Skills'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Painel → UnityEngine_UIElements_VisualElement__get_style → SparkEstilo__Lista → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Wrap>.op_Implicit → SparkEstilo__Espaco → UnityEngine_UIElements_VisualElement__Add

## ClanWindow__MontaMembros
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Wrap>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → SparkEstilo__Painel → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → SparkEstilo__CabecalhoDeLista → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → TI_ClanWindow → ClanWindow__Coluna → LIT_"''" → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → ClanWindow__Coluna → LIT_"'Name'" → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → ClanWindow__Coluna → LIT_"'Lv'" → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → ClanWindow__Coluna → LIT_"'Class'" → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Lista → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Painel → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → SparkEstilo__Espaco → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Select a member to see the details.'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_s

## ClanWindow__MontaRanks
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → TI_SparkEstilo → SparkEstilo__Painel → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Ranks'" → SparkEstilo__Espaco → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Lista → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Painel → UnityEngine_UIElements_VisualElement__get_style → SparkEstilo__Espaco → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Select a rank'" → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Pick a rank on the left to see and edit its privileges.'" → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_ClanWindow → ClanWindow__Grupo → LIT_"'System'" → TI_ClanWindow → ClanWindow__Grupo → LIT_"'Clan Hall'" → TI_ClanWindow → ClanWindow__Grupo → LIT_"'Castle'" → TI_ClanWindow → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → MD_ClanWindow._MontaRanks_b__87_0 → SparkEstilo__Botao → LIT_"'Save Privileges'" → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Liga → UnityEngine_UIElements_VisualElement__Add

## ClanWindow__MostraAba
TI_SparkClan → SparkClan__get_TemClan → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → ClanWindow__MostraInfo → UnityEngine_UIElements_VisualElement__Clear → TI_SparkClan → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'This clan has no skills yet.'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkClan → MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.GetEnumerator → TI_SparkClan → TI_SparkPacoteLivre → SparkPacoteLivre__H → TI_SparkClan → SparkPacoteLivre__Fim → ClanWindow__MostraCrest → TI_SparkClan → SparkClan__get_SouLider → TI_SparkClan → LIT_"'No alliance'" → TI_SparkClan → LIT_"'Your clan is not in an alliance.'" → LIT_"'Member of this alliance.'" → LIT_"'Your clan leads this alliance.'" → UnityEngine_UIElements_VisualElement__get_style → TI_SparkClan → SparkClan__AllyCrest → TI_SparkClan → UnityEngine_UIElements_StyleBackground__op_Implicit → TI_SparkClan → System_Array__Clear → ClanWindow__MostraGuerras → SparkClan__PedeGuerras → TI_SparkPacoteLivre → SparkPacoteLivre__H → SparkPacoteLivre__D → TI_SparkClan → SparkPacoteLivre__Fim → MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.Dispose → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkEstilo → SparkEstilo__Borda → SkillgrpTable__get_Instance → SkillgrpTable__GetSkill → UnityEngine_UIElements_VisualElement__get_style → IconTable__get_Instance → IconTable__LoadTextureByName → UnityEngine_UIElements_StyleBackground__op_Implicit → SkillNameTable__get_Instance → System_Int32__ToString → System_String__Concat → LIT_"'Skill '" → SkillNameTable__get_Instance → SkillNameTable__GetName → System_Int32__ToString → System_String__Concat → LIT_"' Lv '" → UnityEngine_UIElements_VisualElement__set_tooltip → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → SparkEstilo__Liga → TI_SparkEstilo → SparkEstilo__Liga → TI_SparkEstilo → SparkEstilo__Liga → TI_SparkEstilo → UnityEngine_UIElements_VisualElement__get_userData → UnityEngine_UIElements_VisualElement__get_style

## ClanWindow__MostraAlianca
TI_SparkClan → SparkClan__get_SouLider → TI_SparkClan → LIT_"'No alliance'" → TI_SparkClan → LIT_"'Your clan is not in an alliance.'" → LIT_"'Member of this alliance.'" → LIT_"'Your clan leads this alliance.'" → UnityEngine_UIElements_VisualElement__get_style → TI_SparkClan → SparkClan__AllyCrest → TI_SparkClan → UnityEngine_UIElements_StyleBackground__op_Implicit → TI_SparkEstilo → SparkEstilo__Liga → TI_SparkEstilo → SparkEstilo__Liga → TI_SparkEstilo → SparkEstilo__Liga → TI_SparkEstilo → UnityEngine_UIElements_VisualElement__get_userData → UnityEngine_UIElements_VisualElement__get_style

## ClanWindow__MostraCrest
UnityEngine_Object__op_Inequality → UnityEngine_UIElements_VisualElement__get_style → TI_SparkClan → SparkClan__Crest → UnityEngine_UIElements_StyleBackground__op_Implicit → TI_SparkClan → SparkClan__Pode → ClanWindow_Envio__Atualiza → TI_SparkEstilo → SparkEstilo__Liga → LIT_"'Only members with the crest privilege of a level 3+ clan..." → LIT_"''"

## ClanWindow__MostraGuerras
TI_ClanWindow.<>c__DisplayClass113_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement__Clear → TI_SparkClan → SparkClan__Pode → TI_SparkClan → TI_SparkEstilo → SparkEstilo__Liga → MR_System.Collections.Generic.HashSet<string>..ctor → MR_System.Collections.Generic.List<string>..ctor → TI_SparkClan → MR_System.Collections.Generic.List<SparkClan.Guerra>.GetEnumerator → MR_System.Collections.Generic.List<SparkClan.Guerra>.MoveNext → TI_ClanWindow.<>c__DisplayClass113_1 → Gear__UpdateWeaponType → MR_System.Collections.Generic.HashSet<string>.Add → MD_ClanWindow.__c__DisplayClass113_1._MostraGuerras_b__0 → MR_System.Collections.Generic.List<string>.Exists → MR_System.Collections.Generic.List<string>.Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkClan.Guerra>.Dispose → MR_System.Collections.Generic.List<string>.GetEnumerator → MR_System.Collections.Generic.List<string>.MoveNext → TI_ClanWindow.<>c__DisplayClass113_2 → Gear__UpdateWeaponType → MR_System.Collections.Generic.HashSet<string>.Contains → LIT_"'UNDER ATTACK'" → LIT_"'DECLARED'" → LIT_"'AT WAR'" → TI_SparkEstilo → SparkEstilo__Linha → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → LIT_"'Data/UI/Assets/Clan/clan_DF_warlist_arrow'" → System_Int32__ToString → System_String__Concat → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_ClanWindow → ClanWindow__Coluna → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → SparkEstilo__Etiqueta → UnityEngine_UIElements_VisualElement__Add → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_ClanWindow.__c__DisplayClass113_2._MostraGuerras_b__1 → UnityEngine_UIElements_VisualElement__Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<string>.Dispose → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'No clan wars. Type a clan name above and press Declare W..." → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add

## ClanWindow__MostraInfoDoMembro
LIT_"')'" → LIT_"' (rank {0})'" → TI_ClanWindow.<>c__DisplayClass76_0 → Gear__UpdateWeaponType → TI_ClanWindow → System_String__Equals → TI_SparkClan → TI_System.Predicate<SparkClan.Membro> → MD_ClanWindow.__c__DisplayClass76_0._MostraInfoDoMembro_b__0 → MR_System.Collections.Generic.List<SparkClan.Membro>.Find → TI_SparkClan → SparkClan__UltimoLogin → LIT_"'-'" → LIT_"''" → LIT_"'-'" → TI_SparkClan → SparkClan__NomeDoRank → LIT_"''" → System_String__Format → LIT_"' (rank {0})'" → System_String__Concat → LIT_"'Main Clan'" → TI_SparkClan → SparkClan__TipoDaUnidade → System_String__Concat → LIT_"' ('" → LIT_"')'" → LIT_"''" → LIT_"'Apprentice: '" → LIT_"'Sponsor: '" → System_String__Concat

## ClanWindow__MostraInfo
TI_SparkClan → System_Int32__ToString → TI_SparkClan → System_Int32__ToString → LIT_"'n0'" → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkClan → LIT_"'Not ranked'" → TI_SparkClan → LIT_"'Not ranked'" → TI_SparkClan → System_Int32__ToString → System_String__Concat → LIT_"'Top '" → TI_SparkClan → System_Int32__ToString → TI_SparkClan → LIT_"'None'" → TI_SparkClan → SparkClan__NomeDoCasteloOuNada → SparkClan__NomeDaSedeOuNada

## ClanWindow__MostraMembros
MR_System.Collections.Generic.List<int>..ctor → MR_System.Collections.Generic.List<int>.Add → TI_SparkClan → MR_System.Collections.Generic.Dictionary<int,SparkClan.Unidade>.get_Keys → MR_System.Collections.Generic.Dictionary<int,SparkClan.Unidade>.GetEnumerator → MR_System.Collections.Generic.Dictionary<int,SparkClan.Unidade>.MoveNext → MR_System.Collections.Generic.List<int>.Contains → MR_System.Collections.Generic.List<int>.Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<int,SparkClan.Unidade>.Dispose → TI_SparkClan → MR_System.Collections.Generic.List<SparkClan.Membro>.GetEnumerator → MR_System.Collections.Generic.List<SparkClan.Membro>.MoveNext → MR_System.Collections.Generic.List<int>.Contains → MR_System.Collections.Generic.List<int>.Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkClan.Membro>.Dispose → TI_ClanWindow.<>c → MD_ClanWindow.__c._MostraMembros_b__69_0 → TI_ClanWindow.<>c → MR_System.Collections.Generic.List<int>.Sort → MR_System.Collections.Generic.List<int>.Contains → UnityEngine_UIElements_VisualElement__Clear → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MR_System.Collections.Generic.List<int>.GetEnumerator → MR_System.Collections.Generic.List<int>.MoveNext → TI_ClanWindow.<>c__DisplayClass69_0 → Gear__UpdateWeaponType → TI_SparkClan → TI_System.Predicate<SparkClan.Membro> → MD_ClanWindow.__c__DisplayClass69_0._MostraMembros_b__4 → MR_System.Collections.Generic.List<SparkClan.Membro>.FindAll → SparkClan__TipoDaUnidade → System_String__Format → LIT_"'{0}  {1}'" → TI_SparkEstilo → SparkEstilo__Etiqueta → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_ClanWindow.__c__DisplayClass69_0._MostraMembros_b__5 → UnityEngine_UIElements_VisualElement__Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<int>.Dispose → System_Array__Clear → MR_System.Collections.Generic.List<int>.GetEnumerator → MR_System.Collections.Generic.List<int>.MoveNext → MR_System.Collections.Generic.List<int>.Add → TI_SparkClan → SparkClan__TipoDaUnidade → MR_System.Collections.Generic.List<string>.Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<int>.Dispose → UnityEngine_UIElements_VisualElement__Clear → TI_SparkClan → TI_System.Predicate<SparkClan.Membro> → MD_ClanWindow._MostraMembros_b__69_1 → MR_System.Collections.Generic.List<SparkClan.Membro>.FindAll → TI_ClanWindow.<>c → TI_System.Comparison<SparkClan.Membro> → MD_ClanWindow.__c._MostraMembros_b__69_2 → TI_ClanWindow.<>c → MR_System.Collections.Generic.List<SparkClan.Membro>.Sort → MR_System.Collections.Generic.List<SparkClan.Membro>.GetEnumerator → 

## ClanWindow__MostraPrivilegios
LIT_"'All (clan leader)'" → TI_ClanWindow → System_String__Equals → MR_System.Collections.Generic.List<string>..ctor → TI_ClanWindow → MR_System.Collections.Generic.List<string>.Add → TI_ClanWindow → MR_System.Collections.Generic.List<string>.Add → LIT_"'Clan Hall'" → TI_ClanWindow → MR_System.Collections.Generic.List<string>.Add → LIT_"'Castle'" → TI_SparkClan → TI_ClanWindow → System_String__Equals → LIT_"'All (clan leader)'" → LIT_"'None'" → System_String__Join → LIT_"', '" → TI_SparkClan → SparkClan__get_SouLider → TI_SparkClan → MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<System.Func<bool>,System.Action<bool,bool>>>.GetEnumerator → MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<System.Func<bool>,System.Action<bool,bool>>>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<System.Func<bool>,System.Action<bool,bool>>>.Dispose → TI_SparkEstilo → SparkEstilo__Liga

## ClanWindow__MostraRanks
UnityEngine_UIElements_VisualElement__Clear → TI_SparkClan → MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.GetEnumerator → MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.Dispose → TI_ClanWindow.<>c__DisplayClass90_0 → Gear__UpdateWeaponType → TI_SparkClan → SparkClan__RankVisivel → TI_SparkEstilo → SparkEstilo__Linha → TI_SparkClan → SparkClan__NomeDoRank → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → TI_ClanWindow → ClanWindow__Coluna → UnityEngine_UIElements_VisualElement__Add → System_Int32__ToString → LIT_"' member'" → LIT_"' members'" → System_String__Concat → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Marca → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_ClanWindow.__c__DisplayClass90_0._MostraRanks_b__0 → UnityEngine_UIElements_VisualElement__Add

## ClanWindow__MostraSkills
UnityEngine_UIElements_VisualElement__Clear → TI_SparkClan → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'This clan has no skills yet.'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_SparkClan → MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.GetEnumerator → MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.Dispose → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkEstilo → SparkEstilo__Borda → SkillgrpTable__get_Instance → SkillgrpTable__GetSkill → UnityEngine_UIElements_VisualElement__get_style → IconTable__get_Instance → IconTable__LoadTextureByName → UnityEngine_UIElements_StyleBackground__op_Implicit → SkillNameTable__get_Instance → System_Int32__ToString → System_String__Concat → LIT_"'Skill '" → SkillNameTable__get_Instance → SkillNameTable__GetName → System_Int32__ToString → System_String__Concat → LIT_"' Lv '" → UnityEngine_UIElements_VisualElement__set_tooltip → UnityEngine_UIElements_VisualElement__Add

## ClanWindow__OnDestroy
TI_ClanWindow → UnityEngine_Object__op_Equality → TI_ClanWindow → MD_ClanWindow.Redesenha → TI_SparkClan → SparkClan__remove_Mudou → MD_ClanWindow.MostraInfoDoMembro → SparkClan__remove_InfoDoMembro → MD_ClanWindow.MostraPrivilegios → SparkClan__remove_Privilegios → MD_ClanWindow.MostraRanks → SparkClan__remove_RanksMudaram → MD_ClanWindow.MostraGuerras → SparkClan__remove_GuerrasMudaram → MD_ClanWindow.MostraSkills → TI_SparkClan → System_Delegate__Remove → TI_SparkClan

## ClanWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → L2GameUI__WindowOpened → ClanWindow__Redesenha → TI_SparkClan → SparkClan__get_TemClan → TI_SparkClan → TI_SparkPacoteLivre → TI_SparkClan → SparkPacoteLivre__Fim

## ClickManager__AndaPara
UnityEngine_Object__op_Inequality → PlayerController__get_Voando → UnityEngine_Object__op_Inequality → Gear__UpdateWeaponType → UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException → LIT_"'obj'" → UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException → LIT_"'obj'" → UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException → LIT_"'Coroutines can only be stopped on a MonoBehaviour'" → System_ArgumentException___ctor → MD_UnityEngine.MonoBehaviour.StartCoroutine → LIT_"'routine is null'" → System_NullReferenceException___ctor → MD_UnityEngine.MonoBehaviour.StartCoroutine → UnityEngine_Object__op_Inequality → PlayerStateMachine__NotifyEvent → UnityEngine_Object__op_Inequality → TargetManager__ClearAttackTarget → Gear__UpdateWeaponType → UnityEngine_MonoBehaviour__StartCoroutine → UnityEngine_GameObject__SetActive → UnityEngine_Component__get_gameObject → UnityEngine_GameObject__SetActive → UnityEngine_Component__get_gameObject → UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException

## ClickManager__Awake
UnityEngine_Object__op_Equality → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## ClickManager__DestinoNadando
UnityEngine_Object__op_Equality → PlayerController__get_Voando → UnityEngine_Object__op_Equality → TI_SparkNado → SparkNado__get_LinhaDeBoia → UnityEngine_Component__get_transform → UnityEngine_Physics__RaycastAll → MD_ClickManager.__c._DestinoNadando_b__27_0 → MR_System.Array.Sort<UnityEngine.RaycastHit> → UnityEngine_RaycastHit__get_collider → UnityEngine_Object__op_Equality → UnityEngine_RaycastHit__get_collider → UnityEngine_Component__get_transform → UnityEngine_Transform__IsChildOf → UnityEngine_RaycastHit__get_collider → UnityEngine_Component__get_gameObject → UnityEngine_GameObject__get_layer → UnityEngine_Transform__get_position → UnityEngine_Transform__get_forward → UnityEngine_Transform__get_position

## ClickManager__EhMortoSemShift
UnityEngine_Object__op_Inequality → UnityEngine_RaycastHit__get_collider → UnityEngine_Object__op_Equality → UnityEngine_RaycastHit__get_collider → UnityEngine_Component__get_gameObject → UnityEngine_GameObject__get_layer → UnityEngine_RaycastHit__get_transform → UnityEngine_Transform__GetParent → UnityEngine_Object__op_Inequality → UnityEngine_RaycastHit__get_transform → UnityEngine_Transform__GetParent → UnityEngine_Object__op_Inequality → MR_UnityEngine.Component.GetComponent<Entity> → UnityEngine_Object__op_Inequality

## ClickManager__EmLoja
UnityEngine_Object__op_Inequality → TI_SparkLoja → SparkLoja__TipoDe

## ClickManager__HideLocator
UnityEngine_GameObject__SetActive → UnityEngine_Component__get_gameObject → UnityEngine_GameObject__SetActive → MR_UnityEngine.Component.GetComponent<L2Particle> → UnityEngine_Component__get_gameObject → UnityEngine_GameObject__SetActive → L2Particle__ResetTimer → UnityEngine_Component__get_gameObject → UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException

## ClickManager__LocatorWithoutMoving
Gear__UpdateWeaponType

## ClickManager__OnClickOnEntity
UnityEngine_Object__op_Inequality → GameClientPacketHandler__SendRequestAction → UnityEngine_Object__op_Inequality → TargetManager__HasTarget → UnityEngine_Component__get_transform → UnityEngine_Object__op_Equality → PlayerActions__UseAction → PlayerController__get_Voando → TargetManager__SetTarget

## ClickManager__OnClickToMove
UnityEngine_Input__get_mousePosition → UnityEngine_Camera__ScreenPointToRay → ClickManager__DestinoNadando → ClickManager__AndaPara

## ClickManager__OnDestroy


## ClickManager__PlaceLocator
Gear__UpdateWeaponType

## ClickManager__RaioDoClique
UnityEngine_Physics__Raycast → ClickManager__EhMortoSemShift → UnityEngine_Physics__RaycastAll → MD_ClickManager.__c._RaioDoClique_b__24_0 → MR_System.Array.Sort<UnityEngine.RaycastHit> → ClickManager__EhMortoSemShift

## ClickManager__SetMasks


## ClickManager__Start
UnityEngine_GameObject__Find → LIT_"'Locator'" → UnityEngine_GameObject__get_transform → UnityEngine_Transform__GetChild → UnityEngine_Component__get_gameObject → MR_UnityEngine.GameObject.GetComponent<L2Particle> → UnityEngine_GameObject__get_transform → UnityEngine_Transform__GetChild → UnityEngine_Component__get_gameObject → MR_UnityEngine.GameObject.GetComponent<L2Particle> → MR_UnityEngine.Component.GetComponent<UnityEngine.Camera> → UnityEngine_GameObject__SetActive → UnityEngine_Component__get_gameObject → UnityEngine_GameObject__SetActive → UnityEngine_Component__get_gameObject → UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException

## ClickManager__Update
UnityEngine_Object__op_Inequality → TI_SparkObservador → UnityEngine_Input__get_mousePosition → UnityEngine_Camera__ScreenPointToRay → ClickManager__RaioDoClique → UnityEngine_RaycastHit__get_collider → UnityEngine_Component__get_gameObject → UnityEngine_GameObject__get_layer → UnityEngine_RaycastHit__get_transform → UnityEngine_Transform__GetParent → UnityEngine_RaycastHit__get_collider → UnityEngine_Component__get_gameObject → ObjectData___ctor → UnityEngine_RaycastHit__get_collider → MR_UnityEngine.Component.GetComponentInParent<SparkItemNoChao> → UnityEngine_Object__op_Equality → UnityEngine_Object__op_Inequality → ClickManager__OnClickToMove → UnityEngine_RaycastHit__get_collider → MR_UnityEngine.Component.GetComponentInParent<SparkItemNoChao> → UnityEngine_Object__op_Inequality → System_String__op_Inequality → LIT_"'Player'" → ClickManager__OnClickOnEntity → ClickManager__OnClickToMove → ClickManager__HideLocator → SparkItensNoChao__get_Instance → SparkItensNoChao__Pega → UnityEngine_RaycastHit__get_collider → MR_UnityEngine.Component.GetComponentInParent<SparkItemNoChao> → SparkItensNoChao__get_Instance → UnityEngine_Object__op_Inequality → UnityEngine_Object__op_Equality → UnityEngine_Object__op_Inequality → LIT_"'Monster'" → LIT_"'Npc'" → AttackAction__NpcAtacavel → LIT_"'Npc'" → UnityEngine_Object__op_Inequality → TI_SparkLoja → SparkLoja__TipoDe → UnityEngine_Object__op_Inequality → System_String__op_Inequality → LIT_"'Player'" → LIT_"'Pickup'" → UnityEngine_Object__op_Inequality → CursorManager__ChangeCursor → SparkItensNoChao__get_Instance → ClickManager__DestinoNadando → ClickManager__AndaPara → ClickManager__HideLocator

## ClickManager___ctor


## CursorManager__Aplica
MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Texture2D>

## CursorManager__Awake
UnityEngine_Object__op_Equality → UnityEngine_Object__Destroy → System_String__Concat → LIT_"'Default'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D>

## CursorManager__ChangeCursor
MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Texture2D>

## CursorManager__LateUpdate
UnityEngine_Object__op_Equality → UnityEngine_Input__get_mousePosition → CursorManager__Aplica

## CursorManager__Reaplica
MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Texture2D>

## CursorManager___ctor
LIT_"'Data/UI/Assets/Cursor/'"

## DamageText__FlotatingText
Gear__UpdateWeaponType

## DamageText__Start
UnityEngine_Component__get_transform → UnityEngine_GameObject__Find → LIT_"'Damages'" → UnityEngine_GameObject__get_transform → UnityEngine_Transform__SetParent → LIT_"'FlotatingText'" → LIT_"'methodName is null or empty'" → System_NullReferenceException___ctor → MD_UnityEngine.MonoBehaviour.StartCoroutine → UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException → LIT_"'obj'" → UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException → MR_System.ReadOnlySpan<char>.GetPinnableReference → LIT_"'Coroutines can only be stopped on a MonoBehaviour'" → System_ArgumentException___ctor → MD_UnityEngine.MonoBehaviour.StartCoroutine → UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException → LIT_"'obj'"

## DebuffWindow__Awake
TI_DebuffWindow → UnityEngine_Object__op_Equality → TI_DebuffWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## DebuffWindow__BuildWindow
TI_DebuffWindow.<BuildWindow>d__7 → Gear__UpdateWeaponType

## DebuffWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/BuffWindow/DebuffWindow'"

## DebuffWindow__OnDestroy
TI_DebuffWindow

## DiagonalResizeManipulator__PointerDownHandler
UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_UIElements_PointerCaptureHelper__CapturePointer

## DiagonalResizeManipulator__PointerMoveHandler
UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## DiagonalResizeManipulator__PointerUpHandler
UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture → UnityEngine_UIElements_PointerCaptureHelper__ReleasePointer

## DiagonalResizeManipulator__RegisterCallbacksOnTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_DiagonalResizeManipulator.PointerDownHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent> → MD_DiagonalResizeManipulator.PointerMoveHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerMoveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent> → MD_DiagonalResizeManipulator.PointerUpHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## DiagonalResizeManipulator__SnapSize
UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## DiagonalResizeManipulator__UnregisterCallbacksFromTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_DiagonalResizeManipulator.PointerDownHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent> → MD_DiagonalResizeManipulator.PointerMoveHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerMoveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent> → MD_DiagonalResizeManipulator.PointerUpHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerUpEvent> → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## DiagonalResizeManipulator___ctor
UnityEngine_UIElements_MouseManipulator___ctor → UnityEngine_UIElements_Manipulator__set_target

## DragManipulator__DragWindow
DragManipulator__UpdateAnchorType → DragManipulator__get_Painel → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__get_layout → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__get_layout → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit

## DragManipulator__PointerDownHandler
UnityEngine_UIElements_VisualElement__get_layout → UnityEngine_UIElements_PointerCaptureHelper__CapturePointer

## DragManipulator__PointerMoveHandler
UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture → DragManipulator__DragWindow

## DragManipulator__PointerUpHandler
UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture → UnityEngine_UIElements_PointerCaptureHelper__ReleasePointer → UnityEngine_Object__op_Inequality → L2Window__GuardaPosicao → UnityEngine_Object__op_Inequality → DragManipulator__get_Painel → UnityEngine_UIElements_VisualElement__get_layout

## DragManipulator__RegisterCallbacksOnTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_DragManipulator.PointerDownHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent> → MD_DragManipulator.PointerMoveHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerMoveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent> → MD_DragManipulator.PointerUpHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## DragManipulator__UnregisterCallbacksFromTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_DragManipulator.PointerDownHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent> → MD_DragManipulator.PointerMoveHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerMoveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent> → MD_DragManipulator.PointerUpHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerUpEvent> → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## DragManipulator__UpdateAnchorType
UnityEngine_Object__op_Inequality → DragManipulator__get_Painel → UnityEngine_UIElements_VisualElement__get_layout

## DragManipulator___ctor
UnityEngine_UIElements_MouseManipulator___ctor → UnityEngine_UIElements_Manipulator__set_target → UnityEngine_Object__op_Inequality → DragManipulator__get_Painel → UnityEngine_UIElements_VisualElement__get_layout

## ExitWindow__Awake
TI_ExitWindow → UnityEngine_Object__op_Equality → TI_ExitWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## ExitWindow__BuildWindow
TI_ExitWindow.<BuildWindow>d__19 → Gear__UpdateWeaponType

## ExitWindow__HandleCancelButtonClick


## ExitWindow__HandleExitButtonClick
UnityEngine_Object__op_Equality → SparkSaida__Sai → DisconnectPacket___ctor → SparkSaida__Sai → TI_SparkSaida

## ExitWindow__HandleRestartButtonClick
RequestRestartPacket___ctor

## ExitWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → System_ThrowHelper__ThrowArgumentOutOfRange_IndexException → System_Array__Copy

## ExitWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/ExitWindow/ExitWindow'"

## ExitWindow__MontaItens
UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkEstilo → SparkEstilo__Painel → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit → SparkEstilo__Espaco → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Acquired Items'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → SparkEstilo__CabecalhoDeLista → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Item'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Count'" → ExitWindow__Coluna → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Lista → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'No items acquired yet.'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add

## ExitWindow__OnDestroy
MD_ExitWindow.AoMudarSessao → TI_SparkSessao → SparkSessao__remove_Mudou → TI_ExitWindow

## ExitWindow__ShowWindow
L2PopupWindow__ShowWindow → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## FindStoreWindow__Abre
TI_SparkLoja

## FindStoreWindow__Awake
TI_FindStoreWindow → UnityEngine_Object__op_Equality → TI_FindStoreWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## FindStoreWindow__Botao
TI_FindStoreWindow.<>c__DisplayClass17_0 → Gear__UpdateWeaponType → TI_SparkArte → LIT_"'Data/UI/_Elements/Components/L2Button/L2Button'" → MR_SparkArte.Load<UnityEngine.UIElements.VisualTreeAsset> → UnityEngine_UIElements_VisualTreeAsset__Instantiate → LIT_"'L2Button'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button> → UnityEngine_UIElements_VisualElement__RemoveFromHierarchy → LIT_"'ButtonLabel'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → FindStoreWindow__Poe → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → MD_FindStoreWindow.__c__DisplayClass17_0._Botao_b__0 → UnityEngine_UIElements_Button__add_clicked

## FindStoreWindow__BuildWindow
TI_FindStoreWindow.<BuildWindow>d__10 → Gear__UpdateWeaponType

## FindStoreWindow__HideWindow
UnityEngine_Object__op_Inequality → L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## FindStoreWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/FindStoreWindow/FindStoreWindow'"

## FindStoreWindow__OnDestroy
TI_FindStoreWindow → UnityEngine_Object__op_Equality → TI_FindStoreWindow

## FindStoreWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## FlotatingText___ctor
Gear__UpdateWeaponType

## FpsLimiter__Start


## FpsLimiter__Update
TI_SparkOpcoes → UnityEngine_Object__op_Inequality → TI_SparkOpcoes

## FriendWindow__Awake
TI_FriendWindow → UnityEngine_Object__op_Equality → TI_FriendWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## FriendWindow__BuildWindow
TI_FriendWindow.<BuildWindow>d__19 → Gear__UpdateWeaponType

## FriendWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed → UnityEngine_Object__op_Inequality

## FriendWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkRefinoWindow/SparkRefinoWindow'"

## FriendWindow__MontaAmigos
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkEstilo__Lista → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_FriendWindow → FriendWindow__Fileira → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → MD_FriendWindow.Sussurra → SparkEstilo__Botao → LIT_"'Whisper'" → UnityEngine_UIElements_VisualElement__Add → MD_FriendWindow.Remove → SparkEstilo__Botao → LIT_"'Delete'" → UnityEngine_UIElements_VisualElement__Add → MD_SparkAmigos.PedeLista → SparkEstilo__Botao → LIT_"'Refresh'" → UnityEngine_UIElements_VisualElement__Add → FriendWindow__Fileira → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → SparkUI__Campo → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → FriendWindow__Escuro → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.KeyDownEvent> → MD_FriendWindow._MontaAmigos_b__20_0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.KeyDownEvent> → UnityEngine_UIElements_VisualElement__Add → MD_FriendWindow.Adiciona → SparkEstilo__Botao → LIT_"'Add'" → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Leave the name empty to invite your target.'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add

## FriendWindow__MontaBloqueio
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Blocked players cannot whisper you or invite you. The bl..." → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → TI_FriendWindow → FriendWindow__Fileira → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → SparkUI__Campo → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → FriendWindow__Escuro → UnityEngine_UIElements_VisualElement__Add → FriendWindow__Fileira → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → MD_FriendWindow._MontaBloqueio_b__21_0 → SparkEstilo__Botao → LIT_"'Block'" → UnityEngine_UIElements_VisualElement__Add → MD_FriendWindow._MontaBloqueio_b__21_1 → SparkEstilo__Botao → LIT_"'Unblock'" → UnityEngine_UIElements_VisualElement__Add → MD_SparkAmigos.ListaDeBloqueio → SparkEstilo__Botao → LIT_"'Block list'" → UnityEngine_UIElements_VisualElement__Add → FriendWindow__Fileira → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → TI_FriendWindow.<>c → LIT_"'Block all'" → TI_FriendWindow.<>c → MD_FriendWindow.__c._MontaBloqueio_b__21_2 → TI_FriendWindow.<>c → TI_SparkEstilo → SparkEstilo__Botao → UnityEngine_UIElements_VisualElement__Add → MD_SparkAmigos.DesbloqueiaTodos → SparkEstilo__Botao → LIT_"'Unblock all'" → UnityEngine_UIElements_VisualElement__Add → LIT_"\" → System_InvalidOperationException___ctor → MD_UnityEngine.UIElements.VisualElement.Add → UnityEngine_UIElements_VisualElement_Hierarchy__Add → UnityEngine_UIElements_VisualElement__Add

## FriendWindow__MostraLista
UnityEngine_UIElements_VisualElement__Clear → TI_SparkAmigos → MR_System.Collections.Generic.List<SparkAmigos.Amigo>.GetEnumerator → MR_System.Collections.Generic.List<SparkAmigos.Amigo>.MoveNext → TI_FriendWindow.<>c__DisplayClass23_0 → Gear__UpdateWeaponType → TI_SparkEstilo → SparkEstilo__Linha → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_FriendWindow → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkEstilo → SparkEstilo__Borda → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → LIT_"'Online'" → LIT_"'Offline'" → TI_SparkEstilo → TI_FriendWindow → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → System_String__Equals → SparkEstilo__Marca → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_FriendWindow.__c__DisplayClass23_0._MostraLista_b__0 → UnityEngine_UIElements_VisualElement__Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkAmigos.Amigo>.Dispose → TI_SparkAmigos → System_String__Format → LIT_"'Friends: {0}   Online: {1}'" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Your friend list is empty.'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add

## FriendWindow__OnDestroy
TI_FriendWindow → UnityEngine_Object__op_Equality → TI_FriendWindow → MD_FriendWindow.MostraLista → TI_SparkAmigos → System_Delegate__Remove → TI_SparkAmigos

## FriendWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → L2GameUI__WindowOpened → UnityEngine_UIElements_VisualElement__Clear → TI_SparkAmigos → MR_System.Collections.Generic.List<SparkAmigos.Amigo>.GetEnumerator → MR_System.Collections.Generic.List<SparkAmigos.Amigo>.MoveNext → TI_FriendWindow.<>c__DisplayClass23_0 → Gear__UpdateWeaponType → TI_SparkEstilo → SparkEstilo__Linha → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_FriendWindow → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkEstilo → SparkEstilo__Borda → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → LIT_"'Online'" → LIT_"'Offline'" → TI_SparkEstilo → TI_FriendWindow → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → System_String__Equals → SparkEstilo__Marca → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_FriendWindow.__c__DisplayClass23_0._MostraLista_b__0 → UnityEngine_UIElements_VisualElement__Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkAmigos.Amigo>.Dispose → TI_SparkAmigos → System_String__Format → LIT_"'Friends: {0}   Online: {1}'" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Your friend list is empty.'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add

## FriendWindow__ToggleHideWindow
TI_SparkAmigos → TI_SparkPacoteLivre → TI_SparkAmigos → SparkPacoteLivre__Fim

## GearSlot__HandleLeftClick
TI_InventoryWindow

## GearSlot__HandleRightClick


## GearSlot___ctor
L2DraggableSlot___ctor → TI_SlotClickSoundManipulator → SlotClickSoundManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator

## Gear__EscondeArmas
UnityEngine_Object__op_Inequality → UnityEngine_Component__get_gameObject → UnityEngine_GameObject__SetActive → UnityEngine_Object__op_Inequality → UnityEngine_Component__get_gameObject → UnityEngine_GameObject__SetActive

## Gear__GetLeftHandBone
UnityEngine_Object__op_Equality → UnityEngine_Component__get_transform → System_String__Concat → LIT_"'['" → LIT_"'] Shield bone was not assigned, please pre-assign bones ..." → UnityEngine_Debug__LogWarning → UnityEngine_Component__get_transform → TransformUtils__FindRecursive → LIT_"'Bow Bone'" → UnityEngine_Object__op_Equality → UnityEngine_Component__get_transform → System_String__Concat → LIT_"'['" → LIT_"'] Shield bone was not assigned, please pre-assign bones ..." → UnityEngine_Debug__LogWarning → UnityEngine_Component__get_transform → TransformUtils__FindRecursive → LIT_"'bow_bone'" → UnityEngine_Object__op_Equality → UnityEngine_Component__get_transform → System_String__Concat → LIT_"'['" → LIT_"'] Shield bone was not assigned, please pre-assign bones ..." → UnityEngine_Debug__LogWarning → UnityEngine_Component__get_transform → TransformUtils__FindRecursive → LIT_"'Sword Bone01'"

## Gear__GetRightHandBone
UnityEngine_Object__op_Equality → UnityEngine_Component__get_transform → System_String__Concat → LIT_"'['" → LIT_"'] Shield bone was not assigned, please pre-assign bones ..." → UnityEngine_Debug__LogWarning → UnityEngine_Component__get_transform → TransformUtils__FindRecursive → LIT_"'Sword Bone'"

## Gear__HideArrow
UnityEngine_Object__op_Inequality → UnityEngine_Component__get_gameObject → UnityEngine_GameObject__SetActive

## Gear__ShowArrow
UnityEngine_Object__op_Equality → UnityEngine_Object__op_Inequality → UnityEngine_Component__get_gameObject → UnityEngine_GameObject__SetActive → UnityEngine_Object__op_Inequality → TI_SparkMultidao → SparkMultidao__Anexou

## Gear__UpdateAppearance
Appearance__ShouldUpdateWeapons → UnityEngine_Object__op_Inequality → ParticleManager__ArmaTrocada

## Gear__UpdateWeaponType


## HighlightedInputFieldManipulator__NextBackgroundFrame
System_Int32__ToString → System_String__Concat → LIT_"'bg-highlight-'" → UnityEngine_UIElements_VisualElement__ClassListContains → System_Int32__ToString → System_String__Concat → LIT_"'bg-highlight-'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → System_Int32__ToString → System_String__Concat → LIT_"'bg-highlight-'" → UnityEngine_UIElements_VisualElement__AddToClassList

## HighlightedInputFieldManipulator__OnBlurEvent
System_Int32__ToString → System_String__Concat → LIT_"'bg-highlight-'" → UnityEngine_UIElements_VisualElement__ClassListContains → System_Int32__ToString → System_String__Concat → LIT_"'bg-highlight-'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList

## HighlightedInputFieldManipulator__OnFocusEvent


## HighlightedInputFieldManipulator__RegisterCallbacksOnTarget
MD_HighlightedInputFieldManipulator._RegisterCallbacksOnTarget_b__5_0 → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.BlurEvent> → MD_HighlightedInputFieldManipulator.OnBlurEvent → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.BlurEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.FocusEvent> → MD_HighlightedInputFieldManipulator.OnFocusEvent → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.FocusEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## HighlightedInputFieldManipulator__UnregisterCallbacksFromTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.BlurEvent> → MD_HighlightedInputFieldManipulator.OnBlurEvent → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.BlurEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.FocusEvent> → MD_HighlightedInputFieldManipulator.OnFocusEvent → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.FocusEvent> → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## HighlightedInputFieldManipulator___ctor
UnityEngine_UIElements_MouseManipulator___ctor → UnityEngine_UIElements_Manipulator__set_target → LIT_"'unity-text-input'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>

## HorizontalResizeManipulator__PointerDownHandler
UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_UIElements_PointerCaptureHelper__CapturePointer

## HorizontalResizeManipulator__PointerMoveHandler
UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## HorizontalResizeManipulator__PointerUpHandler
UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture → UnityEngine_UIElements_PointerCaptureHelper__ReleasePointer → UnityEngine_Object__op_Inequality → L2Window__GuardaTamanho

## HorizontalResizeManipulator__RegisterCallbacksOnTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_HorizontalResizeManipulator.PointerDownHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent> → MD_HorizontalResizeManipulator.PointerMoveHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerMoveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent> → MD_HorizontalResizeManipulator.PointerUpHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## HorizontalResizeManipulator__UnregisterCallbacksFromTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_HorizontalResizeManipulator.PointerDownHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent> → MD_HorizontalResizeManipulator.PointerMoveHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerMoveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent> → MD_HorizontalResizeManipulator.PointerUpHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerUpEvent> → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## HorizontalResizeManipulator___ctor
UnityEngine_UIElements_MouseManipulator___ctor → UnityEngine_UIElements_Manipulator__set_target

## HumanoidGear__UpdateWeaponAnim


## HumanoidGear__UpdateWeaponType


## InputManager__Awake
UnityEngine_Object__op_Equality → UnityEngine_Object__Destroy → MR_UnityEngine.Component.GetComponent<UnityEngine.InputSystem.PlayerInput> → UnityEngine_InputSystem_PlayerInput__get_actions → TI_SparkTeclas → SparkTeclas__CarregaJogo → TI_SparkOpcoes → SparkOpcoes__Carrega → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'LeftClick'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'RightClick'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'CameraAxis'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'ZoomAxis'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'Move'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'ArrowUp'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'ArrowDown'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'NextTarget'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'TargetSelf'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'Attack'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'Sit'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'Ctrl'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'Shift'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'Inventory'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'CharacterStatus'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'Actions'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'CloseWindow'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'SystemMenu'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'Skills'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'Validate'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'Test'" → UnityEngine_InputSystem_PlayerInput__get_actions → System_String__Format → LIT_"'Shortcut{0}-{1}'" → UnityEngine_InputSystem_InputActionAsset__g

## InputManager__OnDestroy


## InputManager__SetupInputActions
UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'LeftClick'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'RightClick'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'CameraAxis'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'ZoomAxis'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'Move'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'ArrowUp'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'ArrowDown'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'NextTarget'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'TargetSelf'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'Attack'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'Sit'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'Ctrl'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'Shift'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'Inventory'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'CharacterStatus'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'Actions'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'CloseWindow'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'SystemMenu'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'Skills'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'Validate'" → UnityEngine_InputSystem_PlayerInput__get_actions → UnityEngine_InputSystem_InputActionAsset__get_Item → LIT_"'Test'" → UnityEngine_InputSystem_PlayerInput__get_actions → System_String__Format → LIT_"'Shortcut{0}-{1}'" → UnityEngine_InputSystem_InputActionAsset__get_Item

## InputManager__UpdateInputs
MR_UnityEngine.InputSystem.InputAction.ReadValue<UnityEngine.Vector2> → UnityEngine_InputSystem_InputAction__WasPerformedThisFrame → UnityEngine_InputSystem_InputAction__WasReleasedThisFrame → UnityEngine_InputSystem_InputAction__IsPressed → UnityEngine_InputSystem_InputAction__WasPerformedThisFrame → UnityEngine_InputSystem_InputAction__IsPressed → L2GameUI__DisableMouse → MR_UnityEngine.InputSystem.InputAction.ReadValue<float> → L2GameUI__EnableMouse → UnityEngine_Object__op_Inequality → PlayerController__get_Voando → TI_ChatWindow → UnityEngine_Object__op_Inequality → System_Array__InternalArray__ICollection_get_Count → System_Array__Clear → System_Array__InternalArray__ICollection_get_Count → System_Array__Clear → TI_ChatWindow → ChatWindow__get_TeclaViraTexto → UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition → TI_SparkTeclas → SparkTeclas__Segurando → LIT_"'FlyRight'" → TI_SparkTeclas → SparkTeclas__Segurando → LIT_"'FlyLeft'" → TI_SparkTeclas → SparkTeclas__Segurando → LIT_"'FlyForward'" → TI_SparkTeclas → SparkTeclas__Segurando → LIT_"'FlyBack'" → UnityEngine_Vector2__Normalize → TI_SparkObservador → UnityEngine_InputSystem_InputAction__WasPerformedThisFrame → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'LowDetail'" → UnityEngine_InputSystem_InputAction__WasPerformedThisFrame → TI_SparkTeclas → SparkTeclas__get_Trocando → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'Skills'" → TI_SparkTeclas → SparkTeclas__TrocandoPagina → TI_SparkTeclas → SparkTeclas__TeclaDoVoo → UnityEngine_InputSystem_InputAction__WasPerformedThisFrame → UnityEngine_InputSystem_InputAction__IsPressed → UnityEngine_InputSystem_InputAction__WasPerformedThisFrame

## InputManager__Update
MR_UnityEngine.InputSystem.InputAction.ReadValue<UnityEngine.Vector2> → UnityEngine_InputSystem_InputAction__WasPerformedThisFrame → UnityEngine_InputSystem_InputAction__WasReleasedThisFrame → UnityEngine_InputSystem_InputAction__IsPressed → UnityEngine_InputSystem_InputAction__WasPerformedThisFrame → UnityEngine_InputSystem_InputAction__IsPressed → L2GameUI__DisableMouse → MR_UnityEngine.InputSystem.InputAction.ReadValue<float> → L2GameUI__EnableMouse → UnityEngine_Object__op_Inequality → PlayerController__get_Voando → TI_ChatWindow → UnityEngine_Object__op_Inequality → System_Array__InternalArray__ICollection_get_Count → System_Array__Clear → System_Array__InternalArray__ICollection_get_Count → System_Array__Clear → TI_ChatWindow → ChatWindow__get_TeclaViraTexto → UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition → TI_SparkTeclas → SparkTeclas__Segurando → LIT_"'FlyRight'" → TI_SparkTeclas → SparkTeclas__Segurando → LIT_"'FlyLeft'" → TI_SparkTeclas → SparkTeclas__Segurando → LIT_"'FlyForward'" → TI_SparkTeclas → SparkTeclas__Segurando → LIT_"'FlyBack'" → UnityEngine_Vector2__Normalize → TI_SparkObservador → UnityEngine_InputSystem_InputAction__WasPerformedThisFrame → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'LowDetail'" → UnityEngine_InputSystem_InputAction__WasPerformedThisFrame → TI_SparkTeclas → SparkTeclas__get_Trocando → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'Skills'" → TI_SparkTeclas → SparkTeclas__TrocandoPagina → TI_SparkTeclas → SparkTeclas__TeclaDoVoo → UnityEngine_InputSystem_InputAction__WasPerformedThisFrame → UnityEngine_InputSystem_InputAction__IsPressed → UnityEngine_InputSystem_InputAction__WasPerformedThisFrame

## InventoryGearTab__SelectSlot
MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>.get_Item

## InventoryGearTab__UpdateItemList
MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>.GetEnumerator → MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>.MoveNext → L2ClickableSlot__UnregisterClickableCallback → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>.Dispose → MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>.Clear → TI_System.Collections.Generic.Dictionary<Paperdoll,GearSlot> → MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>..ctor → MR_System.Collections.Generic.Dictionary<Paperdoll,UnityEngine.UIElements.VisualElement>.GetEnumerator → MR_System.Collections.Generic.Dictionary<Paperdoll,UnityEngine.UIElements.VisualElement>.MoveNext → System_String__Format → LIT_"'Inventory gear slot {0} is null.'" → UnityEngine_Debug__LogWarning → UnityEngine_UIElements_VisualElement__Clear → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → UnityEngine_UIElements_VisualElement__Add → TI_GearSlot → GearSlot___ctor → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<Paperdoll,UnityEngine.UIElements.VisualElement>.Dispose → MD_InventoryGearTab._UpdateItemList_b__4_0 → MR_System.Collections.Generic.List<ItemInstance>.ForEach

## InventorySlot__AddTooltip
TI_SparkDicaItem → SparkDicaItem__MontaSimples → TI_SparkDicaItem → SparkDicaItem__Monta → IconTable__get_Instance → IconTable__GetIcon → AllianceMessage___ctor

## InventorySlot__AssignItem
UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'empty'" → System_String__Format → LIT_"'Item data is null for item {0}.'" → UnityEngine_Debug__LogWarning → LIT_"'Unkown'" → LIT_"'Unkown item.'" → LIT_"''" → SparkMapaWindow_Loja___ctor → IconTable__get_Instance → IconTable__GetIcon → UnityEngine_UIElements_StyleBackground___ctor → UnityEngine_UIElements_VisualElement__get_style → InventorySlot__AtualizaQuantidade

## InventorySlot__AtualizaQuantidade
LIT_"'ItemQtd'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → LIT_"''" → InventorySlot__TextoQuantidade → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__set_name → LIT_"'ItemQtd'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__Add

## InventorySlot__ClearManipulators
L2DraggableSlot__ClearManipulators → UnityEngine_UIElements_VisualElementExtensions__RemoveManipulator

## InventorySlot__HandleLeftClick


## InventorySlot__HandleMiddleClick
AudioManager__PlayEquipSound → LIT_"'trash_basket'" → RequestDestroyItemPacket___ctor

## InventorySlot__TextoQuantidade
System_Globalization_CultureInfo__get_InvariantCulture → System_Int32__ToString → System_String__Concat → LIT_"'K'" → System_Single__ToString → LIT_"'0.#'" → System_Single__ToString → LIT_"'0.#'" → System_String__Concat → LIT_"'B'" → System_Int32__ToString → System_String__Concat → LIT_"'M'" → System_Int32__ToString

## InventorySlot__UseItem
Gear__UpdateWeaponType → PlayerInventory__GetItemByObjectId → System_String__ToLowerInvariant → LIT_"'recipe'" → TI_L2ConfirmWindow → UnityEngine_Object__op_Inequality → SparkUI__NomeDoItem → System_String__Concat → LIT_"'Register '" → LIT_"' in your recipe book?'" → MD_PlayerInventory.__c__DisplayClass34_0._UseItem_b__0 → MD_PlayerInventory.__c._UseItem_b__34_1 → L2ConfirmWindow__ShowWindow → GameClientPacketHandler__UseItem

## InventorySlot___ctor
L2DraggableSlot___ctor

## InventoryTab__SelectSlot


## InventoryTab__UpdateItemList
TI_InventoryWindow → L2SlotContainer__UpdateSlots → MD_InventoryTab.__c._UpdateItemList_b__10_0 → MR_System.Linq.Enumerable.OrderBy<ItemInstance,int> → TI_InventorySlot → InventoryTab__Pertence → TI_InventorySlot

## InventoryWindow__Awake
TI_InventoryWindow → UnityEngine_Object__op_Equality → TI_InventoryWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## InventoryWindow__BuildWindow
TI_InventoryWindow.<BuildWindow>d__37 → Gear__UpdateWeaponType

## InventoryWindow__CriaBotaoOrganizar
TI_InventoryWindow.<>c → MD_InventoryWindow.__c._CriaBotaoOrganizar_b__43_0 → TI_InventoryWindow.<>c → UnityEngine_UIElements_Button___ctor → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'inventory-sort-btn'" → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_TooltipManipulator → TooltipManipulator___ctor → LIT_"'Sort Items'" → UnityEngine_UIElements_VisualElementExtensions__AddManipulator

## InventoryWindow__HideWindow
AudioManager__PlayUISound → LIT_"'inventory_close_01'" → L2PopupWindow__HideWindow → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → System_ThrowHelper__ThrowArgumentOutOfRange_IndexException → System_Array__Copy

## InventoryWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/InventoryWindow/InventoryWindow'"

## InventoryWindow__OnDestroy
TI_InventoryWindow

## InventoryWindow__OnExpandButtonPressed
UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'expanded'" → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'expanded'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'expanded'" → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'expanded'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'expanded'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'expanded'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'expanded'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'expanded'" → InventoryWindow__UpdateItemList

## InventoryWindow__OnMinimizeInventoryClick
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MouseOverDetectionManipulator__Enable

## InventoryWindow__OnMinimizedInventoryClick
AudioManager__PlayUISound → LIT_"'click_01'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MouseOverDetectionManipulator__Disable

## InventoryWindow__SelectSlot


## InventoryWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'inventory_open_01'" → L2GameUI__WindowOpened → TI_ShopWindow

## InventoryWindow__ToggleHideWindow
UnityEngine_Object__op_Equality → GameClientPacketHandler__SendRequestOpenInventory

## InventoryWindow__UpdateItemList
MR_System.Collections.Generic.List<ItemInstance>..ctor → InventoryWindow__RefreshSlotsAndAdenas → InventoryWindow__RefreshWeight → InventoryGearTab__UpdateItemList → InventoryTab__UpdateItemList

## L2ClickableSlot__HandleLeftDoubleClick
System_String__Format → LIT_"'Slot {0} left double-clicked.'" → UnityEngine_Debug__Log

## L2ClickableSlot__HandleSlotClickDown
MR_UnityEngine.UIElements.MouseEventBase<UnityEngine.UIElements.MouseDownEvent>.get_shiftKey → TI_InventorySlot → TI_SparkLinkItem → SparkLinkItem__Linka → System_DateTimeOffset__get_UtcNow → System_DateTimeOffset__ToUnixTimeMilliseconds

## L2ClickableSlot__HandleSlotClickUp


## L2ClickableSlot__RegisterClickableCallback
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_L2ClickableSlot.HandleSlotClickDown → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent> → MD_L2ClickableSlot.HandleSlotClickUp → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>

## L2ClickableSlot__SetActive
LIT_"'active'" → MR_UnityEngine.UIElements.ObjectListPool<string>.Get → MR_System.Collections.Generic.List<string>.Contains → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → MR_System.Collections.Generic.List<string>.set_Capacity → MR_System.Collections.Generic.List<string>.Add

## L2ClickableSlot__SetSelected
System_String__Format → LIT_"'Slot {0} selected.'" → UnityEngine_Debug__Log → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'selected'"

## L2ClickableSlot__UnSelect
System_String__Format → LIT_"'Slot {0} unselected.'" → UnityEngine_Debug__Log → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'selected'"

## L2ClickableSlot__UnregisterClickableCallback
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_L2ClickableSlot.HandleSlotClickDown → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.MouseDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent> → MD_L2ClickableSlot.HandleSlotClickUp → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.MouseUpEvent>

## L2ClickableSlot__UnsetActive
LIT_"'active'" → MR_System.Collections.Generic.List<string>.Remove → MR_UnityEngine.UIElements.ObjectListPool<string>.Release

## L2ClickableSlot___ctor
L2Slot___ctor → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_L2ClickableSlot.HandleSlotClickDown → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent> → MD_L2ClickableSlot.HandleSlotClickUp → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>

## L2ConfirmWindow__Awake
TI_L2ConfirmWindow

## L2ConfirmWindow__BuildWindow
TI_L2ConfirmWindow.<BuildWindow>d__20 → Gear__UpdateWeaponType

## L2ConfirmWindow__Executa


## L2ConfirmWindow__FechaJanela
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → AudioManager__PlayUISound → LIT_"'window_close'" → L2Window__HideWindow → UnityEngine_Object__op_Inequality → MR_System.Collections.Generic.List<L2PopupWindow>.Remove

## L2ConfirmWindow__HideWindow
L2ConfirmWindow__FechaJanela → L2ConfirmWindow__MostraProximo → MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.get_Item → MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.RemoveAt → L2ConfirmWindow__Mostra → L2ConfirmWindow__Executa → UnityEngine_Object__op_Inequality → L2ConfirmWindow__FechaJanela → L2ConfirmWindow__Executa → L2ConfirmWindow__MostraProximo → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → AudioManager__PlayUISound → LIT_"'window_close'" → L2Window__HideWindow → UnityEngine_Object__op_Inequality → MR_System.Collections.Generic.List<L2PopupWindow>.Remove

## L2ConfirmWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Components/L2ConfirmWindow/L2ConfirmWi..."

## L2ConfirmWindow__MontaTempo
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_Label___ctor → LIT_"''" → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__IndexOf → UnityEngine_UIElements_VisualElement__Insert

## L2ConfirmWindow__MostraProximo
MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.get_Item → MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.RemoveAt → L2ConfirmWindow__Mostra → L2ConfirmWindow__Executa

## L2ConfirmWindow__Mostra
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → L2ConfirmWindow__AtualizaTempo → L2Window__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → UnityEngine_Object__op_Inequality → L2GameUI__WindowOpened

## L2ConfirmWindow__ShowWindow
SystemMessage__PrintMessage → TI_L2ConfirmWindow.Pedido → Gear__UpdateWeaponType

## L2ConfirmWindow__ShowWindow
TI_L2ConfirmWindow.Pedido → Gear__UpdateWeaponType

## L2ConfirmWindow__ShowWindow
L2ConfirmWindow__ShowWindow

## L2ConfirmWindow__ShowWindow
SystemMessageTable__get_Instance → SystemMessageTable__GetSystemMessage → LIT_"'Unkown SystemMessageId.'" → L2ConfirmWindow__ShowWindow

## L2ConfirmWindow__ShowWindow
SystemMessage__PrintMessage → L2ConfirmWindow__ShowWindow

## L2ConfirmWindow__Update
L2ConfirmWindow__Responde → L2ConfirmWindow__AtualizaTempo → MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.get_Item → MR_System.Collections.Generic.List<L2ConfirmWindow.Pedido>.RemoveAt → L2ConfirmWindow__Executa

## L2DraggableSlot__ClearManipulators
L2Slot__ClearManipulators → UnityEngine_UIElements_VisualElementExtensions__RemoveManipulator

## L2DraggableSlot___ctor
L2Slot___ctor → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_L2ClickableSlot.HandleSlotClickDown → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent> → MD_L2ClickableSlot.HandleSlotClickUp → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent> → TI_SlotDragManipulator → SlotDragManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator

## L2GameUI__Awake
UnityEngine_Object__op_Equality → UnityEngine_Object__Destroy → TI_System.Collections.Generic.List<L2PopupWindow> → MR_System.Collections.Generic.List<L2PopupWindow>..ctor

## L2GameUI__CheckUIInputs
TI_CharacterInfoWindow → UnityEngine_Object__op_Inequality → TI_CharacterInfoWindow → TI_InventoryWindow → UnityEngine_Object__op_Inequality → TI_InventoryWindow → TI_SystemMenuWindow → UnityEngine_Object__op_Inequality → TI_SystemMenuWindow → TI_ChatWindow → UnityEngine_Object__op_Inequality → TI_ChatWindow → ChatWindow__get_TeclaViraTexto → TI_SparkTeclas → SparkTeclas__get_Trocando → TI_SparkTeclas → SparkTeclas__PaginaPedida → UnityEngine_Object__op_Inequality → SkillbarWindow__OnPageChanged → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'HideUI'" → L2GameUI__TrocaInterface → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'Mute'" → TI_SparkOpcoes → SparkOpcoes__TrocaMudo → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'LowDetail'" → TI_SparkOpcoes → SparkOpcoes__TrocaMinimo → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'HideChat'" → TI_ChatWindow → ChatWindow__TrocaOculto → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'PartyBuffs'" → PartyWindow__TrocaModoBuff → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'ResetLayout'" → TI_L2Window → L2Window__TodasNaPosicaoPadrao → SparkQuestHud__Padrao → TI_ChatWindow → ChatWindow__TamanhoPadrao → TI_SparkComandos → SparkComandos__Diz → LIT_"'The interface was reset to the default layout.'" → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'Macro'" → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'Gm'" → TI_SparkGmWindow → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'Quest'" → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'Clan'" → TI_ClanWindow → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'Friends'" → TI_FriendWindow → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'Map'" → TI_SparkMapaWindow → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'Radar'" → TI_SparkRadarWindow → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'Board'" → TI_BoardWindow → TI_ActionWindow → UnityEngine_Object__op_Inequality → TI_ActionWindow → TI_SparkTeclas → SparkTeclas__get_Trocando → TI_SparkTeclas → TI_ChatWindow → UnityEngine_Object__op_Inequality → TI_ChatWindow → ChatWindow__CloseChat → TI_System.Predicate<L2PopupWindow> → MD_L2GameUI.__c._CheckUIInputs_b__17_0 → MR_System.Collections.Generic.List<L2PopupWindow>.RemoveAll → MR_System.Collections.Generic.List<L2PopupWindow>.get_Item → UnityEngine_Object__op_Inequality → TargetManager__HasTarget → TargetManager__ClearTarget → TI_SkillWindow → UnityEngine_Object__op_Inequality → TI_SkillWindow

## L2GameUI__DisableMouse


## L2GameUI__EnableMouse


## L2GameUI__LoadUI
L2UI__LoadUI → UnityEngine_Object__op_Inequality → L2UI__StartLoading → TI_ChatWindow → UnityEngine_Object__op_Inequality → TI_ChatWindow → L2Window__AddWindow → TI_SystemMenuWindow → UnityEngine_Object__op_Inequality → TI_SystemMenuWindow → L2Window__AddWindow → TI_SystemMenuWindow → TI_MenuWindow → UnityEngine_Object__op_Inequality → TI_MenuWindow → L2Window__AddWindow → TI_MenuWindow → TI_StatusWindow → UnityEngine_Object__op_Inequality → TI_StatusWindow → L2Window__AddWindow → TI_StatusWindow → TI_PartyWindow → UnityEngine_Object__op_Equality → UnityEngine_Component__get_gameObject → MR_UnityEngine.GameObject.AddComponent<PartyWindow> → TI_PartyWindow → SparkRefinoWindow__Monta → TI_PartyWindow → TI_PetStatusWindow → UnityEngine_Object__op_Equality → UnityEngine_Component__get_gameObject → MR_UnityEngine.GameObject.AddComponent<PetStatusWindow> → TI_PetStatusWindow → SparkRefinoWindow__Monta → TI_PetStatusWindow → TI_UnionWindow → UnityEngine_Object__op_Equality → UnityEngine_Component__get_gameObject → MR_UnityEngine.GameObject.AddComponent<UnionWindow> → TI_UnionWindow → SparkRefinoWindow__Monta → TI_UnionWindow → TI_TradeWindow → UnityEngine_Object__op_Equality → UnityEngine_Component__get_gameObject → MR_UnityEngine.GameObject.AddComponent<TradeWindow> → TI_TradeWindow → L2Window__AddWindow → TI_PrivateShopWindow → UnityEngine_Object__op_Equality → UnityEngine_Component__get_gameObject → MR_UnityEngine.GameObject.AddComponent<PrivateShopWindow> → TI_PrivateShopWindow → SparkRefinoWindow__Monta → TI_PrivateShopWindow → TI_SparkQuestWindow → UnityEngine_Object__op_Equality → UnityEngine_Component__get_gameObject → MR_UnityEngine.GameObject.AddComponent<SparkQuestWindow> → TI_SparkQuestWindow → SparkRefinoWindow__Monta → TI_SparkQuestWindow → TI_SparkHennaWindow → UnityEngine_Object__op_Equality → UnityEngine_Component__get_gameObject → MR_UnityEngine.GameObject.AddComponent<SparkHennaWindow> → TI_SparkHennaWindow → SparkRefinoWindow__Monta → TI_SparkHennaWindow → TI_SparkGmWindow → UnityEngine_Object__op_Equality → UnityEngine_Component__get_gameObject → MR_UnityEngine.GameObject.AddComponent<SparkGmWindow> → TI_SparkGmWindow → SparkRefinoWindow__Monta → TI_SparkGmWindow → TI_SparkRastreioWindow → UnityEngine_Object__op_Equality → UnityEngine_Component__get_gameObject → MR_UnityEngine.GameObject.AddComponent<SparkRastreioWindow> → TI_SparkRastreioWindow → SparkRefinoWindow__Monta → TI_SparkRastreioWindow → TI_SparkCraftWindow → UnityEngine_Object__op_Equality → UnityEngine_Component__get_gameObject → MR_UnityEngine.GameObject.AddComponent<SparkCraftWindow> → TI_SparkCraftWindow → SparkRefinoWindow__Monta → TI_SparkCraftWindow → TI_SparkRefinoWindow → UnityEngine_Object__op_Equality → UnityEngine_Component__get_gameObject → MR_UnityEngine.GameObject.AddComponent<SparkRefinoWindow> → TI_SparkRefinoWindow → SparkRefinoWindow__Monta → TI_SparkRefinoWindow → TI_OptionsWindow → UnityEngine_Object__op_Inequality → TI_OptionsWindow → UnityEngine_Ob

## L2GameUI__OnDestroy


## L2GameUI__OnGUI


## L2GameUI__Start


## L2GameUI__TrocaInterface
CursorManager__Reaplica → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## L2GameUI__Update
L2UI__Update → UnityEngine_Object__op_Inequality → TI_CharacterInfoWindow → UnityEngine_Object__op_Inequality → TI_CharacterInfoWindow → TI_InventoryWindow → UnityEngine_Object__op_Inequality → TI_InventoryWindow → TI_SystemMenuWindow → UnityEngine_Object__op_Inequality → TI_SystemMenuWindow → TI_ChatWindow → UnityEngine_Object__op_Inequality → TI_ChatWindow → ChatWindow__get_TeclaViraTexto → TI_SparkTeclas → SparkTeclas__get_Trocando → TI_SparkTeclas → SparkTeclas__PaginaPedida → UnityEngine_Object__op_Inequality → SkillbarWindow__OnPageChanged → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'HideUI'" → L2GameUI__TrocaInterface → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'Mute'" → TI_SparkOpcoes → SparkOpcoes__TrocaMudo → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'LowDetail'" → TI_SparkOpcoes → SparkOpcoes__TrocaMinimo → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'HideChat'" → TI_ChatWindow → ChatWindow__TrocaOculto → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'PartyBuffs'" → PartyWindow__TrocaModoBuff → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'ResetLayout'" → TI_L2Window → L2Window__TodasNaPosicaoPadrao → SparkQuestHud__Padrao → TI_ChatWindow → ChatWindow__TamanhoPadrao → TI_SparkComandos → SparkComandos__Diz → LIT_"'The interface was reset to the default layout.'" → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'Macro'" → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'Gm'" → TI_SparkGmWindow → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'Quest'" → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'Clan'" → TI_ClanWindow → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'Friends'" → TI_FriendWindow → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'Map'" → TI_SparkMapaWindow → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'Radar'" → TI_SparkRadarWindow → TI_SparkTeclas → SparkTeclas__Apertou → LIT_"'Board'" → TI_BoardWindow → TI_ActionWindow → UnityEngine_Object__op_Inequality → TI_ActionWindow → TI_SparkTeclas → SparkTeclas__get_Trocando → TI_SparkTeclas → TI_ChatWindow → UnityEngine_Object__op_Inequality → TI_ChatWindow → ChatWindow__CloseChat → TI_System.Predicate<L2PopupWindow> → MD_L2GameUI.__c._CheckUIInputs_b__17_0 → MR_System.Collections.Generic.List<L2PopupWindow>.RemoveAll → MR_System.Collections.Generic.List<L2PopupWindow>.get_Item → UnityEngine_Object__op_Inequality → TargetManager__HasTarget → TargetManager__ClearTarget → TI_SkillWindow → UnityEngine_Object__op_Inequality → TI_SkillWindow

## L2GameUI__WindowClosed
MR_System.Collections.Generic.List<L2PopupWindow>.Remove → System_ThrowHelper__ThrowArgumentOutOfRange_IndexException → System_Array__Copy

## L2GameUI__WindowOpened
MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## L2GameUI___ctor


## L2InputAmountWindow__Awake
TI_L2InputAmountWindow

## L2InputAmountWindow__BuildWindow
TI_L2InputAmountWindow.<BuildWindow>d__14 → Gear__UpdateWeaponType

## L2InputAmountWindow__HideWindow
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → AudioManager__PlayUISound → LIT_"'window_close'" → L2Window__HideWindow → UnityEngine_Object__op_Inequality → MR_System.Collections.Generic.List<L2PopupWindow>.Remove

## L2InputAmountWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Components/L2InputAmountWindow/L2Input..."

## L2InputAmountWindow__RegisterDigitButton
TI_L2InputAmountWindow.<>c__DisplayClass15_0 → Gear__UpdateWeaponType → L2Window__GetElementById → LIT_"'L2Button'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button> → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent> → MD_L2InputAmountWindow.__c__DisplayClass15_0._RegisterDigitButton_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## L2InputAmountWindow__ShowWindow
SystemMessageTable__get_Instance → SystemMessageTable__GetSystemMessage → LIT_"'Unkown SystemMessageId.'" → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → L2Window__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → UnityEngine_Object__op_Inequality → L2GameUI__WindowOpened

## L2InputAmountWindow__ShowWindow
SystemMessage__PrintMessage → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → L2Window__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → UnityEngine_Object__op_Inequality → L2GameUI__WindowOpened

## L2InputAmountWindow__ShowWindow
LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → L2Window__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → UnityEngine_Object__op_Inequality → L2GameUI__WindowOpened

## L2LoginUI__AutoLogin
Gear__UpdateWeaponType

## L2LoginUI__Awake
UnityEngine_Object__op_Equality → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## L2LoginUI__LoadUI
L2UI__LoadUI → TI_LoginWindow → L2Window__AddWindow → TI_LoginWindow → TI_CharSelectWindow → L2Window__AddWindow → TI_CharSelectWindow → TI_CharCreationWindow → L2Window__AddWindow → TI_CharCreationWindow → TI_LicenseWindow → L2Window__AddWindow → TI_LicenseWindow → TI_ServerSelectWindow → L2Window__AddWindow → TI_ServerSelectWindow → TI_L2ConfirmWindow → L2Window__AddWindow → TI_L2ConfirmWindow → TI_OptionsWindow → UnityEngine_Object__op_Equality → UnityEngine_Component__get_gameObject → MR_UnityEngine.GameObject.AddComponent<OptionsWindow> → TI_OptionsWindow → SparkRefinoWindow__Monta → TI_OptionsWindow → TI_SparkOpcoes → SparkOpcoes__AplicaTudo → Gear__UpdateWeaponType → UnityEngine_MonoBehaviour__StartCoroutine

## L2LoginUI__OnDestroy


## L2LoginUI__ShowCharCreationWindow
TI_CharSelectWindow → TI_CharCreationWindow

## L2LoginUI__ShowCharSelectWindow
TI_LoginWindow → TI_CharCreationWindow → TI_CharSelectWindow → TI_ServerSelectWindow

## L2LoginUI__ShowLicenseWindow
TI_LoginWindow → TI_LicenseWindow → TI_ServerSelectWindow

## L2LoginUI__ShowLoginWindow
TI_CharSelectWindow → TI_LoginWindow → TI_CharCreationWindow → TI_CharSelectWindow → TI_LicenseWindow → TI_ServerSelectWindow

## L2LoginUI__ShowServerSelectWindow
TI_LoginWindow → TI_LicenseWindow → TI_ServerSelectWindow

## L2LoginUI__Start


## L2LoginUI__Update
UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_UIElements_FocusController__get_focusedElement → MR_UnityEngine.Component.GetComponent<UnityEngine.UIElements.UIDocument>

## L2LoginUI___ctor


## L2PopupWindow__HideWindow
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## L2PopupWindow__RegisterClickWindowEvent
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_L2PopupWindow._RegisterClickWindowEvent_b__1_0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_L2PopupWindow._RegisterClickWindowEvent_b__1_1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>

## L2PopupWindow__RegisterCloseWindowEvent
L2Window__GetElementByClass → System_String__Concat → LIT_"'Cant find close button with className: '" → LIT_"'.'" → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent> → MD_L2PopupWindow._RegisterCloseWindowEvent_b__0_0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## L2PopupWindow__ShowWindow
L2Window__ShowWindow

## L2Scrollable__AdjustScrollValue
UnityEngine_UIElements_VisualElement__get_worldBound → UnityEngine_UIElements_Scroller__get_value → UnityEngine_UIElements_Scroller__get_highValue → UnityEngine_UIElements_Scroller__set_value

## L2Scrollable__InitScroller
LIT_"'ScrollView'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.ScrollView> → LIT_"'unity-high-button'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.RepeatButton>,unaff_RDI → LIT_"'unity-low-button'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.RepeatButton> → LIT_"'unity-drag-container'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent> → MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent> → MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent> → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent> → MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.WheelEvent> → MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_3 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.WheelEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.WheelEvent> → MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_4 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.WheelEvent>

## L2Scrollable__Initialize
LIT_"'ScrollView'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.ScrollView> → LIT_"'unity-high-button'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.RepeatButton>,unaff_RDI → LIT_"'unity-low-button'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.RepeatButton> → LIT_"'unity-drag-container'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent> → MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent> → MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent> → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent> → MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.WheelEvent> → MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_3 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.WheelEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.WheelEvent> → MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_4 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.WheelEvent>

## L2Scrollable__RegisterPlayerScrollEvent
LIT_"'unity-high-button'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.RepeatButton> → LIT_"'unity-low-button'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.RepeatButton> → LIT_"'unity-drag-container'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent> → MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent> → MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent> → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent> → MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.WheelEvent> → MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_3 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.WheelEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.WheelEvent> → MD_L2Scrollable._RegisterPlayerScrollEvent_b__17_4 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.WheelEvent>

## L2Scrollable__VerifyScrollValue
UnityEngine_UIElements_Scroller__get_highValue → UnityEngine_UIElements_Scroller__get_value → UnityEngine_UIElements_Scroller__get_highValue → UnityEngine_UIElements_Scroller__get_value

## L2Scrollable___ctor


## L2SlotContainer__AssignAction
TI_ActionSlot → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'empty'" → ActionNameTable__get_Instance → ActionNameTable__GetAction → UnityEngine_UIElements_VisualElement__get_style → IconTable__get_Instance → IconTable__LoadTextureByName → UnityEngine_UIElements_StyleBackground__op_Implicit → System_Int32__ToString → System_String__Concat → LIT_"'Action '"

## L2SlotContainer__AssignItemsToSlots
MD_L2SlotContainer._AssignItemsToSlots_b__19_0 → MR_System.Collections.Generic.List<ItemInstance>.ForEach

## L2SlotContainer__AssignSkill
TI_SkillSlot → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_SlotAnimationManipulator → SlotAnimationManipulator___ctor → IconTable__get_Instance → IconTable__LoadTextureByName → UnityEngine_UIElements_StyleBackground___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'empty'" → PlayerSkill__GetSkillInfo

## L2SlotContainer__ClearSlots
TI_InventorySlot → L2ClickableSlot__UnregisterClickableCallback → UnityEngine_UIElements_VisualElement_Hierarchy__Clear → UnityEngine_UIElements_VisualElement__Clear

## L2SlotContainer__CreateSlotElements
L2SlotContainer__InstantiateSlot

## L2SlotContainer__CreateSlots
TI_InventorySlot → L2ClickableSlot__UnregisterClickableCallback → UnityEngine_UIElements_VisualElement__Clear → TI_L2Slot__,param_2 → L2SlotContainer__InstantiateSlot → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'disabled'"

## L2SlotContainer__Initialize
LIT_"'ScrollView'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.ScrollView> → L2Scrollable__RegisterPlayerScrollEvent → LIT_"'Content'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>

## L2SlotContainer__InstantiateSlot
TI_L2SlotManager → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → TI_InventorySlot → GearSlot___ctor → UnityEngine_Debug__LogWarning → LIT_"'Invalid slot type assigned to slot container!'" → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → TI_SkillSlot → SkillSlot___ctor → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → TI_ActionSlot → ActionSlot___ctor → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → TI_ProductSlot → BasketSlot___ctor → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → TI_BasketSlot → BasketSlot___ctor → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → TI_TradeSlot → BasketSlot___ctor → UnityEngine_UIElements_VisualElement__Add

## L2SlotContainer__PadSlots
L2SlotContainer__InstantiateSlot → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'disabled'"

## L2SlotContainer__SelectDefaultSlot


## L2SlotContainer__SelectSlot


## L2SlotContainer__UpdateSlots
TI_InventorySlot → L2ClickableSlot__UnregisterClickableCallback → UnityEngine_UIElements_VisualElement__Clear → TI_L2Slot__,uVar6 → L2SlotContainer__InstantiateSlot → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'disabled'"

## L2SlotManager__AddActionToSkillbar
TI_ActionSlot → System_String__Format → LIT_"'Add action ID {0} into skillbar slot {1}.'" → UnityEngine_Debug__LogWarning → PlayerShortcuts__AddShortcut

## L2SlotManager__AddItemToSkillbar
TI_InventorySlot → System_String__Format → LIT_"'Add item {0} to skillbar slot {1}.'" → UnityEngine_Debug__LogWarning → PlayerShortcuts__AddShortcut

## L2SlotManager__AddSkillToSkillbar
TI_SkillSlot → System_String__Format → LIT_"'Add skill {0} to skillbar slot {1}.'" → UnityEngine_Debug__LogWarning → PlayerShortcuts__AddShortcut

## L2SlotManager__Awake
TI_L2SlotManager → UnityEngine_Object__op_Equality → TI_L2SlotManager → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## L2SlotManager__BuildWindow
TI_L2SlotManager.<BuildWindow>d__24 → Gear__UpdateWeaponType

## L2SlotManager__ChangeItemOrder
System_String__Format → LIT_"'Moving item from slot {0} to slot {1}.'" → UnityEngine_Debug__Log → PlayerInventory__ChangeItemOrder

## L2SlotManager__CrystallizeItem
TI_L2SlotManager.<>c__DisplayClass47_0 → Gear__UpdateWeaponType → TI_InventorySlot → SMParam___ctor → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → TI_L2ConfirmWindow → MD_L2SlotManager.__c__DisplayClass47_0._CrystallizeItem_b__0 → TI_L2SlotManager.<>c → MD_L2SlotManager.__c._CrystallizeItem_b__47_1 → TI_L2SlotManager.<>c → L2ConfirmWindow__ShowWindow

## L2SlotManager__DestroyItem
TI_L2SlotManager.<>c__DisplayClass46_0 → Gear__UpdateWeaponType → TI_InventorySlot → SMParam___ctor → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → TI_L2ConfirmWindow → MD_L2SlotManager.__c__DisplayClass46_0._DestroyItem_b__0 → TI_L2SlotManager.<>c → MD_L2SlotManager.__c._DestroyItem_b__46_1 → TI_L2SlotManager.<>c → L2ConfirmWindow__ShowWindow → System_String__Format → LIT_"'Destroy {0}.'" → UnityEngine_Debug__Log → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → TI_L2InputAmountWindow → MD_L2SlotManager.__c__DisplayClass46_0._DestroyItem_b__2 → TI_L2SlotManager.<>c → MD_L2SlotManager.__c._DestroyItem_b__46_3 → TI_L2SlotManager.<>c → L2InputAmountWindow__ShowWindow

## L2SlotManager__DragSlot
UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_MacroWindow → MacroWindow__Arrastando → TI_MacroWindow

## L2SlotManager__DropItem
TI_L2SlotManager.<>c__DisplayClass45_0 → Gear__UpdateWeaponType → TI_InventorySlot → SMParam___ctor → L2SlotManager__PontoDoDrop → TI_ChatWindow → SystemMessageTable__get_Instance → SystemMessageTable__GetSystemMessage → AllianceMessage___ctor → ChatWindow__ReceiveSystemMessage → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → TI_L2ConfirmWindow → MD_L2SlotManager.__c__DisplayClass45_0._DropItem_b__0 → TI_L2SlotManager.<>c → MD_L2SlotManager.__c._DropItem_b__45_1 → TI_L2SlotManager.<>c → L2ConfirmWindow__ShowWindow → System_String__Format → LIT_"'Drop {0}.'" → UnityEngine_Debug__Log → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → TI_L2InputAmountWindow → MD_L2SlotManager.__c__DisplayClass45_0._DropItem_b__2 → TI_L2SlotManager.<>c → MD_L2SlotManager.__c._DropItem_b__45_3 → TI_L2SlotManager.<>c → L2InputAmountWindow__ShowWindow

## L2SlotManager__Equip
TI_InventorySlot → System_String__Format → LIT_"'Equip {0}.'" → UnityEngine_Debug__Log

## L2SlotManager__HandleActionDrag
TI_ActionSlot → System_String__Format → LIT_"'Add action ID {0} into skillbar slot {1}.'" → UnityEngine_Debug__LogWarning → PlayerShortcuts__AddShortcut

## L2SlotManager__HandleBasketDrag
TI_BasketSlot

## L2SlotManager__HandleDragRelease
TI_InventorySlot → System_String__Format → LIT_"'Moving item from slot {0} to slot {1}.'" → UnityEngine_Debug__Log → PlayerInventory__ChangeItemOrder → TI_InventorySlot → System_String__Format → LIT_"'Equip {0}.'" → UnityEngine_Debug__Log → L2SlotManager__AddItemToSkillbar → L2SlotManager__DestroyItem → L2SlotManager__CrystallizeItem → L2SlotManager__DropItem → TI_GearSlot → System_String__Format → LIT_"'Unequip {0}.'" → UnityEngine_Debug__Log → TI_InventorySlot → System_String__Format → LIT_"'Add item {0} to skillbar slot {1}.'" → UnityEngine_Debug__LogWarning → PlayerShortcuts__AddShortcut → TI_L2SlotManager.<>c__DisplayClass47_0 → Gear__UpdateWeaponType → TI_InventorySlot → SMParam___ctor → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → TI_L2ConfirmWindow → MD_L2SlotManager.__c__DisplayClass47_0._CrystallizeItem_b__0 → TI_L2SlotManager.<>c → MD_L2SlotManager.__c._CrystallizeItem_b__47_1 → TI_L2SlotManager.<>c → L2ConfirmWindow__ShowWindow → TI_L2SlotManager.<>c__DisplayClass46_0 → Gear__UpdateWeaponType → TI_InventorySlot → SMParam___ctor → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → TI_L2ConfirmWindow → MD_L2SlotManager.__c__DisplayClass46_0._DestroyItem_b__0 → TI_L2SlotManager.<>c → MD_L2SlotManager.__c._DestroyItem_b__46_1 → TI_L2SlotManager.<>c → L2ConfirmWindow__ShowWindow → System_String__Format → LIT_"'Destroy {0}.'" → UnityEngine_Debug__Log → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → TI_L2InputAmountWindow → MD_L2SlotManager.__c__DisplayClass46_0._DestroyItem_b__2 → TI_L2SlotManager.<>c → MD_L2SlotManager.__c._DestroyItem_b__46_3 → TI_L2SlotManager.<>c → L2InputAmountWindow__ShowWindow → TI_SkillbarWindow → TI_SkillSlot → System_String__Format → LIT_"'Add skill {0} to skillbar slot {1}.'" → UnityEngine_Debug__LogWarning → TI_SkillbarWindow → System_String__Format → LIT_"'Moving skillbar shortcut from slot {0} to slot {1}.'" → UnityEngine_Debug__LogWarning → PlayerShortcuts__MoveShortcut → System_String__Format → LIT_"'Removing skillbar shortcut from slot {0}.'" → UnityEngine_Debug__LogWarning → PlayerShortcuts__DeleteShortcut → TI_ActionSlot → System_String__Format → LIT_"'Add action ID {0} into skillbar slot {1}.'" → UnityEngine_Debug__LogWarning → TI_ProductSlot → TI_BasketSlot → TI_TradeSlot → TradeSlot__get_Grade → TI_MacroSlot → PlayerShortcuts__AddShortcut

## L2SlotManager__HandleGearDrag
TI_GearSlot → System_String__Format → LIT_"'Unequip {0}.'" → UnityEngine_Debug__Log → TI_InventorySlot → System_String__Format → LIT_"'Add item {0} to skillbar slot {1}.'" → UnityEngine_Debug__LogWarning → PlayerShortcuts__AddShortcut → TI_L2SlotManager.<>c__DisplayClass46_0 → Gear__UpdateWeaponType → TI_InventorySlot → SMParam___ctor → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → TI_L2ConfirmWindow → MD_L2SlotManager.__c__DisplayClass46_0._DestroyItem_b__0 → TI_L2SlotManager.<>c → MD_L2SlotManager.__c._DestroyItem_b__46_1 → TI_L2SlotManager.<>c → L2ConfirmWindow__ShowWindow → System_String__Format → LIT_"'Destroy {0}.'" → UnityEngine_Debug__Log → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → TI_L2InputAmountWindow → MD_L2SlotManager.__c__DisplayClass46_0._DestroyItem_b__2 → TI_L2SlotManager.<>c → MD_L2SlotManager.__c._DestroyItem_b__46_3 → TI_L2SlotManager.<>c → L2InputAmountWindow__ShowWindow → TI_L2SlotManager.<>c__DisplayClass47_0 → Gear__UpdateWeaponType → TI_InventorySlot → SMParam___ctor → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → TI_L2ConfirmWindow → MD_L2SlotManager.__c__DisplayClass47_0._CrystallizeItem_b__0 → TI_L2SlotManager.<>c → MD_L2SlotManager.__c._CrystallizeItem_b__47_1 → TI_L2SlotManager.<>c → L2ConfirmWindow__ShowWindow

## L2SlotManager__HandleInventoryDrag
TI_InventorySlot → System_String__Format → LIT_"'Moving item from slot {0} to slot {1}.'" → UnityEngine_Debug__Log → PlayerInventory__ChangeItemOrder → TI_InventorySlot → System_String__Format → LIT_"'Equip {0}.'" → UnityEngine_Debug__Log → L2SlotManager__AddItemToSkillbar → L2SlotManager__DestroyItem → L2SlotManager__CrystallizeItem → L2SlotManager__DropItem

## L2SlotManager__HandleProductDrag
TI_ProductSlot

## L2SlotManager__HandleSkillDrag
TI_SkillbarWindow → TI_SkillSlot → System_String__Format → LIT_"'Add skill {0} to skillbar slot {1}.'" → UnityEngine_Debug__LogWarning → PlayerShortcuts__AddShortcut

## L2SlotManager__HandleSkillbarDrag
TI_SkillbarWindow → System_String__Format → LIT_"'Moving skillbar shortcut from slot {0} to slot {1}.'" → UnityEngine_Debug__LogWarning → PlayerShortcuts__MoveShortcut → System_String__Format → LIT_"'Removing skillbar shortcut from slot {0}.'" → UnityEngine_Debug__LogWarning → PlayerShortcuts__DeleteShortcut

## L2SlotManager__HideWindow
UnityEngine_UIElements_VisualElement__get_style

## L2SlotManager__IsItemGear


## L2SlotManager__IsSameSlot


## L2SlotManager__IsValidDrag


## L2SlotManager__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Components/L2Slot/DraggedSlot'"

## L2SlotManager__MoveSkillbarSlot
System_String__Format → LIT_"'Moving skillbar shortcut from slot {0} to slot {1}.'" → UnityEngine_Debug__LogWarning → PlayerShortcuts__MoveShortcut

## L2SlotManager__OnDestroy
TI_L2SlotManager

## L2SlotManager__PontoDoDrop
UnityEngine_Component__get_transform → UnityEngine_Transform__get_position → UnityEngine_Camera__get_main → UnityEngine_Object__op_Equality → UnityEngine_Input__get_mousePosition → UnityEngine_Camera__ScreenPointToRay → UnityEngine_Physics__Raycast

## L2SlotManager__ReleaseDrag
TI_MacroWindow → UnityEngine_Object__op_Inequality → TI_MacroWindow → MacroWindow__Solta → TI_MacroWindow → TI_InventorySlot → TI_PetWindow → UnityEngine_Object__op_Inequality → TI_PetWindow → PetWindow__AceitaSoltar → TI_PetWindow → PetWindow__RecebeItem → TI_InventorySlot → System_String__Format → LIT_"'Moving item from slot {0} to slot {1}.'" → UnityEngine_Debug__Log → PlayerInventory__ChangeItemOrder → TI_InventorySlot → LIT_"'Equip {0}.'" → TI_InventorySlot → System_String__Format → LIT_"'Add item {0} to skillbar slot {1}.'" → UnityEngine_Debug__LogWarning → L2SlotManager__DestroyItem → L2SlotManager__CrystallizeItem → L2SlotManager__DropItem → TI_GearSlot → LIT_"'Unequip {0}.'" → System_String__Format → UnityEngine_Debug__Log → TI_InventorySlot → System_String__Format → LIT_"'Add item {0} to skillbar slot {1}.'" → UnityEngine_Debug__LogWarning → TI_SkillbarWindow → TI_SkillSlot → System_String__Format → LIT_"'Add skill {0} to skillbar slot {1}.'" → UnityEngine_Debug__LogWarning → TI_SkillbarWindow → System_String__Format → LIT_"'Removing skillbar shortcut from slot {0}.'" → UnityEngine_Debug__LogWarning → System_String__Format → LIT_"'Moving skillbar shortcut from slot {0} to slot {1}.'" → UnityEngine_Debug__LogWarning → PlayerShortcuts__MoveShortcut → System_String__Format → LIT_"'Removing skillbar shortcut from slot {0}.'" → UnityEngine_Debug__LogWarning → PlayerShortcuts__DeleteShortcut → TI_ActionSlot → System_String__Format → LIT_"'Add action ID {0} into skillbar slot {1}.'" → UnityEngine_Debug__LogWarning → PlayerShortcuts__AddShortcut → TI_ProductSlot → TI_BasketSlot → TI_TradeSlot → TradeSlot__SoltaEm → TI_MacroSlot → PlayerShortcuts__AddShortcut

## L2SlotManager__RemoveSkillSlot
System_String__Format → LIT_"'Removing skillbar shortcut from slot {0}.'" → UnityEngine_Debug__LogWarning → PlayerShortcuts__DeleteShortcut

## L2SlotManager__RemoveSkillbarSlot
System_String__Format → LIT_"'Removing skillbar shortcut from slot {0}.'" → UnityEngine_Debug__LogWarning → PlayerShortcuts__DeleteShortcut

## L2SlotManager__ResetSlots


## L2SlotManager__SetDraggedSlot
UnityEngine_UIElements_VisualElement__get_style

## L2SlotManager__SetHoverSlot


## L2SlotManager__ShowWindow
UnityEngine_UIElements_VisualElement__get_style

## L2SlotManager__Unequip
TI_GearSlot → System_String__Format → LIT_"'Unequip {0}.'" → UnityEngine_Debug__Log

## L2Slot__ClearManipulators
TooltipManipulator__Clear → UnityEngine_UIElements_VisualElementExtensions__RemoveManipulator → TI_UnityEngine.UIElements.IManipulator

## L2Slot___ctor
Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'dragged'" → LIT_"'slot-bg'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → LIT_"'toggle-effect'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → LIT_"''"

## L2Slot___ctor
Gear__UpdateWeaponType → LIT_"'slot-bg'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → LIT_"'toggle-effect'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → SysStringTable__get_Instance → SysStringTable__GetSysString → LIT_"''" → SysStringTable__get_Instance → TI_TooltipManipulator → TooltipManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_SlotHoverDetectManipulator → SlotHoverDetectManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator

## L2TabView__CreateTabs
LIT_"'tab-header-container'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → UnityEngine_Debug__LogError → LIT_"'tab-header-container is null'" → LIT_"'tab-content-container'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → UnityEngine_Debug__LogError → LIT_"'tab-content-container'" → UnityEngine_UIElements_VisualElement__get_Item → UnityEngine_UIElements_VisualElement__set_name → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'unselected-tab'" → UnityEngine_UIElements_VisualElement__get_Item → UnityEngine_UIElements_VisualElement__set_name → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → UnityEngine_UIElements_VisualElement__Add → L2TabView__SwitchTab

## L2TabView__HideTab
LIT_"'hidden'" → MR_UnityEngine.UIElements.ObjectListPool<string>.Get → MR_System.Collections.Generic.List<string>.Contains → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → MR_System.Collections.Generic.List<string>.set_Capacity → MR_System.Collections.Generic.List<string>.Add

## L2TabView__Initialize
LIT_"'tab-header-container'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → UnityEngine_Debug__LogError → LIT_"'tab-header-container is null'" → LIT_"'tab-content-container'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → UnityEngine_Debug__LogError → LIT_"'tab-content-container'" → UnityEngine_UIElements_VisualElement__get_Item → UnityEngine_UIElements_VisualElement__set_name → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'unselected-tab'" → UnityEngine_UIElements_VisualElement__get_Item → UnityEngine_UIElements_VisualElement__set_name → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → UnityEngine_UIElements_VisualElement__Add → L2TabView__SwitchTab

## L2TabView__ShowTab
LIT_"'hidden'" → MR_System.Collections.Generic.List<string>.Remove → MR_UnityEngine.UIElements.ObjectListPool<string>.Release

## L2TabView__SwitchTab
UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'unselected-tab'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'active'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'unselected-tab'" → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'active'" → AudioManager__PlayUISound → LIT_"'window_open'"

## L2Tab__InitTabHeader
TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_L2Tab._InitTabHeader_b__13_0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>

## L2Tab__Initialize
TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_L2Tab._InitTabHeader_b__13_0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>

## L2Tab__OnTabHeaderClicked
UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'unselected-tab'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'active'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'unselected-tab'" → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'active'" → AudioManager__PlayUISound → LIT_"'window_open'"

## L2Tab___ctor
LIT_"'Tab'"

## L2ToolTip__AddEffectTooltip
UnityEngine_MonoBehaviour__StopCoroutine → L2Window__GetLabelById → LIT_"'EffectTooltipName'" → L2Window__GetLabelById → LIT_"'EffectTooltipLevelValue'" → System_Int32__ToString → L2Window__GetElementById → LIT_"'EffectTooltipDurationContainer'" → UnityEngine_UIElements_VisualElement__get_style → Gear__UpdateWeaponType → UnityEngine_MonoBehaviour__StartCoroutine → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → L2Window__GetLabelById → LIT_"'EffectTooltipDescription'"

## L2ToolTip__AddSkillTooltip
IconTable__get_Instance → IconTable__LoadTextureByName → UnityEngine_UIElements_StyleBackground___ctor → L2Window__GetElementById → LIT_"'SkillTooltipIcon'" → UnityEngine_UIElements_VisualElement__get_style → L2Window__GetLabelById → LIT_"'SkillTooltipName'" → System_String__Concat → LIT_"' <color=#FFD969>'" → LIT_"'</color>'" → L2Window__GetLabelById → LIT_"'SkillTooltipLevelValue'" → System_Int32__ToString → L2Window__GetLabelById → LIT_"'SkillTooltipType'" → SkillWindowInfo__GetSkillType → L2Window__GetLabelById → LIT_"'SkillTooltipDescription'" → SkillWindowInfo__ComposeDescription → L2Window__GetElementById → LIT_"'SkillTooltipMpCost'" → UnityEngine_UIElements_VisualElement__get_style → L2Window__GetLabelById → LIT_"'SkillTooltipMpCostValue'" → System_Int32__ToString → L2Window__GetElementById → LIT_"'SkillTooltipMpCost'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → L2ToolTip__LinhaDeCusto → LIT_"'HP Cost :'" → LIT_"'l2-color-4'" → LIT_"'l2-color-5'" → System_Int32__ToString → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → L2ToolTip__LinhaDeCusto → LIT_"'Consumes :'" → LIT_"'l2-color-3'" → LIT_"'l2-color-2'" → LIT_"''" → SparkUI__NomeDoItem → System_String__Format → LIT_"'{0:n0} {1}'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → L2Window__GetElementById → LIT_"'SkillTooltipRange'" → UnityEngine_UIElements_VisualElement__get_style → L2Window__GetLabelById → LIT_"'SkillTooltipRangeValue'" → System_Int32__ToString → L2Window__GetElementById → LIT_"'SkillTooltipRange'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → L2Window__GetLabelById → LIT_"'SkillTooltipCastingTimeValue'" → System_Globalization_CultureInfo__get_InvariantCulture → System_Single__ToString → L2Window__GetElementById → LIT_"'SkillTooltipCastingTime'" → UnityEngine_UIElements_VisualElement__get_style → L2Window__GetElementById → LIT_"'SkillTooltipCastingTime'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → L2Window__GetLabelById → LIT_"'SkillTooltipReuseTimeValue'" → System_Globalization_CultureInfo__get_InvariantCulture → System_Single__ToString → L2Window__GetElementById → LIT_"'SkillTooltipReuseTime'" → UnityEngine_UIElements_VisualElement__get_style → L2Window__GetElementById → LIT_"'SkillTooltipReuseTime'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## L2ToolTip__Awake
UnityEngine_Object__op_Equality → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## L2ToolTip__BuildWindow
TI_L2ToolTip.<BuildWindow>d__15 → Gear__UpdateWeaponType

## L2ToolTip__HideWindow
L2PopupWindow__HideWindow → LIT_"'routine is null'" → System_NullReferenceException___ctor → MD_UnityEngine.MonoBehaviour.StopCoroutine → UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException → LIT_"'obj'" → UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException → LIT_"'Coroutines can only be stopped on a MonoBehaviour'" → System_ArgumentException___ctor → MD_UnityEngine.MonoBehaviour.StopCoroutine → UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException → LIT_"'obj'"

## L2ToolTip__LinhaDeCusto
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'skill-tooltip-group'" → UnityEngine_UIElements_Label___ctor → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'tooltip-group-label'" → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'tooltip-group-value'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → L2Window__GetElementById → LIT_"'SkillTooltipSecond'" → UnityEngine_UIElements_VisualElement__get_childCount → UnityEngine_UIElements_VisualElement__Insert

## L2ToolTip__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Components/L2Tooltip/L2Tooltip'"

## L2ToolTip__MontaLink
L2Window__GetLabelById → LIT_"'Content'" → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'tooltip-background'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkArte → LIT_"'Data/UI/Assets/Inventory/ItemWindow_DF_SlotBox_Default'" → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → L2ToolTip__NovoTexto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>

## L2ToolTip__NovoTexto
UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_TextElement__set_enableRichText → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## L2ToolTip__OnDestroy
UnityEngine_MonoBehaviour__StopCoroutine

## L2ToolTip__UpdateTimerCoroutine
Gear__UpdateWeaponType

## L2ToolTip__UpdateToolTipCoroutine
Gear__UpdateWeaponType

## L2ToolTip__UpdateTooltipItem
LIT_"''" → System_String__Substring → LIT_"''" → System_String__Substring → TI_SparkDicaItem → SparkDicaItem__EhLinhaDeTipo → LIT_"''" → TI_SparkDicaItem → SparkDicaItem__TiraGrau → System_String__Concat → LIT_"'Data/UI/Assets/Inventory/grade_'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_Object__op_Equality → System_String__ToUpperInvariant → System_String__Concat → LIT_"'  ['" → LIT_"'-Grade]'" → L2ToolTip__UpdateTooltipLink

## L2ToolTip__UpdateTooltipLink
L2ToolTip__MontaLink → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_Object__op_Inequality → UnityEngine_UIElements_StyleBackground___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_Object__op_Inequality → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_Object__op_Inequality → UnityEngine_UIElements_StyleBackground___ctor → MR_L2ToolTip.UpdateTooltip<string> → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## L2UI__BlurFocus


## L2UI__IsWindowContain
UnityEngine_UIElements_VisualElement__get_worldBound

## L2UI__LoadUI
LIT_"'UIContainer'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>

## L2UI__StartLoading
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## L2UI__StopLoading
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## L2UI__Update
UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_UIElements_FocusController__get_focusedElement → MR_UnityEngine.Component.GetComponent<UnityEngine.UIElements.UIDocument>

## L2UI__WindowLoadComplete
TI_GameEvent → System_Enum__ToString → System_String__Concat → LIT_"'[GameStateMachine][EVENT] '" → UnityEngine_Debug__Log

## L2Window__AddWindow
UnityEngine_Object__op_Equality → TI_L2Window.<MontaELembra>d__18 → Gear__UpdateWeaponType → UnityEngine_MonoBehaviour__StartCoroutine

## L2Window__ContemPonto
UnityEngine_UIElements_VisualElement__get_worldBound

## L2Window__GetElementByClass
MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → System_String__Concat → LIT_"\" → UnityEngine_Debug__LogError

## L2Window__GetElementById
MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → System_String__Concat → LIT_"\" → UnityEngine_Debug__LogError

## L2Window__GetLabelById
L2Window__GetElementById

## L2Window__GuardaPosicao
L2Window__Painel → UnityEngine_UIElements_VisualElement__get_layout → System_Globalization_CultureInfo__get_InvariantCulture → L2Window__get_ChaveDaPosicao → System_Single__ToString → LIT_"'0.0000'" → System_Single__ToString → LIT_"'0.0000'" → System_String__Concat → LIT_"'|'" → L2Window__get_ChaveDaPosicao → System_Single__ToString → LIT_"'0.0000'" → System_Single__ToString → LIT_"'0.0000'" → System_String__Concat → LIT_"'canto|'" → LIT_"'|'" → UnityEngine_PlayerPrefs__SetString

## L2Window__GuardaTamanho
UnityEngine_UIElements_VisualElement__get_layout → L2Window__get_ChaveDoTamanho → UnityEngine_UIElements_VisualElement__get_layout → UnityEngine_PlayerPrefs__SetFloat

## L2Window__HideWindow
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## L2Window__InitWindow
UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → TI_MouseOverDetectionManipulator → MouseOverDetectionManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → MouseOverDetectionManipulator__Disable → LIT_"\" → System_InvalidOperationException___ctor → MD_UnityEngine.UIElements.VisualElement.Add → UnityEngine_UIElements_VisualElement_Hierarchy__Add → UnityEngine_UIElements_VisualElement__Add

## L2Window__LoadAsset
TI_SparkArte → MR_SparkArte.Load<UnityEngine.UIElements.VisualTreeAsset> → UnityEngine_Object__op_Equality → System_String__Concat → LIT_"'Could not load '" → LIT_"' template.'" → UnityEngine_Debug__LogError

## L2Window__MontaELembra
TI_L2Window.<MontaELembra>d__18 → Gear__UpdateWeaponType

## L2Window__MouseOverThisWindow


## L2Window__Painel
UnityEngine_UIElements_VisualElement__get_layout

## L2Window__PosicaoPadrao
System_String__Concat → LIT_"'spark.janela.'" → UnityEngine_PlayerPrefs__DeleteKey → L2Window__get_ChaveDoTamanho → UnityEngine_PlayerPrefs__DeleteKey → UnityEngine_UIElements_VisualElement__get_style

## L2Window__RestauraQuandoPuder
L2Window__Painel → UnityEngine_UIElements_VisualElement__get_layout → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent> → MD_L2Window.RestauraQuandoPuder → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.GeometryChangedEvent> → L2Window__get_ChaveDoTamanho → UnityEngine_PlayerPrefs__HasKey → L2Window__get_ChaveDoTamanho → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → L2Window__get_ChaveDaPosicao → UnityEngine_PlayerPrefs__HasKey → L2Window__get_ChaveDaPosicao → UnityEngine_PlayerPrefs__GetString → LIT_"''" → System_String__Split → System_Globalization_CultureInfo__get_InvariantCulture → LIT_"'canto'" → System_Single__TryParse → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → System_Single__TryParse → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit

## L2Window__ShowWindow
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## L2Window__Start


## L2Window__TentaRestaurar
L2Window__Painel → UnityEngine_UIElements_VisualElement__get_layout → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent> → MD_L2Window.RestauraQuandoPuder → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.GeometryChangedEvent> → L2Window__get_ChaveDoTamanho → UnityEngine_PlayerPrefs__HasKey → L2Window__get_ChaveDoTamanho → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → L2Window__get_ChaveDaPosicao → UnityEngine_PlayerPrefs__HasKey → L2Window__get_ChaveDaPosicao → UnityEngine_PlayerPrefs__GetString → LIT_"''" → System_String__Split → System_Globalization_CultureInfo__get_InvariantCulture → LIT_"'canto'" → System_Single__TryParse → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → System_Single__TryParse → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit

## L2Window__TodasNaPosicaoPadrao
TI_L2Window → TI_L2Window.<>c → TI_System.Predicate<L2Window> → MD_L2Window.__c._TodasNaPosicaoPadrao_b__32_0 → TI_L2Window.<>c → MR_System.Collections.Generic.List<L2Window>.RemoveAll → TI_L2Window → MR_System.Collections.Generic.List<L2Window>.GetEnumerator → MR_System.Collections.Generic.List<L2Window>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<L2Window>.Dispose

## L2Window__ToggleHideWindow


## L2Window___cctor
TI_System.Collections.Generic.List<L2Window> → MR_System.Collections.Generic.List<L2Window>..ctor → TI_L2Window

## LicenseWindow__AgreeButtonPressed
RequestServerListPacket___ctor

## LicenseWindow__Awake
TI_LicenseWindow → UnityEngine_Object__op_Equality → TI_LicenseWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## LicenseWindow__BuildWindow
TI_LicenseWindow.<BuildWindow>d__7 → Gear__UpdateWeaponType

## LicenseWindow__DisagreeButtonPressed
UnityEngine_Debug__Log → LIT_"'Disconnect'" → System_Threading_CancellationTokenSource__Cancel → ServerPacketHandler__CancelTokens → System_Net_Sockets_Socket__Shutdown → System_Net_Sockets_Socket__Close → System_Threading_CancellationTokenSource__Cancel → AsynchronousClient__ClientCleanup → UnityEngine_Debug__Log → LIT_"'Disconnect'" → TI_EventProcessor → UnityEngine_Object__op_Inequality → TI_EventProcessor → MD_AsynchronousClient._Disconnect_b__23_0 → EventProcessor__QueueEvent

## LicenseWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Login/LicenseWindow/LicenseWindow'"

## LicenseWindow__OnDestroy
TI_LicenseWindow

## LicenseWindow__ShowWindow
L2Window__ShowWindow → TI_LicenseWindow.<AutoLogin>d__11 → Gear__UpdateWeaponType → UnityEngine_MonoBehaviour__StartCoroutine

## LicenseWindow__Update
UnityEngine_Input__GetKeyDown → AudioManager__PlayUISound → LIT_"'click_01'" → RequestServerListPacket___ctor → AudioManager__PlayUISound → LIT_"'click_01'" → UnityEngine_Debug__Log → LIT_"'Disconnect'" → System_Threading_CancellationTokenSource__Cancel → ServerPacketHandler__CancelTokens → System_Net_Sockets_Socket__Shutdown → System_Net_Sockets_Socket__Close → System_Threading_CancellationTokenSource__Cancel → AsynchronousClient__ClientCleanup → UnityEngine_Debug__Log → LIT_"'Disconnect'" → TI_EventProcessor → UnityEngine_Object__op_Inequality → TI_EventProcessor → MD_AsynchronousClient._Disconnect_b__23_0 → EventProcessor__QueueEvent

## LobbyNameplate__HideDeleteTimer
LIT_"'delete-timer'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'delete-timer'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList

## LobbyNameplate__ShowDeleteTimer
LIT_"'delete-timer'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'delete-timer'" → UnityEngine_UIElements_VisualElement__AddToClassList

## LobbyNameplate__UpdateTimer
DateUtils__ConvertSecondsToDate → System_String__Concat → LIT_"'Remaining Time : '"

## LobbyNameplate___ctor
Nameplate___ctor → LIT_"'DeleteTimer'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>

## LoginAuthedState__Enter
TI_LoginWindow → TI_LicenseWindow → TI_ServerSelectWindow

## LoginAuthedState__HandleEvent
GameManager__ChangeState → System_Enum__ToString → System_String__Concat → LIT_"'[GameStateMachine][STATE] '" → UnityEngine_Debug__Log → GameManager__InitializeState → L2LoginUI__ShowServerSelectWindow → TI_ServerSelectWindow → ServerSelectWindow__ResetWindow → ServerSelectWindow__AddServerRow → LIT_"''" → ServerSelectWindow__SelectServer → MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item → MR_System.Collections.Generic.Dictionary<int,int>.TryGetValue → MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item → ServerNameDAO__GetServer → MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item → LIT_"'Unknown'" → LIT_"'Light'" → LIT_"'Normal'" → LIT_"'Heavy'" → LIT_"'Full'" → LIT_"'Down'" → LIT_"'GM Only'" → ServerSelectWindow__AddServerRow → ServerSelectWindow__SelectServer → L2LoginUI__ShowLoginWindow → GameManager__ChangeState → TI_GameEvent, → System_String__Format → LIT_"'[GameStateMachine] Unhandled event {0} for state {1}'" → UnityEngine_Debug__LogWarning → System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create → MR_System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Start<DefaultClient.<Connect>d__41>

## LoginCameraManager__Awake
UnityEngine_Object__op_Equality → UnityEngine_Object__op_Inequality → UnityEngine_Object__Destroy → LoginCameraManager__Initialize

## LoginCameraManager__DisableCameras
LoginCameraManager__Initialize → MR_System.Collections.Generic.Dictionary<string,UnityEngine.Camera>.get_Values → MR_System.Collections.Generic.Dictionary<string,UnityEngine.Camera>.GetEnumerator → MR_System.Collections.Generic.Dictionary<string,UnityEngine.Camera>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<string,UnityEngine.Camera>.Dispose → UnityEngine_Behaviour__set_enabled

## LoginCameraManager__DisableMainCamera
LoginCameraManager__Initialize → UnityEngine_Camera__get_main → UnityEngine_Object__op_Inequality → UnityEngine_Behaviour__set_enabled → UnityEngine_Camera__get_main → UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException

## LoginCameraManager__SelectClassCamera
MR_System.Collections.Generic.Dictionary<string,UnityEngine.Camera>.TryGetValue → UnityEngine_Component__get_transform → UnityEngine_Transform__GetChild → MR_UnityEngine.Component.GetComponent<UnityEngine.Camera>

## LoginCameraManager__SelectGenderCamera
MR_System.Collections.Generic.Dictionary<string,UnityEngine.Camera>.TryGetValue → UnityEngine_Component__get_transform → UnityEngine_Transform__GetChild → MR_UnityEngine.Component.GetComponent<UnityEngine.Camera> → UnityEngine_Object__op_Inequality → UnityEngine_Component__get_transform → UnityEngine_Transform__GetChild → MR_UnityEngine.Component.GetComponent<UnityEngine.Camera> → System_Type__GetTypeFromHandle → UnityEngine_Component__GetComponentFastPath

## LoginCameraManager__SelectHeadCamera
LoginCameraManager__SelectGenderCamera → UnityEngine_Object__op_Inequality → UnityEngine_Component__get_transform → UnityEngine_Transform__GetChild → MR_UnityEngine.Component.GetComponent<UnityEngine.Camera> → System_Type__GetTypeFromHandle → UnityEngine_Component__GetComponentFastPath

## LoginCameraManager__UpdateListenerPosition
UnityEngine_Component__get_transform → UnityEngine_Transform__get_position → UnityEngine_Transform__set_position → UnityEngine_Component__get_gameObject

## LoginClient__Awake
UnityEngine_Object__op_Equality → UnityEngine_Object__op_Inequality → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## LoginClient__OnAuthAllowed
UnityEngine_Debug__Log → LIT_"'Authed to LoginServer'" → TI_GameEvent → System_Enum__ToString → System_String__Concat → LIT_"'[GameStateMachine][EVENT] '" → UnityEngine_Debug__Log

## LoginClient__OnConnectionFailed
LIT_"'Could not connect to the login server. Please try again ..." → TI_L2ConfirmWindow → MD_LoginClient.__c._AvisaQueda_b__38_0 → L2ConfirmWindow__ShowWindow

## LoginClient__OnConnectionSuccess
UnityEngine_Debug__Log → LIT_"'Connected to LoginServer'" → TI_GameEvent → System_Enum__ToString → System_String__Concat → LIT_"'[GameStateMachine][EVENT] '" → UnityEngine_Debug__Log

## LoginClient__OnDisconnect
UnityEngine_Debug__Log → LIT_"'Disconnected from LoginServer.'" → LoginClient__AvisaQueda → LIT_"'The login server closed the connection without answering..." → TI_GameEvent → System_Enum__ToString → System_String__Concat → LIT_"'[GameStateMachine][EVENT] '" → UnityEngine_Debug__Log

## LoginClient__OnPlayOk
TI_GameEvent → System_Enum__ToString → System_String__Concat → LIT_"'[GameStateMachine][EVENT] '" → UnityEngine_Debug__Log

## LoginClient__OnServerListReceived
TI_GameEvent → System_Enum__ToString → System_String__Concat → LIT_"'[GameStateMachine][EVENT] '" → UnityEngine_Debug__Log

## LoginClient__OnServerSelected
RequestServerLoginPacket___ctor

## LoginClient__SetBlowFishKey
AsynchronousClient__set_CryptEnabled → L2_login_BlowfishEngine___ctor → L2_login_BlowfishEngine__init → L2_login_BlowfishEngine___ctor → L2_login_BlowfishEngine__init → LIT_"'Blowfish key set.'"

## LoginClient__SetRSAKey
RSACrypt___ctor → LIT_"'RSA Key set.'"

## LoginConnectedState__HandleEvent
TI_GameEvent,aiStack_18 → System_String__Format → LIT_"'[GameStateMachine] Unhandled event {0} for state {1}'" → UnityEngine_Debug__LogWarning → System_Enum__ToString → System_String__Concat → LIT_"'[GameStateMachine][STATE] '" → UnityEngine_Debug__Log → GameManager__InitializeState

## LoginState__Enter
LoginCameraManager__SwitchCamera → LIT_"'Login'" → TI_CharSelectWindow → TI_LoginWindow → TI_CharCreationWindow → TI_CharSelectWindow → TI_LicenseWindow → TI_ServerSelectWindow

## LoginState__HandleEvent
TI_GameEvent,aiStack_18 → System_String__Format → LIT_"'[GameStateMachine] Unhandled event {0} for state {1}'" → UnityEngine_Debug__LogWarning → System_Enum__ToString → System_String__Concat → LIT_"'[GameStateMachine][STATE] '" → UnityEngine_Debug__Log → GameManager__InitializeState

## LoginWindow__AbreFormulario
SparkContasSalvas__Lista → LIT_"'New login'" → LIT_"''" → System_String__ToLower → LIT_"'Edit login'" → MR_System.Collections.Generic.List<SparkContasSalvas.Conta>.get_Item → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## LoginWindow__Awake
TI_LoginWindow → UnityEngine_Object__op_Equality → TI_LoginWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## LoginWindow__BuildWindow
TI_LoginWindow.<BuildWindow>d__9 → Gear__UpdateWeaponType

## LoginWindow__ExitButtonPressed
TI_SparkSaida

## LoginWindow__FechaFormulario
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## LoginWindow__HideLogo
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_OptionsWindow

## LoginWindow__HideWindow
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MouseOverDetectionManipulator__Disable → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_OptionsWindow

## LoginWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Login/LoginWindow/LoginWindow'"

## LoginWindow__LoginButtonPressed
LIT_"' s depois do anterior), chamado por: '" → TI_LoginWindow → LoginWindow__get_BloqueioAtivo → TI_LoginWindow → System_Single__ToString → LIT_"'0.00'" → System_Environment__get_StackTrace → System_String__Concat → LIT_"'[SPARK] login repetido ignorado ('" → LIT_"' s depois do anterior), chamado por: '" → UnityEngine_Debug__LogWarning → MR_UnityEngine.UIElements.TextInputBaseField<string>.get_text → LIT_"'Shnok'" → LIT_"'1234'" → MR_UnityEngine.UIElements.TextInputBaseField<string>.get_text → TI_LoginWindow → System_String__ToLower → DefaultClient__Connect

## LoginWindow__MontaAvisoDeBloqueio
TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__Add

## LoginWindow__MontaBotaoOpcoes
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_name → LIT_"'SparkOpcoesLogin'" → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_LoginWindow.<>c → LIT_"'Options'" → TI_LoginWindow.<>c → MD_LoginWindow.__c._MontaBotaoOpcoes_b__36_0 → TI_LoginWindow.<>c → TI_SparkEstilo → SparkEstilo__Botao → UnityEngine_UIElements_VisualElement__Add → LIT_"\" → System_InvalidOperationException___ctor → MD_UnityEngine.UIElements.VisualElement.Add → UnityEngine_UIElements_VisualElement_Hierarchy__Add → UnityEngine_UIElements_VisualElement__Add

## LoginWindow__MontaEasyLogin
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_name → LIT_"'SparkEasyLogin'" → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkEstilo → SparkEstilo__Borda → SparkEstilo__Espaco → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_LoginWindow → LoginWindow__IconeDeConta → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Easy Login'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MD_LoginWindow._MontaEasyLogin_b__50_0 → SparkEstilo__Botao → LIT_"'+ Add'" → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Lista → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → LoginWindow__MontaFormulario → UnityEngine_UIElements_VisualElement__Add → LoginWindow__PintaContas

## LoginWindow__MontaFormulario
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'New login'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → LoginWindow__LinhaDoFormulario → LIT_"'Description'" → LoginWindow__LinhaDoFormulario → LIT_"'Login'" → LoginWindow__LinhaDoFormulario → LIT_"'Password'" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → MD_LoginWindow.SalvaFormulario → SparkEstilo__Botao → LIT_"'Save'" → UnityEngine_UIElements_VisualElement__Add → MD_LoginWindow.FechaFormulario → SparkEstilo__Botao → LIT_"'Cancel'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add

## LoginWindow__MontaRedes
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_name → LIT_"'SparkRedes'" → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → LoginWindow__AdicionaRede → LIT_"'rede_youtube'" → LIT_"'https://www.youtube.com/@projectsparkl2'" → LoginWindow__AdicionaRede → LIT_"'rede_discord'" → LIT_"'https://discord.gg/v7xnsd9dXW'" → LoginWindow__AdicionaRede → LIT_"'rede_facebook'" → LIT_"'https://www.facebook.com/l2jspark/'" → LoginWindow__AdicionaRede → LIT_"'rede_instagram'" → LIT_"\" → System_InvalidOperationException___ctor → MD_UnityEngine.UIElements.VisualElement.Add → UnityEngine_UIElements_VisualElement_Hierarchy__Add → UnityEngine_UIElements_VisualElement__Add

## LoginWindow__OnDestroy
TI_LoginWindow

## LoginWindow__OnInputBlur
UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'highlighted'" → MR_System.Collections.Generic.List<string>.Remove → MR_UnityEngine.UIElements.ObjectListPool<string>.Release

## LoginWindow__OnInputFocus
UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'highlighted'" → MR_UnityEngine.UIElements.ObjectListPool<string>.Get → MR_System.Collections.Generic.List<string>.Contains → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → MR_System.Collections.Generic.List<string>.set_Capacity → MR_System.Collections.Generic.List<string>.Add

## LoginWindow__OnKeyPressed
AudioManager__PlayUISound → LIT_"'click_01'" → LoginWindow__LoginButtonPressed

## LoginWindow__OnLoginInputChanged
System_Text_RegularExpressions_Regex___ctor → LIT_"'^[a-zA-Z0-9]{0,16}$'" → System_Text_RegularExpressions_Regex__IsMatch

## LoginWindow__ShowLogo
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## LoginWindow__ShowWindow
L2Window__ShowWindow → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_LoginWindow.<AutoLogin>d__63 → Gear__UpdateWeaponType → UnityEngine_MonoBehaviour__StartCoroutine

## LoginWindow__Update
TI_LoginWindow → LoginWindow__get_BloqueioAtivo → TI_LoginWindow → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_LoginWindow → LIT_"'This IP address is blocked from logging in.'" → TI_LoginWindow → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Equality → System_Int32__ToString → LIT_"'00'" → System_Int32__ToString → LIT_"'00'" → System_String__Concat → LIT_"':'" → TI_LoginWindow → LIT_"'Too many login attempts.'" → TI_LoginWindow → LIT_"'Too many connections in a short time.'" → System_String__Concat → LIT_"' Try again in '" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → LoginWindow__PosicionaAviso

## MacroSlot__AssignMacro
LIT_"'MacroSigla'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → UnityEngine_UIElements_VisualElement__RemoveFromHierarchy → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'empty'" → UnityEngine_UIElements_VisualElement__get_style → TI_SparkMacros → SparkMacros__Icone → TI_SparkEstilo → SparkEstilo__Textura → UnityEngine_UIElements_StyleBackground__op_Implicit → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__set_name → LIT_"'MacroSigla'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__Add

## MacroSlot__HandleLeftClick
TI_SparkMacros → SparkMacros__Executa

## MacroWindow__Arrastando
MacroWindow__ComandoDe → MacroWindow__PorCimaEm → MacroWindow__LinhaEm → MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item → TI_SparkEstilo → SparkEstilo__Borda → MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item → TI_SparkEstilo → SparkEstilo__Borda

## MacroWindow__Awake
TI_MacroWindow → UnityEngine_Object__op_Equality → TI_MacroWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## MacroWindow__BuildWindow
TI_MacroWindow.<BuildWindow>d__28 → Gear__UpdateWeaponType

## MacroWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed → UnityEngine_Object__op_Inequality

## MacroWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkRefinoWindow/SparkRefinoWindow'"

## MacroWindow__MontaEditor
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkUI__Campo → MacroWindow__Rotulado → LIT_"'Name'" → UnityEngine_UIElements_VisualElement__Add → SparkUI__Campo → MacroWindow__Rotulado → LIT_"'Short'" → UnityEngine_UIElements_VisualElement__Add → SparkUI__Campo → MacroWindow__Rotulado → LIT_"'Info'" → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → SparkEstilo__Lista → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkUI__Campo → MacroWindow__Escuro → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → SparkEstilo__Borda → System_Int32__ToString → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → MR_System.Collections.Generic.List<UnityEngine.UIElements.TextField>.Add → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Drag a skill, action or item (from its window or the sho..." → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MacroWindow__Fileira → MD_MacroWindow.VoltaParaLista → SparkEstilo__Botao → LIT_"'Cancel'" → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MD_MacroWindow.Grava → SparkEstilo__Botao → LIT_"'Save'" → UnityEngine_

## MacroWindow__MontaLista
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → SparkEstilo__Lista → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Wrap>.op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → MacroWindow__Fileira → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → MD_MacroWindow._MontaLista_b__29_0 → SparkEstilo__Botao → LIT_"'New'" → UnityEngine_UIElements_VisualElement__Add → MD_MacroWindow._MontaLista_b__29_1 → SparkEstilo__Botao → LIT_"'Edit'" → UnityEngine_UIElements_VisualElement__Add → MD_MacroWindow.Apaga → SparkEstilo__Botao → LIT_"'Delete'" → UnityEngine_UIElements_VisualElement__Add → MacroWindow__Fileira → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → MD_MacroWindow._MontaLista_b__29_2 → SparkEstilo__Botao → LIT_"'Run'" → UnityEngine_UIElements_VisualElement__Add → MD_MacroWindow.NaBarra → SparkEstilo__Botao → LIT_"'To Bar'" → UnityEngine_UIElements_VisualElement__Add

## MacroWindow__MostraIcones
UnityEngine_UIElements_VisualElement__Clear → TI_MacroWindow.<>c__DisplayClass34_0 → Gear__UpdateWeaponType → LIT_"''" → MacroWindow__Icone → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkEstilo → SparkEstilo__Borda → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_MacroWindow.__c__DisplayClass34_0._MostraIcones_b__0 → UnityEngine_UIElements_VisualElement__Add

## MacroWindow__MostraLista
UnityEngine_UIElements_VisualElement__Clear → TI_SparkMacros → SparkMacros__Busca → TI_SparkMacros → MR_System.Collections.Generic.List<SparkMacros.Macro>.GetEnumerator → MR_System.Collections.Generic.List<SparkMacros.Macro>.MoveNext → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_L2SlotManager → UnityEngine_Object__op_Inequality → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_Object__op_Inequality → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → TI_MacroSlot → ActionSlot___ctor → MacroSlot__AssignMacro → MD_MacroWindow._MostraLista_b__30_0 → TI_SparkEstilo → SparkEstilo__Borda → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit → UnityEngine_UIElements_VisualElement__Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkMacros.Macro>.Dispose → TI_SparkMacros → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'You have no macros. Press New to create one.'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_SparkMacros → System_String__Format → LIT_"'Macros: {0}/{1}'" → SparkMacros__Busca → LIT_"'Click a macro to run it. Drag a macro to the shortcut bar.'" → MR_System.Collections.Generic.List<string>..ctor → MR_System.Collections.Generic.List<SparkMacros.Comando>.GetEnumerator → MR_System.Collections.Generic.List<SparkMacros.Comando>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkMacros.Comando>.Dispose → LIT_"''" → System_String__Concat → LIT_"'\\n'" → LIT_"'<color=#E8D4A0>'" → LIT_"'</color>  '" → LIT_"'<color=#A09682>'" → System_String__Join → LIT_"' | '" → LIT_"'</color>'" → System_String__Concat

## MacroWindow__OnDestroy
TI_MacroWindow → UnityEngine_Object__op_Equality → TI_MacroWindow → MD_MacroWindow.MostraLista → TI_SparkMacros → System_Delegate__Remove → TI_SparkMacros

## MacroWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## MacroWindow__Solta
MacroWindow__Acende → MacroWindow__PorCimaEm → MacroWindow__ComandoDe → MacroWindow__LinhaEm → MR_System.Collections.Generic.List<UnityEngine.UIElements.TextField>.get_Item → MacroWindow__PoeNaLinha

## MacroWindow__ToggleHideWindow
LIT_"'Macro'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_Object__op_Inequality → MacroWindow__MostraLista

## MailWindow__Abre
MailWindow__Aba

## MailWindow__Awake
TI_MailWindow → UnityEngine_Object__op_Equality → TI_MailWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## MailWindow__BuildWindow
TI_MailWindow.<BuildWindow>d__40 → Gear__UpdateWeaponType

## MailWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed → UnityEngine_Object__op_Inequality

## MailWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkRefinoWindow/SparkRefinoWindow'"

## MailWindow__MontaCarta
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → SparkEstilo__Divisor → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Lista → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Wrap>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MailWindow__Fileira → UnityEngine_UIElements_VisualElement__Add

## MailWindow__MontaEscrever
LIT_"'Attachments (up to {0}) - click an item below to attach,..." → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkUI__Campo → MailWindow__Rotulado → LIT_"'To'" → UnityEngine_UIElements_VisualElement__Add → SparkUI__Campo → MailWindow__Rotulado → LIT_"'Subject'" → UnityEngine_UIElements_VisualElement__Add → SparkUI__Campo → UnityEngine_UIElements_TextField__set_multiline → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MailWindow__Escuro → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → System_String__Format → LIT_"'Attachments (up to {0}) - click an item below to attach,..." → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Lista → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MailWindow__Fileira → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → MD_MailWindow.TrocaCod → SparkEstilo__Botao → LIT_"'Request payment: off'" → UnityEngine_UIElements_VisualElement__Add → SparkUI__Campo → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_S

## MailWindow__MontaLista
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkEstilo → SparkEstilo__Lista → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → MailWindow__Fileira → MD_MailWindow._MontaLista_b__41_0 → SparkEstilo__Botao → LIT_"'Refresh'" → UnityEngine_UIElements_VisualElement__Add

## MailWindow__MostraCarta
TI_MailWindow.<>c__DisplayClass55_0 → Gear__UpdateWeaponType → TI_SparkCorreio → MailWindow__MarcaAba → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → LIT_"'System'" → LIT_"'<color=#A09682>'" → LIT_"'From'" → LIT_"'To'" → LIT_"':</color> '" → LIT_"'\\n<color=#A09682>Subject:</color> '" → System_String__Concat → UnityEngine_UIElements_VisualElement__Clear → MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator → MR_System.Collections.Generic.List<ItemInstance>.MoveNext → MailWindow__Icone → UnityEngine_UIElements_VisualElement__Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<ItemInstance>.Dispose → LIT_"''" → System_String__Format → LIT_"'Payment requested: {0:N0} Adena'" → UnityEngine_UIElements_VisualElement__Clear → MD_MailWindow.VoltaParaLista → TI_SparkEstilo → SparkEstilo__Botao → LIT_"'Back'" → UnityEngine_UIElements_VisualElement__Add → MailWindow__Espaco → MD_MailWindow.__c__DisplayClass55_0._MostraCarta_b__5 → MailWindow__Espaco → MD_MailWindow.__c__DisplayClass55_0._MostraCarta_b__4 → TI_SparkEstilo → LIT_"'Cancel sending'" → MailWindow__Espaco → LIT_"'Pay and take'" → LIT_"'Take items'" → MD_MailWindow.__c__DisplayClass55_0._MostraCarta_b__0 → TI_SparkEstilo → SparkEstilo__Botao → UnityEngine_UIElements_VisualElement__Add → MailWindow__Espaco → MD_MailWindow.__c__DisplayClass55_0._MostraCarta_b__1 → TI_SparkEstilo → SparkEstilo__Botao → LIT_"'Reject'" → UnityEngine_UIElements_VisualElement__Add → MailWindow__Espaco → MD_MailWindow.__c__DisplayClass55_0._MostraCarta_b__2 → TI_SparkEstilo → SparkEstilo__Botao → LIT_"'Reply'" → UnityEngine_UIElements_VisualElement__Add → MailWindow__Espaco → MD_MailWindow.__c__DisplayClass55_0._MostraCarta_b__3 → TI_SparkEstilo → LIT_"'Delete'" → SparkEstilo__Botao → UnityEngine_UIElements_VisualElement__Add

## MailWindow__MostraLista
LIT_"'(no subject)'" → TI_MailWindow.<>c__DisplayClass53_0 → Gear__UpdateWeaponType → TI_SparkCorreio → UnityEngine_UIElements_VisualElement__Clear → LIT_"''" → LIT_"'You have not sent any mail.'" → LIT_"'Your inbox is empty.'" → MR_System.Collections.Generic.List<SparkCorreio.Carta>.GetEnumerator → MR_System.Collections.Generic.List<SparkCorreio.Carta>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkCorreio.Carta>.Dispose → TI_MailWindow.<>c__DisplayClass53_1 → Gear__UpdateWeaponType → TI_SparkEstilo → SparkEstilo__Linha → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → LIT_"''" → LIT_"' <color=#E8D4A0>[item]</color>'" → LIT_"''" → LIT_"' <color=#FF9A80>[COD]</color>'" → LIT_"''" → LIT_"' <color=#A0A0A0>[returned]</color>'" → System_String__Concat → TI_SparkEstilo → LIT_"'(no subject)'" → System_String__Concat → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → LIT_"'System'" → LIT_"'From'" → LIT_"'To'" → LIT_"': '" → LIT_"'    expires in '" → TI_SparkCorreio → SparkCorreio__Restante → System_String__Concat → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_MailWindow.__c__DisplayClass53_1._MostraLista_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → UnityEngine_UIElements_VisualElement__Add

## MailWindow__MostraPodemIr
UnityEngine_UIElements_VisualElement__Clear → TI_SparkCorreio → MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator → MR_System.Collections.Generic.List<ItemInstance>.MoveNext → TI_MailWindow.<>c__DisplayClass58_0 → Gear__UpdateWeaponType → TI_SparkEstilo → SparkEstilo__Linha → MailWindow__Icone → UnityEngine_UIElements_VisualElement__Add → SparkUI__NomeDoItem → System_String__Format → LIT_"'+{0} {1}'" → System_String__Format → LIT_"'  x{0:N0}'" → System_String__Concat → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_MailWindow.__c__DisplayClass58_0._MostraPodemIr_b__0 → UnityEngine_UIElements_VisualElement__Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<ItemInstance>.Dispose → TI_SparkCorreio → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'You have no item that can be sent.'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add

## MailWindow__OnDestroy
TI_MailWindow → UnityEngine_Object__op_Equality → TI_MailWindow → MD_MailWindow.MudouEntrada → TI_SparkCorreio → SparkCorreio__remove_MudouEntrada → MD_MailWindow.MudouEnviadas → SparkCorreio__remove_MudouEnviadas → MD_MailWindow.MostraPodemIr → SparkCorreio__remove_MudouItens → MD_MailWindow.MostraCarta → SparkCorreio__remove_Abriu → MD_MailWindow.Chegou → SparkCorreio__remove_Chegou → MD_MailWindow.AtualizaTitulo → TI_SparkCorreio → System_Delegate__Remove → TI_SparkCorreio

## MailWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## MailWindow__ToggleHideWindow
MailWindow__Aba

## ManorWindow__Awake
TI_ManorWindow → UnityEngine_Object__op_Equality → TI_ManorWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## ManorWindow__BuildWindow
TI_ManorWindow.<BuildWindow>d__21 → Gear__UpdateWeaponType

## ManorWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## ManorWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkRefinoWindow/SparkRefinoWindow'"

## ManorWindow__Mostra
LIT_"'Crop Settings (next period) - '" → LIT_"'Seed Settings (next period) - '" → UnityEngine_UIElements_VisualElement__Clear → LIT_"''" → System_Array__Clear → TI_SparkManor → MR_System.Collections.Generic.Dictionary<int,string>.get_Count → TI_SparkManor → SparkManor__PedeCastelos → TI_SparkManor → SparkManor__NomeDoCastelo → TI_SparkManor → System_String__Concat → LIT_"'Seed Purchase - '" → Animancer_ControllerState_ParameterID___ctor → LIT_"'Seed'" → MR_System.ValueTuple<string,int>..ctor → Animancer_ControllerState_ParameterID___ctor → LIT_"'Price'" → MR_System.ValueTuple<string,int>..ctor → Animancer_ControllerState_ParameterID___ctor → LIT_"'In stock'" → MR_System.ValueTuple<string,int>..ctor → Animancer_ControllerState_ParameterID___ctor → LIT_"'Amount'" → MR_System.ValueTuple<string,int>..ctor → ManorWindow__Cabecalho → MR_System.Collections.Generic.List<SparkManor.Linha>.get_Item → ManorWindow__Linha → ManorWindow__Numero → ManorWindow__Celula → UnityEngine_UIElements_VisualElement__Add → ManorWindow__Numero → ManorWindow__Celula → UnityEngine_UIElements_VisualElement__Add → ManorWindow__Campo → LIT_"''" → UnityEngine_UIElements_VisualElement__Add → TI_SparkManor → ManorWindow__Numero → TI_SparkManor → System_String__Concat → LIT_"'Adena: '" → MD_ManorWindow.ComprarSementes → TI_SparkEstilo → SparkEstilo__Botao → LIT_"'Buy'" → UnityEngine_UIElements_VisualElement__Add → System_String__Concat → LIT_"'Crop Sales - '" → Animancer_ControllerState_ParameterID___ctor → LIT_"'Crop'" → MR_System.ValueTuple<string,int>..ctor → Animancer_ControllerState_ParameterID___ctor → LIT_"'Mine'" → MR_System.ValueTuple<string,int>..ctor → Animancer_ControllerState_ParameterID___ctor → LIT_"'Buyer'" → MR_System.ValueTuple<string,int>..ctor → Animancer_ControllerState_ParameterID___ctor → LIT_"'Price'" → MR_System.ValueTuple<string,int>..ctor → Animancer_ControllerState_ParameterID___ctor → LIT_"'Wanted'" → MR_System.ValueTuple<string,int>..ctor → Animancer_ControllerState_ParameterID___ctor → LIT_"'Amount'" → MR_System.ValueTuple<string,int>..ctor → ManorWindow__Cabecalho → MR_System.Collections.Generic.List<SparkManor.Linha>.get_Item → ManorWindow__Linha → ManorWindow__Numero → ManorWindow__Celula → UnityEngine_UIElements_VisualElement__Add → LIT_"'Not buying'" → TI_SparkEstilo → TI_SparkManor → SparkManor__NomeDoCastelo → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → ManorWindow__Celula → UnityEngine_UIElements_VisualElement__Add → LIT_"'-'" → ManorWindow__Numero → ManorWindow__Celula → UnityEngine_UIElements_VisualElement__Add → LIT_"'-'" → ManorWindow__Numero → ManorWindow__Celula → UnityEngine_UIElements_VisualElement__Add → ManorWindow__Campo → LIT_"''" → UnityEngine_UIElements_VisualElement__Add → LIT_"'Crops are sold for adena; the castle also gives its rewa..." → MD_ManorWindow.VenderColheitas → TI_SparkEstilo → SparkEstilo__Botao → LIT_"'Sell'" → UnityEngine_UIElements_VisualElement__Add → System_String__Concat → LIT_"'Seed Info - 

## ManorWindow__OnDestroy
TI_ManorWindow → UnityEngine_Object__op_Equality → TI_ManorWindow → MD_ManorWindow.Mostra → TI_SparkManor → System_Delegate__Remove → TI_SparkManor

## ManorWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## MenuWindow__Awake
TI_MenuWindow → UnityEngine_Object__op_Equality → TI_MenuWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## MenuWindow__BuildWindow
TI_MenuWindow.<BuildWindow>d__6 → Gear__UpdateWeaponType

## MenuWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/MenuWindow/MenuWindow'"

## MenuWindow__OnDestroy
TI_MenuWindow

## MenuWindow__RetanguloDoBotaoDoSistema
LIT_"'SystemMenuButton'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button> → UnityEngine_UIElements_VisualElement__get_worldBound

## MouseOverDetectionManipulator__Disable


## MouseOverDetectionManipulator__Enable


## MouseOverDetectionManipulator__PointerEnterHandler


## MouseOverDetectionManipulator__PointerLeaveHandler


## MouseOverDetectionManipulator__PointerMoveHandler


## MouseOverDetectionManipulator__RegisterCallbacksOnTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerEnterEvent> → MD_MouseOverDetectionManipulator.PointerEnterHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerOverEvent> → MD_MouseOverDetectionManipulator.PointerOverHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerOverEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent> → MD_MouseOverDetectionManipulator.PointerMoveHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerMoveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_MouseOverDetectionManipulator.PointerDownHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerLeaveEvent> → MD_MouseOverDetectionManipulator.PointerLeaveHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerLeaveEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## MouseOverDetectionManipulator__UnregisterCallbacksFromTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerEnterEvent> → MD_MouseOverDetectionManipulator.PointerEnterHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerOverEvent> → MD_MouseOverDetectionManipulator.PointerOverHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerOverEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent> → MD_MouseOverDetectionManipulator.PointerMoveHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerMoveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_MouseOverDetectionManipulator.PointerDownHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerLeaveEvent> → MD_MouseOverDetectionManipulator.PointerLeaveHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerLeaveEvent> → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## MouseOverDetectionManipulator___ctor
UnityEngine_UIElements_MouseManipulator___ctor → UnityEngine_UIElements_Manipulator__set_target → UnityEngine_Object__op_Inequality

## MultisellWindow__Awake
TI_MultisellWindow → UnityEngine_Object__op_Equality → TI_MultisellWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## MultisellWindow__Botao
TI_MultisellWindow.<>c__DisplayClass63_0 → Gear__UpdateWeaponType → TI_SparkArte → LIT_"'Data/UI/_Elements/Components/L2Button/L2Button'" → MR_SparkArte.Load<UnityEngine.UIElements.VisualTreeAsset> → UnityEngine_UIElements_VisualTreeAsset__Instantiate → LIT_"'L2Button'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button> → UnityEngine_UIElements_VisualElement__RemoveFromHierarchy → LIT_"'ButtonLabel'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → MultisellWindow__Poe → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → MD_MultisellWindow.__c__DisplayClass63_0._Botao_b__0 → UnityEngine_UIElements_Button__add_clicked

## MultisellWindow__BuildWindow
TI_MultisellWindow.<BuildWindow>d__37 → Gear__UpdateWeaponType

## MultisellWindow__HideWindow
UnityEngine_Object__op_Inequality → L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## MultisellWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/MultisellWindow/MultisellWindow'"

## MultisellWindow__MostraCusto
LIT_"'{0:n0}  (have {1:n0})'" → UnityEngine_UIElements_VisualElement__Clear → MultisellWindow__Quantidade → MR_System.Collections.Generic.List<MultiSellListPacket.Peca>.GetEnumerator → MR_System.Collections.Generic.List<MultiSellListPacket.Peca>.MoveNext → System_Int64__ToString → LIT_"'n0'" → UnityEngine_Object__op_Inequality → PlayerInventory__GetItemById → System_String__Format → LIT_"'{0:n0}  (have {1:n0})'" → MultisellWindow__LinhaDePeca → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<MultiSellListPacket.Peca>.Dispose → LIT_"''" → LIT_"\"

## MultisellWindow__MostraProduto
UnityEngine_UIElements_VisualElement__Clear → MR_System.Collections.Generic.List<MultiSellListPacket.Peca>.GetEnumerator → MR_System.Collections.Generic.List<MultiSellListPacket.Peca>.MoveNext → MultisellWindow__LinhaDePeca → UnityEngine_UIElements_VisualElement__Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<MultiSellListPacket.Peca>.Dispose

## MultisellWindow__OnDestroy
TI_MultisellWindow → UnityEngine_Object__op_Equality → TI_MultisellWindow

## MultisellWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## MultisellWindow__Update
TradeSlotContainer__Mostra → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'selected'"

## Nameplate__Acima
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleRotate__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__Add

## Nameplate__AoMudarGeometria
Nameplate__Posiciona

## Nameplate__AtualizaBalao
TI_SparkBalao → SparkBalao__De → Nameplate__Placa → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → Nameplate__Acima → UnityEngine_UIElements_VisualElement__Insert → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## Nameplate__AtualizaClan
UnityEngine_Object__op_Equality → LIT_"''" → System_String__op_Inequality → Nameplate__AtualizaRelacao → TI_SparkClan → SparkClan__Crest → SparkClan__AllyCrest → UnityEngine_Object__op_Equality → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__IndexOf → UnityEngine_UIElements_VisualElement__Insert → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_Object__op_Inequality → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_Object__op_Inequality → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## Nameplate__AtualizaLoja
TI_SparkLoja → SparkLoja__TipoDe → SparkLoja__LetreiroDe → TI_SparkLoja → SparkLoja__PassaNoFiltro → System_Int32__ToString → LIT_"'|'" → System_Boolean__ToString → System_String__Concat → Nameplate__Placa → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.FontStyle>.op_Implicit → Nameplate__Acima → UnityEngine_UIElements_VisualElement__Insert → UnityEngine_UIElements_VisualElement__get_style → TI_SparkLoja → SparkLoja__PrefixoDe → System_String__Concat → UnityEngine_UIElements_VisualElement__get_style → TI_SparkLoja → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## Nameplate__AtualizaRelacao
UnityEngine_Object__op_Equality → LIT_"'blue'" → LIT_"'red'" → LIT_"'shield'" → LIT_"'sword'" → LIT_"'crownleader'" → LIT_"'flagleader'" → System_String__Concat → LIT_"'bothside'" → LIT_"'oneside'" → LIT_"'sword'" → LIT_"'shield'" → LIT_"'crownleader'" → LIT_"'flagleader'" → System_String__Concat → LIT_"'blue'" → Nameplate__Icone → UnityEngine_UIElements_VisualElement__IndexOf → UnityEngine_UIElements_VisualElement__Insert → Nameplate__Mostra

## Nameplate__AtualizaToken
TI_SparkTokens → SparkTokens__De → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → Nameplate__Acima → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → System_Int32__ToString → System_String__Concat → LIT_"'Data/UI/Assets/Tokens/HeadDisplay_DF_mark_0'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## Nameplate__Exibe
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## Nameplate__Hide
LIT_"'hidden'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'hidden'" → UnityEngine_UIElements_VisualElement__AddToClassList

## Nameplate__Icone
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## Nameplate__ManageColors
Nameplate__AtualizaClan → System_String__Equals → LIT_"'Raid Boss'" → System_String__Equals → LIT_"'Raid Fighter'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit

## Nameplate__Mostra
System_String__Concat → LIT_"'Relacao/clan_DF_clanwaricon_'" → TI_SparkEstilo → SparkEstilo__Textura → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_Object__op_Inequality → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## Nameplate__Placa
UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## Nameplate__Posiciona
UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleRotate__op_Implicit

## Nameplate__RemoveClassName
UnityEngine_UIElements_VisualElement__ClassListContains → UnityEngine_UIElements_VisualElement__RemoveFromClassList

## Nameplate__RemoveStyle
LIT_"'TargetBubbleLeft'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → UnityEngine_UIElements_VisualElement__ClassListContains → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'TargetBubbleRight'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → UnityEngine_UIElements_VisualElement__ClassListContains → MR_System.Collections.Generic.List<string>.Remove → MR_UnityEngine.UIElements.ObjectListPool<string>.Release

## Nameplate__SetClassName
UnityEngine_UIElements_VisualElement__ClassListContains → UnityEngine_UIElements_VisualElement__AddToClassList

## Nameplate__SetStyle
LIT_"'TargetBubbleLeft'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → UnityEngine_UIElements_VisualElement__ClassListContains → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'TargetBubbleRight'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → UnityEngine_UIElements_VisualElement__ClassListContains → MR_UnityEngine.UIElements.ObjectListPool<string>.Get → MR_System.Collections.Generic.List<string>.Contains → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → MR_System.Collections.Generic.List<string>.set_Capacity → MR_System.Collections.Generic.List<string>.Add

## Nameplate__Show
LIT_"'hidden'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'hidden'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList

## Nameplate__TituloDeRaid
System_String__Equals → LIT_"'Raid Boss'" → LIT_"'Raid Fighter'" → System_Globalization_CompareInfo__CompareOrdinalIgnoreCase

## Nameplate___cctor


## Nameplate___ctor
Gear__UpdateWeaponType → UnityEngine_Component__get_transform → UnityEngine_UIElements_VisualElement__set_usageHints → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent> → MD_Nameplate.AoMudarGeometria → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.GeometryChangedEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## NameplatesManagerBase__ClearNameplates
MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.get_Keys → MR_System.Linq.Enumerable.ToList<int> → MR_System.Collections.Generic.List<int>.GetEnumerator → MR_System.Collections.Generic.List<int>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<int>.Dispose → MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.TryGetValue → NameplatesManagerBase__RemoveNameplate

## NameplatesManagerBase__CreateNameplate
UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → LIT_"'EntityName'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → LIT_"'EntityTitle'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → Nameplate___ctor → UnityEngine_UIElements_VisualElement__Add

## NameplatesManagerBase__EscondidoPelaParede


## NameplatesManagerBase__GuardaEscondido
UnityEngine_Transform__get_position

## NameplatesManagerBase__Initialize
TI_SparkArte → LIT_"'Data/UI/_Elements/Game/Nameplate/Nameplate'" → MR_SparkArte.Load<UnityEngine.UIElements.VisualTreeAsset> → UnityEngine_Object__op_Equality → LIT_"'Failed to load nameplate template.'"

## NameplatesManagerBase__IsNameplateVisible
UnityEngine_Object__op_Equality → UnityEngine_Transform__get_position

## NameplatesManagerBase__IsSystemReady


## NameplatesManagerBase__ProcessEntitiesInRange
Gear__UpdateWeaponType → UnityEngine_Object__op_Equality → UnityEngine_Collider__get_attachedRigidbody → UnityEngine_Object__op_Inequality → UnityEngine_Collider__get_attachedRigidbody → UnityEngine_Component__get_transform → MD_NameplatesManagerBase.__c__DisplayClass18_0._ProcessEntitiesInRange_b__0 → MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.GetOrAdd

## NameplatesManagerBase__ProcessNameplateVisibility
MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.get_Keys → MR_System.Linq.Enumerable.ToList<int> → MR_System.Collections.Generic.List<int>.GetEnumerator → MR_System.Collections.Generic.List<int>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<int>.Dispose → MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.TryGetValue → UnityEngine_Object__op_Equality → NameplatesManagerBase__RemoveNameplate → Nameplate__Exibe

## NameplatesManagerBase__RemoveNameplate
MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.TryRemove → UnityEngine_UIElements_VisualElement__Remove

## NameplatesManagerBase__ScanForEntities
UnityEngine_Transform__get_position → UnityEngine_Physics__OverlapSphereNonAlloc → UnityEngine_Transform__get_position → UnityEngine_Physics__OverlapSphereNonAlloc → Gear__UpdateWeaponType → UnityEngine_Object__op_Equality → UnityEngine_Collider__get_attachedRigidbody → UnityEngine_Object__op_Inequality → UnityEngine_Collider__get_attachedRigidbody → UnityEngine_Component__get_transform → MD_NameplatesManagerBase.__c__DisplayClass18_0._ProcessEntitiesInRange_b__0 → MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.GetOrAdd

## NameplatesManagerBase__SetMask


## NameplatesManagerBase__ShouldCreateNameplateForEntity
UnityEngine_Object__op_Inequality → MR_UnityEngine.Component.TryGetComponent<Entity> → GameClient__get_CurrentPlayerId

## NameplatesManagerBase__UpdateNameplatePosition
TI_SparkMontaria → SparkMontaria__AncoraDoNome → UnityEngine_Object__op_Inequality → UnityEngine_Transform__get_position → UnityEngine_Camera__WorldToScreenPoint → Nameplate__Posiciona → UnityEngine_UIElements_VisualElement__get_resolvedStyle → Nameplate__Posiciona

## NameplatesManagerBase__UpdateNameplateStyle
NpcSpawner__MeiaAlturaDoCorpo → Entity__get_FatorEmPe → Nameplate__ManageColors → Nameplate__AtualizaToken → Nameplate__AtualizaLoja → TI_SparkBalao → SparkBalao__De → Nameplate__Placa → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → Nameplate__Acima → UnityEngine_UIElements_VisualElement__Insert → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## NameplatesManagerBase__UpdateNameplateSystem
System_Array__Clear → MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.GetEnumerator → MR_System.Collections.Generic.List<Nameplate>.GetEnumerator → MR_System.Collections.Generic.List<Nameplate>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<Nameplate>.Dispose → UnityEngine_Object__op_Equality → NameplatesManagerBase__UpdateNameplatePosition → MR_System.Collections.Generic.List<Nameplate>.Add

## NameplatesManagerBase__Update
NameplatesManagerBase__UpdateNameplateSystem

## NameplatesManagerBase___ctor
MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>..ctor → MR_System.Collections.Generic.List<Nameplate>..ctor

## NameplatesManagerGame__AntesDeAtualizar
TI_SparkOpcoes → SparkOpcoes__get_DistanciaDoNome → NameplatesManagerBase__ScanForEntities → NameplatesManagerBase__ProcessNameplateVisibility → NameplatesManagerGame__ConfereParedes → NameplatesManagerGame__ProcessHoveredEntity → NameplatesManagerGame__CreatePlayerNameplate → TI_SparkObservador → LIT_"'hidden'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'hidden'" → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'hidden'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'hidden'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → NameplatesManagerBase__UpdateNameplatePosition → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → PlayerNameplate__HideGauge

## NameplatesManagerGame__AtualizaEstiloRapido
TargetManager__HasTarget → Nameplate__RemoveStyle → LIT_"'target-bubble-attack'" → LIT_"'target-bubble-target'" → Nameplate__RemoveStyle → UnityEngine_Component__get_transform → UnityEngine_Object__op_Equality → Nameplate__SetStyle → LIT_"'target-bubble-target'" → LIT_"'target-bubble-attack'" → Nameplate__SetStyle → LIT_"'target-bubble-attack'" → UnityEngine_Object__op_Equality → Nameplate__RemoveStyle → Nameplate__SetStyle → LIT_"'target-bubble-hover'"

## NameplatesManagerGame__Awake
UnityEngine_Object__op_Equality → UnityEngine_Component__get_gameObject → UnityEngine_Object__Destroy → TI_SparkArte → LIT_"'Data/UI/_Elements/Game/Nameplate/Nameplate'" → MR_SparkArte.Load<UnityEngine.UIElements.VisualTreeAsset> → UnityEngine_Object__op_Equality → LIT_"'Failed to load nameplate template.'"

## NameplatesManagerGame__CheckIfNotPlayer
GameClient__get_CurrentPlayerId

## NameplatesManagerGame__ClearNameplates
NameplatesManagerBase__ClearNameplates → UnityEngine_UIElements_VisualElement__Remove

## NameplatesManagerGame__ConfereParede
TI_SparkMontaria → SparkMontaria__AncoraDoNome → UnityEngine_Object__op_Inequality → UnityEngine_Transform__get_position → UnityEngine_Physics__Linecast

## NameplatesManagerGame__ConfereParedes
UnityEngine_Component__get_transform → UnityEngine_Transform__get_position → MR_System.Collections.Generic.List<Nameplate>.get_Item → UnityEngine_Object__op_Equality → NameplatesManagerGame__ConfereParede → Nameplate__Exibe

## NameplatesManagerGame__CreateNameplate
UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → LIT_"'EntityName'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → LIT_"'EntityTitle'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → Nameplate___ctor → UnityEngine_UIElements_VisualElement__Add → UnityEngine_Object__op_Inequality → UnityEngine_Component__get_transform → UnityEngine_Transform__get_position → NameplatesManagerGame__ConfereParede → Nameplate__Exibe

## NameplatesManagerGame__CreatePlayerNameplate
UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → LIT_"'EntityName'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → LIT_"'EntityTitle'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → Nameplate___ctor → LIT_"'Gauge'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → UnityEngine_UIElements_VisualElement__Add

## NameplatesManagerGame__EscondidoPelaParede


## NameplatesManagerGame__HandlePlayerNameplate
NameplatesManagerGame__CreatePlayerNameplate → TI_SparkObservador → LIT_"'hidden'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'hidden'" → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'hidden'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'hidden'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → NameplatesManagerBase__UpdateNameplatePosition → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → PlayerNameplate__HideGauge

## NameplatesManagerGame__IsNameplateVisible
UnityEngine_Object__op_Equality → TargetManager__HasTarget → UnityEngine_Component__get_transform → UnityEngine_Object__op_Equality → UnityEngine_Transform__get_position → UnityEngine_Camera__WorldToViewportPoint

## NameplatesManagerGame__IsSystemReady
UnityEngine_Object__op_Equality → UnityEngine_Debug__LogWarning → LIT_"'CameraController instance is null'" → MR_UnityEngine.Component.GetComponent<UnityEngine.Camera> → UnityEngine_Object__op_Equality → UnityEngine_Debug__LogWarning → LIT_"'Camera component not found on CameraController'" → UnityEngine_Object__op_Equality → UnityEngine_Component__get_transform → UnityEngine_Object__op_Inequality → UnityEngine_Component__get_transform → LIT_"'NameplatesContainer'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>

## NameplatesManagerGame__MostraJa
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## NameplatesManagerGame__OnDestroy
MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.Clear

## NameplatesManagerGame__ProcessHoveredEntity
Gear__UpdateWeaponType → UnityEngine_Object__op_Inequality → MR_UnityEngine.Component.TryGetComponent<Entity> → GameClient__get_CurrentPlayerId → MR_UnityEngine.Component.GetComponent<Entity> → TI_SparkPortaEntity → TI_SparkObjetoEstaticoEntity → MD_NameplatesManagerGame.__c__DisplayClass9_0._ProcessHoveredEntity_b__0 → MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.GetOrAdd → Nameplate__Exibe

## NameplatesManagerGame__ProcessTargetedEntity
Gear__UpdateWeaponType → TargetManager__HasTarget → UnityEngine_Component__get_transform → MR_UnityEngine.Component.TryGetComponent<Entity> → GameClient__get_CurrentPlayerId → TI_SparkPortaEntity → TI_SparkObjetoEstaticoEntity → MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.ContainsKey → MD_NameplatesManagerGame.__c__DisplayClass10_0._ProcessTargetedEntity_b__0 → MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.GetOrAdd

## NameplatesManagerGame__StartCasting
LIT_"'gauge'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'gauge'" → UnityEngine_UIElements_VisualElement__AddToClassList

## NameplatesManagerGame__StopCasting
LIT_"'gauge'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'gauge'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList

## NameplatesManagerGame__UpdateHoveredNameplateStyle
UnityEngine_Object__op_Equality → LIT_"'target-bubble-hover'" → LIT_"'TargetBubbleLeft'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>,unaff_RDI → UnityEngine_UIElements_VisualElement__ClassListContains → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'TargetBubbleRight'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → UnityEngine_UIElements_VisualElement__ClassListContains → MR_System.Collections.Generic.List<string>.Remove → MR_UnityEngine.UIElements.ObjectListPool<string>.Release → LIT_"'TargetBubbleLeft'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>,unaff_RDI → UnityEngine_UIElements_VisualElement__ClassListContains → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'TargetBubbleRight'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>,unaff_RDI → UnityEngine_UIElements_VisualElement__ClassListContains → MR_UnityEngine.UIElements.ObjectListPool<string>.Get → MR_System.Collections.Generic.List<string>.Contains → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → MR_System.Collections.Generic.List<string>.set_Capacity → MR_System.Collections.Generic.List<string>.Add

## NameplatesManagerGame__UpdateNameplateStyle
NameplatesManagerBase__UpdateNameplateStyle

## NameplatesManagerGame__UpdatePlayerGauge
UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → PlayerNameplate__HideGauge

## NameplatesManagerGame__UpdatePlayerNameplate
TI_SparkObservador → LIT_"'hidden'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'hidden'" → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'hidden'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'hidden'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → NameplatesManagerBase__UpdateNameplatePosition → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → PlayerNameplate__HideGauge

## NameplatesManagerGame__UpdateTargetedNameplateStyle
UnityEngine_Object__op_Equality → LIT_"'target-bubble-attack'" → LIT_"'TargetBubbleLeft'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>,unaff_RDI → UnityEngine_UIElements_VisualElement__ClassListContains → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'TargetBubbleRight'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>,unaff_RDI → UnityEngine_UIElements_VisualElement__ClassListContains → MR_UnityEngine.UIElements.ObjectListPool<string>.Get → MR_System.Collections.Generic.List<string>.Contains → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → MR_System.Collections.Generic.List<string>.set_Capacity → MR_System.Collections.Generic.List<string>.Add → Nameplate__SetStyle → LIT_"'target-bubble-target'" → LIT_"'target-bubble-attack'" → LIT_"'TargetBubbleLeft'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>,unaff_RDI → UnityEngine_UIElements_VisualElement__ClassListContains → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'TargetBubbleRight'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → UnityEngine_UIElements_VisualElement__ClassListContains → MR_System.Collections.Generic.List<string>.Remove → MR_UnityEngine.UIElements.ObjectListPool<string>.Release

## NameplatesManagerGame___ctor
MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>..ctor → MR_System.Collections.Generic.List<Nameplate>..ctor

## NameplatesManagerLobby__Awake
UnityEngine_Object__op_Equality → UnityEngine_Component__get_gameObject → UnityEngine_Object__Destroy → TI_SparkArte → LIT_"'Data/UI/_Elements/Game/Nameplate/Nameplate'" → MR_SparkArte.Load<UnityEngine.UIElements.VisualTreeAsset> → UnityEngine_Object__op_Equality → LIT_"'Failed to load nameplate template.'"

## NameplatesManagerLobby__CreateNameplate
UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → LIT_"'EntityName'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → LIT_"'EntityTitle'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → Nameplate___ctor → LIT_"'DeleteTimer'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → UnityEngine_UIElements_VisualElement__Add

## NameplatesManagerLobby__FixedUpdate
MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.get_Keys → MR_System.Linq.Enumerable.ToList<int> → MR_System.Collections.Generic.List<int>.GetEnumerator → MR_System.Collections.Generic.List<int>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<int>.Dispose → MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.TryGetValue → UnityEngine_Object__op_Equality → NameplatesManagerBase__RemoveNameplate → Nameplate__Exibe

## NameplatesManagerLobby__IsSystemReady
UnityEngine_Object__op_Equality → UnityEngine_Component__get_transform → LIT_"'NameplatesContainer'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>

## NameplatesManagerLobby__OnDestroy
MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.Clear

## NameplatesManagerLobby__ScanForEntities
UnityEngine_Transform__get_position → UnityEngine_Physics__OverlapSphereNonAlloc → UnityEngine_Transform__get_position → UnityEngine_Physics__OverlapSphereNonAlloc → Gear__UpdateWeaponType → UnityEngine_Object__op_Equality → UnityEngine_Collider__get_attachedRigidbody → UnityEngine_Object__op_Inequality → UnityEngine_Collider__get_attachedRigidbody → UnityEngine_Component__get_transform → MD_NameplatesManagerBase.__c__DisplayClass18_0._ProcessEntitiesInRange_b__0 → MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.GetOrAdd

## NameplatesManagerLobby__SetActiveCamera
UnityEngine_Object__op_Equality → UnityEngine_Component__get_transform

## NameplatesManagerLobby__UpdateNameplateStyle
NameplatesManagerBase__UpdateNameplateStyle → LIT_"'delete-timer'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'delete-timer'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'delete-timer'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'delete-timer'" → UnityEngine_UIElements_VisualElement__AddToClassList → DateUtils__ConvertSecondsToDate → System_String__Concat → LIT_"'Remaining Time : '"

## NpcHtmlWindow__AddButton
TI_NpcHtmlWindow.<>c__DisplayClass46_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → LIT_"'ButtonLabel'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → LIT_"'width'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → UnityEngine_UIElements_VisualElement__get_style → System_Int32__Parse → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → System_Int32__Parse → UnityEngine_UIElements_StyleLength__op_Implicit → LIT_"'height'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → UnityEngine_UIElements_VisualElement__get_style → System_Int32__Parse → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → System_Int32__Parse → UnityEngine_UIElements_StyleLength__op_Implicit → LIT_"'action'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → MD_NpcHtmlWindow.__c__DisplayClass46_0._AddButton_b__0 → UnityEngine_UIElements_Button__add_clicked → LIT_"'value'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → LIT_"'fore'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → LIT_"'*'" → LIT_"'L2UI_CH3.next1'" → LIT_"'>'" → LIT_"'L2UI_CH3.prev1'" → LIT_"'<'" → LIT_"'*'" → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → UnityEngine_UIElements_VisualElement__Add

## NpcHtmlWindow__AddDropList
TI_NpcHtmlWindow.<>c__DisplayClass42_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → LIT_"'width'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → System_Int32__Parse → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → LIT_"'height'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → System_Int32__Parse → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → LIT_"'list'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → System_String__Split → LIT_"';'" → MR_System.Collections.Generic.List<string>.AddRange → MR_UnityEngine.UIElements.PopupField<string>.set_index → LIT_"'var'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → MR_UnityEngine.UIElements.BasePopupField<string,string>.get_text → MR_System.Collections.Generic.Dictionary<string,string>.TryAdd → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ChangeEvent<string>> → MD_NpcHtmlWindow.__c__DisplayClass42_0._AddDropList_b__0 → MR_UnityEngine.UIElements.INotifyValueChangedExtensions.RegisterValueChangedCallback<string> → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → UnityEngine_UIElements_VisualElement__Add

## NpcHtmlWindow__AddHyperlinkElement
TI_NpcHtmlWindow.<>c__DisplayClass45_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → LIT_"'ButtonLabel'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → LIT_"'ButtonBg'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → LIT_"'ButtonLabel'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → LIT_"'width'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → UnityEngine_UIElements_VisualElement__get_style → System_Int32__Parse → UnityEngine_UIElements_StyleLength__op_Implicit → LIT_"'height'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → UnityEngine_UIElements_VisualElement__get_style → System_Int32__Parse → UnityEngine_UIElements_StyleLength__op_Implicit → LIT_"'action'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → MD_NpcHtmlWindow.__c__DisplayClass45_0._AddHyperlinkElement_b__0 → UnityEngine_UIElements_Button__add_clicked → LIT_"'value'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → LIT_"'<u>...</u>'" → System_String__Concat → LIT_"'<u>'" → LIT_"'</u>'" → UnityEngine_UIElements_VisualElement__Add

## NpcHtmlWindow__AddImageElement
UnityEngine_UIElements_VisualElement___ctor → TI_SparkArte → LIT_"'Data/SysTextures/Icon/accessary_magic_ring_i00'" → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_UIElements_Image___ctor → LIT_"'src'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → System_String__Split → LIT_"'.'" → System_String__Concat → LIT_"'Data/UI/Assets/html/'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_Object__op_Inequality → UnityEngine_UIElements_Image__set_image → LIT_"'width'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → System_Int32__Parse → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → LIT_"'height'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → System_Int32__Parse → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add

## NpcHtmlWindow__AddInputField
TI_NpcHtmlWindow.<>c__DisplayClass47_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → LIT_"'width'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → System_Int32__Parse → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → LIT_"'height'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → System_Int32__Parse → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → LIT_"'var'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ChangeEvent<string>> → MD_NpcHtmlWindow.__c__DisplayClass47_0._AddInputField_b__0 → MR_UnityEngine.UIElements.INotifyValueChangedExtensions.RegisterValueChangedCallback<string> → TI_BlinkingCursorManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → UnityEngine_UIElements_VisualElement__Add

## NpcHtmlWindow__AddLineBreak
UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → LIT_"\" → System_InvalidOperationException___ctor → MD_UnityEngine.UIElements.VisualElement.Add → UnityEngine_UIElements_VisualElement_Hierarchy__Add → UnityEngine_UIElements_VisualElement__Add

## NpcHtmlWindow__AddTextElement
UnityEngine_UIElements_TextElement__set_enableRichText → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'l2-color-4'" → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'html-window-label'" → UnityEngine_UIElements_VisualElement__Add

## NpcHtmlWindow__Awake
TI_NpcHtmlWindow → UnityEngine_Object__op_Equality → TI_NpcHtmlWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## NpcHtmlWindow__BuildWindow
TI_NpcHtmlWindow.<BuildWindow>d__21 → Gear__UpdateWeaponType

## NpcHtmlWindow__ButtonClicked
LIT_"'\\\\$(\\\\w+)'" → UnityEngine_Debug__Log → System_String__Contains → LIT_"'$'" → MD_NpcHtmlWindow._ButtonClicked_b__50_0 → System_Text_RegularExpressions_Regex__Replace → LIT_"'\\\\$(\\\\w+)'" → UnityEngine_Debug__Log → RequestBypassToServerPacket___ctor

## NpcHtmlWindow__Clique
LIT_"'\\\\$(\\\\w+)'" → TI_NpcHtmlWindow.<>c__DisplayClass26_0 → Gear__UpdateWeaponType → LIT_"''" → System_String__Contains → LIT_"'$'" → MD_NpcHtmlWindow.__c__DisplayClass26_0._Clique_b__0 → System_Text_RegularExpressions_Regex__Replace → LIT_"'\\\\$(\\\\w+)'" → TI_NpcHtmlWindow → NpcHtmlWindow__ComandoGmPerigoso → TI_L2ConfirmWindow → UnityEngine_Object__op_Inequality → NpcHtmlWindow__PerguntaGm → TI_L2ConfirmWindow → UnityEngine_Object__op_Equality → System_String__Split → System_Int32__TryParse → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.ContainsKey → LIT_"''" → SMParam___ctor → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → SystemMessage__PrintMessage → TI_L2ConfirmWindow → MD_NpcHtmlWindow.__c__DisplayClass26_0._Clique_b__1 → TI_NpcHtmlWindow.<>c → MD_NpcHtmlWindow.__c._Clique_b__26_2 → TI_NpcHtmlWindow.<>c → L2ConfirmWindow__ShowWindow → NpcHtmlWindow__Manda

## NpcHtmlWindow__ComandoGmPerigoso
LIT_"''" → System_String__StartsWith → LIT_"'bypass'" → System_String__StartsWith → LIT_"'-h'" → System_String__Split → TI_NpcHtmlWindow → System_String__ToLowerInvariant → MR_System.Array.IndexOf<string> → System_String__Replace → System_String__Concat → LIT_"' '"

## NpcHtmlWindow__ExtractAttributes
LIT_"'back=[\" → LIT_"'value=[\" → LIT_"'width=[\" → LIT_"'src=[\" → LIT_"'var=[\" → LIT_"'fore=[\" → LIT_"'action=[\" → LIT_"'list=[\" → LIT_"'height=[\" → LIT_"'bgcolor=[\" → MR_System.Collections.Generic.Dictionary<string,string>..ctor → LIT_"'action'" → LIT_"'action=[\" → MR_System.Collections.Generic.Dictionary<string,string>.set_Item → LIT_"'back'" → LIT_"'back=[\" → MR_System.Collections.Generic.Dictionary<string,string>.set_Item → LIT_"'fore'" → LIT_"'fore=[\" → MR_System.Collections.Generic.Dictionary<string,string>.set_Item → LIT_"'width'" → LIT_"'width=[\" → MR_System.Collections.Generic.Dictionary<string,string>.set_Item → LIT_"'height'" → LIT_"'height=[\" → MR_System.Collections.Generic.Dictionary<string,string>.set_Item → LIT_"'bgcolor'" → LIT_"'bgcolor=[\" → MR_System.Collections.Generic.Dictionary<string,string>.set_Item → LIT_"'value'" → LIT_"'value=[\" → MR_System.Collections.Generic.Dictionary<string,string>.set_Item → LIT_"'src'" → LIT_"'src=[\" → MR_System.Collections.Generic.Dictionary<string,string>.set_Item → LIT_"'var'" → LIT_"'var=[\" → MR_System.Collections.Generic.Dictionary<string,string>.set_Item → LIT_"'list'" → LIT_"'list=[\" → MR_System.Collections.Generic.Dictionary<string,string>.set_Item → MR_System.Collections.Generic.Dictionary<string,string>.GetEnumerator → MR_System.Collections.Generic.Dictionary<string,string>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<string,string>.Dispose → System_Text_RegularExpressions_Regex__Match → System_Text_RegularExpressions_Capture__ToString → LIT_"'action'" → System_String__Replace → LIT_"'bypass'" → LIT_"''" → System_String__Replace → LIT_"'-h'" → LIT_"''"

## NpcHtmlWindow__ExtractNode
System_String__IndexOf → System_String__Substring → TI_NpcHtmlWindow.HtmlNode → Gear__UpdateWeaponType → System_String__Substring → NpcHtmlWindow__ExtractAttributes

## NpcHtmlWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → System_ThrowHelper__ThrowArgumentOutOfRange_IndexException → System_Array__Copy

## NpcHtmlWindow__InitWindow
L2Window__InitWindow → L2Window__GetElementByClass → LIT_"'drag-area'" → TI_DragManipulator → DragManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → L2PopupWindow__RegisterCloseWindowEvent → LIT_"'btn-close-frame'" → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_L2PopupWindow._RegisterClickWindowEvent_b__1_0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_L2PopupWindow._RegisterClickWindowEvent_b__1_1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>

## NpcHtmlWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Components/L2Button/L2Button'"

## NpcHtmlWindow__Manda
System_String__StartsWith → LIT_"'link '" → System_String__StartsWith → LIT_"'bypass'" → System_String__StartsWith → LIT_"'-h'" → GameClientPacketHandler__RequestBypassToServer → TI_SparkPacoteLivre → SparkPacoteLivre__S → SparkPacoteLivre__Fim

## NpcHtmlWindow__OnDestroy
TI_NpcHtmlWindow

## NpcHtmlWindow__ParseHtmlIntoNodes
LIT_"'action=\" → TI_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode> → MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>..ctor → System_Text_StringBuilder___ctor → System_String__get_Chars → System_Text_StringBuilder__Append → System_String__IndexOf → System_String__Substring → System_String__StartsWith → LIT_"'<title'" → System_String__StartsWith → LIT_"'<br1'" → System_String__StartsWith → LIT_"'<br'" → System_String__StartsWith → LIT_"'<img'" → System_String__StartsWith → LIT_"'<button '" → System_String__StartsWith → LIT_"'<edit'" → System_String__StartsWith → LIT_"'<combobox'" → System_String__StartsWith → LIT_"'<table'" → System_String__StartsWith → LIT_"'<a '" → System_Text_StringBuilder__Append → TI_NpcHtmlWindow.HtmlNode → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add → System_Text_StringBuilder__Clear → System_String__IndexOf → System_String__Substring → System_Text_RegularExpressions_Regex__Match → TI_NpcHtmlWindow.HtmlNode → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<string,string>..ctor → System_Text_RegularExpressions_Capture__ToString → System_String__Replace → LIT_"'bypass'" → LIT_"''" → System_String__Replace → LIT_"'-h'" → LIT_"''" → LIT_"'action'" → MR_System.Collections.Generic.Dictionary<string,string>.set_Item → System_Text_RegularExpressions_Capture__ToString → LIT_"'value'" → TI_NpcHtmlWindow.HtmlNode → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add → System_Text_StringBuilder__Clear → NpcHtmlWindow__ExtractNode → TI_NpcHtmlWindow.HtmlNode → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add → System_Text_StringBuilder__Clear → TI_NpcHtmlWindow.HtmlNode → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add → System_Text_StringBuilder__Clear → TI_NpcHtmlWindow.HtmlNode → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add → System_Text_StringBuilder__Clear → TI_NpcHtmlWindow.HtmlNode → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add → System_Text_StringBuilder__Clear → NpcHtmlWindow__ExtractNode → TI_NpcHtmlWindow.HtmlNode → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add → System_Text_StringBuilder__Clear → TI_NpcHtmlWindow.HtmlNode → Gear__UpdateWeaponType → TI_NpcHtmlWindow.HtmlNode → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add → System_Text_StringBuilder__Clear → TI_NpcHtmlWindow.HtmlNode → Gear__UpdateWeaponType → TI_NpcHtmlWindow.HtmlNode → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add → System_Text_StringBuilder__Clear → System_String__IndexOf → System_String__Substring → TI_NpcHtmlWindow.HtmlNode → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add

## NpcHtmlWindow__PerguntaGm
TI_NpcHtmlWindow.<>c__DisplayClass29_0 → Gear__UpdateWeaponType → TI_L2ConfirmWindow → System_String__Concat → LIT_"'Run GM command: '" → LIT_"'?'" → MD_NpcHtmlWindow.__c__DisplayClass29_0._PerguntaGm_b__0 → TI_NpcHtmlWindow.<>c → MD_NpcHtmlWindow.__c._PerguntaGm_b__29_1 → TI_NpcHtmlWindow.<>c → L2ConfirmWindow__ShowWindow

## NpcHtmlWindow__PreProcessHtml
System_Text_RegularExpressions_Regex__Replace → LIT_"'\\\\s{2,}'" → LIT_"''" → System_String__Contains → LIT_"'<center>'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → System_String__Replace → LIT_"'<html>'" → LIT_"''" → System_String__Replace → LIT_"'</html>'" → LIT_"''" → System_String__Replace → LIT_"'<body>'" → LIT_"''" → System_String__Replace → LIT_"'</body>'" → LIT_"''" → System_Int32__ToString → System_String__Replace → LIT_"'%objectId%'" → System_Int32__ToString → System_String__Replace → LIT_"'%item%'" → System_String__Replace → LIT_"'<center>'" → LIT_"''" → System_String__Replace → LIT_"'</center>'" → LIT_"''" → System_String__Replace → LIT_"'<p>'" → LIT_"'<br1>'" → System_String__Replace → LIT_"'</p>'" → LIT_"'<br1>'" → TI_NpcHtmlWindow.<>c → LIT_"'\\\\&\\\\#(\\\\d+);'" → TI_NpcHtmlWindow.<>c → MD_NpcHtmlWindow.__c._ReplaceItemNames_b__34_0 → TI_NpcHtmlWindow.<>c → System_Text_RegularExpressions_Regex__Replace → TI_NpcHtmlWindow.<>c → LIT_"'\\\\&\\\\$(\\\\d+);'" → TI_NpcHtmlWindow.<>c → MD_NpcHtmlWindow.__c._ReplaceSysStrings_b__35_0 → TI_NpcHtmlWindow.<>c → System_Text_RegularExpressions_Regex__Replace → LIT_"'<font color=(?:\" → TI_NpcHtmlWindow.<>c → LIT_"'<font color=(?:\" → TI_NpcHtmlWindow.<>c → MD_NpcHtmlWindow.__c._ReplaceFontColors_b__36_0 → TI_NpcHtmlWindow.<>c → System_Text_RegularExpressions_Regex__Replace

## NpcHtmlWindow__ProcessHtmlContent
NpcHtmlWindow__ParseHtmlIntoNodes → System_Text_StringBuilder___ctor → MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.GetEnumerator → MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.MoveNext → System_Text_StringBuilder__Append → NpcHtmlWindow__AddTextElement → System_Text_StringBuilder__Clear → NpcHtmlWindow__ProcessNode → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Dispose → NpcHtmlWindow__AddTextElement

## NpcHtmlWindow__ProcessNode
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → NpcHtmlWindow__AddTextElement → NpcHtmlWindow__AddLineBreak → NpcHtmlWindow__AddImageElement → NpcHtmlWindow__ProcessTable → NpcHtmlWindow__AddHyperlinkElement → NpcHtmlWindow__AddButton → NpcHtmlWindow__AddInputField → NpcHtmlWindow__AddDropList

## NpcHtmlWindow__ProcessTable
LIT_"'height=(\\\\d+)'" → LIT_"'align=(left|center|right|justify)'" → LIT_"'FIXWIDTH=(\\\\d+)'" → LIT_"'<td[^>]*>(.*?)</td>'" → LIT_"'<tr>(.*?)</tr>'" → LIT_"'width=(\\\\d+)'" → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → LIT_"'height'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → UnityEngine_UIElements_VisualElement__get_style → System_Int32__Parse → UnityEngine_UIElements_StyleLength__op_Implicit → LIT_"'width'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → System_Int32__Parse → UnityEngine_UIElements_StyleLength__op_Implicit → LIT_"'bgcolor'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → UnityEngine_UIElements_VisualElement__get_style → System_String__Concat → LIT_"'FF'" → ColorUtils__HexToColor → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → System_Text_RegularExpressions_Regex__Matches → LIT_"'<tr>(.*?)</tr>'" → System_Text_RegularExpressions_MatchCollection__GetEnumerator → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → LIT_"'<td[^>]*>(.*?)</td>'" → LIT_"'width=(\\\\d+)'" → LIT_"'height=(\\\\d+)'" → LIT_"'FIXWIDTH=(\\\\d+)'" → LIT_"'align=(left|center|right|justify)'" → LIT_"'<td[^>]*>(.*?)</td>'" → System_Text_RegularExpressions_Capture__ToString → System_Text_RegularExpressions_Regex__Matches → System_Text_RegularExpressions_MatchCollection__GetEnumerator → System_Text_RegularExpressions_MatchCollection__get_Count → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → System_Text_RegularExpressions_Capture__ToString → System_String__IndexOf → LIT_"'>'" → System_String__Substring → System_Text_RegularExpressions_Regex__Match → LIT_"''" → System_Text_RegularExpressions_Capture__ToString → System_Text_RegularExpressions_Regex__Match → LIT_"''" → System_Text_RegularExpressions_Capture__ToString → System_Text_RegularExpressions_Regex__Match → LIT_"''" → System_Text_RegularExpressions_Capture__ToString → System_Text_RegularExpressions_Regex__Match → LIT_"''" → System_Text_RegularExpressions_Capture__ToString → System_Text_RegularExpressions_Regex__Match → LIT_"''" → System_Text_RegularExpressions_Capture__ToString → System_Int32__Parse → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → System_Int32__Parse → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_Visua

## NpcHtmlWindow__RefreshContent
TI_SparkEnchantWindow → UnityEngine_Object__op_Inequality → TI_SparkEnchantWindow → UnityEngine_UIElements_VisualElement__Clear → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → MR_System.Collections.Generic.Dictionary<string,string>..ctor → LIT_"'Chat'" → LIT_"''" → System_Int32__ToString → System_String__Replace → LIT_"'%objectId%'" → System_Int32__ToString → System_String__Replace → LIT_"'%item%'" → TI_SparkHtml.Contexto → SparkHtml_Contexto___ctor → MD_NpcHtmlWindow.Clique → MD_NpcHtmlWindow._RefreshContent_b__24_0 → TI_SparkHtml → SparkHtml__Le → SparkHtml__Desenha → UnityEngine_UIElements_ScrollView__set_scrollOffset

## NpcHtmlWindow__ReplaceFontColors
LIT_"'<font color=(?:\" → TI_NpcHtmlWindow.<>c → LIT_"'<font color=(?:\" → TI_NpcHtmlWindow.<>c → MD_NpcHtmlWindow.__c._ReplaceFontColors_b__36_0 → TI_NpcHtmlWindow.<>c → System_Text_RegularExpressions_Regex___ctor → System_Text_RegularExpressions_Regex__Replace → LIT_"'input'" → System_ArgumentNullException___ctor → MD_System.Text.RegularExpressions.Regex.Replace

## NpcHtmlWindow__ReplaceItemNames
TI_NpcHtmlWindow.<>c → LIT_"'\\\\&\\\\#(\\\\d+);'" → TI_NpcHtmlWindow.<>c → MD_NpcHtmlWindow.__c._ReplaceItemNames_b__34_0 → TI_NpcHtmlWindow.<>c → System_Text_RegularExpressions_Regex___ctor → System_Text_RegularExpressions_Regex__Replace → LIT_"'input'" → System_ArgumentNullException___ctor → MD_System.Text.RegularExpressions.Regex.Replace

## NpcHtmlWindow__ReplaceSysStrings
TI_NpcHtmlWindow.<>c → LIT_"'\\\\&\\\\$(\\\\d+);'" → TI_NpcHtmlWindow.<>c → MD_NpcHtmlWindow.__c._ReplaceSysStrings_b__35_0 → TI_NpcHtmlWindow.<>c → System_Text_RegularExpressions_Regex___ctor → System_Text_RegularExpressions_Regex__Replace → LIT_"'input'" → System_ArgumentNullException___ctor → MD_System.Text.RegularExpressions.Regex.Replace

## NpcHtmlWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → L2GameUI__WindowOpened → TI_ShopWindow

## NpcHtmlWindow___cctor
LIT_"'admin_ban'"

## NpcHtmlWindow___ctor
TI_L2Window

## OlympiadWindow__Awake
TI_OlympiadWindow → UnityEngine_Object__op_Equality → TI_OlympiadWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## OlympiadWindow__Monta
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleRotate__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_OlympiadWindow → OlympiadWindow__CriaCartao → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'VS'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → SparkEstilo__Painel → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleRotate__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → SparkEstilo__Espaco → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_OlympiadWindow._Monta_b__15_0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → UnityEngine_UIElements_VisualElement__Add → MR_UnityEngine.Component.GetComponent<SparkObservador> → UnityEngine_Object__op_Equality → UnityEngine_Component__get_gameObject → MR_UnityEngine.GameObject.AddComponent<SparkObservador> → SparkObservador__Monta → MD_OlympiadWindow.Atualiza → TI_SparkOlimpiada → SparkOlimpiada__add_Mudou → MD_OlympiadWindow.MostraResultado → SparkOlimpiada__add_ChegouResultado → OlympiadWindow__Atualiza

## OlympiadWindow__MostraArma
LIT_"'  <color=#C896FF>(Augmented)</color>'" → LIT_"''" → SparkUI__NomeDoItem → MR_System.Collections.Generic.List<string>..ctor → TI_SparkDicaItem → SparkDicaItem__LinhasAugment → System_String__Concat → LIT_"'\\nNo augment'" → System_String__Concat → LIT_"'  <color=#C896FF>(Augmented)</color>'" → System_Text_StringBuilder___ctor → System_Text_StringBuilder__Append → LIT_"'\\n\\n<color=#C896FF>Augment Effects</color>'" → MR_System.Collections.Generic.List<string>.GetEnumerator → MR_System.Collections.Generic.List<string>.MoveNext → System_Text_StringBuilder__Append → LIT_"'\\n<color=#C896FF>  '" → System_Text_StringBuilder__Append → LIT_"'</color>'" → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<string>.Dispose

## OlympiadWindow__MostraBuffs
System_Text_StringBuilder___ctor → MR_System.Collections.Generic.List<System.ValueTuple<int,int,int>>.GetEnumerator → MR_System.Collections.Generic.List<System.ValueTuple<int,int,int>>.MoveNext → System_Text_StringBuilder__Append → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<System.ValueTuple<int,int,int>>.Dispose → UnityEngine_UIElements_VisualElement__Clear → MR_System.Collections.Generic.List<System.ValueTuple<int,int,int>>.GetEnumerator → MR_System.Collections.Generic.List<System.ValueTuple<int,int,int>>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<System.ValueTuple<int,int,int>>.Dispose → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SkillgrpTable__get_Instance → SkillgrpTable__GetSkill → UnityEngine_UIElements_VisualElement__get_style → IconTable__get_Instance → IconTable__LoadTextureByName → UnityEngine_UIElements_StyleBackground__op_Implicit → Buff__ResolveBuffType → BuffSlot__CriaBuff → TI_TooltipManipulator → TooltipManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_MouseOverDetectionManipulator → MouseOverDetectionManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → UnityEngine_UIElements_VisualElement__Add

## OlympiadWindow__MostraResultado
LIT_"'Damage {0:#,0}   Points {1} ({2})'" → TI_SparkOlimpiada → UnityEngine_UIElements_VisualElement__Clear → LIT_"'Draw'" → System_String__Concat → LIT_"' wins!'" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_OlympiadWindow → TI_SparkOlimpiada → SparkOlimpiada__NomeDaClasse → System_String__Concat → LIT_"'  <color=#A09080>'" → LIT_"'</color>'" → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_TextElement__set_enableRichText → UnityEngine_UIElements_VisualElement__Add → LIT_"'0'" → System_String__Format → LIT_"'<color=#E08080>{0}</color>'" → System_String__Format → LIT_"'<color=#80E080>+{0}</color>'" → System_String__Format → LIT_"'Damage {0:#,0}   Points {1} ({2})'" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_TextElement__set_enableRichText → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Click to close'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__BringToFront

## OlympiadWindow__OnDestroy
TI_OlympiadWindow → UnityEngine_Object__op_Equality → TI_OlympiadWindow → MD_OlympiadWindow.Atualiza → TI_SparkOlimpiada → SparkOlimpiada__remove_Mudou → MD_OlympiadWindow.MostraResultado → TI_SparkOlimpiada → System_Delegate__Remove → TI_SparkOlimpiada

## OlympiadWindow__Update
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Equality → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → OlympiadWindow__AtualizaProprio

## OptionsWindow__AbreSuspensa
LIT_"'abriu a lista ({0} opcoes, atual {1}) em {2:0},{3:0}'" → TI_OptionsWindow.<>c__DisplayClass65_0 → SparkMapaWindow_Loja___ctor → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_userData → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_worldBound → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → SparkEstilo__Textura → LIT_"'Opcoes/ComboBox_DF_Dropmenu_Bg'" → UnityEngine_UIElements_StyleBackground__op_Implicit → SparkEstilo__Fatia → SparkEstilo__Espaco → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_OptionsWindow.<>c__DisplayClass65_1 → SparkMapaWindow_Loja___ctor → TI_SparkEstilo → TI_OptionsWindow → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent> → MD_OptionsWindow.__c__DisplayClass65_1._AbreSuspensa_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent> → MD_OptionsWindow.__c__DisplayClass65_1._AbreSuspensa_b__2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_OptionsWindow.__c__DisplayClass65_1._AbreSuspensa_b__3 → UnityEngine_UIElements_VisualElement__Add → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.WheelEvent> → MD_OptionsWindow.__c__DisplayClass65_0._AbreSuspensa_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.WheelEvent> → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → System_String__Format → LIT_"'abriu a list

## OptionsWindow__Awake
TI_OptionsWindow → UnityEngine_Object__op_Equality → TI_OptionsWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## OptionsWindow__BotaoDeAba
TI_OptionsWindow.<>c__DisplayClass62_0 → SparkMapaWindow_Loja___ctor → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_OptionsWindow → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_OptionsWindow → MR_System.Array.IndexOf<string> → MD_OptionsWindow.__c__DisplayClass62_0._BotaoDeAba_b__0 → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent> → MD_OptionsWindow.__c__DisplayClass62_0._BotaoDeAba_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent> → MD_OptionsWindow.__c__DisplayClass62_0._BotaoDeAba_b__2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent> → MD_OptionsWindow.__c__DisplayClass62_0._BotaoDeAba_b__3 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent> → MD_OptionsWindow.__c__DisplayClass62_0._BotaoDeAba_b__4 → OptionsWindow__Brilhos → UnityEngine_UIElements_VisualElement__set_userData

## OptionsWindow__BuildWindow
TI_OptionsWindow.<BuildWindow>d__30 → AbstractEffectWindow__UpdateBuffTimers_d__24___ctor

## OptionsWindow__CaixaDeTecla
TI_OptionsWindow.<>c__DisplayClass52_0 → SparkMapaWindow_Loja___ctor → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → SparkEstilo__Textura → LIT_"'Opcoes/EditBox_DF_bg'" → UnityEngine_UIElements_StyleBackground__op_Implicit → SparkEstilo__Fatia → TI_SparkTeclas → SparkTeclas__Texto → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → SparkTeclas__QuemUsa → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent> → MD_OptionsWindow.__c__DisplayClass52_0._CaixaDeTecla_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent> → MD_OptionsWindow.__c__DisplayClass52_0._CaixaDeTecla_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_OptionsWindow.__c__DisplayClass52_0._CaixaDeTecla_b__2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>

## OptionsWindow__FechaSuspensa
UnityEngine_UIElements_VisualElement__RemoveFromHierarchy

## OptionsWindow__HideWindow
UnityEngine_UIElements_VisualElement__RemoveFromHierarchy → TI_SparkOpcoes → SparkOpcoes__Recarrega → SparkOpcoes__AplicaAudio → SparkOpcoes__AplicaEfeitos → SparkOpcoes__AplicaInterface → L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2PopupWindow__HideWindow → L2GameUI__WindowClosed

## OptionsWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkRefinoWindow/SparkRefinoWindow'"

## OptionsWindow__MostraTeclas
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Equality → UnityEngine_UIElements_VisualElement__Clear → TI_SparkTeclas → SparkTeclas__Lista → TI_SparkTeclas → SparkTeclas__EmUso → System_String__Concat → LIT_"'Keys in use: '" → MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator → MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose → System_String__op_Inequality → TI_OptionsWindow → OptionsWindow__LinhaSimples → OptionsWindow__CaixaDeTecla → UnityEngine_UIElements_VisualElement__Add → OptionsWindow__CaixaDeTecla → UnityEngine_UIElements_VisualElement__Add → TI_OptionsWindow → OptionsWindow__Grupo → UnityEngine_UIElements_VisualElement__Add → OptionsWindow__LinhaSimples → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → LIT_"'Shortcut 1'" → LIT_"'Shortcut 2'" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__Add

## OptionsWindow__OnDestroy
TI_OptionsWindow → UnityEngine_Object__op_Equality → TI_OptionsWindow → TI_SparkChatFiltro → SparkChatFiltro__remove_Mudou → TI_SparkOpcoes → SparkOpcoes__remove_CeuMudou → TI_SparkOpcoes → SparkOpcoes__remove_ClimaMudou

## OptionsWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## OptionsWindow__Teclas
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkEstilo → SparkEstilo__Espaco → TI_OptionsWindow → OptionsWindow__Secao → LIT_"'Shortcut'" → UnityEngine_UIElements_VisualElement__Add → TI_OptionsWindow → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Click a box and press the key or combination (Alt, Ctrl ..." → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → SparkEstilo__Lista → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add

## OptionsWindow__ToggleHideWindow
TI_SparkOpcoes → SparkOpcoes__Carrega → MR_System.Collections.Generic.List<System.Action>.GetEnumerator → MR_System.Collections.Generic.List<System.Action>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<System.Action>.Dispose → OptionsWindow__MostraTeclas

## PartyWindow__AtualizaBotaoBuffs
LIT_"'party_buffbutton_off'" → System_Int32__ToString → System_String__Concat → LIT_"'party_buffbutton_'" → UnityEngine_UIElements_VisualElement__get_style → System_String__Concat → LIT_"'Data/UI/Assets/Party/'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_UIElements_StyleBackground__op_Implicit

## PartyWindow__Awake
TI_PartyWindow → UnityEngine_Object__op_Equality → TI_PartyWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## PartyWindow__BuildWindow
TI_PartyWindow.<BuildWindow>d__17 → Gear__UpdateWeaponType

## PartyWindow__FechaMenuFora
UnityEngine_UIElements_VisualElement__get_worldBound → PartyWindow__FechaMenu

## PartyWindow__FechaMenu
UnityEngine_UIElements_VisualElement__RemoveFromHierarchy → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_PartyWindow.FechaMenuFora → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.MouseDownEvent>

## PartyWindow__Hover
TI_PartyWindow.<>c__DisplayClass38_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement__get_style → System_String__Concat → LIT_"'Data/UI/Assets/Party/'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_UIElements_StyleBackground__op_Implicit → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent> → MD_PartyWindow.__c__DisplayClass38_0._Hover_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent> → MD_PartyWindow.__c__DisplayClass38_0._Hover_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## PartyWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/PartyWindow/PartyWindow'"

## PartyWindow__MenuDeMembros
TI_PartyWindow.<>c__DisplayClass32_0 → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<System.ValueTuple<string,System.Action>>..ctor → TI_SparkParty → MR_System.Collections.Generic.List<System.ValueTuple<string,System.Action>>.ToArray → TI_PartyWindow.<>c__DisplayClass32_1 → Gear__UpdateWeaponType → MD_PartyWindow.__c__DisplayClass32_1._MenuDeMembros_b__0 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → MR_System.ValueTuple<string,System.Action>..ctor → MR_System.Collections.Generic.List<System.ValueTuple<string,System.Action>>.Add

## PartyWindow__MontaMoldura
LIT_"'Frame_DF_Ver_Small_Top:party-aba-topo'" → LIT_"'Frame_DF_Ver_Small_Tile:party-aba-tile'" → LIT_"'Frame_DF_Ver_Small_Center:party-aba-meio'" → LIT_"'Frame_DF_Ver_Small_Tile:party-aba-tile'" → LIT_"'Frame_DF_Ver_Small_Bottom:party-aba-base'" → System_String__Split → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__AddToClassList → UnityEngine_UIElements_VisualElement__get_style → System_String__Concat → LIT_"'Data/UI/Assets/Party/'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__Insert

## PartyWindow__MostraMenu
PartyWindow__FechaMenu → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_PartyWindow.<>c__DisplayClass39_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_Label___ctor → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'party-nome'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent> → MD_PartyWindow.__c__DisplayClass39_0._MostraMenu_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent> → MD_PartyWindow.__c__DisplayClass39_0._MostraMenu_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_PartyWindow.__c__DisplayClass39_0._MostraMenu_b__2 → UnityEngine_UIElements_VisualElement__Add → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_PartyWindow.FechaMenuFora → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## PartyWindow__Mostra
TI_SparkParty → SparkParty__EhDebuff → SparkParty__EhCancao

## PartyWindow__OnDestroy
MD_PartyWindow.Marca → TI_SparkParty → SparkParty__remove_Mudou → TI_PartyWindow → UnityEngine_Object__op_Equality → TI_PartyWindow

## PartyWindow__Update
PartyWindow__FechaMenu → UnityEngine_UIElements_VisualElement__Clear → UnityEngine_UIElements_VisualElement__get_style → TI_SparkParty → SparkParty__get_EmParty → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_SparkParty → PartyWindow__Cartao → UnityEngine_UIElements_VisualElement__Add

## PathFinderController__Awake
UnityEngine_Object__op_Equality → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## PathFinderController__OnControllerColliderHit
UnityEngine_ControllerColliderHit__get_gameObject → UnityEngine_GameObject__get_layer → UnityEngine_ControllerColliderHit__get_gameObject → ObjectData___ctor

## PathFinderController__OnDestroy


## PathFinderController__OnDrawGizmos
UnityEngine_Gizmos__set_color → UnityEngine_Gizmos__DrawCube → UnityEngine_Gizmos__set_color → UnityEngine_Gizmos__DrawCube → UnityEngine_Gizmos__set_color → MR_System.Collections.Generic.List<Node>.GetEnumerator → MR_System.Collections.Generic.List<Node>.MoveNext → UnityEngine_Gizmos__DrawCube → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<Node>.Dispose

## PathFinderController__Start
MR_UnityEngine.Component.GetComponent<UnityEngine.CharacterController>

## PathFinderFactory__Awake
UnityEngine_Object__op_Equality → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## PathFinderFactory__OnDestroy


## PathFinderFactory__Start
MR_System.Collections.Generic.List<PathFinder>..ctor

## PathFinderFactory__Update
MR_System.Collections.Generic.List<PathFinder>.get_Item → MR_System.Collections.Generic.List<PathFinder>.RemoveAt → MR_System.Collections.Generic.List<PathFinder>.get_Item → MR_System.Collections.Generic.List<PathFinder>.RemoveAt → MR_System.Collections.Generic.List<PathFinder>.Add → MD_PathFinder.FindPath → System_Threading_Thread___ctor

## PetStatusWindow__Awake
TI_PetStatusWindow → UnityEngine_Object__op_Equality → TI_PetStatusWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## PetStatusWindow__BuildWindow
TI_PetStatusWindow.<BuildWindow>d__16 → Gear__UpdateWeaponType

## PetStatusWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/PartyWindow/PartyWindow'"

## PetStatusWindow__OnDestroy
MD_PetStatusWindow.Marca → TI_SparkPet → SparkPet__remove_Mudou → MD_PetStatusWindow.Marca → SparkPet__remove_Sumiu → MD_PetStatusWindow.Marca → TI_SparkParty → SparkParty__remove_Mudou → TI_PetStatusWindow → UnityEngine_Object__op_Equality → TI_PetStatusWindow

## PetStatusWindow__Update
PetStatusWindow__Redesenha → TI_PartyWindow → UnityEngine_Object__op_Inequality → TI_PartyWindow → TI_SparkParty → SparkParty__get_EmParty → UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_UIElements_VisualElement__get_layout → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit

## PetWindow__Abre
TI_SparkPet → SparkPet__get_EhPet → LIT_"'Servitor'" → LIT_"'Pet'" → System_Int32__ToString → System_String__Concat → LIT_"'Lv. '" → System_String__Format → LIT_"'{0}/{1}'" → TI_PetWindow → PetWindow__Enche → System_String__Format → LIT_"'{0}/{1}'" → PetWindow__Enche → TI_SparkPet → SparkPet__get_EhPet → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_PetWindow → PetWindow__Pct → PetWindow__Enche → TI_PetWindow → PetWindow__Pct → PetWindow__Enche → System_Int32__ToString → TI_PetWindow → PetWindow__Pct → PetWindow__Enche → LIT_"'L2Bar'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → System_Int32__ToString → System_String__Concat → LIT_"'weight-'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → System_Int32__ToString → System_String__Concat → LIT_"'weight-'" → UnityEngine_UIElements_VisualElement__AddToClassList → System_Int32__ToString → TI_PetWindow → System_Globalization_CultureInfo__get_InvariantCulture → System_Single__ToString → LIT_"'0.#'" → System_String__Concat → LIT_"'%'" → System_Int32__ToString → TI_SparkPet → SparkPet__Ordens → MR_System.Collections.Generic.List<int>.ToArray → TI_PetWindow → PetWindow__Botoes → SparkPet__Skills → PetWindow__Botoes → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → PetWindow__DesenhaItens

## PetWindow__AceitaSoltar
TI_SparkPet → SparkPet__get_EhPet

## PetWindow__Arrastavel
TI_PetWindow.<>c__DisplayClass53_0 → Gear__UpdateWeaponType → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_PetWindow.__c__DisplayClass53_0._Arrastavel_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent> → MD_PetWindow.__c__DisplayClass53_0._Arrastavel_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerMoveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent> → MD_PetWindow.__c__DisplayClass53_0._Arrastavel_b__2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## PetWindow__Awake
TI_PetWindow → UnityEngine_Object__op_Equality → TI_PetWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## PetWindow__BuildWindow
TI_PetWindow.<BuildWindow>d__46 → Gear__UpdateWeaponType

## PetWindow__Fecha


## PetWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## PetWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkRefinoWindow/SparkRefinoWindow'"

## PetWindow__Mostra
TI_SparkPet → SparkPet__get_EhPet → LIT_"'Servitor'" → LIT_"'Pet'" → System_Int32__ToString → System_String__Concat → LIT_"'Lv. '" → System_String__Format → LIT_"'{0}/{1}'" → TI_PetWindow → PetWindow__Enche → System_String__Format → LIT_"'{0}/{1}'" → PetWindow__Enche → TI_SparkPet → SparkPet__get_EhPet → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_PetWindow → PetWindow__Pct → PetWindow__Enche → TI_PetWindow → PetWindow__Pct → PetWindow__Enche → System_Int32__ToString → TI_PetWindow → PetWindow__Pct → PetWindow__Enche → LIT_"'L2Bar'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → System_Int32__ToString → System_String__Concat → LIT_"'weight-'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → System_Int32__ToString → System_String__Concat → LIT_"'weight-'" → UnityEngine_UIElements_VisualElement__AddToClassList → System_Int32__ToString → TI_PetWindow → System_Globalization_CultureInfo__get_InvariantCulture → System_Single__ToString → LIT_"'0.#'" → System_String__Concat → LIT_"'%'" → System_Int32__ToString → TI_SparkPet → SparkPet__Ordens → MR_System.Collections.Generic.List<int>.ToArray → TI_PetWindow → PetWindow__Botoes → SparkPet__Skills → PetWindow__Botoes → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → PetWindow__DesenhaItens

## PetWindow__OnDestroy
TI_PetWindow → UnityEngine_Object__op_Equality → TI_PetWindow → MD_PetWindow.Atualiza → TI_SparkPet → SparkPet__remove_Mudou → MD_PetWindow.Abre → SparkPet__remove_Mostra → MD_PetWindow.Fecha → SparkPet__remove_Sumiu → MD_PetWindow.DesenhaItens → TI_SparkPet → System_Delegate__Remove → TI_SparkPet

## PetWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## PetWindow__ToggleHideWindow
TI_SparkPet → SparkPet__get_EhPet → LIT_"'Servitor'" → LIT_"'Pet'" → System_Int32__ToString → System_String__Concat → LIT_"'Lv. '" → System_String__Format → LIT_"'{0}/{1}'" → TI_PetWindow → PetWindow__Enche → System_String__Format → LIT_"'{0}/{1}'" → PetWindow__Enche → TI_SparkPet → SparkPet__get_EhPet → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_PetWindow → PetWindow__Pct → PetWindow__Enche → TI_PetWindow → PetWindow__Pct → PetWindow__Enche → System_Int32__ToString → TI_PetWindow → PetWindow__Pct → PetWindow__Enche → LIT_"'L2Bar'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → System_Int32__ToString → System_String__Concat → LIT_"'weight-'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → System_Int32__ToString → System_String__Concat → LIT_"'weight-'" → UnityEngine_UIElements_VisualElement__AddToClassList → System_Int32__ToString → TI_PetWindow → System_Globalization_CultureInfo__get_InvariantCulture → System_Single__ToString → LIT_"'0.#'" → System_String__Concat → LIT_"'%'" → System_Int32__ToString → TI_SparkPet → SparkPet__Ordens → MR_System.Collections.Generic.List<int>.ToArray → TI_PetWindow → PetWindow__Botoes → SparkPet__Skills → PetWindow__Botoes → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → PetWindow__DesenhaItens → TI_SparkComandos → LIT_"'You do not have a pet or servitor out.'" → SMParam___ctor → TI_ChatWindow → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → ChatWindow__ReceiveSystemMessage

## PlayerInventory__Awake
UnityEngine_Object__op_Equality → UnityEngine_Object__op_Inequality → UnityEngine_Object__Destroy → MR_System.Collections.Generic.List<ItemInstance>..ctor

## PlayerInventory__OnDestroy


## PlayerInventory__Start
LIT_"'array'" → System_ArgumentNullException___ctor → MD_System.Array.Clear → LIT_"'length < 0'" → System_IndexOutOfRangeException___ctor → MD_System.Array.Clear → LIT_"'index < lower bound'" → System_IndexOutOfRangeException___ctor → MD_System.Array.Clear → System_Array__InternalArray__ICollection_get_Count → LIT_"'index + length > size'" → System_IndexOutOfRangeException___ctor → MD_System.Array.Clear

## PlayerInventory__UpdateInventory
TI_SparkSessao → SparkSessao__Antes → TI_InventoryWindow → UnityEngine_Object__op_Equality → PlayerInventory__GetItemByObjectId → TI_SparkSessao → SparkSessao__Depois → PlayerInventory__GetItemByObjectId → ItemInstance__TocaSomDeEquipar → TI_InventoryWindow → InventoryWindow__AtualizaItem → TI_InventoryWindow → PlayerInventory__GetItemByObjectId → ItemInstance__Update → PlayerInventory__GetItemByObjectId → PlayerInventory__ArrumaPosicoes → TI_InventoryWindow → InventoryWindow__UpdateItemList → TI_InventoryWindow → TI_SparkSessao → SparkSessao__Depois

## PlayerNameplate__HideGauge
LIT_"'gauge'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'gauge'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList

## PlayerNameplate__ShowGauge
LIT_"'gauge'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'gauge'" → UnityEngine_UIElements_VisualElement__AddToClassList

## PlayerNameplate__UpdateGauge
UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## PlayerNameplate___ctor
Nameplate___ctor → LIT_"'Gauge'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>

## PlayerShortcuts__AddShortcut
RequestShortcutRegPacket___ctor

## PlayerShortcuts__AtualizaTogglesDeSkill
MR_System.Collections.Generic.HashSet<int>.Clear → SkillgrpTable__get_Instance → SkillgrpTable__GetSkill → MR_System.Collections.Generic.HashSet<int>.Add → MR_System.Collections.Generic.Dictionary<int,Shortcut>.get_Values → MR_System.Linq.Enumerable.ToList<Shortcut> → MR_System.Collections.Generic.List<Shortcut>.GetEnumerator → MR_System.Collections.Generic.List<Shortcut>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<Shortcut>.Dispose → LIT_"'[SPARK] toggles: {0} efeitos, ligados [{1}], {2} botao(o..." → LIT_"','" → MR_System.String.Join<int> → System_String__Format → System_String__op_Inequality → UnityEngine_Debug__Log → MR_System.Collections.Generic.HashSet<int>.Contains → SkillgrpTable__get_Instance → SkillgrpTable__GetSkill → MR_System.Collections.Generic.HashSet<int>.Contains → SkillbarWindow__RemoveToggledSlot → SkillbarWindow__AddToggledSlot

## PlayerShortcuts__Awake
UnityEngine_Object__op_Equality → UnityEngine_Object__Destroy → MR_System.Collections.Generic.Dictionary<int,Shortcut>..ctor

## PlayerShortcuts__ComecaRepeticao
UnityEngine_Object__op_Inequality → PlayerSkill__GetSkillInfo → SkillgrpTable__get_Instance → SkillgrpTable__GetSkill

## PlayerShortcuts__DeleteShortcut
PlayerShortcuts__RemoveShotcutLocally → RequestShortcutDelPacket___ctor

## PlayerShortcuts__GetKeybindForShortcut
UnityEngine_InputSystem_InputAction__get_bindings → UnityEngine_InputSystem_InputActionRebindingExtensions__GetBindingDisplayString → System_Globalization_CultureInfo__get_CurrentCulture → LIT_"''"

## PlayerShortcuts__GetShortcutBySlot
MR_System.Collections.Generic.Dictionary<int,Shortcut>.TryGetValue

## PlayerShortcuts__IsItemToggled
MR_System.Collections.Generic.List<int>.Contains

## PlayerShortcuts__IsSkillToggled
MR_System.Collections.Generic.HashSet<int>.Contains → LIT_"\" → System_InvalidOperationException___ctor

## PlayerShortcuts__MoveShortcut
PlayerShortcuts__GetShortcutBySlot → PlayerShortcuts__RemoveShotcutLocally → GameClientPacketHandler__RequestRemoveShortcut → PlayerShortcuts__RemoveShotcutLocally → GameClientPacketHandler__RequestRemoveShortcut → System_String__Format → LIT_"'MoveShortcut. Old slot is null at {0}.'" → UnityEngine_Debug__LogError → GameClientPacketHandler__RequestAddShortcut

## PlayerShortcuts__OnDestroy


## PlayerShortcuts__OnSkillUsed
TI_SkillbarWindow → UnityEngine_Object__op_Equality → MR_System.Collections.Generic.Dictionary<int,Shortcut>.get_Values → MR_System.Linq.Enumerable.ToList<Shortcut> → MR_System.Collections.Generic.List<Shortcut>.GetEnumerator → MR_System.Collections.Generic.List<Shortcut>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<Shortcut>.Dispose → System_String__Format → LIT_"'Set shortcut on cooldown: Skill={0} Page={1} Slot={2}'" → UnityEngine_Debug__Log → SkillbarWindow__AddSkillOnCooldown

## PlayerShortcuts__RegisterShortcut
MR_System.Collections.Generic.Dictionary<int,Shortcut>..ctor → System_String__Format → LIT_"'Register shortcut {0} at {1}.'" → UnityEngine_Debug__Log → MR_System.Collections.Generic.Dictionary<int,Shortcut>.ContainsKey → PlayerShortcuts__RemoveShotcutLocally → MR_System.Collections.Generic.Dictionary<int,Shortcut>.set_Item → TI_SkillbarWindow → TI_SkillbarWindow.<>c__DisplayClass57_0 → Gear__UpdateWeaponType → System_String__Format → LIT_"'Slot value {0} is too high.'" → UnityEngine_Debug__LogError → MD_SkillbarWindow.__c__DisplayClass57_0._UpdateBarShortcut_b__0 → System_ThrowHelper__ThrowArgumentNullException → MR_System.Collections.Generic.List<AbstractSkillbar>.ForEach → System_ThrowHelper__ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion

## PlayerShortcuts__RemoveShotcutLocally
TI_SkillbarWindow → SkillbarWindow__RemoveShortcut → TI_SkillbarWindow → MR_System.Collections.Generic.Dictionary<int,Shortcut>.Remove

## PlayerShortcuts__RepeteAtalho
MR_System.Collections.Generic.Dictionary<int,Shortcut>.TryGetValue → UnityEngine_Object__op_Equality → PlayerSkill__GetSkillInfo → SkillInfo__get_IsSkillOnCooldown → Entity__get_Combat → PlayerSkill__UseSkill → UnityEngine_Object__op_Inequality → NewHumanoidAnimationController__get_PegandoItem → SparkItensNoChao__get_Instance → SparkItensNoChao__Tem → System_String__Format → LIT_"'Use shortcut {0}.'" → UnityEngine_Debug__Log → PlayerInventory__UseItem → PlayerSkill__UseSkill → PlayerActions__UseAction → TI_SparkMacros → SparkMacros__Executa → UnityEngine_Debug__LogWarning → LIT_"'Unkown shortcut type.'"

## PlayerShortcuts__Repete
UnityEngine_Object__op_Inequality → PlayerSkill__GetSkillInfo → SkillgrpTable__get_Instance → SkillgrpTable__GetSkill

## PlayerShortcuts__RequestToggleShortcutItem
RequestAutoSoulshotPacket___ctor

## PlayerShortcuts__SetShortcutList
MR_System.Collections.Generic.Dictionary<int,Shortcut>..ctor → MR_System.Collections.Generic.Dictionary<int,Shortcut>.Clear → MR_System.Collections.Generic.List<Shortcut>.get_Item → TI_SkillbarWindow → UnityEngine_Object__op_Equality → LIT_"'Skillbar window is not ready but already trying to updat..." → TI_SkillbarWindow → SkillbarWindow__UpdateAllShortcuts → TI_SkillbarWindow → LIT_"'routine is null'" → System_NullReferenceException___ctor → MD_UnityEngine.MonoBehaviour.StartCoroutine → UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException → LIT_"'obj'" → UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException → LIT_"'Coroutines can only be stopped on a MonoBehaviour'" → System_ArgumentException___ctor → MD_UnityEngine.MonoBehaviour.StartCoroutine → UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException → LIT_"'obj'"

## PlayerShortcuts__ToggleShortcutItem
MR_System.Collections.Generic.List<int>.Contains → MR_System.Collections.Generic.List<int>.Remove → MR_System.Collections.Generic.List<int>.Add → PlayerInventory__GetItemById → System_String__Format → LIT_"\" → UnityEngine_Debug__LogWarning → MR_System.Collections.Generic.Dictionary<int,Shortcut>.get_Values → MR_System.Linq.Enumerable.ToList<Shortcut> → MR_System.Collections.Generic.List<Shortcut>.GetEnumerator → MR_System.Collections.Generic.List<Shortcut>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<Shortcut>.Dispose → SkillbarWindow__AddToggledSlot → SkillbarWindow__RemoveToggledSlot

## PlayerShortcuts__UpdatePageMapping


## PlayerShortcuts__Update
UnityEngine_Object__op_Equality → System_Array__InternalArray__ICollection_get_Count → MR_System.Collections.Generic.Dictionary<int,Shortcut>.get_Values → MR_System.Collections.Generic.Dictionary<int,Shortcut>.GetEnumerator → MR_System.Collections.Generic.Dictionary<int,Shortcut>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<int,Shortcut>.Dispose → PlayerShortcuts__RepeteAtalho → PlayerShortcuts__UseShortcut → PlayerShortcuts__ComecaRepeticao

## PlayerShortcuts__UseShortcut
System_String__Format → LIT_"'Use shortcut {0}.'" → UnityEngine_Debug__Log → Gear__UpdateWeaponType → PlayerInventory__GetItemByObjectId → System_String__ToLowerInvariant → LIT_"'recipe'" → TI_L2ConfirmWindow → UnityEngine_Object__op_Inequality → SparkUI__NomeDoItem → System_String__Concat → LIT_"'Register '" → LIT_"' in your recipe book?'" → MD_PlayerInventory.__c__DisplayClass34_0._UseItem_b__0 → MD_PlayerInventory.__c._UseItem_b__34_1 → L2ConfirmWindow__ShowWindow → GameClientPacketHandler__UseItem → MR_System.Collections.Generic.Dictionary<int,SkillInfo>.TryGetValue → UnityEngine_Debug__LogWarning → LIT_"'Skill not found.'" → SkillgrpTable__get_Instance → LIT_"'Unkown shortcut type.'" → TI_SparkMacros → TI_SparkMacros.<>c__DisplayClass18_0 → Gear__UpdateWeaponType → TI_SparkMacros → TI_System.Predicate<SparkMacros.Macro> → MD_SparkMacros.__c__DisplayClass18_0._Busca_b__0 → MR_System.Collections.Generic.List<SparkMacros.Macro>.Find → TI_SparkMacros → UnityEngine_Object__op_Equality → UnityEngine_GameObject___ctor → LIT_"'SparkMacros'" → UnityEngine_Object__DontDestroyOnLoad → MR_UnityEngine.GameObject.AddComponent<SparkMacros.MacroRunner> → TI_SparkMacros → UnityEngine_MonoBehaviour__StopCoroutine → TI_SparkMacros.MacroRunner.<Executa>d__2 → Gear__UpdateWeaponType → UnityEngine_MonoBehaviour__StartCoroutine → MR_System.Collections.Generic.Dictionary<ActionType,L2Action>.TryGetValue,unaff_RDI → GameClientPacketHandler__RequestActionUse

## PlayerShortcuts__VerifySkillbarInputs
UnityEngine_Object__op_Equality → System_Array__InternalArray__ICollection_get_Count → MR_System.Collections.Generic.Dictionary<int,Shortcut>.get_Values → MR_System.Collections.Generic.Dictionary<int,Shortcut>.GetEnumerator → MR_System.Collections.Generic.Dictionary<int,Shortcut>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<int,Shortcut>.Dispose → PlayerShortcuts__RepeteAtalho → PlayerShortcuts__UseShortcut → PlayerShortcuts__ComecaRepeticao

## PlayerShortcuts___ctor
MR_System.Collections.Generic.HashSet<int>..ctor

## PlayerStatus__UpdateStatus


## PrivateShopWindow__AbreMensagem
TI_SparkLoja → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## PrivateShopWindow__Awake
TI_PrivateShopWindow → UnityEngine_Object__op_Equality → TI_PrivateShopWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## PrivateShopWindow__Botao
TI_PrivateShopWindow.<>c__DisplayClass46_0 → Gear__UpdateWeaponType → TI_SparkArte → LIT_"'Data/UI/_Elements/Components/L2Button/L2Button'" → MR_SparkArte.Load<UnityEngine.UIElements.VisualTreeAsset> → UnityEngine_UIElements_VisualTreeAsset__Instantiate → LIT_"'L2Button'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button> → UnityEngine_UIElements_VisualElement__RemoveFromHierarchy → LIT_"'ButtonLabel'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'trade-botao'" → PrivateShopWindow__Posiciona → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → MD_PrivateShopWindow.__c__DisplayClass46_0._Botao_b__0 → UnityEngine_UIElements_Button__add_clicked

## PrivateShopWindow__BuildWindow
TI_PrivateShopWindow.<BuildWindow>d__27 → Gear__UpdateWeaponType

## PrivateShopWindow__FechaMensagem
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_Object__op_Inequality

## PrivateShopWindow__HideWindow
TI_SparkLoja → SparkLoja__Fecha → PrivateShopWindow__FechaMensagem → L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## PrivateShopWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/PrivateShopWindow/PrivateShopWindow'"

## PrivateShopWindow__OnDestroy
MD_PrivateShopWindow.Marca → TI_SparkLoja → SparkLoja__remove_Mudou → TI_PrivateShopWindow → UnityEngine_Object__op_Equality → TI_PrivateShopWindow

## PrivateShopWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## PrivateShopWindow__Update
TI_SparkLoja → LIT_"'({0})'" → LIT_"')'" → PrivateShopWindow__Texto → LIT_"'Private Store'" → TI_SparkLoja → SparkLoja__get_MinhaLoja → LIT_"''" → TI_SparkLoja → System_String__Concat → LIT_"' - '" → TI_SparkLoja → LIT_"' ('" → TI_SparkLoja → LIT_"'Sell'" → LIT_"'Package Sale'" → PrivateShopWindow__Texto → LIT_"')'" → System_String__Concat → LIT_"'Store Items'" → PrivateShopWindow__Texto → LIT_"'Purchase List'" → LIT_"' ('" → PrivateShopWindow__Texto → LIT_"'Buy'" → LIT_"')'" → System_String__Concat → LIT_"'Wanted Items'" → PrivateShopWindow__Texto → LIT_"'Buy'" → System_String__Concat → LIT_"' ('" → LIT_"')'" → LIT_"'Inventory'" → TI_SparkLoja → LIT_"' ('" → LIT_"'Sell'" → LIT_"'Package Sale'" → PrivateShopWindow__Texto → System_String__Concat → LIT_"')'" → PrivateShopWindow__Texto → LIT_"'Inventory'" → LIT_"'Sale List'" → TI_SparkLoja → SparkLoja__get_MinhaLoja → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → LIT_"'ButtonLabel'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → LIT_"'Start'" → PrivateShopWindow__Texto → LIT_"'OK'" → TI_SparkLoja → TradeSlotContainer__Mostra → TI_SparkLoja → TradeSlotContainer__Mostra → TI_SparkLoja → System_String__Format → LIT_"'({0})'" → TI_SparkLoja → System_String__Format → LIT_"'{0:n0}'" → SparkLoja__Total → System_String__Format → LIT_"'{0:n0}'" → TI_SparkLoja → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → PrivateShopWindow__AtualizaPeso → UnityEngine_Object__op_Equality → TI_SparkLoja → SparkLoja__PesoDaTroca → System_Int32__ToString → System_String__Concat → LIT_"'weight-'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → System_Int32__ToString → System_String__Concat → LIT_"'weight-'" → UnityEngine_UIElements_VisualElement__AddToClassList → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → System_String__Format → LIT_"'{0:0.00}%'"

## ProductSlot__AddTooltip
InventorySlot__AddTooltip → TI_SparkDicaItem → SparkDicaItem__MontaSimples → TI_SparkDicaItem → SparkDicaItem__Monta → System_String__Format → LIT_"'\\n<color=#A3A08A>Price:</color> {0:n0} Adena'" → System_String__Concat → IconTable__get_Instance → IconTable__GetIcon → AllianceMessage___ctor

## ProductSlot__AssignProduct


## ProductSlot__HandleLeftDoubleClick


## ProductSlot__SwapBasket
SMParam___ctor → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → TI_L2InputAmountWindow → MD_ProductSlot._SwapBasket_b__12_0 → TI_ProductSlot.<>c → MD_ProductSlot.__c._SwapBasket_b__12_1 → TI_ProductSlot.<>c → L2InputAmountWindow__ShowWindow → TI_ShopSlotContainer → ShopSlotContainer__AddToBasket

## RestartLocationWindow__Awake
TI_RestartLocationWindow → UnityEngine_Object__op_Equality → TI_RestartLocationWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## RestartLocationWindow__BuildWindow
TI_RestartLocationWindow.<BuildWindow>d__11 → Gear__UpdateWeaponType

## RestartLocationWindow__ButtonClicked
System_String__Format → LIT_"'Restart point clicked: {0}.'" → UnityEngine_Debug__Log → GameClientPacketHandler__SendRequestRestartPoint

## RestartLocationWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/RestartLocationWindow/RestartLoca..."

## RestartLocationWindow__OnDestroy
TI_RestartLocationWindow

## RestartLocationWindow__ShowWindowWithParams
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## RestartingState__Enter
MusicManager__Clear → GameManager__StartLoading → SceneLoader__EsqueceRegiao → MD_SceneLoader._LoadMenu_b__14_0 → UnityEngine_SceneManagement_SceneManager__GetActiveScene → System_String__op_Inequality → System_String__Concat → LIT_"'Skipping scene switch '" → UnityEngine_Debug__Log → SparkMapaWindow_Loja___ctor → System_String__Concat → LIT_"'Switching to scene '" → UnityEngine_Debug__Log → TI_SparkArte → SparkArte__GaranteCena → UnityEngine_SceneManagement_SceneManager__LoadSceneAsync → MD_SceneLoader.__c._SwitchScene_b__16_0 → UnityEngine_AsyncOperation__add_completed

## RestartingState__HandleEvent
L2LoginUI__ShowLoginWindow → GameManager__ChangeState → TI_GameEvent → System_Enum__ToString → System_String__Concat → LIT_"'[GameStateMachine][EVENT] '" → UnityEngine_Debug__Log → TI_GameEvent,aiStack_18 → System_String__Format → LIT_"'[GameStateMachine] Unhandled event {0} for state {1}'" → UnityEngine_Debug__LogWarning → GameManager__StopLoading → System_Enum__ToString → System_String__Concat → LIT_"'[GameStateMachine][STATE] '" → UnityEngine_Debug__Log → GameManager__InitializeState

## ServerSelectWindow__Awake
TI_ServerSelectWindow → UnityEngine_Object__op_Equality → TI_ServerSelectWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## ServerSelectWindow__BuildWindow
TI_ServerSelectWindow.<BuildWindow>d__12 → Gear__UpdateWeaponType

## ServerSelectWindow__CancelButtonPressed
UnityEngine_Debug__Log → LIT_"'Disconnect'" → System_Threading_CancellationTokenSource__Cancel → ServerPacketHandler__CancelTokens → System_Net_Sockets_Socket__Shutdown → System_Net_Sockets_Socket__Close → System_Threading_CancellationTokenSource__Cancel → AsynchronousClient__ClientCleanup → UnityEngine_Debug__Log → LIT_"'Disconnect'" → TI_EventProcessor → UnityEngine_Object__op_Inequality → TI_EventProcessor → MD_AsynchronousClient._Disconnect_b__23_0 → EventProcessor__QueueEvent

## ServerSelectWindow__ConfirmButtonPressed
RequestServerLoginPacket___ctor

## ServerSelectWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Login/ServerListWindow/ServerListWindow'"

## ServerSelectWindow__OnDestroy
TI_ServerSelectWindow

## ServerSelectWindow__SelectServer
MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'selected'" → MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'selected'" → MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item → System_Int32__ToString → System_String__Concat → LIT_"'Server selected: '" → UnityEngine_Debug__Log → MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item → System_Text_StringBuilder___ctor → System_Text_StringBuilder__Append → LIT_"'.'" → MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item → ServerSelectWindow__ConfirmButtonPressed

## ServerSelectWindow__UpdateServerList
ServerSelectWindow__ResetWindow → ServerSelectWindow__AddServerRow → LIT_"''" → ServerSelectWindow__SelectServer → MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item → MR_System.Collections.Generic.Dictionary<int,int>.TryGetValue → MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item → ServerNameDAO__GetServer → MR_System.Collections.Generic.List<ServerListPacket.ServerData>.get_Item → LIT_"'Unknown'" → LIT_"'Light'" → LIT_"'Normal'" → LIT_"'Heavy'" → LIT_"'Full'" → LIT_"'Down'" → LIT_"'GM Only'" → ServerSelectWindow__AddServerRow → ServerSelectWindow__SelectServer

## ServerSelectWindow__Update
UnityEngine_Input__GetKeyDown → AudioManager__PlayUISound → LIT_"'click_01'" → RequestServerLoginPacket___ctor → AudioManager__PlayUISound → LIT_"'click_01'" → UnityEngine_Debug__Log → LIT_"'Disconnect'" → System_Threading_CancellationTokenSource__Cancel → ServerPacketHandler__CancelTokens → System_Net_Sockets_Socket__Shutdown → System_Net_Sockets_Socket__Close → System_Threading_CancellationTokenSource__Cancel → AsynchronousClient__ClientCleanup → UnityEngine_Debug__Log → LIT_"'Disconnect'" → TI_EventProcessor → UnityEngine_Object__op_Inequality → TI_EventProcessor → MD_AsynchronousClient._Disconnect_b__23_0 → EventProcessor__QueueEvent

## SevenSignsWindow__Awake
TI_SevenSignsWindow → UnityEngine_Object__op_Equality → TI_SevenSignsWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SevenSignsWindow__BuildWindow
TI_SevenSignsWindow.<BuildWindow>d__17 → AbstractEffectWindow__UpdateBuffTimers_d__24___ctor

## SevenSignsWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## SevenSignsWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkRefinoWindow/SparkRefinoWindow'"

## SevenSignsWindow__OnDestroy
TI_SevenSignsWindow → UnityEngine_Object__op_Equality → TI_SevenSignsWindow → MD_SevenSignsWindow.Chegou → TI_SparkSeteSelos → System_Delegate__Remove → TI_SparkSeteSelos

## SevenSignsWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## SevenSignsWindow__ToggleHideWindow
TI_SparkSeteSelos → TI_SparkPacoteLivre → SparkPacoteLivre__C → SparkPacoteLivre__Fim

## ShopSlotContainer__AddOrUpdateProduct
LIT_"'['" → TI_L2Slot.SlotType → System_Enum__ToString → LIT_"'] Add or update product: '" → System_Int32__ToString → LIT_"' Qty: '" → System_Int32__ToString → System_String__Concat → UnityEngine_Debug__LogWarning → MR_System.Collections.Generic.List<Product>.get_Item → ShopSlotContainer__RemoveProduct → MR_System.Collections.Generic.List<Product>.get_Item → Product___ctor → MR_System.Collections.Generic.List<Product>.Add

## ShopTab__OnTabHeaderClicked
L2Tab__OnTabHeaderClicked → TI_ShopWindow → LIT_"'Sell'" → LIT_"'Buy'"

## ShopTab__Submit
LIT_"'{0} {1:n0} item(s) for {2:n0} Adena?'" → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<ShopSlotContainer>.get_Item → MR_System.Collections.Generic.List<Product>..ctor → TI_L2ConfirmWindow → UnityEngine_Object__op_Equality → MR_System.Collections.Generic.List<Product>.GetEnumerator → MR_System.Collections.Generic.List<Product>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<Product>.Dispose → LIT_"'{0} {1:n0} item(s) for {2:n0} Adena?'" → LIT_"'Buy'" → LIT_"'Sell'" → MR_System.Collections.Generic.List<ShopSlotContainer>.get_Item → System_String__Format → TI_L2ConfirmWindow → MD_ShopTab.__c__DisplayClass28_0._Submit_b__0 → MD_ShopTab.__c._Submit_b__28_1 → L2ConfirmWindow__ShowWindow

## ShopTab__UpdateProductList
MR_System.Collections.Generic.List<ShopSlotContainer>.get_Item → MR_System.Collections.Generic.List<Product>..ctor → MR_System.Linq.Enumerable.ToList<Product> → ShopSlotContainer__RefreshProducts → MR_System.Collections.Generic.List<ShopSlotContainer>.get_Item → MR_System.Collections.Generic.List<Product>..ctor → ShopSlotContainer__RefreshProducts → System_String__Format → LIT_"'{0:n0}'" → ShopTab__RefreshWeight → System_String__Format → LIT_"'{0:n0}'"

## ShopWindow__Awake
TI_ShopWindow → UnityEngine_Object__op_Equality → TI_ShopWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## ShopWindow__BuildWindow
TI_ShopWindow.<BuildWindow>d__17 → Gear__UpdateWeaponType

## ShopWindow__ConfirmPressed
LIT_"'{0} {1:n0} item(s) for {2:n0} Adena?'" → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<ShopSlotContainer>.get_Item → MR_System.Collections.Generic.List<Product>..ctor → TI_L2ConfirmWindow → UnityEngine_Object__op_Equality → MR_System.Collections.Generic.List<Product>.GetEnumerator → MR_System.Collections.Generic.List<Product>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<Product>.Dispose → LIT_"'{0} {1:n0} item(s) for {2:n0} Adena?'" → LIT_"'Buy'" → LIT_"'Sell'" → MR_System.Collections.Generic.List<ShopSlotContainer>.get_Item → System_String__Format → TI_L2ConfirmWindow → MD_ShopTab.__c__DisplayClass28_0._Submit_b__0 → MD_ShopTab.__c._Submit_b__28_1 → L2ConfirmWindow__ShowWindow

## ShopWindow__HideWindow
L2PopupWindow__HideWindow → ShopTab__Limpa → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## ShopWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/ShopWindow/ShopWindow'"

## ShopWindow__OnDestroy
TI_ShopWindow

## ShopWindow__ShowWindow
L2PopupWindow__ShowWindow → TI_InventoryWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## ShopWindow__ToggleHideWindow
TI_InventoryWindow → UnityEngine_Object__op_Equality → GameClientPacketHandler__SendRequestOpenInventory

## SiegeWindow__Awake
TI_SiegeWindow → UnityEngine_Object__op_Equality → TI_SiegeWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SiegeWindow__BuildWindow
TI_SiegeWindow.<BuildWindow>d__18 → Gear__UpdateWeaponType

## SiegeWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## SiegeWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkRefinoWindow/SparkRefinoWindow'"

## SiegeWindow__MostraLista
TI_SparkSiege → UnityEngine_UIElements_VisualElement__Clear → LIT_"'No attacking clans registered.'" → LIT_"'No defending clans registered.'" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MR_System.Collections.Generic.List<SparkSiege.Cla>.GetEnumerator → MR_System.Collections.Generic.List<SparkSiege.Cla>.MoveNext → TI_SiegeWindow.<>c__DisplayClass22_0 → Gear__UpdateWeaponType → TI_SparkEstilo → SparkEstilo__Linha → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → LIT_"''" → LIT_"'  <color=#E8D4A0>[Owner]</color>'" → LIT_"'  <color=#7FE0C8>[Approved]</color>'" → LIT_"'  <color=#FF9A80>[Waiting approval]</color>'" → System_String__Concat → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → LIT_"''" → System_String__Concat → LIT_"'    Alliance: '" → System_String__Concat → LIT_"'Leader: '" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → TI_SparkSiege → MD_SiegeWindow.__c__DisplayClass22_0._MostraLista_b__0 → TI_SparkEstilo → SparkEstilo__Botao → LIT_"'Approve'" → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MD_SiegeWindow.__c__DisplayClass22_0._MostraLista_b__1 → SparkEstilo__Botao → LIT_"'Refuse'" → UnityEngine_UIElements_VisualElement__Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkSiege.Cla>.Dispose

## SiegeWindow__OnDestroy
TI_SiegeWindow → UnityEngine_Object__op_Equality → TI_SiegeWindow → MD_SiegeWindow.Abriu → TI_SparkSiege → SparkSiege__remove_Abriu → MD_SiegeWindow.MostraLista → SparkSiege__remove_MudouAtacantes → MD_SiegeWindow.MostraLista → TI_SparkSiege → System_Delegate__Remove → TI_SparkSiege

## SiegeWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## SkillLearnWindow__Awake
TI_SkillLearnWindow → UnityEngine_Object__op_Equality → TI_SkillLearnWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SkillLearnWindow__BuildWindow
TI_SkillLearnWindow.<BuildWindow>d__31 → Gear__UpdateWeaponType

## SkillLearnWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → System_ThrowHelper__ThrowArgumentOutOfRange_IndexException → System_Array__Copy

## SkillLearnWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SkillLearnWindow/SkillLearnWindow'"

## SkillLearnWindow__OnDestroy
TI_SkillLearnWindow

## SkillLearnWindow__OnItemSelected
AudioManager__PlayUISound → LIT_"'click_01'" → MR_L2ScrollableList<SkillWindowInfo>.SelectItem → GameClientPacketHandler__SendRequestAcquireSkillInfo → UnityEngine_UIElements_VisualElement__get_style → IconTable__get_Instance → IconTable__LoadTextureByName → UnityEngine_UIElements_StyleBackground__op_Implicit → System_Int32__ToString → SkillWindowInfo__ComposeDescription → System_Int32__ToString → LIT_"'n0'" → UnityEngine_UIElements_VisualElement__get_style → System_Int32__ToString → LIT_"'n0'" → LIT_"'SkillLearnConditions'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → UnityEngine_UIElements_VisualElement__Clear → SkillWindowInfo__GetSkillType → UnityEngine_UIElements_VisualElement__get_style → System_Int32__ToString → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → System_Int32__ToString → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → SkillLearnWindow__ToggleShowSkillDetail

## SkillLearnWindow__ShowSkillDetail
LIT_"'{0} x{1}  (you have {2})'" → System_Int32__ToString → LIT_"'n0'" → UnityEngine_UIElements_VisualElement__get_style → LIT_"'SkillLearnConditions'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → UnityEngine_UIElements_VisualElement__Clear → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → LIT_"'SkillRequirementIcon'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → UnityEngine_UIElements_VisualElement__get_style → IconTable__get_Instance → IconTable__GetIcon → UnityEngine_UIElements_StyleBackground___ctor → UnityEngine_Object__op_Inequality → PlayerInventory__GetItemById → LIT_"'SkillRequirementName'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → SparkUI__NomeDoItem → System_String__Format → LIT_"'{0} x{1}  (you have {2})'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__Add

## SkillLearnWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## SkillLearnWindow__ToggleShowSkillDetail
AudioManager__PlayUISound → LIT_"'window_open'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.get_value → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## SkillSlot__AddTooltip


## SkillSlot__AssignSkill
TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_SlotAnimationManipulator → SlotAnimationManipulator___ctor → IconTable__get_Instance → IconTable__LoadTextureByName → UnityEngine_UIElements_StyleBackground___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'empty'" → PlayerSkill__GetSkillInfo

## SkillSlot__AtualizaDica


## SkillSlot__ClearManipulators
L2DraggableSlot__ClearManipulators → UnityEngine_UIElements_VisualElementExtensions__RemoveManipulator

## SkillSlot__HandleLeftClick
System_String__Format → LIT_"'Use bar slot {0}.'" → UnityEngine_Debug__Log → PlayerSkill__UseSkill

## SkillSlot___ctor
L2DraggableSlot___ctor

## SkillTab__HandleSlotClick
LIT_"'click_01'" → System_String__Concat → LIT_"'event:/InterfaceSound/'" → FMODUnity_RuntimeManager__PathToEventReference → SparkSons__get_Instance → SparkSons__TocaInterface → UnityEngine_Debug__LogWarning → LIT_"'Trying to play a null EventReference sound.'" → FMODUnity_RuntimeManager__PlayOneShot

## SkillTab__ShowActiveSkills
TI_System.Collections.Generic.List<SkillWindowInfo> → MR_System.Collections.Generic.List<SkillWindowInfo>..ctor → TI_System.Collections.Generic.List<SkillWindowInfo> → MR_System.Collections.Generic.List<SkillWindowInfo>..ctor → TI_System.Collections.Generic.List<SkillWindowInfo> → MR_System.Collections.Generic.List<SkillWindowInfo>..ctor → TI_System.Collections.Generic.List<SkillWindowInfo> → MR_System.Collections.Generic.List<SkillWindowInfo>..ctor → TI_System.Collections.Generic.List<SkillWindowInfo> → MR_System.Collections.Generic.List<SkillWindowInfo>..ctor → TI_System.Collections.Generic.List<SkillWindowInfo> → MR_System.Collections.Generic.List<SkillWindowInfo>..ctor → TI_System.Collections.Generic.List<SkillWindowInfo> → MR_System.Collections.Generic.List<SkillWindowInfo>..ctor → TI_System.Collections.Generic.List<SkillWindowInfo> → MR_System.Collections.Generic.List<SkillWindowInfo>..ctor → MR_System.Linq.Enumerable.Any<SkillWindowInfo> → SysStringTable__get_Instance → SysStringTable__GetSysString → SkillTab__AddSection → UnityEngine_UIElements_VisualElement__Add → MR_System.Linq.Enumerable.Any<SkillWindowInfo> → SysStringTable__get_Instance → SysStringTable__GetSysString → SkillTab__AddSection → UnityEngine_UIElements_VisualElement__Add → MR_System.Linq.Enumerable.Any<SkillWindowInfo> → SysStringTable__get_Instance → SysStringTable__GetSysString → SkillTab__AddSection → UnityEngine_UIElements_VisualElement__Add → MR_System.Linq.Enumerable.Any<SkillWindowInfo> → SysStringTable__get_Instance → SysStringTable__GetSysString → SkillTab__AddSection → UnityEngine_UIElements_VisualElement__Add → MR_System.Linq.Enumerable.Any<SkillWindowInfo> → SysStringTable__get_Instance → SysStringTable__GetSysString → SkillTab__AddSection → UnityEngine_UIElements_VisualElement__Add → MR_System.Linq.Enumerable.Any<SkillWindowInfo> → SysStringTable__get_Instance → SysStringTable__GetSysString → SkillTab__AddSection → UnityEngine_UIElements_VisualElement__Add → MR_System.Linq.Enumerable.Any<SkillWindowInfo> → SysStringTable__get_Instance → SysStringTable__GetSysString → SkillTab__AddSection → UnityEngine_UIElements_VisualElement__Add → MR_System.Linq.Enumerable.Any<SkillWindowInfo> → SysStringTable__get_Instance → SysStringTable__GetSysString → SkillTab__AddSection → UnityEngine_UIElements_VisualElement__Add

## SkillTab__ShowPassiveSkills
TI_System.Collections.Generic.List<SkillWindowInfo> → MR_System.Collections.Generic.List<SkillWindowInfo>..ctor → TI_System.Collections.Generic.List<SkillWindowInfo> → MR_System.Collections.Generic.List<SkillWindowInfo>..ctor → TI_System.Collections.Generic.List<SkillWindowInfo> → MR_System.Collections.Generic.List<SkillWindowInfo>..ctor → TI_System.Collections.Generic.List<SkillWindowInfo> → MR_System.Collections.Generic.List<SkillWindowInfo>..ctor → TI_System.Collections.Generic.List<SkillWindowInfo> → MR_System.Collections.Generic.List<SkillWindowInfo>..ctor → MR_System.Linq.Enumerable.Any<SkillWindowInfo> → SysStringTable__get_Instance → SysStringTable__GetSysString → SkillTab__AddSection → UnityEngine_UIElements_VisualElement__Add → MR_System.Linq.Enumerable.Any<SkillWindowInfo> → SysStringTable__get_Instance → SysStringTable__GetSysString → SkillTab__AddSection → UnityEngine_UIElements_VisualElement__Add → MR_System.Linq.Enumerable.Any<SkillWindowInfo> → SysStringTable__get_Instance → SysStringTable__GetSysString → SkillTab__AddSection → UnityEngine_UIElements_VisualElement__Add → MR_System.Linq.Enumerable.Any<SkillWindowInfo> → SysStringTable__get_Instance → SysStringTable__GetSysString → SkillTab__AddSection → UnityEngine_UIElements_VisualElement__Add → MR_System.Linq.Enumerable.Any<SkillWindowInfo> → SysStringTable__get_Instance → SysStringTable__GetSysString → SkillTab__AddSection → UnityEngine_UIElements_VisualElement__Add

## SkillTab__ToggleShrink
UnityEngine_UIElements_VisualElement__Children → MR_System.Linq.Enumerable.ElementAt<UnityEngine.UIElements.VisualElement> → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'max'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'max'" → LIT_"'shrink'" → MR_System.Collections.Generic.List<string>.Remove → MR_UnityEngine.UIElements.ObjectListPool<string>.Release → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'shrink'" → MR_UnityEngine.UIElements.ObjectListPool<string>.Get → MR_System.Collections.Generic.List<string>.Contains → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → MR_System.Collections.Generic.List<string>.set_Capacity → MR_System.Collections.Generic.List<string>.Add

## SkillTab__UpdateSkills
UnityEngine_UIElements_VisualElement__Clear → SkillTab__ShowActiveSkills → TI_System.Collections.Generic.List<SkillWindowInfo> → MR_System.Collections.Generic.List<SkillWindowInfo>..ctor → TI_System.Collections.Generic.List<SkillWindowInfo> → MR_System.Collections.Generic.List<SkillWindowInfo>..ctor → TI_System.Collections.Generic.List<SkillWindowInfo> → MR_System.Collections.Generic.List<SkillWindowInfo>..ctor → TI_System.Collections.Generic.List<SkillWindowInfo> → MR_System.Collections.Generic.List<SkillWindowInfo>..ctor → TI_System.Collections.Generic.List<SkillWindowInfo> → MR_System.Collections.Generic.List<SkillWindowInfo>..ctor → MR_System.Linq.Enumerable.Any<SkillWindowInfo> → SysStringTable__get_Instance → SysStringTable__GetSysString → SkillTab__AddSection → UnityEngine_UIElements_VisualElement__Add → MR_System.Linq.Enumerable.Any<SkillWindowInfo> → SysStringTable__get_Instance → SysStringTable__GetSysString → SkillTab__AddSection → UnityEngine_UIElements_VisualElement__Add → MR_System.Linq.Enumerable.Any<SkillWindowInfo> → SysStringTable__get_Instance → SysStringTable__GetSysString → SkillTab__AddSection → UnityEngine_UIElements_VisualElement__Add → MR_System.Linq.Enumerable.Any<SkillWindowInfo> → SysStringTable__get_Instance → SysStringTable__GetSysString → SkillTab__AddSection → UnityEngine_UIElements_VisualElement__Add → MR_System.Linq.Enumerable.Any<SkillWindowInfo> → SysStringTable__get_Instance → SysStringTable__GetSysString → SkillTab__AddSection → UnityEngine_UIElements_VisualElement__Add

## SkillTable__FillDataToLoad
MR_System.Collections.Generic.List<int>..ctor → MR_System.Collections.Generic.List<int>.Add

## SkillTable__ShouldLoadSkill
MR_System.Collections.Generic.List<int>.Contains

## SkillWindow__Awake
TI_SkillWindow → UnityEngine_Object__op_Equality → TI_SkillWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SkillWindow__BuildWindow
TI_SkillWindow.<BuildWindow>d__19 → Gear__UpdateWeaponType

## SkillWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## SkillWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SkillWindow/SkillWindow'"

## SkillWindow__OnDestroy
UnityEngine_MonoBehaviour__StopCoroutine → TI_SkillWindow

## SkillWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## SkillWindow__ToggleHideWindow
PlayerSkill__GetSkillsForWindow → SkillWindow__SetSkills

## SkillbarImageTable__Initialize
MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>..ctor → System_String__Format → LIT_"'{0}\\\\Effects\\\\Cooltime\\\\cooltime{1}'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_Object__op_Inequality → System_String__Format → LIT_"'Missing cooltime icon: {0}.'" → UnityEngine_Debug__LogWarning → System_String__Format → LIT_"'{0}\\\\Effects\\\\Toggle\\\\ToggleEffect{1:D3}'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_Object__op_Inequality → System_String__Format → LIT_"'Missing toggle icon: {0}.'" → UnityEngine_Debug__LogWarning → System_String__Format → LIT_"'{0}\\\\Effects\\\\CooltimeEnd\\\\CoolTimeEnd{1:D3}'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_Object__op_Inequality → System_String__Format → LIT_"'Missing cooltimeEnd icon: {0}.'" → UnityEngine_Debug__LogWarning

## SkillbarImageTable__LoadCooltimeEndTextures
System_String__Format → LIT_"'{0}\\\\Effects\\\\CooltimeEnd\\\\CoolTimeEnd{1:D3}'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_Object__op_Inequality → System_String__Format → LIT_"'Missing cooltimeEnd icon: {0}.'" → UnityEngine_Debug__LogWarning

## SkillbarImageTable__LoadCooltimeTextures
System_String__Format → LIT_"'{0}\\\\Effects\\\\Cooltime\\\\cooltime{1}'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_Object__op_Inequality → System_String__Format → LIT_"'Missing cooltime icon: {0}.'" → UnityEngine_Debug__LogWarning

## SkillbarImageTable__LoadTextureByKey
MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.TryGetValue → System_String__Concat → LIT_"'\\\\Shortcuts\\\\ShortcutWnd_DF_Key_'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_Object__op_Inequality → System_String__Concat → LIT_"'Missing skillbar icon: '" → UnityEngine_Debug__LogWarning → MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.Add

## SkillbarImageTable__LoadToggleTextures
System_String__Format → LIT_"'{0}\\\\Effects\\\\Toggle\\\\ToggleEffect{1:D3}'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_Object__op_Inequality → System_String__Format → LIT_"'Missing toggle icon: {0}.'" → UnityEngine_Debug__LogWarning

## SkillbarImageTable___ctor
LIT_"'Data\\\\UI\\\\Assets\\\\SkillBar'" → MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>..ctor

## SkillbarMain__HandleLockClick
TI_SkillbarWindow → MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item → TI_SkillbarWindow → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'locked'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'locked'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'locked'" → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'locked'"

## SkillbarMain__HandleRotateClick
TI_SkillbarWindow → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → SkillbarWindow__AplicaEscala

## SkillbarMain__HandleTooltipClick
TI_SkillbarWindow → MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item → TI_SkillbarWindow → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'min'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'min'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'min'" → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'min'"

## SkillbarMain__ToggleDisableTooltip
TI_SkillbarWindow → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'min'" → MR_System.Collections.Generic.List<string>.Remove → MR_UnityEngine.UIElements.ObjectListPool<string>.Release → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'min'" → MR_UnityEngine.UIElements.ObjectListPool<string>.Get → MR_System.Collections.Generic.List<string>.Contains → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → MR_System.Collections.Generic.List<string>.set_Capacity → MR_System.Collections.Generic.List<string>.Add

## SkillbarMain__ToggleLockSkillBar
TI_SkillbarWindow → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'locked'" → MR_System.Collections.Generic.List<string>.Remove → MR_UnityEngine.UIElements.ObjectListPool<string>.Release → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'locked'" → MR_UnityEngine.UIElements.ObjectListPool<string>.Get → MR_System.Collections.Generic.List<string>.Contains → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → Animancer_AnimancerEvent_Sequence__get_Capacity → MR_System.Collections.Generic.List<string>.get_Capacity → MR_System.Collections.Generic.List<string>.set_Capacity → MR_System.Collections.Generic.List<string>.Add

## SkillbarMain__UpdateExpandInput
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## SkillbarMain__UpdateVisuals
LIT_"'ExpandBtn'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button> → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent> → MD_SkillbarMain.__c._UpdateVisuals_b__6_0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent> → LIT_"'MinimizeBtn'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button> → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent> → MD_SkillbarMain.__c._UpdateVisuals_b__6_1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent> → LIT_"'RotateBtn'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button> → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → LIT_"'LockBtn'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button> → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → LIT_"'TooltipBtn'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button> → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent> → MD_SkillbarMain._UpdateVisuals_b__6_2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent> → MD_SkillbarMain._UpdateVisuals_b__6_3 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ClickEvent> → MD_SkillbarMain._UpdateVisuals_b__6_4 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.ClickEvent> → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## SkillbarMain___ctor
Gear__UpdateWeaponType

## SkillbarMin__AdjustHeight
UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## SkillbarMin__Expand
Gear__UpdateWeaponType

## SkillbarMin__Minimize
Gear__UpdateWeaponType

## SkillbarMin__UpdateVisuals
LIT_"'Footer'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → LIT_"'ExpandBtn'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → LIT_"'MinimizeBtn'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → AbstractSkillbar__HideBar → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → AbstractSkillbar__HideBar → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## SkillbarSlot__AssignAction
TI_ActionSlot → ActionSlot___ctor → TI_ActionSlot → ActionSlot__AssignAction → TI_L2ClickableSlot → L2ClickableSlot__UnregisterClickableCallback → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'empty'" → PlayerShortcuts__GetKeybindForShortcut → SkillbarImageTable__get_Instance → SkillbarImageTable__LoadTextureByKey → UnityEngine_Object__op_Inequality → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## SkillbarSlot__AssignItem
PlayerInventory__GetItemByObjectId → TI_InventorySlot → InventorySlot___ctor → TI_InventorySlot → TI_L2ClickableSlot → L2ClickableSlot__UnregisterClickableCallback → TI_SlotAnimationManipulator → SlotAnimationManipulator___ctor → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'empty'" → SkillbarSlot__AtualizaTecla → PlayerShortcuts__IsItemToggled → TI_SkillbarWindow → SkillbarWindow__RemoveToggledSlot → TI_SkillbarWindow → SkillbarWindow__AddToggledSlot → TI_SkillbarWindow

## SkillbarSlot__AssignMacro
TI_MacroSlot → ActionSlot___ctor → TI_SparkMacros → SparkMacros__Busca → TI_MacroSlot → MacroSlot__AssignMacro → TI_L2ClickableSlot → L2ClickableSlot__UnregisterClickableCallback → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'empty'" → PlayerShortcuts__GetKeybindForShortcut → SkillbarImageTable__get_Instance → SkillbarImageTable__LoadTextureByKey → UnityEngine_Object__op_Inequality → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## SkillbarSlot__AssignShortcut
TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → PlayerInventory__GetItemByObjectId → TI_InventorySlot → InventorySlot___ctor → TI_InventorySlot → TI_L2ClickableSlot → L2ClickableSlot__UnregisterClickableCallback → TI_SlotAnimationManipulator → SlotAnimationManipulator___ctor → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'empty'" → SkillbarSlot__AtualizaTecla → PlayerShortcuts__IsItemToggled → TI_SkillbarWindow → SkillbarWindow__RemoveToggledSlot → TI_SkillbarWindow → SkillbarWindow__AddToggledSlot → TI_SkillbarWindow → SkillbarSlot__NivelDoJogador → TI_SkillWindowInfo → SkillWindowInfo___ctor → TI_SlotAnimationManipulator → SlotAnimationManipulator___ctor → TI_SkillSlot → L2DraggableSlot___ctor → TI_SkillSlot → SkillSlot__AssignSkill → TI_L2ClickableSlot → L2ClickableSlot__UnregisterClickableCallback → PlayerSkill__GetSkillInfo → SkillInfo__get_IsSkillOnCooldown → TI_SkillbarWindow → SkillbarWindow__AddSkillOnCooldown → TI_SkillbarWindow → PlayerShortcuts__IsSkillToggled → TI_SkillbarWindow → SkillbarWindow__RemoveToggledSlot → TI_SkillbarWindow → SkillbarWindow__AddToggledSlot → TI_SkillbarWindow → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'empty'" → SkillbarSlot__AtualizaTecla → TI_ActionSlot → ActionSlot___ctor → TI_ActionSlot → ActionSlot__AssignAction → TI_L2ClickableSlot → TI_MacroSlot → ActionSlot___ctor → TI_SparkMacros → SparkMacros__Busca → TI_MacroSlot → MacroSlot__AssignMacro → TI_L2ClickableSlot → L2ClickableSlot__UnregisterClickableCallback → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'empty'" → SkillbarSlot__AtualizaTecla

## SkillbarSlot__AssignSkill
SkillbarSlot__NivelDoJogador → TI_SkillWindowInfo → SkillWindowInfo___ctor → TI_SlotAnimationManipulator → SlotAnimationManipulator___ctor → TI_SkillSlot → L2DraggableSlot___ctor → TI_SkillSlot → SkillSlot__AssignSkill → TI_L2ClickableSlot → L2ClickableSlot__UnregisterClickableCallback → PlayerSkill__GetSkillInfo → SkillInfo__get_IsSkillOnCooldown → TI_SkillbarWindow → SkillbarWindow__AddSkillOnCooldown → TI_SkillbarWindow → PlayerShortcuts__IsSkillToggled → TI_SkillbarWindow → SkillbarWindow__RemoveToggledSlot → TI_SkillbarWindow → SkillbarWindow__AddToggledSlot → TI_SkillbarWindow → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'empty'" → SkillbarSlot__AtualizaTecla

## SkillbarSlot__AtualizaItem
TI_InventorySlot → PlayerInventory__GetItemByObjectId

## SkillbarSlot__AtualizaSkill
TI_SkillSlot → SkillbarSlot__NivelDoJogador → TI_SkillWindowInfo → SkillWindowInfo___ctor

## SkillbarSlot__AtualizaTecla
PlayerShortcuts__GetKeybindForShortcut → SkillbarImageTable__get_Instance → SkillbarImageTable__LoadTextureByKey → UnityEngine_Object__op_Inequality → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## SkillbarSlot__ClearManipulators
LIT_"'MacroSigla'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → UnityEngine_UIElements_VisualElement__RemoveFromHierarchy → LIT_"'ItemQtd'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → UnityEngine_UIElements_VisualElement__RemoveFromHierarchy → L2DraggableSlot__ClearManipulators → UnityEngine_UIElements_VisualElementExtensions__RemoveManipulator

## SkillbarSlot__HandleLeftClick
System_String__Format → LIT_"'Use bar slot {0}.'" → UnityEngine_Debug__Log → PlayerShortcuts__UseShortcut

## SkillbarSlot__HandleRightClick
TI_InventorySlot → LIT_"'action_soulshot'" → LIT_"'action_bless_spiritshot'" → LIT_"'action_spiritshot'" → LIT_"'action_summon_soulshot'" → LIT_"'action_summon_spiritshot'" → System_String__Format → LIT_"'Toggle bar slot {0}.'" → UnityEngine_Debug__Log → PlayerShortcuts__RequestToggleShortcutItem

## SkillbarSlot__NivelDoJogador
UnityEngine_Object__op_Inequality → PlayerSkill__GetSkillInfo

## SkillbarSlot__UpdateInputInfo
UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'empty'" → PlayerShortcuts__GetKeybindForShortcut → SkillbarImageTable__get_Instance → SkillbarImageTable__LoadTextureByKey → UnityEngine_Object__op_Inequality → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## SkillbarSlot___ctor
L2DraggableSlot___ctor → LIT_"'Key'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>

## SkillbarWindow__AddShortcut
TI_SkillbarWindow.<>c__DisplayClass57_0 → Gear__UpdateWeaponType → System_String__Format → LIT_"'Slot value {0} is too high.'" → UnityEngine_Debug__LogError → MD_SkillbarWindow.__c__DisplayClass57_0._UpdateBarShortcut_b__0 → System_ThrowHelper__ThrowArgumentNullException → MR_System.Collections.Generic.List<AbstractSkillbar>.ForEach → System_ThrowHelper__ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion

## SkillbarWindow__AddSkillOnCooldown
SkillbarWindow__GetAllSlotsAt → MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator → MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SkillbarSlot>.Dispose → System_String__Format → LIT_"'Skillbarslot match skillondooldown: Page:{0} Slot:{1} Sk..." → UnityEngine_Debug__Log

## SkillbarWindow__AddSkillOnCooldown
MR_System.Collections.Generic.List<SkillbarSlot>.Contains → MR_System.Collections.Generic.List<SkillbarSlot>.Add

## SkillbarWindow__AddSkillbar
MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item → SkillbarMain__UpdateExpandInput → SkillbarWindow__ExpandSkillbar → System_String__Concat → LIT_"'spark.atalhos.linhas.'" → UnityEngine_PlayerPrefs__SetInt

## SkillbarWindow__AddToggledSlot
MR_System.Collections.Generic.List<SkillbarSlot>.Contains → MR_System.Collections.Generic.List<SkillbarSlot>.Add

## SkillbarWindow__AddToggledSlot
SkillbarWindow__GetAllSlotsAt → MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator → MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SkillbarSlot>.Dispose → MR_System.Collections.Generic.List<SkillbarSlot>.Contains → MR_System.Collections.Generic.List<SkillbarSlot>.Add

## SkillbarWindow__AplicaEscala
TI_SparkOpcoes → SparkOpcoes__Carrega → TI_SparkOpcoes → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundSize__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit

## SkillbarWindow__AplicaLinhasGuardadas
TI_SkillbarWindow.<AplicaLinhasGuardadas>d__44 → Gear__UpdateWeaponType

## SkillbarWindow__AtualizaItem
MR_System.Collections.Generic.List<AbstractSkillbar>.GetEnumerator → MR_System.Collections.Generic.List<AbstractSkillbar>.MoveNext → MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator,param_4, → MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext → SkillbarSlot__AtualizaItem → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SkillbarSlot>.Dispose → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<AbstractSkillbar>.Dispose

## SkillbarWindow__AtualizaSkills
MR_System.Collections.Generic.List<AbstractSkillbar>.GetEnumerator → MR_System.Collections.Generic.List<AbstractSkillbar>.MoveNext → MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator,param_4, → MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext → SkillbarSlot__AtualizaSkill → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SkillbarSlot>.Dispose → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<AbstractSkillbar>.Dispose

## SkillbarWindow__AtualizaTeclas
MR_System.Collections.Generic.List<AbstractSkillbar>.GetEnumerator → MR_System.Collections.Generic.List<AbstractSkillbar>.MoveNext → MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator,param_4, → MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext → SkillbarSlot__AtualizaTecla → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SkillbarSlot>.Dispose → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<AbstractSkillbar>.Dispose

## SkillbarWindow__Awake
TI_SkillbarWindow → UnityEngine_Object__op_Equality → UnityEngine_Object__Destroy → TI_SkillbarWindow → MR_System.Collections.Generic.List<UnityEngine.Coroutine>..ctor → TI_System.Collections.Generic.List<SkillbarSlot> → MR_System.Collections.Generic.List<SkillbarSlot>..ctor → TI_System.Collections.Generic.List<SkillbarSlot> → MR_System.Collections.Generic.List<SkillbarSlot>..ctor → MD_SkillbarWindow.AtualizaItem → System_Delegate__Combine

## SkillbarWindow__BuildWindow
TI_SkillbarWindow.<BuildWindow>d__39 → AbstractEffectWindow__UpdateBuffTimers_d__24___ctor

## SkillbarWindow__ExpandSkillbar
MD_SkillbarWindow._ExpandSkillbar_b__49_0 → MR_System.Collections.Generic.List<UnityEngine.Coroutine>.ForEach → System_Array__Clear → MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item → Gear__UpdateWeaponType → UnityEngine_MonoBehaviour__StartCoroutine → MR_System.Collections.Generic.List<UnityEngine.Coroutine>.Add → MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item → AbstractSkillbar__HideBar

## SkillbarWindow__GetAllSlotsAt
TI_System.Collections.Generic.List<SkillbarSlot> → MR_System.Collections.Generic.List<SkillbarSlot>..ctor → MR_System.Collections.Generic.List<AbstractSkillbar>.GetEnumerator,param_4,lVar3 → MR_System.Collections.Generic.List<AbstractSkillbar>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<AbstractSkillbar>.Dispose → AbstractSkillbar__GetSlotAt → System_String__Format → LIT_"'Skillbar slot error: {0}'" → UnityEngine_Debug__LogWarning

## SkillbarWindow__GuardaLinhas
System_String__Concat → LIT_"'spark.atalhos.linhas.'" → UnityEngine_PlayerPrefs__SetInt

## SkillbarWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SkillbarWindow/SkillbarWindow'"

## SkillbarWindow__MinimizeSkillbar
MD_SkillbarWindow._MinimizeSkillbar_b__50_0 → MR_System.Collections.Generic.List<UnityEngine.Coroutine>.ForEach → System_Array__Clear → MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item → SkillbarMin__Minimize → UnityEngine_MonoBehaviour__StartCoroutine → MR_System.Collections.Generic.List<UnityEngine.Coroutine>.Add

## SkillbarWindow__OnDestroy
MD_SkillbarWindow.AtualizaItem → PlayerInventory__remove_ItemMudou → TI_SkillbarWindow → UnityEngine_MonoBehaviour__StopCoroutine

## SkillbarWindow__OnPageChanged
MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item → ArrowInputManipulator__SelectIndex → AbstractSkillbar__ResetShortcuts → PlayerShortcuts__UpdatePageMapping → PlayerShortcuts__get_Shortcuts → TI_SkillbarWindow.<UpdateAllShortcuts>d__56 → AbstractEffectWindow__UpdateBuffTimers_d__24___ctor → LIT_"'routine is null'" → System_NullReferenceException___ctor → MD_UnityEngine.MonoBehaviour.StartCoroutine → UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException → LIT_"'obj'" → UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException → LIT_"'Coroutines can only be stopped on a MonoBehaviour'" → System_ArgumentException___ctor → MD_UnityEngine.MonoBehaviour.StartCoroutine → UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException → LIT_"'obj'"

## SkillbarWindow__PlayAnimations
TI_SkillbarWindow.<PlayAnimations>d__69 → AbstractEffectWindow__UpdateBuffTimers_d__24___ctor

## SkillbarWindow__RemoveOnCooldownSkill
SkillbarWindow__GetAllSlotsAt → MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator → MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SkillbarSlot>.Dispose → MR_System.Collections.Generic.List<SkillbarSlot>.Contains → UnityEngine_UIElements_VisualElement__get_style → MR_System.Collections.Generic.List<SkillbarSlot>.Remove

## SkillbarWindow__RemoveOnCooldownSkill
MR_System.Collections.Generic.List<SkillbarSlot>.Contains → UnityEngine_UIElements_VisualElement__get_style → MR_System.Collections.Generic.List<SkillbarSlot>.Remove

## SkillbarWindow__RemoveShortcut
TI_SkillbarWindow.<>c__DisplayClass59_0 → Gear__UpdateWeaponType → SkillbarWindow__RemoveToggledSlot → SkillbarWindow__RemoveOnCooldownSkill → MD_SkillbarWindow.__c__DisplayClass59_0._RemoveShortcut_b__0 → System_ThrowHelper__ThrowArgumentNullException → MR_System.Collections.Generic.List<AbstractSkillbar>.ForEach → System_ThrowHelper__ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion

## SkillbarWindow__RemoveToggledSlot
SkillbarWindow__GetAllSlotsAt → MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator → MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SkillbarSlot>.Dispose → SkillbarWindow__RemoveToggledSlot

## SkillbarWindow__RemoveToggledSlot
MR_System.Collections.Generic.List<SkillbarSlot>.Contains → UnityEngine_UIElements_VisualElement__get_style → MR_System.Collections.Generic.List<SkillbarSlot>.Remove

## SkillbarWindow__ResetSkillbar
MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → SkillbarWindow__MinimizeSkillbar → System_String__Concat → LIT_"'spark.atalhos.linhas.'" → UnityEngine_PlayerPrefs__SetInt

## SkillbarWindow__ToggleDisableTooltip
MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item → TI_SkillbarWindow → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'min'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'min'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'min'" → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'min'"

## SkillbarWindow__ToggleLockSkillBar
MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item → TI_SkillbarWindow → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'locked'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'locked'" → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'locked'" → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'locked'"

## SkillbarWindow__ToggleRotate
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → SkillbarWindow__AplicaEscala

## SkillbarWindow__UpdateAllShortcuts
TI_SkillbarWindow.<UpdateAllShortcuts>d__56 → AbstractEffectWindow__UpdateBuffTimers_d__24___ctor

## SkillbarWindow__UpdateBarShortcut
TI_SkillbarWindow.<>c__DisplayClass57_0 → Gear__UpdateWeaponType → System_String__Format → LIT_"'Slot value {0} is too high.'" → UnityEngine_Debug__LogError → MD_SkillbarWindow.__c__DisplayClass57_0._UpdateBarShortcut_b__0 → System_ThrowHelper__ThrowArgumentNullException → MR_System.Collections.Generic.List<AbstractSkillbar>.ForEach → System_ThrowHelper__ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion

## SkillbarWindow___ctor
TI_L2Window

## SlotAnimationManipulator__AnimateCoolTime
SkillbarImageTable__get_Instance → UnityEngine_UIElements_VisualElement__get_style → SkillbarImageTable__get_Instance → UnityEngine_UIElements_StyleBackground___ctor → SkillbarImageTable__get_Instance → UnityEngine_UIElements_VisualElement__get_style → SkillbarImageTable__get_Instance → UnityEngine_UIElements_StyleBackground___ctor → UnityEngine_UIElements_VisualElement__get_style

## SlotAnimationManipulator__AnimateToggle
UnityEngine_UIElements_VisualElement__get_style → SkillbarImageTable__get_Instance → UnityEngine_UIElements_StyleBackground___ctor

## SlotAnimationManipulator___ctor
SparkMapaWindow_Loja___ctor

## SlotClickSoundManipulator__MouseDownHandler
LIT_"'click_03'" → System_String__Concat → LIT_"'event:/InterfaceSound/'" → FMODUnity_RuntimeManager__PathToEventReference → SparkSons__get_Instance → SparkSons__TocaInterface → UnityEngine_Debug__LogWarning → LIT_"'Trying to play a null EventReference sound.'" → FMODUnity_RuntimeManager__PlayOneShot

## SlotClickSoundManipulator__RegisterCallbacksOnTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_SlotClickSoundManipulator.MouseDownHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## SlotClickSoundManipulator__UnregisterCallbacksFromTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_SlotClickSoundManipulator.MouseDownHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerDownEvent> → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## SlotClickSoundManipulator___ctor
UnityEngine_UIElements_MouseManipulator___ctor

## SlotDragManipulator__DragFlotatingSlot
UnityEngine_UIElements_VisualElement__get_layout → TI_L2SlotManager → L2SlotManager__DragSlot → TI_L2SlotManager

## SlotDragManipulator__PointerDownHandler
TI_L2SlotManager → L2SlotManager__SetDraggedSlot → TI_L2SlotManager → UnityEngine_UIElements_VisualElement__get_worldBound → UnityEngine_UIElements_PointerCaptureHelper__CapturePointer

## SlotDragManipulator__PointerMoveHandler
UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture → UnityEngine_UIElements_VisualElement__get_layout → TI_L2SlotManager → L2SlotManager__DragSlot → TI_L2SlotManager

## SlotDragManipulator__PointerUpHandler
UnityEngine_UIElements_PointerCaptureHelper__HasPointerCapture → UnityEngine_UIElements_PointerCaptureHelper__ReleasePointer → TI_L2SlotManager → L2SlotManager__ReleaseDrag → TI_L2SlotManager

## SlotDragManipulator__RegisterCallbacksOnTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_SlotDragManipulator.PointerDownHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent> → MD_SlotDragManipulator.PointerMoveHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerMoveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent> → MD_SlotDragManipulator.PointerUpHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## SlotDragManipulator__UnregisterCallbacksFromTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_SlotDragManipulator.PointerDownHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent> → MD_SlotDragManipulator.PointerMoveHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerMoveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent> → MD_SlotDragManipulator.PointerUpHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerUpEvent> → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## SlotDragManipulator__UpdateFlotatingSlotAppearance
TI_L2SlotManager → UnityEngine_UIElements_VisualElement__get_style

## SlotDragManipulator___ctor
UnityEngine_UIElements_MouseManipulator___ctor

## SlotHoverDetectManipulator__PointerOutHandler
TI_L2SlotManager

## SlotHoverDetectManipulator__PointerOverHandler
TI_L2SlotManager

## SlotHoverDetectManipulator__RegisterCallbacksOnTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerOverEvent> → MD_SlotHoverDetectManipulator.PointerOverHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerOverEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerOutEvent> → MD_SlotHoverDetectManipulator.PointerOutHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerOutEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## SlotHoverDetectManipulator__UnregisterCallbacksFromTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerOverEvent> → MD_SlotHoverDetectManipulator.PointerOverHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerOverEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerOutEvent> → MD_SlotHoverDetectManipulator.PointerOutHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerOutEvent> → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## SlotHoverDetectManipulator___ctor
UnityEngine_UIElements_MouseManipulator___ctor

## SparkArmazem__Fecha
TI_SparkArmazem → System_Array__Clear → TI_SparkArmazem → System_Array__Clear → TI_SparkArmazem

## SparkAvisoNaTela__Anima
TI_SparkAvisoNaTela → MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.get_Item → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__RemoveFromHierarchy → TI_SparkAvisoNaTela → MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.RemoveAt

## SparkAvisoNaTela__Mostra
System_String__IsNullOrWhiteSpace → UnityEngine_Object__op_Inequality → TI_SparkAvisoNaTela → UnityEngine_UIElements_VisualElement___ctor → TI_SparkAvisoNaTela → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_SparkAvisoNaTela → UnityEngine_UIElements_VisualElement__get_style → TI_SparkAvisoNaTela → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → TI_SparkAvisoNaTela → UnityEngine_UIElements_VisualElement__get_style → TI_SparkAvisoNaTela → UnityEngine_UIElements_VisualElement__get_style → TI_SparkAvisoNaTela → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkAvisoNaTela → UnityEngine_UIElements_VisualElement__get_style → TI_SparkAvisoNaTela → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkAvisoNaTela → UnityEngine_UIElements_VisualElement__get_style → TI_SparkAvisoNaTela → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_SparkAvisoNaTela → System_Array__Clear → TI_SparkAvisoNaTela → UnityEngine_UIElements_VisualElement__get_style → TI_SparkAvisoNaTela → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkAvisoNaTela → MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.GetEnumerator → MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.MoveNext → System_String__op_Inequality → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.Dispose → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.Dispose → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.FontStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkAvisoNaTela → UnityEngine_UIElements_VisualElement__Add → TI_SparkAvisoNaTela → TI_SparkAvisoNaTela.Aviso → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.Add → TI_SparkAvisoNaTela → MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.get_Item → UnityEngine_UIElements_VisualElement__RemoveFromHierarchy → TI_SparkAvisoNaTela → MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.RemoveAt → TI_SparkAvisoNaTela → MD_SparkAvisoNaTela.Anima → TI_SparkAvisoNaTel

## SparkAvisoNaTela__Pacote
TI_SparkLeitor → SparkLeitor___ctor → SparkLeitor__Ex → SparkLeitor__get_Resta → LIT_"''" → SparkLeitor__S → SystemMessageTable__get_Instance → SystemMessageTable__GetSystemMessage → AllianceMessage___ctor → TI_SparkAvisoNaTela → SparkAvisoNaTela__Mostra

## SparkAvisoNaTela___cctor
TI_System.Collections.Generic.List<SparkAvisoNaTela.Aviso> → MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>..ctor → TI_SparkAvisoNaTela

## SparkBalao__De
TI_SparkBalao → MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<string,float>>.TryGetValue → TI_SparkBalao → MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<string,float>>.Remove

## SparkBalao__Diz
System_String__IsNullOrWhiteSpace → TI_SparkLinkItem → SparkLinkItem__ParaBalao → System_String__get_Chars → System_String__Substring → System_String__Concat → LIT_"'...'" → TI_SparkBalao → MR_System.ValueTuple<string,float>..ctor → MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<string,float>>.set_Item

## SparkBalao___cctor
MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<string,float>>..ctor → TI_SparkBalao

## SparkBigHead__LateUpdate
System_Array__Clear → MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.GetEnumerator → MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.MoveNext → UnityEngine_Object__op_Equality → UnityEngine_Transform__set_localScale → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.Dispose → MR_System.Collections.Generic.List<Entity>.GetEnumerator → MR_System.Collections.Generic.List<Entity>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<Entity>.Dispose → MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.Remove

## SparkBigHead__Update
MR_System.Collections.Generic.HashSet<Entity>.Clear → UnityEngine_Object__op_Inequality → TI_SparkDesempenho → MR_System.Collections.Generic.List<Entity>.GetEnumerator → MR_System.Collections.Generic.List<Entity>.MoveNext → SparkBigHead__Check → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<Entity>.Dispose → UnityEngine_Object__op_Inequality → SparkBigHead__Check → MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.GetEnumerator → MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.Dispose → MR_System.Collections.Generic.HashSet<Entity>.Contains → WorldSpawner__get_Entidades → SparkBigHead__Check

## SparkBoard__Abre
TI_SparkPacoteLivre → SparkPacoteLivre__D → SparkPacoteLivre__Fim

## SparkBoard__Mostra
TI_SparkBoard

## SparkChatFiltro__MontaFiltros
TI_SparkChatFiltro → TI_SparkChatFiltro.<>c__DisplayClass57_0 → SparkMapaWindow_Loja___ctor → TI_SparkChatFiltro → System_String__Concat → LIT_"' tab'" → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Wrap>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkChatFiltro → TI_SparkChatFiltro.<>c__DisplayClass57_1 → SparkMapaWindow_Loja___ctor → TI_SparkChatFiltro → MD_SparkChatFiltro.__c__DisplayClass57_1._MontaFiltros_b__0 → MD_SparkChatFiltro.__c__DisplayClass57_1._MontaFiltros_b__1 → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkChatFiltro__CorDoCanal → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__Add

## SparkChatFiltro__Mostra
TI_SparkChatFiltro → SparkChatFiltro__Carrega → TI_SparkChatFiltro

## SparkClan__InfoUpdate
TI_SparkClan → SparkLeitor__S → TI_SparkClan

## SparkComandos__ComandoDaAcao
TI_SparkComandos → MR_System.Collections.Generic.Dictionary<string,int>.GetEnumerator → MR_System.Collections.Generic.Dictionary<string,int>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<string,int>.Dispose → System_Int32__ToString → System_String__Concat → LIT_"'/action '" → System_String__Concat → LIT_"'/'" → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<string,int>.Dispose

## SparkComandos__Diz
SMParam___ctor → TI_ChatWindow → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → ChatWindow__ReceiveSystemMessage

## SparkComandos__Executa
LIT_"'Usage: /channelkick Name (or target the party leader).'" → LIT_"'Usage: /friendinvite Name (or target the player).'" → LIT_"''" → System_String__Substring → System_String__ToLowerInvariant → LIT_"'equip'" → TI_SparkMacros → SparkMacros__ItemPeloNome → LIT_"'Item \" → LIT_"'\" → PlayerInventory__UseItem → LIT_"'nick'" → TI_SparkComandos → SparkComandos__OutroJogador → UnityEngine_Object__op_Inequality → TI_SparkClan → SparkClan__Titulo → TI_ChatWindow → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → ChatWindow__ReceiveSystemMessage → LIT_"'partyduel'" → LIT_"'gm'" → LIT_"'Usage: /gm message.'" → TI_SparkComandos → LIT_"'Usage: /gm message.'" → TI_SparkPacoteLivre → SparkPacoteLivre__S → SparkPacoteLivre__D → LIT_"'delay'" → LIT_"'useskillstand'" → LIT_"'withdraw'" → GameClientPacketHandler__RequestDuelSurrender → LIT_"'useskillforce'" → LIT_"'useshortcutforce'" → TI_SparkMacros → SparkMacros__UsaAtalho → LIT_"'useskill'" → TI_SparkMacros → SparkMacros__SkillPeloNome → LIT_"'Skill \" → LIT_"'\" → PlayerSkill__UseSkill → System_String__Concat → LIT_"'useshortcutstand'" → LIT_"'gmcancel'" → TI_SparkPacoteLivre → SparkPacoteLivre__Fim → LIT_"'duel'" → TI_SparkComandos → SparkComandos__OutroJogador → UnityEngine_Object__op_Inequality → LIT_"''" → System_String__Equals → LIT_"'partyduel'" → GameClientPacketHandler__RequestDuelStart → LIT_"'useshortcut'" → System_String__ToLowerInvariant → LIT_"'friendlist'" → TI_FriendWindow → LIT_"'channelinvite'" → TI_SparkCanal → SparkCanal__Convida → LIT_"'friendinvite'" → UnityEngine_Object__op_Inequality → UnityEngine_Object__op_Equality → TI_SparkPortaEntity → TI_SparkAmigos → SparkAmigos__Convida → LIT_"'Usage: /friendinvite Name (or target the player).'" → TI_SparkComandos → LIT_"'Usage: /friendinvite Name (or target the player).'" → LIT_"'pledge'" → LIT_"'allblock'" → TI_SparkAmigos → SparkAmigos__BloqueiaTodos → LIT_"'clan'" → TI_ClanWindow → LIT_"'allydissolve'" → TI_SparkClan → SparkClan__DissolveAlianca → LIT_"'allyinfo'" → TI_SparkClan → SparkClan__InfoDaAlianca → LIT_"'allyleave'" → TI_SparkClan → SparkClan__SaiDaAlianca → LIT_"'allyinvite'" → UnityEngine_Object__op_Inequality → UnityEngine_Object__op_Equality → TI_SparkClan → SparkClan__ConvidaAlianca → LIT_"'Select the leader of the clan you want to invite.'" → TI_SparkComandos → LIT_"'Select the leader of the clan you want to invite.'" → LIT_"'channelkick'" → TI_SparkComandos → SparkComandos__OutroJogador → UnityEngine_Object__op_Equality → GameClientPacketHandler__RequestExOustFromMPCC → LIT_"'Usage: /channelkick Name (or target the party leader).'" → TI_SparkComandos → LIT_"'Usage: /channelkick Name (or target the party leader).'" → LIT_"'gmlist'" → TI_SparkPacoteLivre → LIT_"'allunblock'" → TI_SparkAmigos → SparkAmigos__DesbloqueiaTodos → LIT_"'blocklist'" → TI_SparkAmigos → SparkAmigos__ListaDeBloqueio → TI_SparkComandos → MR_System.Collections.Generic.Dic

## SparkComandos__Mira
UnityEngine_Object__op_Inequality → WorldSpawner__BuscaPorNome → UnityEngine_Object__op_Equality → NpcSpawner__NaoSelecionavel → UnityEngine_Object__op_Inequality → TI_ShopWindow → GameClientPacketHandler__SendRequestSetTarget → System_String__Concat → LIT_"' is not in sight.'" → TI_SparkComandos → SMParam___ctor → TI_ChatWindow → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → ChatWindow__ReceiveSystemMessage

## SparkComandos__OutroJogador
UnityEngine_Object__op_Inequality → UnityEngine_Object__op_Equality

## SparkComandos___cctor
MR_System.Collections.Generic.Dictionary<string,int>..ctor → LIT_"'sit'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'stand'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'walk'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'run'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'attack'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'trade'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'pickup'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'assist'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'invite'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'leave'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'dismiss'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'vendor'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'sell'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'buy'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'packagesale'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'dwarvenmanufacture'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'generalmanufacture'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'evaluate'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'changepartyleader'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'findprivatestore'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'findstore'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'sparkfind'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'socialhello'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'socialvictory'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'socialcharge'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'socialyes'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'socialno'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'socialbow'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'socialunaware'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'socialwaiting'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'sociallaugh'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'socialapplause'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'socialdance'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'socialsad'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'socialcharm'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'socialshyness'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'charm'" → MR_System.Collections.Generic.Dictionary<string,int>.Add → LIT_"'shynes

## SparkCorreio__AbreEnviada
TI_SparkCorreio → TI_SparkPacoteLivre → SparkPacoteLivre__H → SparkPacoteLivre__D → SparkPacoteLivre__Fim

## SparkCorreio__AbreRecebida
TI_SparkCorreio → TI_SparkPacoteLivre → SparkPacoteLivre__H → SparkPacoteLivre__D → SparkPacoteLivre__Fim

## SparkCraftWindow__AbreLivro
TI_SparkCraft → MR_System.Collections.Generic.List<int>.Contains → TI_SparkCraft → MR_System.Collections.Generic.List<int>.get_Item → LIT_"''" → SparkCraftWindow__Mostra → TI_SparkCraft → TI_SparkPacoteLivre → SparkPacoteLivre__D → TI_SparkCraft → SparkPacoteLivre__Fim

## SparkCraftWindow__AbreLoja
TI_SparkCraft → TI_System.Predicate<SparkCraft.NaLoja> → MD_SparkCraftWindow._AbreLoja_b__44_0 → MR_System.Collections.Generic.List<SparkCraft.NaLoja>.Exists → TI_SparkCraft → MR_System.Collections.Generic.List<SparkCraft.NaLoja>.get_Item → LIT_"''" → TI_SparkCraft → SparkCraftWindow__Mostra → TI_SparkCraft → SparkCraft__PedeInfoNaLoja → TI_SparkCraft

## SparkCraftWindow__AbreMontagem
TI_SparkCraft → MR_System.Collections.Generic.List<SparkCraft.NaLoja>.AddRange → TI_SparkCraft → LIT_"''" → TI_SparkCraft → MR_System.Collections.Generic.List<int>.Contains → TI_SparkCraft → MR_System.Collections.Generic.List<int>.get_Item → LIT_"''" → SparkCraftWindow__Mostra

## SparkCraftWindow__Awake
TI_SparkCraftWindow → UnityEngine_Object__op_Equality → TI_SparkCraftWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SparkCraftWindow__BuildWindow
TI_SparkCraftWindow.<BuildWindow>d__40 → AbstractEffectWindow__UpdateBuffTimers_d__24___ctor

## SparkCraftWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed → TI_SparkCraft → SparkCraft__SaiDaMontagem

## SparkCraftWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkCraftWindow/SparkCraftWindow'"

## SparkCraftWindow__MontaLista
LIT_"'Recipes ({0})'" → LIT_"'Items made here ({0})'" → UnityEngine_UIElements_VisualElement__Clear → MR_System.Collections.Generic.List<int>..ctor → MR_System.Collections.Generic.Dictionary<int,int>..ctor → TI_SparkCraft → MR_System.Collections.Generic.List<int>.AddRange → TI_SparkCraft → MR_System.Collections.Generic.List<SparkCraft.NaLoja>.GetEnumerator → MR_System.Collections.Generic.List<SparkCraft.NaLoja>.MoveNext → MR_System.Collections.Generic.List<int>.Add, → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkCraft.NaLoja>.Dispose → LIT_"'Items made here ({0})'" → LIT_"'Recipes ({0})'" → System_String__Format → LIT_"'Your recipe book is empty. Use a recipe to learn it.'" → LIT_"'Nothing to craft here.'" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MR_System.Collections.Generic.List<int>.GetEnumerator → MR_System.Collections.Generic.List<int>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<int>.Dispose → TI_SparkCraftWindow.<>c__DisplayClass47_0 → SparkMapaWindow_Loja___ctor → TI_SparkCraft → SparkCraft__Info → TI_SparkEstilo → SparkEstilo__Linha → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → SparkEstilo__Moldura → IconTable__get_Instance → UnityEngine_UIElements_VisualElement__get_style → IconTable__get_Instance → IconTable__GetIcon → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_SparkCraft → SparkCraft__TemMateriais → SparkCraft__NomeDoProduto → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → LIT_"''" → System_String__Format → LIT_"'Lv {0}  ·  {1}%  ·  MP {2}'" → MR_System.Collections.Generic.Dictionary<int,int>.TryGetValue → System_String__Format → LIT_"'{0:N0} Adena  ·  '" → System_String__Concat → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Marca → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_SparkCraftWindow.__c__DisplayClass47_0._MontaLista_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCall

## SparkCraftWindow__MontaOficina
LIT_"'IN YOUR WORKSHOP ({0})'" → UnityEngine_UIElements_VisualElement__Clear → System_String__Format → LIT_"'IN YOUR WORKSHOP ({0})'" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Select a recipe on the left, set the price and press Add.'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MR_System.Collections.Generic.List<SparkCraft.NaLoja>.GetEnumerator → MR_System.Collections.Generic.List<SparkCraft.NaLoja>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkCraft.NaLoja>.Dispose → TI_SparkCraftWindow.<>c__DisplayClass48_0 → SparkMapaWindow_Loja___ctor → TI_SparkEstilo → SparkEstilo__Linha → TI_SparkCraft → SparkCraft__NomeDoProduto → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → System_String__Format → LIT_"'{0:N0}'" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'  ✕'" → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_SparkCraftWindow.__c__DisplayClass48_0._MontaOficina_b__0 → UnityEngine_UIElements_VisualElement__Add

## SparkCraftWindow__MostraDetalhe
LIT_"'MP needed: {0}   (you have {1} / {2})'" → TI_SparkCraft → SparkCraft__Info → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → LIT_"'Select a recipe on the left.'" → UnityEngine_UIElements_VisualElement__get_style → IconTable__get_Instance → IconTable__GetIcon → UnityEngine_UIElements_StyleBackground__op_Implicit → TI_SparkCraft → SparkCraft__NomeDoProduto → LIT_"'{0} recipe  ·  Level {1}  ·  Success {2}%'" → LIT_"'Dwarven'" → LIT_"'Common'" → System_String__Format → UnityEngine_UIElements_VisualElement__Clear → MR_System.Collections.Generic.List<int__>.GetEnumerator → MR_System.Collections.Generic.List<int__>.MoveNext → TI_SparkCraft → SparkCraft__Tenho → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → IconTable__get_Instance → UnityEngine_UIElements_VisualElement__get_style → IconTable__get_Instance → IconTable__GetIcon → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__Add → SparkUI__NomeDoItem → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → System_String__Format → LIT_"'{0:N0} / {1:N0}'" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<int__>.Dispose → UnityEngine_Object__op_Inequality → System_String__Format → LIT_"'MP needed: {0}   (you have {1} / {2})'" → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkCraft → TI_System.Predicate<SparkCraft.NaLoja> → MD_SparkCraftWindow._MostraDetalhe_b__51_0 → MR_System.Collections.Generic.List<SparkCraft.NaLoja>.Find → System_String__Format → LIT_"'Price: {0:N0} Adena   ·   Crafter MP: {1} / {2} (needs {..." → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkCraft → SparkCraft__Tenho → System_String__Format → LIT_"'MP needed per craft: {0}'" → UnityEngine_UIElements_VisualElement__get_style → TI_Spar

## SparkCraftWindow__Mostra
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_SparkCraft → LIT_"'Common Recipe Book'" → TI_SparkCraft → LIT_"'Dwarven Recipe Book'" → LIT_"'Private Manufacture'" → TI_SparkCraft → LIT_"'General Manufacture'" → TI_SparkCraft → LIT_"'Dwarven Manufacture'" → LIT_"'Create'" → LIT_"'Start'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → LIT_"'Delete'" → LIT_"'Add'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → SparkCraftWindow__MontaLista → SparkCraftWindow__MontaOficina → SparkCraftWindow__MostraDetalhe

## SparkCraftWindow__NomeDoBotao
MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>

## SparkCraftWindow__OnDestroy
TI_SparkCraftWindow → UnityEngine_Object__op_Equality → TI_SparkCraftWindow → MD_SparkCraftWindow.AbreLivro → TI_SparkCraft → SparkCraft__remove_LivroChegou → MD_SparkCraftWindow.InfoChegou → SparkCraft__remove_InfoChegou → MD_SparkCraftWindow.AbreMontagem → SparkCraft__remove_MontagemChegou → MD_SparkCraftWindow.AbreLoja → SparkCraft__remove_LojaChegou → MD_SparkCraftWindow.LojaInfoChegou → TI_SparkCraft → System_Delegate__Remove → TI_SparkCraft

## SparkCraftWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## SparkCraft__AbreLivro
TI_SparkPacoteLivre → SparkPacoteLivre__D → TI_SparkCraft → SparkPacoteLivre__Fim

## SparkCraft__AbreMontagem
TI_SparkPacoteLivre → TI_SparkCraft → SparkPacoteLivre__Fim

## SparkCraft__SaiDaMontagem
TI_SparkPacoteLivre → TI_SparkCraft → SparkPacoteLivre__Fim

## SparkDetalhePersonagem__OnDestroy
TI_SparkDetalhePersonagem → UnityEngine_Object__op_Equality → TI_SparkDetalhePersonagem

## SparkDetalhePersonagem__Update
System_Diagnostics_Stopwatch__Restart → SparkDetalhePersonagem__Passo → System_Diagnostics_Stopwatch__get_Elapsed → MR_UnityEngine.Object.FindObjectsByType<Entity> → SparkDetalhePersonagem__Limpa → TI_SparkOpcoes → TI_SparkMalhaUnica → SparkMalhaUnica__set_SombraUnica → UnityEngine_Camera__get_main → UnityEngine_Object__op_Equality → UnityEngine_Component__get_transform → UnityEngine_Transform__get_position → SparkDetalhePersonagem__AtualizaSombras → SparkDetalhePersonagem__AtualizaLod

## SparkDicaItem__AtributosDoCliente
TI_SparkDicaItem → SparkDicaItem__BonusDefesa → SparkDicaItem__Linha → LIT_"'P. Def.'" → SparkDicaItem__Linha → LIT_"'M. Def.'" → LIT_"'Shield Def.'" → LIT_"' <color={0}>(+{1})</color>'" → System_String__Format → LIT_"'\\n<color={0}>{1}:</color> {2}'" → LIT_"'#A3A08A'" → System_Text_StringBuilder__Append → LIT_"'Shield Def. Rate'" → LIT_"' <color={0}>(+{1})</color>'" → System_String__Format → LIT_"'\\n<color={0}>{1}:</color> {2}'" → LIT_"'#A3A08A'" → Weapon__get_Weapongrp → TI_SparkDicaItem → SparkDicaItem__BonusAtaque → SparkDicaItem__Linha → LIT_"'P. Atk.'" → SparkDicaItem__BonusMagia → SparkDicaItem__Linha → LIT_"'M. Atk.'" → LIT_"'Atk. Spd.'" → LIT_"' <color={0}>(+{1})</color>'" → System_String__Format → LIT_"'\\n<color={0}>{1}:</color> {2}'" → LIT_"'#A3A08A'" → System_Text_StringBuilder__Append → LIT_"'Critical'" → System_String__Format → LIT_"'\\n<color={0}>{1}:</color> {2:0.#}'" → LIT_"'#A3A08A'" → System_Text_StringBuilder__Append → System_String__Format → LIT_"'\\n<color={0}>Weight:</color> {1}'" → LIT_"'#A3A08A'" → System_Text_StringBuilder__Append

## SparkDicaItem__AtributosDoServidor
Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'t'" → Newtonsoft_Json_Linq_JToken__op_Explicit → LIT_"''" → Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'b'" → Newtonsoft_Json_Linq_JToken__op_Explicit → LIT_"''" → Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'patk'" → TI_SparkDicaItem → LIT_"''" → System_String__ToLowerInvariant → LIT_"'light'" → LIT_"'Light Armor'" → LIT_"'heavy'" → LIT_"'Heavy Armor'" → LIT_"'magic'" → LIT_"''" → LIT_"'Robe'" → TI_SparkDicaItem → SparkDicaItem__Inteiro → LIT_"'sdef'" → TI_SparkDicaItem → SparkDicaItem__TipoArma → TI_SparkDicaItem → SparkDicaItem__LugarDoServidor → TI_SparkDicaItem.<>c → LIT_"' / '" → TI_SparkDicaItem.<>c → MD_SparkDicaItem.__c._AtributosDoServidor_b__25_0 → TI_SparkDicaItem.<>c → MR_System.Linq.Enumerable.Where<string> → System_String__Join → System_String__Concat → LIT_"'\\n<color=#A3A08A>'" → LIT_"'</color>'" → System_Text_StringBuilder__Append → Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'pdef'" → TI_SparkDicaItem → SparkDicaItem__BonusDefesa → SparkDicaItem__Inteiro → LIT_"'pdef'" → SparkDicaItem__Linha → LIT_"'P. Def.'" → SparkDicaItem__Inteiro → LIT_"'mdef'" → SparkDicaItem__Linha → LIT_"'M. Def.'" → SparkDicaItem__Inteiro → LIT_"'mpb'" → LIT_"'Max MP'" → LIT_"' <color={0}>(+{1})</color>'" → System_String__Format → LIT_"'\\n<color={0}>{1}:</color> {2}'" → LIT_"'#A3A08A'" → System_Text_StringBuilder__Append → SparkDicaItem__Inteiro → LIT_"'avoid'" → System_String__Format → LIT_"'\\n<color={0}>Evasion:</color> {1:+0;-0}'" → LIT_"'#A3A08A'" → Weapon__get_Weapongrp → LIT_"'bow'" → LIT_"'dual'" → LIT_"'dualfist'" → TI_SparkDicaItem → SparkDicaItem__Inteiro → LIT_"'patk'" → SparkDicaItem__BonusAtaque → SparkDicaItem__Linha → LIT_"'P. Atk.'" → SparkDicaItem__Inteiro → LIT_"'matk'" → SparkDicaItem__BonusMagia → SparkDicaItem__Linha → LIT_"'M. Atk.'" → SparkDicaItem__Inteiro → LIT_"'spd'" → LIT_"'Atk. Spd.'" → LIT_"' <color={0}>(+{1})</color>'" → System_String__Format → LIT_"'\\n<color={0}>{1}:</color> {2}'" → LIT_"'#A3A08A'" → System_Text_StringBuilder__Append → SparkDicaItem__Inteiro → LIT_"'crit'" → LIT_"'Critical'" → LIT_"' <color={0}>(+{1})</color>'" → System_String__Format → LIT_"'\\n<color={0}>{1}:</color> {2}'" → LIT_"'#A3A08A'" → System_Text_StringBuilder__Append → LIT_"'hit'" → Newtonsoft_Json_Linq_JObject__get_Item → Newtonsoft_Json_Linq_JToken__op_Explicit → System_String__Format → LIT_"'\\n<color={0}>Accuracy:</color> {1:+0.##;-0.##}'" → LIT_"'#A3A08A'" → System_Text_StringBuilder__Append → TI_SparkDicaItem → SparkDicaItem__Inteiro → LIT_"'mp'" → LIT_"'MP Consume'" → LIT_"' <color={0}>(+{1})</color>'" → System_String__Format → LIT_"'\\n<color={0}>{1}:</color> {2}'" → LIT_"'#A3A08A'" → System_Text_StringBuilder__Append → SparkDicaItem__Inteiro → LIT_"'ss'" → TI_SparkDicaItem → SparkDicaItem__Inteiro → LIT_"'sps'" → TI_SparkDicaItem → SparkDicaItem__Inteiro → LIT_"'ss'" → SparkDicaItem__Inteiro → LIT_"'sps'" → System_String__Format → LIT_"'\\n<color={0}>Soulshot / Spiritshot:</color

## SparkDicaItem__Augments
TI_SparkDicaItem → UnityEngine_Application__get_streamingAssetsPath → System_IO_Path__Combine → LIT_"'Data/Meta/Augments_Infinity.json'" → SparkDados__Existe → SparkDados__LerTexto → TI_SparkDicaItem

## SparkDicaItem__BonusAtaque
TI_SparkDicaItem

## SparkDicaItem__BonusDefesa
TI_SparkDicaItem

## SparkDicaItem__BonusMagia
TI_SparkDicaItem

## SparkDicaItem__DadosServidor
TI_SparkDicaItem → UnityEngine_Application__get_streamingAssetsPath → System_IO_Path__Combine → LIT_"'Data/Meta/Itens_Infinity.json'" → SparkDados__Existe → Newtonsoft_Json_Linq_JObject___ctor → SparkDados__LerTexto → TI_SparkDicaItem → System_Int32__ToString → Newtonsoft_Json_Linq_JObject__get_Item

## SparkDicaItem__Descricao
System_String__IsNullOrWhiteSpace → System_String__Concat → LIT_"'\\n\\n<color=#C9C4B0>'" → LIT_"'</color>'" → System_Text_StringBuilder__Append

## SparkDicaItem__Divide


## SparkDicaItem__Efeito
SkillNameTable__get_Instance → SkillNameTable__GetName → System_String__IsNullOrWhiteSpace → LIT_"'none'" → SkillNameTable__get_Instance → SkillNameTable__GetName → System_Int32__ToString → System_String__Concat → LIT_"'Skill '" → System_String__Replace → LIT_"'%%'" → LIT_"'%'" → LIT_"'#7A7768'" → LIT_"'#9BE36B'" → LIT_"'\\n<color='" → LIT_"'>'" → LIT_"': '" → LIT_"'</color>'" → System_String__Concat → System_Text_StringBuilder__Append

## SparkDicaItem__EhLinhaDeTipo
System_String__StartsWith → LIT_"'<color=#A3A08A>'" → System_String__EndsWith → LIT_"'</color>'" → System_String__Contains → LIT_"':</color>'" → System_String__Contains → LIT_"'['"

## SparkDicaItem__GrauDaArma
TI_SparkDicaItem → SparkDicaItem__DadosServidor → Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'g'" → Newtonsoft_Json_Linq_JToken__op_Explicit → TI_SparkDicaItem → LIT_"''" → System_String__ToLowerInvariant → LIT_"'d'" → LIT_"'c'" → LIT_"'b'" → LIT_"'a'" → LIT_"'s'" → ItemTable__get_Instance → ItemTable__GetWeapon → Weapon__get_Weapongrp

## SparkDicaItem__GrauDoItem
TI_SparkDicaItem → SparkDicaItem__DadosServidor → Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'g'" → Newtonsoft_Json_Linq_JToken__op_Explicit → TI_SparkDicaItem → LIT_"''" → System_String__ToLowerInvariant → LIT_"'d'" → LIT_"'c'" → LIT_"'b'" → LIT_"'a'" → LIT_"'s'"

## SparkDicaItem__Grau
LIT_"''" → System_String__ToLowerInvariant → LIT_"'d'" → LIT_"'c'" → LIT_"'b'" → LIT_"'a'" → LIT_"'s'"

## SparkDicaItem__Inteiro
Newtonsoft_Json_Linq_JObject__get_Item → Newtonsoft_Json_Linq_JToken__op_Explicit

## SparkDicaItem__LinhaDecimal
System_String__Format → LIT_"'\\n<color={0}>{1}:</color> {2:0.#}'" → LIT_"'#A3A08A'" → System_Text_StringBuilder__Append

## SparkDicaItem__Linha
LIT_"' <color={0}>(+{1})</color>'" → System_String__Format → LIT_"'\\n<color={0}>{1}:</color> {2}'" → LIT_"'#A3A08A'" → System_Text_StringBuilder__Append → System_String__Format → LIT_"' <color={0}>(+{1})</color>'" → LIT_"'#6FC3FF'" → System_Text_StringBuilder__Append

## SparkDicaItem__LinhasAugment
MR_System.Collections.Generic.List<string>..ctor → TI_SparkDicaItem → UnityEngine_Application__get_streamingAssetsPath → System_IO_Path__Combine → LIT_"'Data/Meta/Augments_Infinity.json'" → SparkDados__Existe → SparkDados__LerTexto → TI_SparkDicaItem → Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'stats'" → System_Int32__ToString → Newtonsoft_Json_Linq_JArray__GetEnumerator → Newtonsoft_Json_Linq_JToken__op_Explicit → TI_SparkDicaItem → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → Newtonsoft_Json_Linq_JToken__op_Explicit → System_String__Format → LIT_"'{0} +{1:0.##}'" → MR_System.Collections.Generic.List<string>.Add → Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'skills'" → System_Int32__ToString → Newtonsoft_Json_Linq_JToken__op_Explicit → SkillNameTable__get_Instance → SkillNameTable__GetName → System_Int32__ToString → System_String__Concat → LIT_"'Skill '" → System_String__Replace → LIT_"'Item Skill: '" → LIT_"''" → Newtonsoft_Json_Linq_JContainer__get_Count → LIT_"''" → Newtonsoft_Json_Linq_JToken__op_Explicit → System_String__Concat → LIT_"': '"

## SparkDicaItem__LugarArmadura
LIT_"'Necklace'" → LIT_"'Head'" → LIT_"'Gloves'" → LIT_"'Upper Body'" → LIT_"'Lower Body'" → LIT_"'Boots'" → LIT_"'Shield'" → LIT_"'Upper and Lower Body'" → LIT_"'Ring'" → LIT_"''" → LIT_"'Earring'"

## SparkDicaItem__LugarDoServidor
LIT_"'Shield'" → LIT_"''" → System_String__ToLowerInvariant → LIT_"'rhand'" → LIT_"''" → LIT_"'One-Handed'" → LIT_"'face'" → LIT_"'Hair Accessory'" → LIT_"''" → LIT_"'legs'" → LIT_"'Lower Body'" → LIT_"'underwear'" → LIT_"'Underwear'" → LIT_"'head'" → LIT_"'Head'" → LIT_"'rfinger,lfinger'" → LIT_"'Ring'" → LIT_"'neck'" → LIT_"'Necklace'" → LIT_"'back'" → LIT_"'Cloak'" → LIT_"'chest'" → LIT_"''" → LIT_"'Upper Body'" → LIT_"''" → LIT_"'gloves'" → LIT_"''" → LIT_"'Gloves'" → LIT_"'fullarmor'" → LIT_"''" → LIT_"'Upper and Lower Body'" → LIT_"'dhair'" → LIT_"''" → LIT_"'rear,lear'" → LIT_"''" → LIT_"'Earring'" → LIT_"''" → LIT_"'lrhand'" → LIT_"''" → LIT_"'Two-Handed'" → LIT_"'feet'" → LIT_"''" → LIT_"'Boots'" → LIT_"'hair'" → LIT_"''" → LIT_"'Hair Accessory'" → LIT_"''"

## SparkDicaItem__ManaDaSombra
TI_SparkDicaItem → SparkDicaItem__Inteiro → LIT_"'dur'" → LIT_"'#B09B79'" → LIT_"'#FF0000'" → System_Text_StringBuilder__Append → LIT_"'\\n\\n<color=#FFFFFF><noparse><Shadow Item Info></noparse>..." → System_String__Format → LIT_"'\\n<color=#A3A3A3>Remaining Mana/Total Mana:</color><colo..." → System_Text_StringBuilder__Append → LIT_"'\\n<color=#FFFFFF>Unable to Trade/Drop</color>'"

## SparkDicaItem__MontaSet
TI_SparkDicaItem → UnityEngine_Application__get_streamingAssetsPath → System_IO_Path__Combine → LIT_"'Data/Meta/Sets_Infinity.json'" → SparkDados__Existe → Newtonsoft_Json_Linq_JArray___ctor → SparkDados__LerTexto → TI_SparkDicaItem → Newtonsoft_Json_Linq_JArray__GetEnumerator → Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'chest'" → Newtonsoft_Json_Linq_JToken__op_Explicit → MR_System.Collections.Generic.Dictionary<int,int>..ctor → UnityEngine_Object__op_Inequality → MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator → Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'legs'" → Newtonsoft_Json_Linq_JToken__op_Explicit → Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'legs'" → Newtonsoft_Json_Linq_JToken__op_Explicit → MR_System.Collections.Generic.List<ItemInstance>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<ItemInstance>.Dispose → System_Text_StringBuilder___ctor → TI_SparkDicaItem → Newtonsoft_Json_Linq_JObject__get_Item → Newtonsoft_Json_Linq_JToken__op_Explicit → ItemTable__get_Instance → ItemTable__GetItem → System_Int32__ToString → System_String__Concat → LIT_"'Item '" → LIT_"'\\n  <color='" → LIT_"'#7A7768'" → LIT_"'#9BE36B'" → LIT_"'>'" → LIT_"'</color>'" → System_String__Concat → System_Text_StringBuilder__Append → SkillNameTable__get_Instance → LIT_"'Set'" → Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'skill'" → Newtonsoft_Json_Linq_JToken__op_Explicit → SkillNameTable__GetName → System_String__Concat → LIT_"'\\n\\n<color=#F2D37A>'" → LIT_"'</color>'" → System_Text_StringBuilder__Append → Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'skill'" → Newtonsoft_Json_Linq_JToken__op_Explicit → TI_SparkDicaItem → SparkDicaItem__Efeito → LIT_"'Set Effect'" → Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'shield'" → Newtonsoft_Json_Linq_JToken__op_Explicit → Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'shieldSkill'" → Newtonsoft_Json_Linq_JToken__op_Explicit → Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'shieldSkill'" → Newtonsoft_Json_Linq_JToken__op_Explicit → Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'shield'" → Newtonsoft_Json_Linq_JToken__op_Explicit → MR_System.Collections.Generic.Dictionary<int,int>.ContainsKey → TI_SparkDicaItem → SparkDicaItem__Efeito → Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'enchant6'" → Newtonsoft_Json_Linq_JToken__op_Explicit → Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'enchant6'" → Newtonsoft_Json_Linq_JToken__op_Explicit → TI_SparkDicaItem → SparkDicaItem__Efeito → LIT_"'+6 Effect'"

## SparkDicaItem__MontaSimples
LIT_"' <color={0}>({1:n0})</color>'" → System_Text_StringBuilder___ctor → TI_SparkDicaItem → SparkDicaItem__DadosServidor → System_String__Concat → LIT_"'<color=#E8D4A0>'" → LIT_"'</color>'" → System_Text_StringBuilder__Append → System_String__Format → LIT_"' <color={0}>({1:n0})</color>'" → LIT_"'#A3A08A'" → System_Text_StringBuilder__Append → LIT_"''" → Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'t'" → Newtonsoft_Json_Linq_JToken__op_Explicit → TI_SparkDicaItem → SparkDicaItem__TipoComum → System_String__Concat → LIT_"'\\n<color=#A3A08A>'" → LIT_"'</color>'" → System_Text_StringBuilder__Append → TI_SparkDicaItem → SparkDicaItem__Inteiro → LIT_"'w'" → System_String__Format → LIT_"'\\n<color={0}>Weight:</color> {1}'" → LIT_"'#A3A08A'" → System_Text_StringBuilder__Append → TI_SparkDicaItem → System_String__IsNullOrWhiteSpace → System_String__Concat → LIT_"'\\n\\n<color=#C9C4B0>'" → LIT_"'</color>'" → System_Text_StringBuilder__Append

## SparkDicaItem__Monta
System_Text_StringBuilder___ctor → TI_SparkDicaItem → SparkDicaItem__DadosServidor → Newtonsoft_Json_Linq_JObject__get_Item → LIT_"'g'" → Newtonsoft_Json_Linq_JToken__op_Explicit → TI_SparkDicaItem → SparkDicaItem__Grau → System_String__Format → LIT_"'<color={0}>+{1}</color> '" → LIT_"'#FFB84D'" → System_Text_StringBuilder__Append → TI_SparkDicaItem → SparkDicaItem__TituloComNivel → System_Text_StringBuilder__Append → System_String__IsNullOrWhiteSpace → System_String__Concat → LIT_"' <color=#7FE0C8>'" → LIT_"'</color>'" → System_Text_StringBuilder__Append → TI_SparkDicaItem → System_Enum__ToString → System_String__ToUpper → System_String__Concat → LIT_"'-Grade'" → System_String__Concat → LIT_"'  <color=#A3A08A>['" → LIT_"']</color>'" → System_Text_StringBuilder__Append → TI_SparkDicaItem → SparkDicaItem__AtributosDoCliente → TI_SparkDicaItem → SparkDicaItem__AtributosDoServidor → TI_SparkDicaItem → SparkDicaItem__LinhasAugment → System_Text_StringBuilder__Append → LIT_"'\\n\\n<color=#D88FFF>Augment Effects</color>'" → MR_System.Collections.Generic.List<string>.GetEnumerator → MR_System.Collections.Generic.List<string>.MoveNext → System_String__Concat → LIT_"'\\n<color=#D88FFF>  '" → LIT_"'</color>'" → System_Text_StringBuilder__Append → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<string>.Dispose → TI_SparkDicaItem → SparkDicaItem__MontaSet → TI_SparkDicaItem → SparkDicaItem__Inteiro → LIT_"'dur'" → LIT_"'#B09B79'" → LIT_"'#FF0000'" → System_Text_StringBuilder__Append → LIT_"'\\n\\n<color=#FFFFFF><noparse><Shadow Item Info></noparse>..." → System_String__Format → LIT_"'\\n<color=#A3A3A3>Remaining Mana/Total Mana:</color><colo..." → System_Text_StringBuilder__Append → LIT_"'\\n<color=#FFFFFF>Unable to Trade/Drop</color>'" → System_String__IsNullOrWhiteSpace → System_String__Concat → LIT_"'\\n\\n<color=#C9C4B0>'" → LIT_"'</color>'" → System_Text_StringBuilder__Append

## SparkDicaItem__NomeGrau
System_Enum__ToString → System_String__ToUpper → System_String__Concat → LIT_"'-Grade'"

## SparkDicaItem__Real
Newtonsoft_Json_Linq_JObject__get_Item → Newtonsoft_Json_Linq_JToken__EnsureValue → MR_System.Array.IndexOf<Newtonsoft.Json.Linq.JTokenType> → System_Numerics_BigInteger__op_Explicit → System_Globalization_CultureInfo__get_InvariantCulture → Newtonsoft_Json_Linq_JToken__GetType → LIT_"'Can not convert {0} to Single.'" → Newtonsoft_Json_Utilities_StringUtils__FormatWith → System_ArgumentException___ctor → MD_Newtonsoft.Json.Linq.JToken.op_Explicit

## SparkDicaItem__Sets
TI_SparkDicaItem → UnityEngine_Application__get_streamingAssetsPath → System_IO_Path__Combine → LIT_"'Data/Meta/Sets_Infinity.json'" → SparkDados__Existe → Newtonsoft_Json_Linq_JArray___ctor → SparkDados__LerTexto → TI_SparkDicaItem

## SparkDicaItem__TipoArma
LIT_"''" → System_String__ToLowerInvariant → LIT_"'sword'" → LIT_"'Sword'" → LIT_"'pole'" → LIT_"'Polearm'" → LIT_"'bow'" → LIT_"'Bow'" → LIT_"'dagger'" → LIT_"'Dagger'" → LIT_"'etc'" → LIT_"'Etc'" → LIT_"'bigblunt'" → LIT_"'Two-Handed Blunt'" → LIT_"'fist'" → LIT_"'Fist'" → LIT_"'dual'" → LIT_"'Dual Swords'" → LIT_"'bigsword'" → LIT_"'Two-Handed Sword'" → LIT_"'blunt'" → LIT_"'Blunt'" → LIT_"'dualfist'" → LIT_"'Dual Fists'" → LIT_"''"

## SparkDicaItem__TipoArmadura
LIT_"''" → System_String__ToLowerInvariant → LIT_"'light'" → LIT_"'Light Armor'" → LIT_"'heavy'" → LIT_"'Heavy Armor'" → LIT_"'magic'" → LIT_"''" → LIT_"'Robe'"

## SparkDicaItem__TipoComum
LIT_"''" → System_String__ToLowerInvariant → LIT_"'lure'" → LIT_"'Lure'" → LIT_"'pet_collar'" → LIT_"'Pet Collar'" → LIT_"'quest'" → LIT_"'Quest Item'" → LIT_"'herb'" → LIT_"'Herb'" → LIT_"'seed'" → LIT_"'Seed'" → LIT_"'race_ticket'" → LIT_"'Race Ticket'" → LIT_"'arrow'" → LIT_"'Arrow'" → LIT_"'shot'" → LIT_"'Shot'" → LIT_"'spellbook'" → LIT_"'Spellbook'" → LIT_"'potion'" → LIT_"'Potion'" → LIT_"'material'" → LIT_"'Material'" → LIT_"'scroll'" → LIT_"'Scroll'" → LIT_"'money'" → LIT_"'Currency'" → LIT_"'castle_guard'" → LIT_"'Mercenary'" → LIT_"'recipe'" → LIT_"'Recipe'" → LIT_"'dye'" → LIT_"'Dye'" → LIT_"''"

## SparkDicaItem__TiraGrau
TI_SparkDicaItem → LIT_"''" → TI_SparkDicaItem → System_Text_RegularExpressions_Regex__Match → System_String__Remove → System_Text_RegularExpressions_Capture__ToString → System_Globalization_CultureInfo__get_InvariantCulture

## SparkDicaItem__TituloComNivel
LIT_"'^(.*?)\\\\s*(Level\\\\s+(\\\\d+))\\\\s*$'" → System_Text_RegularExpressions_Regex__Match → LIT_"'^(.*?)\\\\s*(Level\\\\s+(\\\\d+))\\\\s*$'" → LIT_"'<color=#E8D4A0>'" → LIT_"'</color>'" → LIT_"'<color=#E8D4A0>'" → LIT_"'</color>'" → System_IndexOutOfRangeException___ctor → MD_System.String.FillStringChecked → System_IndexOutOfRangeException___ctor → MD_System.String.FillStringChecked → LIT_"'<color=#E8D4A0>'" → LIT_"'</color>'" → System_IndexOutOfRangeException___ctor → MD_System.String.FillStringChecked → System_IndexOutOfRangeException___ctor → MD_System.String.FillStringChecked → System_IndexOutOfRangeException___ctor → MD_System.String.FillStringChecked → System_Text_RegularExpressions_Capture__ToString → System_Int32__Parse → TI_SparkDicaItem → LIT_"'<color=#E8D4A0>'" → System_Text_RegularExpressions_Capture__ToString → LIT_"'</color> <color='" → LIT_"'>'" → System_Text_RegularExpressions_Capture__ToString → LIT_"'</color>'" → LIT_"'values'" → System_ArgumentNullException___ctor → MD_System.String.Concat → System_OutOfMemoryException___ctor → MD_System.String.Concat → System_String__Concat → System_IndexOutOfRangeException___ctor → MD_System.String.FillStringChecked

## SparkDicaItem___cctor
LIT_"'\\\\s*<color=#A3A08A>\\\\[([DCBAS])-Grade\\\\]</color>'" → MR_System.Collections.Generic.Dictionary<string,string>..ctor → LIT_"'pDef'" → LIT_"'P. Def.'" → MR_System.Collections.Generic.Dictionary<string,string>.Add → LIT_"'mDef'" → LIT_"'M. Def.'" → MR_System.Collections.Generic.Dictionary<string,string>.Add → LIT_"'maxHp'" → LIT_"'Max HP'" → MR_System.Collections.Generic.Dictionary<string,string>.Add → LIT_"'maxMp'" → LIT_"'Max MP'" → MR_System.Collections.Generic.Dictionary<string,string>.Add → LIT_"'maxCp'" → LIT_"'Max CP'" → MR_System.Collections.Generic.Dictionary<string,string>.Add → LIT_"'pAtk'" → LIT_"'P. Atk.'" → MR_System.Collections.Generic.Dictionary<string,string>.Add → LIT_"'mAtk'" → LIT_"'M. Atk.'" → MR_System.Collections.Generic.Dictionary<string,string>.Add → LIT_"'regHp'" → LIT_"'HP Recovery'" → MR_System.Collections.Generic.Dictionary<string,string>.Add → LIT_"'regMp'" → LIT_"'MP Recovery'" → MR_System.Collections.Generic.Dictionary<string,string>.Add → LIT_"'regCp'" → LIT_"'CP Recovery'" → MR_System.Collections.Generic.Dictionary<string,string>.Add → LIT_"'rEvas'" → LIT_"'Evasion'" → MR_System.Collections.Generic.Dictionary<string,string>.Add → LIT_"'accCombat'" → LIT_"'Accuracy'" → MR_System.Collections.Generic.Dictionary<string,string>.Add → LIT_"'rCrit'" → LIT_"'Critical'" → MR_System.Collections.Generic.Dictionary<string,string>.Add → LIT_"'STR'" → MR_System.Collections.Generic.Dictionary<string,string>.Add → LIT_"'CON'" → MR_System.Collections.Generic.Dictionary<string,string>.Add → LIT_"'INT'" → MR_System.Collections.Generic.Dictionary<string,string>.Add → LIT_"'MEN'" → MR_System.Collections.Generic.Dictionary<string,string>.Add → TI_SparkDicaItem

## SparkDropWindow__Awake
TI_SparkDropWindow → UnityEngine_Object__op_Equality → TI_SparkDropWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SparkDropWindow__BuildWindow
TI_SparkDropWindow.<BuildWindow>d__36 → Gear__UpdateWeaponType

## SparkDropWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## SparkDropWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkRefinoWindow/SparkRefinoWindow'"

## SparkDropWindow__Mostra
MR_System.Collections.Generic.List<SparkDropWindow.Item>.AddRange → LIT_"'Drop list'"

## SparkDropWindow__OnDestroy
TI_SparkDropWindow → UnityEngine_Object__op_Equality → TI_SparkDropWindow

## SparkDropWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## SparkDuelo__Esconde
TI_SparkDuelo → UnityEngine_UIElements_VisualElement__RemoveFromHierarchy → TI_SparkDuelo → System_Array__Clear

## SparkEmissoresDoMapa__Awake
TI_SparkArte → LIT_"'Data/Effects/spark_emissores_mapa'" → MR_SparkArte.Load<UnityEngine.TextAsset> → UnityEngine_Object__op_Inequality → UnityEngine_TextAsset__ToString → MR_UnityEngine.JsonUtility.FromJson<SparkEmissoresDoMapa.Arquivo> → TI_SparkEmissoresDoMapa → MR_System.Collections.Generic.List<SparkEmissoresDoMapa.Lugar>.GetEnumerator → MR_System.Collections.Generic.List<SparkEmissoresDoMapa.Lugar>.MoveNext → TI_SparkEmissoresDoMapa → SparkEmissoresDoMapa__Perto → SparkEmissoresDoMapa__Junta → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkEmissoresDoMapa.Lugar>.Dispose → TI_SparkEmissoresDoMapa → System_Array__Clear

## SparkEmissoresDoMapa__Update
GameManager__get_CameraDoJogo → UnityEngine_Object__op_Equality → UnityEngine_Component__get_transform → UnityEngine_Transform__get_position → UnityEngine_Object__op_Equality → UnityEngine_Object__op_Inequality → UnityEngine_Object__Destroy → SparkEmissoresDoMapa__Acende

## SparkEnchantAugmentWp__Awake
TI_SparkEnchantAugmentWp → SparkAjusteJson__Carrega → LIT_"'Data/Effects/spark_enchant_augment_wp'" → SparkEnchantAugmentWp__Completa → TI_SparkAjusteEfeitos

## SparkEnchantAugmentWp__OnValidate
TI_SparkEnchantAugmentWp → TI_SparkAjusteEfeitos

## SparkEnchantInfinityWp__Awake
TI_SparkEnchantInfinityWp → SparkAjusteJson__Carrega → LIT_"'Data/Effects/spark_enchant_infinity_wp'" → SparkEnchantInfinityWp__Completa → TI_SparkAjusteEfeitos

## SparkEnchantInfinityWp__OnValidate
TI_SparkEnchantInfinityWp → TI_SparkAjusteEfeitos

## SparkEnchantNasArmas__Update
TI_SparkAjusteEfeitos → MR_System.Collections.Generic.Dictionary<UnityEngine.Transform,long>.Clear → TI_SparkDesempenho → SparkDesempenho__PosicaoDoJogador → System_Array__Clear → UnityEngine_Object__op_Inequality → SparkEnchantNasArmas__Considera → UnityEngine_Object__op_Inequality → TI_SparkDesempenho → MR_System.Collections.Generic.List<Entity>.GetEnumerator → MR_System.Collections.Generic.List<Entity>.MoveNext → SparkEnchantNasArmas__Considera → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<Entity>.Dispose → TI_SparkBotsArma → SparkBotsArma__get_Quantos → TI_SparkBotsArma → SparkBotsArma__get_Quantos → TI_SparkEnchantNasArmas.<>c → MD_SparkEnchantNasArmas.__c._Update_b__14_0 → TI_SparkEnchantNasArmas.<>c → MR_System.Collections.Generic.List<System.ValueTuple<Entity,float>>.Sort → MR_System.Collections.Generic.List<System.ValueTuple<Entity,float>>.RemoveRange → MR_System.Collections.Generic.HashSet<UnityEngine.Transform>.Clear → MR_System.Collections.Generic.List<System.ValueTuple<Entity,float>>.GetEnumerator → MR_System.Collections.Generic.List<System.ValueTuple<Entity,float>>.MoveNext → Entity__get_Gear → TI_SparkBrilhoEnchant → Entity__get_Gear → TI_SparkBrilhoEnchant → SparkEnchantNasArmas__Infinita → Entity__get_Gear → TI_SparkEnchantRetail → Entity__get_Gear → SparkEnchantNasArmas__AplicaAmaldicoada → Entity__get_Gear → SparkEnchantNasArmas__AplicaAmaldicoada → TI_SparkEnchantWp → SparkEnchantWp__get_A → TI_SparkEnchantRetail → SparkEnchantRetail__Conhece → SparkEnchantNasArmas__Augment → Entity__get_Gear → SparkEnchantNasArmas__Aplica → Entity__get_Gear → SparkEnchantNasArmas__Aplica → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<System.ValueTuple<Entity,float>>.Dispose → System_Array__Clear → MR_System.Collections.Generic.Dictionary<UnityEngine.Transform,long>.GetEnumerator → MR_System.Collections.Generic.Dictionary<UnityEngine.Transform,long>.MoveNext → MR_System.Collections.Generic.HashSet<UnityEngine.Transform>.Contains → MR_System.Collections.Generic.List<UnityEngine.Transform>.Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<UnityEngine.Transform,long>.Dispose → MR_System.Collections.Generic.List<UnityEngine.Transform>.GetEnumerator → MR_System.Collections.Generic.List<UnityEngine.Transform>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<UnityEngine.Transform>.Dispose → UnityEngine_Object__op_Inequality → TI_SparkBrilhoEnchant → SparkBrilhoEnchant__Aplica → WorldSpawner__get_Entidades → SparkEnchantNasArmas__Considera

## SparkEnchantRetail__MontaHeroi
MR_UnityEngine.Object.Instantiate<UnityEngine.GameObject> → LIT_"'Heroi'" → UnityEngine_Component__get_gameObject → UnityEngine_GameObject__get_layer → UnityEngine_GameObject__set_layer → UnityEngine_GameObject__get_transform → LIT_"'Invalid Vector3 index!'" → System_IndexOutOfRangeException___ctor → MD_UnityEngine.Vector3.set_Item → LIT_"'Invalid Vector3 index!'" → System_IndexOutOfRangeException___ctor → MD_UnityEngine.Vector3.set_Item → LIT_"'Invalid Vector3 index!'" → System_IndexOutOfRangeException___ctor → MD_UnityEngine.Vector3.set_Item → UnityEngine_Transform__set_localPosition → UnityEngine_GameObject__get_transform → LIT_"'Invalid Vector3 index!'" → System_IndexOutOfRangeException___ctor → MD_UnityEngine.Vector3.set_Item → LIT_"'Invalid Vector3 index!'" → System_IndexOutOfRangeException___ctor → MD_UnityEngine.Vector3.set_Item → UnityEngine_Quaternion__Internal_LookRotation → UnityEngine_Transform__set_localRotation → UnityEngine_GameObject__get_transform → UnityEngine_Transform__set_localScale → MR_UnityEngine.GameObject.GetComponent<SparkUE2Efeito> → TI_SparkEnchantRetail → SparkEnchantRetail__MaterialDo → UnityEngine_Object__op_Equality → TI_SparkEnchantRetail → SparkEnchantRetail__ConfiguraCurva → TI_System.Collections.Generic.List<SparkUE2Emissor> → MR_System.Collections.Generic.List<SparkUE2Emissor>..ctor → MR_System.Collections.Generic.List<SparkUE2Emissor>.GetEnumerator → MR_System.Collections.Generic.List<SparkUE2Emissor>.MoveNext → UnityEngine_Object__op_Inequality → UnityEngine_Material__GetTexture → LIT_"'_BaseMap'" → UnityEngine_Object__op_Equality → UnityEngine_Object__op_Inequality → UnityEngine_Mesh__get_bounds → TI_SparkEnchantRetail → System_String__Format → LIT_"' | lamina {0} deslocamento {1} comprimento {2:F1}'" → System_String__Concat → TI_SparkEnchantRetail → SparkUE2Emissor__Copia → System_String__Concat → LIT_"'-pulso'" → MR_System.Collections.Generic.List<SparkUE2Emissor>.Add → MR_System.Collections.Generic.List<UnityEngine.Vector2>..ctor → MR_System.Collections.Generic.List<UnityEngine.Vector2>.Add → UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkUE2Emissor>.Dispose → MR_System.Collections.Generic.List<SparkUE2Emissor>.AddRange → MR_System.Collections.Generic.List<SparkUE2Emissor>.GetEnumerator → MR_System.Collections.Generic.List<SparkUE2Emissor>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkUE2Emissor>.Dispose → UnityEngine_Object__op_Equality → UnityEngine_Mesh__get_isReadable → UnityEngine_Component__get_gameObject → TI_SparkEnchantRetail → SparkEnchantRetail__MalhaCurva

## SparkEnchantSkillWindow__Awake
TI_SparkEnchantSkillWindow → UnityEngine_Object__op_Equality → TI_SparkEnchantSkillWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SparkEnchantSkillWindow__BuildWindow
TI_SparkEnchantSkillWindow.<BuildWindow>d__48 → Gear__UpdateWeaponType

## SparkEnchantSkillWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## SparkEnchantSkillWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkRefinoWindow/SparkRefinoWindow'"

## SparkEnchantSkillWindow__MontaInfo
TI_SparkEstilo → SparkEstilo__Painel → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit → SparkEstilo__Espaco → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEnchantSkillWindow → SparkEnchantSkillWindow__Icone → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__Add → TI_SparkEnchantSkillWindow → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → SparkEnchantSkillWindow__Par → LIT_"'Success Rate'" → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit → SparkEstilo__Moldura → SparkEstilo__Espaco → TI_SparkEnchantSkillWindow → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.TextOverflow>.op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Requirements'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → SparkEnchantSkillWindow__Par → LIT_"'Req. XP'" → UnityEngine_UIElements_VisualElement__Add → SparkEnchantSkillWindow__Par → LIT_"'Required SP'" → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<

## SparkEnchantSkillWindow__MontaLista
TI_SparkEstilo → SparkEstilo__Painel → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → SparkEstilo__CabecalhoDeLista → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Enchantable skills'" → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Lista → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'There are no skills to enchant.'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add

## SparkEnchantSkillWindow__MostraPagina
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_SparkEstilo → SparkEstilo__Liga

## SparkEnchantSkillWindow__OnDestroy
TI_SparkEnchantSkillWindow → UnityEngine_Object__op_Equality → TI_SparkEnchantSkillWindow

## SparkEnchantSkillWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## SparkEnchantWindow__Abre
TI_NpcHtmlWindow → UnityEngine_Object__op_Inequality → TI_NpcHtmlWindow → SparkEnchant__Cancela → LIT_"''" → SparkEnchantWindow__Atualiza

## SparkEnchantWindow__Awake
TI_SparkEnchantWindow → UnityEngine_Object__op_Equality → TI_SparkEnchantWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SparkEnchantWindow__BuildWindow
TI_SparkEnchantWindow.<BuildWindow>d__39 → Gear__UpdateWeaponType

## SparkEnchantWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed → SparkEnchant__Cancela → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → SparkEnchantWindow__TerminaEfeito → MD_SparkEnchantWindow._HideWindow_b__38_0 → TI_SparkForjaEfeitos → SparkForjaEfeitos__Fecha

## SparkEnchantWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkRefinoWindow/SparkRefinoWindow'"

## SparkEnchantWindow__MontaLista
LIT_"'  <color=#A0A0A0>(equipped)</color>'" → MR_System.Collections.Generic.List<ItemInstance>..ctor → UnityEngine_Object__op_Inequality → MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator → MR_System.Collections.Generic.List<ItemInstance>.MoveNext → SparkEnchant__GrauDoScroll → TI_SparkDicaItem → SparkDicaItem__GrauDoItem → SparkEnchant__ScrollDeArma → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<ItemInstance>.Dispose → System_Text_StringBuilder___ctor → System_Text_StringBuilder__Append → MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator → MR_System.Collections.Generic.List<ItemInstance>.MoveNext → System_Text_StringBuilder__Append → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<ItemInstance>.Dispose → UnityEngine_UIElements_VisualElement__Clear → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'You have no item this scroll can enchant.'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator → MR_System.Collections.Generic.List<ItemInstance>.MoveNext → TI_SparkEnchantWindow.<>c__DisplayClass52_0 → Gear__UpdateWeaponType → TI_SparkForjaEfeitos → SparkForjaEfeitos__LinhaAlternada → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → SparkEstilo__Moldura → UnityEngine_UIElements_VisualElement__get_style → IconTable__get_Instance → IconTable__GetIcon → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__Add → SparkUI__NomeDoItem → System_String__Format → LIT_"'<color=#FFDD8C>+{0}</color> {1}'" → System_String__Concat → LIT_"'  <color=#A0A0A0>(equipped)</color>'" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_SparkForjaEfeitos → SparkForjaEfeitos__Marca → SparkUI__NomeDoItem → TI_SparkDicaItem → SparkDicaItem__Monta → TI_TooltipManipulator → TooltipManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_SparkEnchantWindow.__c__DisplayClass52_0._MontaLista_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → UnityEngine_UIElements_VisualElement__Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<ItemInstance>.

## SparkEnchantWindow__OnDestroy
TI_SparkEnchantWindow → UnityEngine_Object__op_Equality → TI_SparkEnchantWindow → MD_SparkEnchantWindow.Abre → SparkEnchant__remove_Abrir → MD_SparkEnchantWindow.AlvoAceito → SparkEnchant__remove_AlvoAceito → MD_SparkEnchantWindow.Resultado → TI_SparkEnchant → System_Delegate__Remove → TI_SparkEnchant

## SparkEnchantWindow__Scroll
UnityEngine_Object__op_Equality → MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator → MR_System.Collections.Generic.List<ItemInstance>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<ItemInstance>.Dispose → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<ItemInstance>.Dispose

## SparkEnchantWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → L2GameUI__WindowOpened → TI_SparkForjaEfeitos → SparkForjaEfeitos__Abre

## SparkEnchantWpExc__Awake
TI_SparkEnchantWpExc → SparkAjusteJson__Carrega → LIT_"'Data/Effects/spark_enchant_wp_exc'" → SparkEnchantWpExc__Completa → TI_SparkAjusteEfeitos

## SparkEnchantWpExc__OnValidate
TI_SparkEnchantWpExc → TI_SparkAjusteEfeitos

## SparkEnchantWp__Awake
TI_SparkEnchantWp → SparkAjusteJson__Carrega → LIT_"'Data/Effects/spark_enchant_wp'" → SparkEnchantWp__Completa → TI_SparkAjusteEfeitos

## SparkEnchantWp__OnValidate
TI_SparkEnchantWp → TI_SparkAjusteEfeitos

## SparkEnchant__GrauDoScroll


## SparkEnchant__ScrollDeArma


## SparkEstilo__Abas
TI_SparkEstilo.<>c__DisplayClass31_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → SparkEstilo__Textura → LIT_"'Tab/Tab_DF_Bg_line'" → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.ScaleMode>.op_Implicit → UnityEngine_UIElements_VisualElement__Add → MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Label>>..ctor → MD_SparkEstilo.__c__DisplayClass31_0._Abas_b__0 → TI_SparkEstilo.<>c__DisplayClass31_1 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → TI_SparkEstilo → SparkEstilo__Fatia → UnityEngine_UIElements_VisualElement__get_style → SparkEstilo__Textura → LIT_"'Tab/Tab_DF_Tab_Unselected'" → UnityEngine_UIElements_StyleBackground__op_Implicit → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent> → MD_SparkEstilo.__c__DisplayClass31_1._Abas_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent> → MD_SparkEstilo.__c__DisplayClass31_1._Abas_b__2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_SparkEstilo.__c__DisplayClass31_1._Abas_b__3 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → UnityEngine_UIElements_VisualElement__Add → System_Linq_Expressions_Interpreter_InterpretedFrameInfo

## SparkEstilo__Borda
UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## SparkEstilo__Botao
TI_SparkEstilo.<>c__DisplayClass28_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_Button___ctor → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkEstilo → SparkEstilo__Borda → SparkEstilo__Fatia → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent> → MD_SparkEstilo.__c__DisplayClass28_0._Botao_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent> → MD_SparkEstilo.__c__DisplayClass28_0._Botao_b__2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_SparkEstilo.__c__DisplayClass28_0._Botao_b__3 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent> → MD_SparkEstilo.__c__DisplayClass28_0._Botao_b__4 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.AttachToPanelEvent> → MD_SparkEstilo.__c__DisplayClass28_0._Botao_b__5 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.AttachToPanelEvent> → MD_SparkEstilo.__c__DisplayClass28_0._Botao_g__Pinta_0 → UnityEngine_UIElements_VisualElement__set_userData → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → MD_SparkEstilo.__c__DisplayClass28_0._Botao_b__6 → UnityEngine_UIElements_Button__add_clicked → SparkEstilo___c__DisplayClass28_0___Botao_g__Pinta_0

## SparkEstilo__CabecalhoDeLista
UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → SparkEstilo__Textura → LIT_"'Clan/ListCTRL_DF_Decoration_Recorte'" → UnityEngine_UIElements_StyleBackground__op_Implicit → SparkEstilo__Fatia → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style

## SparkEstilo__Campo
SparkUI__Campo → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## SparkEstilo__Divisor
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → SparkEstilo__Textura → LIT_"'Party/Divider_DF_Ver'" → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.ScaleMode>.op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode

## SparkEstilo__Escolhida
LIT_"'spark-escolhida'" → MR_System.Collections.Generic.List<string>.get_Item → System_String__Equals

## SparkEstilo__Espaco
UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## SparkEstilo__Etiqueta
MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → SparkEstilo__Moldura → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit

## SparkEstilo__Fatia
UnityEngine_UIElements_VisualElement__get_style

## SparkEstilo__Fechar
TI_SparkEstilo.<>c__DisplayClass30_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → SparkEstilo__Textura → LIT_"'Frame/Frame_DF_Btn_Close/frames_df_btn_close'" → UnityEngine_UIElements_StyleBackground__op_Implicit → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent> → MD_SparkEstilo.__c__DisplayClass30_0._Fechar_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent> → MD_SparkEstilo.__c__DisplayClass30_0._Fechar_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_SparkEstilo.__c__DisplayClass30_0._Fechar_b__2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent> → MD_SparkEstilo.__c__DisplayClass30_0._Fechar_b__3 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent>

## SparkEstilo__Janela
UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → SparkEstilo__Textura → LIT_"'Windows/Windows_DF_Large_Bg_Darker'" → UnityEngine_UIElements_StyleBackground__op_Implicit → SparkEstilo__Fatia → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit

## SparkEstilo__Liga
UnityEngine_UIElements_VisualElement__get_userData → UnityEngine_UIElements_VisualElement__get_style

## SparkEstilo__Linha
TI_SparkEstilo.<>c__DisplayClass33_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent> → MD_SparkEstilo.__c__DisplayClass33_0._Linha_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent> → MD_SparkEstilo.__c__DisplayClass33_0._Linha_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>

## SparkEstilo__Lista
UnityEngine_UIElements_ScrollView___ctor → UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility → SparkUI__Rolagem → UnityEngine_UIElements_VisualElement__get_style

## SparkEstilo__Marca
UnityEngine_UIElements_VisualElement__RemoveFromClassList → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'spark-escolhida'" → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit

## SparkEstilo__Marcador
TI_SparkEstilo.<>c__DisplayClass38_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → MD_SparkEstilo.__c__DisplayClass38_0._Marcador_b__0 → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_SparkEstilo.__c__DisplayClass38_0._Marcador_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → MD_SparkEstilo.__c__DisplayClass38_0._Marcador_b__2 → MD_SparkEstilo.__c__DisplayClass38_0._Marcador_b__3

## SparkEstilo__Moldura
UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → SparkEstilo__Textura → LIT_"'Party/GroupBox_DF'" → UnityEngine_UIElements_StyleBackground__op_Implicit → SparkEstilo__Fatia

## SparkEstilo__Painel
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → SparkEstilo__Moldura

## SparkEstilo__Ponto
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__set_pickingMode

## SparkEstilo__Seletor
TI_SparkEstilo.<>c__DisplayClass39_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkEstilo → SparkEstilo__Moldura → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → MD_SparkEstilo.__c__DisplayClass39_0._Seletor_b__0 → SparkEstilo___c__DisplayClass39_0___Seletor_g__Seta_1 → LIT_"'24Hz_DF_ChannelControlBtn_Pre'" → UnityEngine_UIElements_VisualElement__Add → SparkEstilo___c__DisplayClass39_0___Seletor_g__Seta_1 → LIT_"'24Hz_DF_ChannelControlBtn_Next'" → UnityEngine_UIElements_VisualElement__Add → MD_SparkEstilo.__c__DisplayClass39_0._Seletor_b__2 → MD_SparkEstilo.__c__DisplayClass39_0._Seletor_b__3

## SparkEstilo__Texto
LIT_"''" → UnityEngine_UIElements_Label___ctor → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_Object__op_Inequality → TI_SparkArte → LIT_"'Data/UI/Assets/Font/tahoma'" → MR_SparkArte.Load<UnityEngine.Font> → TI_SparkEstilo → UnityEngine_UIElements_StyleFontDefinition___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.FontStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.TextOverflow>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleTextShadow__op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode

## SparkEstilo__Textura
TI_SparkEstilo → MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.TryGetValue → UnityEngine_Object__op_Equality → System_String__Concat → LIT_"'Data/UI/Assets/'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → TI_SparkEstilo → MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.set_Item

## SparkEstilo___cctor
TI_SparkEstilo → MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>..ctor → TI_SparkEstilo

## SparkFindWindow__Abre


## SparkFindWindow__Awake
TI_SparkFindWindow → UnityEngine_Object__op_Equality → TI_SparkFindWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SparkFindWindow__Botao
TI_SparkFindWindow.<>c__DisplayClass45_0 → Gear__UpdateWeaponType → TI_SparkArte → LIT_"'Data/UI/_Elements/Components/L2Button/L2Button'" → MR_SparkArte.Load<UnityEngine.UIElements.VisualTreeAsset> → UnityEngine_UIElements_VisualTreeAsset__Instantiate → LIT_"'L2Button'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button> → UnityEngine_UIElements_VisualElement__RemoveFromHierarchy → LIT_"'ButtonLabel'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → SparkFindWindow__Poe → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → MD_SparkFindWindow.__c__DisplayClass45_0._Botao_b__0 → UnityEngine_UIElements_Button__add_clicked

## SparkFindWindow__BuildWindow
TI_SparkFindWindow.<BuildWindow>d__31 → Gear__UpdateWeaponType

## SparkFindWindow__HideWindow
UnityEngine_Object__op_Inequality → L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## SparkFindWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkFindWindow/SparkFindWindow'"

## SparkFindWindow__OnDestroy
TI_SparkFindWindow → UnityEngine_Object__op_Equality → TI_SparkFindWindow

## SparkFindWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## SparkFps__Awake
TI_SparkFps

## SparkFps__Monta
UnityEngine_UIElements_Label___ctor → LIT_"''" → UnityEngine_UIElements_VisualElement__set_name → LIT_"'SparkFps'" → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__Add → SparkFps__Atualiza

## SparkFps__OnDestroy
TI_SparkFps → UnityEngine_Object__op_Equality → TI_SparkFps

## SparkFps__Update
SparkFps__PedePing → TI_SparkOpcoes → TI_SparkFps → System_Threading_Monitor__Enter → TI_SparkFps → SparkFps__Escreve

## SparkGmWindow__Awake
TI_SparkGmWindow → UnityEngine_Object__op_Equality → TI_SparkGmWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SparkGmWindow__Botao
TI_SparkEstilo → SparkEstilo__Botao → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## SparkGmWindow__BuildWindow
TI_SparkGmWindow.<BuildWindow>d__46 → AbstractEffectWindow__UpdateBuffTimers_d__24___ctor

## SparkGmWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## SparkGmWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkGmWindow/SparkGmWindow'"

## SparkGmWindow__MontaBusca
LIT_"'Click a result: items (with the amount) and skills go to..." → LIT_"'Items'" → LIT_"'NPCs'" → LIT_"'Skills'" → MD_SparkGmWindow._MontaBusca_b__57_0 → TI_SparkEstilo → SparkEstilo__Abas → TI_SparkGmWindow → SparkGmWindow__Linha → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkGmWindow__Campo → UnityEngine_UIElements_VisualElement__Add → MD_SparkGmWindow.Busca → SparkGmWindow__Botao → LIT_"'Search'" → UnityEngine_UIElements_VisualElement__Add → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.KeyDownEvent> → MD_SparkGmWindow._MontaBusca_b__57_1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.KeyDownEvent> → SparkGmWindow__Linha → SparkGmWindow__Rotulo → LIT_"'Amount'" → UnityEngine_UIElements_VisualElement__Add → SparkGmWindow__Campo → UnityEngine_UIElements_VisualElement__Add → LIT_"'1'" → SparkGmWindow__Rotulo → LIT_"'Skill lv'" → UnityEngine_UIElements_VisualElement__Add → SparkGmWindow__Campo → UnityEngine_UIElements_VisualElement__Add → LIT_"'1'" → UnityEngine_UIElements_VisualElement__Add → SparkGmWindow__Dica → LIT_"'Click a result: items (with the amount) and skills go to..." → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Lista → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add

## SparkGmWindow__MontaComandos
LIT_"'Free (auto cycle)'" → TI_SparkGmWindow → SparkGmWindow__Secao → LIT_"'PLAYER'" → UnityEngine_UIElements_VisualElement__Add → MD_SparkGmWindow._MontaComandos_b__48_0 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Go to'" → MR_System.ValueTuple<string,System.Action>..ctor → MD_SparkGmWindow._MontaComandos_b__48_1 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Recall'" → MR_System.ValueTuple<string,System.Action>..ctor → MD_SparkGmWindow._MontaComandos_b__48_2 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Send home'" → MR_System.ValueTuple<string,System.Action>..ctor → MD_SparkGmWindow._MontaComandos_b__48_3 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Info'" → MR_System.ValueTuple<string,System.Action>..ctor → SparkGmWindow__Botoes → UnityEngine_UIElements_VisualElement__Add → MD_SparkGmWindow._MontaComandos_b__48_4 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Heal'" → MR_System.ValueTuple<string,System.Action>..ctor → MD_SparkGmWindow._MontaComandos_b__48_5 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Revive'" → MR_System.ValueTuple<string,System.Action>..ctor → MD_SparkGmWindow._MontaComandos_b__48_6 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Kill'" → MR_System.ValueTuple<string,System.Action>..ctor → MD_SparkGmWindow._MontaComandos_b__48_7 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Skills'" → MR_System.ValueTuple<string,System.Action>..ctor → SparkGmWindow__Botoes → UnityEngine_UIElements_VisualElement__Add → MD_SparkGmWindow._MontaComandos_b__48_8 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Kick'" → MR_System.ValueTuple<string,System.Action>..ctor → MD_SparkGmWindow._MontaComandos_b__48_9 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Jail'" → MR_System.ValueTuple<string,System.Action>..ctor → MD_SparkGmWindow._MontaComandos_b__48_10 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Unjail'" → MR_System.ValueTuple<string,System.Action>..ctor → MD_SparkGmWindow._MontaComandos_b__48_11 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Chat ban'" → MR_System.ValueTuple<string,System.Action>..ctor → SparkGmWindow__Botoes → UnityEngine_UIElements_VisualElement__Add → MD_SparkGmWindow._MontaComandos_b__48_12 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Hero'" → MR_System.ValueTuple<string,System.Action>..ctor → MD_SparkGmWindow._MontaComandos_b__48_13 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Noble'" → MR_System.ValueTuple<string,System.Action>..ctor → MD_SparkGmWindow._MontaComandos_b__48_14 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'No karma'" → MR_System.ValueTuple<string,System.Action>..ctor → MD_SparkGmWindow._MontaComa

## SparkGmWindow__MontaJogador
LIT_"'Type a name (or target a player) and choose what to see.'" → MD_SparkGmWindow._MontaJogador_b__49_0 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Status'" → MR_System.ValueTuple<string,System.Action>..ctor → MD_SparkGmWindow._MontaJogador_b__49_1 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Inventory'" → MR_System.ValueTuple<string,System.Action>..ctor → MD_SparkGmWindow._MontaJogador_b__49_2 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Skills'" → MR_System.ValueTuple<string,System.Action>..ctor → MD_SparkGmWindow._MontaJogador_b__49_3 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Quests'" → MR_System.ValueTuple<string,System.Action>..ctor → TI_SparkGmWindow → SparkGmWindow__Botoes → UnityEngine_UIElements_VisualElement__Add → MD_SparkGmWindow._MontaJogador_b__49_4 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Warehouse'" → MR_System.ValueTuple<string,System.Action>..ctor → MD_SparkGmWindow._MontaJogador_b__49_5 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Go to'" → MR_System.ValueTuple<string,System.Action>..ctor → MD_SparkGmWindow._MontaJogador_b__49_6 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Recall'" → MR_System.ValueTuple<string,System.Action>..ctor → MD_SparkGmWindow._MontaJogador_b__49_7 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Info page'" → MR_System.ValueTuple<string,System.Action>..ctor → SparkGmWindow__Botoes → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → SparkEstilo__Divisor → UnityEngine_UIElements_VisualElement__Add → SparkGmWindow__Secao → LIT_"'TRACKING'" → UnityEngine_UIElements_VisualElement__Add → MD_SparkGmWindow._MontaJogador_b__49_8 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Track Player'" → MR_System.ValueTuple<string,System.Action>..ctor → MD_SparkGmWindow._MontaJogador_b__49_9 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Track Chat'" → MR_System.ValueTuple<string,System.Action>..ctor → MD_SparkGmWindow._MontaJogador_b__49_10 → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → LIT_"'Stop'" → MR_System.ValueTuple<string,System.Action>..ctor → TI_SparkGmWindow.<>c → LIT_"'Show log'" → TI_SparkGmWindow.<>c → MD_SparkGmWindow.__c._MontaJogador_b__49_11 → TI_SparkGmWindow.<>c → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → MR_System.ValueTuple<string,System.Action>..ctor → TI_SparkGmWindow → SparkGmWindow__Botoes → UnityEngine_UIElements_VisualElement__Add → SparkGmWindow__Linha → TI_SparkGmWindow → TI_SparkGmWindow.<>c__DisplayClass49_0 → SparkMapaWindow_Loja___ctor → MD_SparkGmWindow.__c__DisplayClass49_0._MontaJogador_b__12 → TI_SparkEstilo → SparkEstilo__Marcador → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_U

## SparkGmWindow__MontaQuest
TI_SparkGmWindow → SparkGmWindow__Linha → SparkGmWindow__Campo → UnityEngine_UIElements_VisualElement__Add → MD_SparkGmWindow.MostraQuests → SparkGmWindow__Botao → LIT_"'Search'" → UnityEngine_UIElements_VisualElement__Add → MD_SparkGmWindow._MontaQuest_b__68_0 → SparkGmWindow__Botao → LIT_"'Load player'" → UnityEngine_UIElements_VisualElement__Add → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.KeyDownEvent> → MD_SparkGmWindow._MontaQuest_b__68_1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.KeyDownEvent> → MD_SparkGmWindow._MontaQuest_b__68_2 → TI_SparkEstilo → SparkEstilo__Marcador → LIT_"'Only quests the player has'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → SparkGmWindow__Dica → LIT_"'Load player reads the quests of the name at the top. Pic..." → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Lista → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add

## SparkGmWindow__MostraCeu
TI_SparkOpcoes → LIT_"' - follows the game time.'" → TI_SparkOpcoes → LIT_"' - fixed; the game time keeps running.'" → System_String__Concat → LIT_"'Sky on your screen: '"

## SparkGmWindow__MostraClima
TI_SparkOpcoes → System_String__Concat → LIT_"'Weather on your screen: '" → LIT_"'.'"

## SparkGmWindow__MostraQuests
LIT_"'Type a name (or target a player) and press Load player.'" → TI_SparkGmWindow.<>c__DisplayClass72_0 → SparkMapaWindow_Loja___ctor → UnityEngine_UIElements_VisualElement__Clear → TI_SparkGmWindow → SparkGmWindow__LeServidor → LIT_"''" → TI_SparkGmQuest → TI_System.Collections.Generic.Dictionary<int,SparkGmQuest.Estado> → MR_System.Collections.Generic.Dictionary<int,SparkGmQuest.Estado>..ctor → MR_System.Collections.Generic.List<int>..ctor → TI_SparkGmWindow → TI_SparkQuests → SparkQuests__get_Todas → TI_SparkQuests → SparkQuests__get_Todas → MR_System.Collections.Generic.Dictionary<int,SparkQuests.Dados>.GetEnumerator → MR_System.Collections.Generic.Dictionary<int,SparkQuests.Dados>.MoveNext → MR_System.Collections.Generic.List<int>.Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<int,SparkQuests.Dados>.Dispose → TI_SparkGmWindow → MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<string,string>>.get_Keys → MR_System.Collections.Generic.List<int>.AddRange → LIT_"'Type a name (or target a player) and press Load player.'" → System_String__Concat → LIT_"'Press Load player to see '" → LIT_"\" → MD_SparkGmWindow.__c__DisplayClass72_0._MostraQuests_b__1 → TI_SparkGmQuest → MR_System.Collections.Generic.List<SparkGmQuest.Estado>.GetEnumerator → MR_System.Collections.Generic.List<SparkGmQuest.Estado>.MoveNext → MR_System.Collections.Generic.Dictionary<int,SparkGmQuest.Estado>.set_Item → MR_System.Collections.Generic.List<int>.Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkGmQuest.Estado>.Dispose → TI_SparkGmQuest → MR_System.Collections.Generic.List<SparkGmQuest.Estado>.GetEnumerator → MR_System.Collections.Generic.List<SparkGmQuest.Estado>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkGmQuest.Estado>.Dispose → TI_SparkGmQuest → System_String__Equals → TI_SparkGmQuest → System_String__Format → LIT_"\" → LIT_"''" → LIT_"'\\n<color=#E8C66A>The buttons act on '" → TI_SparkGmQuest → LIT_"' - press Load player for '" → LIT_"'.</color>'" → System_String__Concat → MD_SparkGmWindow.__c__DisplayClass72_0._MostraQuests_b__1 → MR_System.Collections.Generic.List<int>.Sort → LIT_"''" → System_Int32__TryParse → System_String__ToLowerInvariant → MR_System.Collections.Generic.List<int>.GetEnumerator → MR_System.Collections.Generic.List<int>.MoveNext → TI_SparkGmWindow → SparkGmWindow__NomeDaQuest → TI_SparkGmWindow → LIT_"''" → TI_SparkGmWindow → LIT_"''" → System_String__Concat → LIT_"' '" → TI_SparkGmWindow → System_String__ToLowerInvariant → System_String__Contains → System_String__ToLowerInvariant → System_String__Contains → SparkGmWindow__LinhaDeQuest → UnityEngine_UIElements_VisualElement__Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<int>.Dispose → System_String__Format → LIT_"'Showing the first {0} of {1} - type a name or an id to n..." → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_Visual

## SparkGmWindow__OnDestroy
TI_SparkGmWindow → UnityEngine_Object__op_Equality → TI_SparkGmWindow → MD_SparkGmWindow.Chegou → TI_SparkGmVer → SparkGmVer__remove_Chegou → MD_SparkGmWindow.QuestChegou → TI_SparkGmQuest → SparkGmQuest__remove_Chegou → MD_SparkGmWindow.MostraCeu → TI_SparkOpcoes → SparkOpcoes__remove_CeuMudou → MD_SparkGmWindow.MostraClima → TI_SparkOpcoes → System_Delegate__Remove → TI_SparkOpcoes

## SparkGmWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → L2GameUI__WindowOpened → UnityEngine_Object__op_Inequality → TargetManager__HasTarget → UnityEngine_Object__op_Inequality → LIT_"''"

## SparkGmWindow__ToggleHideWindow
TI_SparkVip

## SparkHennaWindow__Awake
TI_SparkHennaWindow → UnityEngine_Object__op_Equality → TI_SparkHennaWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SparkHennaWindow__BuildWindow
TI_SparkHennaWindow.<BuildWindow>d__23 → Gear__UpdateWeaponType

## SparkHennaWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## SparkHennaWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkHennaWindow/SparkHennaWindow'"

## SparkHennaWindow__MostraPrevia
LIT_"'You need {0} dyes (you have {1}).'" → LIT_"'   ({0}{1})'" → UnityEngine_UIElements_VisualElement__Clear → LIT_"''" → LIT_"'Select a symbol on the left.'" → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkHenna → SparkHenna__NomeOficial → SparkHenna__Nome → System_String__Concat → LIT_"'  <color=#7FE0C8>'" → LIT_"'</color>'" → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkHenna → SparkHenna__Valores → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → TI_SparkHenna → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → System_Int32__ToString → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'  →  '" → UnityEngine_UIElements_VisualElement__Add → System_Int32__ToString → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → LIT_"'   ({0}{1})'" → LIT_"'+'" → LIT_"''" → System_String__Format → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → TI_SparkHenna → SparkHenna__Info → SparkUI__NomeDoItem → System_String__Format → LIT_"'Cost: {0} x{1}  ·  {2:N0} Adena'" → TI_SparkHenna → UnityEngine_Object__op_Inequality → PlayerInventory__GetItemById → LIT_"'You need {0} dyes (you have {1}).'" → System_String__Format → TI_SparkHenna → LIT_"'You do not have enough Adena.'" → LIT_"'All symbol slots are in use. Remove a symbol first.'" → UnityEngine_UIElements_CallbackEventHandler__NotifyPropertyChanged → UnityEngine_UIElements_VisualElement__PropagateEnabledToChildren

## SparkHennaWindow__OnDestroy
TI_SparkHennaWindow → UnityEngine_Object__op_Equality → TI_SparkHennaWindow → MD_SparkHennaWindow.ListaChegou → TI_SparkHenna → SparkHenna__remove_ListaChegou → TI_System.Action<SparkHenna.Previa> → MD_SparkHennaWindow.PreviaChegou → SparkHenna__remove_PreviaChegou → MD_SparkHennaWindow.Redesenha → TI_SparkHenna → System_Delegate__Remove → TI_SparkHenna

## SparkHennaWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → L2GameUI__WindowOpened → LIT_"'({0})'" → UnityEngine_UIElements_VisualElement__Clear → TI_SparkHenna → System_String__Format → LIT_"'({0})'" → System_Int64__ToString → TI_SparkHenna → LIT_"'N0'" → TI_SparkHenna → MR_System.Collections.Generic.List<SparkHenna.Opcao>.GetEnumerator → MR_System.Collections.Generic.List<SparkHenna.Opcao>.MoveNext → TI_SparkHennaWindow.<>c__DisplayClass26_0 → Gear__UpdateWeaponType → TI_SparkEstilo → SparkEstilo__Linha → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → SparkEstilo__Moldura → UnityEngine_UIElements_VisualElement__get_style → TI_SparkHenna → SparkHenna__Icone → IconTable__get_Instance → IconTable__GetIcon → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_SparkHenna → SparkHenna__NomeOficial → SparkHenna__Nome → System_String__Concat → LIT_"'  <color=#7FE0C8>'" → LIT_"'</color>'" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → TI_SparkHenna → System_String__Format → LIT_"'Dye x{0}   ·   {1:N0} Adena'" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Marca → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_SparkHennaWindow.__c__DisplayClass26_0._Redesenha_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → UnityEngine_UIElements_VisualElement__Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkHenna.Opcao>.Dispose → UnityEngine_UIElements_VisualElement__Clear → TI_SparkHenna → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkEstilo → SparkEstilo__Ponto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → LIT_"'Empty slot'" → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_s

## SparkHtml_Bloco__Fecha
SparkHtml_Bloco__SoltaTexto

## SparkHtml_Bloco__Inteiro
SparkHtml_Bloco__SoltaTexto → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__Add

## SparkHtml_Bloco__Linha
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Wrap>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__Add

## SparkHtml_Bloco__Peca
SparkHtml_Bloco__SoltaTexto → SparkHtml_Bloco__Linha → UnityEngine_UIElements_VisualElement__Add

## SparkHtml_Bloco__Quebra
SparkHtml_Bloco__SoltaTexto → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add

## SparkHtml_Bloco__SoltaTexto
System_Text_StringBuilder__Clear → UnityEngine_UIElements_Label___ctor → UnityEngine_UIElements_TextElement__set_enableRichText → TI_SparkHtml → SparkHtml__Estilo → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → SparkHtml_Bloco__Linha → UnityEngine_UIElements_VisualElement__Add

## SparkHtml_Bloco__Texto
System_String__get_Chars → System_Text_StringBuilder__Append

## SparkHtml_Bloco___ctor
System_Text_StringBuilder___ctor → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit

## SparkHtml_Contexto___ctor
MR_System.Collections.Generic.Dictionary<string,System.Func<string>>..ctor

## SparkHtml_No__Attr
MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue

## SparkHtml_No___ctor
MR_System.Collections.Generic.Dictionary<string,string>..ctor → TI_System.Collections.Generic.List<SparkHtml.No> → MR_System.Collections.Generic.List<SparkHtml.No>..ctor

## SparkHtml__AjustaFonte
TI_SparkHtml.<>c__DisplayClass22_0 → Gear__UpdateWeaponType → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent> → MD_SparkHtml.__c__DisplayClass22_0._AjustaFonte_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.GeometryChangedEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## SparkHtml__BotaoDeLista
TI_SparkHtml.<>c__DisplayClass23_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkHtml_No__Attr → LIT_"'icon'" → LIT_"'NORMAL'" → System_String__ToUpperInvariant → LIT_"'QUEST'" → LIT_"'Quest'" → LIT_"'TELEPORT'" → LIT_"'Teleport'" → LIT_"'RETURN'" → LIT_"'Normal'" → LIT_"'Return'" → System_String__Concat → LIT_"'Data/UI/Assets/html/BTN_Icon_'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_Object__op_Inequality → LIT_"'QUEST'" → LIT_"'!'" → LIT_"'TELEPORT'" → LIT_"'◆'" → LIT_"'RETURN'" → LIT_"'▶'" → LIT_"'◀'" → UnityEngine_UIElements_Label___ctor → TI_SparkHtml → SparkHtml__Estilo → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → LIT_"'QUEST'" → LIT_"'TELEPORT'" → LIT_"'RETURN'" → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__Add → SparkHtml__RichInterno → LIT_"''" → UnityEngine_UIElements_Label___ctor → UnityEngine_UIElements_TextElement__set_enableRichText → TI_SparkHtml → SparkHtml__Estilo → UnityEngine_UIElements_VisualElement__get_style → TI_SparkHtml → UnityEngine_UIElements_StyleColo

## SparkHtml__Botao
TI_SparkHtml.<>c__DisplayClass21_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → LIT_"'ButtonLabel'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → SparkHtml_No__Attr → LIT_"'width'" → TI_SparkHtml → SparkHtml__Numero → SparkHtml_No__Attr → LIT_"'height'" → SparkHtml__Numero → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkHtml_No__Attr → LIT_"'value'" → TI_SparkHtml → SparkHtml__Entidades → TI_SparkHtml → TI_SparkHtml.<>c__DisplayClass22_0 → Gear__UpdateWeaponType → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent> → MD_SparkHtml.__c__DisplayClass22_0._AjustaFonte_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.GeometryChangedEvent> → SparkHtml_No__Attr → LIT_"'fore'" → LIT_"''" → System_String__ToLowerInvariant → System_String__Contains → LIT_"'prev'" → LIT_"'<'" → System_String__Contains → LIT_"'next'" → LIT_"''" → LIT_"'>'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkHtml_No__Attr → LIT_"'action'" → SparkHtml_No__Attr → LIT_"'msg'" → MD_SparkHtml.__c__DisplayClass21_0._Botao_b__0 → UnityEngine_UIElements_Button__add_clicked → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator

## SparkHtml__Campo
TI_SparkHtml.<>c__DisplayClass26_0 → Gear__UpdateWeaponType → SparkUI__Campo → SparkHtml_No__Attr → LIT_"'width'" → TI_SparkHtml → SparkHtml__Numero → SparkHtml_No__Attr → LIT_"'height'" → SparkHtml__Numero → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_TextField__set_multiline → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkHtml_No__Attr → LIT_"'type'" → System_String__Equals → LIT_"'number'" → MR_UnityEngine.UIElements.TextInputBaseField<string>.set_maxLength → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ChangeEvent<string>> → MD_SparkHtml.__c__DisplayClass26_0._Campo_b__0 → MR_UnityEngine.UIElements.INotifyValueChangedExtensions.RegisterValueChangedCallback<string> → SparkHtml_No__Attr → LIT_"'var'" → MD_SparkHtml.__c__DisplayClass26_0._Campo_b__1 → MR_System.Collections.Generic.Dictionary<string,System.Func<string>>.set_Item

## SparkHtml__Combo
TI_SparkHtml.<>c__DisplayClass27_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualTreeAsset__Instantiate → UnityEngine_UIElements_VisualElement__get_Item → MR_System.Collections.Generic.List<string>..ctor → SparkHtml_No__Attr → LIT_"'list'" → LIT_"''" → System_String__Split → MR_System.Collections.Generic.List<string>.Add → MR_UnityEngine.UIElements.PopupField<string>.set_index → LIT_"'width'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → TI_SparkHtml → SparkHtml__Numero → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → LIT_"'var'" → MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue → MD_SparkHtml.__c__DisplayClass27_0._Combo_b__0 → MR_System.Collections.Generic.Dictionary<string,System.Func<string>>.set_Item

## SparkHtml__Cor
System_String__TrimStart → System_String__Equals → LIT_"'LEVEL'" → LIT_"'FFC900'" → System_Text_RegularExpressions_Regex__IsMatch → LIT_"'^[0-9a-fA-F]{6}$'" → System_Globalization_CultureInfo__get_InvariantCulture → System_String__ToLowerInvariant → LIT_"'green'" → LIT_"'00FF00'" → LIT_"'yellow'" → LIT_"'FFFF00'" → LIT_"'red'" → LIT_"'FF0000'" → LIT_"'blue'" → LIT_"'0000FF'" → LIT_"'grey'" → LIT_"'white'" → LIT_"'FFFFFF'" → LIT_"'gray'" → LIT_"'808080'"

## SparkHtml__Desenha
TI_SparkHtml.<>c__DisplayClass14_0 → Gear__UpdateWeaponType → System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray → System_String__TrimStart → TI_SparkHtml → SparkHtml__Entidades → System_Text_RegularExpressions_Regex__Replace → LIT_"'[\\\\r\\\\n\\\\t]+'" → LIT_"' '" → System_String__Replace → LIT_"'<'" → LIT_"'<noparse><</noparse>'" → LIT_"'<color=#'" → LIT_"'>'" → LIT_"'</color>'" → System_String__Concat → System_Text_StringBuilder__Append → LIT_"'center'" → SparkHtml_Bloco__SoltaTexto → SparkHtml__Filhos → SparkHtml_Bloco__SoltaTexto → LIT_"'br1'" → LIT_"'font'" → SparkHtml_No__Attr → LIT_"'color'" → TI_SparkHtml → SparkHtml__Cor → LIT_"'br'" → SparkHtml_Bloco__Quebra → LIT_"'hr'" → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → SparkHtml_Bloco__Inteiro → LIT_"'button'" → LIT_"'icon'" → MR_System.Collections.Generic.Dictionary<string,string>.ContainsKey → SparkHtml__Botao → SparkHtml__BotaoDeLista → LIT_"'table'" → SparkHtml__Tabela → SparkHtml_Bloco__Inteiro → LIT_"'edit'" → SparkHtml__Campo → LIT_"'multiedit'" → SparkHtml__Campo → LIT_"'img'" → SparkHtml__Imagem → LIT_"'title'" → TI_SparkHtml → System_Text_StringBuilder___ctor → TI_SparkHtml → SparkHtml___TextoPuro_g__Anda_35_0 → SparkHtml__Entidades → LIT_"'combobox'" → SparkHtml__Combo → LIT_"'p'" → SparkHtml_Bloco__SoltaTexto → SparkHtml__Filhos → SparkHtml_Bloco__SoltaTexto → SparkHtml__Filhos → LIT_"'a'" → SparkHtml_No__Attr → LIT_"'action'" → TI_SparkHtml → SparkHtml__TemImagem → SparkHtml__RichInterno → System_String__Concat → LIT_"'<u>'" → LIT_"'</u>'" → UnityEngine_UIElements_Label___ctor → UnityEngine_UIElements_TextElement__set_enableRichText → TI_SparkHtml → SparkHtml__Estilo → TI_SparkHtml → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → SparkHtml_No__Attr → LIT_"'msg'" → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent> → MD_SparkHtml.__c__DisplayClass14_0._Desenha_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent> → MD_SparkHtml.__c__DisplayClass14_0._Desenha_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent> → MD_SparkHtml.__c__DisplayClass14_0._Desenha_b__2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent> → TI_ButtonClickSoundMan

## SparkHtml__Desenha
TI_SparkHtml → Gear__UpdateWeaponType

## SparkHtml__Entidades
LIT_"''" → TI_SparkHtml.<>c → LIT_"'&#(\\\\d+);'" → TI_SparkHtml.<>c → MD_SparkHtml.__c._Entidades_b__36_0 → TI_SparkHtml.<>c → System_Text_RegularExpressions_Regex__Replace → TI_SparkHtml.<>c → LIT_"'&\\\\$(\\\\d+);'" → TI_SparkHtml.<>c → MD_SparkHtml.__c._Entidades_b__36_1 → TI_SparkHtml.<>c → System_Text_RegularExpressions_Regex__Replace → System_String__Replace → LIT_"'&nbsp;'" → LIT_"' '" → System_String__Replace → LIT_"'&lt;'" → LIT_"'<'" → System_String__Replace → LIT_"'&gt;'" → LIT_"'>'" → System_String__Replace → LIT_"'&quot;'" → LIT_"'\" → LIT_"'&amp;'" → LIT_"'&'" → LIT_"'oldValue'" → System_ArgumentNullException___ctor → MD_System.String.Replace → LIT_"'oldValue'" → LIT_"'String cannot be of zero length.'" → System_ArgumentException___ctor → MD_System.String.Replace → MR_System.Collections.Generic.ValueListBuilder<int>..ctor → System_String__get_Chars → MR_System.Collections.Generic.ValueListBuilder<int>.Append → MR_System.Collections.Generic.ValueListBuilder<int>.AsSpan → System_String__ReplaceHelper → MR_System.Collections.Generic.ValueListBuilder<int>.Dispose

## SparkHtml__Estilo
UnityEngine_UIElements_VisualElement__get_style → TI_SparkArte → LIT_"'Data/UI/Assets/Font/tahoma'" → MR_SparkArte.Load<UnityEngine.Font> → UnityEngine_UIElements_StyleFontDefinition___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkHtml → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## SparkHtml__Filhos
MR_System.Collections.Generic.List<SparkHtml.No>.GetEnumerator → MR_System.Collections.Generic.List<SparkHtml.No>.MoveNext → SparkHtml__Desenha → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkHtml.No>.Dispose

## SparkHtml__FimDaTag
System_String__get_Chars → System_Char__IsWhiteSpace

## SparkHtml__Fundo
SparkHtml_No__Attr → LIT_"'background'" → TI_SparkHtml → SparkHtml__Textura → UnityEngine_Object__op_Equality → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_BackgroundPropertyHelper__ConvertScaleModeToBackgroundSize → UnityEngine_UIElements_StyleBackgroundSize__op_Implicit

## SparkHtml__Imagem
UnityEngine_UIElements_VisualElement___ctor → SparkHtml_No__Attr → LIT_"'width'" → TI_SparkHtml → SparkHtml__Numero → SparkHtml_No__Attr → LIT_"'height'" → SparkHtml__Numero → SparkHtml_No__Attr → LIT_"'src'" → LIT_"''" → TI_SparkHtml → SparkHtml__Textura → UnityEngine_Object__op_Inequality → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_Object__op_Inequality → System_String__StartsWith → LIT_"'tutorial_'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style

## SparkHtml__IndiceSemCaixa
System_String__IndexOf

## SparkHtml__LarguraFixa
TI_SparkHtml → SparkHtml___LarguraFixa_g__Anda_17_0

## SparkHtml__Largura
System_String__EndsWith → LIT_"'%'" → System_String__TrimEnd → System_Globalization_CultureInfo__get_InvariantCulture → System_Single__TryParse → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkHtml → SparkHtml__Numero → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## SparkHtml__LeAtributos
System_String__get_Chars → System_Char__IsWhiteSpace → System_String__get_Chars → System_Char__IsWhiteSpace → System_String__Substring → System_String__get_Chars → System_Char__IsWhiteSpace → System_String__get_Chars → System_Char__IsWhiteSpace → System_String__get_Chars → System_Char__IsWhiteSpace → System_String__get_Chars → System_String__IndexOf → System_String__Substring → System_String__Trim

## SparkHtml__Le
TI_SparkHtml.No → SparkHtml_No___ctor → LIT_"'#raiz'" → TI_System.Collections.Generic.List<SparkHtml.No> → MR_System.Collections.Generic.List<SparkHtml.No>..ctor → MR_System.Collections.Generic.List<SparkHtml.No>.Add → System_Text_StringBuilder___ctor → TI_SparkHtml → SparkHtml___Le_g__Descarrega_2_0 → System_String__get_Chars → System_Text_StringBuilder__Append → System_String__CompareOrdinal → LIT_"'<!--'" → TI_SparkHtml → SparkHtml___Le_g__Descarrega_2_0 → System_String__IndexOf → LIT_"'-->'" → TI_SparkHtml → SparkHtml__FimDaTag → System_Text_StringBuilder__Append → System_String__Substring → System_String__StartsWith → TI_SparkHtml → SparkHtml___Le_g__Descarrega_2_0 → System_String__StartsWith → LIT_"'/'" → System_String__EndsWith → LIT_"'/'" → System_String__Substring → System_String__get_Chars → System_Char__IsWhiteSpace → TI_SparkHtml.No → SparkHtml_No___ctor → System_String__Substring → System_String__ToLowerInvariant → TI_SparkHtml → SparkHtml__LeAtributos → LIT_"'tr'" → LIT_"'td'" → MR_System.Collections.Generic.List<SparkHtml.No>.get_Item → LIT_"'table'" → LIT_"'tr'" → LIT_"'td'" → MR_System.Collections.Generic.List<SparkHtml.No>.get_Item → TI_SparkHtml → System_String__IndexOf → LIT_"'</button>'" → System_String__IndexOf → System_String__Substring → TI_SparkHtml.No → SparkHtml_No___ctor → LIT_"'</button>'" → System_String__ToLowerInvariant

## SparkHtml__Linha
System_String__op_Inequality → LIT_"'tr'" → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → SparkHtml_No__Attr → LIT_"'bgcolor'" → TI_SparkHtml → SparkHtml__Cor → UnityEngine_UIElements_VisualElement__get_style → System_String__Concat → LIT_"'FF'" → ColorUtils__HexToColor → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → MR_System.Collections.Generic.List<SparkHtml.No>.GetEnumerator → MR_System.Collections.Generic.List<SparkHtml.No>.MoveNext → System_String__op_Inequality → LIT_"'td'" → System_String__op_Inequality → LIT_"'th'" → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit → SparkHtml_No__Attr → LIT_"'fixwidth'" → SparkHtml_No__Attr → LIT_"'width'" → TI_SparkHtml → SparkHtml__Largura → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkHtml → SparkHtml__SoImagens → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkHtml → SparkHtml__LarguraFixa → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkHtml_No__Attr → LIT_"'height'" → SparkHtml_No__Attr → LIT_"'fixheight'" → TI_SparkHtml → SparkHtml__Numero → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkHtml_No__Attr → LIT_"'bgcolor'" → TI_SparkHtml → SparkHtml__Cor → UnityEngine_UIElements_VisualElement__get_style → System_String__Concat → LIT_"'FF'" → ColorUtils__HexToColor → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkHtml → SparkHtml__Fundo → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkHtml_No__Attr → LIT_"'valign'" → LIT_"''" → System_String__ToLowerInvariant → LIT_"'top'" → LIT_"'bottom'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualEl

## SparkHtml__LinkComImagem
TI_SparkHtml.<>c__DisplayClass25_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → TI_SparkEstilo → SparkEstilo__Espaco → TI_SparkHtml.Bloco → SparkHtml_Bloco___ctor → SparkHtml__Filhos → SparkHtml_Bloco__SoltaTexto → MR_UnityEngine.UIElements.UQueryExtensions.Query<UnityEngine.UIElements.VisualElement> → MD_SparkHtml.__c__DisplayClass25_0._LinkComImagem_b__0 → MR_UnityEngine.UIElements.UQueryBuilder<UnityEngine.UIElements.VisualElement>.ForEach → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent> → MD_SparkHtml.__c__DisplayClass25_0._LinkComImagem_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent> → MD_SparkHtml.__c__DisplayClass25_0._LinkComImagem_b__2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent> → MD_SparkHtml.__c__DisplayClass25_0._LinkComImagem_b__3 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent> → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator

## SparkHtml__MinimoDaTabela
SparkHtml_No__Attr → LIT_"'cellpadding'" → TI_SparkHtml → SparkHtml__Numero → SparkHtml___MinimoDaTabela_g__Linhas_19_0

## SparkHtml__Numero
System_Text_RegularExpressions_Regex__Match → LIT_"'-?\\\\d+'" → System_Text_RegularExpressions_Capture__ToString → System_Globalization_CultureInfo__get_InvariantCulture → System_Int32__TryParse

## SparkHtml__RichInterno
System_Text_StringBuilder___ctor → MR_System.Collections.Generic.List<SparkHtml.No>.GetEnumerator → MR_System.Collections.Generic.List<SparkHtml.No>.MoveNext → TI_SparkHtml → SparkHtml___RichInterno_g__Anda_34_0 → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkHtml.No>.Dispose

## SparkHtml__SoImagens
MR_System.Collections.Generic.List<SparkHtml.No>.GetEnumerator → MR_System.Collections.Generic.List<SparkHtml.No>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkHtml.No>.Dispose → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkHtml.No>.Dispose → System_String__op_Inequality → LIT_"'img'" → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkHtml.No>.Dispose → SparkHtml_No__Attr → LIT_"'width'" → TI_SparkHtml → SparkHtml__Numero → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkHtml.No>.Dispose

## SparkHtml__Tabela
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → SparkHtml_No__Attr → LIT_"'width'" → SparkHtml_No__Attr → LIT_"'fixwidth'" → TI_SparkHtml → SparkHtml__Largura → SparkHtml_No__Attr → LIT_"'height'" → SparkHtml__Numero → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkHtml_No__Attr → LIT_"'bgcolor'" → TI_SparkHtml → SparkHtml__Cor → UnityEngine_UIElements_VisualElement__get_style → System_String__Concat → LIT_"'FF'" → ColorUtils__HexToColor → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkHtml → SparkHtml__Fundo → SparkHtml_No__Attr → LIT_"'cellpadding'" → SparkHtml__Numero → SparkHtml_No__Attr → LIT_"'cellspacing'" → SparkHtml__Numero → SparkHtml_No__Attr → LIT_"'width'" → SparkHtml_No__Attr → LIT_"'fixwidth'" → MR_System.Collections.Generic.List<SparkHtml.No>.GetEnumerator → MR_System.Collections.Generic.List<SparkHtml.No>.MoveNext → LIT_"'tbody'" → SparkHtml__Linha → MR_System.Collections.Generic.List<SparkHtml.No>.MoveNext → SparkHtml__Linha → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkHtml.No>.Dispose → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkHtml.No>.Dispose → TI_SparkHtml → SparkHtml_No__Attr → LIT_"'cellpadding'" → TI_SparkHtml → SparkHtml__Numero → SparkHtml___MinimoDaTabela_g__Linhas_19_0 → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## SparkHtml__TemImagem
MR_System.Collections.Generic.List<SparkHtml.No>.GetEnumerator → MR_System.Collections.Generic.List<SparkHtml.No>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkHtml.No>.Dispose → LIT_"'img'" → TI_SparkHtml → SparkHtml__TemImagem → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkHtml.No>.Dispose

## SparkHtml__TextoPuro
System_Text_StringBuilder___ctor → TI_SparkHtml → SparkHtml___TextoPuro_g__Anda_35_0

## SparkHtml__Textura
System_String__Split → LIT_"''" → System_String__ToLowerInvariant → LIT_"'icon'" → LIT_"'branchsys'" → LIT_"'branchsys2'" → System_String__Equals → LIT_"'SquareBlank'" → System_String__Concat → LIT_"'Data/UI/Assets/html/'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_Object__op_Equality → System_String__StartsWith → LIT_"'Square'" → TI_SparkArte → LIT_"'Data/UI/Assets/html/SquareGray'" → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_Object__op_Equality → System_String__StartsWith → LIT_"'VIPmark_'" → System_String__Concat → LIT_"'Data/UI/Assets/Vip/'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → IconTable__get_Instance → LIT_"'NOIMAGE'" → System_String__Concat → LIT_"'\\\\'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_Object__op_Inequality

## SparkHtml___cctor
MR_System.Collections.Generic.HashSet<string>..ctor → LIT_"'br'" → MR_System.Collections.Generic.HashSet<string>.Add → LIT_"'br1'" → MR_System.Collections.Generic.HashSet<string>.Add → LIT_"'img'" → MR_System.Collections.Generic.HashSet<string>.Add → LIT_"'edit'" → MR_System.Collections.Generic.HashSet<string>.Add → LIT_"'combobox'" → MR_System.Collections.Generic.HashSet<string>.Add → LIT_"'hr'" → MR_System.Collections.Generic.HashSet<string>.Add → LIT_"'input'" → MR_System.Collections.Generic.HashSet<string>.Add → LIT_"'meta'" → MR_System.Collections.Generic.HashSet<string>.Add → TI_SparkHtml

## SparkHtml___ctor
Gear__UpdateWeaponType

## SparkLinkItem__Le
System_String__StartsWith → LIT_"'ID='" → System_String__Split → System_Int32__TryParse → System_Globalization_NumberFormatInfo__get_CurrentInfo → System_Number__TryParseInt32IntegerStyle

## SparkLinkItem__Linka
TI_ProductSlot → TI_ChatWindow → UnityEngine_Object__op_Equality → UnityEngine_Object__op_Inequality → PlayerInventory__GetItemByObjectId → TI_SparkLinkItem → SparkLinkItem__Rotulo → TI_SparkLinkItem → MR_System.Collections.Generic.Dictionary<string,int>.get_Count → TI_SparkLinkItem → MR_System.Collections.Generic.Dictionary<string,int>.Clear → TI_SparkLinkItem → MR_System.Collections.Generic.Dictionary<string,int>.set_Item → TI_ChatWindow → ChatWindow__InsereLink

## SparkLinkItem__MostraDica
UnityEngine_Object__op_Equality → ItemTable__get_Instance → System_String__StartsWith → LIT_"'item:'" → System_String__Split → System_Int32__TryParse → ItemTable__get_Instance → ItemTable__GetItem → ItemInstance___ctor → System_Int32__ToString → System_String__Concat → LIT_"'Item '" → ItemTable__get_Instance → ItemTable__GetWeapon → ItemTable__get_Instance → ItemTable__GetArmor → TI_SparkDicaItem → SparkDicaItem__MontaSimples → TI_SparkDicaItem → SparkDicaItem__Monta → IconTable__get_Instance → IconTable__GetIcon → L2ToolTip__UpdateTooltipItem

## SparkLinkItem__ParaBalao
System_String__Split → System_Text_StringBuilder__Append → TI_SparkLinkItem → LIT_"'[Unknown item]'" → System_String__StartsWith → LIT_"'ID='" → LIT_"'[Unknown item]'" → LIT_"'ID='" → System_String__Split → LIT_"'[Unknown item]'" → System_Int32__TryParse → LIT_"'[Unknown item]'" → System_Int32__TryParse → LIT_"'[Unknown item]'" → System_Int32__TryParse → LIT_"'[Unknown item]'" → System_Int32__TryParse → LIT_"'[Unknown item]'" → TI_SparkLinkItem → SparkLinkItem__Rotulo → System_Text_StringBuilder__Append

## SparkLinkItem__ParaChat
System_String__Split → System_Text_StringBuilder__Append → TI_SparkLinkItem → System_String__StartsWith → LIT_"'ID='" → System_String__Split → System_Int32__TryParse → LIT_"'item:'" → LIT_"'#F2C94C'" → System_String__Format → LIT_"'<link=\" → System_Text_StringBuilder__Append → SparkUI__NomeDoItem → System_Text_StringBuilder__Append → TI_SparkLinkItem → LIT_"' ({0:n0})'" → LIT_"''" → System_String__Format → LIT_"' ({0:n0})'" → System_Text_StringBuilder__Append → LIT_"']</u></color></link>'" → System_Text_StringBuilder__Append → LIT_"'<color=#808080>[Unknown item]</color>'"

## SparkLinkItem__ParaEnvio
System_Char__ToString → System_String__Replace → LIT_"''" → TI_SparkLinkItem → MR_System.Collections.Generic.Dictionary<string,int>.get_Count → System_String__get_Chars → TI_SparkLinkItem → MR_System.Collections.Generic.Dictionary<string,int>.get_Keys → MR_System.Collections.Generic.Dictionary<string,int>.MoveNext → System_String__CompareOrdinal → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<string,int>.Dispose → System_Text_StringBuilder__Append → LIT_"'ID='" → TI_SparkLinkItem → System_Text_StringBuilder__Append → System_String__get_Chars → System_Text_StringBuilder__Append

## SparkLinkItem__Quantidade
LIT_"' ({0:n0})'" → System_String__Format → LIT_"' ({0:n0})'" → LIT_"''"

## SparkLinkItem__Rotulo
ItemTable__get_Instance → System_Int32__ToString → System_String__Concat → LIT_"'Item '" → ItemTable__get_Instance → ItemTable__GetItem → LIT_"'['" → LIT_"''" → System_Int32__ToString → System_String__Concat → LIT_"'+'" → LIT_"' '" → TI_SparkLinkItem → LIT_"' ({0:n0})'" → LIT_"''" → System_String__Format → LIT_"' ({0:n0})'" → LIT_"']'" → System_String__Concat

## SparkLinkItem___cctor
MR_System.Collections.Generic.Dictionary<string,int>..ctor → TI_SparkLinkItem

## SparkLojaCristalWindow__AbreAjuste
SparkLojaCristalWindow__Tamanho → LIT_"'Crystallization Shop'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_SparkLojaCristal → LIT_"'You cannot crystallize yet.'" → TI_SparkLojaCristal → SparkLojaCristal__NomeDaGrade → System_String__Concat → LIT_"'You can crystallize up to '" → LIT_"'-grade items.'" → TI_SparkLojaCristal → System_Int32__ToString → TI_SparkLojaCristal → LIT_"''" → SparkLojaCristalWindow__MostraExemplo

## SparkLojaCristalWindow__AbreLoja
SparkLojaCristalWindow__Tamanho → LIT_"'Crystallization Shop'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_SparkLojaCristal → TI_System.Predicate<SparkLojaCristal.Item> → MD_SparkLojaCristalWindow._AbreLoja_b__41_0 → MR_System.Collections.Generic.List<SparkLojaCristal.Item>.Exists → TI_SparkLojaCristal → SparkLojaCristal__NomeDaGrade → TI_SparkLojaCristal → System_String__Format → LIT_"'{0}  ·  Fee {1}%  ·  Up to {2}-grade'" → SparkLojaCristalWindow__MontaLista → SparkLojaCristalWindow__MostraDetalhe

## SparkLojaCristalWindow__Awake
TI_SparkLojaCristalWindow → UnityEngine_Object__op_Equality → TI_SparkLojaCristalWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SparkLojaCristalWindow__BuildWindow
TI_SparkLojaCristalWindow.<BuildWindow>d__33 → AbstractEffectWindow__UpdateBuffTimers_d__24___ctor

## SparkLojaCristalWindow__HideWindow
UnityEngine_Object__op_Inequality → L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## SparkLojaCristalWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkCraftWindow/SparkCraftWindow'"

## SparkLojaCristalWindow__MontaAjuste
LIT_"'Crystals kept by you (%):'" → TI_SparkEstilo → SparkEstilo__Painel → UnityEngine_UIElements_VisualElement__get_style → SparkEstilo__Espaco → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → SparkLojaCristalWindow__Secao → LIT_"'SHOP FEE'" → UnityEngine_UIElements_VisualElement__Add → SparkLojaCristalWindow__Fila → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Crystals kept by you (%):'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Campo → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.ChangeEvent<string>> → MD_SparkLojaCristalWindow._MontaAjuste_b__36_0 → MR_UnityEngine.UIElements.INotifyValueChangedExtensions.RegisterValueChangedCallback<string> → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → SparkLojaCristalWindow__Secao → LIT_"'SHOP MESSAGE'" → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Campo → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → SparkLojaCristalWindow__Fila → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → MD_SparkLojaCristalWindow._MontaAjuste_b__36_1 → SparkEstilo__Botao → LIT_"'Cancel'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MD_SparkLojaCristalWindow.Inicia → SparkEstilo__Botao → LIT_"'Start'" → UnityEngine_UIElements_VisualElement__Add

## SparkLojaCristalWindow__MontaLista
LIT_"'Your items ({0})'" → UnityEngine_UIElements_VisualElement__Clear → TI_SparkLojaCristal → System_String__Format → LIT_"'Your items ({0})'" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'You have no items this shop can crystallize.'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MR_System.Collections.Generic.List<SparkLojaCristal.Item>.GetEnumerator → MR_System.Collections.Generic.List<SparkLojaCristal.Item>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkLojaCristal.Item>.Dispose → TI_SparkLojaCristalWindow.<>c__DisplayClass45_0 → SparkMapaWindow_Loja___ctor → TI_SparkEstilo → SparkEstilo__Linha → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → SparkEstilo__Moldura → IconTable__get_Instance → UnityEngine_UIElements_VisualElement__get_style → IconTable__get_Instance → IconTable__GetIcon → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__set_pickingMode → SparkLojaCristalWindow__NomeDo → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → SparkUI__NomeDoItem → System_String__Format → LIT_"'You receive {0:N0} {1}'" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Marca → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_SparkLojaCristalWindow.__c__DisplayClass45_0._MontaLista_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → UnityEngine_UIElements_VisualElement__Add

## SparkLojaCristalWindow__MontaLoja
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Painel → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit → SparkLojaCristalWindow__Fila → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkEstilo__CabecalhoDeLista → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Lista → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Painel → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkEstilo__Espaco → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Select an item to see how many crystals you get.'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → SparkLojaCristalWindow__Fila → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → SparkEstilo__Moldura → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → SparkLojaCristalWindow__Linha → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → SparkLojaCristalWindow__Linha → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → SparkLojaCristalWindow__Linha → UnityEngine_UIElements_VisualElement__Add → SparkLojaCristalWindow__Fila → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → MD_SparkLojaCristalWindow._MontaLoja_b__37_0 → SparkEstilo__Botao → LIT_"'Close'" → UnityEngine_UIElements

## SparkLojaCristalWindow__MostraDetalhe
LIT_"'Shop fee: {0:N0} {1} ({2}%)'" → SparkLojaCristalWindow__Escolhido → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → SparkUI__NomeDoItem → UnityEngine_UIElements_VisualElement__get_style → IconTable__get_Instance → IconTable__GetIcon → UnityEngine_UIElements_StyleBackground__op_Implicit → SparkUI__NomeDoItem → System_String__Format → LIT_"'+{0} {1}'" → System_String__Format → LIT_"'Crystallization: {0:N0} {1}'" → System_String__Format → LIT_"'You receive: {0:N0} {1}'" → TI_SparkLojaCristal → System_String__Format → LIT_"'Shop fee: {0:N0} {1} ({2}%)'"

## SparkLojaCristalWindow__MostraExemplo
SparkLojaCristalWindow__LePct → TI_SparkLojaCristal → System_String__Format → LIT_"'Type a number from {0} to {1}.'" → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → System_String__Format → LIT_"'Example: an item worth 100 crystals gives {0} to the cus..." → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit

## SparkLojaCristalWindow__OnDestroy
TI_SparkLojaCristalWindow → UnityEngine_Object__op_Equality → TI_SparkLojaCristalWindow → MD_SparkLojaCristalWindow.AbreAjuste → TI_SparkLojaCristal → SparkLojaCristal__remove_AjusteChegou → MD_SparkLojaCristalWindow.AbreLoja → TI_SparkLojaCristal → System_Delegate__Remove → TI_SparkLojaCristal

## SparkLojaCristalWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## SparkLojaCristal__Abre
LIT_"''" → System_String__Substring → TI_SparkPacoteLivre → SparkPacoteLivre__H → SparkPacoteLivre__D → SparkPacoteLivre__S → TI_SparkLojaCristal → SparkPacoteLivre__Fim

## SparkLojaCristal__PedeMontagem
TI_SparkPacoteLivre → SparkPacoteLivre__H → TI_SparkLojaCristal → SparkPacoteLivre__Fim

## SparkLoja__Abre
TI_SparkLoja → UnityEngine_Object__op_Inequality → WorldSpawner__Busca → UnityEngine_Object__op_Inequality → LIT_"''" → TI_SparkLoja → System_Array__Clear → TI_SparkLoja → MR_System.Collections.Generic.List<ItemInstance>.AddRange → TI_SparkLoja → System_Array__Clear → TI_SparkLoja → MR_System.Collections.Generic.List<ItemInstance>.AddRange → MR_System.Collections.Generic.Dictionary<int,int>..ctor → TI_SparkLoja → MR_System.Collections.Generic.Dictionary<int,int>..ctor → TI_SparkLoja

## SparkLoja__Fecha
TI_SparkLoja → TI_SparkPacoteLivre → TI_SparkLoja → TI_SparkPacoteLivre → SparkPacoteLivre__Fim → TI_SparkLoja → SparkLoja__Limpa → TI_SparkLoja

## SparkLoja__PassaNoFiltro
TI_SparkLoja → System_String__IndexOf → TI_SparkLoja → System_String__IndexOf

## SparkLuzesDoMapa__Awake
TI_SparkLuzesDoMapa → SparkLuzesDoMapa__Carrega → UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException

## SparkLuzesDoMapa__Update
TI_SparkLuzesDoMapa.<>c__DisplayClass21_0 → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<SparkLuzesDoMapa.Luz,UnityEngine.Light>.GetEnumerator → MR_System.Collections.Generic.Dictionary<SparkLuzesDoMapa.Luz,UnityEngine.Light>.MoveNext → UnityEngine_Light__get_intensity → UnityEngine_Light__set_intensity → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<SparkLuzesDoMapa.Luz,UnityEngine.Light>.Dispose → MR_System.Collections.Generic.Dictionary<UnityEngine.Light,SparkLuzesDoMapa.Luz>.get_Count → System_Array__Clear → MR_System.Collections.Generic.Dictionary<UnityEngine.Light,SparkLuzesDoMapa.Luz>.GetEnumerator → MR_System.Collections.Generic.Dictionary<UnityEngine.Light,SparkLuzesDoMapa.Luz>.MoveNext → UnityEngine_Light__get_intensity → UnityEngine_Light__set_intensity → UnityEngine_Light__get_intensity → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<UnityEngine.Light,SparkLuzesDoMapa.Luz>.Dispose → MR_System.Collections.Generic.List<UnityEngine.Light>.GetEnumerator → MR_System.Collections.Generic.List<UnityEngine.Light>.MoveNext → MR_System.Collections.Generic.Dictionary<UnityEngine.Light,SparkLuzesDoMapa.Luz>.Remove → UnityEngine_Behaviour__set_enabled → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<UnityEngine.Light>.Dispose → GameManager__get_CameraDoJogo → UnityEngine_Object__op_Equality → UnityEngine_Component__get_transform → UnityEngine_Transform__get_position → UnityEngine_Component__get_transform → UnityEngine_Transform__get_position → TI_SparkLuzesDoMapa → System_Array__Clear → MR_System.Collections.Generic.List<SparkLuzesDoMapa.Luz>.Add → TI_System.Comparison<SparkLuzesDoMapa.Luz> → MD_SparkLuzesDoMapa.__c__DisplayClass21_0._Update_b__0 → MR_System.Collections.Generic.List<SparkLuzesDoMapa.Luz>.Sort → MR_System.Collections.Generic.List<SparkLuzesDoMapa.Luz>.RemoveRange → MR_System.Collections.Generic.HashSet<SparkLuzesDoMapa.Luz>.Clear → MR_System.Collections.Generic.List<SparkLuzesDoMapa.Luz>.GetEnumerator → MR_System.Collections.Generic.List<SparkLuzesDoMapa.Luz>.MoveNext → MR_System.Collections.Generic.HashSet<SparkLuzesDoMapa.Luz>.Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkLuzesDoMapa.Luz>.Dispose → System_Array__Clear → MR_System.Collections.Generic.Dictionary<SparkLuzesDoMapa.Luz,UnityEngine.Light>.GetEnumerator → MR_System.Collections.Generic.Dictionary<SparkLuzesDoMapa.Luz,UnityEngine.Light>.MoveNext → MR_System.Collections.Generic.HashSet<SparkLuzesDoMapa.Luz>.Contains → MR_System.Collections.Generic.List<SparkLuzesDoMapa.Luz>.Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<SparkLuzesDoMapa.Luz,UnityEngine.Light>.Dispose → MR_System.Collections.Generic.List<SparkLuzesDoMapa.Luz>.GetEnumerator → MR_System.Collections.Generic.List<SparkLuzesDoMapa.Luz>.MoveNext → MR_System.Collections.Generic.Dictionary<SparkLuzesDoMapa.Luz,UnityEngine.Light>.get_Item → MR_System.Collections.Generic.Dictionary<SparkLuzesDoMa

## SparkMacros_Comando___ctor
LIT_"''"

## SparkMacros_MacroRunner__Conjurando
UnityEngine_Object__op_Inequality

## SparkMacros_MacroRunner__Executa
TI_SparkMacros.MacroRunner.<Executa>d__2 → Gear__UpdateWeaponType

## SparkMacros_MacroRunner__Roda
UnityEngine_MonoBehaviour__StopCoroutine → TI_SparkMacros.MacroRunner.<Executa>d__2 → Gear__UpdateWeaponType

## SparkMacros_Macro___ctor
LIT_"''" → TI_System.Collections.Generic.List<SparkMacros.Comando> → MR_System.Collections.Generic.List<SparkMacros.Comando>..ctor

## SparkMacros__Apaga
TI_SparkPacoteLivre → SparkPacoteLivre__D → TI_SparkMacros → SparkPacoteLivre__Fim

## SparkMacros__Busca
TI_SparkMacros.<>c__DisplayClass18_0 → Gear__UpdateWeaponType → TI_SparkMacros → TI_System.Predicate<SparkMacros.Macro> → MD_SparkMacros.__c__DisplayClass18_0._Busca_b__0 → System_ThrowHelper__ThrowArgumentNullException → MR_System.Collections.Generic.List<SparkMacros.Macro>.Find

## SparkMacros__Executa
TI_SparkMacros → TI_SparkMacros.<>c__DisplayClass18_0 → Gear__UpdateWeaponType → TI_SparkMacros → TI_System.Predicate<SparkMacros.Macro> → MD_SparkMacros.__c__DisplayClass18_0._Busca_b__0 → MR_System.Collections.Generic.List<SparkMacros.Macro>.Find → TI_SparkMacros → UnityEngine_Object__op_Equality → UnityEngine_GameObject___ctor → LIT_"'SparkMacros'" → UnityEngine_Object__DontDestroyOnLoad → MR_UnityEngine.GameObject.AddComponent<SparkMacros.MacroRunner> → TI_SparkMacros → UnityEngine_MonoBehaviour__StopCoroutine → TI_SparkMacros.MacroRunner.<Executa>d__2 → Gear__UpdateWeaponType → UnityEngine_MonoBehaviour__StartCoroutine

## SparkMacros__Grava
TI_SparkPacoteLivre → SparkPacoteLivre__D → SparkPacoteLivre__S → LIT_"''" → SparkPacoteLivre__S → LIT_"''" → SparkPacoteLivre__S → SparkPacoteLivre__C → TI_SparkMacros → SparkPacoteLivre__Fim → MR_System.Collections.Generic.List<SparkMacros.Comando>.get_Item → SparkPacoteLivre__C → SparkPacoteLivre__D → SparkPacoteLivre__C → SparkPacoteLivre__S

## SparkMacros__Icone
System_Int32__ToString → System_String__Concat → LIT_"'Macro/Macro_Icon'"

## SparkMacros__ItemPeloNome
UnityEngine_Object__op_Equality → MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator → MR_System.Collections.Generic.List<ItemInstance>.MoveNext → TI_SparkMacros → ItemTable__get_Instance → ItemTable__GetItem → System_String__Equals → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<ItemInstance>.Dispose → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<ItemInstance>.Dispose

## SparkMacros__Manda
SparkPacoteLivre__Fim

## SparkMacros__NomeDoItem
ItemTable__get_Instance → ItemTable__GetItem

## SparkMacros__Ocupado
TI_SparkMacros

## SparkMacros__Pacote
TI_SparkLeitor → SparkLeitor___ctor → ServerPacket__ReadB → TI_SparkMacros → System_Array__Clear → TI_SparkMacros → TI_SparkMacros.<>c__DisplayClass17_0 → Gear__UpdateWeaponType → TI_SparkMacros.Macro → LIT_"''" → TI_System.Collections.Generic.List<SparkMacros.Comando> → MR_System.Collections.Generic.List<SparkMacros.Comando>..ctor → Gear__UpdateWeaponType → SparkLeitor__S → ServerPacket__ReadB → TI_SparkMacros.Comando → LIT_"''" → Gear__UpdateWeaponType → ServerPacket__ReadB → SparkLeitor__S → MR_System.Collections.Generic.List<SparkMacros.Comando>.Add → TI_SparkMacros → TI_System.Predicate<SparkMacros.Macro> → MD_SparkMacros.__c__DisplayClass17_0._Pacote_b__1 → MR_System.Collections.Generic.List<SparkMacros.Macro>.RemoveAll → MR_System.Collections.Generic.List<SparkMacros.Macro>.Add → TI_SparkMacros → TI_SparkMacros.<>c → TI_System.Comparison<SparkMacros.Macro> → MD_SparkMacros.__c._Pacote_b__17_0 → TI_SparkMacros.<>c → MR_System.Collections.Generic.List<SparkMacros.Macro>.Sort → TI_SparkMacros

## SparkMacros__SkillPeloNome
UnityEngine_Object__op_Equality → SkillNameTable__get_Instance → PlayerSkill__get_Todas → SkillNameTable__get_Instance → SkillNameTable__GetName → System_String__Equals → SkillNameTable__get_Instance → SkillNameTable__GetName → System_String__Equals

## SparkMacros__UsaAtalho
System_String__Split → System_Int32__TryParse → PlayerShortcuts__GetShortcutBySlot → PlayerShortcuts__UseShortcut

## SparkMacros__Valida
LIT_"'The commands are too long ({0}/{1}). Use fewer or shorte..." → System_String__IsNullOrWhiteSpace → LIT_"'Enter a name for the macro.'" → LIT_"'The name can have up to {0} letters.'" → LIT_"''" → LIT_"'The description can have up to {0} letters.'" → LIT_"''" → LIT_"'The shortcut text can have up to {0} letters.'" → TI_SparkMacros → LIT_"'You can have up to {0} macros.'" → TI_SparkMacros.<>c → TI_System.Predicate<SparkMacros.Comando> → MD_SparkMacros.__c._Valida_b__20_0 → TI_SparkMacros.<>c → MR_System.Collections.Generic.List<SparkMacros.Comando>.Exists → LIT_"'Enter at least one command.'" → LIT_"'A macro can have up to {0} commands.'" → System_String__Format → MR_System.Collections.Generic.List<SparkMacros.Comando>.GetEnumerator → MR_System.Collections.Generic.List<SparkMacros.Comando>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkMacros.Comando>.Dispose → System_String__Format → LIT_"'The commands are too long ({0}/{1}). Use fewer or shorte..." → LIT_"'Commands cannot contain \" → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkMacros.Comando>.Dispose

## SparkMacros__Zera
TI_SparkMacros → UnityEngine_Object__op_Inequality → TI_SparkMacros → UnityEngine_MonoBehaviour__StopAllCoroutines → TI_SparkMacros → System_Array__Clear → TI_SparkMacros

## SparkMacros___cctor
TI_System.Collections.Generic.List<SparkMacros.Macro> → MR_System.Collections.Generic.List<SparkMacros.Macro>..ctor → TI_SparkMacros

## SparkMapaWindow_Andar__Com
MR_System.Collections.Generic.List<UnityEngine.Rect>.Add → MR_System.Collections.Generic.List<UnityEngine.Vector2>.Add

## SparkMapaWindow_Andar__Contem
SparkMapaWindow_Andar__NaCaixa

## SparkMapaWindow_Andar__Contem
SparkMapaWindow_Andar__NaCaixa

## SparkMapaWindow_Andar__NaCaixa
MR_System.Collections.Generic.List<UnityEngine.Rect>.get_Item → MR_System.Collections.Generic.List<UnityEngine.Vector2>.get_Item

## SparkMapaWindow_Andar__NaConstrucao
MR_System.Collections.Generic.List<UnityEngine.Rect>.GetEnumerator → MR_System.Collections.Generic.List<UnityEngine.Rect>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<UnityEngine.Rect>.Dispose → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<UnityEngine.Rect>.Dispose

## SparkMapaWindow_Andar__NaPlanta


## SparkMapaWindow_Andar__NaTextura


## SparkMapaWindow_Andar___ctor
MR_System.Collections.Generic.List<UnityEngine.Rect>..ctor → MR_System.Collections.Generic.List<UnityEngine.Vector2>..ctor → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<UnityEngine.Rect>.Add → MR_System.Collections.Generic.List<UnityEngine.Vector2>.Add

## SparkMapaWindow_Area___ctor


## SparkMapaWindow_Cidade___ctor


## SparkMapaWindow_Floresta___ctor
System_String__Split → System_Int32__Parse

## SparkMapaWindow_Loja___ctor


## SparkMapaWindow_Masmorra___ctor
Gear__UpdateWeaponType

## SparkMapaWindow__AbreInterno
UnityEngine_UIElements_VisualElement__get_style → System_String__Concat → LIT_"'Data/UI/Assets/Mapa/interno/'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_Object__op_Equality → System_String__Concat → LIT_"'SparkMapaWindow: planta nao encontrada: Data/UI/Assets/M..." → UnityEngine_Debug__LogWarning → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_Object__op_Inequality → TI_SparkMapaWindow → SparkMapaWindow__RadarUsaPlanta → UnityEngine_Resources__UnloadAsset → SparkMapaWindow__TamanhoDaVista → SparkMapaWindow__MontaAbas → SparkMapaWindow_Andar__get_Meio → MR_System.Nullable<UnityEngine.Vector2>.get_Value → SparkMapaWindow_Andar__NaPlanta → SparkMapaWindow__TamanhoDaVista → SparkMapaWindow__Redesenha

## SparkMapaWindow__Afim


## SparkMapaWindow__AjustaPainelRaid
UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit

## SparkMapaWindow__AlternaRaid
SparkMapaWindow__MontaPainelRaid → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Equality → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → SparkMapaWindow__MarcaRadar

## SparkMapaWindow__AlternaTamanho
UnityEngine_PlayerPrefs__SetInt → LIT_"'spark.mapa.pequeno'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkMapaWindow__AjustaPainelRaid → SparkMapaWindow__TextoDoBotao → LIT_"'My position'" → SparkMapaWindow__TextoDoBotao → LIT_"'Next party member'" → LIT_"'Party'" → SparkMapaWindow__TextoDoBotao → LIT_"'Raid Boss'" → LIT_"'Raid'" → SparkMapaWindow__TextoDoBotao → LIT_"'Small Map'" → LIT_"'Large Map'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit

## SparkMapaWindow__AndarParaRadar
SparkMapaWindow_Andar__Contem → TI_SparkMapaWindow → SparkMapaWindow_Andar__Contem

## SparkMapaWindow__AplicaFade
UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit

## SparkMapaWindow__AplicaTamanho
UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkMapaWindow__AjustaPainelRaid → SparkMapaWindow__TextoDoBotao → LIT_"'My position'" → SparkMapaWindow__TextoDoBotao → LIT_"'Next party member'" → LIT_"'Party'" → SparkMapaWindow__TextoDoBotao → LIT_"'Raid Boss'" → LIT_"'Raid'" → SparkMapaWindow__TextoDoBotao → LIT_"'Small Map'" → LIT_"'Large Map'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit

## SparkMapaWindow__AplicaZoom
SparkMapaWindow__TamanhoDaVista

## SparkMapaWindow__Arrasta
SparkMapaWindow__Redesenha

## SparkMapaWindow__ArteParaL2
SparkMapaWindow__CalculaDeformacao → SparkMapaWindow__L2ParaArte

## SparkMapaWindow__Avisa
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MD_SparkMapaWindow._Avisa_b__182_0

## SparkMapaWindow__Awake
TI_SparkMapaWindow → UnityEngine_Object__op_Equality → TI_SparkMapaWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SparkMapaWindow__BuildWindow
TI_SparkMapaWindow.<BuildWindow>d__155 → AbstractEffectWindow__UpdateBuffTimers_d__24___ctor

## SparkMapaWindow__CalculaDeformacao
TI_SparkMapaWindow → SparkMapaWindow__Resolve → TI_SparkMapaWindow → SparkMapaWindow__Afim → TI_SparkMapaWindow

## SparkMapaWindow__CentraNoJogador
TI_SparkMapaWindow → SparkMapaWindow__PosicaoDoJogador3 → SparkMapaWindow__Centra

## SparkMapaWindow__Centra
TI_SparkMapaWindow → SparkMapaWindow__LocalInterno → SparkMapaWindow__EntraNaRegiao → SparkMapaWindow__TamanhoDaVista → SparkMapaWindow__L2ParaArte → SparkMapaWindow__Redesenha → MR_System.Nullable<UnityEngine.Vector2>..ctor → SparkMapaWindow__AbreInterno

## SparkMapaWindow__ConfereInterno
TI_SparkMapaWindow → SparkMapaWindow__PosicaoDoJogador3 → TI_SparkMapaWindow → SparkMapaWindow__LocalInterno → LIT_"''" → System_Int32__ToString → System_String__Concat → LIT_"'/'" → SparkMapaWindow__EntraNaRegiao → MR_System.Nullable<UnityEngine.Vector2>..ctor → SparkMapaWindow__AbreInterno

## SparkMapaWindow__DesenhaTiles
MR_System.Collections.Generic.HashSet<string>..ctor → System_Int32__ToString → System_String__Concat → LIT_"'_'" → SparkMapaWindow__Tile → MR_System.Collections.Generic.HashSet<string>.Add → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MR_System.Collections.Generic.List<string>..ctor → MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.GetEnumerator → MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.Dispose → MR_System.Collections.Generic.List<string>.GetEnumerator → MR_System.Collections.Generic.List<string>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<string>.Dispose → MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.get_Item → UnityEngine_UIElements_VisualElement__RemoveFromHierarchy → MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.Remove → MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.TryGetValue → MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.Remove → TI_SparkMapaWindow → MR_System.Collections.Generic.HashSet<string>.Contains → MR_System.Collections.Generic.List<string>.Add

## SparkMapaWindow__EntraNaRegiao
SparkMapaWindow__SaiDoInterno → LIT_"'Mouse wheel: zoom (all the way out: world)    Drag: move'" → SparkMapaWindow__TamanhoDaVista → UnityEngine_UIElements_VisualElement__get_style → TI_SparkMapaWindow → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → LIT_"''" → System_String__Concat → LIT_"' - '" → System_String__Concat → SparkMapaWindow__DesenhaTiles → SparkMapaWindow__PosicionaLojas → SparkMapaWindow__PosicionaNomesZoom → LIT_"''" → TI_SparkMapaWindow → LIT_"''" → System_String__Concat → LIT_"'Near '" → LIT_"'Mouse wheel: zoom (all the way out: world)    Drag: move'" → SparkMapaWindow__PosicionaJogador → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → MR_System.Collections.Generic.List<UnityEngine.Rect>..ctor → UnityEngine_UIElements_VisualElement__Children → UnityEngine_UIElements_VisualElement__get_userData → TI_SparkMapaWindow.Cidade → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Children → UnityEngine_UIElements_VisualElement__get_userData → SparkMapaWindow__L2ParaArte → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIE

## SparkMapaWindow__Florestas
TI_SparkMapaWindow → SparkMapaWindow__TamanhoDaVista → TI_SparkMapaWindow → MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.TryGetValue → TI_SparkMapaWindow → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_Object__op_Equality → TI_SparkMapaWindow → System_String__Concat → LIT_"'Data/UI/Assets/Mapa/florestas/'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_Object__op_Equality → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_SparkMapaWindow

## SparkMapaWindow__GiraSeta
UnityEngine_Object__op_Equality → UnityEngine_Object__op_Inequality → UnityEngine_Component__get_transform → UnityEngine_Transform__get_childCount → UnityEngine_Transform__GetChild → UnityEngine_Transform__get_eulerAngles → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_Angle___ctor → UnityEngine_UIElements_Rotate___ctor → UnityEngine_UIElements_StyleRotate__op_Implicit

## SparkMapaWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → SparkMapaWindow__AplicaFade

## SparkMapaWindow__L2ParaArte
SparkMapaWindow__CalculaDeformacao → SparkMapaWindow__Afim → TI_SparkMapaWindow

## SparkMapaWindow__Letra
UnityEngine_UIElements_Label___ctor → TI_SparkMapaWindow → SparkMapaWindow__get_FonteMapa → UnityEngine_Object__op_Inequality → UnityEngine_UIElements_VisualElement__get_style → TI_SparkMapaWindow → SparkMapaWindow__get_FonteMapa → UnityEngine_UIElements_StyleFontDefinition___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.FontStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode

## SparkMapaWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkMapaWindow/SparkMapaWindow'"

## SparkMapaWindow__LocalInterno
TI_SparkMapaWindow → SparkMapaWindow_Andar__Contem → TI_SparkMapaWindow

## SparkMapaWindow__MarcaRadar
MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.GetEnumerator → MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.Dispose → TI_SparkQuests → SparkQuests__RadarEm → TI_SparkEstilo → SparkEstilo__Marca

## SparkMapaWindow__MarcadorDeEntrada
TI_SparkMapaWindow.<>c__DisplayClass181_0 → SparkMapaWindow_Loja___ctor → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkEstilo → SparkEstilo__Borda → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'+'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__set_userData → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerEnterEvent> → MD_SparkMapaWindow.__c__DisplayClass181_0._MarcadorDeEntrada_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerLeaveEvent> → MD_SparkMapaWindow.__c__DisplayClass181_0._MarcadorDeEntrada_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerLeaveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_SparkMapaWindow.__c__DisplayClass181_0._MarcadorDeEntrada_b__2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>

## SparkMapaWindow__Marcador
TI_SparkMapaWindow.<>c__DisplayClass156_0 → SparkMapaWindow_Loja___ctor → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkEstilo → SparkEstilo__Borda → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'+'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_SparkMapaWindow → SparkMapaWindow__Rotulo → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_SparkMapaWindow.Cidade, → UnityEngine_UIElements_VisualElement__set_userData → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerEnterEvent> → MD_SparkMapaWindow.__c__DisplayClass156_0._Marcador_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerLeaveEvent> → MD_SparkMapaWindow.__c__DisplayClass156_0._Marcador_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerLeaveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_SparkMapaWindow.__c__DisplayClass156_0._Marcador_b__2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent>

## SparkMapaWindow__MontaAbas
UnityEngine_UIElements_VisualElement__Clear → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MD_SparkMapaWindow.TrocaAndar → TI_SparkEstilo → SparkEstilo__Abas

## SparkMapaWindow__MontaLojas
TI_SparkArte → LIT_"'Data/UI/Assets/Mapa/spark_lojas'" → MR_SparkArte.Load<UnityEngine.TextAsset> → LIT_"'Data/UI/Assets/Mapa/spark_lojas_icones'" → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_Object__op_Equality → UnityEngine_TextAsset__ToString → MR_UnityEngine.JsonUtility.FromJson<SparkMapaWindow.ListaDeLojas> → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Overflow>.op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__Add → TI_SparkMapaWindow → SparkMapaWindow__Rotulo → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__set_userData → UnityEngine_UIElements_VisualElement__Add → UnityEngine_Debug__LogWarning → LIT_"'SparkMapaWindow: sem Data/UI/Assets/Mapa/spark_lojas.jso..."

## SparkMapaWindow__MontaPainelRaid
TI_SparkMapaWindow.ListaDeBosses → SparkMapaWindow_Loja___ctor → TI_SparkArte → LIT_"'Data/Npc/spark_raidboss'" → MR_SparkArte.Load<UnityEngine.TextAsset> → UnityEngine_Object__op_Equality → UnityEngine_TextAsset__ToString → MR_UnityEngine.JsonUtility.FromJson<SparkMapaWindow.ListaDeBosses> → UnityEngine_Resources__UnloadAsset → UnityEngine_Debug__LogWarning → LIT_"'SparkMapaWindow: sem Data/Npc/spark_raidboss.json'" → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_SparkEstilo → SparkEstilo__Moldura → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → SparkEstilo__Espaco → TI_SparkMapaWindow.<>c → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.WheelEvent> → MD_SparkMapaWindow.__c._MontaPainelRaid_b__169_0 → TI_SparkMapaWindow.<>c → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.WheelEvent> → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Raid Boss'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MD_SparkMapaWindow._MontaPainelRaid_b__169_1 → SparkEstilo__Fechar → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Lista → UnityEngine_UIElements_VisualElement__Add → SparkMapaWindow__AjustaPainelRaid → LIT_"'Raid Boss'" → LIT_"'Grand Boss'" → MD_SparkMapaWindow.MostraAbaRaid → SparkEstilo__Abas

## SparkMapaWindow__MostraAbaRaid
UnityEngine_UIElements_VisualElement__Clear → System_Array__Clear → TI_SparkMapaWindow.Boss__,0 → TI_SparkMapaWindow.<>c__DisplayClass170_0 → SparkMapaWindow_Loja___ctor → TI_SparkEstilo → SparkEstilo__Linha → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → System_Int32__ToString → System_String__Concat → LIT_"'Lv. '" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MD_SparkMapaWindow.__c__DisplayClass170_0._MostraAbaRaid_b__0 → SparkEstilo__Botao → LIT_"'Radar'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → UnityEngine_UIElements_ScrollView__set_scrollOffset → MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.GetEnumerator → MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.Dispose → TI_SparkQuests → SparkQuests__RadarEm → TI_SparkEstilo → SparkEstilo__Marca

## SparkMapaWindow__MostraHoraDoJogo
UnityEngine_Object__op_Inequality → WorldClock__get_MinutoDoJogo → LIT_"''" → WorldClock__HoraAmPm → System_String__Concat → LIT_"'Game time '" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## SparkMapaWindow__MostraMundo
SparkMapaWindow__SaiDoInterno → SparkMapaWindow__TamanhoDaVista → TI_SparkMapaWindow → SparkMapaWindow__PosicaoDoJogador → SparkMapaWindow__L2ParaArte → LIT_"'Mouse wheel: zoom (all the way out: world)    Drag: move'" → SparkMapaWindow__TamanhoDaVista → UnityEngine_UIElements_VisualElement__get_style → TI_SparkMapaWindow → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → LIT_"''" → System_String__Concat → LIT_"' - '" → System_String__Concat → SparkMapaWindow__DesenhaTiles → SparkMapaWindow__PosicionaLojas → SparkMapaWindow__PosicionaNomesZoom → LIT_"''" → TI_SparkMapaWindow → LIT_"''" → System_String__Concat → LIT_"'Near '" → LIT_"'Mouse wheel: zoom (all the way out: world)    Drag: move'" → SparkMapaWindow__PosicionaJogador → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → MR_System.Collections.Generic.List<UnityEngine.Rect>..ctor → UnityEngine_UIElements_VisualElement__Children → UnityEngine_UIElements_VisualElement__get_userData → TI_SparkMapaWindow.Cidade → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Children → UnityEngine_UIElements_Visu

## SparkMapaWindow__MostraPonto
SparkMapaWindow__Centra

## SparkMapaWindow__NaPlantaAtual
SparkMapaWindow_Andar__Contem

## SparkMapaWindow__NaVista
SparkMapaWindow__TamanhoDaVista → SparkMapaWindow__L2ParaArte → SparkMapaWindow_Andar__NaPlanta

## SparkMapaWindow__NomeDaRegiao
LIT_"''" → TI_SparkMapaWindow → LIT_"''" → System_String__Concat → LIT_"'Near '"

## SparkMapaWindow__NomeDoLugar
LIT_"''" → TI_SparkMapaWindow → LIT_"''"

## SparkMapaWindow__OnDestroy
TI_SparkMapaWindow → UnityEngine_Object__op_Equality → TI_SparkMapaWindow → MD_SparkMapaWindow.PartyMudou → TI_SparkParty → SparkParty__remove_Mudou → MD_SparkMapaWindow.RadarMudou → TI_SparkQuests → SparkQuests__remove_MudouAcompanhamento → MD_SparkMapaWindow.PosicionaAmaldicoadas → TI_SparkAmaldicoadas → System_Delegate__Remove → TI_SparkAmaldicoadas

## SparkMapaWindow__ParaMovimento


## SparkMapaWindow__PartyMudou
TI_SparkParty → SparkParty__get_EmParty → TI_SparkEstilo → SparkEstilo__Liga → SparkMapaWindow__PosicionaJogador

## SparkMapaWindow__PedeAmaldicoadas
TI_SparkAmaldicoadas → MR_System.Array.Empty<int> → TI_SparkPacoteEx → SparkPacoteEx___ctor

## SparkMapaWindow__PlantaDaCidade
TI_SparkMapaWindow

## SparkMapaWindow__PlantaDeCidade
TI_SparkMapaWindow.Andar__,1 → TI_SparkMapaWindow.Andar → SparkMapaWindow_Andar___ctor → LIT_"''" → TI_SparkMapaWindow.Masmorra → SparkMapaWindow_Masmorra___ctor

## SparkMapaWindow__PontoNoMapa
TI_SparkMapaWindow.<>c__DisplayClass184_0 → SparkMapaWindow_Loja___ctor → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkEstilo → SparkEstilo__Borda → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__Add → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerEnterEvent> → MD_SparkMapaWindow.__c__DisplayClass184_0._PontoNoMapa_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerLeaveEvent> → MD_SparkMapaWindow.__c__DisplayClass184_0._PontoNoMapa_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerLeaveEvent>

## SparkMapaWindow__PosicaoDoArrasto


## SparkMapaWindow__PosicaoDoJogador3
UnityEngine_Object__op_Equality → UnityEngine_Component__get_transform → UnityEngine_Transform__get_position

## SparkMapaWindow__PosicaoDoJogador
UnityEngine_Object__op_Equality → UnityEngine_Component__get_transform → UnityEngine_Transform__get_position

## SparkMapaWindow__PosicionaAmaldicoadas
TI_SparkAmaldicoadas → UnityEngine_UIElements_VisualElement__get_childCount → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkMapaWindow → SparkMapaWindow__Letra → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_childCount → UnityEngine_UIElements_VisualElement__get_Item → MR_System.Collections.Generic.List<SparkAmaldicoadas.Arma>.get_Item → SparkMapaWindow__NaPlantaAtual → MR_System.Collections.Generic.List<SparkAmaldicoadas.Arma>.get_Item → TI_SparkAmaldicoadas → SparkAmaldicoadas__Icone → UnityEngine_UIElements_VisualElement__get_userData → UnityEngine_UIElements_VisualElement__set_userData → UnityEngine_UIElements_VisualElement__get_style → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_Item → TI_SparkAmaldicoadas → SparkAmaldicoadas__Nome → System_String__op_Inequality → SparkMapaWindow__NaVista → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## SparkMapaWindow__PosicionaDicaNome
UnityEngine_UIElements_VisualElement__get_userData → UnityEngine_Object__op_Inequality → TI_SparkParty → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Equality → UnityEngine_UIElements_VisualElement__get_style → TI_SparkMapaWindow → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## SparkMapaWindow__PosicionaJogador
SparkMapaWindow__PosicionaPino → SparkMapaWindow__PosicionaMembros → SparkMapaWindow__PosicionaAmaldicoadas → TI_SparkMapaWindow → SparkMapaWindow__PosicaoDoJogador3 → SparkMapaWindow__NaPlantaAtual → SparkMapaWindow__NaVista → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkMapaWindow__GiraSeta → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → SparkMapaWindow__PosicionaDicaNome

## SparkMapaWindow__PosicionaLojas
UnityEngine_UIElements_VisualElement__Children → UnityEngine_UIElements_VisualElement__get_userData → TI_SparkMapaWindow.Loja → SparkMapaWindow__NaVista → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__Children → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.get_value → UnityEngine_UIElements_VisualElement__get_userData → TI_SparkMapaWindow.Loja → UnityEngine_UIElements_VisualElement__get_Item → SparkMapaWindow__NaVista → MR_System.Collections.Generic.List<UnityEngine.Rect>.GetEnumerator → MR_System.Collections.Generic.List<UnityEngine.Rect>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<UnityEngine.Rect>.Dispose → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## SparkMapaWindow__PosicionaMembros
TI_SparkParty → UnityEngine_UIElements_VisualElement__get_childCount → TI_SparkMapaWindow → SparkMapaWindow__PontoNoMapa → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_childCount → UnityEngine_UIElements_VisualElement__get_Item → TI_SparkParty → SparkParty__PosicaoDoMembro → SparkMapaWindow__NaPlantaAtual → UnityEngine_UIElements_VisualElement__set_userData → SparkMapaWindow__NaVista → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## SparkMapaWindow__PosicionaNomesZoom
UnityEngine_UIElements_VisualElement__Children → UnityEngine_UIElements_VisualElement__get_userData → TI_SparkMapaWindow.Cidade → UnityEngine_UIElements_VisualElement__get_userData → TI_SparkMapaWindow.Cidade → UnityEngine_UIElements_VisualElement__get_userData → TI_SparkMapaWindow.Area → SparkMapaWindow__NaVista → TI_SparkMapaWindow → MR_System.Collections.Generic.List<UnityEngine.Rect>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<UnityEngine.Rect>.Dispose → MR_System.Collections.Generic.List<UnityEngine.Rect>.Add → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## SparkMapaWindow__PosicionaPino
TI_SparkQuests → SparkQuests__AlvoDoLocal → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → SparkMapaWindow_Andar__NaConstrucao → SparkMapaWindow_Andar__NaTextura → SparkMapaWindow__NaVista → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## SparkMapaWindow__ProximoMembro
TI_SparkParty → LIT_"'You are not in a party.'" → LIT_"'Party member locations are not known yet.'" → TI_SparkParty → SparkParty__PosicaoDoMembro → SparkMapaWindow__Centra → LIT_"'Party member locations are not known yet.'" → SparkMapaWindow__Avisa

## SparkMapaWindow__RadarMudou
SparkMapaWindow__MarcaRadar → SparkMapaWindow__PosicionaPino → SparkMapaWindow__PosicionaMembros → SparkMapaWindow__PosicionaAmaldicoadas → TI_SparkMapaWindow → SparkMapaWindow__PosicaoDoJogador3 → SparkMapaWindow__NaPlantaAtual → SparkMapaWindow__NaVista → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → SparkMapaWindow__GiraSeta → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → SparkMapaWindow__PosicionaDicaNome

## SparkMapaWindow__RadarUsaPlanta
TI_SparkRadarWindow → UnityEngine_Object__op_Inequality → TI_SparkRadarWindow → UnityEngine_Object__op_Inequality

## SparkMapaWindow__Radar
TI_SparkQuests → SparkQuests__RadarEm → TI_SparkQuests → SparkQuests__MostraRadar → SparkMapaWindow__Centra → TI_SparkQuests → SparkQuests__MostraRadar

## SparkMapaWindow__Redesenha
LIT_"'Mouse wheel: zoom (all the way out: world)    Drag: move'" → SparkMapaWindow__TamanhoDaVista → UnityEngine_UIElements_VisualElement__get_style → TI_SparkMapaWindow → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → LIT_"''" → System_String__Concat → LIT_"' - '" → System_String__Concat → SparkMapaWindow__DesenhaTiles → SparkMapaWindow__PosicionaLojas → SparkMapaWindow__PosicionaNomesZoom → LIT_"''" → TI_SparkMapaWindow → LIT_"''" → System_String__Concat → LIT_"'Near '" → LIT_"'Mouse wheel: zoom (all the way out: world)    Drag: move'" → SparkMapaWindow__PosicionaJogador → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → MR_System.Collections.Generic.List<UnityEngine.Rect>..ctor → UnityEngine_UIElements_VisualElement__Children → UnityEngine_UIElements_VisualElement__get_userData → TI_SparkMapaWindow.Cidade → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Children → UnityEngine_UIElements_VisualElement__get_userData → SparkMapaWindow__L2ParaArte → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## SparkMapaWindow__Resolve
TI_SparkMapaWindow → SparkMapaWindow___Resolve_g__Det_213_0 → TI_SparkMapaWindow → SparkMapaWindow___Resolve_g__Det_213_0

## SparkMapaWindow__Roda
SparkMapaWindow__TamanhoDaVista → SparkMapaWindow__L2ParaArte → SparkMapaWindow__ArteParaL2 → SparkMapaWindow__TamanhoDaVista → SparkMapaWindow__ParaMovimento → SparkMapaWindow__Redesenha → SparkMapaWindow__TamanhoDaVista → SparkMapaWindow__MostraMundo → TI_SparkMapaWindow

## SparkMapaWindow__Rotulo
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_SparkMapaWindow → SparkMapaWindow__Letra → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleTextShadow__op_Implicit → UnityEngine_UIElements_VisualElement__Add → SparkMapaWindow__Letra → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleTextShadow__op_Implicit → UnityEngine_UIElements_VisualElement__Add

## SparkMapaWindow__SaiDoInterno
UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_Object__op_Inequality → TI_SparkMapaWindow → SparkMapaWindow__RadarUsaPlanta → UnityEngine_Resources__UnloadAsset → UnityEngine_UIElements_VisualElement__Clear → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## SparkMapaWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → L2GameUI__WindowOpened → TI_SparkMapaWindow → SparkMapaWindow__PosicaoDoJogador → SparkMapaWindow__MostraMundo → SparkMapaWindow__EntraNaRegiao → LIT_"'?'" → SparkMapaWindow__ConfereInterno → SparkMapaWindow__Redesenha → SparkMapaWindow__MostraHoraDoJogo → TI_SparkAmaldicoadas → SparkAmaldicoadas__Pede → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit

## SparkMapaWindow__TamanhoDaVista
UnityEngine_UIElements_VisualElement__get_resolvedStyle

## SparkMapaWindow__TextoDoBotao
MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## SparkMapaWindow__Tile
MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.TryGetValue → MR_System.Collections.Generic.Dictionary<string,float>.TryGetValue → System_String__Concat → LIT_"'Data/UI/Assets/Mapa/tiles/'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_Object__op_Equality → MR_System.Collections.Generic.Dictionary<string,float>.Remove → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__Add → MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.set_Item → TI_SparkMapaWindow → System_String__op_Inequality → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__Add → MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.set_Item → MR_System.Collections.Generic.Dictionary<string,float>.set_Item

## SparkMapaWindow__ToggleHideWindow


## SparkMapaWindow__TrocaAndar
TI_SparkMapaWindow → SparkMapaWindow__PosicaoDoJogador3 → SparkMapaWindow_Andar__Contem → MR_System.Nullable<UnityEngine.Vector2>..ctor → SparkMapaWindow__AbreInterno

## SparkMapaWindow__Update
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → SparkMapaWindow__AplicaFade → SparkMapaWindow__Arrasta → UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition → SparkMapaWindow__AplicaZoom → SparkMapaWindow__Redesenha → SparkMapaWindow__Florestas

## SparkMapaWindow__UsaPlanta
UnityEngine_Object__op_Inequality → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_Object__op_Equality

## SparkMapaWindow__ZoomMinimoDaArte
SparkMapaWindow__TamanhoDaVista

## SparkMapaWindow__ZoomMinimoInterno
SparkMapaWindow__TamanhoDaVista

## SparkMapaWindow___cctor
SparkMapaWindow___cctor

## SparkMapaWindow___ctor
MR_System.Collections.Generic.List<UnityEngine.Rect>..ctor → LIT_"'?'" → TI_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>> → MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>..ctor → MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>..ctor → MR_System.Collections.Generic.Dictionary<string,float>..ctor → MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>..ctor → TI_SparkMapaWindow → TI_L2Window

## SparkMedidorRede__OnGUI
UnityEngine_GUI__get_skin → UnityEngine_GUIStyle___ctor → UnityEngine_GUIStyle__set_alignment → UnityEngine_GUIStyle__set_fontSize → UnityEngine_RectOffset___ctor → UnityEngine_GUIStyle__set_padding → UnityEngine_GUIStyle__get_normal → UnityEngine_GUIStyleState__set_textColor → UnityEngine_GUI__Box

## SparkMedidorRede__Update
LIT_"'FPS {0:F0}  (worst frame {1:F0} ms)\\n'" → LIT_"'Events {0:F0}/frame (max {1})  max wait {2:F0} ms\\n'" → UnityEngine_Input__GetKey → UnityEngine_Input__GetKeyDown → TI_SparkVip → UnityEngine_FrameTimingManager__GetLatestTimings → TI_SparkMedidorRede → UnityEngine_Object__op_Inequality → WorldSpawner__get_Entidades → System_String__Format → LIT_"'FPS {0:F0}  (worst frame {1:F0} ms)\\n'" → TI_SparkMedidorRede → System_String__Format → LIT_"'Packets {0:F0}/s  queue {1}  max wait {2:F0} ms\\n'" → TI_SparkMedidorRede → System_String__Format → LIT_"'Events {0:F0}/frame (max {1})  max wait {2:F0} ms\\n'" → System_String__Format → LIT_"'Characters {0}'" → LIT_"'\\n'" → SparkMedidorRede__Tempos → System_String__Concat → TI_SparkMedidorRede

## SparkMoveisDoMapa__Monta
LIT_"'[SPARK] peca movel nao montada (SPARK/Moveis/Montar): '" → TI_System.Collections.Generic.List<System.ValueTuple<UnityEngine.Transform,SparkMoveisDoMapa.Movel>> → MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.Transform,SparkMoveisDoMapa.Movel>>..ctor → UnityEngine_GameObject___ctor → LIT_"'SparkMoveisDoMapa'" → UnityEngine_SceneManagement_SceneManager__MoveGameObjectToScene → MR_System.Collections.Generic.List<SparkMoveisDoMapa.Movel>.GetEnumerator → MR_System.Collections.Generic.List<SparkMoveisDoMapa.Movel>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkMoveisDoMapa.Movel>.Dispose → TI_SparkMoveisDoMapa → MR_System.Collections.Generic.Dictionary<string,UnityEngine.GameObject>.TryGetValue → System_String__Concat → LIT_"'Data/MalhasL2/Moveis/'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.GameObject> → UnityEngine_Object__op_Equality → System_String__Concat → LIT_"'[SPARK] peca movel nao montada (SPARK/Moveis/Montar): '" → UnityEngine_Debug__LogWarning → TI_SparkMoveisDoMapa → MR_System.Collections.Generic.Dictionary<string,UnityEngine.GameObject>.set_Item → UnityEngine_Object__op_Equality → TI_SparkMoveisDoMapa → SparkMoveisDoMapa__GiroUE → UnityEngine_GameObject__get_transform → MR_UnityEngine.Object.Instantiate<UnityEngine.GameObject> → System_String__Concat → LIT_"'.'" → UnityEngine_GameObject__get_transform → UnityEngine_Transform__set_localScale → TI_SparkMoveisDoMapa → MR_UnityEngine.GameObject.GetComponent<UnityEngine.MeshFilter> → UnityEngine_Object__op_Inequality → UnityEngine_MeshFilter__get_sharedMesh → UnityEngine_Object__op_Inequality → MR_UnityEngine.GameObject.AddComponent<UnityEngine.MeshCollider> → UnityEngine_MeshFilter__get_sharedMesh → UnityEngine_MeshCollider__set_sharedMesh → MR_UnityEngine.GameObject.AddComponent<UnityEngine.Rigidbody> → UnityEngine_Rigidbody__set_isKinematic → UnityEngine_GameObject__get_transform → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → MR_System.ValueTuple<UnityEngine.Transform,SparkMoveisDoMapa.Movel>..ctor → MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.Transform,SparkMoveisDoMapa.Movel>>.Add

## SparkMoveisDoMapa__Update
MR_System.Collections.Generic.Dictionary<string,System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>>.get_Count → UnityEngine_Camera__get_main → UnityEngine_Object__op_Equality → UnityEngine_Component__get_transform → UnityEngine_Transform__get_position → MR_System.Collections.Generic.Dictionary<string,System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>>.get_Values → MR_System.Collections.Generic.Dictionary<string,System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>>.GetEnumerator → MR_System.Collections.Generic.Dictionary<string,System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<string,System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>>.Dispose → MR_System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>.GetEnumerator → MR_System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>.Dispose → UnityEngine_Object__op_Equality → TI_SparkMoveisDoMapa → SparkMoveisDoMapa__Balanco → SparkMoveisDoMapa__GiroUE → UnityEngine_Transform__set_rotation → UnityEngine_Transform__get_position

## SparkObservador__Awake
TI_SparkObservador → UnityEngine_Object__op_Equality → TI_SparkObservador → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SparkObservador__Esconde
MR_UnityEngine.Component.GetComponentsInChildren<UnityEngine.Renderer> → UnityEngine_Renderer__get_enabled → UnityEngine_Renderer__set_enabled

## SparkObservador__FechaAjuda
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_PlayerPrefs__SetInt → LIT_"'spark.obs.ajuda.fechada'"

## SparkObservador__Monta
TI_SparkEstilo → SparkEstilo__Painel → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleRotate__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → SparkEstilo__Espaco → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Observing'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MD_SparkObservador._Monta_b__26_0 → SparkEstilo__Botao → LIT_"'Keys'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MD_SparkObservador.PedeSair → SparkEstilo__Botao → LIT_"'Leave'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → TI_MouseOverDetectionManipulator → MouseOverDetectionManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Painel → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleRotate__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → SparkEstilo__Espaco → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → Spark

## SparkObservador__MostraAjuda
UnityEngine_PlayerPrefs__GetInt → LIT_"'spark.obs.ajuda.fechada'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__BringToFront

## SparkObservador__OnDestroy
TI_SparkObservador → UnityEngine_Object__op_Inequality → TI_SparkObservador → UnityEngine_Object__op_Inequality → UnityEngine_Component__get_gameObject → UnityEngine_Object__Destroy

## SparkObservador__Update
TI_SparkObservador → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Inequality → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_Object__op_Equality → MR_UnityEngine.Component.GetComponentsInChildren<UnityEngine.Renderer> → UnityEngine_Renderer__get_enabled → UnityEngine_Renderer__set_enabled → UnityEngine_Component__get_transform → UnityEngine_Transform__get_position → SparkObservador__Centra → UnityEngine_Object__op_Inequality → SparkObservador__Move

## SparkOpcoes_Executor__Garante
TI_SparkOpcoes.Executor → UnityEngine_Object__op_Inequality → UnityEngine_GameObject___ctor → LIT_"'SparkOpcoes'" → UnityEngine_Object__DontDestroyOnLoad → MR_UnityEngine.GameObject.AddComponent<SparkOpcoes.Executor> → TI_SparkOpcoes.Executor

## SparkOpcoes_Executor__Update
UnityEngine_Camera__get_main → UnityEngine_Object__op_Inequality → UnityEngine_Camera__get_main → TI_SparkOpcoes → UnityEngine_Camera__get_main → UnityEngine_Object__op_Equality → TI_SparkOpcoes → UnityEngine_Camera__set_farClipPlane → UnityEngine_Rendering_Universal_CameraExtensions__GetUniversalAdditionalCameraData → UnityEngine_Object__op_Inequality → TI_SparkOpcoes

## SparkOpcoes__AplicaAudio
TI_SparkOpcoes

## SparkOpcoes__AplicaCamera
UnityEngine_Camera__get_main → UnityEngine_Object__op_Equality → TI_SparkOpcoes → UnityEngine_Camera__set_farClipPlane → UnityEngine_Rendering_Universal_CameraExtensions__GetUniversalAdditionalCameraData → UnityEngine_Object__op_Inequality → TI_SparkOpcoes

## SparkOpcoes__AplicaEfeitos
TI_SparkOpcoes → UnityEngine_Object__op_Equality → UnityEngine_GameObject___ctor → LIT_"'SparkOpcoesVolume'" → UnityEngine_LayerMask__NameToLayer → LIT_"'BoxVolume'" → UnityEngine_GameObject__set_layer → UnityEngine_Object__DontDestroyOnLoad → MR_UnityEngine.GameObject.AddComponent<UnityEngine.Rendering.Volume> → TI_SparkOpcoes → UnityEngine_Rendering_Volume__set_isGlobal → TI_SparkOpcoes → MR_UnityEngine.ScriptableObject.CreateInstance<UnityEngine.Rendering.VolumeProfile> → MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.Bloom> → TI_SparkOpcoes → MR_UnityEngine.Rendering.VolumeParameter<float>.Override → MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.DepthOfField> → TI_SparkOpcoes → MR_UnityEngine.Rendering.VolumeParameter<UnityEngine.Rendering.Universal.DepthOfFieldMode>.Override → MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.ChromaticAberration> → TI_SparkOpcoes → MR_UnityEngine.Rendering.VolumeParameter<float>.Override → MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.ScreenSpaceLensFlare> → TI_SparkOpcoes → MR_UnityEngine.Rendering.VolumeParameter<float>.Override → MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.ColorAdjustments> → TI_SparkOpcoes → MR_UnityEngine.Rendering.VolumeParameter<float>.Override → TI_SparkOpcoes

## SparkOpcoes__AplicaInterface
TI_ChatWindow → ChatWindow__AplicaFundo → TI_SkillbarWindow → SkillbarWindow__AplicaEscala → TI_SkillbarWindow → TI_BuffWindow → TI_SparkOpcoes → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → MR_System.Collections.Generic.List<BuffSlot>.GetEnumerator → MR_System.Collections.Generic.List<BuffSlot>.MoveNext → TI_AbstractEffectWindow → AbstractEffectWindow__PoeTamanho → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<BuffSlot>.Dispose → MR_System.Collections.Generic.List<BuffSlot>.GetEnumerator → MR_System.Collections.Generic.List<BuffSlot>.MoveNext → TI_AbstractEffectWindow → AbstractEffectWindow__PoeTamanho → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<BuffSlot>.Dispose → MR_System.Collections.Generic.List<BuffSlot>.GetEnumerator → MR_System.Collections.Generic.List<BuffSlot>.MoveNext → TI_AbstractEffectWindow → AbstractEffectWindow__PoeTamanho → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<BuffSlot>.Dispose → MR_System.Collections.Generic.List<BuffSlot>.GetEnumerator → MR_System.Collections.Generic.List<BuffSlot>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<BuffSlot>.Dispose → TI_AbstractEffectWindow → AbstractEffectWindow__PoeTamanho → UnityEngine_Object__op_Inequality → TI_AbstractEffectWindow → AbstractEffectWindow__PoeTamanho

## SparkOpcoes__AplicaMultidao
TI_SparkOpcoes → TI_SparkMultidao → SparkMultidao__get_HardwareSuporta → TI_SparkDesempenho

## SparkOpcoes__AplicaQualidade
LIT_"' (SPARK)'" → TI_SparkOpcoes → UnityEngine_Object__op_Equality → UnityEngine_Rendering_GraphicsSettings__get_currentRenderPipeline → MR_UnityEngine.Object.Instantiate<UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset> → TI_SparkOpcoes → System_String__Concat → LIT_"' (SPARK)'" → UnityEngine_QualitySettings__set_renderPipeline → TI_SparkOpcoes → UnityEngine_Object__op_Inequality → TI_SparkOpcoes → TI_SparkResolucao → SparkResolucao__Aplica → TI_SparkOpcoes → UnityEngine_Rendering_Universal_UniversalRenderPipelineAsset__set_shadowCascadeCount → TI_SparkOpcoes → UnityEngine_Camera__get_main → UnityEngine_Object__op_Equality → TI_SparkOpcoes → UnityEngine_Camera__set_farClipPlane → UnityEngine_Rendering_Universal_CameraExtensions__GetUniversalAdditionalCameraData → UnityEngine_Object__op_Inequality → TI_SparkOpcoes → UnityEngine_Object__op_Equality → UnityEngine_GameObject___ctor → LIT_"'SparkOpcoesVolume'" → UnityEngine_LayerMask__NameToLayer → LIT_"'BoxVolume'" → UnityEngine_GameObject__set_layer → UnityEngine_Object__DontDestroyOnLoad → MR_UnityEngine.GameObject.AddComponent<UnityEngine.Rendering.Volume> → TI_SparkOpcoes → UnityEngine_Rendering_Volume__set_isGlobal → TI_SparkOpcoes → MR_UnityEngine.ScriptableObject.CreateInstance<UnityEngine.Rendering.VolumeProfile> → MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.Bloom> → TI_SparkOpcoes → MR_UnityEngine.Rendering.VolumeParameter<float>.Override → MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.DepthOfField> → TI_SparkOpcoes → MR_UnityEngine.Rendering.VolumeParameter<UnityEngine.Rendering.Universal.DepthOfFieldMode>.Override → MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.ChromaticAberration> → TI_SparkOpcoes → MR_UnityEngine.Rendering.VolumeParameter<float>.Override → MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.ScreenSpaceLensFlare> → TI_SparkOpcoes → MR_UnityEngine.Rendering.VolumeParameter<float>.Override → MR_UnityEngine.Rendering.VolumeProfile.Add<UnityEngine.Rendering.Universal.ColorAdjustments> → TI_SparkOpcoes → MR_UnityEngine.Rendering.VolumeParameter<float>.Override → TI_SparkOpcoes

## SparkOpcoes__AplicaTela
TI_SparkOpcoes → UnityEngine_Screen__get_currentResolution → TI_SparkOpcoes → UnityEngine_Screen__get_currentResolution → TI_SparkOpcoes → UnityEngine_Screen__get_currentResolution → TI_SparkOpcoes → UnityEngine_Screen__get_resolutions → TI_SparkOpcoes → UnityEngine_Screen__SetResolution → TI_SparkOpcoes

## SparkOpcoes__AplicaTudo
TI_SparkOpcoes → SparkOpcoes__Carrega → TI_SparkOpcoes → SparkOpcoes__AplicaTela → TI_SparkOpcoes → SparkOpcoes__AplicaQualidade → SparkOpcoes__AplicaAudio → SparkOpcoes_Executor__Garante → TI_SparkDetalhePersonagem → UnityEngine_Object__op_Inequality → UnityEngine_GameObject___ctor → LIT_"'SparkDetalhePersonagem'" → UnityEngine_Object__DontDestroyOnLoad → MR_UnityEngine.GameObject.AddComponent<SparkDetalhePersonagem> → TI_SparkDetalhePersonagem

## SparkOpcoes__Carrega
TI_SparkOpcoes → UnityEngine_Screen__get_currentResolution → SparkOpcoes__Le → LIT_"'spark.opt.w'" → TI_SparkOpcoes → UnityEngine_Screen__get_currentResolution → SparkOpcoes__Le → LIT_"'spark.opt.h'" → TI_SparkOpcoes → UnityEngine_Screen__get_resolutions → UnityEngine_Screen__get_currentResolution → TI_SparkOpcoes → UnityEngine_Screen__get_currentResolution → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.hz'" → TI_SparkOpcoes → LIT_"'spark.opt.modo'" → TI_SparkOpcoes → SparkOpcoes__Le → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.vsync'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.fps'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.fps60'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.fps'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.fps60'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.preset'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.escala'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.sombras'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.aa'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.dist'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.tex'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.bloom'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.dof'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.cinema'" → TI_SparkOpcoes → SparkOpcoes__LeF → LIT_"'spark.opt.vol.geral'" → TI_SparkOpcoes → SparkOpcoes__LeF → LIT_"'spark.opt.vol.musica'" → TI_SparkOpcoes → SparkOpcoes__LeF → LIT_"'spark.opt.vol.efeitos'" → TI_SparkOpcoes → SparkOpcoes__LeF → LIT_"'spark.opt.vol.interface'" → TI_SparkOpcoes → SparkOpcoes__LeF → LIT_"'spark.opt.vol.ambiente'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.mudosemfoco'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.mudo'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.party'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.corparty'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.lootparty'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.mostrafps'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.mostraping'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.corinfo'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.tamanhoinfo'" → TI_SparkOpcoes → SparkOpcoes__LeF → LIT_"'spark.opt.brilho'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.invertey'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.inverteroda'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.enterchat'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.sombrapers'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.detalhepers'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.distnome'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.lodpers2'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.sombrasimples'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.multidaogpu'" → TI_SparkOpcoes → SparkOpcoes__AplicaMultidao → SparkOpcoes__Le → LIT_"'spark

## SparkOpcoes__ClimaValido
TI_SparkOpcoes

## SparkOpcoes__DaMinhaParty
TI_SparkOpcoes → UnityEngine_Object__op_Equality → TI_SparkParty → SparkParty__get_EmParty → UnityEngine_Object__op_Equality → TI_SparkParty

## SparkOpcoes__GravaControles
TI_SparkOpcoes → LIT_"'spark.opt.invertey'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.inverteroda'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.enterchat'" → TI_SparkOpcoes → UnityEngine_PlayerPrefs__SetInt

## SparkOpcoes__GravaF
UnityEngine_PlayerPrefs__SetFloat

## SparkOpcoes__Grava
UnityEngine_PlayerPrefs__SetInt

## SparkOpcoes__LeClima
UnityEngine_PlayerPrefs__HasKey → LIT_"'spark.opt.clima3'" → UnityEngine_PlayerPrefs__HasKey → LIT_"'spark.opt.clima2'" → UnityEngine_PlayerPrefs__GetInt → LIT_"'spark.opt.clima'" → UnityEngine_PlayerPrefs__GetInt → LIT_"'spark.opt.clima2'" → UnityEngine_PlayerPrefs__GetInt → LIT_"'spark.opt.clima3'"

## SparkOpcoes__LeF
UnityEngine_PlayerPrefs__GetFloat

## SparkOpcoes__Le
UnityEngine_PlayerPrefs__GetInt

## SparkOpcoes__MudaCeu
TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.ceu'" → TI_SparkOpcoes

## SparkOpcoes__MudaClima
TI_SparkOpcoes → SparkOpcoes__ClimaValido → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.clima3'" → TI_SparkOpcoes

## SparkOpcoes__PadraoAudio
TI_SparkOpcoes

## SparkOpcoes__PadraoInterface
TI_SparkOpcoes → SparkOpcoes__MudaCeu → TI_SparkOpcoes → SparkOpcoes__ClimaValido → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.clima3'" → TI_SparkOpcoes

## SparkOpcoes__PadraoJogo
TI_SparkOpcoes

## SparkOpcoes__PadraoTextoDano
TI_SparkOpcoes

## SparkOpcoes__PadraoVideo
UnityEngine_Screen__get_currentResolution → TI_SparkOpcoes → UnityEngine_Screen__get_currentResolution → TI_SparkOpcoes → SparkOpcoes__AplicaMultidao → TI_SparkOpcoes

## SparkOpcoes__PoeMinimo
TI_SparkOpcoes → SparkOpcoes__UsaPreset → TI_SparkOpcoes

## SparkOpcoes__RazaoDoCeu
TI_SparkOpcoes

## SparkOpcoes__Recarrega
TI_SparkOpcoes → UnityEngine_Screen__get_currentResolution → SparkOpcoes__Le → LIT_"'spark.opt.w'" → TI_SparkOpcoes → UnityEngine_Screen__get_currentResolution → SparkOpcoes__Le → LIT_"'spark.opt.h'" → TI_SparkOpcoes → UnityEngine_Screen__get_resolutions → UnityEngine_Screen__get_currentResolution → TI_SparkOpcoes → UnityEngine_Screen__get_currentResolution → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.hz'" → TI_SparkOpcoes → LIT_"'spark.opt.modo'" → TI_SparkOpcoes → SparkOpcoes__Le → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.vsync'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.fps'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.fps60'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.fps'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.fps60'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.preset'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.escala'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.sombras'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.aa'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.dist'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.tex'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.bloom'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.dof'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.cinema'" → TI_SparkOpcoes → SparkOpcoes__LeF → LIT_"'spark.opt.vol.geral'" → TI_SparkOpcoes → SparkOpcoes__LeF → LIT_"'spark.opt.vol.musica'" → TI_SparkOpcoes → SparkOpcoes__LeF → LIT_"'spark.opt.vol.efeitos'" → TI_SparkOpcoes → SparkOpcoes__LeF → LIT_"'spark.opt.vol.interface'" → TI_SparkOpcoes → SparkOpcoes__LeF → LIT_"'spark.opt.vol.ambiente'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.mudosemfoco'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.mudo'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.party'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.corparty'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.lootparty'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.mostrafps'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.mostraping'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.corinfo'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.tamanhoinfo'" → TI_SparkOpcoes → SparkOpcoes__LeF → LIT_"'spark.opt.brilho'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.invertey'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.inverteroda'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.enterchat'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.sombrapers'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.detalhepers'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.distnome'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.lodpers2'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.sombrasimples'" → TI_SparkOpcoes → SparkOpcoes__Le → LIT_"'spark.opt.multidaogpu'" → TI_SparkOpcoes → SparkOpcoes__AplicaMultidao → SparkOpcoes__Le → LIT_"'spark

## SparkOpcoes__ResolucaoExiste
UnityEngine_Screen__get_resolutions

## SparkOpcoes__SalvaJogo
TI_SparkOpcoes → LIT_"'spark.opt.party'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.corparty'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.lootparty'" → TI_SparkOpcoes → SparkOpcoes__GravaControles

## SparkOpcoes__Salva
TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.w'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.h'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.hz'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.modo'" → TI_SparkOpcoes → LIT_"'spark.opt.vsync'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.fps'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.fpssemfoco'" → TI_SparkOpcoes → SparkOpcoes__GravaF → LIT_"'spark.opt.chatfundo'" → TI_SparkOpcoes → SparkOpcoes__GravaF → LIT_"'spark.opt.escalaatalhos'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.tamanhobuff'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.preset'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.escala'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.sombras'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.aa'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.dist'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.tex'" → TI_SparkOpcoes → LIT_"'spark.opt.bloom'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.dof'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.cinema'" → TI_SparkOpcoes → SparkOpcoes__Grava → TI_SparkOpcoes → SparkOpcoes__GravaF → LIT_"'spark.opt.vol.geral'" → TI_SparkOpcoes → SparkOpcoes__GravaF → LIT_"'spark.opt.vol.musica'" → TI_SparkOpcoes → SparkOpcoes__GravaF → LIT_"'spark.opt.vol.efeitos'" → TI_SparkOpcoes → SparkOpcoes__GravaF → LIT_"'spark.opt.vol.interface'" → TI_SparkOpcoes → SparkOpcoes__GravaF → LIT_"'spark.opt.vol.ambiente'" → TI_SparkOpcoes → LIT_"'spark.opt.mudosemfoco'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.mudo'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.party'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.corparty'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.lootparty'" → TI_SparkOpcoes → LIT_"'spark.opt.mostrafps'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.mostraping'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.corinfo'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.tamanhoinfo'" → TI_SparkOpcoes → SparkOpcoes__GravaF → LIT_"'spark.opt.brilho'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.sombrapers'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.detalhepers'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.distnome'" → TI_SparkOpcoes → LIT_"'spark.opt.lodpers2'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.sombrasimples'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.multidaogpu'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.upscaler'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.fsrnitidez'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.resdin'" → TI_SparkOpcoes → TI_SparkApiGrafica → SparkApiGrafica__GravaEscolha → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.efeitos.mostra'" → TI_SparkOpcoes → SparkOpcoes__Grava → LIT_"'spark.opt.efei

## SparkOpcoes__TrocaMinimo
TI_SparkOpcoes → SparkOpcoes__Carrega → TI_SparkOpcoes → LIT_"'spark.opt.minimo'" → TI_SparkOpcoes → SparkOpcoes__Grava → TI_SparkOpcoes → SparkOpcoes__Carrega → TI_SparkOpcoes → SparkOpcoes__PoeMinimo → TI_SparkOpcoes → SparkOpcoes__AplicaQualidade → TI_SparkOpcoes → LIT_"'Low detail mode: off.'" → TI_SparkOpcoes → TI_SparkTeclas → SparkTeclas__TextoDaAcao → LIT_"'LowDetail'" → System_String__Concat → LIT_"'Low detail mode: on. Press '" → LIT_"' again to restore your settings.'" → TI_SparkComandos → SMParam___ctor → TI_ChatWindow → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → ChatWindow__ReceiveSystemMessage

## SparkOpcoes__TrocaMudo
TI_SparkOpcoes → SparkOpcoes__Carrega → TI_SparkOpcoes → SparkOpcoes__AplicaAudio → SparkOpcoes__Salva → LIT_"'Sound on.'" → TI_SparkOpcoes → LIT_"'Sound muted. Press \" → TI_SparkComandos → SMParam___ctor → TI_ChatWindow → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → ChatWindow__ReceiveSystemMessage

## SparkOpcoes__UsaPreset
TI_SparkOpcoes

## SparkOpcoes___cctor
LIT_"'Auto (Server time)'" → LIT_"'Off (Bilinear)'" → LIT_"'Auto (monitor)'" → TI_SparkOpcoes → LIT_"'Finders Keepers'"

## SparkParty__PassaLider
TI_SparkParty → SparkParty__NomeDoAlvoJogador → TI_SparkParty → SparkParty__get_SouLider → MR_System.Array.Empty<int> → TI_SparkPacoteTexto → SparkPacoteTexto___ctor

## SparkPescaJanela__Abre
TI_SparkPescaJanela → SparkPescaJanela__Monta → TI_SparkPescaJanela → MR_System.Collections.Generic.List<UnityEngine.Vector2>.Add → TI_SparkPescaJanela → LIT_"''" → TI_SparkPescaJanela → LIT_"'The fight begins!'" → TI_SparkPescaJanela → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → SparkPescaJanela__Mostra → TI_SparkPescaJanela → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## SparkPescaJanela__Monta
TI_SparkPescaJanela → UnityEngine_Object__op_Inequality → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_name → LIT_"'SparkPescaJanela'" → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_SparkPescaJanela → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → TI_SparkPescaJanela → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkPescaJanela → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkPescaJanela → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkPescaJanela → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkPescaJanela → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkEstilo → SparkEstilo__Borda → TI_SparkPescaJanela → SparkEstilo__Espaco → TI_SparkPescaJanela → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'Fishing'" → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → TI_SparkPescaJanela → UnityEngine_UIElements_VisualElement__Add → TI_SparkPescaJanela → UnityEngine_UIElements_VisualElement__Add → TI_SparkPescaJanela → SparkEstilo__Divisor → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkEstilo → SparkEstilo__Borda → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_SparkPescaJanela → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkPescaJanela → UnityEngine_UIElements_VisualElement__get_style → TI_SparkPescaJanela → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_SparkPescaJanela → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElem

## SparkPescaJanela__Mostra
TI_SparkPescaJanela → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkPescaJanela → UnityEngine_UIElements_VisualElement__get_style → TI_SparkPescaJanela → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkPescaJanela → System_String__Format → LIT_"'{0} / {1}'" → TI_SparkPescaJanela → System_String__Format → LIT_"'{0}s'" → TI_SparkPescaJanela → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkPescaJanela → LIT_"'The fish is resting... or is it?'" → LIT_"'The fish is fighting... or is it?'" → TI_SparkPescaJanela → UnityEngine_UIElements_VisualElement__get_style → TI_SparkPescaJanela → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkPescaJanela → LIT_"'The fish is resting.'" → LIT_"'The fish is fighting!'" → TI_SparkPescaJanela → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkPescaJanela → LIT_"''" → TI_SparkPescaJanela → LIT_"'Use Pumping'" → LIT_"'Use Reeling'" → TI_SparkPescaJanela

## SparkPesca__LateUpdate
MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.GetEnumerator → MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.Dispose → MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Boia>.get_Count → System_Array__Clear → MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Boia>.GetEnumerator → MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Boia>.MoveNext → UnityEngine_Object__op_Equality → TI_SparkPesca → SparkPesca__Ponta → UnityEngine_GameObject__get_activeSelf → UnityEngine_GameObject__SetActive → UnityEngine_GameObject__get_activeSelf → UnityEngine_GameObject__SetActive → UnityEngine_GameObject__get_transform → UnityEngine_Quaternion__Internal_FromEulerRad → UnityEngine_Transform__SetPositionAndRotation → UnityEngine_LineRenderer__SetPosition → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Boia>.Dispose → MR_System.Collections.Generic.List<Entity>.GetEnumerator → MR_System.Collections.Generic.List<Entity>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<Entity>.Dispose → MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Boia>.TryGetValue → UnityEngine_Object__op_Inequality → UnityEngine_Object__Destroy → MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Boia>.Remove → UnityEngine_Object__op_Equality → UnityEngine_Transform__SetPositionAndRotation

## SparkPesca__MontaBoia
UnityEngine_GameObject___ctor → LIT_"'Boia'" → UnityEngine_GameObject__get_transform → TI_SparkPesca → SparkPesca__Parte → UnityEngine_GameObject__get_transform → SparkPesca__Parte → UnityEngine_GameObject__get_transform → SparkPesca__Parte

## SparkPesca__MontaLinha
TI_SparkPesca → UnityEngine_Object__op_Equality → TI_SparkArte → SparkArte__AchaShader → LIT_"'Universal Render Pipeline/Unlit'" → UnityEngine_Object__op_Equality → TI_SparkArte → SparkArte__AchaShader → LIT_"'Sprites/Default'" → UnityEngine_Object__op_Inequality → TI_SparkPesca → UnityEngine_Object__op_Inequality → TI_SparkPesca → UnityEngine_Material___ctor → TI_SparkPesca → UnityEngine_Object__op_Inequality → TI_SparkPesca → UnityEngine_Material__set_color → TI_SparkPesca → UnityEngine_Material__HasProperty → LIT_"'_BaseColor'" → TI_SparkPesca → UnityEngine_Material__SetColor → LIT_"'_BaseColor'" → UnityEngine_GameObject___ctor → LIT_"'Linha'" → UnityEngine_GameObject__get_transform → UnityEngine_Transform__SetParent → MR_UnityEngine.GameObject.AddComponent<UnityEngine.LineRenderer> → UnityEngine_LineRenderer__set_useWorldSpace → UnityEngine_LineRenderer__set_positionCount → UnityEngine_LineRenderer__set_widthMultiplier → UnityEngine_LineRenderer__set_numCapVertices → UnityEngine_LineRenderer__set_alignment → UnityEngine_Renderer__set_shadowCastingMode → UnityEngine_Renderer__set_receiveShadows → TI_SparkPesca → UnityEngine_Object__op_Inequality → TI_SparkPesca → UnityEngine_Renderer__SetMaterial → TI_SparkPesca

## SparkPesca__Solta
MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.TryGetValue → TI_SparkPesca → UnityEngine_Object__op_Equality → UnityEngine_Transform__set_localPosition → UnityEngine_Transform__set_localRotation → MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.Remove → UnityEngine_Object__op_Equality → NewBaseAnimationController__TocaPose

## SparkPesca__Update
System_Array__Clear → MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.GetEnumerator → MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.MoveNext → UnityEngine_Object__op_Equality → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.Dispose → MR_System.Collections.Generic.List<Entity>.GetEnumerator → MR_System.Collections.Generic.List<Entity>.MoveNext → UnityEngine_Object__op_Equality → MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.TryGetValue → SparkPesca__Termina → SparkPesca__Solta → MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.TryGetValue → TI_SparkPesca → UnityEngine_Object__op_Equality → UnityEngine_Transform__set_localPosition → UnityEngine_Transform__set_localRotation → NewBaseAnimationController__TocaPose → TI_SparkAnimacoesExtras → SparkAnimacoesExtras__Da → UnityEngine_Object__op_Inequality → SparkAnimacoesExtras__Clipe → SparkAnimacoesExtras__Velocidade → NewBaseAnimationController__TocaPose → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<Entity>.Dispose → UnityEngine_Object__op_Inequality → SparkPesca__Confere → UnityEngine_Object__op_Equality → WorldSpawner__get_Entidades → UnityEngine_Object__op_Equality → SparkPesca__Confere

## SparkQuestHud__AtualizaContas
MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>.GetEnumerator → MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>.Dispose → UnityEngine_Object__op_Inequality → System_Int64__ToString → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → System_String__Format → LIT_"'{0} / {1}+'" → System_String__Format → LIT_"'{0} / {1}'" → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → PlayerInventory__GetItemById

## SparkQuestHud__Awake
TI_SparkQuestHud → UnityEngine_Object__op_Equality → TI_SparkQuestHud → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SparkQuestHud__Guarda
UnityEngine_UIElements_VisualElement__get_layout → System_Globalization_CultureInfo__get_InvariantCulture → UnityEngine_UIElements_VisualElement__get_layout → System_Single__ToString → LIT_"'0.0000'" → UnityEngine_UIElements_VisualElement__get_layout → System_Single__ToString → LIT_"'0.0000'" → System_String__Concat → LIT_"'|'" → UnityEngine_PlayerPrefs__SetString → LIT_"'spark.quest.quadro.proporcao'"

## SparkQuestHud__LateUpdate
LIT_"'{0}  ({1})'" → UnityEngine_Camera__get_main → UnityEngine_Object__op_Equality → TI_SparkQuests → SparkQuests__AlvoDoLocal → UnityEngine_Component__get_transform → UnityEngine_Transform__get_position → TI_SparkQuests → SparkQuests__MostraRadar → UnityEngine_Component__get_transform → UnityEngine_Transform__get_forward → UnityEngine_Component__get_transform → UnityEngine_Transform__get_position → UnityEngine_UIElements_RuntimePanelUtils__CameraTransformWorldToPanel → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_Angle___ctor → UnityEngine_UIElements_Rotate___ctor → UnityEngine_UIElements_StyleRotate__op_Implicit → System_String__Format → LIT_"'{0}  ({1})'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## SparkQuestHud__Monta
TI_SparkQuestHud.<>c__DisplayClass19_0 → SparkMapaWindow_Loja___ctor → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkEstilo → SparkEstilo__Borda → SparkEstilo__Espaco → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_MouseOverDetectionManipulator → MouseOverDetectionManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'QUEST'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"'::::'" → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_SparkQuestHud.__c__DisplayClass19_0._Monta_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerMoveEvent> → MD_SparkQuestHud.__c__DisplayClass19_0._Monta_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerMoveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent> → MD_SparkQuestHud.__c__DisplayClass19_0._Monta_b__2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent> → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_ScrollView___ctor → UnityEngine_UIElements_ScrollView__set_horizontalScrollerVisibility → SparkUI__Rolagem → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.GeometryChangedEvent> → MD_SparkQuestHud.PosicaoInicial → MR_UnityEngine.UIElemen

## SparkQuestHud__Move
UnityEngine_UIElements_VisualElement__get_layout → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## SparkQuestHud__OnDestroy
TI_SparkQuestHud → UnityEngine_Object__op_Equality → TI_SparkQuestHud → MD_SparkQuestHud.Redesenha → TI_SparkQuests → SparkQuests__remove_Mudou → MD_SparkQuestHud.Redesenha → TI_SparkQuests → System_Delegate__Remove → TI_SparkQuests

## SparkQuestHud__Padrao
UnityEngine_PlayerPrefs__DeleteKey → LIT_"'spark.quest.quadro.proporcao'" → UnityEngine_PlayerPrefs__DeleteKey → LIT_"'spark.quest.quadro.posicao'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## SparkQuestHud__PosicaoInicial
UnityEngine_UIElements_VisualElement__get_layout → UnityEngine_PlayerPrefs__GetString → LIT_"'spark.quest.quadro.proporcao'" → LIT_"''" → System_String__Split → System_Globalization_CultureInfo__get_InvariantCulture → System_Single__TryParse → UnityEngine_UIElements_VisualElement__get_layout → SparkQuestHud__Move → SparkQuestHud__Padrao

## SparkQuestHud__Redesenha
UnityEngine_UIElements_VisualElement__Clear → System_Array__Clear → TI_SparkQuests → MR_System.Collections.Generic.List<int>.GetEnumerator → MR_System.Collections.Generic.List<int>.MoveNext → TI_SparkQuestHud.<>c__DisplayClass26_0 → SparkMapaWindow_Loja___ctor → TI_SparkQuests → SparkQuests__Info → SparkQuests__PassoDe → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_SparkQuestHud.__c__DisplayClass26_0._Redesenha_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent> → MD_SparkQuestHud.__c__DisplayClass26_0._Redesenha_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent> → MD_SparkQuestHud.__c__DisplayClass26_0._Redesenha_b__2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent> → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__Add → System_String__Concat → LIT_"'Go to: '" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → MR_System.Collections.Generic.List<SparkQuests.Meta>.GetEnumerator → MR_System.Collections.Generic.List<SparkQuests.Meta>.MoveNext → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → SparkUI__NomeDoItem → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__Add → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → MR_System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>..ctor → MR_System.Colle

## SparkQuestHud___ctor
TI_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>> → MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>..ctor

## SparkQuestInfoWindow__Abre
SparkQuestInfoWindow__Redesenha

## SparkQuestInfoWindow__Awake
TI_SparkQuestInfoWindow → UnityEngine_Object__op_Equality → TI_SparkQuestInfoWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SparkQuestInfoWindow__BuildWindow
TI_SparkQuestInfoWindow.<BuildWindow>d__22 → Gear__UpdateWeaponType

## SparkQuestInfoWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## SparkQuestInfoWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkRefinoWindow/SparkRefinoWindow'"

## SparkQuestInfoWindow__MostraLocal
TI_SparkQuests → SparkQuests__Info → TI_SparkAvisoNaTela → SparkAvisoNaTela__Mostra → LIT_"'There is no location information for this quest.'" → LIT_"'None'" → NpcNameTable__get_Instance → NpcNameTable__GetNpcName → LIT_"'None'" → TI_SparkQuests → SparkQuests__MostraRadar → TI_SparkMapaWindow → SparkMapaWindow__MostraPonto → TI_SparkMapaWindow

## SparkQuestInfoWindow__OnDestroy
TI_SparkQuestInfoWindow → UnityEngine_Object__op_Equality → TI_SparkQuestInfoWindow

## SparkQuestInfoWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## SparkQuestWindow__Awake
TI_SparkQuestWindow → UnityEngine_Object__op_Equality → TI_SparkQuestWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SparkQuestWindow__BuildWindow
TI_SparkQuestWindow.<BuildWindow>d__35 → Gear__UpdateWeaponType

## SparkQuestWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## SparkQuestWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkQuestWindow/SparkQuestWindow'"

## SparkQuestWindow__MontaItens
UnityEngine_UIElements_VisualElement__Clear → System_Array__Clear → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MR_System.Collections.Generic.List<SparkQuests.Meta>.GetEnumerator → MR_System.Collections.Generic.List<SparkQuests.Meta>.MoveNext → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → IconTable__get_Instance → IconTable__GetIcon → UnityEngine_UIElements_StyleBackground__op_Implicit → TI_SparkEstilo → SparkEstilo__Moldura → UnityEngine_UIElements_VisualElement__get_style → IconTable__get_Instance → IconTable__GetIcon → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__set_pickingMode → SparkQuestWindow__DicaDoItem → TI_TooltipManipulator → TooltipManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → SparkUI__NomeDoItem → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → LIT_"''" → UnityEngine_UIElements_VisualElement__Add → System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor → MR_System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>..ctor → MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>.Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkQuests.Meta>.Dispose → SparkQuestWindow__AtualizaItens

## SparkQuestWindow__MostraDetalhe
TI_SparkQuests → TI_System.Predicate<SparkQuests.Ativa> → MD_SparkQuestWindow._MostraDetalhe_b__38_0 → MR_System.Collections.Generic.List<SparkQuests.Ativa>.FindIndex → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_SparkQuests → LIT_"'You have no quests in progress.'" → TI_SparkQuests → LIT_"'No one-time quests in progress.'" → LIT_"'No repeatable quests in progress.'" → LIT_"'Select a quest on the left.'" → TI_SparkQuests → MR_System.Collections.Generic.List<SparkQuests.Ativa>.get_Item → SparkQuests__Info → System_Int32__ToString → System_String__Concat → LIT_"'Quest '" → LIT_"''" → TI_SparkQuests → SparkQuests__Tipo → System_String__Format → LIT_"'Level {0}-{1}   ·   {2}'" → MR_System.Collections.Generic.Dictionary<int,SparkQuests.Passo>.TryGetValue → System_Int32__ToString → System_String__Concat → LIT_"'Step '" → LIT_"''" → System_String__Concat → LIT_"'Go to: '" → LIT_"''" → SparkQuestWindow__MontaItens → TI_SparkQuests → SparkQuests__NoAlarme → TI_SparkQuests → UnityEngine_UIElements_VisualElement__Clear → MR_System.Collections.Generic.Dictionary<int,SparkQuests.Passo>.get_Keys → MR_System.Collections.Generic.List<int>..ctor → MR_System.Collections.Generic.List<int>.Sort → MR_System.Collections.Generic.List<int>.GetEnumerator → MR_System.Collections.Generic.List<int>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<int>.Dispose → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<int>.Dispose → TI_SparkQuests → SparkQuests__PassoFeito → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_SparkEstilo → SparkEstilo__Ponto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MR_System.Collections.Generic.Dictionary<int,SparkQuests.Passo>.get_Item → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → TI_SparkEstilo → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__Add

## SparkQuestWindow__OnDestroy
TI_SparkQuestWindow → UnityEngine_Object__op_Equality → TI_SparkQuestWindow → MD_SparkQuestWindow.Redesenha → TI_SparkQuests → SparkQuests__remove_Mudou → MD_SparkQuestWindow.Redesenha → TI_SparkQuests → System_Delegate__Remove → TI_SparkQuests

## SparkQuestWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → L2GameUI__WindowOpened → SparkQuestWindow__Redesenha → TI_SparkQuests → TI_SparkPacoteLivre → TI_SparkQuests → SparkPacoteLivre__Fim

## SparkQuests__MostraLocal
TI_SparkQuests → SparkQuests__Salva → TI_SparkQuests

## SparkQuests__MostraRadar
TI_SparkQuests → SparkQuests__Salva → TI_SparkQuests

## SparkRadarWindow_Pontos__Poe
MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MR_System.Collections.Generic.List<UnityEngine.Texture2D>.get_Item → UnityEngine_Object__op_Inequality → MR_System.Collections.Generic.List<UnityEngine.Texture2D>.set_Item → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__Add → MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.Add → MR_System.Collections.Generic.List<UnityEngine.Texture2D>.Add → MR_System.Collections.Generic.List<UnityEngine.Vector2>.Add → MR_System.Collections.Generic.List<UnityEngine.Vector2>.get_Item → MR_System.Collections.Generic.List<UnityEngine.Vector2>.set_Item → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleRotate__op_Implicit

## SparkRadarWindow_Pontos__Termina
MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## SparkRadarWindow_Pontos___ctor
MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>..ctor → MR_System.Collections.Generic.List<UnityEngine.Texture2D>..ctor → MR_System.Collections.Generic.List<UnityEngine.Vector2>..ctor → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → LIT_"\" → System_InvalidOperationException___ctor → MD_UnityEngine.UIElements.VisualElement.Add → UnityEngine_UIElements_VisualElement_Hierarchy__Add → UnityEngine_UIElements_VisualElement__Add

## SparkRadarWindow_PorDistancia__Compare


## SparkRadarWindow_Tile___ctor


## SparkRadarWindow__Altitude
UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## SparkRadarWindow__Awake
TI_SparkRadarWindow → UnityEngine_Object__op_Equality → TI_SparkRadarWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SparkRadarWindow__Botao
TI_SparkRadarWindow.<>c__DisplayClass98_0 → Gear__UpdateWeaponType → TI_SparkRadarWindow → SparkRadarWindow__Tex → System_String__Concat → LIT_"'_Over'" → SparkRadarWindow__Tex → System_String__Concat → LIT_"'_Down'" → SparkRadarWindow__Tex → UnityEngine_Object__op_Equality → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__set_tooltip → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerEnterEvent> → MD_SparkRadarWindow.__c__DisplayClass98_0._Botao_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerLeaveEvent> → MD_SparkRadarWindow.__c__DisplayClass98_0._Botao_b__1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerLeaveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerDownEvent> → MD_SparkRadarWindow.__c__DisplayClass98_0._Botao_b__2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerUpEvent> → MD_SparkRadarWindow.__c__DisplayClass98_0._Botao_b__3 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerUpEvent> → LIT_"\" → System_InvalidOperationException___ctor → MD_UnityEngine.UIElements.VisualElement.Add → UnityEngine_UIElements_VisualElement_Hierarchy__Add → UnityEngine_UIElements_VisualElement__Add

## SparkRadarWindow__BuildWindow
TI_SparkRadarWindow.<BuildWindow>d__94 → Gear__UpdateWeaponType

## SparkRadarWindow__Busca
MR_System.Collections.Generic.HashSet<int>.Clear → TI_SparkParty → MR_System.Collections.Generic.HashSet<int>.Add → System_Array__Clear → TI_SparkRadarWindow → UnityEngine_Object__op_Inequality → TI_SparkDesempenho → MR_System.Collections.Generic.List<Entity>.get_Item → SparkRadarWindow__Considera → TI_SparkRadarWindow → MR_System.Collections.Generic.List<SparkRadarWindow.Candidato>.Sort → MR_System.Collections.Generic.List<SparkRadarWindow.Candidato>.RemoveRange → SparkRadarWindow__DicionarioDoMundo → WorldSpawner__get_Entidades → SparkRadarWindow__Considera → MR_System.Collections.Concurrent.ConcurrentDictionary<int,Entity>.GetEnumerator → SparkRadarWindow__Considera

## SparkRadarWindow__Camada
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkRadarWindow → SparkRadarWindow__Tex → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__Add

## SparkRadarWindow__ConferePlanta
TI_SparkMapaWindow → SparkMapaWindow__AndarParaRadar

## SparkRadarWindow__Considera
UnityEngine_Object__op_Equality → UnityEngine_Component__get_transform → UnityEngine_Transform__get_position → MR_System.Collections.Generic.HashSet<int>.Contains → Entity__get_IsDead → MR_System.Collections.Generic.List<SparkRadarWindow.Candidato>.Add

## SparkRadarWindow__DesenhaPlanta
UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleRotate__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## SparkRadarWindow__DesenhaTiles
SparkRadarWindow__get_Alcance → MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.get_Values → MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.GetEnumerator → MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.Dispose → SparkRadarWindow__TiraTilesNaoVistos → MR_System.Collections.Generic.HashSet<int>.Contains → MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.TryGetValue → TI_SparkRadarWindow.Tile → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__Add → MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.set_Item → UnityEngine_Object__op_Equality → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleRotate__op_Implicit → System_Int32__ToString → System_String__Concat → LIT_"'Data/UI/Assets/Mapa/tiles/'" → LIT_"'_'" → TI_SparkArte → MR_SparkArte.LoadAsync<UnityEngine.Texture2D> → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → SparkArte_Pedido__get_asset → UnityEngine_Object__op_Equality → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → MR_System.Collections.Generic.HashSet<int>.Add → UnityEngine_UIElements_VisualElement__RemoveFromHierarchy → MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.Remove

## SparkRadarWindow__Desenha
TI_SparkRadarWindow → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleRotate__op_Implicit → UnityEngine_Object__op_Inequality → SparkRadarWindow__DesenhaTiles → SparkRadarWindow__DesenhaPlanta → SparkRadarWindow_Pontos__Termina → UnityEngine_Object__op_Inequality → TI_SparkParty → MR_System.Collections.Generic.List<SparkRadarWindow.Candidato>.get_Item → UnityEngine_Object__op_Equality → Entity__get_IsDead → UnityEngine_Component__get_transform → UnityEngine_Transform__get_position → SparkRadarWindow_Pontos__Poe → SparkRadarWindow_Pontos__Termina → TI_SparkQuests → SparkQuests__AlvoDoLocal → TI_SparkRadarWindow → SparkRadarWindow_Pontos__Poe → SparkRadarWindow_Pontos__Termina → UnityEngine_Object__op_Inequality → UnityEngine_Component__get_transform → UnityEngine_Transform__get_position → TI_SparkRadarWindow → SparkRadarWindow_Pontos__Poe → SparkRadarWindow_Pontos__Termina → SparkRadarWindow__Altitude → SparkRadarWindow__Regiao → TI_SparkParty → SparkParty__PosicaoDoMembro → TI_SparkRadarWindow → SparkRadarWindow_Pontos__Poe

## SparkRadarWindow__Desliza
UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleRotate__op_Implicit

## SparkRadarWindow__DicionarioDoMundo
UnityEngine_Object__op_Equality → TI_SparkRadarWindow → System_Type__GetTypeFromHandle → LIT_"'_objects'" → TI_SparkRadarWindow → System_Reflection_EventInfo__op_Inequality → TI_SparkRadarWindow

## SparkRadarWindow__Gira
UnityEngine_Object__op_Inequality → GameManager__get_CameraDoJogo → UnityEngine_Object__op_Inequality → GameManager__get_CameraDoJogo → UnityEngine_Component__get_transform → UnityEngine_Object__op_Equality → UnityEngine_Transform__get_eulerAngles → UnityEngine_UIElements_Angle___ctor → UnityEngine_UIElements_Rotate___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleRotate__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleRotate__op_Implicit → UnityEngine_Object__op_Inequality → UnityEngine_Component__get_transform → UnityEngine_Transform__get_childCount → UnityEngine_Transform__GetChild → UnityEngine_Transform__get_eulerAngles → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_Angle___ctor → UnityEngine_UIElements_Rotate___ctor → UnityEngine_UIElements_StyleRotate__op_Implicit

## SparkRadarWindow__HideWindow
L2Window__HideWindow → SparkRadarWindow__MostraPlanta

## SparkRadarWindow__Imagem
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkRadarWindow → SparkRadarWindow__Tex → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → LIT_"\" → System_InvalidOperationException___ctor → MD_UnityEngine.UIElements.VisualElement.Add → UnityEngine_UIElements_VisualElement_Hierarchy__Add → UnityEngine_UIElements_VisualElement__Add

## SparkRadarWindow__InitWindow
UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_name → LIT_"'SparkRadar'" → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_MouseOverDetectionManipulator → MouseOverDetectionManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → LIT_"\" → System_InvalidOperationException___ctor → MD_UnityEngine.UIElements.VisualElement.Add → UnityEngine_UIElements_VisualElement_Hierarchy__Add → UnityEngine_UIElements_VisualElement__Add

## SparkRadarWindow__LiberaTiles
MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.get_Values → MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.GetEnumerator → MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.Dispose → SparkRadarWindow__TiraTilesNaoVistos

## SparkRadarWindow__LoadAssets
UnityEngine_Object__op_Equality → MR_UnityEngine.ScriptableObject.CreateInstance<UnityEngine.UIElements.VisualTreeAsset>

## SparkRadarWindow__MapaUsaPlanta
TI_SparkMapaWindow → UnityEngine_Object__op_Inequality → TI_SparkMapaWindow → UnityEngine_Object__op_Inequality → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_Object__op_Equality

## SparkRadarWindow__MostraPlanta
UnityEngine_Object__op_Inequality → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkRadarWindow → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_Object__op_Inequality → TI_SparkRadarWindow → SparkRadarWindow__MapaUsaPlanta → UnityEngine_Resources__UnloadAsset → LIT_"''" → SparkRadarWindow__LiberaTiles → TI_SparkRadarWindow → LIT_"''" → System_String__get_Chars → System_Char__IsDigit → System_Char__ToString → System_String__Concat → LIT_"'F'" → System_String__Substring → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## SparkRadarWindow__NaBorda


## SparkRadarWindow__NomeCurto
LIT_"''" → System_String__Substring → System_String__get_Chars → System_Char__IsDigit → System_Char__ToString → System_String__Concat → LIT_"'F'"

## SparkRadarWindow__OnDestroy
TI_SparkRadarWindow → UnityEngine_Object__op_Equality → TI_SparkRadarWindow

## SparkRadarWindow__Regiao
TI_SparkCaverna → UnityEngine_Object__op_Equality → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackground__op_Implicit

## SparkRadarWindow__ShowWindow
L2Window__ShowWindow

## SparkRadarWindow__Tex
System_String__Concat → LIT_"'Data/UI/Assets/Radar/'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → TI_SparkArte → SparkArte__get_Ativo → System_Type__GetTypeFromHandle → TI_SparkArte → SparkArte__DoPacote → UnityEngine_Object__op_Inequality → System_Type__GetTypeFromHandle → TI_SparkArte → SparkArte__FolhaDeEstilo → System_Type__GetTypeFromHandle

## SparkRadarWindow__TiraTilesNaoVistos
MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.GetEnumerator → MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.MoveNext → MR_System.Collections.Generic.List<int>.Add → Gear__UpdateWeaponType → MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.Dispose → MR_System.Collections.Generic.List<int>.get_Item → MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.get_Item → UnityEngine_UIElements_VisualElement__RemoveFromHierarchy → MR_System.Collections.Generic.List<int>.get_Item → MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.Remove

## SparkRadarWindow__ToggleHideWindow
LIT_"'window_close'" → LIT_"'window_open'" → AudioManager__PlayUISound → UnityEngine_PlayerPrefs__TrySetInt → LIT_"'spark.radar.aberto'" → LIT_"'Could not store preference value'" → UnityEngine_PlayerPrefsException___ctor → MD_UnityEngine.PlayerPrefs.SetInt

## SparkRadarWindow__Update
UnityEngine_Object__op_Inequality → TI_SparkDesempenho → SparkDesempenho__PosicaoDoJogador → SparkRadarWindow__Busca → SparkRadarWindow__ConferePlanta → SparkRadarWindow__Desenha → SparkRadarWindow__Desliza → SparkRadarWindow__Gira

## SparkRadarWindow__UsaPlanta
UnityEngine_Object__op_Inequality

## SparkRadarWindow__Zoom
TI_SparkRadarWindow → UnityEngine_PlayerPrefs__SetInt → LIT_"'spark.radar.zoom'"

## SparkRadarWindow___cctor
System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray → TI_SparkRadarWindow → System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray → TI_SparkRadarWindow → TI_SparkRadarWindow.PorDistancia → Gear__UpdateWeaponType → TI_SparkRadarWindow

## SparkRadarWindow___ctor
TI_System.Collections.Generic.List<SparkRadarWindow.Candidato> → MR_System.Collections.Generic.List<SparkRadarWindow.Candidato>..ctor → MR_System.Collections.Generic.HashSet<int>..ctor → TI_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile> → MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>..ctor → MR_System.Collections.Generic.HashSet<int>..ctor → MR_System.Collections.Generic.List<int>..ctor → TI_L2Window

## SparkRastreioWindow__Abre


## SparkRastreioWindow__Awake
TI_SparkRastreioWindow → UnityEngine_Object__op_Equality → TI_SparkRastreioWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SparkRastreioWindow__BuildWindow
TI_SparkRastreioWindow.<BuildWindow>d__20 → Gear__UpdateWeaponType

## SparkRastreioWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## SparkRastreioWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkGmWindow/SparkGmWindow'"

## SparkRastreioWindow__OnDestroy
TI_SparkRastreioWindow → UnityEngine_Object__op_Equality → TI_SparkRastreioWindow → TI_System.Action<bool,SparkRastreio.Linha,bool> → MD_SparkRastreioWindow.Mudou → TI_SparkRastreio → System_Delegate__Remove → TI_System.Action<bool,SparkRastreio.Linha,bool> → TI_SparkRastreio

## SparkRastreioWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → L2GameUI__WindowOpened → SparkRastreioWindow__Cabecalho → UnityEngine_UIElements_VisualElement__Clear → System_Array__Clear → TI_SparkRastreio → MR_System.Collections.Generic.List<SparkRastreio.Linha>.GetEnumerator → MR_System.Collections.Generic.List<SparkRastreio.Linha>.MoveNext → SparkRastreioWindow__Acrescenta → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkRastreio.Linha>.Dispose

## SparkRastreioWindow__ToggleHideWindow
TI_SparkVip

## SparkRefinoWindow__AbreColocar
LIT_"'Augmentation'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → LIT_"''" → SparkRefinoWindow__Atualiza

## SparkRefinoWindow__AbreTirar
LIT_"'Remove Augmentation'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → LIT_"''" → SparkRefinoWindow__Atualiza

## SparkRefinoWindow__Awake
TI_SparkRefinoWindow → UnityEngine_Object__op_Equality → TI_SparkRefinoWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SparkRefinoWindow__BuildWindow
TI_SparkRefinoWindow.<BuildWindow>d__33 → Gear__UpdateWeaponType

## SparkRefinoWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed → SparkRefinoWindow__TerminaEfeito → MD_SparkRefinoWindow._HideWindow_b__32_0 → TI_SparkForjaEfeitos → SparkForjaEfeitos__Fecha

## SparkRefinoWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkRefinoWindow/SparkRefinoWindow'"

## SparkRefinoWindow__MontaLista
LIT_"'  <color=#A0A0A0>(equipped)</color>'" → MR_System.Collections.Generic.List<ItemInstance>..ctor → UnityEngine_Object__op_Inequality → System_Text_StringBuilder___ctor → System_Text_StringBuilder__Append → MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator → MR_System.Collections.Generic.List<ItemInstance>.MoveNext → System_Text_StringBuilder__Append → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<ItemInstance>.Dispose → UnityEngine_UIElements_VisualElement__Clear → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → LIT_"'You have no augmented items.'" → LIT_"'You have no Life Stones.'" → LIT_"'You have no weapon that can be augmented.'" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator → MR_System.Collections.Generic.List<ItemInstance>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<ItemInstance>.Dispose → TI_SparkRefinoWindow.<>c__DisplayClass48_0 → Gear__UpdateWeaponType → TI_SparkForjaEfeitos → SparkForjaEfeitos__LinhaAlternada → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → SparkEstilo__Moldura → UnityEngine_UIElements_VisualElement__get_style → IconTable__get_Instance → IconTable__GetIcon → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__Add → SparkUI__NomeDoItem → System_String__Format → LIT_"'<color=#FFDD8C>+{0}</color> {1}'" → System_String__Format → LIT_"'  <color=#C8B88A>x{0:N0}</color>'" → System_String__Concat → LIT_"'  <color=#A0A0A0>(equipped)</color>'" → TI_SparkEstilo → MR_System.Nullable<UnityEngine.Color>..ctor → SparkEstilo__Texto → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit → UnityEngine_UIElements_VisualElement__Add → TI_SparkForjaEfeitos → SparkForjaEfeitos__Marca → SparkUI__NomeDoItem → TI_SparkDicaItem → SparkDicaItem__Monta → TI_TooltipManipulator → TooltipManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_SparkRefinoWindow.__c__DisplayClass48_0._MontaLista_b__0 → MR_UnityEngine.UIElements.CallbackEventH

## SparkRefinoWindow__Monta
UnityEngine_Object__op_Equality → TI_L2Window.<MontaELembra>d__18 → Gear__UpdateWeaponType → UnityEngine_MonoBehaviour__StartCoroutine

## SparkRefinoWindow__NomeDoBotao
MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>

## SparkRefinoWindow__OnDestroy
TI_SparkRefinoWindow → UnityEngine_Object__op_Equality → TI_SparkRefinoWindow → MD_SparkRefinoWindow.AbreColocar → SparkRefino__remove_AbrirColocar → MD_SparkRefinoWindow.AbreTirar → SparkRefino__remove_AbrirTirar → MD_SparkRefinoWindow.ItemAceito → SparkRefino__remove_ItemAceito → MD_SparkRefinoWindow.PedraAceita → SparkRefino__remove_PedraAceita → MD_SparkRefinoWindow.GemstoneAceita → SparkRefino__remove_GemstoneAceita → MD_SparkRefinoWindow.Resultado → SparkRefino__remove_Resultado → MD_SparkRefinoWindow.PrecoParaTirar → SparkRefino__remove_PrecoParaTirar → MD_SparkRefinoWindow.TirouResultado → TI_SparkRefino → System_Delegate__Remove → TI_SparkRefino

## SparkRefinoWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → L2GameUI__WindowOpened → TI_SparkForjaEfeitos → SparkForjaEfeitos__Abre

## SparkRefinoWindow__ToggleHideWindow


## SparkTeclas_Captura__Comeca


## SparkTeclas_Captura__EModificador


## SparkTeclas_Captura__LidaDigitando
TI_SparkTeclas → LIT_"'Validate'"

## SparkTeclas_Captura__TeclaDeTexto


## SparkTeclas_Captura__Termina
TI_SparkTeclas

## SparkTeclas_Captura__Update
UnityEngine_InputSystem_Controls_ButtonControl__get_wasPressedThisFrame → UnityEngine_InputSystem_Controls_ButtonControl__get_isPressed → UnityEngine_InputSystem_Keyboard__get_allKeys → MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.Controls.KeyControl>.GetEnumerator → MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.Controls.KeyControl>.MoveNext → MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.Controls.KeyControl>.get_Current → UnityEngine_InputSystem_Controls_ButtonControl__get_wasPressedThisFrame → SparkTeclas_Captura__LidaDigitando → UnityEngine_InputSystem_InputControl__get_name → System_String__Concat → LIT_"'<Keyboard>/'" → TI_SparkTeclas → SparkTeclas__Junta → SparkTeclas__Grava → SparkTeclas_Captura__Termina → Gear__UpdateWeaponType → MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.Controls.KeyControl>.Dispose → TI_SparkComandos → SparkComandos__Diz → LIT_"'That key types text in the chat. Use another key, or Alt..." → Gear__UpdateWeaponType → MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.Controls.KeyControl>.Dispose → LIT_"'ctrl'" → LIT_"'shift'" → LIT_"'alt'" → LIT_"''" → System_String__op_Inequality → LIT_"''" → System_String__Concat → LIT_"'<Keyboard>/'" → TI_SparkTeclas → LIT_"''" → TI_SparkTeclas → LIT_"''" → LIT_"'CloseWindow'" → UnityEngine_InputSystem_Controls_ButtonControl__get_isPressed → LIT_"'<Keyboard>/escape'" → TI_SparkTeclas → LIT_"'<Keyboard>/escape'" → SparkTeclas__Grava → SparkTeclas_Captura__Termina

## SparkTeclas_Item___ctor


## SparkTeclas__Apertou
TI_SparkTeclas → SparkTeclas__get_Nosso → UnityEngine_InputSystem_InputActionMap__FindAction → UnityEngine_InputSystem_InputAction__GetOrCreateActionMap

## SparkTeclas__CarregaJogo
TI_SparkTeclas → UnityEngine_InputSystem_InputSystem__get_settings → UnityEngine_Object__op_Inequality → LIT_"'Move'" → LIT_"'Jump'" → LIT_"'Test'" → UnityEngine_InputSystem_InputActionAsset__FindAction → LIT_"''" → TI_SparkTeclas → SparkTeclas__MontaBindings → TI_SparkTeclas → SparkTeclas__MontaLista → TI_SparkTeclas → MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator → MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext → TI_SparkTeclas → SparkTeclas__Deriva → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose → UnityEngine_PlayerPrefs__GetString → LIT_"'spark.opt.teclas'" → LIT_"''" → UnityEngine_PlayerPrefs__GetString → LIT_"'spark.opt.binds'" → LIT_"''" → TI_SparkTeclas → MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator → MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext → TI_SparkTeclas → System_String__op_Inequality → LIT_"'Attack'" → LIT_"''" → UnityEngine_PlayerPrefs__GetInt → LIT_"'spark.opt.teclas.atacarsemf'" → LIT_"'<Keyboard>/f'" → LIT_"''" → UnityEngine_PlayerPrefs__SetInt → LIT_"'spark.opt.teclas.atacarsemf'" → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose → TI_SparkTeclas → MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator → MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose → TI_SparkTeclas → SparkTeclas__Salva → TI_SparkTeclas → SparkTeclas__MontaBindings → UnityEngine_InputSystem_InputActionRebindingExtensions__LoadBindingOverridesFromJson → TI_SparkTeclas → MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator → MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext → TI_SparkTeclas → UnityEngine_InputSystem_InputAction__get_bindings → MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputBinding>.MoveNext → Gear__UpdateWeaponType → MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputBinding>.Dispose → TI_SparkTeclas → SparkTeclas__Deriva → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose → UnityEngine_InputSystem_InputActionRebindingExtensions__RemoveAllBindingOverrides → MR_System.Collections.Generic.Dictionary<string,string>..ctor → System_String__Split → System_String__Substring → TI_SparkTeclas → MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator → MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose → UnityEngine_PlayerPrefs__GetInt → LIT_"'spark.opt.teclas.statussemp'" → TI_SparkTeclas → MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator → System_String__Concat → LIT_"'/'" → UnityEngine_InputSystem_InputSystem__get_settings → MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext → LIT_"'CharacterStatus'" → LIT_"'<Keyboard>/p'" → LIT

## SparkTeclas__CriaNosso
UnityEngine_InputSystem_InputActionMap___ctor → LIT_"'SparkJanelas'" → TI_SparkTeclas → SparkTeclas__Nossa → LIT_"'Skills'" → LIT_"'<Keyboard>/k'" → LIT_"'alt+<Keyboard>/k'" → SparkTeclas__Nossa → LIT_"'Quest'" → LIT_"'<Keyboard>/u'" → LIT_"'alt+<Keyboard>/u'" → SparkTeclas__Nossa → LIT_"'Clan'" → LIT_"'<Keyboard>/n'" → LIT_"'alt+<Keyboard>/n'" → SparkTeclas__Nossa → LIT_"'Friends'" → LIT_"'<Keyboard>/y'" → LIT_"'alt+<Keyboard>/y'" → SparkTeclas__Nossa → LIT_"'Map'" → LIT_"'<Keyboard>/m'" → LIT_"'alt+<Keyboard>/m'" → SparkTeclas__Nossa → LIT_"'Radar'" → LIT_"''" → LIT_"'alt+<Keyboard>/o'" → SparkTeclas__Nossa → LIT_"'Macro'" → LIT_"''" → LIT_"'alt+<Keyboard>/r'" → SparkTeclas__Nossa → LIT_"'Gm'" → LIT_"''" → LIT_"'alt+<Keyboard>/g'" → SparkTeclas__Nossa → LIT_"'Board'" → LIT_"''" → LIT_"'alt+<Keyboard>/b'" → SparkTeclas__Nossa → LIT_"'ResetLayout'" → LIT_"''" → LIT_"'alt+<Keyboard>/l'" → SparkTeclas__Nossa → LIT_"'HideUI'" → LIT_"''" → LIT_"'alt+<Keyboard>/h'" → SparkTeclas__Nossa → LIT_"'HideChat'" → LIT_"''" → LIT_"'alt+<Keyboard>/j'" → SparkTeclas__Nossa → LIT_"'PartyBuffs'" → LIT_"''" → LIT_"'alt+<Keyboard>/f'" → SparkTeclas__Nossa → LIT_"'LowDetail'" → LIT_"''" → LIT_"'alt+<Keyboard>/p'" → SparkTeclas__Nossa → LIT_"'Mute'" → LIT_"'<Keyboard>/period'" → LIT_"''" → SparkTeclas__Nossa → LIT_"'FlyUp'" → LIT_"'<Keyboard>/space'" → LIT_"''" → SparkTeclas__Nossa → LIT_"'FlyDown'" → LIT_"'<Keyboard>/z'" → LIT_"''" → SparkTeclas__Nossa → LIT_"'FlyForward'" → LIT_"'<Keyboard>/w'" → LIT_"'<Keyboard>/upArrow'" → SparkTeclas__Nossa → LIT_"'FlyBack'" → LIT_"'<Keyboard>/s'" → LIT_"'<Keyboard>/downArrow'" → SparkTeclas__Nossa → LIT_"'FlyLeft'" → LIT_"'<Keyboard>/a'" → LIT_"'<Keyboard>/leftArrow'" → SparkTeclas__Nossa → LIT_"'FlyRight'" → LIT_"'<Keyboard>/d'" → LIT_"'<Keyboard>/rightArrow'" → System_Int32__ToString → System_String__Concat → LIT_"'BarPage'" → System_Int32__ToString → System_String__Concat → LIT_"'alt+<Keyboard>/f'" → TI_SparkTeclas → SparkTeclas__Nossa → LIT_"''" → TI_SparkTeclas → UnityEngine_InputSystem_InputActionMap__Enable → TI_SparkTeclas

## SparkTeclas__Deriva
MR_System.Collections.Generic.List<string>..ctor → UnityEngine_InputSystem_InputAction__get_bindings → MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputBinding>.get_Item → MR_System.Collections.Generic.List<string>.Add → MR_System.Collections.Generic.List<string>..ctor → LIT_"''" → MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputBinding>.get_Item → System_String__Equals → LIT_"'binding'" → TI_SparkTeclas → SparkTeclas__NomeDoModificador → MR_System.Collections.Generic.List<string>.Add → LIT_"'alt'" → MR_System.Collections.Generic.List<string>.Contains → LIT_"'ctrl'" → MR_System.Collections.Generic.List<string>.Contains → LIT_"'shift'" → MR_System.Collections.Generic.List<string>.Contains → TI_SparkTeclas → SparkTeclas__Junta → MR_System.Collections.Generic.List<string>.Add → LIT_"''" → MR_System.Collections.Generic.List<string>.get_Item → LIT_"''" → MR_System.Collections.Generic.List<string>.get_Item

## SparkTeclas__EmUso
MR_System.Collections.Generic.SortedSet<string>..ctor → MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator → MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose → System_String__Join → LIT_"', '" → TI_SparkTeclas → SparkTeclas__TextoDe

## SparkTeclas__Grava
TI_SparkTeclas → SparkTeclas__MontaBindings → TI_SparkTeclas → System_Text_StringBuilder___ctor → TI_SparkTeclas → MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator → MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext → System_String__Concat → LIT_"'/'" → System_Text_StringBuilder__Append → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose → UnityEngine_PlayerPrefs__SetString → LIT_"'spark.opt.teclas'" → TI_SparkTeclas

## SparkTeclas__Junta
LIT_"''" → LIT_"'ctrl+'" → LIT_"''" → LIT_"'shift+'" → LIT_"''" → LIT_"'alt+'" → System_IndexOutOfRangeException___ctor → MD_System.String.FillStringChecked → System_IndexOutOfRangeException___ctor → MD_System.String.FillStringChecked → System_IndexOutOfRangeException___ctor → MD_System.String.FillStringChecked → System_IndexOutOfRangeException___ctor → MD_System.String.FillStringChecked → System_IndexOutOfRangeException___ctor → MD_System.String.FillStringChecked → System_IndexOutOfRangeException___ctor → MD_System.String.FillStringChecked → System_IndexOutOfRangeException___ctor → MD_System.String.FillStringChecked → System_IndexOutOfRangeException___ctor → MD_System.String.FillStringChecked → System_IndexOutOfRangeException___ctor → MD_System.String.FillStringChecked

## SparkTeclas__Lista
TI_SparkTeclas → SparkTeclas__MontaLista → TI_SparkTeclas

## SparkTeclas__MontaBindings
UnityEngine_InputSystem_InputActionMap__Disable → UnityEngine_InputSystem_InputAction__get_bindings → UnityEngine_InputSystem_InputActionSetupExtensions__ChangeBinding → UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax__Erase → TI_SparkTeclas → LIT_"''" → System_String__StartsWith → LIT_"'alt+'" → System_String__StartsWith → LIT_"'ctrl+'" → System_String__StartsWith → LIT_"'shift+'" → UnityEngine_InputSystem_InputActionMap__Enable → MR_System.Collections.Generic.List<string>..ctor → LIT_"'<Keyboard>/ctrl'" → MR_System.Collections.Generic.List<string>.Add → LIT_"'<Keyboard>/shift'" → MR_System.Collections.Generic.List<string>.Add → LIT_"'<Keyboard>/alt'" → MR_System.Collections.Generic.List<string>.Add → UnityEngine_InputSystem_InputActionSetupExtensions__AddBinding → UnityEngine_InputSystem_InputActionSetupExtensions__AddCompositeBinding → LIT_"'OneModifier'" → MR_System.Collections.Generic.List<string>.get_Item → LIT_"'Modifier'" → UnityEngine_InputSystem_InputActionSetupExtensions__AddCompositeBinding → LIT_"'TwoModifiers'" → MR_System.Collections.Generic.List<string>.get_Item → UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax__With → LIT_"'Modifier1'" → MR_System.Collections.Generic.List<string>.get_Item → LIT_"'Modifier2'" → UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax__With

## SparkTeclas__MontaLista
LIT_"'Force attack (hold)'" → LIT_"'Stay in place on ground click (hold)'" → TI_System.Collections.Generic.List<SparkTeclas.Item> → MR_System.Collections.Generic.List<SparkTeclas.Item>..ctor → TI_SparkTeclas → SparkTeclas___MontaLista_g__Jogo_22_0 → LIT_"'Windows'" → LIT_"'Inventory'" → SparkTeclas___MontaLista_g__Jogo_22_0 → LIT_"'Windows'" → LIT_"'Character status'" → LIT_"'CharacterStatus'" → SparkTeclas___MontaLista_g__Jogo_22_0 → LIT_"'Windows'" → LIT_"'Actions'" → SparkTeclas___MontaLista_g__Nossa_22_1 → LIT_"'Windows'" → LIT_"'Skills'" → SparkTeclas___MontaLista_g__Jogo_22_0 → LIT_"'Windows'" → LIT_"'System menu'" → LIT_"'SystemMenu'" → SparkTeclas___MontaLista_g__Nossa_22_1 → LIT_"'Windows'" → LIT_"'Quest'" → SparkTeclas___MontaLista_g__Nossa_22_1 → LIT_"'Windows'" → LIT_"'Clan'" → SparkTeclas___MontaLista_g__Nossa_22_1 → LIT_"'Windows'" → LIT_"'Friends'" → SparkTeclas___MontaLista_g__Nossa_22_1 → LIT_"'Windows'" → LIT_"'Map'" → SparkTeclas___MontaLista_g__Nossa_22_1 → LIT_"'Windows'" → LIT_"'Radar'" → SparkTeclas___MontaLista_g__Nossa_22_1 → LIT_"'Windows'" → LIT_"'Macro'" → SparkTeclas___MontaLista_g__Nossa_22_1 → LIT_"'Windows'" → LIT_"'Community board'" → LIT_"'Board'" → SparkTeclas___MontaLista_g__Nossa_22_1 → LIT_"'Windows'" → LIT_"'GM window'" → LIT_"'Gm'" → SparkTeclas___MontaLista_g__Nossa_22_1 → LIT_"'Interface'" → LIT_"'Hide all interface'" → LIT_"'HideUI'" → SparkTeclas___MontaLista_g__Nossa_22_1 → LIT_"'Interface'" → LIT_"'Hide chat'" → LIT_"'HideChat'" → SparkTeclas___MontaLista_g__Nossa_22_1 → LIT_"'Interface'" → LIT_"'Party buffs display'" → LIT_"'PartyBuffs'" → SparkTeclas___MontaLista_g__Nossa_22_1 → LIT_"'Interface'" → LIT_"'Reset window positions'" → LIT_"'ResetLayout'" → SparkTeclas___MontaLista_g__Nossa_22_1 → LIT_"'Interface'" → LIT_"'Low detail mode'" → LIT_"'LowDetail'" → SparkTeclas___MontaLista_g__Nossa_22_1 → LIT_"'Interface'" → LIT_"'Mute all sound'" → LIT_"'Mute'" → SparkTeclas___MontaLista_g__Jogo_22_0 → LIT_"'Character'" → LIT_"'Attack'" → SparkTeclas___MontaLista_g__Jogo_22_0 → LIT_"'Character'" → LIT_"'Sit / stand'" → LIT_"'Sit'" → SparkTeclas___MontaLista_g__Jogo_22_0 → LIT_"'Character'" → LIT_"'Target yourself'" → LIT_"'TargetSelf'" → SparkTeclas___MontaLista_g__Jogo_22_0 → LIT_"'Character'" → LIT_"'Next target'" → LIT_"'NextTarget'" → SparkTeclas___MontaLista_g__Jogo_22_0 → LIT_"'Character'" → LIT_"'Force attack (hold)'" → LIT_"'Ctrl'" → SparkTeclas___MontaLista_g__Jogo_22_0 → LIT_"'Character'" → LIT_"'Stay in place on ground click (hold)'" → LIT_"'Shift'" → SparkTeclas___MontaLista_g__Jogo_22_0 → LIT_"'Character'" → LIT_"'Close window / cancel cast'" → LIT_"'CloseWindow'" → SparkTeclas___MontaLista_g__Nossa_22_1 → LIT_"'Wyvern'" → LIT_"'Fly forward'" → LIT_"'FlyForward'" → SparkTeclas___MontaLista_g__Nossa_22_1 → LIT_"'Wyvern'" → LIT_"'Fly back'" → LIT_"'FlyBack'" → SparkTeclas___MontaLista_g__Nossa_22_1 → LIT_"'Wyvern'" → LIT_"'Turn left'" → LIT_"'FlyLeft'" → SparkTeclas___MontaLista_g__Nossa_22_1 → 

## SparkTeclas__NomeDoModificador
System_String__ToLowerInvariant → System_String__Contains → LIT_"'alt'" → System_String__Contains → LIT_"'ctrl'" → System_String__Contains → LIT_"'control'" → System_String__Contains → LIT_"'shift'" → LIT_"''" → LIT_"'ctrl'"

## SparkTeclas__Nossa
TI_SparkTeclas → UnityEngine_InputSystem_InputActionSetupExtensions__AddAction → TI_SparkTeclas → UnityEngine_InputSystem_InputActionMap__Disable → UnityEngine_InputSystem_InputAction__get_bindings → UnityEngine_InputSystem_InputActionSetupExtensions__ChangeBinding → UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax__Erase → TI_SparkTeclas → LIT_"''" → System_String__StartsWith → LIT_"'alt+'" → System_String__StartsWith → LIT_"'ctrl+'" → System_String__StartsWith → LIT_"'shift+'" → UnityEngine_InputSystem_InputActionMap__Enable → MR_System.Collections.Generic.List<string>..ctor → LIT_"'<Keyboard>/ctrl'" → MR_System.Collections.Generic.List<string>.Add → LIT_"'<Keyboard>/shift'" → MR_System.Collections.Generic.List<string>.Add → LIT_"'<Keyboard>/alt'" → MR_System.Collections.Generic.List<string>.Add → UnityEngine_InputSystem_InputActionSetupExtensions__AddBinding → UnityEngine_InputSystem_InputActionSetupExtensions__AddCompositeBinding → LIT_"'OneModifier'" → MR_System.Collections.Generic.List<string>.get_Item → LIT_"'Modifier'" → UnityEngine_InputSystem_InputActionSetupExtensions__AddCompositeBinding → LIT_"'TwoModifiers'" → MR_System.Collections.Generic.List<string>.get_Item → UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax__With → LIT_"'Modifier1'" → MR_System.Collections.Generic.List<string>.get_Item → LIT_"'Modifier2'" → UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax__With

## SparkTeclas__PaginaPedida
System_Int32__ToString → System_String__Concat → LIT_"'BarPage'" → TI_SparkTeclas → SparkTeclas__get_Nosso → UnityEngine_InputSystem_InputActionMap__FindAction → UnityEngine_InputSystem_InputAction__WasPerformedThisFrame

## SparkTeclas__QuemUsa
MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator → MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext → TI_SparkTeclas → SparkTeclas__VooEBarra → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose

## SparkTeclas__Salva
TI_SparkTeclas → System_Text_StringBuilder___ctor → TI_SparkTeclas → MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator → MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext → System_String__Concat → LIT_"'/'" → System_Text_StringBuilder__Append → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose → UnityEngine_PlayerPrefs__SetString → LIT_"'spark.opt.teclas'" → TI_SparkTeclas

## SparkTeclas__Segurando
TI_SparkTeclas → SparkTeclas__get_Nosso → UnityEngine_InputSystem_InputActionMap__FindAction → UnityEngine_InputSystem_InputAction__GetOrCreateActionMap

## SparkTeclas__Separa
LIT_"''" → System_String__StartsWith → LIT_"'alt+'" → System_String__StartsWith → LIT_"'ctrl+'" → System_String__StartsWith → LIT_"'shift+'"

## SparkTeclas__TeclaDoVoo
UnityEngine_InputSystem_InputAction__get_controls → MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.GetEnumerator → MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.MoveNext → MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.get_Current → UnityEngine_InputSystem_Controls_ButtonControl__get_isPressed → UnityEngine_InputSystem_Controls_ButtonControl__get_wasPressedThisFrame → TI_SparkTeclas → SparkTeclas__get_Nosso → UnityEngine_InputSystem_InputActionMap__FindAction → UnityEngine_InputSystem_InputAction__get_controls → MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.MoveNext → MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.get_Current → Gear__UpdateWeaponType → MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.Dispose → Gear__UpdateWeaponType → MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.Dispose → Gear__UpdateWeaponType → MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.Dispose → Gear__UpdateWeaponType → MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.Dispose

## SparkTeclas__TextoDaAcao
TI_SparkTeclas → SparkTeclas__MontaLista → TI_SparkTeclas → MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator → MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose → LIT_"'-'" → TI_SparkTeclas → System_String__op_Inequality → TI_SparkTeclas → SparkTeclas__TextoDe → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose

## SparkTeclas__TextoDe
LIT_"'-'" → TI_SparkTeclas → LIT_"''" → System_String__StartsWith → LIT_"'alt+'" → System_String__StartsWith → LIT_"'ctrl+'" → System_String__StartsWith → LIT_"'shift+'" → UnityEngine_InputSystem_InputControlPath__ToHumanReadableString → System_String__IsNullOrWhiteSpace → System_String__ToUpperInvariant → LIT_"''" → LIT_"'Ctrl+'" → LIT_"''" → LIT_"'Shift+'" → LIT_"''" → LIT_"'Alt+'" → System_String__Concat

## SparkTeclas__Texto
TI_SparkTeclas → LIT_"'-'" → TI_SparkTeclas → LIT_"''" → System_String__StartsWith → LIT_"'alt+'" → System_String__StartsWith → LIT_"'ctrl+'" → System_String__StartsWith → LIT_"'shift+'" → UnityEngine_InputSystem_InputControlPath__ToHumanReadableString → System_String__IsNullOrWhiteSpace → System_String__ToUpperInvariant → LIT_"''" → LIT_"'Ctrl+'" → LIT_"''" → LIT_"'Shift+'" → LIT_"''" → LIT_"'Alt+'" → System_String__Concat

## SparkTeclas__Troca
TI_SparkTeclas → UnityEngine_Object__op_Inequality → TI_SparkTeclas → UnityEngine_Object__op_Equality → UnityEngine_GameObject___ctor → LIT_"'SparkTeclasCaptura'" → UnityEngine_Object__DontDestroyOnLoad → MR_UnityEngine.GameObject.AddComponent<SparkTeclas.Captura> → TI_SparkTeclas

## SparkTeclas__TrocandoPagina
TI_SparkTeclas → SparkTeclas__get_Nosso → System_Int32__ToString → System_String__Concat → LIT_"'BarPage'" → UnityEngine_InputSystem_InputActionMap__FindAction → UnityEngine_InputSystem_InputAction__IsPressed → UnityEngine_InputSystem_InputAction__WasPerformedThisFrame

## SparkTeclas__VoltaAoPadrao
TI_SparkTeclas → MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator → MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext → TI_SparkTeclas → SparkTeclas__MontaBindings → Gear__UpdateWeaponType → MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose → TI_SparkTeclas → SparkTeclas__Salva

## SparkTeclas__VooEBarra
LIT_"'Wyvern'" → System_String__StartsWith → LIT_"'Shortcut bar'" → System_String__StartsWith → LIT_"'Shortcut bar'"

## SparkTeclas___cctor
MR_System.Collections.Generic.Dictionary<string,string__>..ctor → TI_SparkTeclas → LIT_"'FlyForward'" → LIT_"'FlyBack'" → LIT_"'FlyLeft'" → LIT_"'FlyRight'" → LIT_"'FlyUp'" → LIT_"'FlyDown'" → TI_SparkTeclas

## SparkTextoDano_Executor__Update
TI_SparkTextoDano → SparkTextoDano__Anda → UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException

## SparkTextoDano_Pedidor__Update
TI_SparkTextoDano → UnityEngine_Object__op_Inequality → TI_SparkTextoDano → UnityEngine_Object__op_Equality → TI_SparkTextoDano → SparkTextoDano__MascaraDasOpcoes → TI_SparkTextoDano → UnityEngine_Object__op_Equality → TI_SparkTextoDano → TI_SparkPacoteLivre → SparkPacoteLivre__H → SparkPacoteLivre__C → SparkPacoteLivre__Fim

## SparkTextoDano__AlvoAtual
UnityEngine_Object__op_Inequality → TI_SparkTextoDano → UnityEngine_Object__op_Inequality → TI_SparkTextoDano → UnityEngine_Object__op_Inequality → TI_SparkTextoDano

## SparkTextoDano__Anda
TI_SparkTextoDano → UnityEngine_Camera__get_main → TI_SparkTextoDano → UnityEngine_Object__op_Inequality → TI_SparkTextoDano → TI_SparkMontaria → SparkMontaria__Corpo → UnityEngine_Object__op_Equality → UnityEngine_Camera__WorldToScreenPoint → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleRotate__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkTextoDano → SparkTextoDano__Libera → TI_SparkTextoDano → MR_System.Collections.Generic.Dictionary<int,int>.Clear

## SparkTextoDano__CaixaDoNumero


## SparkTextoDano__ConferePedido
TI_SparkTextoDano → UnityEngine_Object__op_Inequality → TI_SparkTextoDano → UnityEngine_Object__op_Equality → TI_SparkTextoDano → SparkTextoDano__MascaraDasOpcoes → TI_SparkTextoDano → UnityEngine_Object__op_Equality → TI_SparkTextoDano → TI_SparkPacoteLivre → SparkPacoteLivre__H → SparkPacoteLivre__C → SparkPacoteLivre__Fim

## SparkTextoDano__Consome
TI_SparkTextoDano

## SparkTextoDano__CorDoNumero


## SparkTextoDano__EhServo
UnityEngine_Object__op_Inequality → TI_SparkPet

## SparkTextoDano__Espera
UnityEngine_Object__op_Equality → TI_SparkTextoDano → SparkTextoDano__get_Ligado → UnityEngine_Object__op_Equality → UnityEngine_Object__op_Inequality → TI_SparkTextoDano → Hit__isMiss → UnityEngine_Object__op_Equality → UnityEngine_Object__op_Inequality → TI_SparkTextoDano → UnityEngine_Object__op_Equality → TI_SparkTextoDano → SparkTextoDano__EhServo → TI_SparkTextoDano → SparkTextoDano__Guarda

## SparkTextoDano__Evento
UnityEngine_Object__op_Equality → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta

## SparkTextoDano__GaranteCamada
TI_SparkTextoDano → UnityEngine_Object__op_Inequality → TI_SparkTextoDano → MR_System.Collections.Generic.Dictionary<int,int>.Clear → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_name → LIT_"'SparkTextoDano'" → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_SparkTextoDano → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → TI_SparkTextoDano → UnityEngine_UIElements_VisualElement__get_style → TI_SparkTextoDano → UnityEngine_UIElements_VisualElement__get_style → TI_SparkTextoDano → UnityEngine_UIElements_VisualElement__get_style → TI_SparkTextoDano → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → LIT_"'NameplatesContainer'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement> → TI_SparkTextoDano → UnityEngine_UIElements_VisualElement__Add → TI_SparkTextoDano → UnityEngine_Object__op_Equality → TI_SparkArte → LIT_"'Data/UI/Assets/TextoDano/DamageTextNumbers'" → MR_SparkArte.Load<UnityEngine.Font> → TI_SparkTextoDano → UnityEngine_Object__op_Inequality → TI_SparkEstilo → SparkEstilo__get_Fonte → TI_SparkTextoDano → TI_SparkTextoDano.Texto → SparkMapaWindow_Loja___ctor → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__set_usageHints → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundSize__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundSize__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleFontDefinition___ctor → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEn

## SparkTextoDano__GaranteOuvintes
TI_SparkTextoDano → MD_SparkTextoDano.PetMudou → TI_SparkPet → System_Delegate__Combine → TI_SparkPet

## SparkTextoDano__Golpe
UnityEngine_Object__op_Equality → TI_SparkTextoDano → SparkTextoDano__get_Ligado → UnityEngine_Object__op_Equality → UnityEngine_Object__op_Inequality → TI_SparkTextoDano → UnityEngine_Object__op_Equality → TI_SparkTextoDano → SparkTextoDano__EhServo → TI_SparkTextoDano → SparkTextoDano__MostraGolpe

## SparkTextoDano__Guarda
TI_SparkTextoDano

## SparkTextoDano__Libera
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_SparkTextoDano → MR_System.Collections.Generic.Dictionary<int,int>.Remove

## SparkTextoDano__LigaPedidor
TI_SparkTextoDano → UnityEngine_Object__op_Inequality → UnityEngine_GameObject___ctor → LIT_"'SparkTextoDanoPedido'" → UnityEngine_Object__DontDestroyOnLoad → MR_UnityEngine.GameObject.AddComponent<SparkTextoDano.Pedidor> → TI_SparkTextoDano

## SparkTextoDano__MascaraDasOpcoes
TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Op

## SparkTextoDano__Mensagem
TI_SparkTextoDano → SparkTextoDano__get_Ligado → TI_SparkTextoDano → SparkTextoDano__GaranteOuvintes → UnityEngine_Object__op_Equality → TI_SparkTextoDano → SMParam__GetIntValue → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta → SMParam__GetIntValue → TI_SparkTextoDano → SparkTextoDano__AlvoAtual → UnityEngine_Object__op_Inequality → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta → UnityEngine_Object__op_Inequality → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta → TI_SparkTextoDano → SparkTextoDano__Servidor → TI_SparkTextoDano → SMParam__GetIntValue → TI_SparkTextoDano → SparkTextoDano__Consome → TI_SparkTextoDano → SparkTextoDano__AlvoAtual → UnityEngine_Object__op_Equality → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta → TI_SparkTextoDano → SMParam__GetIntValue → UnityEngine_Object__op_Equality → TI_SparkTextoDano → SparkTextoDano__Consome → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta → TI_SparkTextoDano → SparkTextoDano__AlvoAtual → UnityEngine_Object__op_Inequality → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta → TI_SparkTextoDano → SMParam__GetIntValue → SparkTextoDano__MeuServo → UnityEngine_Object__op_Inequality → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta → TI_SparkTextoDano → SMParam__GetIntValue → UnityEngine_Object__op_Inequality → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta → TI_SparkTextoDano → SMParam__GetIntValue → SparkTextoDano__MeuServo → UnityEngine_Object__op_Equality → TI_SparkTextoDano → SparkTextoDano__Consome → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta → SparkTextoDano__MeuServo

## SparkTextoDano__MeuServo
TI_SparkPet → UnityEngine_Object__op_Inequality → TI_SparkPet → MR_System.Collections.Concurrent.ConcurrentDictionary<int,Entity>.TryGetValue

## SparkTextoDano__MinhaSkillEm
TI_SparkTextoDano

## SparkTextoDano__MostraGolpe
Hit__isMiss → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta → Hit__isCrit → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta → Hit__isShielded → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta

## SparkTextoDano__Movimento
TI_SparkTextoDano

## SparkTextoDano__Numero


## SparkTextoDano__Op
TI_SparkOpcoes

## SparkTextoDano__Pacote
TI_SparkLeitor → SparkLeitor___ctor → SparkLeitor__Ex → ServerPacket__ReadB → TI_SparkTextoDano → SparkTextoDano__get_Ligado → TI_SparkTextoDano → SparkTextoDano__GaranteOuvintes → UnityEngine_Object__op_Equality → TI_SparkTextoDano → SparkTextoDano__Guarda → TI_SparkTextoDano → TI_SparkPet → TI_SparkTextoDano → SparkTextoDano__Guarda → TI_SparkTextoDano → SparkTextoDano__MeuServo → UnityEngine_Object__op_Inequality → WorldSpawner__Busca → UnityEngine_Object__op_Equality → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta → TI_SparkTextoDano → SparkTextoDano__Evento

## SparkTextoDano__Palavra
LIT_"'_Alvo'" → LIT_"'_Servo'" → LIT_"'_Jogador'" → LIT_"'OverHit'" → LIT_"'Over-hit'" → LIT_"'CriticalHeal'" → LIT_"'CriticalHeal_Servo'" → LIT_"'+Critical Heal'" → System_String__Concat → LIT_"'Resisted'" → LIT_"'Blocked_Jogador'" → LIT_"'Blocked_Alvo'" → LIT_"'Blocked'" → System_String__Concat → LIT_"'Evaded'" → System_String__Concat → LIT_"'Immune'" → System_String__Concat → LIT_"'Critical'"

## SparkTextoDano__Pe
TI_SparkMontaria → SparkMontaria__Corpo

## SparkTextoDano__PetMudou
TI_SparkPet → TI_SparkTextoDano → SparkTextoDano__get_Ligado → TI_SparkTextoDano → SparkTextoDano__Servidor → TI_SparkTextoDano → SparkTextoDano__MeuServo → UnityEngine_Object__op_Equality → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta → TI_SparkTextoDano

## SparkTextoDano__Posicoes
TI_SparkTextoDano

## SparkTextoDano__Servidor
TI_SparkTextoDano

## SparkTextoDano__SkillLancada
TI_SparkTextoDano → SparkTextoDano__get_Ligado → TI_SparkTextoDano → SparkTextoDano__GaranteOuvintes → UnityEngine_Object__op_Inequality → GameClient__get_CurrentPlayerId → TI_SparkPet → TI_SparkTextoDano

## SparkTextoDano__Solta
UnityEngine_Object__op_Equality → TI_SparkTextoDano → SparkTextoDano__GaranteCamada → TI_SparkTextoDano → SparkTextoDano__GaranteOuvintes → TI_SparkTextoDano → SparkTextoDano__Libera → TI_SparkTextoDano → MR_System.Collections.Generic.Dictionary<int,int>.TryGetValue → TI_SparkTextoDano → MR_System.Collections.Generic.Dictionary<int,int>.set_Item → SparkTextoDano__Posicoes → TI_SparkTextoDano → SparkTextoDano__Palavra → TI_SparkTextoDano → MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.TryGetValue → System_String__Concat → LIT_"'Data/UI/Assets/TextoDano/'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → TI_SparkTextoDano → MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.set_Item → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_Object__op_Inequality → UnityEngine_UIElements_StyleBackground___ctor → UnityEngine_Object__op_Inequality → LIT_"''" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_SparkTextoDano → LIT_"'+'" → LIT_"'SP+'" → LIT_"'XP+'" → LIT_"'SP+'" → LIT_"'XP+'" → LIT_"''" → System_Int32__ToString → System_String__Concat → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkTextoDano → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_SparkMontaria → SparkMontaria__Corpo → TI_SparkTextoDano → TI_SparkMontaria → SparkMontaria__Corpo → TI_SparkTextoDano → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__BringToFront → TI_SparkTextoDano → UnityEngine_Object__op_Equality → UnityEngine_GameObject___ctor → LIT_"'SparkTextoDano'" → UnityEngine_Object__DontDestroyOn

## SparkTextoDano__Status
UnityEngine_Object__op_Equality → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Servidor → UnityEngine_Object__op_Equality → TI_SparkTextoDano → SparkTextoDano__EhServo → UnityEngine_Object__op_Equality → UnityEngine_Object__op_Inequality → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta → TI_SparkTextoDano → SparkTextoDano__Op → TI_SparkTextoDano → SparkTextoDano__Solta

## SparkTextoDano__Textura
TI_SparkTextoDano → MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.TryGetValue → System_String__Concat → LIT_"'Data/UI/Assets/TextoDano/'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → TI_SparkTextoDano → MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.set_Item

## SparkTextoDano___cctor
TI_SparkTextoDano → TI_SparkTextoDano.Esperada__,0x20 → TI_SparkTextoDano

## SparkTutorialWindow__AtualizaBotao
MouseOverDetectionManipulator__Disable → MouseOverDetectionManipulator__Enable → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → SparkTutorialWindow__Pinta → UnityEngine_UIElements_VisualElement__BringToFront

## SparkTutorialWindow__Awake
TI_SparkTutorialWindow → UnityEngine_Object__op_Equality → TI_SparkTutorialWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SparkTutorialWindow__BuildWindow
TI_SparkTutorialWindow.<BuildWindow>d__28 → Gear__UpdateWeaponType

## SparkTutorialWindow__CliqueNoBotao
MR_System.Collections.Generic.List<int>.get_Item → MR_System.Collections.Generic.List<int>.RemoveAt → AudioManager__PlayUISound → LIT_"'click_01'" → TI_SparkTutorial → SparkTutorial__CliqueNaInterrogacao → SparkTutorialWindow__AtualizaBotao

## SparkTutorialWindow__Clique
LIT_"'\\\\$(\\\\w+)'" → LIT_"''" → System_String__Contains → LIT_"'$'" → MD_SparkTutorialWindow._Clique_b__32_0 → System_Text_RegularExpressions_Regex__Replace → LIT_"'\\\\$(\\\\w+)'" → System_String__StartsWith → LIT_"'link '" → System_String__StartsWith → LIT_"'bypass'" → System_String__StartsWith → LIT_"'-h'" → GameClientPacketHandler__RequestBypassToServer → TI_SparkTutorial → TI_SparkPacoteLivre → LIT_"''" → SparkPacoteLivre__S → TI_SparkTutorial → SparkPacoteLivre__Fim

## SparkTutorialWindow__Fecha


## SparkTutorialWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → L2GameUI__WindowClosed

## SparkTutorialWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Components/L2Button/L2Button'"

## SparkTutorialWindow__MontaBotao
TI_SparkArte → LIT_"'Data/UI/Assets/html/TutorialBtn'" → MR_SparkArte.Load<UnityEngine.Texture2D> → LIT_"'Data/UI/Assets/html/TutorialBtn_light'" → MR_SparkArte.Load<UnityEngine.Texture2D> → LIT_"'Data/UI/Assets/html/TutorialBtn_over'" → MR_SparkArte.Load<UnityEngine.Texture2D> → LIT_"'Data/UI/Assets/html/TutorialBtn_down'" → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_name → LIT_"'SparkTutorialBtn'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__set_tooltip → LIT_"'Tutorial'" → UnityEngine_Object__op_Equality → UnityEngine_UIElements_Label___ctor → LIT_"'?'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__Add → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → TI_MouseOverDetectionManipulator → MouseOverDetectionManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent> → MD_SparkTutorialWindow._MontaBotao_b__35_0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent> → MD_SparkTutorialWindow._MontaBotao_b__35_1 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_SparkTutorialWindow._MontaBotao_b__35_2 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent> → MD_SparkTutorialWindow._MontaBotao_b__35_3 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent> → UnityEngine_UIElements_VisualE

## SparkTutorialWindow__Mostra
UnityEngine_UIElements_VisualElement__Clear → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → LIT_"'Tutorial'" → TI_SparkHtml.Contexto → SparkHtml_Contexto___ctor → MD_SparkTutorialWindow.Clique → MD_SparkTutorialWindow._Mostra_b__29_0 → MR_System.Nullable<UnityEngine.Color>..ctor → LIT_"''" → TI_SparkHtml → SparkHtml__Le → SparkHtml__Desenha → UnityEngine_UIElements_ScrollView__set_scrollOffset

## SparkTutorialWindow__OnDestroy
TI_SparkTutorialWindow → UnityEngine_Object__op_Equality → TI_SparkTutorialWindow

## SparkTutorialWindow__ShowWindow
L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## SparkTutorial__CliqueNaInterrogacao
TI_SparkPacoteLivre → SparkPacoteLivre__D → TI_SparkTutorial → SparkPacoteLivre__Fim

## SparkTutorial__Fecha
TI_SparkTutorialWindow

## SparkTutorial__MostraHtml
TI_SparkLeitor → SparkLeitor___ctor → SparkLeitor__S → TI_SparkTutorial → SparkTutorial__get_Instance → TI_SparkTutorialWindow → SparkTutorialWindow__Mostra → TI_SparkTutorialWindow

## SparkTutorial__OnDestroy
TI_SparkTutorial → UnityEngine_Object__op_Equality → TI_SparkTutorial

## SparkTutorial__Update
UnityEngine_Object__op_Equality → UnityEngine_Object__op_Inequality → Entity__get_IsDead → UnityEngine_Object__op_Inequality → TI_SparkTutorial → SparkTutorial__Evento → UnityEngine_Object__op_Inequality → TI_SparkTutorial → SparkTutorial__Evento → Entity__get_IsDead → TI_SparkTutorial → SparkTutorial__UmaVez → TI_SparkTutorial → SparkTutorial__Evento → TI_SparkTutorial → SparkTutorial__UmaVez

## StatusWindow__Awake
TI_StatusWindow → UnityEngine_Object__op_Equality → TI_StatusWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## StatusWindow__BuildWindow
TI_StatusWindow.<BuildWindow>d__27 → Gear__UpdateWeaponType

## StatusWindow__FixedUpdate
UnityEngine_Object__op_Equality → UnityEngine_Debug__LogWarning → LIT_"'Player status is not of type playerstatus'" → System_Int32__ToString → System_String__Concat → LIT_"'/'" → System_Int32__ToString → System_String__Concat → LIT_"'/'" → System_Int32__ToString → System_String__Concat → LIT_"'/'" → LIT_"'00.00%'" → System_Single__ToString → LIT_"'0.00'" → System_String__Concat → LIT_"'%'" → UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## StatusWindow__HideWindow
L2Window__HideWindow → LIT_"'window_close'" → System_String__Concat → LIT_"'event:/InterfaceSound/'" → FMODUnity_RuntimeManager__PathToEventReference → SparkSons__get_Instance → SparkSons__TocaInterface → UnityEngine_Debug__LogWarning → LIT_"'Trying to play a null EventReference sound.'" → FMODUnity_RuntimeManager__PlayOneShot

## StatusWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/StatusWindow/StatusWindow'"

## StatusWindow__OnClickSelf
UnityEngine_Component__get_transform → UnityEngine_Component__get_gameObject → ObjectData___ctor → MR_UnityEngine.Component.GetComponent<Entity> → UnityEngine_Object__op_Equality → NpcSpawner__NaoSelecionavel → UnityEngine_Object__op_Inequality → TargetManager__HasTarget → GameClientPacketHandler__SendRequestCancel

## StatusWindow__OnClick
UnityEngine_Component__get_transform → UnityEngine_Component__get_gameObject → ObjectData___ctor → MR_UnityEngine.Component.GetComponent<Entity> → UnityEngine_Object__op_Equality → NpcSpawner__NaoSelecionavel → UnityEngine_Object__op_Inequality → TargetManager__HasTarget → GameClientPacketHandler__SendRequestCancel

## StatusWindow__OnDestroy
TI_StatusWindow

## StatusWindow__ShiftCliqueEmMim
UnityEngine_Object__op_Equality → GameClient__get_CurrentPlayerId → RequestActionPacket___ctor

## StatusWindow__ShowWindow
L2Window__ShowWindow → LIT_"'window_open'" → System_String__Concat → LIT_"'event:/InterfaceSound/'" → FMODUnity_RuntimeManager__PathToEventReference → SparkSons__get_Instance → SparkSons__TocaInterface → UnityEngine_Debug__LogWarning → LIT_"'Trying to play a null EventReference sound.'" → FMODUnity_RuntimeManager__PlayOneShot

## StatusWindow__UpdateStatusValues
UnityEngine_Object__op_Equality → UnityEngine_Debug__LogWarning → LIT_"'Player status is not of type playerstatus'" → System_Int32__ToString → System_String__Concat → LIT_"'/'" → System_Int32__ToString → System_String__Concat → LIT_"'/'" → System_Int32__ToString → System_String__Concat → LIT_"'/'" → LIT_"'00.00%'" → System_Single__ToString → LIT_"'0.00'" → System_String__Concat → LIT_"'%'" → UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## StatusWindow__Update
UnityEngine_Object__op_Inequality → SparkPiscaHp__Atualiza → UnityEngine_Object__op_Inequality → UnityEngine_UIElements_VisualElement__get_resolvedStyle → SparkPreviaRegenBarra__Atualiza → UnityEngine_UIElements_VisualElement__get_resolvedStyle → SparkPreviaRegenBarra__Atualiza → UnityEngine_UIElements_VisualElement__get_resolvedStyle → SparkPreviaRegenBarra__Atualiza

## Status__UpdateStatus


## SystemMenuWindow__AbreLink
MR_System.ReadOnlySpan<char>.GetPinnableReference → System_String__Concat → LIT_"': Coming soon.'" → TI_SparkComandos → SMParam___ctor → TI_ChatWindow → SystemMessageTable__get_Instance → MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item → AllianceMessage___ctor → ChatWindow__ReceiveSystemMessage

## SystemMenuWindow__Awake
TI_SystemMenuWindow → UnityEngine_Object__op_Equality → TI_SystemMenuWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## SystemMenuWindow__BuildWindow
TI_SystemMenuWindow.<BuildWindow>d__8 → Gear__UpdateWeaponType

## SystemMenuWindow__HandleExitButtonClick
TI_ExitWindow → LIT_"'Exit Game'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → ExitWindow__Atualiza

## SystemMenuWindow__HandleRestartButtonClick
TI_ExitWindow → LIT_"'Restart Game'" → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → ExitWindow__Atualiza

## SystemMenuWindow__HideWindow
L2PopupWindow__HideWindow → AudioManager__PlayUISound → LIT_"'system_close_01'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → System_ThrowHelper__ThrowArgumentOutOfRange_IndexException → System_Array__Copy

## SystemMenuWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SystemMenuWindow/SystemMenuWindow'"

## SystemMenuWindow__MontaLista
UnityEngine_UIElements_VisualElement__Clear → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleBackgroundRepeat__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit → MD_SystemMenuWindow._MontaLista_b__12_0 → SystemMenuWindow__Item → LIT_"'Youtube'" → LIT_"'YouTube'" → MD_SystemMenuWindow._MontaLista_b__12_1 → SystemMenuWindow__Item → LIT_"'Discord'" → MD_SystemMenuWindow._MontaLista_b__12_2 → SystemMenuWindow__Item → LIT_"'Facebook'" → SystemMenuWindow__Separador → TI_SystemMenuWindow.<>c → LIT_"'Attendance / VIP'" → LIT_"'Attend'" → TI_SystemMenuWindow.<>c → MD_SystemMenuWindow.__c._MontaLista_b__12_3 → TI_SystemMenuWindow.<>c → SystemMenuWindow__Item → TI_SystemMenuWindow.<>c → LIT_"'Post'" → LIT_"'Mailbox'" → TI_SystemMenuWindow.<>c → MD_SystemMenuWindow.__c._MontaLista_b__12_4 → TI_SystemMenuWindow.<>c → SystemMenuWindow__Item → TI_SystemMenuWindow.<>c → LIT_"'Friend Manager'" → LIT_"'Friend'" → TI_SystemMenuWindow.<>c → MD_SystemMenuWindow.__c._MontaLista_b__12_5 → TI_SystemMenuWindow.<>c → SystemMenuWindow__Item → TI_SystemMenuWindow.<>c → LIT_"'Community'" → LIT_"'Bbs'" → TI_SystemMenuWindow.<>c → MD_SystemMenuWindow.__c._MontaLista_b__12_6 → TI_SystemMenuWindow.<>c → SystemMenuWindow__Item → SystemMenuWindow__Separador → TI_SystemMenuWindow.<>c → LIT_"'Shortcut'" → TI_SystemMenuWindow.<>c → MD_SystemMenuWindow.__c._MontaLista_b__12_7 → TI_SystemMenuWindow.<>c → SystemMenuWindow__Item → TI_SystemMenuWindow.<>c → LIT_"'Macro'" → TI_SystemMenuWindow.<>c → MD_SystemMenuWindow.__c._MontaLista_b__12_8 → TI_SystemMenuWindow.<>c → SystemMenuWindow__Item → TI_SystemMenuWindow.<>c → LIT_"'Options'" → LIT_"'Option'" → TI_SystemMenuWindow.<>c → MD_SystemMenuWindow.__c._MontaLista_b__12_9 → TI_SystemMenuWindow.<>c → SystemMenuWindow__Item → SystemMenuWindow__Separador → MD_SystemMenuWindow.HandleRestartButtonClick → SystemMenuWindow__Item → LIT_"'Restart'" → MD_SystemMenuWindow.HandleExitButtonClick → SystemMenuWindow__Item → LIT_"'Exit'" → LIT_"'Exit Game'"

## SystemMenuWindow__OnDestroy
TI_SystemMenuWindow

## SystemMenuWindow__ShowWindow
SystemMenuWindow__Posiciona → L2PopupWindow__ShowWindow → AudioManager__PlayUISound → LIT_"'system_open_01'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## SystemMenuWindow__ToggleHideWindow


## SystemMenuWindow__Update
L2Window__MouseOverThisWindow → TI_MenuWindow → L2Window__MouseOverThisWindow → TI_MenuWindow

## TargetManager__Assist
TargetManager__HasTarget → Entity__get_Combat → UnityEngine_Object__op_Equality → Entity__get_Combat → UnityEngine_Object__op_Inequality → UnityEngine_Component__get_transform → UnityEngine_Object__op_Inequality → TargetManager__SetTarget

## TargetManager__Awake
UnityEngine_Object__op_Equality → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## TargetManager__ClearAttackTarget


## TargetManager__ClearTarget
TargetManager__HasTarget → GameClientPacketHandler__SendRequestCancel

## TargetManager__ClearTarget
TargetManager__HasTarget → GameClientPacketHandler__SendRequestCancel

## TargetManager__FixedUpdate
UnityEngine_Object__op_Equality → UnityEngine_Object__op_Inequality → UnityEngine_Component__get_transform → UnityEngine_Object__op_Inequality → UnityEngine_Component__get_transform → TargetManager__HasTarget → UnityEngine_Component__get_transform → TargetManager__IsTransformVisible → TargetManager__HasTarget → UnityEngine_Component__get_transform → UnityEngine_Object__op_Equality → UnityEngine_Transform__get_position → UnityEngine_Component__get_transform → UnityEngine_Transform__get_forward → UnityEngine_Physics__SphereCastAll → TargetManager__GetVisibleEntities

## TargetManager__GetNextTargetIndex
TargetManager__HasTarget → MR_System.Collections.Generic.List<UnityEngine.Transform>.get_Item → UnityEngine_Component__get_transform → UnityEngine_Object__op_Equality

## TargetManager__GetVisibleEntities
MD_TargetManager._GetVisibleEntities_b__21_0 → MR_System.Linq.Enumerable.OrderBy<UnityEngine.Transform,float> → MR_System.Linq.Enumerable.ToList<UnityEngine.Transform> → LIT_"'source'" → System_Linq_Error__ArgumentNull → UnityEngine_RaycastHit__get_transform → MR_UnityEngine.Component.GetComponent<Entity> → TargetManager__IsTransformVisible → AttackAction__NpcAtacavel → Entity__get_IsDead

## TargetManager__HasAttackTarget


## TargetManager__HasTarget
UnityEngine_Object__op_Inequality → UnityEngine_Component__get_transform

## TargetManager__IsAttackTargetSet
UnityEngine_Object__op_Inequality

## TargetManager__IsTransformVisible
UnityEngine_Transform__get_position → CameraCollisionDetection__GetCameraViewPortPoints → UnityEngine_Transform__get_position → UnityEngine_Physics__Linecast → UnityEngine_Transform__get_position → UnityEngine_Camera__WorldToViewportPoint

## TargetManager__NextTarget
TargetManager__HasTarget → MR_System.Collections.Generic.List<UnityEngine.Transform>.get_Item → UnityEngine_Component__get_transform → UnityEngine_Object__op_Equality → MR_System.Collections.Generic.List<UnityEngine.Transform>.get_Item → UnityEngine_Component__get_gameObject → Gear__UpdateWeaponType → UnityEngine_GameObject__get_transform → UnityEngine_GameObject__get_tag → UnityEngine_GameObject__get_layer → UnityEngine_LayerMask__LayerToName → UnityEngine_GameObject__get_layer → UnityEngine_GameObject__get_scene → MR_UnityEngine.GameObject.GetComponent<Entity> → MR_UnityEngine.Component.GetComponent<Entity> → TargetManager__SetTarget

## TargetManager__OnDestroy


## TargetManager__PreviousTarget
UnityEngine_Object__op_Inequality → UnityEngine_Component__get_transform → UnityEngine_Object__op_Inequality → UnityEngine_Component__get_gameObject → UnityEngine_GameObject__get_activeInHierarchy → TargetManager__SetTarget

## TargetManager__SetAttackTarget


## TargetManager__SetMask


## TargetManager__SetTarget
MR_UnityEngine.Component.GetComponent<Entity> → UnityEngine_Object__op_Equality → NpcSpawner__NaoSelecionavel → UnityEngine_Object__op_Inequality → TargetManager__HasTarget → GameClientPacketHandler__SendRequestCancel

## TargetManager__SetTarget
UnityEngine_Object__op_Equality → NpcSpawner__NaoSelecionavel → UnityEngine_Object__op_Inequality → TI_ShopWindow → GameClientPacketHandler__SendRequestSetTarget

## TargetManager__SetTarget
UnityEngine_Object__op_Equality → NpcSpawner__NaoSelecionavel → UnityEngine_Object__op_Inequality → TI_ShopWindow → GameClientPacketHandler__SendRequestSetTarget

## TargetManager__Start


## TargetManager__Update
UnityEngine_Object__op_Equality → TargetManager__HasTarget → TargetManager__ClearTarget

## TargetManager__VerifyNextTargetIndex
TargetManager__HasTarget → UnityEngine_Component__get_transform → TargetManager__IsTransformVisible → TargetManager__HasTarget → MR_System.Collections.Generic.List<UnityEngine.Transform>.get_Item → UnityEngine_Component__get_transform → UnityEngine_Object__op_Equality

## TargetManager___ctor


## TargetWindow__Awake
TI_TargetWindow → UnityEngine_Object__op_Equality → TI_TargetWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## TargetWindow__BuildWindow
TI_TargetWindow.<BuildWindow>d__13 → Gear__UpdateWeaponType

## TargetWindow__FixedUpdate
TargetManager__HasTarget → SparkAlvoExpandido__Atualiza → TargetWindow__SetTargetColor → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'visible'" → UnityEngine_UIElements_VisualElement__RemoveFromClassList → LIT_"'visible'" → TI_TargetWindow → UnityEngine_Object__op_Inequality → TargetWindow__CorPelaDiferenca → TI_TargetWindow → TargetWindow__CorPelaDiferenca → TI_TargetWindow → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__ClassListContains → LIT_"'visible'" → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'visible'" → UnityEngine_UIElements_VisualElement__get_resolvedStyle → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit

## TargetWindow__HideWindow
L2PopupWindow__HideWindow → TargetManager__ClearTarget → AudioManager__PlayUISound → LIT_"'window_close'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → System_ThrowHelper__ThrowArgumentOutOfRange_IndexException → System_Array__Copy

## TargetWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/TargetWindow/TargetWindow'"

## TargetWindow__OnDestroy
TI_TargetWindow

## TooltipManipulator__Clear
L2ToolTip__HideWindow

## TooltipManipulator__PointerInHandler
MR_L2ToolTip.UpdateTooltip<object>

## TooltipManipulator__PointerOutHandler
L2ToolTip__HideWindow

## TooltipManipulator__PointerOverHandler


## TooltipManipulator__RegisterCallbacksOnTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerEnterEvent> → MD_TooltipManipulator.PointerInHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerOutEvent> → MD_TooltipManipulator.PointerOutHandler → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.PointerOutEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.DetachFromPanelEvent> → MD_TooltipManipulator.SaiuDaTela → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.DetachFromPanelEvent> → TI_UnityEngine.UIElements.EventCallbackRegistry → UnityEngine_UIElements_EventCallbackRegistry___ctor → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## TooltipManipulator__SaiuDaTela
L2ToolTip__HideWindow

## TooltipManipulator__SetValue


## TooltipManipulator__UnregisterCallbacksFromTarget
TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerEnterEvent> → MD_TooltipManipulator.PointerInHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerEnterEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.PointerOutEvent> → MD_TooltipManipulator.PointerOutHandler → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.PointerOutEvent> → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.DetachFromPanelEvent> → MD_TooltipManipulator.SaiuDaTela → MR_UnityEngine.UIElements.CallbackEventHandler.UnregisterCallback<UnityEngine.UIElements.DetachFromPanelEvent> → LIT_"'callback parameter is null'" → System_ArgumentException___ctor

## TooltipManipulator___ctor
SparkMapaWindow_Loja___ctor → UnityEngine_UIElements_Manipulator__set_target

## TradeSlotContainer__Mostra
L2SlotContainer__CreateSlots → TI_TradeSlot → UnityEngine_UIElements_VisualElement__get_style

## TradeSlot__AddTooltip
InventorySlot__AddTooltip → TradeSlot__get_Grade → TI_SparkDicaItem → SparkDicaItem__Monta → TI_SparkDicaItem → SparkDicaItem__MontaSimples → System_String__Concat

## TradeSlot__AssignItem
InventorySlot__AssignItem → TradeSlot__get_Grade

## TradeSlot__HandleLeftClick
InventorySlot__HandleLeftClick → TradeSlot__get_Grade

## TradeSlot__HandleLeftDoubleClick
TradeSlot__get_Grade

## TradeSlot__SoltaEm
TradeSlot__get_Grade

## TradeWindow__Awake
TI_TradeWindow → UnityEngine_Object__op_Equality → TI_TradeWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## TradeWindow__Botao
TI_TradeWindow.<>c__DisplayClass37_0 → Gear__UpdateWeaponType → TI_SparkArte → LIT_"'Data/UI/_Elements/Components/L2Button/L2Button'" → MR_SparkArte.Load<UnityEngine.UIElements.VisualTreeAsset> → UnityEngine_UIElements_VisualTreeAsset__Instantiate → LIT_"'L2Button'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button> → UnityEngine_UIElements_VisualElement__RemoveFromHierarchy → LIT_"'ButtonLabel'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'trade-botao'" → TradeWindow__Posiciona → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → MD_TradeWindow.__c__DisplayClass37_0._Botao_b__0 → UnityEngine_UIElements_Button__add_clicked

## TradeWindow__BuildWindow
TI_TradeWindow.<BuildWindow>d__22 → Gear__UpdateWeaponType

## TradeWindow__HideWindow
TI_SparkTroca → SparkTroca__Cancela → L2Window__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove

## TradeWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/TradeWindow/TradeWindow'"

## TradeWindow__OnDestroy
MD_TradeWindow.Marca → TI_SparkTroca → SparkTroca__remove_Mudou → TI_TradeWindow → UnityEngine_Object__op_Equality → TI_TradeWindow

## TradeWindow__ShowWindow
L2Window__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## TradeWindow__Update
TI_SparkTroca → TradeSlotContainer__Mostra → TI_SparkTroca → TradeSlotContainer__Mostra → TI_SparkTroca → TradeSlotContainer__Mostra → TI_SparkTroca → UnityEngine_UIElements_VisualElement__EnableInClassList → LIT_"'apagada'" → TI_SparkTroca → UnityEngine_UIElements_VisualElement__EnableInClassList → LIT_"'apagada'" → TI_SparkTroca → LIT_"'01'" → System_Int32__ToString → System_String__Concat → LIT_"'0'" → UnityEngine_UIElements_VisualElement__get_style → System_String__Concat → LIT_"'Data/UI/Assets/Trade/ChatLevelIcon_R'" → TI_SparkArte → MR_SparkArte.Load<UnityEngine.Texture2D> → UnityEngine_UIElements_StyleBackground__op_Implicit → TradeWindow__AtualizaPeso

## UnionWindow__Abre
TI_SparkCanal → SparkCanal__PedeLista

## UnionWindow__Awake
TI_UnionWindow → UnityEngine_Object__op_Equality → TI_UnionWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## UnionWindow__Botao
TI_UnionWindow.<>c__DisplayClass35_0 → Gear__UpdateWeaponType → TI_SparkArte → LIT_"'Data/UI/_Elements/Components/L2Button/L2Button'" → MR_SparkArte.Load<UnityEngine.UIElements.VisualTreeAsset> → UnityEngine_UIElements_VisualTreeAsset__Instantiate → LIT_"'L2Button'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button> → UnityEngine_UIElements_VisualElement__RemoveFromHierarchy → LIT_"'ButtonLabel'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'union-botao'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → MD_UnionWindow.__c__DisplayClass35_0._Botao_b__0 → UnityEngine_UIElements_Button__add_clicked

## UnionWindow__BuildWindow
TI_UnionWindow.<BuildWindow>d__21 → Gear__UpdateWeaponType

## UnionWindow__HideWindow
L2PopupWindow__HideWindow → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → System_ThrowHelper__ThrowArgumentOutOfRange_IndexException → System_Array__Copy

## UnionWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/UnionWindow/UnionWindow'"

## UnionWindow__MostraMembros
TI_SparkCanal → LIT_"\" → TI_SparkCanal → System_String__Format → LIT_"'{0} parties / {1} members'" → LIT_"'Party Leader'" → LIT_"'Members'" → UnityEngine_UIElements_VisualElement__Clear → TI_SparkCanal → TI_UnionWindow.<>c__DisplayClass27_0 → Gear__UpdateWeaponType → TI_SparkCanal → MR_System.Collections.Generic.List<System.ValueTuple<string,int,int>>.get_Item → System_Int32__ToString → UnionWindow__Linha → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'escolhida'" → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_UnionWindow.__c__DisplayClass27_0._Redesenha_b__0 → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_UnionWindow.__c__DisplayClass27_0._Redesenha_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → UnityEngine_UIElements_VisualElement__Add → TI_SparkCanal → SparkCanal__get_SouLiderDoCanal → TI_SparkParty → SparkParty__get_SouLider → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → TI_SparkCanal → MR_System.Collections.Generic.List<System.ValueTuple<string,int,int>>.get_Item → SparkCanal__PedeMembros

## UnionWindow__Mostra
UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## UnionWindow__OnDestroy
MD_UnionWindow.Marca → TI_SparkCanal → SparkCanal__remove_Mudou → MD_UnionWindow.Membros → SparkCanal__remove_ChegouMembros → TI_UnionWindow → UnityEngine_Object__op_Equality → TI_UnionWindow

## UnionWindow__ShowWindow
L2PopupWindow__ShowWindow → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## UnionWindow__Update
TI_SparkCanal → LIT_"\" → TI_SparkCanal → System_String__Format → LIT_"'{0} parties / {1} members'" → LIT_"'Party Leader'" → LIT_"'Members'" → UnityEngine_UIElements_VisualElement__Clear → TI_SparkCanal → TI_UnionWindow.<>c__DisplayClass27_0 → Gear__UpdateWeaponType → TI_SparkCanal → MR_System.Collections.Generic.List<System.ValueTuple<string,int,int>>.get_Item → System_Int32__ToString → UnionWindow__Linha → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'escolhida'" → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_UnionWindow.__c__DisplayClass27_0._Redesenha_b__0 → TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent> → MD_UnionWindow.__c__DisplayClass27_0._Redesenha_b__0 → MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent> → UnityEngine_UIElements_VisualElement__Add → TI_SparkCanal → SparkCanal__get_SouLiderDoCanal → TI_SparkParty → SparkParty__get_SouLider → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit

## UserGear__GetLeftHandBone
UnityEngine_Object__op_Equality → UnityEngine_Component__get_transform → System_String__Concat → LIT_"'['" → LIT_"'] Left hand bone was not assigned, please pre-assign it ..." → UnityEngine_Debug__LogWarning → UnityEngine_Component__get_transform → TransformUtils__FindRecursive → LIT_"'Weapon_L_Bone'"

## UserGear__GetRightHandBone
UnityEngine_Object__op_Equality → UnityEngine_Component__get_transform → System_String__Concat → LIT_"'['" → LIT_"'] Right hand bone was not assigned, please pre-assign it..." → UnityEngine_Debug__LogWarning → UnityEngine_Component__get_transform → TransformUtils__FindRecursive → LIT_"'Weapon_R_Bone'"

## UserGear__StartTrail
UnityEngine_Component__get_gameObject → UnityEngine_GameObject__SetActive → UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException

## UserGear__UpdateAppearance
Appearance__ShouldUpdateWeapons → UnityEngine_Object__op_Inequality → ParticleManager__ArmaTrocada → SparkMapaWindow_Loja___ctor → PlayerAppearance__ShouldUpdateHair → ModelTable__get_Instance → ModelTable__GetHair → ModelTable__get_Instance → ModelTable__GetHair → UnityEngine_Object__op_Inequality → UnityEngine_Object__Destroy → UnityEngine_Object__op_Inequality → UnityEngine_Object__Destroy → UnityEngine_GameObject__get_transform → UnityEngine_Transform__SetParent → UnityEngine_Object__op_Inequality → LIT_"'Hair'" → UnityEngine_GameObject__get_transform → UnityEngine_Transform__SetParent → UnityEngine_GameObject__get_transform → UnityEngine_Transform__get_localPosition → UnityEngine_GameObject__get_transform → UnityEngine_Transform__get_eulerAngles → UnityEngine_GameObject__get_transform → UnityEngine_Transform__SetParent → UnityEngine_GameObject__get_transform → UnityEngine_Transform__set_localPosition → UnityEngine_GameObject__get_transform → UnityEngine_Transform__set_localEulerAngles → PlayerAppearance__ShouldUpdateFace → UnityEngine_Object__op_Inequality → UnityEngine_Object__Destroy → ModelTable__get_Instance → ModelTable__GetFace → UnityEngine_Object__op_Inequality → UnityEngine_GameObject__get_transform → UnityEngine_Transform__SetParent → UnityEngine_GameObject__get_transform → UnityEngine_Transform__set_localScale → UnityEngine_GameObject__get_transform → UnityEngine_Transform__set_localPosition → PlayerAppearance__ShouldUpdateArmors → UserGear__VesteAcessorios → UserGear__AplicaCabelo → UnityEngine_Component__get_gameObject → UnityEngine_GameObject__get_activeSelf → UnityEngine_Component__get_gameObject → UnityEngine_GameObject__get_activeInHierarchy → TI_SparkMultidao → SparkMultidao__AoMudarPecas → SkinnedMeshSync__AchaReferencias → TI_SparkMalhaUnica → SparkMalhaUnica__AntesDeSincronizar → Gear__UpdateWeaponType → UnityEngine_MonoBehaviour__StartCoroutine

## UserGear__UpdateTrailScale
UnityEngine_Component__get_transform → UnityEngine_Transform__set_localScale → UnityEngine_Component__get_transform → UnityEngine_Transform__set_localPosition

## VipWindow__Awake
TI_VipWindow → UnityEngine_Object__op_Equality → TI_VipWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## VipWindow__BuildWindow
TI_VipWindow.<BuildWindow>d__37 → Gear__UpdateWeaponType

## VipWindow__HideWindow
L2Window__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove

## VipWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/SparkRefinoWindow/SparkRefinoWindow'"

## VipWindow__MontaInsignia
TI_VipWindow.<>c__DisplayClass24_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_MouseOverDetectionManipulator → MouseOverDetectionManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → SparkEstilo__Textura → LIT_"'Opcoes/Brilho_Radial'" → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MD_VipWindow.__c__DisplayClass24_0._MontaInsignia_b__0 → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → SparkEstilo__Borda → MD_VipWindow.TracosDaCaixa → System_Delegate__Combine → UnityEngine_UIElements_VisualElement__Add → MD_VipWindow.__c__DisplayClass24_0._MontaInsignia_b__1 → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_name → LIT_"'VipMarca'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → SparkEstilo__Textura → LIT_"'Vip/VIPmark_0'" → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_System.Nullable<UnityEngin

## VipWindow__Monta
L2Window__AddWindow → TI_VipWindow.<>c__DisplayClass24_0 → Gear__UpdateWeaponType → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → TI_MouseOverDetectionManipulator → MouseOverDetectionManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → SparkEstilo__Textura → LIT_"'Opcoes/Brilho_Radial'" → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__Add → MD_VipWindow.__c__DisplayClass24_0._MontaInsignia_b__0 → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__get_style → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → SparkEstilo__Borda → MD_VipWindow.TracosDaCaixa → System_Delegate__Combine → UnityEngine_UIElements_VisualElement__Add → MD_VipWindow.__c__DisplayClass24_0._MontaInsignia_b__1 → UnityEngine_UIElements_VisualElement___ctor → UnityEngine_UIElements_VisualElement__set_name → LIT_"'VipMarca'" → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → SparkEstilo__Textura → LIT_"'Vip/VIPmark_0'" → UnityEngine_UIElements_StyleBackground__op_Implicit → UnityEngine_UIElements_VisualElement__set_pickingMode → UnityEngine_UIElements_VisualElement__Add → TI_SparkEstilo → MR_Syst

## VipWindow__OnDestroy
TI_VipWindow → UnityEngine_Object__op_Equality → TI_VipWindow → MD_VipWindow.Atualiza → TI_SparkVip → SparkVip__remove_Mudou → MD_VipWindow.AtualizaPresenca → TI_SparkVip → System_Delegate__Remove → TI_SparkVip

## VipWindow__ShowWindow
L2Window__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → L2GameUI__WindowOpened → LIT_"'Your rates (level {0})'" → VipWindow__AtualizaInsignia → TI_SparkVip → UnityEngine_UIElements_VisualElement__get_style → System_Int32__ToString → System_String__Concat → LIT_"'Vip/VIPmark_'" → TI_SparkEstilo → SparkEstilo__Textura → UnityEngine_UIElements_StyleBackground__op_Implicit → LIT_"'No VIP'" → System_String__Format → LIT_"'VIP Level {0}'" → LIT_"'Your account has no VIP.'" → TI_SparkVip → SparkVip__NomeDoNivel → System_String__Concat → LIT_"'Ticket: '" → UnityEngine_UIElements_VisualElement__Children → VipWindow__AtualizaTempo → UnityEngine_UIElements_VisualElement__get_style → LIT_"'-'" → TI_SparkVip → System_Single__ToString → LIT_"'0.##'" → System_String__Concat → LIT_"'x'" → TI_SparkVip → UnityEngine_UIElements_VisualElement__get_style → TI_VipWindow → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → TI_SparkEstilo → UnityEngine_UIElements_StyleColor__op_Implicit → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleColor__op_Implicit → TI_SparkEstilo → SparkEstilo__Borda → UnityEngine_Object__op_Inequality → LIT_"'Your rates'" → System_String__Format → LIT_"'Your rates (level {0})'" → UnityEngine_UIElements_VisualElement__get_style → TI_SparkVip → MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit → VipWindow__AtualizaPresenca

## VipWindow__ToggleHideWindow
TI_SparkVip → SparkVip__PedeInfo → TI_SparkVip → TI_SparkPacoteLivre → SparkPacoteLivre__H → SparkPacoteLivre__Fim

## WarehouseWindow__Awake
TI_WarehouseWindow → UnityEngine_Object__op_Equality → TI_WarehouseWindow → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## WarehouseWindow__Botao
TI_WarehouseWindow.<>c__DisplayClass41_0 → Gear__UpdateWeaponType → TI_SparkArte → LIT_"'Data/UI/_Elements/Components/L2Button/L2Button'" → MR_SparkArte.Load<UnityEngine.UIElements.VisualTreeAsset> → UnityEngine_UIElements_VisualTreeAsset__Instantiate → LIT_"'L2Button'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button> → UnityEngine_UIElements_VisualElement__RemoveFromHierarchy → LIT_"'ButtonLabel'" → MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label> → UnityEngine_UIElements_VisualElement__AddToClassList → LIT_"'trade-botao'" → WarehouseWindow__Posiciona → UnityEngine_UIElements_VisualElement__get_style → UnityEngine_UIElements_StyleLength__op_Implicit → TI_ButtonClickSoundManipulator → BlinkingCursorManipulator___ctor → UnityEngine_UIElements_VisualElementExtensions__AddManipulator → MD_WarehouseWindow.__c__DisplayClass41_0._Botao_b__0 → UnityEngine_UIElements_Button__add_clicked

## WarehouseWindow__BuildWindow
TI_WarehouseWindow.<BuildWindow>d__28 → Gear__UpdateWeaponType

## WarehouseWindow__HideWindow
TI_SparkArmazem → SparkArmazem__Fecha → L2Window__HideWindow → AudioManager__PlayUISound → LIT_"'window_close'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove

## WarehouseWindow__LoadAssets
L2Window__LoadAsset → LIT_"'Data/UI/_Elements/Game/PrivateShopWindow/PrivateShopWindow'"

## WarehouseWindow__OnDestroy
MD_WarehouseWindow.Marca → TI_SparkArmazem → SparkArmazem__remove_Mudou → TI_WarehouseWindow → UnityEngine_Object__op_Equality → TI_WarehouseWindow

## WarehouseWindow__ShowWindow
L2Window__ShowWindow → AudioManager__PlayUISound → LIT_"'window_open'" → MR_System.Collections.Generic.List<L2PopupWindow>.Remove → MR_System.Collections.Generic.List<L2PopupWindow>.Add

## WarehouseWindow__Update
TI_SparkArmazem → UnityEngine_Object__op_Inequality → UnityEngine_Component__get_transform → UnityEngine_Transform__get_position → UnityEngine_Component__get_transform → UnityEngine_Transform__get_position → Entity__get_IsDead → TI_SparkArmazem → SparkArmazem__Fecha → TI_SparkArmazem → UnityEngine_Object__op_Inequality → UnityEngine_Component__get_transform → UnityEngine_Transform__get_position → UnityEngine_Object__op_Inequality → WarehouseWindow__Redesenha

## WorldClock__Awake
UnityEngine_Object__op_Equality → MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Object>

## WorldClock__OnDestroy


## WorldClock__UpdateClock
System_TimeSpan___ctor → System_TimeSpan__ToString → LIT_"'hh\\\\:mm\\\\:ss'"

## WorldClock__Update
System_TimeSpan___ctor → System_TimeSpan__ToString → LIT_"'hh\\\\:mm\\\\:ss'" → WorldClock__CalculateSunPhaseRatio → TI_SparkOpcoes → SparkOpcoes__RazaoDoCeu