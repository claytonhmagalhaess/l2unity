// CameraController__ClampAngle__180571fa0 @ 0x180571fa0

float CameraController__ClampAngle__180571fa0
                (undefined8 param_1,float param_2,float param_3,float param_4)

{
  if (param_2 < -360.0) {
    param_2 = param_2 + 360.0;
  }
  if (360.0 < param_2) {
    param_2 = param_2 + -360.0;
  }
  if (param_3 <= param_2) {
    if (param_4 < param_2) {
      return param_4;
    }
    return param_2;
  }
  return param_3;
}

