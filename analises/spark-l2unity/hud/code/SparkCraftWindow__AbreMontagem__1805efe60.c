// SparkCraftWindow__AbreMontagem__1805efe60 @ 0x1805efe60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkCraftWindow__AbreMontagem__1805efe60(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (cRam00000001834b3bac == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkCraft.NaLoja>.AddRange);
    FUN_180315380(MR_System.Collections.Generic.List<SparkCraft.NaLoja>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Contains);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Item);
    FUN_180315380(TI_SparkCraft);
    FUN_180315380(LIT_"''");
    cRam00000001834b3bac = '\x01';
  }
  if (*(char *)(param_1 + 0x88) == '\0') {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x8c) = 1;
  *(undefined1 *)(param_1 + 0x150) = 0;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
    *(undefined4 *)(lVar1 + 0x18) = 0;
    lVar1 = *(longlong *)(param_1 + 0x148);
    if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
      func_0x000180315660(TI_SparkCraft);
    }
    if (lVar1 != 0) {
      func_0x000180beebd0(lVar1,*(undefined8 *)(*(longlong *)(TI_SparkCraft + 0xb8) + 0x30),
                          MR_System.Collections.Generic.List<SparkCraft.NaLoja>.AddRange);
      lVar1 = *(longlong *)(*(longlong *)(TI_SparkCraft + 0xb8) + 0x38);
      lVar6 = LIT_"''";
      if (lVar1 != 0) {
        lVar6 = lVar1;
      }
      plVar2 = *(longlong **)(param_1 + 0x118);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xa88))(plVar2,lVar6,*(undefined8 *)(*plVar2 + 0xa90));
        if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
          func_0x000180315660(TI_SparkCraft);
        }
        lVar1 = *(longlong *)(*(longlong *)(TI_SparkCraft + 0xb8) + 0x28);
        if (lVar1 != 0) {
          cVar4 = FUN_18162e860(lVar1,*(undefined4 *)(param_1 + 0x138),MR_System.Collections.Generic.List<int>.Contains);
          if (cVar4 == '\0') {
            if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
              func_0x000180315660();
            }
            lVar1 = *(longlong *)(*(longlong *)(TI_SparkCraft + 0xb8) + 0x28);
            if (lVar1 == 0) goto DAT_1805f0086;
            if (*(int *)(lVar1 + 0x18) < 1) {
              uVar5 = 0xffffffff;
            }
            else {
              if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
                func_0x000180315660();
              }
              lVar1 = *(longlong *)(*(longlong *)(TI_SparkCraft + 0xb8) + 0x28);
              if (lVar1 == 0) goto DAT_1805f0086;
              uVar5 = FUN_180bed530(lVar1,0,MR_System.Collections.Generic.List<int>.get_Item);
            }
            *(undefined4 *)(param_1 + 0x138) = uVar5;
          }
          plVar2 = *(longlong **)(param_1 + 0xc0);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0xe48))(plVar2,LIT_"''",*(undefined8 *)(*plVar2 + 0xe50));
            SparkCraftWindow__Mostra__1805f3e70(param_1,0);
            return;
          }
        }
      }
    }
  }
DAT_1805f0086:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

