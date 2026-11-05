// SparkDetalhePersonagem__EntraNoLod__180497080 @ 0x180497080

ulonglong SparkDetalhePersonagem__EntraNoLod__180497080(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (cRam00000001834b3274 == '\0') {
    FUN_180315380(TI_NetworkHumanoidEntity);
    FUN_180315380(TI_PlayerEntity);
    FUN_180315380(TI_SparkDetalhePersonagem);
    cRam00000001834b3274 = '\x01';
  }
  if (*(int *)(TI_SparkDetalhePersonagem + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar2 = SparkDetalhePersonagem__Conta__180496a50(param_1,0);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  if (param_1 == (longlong *)0x0) {
    return uVar2 & 0xffffffffffffff00;
  }
  lVar1 = *param_1;
  if ((*(byte *)(TI_PlayerEntity + 0x130) <= *(byte *)(lVar1 + 0x130)) &&
     (*(longlong *)
       (*(longlong *)(lVar1 + 200) + -8 + (ulonglong)*(byte *)(TI_PlayerEntity + 0x130) * 8) ==
      TI_PlayerEntity)) {
    return CONCAT71((int7)((ulonglong)*(longlong *)(lVar1 + 200) >> 8),1);
  }
  if ((*(byte *)(lVar1 + 0x130) < *(byte *)(TI_NetworkHumanoidEntity + 0x130)) ||
     (plVar3 = (longlong *)0x1,
     *(longlong *)
      (*(longlong *)(lVar1 + 200) + -8 + (ulonglong)*(byte *)(TI_NetworkHumanoidEntity + 0x130) * 8) !=
     TI_NetworkHumanoidEntity)) {
    plVar3 = (longlong *)0x0;
  }
  plVar4 = (longlong *)0x0;
  if ((int)plVar3 != 0) {
    plVar4 = param_1;
  }
  return (ulonglong)(plVar4 != (longlong *)0x0);
}

