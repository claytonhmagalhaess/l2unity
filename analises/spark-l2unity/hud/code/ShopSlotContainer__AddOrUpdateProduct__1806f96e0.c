// ShopSlotContainer__AddOrUpdateProduct__1806f96e0 @ 0x1806f96e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ShopSlotContainer__AddOrUpdateProduct__1806f96e0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int aiStackX_18 [2];
  undefined4 auStack_28 [2];
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  aiStackX_18[0] = param_3;
  if (cRam00000001834b40e1 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_System.Collections.Generic.List<Product>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<Product>.get_Item);
    FUN_180315380(TI_Product);
    FUN_180315380(TI_L2Slot.SlotType);
    FUN_180315380(TI_string__);
    FUN_180315380(LIT_"'] Add or update product: '");
    FUN_180315380(LIT_"' Qty: '");
    FUN_180315380(LIT_"'['");
    cRam00000001834b40e1 = '\x01';
  }
  lVar7 = func_0x000180314710(TI_string__,6);
  if (lVar7 == 0) {
DAT_1806f9a96:
    FUN_1803155d0();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(int *)(lVar7 + 0x18) != 0) {
    *(undefined8 *)(lVar7 + 0x20) = LIT_"'['";
    func_0x000180314690(lVar7 + 0x20);
    uStack_10 = *(undefined4 *)(param_1 + 0x58);
    uStack_20 = TI_L2Slot.SlotType;
    uStack_18 = 0xffffffffffffffff;
    uVar8 = System_Enum__ToString(&uStack_20,0);
    if (1 < *(uint *)(lVar7 + 0x18)) {
      *(undefined8 *)(lVar7 + 0x28) = uVar8;
      func_0x000180314690(lVar7 + 0x28,uVar8);
      if (2 < *(uint *)(lVar7 + 0x18)) {
        *(undefined8 *)(lVar7 + 0x30) = LIT_"'] Add or update product: '";
        func_0x000180314690(lVar7 + 0x30);
        if (param_2 == 0) goto DAT_1806f9a96;
        auStack_28[0] = *(undefined4 *)(param_2 + 0x18);
        uVar8 = System_Int32__ToString(auStack_28,0);
        if (3 < *(uint *)(lVar7 + 0x18)) {
          *(undefined8 *)(lVar7 + 0x38) = uVar8;
          func_0x000180314690(lVar7 + 0x38,uVar8);
          if (4 < *(uint *)(lVar7 + 0x18)) {
            *(undefined8 *)(lVar7 + 0x40) = LIT_"' Qty: '";
            func_0x000180314690(lVar7 + 0x40);
            uVar8 = System_Int32__ToString(aiStackX_18,0);
            if (5 < *(uint *)(lVar7 + 0x18)) {
              *(undefined8 *)(lVar7 + 0x48) = uVar8;
              func_0x000180314690(lVar7 + 0x48,uVar8);
              uVar8 = System_String__Concat(lVar7,0);
              if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
                func_0x000180315660();
              }
              UnityEngine_Debug__LogWarning(uVar8,0);
              if (aiStackX_18[0] == 0) {
                aiStackX_18[0] = 1;
              }
              iVar1 = *(int *)(param_2 + 0x18);
              if (cRam00000001834b40e3 == '\0') {
                FUN_180315380(MR_System.Collections.Generic.List<Product>.get_Count);
                FUN_180315380();
                cRam00000001834b40e3 = '\x01';
              }
              lVar7 = *(longlong *)(param_1 + 0x50);
              iVar9 = 0;
joined_r0x0001806f9901:
              if (lVar7 == 0) {
DAT_1806f9a9c:
                FUN_1803155d0();
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (iVar9 < *(int *)(lVar7 + 0x18)) {
                if ((*(longlong *)(param_1 + 0x50) == 0) ||
                   (lVar7 = FUN_180bbafe0(*(longlong *)(param_1 + 0x50),iVar9,MR_System.Collections.Generic.List<Product>.get_Item),
                   lVar7 == 0)) goto DAT_1806f9a9c;
                if (*(int *)(lVar7 + 0x18) != iVar1) {
                  lVar7 = *(longlong *)(param_1 + 0x50);
                  iVar9 = iVar9 + 1;
                  goto joined_r0x0001806f9901;
                }
                if (iVar9 == -1) goto code_r0x0001806f9a04;
                if (aiStackX_18[0] < 0) {
                  if ((*(longlong *)(param_1 + 0x50) == 0) ||
                     (lVar7 = FUN_180bbafe0(*(longlong *)(param_1 + 0x50),iVar9,MR_System.Collections.Generic.List<Product>.get_Item
                                           ), lVar7 == 0)) goto DAT_1806f9a9c;
                  if (*(int *)(lVar7 + 0x1c) + aiStackX_18[0] < 1) {
                    ShopSlotContainer__RemoveProduct(param_1,iVar9,0);
                    return;
                  }
                }
                if ((*(longlong *)(param_1 + 0x50) == 0) ||
                   (lVar7 = FUN_180bbafe0(*(longlong *)(param_1 + 0x50),iVar9,MR_System.Collections.Generic.List<Product>.get_Item),
                   lVar7 == 0)) goto DAT_1806f9a9c;
                if (*(char *)(lVar7 + 0x10) == '\x04') {
                  if ((*(longlong *)(param_1 + 0x50) != 0) &&
                     (lVar7 = FUN_180bbafe0(*(longlong *)(param_1 + 0x50),iVar9,MR_System.Collections.Generic.List<Product>.get_Item
                                           ), lVar7 != 0)) {
                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + aiStackX_18[0];
                    return;
                  }
                  goto DAT_1806f9a9c;
                }
              }
code_r0x0001806f9a04:
              lVar7 = func_0x000180315580(TI_Product);
              Product___ctor(lVar7,param_2,0);
              if (lVar7 != 0) {
                *(int *)(lVar7 + 0x1c) = aiStackX_18[0];
                lVar6 = MR_System.Collections.Generic.List<Product>.Add;
                lVar3 = *(longlong *)(param_1 + 0x50);
                if (lVar3 != 0) {
                  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                  lVar4 = *(longlong *)(lVar3 + 0x10);
                  if (lVar4 != 0) {
                    uVar2 = *(uint *)(lVar3 + 0x18);
                    if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                      *(uint *)(lVar3 + 0x18) = uVar2 + 1;
                      if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                        FUN_1803155c0();
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      *(longlong *)(lVar4 + 0x20 + (longlong)(int)uVar2 * 8) = lVar7;
                      func_0x000180314690(lVar4 + 0x20 + (longlong)(int)uVar2 * 8,lVar7);
                    }
                    else {
                      FUN_181645af0(lVar3,lVar7,
                                    *(undefined8 *)
                                     (*(longlong *)(*(longlong *)(lVar6 + 0x20) + 0xc0) + 0x70));
                    }
                    return;
                  }
                }
              }
              goto DAT_1806f9a9c;
            }
          }
        }
      }
    }
  }
  FUN_1803155c0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

