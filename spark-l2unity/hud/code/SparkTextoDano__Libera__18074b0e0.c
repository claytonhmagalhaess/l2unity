// SparkTextoDano__Libera__18074b0e0 @ 0x18074b0e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTextoDano__Libera__18074b0e0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (cRam00000001834b42b5 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,int>.Remove);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkTextoDano);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b42b5 = '\x01';
  }
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    func_0x000180314690(param_1 + 0x28,0);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x10),0);
      uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar3 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
        uVar6 = 0;
        lVar3 = TI_SparkTextoDano;
        do {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            func_0x000180315660(lVar3);
            lVar3 = TI_SparkTextoDano;
          }
          lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0xb8) + 0x110);
          if (lVar1 == 0) goto code_r0x00018074b280;
          uVar5 = (uint)uVar6;
          if (*(uint *)(lVar1 + 0x18) <= uVar5) {
code_r0x00018074b286:
            FUN_1803155c0();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar1 = *(longlong *)(lVar1 + 0x20 + uVar6 * 8);
          if (lVar1 == 0) goto code_r0x00018074b280;
          if (*(char *)(lVar1 + 0x58) != '\0') {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              func_0x000180315660(lVar3);
              lVar3 = TI_SparkTextoDano;
            }
            lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0xb8) + 0x110);
            if (lVar1 == 0) goto code_r0x00018074b280;
            if (*(uint *)(lVar1 + 0x18) <= uVar5) goto code_r0x00018074b286;
            lVar1 = *(longlong *)(lVar1 + 0x20 + uVar6 * 8);
            if (lVar1 == 0) goto code_r0x00018074b280;
            if (*(int *)(lVar1 + 0x30) == *(int *)(param_1 + 0x30)) {
              return;
            }
          }
          uVar6 = (ulonglong)(uVar5 + 1);
        } while ((int)(uVar5 + 1) < 0x30);
        if (*(int *)(lVar3 + 0xe4) == 0) {
          func_0x000180315660(lVar3);
          lVar3 = TI_SparkTextoDano;
        }
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0xb8) + 0x118);
        if (lVar3 != 0) {
          FUN_1811eaab0(lVar3,*(undefined4 *)(param_1 + 0x30),MR_System.Collections.Generic.Dictionary<int,int>.Remove);
          return;
        }
      }
    }
  }
code_r0x00018074b280:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

