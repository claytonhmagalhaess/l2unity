// CursorManager__Awake__1805b0900 @ 0x1805b0900

/* WARNING: Possible PIC construction at 0x0001805b0a41: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001805b0a73: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001805b0aa5: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001805b09f7: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001805b0a78) */
/* WARNING: Removing unreachable block (ram,0x0001805b0a46) */
/* WARNING: Removing unreachable block (ram,0x0001805b0aaa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong CursorManager__Awake__1805b0900(longlong param_1)

{
  ulonglong *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  if (cRam00000001834b3a09 == '\0') {
    FUN_180315380(TI_CursorManager);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(LIT_"'Attack'");
    FUN_180315380(LIT_"'Talk'");
    FUN_180315380(LIT_"'Default'");
    FUN_180315380(LIT_"'Pickup'");
    cRam00000001834b3a09 = '\x01';
  }
  uVar3 = **(undefined8 **)(TI_CursorManager + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
  uVar4 = TI_CursorManager;
  if (cVar2 == '\0') {
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Object__Destroy(param_1,0);
    uVar3 = System_String__Concat(*(undefined8 *)(param_1 + 0x48),LIT_"'Default'",0);
    if (*(int *)(TI_SparkArte + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = FUN_180a90ae0(uVar3,MR_SparkArte.Load<UnityEngine.Texture2D>);
    uVar5 = param_1 + 0x28;
    *(ulonglong *)(param_1 + 0x28) = uVar4;
  }
  else {
    **(longlong **)(TI_CursorManager + 0xb8) = param_1;
    uVar5 = *(ulonglong *)(TI_CursorManager + 0xb8);
  }
  if (_DAT_1834c7d58 != 0) {
    uVar6 = (uint)(uVar5 >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar5 = *puVar1;
      LOCK();
      uVar4 = *puVar1;
      bVar7 = uVar5 == uVar4;
      if (bVar7) {
        *puVar1 = uVar5 | 1L << (uVar6 & 0x3f);
        uVar4 = uVar5;
      }
      UNLOCK();
    } while (!bVar7);
  }
  return uVar4;
}

