// CharacterInfoWindow__UpdateSocial__1805c26c0 @ 0x1805c26c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterInfoWindow__UpdateSocial__1805c26c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 auStackX_8 [2];
  undefined4 auStackX_10 [2];
  undefined4 auStackX_20 [2];
  
  if (cRam00000001834b3aaa == '\0') {
    FUN_180315380(LIT_"'{0} / {1}'");
    FUN_180315380(LIT_"'0 / 0'");
    FUN_180315380(LIT_"'0'");
    cRam00000001834b3aaa = '\x01';
  }
  if (param_2 != 0) {
    auStackX_8[0] = *(undefined4 *)(param_2 + 0x44);
    plVar1 = *(longlong **)(param_1 + 0x1c8);
    uVar3 = System_Int32__ToString(auStackX_8,0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
      auStackX_10[0] = *(undefined4 *)(param_2 + 0x90);
      plVar1 = *(longlong **)(param_1 + 0x1d0);
      uVar3 = func_0x000180314670(_DAT_1834c6268,auStackX_10);
      auStackX_20[0] = *(undefined4 *)(param_2 + 0x94);
      uVar4 = func_0x000180314670(_DAT_1834c6268,auStackX_20);
      uVar3 = System_String__Format(LIT_"'{0} / {1}'",uVar3,uVar4,0);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
        plVar1 = *(longlong **)(param_1 + 0x1d8);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0xe48))
                    (plVar1,LIT_"'0 / 0'",*(undefined8 *)(*plVar1 + 0xe50));
          plVar1 = *(longlong **)(param_1 + 0x1e0);
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0xe48))(plVar1,LIT_"'0'",*(undefined8 *)(*plVar1 + 0xe50));
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

