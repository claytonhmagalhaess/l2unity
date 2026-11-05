// SparkMapaWindow__PosicionaMembros__180644c00 @ 0x180644c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__PosicionaMembros__180644c00(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ushort uVar12;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 auStackX_8 [2];
  float fStackX_1c;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [16];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong uVar13;
  
  if (cRam00000001834b3d3c == '\0') {
    FUN_180315380(TI_System.Collections.Generic.IReadOnlyCollection<MembroDaParty>);
    FUN_180315380(TI_System.Collections.Generic.IReadOnlyList<MembroDaParty>);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(TI_SparkParty);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3d3c = '\x01';
  }
  uStack_a8 = 0;
  uStack_a0 = 0;
  if (*(longlong *)(param_1 + 0x130) == 0) {
    return;
  }
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
  lVar9 = *(longlong *)(param_1 + 0x130);
  if (lVar9 != 0) {
    uVar15 = 0;
    plVar2 = (longlong *)**(longlong **)(TI_SparkParty + 0xb8);
    do {
      iVar5 = UnityEngine_UIElements_VisualElement__get_childCount(lVar9,0);
      if (plVar2 == (longlong *)0x0) break;
      lVar9 = *plVar2;
      if (*(ushort *)(lVar9 + 0x12e) != 0) {
        uVar13 = uVar15;
        do {
          if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + uVar13 * 0x10) == TI_System.Collections.Generic.IReadOnlyCollection<MembroDaParty>) {
            puVar7 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + uVar13 * 0x10) * 0x10 +
                      0x138 + lVar9);
            goto code_r0x000180644d86;
          }
          uVar12 = (short)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
        } while (uVar12 < *(ushort *)(lVar9 + 0x12e));
      }
      puVar7 = (undefined8 *)FUN_180312860(plVar2,TI_System.Collections.Generic.IReadOnlyCollection<MembroDaParty>,0);
code_r0x000180644d86:
      iVar6 = (*(code *)*puVar7)(plVar2,puVar7[1]);
      lVar9 = *(longlong *)(param_1 + 0x130);
      uVar13 = uVar15;
      if (iVar6 <= iVar5) goto joined_r0x000180644e40;
      if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
        func_0x000180315660(TI_SparkMapaWindow);
      }
      lVar8 = *(longlong *)(TI_SparkMapaWindow + 0xb8);
      uStack_58 = *(undefined4 *)(lVar8 + 0x80);
      uStack_54 = *(undefined4 *)(lVar8 + 0x84);
      uStack_50 = *(undefined4 *)(lVar8 + 0x88);
      uStack_4c = *(undefined4 *)(lVar8 + 0x8c);
      SparkMapaWindow__PontoNoMapa__180641740(param_1,&uStack_58,0x10,10,0);
      if (lVar9 == 0) break;
      UnityEngine_UIElements_VisualElement__Add(lVar9);
      lVar9 = *(longlong *)(param_1 + 0x130);
    } while (lVar9 != 0);
  }
DAT_18064518a:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
joined_r0x000180644e40:
  if (lVar9 == 0) goto DAT_18064518a;
  iVar5 = UnityEngine_UIElements_VisualElement__get_childCount(lVar9,0);
  iVar6 = (int)uVar13;
  if (iVar5 <= iVar6) {
    return;
  }
  if (*(longlong *)(param_1 + 0x130) == 0) goto DAT_18064518a;
  lVar8 = UnityEngine_UIElements_VisualElement__get_Item(*(longlong *)(param_1 + 0x130),uVar13,0);
  lVar9 = *plVar2;
  if (*(ushort *)(lVar9 + 0x12e) != 0) {
    uVar14 = uVar15;
    do {
      if (*(longlong *)(*(longlong *)(lVar9 + 0xb0) + uVar14 * 0x10) == TI_System.Collections.Generic.IReadOnlyCollection<MembroDaParty>) {
        puVar7 = (undefined8 *)
                 ((longlong)*(int *)(*(longlong *)(lVar9 + 0xb0) + 8 + uVar14 * 0x10) * 0x10 + 0x138
                 + lVar9);
        goto code_r0x000180644ed7;
      }
      uVar12 = (short)uVar14 + 1;
      uVar14 = (ulonglong)uVar12;
    } while (uVar12 < *(ushort *)(lVar9 + 0x12e));
  }
  puVar7 = (undefined8 *)FUN_180312860(plVar2,TI_System.Collections.Generic.IReadOnlyCollection<MembroDaParty>,0);
code_r0x000180644ed7:
  iVar5 = (*(code *)*puVar7)(plVar2,puVar7[1]);
  if (iVar6 < iVar5) {
    lVar9 = FUN_1800022b0(0,TI_System.Collections.Generic.IReadOnlyList<MembroDaParty>,plVar2,uVar13);
    if (lVar9 == 0) goto DAT_18064518a;
    uVar1 = *(undefined4 *)(lVar9 + 0x10);
    if (*(int *)(TI_SparkParty + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = SparkParty__PosicaoDoMembro(uVar1,&uStack_a8,0);
    if (cVar4 == '\0') goto code_r0x0001806450ef;
    uStack_98 = uStack_a8;
    uStack_90 = uStack_a0;
    cVar4 = SparkMapaWindow__NaPlantaAtual__180640a00(param_1,&uStack_98,0);
    if (cVar4 == '\0') goto code_r0x0001806450ef;
    lVar9 = FUN_1800022b0(0,TI_System.Collections.Generic.IReadOnlyList<MembroDaParty>,plVar2,uVar13);
    if (lVar9 == 0) {
code_r0x000180645190:
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    auStackX_8[0] = *(undefined4 *)(lVar9 + 0x10);
    uVar10 = func_0x000180314670(_DAT_1834c6268,auStackX_8);
    if (lVar8 == 0) goto code_r0x000180645190;
    UnityEngine_UIElements_VisualElement__set_userData(lVar8,uVar10,0);
    uVar10 = SparkMapaWindow__NaVista__180640ab0(param_1,uStack_a8,0);
    lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
    uVar11 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar9 == 0) goto code_r0x000180645190;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar9,uVar11);
    lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
    puVar7 = (undefined8 *)
             UnityEngine_UIElements_StyleLength__op_Implicit(auStack_68,(float)uVar10 - 8.0,0);
    if (lVar9 == 0) goto code_r0x000180645190;
    uStack_88 = *puVar7;
    uStack_80 = *(undefined4 *)(puVar7 + 1);
    fStackX_1c = (float)((ulonglong)uVar10 >> 0x20);
    FUN_1800050f0(0x47,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_88);
    lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
    puVar7 = (undefined8 *)
             UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_58,fStackX_1c - 8.0,0);
    if (lVar9 == 0) goto code_r0x000180645190;
    uStack_70 = *(undefined4 *)(puVar7 + 1);
    uStack_78 = *puVar7;
    FUN_1800050f0(0x73,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_78);
  }
  else {
code_r0x0001806450ef:
    if (lVar8 == 0) goto DAT_18064518a;
    lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar8,0);
    uVar10 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar9 == 0) goto DAT_18064518a;
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar9,uVar10);
  }
  lVar9 = *(longlong *)(param_1 + 0x130);
  uVar13 = (ulonglong)(iVar6 + 1);
  goto joined_r0x000180644e40;
}

