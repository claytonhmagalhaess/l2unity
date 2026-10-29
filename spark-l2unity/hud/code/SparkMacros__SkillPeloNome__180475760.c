// SparkMacros__SkillPeloNome__180475760 @ 0x180475760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkMacros__SkillPeloNome__180475760(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  
  if (cRam00000001834b3086 == '\0') {
    FUN_180315380(TI_System.IDisposable);
    FUN_180315380(TI_System.Collections.Generic.IEnumerable<SkillInfo>);
    FUN_180315380(TI_System.Collections.Generic.IEnumerator<SkillInfo>);
    FUN_180315380(TI_System.Collections.IEnumerator);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3086 = '\x01';
  }
  cVar3 = func_0x000181707e50(param_1,0);
  if (cVar3 == '\0') {
    if (DAT_1834b3103 == '\0') {
      FUN_180315380(TI_PlayerSkill);
      DAT_1834b3103 = '\x01';
    }
    uVar1 = **(undefined8 **)(TI_PlayerSkill + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Equality(uVar1,0,0);
    if ((cVar3 == '\0') && (lVar4 = SkillNameTable__get_Instance(0), lVar4 != 0)) {
      if (DAT_1834b3103 == '\0') {
        FUN_180315380(TI_PlayerSkill);
        DAT_1834b3103 = '\x01';
      }
      if ((**(longlong **)(TI_PlayerSkill + 0xb8) == 0) ||
         (lVar4 = PlayerSkill__get_Todas(**(longlong **)(TI_PlayerSkill + 0xb8),0), lVar4 == 0)) {
code_r0x000180475b44:
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return uVar7;
      }
      lVar4 = FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<SkillInfo>,lVar4);
      do {
        if (lVar4 == 0) {
code_r0x000180475b1d:
          FUN_1803155d0();
          FUN_180311490();
          goto code_r0x000180475b29;
        }
        cVar3 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
        if (cVar3 == '\0') {
          if (lVar4 != 0) {
            FUN_180002390(0,TI_System.IDisposable,lVar4);
          }
          lVar4 = FUN_180458400(0);
          if ((lVar4 == 0) || (lVar4 = PlayerSkill__get_Todas(lVar4,0), lVar4 == 0))
          goto code_r0x000180475b44;
          lVar4 = FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<SkillInfo>,lVar4);
          goto code_r0x000180475a00;
        }
        if (lVar4 == 0) {
code_r0x000180475b18:
          FUN_1803155d0();
          goto code_r0x000180475b1d;
        }
        lVar5 = FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerator<SkillInfo>);
        lVar6 = SkillNameTable__get_Instance(0);
        if (lVar5 == 0) {
code_r0x000180475b13:
          FUN_1803155d0();
          goto code_r0x000180475b18;
        }
        if (lVar6 == 0) {
          FUN_1803155d0();
          goto code_r0x000180475b13;
        }
        lVar6 = SkillNameTable__GetName
                          (lVar6,*(undefined4 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x14),0);
      } while ((lVar6 == 0) ||
              (cVar3 = System_String__Equals(*(undefined8 *)(lVar6 + 0x20),param_1,5), cVar3 == '\0'
              ));
      uVar8 = *(uint *)(lVar5 + 0x10);
      if (lVar4 != 0) {
        FUN_180002390(0,TI_System.IDisposable,lVar4);
      }
      goto code_r0x000180475aaa;
    }
  }
  return 0;
code_r0x000180475b29:
  FUN_1803155d0();
code_r0x000180475b2e:
  FUN_1803155d0();
code_r0x000180475b33:
  FUN_1803155d0();
code_r0x000180475b38:
  FUN_1803155d0();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  uVar7 = (*pcVar2)();
  return uVar7;
  while( true ) {
    cVar3 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
    if (cVar3 == '\0') {
      if (lVar4 == 0) {
        return 0;
      }
      FUN_180002390(0,TI_System.IDisposable,lVar4);
      return 0;
    }
    if (lVar4 == 0) goto code_r0x000180475b33;
    lVar5 = FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerator<SkillInfo>);
    lVar6 = SkillNameTable__get_Instance(0);
    if (lVar5 == 0) goto code_r0x000180475b2e;
    if (lVar6 == 0) goto code_r0x000180475b29;
    lVar6 = SkillNameTable__GetName
                      (lVar6,*(undefined4 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x14),0);
    if ((lVar6 != 0) &&
       (cVar3 = System_String__Equals(*(undefined8 *)(lVar6 + 0x50),param_1,5), cVar3 != '\0'))
    break;
code_r0x000180475a00:
    if (lVar4 == 0) goto code_r0x000180475b38;
  }
  uVar8 = *(uint *)(lVar5 + 0x10);
  if (lVar4 != 0) {
    FUN_180002390(0,TI_System.IDisposable,lVar4);
  }
code_r0x000180475aaa:
  return (ulonglong)uVar8;
}

