// SparkMusica__Decide__180454130 @ 0x180454130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMusica__Decide__180454130(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  float *pfVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  longlong alStackX_18 [2];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar11;
  undefined1 auStack_28 [16];
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if (cRam00000001834b3003 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,string__>.TryGetValue);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkMusica);
    FUN_180315380(TI_string__);
    FUN_180315380(LIT_"'lobby:nt_oren'");
    FUN_180315380(LIT_"'lobby:'");
    FUN_180315380(LIT_"'zona:'");
    FUN_180315380(LIT_"'intro'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'nt_oren'");
    FUN_180315380(LIT_"'lobby:intro'");
    cRam00000001834b3003 = '\x01';
  }
  alStackX_18[0] = 0;
  if (cRam00000001834b3021 == '\0') {
    FUN_180315380(TI_GameManager);
    cRam00000001834b3021 = '\x01';
  }
  lVar7 = **(longlong **)(TI_GameManager + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(lVar7,0,0);
  uVar5 = LIT_"''";
  if (cVar2 != '\0') {
    return;
  }
  if (lVar7 == 0) goto code_r0x000180454786;
  switch(*(undefined1 *)(lVar7 + 0x39)) {
  case 2:
  case 3:
  case 4:
    lVar7 = func_0x000180314710(TI_string__,1);
    if (lVar7 == 0) goto code_r0x000180454786;
    if (*(int *)(lVar7 + 0x18) == 0) goto code_r0x00018045478c;
    *(undefined8 *)(lVar7 + 0x20) = LIT_"'intro'";
    func_0x000180314690(lVar7 + 0x20);
    uVar9 = 0;
    uVar6 = CONCAT44(uVar11,0x40a00000);
    uVar5 = LIT_"'lobby:intro'";
    break;
  case 5:
    lVar7 = func_0x000180314710(TI_string__,1);
    if (lVar7 == 0) goto code_r0x000180454786;
    if (*(int *)(lVar7 + 0x18) == 0) goto code_r0x00018045478c;
    *(undefined8 *)(lVar7 + 0x20) = LIT_"'nt_oren'";
    func_0x000180314690(lVar7 + 0x20);
    uVar9 = 0;
    uVar6 = CONCAT44(uVar11,0x40a00000);
    uVar5 = LIT_"'lobby:nt_oren'";
    break;
  case 6:
    uVar5 = FUN_18043b120(0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    uVar6 = LIT_"'nt_oren'";
    if (cVar2 != '\0') {
      lVar7 = FUN_18043b120(0);
      if (lVar7 == 0) goto code_r0x000180454786;
      uVar4 = func_0x00018078d580(lVar7,0);
      uVar6 = LIT_"'nt_oren'";
      if (-1 < (int)uVar4) {
        if (*(int *)(TI_SparkMusica + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (**(longlong **)(TI_SparkMusica + 0xb8) == 0) goto code_r0x000180454786;
        uVar6 = LIT_"'nt_oren'";
        if ((int)uVar4 < *(int *)(**(longlong **)(TI_SparkMusica + 0xb8) + 0x18)) {
          if (*(int *)(TI_SparkMusica + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar7 = **(longlong **)(TI_SparkMusica + 0xb8);
          if (lVar7 == 0) goto code_r0x000180454786;
          if (*(uint *)(lVar7 + 0x18) <= uVar4) goto code_r0x00018045478c;
          uVar6 = *(undefined8 *)(lVar7 + 0x20 + (longlong)(int)uVar4 * 8);
        }
      }
    }
    uVar5 = System_String__Concat(LIT_"'lobby:'",uVar6,0);
    lVar7 = func_0x000180314710(TI_string__,1);
    if (lVar7 == 0) goto code_r0x000180454786;
    if (*(int *)(lVar7 + 0x18) == 0) goto code_r0x00018045478c;
    *(undefined8 *)(lVar7 + 0x20) = uVar6;
    func_0x000180314690(lVar7 + 0x20,uVar6);
    uVar9 = 0;
    uVar6 = CONCAT44(uVar11,0x40a00000);
    break;
  case 7:
  case 10:
    if (*(char *)(lVar7 + 0x38) == '\0') {
      uVar5 = FUN_1804169f0(0);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar2 = UnityEngine_Object__op_Equality(uVar5,0,0);
      if (cVar2 == '\0') {
        uVar6 = FUN_1804169f0(0);
        uVar5 = *(undefined8 *)(param_1 + 0x88);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar2 = UnityEngine_Object__op_Inequality(uVar6,uVar5,0);
        if (cVar2 != '\0') {
          uVar5 = FUN_1804169f0(0);
          *(undefined8 *)(param_1 + 0x88) = uVar5;
          func_0x000180314690(param_1 + 0x88,uVar5);
          *(undefined1 *)(param_1 + 0x90) = 1;
        }
        cVar2 = *(char *)(param_1 + 0x90);
        *(undefined1 *)(param_1 + 0x90) = 0;
        lVar7 = FUN_1804169f0(0);
        if ((lVar7 == 0) || (lVar7 = UnityEngine_Component__get_transform(lVar7,0), lVar7 == 0))
        goto code_r0x000180454786;
        pfVar8 = (float *)UnityEngine_Transform__get_position(auStack_28,lVar7,0);
        uVar11 = 0;
        lVar7 = SparkMusica__VolumeEm__180455bd0
                          (param_1,pfVar8[2] * 52.5,*pfVar8 * 52.5,pfVar8[1] * 52.5,0);
        if (lVar7 != 0) {
          if (*(longlong *)(param_1 + 0x20) == 0) goto code_r0x000180454786;
          cVar3 = FUN_1812007b0(*(longlong *)(param_1 + 0x20),*(undefined4 *)(lVar7 + 0x10),
                                alStackX_18,MR_System.Collections.Generic.Dictionary<int,string__>.TryGetValue);
          if (cVar3 != '\0') {
            uVar5 = System_Int32__ToString(lVar7 + 0x10,0);
            uVar5 = System_String__Concat(LIT_"'zona:'",uVar5,0);
            if (alStackX_18[0] != 0) {
              if (*(int *)(alStackX_18[0] + 0x18) < 2) {
                uVar10 = 0x41700000;
              }
              else {
                uVar10 = 0x42700000;
              }
              uVar9 = *(undefined1 *)(lVar7 + 0x14);
              uVar6 = CONCAT44(uVar11,uVar10);
              lVar7 = alStackX_18[0];
              break;
            }
            goto code_r0x000180454786;
          }
        }
        uVar5 = LIT_"''";
        cVar3 = func_0x0001817058a0(LIT_"''",*(undefined8 *)(param_1 + 0x50),0);
        if (cVar3 == '\0') {
          *(undefined8 *)(param_1 + 0x50) = uVar5;
          func_0x000180314690(param_1 + 0x50,uVar5);
          *(undefined8 *)(param_1 + 0x58) = 0;
          func_0x000180314690(param_1 + 0x58,0);
          *(undefined1 *)(param_1 + 0x60) = 0;
          *(undefined4 *)(param_1 + 100) = 0;
          *(undefined4 *)(param_1 + 0x68) = 0xbf800000;
          *(undefined8 *)(param_1 + 0x58) = 0;
          func_0x000180314690(param_1 + 0x58,0);
          lVar7 = *(longlong *)(param_1 + 0x30);
          if (lVar7 == 0) goto code_r0x000180454786;
          if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_1 + 0x48)) goto code_r0x00018045478c;
          lVar7 = *(longlong *)(lVar7 + 0x20 + (longlong)(int)*(uint *)(param_1 + 0x48) * 8);
          if (lVar7 == 0) goto code_r0x000180454786;
          UnityEngine_AudioSource__set_loop(lVar7,0,0);
        }
        if (cVar2 == '\0') {
          return;
        }
        lVar7 = *(longlong *)(param_1 + 0x40);
        if (lVar7 != 0) {
          if (*(uint *)(param_1 + 0x48) < *(uint *)(lVar7 + 0x18)) {
            *(undefined4 *)(lVar7 + 0x20 + (longlong)(int)*(uint *)(param_1 + 0x48) * 4) = 0;
            return;
          }
          goto code_r0x00018045478c;
        }
        goto code_r0x000180454786;
      }
    }
    *(undefined1 *)(param_1 + 0x90) = 1;
    return;
  default:
    cVar2 = func_0x0001817058a0(LIT_"''",*(undefined8 *)(param_1 + 0x50),0);
    if (cVar2 != '\0') {
      return;
    }
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    func_0x000180314690(param_1 + 0x50,uVar5);
    *(undefined8 *)(param_1 + 0x58) = 0;
    func_0x000180314690(param_1 + 0x58,0);
    *(undefined1 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0xbf800000;
    *(undefined8 *)(param_1 + 0x58) = 0;
    func_0x000180314690(param_1 + 0x58,0);
    lVar7 = *(longlong *)(param_1 + 0x40);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_1 + 0x48)) {
code_r0x00018045478c:
        FUN_1803155c0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined4 *)(lVar7 + 0x20 + (longlong)(int)*(uint *)(param_1 + 0x48) * 4) = 0;
      lVar7 = *(longlong *)(param_1 + 0x30);
      if (lVar7 != 0) {
        if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_1 + 0x48)) goto code_r0x00018045478c;
        lVar7 = *(longlong *)(lVar7 + 0x20 + (longlong)(int)*(uint *)(param_1 + 0x48) * 8);
        if (lVar7 != 0) {
          UnityEngine_AudioSource__set_loop(lVar7,0,0);
          return;
        }
      }
    }
code_r0x000180454786:
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SparkMusica__Troca__1804552f0(param_1,uVar5,lVar7,uVar9,uVar6,1,0);
  return;
}

