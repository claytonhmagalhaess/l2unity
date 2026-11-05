// OptionsWindow__Confirma__180691e10 @ 0x180691e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow__Confirma__180691e10(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  
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
  uVar1 = **(undefined8 **)(TI_L2ConfirmWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if (cVar4 == '\0') {
    if (param_2 == 0) {
code_r0x000180691fe6:
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)(param_2 + 0x18))(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x28));
  }
  else {
    if (cRam00000001834b30fd == '\0') {
      FUN_180315380(TI_L2ConfirmWindow);
      cRam00000001834b30fd = '\x01';
    }
    lVar2 = **(longlong **)(TI_L2ConfirmWindow + 0xb8);
    if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar5 = *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 1000);
    if (lVar5 == 0) {
      if (*(int *)(TI_OptionsWindow.<>c + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar1 = **(undefined8 **)(TI_OptionsWindow.<>c + 0xb8);
      lVar5 = func_0x000180315580(TI_System.Action);
      FUN_1816a9c60(lVar5,uVar1,MD_OptionsWindow.__c._Confirma_b__71_0,0);
      *(longlong *)(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 1000) = lVar5;
      func_0x000180314690(*(longlong *)(TI_OptionsWindow.<>c + 0xb8) + 1000,lVar5);
    }
    if (lVar2 == 0) goto code_r0x000180691fe6;
    L2ConfirmWindow__ShowWindow(lVar2,param_1,param_2,lVar5,0);
  }
  return;
}

