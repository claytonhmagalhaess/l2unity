// SparkCraftWindow__AbreLoja__1805efc20 @ 0x1805efc20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkCraftWindow__AbreLoja__1805efc20(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b3bad == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkCraft.NaLoja>.Exists);
    FUN_180315380(MR_System.Collections.Generic.List<SparkCraft.NaLoja>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<SparkCraft.NaLoja>.get_Item);
    FUN_180315380(TI_System.Predicate<SparkCraft.NaLoja>);
    FUN_180315380(MD_SparkCraftWindow._AbreLoja_b__44_0);
    FUN_180315380(TI_SparkCraft);
    FUN_180315380(LIT_"''");
    cRam00000001834b3bad = '\x01';
  }
  if (*(char *)(param_1 + 0x88) == '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0x8c) = 2;
  if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
    func_0x000180315660(TI_SparkCraft);
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkCraft + 0xb8) + 0x58);
  uVar6 = func_0x000180315580(TI_System.Predicate<SparkCraft.NaLoja>);
  FUN_180d270e0(uVar6,param_1,MD_SparkCraftWindow._AbreLoja_b__44_0,0);
  if (lVar1 != 0) {
    cVar4 = FUN_180bab060(lVar1,uVar6,MR_System.Collections.Generic.List<SparkCraft.NaLoja>.Exists);
    if (cVar4 == '\0') {
      if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar1 = *(longlong *)(*(longlong *)(TI_SparkCraft + 0xb8) + 0x58);
      if (lVar1 == 0) goto DAT_1805efe59;
      if (*(int *)(lVar1 + 0x18) < 1) {
        uVar5 = 0xffffffff;
      }
      else {
        if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar1 = *(longlong *)(*(longlong *)(TI_SparkCraft + 0xb8) + 0x58);
        if (lVar1 == 0) goto DAT_1805efe59;
        uVar5 = FUN_180bbafe0(lVar1,0,MR_System.Collections.Generic.List<SparkCraft.NaLoja>.get_Item);
      }
      *(undefined4 *)(param_1 + 0x138) = uVar5;
    }
    plVar2 = *(longlong **)(param_1 + 0xc0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xe48))(plVar2,LIT_"''",*(undefined8 *)(*plVar2 + 0xe50));
      if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
        func_0x000180315660(TI_SparkCraft);
      }
      *(undefined4 *)(param_1 + 0x13c) =
           *(undefined4 *)(*(longlong *)(TI_SparkCraft + 0xb8) + 0x4c);
      *(undefined4 *)(param_1 + 0x140) =
           *(undefined4 *)(*(longlong *)(TI_SparkCraft + 0xb8) + 0x50);
      SparkCraftWindow__Mostra__1805f3e70(param_1,0);
      if (*(int *)(param_1 + 0x138) < 1) {
        return;
      }
      if (*(int *)(TI_SparkCraft + 0xe4) == 0) {
        func_0x000180315660();
      }
      SparkCraft__PedeInfoNaLoja
                (*(undefined4 *)(*(longlong *)(TI_SparkCraft + 0xb8) + 0x48),
                 *(undefined4 *)(param_1 + 0x138),0);
      return;
    }
  }
DAT_1805efe59:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

