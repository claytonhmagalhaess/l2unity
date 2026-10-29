// ChatWindow__TellMudou__1805cef50 @ 0x1805cef50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__TellMudou__1805cef50(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined *puVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 auStackX_18 [2];
  undefined8 uStack_40;
  undefined1 *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (cRam00000001834b3ad7 == '\0') {
    puStack_30 = &UNK_1805cef7d;
    FUN_180315380(TI_ChatWindow);
    puStack_30 = &UNK_1805cef89;
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    puStack_30 = &UNK_1805cef95;
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Item);
    puStack_30 = &UNK_1805cefa1;
    FUN_180315380(LIT_"' '");
    puStack_30 = &UNK_1805cefad;
    FUN_180315380(LIT_"'\"'");
    cRam00000001834b3ad7 = '\x01';
  }
  puStack_30 = &UNK_1805cefc6;
  cVar4 = func_0x0001817058a0(param_3,LIT_"'\"'",0);
  if (cVar4 != '\0') {
    if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
      puStack_30 = &UNK_1805cefe6;
      func_0x000180315660(TI_ChatWindow);
    }
    lVar7 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x10);
    if (lVar7 == 0) goto code_r0x0001805cf0d5;
    if (0 < *(int *)(lVar7 + 0x18)) {
      puStack_30 = &UNK_1805cf015;
      cVar4 = func_0x000181707e50(param_2,0);
      if (cVar4 == '\0') {
        if (param_2 == 0) goto code_r0x0001805cf0d5;
        puStack_30 = &UNK_1805cf02f;
        sVar5 = System_String__get_Chars(param_2,0,0);
        if (sVar5 == 0x22) goto ChatWindow__AtualizaTell__1805c5120;
      }
      plVar1 = *(longlong **)(param_1 + 0x108);
      if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
        puStack_30 = &UNK_1805cf058;
        func_0x000180315660(TI_ChatWindow);
      }
      lVar7 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x10);
      if (lVar7 == 0) {
code_r0x0001805cf0d5:
        puStack_30 = &UNK_1805cf0da;
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puStack_30 = &UNK_1805cf07d;
      uVar9 = FUN_180bbafe0(lVar7,0,MR_System.Collections.Generic.List<string>.get_Item);
      puStack_30 = &UNK_1805cf096;
      uVar9 = System_String__Concat(LIT_"'\"'",uVar9,LIT_"' '",0);
      if (plVar1 == (longlong *)0x0) goto code_r0x0001805cf0d5;
      puStack_30 = &UNK_1805cf0b2;
      (**(code **)(*plVar1 + 0xb28))(plVar1,uVar9,*(undefined8 *)(*plVar1 + 0xb30));
      puStack_30 = &UNK_1805cf0bc;
      ChatWindow__CursorNoFim__1805c6860(param_1,0);
    }
  }
ChatWindow__AtualizaTell__1805c5120:
  if (cRam00000001834b3ad8 == '\0') {
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<string>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<string>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    cRam00000001834b3ad8 = '\x01';
  }
  auStackX_18[0] = 0;
  uStack_28 = 0;
  puStack_20 = (undefined1 *)0x0;
  puStack_18 = (undefined *)0x0;
  lVar7 = *(longlong *)(param_1 + 0xa0);
  if (lVar7 != 0) {
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    iVar6 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    if (0 < iVar6) {
      System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar6,0);
    }
    *(undefined1 *)(param_1 + 0x9c) = 0;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
        func_0x000180315660(TI_ChatWindow);
      }
      lVar7 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x10);
      if (lVar7 == 0) goto code_r0x0001805c54ba;
      if (0 < *(int *)(lVar7 + 0x18)) {
        plVar1 = *(longlong **)(param_1 + 0x108);
        if (plVar1 == (longlong *)0x0) goto code_r0x0001805c54ba;
        lVar7 = (**(code **)(*plVar1 + 0xa78))(plVar1,*(undefined8 *)(*plVar1 + 0xa80));
        if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        func_0x000180314690(auStackX_18,0);
        cVar4 = func_0x000181707e50(lVar7,0);
        if (cVar4 == '\0') {
          if (lVar7 == 0) goto code_r0x0001805c54ba;
          sVar5 = System_String__get_Chars(lVar7,0,0);
          if (sVar5 == 0x22) {
            iVar6 = func_0x0001817079f0(lVar7,0x20,0);
            if (iVar6 < 0) {
              auStackX_18[0] = func_0x00018170c060(lVar7,1,0);
              func_0x000180314690(auStackX_18,auStackX_18[0]);
              *(undefined1 *)(param_1 + 0x9c) = 1;
              if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
                func_0x000180315660(TI_ChatWindow);
              }
              lVar7 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x10);
              if (lVar7 == 0) goto code_r0x0001805c54ba;
              FUN_180bada40(&uStack_40,lVar7,MR_System.Collections.Generic.List<string>.GetEnumerator);
              uStack_28 = uStack_40;
              puStack_20 = puStack_38;
              puStack_18 = puStack_30;
              uStack_40 = 0;
              puStack_38 = (undefined1 *)&uStack_28;
              do {
                do {
                  cVar4 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<string>.MoveNext);
                  puVar3 = puStack_18;
                  if (cVar4 == '\0') {
                    Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<string>.Dispose);
                    goto code_r0x0001805c5493;
                  }
                  if (puStack_18 == (undefined *)0x0) goto code_r0x0001805c54cb;
                  cVar4 = System_String__StartsWith(puStack_18,auStackX_18[0],5,0);
                } while (cVar4 == '\0');
                if (*(longlong *)(param_1 + 0xa0) == 0) goto code_r0x0001805c54c6;
                FUN_180002eb0(*(longlong *)(param_1 + 0xa0),puVar3,MR_System.Collections.Generic.List<string>.Add);
                if (*(longlong *)(param_1 + 0xa0) == 0) goto code_r0x0001805c54c0;
              } while (*(int *)(*(longlong *)(param_1 + 0xa0) + 0x18) < 5);
              Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<string>.Dispose);
            }
            else if (iVar6 != 1) {
              lVar8 = func_0x00018170c060(lVar7,iVar6,0);
              if (lVar8 != 0) {
                lVar8 = func_0x00018170d270(lVar8,0);
                if (lVar8 != 0) {
                  if (*(int *)(lVar8 + 0x10) < 1) {
                    auStackX_18[0] = System_String__Substring(lVar7,1,iVar6 + -1,0);
                    func_0x000180314690(auStackX_18,auStackX_18[0]);
                    *(undefined1 *)(param_1 + 0x9c) = 1;
                  }
                  goto code_r0x0001805c5493;
                }
              }
              goto code_r0x0001805c54ba;
            }
          }
        }
      }
    }
code_r0x0001805c5493:
    *(undefined4 *)(param_1 + 0xa8) = 0;
    ChatWindow__PintaSugestoes__1805cca10(param_1,0);
    return;
  }
code_r0x0001805c54ba:
  FUN_1803155d0();
code_r0x0001805c54c0:
  FUN_1803155d0();
code_r0x0001805c54c6:
  FUN_1803155d0();
code_r0x0001805c54cb:
  FUN_1803155d0();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

