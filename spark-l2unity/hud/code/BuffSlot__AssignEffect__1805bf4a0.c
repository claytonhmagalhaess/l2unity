// BuffSlot__AssignEffect__1805bf4a0 @ 0x1805bf4a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BuffSlot__AssignEffect__1805bf4a0
               (longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ushort uVar11;
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
  
  if (cRam00000001834b3a8b == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3a8b = '\x01';
  }
  *(undefined4 *)(param_1 + 0x10) = param_2;
  uStack_78 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar7 = BuffSlot__CriaBuff__1805bf7b0(param_2,param_3,param_4,param_5,0);
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  func_0x000180314690(param_1 + 0x68,uVar7);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x20);
    lVar8 = IconTable__get_Instance(0);
    if (lVar8 != 0) {
      lVar8 = IconTable__LoadTextureByName(lVar8,uVar7,0);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar6 = UnityEngine_Object__op_Inequality(lVar8,0,0);
      if (cVar6 != '\0') {
        if (lVar8 == 0) goto DAT_1805bf6dd;
        UnityEngine_Texture__set_filterMode(lVar8,1,0);
      }
      UnityEngine_UIElements_StyleBackground___ctor(&uStack_98,lVar8,0);
      if (*(longlong *)(param_1 + 0x48) != 0) {
        plVar9 = (longlong *)
                 UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x48),0);
        uVar5 = uStack_78;
        uVar4 = uStack_80;
        uVar3 = uStack_88;
        uVar2 = uStack_90;
        uVar7 = uStack_98;
        if (plVar9 != (longlong *)0x0) {
          lVar8 = *plVar9;
          if (*(ushort *)(lVar8 + 0x12e) != 0) {
            uVar11 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
                  TI_UnityEngine.UIElements.IStyle) {
                puVar10 = (undefined8 *)
                          ((longlong)
                           (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) +
                           0xb) * 0x10 + 0x138 + lVar8);
                goto code_r0x0001805bf655;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(ushort *)(lVar8 + 0x12e));
          }
          puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0xb);
code_r0x0001805bf655:
          uStack_68 = uVar7;
          uStack_60 = uVar2;
          uStack_58 = uVar3;
          uStack_50 = uVar4;
          uStack_48 = uVar5;
          (*(code *)*puVar10)(plVar9,&uStack_68,puVar10[1]);
          lVar8 = *(longlong *)(param_1 + 0x58);
          if (lVar8 != 0) {
            *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(param_1 + 0x68);
            func_0x000180314690(lVar8 + 0x18);
          }
          return;
        }
      }
    }
  }
DAT_1805bf6dd:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

