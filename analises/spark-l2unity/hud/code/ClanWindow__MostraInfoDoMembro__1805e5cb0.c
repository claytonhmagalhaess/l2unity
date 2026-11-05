// ClanWindow__MostraInfoDoMembro__1805e5cb0 @ 0x1805e5cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ClanWindow__MostraInfoDoMembro__1805e5cb0
               (longlong param_1,int param_2,undefined8 param_3,longlong param_4,int param_5,
               undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int aiStackX_18 [2];
  
  if (cRam00000001834b3b68 == '\0') {
    FUN_180315380(TI_ClanWindow);
    FUN_180315380(MR_System.Collections.Generic.List<SparkClan.Membro>.Find);
    FUN_180315380(TI_System.Predicate<SparkClan.Membro>);
    FUN_180315380(TI_SparkClan);
    FUN_180315380(MD_ClanWindow.__c__DisplayClass76_0._MostraInfoDoMembro_b__0);
    FUN_180315380(TI_ClanWindow.<>c__DisplayClass76_0);
    FUN_180315380(LIT_"'Main Clan'");
    FUN_180315380(LIT_"'-'");
    FUN_180315380(LIT_"'Apprentice: '");
    FUN_180315380(LIT_"')'");
    FUN_180315380(LIT_"'Sponsor: '");
    FUN_180315380(LIT_"' ('");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"' (rank {0})'");
    cRam00000001834b3b68 = '\x01';
  }
  lVar4 = func_0x000180315580(TI_ClanWindow.<>c__DisplayClass76_0);
  Gear__UpdateWeaponType__1803dadf0(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = param_3;
    func_0x000180314690(lVar4 + 0x10,param_3);
    uVar5 = *(undefined8 *)(lVar4 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x108);
    if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = System_String__Equals(uVar5,uVar7,5,0);
    if (cVar3 == '\0') {
      return;
    }
    if (*(int *)(TI_SparkClan + 0xe4) == 0) {
      func_0x000180315660(TI_SparkClan);
    }
    lVar6 = *(longlong *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x48);
    uVar5 = func_0x000180315580(TI_System.Predicate<SparkClan.Membro>);
    FUN_180d27680(uVar5,lVar4,MD_ClanWindow.__c__DisplayClass76_0._MostraInfoDoMembro_b__0,0);
    if (lVar6 != 0) {
      lVar6 = FUN_180bad500(lVar6,uVar5,MR_System.Collections.Generic.List<SparkClan.Membro>.Find);
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x24) == '\0')) {
        plVar1 = *(longlong **)(param_1 + 0x130);
        uVar5 = *(undefined8 *)(lVar4 + 0x10);
        if (*(int *)(TI_SparkClan + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar5 = SparkClan__UltimoLogin(uVar5,0);
        if (plVar1 == (longlong *)0x0) goto code_r0x0001805e60d7;
        (**(code **)(*plVar1 + 0xe48))(plVar1,uVar5,*(undefined8 *)(*plVar1 + 0xe50));
      }
      plVar1 = *(longlong **)(param_1 + 0x138);
      cVar3 = func_0x000181707e50(param_4,0);
      lVar4 = param_4;
      if (cVar3 != '\0') {
        lVar4 = LIT_"'-'";
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0xe48))(plVar1,lVar4,*(undefined8 *)(*plVar1 + 0xe50));
        lVar4 = LIT_"''";
        if (param_4 != 0) {
          lVar4 = param_4;
        }
        plVar1 = *(longlong **)(param_1 + 0x180);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0xb28))(plVar1,lVar4,*(undefined8 *)(*plVar1 + 0xb30));
          plVar1 = *(longlong **)(param_1 + 0x140);
          lVar4 = LIT_"'-'";
          if (0 < param_5) {
            if (*(int *)(TI_SparkClan + 0xe4) == 0) {
              func_0x000180315660();
            }
            uVar5 = SparkClan__NomeDoRank(param_5,0);
            lVar4 = LIT_"''";
            if (3 < param_5 - 2U) {
              aiStackX_18[0] = param_5;
              uVar7 = func_0x000180314670(_DAT_1834c6268,aiStackX_18);
              lVar4 = System_String__Format(LIT_"' (rank {0})'",uVar7,0);
            }
            lVar4 = System_String__Concat(uVar5,lVar4,0);
          }
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0xe48))(plVar1,lVar4,*(undefined8 *)(*plVar1 + 0xe50));
            if (param_5 - 2U < 7) {
              lVar4 = *(longlong *)(param_1 + 0x198);
              if (lVar4 == 0) goto code_r0x0001805e60d7;
              (**(code **)(lVar4 + 0x18))
                        (*(undefined8 *)(lVar4 + 0x40),param_5 + -2,*(undefined8 *)(lVar4 + 0x28));
            }
            plVar1 = *(longlong **)(param_1 + 0x148);
            uVar5 = LIT_"'Main Clan'";
            if (param_2 != 0) {
              if (*(int *)(TI_SparkClan + 0xe4) == 0) {
                func_0x000180315660();
              }
              uVar5 = SparkClan__TipoDaUnidade(param_2,0);
              uVar5 = System_String__Concat
                                (uVar5,LIT_"' ('",param_6,LIT_"')'",0);
            }
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0xe48))(plVar1,uVar5,*(undefined8 *)(*plVar1 + 0xe50));
              plVar1 = *(longlong **)(param_1 + 0x150);
              cVar3 = func_0x000181707e50(param_7,0);
              lVar4 = LIT_"''";
              if (cVar3 == '\0') {
                uVar5 = LIT_"'Apprentice: '";
                if (param_2 == -1) {
                  uVar5 = LIT_"'Sponsor: '";
                }
                lVar4 = System_String__Concat(uVar5,param_7,0);
              }
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0xe48))(plVar1,lVar4,*(undefined8 *)(*plVar1 + 0xe50));
                return;
              }
            }
          }
        }
      }
    }
  }
code_r0x0001805e60d7:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

