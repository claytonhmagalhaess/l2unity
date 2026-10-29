// BoardWindow__OnDestroy__1805b0070 @ 0x1805b0070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardWindow__OnDestroy__1805b0070(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if (cRam00000001834b3a69 == '\0') {
    FUN_180315380(TI_System.Action<string>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(MD_BoardWindow.Fecha);
    FUN_180315380(MD_BoardWindow.Mostra);
    FUN_180315380(TI_BoardWindow);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkBoard);
    cRam00000001834b3a69 = '\x01';
  }
  if (*(int *)(TI_BoardWindow + 0xe4) == 0) {
    func_0x000180315660(TI_BoardWindow);
  }
  uVar3 = **(undefined8 **)(TI_BoardWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar3,param_1,0);
  if (cVar2 != '\0') {
    if (*(int *)(TI_BoardWindow + 0xe4) == 0) {
      func_0x000180315660(TI_BoardWindow);
    }
    **(undefined8 **)(TI_BoardWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_BoardWindow + 0xb8),0);
  }
  uVar3 = func_0x000180315580(TI_System.Action<string>);
  FUN_18055b980(uVar3,param_1,MD_BoardWindow.Mostra,0);
  if (*(int *)(TI_SparkBoard + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkBoard__remove_Pagina(uVar3,0);
  uVar3 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar3,param_1,MD_BoardWindow.Fecha,0);
  if (cRam00000001834b45d7 == '\0') {
    FUN_180315380(TI_System.Action,0);
    FUN_180315380(TI_SparkBoard);
    cRam00000001834b45d7 = '\x01';
  }
  if (*(int *)(TI_SparkBoard + 0xe4) == 0) {
    func_0x000180315660(TI_SparkBoard);
  }
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkBoard + 0xb8) + 0x10);
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
    if (*(int *)(TI_SparkBoard + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar5 = FUN_18031a4d0(*(longlong *)(TI_SparkBoard + 0xb8) + 0x10,plVar6);
    bVar8 = lVar5 == lVar7;
    lVar7 = lVar5;
    if (bVar8) {
      return;
    }
  } while( true );
}

