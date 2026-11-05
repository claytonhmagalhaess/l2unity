// AbstractEffectWindow__CleanupAllToggleEffects__1805bd7a0 @ 0x1805bd7a0

void AbstractEffectWindow__CleanupAllToggleEffects__1805bd7a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  
  if (cRam00000001834b3a7e == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<BuffSlot>.RemoveAt);
    FUN_180315380(MR_System.Collections.Generic.List<BuffSlot>.get_Count);
    cRam00000001834b3a7e = '\x01';
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 200) + 0x18);
    while( true ) {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return;
      }
      lVar2 = *(longlong *)(param_1 + 0xa8);
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) < 3) {
        FUN_1803155c0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)(lVar2 + 0x30) == 0) break;
      UnityEngine_UIElements_VisualElement__RemoveAt(*(longlong *)(lVar2 + 0x30),iVar1,0);
      if (*(longlong *)(param_1 + 200) == 0) break;
      FUN_18164e790(*(longlong *)(param_1 + 200),iVar1);
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

