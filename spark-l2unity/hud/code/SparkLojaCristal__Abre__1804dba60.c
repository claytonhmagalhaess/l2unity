// SparkLojaCristal__Abre__1804dba60 @ 0x1804dba60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkLojaCristal__Abre__1804dba60(undefined4 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (cRam00000001834b34d5 == '\0') {
    FUN_180315380(TI_SparkLojaCristal);
    FUN_180315380(TI_SparkPacoteLivre);
    FUN_180315380(LIT_"''");
    cRam00000001834b34d5 = '\x01';
  }
  if ((param_2 != 0) || (param_2 = LIT_"''", LIT_"''" != 0)) {
    lVar3 = func_0x00018170d270(param_2,0);
    if (lVar3 != 0) {
      if (0x1d < *(int *)(lVar3 + 0x10)) {
        lVar3 = System_String__Substring(lVar3,0,0x1d,0);
      }
      lVar4 = func_0x000180315580(TI_SparkPacoteLivre);
      func_0x000180503ed0(lVar4,0xd0,0);
      if (lVar4 != 0) {
        lVar4 = SparkPacoteLivre__H(lVar4,0x1c1,0);
        if (lVar4 != 0) {
          lVar4 = SparkPacoteLivre__D(lVar4,param_1,0);
          if (lVar4 != 0) {
            lVar3 = SparkPacoteLivre__S(lVar4,lVar3,0);
            if (*(int *)(TI_SparkLojaCristal + 0xe4) == 0) {
              func_0x000180315660();
            }
            if (DAT_1834b30fb == '\0') {
              FUN_180315380(TI_GameClient);
              DAT_1834b30fb = '\x01';
            }
            if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
               (plVar1 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
               plVar1 != (longlong *)0x0)) {
              if (lVar3 == 0) goto code_r0x0001804dbbdd;
              uVar5 = SparkPacoteLivre__Fim(lVar3,0);
              (**(code **)(*plVar1 + 0x178))(plVar1,uVar5,*(undefined8 *)(*plVar1 + 0x180));
            }
            return;
          }
        }
      }
    }
  }
code_r0x0001804dbbdd:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

