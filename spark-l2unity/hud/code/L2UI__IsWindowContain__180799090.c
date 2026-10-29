// L2UI__IsWindowContain__180799090 @ 0x180799090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool L2UI__IsWindowContain__180799090(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  undefined1 uVar6;
  float *pfVar7;
  float fStack_74;
  undefined1 auStack_70 [104];
  
  if (cRam00000001834b4478 == '\0') {
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b4478 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    FUN_1803155d0();
    pcVar5 = (code *)swi(3);
    uVar6 = (*pcVar5)();
    return (bool)uVar6;
  }
  pfVar7 = (float *)UnityEngine_UIElements_VisualElement__get_worldBound
                              (auStack_70,*(longlong *)(param_1 + 0x48),0);
  fVar1 = *pfVar7;
  fVar2 = pfVar7[1];
  fVar3 = pfVar7[2];
  fVar4 = pfVar7[3];
  if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3d5b == '\0') {
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b3d5b = '\x01';
  }
  if (fVar1 <= (float)param_2) {
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (((float)param_2 < fVar3 + fVar1) &&
       (fStack_74 = (float)((ulonglong)param_2 >> 0x20), fVar2 <= fStack_74)) {
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      return fStack_74 < fVar4 + fVar2;
    }
  }
  return false;
}

