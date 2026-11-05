// SparkTeclas__Grava__1804cc8a0 @ 0x1804cc8a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTeclas__Grava__1804cc8a0(longlong param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uStack_50;
  undefined4 *puStack_48;
  longlong lStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  longlong lStack_28;
  
  if (cRam00000001834b3304 == '\0') {
    puStack_30 = (undefined4 *)&UNK_1804cc8cd;
    FUN_180315380(TI_SparkTeclas);
    cRam00000001834b3304 = '\x01';
  }
  if ((param_1 == 0) || (lVar8 = *(longlong *)(param_1 + 0x28), lVar8 == 0)) {
    puStack_30 = (undefined4 *)&UNK_1804cc943;
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(uint *)(lVar8 + 0x18) <= param_2) {
    puStack_30 = (undefined4 *)&UNK_1804cc949;
    FUN_1803155c0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(undefined8 *)(lVar8 + 0x20 + (longlong)(int)param_2 * 8) = param_3;
  puStack_30 = (undefined4 *)&UNK_1804cc8fd;
  func_0x000180314690(lVar8 + ((longlong)(int)param_2 + 4) * 8,param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    puStack_30 = (undefined4 *)&UNK_1804cc91a;
    func_0x000180315660();
  }
  puStack_30 = (undefined4 *)&UNK_1804cc928;
  SparkTeclas__MontaBindings__1804ccab0(uVar6,uVar1,0);
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
  plVar4 = (longlong *)func_0x000180315580(TI_System.Text.StringBuilder);
  System_Text_StringBuilder___ctor(plVar4,0);
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660(TI_SparkTeclas);
  }
  lVar8 = *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x10);
  if (lVar8 == 0) {
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
    FUN_180bada40(&uStack_50,lVar8,MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
    uStack_38 = (undefined4)uStack_50;
    uStack_34 = uStack_50._4_4_;
    puStack_30 = puStack_48;
    lStack_28 = lStack_40;
    uStack_50 = 0;
    puStack_48 = &uStack_38;
    while (cVar3 = FUN_1812fa7e0(&uStack_38,MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext), lVar8 = lStack_28, cVar3 != '\0')
    {
      if (lStack_28 == 0) goto code_r0x0001804ce6a3;
      if (cRam00000001834b3308 == '\0') {
        FUN_180315380(LIT_"'/'");
        cRam00000001834b3308 = '\x01';
      }
      if (*(longlong *)(lVar8 + 0x20) == 0) goto code_r0x0001804ce69e;
      lVar5 = func_0x000181e83e90(*(longlong *)(lVar8 + 0x20),0);
      if (lVar5 == 0) goto code_r0x0001804ce699;
      if (*(longlong *)(lVar8 + 0x20) == 0) goto code_r0x0001804ce694;
      uVar6 = System_String__Concat
                        (*(undefined8 *)(lVar5 + 0x10),LIT_"'/'",
                         *(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0x10),0);
      if (plVar4 == (longlong *)0x0) goto code_r0x0001804ce68f;
      lVar5 = System_Text_StringBuilder__Append(plVar4,uVar6);
      if (lVar5 == 0) goto code_r0x0001804ce68a;
      lVar7 = System_Text_StringBuilder__Append(lVar5,0x3d);
      lVar5 = *(longlong *)(lVar8 + 0x28);
      if (lVar5 == 0) goto code_r0x0001804ce685;
      if (*(int *)(lVar5 + 0x18) == 0) goto code_r0x0001804ce661;
      if (lVar7 == 0) goto code_r0x0001804ce680;
      lVar5 = System_Text_StringBuilder__Append(lVar7,*(undefined8 *)(lVar5 + 0x20));
      if (lVar5 == 0) goto code_r0x0001804ce67b;
      lVar5 = System_Text_StringBuilder__Append(lVar5,0x7c);
      lVar8 = *(longlong *)(lVar8 + 0x28);
      if (lVar8 == 0) goto code_r0x0001804ce676;
      if (*(uint *)(lVar8 + 0x18) < 2) goto code_r0x0001804ce667;
      if (lVar5 == 0) goto code_r0x0001804ce671;
      lVar8 = System_Text_StringBuilder__Append(lVar5,*(undefined8 *)(lVar8 + 0x28));
      if (lVar8 == 0) goto code_r0x0001804ce66c;
      System_Text_StringBuilder__Append(lVar8,10);
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_38,MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
    if (plVar4 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      UnityEngine_PlayerPrefs__SetString(LIT_"'spark.opt.teclas'",uVar6,0);
      FUN_18242e9f0(0);
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTeclas);
      }
      lVar8 = *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x20);
      if (lVar8 == 0) {
        return;
      }
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
      return;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

