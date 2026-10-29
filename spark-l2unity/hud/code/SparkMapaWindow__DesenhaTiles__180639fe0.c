// SparkMapaWindow__DesenhaTiles__180639fe0 @ 0x180639fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__DesenhaTiles__180639fe0(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  double dVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int aiStackX_20 [2];
  int aiStack_1e8 [4];
  longlong lStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [184];
  
  uStack_1c8 = param_2;
  if (cRam00000001834b3d43 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.Remove);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.get_Item);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<string>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.HashSet<string>.Add);
    FUN_180315380(MR_System.Collections.Generic.HashSet<string>.Contains);
    FUN_180315380(MR_System.Collections.Generic.HashSet<string>..ctor);
    FUN_180315380(TI_System.Collections.Generic.HashSet<string>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<string,UnityEngine.UIElements.VisualElement>.get_Key);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<string>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<string>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<string>);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'_'");
    cRam00000001834b3d43 = '\x01';
  }
  aiStackX_20[0] = 0;
  uStack_148 = 0;
  puStack_140 = (undefined8 *)0x0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_198 = 0;
  puStack_190 = (undefined8 *)0x0;
  uStack_188 = 0;
  uStack_180 = 0;
  fVar19 = *(float *)(param_1 + 0x208);
  fVar23 = (float)param_2 * 0.5;
  lStack_1d8 = CONCAT44((int)((ulonglong)param_2 >> 0x20),fVar23);
  fVar25 = uStack_1c8._4_4_ * 0.5;
  fVar18 = *(float *)(param_1 + 0x20c);
  fVar24 = *(float *)(param_1 + 0x210);
  if (cRam00000001834b2d57 == '\0') {
    FUN_180315380(TI_System.Math);
    cRam00000001834b2d57 = '\x01';
  }
  if (*(int *)(TI_System.Math + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar6 = cRam00000001834b2d57;
  dVar5 = (double)func_0x0001803a7870(SUB84((double)((fVar18 - fVar23 / fVar19) * 3.0517578e-05),0))
  ;
  if (cVar6 == '\0') {
    FUN_180315380(TI_System.Math);
    cVar6 = '\x01';
    cRam00000001834b2d57 = '\x01';
  }
  if (*(int *)(TI_System.Math + 0xe4) == 0) {
    func_0x000180315660();
    cVar6 = cRam00000001834b2d57;
  }
  dVar22 = (double)func_0x0001803a7870(SUB84((double)((fVar18 + fVar23 / fVar19) * 3.0517578e-05),0)
                                      );
  iVar15 = (int)dVar22 + 0x14;
  uStack_1c8 = CONCAT44(uStack_1c8._4_4_,iVar15);
  if (cVar6 == '\0') {
    FUN_180315380(TI_System.Math);
    cVar6 = '\x01';
    cRam00000001834b2d57 = '\x01';
  }
  if (*(int *)(TI_System.Math + 0xe4) == 0) {
    func_0x000180315660();
    cVar6 = cRam00000001834b2d57;
  }
  dVar22 = (double)func_0x0001803a7870(SUB84((double)((fVar24 - fVar25 / fVar19) * 3.0517578e-05),0)
                                      );
  if (cVar6 == '\0') {
    FUN_180315380(TI_System.Math);
    cRam00000001834b2d57 = '\x01';
  }
  if (*(int *)(TI_System.Math + 0xe4) == 0) {
    func_0x000180315660();
  }
  dVar21 = (double)func_0x0001803a7870(SUB84((double)((fVar25 / fVar19 + fVar24) * 3.0517578e-05),0)
                                      );
  lVar7 = func_0x000180315580(TI_System.Collections.Generic.HashSet<string>);
  FUN_1814e1e50(lVar7,MR_System.Collections.Generic.HashSet<string>..ctor);
  iVar14 = (int)dVar5 + 0x14;
  aiStack_1e8[0] = iVar14;
  if (iVar14 <= iVar15) {
    iVar17 = (int)dVar22 + 0x12;
    fVar18 = (float)func_0x0001803aaa10(fVar19 * 32768.0);
    fVar19 = (float)func_0x0001803aaa10(fVar19 * 32768.0);
    fVar24 = (float)lStack_1d8;
    do {
      aiStackX_20[0] = iVar17;
      if (iVar17 <= (int)dVar21 + 0x12) {
        do {
          uVar8 = System_Int32__ToString(aiStack_1e8,0);
          uVar9 = System_Int32__ToString(aiStackX_20,0);
          uVar8 = System_String__Concat(uVar8,LIT_"'_'",uVar9,0);
          lVar10 = SparkMapaWindow__Tile__180649c30(param_1,uVar8,0);
          if (lVar10 != 0) {
            if (lVar7 == 0) goto code_r0x00018063aa3f;
            func_0x0001814ce980(lVar7,uVar8,MR_System.Collections.Generic.HashSet<string>.Add);
            iVar14 = aiStackX_20[0] + -0x12;
            fVar23 = *(float *)(param_1 + 0x210);
            fVar1 = *(float *)(param_1 + 0x208);
            iVar15 = aiStack_1e8[0] + -0x14;
            fVar2 = *(float *)(param_1 + 0x20c);
            fVar3 = *(float *)(param_1 + 0x208);
            lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
            uVar20 = func_0x0001803a9df0(((float)iVar15 * 32768.0 - fVar2) * fVar3 + fVar24);
            plVar12 = (longlong *)
                      UnityEngine_UIElements_StyleLength__op_Implicit(auStack_110,uVar20,0);
            if (lVar11 == 0) goto code_r0x00018063aa3f;
            lStack_1d8 = *plVar12;
            uStack_1d0 = (undefined4)plVar12[1];
            FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar11,&lStack_1d8);
            lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
            uVar20 = func_0x0001803a9df0(((float)iVar14 * 32768.0 - fVar23) * fVar1 + fVar25);
            puVar13 = (undefined8 *)
                      UnityEngine_UIElements_StyleLength__op_Implicit(auStack_100,uVar20,0);
            if (lVar11 == 0) goto code_r0x00018063aa3f;
            uStack_178 = *puVar13;
            uStack_170 = *(undefined4 *)(puVar13 + 1);
            FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_178);
            lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
            puVar13 = (undefined8 *)
                      UnityEngine_UIElements_StyleLength__op_Implicit(auStack_f0,fVar18 + 1.0,0);
            if (lVar11 == 0) goto code_r0x00018063aa3f;
            uStack_168 = *puVar13;
            uStack_160 = *(undefined4 *)(puVar13 + 1);
            FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_168);
            lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
            puVar13 = (undefined8 *)
                      UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_1c0,fVar19 + 1.0,0);
            if (lVar11 == 0) goto code_r0x00018063aa3f;
            uStack_158 = *puVar13;
            uStack_150 = *(undefined4 *)(puVar13 + 1);
            FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_158);
            lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
            FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
            if (lVar10 == 0) goto code_r0x00018063aa3f;
            FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar10);
          }
          aiStackX_20[0] = aiStackX_20[0] + 1;
        } while (aiStackX_20[0] <= (int)dVar21 + 0x12);
        iVar15 = (int)uStack_1c8;
        iVar14 = aiStack_1e8[0];
      }
      iVar14 = iVar14 + 1;
      aiStack_1e8[0] = iVar14;
    } while (iVar14 <= iVar15);
  }
  lVar10 = func_0x000180315580(TI_System.Collections.Generic.List<string>);
  FUN_180bba2e0(lVar10,MR_System.Collections.Generic.List<string>..ctor);
  if (*(longlong *)(param_1 + 0x218) != 0) {
    lStack_1d8 = lVar10;
    FUN_18117ccd0(&uStack_1c0,*(longlong *)(param_1 + 0x218),MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.GetEnumerator);
    uStack_148 = uStack_1c0;
    puStack_140 = puStack_1b8;
    uStack_138 = uStack_1b0;
    uStack_130 = uStack_1a8;
    uStack_128 = uStack_1a0;
    uStack_1c0 = 0;
    puStack_1b8 = &uStack_148;
code_r0x00018063a710:
    cVar6 = FUN_18133c520(&uStack_148,MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.MoveNext);
    uVar8 = uStack_138;
    if (cVar6 != '\0') {
      if (lVar7 != 0) goto code_r0x00018063a731;
      goto code_r0x00018063a9fa;
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_148,MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.Dispose);
    if (lVar10 != 0) {
      FUN_180bada40(&uStack_1c0,lVar10,MR_System.Collections.Generic.List<string>.GetEnumerator);
      uStack_198 = uStack_1c0;
      puStack_190 = puStack_1b8;
      uStack_188 = uStack_1b0;
      uStack_1c0 = 0;
      puStack_1b8 = &uStack_198;
      while( true ) {
        do {
          cVar6 = FUN_1812fa7e0(&uStack_198,MR_System.Collections.Generic.List<string>.MoveNext);
          uVar8 = uStack_188;
          if (cVar6 == '\0') {
            Gear__UpdateWeaponType__1803dadf0(&uStack_198,MR_System.Collections.Generic.List<string>.Dispose);
            return;
          }
          if (*(longlong *)(param_1 + 0x218) == 0) goto code_r0x00018063aa33;
          lVar7 = FUN_18126bf20(*(longlong *)(param_1 + 0x218),uStack_188,MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.get_Item);
          if (lVar7 == 0) goto code_r0x00018063aa2e;
          UnityEngine_UIElements_VisualElement__RemoveFromHierarchy(lVar7,0);
          if (*(longlong *)(param_1 + 0x218) == 0) goto code_r0x00018063aa29;
          FUN_1812639c0(*(longlong *)(param_1 + 0x218),uVar8,MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.Remove);
          if (*(longlong *)(param_1 + 0x260) == 0) goto code_r0x00018063aa24;
          cVar6 = FUN_1812698d0(*(longlong *)(param_1 + 0x260),uVar8,&uStack_180,MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.TryGetValue);
        } while (cVar6 == '\0');
        if (*(longlong *)(param_1 + 0x260) == 0) break;
        FUN_1812639c0(*(longlong *)(param_1 + 0x260),uVar8,MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.Remove);
        uVar16 = 0;
        while( true ) {
          if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar7 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x98);
          if (lVar7 == 0) goto code_r0x00018063aa1a;
          if (*(int *)(lVar7 + 0x18) <= (int)uVar16) break;
          if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar7 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x98);
          if (lVar7 == 0) goto code_r0x00018063aa15;
          if (*(uint *)(lVar7 + 0x18) <= uVar16) goto code_r0x00018063aa06;
          cVar6 = func_0x0001817058a0(*(undefined8 *)(lVar7 + 0x20 + (longlong)(int)uVar16 * 0x18),
                                      uVar8,0);
          if (cVar6 != '\0') {
            lVar7 = *(longlong *)(param_1 + 0x268);
            if (lVar7 == 0) goto code_r0x00018063aa10;
            if (*(uint *)(lVar7 + 0x18) <= uVar16) goto code_r0x00018063aa0b;
            *(undefined4 *)(lVar7 + 0x20 + (longlong)(int)uVar16 * 4) = 0;
          }
          uVar16 = uVar16 + 1;
        }
      }
      goto code_r0x00018063aa1f;
    }
  }
code_r0x00018063aa3f:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
code_r0x00018063a731:
  cVar6 = FUN_1814cf450(lVar7,uStack_138,MR_System.Collections.Generic.HashSet<string>.Contains);
  if (cVar6 != '\0') goto code_r0x00018063a710;
  if (lVar10 != 0) {
    FUN_180002eb0(lVar10,uVar8,MR_System.Collections.Generic.List<string>.Add);
    goto code_r0x00018063a710;
  }
  FUN_1803155d0();
code_r0x00018063a9fa:
  FUN_1803155d0();
  FUN_180311490();
code_r0x00018063aa06:
  FUN_1803155c0();
code_r0x00018063aa0b:
  FUN_1803155c0();
code_r0x00018063aa10:
  FUN_1803155d0();
code_r0x00018063aa15:
  FUN_1803155d0();
code_r0x00018063aa1a:
  FUN_1803155d0();
code_r0x00018063aa1f:
  FUN_1803155d0();
code_r0x00018063aa24:
  FUN_1803155d0();
code_r0x00018063aa29:
  FUN_1803155d0();
code_r0x00018063aa2e:
  FUN_1803155d0();
code_r0x00018063aa33:
  FUN_1803155d0();
  FUN_180311490();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

