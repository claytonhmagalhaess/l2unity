// SparkMacros_MacroRunner__Conjurando__180459400 @ 0x180459400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkMacros_MacroRunner__Conjurando__180459400(void)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b308b == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b308b = '\x01';
  }
  if (DAT_1834b2f34 == '\0') {
    FUN_180315380(TI_PlayerStateMachine);
    DAT_1834b2f34 = '\x01';
  }
  uVar3 = **(undefined8 **)(TI_PlayerStateMachine + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  if (DAT_1834b2f34 == '\0') {
    FUN_180315380(TI_PlayerStateMachine);
    DAT_1834b2f34 = '\x01';
  }
  lVar1 = **(longlong **)(TI_PlayerStateMachine + 0xb8);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 0x24) == 10);
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}

