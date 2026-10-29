// SkillbarWindow__AddToggledSlot__180706080 @ 0x180706080

void SkillbarWindow__AddToggledSlot__180706080(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  
  if (cRam00000001834b4193 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Contains);
    cRam00000001834b4193 = '\x01';
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    cVar2 = FUN_181647ac0(*(longlong *)(param_1 + 0xd8),param_2,MR_System.Collections.Generic.List<SkillbarSlot>.Contains);
    if (cVar2 == '\0') {
      if (*(longlong *)(param_1 + 0xd8) == 0) goto code_r0x0001807060fd;
      FUN_180002eb0(*(longlong *)(param_1 + 0xd8),param_2,MR_System.Collections.Generic.List<SkillbarSlot>.Add);
    }
    return;
  }
code_r0x0001807060fd:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

