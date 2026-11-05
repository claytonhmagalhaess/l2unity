// CameraController__IsObjectVisible__1805722b0 @ 0x1805722b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool CameraController__IsObjectVisible__1805722b0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  code *pcVar10;
  char cVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  float *pfVar15;
  undefined8 *puVar16;
  uint uVar17;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  
  if (cRam00000001834b3900 == '\0') {
    FUN_180315380(TI_UnityEngine.Physics);
    cRam00000001834b3900 = '\x01';
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  if ((*(longlong *)(param_1 + 0x90) != 0) &&
     (lVar14 = CameraCollisionDetection__GetCameraViewPortPoints(*(longlong *)(param_1 + 0x90),0),
     lVar14 != 0)) {
    uVar17 = 0;
    while( true ) {
      if (*(int *)(lVar14 + 0x18) <= (int)uVar17) {
        return false;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar17) {
        FUN_1803155c0();
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      if (param_2 == 0) goto code_r0x00018057252b;
      uVar7 = *(undefined8 *)(lVar14 + 0x20 + (longlong)(int)uVar17 * 0xc);
      uVar8 = *(undefined4 *)(lVar14 + 0x28 + (longlong)(int)uVar17 * 0xc);
      pfVar15 = (float *)UnityEngine_Transform__get_position(auStack_98,param_2,0);
      fVar1 = *pfVar15;
      fVar2 = pfVar15[1];
      fVar3 = pfVar15[2];
      if (DAT_1834b2f30 == '\0') {
        FUN_180315380(TI_UnityEngine.Vector3);
        DAT_1834b2f30 = '\x01';
      }
      lVar9 = *(longlong *)(TI_UnityEngine.Vector3 + 0xb8);
      fVar4 = *(float *)(lVar9 + 0x18);
      fVar5 = *(float *)(lVar9 + 0x1c);
      fVar6 = *(float *)(lVar9 + 0x20);
      uVar13 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x40),0);
      if (*(int *)(TI_UnityEngine.Physics + 0xe4) == 0) {
        func_0x000180315660();
      }
      fStack_b8 = fVar1 + fVar4;
      fStack_b4 = fVar2 + fVar5;
      fStack_b0 = fVar3 + fVar6;
      uStack_a8 = uVar7;
      uStack_a0 = uVar8;
      cVar11 = UnityEngine_Physics__Linecast(&uStack_a8,&fStack_b8,&uStack_88,uVar13,0);
      if (cVar11 == '\0') break;
      uVar17 = uVar17 + 1;
    }
    lVar14 = *(longlong *)(param_1 + 0x98);
    puVar16 = (undefined8 *)UnityEngine_Transform__get_position(auStack_98,param_2,0);
    if (lVar14 != 0) {
      uStack_a8 = *puVar16;
      uStack_a0 = *(undefined4 *)(puVar16 + 1);
      pfVar15 = (float *)UnityEngine_Camera__WorldToViewportPoint(auStack_98,lVar14,&uStack_a8,0);
      if (1.0 < *pfVar15) {
        return false;
      }
      if (*pfVar15 < 0.0) {
        return false;
      }
      if (1.0 < pfVar15[1]) {
        return false;
      }
      if (pfVar15[1] < 0.0) {
        return false;
      }
      return -0.2 <= pfVar15[2];
    }
  }
code_r0x00018057252b:
  FUN_1803155d0();
  pcVar10 = (code *)swi(3);
  uVar12 = (*pcVar10)();
  return (bool)uVar12;
}

