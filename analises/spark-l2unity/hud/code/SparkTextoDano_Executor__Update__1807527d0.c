// SparkTextoDano_Executor__Update__1807527d0 @ 0x1807527d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTextoDano_Executor__Update__1807527d0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  
  if (cRam00000001834b42b9 == '\0') {
    FUN_180315380(TI_SparkTextoDano);
    cRam00000001834b42b9 = '\x01';
  }
  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = SparkTextoDano__Anda__180746a10(0);
  if (cVar3 == '\0') {
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
  return;
}

