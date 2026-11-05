// SparkMapaWindow_Andar__Com__180654040 @ 0x180654040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkMapaWindow_Andar__Com__180654040
                   (longlong param_1,float param_2,float param_3,float param_4,float param_5,
                   undefined4 param_6,undefined4 param_7)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
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
  param_3 = param_3 - 20.0;
  param_2 = param_2 - 20.0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    fVar11 = (param_4 + 20.0) - param_2;
    fVar12 = (param_5 + 20.0) - param_3;
    fVar7 = fVar12;
    fVar8 = fVar11;
    fVar9 = param_3;
    fVar10 = param_2;
    if (*(int *)(*(longlong *)(param_1 + 0x38) + 0x18) != 0) {
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      fVar10 = *(float *)(param_1 + 0x48);
      if (param_2 <= *(float *)(param_1 + 0x48)) {
        fVar10 = param_2;
      }
      fVar9 = *(float *)(param_1 + 0x4c);
      if (param_3 <= *(float *)(param_1 + 0x4c)) {
        fVar9 = param_3;
      }
      fVar8 = *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x48);
      if (fVar8 <= param_2 + fVar11) {
        fVar8 = param_2 + fVar11;
      }
      fVar7 = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x4c);
      if (fVar7 <= param_3 + fVar12) {
        fVar7 = param_3 + fVar12;
      }
      fVar7 = fVar7 - fVar9;
      fVar8 = fVar8 - fVar10;
    }
    *(float *)(param_1 + 0x48) = fVar10;
    *(float *)(param_1 + 0x4c) = fVar9;
    *(float *)(param_1 + 0x50) = fVar8;
    *(float *)(param_1 + 0x54) = fVar7;
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
      *pfVar1 = param_2;
      pfVar1[1] = param_3;
      pfVar1[2] = fVar11;
      pfVar1[3] = fVar12;
    }
    else {
      fStack_58 = param_2;
      fStack_54 = param_3;
      fStack_50 = fVar11;
      fStack_4c = fVar12;
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
          *(undefined4 *)(lVar3 + 0x20 + (longlong)(int)uVar2 * 8) = param_6;
          *(undefined4 *)(lVar3 + 0x24 + (longlong)(int)uVar2 * 8) = param_7;
        }
        else {
          FUN_18168bfc0(lVar6,CONCAT44(param_7,param_6),
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

