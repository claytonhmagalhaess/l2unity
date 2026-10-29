// ChatTab__AddMessage__1805c2e00 @ 0x1805c2e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatTab__AddMessage__1805c2e00(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (param_2 == (longlong *)0x0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
  if (cRam00000001834b3ab2 == '\0') {
    FUN_180315380(TI_ChatWindow,uVar4,0);
    FUN_180315380(LIT_"'\\r\\n'");
    cRam00000001834b3ab2 = '\x01';
  }
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (plVar1 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar1 + 0xe38))(plVar1,*(undefined8 *)(*plVar1 + 0xe40));
    if (lVar5 != 0) {
      if (0 < *(int *)(lVar5 + 0x10)) {
        plVar1 = *(longlong **)(param_1 + 0x58);
        if (plVar1 == (longlong *)0x0) goto code_r0x0001805c30ad;
        uVar6 = (**(code **)(*plVar1 + 0xe38))(plVar1,*(undefined8 *)(*plVar1 + 0xe40));
        uVar6 = System_String__Concat(uVar6,LIT_"'\\r\\n'",0);
        (**(code **)(*plVar1 + 0xe48))(plVar1,uVar6,*(undefined8 *)(*plVar1 + 0xe50));
      }
      plVar1 = *(longlong **)(param_1 + 0x58);
      if (plVar1 != (longlong *)0x0) {
        uVar6 = (**(code **)(*plVar1 + 0xe38))(plVar1,*(undefined8 *)(*plVar1 + 0xe40));
        uVar4 = System_String__Concat(uVar6,uVar4,0);
        (**(code **)(*plVar1 + 0xe48))(plVar1,uVar4,*(undefined8 *)(*plVar1 + 0xe50));
        iVar3 = *(int *)(param_1 + 0x48);
        *(int *)(param_1 + 0x48) = iVar3 + 1;
        if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (*(int *)(*(longlong *)(TI_ChatWindow + 0xb8) + 4) <= iVar3) {
          plVar1 = *(longlong **)(param_1 + 0x58);
          if (plVar1 == (longlong *)0x0) goto code_r0x0001805c30ad;
          lVar5 = (**(code **)(*plVar1 + 0xe38))(plVar1,*(undefined8 *)(*plVar1 + 0xe40));
          if (lVar5 == 0) goto code_r0x0001805c30ad;
          iVar3 = System_String__IndexOf(lVar5,LIT_"'\\r\\n'",0);
          if (-1 < iVar3) {
            plVar1 = *(longlong **)(param_1 + 0x58);
            if (plVar1 == (longlong *)0x0) goto code_r0x0001805c30ad;
            lVar5 = (**(code **)(*plVar1 + 0xe38))(plVar1,*(undefined8 *)(*plVar1 + 0xe40));
            if (lVar5 == 0) goto code_r0x0001805c30ad;
            uVar4 = System_String__Substring(lVar5,iVar3 + 2,*(int *)(lVar5 + 0x10) - (iVar3 + 2),0)
            ;
            (**(code **)(*plVar1 + 0xe48))(plVar1,uVar4,*(undefined8 *)(*plVar1 + 0xe50));
          }
          if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
            func_0x000180315660(TI_ChatWindow);
          }
          *(undefined4 *)(param_1 + 0x48) =
               *(undefined4 *)(*(longlong *)(TI_ChatWindow + 0xb8) + 4);
        }
        if (*(longlong *)(param_1 + 0x50) != 0) {
          if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x2c) != '\0') {
            if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
              func_0x000180315660();
            }
            if (DAT_1834b3105 == '\0') {
              FUN_180315380(TI_ChatWindow);
              DAT_1834b3105 = '\x01';
            }
            if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
              func_0x000180315660();
            }
            if ((*(longlong *)(param_1 + 0x50) == 0) ||
               (*(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8) == 0))
            goto code_r0x0001805c30ad;
          }
          return;
        }
      }
    }
  }
code_r0x0001805c30ad:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

