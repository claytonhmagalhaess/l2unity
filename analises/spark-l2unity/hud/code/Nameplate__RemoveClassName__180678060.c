// Nameplate__RemoveClassName__180678060 @ 0x180678060

void Nameplate__RemoveClassName__180678060(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  
  if (param_2 != 0) {
    cVar2 = UnityEngine_UIElements_VisualElement__ClassListContains(param_2,param_3,0);
    if (cVar2 != '\0') {
      UnityEngine_UIElements_VisualElement__RemoveFromClassList(param_2,param_3,0);
    }
    return;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

