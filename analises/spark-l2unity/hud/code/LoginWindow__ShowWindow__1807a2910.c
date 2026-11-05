// LoginWindow__ShowWindow__1807a2910 @ 0x1807a2910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginWindow__ShowWindow__1807a2910(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  L2Window__ShowWindow__18079a6b0(param_1,0);
  if (cRam00000001834b44d8 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b44d8 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0x88),0);
    uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar3 == 0) goto code_r0x0001807a2b2e;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0xb8),0);
    uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar3 == 0) goto code_r0x0001807a2b2e;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0xc0),0);
    uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar3 == 0) goto code_r0x0001807a2b2e;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 200),0);
    uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar3 == 0) goto code_r0x0001807a2b2e;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
  }
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x268))(plVar1,*(undefined8 *)(*plVar1 + 0x270));
    if (cRam00000001834b3021 == '\0') {
      FUN_180315380(TI_GameManager);
      cRam00000001834b3021 = '\x01';
    }
    if (**(longlong **)(TI_GameManager + 0xb8) != 0) {
      if (*(char *)(**(longlong **)(TI_GameManager + 0xb8) + 0x28) != '\0') {
        if (cRam00000001834b44da == '\0') {
          FUN_180315380(TI_LoginWindow.<AutoLogin>d__63);
          cRam00000001834b44da = '\x01';
        }
        lVar3 = func_0x000180315580(TI_LoginWindow.<AutoLogin>d__63);
        Gear__UpdateWeaponType__1803dadf0(lVar3,0);
        *(undefined4 *)(lVar3 + 0x10) = 0;
        *(longlong *)(lVar3 + 0x20) = param_1;
        func_0x000180314690(lVar3 + 0x20,param_1);
        UnityEngine_MonoBehaviour__StartCoroutine(param_1,lVar3,0);
      }
      return;
    }
  }
code_r0x0001807a2b2e:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

