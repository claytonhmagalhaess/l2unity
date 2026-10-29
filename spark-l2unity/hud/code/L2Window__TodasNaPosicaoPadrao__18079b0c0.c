// L2Window__TodasNaPosicaoPadrao__18079b0c0 @ 0x18079b0c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2Window__TodasNaPosicaoPadrao__18079b0c0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong *plStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong *plStack_18;
  
  if (cRam00000001834b4485 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<L2Window>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<L2Window>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<L2Window>.get_Current);
    FUN_180315380(TI_L2Window);
    FUN_180315380(MR_System.Collections.Generic.List<L2Window>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<L2Window>.RemoveAll);
    FUN_180315380(TI_System.Predicate<L2Window>);
    FUN_180315380(MD_L2Window.__c._TodasNaPosicaoPadrao_b__32_0);
    FUN_180315380(TI_L2Window.<>c);
    cRam00000001834b4485 = '\x01';
  }
  if (*(int *)(TI_L2Window + 0xe4) == 0) {
    func_0x000180315660(TI_L2Window);
  }
  lVar1 = **(longlong **)(TI_L2Window + 0xb8);
  if (*(int *)(TI_L2Window.<>c + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar5 = *(longlong *)(*(longlong *)(TI_L2Window.<>c + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(TI_L2Window.<>c + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar2 = **(undefined8 **)(TI_L2Window.<>c + 0xb8);
    lVar5 = func_0x000180315580(TI_System.Predicate<L2Window>);
    FUN_180d27680(lVar5,uVar2,MD_L2Window.__c._TodasNaPosicaoPadrao_b__32_0,0);
    *(longlong *)(*(longlong *)(TI_L2Window.<>c + 0xb8) + 8) = lVar5;
    func_0x000180314690(*(longlong *)(TI_L2Window.<>c + 0xb8) + 8,lVar5);
  }
  if (lVar1 != 0) {
    FUN_18164dab0(lVar1,lVar5,MR_System.Collections.Generic.List<L2Window>.RemoveAll);
    if (*(int *)(TI_L2Window + 0xe4) == 0) {
      func_0x000180315660(TI_L2Window);
    }
    if (**(longlong **)(TI_L2Window + 0xb8) != 0) {
      FUN_180bada40(&uStack_40,**(longlong **)(TI_L2Window + 0xb8),MR_System.Collections.Generic.List<L2Window>.GetEnumerator);
      uStack_28 = (undefined4)uStack_40;
      uStack_24 = uStack_40._4_4_;
      uStack_20 = (undefined4)uStack_38;
      uStack_1c = uStack_38._4_4_;
      plStack_18 = plStack_30;
      uStack_40 = 0;
      uStack_38 = &uStack_28;
      while( true ) {
        cVar4 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<L2Window>.MoveNext);
        if (cVar4 == '\0') {
          Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<L2Window>.Dispose);
          return;
        }
        if (plStack_18 == (longlong *)0x0) break;
        (**(code **)(*plStack_18 + 0x198))(plStack_18,*(undefined8 *)(*plStack_18 + 0x1a0));
      }
      FUN_1803155d0();
      FUN_180311490();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

