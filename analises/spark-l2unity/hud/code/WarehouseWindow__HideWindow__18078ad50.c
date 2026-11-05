// WarehouseWindow__HideWindow__18078ad50 @ 0x18078ad50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void WarehouseWindow__HideWindow__18078ad50(longlong param_1,char param_2)

{
  longlong lVar1;
  code *pcVar2;
  
  if (cRam00000001834b43c2 == '\0') {
    FUN_180315380(TI_SparkArmazem);
    FUN_180315380(LIT_"'window_close'");
    cRam00000001834b43c2 = '\x01';
  }
  if (*(int *)(TI_SparkArmazem + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3570 == '\0') {
    FUN_180315380(TI_SparkArmazem);
    cRam00000001834b3570 = '\x01';
  }
  if (*(int *)(TI_SparkArmazem + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(char *)(*(longlong *)(TI_SparkArmazem + 0xb8) + 0x1c) != '\0') {
    if (*(int *)(TI_SparkArmazem + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkArmazem__Fecha__1804d7550(0);
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    L2Window__HideWindow__180799d10(param_1,param_2,0);
    if (param_2 == '\0') {
      if (DAT_1834b301f == '\0') {
        FUN_180315380(TI_AudioManager);
        DAT_1834b301f = '\x01';
      }
      if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
        AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'window_close'",0);
      }
    }
    if (DAT_1834b31c0 == '\0') {
      FUN_180315380(TI_L2GameUI);
      DAT_1834b31c0 = '\x01';
    }
    lVar1 = **(longlong **)(TI_L2GameUI + 0xb8);
    if (lVar1 != 0) {
      if (cRam00000001834b43f0 == '\0') {
        FUN_180315380(MR_System.Collections.Generic.List<L2PopupWindow>.Remove);
        cRam00000001834b43f0 = '\x01';
      }
      lVar1 = *(longlong *)(lVar1 + 0x80);
      if (lVar1 == 0) {
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_18164eb60(lVar1,param_1,MR_System.Collections.Generic.List<L2PopupWindow>.Remove);
    }
  }
  return;
}

