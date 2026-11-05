// NameplatesManagerBase__IsNameplateVisible__180678e30 @ 0x180678e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool NameplatesManagerBase__IsNameplateVisible__180678e30(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  code *pcVar7;
  char cVar8;
  undefined1 uVar9;
  float *pfVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_78 [112];
  
  if (cRam00000001834b3e1f == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3e1f = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar8 = UnityEngine_Object__op_Equality(param_2,0,0);
  if (cVar8 == '\0') {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      pfVar10 = (float *)UnityEngine_Transform__get_position
                                   (auStack_78,*(longlong *)(param_1 + 0x38),0);
      if (param_2 != 0) {
        fVar1 = pfVar10[1];
        fVar2 = *pfVar10;
        fVar3 = pfVar10[2];
        pfVar10 = (float *)UnityEngine_Transform__get_position(auStack_78,param_2,0);
        fVar4 = *pfVar10;
        fVar5 = pfVar10[1];
        fVar6 = pfVar10[2];
        if (cRam00000001834b2f41 == '\0') {
          FUN_180315380(TI_System.Math);
          cRam00000001834b2f41 = '\x01';
        }
        if (*(int *)(TI_System.Math + 0xe4) == 0) {
          func_0x000180315660();
        }
        dVar11 = (double)((fVar1 - fVar5) * (fVar1 - fVar5) + (fVar2 - fVar4) * (fVar2 - fVar4) +
                         (fVar3 - fVar6) * (fVar3 - fVar6));
        if (0.0 <= dVar11) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = dVar11;
          auVar12 = sqrtpd(ZEXT816(0),auVar12);
          return (float)auVar12._0_8_ < *(float *)(param_1 + 0x20) ||
                 (float)auVar12._0_8_ == *(float *)(param_1 + 0x20);
        }
        dVar11 = (double)FUN_1803a9930();
        return (float)dVar11 < *(float *)(param_1 + 0x20) ||
               (float)dVar11 == *(float *)(param_1 + 0x20);
      }
    }
    FUN_1803155d0();
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  return false;
}

