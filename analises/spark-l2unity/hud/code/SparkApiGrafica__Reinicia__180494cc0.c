// SparkApiGrafica__Reinicia__180494cc0 @ 0x180494cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkApiGrafica__Reinicia__180494cc0(uint param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b3265 == '\0') {
    FUN_180315380(TI_UnityEngine.Application);
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_System.Diagnostics.ProcessStartInfo);
    FUN_180315380(TI_SparkApiGrafica);
    FUN_180315380(TI_SparkComandos);
    FUN_180315380(TI_System.Text.StringBuilder);
    FUN_180315380(LIT_"'[SPARK] Graphics API saved: '");
    FUN_180315380(LIT_"'[SPARK] Graphics API: game executable not found, restart...");
    FUN_180315380(LIT_"'Could not restart the game. Close it and open it again t...");
    FUN_180315380(LIT_"'-force-d3d'");
    FUN_180315380(LIT_"'\"'");
    FUN_180315380(LIT_"'. The Unity editor does not restart - in the game client...");
    FUN_180315380(LIT_"'-force-vulkan'");
    FUN_180315380(LIT_"'.'");
    FUN_180315380(LIT_"'-force-gl'");
    cRam00000001834b3265 = '\x01';
  }
  if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
    func_0x000180315660(TI_SparkApiGrafica);
  }
  lVar4 = *(longlong *)(*(longlong *)(TI_SparkApiGrafica + 0xb8) + 8);
  if (lVar4 == 0) {
code_r0x00018049532d:
    FUN_1803155d0();
code_r0x000180495333:
    FUN_1803155c0();
code_r0x000180495339:
    FUN_1803155d0();
  }
  else {
    if ((((int)param_1 < 0) || (uVar11 = *(int *)(lVar4 + 0x18) - 1, (int)param_1 <= (int)uVar11))
       && (uVar11 = param_1, (int)param_1 < 0)) {
      uVar11 = 0;
    }
    SparkApiGrafica__GravaEscolha__1804948e0(uVar11,0);
    if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = func_0x000180a870f0(0);
    if (cVar2 != '\0') {
      if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
        func_0x000180315660(TI_SparkApiGrafica);
      }
      lVar4 = **(longlong **)(TI_SparkApiGrafica + 0xb8);
      if (lVar4 != 0) {
        if (uVar11 < *(uint *)(lVar4 + 0x18)) {
          uVar8 = System_String__Concat
                            (LIT_"'[SPARK] Graphics API saved: '",
                             *(undefined8 *)(lVar4 + 0x20 + (longlong)(int)uVar11 * 8),
                             LIT_"'. The Unity editor does not restart - in the game client...",0);
          if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (cRam00000001834bfa14 == '\0') {
            FUN_180315380(TI_UnityEngine.Debug,0);
            FUN_180315380(TI_UnityEngine.ILogger);
            cRam00000001834bfa14 = '\x01';
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
          lVar4 = *(longlong *)(*(longlong *)(TI_UnityEngine.Debug + 0xb8) + 8);
          if (lVar4 != 0) {
            FUN_180036090(5,TI_UnityEngine.ILogger,lVar4,3,uVar8);
            return;
          }
          FUN_1803155d0();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        goto code_r0x000180495344;
      }
      goto code_r0x00018049532d;
    }
    if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar4 = SparkApiGrafica__ExeDoJogo__1804946f0(0);
    if (lVar4 == 0) {
      if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Debug__LogWarning(LIT_"'[SPARK] Graphics API: game executable not found, restart...",0);
      if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
        func_0x000180315660(TI_SparkApiGrafica);
      }
      lVar4 = **(longlong **)(TI_SparkApiGrafica + 0xb8);
      if (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x18) <= uVar11) goto code_r0x000180495344;
        uVar8 = System_String__Concat
                          (LIT_"'Could not restart the game. Close it and open it again t...",
                           *(undefined8 *)(lVar4 + 0x20 + (longlong)(int)uVar11 * 8),LIT_"'.'",
                           0);
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
        plVar5 = (longlong *)func_0x000180314710(TI_SMParam__,1);
        lVar4 = func_0x000180315580(TI_SMParam);
        SMParam___ctor(lVar4,0,uVar8,0,unaff_RDI);
        if (plVar5 != (longlong *)0x0) {
          if (lVar4 != 0) {
            lVar6 = func_0x0001803146b0(lVar4,*(undefined8 *)(*plVar5 + 0x40));
            if (lVar6 == 0) {
              uVar8 = func_0x000180314f80();
              FUN_180315590(uVar8,0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          if ((int)plVar5[3] == 0) {
            FUN_1803155c0();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          plVar5[4] = lVar4;
          func_0x000180314690(plVar5 + 4,lVar4);
          if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (cRam00000001834b3105 == '\0') {
            FUN_180315380(TI_ChatWindow);
            cRam00000001834b3105 = '\x01';
          }
          if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar4 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8);
          if (lVar4 != 0) {
            lVar6 = SystemMessageTable__get_Instance(0);
            if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x10) == 0)) goto code_r0x0001805ed19f;
            uVar8 = FUN_1812035e0(*(longlong *)(lVar6 + 0x10),0x266,MR_System.Collections.Generic.Dictionary<int,SystemMessageDat>.get_Item);
            uVar10 = func_0x000180315580(TI_SystemMessage);
            AllianceMessage___ctor(uVar10,plVar5,uVar8,0);
            ChatWindow__ReceiveSystemMessage(lVar4,uVar10,0);
          }
          return;
        }
code_r0x0001805ed19f:
        FUN_1803155d0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto code_r0x00018049532d;
    }
    plVar5 = (longlong *)func_0x000180315580(TI_System.Text.StringBuilder);
    System_Text_StringBuilder___ctor(plVar5,0);
    lVar6 = func_0x0001818f2610(0);
    if (lVar6 == 0) goto code_r0x00018049532d;
    for (uVar12 = 1; (int)uVar12 < *(int *)(lVar6 + 0x18); uVar12 = uVar12 + 1) {
      if (*(uint *)(lVar6 + 0x18) <= uVar12) goto code_r0x000180495344;
      lVar7 = *(longlong *)(lVar6 + 0x20 + (longlong)(int)uVar12 * 8);
      if (lVar7 == 0) goto code_r0x00018049532d;
      cVar2 = System_String__StartsWith(lVar7,LIT_"'-force-d3d'");
      if (cVar2 == '\0') {
        cVar2 = System_String__StartsWith(lVar7,LIT_"'-force-vulkan'");
        if (cVar2 == '\0') {
          cVar2 = System_String__StartsWith(lVar7,LIT_"'-force-gl'");
          if (cVar2 == '\0') {
            iVar3 = func_0x0001817079f0(lVar7,0x20);
            if (-1 < iVar3) {
              lVar7 = System_String__Concat(LIT_"'\"'",lVar7);
            }
            if (plVar5 == (longlong *)0x0) goto code_r0x00018049532d;
            lVar7 = System_Text_StringBuilder__Append(plVar5,lVar7,0);
            if (lVar7 == 0) goto code_r0x00018049532d;
            System_Text_StringBuilder__Append(lVar7,0x20);
          }
        }
      }
    }
    if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
      func_0x000180315660(TI_SparkApiGrafica);
    }
    lVar6 = *(longlong *)(*(longlong *)(TI_SparkApiGrafica + 0xb8) + 0x10);
    if (lVar6 == 0) goto code_r0x00018049532d;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) goto code_r0x000180495344;
    if (plVar5 == (longlong *)0x0) goto code_r0x00018049532d;
    System_Text_StringBuilder__Append
              (plVar5,*(undefined8 *)(lVar6 + 0x20 + (longlong)(int)uVar11 * 8),0);
    if (uVar11 == 0) {
      if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar8 = SparkApiGrafica__get_ArquivoTeste__1804955e0(0);
      cVar2 = System_IO_File__Exists(uVar8,0);
      if (cVar2 != '\0') {
        if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar8 = SparkApiGrafica__get_ArquivoTeste__1804955e0(0);
        System_IO_File__Delete(uVar8,0);
      }
code_r0x000180495063:
      uVar8 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      lVar6 = func_0x000180315580(TI_System.Diagnostics.ProcessStartInfo);
      System_Diagnostics_ProcessStartInfo___ctor(lVar6,lVar4,uVar8,0);
      if (lVar6 != 0) {
        *(undefined1 *)(lVar6 + 0x40) = 0;
        if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar8 = SparkApiGrafica__get_Pasta__1804958b0(0);
        *(undefined8 *)(lVar6 + 0x20) = uVar8;
        func_0x000180314690(lVar6 + 0x20,uVar8);
        System_Diagnostics_Process__Start(lVar6,0);
        SparkSaida__Sai(0);
        return;
      }
      goto code_r0x000180495339;
    }
    if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar8 = SparkApiGrafica__get_ArquivoTeste__1804955e0(0);
    lVar6 = *(longlong *)(*(longlong *)(TI_SparkApiGrafica + 0xb8) + 8);
    if (lVar6 != 0) {
      if (uVar11 < *(uint *)(lVar6 + 0x18)) {
        uVar10 = *(undefined8 *)(lVar6 + 0x20 + (longlong)(int)uVar11 * 8);
        uVar9 = System_Text_Encoding__get_ASCII(0);
        System_IO_File__WriteAllText(uVar8,uVar10,uVar9,0);
        goto code_r0x000180495063;
      }
      goto code_r0x000180495333;
    }
  }
  FUN_1803155d0();
code_r0x000180495344:
  FUN_1803155c0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

