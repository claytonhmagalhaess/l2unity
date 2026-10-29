// SkillbarSlot__AtualizaSkill__180705090 @ 0x180705090

void SkillbarSlot__AtualizaSkill__180705090(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  
  if (cRam00000001834b4172 == '\0') {
    FUN_180315380(TI_SkillSlot);
    FUN_180315380(TI_SkillWindowInfo);
    cRam00000001834b4172 = '\x01';
  }
  if (((*(longlong *)(param_1 + 0xb0) != 0) && (*(int *)(*(longlong *)(param_1 + 0xb0) + 0x18) == 2)
      ) && (plVar2 = *(longlong **)(param_1 + 0xa8), plVar2 != (longlong *)0x0)) {
    if (((*(byte *)(TI_SkillSlot + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
        (*(longlong *)
          (*(longlong *)(*plVar2 + 200) + -8 +
          (ulonglong)*(byte *)(TI_SkillSlot + 0x130) * 8) == TI_SkillSlot)) &&
       ((plVar2[0x14] != 0 &&
        (iVar4 = SkillbarSlot__NivelDoJogador__1807058d0
                           (*(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1c),
                            *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x20),0),
        iVar4 != *(int *)(param_1 + 200))))) {
      *(int *)(param_1 + 200) = iVar4;
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1c);
      lVar5 = func_0x000180315580(TI_SkillWindowInfo);
      SkillWindowInfo___ctor(lVar5,uVar1,iVar4,0,0,0);
      plVar2[0x14] = lVar5;
      func_0x000180314690(plVar2 + 0x14,lVar5);
      lVar5 = plVar2[0xb];
      if (lVar5 != 0) {
        *(longlong *)(lVar5 + 0x18) = plVar2[0x14];
        func_0x000180314690(lVar5 + 0x18);
      }
    }
  }
  return;
}

