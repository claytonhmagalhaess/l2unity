// SparkRadarWindow__UsaPlanta__1806eb320 @ 0x1806eb320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool SparkRadarWindow__UsaPlanta__1806eb320
               (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b40a2 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b40a2 = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Inequality(param_2,0,0);
  if (cVar3 == '\0') {
    return false;
  }
  lVar1 = *(longlong *)(param_1 + 0x1e0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834c131e == '\0') {
    FUN_180315380(TI_UnityEngine.Object,lVar1,0,param_4,unaff_RDI);
    DAT_1834c131e = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660(TI_UnityEngine.Object);
  }
  if (DAT_1834c12f9 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    DAT_1834c12f9 = '\x01';
  }
  if (lVar1 == 0 && param_2 == 0) {
    return true;
  }
  if (lVar1 != 0) {
    if (param_2 != 0) {
      return param_2 == lVar1;
    }
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660(TI_UnityEngine.Object);
    }
    return *(longlong *)(lVar1 + 0x10) == 0;
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660(TI_UnityEngine.Object);
  }
  if (param_2 != 0) {
    return *(longlong *)(param_2 + 0x10) == 0;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

