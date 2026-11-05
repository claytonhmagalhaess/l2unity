// SparkMapaWindow_Andar__NaCaixa__180654350 @ 0x180654350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkMapaWindow_Andar__NaCaixa__180654350(longlong param_1,float *param_2,float param_3)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  longlong lVar7;
  uint extraout_var;
  undefined8 uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fStackX_c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  if (cRam00000001834b3ddc == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Rect>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Vector2>.get_Item);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Rect>.get_Item);
    FUN_180315380();
    cRam00000001834b3ddc = '\x01';
  }
  lVar7 = *(longlong *)(param_1 + 0x38);
  if (lVar7 != 0) {
    iVar9 = 0;
    fVar10 = (*param_2 - *(float *)(param_1 + 0x20)) * *(float *)(param_1 + 0x28);
    fVar11 = (param_2[1] - *(float *)(param_1 + 0x24)) * *(float *)(param_1 + 0x28);
    do {
      if (*(int *)(lVar7 + 0x18) <= iVar9) {
        return 0;
      }
      if (*(longlong *)(param_1 + 0x38) == 0) break;
      FUN_180bbaf80(&fStack_68,*(longlong *)(param_1 + 0x38),iVar9,MR_System.Collections.Generic.List<UnityEngine.Rect>.get_Item);
      fVar6 = fStack_68;
      if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b3d5b == '\0') {
        FUN_180315380(TI_UnityEngine.Rect);
        cRam00000001834b3d5b = '\x01';
      }
      fVar3 = fStack_60;
      if (fVar6 <= fVar10) {
        if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
          func_0x000180315660();
        }
        fVar4 = fStack_5c;
        fVar2 = fStack_64;
        if ((fVar10 < fVar3 + fVar6) && (fStack_64 <= fVar11)) {
          if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (fVar11 < fVar4 + fVar2) {
            if (*(longlong *)(param_1 + 0x40) == 0) break;
            uVar5 = FUN_180bbafe0(*(longlong *)(param_1 + 0x40),iVar9,MR_System.Collections.Generic.List<UnityEngine.Vector2>.get_Item);
            if ((uVar5 & 0x7fffffff) < 0x7f800001) {
              if (*(longlong *)(param_1 + 0x40) == 0) break;
              fVar6 = (float)FUN_180bbafe0(*(longlong *)(param_1 + 0x40),iVar9,MR_System.Collections.Generic.List<UnityEngine.Vector2>.get_Item)
              ;
            }
            else {
              fVar6 = *(float *)(param_1 + 0x2c);
            }
            if (*(longlong *)(param_1 + 0x40) == 0) break;
            FUN_180bbafe0(*(longlong *)(param_1 + 0x40),iVar9,MR_System.Collections.Generic.List<UnityEngine.Vector2>.get_Item);
            if ((extraout_var & 0x7fffffff) < 0x7f800001) {
              if (*(longlong *)(param_1 + 0x40) == 0) break;
              uVar8 = FUN_180bbafe0(*(longlong *)(param_1 + 0x40),iVar9,MR_System.Collections.Generic.List<UnityEngine.Vector2>.get_Item);
              fStackX_c = (float)((ulonglong)uVar8 >> 0x20);
            }
            else {
              fStackX_c = *(float *)(param_1 + 0x30);
            }
            if ((param_2[2] <= fVar6 + param_3) && (fStackX_c - param_3 <= param_2[2])) {
              return 1;
            }
          }
        }
      }
      lVar7 = *(longlong *)(param_1 + 0x38);
      iVar9 = iVar9 + 1;
    } while (lVar7 != 0);
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar8 = (*pcVar1)();
  return uVar8;
}

