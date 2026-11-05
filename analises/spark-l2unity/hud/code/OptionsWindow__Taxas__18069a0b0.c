// OptionsWindow__Taxas__18069a0b0 @ 0x18069a0b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow__Taxas__18069a0b0(void)

{
  char cVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 auStackX_18 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  
  if (cRam00000001834b3e84 == '\0') {
    FUN_180315380(TI_bool__);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Contains);
    FUN_180315380(MR_System.Collections.Generic.List<string>.ToArray);
    FUN_180315380(MR_System.Collections.Generic.List<string>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(TI_System.Collections.Generic.List<string>);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(LIT_"'Auto'");
    FUN_180315380(LIT_"' Hz'");
    cRam00000001834b3e84 = '\x01';
  }
  uStack_58 = 0;
  uStack_50 = 0;
  auStackX_18[0] = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  lVar7 = func_0x000180315580(TI_System.Collections.Generic.List<string>);
  FUN_180bba2e0(lVar7,MR_System.Collections.Generic.List<string>..ctor);
  lVar8 = MR_System.Collections.Generic.List<string>.Add;
  uVar12 = LIT_"'Auto'";
  if (lVar7 != 0) {
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    lVar9 = *(longlong *)(lVar7 + 0x10);
    if (lVar9 == 0) goto code_r0x00018069a43b;
    uVar14 = *(uint *)(lVar7 + 0x18);
    if (uVar14 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar14 + 1;
      if (*(uint *)(lVar9 + 0x18) <= uVar14) goto code_r0x00018069a441;
      *(undefined8 *)(lVar9 + 0x20 + (longlong)(int)uVar14 * 8) = uVar12;
      func_0x000180314690(lVar9 + (longlong)(int)uVar14 * 8 + 0x20);
    }
    else {
      FUN_181645af0(lVar7,uVar12,
                    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    lVar8 = func_0x000180314710(TI_bool__,2);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x18) != 0) {
        *(undefined1 *)(lVar8 + 0x20) = 1;
        for (uVar14 = 0; (int)uVar14 < *(int *)(lVar8 + 0x18); uVar14 = uVar14 + 1) {
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto code_r0x00018069a441;
          cVar1 = *(char *)((longlong)(int)uVar14 + 0x20 + lVar8);
          lVar9 = UnityEngine_Screen__get_resolutions(0);
          uVar13 = 0;
          if (lVar9 == 0) goto code_r0x00018069a43b;
          for (; (int)uVar13 < (int)*(uint *)(lVar9 + 0x18); uVar13 = uVar13 + 1) {
            if (*(uint *)(lVar9 + 0x18) <= uVar13) goto code_r0x00018069a441;
            puVar10 = (undefined8 *)(lVar9 + ((longlong)(int)uVar13 + 2) * 0x10);
            uStack_58 = *puVar10;
            uStack_50 = puVar10[1];
            if (cVar1 == '\0') {
              puVar10 = (undefined8 *)UnityEngine_Screen__get_currentResolution(auStack_48,0);
              uStack_68 = *puVar10;
              uStack_60 = puVar10[1];
              iVar6 = func_0x000180eb7750(&uStack_68);
              puVar10 = (undefined8 *)UnityEngine_Screen__get_currentResolution(auStack_38);
              uStack_68 = *puVar10;
              uStack_60 = puVar10[1];
              iVar4 = func_0x000180eb5010(&uStack_68);
            }
            else {
              if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
                func_0x000180315660();
              }
              iVar6 = **(int **)(TI_SparkOpcoes + 0xb8);
              if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
                func_0x000180315660();
              }
              iVar4 = *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 4);
            }
            iVar5 = func_0x000180eb7750(&uStack_58);
            if ((iVar5 == iVar6) && (iVar6 = func_0x000180eb5010(&uStack_58), iVar6 == iVar4)) {
              uVar11 = func_0x000181907b40(&uStack_58,0);
              auStackX_18[0] =
                   FUN_1803fb530((float)((double)(uVar11 & 0xffffffff) / (double)(uVar11 >> 0x20)),0
                                );
              uVar12 = System_Int32__ToString(auStackX_18,0);
              System_String__Concat(uVar12,LIT_"' Hz'",0);
              cVar3 = FUN_181647ac0(lVar7);
              if (cVar3 == '\0') {
                FUN_180002eb0(lVar7);
              }
            }
          }
          if (1 < *(int *)(lVar7 + 0x18)) break;
        }
        FUN_180bb9850(lVar7,MR_System.Collections.Generic.List<string>.ToArray);
        return;
      }
code_r0x00018069a441:
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
code_r0x00018069a43b:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

