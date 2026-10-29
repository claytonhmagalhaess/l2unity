// ChatWindow__AplicaFonte__1805c4810 @ 0x1805c4810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__AplicaFonte__1805c4810(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  longlong *plStack_98;
  longlong lStack_90;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  longlong **pplStack_50;
  
  if (cRam00000001834b3ae5 == '\0') {
    FUN_180315380(TI_System.IDisposable);
    FUN_180315380(TI_System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_System.Collections.IEnumerator);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b3ae5 = '\x01';
  }
  uVar11 = 0;
  plStack_98 = (longlong *)0x0;
  lVar7 = *(longlong *)(param_1 + 200);
  lStack_90 = lVar7;
  if (lVar7 != 0) {
    for (; (int)uVar11 < (int)*(uint *)(lVar7 + 0x18); uVar11 = uVar11 + 1) {
      if (*(uint *)(lVar7 + 0x18) <= uVar11) {
        FUN_1803155c0();
code_r0x0001805c4c7b:
        FUN_1803155d0();
code_r0x0001805c4c81:
        FUN_1803155d0();
code_r0x0001805c4c86:
        FUN_1803155d0();
code_r0x0001805c4c8b:
        FUN_1803155d0();
        FUN_180311490();
        goto code_r0x0001805c4c97;
      }
      plVar8 = *(longlong **)(lVar7 + 0x20 + (longlong)(int)uVar11 * 8);
      if (plVar8 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar8 + 0x9d8))(plVar8,*(undefined8 *)(*plVar8 + 0x9e0));
        if ((lVar5 == 0) ||
           (lVar5 = UnityEngine_UIElements_VisualElement__Children(lVar5,0), lVar5 == 0))
        goto code_r0x0001805c4cb2;
        plStack_98 = (longlong *)FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualElement>,lVar5);
        uStack_58 = 0;
        pplStack_50 = &plStack_98;
        while( true ) {
          if (plStack_98 == (longlong *)0x0) goto code_r0x0001805c4c8b;
          cVar4 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
          if (cVar4 == '\0') break;
          if (plStack_98 == (longlong *)0x0) goto code_r0x0001805c4c86;
          lVar5 = FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>);
          if (lVar5 == 0) goto code_r0x0001805c4c81;
          lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
          puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_68);
          if (lVar5 == 0) goto code_r0x0001805c4c7b;
          uStack_78 = *puVar6;
          uStack_70 = *(undefined4 *)(puVar6 + 1);
          FUN_1800050f0(0x41,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_78);
        }
        if (plStack_98 != (longlong *)0x0) {
          FUN_180002390(0,TI_System.IDisposable,plStack_98);
        }
      }
    }
    if (*(longlong *)(param_1 + 0x100) == 0) {
      return;
    }
    lVar7 = **(longlong **)(param_1 + 0x100);
    lVar7 = (**(code **)(lVar7 + 0x9d8))
                      (*(longlong **)(param_1 + 0x100),*(undefined8 *)(lVar7 + 0x9e0));
    if ((lVar7 != 0) &&
       (lVar7 = UnityEngine_UIElements_VisualElement__Children(lVar7,0), lVar7 != 0)) {
      plStack_98 = (longlong *)FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualElement>,lVar7);
      uStack_58 = 0;
      pplStack_50 = &plStack_98;
      while (plStack_98 != (longlong *)0x0) {
        cVar4 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
        plVar8 = plStack_98;
        if (cVar4 == '\0') {
          if (plStack_98 == (longlong *)0x0) {
            return;
          }
          FUN_180002390(0,TI_System.IDisposable,plStack_98);
          return;
        }
        if (plStack_98 == (longlong *)0x0) goto code_r0x0001805c4ca1;
        lVar7 = *plStack_98;
        uVar10 = 0;
        if (*(ushort *)(lVar7 + 0x12e) != 0) {
          uVar9 = uVar10;
          do {
            if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                TI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>) {
              puVar6 = (undefined8 *)
                       ((longlong)
                        *(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) * 0x10 +
                        0x138 + lVar7);
              goto code_r0x0001805c4b36;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(ushort *)(lVar7 + 0x12e));
        }
        puVar6 = (undefined8 *)FUN_180312860(plStack_98,TI_System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualElement>,0);
code_r0x0001805c4b36:
        lVar7 = (*(code *)*puVar6)(plVar8,puVar6[1]);
        if (lVar7 == 0) goto code_r0x0001805c4c9c;
        plVar8 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar7,0);
        puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_68);
        if (plVar8 == (longlong *)0x0) goto code_r0x0001805c4c97;
        uVar1 = *puVar6;
        uVar2 = *(undefined4 *)(puVar6 + 1);
        lVar7 = *plVar8;
        if (*(ushort *)(lVar7 + 0x12e) != 0) {
          do {
            if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar10 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar6 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar10 * 0x10) + 0x41
                        ) * 0x10 + 0x138 + lVar7);
              goto code_r0x0001805c4bc5;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(ushort *)(lVar7 + 0x12e));
        }
        puVar6 = (undefined8 *)FUN_180312860(plVar8,TI_UnityEngine.UIElements.IStyle,0x41);
code_r0x0001805c4bc5:
        uStack_78 = uVar1;
        uStack_70 = uVar2;
        (*(code *)*puVar6)(plVar8,&uStack_78,puVar6[1]);
      }
      goto code_r0x0001805c4ca6;
    }
  }
code_r0x0001805c4cb2:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
code_r0x0001805c4c97:
  FUN_1803155d0();
code_r0x0001805c4c9c:
  FUN_1803155d0();
code_r0x0001805c4ca1:
  FUN_1803155d0();
code_r0x0001805c4ca6:
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

