// SparkCifraStream__Dispose__18058ef60 @ 0x18058ef60

void SparkCifraStream__Dispose__18058ef60(longlong param_1,char param_2)

{
  code *pcVar1;
  
  if (param_2 != '\0') {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    func_0x0001817251f0(*(longlong *)(param_1 + 0x28),0);
  }
  return;
}

