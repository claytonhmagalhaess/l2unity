// SparkTeclas__Apertou__1804ca540 @ 0x1804ca540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkTeclas__Apertou__1804ca540(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (DAT_1834b32ed == '\0') {
    FUN_180315380(TI_SparkTeclas);
    DAT_1834b32ed = '\x01';
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar3 = SparkTeclas__get_Nosso(0);
  if (lVar3 == 0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  lVar3 = UnityEngine_InputSystem_InputActionMap__FindAction(lVar3,param_1,0,0);
  if (lVar3 == 0) {
    return 0;
  }
  if (DAT_1834bc45d == '\0') {
    FUN_180315380(TI_UnityEngine.InputSystem.LowLevel.InputUpdate);
    DAT_1834bc45d = '\x01';
  }
  uVar4 = UnityEngine_InputSystem_InputAction__GetOrCreateActionMap(lVar3,0);
  if (uVar4 != 0) {
    if (*(longlong *)(uVar4 + 0x60) != 0) {
      lVar5 = func_0x00018051c7e0(*(longlong *)(uVar4 + 0x60),0);
      lVar5 = (longlong)*(int *)(lVar3 + 0xc0) * 0x44 + lVar5;
      uVar4 = func_0x000181ee7d20(lVar5,0);
      if ((char)uVar4 == '\0') {
        uVar1 = **(uint **)(TI_UnityEngine.InputSystem.LowLevel.InputUpdate + 0xb8);
        uVar4 = (ulonglong)uVar1;
        if (*(uint *)(lVar5 + 0x20) == uVar1) {
          return (ulonglong)CONCAT31((int3)(uVar1 >> 8),uVar1 != 0);
        }
      }
    }
    return uVar4 & 0xffffffffffffff00;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}

