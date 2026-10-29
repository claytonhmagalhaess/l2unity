// OptionsWindow___c__DisplayClass44_0___Interface_b__3__1806c0db0 @ 0x1806c0db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass44_0___Interface_b__3__1806c0db0(longlong param_1,float param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  char cVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ushort uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_30;
  
  if (cRam00000001834b3f41 == '\0') {
    puStack_50 = &UNK_1806c0ddb;
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f41 = '\x01';
  }
  puStack_50 = &UNK_1806c0e02;
  fVar14 = (float)FUN_180006040(((*(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x18)) * param_2
                                + *(float *)(param_1 + 0x18)) * 20.0);
  fVar15 = *(float *)(param_1 + 0x18);
  fVar14 = fVar14 / 20.0;
  if ((fVar14 < fVar15) || (fVar15 = *(float *)(param_1 + 0x1c), fVar15 < fVar14)) {
    fVar14 = fVar15;
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    puStack_50 = &UNK_1806c0e3c;
    func_0x000180315660(TI_SparkOpcoes);
  }
  *(float *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xe4) = fVar14;
  if (cRam00000001834b32b4 == '\0') {
    puStack_30 = &UNK_1804a2ec9;
    FUN_180315380(TI_ChatWindow);
    cRam00000001834b32b4 = '\x01';
  }
  if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
    puStack_30 = &UNK_1804a2ee5;
    func_0x000180315660();
  }
  if (cRam00000001834b3105 == '\0') {
    puStack_30 = &UNK_1804a2efa;
    FUN_180315380(TI_ChatWindow);
    cRam00000001834b3105 = '\x01';
  }
  if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
    puStack_30 = &UNK_1804a2f16;
    func_0x000180315660();
  }
  lVar3 = *(longlong *)(*(longlong *)(TI_ChatWindow + 0xb8) + 8);
  if (lVar3 != 0) {
    puStack_30 = &UNK_1804a2f34;
    ChatWindow__AplicaFundo(lVar3,0);
  }
  if (cRam00000001834b32cb == '\0') {
    puStack_30 = &UNK_1804a2f49;
    FUN_180315380(TI_SkillbarWindow);
    cRam00000001834b32cb = '\x01';
  }
  if (**(longlong **)(TI_SkillbarWindow + 0xb8) != 0) {
    puStack_30 = &UNK_1804a2f6d;
    SkillbarWindow__AplicaEscala(**(longlong **)(TI_SkillbarWindow + 0xb8),0);
  }
  if (cRam00000001834b32cc == '\0') {
    puStack_30 = &UNK_1804a2f82;
    FUN_180315380(TI_BuffWindow);
    cRam00000001834b32cc = '\x01';
  }
  lVar3 = **(longlong **)(TI_BuffWindow + 0xb8);
  if (lVar3 == 0) {
    return;
  }
  if (cRam00000001834b3a83 == '\0') {
    FUN_180315380(TI_AbstractEffectWindow);
    FUN_180315380(MR_System.Collections.Generic.List<BuffSlot>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<BuffSlot>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<BuffSlot>.get_Current);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<BuffSlot>.GetEnumerator);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3a83 = '\x01';
  }
  uStack_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  if (*(longlong *)(lVar3 + 0xa8) == 0) {
    return;
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  lVar4 = *(longlong *)(lVar3 + 0xa8);
  if (lVar4 != 0) {
    fVar15 = (float)(*(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xe8) * 0xc + 1);
    for (uVar13 = 0; (int)uVar13 < *(int *)(lVar4 + 0x18); uVar13 = uVar13 + 1) {
      if (*(uint *)(lVar4 + 0x18) <= uVar13) {
        FUN_1803155c0();
        goto code_r0x0001805bd4f2;
      }
      lVar9 = *(longlong *)(lVar4 + 0x20 + (longlong)(int)uVar13 * 8);
      if (lVar9 != 0) {
        lVar9 = UnityEngine_UIElements_VisualElement__get_style(lVar9,0);
        puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,fVar15,0)
        ;
        if (lVar9 == 0) goto code_r0x0001805bd4e6;
        uStack_58 = *puVar10;
        puStack_50 = (undefined *)CONCAT44(puStack_50._4_4_,*(undefined4 *)(puVar10 + 1));
        FUN_1800050f0(0x55,TI_UnityEngine.UIElements.IStyle,lVar9,&uStack_58);
      }
    }
    if (*(longlong *)(lVar3 + 0x98) != 0) {
      plVar11 = (longlong *)
                UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(lVar3 + 0x98),0);
      puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_88,fVar15,0);
      if (plVar11 == (longlong *)0x0) goto code_r0x0001805bd4e6;
      uVar1 = *puVar10;
      uVar2 = *(undefined4 *)(puVar10 + 1);
      lVar4 = *plVar11;
      uVar12 = 0;
      if (*(ushort *)(lVar4 + 0x12e) != 0) {
        do {
          if (*(longlong *)(*(longlong *)(lVar4 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar10 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar4 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) + 0x55)
                       * 0x10 + 0x138 + lVar4);
            goto code_r0x0001805bd0e9;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(ushort *)(lVar4 + 0x12e));
      }
      puVar10 = (undefined8 *)FUN_180312860(plVar11,TI_UnityEngine.UIElements.IStyle,0x55);
code_r0x0001805bd0e9:
      puStack_50 = (undefined *)CONCAT44(puStack_50._4_4_,uVar2);
      uStack_58 = uVar1;
      (*(code *)*puVar10)(plVar11,&uStack_58,puVar10[1]);
    }
    if (*(longlong *)(lVar3 + 0xb8) != 0) {
      FUN_180bada40(&uStack_88,*(undefined8 *)(lVar3 + 0xb8),MR_System.Collections.Generic.List<BuffSlot>.GetEnumerator);
      uStack_70 = uStack_88;
      puStack_68 = puStack_80;
      lStack_60 = lStack_78;
      uStack_88 = 0;
      puStack_80 = &uStack_70;
      while (cVar7 = FUN_1812fa7e0(&uStack_70,MR_System.Collections.Generic.List<BuffSlot>.MoveNext), cVar7 != '\0') {
        if (lStack_60 == 0) goto code_r0x0001805bd4f2;
        uVar1 = *(undefined8 *)(lStack_60 + 0x40);
        if (*(int *)(TI_AbstractEffectWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        AbstractEffectWindow__PoeTamanho(uVar1,0,0);
      }
      func_0x0001803dadf0(&uStack_70,MR_System.Collections.Generic.List<BuffSlot>.Dispose);
    }
    if (*(longlong *)(lVar3 + 0xc0) != 0) {
      FUN_180bada40(&uStack_88,*(undefined8 *)(lVar3 + 0xc0),MR_System.Collections.Generic.List<BuffSlot>.GetEnumerator);
      uStack_70 = uStack_88;
      puStack_68 = puStack_80;
      lStack_60 = lStack_78;
      uStack_88 = 0;
      puStack_80 = &uStack_70;
      while (cVar7 = FUN_1812fa7e0(&uStack_70,MR_System.Collections.Generic.List<BuffSlot>.MoveNext), cVar7 != '\0') {
        if (lStack_60 == 0) goto code_r0x0001805bd4fe;
        uVar1 = *(undefined8 *)(lStack_60 + 0x40);
        if (*(int *)(TI_AbstractEffectWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        AbstractEffectWindow__PoeTamanho(uVar1,0,0);
      }
      func_0x0001803dadf0(&uStack_70,MR_System.Collections.Generic.List<BuffSlot>.Dispose);
    }
    if (*(longlong *)(lVar3 + 200) != 0) {
      FUN_180bada40(&uStack_88,*(longlong *)(lVar3 + 200),MR_System.Collections.Generic.List<BuffSlot>.GetEnumerator);
      uStack_70 = uStack_88;
      puStack_68 = puStack_80;
      lStack_60 = lStack_78;
      uStack_88 = 0;
      puStack_80 = &uStack_70;
      while (cVar7 = FUN_1812fa7e0(&uStack_70,MR_System.Collections.Generic.List<BuffSlot>.MoveNext), cVar7 != '\0') {
        if (lStack_60 == 0) goto code_r0x0001805bd50a;
        uVar1 = *(undefined8 *)(lStack_60 + 0x40);
        if (*(int *)(TI_AbstractEffectWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        AbstractEffectWindow__PoeTamanho(uVar1,0,0);
      }
      func_0x0001803dadf0(&uStack_70,MR_System.Collections.Generic.List<BuffSlot>.Dispose);
      if (*(longlong *)(lVar3 + 0xa0) != 0) {
        FUN_180bada40(&uStack_88,*(longlong *)(lVar3 + 0xa0),MR_System.Collections.Generic.List<BuffSlot>.GetEnumerator);
        uStack_70 = uStack_88;
        puStack_68 = puStack_80;
        lStack_60 = lStack_78;
        uStack_88 = 0;
        puStack_80 = &uStack_70;
        while( true ) {
          cVar7 = FUN_1812fa7e0(&uStack_70,MR_System.Collections.Generic.List<BuffSlot>.MoveNext);
          if (cVar7 == '\0') {
            func_0x0001803dadf0(&uStack_70,MR_System.Collections.Generic.List<BuffSlot>.Dispose);
            if (*(longlong *)(lVar3 + 0xd8) == 0) {
              return;
            }
            uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 0xd8) + 0x40);
            if (*(int *)(TI_AbstractEffectWindow + 0xe4) == 0) {
              func_0x000180315660();
            }
            AbstractEffectWindow__PoeTamanho(uVar1,0,0);
            return;
          }
          if (lStack_60 == 0) break;
          uVar1 = *(undefined8 *)(lStack_60 + 0x40);
          uVar5 = *(undefined8 *)(lVar3 + 0x90);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar8 = UnityEngine_Object__op_Inequality(uVar5,0);
          if (*(int *)(TI_AbstractEffectWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          AbstractEffectWindow__PoeTamanho(uVar1,uVar8,0);
        }
        goto code_r0x0001805bd516;
      }
    }
  }
code_r0x0001805bd4e6:
  FUN_1803155d0();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
code_r0x0001805bd4f2:
  FUN_1803155d0();
  FUN_180311490();
code_r0x0001805bd4fe:
  FUN_1803155d0();
  FUN_180311490();
code_r0x0001805bd50a:
  FUN_1803155d0();
  FUN_180311490();
code_r0x0001805bd516:
  FUN_1803155d0();
  FUN_180311490();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

