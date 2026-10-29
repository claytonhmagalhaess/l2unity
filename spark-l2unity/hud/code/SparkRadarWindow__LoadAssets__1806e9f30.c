// SparkRadarWindow__LoadAssets__1806e9f30 @ 0x1806e9f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow__LoadAssets__1806e9f30(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b408b == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_UnityEngine.ScriptableObject.CreateInstance<UnityEngine.UIElements.VisualTreeAsset>);
    cRam00000001834b408b = '\x01';
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = UnityEngine_Object__op_Equality(uVar2,0,0);
  if (cVar1 != '\0') {
    uVar2 = FUN_180a87ef0(MR_UnityEngine.ScriptableObject.CreateInstance<UnityEngine.UIElements.VisualTreeAsset>);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    func_0x000180314690(param_1 + 0x28,uVar2);
  }
  return;
}

