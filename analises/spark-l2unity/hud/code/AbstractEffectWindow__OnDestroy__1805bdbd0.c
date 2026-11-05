// AbstractEffectWindow__OnDestroy__1805bdbd0 @ MR_140296612

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AbstractEffectWindow__OnDestroy__1805bdbd0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0xd0);
  if (lVar1 == 0) {
    uVar5 = func_0x0001803153a0(TI_System.NullReferenceException);
    uVar5 = func_0x000180315580(uVar5);
    uVar6 = func_0x0001803153a0(LIT_"'routine is null'");
    System_NullReferenceException___ctor(uVar5,uVar6,0);
    uVar6 = func_0x0001803153a0(MD_UnityEngine.MonoBehaviour.StopCoroutine);
    FUN_180315590(uVar5,uVar6);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (DAT_1834c11f5 == '\0') {
    FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.MarshalNotNull<UnityEngine.Object>);
    FUN_180315380(LIT_"'obj'");
    DAT_1834c11f5 = '\x01';
  }
  if (param_1 == 0) {
    UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException(0,LIT_"'obj'",0);
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 == 0) {
    UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException(param_1,LIT_"'obj'",0);
  }
  if (_DAT_1834c1258 == (code *)0x0) {
    _DAT_1834c1258 = (code *)FUN_180315630(&UNK_1829422b0);
  }
  cVar4 = (*_DAT_1834c1258)(lVar2);
  if (cVar4 != '\0') {
    if (DAT_1834c11f8 == '\0') {
      FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.MarshalNotNull<UnityEngine.MonoBehaviour>);
      DAT_1834c11f8 = '\x01';
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (lVar2 == 0) {
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException(param_1,0);
    }
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    if (_DAT_1834c1270 == (code *)0x0) {
      _DAT_1834c1270 = (code *)FUN_180315630(&UNK_1829423f0);
    }
                    /* WARNING: Could not recover jumptable at 0x0001824299bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_1834c1270)(lVar2,uVar5);
    return;
  }
  uVar5 = func_0x0001803153a0(TI_System.ArgumentException);
  uVar5 = func_0x000180315580(uVar5);
  uVar6 = func_0x0001803153a0(LIT_"'Coroutines can only be stopped on a MonoBehaviour'");
  System_ArgumentException___ctor(uVar5,uVar6,0);
  uVar6 = func_0x0001803153a0(MD_UnityEngine.MonoBehaviour.StopCoroutine);
  FUN_180315590(uVar5,uVar6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

