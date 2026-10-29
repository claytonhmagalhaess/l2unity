// NameplatesManagerGame__MostraJa__18067b950 @ 0x18067b950

/* WARNING: Removing unreachable block (ram,0x000180676982) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerGame__MostraJa__18067b950(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_1 == 0) || (*(char *)(param_1 + 0x48) != '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x48) = 1;
  if (DAT_1834b3e01 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle,1,0);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    DAT_1834b3e01 = '\x01';
  }
  if (*(char *)(param_1 + 0x90) != '\x01') {
    *(undefined1 *)(param_1 + 0x90) = 1;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar2 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x10),0);
      uVar3 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar2 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
        return;
      }
    }
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

