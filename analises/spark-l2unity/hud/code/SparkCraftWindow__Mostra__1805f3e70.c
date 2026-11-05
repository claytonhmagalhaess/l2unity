// SparkCraftWindow__Mostra__1805f3e70 @ 0x1805f3e70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkCraftWindow__Mostra__1805f3e70(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if (cRam00000001834b3bae == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkCraft);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'Add'");
    FUN_180315380(LIT_"'Common Recipe Book'");
    FUN_180315380(LIT_"'Dwarven Manufacture'");
    FUN_180315380(LIT_"'Create'");
    FUN_180315380(LIT_"'Private Manufacture'");
    FUN_180315380(LIT_"'Start'");
    FUN_180315380(LIT_"'Delete'");
    FUN_180315380(LIT_"'Dwarven Recipe Book'");
    FUN_180315380(LIT_"'General Manufacture'");
    cRam00000001834b3bae = '\x01';
  }
  if (param_1[0x20] != 0) {
    iVar1 = *(int *)((longlong)param_1 + 0x8c);
    lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x20],0);
    uVar5 = FUN_180eb5810(iVar1 != 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar4 != 0) {
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
      if (param_1[0x21] != 0) {
        lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x21],0);
        uVar5 = FUN_180eb5810(iVar1 != 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar4 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
          plVar2 = (longlong *)param_1[0x12];
          if (*(int *)((longlong)param_1 + 0x8c) == 0) {
            if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
              func_0x000180315660(TI_SparkCraft);
            }
            uVar5 = LIT_"'Common Recipe Book'";
            if (*(char *)(*(longlong *)(TI_SparkCraft + 0xb8) + 8) != '\0') {
              uVar5 = LIT_"'Dwarven Recipe Book'";
            }
          }
          else {
            uVar5 = LIT_"'Private Manufacture'";
            if (iVar1 == 1) {
              if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
                func_0x000180315660(TI_SparkCraft);
              }
              uVar5 = LIT_"'General Manufacture'";
              if (*(char *)(*(longlong *)(TI_SparkCraft + 0xb8) + 8) != '\0') {
                uVar5 = LIT_"'Dwarven Manufacture'";
              }
            }
          }
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0xe48))(plVar2,uVar5,*(undefined8 *)(*plVar2 + 0xe50));
            uVar5 = LIT_"'Create'";
            if (*(int *)((longlong)param_1 + 0x8c) == 1) {
              uVar5 = LIT_"'Start'";
            }
            plVar2 = (longlong *)param_1[0x25];
            if (cRam00000001834b3baf == '\0') {
              FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
              FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
              cRam00000001834b3baf = '\x01';
            }
            if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
              func_0x000180315660();
            }
            plVar6 = (longlong *)FUN_180b0e310(plVar2,0,0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
            if (plVar6 == (longlong *)0x0) {
              if (plVar2 == (longlong *)0x0) goto code_r0x0001805f4240;
              lVar4 = *plVar2;
              plVar6 = plVar2;
            }
            else {
              lVar4 = *plVar6;
            }
            (**(code **)(lVar4 + 0xe48))(plVar6,uVar5,*(undefined8 *)(lVar4 + 0xe50));
            uVar5 = LIT_"'Delete'";
            if (*(int *)((longlong)param_1 + 0x8c) == 1) {
              uVar5 = LIT_"'Add'";
            }
            plVar2 = (longlong *)param_1[0x26];
            if (cRam00000001834b3baf == '\0') {
              FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
              FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
              cRam00000001834b3baf = '\x01';
            }
            if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
              func_0x000180315660();
            }
            plVar6 = (longlong *)FUN_180b0e310(plVar2,0,0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
            if (plVar6 == (longlong *)0x0) {
              if (plVar2 == (longlong *)0x0) goto code_r0x0001805f4240;
              lVar4 = *plVar2;
              plVar6 = plVar2;
            }
            else {
              lVar4 = *plVar6;
            }
            (**(code **)(lVar4 + 0xe48))(plVar6,uVar5,*(undefined8 *)(lVar4 + 0xe50));
            if (param_1[0x26] != 0) {
              lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x26],0);
              uVar5 = FUN_180eb5810(*(int *)((longlong)param_1 + 0x8c) == 2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
              if (lVar4 != 0) {
                FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
                SparkCraftWindow__MontaLista__1805f0f50(param_1,0);
                SparkCraftWindow__MontaOficina__1805f20a0(param_1,0);
                SparkCraftWindow__MostraDetalhe__1805f2900(param_1,0);
                if ((char)param_1[7] != '\0') {
                  (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
                }
                return;
              }
            }
          }
        }
      }
    }
  }
code_r0x0001805f4240:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

