// SparkPescaJanela__Mostra__18084c3b0 @ 0x18084c3b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkPescaJanela__Mostra__18084c3b0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ushort uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iStack_88;
  int iStack_84;
  int aiStack_80 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 auStack_58 [48];
  
  if (cRam00000001834b4880 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkPescaJanela);
    FUN_180315380(LIT_"'The fish is resting... or is it?'");
    FUN_180315380(LIT_"'{0} / {1}'");
    FUN_180315380(LIT_"'Use Reeling'");
    FUN_180315380(LIT_"'The fish is fighting!'");
    FUN_180315380(LIT_"'{0}s'");
    FUN_180315380(LIT_"'The fish is fighting... or is it?'");
    FUN_180315380(LIT_"'Use Pumping'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'The fish is resting.'");
    cRam00000001834b4880 = '\x01';
  }
  uVar11 = FUN_1824366b0(0);
  if (*(int *)(TI_SparkPescaJanela + 0xe4) == 0) {
    func_0x000180315660(TI_SparkPescaJanela);
  }
  *(undefined4 *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x7c) = uVar11;
  lVar10 = *(longlong *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x38);
  if (lVar10 == 0) goto code_r0x00018084cc59;
  iVar1 = *(int *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x70);
  plVar3 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
  uVar4 = func_0x0001825fc350();
  puVar5 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,uVar4,0);
  if (plVar3 == (longlong *)0x0) goto code_r0x00018084cc59;
  lVar10 = *plVar3;
  uVar4 = *puVar5;
  uVar11 = *(undefined4 *)(puVar5 + 1);
  if (*(ushort *)(lVar10 + 0x12e) != 0) {
    uVar8 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
        puVar5 = (undefined8 *)
                 ((longlong)
                  (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) + 0xad) *
                  0x10 + 0x138 + lVar10);
        goto code_r0x00018084c5a9;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ushort *)(lVar10 + 0x12e));
  }
  puVar5 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018084c5a9:
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar11);
  uStack_78 = uVar4;
  (*(code *)*puVar5)(plVar3,&uStack_78,puVar5[1]);
  lVar10 = *(longlong *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x38);
  if (lVar10 == 0) goto code_r0x00018084cc59;
  plVar3 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
  if (param_4 == 1) {
    if (*(int *)(TI_SparkPescaJanela + 0xe4) == 0) {
      func_0x000180315660(TI_SparkPescaJanela);
    }
    uStack_78 = *(undefined8 *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x10);
    uStack_70 = *(undefined8 *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x18);
  }
  else {
    if (*(int *)(TI_SparkPescaJanela + 0xe4) == 0) {
      func_0x000180315660(TI_SparkPescaJanela);
    }
    uStack_78 = **(undefined8 **)(TI_SparkPescaJanela + 0xb8);
    uStack_70 = (*(undefined8 **)(TI_SparkPescaJanela + 0xb8))[1];
  }
  puVar5 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(auStack_58,&uStack_78,0);
  if (plVar3 == (longlong *)0x0) {
code_r0x00018084cc5f:
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar10 = *plVar3;
  uVar4 = *puVar5;
  uVar6 = puVar5[1];
  uVar11 = *(undefined4 *)(puVar5 + 2);
  if (*(ushort *)(lVar10 + 0x12e) != 0) {
    uVar8 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
        puVar5 = (undefined8 *)
                 ((longlong)
                  (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) + 9) * 0x10
                  + 0x138 + lVar10);
        goto code_r0x00018084c6d9;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ushort *)(lVar10 + 0x12e));
  }
  puVar5 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,9);
code_r0x00018084c6d9:
  uStack_78 = uVar4;
  uStack_70 = uVar6;
  uStack_68 = uVar11;
  (*(code *)*puVar5)(plVar3,&uStack_78,puVar5[1]);
  if (*(int *)(TI_SparkPescaJanela + 0xe4) == 0) {
    func_0x000180315660(TI_SparkPescaJanela);
  }
  plVar3 = *(longlong **)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x48);
  iStack_88 = param_2;
  uVar4 = func_0x000180314670(_DAT_1834c6268,&iStack_88);
  iStack_84 = iVar1 * 2;
  uVar6 = func_0x000180314670(_DAT_1834c6268,&iStack_84);
  uVar4 = System_String__Format(LIT_"'{0} / {1}'",uVar4,uVar6,0);
  if (plVar3 == (longlong *)0x0) goto code_r0x00018084cc5f;
  (**(code **)(*plVar3 + 0xe48))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0xe50));
  plVar3 = *(longlong **)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x40);
  aiStack_80[0] = 0;
  if (-1 < param_1) {
    aiStack_80[0] = param_1;
  }
  uVar4 = func_0x000180314670(_DAT_1834c6268,aiStack_80);
  uVar4 = System_String__Format(LIT_"'{0}s'",uVar4,0);
  if (plVar3 == (longlong *)0x0) goto code_r0x00018084cc5f;
  (**(code **)(*plVar3 + 0xe48))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0xe50));
  lVar10 = *(longlong *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x40);
  if (lVar10 == 0) goto code_r0x00018084cc5f;
  plVar3 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
  if (param_1 < 0xb) {
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660(TI_SparkEstilo);
    }
    uStack_78 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x90);
    uStack_70 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x98);
  }
  else {
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660(TI_SparkEstilo);
    }
    uStack_78 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x40);
    uStack_70 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x48);
  }
  puVar5 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(auStack_58,&uStack_78,0);
  if (plVar3 == (longlong *)0x0) goto code_r0x00018084cc59;
  lVar10 = *plVar3;
  uVar4 = *puVar5;
  uVar6 = puVar5[1];
  uVar11 = *(undefined4 *)(puVar5 + 2);
  if (*(ushort *)(lVar10 + 0x12e) != 0) {
    uVar8 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
        puVar5 = (undefined8 *)
                 ((longlong)
                  (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) + 0x2f) *
                  0x10 + 0x138 + lVar10);
        goto code_r0x00018084c8e9;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ushort *)(lVar10 + 0x12e));
  }
  puVar5 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x00018084c8e9:
  uStack_78 = uVar4;
  uStack_70 = uVar6;
  uStack_68 = uVar11;
  (*(code *)*puVar5)(plVar3,&uStack_78,puVar5[1]);
  if (param_4 == 1) {
    if (*(int *)(TI_SparkPescaJanela + 0xe4) == 0) {
      func_0x000180315660(TI_SparkPescaJanela);
    }
    uVar4 = LIT_"'The fish is resting... or is it?'";
    if (param_3 == 1) {
      uVar4 = LIT_"'The fish is fighting... or is it?'";
    }
    plVar3 = *(longlong **)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x50);
    if (plVar3 == (longlong *)0x0) goto code_r0x00018084cc59;
    (**(code **)(*plVar3 + 0xe48))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0xe50));
    if (*(int *)(TI_SparkPescaJanela + 0xe4) == 0) {
      func_0x000180315660(TI_SparkPescaJanela);
    }
    lVar10 = *(longlong *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x50);
    if (lVar10 == 0) goto code_r0x00018084cc59;
    plVar3 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
    uStack_78 = *(undefined8 *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x20);
    uStack_70 = *(undefined8 *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x28);
    puVar7 = (undefined4 *)UnityEngine_UIElements_StyleColor__op_Implicit(auStack_58,&uStack_78,0);
    if (plVar3 == (longlong *)0x0) goto code_r0x00018084cc59;
    lVar10 = *plVar3;
    uVar12 = *puVar7;
    uVar13 = puVar7[1];
    uVar14 = puVar7[2];
    uVar15 = puVar7[3];
    uVar11 = puVar7[4];
    if (*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar9 = *(longlong *)(lVar10 + 0xb0);
      uVar8 = 0;
      do {
        if (*(longlong *)(lVar9 + (ulonglong)uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        goto code_r0x00018084cbe9;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ushort *)(lVar10 + 0x12e));
    }
  }
  else {
    if (*(int *)(TI_SparkPescaJanela + 0xe4) == 0) {
      func_0x000180315660(TI_SparkPescaJanela);
    }
    uVar4 = LIT_"'The fish is resting.'";
    if (param_3 == 1) {
      uVar4 = LIT_"'The fish is fighting!'";
    }
    plVar3 = *(longlong **)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x50);
    if (plVar3 == (longlong *)0x0) goto code_r0x00018084cc59;
    (**(code **)(*plVar3 + 0xe48))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0xe50));
    if (*(int *)(TI_SparkPescaJanela + 0xe4) == 0) {
      func_0x000180315660(TI_SparkPescaJanela);
    }
    lVar10 = *(longlong *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x50);
    if (lVar10 == 0) goto code_r0x00018084cc59;
    plVar3 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
    if (param_3 == 1) {
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      uStack_78 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x90);
      uStack_70 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x98);
    }
    else {
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      uStack_78 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0xa0);
      uStack_70 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0xa8);
    }
    puVar7 = (undefined4 *)UnityEngine_UIElements_StyleColor__op_Implicit(auStack_58,&uStack_78,0);
    if (plVar3 == (longlong *)0x0) goto code_r0x00018084cc59;
    lVar10 = *plVar3;
    uVar12 = *puVar7;
    uVar13 = puVar7[1];
    uVar14 = puVar7[2];
    uVar15 = puVar7[3];
    uVar11 = puVar7[4];
    if (*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar9 = *(longlong *)(lVar10 + 0xb0);
      uVar8 = 0;
      do {
        if (*(longlong *)(lVar9 + (ulonglong)uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        goto code_r0x00018084cbe9;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ushort *)(lVar10 + 0x12e));
    }
  }
  puVar5 = (undefined8 *)FUN_180312860(plVar3,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x00018084ca89:
  uStack_78 = CONCAT44(uVar13,uVar12);
  uStack_70 = CONCAT44(uVar15,uVar14);
  uStack_68 = uVar11;
  (*(code *)*puVar5)(plVar3,&uStack_78,puVar5[1]);
  if (*(int *)(TI_SparkPescaJanela + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar4 = LIT_"''";
  if ((*(int *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x88) == 0) &&
     (uVar4 = LIT_"'Use Pumping'", param_3 == 1)) {
    uVar4 = LIT_"'Use Reeling'";
  }
  plVar3 = *(longlong **)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x60);
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018084cc52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0xe48))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0xe50));
    return;
  }
code_r0x00018084cc59:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
code_r0x00018084cbe9:
  puVar5 = (undefined8 *)
           ((longlong)(*(int *)(lVar9 + 8 + (ulonglong)uVar8 * 0x10) + 0x2f) * 0x10 + 0x138 + lVar10
           );
  goto code_r0x00018084ca89;
}

