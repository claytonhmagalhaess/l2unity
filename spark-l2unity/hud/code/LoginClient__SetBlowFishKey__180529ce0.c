// LoginClient__SetBlowFishKey__180529ce0 @ 0x180529ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginClient__SetBlowFishKey__180529ce0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b378f == '\0') {
    FUN_180315380(TI_L2_login.BlowfishEngine);
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(LIT_"'Blowfish key set.'");
    cRam00000001834b378f = '\x01';
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    AsynchronousClient__set_CryptEnabled(*(longlong *)(param_1 + 0x30),1,0);
    *(undefined8 *)(param_1 + 0x70) = param_2;
    func_0x000180314690(param_1 + 0x70,param_2);
    uVar3 = func_0x000180315580(TI_L2_login.BlowfishEngine);
    L2_login_BlowfishEngine___ctor(uVar3,0);
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    func_0x000180314690(param_1 + 0x78,uVar3);
    if (*(longlong *)(param_1 + 0x78) != 0) {
      L2_login_BlowfishEngine__init(*(longlong *)(param_1 + 0x78),0,param_2,0);
      uVar3 = func_0x000180315580(TI_L2_login.BlowfishEngine);
      L2_login_BlowfishEngine___ctor(uVar3,0);
      *(undefined8 *)(param_1 + 0x80) = uVar3;
      func_0x000180314690(param_1 + 0x80,uVar3);
      if (*(longlong *)(param_1 + 0x80) != 0) {
        L2_login_BlowfishEngine__init(*(longlong *)(param_1 + 0x80),1,param_2,0);
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar3 = LIT_"'Blowfish key set.'";
        if (DAT_1834bfa14 == '\0') {
          FUN_180315380(TI_UnityEngine.Debug,0);
          FUN_180315380(TI_UnityEngine.ILogger);
          DAT_1834bfa14 = '\x01';
        }
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (DAT_1834b3803 == '\0') {
          FUN_180315380(TI_UnityEngine.Debug);
          DAT_1834b3803 = '\x01';
        }
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar1 = *(longlong *)(*(longlong *)(TI_UnityEngine.Debug + 0xb8) + 8);
        if (lVar1 != 0) {
          FUN_180036090(5,TI_UnityEngine.ILogger,lVar1,3,uVar3);
          return;
        }
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

