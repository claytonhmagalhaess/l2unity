// InventoryGearTab__UpdateItemList__18061eeb0 @ 0x18061eeb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InventoryGearTab__UpdateItemList__18061eeb0(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 auStackX_20 [2];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulonglong uStack_b8;
  longlong *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_90;
  longlong *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  longlong *plStack_60;
  undefined8 uStack_58;
  
  if (cRam00000001834b3cbd == '\0') {
    FUN_180315380(TI_System.Action<ItemInstance>);
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>.Add);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>.Clear);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Paperdoll,UnityEngine.UIElements.VisualElement>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>..ctor);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Paperdoll,UnityEngine.UIElements.VisualElement>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Paperdoll,UnityEngine.UIElements.VisualElement>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Paperdoll,UnityEngine.UIElements.VisualElement>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>.get_Current);
    FUN_180315380(TI_GearSlot);
    FUN_180315380(MD_InventoryGearTab._UpdateItemList_b__4_0);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<Paperdoll,UnityEngine.UIElements.VisualElement>.get_Key);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<Paperdoll,GearSlot>.get_Value);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<Paperdoll,UnityEngine.UIElements.VisualElement>.get_Value);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.ForEach);
    FUN_180315380(TI_Paperdoll);
    FUN_180315380(LIT_"'Inventory gear slot {0} is null.'");
    cRam00000001834b3cbd = '\x01';
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  plStack_88 = (longlong *)0x0;
  uStack_80 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  plStack_b0 = (longlong *)0x0;
  uStack_a8 = 0;
  if (param_1[8] != 0) {
    FUN_18117ccd0(&uStack_78,param_1[8],MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>.GetEnumerator);
    uStack_a0 = uStack_78;
    uStack_98 = uStack_70;
    uStack_90 = uStack_68;
    plStack_88 = plStack_60;
    uStack_80 = uStack_58;
    while (cVar4 = FUN_181334a60(&uStack_a0,MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>.MoveNext), plVar3 = plStack_88,
          cVar4 != '\0') {
      if (plStack_88 != (longlong *)0x0) {
        L2ClickableSlot__UnregisterClickableCallback__18076f2f0(plStack_88,0);
        lVar5 = *plVar3;
        (**(code **)(lVar5 + 0x178))(plVar3,*(undefined8 *)(lVar5 + 0x180));
      }
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_a0,MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>.Dispose);
    if (param_1[8] == 0) goto code_r0x00018061f384;
    FUN_18117b6e0(param_1[8],MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>.Clear);
  }
  lVar5 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>);
  FUN_181239a80(lVar5,MR_System.Collections.Generic.Dictionary<Paperdoll,GearSlot>..ctor);
  param_1[8] = lVar5;
  func_0x000180314690(param_1 + 8,lVar5);
  if (param_1[9] != 0) {
    FUN_18117ccd0(&uStack_78,param_1[9],MR_System.Collections.Generic.Dictionary<Paperdoll,UnityEngine.UIElements.VisualElement>.GetEnumerator);
    uStack_c8 = uStack_78;
    uStack_c0 = uStack_70;
    uStack_b8 = uStack_68;
    plStack_b0 = plStack_60;
    uStack_a8 = uStack_58;
    while (cVar4 = FUN_181334a60(&uStack_c8,MR_System.Collections.Generic.Dictionary<Paperdoll,UnityEngine.UIElements.VisualElement>.MoveNext), plVar3 = plStack_b0,
          uVar2 = uStack_b8, cVar4 != '\0') {
      if (plStack_b0 == (longlong *)0x0) {
        auStackX_20[0] = (undefined4)uStack_b8;
        uVar6 = func_0x000180314670(TI_Paperdoll,auStackX_20);
        uVar6 = System_String__Format(LIT_"'Inventory gear slot {0} is null.'",uVar6,0);
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        UnityEngine_Debug__LogWarning(uVar6,0);
      }
      else {
        UnityEngine_UIElements_VisualElement__Clear(plStack_b0,0);
        lVar5 = FUN_18061dfc0(0);
        if (lVar5 == 0) goto code_r0x00018061f3a0;
        if (*(longlong *)(lVar5 + 0xa8) == 0) {
code_r0x00018061f39b:
          FUN_1803155d0();
code_r0x00018061f3a0:
          FUN_1803155d0();
          FUN_180311490();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar5 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(*(longlong *)(lVar5 + 0xa8),0);
        if (lVar5 == 0) {
code_r0x00018061f396:
          FUN_1803155d0();
          goto code_r0x00018061f39b;
        }
        uVar6 = UnityEngine_UIElements_VisualElement__get_Item(lVar5,0,0);
        UnityEngine_UIElements_VisualElement__Add(plVar3,uVar6,0);
        uVar7 = func_0x000180315580(TI_GearSlot);
        GearSlot___ctor__18061e230(uVar7,uVar2 & 0xffffffff,uVar6,0,3,0);
        if (param_1[8] == 0) {
          FUN_1803155d0();
          goto code_r0x00018061f396;
        }
        FUN_181228bd0(param_1[8],uVar2 & 0xffffffff);
      }
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_c8,MR_System.Collections.Generic.Dictionary<Paperdoll,UnityEngine.UIElements.VisualElement>.Dispose);
    uVar6 = func_0x000180315580(TI_System.Action<ItemInstance>);
    FUN_18055b980(uVar6,param_1,MD_InventoryGearTab._UpdateItemList_b__4_0,0);
    if (param_2 != 0) {
      FUN_180bad8e0(param_2,uVar6,MR_System.Collections.Generic.List<ItemInstance>.ForEach);
      if ((int)param_1[10] != -1) {
        (**(code **)(*param_1 + 0x198))(param_1,(int)param_1[10],*(undefined8 *)(*param_1 + 0x1a0));
      }
      return;
    }
  }
code_r0x00018061f384:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

