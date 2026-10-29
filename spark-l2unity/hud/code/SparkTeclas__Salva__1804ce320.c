// SparkTeclas__Salva__1804ce320 @ 0x1804ce320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTeclas__Salva__1804ce320(void)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong lStack_28;
  
  if (cRam00000001834b32f1 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(TI_System.Text.StringBuilder);
    FUN_180315380(LIT_"'spark.opt.teclas'");
    cRam00000001834b32f1 = '\x01';
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660(TI_SparkTeclas);
  }
  if (*(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x10) == 0) {
    return;
  }
  plVar3 = (longlong *)func_0x000180315580(TI_System.Text.StringBuilder);
  System_Text_StringBuilder___ctor(plVar3,0);
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660(TI_SparkTeclas);
  }
  lVar7 = *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x10);
  if (lVar7 == 0) {
    FUN_1803155d0();
code_r0x0001804ce661:
    FUN_1803155c0();
code_r0x0001804ce667:
    FUN_1803155c0();
code_r0x0001804ce66c:
    FUN_1803155d0();
code_r0x0001804ce671:
    FUN_1803155d0();
code_r0x0001804ce676:
    FUN_1803155d0();
code_r0x0001804ce67b:
    FUN_1803155d0();
code_r0x0001804ce680:
    FUN_1803155d0();
code_r0x0001804ce685:
    FUN_1803155d0();
code_r0x0001804ce68a:
    FUN_1803155d0();
code_r0x0001804ce68f:
    FUN_1803155d0();
code_r0x0001804ce694:
    FUN_1803155d0();
code_r0x0001804ce699:
    FUN_1803155d0();
code_r0x0001804ce69e:
    FUN_1803155d0();
code_r0x0001804ce6a3:
    FUN_1803155d0();
    FUN_180311490();
  }
  else {
    FUN_180bada40(&uStack_50,lVar7,MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
    uStack_38 = (undefined4)uStack_50;
    uStack_34 = uStack_50._4_4_;
    uStack_30 = (undefined4)uStack_48;
    uStack_2c = uStack_48._4_4_;
    lStack_28 = lStack_40;
    uStack_50 = 0;
    uStack_48 = &uStack_38;
    while (cVar2 = FUN_1812fa7e0(&uStack_38,MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext), lVar7 = lStack_28, cVar2 != '\0')
    {
      if (lStack_28 == 0) goto code_r0x0001804ce6a3;
      if (cRam00000001834b3308 == '\0') {
        FUN_180315380(LIT_"'/'");
        cRam00000001834b3308 = '\x01';
      }
      if (*(longlong *)(lVar7 + 0x20) == 0) goto code_r0x0001804ce69e;
      lVar4 = func_0x000181e83e90(*(longlong *)(lVar7 + 0x20),0);
      if (lVar4 == 0) goto code_r0x0001804ce699;
      if (*(longlong *)(lVar7 + 0x20) == 0) goto code_r0x0001804ce694;
      uVar5 = System_String__Concat
                        (*(undefined8 *)(lVar4 + 0x10),LIT_"'/'",
                         *(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0x10),0);
      if (plVar3 == (longlong *)0x0) goto code_r0x0001804ce68f;
      lVar4 = System_Text_StringBuilder__Append(plVar3,uVar5);
      if (lVar4 == 0) goto code_r0x0001804ce68a;
      lVar6 = System_Text_StringBuilder__Append(lVar4,0x3d);
      lVar4 = *(longlong *)(lVar7 + 0x28);
      if (lVar4 == 0) goto code_r0x0001804ce685;
      if (*(int *)(lVar4 + 0x18) == 0) goto code_r0x0001804ce661;
      if (lVar6 == 0) goto code_r0x0001804ce680;
      lVar4 = System_Text_StringBuilder__Append(lVar6,*(undefined8 *)(lVar4 + 0x20));
      if (lVar4 == 0) goto code_r0x0001804ce67b;
      lVar4 = System_Text_StringBuilder__Append(lVar4,0x7c);
      lVar7 = *(longlong *)(lVar7 + 0x28);
      if (lVar7 == 0) goto code_r0x0001804ce676;
      if (*(uint *)(lVar7 + 0x18) < 2) goto code_r0x0001804ce667;
      if (lVar4 == 0) goto code_r0x0001804ce671;
      lVar7 = System_Text_StringBuilder__Append(lVar4,*(undefined8 *)(lVar7 + 0x28));
      if (lVar7 == 0) goto code_r0x0001804ce66c;
      System_Text_StringBuilder__Append(lVar7,10);
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_38,MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
    if (plVar3 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      UnityEngine_PlayerPrefs__SetString(LIT_"'spark.opt.teclas'",uVar5,0);
      FUN_18242e9f0(0);
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTeclas);
      }
      lVar7 = *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x20);
      if (lVar7 == 0) {
        return;
      }
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      return;
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

