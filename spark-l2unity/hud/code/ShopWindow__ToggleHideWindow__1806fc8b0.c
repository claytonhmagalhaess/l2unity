// ShopWindow__ToggleHideWindow__1806fc8b0 @ 0x1806fc8b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ShopWindow__ToggleHideWindow__1806fc8b0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  float fVar5;
  
  if ((char)param_1[7] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001806fc8ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c8))(param_1,0,*(undefined8 *)(*param_1 + 0x1d0));
    return;
  }
  if (cRam00000001834b30fc == '\0') {
    FUN_180315380(TI_InventoryWindow);
    cRam00000001834b30fc = '\x01';
  }
  lVar2 = **(longlong **)(TI_InventoryWindow + 0xb8);
  if (lVar2 == 0) {
    return;
  }
  if (cRam00000001834b3ce0 == '\0') {
    FUN_180315380(TI_UnityEngine.Object,0);
    cRam00000001834b3ce0 = '\x01';
  }
  fVar5 = (float)FUN_1824366b0(0);
  if (((*(char *)(lVar2 + 0x13c) == '\0') || (5.0 <= fVar5 - *(float *)(lVar2 + 0x138))) &&
     (2.0 <= fVar5 - *(float *)(lVar2 + 0x138))) {
    if (DAT_1834b30fb == '\0') {
      FUN_180315380(TI_GameClient);
      DAT_1834b30fb = '\x01';
    }
    uVar1 = **(undefined8 **)(TI_GameClient + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Equality(uVar1,0,0);
    if (cVar4 == '\0') {
      if (DAT_1834b30fb == '\0') {
        FUN_180315380(TI_GameClient);
        DAT_1834b30fb = '\x01';
      }
      if (**(longlong **)(TI_GameClient + 0xb8) == 0) {
code_r0x0001806230c0:
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8) != 0) {
        *(float *)(lVar2 + 0x138) = fVar5;
        *(undefined1 *)(lVar2 + 0x13c) = 1;
        if (DAT_1834b30fb == '\0') {
          FUN_180315380(TI_GameClient);
          DAT_1834b30fb = '\x01';
        }
        if ((**(longlong **)(TI_GameClient + 0xb8) == 0) ||
           (lVar2 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8), lVar2 == 0))
        goto code_r0x0001806230c0;
        GameClientPacketHandler__SendRequestOpenInventory(lVar2,0);
      }
    }
  }
  return;
}

