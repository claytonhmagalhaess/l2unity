// TargetManager__VerifyNextTargetIndex__1807eb3e0 @ 0x1807eb3e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TargetManager__VerifyNextTargetIndex__1807eb3e0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (cRam00000001834b46c3 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Transform>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Transform>.get_Item);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b46c3 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x48) == 0) goto code_r0x0001807eb539;
  if (*(int *)(param_1 + 0x50) < *(int *)(*(longlong *)(param_1 + 0x48) + 0x18)) {
    cVar3 = TargetManager__HasTarget__1807ea7b0(param_1,0);
    if (cVar3 != '\0') {
      if (*(longlong *)(param_1 + 0x20) == 0) goto code_r0x0001807eb539;
      uVar4 = UnityEngine_Component__get_transform(*(longlong *)(param_1 + 0x20),0);
      cVar3 = TargetManager__IsTransformVisible__1807ea930(param_1,uVar4,0);
      if (cVar3 == '\0') goto code_r0x0001807eb51a;
    }
    cVar3 = TargetManager__HasTarget__1807ea7b0(param_1,0);
    if (cVar3 != '\0') {
      iVar6 = 0;
      lVar1 = *(longlong *)(param_1 + 0x48);
      while (lVar1 != 0) {
        if (*(int *)(lVar1 + 0x18) <= iVar6) {
          return;
        }
        if (*(longlong *)(param_1 + 0x48) == 0) break;
        uVar4 = FUN_180bbafe0(*(longlong *)(param_1 + 0x48),iVar6,MR_System.Collections.Generic.List<UnityEngine.Transform>.get_Item);
        if (*(longlong *)(param_1 + 0x20) == 0) break;
        uVar5 = UnityEngine_Component__get_transform(*(longlong *)(param_1 + 0x20),0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = UnityEngine_Object__op_Equality(uVar4,uVar5,0);
        if ((cVar3 != '\0') && (iVar6 != *(int *)(param_1 + 0x50))) {
          *(undefined4 *)(param_1 + 0x50) = 0;
        }
        iVar6 = iVar6 + 1;
        lVar1 = *(longlong *)(param_1 + 0x48);
      }
code_r0x0001807eb539:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
code_r0x0001807eb51a:
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

