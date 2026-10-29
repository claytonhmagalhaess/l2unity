// L2GameUI__Update__180775eb0 @ 0x180775eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L2GameUI__Update__180775eb0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (cRam00000001834b43eb == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b43eb = '\x01';
  }
  L2UI__Update__180799460(param_1,0);
  if (DAT_1834b3532 == '\0') {
    FUN_180315380(TI_InputManager);
    DAT_1834b3532 = '\x01';
  }
  uVar7 = **(undefined8 **)(TI_InputManager + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if (cVar4 == '\0') {
code_r0x000180775f8d:
    if (*(char *)(param_1 + 0x78) == '\0') {
      *(undefined1 *)(param_1 + 0x78) = 1;
      uVar1 = *(undefined4 *)(param_1 + 0x74);
code_r0x000180775f9a:
      FUN_1807b0550(*(undefined4 *)(param_1 + 0x70),uVar1,0);
    }
  }
  else {
    if (DAT_1834b3532 == '\0') {
      FUN_180315380(TI_InputManager);
      DAT_1834b3532 = '\x01';
    }
    if (**(longlong **)(TI_InputManager + 0xb8) == 0) {
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xd9) == '\0') goto code_r0x000180775f8d;
    if (*(char *)(param_1 + 0x78) == '\0') {
      uVar1 = *(undefined4 *)(param_1 + 0x74);
      goto code_r0x000180775f9a;
    }
    FUN_1807b04d0(param_1 + 0x70,0);
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
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
    uVar7 = **(undefined8 **)(TI_CharacterInfoWindow + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if (cVar4 != '\0') {
      if (cRam00000001834b31cd == '\0') {
        FUN_180315380(TI_CharacterInfoWindow);
        cRam00000001834b31cd = '\x01';
      }
      plVar9 = (longlong *)**(longlong **)(TI_CharacterInfoWindow + 0xb8);
      if (plVar9 == (longlong *)0x0) goto code_r0x000180772519;
      (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
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
    uVar7 = **(undefined8 **)(TI_InventoryWindow + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if (cVar4 != '\0') {
      if (cRam00000001834b30fc == '\0') {
        FUN_180315380(TI_InventoryWindow);
        cRam00000001834b30fc = '\x01';
      }
      plVar9 = (longlong *)**(longlong **)(TI_InventoryWindow + 0xb8);
      if (plVar9 == (longlong *)0x0) goto code_r0x000180772519;
      (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
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
    uVar7 = **(undefined8 **)(TI_SystemMenuWindow + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if (cVar4 != '\0') {
      if (cRam00000001834b3ea9 == '\0') {
        FUN_180315380(TI_SystemMenuWindow);
        cRam00000001834b3ea9 = '\x01';
      }
      plVar9 = (longlong *)**(longlong **)(TI_SystemMenuWindow + 0xb8);
      if (plVar9 == (longlong *)0x0) goto code_r0x000180772519;
      (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
    }
  }
  if (DAT_1834b32c2 == '\0') {
    FUN_180315380(TI_UnityEngine.InputSystem.Keyboard);
    DAT_1834b32c2 = '\x01';
  }
  lVar8 = **(longlong **)(TI_UnityEngine.InputSystem.Keyboard + 0xb8);
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
    uVar7 = *(undefined8 *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if (cVar4 == '\0') {
      cVar4 = '\0';
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
      lVar6 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8);
      if (lVar6 == 0) goto code_r0x000180772519;
      if (*(char *)(lVar6 + 0x88) == '\0') {
        if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar6 = FUN_180458270(0);
        if (lVar6 == 0) goto code_r0x000180772519;
        cVar4 = ChatWindow__get_TeclaViraTexto(lVar6,0);
      }
      else {
        cVar4 = '\x01';
      }
    }
  }
  else {
    cVar4 = '\x01';
  }
  if ((lVar8 != 0) && (cVar4 == '\0')) {
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = SparkTeclas__get_Trocando(0);
    if (cVar4 == '\0') {
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
      }
      iVar5 = SparkTeclas__PaginaPedida__1804ce010(0);
      if (-1 < iVar5) {
        uVar7 = FUN_180493b20(0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if (cVar4 != '\0') {
          lVar8 = FUN_180493b20(0);
          if (lVar8 == 0) goto code_r0x000180772519;
          SkillbarWindow__OnPageChanged__1807077b0(lVar8,0,iVar5,0);
        }
      }
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = SparkTeclas__Apertou__1804ca540(LIT_"'HideUI'",0);
      if (cVar4 != '\0') {
        L2GameUI__TrocaInterface__180775c30(param_1,0);
      }
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = SparkTeclas__Apertou__1804ca540(LIT_"'Mute'",0);
      if (cVar4 != '\0') {
        if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkOpcoes__TrocaMudo__1804a72d0(0);
      }
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = SparkTeclas__Apertou__1804ca540(LIT_"'LowDetail'",0);
      if (cVar4 != '\0') {
        if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkOpcoes__TrocaMinimo__1804a6f80(0);
      }
      if (*(char *)(param_1 + 0x89) == '\0') {
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = SparkTeclas__Apertou__1804ca540(LIT_"'HideChat'",0);
        if (cVar4 != '\0') {
          if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar8 = FUN_180458270(0);
          if (lVar8 != 0) {
            ChatWindow__TrocaOculto__1805cf310(lVar8,0);
          }
        }
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = SparkTeclas__Apertou__1804ca540(LIT_"'PartyBuffs'",0);
        if ((cVar4 != '\0') && (lVar8 = FUN_1806a4800(0), lVar8 != 0)) {
          PartyWindow__TrocaModoBuff(lVar8,0);
        }
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = SparkTeclas__Apertou__1804ca540(LIT_"'ResetLayout'",0);
        if (cVar4 != '\0') {
          if (*(int *)(TI_L2Window + 0xe4) == 0) {
            func_0x000180315660();
          }
          L2Window__TodasNaPosicaoPadrao__18079b0c0(0);
          lVar8 = FUN_1806a48a0(0);
          if (lVar8 != 0) {
            SparkQuestHud__Padrao__1806b35c0(lVar8,0);
          }
          if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar8 = FUN_180458270(0);
          if (lVar8 != 0) {
            ChatWindow__TamanhoPadrao__1805cea60(lVar8,0);
          }
          if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
            func_0x000180315660();
          }
          SparkComandos__Diz__1805ed000(LIT_"'The interface was reset to the default layout.'",0);
        }
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = SparkTeclas__Apertou__1804ca540(LIT_"'Macro'",0);
        if ((cVar4 != '\0') && (plVar9 = (longlong *)FUN_180752750(0), plVar9 != (longlong *)0x0)) {
          (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
        }
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = SparkTeclas__Apertou__1804ca540(LIT_"'Gm'",0);
        if (cVar4 != '\0') {
          if (*(int *)(TI_SparkGmWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          plVar9 = (longlong *)FUN_18076eb80(0);
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
          }
        }
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = SparkTeclas__Apertou__1804ca540(LIT_"'Quest'",0);
        if ((cVar4 != '\0') && (plVar9 = (longlong *)FUN_180673e00(0), plVar9 != (longlong *)0x0)) {
          (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
        }
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = SparkTeclas__Apertou__1804ca540(LIT_"'Clan'",0);
        if (cVar4 != '\0') {
          if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          plVar9 = (longlong *)FUN_1805db0f0(0);
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
          }
        }
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = SparkTeclas__Apertou__1804ca540(LIT_"'Friends'",0);
        if (cVar4 != '\0') {
          if (*(int *)(TI_FriendWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          plVar9 = (longlong *)FUN_1805db140(0);
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
          }
        }
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = SparkTeclas__Apertou__1804ca540(LIT_"'Map'",0);
        if (cVar4 != '\0') {
          if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          plVar9 = (longlong *)FUN_1804b45f0(0);
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
          }
        }
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = SparkTeclas__Apertou__1804ca540(LIT_"'Radar'",0);
        if (cVar4 != '\0') {
          if (*(int *)(TI_SparkRadarWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          plVar9 = (longlong *)FUN_180637540(0);
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
          }
        }
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = SparkTeclas__Apertou__1804ca540(LIT_"'Board'",0);
        if (cVar4 != '\0') {
          if (*(int *)(TI_BoardWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          plVar9 = (longlong *)FUN_180752700(0);
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
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
    uVar7 = **(undefined8 **)(TI_ActionWindow + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if (cVar4 != '\0') {
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
      plVar9 = (longlong *)**(longlong **)(TI_ActionWindow + 0xb8);
      if (plVar9 == (longlong *)0x0) goto code_r0x000180772519;
      (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
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
    cVar4 = SparkTeclas__get_Trocando(0);
    if (cVar4 == '\0') {
      iVar5 = FUN_1824364b0(0);
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (1 < iVar5 - *(int *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x38)) {
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
        uVar7 = FUN_180458270(0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if (cVar4 != '\0') {
          if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar8 = FUN_180458270(0);
          if (lVar8 == 0) goto code_r0x000180772519;
          if (*(char *)(lVar8 + 0x88) != '\0') {
            if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
              func_0x000180315660();
            }
            lVar8 = FUN_180458270(0);
            if (lVar8 != 0) {
              ChatWindow__CloseChat__1805c6330(lVar8,0,0);
              return;
            }
            goto code_r0x000180772519;
          }
        }
        if (*(longlong *)(param_1 + 0x80) != 0) {
          uVar7 = *(undefined8 *)(param_1 + 0x80);
          if (*(int *)(TI_L2GameUI.<>c + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar8 = *(longlong *)(*(longlong *)(TI_L2GameUI.<>c + 0xb8) + 8);
          if (lVar8 == 0) {
            if (*(int *)(TI_L2GameUI.<>c + 0xe4) == 0) {
              func_0x000180315660();
            }
            uVar2 = **(undefined8 **)(TI_L2GameUI.<>c + 0xb8);
            lVar8 = func_0x000180315580(TI_System.Predicate<L2PopupWindow>);
            FUN_180d27680(lVar8,uVar2,MD_L2GameUI.__c._CheckUIInputs_b__17_0,0);
            *(longlong *)(*(longlong *)(TI_L2GameUI.<>c + 0xb8) + 8) = lVar8;
            func_0x000180314690(*(longlong *)(TI_L2GameUI.<>c + 0xb8) + 8,lVar8);
          }
          FUN_18164dab0(uVar7,lVar8,MR_System.Collections.Generic.List<L2PopupWindow>.RemoveAll);
          if ((*(longlong *)(param_1 + 0x80) != 0) &&
             (lVar8 = *(longlong *)(param_1 + 0x80), 0 < *(int *)(lVar8 + 0x18))) {
            if ((lVar8 == 0) ||
               (plVar9 = (longlong *)
                         FUN_180bbafe0(lVar8,*(int *)(lVar8 + 0x18) + -1,MR_System.Collections.Generic.List<L2PopupWindow>.get_Item),
               plVar9 == (longlong *)0x0)) goto code_r0x000180772519;
            (**(code **)(*plVar9 + 0x1c8))(plVar9,0,*(undefined8 *)(*plVar9 + 0x1d0));
            goto code_r0x00018077242d;
          }
        }
        uVar7 = FUN_18043b810(0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if (cVar4 != '\0') {
          lVar8 = FUN_18043b810(0);
          if (lVar8 == 0) goto code_r0x000180772519;
          cVar4 = TargetManager__HasTarget__1807ea7b0(lVar8,0);
          if (cVar4 != '\0') {
            lVar8 = FUN_18043b810(0);
            if (lVar8 == 0) goto code_r0x000180772519;
            TargetManager__ClearTarget__1807e9f10(lVar8,0);
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
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(char *)(**(longlong **)(TI_InputManager + 0xb8) + 0xf6) != '\0') {
    if (cRam00000001834b3541 == '\0') {
      FUN_180315380(TI_SkillWindow);
      cRam00000001834b3541 = '\x01';
    }
    uVar7 = **(undefined8 **)(TI_SkillWindow + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if (cVar4 != '\0') {
      if (cRam00000001834b3541 == '\0') {
        FUN_180315380(TI_SkillWindow);
        cRam00000001834b3541 = '\x01';
      }
      plVar9 = (longlong *)**(longlong **)(TI_SkillWindow + 0xb8);
      if (plVar9 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180772512. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
        return;
      }
      goto code_r0x000180772519;
    }
  }
  return;
}

