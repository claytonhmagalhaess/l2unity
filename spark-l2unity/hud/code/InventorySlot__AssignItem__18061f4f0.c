// InventorySlot__AssignItem__18061f4f0 @ 0x18061f4f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InventorySlot__AssignItem__18061f4f0(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ushort uVar10;
  undefined4 auStackX_8 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b3cc3 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_ItemName);
    FUN_180315380(LIT_"'Unkown item.'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'Item data is null for item {0}.'");
    FUN_180315380(LIT_"'Unkown'");
    FUN_180315380(LIT_"'empty'");
    cRam00000001834b3cc3 = '\x01';
  }
  uStack_78 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  if ((param_1[8] == 0) ||
     (UnityEngine_UIElements_VisualElement__RemoveFromClassList(param_1[8],LIT_"'empty'",0),
     param_2 == 0)) goto DAT_18061f8e9;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    auStackX_8[0] = *(undefined4 *)(param_2 + 0x1c);
    uVar6 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
    uVar6 = System_String__Format(LIT_"'Item data is null for item {0}.'",uVar6,0);
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__LogWarning(uVar6,0);
    *(undefined4 *)(param_1 + 2) = 0;
    param_1[4] = LIT_"'Unkown'";
    func_0x000180314690(param_1 + 4,LIT_"'Unkown'");
    param_1[5] = LIT_"'Unkown item.'";
    func_0x000180314690(param_1 + 5,LIT_"'Unkown item.'");
    param_1[6] = LIT_"''";
    func_0x000180314690(param_1 + 6,LIT_"''");
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    lVar7 = func_0x000180315580(TI_ItemName);
    SparkMapaWindow_Loja___ctor__1803f01b0(lVar7,0);
    param_1[0x15] = lVar7;
  }
  else {
    if (*(longlong *)(param_2 + 0x10) == 0) goto DAT_18061f8e9;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x10);
    if ((*(longlong *)(param_2 + 0x10) == 0) ||
       (lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20), lVar7 == 0))
    goto DAT_18061f8e9;
    param_1[4] = *(longlong *)(lVar7 + 0x18);
    func_0x000180314690(param_1 + 4);
    if ((*(longlong *)(param_2 + 0x10) == 0) ||
       (lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20), lVar7 == 0))
    goto DAT_18061f8e9;
    param_1[5] = *(longlong *)(lVar7 + 0x20);
    func_0x000180314690(param_1 + 5);
    if (*(longlong *)(param_2 + 0x10) == 0) goto DAT_18061f8e9;
    param_1[6] = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18);
    func_0x000180314690(param_1 + 6);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x18);
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x2c);
    if (*(longlong *)(param_2 + 0x10) == 0) goto DAT_18061f8e9;
    lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20);
    param_1[0x15] = lVar7;
  }
  func_0x000180314690(param_1 + 0x15,lVar7);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x28);
  param_1[0x12] = *(longlong *)(param_2 + 0x38);
  if (param_1[8] == 0) {
    return;
  }
  lVar7 = IconTable__get_Instance(0);
  if (lVar7 != 0) {
    uVar6 = IconTable__GetIcon(lVar7,(int)param_1[2],0);
    UnityEngine_UIElements_StyleBackground___ctor(&uStack_98,uVar6,0);
    if ((param_1[9] != 0) &&
       (plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1[9],0),
       uVar5 = uStack_78, uVar4 = uStack_80, uVar3 = uStack_88, uVar2 = uStack_90, uVar6 = uStack_98
       , plVar8 != (longlong *)0x0)) {
      lVar7 = *plVar8;
      if (*(ushort *)(lVar7 + 0x12e) != 0) {
        uVar10 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar9 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0xb) *
                      0x10 + 0x138 + lVar7);
            goto code_r0x00018061f849;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
      }
      puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x00018061f849:
      uStack_68 = uVar6;
      uStack_60 = uVar2;
      uStack_58 = uVar3;
      uStack_50 = uVar4;
      uStack_48 = uVar5;
      (*(code *)*puVar9)(plVar8,&uStack_68,puVar9[1]);
      InventorySlot__AtualizaQuantidade__18061f8f0(param_1,0);
      (**(code **)(*param_1 + 0x218))(param_1,param_2,*(undefined8 *)(*param_1 + 0x220));
      if (param_1[0xf] != 0) {
        *(undefined1 *)(param_1[0xf] + 0x59) = 1;
        return;
      }
    }
  }
DAT_18061f8e9:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

