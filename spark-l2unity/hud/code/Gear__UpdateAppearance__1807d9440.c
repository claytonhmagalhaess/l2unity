// Gear__UpdateAppearance__1807d9440 @ 0x1807d9440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Gear__UpdateAppearance__1807d9440(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  
  if (cRam00000001834b4697 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_ParticleManager);
    cRam00000001834b4697 = '\x01';
  }
  if (param_2 != 0) {
    cVar3 = Appearance__ShouldUpdateWeapons(param_2,param_3,0);
    if (cVar3 != '\0') {
      cVar3 = func_0x0001807b69a0(param_2,param_3,0);
      if (cVar3 != '\0') {
        if (param_3 == 0) goto code_r0x0001807d95cc;
        *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
        *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_3 + 0x14);
      }
      (**(code **)(*param_1 + 0x198))(param_1,param_3,*(undefined8 *)(*param_1 + 0x1a0));
      if (*(int *)(TI_ParticleManager + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b31d3 == '\0') {
        FUN_180315380(TI_ParticleManager);
        cRam00000001834b31d3 = '\x01';
      }
      if (*(int *)(TI_ParticleManager + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar1 = **(undefined8 **)(TI_ParticleManager + 0xb8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
      if (cVar3 != '\0') {
        lVar4 = param_1[4];
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = UnityEngine_Object__op_Inequality(lVar4,0,0);
        if (cVar3 != '\0') {
          if (*(int *)(TI_ParticleManager + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar4 = FUN_1804792f0(0);
          if ((param_1[4] == 0) || (lVar4 == 0)) goto code_r0x0001807d95cc;
          ParticleManager__ArmaTrocada(lVar4,*(undefined8 *)(param_1[4] + 0x20),0);
        }
      }
    }
    return;
  }
code_r0x0001807d95cc:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

