// Nameplate__AtualizaClan__1806751c0 @ 0x1806751c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Nameplate__AtualizaClan__1806751c0(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  float fVar12;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined1 auStack_38 [48];
  
  if (cRam00000001834b3e07 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkClan);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"''");
    cRam00000001834b3e07 = '\x01';
  }
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if (cVar3 != '\0') {
    return;
  }
  lVar9 = *(longlong *)(param_1 + 0x50);
  if (lVar9 != 0) {
    if (*(longlong *)(lVar9 + 0x30) == 0) {
      return;
    }
    lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x30) + 0x20);
    lVar11 = LIT_"''";
    if (lVar9 != 0) {
      lVar11 = lVar9;
    }
    plVar1 = *(longlong **)(param_1 + 0x30);
    if (plVar1 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar1 + 0xe38))(plVar1,*(undefined8 *)(*plVar1 + 0xe40));
      cVar3 = System_String__op_Inequality(uVar6,lVar11,0);
      if (cVar3 != '\0') {
        plVar1 = *(longlong **)(param_1 + 0x30);
        if (plVar1 == (longlong *)0x0) goto DAT_180675a73;
        (**(code **)(*plVar1 + 0xe48))(plVar1,lVar11,*(undefined8 *)(*plVar1 + 0xe50));
      }
      fVar12 = (float)FUN_1824366b0(0);
      if (fVar12 < *(float *)(param_1 + 0x108)) {
        return;
      }
      fVar12 = (float)FUN_1824366b0(0);
      *(float *)(param_1 + 0x108) = fVar12 + 0.5;
      Nameplate__AtualizaRelacao__180676120(param_1,0);
      if ((*(longlong *)(param_1 + 0x50) != 0) &&
         (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30), lVar9 != 0)) {
        uVar5 = *(undefined4 *)(lVar9 + 0x9c);
        if (*(int *)(TI_SparkClan + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar6 = SparkClan__Crest(uVar5,0);
        if ((*(longlong *)(param_1 + 0x50) != 0) &&
           (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30), lVar9 != 0)) {
          uVar7 = SparkClan__AllyCrest(*(undefined4 *)(lVar9 + 0xa4),0);
          uVar8 = *(undefined8 *)(param_1 + 0xf8);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar3 = UnityEngine_Object__op_Equality(uVar6,uVar8,0);
          if (cVar3 != '\0') {
            uVar8 = *(undefined8 *)(param_1 + 0x100);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar3 = UnityEngine_Object__op_Equality(uVar7,uVar8,0);
            if (cVar3 != '\0') {
              return;
            }
          }
          *(undefined8 *)(param_1 + 0xf8) = uVar6;
          func_0x000180314690(param_1 + 0xf8,uVar6);
          *(undefined8 *)(param_1 + 0x100) = uVar7;
          func_0x000180314690(param_1 + 0x100,uVar7);
          if (*(longlong *)(param_1 + 0xe0) == 0) {
            uVar8 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
            UnityEngine_UIElements_VisualElement___ctor(uVar8,0);
            *(undefined8 *)(param_1 + 0xe0) = uVar8;
            func_0x000180314690(param_1 + 0xe0,uVar8);
            if (*(longlong *)(param_1 + 0xe0) == 0) goto DAT_180675a73;
            UnityEngine_UIElements_VisualElement__set_pickingMode(*(longlong *)(param_1 + 0xe0),1,0)
            ;
            if (*(longlong *)(param_1 + 0xe0) == 0) goto DAT_180675a73;
            lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xe0),0)
            ;
            uVar8 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.FlexDirection>.op_Implicit);
            if (lVar9 == 0) goto DAT_180675a73;
            FUN_180005060(0x39,TI_UnityEngine.UIElements.IStyle,lVar9,uVar8);
            if (*(longlong *)(param_1 + 0xe0) == 0) goto DAT_180675a73;
            lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xe0),0)
            ;
            uVar8 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
            if (lVar9 == 0) goto DAT_180675a73;
            FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar9,uVar8);
            if (*(longlong *)(param_1 + 0xe0) == 0) goto DAT_180675a73;
            lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xe0),0)
            ;
            uVar8 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
            if (lVar9 == 0) goto DAT_180675a73;
            FUN_180005060(5,TI_UnityEngine.UIElements.IStyle,lVar9,uVar8);
            if (*(longlong *)(param_1 + 0xe0) == 0) goto DAT_180675a73;
            lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xe0),0)
            ;
            puVar10 = (undefined8 *)
                      UnityEngine_UIElements_StyleLength__op_Implicit(auStack_78,0x40000000,0);
            if (lVar9 == 0) goto DAT_180675a73;
            uStack_80 = *(undefined4 *)(puVar10 + 1);
            uStack_88 = *puVar10;
            FUN_1800050f0(0x4f,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_88);
            if (*(longlong *)(param_1 + 0xe0) == 0) goto DAT_180675a73;
            lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xe0),0)
            ;
            uVar8 = func_0x000182601c10(0,0);
            if (lVar9 == 0) goto DAT_180675a73;
            FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar9,uVar8);
            lVar9 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
            UnityEngine_UIElements_VisualElement___ctor(lVar9,0);
            if (lVar9 == 0) goto DAT_180675a73;
            UnityEngine_UIElements_VisualElement__set_pickingMode(lVar9,1,0);
            *(longlong *)(param_1 + 0xe8) = lVar9;
            func_0x000180314690(param_1 + 0xe8,lVar9);
            if (*(longlong *)(param_1 + 0xe8) == 0) goto DAT_180675a73;
            lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xe8),0)
            ;
            puVar10 = (undefined8 *)
                      UnityEngine_UIElements_StyleLength__op_Implicit(auStack_78,0x41000000,0);
            if (lVar9 == 0) goto DAT_180675a73;
            uStack_80 = *(undefined4 *)(puVar10 + 1);
            uStack_88 = *puVar10;
            FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_88);
            if (*(longlong *)(param_1 + 0xe8) == 0) goto DAT_180675a73;
            lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xe8),0)
            ;
            puVar10 = (undefined8 *)
                      UnityEngine_UIElements_StyleLength__op_Implicit(auStack_78,0x41400000,0);
            if (lVar9 == 0) goto DAT_180675a73;
            uStack_80 = *(undefined4 *)(puVar10 + 1);
            uStack_88 = *puVar10;
            FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_88);
            lVar9 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
            UnityEngine_UIElements_VisualElement___ctor(lVar9,0);
            if (lVar9 == 0) goto DAT_180675a73;
            UnityEngine_UIElements_VisualElement__set_pickingMode(lVar9,1,0);
            *(longlong *)(param_1 + 0xf0) = lVar9;
            func_0x000180314690(param_1 + 0xf0,lVar9);
            if (*(longlong *)(param_1 + 0xf0) == 0) goto DAT_180675a73;
            lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xf0),0)
            ;
            puVar10 = (undefined8 *)
                      UnityEngine_UIElements_StyleLength__op_Implicit(auStack_78,0x41800000,0);
            if (lVar9 == 0) goto DAT_180675a73;
            uStack_80 = *(undefined4 *)(puVar10 + 1);
            uStack_88 = *puVar10;
            FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_88);
            if (*(longlong *)(param_1 + 0xf0) == 0) goto DAT_180675a73;
            lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xf0),0)
            ;
            puVar10 = (undefined8 *)
                      UnityEngine_UIElements_StyleLength__op_Implicit(auStack_78,0x41400000,0);
            if (lVar9 == 0) goto DAT_180675a73;
            uStack_80 = *(undefined4 *)(puVar10 + 1);
            uStack_88 = *puVar10;
            FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_88);
            if (*(longlong *)(param_1 + 0xe0) == 0) goto DAT_180675a73;
            UnityEngine_UIElements_VisualElement__Add
                      (*(longlong *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8),0);
            if (*(longlong *)(param_1 + 0xe0) == 0) goto DAT_180675a73;
            UnityEngine_UIElements_VisualElement__Add
                      (*(longlong *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xf0),0);
            if (*(longlong *)(param_1 + 0x28) == 0) goto DAT_180675a73;
            lVar11 = func_0x0001825d76d0(*(longlong *)(param_1 + 0x28),0);
            lVar9 = *(longlong *)(param_1 + 0x28);
            if (lVar11 == 0) {
              if (lVar9 == 0) goto DAT_180675a73;
              UnityEngine_UIElements_VisualElement__Add(lVar9,*(undefined8 *)(param_1 + 0xe0),0);
            }
            else {
              uVar5 = UnityEngine_UIElements_VisualElement__IndexOf(lVar11,lVar9,0);
              UnityEngine_UIElements_VisualElement__Insert
                        (lVar11,uVar5,*(undefined8 *)(param_1 + 0xe0),0);
            }
          }
          if (*(longlong *)(param_1 + 0xf0) != 0) {
            lVar9 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xf0),0)
            ;
            puVar10 = (undefined8 *)
                      UnityEngine_UIElements_StyleBackground__op_Implicit(auStack_38,uVar6,0);
            if (lVar9 != 0) {
              uStack_68 = *puVar10;
              uStack_60 = puVar10[1];
              uStack_58 = *(undefined4 *)(puVar10 + 2);
              uStack_54 = *(undefined4 *)((longlong)puVar10 + 0x14);
              uStack_50 = *(undefined4 *)(puVar10 + 3);
              uStack_4c = *(undefined4 *)((longlong)puVar10 + 0x1c);
              uStack_48 = puVar10[4];
              FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_68);
              if (*(longlong *)(param_1 + 0xf0) != 0) {
                lVar9 = UnityEngine_UIElements_VisualElement__get_style
                                  (*(longlong *)(param_1 + 0xf0),0);
                if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                  func_0x000180315660();
                }
                bVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                uVar6 = FUN_180eb5810(bVar4 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                if (lVar9 != 0) {
                  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar9,uVar6);
                  if (*(longlong *)(param_1 + 0xe8) != 0) {
                    lVar9 = UnityEngine_UIElements_VisualElement__get_style
                                      (*(longlong *)(param_1 + 0xe8),0);
                    puVar10 = (undefined8 *)
                              UnityEngine_UIElements_StyleBackground__op_Implicit
                                        (auStack_38,uVar7,0);
                    if (lVar9 != 0) {
                      uStack_68 = *puVar10;
                      uStack_60 = puVar10[1];
                      uStack_58 = *(undefined4 *)(puVar10 + 2);
                      uStack_54 = *(undefined4 *)((longlong)puVar10 + 0x14);
                      uStack_50 = *(undefined4 *)(puVar10 + 3);
                      uStack_4c = *(undefined4 *)((longlong)puVar10 + 0x1c);
                      uStack_48 = puVar10[4];
                      FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_68);
                      if (*(longlong *)(param_1 + 0xe8) != 0) {
                        lVar9 = UnityEngine_UIElements_VisualElement__get_style
                                          (*(longlong *)(param_1 + 0xe8),0);
                        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        bVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
                        uVar6 = FUN_180eb5810(bVar4 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                        if (lVar9 != 0) {
                          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar9,uVar6);
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
DAT_180675a73:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

