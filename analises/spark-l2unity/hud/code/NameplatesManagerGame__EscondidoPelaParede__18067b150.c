// NameplatesManagerGame__EscondidoPelaParede__18067b150 @ 0x18067b150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool NameplatesManagerGame__EscondidoPelaParede__18067b150
               (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 unaff_RDI;
  longlong lVar4;
  
  if (cRam00000001834b3e2e == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3e2e = '\x01';
  }
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x9c) == '\0') {
      return false;
    }
    if (cRam00000001834b31d1 == '\0') {
      FUN_180315380(TI_ClickManager);
      cRam00000001834b31d1 = '\x01';
    }
    if (**(longlong **)(TI_ClickManager + 0xb8) != 0) {
      lVar4 = *(longlong *)(**(longlong **)(TI_ClickManager + 0xb8) + 0x40);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(lVar4 + 0x38);
      }
      lVar1 = *(longlong *)(param_2 + 0x40);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (DAT_1834c131f == '\0') {
        FUN_180315380(TI_UnityEngine.Object,lVar1,0,param_4,unaff_RDI);
        DAT_1834c131f = '\x01';
      }
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660(TI_UnityEngine.Object);
      }
      if (DAT_1834c12f9 == '\0') {
        FUN_180315380(TI_UnityEngine.Object);
        DAT_1834c12f9 = '\x01';
      }
      if (lVar1 == 0 && lVar4 == 0) {
        return false;
      }
      if (lVar1 != 0) {
        if (lVar4 != 0) {
          return lVar4 != lVar1;
        }
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660(TI_UnityEngine.Object);
        }
        return *(longlong *)(lVar1 + 0x10) != 0;
      }
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660(TI_UnityEngine.Object);
      }
      if (lVar4 != 0) {
        return *(longlong *)(lVar4 + 0x10) != 0;
      }
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return (bool)uVar3;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return (bool)uVar3;
}

