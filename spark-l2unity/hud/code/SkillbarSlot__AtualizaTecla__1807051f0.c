// SkillbarSlot__AtualizaTecla__1807051f0 @ 0x1807051f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillbarSlot__AtualizaTecla__1807051f0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [48];
  
  if (cRam00000001834b4174 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b4174 = '\x01';
  }
  if ((*(longlong *)(param_1 + 0xc0) == 0) || (*(longlong *)(param_1 + 0xb0) == 0)) {
    return;
  }
  if (cRam00000001834b3101 == '\0') {
    FUN_180315380(TI_PlayerShortcuts);
    cRam00000001834b3101 = '\x01';
  }
  if (**(longlong **)(TI_PlayerShortcuts + 0xb8) != 0) {
    uVar3 = PlayerShortcuts__GetKeybindForShortcut__1804d1f90
                      (**(longlong **)(TI_PlayerShortcuts + 0xb8),*(undefined4 *)(param_1 + 0xb8),
                       *(undefined4 *)(param_1 + 0xbc),0);
    cVar2 = func_0x000181707e50(uVar3,0);
    if (cVar2 == '\0') {
      lVar5 = SkillbarImageTable__get_Instance(0);
      if (lVar5 == 0) goto code_r0x000180705447;
      plVar4 = (longlong *)SkillbarImageTable__LoadTextureByKey__1806d5dd0(lVar5,uVar3,0);
    }
    else {
      plVar4 = (longlong *)0x0;
    }
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(plVar4,0,0);
    lVar5 = *(longlong *)(param_1 + 0xc0);
    if (lVar5 != 0) {
      if (cVar2 == '\0') {
        lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        puVar6 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(auStack_38,3,0);
        if (lVar5 != 0) {
          uStack_68 = *puVar6;
          uStack_60 = puVar6[1];
          uStack_58 = puVar6[2];
          uStack_50 = puVar6[3];
          uStack_48 = puVar6[4];
          FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_68);
          return;
        }
      }
      else {
        lVar5 = UnityEngine_UIElements_VisualElement__get_style(lVar5,0);
        puVar6 = (undefined8 *)
                 UnityEngine_UIElements_StyleBackground__op_Implicit(auStack_38,plVar4,0);
        if (lVar5 != 0) {
          uStack_68 = *puVar6;
          uStack_60 = puVar6[1];
          uStack_58 = puVar6[2];
          uStack_50 = puVar6[3];
          uStack_48 = puVar6[4];
          FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_68);
          if ((*(longlong *)(param_1 + 0xc0) != 0) &&
             (lVar5 = UnityEngine_UIElements_VisualElement__get_style
                                (*(longlong *)(param_1 + 0xc0),0), plVar4 != (longlong *)0x0)) {
            (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
            puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(auStack_78);
            if (lVar5 != 0) {
              uStack_88 = *puVar6;
              uStack_80 = *(undefined4 *)(puVar6 + 1);
              FUN_1800050f0(0xad,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_88);
              return;
            }
          }
        }
      }
    }
  }
code_r0x000180705447:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

