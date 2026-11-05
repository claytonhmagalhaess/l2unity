// Nameplate__AtualizaToken__1806764a0 @ 0x1806764a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Nameplate__AtualizaToken__1806764a0(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ushort uVar7;
  int aiStackX_8 [2];
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined1 auStack_58 [80];
  
  if (cRam00000001834b3e04 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_SparkTokens);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Data/UI/Assets/Tokens/HeadDisplay_DF_mark_0'");
    cRam00000001834b3e04 = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x50) == 0) ||
     (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30), lVar6 == 0))
  goto code_r0x0001806768dc;
  uVar1 = *(undefined4 *)(lVar6 + 0x14);
  if (*(int *)(TI_SparkTokens + 0xe4) == 0) {
    func_0x000180315660();
  }
  aiStackX_8[0] = SparkTokens__De(uVar1,0);
  if (aiStackX_8[0] != *(int *)(param_1 + 0xb8)) {
    *(int *)(param_1 + 0xb8) = aiStackX_8[0];
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      uVar3 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
      UnityEngine_UIElements_VisualElement___ctor(uVar3,0);
      *(undefined8 *)(param_1 + 0xb0) = uVar3;
      func_0x000180314690(param_1 + 0xb0,uVar3);
      if (*(longlong *)(param_1 + 0xb0) == 0) goto code_r0x0001806768dc;
      UnityEngine_UIElements_VisualElement__set_pickingMode(*(longlong *)(param_1 + 0xb0),1,0);
      if (*(longlong *)(param_1 + 0xb0) == 0) goto code_r0x0001806768dc;
      plVar4 = (longlong *)
               UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb0),0);
      puVar5 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_98,0x42000000,0);
      if (plVar4 == (longlong *)0x0) goto code_r0x0001806768dc;
      lVar6 = *plVar4;
      uVar1 = *(undefined4 *)(puVar5 + 1);
      uVar3 = *puVar5;
      if (*(ushort *)(lVar6 + 0x12e) != 0) {
        uVar7 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar7 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar5 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 0xad) *
                      0x10 + 0x138 + lVar6);
            goto code_r0x000180676679;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(lVar6 + 0x12e));
      }
      puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x000180676679:
      uStack_98 = uVar3;
      uStack_90 = uVar1;
      (*(code *)*puVar5)(plVar4,&uStack_98,puVar5[1]);
      if (*(longlong *)(param_1 + 0xb0) == 0) goto code_r0x0001806768dc;
      plVar4 = (longlong *)
               UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb0),0);
      puVar5 = (undefined8 *)
               UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_98,0x42000000,0);
      if (plVar4 == (longlong *)0x0) goto code_r0x0001806768dc;
      lVar6 = *plVar4;
      uVar3 = *puVar5;
      uVar1 = *(undefined4 *)(puVar5 + 1);
      if (*(ushort *)(lVar6 + 0x12e) != 0) {
        uVar7 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar7 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar5 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 0x43) *
                      0x10 + 0x138 + lVar6);
            goto code_r0x000180676729;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(lVar6 + 0x12e));
      }
      puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x000180676729:
      uStack_98 = uVar3;
      uStack_90 = uVar1;
      (*(code *)*puVar5)(plVar4,&uStack_98,puVar5[1]);
      lVar6 = Nameplate__Acima__180674540(param_1,0);
      if (lVar6 == 0) goto code_r0x0001806768dc;
      UnityEngine_UIElements_VisualElement__Add(lVar6,*(undefined8 *)(param_1 + 0xb0),0);
    }
    lVar6 = *(longlong *)(param_1 + 0xb0);
    if (lVar6 == 0) goto code_r0x0001806768dc;
    if (aiStackX_8[0] < 1) {
      lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
      uVar3 = 1;
    }
    else {
      lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
      uVar3 = System_Int32__ToString(aiStackX_8,0);
      uVar3 = System_String__Concat(LIT_"'Data/UI/Assets/Tokens/HeadDisplay_DF_mark_0'",uVar3,0);
      if (*(int *)(TI_SparkArte + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar3 = FUN_180a90ae0(uVar3,MR_SparkArte.Load<UnityEngine.Texture2D>);
      puVar5 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(auStack_58,uVar3,0)
      ;
      if (lVar6 == 0) goto code_r0x0001806768dc;
      uStack_88 = *puVar5;
      uStack_80 = puVar5[1];
      uStack_78 = *(undefined4 *)(puVar5 + 2);
      uStack_74 = *(undefined4 *)((longlong)puVar5 + 0x14);
      uStack_70 = *(undefined4 *)(puVar5 + 3);
      uStack_6c = *(undefined4 *)((longlong)puVar5 + 0x1c);
      uStack_68 = puVar5[4];
      FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar6,&uStack_88);
      if (*(longlong *)(param_1 + 0xb0) == 0) goto code_r0x0001806768dc;
      lVar6 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb0),0);
      uVar3 = 0;
    }
    uVar3 = FUN_180eb5810(uVar3,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    if (lVar6 == 0) {
code_r0x0001806768dc:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar3);
  }
  return;
}

