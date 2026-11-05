// SkillbarWindow__OnPageChanged__1807077b0 @ 0x1807077b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarWindow__OnPageChanged__1807077b0(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  if (cRam00000001834b418a == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item);
    cRam00000001834b418a = '\x01';
  }
  iVar7 = 0;
  do {
    if (*(longlong *)(param_1 + 0xd0) == 0) goto code_r0x000180707946;
    lVar4 = FUN_180bbafe0(*(longlong *)(param_1 + 0xd0),param_2 + iVar7 * 5,MR_System.Collections.Generic.List<AbstractSkillbar>.get_Item);
    if (lVar4 == 0) goto code_r0x000180707946;
    *(undefined4 *)(lVar4 + 0x24) = param_3;
    if (*(longlong *)(lVar4 + 0x40) == 0) goto code_r0x000180707946;
    ArrowInputManipulator__SelectIndex__1807a9b80(*(longlong *)(lVar4 + 0x40),param_3,0);
    AbstractSkillbar__ResetShortcuts__1806f8640(lVar4,0);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  if (cRam00000001834b3101 == '\0') {
    FUN_180315380(TI_PlayerShortcuts);
    cRam00000001834b3101 = '\x01';
  }
  if (**(longlong **)(TI_PlayerShortcuts + 0xb8) != 0) {
    PlayerShortcuts__UpdatePageMapping__1804d35f0
              (**(longlong **)(TI_PlayerShortcuts + 0xb8),param_2,param_3,0);
    if (cRam00000001834b3101 == '\0') {
      FUN_180315380(TI_PlayerShortcuts);
      cRam00000001834b3101 = '\x01';
    }
    if (**(longlong **)(TI_PlayerShortcuts + 0xb8) != 0) {
      uVar5 = PlayerShortcuts__get_Shortcuts(**(longlong **)(TI_PlayerShortcuts + 0xb8),0);
      if (cRam00000001834b418d == '\0') {
        FUN_180315380(TI_SkillbarWindow.<UpdateAllShortcuts>d__56);
        cRam00000001834b418d = '\x01';
      }
      lVar4 = func_0x000180315580(TI_SkillbarWindow.<UpdateAllShortcuts>d__56);
      AbstractEffectWindow__UpdateBuffTimers_d__24___ctor(lVar4,0,0);
      if (lVar4 != 0) {
        *(longlong *)(lVar4 + 0x20) = param_1;
        func_0x000180314690(lVar4 + 0x20,param_1);
        *(undefined8 *)(lVar4 + 0x28) = uVar5;
        func_0x000180314690(lVar4 + 0x28,uVar5);
        if (lVar4 == 0) {
          uVar5 = func_0x0001803153a0(TI_System.NullReferenceException);
          uVar5 = func_0x000180315580(uVar5);
          uVar6 = func_0x0001803153a0(LIT_"'routine is null'");
          System_NullReferenceException___ctor(uVar5,uVar6,0);
          uVar6 = func_0x0001803153a0(MD_UnityEngine.MonoBehaviour.StartCoroutine);
          FUN_180315590(uVar5,uVar6);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (DAT_1834c11f5 == '\0') {
          FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.MarshalNotNull<UnityEngine.Object>);
          FUN_180315380(LIT_"'obj'");
          DAT_1834c11f5 = '\x01';
        }
        if (param_1 != 0) {
          lVar1 = *(longlong *)(param_1 + 0x10);
          if (lVar1 == 0) {
            UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException(param_1,LIT_"'obj'",0);
          }
          if (_DAT_1834c1258 == (code *)0x0) {
            _DAT_1834c1258 = (code *)FUN_180315630(&UNK_1829422b0);
          }
          cVar3 = (*_DAT_1834c1258)(lVar1);
          if (cVar3 != '\0') {
            if (DAT_1834c11f7 == '\0') {
              FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.MarshalNotNull<UnityEngine.MonoBehaviour>);
              DAT_1834c11f7 = '\x01';
            }
            lVar1 = *(longlong *)(param_1 + 0x10);
            if (lVar1 == 0) {
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException(param_1,0);
            }
            if (_DAT_1834c1268 == (code *)0x0) {
              _DAT_1834c1268 = (code *)FUN_180315630(&UNK_182942380);
            }
                    /* WARNING: Could not recover jumptable at 0x000182429079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*_DAT_1834c1268)(lVar1,lVar4);
            return;
          }
          uVar5 = func_0x0001803153a0(TI_System.ArgumentException);
          uVar5 = func_0x000180315580(uVar5);
          uVar6 = func_0x0001803153a0(LIT_"'Coroutines can only be stopped on a MonoBehaviour'");
          System_ArgumentException___ctor(uVar5,uVar6,0);
          uVar6 = func_0x0001803153a0(MD_UnityEngine.MonoBehaviour.StartCoroutine);
          FUN_180315590(uVar5,uVar6);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UnityEngine_Bindings_ThrowHelper__ThrowArgumentNullException(0,LIT_"'obj'",0);
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
code_r0x000180707946:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

