// SparkTextoDano__Solta__18074e1b0 @ 0x18074e1b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTextoDano__Solta__18074e1b0(longlong param_1,int param_2,int param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  uint auStackX_8 [2];
  int iStackX_10;
  undefined8 uStack_158;
  float fStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_128;
  undefined4 uStack_120;
  int aiStack_108 [6];
  float afStack_f0 [2];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  
  iStackX_10 = param_2;
  if (cRam00000001834b42b4 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,int>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,int>.set_Item);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkTextoDano.Executor>);
    FUN_180315380(TI_UnityEngine.GameObject);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkMontaria);
    FUN_180315380(TI_SparkTextoDano);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'+'");
    FUN_180315380(LIT_"'SparkTextoDano'");
    FUN_180315380(LIT_"'SP+'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'XP+'");
    cRam00000001834b42b4 = '\x01';
  }
  uVar14 = 0;
  aiStack_108[0] = 0;
  afStack_f0[0] = 0.0;
  aiStack_108[5] = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  aiStack_108[1] = 0;
  aiStack_108[2] = 0;
  aiStack_108[3] = 0;
  aiStack_108[4] = 0;
  auStackX_8[0] = 0;
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar6 = UnityEngine_Object__op_Equality(param_1,0,0);
  if (cVar6 != '\0') {
    return;
  }
  if (param_1 == 0) goto DAT_18074f72e;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar6 = SparkTextoDano__GaranteCamada__1807481c0(0);
  if (cVar6 == '\0') {
    return;
  }
  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkTextoDano__GaranteOuvintes__18074ab50(0);
  uVar18 = FUN_182436650(0);
  lVar7 = TI_SparkTextoDano;
  uVar16 = uVar14;
  do {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      func_0x000180315660();
      lVar7 = TI_SparkTextoDano;
    }
    lVar12 = *(longlong *)(*(longlong *)(lVar7 + 0xb8) + 0x110);
    if (lVar12 == 0) goto DAT_18074f72e;
    uVar13 = (uint)uVar14;
    if (*(uint *)(lVar12 + 0x18) <= uVar13) goto code_r0x00018074f740;
    lVar12 = *(longlong *)(lVar12 + 0x20 + uVar14 * 8);
    if (lVar12 == 0) goto DAT_18074f72e;
    if (*(char *)(lVar12 + 0x58) == '\0') {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        func_0x000180315660();
        lVar7 = TI_SparkTextoDano;
      }
      lVar12 = *(longlong *)(*(longlong *)(lVar7 + 0xb8) + 0x110);
      if (lVar12 == 0) goto DAT_18074f72e;
      if (*(uint *)(lVar12 + 0x18) <= uVar13) goto code_r0x00018074f740;
      uVar16 = *(ulonglong *)(lVar12 + 0x20 + uVar14 * 8);
      break;
    }
    if (uVar16 == 0) {
code_r0x00018074e43b:
      if (*(int *)(lVar7 + 0xe4) == 0) {
        func_0x000180315660();
        lVar7 = TI_SparkTextoDano;
      }
      lVar12 = *(longlong *)(*(longlong *)(lVar7 + 0xb8) + 0x110);
      if (lVar12 == 0) goto DAT_18074f72e;
      if (*(uint *)(lVar12 + 0x18) <= uVar13) goto code_r0x00018074f740;
      uVar16 = *(ulonglong *)(lVar12 + 0x20 + uVar14 * 8);
    }
    else {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        func_0x000180315660();
        lVar7 = TI_SparkTextoDano;
      }
      lVar12 = *(longlong *)(*(longlong *)(lVar7 + 0xb8) + 0x110);
      if (lVar12 == 0) goto DAT_18074f72e;
      if (*(uint *)(lVar12 + 0x18) <= uVar13) goto code_r0x00018074f740;
      lVar12 = *(longlong *)(lVar12 + 0x20 + uVar14 * 8);
      if (lVar12 == 0) goto DAT_18074f72e;
      pfVar1 = (float *)(lVar12 + 0x44);
      if (*pfVar1 <= *(float *)(uVar16 + 0x44) && *(float *)(uVar16 + 0x44) != *pfVar1)
      goto code_r0x00018074e43b;
    }
    uVar14 = (ulonglong)(uVar13 + 1);
  } while ((int)(uVar13 + 1) < 0x30);
  if (uVar16 == 0) goto DAT_18074f72e;
  if (*(char *)(uVar16 + 0x58) != '\0') {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkTextoDano__Libera__18074b0e0(uVar16,0);
    lVar7 = TI_SparkTextoDano;
  }
  if (*(longlong *)(param_1 + 0x30) == 0) goto DAT_18074f72e;
  uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x14);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    func_0x000180315660();
    lVar7 = TI_SparkTextoDano;
  }
  lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0xb8) + 0x118);
  if (lVar7 == 0) goto DAT_18074f72e;
  FUN_1811f1940(lVar7,uVar3,aiStack_108,MR_System.Collections.Generic.Dictionary<int,int>.TryGetValue);
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x118);
  if (lVar7 == 0) goto DAT_18074f72e;
  FUN_1811f4b00(lVar7,uVar3,aiStack_108[0] + 1,MR_System.Collections.Generic.Dictionary<int,int>.set_Item);
  lVar7 = SparkTextoDano__Posicoes__18074da10(param_2,param_3,0);
  if (lVar7 == 0) {
    auVar21._0_8_ = FUN_18242f8d0(0);
    auVar21._8_8_ = extraout_XMM0_Qb;
    auVar22._4_12_ = auVar21._4_12_;
    auVar22._0_4_ = (float)auVar21._0_8_ * 20.0;
    fVar20 = (float)func_0x0001803a9df0(auVar22._0_8_);
    *(float *)(uVar16 + 0x50) = fVar20 - 10.0;
    auVar23._0_8_ = FUN_18242f8d0(0);
    auVar23._8_8_ = extraout_XMM0_Qb_00;
    auVar24._4_12_ = auVar23._4_12_;
    auVar24._0_4_ = (float)auVar23._0_8_ * 20.0;
    fVar20 = (float)func_0x0001803a9df0(auVar24._0_8_);
    fVar20 = fVar20 - 10.0;
  }
  else {
    iVar15 = aiStack_108[0] % (*(int *)(lVar7 + 0x18) / 2);
    uVar13 = iVar15 * 2;
    if (*(uint *)(lVar7 + 0x18) <= uVar13) {
code_r0x00018074f740:
      FUN_1803155c0();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined4 *)(uVar16 + 0x50) = *(undefined4 *)(lVar7 + 0x20 + (longlong)(int)uVar13 * 4);
    lVar12 = (longlong)(iVar15 * 2) + 1;
    if (*(uint *)(lVar7 + 0x18) <= (uint)lVar12) goto code_r0x00018074f740;
    fVar20 = *(float *)(lVar7 + 0x20 + lVar12 * 4);
  }
  *(float *)(uVar16 + 0x54) = fVar20;
  if (((1 < param_3 - 1U) && (2 < param_3 - 5U)) && (param_3 != 8)) {
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkTextoDano__Palavra__18074d0b0
              (param_2,param_3,aiStack_108 + 1,aiStack_108 + 2,aiStack_108 + 3,aiStack_108 + 4,
               &uStack_b8,&uStack_b0,auStackX_8,0);
    uVar10 = uStack_b8;
    if (cRam00000001834b42b3 == '\0') {
      FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.TryGetValue);
      FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.set_Item);
      FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
      FUN_180315380(TI_SparkArte);
      FUN_180315380(TI_SparkTextoDano);
      FUN_180315380(LIT_"'Data/UI/Assets/TextoDano/'");
      cRam00000001834b42b3 = '\x01';
    }
    uStack_158 = 0;
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660(TI_SparkTextoDano);
    }
    lVar7 = *(longlong *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x120);
    if (lVar7 == 0) {
code_r0x00018074f734:
      FUN_1803155d0();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    cVar6 = FUN_1812698d0(lVar7,uVar10,&uStack_158,MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.TryGetValue);
    if (cVar6 == '\0') {
      uVar8 = System_String__Concat(LIT_"'Data/UI/Assets/TextoDano/'",uVar10,0);
      if (*(int *)(TI_SparkArte + 0xe4) == 0) {
        func_0x000180315660();
      }
      uStack_158 = FUN_180a90ae0(uVar8,MR_SparkArte.Load<UnityEngine.Texture2D>);
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTextoDano);
      }
      lVar7 = *(longlong *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x120);
      if (lVar7 == 0) goto code_r0x00018074f734;
      FUN_18126c020(lVar7,uVar10,uStack_158,MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.set_Item);
    }
    if (*(longlong *)(uVar16 + 0x20) == 0) goto DAT_18074f72e;
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(uVar16 + 0x20),0);
    puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_148);
    if (lVar7 == 0) goto DAT_18074f72e;
    uStack_120 = *(undefined4 *)(puVar9 + 1);
    uStack_128 = *puVar9;
    FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_128);
    if (*(longlong *)(uVar16 + 0x20) == 0) goto DAT_18074f72e;
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(uVar16 + 0x20),0);
    puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_148);
    if (lVar7 == 0) goto DAT_18074f72e;
    uStack_120 = *(undefined4 *)(puVar9 + 1);
    uStack_128 = *puVar9;
    FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_128);
    if (*(longlong *)(uVar16 + 0x20) == 0) goto DAT_18074f72e;
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(uVar16 + 0x20),0);
    puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_148);
    if (lVar7 == 0) goto DAT_18074f72e;
    uStack_120 = *(undefined4 *)(puVar9 + 1);
    uStack_128 = *puVar9;
    FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_128);
    if (*(longlong *)(uVar16 + 0x20) == 0) goto DAT_18074f72e;
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(uVar16 + 0x20),0);
    puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_148);
    if (lVar7 == 0) goto DAT_18074f72e;
    uStack_120 = *(undefined4 *)(puVar9 + 1);
    uStack_128 = *puVar9;
    FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_128);
    uVar10 = uStack_158;
    if (*(longlong *)(uVar16 + 0x20) == 0) goto DAT_18074f72e;
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(uVar16 + 0x20),0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar6 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    if (cVar6 == '\0') {
      uStack_c8 = 0;
      func_0x000182600050(&uStack_e8,3,0);
    }
    else {
      uStack_c8 = 0;
      UnityEngine_UIElements_StyleBackground___ctor(&uStack_e8,uVar10);
    }
    if (lVar7 == 0) goto DAT_18074f72e;
    FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_e8);
    plVar4 = *(longlong **)(uVar16 + 0x20);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar6 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    uVar10 = uStack_b0;
    if (cVar6 != '\0') {
      uVar10 = LIT_"''";
    }
    if (plVar4 == (longlong *)0x0) goto DAT_18074f72e;
    (**(code **)(*plVar4 + 0xe48))(plVar4,uVar10,*(undefined8 *)(*plVar4 + 0xe50));
    if (*(longlong *)(uVar16 + 0x20) == 0) goto DAT_18074f72e;
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(uVar16 + 0x20),0);
    uStack_148 = CONCAT44((float)(auStackX_8[0] >> 8 & 0xff) / 255.0,
                          (float)(auStackX_8[0] & 0xff) / 255.0);
    uStack_140 = CONCAT44((float)(auStackX_8[0] >> 0x18) / 255.0,
                          (float)(auStackX_8[0] >> 0x10 & 0xff) / 255.0);
    puVar9 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_128,&uStack_148,0)
    ;
    if (lVar7 == 0) goto DAT_18074f72e;
    uStack_e8 = *puVar9;
    uStack_e0 = puVar9[1];
    uStack_d8 = CONCAT44(uStack_d8._4_4_,*(undefined4 *)(puVar9 + 2));
    FUN_180004fc0(0x2f,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_e8);
    if (*(longlong *)(uVar16 + 0x20) == 0) goto DAT_18074f72e;
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(uVar16 + 0x20),0);
    uVar10 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar7 == 0) goto DAT_18074f72e;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar7,uVar10);
    if (*(longlong *)(uVar16 + 0x18) == 0) goto DAT_18074f72e;
    lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(uVar16 + 0x18),0);
    uVar10 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar7 == 0) goto DAT_18074f72e;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar7,uVar10);
    iVar15 = iStackX_10;
    goto code_r0x00018074f1ec;
  }
  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar26 = 0x3f68f5c3;
  uVar27 = 0x3f3d70a4;
  uVar10 = LIT_"'+'";
  if (param_2 == 0) {
    if (param_3 != 1) {
      if ((param_3 == 5) || (param_3 == 6)) goto code_r0x00018074ec29;
      goto code_r0x00018074efe8;
    }
code_r0x00018074ef7d:
    uVar26 = 0x3f99999a;
    uVar27 = 0x3f795810;
    goto code_r0x00018074ec22;
  }
  if (param_2 == 1) {
    switch(param_3 + -1) {
    case 0:
      goto code_r0x00018074ef7d;
    default:
      goto code_r0x00018074ef4b;
    case 4:
      break;
    case 5:
      break;
    case 6:
      uVar10 = LIT_"'SP+'";
      break;
    case 7:
      uVar10 = LIT_"'XP+'";
    }
    goto code_r0x00018074ec29;
  }
  uVar26 = 0x3f570a3d;
  uVar27 = 0x3f2e147b;
  switch(param_3 + -1) {
  case 0:
    uVar26 = 0x3f8b851f;
    uVar27 = 0x3f63d70a;
    goto code_r0x00018074ec22;
  default:
    goto code_r0x00018074ef4b;
  case 4:
    break;
  case 5:
    break;
  case 6:
  case 7:
code_r0x00018074ef4b:
    if ((param_3 != 5) && (param_3 != 6)) {
code_r0x00018074efe8:
      uVar10 = LIT_"'SP+'";
      if ((param_3 != 7) && (uVar10 = LIT_"'XP+'", param_3 != 8)) {
code_r0x00018074ec22:
        uVar10 = LIT_"''";
      }
    }
  }
code_r0x00018074ec29:
  plVar4 = *(longlong **)(uVar16 + 0x18);
  if (cRam00000001834b31be == '\0') {
    FUN_180315380(TI_System.Math);
    cRam00000001834b31be = '\x01';
  }
  if (*(int *)(TI_System.Math + 0xe4) == 0) {
    func_0x000180315660();
  }
  aiStack_108[5] = -param_4;
  if (-param_4 < 0) {
    aiStack_108[5] = param_4;
  }
  uVar8 = System_Int32__ToString(aiStack_108 + 5,0);
  uVar10 = System_String__Concat(uVar10,uVar8,0);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0xe48))(plVar4,uVar10,*(undefined8 *)(*plVar4 + 0xe50));
    if (*(longlong *)(uVar16 + 0x18) != 0) {
      lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(uVar16 + 0x18),0);
      puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_148);
      if (lVar7 != 0) {
        uStack_120 = *(undefined4 *)(puVar9 + 1);
        uStack_128 = *puVar9;
        FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_128);
        if (*(longlong *)(uVar16 + 0x18) != 0) {
          lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(uVar16 + 0x18),0);
          puVar9 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_148);
          if (lVar7 != 0) {
            uStack_120 = *(undefined4 *)(puVar9 + 1);
            uStack_128 = *puVar9;
            FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_128);
            if (*(longlong *)(uVar16 + 0x18) != 0) {
              lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                (*(longlong *)(uVar16 + 0x18),0);
              uStack_158 = CONCAT44(uVar27,uVar26);
              fStack_150 = 1.0;
              uStack_e8 = 0;
              uStack_e0 = 0;
              func_0x000182149c00(&uStack_e8,&uStack_158,0);
              uStack_148 = uStack_e8;
              uStack_140 = uStack_e0;
              puVar9 = (undefined8 *)
                       UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_128,&uStack_148,0);
              if (lVar7 != 0) {
                uStack_148 = *puVar9;
                uStack_140 = puVar9[1];
                uStack_138 = *(undefined4 *)(puVar9 + 2);
                FUN_180004fc0(0x6d,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_148);
                if (*(longlong *)(uVar16 + 0x18) != 0) {
                  lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                    (*(longlong *)(uVar16 + 0x18),0);
                  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  iVar15 = iStackX_10;
                  switch(param_3) {
                  case 1:
                    if (iStackX_10 == 0) {
                      fVar19 = 204.0;
                      fVar25 = 204.0;
                      fVar20 = fVar19;
                    }
                    else {
                      fVar19 = 221.0;
                      fVar25 = 51.0;
                      fVar20 = 68.0;
                    }
                    break;
                  case 2:
                    if (iStackX_10 == 0) {
                      fVar19 = 187.0;
                      fVar25 = 153.0;
                      fVar20 = 170.0;
                    }
                    else {
                      fVar19 = 221.0;
                      fVar25 = 255.0;
                      fVar20 = 69.0;
                    }
                    break;
                  default:
                    fVar19 = 153.0;
                    fVar25 = 255.0;
                    fVar20 = fVar19;
                    break;
                  case 5:
                    fVar19 = 85.0;
                    fVar25 = 51.0;
                    fVar20 = 204.0;
                    break;
                  case 6:
                    fVar19 = 34.0;
                    fVar25 = 238.0;
                    fVar20 = 187.0;
                    break;
                  case 7:
                    fVar19 = 170.0;
                    fVar25 = 102.0;
                    fVar20 = 136.0;
                  }
                  uStack_148 = CONCAT44(fVar20 / 255.0,fVar19 / 255.0);
                  uStack_140 = CONCAT44(0x3f800000,fVar25 / 255.0);
                  puVar9 = (undefined8 *)
                           UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_128,&uStack_148,0)
                  ;
                  if (lVar7 != 0) {
                    uStack_148 = *puVar9;
                    uStack_140 = puVar9[1];
                    uStack_138 = *(undefined4 *)(puVar9 + 2);
                    FUN_180004fc0(0x2f,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_148);
                    if (*(longlong *)(uVar16 + 0x18) != 0) {
                      lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                        (*(longlong *)(uVar16 + 0x18),0);
                      uVar10 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                      if (lVar7 != 0) {
                        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar7,uVar10);
                        if (*(longlong *)(uVar16 + 0x20) != 0) {
                          lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                            (*(longlong *)(uVar16 + 0x20),0);
                          uVar10 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                          if (lVar7 != 0) {
                            FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar7,uVar10);
code_r0x00018074f1ec:
                            *(longlong *)(uVar16 + 0x28) = param_1;
                            func_0x000180314690(uVar16 + 0x28,param_1);
                            *(undefined4 *)(uVar16 + 0x30) = uVar3;
                            if ((*(longlong *)(param_1 + 0x48) == 0) ||
                               (fVar20 = *(float *)(*(longlong *)(param_1 + 0x48) + 0x10),
                               fVar20 <= 0.0)) {
                              fVar20 = 1.6;
                            }
                            else {
                              fVar20 = fVar20 * 1.8;
                            }
                            *(float *)(uVar16 + 0x34) = fVar20;
                            if (*(int *)(TI_SparkMontaria + 0xe4) == 0) {
                              func_0x000180315660();
                            }
                            cVar6 = SparkMontaria__Corpo(param_1,&uStack_a8,afStack_f0,0);
                            if ((cVar6 != '\0') && (0.0 < afStack_f0[0])) {
                              *(float *)(uVar16 + 0x34) = afStack_f0[0] * 1.8;
                            }
                            if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                              func_0x000180315660();
                            }
                            if (cRam00000001834b42a6 == '\0') {
                              FUN_180315380(TI_SparkMontaria);
                              cRam00000001834b42a6 = '\x01';
                            }
                            uStack_158 = 0;
                            fStack_150 = 0.0;
                            auStackX_8[0] = 0;
                            if (*(int *)(TI_SparkMontaria + 0xe4) == 0) {
                              func_0x000180315660();
                            }
                            SparkMontaria__Corpo(param_1,&uStack_158,auStackX_8,0);
                            if (DAT_1834b2f30 == '\0') {
                              FUN_180315380(TI_UnityEngine.Vector3);
                              DAT_1834b2f30 = '\x01';
                            }
                            bVar17 = cRam00000001834b42af == '\0';
                            fVar20 = *(float *)(uVar16 + 0x34);
                            lVar7 = *(longlong *)(TI_UnityEngine.Vector3 + 0xb8);
                            fVar19 = *(float *)(lVar7 + 0x1c);
                            fVar25 = *(float *)(lVar7 + 0x20);
                            fVar2 = *(float *)(lVar7 + 0x18);
                            *(undefined4 *)(uVar16 + 0x44) = uVar18;
                            *(float *)(uVar16 + 0x3c) = fVar20 * fVar19 + uStack_158._4_4_;
                            *(float *)(uVar16 + 0x40) = fVar20 * fVar25 + fStack_150;
                            *(float *)(uVar16 + 0x38) = fVar20 * fVar2 + (float)uStack_158;
                            if (bVar17) {
                              FUN_180315380(TI_SparkTextoDano);
                              cRam00000001834b42af = '\x01';
                            }
                            iVar11 = param_3 + -1;
                            if (iVar15 == 0) {
                              if ((iVar11 == 0) || (param_3 == 2)) {
                                if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                                  func_0x000180315660(TI_SparkTextoDano);
                                }
                                uVar10 = *(undefined8 *)
                                          (*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x68);
                              }
                              else if (iVar11 == 2) {
                                if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                                  func_0x000180315660(TI_SparkTextoDano);
                                }
                                uVar10 = *(undefined8 *)
                                          (*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x80);
                              }
                              else if (iVar11 == 3) {
                                if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                                  func_0x000180315660(TI_SparkTextoDano);
                                }
                                uVar10 = *(undefined8 *)
                                          (*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x88);
                              }
                              else {
                                if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                                  func_0x000180315660(TI_SparkTextoDano);
                                }
                                uVar10 = *(undefined8 *)
                                          (*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x70);
                              }
                            }
                            else {
                              switch(iVar11) {
                              case 0:
                              case 1:
                                if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                                  func_0x000180315660(TI_SparkTextoDano);
                                }
                                uVar10 = *(undefined8 *)
                                          (*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x90);
                                break;
                              case 2:
                                if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                                  func_0x000180315660(TI_SparkTextoDano);
                                }
                                uVar10 = *(undefined8 *)
                                          (*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x98);
                                break;
                              default:
                                if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                                  func_0x000180315660(TI_SparkTextoDano);
                                }
                                uVar10 = *(undefined8 *)
                                          (*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x78);
                                break;
                              case 6:
                              case 7:
                                if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                                  func_0x000180315660(TI_SparkTextoDano);
                                }
                                uVar10 = *(undefined8 *)
                                          (*(longlong *)(TI_SparkTextoDano + 0xb8) + 0xa0);
                              }
                            }
                            *(undefined8 *)(uVar16 + 0x48) = uVar10;
                            func_0x000180314690(uVar16 + 0x48);
                            *(undefined1 *)(uVar16 + 0x58) = 1;
                            if (*(longlong *)(uVar16 + 0x10) != 0) {
                              lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                                (*(longlong *)(uVar16 + 0x10),0);
                              uVar10 = func_0x000182601c10();
                              if (lVar7 != 0) {
                                FUN_180005060(0x5b,TI_UnityEngine.UIElements.IStyle,lVar7,uVar10);
                                if (*(longlong *)(uVar16 + 0x10) != 0) {
                                  lVar7 = UnityEngine_UIElements_VisualElement__get_style
                                                    (*(longlong *)(uVar16 + 0x10),0);
                                  uVar10 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                                  if (lVar7 != 0) {
                                    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar7,uVar10);
                                    if (*(longlong *)(uVar16 + 0x10) != 0) {
                                      UnityEngine_UIElements_VisualElement__BringToFront
                                                (*(longlong *)(uVar16 + 0x10),0);
                                      uVar10 = *(undefined8 *)
                                                (*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x130)
                                      ;
                                      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                                        func_0x000180315660();
                                      }
                                      cVar6 = UnityEngine_Object__op_Equality(uVar10,0,0);
                                      if (cVar6 != '\0') {
                                        lVar7 = func_0x000180315580(TI_UnityEngine.GameObject);
                                        UnityEngine_GameObject___ctor(lVar7,LIT_"'SparkTextoDano'",0);
                                        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                                          func_0x000180315660();
                                        }
                                        UnityEngine_Object__DontDestroyOnLoad(lVar7,0);
                                        if (lVar7 == 0) goto DAT_18074f72e;
                                        uVar10 = FUN_1809e9600(lVar7,MR_UnityEngine.GameObject.AddComponent<SparkTextoDano.Executor>);
                                        if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                                          func_0x000180315660();
                                        }
                                        *(undefined8 *)
                                         (*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x130) =
                                             uVar10;
                                        func_0x000180314690(*(longlong *)
                                                             (TI_SparkTextoDano + 0xb8) + 0x130,
                                                            uVar10);
                                      }
                                      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
                                        func_0x000180315660(TI_SparkTextoDano);
                                      }
                                      lVar7 = *(longlong *)
                                               (*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x130);
                                      if (lVar7 != 0) {
                                        UnityEngine_Behaviour__set_enabled(lVar7,1,0);
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
DAT_18074f72e:
                            FUN_1803155d0();
                            pcVar5 = (code *)swi(3);
                            (*pcVar5)();
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

