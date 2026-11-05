// PartyWindow__MontaMoldura__1806a7b40 @ 0x1806a7b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PartyWindow__MontaMoldura__1806a7b40(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (cRam00000001834b3f6e == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_string__);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Frame_DF_Ver_Small_Top:party-aba-topo'");
    FUN_180315380(LIT_"'Frame_DF_Ver_Small_Center:party-aba-meio'");
    FUN_180315380(LIT_"'Frame_DF_Ver_Small_Tile:party-aba-tile'");
    FUN_180315380(LIT_"'Frame_DF_Ver_Small_Bottom:party-aba-base'");
    FUN_180315380(LIT_"'Data/UI/Assets/Party/'");
    cRam00000001834b3f6e = '\x01';
  }
  lVar7 = func_0x000180314710(TI_string__,5);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) != 0) {
      *(undefined8 *)(lVar7 + 0x20) = LIT_"'Frame_DF_Ver_Small_Top:party-aba-topo'";
      func_0x000180314690(lVar7 + 0x20);
      if (1 < *(uint *)(lVar7 + 0x18)) {
        *(undefined8 *)(lVar7 + 0x28) = LIT_"'Frame_DF_Ver_Small_Tile:party-aba-tile'";
        func_0x000180314690(lVar7 + 0x28);
        if (2 < *(uint *)(lVar7 + 0x18)) {
          *(undefined8 *)(lVar7 + 0x30) = LIT_"'Frame_DF_Ver_Small_Center:party-aba-meio'";
          func_0x000180314690(lVar7 + 0x30);
          if (3 < *(uint *)(lVar7 + 0x18)) {
            *(undefined8 *)(lVar7 + 0x38) = LIT_"'Frame_DF_Ver_Small_Tile:party-aba-tile'";
            func_0x000180314690(lVar7 + 0x38);
            if (4 < *(uint *)(lVar7 + 0x18)) {
              *(undefined8 *)(lVar7 + 0x40) = LIT_"'Frame_DF_Ver_Small_Bottom:party-aba-base'";
              func_0x000180314690(lVar7 + 0x40);
              uVar13 = 0;
              while( true ) {
                if (*(int *)(lVar7 + 0x18) <= (int)uVar13) {
                  return;
                }
                if (*(uint *)(lVar7 + 0x18) <= uVar13) break;
                lVar8 = *(longlong *)(lVar7 + 0x20 + (longlong)(int)uVar13 * 8);
                if (lVar8 == 0) goto code_r0x0001806a7e93;
                lVar8 = System_String__Split(lVar8,0x3a,0,0);
                lVar9 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                UnityEngine_UIElements_VisualElement___ctor(lVar9,0);
                if (lVar8 == 0) goto code_r0x0001806a7e93;
                if (*(uint *)(lVar8 + 0x18) < 2) break;
                if (lVar9 == 0) goto code_r0x0001806a7e93;
                UnityEngine_UIElements_VisualElement__AddToClassList
                          (lVar9,*(undefined8 *)(lVar8 + 0x28),0);
                plVar10 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
                if (*(int *)(lVar8 + 0x18) == 0) break;
                uVar11 = System_String__Concat(LIT_"'Data/UI/Assets/Party/'",*(undefined8 *)(lVar8 + 0x20),0)
                ;
                if (*(int *)(TI_SparkArte + 0xe4) == 0) {
                  func_0x000180315660();
                }
                uVar11 = FUN_180a90ae0(uVar11,MR_SparkArte.Load<UnityEngine.Texture2D>);
                puVar12 = (undefined8 *)
                          UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_78,uVar11,0);
                if (plVar10 == (longlong *)0x0) goto code_r0x0001806a7e93;
                lVar8 = *plVar10;
                uVar2 = *puVar12;
                uVar3 = puVar12[1];
                uVar4 = puVar12[2];
                uVar5 = puVar12[3];
                uVar11 = puVar12[4];
                uVar6 = 0;
                if (*(ushort *)(lVar8 + 0x12e) != 0) {
                  do {
                    if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar6 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar12 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar6 * 0x10
                                          ) + 0xb) * 0x10 + 0x138 + lVar8);
                      goto code_r0x0001806a7df6;
                    }
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < *(ushort *)(lVar8 + 0x12e));
                }
                puVar12 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001806a7df6:
                uStack_78 = uVar2;
                uStack_70 = uVar3;
                uStack_68 = uVar4;
                uStack_60 = uVar5;
                uStack_58 = uVar11;
                (*(code *)*puVar12)(plVar10,&uStack_78,puVar12[1]);
                if (param_1 == 0) goto code_r0x0001806a7e93;
                UnityEngine_UIElements_VisualElement__Insert(param_1,uVar13);
                uVar13 = uVar13 + 1;
              }
            }
          }
        }
      }
    }
    FUN_1803155c0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
code_r0x0001806a7e93:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

