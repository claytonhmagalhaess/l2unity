// SparkTextoDano__MeuServo__18074c380 @ 0x18074c380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkTextoDano__MeuServo__18074c380(void)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 auStackX_8 [4];
  
  if (cRam00000001834b42ae == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkPet);
    cRam00000001834b42ae = '\x01';
  }
  if (*(int *)(TI_SparkPet + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834b3016 == '\0') {
    FUN_180315380(TI_SparkPet);
    DAT_1834b3016 = '\x01';
  }
  if (*(int *)(TI_SparkPet + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (**(longlong **)(TI_SparkPet + 0xb8) != 0) {
    if (cRam00000001834b31bd == '\0') {
      FUN_180315380(TI_WorldSpawner);
      cRam00000001834b31bd = '\x01';
    }
    uVar5 = **(undefined8 **)(TI_WorldSpawner + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if (cVar4 != '\0') {
      if (cRam00000001834b31bd == '\0') {
        FUN_180315380(TI_WorldSpawner);
        cRam00000001834b31bd = '\x01';
      }
      lVar2 = **(longlong **)(TI_WorldSpawner + 0xb8);
      if (*(int *)(TI_SparkPet + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (DAT_1834b3016 == '\0') {
        FUN_180315380(TI_SparkPet);
        DAT_1834b3016 = '\x01';
      }
      if (*(int *)(TI_SparkPet + 0xe4) == 0) {
        func_0x000180315660();
      }
      if ((**(longlong **)(TI_SparkPet + 0xb8) == 0) || (lVar2 == 0)) {
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
      uVar1 = *(undefined4 *)(**(longlong **)(TI_SparkPet + 0xb8) + 0x14);
      if (cRam00000001834b3213 == '\0') {
        FUN_180315380(MR_System.Collections.Concurrent.ConcurrentDictionary<int,Entity>.TryGetValue,uVar1,0);
        cRam00000001834b3213 = '\x01';
      }
      lVar2 = *(longlong *)(lVar2 + 0x60);
      auStackX_8[0] = 0;
      if (lVar2 != 0) {
        FUN_18113d920(lVar2,uVar1,auStackX_8,MR_System.Collections.Concurrent.ConcurrentDictionary<int,Entity>.TryGetValue);
        return auStackX_8[0];
      }
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return 0;
}

