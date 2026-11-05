// OptionsWindow___c__DisplayClass52_0___CaixaDeTecla_b__2__1806c1f90 @ 0x1806c1f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass52_0___CaixaDeTecla_b__2__1806c1f90
               (longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ushort uVar9;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 auStack_38 [48];
  
  if (cRam00000001834b3f50 == '\0') {
    FUN_180315380(TI_System.Action);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_button);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass52_0._CaixaDeTecla_b__3);
    FUN_180315380(LIT_"'click_'");
    FUN_180315380(LIT_"'Press a key...'");
    cRam00000001834b3f50 = '\x01';
  }
  if (param_2 == 0) goto DAT_1806c2324;
  if (*(int *)(param_2 + 0x94) == 0) {
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar5 = SparkTeclas__get_Trocando(0);
    if (cVar5 == '\0') {
      plVar6 = *(longlong **)(param_1 + 0x18);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0xe48))(plVar6,LIT_"'Press a key...'",*(undefined8 *)(*plVar6 + 0xe50))
        ;
        if (*(longlong *)(param_1 + 0x18) != 0) {
          plVar6 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x18),0);
          uStack_58 = 0x3f8000003f800000;
          uStack_50 = 0x3f8000003f800000;
          puVar7 = (undefined8 *)
                   UnityEngine_UIElements_StyleColor__op_Implicit(auStack_38,&uStack_58,0);
          if (plVar6 != (longlong *)0x0) {
            lVar8 = *plVar6;
            uVar1 = *(undefined4 *)(puVar7 + 2);
            uVar2 = *puVar7;
            uVar4 = puVar7[1];
            if (*(ushort *)(lVar8 + 0x12e) != 0) {
              uVar9 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar7 = (undefined8 *)
                           ((longlong)
                            (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) +
                            0x2f) * 0x10 + 0x138 + lVar8);
                  goto code_r0x0001806c2129;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < *(ushort *)(lVar8 + 0x12e));
            }
            puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x0001806c2129:
            uStack_58 = uVar2;
            uStack_50 = uVar4;
            uStack_48 = uVar1;
            (*(code *)*puVar7)(plVar6,&uStack_58,puVar7[1]);
            uVar2 = *(undefined8 *)(param_1 + 0x10);
            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
              func_0x000180315660();
            }
            uStack_58 = 0x3f56d6d73f800000;
            uStack_50 = 0x3f8000003edcdcdd;
            SparkEstilo__Borda(uVar2,&uStack_58,0x3f800000,0,0);
            if (cRam00000001834b31c0 == '\0') {
              FUN_180315380(TI_L2GameUI);
              cRam00000001834b31c0 = '\x01';
            }
            uVar2 = **(undefined8 **)(TI_L2GameUI + 0xb8);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar5 = UnityEngine_Object__op_Inequality(uVar2,0,0);
            if (cVar5 != '\0') {
              if (cRam00000001834b31c0 == '\0') {
                FUN_180315380(TI_L2GameUI);
                cRam00000001834b31c0 = '\x01';
              }
              if (**(longlong **)(TI_L2GameUI + 0xb8) == 0) goto DAT_1806c2324;
              *(undefined1 *)(**(longlong **)(TI_L2GameUI + 0xb8) + 0x88) = 1;
            }
            if (cRam00000001834b301f == '\0') {
              FUN_180315380(TI_AudioManager);
              cRam00000001834b301f = '\x01';
            }
            if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
              AudioManager__PlayUISound
                        (**(longlong **)(TI_AudioManager + 0xb8),LIT_"'click_'",0);
            }
            lVar8 = *(longlong *)(param_1 + 0x40);
            uVar2 = *(undefined8 *)(param_1 + 0x20);
            uVar1 = *(undefined4 *)(param_1 + 0x28);
            if (lVar8 == 0) {
              lVar8 = func_0x000180315580(TI_System.Action);
              FUN_1816a9c60(lVar8,param_1,MD_OptionsWindow.__c__DisplayClass52_0._CaixaDeTecla_b__3,0);
              *(longlong *)(param_1 + 0x40) = lVar8;
              func_0x000180314690(param_1 + 0x40,lVar8);
            }
            if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
              func_0x000180315660();
            }
            SparkTeclas__Troca(uVar2,uVar1,lVar8,0);
            func_0x00018274f9b0(param_2,0);
            return;
          }
        }
      }
DAT_1806c2324:
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

