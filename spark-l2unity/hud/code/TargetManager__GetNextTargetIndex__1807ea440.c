// TargetManager__GetNextTargetIndex__1807ea440 @ 0x1807ea440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong TargetManager__GetNextTargetIndex__1807ea440(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  if (cRam00000001834b46c4 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Transform>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Transform>.get_Item);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b46c4 = '\x01';
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 == 0) goto code_r0x0001807ea554;
  if (*(int *)(lVar1 + 0x18) == 0) {
    return 0;
  }
  uVar8 = 0;
  if ((int)*(uint *)(param_1 + 0x50) < *(int *)(lVar1 + 0x18)) {
    uVar8 = *(uint *)(param_1 + 0x50);
  }
  cVar3 = TargetManager__HasTarget__1807ea7b0(param_1,0);
  uVar7 = uVar8;
  if (cVar3 != '\0') {
    if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x0001807ea554;
    uVar4 = FUN_180bbafe0(*(longlong *)(param_1 + 0x48),uVar8,MR_System.Collections.Generic.List<UnityEngine.Transform>.get_Item);
    if (*(longlong *)(param_1 + 0x20) == 0) goto code_r0x0001807ea554;
    uVar5 = UnityEngine_Component__get_transform(*(longlong *)(param_1 + 0x20),0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Equality(uVar4,uVar5,0);
    uVar7 = uVar8 + 1;
    if (cVar3 == '\0') {
      uVar7 = uVar8;
    }
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    uVar6 = 0;
    if ((int)uVar7 < *(int *)(*(longlong *)(param_1 + 0x48) + 0x18)) {
      uVar6 = (ulonglong)uVar7;
    }
    return uVar6;
  }
code_r0x0001807ea554:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar6 = (*pcVar2)();
  return uVar6;
}

