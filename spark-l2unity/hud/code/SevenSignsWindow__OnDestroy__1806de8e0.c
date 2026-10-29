// SevenSignsWindow__OnDestroy__1806de8e0 @ 0x1806de8e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SevenSignsWindow__OnDestroy__1806de8e0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (cRam00000001834b40bf == '\0') {
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MD_SevenSignsWindow.Chegou);
    FUN_180315380(TI_SevenSignsWindow);
    FUN_180315380(TI_SparkSeteSelos);
    cRam00000001834b40bf = '\x01';
  }
  if (*(int *)(TI_SevenSignsWindow + 0xe4) == 0) {
    func_0x000180315660(TI_SevenSignsWindow);
  }
  uVar6 = **(undefined8 **)(TI_SevenSignsWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar6,param_1,0);
  if (cVar3 != '\0') {
    if (*(int *)(TI_SevenSignsWindow + 0xe4) == 0) {
      func_0x000180315660(TI_SevenSignsWindow);
    }
    **(undefined8 **)(TI_SevenSignsWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_SevenSignsWindow + 0xb8),0);
  }
  uVar6 = func_0x000180315580(TI_System.Action<int>);
  FUN_180b7db20(uVar6,param_1,MD_SevenSignsWindow.Chegou,0);
  if (*(int *)(TI_SparkSeteSelos + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b33ee == '\0') {
    FUN_180315380(TI_System.Action<int>,0);
    FUN_180315380(TI_SparkSeteSelos);
    cRam00000001834b33ee = '\x01';
  }
  if (*(int *)(TI_SparkSeteSelos + 0xe4) == 0) {
    func_0x000180315660(TI_SparkSeteSelos);
  }
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkSeteSelos + 0xb8) + 0x38);
  do {
    lVar4 = System_Delegate__Remove(lVar7,uVar6,0);
    uVar2 = TI_System.Action<int>;
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x0001803146b0(lVar4,TI_System.Action<int>);
      if (lVar5 == 0) {
        FUN_1803146d0(lVar4,uVar2);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(int *)(TI_SparkSeteSelos + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar4 = FUN_18031a4d0(*(longlong *)(TI_SparkSeteSelos + 0xb8) + 0x38,lVar5);
    bVar8 = lVar4 != lVar7;
    lVar7 = lVar4;
  } while (bVar8);
  return;
}

