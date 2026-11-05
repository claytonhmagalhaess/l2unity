// NameplatesManagerBase__RemoveNameplate__180679590 @ 0x180679590

void NameplatesManagerBase__RemoveNameplate__180679590(longlong param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lStackX_8;
  
  if (cRam00000001834b3e21 == '\0') {
    FUN_180315380(MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.TryRemove);
    cRam00000001834b3e21 = '\x01';
  }
  lStackX_8 = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    cVar2 = FUN_18113e700(*(longlong *)(param_1 + 0x30),param_2,&lStackX_8,MR_System.Collections.Concurrent.ConcurrentDictionary<int,Nameplate>.TryRemove);
    if (cVar2 != '\0') {
      if ((lStackX_8 == 0) || (*(longlong *)(param_1 + 0x48) == 0)) goto code_r0x00018067960e;
      UnityEngine_UIElements_VisualElement__Remove
                (*(longlong *)(param_1 + 0x48),*(undefined8 *)(lStackX_8 + 0x10),0);
    }
    return;
  }
code_r0x00018067960e:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

