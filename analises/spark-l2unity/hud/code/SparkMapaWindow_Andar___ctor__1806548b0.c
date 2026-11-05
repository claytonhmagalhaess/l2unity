// SparkMapaWindow_Andar___ctor__1806548b0 @ 0x1806548b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkMapaWindow_Andar___ctor__1806548b0
                   (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                   float param_9,float param_10,float param_11,float param_12)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  if (cRam00000001834b3dda == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Rect>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Vector2>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<UnityEngine.Vector2>);
    FUN_180315380(TI_System.Collections.Generic.List<UnityEngine.Rect>);
    cRam00000001834b3dda = '\x01';
  }
  uVar7 = func_0x000180315580(TI_System.Collections.Generic.List<UnityEngine.Rect>);
  FUN_180bba2e0(uVar7,MR_System.Collections.Generic.List<UnityEngine.Rect>..ctor);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  func_0x000180314690(param_1 + 0x38,uVar7);
  uVar7 = func_0x000180315580(TI_System.Collections.Generic.List<UnityEngine.Vector2>);
  FUN_180bba2e0(uVar7,MR_System.Collections.Generic.List<UnityEngine.Vector2>..ctor);
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  func_0x000180314690(param_1 + 0x40,uVar7);
  Gear__UpdateWeaponType__1803dadf0(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  func_0x000180314690(param_1 + 0x10,param_2);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  func_0x000180314690(param_1 + 0x18,param_3);
  *(undefined4 *)(param_1 + 0x24) = param_5;
  *(undefined4 *)(param_1 + 0x2c) = param_7;
  *(undefined4 *)(param_1 + 0x28) = param_6;
  *(undefined4 *)(param_1 + 0x30) = param_8;
  *(undefined4 *)(param_1 + 0x20) = param_4;
  if (cRam00000001834b3ddb == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Vector2>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Rect>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Rect>.get_Count);
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b3ddb = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
    func_0x000180315660();
  }
  param_10 = param_10 - 20.0;
  param_9 = param_9 - 20.0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    fVar12 = (param_11 + 20.0) - param_9;
    fVar13 = (param_12 + 20.0) - param_10;
    fVar8 = fVar13;
    fVar9 = fVar12;
    fVar10 = param_10;
    fVar11 = param_9;
    if (*(int *)(*(longlong *)(param_1 + 0x38) + 0x18) != 0) {
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      fVar11 = *(float *)(param_1 + 0x48);
      if (param_9 <= *(float *)(param_1 + 0x48)) {
        fVar11 = param_9;
      }
      fVar10 = *(float *)(param_1 + 0x4c);
      if (param_10 <= *(float *)(param_1 + 0x4c)) {
        fVar10 = param_10;
      }
      fVar9 = *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x48);
      if (fVar9 <= param_9 + fVar12) {
        fVar9 = param_9 + fVar12;
      }
      fVar8 = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x4c);
      if (fVar8 <= param_10 + fVar13) {
        fVar8 = param_10 + fVar13;
      }
      fVar8 = fVar8 - fVar10;
      fVar9 = fVar9 - fVar11;
    }
    *(float *)(param_1 + 0x48) = fVar11;
    *(float *)(param_1 + 0x4c) = fVar10;
    *(float *)(param_1 + 0x50) = fVar9;
    *(float *)(param_1 + 0x54) = fVar8;
    lVar5 = MR_System.Collections.Generic.List<UnityEngine.Rect>.Add;
    lVar6 = *(longlong *)(param_1 + 0x38);
    if (lVar6 == 0) goto code_r0x0001806542d5;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    lVar3 = *(longlong *)(lVar6 + 0x10);
    if (lVar3 == 0) goto code_r0x0001806542d5;
    uVar2 = *(uint *)(lVar6 + 0x18);
    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
      if (*(uint *)(lVar3 + 0x18) <= uVar2) goto code_r0x0001806542db;
      pfVar1 = (float *)(lVar3 + ((longlong)(int)uVar2 + 2) * 0x10);
      *pfVar1 = param_9;
      pfVar1[1] = param_10;
      pfVar1[2] = fVar12;
      pfVar1[3] = fVar13;
    }
    else {
      fStack_58 = param_9;
      fStack_54 = param_10;
      fStack_50 = fVar12;
      fStack_4c = fVar13;
      FUN_1815b2780(lVar6,&fStack_58,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    lVar5 = MR_System.Collections.Generic.List<UnityEngine.Vector2>.Add;
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (lVar6 != 0) {
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      lVar3 = *(longlong *)(lVar6 + 0x10);
      if (lVar3 != 0) {
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          if (*(uint *)(lVar3 + 0x18) <= uVar2) {
code_r0x0001806542db:
            FUN_1803155c0();
            pcVar4 = (code *)swi(3);
            lVar6 = (*pcVar4)();
            return lVar6;
          }
          *(undefined4 *)(lVar3 + 0x20 + (longlong)(int)uVar2 * 8) = 0x7fc00000;
          *(undefined4 *)(lVar3 + 0x24 + (longlong)(int)uVar2 * 8) = 0x7fc00000;
        }
        else {
          FUN_18168bfc0(lVar6,0x7fc000007fc00000,
                        *(undefined8 *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        return param_1;
      }
    }
  }
code_r0x0001806542d5:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  lVar6 = (*pcVar4)();
  return lVar6;
}

