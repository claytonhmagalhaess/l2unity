// SparkFps__Escreve__18049a280 @ 0x18049a280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkFps__Escreve__18049a280(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (cRam00000001834b328e == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'FPS '");
    FUN_180315380(LIT_"'   '");
    FUN_180315380(LIT_"'--'");
    FUN_180315380(LIT_"'Ping '");
    FUN_180315380(LIT_"' ms'");
    FUN_180315380(LIT_"''");
    cRam00000001834b328e = '\x01';
  }
  lVar5 = LIT_"''";
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar3 = LIT_"'FPS '";
    if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xa8) != '\0') {
      uVar4 = LIT_"'--'";
      if (-1 < *(int *)(param_1 + 0x30)) {
        uVar4 = System_Int32__ToString(param_1 + 0x30,0);
      }
      lVar5 = System_String__Concat(uVar3,uVar4,0);
    }
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xa9) != '\0') {
      if (lVar5 == 0) goto DAT_18049a42a;
      if (0 < *(int *)(lVar5 + 0x10)) {
        lVar5 = System_String__Concat(lVar5,LIT_"'   '",0);
      }
      uVar3 = LIT_"'Ping '";
      uVar4 = LIT_"'--'";
      if (-1 < *(int *)(param_1 + 0x38)) {
        uVar4 = System_Int32__ToString(param_1 + 0x38,0);
        uVar4 = System_String__Concat(uVar4,LIT_"' ms'",0);
      }
      lVar5 = System_String__Concat(lVar5,uVar3,uVar4,0);
    }
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (plVar1 == (longlong *)0x0) {
DAT_18049a42a:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(*plVar1 + 0xe48))(plVar1,lVar5,*(undefined8 *)(*plVar1 + 0xe50));
  }
  return;
}

