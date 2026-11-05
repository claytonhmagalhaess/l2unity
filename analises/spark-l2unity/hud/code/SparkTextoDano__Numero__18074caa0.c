// SparkTextoDano__Numero__18074caa0 @ 0x18074caa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkTextoDano__Numero__18074caa0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  
  if (param_1 != 0) {
    iVar7 = *(int *)(param_1 + 0x18);
    for (uVar6 = 0; (int)uVar6 < iVar7; uVar6 = uVar6 + 1) {
      if (*(uint *)(param_1 + 0x18) <= uVar6) {
        FUN_1803155c0();
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
      if (*(longlong *)(param_1 + 0x20 + (longlong)(int)uVar6 * 8) != 0) {
        iVar7 = *(int *)(param_1 + 0x18);
        if (*(int *)(*(longlong *)(param_1 + 0x20 + (longlong)(int)uVar6 * 8) + 0x10) == 1) {
          if (param_2 == 0) {
            lVar2 = *(longlong *)(param_1 + 0x20 + (longlong)(int)uVar6 * 8);
            if (lVar2 == 0) {
              FUN_1803155d0();
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return uVar5;
            }
            plVar1 = *(longlong **)(lVar2 + 0x18);
            if (plVar1 != (longlong *)0x0) {
              if (*(longlong *)(*plVar1 + 0x40) == *(longlong *)(_DAT_1834c6268 + 0x40)) {
                puVar4 = (uint *)func_0x000180314870();
                return (ulonglong)*puVar4;
              }
              FUN_1803146d0(plVar1,_DAT_1834c6268);
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return uVar5;
            }
            FUN_1803155d0(0,0);
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return uVar5;
          }
          param_2 = param_2 + -1;
        }
      }
    }
  }
  return 0;
}

