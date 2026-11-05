// SparkCraftWindow__AbreLivro__1805efa80 @ 0x1805efa80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkCraftWindow__AbreLivro__1805efa80(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b3bab == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<int>.Contains);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Item);
    FUN_180315380(TI_SparkCraft);
    FUN_180315380(LIT_"''");
    cRam00000001834b3bab = '\x01';
  }
  if (*(char *)(param_1 + 0x88) == '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
    func_0x000180315660(TI_SparkCraft);
  }
  if (**(longlong **)(TI_SparkCraft + 0xb8) != 0) {
    cVar3 = FUN_18162e860(**(longlong **)(TI_SparkCraft + 0xb8),
                          *(undefined4 *)(param_1 + 0x138),MR_System.Collections.Generic.List<int>.Contains);
    if (cVar3 == '\0') {
      if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (**(longlong **)(TI_SparkCraft + 0xb8) == 0) goto code_r0x0001805efc11;
      if (*(int *)(**(longlong **)(TI_SparkCraft + 0xb8) + 0x18) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (**(longlong **)(TI_SparkCraft + 0xb8) == 0) goto code_r0x0001805efc11;
        uVar4 = FUN_180bed530(**(longlong **)(TI_SparkCraft + 0xb8),0,MR_System.Collections.Generic.List<int>.get_Item);
      }
      *(undefined4 *)(param_1 + 0x138) = uVar4;
    }
    plVar1 = *(longlong **)(param_1 + 0xc0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xe48))(plVar1,LIT_"''",*(undefined8 *)(*plVar1 + 0xe50));
      SparkCraftWindow__Mostra__1805f3e70(param_1,0);
      if (*(int *)(param_1 + 0x138) < 1) {
        return;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x138);
      if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b46df == '\0') {
        FUN_180315380(TI_SparkCraft,0);
        FUN_180315380(TI_SparkPacoteLivre);
        cRam00000001834b46df = '\x01';
      }
      lVar5 = func_0x000180315580(TI_SparkPacoteLivre);
      func_0x000180503ed0(lVar5,0xae,0);
      if (lVar5 == 0) {
code_r0x0001807e338d:
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar5 = SparkPacoteLivre__D(lVar5,uVar4,0);
      if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (DAT_1834b30fb == '\0') {
        FUN_180315380(TI_GameClient);
        DAT_1834b30fb = '\x01';
      }
      if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
         (plVar1 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
         plVar1 != (longlong *)0x0)) {
        if (lVar5 == 0) goto code_r0x0001807e338d;
        uVar6 = SparkPacoteLivre__Fim(lVar5,0);
        (**(code **)(*plVar1 + 0x178))(plVar1,uVar6,*(undefined8 *)(*plVar1 + 0x180));
      }
      return;
    }
  }
code_r0x0001805efc11:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

