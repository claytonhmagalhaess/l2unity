// HorizontalResizeManipulator___ctor__1807afd70 @ 0x1807afd70

void HorizontalResizeManipulator___ctor__1807afd70
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6)

{
  UnityEngine_UIElements_MouseManipulator___ctor(param_1,0);
  UnityEngine_UIElements_Manipulator__set_target(param_1,param_2,0);
  *(undefined8 *)(param_1 + 0x58) = param_6;
  func_0x000180314690(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  func_0x000180314690(param_1 + 0x38,param_3);
  *(undefined4 *)(param_1 + 0x4c) = param_4;
  *(undefined4 *)(param_1 + 0x50) = param_5;
  return;
}

