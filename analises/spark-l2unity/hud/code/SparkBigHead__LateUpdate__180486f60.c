// SparkBigHead__LateUpdate__180486f60 @ 0x180486f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkBigHead__LateUpdate__180486f60(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  char cVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  longlong lStack_110;
  undefined8 uStack_108;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  
  if (cRam00000001834b311d == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.Remove);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<Entity,SparkBigHead.Active>.get_Key);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<Entity,SparkBigHead.Active>.get_Value);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.GetEnumerator);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b311d = '\x01';
  }
  uStack_e8 = 0;
  puStack_e0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  fVar11 = (float)FUN_182436420(0);
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (lVar5 != 0) {
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    iVar4 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    if (0 < iVar4) {
      System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar4,0);
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_18117ccd0(&uStack_128,*(longlong *)(param_1 + 0x20),MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.GetEnumerator);
      uStack_b8 = uStack_128;
      puStack_b0 = puStack_120;
      uStack_a8 = uStack_118;
      lStack_a0 = lStack_110;
      uStack_98 = uStack_108;
      uStack_128 = 0;
      puStack_120 = &uStack_b8;
code_r0x000180487110:
      cVar10 = FUN_18133c520(&uStack_b8,MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.MoveNext);
      lVar5 = lStack_a0;
      uVar9 = uStack_a8;
      if (cVar10 != '\0') {
        if (lStack_a0 == 0) goto code_r0x0001804873dd;
        uVar6 = *(undefined8 *)(lStack_a0 + 0x10);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar10 = UnityEngine_Object__op_Equality(uVar6,0,0);
        if (cVar10 != '\0') goto code_r0x000180487283;
        if (*(char *)(lVar5 + 0x28) == '\0') {
          uVar13 = 0;
        }
        else {
          uVar13 = 0x3f800000;
        }
        uVar13 = func_0x00018043b1a0(*(undefined4 *)(lVar5 + 0x24),uVar13,fVar11 + fVar11,0);
        *(undefined4 *)(lVar5 + 0x24) = uVar13;
        lVar7 = *(longlong *)(lVar5 + 0x10);
        fVar1 = *(float *)(lVar5 + 0x18);
        fVar2 = *(float *)(lVar5 + 0x1c);
        fVar3 = *(float *)(lVar5 + 0x20);
        fVar12 = (float)func_0x0001804164d0(0,0x3f800000,*(undefined4 *)(lVar5 + 0x24));
        if (fVar12 < 0.0) {
          fVar12 = 0.0;
        }
        else if (1.0 < fVar12) {
          fVar12 = 1.0;
        }
        if (lVar7 != 0) {
          fVar12 = fVar12 + 1.0;
          fStack_f8 = fVar1 * fVar12;
          fStack_f4 = fVar2 * fVar12;
          fStack_f0 = fVar3 * fVar12;
          UnityEngine_Transform__set_localScale(lVar7,&fStack_f8);
          if ((*(char *)(lVar5 + 0x28) != '\0') || (0.0 < *(float *)(lVar5 + 0x24)))
          goto code_r0x000180487110;
          if (*(longlong *)(lVar5 + 0x10) != 0) {
            uStack_c8 = *(undefined8 *)(lVar5 + 0x18);
            uStack_c0 = *(undefined4 *)(lVar5 + 0x20);
            UnityEngine_Transform__set_localScale(*(longlong *)(lVar5 + 0x10),&uStack_c8,0);
            if (*(longlong *)(param_1 + 0x30) != 0) {
              FUN_180002eb0(*(longlong *)(param_1 + 0x30),uVar9);
              goto code_r0x000180487110;
            }
            FUN_1803155d0();
          }
          FUN_1803155d0();
        }
        FUN_1803155d0();
        goto code_r0x0001804873d8;
      }
      Gear__UpdateWeaponType__1803dadf0(&uStack_b8,MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.Dispose);
      if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_180bada40(&uStack_128,*(longlong *)(param_1 + 0x30),MR_System.Collections.Generic.List<Entity>.GetEnumerator);
        uStack_e8 = uStack_128;
        puStack_e0 = puStack_120;
        uStack_d8 = uStack_118;
        uStack_128 = 0;
        puStack_120 = &uStack_e8;
        while( true ) {
          cVar10 = FUN_1812fa7e0(&uStack_e8,MR_System.Collections.Generic.List<Entity>.MoveNext);
          if (cVar10 == '\0') {
            Gear__UpdateWeaponType__1803dadf0(&uStack_e8,MR_System.Collections.Generic.List<Entity>.Dispose);
            return;
          }
          if (*(longlong *)(param_1 + 0x20) == 0) break;
          FUN_1812639c0(*(longlong *)(param_1 + 0x20),uStack_d8,MR_System.Collections.Generic.Dictionary<Entity,SparkBigHead.Active>.Remove);
        }
code_r0x0001804873e9:
        FUN_1803155d0();
        FUN_180311490();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
code_r0x000180487283:
  if (*(char *)(lVar5 + 0x28) == '\0') {
    if (*(longlong *)(param_1 + 0x30) == 0) {
code_r0x0001804873d8:
      FUN_1803155d0();
code_r0x0001804873dd:
      FUN_1803155d0();
      FUN_180311490();
      goto code_r0x0001804873e9;
    }
    FUN_180002eb0(*(longlong *)(param_1 + 0x30),uVar9);
  }
  goto code_r0x000180487110;
}

