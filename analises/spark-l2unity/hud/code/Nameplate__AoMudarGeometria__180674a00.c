// Nameplate__AoMudarGeometria__180674a00 @ 0x180674a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Nameplate__AoMudarGeometria__180674a00(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (cRam00000001834b3dff == '\0') {
    FUN_180315380(TI_UnityEngine.Rect);
    cRam00000001834b3dff = '\x01';
  }
  if (param_2 != 0) {
    fVar1 = *(float *)(param_2 + 0x80);
    if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
      func_0x000180315660();
    }
    if ((0.0 < fVar1) && ((*(uint *)(param_1 + 0x80) & 0x7fffffff) < 0x7f800001)) {
      fVar2 = *(float *)(param_2 + 0x84);
      *(float *)(param_1 + 0x94) = fVar1;
      if (0.0 < fVar2) {
        *(float *)(param_1 + 0x98) = fVar2;
      }
      uVar4 = FUN_180006040(*(float *)(param_1 + 0x80) - fVar1 * 0.5);
      uVar5 = FUN_180006040(*(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x98));
      Nameplate__Posiciona__180677eb0(param_1,uVar4,uVar5,0);
    }
    return;
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

