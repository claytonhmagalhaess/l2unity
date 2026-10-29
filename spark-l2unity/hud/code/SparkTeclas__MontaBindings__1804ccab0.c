// SparkTeclas__MontaBindings__1804ccab0 @ 0x1804ccab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTeclas__MontaBindings__1804ccab0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  char cStackX_20;
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a0;
  undefined1 auStack_98 [24];
  longlong lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [24];
  
  if (DAT_1834b32f9 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add);
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
  uVar10 = 0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  if (param_1 != 0) {
    lVar6 = func_0x000181e83e90(param_1,0);
    lStack_80 = lVar6;
    if (lVar6 == 0) {
      cStackX_20 = '\0';
    }
    else {
      cStackX_20 = func_0x000181ac2e30(lVar6,0);
      if (cStackX_20 != '\0') {
        UnityEngine_InputSystem_InputActionMap__Disable(lVar6,0);
      }
    }
    while (lVar6 = UnityEngine_InputSystem_InputAction__get_bindings(auStack_50,param_1,0),
          0 < *(int *)(lVar6 + 0xc)) {
      puVar7 = (undefined8 *)
               UnityEngine_InputSystem_InputActionSetupExtensions__ChangeBinding(auStack_98,param_1)
      ;
      uStack_70 = *puVar7;
      uStack_68 = puVar7[1];
      uStack_60 = puVar7[2];
      UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax__Erase(&uStack_70,0);
    }
    if (param_2 == 0) goto LAB_1804cd12f;
LAB_1804ccc8c:
    if ((int)uVar10 < (int)*(uint *)(param_2 + 0x18)) {
      if (uVar10 < *(uint *)(param_2 + 0x18)) {
        lVar6 = *(longlong *)(param_2 + 0x20 + (longlong)(int)uVar10 * 8);
        cVar5 = func_0x000181707e50(lVar6);
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
          if (lVar6 != 0) {
            lStack_c8 = lVar6;
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
                uVar8 = 6;
              }
              else {
                if (lStack_c8 == 0) goto LAB_1804cd11b;
                bVar2 = true;
                uVar8 = 5;
              }
            }
            else {
              if (lStack_c8 == 0) goto LAB_1804cd125;
              bVar4 = true;
              uVar8 = 4;
            }
            lStack_c8 = func_0x00018170c060(lStack_c8,uVar8);
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
  lVar6 = func_0x000180315580(TI_System.Collections.Generic.List<string>);
  FUN_180bba2e0(lVar6,MR_System.Collections.Generic.List<string>..ctor);
  if (bVar2) {
    if (lVar6 == 0) goto LAB_1804cd0fd;
    FUN_180002eb0(lVar6,LIT_"'<Keyboard>/ctrl'",MR_System.Collections.Generic.List<string>.Add);
  }
  if (bVar3) {
    if (lVar6 == 0) goto LAB_1804cd102;
    FUN_180002eb0(lVar6,LIT_"'<Keyboard>/shift'",MR_System.Collections.Generic.List<string>.Add);
  }
  if (bVar4) {
    if (lVar6 == 0) goto LAB_1804cd107;
    FUN_180002eb0(lVar6,LIT_"'<Keyboard>/alt'",MR_System.Collections.Generic.List<string>.Add);
  }
  else if (lVar6 == 0) goto LAB_1804cd10c;
  if (*(int *)(lVar6 + 0x18) == 0) {
    UnityEngine_InputSystem_InputActionSetupExtensions__AddBinding(auStack_98);
    uVar10 = uVar10 + 1;
  }
  else {
    if (*(int *)(lVar6 + 0x18) == 1) {
      puVar7 = (undefined8 *)
               UnityEngine_InputSystem_InputActionSetupExtensions__AddCompositeBinding
                         (auStack_98,param_1,LIT_"'OneModifier'",0,0,0);
      uStack_c0 = *puVar7;
      uStack_b8 = puVar7[1];
      uStack_b0 = puVar7[2];
      uVar9 = FUN_180bbafe0(lVar6,0,MR_System.Collections.Generic.List<string>.get_Item);
      uVar8 = LIT_"'Modifier'";
    }
    else {
      puVar7 = (undefined8 *)
               UnityEngine_InputSystem_InputActionSetupExtensions__AddCompositeBinding
                         (auStack_98,param_1,LIT_"'TwoModifiers'",0,0,0);
      uStack_c0 = *puVar7;
      uStack_b8 = puVar7[1];
      uStack_b0 = puVar7[2];
      uVar8 = FUN_180bbafe0(lVar6,0,MR_System.Collections.Generic.List<string>.get_Item);
      puVar7 = (undefined8 *)
               UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax__With
                         (auStack_98,&uStack_c0,LIT_"'Modifier1'",uVar8,0,0,0);
      uStack_c0 = *puVar7;
      uStack_b8 = puVar7[1];
      uStack_b0 = puVar7[2];
      uVar9 = FUN_180bbafe0(lVar6,1,MR_System.Collections.Generic.List<string>.get_Item);
      uVar8 = LIT_"'Modifier2'";
    }
    puVar7 = (undefined8 *)
             UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax__With
                       (auStack_98,&uStack_c0,uVar8,uVar9,0,0,0);
    uStack_c0 = *puVar7;
    uStack_b8 = puVar7[1];
    uStack_b0 = puVar7[2];
    UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax__With(auStack_98);
LAB_1804ccf42:
    uVar10 = uVar10 + 1;
  }
  goto LAB_1804ccc8c;
}

