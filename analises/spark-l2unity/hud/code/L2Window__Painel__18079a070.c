// L2Window__Painel__18079a070 @ 0x18079a070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 L2Window__Painel__18079a070(longlong param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ushort uVar8;
  undefined1 auStack_48 [64];
  
  if (DAT_1834b4480 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IPanel);
    FUN_180315380(TI_UnityEngine.Rect);
    DAT_1834b4480 = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x30) == 0) ||
     (lVar4 = func_0x0001825d76c0(*(undefined8 *)(param_1 + 0x30),0), lVar4 == 0)) {
LAB_18079a1e8:
    if (DAT_1834b2f44 == '\0') {
      FUN_180315380(TI_UnityEngine.Vector2);
      DAT_1834b2f44 = '\x01';
    }
    return **(undefined8 **)(TI_UnityEngine.Vector2 + 0xb8);
  }
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (plVar5 = (longlong *)func_0x0001825d76c0(*(longlong *)(param_1 + 0x30),0),
     plVar5 != (longlong *)0x0)) {
    lVar4 = *plVar5;
    if (*(ushort *)(lVar4 + 0x12e) != 0) {
      uVar8 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar8 * 0x10) == TI_UnityEngine.UIElements.IPanel)
        {
          puVar6 = (undefined8 *)
                   ((longlong)*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) *
                    0x10 + 0x138 + lVar4);
          goto LAB_18079a146;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ushort *)(lVar4 + 0x12e));
    }
    puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IPanel,0);
LAB_18079a146:
    lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (lVar4 != 0) {
      lVar4 = UnityEngine_UIElements_VisualElement__get_layout(auStack_48,lVar4,0);
      fVar1 = *(float *)(lVar4 + 8);
      fVar2 = *(float *)(lVar4 + 0xc);
      uVar7 = *(undefined8 *)(lVar4 + 8);
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (0.0 < fVar1) {
        if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (0.0 < fVar2) {
          if (*(int *)(TI_UnityEngine.Rect + 0xe4) != 0) {
            return uVar7;
          }
          func_0x000180315660();
          return uVar7;
        }
      }
      goto LAB_18079a1e8;
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar7 = (*pcVar3)();
  return uVar7;
}

