// SparkHtml__Filhos__18073a8e0 @ 0x18073a8e0

void SparkHtml__Filhos__18073a8e0
               (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if (cRam00000001834b424a == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.GetEnumerator);
    cRam00000001834b424a = '\x01';
  }
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x28) != 0)) {
    FUN_180bada40(&uStack_60,*(longlong *)(param_2 + 0x28),MR_System.Collections.Generic.List<SparkHtml.No>.GetEnumerator);
    uStack_48 = (undefined4)uStack_60;
    uStack_44 = uStack_60._4_4_;
    uStack_40 = (undefined4)uStack_58;
    uStack_3c = uStack_58._4_4_;
    uStack_38 = uStack_50;
    uStack_60 = 0;
    uStack_58 = &uStack_48;
    while( true ) {
      cVar2 = FUN_1812fa7e0(&uStack_48,MR_System.Collections.Generic.List<SparkHtml.No>.MoveNext);
      if (cVar2 == '\0') break;
      SparkHtml__Desenha__180738b70(param_1,uStack_38,param_3,param_4,0);
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_48,MR_System.Collections.Generic.List<SparkHtml.No>.Dispose);
    return;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

