// ChatWindow__AtualizaTell__1805c5120 @ 0x1805c5120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__AtualizaTell__1805c5120(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uStackX_18;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  longlong lStack_30;
  undefined8 uStack_28;
  undefined8 *puStack_20;
  longlong lStack_18;
  
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
  puStack_20 = (undefined8 *)0x0;
  lStack_18 = 0;
  lVar6 = *(longlong *)(param_1 + 0xa0);
  if (lVar6 != 0) {
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    iVar5 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    if (0 < iVar5) {
      System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar5,0);
    }
    *(undefined1 *)(param_1 + 0x9c) = 0;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
        func_0x000180315660(TI_ChatWindow);
      }
      lVar6 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x10);
      if (lVar6 == 0) goto code_r0x0001805c54ba;
      if (0 < *(int *)(lVar6 + 0x18)) {
        plVar1 = *(longlong **)(param_1 + 0x108);
        if (plVar1 == (longlong *)0x0) goto code_r0x0001805c54ba;
        lVar6 = (**(code **)(*plVar1 + 0xa78))(plVar1,*(undefined8 *)(*plVar1 + 0xa80));
        if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        func_0x000180314690(&uStackX_18,0);
        cVar3 = func_0x000181707e50(lVar6,0);
        if (cVar3 == '\0') {
          if (lVar6 == 0) goto code_r0x0001805c54ba;
          sVar4 = System_String__get_Chars(lVar6,0,0);
          if (sVar4 == 0x22) {
            iVar5 = func_0x0001817079f0(lVar6,0x20,0);
            if (iVar5 < 0) {
              uStackX_18 = func_0x00018170c060(lVar6,1,0);
              func_0x000180314690(&uStackX_18,uStackX_18);
              *(undefined1 *)(param_1 + 0x9c) = 1;
              if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
                func_0x000180315660(TI_ChatWindow);
              }
              lVar6 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 0x10);
              if (lVar6 == 0) goto code_r0x0001805c54ba;
              FUN_180bada40(&uStack_40,lVar6,MR_System.Collections.Generic.List<string>.GetEnumerator);
              uStack_28 = uStack_40;
              puStack_20 = puStack_38;
              lStack_18 = lStack_30;
              uStack_40 = 0;
              puStack_38 = &uStack_28;
              do {
                do {
                  cVar3 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<string>.MoveNext);
                  lVar6 = lStack_18;
                  if (cVar3 == '\0') {
                    Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<string>.Dispose);
                    goto code_r0x0001805c5493;
                  }
                  if (lStack_18 == 0) goto code_r0x0001805c54cb;
                  cVar3 = System_String__StartsWith(lStack_18,uStackX_18,5,0);
                } while (cVar3 == '\0');
                if (*(longlong *)(param_1 + 0xa0) == 0) goto code_r0x0001805c54c6;
                FUN_180002eb0(*(longlong *)(param_1 + 0xa0),lVar6,MR_System.Collections.Generic.List<string>.Add);
                if (*(longlong *)(param_1 + 0xa0) == 0) goto code_r0x0001805c54c0;
              } while (*(int *)(*(longlong *)(param_1 + 0xa0) + 0x18) < 5);
              Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<string>.Dispose);
            }
            else if (iVar5 != 1) {
              lVar7 = func_0x00018170c060(lVar6,iVar5,0);
              if (lVar7 != 0) {
                lVar7 = func_0x00018170d270(lVar7,0);
                if (lVar7 != 0) {
                  if (*(int *)(lVar7 + 0x10) < 1) {
                    uStackX_18 = System_String__Substring(lVar6,1,iVar5 + -1,0);
                    func_0x000180314690(&uStackX_18,uStackX_18);
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

