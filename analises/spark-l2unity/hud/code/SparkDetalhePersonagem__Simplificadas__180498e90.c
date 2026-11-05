// SparkDetalhePersonagem__Simplificadas__180498e90 @ 0x180498e90

undefined8 SparkDetalhePersonagem__Simplificadas__180498e90(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uStackX_8;
  
  if (cRam00000001834b3278 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.Mesh,UnityEngine.Mesh__>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.HashSet<UnityEngine.Mesh>.Add);
    FUN_180315380(MR_System.Collections.Generic.Queue<UnityEngine.Mesh>.Enqueue);
    cRam00000001834b3278 = '\x01';
  }
  uStackX_8 = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    cVar2 = FUN_1812698d0(*(longlong *)(param_1 + 0x68),param_2,&uStackX_8,MR_System.Collections.Generic.Dictionary<UnityEngine.Mesh,UnityEngine.Mesh__>.TryGetValue);
    if (cVar2 != '\0') {
      return uStackX_8;
    }
    if (*(longlong *)(param_1 + 0x78) != 0) {
      cVar2 = func_0x0001814ce980(*(longlong *)(param_1 + 0x78),param_2,MR_System.Collections.Generic.HashSet<UnityEngine.Mesh>.Add);
      if (cVar2 != '\0') {
        if (*(longlong *)(param_1 + 0x70) == 0) goto code_r0x000180498f4f;
        FUN_180d5c1b0(*(longlong *)(param_1 + 0x70),param_2,MR_System.Collections.Generic.Queue<UnityEngine.Mesh>.Enqueue);
      }
      return 0;
    }
  }
code_r0x000180498f4f:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

