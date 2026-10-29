// BuffSlot__AltClique__1805bf2c0 @ 0x1805bf2c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BuffSlot__AltClique__1805bf2c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  if (cRam00000001834b3a8a == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.MouseEventBase<UnityEngine.UIElements.MouseDownEvent>.get_altKey);
    FUN_180315380(MR_UnityEngine.UIElements.MouseEventBase<UnityEngine.UIElements.MouseDownEvent>.get_button);
    FUN_180315380(TI_SparkPacoteLivre);
    cRam00000001834b3a8a = '\x01';
  }
  if (param_2 == 0) goto code_r0x0001805bf492;
  if (*(int *)(param_2 + 0x88) == 0) {
    cVar3 = func_0x000180c3ef70(param_2,MR_UnityEngine.UIElements.MouseEventBase<UnityEngine.UIElements.MouseDownEvent>.get_altKey);
    if (((cVar3 != '\0') && (*(longlong *)(param_1 + 0x68) != 0)) &&
       ((*(int *)(*(longlong *)(param_1 + 0x68) + 0x30) == 0 ||
        (*(int *)(*(longlong *)(param_1 + 0x68) + 0x30) == 3)))) {
      if (DAT_1834b30fb == '\0') {
        FUN_180315380(TI_GameClient);
        DAT_1834b30fb = '\x01';
      }
      if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
         (plVar1 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
         plVar1 != (longlong *)0x0)) {
        lVar5 = func_0x000180315580(TI_SparkPacoteLivre);
        func_0x000180503ed0(lVar5,0xd0,0);
        if (lVar5 == 0) {
code_r0x0001805bf492:
          FUN_1803155d0();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar5 = SparkPacoteLivre__H(lVar5,0x48,0);
        lVar6 = FUN_1804582c0(0);
        if (lVar6 == 0) goto code_r0x0001805bf492;
        uVar4 = GameClient__get_CurrentPlayerId(lVar6,0);
        if (lVar5 == 0) goto code_r0x0001805bf492;
        lVar5 = SparkPacoteLivre__D(lVar5,uVar4,0);
        if (lVar5 == 0) goto code_r0x0001805bf492;
        lVar5 = SparkPacoteLivre__D(lVar5,*(undefined4 *)(param_1 + 0x10),0);
        if ((*(longlong *)(param_1 + 0x68) == 0) || (lVar5 == 0)) goto code_r0x0001805bf492;
        lVar5 = SparkPacoteLivre__H(lVar5,*(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x28),0);
        if (lVar5 == 0) goto code_r0x0001805bf492;
        lVar5 = SparkPacoteLivre__H(lVar5,0,0);
        if (lVar5 == 0) goto code_r0x0001805bf492;
        uVar7 = SparkPacoteLivre__Fim(lVar5,0);
        (**(code **)(*plVar1 + 0x178))(plVar1,uVar7,*(undefined8 *)(*plVar1 + 0x180));
      }
      func_0x00018274f9b0(param_2,0);
    }
  }
  return;
}

