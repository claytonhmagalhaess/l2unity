// SparkTextoDano__Anda__180746a10 @ 0x180746a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkTextoDano__Anda__180746a10(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 auStackX_18 [2];
  float fStackX_20;
  float fVar28;
  undefined8 uStack_188;
  float fStack_180;
  float fStack_178;
  float fStack_174;
  undefined4 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [176];
  
  if (cRam00000001834b42b6 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,int>.Clear);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkTextoDano);
    cRam00000001834b42b6 = '\x01';
  }
  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(longlong *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x128) != 0) {
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar12 = *(longlong *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x128);
    if (lVar12 == 0) goto code_r0x00018074731b;
    lVar12 = func_0x0001825d76c0(lVar12,0);
    if (lVar12 != 0) {
      lVar12 = UnityEngine_Camera__get_main(0);
      uVar21 = 0;
      fVar22 = (float)FUN_182436650(0);
      uVar19 = 0;
      do {
        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar18 = *(longlong *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x110);
        if (lVar18 == 0) goto code_r0x00018074731b;
        if (*(uint *)(lVar18 + 0x18) <= (uint)uVar19) goto code_r0x000180747315;
        lVar18 = *(longlong *)(lVar18 + 0x20 + uVar19 * 8);
        if (lVar18 == 0) goto code_r0x00018074731b;
        if (*(char *)(lVar18 + 0x58) != '\0') {
          lVar14 = *(longlong *)(lVar18 + 0x48);
          if (lVar14 == 0) goto code_r0x00018074731b;
          iVar11 = *(int *)(lVar14 + 0x18) / 5;
          fVar26 = (fVar22 - *(float *)(lVar18 + 0x44)) * 30.0 + 1.0;
          if ((int)fVar26 < iVar11 + -1) {
            uVar15 = *(undefined8 *)(lVar18 + 0x28);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar10 = UnityEngine_Object__op_Inequality(uVar15,0,0);
            if (cVar10 != '\0') {
              uVar15 = *(undefined8 *)(lVar18 + 0x28);
              if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                func_0x000180315660();
              }
              if (cRam00000001834b42a6 == '\0') {
                FUN_180315380(TI_SparkMontaria);
                cRam00000001834b42a6 = '\x01';
              }
              uStack_188 = 0;
              fStack_180 = 0.0;
              auStackX_18[0] = 0;
              if (*(int *)(TI_SparkMontaria + 0xe4) == 0) {
                func_0x000180315660();
              }
              SparkMontaria__Corpo(uVar15,&uStack_188,auStackX_18,0);
              if (DAT_1834b2f30 == '\0') {
                FUN_180315380(TI_UnityEngine.Vector3);
                DAT_1834b2f30 = '\x01';
              }
              fVar23 = *(float *)(lVar18 + 0x34);
              lVar13 = *(longlong *)(TI_UnityEngine.Vector3 + 0xb8);
              fVar1 = *(float *)(lVar13 + 0x20);
              fVar2 = *(float *)(lVar13 + 0x18);
              *(float *)(lVar18 + 0x3c) = fVar23 * *(float *)(lVar13 + 0x1c) + uStack_188._4_4_;
              *(float *)(lVar18 + 0x40) = fVar23 * fVar1 + fStack_180;
              *(float *)(lVar18 + 0x38) = fVar23 * fVar2 + (float)uStack_188;
            }
            uVar21 = 1;
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar10 = UnityEngine_Object__op_Equality(lVar12,0);
            if (cVar10 == '\0') {
              if (lVar12 == 0) goto code_r0x00018074731b;
              uStack_168 = *(undefined8 *)(lVar18 + 0x38);
              uStack_160 = *(undefined4 *)(lVar18 + 0x40);
              lVar13 = UnityEngine_Camera__WorldToScreenPoint(auStack_e8,lVar12,&uStack_168,0);
              if (*(float *)(lVar13 + 8) <= 0.0) {
                if (*(longlong *)(lVar18 + 0x10) == 0) goto code_r0x00018074731b;
                lVar18 = UnityEngine_UIElements_VisualElement__get_style
                                   (*(longlong *)(lVar18 + 0x10),0);
                func_0x000182601c10();
                if (lVar18 == 0) goto code_r0x00018074731b;
              }
              else {
                iVar11 = iVar11 + -1;
                iVar8 = (int)fVar26 + 1;
                if (iVar11 <= (int)fVar26 + 1) {
                  iVar8 = iVar11;
                }
                uVar20 = (int)fVar26 * 5;
                if ((*(uint *)(lVar14 + 0x18) <= uVar20) ||
                   (uVar9 = iVar8 * 5, *(uint *)(lVar14 + 0x18) <= uVar9)) {
code_r0x000180747327:
                  FUN_1803155c0();
                  pcVar7 = (code *)swi(3);
                  uVar19 = (*pcVar7)();
                  return uVar19;
                }
                fVar26 = fVar26 - (float)(int)fVar26;
                fStackX_20 = *(float *)(lVar14 + 0x20 + (longlong)(int)uVar20 * 4);
                if (fVar26 < 0.0) {
                  fVar23 = 0.0;
                }
                else {
                  fVar23 = fVar26;
                  if (1.0 < fVar26) {
                    fVar23 = 1.0;
                  }
                }
                if ((*(uint *)(lVar14 + 0x18) <= uVar20 + 1) ||
                   (*(uint *)(lVar14 + 0x18) <= uVar9 + 1)) goto code_r0x000180747327;
                fVar1 = *(float *)(lVar14 + 0x24 + (longlong)(int)uVar20 * 4);
                fVar2 = *(float *)(lVar14 + 0x24 + (longlong)(int)uVar9 * 4);
                if (fVar26 < 0.0) {
                  fVar24 = 0.0;
                }
                else {
                  fVar24 = fVar26;
                  if (1.0 < fVar26) {
                    fVar24 = 1.0;
                  }
                }
                if ((*(uint *)(lVar14 + 0x18) <= uVar20 + 2) ||
                   (*(uint *)(lVar14 + 0x18) <= uVar9 + 2)) goto code_r0x000180747327;
                fVar28 = *(float *)(lVar14 + 0x28 + (longlong)(int)uVar20 * 4);
                if (fVar26 < 0.0) {
                  fVar25 = 0.0;
                }
                else {
                  fVar25 = fVar26;
                  if (1.0 < fVar26) {
                    fVar25 = 1.0;
                  }
                }
                fVar27 = *(float *)(lVar14 + 0x28 + (longlong)(int)uVar9 * 4) - fVar28;
                if ((*(uint *)(lVar14 + 0x18) <= uVar20 + 3) ||
                   (*(uint *)(lVar14 + 0x18) <= uVar9 + 3)) goto code_r0x000180747327;
                fVar3 = *(float *)(lVar14 + 0x2c + (longlong)(int)uVar20 * 4);
                fVar4 = *(float *)(lVar14 + 0x2c + (longlong)(int)uVar9 * 4);
                if (fVar26 < 0.0) {
                  fVar26 = 0.0;
                }
                else if (1.0 < fVar26) {
                  fVar26 = 1.0;
                }
                if ((*(uint *)(lVar14 + 0x18) <= uVar20 + 4) ||
                   (*(uint *)(lVar14 + 0x18) <= uVar9 + 4)) goto code_r0x000180747327;
                lVar6 = *(longlong *)(lVar18 + 0x10);
                if (lVar6 == 0) {
code_r0x000180747321:
                  FUN_1803155d0();
                  pcVar7 = (code *)swi(3);
                  uVar19 = (*pcVar7)();
                  return uVar19;
                }
                fVar5 = *(float *)(lVar13 + 4);
                lVar14 = UnityEngine_UIElements_VisualElement__get_style
                                   (lVar6,0,lVar6,lVar13,
                                    (*(float *)(lVar14 + 0x20 + (longlong)(int)uVar9 * 4) -
                                    fStackX_20) * fVar23,fVar28);
                uVar15 = func_0x0001825fc560();
                iVar11 = FUN_1823e26f0();
                uVar16 = func_0x0001825fc560(((float)iVar11 - fVar5) + *(float *)(lVar18 + 0x54) +
                                             fVar1 + (fVar2 - fVar1) * fVar24,0);
                uStack_108 = 0;
                uStack_118 = 0;
                uStack_110 = 0;
                func_0x000182607f40(&uStack_118,uVar15,uVar16,0);
                uStack_158 = uStack_118;
                uStack_150 = uStack_110;
                uStack_148 = uStack_108;
                puVar17 = (undefined8 *)
                          UnityEngine_UIElements_StyleRotate__op_Implicit(&uStack_138,&uStack_158,0)
                ;
                if (lVar14 == 0) goto code_r0x000180747321;
                uStack_158 = *puVar17;
                uStack_148 = puVar17[2];
                uStack_140 = *(undefined4 *)(puVar17 + 3);
                uStack_150 = CONCAT44(*(undefined4 *)((longlong)puVar17 + 0xc),(int)puVar17[1]);
                FUN_180005190(0x7f,TI_UnityEngine.UIElements.IStyle,lVar14,&uStack_158);
                if (*(longlong *)(lVar18 + 0x10) == 0) goto code_r0x000180747321;
                lVar14 = UnityEngine_UIElements_VisualElement__get_style
                                   (*(longlong *)(lVar18 + 0x10),0);
                uStack_170 = 0x3f800000;
                uStack_f8 = 0;
                uStack_f0 = 0;
                fStack_174 = fVar3 + (fVar4 - fVar3) * fVar26;
                fStack_178 = fVar28 + fVar27 * fVar25;
                func_0x000182149c00(&uStack_f8,&fStack_178,0);
                uStack_138 = uStack_f8;
                uStack_130 = uStack_f0;
                puVar17 = (undefined8 *)
                          UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_158,&uStack_138,0);
                if (lVar14 == 0) goto code_r0x000180747321;
                uStack_138 = *puVar17;
                uStack_130 = puVar17[1];
                uStack_128 = *(undefined4 *)(puVar17 + 2);
                FUN_180004fc0(0x6d,TI_UnityEngine.UIElements.IStyle,lVar14,&uStack_138);
                if (*(longlong *)(lVar18 + 0x10) == 0) goto code_r0x000180747321;
                lVar18 = UnityEngine_UIElements_VisualElement__get_style
                                   (*(longlong *)(lVar18 + 0x10),0);
                func_0x000182601c10();
                if (lVar18 == 0) goto code_r0x000180747321;
              }
              FUN_180005060(0x5b,TI_UnityEngine.UIElements.IStyle);
            }
          }
          else {
            if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
              func_0x000180315660();
            }
            SparkTextoDano__Libera__18074b0e0(lVar18,0);
          }
        }
        uVar20 = (uint)uVar19 + 1;
        uVar19 = (ulonglong)uVar20;
        if (0x2f < (int)uVar20) {
          return uVar21;
        }
      } while( true );
    }
  }
  uVar19 = 0;
  lVar12 = TI_SparkTextoDano;
  do {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      func_0x000180315660();
      lVar12 = TI_SparkTextoDano;
    }
    lVar18 = *(longlong *)(*(longlong *)(lVar12 + 0xb8) + 0x110);
    if (lVar18 == 0) goto code_r0x00018074731b;
    uVar20 = (uint)uVar19;
    if (*(uint *)(lVar18 + 0x18) <= uVar20) goto code_r0x000180747315;
    if (*(longlong *)(lVar18 + 0x20 + uVar19 * 8) != 0) {
      if (*(int *)(lVar12 + 0xe4) == 0) {
        func_0x000180315660();
        lVar12 = TI_SparkTextoDano;
      }
      lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0xb8) + 0x110);
      if (lVar12 == 0) goto code_r0x00018074731b;
      if (*(uint *)(lVar12 + 0x18) <= uVar20) {
code_r0x000180747315:
        FUN_1803155c0();
        pcVar7 = (code *)swi(3);
        uVar19 = (*pcVar7)();
        return uVar19;
      }
      lVar12 = *(longlong *)(lVar12 + 0x20 + uVar19 * 8);
      if (lVar12 == 0) goto code_r0x00018074731b;
      *(undefined1 *)(lVar12 + 0x58) = 0;
      lVar12 = TI_SparkTextoDano;
    }
    uVar19 = (ulonglong)(uVar20 + 1);
  } while ((int)(uVar20 + 1) < 0x30);
  if (*(int *)(lVar12 + 0xe4) == 0) {
    func_0x000180315660();
    lVar12 = TI_SparkTextoDano;
  }
  lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0xb8) + 0x118);
  if (lVar12 != 0) {
    uVar19 = FUN_18117b6e0(lVar12,MR_System.Collections.Generic.Dictionary<int,int>.Clear);
    return uVar19 & 0xffffffffffffff00;
  }
code_r0x00018074731b:
  FUN_1803155d0();
  pcVar7 = (code *)swi(3);
  uVar19 = (*pcVar7)();
  return uVar19;
}

