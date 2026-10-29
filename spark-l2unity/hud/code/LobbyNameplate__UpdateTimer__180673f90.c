// LobbyNameplate__UpdateTimer__180673f90 @ 0x180673f90

void LobbyNameplate__UpdateTimer__180673f90(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b3dfd == '\0') {
    FUN_180315380(LIT_"'Remaining Time : '");
    cRam00000001834b3dfd = '\x01';
  }
  plVar1 = *(longlong **)(param_1 + 0x138);
  uVar3 = DateUtils__ConvertSecondsToDate(param_2,0);
  uVar3 = System_String__Concat(LIT_"'Remaining Time : '",uVar3,0);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180673ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

