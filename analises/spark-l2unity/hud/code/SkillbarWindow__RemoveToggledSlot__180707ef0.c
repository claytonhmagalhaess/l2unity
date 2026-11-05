// SkillbarWindow__RemoveToggledSlot__180707ef0 @ 0x180707ef0

void SkillbarWindow__RemoveToggledSlot__180707ef0
               (undefined8 param_1,undefined4 param_2,undefined4 param_3)

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
  
  if (cRam00000001834b4192 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator);
    cRam00000001834b4192 = '\x01';
  }
  lVar3 = SkillbarWindow__GetAllSlotsAt__180707190(param_1,param_2,param_3,0);
  if (lVar3 != 0) {
    FUN_180bada40(&uStack_40,lVar3,MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator);
    uStack_28 = (undefined4)uStack_40;
    uStack_24 = uStack_40._4_4_;
    uStack_20 = (undefined4)uStack_38;
    uStack_1c = uStack_38._4_4_;
    lStack_18 = lStack_30;
    uStack_40 = 0;
    uStack_38 = &uStack_28;
    while( true ) {
      cVar2 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext);
      if (cVar2 == '\0') {
        Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<SkillbarSlot>.Dispose);
        return;
      }
      if (lStack_18 == 0) break;
      *(undefined1 *)(lStack_18 + 0x88) = 0;
      SkillbarWindow__RemoveToggledSlot__180708030(param_1,lStack_18,0);
    }
    FUN_1803155d0();
    FUN_180311490();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

