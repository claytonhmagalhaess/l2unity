// SparkApiGrafica__get_Atual__180495700 @ 0x180495700

undefined8 SparkApiGrafica__get_Atual__180495700(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = UnityEngine_SystemInfo__get_graphicsDeviceType(0);
  if (iVar1 == 2) {
    return 0;
  }
  if (iVar1 == 0x12) {
    return 1;
  }
  uVar2 = 0xffffffff;
  if (iVar1 == 0x15) {
    uVar2 = 2;
  }
  return uVar2;
}

