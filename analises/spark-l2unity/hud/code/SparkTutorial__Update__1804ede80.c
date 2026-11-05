// SparkTutorial__Update__1804ede80 @ 0x1804ede80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTutorial__Update__1804ede80(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  
  if (cRam00000001834b33e5 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkTutorial);
    cRam00000001834b33e5 = '\x01';
  }
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  lVar2 = **(longlong **)(TI_PlayerEntity + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(lVar2,0);
  if (cVar4 == '\0') {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(lVar2,uVar6);
    if (cVar4 != '\0') {
      *(longlong *)(param_1 + 0x20) = lVar2;
      func_0x000180314690(param_1 + 0x20,lVar2);
      if (lVar2 == 0) goto DAT_1804ee191;
      uVar5 = Entity__get_IsDead(lVar2,0);
      *(undefined1 *)(param_1 + 0x28) = uVar5;
      *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(lVar2 + 0x53);
      *(undefined1 *)(param_1 + 0x2a) = 0;
    }
    if (DAT_1834b3532 == '\0') {
      FUN_180315380(TI_InputManager);
      DAT_1834b3532 = '\x01';
    }
    lVar7 = **(longlong **)(TI_InputManager + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(lVar7,0);
    if (cVar4 != '\0') {
      if (lVar7 == 0) goto DAT_1804ee191;
      if (*(char *)(lVar7 + 0xd9) != '\0') {
        *(undefined1 *)(param_1 + 0x2a) = 1;
        if (*(int *)(TI_SparkTutorial + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkTutorial__Evento(2,0);
      }
      if (*(char *)(lVar7 + 0xca) != '\0') {
        if (*(char *)(param_1 + 0x2a) == '\0') {
          uVar6 = FUN_180479110(0);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar4 = UnityEngine_Object__op_Inequality(uVar6,0);
          if (cVar4 != '\0') {
            lVar7 = FUN_180479110(0);
            if (lVar7 == 0) goto DAT_1804ee191;
            if (*(char *)(lVar7 + 0x38) == '\0') {
              if (*(int *)(TI_SparkTutorial + 0xe4) == 0) {
                func_0x000180315660();
              }
              SparkTutorial__Evento(8,0);
            }
          }
        }
        *(undefined1 *)(param_1 + 0x2a) = 0;
      }
    }
    fVar9 = (float)FUN_182436650(0);
    if (*(float *)(param_1 + 0x2c) <= fVar9) {
      fVar9 = (float)FUN_182436650(0);
      *(float *)(param_1 + 0x2c) = fVar9 + 0.25;
      if (lVar2 == 0) {
DAT_1804ee191:
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar4 = Entity__get_IsDead(lVar2,0);
      if ((cVar4 != '\0') && (*(char *)(param_1 + 0x28) == '\0')) {
        if (*(int *)(TI_SparkTutorial + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkTutorial__UmaVez(0x1e,0);
      }
      *(char *)(param_1 + 0x28) = cVar4;
      cVar1 = *(char *)(lVar2 + 0x53);
      if ((cVar1 != '\0') && (*(char *)(param_1 + 0x29) == '\0')) {
        if (*(int *)(TI_SparkTutorial + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkTutorial__Evento(800000,0);
      }
      *(char *)(param_1 + 0x29) = cVar1;
      if (*(longlong *)(lVar2 + 0x40) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(*(longlong *)(lVar2 + 0x40) + 0x38);
      }
      if ((((cVar4 == '\0') && (0 < iVar8)) && (*(longlong *)(lVar2 + 0x38) != 0)) &&
         ((0 < *(int *)(*(longlong *)(lVar2 + 0x38) + 0x10) &&
          (*(int *)(*(longlong *)(lVar2 + 0x38) + 0x10) * 10 < iVar8 * 3)))) {
        if (*(int *)(TI_SparkTutorial + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkTutorial__UmaVez(0x2d,0);
      }
    }
  }
  return;
}

