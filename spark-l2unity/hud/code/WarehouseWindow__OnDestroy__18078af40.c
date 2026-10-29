// WarehouseWindow__OnDestroy__18078af40 @ 0x18078af40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void WarehouseWindow__OnDestroy__18078af40(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (cRam00000001834b43bd == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkArmazem);
    FUN_180315380(MD_WarehouseWindow.Marca);
    FUN_180315380(TI_WarehouseWindow);
    cRam00000001834b43bd = '\x01';
  }
  uVar2 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar2,param_1,MD_WarehouseWindow.Marca,0);
  if (*(int *)(TI_SparkArmazem + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkArmazem__remove_Mudou(uVar2,0);
  uVar2 = **(undefined8 **)(TI_WarehouseWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar1 = UnityEngine_Object__op_Equality(uVar2,param_1,0);
  if (cVar1 != '\0') {
    **(undefined8 **)(TI_WarehouseWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_WarehouseWindow + 0xb8),0);
  }
  return;
}

