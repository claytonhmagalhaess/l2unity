// TradeWindow__OnDestroy__18077b160 @ 0x18077b160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TradeWindow__OnDestroy__18077b160(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b4388 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkTroca);
    FUN_180315380(MD_TradeWindow.Marca);
    FUN_180315380(TI_TradeWindow);
    cRam00000001834b4388 = '\x01';
  }
  uVar2 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar2,param_1,MD_TradeWindow.Marca,0);
  if (*(int *)(TI_SparkTroca + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkTroca__remove_Mudou(uVar2,0);
  uVar2 = **(undefined8 **)(TI_TradeWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = UnityEngine_Object__op_Equality(uVar2,param_1,0);
  if (cVar1 != '\0') {
    **(undefined8 **)(TI_TradeWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_TradeWindow + 0xb8),0);
  }
  return;
}

