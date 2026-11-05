// SkillbarMain___ctor__180703bd0 @ 0x180703bd0

/* WARNING: Possible PIC construction at 0x0001806f8bd5: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001806f8bda) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SkillbarMain___ctor__180703bd0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000030 = 0;
  if (DAT_1834b4155 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>);
    DAT_1834b4155 = '\x01';
  }
  uVar3 = Gear__UpdateWeaponType__1803dadf0(param_1,0);
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  if (_DAT_1834c7d58 != 0) {
    uVar4 = (uint)(param_1 + 0x18U >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar2 = *puVar1;
      LOCK();
      uVar3 = *puVar1;
      bVar5 = uVar2 == uVar3;
      if (bVar5) {
        *puVar1 = uVar2 | 1L << (uVar4 & 0x3f);
        uVar3 = uVar2;
      }
      UNLOCK();
    } while (!bVar5);
  }
  return uVar3;
}

