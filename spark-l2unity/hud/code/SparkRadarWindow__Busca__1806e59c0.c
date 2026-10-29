// SparkRadarWindow__Busca__1806e59c0 @ 0x1806e59c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow__Busca__1806e59c0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  ushort uVar9;
  int iVar11;
  int iVar12;
  float fVar13;
  longlong *plStack_98;
  longlong *plStack_90;
  longlong lStack_88;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  longlong **pplStack_50;
  undefined1 auStack_48 [32];
  ulonglong uVar10;
  
  if (cRam00000001834b4095 == '\0') {
    FUN_180315380(MR_System.Collections.Concurrent.ConcurrentDictionary<int,Entity>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.HashSet<int>.Add);
    FUN_180315380(MR_System.Collections.Generic.HashSet<int>.Clear);
    FUN_180315380(TI_System.IDisposable);
    FUN_180315380(TI_System.Collections.Generic.IEnumerable<Entity>);
    FUN_180315380(TI_System.Collections.Generic.IEnumerator<Entity>);
    FUN_180315380(TI_System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<int,Entity>>);
    FUN_180315380(TI_System.Collections.IEnumerator);
    FUN_180315380(TI_System.Collections.Generic.IReadOnlyCollection<MembroDaParty>);
    FUN_180315380(TI_System.Collections.Generic.IReadOnlyList<MembroDaParty>);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<int,Entity>.get_Value);
    FUN_180315380(MR_System.Collections.Generic.List<SparkRadarWindow.Candidato>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<SparkRadarWindow.Candidato>.RemoveRange);
    FUN_180315380(MR_System.Collections.Generic.List<SparkRadarWindow.Candidato>.Sort);
    FUN_180315380(MR_System.Collections.Generic.List<SparkRadarWindow.Candidato>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.get_Item);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkDesempenho);
    FUN_180315380(TI_SparkParty);
    FUN_180315380(TI_SparkRadarWindow);
    cRam00000001834b4095 = '\x01';
  }
  iVar11 = 0;
  plStack_98 = (longlong *)0x0;
  plStack_90 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x180) == 0) {
code_r0x0001806e6234:
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_1814ceb00(*(longlong *)(param_1 + 0x180),MR_System.Collections.Generic.HashSet<int>.Clear);
  if (*(int *)(TI_SparkParty + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3017 == '\0') {
    FUN_180315380(TI_SparkParty);
    cRam00000001834b3017 = '\x01';
  }
  if (*(int *)(TI_SparkParty + 0xe4) == 0) {
    func_0x000180315660();
  }
  plVar1 = (longlong *)**(longlong **)(TI_SparkParty + 0xb8);
  iVar12 = iVar11;
  if (plVar1 == (longlong *)0x0) goto code_r0x0001806e6234;
  for (; iVar4 = FUN_1800020c0(0,TI_System.Collections.Generic.IReadOnlyCollection<MembroDaParty>,plVar1), iVar12 < iVar4; iVar12 = iVar12 + 1)
  {
    lVar7 = *(longlong *)(param_1 + 0x180);
    lVar6 = *plVar1;
    if (*(ushort *)(lVar6 + 0x12e) != 0) {
      uVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + uVar10 * 0x10) == TI_System.Collections.Generic.IReadOnlyList<MembroDaParty>) {
          puVar5 = (undefined8 *)
                   ((longlong)*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + uVar10 * 0x10) * 0x10 +
                    0x138 + lVar6);
          goto code_r0x0001806e5bf2;
        }
        uVar9 = (short)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < *(ushort *)(lVar6 + 0x12e));
    }
    puVar5 = (undefined8 *)FUN_180312860(plVar1,TI_System.Collections.Generic.IReadOnlyList<MembroDaParty>,0);
code_r0x0001806e5bf2:
    lVar6 = (*(code *)*puVar5)(plVar1,iVar12,puVar5[1]);
    if ((lVar6 == 0) || (lVar7 == 0)) goto code_r0x0001806e6234;
    func_0x0001814cea30(lVar7,*(undefined4 *)(lVar6 + 0x10),MR_System.Collections.Generic.HashSet<int>.Add);
  }
  lVar7 = *(longlong *)(param_1 + 0x178);
  if (lVar7 == 0) goto code_r0x0001806e6234;
  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
  iVar12 = *(int *)(lVar7 + 0x18);
  *(undefined4 *)(lVar7 + 0x18) = 0;
  if (0 < iVar12) {
    System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar12,0);
  }
  if (cRam00000001834b4088 == '\0') {
    FUN_180315380(TI_SparkRadarWindow);
    cRam00000001834b4088 = '\x01';
  }
  if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
    func_0x000180315660(TI_SparkRadarWindow);
  }
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkRadarWindow + 0xb8) + 8);
  if (lVar7 == 0) goto code_r0x0001806e6234;
  if (*(uint *)(param_1 + 0x8c) < *(uint *)(lVar7 + 0x18)) {
    fVar13 = (*(float *)(lVar7 + 0x20 + (longlong)(int)*(uint *)(param_1 + 0x8c) * 4) / 52.5) * 1.1;
    fVar13 = fVar13 * fVar13;
    if (cRam00000001834b31bd == '\0') {
      FUN_180315380(TI_WorldSpawner);
      cRam00000001834b31bd = '\x01';
    }
    lVar7 = **(longlong **)(TI_WorldSpawner + 0xb8);
    lStack_88 = lVar7;
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Inequality(lVar7,0,0);
    if (cVar3 == '\0') {
code_r0x0001806e6111:
      if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
        func_0x000180315660(TI_SparkDesempenho);
      }
      lVar7 = *(longlong *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x40);
      if (lVar7 != 0) {
        for (; iVar11 < *(int *)(lVar7 + 0x18); iVar11 = iVar11 + 1) {
          uVar8 = FUN_180bbafe0(lVar7,iVar11,MR_System.Collections.Generic.List<Entity>.get_Item);
          uStack_68 = *param_2;
          uStack_60 = *(undefined4 *)(param_2 + 1);
          SparkRadarWindow__Considera__1806e6b40(param_1,uVar8,&uStack_68,fVar13,0);
        }
        lVar7 = *(longlong *)(param_1 + 0x178);
        if (lVar7 != 0) {
          if (0x96 < *(int *)(lVar7 + 0x18)) {
            if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
              func_0x000180315660(TI_SparkRadarWindow);
            }
            FUN_180c02850(lVar7,*(undefined8 *)(*(longlong *)(TI_SparkRadarWindow + 0xb8) + 0x28),
                          MR_System.Collections.Generic.List<SparkRadarWindow.Candidato>.Sort);
            if (*(longlong *)(param_1 + 0x178) == 0) goto code_r0x0001806e6234;
            FUN_180bb1f20(*(undefined8 *)(param_1 + 0x178),0x96,
                          *(int *)(*(longlong *)(param_1 + 0x178) + 0x18) + -0x96,
                          MR_System.Collections.Generic.List<SparkRadarWindow.Candidato>.RemoveRange);
          }
          return;
        }
      }
      goto code_r0x0001806e6234;
    }
    lVar6 = SparkRadarWindow__DicionarioDoMundo__1806e8d30(param_1,lVar7,0);
    if (lVar6 == 0) {
      if ((lVar7 == 0) || (lVar7 = WorldSpawner__get_Entidades(lVar7,0), lVar7 == 0))
      goto code_r0x0001806e6234;
      plStack_90 = (longlong *)FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<Entity>,lVar7);
      uStack_58 = 0;
      pplStack_50 = &plStack_90;
      while (plVar1 = plStack_90, plStack_90 != (longlong *)0x0) {
        lVar7 = *plStack_90;
        if (*(ushort *)(lVar7 + 0x12e) != 0) {
          uVar10 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar10 * 0x10) == TI_System.Collections.IEnumerator) {
              puVar5 = (undefined8 *)
                       ((longlong)*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar10 * 0x10) * 0x10 +
                        0x138 + lVar7);
              goto code_r0x0001806e5fd6;
            }
            uVar9 = (short)uVar10 + 1;
            uVar10 = (ulonglong)uVar9;
          } while (uVar9 < *(ushort *)(lVar7 + 0x12e));
        }
        puVar5 = (undefined8 *)FUN_180312860(plStack_90,TI_System.Collections.IEnumerator,0);
code_r0x0001806e5fd6:
        cVar3 = (*(code *)*puVar5)(plVar1,puVar5[1]);
        plVar1 = plStack_90;
        if (cVar3 == '\0') {
          if (plStack_90 != (longlong *)0x0) {
            FUN_180002390(0,TI_System.IDisposable,plStack_90);
          }
          goto code_r0x0001806e6111;
        }
        if (plStack_90 == (longlong *)0x0) goto code_r0x0001806e6252;
        lVar7 = *plStack_90;
        if (*(ushort *)(lVar7 + 0x12e) != 0) {
          uVar10 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar10 * 0x10) == TI_System.Collections.Generic.IEnumerator<Entity>)
            {
              puVar5 = (undefined8 *)
                       ((longlong)*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar10 * 0x10) * 0x10 +
                        0x138 + lVar7);
              goto code_r0x0001806e6042;
            }
            uVar9 = (short)uVar10 + 1;
            uVar10 = (ulonglong)uVar9;
          } while (uVar9 < *(ushort *)(lVar7 + 0x12e));
        }
        puVar5 = (undefined8 *)FUN_180312860(plStack_90,TI_System.Collections.Generic.IEnumerator<Entity>,0);
code_r0x0001806e6042:
        uVar8 = (*(code *)*puVar5)(plVar1,puVar5[1]);
        uStack_68 = *param_2;
        uStack_60 = *(undefined4 *)(param_2 + 1);
        SparkRadarWindow__Considera__1806e6b40(param_1,uVar8,&uStack_68,fVar13,0);
      }
      goto code_r0x0001806e6257;
    }
    plStack_98 = (longlong *)FUN_181132de0(lVar6,MR_System.Collections.Concurrent.ConcurrentDictionary<int,Entity>.GetEnumerator);
    uStack_58 = 0;
    pplStack_50 = &plStack_98;
    while (plVar1 = plStack_98, plStack_98 != (longlong *)0x0) {
      lVar7 = *plStack_98;
      if (*(ushort *)(lVar7 + 0x12e) != 0) {
        uVar10 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar10 * 0x10) == TI_System.Collections.IEnumerator) {
            puVar5 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar10 * 0x10) * 0x10 +
                      0x138 + lVar7);
            goto code_r0x0001806e5de6;
          }
          uVar9 = (short)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 < *(ushort *)(lVar7 + 0x12e));
      }
      puVar5 = (undefined8 *)FUN_180312860(plStack_98,TI_System.Collections.IEnumerator,0);
code_r0x0001806e5de6:
      cVar3 = (*(code *)*puVar5)(plVar1,puVar5[1]);
      plVar1 = plStack_98;
      if (cVar3 == '\0') {
        if (plStack_98 != (longlong *)0x0) {
          FUN_180002390(0,TI_System.IDisposable,plStack_98);
        }
        goto code_r0x0001806e6111;
      }
      if (plStack_98 == (longlong *)0x0) goto code_r0x0001806e6240;
      lVar7 = *plStack_98;
      if (*(ushort *)(lVar7 + 0x12e) != 0) {
        uVar10 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar10 * 0x10) == TI_System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<int,Entity>>) {
            puVar5 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar10 * 0x10) * 0x10 +
                      0x138 + lVar7);
            goto code_r0x0001806e5e52;
          }
          uVar9 = (short)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 < *(ushort *)(lVar7 + 0x12e));
      }
      puVar5 = (undefined8 *)FUN_180312860(plStack_98,TI_System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<int,Entity>>,0);
code_r0x0001806e5e52:
      lVar7 = (*(code *)*puVar5)(auStack_48,plVar1,puVar5[1]);
      uStack_68 = *param_2;
      uStack_60 = *(undefined4 *)(param_2 + 1);
      SparkRadarWindow__Considera__1806e6b40(param_1,*(undefined8 *)(lVar7 + 8),&uStack_68,fVar13,0)
      ;
    }
  }
  else {
    FUN_1803155c0();
code_r0x0001806e6240:
    FUN_1803155d0();
  }
  FUN_1803155d0();
  FUN_180311490();
code_r0x0001806e6252:
  FUN_1803155d0();
code_r0x0001806e6257:
  FUN_1803155d0();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

