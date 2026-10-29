// SparkSons__Update__180586cc0 @ 0x180586cc0

void SparkSons__Update__180586cc0(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  undefined1 uStack_18;
  
  if (cRam00000001834b38dd == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkSons.Pendente>.RemoveAt);
    FUN_180315380(MR_System.Collections.Generic.List<SparkSons.Pendente>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<SparkSons.Pendente>.get_Item);
    cRam00000001834b38dd = '\x01';
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x18);
    while( true ) {
      do {
        iVar1 = iVar1 + -1;
        if (iVar1 < 0) {
          return;
        }
        if (*(longlong *)(param_1 + 0x60) == 0) goto code_r0x000180586de3;
        FUN_180bbaf00(&uStack_38,*(longlong *)(param_1 + 0x60),iVar1,MR_System.Collections.Generic.List<SparkSons.Pendente>.get_Item);
        fVar3 = (float)FUN_182436650(0);
      } while (fVar3 < fStack_1c);
      if (*(longlong *)(param_1 + 0x60) == 0) break;
      FUN_180bc4180(*(longlong *)(param_1 + 0x60),iVar1,MR_System.Collections.Generic.List<SparkSons.Pendente>.RemoveAt);
      uStack_40 = uStack_28;
      uStack_48 = uStack_30;
      SparkSons__TocaAgora__180586020
                (param_1,uStack_38,&uStack_48,uStack_24,uStack_20,uStack_18,0,0);
    }
  }
code_r0x000180586de3:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

