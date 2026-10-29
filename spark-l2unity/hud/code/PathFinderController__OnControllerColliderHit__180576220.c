// PathFinderController__OnControllerColliderHit__180576220 @ 0x180576220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong PathFinderController__OnControllerColliderHit__180576220
                    (longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  if (cRam00000001834b3918 == '\0') {
    FUN_180315380(TI_ObjectData);
    cRam00000001834b3918 = '\x01';
  }
  uVar4 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x60));
  uVar5 = func_0x000182427a70(*(undefined4 *)(param_1 + 0x60));
  if ((param_2 != 0) &&
     (lVar7 = UnityEngine_ControllerColliderHit__get_gameObject(param_2), lVar7 != 0)) {
    uVar6 = UnityEngine_GameObject__get_layer(lVar7);
    uVar10 = (ulonglong)(uVar6 & 0x1f);
    if (uVar4 == (uVar5 | 1 << (uVar6 & 0x1f))) {
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    else {
      uVar8 = UnityEngine_ControllerColliderHit__get_gameObject(param_2);
      uVar9 = func_0x000180315580(TI_ObjectData);
      uVar10 = ObjectData___ctor(uVar9,uVar8,0);
      *(undefined8 *)(param_1 + 0x58) = uVar9;
    }
    if (_DAT_1834c7d58 != 0) {
      uVar4 = (uint)(param_1 + 0x58U >> 0xc);
      puVar1 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
      do {
        uVar2 = *puVar1;
        LOCK();
        uVar10 = *puVar1;
        bVar11 = uVar2 == uVar10;
        if (bVar11) {
          *puVar1 = uVar2 | 1L << (uVar4 & 0x3f);
          uVar10 = uVar2;
        }
        UNLOCK();
      } while (!bVar11);
    }
    return uVar10;
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar10 = (*pcVar3)();
  return uVar10;
}

