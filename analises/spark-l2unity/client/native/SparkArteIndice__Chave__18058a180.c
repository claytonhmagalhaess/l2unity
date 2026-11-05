// SparkArteIndice__Chave__18058a180 @ 0x18058a180

void SparkArteIndice__Chave__18058a180(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (cRam00000001834b39d3 == '\0') {
    FUN_180315380(0x1832bdd68);
    cRam00000001834b39d3 = '\x01';
  }
  if ((param_1 != 0) || (param_1 = lRam00000001832bdd68, lRam00000001832bdd68 != 0)) {
    lVar2 = FUN_18170a4b0(param_1,0x5c,0x2f,0);
    if (lVar2 != 0) {
      lVar2 = FUN_18170d280(lVar2,0x2f,0);
      if (lVar2 != 0) {
        if (cRam00000001834b89c9 == '\0') {
          FUN_180315380(0x1832ead08,0);
          cRam00000001834b89c9 = '\x01';
        }
        if (*(int *)(lRam00000001832ead08 + 0xe4) == 0) {
          func_0x000180315660();
        }
        plVar3 = (longlong *)FUN_18182f4c0(0);
        if (plVar3 != (longlong *)0x0) {
          plVar3 = (longlong *)
                   (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
          if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018170ca64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x1b8))(plVar3,lVar2,*(undefined8 *)(*plVar3 + 0x1c0));
            return;
          }
        }
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

