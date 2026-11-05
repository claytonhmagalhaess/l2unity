// OptionsWindow___c__DisplayClass37_0___Video_b__13__1806bf050 @ 0x1806bf050

void OptionsWindow___c__DisplayClass37_0___Video_b__13__1806bf050(longlong param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong lStack_28;
  
  if (cRam00000001834b3f2e == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.GetEnumerator);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f2e = '\x01';
  }
  uVar4 = FUN_1803fb530(param_2 * 3.0,0);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkOpcoes__UsaPreset(uVar4,0);
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xb0), lVar1 != 0)) {
    FUN_180bada40(&uStack_50,lVar1,MR_System.Collections.Generic.List<System.Action>.GetEnumerator);
    uStack_38 = (undefined4)uStack_50;
    uStack_34 = uStack_50._4_4_;
    uStack_30 = (undefined4)uStack_48;
    uStack_2c = uStack_48._4_4_;
    lStack_28 = lStack_40;
    uStack_50 = 0;
    uStack_48 = &uStack_38;
    while( true ) {
      cVar3 = FUN_1812fa7e0(&uStack_38,MR_System.Collections.Generic.List<System.Action>.MoveNext);
      if (cVar3 == '\0') {
        func_0x0001803dadf0(&uStack_38,MR_System.Collections.Generic.List<System.Action>.Dispose);
        return;
      }
      if (lStack_28 == 0) break;
      (**(code **)(lStack_28 + 0x18))
                (*(undefined8 *)(lStack_28 + 0x40),*(undefined8 *)(lStack_28 + 0x28));
    }
    FUN_1803155d0();
    FUN_180311490();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

