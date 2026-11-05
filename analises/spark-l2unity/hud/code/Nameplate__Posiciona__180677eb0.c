// Nameplate__Posiciona__180677eb0 @ 0x180677eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Nameplate__Posiciona__180677eb0(longlong param_1,float param_2,float param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  ushort uVar12;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_48 [64];
  
  if (cRam00000001834b3e00 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b3e00 = '\x01';
  }
  if ((param_2 == *(float *)(param_1 + 0x88)) && (param_3 == *(float *)(param_1 + 0x8c))) {
    return;
  }
  *(float *)(param_1 + 0x88) = param_2;
  *(float *)(param_1 + 0x8c) = param_3;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar7 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x10),0);
    uVar8 = func_0x0001825fc560(param_2,0);
    uVar9 = func_0x0001825fc560(param_3,0);
    uStack_78 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    func_0x000182607f40(&uStack_88,uVar8,uVar9,0);
    uStack_68 = (undefined4)uStack_88;
    uStack_64 = uStack_88._4_4_;
    uStack_60 = (undefined4)uStack_80;
    uStack_5c = uStack_80._4_4_;
    uStack_58 = (undefined4)uStack_78;
    uStack_54 = (undefined4)((ulonglong)uStack_78 >> 0x20);
    puVar10 = (undefined4 *)UnityEngine_UIElements_StyleRotate__op_Implicit(auStack_48,&uStack_68,0)
    ;
    if (plVar7 != (longlong *)0x0) {
      uStack_68 = *puVar10;
      uStack_64 = puVar10[1];
      uStack_60 = puVar10[2];
      lVar1 = *plVar7;
      uStack_5c = (undefined4)*(undefined8 *)(puVar10 + 3);
      uVar3 = uStack_5c;
      uStack_58 = (undefined4)((ulonglong)*(undefined8 *)(puVar10 + 3) >> 0x20);
      uVar4 = uStack_58;
      uStack_54 = (undefined4)*(undefined8 *)(puVar10 + 5);
      uVar5 = uStack_54;
      uStack_50 = (undefined4)((ulonglong)*(undefined8 *)(puVar10 + 5) >> 0x20);
      uVar6 = uStack_50;
      if (*(ushort *)(lVar1 + 0x12e) != 0) {
        uVar12 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar11 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar1 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0x7f)
                       * 0x10 + 0x138 + lVar1);
            goto code_r0x000180677ff3;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ushort *)(lVar1 + 0x12e));
      }
      puVar11 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x7f);
code_r0x000180677ff3:
      uStack_5c = uVar3;
      uStack_58 = uVar4;
      uStack_54 = uVar5;
      uStack_50 = uVar6;
      (*(code *)*puVar11)(plVar7,&uStack_68,puVar11[1]);
      return;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

