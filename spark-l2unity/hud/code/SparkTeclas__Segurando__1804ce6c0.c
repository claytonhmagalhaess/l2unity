// SparkTeclas__Segurando__1804ce6c0 @ 0x1804ce6c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool SparkTeclas__Segurando__1804ce6c0(undefined8 param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (DAT_1834b32ef == '\0') {
    FUN_180315380(TI_SparkTeclas);
    DAT_1834b32ef = '\x01';
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar3 = SparkTeclas__get_Nosso(0);
  if (lVar3 == 0) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return (bool)uVar2;
  }
  lVar3 = UnityEngine_InputSystem_InputActionMap__FindAction(lVar3,param_1,0,0);
  if (lVar3 == 0) {
    return false;
  }
  lVar4 = UnityEngine_InputSystem_InputAction__GetOrCreateActionMap(lVar3,0);
  if (lVar4 != 0) {
    if (*(longlong *)(lVar4 + 0x60) == 0) {
      return false;
    }
    lVar4 = func_0x00018051c7e0(*(longlong *)(lVar4 + 0x60),0);
    return (*(byte *)((longlong)*(int *)(lVar3 + 0xc0) * 0x44 + lVar4 + 1) & 0x40) != 0;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return (bool)uVar2;
}

