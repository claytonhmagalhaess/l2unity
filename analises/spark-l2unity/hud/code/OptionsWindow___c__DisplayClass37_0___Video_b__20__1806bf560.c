// OptionsWindow___c__DisplayClass37_0___Video_b__20__1806bf560 @ 0x1806bf560

void OptionsWindow___c__DisplayClass37_0___Video_b__20__1806bf560(longlong param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  
  if (cRam00000001834b3f31 == '\0') {
    puStack_30 = &UNK_1806bf585;
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f31 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    puStack_30 = &UNK_1806bf5a1;
    func_0x000180315660();
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x158);
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= param_2) {
      puStack_30 = &UNK_1806bf5ef;
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x20) =
         *(undefined4 *)(lVar1 + 0x20 + (longlong)(int)param_2 * 4);
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 != 0) {
      if (cRam00000001834b3e83 == '\0') {
        FUN_180315380(MR_System.Collections.Generic.List<System.Action>.Dispose,0);
        FUN_180315380(MR_System.Collections.Generic.List<System.Action>.MoveNext);
        FUN_180315380(MR_System.Collections.Generic.List<System.Action>.get_Current);
        FUN_180315380(MR_System.Collections.Generic.List<System.Action>.GetEnumerator);
        FUN_180315380(TI_SparkOpcoes);
        cRam00000001834b3e83 = '\x01';
      }
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660(TI_SparkOpcoes);
      }
      *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x1c) = 4;
      lVar1 = *(longlong *)(lVar1 + 0xb0);
      if (lVar1 != 0) {
        FUN_180bada40(&uStack_40,lVar1,MR_System.Collections.Generic.List<System.Action>.GetEnumerator);
        uStack_28 = (undefined4)uStack_40;
        uStack_24 = uStack_40._4_4_;
        uStack_20 = (undefined4)uStack_38;
        uStack_1c = uStack_38._4_4_;
        puStack_18 = puStack_30;
        uStack_40 = 0;
        uStack_38 = &uStack_28;
        while( true ) {
          cVar3 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<System.Action>.MoveNext);
          if (cVar3 == '\0') {
            func_0x0001803dadf0(&uStack_28,MR_System.Collections.Generic.List<System.Action>.Dispose);
            return;
          }
          if (puStack_18 == (undefined *)0x0) break;
          (**(code **)(puStack_18 + 0x18))
                    (*(undefined8 *)(puStack_18 + 0x40),*(undefined8 *)(puStack_18 + 0x28));
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
  }
  puStack_30 = &UNK_1806bf5e9;
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

