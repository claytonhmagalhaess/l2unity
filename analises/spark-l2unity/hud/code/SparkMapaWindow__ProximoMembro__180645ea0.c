// SparkMapaWindow__ProximoMembro__180645ea0 @ 0x180645ea0

void SparkMapaWindow__ProximoMembro__180645ea0(longlong param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b3d28 == '\0') {
    FUN_180315380(TI_System.Collections.Generic.IReadOnlyCollection<MembroDaParty>);
    FUN_180315380(TI_System.Collections.Generic.IReadOnlyList<MembroDaParty>);
    FUN_180315380(TI_SparkParty);
    FUN_180315380(LIT_"'You are not in a party.'");
    FUN_180315380(LIT_"'Party member locations are not known yet.'");
    cRam00000001834b3d28 = '\x01';
  }
  uStack_38 = 0;
  uStack_30 = 0;
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
  lVar7 = **(longlong **)(TI_SparkParty + 0xb8);
  if (lVar7 == 0) {
code_r0x000180646093:
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = FUN_1800020c0(0,TI_System.Collections.Generic.IReadOnlyCollection<MembroDaParty>,lVar7);
  uVar9 = LIT_"'You are not in a party.'";
  if ((iVar5 != 0) && (iVar10 = 0, uVar9 = LIT_"'Party member locations are not known yet.'", 0 < iVar5)) {
    do {
      iVar8 = -1;
      if (-1 < *(int *)(param_1 + 0x160)) {
        iVar8 = *(int *)(param_1 + 0x160);
      }
      uVar2 = (longlong)(iVar8 + 1 + iVar10) % (longlong)iVar5;
      lVar6 = FUN_1800022b0(0,TI_System.Collections.Generic.IReadOnlyList<MembroDaParty>,lVar7,uVar2 & 0xffffffff);
      if (lVar6 == 0) goto code_r0x000180646093;
      uVar1 = *(undefined4 *)(lVar6 + 0x10);
      if (*(int *)(TI_SparkParty + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = SparkParty__PosicaoDoMembro(uVar1,&uStack_38,0);
      if (cVar4 != '\0') {
        uStack_28 = uStack_38;
        *(int *)(param_1 + 0x160) = (int)uVar2;
        uStack_20 = uStack_30;
        SparkMapaWindow__Centra__180639b70(param_1,&uStack_28,0,0);
        lVar7 = FUN_1800022b0(0,TI_System.Collections.Generic.IReadOnlyList<MembroDaParty>,lVar7,uVar2 & 0xffffffff);
        if (lVar7 == 0) goto code_r0x000180646093;
        uVar9 = *(undefined8 *)(lVar7 + 0x18);
        break;
      }
      iVar10 = iVar10 + 1;
      uVar9 = LIT_"'Party member locations are not known yet.'";
    } while (iVar10 < iVar5);
  }
  SparkMapaWindow__Avisa__180639150(param_1,uVar9,0);
  return;
}

