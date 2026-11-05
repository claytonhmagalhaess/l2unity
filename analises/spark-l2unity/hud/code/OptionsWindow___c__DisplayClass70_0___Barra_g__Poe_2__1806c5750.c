// OptionsWindow___c__DisplayClass70_0___Barra_g__Poe_2__1806c5750 @ 0x1806c5750

void OptionsWindow___c__DisplayClass70_0___Barra_g__Poe_2__1806c5750(longlong param_1,float param_2)

{
  code *pcVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_38 [48];
  
  if (cRam00000001834b3f63 == '\0') {
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b3f63 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar2 = UnityEngine_UIElements_VisualElement__get_layout
                      (auStack_38,*(longlong *)(param_1 + 0x10),0);
    fVar3 = *(float *)(lVar2 + 8);
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    fVar3 = fVar3 - 11.0;
    if (fVar3 <= 0.0) {
      return;
    }
    fVar3 = (param_2 - 5.5) / fVar3;
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    else if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
    if (0 < *(int *)(param_1 + 0x30)) {
      fVar3 = (float)FUN_180006040((float)*(int *)(param_1 + 0x30) * fVar3);
      fVar3 = fVar3 / (float)*(int *)(param_1 + 0x30);
    }
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),fVar3,*(undefined8 *)(lVar2 + 0x28))
      ;
      lVar2 = *(longlong *)(param_1 + 0x38);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

