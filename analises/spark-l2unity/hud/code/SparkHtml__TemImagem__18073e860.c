// SparkHtml__TemImagem__18073e860 @ 0x18073e860

undefined1 SparkHtml__TemImagem__18073e860(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong lStack_18;
  
  if (cRam00000001834b4255 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.GetEnumerator);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(LIT_"'img'");
    cRam00000001834b4255 = '\x01';
  }
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    FUN_1803155d0();
code_r0x00018073e9df:
    FUN_1803155d0();
    FUN_180311490();
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  FUN_180bada40(&uStack_40,*(longlong *)(param_1 + 0x28),MR_System.Collections.Generic.List<SparkHtml.No>.GetEnumerator);
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  uStack_20 = (undefined4)uStack_38;
  uStack_1c = uStack_38._4_4_;
  lStack_18 = lStack_30;
  uStack_40 = 0;
  uStack_38 = &uStack_28;
  do {
    do {
      cVar3 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<SparkHtml.No>.MoveNext);
      lVar2 = lStack_18;
      if (cVar3 == '\0') {
        Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<SparkHtml.No>.Dispose);
        return 0;
      }
      if (lStack_18 == 0) goto code_r0x00018073e9df;
      cVar3 = func_0x0001817058a0(*(undefined8 *)(lStack_18 + 0x10),LIT_"'img'",0);
      if (cVar3 != '\0') goto code_r0x00018073e984;
    } while (*(longlong *)(lVar2 + 0x10) == 0);
    if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = SparkHtml__TemImagem__18073e860(lVar2,0);
  } while (cVar3 == '\0');
code_r0x00018073e984:
  Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<SparkHtml.No>.Dispose);
  return 1;
}

