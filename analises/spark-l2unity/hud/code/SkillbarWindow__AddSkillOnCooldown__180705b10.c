// SkillbarWindow__AddSkillOnCooldown__180705b10 @ 0x180705b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarWindow__AddSkillOnCooldown__180705b10
               (longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 auStackX_18 [2];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 auStack_70 [4];
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong lStack_38;
  
  if (cRam00000001834b4195 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator);
    FUN_180315380(TI_object__);
    FUN_180315380(LIT_"'Skillbarslot match skillondooldown: Page:{0} Slot:{1} Sk...");
    cRam00000001834b4195 = '\x01';
  }
  lVar3 = SkillbarWindow__GetAllSlotsAt__180707190(param_1,param_2,param_3,0);
  if (lVar3 == 0) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_180bada40(&uStack_60,lVar3,MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator);
  uStack_48 = (undefined4)uStack_60;
  uStack_44 = uStack_60._4_4_;
  uStack_40 = (undefined4)uStack_58;
  uStack_3c = uStack_58._4_4_;
  lStack_38 = lStack_50;
  uStack_60 = 0;
  uStack_58 = &uStack_48;
code_r0x000180705bf0:
  cVar2 = FUN_1812fa7e0(&uStack_48,MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext);
  lVar3 = lStack_38;
  if (cVar2 == '\0') {
    Gear__UpdateWeaponType__1803dadf0(&uStack_48,MR_System.Collections.Generic.List<SkillbarSlot>.Dispose);
    return;
  }
  plVar4 = (longlong *)func_0x000180314710(TI_object__,4);
  auStackX_18[0] = param_2;
  lVar5 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
  if (plVar4 == (longlong *)0x0) goto code_r0x000180705ef0;
  if (lVar5 != 0) {
    lVar6 = func_0x0001803146b0(lVar5,*(undefined8 *)(*plVar4 + 0x40));
    if (lVar6 != 0) goto code_r0x000180705c66;
    uVar7 = func_0x000180314f80();
    FUN_180315590(uVar7,0);
code_r0x000180705ea0:
    FUN_1803155c0();
code_r0x000180705ea5:
    uVar7 = func_0x000180314f80();
    FUN_180315590(uVar7,0);
code_r0x000180705eb4:
    FUN_1803155c0();
code_r0x000180705eb9:
    uVar7 = func_0x000180314f80();
    FUN_180315590(uVar7,0);
code_r0x000180705ec8:
    FUN_1803155c0();
code_r0x000180705ecd:
    uVar7 = func_0x000180314f80();
    FUN_180315590(uVar7,0);
code_r0x000180705edc:
    FUN_1803155c0();
    goto code_r0x000180705ee1;
  }
code_r0x000180705c66:
  if ((int)plVar4[3] == 0) goto code_r0x000180705ea0;
  plVar4[4] = lVar5;
  func_0x000180314690(plVar4 + 4,lVar5);
  uStack_78 = param_3;
  lVar5 = func_0x000180314670(_DAT_1834c6268,&uStack_78);
  if (lVar5 != 0) {
    lVar6 = func_0x0001803146b0(lVar5,*(undefined8 *)(*plVar4 + 0x40));
    if (lVar6 != 0) goto code_r0x000180705cb6;
    goto code_r0x000180705ea5;
  }
code_r0x000180705cb6:
  if (*(uint *)(plVar4 + 3) < 2) goto code_r0x000180705eb4;
  plVar4[5] = lVar5;
  func_0x000180314690(plVar4 + 5,lVar5);
  if (lVar3 != 0) {
    uStack_74 = *(undefined4 *)(lVar3 + 0x14);
    lVar5 = func_0x000180314670(_DAT_1834c6268,&uStack_74);
    if (lVar5 != 0) {
      lVar6 = func_0x0001803146b0(lVar5,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar6 != 0) goto code_r0x000180705d12;
      goto code_r0x000180705eb9;
    }
code_r0x000180705d12:
    if (*(uint *)(plVar4 + 3) < 3) goto code_r0x000180705ec8;
    plVar4[6] = lVar5;
    func_0x000180314690(plVar4 + 6,lVar5);
    auStack_70[0] = *(undefined4 *)(lVar3 + 0xbc);
    lVar5 = func_0x000180314670(_DAT_1834c6268,auStack_70);
    if (lVar5 != 0) {
      lVar6 = func_0x0001803146b0(lVar5,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar6 != 0) goto code_r0x000180705d68;
      goto code_r0x000180705ecd;
    }
code_r0x000180705d68:
    if (*(uint *)(plVar4 + 3) < 4) goto code_r0x000180705edc;
    plVar4[7] = lVar5;
    func_0x000180314690(plVar4 + 7,lVar5);
    uVar7 = System_String__Format(LIT_"'Skillbarslot match skillondooldown: Page:{0} Slot:{1} Sk...",plVar4,0);
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__Log(uVar7,0);
    *(undefined8 *)(lVar3 + 0x80) = param_4;
    func_0x000180314690(lVar3 + 0x80,param_4);
    if (cRam00000001834b4197 == '\0') {
      FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Add);
      FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Contains);
      cRam00000001834b4197 = '\x01';
    }
    if (*(longlong *)(param_1 + 0xe0) != 0) goto code_r0x000180705e04;
    goto code_r0x000180705ee6;
  }
  goto code_r0x000180705eeb;
code_r0x000180705e04:
  cVar2 = FUN_181647ac0(*(longlong *)(param_1 + 0xe0),lVar3);
  if (cVar2 == '\0') {
    if (*(longlong *)(param_1 + 0xe0) == 0) {
code_r0x000180705ee1:
      FUN_1803155d0();
code_r0x000180705ee6:
      FUN_1803155d0();
code_r0x000180705eeb:
      FUN_1803155d0();
code_r0x000180705ef0:
      FUN_1803155d0();
      FUN_180311490();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_180002eb0(*(longlong *)(param_1 + 0xe0),lVar3);
  }
  goto code_r0x000180705bf0;
}

