// GearSlot___ctor__18061e230 @ 0x18061e230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GearSlot___ctor__18061e230
               (longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (DAT_1834b3cc2 == '\0') {
    FUN_180315380(TI_SlotClickSoundManipulator);
    DAT_1834b3cc2 = '\x01';
  }
  L2DraggableSlot___ctor__180771210(param_1,param_2,param_3,param_5,0,1,0);
  *(undefined8 *)(param_1 + 0x80) = param_4;
  func_0x000180314690(param_1 + 0x80,param_4);
  *(undefined1 *)(param_1 + 0x38) = 1;
  if (*(longlong *)(param_1 + 0x98) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = func_0x000180315580(TI_SlotClickSoundManipulator);
    SlotClickSoundManipulator___ctor__1807b2f40(uVar2,uVar1,0);
    *(undefined8 *)(param_1 + 0x98) = uVar2;
    func_0x000180314690(param_1 + 0x98,uVar2);
    UnityEngine_UIElements_VisualElementExtensions__AddManipulator
              (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x98),0);
  }
  return;
}

