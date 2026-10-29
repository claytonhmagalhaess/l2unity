// SparkGmWindow__Botao__180603b90 @ 0x180603b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkGmWindow__Botao__180603b90(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  ushort uVar8;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if (cRam00000001834b3c40 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    cRam00000001834b3c40 = '\x01';
  }
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar3 = SparkEstilo__Botao__18071e130(param_1,param_2,0,0,0);
  if (lVar3 != 0) {
    plVar4 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
    puVar5 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar4 != (longlong *)0x0) {
      lVar6 = *plVar4;
      uVar7 = *puVar5;
      uVar1 = *(undefined4 *)(puVar5 + 1);
      if (*(ushort *)(lVar6 + 0x12e) != 0) {
        uVar8 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar5 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) + 0x59) *
                      0x10 + 0x138 + lVar6);
            goto code_r0x000180603c89;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ushort *)(lVar6 + 0x12e));
      }
      puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x59);
code_r0x000180603c89:
      uStack_58 = uVar7;
      uStack_50 = uVar1;
      (*(code *)*puVar5)(plVar4,&uStack_58,puVar5[1]);
      plVar4 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
      puVar5 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
      if (plVar4 != (longlong *)0x0) {
        lVar6 = *plVar4;
        uVar7 = *puVar5;
        uVar1 = *(undefined4 *)(puVar5 + 1);
        if (*(ushort *)(lVar6 + 0x12e) != 0) {
          uVar8 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar5 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) + 0x43)
                        * 0x10 + 0x138 + lVar6);
              goto code_r0x000180603d29;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(ushort *)(lVar6 + 0x12e));
        }
        puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180603d29:
        uStack_58 = uVar7;
        uStack_50 = uVar1;
        (*(code *)*puVar5)(plVar4,&uStack_58,puVar5[1]);
        lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
        uVar7 = func_0x000182601c10(0,0);
        if (lVar6 != 0) {
          FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
          plVar4 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
          puVar5 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
          if (plVar4 != (longlong *)0x0) {
            lVar6 = *plVar4;
            uVar1 = *(undefined4 *)(puVar5 + 1);
            uVar7 = *puVar5;
            if (*(ushort *)(lVar6 + 0x12e) != 0) {
              uVar8 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar5 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) +
                            0x4f) * 0x10 + 0x138 + lVar6);
                  goto code_r0x000180603e09;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < *(ushort *)(lVar6 + 0x12e));
            }
            puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x4f);
code_r0x000180603e09:
            uStack_58 = uVar7;
            uStack_50 = uVar1;
            (*(code *)*puVar5)(plVar4,&uStack_58,puVar5[1]);
            plVar4 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
            puVar5 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
            if (plVar4 != (longlong *)0x0) {
              lVar6 = *plVar4;
              uVar7 = *puVar5;
              uVar1 = *(undefined4 *)(puVar5 + 1);
              if (*(ushort *)(lVar6 + 0x12e) != 0) {
                uVar8 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar5 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) +
                              0x4b) * 0x10 + 0x138 + lVar6);
                    goto code_r0x000180603ea9;
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 < *(ushort *)(lVar6 + 0x12e));
              }
              puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x000180603ea9:
              uStack_58 = uVar7;
              uStack_50 = uVar1;
              (*(code *)*puVar5)(plVar4,&uStack_58,puVar5[1]);
              return lVar3;
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  lVar3 = (*pcVar2)();
  return lVar3;
}

