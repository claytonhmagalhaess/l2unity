// CursorManager__Reaplica__1805b0c50 @ 0x1805b0c50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CursorManager__Reaplica__1805b0c50(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 auStack_18 [2];
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  else if (iVar1 == 1) {
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  else if (iVar1 == 2) {
    lVar2 = *(longlong *)(param_1 + 0x38);
  }
  else {
    if (iVar1 != 3) {
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0x40);
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
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
  }
  if (_DAT_1834c0c58 == (code *)0x0) {
    _DAT_1834c0c58 = (code *)FUN_180315630(&UNK_18293ecb0);
  }
  (*_DAT_1834c0c58)(uVar3,auStack_18,0);
  return;
}

