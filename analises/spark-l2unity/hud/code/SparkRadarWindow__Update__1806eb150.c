// SparkRadarWindow__Update__1806eb150 @ 0x1806eb150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow__Update__1806eb150(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if (cRam00000001834b4094 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkDesempenho);
    cRam00000001834b4094 = '\x01';
  }
  if ((*(char *)(param_1 + 0x88) != '\0') && (*(char *)(param_1 + 0x38) == '\0')) {
    if (DAT_1834b31c0 == '\0') {
      FUN_180315380(TI_L2GameUI);
      DAT_1834b31c0 = '\x01';
    }
    uVar2 = **(undefined8 **)(TI_L2GameUI + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    if (cVar4 != '\0') {
      if (DAT_1834b31c0 == '\0') {
        FUN_180315380(TI_L2GameUI);
        DAT_1834b31c0 = '\x01';
      }
      if (**(longlong **)(TI_L2GameUI + 0xb8) == 0) {
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(char *)(**(longlong **)(TI_L2GameUI + 0xb8) + 0x89) != '\0') {
        return;
      }
    }
    if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
      func_0x000180315660();
    }
    puVar5 = (undefined8 *)SparkDesempenho__PosicaoDoJogador(&uStack_38,0);
    uVar2 = *puVar5;
    uVar1 = *(undefined4 *)(puVar5 + 1);
    fVar6 = (float)FUN_1824366b0(0);
    if (*(float *)(param_1 + 0x150) <= fVar6) {
      *(float *)(param_1 + 0x150) = fVar6 + 0.2;
      uStack_38 = uVar2;
      uStack_30 = uVar1;
      SparkRadarWindow__Busca__1806e59c0(param_1,&uStack_38,0);
      uStack_38 = uVar2;
      uStack_30 = uVar1;
      SparkRadarWindow__ConferePlanta__1806e67a0(param_1,&uStack_38,0);
    }
    if (*(float *)(param_1 + 0x154) <= fVar6) {
      *(float *)(param_1 + 0x154) = fVar6 + 0.1;
      uStack_38 = uVar2;
      uStack_30 = uVar1;
      SparkRadarWindow__Desenha__1806e7e80(param_1,&uStack_38,0);
    }
    else {
      uStack_38 = uVar2;
      uStack_30 = uVar1;
      SparkRadarWindow__Desliza__1806e8b30();
    }
    SparkRadarWindow__Gira__1806e9000(param_1,0);
  }
  return;
}

