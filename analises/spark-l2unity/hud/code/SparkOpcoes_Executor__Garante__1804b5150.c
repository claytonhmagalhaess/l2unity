// SparkOpcoes_Executor__Garante__1804b5150 @ 0x1804b5150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkOpcoes_Executor__Garante__1804b5150(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  
  if (cRam00000001834b32cd == '\0') {
    FUN_180315380(TI_SparkOpcoes.Executor);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkOpcoes.Executor>);
    FUN_180315380(TI_UnityEngine.GameObject);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(LIT_"'SparkOpcoes'");
    cRam00000001834b32cd = '\x01';
  }
  uVar3 = **(undefined8 **)(TI_SparkOpcoes.Executor + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((char)uVar5 != '\0') {
    return uVar5;
  }
  lVar6 = func_0x000180315580(TI_UnityEngine.GameObject);
  UnityEngine_GameObject___ctor(lVar6,LIT_"'SparkOpcoes'",0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  UnityEngine_Object__DontDestroyOnLoad(lVar6,0);
  if (lVar6 == 0) {
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    uVar5 = (*pcVar4)();
    return uVar5;
  }
  uVar5 = FUN_1809e9600(lVar6,MR_UnityEngine.GameObject.AddComponent<SparkOpcoes.Executor>);
  **(ulonglong **)(TI_SparkOpcoes.Executor + 0xb8) = uVar5;
  if (_DAT_1834c7d58 != 0) {
    uVar7 = (uint)(*(ulonglong *)(TI_SparkOpcoes.Executor + 0xb8) >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar2 = *puVar1;
      LOCK();
      uVar5 = *puVar1;
      bVar8 = uVar2 == uVar5;
      if (bVar8) {
        *puVar1 = uVar2 | 1L << (uVar7 & 0x3f);
        uVar5 = uVar2;
      }
      UNLOCK();
    } while (!bVar8);
  }
  return uVar5;
}

