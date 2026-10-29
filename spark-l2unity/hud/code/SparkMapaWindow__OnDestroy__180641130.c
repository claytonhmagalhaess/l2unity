// SparkMapaWindow__OnDestroy__180641130 @ 0x180641130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__OnDestroy__180641130(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if (cRam00000001834b3d1b == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkAmaldicoadas);
    FUN_180315380(MD_SparkMapaWindow.PartyMudou);
    FUN_180315380(MD_SparkMapaWindow.PosicionaAmaldicoadas);
    FUN_180315380(MD_SparkMapaWindow.RadarMudou);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(TI_SparkParty);
    FUN_180315380(TI_SparkQuests);
    cRam00000001834b3d1b = '\x01';
  }
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    func_0x000180315660(TI_SparkMapaWindow);
  }
  uVar3 = **(undefined8 **)(TI_SparkMapaWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar3,param_1,0);
  if (cVar2 != '\0') {
    if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
      func_0x000180315660(TI_SparkMapaWindow);
    }
    **(undefined8 **)(TI_SparkMapaWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_SparkMapaWindow + 0xb8),0);
  }
  uVar3 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar3,param_1,MD_SparkMapaWindow.PartyMudou,0);
  if (*(int *)(TI_SparkParty + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkParty__remove_Mudou(uVar3,0);
  uVar3 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar3,param_1,MD_SparkMapaWindow.RadarMudou,0);
  if (*(int *)(TI_SparkQuests + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkQuests__remove_MudouAcompanhamento(uVar3,0);
  uVar3 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar3,param_1,MD_SparkMapaWindow.PosicionaAmaldicoadas,0);
  if (*(int *)(TI_SparkAmaldicoadas + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3dd4 == '\0') {
    FUN_180315380(TI_System.Action,0);
    FUN_180315380(TI_SparkAmaldicoadas);
    cRam00000001834b3dd4 = '\x01';
  }
  if (*(int *)(TI_SparkAmaldicoadas + 0xe4) == 0) {
    func_0x000180315660(TI_SparkAmaldicoadas);
  }
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkAmaldicoadas + 0xb8) + 8);
  do {
    plVar4 = (longlong *)System_Delegate__Remove(lVar7,uVar3,0);
    plVar6 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      if (*plVar4 == TI_System.Action) {
        plVar6 = plVar4;
      }
      if (plVar6 == (longlong *)0x0) {
        FUN_1803146d0(plVar4);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(int *)(TI_SparkAmaldicoadas + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar5 = FUN_18031a4d0(*(longlong *)(TI_SparkAmaldicoadas + 0xb8) + 8,plVar6);
    bVar8 = lVar5 != lVar7;
    lVar7 = lVar5;
  } while (bVar8);
  return;
}

