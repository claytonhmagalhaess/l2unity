// SparkDetalhePersonagem__Conta__180496a50 @ 0x180496a50

/* WARNING: Removing unreachable block (ram,0x000180496b78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool SparkDetalhePersonagem__Conta__180496a50(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  
  if (cRam00000001834b326e == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SelectableCharacterEntity);
    FUN_180315380(TI_SparkObjetoEstaticoEntity);
    FUN_180315380(TI_SparkPortaEntity);
    cRam00000001834b326e = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Inequality(param_1,0,0);
  if (cVar3 != '\0') {
    if (param_1 == (longlong *)0x0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    cVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled(param_1,0);
    if (cVar3 != '\0') {
      lVar1 = *param_1;
      if (((*(byte *)(lVar1 + 0x130) < *(byte *)(TI_SparkPortaEntity + 0x130)) ||
          (*(longlong *)
            (*(longlong *)(lVar1 + 200) + -8 +
            (ulonglong)*(byte *)(TI_SparkPortaEntity + 0x130) * 8) != TI_SparkPortaEntity)) &&
         ((*(byte *)(lVar1 + 0x130) < *(byte *)(TI_SelectableCharacterEntity + 0x130) ||
          (*(longlong *)
            (*(longlong *)(lVar1 + 200) + -8 +
            (ulonglong)*(byte *)(TI_SelectableCharacterEntity + 0x130) * 8) != TI_SelectableCharacterEntity)))) {
        if ((*(byte *)(TI_SparkObjetoEstaticoEntity + 0x130) <= *(byte *)(lVar1 + 0x130)) &&
           (*(longlong *)
             (*(longlong *)(lVar1 + 200) + -8 +
             (ulonglong)*(byte *)(TI_SparkObjetoEstaticoEntity + 0x130) * 8) == TI_SparkObjetoEstaticoEntity)) {
          return param_1 == (longlong *)0x0;
        }
        return true;
      }
    }
  }
  return false;
}

