// ExitWindow__HandleExitButtonClick__1805fac90 @ 0x1805fac90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ExitWindow__HandleExitButtonClick__1805fac90(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b3bf1 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3bf1 = '\x01';
  }
  (**(code **)(*param_1 + 0x1c8))(param_1,0,*(undefined8 *)(*param_1 + 0x1d0));
  if (DAT_1834b30fb == '\0') {
    FUN_180315380(TI_GameClient);
    DAT_1834b30fb = '\x01';
  }
  uVar4 = **(undefined8 **)(TI_GameClient + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar4,0,0);
  if (cVar3 == '\0') {
    if (DAT_1834b30fb == '\0') {
      FUN_180315380(TI_GameClient);
      DAT_1834b30fb = '\x01';
    }
    if (**(longlong **)(TI_GameClient + 0xb8) != 0) {
      if (*(char *)(**(longlong **)(TI_GameClient + 0xb8) + 0x3c) == '\0') goto SparkSaida__Sai;
      if (DAT_1834b30fb == '\0') {
        FUN_180315380(TI_GameClient);
        DAT_1834b30fb = '\x01';
      }
      if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
         (plVar1 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
         plVar1 != (longlong *)0x0)) {
        if (cRam00000001834b365e == '\0') {
          FUN_180315380(TI_DisconnectPacket,0);
          cRam00000001834b365e = '\x01';
        }
        uVar4 = func_0x000180315580(TI_DisconnectPacket);
        DisconnectPacket___ctor(uVar4,0);
                    /* WARNING: Could not recover jumptable at 0x00018050c80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x178))(plVar1,uVar4,*(undefined8 *)(*plVar1 + 0x180));
        return;
      }
    }
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
SparkSaida__Sai:
  if (DAT_1834b3495 == '\0') {
    FUN_180315380(TI_UnityEngine.Application);
    FUN_180315380(TI_SparkSaida);
    DAT_1834b3495 = '\x01';
  }
  **(undefined1 **)(TI_SparkSaida + 0xb8) = 1;
  if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834bf6b0 == '\0') {
    FUN_180315380(TI_UnityEngine.Application);
    DAT_1834bf6b0 = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (_DAT_1834bf6a8 == (code *)0x0) {
    _DAT_1834bf6a8 = (code *)FUN_180315630(&UNK_182932420);
  }
                    /* WARNING: Could not recover jumptable at 0x0001823c928a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_1834bf6a8)(0);
  return;
}

