// SparkDetalhePersonagem__get_LodsProntos__180499ce0 @ 0x180499ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkDetalhePersonagem__get_LodsProntos__180499ce0(void)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  ulonglong uVar5;
  
  if (cRam00000001834b3271 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.Mesh,UnityEngine.Mesh__>.get_Count);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkDetalhePersonagem);
    cRam00000001834b3271 = '\x01';
  }
  if (*(int *)(TI_SparkDetalhePersonagem + 0xe4) == 0) {
    func_0x000180315660(TI_SparkDetalhePersonagem);
  }
  uVar1 = **(undefined8 **)(TI_SparkDetalhePersonagem + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if (cVar4 != '\0') {
    if (*(int *)(TI_SparkDetalhePersonagem + 0xe4) == 0) {
      func_0x000180315660(TI_SparkDetalhePersonagem);
    }
    if ((**(longlong **)(TI_SparkDetalhePersonagem + 0xb8) != 0) &&
       (lVar2 = *(longlong *)(**(longlong **)(TI_SparkDetalhePersonagem + 0xb8) + 0x68), lVar2 != 0)) {
      return (ulonglong)(uint)(*(int *)(lVar2 + 0x20) - *(int *)(lVar2 + 0x28));
    }
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  return 0;
}

