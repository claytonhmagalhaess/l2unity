// SkillbarWindow__AddToggledSlot__180706110 @ 0x180706110

void SkillbarWindow__AddToggledSlot__180706110
               (longlong param_1,undefined4 param_2,undefined4 param_3)

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
  
  if (cRam00000001834b4191 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator);
    cRam00000001834b4191 = '\x01';
  }
  lVar3 = SkillbarWindow__GetAllSlotsAt__180707190(param_1,param_2,param_3,0);
  if (lVar3 == 0) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_180bada40(&uStack_40,lVar3,MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator);
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  uStack_20 = (undefined4)uStack_38;
  uStack_1c = uStack_38._4_4_;
  lStack_18 = lStack_30;
  uStack_40 = 0;
  uStack_38 = &uStack_28;
code_r0x0001807061c0:
  cVar2 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext);
  lVar3 = lStack_18;
  if (cVar2 == '\0') {
    Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<SkillbarSlot>.Dispose);
    return;
  }
  if (lStack_18 == 0) goto code_r0x000180706298;
  *(undefined1 *)(lStack_18 + 0x88) = 1;
  if (cRam00000001834b4193 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Contains);
    cRam00000001834b4193 = '\x01';
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) goto code_r0x00018070621e;
  goto code_r0x000180706293;
code_r0x00018070621e:
  cVar2 = FUN_181647ac0(*(longlong *)(param_1 + 0xd8),lVar3,MR_System.Collections.Generic.List<SkillbarSlot>.Contains);
  if (cVar2 == '\0') {
    if (*(longlong *)(param_1 + 0xd8) == 0) {
      FUN_1803155d0();
code_r0x000180706293:
      FUN_1803155d0();
code_r0x000180706298:
      FUN_1803155d0();
      FUN_180311490();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_180002eb0(*(longlong *)(param_1 + 0xd8),lVar3,MR_System.Collections.Generic.List<SkillbarSlot>.Add);
  }
  goto code_r0x0001807061c0;
}

