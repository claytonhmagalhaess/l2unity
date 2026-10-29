// InventorySlot__TextoQuantidade__18061fd70 @ 0x18061fd70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InventorySlot__TextoQuantidade__18061fd70(int param_1)

{
  undefined8 uVar1;
  int aiStackX_8 [4];
  float afStackX_18 [2];
  int aiStackX_20 [2];
  
  aiStackX_8[0] = param_1;
  if (cRam00000001834b3cc5 == '\0') {
    FUN_180315380(TI_System.Globalization.CultureInfo);
    FUN_180315380(LIT_"'K'");
    FUN_180315380(LIT_"'B'");
    FUN_180315380(LIT_"'M'");
    FUN_180315380(LIT_"'0.#'");
    cRam00000001834b3cc5 = '\x01';
  }
  if (*(int *)(TI_System.Globalization.CultureInfo + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar1 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  if (99999 < aiStackX_8[0]) {
    if (aiStackX_8[0] < 1000000) {
      aiStackX_20[0] = aiStackX_8[0] / 1000;
      uVar1 = System_Int32__ToString(aiStackX_20,uVar1,0);
      System_String__Concat(uVar1,LIT_"'K'",0);
      return;
    }
    if (aiStackX_8[0] < 10000000) {
      afStackX_18[0] = (float)(aiStackX_8[0] / 100000) / 10.0;
      uVar1 = System_Single__ToString(afStackX_18,LIT_"'0.#'",uVar1,0);
    }
    else {
      if (999999999 < aiStackX_8[0]) {
        afStackX_18[0] = (float)(aiStackX_8[0] / 100000000) / 10.0;
        uVar1 = System_Single__ToString(afStackX_18,LIT_"'0.#'",uVar1,0);
        System_String__Concat(uVar1,LIT_"'B'",0);
        return;
      }
      aiStackX_20[0] = aiStackX_8[0] / 1000000;
      uVar1 = System_Int32__ToString(aiStackX_20,uVar1,0);
    }
    System_String__Concat(uVar1,LIT_"'M'",0);
    return;
  }
  System_Int32__ToString(aiStackX_8,uVar1,0);
  return;
}

