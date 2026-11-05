// PartyWindow__MenuDeMembros__1806a7720 @ 0x1806a7720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PartyWindow__MenuDeMembros__1806a7720(undefined8 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  ushort uVar13;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (cRam00000001834b3f76 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_System.IDisposable);
    FUN_180315380(TI_System.Collections.Generic.IEnumerable<MembroDaParty>);
    FUN_180315380(TI_System.Collections.Generic.IEnumerator<MembroDaParty>);
    FUN_180315380(TI_System.Collections.IEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<string,System.Action>>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<string,System.Action>>.ToArray);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<string,System.Action>>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<System.ValueTuple<string,System.Action>>);
    FUN_180315380(TI_SparkParty);
    FUN_180315380(TI_PartyWindow.<>c__DisplayClass32_0);
    FUN_180315380(MD_PartyWindow.__c__DisplayClass32_1._MenuDeMembros_b__0);
    FUN_180315380(TI_PartyWindow.<>c__DisplayClass32_1);
    FUN_180315380(MR_System.ValueTuple<string,System.Action>..ctor);
    cRam00000001834b3f76 = '\x01';
  }
  lVar6 = func_0x000180315580(TI_PartyWindow.<>c__DisplayClass32_0);
  Gear__UpdateWeaponType__1803dadf0(lVar6,0);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x10) = param_1;
    func_0x000180314690(lVar6 + 0x10,param_1);
    lVar7 = func_0x000180315580(TI_System.Collections.Generic.List<System.ValueTuple<string,System.Action>>);
    FUN_180bba2e0(lVar7,MR_System.Collections.Generic.List<System.ValueTuple<string,System.Action>>..ctor);
    if (*(int *)(TI_SparkParty + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (cRam00000001834b3017 == '\0') {
      FUN_180315380(TI_SparkParty);
      cRam00000001834b3017 = '\x01';
    }
    if (*(int *)(TI_SparkParty + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (**(longlong **)(TI_SparkParty + 0xb8) != 0) {
      plVar8 = (longlong *)FUN_1800020c0(0,TI_System.Collections.Generic.IEnumerable<MembroDaParty>);
      while (plVar8 != (longlong *)0x0) {
        cVar5 = FUN_1800020c0(0,TI_System.Collections.IEnumerator);
        if (cVar5 == '\0') {
          if (plVar8 != (longlong *)0x0) {
            FUN_180002390(0,TI_System.IDisposable,plVar8);
          }
          if (lVar7 != 0) {
            FUN_180bb9850(lVar7,MR_System.Collections.Generic.List<System.ValueTuple<string,System.Action>>.ToArray);
            return;
          }
          goto code_r0x0001806a7b08;
        }
        if (plVar8 == (longlong *)0x0) goto code_r0x0001806a7b28;
        lVar10 = *plVar8;
        if (*(ushort *)(lVar10 + 0x12e) != 0) {
          uVar13 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
                TI_System.Collections.Generic.IEnumerator<MembroDaParty>) {
              puVar9 = (undefined8 *)
                       ((longlong)
                        *(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) * 0x10
                        + 0x138 + lVar10);
              goto code_r0x0001806a7956;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(ushort *)(lVar10 + 0x12e));
        }
        puVar9 = (undefined8 *)FUN_180312860(plVar8,TI_System.Collections.Generic.IEnumerator<MembroDaParty>,0);
code_r0x0001806a7956:
        lVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        lVar11 = func_0x000180315580(TI_PartyWindow.<>c__DisplayClass32_1);
        Gear__UpdateWeaponType__1803dadf0(lVar11,0);
        if (lVar11 == 0) goto code_r0x0001806a7b23;
        *(longlong *)(lVar11 + 0x18) = lVar6;
        func_0x000180314690(lVar11 + 0x18,lVar6);
        if (lVar10 == 0) goto code_r0x0001806a7b1e;
        *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
        func_0x000180314690(lVar11 + 0x10);
        uVar3 = *(undefined8 *)(lVar11 + 0x10);
        uVar12 = func_0x000180315580(TI_System.Action);
        FUN_1816a9c60(uVar12,lVar11,MD_PartyWindow.__c__DisplayClass32_1._MenuDeMembros_b__0,0);
        uStack_48 = 0;
        uStack_40 = 0;
        System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor
                  (&uStack_48,uVar3,uVar12,MR_System.ValueTuple<string,System.Action>..ctor);
        lVar10 = MR_System.Collections.Generic.List<System.ValueTuple<string,System.Action>>.Add;
        if (lVar7 == 0) goto code_r0x0001806a7b19;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        lVar11 = *(longlong *)(lVar7 + 0x10);
        if (lVar11 == 0) goto code_r0x0001806a7b14;
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar2 + 1;
          if (*(uint *)(lVar11 + 0x18) <= uVar2) goto code_r0x0001806a7b0e;
          puVar1 = (undefined4 *)(lVar11 + ((longlong)(int)uVar2 + 2) * 0x10);
          *puVar1 = (undefined4)uStack_48;
          puVar1[1] = uStack_48._4_4_;
          puVar1[2] = (undefined4)uStack_40;
          puVar1[3] = uStack_40._4_4_;
          func_0x000180314690(((longlong)(int)uVar2 + 2) * 0x10 + lVar11,0);
        }
        else {
          uStack_38 = (undefined4)uStack_48;
          uStack_34 = uStack_48._4_4_;
          uStack_30 = (undefined4)uStack_40;
          uStack_2c = uStack_40._4_4_;
          FUN_180ba8bc0(lVar7,&uStack_38,
                        *(undefined8 *)(*(longlong *)(*(longlong *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
      }
      goto code_r0x0001806a7b2d;
    }
  }
code_r0x0001806a7b08:
  FUN_1803155d0();
code_r0x0001806a7b0e:
  FUN_1803155c0();
code_r0x0001806a7b14:
  FUN_1803155d0();
code_r0x0001806a7b19:
  FUN_1803155d0();
code_r0x0001806a7b1e:
  FUN_1803155d0();
code_r0x0001806a7b23:
  FUN_1803155d0();
code_r0x0001806a7b28:
  FUN_1803155d0();
code_r0x0001806a7b2d:
  FUN_1803155d0();
  FUN_180311490();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

