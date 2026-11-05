// CharacterInfoWindow__UpdatePlayer__1805c25b0 @ 0x1805c25b0

void CharacterInfoWindow__UpdatePlayer__1805c25b0
               (longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 auStackX_8 [2];
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  if (cRam00000001834b3aa8 == '\0') {
    FUN_180315380(TI_CharacterClass);
    cRam00000001834b3aa8 = '\x01';
  }
  if ((param_2 != 0) && (plVar1 = *(longlong **)(param_1 + 0x88), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0xe48))
              (plVar1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(*plVar1 + 0xe50));
    plVar1 = *(longlong **)(param_1 + 0x98);
    uStack_28 = TI_CharacterClass;
    uStack_18 = *(undefined1 *)(param_2 + 0x40);
    uStack_20 = 0xffffffffffffffff;
    uVar3 = System_Enum__ToString(&uStack_28,0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
      if (param_3 != 0) {
        auStackX_8[0] = *(undefined4 *)(param_3 + 0x10);
        plVar1 = *(longlong **)(param_1 + 0x90);
        uVar3 = System_Int32__ToString(auStackX_8,0);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0xe48))(plVar1,uVar3,*(undefined8 *)(*plVar1 + 0xe50));
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

