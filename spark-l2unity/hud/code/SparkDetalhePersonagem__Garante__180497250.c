// SparkDetalhePersonagem__Garante__180497250 @ 0x180497250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkDetalhePersonagem__Garante__180497250(void)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  
  if (cRam00000001834b326b == '\0') {
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkDetalhePersonagem>);
    FUN_180315380(TI_UnityEngine.GameObject);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkDetalhePersonagem);
    FUN_180315380(LIT_"'SparkDetalhePersonagem'");
    cRam00000001834b326b = '\x01';
  }
  if (*(int *)(TI_SparkDetalhePersonagem + 0xe4) == 0) {
    func_0x000180315660(TI_SparkDetalhePersonagem);
  }
  uVar2 = **(undefined8 **)(TI_SparkDetalhePersonagem + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((char)uVar4 != '\0') {
    return uVar4;
  }
  lVar5 = func_0x000180315580(TI_UnityEngine.GameObject);
  UnityEngine_GameObject___ctor(lVar5,LIT_"'SparkDetalhePersonagem'",0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  UnityEngine_Object__DontDestroyOnLoad(lVar5,0);
  if (lVar5 == 0) {
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return uVar4;
  }
  uVar6 = FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SparkDetalhePersonagem>);
  uVar4 = uVar6;
  if (*(int *)(TI_SparkDetalhePersonagem + 0xe4) == 0) {
    uVar4 = func_0x000180315660();
  }
  **(ulonglong **)(TI_SparkDetalhePersonagem + 0xb8) = uVar6;
  if (_DAT_1834c7d58 != 0) {
    uVar7 = (uint)(*(ulonglong *)(TI_SparkDetalhePersonagem + 0xb8) >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar6 = *puVar1;
      LOCK();
      uVar4 = *puVar1;
      bVar8 = uVar6 == uVar4;
      if (bVar8) {
        *puVar1 = uVar6 | 1L << (uVar7 & 0x3f);
        uVar4 = uVar6;
      }
      UNLOCK();
    } while (!bVar8);
  }
  return uVar4;
}

