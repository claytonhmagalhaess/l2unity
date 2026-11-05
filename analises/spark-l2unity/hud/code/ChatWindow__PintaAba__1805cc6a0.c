// ChatWindow__PintaAba__1805cc6a0 @ 0x1805cc6a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__PintaAba__1805cc6a0(longlong param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ushort uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (cRam00000001834b3abe == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
    FUN_180315380(TI_UnityEngine.UIElements.UQueryExtensions);
    FUN_180315380(LIT_"'ChatTabSelectNomal'");
    FUN_180315380(LIT_"'ChatTabNomal'");
    FUN_180315380(LIT_"'Data/UI/Assets/SparkChat/'");
    cRam00000001834b3abe = '\x01';
  }
  lVar10 = *(longlong *)(param_1 + 0xd0);
  if (lVar10 != 0) {
    if (*(uint *)(lVar10 + 0x18) <= param_2) {
code_r0x0001805cca0a:
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar10 = *(longlong *)(lVar10 + 0x20 + (longlong)(int)param_2 * 8);
    if (lVar10 != 0) {
      uVar1 = *(uint *)(param_1 + 0x110);
      plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
      uVar8 = LIT_"'ChatTabSelectNomal'";
      if (param_2 != uVar1) {
        uVar8 = LIT_"'ChatTabNomal'";
      }
      uVar8 = System_String__Concat(LIT_"'Data/UI/Assets/SparkChat/'",uVar8,0);
      if (*(int *)(TI_SparkArte + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar8 = FUN_180a90ae0(uVar8,MR_SparkArte.Load<UnityEngine.Texture2D>);
      puVar9 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_68,uVar8,0)
      ;
      if (plVar7 != (longlong *)0x0) {
        lVar10 = *plVar7;
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        uVar5 = puVar9[2];
        uVar6 = puVar9[3];
        uVar8 = puVar9[4];
        if (*(ushort *)(lVar10 + 0x12e) != 0) {
          uVar11 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                TI_UnityEngine.UIElements.IStyle) {
              puVar9 = (undefined8 *)
                       ((longlong)
                        (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 0xb
                        ) * 0x10 + 0x138 + lVar10);
              goto code_r0x0001805cc849;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(ushort *)(lVar10 + 0x12e));
        }
        puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001805cc849:
        uStack_68 = uVar3;
        uStack_60 = uVar4;
        uStack_58 = uVar5;
        uStack_50 = uVar6;
        uStack_48 = uVar8;
        (*(code *)*puVar9)(plVar7,&uStack_68,puVar9[1]);
        lVar10 = *(longlong *)(param_1 + 0xd0);
        if (lVar10 != 0) {
          if (*(uint *)(lVar10 + 0x18) <= param_2) goto code_r0x0001805cca0a;
          uVar8 = *(undefined8 *)(lVar10 + 0x20 + (longlong)(int)param_2 * 8);
          if (*(int *)(TI_UnityEngine.UIElements.UQueryExtensions + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar10 = FUN_180b0e310(uVar8,0,0,MR_UnityEngine.UIElements.UQueryExtensions.Q<UnityEngine.UIElements.Label>);
          if (lVar10 != 0) {
            plVar7 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar10,0);
            if (param_2 == uVar1) {
              uVar12 = 0x3f5c28f6;
              uVar13 = 0x3f5c28f6;
              uVar14 = 0x3f5c28f6;
            }
            else {
              uVar12 = 0x3f23d70a;
              uVar13 = 0x3f19999a;
              uVar14 = 0x3f051eb8;
            }
            uStack_88 = CONCAT44(uVar13,uVar12);
            uStack_80 = CONCAT44(0x3f800000,uVar14);
            puVar9 = (undefined8 *)
                     UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_68,&uStack_88,0);
            if (plVar7 != (longlong *)0x0) {
              lVar10 = *plVar7;
              uVar8 = *puVar9;
              uVar3 = puVar9[1];
              uVar12 = *(undefined4 *)(puVar9 + 2);
              if (*(ushort *)(lVar10 + 0x12e) != 0) {
                uVar11 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar9 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10)
                              + 0x2f) * 0x10 + 0x138 + lVar10);
                    goto code_r0x0001805cc9a5;
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar11 < *(ushort *)(lVar10 + 0x12e));
              }
              puVar9 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x0001805cc9a5:
              uStack_88 = uVar8;
              uStack_80 = uVar3;
              uStack_78 = uVar12;
              (*(code *)*puVar9)(plVar7,&uStack_88,puVar9[1]);
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

