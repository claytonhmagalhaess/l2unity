// ShopTab__Submit__1806fb400 @ 0x1806fb400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ShopTab__Submit__1806fb400(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int aiStackX_18 [2];
  longlong lStackX_20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong lStack_38;
  
  if (cRam00000001834b40ee == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(MR_System.Collections.Generic.List<Product>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<Product>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<Product>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<Product>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<Product>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<Product>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<ShopSlotContainer>.get_Item);
    FUN_180315380(TI_System.Collections.Generic.List<Product>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MD_ShopTab.__c._Submit_b__28_1);
    FUN_180315380(MD_ShopTab.__c__DisplayClass28_0._Submit_b__0);
    FUN_180315380(TI_ShopTab.<>c__DisplayClass28_0);
    FUN_180315380(TI_ShopTab.<>c);
    FUN_180315380(LIT_"'Buy'");
    FUN_180315380(LIT_"'Sell'");
    FUN_180315380(LIT_"'{0} {1:n0} item(s) for {2:n0} Adena?'");
    cRam00000001834b40ee = '\x01';
  }
  lVar4 = func_0x000180315580(TI_ShopTab.<>c__DisplayClass28_0);
  lStackX_20 = lVar4;
  Gear__UpdateWeaponType__1803dadf0(lVar4,0);
  if (lVar4 != 0) {
    *(longlong *)(lVar4 + 0x18) = param_1;
    func_0x000180314690(lVar4 + 0x18,param_1);
    if ((*(longlong *)(param_1 + 0x90) != 0) &&
       (lVar5 = FUN_180bbafe0(*(longlong *)(param_1 + 0x90),1,MR_System.Collections.Generic.List<ShopSlotContainer>.get_Item), lVar5 != 0)) {
      uVar9 = *(undefined8 *)(lVar5 + 0x50);
      uVar6 = func_0x000180315580(TI_System.Collections.Generic.List<Product>);
      FUN_181656c00(uVar6,uVar9,MR_System.Collections.Generic.List<Product>..ctor);
      *(undefined8 *)(lVar4 + 0x28) = uVar6;
      func_0x000180314690(lVar4 + 0x28,uVar6);
      if (*(longlong *)(lVar4 + 0x28) != 0) {
        if (*(int *)(*(longlong *)(lVar4 + 0x28) + 0x18) != 0) {
          if (DAT_1834b30fd == '\0') {
            FUN_180315380(TI_L2ConfirmWindow);
            DAT_1834b30fd = '\x01';
          }
          uVar9 = **(undefined8 **)(TI_L2ConfirmWindow + 0xb8);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar3 = UnityEngine_Object__op_Equality(uVar9,0,0);
          if (cVar3 == '\0') {
            if (*(longlong *)(lVar4 + 0x28) != 0) {
              iVar10 = 0;
              aiStackX_18[0] = 0;
              FUN_180bada40(&uStack_60,*(longlong *)(lVar4 + 0x28),MR_System.Collections.Generic.List<Product>.GetEnumerator);
              uStack_48 = (undefined4)uStack_60;
              uStack_44 = uStack_60._4_4_;
              uStack_40 = (undefined4)uStack_58;
              uStack_3c = uStack_58._4_4_;
              lStack_38 = lStack_50;
              uStack_60 = 0;
              uStack_58 = &uStack_48;
              while (cVar3 = FUN_1812fa7e0(&uStack_48,MR_System.Collections.Generic.List<Product>.MoveNext), cVar3 != '\0') {
                if (lStack_38 == 0) goto code_r0x0001806fb8ac;
                iVar10 = iVar10 + *(int *)(lStack_38 + 0x1c);
                aiStackX_18[0] = iVar10;
              }
              Gear__UpdateWeaponType__1803dadf0(&uStack_48,MR_System.Collections.Generic.List<Product>.Dispose);
              iVar1 = *(int *)(param_1 + 0x8c);
              *(bool *)(lVar4 + 0x20) = iVar1 == 0;
              uVar9 = LIT_"'{0} {1:n0} item(s) for {2:n0} Adena?'";
              uVar6 = LIT_"'Buy'";
              if (iVar1 != 0) {
                uVar6 = LIT_"'Sell'";
              }
              aiStackX_18[0] = iVar10;
              uVar7 = func_0x000180314670(_DAT_1834c6268,aiStackX_18);
              if ((*(longlong *)(param_1 + 0x90) == 0) ||
                 (lVar5 = FUN_180bbafe0(*(longlong *)(param_1 + 0x90),1,MR_System.Collections.Generic.List<ShopSlotContainer>.get_Item),
                 lVar5 == 0)) {
                FUN_1803155d0();
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              lStackX_20 = CONCAT44(lStackX_20._4_4_,*(undefined4 *)(lVar5 + 0x6c));
              uVar8 = func_0x000180314670(_DAT_1834c6268,&lStackX_20);
              uVar9 = System_String__Format(uVar9,uVar6,uVar7,uVar8,0);
              *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(param_1 + 0x84);
              *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(param_1 + 0x88);
              if (DAT_1834b30fd == '\0') {
                FUN_180315380(TI_L2ConfirmWindow);
                DAT_1834b30fd = '\x01';
              }
              lVar5 = **(longlong **)(TI_L2ConfirmWindow + 0xb8);
              uVar6 = func_0x000180315580(TI_System.Action);
              FUN_1816a9c60(uVar6,lVar4,MD_ShopTab.__c__DisplayClass28_0._Submit_b__0,0);
              if (*(int *)(TI_ShopTab.<>c + 0xe4) == 0) {
                func_0x000180315660();
              }
              lVar4 = *(longlong *)(*(longlong *)(TI_ShopTab.<>c + 0xb8) + 0x10);
              if (lVar4 == 0) {
                if (*(int *)(TI_ShopTab.<>c + 0xe4) == 0) {
                  func_0x000180315660();
                }
                uVar7 = **(undefined8 **)(TI_ShopTab.<>c + 0xb8);
                lVar4 = func_0x000180315580(TI_System.Action);
                FUN_1816a9c60(lVar4,uVar7,MD_ShopTab.__c._Submit_b__28_1,0);
                *(longlong *)(*(longlong *)(TI_ShopTab.<>c + 0xb8) + 0x10) = lVar4;
                func_0x000180314690(*(longlong *)(TI_ShopTab.<>c + 0xb8) + 0x10,lVar4);
              }
              if (lVar5 != 0) {
                L2ConfirmWindow__ShowWindow__180770df0(lVar5,uVar9,uVar6,lVar4,0);
                return;
              }
            }
            goto code_r0x0001806fb8a6;
          }
        }
        return;
      }
    }
  }
code_r0x0001806fb8a6:
  FUN_1803155d0();
code_r0x0001806fb8ac:
  FUN_1803155d0();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

