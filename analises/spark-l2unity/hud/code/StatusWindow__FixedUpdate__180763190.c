// StatusWindow__FixedUpdate__180763190 @ 0x180763190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void StatusWindow__FixedUpdate__180763190(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 auStackX_18 [2];
  float afStackX_20 [2];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [56];
  undefined *puStack_30;
  
  puStack_30 = &UNK_1807631a0;
  fVar11 = (float)FUN_182436650(0);
  if (fVar11 - *(float *)(param_1 + 0xf8) < 0.5) {
    return;
  }
  puStack_30 = &UNK_1807631bc;
  uVar12 = FUN_182436650(0);
  *(undefined4 *)(param_1 + 0xf8) = uVar12;
  if (cRam00000001834b42c0 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_UnityEngine.UIElements.IResolvedStyle);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_PlayerStats);
    FUN_180315380(TI_PlayerStatus);
    FUN_180315380(LIT_"'%'");
    FUN_180315380(LIT_"'00.00%'");
    FUN_180315380(LIT_"'0.00'");
    FUN_180315380(LIT_"'/'");
    FUN_180315380(LIT_"'Player status is not of type playerstatus'");
    cRam00000001834b42c0 = '\x01';
  }
  auStackX_18[0] = 0;
  afStackX_20[0] = 0.0;
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  uVar7 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar6 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if (cVar6 != '\0') {
    return;
  }
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  if (**(longlong **)(TI_PlayerEntity + 0xb8) == 0) goto code_r0x0001807640a5;
  plVar1 = *(longlong **)(**(longlong **)(TI_PlayerEntity + 0xb8) + 0x38);
  if (plVar1 == (longlong *)0x0) {
DAT_180764080:
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__LogWarning(LIT_"'Player status is not of type playerstatus'",0);
    return;
  }
  lVar9 = *plVar1;
  if ((*(byte *)(lVar9 + 0x130) < *(byte *)(TI_PlayerStatus + 0x130)) ||
     (*(longlong *)
       (*(longlong *)(lVar9 + 200) + -8 + (ulonglong)*(byte *)(TI_PlayerStatus + 0x130) * 8) !=
      TI_PlayerStatus)) goto DAT_180764080;
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  if (**(longlong **)(TI_PlayerEntity + 0xb8) == 0) goto code_r0x0001807640a5;
  plVar1 = *(longlong **)(**(longlong **)(TI_PlayerEntity + 0xb8) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TI_PlayerStatus + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar1 + 200) + -8 + (ulonglong)*(byte *)(TI_PlayerStatus + 0x130) * 8
         ) != TI_PlayerStatus)) {
      FUN_1803146d0(plVar1,TI_PlayerStatus);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  if (**(longlong **)(TI_PlayerEntity + 0xb8) == 0) goto code_r0x0001807640a5;
  plVar2 = *(longlong **)(**(longlong **)(TI_PlayerEntity + 0xb8) + 0x40);
  if (plVar2 != (longlong *)0x0) {
    if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(TI_PlayerStats + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar2 + 200) + -8 + (ulonglong)*(byte *)(TI_PlayerStats + 0x130) * 8
         ) != TI_PlayerStats)) {
      FUN_1803146d0(plVar2,TI_PlayerStats);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    if (plVar2 == (longlong *)0x0) goto code_r0x0001807640a5;
    auStackX_18[0] = (undefined4)plVar2[2];
    plVar3 = *(longlong **)(param_1 + 0x90);
    uVar7 = System_Int32__ToString(auStackX_18,0);
    lVar9 = *plVar3;
    (**(code **)(lVar9 + 0xe48))(plVar3,uVar7,*(undefined8 *)(lVar9 + 0xe50));
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x88);
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    if ((**(longlong **)(TI_PlayerEntity + 0xb8) == 0) ||
       (lVar9 = *(longlong *)(**(longlong **)(TI_PlayerEntity + 0xb8) + 0x30), lVar9 == 0))
    goto code_r0x0001807640a5;
    lVar4 = *plVar3;
    (**(code **)(lVar4 + 0xe48))
              (plVar3,*(undefined8 *)(lVar9 + 0x18),*(undefined8 *)(lVar4 + 0xe50));
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    if (plVar1 == (longlong *)0x0) goto code_r0x0001807640a5;
    auStackX_18[0] = (undefined4)plVar1[4];
    plVar3 = *(longlong **)(param_1 + 0xa8);
    uVar7 = System_Int32__ToString(auStackX_18,0);
    if (plVar2 == (longlong *)0x0) goto code_r0x0001807640a5;
    auStackX_18[0] = (undefined4)plVar2[8];
    uVar8 = System_Int32__ToString(auStackX_18,0);
    uVar7 = System_String__Concat(uVar7,LIT_"'/'",uVar8,0);
    lVar9 = *plVar3;
    (**(code **)(lVar9 + 0xe48))(plVar3,uVar7,*(undefined8 *)(lVar9 + 0xe50));
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    if (plVar1 == (longlong *)0x0) goto code_r0x0001807640a5;
    auStackX_18[0] = (undefined4)plVar1[2];
    plVar3 = *(longlong **)(param_1 + 0x98);
    uVar7 = System_Int32__ToString(auStackX_18,0);
    if (plVar2 == (longlong *)0x0) goto code_r0x0001807640a5;
    auStackX_18[0] = (undefined4)plVar2[7];
    uVar8 = System_Int32__ToString(auStackX_18,0);
    uVar7 = System_String__Concat(uVar7,LIT_"'/'",uVar8,0);
    lVar9 = *plVar3;
    (**(code **)(lVar9 + 0xe48))(plVar3,uVar7,*(undefined8 *)(lVar9 + 0xe50));
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    if (plVar1 == (longlong *)0x0) goto code_r0x0001807640a5;
    auStackX_18[0] = *(undefined4 *)((longlong)plVar1 + 0x14);
    plVar3 = *(longlong **)(param_1 + 0xa0);
    uVar7 = System_Int32__ToString(auStackX_18,0);
    if (plVar2 == (longlong *)0x0) goto code_r0x0001807640a5;
    auStackX_18[0] = *(undefined4 *)((longlong)plVar2 + 0x3c);
    uVar8 = System_Int32__ToString(auStackX_18,0);
    uVar7 = System_String__Concat(uVar7,LIT_"'/'",uVar8,0);
    lVar9 = *plVar3;
    (**(code **)(lVar9 + 0xe48))(plVar3,uVar7,*(undefined8 *)(lVar9 + 0xe50));
  }
  if (*(longlong *)(param_1 + 0xb0) == 0) {
code_r0x000180763cf1:
    plVar3 = *(longlong **)(param_1 + 0xb0);
    if (plVar3 == (longlong *)0x0) goto code_r0x0001807640a5;
    (**(code **)(*plVar3 + 0xe48))(plVar3,LIT_"'00.00%'",*(undefined8 *)(*plVar3 + 0xe50));
  }
  else {
    if (plVar2 == (longlong *)0x0) goto code_r0x0001807640a5;
    if (*(float *)(plVar2 + 0xf) <= 0.0) goto code_r0x000180763cf1;
    afStackX_20[0] = *(float *)(plVar2 + 0xf) * 100.0;
    plVar3 = *(longlong **)(param_1 + 0xb0);
    uVar7 = System_Single__ToString(afStackX_20,LIT_"'0.00'",0);
    uVar7 = System_String__Concat(uVar7,LIT_"'%'",0);
    if (plVar3 == (longlong *)0x0) goto code_r0x0001807640a5;
    (**(code **)(*plVar3 + 0xe48))(plVar3,uVar7,*(undefined8 *)(*plVar3 + 0xe50));
  }
  if ((*(longlong *)(param_1 + 0xc0) != 0) && (*(longlong *)(param_1 + 0xb8) != 0)) {
    if ((plVar1 == (longlong *)0x0) || (plVar2 == (longlong *)0x0)) goto code_r0x0001807640a5;
    fVar11 = (float)(int)plVar1[4] / (float)(int)plVar2[8];
    lVar9 = UnityEngine_UIElements_VisualElement__get_resolvedStyle
                      (*(undefined8 *)(param_1 + 0xc0),0);
    if (lVar9 == 0) goto code_r0x0001807640a5;
    fVar13 = (float)FUN_1800020c0(0x51,TI_UnityEngine.UIElements.IResolvedStyle,lVar9);
    if (*(longlong *)(param_1 + 0xb8) == 0) goto code_r0x0001807640a5;
    lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb8),0);
    fVar14 = 1.0;
    if (fVar11 <= 1.0) {
      fVar14 = fVar11;
    }
    puVar10 = (undefined8 *)
              UnityEngine_UIElements_StyleLength__op_Implicit(auStack_68,fVar14 * fVar13,0);
    if (lVar9 == 0) goto code_r0x0001807640a5;
    uStack_78 = *puVar10;
    uStack_70 = *(undefined4 *)(puVar10 + 1);
    FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_78);
  }
  if ((*(longlong *)(param_1 + 0xd0) != 0) && (*(longlong *)(param_1 + 200) != 0)) {
    if ((plVar1 == (longlong *)0x0) || (plVar2 == (longlong *)0x0)) goto code_r0x0001807640a5;
    fVar11 = (float)(int)plVar1[2] / (float)(int)plVar2[7];
    lVar9 = UnityEngine_UIElements_VisualElement__get_resolvedStyle
                      (*(undefined8 *)(param_1 + 0xd0),0);
    if (lVar9 == 0) goto code_r0x0001807640a5;
    fVar13 = (float)FUN_1800020c0(0x51,TI_UnityEngine.UIElements.IResolvedStyle,lVar9);
    if (*(longlong *)(param_1 + 200) == 0) goto code_r0x0001807640a5;
    lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 200),0);
    fVar14 = 1.0;
    if (fVar11 <= 1.0) {
      fVar14 = fVar11;
    }
    puVar10 = (undefined8 *)
              UnityEngine_UIElements_StyleLength__op_Implicit(auStack_68,fVar14 * fVar13,0);
    if (lVar9 == 0) goto code_r0x0001807640a5;
    uStack_78 = *puVar10;
    uStack_70 = *(undefined4 *)(puVar10 + 1);
    FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_78);
  }
  if ((*(longlong *)(param_1 + 0xe0) != 0) && (*(longlong *)(param_1 + 0xd8) != 0)) {
    if ((plVar1 == (longlong *)0x0) || (plVar2 == (longlong *)0x0)) goto code_r0x0001807640a5;
    fVar11 = (float)*(int *)((longlong)plVar1 + 0x14) / (float)*(int *)((longlong)plVar2 + 0x3c);
    lVar9 = UnityEngine_UIElements_VisualElement__get_resolvedStyle
                      (*(undefined8 *)(param_1 + 0xe0),0);
    if (lVar9 == 0) goto code_r0x0001807640a5;
    fVar13 = (float)FUN_1800020c0(0x51,TI_UnityEngine.UIElements.IResolvedStyle,lVar9);
    if (*(longlong *)(param_1 + 0xd8) == 0) goto code_r0x0001807640a5;
    lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xd8),0);
    fVar14 = 1.0;
    if (fVar11 <= 1.0) {
      fVar14 = fVar11;
    }
    puVar10 = (undefined8 *)
              UnityEngine_UIElements_StyleLength__op_Implicit(auStack_68,fVar14 * fVar13,0);
    if (lVar9 == 0) goto code_r0x0001807640a5;
    uStack_78 = *puVar10;
    uStack_70 = *(undefined4 *)(puVar10 + 1);
    FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_78);
  }
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    return;
  }
  lVar9 = UnityEngine_UIElements_VisualElement__get_resolvedStyle(*(undefined8 *)(param_1 + 0xf0),0)
  ;
  if ((lVar9 != 0) &&
     (fVar11 = (float)FUN_1800020c0(0x51,TI_UnityEngine.UIElements.IResolvedStyle,lVar9), plVar2 != (longlong *)0x0)) {
    fVar13 = *(float *)(plVar2 + 0xf);
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xe8),0);
      fVar14 = 1.0;
      if (fVar13 <= 1.0) {
        fVar14 = fVar13;
      }
      puVar10 = (undefined8 *)
                UnityEngine_UIElements_StyleLength__op_Implicit(auStack_68,fVar14 * fVar11,0);
      if (lVar9 != 0) {
        uStack_78 = *puVar10;
        uStack_70 = *(undefined4 *)(puVar10 + 1);
        FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_78);
        return;
      }
    }
  }
code_r0x0001807640a5:
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

