// OptionsWindow__AplicaEReinicia__18068aac0 @ 0x18068aac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow__AplicaEReinicia__18068aac0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (cRam00000001834b3e7e == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.Application);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(MD_OptionsWindow.__c._AplicaEReinicia_b__32_0);
    FUN_180315380(TI_OptionsWindow.<>c);
    FUN_180315380(LIT_"'The game will restart and disconnect. Continue?'");
    cRam00000001834b3e7e = '\x01';
  }
  if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar6 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x10);
  if (lVar6 == 0) {
    if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar1 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
    lVar6 = func_0x000180315580(TI_System.Action);
    FUN_1816a9c60(lVar6,uVar1,MD_OptionsWindow.__c._AplicaEReinicia_b__32_0,0);
    *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x10) = lVar6;
    func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 0x10,lVar6);
  }
  if (*(char *)(param_1 + 0x88) == '\0') {
    if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar5 = func_0x000180a870f0(0);
    if (cVar5 == '\0') {
      if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar1 = LIT_"'The game will restart and disconnect. Continue?'";
      if (cRam00000001834b3ea2 == '\0') {
        FUN_180315380(TI_System.Action);
        FUN_180315380(TI_UnityEngine.Object);
        FUN_180315380(MD_OptionsWindow.__c._Confirma_b__71_0);
        FUN_180315380(TI_OptionsWindow.<>c);
        cRam00000001834b3ea2 = '\x01';
      }
      if (cRam00000001834b30fd == '\0') {
        FUN_180315380(TI_L2ConfirmWindow);
        cRam00000001834b30fd = '\x01';
      }
      uVar2 = **(undefined8 **)(TI_L2ConfirmWindow + 0xb8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar5 = UnityEngine_Object__op_Inequality(uVar2,0,0);
      if (cVar5 == '\0') {
        if (lVar6 == 0) {
code_r0x000180691fe6:
          FUN_1803155d0();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
      }
      else {
        if (cRam00000001834b30fd == '\0') {
          FUN_180315380(TI_L2ConfirmWindow);
          cRam00000001834b30fd = '\x01';
        }
        lVar3 = **(longlong **)(TI_L2ConfirmWindow + 0xb8);
        if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar7 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 1000);
        if (lVar7 == 0) {
          if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar2 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
          lVar7 = func_0x000180315580(TI_System.Action);
          FUN_1816a9c60(lVar7,uVar2,MD_OptionsWindow.__c._Confirma_b__71_0,0);
          *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 1000) = lVar7;
          func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 1000,lVar7);
        }
        if (lVar3 == 0) goto code_r0x000180691fe6;
        L2ConfirmWindow__ShowWindow(lVar3,uVar1,lVar6,lVar7,0);
      }
      return;
    }
  }
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018068ac3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
    return;
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

