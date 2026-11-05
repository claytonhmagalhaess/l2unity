// SkillbarWindow__OnDestroy__1807076f0 @ 0x1807076f0

void SkillbarWindow__OnDestroy__1807076f0(longlong param_1)

{
  undefined8 uVar1;
  
  if (cRam00000001834b417c == '\0') {
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(MD_SkillbarWindow.AtualizaItem);
    FUN_180315380(TI_SkillbarWindow);
    cRam00000001834b417c = '\x01';
  }
  uVar1 = func_0x000180315580(TI_System.Action<int>);
  FUN_180b7db20(uVar1,param_1,MD_SkillbarWindow.AtualizaItem,0);
  PlayerInventory__remove_ItemMudou(uVar1,0);
  **(undefined8 **)(TI_SkillbarWindow + 0xb8) = 0;
  func_0x000180314690(*(undefined8 *)(TI_SkillbarWindow + 0xb8),0);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,*(undefined8 *)(param_1 + 0xa8),0);
  }
  return;
}

