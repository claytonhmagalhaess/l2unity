// OptionsWindow__Secao__180699d10 @ 0x180699d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong OptionsWindow__Secao__180699d10(undefined8 param_1)

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
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  if (cRam00000001834b3e93 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(TI_SparkEstilo);
    cRam00000001834b3e93 = '\x01';
  }
  if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
    func_0x000180315660(TI_OptionsWindow);
  }
  lVar3 = *(longlong *)(TI_OptionsWindow + 0xb8);
  uStack_58 = *(undefined8 *)(lVar3 + 8);
  uStack_50 = *(undefined4 *)(lVar3 + 0x10);
  uStack_4c = *(undefined4 *)(lVar3 + 0x14);
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000180cb7cb0(&uStack_38,&uStack_58,MR_System.Nullable<UnityEngine.Color>..ctor);
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    func_0x000180315660();
  }
  uStack_58 = uStack_38;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  uStack_48 = uStack_28;
  lVar3 = SparkEstilo__Texto(param_1,0xf,&uStack_58,0,0);
  if (lVar3 != 0) {
    plVar4 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
    puVar5 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_58,0x40c00000,0);
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
                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) + 0x51) *
                      0x10 + 0x138 + lVar6);
            goto code_r0x000180699e99;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ushort *)(lVar6 + 0x12e));
      }
      puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x51);
code_r0x000180699e99:
      uStack_58 = uVar7;
      uStack_50 = uVar1;
      (*(code *)*puVar5)(plVar4,&uStack_58,puVar5[1]);
      plVar4 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
      puVar5 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_58,0x40400000,0);
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
                        (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) + 0x4b)
                        * 0x10 + 0x138 + lVar6);
              goto code_r0x000180699f39;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(ushort *)(lVar6 + 0x12e));
        }
        puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x4b);
code_r0x000180699f39:
        uStack_58 = uVar7;
        uStack_50 = uVar1;
        (*(code *)*puVar5)(plVar4,&uStack_58,puVar5[1]);
        lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
        uVar7 = func_0x000182601c10(0,0);
        if (lVar6 != 0) {
          FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
          return lVar3;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  lVar3 = (*pcVar2)();
  return lVar3;
}

