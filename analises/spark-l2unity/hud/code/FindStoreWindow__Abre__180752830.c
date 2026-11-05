// FindStoreWindow__Abre__180752830 @ 0x180752830

void FindStoreWindow__Abre__180752830(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  
  if (cRam00000001834b42f5 == '\0') {
    FUN_180315380(TI_SparkLoja);
    cRam00000001834b42f5 = '\x01';
  }
  if ((char)param_1[0x13] == '\0') {
    return;
  }
  plVar1 = (longlong *)param_1[0x11];
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b354a == '\0') {
    FUN_180315380(TI_SparkLoja);
    cRam00000001834b354a = '\x01';
  }
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xa88))
              (plVar1,*(undefined8 *)(*(longlong *)(TI_SparkLoja + 0xb8) + 0x10),
               *(undefined8 *)(*plVar1 + 0xa90));
    (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
    plVar1 = (longlong *)param_1[0x11];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x268))(plVar1,*(undefined8 *)(*plVar1 + 0x270));
      return;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

