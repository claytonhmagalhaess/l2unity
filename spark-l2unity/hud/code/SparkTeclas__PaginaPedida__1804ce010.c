// SparkTeclas__PaginaPedida__1804ce010 @ 0x1804ce010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkTeclas__PaginaPedida__1804ce010(void)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int aiStackX_10 [6];
  
  if (cRam00000001834b32fd == '\0') {
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(LIT_"'BarPage'");
    cRam00000001834b32fd = '\x01';
  }
  aiStackX_10[0] = 1;
  do {
    uVar3 = System_Int32__ToString(aiStackX_10,0);
    uVar3 = System_String__Concat(LIT_"'BarPage'",uVar3,0);
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (DAT_1834b32ed == '\0') {
      FUN_180315380(TI_SparkTeclas);
      DAT_1834b32ed = '\x01';
    }
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar4 = SparkTeclas__get_Nosso(0);
    if (lVar4 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    lVar4 = UnityEngine_InputSystem_InputActionMap__FindAction(lVar4,uVar3,0,0);
    if (lVar4 != 0) {
      cVar2 = UnityEngine_InputSystem_InputAction__WasPerformedThisFrame(lVar4);
      if (cVar2 != '\0') {
        return (ulonglong)(aiStackX_10[0] - 1);
      }
    }
    aiStackX_10[0] = aiStackX_10[0] + 1;
  } while (aiStackX_10[0] < 6);
  return 0xffffffff;
}

