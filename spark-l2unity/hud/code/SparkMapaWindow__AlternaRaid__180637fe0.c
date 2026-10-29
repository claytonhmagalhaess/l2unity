// SparkMapaWindow__AlternaRaid__180637fe0 @ 0x180637fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__AlternaRaid__180637fe0(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  longlong lVar5;
  
  if (cRam00000001834b3d2d == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Equality);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3d2d = '\x01';
  }
  if (*(longlong *)(param_1 + 0x1b8) == 0) {
    SparkMapaWindow__MontaPainelRaid__18063ecd0(param_1,0);
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x1b8),0);
    if (lVar5 != 0) {
      uVar2 = FUN_1800047d0(0x32,TI_UnityEngine.UIElements.IStyle,lVar5);
      uVar3 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      bVar4 = FUN_180eb54b0(uVar2,uVar3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Equality);
      if (*(longlong *)(param_1 + 0x1b8) != 0) {
        lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x1b8),0);
        uVar2 = FUN_180eb5810(bVar4 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar5 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar2);
          if (bVar4 != 0) {
            SparkMapaWindow__MarcaRadar__18063c6e0(param_1,0);
          }
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

