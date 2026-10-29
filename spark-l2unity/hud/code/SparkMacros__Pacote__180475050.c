// SparkMacros__Pacote__180475050 @ 0x180475050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMacros__Pacote__180475050(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  
  if (cRam00000001834b307a == '\0') {
    FUN_180315380(TI_SparkMacros.Comando);
    FUN_180315380(TI_System.Comparison<SparkMacros.Macro>);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Macro>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Comando>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Macro>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Macro>.RemoveAll);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Macro>.Sort);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Macro>.get_Count);
    FUN_180315380(TI_SparkMacros.Macro);
    FUN_180315380(TI_System.Predicate<SparkMacros.Macro>);
    FUN_180315380(TI_SparkLeitor);
    FUN_180315380(TI_SparkMacros);
    FUN_180315380(MD_SparkMacros.__c._Pacote_b__17_0);
    FUN_180315380(MD_SparkMacros.__c__DisplayClass17_0._Pacote_b__1);
    FUN_180315380(TI_SparkMacros.<>c__DisplayClass17_0);
    FUN_180315380(TI_SparkMacros.<>c);
    cRam00000001834b307a = '\x01';
  }
  lVar8 = func_0x000180315580(TI_SparkLeitor);
  SparkLeitor___ctor(lVar8,param_1,0);
  if (lVar8 == 0) goto code_r0x000180475750;
  iVar5 = func_0x00018043efc0(lVar8,0);
  ServerPacket__ReadB(lVar8,0);
  uVar6 = ServerPacket__ReadB(lVar8,0);
  iVar7 = ServerPacket__ReadB(lVar8,0);
  if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
    func_0x000180315660(TI_SparkMacros);
  }
  iVar13 = 0;
  if (iVar5 != *(int *)(*(longlong *)(TI_SparkMacros + 0xb8) + 8)) {
    if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
      func_0x000180315660(TI_SparkMacros);
    }
    *(int *)(*(longlong *)(TI_SparkMacros + 0xb8) + 8) = iVar5;
    lVar9 = **(longlong **)(TI_SparkMacros + 0xb8);
    if (lVar9 == 0) goto code_r0x000180475750;
    iVar5 = *(int *)(lVar9 + 0x18);
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    *(undefined4 *)(lVar9 + 0x18) = 0;
    if (0 < iVar5) {
      System_Array__Clear(*(undefined8 *)(lVar9 + 0x10),0,iVar5,0);
    }
  }
  if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
    func_0x000180315660(TI_SparkMacros);
  }
  *(undefined4 *)(*(longlong *)(TI_SparkMacros + 0xb8) + 0xc) = uVar6;
  if (iVar7 == 1) {
    lVar9 = func_0x000180315580(TI_SparkMacros.<>c__DisplayClass17_0);
    Gear__UpdateWeaponType__1803dadf0(lVar9,0);
    lVar10 = func_0x000180315580(TI_SparkMacros.Macro);
    if (cRam00000001834b3089 == '\0') {
      FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Comando>..ctor);
      FUN_180315380(TI_System.Collections.Generic.List<SparkMacros.Comando>);
      FUN_180315380(LIT_"''");
      cRam00000001834b3089 = '\x01';
    }
    *(undefined8 *)(lVar10 + 0x18) = LIT_"''";
    func_0x000180314690(lVar10 + 0x18,LIT_"''");
    *(undefined8 *)(lVar10 + 0x20) = LIT_"''";
    func_0x000180314690(lVar10 + 0x20,LIT_"''");
    *(undefined8 *)(lVar10 + 0x28) = LIT_"''";
    func_0x000180314690(lVar10 + 0x28,LIT_"''");
    uVar11 = func_0x000180315580(TI_System.Collections.Generic.List<SparkMacros.Comando>);
    FUN_180bba2e0(uVar11,MR_System.Collections.Generic.List<SparkMacros.Comando>..ctor);
    *(undefined8 *)(lVar10 + 0x38) = uVar11;
    func_0x000180314690(lVar10 + 0x38,uVar11);
    Gear__UpdateWeaponType__1803dadf0(lVar10,0);
    uVar6 = func_0x00018043efc0(lVar8,0);
    *(undefined4 *)(lVar10 + 0x10) = uVar6;
    uVar11 = SparkLeitor__S(lVar8,0);
    *(undefined8 *)(lVar10 + 0x18) = uVar11;
    func_0x000180314690(lVar10 + 0x18,uVar11);
    uVar11 = SparkLeitor__S(lVar8,0);
    *(undefined8 *)(lVar10 + 0x20) = uVar11;
    func_0x000180314690(lVar10 + 0x20,uVar11);
    uVar11 = SparkLeitor__S(lVar8,0);
    *(undefined8 *)(lVar10 + 0x28) = uVar11;
    func_0x000180314690(lVar10 + 0x28,uVar11);
    uVar6 = ServerPacket__ReadB(lVar8,0);
    *(undefined4 *)(lVar10 + 0x30) = uVar6;
    if (lVar9 == 0) goto code_r0x000180475750;
    *(longlong *)(lVar9 + 0x10) = lVar10;
    func_0x000180314690(lVar9 + 0x10,lVar10);
    iVar5 = ServerPacket__ReadB(lVar8,0);
    if (0 < iVar5) {
      do {
        if (*(longlong *)(lVar9 + 0x10) == 0) goto code_r0x000180475750;
        lVar10 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x38);
        lVar12 = func_0x000180315580(TI_SparkMacros.Comando);
        if (cRam00000001834b3088 == '\0') {
          FUN_180315380(LIT_"''");
          cRam00000001834b3088 = '\x01';
        }
        *(undefined4 *)(lVar12 + 0x14) = 3;
        *(undefined8 *)(lVar12 + 0x20) = LIT_"''";
        func_0x000180314690(lVar12 + 0x20,LIT_"''");
        Gear__UpdateWeaponType__1803dadf0(lVar12,0);
        uVar6 = ServerPacket__ReadB(lVar8,0);
        *(undefined4 *)(lVar12 + 0x10) = uVar6;
        uVar6 = ServerPacket__ReadB(lVar8,0);
        *(undefined4 *)(lVar12 + 0x14) = uVar6;
        uVar6 = func_0x00018043efc0(lVar8,0);
        *(undefined4 *)(lVar12 + 0x18) = uVar6;
        uVar6 = ServerPacket__ReadB(lVar8,0);
        *(undefined4 *)(lVar12 + 0x1c) = uVar6;
        uVar11 = SparkLeitor__S(lVar8,0);
        *(undefined8 *)(lVar12 + 0x20) = uVar11;
        func_0x000180314690(lVar12 + 0x20,uVar11);
        lVar4 = MR_System.Collections.Generic.List<SparkMacros.Comando>.Add;
        if (lVar10 == 0) goto code_r0x000180475750;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        lVar2 = *(longlong *)(lVar10 + 0x10);
        if (lVar2 == 0) goto code_r0x000180475750;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          if (*(uint *)(lVar2 + 0x18) <= uVar1) goto code_r0x000180475756;
          *(longlong *)(lVar2 + 0x20 + (longlong)(int)uVar1 * 8) = lVar12;
          func_0x000180314690(lVar2 + (longlong)(int)uVar1 * 8 + 0x20,lVar12);
        }
        else {
          FUN_181645af0(lVar10,lVar12,
                        *(undefined8 *)(*(longlong *)(*(longlong *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar5);
    }
    if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
      func_0x000180315660(TI_SparkMacros);
    }
    lVar8 = **(longlong **)(TI_SparkMacros + 0xb8);
    uVar11 = func_0x000180315580(TI_System.Predicate<SparkMacros.Macro>);
    FUN_180d27680(uVar11,lVar9,MD_SparkMacros.__c__DisplayClass17_0._Pacote_b__1,0);
    if (lVar8 == 0) goto code_r0x000180475750;
    FUN_18164dab0(lVar8,uVar11,MR_System.Collections.Generic.List<SparkMacros.Macro>.RemoveAll);
    lVar10 = MR_System.Collections.Generic.List<SparkMacros.Macro>.Add;
    lVar8 = **(longlong **)(TI_SparkMacros + 0xb8);
    if (lVar8 == 0) goto code_r0x000180475750;
    uVar11 = *(undefined8 *)(lVar9 + 0x10);
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    lVar9 = *(longlong *)(lVar8 + 0x10);
    if (lVar9 == 0) goto code_r0x000180475750;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      if (*(uint *)(lVar9 + 0x18) <= uVar1) {
code_r0x000180475756:
        FUN_1803155c0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined8 *)(lVar9 + 0x20 + (longlong)(int)uVar1 * 8) = uVar11;
      func_0x000180314690(lVar9 + 0x20 + (longlong)(int)uVar1 * 8);
    }
    else {
      FUN_181645af0(lVar8,uVar11,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar8 = **(longlong **)(TI_SparkMacros + 0xb8);
  if (lVar8 == 0) {
code_r0x000180475750:
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)((longlong)*(longlong **)(TI_SparkMacros + 0xb8) + 0xc) <= *(int *)(lVar8 + 0x18)) {
    if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar8 = **(longlong **)(TI_SparkMacros + 0xb8);
    if (*(int *)(TI_SparkMacros.<>c + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar9 = *(longlong *)(*(longlong *)(TI_SparkMacros.<>c + 0xb8) + 8);
    if (lVar9 == 0) {
      if (*(int *)(TI_SparkMacros.<>c + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar11 = **(undefined8 **)(TI_SparkMacros.<>c + 0xb8);
      lVar9 = func_0x000180315580(TI_System.Comparison<SparkMacros.Macro>);
      FUN_180c394b0(lVar9,uVar11,MD_SparkMacros.__c._Pacote_b__17_0,0);
      *(longlong *)(*(longlong *)(TI_SparkMacros.<>c + 0xb8) + 8) = lVar9;
      func_0x000180314690(*(longlong *)(TI_SparkMacros.<>c + 0xb8) + 8,lVar9);
    }
    if (lVar8 == 0) goto code_r0x000180475750;
    FUN_1816508f0(lVar8,lVar9,MR_System.Collections.Generic.List<SparkMacros.Macro>.Sort);
    if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
      func_0x000180315660(TI_SparkMacros);
    }
    lVar8 = *(longlong *)(*(longlong *)(TI_SparkMacros + 0xb8) + 0x10);
    if (lVar8 != 0) {
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
    }
  }
  return;
}

