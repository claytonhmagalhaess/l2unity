// SparkDetalhePersonagem__Passo__1804983a0 @ 0x1804983a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkDetalhePersonagem__Passo__1804983a0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  uint auStackX_18 [2];
  uint uStackX_20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  if (cRam00000001834b327b == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.Application);
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.Mesh,UnityEngine.Mesh__>.ContainsKey);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.Mesh,UnityEngine.Mesh__>.set_Item);
    FUN_180315380(MR_System.Collections.Generic.HashSet<UnityEngine.Mesh>.Remove);
    FUN_180315380(MR_System.Collections.Generic.List<SparkDetalhePersonagem.Trabalho>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<SparkDetalhePersonagem.Trabalho>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<SparkDetalhePersonagem.Trabalho>.get_Item);
    FUN_180315380(TI_UnityMeshSimplifier.MeshSimplifier__);
    FUN_180315380(TI_UnityMeshSimplifier.MeshSimplifier);
    FUN_180315380(TI_UnityEngine.Mesh__);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_System.Collections.Generic.Queue<UnityEngine.Mesh>.Dequeue);
    FUN_180315380(MR_System.Collections.Generic.Queue<UnityEngine.Mesh>.get_Count);
    FUN_180315380(TI_SparkDetalhePersonagem);
    FUN_180315380(TI_System.Threading.Tasks.Task);
    FUN_180315380(TI_SparkDetalhePersonagem.Trabalho);
    FUN_180315380(MD_SparkDetalhePersonagem.__c__DisplayClass46_0._Passo_b__0);
    FUN_180315380(TI_SparkDetalhePersonagem.<>c__DisplayClass46_0);
    FUN_180315380(LIT_"': '");
    FUN_180315380(LIT_"' LOD'");
    FUN_180315380(LIT_"'[SparkDetalhePersonagem] could not simplify '");
    FUN_180315380(LIT_"'?'");
    cRam00000001834b327b = '\x01';
  }
  uVar11 = 0;
  auStackX_18[0] = 0;
  lVar6 = *(longlong *)(param_1 + 0x80);
  uVar14 = uVar11;
  while (lVar6 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x80);
    if (*(int *)(lVar6 + 0x18) <= (int)uVar14) {
      uStackX_20 = 0;
      uVar14 = uVar11;
      if (lVar7 != 0) goto code_r0x000180498897;
      break;
    }
    if ((lVar7 == 0) || (lVar6 = FUN_180bbafe0(lVar7,uVar14,MR_System.Collections.Generic.List<SparkDetalhePersonagem.Trabalho>.get_Item), lVar6 == 0))
    break;
    if ((*(longlong *)(lVar6 + 0x28) != 0) &&
       (cVar5 = System_Threading_Tasks_Task__get_IsCompleted(*(undefined8 *)(lVar6 + 0x28),0),
       cVar5 != '\0')) {
      if (*(longlong *)(lVar6 + 0x28) == 0) break;
      cVar5 = System_Threading_Tasks_Task__get_IsFaulted(*(longlong *)(lVar6 + 0x28),0);
      if (cVar5 == '\0') {
        uVar13 = *(undefined8 *)(lVar6 + 0x10);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Equality(uVar13,0,0);
        if (cVar5 == '\0') {
          lVar7 = *(longlong *)(lVar6 + 0x18);
          if (lVar7 == 0) break;
          uVar1 = *(uint *)(lVar6 + 0x38);
          lVar16 = (longlong)(int)uVar1;
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            lVar7 = *(longlong *)(lVar7 + 0x20 + lVar16 * 8);
            if (lVar7 == 0) break;
            lVar7 = UnityMeshSimplifier_MeshSimplifier__ToMesh(lVar7,0);
            if (*(longlong *)(lVar6 + 0x10) == 0) break;
            uVar13 = func_0x00018242cb90(*(longlong *)(lVar6 + 0x10),0);
            auStackX_18[0] = uVar1 + 1;
            uVar8 = System_Int32__ToString(auStackX_18,0);
            uVar13 = System_String__Concat(uVar13,LIT_"' LOD'",uVar8,0);
            if (lVar7 == 0) break;
            func_0x00018242cf20(lVar7,uVar13,0);
            if (*(longlong *)(lVar6 + 0x10) == 0) break;
            puVar9 = (undefined4 *)
                     UnityEngine_Mesh__get_bounds(&uStack_98,*(longlong *)(lVar6 + 0x10),0);
            uStack_68 = *puVar9;
            uStack_64 = puVar9[1];
            uStack_60 = puVar9[2];
            uStack_5c = puVar9[3];
            uStack_58 = *(undefined8 *)(puVar9 + 4);
            UnityEngine_Mesh__set_bounds(lVar7,&uStack_68,0);
            lVar2 = *(longlong *)(lVar6 + 0x30);
            if (lVar2 == 0) break;
            if (uVar1 < *(uint *)(lVar2 + 0x18)) {
              *(longlong *)(lVar2 + 0x20 + lVar16 * 8) = lVar7;
              func_0x000180314690(lVar2 + lVar16 * 8 + 0x20,lVar7);
              iVar15 = *(int *)(lVar6 + 0x38) + 1;
              *(int *)(lVar6 + 0x38) = iVar15;
              if (*(int *)(TI_SparkDetalhePersonagem + 0xe4) == 0) {
                func_0x000180315660(TI_SparkDetalhePersonagem);
              }
              lVar7 = *(longlong *)(*(longlong *)(TI_SparkDetalhePersonagem + 0xb8) + 8);
              if (lVar7 != 0) {
                if (iVar15 < *(int *)(lVar7 + 0x18)) {
                  return 1;
                }
                uVar13 = *(undefined8 *)(lVar6 + 0x30);
                goto code_r0x000180498708;
              }
              break;
            }
          }
          FUN_1803155c0();
          goto code_r0x000180498e77;
        }
      }
      if (*(longlong *)(lVar6 + 0x28) == 0) break;
      cVar5 = System_Threading_Tasks_Task__get_IsFaulted(*(longlong *)(lVar6 + 0x28),0);
      if ((cVar5 != '\0') && (*(char *)(param_1 + 0x90) == '\0')) {
        *(undefined1 *)(param_1 + 0x90) = 1;
        uVar13 = *(undefined8 *)(lVar6 + 0x10);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = UnityEngine_Object__op_Inequality(uVar13,0,0);
        uVar13 = LIT_"'[SparkDetalhePersonagem] could not simplify '";
        uVar8 = LIT_"'?'";
        if (cVar5 != '\0') {
          if (*(longlong *)(lVar6 + 0x10) == 0) break;
          uVar8 = func_0x00018242cb90(*(longlong *)(lVar6 + 0x10),0);
        }
        if (*(longlong *)(lVar6 + 0x28) == 0) break;
        plVar10 = (longlong *)
                  System_Threading_Tasks_Task__get_Exception(*(longlong *)(lVar6 + 0x28),0);
        uVar4 = LIT_"': '";
        if (plVar10 != (longlong *)0x0) {
          plVar10 = (longlong *)
                    (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
          if (plVar10 == (longlong *)0x0) break;
          uVar11 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
        }
        uVar13 = System_String__Concat(uVar13,uVar8,uVar4,uVar11,0);
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        UnityEngine_Debug__LogWarning(uVar13,0);
      }
      if (*(int *)(TI_SparkDetalhePersonagem + 0xe4) == 0) {
        func_0x000180315660(TI_SparkDetalhePersonagem);
      }
      lVar6 = *(longlong *)(*(longlong *)(TI_SparkDetalhePersonagem + 0xb8) + 8);
      if (lVar6 != 0) {
        uVar13 = func_0x000180314710(TI_UnityEngine.Mesh__,*(undefined4 *)(lVar6 + 0x18));
        goto code_r0x000180498708;
      }
      break;
    }
    uVar14 = (ulonglong)((int)uVar14 + 1);
    lVar6 = *(longlong *)(param_1 + 0x80);
  }
  goto code_r0x000180498e6b;
joined_r0x000180498c27:
  if (lVar6 == 0) goto code_r0x000180498e6b;
  if (*(int *)(lVar6 + 0x20) < 1) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x80) == 0) goto code_r0x000180498e6b;
  if (1 < *(int *)(*(longlong *)(param_1 + 0x80) + 0x18)) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x70) == 0) goto code_r0x000180498e6b;
  lVar6 = FUN_180d5bb00(*(longlong *)(param_1 + 0x70),MR_System.Collections.Generic.Queue<UnityEngine.Mesh>.Dequeue);
  if (*(longlong *)(param_1 + 0x78) == 0) goto code_r0x000180498e6b;
  FUN_1814dc790(*(longlong *)(param_1 + 0x78),lVar6,MR_System.Collections.Generic.HashSet<UnityEngine.Mesh>.Remove);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar5 = UnityEngine_Object__op_Equality(lVar6,0,0);
  if (cVar5 == '\0') {
    if (*(longlong *)(param_1 + 0x68) == 0) goto code_r0x000180498e6b;
    cVar5 = FUN_18124cf10(*(longlong *)(param_1 + 0x68),lVar6,MR_System.Collections.Generic.Dictionary<UnityEngine.Mesh,UnityEngine.Mesh__>.ContainsKey);
    if (cVar5 == '\0') {
      if (lVar6 != 0) {
        cVar5 = UnityEngine_Mesh__get_isReadable(lVar6,0);
        if (cVar5 == '\0') {
          if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar5 = func_0x000180a870f0(0);
          if (cVar5 == '\0') {
            lVar7 = *(longlong *)(param_1 + 0x68);
            if (*(int *)(TI_SparkDetalhePersonagem + 0xe4) == 0) {
              func_0x000180315660(TI_SparkDetalhePersonagem);
            }
            lVar16 = *(longlong *)(*(longlong *)(TI_SparkDetalhePersonagem + 0xb8) + 8);
            if ((lVar16 != 0) &&
               (uVar13 = func_0x000180314710(TI_UnityEngine.Mesh__,*(undefined4 *)(lVar16 + 0x18)),
               lVar7 != 0)) {
              FUN_18126c020(lVar7,lVar6,uVar13,MR_System.Collections.Generic.Dictionary<UnityEngine.Mesh,UnityEngine.Mesh__>.set_Item);
              goto code_r0x000180498d79;
            }
            goto code_r0x000180498e6b;
          }
        }
        lVar7 = *(longlong *)(param_1 + 0x80);
        lVar16 = func_0x000180315580(TI_SparkDetalhePersonagem.Trabalho);
        func_0x0001803dadf0(lVar16,0);
        if (lVar16 != 0) {
          *(longlong *)(lVar16 + 0x10) = lVar6;
          func_0x000180314690(lVar16 + 0x10,lVar6);
          if (*(int *)(TI_SparkDetalhePersonagem + 0xe4) == 0) {
            func_0x000180315660(TI_SparkDetalhePersonagem);
          }
          lVar6 = *(longlong *)(*(longlong *)(TI_SparkDetalhePersonagem + 0xb8) + 8);
          if (lVar6 != 0) {
            uVar13 = func_0x000180314710(TI_UnityMeshSimplifier.MeshSimplifier__,*(undefined4 *)(lVar6 + 0x18));
            *(undefined8 *)(lVar16 + 0x18) = uVar13;
            func_0x000180314690(lVar16 + 0x18,uVar13);
            lVar6 = *(longlong *)(*(longlong *)(TI_SparkDetalhePersonagem + 0xb8) + 8);
            if (lVar6 != 0) {
              uVar13 = func_0x000180314710(TI_UnityEngine.Mesh__,*(undefined4 *)(lVar6 + 0x18));
              *(undefined8 *)(lVar16 + 0x30) = uVar13;
              func_0x000180314690(lVar16 + 0x30,uVar13);
              if (lVar7 != 0) {
                FUN_180002eb0(lVar7,lVar16,MR_System.Collections.Generic.List<SparkDetalhePersonagem.Trabalho>.Add);
                return 1;
              }
            }
          }
        }
      }
      goto code_r0x000180498e6b;
    }
  }
code_r0x000180498d79:
  lVar6 = *(longlong *)(param_1 + 0x70);
  goto joined_r0x000180498c27;
  while( true ) {
    uStackX_20 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uStackX_20;
    lVar7 = *(longlong *)(param_1 + 0x80);
    if (lVar7 == 0) break;
code_r0x000180498897:
    if (*(int *)(lVar7 + 0x18) <= (int)uVar14) {
      lVar6 = *(longlong *)(param_1 + 0x70);
      goto joined_r0x000180498c27;
    }
    if ((*(longlong *)(param_1 + 0x80) == 0) ||
       (lVar6 = FUN_180bbafe0(*(longlong *)(param_1 + 0x80),uVar14,MR_System.Collections.Generic.List<SparkDetalhePersonagem.Trabalho>.get_Item), lVar6 == 0
       )) break;
    if (*(longlong *)(lVar6 + 0x28) == 0) {
      uVar13 = *(undefined8 *)(lVar6 + 0x10);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar5 = UnityEngine_Object__op_Equality(uVar13,0,0);
      if (cVar5 == '\0') {
        lVar7 = func_0x000180315580(TI_UnityMeshSimplifier.MeshSimplifier);
        UnityMeshSimplifier_MeshSimplifier___ctor(lVar7,0);
        if (*(int *)(TI_SparkDetalhePersonagem + 0xe4) == 0) {
          func_0x000180315660();
        }
        puVar12 = (undefined8 *)SparkDetalhePersonagem__Opcoes__180498310(&uStack_68,0);
        if (lVar7 == 0) goto code_r0x000180498e81;
        uStack_98 = *puVar12;
        uStack_90 = puVar12[1];
        uStack_88 = *(undefined4 *)(puVar12 + 2);
        uStack_84 = *(undefined4 *)((longlong)puVar12 + 0x14);
        uStack_80 = *(undefined4 *)(puVar12 + 3);
        uStack_7c = *(undefined4 *)((longlong)puVar12 + 0x1c);
        uStack_78 = puVar12[4];
        UnityMeshSimplifier_MeshSimplifier__set_SimplificationOptions(lVar7,&uStack_98,0);
        UnityMeshSimplifier_MeshSimplifier__Initialize(lVar7,*(undefined8 *)(lVar6 + 0x10),0);
        lVar16 = *(longlong *)(lVar6 + 0x18);
        auStackX_18[0] = *(uint *)(lVar6 + 0x20);
        *(uint *)(lVar6 + 0x20) = auStackX_18[0] + 1;
        if (lVar16 == 0) goto code_r0x000180498e7c;
        if (*(uint *)(lVar16 + 0x18) <= auStackX_18[0]) {
code_r0x000180498e77:
          FUN_1803155c0();
code_r0x000180498e7c:
          FUN_1803155d0();
code_r0x000180498e81:
          FUN_1803155d0();
          pcVar3 = (code *)swi(3);
          uVar13 = (*pcVar3)();
          return uVar13;
        }
        *(longlong *)(lVar16 + 0x20 + (longlong)(int)auStackX_18[0] * 8) = lVar7;
        func_0x000180314690(lVar16 + (longlong)(int)auStackX_18[0] * 8 + 0x20,lVar7);
        iVar15 = *(int *)(lVar6 + 0x20);
        if (*(int *)(TI_SparkDetalhePersonagem + 0xe4) == 0) {
          func_0x000180315660(TI_SparkDetalhePersonagem);
        }
        lVar7 = *(longlong *)(*(longlong *)(TI_SparkDetalhePersonagem + 0xb8) + 8);
        if (lVar7 != 0) {
          if (iVar15 < *(int *)(lVar7 + 0x18)) {
            return 1;
          }
          lVar7 = func_0x000180315580(TI_SparkDetalhePersonagem.<>c__DisplayClass46_0);
          func_0x0001803dadf0(lVar7,0);
          if (lVar7 != 0) {
            *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar6 + 0x18);
            func_0x000180314690(lVar7 + 0x10);
            uVar13 = func_0x000180315580(TI_System.Action);
            FUN_1816a9c60(uVar13,lVar7,MD_SparkDetalhePersonagem.__c__DisplayClass46_0._Passo_b__0,0);
            if (*(int *)(TI_System.Threading.Tasks.Task + 0xe4) == 0) {
              func_0x000180315660();
            }
            uVar13 = System_Threading_Tasks_Task__Run(uVar13,0);
            *(undefined8 *)(lVar6 + 0x28) = uVar13;
            func_0x000180314690(lVar6 + 0x28,uVar13);
            return 1;
          }
        }
      }
      else {
        if (*(int *)(TI_SparkDetalhePersonagem + 0xe4) == 0) {
          func_0x000180315660(TI_SparkDetalhePersonagem);
        }
        lVar6 = *(longlong *)(*(longlong *)(TI_SparkDetalhePersonagem + 0xb8) + 8);
        if (lVar6 != 0) {
          uVar13 = func_0x000180314710(TI_UnityEngine.Mesh__,*(undefined4 *)(lVar6 + 0x18));
code_r0x000180498708:
          SparkDetalhePersonagem__Termina__180498f60(param_1,uVar14,uVar13,0);
          return 1;
        }
      }
      break;
    }
  }
code_r0x000180498e6b:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar13 = (*pcVar3)();
  return uVar13;
}

