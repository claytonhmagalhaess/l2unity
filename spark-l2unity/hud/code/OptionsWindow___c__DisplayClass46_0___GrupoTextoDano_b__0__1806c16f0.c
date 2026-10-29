// OptionsWindow___c__DisplayClass46_0___GrupoTextoDano_b__0__1806c16f0 @ 0x1806c16f0

void OptionsWindow___c__DisplayClass46_0___GrupoTextoDano_b__0__1806c16f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 *puStack_20;
  longlong lStack_18;
  
  if ((*(longlong *)(param_1 + 0x20) == 0) || (lVar2 = *(longlong *)(param_1 + 0x10), lVar2 == 0)) {
    puStack_30 = &UNK_1806c1721;
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x18);
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x18);
  if (cRam00000001834b3e8c == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.Dispose,uVar5,iVar6,0);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.GetEnumerator);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3e8c = '\x01';
  }
  uStack_28 = 0;
  puStack_20 = (undefined8 *)0x0;
  lStack_18 = 0;
  iVar6 = iVar6 + uVar5;
  do {
    if (iVar6 <= (int)uVar5) {
      lVar2 = *(longlong *)(lVar2 + 0xb0);
      if (lVar2 == 0) {
code_r0x000180696b9a:
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FUN_180bada40(&uStack_40,lVar2,MR_System.Collections.Generic.List<System.Action>.GetEnumerator);
      uStack_28 = uStack_40;
      puStack_20 = puStack_38;
      lStack_18 = (longlong)puStack_30;
      uStack_40 = 0;
      puStack_38 = &uStack_28;
      while( true ) {
        cVar4 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<System.Action>.MoveNext);
        if (cVar4 == '\0') {
          func_0x0001803dadf0(&uStack_28,MR_System.Collections.Generic.List<System.Action>.Dispose);
          return;
        }
        if (lStack_18 == 0) break;
        (**(code **)(lStack_18 + 0x18))
                  (*(undefined8 *)(lStack_18 + 0x40),*(undefined8 *)(lStack_18 + 0x28));
      }
code_r0x000180696b8e:
      FUN_1803155d0();
      FUN_180311490();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xf8);
    if (lVar1 == 0) goto code_r0x000180696b9a;
    if (*(uint *)(lVar1 + 0x18) <= uVar5) {
      FUN_1803155c0();
      goto code_r0x000180696b8e;
    }
    *(undefined1 *)((longlong)(int)uVar5 + 0x20 + lVar1) = 1;
    uVar5 = uVar5 + 1;
  } while( true );
}

