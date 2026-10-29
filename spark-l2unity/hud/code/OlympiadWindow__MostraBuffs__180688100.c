// OlympiadWindow__MostraBuffs__180688100 @ 0x180688100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OlympiadWindow__MostraBuffs__180688100(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  ushort uVar17;
  ushort uVar18;
  int iVar19;
  longlong lVar20;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined4 *puStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  
  if (cRam00000001834b3e6e == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<int,int,int>>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<int,int,int>>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<int,int,int>>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<int,int,int>>.GetEnumerator);
    FUN_180315380(TI_MouseOverDetectionManipulator);
    FUN_180315380(TI_System.Text.StringBuilder);
    FUN_180315380(TI_TooltipManipulator);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b3e6e = '\x01';
  }
  plVar7 = (longlong *)func_0x000180315580(TI_System.Text.StringBuilder);
  System_Text_StringBuilder___ctor(plVar7,0);
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x40) != 0)) {
    FUN_180bc06e0(&uStack_148,*(longlong *)(param_2 + 0x40),MR_System.Collections.Generic.List<System.ValueTuple<int,int,int>>.GetEnumerator);
    uStack_168 = (undefined4)uStack_148;
    uStack_164 = uStack_148._4_4_;
    uStack_160 = (undefined4)uStack_140;
    uStack_15c = uStack_140._4_4_;
    uStack_158 = (undefined4)uStack_138;
    uStack_154 = (undefined4)((ulonglong)uStack_138 >> 0x20);
    iStack_150 = (int)uStack_130;
    uStack_14c = (undefined4)((ulonglong)uStack_130 >> 0x20);
    lVar20 = 0;
    uStack_178 = 0;
    puStack_170 = &uStack_168;
    while (cVar5 = FUN_1812ec880(&uStack_168,MR_System.Collections.Generic.List<System.ValueTuple<int,int,int>>.MoveNext), iVar4 = iStack_150,
          uVar2 = uStack_154, cVar5 != '\0') {
      if (plVar7 == (longlong *)0x0) {
code_r0x00018068892c:
        FUN_1803155d0();
        FUN_180311490();
        goto code_r0x000180688938;
      }
      lVar8 = System_Text_StringBuilder__Append(plVar7,uStack_158);
      if (lVar8 == 0) {
code_r0x000180688927:
        FUN_1803155d0();
        goto code_r0x00018068892c;
      }
      lVar8 = System_Text_StringBuilder__Append(lVar8,0x2e);
      if (lVar8 == 0) {
code_r0x000180688922:
        FUN_1803155d0();
        goto code_r0x000180688927;
      }
      lVar8 = System_Text_StringBuilder__Append(lVar8,uVar2);
      if (lVar8 == 0) {
code_r0x00018068891d:
        FUN_1803155d0();
        goto code_r0x000180688922;
      }
      lVar8 = System_Text_StringBuilder__Append(lVar8,0x2e);
      if (lVar8 == 0) {
code_r0x000180688918:
        FUN_1803155d0();
        goto code_r0x00018068891d;
      }
      lVar8 = System_Text_StringBuilder__Append(lVar8,iVar4);
      if (lVar8 == 0) {
        FUN_1803155d0();
        goto code_r0x000180688918;
      }
      System_Text_StringBuilder__Append(lVar8,0x3b);
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_168,MR_System.Collections.Generic.List<System.ValueTuple<int,int,int>>.Dispose);
    if ((plVar7 != (longlong *)0x0) &&
       (uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170)),
       param_1 != 0)) {
      cVar5 = func_0x0001817058a0(uVar9,*(undefined8 *)(param_1 + 0x60),0);
      if (cVar5 != '\0') {
        return;
      }
      *(undefined8 *)(param_1 + 0x60) = uVar9;
      func_0x000180314690(param_1 + 0x60,uVar9);
      if (*(longlong *)(param_1 + 0x18) != 0) {
        UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0x18),0);
        if (*(longlong *)(param_2 + 0x40) != 0) {
          FUN_180bc06e0(&uStack_148,*(longlong *)(param_2 + 0x40),MR_System.Collections.Generic.List<System.ValueTuple<int,int,int>>.GetEnumerator);
          uStack_168 = (undefined4)uStack_148;
          uStack_164 = uStack_148._4_4_;
          uStack_160 = (undefined4)uStack_140;
          uStack_15c = uStack_140._4_4_;
          uStack_158 = (undefined4)uStack_138;
          uStack_154 = (undefined4)((ulonglong)uStack_138 >> 0x20);
          iStack_150 = (int)uStack_130;
          uStack_14c = (undefined4)((ulonglong)uStack_130 >> 0x20);
          uStack_148 = 0;
          uStack_140 = &uStack_168;
          while( true ) {
            cVar5 = FUN_1812ec880(&uStack_168,MR_System.Collections.Generic.List<System.ValueTuple<int,int,int>>.MoveNext);
            iVar4 = iStack_150;
            uVar3 = uStack_154;
            uVar2 = uStack_158;
            if (cVar5 == '\0') {
              Gear__UpdateWeaponType__1803dadf0(&uStack_168,MR_System.Collections.Generic.List<System.ValueTuple<int,int,int>>.Dispose);
              return;
            }
            lVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
            UnityEngine_UIElements_VisualElement___ctor(lVar8,0);
            if (lVar8 == 0) break;
            UnityEngine_UIElements_VisualElement__set_pickingMode(lVar8,0,0);
            plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
            plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
            puVar11 = (undefined8 *)
                      UnityEngine_UIElements_StyleLength__op_Implicit(auStack_b8,0x41800000,0);
            if (plVar10 == (longlong *)0x0) goto code_r0x000180688951;
            uVar9 = *puVar11;
            uVar6 = *(undefined4 *)(puVar11 + 1);
            lVar13 = *plVar10;
            uVar18 = 0;
            if (*(ushort *)(lVar13 + 0x12e) != 0) {
              uVar17 = uVar18;
              do {
                if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar11 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar17 * 0x10)
                             + 0x43) * 0x10 + 0x138 + lVar13);
                  goto code_r0x0001806884d9;
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < *(ushort *)(lVar13 + 0x12e));
            }
            puVar11 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001806884d9:
            uStack_188 = uVar9;
            uStack_180 = uVar6;
            (*(code *)*puVar11)(plVar10,&uStack_188,puVar11[1]);
            if (plVar7 == (longlong *)0x0) goto code_r0x00018068894c;
            lVar13 = *plVar7;
            if (*(ushort *)(lVar13 + 0x12e) != 0) {
              uVar17 = uVar18;
              do {
                if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar11 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar17 * 0x10)
                             + 0xad) * 0x10 + 0x138 + lVar13);
                  goto code_r0x000180688549;
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < *(ushort *)(lVar13 + 0x12e));
            }
            puVar11 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180688549:
            uStack_128 = uVar9;
            uStack_120 = uVar6;
            (*(code *)*puVar11)(plVar7,&uStack_128,puVar11[1]);
            plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
            puVar11 = (undefined8 *)
                      UnityEngine_UIElements_StyleLength__op_Implicit(auStack_a8,0x3f800000,0);
            if (plVar7 == (longlong *)0x0) goto code_r0x000180688947;
            uVar9 = *puVar11;
            uVar6 = *(undefined4 *)(puVar11 + 1);
            lVar13 = *plVar7;
            if (*(ushort *)(lVar13 + 0x12e) != 0) {
              uVar17 = uVar18;
              do {
                if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar17 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar11 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar17 * 0x10)
                             + 0x4f) * 0x10 + 0x138 + lVar13);
                  goto code_r0x0001806885e9;
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < *(ushort *)(lVar13 + 0x12e));
            }
            puVar11 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x0001806885e9:
            uStack_118 = uVar9;
            uStack_110 = uVar6;
            (*(code *)*puVar11)(plVar7,&uStack_118,puVar11[1]);
            plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
            puVar11 = (undefined8 *)
                      UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_178,0x3f800000,0);
            if (plVar7 == (longlong *)0x0) goto code_r0x000180688942;
            uVar9 = *puVar11;
            uVar6 = *(undefined4 *)(puVar11 + 1);
            lVar13 = *plVar7;
            if (*(ushort *)(lVar13 + 0x12e) != 0) {
              do {
                if (*(longlong *)(*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar11 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar18 * 0x10)
                             + 0x4b) * 0x10 + 0x138 + lVar13);
                  goto code_r0x000180688689;
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 < *(ushort *)(lVar13 + 0x12e));
            }
            puVar11 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x000180688689:
            uStack_108 = uVar9;
            uStack_100 = uVar6;
            (*(code *)*puVar11)(plVar7,&uStack_108,puVar11[1]);
            lVar12 = SkillgrpTable__get_Instance(0);
            lVar13 = lVar20;
            if (lVar12 != 0) {
              lVar13 = SkillgrpTable__GetSkill(lVar12,uVar2,uVar3,0);
            }
            lVar14 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
            lVar15 = IconTable__get_Instance(0);
            lVar12 = lVar20;
            if (lVar15 != 0) {
              if (lVar13 != 0) {
                lVar12 = *(longlong *)(lVar13 + 0x68);
              }
              lVar12 = IconTable__LoadTextureByName(lVar15,lVar12,0);
            }
            puVar11 = (undefined8 *)
                      UnityEngine_UIElements_StyleBackground__op_Implicit(auStack_98,lVar12,0);
            if (lVar14 == 0) goto code_r0x00018068893d;
            uStack_e8 = *puVar11;
            uStack_e0 = puVar11[1];
            uStack_d8 = *(undefined4 *)(puVar11 + 2);
            uStack_d4 = *(undefined4 *)((longlong)puVar11 + 0x14);
            uStack_d0 = *(undefined4 *)(puVar11 + 3);
            uStack_cc = *(undefined4 *)((longlong)puVar11 + 0x1c);
            uStack_c8 = puVar11[4];
            FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar14,&uStack_e8);
            if (lVar13 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = Buff__ResolveBuffType(lVar13,0);
            }
            iVar19 = -1;
            if (0 < iVar4) {
              iVar19 = iVar4;
            }
            uVar9 = BuffSlot__CriaBuff__1805bf7b0(uVar2,uVar3,iVar19,uVar6,0);
            uVar16 = func_0x000180315580(TI_TooltipManipulator);
            TooltipManipulator___ctor__1807b5900(uVar16,lVar8,10,uVar9,0);
            UnityEngine_UIElements_VisualElementExtensions__AddManipulator(lVar8,uVar16);
            uVar9 = func_0x000180315580(TI_MouseOverDetectionManipulator);
            MouseOverDetectionManipulator___ctor__1807b03c0(uVar9,lVar8);
            UnityEngine_UIElements_VisualElementExtensions__AddManipulator(lVar8,uVar9);
            if (*(longlong *)(param_1 + 0x18) == 0) goto code_r0x000180688938;
            UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x18),lVar8);
          }
          goto code_r0x000180688956;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
code_r0x000180688938:
  FUN_1803155d0();
code_r0x00018068893d:
  FUN_1803155d0();
code_r0x000180688942:
  FUN_1803155d0();
code_r0x000180688947:
  FUN_1803155d0();
code_r0x00018068894c:
  FUN_1803155d0();
code_r0x000180688951:
  FUN_1803155d0();
code_r0x000180688956:
  FUN_1803155d0();
  FUN_180311490();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

