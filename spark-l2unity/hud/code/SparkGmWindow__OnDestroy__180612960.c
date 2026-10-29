// SparkGmWindow__OnDestroy__180612960 @ 0x180612960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkGmWindow__OnDestroy__180612960(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if (cRam00000001834b3c1b == '\0') {
    FUN_180315380(TI_System.Action<string>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkGmQuest);
    FUN_180315380(TI_SparkGmVer);
    FUN_180315380(MD_SparkGmWindow.Chegou);
    FUN_180315380(MD_SparkGmWindow.MostraCeu);
    FUN_180315380(MD_SparkGmWindow.MostraClima);
    FUN_180315380(MD_SparkGmWindow.QuestChegou);
    FUN_180315380(TI_SparkGmWindow);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3c1b = '\x01';
  }
  if (*(int *)(TI_SparkGmWindow + 0xe4) == 0) {
    func_0x000180315660(TI_SparkGmWindow);
  }
  uVar5 = **(undefined8 **)(TI_SparkGmWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar5,param_1,0);
  if (cVar2 != '\0') {
    if (*(int *)(TI_SparkGmWindow + 0xe4) == 0) {
      func_0x000180315660(TI_SparkGmWindow);
    }
    **(undefined8 **)(TI_SparkGmWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_SparkGmWindow + 0xb8),0);
  }
  uVar5 = func_0x000180315580(TI_System.Action<string>);
  FUN_18055b980(uVar5,param_1,MD_SparkGmWindow.Chegou,0);
  if (*(int *)(TI_SparkGmVer + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkGmVer__remove_Chegou(uVar5,0);
  uVar5 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar5,param_1,MD_SparkGmWindow.QuestChegou,0);
  if (*(int *)(TI_SparkGmQuest + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkGmQuest__remove_Chegou(uVar5,0);
  uVar5 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar5,param_1,MD_SparkGmWindow.MostraCeu,0);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkOpcoes__remove_CeuMudou(uVar5,0);
  uVar5 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar5,param_1,MD_SparkGmWindow.MostraClima,0);
  if (cRam00000001834b3298 == '\0') {
    FUN_180315380(TI_System.Action,0);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3298 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x130);
  do {
    plVar3 = (longlong *)System_Delegate__Remove(lVar7,uVar5,0);
    plVar6 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      if (*plVar3 == TI_System.Action) {
        plVar6 = plVar3;
      }
      if (plVar6 == (longlong *)0x0) {
        FUN_1803146d0(plVar3);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar4 = FUN_18031a4d0(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x130,plVar6);
    bVar8 = lVar4 != lVar7;
    lVar7 = lVar4;
  } while (bVar8);
  return;
}

