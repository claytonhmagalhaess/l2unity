// PartyWindow__FechaMenuFora__1806a70f0 @ 0x1806a70f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PartyWindow__FechaMenuFora__1806a70f0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  code *pcVar7;
  float *pfVar8;
  undefined1 auStack_78 [112];
  
  if (cRam00000001834b3f7d == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.MouseEventBase<UnityEngine.UIElements.MouseDownEvent>.get_mousePosition);
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b3f7d = '\x01';
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    pfVar8 = (float *)UnityEngine_UIElements_VisualElement__get_worldBound
                                (auStack_78,*(undefined8 *)(param_1 + 0xa0),0);
    if (param_2 == 0) {
      FUN_1803155d0();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar1 = pfVar8[3];
    fVar2 = pfVar8[2];
    fVar3 = pfVar8[1];
    fVar4 = *(float *)(param_2 + 0x70);
    fVar5 = *pfVar8;
    fVar6 = *(float *)(param_2 + 0x6c);
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b3d5b == '\0') {
      FUN_180315380(TI_UnityEngine.Rect);
      cRam00000001834b3d5b = '\x01';
    }
    if (fVar5 <= fVar6) {
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      if ((fVar6 < fVar2 + fVar5) && (fVar3 <= fVar4)) {
        if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (fVar4 < fVar1 + fVar3) {
          return;
        }
      }
    }
    PartyWindow__FechaMenu__1806a7270(param_1,0);
  }
  return;
}

