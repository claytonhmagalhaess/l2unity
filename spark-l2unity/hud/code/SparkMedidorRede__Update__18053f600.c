// SparkMedidorRede__Update__18053f600 @ 0x18053f600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMedidorRede__Update__18053f600(longlong param_1)

{
  double dVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ushort uVar15;
  float fVar16;
  float fVar17;
  float afStackX_8 [4];
  float afStackX_18 [2];
  float afStackX_20 [2];
  undefined4 uStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double dStack_78;
  undefined8 auStack_70 [7];
  
  if (cRam00000001834b379e == '\0') {
    FUN_180315380(TI_UnityEngine.Application);
    FUN_180315380(TI_System.Collections.Generic.ICollection<Entity>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkMedidorRede);
    FUN_180315380(TI_SparkVip);
    FUN_180315380(TI_string__);
    FUN_180315380(LIT_"'\\n'");
    FUN_180315380(LIT_"'Characters {0}'");
    FUN_180315380(LIT_"'FPS {0:F0}  (worst frame {1:F0} ms)\\n'");
    FUN_180315380(LIT_"'Packets {0:F0}/s  queue {1}  max wait {2:F0} ms\\n'");
    FUN_180315380(LIT_"'Events {0:F0}/frame (max {1})  max wait {2:F0} ms\\n'");
    cRam00000001834b379e = '\x01';
  }
  cVar3 = UnityEngine_Input__GetKey(0x132,0);
  if (cVar3 == '\0') {
    bVar4 = UnityEngine_Input__GetKey(0x131,0);
  }
  else {
    bVar4 = 1;
  }
  cVar3 = UnityEngine_Input__GetKey(0x130,0);
  if (cVar3 == '\0') {
    bVar5 = UnityEngine_Input__GetKey(0x12f,0);
  }
  else {
    bVar5 = 1;
  }
  if (((bVar4 & bVar5) != 0) && (cVar3 = UnityEngine_Input__GetKeyDown(0x66,0), cVar3 != '\0')) {
    if (*(int *)(TI_SparkVip + 0xe4) == 0) {
      func_0x000180315660(TI_SparkVip);
    }
    if (*(char *)(*(longlong *)(TI_SparkVip + 0xb8) + 0x40) == '\0') {
      if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = func_0x000180a870f0(0);
      if (cVar3 == '\0') goto code_r0x00018053f764;
    }
    *(bool *)(param_1 + 0x20) = *(char *)(param_1 + 0x20) == '\0';
  }
code_r0x00018053f764:
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (*(int *)(TI_SparkVip + 0xe4) == 0) {
      func_0x000180315660(TI_SparkVip);
    }
    if (*(char *)(*(longlong *)(TI_SparkVip + 0xb8) + 0x40) == '\0') {
      if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = func_0x000180a870f0(0);
      if (cVar3 == '\0') {
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
    }
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  fVar17 = *(float *)(param_1 + 0x2c);
  fVar16 = (float)FUN_182436680(0);
  if (fVar17 <= fVar16) {
    fVar17 = fVar16;
  }
  *(float *)(param_1 + 0x2c) = fVar17;
  FUN_1823d58d0(0);
  iVar6 = UnityEngine_FrameTimingManager__GetLatestTimings(1,*(undefined8 *)(param_1 + 0x40),0);
  if (iVar6 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x40);
    if (lVar8 == 0) goto code_r0x00018053fd8e;
    if (*(int *)(lVar8 + 0x18) == 0) {
DAT_18053fd88:
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(double *)(param_1 + 0x48) = *(double *)(lVar8 + 0x28) + *(double *)(param_1 + 0x48);
    if (lVar8 == 0) goto code_r0x00018053fd8e;
    if (*(int *)(lVar8 + 0x18) == 0) goto DAT_18053fd88;
    *(double *)(param_1 + 0x50) = *(double *)(lVar8 + 0x38) + *(double *)(param_1 + 0x50);
    if (lVar8 == 0) goto code_r0x00018053fd8e;
    if (*(int *)(lVar8 + 0x18) == 0) goto DAT_18053fd88;
    dVar1 = *(double *)(lVar8 + 0x40);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    *(double *)(param_1 + 0x58) = dVar1 + *(double *)(param_1 + 0x58);
  }
  fVar17 = (float)FUN_1824366b0(0);
  fVar17 = fVar17 - *(float *)(param_1 + 0x24);
  if (fVar17 < 0.5) {
    return;
  }
  if (*(int *)(TI_SparkMedidorRede + 0xe4) == 0) {
    func_0x000180315660();
  }
  iVar6 = func_0x000181927e50(*(longlong *)(TI_SparkMedidorRede + 0xb8) + 8,0,0);
  lVar8 = func_0x000181927e40(*(longlong *)(TI_SparkMedidorRede + 0xb8) + 0x10,0,0);
  dVar1 = **(double **)(TI_SparkMedidorRede + 0xb8);
  if (cRam00000001834b31bd == '\0') {
    FUN_180315380(TI_WorldSpawner);
    cRam00000001834b31bd = '\x01';
  }
  uVar12 = **(undefined8 **)(TI_WorldSpawner + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Inequality(uVar12,0,0);
  if (cVar3 == '\0') {
    uVar7 = 0;
  }
  else {
    if (cRam00000001834b31bd == '\0') {
      FUN_180315380(TI_WorldSpawner);
      cRam00000001834b31bd = '\x01';
    }
    if ((**(longlong **)(TI_WorldSpawner + 0xb8) == 0) ||
       (plVar9 = (longlong *)
                 WorldSpawner__get_Entidades(**(longlong **)(TI_WorldSpawner + 0xb8),0),
       plVar9 == (longlong *)0x0)) {
code_r0x00018053fd8e:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar11 = *plVar9;
    uVar15 = 0;
    if (*(ushort *)(lVar11 + 0x12e) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar11 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
            TI_System.Collections.Generic.ICollection<Entity>) {
          puVar10 = (undefined8 *)
                    ((longlong)*(int *)(*(longlong *)(lVar11 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10)
                     * 0x10 + 0x138 + lVar11);
          uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          goto code_r0x00018053fa2c;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(ushort *)(lVar11 + 0x12e));
    }
    puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_System.Collections.Generic.ICollection<Entity>,0);
    uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
code_r0x00018053fa2c:
  lVar11 = func_0x000180314710(TI_string__,6);
  afStackX_8[0] = (float)*(int *)(param_1 + 0x28) / fVar17;
  uVar12 = func_0x000180314670(_DAT_1834c6298,afStackX_8);
  afStackX_18[0] = *(float *)(param_1 + 0x2c) * 1000.0;
  uVar13 = func_0x000180314670(_DAT_1834c6298,afStackX_18);
  uVar12 = System_String__Format(LIT_"'FPS {0:F0}  (worst frame {1:F0} ms)\\n'",uVar12,uVar13,0);
  if (lVar11 == 0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)(lVar11 + 0x18) != 0) {
    *(undefined8 *)(lVar11 + 0x20) = uVar12;
    func_0x000180314690(lVar11 + 0x20,uVar12);
    afStackX_20[0] = (float)iVar6 / fVar17;
    uVar12 = func_0x000180314670(_DAT_1834c6298,afStackX_20);
    if (*(int *)(TI_SparkMedidorRede + 0xe4) == 0) {
      func_0x000180315660();
    }
    uStack_88 = *(undefined4 *)(*(longlong *)(TI_SparkMedidorRede + 0xb8) + 0x18);
    uVar13 = func_0x000180314670(_DAT_1834c6268,&uStack_88);
    dStack_78 = (double)lVar8 * dVar1;
    uVar14 = func_0x000180314670(_DAT_1834c62a0,&dStack_78);
    uVar12 = System_String__Format(LIT_"'Packets {0:F0}/s  queue {1}  max wait {2:F0} ms\\n'",uVar12,uVar13,uVar14,0);
    if (1 < *(uint *)(lVar11 + 0x18)) {
      *(undefined8 *)(lVar11 + 0x28) = uVar12;
      func_0x000180314690(lVar11 + 0x28,uVar12);
      iStack_84 = *(int *)(param_1 + 0x28);
      if (iStack_84 < 1) {
        iStack_84 = 1;
      }
      iStack_84 = *(int *)(*(longlong *)(TI_SparkMedidorRede + 0xb8) + 0x1c) / iStack_84;
      uVar12 = func_0x000180314670(_DAT_1834c6268,&iStack_84);
      uStack_80 = *(undefined4 *)(*(longlong *)(TI_SparkMedidorRede + 0xb8) + 0x20);
      uVar13 = func_0x000180314670(_DAT_1834c6268,&uStack_80);
      auStack_70[0] = *(undefined8 *)(*(longlong *)(TI_SparkMedidorRede + 0xb8) + 0x28);
      uVar14 = func_0x000180314670(_DAT_1834c62a0,auStack_70);
      uVar12 = System_String__Format(LIT_"'Events {0:F0}/frame (max {1})  max wait {2:F0} ms\\n'",uVar12,uVar13,uVar14,0);
      if (2 < *(uint *)(lVar11 + 0x18)) {
        *(undefined8 *)(lVar11 + 0x30) = uVar12;
        func_0x000180314690(lVar11 + 0x30,uVar12);
        uStack_7c = uVar7;
        uVar12 = func_0x000180314670(_DAT_1834c6268,&uStack_7c);
        uVar12 = System_String__Format(LIT_"'Characters {0}'",uVar12,0);
        if (3 < *(uint *)(lVar11 + 0x18)) {
          *(undefined8 *)(lVar11 + 0x38) = uVar12;
          func_0x000180314690(lVar11 + 0x38,uVar12);
          if (4 < *(uint *)(lVar11 + 0x18)) {
            *(undefined8 *)(lVar11 + 0x40) = LIT_"'\\n'";
            func_0x000180314690(lVar11 + 0x40);
            uVar12 = SparkMedidorRede__Tempos(param_1,0);
            if (5 < *(uint *)(lVar11 + 0x18)) {
              *(undefined8 *)(lVar11 + 0x48) = uVar12;
              func_0x000180314690(lVar11 + 0x48,uVar12);
              uVar12 = System_String__Concat(lVar11,0);
              *(undefined8 *)(param_1 + 0x30) = uVar12;
              func_0x000180314690(param_1 + 0x30,uVar12);
              uVar7 = FUN_1824366b0(0);
              *(undefined4 *)(param_1 + 0x24) = uVar7;
              *(undefined8 *)(param_1 + 0x28) = 0;
              *(undefined4 *)(*(longlong *)(TI_SparkMedidorRede + 0xb8) + 0x1c) = 0;
              *(undefined4 *)(*(longlong *)(TI_SparkMedidorRede + 0xb8) + 0x20) = 0;
              *(undefined8 *)(*(longlong *)(TI_SparkMedidorRede + 0xb8) + 0x28) = 0;
              *(undefined8 *)(param_1 + 0x58) = 0;
              *(undefined8 *)(param_1 + 0x50) = 0;
              *(undefined8 *)(param_1 + 0x48) = 0;
              *(undefined4 *)(param_1 + 0x60) = 0;
              return;
            }
          }
        }
      }
    }
  }
  FUN_1803155c0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

