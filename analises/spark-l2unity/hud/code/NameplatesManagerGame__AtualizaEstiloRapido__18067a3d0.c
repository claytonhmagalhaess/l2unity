// NameplatesManagerGame__AtualizaEstiloRapido__18067a3d0 @ 0x18067a3d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerGame__AtualizaEstiloRapido__18067a3d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  
  if (cRam00000001834b3e30 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(LIT_"'target-bubble-target'");
    FUN_180315380(LIT_"'target-bubble-attack'");
    cRam00000001834b3e30 = '\x01';
  }
  if (DAT_1834b3015 == '\0') {
    FUN_180315380(TI_TargetManager);
    DAT_1834b3015 = '\x01';
  }
  lVar1 = **(longlong **)(TI_TargetManager + 0xb8);
  if (lVar1 == 0) goto code_r0x00018067a655;
  cVar4 = TargetManager__HasTarget__1807ea7b0(lVar1,0);
  if (cVar4 == '\0') {
code_r0x00018067a564:
    if (param_2 == 0) goto code_r0x00018067a655;
    Nameplate__RemoveStyle__1806780b0(param_2,LIT_"'target-bubble-attack'",0);
    uVar5 = LIT_"'target-bubble-target'";
code_r0x00018067a586:
    Nameplate__RemoveStyle__1806780b0(param_2,uVar5,0);
  }
  else {
    if (*(longlong *)(lVar1 + 0x20) == 0) goto code_r0x00018067a655;
    uVar5 = UnityEngine_Component__get_transform(*(longlong *)(lVar1 + 0x20),0);
    if (param_2 == 0) goto code_r0x00018067a655;
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Equality(uVar5,uVar2,0);
    if (cVar4 == '\0') goto code_r0x00018067a564;
    if (cRam00000001834b3e31 == '\0') {
      FUN_180315380(TI_UnityEngine.Object);
      FUN_180315380(LIT_"'target-bubble-target'");
      FUN_180315380(LIT_"'target-bubble-attack'");
      cRam00000001834b3e31 = '\x01';
    }
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Equality(uVar5,uVar2,0);
    if (cVar4 == '\0') {
code_r0x00018067a549:
      Nameplate__SetStyle__180678270(param_2,LIT_"'target-bubble-target'",0);
      uVar5 = LIT_"'target-bubble-attack'";
      goto code_r0x00018067a586;
    }
    if ((*(longlong *)(lVar1 + 0x28) == 0) ||
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x28) + 0x38), lVar1 == 0))
    goto code_r0x00018067a655;
    if (*(char *)(lVar1 + 0x18) != '\0') goto code_r0x00018067a549;
    Nameplate__SetStyle__180678270(param_2,LIT_"'target-bubble-attack'",0);
  }
  if (cRam00000001834b3e32 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(LIT_"'target-bubble-hover'");
    cRam00000001834b3e32 = '\x01';
  }
  if (cRam00000001834b31d1 == '\0') {
    FUN_180315380(TI_ClickManager);
    cRam00000001834b31d1 = '\x01';
  }
  if (**(longlong **)(TI_ClickManager + 0xb8) != 0) {
    lVar1 = *(longlong *)(**(longlong **)(TI_ClickManager + 0xb8) + 0x40);
    if (lVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar1 + 0x38);
    }
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Equality(uVar5,uVar2,0);
    if (cVar4 == '\0') {
      Nameplate__RemoveStyle__1806780b0();
    }
    else {
      Nameplate__SetStyle__180678270(param_2,LIT_"'target-bubble-hover'",0);
    }
    return;
  }
code_r0x00018067a655:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

