// OptionsWindow___c__DisplayClass40_0___ModosDeTela_b__0__1806c06f0 @ 0x1806c06f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass40_0___ModosDeTela_b__0__1806c06f0(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong lStack_e8;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong lStack_c8;
  
  if (cRam00000001834b3f3c == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.GetEnumerator);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'Full Screen'");
    FUN_180315380(LIT_"'Full Window'");
    FUN_180315380(LIT_"'Window'");
    cRam00000001834b3f3c = '\x01';
  }
  plVar5 = *(longlong **)(param_1 + 0x18);
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar7 = LIT_"'Window'";
  if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xc) != 0) {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar7 = LIT_"'Full Screen'";
    if (*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xc) == 1) {
      uVar7 = LIT_"'Full Window'";
    }
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0xe48))(plVar5,uVar7,*(undefined8 *)(*plVar5 + 0xe50));
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_180bada40(&uStack_f8,*(longlong *)(param_1 + 0x20),MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.GetEnumerator);
      uStack_d8 = uStack_f8;
      uStack_d4 = uStack_f4;
      uStack_d0 = uStack_f0;
      uStack_cc = uStack_ec;
      lStack_c8 = lStack_e8;
      while( true ) {
        cVar4 = FUN_1812fa7e0(&uStack_d8,MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.MoveNext);
        lVar3 = lStack_c8;
        if (cVar4 == '\0') {
          func_0x0001803dadf0(&uStack_d8,MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.Dispose);
          return;
        }
        if (lStack_c8 == 0) goto code_r0x0001806c0a56;
        plVar5 = (longlong *)UnityEngine_UIElements_VisualElement__get_userData(lStack_c8,0);
        if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
          func_0x000180315660(TI_SparkOpcoes);
        }
        if (plVar5 == (longlong *)0x0) break;
        if (*(longlong *)(*plVar5 + 0x40) != *(longlong *)(_DAT_1834c6268 + 0x40)) {
          FUN_1803146d0(plVar5,_DAT_1834c6268);
          break;
        }
        iVar1 = *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xc);
        piVar6 = (int *)func_0x000180314870();
        if (*piVar6 == iVar1) {
          uVar8 = 0x40000000;
          uStack_120 = 0x3f3ebebf;
          uStack_11c = 0x3f52d2d3;
          uStack_118 = 0x3eb4b4b5;
        }
        else {
          uVar8 = 0x3f800000;
          uStack_120 = 0x3ea8f5c3;
          uStack_11c = 0x3e9eb852;
          uStack_118 = 0x3e8a3d71;
        }
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660();
        }
        uStack_f8 = uStack_120;
        uStack_f4 = uStack_11c;
        uStack_f0 = uStack_118;
        uStack_ec = 0x3f800000;
        SparkEstilo__Borda(lVar3,&uStack_f8,uVar8,0,0);
      }
      FUN_1803155d0();
code_r0x0001806c0a56:
      FUN_1803155d0();
      FUN_180311490();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

