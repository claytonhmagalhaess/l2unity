// AutoPotionWindow__OnDestroy__1805ad2a0 @ 0x1805ad2a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AutoPotionWindow__OnDestroy__1805ad2a0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b3a3d == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MD_AutoPotionWindow.Atualiza);
    FUN_180315380(MD_AutoPotionWindow.Reanexa);
    FUN_180315380(TI_AutoPotionWindow);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkAutoPocao);
    cRam00000001834b3a3d = '\x01';
  }
  if (*(int *)(TI_AutoPotionWindow + 0xe4) == 0) {
    func_0x000180315660(TI_AutoPotionWindow);
  }
  uVar4 = **(undefined8 **)(TI_AutoPotionWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar4,param_1,0);
  if (cVar3 != '\0') {
    if (*(int *)(TI_AutoPotionWindow + 0xe4) == 0) {
      func_0x000180315660(TI_AutoPotionWindow);
    }
    **(undefined8 **)(TI_AutoPotionWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_AutoPotionWindow + 0xb8),0);
  }
  uVar4 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar4,param_1,MD_AutoPotionWindow.Atualiza,0);
  if (*(int *)(TI_SparkAutoPocao + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkAutoPocao__remove_Mudou(uVar4,0);
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if (cVar3 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0xd0);
    uVar4 = func_0x000180315580(TI_System.Action);
    FUN_1816a9c60(uVar4,param_1,MD_AutoPotionWindow.Reanexa,0);
    if (lVar1 == 0) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    SkillbarWindow__remove_Girou(lVar1,uVar4,0);
  }
  return;
}

