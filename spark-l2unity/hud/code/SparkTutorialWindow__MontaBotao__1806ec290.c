// SparkTutorialWindow__MontaBotao__1806ec290 @ 0x1806ec290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTutorialWindow__MontaBotao__1806ec290(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  ushort uVar10;
  undefined8 uStackX_8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 auStack_58 [40];
  undefined8 uStack_30;
  
  if (cRam00000001834b407e == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduledItem);
    FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduler);
    FUN_180315380(TI_UnityEngine.UIElements.Label);
    FUN_180315380(TI_MouseOverDetectionManipulator);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MD_SparkTutorialWindow._MontaBotao_b__35_0);
    FUN_180315380(MD_SparkTutorialWindow._MontaBotao_b__35_1);
    FUN_180315380(MD_SparkTutorialWindow._MontaBotao_b__35_2);
    FUN_180315380(MD_SparkTutorialWindow._MontaBotao_b__35_3);
    FUN_180315380(MD_SparkTutorialWindow._MontaBotao_b__35_4);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'SparkTutorialBtn'");
    FUN_180315380(LIT_"'Data/UI/Assets/html/TutorialBtn_over'");
    FUN_180315380(LIT_"'Data/UI/Assets/html/TutorialBtn_light'");
    FUN_180315380(LIT_"'Data/UI/Assets/html/TutorialBtn'");
    FUN_180315380(LIT_"'?'");
    FUN_180315380(LIT_"'Data/UI/Assets/html/TutorialBtn_down'");
    FUN_180315380(LIT_"'Tutorial'");
    cRam00000001834b407e = '\x01';
  }
  if (*(int *)(TI_SparkArte + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar4 = FUN_180a90ae0(LIT_"'Data/UI/Assets/html/TutorialBtn'",MR_SparkArte.Load<UnityEngine.Texture2D>);
  *(undefined8 *)(param_1 + 200) = uVar4;
  func_0x000180314690(param_1 + 200,uVar4);
  uVar4 = FUN_180a90ae0(LIT_"'Data/UI/Assets/html/TutorialBtn_light'",MR_SparkArte.Load<UnityEngine.Texture2D>);
  *(undefined8 *)(param_1 + 0xd0) = uVar4;
  func_0x000180314690(param_1 + 0xd0,uVar4);
  uVar4 = FUN_180a90ae0(LIT_"'Data/UI/Assets/html/TutorialBtn_over'",MR_SparkArte.Load<UnityEngine.Texture2D>);
  *(undefined8 *)(param_1 + 0xd8) = uVar4;
  func_0x000180314690(param_1 + 0xd8,uVar4);
  uVar4 = FUN_180a90ae0(LIT_"'Data/UI/Assets/html/TutorialBtn_down'",MR_SparkArte.Load<UnityEngine.Texture2D>);
  *(undefined8 *)(param_1 + 0xe0) = uVar4;
  func_0x000180314690(param_1 + 0xe0,uVar4);
  uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(uVar4,0);
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  func_0x000180314690(param_1 + 0xc0,uVar4);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
DAT_1806ecf3c:
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UnityEngine_UIElements_VisualElement__set_name
            (*(longlong *)(param_1 + 0xc0),LIT_"'SparkTutorialBtn'",0);
  if (*(longlong *)(param_1 + 0xc0) == 0) goto DAT_1806ecf3c;
  lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
  uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
  if (lVar5 == 0) goto DAT_1806ecf3c;
  FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
  if (*(longlong *)(param_1 + 0xc0) == 0) goto DAT_1806ecf3c;
  plVar6 = (longlong *)
           UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
  puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0x41200000,0);
  if (plVar6 == (longlong *)0x0) goto DAT_1806ecf3c;
  lVar5 = *plVar6;
  uVar4 = *puVar7;
  uVar1 = *(undefined4 *)(puVar7 + 1);
  if (*(ushort *)(lVar5 + 0x12e) != 0) {
    uVar10 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
        puVar7 = (undefined8 *)
                 ((longlong)
                  (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0x69) *
                  0x10 + 0x138 + lVar5);
        goto code_r0x0001806ec649;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
  }
  puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x69);
code_r0x0001806ec649:
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
  uStack_78 = uVar4;
  (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
  if (*(longlong *)(param_1 + 0xc0) == 0) goto DAT_1806ecf3c;
  plVar6 = (longlong *)
           UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
  uStackX_8 = 0;
  func_0x0001825fc4d0(&uStackX_8,0x42280000,1,0);
  puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,uStackX_8,0);
  if (plVar6 == (longlong *)0x0) goto DAT_1806ecf3c;
  lVar5 = *plVar6;
  uVar4 = *puVar7;
  uVar1 = *(undefined4 *)(puVar7 + 1);
  if (*(ushort *)(lVar5 + 0x12e) != 0) {
    uVar10 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
        puVar7 = (undefined8 *)
                 ((longlong)
                  (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0x73) *
                  0x10 + 0x138 + lVar5);
        goto code_r0x0001806ec709;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
  }
  puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x0001806ec709:
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
  uStack_78 = uVar4;
  (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
  if (*(longlong *)(param_1 + 0xc0) == 0) goto DAT_1806ecf3c;
  plVar6 = (longlong *)
           UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
  puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0x42000000,0);
  if (plVar6 == (longlong *)0x0) goto DAT_1806ecf3c;
  lVar5 = *plVar6;
  uVar1 = *(undefined4 *)(puVar7 + 1);
  uVar4 = *puVar7;
  if (*(ushort *)(lVar5 + 0x12e) != 0) {
    uVar10 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
        puVar7 = (undefined8 *)
                 ((longlong)
                  (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0xad) *
                  0x10 + 0x138 + lVar5);
        goto code_r0x0001806ec7b9;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
  }
  puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001806ec7b9:
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
  uStack_78 = uVar4;
  (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
  if (*(longlong *)(param_1 + 0xc0) == 0) goto DAT_1806ecf3c;
  plVar6 = (longlong *)
           UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
  puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0x42000000,0);
  if (plVar6 == (longlong *)0x0) goto DAT_1806ecf3c;
  lVar5 = *plVar6;
  uVar4 = *puVar7;
  uVar1 = *(undefined4 *)(puVar7 + 1);
  if (*(ushort *)(lVar5 + 0x12e) != 0) {
    uVar10 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
        puVar7 = (undefined8 *)
                 ((longlong)
                  (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0x43) *
                  0x10 + 0x138 + lVar5);
        goto code_r0x0001806ec859;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
  }
  puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001806ec859:
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
  uStack_78 = uVar4;
  (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
  if (*(longlong *)(param_1 + 0xc0) == 0) goto DAT_1806ecf3c;
  lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
  uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
  if (lVar5 == 0) goto DAT_1806ecf3c;
  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
  if (*(longlong *)(param_1 + 0xc0) == 0) goto DAT_1806ecf3c;
  UnityEngine_UIElements_VisualElement__set_tooltip
            (*(longlong *)(param_1 + 0xc0),LIT_"'Tutorial'",0);
  uVar4 = *(undefined8 *)(param_1 + 200);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar4,0,0);
  if (cVar3 != '\0') {
    lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.Label);
    UnityEngine_UIElements_Label___ctor(lVar5,LIT_"'?'",0);
    if (lVar5 == 0) goto DAT_1806ecf42;
    lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
    uVar4 = FUN_180eb5810(4,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.TextAnchor>.op_Implicit);
    if (lVar8 == 0) goto DAT_1806ecf42;
    FUN_180005060(0x9d,TI_UnityEngine.UIElements.IStyle,lVar8,uVar4);
    plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
    puVar7 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0x41b00000,0);
    if (plVar6 == (longlong *)0x0) goto DAT_1806ecf42;
    lVar8 = *plVar6;
    uVar4 = *puVar7;
    uVar1 = *(undefined4 *)(puVar7 + 1);
    if (*(ushort *)(lVar8 + 0x12e) != 0) {
      uVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0x41) *
                    0x10 + 0x138 + lVar8);
          goto code_r0x0001806ec9f9;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x41);
code_r0x0001806ec9f9:
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
    uStack_78 = uVar4;
    (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
    plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660(TI_SparkEstilo);
    }
    uStack_78 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x60);
    uStack_70 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x68);
    puVar7 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(auStack_58,&uStack_78,0);
    if (plVar6 == (longlong *)0x0) goto DAT_1806ecf42;
    lVar8 = *plVar6;
    uVar4 = *puVar7;
    uVar9 = puVar7[1];
    uVar1 = *(undefined4 *)(puVar7 + 2);
    if (*(ushort *)(lVar8 + 0x12e) != 0) {
      uVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0x2f) *
                    0x10 + 0x138 + lVar8);
          goto code_r0x0001806ecab9;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x0001806ecab9:
    uStack_78 = uVar4;
    uStack_70 = uVar9;
    uStack_68 = uVar1;
    (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
    lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
    uVar4 = func_0x000182601c10();
    if (lVar8 == 0) goto DAT_1806ecf42;
    FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar8,uVar4);
    UnityEngine_UIElements_VisualElement__set_pickingMode(lVar5,1,0);
    if (*(longlong *)(param_1 + 0xc0) == 0) goto DAT_1806ecf42;
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xc0),lVar5,0);
    if (*(longlong *)(param_1 + 0xc0) == 0) goto DAT_1806ecf42;
    plVar6 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
    uStack_78 = 0x3da3d70a3e99999a;
    uStack_70 = 0x3f6666663d4ccccd;
    puVar7 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(auStack_58,&uStack_78,0);
    if (plVar6 == (longlong *)0x0) goto DAT_1806ecf42;
    lVar5 = *plVar6;
    uVar4 = *puVar7;
    uVar9 = puVar7[1];
    uVar1 = *(undefined4 *)(puVar7 + 2);
    if (*(ushort *)(lVar5 + 0x12e) != 0) {
      uVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar10 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar7 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 9) *
                    0x10 + 0x138 + lVar5);
          goto code_r0x0001806ecbc9;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
    }
    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,9);
code_r0x0001806ecbc9:
    uStack_78 = uVar4;
    uStack_70 = uVar9;
    uStack_68 = uVar1;
    (*(code *)*puVar7)(plVar6,&uStack_78,puVar7[1]);
  }
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  uVar9 = func_0x000180315580(TI_MouseOverDetectionManipulator);
  MouseOverDetectionManipulator___ctor__1807b03c0(uVar9,uVar4,0);
  *(undefined8 *)(param_1 + 0x100) = uVar9;
  func_0x000180314690(param_1 + 0x100,uVar9);
  UnityEngine_UIElements_VisualElementExtensions__AddManipulator
            (*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x100),0);
  lVar5 = *(longlong *)(param_1 + 0xc0);
  uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
  FUN_18055b980(uVar4,param_1,MD_SparkTutorialWindow._MontaBotao_b__35_0,0);
  if (lVar5 != 0) {
    FUN_180990d50(lVar5,uVar4,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    lVar5 = *(longlong *)(param_1 + 0xc0);
    uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_18055b980(uVar4,param_1,MD_SparkTutorialWindow._MontaBotao_b__35_1,0);
    if (lVar5 != 0) {
      FUN_180990d50(lVar5,uVar4,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
      lVar5 = *(longlong *)(param_1 + 0xc0);
      uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
      FUN_18055b980(uVar4,param_1,MD_SparkTutorialWindow._MontaBotao_b__35_2,0);
      if (lVar5 != 0) {
        FUN_180990d50(lVar5,uVar4,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
        lVar5 = *(longlong *)(param_1 + 0xc0);
        uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
        FUN_18055b980(uVar4,param_1,MD_SparkTutorialWindow._MontaBotao_b__35_3,0);
        if (lVar5 != 0) {
          FUN_180990d50(lVar5,uVar4,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>);
          if (param_2 != 0) {
            UnityEngine_UIElements_VisualElement__Add(param_2,*(undefined8 *)(param_1 + 0xc0),0);
            if (*(longlong *)(param_1 + 0xc0) != 0) {
              lVar5 = func_0x0001818f3de0(*(longlong *)(param_1 + 0xc0),0);
              uVar4 = func_0x000180315580(TI_System.Action);
              FUN_1816a9c60(uVar4,param_1,MD_SparkTutorialWindow._MontaBotao_b__35_4,0);
              if (lVar5 != 0) {
                lVar5 = FUN_180002030(1,TI_UnityEngine.UIElements.IVisualElementScheduler,lVar5,uVar4);
                if (lVar5 != 0) {
                  uVar4 = FUN_180002030(5,TI_UnityEngine.UIElements.IVisualElementScheduledItem,lVar5,500);
                  *(undefined8 *)(param_1 + 0xf0) = uVar4;
                  func_0x000180314690(param_1 + 0xf0,uVar4);
                  plVar6 = *(longlong **)(param_1 + 0xf0);
                  if (plVar6 != (longlong *)0x0) {
                    lVar5 = *plVar6;
                    uVar10 = 0;
                    if (*(ushort *)(lVar5 + 0x12e) != 0) {
                      do {
                        if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                            TI_UnityEngine.UIElements.IVisualElementScheduledItem) {
                          puVar7 = (undefined8 *)
                                   ((longlong)
                                    (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 +
                                             (ulonglong)uVar10 * 0x10) + 2) * 0x10 + 0x138 + lVar5);
                    /* WARNING: Could not recover jumptable at 0x000180002419. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*(code *)*puVar7)(plVar6,puVar7[1]);
                          return;
                        }
                        uVar10 = uVar10 + 1;
                      } while (uVar10 < *(ushort *)(lVar5 + 0x12e));
                    }
                    uStack_30 = 0x1800023e1;
                    puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IVisualElementScheduledItem,2);
                    /* WARNING: Could not recover jumptable at 0x0001800023ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)*puVar7)(plVar6,puVar7[1]);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
DAT_1806ecf42:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

