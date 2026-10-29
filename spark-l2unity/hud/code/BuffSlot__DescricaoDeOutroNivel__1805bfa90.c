// BuffSlot__DescricaoDeOutroNivel__1805bfa90 @ 0x1805bfa90

longlong BuffSlot__DescricaoDeOutroNivel__1805bfa90(undefined4 param_1,int param_2,longlong param_3)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b3a8d == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SkillNameData>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SkillNameData>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SkillNameData>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SkillNameData>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<int,SkillNameData>.get_Key);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<int,SkillNameData>.get_Value);
    cRam00000001834b3a8d = '\x01';
  }
  if (param_3 != 0) {
    cVar3 = func_0x000181707e50(*(undefined8 *)(param_3 + 0x28),0);
    if (cVar3 == '\0') {
      return param_3;
    }
  }
  lVar5 = SkillNameTable__get_Instance(0);
  if (lVar5 != 0) {
    lVar5 = SkillNameTable__GetNames(lVar5,param_1,0);
    if (lVar5 != 0) {
      FUN_18117ccd0(&uStack_68,lVar5,MR_System.Collections.Generic.Dictionary<int,SkillNameData>.GetEnumerator);
      uStack_90 = uStack_68;
      uStack_88 = uStack_60;
      uStack_80 = uStack_58;
      lStack_78 = lStack_50;
      uStack_70 = uStack_48;
      lVar5 = 0;
      iVar6 = 0x7fffffff;
      while( true ) {
        cVar3 = FUN_181334a60(&uStack_90,MR_System.Collections.Generic.Dictionary<int,SkillNameData>.MoveNext);
        lVar2 = lStack_78;
        if (cVar3 == '\0') break;
        if (lStack_78 != 0) {
          iVar4 = (int)uStack_80;
          cVar3 = func_0x000181707e50(*(undefined8 *)(lStack_78 + 0x28),0);
          if (cVar3 == '\0') {
            if (param_2 < iVar4) {
              iVar4 = (iVar4 - param_2) + 1000;
            }
            else {
              iVar4 = param_2 - iVar4;
            }
            if (iVar4 < iVar6) {
              lVar5 = lVar2;
              iVar6 = iVar4;
            }
          }
        }
      }
      Gear__UpdateWeaponType__1803dadf0(&uStack_90,MR_System.Collections.Generic.Dictionary<int,SkillNameData>.Dispose);
      return lVar5;
    }
    return 0;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  lVar5 = (*pcVar1)();
  return lVar5;
}

