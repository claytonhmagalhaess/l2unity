// ShopWindow__ConfirmPressed__1806fbd30 @ 0x1806fbd30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ShopWindow__ConfirmPressed__1806fbd30(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
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
  undefined *puStack_30;
  
  if (cRam00000001834b40fc == '\0') {
    puStack_30 = &UNK_1806fbd4e;
    FUN_180315380(TI_ShopTab);
    cRam00000001834b40fc = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x98) == 0) ||
     (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 0x30), plVar2 == (longlong *)0x0)) {
    puStack_30 = &UNK_1806fbda7;
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(TI_ShopTab + 0x130)) ||
     (*(longlong *)
       (*(longlong *)(*plVar2 + 200) + -8 + (ulonglong)*(byte *)(TI_ShopTab + 0x130) * 8)
      != TI_ShopTab)) {
    puStack_30 = &UNK_1806fbdb0;
    FUN_1803146d0(plVar2,TI_ShopTab);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam00000001834b40ee == '\0') {
    FUN_180315380(TI_System.Action,0);
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
  lVar5 = func_0x000180315580(TI_ShopTab.<>c__DisplayClass28_0);
  lStackX_20 = lVar5;
  Gear__UpdateWeaponType__1803dadf0(lVar5,0);
  if (lVar5 != 0) {
    *(longlong **)(lVar5 + 0x18) = plVar2;
    func_0x000180314690(lVar5 + 0x18,plVar2);
    if ((plVar2[0x12] != 0) &&
       (lVar6 = FUN_180bbafe0(plVar2[0x12],1,MR_System.Collections.Generic.List<ShopSlotContainer>.get_Item), lVar6 != 0)) {
      uVar10 = *(undefined8 *)(lVar6 + 0x50);
      uVar7 = func_0x000180315580(TI_System.Collections.Generic.List<Product>);
      FUN_181656c00(uVar7,uVar10,MR_System.Collections.Generic.List<Product>..ctor);
      *(undefined8 *)(lVar5 + 0x28) = uVar7;
      func_0x000180314690(lVar5 + 0x28,uVar7);
      if (*(longlong *)(lVar5 + 0x28) != 0) {
        if (*(int *)(*(longlong *)(lVar5 + 0x28) + 0x18) != 0) {
          if (DAT_1834b30fd == '\0') {
            FUN_180315380(TI_L2ConfirmWindow);
            DAT_1834b30fd = '\x01';
          }
          uVar10 = **(undefined8 **)(TI_L2ConfirmWindow + 0xb8);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar4 = UnityEngine_Object__op_Equality(uVar10,0,0);
          if (cVar4 == '\0') {
            if (*(longlong *)(lVar5 + 0x28) != 0) {
              iVar11 = 0;
              aiStackX_18[0] = 0;
              FUN_180bada40(&uStack_60,*(longlong *)(lVar5 + 0x28),MR_System.Collections.Generic.List<Product>.GetEnumerator);
              uStack_48 = (undefined4)uStack_60;
              uStack_44 = uStack_60._4_4_;
              uStack_40 = (undefined4)uStack_58;
              uStack_3c = uStack_58._4_4_;
              lStack_38 = lStack_50;
              uStack_60 = 0;
              uStack_58 = &uStack_48;
              while (cVar4 = FUN_1812fa7e0(&uStack_48,MR_System.Collections.Generic.List<Product>.MoveNext), cVar4 != '\0') {
                if (lStack_38 == 0) goto code_r0x0001806fb8ac;
                iVar11 = iVar11 + *(int *)(lStack_38 + 0x1c);
                aiStackX_18[0] = iVar11;
              }
              Gear__UpdateWeaponType__1803dadf0(&uStack_48,MR_System.Collections.Generic.List<Product>.Dispose);
              iVar1 = *(int *)((longlong)plVar2 + 0x8c);
              *(bool *)(lVar5 + 0x20) = iVar1 == 0;
              uVar10 = LIT_"'{0} {1:n0} item(s) for {2:n0} Adena?'";
              uVar7 = LIT_"'Buy'";
              if (iVar1 != 0) {
                uVar7 = LIT_"'Sell'";
              }
              aiStackX_18[0] = iVar11;
              uVar8 = func_0x000180314670(_DAT_1834c6268,aiStackX_18);
              if ((plVar2[0x12] == 0) ||
                 (lVar6 = FUN_180bbafe0(plVar2[0x12],1,MR_System.Collections.Generic.List<ShopSlotContainer>.get_Item), lVar6 == 0)) {
                FUN_1803155d0();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              lStackX_20 = CONCAT44(lStackX_20._4_4_,*(undefined4 *)(lVar6 + 0x6c));
              uVar9 = func_0x000180314670(_DAT_1834c6268,&lStackX_20);
              uVar10 = System_String__Format(uVar10,uVar7,uVar8,uVar9,0);
              *(undefined4 *)(lVar5 + 0x24) = *(undefined4 *)((longlong)plVar2 + 0x84);
              *(int *)(lVar5 + 0x10) = (int)plVar2[0x11];
              if (DAT_1834b30fd == '\0') {
                FUN_180315380(TI_L2ConfirmWindow);
                DAT_1834b30fd = '\x01';
              }
              lVar6 = **(longlong **)(TI_L2ConfirmWindow + 0xb8);
              uVar7 = func_0x000180315580(TI_System.Action);
              FUN_1816a9c60(uVar7,lVar5,MD_ShopTab.__c__DisplayClass28_0._Submit_b__0,0);
              if (*(int *)(TI_ShopTab.<>c + 0xe4) == 0) {
                func_0x000180315660();
              }
              lVar5 = *(longlong *)(*(longlong *)(TI_ShopTab.<>c + 0xb8) + 0x10);
              if (lVar5 == 0) {
                if (*(int *)(TI_ShopTab.<>c + 0xe4) == 0) {
                  func_0x000180315660();
                }
                uVar8 = **(undefined8 **)(TI_ShopTab.<>c + 0xb8);
                lVar5 = func_0x000180315580(TI_System.Action);
                FUN_1816a9c60(lVar5,uVar8,MD_ShopTab.__c._Submit_b__28_1,0);
                *(longlong *)(*(longlong *)(TI_ShopTab.<>c + 0xb8) + 0x10) = lVar5;
                func_0x000180314690(*(longlong *)(TI_ShopTab.<>c + 0xb8) + 0x10,lVar5);
              }
              if (lVar6 != 0) {
                L2ConfirmWindow__ShowWindow__180770df0(lVar6,uVar10,uVar7,lVar5,0);
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

