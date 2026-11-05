// SkillbarSlot___ctor__180705a00 @ 0x180705a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarSlot___ctor__180705a00
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined8 uVar1;
  
  if (cRam00000001834b416a == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'Key'");
    cRam00000001834b416a = '\x01';
  }
  L2DraggableSlot___ctor__180771210(param_1,param_3,param_2,5,1,0,0);
  *(undefined8 *)(param_1 + 0x40) = param_2;
  func_0x000180314690(param_1 + 0x40,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0xbc) = param_5;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0xb8) = param_4;
  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = FUN_180b0e310(uVar1,LIT_"'Key'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  func_0x000180314690(param_1 + 0xc0,uVar1);
  *(undefined1 *)(param_1 + 0x88) = 0;
  return;
}

