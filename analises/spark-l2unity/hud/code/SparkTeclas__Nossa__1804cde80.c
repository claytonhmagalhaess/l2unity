// SparkTeclas__Nossa__1804cde80 @ 0x1804cde80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTeclas__Nossa__1804cde80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  char cStackX_20;
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  longlong lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (DAT_1834b32ec == '\0') {
    uStack_90 = 0x1804cdeab;
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string__>.set_Item);
    uStack_90 = 0x1804cdeb7;
    FUN_180315380(TI_SparkTeclas);
    uStack_90 = 0x1804cdec3;
    FUN_180315380(TI_string__);
    DAT_1834b32ec = '\x01';
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    uStack_90 = 0x1804cdedf;
    func_0x000180315660();
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_90 = 0x1804cdf1c;
  lVar9 = UnityEngine_InputSystem_InputActionSetupExtensions__AddAction
                    (**(undefined8 **)(TI_SparkTeclas + 0xb8),param_1,1,0);
  lVar11 = *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x18);
  uStack_90 = 0x1804cdf42;
  lVar10 = func_0x000180314710(TI_string__,2);
  if (lVar10 == 0) goto LAB_1804cdffb;
  if (*(int *)(lVar10 + 0x18) == 0) {
LAB_1804ce001:
    uStack_90 = 0x1804ce006;
    FUN_1803155c0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined8 *)(lVar10 + 0x20) = param_2;
  uStack_90 = 0x1804cdf68;
  func_0x000180314690(lVar10 + 0x20,param_2);
  if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_1804ce001;
  *(undefined8 *)(lVar10 + 0x28) = param_3;
  uStack_90 = 0x1804cdf82;
  func_0x000180314690(lVar10 + 0x28,param_3);
  if (lVar11 == 0) {
LAB_1804cdffb:
    uStack_90 = 0x1804ce000;
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_90 = 0x1804cdf9c;
  FUN_18126c020(lVar11,param_1,lVar10);
  uStack_90 = 0x1804cdfad;
  lVar11 = func_0x000180314710(TI_string__,2);
  if (lVar11 == 0) goto LAB_1804cdffb;
  if (*(int *)(lVar11 + 0x18) == 0) goto LAB_1804ce001;
  *(undefined8 *)(lVar11 + 0x20) = param_2;
  uStack_90 = 0x1804cdfcb;
  func_0x000180314690(lVar11 + 0x20,param_2);
  if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_1804ce001;
  *(undefined8 *)(lVar11 + 0x28) = param_3;
  uStack_90 = 0x1804cdfe1;
  func_0x000180314690(lVar11 + 0x28,param_3);
  if (DAT_1834b32f9 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add,lVar11,0);
    FUN_180315380(MR_System.Collections.Generic.List<string>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Item);
    FUN_180315380(TI_System.Collections.Generic.List<string>);
    FUN_180315380(MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputBinding>.get_Count);
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(LIT_"'OneModifier'");
    FUN_180315380(LIT_"'<Keyboard>/alt'");
    FUN_180315380(LIT_"'Binding'");
    FUN_180315380(LIT_"'Modifier1'");
    FUN_180315380(LIT_"'TwoModifiers'");
    FUN_180315380(LIT_"'Modifier2'");
    FUN_180315380(LIT_"'Modifier'");
    FUN_180315380(LIT_"'<Keyboard>/shift'");
    FUN_180315380(LIT_"'<Keyboard>/ctrl'");
    DAT_1834b32f9 = '\x01';
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uVar12 = 0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  if (lVar9 != 0) {
    lVar10 = func_0x000181e83e90(lVar9,0);
    lStack_80 = lVar10;
    if (lVar10 == 0) {
      cStackX_20 = '\0';
    }
    else {
      cStackX_20 = func_0x000181ac2e30(lVar10,0);
      if (cStackX_20 != '\0') {
        UnityEngine_InputSystem_InputActionMap__Disable(lVar10,0);
      }
    }
    while (lVar10 = UnityEngine_InputSystem_InputAction__get_bindings(&uStack_50,lVar9,0),
          0 < *(int *)(lVar10 + 0xc)) {
      puVar6 = (undefined8 *)
               UnityEngine_InputSystem_InputActionSetupExtensions__ChangeBinding(auStack_98,lVar9);
      uStack_70 = *puVar6;
      uStack_68 = puVar6[1];
      uStack_60 = puVar6[2];
      UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax__Erase(&uStack_70,0);
    }
    if (lVar11 == 0) goto LAB_1804cd12f;
LAB_1804ccc8c:
    if ((int)uVar12 < (int)*(uint *)(lVar11 + 0x18)) {
      if (uVar12 < *(uint *)(lVar11 + 0x18)) {
        lVar10 = *(longlong *)(lVar11 + 0x20 + (longlong)(int)uVar12 * 8);
        cVar5 = func_0x000181707e50(lVar10);
        if (cVar5 == '\0') {
          if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (DAT_1834b32f8 == '\0') {
            FUN_180315380(LIT_"'alt+'");
            FUN_180315380(LIT_"'ctrl+'");
            FUN_180315380(LIT_"'shift+'");
            FUN_180315380(LIT_"''");
            DAT_1834b32f8 = '\x01';
          }
          bVar3 = false;
          bVar2 = false;
          bVar4 = false;
          lStack_c8 = LIT_"''";
          if (lVar10 != 0) {
            lStack_c8 = lVar10;
          }
          func_0x000180314690(&lStack_c8);
          do {
            if (lStack_c8 == 0) goto LAB_1804cd12a;
            cVar5 = System_String__StartsWith(lStack_c8,LIT_"'alt+'",0);
            if (cVar5 == '\0') {
              if (lStack_c8 == 0) goto LAB_1804cd120;
              cVar5 = System_String__StartsWith(lStack_c8,LIT_"'ctrl+'",0);
              if (cVar5 == '\0') {
                if (lStack_c8 == 0) goto LAB_1804cd116;
                cVar5 = System_String__StartsWith(lStack_c8,LIT_"'shift+'",0);
                if (cVar5 == '\0') goto code_r0x0001804ccda0;
                if (lStack_c8 == 0) goto LAB_1804cd111;
                bVar3 = true;
                uVar7 = 6;
              }
              else {
                if (lStack_c8 == 0) goto LAB_1804cd11b;
                bVar2 = true;
                uVar7 = 5;
              }
            }
            else {
              if (lStack_c8 == 0) goto LAB_1804cd125;
              bVar4 = true;
              uVar7 = 4;
            }
            lStack_c8 = func_0x00018170c060(lStack_c8,uVar7);
            func_0x000180314690(&lStack_c8,lStack_c8);
          } while( true );
        }
        goto LAB_1804ccf42;
      }
      goto LAB_1804cd0f7;
    }
    if (cStackX_20 == '\0') {
      return;
    }
    if (lStack_80 != 0) {
      UnityEngine_InputSystem_InputActionMap__Enable(lStack_80,0);
      return;
    }
  }
  FUN_1803155d0();
LAB_1804cd0f7:
  FUN_1803155c0();
LAB_1804cd0fd:
  FUN_1803155d0();
LAB_1804cd102:
  FUN_1803155d0();
LAB_1804cd107:
  FUN_1803155d0();
LAB_1804cd10c:
  FUN_1803155d0();
LAB_1804cd111:
  FUN_1803155d0();
LAB_1804cd116:
  FUN_1803155d0();
LAB_1804cd11b:
  FUN_1803155d0();
LAB_1804cd120:
  FUN_1803155d0();
LAB_1804cd125:
  FUN_1803155d0();
LAB_1804cd12a:
  FUN_1803155d0();
LAB_1804cd12f:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
code_r0x0001804ccda0:
  lVar10 = func_0x000180315580(TI_System.Collections.Generic.List<string>);
  FUN_180bba2e0(lVar10,MR_System.Collections.Generic.List<string>..ctor);
  if (bVar2) {
    if (lVar10 == 0) goto LAB_1804cd0fd;
    FUN_180002eb0(lVar10,LIT_"'<Keyboard>/ctrl'",MR_System.Collections.Generic.List<string>.Add);
  }
  if (bVar3) {
    if (lVar10 == 0) goto LAB_1804cd102;
    FUN_180002eb0(lVar10,LIT_"'<Keyboard>/shift'",MR_System.Collections.Generic.List<string>.Add);
  }
  if (bVar4) {
    if (lVar10 == 0) goto LAB_1804cd107;
    FUN_180002eb0(lVar10,LIT_"'<Keyboard>/alt'",MR_System.Collections.Generic.List<string>.Add);
  }
  else if (lVar10 == 0) goto LAB_1804cd10c;
  if (*(int *)(lVar10 + 0x18) == 0) {
    UnityEngine_InputSystem_InputActionSetupExtensions__AddBinding(auStack_98);
    uVar12 = uVar12 + 1;
  }
  else {
    if (*(int *)(lVar10 + 0x18) == 1) {
      puVar6 = (undefined8 *)
               UnityEngine_InputSystem_InputActionSetupExtensions__AddCompositeBinding
                         (auStack_98,lVar9,LIT_"'OneModifier'",0,0,0);
      uStack_c0 = *puVar6;
      uStack_b8 = puVar6[1];
      uStack_b0 = puVar6[2];
      uVar8 = FUN_180bbafe0(lVar10,0,MR_System.Collections.Generic.List<string>.get_Item);
      uVar7 = LIT_"'Modifier'";
    }
    else {
      puVar6 = (undefined8 *)
               UnityEngine_InputSystem_InputActionSetupExtensions__AddCompositeBinding
                         (auStack_98,lVar9,LIT_"'TwoModifiers'",0,0,0);
      uStack_c0 = *puVar6;
      uStack_b8 = puVar6[1];
      uStack_b0 = puVar6[2];
      uVar7 = FUN_180bbafe0(lVar10,0,MR_System.Collections.Generic.List<string>.get_Item);
      puVar6 = (undefined8 *)
               UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax__With
                         (auStack_98,&uStack_c0,LIT_"'Modifier1'",uVar7,0,0,0);
      uStack_c0 = *puVar6;
      uStack_b8 = puVar6[1];
      uStack_b0 = puVar6[2];
      uVar8 = FUN_180bbafe0(lVar10,1,MR_System.Collections.Generic.List<string>.get_Item);
      uVar7 = LIT_"'Modifier2'";
    }
    puVar6 = (undefined8 *)
             UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax__With
                       (auStack_98,&uStack_c0,uVar7,uVar8,0,0,0);
    uStack_c0 = *puVar6;
    uStack_b8 = puVar6[1];
    uStack_b0 = puVar6[2];
    UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax__With(auStack_98);
LAB_1804ccf42:
    uVar12 = uVar12 + 1;
  }
  goto LAB_1804ccc8c;
}

