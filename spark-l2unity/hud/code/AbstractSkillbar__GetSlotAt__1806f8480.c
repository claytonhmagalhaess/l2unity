// AbstractSkillbar__GetSlotAt__1806f8480 @ 0x1806f8480

longlong AbstractSkillbar__GetSlotAt__1806f8480(longlong param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong lStack_18;
  
  if (cRam00000001834b415a == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator);
    cRam00000001834b415a = '\x01';
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_1803155d0();
  }
  else {
    FUN_180bada40(&uStack_40,*(longlong *)(param_1 + 0x38),MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator);
    uStack_28 = (undefined4)uStack_40;
    uStack_24 = uStack_40._4_4_;
    uStack_20 = (undefined4)uStack_38;
    uStack_1c = uStack_38._4_4_;
    lStack_18 = lStack_30;
    uStack_40 = 0;
    uStack_38 = &uStack_28;
    while( true ) {
      cVar2 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext);
      lVar3 = lStack_18;
      if (cVar2 == '\0') {
        Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<SkillbarSlot>.Dispose);
        return 0;
      }
      if (lStack_18 == 0) break;
      if (param_2 == *(int *)(lStack_18 + 0xbc)) {
        Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<SkillbarSlot>.Dispose);
        return lVar3;
      }
    }
  }
  FUN_1803155d0();
  FUN_180311490();
  pcVar1 = (code *)swi(3);
  lVar3 = (*pcVar1)();
  return lVar3;
}

