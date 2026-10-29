// SparkMapaWindow__Tile__180649c30 @ 0x180649c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkMapaWindow__Tile__180649c30(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  undefined4 uVar14;
  float afStackX_10 [2];
  longlong lStackX_20;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [64];
  
  if (cRam00000001834b3d44 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,float>.Remove);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,float>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,float>.set_Item);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.set_Item);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Data/UI/Assets/Mapa/tiles/'");
    cRam00000001834b3d44 = '\x01';
  }
  lStackX_20 = 0;
  afStackX_10[0] = 0.0;
  if (*(longlong *)(param_1 + 0x218) == 0) goto code_r0x00018064a262;
  cVar2 = FUN_1812698d0(*(longlong *)(param_1 + 0x218),param_2,&lStackX_20,MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.TryGetValue);
  if (cVar2 == '\0') {
    if (*(longlong *)(param_1 + 0x220) == 0) goto code_r0x00018064a262;
    cVar2 = FUN_18125ae60(*(longlong *)(param_1 + 0x220),param_2,afStackX_10,MR_System.Collections.Generic.Dictionary<string,float>.TryGetValue);
    if ((cVar2 == '\0') || (fVar13 = (float)FUN_1824366b0(0), 10.0 <= fVar13 - afStackX_10[0])) {
      uVar3 = System_String__Concat(LIT_"'Data/UI/Assets/Mapa/tiles/'",param_2,0);
      if (*(int *)(TI_SparkArte + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar3 = FUN_180a90ae0(uVar3,MR_SparkArte.Load<UnityEngine.Texture2D>);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
      lVar4 = *(longlong *)(param_1 + 0x220);
      if (cVar2 == '\0') {
        if (lVar4 != 0) {
          FUN_181252d30(lVar4,param_2,MR_System.Collections.Generic.Dictionary<string,float>.Remove);
          lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
          UnityEngine_UIElements_VisualElement___ctor(lVar4,0);
          lStackX_20 = lVar4;
          if (lVar4 != 0) {
            lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
            uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
            if ((lVar4 != 0) && (FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5), lStackX_20 != 0)) {
              lVar4 = UnityEngine_UIElements_VisualElement__get_style(lStackX_20,0);
              puVar6 = (undefined8 *)
                       UnityEngine_UIElements_StyleBackground__op_Implicit(auStack_78,uVar3,0);
              if (lVar4 != 0) {
                uStack_b8 = *puVar6;
                uStack_b0 = puVar6[1];
                uStack_a8 = *(undefined4 *)(puVar6 + 2);
                uStack_a4 = *(undefined4 *)((longlong)puVar6 + 0x14);
                uStack_a0 = *(undefined4 *)(puVar6 + 3);
                uStack_9c = *(undefined4 *)((longlong)puVar6 + 0x1c);
                uStack_98 = puVar6[4];
                FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar4,&uStack_b8);
                if (lStackX_20 != 0) {
                  UnityEngine_UIElements_VisualElement__set_pickingMode(lStackX_20,1,0);
                  if (*(longlong *)(param_1 + 0xb8) != 0) {
                    UnityEngine_UIElements_VisualElement__Add
                              (*(longlong *)(param_1 + 0xb8),lStackX_20,0);
                    if (*(longlong *)(param_1 + 0x218) != 0) {
                      FUN_18126c020(*(longlong *)(param_1 + 0x218),param_2,lStackX_20,
                                    MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.set_Item);
                      if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
                        func_0x000180315660(TI_SparkMapaWindow);
                      }
                      lVar4 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x98);
                      if (lVar4 != 0) {
                        uVar12 = 0;
                        do {
                          if (*(int *)(lVar4 + 0x18) <= (int)uVar12) {
                            return lStackX_20;
                          }
                          if (*(uint *)(lVar4 + 0x18) <= uVar12) {
                            FUN_1803155c0();
                            pcVar1 = (code *)swi(3);
                            lVar4 = (*pcVar1)();
                            return lVar4;
                          }
                          cVar2 = System_String__op_Inequality
                                            (*(undefined8 *)
                                              (lVar4 + 0x20 + (longlong)(int)uVar12 * 0x18),param_2,
                                             0);
                          if (cVar2 == '\0') {
                            lVar7 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
                            UnityEngine_UIElements_VisualElement___ctor(lVar7,0);
                            if (lVar7 == 0) break;
                            lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                            uVar3 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
                            if (lVar8 == 0) break;
                            FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar8,uVar3);
                            lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                            lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                            lVar10 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                            lVar11 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                            puVar6 = (undefined8 *)
                                     UnityEngine_UIElements_StyleLength__op_Implicit(auStack_88,0,0)
                            ;
                            if (lVar11 == 0) break;
                            uVar3 = *puVar6;
                            uVar14 = *(undefined4 *)(puVar6 + 1);
                            uStack_f8 = uVar3;
                            uStack_f0 = uVar14;
                            FUN_1800050f0(0x2d,TI_UnityEngine.UIElements.IStyle,lVar11,&uStack_f8);
                            if (((lVar10 == 0) ||
                                (uStack_e8 = uVar3, uStack_e0 = uVar14,
                                FUN_1800050f0(0x69,TI_UnityEngine.UIElements.IStyle,lVar10,&uStack_e8), lVar9 == 0))
                               || (uStack_d8 = uVar3, uStack_d0 = uVar14,
                                  FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_d8), lVar8 == 0))
                            break;
                            uStack_c8 = uVar3;
                            uStack_c0 = uVar14;
                            FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar8,&uStack_c8);
                            lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                            uVar3 = func_0x000182601c10(0,0);
                            if (lVar8 == 0) break;
                            FUN_180005060(0x5b,TI_UnityEngine.UIElements.IStyle,lVar8,uVar3);
                            lVar8 = UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
                            uVar3 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                            if (lVar8 == 0) break;
                            FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar8,uVar3);
                            UnityEngine_UIElements_VisualElement__set_pickingMode(lVar7,1,0);
                            if (lStackX_20 == 0) break;
                            UnityEngine_UIElements_VisualElement__Add(lStackX_20,lVar7,0);
                            if (*(longlong *)(param_1 + 0x260) == 0) break;
                            FUN_18126c020(*(longlong *)(param_1 + 0x260),param_2,lVar7,
                                          MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>.set_Item);
                          }
                          uVar12 = uVar12 + 1;
                        } while( true );
                      }
                    }
                  }
                }
              }
            }
          }
        }
code_r0x00018064a262:
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        lVar4 = (*pcVar1)();
        return lVar4;
      }
      uVar14 = FUN_1824366b0(0);
      if (lVar4 == 0) goto code_r0x00018064a262;
      FUN_18126c130(lVar4,param_2,uVar14,MR_System.Collections.Generic.Dictionary<string,float>.set_Item);
    }
    lStackX_20 = 0;
  }
  return lStackX_20;
}

