// SkillbarWindow__GetAllSlotsAt__180707190 @ 0x180707190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SkillbarWindow__GetAllSlotsAt__180707190
                   (longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int aiStackX_8 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong lStack_20;
  
  if (cRam00000001834b4190 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_System.Collections.Generic.List<AbstractSkillbar>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<AbstractSkillbar>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<AbstractSkillbar>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<AbstractSkillbar>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.get_Count);
    FUN_180315380(TI_System.Collections.Generic.List<SkillbarSlot>);
    FUN_180315380(LIT_"'Skillbar slot error: {0}'");
    cRam00000001834b4190 = '\x01';
  }
  lVar3 = func_0x000180315580(TI_System.Collections.Generic.List<SkillbarSlot>);
  FUN_180bba2e0(lVar3,MR_System.Collections.Generic.List<SkillbarSlot>..ctor);
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    FUN_1803155d0();
code_r0x0001807073ab:
    FUN_1803155d0();
  }
  else {
    FUN_180bada40(&uStack_48,*(longlong *)(param_1 + 0xd0),MR_System.Collections.Generic.List<AbstractSkillbar>.GetEnumerator,param_4,lVar3);
    uStack_30 = (undefined4)uStack_48;
    uStack_2c = uStack_48._4_4_;
    uStack_28 = (undefined4)uStack_40;
    uStack_24 = uStack_40._4_4_;
    lStack_20 = lStack_38;
    uStack_48 = 0;
    uStack_40 = &uStack_30;
    while( true ) {
      do {
        cVar2 = FUN_1812fa7e0(&uStack_30,MR_System.Collections.Generic.List<AbstractSkillbar>.MoveNext);
        if (cVar2 == '\0') {
          Gear__UpdateWeaponType__1803dadf0(&uStack_30,MR_System.Collections.Generic.List<AbstractSkillbar>.Dispose);
          return lVar3;
        }
        if (lStack_20 == 0) goto code_r0x0001807073b6;
      } while (*(int *)(lStack_20 + 0x24) != param_2);
      if (*(longlong *)(lStack_20 + 0x38) == 0) break;
      if (param_3 < *(int *)(*(longlong *)(lStack_20 + 0x38) + 0x18)) {
        uVar4 = AbstractSkillbar__GetSlotAt__1806f8480(lStack_20,param_3,0);
        if (lVar3 == 0) goto code_r0x0001807073ab;
        FUN_180002eb0(lVar3,uVar4);
      }
      else {
        aiStackX_8[0] = param_3;
        uVar4 = func_0x000180314670(_DAT_1834c6268,aiStackX_8);
        uVar4 = System_String__Format(LIT_"'Skillbar slot error: {0}'",uVar4,0);
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        UnityEngine_Debug__LogWarning(uVar4,0);
      }
    }
  }
  FUN_1803155d0();
code_r0x0001807073b6:
  FUN_1803155d0();
  FUN_180311490();
  pcVar1 = (code *)swi(3);
  lVar3 = (*pcVar1)();
  return lVar3;
}

