// SparkDetalhePersonagem__AtualizaSombras__180496580 @ 0x180496580

void SparkDetalhePersonagem__AtualizaSombras__180496580
               (longlong param_1,float *param_2,float param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  if (cRam00000001834b326f == '\0') {
    FUN_180315380(TI_System.Comparison<System.Collections.Generic.KeyValuePair<float,Entity>>);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<float,Entity>..ctor);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<float,Entity>.get_Value);
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<float,Entity>>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<float,Entity>>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<float,Entity>>.Sort);
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<float,Entity>>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<float,Entity>>.get_Item);
    FUN_180315380(TI_SparkDetalhePersonagem);
    FUN_180315380(TI_SparkMultidao);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(MD_SparkDetalhePersonagem.__c._AtualizaSombras_b__18_0);
    FUN_180315380(TI_SparkDetalhePersonagem.<>c);
    cRam00000001834b326f = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x24) == 0) {
    return;
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar8 = *(longlong *)(param_1 + 0x50);
  if (lVar8 != 0) {
    iVar10 = *(int *)(lVar8 + 0x18);
    iVar1 = *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x3c);
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    *(undefined4 *)(lVar8 + 0x18) = 0;
    if (0 < iVar10) {
      System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar10,0);
    }
    lVar8 = *(longlong *)(param_1 + 0x20);
    if (lVar8 != 0) {
      for (uVar11 = 0; (int)uVar11 < *(int *)(lVar8 + 0x18); uVar11 = uVar11 + 1) {
        if (*(uint *)(lVar8 + 0x18) <= uVar11) {
          FUN_1803155c0();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar7 = *(longlong *)(lVar8 + 0x20 + (longlong)(int)uVar11 * 8);
        if (*(int *)(TI_SparkDetalhePersonagem + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = SparkDetalhePersonagem__Conta__180496a50(lVar7,0);
        if (cVar4 != '\0') {
          if ((lVar7 == 0) || (lVar5 = UnityEngine_Component__get_transform(lVar7,0), lVar5 == 0))
          goto code_r0x000180496a48;
          pfVar6 = (float *)UnityEngine_Transform__get_position(auStack_78,lVar5,0);
          fVar12 = (pfVar6[1] - param_2[1]) * (pfVar6[1] - param_2[1]) +
                   (*pfVar6 - *param_2) * (*pfVar6 - *param_2) +
                   (pfVar6[2] - param_2[2]) * (pfVar6[2] - param_2[2]);
          if (iVar1 == 1) {
            lVar5 = SparkDetalhePersonagem__EstadoDe__180497180(param_1,lVar7,0);
            if (lVar5 == 0) goto code_r0x000180496a48;
            if (*(char *)(lVar5 + 0x10) != '\0') {
              fVar12 = fVar12 * 0.81;
            }
          }
          lVar5 = *(longlong *)(param_1 + 0x50);
          uStack_68 = 0;
          uStack_60 = 0;
          func_0x0001803dc890(&uStack_68,fVar12,lVar7);
          if (lVar5 == 0) {
            FUN_1803155d0();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uStack_58 = (undefined4)uStack_68;
          uStack_54 = uStack_68._4_4_;
          uStack_50 = (undefined4)uStack_60;
          uStack_4c = uStack_60._4_4_;
          FUN_1800052b0();
        }
      }
      if (iVar1 == 1) {
        lVar8 = *(longlong *)(param_1 + 0x50);
        if (*(int *)(TI_SparkDetalhePersonagem.<>c + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar7 = *(longlong *)(*(longlong *)(TI_SparkDetalhePersonagem.<>c + 0xb8) + 8);
        if (lVar7 == 0) {
          if (*(int *)(TI_SparkDetalhePersonagem.<>c + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar2 = **(undefined8 **)(TI_SparkDetalhePersonagem.<>c + 0xb8);
          lVar7 = func_0x000180315580(TI_System.Comparison<System.Collections.Generic.KeyValuePair<float,Entity>>);
          FUN_180e56940(lVar7,uVar2,MD_SparkDetalhePersonagem.__c._AtualizaSombras_b__18_0,0);
          *(longlong *)(*(longlong *)(TI_SparkDetalhePersonagem.<>c + 0xb8) + 8) = lVar7;
          func_0x000180314690(*(longlong *)(TI_SparkDetalhePersonagem.<>c + 0xb8) + 8,lVar7);
        }
        if (lVar8 == 0) goto code_r0x000180496a48;
        FUN_180bb3030(lVar8,lVar7,MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<float,Entity>>.Sort);
      }
      iVar10 = 0;
      lVar8 = *(longlong *)(param_1 + 0x50);
      while (lVar8 != 0) {
        if (*(int *)(lVar8 + 0x18) <= iVar10) {
          return;
        }
        if (*(longlong *)(param_1 + 0x50) == 0) break;
        FUN_180bbaf80(&uStack_58,*(longlong *)(param_1 + 0x50),iVar10,MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<float,Entity>>.get_Item);
        uVar2 = CONCAT44(uStack_4c,uStack_50);
        if (*(int *)(TI_SparkMultidao + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = SparkMultidao__Contem(uVar2,0);
        if (cVar4 == '\0') {
          if (iVar1 == 0) {
            bVar9 = true;
          }
          else if (iVar1 == 1) {
            bVar9 = iVar10 < 0x14;
          }
          else {
            bVar9 = false;
          }
          lVar8 = SparkDetalhePersonagem__EstadoDe__180497180(param_1,uVar2,0);
          if (lVar8 == 0) break;
          if (((bVar9 != (bool)*(char *)(lVar8 + 0x10)) || (*(char *)(lVar8 + 0x11) == '\0')) ||
             ((bVar9 == false && (*(float *)(lVar8 + 0x14) <= param_3)))) {
            *(bool *)(lVar8 + 0x10) = bVar9;
            *(undefined1 *)(lVar8 + 0x11) = 1;
            fVar12 = (float)FUN_18242f8d0(0);
            *(float *)(lVar8 + 0x14) = fVar12 + param_3 + 2.0;
            SparkDetalhePersonagem__AplicaSombra__180495e60(param_1,uVar2,bVar9,0);
          }
        }
        iVar10 = iVar10 + 1;
        lVar8 = *(longlong *)(param_1 + 0x50);
      }
    }
  }
code_r0x000180496a48:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

