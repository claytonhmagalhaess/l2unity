// SparkQuestWindow__MontaItens__1806e2170 @ 0x1806e2170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkQuestWindow__MontaItens__1806e2170(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  ushort uVar16;
  ushort uVar17;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_188;
  undefined4 *puStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong lStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [96];
  
  if (cRam00000001834b4067 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkQuests.Meta>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkQuests.Meta>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkQuests.Meta>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<SparkQuests.Meta>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<SparkQuests.Meta>.get_Count);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_TooltipManipulator);
    FUN_180315380(MR_System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>..ctor);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"''");
    cRam00000001834b4067 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0x128),0);
    lVar5 = *(longlong *)(param_1 + 0x140);
    if (lVar5 != 0) {
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      iVar1 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      }
      if (*(longlong *)(param_1 + 0x130) == 0) {
        bVar15 = false;
      }
      else {
        bVar15 = 0 < *(int *)(*(longlong *)(param_1 + 0x130) + 0x18);
      }
      if (*(longlong *)(param_1 + 0x120) != 0) {
        lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x120),0);
        uVar6 = FUN_180eb5810(bVar15 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar5 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
          if (*(longlong *)(param_1 + 0x128) != 0) {
            lVar5 = UnityEngine_UIElements_VisualElement__get_style
                              (*(longlong *)(param_1 + 0x128),0);
            uVar6 = FUN_180eb5810(bVar15 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
            if (lVar5 != 0) {
              FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
              if (bVar15 != false) {
                if (*(longlong *)(param_1 + 0x130) == 0) goto code_r0x0001806e2d8b;
                FUN_180bada40(&uStack_1b8,*(longlong *)(param_1 + 0x130),MR_System.Collections.Generic.List<SparkQuests.Meta>.GetEnumerator);
                uStack_138 = (undefined4)uStack_1b8;
                uStack_134 = uStack_1b8._4_4_;
                uStack_130 = (undefined4)uStack_1b0;
                uStack_12c = uStack_1b0._4_4_;
                lStack_128 = CONCAT44(uStack_1a4,uStack_1a8);
                uStack_188 = 0;
                puStack_180 = &uStack_138;
                while( true ) {
                  uVar17 = 0;
                  cVar4 = FUN_1812fa7e0(&uStack_138,MR_System.Collections.Generic.List<SparkQuests.Meta>.MoveNext);
                  lVar5 = lStack_128;
                  if (cVar4 == '\0') break;
                  lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                  UnityEngine_UIElements_VisualElement___ctor(lVar7,0);
                  if (lVar7 == 0) goto code_r0x0001806e2df1;
                  plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                  uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
                  if (plVar8 == (longlong *)0x0) goto code_r0x0001806e2dec;
                  lVar10 = *plVar8;
                  if (*(ushort *)(lVar10 + 0x12e) != 0) {
                    uVar16 = uVar17;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar9 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 +
                                           (ulonglong)uVar16 * 0x10) + 0x39) * 0x10 + 0x138 + lVar10
                                 );
                        goto code_r0x0001806e24d9;
                      }
                      uVar16 = uVar16 + 1;
                    } while (uVar16 < *(ushort *)(lVar10 + 0x12e));
                  }
                  puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x39);
code_r0x0001806e24d9:
                  (*(code *)*puVar9)(plVar8,uVar6,puVar9[1]);
                  plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                  uVar6 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
                  if (plVar8 == (longlong *)0x0) goto code_r0x0001806e2de7;
                  lVar10 = *plVar8;
                  if (*(ushort *)(lVar10 + 0x12e) != 0) {
                    uVar16 = uVar17;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar9 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 +
                                           (ulonglong)uVar16 * 0x10) + 3) * 0x10 + 0x138 + lVar10);
                        goto code_r0x0001806e2569;
                      }
                      uVar16 = uVar16 + 1;
                    } while (uVar16 < *(ushort *)(lVar10 + 0x12e));
                  }
                  puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,3);
code_r0x0001806e2569:
                  (*(code *)*puVar9)(plVar8,uVar6,puVar9[1]);
                  plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                  puVar9 = (undefined8 *)
                           UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a8,0x42100000,0);
                  if (plVar8 == (longlong *)0x0) goto code_r0x0001806e2de2;
                  uVar6 = *puVar9;
                  uVar2 = *(undefined4 *)(puVar9 + 1);
                  lVar10 = *plVar8;
                  if (*(ushort *)(lVar10 + 0x12e) != 0) {
                    do {
                      if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar9 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 +
                                           (ulonglong)uVar17 * 0x10) + 0x43) * 0x10 + 0x138 + lVar10
                                 );
                        goto code_r0x0001806e25f9;
                      }
                      uVar17 = uVar17 + 1;
                    } while (uVar17 < *(ushort *)(lVar10 + 0x12e));
                  }
                  puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001806e25f9:
                  uStack_178 = uVar6;
                  uStack_170 = uVar2;
                  (*(code *)*puVar9)(plVar8,&uStack_178,puVar9[1]);
                  lVar10 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                  UnityEngine_UIElements_VisualElement___ctor(lVar10,0);
                  if (lVar10 == 0) goto code_r0x0001806e2ddd;
                  plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                  plVar11 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                  puVar9 = (undefined8 *)
                           UnityEngine_UIElements_StyleLength__op_Implicit(auStack_98,0x42000000,0);
                  if (plVar11 == (longlong *)0x0) goto code_r0x0001806e2dd8;
                  uVar6 = *puVar9;
                  uVar2 = *(undefined4 *)(puVar9 + 1);
                  lVar12 = *plVar11;
                  if (*(ushort *)(lVar12 + 0x12e) != 0) {
                    uVar17 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar9 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 +
                                           (ulonglong)uVar17 * 0x10) + 0x43) * 0x10 + 0x138 + lVar12
                                 );
                        goto code_r0x0001806e26c9;
                      }
                      uVar17 = uVar17 + 1;
                    } while (uVar17 < *(ushort *)(lVar12 + 0x12e));
                  }
                  puVar9 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001806e26c9:
                  uStack_168 = uVar6;
                  uStack_160 = uVar2;
                  (*(code *)*puVar9)(plVar11,&uStack_168,puVar9[1]);
                  if (plVar8 == (longlong *)0x0) goto code_r0x0001806e2dd3;
                  lVar12 = *plVar8;
                  if (*(ushort *)(lVar12 + 0x12e) != 0) {
                    uVar17 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar9 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 +
                                           (ulonglong)uVar17 * 0x10) + 0xad) * 0x10 + 0x138 + lVar12
                                 );
                        goto code_r0x0001806e2749;
                      }
                      uVar17 = uVar17 + 1;
                    } while (uVar17 < *(ushort *)(lVar12 + 0x12e));
                  }
                  puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001806e2749:
                  uStack_158 = uVar6;
                  uStack_150 = uVar2;
                  (*(code *)*puVar9)(plVar8,&uStack_158,puVar9[1]);
                  plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                  puVar9 = (undefined8 *)
                           UnityEngine_UIElements_StyleLength__op_Implicit(auStack_88,0x41000000,0);
                  if (plVar8 == (longlong *)0x0) goto code_r0x0001806e2dce;
                  uVar6 = *puVar9;
                  uVar2 = *(undefined4 *)(puVar9 + 1);
                  lVar12 = *plVar8;
                  if (*(ushort *)(lVar12 + 0x12e) != 0) {
                    uVar17 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar9 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 +
                                           (ulonglong)uVar17 * 0x10) + 0x4f) * 0x10 + 0x138 + lVar12
                                 );
                        goto code_r0x0001806e27e9;
                      }
                      uVar17 = uVar17 + 1;
                    } while (uVar17 < *(ushort *)(lVar12 + 0x12e));
                  }
                  puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x0001806e27e9:
                  uStack_148 = uVar6;
                  uStack_140 = uVar2;
                  (*(code *)*puVar9)(plVar8,&uStack_148,puVar9[1]);
                  plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                  uVar6 = func_0x000182601c10(0,0);
                  if (plVar8 == (longlong *)0x0) goto code_r0x0001806e2dc9;
                  lVar12 = *plVar8;
                  if (*(ushort *)(lVar12 + 0x12e) != 0) {
                    uVar17 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar9 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar12 + 0xb0) + 8 +
                                           (ulonglong)uVar17 * 0x10) + 0x3d) * 0x10 + 0x138 + lVar12
                                 );
                        goto code_r0x0001806e2879;
                      }
                      uVar17 = uVar17 + 1;
                    } while (uVar17 < *(ushort *)(lVar12 + 0x12e));
                  }
                  puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x3d);
code_r0x0001806e2879:
                  (*(code *)*puVar9)(plVar8,uVar6,puVar9[1]);
                  lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                  lVar13 = IconTable__get_Instance(0);
                  uVar6 = 0;
                  if (lVar13 != 0) {
                    lVar13 = IconTable__get_Instance(0);
                    if (lVar5 == 0) goto code_r0x0001806e2d97;
                    if (lVar13 == 0) goto code_r0x0001806e2d91;
                    uVar6 = IconTable__GetIcon(lVar13,*(undefined4 *)(lVar5 + 0x10),0);
                  }
                  puVar9 = (undefined8 *)
                           UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_d8,uVar6,0);
                  if (lVar12 == 0) goto code_r0x0001806e2dc4;
                  uStack_1b8 = *puVar9;
                  uStack_1b0 = puVar9[1];
                  uStack_1a8 = *(undefined4 *)(puVar9 + 2);
                  uStack_1a4 = *(undefined4 *)((longlong)puVar9 + 0x14);
                  uStack_1a0 = *(undefined4 *)(puVar9 + 3);
                  uStack_19c = *(undefined4 *)((longlong)puVar9 + 0x1c);
                  uStack_198 = puVar9[4];
                  FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar12,&uStack_1b8);
                  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  SparkEstilo__Moldura__180721b40(lVar10,0);
                  lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                  lVar13 = IconTable__get_Instance(0);
                  uVar6 = 0;
                  if (lVar13 != 0) {
                    lVar13 = IconTable__get_Instance(0);
                    if (lVar5 == 0) goto code_r0x0001806e2da1;
                    if (lVar13 == 0) goto code_r0x0001806e2d9c;
                    uVar6 = IconTable__GetIcon(lVar13,*(undefined4 *)(lVar5 + 0x10),0);
                  }
                  puVar9 = (undefined8 *)
                           UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_118,uVar6,0);
                  if (lVar12 == 0) goto code_r0x0001806e2dbf;
                  uStack_1b8 = *puVar9;
                  uStack_1b0 = puVar9[1];
                  uStack_1a8 = *(undefined4 *)(puVar9 + 2);
                  uStack_1a4 = *(undefined4 *)((longlong)puVar9 + 0x14);
                  uStack_1a0 = *(undefined4 *)(puVar9 + 3);
                  uStack_19c = *(undefined4 *)((longlong)puVar9 + 0x1c);
                  uStack_198 = puVar9[4];
                  FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar12,&uStack_1b8);
                  UnityEngine_UIElements_VisualElement__Add(lVar7,lVar10,0);
                  UnityEngine_UIElements_VisualElement__set_pickingMode(lVar10,0,0);
                  UnityEngine_UIElements_VisualElement__set_pickingMode(lVar7,0,0);
                  if (lVar5 == 0) goto code_r0x0001806e2dba;
                  uVar6 = SparkQuestWindow__DicaDoItem(*(undefined4 *)(lVar5 + 0x10),0);
                  uVar14 = func_0x000180315580(TI_TooltipManipulator);
                  TooltipManipulator___ctor__1807b5900(uVar14,lVar7,1,uVar6,0);
                  UnityEngine_UIElements_VisualElementExtensions__AddManipulator(lVar7,uVar14,0);
                  lVar10 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                  UnityEngine_UIElements_VisualElement___ctor(lVar10,0);
                  if (lVar10 == 0) goto code_r0x0001806e2db5;
                  lVar12 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
                  uVar6 = func_0x000182601c10(0x3f800000,0);
                  if (lVar12 == 0) goto code_r0x0001806e2db0;
                  FUN_180005060(0x3b,TI_UnityEngine.UIElements.IStyle,lVar12,uVar6);
                  uVar6 = SparkUI__NomeDoItem(*(undefined4 *)(lVar5 + 0x10),0);
                  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uStack_118 = 0;
                  uStack_110 = 0;
                  uStack_108 = 0;
                  uVar6 = SparkEstilo__Texto__180722af0(uVar6,0xb,&uStack_118,0,0);
                  UnityEngine_UIElements_VisualElement__Add(lVar10,uVar6,0);
                  uStack_118 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
                  uStack_110 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
                  uStack_d8 = 0;
                  uStack_d0 = 0;
                  uStack_c8 = 0;
                  func_0x000180cb7cb0(&uStack_d8,&uStack_118,MR_System.Nullable<UnityEngine.Color>..ctor);
                  uStack_1b8 = uStack_d8;
                  uStack_1b0 = uStack_d0;
                  uStack_1a8 = uStack_c8;
                  uVar6 = SparkEstilo__Texto__180722af0(LIT_"''",10,&uStack_1b8,0,0);
                  UnityEngine_UIElements_VisualElement__Add(lVar10,uVar6,0);
                  UnityEngine_UIElements_VisualElement__Add(lVar7,lVar10,0);
                  if (*(longlong *)(param_1 + 0x128) == 0) goto code_r0x0001806e2dab;
                  UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x128),lVar7,0);
                  lVar7 = *(longlong *)(param_1 + 0x140);
                  uStack_e8 = 0;
                  uStack_e0 = 0;
                  System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor
                            (&uStack_e8,uVar6,lVar5,MR_System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>..ctor);
                  if (lVar7 == 0) goto code_r0x0001806e2da6;
                  uStack_118 = uStack_e8;
                  uStack_110 = uStack_e0;
                  FUN_180002e30(lVar7,&uStack_118,MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.Label,SparkQuests.Meta>>.Add);
                }
                Gear__UpdateWeaponType__1803dadf0(&uStack_138,MR_System.Collections.Generic.List<SparkQuests.Meta>.Dispose);
                SparkQuestWindow__AtualizaItens(param_1,0);
              }
              return;
            }
          }
        }
      }
    }
  }
code_r0x0001806e2d8b:
  FUN_1803155d0();
code_r0x0001806e2d91:
  FUN_1803155d0();
code_r0x0001806e2d97:
  FUN_1803155d0();
code_r0x0001806e2d9c:
  FUN_1803155d0();
code_r0x0001806e2da1:
  FUN_1803155d0();
code_r0x0001806e2da6:
  FUN_1803155d0();
code_r0x0001806e2dab:
  FUN_1803155d0();
code_r0x0001806e2db0:
  FUN_1803155d0();
code_r0x0001806e2db5:
  FUN_1803155d0();
code_r0x0001806e2dba:
  FUN_1803155d0();
code_r0x0001806e2dbf:
  FUN_1803155d0();
code_r0x0001806e2dc4:
  FUN_1803155d0();
code_r0x0001806e2dc9:
  FUN_1803155d0();
code_r0x0001806e2dce:
  FUN_1803155d0();
code_r0x0001806e2dd3:
  FUN_1803155d0();
code_r0x0001806e2dd8:
  FUN_1803155d0();
code_r0x0001806e2ddd:
  FUN_1803155d0();
code_r0x0001806e2de2:
  FUN_1803155d0();
code_r0x0001806e2de7:
  FUN_1803155d0();
code_r0x0001806e2dec:
  FUN_1803155d0();
code_r0x0001806e2df1:
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

