// SparkHennaWindow__OnDestroy__18062cb80 @ 0x18062cb80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkHennaWindow__OnDestroy__18062cb80(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if (cRam00000001834b3cae == '\0') {
    FUN_180315380(TI_System.Action<SparkHenna.Previa>);
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MD_SparkHennaWindow.ListaChegou);
    FUN_180315380(MD_SparkHennaWindow.PreviaChegou);
    FUN_180315380(MD_SparkHennaWindow.Redesenha);
    FUN_180315380(TI_SparkHennaWindow);
    FUN_180315380(TI_SparkHenna);
    cRam00000001834b3cae = '\x01';
  }
  uVar5 = **(undefined8 **)(TI_SparkHennaWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar5,param_1,0);
  if (cVar2 != '\0') {
    **(undefined8 **)(TI_SparkHennaWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_SparkHennaWindow + 0xb8),0);
  }
  uVar5 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar5,param_1,MD_SparkHennaWindow.ListaChegou,0);
  if (*(int *)(TI_SparkHenna + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkHenna__remove_ListaChegou(uVar5,0);
  uVar5 = func_0x000180315580(TI_System.Action<SparkHenna.Previa>);
  FUN_18055b980(uVar5,param_1,MD_SparkHennaWindow.PreviaChegou,0);
  SparkHenna__remove_PreviaChegou(uVar5,0);
  uVar5 = func_0x000180315580(TI_System.Action);
  FUN_1816a9c60(uVar5,param_1,MD_SparkHennaWindow.Redesenha,0);
  if (cRam00000001834b302a == '\0') {
    FUN_180315380(TI_System.Action,0);
    FUN_180315380(TI_SparkHenna);
    cRam00000001834b302a = '\x01';
  }
  if (*(int *)(TI_SparkHenna + 0xe4) == 0) {
    func_0x000180315660(TI_SparkHenna);
  }
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkHenna + 0xb8) + 0x48);
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
    if (*(int *)(TI_SparkHenna + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar4 = FUN_18031a4d0(*(longlong *)(TI_SparkHenna + 0xb8) + 0x48,plVar6);
    bVar8 = lVar4 != lVar7;
    lVar7 = lVar4;
  } while (bVar8);
  return;
}

