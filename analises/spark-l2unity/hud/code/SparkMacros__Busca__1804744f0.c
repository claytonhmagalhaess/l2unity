// SparkMacros__Busca__1804744f0 @ 0x1804744f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkMacros__Busca__1804744f0(undefined4 param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  
  if (DAT_1834b307b == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Macro>.Find);
    FUN_180315380(TI_System.Predicate<SparkMacros.Macro>);
    FUN_180315380(TI_SparkMacros);
    FUN_180315380(MD_SparkMacros.__c__DisplayClass18_0._Busca_b__0);
    FUN_180315380(TI_SparkMacros.<>c__DisplayClass18_0);
    DAT_1834b307b = '\x01';
  }
  lVar4 = func_0x000180315580(TI_SparkMacros.<>c__DisplayClass18_0);
  Gear__UpdateWeaponType__1803dadf0(lVar4,0);
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x10) = param_1;
    if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
      func_0x000180315660(TI_SparkMacros);
    }
    lVar1 = **(longlong **)(TI_SparkMacros + 0xb8);
    lVar5 = func_0x000180315580(TI_System.Predicate<SparkMacros.Macro>);
    FUN_180d27680(lVar5,lVar4,MD_SparkMacros.__c__DisplayClass18_0._Busca_b__0,0);
    if (lVar1 != 0) {
      if (lVar5 == 0) {
        System_ThrowHelper__ThrowArgumentNullException(8,0,MR_System.Collections.Generic.List<SparkMacros.Macro>.Find);
      }
      uVar7 = 0;
      if (0 < *(int *)(lVar1 + 0x18)) {
        do {
          lVar4 = *(longlong *)(lVar1 + 0x10);
          if (lVar4 == 0) goto LAB_180bad599;
          if (*(uint *)(lVar4 + 0x18) <= uVar7) {
LAB_180bad59f:
            FUN_1803155c0();
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return uVar6;
          }
          if (lVar5 == 0) {
LAB_180bad599:
            FUN_1803155d0();
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return uVar6;
          }
          cVar3 = (**(code **)(lVar5 + 0x18))
                            (*(undefined8 *)(lVar5 + 0x40),
                             *(undefined8 *)(lVar4 + 0x20 + (longlong)(int)uVar7 * 8),
                             *(undefined8 *)(lVar5 + 0x28));
          if (cVar3 != '\0') {
            lVar4 = *(longlong *)(lVar1 + 0x10);
            if (lVar4 != 0) {
              if (uVar7 < *(uint *)(lVar4 + 0x18)) {
                return *(undefined8 *)(lVar4 + 0x20 + (longlong)(int)uVar7 * 8);
              }
              goto LAB_180bad59f;
            }
            goto LAB_180bad599;
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < *(int *)(lVar1 + 0x18));
      }
      return 0;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar6 = (*pcVar2)();
  return uVar6;
}

