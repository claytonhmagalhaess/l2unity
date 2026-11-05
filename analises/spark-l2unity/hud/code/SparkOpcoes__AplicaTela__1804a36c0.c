// SparkOpcoes__AplicaTela__1804a36c0 @ 0x1804a36c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkOpcoes__AplicaTela__1804a36c0(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 uVar9;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_18 [16];
  
  if (cRam00000001834b32ae == '\0') {
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b32ae = '\x01';
  }
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (0 < **(int **)(TI_SparkOpcoes + 0xb8)) {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (0 < *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 4)) {
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xc) == 1) {
        puVar4 = (undefined8 *)UnityEngine_Screen__get_currentResolution(auStack_18,0);
        uStack_38 = *puVar4;
        uStack_30 = puVar4[1];
        uVar2 = func_0x000180eb7750(&uStack_38,0);
        if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
          func_0x000180315660();
        }
        **(undefined4 **)(TI_SparkOpcoes + 0xb8) = uVar2;
        puVar4 = (undefined8 *)UnityEngine_Screen__get_currentResolution(auStack_18,0);
        uStack_38 = *puVar4;
        uStack_30 = puVar4[1];
        uVar2 = func_0x000180eb5010(&uStack_38,0);
        *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 4) = uVar2;
      }
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xc) == 0) {
        uVar9 = 3;
      }
      else {
        if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar9 = *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xc) == 1;
      }
      puVar4 = (undefined8 *)UnityEngine_Screen__get_currentResolution(auStack_18,0);
      uStack_38 = *puVar4;
      uStack_30 = puVar4[1];
      uVar5 = func_0x000181907b40(&uStack_38,0);
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660(TI_SparkOpcoes);
      }
      if (0 < *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 8)) {
        lVar6 = UnityEngine_Screen__get_resolutions(0);
        if (lVar6 == 0) {
          FUN_1803155d0();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        for (uVar8 = 0; (int)uVar8 < *(int *)(lVar6 + 0x18); uVar8 = uVar8 + 1) {
          if (*(uint *)(lVar6 + 0x18) <= uVar8) {
            FUN_1803155c0();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          puVar4 = (undefined8 *)(lVar6 + ((longlong)(int)uVar8 + 2) * 0x10);
          uStack_28 = *puVar4;
          uStack_20 = puVar4[1];
          iVar3 = func_0x000180eb7750(&uStack_28,0);
          if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
            func_0x000180315660(TI_SparkOpcoes);
          }
          if (iVar3 == **(int **)(TI_SparkOpcoes + 0xb8)) {
            iVar3 = func_0x000180eb5010(&uStack_28);
            if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
              func_0x000180315660(TI_SparkOpcoes);
            }
            if (iVar3 == *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 4)) {
              uVar7 = func_0x000181907b40(&uStack_28);
              iVar3 = FUN_1803fb530((float)((double)(uVar7 & 0xffffffff) / (double)(uVar7 >> 0x20)))
              ;
              if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
                func_0x000180315660(TI_SparkOpcoes);
              }
              if (iVar3 == *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 8)) {
                uVar5 = func_0x000181907b40(&uStack_28,0);
                break;
              }
            }
          }
        }
      }
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660(TI_SparkOpcoes);
      }
      UnityEngine_Screen__SetResolution
                (**(undefined4 **)(TI_SparkOpcoes + 0xb8),
                 (*(undefined4 **)(TI_SparkOpcoes + 0xb8))[1],uVar9,uVar5,0);
    }
  }
  return;
}

