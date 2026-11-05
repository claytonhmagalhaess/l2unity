// SkillbarWindow__AtualizaTeclas__180706a40 @ 0x180706a40

void SkillbarWindow__AtualizaTeclas__180706a40
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong lStack_38;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  longlong lStack_10;
  
  if (cRam00000001834b4182 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<AbstractSkillbar>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<AbstractSkillbar>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<AbstractSkillbar>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<AbstractSkillbar>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator);
    cRam00000001834b4182 = '\x01';
  }
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_180bada40(&uStack_78,*(undefined8 *)(param_1 + 0xd0),MR_System.Collections.Generic.List<AbstractSkillbar>.GetEnumerator);
    uStack_48 = (undefined4)uStack_78;
    uStack_44 = uStack_78._4_4_;
    uStack_40 = (undefined4)uStack_70;
    uStack_3c = uStack_70._4_4_;
    lStack_38 = lStack_68;
    uVar2 = 0;
    while( true ) {
      cVar1 = FUN_1812fa7e0(&uStack_48,MR_System.Collections.Generic.List<AbstractSkillbar>.MoveNext);
      if (cVar1 == '\0') break;
      if ((lStack_38 != 0) && (*(longlong *)(lStack_38 + 0x38) != 0)) {
        FUN_180bada40(&uStack_20,*(undefined8 *)(lStack_38 + 0x38),MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator,param_4,
                      uVar2);
        uStack_60 = CONCAT44(uStack_1c,uStack_20);
        uStack_58 = CONCAT44(uStack_14,uStack_18);
        lStack_50 = lStack_10;
        uStack_78 = 0;
        uStack_70 = &uStack_60;
        while( true ) {
          cVar1 = FUN_1812fa7e0(&uStack_60,MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext);
          if (cVar1 == '\0') break;
          if (lStack_50 != 0) {
            SkillbarSlot__AtualizaTecla__1807051f0(lStack_50,0);
          }
        }
        Gear__UpdateWeaponType__1803dadf0(&uStack_60,MR_System.Collections.Generic.List<SkillbarSlot>.Dispose);
      }
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_48,MR_System.Collections.Generic.List<AbstractSkillbar>.Dispose);
  }
  return;
}

