// SkillbarImageTable___ctor__1806d6130 @ 0x1806d6130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarImageTable___ctor__1806d6130(longlong param_1)

{
  undefined8 uVar1;
  
  if (cRam00000001834b401e == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>..ctor);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>);
    FUN_180315380(TI_UnityEngine.Texture2D__);
    FUN_180315380(LIT_"'Data\\\\UI\\\\Assets\\\\SkillBar'");
    cRam00000001834b401e = '\x01';
  }
  *(undefined8 *)(param_1 + 0x10) = LIT_"'Data\\\\UI\\\\Assets\\\\SkillBar'";
  func_0x000180314690(param_1 + 0x10,LIT_"'Data\\\\UI\\\\Assets\\\\SkillBar'");
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>);
  FUN_18124bf80(uVar1,MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>..ctor);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  func_0x000180314690(param_1 + 0x18,uVar1);
  uVar1 = func_0x000180314710(TI_UnityEngine.Texture2D__,0x168);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000180314690(param_1 + 0x20,uVar1);
  uVar1 = func_0x000180314710(TI_UnityEngine.Texture2D__,9);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  func_0x000180314690(param_1 + 0x28,uVar1);
  uVar1 = func_0x000180314710(TI_UnityEngine.Texture2D__,0xd);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  func_0x000180314690(param_1 + 0x30,uVar1);
  return;
}

