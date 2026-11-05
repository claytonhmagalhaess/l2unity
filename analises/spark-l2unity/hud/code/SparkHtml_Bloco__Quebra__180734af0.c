// SparkHtml_Bloco__Quebra__180734af0 @ 0x180734af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkHtml_Bloco__Quebra__180734af0(longlong param_1,char param_2,float param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ushort uVar8;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_28 [32];
  
  if (cRam00000001834b426f == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b426f = '\x01';
  }
  SparkHtml_Bloco__SoltaTexto__180734d30(param_1,0);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if (param_2 != '\0') {
      if ((0.0 < *(float *)(param_1 + 0x34)) && (11.0 <= param_3)) {
        param_3 = *(float *)(param_1 + 0x34);
      }
      lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
      UnityEngine_UIElements_VisualElement___ctor(lVar4,0);
      if (lVar4 != 0) {
        plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_38,param_3,0)
        ;
        if (plVar5 != (longlong *)0x0) {
          lVar7 = *plVar5;
          uVar8 = 0;
          uVar1 = *puVar6;
          uVar2 = *(undefined4 *)(puVar6 + 1);
          if (*(ushort *)(lVar7 + 0x12e) != 0) {
            do {
              if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar6 = (undefined8 *)
                         ((longlong)
                          (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) +
                          0x43) * 0x10 + 0x138 + lVar7);
                goto code_r0x000180734c05;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(ushort *)(lVar7 + 0x12e));
          }
          puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180734c05:
          uStack_38 = uVar1;
          uStack_30 = uVar2;
          (*(code *)*puVar6)(plVar5,&uStack_38,puVar6[1]);
          if (*(longlong *)(param_1 + 0x10) != 0) {
            UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x10),lVar4,0);
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
            return;
          }
        }
      }
code_r0x000180734d22:
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = 0;
    func_0x000180314690(param_1 + 0x20,0);
    if (((param_2 != '\0') && (0.0 < *(float *)(param_1 + 0x34))) && (11.0 <= param_3)) {
      lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
      UnityEngine_UIElements_VisualElement___ctor(lVar4,0);
      if (lVar4 != 0) {
        lVar7 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
        puVar6 = (undefined8 *)
                 UnityEngine_UIElements_StyleLength__op_Implicit
                           (auStack_28,*(undefined4 *)(param_1 + 0x34),0);
        if (lVar7 != 0) {
          uStack_30 = *(undefined4 *)(puVar6 + 1);
          uStack_38 = *puVar6;
          FUN_1800050f0(0x43,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_38);
          if (*(longlong *)(param_1 + 0x10) != 0) {
            UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x10),lVar4,0);
            return;
          }
        }
      }
      goto code_r0x000180734d22;
    }
  }
  return;
}

