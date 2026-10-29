// LoginWindow__LoginButtonPressed__18079e420 @ 0x18079e420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginWindow__LoginButtonPressed__18079e420(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined4 uVar9;
  float afStackX_18 [4];
  
  if (cRam00000001834b44c5 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_LoginClient);
    FUN_180315380(TI_LoginWindow);
    FUN_180315380(MR_UnityEngine.UIElements.TextInputBaseField<string>.get_text);
    FUN_180315380(LIT_"'1234'");
    FUN_180315380(LIT_"' s depois do anterior), chamado por: '");
    FUN_180315380(LIT_"'[SPARK] login repetido ignorado ('");
    FUN_180315380(LIT_"'Shnok'");
    FUN_180315380(LIT_"'0.00'");
    cRam00000001834b44c5 = '\x01';
  }
  if (*(int *)(TI_LoginWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = LoginWindow__get_BloqueioAtivo(0);
  if (cVar3 != '\0') {
    return;
  }
  fVar8 = (float)FUN_1824366b0(0);
  if (*(int *)(TI_LoginWindow + 0xe4) == 0) {
    func_0x000180315660(TI_LoginWindow);
  }
  fVar8 = fVar8 - *(float *)(*(longlong *)(TI_LoginWindow + 0xb8) + 8);
  if ((0.0 <= fVar8) && (fVar8 < 2.5)) {
    afStackX_18[0] = (float)FUN_1824366b0(0);
    if (*(int *)(TI_LoginWindow + 0xe4) == 0) {
      func_0x000180315660(TI_LoginWindow);
    }
    afStackX_18[0] = afStackX_18[0] - *(float *)(*(longlong *)(TI_LoginWindow + 0xb8) + 8);
    uVar4 = System_Single__ToString(afStackX_18,LIT_"'0.00'",0);
    uVar5 = System_Environment__get_StackTrace(0);
    uVar4 = System_String__Concat(LIT_"'[SPARK] login repetido ignorado ('",uVar4,LIT_"' s depois do anterior), chamado por: '",uVar5,0);
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Debug__LogWarning(uVar4,0);
    return;
  }
  if ((*(longlong *)(param_1 + 0x90) == 0) ||
     (lVar6 = FUN_180f02db0(*(longlong *)(param_1 + 0x90),MR_UnityEngine.UIElements.TextInputBaseField<string>.get_text), lVar6 == 0))
  goto DAT_18079e87e;
  if (*(int *)(lVar6 + 0x10) == 0) {
    if ((*(longlong *)(param_1 + 0x98) == 0) ||
       (lVar6 = FUN_180f02db0(*(longlong *)(param_1 + 0x98),MR_UnityEngine.UIElements.TextInputBaseField<string>.get_text), lVar6 == 0))
    goto DAT_18079e87e;
    if (*(int *)(lVar6 + 0x10) != 0) goto code_r0x00018079e673;
    plVar1 = *(longlong **)(param_1 + 0x90);
    if (plVar1 == (longlong *)0x0) goto DAT_18079e87e;
    (**(code **)(*plVar1 + 0xa88))(plVar1,LIT_"'Shnok'",*(undefined8 *)(*plVar1 + 0xa90));
    plVar1 = *(longlong **)(param_1 + 0x98);
    if (plVar1 == (longlong *)0x0) goto DAT_18079e87e;
    (**(code **)(*plVar1 + 0xa88))(plVar1,LIT_"'1234'",*(undefined8 *)(*plVar1 + 0xa90));
  }
  else {
code_r0x00018079e673:
    if ((*(longlong *)(param_1 + 0x98) == 0) ||
       (lVar6 = FUN_180f02db0(*(longlong *)(param_1 + 0x98),MR_UnityEngine.UIElements.TextInputBaseField<string>.get_text), lVar6 == 0))
    goto DAT_18079e87e;
    if (*(int *)(lVar6 + 0x10) == 0) {
      return;
    }
  }
  uVar9 = FUN_1824366b0(0);
  if (*(int *)(TI_LoginWindow + 0xe4) == 0) {
    func_0x000180315660(TI_LoginWindow);
  }
  *(undefined4 *)(*(longlong *)(TI_LoginWindow + 0xb8) + 8) = uVar9;
  if (*(int *)(TI_LoginClient + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b36c4 == '\0') {
    FUN_180315380(TI_LoginClient);
    cRam00000001834b36c4 = '\x01';
  }
  if (*(int *)(TI_LoginClient + 0xe4) == 0) {
    func_0x000180315660();
  }
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    lVar6 = *(longlong *)(*(longlong *)(TI_LoginClient + 0xb8) + 8);
    lVar7 = (**(code **)(*plVar1 + 0xa78))(plVar1,*(undefined8 *)(*plVar1 + 0xa80));
    if (((lVar7 != 0) && (lVar7 = System_String__ToLower(lVar7,0), lVar7 != 0)) &&
       (uVar4 = func_0x00018170d270(lVar7,0), lVar6 != 0)) {
      *(undefined8 *)(lVar6 + 0x58) = uVar4;
      func_0x000180314690(lVar6 + 0x58,uVar4);
      if (cRam00000001834b36c4 == '\0') {
        FUN_180315380(TI_LoginClient);
        cRam00000001834b36c4 = '\x01';
      }
      if (*(int *)(TI_LoginClient + 0xe4) == 0) {
        func_0x000180315660(TI_LoginClient);
      }
      plVar1 = *(longlong **)(param_1 + 0x98);
      if (plVar1 != (longlong *)0x0) {
        lVar6 = *(longlong *)(*(longlong *)(TI_LoginClient + 0xb8) + 8);
        lVar7 = (**(code **)(*plVar1 + 0xa78))(plVar1,*(undefined8 *)(*plVar1 + 0xa80));
        if ((lVar7 != 0) && (uVar4 = func_0x00018170d270(lVar7,0), lVar6 != 0)) {
          *(undefined8 *)(lVar6 + 0x60) = uVar4;
          func_0x000180314690(lVar6 + 0x60,uVar4);
          if (cRam00000001834b36c4 == '\0') {
            FUN_180315380(TI_LoginClient);
            cRam00000001834b36c4 = '\x01';
          }
          if (*(int *)(TI_LoginClient + 0xe4) == 0) {
            func_0x000180315660(TI_LoginClient);
          }
          lVar6 = *(longlong *)(*(longlong *)(TI_LoginClient + 0xb8) + 8);
          if (lVar6 != 0) {
            DefaultClient__Connect(lVar6,0);
            return;
          }
        }
      }
    }
  }
DAT_18079e87e:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

