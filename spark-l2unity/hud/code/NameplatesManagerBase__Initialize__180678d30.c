// NameplatesManagerBase__Initialize__180678d30 @ 0x180678d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerBase__Initialize__180678d30(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b3e16 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.UIElements.VisualTreeAsset>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(LIT_"'Data/UI/_Elements/Game/Nameplate/Nameplate'");
    FUN_180315380(LIT_"'Failed to load nameplate template.'");
    cRam00000001834b3e16 = '\x01';
  }
  if (*(int *)(TI_SparkArte + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar4 = FUN_180a90ae0(LIT_"'Data/UI/_Elements/Game/Nameplate/Nameplate'",MR_SparkArte.Load<UnityEngine.UIElements.VisualTreeAsset>);
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  func_0x000180314690(param_1 + 0x50,uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar4,0,0);
  if (cVar3 == '\0') {
    return;
  }
  if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar4 = LIT_"'Failed to load nameplate template.'";
  if (DAT_1834bfa18 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug,0);
    FUN_180315380(TI_UnityEngine.ILogger);
    DAT_1834bfa18 = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834b3803 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    DAT_1834b3803 = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_UnityEngine.Debug + 0xb8) + 8);
  if (lVar1 != 0) {
    FUN_180036090(5,TI_UnityEngine.ILogger,lVar1,0,uVar4);
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

