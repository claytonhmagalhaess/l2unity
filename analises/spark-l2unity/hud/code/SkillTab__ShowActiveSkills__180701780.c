// SkillTab__ShowActiveSkills__180701780 @ 0x180701780

void SkillTab__ShowActiveSkills__180701780(longlong param_1,longlong param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  int iVar16;
  
  if (cRam00000001834b4117 == '\0') {
    FUN_180315380(MR_System.Linq.Enumerable.Any<SkillWindowInfo>);
    FUN_180315380(MR_System.Collections.Generic.List<SkillWindowInfo>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<SkillWindowInfo>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<SkillWindowInfo>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<SkillWindowInfo>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<SkillWindowInfo>.get_Item);
    FUN_180315380(TI_System.Collections.Generic.List<SkillWindowInfo>);
    cRam00000001834b4117 = '\x01';
  }
  lVar5 = func_0x000180315580(TI_System.Collections.Generic.List<SkillWindowInfo>);
  FUN_180bba370(lVar5,10,MR_System.Collections.Generic.List<SkillWindowInfo>..ctor);
  lVar6 = func_0x000180315580(TI_System.Collections.Generic.List<SkillWindowInfo>);
  FUN_180bba370(lVar6,10,MR_System.Collections.Generic.List<SkillWindowInfo>..ctor);
  lVar7 = func_0x000180315580(TI_System.Collections.Generic.List<SkillWindowInfo>);
  FUN_180bba2e0(lVar7,MR_System.Collections.Generic.List<SkillWindowInfo>..ctor);
  lVar8 = func_0x000180315580(TI_System.Collections.Generic.List<SkillWindowInfo>);
  FUN_180bba370(lVar8,5,MR_System.Collections.Generic.List<SkillWindowInfo>..ctor);
  lVar9 = func_0x000180315580(TI_System.Collections.Generic.List<SkillWindowInfo>);
  FUN_180bba370(lVar9,6,MR_System.Collections.Generic.List<SkillWindowInfo>..ctor);
  lVar10 = func_0x000180315580(TI_System.Collections.Generic.List<SkillWindowInfo>);
  FUN_180bba370(lVar10,1,MR_System.Collections.Generic.List<SkillWindowInfo>..ctor);
  lVar11 = func_0x000180315580(TI_System.Collections.Generic.List<SkillWindowInfo>);
  FUN_180bba370(lVar11,4,MR_System.Collections.Generic.List<SkillWindowInfo>..ctor);
  lVar12 = func_0x000180315580(TI_System.Collections.Generic.List<SkillWindowInfo>);
  FUN_180bba370(lVar12,2,MR_System.Collections.Generic.List<SkillWindowInfo>..ctor);
  iVar16 = 0;
  if (param_2 == 0) goto code_r0x000180701d85;
  for (; iVar16 < *(int *)(param_2 + 0x18); iVar16 = iVar16 + 1) {
    lVar13 = FUN_180bbafe0(param_2,iVar16);
    if (lVar13 == 0) goto code_r0x000180701d85;
    iVar1 = *(int *)(lVar13 + 100);
    if ((iVar1 == 0) || (iVar1 == 1)) {
      cVar4 = func_0x0001804d5320(lVar13,0);
      lVar15 = lVar6;
      lVar3 = lVar5;
      if (cVar4 == '\0') goto joined_r0x000180701a0a;
      goto joined_r0x000180701a18;
    }
    switch(iVar1) {
    case 2:
      lVar15 = lVar7;
      goto joined_r0x000180701a18;
    case 3:
      lVar15 = lVar8;
joined_r0x000180701a18:
      if (lVar15 != 0) goto code_r0x000180701a21;
      goto code_r0x000180701d85;
    case 4:
    case 0xf:
      lVar3 = lVar9;
      break;
    case 5:
      lVar3 = lVar10;
      break;
    case 6:
      lVar3 = lVar11;
      break;
    case 7:
      lVar3 = lVar12;
      break;
    default:
      goto code_r0x000180701a30;
    }
joined_r0x000180701a0a:
    lVar15 = lVar3;
    if (lVar15 == 0) goto code_r0x000180701d85;
code_r0x000180701a21:
    FUN_180002eb0(lVar15,lVar13);
code_r0x000180701a30:
  }
  cVar4 = FUN_1809b6b50(lVar5,MR_System.Linq.Enumerable.Any<SkillWindowInfo>);
  if (cVar4 != '\0') {
    lVar13 = SysStringTable__get_Instance(0);
    if ((lVar13 == 0) || (lVar13 = SysStringTable__GetSysString(lVar13,0x69e,0), lVar13 == 0))
    goto code_r0x000180701d85;
    uVar14 = SkillTab__AddSection(param_1,lVar5,*(undefined8 *)(lVar13 + 0x18),0);
    if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x000180701d85;
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x48),uVar14,0);
  }
  cVar4 = FUN_1809b6b50(lVar6,MR_System.Linq.Enumerable.Any<SkillWindowInfo>);
  if (cVar4 != '\0') {
    lVar5 = SysStringTable__get_Instance(0);
    if ((lVar5 == 0) || (lVar5 = SysStringTable__GetSysString(lVar5,0x69f,0), lVar5 == 0))
    goto code_r0x000180701d85;
    uVar14 = SkillTab__AddSection(param_1,lVar6,*(undefined8 *)(lVar5 + 0x18),0);
    if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x000180701d85;
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x48),uVar14,0);
  }
  cVar4 = FUN_1809b6b50(lVar7,MR_System.Linq.Enumerable.Any<SkillWindowInfo>);
  if (cVar4 != '\0') {
    lVar5 = SysStringTable__get_Instance(0);
    if ((lVar5 == 0) || (lVar5 = SysStringTable__GetSysString(lVar5,0x6a0,0), lVar5 == 0))
    goto code_r0x000180701d85;
    uVar14 = SkillTab__AddSection(param_1,lVar7,*(undefined8 *)(lVar5 + 0x18),0);
    if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x000180701d85;
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x48),uVar14,0);
  }
  cVar4 = FUN_1809b6b50(lVar8,MR_System.Linq.Enumerable.Any<SkillWindowInfo>);
  if (cVar4 != '\0') {
    lVar5 = SysStringTable__get_Instance(0);
    if ((lVar5 == 0) || (lVar5 = SysStringTable__GetSysString(lVar5,0x6a1,0), lVar5 == 0))
    goto code_r0x000180701d85;
    uVar14 = SkillTab__AddSection(param_1,lVar8,*(undefined8 *)(lVar5 + 0x18),0);
    if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x000180701d85;
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x48),uVar14,0);
  }
  cVar4 = FUN_1809b6b50(lVar9,MR_System.Linq.Enumerable.Any<SkillWindowInfo>);
  if (cVar4 != '\0') {
    lVar5 = SysStringTable__get_Instance(0);
    if ((lVar5 == 0) || (lVar5 = SysStringTable__GetSysString(lVar5,0x6a3,0), lVar5 == 0))
    goto code_r0x000180701d85;
    uVar14 = SkillTab__AddSection(param_1,lVar9,*(undefined8 *)(lVar5 + 0x18),0);
    if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x000180701d85;
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x48),uVar14,0);
  }
  cVar4 = FUN_1809b6b50(lVar10,MR_System.Linq.Enumerable.Any<SkillWindowInfo>);
  if (cVar4 != '\0') {
    lVar5 = SysStringTable__get_Instance(0);
    if ((lVar5 == 0) || (lVar5 = SysStringTable__GetSysString(lVar5,0x6a4,0), lVar5 == 0))
    goto code_r0x000180701d85;
    uVar14 = SkillTab__AddSection(param_1,lVar10,*(undefined8 *)(lVar5 + 0x18),0);
    if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x000180701d85;
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x48),uVar14,0);
  }
  cVar4 = FUN_1809b6b50(lVar11,MR_System.Linq.Enumerable.Any<SkillWindowInfo>);
  if (cVar4 != '\0') {
    lVar5 = SysStringTable__get_Instance(0);
    if ((lVar5 == 0) || (lVar5 = SysStringTable__GetSysString(lVar5,0x6a2,0), lVar5 == 0))
    goto code_r0x000180701d85;
    uVar14 = SkillTab__AddSection(param_1,lVar11,*(undefined8 *)(lVar5 + 0x18),0);
    if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x000180701d85;
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x48),uVar14,0);
  }
  cVar4 = FUN_1809b6b50(lVar12,MR_System.Linq.Enumerable.Any<SkillWindowInfo>);
  if (cVar4 == '\0') {
    return;
  }
  lVar5 = SysStringTable__get_Instance(0);
  if ((lVar5 != 0) && (lVar5 = SysStringTable__GetSysString(lVar5,0x6a5,0), lVar5 != 0)) {
    uVar14 = SkillTab__AddSection(param_1,lVar12,*(undefined8 *)(lVar5 + 0x18),0);
    if (*(longlong *)(param_1 + 0x48) != 0) {
      UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x48),uVar14,0);
      return;
    }
  }
code_r0x000180701d85:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

