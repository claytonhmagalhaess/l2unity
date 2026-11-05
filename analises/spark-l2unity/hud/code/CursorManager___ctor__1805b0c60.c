// CursorManager___ctor__1805b0c60 @ 0x1805b0c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CursorManager___ctor__1805b0c60
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_RBX;
  
  if (cRam00000001834b3a0b == '\0') {
    FUN_180315380(LIT_"'Data/UI/Assets/Cursor/'");
    cRam00000001834b3a0b = '\x01';
  }
  *(undefined8 *)(param_1 + 0x48) = LIT_"'Data/UI/Assets/Cursor/'";
  func_0x000180314690(param_1 + 0x48,LIT_"'Data/UI/Assets/Cursor/'");
  if (DAT_1834c10ac == '\0') {
    FUN_180315380(TI_UnityEngine.Object,0,param_3,param_4,unaff_RBX);
    DAT_1834c10ac = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  return;
}

