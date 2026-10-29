// SparkMapaWindow___ctor__180653be0 @ 0x180653be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow___ctor__180653be0
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  
  if (cRam00000001834b3d51 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,float>..ctor);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>..ctor);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<string,float>);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Rect>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>);
    FUN_180315380(TI_System.Collections.Generic.List<UnityEngine.Rect>);
    FUN_180315380(TI_float__);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(LIT_"'?'");
    cRam00000001834b3d51 = '\x01';
  }
  uVar3 = func_0x000180315580(TI_System.Collections.Generic.List<UnityEngine.Rect>);
  FUN_180bba2e0(uVar3,MR_System.Collections.Generic.List<UnityEngine.Rect>..ctor);
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  func_0x000180314690(param_1 + 0xa0,uVar3);
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x128) = 0x461c3c00;
  *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x194) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1a8) = LIT_"'?'";
  func_0x000180314690(param_1 + 0x1a8,LIT_"'?'");
  uVar3 = func_0x000180315580(TI_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>);
  FUN_180bba2e0(uVar3,MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>..ctor);
  *(undefined8 *)(param_1 + 0x1c8) = uVar3;
  func_0x000180314690(param_1 + 0x1c8,uVar3);
  *(undefined1 *)(param_1 + 0x1f8) = 1;
  *(undefined4 *)(param_1 + 0x1fc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x208) = 0x3d0f5c29;
  uVar3 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>);
  FUN_18124bf80(uVar3,MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>..ctor);
  *(undefined8 *)(param_1 + 0x218) = uVar3;
  func_0x000180314690(param_1 + 0x218,uVar3);
  uVar3 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<string,float>);
  FUN_18124bf80(uVar3,MR_System.Collections.Generic.Dictionary<string,float>..ctor);
  *(undefined8 *)(param_1 + 0x220) = uVar3;
  func_0x000180314690(param_1 + 0x220,uVar3);
  uVar3 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>);
  FUN_18124bf80(uVar3,MR_System.Collections.Generic.Dictionary<string,UnityEngine.UIElements.VisualElement>..ctor);
  *(undefined8 *)(param_1 + 0x260) = uVar3;
  func_0x000180314690(param_1 + 0x260,uVar3);
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    func_0x000180315660(TI_SparkMapaWindow);
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x98);
  if (lVar1 != 0) {
    uVar3 = func_0x000180314710(TI_float__,*(undefined4 *)(lVar1 + 0x18));
    *(undefined8 *)(param_1 + 0x268) = uVar3;
    func_0x000180314690(param_1 + 0x268,uVar3);
    if (DAT_1834b440e == '\0') {
      FUN_180315380(TI_L2Window);
      DAT_1834b440e = '\x01';
    }
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
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

