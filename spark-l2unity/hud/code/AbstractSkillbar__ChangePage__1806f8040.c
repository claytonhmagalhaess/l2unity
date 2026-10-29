// AbstractSkillbar__ChangePage__1806f8040 @ 0x1806f8040

void AbstractSkillbar__ChangePage__1806f8040(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  longlong *plStack_30;
  undefined8 uStack_28;
  undefined8 *puStack_20;
  longlong *plStack_18;
  
  *(int *)(param_1 + 0x24) = (int)param_2;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    plStack_30 = (longlong *)&UNK_1806f8071;
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plStack_30 = (longlong *)&UNK_1806f805d;
  ArrowInputManipulator__SelectIndex__1807a9b80(*(longlong *)(param_1 + 0x40),param_2,0);
  if (cRam00000001834b4157 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Dispose,0);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Count);
    FUN_180315380(TI_System.Collections.Generic.List<SkillbarSlot>);
    cRam00000001834b4157 = '\x01';
  }
  uStack_28 = 0;
  puStack_20 = (undefined8 *)0x0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_180bada40(&uStack_40,*(undefined8 *)(param_1 + 0x38),MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator);
    uStack_28 = uStack_40;
    puStack_20 = puStack_38;
    plStack_18 = plStack_30;
    uStack_40 = 0;
    puStack_38 = &uStack_28;
    while (cVar3 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext), cVar3 != '\0') {
      if (plStack_18 == (longlong *)0x0) {
        FUN_1803155d0();
        FUN_180311490();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(*plStack_18 + 0x178))(plStack_18,*(undefined8 *)(*plStack_18 + 0x180));
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<SkillbarSlot>.Dispose);
    lVar1 = *(longlong *)(param_1 + 0x38);
    if (lVar1 == 0) goto code_r0x0001806f8833;
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
    iVar5 = *(int *)(lVar1 + 0x18);
    *(undefined4 *)(lVar1 + 0x18) = 0;
    if (0 < iVar5) {
      System_Array__Clear(*(undefined8 *)(lVar1 + 0x10),0,iVar5,0);
    }
  }
  iVar5 = 0;
  uVar4 = func_0x000180315580(TI_System.Collections.Generic.List<SkillbarSlot>);
  FUN_180bba2e0(uVar4,MR_System.Collections.Generic.List<SkillbarSlot>..ctor);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  func_0x000180314690(param_1 + 0x38,uVar4);
  lVar1 = *(longlong *)(param_1 + 0x30);
  while (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) <= iVar5) {
      return;
    }
    AbstractSkillbar__CreateSlot__1806f8080(param_1,iVar5,0);
    iVar5 = iVar5 + 1;
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
code_r0x0001806f8833:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

