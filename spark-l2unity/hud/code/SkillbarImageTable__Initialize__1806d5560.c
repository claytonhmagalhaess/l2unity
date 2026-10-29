// SkillbarImageTable__Initialize__1806d5560 @ 0x1806d5560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarImageTable__Initialize__1806d5560(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint auStackX_8 [2];
  
  if (cRam00000001834b4019 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>..ctor);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>);
    cRam00000001834b4019 = '\x01';
  }
  uVar3 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>);
  FUN_18124bf80(uVar3,MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>..ctor);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  func_0x000180314690(param_1 + 0x18,uVar3);
  if (cRam00000001834b401a == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(LIT_"'{0}\\\\Effects\\\\Cooltime\\\\cooltime{1}'");
    FUN_180315380();
    cRam00000001834b401a = '\x01';
  }
  uVar7 = 0;
  lVar5 = *(longlong *)(param_1 + 0x20);
  while (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) <= (int)uVar7) {
      if (cRam00000001834b401b == '\0') {
        FUN_180315380(TI_UnityEngine.Debug);
        FUN_180315380(TI_UnityEngine.Object);
        FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
        FUN_180315380(TI_SparkArte);
        FUN_180315380(LIT_"'Missing cooltimeEnd icon: {0}.'");
        FUN_180315380(LIT_"'{0}\\\\Effects\\\\CooltimeEnd\\\\CoolTimeEnd{1:D3}'");
        cRam00000001834b401b = '\x01';
      }
      lVar5 = *(longlong *)(param_1 + 0x28);
      uVar7 = 1;
      uVar6 = 1;
      if (lVar5 != 0) goto code_r0x0001806d57c0;
      break;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    auStackX_8[0] = uVar7;
    uVar4 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
    uVar3 = System_String__Format(LIT_"'{0}\\\\Effects\\\\Cooltime\\\\cooltime{1}'",uVar3,uVar4,0);
    if (*(int *)(TI_SparkArte + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar3 = FUN_180a90ae0(uVar3,MR_SparkArte.Load<UnityEngine.Texture2D>);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if (cVar2 == '\0') {
      auStackX_8[0] = uVar7;
      uVar3 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
      uVar3 = System_String__Format(LIT_"'Missing cooltime icon: {0}.'",uVar3,0);
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Debug__LogWarning(uVar3,0);
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x20);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto code_r0x0001806d5a69;
      *(undefined8 *)(lVar5 + 0x20 + (longlong)(int)uVar7 * 8) = uVar3;
      func_0x000180314690(lVar5 + (longlong)(int)uVar7 * 8 + 0x20,uVar3);
    }
    uVar7 = uVar7 + 1;
    lVar5 = *(longlong *)(param_1 + 0x20);
  }
  goto code_r0x0001806d5a63;
joined_r0x0001806d593a:
  if (lVar5 == 0) goto code_r0x0001806d5a63;
  if (*(int *)(lVar5 + 0x18) < (int)uVar7) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  auStackX_8[0] = uVar7;
  uVar4 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
  uVar3 = System_String__Format(LIT_"'{0}\\\\Effects\\\\Toggle\\\\ToggleEffect{1:D3}'",uVar3,uVar4,0);
  if (*(int *)(TI_SparkArte + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = FUN_180a90ae0(uVar3,MR_SparkArte.Load<UnityEngine.Texture2D>);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if (cVar2 == '\0') {
    auStackX_8[0] = uVar7;
    uVar3 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
    uVar3 = System_String__Format(LIT_"'Missing toggle icon: {0}.'",uVar3,0);
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__LogWarning(uVar3,0);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x30);
    if (lVar5 == 0) goto code_r0x0001806d5a63;
    if (*(uint *)(lVar5 + 0x18) <= uVar7 - 1) {
code_r0x0001806d5a69:
      FUN_1803155c0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined8 *)(lVar5 + 0x18 + (longlong)(int)uVar7 * 8) = uVar3;
    func_0x000180314690(lVar5 + (longlong)(int)uVar7 * 8 + 0x18,uVar3);
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  uVar7 = uVar7 + 1;
  goto joined_r0x0001806d593a;
  while( true ) {
    lVar5 = *(longlong *)(param_1 + 0x28);
    uVar6 = uVar6 + 1;
    if (lVar5 == 0) break;
code_r0x0001806d57c0:
    if (*(int *)(lVar5 + 0x18) < (int)uVar6) {
      if (cRam00000001834b401c == '\0') {
        FUN_180315380(TI_UnityEngine.Debug);
        FUN_180315380(TI_UnityEngine.Object);
        FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
        FUN_180315380(TI_SparkArte);
        FUN_180315380(LIT_"'{0}\\\\Effects\\\\Toggle\\\\ToggleEffect{1:D3}'");
        FUN_180315380(LIT_"'Missing toggle icon: {0}.'");
        cRam00000001834b401c = '\x01';
      }
      lVar5 = *(longlong *)(param_1 + 0x30);
      goto joined_r0x0001806d593a;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    auStackX_8[0] = uVar6;
    uVar4 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
    uVar3 = System_String__Format(LIT_"'{0}\\\\Effects\\\\CooltimeEnd\\\\CoolTimeEnd{1:D3}'",uVar3,uVar4,0);
    if (*(int *)(TI_SparkArte + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar3 = FUN_180a90ae0(uVar3,MR_SparkArte.Load<UnityEngine.Texture2D>);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if (cVar2 == '\0') {
      auStackX_8[0] = uVar6;
      uVar3 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
      uVar3 = System_String__Format(LIT_"'Missing cooltimeEnd icon: {0}.'",uVar3,0);
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Debug__LogWarning(uVar3,0);
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x28);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar6 - 1) goto code_r0x0001806d5a69;
      *(undefined8 *)(lVar5 + 0x18 + (longlong)(int)uVar6 * 8) = uVar3;
      func_0x000180314690(lVar5 + (longlong)(int)uVar6 * 8 + 0x18,uVar3);
    }
  }
code_r0x0001806d5a63:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

