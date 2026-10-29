// OptionsWindow__Linha__180696fc0 @ 0x180696fc0

longlong OptionsWindow__Linha__180696fc0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  
  if (cRam00000001834b3e97 == '\0') {
    FUN_180315380(TI_OptionsWindow);
    cRam00000001834b3e97 = '\x01';
  }
  if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar2 = OptionsWindow__LinhaSimples__180696c40(param_1,0);
  if (lVar2 != 0) {
    UnityEngine_UIElements_VisualElement__Add(lVar2,param_2,0);
    return lVar2;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  lVar2 = (*pcVar1)();
  return lVar2;
}

