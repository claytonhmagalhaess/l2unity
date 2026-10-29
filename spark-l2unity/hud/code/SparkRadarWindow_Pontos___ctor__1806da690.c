// SparkRadarWindow_Pontos___ctor__1806da690 @ 0x1806da690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow_Pontos___ctor__1806da690
               (longlong param_1,longlong *param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  if (cRam00000001834b40aa == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Vector2>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Texture2D>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<UnityEngine.Texture2D>);
    FUN_180315380(TI_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_System.Collections.Generic.List<UnityEngine.Vector2>);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    cRam00000001834b40aa = '\x01';
  }
  uVar2 = func_0x000180315580(TI_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>);
  FUN_180bba2e0(uVar2,MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>..ctor);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  func_0x000180314690(param_1 + 0x20,uVar2);
  uVar2 = func_0x000180315580(TI_System.Collections.Generic.List<UnityEngine.Texture2D>);
  FUN_180bba2e0(uVar2,MR_System.Collections.Generic.List<UnityEngine.Texture2D>..ctor);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  func_0x000180314690(param_1 + 0x28,uVar2);
  uVar2 = func_0x000180315580(TI_System.Collections.Generic.List<UnityEngine.Vector2>);
  FUN_180bba2e0(uVar2,MR_System.Collections.Generic.List<UnityEngine.Vector2>..ctor);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  func_0x000180314690(param_1 + 0x30,uVar2);
  Gear__UpdateWeaponType__1803dadf0(param_1,0);
  *(undefined4 *)(param_1 + 0x18) = param_3;
  uVar2 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(uVar2,0);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  func_0x000180314690(param_1 + 0x10,uVar2);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x10),0);
    uVar2 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.Position>.op_Implicit);
    if (lVar3 != 0) {
      FUN_180005060(0x67,TI_UnityEngine.UIElements.IStyle,lVar3,uVar2);
      if (*(longlong *)(param_1 + 0x10) != 0) {
        UnityEngine_UIElements_VisualElement__set_pickingMode(*(longlong *)(param_1 + 0x10),1,0);
        if (param_2 != (longlong *)0x0) {
          lVar3 = *(longlong *)(param_1 + 0x10);
          if (lVar3 != 0) {
            plVar4 = (longlong *)
                     (**(code **)(*param_2 + 0x9d8))(param_2,*(undefined8 *)(*param_2 + 0x9e0),0);
            if (plVar4 == (longlong *)0x0) {
              uVar2 = func_0x0001803153a0(TI_System.InvalidOperationException);
              uVar2 = func_0x000180315580(uVar2);
              uVar5 = func_0x0001803153a0(LIT_"\"You can't add directly to this VisualElement. Use hierar...");
              System_InvalidOperationException___ctor(uVar2,uVar5,0);
              uVar5 = func_0x0001803153a0(MD_UnityEngine.UIElements.VisualElement.Add);
              FUN_180315590(uVar2,uVar5);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (plVar4 == param_2) {
              UnityEngine_UIElements_VisualElement_Hierarchy__Add(&stack0x00000010,lVar3,0);
            }
            else {
              UnityEngine_UIElements_VisualElement__Add(plVar4);
            }
            *(longlong **)(lVar3 + 0x288) = param_2;
            func_0x000180314690(lVar3 + 0x288,param_2);
          }
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

