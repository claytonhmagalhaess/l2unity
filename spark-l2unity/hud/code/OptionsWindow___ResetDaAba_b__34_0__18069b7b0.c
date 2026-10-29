// OptionsWindow___ResetDaAba_b__34_0__18069b7b0 @ 0x18069b7b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___ResetDaAba_b__34_0__18069b7b0
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
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
  undefined *puStack_30;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  longlong lStack_10;
  
  if (cRam00000001834b3ea6 == '\0') {
    puStack_30 = &UNK_18069b7ce;
    FUN_180315380(TI_SparkTeclas);
    puStack_30 = &UNK_18069b7da;
    FUN_180315380(LIT_"''");
    cRam00000001834b3ea6 = '\x01';
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    puStack_30 = &UNK_18069b7f6;
    func_0x000180315660();
  }
  puStack_30 = &UNK_18069b7fd;
  SparkTeclas__VoltaAoPadrao(0);
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    puStack_30 = &UNK_18069b820;
    (**(code **)(*plVar1 + 0xe48))(plVar1,LIT_"''",*(undefined8 *)(*plVar1 + 0xe50));
    puStack_30 = &UNK_18069b82a;
    OptionsWindow__MostraTeclas(param_1,0);
    if (cRam00000001834b32cb == '\0') {
      puStack_30 = &UNK_18069b83f;
      FUN_180315380(TI_SkillbarWindow);
      cRam00000001834b32cb = '\x01';
    }
    lVar2 = **(longlong **)(TI_SkillbarWindow + 0xb8);
    if (lVar2 != 0) {
      if (cRam00000001834b4182 == '\0') {
        FUN_180315380(MR_System.Collections.Generic.List<AbstractSkillbar>.Dispose,0);
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
      if (*(longlong *)(lVar2 + 0xd0) != 0) {
        FUN_180bada40(&uStack_78,*(undefined8 *)(lVar2 + 0xd0),MR_System.Collections.Generic.List<AbstractSkillbar>.GetEnumerator);
        uStack_48 = (undefined4)uStack_78;
        uStack_44 = uStack_78._4_4_;
        uStack_40 = (undefined4)uStack_70;
        uStack_3c = uStack_70._4_4_;
        lStack_38 = lStack_68;
        uVar5 = 0;
        while( true ) {
          cVar4 = FUN_1812fa7e0(&uStack_48,MR_System.Collections.Generic.List<AbstractSkillbar>.MoveNext);
          if (cVar4 == '\0') break;
          if ((lStack_38 != 0) && (*(longlong *)(lStack_38 + 0x38) != 0)) {
            FUN_180bada40(&uStack_20,*(undefined8 *)(lStack_38 + 0x38),MR_System.Collections.Generic.List<SkillbarSlot>.GetEnumerator,param_4,
                          uVar5);
            uStack_60 = CONCAT44(uStack_1c,uStack_20);
            uStack_58 = CONCAT44(uStack_14,uStack_18);
            lStack_50 = lStack_10;
            uStack_78 = 0;
            uStack_70 = &uStack_60;
            while( true ) {
              cVar4 = FUN_1812fa7e0(&uStack_60,MR_System.Collections.Generic.List<SkillbarSlot>.MoveNext);
              if (cVar4 == '\0') break;
              if (lStack_50 != 0) {
                SkillbarSlot__AtualizaTecla(lStack_50,0);
              }
            }
            func_0x0001803dadf0(&uStack_60,MR_System.Collections.Generic.List<SkillbarSlot>.Dispose);
          }
        }
        func_0x0001803dadf0(&uStack_48,MR_System.Collections.Generic.List<AbstractSkillbar>.Dispose);
      }
      return;
    }
    return;
  }
  puStack_30 = &UNK_18069b873;
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

