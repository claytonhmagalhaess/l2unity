// SparkPescaJanela__Abre__180849730 @ 0x180849730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkPescaJanela__Abre__180849730
               (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  ushort uVar8;
  int iVar10;
  undefined4 uVar11;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 auStack_48 [48];
  ulonglong uVar9;
  
  if (cRam00000001834b487d == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Vector2>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Vector2>.Clear);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(TI_SparkPescaJanela);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'The fight begins!'");
    FUN_180315380(LIT_"''");
    cRam00000001834b487d = '\x01';
  }
  if (*(int *)(TI_SparkPescaJanela + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = SparkPescaJanela__Monta__18084a3c0(0);
  if (cVar3 == '\0') {
    return;
  }
  iVar10 = 1;
  if (0 < param_2) {
    iVar10 = param_2;
  }
  if (*(int *)(TI_SparkPescaJanela + 0xe4) == 0) {
    func_0x000180315660(TI_SparkPescaJanela);
  }
  uVar9 = 0;
  *(int *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x70) = iVar10;
  *(int *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x74) = param_2;
  *(undefined4 *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x88) = param_4;
  *(undefined1 *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x78) = 1;
  *(undefined4 *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x84) = 0;
  *(undefined4 *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x80) = 0;
  lVar6 = *(longlong *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x90);
  if (lVar6 != 0) {
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    *(undefined4 *)(lVar6 + 0x18) = 0;
    lVar6 = *(longlong *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x90);
    uVar11 = FUN_1824366b0(0);
    if (lVar6 != 0) {
      FUN_180003600(lVar6,CONCAT44((float)param_2,uVar11),MR_System.Collections.Generic.List<UnityEngine.Vector2>.Add);
      plVar4 = *(longlong **)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x68);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0xe48))(plVar4,LIT_"''",*(undefined8 *)(*plVar4 + 0xe50));
        plVar4 = *(longlong **)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x58);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0xe48))
                    (plVar4,LIT_"'The fight begins!'",*(undefined8 *)(*plVar4 + 0xe50));
          lVar6 = *(longlong *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x58);
          if (lVar6 != 0) {
            plVar4 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
            if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
              func_0x000180315660(TI_SparkEstilo);
            }
            uStack_68 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x60);
            uStack_60 = *(undefined8 *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0x68);
            puVar5 = (undefined8 *)
                     UnityEngine_UIElements_StyleColor__op_Implicit(auStack_48,&uStack_68,0);
            if (plVar4 != (longlong *)0x0) {
              lVar6 = *plVar4;
              uVar11 = *(undefined4 *)(puVar5 + 2);
              uVar7 = *puVar5;
              uVar2 = puVar5[1];
              if (*(ushort *)(lVar6 + 0x12e) != 0) {
                do {
                  if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + uVar9 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
                    puVar5 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + uVar9 * 0x10) + 0x2f) *
                              0x10 + 0x138 + lVar6);
                    goto code_r0x000180849a19;
                  }
                  uVar8 = (short)uVar9 + 1;
                  uVar9 = (ulonglong)uVar8;
                } while (uVar8 < *(ushort *)(lVar6 + 0x12e));
              }
              puVar5 = (undefined8 *)FUN_180312860(plVar4,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x000180849a19:
              uStack_68 = uVar7;
              uStack_60 = uVar2;
              uStack_58 = uVar11;
              (*(code *)*puVar5)(plVar4,&uStack_68,puVar5[1]);
              SparkPescaJanela__Mostra__18084c3b0(param_1,param_2,param_3,param_5,0);
              lVar6 = *(longlong *)(*(longlong *)(TI_SparkPescaJanela + 0xb8) + 0x30);
              if (lVar6 != 0) {
                lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
                uVar7 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
                if (lVar6 != 0) {
                  FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar6,uVar7);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

