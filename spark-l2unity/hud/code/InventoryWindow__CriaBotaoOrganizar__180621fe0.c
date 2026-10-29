// InventoryWindow__CriaBotaoOrganizar__180621fe0 @ 0x180621fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong InventoryWindow__CriaBotaoOrganizar__180621fe0(void)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b3cdb == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_ButtonClickSoundManipulator);
    FUN_180315380(TI_UnityEngine.UIElements.Button);
    FUN_180315380(TI_TooltipManipulator);
    FUN_180315380(MD_InventoryWindow.__c._CriaBotaoOrganizar_b__43_0);
    FUN_180315380(TI_InventoryWindow.<>c);
    FUN_180315380(LIT_"'inventory-sort-btn'");
    FUN_180315380(LIT_"'Sort Items'");
    cRam00000001834b3cdb = '\x01';
  }
  if (*(int *)(TI_InventoryWindow.<>c + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar2 = *(longlong *)(*(longlong *)(TI_InventoryWindow.<>c + 0xb8) + 0x18);
  if (lVar2 == 0) {
    if (*(int *)(TI_InventoryWindow.<>c + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = **(undefined8 **)(TI_InventoryWindow.<>c + 0xb8);
    lVar2 = func_0x000180315580(TI_System.Action);
    FUN_1816a9c60(lVar2,uVar4,MD_InventoryWindow.__c._CriaBotaoOrganizar_b__43_0,0);
    *(longlong *)(*(longlong *)(TI_InventoryWindow.<>c + 0xb8) + 0x18) = lVar2;
    func_0x000180314690(*(longlong *)(TI_InventoryWindow.<>c + 0xb8) + 0x18,lVar2);
  }
  lVar3 = func_0x000180315580(TI_UnityEngine.UIElements.Button);
  UnityEngine_UIElements_Button___ctor(lVar3,lVar2,0);
  if (lVar3 != 0) {
    UnityEngine_UIElements_VisualElement__AddToClassList(lVar3,LIT_"'inventory-sort-btn'",0);
    uVar4 = func_0x000180315580(TI_ButtonClickSoundManipulator);
    BlinkingCursorManipulator___ctor__1807aa3c0(uVar4,lVar3,0);
    UnityEngine_UIElements_VisualElementExtensions__AddManipulator(lVar3,uVar4,0);
    uVar4 = func_0x000180315580(TI_TooltipManipulator);
    TooltipManipulator___ctor__1807b5900(uVar4,lVar3,7,LIT_"'Sort Items'",0);
    UnityEngine_UIElements_VisualElementExtensions__AddManipulator(lVar3,uVar4,0);
    return lVar3;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  lVar2 = (*pcVar1)();
  return lVar2;
}

