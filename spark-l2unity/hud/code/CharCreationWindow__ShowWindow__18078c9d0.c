// CharCreationWindow__ShowWindow__18078c9d0 @ 0x18078c9d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharCreationWindow__ShowWindow__18078c9d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  
  L2Window__ShowWindow__18079a6b0(param_1,0);
  if (cRam00000001834b4498 == '\0') {
    FUN_180315380(LIT_"''");
    cRam00000001834b4498 = '\x01';
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    ArrowInputManipulator__ClearInput__1807a9610(*(longlong *)(param_1 + 0xb0),0);
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      ArrowInputManipulator__ClearInput__1807a9610(*(longlong *)(param_1 + 0xa8),0);
      if (*(longlong *)(param_1 + 0x90) != 0) {
        ArrowInputManipulator__ClearInput__1807a9610(*(longlong *)(param_1 + 0x90),0);
        if (*(longlong *)(param_1 + 0x98) != 0) {
          ArrowInputManipulator__ClearInput__1807a9610(*(longlong *)(param_1 + 0x98),0);
          if (*(longlong *)(param_1 + 0xa0) != 0) {
            ArrowInputManipulator__ClearInput__1807a9610(*(longlong *)(param_1 + 0xa0),0);
            if (*(longlong *)(param_1 + 0xb8) != 0) {
              ArrowInputManipulator__ClearInput__1807a9610(*(longlong *)(param_1 + 0xb8),0);
              plVar1 = *(longlong **)(param_1 + 0xc0);
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0xa88))
                          (plVar1,LIT_"''",*(undefined8 *)(*plVar1 + 0xa90));
                if (cRam00000001834b31c8 == '\0') {
                  FUN_180315380(TI_CharacterCreator);
                  cRam00000001834b31c8 = '\x01';
                }
                lVar2 = **(longlong **)(TI_CharacterCreator + 0xb8);
                if (lVar2 != 0) {
                  if (cRam00000001834b45eb == '\0') {
                    FUN_180315380(TI_UnityEngine.Object);
                    cRam00000001834b45eb = '\x01';
                  }
                  CharacterCreator__GarantePawns(lVar2,0);
                  uVar3 = *(undefined8 *)(lVar2 + 0x30);
                  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  cVar5 = UnityEngine_Object__op_Inequality(uVar3,0,0);
                  if (cVar5 != '\0') {
                    uVar3 = *(undefined8 *)(lVar2 + 0x30);
                    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    UnityEngine_Object__Destroy(uVar3,0);
                    CharacterCreator__SpawnCharacterCreationPawn
                              (lVar2,*(undefined4 *)(lVar2 + 0x28),0);
                  }
                  *(undefined8 *)(lVar2 + 0x30) = 0;
                  func_0x000180314690(lVar2 + 0x30,0);
                  *(undefined4 *)(lVar2 + 0x28) = 0xffffffff;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

