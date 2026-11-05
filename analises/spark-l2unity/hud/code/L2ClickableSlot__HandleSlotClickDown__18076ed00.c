// L2ClickableSlot__HandleSlotClickDown__18076ed00 @ 0x18076ed00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2ClickableSlot__HandleSlotClickDown__18076ed00(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_18 [16];
  
  if (cRam00000001834b43d3 == '\0') {
    FUN_180315380(TI_System.DateTimeOffset);
    FUN_180315380(TI_InventorySlot);
    FUN_180315380(MR_UnityEngine.UIElements.MouseEventBase<UnityEngine.UIElements.MouseDownEvent>.get_button);
    FUN_180315380(MR_UnityEngine.UIElements.MouseEventBase<UnityEngine.UIElements.MouseDownEvent>.get_shiftKey);
    FUN_180315380(TI_SparkLinkItem);
    cRam00000001834b43d3 = '\x01';
  }
  uStack_28 = 0;
  uStack_20 = 0;
  if (param_2 == 0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)(param_2 + 0x88) == 0) {
    cVar3 = func_0x000180c3eff0(param_2,MR_UnityEngine.UIElements.MouseEventBase<UnityEngine.UIElements.MouseDownEvent>.get_shiftKey);
    if ((cVar3 != '\0') && (param_1 != (longlong *)0x0)) {
      if ((*(byte *)(TI_InventorySlot + 0x130) <= *(byte *)(*param_1 + 0x130)) &&
         (*(longlong *)
           (*(longlong *)(*param_1 + 200) + -8 + (ulonglong)*(byte *)(TI_InventorySlot + 0x130) * 8)
          == TI_InventorySlot)) {
        if (*(int *)(TI_SparkLinkItem + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = SparkLinkItem__Linka__1805f4ae0(param_1,0);
        if (cVar3 != '\0') {
          func_0x00018274f9b0(param_2,0);
          return;
        }
      }
    }
  }
  if (*(int *)(TI_System.DateTimeOffset + 0xe4) == 0) {
    func_0x000180315660();
  }
  puVar4 = (undefined8 *)System_DateTimeOffset__get_UtcNow(auStack_18,0);
  uStack_28 = *puVar4;
  uStack_20 = puVar4[1];
  lVar5 = System_DateTimeOffset__ToUnixTimeMilliseconds(&uStack_28,0);
  if (*(int *)(param_2 + 0x88) == 0) {
    (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    if ((char)param_1[0xd] == '\0') {
      lVar1 = *param_1;
      if (300 < lVar5 - param_1[0xe]) {
        (**(code **)(lVar1 + 0x1c8))(param_1,*(undefined8 *)(lVar1 + 0x1d0));
        param_1[0xe] = lVar5;
        return;
      }
      (**(code **)(lVar1 + 0x1f8))(param_1,*(undefined8 *)(lVar1 + 0x200));
    }
  }
  else {
    if (*(int *)(param_2 + 0x88) != 1) {
      (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
      param_1[0xe] = lVar5;
      return;
    }
    if (*(char *)((longlong)param_1 + 0x69) == '\0') {
      (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
      param_1[0xe] = lVar5;
      return;
    }
  }
  param_1[0xe] = lVar5;
  return;
}

