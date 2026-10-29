// SkillbarWindow__MinimizeSkillbar__180707510 @ 0x180707510

void SkillbarWindow__MinimizeSkillbar__180707510(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  
  if (cRam00000001834b4187 == '\0') {
    FUN_180315380(TI_System.Action<UnityEngine.Coroutine>);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Coroutine>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Coroutine>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Coroutine>.ForEach);
    FUN_180315380(MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item);
    FUN_180315380(TI_SkillbarMin);
    FUN_180315380(MD_SkillbarWindow._MinimizeSkillbar_b__50_0);
    cRam00000001834b4187 = '\x01';
  }
  lVar1 = *(longlong *)(param_1 + 0x98);
  uVar3 = func_0x000180315580(TI_System.Action<UnityEngine.Coroutine>);
  FUN_18055b980(uVar3,param_1,MD_SkillbarWindow._MinimizeSkillbar_b__50_0,0);
  if (lVar1 != 0) {
    FUN_180bad8e0(lVar1,uVar3,MR_System.Collections.Generic.List<UnityEngine.Coroutine>.ForEach);
    lVar1 = *(longlong *)(param_1 + 0x98);
    if (lVar1 != 0) {
      iVar6 = *(int *)(lVar1 + 0x18);
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      *(undefined4 *)(lVar1 + 0x18) = 0;
      if (0 < iVar6) {
        System_Array__Clear(*(undefined8 *)(lVar1 + 0x10),0,iVar6,0);
      }
      iVar6 = 0;
      do {
        iVar5 = 1;
        do {
          if (*(longlong *)(param_1 + 0xd0) == 0) goto code_r0x0001807076d7;
          plVar4 = (longlong *)
                   FUN_180bbafe0(*(longlong *)(param_1 + 0xd0),iVar5 + iVar6 * 5,
                                 MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item);
          if (plVar4 == (longlong *)0x0) goto code_r0x0001807076d7;
          if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TI_SkillbarMin + 0x130)) ||
             (*(longlong *)
               (*(longlong *)(*plVar4 + 200) + -8 +
               (ulonglong)*(byte *)(TI_SkillbarMin + 0x130) * 8) != TI_SkillbarMin)) {
            FUN_1803146d0(plVar4);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar1 = *(longlong *)(param_1 + 0xa0);
          uVar3 = SkillbarMin__Minimize__180703df0(plVar4,0);
          uVar3 = UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar3,0);
          if (lVar1 == 0) goto code_r0x0001807076d7;
          FUN_180002eb0(lVar1,uVar3,MR_System.Collections.Generic.List<UnityEngine.Coroutine>.Add);
          iVar5 = iVar5 + 1;
        } while (iVar5 < 5);
        iVar6 = iVar6 + 1;
        if (1 < iVar6) {
          return;
        }
      } while( true );
    }
  }
code_r0x0001807076d7:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

