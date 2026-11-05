// SkillTab__ShowPassiveSkills__180701dd0 @ 0x180701dd0

void SkillTab__ShowPassiveSkills__180701dd0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  
  if (cRam00000001834b4116 == '\0') {
    FUN_180315380(MR_System.Linq.Enumerable.Any<SkillWindowInfo>);
    FUN_180315380(MR_System.Collections.Generic.List<SkillWindowInfo>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<SkillWindowInfo>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<SkillWindowInfo>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<SkillWindowInfo>.get_Item);
    FUN_180315380(TI_System.Collections.Generic.List<SkillWindowInfo>);
    cRam00000001834b4116 = '\x01';
  }
  lVar4 = func_0x000180315580(TI_System.Collections.Generic.List<SkillWindowInfo>);
  FUN_180bba2e0(lVar4,MR_System.Collections.Generic.List<SkillWindowInfo>..ctor);
  lVar5 = func_0x000180315580(TI_System.Collections.Generic.List<SkillWindowInfo>);
  FUN_180bba2e0(lVar5,MR_System.Collections.Generic.List<SkillWindowInfo>..ctor);
  lVar6 = func_0x000180315580(TI_System.Collections.Generic.List<SkillWindowInfo>);
  FUN_180bba2e0(lVar6,MR_System.Collections.Generic.List<SkillWindowInfo>..ctor);
  lVar7 = func_0x000180315580(TI_System.Collections.Generic.List<SkillWindowInfo>);
  FUN_180bba2e0(lVar7,MR_System.Collections.Generic.List<SkillWindowInfo>..ctor);
  lVar8 = func_0x000180315580(TI_System.Collections.Generic.List<SkillWindowInfo>);
  FUN_180bba2e0(lVar8,MR_System.Collections.Generic.List<SkillWindowInfo>..ctor);
  iVar11 = 0;
  if (param_2 == 0) goto code_r0x000180702182;
  for (; iVar11 < *(int *)(param_2 + 0x18); iVar11 = iVar11 + 1) {
    lVar9 = FUN_180bbafe0(param_2,iVar11);
    if (lVar9 == 0) goto code_r0x000180702182;
    switch(*(undefined4 *)(lVar9 + 100)) {
    case 4:
    case 0xf:
      lVar10 = lVar7;
      break;
    case 5:
    case 0x10:
      lVar10 = lVar8;
      goto joined_r0x000180701f2a;
    default:
      goto code_r0x000180701f7a;
    case 0xb:
      lVar10 = lVar4;
joined_r0x000180701f2a:
      if (lVar10 != 0) goto code_r0x000180701f6b;
      goto code_r0x000180702182;
    case 0xc:
    case 0xe:
      lVar10 = lVar5;
      break;
    case 0xd:
      lVar10 = lVar6;
    }
    if (lVar10 == 0) goto code_r0x000180702182;
code_r0x000180701f6b:
    FUN_180002eb0(lVar10,lVar9);
code_r0x000180701f7a:
  }
  cVar3 = FUN_1809b6b50(lVar4,MR_System.Linq.Enumerable.Any<SkillWindowInfo>);
  if (cVar3 != '\0') {
    lVar9 = SysStringTable__get_Instance(0);
    if ((lVar9 == 0) || (lVar9 = SysStringTable__GetSysString(lVar9,0x6a6,0), lVar9 == 0))
    goto code_r0x000180702182;
    uVar2 = SkillTab__AddSection(param_1,lVar4,*(undefined8 *)(lVar9 + 0x18),0);
    if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x000180702182;
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x48),uVar2,0);
  }
  cVar3 = FUN_1809b6b50(lVar5,MR_System.Linq.Enumerable.Any<SkillWindowInfo>);
  if (cVar3 != '\0') {
    lVar4 = SysStringTable__get_Instance(0);
    if ((lVar4 == 0) || (lVar4 = SysStringTable__GetSysString(lVar4,0x6a7,0), lVar4 == 0))
    goto code_r0x000180702182;
    uVar2 = SkillTab__AddSection(param_1,lVar5,*(undefined8 *)(lVar4 + 0x18),0);
    if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x000180702182;
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x48),uVar2,0);
  }
  cVar3 = FUN_1809b6b50(lVar7,MR_System.Linq.Enumerable.Any<SkillWindowInfo>);
  if (cVar3 != '\0') {
    lVar4 = SysStringTable__get_Instance(0);
    if ((lVar4 == 0) || (lVar4 = SysStringTable__GetSysString(lVar4,0x6a3,0), lVar4 == 0))
    goto code_r0x000180702182;
    uVar2 = SkillTab__AddSection(param_1,lVar7,*(undefined8 *)(lVar4 + 0x18),0);
    if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x000180702182;
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x48),uVar2,0);
  }
  cVar3 = FUN_1809b6b50(lVar8,MR_System.Linq.Enumerable.Any<SkillWindowInfo>);
  if (cVar3 != '\0') {
    lVar4 = SysStringTable__get_Instance(0);
    if ((lVar4 == 0) || (lVar4 = SysStringTable__GetSysString(lVar4,0x6a4,0), lVar4 == 0))
    goto code_r0x000180702182;
    uVar2 = SkillTab__AddSection(param_1,lVar8,*(undefined8 *)(lVar4 + 0x18),0);
    if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x000180702182;
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x48),uVar2,0);
  }
  cVar3 = FUN_1809b6b50(lVar6,MR_System.Linq.Enumerable.Any<SkillWindowInfo>);
  if (cVar3 == '\0') {
    return;
  }
  lVar4 = SysStringTable__get_Instance(0);
  if ((lVar4 != 0) && (lVar4 = SysStringTable__GetSysString(lVar4,0x6a8,0), lVar4 != 0)) {
    uVar2 = SkillTab__AddSection(param_1,lVar6,*(undefined8 *)(lVar4 + 0x18),0);
    if (*(longlong *)(param_1 + 0x48) != 0) {
      UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x48),uVar2,0);
      return;
    }
  }
code_r0x000180702182:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

