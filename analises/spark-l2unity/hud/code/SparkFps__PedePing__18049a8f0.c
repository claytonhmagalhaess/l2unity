// SparkFps__PedePing__18049a8f0 @ 0x18049a8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkFps__PedePing__18049a8f0(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  char acStackX_8 [16];
  int iStackX_18;
  undefined8 uStackX_20;
  
  if (cRam00000001834b328d == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkFps);
    FUN_180315380(TI_SparkPacoteLivre);
    FUN_180315380(TI_System.Diagnostics.Stopwatch);
    cRam00000001834b328d = '\x01';
  }
  fVar8 = (float)FUN_1824366b0(0);
  if (*(float *)(param_1 + 0x34) <= fVar8) {
    if (cRam00000001834b30fb == '\0') {
      FUN_180315380(TI_GameClient);
      cRam00000001834b30fb = '\x01';
    }
    lVar6 = **(longlong **)(TI_GameClient + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Equality(lVar6,0,0);
    if (cVar3 == '\0') {
      if (lVar6 == 0) {
code_r0x00018049ac94:
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)(lVar6 + 0xa8) != 0) {
        if (cRam00000001834b2f32 == '\0') {
          FUN_180315380(TI_PlayerEntity);
          cRam00000001834b2f32 = '\x01';
        }
        uVar5 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
        if (cVar3 == '\0') {
          iStackX_18 = 0;
          fVar8 = (float)FUN_1824366b0(0);
          *(float *)(param_1 + 0x34) = fVar8 + 0.3;
          if (*(int *)(TI_SparkFps + 0xe4) == 0) {
            func_0x000180315660(TI_SparkFps);
          }
          uStackX_20 = *(undefined8 *)(*(longlong *)(TI_SparkFps + 0xb8) + 8);
          acStackX_8[0] = '\0';
          System_Threading_Monitor__Enter(uStackX_20,acStackX_8,0);
          if (*(int *)(TI_SparkFps + 0xe4) == 0) {
            func_0x000180315660(TI_SparkFps);
          }
          if (*(char *)(*(longlong *)(TI_SparkFps + 0xb8) + 0x20) != '\0') {
            if (*(int *)(TI_System.Diagnostics.Stopwatch + 0xe4) == 0) {
              func_0x000180315660();
            }
            lVar4 = func_0x000181937eb0(0);
            if (*(int *)(TI_SparkFps + 0xe4) == 0) {
              func_0x000180315660(TI_SparkFps);
            }
            if ((double)(lVar4 - *(longlong *)(*(longlong *)(TI_SparkFps + 0xb8) + 0x18)) /
                (double)**(longlong **)(TI_System.Diagnostics.Stopwatch + 0xb8) < 5.0) {
              if (acStackX_8[0] == '\0') {
                return;
              }
              func_0x0001819153a0(uStackX_20,0);
              return;
            }
          }
          if (*(int *)(TI_SparkFps + 0xe4) == 0) {
            func_0x000180315660(TI_SparkFps);
          }
          iVar7 = *(int *)(*(longlong *)(TI_SparkFps + 0xb8) + 0x10) + 1;
          *(int *)(*(longlong *)(TI_SparkFps + 0xb8) + 0x10) = iVar7;
          *(undefined1 *)(*(longlong *)(TI_SparkFps + 0xb8) + 0x20) = 1;
          iStackX_18 = iVar7;
          if (*(int *)(TI_System.Diagnostics.Stopwatch + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar5 = func_0x000181937eb0(0);
          *(undefined8 *)(*(longlong *)(TI_SparkFps + 0xb8) + 0x18) = uVar5;
          if (acStackX_8[0] != '\0') {
            func_0x0001819153a0(uStackX_20,0);
          }
          plVar1 = *(longlong **)(lVar6 + 0xa8);
          lVar6 = func_0x000180315580(TI_SparkPacoteLivre);
          func_0x000180503ed0(lVar6,0xd0,0);
          if ((((lVar6 == 0) || (lVar6 = SparkPacoteLivre__H(lVar6,0x1d4,0), lVar6 == 0)) ||
              (lVar6 = SparkPacoteLivre__D(lVar6,iVar7,0), lVar6 == 0)) ||
             (uVar5 = SparkPacoteLivre__Fim(lVar6,0), plVar1 == (longlong *)0x0))
          goto code_r0x00018049ac94;
          (**(code **)(*plVar1 + 0x178))(plVar1,uVar5,*(undefined8 *)(*plVar1 + 0x180));
        }
      }
    }
  }
  return;
}

