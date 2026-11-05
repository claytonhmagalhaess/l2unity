// SparkMapaWindow__ShowWindow__180649790 @ 0x180649790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__ShowWindow__180649790(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ushort uVar9;
  float fVar10;
  undefined8 auStackX_18 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined *puStack_40;
  undefined8 uStack_18;
  
  if (cRam00000001834b3d1d == '\0') {
    puStack_40 = &UNK_1806497ae;
    FUN_180315380(TI_SparkMapaWindow);
    puStack_40 = &UNK_1806497ba;
    FUN_180315380(LIT_"'window_open'");
    puStack_40 = &UNK_1806497c6;
    FUN_180315380(LIT_"'?'");
    cRam00000001834b3d1d = '\x01';
  }
  auStackX_18[0] = 0;
  puStack_40 = &UNK_1806497de;
  L2PopupWindow__ShowWindow__180778380(param_1,0);
  if (DAT_1834b301f == '\0') {
    puStack_40 = &UNK_1806497f3;
    FUN_180315380(TI_AudioManager);
    DAT_1834b301f = '\x01';
  }
  if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
    puStack_40 = &UNK_18064981f;
    AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'window_open'",0);
  }
  if (DAT_1834b31c0 == '\0') {
    puStack_40 = &UNK_180649834;
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  if (**(longlong **)(TI_L2GameUI + 0xb8) != 0) {
    puStack_40 = &UNK_18064985c;
    L2GameUI__WindowOpened__180776020(**(longlong **)(TI_L2GameUI + 0xb8),param_1,0);
  }
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    puStack_40 = &UNK_180649871;
    func_0x000180315660();
  }
  puStack_40 = &UNK_18064987d;
  cVar4 = SparkMapaWindow__PosicaoDoJogador__1806423e0(auStackX_18,0);
  if (cVar4 == '\0') {
    puStack_40 = &UNK_18064988b;
    SparkMapaWindow__MostraMundo__1806407d0(param_1,0);
  }
  else {
    uStack_18 = 0;
    puStack_40 = &UNK_1806498ab;
    SparkMapaWindow__EntraNaRegiao__18063aa50(param_1,auStackX_18[0],0x3d0f5c29,0);
  }
  *(undefined8 *)(param_1 + 0x1a8) = LIT_"'?'";
  puStack_40 = &UNK_1806498cc;
  func_0x000180314690(param_1 + 0x1a8,LIT_"'?'");
  puStack_40 = &UNK_1806498d6;
  SparkMapaWindow__ConfereInterno__180639dc0(param_1,0);
  puStack_40 = &UNK_1806498e0;
  SparkMapaWindow__Redesenha__180646390(param_1,0);
  puStack_40 = &UNK_1806498ea;
  SparkMapaWindow__MostraHoraDoJogo__180640630(param_1,0);
  if (cRam00000001834b3d48 == '\0') {
    puStack_40 = &UNK_1806498ff;
    FUN_180315380(TI_SparkAmaldicoadas);
    cRam00000001834b3d48 = '\x01';
  }
  puStack_40 = &UNK_18064990d;
  fVar10 = (float)FUN_1824366b0(0);
  *(float *)(param_1 + 0x118) = fVar10 + 60.0;
  if (*(int *)(TI_SparkAmaldicoadas + 0xe4) == 0) {
    puStack_40 = &UNK_180649932;
    func_0x000180315660();
  }
  puStack_40 = &UNK_180649939;
  SparkAmaldicoadas__Pede(0);
  *(undefined4 *)(param_1 + 600) = 1;
  if (cRam00000001834b3d21 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    cRam00000001834b3d21 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  fVar10 = 1.0 - *(float *)(param_1 + 0x254);
  fVar10 = 1.0 - (1.0 - *(float *)(param_1 + 0x254)) * fVar10 * fVar10;
  lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0x30),0);
  uVar6 = func_0x000182601c10(fVar10,0);
  if (lVar5 != 0) {
    FUN_180005060(0x5b,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
    if (fVar10 < 0.0) {
      fVar10 = 0.0;
    }
    else if (1.0 < fVar10) {
      fVar10 = 1.0;
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      fVar10 = fVar10 * 0.04000002 + 0.96;
      plVar7 = (longlong *)
               UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
      uStack_78 = CONCAT44(fVar10,fVar10);
      uStack_70 = CONCAT44(uStack_70._4_4_,0x3f800000);
      uStack_58 = 0;
      uStack_50 = 0;
      func_0x000182149c00(&uStack_58,&uStack_78,0);
      uStack_78 = uStack_58;
      uStack_70 = uStack_50;
      puVar8 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(auStack_48,&uStack_78,0)
      ;
      if (plVar7 != (longlong *)0x0) {
        lVar5 = *plVar7;
        uVar6 = *puVar8;
        uVar3 = puVar8[1];
        uVar1 = *(undefined4 *)(puVar8 + 2);
        if (*(ushort *)(lVar5 + 0x12e) != 0) {
          uVar9 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar8 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) + 0x6d)
                        * 0x10 + 0x138 + lVar5);
              goto code_r0x000180638473;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(ushort *)(lVar5 + 0x12e));
        }
        puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x6d);
code_r0x000180638473:
        uStack_78 = uVar6;
        uStack_70 = uVar3;
        uStack_68 = uVar1;
        (*(code *)*puVar8)(plVar7,&uStack_78,puVar8[1]);
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

