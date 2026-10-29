// L2SlotContainer__InstantiateSlot__18078f4b0 @ 0x18078f4b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
L2SlotContainer__InstantiateSlot__18078f4b0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  if (DAT_1834b443c == '\0') {
    FUN_180315380(TI_ActionSlot);
    FUN_180315380(TI_BasketSlot);
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_InventorySlot);
    FUN_180315380(TI_ProductSlot);
    FUN_180315380(TI_SkillSlot);
    FUN_180315380(TI_TradeSlot);
    FUN_180315380(LIT_"'Invalid slot type assigned to slot container!'");
    DAT_1834b443c = '\x01';
  }
  switch(param_2) {
  case 1:
  case 2:
    if (DAT_1834b3d0f == '\0') {
      FUN_180315380(TI_L2SlotManager);
      DAT_1834b3d0f = '\x01';
    }
    if (((**(longlong **)(TI_L2SlotManager + 0xb8) == 0) ||
        (lVar2 = *(longlong *)(**(longlong **)(TI_L2SlotManager + 0xb8) + 0xa8), lVar2 == 0)) ||
       (lVar2 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(lVar2,0), lVar2 == 0))
    goto code_r0x00018078f886;
    lVar2 = UnityEngine_UIElements_VisualElement__get_Item(lVar2,0,0);
    uVar3 = func_0x000180315580(TI_InventorySlot);
    GearSlot___ctor__18061e230(uVar3,param_3,lVar2,param_1,CONCAT44(uVar4,param_2),0);
    break;
  default:
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__LogWarning(LIT_"'Invalid slot type assigned to slot container!'",0);
    return 0;
  case 4:
    lVar2 = FUN_18061dfc0(0);
    if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0xb8) == 0)) ||
       (lVar2 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(*(longlong *)(lVar2 + 0xb8),0),
       lVar2 == 0)) goto code_r0x00018078f886;
    lVar2 = UnityEngine_UIElements_VisualElement__get_Item(lVar2,0,0);
    uVar3 = func_0x000180315580(TI_SkillSlot);
    SkillSlot___ctor__1807011a0(uVar3,param_3,lVar2,param_2,0);
    break;
  case 6:
    lVar2 = FUN_18061dfc0(0);
    if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0xa0) == 0)) ||
       (lVar2 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(*(longlong *)(lVar2 + 0xa0),0),
       lVar2 == 0)) goto code_r0x00018078f886;
    lVar2 = UnityEngine_UIElements_VisualElement__get_Item(lVar2,0,0);
    uVar3 = func_0x000180315580(TI_ActionSlot);
    ActionSlot___ctor__1805a3170(uVar3,lVar2,param_3,param_2,0);
    break;
  case 8:
    lVar2 = FUN_18061dfc0(0);
    if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0xb0) == 0)) ||
       (lVar2 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(*(longlong *)(lVar2 + 0xb0),0),
       lVar2 == 0)) goto code_r0x00018078f886;
    lVar2 = UnityEngine_UIElements_VisualElement__get_Item(lVar2,0,0);
    uVar3 = func_0x000180315580(TI_ProductSlot);
    BasketSlot___ctor__1806f9020(uVar3,param_3,lVar2,param_1,CONCAT44(uVar4,param_2),0);
    break;
  case 9:
    lVar2 = FUN_18061dfc0(0);
    if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0xb0) == 0)) ||
       (lVar2 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(*(longlong *)(lVar2 + 0xb0),0),
       lVar2 == 0)) goto code_r0x00018078f886;
    lVar2 = UnityEngine_UIElements_VisualElement__get_Item(lVar2,0,0);
    uVar3 = func_0x000180315580(TI_BasketSlot);
    BasketSlot___ctor__1806f9020(uVar3,param_3,lVar2,param_1,CONCAT44(uVar4,param_2),0);
    break;
  case 0xb:
    lVar2 = FUN_18061dfc0(0);
    if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0xa8) == 0)) ||
       (lVar2 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(*(longlong *)(lVar2 + 0xa8),0),
       lVar2 == 0)) goto code_r0x00018078f886;
    lVar2 = UnityEngine_UIElements_VisualElement__get_Item(lVar2,0,0);
    uVar3 = func_0x000180315580(TI_TradeSlot);
    BasketSlot___ctor__1806f9020(uVar3,param_3,lVar2,param_1,CONCAT44(uVar4,param_2),0);
  }
  if (lVar2 != 0) {
    if (*(longlong *)(param_1 + 0x30) == 0) {
code_r0x00018078f886:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x30),lVar2,0);
  }
  return uVar3;
}

