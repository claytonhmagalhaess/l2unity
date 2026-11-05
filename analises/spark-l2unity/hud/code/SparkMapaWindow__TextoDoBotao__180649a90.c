// SparkMapaWindow__TextoDoBotao__180649a90 @ 0x180649a90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__TextoDoBotao__180649a90
               (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ushort uVar7;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b3d2b == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    cRam00000001834b3d2b = '\x01';
  }
  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
    func_0x000180315660();
  }
  plVar5 = (longlong *)FUN_180b0e310(param_2,0,0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
  if (plVar5 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0x1e0) == '\0') {
      param_5 = param_3;
    }
    (**(code **)(*plVar5 + 0xe48))(plVar5,param_5,*(undefined8 *)(*plVar5 + 0xe50));
  }
  if (param_2 != 0) {
    plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_2,0);
    puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar5 != (longlong *)0x0) {
      lVar3 = *plVar5;
      uVar2 = *(undefined4 *)(puVar6 + 1);
      uVar1 = *puVar6;
      if (*(ushort *)(lVar3 + 0x12e) != 0) {
        uVar7 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar7 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar6 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 0xad) *
                      0x10 + 0x138 + lVar3);
            goto code_r0x000180649bd5;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12e));
      }
      puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180649bd5:
      uStack_28 = uVar1;
      uStack_20 = uVar2;
      (*(code *)*puVar6)(plVar5,&uStack_28,puVar6[1]);
      return;
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

