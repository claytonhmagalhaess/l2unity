// TradeWindow__Update__18077c040 @ 0x18077c040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TradeWindow__Update__18077c040(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ushort uVar11;
  int aiStackX_8 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_30;
  
  if (cRam00000001834b438b == '\0') {
    puStack_30 = &UNK_18077c05e;
    FUN_180315380(TI_SparkTroca);
    cRam00000001834b438b = '\x01';
  }
  if ((*(char *)((longlong)param_1 + 0xe1) != '\0') && ((char)param_1[0x1c] != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0xe1) = 0;
    if (*(int *)(TI_SparkTroca + 0xe4) == 0) {
      puStack_30 = &UNK_18077c09b;
      func_0x000180315660();
    }
    if (cRam00000001834b355d == '\0') {
      puStack_30 = &UNK_18077c0b0;
      FUN_180315380(TI_SparkTroca);
      cRam00000001834b355d = '\x01';
    }
    if (*(int *)(TI_SparkTroca + 0xe4) == 0) {
      puStack_30 = &UNK_18077c0cc;
      func_0x000180315660();
    }
    if (*(char *)(*(longlong *)(TI_SparkTroca + 0xb8) + 0x18) != '\0') {
      if ((char)param_1[7] != '\0') {
        puStack_30 = &UNK_18077c0fb;
        (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
        puStack_30 = &UNK_18077c10e;
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
      }
      if (cRam00000001834b4390 == '\0') {
        FUN_180315380(TI_UnityEngine.UIElements.IStyle,0);
        FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
        FUN_180315380(TI_SparkArte);
        FUN_180315380(TI_SparkTroca);
        FUN_180315380(LIT_"'01'");
        FUN_180315380(LIT_"'Data/UI/Assets/Trade/ChatLevelIcon_R'");
        FUN_180315380(LIT_"'apagada'");
        FUN_180315380(LIT_"'0'");
        cRam00000001834b4390 = '\x01';
      }
      lVar1 = param_1[0x11];
      aiStackX_8[0] = 0;
      if (*(int *)(TI_SparkTroca + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b4410 == '\0') {
        FUN_180315380(TI_SparkTroca);
        cRam00000001834b4410 = '\x01';
      }
      if (*(int *)(TI_SparkTroca + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (lVar1 != 0) {
        TradeSlotContainer__Mostra__1807793c0
                  (lVar1,**(undefined8 **)(TI_SparkTroca + 0xb8),0);
        lVar1 = param_1[0x12];
        if (cRam00000001834b4411 == '\0') {
          FUN_180315380(TI_SparkTroca);
          cRam00000001834b4411 = '\x01';
        }
        if (*(int *)(TI_SparkTroca + 0xe4) == 0) {
          func_0x000180315660(TI_SparkTroca);
        }
        if (lVar1 != 0) {
          TradeSlotContainer__Mostra__1807793c0
                    (lVar1,*(undefined8 *)(*(longlong *)(TI_SparkTroca + 0xb8) + 8),0);
          lVar1 = param_1[0x13];
          if (cRam00000001834b4412 == '\0') {
            FUN_180315380(TI_SparkTroca);
            cRam00000001834b4412 = '\x01';
          }
          if (*(int *)(TI_SparkTroca + 0xe4) == 0) {
            func_0x000180315660(TI_SparkTroca);
          }
          if (lVar1 != 0) {
            TradeSlotContainer__Mostra__1807793c0
                      (lVar1,*(undefined8 *)(*(longlong *)(TI_SparkTroca + 0xb8) + 0x10),0);
            lVar1 = param_1[0x14];
            if (cRam00000001834b355e == '\0') {
              FUN_180315380(TI_SparkTroca);
              cRam00000001834b355e = '\x01';
            }
            if (*(int *)(TI_SparkTroca + 0xe4) == 0) {
              func_0x000180315660(TI_SparkTroca);
            }
            if (lVar1 != 0) {
              UnityEngine_UIElements_VisualElement__EnableInClassList
                        (lVar1,LIT_"'apagada'",
                         *(undefined1 *)(*(longlong *)(TI_SparkTroca + 0xb8) + 0x2c),0);
              lVar1 = param_1[0x15];
              if (cRam00000001834b4413 == '\0') {
                FUN_180315380(TI_SparkTroca);
                cRam00000001834b4413 = '\x01';
              }
              if (*(int *)(TI_SparkTroca + 0xe4) == 0) {
                func_0x000180315660(TI_SparkTroca);
              }
              if (lVar1 != 0) {
                UnityEngine_UIElements_VisualElement__EnableInClassList
                          (lVar1,LIT_"'apagada'",
                           *(undefined1 *)(*(longlong *)(TI_SparkTroca + 0xb8) + 0x2d),0);
                lVar1 = param_1[0x1b];
                if (cRam00000001834b355e == '\0') {
                  FUN_180315380(TI_SparkTroca);
                  cRam00000001834b355e = '\x01';
                }
                if (*(int *)(TI_SparkTroca + 0xe4) == 0) {
                  func_0x000180315660(TI_SparkTroca);
                }
                if (lVar1 != 0) {
                  func_0x0001825cbbd0(lVar1,*(char *)(*(longlong *)(TI_SparkTroca + 0xb8) +
                                                     0x2c) == '\0',0);
                  plVar8 = (longlong *)param_1[0x16];
                  if (cRam00000001834b4414 == '\0') {
                    FUN_180315380(TI_SparkTroca);
                    cRam00000001834b4414 = '\x01';
                  }
                  if (*(int *)(TI_SparkTroca + 0xe4) == 0) {
                    func_0x000180315660(TI_SparkTroca);
                  }
                  if (plVar8 != (longlong *)0x0) {
                    (**(code **)(*plVar8 + 0xe48))
                              (plVar8,*(undefined8 *)
                                       (*(longlong *)(TI_SparkTroca + 0xb8) + 0x20),
                               *(undefined8 *)(*plVar8 + 0xe50));
                    if (cRam00000001834b4415 == '\0') {
                      FUN_180315380(TI_SparkTroca);
                      cRam00000001834b4415 = '\x01';
                    }
                    if (*(int *)(TI_SparkTroca + 0xe4) == 0) {
                      func_0x000180315660(TI_SparkTroca);
                    }
                    iVar3 = *(int *)(*(longlong *)(TI_SparkTroca + 0xb8) + 0x28) / 10;
                    uVar9 = LIT_"'01'";
                    if (0 < iVar3) {
                      aiStackX_8[0] = 9;
                      if (iVar3 < 9) {
                        aiStackX_8[0] = iVar3;
                      }
                      uVar9 = System_Int32__ToString(aiStackX_8,0);
                      uVar9 = System_String__Concat(uVar9,LIT_"'0'",0);
                    }
                    if (param_1[0x17] != 0) {
                      plVar8 = (longlong *)
                               UnityEngine_UIElements_VisualElement__get_style(param_1[0x17],0);
                      uVar9 = System_String__Concat(LIT_"'Data/UI/Assets/Trade/ChatLevelIcon_R'",uVar9,0);
                      if (*(int *)(TI_SparkArte + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      uVar9 = FUN_180a90ae0(uVar9,MR_SparkArte.Load<UnityEngine.Texture2D>);
                      puVar10 = (undefined8 *)
                                UnityEngine_UIElements_StyleBackground__op_Implicit
                                          (&uStack_68,uVar9,0);
                      if (plVar8 != (longlong *)0x0) {
                        lVar1 = *plVar8;
                        uVar4 = *puVar10;
                        uVar5 = puVar10[1];
                        uVar6 = puVar10[2];
                        uVar7 = puVar10[3];
                        uVar9 = puVar10[4];
                        if (*(ushort *)(lVar1 + 0x12e) != 0) {
                          uVar11 = 0;
                          do {
                            if (*(longlong *)
                                 (*(longlong *)(lVar1 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                                TI_UnityEngine.UIElements.IStyle) {
                              puVar10 = (undefined8 *)
                                        ((longlong)
                                         (*(int *)(*(longlong *)(lVar1 + 0xb0) + 8 +
                                                  (ulonglong)uVar11 * 0x10) + 0xb) * 0x10 + 0x138 +
                                        lVar1);
                              goto code_r0x00018077bca3;
                            }
                            uVar11 = uVar11 + 1;
                          } while (uVar11 < *(ushort *)(lVar1 + 0x12e));
                        }
                        puVar10 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x00018077bca3:
                        uStack_68 = uVar4;
                        uStack_60 = uVar5;
                        uStack_58 = uVar6;
                        uStack_50 = uVar7;
                        uStack_48 = uVar9;
                        (*(code *)*puVar10)(plVar8,&uStack_68,puVar10[1]);
                        TradeWindow__AtualizaPeso(param_1,0);
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
    if ((char)param_1[7] == '\0') {
      puStack_30 = &UNK_18077c136;
      (**(code **)(*param_1 + 0x1c8))(param_1,1,*(undefined8 *)(*param_1 + 0x1d0));
    }
  }
  return;
}

