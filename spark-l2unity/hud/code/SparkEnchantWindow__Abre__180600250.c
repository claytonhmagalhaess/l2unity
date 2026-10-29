// SparkEnchantWindow__Abre__180600250 @ 0x180600250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkEnchantWindow__Abre__180600250(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  
  if (cRam00000001834b3bd1 == '\0') {
    FUN_180315380(TI_NpcHtmlWindow);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(LIT_"''");
    cRam00000001834b3bd1 = '\x01';
  }
  if ((char)param_1[0x11] != '\0') {
    if (*(int *)(TI_NpcHtmlWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b31ca == '\0') {
      FUN_180315380(TI_NpcHtmlWindow);
      cRam00000001834b31ca = '\x01';
    }
    if (*(int *)(TI_NpcHtmlWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar1 = **(undefined8 **)(TI_NpcHtmlWindow + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
    if (cVar4 != '\0') {
      if (*(int *)(TI_NpcHtmlWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b31ca == '\0') {
        FUN_180315380(TI_NpcHtmlWindow);
        cRam00000001834b31ca = '\x01';
      }
      if (*(int *)(TI_NpcHtmlWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (**(longlong **)(TI_NpcHtmlWindow + 0xb8) == 0) goto DAT_180600429;
      cVar4 = func_0x00018079b3f0(**(longlong **)(TI_NpcHtmlWindow + 0xb8),0);
      if (cVar4 != '\0') {
        SparkEnchant__Cancela(0);
        return;
      }
    }
    plVar2 = (longlong *)param_1[0x14];
    *(undefined4 *)(param_1 + 0x1e) = param_2;
    *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
    *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
    if (plVar2 == (longlong *)0x0) {
DAT_180600429:
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)(*plVar2 + 0xe48))(plVar2,LIT_"''",*(undefined8 *)(*plVar2 + 0xe50));
    param_1[0x28] = 0;
    func_0x000180314690(param_1 + 0x28,0);
    SparkEnchantWindow__Atualiza(param_1,0);
    if ((char)param_1[7] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000180600422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
      return;
    }
  }
  return;
}

