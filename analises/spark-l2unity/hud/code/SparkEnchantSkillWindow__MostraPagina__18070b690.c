// SparkEnchantSkillWindow__MostraPagina__18070b690 @ 0x18070b690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkEnchantSkillWindow__MostraPagina__18070b690(longlong param_1,byte param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  float fVar5;
  
  if (cRam00000001834b4145 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b4145 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar2 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x90),0);
    uVar3 = FUN_180eb5810(param_2,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar2 != 0) {
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
      if (*(longlong *)(param_1 + 0x98) != 0) {
        lVar2 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x98),0);
        uVar3 = FUN_180eb5810(param_2 ^ 1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar2 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar2,uVar3);
          if (param_2 != 0) {
            uVar3 = *(undefined8 *)(param_1 + 0x120);
            if (0.0 < *(float *)(param_1 + 0x130)) {
              fVar5 = (float)FUN_1824366b0(0);
              bVar4 = fVar5 < *(float *)(param_1 + 0x130);
            }
            else {
              bVar4 = false;
            }
            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
              func_0x000180315660();
            }
            SparkEstilo__Liga__180720c80(uVar3,bVar4 ^ 1,0);
          }
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

