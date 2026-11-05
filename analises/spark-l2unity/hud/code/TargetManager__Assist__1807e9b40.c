// TargetManager__Assist__1807e9b40 @ 0x1807e9b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TargetManager__Assist__1807e9b40(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  
  if (cRam00000001834b46c6 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b46c6 = '\x01';
  }
  cVar3 = TargetManager__HasTarget__1807ea7b0(param_1,0);
  if (cVar3 != '\0') {
    if (*(longlong *)(param_1 + 0x20) == 0) {
DAT_1807e9c95:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar2 = Entity__get_Combat(*(longlong *)(param_1 + 0x20),0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Equality(uVar2,0,0);
    if (cVar3 == '\0') {
      if ((*(longlong *)(param_1 + 0x20) == 0) ||
         (lVar4 = Entity__get_Combat(*(longlong *)(param_1 + 0x20),0), lVar4 == 0))
      goto DAT_1807e9c95;
      lVar4 = *(longlong *)(lVar4 + 0x30);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = UnityEngine_Object__op_Inequality(lVar4,0,0);
      if (cVar3 != '\0') {
        if (lVar4 == 0) goto DAT_1807e9c95;
        uVar2 = UnityEngine_Component__get_transform(lVar4,0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
        if (cVar3 != '\0') {
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar3 = UnityEngine_Object__op_Inequality(lVar4,uVar2,0);
          if (cVar3 != '\0') {
            TargetManager__SetTarget__1807eaf50(param_1,lVar4,1,0);
          }
        }
      }
    }
  }
  return;
}

