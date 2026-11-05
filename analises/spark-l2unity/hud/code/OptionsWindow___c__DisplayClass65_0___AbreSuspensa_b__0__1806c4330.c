// OptionsWindow___c__DisplayClass65_0___AbreSuspensa_b__0__1806c4330 @ 0x1806c4330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass65_0___AbreSuspensa_b__0__1806c4330
               (longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ushort uVar7;
  float fVar8;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b3f5c == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b3f5c = '\x01';
  }
  if (param_2 != 0) {
    fVar8 = *(float *)(param_2 + 0xbc) * 18.0 + *(float *)(param_1 + 0x30);
    if (fVar8 < 0.0) {
      fVar8 = 0.0;
    }
    else if (*(float *)(param_1 + 0x34) < fVar8) {
      fVar8 = *(float *)(param_1 + 0x34);
    }
    *(float *)(param_1 + 0x30) = fVar8;
    if (*(longlong *)(param_1 + 0x38) != 0) {
      plVar5 = (longlong *)
               UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x38),0);
      puVar6 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit
                         (&uStack_28,*(uint *)(param_1 + 0x30) ^ 0x80000000,0);
      if (plVar5 != (longlong *)0x0) {
        lVar3 = *plVar5;
        uVar2 = *(undefined4 *)(puVar6 + 1);
        uVar1 = *puVar6;
        if (*(ushort *)(lVar3 + 0x12e) != 0) {
          uVar7 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar6 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 0x73)
                        * 0x10 + 0x138 + lVar3);
              goto code_r0x0001806c4435;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(ushort *)(lVar3 + 0x12e));
        }
        puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x73);
code_r0x0001806c4435:
        uStack_28 = uVar1;
        uStack_20 = uVar2;
        (*(code *)*puVar6)(plVar5,&uStack_28,puVar6[1]);
        *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) | 1;
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

