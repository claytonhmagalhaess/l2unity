// TradeSlot__AddTooltip__180779880 @ 0x180779880

void TradeSlot__AddTooltip__180779880(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b4382 == '\0') {
    FUN_180315380(TI_SparkDicaItem);
    cRam00000001834b4382 = '\x01';
  }
  InventorySlot__AddTooltip__18061f3c0(param_1,param_2,0);
  lVar4 = TradeSlot__get_Grade(param_1,0);
  if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x68), lVar4 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),param_2,*(undefined8 *)(lVar4 + 0x28));
  }
  cVar3 = func_0x000181707e50(uVar5,0);
  if (cVar3 != '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return;
  }
  if (param_2 == 0) goto code_r0x000180779b15;
  if ((*(char *)(param_2 + 0x2d) == '\0') || (*(char *)(param_2 + 0x2d) == '\x02')) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
code_r0x000180779963:
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar6 = SparkDicaItem__Monta__180628cc0(param_2,uVar6,0);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (*(char *)(param_2 + 0x2d) == '\x01') goto code_r0x000180779963;
    uVar1 = *(undefined4 *)(param_1 + 0x88);
    if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar6 = SparkDicaItem__MontaSimples__180628960(param_2,uVar6,uVar1,0);
  }
  lVar4 = *(longlong *)(param_1 + 0x58);
  uVar5 = System_String__Concat(uVar6,uVar5,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) = uVar5;
    func_0x000180314690(lVar4 + 0x18,uVar5);
    return;
  }
  FUN_1803155d0();
code_r0x000180779b15:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

