// CursorManager__LateUpdate__1805b0b10 @ 0x1805b0b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CursorManager__LateUpdate__1805b0b10(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_18 [16];
  
  if (cRam00000001834b3a0a == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3a0a = '\x01';
  }
  if (DAT_1834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  uVar3 = **(undefined8 **)(TI_L2GameUI + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar5 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if (cVar5 == '\0') {
    if (DAT_1834b31c0 == '\0') {
      FUN_180315380(TI_L2GameUI);
      DAT_1834b31c0 = '\x01';
    }
    if (**(longlong **)(TI_L2GameUI + 0xb8) == 0) {
      FUN_1803155d0();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(char *)(**(longlong **)(TI_L2GameUI + 0xb8) + 0x89) != '\0') {
      pfVar6 = (float *)UnityEngine_Input__get_mousePosition(auStack_18,0);
      fVar1 = pfVar6[1];
      fVar2 = pfVar6[2];
      fVar8 = *pfVar6 - *(float *)(param_1 + 0x50);
      fVar9 = fVar1 - *(float *)(param_1 + 0x54);
      fVar7 = fVar2 - *(float *)(param_1 + 0x58);
      if (9.9999994e-11 <= fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7) {
        *(float *)(param_1 + 0x50) = *pfVar6;
        *(float *)(param_1 + 0x54) = fVar1;
        *(float *)(param_1 + 0x58) = fVar2;
        CursorManager__Aplica__1805b0880(param_1,*(undefined4 *)(param_1 + 0x20),0);
      }
    }
  }
  return;
}

