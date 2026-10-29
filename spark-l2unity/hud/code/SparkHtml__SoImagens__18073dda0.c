// SparkHtml__SoImagens__18073dda0 @ 0x18073dda0

void SparkHtml__SoImagens__18073dda0(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  longlong lStack_28;
  
  if (cRam00000001834b424f == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.GetEnumerator);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(LIT_"'img'");
    FUN_180315380(LIT_"'width'");
    cRam00000001834b424f = '\x01';
  }
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    FUN_1803155d0();
code_r0x00018073dfcb:
    FUN_1803155d0();
code_r0x00018073dfd1:
    FUN_1803155d0();
  }
  else {
    FUN_180bada40(&uStack_50,*(longlong *)(param_1 + 0x28),MR_System.Collections.Generic.List<SparkHtml.No>.GetEnumerator);
    uStack_38 = uStack_50;
    puStack_30 = puStack_48;
    lStack_28 = lStack_40;
    uStack_50 = 0;
    puStack_48 = &uStack_38;
    while( true ) {
      cVar3 = FUN_1812fa7e0(&uStack_38,MR_System.Collections.Generic.List<SparkHtml.No>.MoveNext);
      lVar5 = lStack_28;
      if (cVar3 == '\0') {
        Gear__UpdateWeaponType__1803dadf0(&uStack_38,MR_System.Collections.Generic.List<SparkHtml.No>.Dispose);
        return;
      }
      if (lStack_28 == 0) break;
      if (*(longlong *)(lStack_28 + 0x10) == 0) {
        if (*(longlong *)(lStack_28 + 0x18) == 0) goto code_r0x00018073dfd1;
        lVar5 = func_0x00018170d270(*(longlong *)(lStack_28 + 0x18),0);
        if (lVar5 == 0) goto code_r0x00018073dfcb;
        if (0 < *(int *)(lVar5 + 0x10)) {
          Gear__UpdateWeaponType__1803dadf0(&uStack_38,MR_System.Collections.Generic.List<SparkHtml.No>.Dispose);
          return;
        }
      }
      else {
        cVar3 = System_String__op_Inequality
                          (*(undefined8 *)(lStack_28 + 0x10),LIT_"'img'",0);
        if (cVar3 != '\0') {
          Gear__UpdateWeaponType__1803dadf0(&uStack_38,MR_System.Collections.Generic.List<SparkHtml.No>.Dispose);
          return;
        }
        uVar2 = SparkHtml_No__Attr__180735120(lVar5,LIT_"'width'");
        if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
          func_0x000180315660();
        }
        iVar4 = SparkHtml__Numero__18073daf0(uVar2,0);
        if (iVar4 < 1) {
          Gear__UpdateWeaponType__1803dadf0(&uStack_38,MR_System.Collections.Generic.List<SparkHtml.No>.Dispose);
          return;
        }
      }
    }
  }
  FUN_1803155d0();
  FUN_180311490();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

