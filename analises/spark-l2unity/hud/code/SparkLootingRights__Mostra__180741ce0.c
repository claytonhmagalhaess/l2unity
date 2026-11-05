// SparkLootingRights__Mostra__180741ce0 @ 0x180741ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkLootingRights__Mostra__180741ce0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b4281 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkLootingRights);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b4281 = '\x01';
  }
  if (**(longlong **)(TI_SparkLootingRights + 0xb8) != 0) {
    lVar2 = UnityEngine_UIElements_VisualElement__get_style
                      (**(longlong **)(TI_SparkLootingRights + 0xb8),0);
    uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar2 != 0) {
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
      lVar2 = *(longlong *)(*(longlong *)(TI_SparkLootingRights + 0xb8) + 0x10);
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + 0x38) = 1;
        return;
      }
      return;
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

