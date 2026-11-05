// SparkLootingRights___c___Garante_b__8_0__180750990 @ 0x180750990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkLootingRights___c___Garante_b__8_0__180750990(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  
  if (cRam00000001834b4283 == '\0') {
    FUN_180315380(TI_SparkLootingRights);
    cRam00000001834b4283 = '\x01';
  }
  fVar4 = (float)FUN_1824366b0(0);
  if (fVar4 - *(float *)(*(longlong *)(TI_SparkLootingRights + 0xb8) + 0x18) <= 5.0) {
    return;
  }
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

