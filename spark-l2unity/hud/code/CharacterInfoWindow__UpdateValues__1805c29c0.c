// CharacterInfoWindow__UpdateValues__1805c29c0 @ 0x1805c29c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterInfoWindow__UpdateValues__1805c29c0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b3aa6 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(LIT_"\"Player entity is null, can't update character window\"");
    cRam00000001834b3aa6 = '\x01';
  }
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  uVar5 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
  if (cVar3 != '\0') {
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar5 = LIT_"\"Player entity is null, can't update character window\"";
    if (DAT_1834bfa1e == '\0') {
      FUN_180315380(TI_UnityEngine.Debug,0);
      FUN_180315380(TI_UnityEngine.ILogger);
      DAT_1834bfa1e = '\x01';
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
    lVar4 = *(longlong *)(*(longlong *)(TI_UnityEngine.Debug + 0xb8) + 8);
    if (lVar4 != 0) {
      FUN_180036090(5,TI_UnityEngine.ILogger,lVar4,2,uVar5);
      return;
    }
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam00000001834b3aa7 == '\0') {
    FUN_180315380(TI_CharacterInfoWindow.<UpdateWithDelay>d__53);
    cRam00000001834b3aa7 = '\x01';
  }
  lVar4 = func_0x000180315580(TI_CharacterInfoWindow.<UpdateWithDelay>d__53);
  Gear__UpdateWeaponType__1803dadf0(lVar4,0);
  *(undefined4 *)(lVar4 + 0x10) = 0;
  *(longlong *)(lVar4 + 0x20) = param_1;
  func_0x000180314690(lVar4 + 0x20,param_1);
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  func_0x000180314690(lVar4 + 0x28,uVar5);
  if (lVar4 == 0) {
    uVar5 = func_0x0001803153a0(TI_System.NullReferenceException);
    uVar5 = func_0x000180315580(uVar5);
    uVar6 = func_0x0001803153a0(LIT_"'routine is null'");
    System_NullReferenceException___ctor(uVar5,uVar6,0);
    uVar6 = func_0x0001803153a0(MD_UnityEngine.MonoBehaviour.StartCoroutine);
    FUN_180315590(uVar5,uVar6);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
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
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException(param_1,LIT_"'obj'",0);
  }
  if (_DAT_1834c1258 == (code *)0x0) {
    _DAT_1834c1258 = (code *)FUN_180315630(&UNK_1829422b0);
  }
  cVar3 = (*_DAT_1834c1258)(lVar1);
  if (cVar3 != '\0') {
    if (DAT_1834c11f7 == '\0') {
      FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.MarshalNotNull<UnityEngine.MonoBehaviour>);
      DAT_1834c11f7 = '\x01';
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 == 0) {
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException(param_1,0);
    }
    if (_DAT_1834c1268 == (code *)0x0) {
      _DAT_1834c1268 = (code *)FUN_180315630(&UNK_182942380);
    }
                    /* WARNING: Could not recover jumptable at 0x000182429079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_1834c1268)(lVar1,lVar4);
    return;
  }
  uVar5 = func_0x0001803153a0(TI_System.ArgumentException);
  uVar5 = func_0x000180315580(uVar5);
  uVar6 = func_0x0001803153a0(LIT_"'Coroutines can only be stopped on a MonoBehaviour'");
  System_ArgumentException___ctor(uVar5,uVar6,0);
  uVar6 = func_0x0001803153a0(MD_UnityEngine.MonoBehaviour.StartCoroutine);
  FUN_180315590(uVar5,uVar6);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

