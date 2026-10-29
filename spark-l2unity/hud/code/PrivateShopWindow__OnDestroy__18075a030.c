// PrivateShopWindow__OnDestroy__18075a030 @ 0x18075a030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PrivateShopWindow__OnDestroy__18075a030(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b4321 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MD_PrivateShopWindow.Marca);
    FUN_180315380(TI_PrivateShopWindow);
    FUN_180315380(TI_SparkLoja);
    cRam00000001834b4321 = '\x01';
  }
  uVar2 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar2,param_1,MD_PrivateShopWindow.Marca,0);
  if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkLoja__remove_Mudou(uVar2,0);
  uVar2 = **(undefined8 **)(TI_PrivateShopWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = UnityEngine_Object__op_Equality(uVar2,param_1,0);
  if (cVar1 != '\0') {
    **(undefined8 **)(TI_PrivateShopWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_PrivateShopWindow + 0xb8),0);
  }
  return;
}

