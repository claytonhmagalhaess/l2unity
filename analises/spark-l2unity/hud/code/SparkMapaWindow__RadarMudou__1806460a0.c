// SparkMapaWindow__RadarMudou__1806460a0 @ 0x1806460a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__RadarMudou__1806460a0(longlong param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  float fStackX_c;
  ulonglong uStack_38;
  undefined *puStack_30;
  ulonglong uStack_28;
  undefined4 uStack_20;
  
  puStack_30 = &UNK_1806460b0;
  SparkMapaWindow__MarcaRadar__18063c6e0(param_1,0);
  if (*(char *)(param_1 + 0x38) != '\0') {
    return;
  }
  if (cRam00000001834b3d4a == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3d4a = '\x01';
  }
  uStack_38 = 0;
  puStack_30 = (undefined *)((ulonglong)puStack_30 & 0xffffffff00000000);
  SparkMapaWindow__PosicionaPino__180645b80(param_1,0);
  SparkMapaWindow__PosicionaMembros__180644c00(param_1,0);
  SparkMapaWindow__PosicionaAmaldicoadas__180642530(param_1,0);
  if (*(longlong *)(param_1 + 200) == 0) {
    return;
  }
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = SparkMapaWindow__PosicaoDoJogador3__180642280(&uStack_38,0);
  uVar2 = uStack_38;
  if (cVar3 != '\0') {
    uStack_28 = uStack_38;
    uStack_20 = puStack_30._0_4_;
    cVar3 = SparkMapaWindow__NaPlantaAtual__180640a00(param_1,&uStack_28,0);
    if (cVar3 != '\0') {
      uVar4 = SparkMapaWindow__NaVista__180640ab0(param_1,uVar2 & 0xffffffff,0);
      if (*(longlong *)(param_1 + 200) == 0) goto DAT_180643cd8;
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 200),0);
      uVar6 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar5 == 0) goto DAT_180643cd8;
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
      if (*(longlong *)(param_1 + 200) == 0) goto DAT_180643cd8;
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 200),0);
      puVar7 = (ulonglong *)
               UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_38,(float)uVar4 - 11.0,0);
      if (lVar5 == 0) goto DAT_180643cd8;
      uStack_28 = *puVar7;
      uStack_20 = (undefined4)puVar7[1];
      FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_28);
      if (*(longlong *)(param_1 + 200) == 0) goto DAT_180643cd8;
      fStackX_c = (float)((ulonglong)uVar4 >> 0x20);
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 200),0);
      puVar7 = (ulonglong *)
               UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_38,fStackX_c - 11.0,0);
      if (lVar5 == 0) goto DAT_180643cd8;
      uStack_20 = (undefined4)puVar7[1];
      uStack_28 = *puVar7;
      FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_28);
      SparkMapaWindow__GiraSeta__18063b2a0(param_1,0);
      goto code_r0x000180643cbe;
    }
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 200),0);
    uVar4 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar5 != 0) {
      FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar4);
code_r0x000180643cbe:
      SparkMapaWindow__PosicionaDicaNome__180643310(param_1,0);
      return;
    }
  }
DAT_180643cd8:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

