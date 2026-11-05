// CharacterSelector__SelectDefaultCharacter__1807ba7d0 @ 0x1807ba7d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterSelector__SelectDefaultCharacter__1807ba7d0(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 auStackX_8 [2];
  
  if (cRam00000001834b45f6 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_System.Collections.Generic.List<CharSelectionInfoPackage>.get_Count);
    FUN_180315380(LIT_"'Selecting default slot '");
    cRam00000001834b45f6 = '\x01';
  }
  auStackX_8[0] = *(undefined4 *)(param_1 + 0x24);
  uVar2 = System_Int32__ToString(auStackX_8,0);
  uVar2 = System_String__Concat(LIT_"'Selecting default slot '",uVar2,0);
  if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
    func_0x000180315660();
  }
  UnityEngine_Debug__Log(uVar2,0);
  if (*(int *)(param_1 + 0x24) == -1) {
    if (*(longlong *)(param_1 + 0x98) == 0) goto code_r0x0001807ba8af;
    if (0 < *(int *)(*(longlong *)(param_1 + 0x98) + 0x18)) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  if (-1 < *(int *)(param_1 + 0x24)) {
    if (*(longlong *)(param_1 + 0x98) == 0) {
code_r0x0001807ba8af:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x98) + 0x18) == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    }
  }
  CharacterSelector__SelectCharacter__1807ba450(param_1,*(undefined4 *)(param_1 + 0x24),0);
  return;
}

