// TargetManager__HasTarget__1807ea7b0 @ 0x1807ea7b0

/* WARNING: Removing unreachable block (ram,0x00018242cdb4) */
/* WARNING: Removing unreachable block (ram,0x00018242cdb9) */
/* WARNING: Removing unreachable block (ram,0x00018242cdca) */
/* WARNING: Removing unreachable block (ram,0x00018242cdd4) */
/* WARNING: Removing unreachable block (ram,0x00018242cddc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong TargetManager__HasTarget__1807ea7b0
                    (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 unaff_RDI;
  
  if (DAT_1834b46cb == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    DAT_1834b46cb = '\x01';
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  lVar4 = UnityEngine_Component__get_transform();
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834c131f == '\0') {
    FUN_180315380(TI_UnityEngine.Object,0,0,param_4,unaff_RDI);
    DAT_1834c131f = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660(TI_UnityEngine.Object);
  }
  if (DAT_1834c12f9 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    DAT_1834c12f9 = '\x01';
  }
  if (lVar4 == 0) {
    return 0;
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660(TI_UnityEngine.Object);
  }
  if (lVar4 == 0) {
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  return (ulonglong)(*(longlong *)(lVar4 + 0x10) != 0);
}

