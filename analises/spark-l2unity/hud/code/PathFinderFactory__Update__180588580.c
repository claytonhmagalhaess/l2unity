// PathFinderFactory__Update__180588580 @ 0x180588580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PathFinderFactory__Update__180588580(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  
  if (cRam00000001834b3987 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<PathFinder>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<PathFinder>.RemoveAt);
    FUN_180315380(MR_System.Collections.Generic.List<PathFinder>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<PathFinder>.get_Item);
    FUN_180315380(MD_PathFinder.FindPath);
    FUN_180315380(TI_System.Threading.ThreadStart);
    FUN_180315380();
    cRam00000001834b3987 = '\x01';
  }
  lVar6 = *(longlong *)(param_1 + 0x28);
  iVar9 = 0;
  if (lVar6 != 0) {
    while (iVar9 < *(int *)(lVar6 + 0x18)) {
      if ((*(longlong *)(param_1 + 0x28) == 0) ||
         (lVar6 = FUN_180bbafe0(*(longlong *)(param_1 + 0x28),iVar9,MR_System.Collections.Generic.List<PathFinder>.get_Item),
         lVar6 == 0)) goto code_r0x0001805887dc;
      cVar1 = *(char *)(lVar6 + 0x3c);
      func_0x000180315510();
      if (cVar1 == '\0') {
        iVar9 = iVar9 + 1;
      }
      else {
        if ((*(longlong *)(param_1 + 0x28) == 0) ||
           (lVar6 = FUN_180bbafe0(*(longlong *)(param_1 + 0x28),iVar9,MR_System.Collections.Generic.List<PathFinder>.get_Item),
           lVar6 == 0)) goto code_r0x0001805887dc;
        if (*(longlong *)(lVar6 + 0x10) != 0) {
          lVar3 = *(longlong *)(lVar6 + 0x10);
          (**(code **)(lVar3 + 0x18))
                    (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar6 + 0x18),
                     *(undefined8 *)(lVar3 + 0x28));
        }
        if (*(longlong *)(param_1 + 0x28) == 0) goto code_r0x0001805887dc;
        FUN_18164e790(*(longlong *)(param_1 + 0x28),iVar9,MR_System.Collections.Generic.List<PathFinder>.RemoveAt);
      }
      lVar6 = *(longlong *)(param_1 + 0x28);
      if (lVar6 == 0) goto code_r0x0001805887dc;
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      if (*(int *)(*(longlong *)(param_1 + 0x30) + 0x18) < 1) {
        return;
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        if (*(int *)(param_1 + 0x20) <= *(int *)(*(longlong *)(param_1 + 0x28) + 0x18)) {
          return;
        }
        uVar7 = FUN_180bbafe0(*(undefined8 *)(param_1 + 0x30),0,MR_System.Collections.Generic.List<PathFinder>.get_Item);
        if (*(longlong *)(param_1 + 0x30) != 0) {
          FUN_18164e790(*(longlong *)(param_1 + 0x30),0,MR_System.Collections.Generic.List<PathFinder>.RemoveAt);
          lVar3 = MR_System.Collections.Generic.List<PathFinder>.Add;
          lVar6 = *(longlong *)(param_1 + 0x28);
          if (lVar6 != 0) {
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            lVar4 = *(longlong *)(lVar6 + 0x10);
            if (lVar4 != 0) {
              uVar2 = *(uint *)(lVar6 + 0x18);
              if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                  FUN_1803155c0();
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                *(undefined8 *)(lVar4 + 0x20 + (longlong)(int)uVar2 * 8) = uVar7;
                func_0x000180314690(lVar4 + 0x20 + (longlong)(int)uVar2 * 8,uVar7);
              }
              else {
                FUN_181645af0(lVar6,uVar7,
                              *(undefined8 *)
                               (*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
              uVar8 = func_0x000180315580(TI_System.Threading.ThreadStart);
              FUN_1816a9c60(uVar8,uVar7,MD_PathFinder.FindPath,0);
              lVar6 = func_0x000180315580(TI_System.Threading.Thread);
              System_Threading_Thread___ctor(lVar6,uVar8,0);
              if (lVar6 != 0) {
                FUN_18191bb60(lVar6,0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_r0x0001805887dc:
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

