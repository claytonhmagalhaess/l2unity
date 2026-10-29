// ClanWindow__MostraRanks__1805e7bf0 @ 0x1805e7bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ClanWindow__MostraRanks__1805e7bf0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int aiStackX_8 [2];
  int iStackX_1c;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_78;
  undefined4 *puStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong uStack_48;
  
  if (cRam00000001834b3b6d == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.CallbackEventHandler.RegisterCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(TI_ClanWindow);
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<int,int>.get_Key);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<int,int>.get_Value);
    FUN_180315380(MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.GetEnumerator);
    FUN_180315380(MR_System.Nullable<UnityEngine.Color>..ctor);
    FUN_180315380(TI_SparkClan);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(MD_ClanWindow.__c__DisplayClass90_0._MostraRanks_b__0);
    FUN_180315380(TI_ClanWindow.<>c__DisplayClass90_0);
    FUN_180315380(LIT_"' members'");
    FUN_180315380(LIT_"' member'");
    cRam00000001834b3b6d = '\x01';
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  aiStackX_8[0] = 0;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0x1c8),0);
    if (*(int *)(TI_SparkClan + 0xe4) == 0) {
      func_0x000180315660(TI_SparkClan);
    }
    lVar5 = *(longlong *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x60);
    if (lVar5 != 0) {
      FUN_180bada40(&uStack_98,lVar5,MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.GetEnumerator);
      uStack_58 = (undefined4)uStack_98;
      uStack_54 = uStack_98._4_4_;
      uStack_50 = (undefined4)uStack_90;
      uStack_4c = uStack_90._4_4_;
      uStack_48 = CONCAT44(uStack_84,uStack_88);
      uStack_78 = 0;
      puStack_70 = &uStack_58;
code_r0x0001805e7d90:
      do {
        cVar4 = FUN_1812ed5e0(&uStack_58,MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.MoveNext);
        uVar3 = uStack_48;
        if (cVar4 == '\0') {
          Gear__UpdateWeaponType__1803dadf0(&uStack_58,MR_System.Collections.Generic.List<System.Collections.Generic.KeyValuePair<int,int>>.Dispose);
          return;
        }
        lVar5 = func_0x000180315580(TI_ClanWindow.<>c__DisplayClass90_0);
        Gear__UpdateWeaponType__1803dadf0(lVar5,0);
        if (lVar5 == 0) goto code_r0x0001805e80e9;
        *(longlong *)(lVar5 + 0x20) = param_1;
        func_0x000180314690(lVar5 + 0x20,param_1);
        *(int *)(lVar5 + 0x18) = (int)uVar3;
        if (*(int *)(TI_SparkClan + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = SparkClan__RankVisivel(uVar3 & 0xffffffff,0);
      } while (cVar4 == '\0');
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar6 = SparkEstilo__Linha__180720db0(0x18,0);
      *(undefined8 *)(lVar5 + 0x10) = uVar6;
      func_0x000180314690(lVar5 + 0x10,uVar6);
      uVar9 = *(undefined4 *)(lVar5 + 0x18);
      if (*(int *)(TI_SparkClan + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar6 = SparkClan__NomeDoRank(uVar9,0);
      if ((*(int *)(lVar5 + 0x18) == 1) || (5 < *(int *)(lVar5 + 0x18))) {
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar1 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uStack_68 = *(undefined4 *)(lVar1 + 0x70);
        uStack_64 = *(undefined4 *)(lVar1 + 0x74);
        uStack_60 = *(undefined4 *)(lVar1 + 0x78);
        uStack_5c = *(undefined4 *)(lVar1 + 0x7c);
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        func_0x000180cb7cb0(&uStack_b8,&uStack_68,MR_System.Nullable<UnityEngine.Color>..ctor);
        uVar9 = (undefined4)uStack_b8;
        uVar10 = uStack_b8._4_4_;
        uVar11 = (undefined4)uStack_b0;
        uVar12 = uStack_b0._4_4_;
        uVar8 = uStack_a8;
      }
      else {
        uVar9 = 0;
        uVar10 = 0;
        uVar11 = 0;
        uVar12 = 0;
        uVar8 = 0;
      }
      if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      uStack_b8 = CONCAT44(uVar10,uVar9);
      uStack_b0 = CONCAT44(uVar12,uVar11);
      uStack_a8 = uVar8;
      uVar6 = ClanWindow__Coluna(uVar6,100,&uStack_b8,0);
      if (*(longlong *)(lVar5 + 0x10) != 0) {
        UnityEngine_UIElements_VisualElement__Add(*(longlong *)(lVar5 + 0x10),uVar6,0);
        iStackX_1c = (int)(uVar3 >> 0x20);
        aiStackX_8[0] = iStackX_1c;
        uVar7 = System_Int32__ToString(aiStackX_8,0);
        uVar6 = LIT_"' member'";
        if (iStackX_1c != 1) {
          uVar6 = LIT_"' members'";
        }
        uVar6 = System_String__Concat(uVar7,uVar6,0);
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660(TI_SparkEstilo);
        }
        lVar1 = *(longlong *)(TI_SparkEstilo + 0xb8);
        uStack_68 = *(undefined4 *)(lVar1 + 0x50);
        uStack_64 = *(undefined4 *)(lVar1 + 0x54);
        uStack_60 = *(undefined4 *)(lVar1 + 0x58);
        uStack_5c = *(undefined4 *)(lVar1 + 0x5c);
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        func_0x000180cb7cb0(&uStack_b8,&uStack_68,MR_System.Nullable<UnityEngine.Color>..ctor);
        uStack_98 = uStack_b8;
        uStack_90 = uStack_b0;
        uStack_88 = uStack_a8;
        uVar6 = SparkEstilo__Texto__180722af0(uVar6,10,&uStack_98,0,0);
        if (*(longlong *)(lVar5 + 0x10) != 0) {
          UnityEngine_UIElements_VisualElement__Add(*(longlong *)(lVar5 + 0x10),uVar6,0);
          SparkEstilo__Marca__180721270
                    (*(undefined8 *)(lVar5 + 0x10),
                     *(int *)(lVar5 + 0x18) == *(int *)(param_1 + 0x1e8),0);
          lVar1 = *(longlong *)(lVar5 + 0x10);
          uVar6 = func_0x000180315580(TI_UnityEngine.UIElements.EventCallback<UnityEngine.UIElements.MouseDownEvent>);
          FUN_18055b980(uVar6,lVar5,MD_ClanWindow.__c__DisplayClass90_0._MostraRanks_b__0,0);
          if (lVar1 != 0) {
            FUN_180990d50(lVar1,uVar6,0);
            if (*(longlong *)(param_1 + 0x1c8) != 0) {
              UnityEngine_UIElements_VisualElement__Add
                        (*(longlong *)(param_1 + 0x1c8),*(undefined8 *)(lVar5 + 0x10),0);
              goto code_r0x0001805e7d90;
            }
            FUN_1803155d0();
          }
          FUN_1803155d0();
        }
        FUN_1803155d0();
      }
      FUN_1803155d0();
code_r0x0001805e80e9:
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

