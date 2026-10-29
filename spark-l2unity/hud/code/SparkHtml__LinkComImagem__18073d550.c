// SparkHtml__LinkComImagem__18073d550 @ 0x18073d550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
SparkHtml__LinkComImagem__18073d550
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  if (cRam00000001834b4256 == '\0') {
    FUN_180315380(TI_System.Action<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_SparkHtml.Bloco);
    FUN_180315380(TI_ButtonClickSoundManipulator);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
    FUN_180315380(MD_SparkHtml.__c__DisplayClass25_0._LinkComImagem_b__0);
    FUN_180315380(MD_SparkHtml.__c__DisplayClass25_0._LinkComImagem_b__1);
    FUN_180315380(MD_SparkHtml.__c__DisplayClass25_0._LinkComImagem_b__2);
    FUN_180315380(MD_SparkHtml.__c__DisplayClass25_0._LinkComImagem_b__3);
    FUN_180315380(TI_SparkHtml.<>c__DisplayClass25_0);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryBuilder<UnityEngine.UIElements.VisualElement>.ForEach);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Query<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b4256 = '\x01';
  }
  lVar3 = func_0x000180315580(TI_SparkHtml.<>c__DisplayClass25_0);
  Gear__UpdateWeaponType__1803dadf0(lVar3,0);
  if (lVar3 != 0) {
    *(longlong *)(lVar3 + 0x18) = param_1;
    func_0x000180314690(lVar3 + 0x18,param_1);
    *(undefined8 *)(lVar3 + 0x20) = param_4;
    func_0x000180314690(lVar3 + 0x20,param_4);
    *(undefined8 *)(lVar3 + 0x28) = param_5;
    func_0x000180314690(lVar3 + 0x28);
    uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
    UnityEngine_UIElements_VisualElement___ctor(uVar4,0);
    *(undefined8 *)(lVar3 + 0x10) = uVar4;
    func_0x000180314690(lVar3 + 0x10,uVar4);
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar3 + 0x10),0);
      uVar4 = func_0x000182601c10(0,0);
      if (lVar5 != 0) {
        FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
        if (*(longlong *)(lVar3 + 0x10) != 0) {
          lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar3 + 0x10),0);
          uVar4 = FUN_180eb5810(2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Align>.op_Implicit);
          if (lVar5 != 0) {
            FUN_180005060(3,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
            uVar4 = *(undefined8 *)(lVar3 + 0x10);
            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
              func_0x000180315660();
            }
            SparkEstilo__Espaco__18071fb80
                      (uVar4,0x40000000,0x40800000,0x40000000,CONCAT44(uVar7,0x40800000),0);
            if (*(longlong *)(param_1 + 0x10) != 0) {
              uVar4 = *(undefined8 *)(lVar3 + 0x10);
              uVar7 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x38);
              lVar5 = func_0x000180315580(TI_SparkHtml.Bloco);
              SparkHtml_Bloco___ctor__180734f70(lVar5,uVar4,1,uVar7,0);
              SparkHtml__Filhos__18073a8e0(param_1,param_2,lVar5,param_3,0);
              if (lVar5 != 0) {
                SparkHtml_Bloco__SoltaTexto__180734d30(lVar5,0);
                *(undefined8 *)(lVar5 + 0x20) = 0;
                func_0x000180314690(lVar5 + 0x20,0);
                uVar4 = *(undefined8 *)(lVar3 + 0x10);
                if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
                  func_0x000180315660();
                }
                FUN_180b0ec00(&uStack_88,uVar4,0,0,MR_UnityEngine.UIElements.UQueryExtensions.Query<UnityEngine.UIElements.VisualElement>);
                uStack_58 = uStack_88;
                uStack_50 = uStack_80;
                uStack_48 = uStack_78;
                uStack_44 = uStack_74;
                uStack_40 = uStack_70;
                uStack_3c = uStack_6c;
                uStack_38 = uStack_68;
                uStack_34 = uStack_64;
                uStack_30 = uStack_60;
                uStack_2c = uStack_5c;
                uVar4 = func_0x000180315580(TI_System.Action<UnityEngine.UIElements.VisualElement>);
                FUN_18055b980(uVar4,lVar3,MD_SparkHtml.__c__DisplayClass25_0._LinkComImagem_b__0,0);
                FUN_180f66ee0(&uStack_58,uVar4,MR_UnityEngine.UIElements.UQueryBuilder<UnityEngine.UIElements.VisualElement>.ForEach);
                cVar2 = func_0x000181707e50(*(undefined8 *)(lVar3 + 0x20),0);
                if (cVar2 != '\0') {
code_r0x00018073da01:
                  return *(undefined8 *)(lVar3 + 0x10);
                }
                lVar5 = *(longlong *)(lVar3 + 0x10);
                uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseEnterEvent>);
                FUN_18055b980(uVar4,lVar3,MD_SparkHtml.__c__DisplayClass25_0._LinkComImagem_b__1,0);
                if (lVar5 != 0) {
                  FUN_180990d50(lVar5,uVar4,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseEnterEvent>);
                  lVar5 = *(longlong *)(lVar3 + 0x10);
                  uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                  FUN_18055b980(uVar4,lVar3,MD_SparkHtml.__c__DisplayClass25_0._LinkComImagem_b__2,0);
                  if (lVar5 != 0) {
                    FUN_180990d50(lVar5,uVar4,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseLeaveEvent>);
                    lVar5 = *(longlong *)(lVar3 + 0x10);
                    uVar4 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseUpEvent>);
                    FUN_18055b980(uVar4,lVar3,MD_SparkHtml.__c__DisplayClass25_0._LinkComImagem_b__3,0);
                    if (lVar5 != 0) {
                      FUN_180990d50(lVar5,uVar4,0,MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseUpEvent>);
                      uVar4 = *(undefined8 *)(lVar3 + 0x10);
                      uVar6 = func_0x000180315580(TI_ButtonClickSoundManipulator);
                      BlinkingCursorManipulator___ctor__1807aa3c0(uVar6,uVar4,0);
                      UnityEngine_UIElements_VisualElementExtensions__AddManipulator(uVar4,uVar6,0);
                      goto code_r0x00018073da01;
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
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

