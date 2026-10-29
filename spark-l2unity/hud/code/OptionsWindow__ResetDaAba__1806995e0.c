// OptionsWindow__ResetDaAba__1806995e0 @ 0x1806995e0

void OptionsWindow__ResetDaAba__1806995e0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  longlong lStack_30;
  undefined8 uStack_28;
  undefined8 *puStack_20;
  longlong lStack_18;
  
  if (cRam00000001834b3e7f == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.GetEnumerator);
    FUN_180315380(MD_OptionsWindow._ResetDaAba_b__34_0);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkChatFiltro);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'Reset every key to the default?'");
    cRam00000001834b3e7f = '\x01';
  }
  uStack_28 = 0;
  puStack_20 = (undefined8 *)0x0;
  lStack_18 = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    UnityEngine_UIElements_VisualElement__RemoveFromHierarchy(*(undefined8 *)(param_1 + 0xd8),0);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    func_0x000180314690(param_1 + 0xd8,0);
  }
  switch(*(undefined4 *)(param_1 + 0x8c)) {
  case 0:
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkOpcoes__PadraoVideo(0);
    SparkOpcoes__AplicaEfeitos(0);
    break;
  case 1:
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkOpcoes__PadraoAudio(0);
    SparkOpcoes__AplicaAudio(0);
    break;
  case 2:
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkOpcoes__PadraoJogo(0);
    SparkOpcoes__SalvaJogo(0);
    break;
  case 3:
    uVar3 = func_0x000180315580(TI_System.Action);
    FUN_1816a9c60(uVar3,param_1,MD_OptionsWindow._ResetDaAba_b__34_0,0);
    if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    OptionsWindow__Confirma__180691e10(LIT_"'Reset every key to the default?'",uVar3,0);
    return;
  case 4:
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    *(undefined1 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xde) = 1;
    SparkOpcoes__SalvaJogo(0);
    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkChatFiltro__VoltaAoPadrao__1805d3cc0(0);
    break;
  case 5:
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkOpcoes__PadraoInterface(0);
    SparkOpcoes__AplicaInterface(0);
  }
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    FUN_1803155d0();
  }
  else {
    FUN_180bada40(&uStack_40,*(longlong *)(param_1 + 0xb0),MR_System.Collections.Generic.List<System.Action>.GetEnumerator);
    uStack_28 = uStack_40;
    puStack_20 = puStack_38;
    lStack_18 = lStack_30;
    uStack_40 = 0;
    puStack_38 = &uStack_28;
    while( true ) {
      cVar2 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<System.Action>.MoveNext);
      if (cVar2 == '\0') {
        func_0x0001803dadf0(&uStack_28,MR_System.Collections.Generic.List<System.Action>.Dispose);
        return;
      }
      if (lStack_18 == 0) break;
      (**(code **)(lStack_18 + 0x18))
                (*(undefined8 *)(lStack_18 + 0x40),*(undefined8 *)(lStack_18 + 0x28));
    }
  }
  FUN_1803155d0();
  FUN_180311490();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

