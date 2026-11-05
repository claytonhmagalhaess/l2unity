// SparkApiGrafica__Confere__180494210 @ 0x180494210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkApiGrafica__Confere__180494210(void)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (cRam00000001834b3268 == '\0') {
    FUN_180315380(MR_System.Array.IndexOf<string>);
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_UnityEngine.Rendering.GraphicsDeviceType);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkApiGrafica);
    FUN_180315380(TI_SparkComandos);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(TI_string__);
    FUN_180315380(LIT_"' (running '");
    FUN_180315380(LIT_"'[SPARK] '");
    FUN_180315380(LIT_"' could not start on this PC. The game is back on DirectX...");
    FUN_180315380(LIT_"')'");
    cRam00000001834b3268 = '\x01';
  }
  if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar6 = SparkApiGrafica__get_ArquivoTeste__1804955e0(0);
  cVar2 = System_IO_File__Exists(uVar6,0);
  if (cVar2 == '\0') {
    return;
  }
  if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
    func_0x000180315660(TI_SparkApiGrafica);
  }
  uVar6 = *(undefined8 *)(*(longlong *)(TI_SparkApiGrafica + 0xb8) + 8);
  uVar7 = SparkApiGrafica__get_ArquivoTeste__1804955e0(0);
  lVar8 = System_IO_File__ReadAllText(uVar7,0);
  if (lVar8 == 0) goto code_r0x0001804946e7;
  lVar8 = func_0x00018170d270(lVar8,0);
  if (lVar8 != 0) {
    uVar7 = System_String__ToLowerInvariant(lVar8,0);
    uVar3 = FUN_1809e1cf0(uVar6,uVar7,MR_System.Array.IndexOf<string>);
    uVar6 = SparkApiGrafica__get_ArquivoTeste__1804955e0(0);
    System_IO_File__Delete(uVar6,0);
    if ((int)uVar3 < 0) {
      return;
    }
    if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
      func_0x000180315660();
    }
    iVar4 = UnityEngine_SystemInfo__get_graphicsDeviceType(0);
    if (iVar4 == 2) {
      uVar5 = 0;
    }
    else if (iVar4 == 0x12) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0xffffffff;
      if (iVar4 == 0x15) {
        uVar5 = 2;
      }
    }
    if (uVar3 == uVar5) {
      return;
    }
    if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkApiGrafica__GravaEscolha__1804948e0(0,0);
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x58) = 0;
    lVar8 = **(longlong **)(TI_SparkApiGrafica + 0xb8);
    if (lVar8 != 0) {
      if (uVar3 < *(uint *)(lVar8 + 0x18)) {
        uVar6 = System_String__Concat
                          (*(undefined8 *)(lVar8 + 0x20 + (longlong)(int)uVar3 * 8),
                           LIT_"' could not start on this PC. The game is back on DirectX...",0);
        if (cRam00000001834b32c6 == '\0') {
          FUN_180315380(TI_SparkApiGrafica);
          cRam00000001834b32c6 = '\x01';
        }
        if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
          func_0x000180315660(TI_SparkApiGrafica);
        }
        *(undefined8 *)(*(longlong *)(TI_SparkApiGrafica + 0xb8) + 0x18) = uVar6;
        func_0x000180314690(*(longlong *)(TI_SparkApiGrafica + 0xb8) + 0x18,uVar6);
        lVar8 = func_0x000180314710(TI_string__,5);
        if (lVar8 != 0) {
          if (*(int *)(lVar8 + 0x18) == 0) goto code_r0x0001804946bf;
          *(undefined8 *)(lVar8 + 0x20) = LIT_"'[SPARK] '";
          func_0x000180314690(lVar8 + 0x20);
          uVar6 = FUN_180493b60(0);
          if (*(uint *)(lVar8 + 0x18) < 2) goto code_r0x0001804946c4;
          *(undefined8 *)(lVar8 + 0x28) = uVar6;
          func_0x000180314690(lVar8 + 0x28,uVar6);
          if (*(uint *)(lVar8 + 0x18) < 3) goto code_r0x0001804946c9;
          *(undefined8 *)(lVar8 + 0x30) = LIT_"' (running '";
          func_0x000180314690(lVar8 + 0x30);
          uStack_18 = UnityEngine_SystemInfo__get_graphicsDeviceType(0);
          uStack_28 = TI_UnityEngine.Rendering.GraphicsDeviceType;
          uStack_20 = 0xffffffffffffffff;
          uVar6 = System_Enum__ToString(&uStack_28,0);
          if (*(uint *)(lVar8 + 0x18) < 4) goto code_r0x0001804946ce;
          *(undefined8 *)(lVar8 + 0x38) = uVar6;
          func_0x000180314690(lVar8 + 0x38,uVar6);
          if (4 < *(uint *)(lVar8 + 0x18)) {
            *(undefined8 *)(lVar8 + 0x40) = LIT_"')'";
            func_0x000180314690(lVar8 + 0x40);
            uVar6 = System_String__Concat(lVar8,0);
            if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
              func_0x000180315660();
            }
            UnityEngine_Debug__LogWarning(uVar6,0);
            if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
              func_0x000180315660();
            }
            uVar6 = FUN_180458270(0);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
            if (cVar2 == '\0') {
              return;
            }
            if (*(int *)(TI_SparkApiGrafica + 0xe4) == 0) {
              func_0x000180315660();
            }
            uVar6 = FUN_180493b60(0);
            if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
              func_0x000180315660();
            }
            SparkComandos__Diz(uVar6,0);
            return;
          }
          goto code_r0x0001804946d3;
        }
      }
      else {
        FUN_1803155c0();
code_r0x0001804946bf:
        FUN_1803155c0();
code_r0x0001804946c4:
        FUN_1803155c0();
code_r0x0001804946c9:
        FUN_1803155c0();
code_r0x0001804946ce:
        FUN_1803155c0();
code_r0x0001804946d3:
        FUN_1803155c0();
      }
      FUN_1803155d0();
    }
    FUN_1803155d0();
  }
  FUN_1803155d0();
code_r0x0001804946e7:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

