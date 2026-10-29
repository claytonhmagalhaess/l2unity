// CharacterInfoWindow__UpdateCombatValues__1805c22a0 @ 0x1805c22a0

void CharacterInfoWindow__UpdateCombatValues__1805c22a0
               (longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 auStackX_8 [8];
  
  if (param_3 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x130);
    auStackX_8[0] = *(undefined4 *)(param_3 + 0x48);
    uVar3 = System_Int32__ToString(auStackX_8,0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
      auStackX_8[0] = *(undefined4 *)(param_3 + 0x6c);
      plVar1 = *(longlong **)(param_1 + 0x138);
      uVar3 = System_Int32__ToString(auStackX_8,0);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
        auStackX_8[0] = *(undefined4 *)(param_3 + 0x58);
        plVar1 = *(longlong **)(param_1 + 0x140);
        uVar3 = System_Int32__ToString(auStackX_8,0);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
          auStackX_8[0] = *(undefined4 *)(param_3 + 0x50);
          plVar1 = *(longlong **)(param_1 + 0x148);
          uVar3 = System_Int32__ToString(auStackX_8,0);
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
            plVar1 = *(longlong **)(param_1 + 0x150);
            uVar3 = CharacterInfoWindow__Porcentagem(*(undefined4 *)(param_3 + 0x60),0);
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
              auStackX_8[0] = *(undefined4 *)(param_3 + 0x30);
              plVar1 = *(longlong **)(param_1 + 0x158);
              uVar3 = System_Int32__ToString(auStackX_8,0);
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
                plVar1 = *(longlong **)(param_1 + 0x160);
                auStackX_8[0] = *(undefined4 *)(param_3 + 0x14 + (param_2 & 0xff ^ 1) * 8);
                uVar3 = System_Int32__ToString(auStackX_8,0);
                if (plVar1 != (longlong *)0x0) {
                  (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
                  auStackX_8[0] = *(undefined4 *)(param_3 + 0x4c);
                  plVar1 = *(longlong **)(param_1 + 0x168);
                  uVar3 = System_Int32__ToString(auStackX_8,0);
                  if (plVar1 != (longlong *)0x0) {
                    (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
                    auStackX_8[0] = *(undefined4 *)(param_3 + 0x68);
                    plVar1 = *(longlong **)(param_1 + 0x170);
                    uVar3 = System_Int32__ToString(auStackX_8,0);
                    if (plVar1 != (longlong *)0x0) {
                      (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
                      auStackX_8[0] = *(undefined4 *)(param_3 + 0x5c);
                      plVar1 = *(longlong **)(param_1 + 0x178);
                      uVar3 = System_Int32__ToString(auStackX_8,0);
                      if (plVar1 != (longlong *)0x0) {
                        (**(code **)(*plVar1 + 0xe48))
                                  (plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
                        auStackX_8[0] = *(undefined4 *)(param_3 + 0x54);
                        plVar1 = *(longlong **)(param_1 + 0x180);
                        uVar3 = System_Int32__ToString(auStackX_8,0);
                        if (plVar1 != (longlong *)0x0) {
                          (**(code **)(*plVar1 + 0xe48))
                                    (plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
                          plVar1 = *(longlong **)(param_1 + 0x188);
                          uVar3 = CharacterInfoWindow__Porcentagem(*(undefined4 *)(param_3 + 100),0)
                          ;
                          if (plVar1 != (longlong *)0x0) {
                            (**(code **)(*plVar1 + 0xe48))
                                      (plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
                            auStackX_8[0] = *(undefined4 *)(param_3 + 0x34);
                            plVar1 = *(longlong **)(param_1 + 400);
                            uVar3 = System_Int32__ToString(auStackX_8,0);
                            if (plVar1 != (longlong *)0x0) {
                              (**(code **)(*plVar1 + 0xe48))
                                        (plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

