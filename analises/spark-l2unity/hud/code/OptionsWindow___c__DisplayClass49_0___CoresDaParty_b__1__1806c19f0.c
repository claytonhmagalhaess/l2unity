// OptionsWindow___c__DisplayClass49_0___CoresDaParty_b__1__1806c19f0 @ 0x1806c19f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass49_0___CoresDaParty_b__1__1806c19f0(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if (cRam00000001834b3f4c == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f4c = '\x01';
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar4 = 0;
  if (lVar2 != 0) {
    uVar9 = 0x3f800000;
    do {
      bVar5 = false;
      if (*(int *)(lVar2 + 0x18) <= iVar4) {
        if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
          func_0x000180315660(TI_SparkOpcoes);
        }
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x82) == '\0') {
          uVar6 = 0x3f8000003f800000;
          uVar7 = 0x3f8000003f800000;
          uVar9 = 0x40000000;
        }
        else {
          uVar6 = 0;
          uVar7 = 0x3f4ccccd00000000;
        }
        if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
          func_0x000180315660();
        }
        uStack_68 = uVar6;
        uStack_60 = uVar7;
        SparkEstilo__Borda(uVar3,&uStack_68,uVar9,0,0);
        return;
      }
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x82) != '\0') {
        if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
          func_0x000180315660();
        }
        bVar5 = iVar4 == *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x84);
      }
      if (*(longlong *)(param_1 + 0x18) == 0) break;
      uVar3 = FUN_180bbafe0(*(longlong *)(param_1 + 0x18),iVar4,MR_System.Collections.Generic.List<UnityEngine.UIElements.VisualElement>.get_Item);
      if (bVar5) {
        uStack_78 = 0x3f800000;
        uStack_74 = 0x3f800000;
        uStack_70 = 0x3f800000;
        uStack_6c = 0x3f800000;
        uVar8 = 0x40000000;
      }
      else {
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0x3f4ccccd;
        uVar8 = uVar9;
      }
      if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uStack_68 = CONCAT44(uStack_74,uStack_78);
      uStack_60 = CONCAT44(uStack_6c,uStack_70);
      SparkEstilo__Borda(uVar3,&uStack_68,uVar8,0,0);
      lVar2 = *(longlong *)(param_1 + 0x18);
      iVar4 = iVar4 + 1;
    } while (lVar2 != 0);
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

