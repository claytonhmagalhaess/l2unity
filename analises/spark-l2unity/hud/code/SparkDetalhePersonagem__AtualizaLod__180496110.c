// SparkDetalhePersonagem__AtualizaLod__180496110 @ 0x180496110

void SparkDetalhePersonagem__AtualizaLod__180496110
               (longlong param_1,undefined8 *param_2,float param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 auStack_98 [112];
  
  if (cRam00000001834b3275 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.get_Count);
    FUN_180315380(TI_SparkDetalhePersonagem);
    FUN_180315380(TI_SparkMultidao);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3275 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x48) == '\0') {
    if (*(longlong *)(param_1 + 0x58) != 0) {
      iVar7 = func_0x000181183c40(*(longlong *)(param_1 + 0x58),MR_System.Collections.Generic.Dictionary<UnityEngine.SkinnedMeshRenderer,SparkDetalhePersonagem.Lod>.get_Count);
      if (iVar7 < 1) {
        return;
      }
      SparkDetalhePersonagem__DesfazLods__180496ba0(param_1,0);
      return;
    }
  }
  else {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b329e == '\0') {
      FUN_180315380(TI_SparkOpcoes);
      cRam00000001834b329e = '\x01';
    }
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    fVar14 = (float)SparkOpcoes__get_FatorDeDetalhe__1804a9ab0(0);
    if (cRam00000001834b329f == '\0') {
      FUN_180315380(TI_SparkOpcoes);
      cRam00000001834b329f = '\x01';
    }
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    fVar15 = (float)SparkOpcoes__get_FatorDeDetalhe__1804a9ab0(0);
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (lVar1 != 0) {
      uVar12 = 0;
      do {
        if (*(int *)(lVar1 + 0x18) <= (int)uVar12) {
          return;
        }
        if (*(uint *)(lVar1 + 0x18) <= uVar12) {
          FUN_1803155c0();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)(lVar1 + 0x20 + (longlong)(int)uVar12 * 8);
        if (*(int *)(TI_SparkDetalhePersonagem + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (cRam00000001834b3274 == '\0') {
          FUN_180315380(TI_NetworkHumanoidEntity);
          FUN_180315380(TI_PlayerEntity);
          FUN_180315380(TI_SparkDetalhePersonagem);
          cRam00000001834b3274 = '\x01';
        }
        if (*(int *)(TI_SparkDetalhePersonagem + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar5 = SparkDetalhePersonagem__Conta__180496a50(plVar2,0);
        if ((cVar5 != '\0') && (plVar2 != (longlong *)0x0)) {
          lVar9 = *plVar2;
          if ((*(byte *)(lVar9 + 0x130) < *(byte *)(TI_PlayerEntity + 0x130)) ||
             (*(longlong *)
               (*(longlong *)(lVar9 + 200) + -8 +
               (ulonglong)*(byte *)(TI_PlayerEntity + 0x130) * 8) != TI_PlayerEntity)) {
            if ((*(byte *)(lVar9 + 0x130) < *(byte *)(TI_NetworkHumanoidEntity + 0x130)) ||
               (*(longlong *)
                 (*(longlong *)(lVar9 + 200) + -8 +
                 (ulonglong)*(byte *)(TI_NetworkHumanoidEntity + 0x130) * 8) != TI_NetworkHumanoidEntity)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            plVar8 = (longlong *)0x0;
            if (bVar4) {
              plVar8 = plVar2;
            }
            if (plVar8 == (longlong *)0x0) goto code_r0x0001804964dd;
          }
          if (*(int *)(TI_SparkMultidao + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar5 = SparkMultidao__Contem(plVar2);
          if (cVar5 == '\0') {
            lVar9 = SparkDetalhePersonagem__EstadoDe__180497180(param_1,plVar2,0);
            lVar10 = UnityEngine_Component__get_transform(plVar2,0);
            if (lVar10 == 0) break;
            uStack_b0 = *(undefined4 *)(param_2 + 1);
            uStack_b8 = *param_2;
            puVar11 = (undefined8 *)UnityEngine_Transform__get_position(auStack_98,lVar10,0);
            uStack_a8 = *puVar11;
            uStack_a0 = *(undefined4 *)(puVar11 + 1);
            fVar16 = (float)FUN_180416d40(&uStack_a8,&uStack_b8,0);
            if (lVar9 == 0) break;
            if (*(int *)(lVar9 + 0x18) < 1) {
              uVar13 = (uint)(fVar14 * 15.0 < fVar16);
code_r0x000180496485:
              fVar17 = 1.0;
            }
            else {
              uVar13 = (uint)(fVar14 * 15.0 * 0.9 < fVar16);
              if (*(uint *)(lVar9 + 0x18) < 2) goto code_r0x000180496485;
              fVar17 = 0.9;
            }
            if (fVar17 * fVar15 * 30.0 < fVar16) {
              uVar13 = 2;
            }
            if (((uVar13 != *(uint *)(lVar9 + 0x18)) || (*(char *)(lVar9 + 0x1c) != '\0')) ||
               (*(float *)(lVar9 + 0x20) <= param_3)) {
              *(uint *)(lVar9 + 0x18) = uVar13;
              fVar16 = (float)FUN_18242f8d0(0);
              *(float *)(lVar9 + 0x20) = fVar16 + param_3 + 2.0;
              bVar6 = SparkDetalhePersonagem__AplicaLod__1804959e0(param_1,plVar2,uVar13,0);
              *(byte *)(lVar9 + 0x1c) = bVar6 ^ 1;
            }
          }
        }
code_r0x0001804964dd:
        uVar12 = uVar12 + 1;
      } while( true );
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

