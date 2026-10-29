// ChatWindow___ctor__1805d16c0 @ 0x1805d16c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow___ctor__1805d16c0
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  
  if (cRam00000001834b3aec == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.UIElements.ScrollView,bool>..ctor);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<UnityEngine.UIElements.ScrollView,bool>);
    FUN_180315380(TI_L2Window);
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<string,int>>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<string>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<string,int>>);
    FUN_180315380(TI_System.Collections.Generic.List<string>);
    FUN_180315380(TI_UnityEngine.UIElements.ScrollView__);
    FUN_180315380(TI_System.Text.StringBuilder);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement__);
    cRam00000001834b3aec = '\x01';
  }
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.List<string>);
  FUN_180bba2e0(uVar1,MR_System.Collections.Generic.List<string>..ctor);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  func_0x000180314690(param_1 + 0x90,uVar1);
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.List<string>);
  FUN_180bba2e0(uVar1,MR_System.Collections.Generic.List<string>..ctor);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  func_0x000180314690(param_1 + 0xa0,uVar1);
  uVar1 = func_0x000180314710(TI_UnityEngine.UIElements.ScrollView__,5);
  *(undefined8 *)(param_1 + 200) = uVar1;
  func_0x000180314690(param_1 + 200,uVar1);
  uVar1 = func_0x000180314710(TI_UnityEngine.UIElements.VisualElement__,5);
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  func_0x000180314690(param_1 + 0xd0,uVar1);
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<string,int>>);
  FUN_180bba2e0(uVar1,MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<string,int>>..ctor);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  func_0x000180314690(param_1 + 0xd8,uVar1);
  *(undefined4 *)(param_1 + 0x114) = 1;
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<UnityEngine.UIElements.ScrollView,bool>);
  FUN_18124bf80(uVar1,MR_System.Collections.Generic.Dictionary<UnityEngine.UIElements.ScrollView,bool>..ctor);
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  func_0x000180314690(param_1 + 0x120,uVar1);
  uVar1 = func_0x000180315580(TI_System.Text.StringBuilder);
  System_Text_StringBuilder___ctor(uVar1,0);
  *(undefined8 *)(param_1 + 0x130) = uVar1;
  func_0x000180314690(param_1 + 0x130,uVar1);
  *(undefined1 *)(param_1 + 0x140) = 1;
  *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
  if (*(int *)(TI_L2Window + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834c10ac == '\0') {
    FUN_180315380(TI_UnityEngine.Object,0,param_3,param_4,unaff_RBX);
    DAT_1834c10ac = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  return;
}

