// SparkTutorialWindow__AtualizaBotao__1806eb900 @ 0x1806eb900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTutorialWindow__AtualizaBotao__1806eb900(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b4080 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduledItem);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Count);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b4080 = '\x01';
  }
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0xf8) + 0x18);
    if (((iVar1 < 1) && (*(longlong *)(param_1 + 0x100) != 0)) &&
       (*(char *)(*(longlong *)(param_1 + 0x100) + 0x39) != '\0')) {
      MouseOverDetectionManipulator__Disable__1807afdf0(*(longlong *)(param_1 + 0x100),0);
      if (*(longlong *)(param_1 + 0x100) == 0) goto DAT_1806eba73;
      MouseOverDetectionManipulator__Enable__1807afe20(*(longlong *)(param_1 + 0x100),0);
    }
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
      uVar4 = FUN_180eb5810(iVar1 < 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar3 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
        if (iVar1 < 1) {
          if (*(longlong *)(param_1 + 0xf0) != 0) {
            FUN_180002390(2,TI_UnityEngine.UIElements.IVisualElementScheduledItem);
            *(undefined2 *)(param_1 + 0xe8) = 0;
code_r0x0001806eba59:
            SparkTutorialWindow__Pinta(param_1,0);
            return;
          }
        }
        else if ((*(longlong *)(param_1 + 0xc0) != 0) &&
                (UnityEngine_UIElements_VisualElement__BringToFront(*(longlong *)(param_1 + 0xc0),0)
                , *(longlong *)(param_1 + 0xf0) != 0)) {
          FUN_180002390(1,TI_UnityEngine.UIElements.IVisualElementScheduledItem);
          goto code_r0x0001806eba59;
        }
      }
    }
  }
DAT_1806eba73:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

