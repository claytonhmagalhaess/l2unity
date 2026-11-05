// SparkHtml__TextoPuro__18073e9f0 @ 0x18073e9f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkHtml__TextoPuro__18073e9f0(undefined8 param_1)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plStackX_8;
  
  if (cRam00000001834b4260 == '\0') {
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(TI_System.Text.StringBuilder);
    cRam00000001834b4260 = '\x01';
  }
  plVar2 = (longlong *)func_0x000180315580(TI_System.Text.StringBuilder);
  System_Text_StringBuilder___ctor(plVar2,0);
  plStackX_8 = plVar2;
  func_0x000180314690(&plStackX_8,plVar2);
  if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkHtml___TextoPuro_g__Anda_35_0(param_1,&plStackX_8,0);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x168))(plStackX_8,*(undefined8 *)(*plStackX_8 + 0x170));
    return;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

