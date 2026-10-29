// SparkTeclas__TeclaDoVoo__1804ce890 @ 0x1804ce890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkTeclas__TeclaDoVoo__1804ce890(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uStackX_8;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  if (DAT_1834b3300 == '\0') {
    FUN_180315380(TI_UnityEngine.InputSystem.Controls.ButtonControl);
    FUN_180315380(MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.Dispose);
    FUN_180315380(MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.MoveNext);
    FUN_180315380(MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.get_Current);
    FUN_180315380(MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.GetEnumerator);
    FUN_180315380(TI_SparkTeclas);
    DAT_1834b3300 = '\x01';
  }
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  if (param_1 != 0) {
    puVar4 = (undefined8 *)UnityEngine_InputSystem_InputAction__get_controls(&uStack_b8,param_1,0);
    uStack_a8 = *puVar4;
    uStack_a0 = puVar4[1];
    FUN_180d7b470(&uStack_68,&uStack_a8,MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.GetEnumerator);
    uStack_80 = uStack_68;
    uStack_7c = uStack_64;
    uStack_78 = uStack_60;
    uStack_74 = uStack_5c;
    uStack_70 = uStack_58;
    while (cVar3 = func_0x0001812f8c20(&uStack_80,MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.MoveNext), cVar3 != '\0') {
      plVar5 = (longlong *)FUN_1812fe710(&uStack_80,MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.get_Current);
      if (plVar5 != (longlong *)0x0) {
        if (((*(byte *)(TI_UnityEngine.InputSystem.Controls.ButtonControl + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
            (*(longlong *)
              (*(longlong *)(*plVar5 + 200) + -8 + (ulonglong)*(byte *)(TI_UnityEngine.InputSystem.Controls.ButtonControl + 0x130) * 8)
             == TI_UnityEngine.InputSystem.Controls.ButtonControl)) &&
           ((cVar3 = UnityEngine_InputSystem_Controls_ButtonControl__get_isPressed(plVar5,0),
            cVar3 != '\0' ||
            (cVar3 = UnityEngine_InputSystem_Controls_ButtonControl__get_wasPressedThisFrame
                               (plVar5,0), cVar3 != '\0')))) {
          if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar1 = *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x28);
          uStackX_8 = 0;
          if (lVar1 == 0) {
LAB_1804cec11:
            FUN_1803155d0();
            FUN_180311490();
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return uVar8;
          }
          while ((int)uStackX_8 < (int)*(uint *)(lVar1 + 0x18)) {
            if (*(uint *)(lVar1 + 0x18) <= uStackX_8) {
              FUN_1803155c0();
              FUN_180311490();
LAB_1804cec0c:
              FUN_1803155d0();
              goto LAB_1804cec11;
            }
            uVar8 = *(undefined8 *)(lVar1 + 0x20 + (longlong)(int)uStackX_8 * 8);
            if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
              func_0x000180315660();
            }
            lVar6 = SparkTeclas__get_Nosso(0);
            if (lVar6 == 0) goto LAB_1804cec0c;
            lVar6 = UnityEngine_InputSystem_InputActionMap__FindAction(lVar6,uVar8,0,0);
            if (lVar6 == 0) {
              uStackX_8 = uStackX_8 + 1;
            }
            else {
              puVar4 = (undefined8 *)
                       UnityEngine_InputSystem_InputAction__get_controls(&uStack_68,lVar6,0);
              uStack_a8 = *puVar4;
              uStack_a0 = puVar4[1];
              FUN_180d7b470(&uStack_40,&uStack_a8);
              uStack_98 = CONCAT44(uStack_3c,uStack_40);
              uStack_90 = CONCAT44(uStack_34,uStack_38);
              uStack_88 = uStack_30;
              uStack_b8 = 0;
              puStack_b0 = &uStack_98;
              while (cVar3 = func_0x0001812f8c20(&uStack_98,MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.MoveNext), cVar3 != '\0') {
                plVar7 = (longlong *)FUN_1812fe710(&uStack_98,MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.get_Current);
                if (plVar7 == plVar5) {
                  Gear__UpdateWeaponType__1803dadf0(&uStack_98,MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.Dispose);
                  Gear__UpdateWeaponType__1803dadf0(&uStack_80,MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.Dispose);
                  return 1;
                }
              }
              Gear__UpdateWeaponType__1803dadf0(&uStack_98,MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.Dispose);
              uStackX_8 = uStackX_8 + 1;
            }
          }
        }
      }
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_80,MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputControl>.Dispose);
  }
  return 0;
}

