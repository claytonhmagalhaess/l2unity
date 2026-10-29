// OptionsWindow___c__DisplayClass45_0___BlocoTextoDano_b__0__1806c10b0 @ 0x1806c10b0

void OptionsWindow___c__DisplayClass45_0___BlocoTextoDano_b__0__1806c10b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (cRam00000001834b3f45 == '\0') {
    puStack_30 = &UNK_1806c10ce;
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f45 = '\x01';
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    puStack_30 = &UNK_1806c10f1;
    func_0x000180315660(TI_SparkOpcoes);
  }
  lVar3 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xf8);
  if ((lVar3 == 0) || (lVar2 == 0)) {
    puStack_30 = &UNK_1806c112b;
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = *(int *)(lVar3 + 0x18);
  uVar6 = 0;
  if (cRam00000001834b3e8c == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.Dispose,0,iVar1,0);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.GetEnumerator);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3e8c = '\x01';
  }
  uStack_28 = 0;
  puStack_20 = (undefined1 *)0x0;
  puStack_18 = (undefined *)0x0;
  if (0 < iVar1) {
    do {
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660(TI_SparkOpcoes);
      }
      lVar3 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xf8);
      if (lVar3 == 0) goto code_r0x000180696b9a;
      if (*(uint *)(lVar3 + 0x18) <= uVar6) {
        FUN_1803155c0();
        goto code_r0x000180696b8e;
      }
      *(undefined1 *)((longlong)(int)uVar6 + 0x20 + lVar3) = 1;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0xb0);
  if (lVar2 == 0) {
code_r0x000180696b9a:
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_180bada40(&uStack_40,lVar2,MR_System.Collections.Generic.List<System.Action>.GetEnumerator);
  uStack_28 = uStack_40;
  puStack_20 = puStack_38;
  puStack_18 = puStack_30;
  uStack_40 = 0;
  puStack_38 = (undefined1 *)&uStack_28;
  while( true ) {
    cVar5 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<System.Action>.MoveNext);
    if (cVar5 == '\0') {
      func_0x0001803dadf0(&uStack_28,MR_System.Collections.Generic.List<System.Action>.Dispose);
      return;
    }
    if (puStack_18 == (undefined *)0x0) break;
    (**(code **)(puStack_18 + 0x18))
              (*(undefined8 *)(puStack_18 + 0x40),*(undefined8 *)(puStack_18 + 0x28));
  }
code_r0x000180696b8e:
  FUN_1803155d0();
  FUN_180311490();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

