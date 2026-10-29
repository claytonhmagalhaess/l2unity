// SparkMacros__ItemPeloNome__180474c10 @ 0x180474c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkMacros__ItemPeloNome__180474c10(undefined8 param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong lStack_38;
  
  if (cRam00000001834b3085 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkMacros);
    cRam00000001834b3085 = '\x01';
  }
  cVar3 = func_0x000181707e50(param_1,0);
  if (cVar3 == '\0') {
    if (DAT_1834b3102 == '\0') {
      FUN_180315380(TI_PlayerInventory);
      DAT_1834b3102 = '\x01';
    }
    uVar6 = **(undefined8 **)(TI_PlayerInventory + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Equality(uVar6,0,0);
    if (cVar3 == '\0') {
      if (DAT_1834b3102 == '\0') {
        FUN_180315380(TI_PlayerInventory);
        DAT_1834b3102 = '\x01';
      }
      if (**(longlong **)(TI_PlayerInventory + 0xb8) == 0) {
code_r0x000180474ee5:
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        lVar5 = (*pcVar2)();
        return lVar5;
      }
      if (*(longlong *)(**(longlong **)(TI_PlayerInventory + 0xb8) + 0x28) != 0) {
        if (DAT_1834b3102 == '\0') {
          FUN_180315380(TI_PlayerInventory);
          DAT_1834b3102 = '\x01';
        }
        if ((**(longlong **)(TI_PlayerInventory + 0xb8) == 0) ||
           (lVar5 = *(longlong *)(**(longlong **)(TI_PlayerInventory + 0xb8) + 0x28), lVar5 == 0))
        goto code_r0x000180474ee5;
        FUN_180bada40(&uStack_60,lVar5,MR_System.Collections.Generic.List<ItemInstance>.GetEnumerator);
        uStack_48 = (undefined4)uStack_60;
        uStack_44 = uStack_60._4_4_;
        uStack_40 = (undefined4)uStack_58;
        uStack_3c = uStack_58._4_4_;
        lStack_38 = lStack_50;
        uStack_60 = 0;
        uStack_58 = &uStack_48;
        while( true ) {
          cVar3 = FUN_1812fa7e0(&uStack_48,MR_System.Collections.Generic.List<ItemInstance>.MoveNext);
          lVar5 = lStack_38;
          if (cVar3 == '\0') break;
          if (lStack_38 == 0) {
code_r0x000180474ed9:
            FUN_1803155d0();
            FUN_180311490();
            pcVar2 = (code *)swi(3);
            lVar5 = (*pcVar2)();
            return lVar5;
          }
          uVar1 = *(undefined4 *)(lStack_38 + 0x1c);
          if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (cRam00000001834b3084 == '\0') {
            FUN_180315380(TI_ItemTable);
            cRam00000001834b3084 = '\x01';
          }
          if (*(int *)(TI_ItemTable + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar4 = ItemTable__get_Instance(0);
          if (lVar4 == 0) {
code_r0x000180474e64:
            uVar6 = 0;
          }
          else {
            if (*(int *)(TI_ItemTable + 0xe4) == 0) {
              func_0x000180315660();
            }
            lVar4 = ItemTable__get_Instance(0);
            if (lVar4 == 0) {
              FUN_1803155d0();
              goto code_r0x000180474ed9;
            }
            lVar4 = ItemTable__GetItem(lVar4,uVar1,0);
            if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x20) == 0)) goto code_r0x000180474e64;
            uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0x18);
          }
          cVar3 = System_String__Equals(uVar6,param_1,5,0);
          if (cVar3 != '\0') {
            Gear__UpdateWeaponType__1803dadf0(&uStack_48,MR_System.Collections.Generic.List<ItemInstance>.Dispose);
            return lVar5;
          }
        }
        Gear__UpdateWeaponType__1803dadf0(&uStack_48,MR_System.Collections.Generic.List<ItemInstance>.Dispose);
      }
    }
  }
  return 0;
}

