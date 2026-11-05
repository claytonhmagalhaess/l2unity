// L2Slot___ctor__180794cc0 @ 0x180794cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2Slot___ctor__180794cc0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b4436 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'slot-bg'");
    FUN_180315380(LIT_"'toggle-effect'");
    FUN_180315380(LIT_"'dragged'");
    FUN_180315380(LIT_"''");
    cRam00000001834b4436 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  Gear__UpdateWeaponType__1803dadf0(param_1,0);
  *(undefined8 *)(param_1 + 0x40) = param_2;
  func_0x000180314690(param_1 + 0x40,param_2);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    UnityEngine_UIElements_VisualElement__AddToClassList
              (*(longlong *)(param_1 + 0x40),LIT_"'dragged'",0);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar2 = FUN_180b0e310(uVar2,0,LIT_"'slot-bg'",MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    func_0x000180314690(param_1 + 0x48,uVar2);
    uVar2 = FUN_180b0e310(*(undefined8 *)(param_1 + 0x40),0,LIT_"'toggle-effect'",MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    func_0x000180314690(param_1 + 0x50,uVar2);
    *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x20) = LIT_"''";
    func_0x000180314690(param_1 + 0x20,LIT_"''");
    *(undefined8 *)(param_1 + 0x28) = LIT_"''";
    func_0x000180314690(param_1 + 0x28,LIT_"''");
    *(undefined8 *)(param_1 + 0x30) = LIT_"''";
    func_0x000180314690(param_1 + 0x30,LIT_"''");
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

