// PetWindow__AceitaSoltar__1806ab800 @ 0x1806ab800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong PetWindow__AceitaSoltar__1806ab800(longlong param_1)

{
  code *pcVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  
  if (cRam00000001834b3fbe == '\0') {
    in_RAX = FUN_180315380(TI_SparkPet);
    cRam00000001834b3fbe = '\x01';
  }
  if ((*(char *)(param_1 + 0x88) != '\0') && (*(char *)(param_1 + 0x38) == '\0')) {
    if (*(int *)(TI_SparkPet + 0xe4) == 0) {
      func_0x000180315660();
    }
    in_RAX = SparkPet__get_EhPet(0);
    if ((char)in_RAX != '\0') {
      if (*(longlong *)(param_1 + 0x40) != 0) {
        return (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x40) + 0x39);
      }
      FUN_1803155d0(param_1,0);
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return uVar2;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

