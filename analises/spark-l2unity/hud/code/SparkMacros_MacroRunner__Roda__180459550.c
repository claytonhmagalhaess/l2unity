// SparkMacros_MacroRunner__Roda__180459550 @ 0x180459550

/* WARNING: Possible PIC construction at 0x0001804595bf: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001804595c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkMacros_MacroRunner__Roda__180459550(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,*(undefined8 *)(param_1 + 0x20),0);
  }
  if (DAT_1834b308a == '\0') {
    FUN_180315380(TI_SparkMacros.MacroRunner.<Executa>d__2);
    DAT_1834b308a = '\x01';
  }
  lVar3 = func_0x000180315580(TI_SparkMacros.MacroRunner.<Executa>d__2);
  uVar4 = Gear__UpdateWeaponType__1803dadf0(lVar3,0);
  *(undefined4 *)(lVar3 + 0x10) = 0;
  *(longlong *)(lVar3 + 0x28) = param_1;
  if (_DAT_1834c7d58 != 0) {
    uVar5 = (uint)(lVar3 + 0x28U >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar2 = *puVar1;
      LOCK();
      uVar4 = *puVar1;
      bVar6 = uVar2 == uVar4;
      if (bVar6) {
        *puVar1 = uVar2 | 1L << (uVar5 & 0x3f);
        uVar4 = uVar2;
      }
      UNLOCK();
    } while (!bVar6);
  }
  return uVar4;
}

