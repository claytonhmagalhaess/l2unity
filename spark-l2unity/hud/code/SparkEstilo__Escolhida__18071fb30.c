// SparkEstilo__Escolhida__18071fb30 @ 0x18071fb30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkEstilo__Escolhida__18071fb30(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (cRam00000001834b41fb == '\0') {
    FUN_180315380(LIT_"'spark-escolhida'");
    cRam00000001834b41fb = '\x01';
  }
  uVar4 = LIT_"'spark-escolhida'";
  if (param_1 == 0) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  if (DAT_1834c4699 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count,LIT_"'spark-escolhida'",0);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Item);
    DAT_1834c4699 = '\x01';
  }
  iVar5 = 0;
  lVar3 = *(longlong *)(param_1 + 0x40);
  while (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) <= iVar5) {
      return 0;
    }
    if ((*(longlong *)(param_1 + 0x40) == 0) ||
       (lVar3 = FUN_180bbafe0(*(longlong *)(param_1 + 0x40),iVar5,MR_System.Collections.Generic.List<string>.get_Item), lVar3 == 0))
    break;
    cVar2 = System_String__Equals(lVar3,uVar4,4,0);
    if (cVar2 != '\0') {
      return 1;
    }
    iVar5 = iVar5 + 1;
    lVar3 = *(longlong *)(param_1 + 0x40);
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

