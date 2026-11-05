// SparkEnchantSkillWindow__OnDestroy__18070c1c0 @ 0x18070c1c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkEnchantSkillWindow__OnDestroy__18070c1c0(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (cRam00000001834b413c == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkEnchantSkillWindow);
    cRam00000001834b413c = '\x01';
  }
  if (*(int *)(TI_SparkEnchantSkillWindow + 0xe4) == 0) {
    func_0x000180315660(TI_SparkEnchantSkillWindow);
  }
  uVar1 = **(undefined8 **)(TI_SparkEnchantSkillWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar1,param_1,0);
  if (cVar2 != '\0') {
    if (*(int *)(TI_SparkEnchantSkillWindow + 0xe4) == 0) {
      func_0x000180315660(TI_SparkEnchantSkillWindow);
    }
    **(undefined8 **)(TI_SparkEnchantSkillWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_SparkEnchantSkillWindow + 0xb8),0);
  }
  return;
}

