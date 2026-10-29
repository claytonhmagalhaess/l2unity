// SparkDetalhePersonagem__get_LodsNaFila__180499bf0 @ 0x180499bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkDetalhePersonagem__get_LodsNaFila__180499bf0(void)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  ulonglong uVar5;
  
  if (cRam00000001834b3272 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkDetalhePersonagem.Trabalho>.get_Count);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_System.Collections.Generic.Queue<UnityEngine.Mesh>.get_Count);
    FUN_180315380(TI_SparkDetalhePersonagem);
    cRam00000001834b3272 = '\x01';
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
      func_0x000180315660();
    }
    lVar2 = **(longlong **)(TI_SparkDetalhePersonagem + 0xb8);
    if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x70) != 0)) && (*(longlong *)(lVar2 + 0x80) != 0))
    {
      return (ulonglong)
             (uint)(*(int *)(*(longlong *)(lVar2 + 0x80) + 0x18) +
                   *(int *)(*(longlong *)(lVar2 + 0x70) + 0x20));
    }
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  return 0;
}

