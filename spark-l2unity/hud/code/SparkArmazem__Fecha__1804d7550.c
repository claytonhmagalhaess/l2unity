// SparkArmazem__Fecha__1804d7550 @ 0x1804d7550

void SparkArmazem__Fecha__1804d7550(void)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  
  if (cRam00000001834b352c == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.Clear);
    FUN_180315380(TI_SparkArmazem);
    cRam00000001834b352c = '\x01';
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
  if (*(char *)(*(longlong *)(TI_SparkArmazem + 0xb8) + 0x1c) == '\0') {
    return;
  }
  if (*(int *)(TI_SparkArmazem + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b356c == '\0') {
    FUN_180315380(TI_SparkArmazem);
    cRam00000001834b356c = '\x01';
  }
  if (*(int *)(TI_SparkArmazem + 0xe4) == 0) {
    func_0x000180315660();
  }
  *(undefined1 *)(*(longlong *)(TI_SparkArmazem + 0xb8) + 0x1c) = 0;
  lVar2 = **(longlong **)(TI_SparkArmazem + 0xb8);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x18);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    *(undefined4 *)(lVar2 + 0x18) = 0;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
    }
    lVar2 = *(longlong *)(*(longlong *)(TI_SparkArmazem + 0xb8) + 8);
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar2 + 0x18);
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      *(undefined4 *)(lVar2 + 0x18) = 0;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
      }
      lVar2 = *(longlong *)(*(longlong *)(TI_SparkArmazem + 0xb8) + 0x28);
      if (lVar2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001804d76c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

