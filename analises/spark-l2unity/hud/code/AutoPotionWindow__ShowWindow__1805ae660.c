// AutoPotionWindow__ShowWindow__1805ae660 @ 0x1805ae660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AutoPotionWindow__ShowWindow__1805ae660(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ushort uVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 auStack_38 [8];
  undefined *puStack_30;
  ulonglong uVar13;
  
  if (cRam00000001834b3a4c == '\0') {
    puStack_30 = &UNK_1805ae67e;
    FUN_180315380(LIT_"'window_open'");
    cRam00000001834b3a4c = '\x01';
  }
  puStack_30 = &UNK_1805ae68f;
  L2PopupWindow__ShowWindow__180778380(param_1,0);
  if (DAT_1834b301f == '\0') {
    puStack_30 = &UNK_1805ae6a4;
    FUN_180315380(TI_AudioManager);
    DAT_1834b301f = '\x01';
  }
  if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
    puStack_30 = &UNK_1805ae6d0;
    AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'window_open'",0);
  }
  if (DAT_1834b31c0 == '\0') {
    puStack_30 = &UNK_1805ae6e5;
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  if (**(longlong **)(TI_L2GameUI + 0xb8) != 0) {
    puStack_30 = &UNK_1805ae70d;
    L2GameUI__WindowOpened__180776020(**(longlong **)(TI_L2GameUI + 0xb8),param_1,0);
  }
  lVar11 = *(longlong *)(param_1 + 0x138);
  if (lVar11 != 0) {
    if (*(int *)(lVar11 + 0x18) != 0) {
      *(undefined1 *)(lVar11 + 0x20) = 0;
      lVar11 = *(longlong *)(param_1 + 0x138);
      if (lVar11 == 0) goto code_r0x0001805ae7ab;
      if (1 < *(uint *)(lVar11 + 0x18)) {
        *(undefined1 *)(lVar11 + 0x21) = 0;
        lVar11 = *(longlong *)(param_1 + 0x138);
        if (lVar11 == 0) goto code_r0x0001805ae7ab;
        if (2 < *(uint *)(lVar11 + 0x18)) {
          *(undefined1 *)(lVar11 + 0x22) = 0;
          lVar11 = *(longlong *)(param_1 + 0x138);
          if (lVar11 == 0) goto code_r0x0001805ae7ab;
          if (3 < *(uint *)(lVar11 + 0x18)) {
            *(undefined1 *)(lVar11 + 0x23) = 0;
            lVar11 = *(longlong *)(param_1 + 0x138);
            if (lVar11 == 0) goto code_r0x0001805ae7ab;
            if (4 < *(uint *)(lVar11 + 0x18)) {
              *(undefined1 *)(lVar11 + 0x24) = 0;
              lVar11 = *(longlong *)(param_1 + 0x138);
              if (lVar11 == 0) goto code_r0x0001805ae7ab;
              if (5 < *(uint *)(lVar11 + 0x18)) {
                *(undefined1 *)(lVar11 + 0x25) = 0;
                if (cRam00000001834b3a52 == '\0') {
                  FUN_180315380(TI_UnityEngine.UIElements.IStyle,0);
                  FUN_180315380(TI_SparkAutoPocao);
                  FUN_180315380(TI_SparkEstilo);
                  FUN_180315380(LIT_"''");
                  FUN_180315380(LIT_"'ON'");
                  FUN_180315380(LIT_"'OFF'");
                  cRam00000001834b3a52 = '\x01';
                }
                if (*(char *)(param_1 + 0x88) == '\0') {
                  return;
                }
                if (*(int *)(TI_SparkAutoPocao + 0xe4) == 0) {
                  func_0x000180315660();
                }
                if (cRam00000001834b3a75 == '\0') {
                  FUN_180315380(TI_SparkAutoPocao);
                  cRam00000001834b3a75 = '\x01';
                }
                if (*(int *)(TI_SparkAutoPocao + 0xe4) == 0) {
                  func_0x000180315660();
                }
                lVar11 = *(longlong *)(param_1 + 0x100);
                cVar6 = *(char *)(*(longlong *)(TI_SparkAutoPocao + 0xb8) + 0x11);
                if (lVar11 != 0) {
                  (**(code **)(lVar11 + 0x18))
                            (*(undefined8 *)(lVar11 + 0x40),cVar6,1,*(undefined8 *)(lVar11 + 0x28));
                }
                uVar9 = LIT_"'OFF'";
                if (cVar6 != '\0') {
                  uVar9 = LIT_"'ON'";
                }
                plVar7 = *(longlong **)(param_1 + 0x108);
                if (plVar7 != (longlong *)0x0) {
                  (**(code **)(*plVar7 + 0xe48))(plVar7,uVar9,*(undefined8 *)(*plVar7 + 0xe50));
                  if (*(longlong *)(param_1 + 0x108) != 0) {
                    plVar7 = (longlong *)
                             UnityEngine_UIElements_VisualElement__get_style
                                       (*(longlong *)(param_1 + 0x108),0);
                    if (cVar6 == '\0') {
                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                        func_0x000180315660(TI_SparkEstilo);
                      }
                      lVar11 = *(longlong *)(TI_SparkEstilo + 0xb8);
                      uVar14 = *(undefined4 *)(lVar11 + 0x90);
                      uVar15 = *(undefined4 *)(lVar11 + 0x94);
                      uVar16 = *(undefined4 *)(lVar11 + 0x98);
                      uVar17 = *(undefined4 *)(lVar11 + 0x9c);
                    }
                    else {
                      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
                        func_0x000180315660(TI_SparkEstilo);
                      }
                      lVar11 = *(longlong *)(TI_SparkEstilo + 0xb8);
                      uVar14 = *(undefined4 *)(lVar11 + 0x80);
                      uVar15 = *(undefined4 *)(lVar11 + 0x84);
                      uVar16 = *(undefined4 *)(lVar11 + 0x88);
                      uVar17 = *(undefined4 *)(lVar11 + 0x8c);
                    }
                    uStack_58 = CONCAT44(uVar15,uVar14);
                    uStack_50 = CONCAT44(uVar17,uVar16);
                    puVar8 = (undefined8 *)
                             UnityEngine_UIElements_StyleColor__op_Implicit(auStack_38,&uStack_58,0)
                    ;
                    if (plVar7 != (longlong *)0x0) {
                      lVar11 = *plVar7;
                      uVar14 = *(undefined4 *)(puVar8 + 2);
                      uVar9 = *puVar8;
                      uVar5 = puVar8[1];
                      if (*(ushort *)(lVar11 + 0x12e) != 0) {
                        uVar10 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar10 * 0x10)
                              == TI_UnityEngine.UIElements.IStyle) {
                            puVar8 = (undefined8 *)
                                     ((longlong)
                                      (*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 +
                                               (ulonglong)uVar10 * 0x10) + 0x2f) * 0x10 + 0x138 +
                                     lVar11);
                            goto code_r0x0001805a5a89;
                          }
                          uVar10 = uVar10 + 1;
                        } while (uVar10 < *(ushort *)(lVar11 + 0x12e));
                      }
                      puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x0001805a5a89:
                      uStack_58 = uVar9;
                      uStack_50 = uVar5;
                      uStack_48 = uVar14;
                      (*(code *)*puVar8)(plVar7,&uStack_58,puVar8[1]);
                      uVar12 = 0;
                      lVar11 = TI_SparkAutoPocao;
                      while( true ) {
                        uVar13 = (ulonglong)uVar12;
                        if (*(int *)(lVar11 + 0xe4) == 0) {
                          func_0x000180315660();
                          lVar11 = TI_SparkAutoPocao;
                        }
                        lVar2 = *(longlong *)(*(longlong *)(lVar11 + 0xb8) + 0x18);
                        if (lVar2 == 0) break;
                        if (*(uint *)(lVar2 + 0x18) <= uVar12) {
code_r0x0001805a5c6f:
                          FUN_1803155c0();
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        lVar3 = *(longlong *)(param_1 + 0x140);
                        if (lVar3 == 0) break;
                        if (*(uint *)(lVar3 + 0x18) <= uVar12) goto code_r0x0001805a5c6f;
                        lVar3 = *(longlong *)(lVar3 + 0x20 + uVar13 * 8);
                        iVar1 = *(int *)(lVar2 + 0x20 + uVar13 * 4);
                        if (lVar3 != 0) {
                          if (iVar1 < 1) {
                            cVar6 = '\0';
                          }
                          else {
                            if (*(int *)(lVar11 + 0xe4) == 0) {
                              func_0x000180315660();
                              lVar11 = TI_SparkAutoPocao;
                            }
                            lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0xb8) + 0x28);
                            if (lVar11 == 0) break;
                            if (*(uint *)(lVar11 + 0x18) <= uVar12) goto code_r0x0001805a5c6f;
                            cVar6 = *(char *)(uVar13 + 0x20 + lVar11);
                          }
                          (**(code **)(lVar3 + 0x18))
                                    (*(undefined8 *)(lVar3 + 0x40),cVar6 != '\0',0 < iVar1,
                                     *(undefined8 *)(lVar3 + 0x28));
                          lVar11 = TI_SparkAutoPocao;
                        }
                        lVar2 = *(longlong *)(param_1 + 0x138);
                        if (lVar2 == 0) break;
                        if (*(uint *)(lVar2 + 0x18) <= uVar12) goto code_r0x0001805a5c6f;
                        if (*(char *)(uVar13 + 0x20 + lVar2) == '\0') {
                          lVar2 = *(longlong *)(param_1 + 0x130);
                          if (lVar2 == 0) break;
                          if (*(uint *)(lVar2 + 0x18) <= uVar12) goto code_r0x0001805a5c6f;
                          if (*(longlong *)(lVar2 + 0x20 + uVar13 * 8) != 0) {
                            plVar7 = *(longlong **)(lVar2 + 0x20 + uVar13 * 8);
                            uVar9 = LIT_"''";
                            if (0 < iVar1) {
                              if (*(int *)(lVar11 + 0xe4) == 0) {
                                func_0x000180315660();
                                lVar11 = TI_SparkAutoPocao;
                              }
                              lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0xb8) + 0x20);
                              if (lVar11 == 0) break;
                              if (*(uint *)(lVar11 + 0x18) <= uVar12) goto code_r0x0001805a5c6f;
                              uVar9 = System_Int32__ToString(lVar11 + uVar13 * 4 + 0x20,0);
                            }
                            lVar11 = *plVar7;
                            (**(code **)(lVar11 + 0xb28))
                                      (plVar7,uVar9,*(undefined8 *)(lVar11 + 0xb30));
                            lVar11 = TI_SparkAutoPocao;
                          }
                        }
                        uVar12 = uVar12 + 1;
                        if (5 < (int)uVar12) {
                          AutoPotionWindow__AtualizaLinhas(param_1,0);
                          return;
                        }
                      }
                    }
                  }
                }
                FUN_1803155d0();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
          }
        }
      }
    }
    puStack_30 = &UNK_1805ae7b6;
    FUN_1803155c0();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
code_r0x0001805ae7ab:
  puStack_30 = &UNK_1805ae7b0;
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

