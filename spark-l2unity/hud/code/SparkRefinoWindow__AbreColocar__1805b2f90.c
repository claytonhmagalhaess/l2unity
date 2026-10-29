// SparkRefinoWindow__AbreColocar__1805b2f90 @ 0x1805b2f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRefinoWindow__AbreColocar__1805b2f90(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b3a23 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'Augmentation'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3a23 = '\x01';
  }
  if ((char)param_1[0x11] != '\0') {
    plVar1 = (longlong *)param_1[0x12];
    *(undefined1 *)((longlong)param_1 + 0x89) = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xe48))(plVar1,LIT_"'Augmentation'",*(undefined8 *)(*plVar1 + 0xe50));
      if (param_1[0x16] != 0) {
        lVar3 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x16],0);
        uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar3 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
          plVar1 = (longlong *)param_1[0x14];
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0xe48))(plVar1,LIT_"''",*(undefined8 *)(*plVar1 + 0xe50));
            plVar1 = (longlong *)param_1[0x15];
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0xe48))(plVar1,LIT_"''",*(undefined8 *)(*plVar1 + 0xe50))
              ;
              param_1[0x20] = 0;
              *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
              *(undefined4 *)(param_1 + 0x21) = 0;
              *(undefined1 *)((longlong)param_1 + 0x114) = 0;
              SparkRefinoWindow__Atualiza(param_1,0);
              if ((char)param_1[7] == '\0') {
                return;
              }
              (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
              return;
            }
          }
        }
      }
    }
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

