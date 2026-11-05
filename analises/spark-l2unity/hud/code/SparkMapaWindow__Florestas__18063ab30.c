// SparkMapaWindow__Florestas__18063ab30 @ 0x18063ab30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__Florestas__18063ab30(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  code *pcVar8;
  uint uVar9;
  char cVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  float fVar19;
  longlong lStackX_8;
  float fStackX_24;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [136];
  
  if (cRam00000001834b3d22 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.TryGetValue);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_UnityEngine.Rect);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'Data/UI/Assets/Mapa/florestas/'");
    cRam00000001834b3d22 = '\x01';
  }
  uVar15 = 0;
  uVar17 = 0xffffffff;
  lStackX_8 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lVar12 = TI_SparkMapaWindow;
  if (((*(char *)(param_1 + 0x278) != '\0') && (*(char *)(param_1 + 0x1f8) == '\0')) &&
     (*(longlong *)(param_1 + 0x188) == 0)) {
    fVar19 = *(float *)(param_1 + 0x20c);
    fVar1 = *(float *)(param_1 + 0x210);
    fVar2 = *(float *)(param_1 + 0x270);
    fVar3 = *(float *)(param_1 + 0x274);
    uVar11 = SparkMapaWindow__TamanhoDaVista__180649960(param_1,0);
    fVar4 = *(float *)(param_1 + 0x208);
    fStackX_24 = (float)((ulonglong)uVar11 >> 0x20);
    uVar16 = uVar15;
    while( true ) {
      if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
        func_0x000180315660(TI_SparkMapaWindow);
      }
      lVar7 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x98);
      if (lVar7 == 0) break;
      lVar12 = TI_SparkMapaWindow;
      if ((*(int *)(lVar7 + 0x18) <= (int)uVar16) || (-1 < (int)uVar17)) goto code_r0x00018063ae45;
      if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
        func_0x000180315660(TI_SparkMapaWindow);
      }
      lVar12 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x98);
      if (lVar12 == 0) break;
      if (*(uint *)(lVar12 + 0x18) <= uVar16) goto code_r0x00018063b288;
      fVar5 = *(float *)(lVar12 + ((longlong)(int)uVar16 + 2) * 0x18);
      fVar6 = *(float *)(lVar12 + 4 + ((longlong)(int)uVar16 + 2) * 0x18);
      lVar12 = *(longlong *)
                (*(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x98) + 0x28 +
                (longlong)(int)uVar16 * 0x18);
      uVar14 = uVar15;
      if (lVar12 == 0) break;
      for (; uVar9 = uVar17, (int)uVar14 < (int)*(uint *)(lVar12 + 0x18); uVar14 = uVar14 + 1) {
        if (*(uint *)(lVar12 + 0x18) <= uVar14) goto code_r0x00018063b288;
        puVar13 = (undefined8 *)(lVar12 + ((longlong)(int)uVar14 + 2) * 0x10);
        uStack_128 = *puVar13;
        uStack_120 = puVar13[1];
        if (*(int *)(TI_UnityEngine.Rect + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar10 = FUN_1806373a0(&uStack_128,
                               CONCAT44((((fVar3 - fStackX_24 * 0.5) / fVar4 + fVar1) - fVar6) *
                                        0.03125,(((fVar2 - (float)uVar11 * 0.5) / fVar4 + fVar19) -
                                                fVar5) * 0.03125),0);
        uVar9 = uVar16;
        if (cVar10 != '\0') break;
      }
      uVar17 = uVar9;
      uVar16 = uVar16 + 1;
    }
code_r0x00018063b28e:
    FUN_1803155d0();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
code_r0x00018063ae45:
  do {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      func_0x000180315660(lVar12);
      lVar12 = TI_SparkMapaWindow;
    }
    lVar7 = *(longlong *)(*(longlong *)(lVar12 + 0xb8) + 0x98);
    if (lVar7 == 0) goto code_r0x00018063b28e;
    if (*(int *)(lVar7 + 0x18) <= (int)uVar15) {
      return;
    }
    if (uVar15 == uVar17) {
      fVar19 = 1.0;
    }
    else {
      fVar19 = 0.0;
    }
    lVar7 = *(longlong *)(param_1 + 0x268);
    if (lVar7 == 0) goto code_r0x00018063b28e;
    if (*(uint *)(lVar7 + 0x18) <= uVar15) goto code_r0x00018063b288;
    if (*(float *)(lVar7 + 0x20 + (longlong)(int)uVar15 * 4) == fVar19) {
code_r0x00018063b226:
      uVar15 = uVar15 + 1;
      goto code_r0x00018063ae45;
    }
    lVar7 = *(longlong *)(param_1 + 0x260);
    if (*(int *)(lVar12 + 0xe4) == 0) {
      func_0x000180315660(lVar12);
      lVar12 = TI_SparkMapaWindow;
    }
    lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0xb8) + 0x98);
    if (lVar12 == 0) goto code_r0x00018063b28e;
    if (*(uint *)(lVar12 + 0x18) <= uVar15) goto code_r0x00018063b288;
    if (lVar7 == 0) goto code_r0x00018063b28e;
    cVar10 = FUN_1812698d0(lVar7,*(undefined8 *)(lVar12 + 0x20 + (longlong)(int)uVar15 * 0x18),
                           &lStackX_8,MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.TryGetValue);
    if (cVar10 == '\0') {
code_r0x00018063b206:
      lVar12 = *(longlong *)(param_1 + 0x268);
      if (lVar12 != 0) {
        if (uVar15 < *(uint *)(lVar12 + 0x18)) {
          *(undefined4 *)(lVar12 + 0x20 + (longlong)(int)uVar15 * 4) = 0;
          lVar12 = TI_SparkMapaWindow;
          goto code_r0x00018063b226;
        }
        goto code_r0x00018063b288;
      }
      goto code_r0x00018063b28e;
    }
    if (0.0 < fVar19) {
      if ((lStackX_8 == 0) ||
         (lVar12 = UnityEngine_UIElements_VisualElement__get_style(lStackX_8,0), lVar12 == 0))
      goto code_r0x00018063b28e;
      puVar13 = (undefined8 *)FUN_180007750(&uStack_128,10,TI_UnityEngine.UIElements.IStyle,lVar12);
      uStack_f8 = *puVar13;
      uStack_f0 = puVar13[1];
      uStack_e8 = puVar13[2];
      uStack_e0 = puVar13[3];
      uStack_d8 = puVar13[4];
      puVar13 = (undefined8 *)func_0x0001826000e0(&uStack_128,&uStack_f8,0);
      uStack_d0 = *puVar13;
      uStack_c8 = puVar13[1];
      uStack_c0 = puVar13[2];
      uStack_b8 = puVar13[3];
      uVar11 = func_0x000180a391e0(&uStack_d0,0);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar10 = UnityEngine_Object__op_Equality(uVar11,0,0);
      if (cVar10 != '\0') {
        if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
          func_0x000180315660(TI_SparkMapaWindow);
        }
        lVar12 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x98);
        if (lVar12 == 0) goto code_r0x00018063b28e;
        if (*(uint *)(lVar12 + 0x18) <= uVar15) {
code_r0x00018063b288:
          FUN_1803155c0();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar11 = System_String__Concat
                           (LIT_"'Data/UI/Assets/Mapa/florestas/'",
                            *(undefined8 *)(lVar12 + 0x20 + (longlong)(int)uVar15 * 0x18),0);
        if (*(int *)(TI_SparkArte + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar11 = FUN_180a90ae0(uVar11,MR_SparkArte.Load<UnityEngine.Texture2D>);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar10 = UnityEngine_Object__op_Equality(uVar11,0,0);
        if (cVar10 != '\0') goto code_r0x00018063b206;
        if (lStackX_8 == 0) goto code_r0x00018063b28e;
        lVar12 = UnityEngine_UIElements_VisualElement__get_style(lStackX_8,0);
        puVar13 = (undefined8 *)
                  UnityEngine_UIElements_StyleBackground__op_Implicit(auStack_b0,uVar11,0);
        if (lVar12 == 0) goto code_r0x00018063b28e;
        uStack_128 = *puVar13;
        uStack_120 = puVar13[1];
        uStack_118 = puVar13[2];
        uStack_110 = puVar13[3];
        uStack_108 = puVar13[4];
        FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar12,&uStack_128);
      }
    }
    lVar12 = *(longlong *)(param_1 + 0x268);
    if (lVar12 == 0) goto code_r0x00018063b28e;
    if (*(uint *)(lVar12 + 0x18) <= uVar15) goto code_r0x00018063b288;
    uVar18 = func_0x00018043b1a0(*(undefined4 *)(lVar12 + 0x20 + (longlong)(int)uVar15 * 4));
    *(undefined4 *)(*(longlong *)(param_1 + 0x268) + 0x20 + (longlong)(int)uVar15 * 4) = uVar18;
    if (*(longlong *)(param_1 + 0x268) == 0) goto code_r0x00018063b28e;
    if (*(uint *)(*(longlong *)(param_1 + 0x268) + 0x18) <= uVar15) goto code_r0x00018063b288;
    fVar19 = (float)func_0x0001804164d0(0);
    if (lStackX_8 == 0) goto code_r0x00018063b28e;
    lVar12 = UnityEngine_UIElements_VisualElement__get_style(lStackX_8,0);
    uVar11 = func_0x000182601c10(fVar19,0);
    if ((lVar12 == 0) || (FUN_180005060(0x5b,TI_UnityEngine.UIElements.IStyle,lVar12,uVar11), lStackX_8 == 0))
    goto code_r0x00018063b28e;
    lVar12 = UnityEngine_UIElements_VisualElement__get_style(lStackX_8,0);
    uVar11 = FUN_180eb5810(fVar19 <= 0.001,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar12 == 0) goto code_r0x00018063b28e;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar12,uVar11);
    uVar15 = uVar15 + 1;
    lVar12 = TI_SparkMapaWindow;
  } while( true );
}

