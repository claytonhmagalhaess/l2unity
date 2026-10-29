// ==== 1014ce50 FUN_1014ce50 depth=0 from=raiz callees=ENGINE.DLL::UInput::KeyDown@EXTERNAL:000000a0
// strings: 

undefined4 __fastcall FUN_1014ce50(int *param_1)

{
  int *piVar1;
  uchar uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1020baa0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(int *)GLanguageType_exref == 0) && (iVar3 = (**(code **)(*param_1 + 0x6c))(), iVar3 != 0))
  {
    ExceptionList = local_10;
    return 0;
  }
  if ((((param_1[0x14] != 0) && (iVar3 = *(int *)(param_1[0x14] + 0x54), iVar3 != 0)) &&
      (piVar1 = *(int **)(iVar3 + 0x38), *piVar1 != 0)) &&
     ((iVar3 = *piVar1, *(int *)(iVar3 + 0x78) != 0 &&
      (uVar2 = UInput::KeyDown(*(UInput **)(iVar3 + 0x78),0x11), uVar2 != '\0')))) {
    ExceptionList = local_10;
    return 1;
  }
  if (param_1[0x1439] != 0) {
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


