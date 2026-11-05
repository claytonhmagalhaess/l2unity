// SkillTab__UpdateSkills__1807022d0 @ 0x1807022d0

void SkillTab__UpdateSkills__1807022d0(longlong param_1,longlong param_2)

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
  longlong lVar11;
  int iVar12;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
code_r0x000180702345:
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0x48),0);
  if (*(int *)(param_1 + 0x40) != 1) {
    if (*(int *)(param_1 + 0x40) == 0) {
      if (param_2 == 0) goto code_r0x000180702345;
      if (*(int *)(param_2 + 0x18) == 0) goto code_r0x00018070234b;
      SkillTab__ShowActiveSkills__180701780(param_1,*(undefined8 *)(param_2 + 0x20),0);
    }
    return;
  }
  if (param_2 == 0) goto code_r0x000180702345;
  if (*(uint *)(param_2 + 0x18) < 2) {
code_r0x00018070234b:
    FUN_1803155c0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar10 = *(longlong *)(param_2 + 0x28);
  if (cRam00000001834b4116 == '\0') {
    FUN_180315380(MR_System.Linq.Enumerable.Any<SkillWindowInfo>,lVar10,0);
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
  iVar12 = 0;
  if (lVar10 == 0) goto code_r0x000180702182;
  for (; iVar12 < *(int *)(lVar10 + 0x18); iVar12 = iVar12 + 1) {
    lVar9 = FUN_180bbafe0(lVar10,iVar12);
    if (lVar9 == 0) goto code_r0x000180702182;
    switch(*(undefined4 *)(lVar9 + 100)) {
    case 4:
    case 0xf:
      lVar11 = lVar7;
      break;
    case 5:
    case 0x10:
      lVar11 = lVar8;
      goto joined_r0x000180701f2a;
    default:
      goto code_r0x000180701f7a;
    case 0xb:
      lVar11 = lVar4;
joined_r0x000180701f2a:
      if (lVar11 != 0) goto code_r0x000180701f6b;
      goto code_r0x000180702182;
    case 0xc:
    case 0xe:
      lVar11 = lVar5;
      break;
    case 0xd:
      lVar11 = lVar6;
    }
    if (lVar11 == 0) goto code_r0x000180702182;
code_r0x000180701f6b:
    FUN_180002eb0(lVar11,lVar9);
code_r0x000180701f7a:
  }
  cVar3 = FUN_1809b6b50(lVar4,MR_System.Linq.Enumerable.Any<SkillWindowInfo>);
  if (cVar3 != '\0') {
    lVar10 = SysStringTable__get_Instance(0);
    if ((lVar10 == 0) || (lVar10 = SysStringTable__GetSysString(lVar10,0x6a6,0), lVar10 == 0))
    goto code_r0x000180702182;
    uVar2 = SkillTab__AddSection(param_1,lVar4,*(undefined8 *)(lVar10 + 0x18),0);
    if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x000180702182;
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x48),uVar2,0);
  }
  cVar3 = FUN_1809b6b50(lVar5,MR_System.Linq.Enumerable.Any<SkillWindowInfo>);
  if (cVar3 != '\0') {
    lVar10 = SysStringTable__get_Instance(0);
    if ((lVar10 == 0) || (lVar10 = SysStringTable__GetSysString(lVar10,0x6a7,0), lVar10 == 0))
    goto code_r0x000180702182;
    uVar2 = SkillTab__AddSection(param_1,lVar5,*(undefined8 *)(lVar10 + 0x18),0);
    if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x000180702182;
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x48),uVar2,0);
  }
  cVar3 = FUN_1809b6b50(lVar7,MR_System.Linq.Enumerable.Any<SkillWindowInfo>);
  if (cVar3 != '\0') {
    lVar10 = SysStringTable__get_Instance(0);
    if ((lVar10 == 0) || (lVar10 = SysStringTable__GetSysString(lVar10,0x6a3,0), lVar10 == 0))
    goto code_r0x000180702182;
    uVar2 = SkillTab__AddSection(param_1,lVar7,*(undefined8 *)(lVar10 + 0x18),0);
    if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x000180702182;
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x48),uVar2,0);
  }
  cVar3 = FUN_1809b6b50(lVar8,MR_System.Linq.Enumerable.Any<SkillWindowInfo>);
  if (cVar3 != '\0') {
    lVar10 = SysStringTable__get_Instance(0);
    if ((lVar10 == 0) || (lVar10 = SysStringTable__GetSysString(lVar10,0x6a4,0), lVar10 == 0))
    goto code_r0x000180702182;
    uVar2 = SkillTab__AddSection(param_1,lVar8,*(undefined8 *)(lVar10 + 0x18),0);
    if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x000180702182;
    UnityEngine_UIElements_VisualElement__Add(*(longlong *)(param_1 + 0x48),uVar2,0);
  }
  cVar3 = FUN_1809b6b50(lVar6,MR_System.Linq.Enumerable.Any<SkillWindowInfo>);
  if (cVar3 == '\0') {
    return;
  }
  lVar10 = SysStringTable__get_Instance(0);
  if ((lVar10 != 0) && (lVar10 = SysStringTable__GetSysString(lVar10,0x6a8,0), lVar10 != 0)) {
    uVar2 = SkillTab__AddSection(param_1,lVar6,*(undefined8 *)(lVar10 + 0x18),0);
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

