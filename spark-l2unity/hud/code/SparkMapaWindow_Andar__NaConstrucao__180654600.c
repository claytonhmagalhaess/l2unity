// SparkMapaWindow_Andar__NaConstrucao__180654600 @ 0x180654600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkMapaWindow_Andar__NaConstrucao__180654600(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fStackX_c;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (cRam00000001834b3dde == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Rect>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Rect>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Rect>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Rect>.GetEnumerator);
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b3dde = '\x01';
  }
  fStackX_c = (float)((ulonglong)param_2 >> 0x20);
  fVar9 = ((float)param_2 - *(float *)(param_1 + 0x20)) * *(float *)(param_1 + 0x28);
  fVar10 = (fStackX_c - *(float *)(param_1 + 0x24)) * *(float *)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return uVar8;
  }
  FUN_180badb20(&uStack_b0,*(longlong *)(param_1 + 0x38),MR_System.Collections.Generic.List<UnityEngine.Rect>.GetEnumerator);
  uStack_90 = (undefined4)uStack_b0;
  uStack_8c = uStack_b0._4_4_;
  uStack_88 = (undefined4)uStack_a8;
  uStack_84 = uStack_a8._4_4_;
  uStack_80 = uStack_a0;
  uStack_78 = uStack_98;
  uStack_b0 = 0;
  uStack_a8 = &uStack_90;
  do {
    cVar7 = FUN_1812ec7d0(&uStack_90,MR_System.Collections.Generic.List<UnityEngine.Rect>.MoveNext);
    if (cVar7 == '\0') {
      Gear__UpdateWeaponType__1803dadf0(&uStack_90,MR_System.Collections.Generic.List<UnityEngine.Rect>.Dispose);
      return 0;
    }
    fVar3 = (float)uStack_80;
    fVar4 = uStack_80._4_4_;
    fVar5 = (float)uStack_78;
    fVar6 = uStack_78._4_4_;
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b3d5b == '\0') {
      FUN_180315380(TI_UnityEngine.Rect);
      cRam00000001834b3d5b = '\x01';
    }
    if (fVar9 < fVar3) {
code_r0x0001806547a3:
      bVar2 = false;
    }
    else {
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      if ((fVar5 + fVar3 <= fVar9) || (fVar10 < fVar4)) goto code_r0x0001806547a3;
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      bVar2 = fVar10 < fVar6 + fVar4;
    }
    if (bVar2) {
      Gear__UpdateWeaponType__1803dadf0(&uStack_90,MR_System.Collections.Generic.List<UnityEngine.Rect>.Dispose);
      return 1;
    }
  } while( true );
}

