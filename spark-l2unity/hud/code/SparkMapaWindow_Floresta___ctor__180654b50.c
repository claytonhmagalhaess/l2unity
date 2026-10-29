// SparkMapaWindow_Floresta___ctor__180654b50 @ 0x180654b50

void SparkMapaWindow_Floresta___ctor__180654b50(longlong *param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  *param_1 = param_2;
  func_0x000180314690();
  param_1[1] = param_3;
  func_0x000180314690(param_1 + 1,param_3);
  if (param_2 != 0) {
    lVar4 = System_String__Split(param_2,0x5f,0,0);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        iVar2 = System_Int32__Parse(*(undefined8 *)(lVar4 + 0x20),0);
        if (1 < *(uint *)(lVar4 + 0x18)) {
          iVar3 = System_Int32__Parse(*(undefined8 *)(lVar4 + 0x28),0);
          *(float *)(param_1 + 2) = (float)(iVar2 + -0x14) * 32768.0;
          *(float *)((longlong)param_1 + 0x14) = (float)(iVar3 + -0x12) * 32768.0;
          return;
        }
      }
      FUN_1803155c0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

