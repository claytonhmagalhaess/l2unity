// StatusWindow__HideWindow__1807631e0 @ 0x1807631e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void StatusWindow__HideWindow__1807631e0(undefined8 param_1,undefined1 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
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
  
  if (cRam00000001834b42c2 == '\0') {
    uStack_30 = &UNK_180763205;
    FUN_180315380(LIT_"'window_close'");
    cRam00000001834b42c2 = '\x01';
  }
  uStack_30 = &UNK_18076321a;
  L2Window__HideWindow__180799d10(param_1,param_2,0);
  if (DAT_1834b301f == '\0') {
    uStack_30 = &UNK_18076322f;
    FUN_180315380(TI_AudioManager);
    DAT_1834b301f = '\x01';
  }
  uVar2 = LIT_"'window_close'";
  if (**(longlong **)(TI_AudioManager + 0xb8) == 0) {
    uStack_30 = &UNK_18076326a;
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
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

