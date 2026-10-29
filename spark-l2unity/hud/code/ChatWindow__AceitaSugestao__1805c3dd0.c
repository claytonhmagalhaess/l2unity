// ChatWindow__AceitaSugestao__1805c3dd0 @ 0x1805c3dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ChatWindow__AceitaSugestao__1805c3dd0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (cRam00000001834b3adb == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Item);
    cRam00000001834b3adb = '\x01';
  }
  if (*(char *)(param_1 + 0x9c) != '\0') {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    if (lVar2 == 0) {
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      uVar4 = (*pcVar3)();
      return uVar4;
    }
    if (*(int *)(lVar2 + 0x18) != 0) {
      iVar1 = *(int *)(param_1 + 0xa8);
      if (((iVar1 < 0) || (iVar5 = *(int *)(lVar2 + 0x18) + -1, iVar1 <= iVar5)) &&
         (iVar5 = iVar1, iVar1 < 0)) {
        iVar5 = 0;
      }
      uVar4 = FUN_180bbafe0(*(undefined8 *)(param_1 + 0xa0),iVar5,MR_System.Collections.Generic.List<string>.get_Item);
      ChatWindow__PoeTell__1805cd2a0(param_1,uVar4,0);
      return 1;
    }
  }
  return 0;
}

