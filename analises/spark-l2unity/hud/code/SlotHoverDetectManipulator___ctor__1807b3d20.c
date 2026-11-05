// SlotHoverDetectManipulator___ctor__1807b3d20 @ 0x1807b3d20

void SlotHoverDetectManipulator___ctor__1807b3d20
               (longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined8 unaff_RDI;
  
  UnityEngine_UIElements_MouseManipulator___ctor(param_1,0);
  param_1[7] = param_3;
  func_0x000180314690(param_1 + 7,param_3);
  param_1[8] = param_2;
  func_0x000180314690(param_1 + 8,param_2);
  if (param_1[2] != 0) {
    (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0),0,param_4,unaff_RDI);
  }
  param_1[2] = param_2;
  func_0x000180314690(param_1 + 2,param_2);
  if (param_1[2] != 0) {
    (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  }
  return;
}

