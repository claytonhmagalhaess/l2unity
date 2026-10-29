// PetStatusWindow__OnDestroy__1806aa800 @ 0x1806aa800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PetStatusWindow__OnDestroy__1806aa800(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b3fa6 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MD_PetStatusWindow.Marca);
    FUN_180315380(TI_PetStatusWindow);
    FUN_180315380(TI_SparkParty);
    FUN_180315380(TI_SparkPet);
    cRam00000001834b3fa6 = '\x01';
  }
  uVar2 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar2,param_1,MD_PetStatusWindow.Marca,0);
  if (*(int *)(TI_SparkPet + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkPet__remove_Mudou(uVar2,0);
  uVar2 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar2,param_1,MD_PetStatusWindow.Marca,0);
  SparkPet__remove_Sumiu(uVar2,0);
  uVar2 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar2,param_1,MD_PetStatusWindow.Marca,0);
  if (*(int *)(TI_SparkParty + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkParty__remove_Mudou(uVar2,0);
  uVar2 = **(undefined8 **)(TI_PetStatusWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = UnityEngine_Object__op_Equality(uVar2,param_1,0);
  if (cVar1 != '\0') {
    **(undefined8 **)(TI_PetStatusWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_PetStatusWindow + 0xb8),0);
  }
  return;
}

