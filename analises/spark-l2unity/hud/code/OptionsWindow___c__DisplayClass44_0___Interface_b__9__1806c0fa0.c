// OptionsWindow___c__DisplayClass44_0___Interface_b__9__1806c0fa0 @ 0x1806c0fa0

void OptionsWindow___c__DisplayClass44_0___Interface_b__9__1806c0fa0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong lStack_18;
  
  if (cRam00000001834b3f44 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.GetEnumerator);
    cRam00000001834b3f44 = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xb0), lVar1 != 0)) {
    FUN_180bada40(&uStack_40,lVar1,MR_System.Collections.Generic.List<System.Action>.GetEnumerator);
    uStack_28 = (undefined4)uStack_40;
    uStack_24 = uStack_40._4_4_;
    uStack_20 = (undefined4)uStack_38;
    uStack_1c = uStack_38._4_4_;
    lStack_18 = lStack_30;
    uStack_40 = 0;
    uStack_38 = &uStack_28;
    while( true ) {
      cVar3 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<System.Action>.MoveNext);
      if (cVar3 == '\0') {
        func_0x0001803dadf0(&uStack_28,MR_System.Collections.Generic.List<System.Action>.Dispose);
        return;
      }
      if (lStack_18 == 0) break;
      (**(code **)(lStack_18 + 0x18))
                (*(undefined8 *)(lStack_18 + 0x40),*(undefined8 *)(lStack_18 + 0x28));
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

