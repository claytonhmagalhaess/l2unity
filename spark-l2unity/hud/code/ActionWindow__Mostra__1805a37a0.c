// ActionWindow__Mostra__1805a37a0 @ 0x1805a37a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ActionWindow__Mostra__1805a37a0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ushort uVar7;
  int iVar8;
  
  if (cRam00000001834b3a14 == '\0') {
    FUN_180315380(TI_ActionWindow);
    FUN_180315380(MR_System.Collections.Generic.HashSet<int>.Contains);
    FUN_180315380(TI_SparkLojaCristal);
    cRam00000001834b3a14 = '\x01';
  }
  if (*(int *)(TI_ActionWindow + 0xe4) == 0) {
    func_0x000180315660(TI_ActionWindow);
  }
  if ((param_2 == 0) ||
     (lVar3 = *(longlong *)(*(longlong *)(TI_ActionWindow + 0xb8) + 8), lVar3 == 0)) {
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  cVar2 = FUN_1814cf290(lVar3,*(undefined4 *)(param_2 + 0x10),MR_System.Collections.Generic.HashSet<int>.Contains);
  if (cVar2 != '\0') {
    return 0;
  }
  iVar8 = *(int *)(param_2 + 0x10);
  if (iVar8 == 0x25) {
    if (*(int *)(TI_ActionWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    iVar8 = 0xac;
  }
  else {
    if (iVar8 != 0x33) {
      if (iVar8 != 0x26ad) {
        return 1;
      }
      if (*(int *)(TI_SparkLojaCristal + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b34d1 == '\0') {
        FUN_180315380(TI_System.IDisposable);
        FUN_180315380(TI_System.Collections.Generic.IEnumerable<SkillInfo>);
        FUN_180315380(TI_System.Collections.Generic.IEnumerator<SkillInfo>);
        FUN_180315380(TI_System.Collections.IEnumerator);
        FUN_180315380(TI_UnityEngine.Object);
        cRam00000001834b34d1 = '\x01';
      }
      if (DAT_1834b3103 == '\0') {
        FUN_180315380(TI_PlayerSkill);
        DAT_1834b3103 = '\x01';
      }
      uVar6 = **(undefined8 **)(TI_PlayerSkill + 0xb8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar2 = UnityEngine_Object__op_Equality(uVar6,0,0);
      if (cVar2 != '\0') {
        return 0;
      }
      if (DAT_1834b3103 == '\0') {
        FUN_180315380(TI_PlayerSkill);
        DAT_1834b3103 = '\x01';
      }
      lVar3 = **(longlong **)(TI_PlayerSkill + 0xb8);
      if (lVar3 != 0) {
        if (cRam00000001834b3439 == '\0') {
          FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SkillInfo>.get_Values);
          FUN_180315380(TI_SkillInfo__);
          cRam00000001834b3439 = '\x01';
        }
        if (*(longlong *)(lVar3 + 0x20) == 0) {
          lVar3 = func_0x000180314710(TI_SkillInfo__,0);
        }
        else {
          lVar3 = FUN_18117fd20(*(undefined8 *)(lVar3 + 0x20),MR_System.Collections.Generic.Dictionary<int,SkillInfo>.get_Values);
        }
        if (lVar3 != 0) {
          plVar4 = (longlong *)FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<SkillInfo>,lVar3);
          while( true ) {
            if (plVar4 == (longlong *)0x0) goto code_r0x0001804dbe8a;
            cVar2 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
            if (cVar2 == '\0') {
              if (plVar4 == (longlong *)0x0) {
                return 0;
              }
              FUN_180002390(0,TI_System.IDisposable,plVar4);
              return 0;
            }
            if (plVar4 == (longlong *)0x0) break;
            lVar3 = *plVar4;
            if (*(ushort *)(lVar3 + 0x12e) != 0) {
              uVar7 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
                    TI_System.Collections.Generic.IEnumerator<SkillInfo>) {
                  puVar5 = (undefined8 *)
                           ((longlong)
                            *(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) *
                            0x10 + 0x138 + lVar3);
                  goto code_r0x0001804dbdd6;
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 < *(ushort *)(lVar3 + 0x12e));
            }
            puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_System.Collections.Generic.IEnumerator<SkillInfo>,0);
code_r0x0001804dbdd6:
            lVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
            if (lVar3 == 0) {
              FUN_1803155d0();
              break;
            }
            if (*(int *)(lVar3 + 0x10) == 0xf8) {
              if (plVar4 != (longlong *)0x0) {
                FUN_180002390(0,TI_System.IDisposable,plVar4);
              }
              return 1;
            }
          }
          FUN_1803155d0();
code_r0x0001804dbe8a:
          FUN_1803155d0();
          FUN_180311490();
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return uVar6;
        }
      }
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    if (*(int *)(TI_ActionWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    iVar8 = 0x528;
  }
  if (cRam00000001834b3a15 == '\0') {
    FUN_180315380(TI_System.IDisposable);
    FUN_180315380(TI_System.Collections.Generic.IEnumerable<SkillInfo>);
    FUN_180315380(TI_System.Collections.Generic.IEnumerator<SkillInfo>);
    FUN_180315380(TI_System.Collections.IEnumerator);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3a15 = '\x01';
  }
  if (DAT_1834b3103 == '\0') {
    FUN_180315380(TI_PlayerSkill);
    DAT_1834b3103 = '\x01';
  }
  uVar6 = **(undefined8 **)(TI_PlayerSkill + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if (cVar2 == '\0') {
    if (DAT_1834b3103 == '\0') {
      FUN_180315380(TI_PlayerSkill);
      DAT_1834b3103 = '\x01';
    }
    if ((**(longlong **)(TI_PlayerSkill + 0xb8) == 0) ||
       (lVar3 = PlayerSkill__get_Todas(**(longlong **)(TI_PlayerSkill + 0xb8),0), lVar3 == 0)) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    plVar4 = (longlong *)FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<SkillInfo>,lVar3);
    while( true ) {
      if (plVar4 == (longlong *)0x0) goto code_r0x0001805a402c;
      cVar2 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
      if (cVar2 == '\0') break;
      if (plVar4 == (longlong *)0x0) {
code_r0x0001805a4027:
        FUN_1803155d0();
code_r0x0001805a402c:
        FUN_1803155d0();
        FUN_180311490();
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      lVar3 = *plVar4;
      if (*(ushort *)(lVar3 + 0x12e) != 0) {
        uVar7 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar7 * 0x10) ==
              TI_System.Collections.Generic.IEnumerator<SkillInfo>) {
            puVar5 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10)
                      * 0x10 + 0x138 + lVar3);
            goto code_r0x0001805a3f72;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12e));
      }
      puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_System.Collections.Generic.IEnumerator<SkillInfo>,0);
code_r0x0001805a3f72:
      lVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if (lVar3 == 0) {
        FUN_1803155d0();
        goto code_r0x0001805a4027;
      }
      if (*(int *)(lVar3 + 0x10) == iVar8) {
        if (plVar4 != (longlong *)0x0) {
          FUN_180002390(0,TI_System.IDisposable,plVar4);
        }
        return 1;
      }
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_180002390(0,TI_System.IDisposable,plVar4);
    }
  }
  return 0;
}

