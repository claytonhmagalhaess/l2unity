// ChatWindow__Remonta__1805cdf70 @ 0x1805cdf70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__Remonta__1805cdf70(longlong param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_38 [8];
  undefined1 *puStack_30;
  undefined8 auStack_28 [2];
  
  if (cRam00000001834b3ac2 == '\0') {
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<string,int>.get_Key);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<string,int>.get_Value);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<string>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<string,int>>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Item);
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<string,int>>.get_Item);
    FUN_180315380(TI_System.Collections.Generic.List<string>);
    FUN_180315380(TI_SparkChatFiltro);
    cRam00000001834b3ac2 = '\x01';
  }
  lVar9 = *(longlong *)(param_1 + 200);
  if (lVar9 != 0) {
    if (*(uint *)(lVar9 + 0x18) <= param_2) {
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar9 = *(longlong *)(lVar9 + 0x20 + (longlong)(int)param_2 * 8);
    if (lVar9 != 0) {
      UnityEngine_UIElements_VisualElement__Clear(lVar9,0);
      if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar5 = SparkChatFiltro__Casa(param_2,0);
      lVar7 = func_0x000180315580(TI_System.Collections.Generic.List<string>);
      FUN_180bba2e0(lVar7,MR_System.Collections.Generic.List<string>..ctor);
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        iVar11 = *(int *)(*(longlong *)(param_1 + 0xd8) + 0x18) + -1;
        if (-1 < iVar11) {
          if (lVar7 == 0) goto code_r0x0001805ce1e2;
          do {
            iVar1 = *(int *)(lVar7 + 0x18);
            if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
              func_0x000180315660(TI_ChatWindow);
            }
            if (*(int *)(*(longlong *)(TI_ChatWindow + 0xb8) + 4) <= iVar1)
            goto code_r0x0001805ce184;
            if (*(longlong *)(param_1 + 0xd8) == 0) goto code_r0x0001805ce1e2;
            FUN_180bbaf80(auStack_38,*(longlong *)(param_1 + 0xd8),iVar11,MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<string,int>>.get_Item);
            if (*(int *)(TI_SparkChatFiltro + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar3 = SparkChatFiltro__Mostra__1805d3960(uVar5,(ulonglong)puStack_30 & 0xffffffff,0);
            if (cVar3 != '\0') {
              if (*(longlong *)(param_1 + 0xd8) == 0) goto code_r0x0001805ce1e2;
              FUN_180bbaf80(auStack_28,*(longlong *)(param_1 + 0xd8),iVar11,MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<string,int>>.get_Item);
              FUN_180002eb0(lVar7,auStack_28[0],MR_System.Collections.Generic.List<string>.Add);
            }
            iVar11 = iVar11 + -1;
          } while (-1 < iVar11);
        }
        if (lVar7 != 0) {
code_r0x0001805ce184:
          iVar11 = *(int *)(lVar7 + 0x18);
          while (iVar11 = iVar11 + -1, -1 < iVar11) {
            uVar8 = FUN_180bbafe0(lVar7,iVar11,MR_System.Collections.Generic.List<string>.get_Item);
            ChatWindow__Adiciona__1805c3e70(param_1,lVar9,uVar8,0);
          }
          if (cRam00000001834b3ae8 == '\0') {
            puStack_30 = &UNK_1805ce21b;
            FUN_180315380(TI_System.Action,lVar9,1,0);
            puStack_30 = &UNK_1805ce227;
            FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduledItem);
            puStack_30 = &UNK_1805ce233;
            FUN_180315380(TI_UnityEngine.UIElements.IVisualElementScheduler);
            puStack_30 = &UNK_1805ce23f;
            FUN_180315380(MD_ChatWindow.__c__DisplayClass113_0._RolaParaBaixo_b__0);
            puStack_30 = &UNK_1805ce24b;
            FUN_180315380(TI_ChatWindow.<>c__DisplayClass113_0);
            cRam00000001834b3ae8 = '\x01';
          }
          puStack_30 = &UNK_1805ce263;
          lVar7 = func_0x000180315580(TI_ChatWindow.<>c__DisplayClass113_0);
          puStack_30 = &UNK_1805ce270;
          Gear__UpdateWeaponType__1803dadf0(lVar7,0);
          if (lVar7 != 0) {
            *(longlong *)(lVar7 + 0x10) = lVar9;
            puStack_30 = &UNK_1805ce289;
            func_0x000180314690(lVar7 + 0x10,lVar9);
            if (*(longlong *)(lVar7 + 0x10) != 0) {
              puStack_30 = &UNK_1805ce29d;
              lVar9 = func_0x0001818f3de0(*(longlong *)(lVar7 + 0x10),0);
              puStack_30 = &UNK_1805ce2ac;
              uVar8 = func_0x000180315580(TI_System.Action);
              puStack_30 = &UNK_1805ce2c4;
              FUN_1816a9c60(uVar8,lVar7,MD_ChatWindow.__c__DisplayClass113_0._RolaParaBaixo_b__0,0);
              if (lVar9 != 0) {
                puStack_30 = &UNK_1805ce2e0;
                plVar10 = (longlong *)FUN_180002030(1,TI_UnityEngine.UIElements.IVisualElementScheduler,lVar9,uVar8);
                if (plVar10 != (longlong *)0x0) {
                  uVar4 = 0;
                  lVar9 = *plVar10;
                  if (*(ushort *)(lVar9 + 0x12e) != 0) {
                    do {
                      if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + (ulonglong)uVar4 * 0x10) ==
                          TI_UnityEngine.UIElements.IVisualElementScheduledItem) {
                        puVar6 = (undefined8 *)
                                 ((longlong)
                                  (*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 +
                                           (ulonglong)uVar4 * 0x10) + 4) * 0x10 + 0x138 + lVar9);
                        goto LAB_180002080;
                      }
                      uVar4 = uVar4 + 1;
                    } while (uVar4 < *(ushort *)(lVar9 + 0x12e));
                  }
                  puStack_30 = &LAB_180002080;
                  puVar6 = (undefined8 *)FUN_180312860(plVar10);
LAB_180002080:
                    /* WARNING: Could not recover jumptable at 0x000180002099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)*puVar6)(plVar10,0,puVar6[1]);
                  return;
                }
              }
            }
          }
          puStack_30 = &UNK_1805ce31d;
          FUN_1803155d0();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
code_r0x0001805ce1e2:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

