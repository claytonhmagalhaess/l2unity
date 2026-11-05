// SparkTeclas__QuemUsa__1804ce120 @ 0x1804ce120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkTeclas__QuemUsa__1804ce120(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong lStack_38;
  
  if (cRam00000001834b32fc == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
    FUN_180315380(TI_SparkTeclas);
    cRam00000001834b32fc = '\x01';
  }
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x28), lVar1 != 0)) {
    if (*(uint *)(lVar1 + 0x18) <= param_2) {
      FUN_1803155c0();
code_r0x0001804ce304:
      FUN_1803155c0();
code_r0x0001804ce30a:
      FUN_1803155d0();
code_r0x0001804ce30f:
      FUN_1803155d0();
      FUN_180311490();
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    uVar5 = *(undefined8 *)(lVar1 + 0x20 + (longlong)(int)param_2 * 8);
    cVar4 = func_0x000181707e50(uVar5,0);
    if (cVar4 == '\0') {
      if (param_3 == 0) goto code_r0x0001804ce2f8;
      FUN_180bada40(&uStack_60,param_3,MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
      uStack_48 = (undefined4)uStack_60;
      uStack_44 = uStack_60._4_4_;
      uStack_40 = (undefined4)uStack_58;
      uStack_3c = uStack_58._4_4_;
      lStack_38 = lStack_50;
      uStack_60 = 0;
      uStack_58 = &uStack_48;
      while( true ) {
        cVar4 = FUN_1812fa7e0(&uStack_48,MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext);
        lVar1 = lStack_38;
        if (cVar4 == '\0') break;
        for (uVar6 = 0; (int)uVar6 < 2; uVar6 = uVar6 + 1) {
          if (lVar1 != param_1) {
            if (lVar1 == 0) goto code_r0x0001804ce30f;
            if (*(char *)(lVar1 + 0x38) == *(char *)(param_1 + 0x38)) {
              if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar4 = SparkTeclas__VooEBarra__1804cfa80(lVar1,param_1,0);
              if (cVar4 == '\0') {
                lVar2 = *(longlong *)(lVar1 + 0x28);
                if (lVar2 == 0) goto code_r0x0001804ce30a;
                if (*(uint *)(lVar2 + 0x18) <= uVar6) goto code_r0x0001804ce304;
                cVar4 = func_0x0001817058a0(*(undefined8 *)(lVar2 + 0x20 + (longlong)(int)uVar6 * 8)
                                            ,uVar5);
                if (cVar4 != '\0') {
                  uVar5 = *(undefined8 *)(lVar1 + 0x10);
                  Gear__UpdateWeaponType__1803dadf0(&uStack_48,MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
                  return uVar5;
                }
              }
            }
          }
        }
      }
      Gear__UpdateWeaponType__1803dadf0(&uStack_48,MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
    }
    return 0;
  }
code_r0x0001804ce2f8:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return uVar5;
}

