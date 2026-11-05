// LoginCameraManager__UpdateListenerPosition__180574ff0 @ 0x180574ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong LoginCameraManager__UpdateListenerPosition__180574ff0(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined1 auStack_18 [16];
  
  if (cRam00000001834b301e == '\0') {
    FUN_180315380(TI_ThirdPersonListener);
    cRam00000001834b301e = '\x01';
  }
  if (**(longlong **)(TI_ThirdPersonListener + 0xb8) != 0) {
    lVar4 = UnityEngine_Component__get_transform(**(longlong **)(TI_ThirdPersonListener + 0xb8),0);
    if (((*(longlong *)(param_1 + 0x30) != 0) &&
        (lVar5 = UnityEngine_Component__get_transform(*(longlong *)(param_1 + 0x30),0), lVar5 != 0))
       && (puVar6 = (undefined8 *)UnityEngine_Transform__get_position(auStack_18,lVar5,0),
          lVar4 != 0)) {
      uStack_28 = *puVar6;
      uStack_20 = *(undefined4 *)(puVar6 + 1);
      UnityEngine_Transform__set_position(lVar4,&uStack_28,0);
      if (cRam00000001834b301e == '\0') {
        FUN_180315380(TI_ThirdPersonListener);
        cRam00000001834b301e = '\x01';
      }
      if (*(longlong *)(param_1 + 0x30) != 0) {
        lVar4 = **(longlong **)(TI_ThirdPersonListener + 0xb8);
        uVar7 = UnityEngine_Component__get_gameObject(*(longlong *)(param_1 + 0x30),0);
        if (lVar4 != 0) {
          *(ulonglong *)(lVar4 + 0x28) = uVar7;
          if (_DAT_1834c7d58 != 0) {
            uVar8 = (uint)(lVar4 + 0x28U >> 0xc);
            puVar1 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
            do {
              uVar2 = *puVar1;
              LOCK();
              uVar7 = *puVar1;
              bVar9 = uVar2 == uVar7;
              if (bVar9) {
                *puVar1 = uVar2 | 1L << (uVar8 & 0x3f);
                uVar7 = uVar2;
              }
              UNLOCK();
            } while (!bVar9);
          }
          return uVar7;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  uVar7 = (*pcVar3)();
  return uVar7;
}

