// ShopTab__UpdateProductList__1806fb970 @ 0x1806fb970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ShopTab__UpdateProductList__1806fb970
               (longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 unaff_RDI;
  undefined4 auStackX_20 [2];
  
  if (cRam00000001834b40e9 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<ShopSlotContainer>.get_Item);
    cRam00000001834b40e9 = '\x01';
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  *(undefined4 *)(param_1 + 0x84) = param_4;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar3 = FUN_180bbafe0(*(longlong *)(param_1 + 0x90),0,MR_System.Collections.Generic.List<ShopSlotContainer>.get_Item);
    if (lVar3 != 0) {
      if (cRam00000001834b40df == '\0') {
        FUN_180315380(MR_System.Linq.Enumerable.ToList<Product>);
        FUN_180315380(MR_System.Collections.Generic.List<Product>..ctor);
        FUN_180315380(TI_System.Collections.Generic.List<Product>);
        cRam00000001834b40df = '\x01';
      }
      if (param_2 == 0) {
        uVar4 = func_0x000180315580(TI_System.Collections.Generic.List<Product>);
        FUN_180bba2e0(uVar4,MR_System.Collections.Generic.List<Product>..ctor);
      }
      else {
        uVar4 = FUN_1809c8820(param_2,MR_System.Linq.Enumerable.ToList<Product>);
      }
      *(undefined8 *)(lVar3 + 0x50) = uVar4;
      func_0x000180314690(lVar3 + 0x50,uVar4);
      ShopSlotContainer__RefreshProducts(lVar3,0);
      if (*(longlong *)(param_1 + 0x90) != 0) {
        lVar3 = FUN_180bbafe0(*(longlong *)(param_1 + 0x90),1,MR_System.Collections.Generic.List<ShopSlotContainer>.get_Item);
        if (lVar3 != 0) {
          if (cRam00000001834b40df == '\0') {
            FUN_180315380(MR_System.Linq.Enumerable.ToList<Product>);
            FUN_180315380(MR_System.Collections.Generic.List<Product>..ctor);
            FUN_180315380(TI_System.Collections.Generic.List<Product>);
            cRam00000001834b40df = '\x01';
          }
          uVar4 = func_0x000180315580(TI_System.Collections.Generic.List<Product>);
          FUN_180bba2e0(uVar4,MR_System.Collections.Generic.List<Product>..ctor);
          *(undefined8 *)(lVar3 + 0x50) = uVar4;
          func_0x000180314690(lVar3 + 0x50,uVar4);
          ShopSlotContainer__RefreshProducts(lVar3,0);
          if (cRam00000001834b40eb == '\0') {
            FUN_180315380(LIT_"'{0:n0}'");
            cRam00000001834b40eb = '\x01';
          }
          plVar1 = *(longlong **)(param_1 + 0x58);
          auStackX_20[0] = param_3;
          uVar4 = func_0x000180314670(_DAT_1834c6268,auStackX_20);
          uVar4 = System_String__Format(LIT_"'{0:n0}'",uVar4,0);
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0xe48))(plVar1,uVar4,*(undefined8 *)(*plVar1 + 0xe50));
            ShopTab__RefreshWeight(param_1,0,0);
            if (cRam00000001834b40ec == '\0') {
              FUN_180315380(LIT_"'{0:n0}'",0,0);
              cRam00000001834b40ec = '\x01';
            }
            plVar1 = *(longlong **)(param_1 + 0x60);
            uVar4 = func_0x000180314670(_DAT_1834c6268,&stack0x00000010);
            uVar4 = System_String__Format(LIT_"'{0:n0}'",uVar4,0);
            if (plVar1 != (longlong *)0x0) {
              lVar3 = *plVar1;
              (**(code **)(lVar3 + 0xe48))
                        (plVar1,uVar4,*(undefined8 *)(lVar3 + 0xe50),lVar3,unaff_RDI);
              return;
            }
            FUN_1803155d0();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FUN_1803155d0();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

