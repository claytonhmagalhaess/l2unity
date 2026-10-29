// ChatWindow__ZeraTell__1805d1490 @ 0x1805d1490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__ZeraTell__1805d1490(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uStackX_18;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (cRam00000001834b3ad4 == '\0') {
    puStack_30 = &UNK_1805d14a9;
    FUN_180315380(TI_ChatWindow);
    puStack_30 = &UNK_1805d14b5;
    FUN_180315380(MR_System.Collections.Generic.List<string>.Clear);
    puStack_30 = &UNK_1805d14c1;
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3ad4 = '\x01';
  }
  if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
    puStack_30 = &UNK_1805d14e0;
    func_0x000180315660(TI_ChatWindow);
  }
  lVar2 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x10);
  if (lVar2 != 0) {
    iVar8 = *(int *)(lVar2 + 0x18);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    *(undefined4 *)(lVar2 + 0x18) = 0;
    if (0 < iVar8) {
      puStack_30 = &UNK_1805d1521;
      System_Array__Clear(*(undefined8 *)(lVar2 + 0x10),0,iVar8,0);
    }
    uVar3 = *(undefined8 *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      puStack_30 = &UNK_1805d1548;
      func_0x000180315660();
    }
    puStack_30 = &UNK_1805d1555;
    cVar6 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if (cVar6 == '\0') {
      return;
    }
    if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
      puStack_30 = &UNK_1805d1573;
      func_0x000180315660();
    }
    lVar2 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8);
    if (lVar2 != 0) {
      if (*(char *)(lVar2 + 0x118) == '\0') {
        return;
      }
      if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
        puStack_30 = &UNK_1805d15a1;
        func_0x000180315660();
      }
      lVar2 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8);
      if (lVar2 != 0) {
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
        uStackX_18 = 0;
        uStack_28 = 0;
        puStack_20 = (undefined1 *)0x0;
        puStack_18 = (undefined *)0x0;
        lVar9 = *(longlong *)(lVar2 + 0xa0);
        if (lVar9 == 0) {
code_r0x0001805c54ba:
          FUN_1803155d0();
code_r0x0001805c54c0:
          FUN_1803155d0();
code_r0x0001805c54c6:
          FUN_1803155d0();
code_r0x0001805c54cb:
          FUN_1803155d0();
          FUN_180311490();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        iVar8 = *(int *)(lVar9 + 0x18);
        *(undefined4 *)(lVar9 + 0x18) = 0;
        if (0 < iVar8) {
          System_Array__Clear(*(undefined8 *)(lVar9 + 0x10),0,iVar8,0);
        }
        *(undefined1 *)(lVar2 + 0x9c) = 0;
        if (*(longlong *)(lVar2 + 0x108) != 0) {
          if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
            func_0x000180315660(TI_ChatWindow);
          }
          lVar9 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x10);
          if (lVar9 == 0) goto code_r0x0001805c54ba;
          if (0 < *(int *)(lVar9 + 0x18)) {
            plVar1 = *(longlong **)(lVar2 + 0x108);
            if (plVar1 == (longlong *)0x0) goto code_r0x0001805c54ba;
            lVar9 = (**(code **)(*plVar1 + 0xa78))(plVar1,*(undefined8 *)(*plVar1 + 0xa80));
            if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
              func_0x000180315660();
            }
            func_0x000180314690(&uStackX_18,0);
            cVar6 = func_0x000181707e50(lVar9,0);
            if (cVar6 == '\0') {
              if (lVar9 == 0) goto code_r0x0001805c54ba;
              sVar7 = System_String__get_Chars(lVar9,0,0);
              if (sVar7 == 0x22) {
                iVar8 = func_0x0001817079f0(lVar9,0x20,0);
                if (iVar8 < 0) {
                  uStackX_18 = func_0x00018170c060(lVar9,1,0);
                  func_0x000180314690(&uStackX_18,uStackX_18);
                  *(undefined1 *)(lVar2 + 0x9c) = 1;
                  if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
                    func_0x000180315660(TI_ChatWindow);
                  }
                  lVar9 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x10);
                  if (lVar9 == 0) goto code_r0x0001805c54ba;
                  FUN_180bada40(&uStack_40,lVar9,MR_System.Collections.Generic.List<string>.GetEnumerator);
                  uStack_28 = uStack_40;
                  puStack_20 = puStack_38;
                  puStack_18 = puStack_30;
                  uStack_40 = 0;
                  puStack_38 = (undefined1 *)&uStack_28;
                  do {
                    do {
                      cVar6 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<string>.MoveNext);
                      puVar5 = puStack_18;
                      if (cVar6 == '\0') {
                        Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<string>.Dispose);
                        goto code_r0x0001805c5493;
                      }
                      if (puStack_18 == (undefined *)0x0) goto code_r0x0001805c54cb;
                      cVar6 = System_String__StartsWith(puStack_18,uStackX_18,5,0);
                    } while (cVar6 == '\0');
                    if (*(longlong *)(lVar2 + 0xa0) == 0) goto code_r0x0001805c54c6;
                    FUN_180002eb0(*(longlong *)(lVar2 + 0xa0),puVar5,MR_System.Collections.Generic.List<string>.Add);
                    if (*(longlong *)(lVar2 + 0xa0) == 0) goto code_r0x0001805c54c0;
                  } while (*(int *)(*(longlong *)(lVar2 + 0xa0) + 0x18) < 5);
                  Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<string>.Dispose);
                }
                else if (iVar8 != 1) {
                  lVar10 = func_0x00018170c060(lVar9,iVar8,0);
                  if ((lVar10 == 0) || (lVar10 = func_0x00018170d270(lVar10,0), lVar10 == 0))
                  goto code_r0x0001805c54ba;
                  if (*(int *)(lVar10 + 0x10) < 1) {
                    uStackX_18 = System_String__Substring(lVar9,1,iVar8 + -1,0);
                    func_0x000180314690(&uStackX_18,uStackX_18);
                    *(undefined1 *)(lVar2 + 0x9c) = 1;
                  }
                }
              }
            }
          }
        }
code_r0x0001805c5493:
        *(undefined4 *)(lVar2 + 0xa8) = 0;
        ChatWindow__PintaSugestoes__1805cca10(lVar2,0);
        return;
      }
    }
  }
  puStack_30 = &UNK_1805d15cd;
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

