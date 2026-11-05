// L2Window__InitWindow__180799db0 @ 0x180799db0

void L2Window__InitWindow__180799db0
               (longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b4486 == '\0') {
    FUN_180315380(TI_MouseOverDetectionManipulator);
    cRam00000001834b4486 = '\x01';
  }
  *(longlong **)(param_1 + 0x20) = param_2;
  func_0x000180314690(param_1 + 0x20,param_2);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar2 = UnityEngine_UIElements_VisualTreeAsset__Instantiate(*(longlong *)(param_1 + 0x28),0);
    if (lVar2 != 0) {
      uVar3 = UnityEngine_UIElements_VisualElement__get_Item(lVar2,0,0);
      *(undefined8 *)(param_1 + 0x30) = uVar3;
      func_0x000180314690(param_1 + 0x30,uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = func_0x000180315580(TI_MouseOverDetectionManipulator);
      MouseOverDetectionManipulator___ctor__1807b03c0(uVar4,uVar3,0);
      *(undefined8 *)(param_1 + 0x40) = uVar4;
      func_0x000180314690(param_1 + 0x40,uVar4);
      UnityEngine_UIElements_VisualElementExtensions__AddManipulator
                (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40),0);
      if (*(char *)(param_1 + 0x38) != '\0') {
        if (*(longlong *)(param_1 + 0x40) == 0) goto code_r0x000180799eaf;
        MouseOverDetectionManipulator__Disable__1807afdf0(*(longlong *)(param_1 + 0x40),0);
      }
      if (param_2 != (longlong *)0x0) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        if (lVar2 != 0) {
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
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (plVar5 == param_2) {
            UnityEngine_UIElements_VisualElement_Hierarchy__Add(&stack0x00000010,lVar2,0);
          }
          else {
            UnityEngine_UIElements_VisualElement__Add(plVar5);
          }
          *(longlong **)(lVar2 + 0x288) = param_2;
          func_0x000180314690(lVar2 + 0x288,param_2);
        }
        return;
      }
    }
  }
code_r0x000180799eaf:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

