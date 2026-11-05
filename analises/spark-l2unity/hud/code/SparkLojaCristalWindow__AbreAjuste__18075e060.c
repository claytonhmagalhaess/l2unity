// SparkLojaCristalWindow__AbreAjuste__18075e060 @ 0x18075e060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkLojaCristalWindow__AbreAjuste__18075e060(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (cRam00000001834b4361 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkLojaCristal);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'Crystallization Shop'");
    FUN_180315380(LIT_"'You cannot crystallize yet.'");
    FUN_180315380(LIT_"'You can crystallize up to '");
    FUN_180315380(LIT_"'-grade items.'");
    FUN_180315380(LIT_"''");
    cRam00000001834b4361 = '\x01';
  }
  if ((char)param_1[0x11] == '\0') {
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  SparkLojaCristalWindow__Tamanho(param_1,0x140,0x122,0);
  plVar2 = (longlong *)param_1[0x17];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0xe48))(plVar2,LIT_"'Crystallization Shop'",*(undefined8 *)(*plVar2 + 0xe50));
    if (param_1[0x13] != 0) {
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x13],0);
      uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar4 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
        if (param_1[0x14] != 0) {
          lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x14],0);
          uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
          if (lVar4 != 0) {
            FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
            if (*(int *)(TI_SparkLojaCristal + 0xe4) == 0) {
              func_0x000180315660();
            }
            plVar2 = (longlong *)param_1[0x18];
            iVar1 = *(int *)(*(longlong *)(TI_SparkLojaCristal + 0xb8) + 0xc);
            uVar5 = LIT_"'You cannot crystallize yet.'";
            if (0 < iVar1) {
              if (*(int *)(TI_SparkLojaCristal + 0xe4) == 0) {
                func_0x000180315660();
              }
              uVar5 = SparkLojaCristal__NomeDaGrade(iVar1,0);
              uVar5 = System_String__Concat(LIT_"'You can crystallize up to '",uVar5,LIT_"'-grade items.'",0);
            }
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0xe48))(plVar2,uVar5,*(undefined8 *)(*plVar2 + 0xe50));
              plVar2 = (longlong *)param_1[0x21];
              if (*(int *)(TI_SparkLojaCristal + 0xe4) == 0) {
                func_0x000180315660();
              }
              uVar5 = System_Int32__ToString(*(undefined8 *)(TI_SparkLojaCristal + 0xb8),0);
              if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0xa88))(plVar2,uVar5,*(undefined8 *)(*plVar2 + 0xa90));
                lVar4 = *(longlong *)(*(longlong *)(TI_SparkLojaCristal + 0xb8) + 0x10);
                lVar6 = LIT_"''";
                if (lVar4 != 0) {
                  lVar6 = lVar4;
                }
                plVar2 = (longlong *)param_1[0x22];
                if (plVar2 != (longlong *)0x0) {
                  (**(code **)(*plVar2 + 0xa88))(plVar2,lVar6,*(undefined8 *)(*plVar2 + 0xa90));
                  SparkLojaCristalWindow__MostraExemplo__180762450(param_1,0);
                  if ((char)param_1[7] != '\0') {
                    (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
                  }
                  (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
                  return;
                }
              }
            }
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

