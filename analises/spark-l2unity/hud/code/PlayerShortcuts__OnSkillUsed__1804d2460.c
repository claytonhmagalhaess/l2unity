// PlayerShortcuts__OnSkillUsed__1804d2460 @ 0x1804d2460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayerShortcuts__OnSkillUsed__1804d2460(longlong param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int aiStackX_8 [2];
  undefined4 auStackX_20 [2];
  undefined4 auStack_68 [4];
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong lStack_30;
  
  if (cRam00000001834b3411 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_System.Collections.Generic.List<Shortcut>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<Shortcut>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<Shortcut>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<Shortcut>.GetEnumerator);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(LIT_"'Set shortcut on cooldown: Skill={0} Page={1} Slot={2}'");
    cRam00000001834b3411 = '\x01';
  }
  if (-1 < *(int *)(param_1 + 0x38)) {
    if (param_2 == 0) goto code_r0x0001804d2741;
    if (*(int *)(param_2 + 0x10) == *(int *)(param_1 + 0x40)) {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  if (cRam00000001834b32cb == '\0') {
    FUN_180315380(TI_SkillbarWindow);
    cRam00000001834b32cb = '\x01';
  }
  uVar3 = **(undefined8 **)(TI_SkillbarWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if (cVar2 != '\0') {
    return;
  }
  if (cRam00000001834b33ff == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,Shortcut>.get_Values);
    FUN_180315380(MR_System.Linq.Enumerable.ToList<Shortcut>);
    cRam00000001834b33ff = '\x01';
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar3 = FUN_18117fd20(*(longlong *)(param_1 + 0x30),MR_System.Collections.Generic.Dictionary<int,Shortcut>.get_Values);
    lVar4 = FUN_1809c8820(uVar3,MR_System.Linq.Enumerable.ToList<Shortcut>);
    if (lVar4 != 0) {
      FUN_180bada40(&uStack_58,lVar4,MR_System.Collections.Generic.List<Shortcut>.GetEnumerator);
      uStack_40 = (undefined4)uStack_58;
      uStack_3c = uStack_58._4_4_;
      uStack_38 = (undefined4)uStack_50;
      uStack_34 = uStack_50._4_4_;
      lStack_30 = lStack_48;
      uStack_58 = 0;
      uStack_50 = &uStack_40;
code_r0x0001804d25f0:
      do {
        cVar2 = FUN_1812fa7e0(&uStack_40,MR_System.Collections.Generic.List<Shortcut>.MoveNext);
        lVar4 = lStack_30;
        if (cVar2 == '\0') {
          Gear__UpdateWeaponType__1803dadf0(&uStack_40,MR_System.Collections.Generic.List<Shortcut>.Dispose);
          return;
        }
        if (lStack_30 == 0) goto code_r0x0001804d2735;
      } while (*(int *)(lStack_30 + 0x18) != 2);
      if (param_2 != 0) {
        if (*(int *)(lStack_30 + 0x1c) != *(int *)(param_2 + 0x10)) goto code_r0x0001804d25f0;
        aiStackX_8[0] = *(int *)(param_2 + 0x10);
        uVar3 = func_0x000180314670(_DAT_1834c6268,aiStackX_8);
        auStackX_20[0] = *(undefined4 *)(lVar4 + 0x14);
        uVar5 = func_0x000180314670(_DAT_1834c6268,auStackX_20);
        auStack_68[0] = *(undefined4 *)(lVar4 + 0x10);
        uVar6 = func_0x000180314670(_DAT_1834c6268,auStack_68);
        uVar3 = System_String__Format(LIT_"'Set shortcut on cooldown: Skill={0} Page={1} Slot={2}'",uVar3,uVar5,uVar6,0);
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        UnityEngine_Debug__Log(uVar3,0);
        lVar7 = FUN_180493b20(0);
        if (lVar7 != 0) {
          SkillbarWindow__AddSkillOnCooldown__180705b10
                    (lVar7,*(undefined4 *)(lVar4 + 0x14),*(undefined4 *)(lVar4 + 0x10),param_2,0);
          goto code_r0x0001804d25f0;
        }
        FUN_1803155d0();
      }
      FUN_1803155d0();
code_r0x0001804d2735:
      FUN_1803155d0();
      FUN_180311490();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
code_r0x0001804d2741:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

