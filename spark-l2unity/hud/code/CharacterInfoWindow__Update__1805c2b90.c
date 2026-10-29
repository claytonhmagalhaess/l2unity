// CharacterInfoWindow__Update__1805c2b90 @ 0x1805c2b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CharacterInfoWindow__Update__1805c2b90(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  
  if (cRam00000001834b3aae == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3aae = '\x01';
  }
  if ((*(longlong *)(param_1 + 0xe0) != 0) && (*(char *)(param_1 + 0x38) == '\0')) {
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    lVar1 = **(longlong **)(TI_PlayerEntity + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Inequality(lVar1,0,0);
    if (cVar3 != '\0') {
      if (lVar1 == 0) {
DAT_1805c2c66:
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(longlong *)(lVar1 + 0x38) != 0) && (*(longlong *)(lVar1 + 0x40) != 0)) {
        if (*(longlong *)(param_1 + 0xe0) == 0) goto DAT_1805c2c66;
        SparkPiscaHp__Atualiza
                  (*(longlong *)(param_1 + 0xe0),*(undefined4 *)(*(longlong *)(lVar1 + 0x38) + 0x10)
                   ,*(undefined4 *)(*(longlong *)(lVar1 + 0x40) + 0x38),0);
      }
    }
  }
  return;
}

