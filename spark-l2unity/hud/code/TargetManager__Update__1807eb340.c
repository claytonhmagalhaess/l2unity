// TargetManager__Update__1807eb340 @ 0x1807eb340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TargetManager__Update__1807eb340(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (cRam00000001834b46cd == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b46cd = '\x01';
  }
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar1,0,0);
  if (cVar2 == '\0') {
    cVar2 = TargetManager__HasTarget__1807ea7b0(param_1,0);
    if (cVar2 == '\0') {
      TargetManager__ClearTarget__1807e9f10(param_1,0);
    }
  }
  return;
}

