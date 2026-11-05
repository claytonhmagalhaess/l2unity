// ClanWindow__MostraSkills__1805e8100 @ 0x1805e8100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ClanWindow__MostraSkills__1805e8100(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ushort uVar14;
  ulonglong uVar15;
  undefined4 auStackX_8 [2];
  undefined4 uStackX_1c;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined4 *puStack_150;
  undefined4 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [112];
  
  if (cRam00000001834b3b71 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<int,int>.get_Key);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<int,int>.get_Value);
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.get_Count);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkClan);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Skill '");
    FUN_180315380(LIT_"'This clan has no skills yet.'");
    FUN_180315380(LIT_"' Lv '");
    cRam00000001834b3b71 = '\x01';
  }
  auStackX_8[0] = 0;
  if (*(longlong *)(param_1 + 0x230) == 0) {
    return;
  }
  UnityEngine_UIElements_VisualElement__Clear(*(undefined8 *)(param_1 + 0x230),0);
  if (*(int *)(TI_SparkClan + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar5 = *(longlong *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x58);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == 0) {
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      uStack_138 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x50);
      uStack_130 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x58);
      uStack_158 = 0;
      puStack_150 = (undefined4 *)0x0;
      uStack_148 = 0;
      func_0x000180cb7cb0(&uStack_158,&uStack_138,MR_System.Nullable<UnityEngine.Color>..ctor);
      uStack_138 = uStack_158;
      uStack_130 = puStack_150;
      uStack_128 = uStack_148;
      lVar5 = SparkEstilo__Texto__180722af0(LIT_"'This clan has no skills yet.'",0xb,&uStack_138,0,0);
      if (lVar5 != 0) {
        plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        puVar8 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(auStack_c0,0x40800000,0);
        if (plVar7 != (longlong *)0x0) {
          uVar12 = *puVar8;
          uVar1 = *(undefined4 *)(puVar8 + 1);
          lVar9 = *plVar7;
          if (*(ushort *)(lVar9 + 0x12e) != 0) {
            uVar14 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar8 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) +
                          0x51) * 0x10 + 0x138 + lVar9);
                goto code_r0x0001805e8937;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(ushort *)(lVar9 + 0x12e));
          }
          puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x0001805e8937:
          uStack_168 = uVar12;
          uStack_160 = uVar1;
          (*(code *)*puVar8)(plVar7,&uStack_168,puVar8[1]);
          if (plVar6 != (longlong *)0x0) {
            lVar9 = *plVar6;
            if (*(ushort *)(lVar9 + 0x12e) != 0) {
              uVar14 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar8 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) +
                            0x4d) * 0x10 + 0x138 + lVar9);
                  goto code_r0x0001805e89a9;
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 < *(ushort *)(lVar9 + 0x12e));
            }
            puVar8 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x4d);
code_r0x0001805e89a9:
            uStack_168 = uVar12;
            uStack_160 = uVar1;
            (*(code *)*puVar8)(plVar6,&uStack_168,puVar8[1]);
            if (*(longlong *)(param_1 + 0x230) != 0) {
              UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x230),lVar5,0);
              return;
            }
          }
        }
      }
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(int *)(TI_SparkClan + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar5 = *(longlong *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x58);
    if (lVar5 != 0) {
      FUN_180bada40(&uStack_138,lVar5,MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.GetEnumerator);
      uStack_d8 = (undefined4)uStack_138;
      uStack_d4 = uStack_138._4_4_;
      uStack_d0 = (undefined4)uStack_130;
      uStack_cc = uStack_130._4_4_;
      uStack_c8 = CONCAT44(uStack_124,uStack_128);
      uStack_158 = 0;
      puStack_150 = &uStack_d8;
      while( true ) {
        cVar4 = FUN_1812ed5e0(&uStack_d8,MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.MoveNext);
        uVar3 = uStack_c8;
        if (cVar4 == '\0') {
          Gear__UpdateWeaponType__1803dadf0(&uStack_d8,MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.Dispose);
          return;
        }
        lVar5 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
        UnityEngine_UIElements_VisualElement___ctor(lVar5,0);
        if (lVar5 == 0) break;
        plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        puVar8 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a8,0x42000000,0);
        if (plVar7 == (longlong *)0x0) goto code_r0x0001805e8a81;
        uVar12 = *puVar8;
        uVar1 = *(undefined4 *)(puVar8 + 1);
        lVar9 = *plVar7;
        if (*(ushort *)(lVar9 + 0x12e) != 0) {
          uVar14 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar8 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) + 0x43
                        ) * 0x10 + 0x138 + lVar9);
              goto code_r0x0001805e83b9;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(ushort *)(lVar9 + 0x12e));
        }
        puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001805e83b9:
        uStack_108 = uVar12;
        uStack_100 = uVar1;
        (*(code *)*puVar8)(plVar7,&uStack_108,puVar8[1]);
        if (plVar6 == (longlong *)0x0) goto code_r0x0001805e8a7c;
        lVar9 = *plVar6;
        if (*(ushort *)(lVar9 + 0x12e) != 0) {
          uVar14 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar8 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) + 0xad
                        ) * 0x10 + 0x138 + lVar9);
              goto code_r0x0001805e8439;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(ushort *)(lVar9 + 0x12e));
        }
        puVar8 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805e8439:
        uStack_f8 = uVar12;
        uStack_f0 = uVar1;
        (*(code *)*puVar8)(plVar6,&uStack_f8,puVar8[1]);
        plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        puVar8 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit(auStack_c0,0x40c00000,0);
        if (plVar7 == (longlong *)0x0) goto code_r0x0001805e8a77;
        uVar12 = *puVar8;
        uVar1 = *(undefined4 *)(puVar8 + 1);
        lVar9 = *plVar7;
        if (*(ushort *)(lVar9 + 0x12e) != 0) {
          uVar14 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar8 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) + 0x4b
                        ) * 0x10 + 0x138 + lVar9);
              goto code_r0x0001805e84e9;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(ushort *)(lVar9 + 0x12e));
        }
        puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x0001805e84e9:
        uStack_e8 = uVar12;
        uStack_e0 = uVar1;
        (*(code *)*puVar8)(plVar7,&uStack_e8,puVar8[1]);
        if (plVar6 == (longlong *)0x0) goto code_r0x0001805e8a72;
        lVar9 = *plVar6;
        uVar15 = 0;
        if (*(ushort *)(lVar9 + 0x12e) != 0) {
          do {
            if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + uVar15 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
              puVar8 = (undefined8 *)
                       ((longlong)(*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + uVar15 * 0x10) + 0x4f)
                        * 0x10 + 0x138 + lVar9);
              goto code_r0x0001805e8569;
            }
            uVar14 = (short)uVar15 + 1;
            uVar15 = (ulonglong)uVar14;
          } while (uVar14 < *(ushort *)(lVar9 + 0x12e));
        }
        puVar8 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x0001805e8569:
        uStack_168 = uVar12;
        uStack_160 = uVar1;
        (*(code *)*puVar8)(plVar6,&uStack_168,puVar8[1]);
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        uStack_138 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x30);
        uStack_130 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x38);
        SparkEstilo__Borda__18071da60(lVar5,&uStack_138,0x3f800000,0,0);
        lVar9 = SkillgrpTable__get_Instance(0);
        uStackX_1c = (undefined4)(uVar3 >> 0x20);
        if (lVar9 != 0) {
          lVar9 = SkillgrpTable__get_Instance(0);
          if (lVar9 == 0) goto code_r0x0001805e8a63;
          lVar9 = SkillgrpTable__GetSkill(lVar9,uVar3 & 0xffffffff,uStackX_1c,0);
          if (lVar9 != 0) {
            lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
            lVar11 = IconTable__get_Instance(0);
            if (lVar11 == 0) goto code_r0x0001805e8a5e;
            uVar12 = IconTable__LoadTextureByName(lVar11,*(undefined8 *)(lVar9 + 0x68),0);
            puVar8 = (undefined8 *)
                     UnityEngine_UIElements_StyleBackground__op_Implicit(auStack_98,uVar12,0);
            if (lVar10 == 0) goto code_r0x0001805e8a58;
            uStack_138 = *puVar8;
            uStack_130 = puVar8[1];
            uStack_128 = *(undefined4 *)(puVar8 + 2);
            uStack_124 = *(undefined4 *)((longlong)puVar8 + 0x14);
            uStack_120 = *(undefined4 *)(puVar8 + 3);
            uStack_11c = *(undefined4 *)((longlong)puVar8 + 0x1c);
            uStack_118 = puVar8[4];
            FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar10,&uStack_138);
          }
        }
        lVar9 = SkillNameTable__get_Instance(0);
        if (lVar9 == 0) {
code_r0x0001805e875b:
          auStackX_8[0] = (int)uVar3;
          uVar12 = System_Int32__ToString(auStackX_8,0);
          uVar12 = System_String__Concat(LIT_"'Skill '",uVar12,0);
        }
        else {
          lVar9 = SkillNameTable__get_Instance(0);
          if (lVar9 == 0) goto code_r0x0001805e8a68;
          lVar9 = SkillNameTable__GetName(lVar9,uVar3 & 0xffffffff,uStackX_1c,0);
          if (lVar9 == 0) goto code_r0x0001805e875b;
          uVar12 = *(undefined8 *)(lVar9 + 0x20);
        }
        auStackX_8[0] = uStackX_1c;
        uVar13 = System_Int32__ToString(auStackX_8,0);
        uVar12 = System_String__Concat(uVar12,LIT_"' Lv '",uVar13,0);
        UnityEngine_UIElements_VisualElement__set_tooltip(lVar5,uVar12);
        if (*(longlong *)(param_1 + 0x230) == 0) goto code_r0x0001805e8a6d;
        UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x230),lVar5);
      }
      goto code_r0x0001805e8a86;
    }
  }
  FUN_1803155d0();
code_r0x0001805e8a58:
  FUN_1803155d0();
code_r0x0001805e8a5e:
  FUN_1803155d0();
code_r0x0001805e8a63:
  FUN_1803155d0();
code_r0x0001805e8a68:
  FUN_1803155d0();
code_r0x0001805e8a6d:
  FUN_1803155d0();
code_r0x0001805e8a72:
  FUN_1803155d0();
code_r0x0001805e8a77:
  FUN_1803155d0();
code_r0x0001805e8a7c:
  FUN_1803155d0();
code_r0x0001805e8a81:
  FUN_1803155d0();
code_r0x0001805e8a86:
  FUN_1803155d0();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

