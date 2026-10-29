// SparkEmissoresDoMapa__Update__180560590 @ 0x180560590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkEmissoresDoMapa__Update__180560590(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  longlong lVar7;
  float *pfVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_88 [112];
  
  if (cRam00000001834b3885 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3885 = '\x01';
  }
  fVar10 = (float)FUN_1824366b0(0);
  if (*(float *)(param_1 + 0x30) <= fVar10) {
    fVar10 = (float)FUN_1824366b0(0);
    *(float *)(param_1 + 0x30) = fVar10 + 0.5;
    lVar7 = GameManager__get_CameraDoJogo(0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar6 = UnityEngine_Object__op_Equality(lVar7,0,0);
    if (cVar6 == '\0') {
      if (DAT_1834b2f32 == '\0') {
        FUN_180315380(TI_PlayerEntity);
        DAT_1834b2f32 = '\x01';
      }
      uVar3 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar6 = UnityEngine_Object__op_Equality(uVar3,0,0);
      if (cVar6 == '\0') {
        if ((lVar7 != 0) && (lVar7 = UnityEngine_Component__get_transform(lVar7,0), lVar7 != 0)) {
          pfVar8 = (float *)UnityEngine_Transform__get_position(auStack_88,lVar7,0);
          lVar7 = *(longlong *)(param_1 + 0x20);
          if (lVar7 != 0) {
            fVar10 = *pfVar8;
            uVar9 = 0;
            fVar1 = pfVar8[1];
            fVar2 = pfVar8[2];
            while( true ) {
              if (*(int *)(lVar7 + 0x18) <= (int)uVar9) {
                return;
              }
              if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                FUN_1803155c0();
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar4 = *(longlong *)(lVar7 + 0x20 + (longlong)(int)uVar9 * 8);
              if (lVar4 == 0) break;
              fVar12 = *(float *)(lVar4 + 0x40) - fVar10;
              fVar13 = *(float *)(lVar4 + 0x44) - fVar1;
              fVar11 = *(float *)(lVar4 + 0x48) - fVar2;
              uVar3 = *(undefined8 *)(lVar4 + 0x38);
              fVar11 = fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11;
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar6 = UnityEngine_Object__op_Equality(uVar3,0,0);
              if ((cVar6 == '\0') || (3600.0 <= fVar11)) {
                uVar3 = *(undefined8 *)(lVar4 + 0x38);
                if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                  func_0x000180315660();
                }
                cVar6 = UnityEngine_Object__op_Inequality(uVar3);
                if ((cVar6 != '\0') && (5184.0 < fVar11)) {
                  uVar3 = *(undefined8 *)(lVar4 + 0x38);
                  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  UnityEngine_Object__Destroy(uVar3);
                  *(undefined8 *)(lVar4 + 0x38) = 0;
                  func_0x000180314690(lVar4 + 0x38);
                }
                uVar9 = uVar9 + 1;
              }
              else {
                SparkEmissoresDoMapa__Acende(param_1);
                uVar9 = uVar9 + 1;
              }
            }
          }
        }
        FUN_1803155d0();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  return;
}

