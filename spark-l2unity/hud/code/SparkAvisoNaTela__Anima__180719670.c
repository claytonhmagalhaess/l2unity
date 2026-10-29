// SparkAvisoNaTela__Anima__180719670 @ 0x180719670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkAvisoNaTela__Anima__180719670(void)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ushort uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (cRam00000001834b41d4 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.RemoveAt);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.get_Item);
    FUN_180315380(TI_SparkAvisoNaTela);
    cRam00000001834b41d4 = '\x01';
  }
  fVar9 = (float)FUN_1824366b0(0);
  if (*(int *)(TI_SparkAvisoNaTela + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar4 = *(longlong *)(*(longlong *)(TI_SparkAvisoNaTela + 0xb8) + 8);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x18);
    while( true ) {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return;
      }
      if (*(int *)(TI_SparkAvisoNaTela + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar4 = *(longlong *)(*(longlong *)(TI_SparkAvisoNaTela + 0xb8) + 8);
      if ((lVar4 == 0) || (lVar4 = FUN_180bbafe0(lVar4,iVar1,MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.get_Item), lVar4 == 0))
      break;
      fVar12 = *(float *)(lVar4 + 0x18) - fVar9;
      fVar11 = (*(float *)(lVar4 + 0x1c) - fVar12) / 0.3;
      if (fVar11 < 0.0) {
        fVar11 = 0.0;
      }
      else if (1.0 < fVar11) {
        fVar11 = 1.0;
      }
      fVar10 = fVar12 / 0.6;
      if (fVar10 < 0.0) {
        fVar10 = 0.0;
      }
      else if (1.0 < fVar10) {
        fVar10 = 1.0;
      }
      if (fVar10 <= fVar11) {
        fVar11 = fVar10;
      }
      if (*(longlong *)(lVar4 + 0x10) == 0) break;
      plVar5 = (longlong *)
               UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar4 + 0x10),0);
      uVar6 = func_0x000182601c10(fVar11,0);
      if (plVar5 == (longlong *)0x0) break;
      lVar2 = *plVar5;
      if (*(ushort *)(lVar2 + 0x12e) != 0) {
        uVar8 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar8 * 0x10) == TI_UnityEngine.UIElements.IStyle
             ) {
            puVar7 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar2 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) + 0x5b) *
                      0x10 + 0x138 + lVar2);
            goto code_r0x000180719889;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ushort *)(lVar2 + 0x12e));
      }
      puVar7 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x5b);
code_r0x000180719889:
      (*(code *)*puVar7)(plVar5,uVar6,puVar7[1]);
      if (fVar12 <= 0.0) {
        if (*(longlong *)(lVar4 + 0x10) == 0) break;
        UnityEngine_UIElements_VisualElement__RemoveFromHierarchy(*(longlong *)(lVar4 + 0x10),0);
        if (*(int *)(TI_SparkAvisoNaTela + 0xe4) == 0) {
          func_0x000180315660(TI_SparkAvisoNaTela);
        }
        lVar4 = *(longlong *)(*(longlong *)(TI_SparkAvisoNaTela + 0xb8) + 8);
        if (lVar4 == 0) break;
        FUN_18164e790(lVar4,iVar1,MR_System.Collections.Generic.List<SparkAvisoNaTela.Aviso>.RemoveAt);
      }
    }
  }
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

