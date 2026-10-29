// SparkRadarWindow__Zoom__1806eb3c0 @ 0x1806eb3c0

void SparkRadarWindow__Zoom__1806eb3c0(longlong param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  if (cRam00000001834b4093 == '\0') {
    FUN_180315380(TI_SparkRadarWindow);
    FUN_180315380(LIT_"'spark.radar.zoom'");
    cRam00000001834b4093 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x8c);
  if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
    func_0x000180315660(TI_SparkRadarWindow);
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkRadarWindow + 0xb8) + 8);
  if (lVar1 != 0) {
    iVar3 = iVar3 + param_2;
    if (((iVar3 < 0) || (iVar4 = *(int *)(lVar1 + 0x18) + -1, iVar3 <= iVar4)) &&
       (iVar4 = iVar3, iVar3 < 0)) {
      iVar4 = 0;
    }
    if (iVar4 != *(int *)(param_1 + 0x8c)) {
      *(int *)(param_1 + 0x8c) = iVar4;
      UnityEngine_PlayerPrefs__SetInt(LIT_"'spark.radar.zoom'",iVar4,0);
      *(undefined8 *)(param_1 + 0x150) = 0;
    }
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

