// CursorManager__Aplica__1805b0880 @ 0x1805b0880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CursorManager__Aplica__1805b0880(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 auStack_18 [2];
  
  if (param_2 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
  }
  else if (param_2 == 1) {
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  else if (param_2 == 2) {
    lVar1 = *(longlong *)(param_1 + 0x38);
  }
  else {
    if (param_2 != 3) {
      return;
    }
    lVar1 = *(longlong *)(param_1 + 0x40);
  }
  if (DAT_1834b2f44 == '\0') {
    FUN_180315380(TI_UnityEngine.Vector2);
    DAT_1834b2f44 = '\x01';
  }
  auStack_18[0] = **(undefined8 **)(TI_UnityEngine.Vector2 + 0xb8);
  if (DAT_1834c0c38 == '\0') {
    FUN_180315380(MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Texture2D>,auStack_18[0],0,0);
    DAT_1834c0c38 = '\x01';
  }
  if (*(longlong *)(MR_UnityEngine.Object.MarshalledUnityObject.Marshal<UnityEngine.Texture2D> + 0x38) == 0) {
    FUN_180312fc0();
  }
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  if (_DAT_1834c0c58 == (code *)0x0) {
    _DAT_1834c0c58 = (code *)FUN_180315630(&UNK_18293ecb0);
  }
  (*_DAT_1834c0c58)(uVar2,auStack_18,0);
  return;
}

