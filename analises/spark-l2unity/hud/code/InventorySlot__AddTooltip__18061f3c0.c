// InventorySlot__AddTooltip__18061f3c0 @ 0x18061f3c0

void InventorySlot__AddTooltip__18061f3c0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b3cc6 == '\0') {
    FUN_180315380(TI_DicaComIcone);
    FUN_180315380(TI_SparkDicaItem);
    cRam00000001834b3cc6 = '\x01';
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x88);
  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar3 = SparkDicaItem__MontaSimples__180628960(param_2,uVar3,uVar1,0);
  if (param_2 != 0) {
    if (((*(char *)(param_2 + 0x2d) == '\0') || (*(char *)(param_2 + 0x2d) == '\x02')) ||
       (*(char *)(param_2 + 0x2d) == '\x01')) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar3 = SparkDicaItem__Monta__180628cc0(param_2,uVar3,0);
    }
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = IconTable__get_Instance(0);
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        lVar4 = IconTable__get_Instance(0);
        if (lVar4 == 0) goto code_r0x00018061f4e5;
        uVar5 = IconTable__GetIcon(lVar4,*(undefined4 *)(param_2 + 0x1c),0);
      }
      lVar4 = *(longlong *)(param_1 + 0x58);
      uVar6 = func_0x000180315580(TI_DicaComIcone);
      AllianceMessage___ctor(uVar6,uVar3,uVar5,0);
      if (lVar4 == 0) goto code_r0x00018061f4e5;
      *(undefined8 *)(lVar4 + 0x18) = uVar6;
      func_0x000180314690(lVar4 + 0x18,uVar6);
    }
    return;
  }
code_r0x00018061f4e5:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

