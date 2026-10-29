// SkillLearnWindow__OnItemSelected__1806ffb20 @ 0x1806ffb20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillLearnWindow__OnItemSelected__1806ffb20(longlong param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ushort uVar11;
  undefined4 auStackX_20 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b4132 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_L2ScrollableList<SkillWindowInfo>.SelectItem);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'click_01'");
    FUN_180315380(LIT_"'n0'");
    FUN_180315380(LIT_"'SkillLearnConditions'");
    cRam00000001834b4132 = '\x01';
  }
  if (DAT_1834b301f == '\0') {
    FUN_180315380(TI_AudioManager);
    DAT_1834b301f = '\x01';
  }
  if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
    AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'click_01'",0);
    lVar8 = *(longlong *)(param_1 + 0x120);
    if (lVar8 != 0) {
      if (*(uint *)(lVar8 + 0x18) <= param_2) {
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(lVar8 + 0x20 + (longlong)(int)param_2 * 8);
      func_0x000180314690(param_1 + 0x128);
      if (*(longlong *)(param_1 + 0x100) != 0) {
        FUN_181595770(*(longlong *)(param_1 + 0x100),param_2,MR_L2ScrollableList<SkillWindowInfo>.SelectItem);
        if (DAT_1834b30fb == '\0') {
          FUN_180315380(TI_GameClient);
          DAT_1834b30fb = '\x01';
        }
        if (((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
            (lVar8 = *(longlong *)(param_1 + 0x128), lVar8 != 0)) &&
           (lVar1 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8), lVar1 != 0)) {
          GameClientPacketHandler__SendRequestAcquireSkillInfo
                    (lVar1,*(undefined4 *)(lVar8 + 0x10),*(undefined4 *)(lVar8 + 0x14),
                     *(undefined4 *)(param_1 + 0x130),0);
          if ((*(longlong *)(param_1 + 0x128) != 0) &&
             (plVar7 = *(longlong **)(param_1 + 0x98), plVar7 != (longlong *)0x0)) {
            (**(code **)(*plVar7 + 0xe48))
                      (plVar7,*(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x18),
                       *(undefined8 *)(*plVar7 + 0xe50));
            if (*(longlong *)(param_1 + 0xa0) != 0) {
              plVar7 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(param_1 + 0xa0),0);
              lVar8 = IconTable__get_Instance(0);
              if ((*(longlong *)(param_1 + 0x128) != 0) && (lVar8 != 0)) {
                uVar9 = IconTable__LoadTextureByName
                                  (lVar8,*(undefined8 *)(*(longlong *)(param_1 + 0x128) + 0x38),0);
                puVar10 = (undefined8 *)
                          UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,uVar9,0);
                if (plVar7 != (longlong *)0x0) {
                  lVar8 = *plVar7;
                  uVar3 = *puVar10;
                  uVar4 = puVar10[1];
                  lVar1 = puVar10[2];
                  uVar5 = puVar10[3];
                  uVar9 = puVar10[4];
                  if (*(ushort *)(lVar8 + 0x12e) != 0) {
                    uVar11 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                          TI_UnityEngine.UIElements.IStyle) {
                        puVar10 = (undefined8 *)
                                  ((longlong)
                                   (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                            (ulonglong)uVar11 * 0x10) + 0xb) * 0x10 + 0x138 + lVar8)
                        ;
                        goto code_r0x0001806ffdc9;
                      }
                      uVar11 = uVar11 + 1;
                    } while (uVar11 < *(ushort *)(lVar8 + 0x12e));
                  }
                  puVar10 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001806ffdc9:
                  uStack_68 = uVar3;
                  uStack_60 = uVar4;
                  uStack_58 = lVar1;
                  uStack_50 = uVar5;
                  uStack_48 = uVar9;
                  (*(code *)*puVar10)(plVar7,&uStack_68,puVar10[1]);
                  if (*(longlong *)(param_1 + 0x128) != 0) {
                    auStackX_20[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x128) + 0x14);
                    plVar7 = *(longlong **)(param_1 + 0xa8);
                    uVar9 = System_Int32__ToString(auStackX_20,0);
                    if (plVar7 != (longlong *)0x0) {
                      (**(code **)(*plVar7 + 0xe48))(plVar7,uVar9,*(undefined8 *)(*plVar7 + 0xe50));
                      if (*(longlong *)(param_1 + 0x128) != 0) {
                        plVar7 = *(longlong **)(param_1 + 0xb0);
                        uVar9 = SkillWindowInfo__ComposeDescription
                                          (*(longlong *)(param_1 + 0x128),0);
                        if (plVar7 != (longlong *)0x0) {
                          (**(code **)(*plVar7 + 0xe48))
                                    (plVar7,uVar9,*(undefined8 *)(*plVar7 + 0xe50));
                          if (*(longlong *)(param_1 + 0x128) != 0) {
                            auStackX_20[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x128) + 0x58);
                            plVar7 = *(longlong **)(param_1 + 0xb8);
                            uVar9 = System_Int32__ToString(auStackX_20,LIT_"'n0'",0);
                            if (plVar7 != (longlong *)0x0) {
                              (**(code **)(*plVar7 + 0xe48))
                                        (plVar7,uVar9,*(undefined8 *)(*plVar7 + 0xe50));
                              if (*(longlong *)(param_1 + 0xb8) != 0) {
                                plVar7 = (longlong *)
                                         UnityEngine_UIElements_VisualElement__get_style
                                                   (*(longlong *)(param_1 + 0xb8),0);
                                if (*(longlong *)(param_1 + 0x128) != 0) {
                                  uStack_68 = 0;
                                  uStack_60 = 0;
                                  if (*(int *)(param_1 + 0x134) <
                                      *(int *)(*(longlong *)(param_1 + 0x128) + 0x58)) {
                                    uStack_78 = 0x3ee666663f800000;
                                    uStack_70 = 0x3f8000003ee66666;
                                    uStack_58 = (ulonglong)uStack_58._4_4_ << 0x20;
                                    func_0x000181806950(&uStack_68,&uStack_78);
                                  }
                                  else {
                                    uStack_58 = (ulonglong)uStack_58._4_4_ << 0x20;
                                    func_0x000182600510(&uStack_68,1,0);
                                  }
                                  uVar3 = uStack_60;
                                  uVar9 = uStack_68;
                                  uVar6 = (undefined4)uStack_58;
                                  if (plVar7 != (longlong *)0x0) {
                                    lVar8 = *plVar7;
                                    if (*(ushort *)(lVar8 + 0x12e) != 0) {
                                      uVar11 = 0;
                                      do {
                                        if (*(longlong *)
                                             (*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar11 * 0x10
                                             ) == TI_UnityEngine.UIElements.IStyle) {
                                          puVar10 = (undefined8 *)
                                                    ((longlong)
                                                     (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 +
                                                              (ulonglong)uVar11 * 0x10) + 0x2f) *
                                                     0x10 + 0x138 + lVar8);
                                          goto code_r0x0001806fffb9;
                                        }
                                        uVar11 = uVar11 + 1;
                                      } while (uVar11 < *(ushort *)(lVar8 + 0x12e));
                                    }
                                    puVar10 = (undefined8 *)
                                              FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x0001806fffb9:
                                    uStack_58 = CONCAT44(uStack_58._4_4_,uVar6);
                                    uStack_68 = uVar9;
                                    uStack_60 = uVar3;
                                    (*(code *)*puVar10)(plVar7,&uStack_68,puVar10[1]);
                                    plVar7 = *(longlong **)(param_1 + 0xc0);
                                    uVar9 = System_Int32__ToString
                                                      (param_1 + 0x134,LIT_"'n0'",0);
                                    if (plVar7 != (longlong *)0x0) {
                                      (**(code **)(*plVar7 + 0xe48))
                                                (plVar7,uVar9,*(undefined8 *)(*plVar7 + 0xe50));
                                      uVar9 = *(undefined8 *)(param_1 + 0x88);
                                      if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
                                        func_0x000180315660();
                                      }
                                      lVar8 = FUN_180b0e310(uVar9,LIT_"'SkillLearnConditions'",0,
                                                            MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
                                      if (lVar8 != 0) {
                                        UnityEngine_UIElements_VisualElement__Clear(lVar8,0);
                                      }
                                      if (*(longlong *)(param_1 + 0x128) != 0) {
                                        plVar7 = *(longlong **)(param_1 + 0xd0);
                                        uVar9 = SkillWindowInfo__GetSkillType
                                                          (*(longlong *)(param_1 + 0x128),0);
                                        if (plVar7 != (longlong *)0x0) {
                                          (**(code **)(*plVar7 + 0xe48))
                                                    (plVar7,uVar9,*(undefined8 *)(*plVar7 + 0xe50));
                                          lVar8 = *(longlong *)(param_1 + 0x128);
                                          if (lVar8 != 0) {
                                            if (*(int *)(lVar8 + 0x48) == 0) {
                                              if (*(longlong *)(param_1 + 0xe0) == 0)
                                              goto code_r0x00018070023f;
                                              lVar8 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xe0),0);
                                              uVar9 = 1;
                                            }
                                            else {
                                              auStackX_20[0] = *(undefined4 *)(lVar8 + 0x48);
                                              plVar7 = *(longlong **)(param_1 + 0xf0);
                                              uVar9 = System_Int32__ToString(auStackX_20,0);
                                              if (plVar7 == (longlong *)0x0)
                                              goto code_r0x00018070023f;
                                              (**(code **)(*plVar7 + 0xe48))
                                                        (plVar7,uVar9,
                                                         *(undefined8 *)(*plVar7 + 0xe50));
                                              if (*(longlong *)(param_1 + 0xe0) == 0)
                                              goto code_r0x00018070023f;
                                              lVar8 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xe0),0);
                                              uVar9 = 0;
                                            }
                                            uVar9 = FUN_180eb5810(uVar9,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                            if (lVar8 != 0) {
                                              FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar8,uVar9);
                                              lVar8 = *(longlong *)(param_1 + 0x128);
                                              if (lVar8 != 0) {
                                                if ((*(int *)(lVar8 + 0x5c) == 0) ||
                                                   (*(int *)(lVar8 + 0x5c) == -1)) {
                                                  if (*(longlong *)(param_1 + 0xd8) == 0)
                                                  goto code_r0x00018070023f;
                                                  lVar8 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xd8),0);
                                                  uVar9 = 1;
                                                }
                                                else {
                                                  auStackX_20[0] = *(undefined4 *)(lVar8 + 0x5c);
                                                  plVar7 = *(longlong **)(param_1 + 0xe8);
                                                  uVar9 = System_Int32__ToString(auStackX_20,0);
                                                  if (plVar7 == (longlong *)0x0)
                                                  goto code_r0x00018070023f;
                                                  (**(code **)(*plVar7 + 0xe48))
                                                            (plVar7,uVar9,
                                                             *(undefined8 *)(*plVar7 + 0xe50));
                                                  if (*(longlong *)(param_1 + 0xd8) == 0)
                                                  goto code_r0x00018070023f;
                                                  lVar8 = 
                                                  UnityEngine_UIElements_VisualElement__get_style
                                                            (*(longlong *)(param_1 + 0xd8),0);
                                                  uVar9 = 0;
                                                }
                                                uVar9 = FUN_180eb5810(uVar9,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                                if (lVar8 != 0) {
                                                  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar8,uVar9);
                                                  SkillLearnWindow__ToggleShowSkillDetail__180700950
                                                            (param_1,0);
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
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x00018070023f:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

