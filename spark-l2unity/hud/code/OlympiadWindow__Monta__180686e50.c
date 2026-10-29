// OlympiadWindow__Monta__180686e50 @ 0x180686e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OlympiadWindow__Monta__180686e50(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 in_stack_ffffffffffffff18;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_78 [16];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  if (cRam00000001834b3e67 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_UnityEngine.Component.GetComponent<SparkObservador>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkObservador>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MD_OlympiadWindow.Atualiza);
    FUN_180315380(MD_OlympiadWindow.MostraResultado);
    FUN_180315380(MD_OlympiadWindow._Monta_b__15_0);
    FUN_180315380(TI_OlympiadWindow);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkOlimpiada);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'VS'");
    cRam00000001834b3e67 = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x28) == 0) && (param_2 != 0)) {
    lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(lVar4,0);
    if (lVar4 == 0) {
DAT_180687d2c:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine_UIElements_VisualElement__set_pickingMode(lVar4,1,0);
    *(longlong *)(param_1 + 0x28) = lVar4;
    func_0x000180314690(param_1 + 0x28,lVar4);
    if (*(longlong *)(param_1 + 0x28) == 0) goto DAT_180687d2c;
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x28),0);
    uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    if (lVar4 == 0) goto DAT_180687d2c;
    FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
    if (*(longlong *)(param_1 + 0x28) == 0) goto DAT_180687d2c;
    plVar6 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x28),0);
    puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_d8,0x42380000,0);
    if (plVar6 == (longlong *)0x0) goto DAT_180687d2c;
    lVar4 = *plVar6;
    uVar5 = *puVar7;
    uVar15 = *(undefined4 *)(puVar7 + 1);
    if (*(ushort *)(lVar4 + 0x12e) != 0) {
      uVar12 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0x73) *
                    0x10 + 0x138 + lVar4);
          goto code_r0x0001806870a9;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(ushort *)(lVar4 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x0001806870a9:
    uStack_c8 = uVar5;
    uStack_c0 = uVar15;
    (*(code *)*puVar7)(plVar6,&uStack_c8,puVar7[1]);
    if (*(longlong *)(param_1 + 0x28) == 0) goto DAT_180687d2c;
    plVar6 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x28),0);
    uVar5 = func_0x0001825fc350(0x42480000,0);
    puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_d8,uVar5,0);
    if (plVar6 == (longlong *)0x0) goto DAT_180687d2c;
    lVar4 = *plVar6;
    uVar5 = *puVar7;
    uVar15 = *(undefined4 *)(puVar7 + 1);
    if (*(ushort *)(lVar4 + 0x12e) != 0) {
      uVar12 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0x47) *
                    0x10 + 0x138 + lVar4);
          goto code_r0x000180687159;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(ushort *)(lVar4 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x000180687159:
    uStack_c8 = uVar5;
    uStack_c0 = uVar15;
    (*(code *)*puVar7)(plVar6,&uStack_c8,puVar7[1]);
    if (*(longlong *)(param_1 + 0x28) == 0) goto DAT_180687d2c;
    plVar6 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x28),0);
    uVar5 = func_0x0001825fc350(0xc2480000,0);
    uVar8 = func_0x0001825fc560(0,0);
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    func_0x000182607f40(&uStack_b8,uVar5,uVar8,0);
    uStack_98 = uStack_b8;
    uStack_90 = uStack_b0;
    uStack_8c = uStack_ac;
    uStack_88 = uStack_a8;
    uStack_84 = uStack_a4;
    puVar9 = (undefined4 *)UnityEngine_UIElements_StyleRotate__op_Implicit(&uStack_68,&uStack_98,0);
    if (plVar6 == (longlong *)0x0) goto DAT_180687d2c;
    uStack_98._0_4_ = *puVar9;
    uStack_98._4_4_ = puVar9[1];
    uStack_90 = puVar9[2];
    lVar4 = *plVar6;
    uStack_8c = (undefined4)*(undefined8 *)(puVar9 + 3);
    uVar15 = uStack_8c;
    uStack_88 = (undefined4)((ulonglong)*(undefined8 *)(puVar9 + 3) >> 0x20);
    uVar16 = uStack_88;
    uStack_84 = (undefined4)*(undefined8 *)(puVar9 + 5);
    uVar17 = uStack_84;
    uStack_80 = (undefined4)((ulonglong)*(undefined8 *)(puVar9 + 5) >> 0x20);
    uVar18 = uStack_80;
    if (*(ushort *)(lVar4 + 0x12e) != 0) {
      uVar12 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0x7f) *
                    0x10 + 0x138 + lVar4);
          goto code_r0x000180687249;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(ushort *)(lVar4 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x7f);
code_r0x000180687249:
    uStack_8c = uVar15;
    uStack_88 = uVar16;
    uStack_84 = uVar17;
    uStack_80 = uVar18;
    (*(code *)*puVar7)(plVar6,&uStack_98,puVar7[1]);
    if (*(longlong *)(param_1 + 0x28) == 0) goto DAT_180687d2c;
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x28),0);
    uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    if (lVar4 == 0) goto DAT_180687d2c;
    FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
    if (*(longlong *)(param_1 + 0x28) == 0) goto DAT_180687d2c;
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x28),0);
    uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar4 == 0) goto DAT_180687d2c;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
    uVar13 = 0;
code_r0x000180687320:
    do {
      plVar6 = *(longlong **)(param_1 + 0x38);
      if (uVar13 == 0) {
        if (*(int *)(TI_OlympiadWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar4 = *(longlong *)(TI_OlympiadWindow + 0xb8);
        uVar15 = *(undefined4 *)(lVar4 + 8);
        uVar16 = *(undefined4 *)(lVar4 + 0xc);
        uVar17 = *(undefined4 *)(lVar4 + 0x10);
        uVar18 = *(undefined4 *)(lVar4 + 0x14);
        uVar14 = 0;
      }
      else {
        if (*(int *)(TI_OlympiadWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar4 = *(longlong *)(TI_OlympiadWindow + 0xb8);
        uVar15 = *(undefined4 *)(lVar4 + 0x18);
        uVar16 = *(undefined4 *)(lVar4 + 0x1c);
        uVar17 = *(undefined4 *)(lVar4 + 0x20);
        uVar18 = *(undefined4 *)(lVar4 + 0x24);
        uVar14 = uVar13;
      }
      if (*(int *)(TI_OlympiadWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      uStack_68 = uVar15;
      uStack_64 = uVar16;
      uStack_60 = uVar17;
      uStack_5c = uVar18;
      lVar4 = OlympiadWindow__CriaCartao(&uStack_68,0);
      if (plVar6 == (longlong *)0x0) goto code_r0x000180687d5a;
      if (lVar4 != 0) {
        lVar10 = func_0x0001803146b0(lVar4,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar10 == 0) {
          uVar5 = func_0x000180314f80();
          FUN_180315590(uVar5,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(uint *)(plVar6 + 3) <= uVar14) {
code_r0x000180687d54:
        FUN_1803155c0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar6[(longlong)(int)uVar14 + 4] = lVar4;
      func_0x000180314690(plVar6 + (longlong)(int)uVar14 + 4,lVar4);
      if (uVar13 == 0) {
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar4 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uStack_68 = *(undefined4 *)(lVar4 + 0x60);
        uStack_64 = *(undefined4 *)(lVar4 + 100);
        uStack_60 = *(undefined4 *)(lVar4 + 0x68);
        uStack_5c = *(undefined4 *)(lVar4 + 0x6c);
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        func_0x000180cb7cb0(&uStack_98,&uStack_68,MR_System.Nullable<UnityEngine.Color>..ctor);
        uStack_b8 = uStack_98;
        uStack_b0 = uStack_90;
        uStack_ac = uStack_8c;
        uStack_a8 = uStack_88;
        in_stack_ffffffffffffff18 = 0;
        lVar4 = SparkEstilo__Texto__180722af0(LIT_"'VS'",0xe,&uStack_b8,1,0);
        if (lVar4 != 0) {
          lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
          uVar5 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
          if (lVar10 != 0) {
            FUN_180005060(5,TI_UnityEngine.UIElements.IStyle,lVar10,uVar5);
            lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
            lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
            puVar7 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit(auStack_78,0x41200000,0);
            if (lVar11 != 0) {
              uVar5 = *puVar7;
              uVar15 = *(undefined4 *)(puVar7 + 1);
              uStack_c8 = uVar5;
              uStack_c0 = uVar15;
              FUN_1800050f0(0x4f,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_c8);
              if (lVar10 != 0) {
                uStack_d8 = uVar5;
                uStack_d0 = uVar15;
                FUN_1800050f0(0x4d,TI_UnityEngine.UIElements.IStyle,lVar10,&uStack_d8);
                lVar10 = *(longlong *)(param_1 + 0x38);
                if (lVar10 != 0) {
                  if (*(int *)(lVar10 + 0x18) == 0) {
                    FUN_1803155c0();
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  if ((*(longlong *)(lVar10 + 0x20) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
                    UnityEngine_UIElements_VisualElement__Add
                              (*(longlong *)(param_1 + 0x28),
                               *(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0x10),0);
                    if (*(longlong *)(param_1 + 0x28) != 0) {
                      UnityEngine_UIElements_VisualElement__Add
                                (*(longlong *)(param_1 + 0x28),lVar4,0);
                      uVar13 = 1;
                      goto code_r0x000180687320;
                    }
                  }
                }
              }
            }
          }
        }
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar4 = *(longlong *)(param_1 + 0x38);
      if (lVar4 == 0) goto code_r0x000180687d5a;
      if (*(uint *)(lVar4 + 0x18) <= uVar13) goto code_r0x000180687d54;
      lVar4 = *(longlong *)(lVar4 + 0x20 + (longlong)(int)uVar13 * 8);
      if ((lVar4 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) goto code_r0x000180687d5a;
      UnityEngine_UIElements_VisualElement__Add
                (*(longlong *)(param_1 + 0x28),*(undefined8 *)(lVar4 + 0x10),0);
      uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < 2);
    UnityEngine_UIElements_VisualElement__Add(param_2,*(undefined8 *)(param_1 + 0x28),0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar5 = SparkEstilo__Painel__180721ce0(0);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    func_0x000180314690(param_1 + 0x30,uVar5);
    if (*(longlong *)(param_1 + 0x30) == 0) {
code_r0x000180687d42:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UnityEngine_UIElements_VisualElement__set_pickingMode(*(longlong *)(param_1 + 0x30),0,0);
    if (*(longlong *)(param_1 + 0x30) == 0) goto code_r0x000180687d42;
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
    uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    if (lVar4 == 0) goto code_r0x000180687d42;
    FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
    if (*(longlong *)(param_1 + 0x30) == 0) goto code_r0x000180687d42;
    plVar6 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
    uVar5 = func_0x0001825fc350(0x41e00000,0);
    puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_78,uVar5,0);
    if (plVar6 == (longlong *)0x0) goto code_r0x000180687d42;
    lVar4 = *plVar6;
    uVar5 = *puVar7;
    uVar16 = *(undefined4 *)(puVar7 + 1);
    if (*(ushort *)(lVar4 + 0x12e) != 0) {
      uVar12 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0x73) *
                    0x10 + 0x138 + lVar4);
          goto code_r0x0001806875d9;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(ushort *)(lVar4 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x0001806875d9:
    uStack_d8 = uVar5;
    uStack_d0 = uVar16;
    (*(code *)*puVar7)(plVar6,&uStack_d8,puVar7[1]);
    if (*(longlong *)(param_1 + 0x30) == 0) goto code_r0x000180687d42;
    plVar6 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
    uVar5 = func_0x0001825fc350(0x42480000,0);
    puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_78,uVar5,0);
    if (plVar6 == (longlong *)0x0) goto code_r0x000180687d42;
    lVar4 = *plVar6;
    uVar5 = *puVar7;
    uVar16 = *(undefined4 *)(puVar7 + 1);
    if (*(ushort *)(lVar4 + 0x12e) != 0) {
      uVar12 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0x47) *
                    0x10 + 0x138 + lVar4);
          goto code_r0x000180687689;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(ushort *)(lVar4 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x47);
code_r0x000180687689:
    uStack_d8 = uVar5;
    uStack_d0 = uVar16;
    (*(code *)*puVar7)(plVar6,&uStack_d8,puVar7[1]);
    if (*(longlong *)(param_1 + 0x30) == 0) goto code_r0x000180687d42;
    plVar6 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
    uVar5 = func_0x0001825fc350(0xc2480000,0);
    uVar8 = func_0x0001825fc560(0,0);
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    func_0x000182607f40(&uStack_98,uVar5,uVar8,0);
    uStack_b8 = uStack_98;
    uStack_b0 = uStack_90;
    uStack_ac = uStack_8c;
    uStack_a8 = uStack_88;
    uStack_a4 = uStack_84;
    puVar9 = (undefined4 *)UnityEngine_UIElements_StyleRotate__op_Implicit(&uStack_68,&uStack_b8,0);
    if (plVar6 == (longlong *)0x0) goto code_r0x000180687d42;
    uStack_b8._0_4_ = *puVar9;
    uStack_b8._4_4_ = puVar9[1];
    uStack_b0 = puVar9[2];
    lVar4 = *plVar6;
    uStack_ac = (undefined4)*(undefined8 *)(puVar9 + 3);
    uVar16 = uStack_ac;
    uStack_a8 = (undefined4)((ulonglong)*(undefined8 *)(puVar9 + 3) >> 0x20);
    uVar17 = uStack_a8;
    uStack_a4 = (undefined4)*(undefined8 *)(puVar9 + 5);
    uVar18 = uStack_a4;
    uStack_a0 = (undefined4)((ulonglong)*(undefined8 *)(puVar9 + 5) >> 0x20);
    uVar2 = uStack_a0;
    if (*(ushort *)(lVar4 + 0x12e) != 0) {
      uVar12 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0x7f) *
                    0x10 + 0x138 + lVar4);
          goto code_r0x000180687779;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(ushort *)(lVar4 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x7f);
code_r0x000180687779:
    uStack_ac = uVar16;
    uStack_a8 = uVar17;
    uStack_a4 = uVar18;
    uStack_a0 = uVar2;
    (*(code *)*puVar7)(plVar6,&uStack_b8,puVar7[1]);
    if (*(longlong *)(param_1 + 0x30) == 0) goto code_r0x000180687d42;
    plVar6 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
    puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_78,0x43be0000,0);
    if (plVar6 == (longlong *)0x0) goto code_r0x000180687d42;
    lVar4 = *plVar6;
    uVar5 = *puVar7;
    uVar16 = *(undefined4 *)(puVar7 + 1);
    if (*(ushort *)(lVar4 + 0x12e) != 0) {
      uVar12 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0xad) *
                    0x10 + 0x138 + lVar4);
          goto code_r0x000180687819;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(ushort *)(lVar4 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180687819:
    uStack_d8 = uVar5;
    uStack_d0 = uVar16;
    (*(code *)*puVar7)(plVar6,&uStack_d8,puVar7[1]);
    if (*(longlong *)(param_1 + 0x30) == 0) goto code_r0x000180687d42;
    plVar6 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
    puVar9 = *(undefined4 **)(TI_SparkEstilo + 0xb8);
    uStack_68 = *puVar9;
    uStack_64 = puVar9[1];
    uStack_60 = puVar9[2];
    uStack_5c = puVar9[3];
    puVar7 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_b8,&uStack_68,0);
    if (plVar6 == (longlong *)0x0) goto code_r0x000180687d42;
    lVar4 = *plVar6;
    uVar5 = *puVar7;
    uVar8 = puVar7[1];
    uVar16 = *(undefined4 *)(puVar7 + 2);
    if (*(ushort *)(lVar4 + 0x12e) != 0) {
      uVar12 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 9) *
                    0x10 + 0x138 + lVar4);
          goto code_r0x0001806878c9;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(ushort *)(lVar4 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,9);
code_r0x0001806878c9:
    uStack_b0 = (undefined4)uVar8;
    uStack_ac = (undefined4)((ulonglong)uVar8 >> 0x20);
    uStack_b8 = uVar5;
    uStack_a8 = uVar16;
    (*(code *)*puVar7)(plVar6,&uStack_b8,puVar7[1]);
    SparkEstilo__Espaco__18071fb80
              (*(undefined8 *)(param_1 + 0x30),0x41200000,0x41400000,0x41200000,
               CONCAT44(uVar15,0x41400000),0);
    if (*(longlong *)(param_1 + 0x30) == 0) goto code_r0x000180687d42;
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
    uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar4 == 0) goto code_r0x000180687d42;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
    lVar4 = *(longlong *)(param_1 + 0x30);
    uVar5 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_18055b980(uVar5,param_1,MD_OlympiadWindow._Monta_b__15_0,0);
    if (lVar4 == 0) goto code_r0x000180687d42;
    FUN_180990d50(lVar4,uVar5,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    UnityEngine_UIElements_VisualElement__Add(param_2,*(undefined8 *)(param_1 + 0x30),0);
    lVar4 = FUN_180997040(param_1,MR_UnityEngine.Component.GetComponent<SparkObservador>);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Equality(lVar4,0,0);
    if (cVar3 != '\0') {
      lVar4 = UnityEngine_Component__get_gameObject(param_1,0);
      if (lVar4 == 0) goto code_r0x000180687d5a;
      lVar4 = FUN_1809e9600(lVar4,MR_UnityEngine.GameObject.AddComponent<SparkObservador>);
    }
    if (lVar4 == 0) {
code_r0x000180687d5a:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    SparkObservador__Monta__18049e1e0(lVar4,param_2,0);
    uVar5 = func_0x000180315580(TI_System.Action);
    FUN_1816a9c60(uVar5,param_1,MD_OlympiadWindow.Atualiza,0);
    if (*(int *)(TI_SparkOlimpiada + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkOlimpiada__add_Mudou(uVar5,0);
    uVar5 = func_0x000180315580(TI_System.Action);
    FUN_1816a9c60(uVar5,param_1,MD_OlympiadWindow.MostraResultado,0);
    SparkOlimpiada__add_ChegouResultado(uVar5,0);
    OlympiadWindow__Atualiza(param_1,0);
  }
  return;
}

