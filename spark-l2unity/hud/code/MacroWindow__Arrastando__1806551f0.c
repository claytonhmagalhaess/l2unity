// MacroWindow__Arrastando__1806551f0 @ 0x1806551f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MacroWindow__Arrastando__1806551f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  ushort uVar10;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [48];
  
  puStack_40 = &UNK_180655210;
  lVar9 = MacroWindow__ComandoDe(param_2,0);
  if (lVar9 == 0) {
code_r0x00018065523b:
    iVar5 = -1;
  }
  else {
    puStack_40 = &UNK_180655225;
    cVar4 = MacroWindow__PorCimaEm(param_1,param_3,0);
    if (cVar4 == '\0') goto code_r0x00018065523b;
    puStack_40 = &UNK_180655239;
    iVar5 = MacroWindow__LinhaEm(param_1,param_3,0);
  }
  if (param_1 == 0) {
    puStack_40 = &UNK_180655261;
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam00000001834b3d73 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle,iVar5,0);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item);
    FUN_180315380(TI_SparkEstilo);
    cRam00000001834b3d73 = '\x01';
  }
  if (iVar5 != *(int *)(param_1 + 0xf8)) {
    if (-1 < *(int *)(param_1 + 0xf8)) {
      if (*(longlong *)(param_1 + 0xe8) == 0) goto DAT_180654f1a;
      if (*(int *)(param_1 + 0xf8) < *(int *)(*(longlong *)(param_1 + 0xe8) + 0x18)) {
        lVar9 = FUN_180bbafe0(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf8),
                              MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item);
        if (lVar9 == 0) goto DAT_180654f1a;
        lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
        uStack_58 = 0;
        uStack_50 = 0;
        puVar6 = (undefined8 *)
                 UnityEngine_UIElements_StyleColor__op_Implicit(auStack_38,&uStack_58,0);
        if (lVar9 == 0) goto DAT_180654f1a;
        uStack_58 = *puVar6;
        uStack_50 = puVar6[1];
        uStack_48 = *(undefined4 *)(puVar6 + 2);
        FUN_180004fc0(9,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_58);
        if (*(longlong *)(param_1 + 0xe8) == 0) goto DAT_180654f1a;
        uVar7 = FUN_180bbafe0(*(longlong *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf8),
                              MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item);
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660();
        }
        uStack_58 = 0;
        uStack_50 = 0;
        SparkEstilo__Borda__18071da60(uVar7,&uStack_58,0x3f800000,0,0);
      }
    }
    *(int *)(param_1 + 0xf8) = iVar5;
    if (-1 < iVar5) {
      if ((*(longlong *)(param_1 + 0xe8) != 0) &&
         (lVar9 = FUN_180bbafe0(*(longlong *)(param_1 + 0xe8),iVar5,MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item), lVar9 != 0)) {
        plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        uStack_58 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0xb0);
        uStack_50 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0xb8);
        puVar6 = (undefined8 *)
                 UnityEngine_UIElements_StyleColor__op_Implicit(auStack_38,&uStack_58,0);
        if (plVar8 != (longlong *)0x0) {
          lVar9 = *plVar8;
          uVar1 = *(undefined4 *)(puVar6 + 2);
          uVar7 = *puVar6;
          uVar3 = puVar6[1];
          if (*(ushort *)(lVar9 + 0x12e) != 0) {
            uVar10 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar6 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 9)
                          * 0x10 + 0x138 + lVar9);
                goto code_r0x000180654e69;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < *(ushort *)(lVar9 + 0x12e));
          }
          puVar6 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,9);
code_r0x000180654e69:
          uStack_58 = uVar7;
          uStack_50 = uVar3;
          uStack_48 = uVar1;
          (*(code *)*puVar6)(plVar8,&uStack_58,puVar6[1]);
          if (*(longlong *)(param_1 + 0xe8) != 0) {
            uVar7 = FUN_180bbafe0(*(longlong *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf8),
                                  MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item);
            uStack_58 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x60);
            uStack_50 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x68);
            SparkEstilo__Borda__18071da60(uVar7,&uStack_58,0x3f800000,0,0);
            return;
          }
        }
      }
DAT_180654f1a:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

