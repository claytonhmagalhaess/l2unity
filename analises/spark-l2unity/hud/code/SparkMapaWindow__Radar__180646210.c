// SparkMapaWindow__Radar__180646210 @ 0x180646210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__Radar__180646210(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_48;
  float fStack_40;
  
  if (cRam00000001834b3d30 == '\0') {
    FUN_180315380(TI_SparkQuests);
    cRam00000001834b3d30 = '\x01';
  }
  if (param_2 != 0) {
    fVar5 = (float)*(int *)(param_2 + 0x18);
    fVar6 = (float)*(int *)(param_2 + 0x1c);
    fVar7 = (float)*(int *)(param_2 + 0x20);
    if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
      func_0x000180315660();
    }
    uStack_48 = CONCAT44(fVar6,fVar5);
    fStack_40 = fVar7;
    cVar4 = SparkQuests__RadarEm(&uStack_48,0);
    if (cVar4 == '\0') {
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
        func_0x000180315660();
      }
      uStack_48 = CONCAT44(fVar6,fVar5);
      fStack_40 = fVar7;
      SparkQuests__MostraRadar__1804c6a60(uVar2,&uStack_48,0);
      uStack_48 = CONCAT44(fVar6,fVar5);
      fStack_40 = fVar7;
      SparkMapaWindow__Centra__180639b70(param_1,&uStack_48,0,0);
    }
    else {
      if (DAT_1834b2e67 == '\0') {
        FUN_180315380(TI_UnityEngine.Vector3);
        DAT_1834b2e67 = '\x01';
      }
      uVar2 = **(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8);
      uVar1 = *(undefined4 *)(*(undefined8 **)(TI_UnityEngine.Vector3 + 0xb8) + 1);
      if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
        func_0x000180315660();
      }
      uStack_48 = uVar2;
      fStack_40 = (float)uVar1;
      SparkQuests__MostraRadar__1804c6a60(0,&uStack_48,0);
    }
    return;
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

