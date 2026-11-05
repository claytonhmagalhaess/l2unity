// SparkLojaCristalWindow__MostraExemplo__180762450 @ 0x180762450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkLojaCristalWindow__MostraExemplo__180762450(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int aiStackX_8 [2];
  int aiStackX_18 [2];
  int aiStackX_20 [2];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_48 [48];
  
  if (cRam00000001834b4364 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkLojaCristal);
    FUN_180315380(LIT_"'Type a number from {0} to {1}.'");
    FUN_180315380(LIT_"'Example: an item worth 100 crystals gives {0} to the cus...");
    cRam00000001834b4364 = '\x01';
  }
  aiStackX_8[0] = 0;
  if (*(longlong *)(param_1 + 200) == 0) {
    return;
  }
  cVar2 = SparkLojaCristalWindow__LePct(param_1,aiStackX_8,0);
  plVar5 = *(longlong **)(param_1 + 200);
  if (cVar2 == '\0') {
    if (*(int *)(TI_SparkLojaCristal + 0xe4) == 0) {
      func_0x000180315660(TI_SparkLojaCristal);
    }
    aiStackX_18[0] = *(int *)(*(longlong *)(TI_SparkLojaCristal + 0xb8) + 4);
    uVar3 = func_0x000180314670(_DAT_1834c6268,aiStackX_18);
    aiStackX_20[0] = *(int *)(*(longlong *)(TI_SparkLojaCristal + 0xb8) + 8);
    uVar4 = func_0x000180314670(_DAT_1834c6268,aiStackX_20);
    uVar3 = System_String__Format(LIT_"'Type a number from {0} to {1}.'",uVar3,uVar4,0);
    if (plVar5 == (longlong *)0x0) {
code_r0x00018076279b:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*plVar5 + 0xe48))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0xe50));
    if (*(longlong *)(param_1 + 200) == 0) goto code_r0x00018076279b;
    plVar5 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 200),0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660(TI_SparkEstilo);
    }
    lVar11 = *(longlong *)(TI_SparkEstilo + 0xb8);
    uStack_68 = *(undefined4 *)(lVar11 + 0x90);
    uStack_64 = *(undefined4 *)(lVar11 + 0x94);
    uStack_60 = *(undefined4 *)(lVar11 + 0x98);
    uStack_5c = *(undefined4 *)(lVar11 + 0x9c);
    puVar6 = (undefined4 *)UnityEngine_UIElements_StyleColor__op_Implicit(auStack_48,&uStack_68,0);
    if (plVar5 == (longlong *)0x0) goto code_r0x00018076279b;
    lVar11 = *plVar5;
    uVar12 = *puVar6;
    uVar13 = puVar6[1];
    uVar14 = puVar6[2];
    uVar15 = puVar6[3];
    uVar9 = puVar6[4];
    if (*(ushort *)(lVar11 + 0x12e) != 0) {
      lVar10 = *(longlong *)(lVar11 + 0xb0);
      uVar8 = 0;
      do {
        if (*(longlong *)(lVar10 + (ulonglong)uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        goto code_r0x000180762779;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ushort *)(lVar11 + 0x12e));
    }
  }
  else {
    aiStackX_18[0] = 100 - aiStackX_8[0];
    uVar3 = func_0x000180314670(_DAT_1834c6268,aiStackX_18);
    aiStackX_20[0] = aiStackX_8[0];
    uVar4 = func_0x000180314670(_DAT_1834c6268,aiStackX_20);
    uVar3 = System_String__Format(LIT_"'Example: an item worth 100 crystals gives {0} to the cus...",uVar3,uVar4,0);
    if (plVar5 == (longlong *)0x0) {
code_r0x0001807627a1:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*plVar5 + 0xe48))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0xe50));
    if (*(longlong *)(param_1 + 200) == 0) goto code_r0x0001807627a1;
    plVar5 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 200),0);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660(TI_SparkEstilo);
    }
    lVar11 = *(longlong *)(TI_SparkEstilo + 0xb8);
    uStack_68 = *(undefined4 *)(lVar11 + 0x50);
    uStack_64 = *(undefined4 *)(lVar11 + 0x54);
    uStack_60 = *(undefined4 *)(lVar11 + 0x58);
    uStack_5c = *(undefined4 *)(lVar11 + 0x5c);
    puVar6 = (undefined4 *)UnityEngine_UIElements_StyleColor__op_Implicit(auStack_48,&uStack_68,0);
    if (plVar5 == (longlong *)0x0) goto code_r0x0001807627a1;
    lVar11 = *plVar5;
    uVar12 = *puVar6;
    uVar13 = puVar6[1];
    uVar14 = puVar6[2];
    uVar15 = puVar6[3];
    uVar9 = puVar6[4];
    if (*(ushort *)(lVar11 + 0x12e) != 0) {
      lVar10 = *(longlong *)(lVar11 + 0xb0);
      uVar8 = 0;
      do {
        if (*(longlong *)(lVar10 + (ulonglong)uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        goto code_r0x000180762779;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ushort *)(lVar11 + 0x12e));
    }
  }
  puVar7 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x000180762609:
  uStack_68 = uVar12;
  uStack_64 = uVar13;
  uStack_60 = uVar14;
  uStack_5c = uVar15;
  uStack_58 = uVar9;
  (*(code *)*puVar7)(plVar5,&uStack_68,puVar7[1]);
  return;
code_r0x000180762779:
  puVar7 = (undefined8 *)
           ((longlong)(*(int *)(lVar10 + 8 + (ulonglong)uVar8 * 0x10) + 0x2f) * 0x10 + 0x138 +
           lVar11);
  goto code_r0x000180762609;
}

