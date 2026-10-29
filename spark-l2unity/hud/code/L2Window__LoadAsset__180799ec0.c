// L2Window__LoadAsset__180799ec0 @ 0x180799ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 L2Window__LoadAsset__180799ec0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b447b == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.UIElements.VisualTreeAsset>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(LIT_"' template.'");
    FUN_180315380(LIT_"'Could not load '");
    cRam00000001834b447b = '\x01';
  }
  if (*(int *)(TI_SparkArte + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar2 = FUN_180a90ae0(param_2,MR_SparkArte.Load<UnityEngine.UIElements.VisualTreeAsset>);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = UnityEngine_Object__op_Equality(uVar2,0,0);
  if (cVar1 != '\0') {
    uVar3 = System_String__Concat(LIT_"'Could not load '",param_2,LIT_"' template.'",0);
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__LogError(uVar3,0);
  }
  return uVar2;
}

