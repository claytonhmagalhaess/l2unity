// L2Window__ContemPonto__1807996b0 @ 0x1807996b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 L2Window__ContemPonto__1807996b0(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (cRam00000001834b448c == '\0') {
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b448c = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x30) != 0) && (*(char *)(param_1 + 0x38) == '\0')) {
    puVar1 = (undefined4 *)
             UnityEngine_UIElements_VisualElement__get_worldBound
                       (&uStack_28,*(undefined8 *)(param_1 + 0x30),0);
    uStack_28 = *puVar1;
    uStack_24 = puVar1[1];
    uStack_20 = puVar1[2];
    uStack_1c = puVar1[3];
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar2 = FUN_1806373a0(&uStack_28,param_2,0);
    return uVar2;
  }
  return 0;
}

