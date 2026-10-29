// L2Window__GuardaTamanho__180799c30 @ 0x180799c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2Window__GuardaTamanho__180799c30(longlong param_1)

{
  float fVar1;
  undefined4 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_28 [32];
  
  if (cRam00000001834b4482 == '\0') {
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b4482 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar4 = UnityEngine_UIElements_VisualElement__get_layout
                      (auStack_28,*(undefined8 *)(param_1 + 0x30),0);
    fVar1 = *(float *)(lVar4 + 8);
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (10.0 <= fVar1) {
      uVar5 = L2Window__get_ChaveDoTamanho(param_1,0);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar4 = UnityEngine_UIElements_VisualElement__get_layout
                        (auStack_28,*(longlong *)(param_1 + 0x30),0);
      uVar2 = *(undefined4 *)(lVar4 + 8);
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_PlayerPrefs__SetFloat(uVar5,uVar2,0);
    }
  }
  return;
}

