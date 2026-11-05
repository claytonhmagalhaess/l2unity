// ChatTab__Initialize__1805c30c0 @ 0x1805c30c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatTab__Initialize__1805c30c0
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b3ab1 == '\0') {
    FUN_180315380(TI_L2Scrollable);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'Content'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3ab1 = '\x01';
  }
  L2Tab__Initialize__180795780(param_1,param_2,param_3,param_4,0);
  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = FUN_180b0e310(param_3,LIT_"'Content'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  func_0x000180314690(param_1 + 0x58,uVar3);
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xe48))(plVar1,LIT_"''",*(undefined8 *)(*plVar1 + 0xe50));
    uVar3 = func_0x000180315580(TI_L2Scrollable);
    L2Scrollable___ctor__18078ecd0(uVar3,0);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    func_0x000180314690(param_1 + 0x50,uVar3);
    plVar1 = *(longlong **)(param_1 + 0x50);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x178))(plVar1,param_3,1,*(undefined8 *)(*plVar1 + 0x180));
      if (*(longlong *)(param_1 + 0x50) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x28) = 0x41400000;
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

