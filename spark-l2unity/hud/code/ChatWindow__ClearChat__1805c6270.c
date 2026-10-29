// ChatWindow__ClearChat__1805c6270 @ 0x1805c6270

void ChatWindow__ClearChat__1805c6270(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  
  if (cRam00000001834b3ae2 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<string,int>>.Clear);
    cRam00000001834b3ae2 = '\x01';
  }
  lVar2 = *(longlong *)(param_1 + 200);
  if (lVar2 != 0) {
    for (uVar4 = 0; (int)uVar4 < *(int *)(lVar2 + 0x18); uVar4 = uVar4 + 1) {
      if (*(uint *)(lVar2 + 0x18) <= uVar4) {
        FUN_1803155c0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)(lVar2 + 0x20 + (longlong)(int)uVar4 * 8) != 0) {
        UnityEngine_UIElements_VisualElement__Clear();
      }
    }
    if (*(longlong *)(param_1 + 0x100) != 0) {
      UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0x100),0);
    }
    lVar2 = *(longlong *)(param_1 + 0xd8);
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar2 + 0x18);
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      *(undefined4 *)(lVar2 + 0x18) = 0;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
      }
      return;
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

