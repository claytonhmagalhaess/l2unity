// L2GameUI__TrocaInterface__180775c30 @ 0x180775c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2GameUI__TrocaInterface__180775c30(longlong param_1)

{
  char cVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  
  if (cRam00000001834b43ee == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement__);
    cRam00000001834b43ee = '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x89);
  *(bool *)(param_1 + 0x89) = cVar1 == '\0';
  plVar3 = (longlong *)func_0x000180314710(TI_UnityEngine.UIElements.VisualElement__,4);
  if (plVar3 == (longlong *)0x0) {
code_r0x000180775e5e:
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (lVar5 != 0) {
    lVar4 = func_0x0001803146b0(lVar5,*(undefined8 *)(*plVar3 + 0x40));
    if (lVar4 == 0) {
      uVar6 = func_0x000180314f80();
      FUN_180315590(uVar6,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar5;
    func_0x000180314690(plVar3 + 4,lVar5);
    lVar5 = *(longlong *)(param_1 + 0x50);
    if (lVar5 != 0) {
      lVar4 = func_0x0001803146b0(lVar5,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar4 == 0) {
        uVar6 = func_0x000180314f80();
        FUN_180315590(uVar6,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar5;
      func_0x000180314690(plVar3 + 5,lVar5);
      lVar5 = *(longlong *)(param_1 + 0x58);
      if (lVar5 != 0) {
        lVar4 = func_0x0001803146b0(lVar5,*(undefined8 *)(*plVar3 + 0x40));
        if (lVar4 == 0) {
          uVar6 = func_0x000180314f80();
          FUN_180315590(uVar6,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar5;
        func_0x000180314690(plVar3 + 6,lVar5);
        lVar5 = *(longlong *)(param_1 + 0x60);
        if (lVar5 != 0) {
          lVar4 = func_0x0001803146b0(lVar5,*(undefined8 *)(*plVar3 + 0x40));
          if (lVar4 == 0) {
            uVar6 = func_0x000180314f80();
            FUN_180315590(uVar6,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar5;
          func_0x000180314690(plVar3 + 7,lVar5);
          uVar7 = 0;
          do {
            if ((int)plVar3[3] <= (int)uVar7) {
              *(undefined1 *)(param_1 + 0x38) = 0;
              if (cRam00000001834b35e9 == '\0') {
                FUN_180315380(TI_CursorManager);
                cRam00000001834b35e9 = '\x01';
              }
              if (**(longlong **)(TI_CursorManager + 0xb8) != 0) {
                CursorManager__Reaplica__1805b0c50(**(longlong **)(TI_CursorManager + 0xb8),0);
              }
              return;
            }
            if (*(uint *)(plVar3 + 3) <= uVar7) break;
            if (plVar3[(longlong)(int)uVar7 + 4] != 0) {
              lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                (plVar3[(longlong)(int)uVar7 + 4],0);
              uVar6 = FUN_180eb5810(cVar1 == '\0',MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
              if (lVar5 == 0) goto code_r0x000180775e5e;
              FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
            }
            uVar7 = uVar7 + 1;
          } while( true );
        }
      }
    }
  }
  FUN_1803155c0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

