// SlotAnimationManipulator__AnimateToggle__1807b2b40 @ 0x1807b2b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SlotAnimationManipulator__AnimateToggle__1807b2b40(longlong param_1,float param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ushort uVar10;
  float fVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b4513 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b4513 = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x50), lVar8 != 0)) {
    plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
    lVar8 = SkillbarImageTable__get_Instance(0);
    if ((lVar8 != 0) && (lVar8 = *(longlong *)(lVar8 + 0x30), lVar8 != 0)) {
      fVar11 = (float)FUN_1803a9a90(param_2 * 10.0,0x41400000);
      if (*(uint *)(lVar8 + 0x18) <= (uint)(int)fVar11) {
        FUN_1803155c0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uStack_78 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      UnityEngine_UIElements_StyleBackground___ctor
                (&uStack_98,*(undefined8 *)(lVar8 + 0x20 + (longlong)(int)fVar11 * 8),0);
      uVar6 = uStack_78;
      uVar5 = uStack_80;
      uVar4 = uStack_88;
      uVar3 = uStack_90;
      uVar2 = uStack_98;
      if (plVar7 != (longlong *)0x0) {
        lVar8 = *plVar7;
        if (*(ushort *)(lVar8 + 0x12e) != 0) {
          uVar10 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar9 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0xb)
                        * 0x10 + 0x138 + lVar8);
              goto code_r0x0001807b2c85;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(ushort *)(lVar8 + 0x12e));
        }
        puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001807b2c85:
        uStack_68 = uVar2;
        uStack_60 = uVar3;
        uStack_58 = uVar4;
        uStack_50 = uVar5;
        uStack_48 = uVar6;
        (*(code *)*puVar9)(plVar7,&uStack_68,puVar9[1]);
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

