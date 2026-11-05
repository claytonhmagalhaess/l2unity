// NpcHtmlWindow__AddImageElement__18067e4e0 @ 0x18067e4e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NpcHtmlWindow__AddImageElement__18067e4e0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined8 auStack_58 [2];
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if (cRam00000001834b3e57 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.UIElements.Image);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement);
    FUN_180315380(LIT_"'Data/SysTextures/Icon/accessary_magic_ring_i00'");
    FUN_180315380(LIT_"'height'");
    FUN_180315380(LIT_"'Data/UI/Assets/html/'");
    FUN_180315380(LIT_"'width'");
    FUN_180315380(LIT_"'src'");
    FUN_180315380(LIT_"'.'");
    cRam00000001834b3e57 = '\x01';
  }
  lStack_68 = 0;
  uStack_60 = 0;
  auStack_58[0] = 0;
  lVar4 = func_0x000180315580(TI_UnityEngine.UIElements.VisualElement);
  UnityEngine_UIElements_VisualElement___ctor(lVar4,0);
  if (*(int *)(TI_SparkArte + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar5 = FUN_180a90ae0(LIT_"'Data/SysTextures/Icon/accessary_magic_ring_i00'",MR_SparkArte.Load<UnityEngine.Texture2D>);
  lVar6 = func_0x000180315580(TI_UnityEngine.UIElements.Image);
  UnityEngine_UIElements_Image___ctor(lVar6,0);
  if (lVar6 == 0) {
code_r0x00018067edb3:
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  func_0x0001826cafa0(lVar6,0,0);
  if (param_3 == 0) goto code_r0x00018067edb3;
  cVar3 = FUN_1812698d0(param_3,LIT_"'src'",&lStack_68,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
  if (cVar3 != '\0') {
    if (lStack_68 == 0) goto code_r0x00018067edb3;
    lVar7 = System_String__Split(lStack_68,LIT_"'.'",0,0);
    if (lVar7 == 0) goto code_r0x00018067edb3;
    if (*(uint *)(lVar7 + 0x18) < 2) {
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar8 = System_String__Concat(LIT_"'Data/UI/Assets/html/'",*(undefined8 *)(lVar7 + 0x28),0);
    if (*(int *)(TI_SparkArte + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar8 = FUN_180a90ae0(uVar8,MR_SparkArte.Load<UnityEngine.Texture2D>);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar3 = UnityEngine_Object__op_Inequality(uVar8,0,0);
    if (cVar3 != '\0') {
      uVar5 = uVar8;
    }
    UnityEngine_UIElements_Image__set_image(lVar6,uVar5,0);
  }
  cVar3 = FUN_1812698d0(param_3,LIT_"'width'",&uStack_60,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
  if (cVar3 != '\0') {
    System_Int32__Parse(uStack_60,0);
    if (lVar4 == 0) goto code_r0x00018067edb3;
    plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar9 == (longlong *)0x0) goto code_r0x00018067edb3;
    lVar7 = *plVar9;
    uVar5 = *puVar10;
    uVar1 = *(undefined4 *)(puVar10 + 1);
    if (*(ushort *)(lVar7 + 0x12e) != 0) {
      uVar11 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar10 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 0x59) *
                     0x10 + 0x138 + lVar7);
          goto code_r0x00018067e7c9;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
    }
    puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x59);
code_r0x00018067e7c9:
    uStack_48 = uVar5;
    uStack_40 = uVar1;
    (*(code *)*puVar10)(plVar9,&uStack_48,puVar10[1]);
    plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar9 == (longlong *)0x0) goto code_r0x00018067edb3;
    lVar7 = *plVar9;
    uVar5 = *puVar10;
    uVar1 = *(undefined4 *)(puVar10 + 1);
    if (*(ushort *)(lVar7 + 0x12e) != 0) {
      uVar11 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar10 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 0x55) *
                     0x10 + 0x138 + lVar7);
          goto code_r0x00018067e859;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
    }
    puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x55);
code_r0x00018067e859:
    uStack_48 = uVar5;
    uStack_40 = uVar1;
    (*(code *)*puVar10)(plVar9,&uStack_48,puVar10[1]);
    plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
    puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar9 == (longlong *)0x0) goto code_r0x00018067edb3;
    lVar7 = *plVar9;
    uVar5 = *puVar10;
    uVar1 = *(undefined4 *)(puVar10 + 1);
    if (*(ushort *)(lVar7 + 0x12e) != 0) {
      uVar11 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar10 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 0x59) *
                     0x10 + 0x138 + lVar7);
          goto code_r0x00018067e8e9;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
    }
    puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x59);
code_r0x00018067e8e9:
    uStack_48 = uVar5;
    uStack_40 = uVar1;
    (*(code *)*puVar10)(plVar9,&uStack_48,puVar10[1]);
    plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
    puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_48);
    if (plVar9 == (longlong *)0x0) goto code_r0x00018067edb3;
    lVar7 = *plVar9;
    uVar12 = 0;
    uVar5 = *puVar10;
    uVar1 = *(undefined4 *)(puVar10 + 1);
    if (*(ushort *)(lVar7 + 0x12e) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
          puVar10 = (undefined8 *)
                    ((longlong)(*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar12 * 0x10) + 0x55) *
                     0x10 + 0x138 + lVar7);
          goto code_r0x00018067e979;
        }
        uVar11 = (short)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
      } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
    }
    puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x55);
code_r0x00018067e979:
    uStack_48 = uVar5;
    uStack_40 = uVar1;
    (*(code *)*puVar10)(plVar9,&uStack_48,puVar10[1]);
  }
  cVar3 = FUN_1812698d0(param_3,LIT_"'height'",auStack_58,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
  if (cVar3 == '\0') {
    if (lVar4 == 0) goto code_r0x00018067edbf;
  }
  else {
    System_Int32__Parse(auStack_58[0],0);
    if (lVar4 == 0) goto code_r0x00018067edb3;
    plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar9 == (longlong *)0x0) goto code_r0x00018067edb3;
    lVar7 = *plVar9;
    uVar5 = *puVar10;
    uVar1 = *(undefined4 *)(puVar10 + 1);
    if (*(ushort *)(lVar7 + 0x12e) != 0) {
      uVar11 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar10 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 0x53) *
                     0x10 + 0x138 + lVar7);
          goto code_r0x00018067ea49;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
    }
    puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x53);
code_r0x00018067ea49:
    uStack_48 = uVar5;
    uStack_40 = uVar1;
    (*(code *)*puVar10)(plVar9,&uStack_48,puVar10[1]);
    plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
    puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar9 == (longlong *)0x0) goto code_r0x00018067edb3;
    lVar7 = *plVar9;
    uVar5 = *puVar10;
    uVar1 = *(undefined4 *)(puVar10 + 1);
    if (*(ushort *)(lVar7 + 0x12e) != 0) {
      uVar11 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar10 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 0x57) *
                     0x10 + 0x138 + lVar7);
          goto code_r0x00018067ead9;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
    }
    puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x00018067ead9:
    uStack_48 = uVar5;
    uStack_40 = uVar1;
    (*(code *)*puVar10)(plVar9,&uStack_48,puVar10[1]);
    plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
    puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit();
    if (plVar9 == (longlong *)0x0) goto code_r0x00018067edb3;
    lVar7 = *plVar9;
    uVar5 = *puVar10;
    uVar1 = *(undefined4 *)(puVar10 + 1);
    if (*(ushort *)(lVar7 + 0x12e) != 0) {
      uVar11 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar10 = (undefined8 *)
                    ((longlong)
                     (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 0x53) *
                     0x10 + 0x138 + lVar7);
          goto code_r0x00018067eb69;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
    }
    puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x53);
code_r0x00018067eb69:
    uStack_48 = uVar5;
    uStack_40 = uVar1;
    (*(code *)*puVar10)(plVar9,&uStack_48,puVar10[1]);
    plVar9 = (longlong *)UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
    puVar10 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_48);
    if (plVar9 == (longlong *)0x0) goto code_r0x00018067edb3;
    lVar7 = *plVar9;
    uVar12 = 0;
    uVar5 = *puVar10;
    uVar1 = *(undefined4 *)(puVar10 + 1);
    if (*(ushort *)(lVar7 + 0x12e) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + uVar12 * 0x10) == TI_UnityEngine.UIElements.IStyle) {
          puVar10 = (undefined8 *)
                    ((longlong)(*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + uVar12 * 0x10) + 0x57) *
                     0x10 + 0x138 + lVar7);
          goto code_r0x00018067ebf9;
        }
        uVar11 = (short)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
      } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
    }
    puVar10 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x57);
code_r0x00018067ebf9:
    uStack_48 = uVar5;
    uStack_40 = uVar1;
    (*(code *)*puVar10)(plVar9,&uStack_48,puVar10[1]);
  }
  UnityEngine_UIElements_VisualElement__Add(lVar4,lVar6,0);
  lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar4,0);
  uStack_48 = 0;
  func_0x000182601bc0(&uStack_48,3,0);
  if (lVar6 != 0) {
    FUN_180005060(0x3d,TI_UnityEngine.UIElements.IStyle,lVar6,uStack_48);
    if (param_2 != 0) {
      UnityEngine_UIElements_VisualElement__Add(param_2,lVar4,0);
      return;
    }
  }
code_r0x00018067edbf:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

