// SparkTeclas__VoltaAoPadrao__1804cf820 @ 0x1804cf820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTeclas__VoltaAoPadrao__1804cf820(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  char cVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong lStack_18;
  
  if (cRam00000001834b32f2 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
    FUN_180315380(TI_SparkTeclas);
    cRam00000001834b32f2 = '\x01';
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x10) != 0) {
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x10);
    if (lVar1 == 0) {
      FUN_1803155d0();
code_r0x0001804cfa43:
      FUN_1803155c0();
code_r0x0001804cfa49:
      FUN_1803155c0();
code_r0x0001804cfa4e:
      FUN_1803155c0();
code_r0x0001804cfa53:
      FUN_1803155c0();
code_r0x0001804cfa58:
      FUN_1803155d0();
code_r0x0001804cfa5d:
      FUN_1803155d0();
code_r0x0001804cfa62:
      FUN_1803155d0();
code_r0x0001804cfa67:
      FUN_1803155d0();
code_r0x0001804cfa6c:
      FUN_1803155d0();
      FUN_180311490();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FUN_180bada40(&uStack_40,lVar1,MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
    uStack_28 = (undefined4)uStack_40;
    uStack_24 = uStack_40._4_4_;
    uStack_20 = (undefined4)uStack_38;
    uStack_1c = uStack_38._4_4_;
    lStack_18 = lStack_30;
    uStack_40 = 0;
    uStack_38 = &uStack_28;
    while( true ) {
      cVar7 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext);
      lVar1 = lStack_18;
      if (cVar7 == '\0') break;
      if (lStack_18 == 0) goto code_r0x0001804cfa6c;
      lVar2 = *(longlong *)(lStack_18 + 0x30);
      if (lVar2 == 0) goto code_r0x0001804cfa67;
      if (*(int *)(lVar2 + 0x18) == 0) goto code_r0x0001804cfa43;
      lVar3 = *(longlong *)(lStack_18 + 0x28);
      if (lVar3 == 0) goto code_r0x0001804cfa62;
      if (*(int *)(lVar3 + 0x18) == 0) goto code_r0x0001804cfa49;
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
      func_0x000180314690(lVar3 + 0x20);
      lVar2 = *(longlong *)(lVar1 + 0x30);
      if (lVar2 == 0) goto code_r0x0001804cfa5d;
      if (*(uint *)(lVar2 + 0x18) < 2) goto code_r0x0001804cfa4e;
      lVar3 = *(longlong *)(lVar1 + 0x28);
      if (lVar3 == 0) goto code_r0x0001804cfa58;
      if (*(uint *)(lVar3 + 0x18) < 2) goto code_r0x0001804cfa53;
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
      func_0x000180314690(lVar3 + 0x28);
      uVar4 = *(undefined8 *)(lVar1 + 0x20);
      uVar5 = *(undefined8 *)(lVar1 + 0x28);
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
      }
      SparkTeclas__MontaBindings__1804ccab0(uVar4,uVar5,0);
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkTeclas__Salva__1804ce320(0);
  }
  return;
}

