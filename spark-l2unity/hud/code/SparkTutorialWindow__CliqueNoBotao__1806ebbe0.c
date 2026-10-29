// SparkTutorialWindow__CliqueNoBotao__1806ebbe0 @ 0x1806ebbe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTutorialWindow__CliqueNoBotao__1806ebbe0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  if (cRam00000001834b407f == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<int>.RemoveAt);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Item);
    FUN_180315380(TI_SparkTutorial);
    FUN_180315380(LIT_"'click_01'");
    cRam00000001834b407f = '\x01';
  }
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      uVar3 = FUN_180bed530(lVar1,0,MR_System.Collections.Generic.List<int>.get_Item);
      if (*(longlong *)(param_1 + 0xf8) == 0) goto code_r0x0001806ebcf9;
      FUN_180bb1af0(*(longlong *)(param_1 + 0xf8),0,MR_System.Collections.Generic.List<int>.RemoveAt);
      if (DAT_1834b301f == '\0') {
        FUN_180315380(TI_AudioManager);
        DAT_1834b301f = '\x01';
      }
      if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
        AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'click_01'",0);
      }
      if (*(int *)(TI_SparkTutorial + 0xe4) == 0) {
        func_0x000180315660();
      }
      SparkTutorial__CliqueNaInterrogacao__1804ed490(uVar3,0);
      SparkTutorialWindow__AtualizaBotao__1806eb900(param_1,0);
    }
    return;
  }
code_r0x0001806ebcf9:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

