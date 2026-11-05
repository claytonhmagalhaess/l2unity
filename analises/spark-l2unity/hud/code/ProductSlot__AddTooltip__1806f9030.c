// ProductSlot__AddTooltip__1806f9030 @ 0x1806f9030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ProductSlot__AddTooltip__1806f9030(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 auStackX_8 [2];
  
  if (cRam00000001834b40db == '\0') {
    FUN_180315380(TI_DicaComIcone);
    FUN_180315380(TI_SparkDicaItem);
    FUN_180315380(LIT_"'\\n<color=#A3A08A>Price:</color> {0:n0} Adena'");
    cRam00000001834b40db = '\x01';
  }
  *(longlong *)(param_1 + 0xc0) = param_2;
  func_0x000180314690(param_1 + 0xc0,param_2);
  InventorySlot__AddTooltip__18061f3c0(param_1,param_2,0);
  if (((*(longlong *)(param_1 + 0xb8) == 0) || (*(int *)(*(longlong *)(param_1 + 0xb8) + 0x20) < 1))
     || (*(longlong *)(param_1 + 0x58) == 0)) {
    return;
  }
  if (param_2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = SparkDicaItem__MontaSimples__180628960(param_2,uVar4,uVar1,0);
    if (((*(char *)(param_2 + 0x2d) == '\0') || (*(char *)(param_2 + 0x2d) == '\x02')) ||
       (*(char *)(param_2 + 0x2d) == '\x01')) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar4 = SparkDicaItem__Monta__180628cc0(param_2,uVar4,0);
    }
    if (*(longlong *)(param_1 + 0xb8) == 0) {
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    auStackX_8[0] = *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x20);
    uVar5 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
    uVar5 = System_String__Format(LIT_"'\\n<color=#A3A08A>Price:</color> {0:n0} Adena'",uVar5,0);
    uVar4 = System_String__Concat(uVar4,uVar5,0);
    lVar2 = *(longlong *)(param_1 + 0x58);
    lVar6 = IconTable__get_Instance(0);
    if (lVar6 == 0) {
      uVar5 = 0;
    }
    else {
      lVar6 = IconTable__get_Instance(0);
      if (lVar6 == 0) goto DAT_1806f9207;
      uVar5 = IconTable__GetIcon(lVar6,*(undefined4 *)(param_2 + 0x1c),0);
    }
    uVar7 = func_0x000180315580(TI_DicaComIcone);
    AllianceMessage___ctor(uVar7,uVar4,uVar5,0);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x18) = uVar7;
      func_0x000180314690(lVar2 + 0x18,uVar7);
      return;
    }
  }
DAT_1806f9207:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

