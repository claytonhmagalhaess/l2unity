// OptionsWindow__.ctor__1806a2400 @ 0x1806a2400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___ctor__1806a2400
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  
  if (cRam00000001834b3ea3 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<System.Action>);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement__);
    cRam00000001834b3ea3 = '\x01';
  }
  uVar1 = func_0x000180314710(TI_UnityEngine.UIElements.VisualElement__,6);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  func_0x000180314690(param_1 + 0x90,uVar1);
  uVar1 = func_0x000180314710(TI_UnityEngine.UIElements.VisualElement__,6);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  func_0x000180314690(param_1 + 0x98,uVar1);
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.List<System.Action>);
  FUN_180bba2e0(uVar1,MR_System.Collections.Generic.List<System.Action>..ctor);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  func_0x000180314690(param_1 + 0xb0,uVar1);
  if (cRam00000001834b440e == '\0') {
    FUN_180315380(TI_L2Window);
    cRam00000001834b440e = '\x01';
  }
  if (*(int *)(TI_L2Window + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834c10ac == '\0') {
    FUN_180315380(TI_UnityEngine.Object,0,param_3,param_4,unaff_RBX);
    cRam00000001834c10ac = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  return;
}

