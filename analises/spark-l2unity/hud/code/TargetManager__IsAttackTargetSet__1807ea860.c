// TargetManager__IsAttackTargetSet__1807ea860 @ 0x1807ea860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong TargetManager__IsAttackTargetSet__1807ea860(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong uVar6;
  
  if (cRam00000001834b46ca == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b46ca = '\x01';
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar6 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((char)uVar6 != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar6 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    if ((char)uVar6 != '\0') {
      if ((((*(longlong *)(param_1 + 0x20) != 0) &&
           (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30), lVar3 != 0)) &&
          (*(longlong *)(param_1 + 0x28) != 0)) &&
         (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30), lVar4 != 0)) {
        iVar1 = *(int *)(lVar4 + 0x14);
        return (ulonglong)CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(lVar3 + 0x14) == iVar1);
      }
      FUN_1803155d0();
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return uVar6;
    }
  }
  return uVar6 & 0xffffffffffffff00;
}

