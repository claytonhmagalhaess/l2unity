// OlympiadWindow__Update__180689560 @ 0x180689560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OlympiadWindow__Update__180689560(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  float fVar6;
  
  if (cRam00000001834b3e68 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Equality);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3e68 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0x30),0);
    if (lVar5 == 0) goto code_r0x00018068967f;
    uVar2 = FUN_1800047d0(0x32,TI_UnityEngine.UIElements.IStyle,lVar5);
    uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cVar4 = FUN_180eb54b0(uVar2,uVar3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Equality);
    if (cVar4 != '\0') {
      fVar6 = (float)FUN_1824366b0(0);
      if (*(float *)(param_1 + 0x40) <= fVar6 && fVar6 != *(float *)(param_1 + 0x40)) {
        if (*(longlong *)(param_1 + 0x30) != 0) {
          lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
          uVar2 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
          if (lVar5 != 0) {
            FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar2);
            goto code_r0x000180689649;
          }
        }
code_r0x00018068967f:
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
code_r0x000180689649:
  fVar6 = (float)FUN_1824366b0(0);
  if (*(float *)(param_1 + 0x20) <= fVar6) {
    fVar6 = (float)FUN_1824366b0(0);
    *(float *)(param_1 + 0x20) = fVar6 + 0.2;
    OlympiadWindow__AtualizaProprio(param_1,0);
  }
  return;
}

