// SparkGmWindow__ShowWindow__180614490 @ 0x180614490

/* WARNING: Removing unreachable block (ram,0x0001806136d8) */
/* WARNING: Removing unreachable block (ram,0x0001806136e8) */
/* WARNING: Removing unreachable block (ram,0x000180613706) */
/* WARNING: Removing unreachable block (ram,0x000180613712) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkGmWindow__ShowWindow__180614490(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b3c20 == '\0') {
    FUN_180315380(LIT_"'window_open'");
    cRam00000001834b3c20 = '\x01';
  }
  L2PopupWindow__ShowWindow__180778380(param_1,0);
  if (DAT_1834b301f == '\0') {
    FUN_180315380(TI_AudioManager);
    DAT_1834b301f = '\x01';
  }
  if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
    AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'window_open'",0);
  }
  if (DAT_1834b31c0 == '\0') {
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  if (**(longlong **)(TI_L2GameUI + 0xb8) != 0) {
    L2GameUI__WindowOpened__180776020(**(longlong **)(TI_L2GameUI + 0xb8),param_1,0);
  }
  if (cRam00000001834b3c42 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(LIT_"''");
    cRam00000001834b3c42 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return;
  }
  if (DAT_1834b3015 == '\0') {
    FUN_180315380(TI_TargetManager);
    DAT_1834b3015 = '\x01';
  }
  uVar6 = **(undefined8 **)(TI_TargetManager + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if (cVar3 == '\0') {
code_r0x00018061367b:
    lVar5 = 0;
  }
  else {
    if (DAT_1834b3015 == '\0') {
      FUN_180315380(TI_TargetManager);
      DAT_1834b3015 = '\x01';
    }
    if (**(longlong **)(TI_TargetManager + 0xb8) == 0) goto DAT_18061378e;
    cVar3 = TargetManager__HasTarget__1807ea7b0(**(longlong **)(TI_TargetManager + 0xb8),0);
    if (cVar3 == '\0') goto code_r0x00018061367b;
    if (DAT_1834b3015 == '\0') {
      FUN_180315380(TI_TargetManager);
      DAT_1834b3015 = '\x01';
    }
    if (**(longlong **)(TI_TargetManager + 0xb8) == 0) goto DAT_18061378e;
    lVar5 = *(longlong *)(**(longlong **)(TI_TargetManager + 0xb8) + 0x20);
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Inequality(lVar5,0,0);
  uVar6 = LIT_"''";
  if (cVar3 != '\0') {
    if (lVar5 == 0) goto DAT_18061378e;
    if ((*(longlong *)(lVar5 + 0x30) != 0) &&
       ((lVar5 = *(longlong *)(lVar5 + 0x30), *(int *)(lVar5 + 0x10) == 0 ||
        (*(int *)(lVar5 + 0x10) == 1)))) {
      uVar6 = *(undefined8 *)(lVar5 + 0x18);
    }
  }
  bVar4 = func_0x000181707e50(uVar6,0);
  if ((byte)(bVar4 ^ 1 | 1) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x90);
    if (plVar1 == (longlong *)0x0) {
DAT_18061378e:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(*plVar1 + 0xa88))(plVar1,uVar6,*(undefined8 *)(*plVar1 + 0xa90));
  }
  *(undefined8 *)(param_1 + 0xf0) = uVar6;
  func_0x000180314690(param_1 + 0xf0,uVar6);
  return;
}

