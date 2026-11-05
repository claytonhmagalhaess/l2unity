// ChatWindow__Peca__1805cc330 @ 0x1805cc330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong ChatWindow__Peca__1805cc330(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ushort uVar12;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b3aea == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Data/UI/Assets/SparkChat/'");
    cRam00000001834b3aea = '\x01';
  }
  lVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar8,0);
  if (lVar8 != 0) {
    UnityEngine_UIElements_VisualElement__set_pickingMode(lVar8,1,0);
    if (0 < param_2) {
      plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
      puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
      if (plVar9 == (longlong *)0x0) goto DAT_1805cc691;
      lVar2 = *plVar9;
      uVar11 = *puVar10;
      uVar1 = *(undefined4 *)(puVar10 + 1);
      if (*(ushort *)(lVar2 + 0x12e) != 0) {
        uVar12 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar10 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0xad)
                       * 0x10 + 0x138 + lVar2);
            goto code_r0x0001805cc459;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ushort *)(lVar2 + 0x12e));
      }
      puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805cc459:
      uStack_78 = uVar11;
      uStack_70 = uVar1;
      (*(code *)*puVar10)(plVar9,&uStack_78,puVar10[1]);
    }
    plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
    puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar9 != (longlong *)0x0) {
      lVar2 = *plVar9;
      uVar11 = *puVar10;
      uVar1 = *(undefined4 *)(puVar10 + 1);
      if (*(ushort *)(lVar2 + 0x12e) != 0) {
        uVar12 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar10 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0x43)
                       * 0x10 + 0x138 + lVar2);
            goto code_r0x0001805cc4f9;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ushort *)(lVar2 + 0x12e));
      }
      puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001805cc4f9:
      uStack_78 = uVar11;
      uStack_70 = uVar1;
      (*(code *)*puVar10)(plVar9,&uStack_78,puVar10[1]);
      plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
      uVar11 = System_String__Concat(LIT_"'Data/UI/Assets/SparkChat/'",param_1,0);
      if (*(int *)(TI_SparkArte + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar11 = FUN_180a90ae0(uVar11,MR_SparkArte.Load<UnityEngine.Texture2D>);
      puVar10 = (undefined8 *)
                UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,uVar11,0);
      if (plVar9 != (longlong *)0x0) {
        lVar2 = *plVar9;
        uVar4 = *puVar10;
        uVar5 = puVar10[1];
        uVar6 = puVar10[2];
        uVar7 = puVar10[3];
        uVar11 = puVar10[4];
        if (*(ushort *)(lVar2 + 0x12e) != 0) {
          uVar12 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar10 = (undefined8 *)
                        ((longlong)
                         (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0xb
                         ) * 0x10 + 0x138 + lVar2);
              goto code_r0x0001805cc5d7;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(ushort *)(lVar2 + 0x12e));
        }
        puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001805cc5d7:
        uStack_68 = uVar4;
        uStack_60 = uVar5;
        uStack_58 = uVar6;
        uStack_50 = uVar7;
        uStack_48 = uVar11;
        (*(code *)*puVar10)(plVar9,&uStack_68,puVar10[1]);
        return lVar8;
      }
    }
  }
DAT_1805cc691:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  lVar8 = (*pcVar3)();
  return lVar8;
}

