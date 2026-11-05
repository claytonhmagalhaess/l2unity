// SparkTextoDano__GaranteOuvintes__18074ab50 @ 0x18074ab50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTextoDano__GaranteOuvintes__18074ab50(void)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  
  if (cRam00000001834b42a0 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_SparkPet);
    FUN_180315380(MD_SparkTextoDano.PetMudou);
    FUN_180315380(TI_SparkTextoDano);
    cRam00000001834b42a0 = '\x01';
  }
  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (**(char **)(TI_SparkTextoDano + 0xb8) == '\0') {
    if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
      func_0x000180315660();
    }
    **(undefined1 **)(TI_SparkTextoDano + 0xb8) = 1;
    uVar4 = func_0x000180315580(TI_System.Action);
    FUN_1816a9c60(uVar4,0,MD_SparkTextoDano.PetMudou,0);
    if (*(int *)(TI_SparkPet + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b3371 == '\0') {
      FUN_180315380(TI_System.Action,0);
      FUN_180315380(TI_SparkPet);
      cRam00000001834b3371 = '\x01';
    }
    if (*(int *)(TI_SparkPet + 0xe4) == 0) {
      func_0x000180315660(TI_SparkPet);
    }
    lVar6 = *(longlong *)(*(longlong *)(TI_SparkPet + 0xb8) + 8);
    do {
      plVar2 = (longlong *)System_Delegate__Combine(lVar6,uVar4,0);
      plVar5 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        if (*plVar2 == TI_System.Action) {
          plVar5 = plVar2;
        }
        if (plVar5 == (longlong *)0x0) {
          FUN_1803146d0(plVar2);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (*(int *)(TI_SparkPet + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar3 = FUN_18031a4d0(*(longlong *)(TI_SparkPet + 0xb8) + 8,plVar5);
      bVar7 = lVar3 != lVar6;
      lVar6 = lVar3;
    } while (bVar7);
    return;
  }
  return;
}

