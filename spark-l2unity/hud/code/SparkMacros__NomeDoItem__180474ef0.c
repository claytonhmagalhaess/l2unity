// SparkMacros__NomeDoItem__180474ef0 @ 0x180474ef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkMacros__NomeDoItem__180474ef0(undefined4 param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b3084 == '\0') {
    FUN_180315380(TI_ItemTable);
    cRam00000001834b3084 = '\x01';
  }
  if (*(int *)(TI_ItemTable + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar2 = ItemTable__get_Instance(0);
  if (lVar2 != 0) {
    if (*(int *)(TI_ItemTable + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar2 = ItemTable__get_Instance(0);
    if (lVar2 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    lVar2 = ItemTable__GetItem(lVar2,param_1,0);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x20) != 0)) {
      return *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0x18);
    }
  }
  return 0;
}

