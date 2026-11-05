// DiagonalResizeManipulator___ctor__1807ada00 @ 0x1807ada00

void DiagonalResizeManipulator___ctor__1807ada00
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9)

{
  UnityEngine_UIElements_MouseManipulator___ctor(param_1,0);
  UnityEngine_UIElements_Manipulator__set_target(param_1,param_2,0);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  func_0x000180314690(param_1 + 0x38,param_3);
  *(undefined4 *)(param_1 + 0x54) = param_5;
  *(undefined4 *)(param_1 + 0x5c) = param_7;
  *(undefined4 *)(param_1 + 0x58) = param_6;
  *(undefined4 *)(param_1 + 0x50) = param_4;
  *(undefined4 *)(param_1 + 100) = param_9;
  *(undefined4 *)(param_1 + 0x60) = param_8;
  *(undefined1 *)(param_1 + 0x68) = 1;
  return;
}

