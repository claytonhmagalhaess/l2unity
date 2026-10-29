// ProductSlot__SwapBasket__1806f9290 @ 0x1806f9290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ProductSlot__SwapBasket__1806f9290(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 auStackX_8 [2];
  
  if (cRam00000001834b40dc == '\0') {
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
    FUN_180315380(MD_ProductSlot._SwapBasket_b__12_0);
    FUN_180315380(TI_SMParam__);
    FUN_180315380(TI_SMParam);
    FUN_180315380(TI_ShopSlotContainer);
    FUN_180315380(TI_SystemMessage);
    FUN_180315380(MD_ProductSlot.__c._SwapBasket_b__12_1);
    FUN_180315380(TI_ProductSlot.<>c);
    cRam00000001834b40dc = '\x01';
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    if (*(char *)(*(longlong *)(param_1 + 0xb8) + 0x10) == '\x04') {
      plVar4 = (longlong *)func_0x000180314710(TI_SMParam__,1);
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        auStackX_8[0] = *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x18);
        uVar5 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
        lVar6 = func_0x000180315580(TI_SMParam);
        SMParam___ctor(lVar6,3,uVar5,0);
        if (plVar4 != (longlong *)0x0) {
          if ((lVar6 != 0) &&
             (lVar7 = func_0x0001803146b0(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0)) {
            uVar5 = func_0x000180314f80();
            FUN_180315590(uVar5,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((int)plVar4[3] == 0) {
            FUN_1803155c0();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          plVar4[4] = lVar6;
          func_0x000180314690(plVar4 + 4,lVar6);
          lVar6 = SystemMessageTable__get_Instance(0);
          if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x10) != 0)) {
            uVar5 = FUN_1812035e0(*(longlong *)(lVar6 + 0x10),0x48,MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
            uVar8 = func_0x000180315580(TI_SystemMessage);
            AllianceMessage___ctor(uVar8,plVar4,uVar5,0);
            if (cRam00000001834b3dea == '\0') {
              FUN_180315380(TI_L2InputAmountWindow);
              cRam00000001834b3dea = '\x01';
            }
            if (*(longlong *)(param_1 + 0xb8) != 0) {
              uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x1c);
              lVar6 = **(longlong **)(TI_L2InputAmountWindow + 0xb8);
              uVar5 = func_0x000180315580(TI_System.Action<int>);
              FUN_180b7db20(uVar5,param_1,MD_ProductSlot._SwapBasket_b__12_0,0);
              if (*(int *)(TI_ProductSlot.<>c + 0xe4) == 0) {
                func_0x000180315660();
              }
              lVar7 = *(longlong *)(*(longlong *)(TI_ProductSlot.<>c + 0xb8) + 8);
              if (lVar7 == 0) {
                if (*(int *)(TI_ProductSlot.<>c + 0xe4) == 0) {
                  func_0x000180315660();
                }
                uVar2 = **(undefined8 **)(TI_ProductSlot.<>c + 0xb8);
                lVar7 = func_0x000180315580(TI_System.Action);
                FUN_1816a9c60(lVar7,uVar2,MD_ProductSlot.__c._SwapBasket_b__12_1,0);
                *(longlong *)(*(longlong *)(TI_ProductSlot.<>c + 0xb8) + 8) = lVar7;
                func_0x000180314690(*(longlong *)(TI_ProductSlot.<>c + 0xb8) + 8,lVar7);
              }
              if (lVar6 != 0) {
                L2InputAmountWindow__ShowWindow__1807766c0(lVar6,uVar8,uVar1,uVar5,lVar7,0);
                return;
              }
              goto code_r0x0001806f95e3;
            }
          }
        }
      }
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar4 = *(longlong **)(param_1 + 0x80);
    if (plVar4 != (longlong *)0x0) {
      if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TI_ShopSlotContainer + 0x130)) ||
         (*(longlong *)
           (*(longlong *)(*plVar4 + 200) + -8 +
           (ulonglong)*(byte *)(TI_ShopSlotContainer + 0x130) * 8) != TI_ShopSlotContainer)) {
        FUN_1803146d0(plVar4);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (plVar4[0xf] != 0) {
        ShopSlotContainer__AddToBasket(plVar4[0xf],*(undefined8 *)(param_1 + 0xb8),1,0);
        return;
      }
    }
  }
code_r0x0001806f95e3:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

