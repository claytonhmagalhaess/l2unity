// SparkEnchantWindow__Scroll__180603460 @ 0x180603460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * SparkEnchantWindow__Scroll__180603460(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  undefined *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  
  if (cRam00000001834b3bd7 == '\0') {
    puStack_30 = &UNK_18060347e;
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3bd7 = '\x01';
  }
  if (*(int *)(param_1 + 0xf0) != 0) {
    if (DAT_1834b3102 == '\0') {
      puStack_30 = &UNK_1806034ac;
      FUN_180315380(TI_PlayerInventory);
      DAT_1834b3102 = '\x01';
    }
    uVar2 = **(undefined8 **)(TI_PlayerInventory + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      puStack_30 = &UNK_1806034d9;
      func_0x000180315660();
    }
    puStack_30 = &UNK_1806034e6;
    cVar5 = UnityEngine_Object__op_Equality(uVar2,0,0);
    if (cVar5 == '\0') {
      if (DAT_1834b3102 == '\0') {
        puStack_30 = &UNK_180603503;
        FUN_180315380(TI_PlayerInventory);
        DAT_1834b3102 = '\x01';
      }
      lVar3 = **(longlong **)(TI_PlayerInventory + 0xb8);
      if (lVar3 != 0) {
        iVar1 = *(int *)(param_1 + 0xf0);
        if (cRam00000001834b304b == '\0') {
          FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.Dispose,iVar1,0);
          FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.MoveNext);
          FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.get_Current);
          FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator);
          cRam00000001834b304b = '\x01';
        }
        lVar3 = *(longlong *)(lVar3 + 0x28);
        if (lVar3 == 0) {
          FUN_1803155d0();
        }
        else {
          FUN_180bada40(&uStack_40,lVar3,MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator);
          uStack_28 = (undefined4)uStack_40;
          uStack_24 = uStack_40._4_4_;
          uStack_20 = (undefined4)uStack_38;
          uStack_1c = uStack_38._4_4_;
          puStack_18 = puStack_30;
          uStack_40 = 0;
          uStack_38 = &uStack_28;
          while( true ) {
            cVar5 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<ItemInstance>.MoveNext);
            puVar6 = puStack_18;
            if (cVar5 == '\0') {
              Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<ItemInstance>.Dispose);
              return (undefined *)0x0;
            }
            if (puStack_18 == (undefined *)0x0) break;
            if (*(int *)(puStack_18 + 0x1c) == iVar1) {
              Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<ItemInstance>.Dispose);
              return puVar6;
            }
          }
        }
        FUN_1803155d0();
        FUN_180311490();
        pcVar4 = (code *)swi(3);
        puVar6 = (undefined *)(*pcVar4)();
        return puVar6;
      }
      puStack_30 = &UNK_180603540;
      FUN_1803155d0();
      pcVar4 = (code *)swi(3);
      puVar6 = (undefined *)(*pcVar4)();
      return puVar6;
    }
  }
  return (undefined *)0x0;
}

