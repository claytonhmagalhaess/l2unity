// SparkComandos__OutroJogador__1805eeb20 @ 0x1805eeb20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkComandos__OutroJogador__1805eeb20(void)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (cRam00000001834b3b41 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3b41 = '\x01';
  }
  if (DAT_1834b3015 == '\0') {
    FUN_180315380(TI_TargetManager);
    DAT_1834b3015 = '\x01';
  }
  uVar1 = **(undefined8 **)(TI_TargetManager + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if (cVar3 == '\0') {
    lVar5 = 0;
  }
  else {
    if (DAT_1834b3015 == '\0') {
      FUN_180315380(TI_TargetManager);
      DAT_1834b3015 = '\x01';
    }
    if (**(longlong **)(TI_TargetManager + 0xb8) == 0) goto code_r0x0001805eec94;
    lVar5 = *(longlong *)(**(longlong **)(TI_TargetManager + 0xb8) + 0x20);
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(lVar5,0,0);
  if (cVar3 == '\0') {
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    uVar1 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Equality(lVar5,uVar1,0);
    if (cVar3 == '\0') {
      if (lVar5 == 0) {
code_r0x0001805eec94:
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        lVar5 = (*pcVar2)();
        return lVar5;
      }
      if (*(longlong *)(lVar5 + 0x30) != 0) {
        if (*(int *)(*(longlong *)(lVar5 + 0x30) + 0x10) != 0) {
          lVar4 = 0;
          if (*(int *)(*(longlong *)(lVar5 + 0x30) + 0x10) == 1) {
            lVar4 = lVar5;
          }
          return lVar4;
        }
        return lVar5;
      }
    }
  }
  return 0;
}

