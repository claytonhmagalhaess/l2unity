// SparkTextoDano__Status__18074f7d0 @ 0x18074f7d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTextoDano__Status__18074f7d0(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  
  if (cRam00000001834b429f == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkTextoDano);
    cRam00000001834b429f = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(param_1,0,0);
  if (cVar3 == '\0') {
    if (param_1 == 0) goto DAT_18074fbba;
    if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = SparkTextoDano__Op__18074cb20(0x13,0);
      if (cVar3 == '\0') {
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = SparkTextoDano__Op__18074cb20(0x14,0);
        if (cVar3 == '\0') {
          return;
        }
      }
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = SparkTextoDano__Servidor__18074de20(1,0);
      if (cVar3 == '\0') {
        uVar4 = FUN_1804169f0(0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = UnityEngine_Object__op_Equality(param_1,uVar4,0);
        if (cVar3 == '\0') {
          if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar3 = SparkTextoDano__EhServo__180747b30(param_1,0);
          if (cVar3 == '\0') {
            uVar4 = FUN_18043b810(0);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar3 = UnityEngine_Object__op_Equality(uVar4,0,0);
            if (cVar3 == '\0') {
              lVar5 = FUN_18043b810(0);
              if (lVar5 != 0) {
                uVar4 = *(undefined8 *)(lVar5 + 0x20);
                if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                  func_0x000180315660();
                }
                cVar3 = UnityEngine_Object__op_Inequality(uVar4,param_1,0);
                if (cVar3 != '\0') {
                  return;
                }
                if (*(longlong *)(param_1 + 0x30) != 0) {
                  iVar7 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x14);
                  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  if (cRam00000001834b42ab == '\0') {
                    FUN_180315380(TI_SparkTextoDano);
                    cRam00000001834b42ab = '\x01';
                  }
                  fVar8 = (float)FUN_182436650(0);
                  uVar6 = 0;
                  lVar5 = TI_SparkTextoDano;
                  do {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      func_0x000180315660();
                      lVar5 = TI_SparkTextoDano;
                    }
                    lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + 0x50);
                    if (lVar1 == 0) break;
                    if (*(int *)(lVar1 + 0x18) <= (int)uVar6) {
                      return;
                    }
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      func_0x000180315660();
                      lVar5 = TI_SparkTextoDano;
                    }
                    lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + 0x50);
                    if (lVar1 == 0) break;
                    if (*(uint *)(lVar1 + 0x18) <= uVar6) {
code_r0x00018074fbc0:
                      FUN_1803155c0();
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    if (*(int *)(lVar1 + 0x20 + (longlong)(int)uVar6 * 4) == iVar7) {
                      if (*(int *)(lVar5 + 0xe4) == 0) {
                        func_0x000180315660();
                        lVar5 = TI_SparkTextoDano;
                      }
                      lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + 0x58);
                      if (lVar1 == 0) break;
                      if (*(uint *)(lVar1 + 0x18) <= uVar6) goto code_r0x00018074fbc0;
                      if (fVar8 - *(float *)(lVar1 + 0x20 + (longlong)(int)uVar6 * 4) <= 2.0)
                      goto code_r0x00018074fac7;
                    }
                    uVar6 = uVar6 + 1;
                  } while( true );
                }
              }
              goto DAT_18074fbba;
            }
          }
        }
      }
    }
  }
  return;
code_r0x00018074fac7:
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    iVar7 = *(int *)(lVar1 + 0x14);
    if ((0 < param_2) && (param_2 = *(int *)(lVar1 + 0x10) - param_2, 0 < param_2)) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = SparkTextoDano__Op__18074cb20(0x13,0);
      lVar5 = TI_SparkTextoDano;
      if (cVar3 != '\0') {
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkTextoDano__Solta__18074e1b0(param_1,0,5,param_2,0);
        lVar5 = TI_SparkTextoDano;
      }
    }
    if (param_3 < 1) {
      return;
    }
    iVar7 = iVar7 - param_3;
    if (iVar7 < 1) {
      return;
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = SparkTextoDano__Op__18074cb20(0x14,0);
    if (cVar3 == '\0') {
      return;
    }
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkTextoDano__Solta__18074e1b0(param_1,0,6,iVar7,0);
    return;
  }
DAT_18074fbba:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

