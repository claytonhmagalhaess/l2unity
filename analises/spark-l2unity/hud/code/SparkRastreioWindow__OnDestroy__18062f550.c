// SparkRastreioWindow__OnDestroy__18062f550 @ 0x18062f550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRastreioWindow__OnDestroy__18062f550(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  if (cRam00000001834b3c9a == '\0') {
    FUN_180315380(TI_System.Action<bool,SparkRastreio.Linha,bool>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MD_SparkRastreioWindow.Mudou);
    FUN_180315380(TI_SparkRastreioWindow);
    FUN_180315380(TI_SparkRastreio);
    cRam00000001834b3c9a = '\x01';
  }
  uVar4 = **(undefined8 **)(TI_SparkRastreioWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(uVar4,param_1,0);
  if (cVar3 != '\0') {
    **(undefined8 **)(TI_SparkRastreioWindow + 0xb8) = 0;
    func_0x000180314690(*(undefined8 *)(TI_SparkRastreioWindow + 0xb8),0);
  }
  uVar4 = func_0x000180315580(TI_System.Action<bool,SparkRastreio.Linha,bool>);
  FUN_181142430(uVar4,param_1,MD_SparkRastreioWindow.Mudou,0);
  if (*(int *)(TI_SparkRastreio + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b48bc == '\0') {
    FUN_180315380(TI_System.Action<bool,SparkRastreio.Linha,bool>,0);
    FUN_180315380(TI_SparkRastreio);
    cRam00000001834b48bc = '\x01';
  }
  if (*(int *)(TI_SparkRastreio + 0xe4) == 0) {
    func_0x000180315660(TI_SparkRastreio);
  }
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkRastreio + 0xb8) + 0x30);
  do {
    lVar5 = System_Delegate__Remove(lVar7,uVar4,0);
    uVar2 = TI_System.Action<bool,SparkRastreio.Linha,bool>;
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = func_0x0001803146b0(lVar5,TI_System.Action<bool,SparkRastreio.Linha,bool>);
      if (lVar6 == 0) {
        FUN_1803146d0(lVar5,uVar2);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(int *)(TI_SparkRastreio + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar5 = FUN_18031a4d0(*(longlong *)(TI_SparkRastreio + 0xb8) + 0x30,lVar6);
    bVar8 = lVar5 != lVar7;
    lVar7 = lVar5;
  } while (bVar8);
  return;
}

