// OlympiadWindow__OnDestroy__180689360 @ 0x180689360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OlympiadWindow__OnDestroy__180689360(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if (cRam00000001834b3e66 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MD_OlympiadWindow.Atualiza);
    FUN_180315380(MD_OlympiadWindow.MostraResultado);
    FUN_180315380(TI_OlympiadWindow);
    FUN_180315380(TI_SparkOlimpiada);
    cRam00000001834b3e66 = '\x01';
  }
  if (*(int *)(TI_OlympiadWindow + 0xe4) == 0) {
    func_0x000180315660(TI_OlympiadWindow);
  }
  uVar5 = **(undefined8 **)(TI_OlympiadWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar5,param_1,0);
  if (cVar2 != '\0') {
    if (*(int *)(TI_OlympiadWindow + 0xe4) == 0) {
      func_0x000180315660(TI_OlympiadWindow);
    }
    **(undefined8 **)(TI_OlympiadWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_OlympiadWindow + 0xb8),0);
  }
  uVar5 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar5,param_1,MD_OlympiadWindow.Atualiza,0);
  if (*(int *)(TI_SparkOlimpiada + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkOlimpiada__remove_Mudou(uVar5,0);
  uVar5 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar5,param_1,MD_OlympiadWindow.MostraResultado,0);
  if (cRam00000001834b3254 == '\0') {
    FUN_180315380(TI_System.Action,0);
    FUN_180315380(TI_SparkOlimpiada);
    cRam00000001834b3254 = '\x01';
  }
  if (*(int *)(TI_SparkOlimpiada + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOlimpiada);
  }
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkOlimpiada + 0xb8) + 0x20);
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
    if (*(int *)(TI_SparkOlimpiada + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar4 = FUN_18031a4d0(*(longlong *)(TI_SparkOlimpiada + 0xb8) + 0x20,plVar6);
    bVar8 = lVar4 == lVar7;
    lVar7 = lVar4;
    if (bVar8) {
      return;
    }
  } while( true );
}

