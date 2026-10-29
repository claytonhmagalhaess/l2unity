// ChatWindow__Fonte__1805c7120 @ 0x1805c7120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__Fonte__1805c7120(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ushort uVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (cRam00000001834b3ae6 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Font>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(LIT_"'Data/UI/Assets/Font/tahoma'");
    cRam00000001834b3ae6 = '\x01';
  }
  if (param_1 != 0) {
    plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
    if (*(int *)(TI_SparkArte + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar7 = FUN_180a90ae0(LIT_"'Data/UI/Assets/Font/tahoma'",MR_SparkArte.Load<UnityEngine.Font>);
    uStack_38 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    UnityEngine_UIElements_StyleFontDefinition___ctor(&uStack_48,uVar7,0);
    uVar5 = uStack_38;
    uVar4 = uStack_40;
    uVar7 = uStack_48;
    if (plVar6 != (longlong *)0x0) {
      lVar2 = *plVar6;
      if (*(ushort *)(lVar2 + 0x12e) != 0) {
        uVar9 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar9 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar8 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) + 0x87) *
                      0x10 + 0x138 + lVar2);
            goto code_r0x0001805c7249;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ushort *)(lVar2 + 0x12e));
      }
      puVar8 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x87);
code_r0x0001805c7249:
      uStack_68 = uVar7;
      uStack_60 = uVar4;
      uStack_58 = uVar5;
      (*(code *)*puVar8)(plVar6,&uStack_68,puVar8[1]);
      plVar6 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(param_1,0);
      puVar8 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
      if (plVar6 != (longlong *)0x0) {
        lVar2 = *plVar6;
        uVar7 = *puVar8;
        uVar1 = *(undefined4 *)(puVar8 + 1);
        if (*(ushort *)(lVar2 + 0x12e) != 0) {
          uVar9 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar8 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) + 0x41)
                        * 0x10 + 0x138 + lVar2);
              goto code_r0x0001805c72e3;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(ushort *)(lVar2 + 0x12e));
        }
        puVar8 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x41);
code_r0x0001805c72e3:
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar1);
        uStack_68 = uVar7;
        (*(code *)*puVar8)(plVar6,&uStack_68,puVar8[1]);
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

