// OptionsWindow__AtualizaTudo__18068ae50 @ 0x18068ae50

void OptionsWindow__AtualizaTudo__18068ae50(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong lStack_18;
  
  if (cRam00000001834b3e81 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.GetEnumerator);
    cRam00000001834b3e81 = '\x01';
  }
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    FUN_1803155d0();
  }
  else {
    FUN_180bada40(&uStack_40,*(longlong *)(param_1 + 0xb0),MR_System.Collections.Generic.List<System.Action>.GetEnumerator);
    uStack_28 = (undefined4)uStack_40;
    uStack_24 = uStack_40._4_4_;
    uStack_20 = (undefined4)uStack_38;
    uStack_1c = uStack_38._4_4_;
    lStack_18 = lStack_30;
    uStack_40 = 0;
    uStack_38 = &uStack_28;
    while( true ) {
      cVar2 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<System.Action>.MoveNext);
      if (cVar2 == '\0') {
        func_0x0001803dadf0(&uStack_28,MR_System.Collections.Generic.List<System.Action>.Dispose);
        OptionsWindow__MostraTeclas(param_1,0);
        return;
      }
      if (lStack_18 == 0) break;
      (**(code **)(lStack_18 + 0x18))
                (*(undefined8 *)(lStack_18 + 0x40),*(undefined8 *)(lStack_18 + 0x28));
    }
  }
  FUN_1803155d0();
  FUN_180311490();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

