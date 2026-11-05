// SparkServidor__DoArquivo__180541ed0 @ 0x180541ed0

void SparkServidor__DoArquivo__180541ed0(longlong *param_1,undefined4 *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  if (cRam00000001834b37a4 == '\0') {
    FUN_180315380(0x1832d3a90);
    FUN_180315380(0x1832c9cc0);
    FUN_180315380(0x1832e0c90);
    FUN_180315380(0x1832df420);
    FUN_180315380(0x18330f7d8);
    FUN_180315380(0x1832cca80);
    cRam00000001834b37a4 = '\x01';
  }
  if (*(int *)(lRam00000001832d3a90 + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar4 = FUN_1823c9b60(0);
  if (*(int *)(lRam00000001832c9cc0 + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar4 = FUN_181875c70(uVar4,uRam00000001832df420,0);
  cVar2 = FUN_18185a2e0(uVar4,0);
  if (cVar2 != '\0') {
    lVar5 = FUN_18185b0d0(uVar4,0);
    if (lVar5 == 0) {
code_r0x000180542138:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar8 = 0;
    while ((int)uVar8 < *(int *)(lVar5 + 0x18)) {
      if (*(uint *)(lVar5 + 0x18) <= uVar8) {
        FUN_1803155c0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar6 = *(longlong *)(lVar5 + 0x20 + (longlong)(int)uVar8 * 8);
      if ((lVar6 == 0) || (lVar6 = func_0x00018170d270(lVar6,0), lVar6 == 0))
      goto code_r0x000180542138;
      if ((*(int *)(lVar6 + 0x10) == 0) ||
         ((cVar2 = FUN_18170bf50(lVar6,uRam00000001832e0c90,0), cVar2 != '\0' ||
          (iVar3 = func_0x0001817079f0(lVar6), iVar3 < 1)))) {
code_r0x00018054210b:
        uVar8 = uVar8 + 1;
      }
      else {
        lVar7 = FUN_18170c070(lVar6,0,iVar3,0);
        if ((lVar7 == 0) || (lVar7 = func_0x00018170d270(lVar7,0), lVar7 == 0))
        goto code_r0x000180542138;
        uVar4 = FUN_18170c9f0(lVar7,0);
        lVar6 = func_0x00018170c060(lVar6,iVar3 + 1);
        if (lVar6 == 0) goto code_r0x000180542138;
        lVar6 = func_0x00018170d270(lVar6,0);
        cVar2 = func_0x0001817058a0(uVar4,uRam000000018330f7d8);
        if (cVar2 == '\0') {
code_r0x0001805420d9:
          cVar2 = func_0x0001817058a0(uVar4);
          if ((cVar2 != '\0') && (cVar2 = FUN_18189c820(lVar6), cVar2 != '\0')) {
            *param_2 = 0;
          }
          goto code_r0x00018054210b;
        }
        if (lVar6 == 0) goto code_r0x000180542138;
        if (*(int *)(lVar6 + 0x10) < 1) goto code_r0x0001805420d9;
        *param_1 = lVar6;
        func_0x000180314690(param_1);
        uVar8 = uVar8 + 1;
      }
    }
  }
  return;
}

