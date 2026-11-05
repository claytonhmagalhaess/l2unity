// SkillbarWindow__ExpandSkillbar__180706ee0 @ 0x180706ee0

void SkillbarWindow__ExpandSkillbar__180706ee0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  if (cRam00000001834b4186 == '\0') {
    FUN_180315380(TI_System.Action<UnityEngine.Coroutine>);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Coroutine>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Coroutine>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Coroutine>.ForEach);
    FUN_180315380(MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item);
    FUN_180315380(TI_SkillbarMin);
    FUN_180315380(MD_SkillbarWindow._ExpandSkillbar_b__49_0);
    cRam00000001834b4186 = '\x01';
  }
  lVar8 = *(longlong *)(param_1 + 0xa0);
  uVar5 = func_0x000180315580(TI_System.Action<UnityEngine.Coroutine>);
  FUN_18055b980(uVar5,param_1,MD_SkillbarWindow._ExpandSkillbar_b__49_0,0);
  if (lVar8 != 0) {
    FUN_180bad8e0(lVar8,uVar5,MR_System.Collections.Generic.List<UnityEngine.Coroutine>.ForEach);
    lVar8 = *(longlong *)(param_1 + 0xa0);
    if (lVar8 != 0) {
      iVar9 = *(int *)(lVar8 + 0x18);
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      *(undefined4 *)(lVar8 + 0x18) = 0;
      if (0 < iVar9) {
        System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar9,0);
      }
      iVar9 = 0;
      while ((*(longlong *)(param_1 + 0xd0) != 0 &&
             (plVar6 = (longlong *)
                       FUN_180bbafe0(*(longlong *)(param_1 + 0xd0),
                                     iVar9 * 5 + *(int *)(param_1 + 0x90),MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item),
             plVar6 != (longlong *)0x0))) {
        if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(TI_SkillbarMin + 0x130)) ||
           (*(longlong *)
             (*(longlong *)(*plVar6 + 200) + -8 +
             (ulonglong)*(byte *)(TI_SkillbarMin + 0x130) * 8) != TI_SkillbarMin)) {
          FUN_1803146d0(plVar6);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar8 = *(longlong *)(param_1 + 0x98);
        if (cRam00000001834b4165 == '\0') {
          FUN_180315380(TI_SkillbarMin.<Expand>d__3);
          cRam00000001834b4165 = '\x01';
        }
        lVar7 = func_0x000180315580(TI_SkillbarMin.<Expand>d__3);
        Gear__UpdateWeaponType__1803dadf0(lVar7,0);
        *(undefined4 *)(lVar7 + 0x10) = 0;
        *(longlong **)(lVar7 + 0x20) = plVar6;
        func_0x000180314690(lVar7 + 0x20,plVar6);
        uVar5 = UnityEngine_MonoBehaviour__StartCoroutine(param_1,lVar7,0);
        lVar7 = MR_System.Collections.Generic.List<UnityEngine.Coroutine>.Add;
        if (lVar8 == 0) break;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        lVar3 = *(longlong *)(lVar8 + 0x10);
        if (lVar3 == 0) break;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          if (*(uint *)(lVar3 + 0x18) <= uVar1) {
            FUN_1803155c0();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined8 *)(lVar3 + 0x20 + (longlong)(int)uVar1 * 8) = uVar5;
          func_0x000180314690(lVar3 + (longlong)(int)uVar1 * 8 + 0x20,uVar5);
        }
        else {
          FUN_181645af0(lVar8,uVar5,
                        *(undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        iVar2 = *(int *)(param_1 + 0x90);
        while (iVar2 = iVar2 + 1, iVar2 < 5) {
          if ((*(longlong *)(param_1 + 0xd0) == 0) ||
             (lVar8 = FUN_180bbafe0(*(longlong *)(param_1 + 0xd0),iVar2 + iVar9 * 5,
                                    MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item), lVar8 == 0)) goto code_r0x000180707175;
          AbstractSkillbar__HideBar__1806f85c0(lVar8,0);
        }
        iVar9 = iVar9 + 1;
        if (1 < iVar9) {
          return;
        }
      }
    }
  }
code_r0x000180707175:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

