// ChatWindow__IndiceTell__1805c7370 @ 0x1805c7370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong ChatWindow__IndiceTell__1805c7370(undefined8 param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if (cRam00000001834b3ad6 == '\0') {
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Item);
    cRam00000001834b3ad6 = '\x01';
  }
  cVar3 = func_0x000181707e50(param_1,0);
  if (cVar3 != '\0') {
    return 0xffffffff;
  }
  uVar6 = 0;
  while( true ) {
    if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
      func_0x000180315660(TI_ChatWindow);
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x10);
    if (lVar1 == 0) break;
    if (*(int *)(lVar1 + 0x18) <= (int)uVar6) {
      return 0xffffffff;
    }
    if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
      func_0x000180315660(TI_ChatWindow);
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x10);
    if (lVar1 == 0) break;
    uVar4 = FUN_180bbafe0(lVar1,uVar6,MR_System.Collections.Generic.List<string>.get_Item);
    cVar3 = System_String__Equals(uVar4,param_1,5,0);
    if (cVar3 != '\0') {
      return (ulonglong)uVar6;
    }
    uVar6 = uVar6 + 1;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return uVar5;
}

