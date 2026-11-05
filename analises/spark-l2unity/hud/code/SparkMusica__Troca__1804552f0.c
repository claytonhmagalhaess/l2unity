// SparkMusica__Troca__1804552f0 @ 0x1804552f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMusica__Troca__1804552f0
               (longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
               undefined4 param_5,char param_6)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar10;
  float fVar11;
  
  cVar3 = func_0x0001817058a0(param_2,*(undefined8 *)(param_1 + 0x50),0);
  if (cVar3 == '\0') {
    *(undefined8 *)(param_1 + 0x50) = param_2;
    func_0x000180314690(param_1 + 0x50,param_2);
    *(longlong *)(param_1 + 0x58) = param_3;
    func_0x000180314690(param_1 + 0x58,param_3);
    *(undefined4 *)(param_1 + 100) = param_5;
    *(undefined1 *)(param_1 + 0x60) = param_4;
    *(undefined4 *)(param_1 + 0x68) = 0xbf800000;
    if ((param_3 == 0) || (*(longlong *)(param_3 + 0x18) == 0)) {
      *(undefined8 *)(param_1 + 0x58) = 0;
      func_0x000180314690(param_1 + 0x58,0);
      if (param_6 != '\0') {
        lVar1 = *(longlong *)(param_1 + 0x40);
        if (lVar1 == 0) goto DAT_180455776;
        if (*(uint *)(lVar1 + 0x18) <= *(uint *)(param_1 + 0x48)) goto code_r0x00018045577c;
        *(undefined4 *)(lVar1 + 0x20 + (longlong)(int)*(uint *)(param_1 + 0x48) * 4) = 0;
      }
      lVar1 = *(longlong *)(param_1 + 0x30);
      if (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x18) <= *(uint *)(param_1 + 0x48)) goto code_r0x00018045577c;
        lVar1 = *(longlong *)(lVar1 + 0x20 + (longlong)(int)*(uint *)(param_1 + 0x48) * 8);
        if (lVar1 != 0) {
          if (cRam00000001834bf1e2 == '\0') {
            FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.MarshalNotNull<UnityEngine.AudioSource>,0,0);
            cRam00000001834bf1e2 = '\x01';
          }
          if (lVar1 != 0) {
            lVar9 = *(longlong *)(lVar1 + 0x10);
            if (lVar9 == 0) {
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException(lVar1,0);
            }
            if (pcRam00000001834bf238 == (code *)0x0) {
              pcRam00000001834bf238 = (code *)FUN_180315630(&UNK_18292eef0);
            }
                    /* WARNING: Could not recover jumptable at 0x0001823c53ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam00000001834bf238)(lVar9,0);
            return;
          }
          FUN_1803155d0();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      goto DAT_180455776;
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    func_0x000180314690(param_1 + 0x70,0);
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
    if ((*(longlong *)(param_1 + 0x58) != 0) &&
       (lVar1 = *(longlong *)(param_1 + 0x58), *(longlong *)(lVar1 + 0x18) != 0)) {
      if (*(int *)(lVar1 + 0x18) == 0) {
code_r0x00018045577c:
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar9 = *(longlong *)(lVar1 + 0x20);
      uVar8 = uVar6;
      if (1 < *(int *)(lVar1 + 0x18)) {
        do {
          if (((int)uVar8 != 0) &&
             (cVar3 = func_0x0001817058a0(lVar9,*(undefined8 *)(param_1 + 0x70),0), cVar3 == '\0'))
          break;
          lVar1 = *(longlong *)(param_1 + 0x58);
          if (lVar1 == 0) goto DAT_180455776;
          uVar4 = UnityEngine_Random__Range(0,*(undefined4 *)(lVar1 + 0x18));
          if (*(uint *)(lVar1 + 0x18) <= uVar4) goto code_r0x00018045577c;
          uVar7 = (int)uVar8 + 1;
          lVar9 = *(longlong *)(lVar1 + 0x20 + (longlong)(int)uVar4 * 8);
          uVar8 = (ulonglong)uVar7;
        } while ((int)uVar7 < 8);
      }
      *(longlong *)(param_1 + 0x70) = lVar9;
      func_0x000180314690(param_1 + 0x70,lVar9);
      cVar3 = func_0x0001817058a0(lVar9,LIT_"'-'",0);
      if (cVar3 == '\0') {
        if (lVar9 == 0) goto DAT_180455776;
        if (*(int *)(lVar9 + 0x10) != 0) {
          uVar5 = System_String__Concat(LIT_"'Data/Music/'",lVar9,0);
          if (*(int *)(TI_SparkArte + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar6 = FUN_180a90ae0(uVar5,MR_SparkArte.Load<UnityEngine.AudioClip>);
        }
      }
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = UnityEngine_Object__op_Equality(uVar6,0,0);
      if (cVar3 == '\0') {
        lVar1 = *(longlong *)(param_1 + 0x30);
        if (lVar1 != 0) {
          uVar4 = 1 - *(int *)(param_1 + 0x48);
          if (*(uint *)(lVar1 + 0x18) <= uVar4) goto code_r0x00018045577c;
          lVar1 = *(longlong *)(lVar1 + 0x20 + (longlong)(int)uVar4 * 8);
          if (lVar1 != 0) {
            uVar5 = UnityEngine_AudioSource__get_clip(lVar1,0);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
            if (cVar3 != '\0') {
              lVar1 = *(longlong *)(param_1 + 0x30);
              if (lVar1 == 0) goto DAT_180455776;
              if (*(uint *)(lVar1 + 0x18) <= uVar4) goto code_r0x00018045577c;
              lVar1 = *(longlong *)(lVar1 + 0x20 + (longlong)(int)uVar4 * 8);
              if (lVar1 == 0) goto DAT_180455776;
              uVar5 = UnityEngine_AudioSource__get_clip(lVar1,0);
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar3 = UnityEngine_Object__op_Inequality(uVar5,uVar6,0);
              if (cVar3 != '\0') {
                SparkMusica__Solta__180454dc0(param_1,uVar4,0);
              }
            }
            lVar1 = *(longlong *)(param_1 + 0x40);
            if (lVar1 != 0) {
              if (*(uint *)(lVar1 + 0x18) <= *(uint *)(param_1 + 0x48)) goto code_r0x00018045577c;
              *(undefined4 *)(lVar1 + 0x20 + (longlong)(int)*(uint *)(param_1 + 0x48) * 4) = 0;
              lVar1 = *(longlong *)(param_1 + 0x30);
              if (lVar1 != 0) {
                if (*(uint *)(lVar1 + 0x18) <= uVar4) goto code_r0x00018045577c;
                lVar1 = *(longlong *)(lVar1 + 0x20 + (longlong)(int)uVar4 * 8);
                if (lVar1 != 0) {
                  UnityEngine_AudioSource__set_clip(lVar1,uVar6,0);
                  UnityEngine_AudioSource__set_loop(lVar1,*(undefined1 *)(param_1 + 0x60),0);
                  UnityEngine_AudioSource__Play(lVar1,0);
                  lVar1 = *(longlong *)(param_1 + 0x38);
                  if (lVar1 != 0) {
                    if (uVar4 < *(uint *)(lVar1 + 0x18)) {
                      *(undefined4 *)(lVar1 + 0x20 + (longlong)(int)uVar4 * 4) = 0;
                      lVar1 = *(longlong *)(param_1 + 0x40);
                      if (lVar1 == 0) goto DAT_180455776;
                      if (uVar4 < *(uint *)(lVar1 + 0x18)) {
                        *(undefined4 *)(lVar1 + 0x20 + (longlong)(int)uVar4 * 4) = 0x3f800000;
                        *(uint *)(param_1 + 0x48) = uVar4;
                        uVar10 = FUN_1824366b0(0);
                        *(undefined4 *)(param_1 + 0x4c) = uVar10;
                        return;
                      }
                    }
                    goto code_r0x00018045577c;
                  }
                }
              }
            }
          }
        }
      }
      else {
        cVar3 = System_String__op_Inequality(lVar9,LIT_"'-'",0);
        if (cVar3 != '\0') {
          if (lVar9 == 0) goto DAT_180455776;
          if (0 < *(int *)(lVar9 + 0x10)) {
            uVar5 = System_String__Concat(LIT_"'[SPARK] musica nao encontrada: '",lVar9,0);
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
            fVar11 = (float)FUN_1824366b0(0);
            *(float *)(param_1 + 0x68) = fVar11 + *(float *)(param_1 + 100);
            return;
          }
          goto code_r0x00018045577c;
        }
      }
DAT_180455776:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

