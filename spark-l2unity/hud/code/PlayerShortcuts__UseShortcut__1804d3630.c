// PlayerShortcuts__UseShortcut__1804d3630 @ 0x1804d3630

/* WARNING: Removing unreachable block (ram,0x0001804d4ba9) */
/* WARNING: Removing unreachable block (ram,0x0001804d4bb4) */
/* WARNING: Removing unreachable block (ram,0x0001804d4bc2) */
/* WARNING: Removing unreachable block (ram,0x0001804d4bd0) */
/* WARNING: Removing unreachable block (ram,0x0001804d4be0) */
/* WARNING: Removing unreachable block (ram,0x0001807c4cc4) */
/* WARNING: Removing unreachable block (ram,0x0001804d4b6d) */
/* WARNING: Removing unreachable block (ram,0x0001804d4b76) */
/* WARNING: Removing unreachable block (ram,0x0001804d4b96) */
/* WARNING: Removing unreachable block (ram,0x0001804d4ba0) */
/* WARNING: Removing unreachable block (ram,0x0001804d4c57) */
/* WARNING: Removing unreachable block (ram,0x0001804d4c60) */
/* WARNING: Removing unreachable block (ram,0x0001804d4c78) */
/* WARNING: Removing unreachable block (ram,0x0001804d4c8e) */
/* WARNING: Removing unreachable block (ram,0x0001804d4bee) */
/* WARNING: Removing unreachable block (ram,0x0001804d4c08) */
/* WARNING: Removing unreachable block (ram,0x0001804d4c1f) */
/* WARNING: Removing unreachable block (ram,0x0001804d4c28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlayerShortcuts__UseShortcut__1804d3630(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 unaff_RDI;
  
  if (DAT_1834b3407 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_SparkMacros);
    FUN_180315380(LIT_"'Unkown shortcut type.'");
    FUN_180315380(LIT_"'Use shortcut {0}.'");
    DAT_1834b3407 = '\x01';
  }
  if (param_2 == 0) {
    FUN_1803155d0();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar12 = func_0x000180314670(_DAT_1834c6268,&stack0x00000010);
  uVar12 = System_String__Format(LIT_"'Use shortcut {0}.'",uVar12,0);
  if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
    func_0x000180315660();
  }
  UnityEngine_Debug__Log(uVar12,0);
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 == 1) {
    if (DAT_1834b3102 == '\0') {
      FUN_180315380(TI_PlayerInventory);
      DAT_1834b3102 = '\x01';
    }
    lVar9 = **(longlong **)(TI_PlayerInventory + 0xb8);
    if (lVar9 != 0) {
      uVar2 = *(undefined4 *)(param_2 + 0x1c);
      if (DAT_1834b304f == '\0') {
        FUN_180315380(TI_System.Action,uVar2,0);
        FUN_180315380(TI_EtcItemgrp);
        FUN_180315380(TI_UnityEngine.Object);
        FUN_180315380(MD_PlayerInventory.__c._UseItem_b__34_1);
        FUN_180315380(MD_PlayerInventory.__c__DisplayClass34_0._UseItem_b__0);
        FUN_180315380(TI_PlayerInventory.<>c__DisplayClass34_0);
        FUN_180315380(TI_PlayerInventory.<>c);
        FUN_180315380(LIT_"'recipe'");
        FUN_180315380(LIT_"' in your recipe book?'");
        FUN_180315380(LIT_"'Register '");
        DAT_1834b304f = '\x01';
      }
      lVar10 = func_0x000180315580(TI_PlayerInventory.<>c__DisplayClass34_0);
      Gear__UpdateWeaponType__1803dadf0(lVar10,0);
      if (lVar10 != 0) {
        *(undefined4 *)(lVar10 + 0x10) = uVar2;
        lVar9 = PlayerInventory__GetItemByObjectId(lVar9,uVar2,0);
        if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x10) != 0)) {
          plVar3 = *(longlong **)(*(longlong *)(lVar9 + 0x10) + 0x30);
          if (plVar3 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TI_EtcItemgrp + 0x130)) ||
               (*(longlong *)
                 (*(longlong *)(*plVar3 + 200) + -8 +
                 (ulonglong)*(byte *)(TI_EtcItemgrp + 0x130) * 8) != TI_EtcItemgrp)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            plVar13 = (longlong *)0x0;
            if (bVar6) {
              plVar13 = plVar3;
            }
          }
          if ((plVar13 != (longlong *)0x0) && (plVar13[0xc] != 0)) {
            uVar12 = System_String__ToLowerInvariant(plVar13[0xc],0);
            cVar7 = func_0x0001817058a0(uVar12,LIT_"'recipe'",0);
            if (cVar7 != '\0') {
              if (DAT_1834b30fd == '\0') {
                FUN_180315380(TI_L2ConfirmWindow);
                DAT_1834b30fd = '\x01';
              }
              uVar12 = **(undefined8 **)(TI_L2ConfirmWindow + 0xb8);
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              cVar7 = UnityEngine_Object__op_Inequality(uVar12,0,0);
              if (cVar7 != '\0') {
                lVar11 = FUN_180458300(0);
                uVar12 = SparkUI__NomeDoItem(*(undefined4 *)(lVar9 + 0x1c),0);
                uVar12 = System_String__Concat(LIT_"'Register '",uVar12,LIT_"' in your recipe book?'",0);
                uVar8 = func_0x000180315580(TI_System.Action);
                FUN_1816a9c60(uVar8,lVar10,MD_PlayerInventory.__c__DisplayClass34_0._UseItem_b__0,0);
                if (*(int *)(TI_PlayerInventory.<>c + 0xe4) == 0) {
                  func_0x000180315660();
                }
                lVar9 = *(longlong *)(*(longlong *)(TI_PlayerInventory.<>c + 0xb8) + 0x58);
                if (lVar9 == 0) {
                  if (*(int *)(TI_PlayerInventory.<>c + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  uVar4 = **(undefined8 **)(TI_PlayerInventory.<>c + 0xb8);
                  lVar9 = func_0x000180315580(TI_System.Action);
                  FUN_1816a9c60(lVar9,uVar4,MD_PlayerInventory.__c._UseItem_b__34_1,0);
                  *(longlong *)(*(longlong *)(TI_PlayerInventory.<>c + 0xb8) + 0x58) = lVar9;
                  func_0x000180314690(*(longlong *)(TI_PlayerInventory.<>c + 0xb8) + 0x58,lVar9);
                }
                if (lVar11 != 0) {
                  L2ConfirmWindow__ShowWindow__180770df0(lVar11,uVar12,uVar8,lVar9,0);
                  return;
                }
                goto LAB_18046a9af;
              }
            }
          }
        }
        if (DAT_1834b30fb == '\0') {
          FUN_180315380(TI_GameClient);
          DAT_1834b30fb = '\x01';
        }
        if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
           (lVar9 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8), lVar9 != 0)) {
          GameClientPacketHandler__UseItem(lVar9,*(undefined4 *)(lVar10 + 0x10),0);
          return;
        }
      }
LAB_18046a9af:
      FUN_1803155d0();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (iVar1 == 2) {
    if (DAT_1834b3103 == '\0') {
      FUN_180315380(TI_PlayerSkill);
      DAT_1834b3103 = '\x01';
    }
    lVar9 = **(longlong **)(TI_PlayerSkill + 0xb8);
    if (lVar9 != 0) {
      uVar2 = *(undefined4 *)(param_2 + 0x1c);
      if (DAT_1834b343d == '\0') {
        FUN_180315380(TI_UnityEngine.Debug,uVar2,0);
        FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SkillInfo>.TryGetValue);
        FUN_180315380(LIT_"'Skill not found.'");
        DAT_1834b343d = '\x01';
      }
      lVar9 = *(longlong *)(lVar9 + 0x20);
      if (lVar9 != 0) {
        cVar7 = FUN_1812007b0(lVar9,uVar2,&stack0x00000008,MR_System.Collections.Generic.Dictionary<int,SkillInfo>.TryGetValue);
        if (cVar7 == '\0') {
          if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
            func_0x000180315660();
          }
          UnityEngine_Debug__LogWarning(LIT_"'Skill not found.'",0);
          return;
        }
        SkillgrpTable__get_Instance(0);
      }
      FUN_1803155d0();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 != 4) {
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar12 = LIT_"'Unkown shortcut type.'";
        if (DAT_1834bfa1e == '\0') {
          FUN_180315380(TI_UnityEngine.Debug,0);
          FUN_180315380(TI_UnityEngine.ILogger);
          DAT_1834bfa1e = '\x01';
        }
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (DAT_1834b3803 == '\0') {
          FUN_180315380(TI_UnityEngine.Debug);
          DAT_1834b3803 = '\x01';
        }
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar9 = *(longlong *)(*(longlong *)(TI_UnityEngine.Debug + 0xb8) + 8);
        if (lVar9 == 0) {
          FUN_1803155d0();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FUN_180036090(5,TI_UnityEngine.ILogger,lVar9,2,uVar12);
        return;
      }
      uVar2 = *(undefined4 *)(param_2 + 0x1c);
      if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (DAT_1834b3082 == '\0') {
        FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkMacros.MacroRunner>,0);
        FUN_180315380(TI_UnityEngine.GameObject);
        FUN_180315380(TI_UnityEngine.Object);
        FUN_180315380(TI_SparkMacros);
        FUN_180315380(LIT_"'SparkMacros'");
        DAT_1834b3082 = '\x01';
      }
      if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (DAT_1834b307b == '\0') {
        FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Macro>.Find);
        FUN_180315380(TI_System.Predicate<SparkMacros.Macro>);
        FUN_180315380(TI_SparkMacros);
        FUN_180315380(MD_SparkMacros.__c__DisplayClass18_0._Busca_b__0);
        FUN_180315380(TI_SparkMacros.<>c__DisplayClass18_0);
        DAT_1834b307b = '\x01';
      }
      lVar9 = func_0x000180315580(TI_SparkMacros.<>c__DisplayClass18_0);
      Gear__UpdateWeaponType__1803dadf0(lVar9,0);
      if (lVar9 != 0) {
        *(undefined4 *)(lVar9 + 0x10) = uVar2;
        if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
          func_0x000180315660(TI_SparkMacros);
        }
        lVar10 = **(longlong **)(TI_SparkMacros + 0xb8);
        uVar12 = func_0x000180315580(TI_System.Predicate<SparkMacros.Macro>);
        FUN_180d27680(uVar12,lVar9,MD_SparkMacros.__c__DisplayClass18_0._Busca_b__0,0);
        if (lVar10 != 0) {
          lVar9 = FUN_180bad500(lVar10,uVar12,MR_System.Collections.Generic.List<SparkMacros.Macro>.Find);
          if (lVar9 != 0) {
            if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
              func_0x000180315660(TI_SparkMacros);
            }
            uVar12 = *(undefined8 *)(*(longlong *)(TI_SparkMacros + 0xb8) + 0x20);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar7 = UnityEngine_Object__op_Equality(uVar12,0,0);
            if (cVar7 != '\0') {
              lVar10 = func_0x000180315580(TI_UnityEngine.GameObject);
              UnityEngine_GameObject___ctor(lVar10,LIT_"'SparkMacros'",0);
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              UnityEngine_Object__DontDestroyOnLoad(lVar10,0);
              if (lVar10 == 0) goto LAB_18047490a;
              uVar12 = FUN_1809e9600(lVar10,MR_UnityEngine.GameObject.AddComponent<SparkMacros.MacroRunner>);
              if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
                func_0x000180315660();
              }
              *(undefined8 *)(*(longlong *)(TI_SparkMacros + 0xb8) + 0x20) = uVar12;
              func_0x000180314690(*(longlong *)(TI_SparkMacros + 0xb8) + 0x20,uVar12);
            }
            if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
              func_0x000180315660(TI_SparkMacros);
            }
            lVar10 = *(longlong *)(*(longlong *)(TI_SparkMacros + 0xb8) + 0x20);
            if (lVar10 == 0) goto LAB_18047490a;
            if (*(longlong *)(lVar10 + 0x20) != 0) {
              UnityEngine_MonoBehaviour__StopCoroutine(lVar10,*(undefined8 *)(lVar10 + 0x20),0);
            }
            if (DAT_1834b308a == '\0') {
              FUN_180315380(TI_SparkMacros.MacroRunner.<Executa>d__2);
              DAT_1834b308a = '\x01';
            }
            lVar11 = func_0x000180315580(TI_SparkMacros.MacroRunner.<Executa>d__2);
            Gear__UpdateWeaponType__1803dadf0(lVar11,0);
            *(undefined4 *)(lVar11 + 0x10) = 0;
            *(longlong *)(lVar11 + 0x28) = lVar10;
            func_0x000180314690(lVar11 + 0x28,lVar10);
            *(longlong *)(lVar11 + 0x20) = lVar9;
            func_0x000180314690(lVar11 + 0x20,lVar9);
            uVar12 = UnityEngine_MonoBehaviour__StartCoroutine(lVar10,lVar11,0);
            *(undefined8 *)(lVar10 + 0x20) = uVar12;
            func_0x000180314690(lVar10 + 0x20,uVar12);
          }
          return;
        }
      }
LAB_18047490a:
      FUN_1803155d0();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (DAT_1834b3104 == '\0') {
      FUN_180315380(TI_PlayerActions);
      DAT_1834b3104 = '\x01';
    }
    lVar9 = **(longlong **)(TI_PlayerActions + 0xb8);
    if (lVar9 != 0) {
      uVar2 = *(undefined4 *)(param_2 + 0x1c);
      if (DAT_1834b45b4 == '\0') {
        FUN_180315380(MR_System.Collections.Generic.Dictionary<ActionType,L2Action>.TryGetValue,uVar2,0);
        DAT_1834b45b4 = '\x01';
      }
      lVar9 = *(longlong *)(lVar9 + 0x20);
      if ((lVar9 != 0) &&
         (cVar7 = FUN_181237020(lVar9,uVar2,&stack0x00000008,MR_System.Collections.Generic.Dictionary<ActionType,L2Action>.TryGetValue,unaff_RDI),
         cVar7 == '\0')) {
        if (DAT_1834b30fb == '\0') {
          FUN_180315380(TI_GameClient);
          DAT_1834b30fb = '\x01';
        }
        if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
           (lVar9 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8), lVar9 != 0)) {
          GameClientPacketHandler__RequestActionUse(lVar9,uVar2,0);
          return;
        }
      }
      FUN_1803155d0();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

