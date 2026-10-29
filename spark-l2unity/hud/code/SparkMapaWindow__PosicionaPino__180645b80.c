// SparkMapaWindow__PosicionaPino__180645b80 @ 0x180645b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__PosicionaPino__180645b80(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uStackX_8;
  float fStackX_1c;
  undefined8 uStack_58;
  float fStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 auStack_38 [48];
  
  if (cRam00000001834b3d47 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkQuests);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3d47 = '\x01';
  }
  uStack_58 = 0;
  fStack_50 = 0.0;
  uStackX_8 = 0;
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    return;
  }
  if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = SparkQuests__AlvoDoLocal(&uStack_58,&uStackX_8);
  uVar4 = uStack_58;
  if (cVar3 == '\0') {
DAT_180645e4e:
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xd8),0);
      uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar5 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
        return;
      }
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x188) != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x20);
      if (lVar5 == 0) goto code_r0x000180645e93;
      if (*(uint *)(lVar5 + 0x18) <= *(uint *)(param_1 + 400)) {
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(longlong *)(param_1 + 0x188) == 0) ||
         (lVar5 = *(longlong *)(lVar5 + 0x20 + (longlong)(int)*(uint *)(param_1 + 400) * 8),
         lVar5 == 0)) goto code_r0x000180645e93;
      if (*(char *)(*(longlong *)(param_1 + 0x188) + 0x28) == '\0') {
        cVar3 = SparkMapaWindow_Andar__NaConstrucao__180654600(lVar5,uStack_58);
      }
      else {
        cVar3 = SparkMapaWindow_Andar__NaTextura__180654860();
      }
      if ((cVar3 == '\0') ||
         ((fStack_50 != 0.0 &&
          ((*(float *)(lVar5 + 0x2c) < fStack_50 || (fStack_50 < *(float *)(lVar5 + 0x30)))))))
      goto DAT_180645e4e;
    }
    uVar4 = SparkMapaWindow__NaVista__180640ab0(param_1,uVar4,0);
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xd8),0);
      uVar6 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar5 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
        if (*(longlong *)(param_1 + 0xd8) != 0) {
          lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xd8),0);
          puVar7 = (undefined8 *)
                   UnityEngine_UIElements_StyleLength__op_Implicit(auStack_38,(float)uVar4 - 80.0,0)
          ;
          if (lVar5 != 0) {
            uStack_48 = *puVar7;
            uStack_40 = *(undefined4 *)(puVar7 + 1);
            FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_48);
            if (*(longlong *)(param_1 + 0xd8) != 0) {
              fStackX_1c = (float)((ulonglong)uVar4 >> 0x20);
              lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                (*(longlong *)(param_1 + 0xd8),0);
              puVar7 = (undefined8 *)
                       UnityEngine_UIElements_StyleLength__op_Implicit
                                 (auStack_38,fStackX_1c - 31.0,0);
              if (lVar5 != 0) {
                uStack_48 = *puVar7;
                uStack_40 = *(undefined4 *)(puVar7 + 1);
                FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_48);
                plVar1 = *(longlong **)(param_1 + 0xe0);
                if (plVar1 != (longlong *)0x0) {
                  (**(code **)(*plVar1 + 0xe48))(plVar1,uStackX_8,*(undefined8 *)(*plVar1 + 0xe50));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x000180645e93:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

