// SparkServidor__Resolve__180542140 @ 0x180542140

void SparkServidor__Resolve__180542140(longlong *param_1,undefined4 *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 auStackX_8 [8];
  
  uVar6 = 0;
  if (cRam00000001834b37a3 == '\0') {
    FUN_180315380(0x1832ff7a8);
    cRam00000001834b37a3 = '\x01';
  }
  auStackX_8[0] = 0;
  lVar4 = func_0x0001818f2610(0);
  if (lVar4 != 0) {
    while( true ) {
      if (*(int *)(lVar4 + 0x18) + -1 <= (int)uVar6) {
        SparkServidor__DoArquivo__180541ed0(param_1,param_2,0);
        return;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar6) break;
      cVar2 = FUN_181705c40(*(undefined8 *)(lVar4 + 0x20 + (longlong)(int)uVar6 * 8),
                            uRam00000001832ff7a8,5,0);
      if (cVar2 != '\0') {
        if (*(uint *)(lVar4 + 0x18) <= (uint)((longlong)(int)uVar6 + 1)) goto code_r0x0001805422f5;
        lVar4 = *(longlong *)(lVar4 + 0x20 + ((longlong)(int)uVar6 + 1) * 8);
        if (lVar4 != 0) {
          lVar4 = func_0x00018170d270(lVar4,0);
          if (lVar4 != 0) {
            iVar3 = func_0x000181709360(lVar4,0x3a,0);
            if (0 < iVar3) {
              uVar5 = func_0x00018170c060(lVar4,iVar3 + 1,0);
              cVar2 = FUN_18189c820(uVar5,auStackX_8,0);
              if (cVar2 != '\0') {
                lVar4 = FUN_18170c070(lVar4,0,iVar3,0);
                *param_1 = lVar4;
                func_0x000180314690(param_1,lVar4);
                *param_2 = auStackX_8[0];
                return;
              }
            }
            *param_1 = lVar4;
            func_0x000180314690(param_1,lVar4);
            return;
          }
          goto code_r0x0001805422fa;
        }
        goto code_r0x0001805422ff;
      }
      uVar6 = uVar6 + 1;
    }
    FUN_1803155c0();
code_r0x0001805422f5:
    FUN_1803155c0();
code_r0x0001805422fa:
    FUN_1803155d0();
code_r0x0001805422ff:
    FUN_1803155d0();
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

