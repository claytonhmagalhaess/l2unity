// SparkEstilo__Painel__180721ce0 @ 0x180721ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkEstilo__Painel__180721ce0(void)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ushort uVar9;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 auStack_38 [48];
  
  if (cRam00000001834b41f0 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b41f0 = '\x01';
  }
  lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar6,0);
  if (lVar6 != 0) {
    plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660(TI_SparkEstilo);
    }
    uStack_58 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x10);
    uStack_50 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x18);
    puVar8 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(auStack_38,&uStack_58,0);
    if (plVar7 != (longlong *)0x0) {
      lVar2 = *plVar7;
      uVar1 = *(undefined4 *)(puVar8 + 2);
      uVar4 = *puVar8;
      uVar5 = puVar8[1];
      if (*(ushort *)(lVar2 + 0x12e) != 0) {
        uVar9 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar9 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar8 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) + 9) *
                      0x10 + 0x138 + lVar2);
            goto code_r0x000180721df5;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ushort *)(lVar2 + 0x12e));
      }
      puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,9);
code_r0x000180721df5:
      uStack_58 = uVar4;
      uStack_50 = uVar5;
      uStack_48 = uVar1;
      (*(code *)*puVar8)(plVar7,&uStack_58,puVar8[1]);
      SparkEstilo__Moldura__180721b40(lVar6,0);
      return lVar6;
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  lVar6 = (*pcVar3)();
  return lVar6;
}

