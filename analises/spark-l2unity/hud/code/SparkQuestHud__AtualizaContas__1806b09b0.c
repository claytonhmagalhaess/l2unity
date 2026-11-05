// SparkQuestHud__AtualizaContas__1806b09b0 @ 0x1806b09b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkQuestHud__AtualizaContas__1806b09b0(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  int iVar10;
  int aiStackX_8 [4];
  int aiStackX_18 [2];
  longlong lStackX_20;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 uStack_98;
  undefined4 *puStack_90;
  longlong lStack_88;
  longlong lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *plStack_68;
  longlong lStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *plStack_48;
  longlong lStack_40;
  
  if (cRam00000001834b3fdf == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>.GetEnumerator);
    FUN_180315380(TI_System.Math);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(LIT_"'{0} / {1}'");
    FUN_180315380(LIT_"'{0} / {1}+'");
    cRam00000001834b3fdf = '\x01';
  }
  lStackX_20 = 0;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_180badb20(&uStack_58,*(longlong *)(param_1 + 0x60),MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>.GetEnumerator);
  uStack_78 = uStack_58;
  uStack_74 = uStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  plStack_68 = plStack_48;
  lStack_60 = lStack_40;
  uStack_98 = 0;
  puStack_90 = &uStack_78;
  while( true ) {
    cVar4 = FUN_1812ec720(&uStack_78,MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>.MoveNext);
    lVar7 = lStack_60;
    plVar3 = plStack_68;
    if (cVar4 == '\0') {
      Gear__UpdateWeaponType__1803dadf0(&uStack_78,MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>.Dispose);
      return;
    }
    if (DAT_1834b3102 == '\0') {
      FUN_180315380(TI_PlayerInventory);
      DAT_1834b3102 = '\x01';
    }
    uVar6 = **(undefined8 **)(TI_PlayerInventory + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if (cVar4 != '\0') break;
code_r0x0001806b0b55:
    lStackX_20 = 0;
    if (lVar7 == 0) goto code_r0x0001806b0e4d;
code_r0x0001806b0b68:
    iVar1 = *(int *)(lVar7 + 0x14);
    if (*(int *)(TI_System.Math + 0xe4) == 0) {
      func_0x000180315660();
    }
    iVar10 = -iVar1;
    if (iVar10 < 0) {
      iVar10 = iVar1;
    }
    if (iVar10 < 1) {
      uVar6 = System_Int64__ToString(&lStackX_20,0);
      if (plVar3 == (longlong *)0x0) goto code_r0x0001806b0e3e;
      (**(code **)(*plVar3 + 0xe48))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 0xe50));
      lVar7 = UnityEngine_UIElements_VisualElement__get_style(plVar3,0);
      if (lStackX_20 < 1) {
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar5 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uStack_b8 = *(undefined4 *)(lVar5 + 0x40);
        uStack_b4 = *(undefined4 *)(lVar5 + 0x44);
        uStack_b0 = *(undefined4 *)(lVar5 + 0x48);
        uStack_ac = *(undefined4 *)(lVar5 + 0x4c);
      }
      else {
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar5 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uStack_b8 = *(undefined4 *)(lVar5 + 0x80);
        uStack_b4 = *(undefined4 *)(lVar5 + 0x84);
        uStack_b0 = *(undefined4 *)(lVar5 + 0x88);
        uStack_ac = *(undefined4 *)(lVar5 + 0x8c);
      }
      puVar8 = (undefined4 *)UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_58,&uStack_b8,0)
      ;
      if (lVar7 == 0) goto code_r0x0001806b0e39;
      uStack_b8 = *puVar8;
      uStack_b4 = puVar8[1];
      uStack_b0 = puVar8[2];
      uStack_ac = puVar8[3];
      uStack_a8 = puVar8[4];
      FUN_180004fc0(0x2f,TI_UnityEngine.UIElements.IStyle);
    }
    else {
      if (*(int *)(lVar7 + 0x14) < 0) {
        lStack_88 = lStackX_20;
        uVar6 = func_0x000180314670(_DAT_1834c6288,&lStack_88);
        aiStackX_8[0] = iVar10;
        uVar9 = func_0x000180314670(_DAT_1834c6268,aiStackX_8);
        uVar6 = System_String__Format(LIT_"'{0} / {1}+'",uVar6,uVar9,0);
      }
      else {
        lStack_80 = lStackX_20;
        uVar6 = func_0x000180314670(_DAT_1834c6288,&lStack_80);
        aiStackX_18[0] = iVar10;
        uVar9 = func_0x000180314670(_DAT_1834c6268,aiStackX_18);
        uVar6 = System_String__Format(LIT_"'{0} / {1}'",uVar6,uVar9,0);
      }
      if (plVar3 == (longlong *)0x0) goto code_r0x0001806b0e48;
      (**(code **)(*plVar3 + 0xe48))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 0xe50));
      lVar7 = UnityEngine_UIElements_VisualElement__get_style(plVar3,0);
      if (lStackX_20 < iVar10) {
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar5 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uStack_b8 = *(undefined4 *)(lVar5 + 0x40);
        uStack_b4 = *(undefined4 *)(lVar5 + 0x44);
        uStack_b0 = *(undefined4 *)(lVar5 + 0x48);
        uStack_ac = *(undefined4 *)(lVar5 + 0x4c);
      }
      else {
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar5 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uStack_b8 = *(undefined4 *)(lVar5 + 0x80);
        uStack_b4 = *(undefined4 *)(lVar5 + 0x84);
        uStack_b0 = *(undefined4 *)(lVar5 + 0x88);
        uStack_ac = *(undefined4 *)(lVar5 + 0x8c);
      }
      puVar8 = (undefined4 *)UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_58,&uStack_b8,0)
      ;
      if (lVar7 == 0) goto code_r0x0001806b0e43;
      uStack_b8 = *puVar8;
      uStack_b4 = puVar8[1];
      uStack_b0 = puVar8[2];
      uStack_ac = puVar8[3];
      uStack_a8 = puVar8[4];
      FUN_180004fc0(0x2f,TI_UnityEngine.UIElements.IStyle);
    }
  }
  lVar5 = FUN_180458380(0);
  if (lVar7 != 0) {
    if (lVar5 != 0) {
      lVar5 = PlayerInventory__GetItemById(lVar5,*(undefined4 *)(lVar7 + 0x10),0);
      if (lVar5 == 0) goto code_r0x0001806b0b55;
      lStackX_20 = (longlong)*(int *)(lVar5 + 0x28);
      goto code_r0x0001806b0b68;
    }
    FUN_1803155d0();
  }
  FUN_1803155d0();
code_r0x0001806b0e39:
  FUN_1803155d0();
code_r0x0001806b0e3e:
  FUN_1803155d0();
code_r0x0001806b0e43:
  FUN_1803155d0();
code_r0x0001806b0e48:
  FUN_1803155d0();
code_r0x0001806b0e4d:
  FUN_1803155d0();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

