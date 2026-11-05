// SparkRadarWindow__InitWindow__1806e9cc0 @ 0x1806e9cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow__InitWindow__1806e9cc0
               (longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b408c == '\0') {
    FUN_180315380(TI_MouseOverDetectionManipulator);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'SparkRadar'");
    cRam00000001834b408c = '\x01';
  }
  *(longlong **)(param_1 + 0x20) = param_2;
  func_0x000180314690(param_1 + 0x20,param_2);
  uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(uVar3,0);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  func_0x000180314690(param_1 + 0x30,uVar3);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    UnityEngine_UIElements_VisualElement__set_name
              (*(longlong *)(param_1 + 0x30),LIT_"'SparkRadar'",0);
    if (*(longlong *)(param_1 + 0x30) != 0) {
      UnityEngine_UIElements_VisualElement__set_pickingMode(*(longlong *)(param_1 + 0x30),1,0);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = func_0x000180315580(TI_MouseOverDetectionManipulator);
      MouseOverDetectionManipulator___ctor__1807b03c0(uVar4,uVar3,0);
      *(undefined8 *)(param_1 + 0x40) = uVar4;
      func_0x000180314690(param_1 + 0x40,uVar4);
      UnityEngine_UIElements_VisualElementExtensions__AddManipulator
                (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40),0);
      if (param_2 != (longlong *)0x0) {
        lVar1 = *(longlong *)(param_1 + 0x30);
        if (lVar1 != 0) {
          plVar5 = (longlong *)
                   (**(code **)(*param_2 + 0x9d8))
                             (param_2,*(undefined8 *)(*param_2 + 0x9e0),0,param_4,unaff_RDI);
          if (plVar5 == (longlong *)0x0) {
            uVar3 = func_0x0001803153a0(TI_System.InvalidOperationException);
            uVar3 = func_0x000180315580(uVar3);
            uVar4 = func_0x0001803153a0(LIT_"\"You can't add directly to this VisualElement. Use hierar...");
            System_InvalidOperationException___ctor(uVar3,uVar4,0);
            uVar4 = func_0x0001803153a0(MD_UnityEngine.UIElements.VisualElement.Add);
            FUN_180315590(uVar3,uVar4);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (plVar5 == param_2) {
            UnityEngine_UIElements_VisualElement_Hierarchy__Add(&stack0x00000010,lVar1,0);
          }
          else {
            UnityEngine_UIElements_VisualElement__Add(plVar5);
          }
          *(longlong **)(lVar1 + 0x288) = param_2;
          func_0x000180314690(lVar1 + 0x288,param_2);
        }
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

