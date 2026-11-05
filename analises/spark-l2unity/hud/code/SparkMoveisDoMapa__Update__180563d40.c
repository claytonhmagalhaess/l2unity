// SparkMoveisDoMapa__Update__180563d40 @ 0x180563d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMoveisDoMapa__Update__180563d40(longlong param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  code *pcVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  float *pfVar14;
  undefined4 *puVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong lStack_128;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong lStack_108;
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong lStack_e0;
  
  if (cRam00000001834b3894 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>>.get_Values);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>.GetEnumerator);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkMoveisDoMapa);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>>.GetEnumerator);
    cRam00000001834b3894 = '\x01';
  }
  uStack_158 = 0;
  uStack_150 = 0;
  lStack_148 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar12 = func_0x000181183c40(*(longlong *)(param_1 + 0x20),MR_System.Collections.Generic.Dictionary<string,System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>>.get_Count);
    if (iVar12 == 0) {
      return;
    }
    fVar18 = (float)FUN_1824366b0(0);
    bVar9 = fVar18 < *(float *)(param_1 + 0x28);
    if (DAT_1834b2e67 == '\0') {
      FUN_180315380(TI_UnityEngine.Vector3);
      DAT_1834b2e67 = '\x01';
    }
    if (bVar9) {
      pfVar14 = *(float **)(TI_UnityEngine.Vector3 + 0xb8);
    }
    else {
      fVar18 = (float)FUN_1824366b0(0);
      *(float *)(param_1 + 0x28) = fVar18 + 0.5;
      lVar13 = UnityEngine_Camera__get_main(0);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar11 = UnityEngine_Object__op_Equality(lVar13,0,0);
      if (cVar11 != '\0') {
        return;
      }
      if ((lVar13 == 0) || (lVar13 = UnityEngine_Component__get_transform(lVar13,0), lVar13 == 0))
      goto code_r0x0001805643a8;
      pfVar14 = (float *)UnityEngine_Transform__get_position(auStack_100,lVar13,0);
    }
    fVar18 = pfVar14[2];
    fVar1 = pfVar14[1];
    fVar2 = *pfVar14;
    uVar19 = FUN_182436650(0);
    if ((*(longlong *)(param_1 + 0x20) != 0) &&
       (lVar13 = FUN_18117fd20(*(longlong *)(param_1 + 0x20),MR_System.Collections.Generic.Dictionary<string,System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>>.get_Values), lVar13 != 0)) {
      FUN_180fbde10(&uStack_f0,lVar13,MR_System.Collections.Generic.Dictionary<string,System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>>.GetEnumerator);
      uStack_118 = uStack_f0;
      uStack_114 = uStack_ec;
      uStack_110 = uStack_e8;
      uStack_10c = uStack_e4;
      lStack_108 = lStack_e0;
      do {
        cVar11 = FUN_1813194f0(&uStack_118,MR_System.Collections.Generic.Dictionary<string,System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>>.MoveNext);
        if (cVar11 == '\0') {
          Gear__UpdateWeaponType__1803dadf0(&uStack_118,MR_System.Collections.Generic.Dictionary<string,System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>>.Dispose);
          return;
        }
        if (lStack_108 == 0) {
code_r0x00018056439c:
          FUN_1803155d0();
          FUN_180311490();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FUN_180bada40(&uStack_138,lStack_108,MR_System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>.GetEnumerator);
        uStack_158 = CONCAT44(uStack_134,uStack_138);
        uStack_150 = CONCAT44(uStack_12c,uStack_130);
        lStack_148 = lStack_128;
code_r0x000180564070:
        cVar11 = FUN_1812fa7e0(&uStack_158,MR_System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>.MoveNext);
        lVar13 = lStack_148;
        if (cVar11 != '\0') {
          if (lStack_148 != 0) goto code_r0x000180564097;
          goto code_r0x000180564391;
        }
        Gear__UpdateWeaponType__1803dadf0(&uStack_158,MR_System.Collections.Generic.List<SparkMoveisDoMapa.Vivo>.Dispose);
      } while( true );
    }
  }
code_r0x0001805643a8:
  FUN_1803155d0();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
code_r0x000180564097:
  uVar5 = *(undefined8 *)(lStack_148 + 0x10);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar11 = UnityEngine_Object__op_Equality(uVar5,0,0);
  if (cVar11 != '\0') goto code_r0x000180564070;
  if (bVar9) {
code_r0x00018056412d:
    if (*(char *)(lVar13 + 0x38) == '\0') goto code_r0x000180564070;
    if (*(longlong *)(lVar13 + 0x18) == 0) goto code_r0x00018056438c;
    lVar6 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x30);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) == 0) {
        FUN_1803155c0();
        goto code_r0x00018056435f;
      }
      if (*(longlong *)(lVar13 + 0x18) != 0) {
        lVar7 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x30);
        if (lVar7 != 0) {
          if (*(uint *)(lVar7 + 0x18) < 2) goto code_r0x000180564364;
          if (*(longlong *)(lVar13 + 0x18) != 0) {
            lVar8 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x30);
            if (lVar8 != 0) {
              if (*(uint *)(lVar8 + 0x18) < 3) goto code_r0x000180564369;
              iVar12 = *(int *)(lVar6 + 0x20);
              iVar3 = *(int *)(lVar7 + 0x24);
              iVar4 = *(int *)(lVar8 + 0x28);
              if (*(int *)(TI_SparkMoveisDoMapa + 0xe4) == 0) {
                func_0x000180315660();
              }
              fVar22 = (float)SparkMoveisDoMapa__Balanco(lVar13,0,uVar19,0);
              fVar20 = (float)SparkMoveisDoMapa__Balanco(lVar13,1,uVar19);
              fVar21 = (float)SparkMoveisDoMapa__Balanco(lVar13,2,uVar19);
              lVar13 = *(longlong *)(lVar13 + 0x10);
              puVar15 = (undefined4 *)
                        SparkMoveisDoMapa__GiroUE
                                  (&uStack_f0,(float)iVar12 + fVar22,(float)iVar3 + fVar20,
                                   (float)iVar4 + fVar21,0);
              if (lVar13 != 0) {
                uStack_138 = *puVar15;
                uStack_134 = puVar15[1];
                uStack_130 = puVar15[2];
                uStack_12c = puVar15[3];
                UnityEngine_Transform__set_rotation(lVar13,&uStack_138);
                goto code_r0x000180564070;
              }
              goto code_r0x00018056436e;
            }
            goto code_r0x000180564373;
          }
          goto code_r0x000180564378;
        }
        goto code_r0x00018056437d;
      }
      goto code_r0x000180564382;
    }
  }
  else {
    if (*(longlong *)(lVar13 + 0x10) != 0) {
      pfVar14 = (float *)UnityEngine_Transform__get_position(auStack_100);
      fVar22 = (*pfVar14 - fVar2) * (*pfVar14 - fVar2) + (pfVar14[1] - fVar1) * (pfVar14[1] - fVar1)
               + (pfVar14[2] - fVar18) * (pfVar14[2] - fVar18);
      if (*(char *)(lVar13 + 0x38) == '\0') {
        bVar17 = fVar22 == 6400.0;
        bVar16 = 6400.0 < fVar22;
      }
      else {
        bVar17 = fVar22 == 8100.0;
        bVar16 = 8100.0 < fVar22;
      }
      *(bool *)(lVar13 + 0x38) = !bVar16 && !bVar17;
      goto code_r0x00018056412d;
    }
code_r0x00018056435f:
    FUN_1803155d0();
code_r0x000180564364:
    FUN_1803155c0();
code_r0x000180564369:
    FUN_1803155c0();
code_r0x00018056436e:
    FUN_1803155d0();
code_r0x000180564373:
    FUN_1803155d0();
code_r0x000180564378:
    FUN_1803155d0();
code_r0x00018056437d:
    FUN_1803155d0();
code_r0x000180564382:
    FUN_1803155d0();
  }
  FUN_1803155d0();
code_r0x00018056438c:
  FUN_1803155d0();
code_r0x000180564391:
  FUN_1803155d0();
  FUN_180311490();
  goto code_r0x00018056439c;
}

