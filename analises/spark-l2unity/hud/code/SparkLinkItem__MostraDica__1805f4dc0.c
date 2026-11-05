// SparkLinkItem__MostraDica__1805f4dc0 @ 0x1805f4dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkLinkItem__MostraDica__1805f4dc0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 auStackX_20 [2];
  undefined8 in_stack_ffffffffffffff88;
  uint uVar9;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 auStack_20 [2];
  
  uVar9 = (uint)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  if (cRam00000001834b3b49 == '\0') {
    FUN_180315380(TI_ItemInstance);
    FUN_180315380(TI_ItemTable);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkDicaItem);
    FUN_180315380(LIT_"'Item '");
    FUN_180315380(LIT_"'item:'");
    cRam00000001834b3b49 = '\x01';
  }
  uVar8 = 0;
  auStackX_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  auStack_20[0] = 0;
  if (cRam00000001834b3b3c == '\0') {
    FUN_180315380(TI_L2ToolTip);
    cRam00000001834b3b3c = '\x01';
  }
  uVar7 = **(undefined8 **)(TI_L2ToolTip + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if (cVar4 != '\0') {
    return;
  }
  if (*(int *)(TI_ItemTable + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar5 = ItemTable__get_Instance(0);
  if (lVar5 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  cVar4 = System_String__StartsWith(param_1,LIT_"'item:'",0);
  if (cVar4 == '\0') {
    return;
  }
  if (((LIT_"'item:'" == 0) ||
      (lVar5 = func_0x00018170c060(param_1,*(undefined4 *)(LIT_"'item:'" + 0x10),0),
      lVar5 == 0)) || (lVar5 = System_String__Split(lVar5,0x2c,0,0), lVar5 == 0))
  goto DAT_1805f51f4;
  if (*(int *)(lVar5 + 0x18) != 4) {
    return;
  }
  cVar4 = System_Int32__TryParse(*(undefined8 *)(lVar5 + 0x20),auStackX_20,0);
  if (cVar4 == '\0') {
    return;
  }
  if (*(uint *)(lVar5 + 0x18) < 2) {
code_r0x0001805f51fa:
    FUN_1803155c0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  cVar4 = System_Int32__TryParse(*(undefined8 *)(lVar5 + 0x28),&uStack_28,0);
  if (cVar4 == '\0') {
    return;
  }
  if (*(uint *)(lVar5 + 0x18) < 3) goto code_r0x0001805f51fa;
  cVar4 = System_Int32__TryParse(*(undefined8 *)(lVar5 + 0x30),&uStack_24,0);
  if (cVar4 == '\0') {
    return;
  }
  if (*(uint *)(lVar5 + 0x18) < 4) goto code_r0x0001805f51fa;
  cVar4 = System_Int32__TryParse(*(undefined8 *)(lVar5 + 0x38),auStack_20,0);
  if (cVar4 == '\0') {
    return;
  }
  if (*(int *)(TI_ItemTable + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar5 = ItemTable__get_Instance(0);
  if (lVar5 == 0) goto DAT_1805f51f4;
  lVar5 = ItemTable__GetItem(lVar5,auStackX_20[0],0);
  uVar3 = uStack_28;
  uVar2 = auStackX_20[0];
  if (lVar5 == 0) {
    return;
  }
  lVar6 = func_0x000180315580(TI_ItemInstance);
  ItemInstance___ctor(lVar6,0,uVar2,0,(ulonglong)uVar9 << 0x20,1,4,5,0,0,uVar3,0xffffffffffffffff,0)
  ;
  if (lVar6 == 0) goto DAT_1805f51f4;
  *(undefined4 *)(lVar6 + 0x44) = uStack_24;
  if (*(longlong *)(lVar5 + 0x20) == 0) {
    uVar7 = System_Int32__ToString(auStackX_20,0);
    uVar7 = System_String__Concat(LIT_"'Item '",uVar7,0);
  }
  else {
    uVar7 = *(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0x18);
  }
  if (*(int *)(TI_ItemTable + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar5 = ItemTable__get_Instance(0);
  if (lVar5 == 0) goto DAT_1805f51f4;
  lVar5 = ItemTable__GetWeapon(lVar5,auStackX_20[0],0);
  if (lVar5 == 0) {
    if (*(int *)(TI_ItemTable + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar5 = ItemTable__get_Instance(0);
    if (lVar5 == 0) goto DAT_1805f51f4;
    lVar5 = ItemTable__GetArmor(lVar5,auStackX_20[0],0);
    uVar2 = auStack_20[0];
    if (lVar5 != 0) goto code_r0x0001805f5155;
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar7 = SparkDicaItem__MontaSimples__180628960(lVar6,uVar7,uVar2,0);
  }
  else {
code_r0x0001805f5155:
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar7 = SparkDicaItem__Monta__180628cc0(lVar6,uVar7,0);
  }
  lVar5 = FUN_1805bca90(0);
  lVar6 = IconTable__get_Instance(0);
  if (lVar6 != 0) {
    lVar6 = IconTable__get_Instance(0);
    if (lVar6 == 0) goto DAT_1805f51f4;
    uVar8 = IconTable__GetIcon(lVar6,auStackX_20[0],0);
  }
  if (lVar5 != 0) {
    L2ToolTip__UpdateTooltipItem__180798870(lVar5,uVar7,uVar8,param_2,0);
    return;
  }
DAT_1805f51f4:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

