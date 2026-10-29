// L2Window__MouseOverThisWindow__18079a050 @ 0x18079a050

ulonglong L2Window__MouseOverThisWindow__18079a050(longlong param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    return (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x40) + 0x39);
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}

