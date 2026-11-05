// SparkDetalhePersonagem__GeraLods__1804973a0 @ 0x1804973a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkDetalhePersonagem__GeraLods__1804973a0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  double dVar3;
  undefined8 auStackX_8 [4];
  
  if (cRam00000001834b327a == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkDetalhePersonagem.Trabalho>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.Queue<UnityEngine.Mesh>.get_Count);
    FUN_180315380(TI_System.TimeSpan);
    cRam00000001834b327a = '\x01';
  }
  auStackX_8[0] = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x18) == 0) {
      if (*(longlong *)(param_1 + 0x70) == 0) goto code_r0x000180497488;
      if (*(int *)(*(longlong *)(param_1 + 0x70) + 0x20) == 0) {
        return;
      }
    }
    if (*(longlong *)(param_1 + 0x88) != 0) {
      System_Diagnostics_Stopwatch__Restart(*(longlong *)(param_1 + 0x88),0);
      while( true ) {
        cVar2 = SparkDetalhePersonagem__Passo__1804983a0(param_1,0);
        if (cVar2 == '\0') {
          return;
        }
        if (*(longlong *)(param_1 + 0x88) == 0) break;
        auStackX_8[0] = System_Diagnostics_Stopwatch__get_Elapsed();
        if (*(int *)(TI_System.TimeSpan + 0xe4) == 0) {
          func_0x000180315660();
        }
        dVar3 = (double)func_0x0001818c1950(auStackX_8);
        if (1.0 <= dVar3) {
          return;
        }
      }
    }
  }
code_r0x000180497488:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

