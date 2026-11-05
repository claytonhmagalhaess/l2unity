// SparkTutorial__MostraHtml__1804edb60 @ 0x1804edb60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTutorial__MostraHtml__1804edb60(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b33dc == '\0') {
    FUN_180315380(TI_SparkLeitor);
    FUN_180315380(TI_SparkTutorial);
    cRam00000001834b33dc = '\x01';
  }
  lVar2 = func_0x000180315580(TI_SparkLeitor);
  SparkLeitor___ctor(lVar2,param_1,0);
  if (lVar2 != 0) {
    uVar3 = SparkLeitor__S(lVar2,0);
    if (*(int *)(TI_SparkTutorial + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkTutorial__get_Instance(0);
    if (cRam00000001834b352f == '\0') {
      FUN_180315380(TI_SparkTutorialWindow);
      cRam00000001834b352f = '\x01';
    }
    if (**(longlong **)(TI_SparkTutorialWindow + 0xb8) != 0) {
      SparkTutorialWindow__Mostra__1806ecf50(**(longlong **)(TI_SparkTutorialWindow + 0xb8),uVar3,0);
    }
    return;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

