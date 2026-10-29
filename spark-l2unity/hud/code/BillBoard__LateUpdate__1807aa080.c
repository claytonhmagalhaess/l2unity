// BillBoard__LateUpdate__1807aa080 @ 0x1807aa080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BillBoard__LateUpdate__1807aa080(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar2 = UnityEngine_Component__get_transform(param_1,0);
    lVar3 = UnityEngine_Camera__get_main(0);
    if ((lVar3 != 0) && (lVar3 = UnityEngine_Component__get_transform(lVar3,0), lVar3 != 0)) {
      puVar4 = (undefined8 *)UnityEngine_Transform__get_position(&uStack_28,lVar3,0);
      uStack_28 = *puVar4;
      uStack_20 = *(undefined4 *)(puVar4 + 1);
      if (DAT_1834b2f2f == '\0') {
        FUN_180315380(TI_UnityEngine.Vector3);
        DAT_1834b2f2f = '\x01';
      }
      if (lVar2 != 0) {
        uStack_38 = *(undefined8 *)(*(longlong *)(TI_UnityEngine.Vector3 + 0xb8) + 0x48);
        uStack_30 = *(undefined4 *)(*(longlong *)(TI_UnityEngine.Vector3 + 0xb8) + 0x50);
        UnityEngine_Transform__LookAt(lVar2,&uStack_28,&uStack_38,0);
        return;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x20) != 1) {
      return;
    }
    lVar2 = UnityEngine_Component__get_transform(param_1,0);
    lVar3 = UnityEngine_Camera__get_main(0);
    if (((lVar3 != 0) && (lVar3 = UnityEngine_Component__get_transform(lVar3,0), lVar3 != 0)) &&
       (puVar4 = (undefined8 *)UnityEngine_Transform__get_forward(&uStack_38,lVar3,0), lVar2 != 0))
    {
      uStack_28 = *puVar4;
      uStack_20 = *(undefined4 *)(puVar4 + 1);
      UnityEngine_Transform__set_forward(lVar2,&uStack_28,0);
      return;
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

