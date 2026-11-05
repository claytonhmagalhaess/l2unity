// L2SlotContainer__Initialize__18078f320 @ 0x18078f320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2SlotContainer__Initialize__18078f320
               (longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  bool bVar2;
  
  if (cRam00000001834b4438 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'Content'");
    cRam00000001834b4438 = '\x01';
  }
  param_1[4] = param_2;
  func_0x000180314690(param_1 + 4,param_2);
  bVar2 = cRam00000001834b4433 == '\0';
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  if (bVar2) {
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.ScrollView>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'ScrollView'");
    cRam00000001834b4433 = '\x01';
  }
  lVar1 = param_1[4];
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar1 = FUN_180b0e310(lVar1,LIT_"'ScrollView'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.ScrollView>);
  }
  param_1[2] = lVar1;
  func_0x000180314690(param_1 + 2);
  if (param_1[2] == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1[2] + 0x348);
  }
  param_1[3] = lVar1;
  func_0x000180314690(param_1 + 3);
  (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  L2Scrollable__RegisterPlayerScrollEvent__18078e810(param_1,0);
  param_1[4] = param_2;
  func_0x000180314690(param_1 + 4,param_2);
  if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar1 = FUN_180b0e310(param_2,LIT_"'Content'",0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.VisualElement>);
  param_1[6] = lVar1;
  func_0x000180314690(param_1 + 6,lVar1);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = param_3;
  *(undefined4 *)(param_1 + 9) = param_4;
  return;
}

