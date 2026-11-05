// SparkEstilo__Marca__180721270 @ 0x180721270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkEstilo__Marca__180721270(longlong param_1,char param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ushort uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_68 [96];
  
  if (cRam00000001834b41fa == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(LIT_"'spark-escolhida'");
    cRam00000001834b41fa = '\x01';
  }
  if (param_1 != 0) {
    if (param_2 == '\0') {
      UnityEngine_UIElements_VisualElement__RemoveFromClassList();
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
      plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
    }
    else {
      UnityEngine_UIElements_VisualElement__AddToClassList(param_1,LIT_"'spark-escolhida'",0);
      plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660(TI_SparkEstilo);
      }
      lVar1 = *(longlong *)(TI_SparkEstilo + 0xb8);
      uVar8 = *(undefined4 *)(lVar1 + 0xb0);
      uVar9 = *(undefined4 *)(lVar1 + 0xb4);
      uVar10 = *(undefined4 *)(lVar1 + 0xb8);
      uVar11 = *(undefined4 *)(lVar1 + 0xbc);
    }
    uStack_88 = CONCAT44(uVar9,uVar8);
    uStack_80 = CONCAT44(uVar11,uVar10);
    puVar6 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(auStack_68,&uStack_88,0);
    if (plVar5 != (longlong *)0x0) {
      lVar1 = *plVar5;
      uVar3 = *puVar6;
      uVar4 = puVar6[1];
      uVar8 = *(undefined4 *)(puVar6 + 2);
      if (*(ushort *)(lVar1 + 0x12e) != 0) {
        uVar7 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)uVar7 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar6 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar1 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 9) *
                      0x10 + 0x138 + lVar1);
            goto code_r0x000180721405;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(lVar1 + 0x12e));
      }
      puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,9);
code_r0x000180721405:
      uStack_88 = uVar3;
      uStack_80 = uVar4;
      uStack_78 = uVar8;
      (*(code *)*puVar6)(plVar5,&uStack_88,puVar6[1]);
      return;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

