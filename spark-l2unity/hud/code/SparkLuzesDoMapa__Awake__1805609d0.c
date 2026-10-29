// SparkLuzesDoMapa__Awake__1805609d0 @ 0x1805609d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkLuzesDoMapa__Awake__1805609d0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b388c == '\0') {
    FUN_180315380(TI_SparkLuzesDoMapa);
    cRam00000001834b388c = '\x01';
  }
  if (*(int *)(TI_SparkLuzesDoMapa + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = SparkLuzesDoMapa__Carrega(0);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  func_0x000180314690(param_1 + 0x20,uVar3);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18) != 0) {
    return;
  }
  if (DAT_1834c1083 == '\0') {
    FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.MarshalNotNull<UnityEngine.Behaviour>,0,0);
    DAT_1834c1083 = '\x01';
  }
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 == 0) {
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException(param_1,0);
    }
    if (_DAT_1834c1090 == (code *)0x0) {
      _DAT_1834c1090 = (code *)FUN_180315630(&UNK_1829411c0);
    }
                    /* WARNING: Could not recover jumptable at 0x00018242012e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_1834c1090)(lVar1,0);
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

