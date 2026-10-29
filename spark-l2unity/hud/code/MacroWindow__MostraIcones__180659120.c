// MacroWindow__MostraIcones__180659120 @ 0x180659120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MacroWindow__MostraIcones__180659120(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (cRam00000001834b3d6a == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MD_MacroWindow.__c__DisplayClass34_0._MostraIcones_b__0);
    FUN_180315380(TI_MacroWindow.<>c__DisplayClass34_0);
    FUN_180315380(LIT_"''");
    cRam00000001834b3d6a = '\x01';
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0xc0),0);
    iVar8 = 0;
    while( true ) {
      lVar3 = func_0x000180315580(TI_MacroWindow.<>c__DisplayClass34_0);
      Gear__UpdateWeaponType__1803dadf0(lVar3,0);
      if (lVar3 == 0) break;
      *(longlong *)(lVar3 + 0x18) = param_1;
      func_0x000180314690(lVar3 + 0x18,param_1);
      *(int *)(lVar3 + 0x10) = iVar8;
      lVar5 = LIT_"''";
      if (iVar8 == *(int *)(param_1 + 0x104)) {
        plVar1 = *(longlong **)(param_1 + 0xd0);
        if (plVar1 == (longlong *)0x0) break;
        lVar4 = (**(code **)(*plVar1 + 0xa78))(plVar1,*(undefined8 *)(*plVar1 + 0xa80));
        lVar5 = LIT_"''";
        if (lVar4 != 0) {
          lVar5 = lVar4;
        }
      }
      lVar5 = MacroWindow__Icone(iVar8,lVar5,0x20,0);
      if (lVar5 == 0) break;
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
      puVar6 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(auStack_58,0x40800000,0);
      if (lVar4 == 0) break;
      uStack_60 = *(undefined4 *)(puVar6 + 1);
      uStack_68 = *puVar6;
      FUN_1800050f0(0x4f,TI_UnityEngine.UIElements.IStyle,lVar4,&uStack_68);
      if (iVar8 == *(int *)(param_1 + 0x104)) {
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar4 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uStack_48 = *(undefined4 *)(lVar4 + 0x60);
        uStack_44 = *(undefined4 *)(lVar4 + 100);
        uStack_40 = *(undefined4 *)(lVar4 + 0x68);
        uStack_3c = *(undefined4 *)(lVar4 + 0x6c);
        SparkEstilo__Borda__18071da60(lVar5,&uStack_48,0x40000000,0,0);
      }
      uVar7 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
      FUN_18055b980(uVar7,lVar3,MD_MacroWindow.__c__DisplayClass34_0._MostraIcones_b__0,0);
      FUN_180990d50(lVar5,uVar7,0);
      if (*(longlong *)(param_1 + 0xc0) == 0) break;
      UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0xc0),lVar5,0);
      iVar8 = iVar8 + 1;
      if (6 < iVar8) {
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

