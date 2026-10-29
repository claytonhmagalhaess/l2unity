// ChatWindow__CloseChat__1805c6330 @ 0x1805c6330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__CloseChat__1805c6330(longlong param_1,char param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (cRam00000001834b3ae0 == '\0') {
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<string>.RemoveAt);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(MR_UnityEngine.UIElements.TextInputBaseField<string>.get_text);
    FUN_180315380(LIT_"''");
    cRam00000001834b3ae0 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
  if (DAT_1834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  if (**(longlong **)(TI_L2GameUI + 0xb8) != 0) {
    L2UI__BlurFocus__180799070(**(longlong **)(TI_L2GameUI + 0xb8),0);
    if (param_2 == '\0') {
      return;
    }
    if ((*(longlong *)(param_1 + 0x108) != 0) &&
       (lVar4 = FUN_180f02db0(*(longlong *)(param_1 + 0x108),MR_UnityEngine.UIElements.TextInputBaseField<string>.get_text), lVar4 != 0)) {
      if (*(int *)(lVar4 + 0x10) == 0) {
        return;
      }
      if (*(longlong *)(param_1 + 0x108) != 0) {
        uVar5 = FUN_180f02db0(*(longlong *)(param_1 + 0x108),MR_UnityEngine.UIElements.TextInputBaseField<string>.get_text);
        ChatWindow__SendChatMessage__1805ce520(param_1,uVar5,0);
        if (*(longlong *)(param_1 + 0x108) != 0) {
          lVar4 = *(longlong *)(param_1 + 0x90);
          uVar5 = FUN_180f02db0(*(longlong *)(param_1 + 0x108),MR_UnityEngine.UIElements.TextInputBaseField<string>.get_text);
          if (lVar4 != 0) {
            FUN_180002eb0(lVar4,uVar5,MR_System.Collections.Generic.List<string>.Add);
            if (*(longlong *)(param_1 + 0x90) != 0) {
              iVar1 = *(int *)(*(longlong *)(param_1 + 0x90) + 0x18);
              if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
                func_0x000180315660(TI_ChatWindow);
              }
              if (**(int **)(TI_ChatWindow + 0xb8) < iVar1) {
                if (*(longlong *)(param_1 + 0x90) == 0) goto code_r0x0001805c6516;
                FUN_18164e790(*(longlong *)(param_1 + 0x90),0,MR_System.Collections.Generic.List<string>.RemoveAt);
              }
              if (*(longlong *)(param_1 + 0x90) != 0) {
                plVar2 = *(longlong **)(param_1 + 0x108);
                *(undefined4 *)(param_1 + 0x98) =
                     *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x18);
                if (plVar2 != (longlong *)0x0) {
                  (**(code **)(*plVar2 + 0xa88))
                            (plVar2,LIT_"''",*(undefined8 *)(*plVar2 + 0xa90));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x0001805c6516:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

