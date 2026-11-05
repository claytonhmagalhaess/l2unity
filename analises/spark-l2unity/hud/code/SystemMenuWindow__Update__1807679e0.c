// SystemMenuWindow__Update__1807679e0 @ 0x1807679e0

void SystemMenuWindow__Update__1807679e0(longlong *param_1)

{
  code *pcVar1;
  char cVar2;
  
  if ((char)param_1[7] == '\0') {
    cVar2 = FUN_1824bb580(0,0);
    if (cVar2 != '\0') {
      cVar2 = L2Window__MouseOverThisWindow__18079a050(param_1,0);
      if (cVar2 == '\0') {
        if (cRam00000001834b436b == '\0') {
          FUN_180315380(TI_MenuWindow);
          cRam00000001834b436b = '\x01';
        }
        if (**(longlong **)(TI_MenuWindow + 0xb8) == 0) {
          FUN_1803155d0();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        cVar2 = L2Window__MouseOverThisWindow__18079a050
                          (**(longlong **)(TI_MenuWindow + 0xb8),0);
        if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000180767a5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x1c8))(param_1,0,*(undefined8 *)(*param_1 + 0x1d0));
          return;
        }
      }
    }
  }
  return;
}

