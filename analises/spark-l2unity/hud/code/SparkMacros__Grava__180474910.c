// SparkMacros__Grava__180474910 @ 0x180474910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMacros__Grava__180474910(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if (cRam00000001834b307f == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Comando>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Comando>.get_Item);
    FUN_180315380(TI_SparkMacros);
    FUN_180315380(TI_SparkPacoteLivre);
    FUN_180315380(LIT_"''");
    cRam00000001834b307f = '\x01';
  }
  lVar3 = func_0x000180315580(TI_SparkPacoteLivre);
  func_0x000180503ed0(lVar3,0xc1,0);
  if ((param_1 != 0) && (lVar3 != 0)) {
    lVar3 = SparkPacoteLivre__D(lVar3,*(undefined4 *)(param_1 + 0x10),0);
    if (lVar3 != 0) {
      lVar4 = SparkPacoteLivre__S(lVar3,*(undefined8 *)(param_1 + 0x18),0);
      lVar3 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar3 = LIT_"''";
      }
      if (lVar4 != 0) {
        lVar4 = SparkPacoteLivre__S(lVar4,lVar3,0);
        lVar3 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar3 = LIT_"''";
        }
        if (lVar4 != 0) {
          lVar3 = SparkPacoteLivre__S(lVar4,lVar3,0);
          if (lVar3 != 0) {
            lVar3 = SparkPacoteLivre__C(lVar3,*(undefined4 *)(param_1 + 0x30),0);
            if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar3 != 0)) {
              lVar3 = SparkPacoteLivre__C(lVar3,*(undefined4 *)
                                                 (*(longlong *)(param_1 + 0x38) + 0x18),0);
              iVar7 = 0;
              while (lVar4 = *(longlong *)(param_1 + 0x38), lVar4 != 0) {
                if (*(int *)(lVar4 + 0x18) <= iVar7) {
                  if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  if (DAT_1834b30fb == '\0') {
                    FUN_180315380(TI_GameClient);
                    DAT_1834b30fb = '\x01';
                  }
                  if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
                     (plVar1 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
                     plVar1 != (longlong *)0x0)) {
                    if (lVar3 == 0) break;
                    uVar6 = SparkPacoteLivre__Fim(lVar3,0);
                    (**(code **)(*plVar1 + 0x178))(plVar1,uVar6,*(undefined8 *)(*plVar1 + 0x180));
                  }
                  return;
                }
                lVar4 = FUN_180bbafe0(lVar4,iVar7,MR_System.Collections.Generic.List<SparkMacros.Comando>.get_Item);
                if (lVar3 == 0) break;
                lVar5 = SparkPacoteLivre__C(lVar3,iVar7 + 1,0);
                if ((lVar4 == 0) || (lVar5 == 0)) break;
                lVar5 = SparkPacoteLivre__C(lVar5,*(undefined4 *)(lVar4 + 0x14),0);
                if (lVar5 == 0) break;
                lVar5 = SparkPacoteLivre__D(lVar5,*(undefined4 *)(lVar4 + 0x18),0);
                if (lVar5 == 0) break;
                lVar5 = SparkPacoteLivre__C(lVar5,*(undefined4 *)(lVar4 + 0x1c),0);
                if (lVar5 == 0) break;
                SparkPacoteLivre__S(lVar5,*(undefined8 *)(lVar4 + 0x20),0);
                iVar7 = iVar7 + 1;
              }
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

