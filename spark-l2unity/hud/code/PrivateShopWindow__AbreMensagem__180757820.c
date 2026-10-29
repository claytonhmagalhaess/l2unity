// PrivateShopWindow__AbreMensagem__180757820 @ 0x180757820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PrivateShopWindow__AbreMensagem__180757820(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b432b == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkLoja);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b432b = '\x01';
  }
  plVar1 = *(longlong **)(param_1 + 0xe8);
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3555 == '\0') {
    FUN_180315380(TI_SparkLoja);
    cRam00000001834b3555 = '\x01';
  }
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xa88))
              (plVar1,*(undefined8 *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x58),
               *(undefined8 *)(*plVar1 + 0xa90));
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xe0),0);
      uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar3 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
        plVar1 = *(longlong **)(param_1 + 0xe8);
        if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018075793d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x268))(plVar1,*(undefined8 *)(*plVar1 + 0x270));
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

