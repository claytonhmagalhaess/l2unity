// L2Scrollable__VerifyScrollValue__18078ec10 @ 0x18078ec10

void L2Scrollable__VerifyScrollValue__18078ec10(longlong param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  
  if (*(longlong *)(param_1 + 0x18) == 0) goto code_r0x00018078ecbf;
  fVar2 = (float)UnityEngine_UIElements_Scroller__get_highValue(*(longlong *)(param_1 + 0x18),0);
  if (0.0 < fVar2) {
    if (*(longlong *)(param_1 + 0x18) == 0) goto code_r0x00018078ecbf;
    fVar2 = (float)UnityEngine_UIElements_Scroller__get_value(*(longlong *)(param_1 + 0x18),0);
    if (*(longlong *)(param_1 + 0x18) == 0) goto code_r0x00018078ecbf;
    fVar3 = (float)UnityEngine_UIElements_Scroller__get_highValue(*(longlong *)(param_1 + 0x18),0);
    if (fVar2 == fVar3) goto code_r0x00018078ec97;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
code_r0x00018078ecbf:
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar2 = (float)UnityEngine_UIElements_Scroller__get_highValue(*(longlong *)(param_1 + 0x18),0);
  if (fVar2 == 0.0) {
    if (*(longlong *)(param_1 + 0x18) == 0) goto code_r0x00018078ecbf;
    fVar2 = (float)UnityEngine_UIElements_Scroller__get_value(*(longlong *)(param_1 + 0x18),0);
    if (fVar2 == 0.0) {
code_r0x00018078ec97:
      *(undefined1 *)(param_1 + 0x2c) = 1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}

