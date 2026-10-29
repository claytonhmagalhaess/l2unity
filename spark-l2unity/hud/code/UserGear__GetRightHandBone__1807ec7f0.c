// UserGear__GetRightHandBone__1807ec7f0 @ 0x1807ec7f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 UserGear__GetRightHandBone__1807ec7f0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b46a3 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(LIT_"'] Right hand bone was not assigned, please pre-assign it...");
    FUN_180315380(LIT_"'Weapon_R_Bone'");
    FUN_180315380(LIT_"'['");
    cRam00000001834b46a3 = '\x01';
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
  if (cVar2 != '\0') {
    lVar3 = UnityEngine_Component__get_transform(param_1,0);
    if (lVar3 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    uVar4 = func_0x00018242cb90(lVar3,0);
    uVar4 = System_String__Concat(LIT_"'['",uVar4,LIT_"'] Right hand bone was not assigned, please pre-assign it...",0);
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__LogWarning(uVar4,0);
    uVar4 = UnityEngine_Component__get_transform(param_1,0);
    uVar4 = TransformUtils__FindRecursive(uVar4,LIT_"'Weapon_R_Bone'",0);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    func_0x000180314690(param_1 + 0x30,uVar4);
  }
  return *(undefined8 *)(param_1 + 0x30);
}

