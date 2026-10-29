// BuffSlot__CriaBuff__1805bf7b0 @ 0x1805bf7b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
BuffSlot__CriaBuff__1805bf7b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int aiStackX_8 [2];
  int iStack_48;
  int aiStack_44 [7];
  
  aiStackX_8[0] = param_1;
  if (cRam00000001834b3a8c == '\0') {
    FUN_180315380(TI_Buff);
    FUN_180315380(TI_string__);
    FUN_180315380(LIT_"'Skill '");
    FUN_180315380(LIT_"'icon.skill4271_'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3a8c = '\x01';
  }
  iStack_48 = 0;
  lVar2 = SkillgrpTable__get_Instance(0);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = SkillgrpTable__GetSkill(lVar2,aiStackX_8[0],param_2,0);
  }
  lVar3 = SkillNameTable__get_Instance(0);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = SkillNameTable__GetName(lVar3,aiStackX_8[0],param_2,0);
  }
  lVar4 = SkillNameTable__get_Instance(0);
  lVar7 = LIT_"''";
  if ((lVar4 != 0) &&
     (lVar4 = BuffSlot__DescricaoDeOutroNivel__1805bfa90(aiStackX_8[0],param_2,lVar3,0),
     lVar7 = LIT_"''", lVar4 != 0)) {
    lVar5 = *(longlong *)(lVar4 + 0x38);
    lVar7 = *(longlong *)(lVar4 + 0x28);
    if (lVar5 == 0) {
      lVar5 = func_0x000180314710(TI_string__,0);
    }
    if (cRam00000001834b3a8e == '\0') {
      FUN_180315380(LIT_"'$s{0}'");
      cRam00000001834b3a8e = '\x01';
    }
    if (lVar5 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    for (uVar10 = 0; (int)uVar10 < *(int *)(lVar5 + 0x18); uVar10 = uVar10 + 1) {
      aiStack_44[0] = uVar10 + 1;
      uVar6 = func_0x000180314670(_DAT_1834c6268,aiStack_44);
      uVar6 = System_String__Format(LIT_"'$s{0}'",uVar6,0);
      if (*(uint *)(lVar5 + 0x18) <= uVar10) {
        FUN_1803155c0();
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      if (lVar7 == 0) {
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      lVar7 = System_String__Replace
                        (lVar7,uVar6,*(undefined8 *)(lVar5 + 0x20 + (longlong)(int)uVar10 * 8),0);
    }
  }
  if (lVar3 == 0) {
    uVar6 = System_Int32__ToString(aiStackX_8,0);
    uVar6 = System_String__Concat(LIT_"'Skill '",uVar6,0);
  }
  else {
    uVar6 = *(undefined8 *)(lVar3 + 0x20);
  }
  if (lVar2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar2 + 0x68);
  }
  if (aiStackX_8[0] == 0x10af) {
    if (param_2 < 8) {
      iStack_48 = param_2;
      if (param_2 < 1) {
        iStack_48 = 1;
      }
    }
    else {
      iStack_48 = 7;
    }
    uVar8 = System_Int32__ToString(&iStack_48,0);
    uVar8 = System_String__Concat(LIT_"'icon.skill4271_'",uVar8,0);
  }
  uVar11 = FUN_1824366b0(0);
  uVar9 = func_0x000180315580(TI_Buff);
  Buff___ctor(uVar9,uVar6,lVar7,uVar8,param_2,param_3,param_4,uVar11,0);
  return uVar9;
}

