// SparkLootingRights__Fecha__180740190 @ 0x180740190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkLootingRights__Fecha__180740190(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b4280 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkLootingRights);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b4280 = '\x01';
  }
  if (**(longlong **)(TI_SparkLootingRights + 0xb8) != 0) {
    lVar2 = UnityEngine_UIElements_VisualElement__get_style
                      (**(longlong **)(TI_SparkLootingRights + 0xb8),0);
    uVar3 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar2 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
    lVar2 = *(longlong *)(*(longlong *)(TI_SparkLootingRights + 0xb8) + 0x10);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0x38) = 0;
      if (*(char *)(lVar2 + 0x39) != '\0') {
        *(undefined1 *)(lVar2 + 0x39) = 0;
        if (*(longlong *)(lVar2 + 0x40) == 0) {
          FUN_1803155d0(lVar2,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(undefined1 *)(*(longlong *)(lVar2 + 0x40) + 0x38) = 0;
      }
      return;
    }
  }
  return;
}

