// ClickManager__Update__1804f4100 @ 0x1804f4100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ClickManager__Update__1804f4100(longlong param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  if (cRam00000001834b35a0 == '\0') {
    FUN_180315380(MR_UnityEngine.Component.GetComponentInParent<SparkItemNoChao>);
    FUN_180315380(TI_ObjectData);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_PlayerController);
    FUN_180315380(TI_SparkObservador);
    FUN_180315380(LIT_"'Monster'");
    FUN_180315380(LIT_"'Pickup'");
    FUN_180315380(LIT_"'Player'");
    FUN_180315380(LIT_"'Npc'");
    cRam00000001834b35a0 = '\x01';
  }
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  if (DAT_1834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  if (**(longlong **)(TI_L2GameUI + 0xb8) == 0) goto code_r0x0001804f500d;
  if (*(char *)(**(longlong **)(TI_L2GameUI + 0xb8) + 0x38) != '\0') {
    return;
  }
  if (DAT_1834b2f34 == '\0') {
    FUN_180315380(TI_PlayerStateMachine);
    DAT_1834b2f34 = '\x01';
  }
  uVar12 = **(undefined8 **)(TI_PlayerStateMachine + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  if (cVar5 != '\0') {
    if (DAT_1834b2f34 == '\0') {
      FUN_180315380(TI_PlayerStateMachine);
      DAT_1834b2f34 = '\x01';
    }
    if (**(longlong **)(TI_PlayerStateMachine + 0xb8) == 0) goto code_r0x0001804f500d;
    if (*(int *)(**(longlong **)(TI_PlayerStateMachine + 0xb8) + 0x24) == 9) {
      return;
    }
  }
  if (*(int *)(TI_SparkObservador + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834b35e8 == '\0') {
    FUN_180315380(TI_SparkObservador);
    DAT_1834b35e8 = '\x01';
  }
  if (*(int *)(TI_SparkObservador + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(char *)(*(longlong *)(TI_SparkObservador + 0xb8) + 0x20) != '\0') {
    return;
  }
  lVar11 = *(longlong *)(param_1 + 0x68);
  puVar10 = (undefined8 *)UnityEngine_Input__get_mousePosition(&uStack_88,0);
  if (lVar11 == 0) goto code_r0x0001804f500d;
  uStack_e8 = *puVar10;
  uStack_e0 = *(undefined4 *)(puVar10 + 1);
  puVar10 = (undefined8 *)UnityEngine_Camera__ScreenPointToRay(&uStack_68,lVar11,&uStack_e8,0);
  uVar13 = *puVar10;
  uVar3 = puVar10[1];
  uVar12 = puVar10[2];
  uStack_88 = uVar13;
  uStack_80 = uVar3;
  uStack_78 = uVar12;
  cVar5 = ClickManager__RaioDoClique__1804f3c30(param_1,&uStack_88,&uStack_b8,0);
  if (cVar5 != '\0') {
    lVar11 = UnityEngine_RaycastHit__get_collider(&uStack_b8,0);
    if ((lVar11 == 0) || (lVar11 = UnityEngine_Component__get_gameObject(lVar11,0), lVar11 == 0))
    goto code_r0x0001804f500d;
    uVar6 = UnityEngine_GameObject__get_layer(lVar11,0);
    uVar7 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x5c),0);
    uVar8 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x5c),0);
    if (uVar7 == (uVar8 | 1 << (uVar6 & 0x1f))) {
      lVar11 = UnityEngine_RaycastHit__get_transform(&uStack_b8,0);
      if ((lVar11 == 0) || (lVar11 = UnityEngine_Transform__GetParent(lVar11,0), lVar11 == 0))
      goto code_r0x0001804f500d;
      lVar11 = UnityEngine_Transform__GetParent(lVar11,0);
    }
    else {
      lVar11 = UnityEngine_RaycastHit__get_collider();
    }
    if (lVar11 == 0) goto code_r0x0001804f500d;
    uVar12 = UnityEngine_Component__get_gameObject(lVar11,0);
    uVar13 = func_0x000180315580(TI_ObjectData);
    ObjectData___ctor(uVar13,uVar12,0);
    *(undefined8 *)(param_1 + 0x40) = uVar13;
    func_0x000180314690(param_1 + 0x40,uVar13);
    if (DAT_1834b3532 == '\0') {
      FUN_180315380(TI_InputManager);
      DAT_1834b3532 = '\x01';
    }
    if (**(longlong **)(TI_InputManager + 0xb8) == 0) goto code_r0x0001804f500d;
    if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 200) == '\0') {
code_r0x0001804f47bd:
      if (*(char *)(param_1 + 0x54) != '\0') {
        lVar11 = FUN_1804d04d0(0);
        if (lVar11 == 0) goto code_r0x0001804f500d;
        if (*(char *)(lVar11 + 0xcb) != '\0') {
          lVar11 = FUN_1804d04d0(0);
          if (lVar11 == 0) goto code_r0x0001804f500d;
          if ((*(char *)(lVar11 + 0xcc) == '\0') &&
             (fVar16 = (float)FUN_182436650(0), *(float *)(param_1 + 0x58) <= fVar16)) {
            fVar16 = (float)FUN_182436650(0);
            *(float *)(param_1 + 0x58) = fVar16 + 0.3;
            lVar11 = UnityEngine_RaycastHit__get_collider(&uStack_b8,0);
            if (lVar11 == 0) goto code_r0x0001804f500d;
            uVar12 = FUN_180996dc0(lVar11,MR_UnityEngine.Component.GetComponentInParent<SparkItemNoChao>);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar5 = UnityEngine_Object__op_Equality(uVar12,0,0);
            if (cVar5 != '\0') {
              uVar7 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x5c),0);
              uVar8 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x5c),0);
              if (uVar7 == (uVar8 | 1 << (uVar6 & 0x1f))) {
                if (*(int *)(TI_PlayerController + 0xe4) == 0) {
                  func_0x000180315660();
                }
                uVar12 = FUN_1804169a0(0);
                if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                  func_0x000180315660();
                }
                cVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
                if (cVar5 != '\0') {
                  if (*(int *)(TI_PlayerController + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  lVar11 = FUN_1804169a0(0);
                  if (lVar11 == 0) goto code_r0x0001804f500d;
                  if (*(char *)(lVar11 + 0x7c) != '\0') goto code_r0x0001804f490b;
                }
              }
              else {
code_r0x0001804f490b:
                puVar10 = (undefined8 *)func_0x0001824d9960(&uStack_88,&uStack_b8,0);
                uStack_e8 = *(undefined8 *)(param_1 + 0x48);
                uStack_e0 = *(undefined4 *)(param_1 + 0x50);
                uStack_d8 = *puVar10;
                uStack_d0 = *(undefined4 *)(puVar10 + 1);
                fVar16 = (float)FUN_180416d40(&uStack_d8,&uStack_e8,0);
                if (0.5 < fVar16) {
                  uStack_68 = uStack_b8;
                  uStack_60 = uStack_b0;
                  uStack_58 = (undefined4)uStack_a8;
                  uStack_54 = uStack_a8._4_4_;
                  uStack_50 = uStack_a0;
                  uStack_4c = uStack_9c;
                  uStack_48 = uStack_98;
                  uStack_44 = (undefined4)uStack_94;
                  uStack_40 = uStack_94._4_4_;
                  ClickManager__OnClickToMove__1804f3a00(param_1,&uStack_68,0);
                }
              }
            }
          }
        }
      }
    }
    else {
      lVar11 = FUN_1804d04d0(0);
      if (lVar11 == 0) goto code_r0x0001804f500d;
      if (*(char *)(lVar11 + 0xcc) != '\0') goto code_r0x0001804f47bd;
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x40);
      func_0x000180314690(param_1 + 0x38);
      lVar11 = UnityEngine_RaycastHit__get_collider(&uStack_b8,0);
      if (lVar11 == 0) goto code_r0x0001804f500d;
      lVar11 = FUN_180996dc0(lVar11,MR_UnityEngine.Component.GetComponentInParent<SparkItemNoChao>);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar5 = UnityEngine_Object__op_Inequality(lVar11,0,0);
      if (cVar5 == '\0') {
        uVar7 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x5c),0);
        uVar8 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x5c),0);
        if (uVar7 == (uVar8 | 1 << (uVar6 & 0x1f))) {
          if (*(longlong *)(param_1 + 0x38) == 0) goto code_r0x0001804f500d;
          cVar5 = System_String__op_Inequality
                            (*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x20),
                             LIT_"'Player'",0);
          if (cVar5 != '\0') {
            ClickManager__OnClickOnEntity__1804f35f0(param_1,0);
            goto code_r0x0001804f4984;
          }
        }
        if (*(longlong *)(param_1 + 0x38) != 0) {
          uStack_68 = uStack_b8;
          uStack_60 = uStack_b0;
          uStack_58 = (undefined4)uStack_a8;
          uStack_54 = uStack_a8._4_4_;
          uStack_50 = uStack_a0;
          uStack_4c = uStack_9c;
          uStack_48 = uStack_98;
          uStack_44 = (undefined4)uStack_94;
          uStack_40 = uStack_94._4_4_;
          ClickManager__OnClickToMove__1804f3a00(param_1,&uStack_68,0);
          *(undefined1 *)(param_1 + 0x54) = 1;
          fVar16 = (float)FUN_182436650(0);
          *(float *)(param_1 + 0x58) = fVar16 + 0.3;
        }
      }
      else {
        ClickManager__HideLocator__1804f3440(param_1,0,0);
        lVar14 = SparkItensNoChao__get_Instance(0);
        if ((lVar11 == 0) || (lVar14 == 0)) goto code_r0x0001804f500d;
        SparkItensNoChao__Pega(lVar14,*(undefined4 *)(lVar11 + 0x20),0);
      }
    }
code_r0x0001804f4984:
    lVar11 = UnityEngine_RaycastHit__get_collider(&uStack_b8,0);
    if (lVar11 == 0) goto code_r0x0001804f500d;
    lVar11 = FUN_180996dc0(lVar11,MR_UnityEngine.Component.GetComponentInParent<SparkItemNoChao>);
    lVar14 = SparkItensNoChao__get_Instance(0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar5 = UnityEngine_Object__op_Inequality(lVar11,0,0);
    if (cVar5 == '\0') {
      uVar15 = 0;
    }
    else {
      if (lVar11 == 0) goto code_r0x0001804f500d;
      uVar15 = *(undefined4 *)(lVar11 + 0x20);
    }
    if (lVar14 == 0) goto code_r0x0001804f500d;
    *(undefined4 *)(lVar14 + 0x40) = uVar15;
    if (*(longlong *)(param_1 + 0x40) == 0) goto code_r0x0001804f500d;
    uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    if (cVar5 == '\0') {
code_r0x0001804f4a93:
      if (DAT_1834b3532 == '\0') {
        FUN_180315380(TI_InputManager);
        DAT_1834b3532 = '\x01';
      }
      if (**(longlong **)(TI_InputManager + 0xb8) == 0) goto code_r0x0001804f500d;
      if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xf0) == '\0') {
code_r0x0001804f4bb1:
        if (*(longlong *)(param_1 + 0x40) == 0) goto code_r0x0001804f500d;
        uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
        if (cVar5 != '\0') {
          if (*(longlong *)(param_1 + 0x38) == 0) goto code_r0x0001804f500d;
          uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x38);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
          if (cVar5 != '\0') {
            if ((*(longlong *)(param_1 + 0x38) == 0) || (*(longlong *)(param_1 + 0x40) == 0))
            goto code_r0x0001804f500d;
            uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x38);
            uVar13 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar5 = UnityEngine_Object__op_Equality(uVar12,uVar13,0);
            if (cVar5 != '\0') {
              if (*(longlong *)(param_1 + 0x40) == 0) goto code_r0x0001804f500d;
              uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30);
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
              if (cVar5 != '\0') {
                if (((*(longlong *)(param_1 + 0x40) == 0) ||
                    (lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x30), lVar11 == 0)) ||
                   (lVar11 = *(longlong *)(lVar11 + 0x38), lVar11 == 0)) goto code_r0x0001804f500d;
                if (*(char *)(lVar11 + 0x18) == '\0') {
                  cVar5 = func_0x0001817058a0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x20),
                                              LIT_"'Monster'",0);
                  if (cVar5 != '\0') {
                    if ((*(longlong *)(param_1 + 0x40) == 0) ||
                       (lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x30), lVar11 == 0))
                    goto code_r0x0001804f500d;
                    if ((*(longlong *)(lVar11 + 0x30) == 0) ||
                       (*(char *)(*(longlong *)(lVar11 + 0x30) + 0x55) != '\0'))
                    goto code_r0x0001804f4b97;
                  }
                  if (*(longlong *)(param_1 + 0x40) == 0) goto code_r0x0001804f500d;
                  cVar5 = func_0x0001817058a0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x20),
                                              LIT_"'Npc'",0);
                  if (cVar5 != '\0') {
                    if (*(longlong *)(param_1 + 0x40) == 0) goto code_r0x0001804f500d;
                    cVar5 = AttackAction__NpcAtacavel
                                      (*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30),0);
                    if (cVar5 != '\0') goto code_r0x0001804f4b97;
                  }
                }
              }
              if (*(longlong *)(param_1 + 0x40) == 0) goto code_r0x0001804f500d;
              cVar5 = func_0x0001817058a0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x20),
                                          LIT_"'Npc'",0);
              if (cVar5 != '\0') {
code_r0x0001804f4e96:
                lVar11 = FUN_1804f06a0(0);
                if (lVar11 == 0) goto code_r0x0001804f500d;
                uVar12 = 2;
                goto code_r0x0001804f4ebf;
              }
              if (*(longlong *)(param_1 + 0x40) == 0) goto code_r0x0001804f500d;
              lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x30);
              if (cRam00000001834b359b == '\0') {
                FUN_180315380(TI_UnityEngine.Object);
                FUN_180315380(TI_SparkLoja);
                cRam00000001834b359b = '\x01';
              }
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar5 = UnityEngine_Object__op_Inequality(lVar11,0,0);
              if (cVar5 != '\0') {
                if (lVar11 == 0) goto code_r0x0001804f500d;
                if (*(longlong *)(lVar11 + 0x30) != 0) {
                  if (DAT_1834b2f32 == '\0') {
                    FUN_180315380(TI_PlayerEntity);
                    DAT_1834b2f32 = '\x01';
                  }
                  uVar12 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
                  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  cVar5 = UnityEngine_Object__op_Inequality(lVar11,uVar12,0);
                  if (cVar5 != '\0') {
                    if (*(longlong *)(lVar11 + 0x30) == 0) goto code_r0x0001804f500d;
                    uVar15 = *(undefined4 *)(*(longlong *)(lVar11 + 0x30) + 0x14);
                    if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    iVar9 = SparkLoja__TipoDe(uVar15,0);
                    if (iVar9 != 0) goto code_r0x0001804f4e96;
                  }
                }
              }
            }
          }
        }
        lVar11 = FUN_1804f06a0(0);
        if (lVar11 == 0) goto code_r0x0001804f500d;
        uVar12 = 0;
      }
      else {
        if (*(longlong *)(param_1 + 0x40) == 0) goto code_r0x0001804f500d;
        uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
        if (cVar5 == '\0') goto code_r0x0001804f4bb1;
        if (*(longlong *)(param_1 + 0x40) == 0) goto code_r0x0001804f500d;
        uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
        if (cVar5 == '\0') goto code_r0x0001804f4bb1;
        if (*(longlong *)(param_1 + 0x40) == 0) goto code_r0x0001804f500d;
        cVar5 = System_String__op_Inequality
                          (*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x20),
                           LIT_"'Player'",0);
        if (cVar5 == '\0') goto code_r0x0001804f4bb1;
        if ((*(longlong *)(param_1 + 0x40) == 0) ||
           (lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x30), lVar11 == 0))
        goto code_r0x0001804f500d;
        if ((*(longlong *)(lVar11 + 0x38) == 0) ||
           (*(char *)(*(longlong *)(lVar11 + 0x38) + 0x18) != '\0')) goto code_r0x0001804f4bb1;
code_r0x0001804f4b97:
        lVar11 = FUN_1804f06a0(0);
        if (lVar11 == 0) goto code_r0x0001804f500d;
        uVar12 = 1;
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x40) == 0) goto code_r0x0001804f500d;
      cVar5 = func_0x0001817058a0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x20),
                                  LIT_"'Pickup'",0);
      if (cVar5 == '\0') {
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Inequality(lVar11,0,0);
        if (cVar5 == '\0') goto code_r0x0001804f4a93;
      }
      lVar11 = FUN_1804f06a0(0);
      if (lVar11 == 0) goto code_r0x0001804f500d;
      uVar12 = 3;
    }
code_r0x0001804f4ebf:
    CursorManager__ChangeCursor__1805b0af0(lVar11,uVar12,0);
    goto code_r0x0001804f4eca;
  }
  if (cRam00000001834b35e9 == '\0') {
    FUN_180315380(TI_CursorManager);
    cRam00000001834b35e9 = '\x01';
  }
  if (**(longlong **)(TI_CursorManager + 0xb8) == 0) goto code_r0x0001804f500d;
  CursorManager__ChangeCursor__1805b0af0(**(longlong **)(TI_CursorManager + 0xb8),0,0);
  lVar11 = SparkItensNoChao__get_Instance(0);
  if (lVar11 == 0) goto code_r0x0001804f500d;
  *(undefined4 *)(lVar11 + 0x40) = 0;
  bVar1 = false;
  if (DAT_1834b3532 == '\0') {
    FUN_180315380(TI_InputManager);
    DAT_1834b3532 = '\x01';
  }
  if (**(longlong **)(TI_InputManager + 0xb8) == 0) goto code_r0x0001804f500d;
  bVar4 = bVar1;
  if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 200) != '\0') {
    lVar11 = FUN_1804d04d0(0);
    if (lVar11 == 0) goto code_r0x0001804f500d;
    bVar4 = *(char *)(lVar11 + 0xcc) == '\0';
  }
  if ((!bVar4) && (*(char *)(param_1 + 0x54) != '\0')) {
    lVar11 = FUN_1804d04d0(0);
    if (lVar11 == 0) goto code_r0x0001804f500d;
    if (*(char *)(lVar11 + 0xcb) != '\0') {
      lVar11 = FUN_1804d04d0(0);
      if (lVar11 == 0) goto code_r0x0001804f500d;
      if (*(char *)(lVar11 + 0xcc) == '\0') {
        fVar16 = (float)FUN_182436650(0);
        bVar1 = *(float *)(param_1 + 0x58) <= fVar16;
      }
    }
  }
  if ((bVar1 || bVar4) &&
     (uStack_88 = uVar13, uStack_80 = uVar3, uStack_78 = uVar12,
     cVar5 = ClickManager__DestinoNadando__1804f2750(param_1,&uStack_88,&uStack_c8,&uStack_d8,0),
     uVar15 = uStack_c0, uVar12 = uStack_c8, cVar5 != '\0')) {
    if (!bVar4) {
      uStack_e8 = *(undefined8 *)(param_1 + 0x48);
      uStack_e0 = *(undefined4 *)(param_1 + 0x50);
      fVar16 = (float)FUN_180416d40(&uStack_c8,&uStack_e8,0);
      if (fVar16 <= 0.5) goto code_r0x0001804f4eca;
    }
    fVar16 = (float)FUN_182436650(0);
    *(undefined1 *)(param_1 + 0x54) = 1;
    uStack_e0 = uStack_d0;
    uStack_d0 = uVar15;
    *(float *)(param_1 + 0x58) = fVar16 + 0.3;
    uStack_e8 = uStack_d8;
    uStack_d8 = uVar12;
    ClickManager__AndaPara__1804f2140(param_1,&uStack_d8,&uStack_e8,0);
  }
code_r0x0001804f4eca:
  if (DAT_1834b3532 == '\0') {
    FUN_180315380(TI_InputManager);
    DAT_1834b3532 = '\x01';
  }
  if (**(longlong **)(TI_InputManager + 0xb8) == 0) goto code_r0x0001804f500d;
  if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xcb) == '\0') {
code_r0x0001804f4f48:
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  else {
    if (DAT_1834b3532 == '\0') {
      FUN_180315380(TI_InputManager);
      DAT_1834b3532 = '\x01';
    }
    if (**(longlong **)(TI_InputManager + 0xb8) == 0) goto code_r0x0001804f500d;
    if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xcc) != '\0') goto code_r0x0001804f4f48;
  }
  if (DAT_1834b3532 == '\0') {
    FUN_180315380(TI_InputManager);
    DAT_1834b3532 = '\x01';
  }
  if (**(longlong **)(TI_InputManager + 0xb8) != 0) {
    if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xea) == '\0') {
      if (DAT_1834b3532 == '\0') {
        FUN_180315380(TI_InputManager);
        DAT_1834b3532 = '\x01';
      }
      if (**(longlong **)(TI_InputManager + 0xb8) == 0) goto code_r0x0001804f500d;
      if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xeb) == '\0') {
        return;
      }
    }
    ClickManager__HideLocator__1804f3440(param_1,0,0);
    return;
  }
code_r0x0001804f500d:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

