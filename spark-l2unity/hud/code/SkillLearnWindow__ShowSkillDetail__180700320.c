// SkillLearnWindow__ShowSkillDetail__180700320 @ 0x180700320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillLearnWindow__ShowSkillDetail__180700320
               (longlong param_1,int param_2,int param_3,int param_4,undefined8 param_5)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iStackX_8;
  int aiStackX_20 [2];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_98;
  int aiStack_94 [3];
  longlong alStack_88 [4];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  aiStackX_20[0] = param_4;
  if (cRam00000001834b4133 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'SkillRequirementName'");
    FUN_180315380(LIT_"'n0'");
    FUN_180315380(LIT_"'SkillLearnConditions'");
    FUN_180315380(LIT_"'{0} x{1}  (you have {2})'");
    FUN_180315380(LIT_"'SkillRequirementIcon'");
    cRam00000001834b4133 = '\x01';
  }
  if ((((*(longlong *)(param_1 + 0x128) == 0) || (*(longlong *)(param_1 + 0x88) == 0)) ||
      (*(int *)(*(longlong *)(param_1 + 0x128) + 0x10) != param_2)) ||
     (*(int *)(*(longlong *)(param_1 + 0x128) + 0x14) != param_3)) {
    return;
  }
  plVar8 = *(longlong **)(param_1 + 0xb8);
  uVar3 = System_Int32__ToString(aiStackX_20,LIT_"'n0'",0);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0xe48))(plVar8,uVar3,*(undefined8 *)(*plVar8 + 0xe50));
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb8),0);
      uStack_b8 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      if (*(int *)(param_1 + 0x134) < aiStackX_20[0]) {
        alStack_88[0] = 0x3ee666663f800000;
        alStack_88[1] = 0x3f8000003ee66666;
        func_0x000181806950(&uStack_c8,alStack_88);
      }
      else {
        func_0x000182600510(&uStack_c8,1,0);
      }
      if (lVar4 != 0) {
        FUN_180004fc0(0x2f,TI_UnityEngine.UIElements.IStyle,lVar4,&uStack_c8);
        lVar4 = *(longlong *)(param_1 + 0x128);
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x70) = param_5;
          func_0x000180314690(lVar4 + 0x70);
          uVar3 = *(undefined8 *)(param_1 + 0x88);
          if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
            func_0x000180315660();
          }
          alStack_88[0] = FUN_180b0e310(uVar3,LIT_"'SkillLearnConditions'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
          if (alStack_88[0] != 0) {
            UnityEngine_UIElements_VisualElement__Clear(alStack_88[0]);
            lVar4 = *(longlong *)(param_1 + 0x128);
            uVar12 = 0;
            if (lVar4 != 0) {
              while (*(longlong *)(lVar4 + 0x70) != 0) {
                if (*(int *)(*(longlong *)(lVar4 + 0x70) + 0x18) <= (int)uVar12) {
                  return;
                }
                if ((*(longlong *)(param_1 + 0x128) == 0) ||
                   (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x70), lVar4 == 0))
                break;
                if (*(uint *)(lVar4 + 0x18) <= uVar12) {
                  FUN_1803155c0();
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                lVar4 = *(longlong *)(lVar4 + 0x20 + (longlong)(int)uVar12 * 8);
                if (lVar4 == 0) break;
                if (0 < *(int *)(lVar4 + 0x14)) {
                  if ((*(longlong *)(param_1 + 0x118) == 0) ||
                     (lVar5 = UnityEngine_UIElements_VisualTreeAsset__Instantiate
                                        (*(longlong *)(param_1 + 0x118),0), lVar5 == 0)) break;
                  uVar3 = UnityEngine_UIElements_VisualElement__get_Item(lVar5,0,0);
                  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  lVar5 = FUN_180b0e310(uVar3,LIT_"'SkillRequirementIcon'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
                  if (lVar5 != 0) {
                    lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
                    lVar6 = IconTable__get_Instance(0);
                    if (lVar6 == 0) {
code_r0x00018070087c:
                      FUN_1803155d0();
                      pcVar1 = (code *)swi(3);
                      (*pcVar1)();
                      return;
                    }
                    uVar7 = IconTable__GetIcon(lVar6,*(undefined4 *)(lVar4 + 0x14),0);
                    uStack_58 = 0;
                    alStack_88[2] = 0;
                    alStack_88[3] = 0;
                    uStack_68 = 0;
                    uStack_60 = 0;
                    UnityEngine_UIElements_StyleBackground___ctor(alStack_88 + 2,uVar7,0);
                    if (lVar5 == 0) goto code_r0x00018070087c;
                    uStack_c8 = alStack_88[2];
                    uStack_c0 = alStack_88[3];
                    uStack_a8 = uStack_58;
                    uStack_b8 = (undefined4)uStack_68;
                    uStack_b4 = uStack_68._4_4_;
                    uStack_b0 = (undefined4)uStack_60;
                    uStack_ac = uStack_60._4_4_;
                    FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_c8);
                  }
                  uVar7 = FUN_180458380(0);
                  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  cVar2 = UnityEngine_Object__op_Inequality(uVar7,0);
                  if (cVar2 == '\0') {
code_r0x000180700713:
                    iStackX_8 = 0;
                  }
                  else {
                    lVar5 = FUN_180458380(0);
                    if (lVar5 == 0) break;
                    lVar5 = PlayerInventory__GetItemById(lVar5,*(undefined4 *)(lVar4 + 0x14));
                    if (lVar5 == 0) goto code_r0x000180700713;
                    iStackX_8 = *(int *)(lVar5 + 0x28);
                  }
                  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  plVar8 = (longlong *)
                           FUN_180b0e310(uVar3,LIT_"'SkillRequirementName'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
                  if (plVar8 != (longlong *)0x0) {
                    uVar7 = SparkUI__NomeDoItem(*(undefined4 *)(lVar4 + 0x14),0);
                    uStack_98 = *(undefined4 *)(lVar4 + 0x18);
                    uVar9 = func_0x000180314670(_DAT_1834c6268,&uStack_98);
                    aiStack_94[0] = iStackX_8;
                    uVar10 = func_0x000180314670(_DAT_1834c6268,aiStack_94);
                    uVar7 = System_String__Format(LIT_"'{0} x{1}  (you have {2})'",uVar7,uVar9,uVar10,0);
                    (**(code **)(*plVar8 + 0xe48))(plVar8,uVar7);
                    if (iStackX_8 < *(int *)(lVar4 + 0x18)) {
                      lVar4 = UnityEngine_UIElements_VisualElement__get_style(plVar8,0);
                      uStack_c8 = 0x3ee666663f800000;
                      uStack_c0 = 0x3f8000003ee66666;
                      puVar11 = (undefined8 *)
                                UnityEngine_UIElements_StyleColor__op_Implicit
                                          (alStack_88 + 2,&uStack_c8,0);
                      if (lVar4 == 0) break;
                      uStack_c8 = *puVar11;
                      uStack_c0 = puVar11[1];
                      uStack_b8 = *(undefined4 *)(puVar11 + 2);
                      FUN_180004fc0(0x2f,TI_UnityEngine.UIElements.IStyle,lVar4,&uStack_c8);
                    }
                  }
                  UnityEngine_UIElements_VisualElement__Add(alStack_88[0],uVar3);
                }
                lVar4 = *(longlong *)(param_1 + 0x128);
                uVar12 = uVar12 + 1;
                if (lVar4 == 0) break;
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

