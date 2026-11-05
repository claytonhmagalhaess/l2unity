// SparkMapaWindow__SaiDoInterno__180649460 @ 0x180649460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__SaiDoInterno__180649460(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ushort uVar12;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b3d33 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    cRam00000001834b3d33 = '\x01';
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  if (*(longlong *)(param_1 + 0x188) == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
  func_0x000180314690(param_1 + 0x188,0);
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  if ((*(longlong *)(param_1 + 0x170) != 0) &&
     (lVar8 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x170),0),
     lVar8 != 0)) {
    puVar9 = (undefined8 *)FUN_180007750(&uStack_98,10,TI_UnityEngine.UIElements.IStyle,lVar8);
    uStack_68 = *puVar9;
    uStack_60 = puVar9[1];
    uStack_58 = puVar9[2];
    uStack_50 = puVar9[3];
    uStack_48 = puVar9[4];
    puVar9 = (undefined8 *)func_0x0001826000e0(&uStack_98,&uStack_68,0);
    uStack_b8 = *puVar9;
    uStack_b0 = puVar9[1];
    uStack_a8 = puVar9[2];
    uStack_a0 = puVar9[3];
    uVar10 = func_0x000180a391e0(&uStack_b8,0);
    if (*(longlong *)(param_1 + 0x170) != 0) {
      plVar11 = (longlong *)
                UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x170),0);
      puVar9 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_98,3,0);
      if (plVar11 != (longlong *)0x0) {
        lVar8 = *plVar11;
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        uVar5 = puVar9[2];
        uVar6 = puVar9[3];
        uVar1 = puVar9[4];
        if (*(ushort *)(lVar8 + 0x12e) != 0) {
          uVar12 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar9 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0xb)
                        * 0x10 + 0x138 + lVar8);
              goto code_r0x000180649647;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(ushort *)(lVar8 + 0x12e));
        }
        puVar9 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x000180649647:
        uStack_98 = uVar3;
        uStack_90 = uVar4;
        uStack_88 = uVar5;
        uStack_80 = uVar6;
        uStack_78 = uVar1;
        (*(code *)*puVar9)(plVar11,&uStack_98,puVar9[1]);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
        if (cVar7 != '\0') {
          if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar7 = SparkMapaWindow__RadarUsaPlanta__1806460d0(uVar10,0);
          if (cVar7 == '\0') {
            UnityEngine_Resources__UnloadAsset(uVar10,0);
          }
        }
        if (*(longlong *)(param_1 + 0x180) != 0) {
          UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0x180),0);
          *(undefined8 *)(param_1 + 0x298) = 0;
          func_0x000180314690(param_1 + 0x298,0);
          if (*(longlong *)(param_1 + 0x180) != 0) {
            lVar8 = UnityEngine_UIElements_VisualElement__get_style
                              (*(longlong *)(param_1 + 0x180),0);
            uVar10 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
            if (lVar8 != 0) {
              FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar8,uVar10);
              return;
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

