// SparkQuestHud__Redesenha__1806b3b90 @ 0x1806b3b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkQuestHud__Redesenha__1806b3b90(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iStackX_18;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 *puStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  longlong lStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulonglong uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  
  if (cRam00000001834b3fde == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkQuests.Meta>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<int>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkQuests.Meta>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkQuests.Meta>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<SparkQuests.Meta>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<int>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<SparkQuests.Meta>.get_Count);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkQuests);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
    FUN_180315380(MD_SparkQuestHud.__c__DisplayClass26_0._Redesenha_b__0);
    FUN_180315380(MD_SparkQuestHud.__c__DisplayClass26_0._Redesenha_b__1);
    FUN_180315380(MD_SparkQuestHud.__c__DisplayClass26_0._Redesenha_b__2);
    FUN_180315380(TI_SparkQuestHud.<>c__DisplayClass26_0);
    FUN_180315380(MR_System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>..ctor);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Go to: '");
    FUN_180315380(LIT_"''");
    cRam00000001834b3fde = '\x01';
  }
  uStack_148 = 0;
  uStack_140 = 0;
  lStack_138 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  UnityEngine_UIElements_VisualElement__Clear(*(undefined8 *)(param_1 + 0x28),0);
  lVar6 = *(longlong *)(param_1 + 0x60);
  if (lVar6 != 0) {
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    iVar1 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
    }
    if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
      func_0x000180315660(TI_SparkQuests);
    }
    lVar6 = *(longlong *)(*(longlong *)(TI_SparkQuests + 0xb8) + 0x10);
    if (lVar6 != 0) {
      iStackX_18 = 0;
      FUN_180be3fd0(&uStack_1b8,lVar6,MR_System.Collections.Generic.List<int>.GetEnumerator);
      uStack_f8 = (undefined4)uStack_1b8;
      uStack_f4 = uStack_1b8._4_4_;
      uStack_f0 = (undefined4)uStack_1b0;
      uStack_ec = uStack_1b0._4_4_;
      uStack_e8 = CONCAT44(uStack_1a4,uStack_1a8);
      uStack_168 = 0;
      puStack_160 = &uStack_f8;
      while (cVar5 = FUN_1812f11f0(&uStack_f8,MR_System.Collections.Generic.List<int>.MoveNext), uVar4 = uStack_e8, cVar5 != '\0') {
        uVar3 = (undefined4)uStack_e8;
        lVar6 = func_0x000180315580(TI_SparkQuestHud.<>c__DisplayClass26_0);
        SparkMapaWindow_Loja___ctor__1803f01b0(lVar6,0);
        if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar7 = SparkQuests__Info(uVar4 & 0xffffffff,0);
        lVar8 = SparkQuests__PassoDe(uVar4 & 0xffffffff,0);
        lStack_130 = lVar8;
        if (lVar7 != 0) {
          iStackX_18 = iStackX_18 + 1;
          uVar9 = *(undefined8 *)(lVar7 + 0x10);
          uStack_198 = 0;
          uStack_190 = 0;
          uStack_188 = 0;
          uStack_178 = 0x3f56d6d73f800000;
          uStack_170 = 0x3f8000003ef0f0f1;
          func_0x000180cb7cb0(&uStack_198,&uStack_178,MR_System.Nullable<UnityEngine.Color>..ctor);
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660();
          }
          uStack_1b8 = uStack_198;
          uStack_1b0 = uStack_190;
          uStack_1a8 = uStack_188;
          uVar9 = SparkEstilo__Texto__180722af0(uVar9,0xc,&uStack_1b8,1,0);
          if (lVar6 == 0) goto code_r0x0001806b485a;
          *(undefined8 *)(lVar6 + 0x18) = uVar9;
          func_0x000180314690(lVar6 + 0x18,uVar9);
          if (*(longlong *)(lVar6 + 0x18) == 0) goto code_r0x0001806b4855;
          lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar6 + 0x18),0);
          puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_b8);
          if (lVar7 == 0) goto code_r0x0001806b4850;
          uStack_128 = *puVar10;
          uStack_120 = *(undefined4 *)(puVar10 + 1);
          FUN_1800050f0(0x51,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_128);
          if (*(longlong *)(lVar6 + 0x18) == 0) goto code_r0x0001806b484b;
          lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar6 + 0x18),0);
          uVar9 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
          if (lVar7 == 0) goto code_r0x0001806b4846;
          FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar7,uVar9);
          if (*(longlong *)(lVar6 + 0x18) == 0) goto code_r0x0001806b4841;
          UnityEngine_UIElements_VisualElement__set_pickingMode(*(longlong *)(lVar6 + 0x18),0,0);
          *(undefined4 *)(lVar6 + 0x10) = uVar3;
          lVar7 = *(longlong *)(lVar6 + 0x18);
          uVar9 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
          FUN_18055b980(uVar9,lVar6,MD_SparkQuestHud.__c__DisplayClass26_0._Redesenha_b__0,0);
          if (lVar7 == 0) goto code_r0x0001806b483c;
          FUN_180990d50(lVar7,uVar9,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
          lVar7 = *(longlong *)(lVar6 + 0x18);
          uVar9 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
          FUN_18055b980(uVar9,lVar6,MD_SparkQuestHud.__c__DisplayClass26_0._Redesenha_b__1,0);
          if (lVar7 == 0) goto code_r0x0001806b4837;
          FUN_180990d50(lVar7,uVar9,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
          lVar7 = *(longlong *)(lVar6 + 0x18);
          uVar9 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
          FUN_18055b980(uVar9,lVar6,MD_SparkQuestHud.__c__DisplayClass26_0._Redesenha_b__2,0);
          if (lVar7 == 0) goto code_r0x0001806b4832;
          FUN_180990d50(lVar7,uVar9,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
          if (*(longlong *)(param_1 + 0x28) == 0) goto code_r0x0001806b482d;
          UnityEngine_UIElements_VisualElement__Add
                    (*(longlong *)(param_1 + 0x28),*(undefined8 *)(lVar6 + 0x18),0);
          if (lVar8 != 0) {
            cVar5 = func_0x000181707e50(*(undefined8 *)(lVar8 + 0x10),0);
            if (cVar5 == '\0') {
              uVar9 = *(undefined8 *)(lVar8 + 0x10);
              if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                func_0x000180315660(TI_SparkEstilo);
              }
              uStack_178 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
              uStack_170 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
              uStack_198 = 0;
              uStack_190 = 0;
              uStack_188 = 0;
              func_0x000180cb7cb0(&uStack_198,&uStack_178,MR_System.Nullable<UnityEngine.Color>..ctor);
              uStack_1b8 = uStack_198;
              uStack_1b0 = uStack_190;
              uStack_1a8 = uStack_188;
              lVar6 = SparkEstilo__Texto__180722af0(uVar9,10,&uStack_1b8,0,0);
              if (lVar6 == 0) goto code_r0x0001806b47e0;
              lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
              uVar9 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
              if (lVar7 == 0) goto code_r0x0001806b47db;
              FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar7,uVar9);
              if (*(longlong *)(param_1 + 0x28) == 0) goto code_r0x0001806b47d5;
              UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x28),lVar6,0);
            }
            if ((*(longlong *)(lVar8 + 0x28) == 0) ||
               (*(int *)(*(longlong *)(lVar8 + 0x28) + 0x18) < 1)) {
              cVar5 = func_0x000181707e50(*(undefined8 *)(lVar8 + 0x20),0);
              if (cVar5 == '\0') {
                lVar6 = *(longlong *)(param_1 + 0x28);
                uVar9 = System_String__Concat(LIT_"'Go to: '",*(undefined8 *)(lVar8 + 0x20),0);
                if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                  func_0x000180315660(TI_SparkEstilo);
                }
                uStack_178 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0xa0);
                uStack_170 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0xa8);
                uStack_198 = 0;
                uStack_190 = 0;
                uStack_188 = 0;
                func_0x000180cb7cb0(&uStack_198,&uStack_178,MR_System.Nullable<UnityEngine.Color>..ctor);
                uStack_1b8 = uStack_198;
                uStack_1b0 = uStack_190;
                uStack_1a8 = uStack_188;
                uVar9 = SparkEstilo__Texto__180722af0(uVar9,0xb,&uStack_1b8,0,0);
                if (lVar6 == 0) goto code_r0x0001806b4828;
                UnityEngine_UIElements_VisualElement__Add(lVar6,uVar9,0);
              }
            }
            else {
              FUN_180bada40(&uStack_1b8,*(longlong *)(lVar8 + 0x28),MR_System.Collections.Generic.List<SparkQuests.Meta>.GetEnumerator);
              uStack_148 = uStack_1b8;
              uStack_140 = uStack_1b0;
              lStack_138 = CONCAT44(uStack_1a4,uStack_1a8);
              uStack_158 = 0;
              puStack_150 = &uStack_148;
              while (cVar5 = FUN_1812fa7e0(&uStack_148,MR_System.Collections.Generic.List<SparkQuests.Meta>.MoveNext), lVar6 = lStack_138,
                    cVar5 != '\0') {
                lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                UnityEngine_UIElements_VisualElement___ctor(lVar7,0);
                if (lVar7 == 0) goto code_r0x0001806b481d;
                lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                uVar9 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                if (lVar8 == 0) goto code_r0x0001806b4818;
                FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar8,uVar9);
                lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                uVar9 = FUN_180eb5810(3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Justify>.op_Implicit);
                if (lVar8 == 0) goto code_r0x0001806b4813;
                FUN_180005060(0x45,TI_UnityEngine.UIElements.IStyle,lVar8,uVar9);
                lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a8);
                if (lVar8 == 0) goto code_r0x0001806b480e;
                uStack_118 = *puVar10;
                uStack_110 = *(undefined4 *)(puVar10 + 1);
                FUN_1800050f0(0x51,TI_UnityEngine.UIElements.IStyle,lVar8,&uStack_118);
                UnityEngine_UIElements_VisualElement__set_pickingMode(lVar7,1,0);
                if (lVar6 == 0) goto code_r0x0001806b4809;
                uVar9 = SparkUI__NomeDoItem(*(undefined4 *)(lVar6 + 0x10),0);
                if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                  func_0x000180315660();
                }
                uStack_1b8 = 0;
                uStack_1b0 = 0;
                uStack_1a8 = 0;
                lVar8 = SparkEstilo__Texto__180722af0(uVar9,0xb,&uStack_1b8,0,0);
                if (lVar8 == 0) goto code_r0x0001806b4804;
                lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                uVar9 = func_0x000182601c10(0x3f800000,0);
                if (lVar11 == 0) goto code_r0x0001806b47ff;
                FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar11,uVar9);
                lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_98);
                if (lVar11 == 0) goto code_r0x0001806b47fa;
                uStack_108 = *puVar10;
                uStack_100 = *(undefined4 *)(puVar10 + 1);
                FUN_1800050f0(0x4f,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_108);
                UnityEngine_UIElements_VisualElement__Add(lVar7,lVar8,0);
                uStack_1b8 = 0;
                uStack_1b0 = 0;
                uStack_1a8 = 0;
                lVar8 = SparkEstilo__Texto__180722af0(LIT_"''",0xb,&uStack_1b8,0,0);
                if (lVar8 == 0) goto code_r0x0001806b47f5;
                lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
                uVar9 = func_0x000182601c10(0,0);
                if (lVar11 == 0) goto code_r0x0001806b47f0;
                FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar11,uVar9);
                UnityEngine_UIElements_VisualElement__Add(lVar7,lVar8,0);
                if (*(longlong *)(param_1 + 0x28) == 0) goto code_r0x0001806b47eb;
                UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x28),lVar7,0);
                lVar7 = *(longlong *)(param_1 + 0x60);
                uStack_d8 = 0;
                uStack_d0 = 0;
                System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor
                          (&uStack_d8,lVar8,lVar6,MR_System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>..ctor);
                if (lVar7 == 0) goto code_r0x0001806b47e6;
                uStack_178 = uStack_d8;
                uStack_170 = uStack_d0;
                FUN_180002e30(lVar7,&uStack_178,MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>.Add);
              }
              Gear__UpdateWeaponType__1803dadf0(&uStack_148,MR_System.Collections.Generic.List<SparkQuests.Meta>.Dispose);
            }
          }
        }
      }
      Gear__UpdateWeaponType__1803dadf0(puStack_160,MR_System.Collections.Generic.List<int>.Dispose);
      if (*(longlong *)(param_1 + 0x20) != 0) {
        lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x20),0);
        uVar9 = FUN_180eb5810(iStackX_18 < 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar6 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar9);
          SparkQuestHud__AtualizaContas__1806b09b0(param_1,0);
          return;
        }
      }
    }
  }
  FUN_1803155d0();
code_r0x0001806b47d5:
  FUN_1803155d0();
code_r0x0001806b47db:
  FUN_1803155d0();
code_r0x0001806b47e0:
  FUN_1803155d0();
code_r0x0001806b47e6:
  FUN_1803155d0();
code_r0x0001806b47eb:
  FUN_1803155d0();
code_r0x0001806b47f0:
  FUN_1803155d0();
code_r0x0001806b47f5:
  FUN_1803155d0();
code_r0x0001806b47fa:
  FUN_1803155d0();
code_r0x0001806b47ff:
  FUN_1803155d0();
code_r0x0001806b4804:
  FUN_1803155d0();
code_r0x0001806b4809:
  FUN_1803155d0();
code_r0x0001806b480e:
  FUN_1803155d0();
code_r0x0001806b4813:
  FUN_1803155d0();
code_r0x0001806b4818:
  FUN_1803155d0();
code_r0x0001806b481d:
  FUN_1803155d0();
  FUN_180311490();
code_r0x0001806b4828:
  FUN_1803155d0();
code_r0x0001806b482d:
  FUN_1803155d0();
code_r0x0001806b4832:
  FUN_1803155d0();
code_r0x0001806b4837:
  FUN_1803155d0();
code_r0x0001806b483c:
  FUN_1803155d0();
code_r0x0001806b4841:
  FUN_1803155d0();
code_r0x0001806b4846:
  FUN_1803155d0();
code_r0x0001806b484b:
  FUN_1803155d0();
code_r0x0001806b4850:
  FUN_1803155d0();
code_r0x0001806b4855:
  FUN_1803155d0();
code_r0x0001806b485a:
  FUN_1803155d0();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

