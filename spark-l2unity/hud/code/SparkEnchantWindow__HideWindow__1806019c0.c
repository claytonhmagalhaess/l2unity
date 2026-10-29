// SparkEnchantWindow__HideWindow__1806019c0 @ 0x1806019c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkEnchantWindow__HideWindow__1806019c0(longlong param_1,char param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b3bcf == '\0') {
    FUN_180315380(TI_System.Func<bool>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MD_SparkEnchantWindow._HideWindow_b__38_0);
    FUN_180315380(TI_SparkForjaEfeitos);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'window_close'");
    cRam00000001834b3bcf = '\x01';
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
    if (*(int *)(param_1 + 0xf0) != 0) {
      *(undefined4 *)(param_1 + 0xf0) = 0;
      SparkEnchant__Cancela(0);
    }
    *(undefined8 *)(param_1 + 0xf4) = 0;
    *(undefined1 *)(param_1 + 0xfc) = 0;
    *(undefined1 *)(param_1 + 0x104) = 0;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar2 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0x110),0);
      uVar3 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar2 == 0) {
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
    }
    SparkEnchantWindow__TerminaEfeito(param_1,0);
    if ((param_2 == '\0') && (*(char *)(param_1 + 0x88) != '\0')) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = func_0x000180315580(TI_System.Func<bool>);
      FUN_1814af410(uVar4,param_1,MD_SparkEnchantWindow._HideWindow_b__38_0,0);
      if (*(int *)(TI_SparkForjaEfeitos + 0xe4) == 0) {
        func_0x000180315660();
      }
      SparkForjaEfeitos__Fecha(uVar3,uVar4,0);
    }
  }
  return;
}

