// SparkCraftWindow__OnDestroy__1805f4340 @ 0x1805f4340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkCraftWindow__OnDestroy__1805f4340(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  if (cRam00000001834b3ba5 == '\0') {
    FUN_180315380(TI_System.Action<int,int,int,int>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MD_SparkCraftWindow.AbreLivro);
    FUN_180315380(MD_SparkCraftWindow.AbreLoja);
    FUN_180315380(MD_SparkCraftWindow.AbreMontagem);
    FUN_180315380(MD_SparkCraftWindow.InfoChegou);
    FUN_180315380(MD_SparkCraftWindow.LojaInfoChegou);
    FUN_180315380(TI_SparkCraftWindow);
    FUN_180315380(TI_SparkCraft);
    cRam00000001834b3ba5 = '\x01';
  }
  uVar4 = **(undefined8 **)(TI_SparkCraftWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar4,param_1,0);
  if (cVar3 != '\0') {
    **(undefined8 **)(TI_SparkCraftWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_SparkCraftWindow + 0xb8),0);
  }
  uVar4 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar4,param_1,MD_SparkCraftWindow.AbreLivro,0);
  if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkCraft__remove_LivroChegou(uVar4,0);
  uVar4 = func_0x000180315580(TI_System.Action<int,int,int,int>);
  FUN_181142b60(uVar4,param_1,MD_SparkCraftWindow.InfoChegou,0);
  SparkCraft__remove_InfoChegou(uVar4,0);
  uVar4 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar4,param_1,MD_SparkCraftWindow.AbreMontagem,0);
  SparkCraft__remove_MontagemChegou(uVar4,0);
  uVar4 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar4,param_1,MD_SparkCraftWindow.AbreLoja,0);
  SparkCraft__remove_LojaChegou(uVar4,0);
  uVar4 = func_0x000180315580(TI_System.Action<int,int,int,int>);
  FUN_181142b60(uVar4,param_1,MD_SparkCraftWindow.LojaInfoChegou,0);
  if (cRam00000001834b46d7 == '\0') {
    FUN_180315380(TI_System.Action<int,int,int,int>,0);
    FUN_180315380(TI_SparkCraft);
    cRam00000001834b46d7 = '\x01';
  }
  if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
    func_0x000180315660(TI_SparkCraft);
  }
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkCraft + 0xb8) + 0x68);
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
    if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar5 = FUN_18031a4d0(*(longlong *)(TI_SparkCraft + 0xb8) + 0x68,lVar6);
    bVar8 = lVar5 != lVar7;
    lVar7 = lVar5;
  } while (bVar8);
  return;
}

