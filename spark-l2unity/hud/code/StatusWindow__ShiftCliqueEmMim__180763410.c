// StatusWindow__ShiftCliqueEmMim__180763410 @ 0x180763410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void StatusWindow__ShiftCliqueEmMim__180763410(void)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (cRam00000001834b42c3 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b42c3 = '\x01';
  }
  if (DAT_1834b30fb == '\0') {
    FUN_180315380(TI_GameClient);
    DAT_1834b30fb = '\x01';
  }
  uVar5 = **(undefined8 **)(TI_GameClient + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
  if (cVar3 != '\0') {
    return;
  }
  if (DAT_1834b30fb == '\0') {
    FUN_180315380(TI_GameClient);
    DAT_1834b30fb = '\x01';
  }
  if (**(longlong **)(TI_GameClient + 0xb8) != 0) {
    plVar1 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8);
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    if (DAT_1834b30fb == '\0') {
      FUN_180315380(TI_GameClient);
      DAT_1834b30fb = '\x01';
    }
    if (**(longlong **)(TI_GameClient + 0xb8) != 0) {
      uVar4 = GameClient__get_CurrentPlayerId(**(longlong **)(TI_GameClient + 0xb8),0);
      if (cRam00000001834b3655 == '\0') {
        FUN_180315380(TI_RequestActionPacket,uVar4,1,0);
        cRam00000001834b3655 = '\x01';
      }
      uVar5 = func_0x000180315580(TI_RequestActionPacket);
      RequestActionPacket___ctor(uVar5,uVar4,1,0);
                    /* WARNING: Could not recover jumptable at 0x00018050dbe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x178))(plVar1,uVar5,*(undefined8 *)(*plVar1 + 0x180));
      return;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

