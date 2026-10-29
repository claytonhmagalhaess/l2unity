// ChatWindow__TrocaTell__1805d0620 @ 0x1805d0620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__TrocaTell__1805d0620(longlong param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uStackX_8;
  
  if (cRam00000001834b3add == '\0') {
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Item);
    cRam00000001834b3add = '\x01';
  }
  lVar6 = *(longlong *)(param_1 + 0xa0);
  if (lVar6 == 0) goto code_r0x0001805d0873;
  if (0 < *(int *)(lVar6 + 0x18)) {
    if (lVar6 != 0) {
      param_2 = *(int *)(param_1 + 0xa8) + param_2;
      if (((param_2 < 0) || (iVar4 = *(int *)(lVar6 + 0x18) + -1, param_2 <= iVar4)) &&
         (iVar4 = param_2, param_2 < 0)) {
        iVar4 = 0;
      }
      *(int *)(param_1 + 0xa8) = iVar4;
      ChatWindow__PintaSugestoes__1805cca10(param_1,0);
      ChatWindow__CursorNoFim__1805c6860(param_1,0);
      return;
    }
    goto code_r0x0001805d0873;
  }
  if (*(longlong **)(param_1 + 0x108) == (longlong *)0x0) goto code_r0x0001805d0873;
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0xa78))();
  if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  uStackX_8 = 0;
  func_0x000180314690(&uStackX_8);
  cVar2 = func_0x000181707e50(lVar6,0);
  if (cVar2 == '\0') {
    if (lVar6 == 0) goto code_r0x0001805d0873;
    sVar3 = System_String__get_Chars(lVar6,0,0);
    if (sVar3 == 0x22) {
      iVar4 = func_0x0001817079f0(lVar6,0x20,0);
      if (iVar4 < 0) {
        uStackX_8 = func_0x00018170c060(lVar6,1,0);
code_r0x0001805d0772:
        func_0x000180314690(&uStackX_8,uStackX_8);
      }
      else if (iVar4 != 1) {
        lVar7 = func_0x00018170c060(lVar6,iVar4,0);
        if ((lVar7 == 0) || (lVar7 = func_0x00018170d270(lVar7,0), lVar7 == 0))
        goto code_r0x0001805d0873;
        if (*(int *)(lVar7 + 0x10) < 1) {
          uStackX_8 = System_String__Substring(lVar6,1,iVar4 + -1,0);
          goto code_r0x0001805d0772;
        }
      }
    }
  }
  iVar4 = ChatWindow__IndiceTell__1805c7370(uStackX_8,0);
  if (param_2 < 1) {
    iVar9 = iVar4 + -1;
  }
  else {
    if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar6 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x10);
    if (lVar6 == 0) goto code_r0x0001805d0873;
    iVar5 = *(int *)(lVar6 + 0x18) + -1;
    iVar9 = iVar4 + 1;
    if (iVar5 <= iVar4 + 1) {
      iVar9 = iVar5;
    }
  }
  if ((-1 < iVar9) && (iVar9 != iVar4)) {
    if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar6 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x10);
    if (lVar6 == 0) {
code_r0x0001805d0873:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar8 = FUN_180bbafe0(lVar6,iVar9,MR_System.Collections.Generic.List<string>.get_Item);
    ChatWindow__PoeTell__1805cd2a0(param_1,uVar8,0);
  }
  return;
}

