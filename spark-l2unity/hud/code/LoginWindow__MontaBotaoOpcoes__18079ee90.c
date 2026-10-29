// LoginWindow__MontaBotaoOpcoes__18079ee90 @ 0x18079ee90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginWindow__MontaBotaoOpcoes__18079ee90(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  ushort uVar9;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  
  if (cRam00000001834b44ce == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MD_LoginWindow.__c._MontaBotaoOpcoes_b__36_0);
    FUN_180315380(TI_LoginWindow.<>c);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Options'");
    FUN_180315380(LIT_"'SparkOpcoesLogin'");
    cRam00000001834b44ce = '\x01';
  }
  lVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar3,0);
  if (lVar3 != 0) {
    UnityEngine_UIElements_VisualElement__set_name(lVar3,LIT_"'SparkOpcoesLogin'",0);
    UnityEngine_UIElements_VisualElement__set_pickingMode(lVar3,1,0);
    *(longlong *)(param_1 + 0xc0) = lVar3;
    func_0x000180314690(param_1 + 0xc0,lVar3);
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
      uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
      if (lVar3 != 0) {
        FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
        if (*(longlong *)(param_1 + 0xc0) != 0) {
          plVar5 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xc0),0);
          puVar6 = (undefined8 *)
                   UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_38,0x41c00000,0);
          if (plVar5 != (longlong *)0x0) {
            lVar3 = *plVar5;
            uVar4 = *puVar6;
            uVar1 = *(undefined4 *)(puVar6 + 1);
            if (*(ushort *)(lVar3 + 0x12e) != 0) {
              uVar9 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar6 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) +
                            0x69) * 0x10 + 0x138 + lVar3);
                  goto code_r0x00018079f069;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < *(ushort *)(lVar3 + 0x12e));
            }
            puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x69);
code_r0x00018079f069:
            puStack_30 = (undefined1 *)CONCAT44(puStack_30._4_4_,uVar1);
            uStack_38 = uVar4;
            (*(code *)*puVar6)(plVar5,&uStack_38,puVar6[1]);
            if (*(longlong *)(param_1 + 0xc0) != 0) {
              plVar5 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(param_1 + 0xc0),0);
              puVar6 = (undefined8 *)
                       UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_38,0x41b00000,0);
              if (plVar5 != (longlong *)0x0) {
                lVar3 = *plVar5;
                uVar4 = *puVar6;
                uVar1 = *(undefined4 *)(puVar6 + 1);
                if (*(ushort *)(lVar3 + 0x12e) != 0) {
                  uVar9 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar6 = (undefined8 *)
                               ((longlong)
                                (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10)
                                + 0x2d) * 0x10 + 0x138 + lVar3);
                      goto code_r0x00018079f119;
                    }
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < *(ushort *)(lVar3 + 0x12e));
                }
                puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x2d);
code_r0x00018079f119:
                puStack_30 = (undefined1 *)CONCAT44(puStack_30._4_4_,uVar1);
                uStack_38 = uVar4;
                (*(code *)*puVar6)(plVar5,&uStack_38,puVar6[1]);
                lVar3 = *(longlong *)(param_1 + 0xc0);
                if (*(int *)(TI_LoginWindow.<>c + 0xe4) == 0) {
                  func_0x000180315660();
                }
                uVar4 = LIT_"'Options'";
                lVar7 = *(longlong *)(*(longlong *)(TI_LoginWindow.<>c + 0xb8) + 8);
                if (lVar7 == 0) {
                  if (*(int *)(TI_LoginWindow.<>c + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uVar8 = **(undefined8 **)(TI_LoginWindow.<>c + 0xb8);
                  lVar7 = func_0x000180315580(TI_System.Action);
                  FUN_1816a9c60(lVar7,uVar8,MD_LoginWindow.__c._MontaBotaoOpcoes_b__36_0,0);
                  *(longlong *)(*(longlong *)(TI_LoginWindow.<>c + 0xb8) + 8) = lVar7;
                  func_0x000180314690(*(longlong *)(TI_LoginWindow.<>c + 0xb8) + 8,lVar7);
                }
                if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                  func_0x000180315660();
                }
                uVar4 = SparkEstilo__Botao__18071e130(uVar4,lVar7,0x6e,0,0);
                if (lVar3 != 0) {
                  UnityEngine_UIElements_VisualElement__Add(lVar3,uVar4,0);
                  if (param_2 != (longlong *)0x0) {
                    lVar3 = *(longlong *)(param_1 + 0xc0);
                    if (lVar3 != 0) {
                      puStack_30 = (undefined1 *)0x1825c42fe;
                      plVar5 = (longlong *)
                               (**(code **)(*param_2 + 0x9d8))
                                         (param_2,*(undefined8 *)(*param_2 + 0x9e0),0);
                      if (plVar5 == (longlong *)0x0) {
                        puStack_30 = (undefined1 *)0x1825c435b;
                        uVar4 = func_0x0001803153a0(TI_System.InvalidOperationException);
                        puStack_30 = (undefined1 *)0x1825c4363;
                        uVar4 = func_0x000180315580(uVar4);
                        puStack_30 = (undefined1 *)0x1825c4372;
                        uVar8 = func_0x0001803153a0(LIT_"\"You can't add directly to this VisualElement. Use hierar...");
                        puStack_30 = (undefined1 *)0x1825c4380;
                        System_InvalidOperationException___ctor(uVar4,uVar8,0);
                        puStack_30 = (undefined1 *)0x1825c438c;
                        uVar8 = func_0x0001803153a0(MD_UnityEngine.UIElements.VisualElement.Add);
                        puStack_30 = (undefined1 *)0x1825c4397;
                        FUN_180315590(uVar4,uVar8);
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      if (plVar5 == param_2) {
                        puStack_30 = &LAB_1825c432e;
                        UnityEngine_UIElements_VisualElement_Hierarchy__Add
                                  (&stack0x00000010,lVar3,0);
                      }
                      else {
                        puStack_30 = (undefined1 *)0x1825c4316;
                        UnityEngine_UIElements_VisualElement__Add(plVar5);
                      }
                      *(longlong **)(lVar3 + 0x288) = param_2;
                      puStack_30 = (undefined1 *)0x1825c4344;
                      func_0x000180314690(lVar3 + 0x288,param_2);
                    }
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
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

