// OptionsWindow___c__DisplayClass37_0___Video_b__1__1806bf300 @ 0x1806bf300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass37_0___Video_b__1__1806bf300(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 auStackX_8 [4];
  undefined4 auStackX_18 [2];
  undefined8 uStackX_20;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  if (cRam00000001834b3f28 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Vector2Int>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Vector2Int>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Vector2Int>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Vector2Int>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<string>.ToArray);
    FUN_180315380(MR_System.Collections.Generic.List<string>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<string>);
    FUN_180315380(LIT_"'{0}*{1} 32bit'");
    cRam00000001834b3f28 = '\x01';
  }
  lVar6 = func_0x000180315580(TI_System.Collections.Generic.List<string>);
  FUN_180bba2e0(lVar6,MR_System.Collections.Generic.List<string>..ctor);
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xd0), lVar2 != 0)) {
    FUN_180bada40(&uStack_48,lVar2,MR_System.Collections.Generic.List<UnityEngine.Vector2Int>.GetEnumerator);
    uStack_30 = (undefined4)uStack_48;
    uStack_2c = uStack_48._4_4_;
    uStack_28 = (undefined4)uStack_40;
    uStack_24 = uStack_40._4_4_;
    uStack_20 = uStack_38;
    uStack_48 = 0;
    uStack_40 = &uStack_30;
    while( true ) {
      cVar5 = FUN_1812ed5e0(&uStack_30,MR_System.Collections.Generic.List<UnityEngine.Vector2Int>.MoveNext);
      if (cVar5 == '\0') break;
      uStackX_20 = uStack_20;
      auStackX_8[0] = (undefined4)uStack_20;
      uVar7 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
      auStackX_18[0] = uStackX_20._4_4_;
      uVar8 = func_0x000180314670(_DAT_1834c6268,auStackX_18);
      uVar7 = System_String__Format(LIT_"'{0}*{1} 32bit'",uVar7,uVar8,0);
      lVar2 = MR_System.Collections.Generic.List<string>.Add;
      if (lVar6 == 0) goto code_r0x0001806bf54a;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      lVar3 = *(longlong *)(lVar6 + 0x10);
      if (lVar3 == 0) goto code_r0x0001806bf545;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        if (*(uint *)(lVar3 + 0x18) <= uVar1) goto code_r0x0001806bf53f;
        *(undefined8 *)(lVar3 + 0x20 + (longlong)(int)uVar1 * 8) = uVar7;
        func_0x000180314690(lVar3 + (longlong)(int)uVar1 * 8 + 0x20,uVar7);
      }
      else {
        FUN_181645af0(lVar6,uVar7,
                      *(undefined8 *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    func_0x0001803dadf0(&uStack_30,MR_System.Collections.Generic.List<UnityEngine.Vector2Int>.Dispose);
    if (lVar6 != 0) {
      FUN_180bb9850(lVar6,MR_System.Collections.Generic.List<string>.ToArray);
      return;
    }
  }
  FUN_1803155d0();
code_r0x0001806bf53f:
  FUN_1803155c0();
code_r0x0001806bf545:
  FUN_1803155d0();
code_r0x0001806bf54a:
  FUN_1803155d0();
  FUN_180311490();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

