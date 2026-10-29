// PathFinderController__OnDrawGizmos__180576340 @ 0x180576340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PathFinderController__OnDrawGizmos__180576340(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  longlong lStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  
  if (cRam00000001834b3919 == '\0') {
    FUN_180315380(TI_UnityEngine.Application);
    FUN_180315380(MR_System.Collections.Generic.List<Node>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<Node>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<Node>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<Node>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<Node>.get_Count);
    cRam00000001834b3919 = '\x01';
  }
  if (*(char *)(param_1 + 0x65) != '\0') {
    if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar6 = FUN_1823c9850(0);
    if (cVar6 != '\0') {
      if (cRam00000001834b31d0 == '\0') {
        FUN_180315380(TI_Geodata);
        cRam00000001834b31d0 = '\x01';
      }
      if (**(longlong **)(TI_Geodata + 0xb8) == 0) {
        FUN_1803155d0();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar7 = *(float *)(**(longlong **)(TI_Geodata + 0xb8) + 0x20);
      fVar8 = fVar7 - fVar7 / 10.0;
      fVar7 = fVar7 - fVar7 / 10.0;
      uStack_a8 = 0x3f6bebec3f800000;
      puStack_a0 = (undefined8 *)0x3f8000003c808081;
      UnityEngine_Gizmos__set_color(&uStack_a8,0);
      if (*(longlong *)(param_1 + 0x28) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x28);
        fVar1 = *(float *)(lVar4 + 0x28);
        fVar2 = *(float *)(lVar4 + 0x2c);
        fVar3 = *(float *)(lVar4 + 0x30);
        if (DAT_1834b2f30 == '\0') {
          FUN_180315380(TI_UnityEngine.Vector3);
          DAT_1834b2f30 = '\x01';
        }
        lVar4 = *(longlong *)(TI_UnityEngine.Vector3 + 0xb8);
        fStack_c4 = 0.1;
        fStack_b8 = *(float *)(lVar4 + 0x18) * 0.1 + fVar1;
        fStack_b4 = *(float *)(lVar4 + 0x1c) * 0.1 + fVar2;
        fStack_b0 = *(float *)(lVar4 + 0x20) * 0.1 + fVar3;
        fStack_c8 = fVar7;
        fStack_c0 = fVar8;
        UnityEngine_Gizmos__DrawCube(&fStack_b8,&fStack_c8,0);
      }
      uStack_a8 = 0x3f80000000000000;
      puStack_a0 = (undefined8 *)0x3f80000000000000;
      UnityEngine_Gizmos__set_color(&uStack_a8,0);
      if (*(longlong *)(param_1 + 0x20) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x20);
        fVar1 = *(float *)(lVar4 + 0x28);
        fVar2 = *(float *)(lVar4 + 0x2c);
        fVar3 = *(float *)(lVar4 + 0x30);
        if (DAT_1834b2f30 == '\0') {
          FUN_180315380(TI_UnityEngine.Vector3);
          DAT_1834b2f30 = '\x01';
        }
        lVar4 = *(longlong *)(TI_UnityEngine.Vector3 + 0xb8);
        fStack_b4 = 0.1;
        fStack_c8 = *(float *)(lVar4 + 0x18) * 0.1 + fVar1;
        fStack_c4 = *(float *)(lVar4 + 0x1c) * 0.1 + fVar2;
        fStack_c0 = *(float *)(lVar4 + 0x20) * 0.1 + fVar3;
        fStack_b8 = fVar7;
        fStack_b0 = fVar8;
        UnityEngine_Gizmos__DrawCube(&fStack_c8,&fStack_b8,0);
      }
      uStack_a8 = 0x3f8000003f800000;
      puStack_a0 = (undefined8 *)0x3f8000003f800000;
      UnityEngine_Gizmos__set_color(&uStack_a8,0);
      if ((*(longlong *)(param_1 + 0x48) != 0) &&
         (0 < *(int *)(*(longlong *)(param_1 + 0x48) + 0x18))) {
        FUN_180bada40(&uStack_a8,*(longlong *)(param_1 + 0x48),MR_System.Collections.Generic.List<Node>.GetEnumerator);
        uStack_88 = uStack_a8;
        uStack_80 = puStack_a0;
        lStack_78 = lStack_98;
        uStack_a8 = 0;
        puStack_a0 = &uStack_88;
        while (cVar6 = FUN_1812fa7e0(&uStack_88,MR_System.Collections.Generic.List<Node>.MoveNext), cVar6 != '\0') {
          if (lStack_78 == 0) {
            FUN_1803155d0();
            FUN_180311490();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar1 = *(float *)(lStack_78 + 0x28);
          fVar2 = *(float *)(lStack_78 + 0x2c);
          fVar3 = *(float *)(lStack_78 + 0x30);
          if (DAT_1834b2f30 == '\0') {
            FUN_180315380(TI_UnityEngine.Vector3);
            DAT_1834b2f30 = '\x01';
          }
          lVar4 = *(longlong *)(TI_UnityEngine.Vector3 + 0xb8);
          fStack_b4 = 0.1;
          fStack_c8 = *(float *)(lVar4 + 0x18) * 0.1 + fVar1;
          fStack_c4 = *(float *)(lVar4 + 0x1c) * 0.1 + fVar2;
          fStack_c0 = *(float *)(lVar4 + 0x20) * 0.1 + fVar3;
          fStack_b8 = fVar7;
          fStack_b0 = fVar8;
          UnityEngine_Gizmos__DrawCube(&fStack_c8,&fStack_b8,0);
        }
        Gear__UpdateWeaponType__1803dadf0(&uStack_88,MR_System.Collections.Generic.List<Node>.Dispose);
      }
    }
  }
  return;
}

