// PrivateShopWindow__FechaMensagem__180759c30 @ 0x180759c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PrivateShopWindow__FechaMensagem__180759c30(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b432d == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b432d = '\x01';
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0xe0),0);
    uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar3 == 0) {
code_r0x000180759d4f:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
    if (DAT_1834b31c0 == '\0') {
      FUN_180315380(TI_L2GameUI);
      DAT_1834b31c0 = '\x01';
    }
    uVar4 = **(undefined8 **)(TI_L2GameUI + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if (cVar2 != '\0') {
      if (DAT_1834b31c0 == '\0') {
        FUN_180315380(TI_L2GameUI);
        DAT_1834b31c0 = '\x01';
      }
      if (**(longlong **)(TI_L2GameUI + 0xb8) == 0) goto code_r0x000180759d4f;
      *(undefined1 *)(**(longlong **)(TI_L2GameUI + 0xb8) + 0x88) = 0;
    }
  }
  return;
}

