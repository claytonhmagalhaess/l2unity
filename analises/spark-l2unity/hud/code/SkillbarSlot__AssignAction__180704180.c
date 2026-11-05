// SkillbarSlot__AssignAction__180704180 @ 0x180704180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarSlot__AssignAction__180704180(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 auStack_38 [2];
  
  if (cRam00000001834b416f == '\0') {
    puStack_60 = &UNK_1807041a6;
    FUN_180315380(TI_ActionSlot);
    puStack_60 = &UNK_1807041b2;
    FUN_180315380(TI_L2ClickableSlot);
    cRam00000001834b416f = '\x01';
  }
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x38) = 0;
  puStack_60 = &UNK_1807041d0;
  uVar4 = func_0x000180315580(TI_ActionSlot);
  auStack_38[0] = 0;
  puStack_60 = &UNK_1807041f0;
  ActionSlot___ctor__1805a3170(uVar4,uVar5,uVar1,5);
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  puStack_60 = &UNK_180704206;
  func_0x000180314690(param_1 + 0xa8,uVar4);
  plVar6 = *(longlong **)(param_1 + 0xa8);
  if (plVar6 != (longlong *)0x0) {
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(TI_ActionSlot + 0x130)) ||
       (*(longlong *)
         (*(longlong *)(*plVar6 + 200) + -8 + (ulonglong)*(byte *)(TI_ActionSlot + 0x130) * 8) !=
        TI_ActionSlot)) {
      puStack_60 = &UNK_1807042f5;
      FUN_1803146d0(plVar6);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puStack_60 = &UNK_180704257;
    ActionSlot__AssignAction__1805a2c70(plVar6,param_2,0);
    plVar6 = *(longlong **)(param_1 + 0xa8);
    if (plVar6 != (longlong *)0x0) {
      if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(TI_L2ClickableSlot + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(*plVar6 + 200) + -8 +
           (ulonglong)*(byte *)(TI_L2ClickableSlot + 0x130) * 8) != TI_L2ClickableSlot)) {
        puStack_60 = &UNK_1807042ec;
        FUN_1803146d0(plVar6,TI_L2ClickableSlot);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puStack_60 = &UNK_180704296;
      L2ClickableSlot__UnregisterClickableCallback__18076f2f0(plVar6,0);
      if (cRam00000001834b4173 == '\0') {
        puStack_60 = &UNK_1807042ab;
        FUN_180315380(LIT_"'empty'");
        cRam00000001834b4173 = '\x01';
      }
      if (*(longlong *)(param_1 + 0x40) != 0) {
        puStack_60 = &UNK_1807042ca;
        UnityEngine_UIElements_VisualElement__RemoveFromClassList
                  (*(longlong *)(param_1 + 0x40),LIT_"'empty'",0);
        if (cRam00000001834b4174 == '\0') {
          FUN_180315380(TI_UnityEngine.UIElements.IStyle,0);
          FUN_180315380(TI_UnityEngine.Object);
          cRam00000001834b4174 = '\x01';
        }
        if ((*(longlong *)(param_1 + 0xc0) == 0) || (*(longlong *)(param_1 + 0xb0) == 0)) {
          return;
        }
        if (cRam00000001834b3101 == '\0') {
          FUN_180315380(TI_PlayerShortcuts);
          cRam00000001834b3101 = '\x01';
        }
        if (**(longlong **)(TI_PlayerShortcuts + 0xb8) != 0) {
          uVar5 = PlayerShortcuts__GetKeybindForShortcut__1804d1f90
                            (**(longlong **)(TI_PlayerShortcuts + 0xb8),
                             *(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),0);
          cVar3 = func_0x000181707e50(uVar5,0);
          if (cVar3 == '\0') {
            lVar7 = SkillbarImageTable__get_Instance(0);
            if (lVar7 == 0) goto code_r0x000180705447;
            plVar6 = (longlong *)SkillbarImageTable__LoadTextureByKey__1806d5dd0(lVar7,uVar5,0);
          }
          else {
            plVar6 = (longlong *)0x0;
          }
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar3 = UnityEngine_Object__op_Inequality(plVar6,0,0);
          lVar7 = *(longlong *)(param_1 + 0xc0);
          if (lVar7 != 0) {
            if (cVar3 == '\0') {
              lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
              puVar8 = (undefined8 *)
                       UnityEngine_UIElements_StyleBackground__op_Implicit(auStack_38,3,0);
              if (lVar7 != 0) {
                uStack_68 = *puVar8;
                puStack_60 = (undefined *)puVar8[1];
                uStack_58 = puVar8[2];
                uStack_50 = puVar8[3];
                uStack_48 = puVar8[4];
                FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_68);
                return;
              }
            }
            else {
              lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
              puVar8 = (undefined8 *)
                       UnityEngine_UIElements_StyleBackground__op_Implicit(auStack_38,plVar6,0);
              if (lVar7 != 0) {
                uStack_68 = *puVar8;
                puStack_60 = (undefined *)puVar8[1];
                uStack_58 = puVar8[2];
                uStack_50 = puVar8[3];
                uStack_48 = puVar8[4];
                FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_68);
                if ((*(longlong *)(param_1 + 0xc0) != 0) &&
                   (lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                      (*(longlong *)(param_1 + 0xc0),0), plVar6 != (longlong *)0x0))
                {
                  (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
                  puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_78)
                  ;
                  if (lVar7 != 0) {
                    uStack_88 = *puVar8;
                    uStack_80 = *(undefined4 *)(puVar8 + 1);
                    FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_88);
                    return;
                  }
                }
              }
            }
          }
        }
code_r0x000180705447:
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  puStack_60 = &UNK_1807042e3;
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

