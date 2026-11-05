// SparkMapaWindow__L2ParaArte__18063b850 @ 0x18063b850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkMapaWindow__L2ParaArte__18063b850(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStackX_8;
  float fStackX_c;
  float fStackX_24;
  
  if (cRam00000001834b3d4f == '\0') {
    FUN_180315380(TI_SparkMapaWindow);
    cRam00000001834b3d4f = '\x01';
  }
  if (*(longlong *)(param_1 + 0x280) == 0) {
    SparkMapaWindow__CalculaDeformacao__180639550(param_1,0);
  }
  uVar3 = SparkMapaWindow__Afim__180637be0(param_1,param_2,0);
  if (DAT_1834b2f44 == '\0') {
    FUN_180315380(TI_UnityEngine.Vector2);
    DAT_1834b2f44 = '\x01';
  }
  fVar11 = 0.0;
  fStackX_c = (float)((ulonglong)param_2 >> 0x20);
  uVar6 = 0;
  fStackX_8 = (float)param_2;
  fVar9 = **(float **)(TI_UnityEngine.Vector2 + 0xb8);
  fVar10 = (*(float **)(TI_UnityEngine.Vector2 + 0xb8))[1];
  lVar5 = TI_SparkMapaWindow;
  do {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      func_0x000180315660(lVar5);
      lVar5 = TI_SparkMapaWindow;
    }
    lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + 8);
    if (lVar1 == 0) {
code_r0x00018063bab6:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return uVar3;
    }
    if (*(int *)(lVar1 + 0x18) <= (int)uVar6) {
      fStackX_24 = (float)((ulonglong)uVar3 >> 0x20);
      return CONCAT44(fVar10 / fVar11 + fStackX_24,fVar9 / fVar11 + (float)uVar3);
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      func_0x000180315660(lVar5);
      lVar5 = TI_SparkMapaWindow;
    }
    lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + 8);
    if (lVar1 == 0) goto code_r0x00018063bab6;
    if (*(uint *)(lVar1 + 0x18) <= uVar6) goto code_r0x00018063babc;
    fVar8 = fStackX_c - *(float *)(lVar1 + 4 + ((longlong)(int)uVar6 + 2) * 0x18);
    fVar7 = fStackX_8 - *(float *)(lVar1 + ((longlong)(int)uVar6 + 2) * 0x18);
    fVar7 = fVar8 * fVar8 + fVar7 * fVar7;
    if (fVar7 < 1.0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        func_0x000180315660(lVar5);
        lVar5 = TI_SparkMapaWindow;
      }
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + 8);
      if (lVar5 == 0) goto code_r0x00018063bab6;
      if (uVar6 < *(uint *)(lVar5 + 0x18)) {
        return *(undefined8 *)(lVar5 + 0x28 + (longlong)(int)uVar6 * 0x18);
      }
code_r0x00018063babc:
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return uVar3;
    }
    lVar1 = *(longlong *)(param_1 + 0x288);
    fVar7 = 1.0 / fVar7;
    if (lVar1 == 0) goto code_r0x00018063bab6;
    if (*(uint *)(lVar1 + 0x18) <= uVar6) goto code_r0x00018063babc;
    lVar4 = (longlong)(int)uVar6;
    fVar11 = fVar11 + fVar7;
    uVar6 = uVar6 + 1;
    fVar9 = fVar9 + fVar7 * *(float *)(lVar1 + 0x20 + lVar4 * 8);
    fVar10 = fVar10 + fVar7 * *(float *)(lVar1 + 0x24 + lVar4 * 8);
  } while( true );
}

