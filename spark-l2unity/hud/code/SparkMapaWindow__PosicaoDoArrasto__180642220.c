// SparkMapaWindow__PosicaoDoArrasto__180642220 @ 0x180642220

undefined8 SparkMapaWindow__PosicaoDoArrasto__180642220(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x188) != 0) {
    return *(undefined8 *)(param_1 + 0x198);
  }
  if (*(char *)(param_1 + 0x1f8) != '\0') {
    return *(undefined8 *)(param_1 + 0x200);
  }
  return CONCAT44(-*(float *)(param_1 + 0x210) * *(float *)(param_1 + 0x208),
                  -*(float *)(param_1 + 0x20c) * *(float *)(param_1 + 0x208));
}

