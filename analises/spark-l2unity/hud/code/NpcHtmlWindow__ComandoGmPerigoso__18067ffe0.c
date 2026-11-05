// NpcHtmlWindow__ComandoGmPerigoso__18067ffe0 @ 0x18067ffe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 NpcHtmlWindow__ComandoGmPerigoso__18067ffe0(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (cRam00000001834b3e45 == '\0') {
    FUN_180315380(MR_System.Array.IndexOf<string>);
    FUN_180315380(TI_char__);
    FUN_180315380(TI_NpcHtmlWindow);
    FUN_180315380(LIT_"' '");
    FUN_180315380(LIT_"'bypass'");
    FUN_180315380(LIT_"'-h'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3e45 = '\x01';
  }
  *param_2 = LIT_"''";
  func_0x000180314690(param_2,LIT_"''");
  if (((param_1 != 0) || (param_1 = LIT_"''", LIT_"''" != 0)) &&
     (lVar4 = func_0x00018170d270(param_1,0), lVar4 != 0)) {
    cVar2 = System_String__StartsWith(lVar4,LIT_"'bypass'",5,0);
    if (cVar2 != '\0') {
      lVar4 = func_0x00018170c060(lVar4,6,0);
      if ((lVar4 == 0) || (lVar4 = func_0x00018170d270(lVar4,0), lVar4 == 0))
      goto code_r0x000180680296;
      cVar2 = System_String__StartsWith(lVar4,LIT_"'-h'",5,0);
      if (cVar2 != '\0') {
        lVar4 = func_0x00018170c060(lVar4,2,0);
        if (lVar4 == 0) goto code_r0x000180680296;
        lVar4 = func_0x00018170d270(lVar4,0);
      }
    }
    lVar5 = func_0x000180314710(TI_char__,1);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) {
code_r0x00018068029c:
        FUN_1803155c0();
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return uVar7;
      }
      *(undefined2 *)(lVar5 + 0x20) = 0x20;
      if ((lVar4 != 0) && (lVar4 = System_String__Split(lVar4,lVar5,2,1,0), lVar4 != 0)) {
        if (*(longlong *)(lVar4 + 0x18) == 0) {
          return 0;
        }
        if (*(int *)(TI_NpcHtmlWindow + 0xe4) == 0) {
          func_0x000180315660(TI_NpcHtmlWindow);
        }
        if (*(int *)(lVar4 + 0x18) == 0) goto code_r0x00018068029c;
        if (*(longlong *)(lVar4 + 0x20) != 0) {
          uVar7 = *(undefined8 *)(*(longlong *)(TI_NpcHtmlWindow + 0xb8) + 8);
          uVar6 = System_String__ToLowerInvariant(*(longlong *)(lVar4 + 0x20),0);
          iVar3 = FUN_1809e1cf0(uVar7,uVar6,MR_System.Array.IndexOf<string>);
          if (iVar3 < 0) {
            return 0;
          }
          if (*(int *)(lVar4 + 0x18) == 0) goto code_r0x00018068029c;
          if ((*(longlong *)(lVar4 + 0x20) != 0) &&
             (lVar5 = func_0x00018170c060(*(longlong *)(lVar4 + 0x20),6,0), lVar5 != 0)) {
            lVar5 = System_String__Replace(lVar5,0x5f,0x20,0);
            if (1 < (int)*(uint *)(lVar4 + 0x18)) {
              if (*(uint *)(lVar4 + 0x18) < 2) goto code_r0x00018068029c;
              if (*(longlong *)(lVar4 + 0x28) == 0) goto code_r0x000180680296;
              uVar7 = func_0x00018170d270(*(longlong *)(lVar4 + 0x28),0);
              lVar5 = System_String__Concat(lVar5,LIT_"' '",uVar7,0);
            }
            *param_2 = lVar5;
            func_0x000180314690(param_2,lVar5);
            return 1;
          }
        }
      }
    }
  }
code_r0x000180680296:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar7 = (*pcVar1)();
  return uVar7;
}

