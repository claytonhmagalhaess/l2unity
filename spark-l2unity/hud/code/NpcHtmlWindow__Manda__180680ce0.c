// NpcHtmlWindow__Manda__180680ce0 @ 0x180680ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NpcHtmlWindow__Manda__180680ce0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  
  if (cRam00000001834b3e47 == '\0') {
    FUN_180315380(TI_SparkPacoteLivre);
    FUN_180315380(LIT_"'bypass'");
    FUN_180315380(LIT_"'-h'");
    FUN_180315380(LIT_"'link '");
    cRam00000001834b3e47 = '\x01';
  }
  fVar7 = (float)FUN_1824366b0(0);
  if (fVar7 < *(float *)(param_1 + 0x100)) {
    return;
  }
  fVar7 = (float)FUN_1824366b0(0);
  *(float *)(param_1 + 0x100) = fVar7 + 1.0;
  if (param_2 != 0) {
    cVar3 = System_String__StartsWith(param_2,LIT_"'link '",5,0);
    if (cVar3 == '\0') {
      cVar3 = System_String__StartsWith(param_2,LIT_"'bypass'",5,0);
      if ((cVar3 == '\0') ||
         (((lVar4 = func_0x00018170c060(param_2,6,0), lVar4 != 0 &&
           (param_2 = func_0x00018170d270(lVar4,0), param_2 != 0)) &&
          ((cVar3 = System_String__StartsWith(param_2,LIT_"'-h'",5,0), cVar3 == '\0' ||
           ((lVar4 = func_0x00018170c060(param_2,2,0), lVar4 != 0 &&
            (param_2 = func_0x00018170d270(lVar4,0), param_2 != 0)))))))) {
        if (0 < *(int *)(param_2 + 0x10)) {
          if (DAT_1834b30fb == '\0') {
            FUN_180315380(TI_GameClient);
            DAT_1834b30fb = '\x01';
          }
          if ((**(longlong **)(TI_GameClient + 0xb8) == 0) ||
             (lVar4 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8), lVar4 == 0))
          goto DAT_180680f4f;
          GameClientPacketHandler__RequestBypassToServer(lVar4,param_2,0);
        }
        return;
      }
    }
    else {
      if (DAT_1834b30fb == '\0') {
        FUN_180315380(TI_GameClient);
        DAT_1834b30fb = '\x01';
      }
      if (**(longlong **)(TI_GameClient + 0xb8) != 0) {
        plVar1 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8);
        lVar4 = func_0x000180315580(TI_SparkPacoteLivre);
        func_0x000180503ed0(lVar4,0x20,0);
        lVar5 = func_0x00018170c060(param_2,5,0);
        if ((((lVar5 != 0) && (uVar6 = func_0x00018170d270(lVar5,0), lVar4 != 0)) &&
            (lVar4 = SparkPacoteLivre__S(lVar4,uVar6,0), lVar4 != 0)) &&
           (uVar6 = SparkPacoteLivre__Fim(lVar4,0), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000180680f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x178))(plVar1,uVar6,*(undefined8 *)(*plVar1 + 0x180));
          return;
        }
      }
    }
  }
DAT_180680f4f:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

