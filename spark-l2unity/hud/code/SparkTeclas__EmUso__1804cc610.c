// SparkTeclas__EmUso__1804cc610 @ 0x1804cc610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTeclas__EmUso__1804cc610(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong lStack_28;
  
  if (cRam00000001834b3301 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.SortedSet<string>.Add);
    FUN_180315380(MR_System.Collections.Generic.SortedSet<string>..ctor);
    FUN_180315380(TI_System.Collections.Generic.SortedSet<string>);
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(TI_System.StringComparer);
    FUN_180315380(LIT_"', '");
    cRam00000001834b3301 = '\x01';
  }
  if (*(int *)(TI_System.StringComparer + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834b31cb == '\0') {
    FUN_180315380(TI_System.StringComparer);
    DAT_1834b31cb = '\x01';
  }
  if (*(int *)(TI_System.StringComparer + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = *(undefined8 *)(*(longlong *)(TI_System.StringComparer + 0xb8) + 0x18);
  lVar5 = func_0x000180315580(TI_System.Collections.Generic.SortedSet<string>);
  FUN_180e66120(lVar5,uVar1,MR_System.Collections.Generic.SortedSet<string>..ctor);
  if (param_1 == 0) {
    FUN_1803155d0();
code_r0x0001804cc878:
    FUN_1803155c0();
code_r0x0001804cc87e:
    FUN_1803155d0();
code_r0x0001804cc883:
    FUN_1803155d0();
  }
  else {
    FUN_180bada40(&uStack_50,param_1,MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
    uStack_38 = (undefined4)uStack_50;
    uStack_34 = uStack_50._4_4_;
    uStack_30 = (undefined4)uStack_48;
    uStack_2c = uStack_48._4_4_;
    lStack_28 = lStack_40;
    uStack_50 = 0;
    uStack_48 = &uStack_38;
    while( true ) {
      cVar4 = FUN_1812fa7e0(&uStack_38,MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext);
      if (cVar4 == '\0') {
        Gear__UpdateWeaponType__1803dadf0(&uStack_38,MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
        System_String__Join(LIT_"', '",lVar5,0);
        return;
      }
      if (lStack_28 == 0) break;
      lVar2 = *(longlong *)(lStack_28 + 0x28);
      uVar6 = 0;
      if (lVar2 == 0) goto code_r0x0001804cc883;
      for (; (int)uVar6 < (int)*(uint *)(lVar2 + 0x18); uVar6 = uVar6 + 1) {
        if (*(uint *)(lVar2 + 0x18) <= uVar6) goto code_r0x0001804cc878;
        uVar1 = *(undefined8 *)(lVar2 + 0x20 + (longlong)(int)uVar6 * 8);
        cVar4 = func_0x000181707e50(uVar1,0);
        if (cVar4 == '\0') {
          if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
            func_0x000180315660();
          }
          SparkTeclas__TextoDe__1804cef10(uVar1,0);
          if (lVar5 == 0) goto code_r0x0001804cc87e;
          func_0x000180e627d0(lVar5);
        }
      }
    }
  }
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

