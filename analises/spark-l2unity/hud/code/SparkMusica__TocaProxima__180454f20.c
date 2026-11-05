// SparkMusica__TocaProxima__180454f20 @ 0x180454f20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMusica__TocaProxima__180454f20(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  float fVar10;
  
  if (cRam00000001834b3005 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.AudioClip>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(LIT_"'[SPARK] musica nao encontrada: '");
    FUN_180315380(LIT_"'-'");
    FUN_180315380(LIT_"'Data/Music/'");
    cRam00000001834b3005 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return;
  }
  if (*(int *)(lVar1 + 0x18) == 0) goto code_r0x0001804552d9;
  lVar8 = *(longlong *)(lVar1 + 0x20);
  if (1 < *(int *)(lVar1 + 0x18)) {
    iVar7 = 0;
    do {
      if ((iVar7 != 0) &&
         (cVar3 = func_0x0001817058a0(lVar8,*(undefined8 *)(param_1 + 0x70),0), cVar3 == '\0'))
      break;
      lVar1 = *(longlong *)(param_1 + 0x58);
      if (lVar1 == 0) goto code_r0x0001804552df;
      uVar4 = UnityEngine_Random__Range(0,*(undefined4 *)(lVar1 + 0x18));
      if (*(uint *)(lVar1 + 0x18) <= uVar4) goto code_r0x0001804552d9;
      iVar7 = iVar7 + 1;
      lVar8 = *(longlong *)(lVar1 + 0x20 + (longlong)(int)uVar4 * 8);
    } while (iVar7 < 8);
  }
  *(longlong *)(param_1 + 0x70) = lVar8;
  func_0x000180314690(param_1 + 0x70,lVar8);
  cVar3 = func_0x0001817058a0(lVar8,LIT_"'-'",0);
  if (cVar3 == '\0') {
    if (lVar8 == 0) goto code_r0x0001804552df;
    if (*(int *)(lVar8 + 0x10) == 0) goto code_r0x00018045508e;
    uVar5 = System_String__Concat(LIT_"'Data/Music/'",lVar8,0);
    if (*(int *)(TI_SparkArte + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar5 = FUN_180a90ae0(uVar5,MR_SparkArte.Load<UnityEngine.AudioClip>);
  }
  else {
code_r0x00018045508e:
    uVar5 = 0;
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
  if (cVar3 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x30);
    if (lVar1 != 0) {
      uVar4 = 1 - *(int *)(param_1 + 0x48);
      if (*(uint *)(lVar1 + 0x18) <= uVar4) goto code_r0x0001804552d9;
      lVar1 = *(longlong *)(lVar1 + 0x20 + (longlong)(int)uVar4 * 8);
      if (lVar1 != 0) {
        uVar6 = UnityEngine_AudioSource__get_clip(lVar1,0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if (cVar3 != '\0') {
          lVar1 = *(longlong *)(param_1 + 0x30);
          if (lVar1 == 0) goto code_r0x0001804552df;
          if (*(uint *)(lVar1 + 0x18) <= uVar4) goto code_r0x0001804552d9;
          lVar1 = *(longlong *)(lVar1 + 0x20 + (longlong)(int)uVar4 * 8);
          if (lVar1 == 0) goto code_r0x0001804552df;
          uVar6 = UnityEngine_AudioSource__get_clip(lVar1,0);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar3 = UnityEngine_Object__op_Inequality(uVar6,uVar5,0);
          if (cVar3 != '\0') {
            SparkMusica__Solta__180454dc0(param_1,uVar4,0);
          }
        }
        lVar1 = *(longlong *)(param_1 + 0x40);
        if (lVar1 != 0) {
          if (*(uint *)(lVar1 + 0x18) <= *(uint *)(param_1 + 0x48)) {
code_r0x0001804552d9:
            FUN_1803155c0();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined4 *)(lVar1 + 0x20 + (longlong)(int)*(uint *)(param_1 + 0x48) * 4) = 0;
          lVar1 = *(longlong *)(param_1 + 0x30);
          if (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x18) <= uVar4) goto code_r0x0001804552d9;
            lVar1 = *(longlong *)(lVar1 + 0x20 + (longlong)(int)uVar4 * 8);
            if (lVar1 != 0) {
              UnityEngine_AudioSource__set_clip(lVar1,uVar5,0);
              UnityEngine_AudioSource__set_loop(lVar1,*(undefined1 *)(param_1 + 0x60),0);
              UnityEngine_AudioSource__Play(lVar1,0);
              lVar1 = *(longlong *)(param_1 + 0x38);
              if (lVar1 != 0) {
                if (uVar4 < *(uint *)(lVar1 + 0x18)) {
                  *(undefined4 *)(lVar1 + 0x20 + (longlong)(int)uVar4 * 4) = 0;
                  lVar1 = *(longlong *)(param_1 + 0x40);
                  if (lVar1 == 0) goto code_r0x0001804552df;
                  if (uVar4 < *(uint *)(lVar1 + 0x18)) {
                    *(undefined4 *)(lVar1 + 0x20 + (longlong)(int)uVar4 * 4) = 0x3f800000;
                    *(uint *)(param_1 + 0x48) = uVar4;
                    uVar9 = FUN_1824366b0(0);
                    *(undefined4 *)(param_1 + 0x4c) = uVar9;
                    return;
                  }
                }
                goto code_r0x0001804552d9;
              }
            }
          }
        }
      }
    }
  }
  else {
    cVar3 = System_String__op_Inequality(lVar8,LIT_"'-'",0);
    if (cVar3 != '\0') {
      if (lVar8 == 0) goto code_r0x0001804552df;
      if (0 < *(int *)(lVar8 + 0x10)) {
        uVar5 = System_String__Concat(LIT_"'[SPARK] musica nao encontrada: '",lVar8,0);
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        UnityEngine_Debug__LogWarning(uVar5,0);
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x40);
    if (lVar1 != 0) {
      if (*(uint *)(param_1 + 0x48) < *(uint *)(lVar1 + 0x18)) {
        *(undefined4 *)(lVar1 + 0x20 + (longlong)(int)*(uint *)(param_1 + 0x48) * 4) = 0;
        fVar10 = (float)FUN_1824366b0(0);
        *(float *)(param_1 + 0x68) = fVar10 + *(float *)(param_1 + 100);
        return;
      }
      goto code_r0x0001804552d9;
    }
  }
code_r0x0001804552df:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

