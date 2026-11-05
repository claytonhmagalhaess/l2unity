// ClanWindow__MostraPrivilegios__1805e75a0 @ 0x1805e75a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ClanWindow__MostraPrivilegios__1805e75a0
               (longlong param_1,int param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (cRam00000001834b3b69 == '\0') {
    FUN_180315380(TI_ClanWindow);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<System.Func<bool>,System.Action<bool,bool>>>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<System.Func<bool>,System.Action<bool,bool>>>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<System.Func<bool>,System.Action<bool,bool>>>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<System.Func<bool>,System.Action<bool,bool>>>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<int,System.ValueTuple<System.Func<bool>,System.Action<bool,bool>>>.get_Key);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<int,System.ValueTuple<System.Func<bool>,System.Action<bool,bool>>>.get_Value);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<string>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(TI_System.Collections.Generic.List<string>);
    FUN_180315380(TI_SparkClan);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(LIT_"'Clan Hall'");
    FUN_180315380(LIT_"'None'");
    FUN_180315380(LIT_"'Castle'");
    FUN_180315380(LIT_"', '");
    FUN_180315380(LIT_"'All (clan leader)'");
    cRam00000001834b3b69 = '\x01';
  }
  cVar6 = func_0x000181707e50(param_3,0);
  if (cVar6 == '\0') {
    uVar9 = *(undefined8 *)(param_1 + 0x108);
    if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar6 = System_String__Equals(param_3,uVar9,5,0);
    if (cVar6 == '\0') {
      return;
    }
    lVar8 = func_0x000180315580(TI_System.Collections.Generic.List<string>);
    FUN_180bba2e0(lVar8,MR_System.Collections.Generic.List<string>..ctor);
    if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_ClanWindow + 0xb8) + 0x10);
    if (lVar1 == 0) goto code_r0x0001805e7bce;
    uVar11 = 0;
    for (uVar7 = 0; (int)uVar7 < *(int *)(lVar1 + 0x18); uVar7 = uVar7 + 1) {
      if (*(uint *)(lVar1 + 0x18) <= uVar7) goto code_r0x0001805e7be0;
      if ((*(uint *)(lVar1 + ((longlong)(int)uVar7 + 2) * 0x10) & param_4) != 0) {
        if (lVar8 == 0) goto code_r0x0001805e7bce;
        FUN_180002eb0(lVar8,*(undefined8 *)(lVar1 + 8 + ((longlong)(int)uVar7 + 2) * 0x10),
                      MR_System.Collections.Generic.List<string>.Add);
      }
    }
    if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_ClanWindow + 0xb8) + 0x18);
    if (lVar1 == 0) goto code_r0x0001805e7bce;
    bVar10 = false;
    for (uVar7 = 0; (int)uVar7 < (int)*(uint *)(lVar1 + 0x18); uVar7 = uVar7 + 1) {
      if (*(uint *)(lVar1 + 0x18) <= uVar7) goto code_r0x0001805e7be0;
      if ((*(uint *)(lVar1 + ((longlong)(int)uVar7 + 2) * 0x10) & param_4) != 0) {
        bVar10 = true;
      }
    }
    if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar2 = MR_System.Collections.Generic.List<string>.Add;
    uVar9 = LIT_"'Clan Hall'";
    lVar1 = *(longlong *)(*(longlong *)(TI_ClanWindow + 0xb8) + 0x20);
    if (lVar1 == 0) goto code_r0x0001805e7bce;
    bVar5 = false;
    for (; (int)uVar11 < (int)*(uint *)(lVar1 + 0x18); uVar11 = uVar11 + 1) {
      if (*(uint *)(lVar1 + 0x18) <= uVar11) goto code_r0x0001805e7be0;
      if ((*(uint *)(lVar1 + ((longlong)(int)uVar11 + 2) * 0x10) & param_4) != 0) {
        bVar5 = true;
      }
    }
    if (bVar10) {
      if (lVar8 == 0) goto code_r0x0001805e7bce;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      lVar1 = *(longlong *)(lVar8 + 0x10);
      if (lVar1 == 0) goto code_r0x0001805e7bce;
      uVar7 = *(uint *)(lVar8 + 0x18);
      if (uVar7 < *(uint *)(lVar1 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar7 + 1;
        if (*(uint *)(lVar1 + 0x18) <= uVar7) goto code_r0x0001805e7be0;
        *(undefined8 *)(lVar1 + 0x20 + (longlong)(int)uVar7 * 8) = uVar9;
        func_0x000180314690(lVar1 + (longlong)(int)uVar7 * 8 + 0x20);
      }
      else {
        FUN_181645af0(lVar8,uVar9,
                      *(undefined8 *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    lVar1 = MR_System.Collections.Generic.List<string>.Add;
    uVar9 = LIT_"'Castle'";
    if (bVar5) {
      if (lVar8 == 0) goto code_r0x0001805e7bce;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      lVar2 = *(longlong *)(lVar8 + 0x10);
      if (lVar2 == 0) goto code_r0x0001805e7bce;
      uVar7 = *(uint *)(lVar8 + 0x18);
      if (uVar7 < *(uint *)(lVar2 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar7 + 1;
        if (*(uint *)(lVar2 + 0x18) <= uVar7) {
code_r0x0001805e7be0:
          FUN_1803155c0();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined8 *)(lVar2 + 0x20 + (longlong)(int)uVar7 * 8) = uVar9;
        func_0x000180314690(lVar2 + (longlong)(int)uVar7 * 8 + 0x20);
      }
      else {
        FUN_181645af0(lVar8,uVar9,
                      *(undefined8 *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + 0xc0) + 0x70));
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x158);
    if (*(int *)(TI_SparkClan + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b3bba == '\0') {
      FUN_180315380(TI_SparkClan);
      cRam00000001834b3bba = '\x01';
    }
    if (*(int *)(TI_SparkClan + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar9 = *(undefined8 *)(*(longlong *)(TI_SparkClan + 0xb8) + 0x10);
    if (*(int *)(TI_ClanWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar6 = System_String__Equals(param_3,uVar9,5,0);
    uVar9 = LIT_"'All (clan leader)'";
    if (cVar6 == '\0') {
      if (lVar8 == 0) goto code_r0x0001805e7bce;
      uVar9 = LIT_"'None'";
      if (*(int *)(lVar8 + 0x18) != 0) {
        uVar9 = System_String__Join(LIT_"', '",lVar8,0);
      }
    }
    if (plVar3 == (longlong *)0x0) {
code_r0x0001805e7bce:
      FUN_1803155d0();
code_r0x0001805e7bd4:
      FUN_1803155d0();
      FUN_180311490();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(*plVar3 + 0xe48))(plVar3,uVar9,*(undefined8 *)(*plVar3 + 0xe50));
  }
  else if (param_2 == *(int *)(param_1 + 0x1e8)) {
    if (*(int *)(TI_SparkClan + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar6 = SparkClan__get_SouLider(0);
    bVar10 = cVar6 != '\0' && param_2 != 1;
    if (*(int *)(TI_SparkClan + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar7 = func_0x0001807ce290(param_2,0);
    if (*(longlong *)(param_1 + 0x1f0) == 0) goto code_r0x0001805e7bce;
    FUN_18117cc90(&uStack_60,*(longlong *)(param_1 + 0x1f0),MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<System.Func<bool>,System.Action<bool,bool>>>.GetEnumerator);
    uStack_90 = uStack_60;
    uStack_88 = uStack_58;
    uStack_80 = uStack_50;
    uStack_78 = uStack_48;
    uStack_70 = uStack_40;
    uStack_6c = uStack_3c;
    uStack_68 = uStack_38;
    uStack_64 = uStack_34;
    while (cVar6 = FUN_18131e6b0(&uStack_90,MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<System.Func<bool>,System.Action<bool,bool>>>.MoveNext), cVar6 != '\0') {
      lVar8 = CONCAT44(uStack_6c,uStack_70);
      if (lVar8 == 0) goto code_r0x0001805e7bd4;
      (**(code **)(lVar8 + 0x18))
                (*(undefined8 *)(lVar8 + 0x40),param_2 == 1 || (param_4 & (uint)uStack_80) != 0,
                 bVar10 && (uVar7 & (uint)uStack_80) != 0,*(undefined8 *)(lVar8 + 0x28));
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_90,MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<System.Func<bool>,System.Action<bool,bool>>>.Dispose);
    uVar9 = *(undefined8 *)(param_1 + 0x1e0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkEstilo__Liga__180720c80(uVar9,bVar10,0);
  }
  return;
}

