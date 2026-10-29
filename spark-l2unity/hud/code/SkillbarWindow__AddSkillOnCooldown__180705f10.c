// SkillbarWindow__AddSkillOnCooldown__180705f10 @ 0x180705f10

void SkillbarWindow__AddSkillOnCooldown__180705f10(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  
  if (cRam00000001834b4197 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Contains);
    cRam00000001834b4197 = '\x01';
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    cVar2 = FUN_181647ac0(*(longlong *)(param_1 + 0xe0),param_2,MR_System.Collections.Generic.List<SkillbarSlot>.Contains);
    if (cVar2 == '\0') {
      if (*(longlong *)(param_1 + 0xe0) == 0) goto code_r0x000180705f8d;
      FUN_180002eb0(*(longlong *)(param_1 + 0xe0),param_2,MR_System.Collections.Generic.List<SkillbarSlot>.Add);
    }
    return;
  }
code_r0x000180705f8d:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

