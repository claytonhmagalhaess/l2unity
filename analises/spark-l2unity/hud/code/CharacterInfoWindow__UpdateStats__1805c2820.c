// CharacterInfoWindow__UpdateStats__1805c2820 @ 0x1805c2820

void CharacterInfoWindow__UpdateStats__1805c2820(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStackX_8 [8];
  
  if (param_2 != 0) {
    auStackX_8[0] = *(undefined1 *)(param_2 + 0x8a);
    plVar1 = *(longlong **)(param_1 + 0x198);
    uVar3 = System_Byte__ToString(auStackX_8,0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
      auStackX_8[0] = *(undefined1 *)(param_2 + 0x8d);
      plVar1 = *(longlong **)(param_1 + 0x1a0);
      uVar3 = System_Byte__ToString(auStackX_8,0);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
        auStackX_8[0] = *(undefined1 *)(param_2 + 0x89);
        plVar1 = *(longlong **)(param_1 + 0x1a8);
        uVar3 = System_Byte__ToString(auStackX_8,0);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
          auStackX_8[0] = *(undefined1 *)(param_2 + 0x8b);
          plVar1 = *(longlong **)(param_1 + 0x1b0);
          uVar3 = System_Byte__ToString(auStackX_8,0);
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
            auStackX_8[0] = *(undefined1 *)(param_2 + 0x88);
            plVar1 = *(longlong **)(param_1 + 0x1b8);
            uVar3 = System_Byte__ToString(auStackX_8,0);
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
              auStackX_8[0] = *(undefined1 *)(param_2 + 0x8c);
              plVar1 = *(longlong **)(param_1 + 0x1c0);
              uVar3 = System_Byte__ToString(auStackX_8,0);
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
                return;
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

