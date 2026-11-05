// OptionsWindow__Condiciona__180691a40 @ 0x180691a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong OptionsWindow__Condiciona__180691a40
                   (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ushort uVar12;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if (cRam00000001834b3e98 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.Add);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass59_0._Condiciona_b__0);
    FUN_180315380(TI_OptionsWindow.<>c__DisplayClass59_0);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"''");
    cRam00000001834b3e98 = '\x01';
  }
  lVar5 = func_0x000180315580(TI_OptionsWindow.<>c__DisplayClass59_0);
  func_0x0001803f01b0(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = param_3;
    func_0x000180314690(lVar5 + 0x10,param_3);
    *(undefined8 *)(lVar5 + 0x18) = param_2;
    func_0x000180314690(lVar5 + 0x18,param_2);
    lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(lVar6,0);
    if (lVar6 != 0) {
      lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
      uVar8 = func_0x000182601c10(0,0);
      if (lVar7 != 0) {
        FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar7,uVar8);
        UnityEngine_UIElements_VisualElement__Add(lVar6,*(undefined8 *)(lVar5 + 0x18),0);
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar7 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uStack_78 = *(undefined8 *)(lVar7 + 0x50);
        uStack_70 = *(undefined4 *)(lVar7 + 0x58);
        uStack_6c = *(undefined4 *)(lVar7 + 0x5c);
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        func_0x000180cb7cb0(&uStack_58,&uStack_78,MR_System.Nullable<UnityEngine.Color>..ctor);
        uStack_78 = uStack_58;
        uStack_70 = (undefined4)uStack_50;
        uStack_6c = uStack_50._4_4_;
        uStack_68 = uStack_48;
        uVar8 = SparkEstilo__Texto(LIT_"''",9,&uStack_78,0,0);
        *(undefined8 *)(lVar5 + 0x20) = uVar8;
        func_0x000180314690(lVar5 + 0x20,uVar8);
        if (*(longlong *)(lVar5 + 0x20) != 0) {
          lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar5 + 0x20),0);
          uVar8 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.WhiteSpace>.op_Implicit);
          if (lVar7 != 0) {
            FUN_180005060(0xab,TI_UnityEngine.UIElements.IStyle,lVar7,uVar8);
            if (*(longlong *)(lVar5 + 0x20) != 0) {
              plVar9 = (longlong *)
                       UnityEngine_UIElements_VisualElement__get_style
                                 (*(longlong *)(lVar5 + 0x20),0);
              puVar10 = (undefined8 *)
                        UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_78,0x40000000,0);
              if (plVar9 != (longlong *)0x0) {
                lVar7 = *plVar9;
                uVar1 = *(undefined4 *)(puVar10 + 1);
                uVar8 = *puVar10;
                if (*(ushort *)(lVar7 + 0x12e) != 0) {
                  uVar12 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                        TI_UnityEngine.UIElements.IStyle) {
                      puVar10 = (undefined8 *)
                                ((longlong)
                                 (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 +
                                          (ulonglong)uVar12 * 0x10) + 0x4b) * 0x10 + 0x138 + lVar7);
                      goto code_r0x000180691cf9;
                    }
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < *(ushort *)(lVar7 + 0x12e));
                }
                puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x000180691cf9:
                uStack_78 = uVar8;
                uStack_70 = uVar1;
                (*(code *)*puVar10)(plVar9,&uStack_78,puVar10[1]);
                UnityEngine_UIElements_VisualElement__Add(lVar6,*(undefined8 *)(lVar5 + 0x20),0);
                lVar11 = func_0x000180315580(TI_System.Action);
                FUN_1816a9c60(lVar11,lVar5,MD_OptionsWindow.__c__DisplayClass59_0._Condiciona_b__0,0);
                lVar7 = MR_System.Collections.Generic.List<System.Action>.Add;
                lVar5 = *(longlong *)(param_1 + 0xb0);
                if (lVar5 != 0) {
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  lVar3 = *(longlong *)(lVar5 + 0x10);
                  if (lVar3 != 0) {
                    uVar2 = *(uint *)(lVar5 + 0x18);
                    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
                      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                        FUN_1803155c0();
                        pcVar4 = (code *)swi(3);
                        lVar5 = (*pcVar4)();
                        return lVar5;
                      }
                      *(longlong *)(lVar3 + 0x20 + (longlong)(int)uVar2 * 8) = lVar11;
                      func_0x000180314690(lVar3 + 0x20 + (longlong)(int)uVar2 * 8,lVar11);
                    }
                    else {
                      FUN_181645af0(lVar5,lVar11,
                                    *(undefined8 *)
                                     (*(longlong *)(*(longlong *)(lVar7 + 0x20) + 0xc0) + 0x70));
                    }
                    if (lVar11 != 0) {
                      (**(code **)(lVar11 + 0x18))
                                (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
                      return lVar6;
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
  pcVar4 = (code *)swi(3);
  lVar5 = (*pcVar4)();
  return lVar5;
}

