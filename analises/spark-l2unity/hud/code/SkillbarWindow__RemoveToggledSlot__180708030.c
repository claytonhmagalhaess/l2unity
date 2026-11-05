// SkillbarWindow__RemoveToggledSlot__180708030 @ 0x180708030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarWindow__RemoveToggledSlot__180708030(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ushort uVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (cRam00000001834b4194 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Contains);
    FUN_180315380(MR_System.Collections.Generic.List<SkillbarSlot>.Remove);
    cRam00000001834b4194 = '\x01';
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    cVar3 = FUN_181647ac0(*(longlong *)(param_1 + 0xd8),param_2,MR_System.Collections.Generic.List<SkillbarSlot>.Contains);
    if (cVar3 == '\0') {
      return;
    }
    if (((param_2 != 0) && (*(longlong *)(param_2 + 0x50) != 0)) &&
       (plVar4 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_2 + 0x50),0),
       plVar4 != (longlong *)0x0)) {
      lVar1 = *plVar4;
      if (*(ushort *)(lVar1 + 0x12e) != 0) {
        uVar6 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 0xb0) + (ulonglong)uVar6 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar5 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar1 + 0xb0) + 8 + (ulonglong)uVar6 * 0x10) + 0xb) *
                      0x10 + 0x138 + lVar1);
            goto code_r0x000180708124;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12e));
      }
      puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x000180708124:
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      (*(code *)*puVar5)(plVar4,&uStack_58,puVar5[1]);
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        FUN_18164eb60(*(longlong *)(param_1 + 0xd8),param_2,MR_System.Collections.Generic.List<SkillbarSlot>.Remove);
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

