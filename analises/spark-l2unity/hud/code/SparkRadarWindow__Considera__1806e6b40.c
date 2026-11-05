// SparkRadarWindow__Considera__1806e6b40 @ 0x1806e6b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow__Considera__1806e6b40
               (longlong param_1,longlong param_2,float *param_3,float param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  float *pfVar10;
  undefined1 uVar11;
  float fVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  if (cRam00000001834b4097 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.HashSet<int>.Contains);
    FUN_180315380(MR_System.Collections.Generic.List<SparkRadarWindow.Candidato>.Add);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b4097 = '\x01';
  }
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar8 = UnityEngine_Object__op_Equality(param_2,0,0);
  if (cVar8 != '\0') {
    return;
  }
  if (param_2 == 0) goto code_r0x0001806e6e19;
  if (*(longlong *)(param_2 + 0x30) == 0) {
    return;
  }
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  uVar4 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar8 = UnityEngine_Object__op_Equality(param_2,uVar4,0);
  if (cVar8 != '\0') {
    return;
  }
  lVar9 = UnityEngine_Component__get_transform(param_2,0);
  if (lVar9 == 0) goto code_r0x0001806e6e19;
  pfVar10 = (float *)UnityEngine_Transform__get_position(&uStack_48,lVar9,0);
  fVar12 = (pfVar10[2] - param_3[2]) * (pfVar10[2] - param_3[2]) +
           (*pfVar10 - *param_3) * (*pfVar10 - *param_3);
  if (param_4 < fVar12) {
    return;
  }
  if (*(longlong *)(param_2 + 0x30) == 0) goto code_r0x0001806e6e19;
  iVar2 = *(int *)(*(longlong *)(param_2 + 0x30) + 0x10);
  if (iVar2 == 0) {
    return;
  }
  if (iVar2 == 1) {
    if ((*(longlong *)(param_2 + 0x30) == 0) || (*(longlong *)(param_1 + 0x180) == 0))
    goto code_r0x0001806e6e19;
    cVar8 = FUN_1814cf290(*(longlong *)(param_1 + 0x180),
                          *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0x14),MR_System.Collections.Generic.HashSet<int>.Contains
                         );
    if (cVar8 != '\0') {
      return;
    }
    uVar11 = 2;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        if ((*(longlong *)(param_2 + 0x38) != 0) &&
           (cVar8 = Entity__get_IsDead(param_2,0), cVar8 != '\0')) {
          return;
        }
        uVar11 = 0;
        goto code_r0x0001806e6d14;
      }
      if (iVar2 == 4) {
        return;
      }
    }
    uVar11 = 1;
  }
code_r0x0001806e6d14:
  lVar9 = *(longlong *)(param_1 + 0x178);
  uStack_34 = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_38 = (undefined4)param_2;
  func_0x000180314690(&uStack_38,param_2);
  lVar7 = MR_System.Collections.Generic.List<SparkRadarWindow.Candidato>.Add;
  uStack_30._0_5_ = CONCAT14(uVar11,fVar12);
  if (lVar9 != 0) {
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    lVar5 = *(longlong *)(lVar9 + 0x10);
    if (lVar5 != 0) {
      uVar3 = *(uint *)(lVar9 + 0x18);
      if (uVar3 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar3 + 1;
        if (*(uint *)(lVar5 + 0x18) <= uVar3) {
          FUN_1803155c0();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar1 = (undefined4 *)(lVar5 + ((longlong)(int)uVar3 + 2) * 0x10);
        *puVar1 = uStack_38;
        puVar1[1] = uStack_34;
        puVar1[2] = fVar12;
        puVar1[3] = uStack_30._4_4_;
        func_0x000180314690(((longlong)(int)uVar3 + 2) * 0x10 + lVar5,0);
      }
      else {
        uStack_48 = uStack_38;
        uStack_44 = uStack_34;
        uStack_3c = uStack_30._4_4_;
        fStack_40 = fVar12;
        FUN_180ba8bc0(lVar9,&uStack_48,
                      *(undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
code_r0x0001806e6e19:
  FUN_1803155d0();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

