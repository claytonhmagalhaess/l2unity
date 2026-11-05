// SystemMenuWindow__HandleRestartButtonClick__180764900 @ 0x180764900

/* WARNING: Removing unreachable block (ram,0x0001805fc9e2) */
/* WARNING: Removing unreachable block (ram,0x0001805fc9ff) */
/* WARNING: Removing unreachable block (ram,0x0001805fca1f) */
/* WARNING: Removing unreachable block (ram,0x0001805fca42) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SystemMenuWindow__HandleRestartButtonClick__180764900(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  (**(code **)(*param_1 + 0x1c8))(param_1,0,*(undefined8 *)(*param_1 + 0x1d0));
  if (cRam00000001834b436c == '\0') {
    FUN_180315380(TI_ExitWindow);
    cRam00000001834b436c = '\x01';
  }
  plVar2 = (longlong *)**(undefined8 **)(TI_ExitWindow + 0xb8);
  if (plVar2 != (longlong *)0x0) {
    if (cRam00000001834b3bef == '\0') {
      FUN_180315380(TI_UnityEngine.UIElements.IStyle,0,0);
      FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      FUN_180315380(LIT_"'Exit Game'");
      FUN_180315380(LIT_"'Restart Game'");
      cRam00000001834b3bef = '\x01';
    }
    plVar1 = (longlong *)plVar2[0x14];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xe48))(plVar1,LIT_"'Restart Game'");
      if (plVar2[0x12] != 0) {
        lVar4 = UnityEngine_UIElements_VisualElement__get_style(plVar2[0x12],0);
        uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar4 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
          if (plVar2[0x11] != 0) {
            lVar4 = UnityEngine_UIElements_VisualElement__get_style(plVar2[0x11],0);
            uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
            if (lVar4 != 0) {
              FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
              ExitWindow__Atualiza(plVar2,0);
                    /* WARNING: Could not recover jumptable at 0x0001805fca97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
              return;
            }
          }
        }
      }
    }
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

