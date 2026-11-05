// MailWindow__OnDestroy__1806625e0 @ 0x1806625e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MailWindow__OnDestroy__1806625e0(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if (cRam00000001834b3d85 == '\0') {
    FUN_180315380(TI_System.Action<bool>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(MD_MailWindow.AtualizaTitulo);
    FUN_180315380(MD_MailWindow.Chegou);
    FUN_180315380(MD_MailWindow.MostraCarta);
    FUN_180315380(MD_MailWindow.MostraPodemIr);
    FUN_180315380(MD_MailWindow.MudouEntrada);
    FUN_180315380(MD_MailWindow.MudouEnviadas);
    FUN_180315380(TI_MailWindow);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkCorreio);
    cRam00000001834b3d85 = '\x01';
  }
  uVar5 = **(undefined8 **)(TI_MailWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar5,param_1,0);
  if (cVar2 != '\0') {
    **(undefined8 **)(TI_MailWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_MailWindow + 0xb8),0);
  }
  uVar5 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar5,param_1,MD_MailWindow.MudouEntrada,0);
  if (*(int *)(TI_SparkCorreio + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkCorreio__remove_MudouEntrada(uVar5,0);
  uVar5 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar5,param_1,MD_MailWindow.MudouEnviadas,0);
  SparkCorreio__remove_MudouEnviadas(uVar5,0);
  uVar5 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar5,param_1,MD_MailWindow.MostraPodemIr,0);
  SparkCorreio__remove_MudouItens(uVar5,0);
  uVar5 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar5,param_1,MD_MailWindow.MostraCarta,0);
  SparkCorreio__remove_Abriu(uVar5,0);
  uVar5 = func_0x000180315580(TI_System.Action<bool>);
  FUN_180b7dfa0(uVar5,param_1,MD_MailWindow.Chegou,0);
  SparkCorreio__remove_Chegou(uVar5,0);
  uVar5 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar5,param_1,MD_MailWindow.AtualizaTitulo,0);
  if (cRam00000001834b30a2 == '\0') {
    FUN_180315380(TI_System.Action,0);
    FUN_180315380(TI_SparkCorreio);
    cRam00000001834b30a2 = '\x01';
  }
  if (*(int *)(TI_SparkCorreio + 0xe4) == 0) {
    func_0x000180315660(TI_SparkCorreio);
  }
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkCorreio + 0xb8) + 0x50);
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
    if (*(int *)(TI_SparkCorreio + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar4 = FUN_18031a4d0(*(longlong *)(TI_SparkCorreio + 0xb8) + 0x50,plVar6);
    bVar8 = lVar4 != lVar7;
    lVar7 = lVar4;
  } while (bVar8);
  return;
}

