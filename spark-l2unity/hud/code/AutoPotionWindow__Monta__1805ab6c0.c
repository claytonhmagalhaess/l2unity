// AutoPotionWindow__Monta__1805ab6c0 @ 0x1805ab6c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AutoPotionWindow__Monta__1805ab6c0(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (cRam00000001834b3a3f == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MD_AutoPotionWindow.Atualiza);
    FUN_180315380(MD_AutoPotionWindow.Reanexa);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkAutoPocao);
    cRam00000001834b3a3f = '\x01';
  }
  param_1[0x12] = param_2;
  func_0x000180314690(param_1 + 0x12,param_2);
  lVar3 = param_1[0x1a];
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
  if (cVar2 != '\0') {
    lVar3 = param_1[0x1a];
    uVar4 = func_0x000180315580(TI_System.Action);
    FUN_1816a9c60(uVar4,param_1,MD_AutoPotionWindow.Reanexa,0);
    if (lVar3 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    SkillbarWindow__remove_Girou(lVar3,uVar4,0);
  }
  param_1[0x1a] = 0;
  func_0x000180314690(param_1 + 0x1a,0);
  (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  L2Window__AddWindow__1807995d0(param_1,param_2,0);
  AutoPotionWindow__MontaBarra__1805a9c90(param_1,param_2,0);
  AutoPotionWindow__MontaLista__1805ab240(param_1,param_2,0);
  uVar4 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar4,param_1,MD_AutoPotionWindow.Atualiza,0);
  if (*(int *)(TI_SparkAutoPocao + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkAutoPocao__remove_Mudou(uVar4,0);
  uVar4 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar4,param_1,MD_AutoPotionWindow.Atualiza,0);
  SparkAutoPocao__add_Mudou(uVar4,0);
  if (cRam00000001834b3a51 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle,0);
    FUN_180315380(TI_SparkAutoPocao);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3a51 = '\x01';
  }
  if (param_1[0x13] != 0) {
    if (*(int *)(TI_SparkAutoPocao + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b3544 == '\0') {
      FUN_180315380(TI_SparkAutoPocao);
      cRam00000001834b3544 = '\x01';
    }
    if (*(int *)(TI_SparkAutoPocao + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar3 = param_1[0x13];
    if (lVar3 != 0) {
      if (*(char *)(*(longlong *)(TI_SparkAutoPocao + 0xb8) + 0x10) == '\0') {
        lVar3 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
        uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar3 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
          if (param_1[0x17] != 0) {
            MouseOverDetectionManipulator__Disable__1807afdf0(param_1[0x17],0);
            AutoPotionWindow__FechaLista__1805a7640(param_1,0);
            if ((char)param_1[0x11] == '\0') {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x0001805a6485. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x1c8))(param_1,1,*(undefined8 *)(*param_1 + 0x1d0));
            return;
          }
        }
      }
      else {
        lVar3 = UnityEngine_UIElements_VisualElement__get_style(lVar3,0);
        uVar4 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
        if (lVar3 != 0) {
          FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar3,uVar4);
          if (param_1[0x17] != 0) {
            MouseOverDetectionManipulator__Enable__1807afe20(param_1[0x17],0);
            AutoPotionWindow__DesenhaLuz(param_1,0);
            iVar5 = 0;
            do {
              AutoPotionWindow__DesenhaCasa(param_1,iVar5,1,0);
              iVar5 = iVar5 + 1;
            } while (iVar5 < 6);
            if (-1 < (int)param_1[0x1e]) {
              AutoPotionWindow__FechaLista__1805a7640(param_1,0);
            }
            AutoPotionWindow__AtualizaJanela(param_1,0);
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
  return;
}

