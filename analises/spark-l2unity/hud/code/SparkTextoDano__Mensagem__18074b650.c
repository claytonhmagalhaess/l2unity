// SparkTextoDano__Mensagem__18074b650 @ 0x18074b650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTextoDano__Mensagem__18074b650(int param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  float fVar11;
  
  if (cRam00000001834b429d == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkTextoDano);
    cRam00000001834b429d = '\x01';
  }
  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = SparkTextoDano__get_Ligado(0);
  if (cVar4 == '\0') {
    return;
  }
  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkTextoDano__GaranteOuvintes__18074ab50(0);
  fVar11 = (float)FUN_182436650(0);
  if (param_1 < 0x9e) {
    if (0x2c < param_1) {
      if (param_1 == 0x5f) {
        uVar6 = FUN_1804169f0(0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = UnityEngine_Object__op_Equality(uVar6);
        if (cVar4 != '\0') {
          return;
        }
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (param_2 == 0) {
          return;
        }
        iVar5 = *(int *)(param_2 + 0x18);
        iVar8 = 0;
        for (uVar7 = 0; (int)uVar7 < iVar5; uVar7 = uVar7 + 1) {
          if (*(uint *)(param_2 + 0x18) <= uVar7) goto code_r0x00018074c36e;
          if ((*(longlong *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8) != 0) &&
             (iVar5 = *(int *)(param_2 + 0x18),
             *(int *)(*(longlong *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8) + 0x10) == 1)) {
            if (iVar8 == 0) {
              iVar5 = SMParam__GetIntValue
                                (*(undefined8 *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8));
              goto code_r0x00018074bcfe;
            }
            iVar8 = iVar8 + -1;
          }
        }
        iVar5 = 0;
code_r0x00018074bcfe:
        iVar8 = *(int *)(param_2 + 0x18);
        uVar7 = 0;
        iVar9 = 1;
        do {
          if (iVar8 <= (int)uVar7) {
            iVar8 = 0;
code_r0x00018074bd5e:
            if (0 < iVar5) {
              if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar4 = SparkTextoDano__Op__18074cb20(2,0);
              if (cVar4 != '\0') {
                if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                  func_0x000180315660();
                }
                SparkTextoDano__Solta__18074e1b0(uVar6,1,8,iVar5,0);
              }
            }
            if (iVar8 < 1) {
              return;
            }
            if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar4 = SparkTextoDano__Op__18074cb20(3,0);
            if (cVar4 == '\0') {
              return;
            }
            if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
              func_0x000180315660();
            }
            SparkTextoDano__Solta__18074e1b0(uVar6,1,7,iVar8,0);
            return;
          }
          if (*(uint *)(param_2 + 0x18) <= uVar7) goto code_r0x00018074c36e;
          if ((*(longlong *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8) != 0) &&
             (iVar8 = *(int *)(param_2 + 0x18),
             *(int *)(*(longlong *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8) + 0x10) == 1)) {
            if (iVar9 == 0) {
              iVar8 = SMParam__GetIntValue
                                (*(undefined8 *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8),0);
              goto code_r0x00018074bd5e;
            }
            iVar9 = iVar9 + -1;
          }
          uVar7 = uVar7 + 1;
        } while( true );
      }
      if (param_1 == 0x8b) {
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar6 = SparkTextoDano__AlvoAtual__1807467d0(0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if (cVar4 == '\0') {
          return;
        }
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = SparkTextoDano__Op__18074cb20(0x10,0);
        if (cVar4 == '\0') {
          return;
        }
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkTextoDano__Solta__18074e1b0(uVar6,0,9,0,0);
        return;
      }
      if (param_1 != 0x9d) {
        return;
      }
code_r0x00018074bee5:
      uVar6 = FUN_1804169f0(0);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
      if (cVar4 == '\0') {
        return;
      }
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = SparkTextoDano__Op__18074cb20(8,0);
      if (cVar4 == '\0') {
        return;
      }
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      SparkTextoDano__Solta__18074e1b0(uVar6,1,9,0,0);
      return;
    }
    if (param_1 == 0x23) {
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = SparkTextoDano__Servidor__18074de20(1);
      if (cVar4 != '\0') {
        return;
      }
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTextoDano);
      }
      if (param_2 != 0) {
        iVar5 = *(int *)(param_2 + 0x18);
        iVar8 = 0;
        for (uVar7 = 0; (int)uVar7 < iVar5; uVar7 = uVar7 + 1) {
          if (*(uint *)(param_2 + 0x18) <= uVar7) goto code_r0x00018074c36e;
          if ((*(longlong *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8) != 0) &&
             (iVar5 = *(int *)(param_2 + 0x18),
             *(int *)(*(longlong *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8) + 0x10) == 1)) {
            if (iVar8 == 0) {
              iVar5 = SMParam__GetIntValue
                                (*(undefined8 *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8),0);
              goto code_r0x00018074c035;
            }
            iVar8 = iVar8 + -1;
          }
        }
      }
      iVar5 = 0;
code_r0x00018074c035:
      fVar1 = *(float *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x38);
      *(undefined4 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x38) = 0xc1200000;
      if (iVar5 < 1) {
        return;
      }
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = SparkTextoDano__Consome__1807478a0(0,iVar5,0);
      if (cVar4 != '\0') {
        return;
      }
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar6 = SparkTextoDano__AlvoAtual__1807467d0(0);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = UnityEngine_Object__op_Equality(uVar6,0,0);
      if (cVar4 != '\0') {
        return;
      }
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = SparkTextoDano__Op__18074cb20(0xb,0);
      if (cVar4 != '\0') {
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkTextoDano__Solta__18074e1b0(uVar6,0,1,iVar5,0);
      }
      if (0.5 <= fVar11 - fVar1) {
        return;
      }
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = SparkTextoDano__Op__18074cb20(0xd,0);
      if (cVar4 == '\0') {
        return;
      }
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      SparkTextoDano__Solta__18074e1b0(uVar6,0,3,0,0);
      return;
    }
    if (param_1 == 0x24) {
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (param_2 != 0) {
        iVar5 = *(int *)(param_2 + 0x18);
        iVar8 = 0;
        for (uVar7 = 0; (int)uVar7 < iVar5; uVar7 = uVar7 + 1) {
          if (*(uint *)(param_2 + 0x18) <= uVar7) goto code_r0x00018074c36e;
          if ((*(longlong *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8) != 0) &&
             (iVar5 = *(int *)(param_2 + 0x18),
             *(int *)(*(longlong *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8) + 0x10) == 1)) {
            if (iVar8 == 0) {
              lVar2 = *(longlong *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8);
              if (lVar2 == 0) {
                FUN_1803155d0();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar5 = SMParam__GetIntValue(lVar2,0);
              uVar6 = FUN_1804169f0(0);
              if (iVar5 < 1) {
                return;
              }
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar4 = UnityEngine_Object__op_Equality(uVar6,0,0);
              if (cVar4 != '\0') {
                return;
              }
              if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar4 = SparkTextoDano__Consome__1807478a0(1,iVar5,0);
              if (cVar4 != '\0') {
                return;
              }
              if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                func_0x000180315660();
              }
              bVar10 = 1.5 <= fVar11 - *(float *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x3c)
              ;
              if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar4 = SparkTextoDano__Op__18074cb20(bVar10 + '\x04',0);
              if (cVar4 == '\0') {
                return;
              }
              if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                func_0x000180315660();
              }
              SparkTextoDano__Solta__18074e1b0(uVar6,1,bVar10 + '\x01',iVar5,0);
              return;
            }
            iVar8 = iVar8 + -1;
          }
        }
      }
      FUN_1804169f0(0);
      return;
    }
    bVar10 = param_1 == 0x2c;
code_r0x00018074c321:
    if (bVar10) {
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTextoDano);
      }
      *(float *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x38) = fVar11;
    }
  }
  else {
    if (param_1 < 0x3f7) {
      if (param_1 == 0x9f) goto code_r0x00018074bee5;
      if (param_1 == 0x169) {
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (cRam00000001834b42a2 == '\0') {
          FUN_180315380(TI_SparkTextoDano);
          cRam00000001834b42a2 = '\x01';
        }
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        if ((*(byte *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x10) & 1) != 0) {
          return;
        }
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar6 = SparkTextoDano__AlvoAtual__1807467d0(0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if (cVar4 == '\0') {
          return;
        }
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = SparkTextoDano__Op__18074cb20(0xe,0);
        if (cVar4 == '\0') {
          return;
        }
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkTextoDano__Solta__18074e1b0(uVar6,0,4,0,0);
        return;
      }
      if (param_1 != 0x3f6) {
        return;
      }
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (param_2 != 0) {
        iVar5 = *(int *)(param_2 + 0x18);
        iVar8 = 0;
        for (uVar7 = 0; (int)uVar7 < iVar5; uVar7 = uVar7 + 1) {
          if (*(uint *)(param_2 + 0x18) <= uVar7) goto code_r0x00018074c36e;
          if ((*(longlong *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8) != 0) &&
             (iVar5 = *(int *)(param_2 + 0x18),
             *(int *)(*(longlong *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8) + 0x10) == 1)) {
            if (iVar8 == 0) {
              iVar5 = SMParam__GetIntValue
                                (*(undefined8 *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8),0);
              uVar6 = SparkTextoDano__MeuServo__18074c380(0);
              if (iVar5 < 1) {
                return;
              }
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
              if (cVar4 == '\0') {
                return;
              }
              if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar4 = SparkTextoDano__Op__18074cb20(0x19,0);
              if (cVar4 == '\0') {
                return;
              }
              if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                func_0x000180315660();
              }
              SparkTextoDano__Solta__18074e1b0(uVar6,2,8,iVar5,0);
              return;
            }
            iVar8 = iVar8 + -1;
          }
        }
      }
    }
    else {
      if (0x403 < param_1) {
        if (param_1 - 0x42aU < 4) {
          if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (param_2 != 0) {
            iVar5 = *(int *)(param_2 + 0x18);
            iVar8 = 0;
            for (uVar7 = 0; (int)uVar7 < iVar5; uVar7 = uVar7 + 1) {
              if (*(uint *)(param_2 + 0x18) <= uVar7) goto code_r0x00018074c36e;
              if ((*(longlong *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8) != 0) &&
                 (iVar5 = *(int *)(param_2 + 0x18),
                 *(int *)(*(longlong *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8) + 0x10) == 1)) {
                if (iVar8 == 0) {
                  iVar5 = SMParam__GetIntValue
                                    (*(undefined8 *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8),0);
                  goto code_r0x00018074b786;
                }
                iVar8 = iVar8 + -1;
              }
            }
          }
          iVar5 = 0;
code_r0x00018074b786:
          if (DAT_1834b2f32 == '\0') {
            FUN_180315380(TI_PlayerEntity);
            DAT_1834b2f32 = '\x01';
          }
          if (iVar5 < 1) {
            return;
          }
          uVar6 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
          if (cVar4 == '\0') {
            return;
          }
          if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar4 = SparkTextoDano__Op__18074cb20(0x42b < param_1,0);
          if (cVar4 == '\0') {
            return;
          }
          if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
            func_0x000180315660();
          }
          SparkTextoDano__Solta__18074e1b0(uVar6,1,(0x42b < param_1) + '\x05',iVar5,0);
          return;
        }
        bVar10 = param_1 == 0x500;
        goto code_r0x00018074c321;
      }
      if ((param_1 != 0x3f8) && (param_1 != 0x403)) {
        return;
      }
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (param_2 != 0) {
        iVar5 = *(int *)(param_2 + 0x18);
        iVar8 = 0;
        for (uVar7 = 0; (int)uVar7 < iVar5; uVar7 = uVar7 + 1) {
          if (*(uint *)(param_2 + 0x18) <= uVar7) {
code_r0x00018074c36e:
            FUN_1803155c0();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((*(longlong *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8) != 0) &&
             (iVar5 = *(int *)(param_2 + 0x18),
             *(int *)(*(longlong *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8) + 0x10) == 1)) {
            if (iVar8 == 0) {
              iVar5 = SMParam__GetIntValue
                                (*(undefined8 *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8),0);
              uVar6 = SparkTextoDano__MeuServo__18074c380(0);
              if (iVar5 < 1) {
                return;
              }
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar4 = UnityEngine_Object__op_Equality(uVar6,0,0);
              if (cVar4 != '\0') {
                return;
              }
              if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar4 = SparkTextoDano__Consome__1807478a0(2,iVar5,0);
              if (cVar4 != '\0') {
                return;
              }
              if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                func_0x000180315660();
              }
              bVar10 = 1.5 <= fVar11 - *(float *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x40)
              ;
              if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar4 = SparkTextoDano__Op__18074cb20(bVar10 + '\x1a',0);
              if (cVar4 == '\0') {
                return;
              }
              if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                func_0x000180315660();
              }
              SparkTextoDano__Solta__18074e1b0(uVar6,2,bVar10 + '\x01',iVar5,0);
              return;
            }
            iVar8 = iVar8 + -1;
          }
        }
      }
    }
    SparkTextoDano__MeuServo__18074c380(0);
  }
  return;
}

