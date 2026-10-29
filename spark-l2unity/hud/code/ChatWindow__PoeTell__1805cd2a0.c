// ChatWindow__PoeTell__1805cd2a0 @ 0x1805cd2a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__PoeTell__1805cd2a0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  ushort uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  if (cRam00000001834b3adc == '\0') {
    FUN_180315380(LIT_"' '");
    FUN_180315380(LIT_"'\"'");
    cRam00000001834b3adc = '\x01';
  }
  plVar6 = *(longlong **)(param_1 + 0x108);
  uVar7 = System_String__Concat(LIT_"'\"'",param_2,LIT_"' '",0);
  if (plVar6 == (longlong *)0x0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (**(code **)(*plVar6 + 0xa88))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0xa90));
  ChatWindow__AtualizaTell__1805c5120(param_1,0);
  if (cRam00000001834b3ad2 == '\0') {
    FUN_180315380(TI_System.Action,0);
    FUN_180315380(MD_ChatWindow._CursorNoFim_b__88_0);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduler);
    FUN_180315380(MR_UnityEngine.UIElements.TextInputBaseField<string>.set_cursorIndex);
    FUN_180315380(MR_UnityEngine.UIElements.TextInputBaseField<string>.set_selectIndex);
    cRam00000001834b3ad2 = '\x01';
  }
  plVar6 = *(longlong **)(param_1 + 0x108);
  if (plVar6 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar6 + 0xa78))(plVar6,*(undefined8 *)(*plVar6 + 0xa80));
    if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x108) != 0)) {
      uVar1 = *(undefined4 *)(lVar5 + 0x10);
      FUN_180f03c20(*(longlong *)(param_1 + 0x108),uVar1,MR_UnityEngine.UIElements.TextInputBaseField<string>.set_cursorIndex);
      if (*(longlong *)(param_1 + 0x108) != 0) {
        FUN_180f0d390(*(longlong *)(param_1 + 0x108),uVar1,MR_UnityEngine.UIElements.TextInputBaseField<string>.set_selectIndex);
        if (*(longlong *)(param_1 + 0x108) != 0) {
          plVar6 = (longlong *)func_0x0001818f3de0(*(longlong *)(param_1 + 0x108),0);
          uVar7 = func_0x000180315580(TI_System.Action);
          FUN_1816a9c60(uVar7,param_1,MD_ChatWindow._CursorNoFim_b__88_0,0);
          if (plVar6 != (longlong *)0x0) {
            uVar3 = 0;
            lVar5 = *plVar6;
            if (*(ushort *)(lVar5 + 0x12e) != 0) {
              do {
                if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar3 * 0x10) ==
                    TI_UnityEngine.UIElements.IVisualElementScheduler) {
                  puVar4 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar3 * 0x10) + 1
                            ) * 0x10 + 0x138 + lVar5);
                  goto LAB_180002080;
                }
                uVar3 = uVar3 + 1;
              } while (uVar3 < *(ushort *)(lVar5 + 0x12e));
            }
            puVar4 = (undefined8 *)FUN_180312860(plVar6);
LAB_180002080:
                    /* WARNING: Could not recover jumptable at 0x000180002099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar4)(plVar6,uVar7,puVar4[1]);
            return;
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

