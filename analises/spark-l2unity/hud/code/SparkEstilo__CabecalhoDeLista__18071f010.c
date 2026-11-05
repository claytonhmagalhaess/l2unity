// SparkEstilo__CabecalhoDeLista__18071f010 @ 0x18071f010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkEstilo__CabecalhoDeLista__18071f010(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ushort uVar11;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_30;
  
  if (cRam00000001834b41f2 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(LIT_"'Clan/ListCTRL_DF_Decoration_Recorte'");
    cRam00000001834b41f2 = '\x01';
  }
  if (param_1 != 0) {
    plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar9 = SparkEstilo__Textura__180723790(LIT_"'Clan/ListCTRL_DF_Decoration_Recorte'",0);
    puVar10 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,uVar9,0);
    if (plVar8 != (longlong *)0x0) {
      lVar2 = *plVar8;
      uVar4 = *puVar10;
      uVar5 = puVar10[1];
      uVar6 = puVar10[2];
      uVar7 = puVar10[3];
      uStack_30 = (undefined1 *)CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc);
      uVar9 = puVar10[4];
      if (*(ushort *)(lVar2 + 0x12e) != 0) {
        uVar11 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar10 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 0xb)
                       * 0x10 + 0x138 + lVar2);
            goto code_r0x00018071f119;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(ushort *)(lVar2 + 0x12e));
      }
      puVar10 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x00018071f119:
      uStack_68 = uVar4;
      uStack_60 = uVar5;
      uStack_58 = uVar6;
      uStack_50 = uVar7;
      uStack_48 = uVar9;
      (*(code *)*puVar10)(plVar8,&uStack_68,puVar10[1]);
      SparkEstilo__Fatia__1807203e0(param_1,4,4,4,4,0);
      plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
      puVar10 = (undefined8 *)
                UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0x41980000,0);
      if (plVar8 != (longlong *)0x0) {
        lVar2 = *plVar8;
        uVar9 = *puVar10;
        uVar1 = *(undefined4 *)(puVar10 + 1);
        if (*(ushort *)(lVar2 + 0x12e) != 0) {
          uVar11 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar10 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) +
                         0x43) * 0x10 + 0x138 + lVar2);
              goto code_r0x00018071f1f9;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(ushort *)(lVar2 + 0x12e));
        }
        puVar10 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x00018071f1f9:
        uStack_78 = uVar9;
        uStack_70 = uVar1;
        (*(code *)*puVar10)(plVar8,&uStack_78,puVar10[1]);
        plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
        uVar9 = func_0x000182601c10(0,0);
        if (plVar8 != (longlong *)0x0) {
          uVar11 = 0;
          lVar2 = *plVar8;
          if (*(ushort *)(lVar2 + 0x12e) != 0) {
            do {
              if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar10 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) +
                           0x1b) * 0x10 + 0x138 + lVar2);
                goto LAB_1800050ad;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(ushort *)(lVar2 + 0x12e));
          }
          uStack_30 = &LAB_1800050ad;
          puVar10 = (undefined8 *)FUN_180312860(plVar8);
LAB_1800050ad:
                    /* WARNING: Could not recover jumptable at 0x0001800050c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar10)(plVar8,uVar9,puVar10[1]);
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

