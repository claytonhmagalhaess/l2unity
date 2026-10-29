// SparkComandos__Mira__1805ee990 @ 0x1805ee990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkComandos__Mira__1805ee990(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_RDI;
  
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
  uVar7 = **(undefined8 **)(TI_WorldSpawner + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if (cVar2 == '\0') {
    uVar7 = 0;
  }
  else {
    if (cRam00000001834b31bd == '\0') {
      FUN_180315380(TI_WorldSpawner);
      cRam00000001834b31bd = '\x01';
    }
    if (**(longlong **)(TI_WorldSpawner + 0xb8) == 0) goto code_r0x0001805eeb16;
    uVar7 = WorldSpawner__BuscaPorNome(**(longlong **)(TI_WorldSpawner + 0xb8),param_1,0);
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if (cVar2 == '\0') {
    if (DAT_1834b3015 == '\0') {
      FUN_180315380(TI_TargetManager);
      DAT_1834b3015 = '\x01';
    }
    lVar4 = **(longlong **)(TI_TargetManager + 0xb8);
    if (lVar4 != 0) {
      if (DAT_1834b46c9 == '\0') {
        FUN_180315380(TI_NpcSpawner,uVar7,1,0,unaff_RDI);
        FUN_180315380(TI_UnityEngine.Object);
        DAT_1834b46c9 = '\x01';
      }
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar2 = UnityEngine_Object__op_Equality(uVar7,0,0);
      if (cVar2 == '\0') {
        if (*(int *)(TI_NpcSpawner + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar2 = NpcSpawner__NaoSelecionavel(uVar7,0);
        if (cVar2 == '\0') {
          uVar6 = *(undefined8 *)(lVar4 + 0x20);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
          if (cVar2 != '\0') {
            uVar6 = *(undefined8 *)(lVar4 + 0x20);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar2 = UnityEngine_Object__op_Inequality(uVar6,uVar7,0);
            if (cVar2 != '\0') {
              *(undefined8 *)(lVar4 + 0x58) = *(undefined8 *)(lVar4 + 0x20);
              func_0x000180314690(lVar4 + 0x58);
            }
          }
          *(undefined8 *)(lVar4 + 0x20) = uVar7;
          func_0x000180314690(lVar4 + 0x20,uVar7);
          if (DAT_1834b4713 == '\0') {
            FUN_180315380(TI_PlayerCombat);
            DAT_1834b4713 = '\x01';
          }
          if (((*(longlong *)(lVar4 + 0x20) != 0) &&
              (lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 0x30), lVar5 != 0)) &&
             (**(longlong **)(TI_PlayerCombat + 0xb8) != 0)) {
            *(undefined4 *)(**(longlong **)(TI_PlayerCombat + 0xb8) + 0x28) =
                 *(undefined4 *)(lVar5 + 0x14);
            if (DAT_1834b4713 == '\0') {
              FUN_180315380(TI_PlayerCombat);
              DAT_1834b4713 = '\x01';
            }
            lVar5 = **(longlong **)(TI_PlayerCombat + 0xb8);
            if (lVar5 != 0) {
              *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar4 + 0x20);
              func_0x000180314690(lVar5 + 0x30);
              if (DAT_1834b3801 == '\0') {
                FUN_180315380(TI_ShopWindow);
                DAT_1834b3801 = '\x01';
              }
              plVar3 = (longlong *)**(longlong **)(TI_ShopWindow + 0xb8);
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x1c8))(plVar3,0,*(undefined8 *)(*plVar3 + 0x1d0));
                if (DAT_1834b30fb == '\0') {
                  FUN_180315380(TI_GameClient);
                  DAT_1834b30fb = '\x01';
                }
                if (((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
                    (*(longlong *)(lVar4 + 0x20) != 0)) &&
                   ((lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 0x30), lVar4 != 0 &&
                    (lVar5 = *(longlong *)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
                    lVar5 != 0)))) {
                  GameClientPacketHandler__SendRequestSetTarget
                            (lVar5,*(undefined4 *)(lVar4 + 0x14),0);
                  return;
                }
              }
            }
          }
          FUN_1803155d0();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      return;
    }
code_r0x0001805eeb16:
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar7 = System_String__Concat(param_1,LIT_"' is not in sight.'",0);
  if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3b43 == '\0') {
    FUN_180315380(TI_ChatWindow,0);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
    FUN_180315380(TI_SMParam__);
    FUN_180315380(TI_SMParam);
    FUN_180315380(TI_SystemMessage);
    cRam00000001834b3b43 = '\x01';
  }
  plVar3 = (longlong *)func_0x000180314710(TI_SMParam__,1);
  lVar4 = func_0x000180315580(TI_SMParam);
  SMParam___ctor(lVar4,0,uVar7,0,unaff_RDI);
  if (plVar3 != (longlong *)0x0) {
    if ((lVar4 != 0) &&
       (lVar5 = func_0x0001803146b0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
      uVar7 = func_0x000180314f80();
      FUN_180315590(uVar7,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((int)plVar3[3] == 0) {
      FUN_1803155c0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    plVar3[4] = lVar4;
    func_0x000180314690(plVar3 + 4,lVar4);
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
    lVar4 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8);
    if (lVar4 != 0) {
      lVar5 = SystemMessageTable__get_Instance(0);
      if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x10) == 0)) goto code_r0x0001805ed19f;
      uVar7 = FUN_1812035e0(*(longlong *)(lVar5 + 0x10),0x266,MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
      uVar6 = func_0x000180315580(TI_SystemMessage);
      AllianceMessage___ctor(uVar6,plVar3,uVar7,0);
      ChatWindow__ReceiveSystemMessage__1805cdb10(lVar4,uVar6,0);
    }
    return;
  }
code_r0x0001805ed19f:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

