// SparkComandos__Executa__1805ed1c0 @ 0x1805ed1c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkComandos__Executa__1805ed1c0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined4 auStackX_8 [2];
  undefined4 auStackX_18 [2];
  
  if (cRam00000001834b3b40 == '\0') {
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(TI_ClanWindow);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,int>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
    FUN_180315380(TI_FriendWindow);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SMParam__);
    FUN_180315380(TI_SparkAmigos);
    FUN_180315380(TI_SparkCanal);
    FUN_180315380(TI_SparkClan);
    FUN_180315380(TI_SparkComandos);
    FUN_180315380(TI_SparkMacros);
    FUN_180315380(TI_SparkPacoteLivre);
    FUN_180315380(TI_SparkParty);
    FUN_180315380(TI_SparkPortaEntity);
    FUN_180315380(TI_SystemMessage);
    FUN_180315380(LIT_"'Usage: /gm message.'");
    FUN_180315380(LIT_"'useshortcutforce'");
    FUN_180315380(LIT_"'Item \"'");
    FUN_180315380(LIT_"'useshortcutstand'");
    FUN_180315380(LIT_"'duel'");
    FUN_180315380(LIT_"'channelinvite'");
    FUN_180315380(LIT_"'clanwarsurrender'");
    FUN_180315380(LIT_"'target'");
    FUN_180315380(LIT_"'\" not found.'");
    FUN_180315380(LIT_"'The command /'");
    FUN_180315380(LIT_"'friendlist'");
    FUN_180315380(LIT_"'allyinvite'");
    FUN_180315380(LIT_"'gm'");
    FUN_180315380(LIT_"'partyduel'");
    FUN_180315380(LIT_"'withdraw'");
    FUN_180315380(LIT_"'allydismiss'");
    FUN_180315380(LIT_"'invite'");
    FUN_180315380(LIT_"'Usage: /channelkick Name (or target the party leader).'");
    FUN_180315380(LIT_"'gmcancel'");
    FUN_180315380(LIT_"'frienddel'");
    FUN_180315380(LIT_"'useskillstand'");
    FUN_180315380(LIT_"'gmlist'");
    FUN_180315380(LIT_"'friendinvite'");
    FUN_180315380(LIT_"'allblock'");
    FUN_180315380(LIT_"'delay'");
    FUN_180315380(LIT_"'allyinfo'");
    FUN_180315380(LIT_"'changepartyleader'");
    FUN_180315380(LIT_"'Select the leader of the clan you want to invite.'");
    FUN_180315380(LIT_"'clanwarstart'");
    FUN_180315380(LIT_"'allunblock'");
    FUN_180315380(LIT_"'blocklist'");
    FUN_180315380(LIT_"'nick'");
    FUN_180315380(LIT_"'Skill \"'");
    FUN_180315380(LIT_"'Usage: /friendinvite Name (or target the player).'");
    FUN_180315380(LIT_"'unblock'");
    FUN_180315380(LIT_"'equip'");
    FUN_180315380(LIT_"'clanwarstop'");
    FUN_180315380(LIT_"'dismiss'");
    FUN_180315380(LIT_"'clan'");
    FUN_180315380(LIT_"' does not exist.'");
    FUN_180315380(LIT_"'useshortcut'");
    FUN_180315380(LIT_"'useskillforce'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'block'");
    FUN_180315380(LIT_"'useskill'");
    FUN_180315380(LIT_"'allyleave'");
    FUN_180315380(LIT_"'channelkick'");
    FUN_180315380(LIT_"'pledge'");
    FUN_180315380(LIT_"'allydissolve'");
    cRam00000001834b3b40 = '\x01';
  }
  auStackX_18[0] = 0;
  auStackX_8[0] = 0;
  if (((param_1 == 0) || (lVar7 = func_0x00018170c060(param_1,1,0), lVar7 == 0)) ||
     (lVar7 = func_0x00018170d270(lVar7,0), lVar7 == 0)) goto code_r0x0001805ee98a;
  iVar4 = func_0x0001817079f0(lVar7,0x20,0);
  lVar9 = LIT_"''";
  if (-1 < iVar4) {
    lVar8 = System_String__Substring(lVar7,0,iVar4,0);
    lVar7 = func_0x00018170c060(lVar7,iVar4 + 1,0);
    if (lVar7 == 0) goto code_r0x0001805ee98a;
    lVar9 = func_0x00018170d270(lVar7,0);
    lVar7 = lVar8;
  }
  if (DAT_1834b30fb == '\0') {
    FUN_180315380(TI_GameClient);
    DAT_1834b30fb = '\x01';
  }
  if ((**(longlong **)(TI_GameClient + 0xb8) == 0) || (lVar7 == 0)) goto code_r0x0001805ee98a;
  plVar13 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8);
  uVar10 = System_String__ToLowerInvariant(lVar7,0);
  uVar5 = _PrivateImplementationDetails___ComputeStringHash(uVar10,0);
  if (uVar5 < 0x69aef598) {
    if (uVar5 < 0x41966cbe) {
      if (uVar5 == 0x13886493) {
        cVar2 = func_0x0001817058a0(uVar10,LIT_"'equip'",0);
        if (cVar2 != '\0') {
          if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar7 = SparkMacros__ItemPeloNome__180474c10(lVar9,0);
          uVar10 = LIT_"'Item \"'";
          uVar11 = LIT_"'\" not found.'";
          if (lVar7 != 0) {
            if (*(char *)(lVar7 + 0x2e) != '\0') {
              return;
            }
            lVar9 = FUN_180458380(0);
            if (lVar9 != 0) {
              PlayerInventory__UseItem(lVar9,*(undefined4 *)(lVar7 + 0x18),0);
              return;
            }
            goto code_r0x0001805ee98a;
          }
          goto code_r0x0001805ed898;
        }
      }
      else if (uVar5 == 0x1831ab6e) {
        cVar2 = func_0x0001817058a0(uVar10,LIT_"'nick'",0);
        if (cVar2 != '\0') {
          if (lVar9 != 0) {
            if (*(int *)(lVar9 + 0x10) < 0x11) {
              if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
                func_0x000180315660();
              }
              lVar7 = SparkComandos__OutroJogador__1805eeb20(0);
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar2 = UnityEngine_Object__op_Inequality(lVar7,0,0);
              if (cVar2 == '\0') {
                lVar7 = FUN_1804169f0(0);
                if (lVar7 == 0) goto code_r0x0001805ee98a;
                lVar7 = *(longlong *)(lVar7 + 0x30);
              }
              else {
                if (lVar7 == 0) goto code_r0x0001805ee98a;
                lVar7 = *(longlong *)(lVar7 + 0x30);
              }
              if (lVar7 != 0) {
                uVar10 = *(undefined8 *)(lVar7 + 0x18);
                if (*(int *)(TI_SparkClan + 0xe4) == 0) {
                  func_0x000180315660();
                }
                SparkClan__Titulo(uVar10,lVar9,0);
                return;
              }
            }
            else {
              if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
                func_0x000180315660();
              }
              lVar7 = FUN_180458270(0);
              if (lVar7 == 0) {
                return;
              }
              uVar10 = func_0x000180314710(TI_SMParam__,0);
              lVar9 = SystemMessageTable__get_Instance(0);
              if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x10) != 0)) {
                uVar11 = FUN_1812035e0(*(longlong *)(lVar9 + 0x10),0x50,MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
                uVar12 = func_0x000180315580(TI_SystemMessage);
                AllianceMessage___ctor(uVar12,uVar10,uVar11,0);
                ChatWindow__ReceiveSystemMessage__1805cdb10(lVar7,uVar12,0);
                return;
              }
            }
          }
          goto code_r0x0001805ee98a;
        }
      }
      else if (uVar5 == 0x41966cbd) {
        cVar2 = func_0x0001817058a0(uVar10,LIT_"'partyduel'",0);
        goto joined_r0x0001805edc32;
      }
    }
    else if (uVar5 < 0x4ed1f1d9) {
      if (uVar5 == 0x44207a71) {
        cVar2 = func_0x0001817058a0(uVar10,LIT_"'gm'",0);
        if (cVar2 != '\0') {
          if (lVar9 == 0) goto code_r0x0001805ee98a;
          if (*(int *)(lVar9 + 0x10) == 0) {
            uVar10 = LIT_"'Usage: /gm message.'";
            if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
              func_0x000180315660();
              uVar10 = LIT_"'Usage: /gm message.'";
            }
            goto code_r0x0001805ed8bd;
          }
          lVar7 = func_0x000180315580(TI_SparkPacoteLivre);
          func_0x000180503ed0(lVar7,0x7f,0);
          if ((lVar7 == 0) || (lVar7 = SparkPacoteLivre__S(lVar7,lVar9,0), lVar7 == 0))
          goto code_r0x0001805ee98a;
          lVar7 = SparkPacoteLivre__D(lVar7,9,0);
          goto joined_r0x0001805ed99e;
        }
      }
      else if ((uVar5 == 0x4ed1f1d8) &&
              (cVar2 = func_0x0001817058a0(uVar10,LIT_"'delay'",0), cVar2 != '\0')) {
        return;
      }
    }
    else if (uVar5 == 0x56f8a227) {
      cVar2 = func_0x0001817058a0(uVar10,LIT_"'useskillstand'",0);
      if (cVar2 != '\0') goto code_r0x0001805ed824;
    }
    else if ((uVar5 == 0x69aef597) &&
            (cVar2 = func_0x0001817058a0(uVar10,LIT_"'withdraw'",0), cVar2 != '\0')) {
      if (plVar13 != (longlong *)0x0) {
        GameClientPacketHandler__RequestDuelSurrender(plVar13,0);
        return;
      }
      goto code_r0x0001805ee98a;
    }
    goto code_r0x0001805ed641;
  }
  if (uVar5 < 0xc151375a) {
    uVar11 = LIT_"'useskillforce'";
    if (uVar5 != 0x851d99f8) {
      if (uVar5 == 0x999b315d) {
        cVar2 = func_0x0001817058a0(uVar10,LIT_"'useshortcutforce'",0);
joined_r0x0001805ed6f4:
        if (cVar2 != '\0') {
          uVar10 = func_0x00018170d270(param_1,0);
          if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
            func_0x000180315660();
          }
          SparkMacros__UsaAtalho__180475b50(uVar10,0);
          return;
        }
        goto code_r0x0001805ed641;
      }
      uVar11 = LIT_"'useskill'";
      if (uVar5 != 0xc1513759) goto code_r0x0001805ed641;
    }
    cVar2 = func_0x0001817058a0(uVar10,uVar11,0);
    if (cVar2 == '\0') goto code_r0x0001805ed641;
code_r0x0001805ed824:
    if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
      func_0x000180315660();
    }
    iVar4 = SparkMacros__SkillPeloNome__180475760(lVar9,0);
    uVar10 = LIT_"'Skill \"'";
    uVar11 = LIT_"'\" not found.'";
    if (0 < iVar4) {
      if (DAT_1834b3103 == '\0') {
        FUN_180315380(TI_PlayerSkill);
        DAT_1834b3103 = '\x01';
      }
      if (**(longlong **)(TI_PlayerSkill + 0xb8) == 0) {
        return;
      }
      PlayerSkill__UseSkill(**(longlong **)(TI_PlayerSkill + 0xb8),iVar4,0);
      return;
    }
code_r0x0001805ed898:
    uVar10 = System_String__Concat(uVar10,lVar9,uVar11,0);
  }
  else {
    if (uVar5 < 0xd7a2681b) {
      if (uVar5 != 0xc17f7bcf) {
        uVar11 = LIT_"'useshortcutstand'";
        if (uVar5 == 0xd7a2681a) {
code_r0x0001805ed6e7:
          cVar2 = func_0x0001817058a0(uVar10,uVar11,0);
          goto joined_r0x0001805ed6f4;
        }
        goto code_r0x0001805ed641;
      }
      cVar2 = func_0x0001817058a0(uVar10,LIT_"'gmcancel'",0);
      if (cVar2 == '\0') goto code_r0x0001805ed641;
      lVar7 = func_0x000180315580(TI_SparkPacoteLivre);
      func_0x000180503ed0(lVar7,0x80,0);
joined_r0x0001805ed99e:
      if ((lVar7 != 0) && (uVar10 = SparkPacoteLivre__Fim(lVar7,0), plVar13 != (longlong *)0x0)) {
        (**(code **)(*plVar13 + 0x178))(plVar13,uVar10,*(undefined8 *)(*plVar13 + 0x180));
        return;
      }
      goto code_r0x0001805ee98a;
    }
    if (uVar5 == 0xde41751b) {
      cVar2 = func_0x0001817058a0(uVar10,LIT_"'duel'",0);
joined_r0x0001805edc32:
      if (cVar2 != '\0') {
        if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar8 = SparkComandos__OutroJogador__1805eeb20(0);
        if (lVar9 != 0) {
          if (*(int *)(lVar9 + 0x10) < 1) {
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar2 = UnityEngine_Object__op_Inequality(lVar8,0,0);
            lVar9 = LIT_"''";
            if (cVar2 != '\0') {
              if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0x30) == 0)) goto code_r0x0001805ee98a;
              lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x30) + 0x18);
            }
          }
          uVar3 = System_String__Equals(lVar7,LIT_"'partyduel'",5,0);
          if (plVar13 != (longlong *)0x0) {
            GameClientPacketHandler__RequestDuelStart(plVar13,lVar9,uVar3,0);
            return;
          }
        }
        goto code_r0x0001805ee98a;
      }
    }
    else {
      uVar11 = LIT_"'useshortcut'";
      if (uVar5 == 0xe517fe96) goto code_r0x0001805ed6e7;
    }
code_r0x0001805ed641:
    if (lVar9 == 0) goto code_r0x0001805ee98a;
    if (*(int *)(lVar9 + 0x10) < 1) {
code_r0x0001805ee1c7:
      uVar10 = System_String__ToLowerInvariant(lVar7,0);
      uVar5 = _PrivateImplementationDetails___ComputeStringHash(uVar10,0);
      if (uVar5 < 0x663e807d) {
        if (uVar5 < 0x285e8b49) {
          if (uVar5 == 0x13484269) {
            cVar2 = func_0x0001817058a0(uVar10,LIT_"'friendlist'",0);
            if (cVar2 != '\0') {
              if (*(int *)(TI_FriendWindow + 0xe4) == 0) {
                func_0x000180315660();
              }
              if (cRam00000001834b3bb7 == '\0') {
                FUN_180315380(TI_FriendWindow);
                cRam00000001834b3bb7 = '\x01';
              }
              lVar7 = TI_FriendWindow;
              if (*(int *)(TI_FriendWindow + 0xe4) == 0) {
                func_0x000180315660();
                lVar7 = TI_FriendWindow;
              }
              goto code_r0x0001805ee778;
            }
          }
          else if (uVar5 == 0x19bf999d) {
            cVar2 = func_0x0001817058a0(uVar10,LIT_"'channelinvite'",0);
            if (cVar2 != '\0') {
              if (*(int *)(TI_SparkCanal + 0xe4) == 0) {
                func_0x000180315660();
              }
              SparkCanal__Convida(0);
              return;
            }
          }
          else if ((uVar5 == 0x285e8b48) &&
                  (cVar2 = func_0x0001817058a0(uVar10,LIT_"'friendinvite'",0), cVar2 != '\0')) {
            uVar10 = FUN_18043b810(0);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar2 = UnityEngine_Object__op_Inequality(uVar10,0,0);
            if (cVar2 == '\0') {
              plVar13 = (longlong *)0x0;
            }
            else {
              lVar7 = FUN_18043b810(0);
              if (lVar7 == 0) goto code_r0x0001805ee98a;
              plVar13 = *(longlong **)(lVar7 + 0x20);
            }
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar2 = UnityEngine_Object__op_Equality(plVar13,0,0);
            if (cVar2 == '\0') {
              if (plVar13 == (longlong *)0x0) goto code_r0x0001805ee98a;
              if (plVar13[6] != 0) {
                uVar10 = FUN_1804169f0(0);
                if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                  func_0x000180315660();
                }
                cVar2 = UnityEngine_Object__op_Equality(plVar13,uVar10,0);
                if (cVar2 == '\0') {
                  if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(TI_SparkPortaEntity + 0x130)) ||
                     (*(longlong *)
                       (*(longlong *)(*plVar13 + 200) + -8 +
                       (ulonglong)*(byte *)(TI_SparkPortaEntity + 0x130) * 8) !=
                      TI_SparkPortaEntity)) {
                    lVar7 = plVar13[6];
                    if (lVar7 == 0) goto code_r0x0001805ee98a;
                    if ((*(int *)(lVar7 + 0x10) != 2) && (*(int *)(lVar7 + 0x10) != 3)) {
                      lVar9 = *(longlong *)(lVar7 + 0x18);
code_r0x0001805ee0d5:
                      if (*(int *)(TI_SparkAmigos + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      SparkAmigos__Convida(lVar9,0);
                      return;
                    }
                  }
                }
              }
            }
            uVar10 = LIT_"'Usage: /friendinvite Name (or target the player).'";
            if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
              func_0x000180315660();
              uVar10 = LIT_"'Usage: /friendinvite Name (or target the player).'";
            }
            goto code_r0x0001805ed8bd;
          }
        }
        else if (uVar5 < 0x3c82995e) {
          if (uVar5 == 0x2f203090) {
            cVar2 = func_0x0001817058a0(uVar10,LIT_"'pledge'",0);
            goto joined_r0x0001805ee668;
          }
          if ((uVar5 == 0x3c82995d) &&
             (cVar2 = func_0x0001817058a0(uVar10,LIT_"'allblock'",0), cVar2 != '\0')) {
            if (*(int *)(TI_SparkAmigos + 0xe4) == 0) {
              func_0x000180315660();
            }
            SparkAmigos__BloqueiaTodos(0);
            return;
          }
        }
        else if (uVar5 == 0x4124fa5d) {
          cVar2 = func_0x0001817058a0(uVar10,LIT_"'clan'",0);
joined_r0x0001805ee668:
          if (cVar2 != '\0') {
            if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
              func_0x000180315660();
            }
            if (cRam00000001834b3bb8 == '\0') {
              FUN_180315380(TI_ClanWindow);
              cRam00000001834b3bb8 = '\x01';
            }
            lVar7 = TI_ClanWindow;
            if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
              func_0x000180315660();
              lVar7 = TI_ClanWindow;
            }
code_r0x0001805ee778:
            plVar13 = (longlong *)**(longlong **)(lVar7 + 0xb8);
            if (plVar13 == (longlong *)0x0) {
              return;
            }
            (**(code **)(*plVar13 + 0x1e8))(plVar13,*(undefined8 *)(*plVar13 + 0x1f0));
            return;
          }
        }
        else if ((uVar5 == 0x663e807c) &&
                (cVar2 = func_0x0001817058a0(uVar10,LIT_"'allydissolve'",0), cVar2 != '\0')) {
          if (*(int *)(TI_SparkClan + 0xe4) == 0) {
            func_0x000180315660();
          }
          SparkClan__DissolveAlianca(0);
          return;
        }
      }
      else if (uVar5 < 0xa6c35193) {
        if (uVar5 == 0x70d95d23) {
          cVar2 = func_0x0001817058a0(uVar10,LIT_"'allyinfo'",0);
          if (cVar2 != '\0') {
            if (*(int *)(TI_SparkClan + 0xe4) == 0) {
              func_0x000180315660();
            }
            SparkClan__InfoDaAlianca(0);
            return;
          }
        }
        else if (uVar5 == 0x8e2c4d12) {
          cVar2 = func_0x0001817058a0(uVar10,LIT_"'allyleave'",0);
          if (cVar2 != '\0') {
            if (*(int *)(TI_SparkClan + 0xe4) == 0) {
              func_0x000180315660();
            }
            SparkClan__SaiDaAlianca(0);
            return;
          }
        }
        else if ((uVar5 == 0xa6c35192) &&
                (cVar2 = func_0x0001817058a0(uVar10,LIT_"'allyinvite'",0), cVar2 != '\0')) {
          uVar10 = FUN_18043b810(0);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar2 = UnityEngine_Object__op_Inequality(uVar10,0,0);
          if (cVar2 == '\0') {
            lVar7 = 0;
          }
          else {
            lVar7 = FUN_18043b810(0);
            if (lVar7 == 0) goto code_r0x0001805ee98a;
            lVar7 = *(longlong *)(lVar7 + 0x20);
          }
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar2 = UnityEngine_Object__op_Equality(lVar7,0,0);
          if (cVar2 == '\0') {
            if (lVar7 == 0) goto code_r0x0001805ee98a;
            if ((*(longlong *)(lVar7 + 0x30) != 0) &&
               ((lVar7 = *(longlong *)(lVar7 + 0x30), *(int *)(lVar7 + 0x10) == 0 ||
                (*(int *)(lVar7 + 0x10) == 1)))) {
              uVar6 = *(undefined4 *)(lVar7 + 0x14);
              if (*(int *)(TI_SparkClan + 0xe4) == 0) {
                func_0x000180315660();
              }
              SparkClan__ConvidaAlianca(uVar6,0);
              return;
            }
          }
          uVar10 = LIT_"'Select the leader of the clan you want to invite.'";
          if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
            func_0x000180315660();
            uVar10 = LIT_"'Select the leader of the clan you want to invite.'";
          }
          goto code_r0x0001805ed8bd;
        }
      }
      else if (uVar5 < 0xb42c8dde) {
        if (uVar5 == 0xb3a20332) {
          cVar2 = func_0x0001817058a0(uVar10,LIT_"'channelkick'",0);
          if (cVar2 != '\0') {
            if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
              func_0x000180315660();
            }
            lVar7 = SparkComandos__OutroJogador__1805eeb20(0);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar2 = UnityEngine_Object__op_Equality(lVar7,0,0);
            if (cVar2 == '\0') {
              if (((lVar7 != 0) && (*(longlong *)(lVar7 + 0x30) != 0)) &&
                 (plVar13 != (longlong *)0x0)) {
                GameClientPacketHandler__RequestExOustFromMPCC
                          (plVar13,*(undefined8 *)(*(longlong *)(lVar7 + 0x30) + 0x18),0);
                return;
              }
              goto code_r0x0001805ee98a;
            }
            uVar10 = LIT_"'Usage: /channelkick Name (or target the party leader).'";
            if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
              func_0x000180315660();
              uVar10 = LIT_"'Usage: /channelkick Name (or target the party leader).'";
            }
            goto code_r0x0001805ed8bd;
          }
        }
        else if ((uVar5 == 0xb42c8ddd) &&
                (cVar2 = func_0x0001817058a0(uVar10,LIT_"'gmlist'",0), cVar2 != '\0')) {
          lVar7 = func_0x000180315580(TI_SparkPacoteLivre);
          func_0x000180503ed0(lVar7,0x81,0);
          goto joined_r0x0001805ed99e;
        }
      }
      else if (uVar5 == 0xc120dec8) {
        cVar2 = func_0x0001817058a0(uVar10,LIT_"'allunblock'",0);
        if (cVar2 != '\0') {
          if (*(int *)(TI_SparkAmigos + 0xe4) == 0) {
            func_0x000180315660();
          }
          SparkAmigos__DesbloqueiaTodos(0);
          return;
        }
      }
      else if ((uVar5 == 0xcc87535e) &&
              (cVar2 = func_0x0001817058a0(uVar10,LIT_"'blocklist'",0), cVar2 != '\0')) {
        if (*(int *)(TI_SparkAmigos + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkAmigos__ListaDeBloqueio(0);
        return;
      }
      if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
        func_0x000180315660(TI_SparkComandos);
      }
      if (**(longlong **)(TI_SparkComandos + 0xb8) == 0) {
code_r0x0001805ee98a:
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      cVar2 = FUN_18125ae60(**(longlong **)(TI_SparkComandos + 0xb8),lVar7,auStackX_18,
                            MR_System.Collections.Generic.Dictionary<string,int>.TryGetValue);
      if (cVar2 != '\0') {
        if (DAT_1834b3104 == '\0') {
          FUN_180315380(TI_PlayerActions);
          DAT_1834b3104 = '\x01';
        }
        if (**(longlong **)(TI_PlayerActions + 0xb8) == 0) {
          return;
        }
        PlayerActions__UseAction(**(longlong **)(TI_PlayerActions + 0xb8),auStackX_18[0],0);
        return;
      }
      if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
        func_0x000180315660(TI_SparkComandos);
      }
      lVar9 = *(longlong *)(*(longlong *)(TI_SparkComandos + 0xb8) + 8);
      if (lVar9 == 0) goto code_r0x0001805ee98a;
      cVar2 = FUN_18125ae60(lVar9,lVar7,auStackX_8,MR_System.Collections.Generic.Dictionary<string,int>.TryGetValue);
      uVar10 = LIT_"'The command /'";
      lVar9 = lVar7;
      uVar11 = LIT_"' does not exist.'";
      if (cVar2 != '\0') {
        if (plVar13 != (longlong *)0x0) {
          GameClientPacketHandler__RequestUserCommand(plVar13,auStackX_8[0],0);
          return;
        }
        goto code_r0x0001805ee98a;
      }
      goto code_r0x0001805ed898;
    }
    uVar10 = System_String__ToLowerInvariant(lVar7,0);
    uVar5 = _PrivateImplementationDetails___ComputeStringHash(uVar10,0);
    if (0x5eec48f2 < uVar5) {
      if (uVar5 < 0xb0ac5676) {
        if (uVar5 == 0x63ea0cd7) {
          cVar2 = func_0x0001817058a0(uVar10,LIT_"'clanwarstart'",0);
          if (cVar2 != '\0') {
            if (*(int *)(TI_SparkClan + 0xe4) == 0) {
              func_0x000180315660();
            }
            SparkClan__DeclaraGuerra(lVar9,0);
            return;
          }
        }
        else if (uVar5 == 0x67d3a1bf) {
          cVar2 = func_0x0001817058a0(uVar10,LIT_"'unblock'",0);
          if (cVar2 != '\0') {
            if (*(int *)(TI_SparkAmigos + 0xe4) == 0) {
              func_0x000180315660();
            }
            SparkAmigos__Desbloqueia(lVar9,0);
            return;
          }
        }
        else if ((uVar5 == 0xb0ac5675) &&
                (cVar2 = func_0x0001817058a0(uVar10,LIT_"'clanwarsurrender'",0), cVar2 != '\0')) {
          if (*(int *)(TI_SparkClan + 0xe4) == 0) {
            func_0x000180315660();
          }
          SparkClan__Rende(lVar9,0);
          return;
        }
      }
      else if (uVar5 < 0xcc5442a6) {
        if (uVar5 == 0xb3a20332) {
          cVar2 = func_0x0001817058a0(uVar10,LIT_"'channelkick'",0);
          if (cVar2 != '\0') {
            if (plVar13 != (longlong *)0x0) {
              GameClientPacketHandler__RequestExOustFromMPCC(plVar13,lVar9,0);
              return;
            }
            goto code_r0x0001805ee98a;
          }
        }
        else if ((uVar5 == 0xcc5442a5) &&
                (cVar2 = func_0x0001817058a0(uVar10,LIT_"'allydismiss'",0), cVar2 != '\0')) {
          if (*(int *)(TI_SparkClan + 0xe4) == 0) {
            func_0x000180315660();
          }
          SparkClan__ExpulsaDaAlianca(lVar9,0);
          return;
        }
      }
      else if (uVar5 == 0xeb0cbd62) {
        cVar2 = func_0x0001817058a0(uVar10,LIT_"'block'",0);
        if (cVar2 != '\0') {
          if (*(int *)(TI_SparkAmigos + 0xe4) == 0) {
            func_0x000180315660();
          }
          SparkAmigos__Bloqueia(lVar9,0);
          return;
        }
      }
      else if ((uVar5 == 0xed2aae2a) &&
              (cVar2 = func_0x0001817058a0(uVar10,LIT_"'changepartyleader'",0), cVar2 != '\0')) {
        if (plVar13 != (longlong *)0x0) {
          GameClientPacketHandler__RequestChangePartyLeader(plVar13,lVar9,0);
          return;
        }
        goto code_r0x0001805ee98a;
      }
      goto code_r0x0001805ee1c7;
    }
    if (uVar5 < 0x19bf999e) {
      if (uVar5 == 0x11bd3353) {
        cVar2 = func_0x0001817058a0(uVar10,LIT_"'dismiss'",0);
        if (cVar2 != '\0') {
          if (plVar13 != (longlong *)0x0) {
            GameClientPacketHandler__RequestOustPartyMember(plVar13,lVar9,0);
            return;
          }
          goto code_r0x0001805ee98a;
        }
      }
      else if (uVar5 == 0x13860110) {
        cVar2 = func_0x0001817058a0(uVar10,LIT_"'invite'",0);
        if (cVar2 != '\0') {
          if (*(int *)(TI_SparkParty + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar6 = SparkParty__get_DistribuicaoDoConvite(0);
          if (plVar13 != (longlong *)0x0) {
            GameClientPacketHandler__RequestJoinParty(plVar13,lVar9,uVar6,0);
            return;
          }
          goto code_r0x0001805ee98a;
        }
      }
      else if ((uVar5 == 0x19bf999d) &&
              (cVar2 = func_0x0001817058a0(uVar10,LIT_"'channelinvite'",0), cVar2 != '\0')) {
        if (plVar13 != (longlong *)0x0) {
          GameClientPacketHandler__RequestExAskJoinMPCC(plVar13,lVar9,0);
          return;
        }
        goto code_r0x0001805ee98a;
      }
      goto code_r0x0001805ee1c7;
    }
    if (uVar5 < 0x285e8b49) {
      if (uVar5 == 0x1a1400bd) {
        cVar2 = func_0x0001817058a0(uVar10,LIT_"'clanwarstop'",0);
        if (cVar2 != '\0') {
          if (*(int *)(TI_SparkClan + 0xe4) == 0) {
            func_0x000180315660();
          }
          SparkClan__TerminaGuerra(lVar9,0);
          return;
        }
      }
      else if ((uVar5 == 0x285e8b48) &&
              (cVar2 = func_0x0001817058a0(uVar10,LIT_"'friendinvite'",0), cVar2 != '\0'))
      goto code_r0x0001805ee0d5;
      goto code_r0x0001805ee1c7;
    }
    if (uVar5 != 0x32608848) {
      if ((uVar5 == 0x5eec48f2) &&
         (cVar2 = func_0x0001817058a0(uVar10,LIT_"'frienddel'",0), cVar2 != '\0')) {
        if (*(int *)(TI_SparkAmigos + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkAmigos__Remove(lVar9,0);
        return;
      }
      goto code_r0x0001805ee1c7;
    }
    cVar2 = func_0x0001817058a0(uVar10,LIT_"'target'",0);
    if (cVar2 == '\0') goto code_r0x0001805ee1c7;
    if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b3b42 == '\0') {
      FUN_180315380(TI_UnityEngine.Object);
      FUN_180315380(TI_SparkComandos);
      FUN_180315380(LIT_"' is not in sight.'");
      cRam00000001834b3b42 = '\x01';
    }
    if (cRam00000001834b31bd == '\0') {
      FUN_180315380(TI_WorldSpawner);
      cRam00000001834b31bd = '\x01';
    }
    uVar10 = **(undefined8 **)(TI_WorldSpawner + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    if (cVar2 == '\0') {
      uVar10 = 0;
    }
    else {
      if (cRam00000001834b31bd == '\0') {
        FUN_180315380(TI_WorldSpawner);
        cRam00000001834b31bd = '\x01';
      }
      if (**(longlong **)(TI_WorldSpawner + 0xb8) == 0) goto code_r0x0001805ee98a;
      uVar10 = WorldSpawner__BuscaPorNome(**(longlong **)(TI_WorldSpawner + 0xb8),lVar9,0);
    }
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Equality(uVar10,0,0);
    if (cVar2 == '\0') {
      if (DAT_1834b3015 == '\0') {
        FUN_180315380(TI_TargetManager);
        DAT_1834b3015 = '\x01';
      }
      if (**(longlong **)(TI_TargetManager + 0xb8) != 0) {
        TargetManager__SetTarget__1807eaf40(**(longlong **)(TI_TargetManager + 0xb8),uVar10,0);
        return;
      }
      goto code_r0x0001805ee98a;
    }
    uVar10 = System_String__Concat(lVar9,LIT_"' is not in sight.'",0);
  }
  if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
    func_0x000180315660();
  }
code_r0x0001805ed8bd:
  SparkComandos__Diz__1805ed000(uVar10,0);
  return;
}

