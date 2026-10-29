// CameraController__SetMask__1805727b0 @ 0x1805727b0

void CameraController__SetMask__1805727b0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (cRam00000001834b38fc == '\0') {
    FUN_180315380(LIT_"'Brush'");
    cRam00000001834b38fc = '\x01';
  }
  *(undefined4 *)(param_1 + 0x40) = param_2;
  iVar1 = UnityEngine_LayerMask__NameToLayer(LIT_"'Brush'",0);
  uVar2 = func_0x000182427a70(param_2,0);
  if (iVar1 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1 << ((byte)iVar1 & 0x1f);
  }
  uVar3 = func_0x000182427a70(uVar2 | uVar4,0);
  *(undefined4 *)(param_1 + 0xa0) = uVar3;
  return;
}

