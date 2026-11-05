// L2GameUI__CheckUIInputs__1807714d0 @ 0x1807714d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2GameUI__CheckUIInputs__1807714d0(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if (cRam00000001834b43ed == '\0') {
    FUN_180315380(TI_ActionWindow);
    FUN_180315380(TI_BoardWindow);
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(TI_ClanWindow);
    FUN_180315380(TI_FriendWindow);
    FUN_180315380(TI_L2Window);
    FUN_180315380(MR_System.Collections.Generic.List<L2PopupWindow>.RemoveAll);
    FUN_180315380(MR_System.Collections.Generic.List<L2PopupWindow>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<L2PopupWindow>.get_Item);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_System.Predicate<L2PopupWindow>);
    FUN_180315380(TI_SparkComandos);
    FUN_180315380(TI_SparkGmWindow);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(TI_SparkRadarWindow);
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(MD_L2GameUI.__c._CheckUIInputs_b__17_0);
    FUN_180315380(TI_L2GameUI.<>c);
    FUN_180315380(LIT_"'Macro'");
    FUN_180315380(LIT_"'Board'");
    FUN_180315380(LIT_"'HideUI'");
    FUN_180315380(LIT_"'LowDetail'");
    FUN_180315380(LIT_"'Mute'");
    FUN_180315380(LIT_"'Gm'");
    FUN_180315380(LIT_"'Radar'");
    FUN_180315380(LIT_"'ResetLayout'");
    FUN_180315380(LIT_"'Friends'");
    FUN_180315380(LIT_"'Map'");
    FUN_180315380(LIT_"'Clan'");
    FUN_180315380(LIT_"'PartyBuffs'");
    FUN_180315380(LIT_"'The interface was reset to the default layout.'");
    FUN_180315380(LIT_"'Quest'");
    FUN_180315380(LIT_"'HideChat'");
    cRam00000001834b43ed = '\x01';
  }
  if (DAT_1834b3532 == '\0') {
    FUN_180315380(TI_InputManager);
    DAT_1834b3532 = '\x01';
  }
  if (**(longlong **)(TI_InputManager + 0xb8) == 0) goto code_r0x000180772519;
  if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xf3) != '\0') {
    if (cRam00000001834b31cd == '\0') {
      FUN_180315380(TI_CharacterInfoWindow);
      cRam00000001834b31cd = '\x01';
    }
    uVar6 = **(undefined8 **)(TI_CharacterInfoWindow + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if (cVar3 != '\0') {
      if (cRam00000001834b31cd == '\0') {
        FUN_180315380(TI_CharacterInfoWindow);
        cRam00000001834b31cd = '\x01';
      }
      plVar8 = (longlong *)**(longlong **)(TI_CharacterInfoWindow + 0xb8);
      if (plVar8 == (longlong *)0x0) goto code_r0x000180772519;
      (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
    }
  }
  if (DAT_1834b3532 == '\0') {
    FUN_180315380(TI_InputManager);
    DAT_1834b3532 = '\x01';
  }
  if (**(longlong **)(TI_InputManager + 0xb8) == 0) goto code_r0x000180772519;
  if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xf2) != '\0') {
    if (cRam00000001834b30fc == '\0') {
      FUN_180315380(TI_InventoryWindow);
      cRam00000001834b30fc = '\x01';
    }
    uVar6 = **(undefined8 **)(TI_InventoryWindow + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if (cVar3 != '\0') {
      if (cRam00000001834b30fc == '\0') {
        FUN_180315380(TI_InventoryWindow);
        cRam00000001834b30fc = '\x01';
      }
      plVar8 = (longlong *)**(longlong **)(TI_InventoryWindow + 0xb8);
      if (plVar8 == (longlong *)0x0) goto code_r0x000180772519;
      (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
    }
  }
  if (DAT_1834b3532 == '\0') {
    FUN_180315380(TI_InputManager);
    DAT_1834b3532 = '\x01';
  }
  if (**(longlong **)(TI_InputManager + 0xb8) == 0) goto code_r0x000180772519;
  if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xf4) != '\0') {
    if (cRam00000001834b3ea9 == '\0') {
      FUN_180315380(TI_SystemMenuWindow);
      cRam00000001834b3ea9 = '\x01';
    }
    uVar6 = **(undefined8 **)(TI_SystemMenuWindow + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if (cVar3 != '\0') {
      if (cRam00000001834b3ea9 == '\0') {
        FUN_180315380(TI_SystemMenuWindow);
        cRam00000001834b3ea9 = '\x01';
      }
      plVar8 = (longlong *)**(longlong **)(TI_SystemMenuWindow + 0xb8);
      if (plVar8 == (longlong *)0x0) goto code_r0x000180772519;
      (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
    }
  }
  if (DAT_1834b32c2 == '\0') {
    FUN_180315380(TI_UnityEngine.InputSystem.Keyboard);
    DAT_1834b32c2 = '\x01';
  }
  lVar7 = **(longlong **)(TI_UnityEngine.InputSystem.Keyboard + 0xb8);
  if (*(char *)(param_1 + 0x88) == '\0') {
    if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (DAT_1834b3105 == '\0') {
      FUN_180315380(TI_ChatWindow);
      DAT_1834b3105 = '\x01';
    }
    if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar6 = *(undefined8 *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if (cVar3 == '\0') {
      cVar3 = '\0';
    }
    else {
      if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (DAT_1834b3105 == '\0') {
        FUN_180315380(TI_ChatWindow);
        DAT_1834b3105 = '\x01';
      }
      if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar5 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8);
      if (lVar5 == 0) goto code_r0x000180772519;
      if (*(char *)(lVar5 + 0x88) == '\0') {
        if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar5 = FUN_180458270(0);
        if (lVar5 == 0) goto code_r0x000180772519;
        cVar3 = ChatWindow__get_TeclaViraTexto(lVar5,0);
      }
      else {
        cVar3 = '\x01';
      }
    }
  }
  else {
    cVar3 = '\x01';
  }
  if ((lVar7 != 0) && (cVar3 == '\0')) {
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = SparkTeclas__get_Trocando(0);
    if (cVar3 == '\0') {
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
      }
      iVar4 = SparkTeclas__PaginaPedida__1804ce010(0);
      if (-1 < iVar4) {
        uVar6 = FUN_180493b20(0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if (cVar3 != '\0') {
          lVar7 = FUN_180493b20(0);
          if (lVar7 == 0) goto code_r0x000180772519;
          SkillbarWindow__OnPageChanged__1807077b0(lVar7,0,iVar4,0);
        }
      }
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = SparkTeclas__Apertou__1804ca540(LIT_"'HideUI'",0);
      if (cVar3 != '\0') {
        L2GameUI__TrocaInterface__180775c30(param_1,0);
      }
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = SparkTeclas__Apertou__1804ca540(LIT_"'Mute'",0);
      if (cVar3 != '\0') {
        if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkOpcoes__TrocaMudo__1804a72d0(0);
      }
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = SparkTeclas__Apertou__1804ca540(LIT_"'LowDetail'",0);
      if (cVar3 != '\0') {
        if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkOpcoes__TrocaMinimo__1804a6f80(0);
      }
      if (*(char *)(param_1 + 0x89) == '\0') {
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = SparkTeclas__Apertou__1804ca540(LIT_"'HideChat'",0);
        if (cVar3 != '\0') {
          if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar7 = FUN_180458270(0);
          if (lVar7 != 0) {
            ChatWindow__TrocaOculto__1805cf310(lVar7,0);
          }
        }
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = SparkTeclas__Apertou__1804ca540(LIT_"'PartyBuffs'",0);
        if ((cVar3 != '\0') && (lVar7 = FUN_1806a4800(0), lVar7 != 0)) {
          PartyWindow__TrocaModoBuff(lVar7,0);
        }
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = SparkTeclas__Apertou__1804ca540(LIT_"'ResetLayout'",0);
        if (cVar3 != '\0') {
          if (*(int *)(TI_L2Window + 0xe4) == 0) {
            func_0x000180315660();
          }
          L2Window__TodasNaPosicaoPadrao__18079b0c0(0);
          lVar7 = FUN_1806a48a0(0);
          if (lVar7 != 0) {
            SparkQuestHud__Padrao__1806b35c0(lVar7,0);
          }
          if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar7 = FUN_180458270(0);
          if (lVar7 != 0) {
            ChatWindow__TamanhoPadrao__1805cea60(lVar7,0);
          }
          if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
            func_0x000180315660();
          }
          SparkComandos__Diz__1805ed000(LIT_"'The interface was reset to the default layout.'",0);
        }
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = SparkTeclas__Apertou__1804ca540(LIT_"'Macro'",0);
        if ((cVar3 != '\0') && (plVar8 = (longlong *)FUN_180752750(0), plVar8 != (longlong *)0x0)) {
          (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
        }
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = SparkTeclas__Apertou__1804ca540(LIT_"'Gm'",0);
        if (cVar3 != '\0') {
          if (*(int *)(TI_SparkGmWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          plVar8 = (longlong *)FUN_18076eb80(0);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
          }
        }
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = SparkTeclas__Apertou__1804ca540(LIT_"'Quest'",0);
        if ((cVar3 != '\0') && (plVar8 = (longlong *)FUN_180673e00(0), plVar8 != (longlong *)0x0)) {
          (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
        }
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = SparkTeclas__Apertou__1804ca540(LIT_"'Clan'",0);
        if (cVar3 != '\0') {
          if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          plVar8 = (longlong *)FUN_1805db0f0(0);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
          }
        }
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = SparkTeclas__Apertou__1804ca540(LIT_"'Friends'",0);
        if (cVar3 != '\0') {
          if (*(int *)(TI_FriendWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          plVar8 = (longlong *)FUN_1805db140(0);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
          }
        }
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = SparkTeclas__Apertou__1804ca540(LIT_"'Map'",0);
        if (cVar3 != '\0') {
          if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          plVar8 = (longlong *)FUN_1804b45f0(0);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
          }
        }
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = SparkTeclas__Apertou__1804ca540(LIT_"'Radar'",0);
        if (cVar3 != '\0') {
          if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          plVar8 = (longlong *)FUN_180637540(0);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
          }
        }
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = SparkTeclas__Apertou__1804ca540(LIT_"'Board'",0);
        if (cVar3 != '\0') {
          if (*(int *)(TI_BoardWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          plVar8 = (longlong *)FUN_180752700(0);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
          }
        }
      }
    }
  }
  if (DAT_1834b3532 == '\0') {
    FUN_180315380(TI_InputManager);
    DAT_1834b3532 = '\x01';
  }
  if (**(longlong **)(TI_InputManager + 0xb8) == 0) goto code_r0x000180772519;
  if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xf5) != '\0') {
    if (*(int *)(TI_ActionWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b3542 == '\0') {
      FUN_180315380(TI_ActionWindow);
      cRam00000001834b3542 = '\x01';
    }
    if (*(int *)(TI_ActionWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar6 = **(undefined8 **)(TI_ActionWindow + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if (cVar3 != '\0') {
      if (*(int *)(TI_ActionWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (cRam00000001834b3542 == '\0') {
        FUN_180315380(TI_ActionWindow);
        cRam00000001834b3542 = '\x01';
      }
      if (*(int *)(TI_ActionWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      plVar8 = (longlong *)**(longlong **)(TI_ActionWindow + 0xb8);
      if (plVar8 == (longlong *)0x0) goto code_r0x000180772519;
      (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
    }
  }
  if (DAT_1834b3532 == '\0') {
    FUN_180315380(TI_InputManager);
    DAT_1834b3532 = '\x01';
  }
  if (**(longlong **)(TI_InputManager + 0xb8) == 0) goto code_r0x000180772519;
  if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xf7) != '\0') {
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = SparkTeclas__get_Trocando(0);
    if (cVar3 == '\0') {
      iVar4 = FUN_1824364b0(0);
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (1 < iVar4 - *(int *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x38)) {
        if (DAT_1834b2f34 == '\0') {
          FUN_180315380(TI_PlayerStateMachine);
          DAT_1834b2f34 = '\x01';
        }
        if ((**(longlong **)(TI_PlayerStateMachine + 0xb8) != 0) &&
           (*(int *)(**(longlong **)(TI_PlayerStateMachine + 0xb8) + 0x24) == 10)) {
          return;
        }
        if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar6 = FUN_180458270(0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if (cVar3 != '\0') {
          if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar7 = FUN_180458270(0);
          if (lVar7 == 0) goto code_r0x000180772519;
          if (*(char *)(lVar7 + 0x88) != '\0') {
            if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
              func_0x000180315660();
            }
            lVar7 = FUN_180458270(0);
            if (lVar7 != 0) {
              ChatWindow__CloseChat__1805c6330(lVar7,0,0);
              return;
            }
            goto code_r0x000180772519;
          }
        }
        if (*(longlong *)(param_1 + 0x80) != 0) {
          uVar6 = *(undefined8 *)(param_1 + 0x80);
          if (*(int *)(TI_L2GameUI.<>c + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar7 = *(longlong *)(*(longlong *)(TI_L2GameUI.<>c + 0xb8) + 8);
          if (lVar7 == 0) {
            if (*(int *)(TI_L2GameUI.<>c + 0xe4) == 0) {
              func_0x000180315660();
            }
            uVar1 = **(undefined8 **)(TI_L2GameUI.<>c + 0xb8);
            lVar7 = func_0x000180315580(TI_System.Predicate<L2PopupWindow>);
            FUN_180d27680(lVar7,uVar1,MD_L2GameUI.__c._CheckUIInputs_b__17_0,0);
            *(longlong *)(*(longlong *)(TI_L2GameUI.<>c + 0xb8) + 8) = lVar7;
            func_0x000180314690(*(longlong *)(TI_L2GameUI.<>c + 0xb8) + 8,lVar7);
          }
          FUN_18164dab0(uVar6,lVar7,MR_System.Collections.Generic.List<L2PopupWindow>.RemoveAll);
          if ((*(longlong *)(param_1 + 0x80) != 0) &&
             (lVar7 = *(longlong *)(param_1 + 0x80), 0 < *(int *)(lVar7 + 0x18))) {
            if ((lVar7 == 0) ||
               (plVar8 = (longlong *)
                         FUN_180bbafe0(lVar7,*(int *)(lVar7 + 0x18) + -1,MR_System.Collections.Generic.List<L2PopupWindow>.get_Item),
               plVar8 == (longlong *)0x0)) goto code_r0x000180772519;
            (**(code **)(*plVar8 + 0x1c8))(plVar8,0,*(undefined8 *)(*plVar8 + 0x1d0));
            goto code_r0x00018077242d;
          }
        }
        uVar6 = FUN_18043b810(0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if (cVar3 != '\0') {
          lVar7 = FUN_18043b810(0);
          if (lVar7 == 0) goto code_r0x000180772519;
          cVar3 = TargetManager__HasTarget__1807ea7b0(lVar7,0);
          if (cVar3 != '\0') {
            lVar7 = FUN_18043b810(0);
            if (lVar7 == 0) goto code_r0x000180772519;
            TargetManager__ClearTarget__1807e9f10(lVar7,0);
          }
        }
      }
    }
  }
code_r0x00018077242d:
  if (DAT_1834b3532 == '\0') {
    FUN_180315380(TI_InputManager);
    DAT_1834b3532 = '\x01';
  }
  if (**(longlong **)(TI_InputManager + 0xb8) == 0) {
code_r0x000180772519:
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xf6) != '\0') {
    if (cRam00000001834b3541 == '\0') {
      FUN_180315380(TI_SkillWindow);
      cRam00000001834b3541 = '\x01';
    }
    uVar6 = **(undefined8 **)(TI_SkillWindow + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if (cVar3 != '\0') {
      if (cRam00000001834b3541 == '\0') {
        FUN_180315380(TI_SkillWindow);
        cRam00000001834b3541 = '\x01';
      }
      plVar8 = (longlong *)**(longlong **)(TI_SkillWindow + 0xb8);
      if (plVar8 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180772512. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
        return;
      }
      goto code_r0x000180772519;
    }
  }
  return;
}

