// SparkServidor__DaLinhaDeComando__180541d60 @ 0x180541d60

undefined8 SparkServidor__DaLinhaDeComando__180541d60(longlong *param_1,uint *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint auStackX_20 [2];
  
  if (cRam00000001834b37a3 == '\0') {
    FUN_180315380(0x1832ff7a8);
    cRam00000001834b37a3 = '\x01';
  }
  auStackX_20[0] = 0;
  lVar4 = func_0x0001818f2610(0);
  if (lVar4 == 0) {
code_r0x000180541eb6:
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  uVar6 = 0;
  do {
    if (*(int *)(lVar4 + 0x18) + -1 <= (int)uVar6) {
      return 0;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) {
code_r0x000180541ebc:
      FUN_1803155c0();
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    cVar2 = FUN_181705c40(*(undefined8 *)(lVar4 + 0x20 + (longlong)(int)uVar6 * 8),
                          uRam00000001832ff7a8,5,0);
    if (cVar2 != '\0') {
      if (*(uint *)(lVar4 + 0x18) <= (uint)((longlong)(int)uVar6 + 1)) goto code_r0x000180541ebc;
      lVar4 = *(longlong *)(lVar4 + 0x20 + ((longlong)(int)uVar6 + 1) * 8);
      if ((lVar4 != 0) && (lVar4 = func_0x00018170d270(lVar4,0), lVar4 != 0)) {
        iVar3 = func_0x000181709360(lVar4,0x3a,0);
        if (0 < iVar3) {
          uVar5 = func_0x00018170c060(lVar4,iVar3 + 1,0);
          cVar2 = FUN_18189c820(uVar5,auStackX_20,0);
          if (cVar2 != '\0') {
            lVar4 = FUN_18170c070(lVar4,0,iVar3,0);
            *param_1 = lVar4;
            func_0x000180314690(param_1,lVar4);
            *param_2 = auStackX_20[0];
            return 1;
          }
        }
        *param_1 = lVar4;
        func_0x000180314690(param_1,lVar4);
        return 1;
      }
      goto code_r0x000180541eb6;
    }
    uVar6 = uVar6 + 1;
  } while( true );
}

