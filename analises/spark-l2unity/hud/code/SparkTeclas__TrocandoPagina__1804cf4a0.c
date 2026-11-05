// SparkTeclas__TrocandoPagina__1804cf4a0 @ 0x1804cf4a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkTeclas__TrocandoPagina__1804cf4a0(void)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int aiStackX_10 [6];
  
  if (DAT_1834b32fe == '\0') {
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(LIT_"'BarPage'");
    DAT_1834b32fe = '\x01';
  }
  aiStackX_10[0] = 1;
  do {
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar3 = SparkTeclas__get_Nosso(0);
    uVar4 = System_Int32__ToString(aiStackX_10,0);
    uVar4 = System_String__Concat(LIT_"'BarPage'",uVar4,0);
    if (lVar3 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    lVar3 = UnityEngine_InputSystem_InputActionMap__FindAction(lVar3,uVar4,0,0);
    if (lVar3 != 0) {
      cVar2 = UnityEngine_InputSystem_InputAction__IsPressed(lVar3);
      if (cVar2 != '\0') {
        return 1;
      }
      cVar2 = UnityEngine_InputSystem_InputAction__WasPerformedThisFrame(lVar3);
      if (cVar2 != '\0') {
        return 1;
      }
    }
    aiStackX_10[0] = aiStackX_10[0] + 1;
    if (5 < aiStackX_10[0]) {
      return 0;
    }
  } while( true );
}

