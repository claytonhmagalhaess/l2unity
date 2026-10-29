// ChatWindow__OuveTexto__1805cc200 @ 0x1805cc200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__OuveTexto__1805cc200(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b3ace == '\0') {
    FUN_180315380(TI_System.Action<char>);
    FUN_180315380(MD_ChatWindow.TextoDigitado);
    cRam00000001834b3ace = '\x01';
  }
  if (DAT_1834b32c2 == '\0') {
    FUN_180315380(TI_UnityEngine.InputSystem.Keyboard);
    DAT_1834b32c2 = '\x01';
  }
  lVar1 = **(longlong **)(TI_UnityEngine.InputSystem.Keyboard + 0xb8);
  if (lVar1 != *(longlong *)(param_1 + 0x138)) {
    if (*(longlong *)(param_1 + 0x138) != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x138);
      uVar3 = func_0x000180315580(TI_System.Action<char>);
      FUN_180b7dd60(uVar3,param_1,MD_ChatWindow.TextoDigitado,0);
      UnityEngine_InputSystem_Keyboard__remove_onTextInput(uVar2,uVar3,0);
    }
    *(longlong *)(param_1 + 0x138) = lVar1;
    func_0x000180314690(param_1 + 0x138,lVar1);
    if (*(longlong *)(param_1 + 0x138) != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x138);
      uVar3 = func_0x000180315580(TI_System.Action<char>);
      FUN_180b7dd60(uVar3,param_1,MD_ChatWindow.TextoDigitado,0);
      UnityEngine_InputSystem_Keyboard__add_onTextInput(uVar2,uVar3,0);
    }
  }
  return;
}

