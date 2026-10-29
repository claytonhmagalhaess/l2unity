// SparkMacros__Manda__18046ccc0 @ 0x18046ccc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMacros__Manda__18046ccc0(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (DAT_1834b30fb == '\0') {
    FUN_180315380(TI_GameClient);
    DAT_1834b30fb = '\x01';
  }
  if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
     (plVar1 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
     plVar1 != (longlong *)0x0)) {
    if (param_1 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar3 = SparkPacoteLivre__Fim(param_1,0);
    (**(code **)(*plVar1 + 0x178))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0x180));
  }
  return;
}

