// InventorySlot__UseItem__18061ff40 @ 0x18061ff40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InventorySlot__UseItem__18061ff40(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    return;
  }
  if (DAT_1834b3102 == '\0') {
    FUN_180315380(TI_PlayerInventory);
    DAT_1834b3102 = '\x01';
  }
  lVar8 = **(longlong **)(TI_PlayerInventory + 0xb8);
  if (lVar8 == 0) {
    FUN_1803155d0();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0xa0);
  if (DAT_1834b304f == '\0') {
    FUN_180315380(TI_System.Action,uVar1,0);
    FUN_180315380(TI_EtcItemgrp);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MD_PlayerInventory.__c._UseItem_b__34_1);
    FUN_180315380(MD_PlayerInventory.__c__DisplayClass34_0._UseItem_b__0);
    FUN_180315380(TI_PlayerInventory.<>c__DisplayClass34_0);
    FUN_180315380(TI_PlayerInventory.<>c);
    FUN_180315380(LIT_"'recipe'");
    FUN_180315380(LIT_"' in your recipe book?'");
    FUN_180315380(LIT_"'Register '");
    DAT_1834b304f = '\x01';
  }
  lVar7 = func_0x000180315580(TI_PlayerInventory.<>c__DisplayClass34_0);
  Gear__UpdateWeaponType__1803dadf0(lVar7,0);
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x10) = uVar1;
    lVar8 = PlayerInventory__GetItemByObjectId(lVar8,uVar1,0);
    if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x10) != 0)) {
      plVar2 = *(longlong **)(*(longlong *)(lVar8 + 0x10) + 0x30);
      if (plVar2 == (longlong *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(TI_EtcItemgrp + 0x130)) ||
           (*(longlong *)
             (*(longlong *)(*plVar2 + 200) + -8 + (ulonglong)*(byte *)(TI_EtcItemgrp + 0x130) * 8)
            != TI_EtcItemgrp)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        plVar12 = (longlong *)0x0;
        if (bVar5) {
          plVar12 = plVar2;
        }
      }
      if ((plVar12 != (longlong *)0x0) && (plVar12[0xc] != 0)) {
        uVar9 = System_String__ToLowerInvariant(plVar12[0xc],0);
        cVar6 = func_0x0001817058a0(uVar9,LIT_"'recipe'",0);
        if (cVar6 != '\0') {
          if (DAT_1834b30fd == '\0') {
            FUN_180315380(TI_L2ConfirmWindow);
            DAT_1834b30fd = '\x01';
          }
          uVar9 = **(undefined8 **)(TI_L2ConfirmWindow + 0xb8);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
          if (cVar6 != '\0') {
            lVar10 = FUN_180458300(0);
            uVar9 = SparkUI__NomeDoItem(*(undefined4 *)(lVar8 + 0x1c),0);
            uVar9 = System_String__Concat(LIT_"'Register '",uVar9,LIT_"' in your recipe book?'",0);
            uVar11 = func_0x000180315580(TI_System.Action);
            FUN_1816a9c60(uVar11,lVar7,MD_PlayerInventory.__c__DisplayClass34_0._UseItem_b__0,0);
            if (*(int *)(TI_PlayerInventory.<>c + 0xe4) == 0) {
              func_0x000180315660();
            }
            lVar8 = *(longlong *)(*(longlong *)(TI_PlayerInventory.<>c + 0xb8) + 0x58);
            if (lVar8 == 0) {
              if (*(int *)(TI_PlayerInventory.<>c + 0xe4) == 0) {
                func_0x000180315660();
              }
              uVar3 = **(undefined8 **)(TI_PlayerInventory.<>c + 0xb8);
              lVar8 = func_0x000180315580(TI_System.Action);
              FUN_1816a9c60(lVar8,uVar3,MD_PlayerInventory.__c._UseItem_b__34_1,0);
              *(longlong *)(*(longlong *)(TI_PlayerInventory.<>c + 0xb8) + 0x58) = lVar8;
              func_0x000180314690(*(longlong *)(TI_PlayerInventory.<>c + 0xb8) + 0x58,lVar8);
            }
            if (lVar10 != 0) {
              L2ConfirmWindow__ShowWindow__180770df0(lVar10,uVar9,uVar11,lVar8,0);
              return;
            }
            goto LAB_18046a9af;
          }
        }
      }
    }
    if (DAT_1834b30fb == '\0') {
      FUN_180315380(TI_GameClient);
      DAT_1834b30fb = '\x01';
    }
    if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
       (lVar8 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8), lVar8 != 0)) {
      GameClientPacketHandler__UseItem(lVar8,*(undefined4 *)(lVar7 + 0x10),0);
      return;
    }
  }
LAB_18046a9af:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

