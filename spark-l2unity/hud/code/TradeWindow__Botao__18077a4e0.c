// TradeWindow__Botao__18077a4e0 @ 0x18077a4e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong TradeWindow__Botao__18077a4e0
                   (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (cRam00000001834b4396 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_ButtonClickSoundManipulator);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.UIElements.VisualTreeAsset>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(MD_TradeWindow.__c__DisplayClass37_0._Botao_b__0);
    FUN_180315380(TI_TradeWindow.<>c__DisplayClass37_0);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button>);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'L2Button'");
    FUN_180315380(LIT_"'ButtonLabel'");
    FUN_180315380(LIT_"'Data/UI/_Elements/Components/L2Button/L2Button'");
    FUN_180315380(LIT_"'trade-botao'");
    cRam00000001834b4396 = '\x01';
  }
  lVar2 = func_0x000180315580(TI_TradeWindow.<>c__DisplayClass37_0);
  Gear__UpdateWeaponType__1803dadf0(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = param_4;
    func_0x000180314690(lVar2 + 0x10,param_4);
    if (*(int *)(TI_SparkArte + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar3 = FUN_180a90ae0(LIT_"'Data/UI/_Elements/Components/L2Button/L2Button'",MR_SparkArte.Load<UnityEngine.UIElements.VisualTreeAsset>);
    if (lVar3 != 0) {
      uVar4 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(lVar3,0);
      if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar3 = FUN_180b0e310(uVar4,LIT_"'L2Button'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Button>);
      if (lVar3 != 0) {
        UnityEngine_UIElements_VisualElement__RemoveFromHierarchy(lVar3,0);
        plVar5 = (longlong *)FUN_180b0e310(lVar3,LIT_"'ButtonLabel'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0xe48))(plVar5,param_1,*(undefined8 *)(*plVar5 + 0xe50));
          UnityEngine_UIElements_VisualElement__AddToClassList(lVar3,LIT_"'trade-botao'",0);
          TradeWindow__Posiciona(lVar3,param_2,param_3,0);
          uVar4 = func_0x000180315580(TI_ButtonClickSoundManipulator);
          BlinkingCursorManipulator___ctor__1807aa3c0(uVar4,lVar3,0);
          UnityEngine_UIElements_VisualElementExtensions__AddManipulator(lVar3,uVar4,0);
          uVar4 = func_0x000180315580(TI_System.Action);
          FUN_1816a9c60(uVar4,lVar2,MD_TradeWindow.__c__DisplayClass37_0._Botao_b__0,0);
          UnityEngine_UIElements_Button__add_clicked(lVar3,uVar4,0);
          return lVar3;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  lVar2 = (*pcVar1)();
  return lVar2;
}

