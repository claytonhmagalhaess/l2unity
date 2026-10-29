// SparkMapaWindow__HideWindow__18063b690 @ 0x18063b690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__HideWindow__18063b690(longlong param_1,char param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b3d1f == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'window_close'");
    cRam00000001834b3d1f = '\x01';
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    L2PopupWindow__HideWindow__1807780b0(param_1,param_2,0);
    if (param_2 == '\0') {
      if (DAT_1834b301f == '\0') {
        FUN_180315380(TI_AudioManager);
        DAT_1834b301f = '\x01';
      }
      if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
        AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'window_close'",0);
      }
    }
    if (DAT_1834b31c0 == '\0') {
      FUN_180315380(TI_L2GameUI);
      DAT_1834b31c0 = '\x01';
    }
    if (**(longlong **)(TI_L2GameUI + 0xb8) != 0) {
      L2GameUI__WindowClosed__180775fc0(**(longlong **)(TI_L2GameUI + 0xb8),param_1,0);
    }
    if (DAT_1834b2f44 == '\0') {
      FUN_180315380(TI_UnityEngine.Vector2);
      DAT_1834b2f44 = '\x01';
    }
    uVar1 = (*(undefined4 **)(TI_UnityEngine.Vector2 + 0xb8))[1];
    *(undefined4 *)(param_1 + 0x234) = **(undefined4 **)(TI_UnityEngine.Vector2 + 0xb8);
    *(undefined4 *)(param_1 + 0x238) = uVar1;
    *(undefined4 *)(param_1 + 0x248) = 0;
    *(undefined1 *)(param_1 + 0x228) = 0;
    if (((param_2 == '\0') && (*(longlong *)(param_1 + 0x30) != 0)) &&
       (0.01 < *(float *)(param_1 + 0x254))) {
      if (*(longlong *)(param_1 + 0x30) != 0) {
        lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
        uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar3 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
          *(undefined4 *)(param_1 + 600) = 0xffffffff;
          return;
        }
      }
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined8 *)(param_1 + 0x254) = 0;
    SparkMapaWindow__AplicaFade__1806382e0(param_1,0);
  }
  return;
}

