// L2Scrollable__AdjustScrollValue__18078e500 @ 0x18078e500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2Scrollable__AdjustScrollValue__18078e500(longlong param_1,int param_2)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_38 [48];
  
  if (cRam00000001834b4434 == '\0') {
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b4434 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      return;
    }
    lVar2 = **(longlong **)(param_1 + 0x10);
    lVar2 = (**(code **)(lVar2 + 0x9d8))
                      (*(longlong **)(param_1 + 0x10),*(undefined8 *)(lVar2 + 0x9e0));
    if (lVar2 != 0) {
      lVar2 = UnityEngine_UIElements_VisualElement__get_worldBound(auStack_38,lVar2,0);
      fVar5 = *(float *)(lVar2 + 0xc);
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (*(longlong *)(param_1 + 0x10) != 0) {
        lVar2 = UnityEngine_UIElements_VisualElement__get_worldBound
                          (auStack_38,*(longlong *)(param_1 + 0x10),0);
        if (fVar5 <= *(float *)(lVar2 + 0xc)) {
          return;
        }
        iVar3 = 1;
        if (param_2 < 1) {
          iVar3 = -1;
        }
        if (*(longlong *)(param_1 + 0x18) != 0) {
          fVar5 = *(float *)(param_1 + 0x28);
          fVar4 = (float)UnityEngine_UIElements_Scroller__get_value(*(longlong *)(param_1 + 0x18),0)
          ;
          lVar2 = *(longlong *)(param_1 + 0x18);
          if (lVar2 != 0) {
            fVar4 = (float)iVar3 * fVar5 + fVar4;
            fVar5 = (float)UnityEngine_UIElements_Scroller__get_highValue(lVar2,0);
            if (fVar4 < 0.0) {
              fVar5 = 0.0;
            }
            else if (fVar4 <= fVar5) {
              fVar5 = fVar4;
            }
            UnityEngine_UIElements_Scroller__set_value(lVar2,fVar5,0);
            return;
          }
        }
      }
    }
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

