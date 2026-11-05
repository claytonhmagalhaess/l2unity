// OptionsWindow__OnDestroy__180699320 @ 0x180699320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow__OnDestroy__180699320(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (cRam00000001834b3e77 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkChatFiltro);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3e77 = '\x01';
  }
  if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
    func_0x000180315660(TI_OptionsWindow);
  }
  uVar1 = **(undefined8 **)(TI_OptionsWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar1,param_1,0);
  if (cVar2 != '\0') {
    if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
      func_0x000180315660(TI_OptionsWindow);
    }
    **(undefined8 **)(TI_OptionsWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_OptionsWindow + 0xb8),0);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkChatFiltro__remove_Mudou(uVar1,0);
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkOpcoes__remove_CeuMudou(uVar1,0);
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0xa8);
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      SparkOpcoes__remove_ClimaMudou(uVar1,0);
    }
  }
  return;
}

