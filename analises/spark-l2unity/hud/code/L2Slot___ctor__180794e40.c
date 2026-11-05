// L2Slot___ctor__180794e40 @ 0x180794e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2Slot___ctor__180794e40(longlong param_1,longlong param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (DAT_1834b4437 == '\0') {
    FUN_180315380(TI_SlotHoverDetectManipulator);
    FUN_180315380(TI_TooltipManipulator);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'slot-bg'");
    FUN_180315380(LIT_"'toggle-effect'");
    FUN_180315380(LIT_"''");
    DAT_1834b4437 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  Gear__UpdateWeaponType__1803dadf0(param_1,0);
  *(longlong *)(param_1 + 0x40) = param_2;
  func_0x000180314690(param_1 + 0x40,param_2);
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(int *)(param_1 + 0x18) = param_4;
  if (param_2 == 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = FUN_180b0e310(uVar3,0,LIT_"'slot-bg'",MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  func_0x000180314690(param_1 + 0x48,uVar3);
  uVar3 = FUN_180b0e310(*(undefined8 *)(param_1 + 0x40),0,LIT_"'toggle-effect'",MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  func_0x000180314690(param_1 + 0x50,uVar3);
  if (*(longlong *)(param_1 + 0x58) != 0) goto LAB_180795008;
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  if (param_4 == 7) {
    lVar4 = SysStringTable__get_Instance(0);
    if (lVar4 == 0) goto LAB_180795061;
    uVar6 = 0x37a;
LAB_180794f82:
    lVar4 = SysStringTable__GetSysString(lVar4,uVar6,0);
    if (lVar4 == 0) {
LAB_180795061:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar6 = *(undefined8 *)(lVar4 + 0x18);
  }
  else {
    uVar6 = LIT_"''";
    if (param_4 == 0xd) {
      lVar4 = SysStringTable__get_Instance(0);
      if (lVar4 == 0) goto LAB_180795061;
      uVar6 = 0x37b;
      goto LAB_180794f82;
    }
  }
  uVar5 = func_0x000180315580(TI_TooltipManipulator);
  TooltipManipulator___ctor__1807b5900(uVar5,uVar3,uVar1,uVar6,0);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  func_0x000180314690(param_1 + 0x58,uVar5);
  UnityEngine_UIElements_VisualElementExtensions__AddManipulator
            (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x58),0);
LAB_180795008:
  if (*(longlong *)(param_1 + 0x60) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = func_0x000180315580(TI_SlotHoverDetectManipulator);
    SlotHoverDetectManipulator___ctor__1807b3d20(uVar6,uVar3,param_1,0);
    *(undefined8 *)(param_1 + 0x60) = uVar6;
    func_0x000180314690(param_1 + 0x60,uVar6);
    UnityEngine_UIElements_VisualElementExtensions__AddManipulator
              (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x60),0);
  }
  return;
}

