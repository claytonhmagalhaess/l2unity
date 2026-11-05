// SkillTab__HandleSlotClick__1807015d0 @ 0x1807015d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkillTab__HandleSlotClick__1807015d0(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (cRam00000001834b4119 == '\0') {
    uStack_30 = &UNK_1807015f5;
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    uStack_30 = &UNK_180701601;
    FUN_180315380(LIT_"'click_01'");
    cRam00000001834b4119 = '\x01';
  }
  if (param_2 != (longlong *)0x0) {
    uStack_30 = &UNK_180701624;
    plVar7 = (longlong *)(**(code **)(*param_2 + 0x1e8))(param_2,*(undefined8 *)(*param_2 + 0x1f0));
    if (plVar7 != (longlong *)0x0) {
      if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(*plVar7 + 200) + -8 + (ulonglong)*(byte *)(TI_UnityEngine.UIElements.VisualElement + 0x130) * 8) !=
          TI_UnityEngine.UIElements.VisualElement)) {
        uStack_30 = &UNK_1807016c6;
        FUN_1803146d0(plVar7);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uStack_30 = &UNK_18070166d;
    (**(code **)(*param_1 + 0x1a8))(param_1,plVar7,*(undefined8 *)(*param_1 + 0x1b0));
    if (DAT_1834b301f == '\0') {
      uStack_30 = &UNK_180701682;
      FUN_180315380(TI_AudioManager);
      DAT_1834b301f = '\x01';
    }
    uVar2 = LIT_"'click_01'";
    if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
      if (DAT_1834b2fea == '\0') {
        FUN_180315380(LIT_"'event:/InterfaceSound/'");
        DAT_1834b2fea = '\x01';
      }
      uStack_38 = 0;
      uStack_30 = (undefined *)0x0;
      uVar4 = System_String__Concat(LIT_"'event:/InterfaceSound/'",uVar2,0);
      puVar5 = (undefined4 *)FMODUnity_RuntimeManager__PathToEventReference(&uStack_18,uVar4,0);
      uStack_38._0_4_ = *puVar5;
      uStack_38._4_4_ = puVar5[1];
      uStack_30._0_4_ = puVar5[2];
      uStack_30._4_4_ = puVar5[3];
      cVar3 = func_0x000180899310(&uStack_38,0);
      if (cVar3 != '\0') {
        lVar6 = SparkSons__get_Instance(0);
        if (lVar6 != 0) {
          SparkSons__TocaInterface(lVar6,uVar2,0);
          return;
        }
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uStack_28 = (undefined4)uStack_38;
      uStack_24 = uStack_38._4_4_;
      uStack_20 = (undefined4)uStack_30;
      uStack_1c = uStack_30._4_4_;
      if (DAT_1834b2fef == '\0') {
        FUN_180315380(TI_UnityEngine.Debug);
        FUN_180315380(LIT_"'Trying to play a null EventReference sound.'");
        DAT_1834b2fef = '\x01';
      }
      cVar3 = func_0x000180899310(&uStack_28,0);
      if (cVar3 != '\0') {
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        UnityEngine_Debug__LogWarning(LIT_"'Trying to play a null EventReference sound.'",0);
        return;
      }
      uStack_18 = uStack_28;
      uStack_14 = uStack_24;
      uStack_10 = uStack_20;
      uStack_c = uStack_1c;
      uStack_48 = 0;
      uStack_40 = 0;
      FMODUnity_RuntimeManager__PlayOneShot(&uStack_18,&uStack_48,0);
      return;
    }
  }
  uStack_30 = &UNK_1807016bd;
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

