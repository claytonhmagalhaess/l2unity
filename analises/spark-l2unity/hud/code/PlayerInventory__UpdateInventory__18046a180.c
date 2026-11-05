// PlayerInventory__UpdateInventory__18046a180 @ 0x18046a180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayerInventory__UpdateInventory__18046a180(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  
  if (cRam00000001834b3046 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.Remove);
    FUN_180315380(TI_PlayerInventory);
    FUN_180315380(TI_SparkSessao);
    cRam00000001834b3046 = '\x01';
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(TI_SparkSessao + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar5 = SparkSessao__Antes(uVar5,param_2);
  if (cRam00000001834b3048 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3048 = '\x01';
  }
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      if (cRam00000001834b30fc == '\0') {
        FUN_180315380(TI_InventoryWindow);
        cRam00000001834b30fc = '\x01';
      }
      uVar1 = **(undefined8 **)(TI_InventoryWindow + 0xb8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = UnityEngine_Object__op_Equality(uVar1,0);
      if (cVar4 == '\0') {
        for (uVar7 = 0; (int)uVar7 < *(int *)(param_2 + 0x18); uVar7 = uVar7 + 1) {
          if (*(uint *)(param_2 + 0x18) <= uVar7) goto code_r0x00018046a65f;
          lVar2 = *(longlong *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8);
          if (lVar2 == 0) goto code_r0x00018046a659;
          if (((((*(int *)(lVar2 + 0x40) != 2) || (*(int *)(lVar2 + 0x28) < 1)) ||
               (lVar6 = PlayerInventory__GetItemByObjectId(param_1,*(undefined4 *)(lVar2 + 0x18)),
               lVar6 == 0)) ||
              ((*(int *)(lVar6 + 0x1c) != *(int *)(lVar2 + 0x1c) ||
               (*(char *)(lVar6 + 0x2e) != *(char *)(lVar2 + 0x2e))))) ||
             ((*(char *)(lVar6 + 0x20) != *(char *)(lVar2 + 0x20) ||
              (*(int *)(lVar6 + 0x34) != *(int *)(lVar2 + 0x34))))) goto code_r0x00018046a495;
        }
        uVar7 = 0;
        while( true ) {
          if (*(int *)(param_2 + 0x18) <= (int)uVar7) {
            uVar1 = *(undefined8 *)(param_1 + 0x28);
            if (*(int *)(TI_SparkSessao + 0xe4) == 0) {
              func_0x000180315660();
            }
            SparkSessao__Depois(uVar5,uVar1,param_2,0);
            return;
          }
          if (*(uint *)(param_2 + 0x18) <= uVar7) break;
          lVar2 = *(longlong *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8);
          if ((lVar2 == 0) ||
             (lVar6 = PlayerInventory__GetItemByObjectId(param_1,*(undefined4 *)(lVar2 + 0x18),0),
             lVar6 == 0)) goto code_r0x00018046a659;
          if ((*(char *)(lVar2 + 0x2e) != '\0') || (*(char *)(lVar6 + 0x2e) != '\0')) {
            *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(lVar2 + 0x24);
          }
          *(undefined1 *)(lVar6 + 0x20) = *(undefined1 *)(lVar2 + 0x20);
          *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(lVar2 + 0x28);
          *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
          *(undefined4 *)(lVar6 + 0x34) = *(undefined4 *)(lVar2 + 0x34);
          *(undefined4 *)(lVar6 + 0x44) = *(undefined4 *)(lVar2 + 0x44);
          if (*(char *)(lVar6 + 0x2e) == '\0') {
            if (*(char *)(lVar2 + 0x2e) != '\0') goto code_r0x00018046a3b8;
            if (*(char *)(lVar6 + 0x2e) != '\0') goto code_r0x00018046a3b2;
          }
          else {
code_r0x00018046a3b2:
            if (*(char *)(lVar2 + 0x2e) == '\0') {
code_r0x00018046a3b8:
              ItemInstance__TocaSomDeEquipar(lVar6,0);
            }
          }
          *(undefined1 *)(lVar6 + 0x2e) = *(undefined1 *)(lVar2 + 0x2e);
          *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(lVar2 + 0x18);
          *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)(lVar2 + 0x30);
          if (cRam00000001834b30fc == '\0') {
            FUN_180315380(TI_InventoryWindow);
            cRam00000001834b30fc = '\x01';
          }
          if (**(longlong **)(TI_InventoryWindow + 0xb8) == 0) goto code_r0x00018046a659;
          InventoryWindow__AtualizaItem(**(longlong **)(TI_InventoryWindow + 0xb8),lVar6);
          lVar2 = *(longlong *)(*(longlong *)(TI_PlayerInventory + 0xb8) + 8);
          if (lVar2 != 0) {
            (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined4 *)(lVar6 + 0x18))
            ;
          }
          uVar7 = uVar7 + 1;
        }
code_r0x00018046a65f:
        FUN_1803155c0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (param_2 != 0) {
code_r0x00018046a495:
      uVar7 = 0;
      while ((int)uVar7 < *(int *)(param_2 + 0x18)) {
        if (*(uint *)(param_2 + 0x18) <= uVar7) goto code_r0x00018046a65f;
        lVar2 = *(longlong *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8);
        if (lVar2 == 0) goto code_r0x00018046a659;
        if (*(int *)(lVar2 + 0x40) == 1) {
code_r0x00018046a564:
          if (*(char *)(lVar2 + 0x2e) == '\0') {
            *(undefined4 *)(lVar2 + 0x24) = 0xffffffff;
          }
          if (*(longlong *)(param_1 + 0x28) == 0) goto code_r0x00018046a659;
          FUN_180002eb0();
code_r0x00018046a58d:
          uVar7 = uVar7 + 1;
        }
        else if (*(int *)(lVar2 + 0x40) == 2) {
          lVar6 = PlayerInventory__GetItemByObjectId(param_1,*(undefined4 *)(lVar2 + 0x18));
          if (lVar6 == 0) goto code_r0x00018046a564;
          if (*(char *)(lVar6 + 0x2e) == '\0') {
            ItemInstance__Update(lVar6);
            uVar7 = uVar7 + 1;
          }
          else {
            cVar4 = *(char *)(lVar2 + 0x2e);
            ItemInstance__Update(lVar6);
            if (cVar4 != '\0') goto code_r0x00018046a58d;
            uVar7 = uVar7 + 1;
            *(undefined4 *)(lVar6 + 0x24) = 0xffffffff;
          }
        }
        else {
          if (*(int *)(lVar2 + 0x40) != 3) goto code_r0x00018046a58d;
          PlayerInventory__GetItemByObjectId(param_1,*(undefined4 *)(lVar2 + 0x18),0);
          if (*(longlong *)(param_1 + 0x28) == 0) goto code_r0x00018046a659;
          FUN_18164eb60();
          uVar7 = uVar7 + 1;
        }
      }
      PlayerInventory__ArrumaPosicoes(param_1,0);
      if (cRam00000001834b30fc == '\0') {
        FUN_180315380(TI_InventoryWindow);
        cRam00000001834b30fc = '\x01';
      }
      if (**(longlong **)(TI_InventoryWindow + 0xb8) != 0) {
        InventoryWindow__UpdateItemList__180623c10
                  (**(longlong **)(TI_InventoryWindow + 0xb8),*(undefined8 *)(param_1 + 0x28),0);
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        if (*(int *)(TI_SparkSessao + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkSessao__Depois(uVar5,uVar1,param_2,0);
        uVar7 = 0;
        do {
          if (*(int *)(param_2 + 0x18) <= (int)uVar7) {
            return;
          }
          if (*(uint *)(param_2 + 0x18) <= uVar7) goto code_r0x00018046a65f;
          lVar2 = *(longlong *)(*(longlong *)(TI_PlayerInventory + 0xb8) + 8);
          if (lVar2 != 0) {
            lVar6 = *(longlong *)(param_2 + 0x20 + (longlong)(int)uVar7 * 8);
            if (lVar6 == 0) break;
            (**(code **)(lVar2 + 0x18))
                      (*(undefined8 *)(lVar2 + 0x40),*(undefined4 *)(lVar6 + 0x18),
                       *(undefined8 *)(lVar2 + 0x28));
          }
          uVar7 = uVar7 + 1;
        } while( true );
      }
    }
  }
code_r0x00018046a659:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

