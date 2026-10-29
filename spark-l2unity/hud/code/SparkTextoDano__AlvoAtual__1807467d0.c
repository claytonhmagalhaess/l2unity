// SparkTextoDano__AlvoAtual__1807467d0 @ 0x1807467d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkTextoDano__AlvoAtual__1807467d0(void)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b42ac == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkTextoDano);
    cRam00000001834b42ac = '\x01';
  }
  if (DAT_1834b2f32 == '\0') {
    FUN_180315380(TI_PlayerEntity);
    DAT_1834b2f32 = '\x01';
  }
  uVar3 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
  if (DAT_1834b3015 == '\0') {
    FUN_180315380(TI_TargetManager);
    DAT_1834b3015 = '\x01';
  }
  uVar4 = **(undefined8 **)(TI_TargetManager + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if (cVar2 == '\0') {
    uVar4 = 0;
  }
  else {
    if (DAT_1834b3015 == '\0') {
      FUN_180315380(TI_TargetManager);
      DAT_1834b3015 = '\x01';
    }
    if (**(longlong **)(TI_TargetManager + 0xb8) == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar4 = *(undefined8 *)(**(longlong **)(TI_TargetManager + 0xb8) + 0x20);
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if (cVar2 != '\0') {
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(uVar4,uVar3,0);
    if (cVar2 != '\0') {
      return uVar4;
    }
  }
  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
    func_0x000180315660(TI_SparkTextoDano);
  }
  uVar4 = *(undefined8 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x48);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if (cVar2 != '\0') {
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660(TI_SparkTextoDano);
    }
    uVar4 = *(undefined8 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x48);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(uVar4,uVar3,0);
    if (cVar2 != '\0') {
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTextoDano);
      }
      return *(undefined8 *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x48);
    }
  }
  return 0;
}

