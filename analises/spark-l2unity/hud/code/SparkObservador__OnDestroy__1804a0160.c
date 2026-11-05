// SparkObservador__OnDestroy__1804a0160 @ 0x1804a0160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkObservador__OnDestroy__1804a0160(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b323f == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkObservador);
    cRam00000001834b323f = '\x01';
  }
  if (*(int *)(TI_SparkObservador + 0xe4) == 0) {
    func_0x000180315660(TI_SparkObservador);
  }
  uVar3 = **(undefined8 **)(TI_SparkObservador + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(uVar3,param_1,0);
  if (cVar2 == '\0') {
    if (*(int *)(TI_SparkObservador + 0xe4) == 0) {
      func_0x000180315660(TI_SparkObservador);
    }
    **(undefined8 **)(TI_SparkObservador + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_SparkObservador + 0xb8),0);
    *(undefined1 *)(*(longlong *)(TI_SparkObservador + 0xb8) + 0x20) = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if (cVar2 != '\0') {
      if (*(longlong *)(param_1 + 0x30) == 0) {
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = UnityEngine_Component__get_gameObject(*(longlong *)(param_1 + 0x30),0);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Object__Destroy(uVar3,0);
    }
  }
  return;
}

