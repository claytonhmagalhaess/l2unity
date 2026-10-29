// SkillbarImageTable__LoadCooltimeTextures__1806d5c20 @ 0x1806d5c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarImageTable__LoadCooltimeTextures__1806d5c20(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint auStackX_8 [2];
  
  if (cRam00000001834b401a == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(LIT_"'{0}\\\\Effects\\\\Cooltime\\\\cooltime{1}'");
    FUN_180315380();
    cRam00000001834b401a = '\x01';
  }
  uVar6 = 0;
  lVar1 = *(longlong *)(param_1 + 0x20);
  while (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) <= (int)uVar6) {
      return;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    auStackX_8[0] = uVar6;
    uVar4 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
    uVar5 = System_String__Format(LIT_"'{0}\\\\Effects\\\\Cooltime\\\\cooltime{1}'",uVar5,uVar4,0);
    if (*(int *)(TI_SparkArte + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar5 = FUN_180a90ae0(uVar5,MR_SparkArte.Load<UnityEngine.Texture2D>);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if (cVar3 == '\0') {
      auStackX_8[0] = uVar6;
      uVar5 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
      uVar5 = System_String__Format(LIT_"'Missing cooltime icon: {0}.'",uVar5,0);
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Debug__LogWarning(uVar5,0);
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x20);
      if (lVar1 == 0) break;
      if (*(uint *)(lVar1 + 0x18) <= uVar6) {
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined8 *)(lVar1 + 0x20 + (longlong)(int)uVar6 * 8) = uVar5;
      func_0x000180314690(lVar1 + (longlong)(int)uVar6 * 8 + 0x20,uVar5);
    }
    uVar6 = uVar6 + 1;
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

