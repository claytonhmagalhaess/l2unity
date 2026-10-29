// CameraController__SetTarget__180572840 @ 0x180572840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CameraController__SetTarget__180572840(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if (cRam00000001834b38ff == '\0') {
    FUN_180315380(TI_CameraCollisionDetection);
    FUN_180315380(TI_System.Func<UnityEngine.Transform,bool>);
    FUN_180315380(MD_CameraController.__c._SetTarget_b__42_0);
    FUN_180315380(TI_CameraController.<>c);
    cRam00000001834b38ff = '\x01';
  }
  if (param_2 != 0) {
    uVar7 = UnityEngine_GameObject__get_transform(param_2,0);
    *(undefined8 *)(param_1 + 0x48) = uVar7;
    func_0x000180314690(param_1 + 0x48,uVar7);
    if (*(longlong *)(param_1 + 0x48) != 0) {
      uVar7 = UnityEngine_Component__get_transform(*(longlong *)(param_1 + 0x48),0);
      if (*(int *)(TI_CameraController.<>c + 0xe4) == 0) {
        func_0x000180315660(TI_CameraController.<>c);
      }
      lVar8 = *(longlong *)(*(longlong *)(TI_CameraController.<>c + 0xb8) + 8);
      if (lVar8 == 0) {
        if (*(int *)(TI_CameraController.<>c + 0xe4) == 0) {
          func_0x000180315660(TI_CameraController.<>c);
        }
        uVar4 = **(undefined8 **)(TI_CameraController.<>c + 0xb8);
        lVar8 = func_0x000180315580(TI_System.Func<UnityEngine.Transform,bool>);
        FUN_1814b0170(lVar8,uVar4,MD_CameraController.__c._SetTarget_b__42_0,0);
        *(longlong *)(*(longlong *)(TI_CameraController.<>c + 0xb8) + 8) = lVar8;
        func_0x000180314690(*(longlong *)(TI_CameraController.<>c + 0xb8) + 8,lVar8);
      }
      uVar7 = TransformUtils__FindRecursive(uVar7,lVar8,0);
      *(undefined8 *)(param_1 + 0x80) = uVar7;
      func_0x000180314690(param_1 + 0x80,uVar7);
      if (*(longlong *)(param_1 + 0x80) != 0) {
        lVar8 = UnityEngine_Transform__get_position(&uStack_38,*(longlong *)(param_1 + 0x80),0);
        if (*(longlong *)(param_1 + 0x48) != 0) {
          fVar1 = *(float *)(lVar8 + 4);
          lVar8 = UnityEngine_Transform__get_position(&uStack_38,*(longlong *)(param_1 + 0x48),0);
          uVar4 = *(undefined8 *)(param_1 + 0x98);
          uVar5 = *(undefined8 *)(param_1 + 0x48);
          uVar2 = *(undefined4 *)(param_1 + 0x5c);
          uVar3 = *(undefined4 *)(param_1 + 0x40);
          *(float *)(param_1 + 0x88) = fVar1 - *(float *)(lVar8 + 4);
          uVar7 = *(undefined8 *)(param_1 + 0x54);
          lVar8 = func_0x000180315580(TI_CameraCollisionDetection);
          *(undefined4 *)(lVar8 + 0x20) = 0x40000000;
          *(undefined4 *)(lVar8 + 0x24) = 0x3f800000;
          Gear__UpdateWeaponType__1803dadf0(lVar8,0);
          *(undefined8 *)(lVar8 + 0x30) = uVar4;
          func_0x000180314690(lVar8 + 0x30,uVar4);
          *(undefined8 *)(lVar8 + 0x38) = uVar5;
          func_0x000180314690(lVar8 + 0x38,uVar5);
          *(undefined8 *)(lVar8 + 0x40) = uVar7;
          *(undefined4 *)(lVar8 + 0x48) = uVar2;
          *(undefined4 *)(lVar8 + 0x10) = uVar3;
          *(longlong *)(param_1 + 0x90) = lVar8;
          func_0x000180314690(param_1 + 0x90,lVar8);
          if (DAT_1834b2e67 == '\0') {
            FUN_180315380(TI_UnityEngine.Vector3);
            DAT_1834b2e67 = '\x01';
          }
          uVar2 = *(undefined4 *)(*(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8) + 1);
          *(undefined8 *)(param_1 + 0x20) = **(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8);
          *(undefined4 *)(param_1 + 0x28) = uVar2;
          CameraController__UpdatePosition__180572d10(param_1,0);
          lVar8 = UnityEngine_Component__get_transform(param_1,0);
          if (lVar8 != 0) {
            uStack_30 = *(undefined4 *)(param_1 + 0x3c);
            uStack_38 = *(undefined8 *)(param_1 + 0x34);
            UnityEngine_Transform__set_position(lVar8,&uStack_38,0);
            return;
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

