// SparkMapaWindow__RadarUsaPlanta__1806460d0 @ 0x1806460d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool SparkMapaWindow__RadarUsaPlanta__1806460d0
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b3d15 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkRadarWindow);
    cRam00000001834b3d15 = '\x01';
  }
  if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3d5a == '\0') {
    FUN_180315380(TI_SparkRadarWindow);
    cRam00000001834b3d5a = '\x01';
  }
  if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = **(undefined8 **)(TI_SparkRadarWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if (cVar4 == '\0') {
    return false;
  }
  if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3d5a == '\0') {
    FUN_180315380(TI_SparkRadarWindow);
    cRam00000001834b3d5a = '\x01';
  }
  if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar2 = **(longlong **)(TI_SparkRadarWindow + 0xb8);
  if (lVar2 == 0) {
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (cRam00000001834b40a2 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b40a2 = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(param_1,0,0,param_4,unaff_RDI);
  if (cVar4 == '\0') {
    return false;
  }
  lVar2 = *(longlong *)(lVar2 + 0x1e0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834c131e == '\0') {
    FUN_180315380(TI_UnityEngine.Object,lVar2,0,param_4,unaff_RDI);
    DAT_1834c131e = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660(TI_UnityEngine.Object);
  }
  if (DAT_1834c12f9 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    DAT_1834c12f9 = '\x01';
  }
  if (lVar2 == 0 && param_1 == 0) {
    return true;
  }
  if (lVar2 != 0) {
    if (param_1 != 0) {
      return param_1 == lVar2;
    }
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660(TI_UnityEngine.Object);
    }
    return *(longlong *)(lVar2 + 0x10) == 0;
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660(TI_UnityEngine.Object);
  }
  if (param_1 != 0) {
    return *(longlong *)(param_1 + 0x10) == 0;
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

