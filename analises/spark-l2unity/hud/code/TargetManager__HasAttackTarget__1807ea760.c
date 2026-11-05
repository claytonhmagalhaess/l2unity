// TargetManager__HasAttackTarget__1807ea760 @ 0x1807ea760

/* WARNING: Removing unreachable block (ram,0x00018242cdb4) */
/* WARNING: Removing unreachable block (ram,0x00018242cdb9) */
/* WARNING: Removing unreachable block (ram,0x00018242cdca) */
/* WARNING: Removing unreachable block (ram,0x00018242cdd4) */
/* WARNING: Removing unreachable block (ram,0x00018242cddc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool TargetManager__HasAttackTarget__1807ea760(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  
  if (cRam00000001834b46cc == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b46cc = '\x01';
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834c131f == '\0') {
    FUN_180315380(TI_UnityEngine.Object,0,0);
    DAT_1834c131f = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660(TI_UnityEngine.Object);
  }
  if (DAT_1834c12f9 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    DAT_1834c12f9 = '\x01';
  }
  if (lVar1 != 0) {
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660(TI_UnityEngine.Object);
    }
    if (lVar1 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return (bool)uVar3;
    }
    return *(longlong *)(lVar1 + 0x10) != 0;
  }
  return false;
}

