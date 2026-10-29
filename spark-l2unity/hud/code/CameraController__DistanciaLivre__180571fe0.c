// CameraController__DistanciaLivre__180571fe0 @ 0x180571fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float CameraController__DistanciaLivre__180571fe0
                (longlong param_1,undefined4 *param_2,undefined8 *param_3,float param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  
  if (cRam00000001834b3904 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_UnityEngine.Physics);
    cRam00000001834b3904 = '\x01';
  }
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar2,0,0);
  if (cVar4 != '\0') {
    return param_4;
  }
  iVar5 = func_0x000182427a70(*(undefined4 *)(param_1 + 0xa0),0);
  if (iVar5 == 0) {
    return param_4;
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    fVar8 = (float)UnityEngine_Camera__get_nearClipPlane(*(longlong *)(param_1 + 0x98),0);
    if (*(longlong *)(param_1 + 0x98) != 0) {
      fVar9 = (float)UnityEngine_Camera__get_fieldOfView(*(longlong *)(param_1 + 0x98),0);
      fVar9 = (float)FUN_1803aa730(fVar9 * 0.5 * 0.017453292);
      if (*(longlong *)(param_1 + 0x98) != 0) {
        fVar10 = (float)UnityEngine_Camera__get_aspect(*(longlong *)(param_1 + 0x98),0);
        if (*(longlong *)(param_1 + 0x98) != 0) {
          fVar11 = (float)UnityEngine_Camera__get_aspect(*(longlong *)(param_1 + 0x98),0);
          fVar8 = (fVar11 * fVar10 + 1.0) * fVar9 * fVar8 * fVar9 * fVar8 + fVar8 * fVar8;
          if (fVar8 < 0.0) {
            fVar8 = (float)FUN_1803a99f0(fVar8);
          }
          else {
            fVar8 = SQRT(fVar8);
          }
          if (cRam00000001834b397b == '\0') {
            FUN_180315380(TI_UnityEngine.Vector3);
            cRam00000001834b397b = '\x01';
          }
          uStack_c8 = *(undefined8 *)(*(longlong *)(TI_UnityEngine.Vector3 + 0xb8) + 0x54);
          uStack_c0 = *(undefined4 *)(*(longlong *)(TI_UnityEngine.Vector3 + 0xb8) + 0x5c);
          uStack_a8 = *param_2;
          uStack_a4 = param_2[1];
          uStack_a0 = param_2[2];
          uStack_9c = param_2[3];
          puVar7 = (undefined8 *)
                   UnityEngine_Quaternion__op_Multiply(&uStack_b8,&uStack_a8,&uStack_c8,0);
          uVar2 = *puVar7;
          uVar1 = *(undefined4 *)(puVar7 + 1);
          uVar6 = func_0x000182427a70(*(undefined4 *)(param_1 + 0xa0),0);
          if (*(int *)(TI_UnityEngine.Physics + 0xe4) == 0) {
            func_0x000180315660();
          }
          uStack_b8 = *param_3;
          uStack_b0 = *(undefined4 *)(param_3 + 1);
          uStack_c8 = uVar2;
          uStack_c0 = uVar1;
          cVar4 = UnityEngine_Physics__SphereCast
                            (&uStack_b8,fVar8 + 0.02,&uStack_c8,&uStack_98,param_4,uVar6,1,0);
          if (cVar4 != '\0') {
            fVar8 = (float)func_0x000182398770(&uStack_98,0);
            if (fVar8 < 0.05) {
              return 0.05;
            }
            if (fVar8 <= param_4) {
              return fVar8;
            }
          }
          return param_4;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  fVar8 = (float)(*pcVar3)();
  return fVar8;
}

