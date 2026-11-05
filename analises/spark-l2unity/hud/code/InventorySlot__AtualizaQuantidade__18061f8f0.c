// InventorySlot__AtualizaQuantidade__18061f8f0 @ 0x18061f8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InventorySlot__AtualizaQuantidade__18061f8f0(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (cRam00000001834b3cc4 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'ItemQtd'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3cc4 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
      func_0x000180315660();
    }
    plVar2 = (longlong *)FUN_180b0e310(uVar5,LIT_"'ItemQtd'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    lVar3 = LIT_"''";
    if (1 < *(int *)(param_1 + 0x88)) {
      lVar3 = InventorySlot__TextoQuantidade__18061fd70(*(undefined4 *)(param_1 + 0x88),0);
    }
    if (plVar2 == (longlong *)0x0) {
      if (lVar3 == 0) {
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(int *)(lVar3 + 0x10) == 0) {
        return;
      }
      uStack_48 = 0x3f8000003f800000;
      uStack_40 = 0x3f8000003f800000;
      uStack_28 = 0;
      uStack_20 = 0;
      uStack_18 = 0;
      func_0x000180cb7cb0(&uStack_28,&uStack_48,MR_System.Nullable<UnityEngine.Color>..ctor);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uStack_48 = uStack_28;
      uStack_40 = uStack_20;
      uStack_38 = uStack_18;
      plVar2 = (longlong *)SparkEstilo__Texto__180722af0(LIT_"''",9,&uStack_48,0,0);
      if (plVar2 == (longlong *)0x0) {
code_r0x00018061fc6e:
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UnityEngine_UIElements_VisualElement__set_name(plVar2,LIT_"'ItemQtd'",0);
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(plVar2,0);
      uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
      if (lVar4 == 0) goto code_r0x00018061fc6e;
      FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(plVar2,0);
      puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_48);
      if (lVar4 == 0) goto code_r0x00018061fc6e;
      uStack_60 = *(undefined4 *)(puVar6 + 1);
      uStack_68 = *puVar6;
      FUN_1800050f0(0x69,TI_UnityEngine.UIElements.IStyle,lVar4,&uStack_68);
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(plVar2,0);
      puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_48);
      if (lVar4 == 0) goto code_r0x00018061fc6e;
      uStack_60 = *(undefined4 *)(puVar6 + 1);
      uStack_68 = *puVar6;
      FUN_1800050f0(0x2d,TI_UnityEngine.UIElements.IStyle,lVar4,&uStack_68);
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(plVar2,0);
      uStack_48 = 0;
      uStack_40 = 0x3f80000000000000;
      puVar6 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_68,&uStack_48,0)
      ;
      if (lVar4 == 0) goto code_r0x00018061fc6e;
      uStack_48 = *puVar6;
      uStack_40 = puVar6[1];
      uStack_38 = *(undefined4 *)(puVar6 + 2);
      FUN_180004fc0(0xa3,TI_UnityEngine.UIElements.IStyle,lVar4,&uStack_48);
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(plVar2,0);
      uVar5 = func_0x000182601c10();
      if (lVar4 == 0) goto code_r0x00018061fc6e;
      FUN_180005060(0xa5,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
      UnityEngine_UIElements_VisualElement__set_pickingMode(plVar2,1,0);
      if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x00018061fc6e;
      UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x48),plVar2,0);
    }
    (**(code **)(*plVar2 + 0xe48))(plVar2,lVar3,*(undefined8 *)(*plVar2 + 0xe50));
  }
  return;
}

