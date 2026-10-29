// SparkTeclas__TextoDaAcao__1804cec20 @ 0x1804cec20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkTeclas__TextoDaAcao__1804cec20(undefined8 param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong lStack_38;
  
  if (cRam00000001834b32ee == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(LIT_"'-'");
    cRam00000001834b32ee = '\x01';
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b32f3 == '\0') {
    FUN_180315380(TI_SparkTeclas);
    cRam00000001834b32f3 = '\x01';
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x10) == 0) {
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkTeclas__MontaLista__1804cd140(0);
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x10);
  if (lVar1 == 0) {
    FUN_1803155d0();
code_r0x0001804ceed8:
    FUN_1803155c0();
code_r0x0001804ceede:
    FUN_1803155c0();
code_r0x0001804ceee3:
    FUN_1803155d0();
code_r0x0001804ceee8:
    FUN_1803155c0();
  }
  else {
    FUN_180bada40(&uStack_60,lVar1,MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
    uStack_48 = (undefined4)uStack_60;
    uStack_44 = uStack_60._4_4_;
    uStack_40 = (undefined4)uStack_58;
    uStack_3c = uStack_58._4_4_;
    lStack_38 = lStack_50;
    uStack_60 = 0;
    uStack_58 = &uStack_48;
    do {
      do {
        cVar3 = FUN_1812fa7e0(&uStack_48,MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext);
        lVar1 = lStack_38;
        if (cVar3 == '\0') {
          Gear__UpdateWeaponType__1803dadf0(&uStack_48,MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
          return LIT_"'-'";
        }
        if (lStack_38 == 0) goto code_r0x0001804cef01;
        if (*(longlong *)(lStack_38 + 0x20) == 0) goto code_r0x0001804ceefc;
        lVar4 = func_0x000181e83e90(*(longlong *)(lStack_38 + 0x20),0);
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660(TI_SparkTeclas);
        }
      } while (lVar4 != **(longlong **)(TI_SparkTeclas + 0xb8));
      if (*(longlong *)(lVar1 + 0x20) == 0) goto code_r0x0001804ceef7;
      cVar3 = System_String__op_Inequality
                        (*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0x10),param_1,0);
    } while (cVar3 != '\0');
    lVar4 = *(longlong *)(lVar1 + 0x28);
    if (lVar4 == 0) goto code_r0x0001804ceef2;
    if (*(int *)(lVar4 + 0x18) == 0) goto code_r0x0001804ceed8;
    cVar3 = func_0x000181707e50(*(undefined8 *)(lVar4 + 0x20),0);
    lVar1 = *(longlong *)(lVar1 + 0x28);
    if (cVar3 != '\0') {
      if (lVar1 != 0) {
        if (1 < *(uint *)(lVar1 + 0x18)) {
          uVar5 = *(undefined8 *)(lVar1 + 0x28);
code_r0x0001804cee57:
          if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar5 = SparkTeclas__TextoDe__1804cef10(uVar5,0);
          Gear__UpdateWeaponType__1803dadf0(&uStack_48,MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
          return uVar5;
        }
        goto code_r0x0001804ceede;
      }
      goto code_r0x0001804ceee3;
    }
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x18) != 0) {
        uVar5 = *(undefined8 *)(lVar1 + 0x20);
        goto code_r0x0001804cee57;
      }
      goto code_r0x0001804ceee8;
    }
  }
  FUN_1803155d0();
code_r0x0001804ceef2:
  FUN_1803155d0();
code_r0x0001804ceef7:
  FUN_1803155d0();
code_r0x0001804ceefc:
  FUN_1803155d0();
code_r0x0001804cef01:
  FUN_1803155d0();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return uVar5;
}

