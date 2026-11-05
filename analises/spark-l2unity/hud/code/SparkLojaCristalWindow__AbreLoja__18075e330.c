// SparkLojaCristalWindow__AbreLoja__18075e330 @ 0x18075e330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkLojaCristalWindow__AbreLoja__18075e330(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined4 auStackX_8 [2];
  
  if (cRam00000001834b4362 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<SparkLojaCristal.Item>.Exists);
    FUN_180315380(TI_System.Predicate<SparkLojaCristal.Item>);
    FUN_180315380(MD_SparkLojaCristalWindow._AbreLoja_b__41_0);
    FUN_180315380(TI_SparkLojaCristal);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'Crystallization Shop'");
    FUN_180315380(LIT_"'{0}  ·  Fee {1}%  ·  Up to {2}-grade'");
    cRam00000001834b4362 = '\x01';
  }
  if ((char)param_1[0x11] == '\0') {
    return;
  }
  if ((char)param_1[7] == '\0') {
    bVar8 = *(int *)((longlong)param_1 + 0x8c) != 1;
  }
  else {
    bVar8 = true;
  }
  *(undefined4 *)((longlong)param_1 + 0x8c) = 1;
  SparkLojaCristalWindow__Tamanho(param_1,400,0x1d6,0);
  plVar1 = (longlong *)param_1[0x17];
  if (plVar1 == (longlong *)0x0) {
DAT_18075e622:
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (**(code **)(*plVar1 + 0xe48))(plVar1,LIT_"'Crystallization Shop'",*(undefined8 *)(*plVar1 + 0xe50));
  if (param_1[0x13] == 0) goto DAT_18075e622;
  lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x13],0);
  uVar5 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
  if (lVar4 == 0) goto DAT_18075e622;
  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
  if (param_1[0x14] == 0) goto DAT_18075e622;
  lVar4 = UnityEngine_UIElements_VisualElement__get_style(param_1[0x14],0);
  uVar5 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
  if (lVar4 == 0) goto DAT_18075e622;
  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar4,uVar5);
  if (!bVar8) {
    if (*(int *)(TI_SparkLojaCristal + 0xe4) == 0) {
      func_0x000180315660(TI_SparkLojaCristal);
    }
    lVar4 = *(longlong *)(*(longlong *)(TI_SparkLojaCristal + 0xb8) + 0x38);
    uVar5 = func_0x000180315580(TI_System.Predicate<SparkLojaCristal.Item>);
    FUN_180d27680(uVar5,param_1,MD_SparkLojaCristalWindow._AbreLoja_b__41_0,0);
    if (lVar4 == 0) goto DAT_18075e622;
    cVar3 = FUN_180bab060(lVar4,uVar5,MR_System.Collections.Generic.List<SparkLojaCristal.Item>.Exists);
    if (cVar3 != '\0') goto code_r0x00018075e52d;
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
code_r0x00018075e52d:
  plVar1 = (longlong *)param_1[0x1b];
  if (*(int *)(TI_SparkLojaCristal + 0xe4) == 0) {
    func_0x000180315660();
  }
  auStackX_8[0] = *(undefined4 *)(*(longlong *)(TI_SparkLojaCristal + 0xb8) + 0x24);
  uVar5 = *(undefined8 *)(*(longlong *)(TI_SparkLojaCristal + 0xb8) + 0x30);
  uVar6 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
  uVar7 = SparkLojaCristal__NomeDaGrade
                    (*(undefined4 *)(*(longlong *)(TI_SparkLojaCristal + 0xb8) + 0x28),0);
  uVar5 = System_String__Format(LIT_"'{0}  ·  Fee {1}%  ·  Up to {2}-grade'",uVar5,uVar6,uVar7,0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xe48))(plVar1,uVar5,*(undefined8 *)(*plVar1 + 0xe50));
    SparkLojaCristalWindow__MontaLista__18075ff30(param_1,0);
    SparkLojaCristalWindow__MostraDetalhe__180761fc0(param_1,0);
    if ((char)param_1[7] != '\0') {
      (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    }
    (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
    return;
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

