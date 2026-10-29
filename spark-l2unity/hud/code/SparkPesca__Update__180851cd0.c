// SparkPesca__Update__180851cd0 @ 0x180851cd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkPesca__Update__180851cd0(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ushort uVar11;
  ushort uVar12;
  float fVar13;
  undefined4 uVar14;
  longlong *plStackX_18;
  longlong lStackX_20;
  undefined8 uStack_108;
  longlong **pplStack_100;
  longlong alStack_f8 [2];
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  longlong *aplStack_98 [2];
  longlong lStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  
  if (cRam00000001834b486e == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.Remove);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.get_Current);
    FUN_180315380(TI_System.IDisposable);
    FUN_180315380(TI_System.Collections.Generic.IEnumerable<Entity>);
    FUN_180315380(TI_System.Collections.Generic.IEnumerator<Entity>);
    FUN_180315380(TI_System.Collections.IEnumerator);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<Entity,SparkPesca.Pose>.get_Key);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<Entity,SparkPesca.Pose>.get_Value);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.GetEnumerator);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkAnimacoesExtras);
    FUN_180315380(TI_SparkPesca);
    cRam00000001834b486e = '\x01';
  }
  uStack_e0 = 0;
  uStack_d8 = 0;
  lStack_d0 = 0;
  lStackX_20 = 0;
  alStack_f8[0] = 0;
  plStackX_18 = (longlong *)0x0;
  lVar10 = *(longlong *)(param_1 + 0x28);
  if (lVar10 != 0) {
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    iVar2 = *(int *)(lVar10 + 0x18);
    *(undefined4 *)(lVar10 + 0x18) = 0;
    if (0 < iVar2) {
      System_Array__Clear(*(undefined8 *)(lVar10 + 0x10),0,iVar2,0);
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_18117ccd0(&uStack_c8,*(longlong *)(param_1 + 0x20),MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.GetEnumerator);
      lStack_88 = lStack_b8;
      lStack_80 = lStack_b0;
      uStack_78 = uStack_a8;
      uStack_108 = 0;
      pplStack_100 = aplStack_98;
code_r0x000180851ec0:
      while (cVar5 = FUN_18133c520(aplStack_98,MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.MoveNext), lVar4 = lStack_80,
            lVar10 = lStack_88, cVar5 != '\0') {
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Equality(lVar10,0,0);
        if (cVar5 == '\0') {
          if (lVar10 == 0) goto code_r0x0001808527de;
          if (*(longlong *)(lVar10 + 0x38) == 0) goto code_r0x0001808527d9;
          if (*(char *)(*(longlong *)(lVar10 + 0x38) + 0x18) != '\0') goto code_r0x0001808520cc;
          if (lVar4 == 0) goto code_r0x0001808527d4;
          if (*(char *)(lVar4 + 0x10) == '\0') goto code_r0x000180851f99;
          if (*(char *)(lVar10 + 0x53) != '\0') {
            *(undefined1 *)(lVar4 + 0x11) = 1;
          }
          if ((((*(char *)(lVar4 + 0x10) == '\0') || (*(char *)(lVar4 + 0x58) != '\0')) ||
              (*(char *)(lVar10 + 0x53) != '\0')) ||
             ((*(char *)(lVar4 + 0x11) == '\0' &&
              (fVar13 = (float)FUN_182436650(0), fVar13 - *(float *)(lVar4 + 0x14) <= 3.0))))
          goto code_r0x000180851f99;
          if (*(longlong *)(param_1 + 0x28) == 0) {
            FUN_1803155d0();
            goto code_r0x0001808527bb;
          }
          FUN_180002eb0(*(longlong *)(param_1 + 0x28),lVar10);
        }
        else {
code_r0x0001808520cc:
          if (*(longlong *)(param_1 + 0x28) == 0) goto code_r0x0001808527e3;
          FUN_180002eb0(*(longlong *)(param_1 + 0x28),lVar10);
        }
      }
      Gear__UpdateWeaponType__1803dadf0(aplStack_98,MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.Dispose);
      if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_180bada40(&uStack_c8,*(longlong *)(param_1 + 0x28),MR_System.Collections.Generic.List<Entity>.GetEnumerator);
        uStack_e0 = CONCAT44(uStack_c4,uStack_c8);
        uStack_d8 = CONCAT44(uStack_bc,uStack_c0);
        lStack_d0 = lStack_b8;
        alStack_f8[1] = 0;
        puStack_e8 = &uStack_e0;
code_r0x000180852180:
        do {
          cVar5 = FUN_1812fa7e0(&uStack_e0,MR_System.Collections.Generic.List<Entity>.MoveNext);
          lVar10 = lStack_d0;
          if (cVar5 == '\0') goto code_r0x0001808523c5;
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar5 = UnityEngine_Object__op_Equality(lVar10,0);
          if (cVar5 == '\0') {
            if (lVar10 == 0) goto code_r0x00018085281c;
            if (*(longlong *)(lVar10 + 0x38) == 0) goto code_r0x000180852817;
            if (*(char *)(*(longlong *)(lVar10 + 0x38) + 0x18) == '\0') {
              if (*(longlong *)(param_1 + 0x20) == 0) goto code_r0x0001808527f4;
              cVar5 = FUN_1812698d0(*(longlong *)(param_1 + 0x20),lVar10,&lStackX_20,
                                    MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.TryGetValue);
              if (cVar5 != '\0') {
                if (lStackX_20 == 0) goto code_r0x0001808527ef;
                if ((*(char *)(lStackX_20 + 0x10) != '\0') && (*(char *)(lStackX_20 + 0x58) == '\0')
                   ) {
                  SparkPesca__Termina(param_1,lVar10,lStackX_20,7,0);
                  goto code_r0x000180852180;
                }
              }
            }
            if (*(longlong *)(lVar10 + 0x38) == 0) goto code_r0x000180852812;
            if (*(char *)(*(longlong *)(lVar10 + 0x38) + 0x18) == '\0') {
              SparkPesca__Solta__1808513c0(param_1,lVar10);
            }
            else {
              if (*(longlong *)(param_1 + 0x20) == 0) goto code_r0x00018085280d;
              cVar5 = FUN_1812698d0(*(longlong *)(param_1 + 0x20),lVar10,alStack_f8,
                                    MR_System.Collections.Generic.Dictionary<Entity,SparkPesca.Pose>.TryGetValue);
              lVar4 = alStack_f8[0];
              if (cVar5 != '\0') {
                if (*(int *)(TI_SparkPesca + 0xe4) == 0) {
                  func_0x000180315660();
                }
                if (cRam00000001834b486a == '\0') {
                  FUN_180315380(TI_UnityEngine.Object);
                  cRam00000001834b486a = '\x01';
                }
                if (lVar4 != 0) {
                  uVar7 = *(undefined8 *)(lVar4 + 0x18);
                  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  cVar5 = UnityEngine_Object__op_Equality(uVar7,0,0);
                  if (cVar5 == '\0') {
                    if (*(longlong *)(lVar4 + 0x18) == 0) goto code_r0x0001808527fe;
                    uStack_108 = *(undefined8 *)(lVar4 + 0x2c);
                    pplStack_100 = (longlong **)
                                   CONCAT44(pplStack_100._4_4_,*(undefined4 *)(lVar4 + 0x34));
                    UnityEngine_Transform__set_localPosition
                              (*(longlong *)(lVar4 + 0x18),&uStack_108,0);
                    if (*(longlong *)(lVar4 + 0x18) == 0) goto code_r0x0001808527f9;
                    uStack_c8 = *(undefined4 *)(lVar4 + 0x48);
                    uStack_c4 = *(undefined4 *)(lVar4 + 0x4c);
                    uStack_c0 = *(undefined4 *)(lVar4 + 0x50);
                    uStack_bc = *(undefined4 *)(lVar4 + 0x54);
                    UnityEngine_Transform__set_localRotation
                              (*(longlong *)(lVar4 + 0x18),&uStack_c8,0);
                    *(undefined8 *)(lVar4 + 0x18) = 0;
                    func_0x000180314690(lVar4 + 0x18,0);
                  }
                }
              }
              if (*(longlong *)(param_1 + 0x20) == 0) goto code_r0x000180852808;
              FUN_1812639c0(*(longlong *)(param_1 + 0x20),lVar10);
              if (*(longlong *)(lVar10 + 0x20) == 0) goto code_r0x000180852803;
              lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x20) + 0x38);
              if (lVar10 != 0) {
                NewBaseAnimationController__TocaPose(lVar10,0,0x3f800000,0);
              }
            }
            goto code_r0x000180852180;
          }
          if (*(longlong *)(param_1 + 0x20) == 0) goto code_r0x000180852821;
          FUN_1812639c0(*(longlong *)(param_1 + 0x20),lVar10);
        } while( true );
      }
    }
  }
code_r0x000180852843:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
code_r0x000180851f99:
  if ((0.0 < *(float *)(lVar4 + 0x60)) &&
     (fVar13 = (float)FUN_182436650(0), *(float *)(lVar4 + 0x60) <= fVar13)) {
    if (*(char *)(lVar4 + 0x58) == '\0') {
      uVar1 = *(undefined1 *)(lVar10 + 0x51);
      if (*(int *)(TI_SparkAnimacoesExtras + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar6 = SparkAnimacoesExtras__Da(uVar1,0);
      *(undefined4 *)(lVar4 + 0x60) = 0;
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar5 = UnityEngine_Object__op_Inequality(lVar6,0);
      if (cVar5 == '\0') goto code_r0x000180851ec0;
      if (*(longlong *)(lVar10 + 0x20) != 0) {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0x38);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Inequality(uVar7,0);
        if (cVar5 == '\0') goto code_r0x000180851ec0;
        if (*(longlong *)(lVar10 + 0x20) != 0) {
          if (lVar6 != 0) {
            lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x20) + 0x38);
            uVar7 = SparkAnimacoesExtras__Clipe(lVar6,*(undefined4 *)(lVar4 + 0x5c));
            uVar14 = SparkAnimacoesExtras__Velocidade(lVar6,*(undefined4 *)(lVar4 + 0x5c));
            if (lVar10 != 0) {
              NewBaseAnimationController__TocaPose(lVar10,uVar7,uVar14,0);
              goto code_r0x000180851ec0;
            }
code_r0x0001808527bb:
            FUN_1803155d0();
          }
          FUN_1803155d0();
        }
        FUN_1803155d0();
      }
      FUN_1803155d0();
    }
    else if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_180002eb0(*(longlong *)(param_1 + 0x28),lVar10);
      goto code_r0x000180851ec0;
    }
    FUN_1803155d0();
code_r0x0001808527d4:
    FUN_1803155d0();
code_r0x0001808527d9:
    FUN_1803155d0();
code_r0x0001808527de:
    FUN_1803155d0();
code_r0x0001808527e3:
    FUN_1803155d0();
    FUN_180311490();
    goto code_r0x0001808527ef;
  }
  goto code_r0x000180851ec0;
code_r0x0001808527ef:
  FUN_1803155d0();
code_r0x0001808527f4:
  FUN_1803155d0();
code_r0x0001808527f9:
  FUN_1803155d0();
code_r0x0001808527fe:
  FUN_1803155d0();
code_r0x000180852803:
  FUN_1803155d0();
code_r0x000180852808:
  FUN_1803155d0();
code_r0x00018085280d:
  FUN_1803155d0();
code_r0x000180852812:
  FUN_1803155d0();
code_r0x000180852817:
  FUN_1803155d0();
code_r0x00018085281c:
  FUN_1803155d0();
code_r0x000180852821:
  FUN_1803155d0();
  FUN_180311490();
code_r0x00018085282d:
  FUN_1803155d0();
code_r0x000180852832:
  FUN_1803155d0();
code_r0x000180852837:
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
code_r0x0001808523c5:
  Gear__UpdateWeaponType__1803dadf0(&uStack_e0,MR_System.Collections.Generic.List<Entity>.Dispose);
  fVar13 = (float)FUN_1824366b0(0);
  if (*(float *)(param_1 + 0x30) <= fVar13) {
    fVar13 = (float)FUN_1824366b0(0);
    *(float *)(param_1 + 0x30) = fVar13 + 0.25;
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    uVar7 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar5 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if (cVar5 != '\0') {
      if (DAT_1834b2f32 == '\0') {
        FUN_180315380(TI_PlayerEntity);
        DAT_1834b2f32 = '\x01';
      }
      SparkPesca__Confere(param_1,**(undefined8 **)(TI_PlayerEntity + 0xb8),0);
    }
    if (cRam00000001834b31bd == '\0') {
      FUN_180315380(TI_WorldSpawner);
      cRam00000001834b31bd = '\x01';
    }
    uVar7 = **(undefined8 **)(TI_WorldSpawner + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar5 = UnityEngine_Object__op_Equality(uVar7,0,0);
    if (cVar5 == '\0') {
      if (cRam00000001834b31bd == '\0') {
        FUN_180315380(TI_WorldSpawner);
        cRam00000001834b31bd = '\x01';
      }
      if ((**(longlong **)(TI_WorldSpawner + 0xb8) != 0) &&
         (plVar8 = (longlong *)
                   WorldSpawner__get_Entidades(**(longlong **)(TI_WorldSpawner + 0xb8),0),
         plVar8 != (longlong *)0x0)) {
        lVar10 = *plVar8;
        uVar12 = 0;
        if (*(ushort *)(lVar10 + 0x12e) != 0) {
          uVar11 = uVar12;
          do {
            if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                TI_System.Collections.Generic.IEnumerable<Entity>) {
              puVar9 = (undefined8 *)
                       ((longlong)
                        *(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) * 0x10
                        + 0x138 + lVar10);
              goto code_r0x0001808525a6;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(ushort *)(lVar10 + 0x12e));
        }
        puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_System.Collections.Generic.IEnumerable<Entity>,0);
code_r0x0001808525a6:
        plStackX_18 = (longlong *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        uStack_108 = 0;
        pplStack_100 = &plStackX_18;
        while (plVar8 = plStackX_18, plStackX_18 != (longlong *)0x0) {
          lVar10 = *plStackX_18;
          if (*(ushort *)(lVar10 + 0x12e) != 0) {
            uVar11 = uVar12;
            do {
              if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                  TI_System.Collections.IEnumerator) {
                puVar9 = (undefined8 *)
                         ((longlong)
                          *(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) *
                          0x10 + 0x138 + lVar10);
                goto code_r0x000180852636;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(ushort *)(lVar10 + 0x12e));
          }
          puVar9 = (undefined8 *)FUN_180312860(plStackX_18,TI_System.Collections.IEnumerator,0);
code_r0x000180852636:
          cVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          plVar8 = plStackX_18;
          if (cVar5 == '\0') {
            FUN_1803fb400(&pplStack_100);
            return;
          }
          if (plStackX_18 == (longlong *)0x0) goto code_r0x000180852832;
          lVar10 = *plStackX_18;
          if (*(ushort *)(lVar10 + 0x12e) != 0) {
            uVar11 = uVar12;
            do {
              if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                  TI_System.Collections.Generic.IEnumerator<Entity>) {
                puVar9 = (undefined8 *)
                         ((longlong)
                          *(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) *
                          0x10 + 0x138 + lVar10);
                goto code_r0x0001808526a6;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(ushort *)(lVar10 + 0x12e));
          }
          puVar9 = (undefined8 *)FUN_180312860(plStackX_18,TI_System.Collections.Generic.IEnumerator<Entity>,0);
code_r0x0001808526a6:
          lVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar5 = UnityEngine_Object__op_Equality(lVar10,0);
          if (cVar5 == '\0') {
            if (lVar10 == 0) goto code_r0x00018085282d;
            if ((*(longlong *)(lVar10 + 0x30) != 0) &&
               ((*(int *)(*(longlong *)(lVar10 + 0x30) + 0x10) == 1 ||
                (*(int *)(*(longlong *)(lVar10 + 0x30) + 0x10) == 0)))) {
              SparkPesca__Confere(param_1,lVar10);
            }
          }
        }
        goto code_r0x000180852837;
      }
      goto code_r0x000180852843;
    }
  }
  return;
}

