// LoginWindow__AbreFormulario__18079bb10 @ 0x18079bb10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginWindow__AbreFormulario__18079bb10(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (cRam00000001834b44d3 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<SparkContasSalvas.Conta>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<SparkContasSalvas.Conta>.get_Item);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'Edit login'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'New login'");
    cRam00000001834b44d3 = '\x01';
  }
  *(int *)(param_1 + 0x110) = param_2;
  lVar4 = SparkContasSalvas__Lista(0);
  if (param_2 < 0) {
code_r0x00018079bca1:
    if (lVar4 == 0) goto code_r0x00018079be6b;
    if (0x1d < *(int *)(lVar4 + 0x18)) {
      return;
    }
    plVar1 = *(longlong **)(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
    if (plVar1 == (longlong *)0x0) goto code_r0x00018079be6b;
    (**(code **)(*plVar1 + 0xe48))(plVar1,LIT_"'New login'",*(undefined8 *)(*plVar1 + 0xe50));
    plVar1 = *(longlong **)(param_1 + 0xe8);
    if (plVar1 == (longlong *)0x0) goto code_r0x00018079be6b;
    (**(code **)(*plVar1 + 0xa88))(plVar1,LIT_"''",*(undefined8 *)(*plVar1 + 0xa90));
    plVar1 = *(longlong **)(param_1 + 0x90);
    if (plVar1 == (longlong *)0x0) goto code_r0x00018079be6b;
    plVar2 = *(longlong **)(param_1 + 0xf0);
    lVar4 = (**(code **)(*plVar1 + 0xa78))(plVar1,*(undefined8 *)(*plVar1 + 0xa80));
    if (((lVar4 == 0) || (lVar4 = System_String__ToLower(lVar4,0), lVar4 == 0)) ||
       (uVar5 = func_0x00018170d270(lVar4,0), plVar2 == (longlong *)0x0)) goto code_r0x00018079be6b;
    (**(code **)(*plVar2 + 0xa88))(plVar2,uVar5,*(undefined8 *)(*plVar2 + 0xa90));
    plVar1 = *(longlong **)(param_1 + 0x98);
    if (plVar1 == (longlong *)0x0) goto code_r0x00018079be6b;
    plVar2 = *(longlong **)(param_1 + 0xf8);
    lVar4 = (**(code **)(*plVar1 + 0xa78))(plVar1,*(undefined8 *)(*plVar1 + 0xa80));
    if ((lVar4 == 0) || (uVar5 = func_0x00018170d270(lVar4,0), plVar2 == (longlong *)0x0))
    goto code_r0x00018079be6b;
    (**(code **)(*plVar2 + 0xa88))(plVar2,uVar5,*(undefined8 *)(*plVar2 + 0xa90));
  }
  else {
    if (lVar4 == 0) goto code_r0x00018079be6b;
    if (*(int *)(lVar4 + 0x18) <= param_2) goto code_r0x00018079bca1;
    plVar1 = *(longlong **)(param_1 + 0xe0);
    if (plVar1 == (longlong *)0x0) goto code_r0x00018079be6b;
    (**(code **)(*plVar1 + 0xe48))(plVar1,LIT_"'Edit login'",*(undefined8 *)(*plVar1 + 0xe50));
    plVar1 = *(longlong **)(param_1 + 0xe8);
    FUN_180bbb090(&uStack_28,lVar4,param_2,MR_System.Collections.Generic.List<SparkContasSalvas.Conta>.get_Item);
    if (plVar1 == (longlong *)0x0) goto code_r0x00018079be6b;
    (**(code **)(*plVar1 + 0xa88))(plVar1,uStack_28,*(undefined8 *)(*plVar1 + 0xa90));
    plVar1 = *(longlong **)(param_1 + 0xf0);
    FUN_180bbb090(&uStack_28,lVar4,param_2,MR_System.Collections.Generic.List<SparkContasSalvas.Conta>.get_Item);
    if (plVar1 == (longlong *)0x0) goto code_r0x00018079be6b;
    (**(code **)(*plVar1 + 0xa88))(plVar1,uStack_20,*(undefined8 *)(*plVar1 + 0xa90));
    plVar1 = *(longlong **)(param_1 + 0xf8);
    FUN_180bbb090(&uStack_28,lVar4,param_2,MR_System.Collections.Generic.List<SparkContasSalvas.Conta>.get_Item);
    if (plVar1 == (longlong *)0x0) goto code_r0x00018079be6b;
    (**(code **)(*plVar1 + 0xa88))(plVar1,uStack_18,*(undefined8 *)(*plVar1 + 0xa90));
  }
  plVar1 = *(longlong **)(param_1 + 0x100);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xe48))(plVar1,LIT_"''",*(undefined8 *)(*plVar1 + 0xe50));
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar4 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xd8),0);
      uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar4 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
        plVar1 = *(longlong **)(param_1 + 0xe8);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x268))(plVar1,*(undefined8 *)(*plVar1 + 0x270));
          return;
        }
      }
    }
  }
code_r0x00018079be6b:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

