// SkillbarWindow__AplicaEscala__1807062b0 @ 0x1807062b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarWindow__AplicaEscala__1807062b0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ushort uVar9;
  undefined4 uVar10;
  undefined8 uStackX_8;
  undefined8 uStackX_18;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b4189 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b4189 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkOpcoes__Carrega__1804a3c40(0);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar1 = *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xe4);
  plVar7 = (longlong *)
           UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
  if (*(char *)(param_1 + 0x89) == '\0') {
    uVar10 = 0x42480000;
  }
  else {
    uVar10 = 0x42c80000;
  }
  uStackX_18 = 0;
  func_0x0001825fc4d0(&uStackX_18,uVar10,1,0);
  uStackX_8 = 0;
  func_0x0001825fc4d0(&uStackX_8,0x42c80000,1,0);
  uStack_68 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  func_0x000182607980(&uStack_78,uStackX_18,uStackX_8,0,0);
  uStack_98 = uStack_68;
  uStack_a8 = uStack_78;
  uStack_a0 = uStack_70;
  puVar8 = (undefined8 *)
           UnityEngine_UIElements_StyleBackgroundSize__op_Implicit(&uStack_58,&uStack_a8,0);
  if (plVar7 != (longlong *)0x0) {
    lVar3 = *plVar7;
    uVar5 = *puVar8;
    uVar6 = puVar8[1];
    uVar2 = puVar8[2];
    if (*(ushort *)(lVar3 + 0x12e) != 0) {
      uVar9 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar9 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar8 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) + 0x75) *
                    0x10 + 0x138 + lVar3);
          goto code_r0x000180706459;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(ushort *)(lVar3 + 0x12e));
    }
    puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x75);
code_r0x000180706459:
    uStack_58 = uVar5;
    uStack_50 = uVar6;
    uStack_48 = uVar2;
    (*(code *)*puVar8)(plVar7,&uStack_58,puVar8[1]);
    if (*(longlong *)(param_1 + 0x30) != 0) {
      plVar7 = (longlong *)
               UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
      uStack_a8 = CONCAT44(uVar1,uVar1);
      uStack_a0 = CONCAT44(uStack_a0._4_4_,0x3f800000);
      uStack_88 = 0;
      uStack_80 = 0;
      func_0x000182149c00(&uStack_88,&uStack_a8,0);
      uStack_a8 = uStack_88;
      uStack_a0 = uStack_80;
      puVar8 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_58,&uStack_a8,0)
      ;
      if (plVar7 != (longlong *)0x0) {
        lVar3 = *plVar7;
        uVar2 = *puVar8;
        uVar5 = puVar8[1];
        uVar1 = *(undefined4 *)(puVar8 + 2);
        if (*(ushort *)(lVar3 + 0x12e) != 0) {
          uVar9 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar8 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) + 0x6d)
                        * 0x10 + 0x138 + lVar3);
              goto code_r0x000180706526;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(ushort *)(lVar3 + 0x12e));
        }
        puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x6d);
code_r0x000180706526:
        uStack_a8 = uVar2;
        uStack_a0 = uVar5;
        uStack_98 = uVar1;
        (*(code *)*puVar8)(plVar7,&uStack_a8,puVar8[1]);
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

