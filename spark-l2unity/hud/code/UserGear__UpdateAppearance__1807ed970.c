// UserGear__UpdateAppearance__1807ed970 @ 0x1807ed970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UserGear__UpdateAppearance__1807ed970(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined *puStack_30;
  
  if (cRam00000001834b46ab == '\0') {
    FUN_180315380(TI_UnityEngine.GameObject__);
    FUN_180315380(TI_ModelTable);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_PlayerAppearance);
    FUN_180315380(LIT_"'Hair'");
    cRam00000001834b46ab = '\x01';
  }
  if (cRam00000001834b4697 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_ParticleManager);
    cRam00000001834b4697 = '\x01';
  }
  if (param_2 != (longlong *)0x0) {
    cVar5 = Appearance__ShouldUpdateWeapons(param_2,param_3,0);
    if (cVar5 != '\0') {
      cVar5 = func_0x0001807b69a0(param_2,param_3,0);
      if (cVar5 != '\0') {
        if (param_3 == (longlong *)0x0) goto code_r0x0001807ee2b1;
        *(int *)(param_2 + 2) = (int)param_3[2];
        *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)param_3 + 0x14);
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
      uVar11 = **(undefined8 **)(TI_ParticleManager + 0xb8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if (cVar5 != '\0') {
        lVar7 = param_1[4];
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Inequality(lVar7,0,0);
        if (cVar5 != '\0') {
          if (*(int *)(TI_ParticleManager + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar7 = FUN_1804792f0(0);
          if ((param_1[4] == 0) || (lVar7 == 0)) goto code_r0x0001807ee2b1;
          ParticleManager__ArmaTrocada(lVar7,*(undefined8 *)(param_1[4] + 0x20),0);
        }
      }
    }
    plVar14 = (longlong *)0x0;
    if (param_3 != (longlong *)0x0) {
      if ((*(byte *)(*param_3 + 0x130) < *(byte *)(TI_PlayerAppearance + 0x130)) ||
         (plVar14 = param_3,
         *(longlong *)
          (*(longlong *)(*param_3 + 200) + -8 +
          (ulonglong)*(byte *)(TI_PlayerAppearance + 0x130) * 8) != TI_PlayerAppearance)) {
        FUN_1803146d0(param_3);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    plVar8 = (longlong *)func_0x000180315580(TI_PlayerAppearance);
    SparkMapaWindow_Loja___ctor__1803f01b0(plVar8,0);
    if ((char)param_1[0x21] == '\0') {
      lVar7 = func_0x000180314710(TI_UnityEngine.GameObject__,3);
      param_1[0x1f] = lVar7;
      func_0x000180314690(param_1 + 0x1f,lVar7);
      param_2 = plVar8;
    }
    else if ((*(byte *)(*param_2 + 0x130) < *(byte *)(TI_PlayerAppearance + 0x130)) ||
            (*(longlong *)
              (*(longlong *)(*param_2 + 200) + -8 +
              (ulonglong)*(byte *)(TI_PlayerAppearance + 0x130) * 8) != TI_PlayerAppearance)) {
      FUN_1803146d0(param_2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((param_1[4] != 0) && (lVar7 = *(longlong *)(param_1[4] + 0x20), lVar7 != 0)) &&
       (param_2 != (longlong *)0x0)) {
      uVar2 = *(undefined1 *)(lVar7 + 0x51);
      cVar5 = PlayerAppearance__ShouldUpdateHair(param_2,plVar14,0);
      if ((cVar5 != '\0') || ((char)param_1[0x21] == '\0')) {
        if (*(int *)(TI_ModelTable + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar7 = ModelTable__get_Instance(0);
        if ((plVar14 == (longlong *)0x0) || (lVar7 == 0)) goto code_r0x0001807ee2b1;
        lVar7 = ModelTable__GetHair(lVar7,uVar2,*(undefined1 *)((longlong)plVar14 + 0x2b),
                                    *(undefined1 *)((longlong)plVar14 + 0x2c),0,0);
        lVar9 = ModelTable__get_Instance(0);
        if (lVar9 == 0) goto code_r0x0001807ee2b1;
        lVar10 = ModelTable__GetHair(lVar9,uVar2,*(undefined1 *)((longlong)plVar14 + 0x2b),
                                     *(undefined1 *)((longlong)plVar14 + 0x2c),1,0);
        lVar9 = param_1[0x1f];
        if (lVar9 == 0) goto code_r0x0001807ee2b1;
        if (*(int *)(lVar9 + 0x18) == 0) {
code_r0x0001807ee2c0:
          FUN_1803155c0();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = *(undefined8 *)(lVar9 + 0x20);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if (cVar5 != '\0') {
          lVar9 = param_1[0x1f];
          if (lVar9 == 0) goto code_r0x0001807ee2b1;
          if (*(int *)(lVar9 + 0x18) == 0) goto code_r0x0001807ee2c0;
          uVar11 = *(undefined8 *)(lVar9 + 0x20);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          UnityEngine_Object__Destroy(uVar11,0);
        }
        lVar9 = param_1[0x1f];
        if (lVar9 == 0) goto code_r0x0001807ee2b1;
        if (*(uint *)(lVar9 + 0x18) < 2) goto code_r0x0001807ee2c0;
        uVar11 = *(undefined8 *)(lVar9 + 0x28);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
        if (cVar5 != '\0') {
          lVar9 = param_1[0x1f];
          if (lVar9 == 0) goto code_r0x0001807ee2b1;
          if (*(uint *)(lVar9 + 0x18) < 2) goto code_r0x0001807ee2c0;
          uVar11 = *(undefined8 *)(lVar9 + 0x28);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          UnityEngine_Object__Destroy(uVar11,0);
        }
        lVar9 = param_1[0x1f];
        if (lVar9 == 0) goto code_r0x0001807ee2b1;
        if (*(int *)(lVar9 + 0x18) == 0) goto code_r0x0001807ee2c0;
        *(longlong *)(lVar9 + 0x20) = lVar7;
        func_0x000180314690(lVar9 + 0x20,lVar7);
        lVar9 = param_1[0x1f];
        if (lVar9 == 0) goto code_r0x0001807ee2b1;
        if (*(uint *)(lVar9 + 0x18) < 2) goto code_r0x0001807ee2c0;
        *(longlong *)(lVar9 + 0x28) = lVar10;
        func_0x000180314690(lVar9 + 0x28,lVar10);
        if (lVar7 != 0) {
          lVar7 = UnityEngine_GameObject__get_transform(lVar7,0);
          if ((param_1[0x13] == 0) ||
             (uVar11 = UnityEngine_GameObject__get_transform(param_1[0x13],0), lVar7 == 0))
          goto code_r0x0001807ee2b1;
          UnityEngine_Transform__SetParent(lVar7,uVar11,0,0);
        }
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Inequality(lVar10,0,0);
        if (cVar5 != '\0') {
          if (lVar10 == 0) goto code_r0x0001807ee2b1;
          cVar5 = func_0x000182425a90(lVar10,LIT_"'Hair'",0);
          if (cVar5 == '\0') {
            lVar7 = UnityEngine_GameObject__get_transform(lVar10,0);
            if ((param_1[0x13] == 0) ||
               (uVar11 = UnityEngine_GameObject__get_transform(param_1[0x13],0), lVar7 == 0))
            goto code_r0x0001807ee2b1;
            UnityEngine_Transform__SetParent(lVar7,uVar11,0,0);
          }
          else {
            lVar7 = UnityEngine_GameObject__get_transform(lVar10,0);
            if (lVar7 == 0) goto code_r0x0001807ee2b1;
            puVar12 = (undefined8 *)UnityEngine_Transform__get_localPosition(&uStack_58,lVar7,0);
            uVar11 = *puVar12;
            uVar6 = *(undefined4 *)(puVar12 + 1);
            lVar7 = UnityEngine_GameObject__get_transform(lVar10,0);
            if (lVar7 == 0) goto code_r0x0001807ee2b1;
            puVar12 = (undefined8 *)UnityEngine_Transform__get_eulerAngles(&uStack_58,lVar7,0);
            uVar1 = *puVar12;
            uVar3 = *(undefined4 *)(puVar12 + 1);
            lVar7 = UnityEngine_GameObject__get_transform(lVar10,0);
            if ((param_1[0x1e] == 0) ||
               (uVar13 = UnityEngine_GameObject__get_transform(param_1[0x1e],0), lVar7 == 0))
            goto code_r0x0001807ee2b1;
            UnityEngine_Transform__SetParent(lVar7,uVar13,0);
            lVar7 = UnityEngine_GameObject__get_transform(lVar10,0);
            if (lVar7 == 0) goto code_r0x0001807ee2b1;
            uStack_58 = uVar11;
            uStack_50 = uVar6;
            UnityEngine_Transform__set_localPosition(lVar7,&uStack_58,0);
            lVar7 = UnityEngine_GameObject__get_transform(lVar10,0);
            if (lVar7 == 0) goto code_r0x0001807ee2b1;
            uStack_58 = uVar1;
            uStack_50 = uVar3;
            UnityEngine_Transform__set_localEulerAngles(lVar7,&uStack_58,0);
          }
        }
      }
      cVar5 = PlayerAppearance__ShouldUpdateFace(param_2,plVar14,0);
      if ((cVar5 != '\0') || ((char)param_1[0x21] == '\0')) {
        lVar7 = param_1[0x20];
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Inequality(lVar7,0,0);
        if (cVar5 != '\0') {
          lVar7 = param_1[0x20];
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          UnityEngine_Object__Destroy(lVar7,0);
        }
        if (*(int *)(TI_ModelTable + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar7 = ModelTable__get_Instance(0);
        if ((plVar14 == (longlong *)0x0) || (lVar7 == 0)) goto code_r0x0001807ee2b1;
        lVar7 = ModelTable__GetFace(lVar7,uVar2,*(undefined1 *)((longlong)plVar14 + 0x2a),0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Inequality(lVar7,0,0);
        if (cVar5 != '\0') {
          param_1[0x20] = lVar7;
          func_0x000180314690(param_1 + 0x20,lVar7);
          if (param_1[0x20] == 0) goto code_r0x0001807ee2b1;
          lVar7 = UnityEngine_GameObject__get_transform(param_1[0x20],0);
          if ((param_1[0x13] == 0) ||
             (uVar11 = UnityEngine_GameObject__get_transform(param_1[0x13],0), lVar7 == 0))
          goto code_r0x0001807ee2b1;
          UnityEngine_Transform__SetParent(lVar7,uVar11,0,0);
          if (param_1[0x20] == 0) goto code_r0x0001807ee2b1;
          lVar7 = UnityEngine_GameObject__get_transform(param_1[0x20],0);
          if (DAT_1834b2f37 == '\0') {
            FUN_180315380(TI_UnityEngine.Vector3);
            DAT_1834b2f37 = '\x01';
          }
          if (lVar7 == 0) goto code_r0x0001807ee2b1;
          uStack_58 = *(undefined8 *)(*(longlong *)(TI_UnityEngine.Vector3 + 0xb8) + 0xc);
          uStack_50 = *(undefined4 *)(*(longlong *)(TI_UnityEngine.Vector3 + 0xb8) + 0x14);
          UnityEngine_Transform__set_localScale(lVar7,&uStack_58,0);
          if (param_1[0x20] == 0) goto code_r0x0001807ee2b1;
          lVar7 = UnityEngine_GameObject__get_transform(param_1[0x20],0);
          if (DAT_1834b2e67 == '\0') {
            FUN_180315380(TI_UnityEngine.Vector3);
            DAT_1834b2e67 = '\x01';
          }
          if (lVar7 == 0) goto code_r0x0001807ee2b1;
          uStack_58 = **(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8);
          uStack_50 = *(undefined4 *)(*(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8) + 1);
          UnityEngine_Transform__set_localPosition(lVar7,&uStack_58,0);
        }
      }
      cVar5 = PlayerAppearance__ShouldUpdateArmors(param_2,plVar14,0);
      if ((cVar5 != '\0') || ((char)param_1[0x21] == '\0')) {
        (**(code **)(*param_1 + 0x1e8))(param_1,plVar14,*(undefined8 *)(*param_1 + 0x1f0));
      }
      UserGear__VesteAcessorios(param_1,plVar14,0);
      UserGear__AplicaCabelo(param_1,plVar14,0);
      lVar7 = param_1[0x12];
      *(undefined1 *)(param_1 + 0x21) = 1;
      if (lVar7 != 0) {
        if (cRam00000001834b2f4e == '\0') {
          puStack_30 = &UNK_180445c6e;
          FUN_180315380(TI_UnityEngine.Application);
          puStack_30 = &UNK_180445c7a;
          FUN_180315380(TI_SparkMalhaUnica);
          puStack_30 = &UNK_180445c86;
          FUN_180315380(TI_SparkMultidao);
          cRam00000001834b2f4e = '\x01';
        }
        puStack_30 = &UNK_180445c97;
        lVar9 = UnityEngine_Component__get_gameObject(lVar7,0);
        if (lVar9 == 0) {
code_r0x000180445dd7:
          puStack_30 = &UNK_180445ddc;
          FUN_1803155d0();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puStack_30 = &UNK_180445caa;
        cVar5 = UnityEngine_GameObject__get_activeSelf(lVar9,0);
        if (cVar5 != '\0') {
          puStack_30 = &UNK_180445cbc;
          lVar9 = UnityEngine_Component__get_gameObject(lVar7,0);
          if (lVar9 == 0) goto code_r0x000180445dd7;
          puStack_30 = &UNK_180445ccf;
          cVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar9,0);
          if (cVar5 != '\0') {
            if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
              puStack_30 = &UNK_180445cf1;
              func_0x000180315660();
            }
            puStack_30 = &UNK_180445cf8;
            cVar5 = FUN_1823c9850(0);
            if (cVar5 != '\0') {
              if (*(int *)(TI_SparkMultidao + 0xe4) == 0) {
                puStack_30 = &UNK_180445d11;
                func_0x000180315660();
              }
              puStack_30 = &UNK_180445d1b;
              SparkMultidao__AoMudarPecas(lVar7,0);
              *(undefined1 *)(lVar7 + 0x48) = 1;
              puStack_30 = &UNK_180445d26;
              uVar6 = FUN_1824364b0(0);
              *(undefined4 *)(lVar7 + 0x4c) = uVar6;
            }
            puStack_30 = &UNK_180445d33;
            SkinnedMeshSync__AchaReferencias(lVar7,0);
            if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
              puStack_30 = &UNK_180445d48;
              func_0x000180315660();
            }
            puStack_30 = &UNK_180445d4f;
            cVar5 = FUN_1823c9850(0);
            if (cVar5 != '\0') {
              if (*(int *)(TI_SparkMalhaUnica + 0xe4) == 0) {
                puStack_30 = &UNK_180445d68;
                func_0x000180315660();
              }
              puStack_30 = &UNK_180445d72;
              SparkMalhaUnica__AntesDeSincronizar(lVar7,0);
            }
            if (cRam00000001834b2f50 == '\0') {
              puStack_30 = &UNK_180445d87;
              FUN_180315380(TI_SkinnedMeshSync.<SyncTask>d__22);
              cRam00000001834b2f50 = '\x01';
            }
            puStack_30 = &UNK_180445d9a;
            lVar9 = func_0x000180315580(TI_SkinnedMeshSync.<SyncTask>d__22);
            puStack_30 = &UNK_180445da7;
            Gear__UpdateWeaponType__1803dadf0(lVar9,0);
            *(undefined4 *)(lVar9 + 0x10) = 0;
            *(longlong *)(lVar9 + 0x20) = lVar7;
            puStack_30 = &UNK_180445dbe;
            func_0x000180314690(lVar9 + 0x20,lVar7);
            puStack_30 = &UNK_180445dcc;
            UnityEngine_MonoBehaviour__StartCoroutine(lVar7,lVar9,0);
          }
        }
        return;
      }
    }
  }
code_r0x0001807ee2b1:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

