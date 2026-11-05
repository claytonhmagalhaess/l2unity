// SparkEstilo__Liga__180720c80 @ 0x180720c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkEstilo__Liga__180720c80(longlong param_1,char param_2)

{
  code *pcVar1;
  ushort uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  
  if (cRam00000001834b41f5 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b41f5 = '\x01';
  }
  if (param_1 == 0) {
    return;
  }
  func_0x0001825cbbd0(param_1,param_2,0);
  plVar4 = (longlong *)UnityEngine_UIElements_VisualElement__get_userData(param_1,0);
  if (plVar4 != (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    if (*plVar4 == TI_System.Action) {
      plVar7 = plVar4;
    }
    if (plVar7 != (longlong *)0x0) {
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(param_1,0);
      uVar6 = func_0x000182601c10(0x3f800000,0);
      if (lVar5 != 0) {
        FUN_180005060(0x5b,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
        (*(code *)plVar7[3])(plVar7[8],plVar7[5]);
        return;
      }
      goto DAT_180720da6;
    }
  }
  plVar4 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
  if (param_2 == '\0') {
    uVar8 = 0x3ecccccd;
  }
  else {
    uVar8 = 0x3f800000;
  }
  uVar6 = func_0x000182601c10(uVar8,0);
  if (plVar4 != (longlong *)0x0) {
    uVar2 = 0;
    lVar5 = *plVar4;
    if (*(ushort *)(lVar5 + 0x12e) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar2 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar3 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar2 * 0x10) + 0x5b) *
                    0x10 + 0x138 + lVar5);
          goto LAB_1800050ad;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(lVar5 + 0x12e));
    }
    puVar3 = (undefined8 *)FUN_180312860(plVar4);
LAB_1800050ad:
                    /* WARNING: Could not recover jumptable at 0x0001800050c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar3)(plVar4,uVar6,puVar3[1]);
    return;
  }
DAT_180720da6:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

