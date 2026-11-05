// SparkMapaWindow__MarcaRadar__18063c6e0 @ 0x18063c6e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__MarcaRadar__18063c6e0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 uVar7;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  longlong lStack_40;
  
  if (cRam00000001834b3d31 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.GetEnumerator);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkQuests);
    cRam00000001834b3d31 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_180badb20(&uStack_78,*(longlong *)(param_1 + 0x1c8),MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.GetEnumerator);
    uStack_58 = (undefined4)uStack_78;
    uStack_54 = uStack_78._4_4_;
    uStack_50 = (undefined4)uStack_70;
    uStack_4c = uStack_70._4_4_;
    uStack_48 = uStack_68;
    lStack_40 = lStack_60;
    uStack_78 = 0;
    uStack_70 = &uStack_58;
    while( true ) {
      cVar6 = FUN_1812ec720(&uStack_58,MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.MoveNext);
      uVar5 = uStack_48;
      if (cVar6 == '\0') {
        Gear__UpdateWeaponType__1803dadf0(&uStack_58,MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.UIElements.VisualElement,SparkMapaWindow.Boss>>.Dispose);
        return;
      }
      if (lStack_40 == 0) break;
      iVar1 = *(int *)(lStack_40 + 0x18);
      iVar2 = *(int *)(lStack_40 + 0x1c);
      iVar3 = *(int *)(lStack_40 + 0x20);
      if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
        func_0x000180315660();
      }
      fStack_88 = (float)iVar1;
      fStack_84 = (float)iVar2;
      fStack_80 = (float)iVar3;
      uVar7 = SparkQuests__RadarEm(&fStack_88,0);
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      SparkEstilo__Marca__180721270(uVar5,uVar7,0);
    }
    FUN_1803155d0();
    FUN_180311490();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

