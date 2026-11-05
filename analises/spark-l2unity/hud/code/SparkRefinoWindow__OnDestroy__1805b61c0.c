// SparkRefinoWindow__OnDestroy__1805b61c0 @ 0x1805b61c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRefinoWindow__OnDestroy__1805b61c0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  if (cRam00000001834b3a1e == '\0') {
    FUN_180315380(TI_System.Action<bool>);
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(TI_System.Action<int,long>);
    FUN_180315380(TI_System.Action<int,int>);
    FUN_180315380(TI_System.Action<int,int,bool>);
    FUN_180315380(TI_System.Action<int,int,int,int>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MD_SparkRefinoWindow.AbreColocar);
    FUN_180315380(MD_SparkRefinoWindow.AbreTirar);
    FUN_180315380(MD_SparkRefinoWindow.GemstoneAceita);
    FUN_180315380(MD_SparkRefinoWindow.ItemAceito);
    FUN_180315380(MD_SparkRefinoWindow.PedraAceita);
    FUN_180315380(MD_SparkRefinoWindow.PrecoParaTirar);
    FUN_180315380(MD_SparkRefinoWindow.Resultado);
    FUN_180315380(MD_SparkRefinoWindow.TirouResultado);
    FUN_180315380(TI_SparkRefinoWindow);
    cRam00000001834b3a1e = '\x01';
  }
  uVar4 = **(undefined8 **)(TI_SparkRefinoWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar4,param_1,0);
  if (cVar3 != '\0') {
    **(undefined8 **)(TI_SparkRefinoWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_SparkRefinoWindow + 0xb8),0);
  }
  uVar4 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar4,param_1,MD_SparkRefinoWindow.AbreColocar,0);
  SparkRefino__remove_AbrirColocar(uVar4,0);
  uVar4 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar4,param_1,MD_SparkRefinoWindow.AbreTirar,0);
  SparkRefino__remove_AbrirTirar(uVar4,0);
  uVar4 = func_0x000180315580(TI_System.Action<int>);
  FUN_180b7db20(uVar4,param_1,MD_SparkRefinoWindow.ItemAceito,0);
  SparkRefino__remove_ItemAceito(uVar4,0);
  uVar4 = func_0x000180315580(TI_System.Action<int,int,int,int>);
  FUN_181142b60(uVar4,param_1,MD_SparkRefinoWindow.PedraAceita,0);
  SparkRefino__remove_PedraAceita(uVar4,0);
  uVar4 = func_0x000180315580(TI_System.Action<int,int>);
  FUN_181141c10(uVar4,param_1,MD_SparkRefinoWindow.GemstoneAceita,0);
  SparkRefino__remove_GemstoneAceita(uVar4,0);
  uVar4 = func_0x000180315580(TI_System.Action<int,int,bool>);
  FUN_181141fd0(uVar4,param_1,MD_SparkRefinoWindow.Resultado,0);
  SparkRefino__remove_Resultado(uVar4,0);
  uVar4 = func_0x000180315580(TI_System.Action<int,long>);
  FUN_180b7cb50(uVar4,param_1,MD_SparkRefinoWindow.PrecoParaTirar,0);
  SparkRefino__remove_PrecoParaTirar(uVar4,0);
  uVar4 = func_0x000180315580(TI_System.Action<bool>);
  FUN_180b7dfa0(uVar4,param_1,MD_SparkRefinoWindow.TirouResultado,0);
  if (cRam00000001834b45cc == '\0') {
    FUN_180315380(TI_System.Action<bool>,0);
    FUN_180315380(TI_SparkRefino);
    cRam00000001834b45cc = '\x01';
  }
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkRefino + 0xb8) + 0x38);
  do {
    lVar5 = System_Delegate__Remove(lVar7,uVar4,0);
    uVar2 = TI_System.Action<bool>;
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = func_0x0001803146b0(lVar5,TI_System.Action<bool>);
      if (lVar6 == 0) {
        FUN_1803146d0(lVar5,uVar2);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    lVar5 = FUN_18031a4d0(*(longlong *)(TI_SparkRefino + 0xb8) + 0x38,lVar6);
    bVar8 = lVar5 != lVar7;
    lVar7 = lVar5;
  } while (bVar8);
  return;
}

