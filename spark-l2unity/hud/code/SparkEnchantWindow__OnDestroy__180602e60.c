// SparkEnchantWindow__OnDestroy__180602e60 @ 0x180602e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkEnchantWindow__OnDestroy__180602e60(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  if (cRam00000001834b3bcc == '\0') {
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(TI_System.Action<int,int,int,int>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MD_SparkEnchantWindow.Abre);
    FUN_180315380(MD_SparkEnchantWindow.AlvoAceito);
    FUN_180315380(MD_SparkEnchantWindow.Resultado);
    FUN_180315380(TI_SparkEnchantWindow);
    cRam00000001834b3bcc = '\x01';
  }
  uVar4 = **(undefined8 **)(TI_SparkEnchantWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar4,param_1,0);
  if (cVar3 != '\0') {
    **(undefined8 **)(TI_SparkEnchantWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_SparkEnchantWindow + 0xb8),0);
  }
  uVar4 = func_0x000180315580(TI_System.Action<int>);
  FUN_180b7db20(uVar4,param_1,MD_SparkEnchantWindow.Abre,0);
  SparkEnchant__remove_Abrir(uVar4,0);
  uVar4 = func_0x000180315580(TI_System.Action<int>);
  FUN_180b7db20(uVar4,param_1,MD_SparkEnchantWindow.AlvoAceito,0);
  SparkEnchant__remove_AlvoAceito(uVar4,0);
  uVar4 = func_0x000180315580(TI_System.Action<int,int,int,int>);
  FUN_181142b60(uVar4,param_1,MD_SparkEnchantWindow.Resultado,0);
  if (cRam00000001834b484f == '\0') {
    FUN_180315380(TI_System.Action<int,int,int,int>,0);
    FUN_180315380(TI_SparkEnchant);
    cRam00000001834b484f = '\x01';
  }
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkEnchant + 0xb8) + 0x10);
  do {
    lVar5 = System_Delegate__Remove(lVar7,uVar4,0);
    uVar2 = TI_System.Action<int,int,int,int>;
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = func_0x0001803146b0(lVar5,TI_System.Action<int,int,int,int>);
      if (lVar6 == 0) {
        FUN_1803146d0(lVar5,uVar2);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    lVar5 = FUN_18031a4d0(*(longlong *)(TI_SparkEnchant + 0xb8) + 0x10,lVar6);
    bVar8 = lVar5 != lVar7;
    lVar7 = lVar5;
  } while (bVar8);
  return;
}

