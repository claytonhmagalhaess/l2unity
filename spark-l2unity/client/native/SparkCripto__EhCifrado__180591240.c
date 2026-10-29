// SparkCripto__EhCifrado__180591240 @ 0x180591240

ulonglong SparkCripto__EhCifrado__180591240(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  longlong lVar6;
  
  if (cRam00000001834b39ec == '\0') {
    in_RAX = FUN_180315380(0x1832eb8c8);
    cRam00000001834b39ec = '\x01';
  }
  if (param_1 != 0) {
    if (*(int *)(lRam00000001832eb8c8 + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (**(longlong **)(lRam00000001832eb8c8 + 0xb8) == 0) {
code_r0x000180591357:
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    uVar4 = *(int *)(**(longlong **)(lRam00000001832eb8c8 + 0xb8) + 0x18) + 0x10;
    in_RAX = (ulonglong)uVar4;
    if ((int)uVar4 <= *(int *)(param_1 + 0x18)) {
      uVar4 = 0;
      lVar6 = lRam00000001832eb8c8;
      do {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          func_0x000180315660();
          lVar6 = lRam00000001832eb8c8;
        }
        lVar2 = **(longlong **)(lVar6 + 0xb8);
        if (lVar2 == 0) goto code_r0x000180591357;
        if (*(int *)(lVar2 + 0x18) <= (int)uVar4) {
          return CONCAT71((int7)((ulonglong)*(longlong **)(lVar6 + 0xb8) >> 8),1);
        }
        if (*(uint *)(param_1 + 0x18) <= uVar4) {
code_r0x000180591351:
          FUN_1803155c0();
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return uVar5;
        }
        cVar1 = *(char *)((longlong)(int)uVar4 + 0x20 + param_1);
        if (*(int *)(lVar6 + 0xe4) == 0) {
          func_0x000180315660();
          lVar6 = lRam00000001832eb8c8;
        }
        lVar2 = **(longlong **)(lVar6 + 0xb8);
        if (lVar2 == 0) goto code_r0x000180591357;
        if (*(uint *)(lVar2 + 0x18) <= uVar4) goto code_r0x000180591351;
        in_RAX = (ulonglong)(int)uVar4;
        if (cVar1 != *(char *)(in_RAX + 0x20 + lVar2)) break;
        uVar4 = uVar4 + 1;
      } while( true );
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

