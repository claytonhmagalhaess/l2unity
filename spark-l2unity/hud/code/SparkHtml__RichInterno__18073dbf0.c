// SparkHtml__RichInterno__18073dbf0 @ 0x18073dbf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkHtml__RichInterno__18073dbf0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plStackX_10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  if (cRam00000001834b425f == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SparkHtml.No>.GetEnumerator);
    FUN_180315380(TI_SparkHtml);
    FUN_180315380(TI_System.Text.StringBuilder);
    cRam00000001834b425f = '\x01';
  }
  plVar4 = (longlong *)func_0x000180315580(TI_System.Text.StringBuilder);
  System_Text_StringBuilder___ctor(plVar4,0);
  plStackX_10 = plVar4;
  func_0x000180314690(&plStackX_10,plVar4);
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x28) != 0)) {
    FUN_180bada40(&uStack_40,*(longlong *)(param_2 + 0x28),MR_System.Collections.Generic.List<SparkHtml.No>.GetEnumerator);
    uStack_28 = (undefined4)uStack_40;
    uStack_24 = uStack_40._4_4_;
    uStack_20 = (undefined4)uStack_38;
    uStack_1c = uStack_38._4_4_;
    uStack_18 = uStack_30;
    uStack_40 = 0;
    uStack_38 = &uStack_28;
    while( true ) {
      cVar3 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<SparkHtml.No>.MoveNext);
      uVar2 = uStack_18;
      if (cVar3 == '\0') break;
      if (*(int *)(TI_SparkHtml + 0xe4) == 0) {
        func_0x000180315660();
      }
      SparkHtml___RichInterno_g__Anda_34_0(uVar2,param_3,&plStackX_10,0);
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<SparkHtml.No>.Dispose);
    if (plStackX_10 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plStackX_10 + 0x168))(plStackX_10,*(undefined8 *)(*plStackX_10 + 0x170))
      ;
      if (lVar5 != 0) {
        func_0x00018170d270(lVar5,0);
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

