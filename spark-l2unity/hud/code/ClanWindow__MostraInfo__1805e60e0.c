// ClanWindow__MostraInfo__1805e60e0 @ 0x1805e60e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ClanWindow__MostraInfo__1805e60e0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ushort uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 auStackX_8 [2];
  int aiStackX_18 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 auStack_38 [48];
  
  if (cRam00000001834b3b70 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<SparkClan.Membro>.get_Count);
    FUN_180315380(TI_SparkClan);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(LIT_"'Not ranked'");
    FUN_180315380(LIT_"'None'");
    FUN_180315380(LIT_"'n0'");
    FUN_180315380(LIT_"'Top '");
    cRam00000001834b3b70 = '\x01';
  }
  plVar5 = *(longlong **)(param_1 + 0x1f8);
  if (*(int *)(TI_SparkClan + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3bbb == '\0') {
    FUN_180315380(TI_SparkClan);
    cRam00000001834b3bbb = '\x01';
  }
  if (*(int *)(TI_SparkClan + 0xe4) == 0) {
    func_0x000180315660();
  }
  auStackX_8[0] = *(undefined4 *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x1c);
  uVar4 = System_Int32__ToString(auStackX_8,0);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0xe48))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0xe50));
    if (cRam00000001834b3bbe == '\0') {
      FUN_180315380(TI_SparkClan);
      cRam00000001834b3bbe = '\x01';
    }
    if (*(int *)(TI_SparkClan + 0xe4) == 0) {
      func_0x000180315660(TI_SparkClan);
    }
    plVar5 = *(longlong **)(param_1 + 0x200);
    aiStackX_18[0] = *(int *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x2c);
    uVar4 = System_Int32__ToString(aiStackX_18,LIT_"'n0'",0);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0xe48))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0xe50));
      if (*(longlong *)(param_1 + 0x200) != 0) {
        plVar5 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x200),0);
        if (aiStackX_18[0] < 1) {
          if (aiStackX_18[0] < 0) {
            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
              func_0x000180315660(TI_SparkEstilo);
            }
            lVar1 = *(longlong *)(TI_SparkEstilo + 0xb8);
            uVar8 = *(undefined4 *)(lVar1 + 0x90);
            uVar9 = *(undefined4 *)(lVar1 + 0x94);
            uVar10 = *(undefined4 *)(lVar1 + 0x98);
            uVar11 = *(undefined4 *)(lVar1 + 0x9c);
          }
          else {
            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
              func_0x000180315660(TI_SparkEstilo);
            }
            lVar1 = *(longlong *)(TI_SparkEstilo + 0xb8);
            uVar8 = *(undefined4 *)(lVar1 + 0x70);
            uVar9 = *(undefined4 *)(lVar1 + 0x74);
            uVar10 = *(undefined4 *)(lVar1 + 0x78);
            uVar11 = *(undefined4 *)(lVar1 + 0x7c);
          }
        }
        else {
          if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
            func_0x000180315660(TI_SparkEstilo);
          }
          lVar1 = *(longlong *)(TI_SparkEstilo + 0xb8);
          uVar8 = *(undefined4 *)(lVar1 + 0xa0);
          uVar9 = *(undefined4 *)(lVar1 + 0xa4);
          uVar10 = *(undefined4 *)(lVar1 + 0xa8);
          uVar11 = *(undefined4 *)(lVar1 + 0xac);
        }
        uStack_58 = CONCAT44(uVar9,uVar8);
        uStack_50 = CONCAT44(uVar11,uVar10);
        puVar6 = (undefined8 *)
                 UnityEngine_UIElements_StyleColor__op_Implicit(auStack_38,&uStack_58,0);
        if (plVar5 != (longlong *)0x0) {
          lVar1 = *plVar5;
          uVar8 = *(undefined4 *)(puVar6 + 2);
          uVar4 = *puVar6;
          uVar3 = puVar6[1];
          if (*(ushort *)(lVar1 + 0x12e) != 0) {
            uVar7 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar6 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar1 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) +
                          0x2f) * 0x10 + 0x138 + lVar1);
                goto code_r0x0001805e63a9;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(ushort *)(lVar1 + 0x12e));
          }
          puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x0001805e63a9:
          uStack_58 = uVar4;
          uStack_50 = uVar3;
          uStack_48 = uVar8;
          (*(code *)*puVar6)(plVar5,&uStack_58,puVar6[1]);
          plVar5 = *(longlong **)(param_1 + 0x208);
          if (*(int *)(TI_SparkClan + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (cRam00000001834b3bbf == '\0') {
            FUN_180315380(TI_SparkClan);
            cRam00000001834b3bbf = '\x01';
          }
          if (*(int *)(TI_SparkClan + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar4 = LIT_"'Not ranked'";
          if (0 < *(int *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x28)) {
            if (*(int *)(TI_SparkClan + 0xe4) == 0) {
              func_0x000180315660();
            }
            if (cRam00000001834b3bbf == '\0') {
              FUN_180315380(TI_SparkClan);
              cRam00000001834b3bbf = '\x01';
            }
            if (*(int *)(TI_SparkClan + 0xe4) == 0) {
              func_0x000180315660();
            }
            uVar4 = LIT_"'Not ranked'";
            if (*(int *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x28) < 0x65) {
              if (*(int *)(TI_SparkClan + 0xe4) == 0) {
                func_0x000180315660();
              }
              if (cRam00000001834b3bbf == '\0') {
                FUN_180315380(TI_SparkClan);
                cRam00000001834b3bbf = '\x01';
              }
              if (*(int *)(TI_SparkClan + 0xe4) == 0) {
                func_0x000180315660();
              }
              auStackX_8[0] = *(undefined4 *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x28);
              uVar4 = System_Int32__ToString(auStackX_8,0);
              uVar4 = System_String__Concat(LIT_"'Top '",uVar4,0);
            }
          }
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0xe48))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0xe50));
            plVar5 = *(longlong **)(param_1 + 0x210);
            if (*(int *)(TI_SparkClan + 0xe4) == 0) {
              func_0x000180315660(TI_SparkClan);
            }
            lVar1 = *(longlong *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x48);
            if (lVar1 != 0) {
              auStackX_8[0] = *(undefined4 *)(lVar1 + 0x18);
              uVar4 = System_Int32__ToString(auStackX_8,0);
              if (plVar5 != (longlong *)0x0) {
                (**(code **)(*plVar5 + 0xe48))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0xe50));
                plVar5 = *(longlong **)(param_1 + 0x218);
                if (cRam00000001834b3bc0 == '\0') {
                  FUN_180315380(TI_SparkClan);
                  cRam00000001834b3bc0 = '\x01';
                }
                if (*(int *)(TI_SparkClan + 0xe4) == 0) {
                  func_0x000180315660();
                }
                uVar4 = LIT_"'None'";
                if (*(int *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x30) != 0) {
                  if (*(int *)(TI_SparkClan + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  if (cRam00000001834b3bc1 == '\0') {
                    FUN_180315380(TI_SparkClan);
                    cRam00000001834b3bc1 = '\x01';
                  }
                  if (*(int *)(TI_SparkClan + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uVar4 = *(undefined8 *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x38);
                }
                if (plVar5 != (longlong *)0x0) {
                  (**(code **)(*plVar5 + 0xe48))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0xe50));
                  plVar5 = *(longlong **)(param_1 + 0x228);
                  if (*(int *)(TI_SparkClan + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uVar4 = SparkClan__NomeDoCasteloOuNada(0);
                  if (plVar5 != (longlong *)0x0) {
                    (**(code **)(*plVar5 + 0xe48))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0xe50));
                    plVar5 = *(longlong **)(param_1 + 0x220);
                    uVar4 = SparkClan__NomeDaSedeOuNada(0);
                    if (plVar5 != (longlong *)0x0) {
                      (**(code **)(*plVar5 + 0xe48))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0xe50));
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
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

