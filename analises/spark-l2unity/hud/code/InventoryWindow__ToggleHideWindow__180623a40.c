// InventoryWindow__ToggleHideWindow__180623a40 @ 0x180623a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InventoryWindow__ToggleHideWindow__180623a40(longlong *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  
  lVar3 = param_1[0x28];
  iVar5 = FUN_1824364b0(0);
  if ((int)lVar3 != iVar5) {
    uVar6 = FUN_1824364b0(0);
    *(undefined4 *)(param_1 + 0x28) = uVar6;
    lVar3 = *param_1;
    if ((char)param_1[7] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000180623a8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x1c8))(param_1,0,*(undefined8 *)(lVar3 + 0x1d0));
      return;
    }
    (**(code **)(lVar3 + 0x1d8))(param_1,*(undefined8 *)(lVar3 + 0x1e0));
    if (cRam00000001834b3ce0 == '\0') {
      FUN_180315380(TI_UnityEngine.Object);
      cRam00000001834b3ce0 = '\x01';
    }
    fVar7 = (float)FUN_1824366b0(0);
    if (((*(char *)((longlong)param_1 + 0x13c) == '\0') ||
        (5.0 <= fVar7 - *(float *)(param_1 + 0x27))) && (2.0 <= fVar7 - *(float *)(param_1 + 0x27)))
    {
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
DAT_180623c04:
          FUN_1803155d0();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8) != 0) {
          *(float *)(param_1 + 0x27) = fVar7;
          *(undefined1 *)((longlong)param_1 + 0x13c) = 1;
          if (DAT_1834b30fb == '\0') {
            FUN_180315380(TI_GameClient);
            DAT_1834b30fb = '\x01';
          }
          if ((**(longlong **)(TI_GameClient + 0xb8) == 0) ||
             (lVar3 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8), lVar3 == 0))
          goto DAT_180623c04;
          GameClientPacketHandler__SendRequestOpenInventory(lVar3,0);
        }
      }
    }
  }
  return;
}

