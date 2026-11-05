// SparkTeclas_Captura__Update__1804b4b30 @ 0x1804b4b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTeclas_Captura__Update__1804b4b30(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  if (cRam00000001834b330c == '\0') {
    FUN_180315380(MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.Controls.KeyControl>.Dispose);
    FUN_180315380(MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.Controls.KeyControl>.MoveNext);
    FUN_180315380(MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.Controls.KeyControl>.get_Current);
    FUN_180315380(MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.Controls.KeyControl>.GetEnumerator);
    FUN_180315380(TI_SparkComandos);
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(LIT_"'alt'");
    FUN_180315380(LIT_"'ctrl'");
    FUN_180315380(LIT_"'<Keyboard>/escape'");
    FUN_180315380(LIT_"'CloseWindow'");
    FUN_180315380(LIT_"'shift'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'<Keyboard>/'");
    FUN_180315380(LIT_"'That key types text in the chat. Use another key, or Alt...");
    cRam00000001834b330c = '\x01';
  }
  uStack_60 = 0;
  uStack_58 = 0;
  if (*(char *)(param_1 + 0x20) == '\0') {
    return;
  }
  if (DAT_1834b32c2 == '\0') {
    FUN_180315380(TI_UnityEngine.InputSystem.Keyboard);
    DAT_1834b32c2 = '\x01';
  }
  lVar10 = **(longlong **)(TI_UnityEngine.InputSystem.Keyboard + 0xb8);
  if (lVar10 == 0) {
    return;
  }
  fVar13 = (float)FUN_1824366b0(0);
  if (fVar13 - *(float *)(param_1 + 0x40) < 0.05) {
    return;
  }
  lVar8 = func_0x000181f52040(lVar10,0);
  if (lVar8 == 0) goto code_r0x0001804b50ef;
  cVar4 = UnityEngine_InputSystem_Controls_ButtonControl__get_wasPressedThisFrame(lVar8,0);
  if (cVar4 == '\0') {
    lVar8 = func_0x000181f51ea0(lVar10,0);
    if (lVar8 == 0) goto code_r0x0001804b50ef;
    cVar4 = UnityEngine_InputSystem_Controls_ButtonControl__get_wasPressedThisFrame(lVar8,0);
    if (cVar4 == '\0') {
      if (*(longlong *)(lVar10 + 0x1a8) == 0) {
code_r0x0001804b50ef:
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar5 = UnityEngine_InputSystem_Controls_ButtonControl__get_isPressed
                        (*(longlong *)(lVar10 + 0x1a8),0);
      if (*(longlong *)(lVar10 + 0x1a0) == 0) goto code_r0x0001804b50ef;
      bVar6 = UnityEngine_InputSystem_Controls_ButtonControl__get_isPressed
                        (*(longlong *)(lVar10 + 0x1a0),0);
      if (*(longlong *)(lVar10 + 0x198) == 0) goto code_r0x0001804b50ef;
      cVar4 = UnityEngine_InputSystem_Controls_ButtonControl__get_isPressed
                        (*(longlong *)(lVar10 + 0x198),0);
      puVar9 = (undefined8 *)UnityEngine_InputSystem_Keyboard__get_allKeys(&uStack_78,lVar10,0);
      uStack_60 = *puVar9;
      uStack_58 = puVar9[1];
      FUN_180d7b470(&uStack_78,&uStack_60,MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.Controls.KeyControl>.GetEnumerator);
      uStack_50 = (undefined4)uStack_78;
      uStack_4c = uStack_78._4_4_;
      uStack_48 = (undefined4)uStack_70;
      uStack_44 = uStack_70._4_4_;
      uStack_40 = uStack_68;
      uStack_78 = 0;
      uStack_70 = &uStack_50;
      while (cVar7 = func_0x0001812f8c20(&uStack_50,MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.Controls.KeyControl>.MoveNext), cVar7 != '\0') {
        lVar10 = FUN_1812fe710(&uStack_50,MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.Controls.KeyControl>.get_Current);
        if ((lVar10 != 0) &&
           (cVar7 = UnityEngine_InputSystem_Controls_ButtonControl__get_wasPressedThisFrame
                              (lVar10,0), cVar7 != '\0')) {
          if (*(int *)(lVar10 + 0x148) - 0x33U < 8) {
            *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar10 + 0x148);
          }
          else {
            if (2 < (uint)(cVar4 != '\0') + (uint)bVar6 + (uint)bVar5) {
              cVar4 = '\0';
            }
            cVar7 = SparkTeclas_Captura__LidaDigitando__1804b4920(*(undefined8 *)(param_1 + 0x28),0)
            ;
            if (((cVar7 == '\0') || (bVar5 != 0)) || (bVar6 != 0)) {
code_r0x0001804b4e49:
              uVar12 = *(undefined8 *)(param_1 + 0x28);
              uVar2 = *(undefined4 *)(param_1 + 0x30);
              uVar11 = UnityEngine_InputSystem_InputControl__get_name(lVar10,0);
              uVar11 = System_String__Concat(LIT_"'<Keyboard>/'",uVar11,0);
              if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
                func_0x000180315660();
              }
              uVar11 = SparkTeclas__Junta__1804cc950(bVar5,bVar6,cVar4,uVar11,0);
              SparkTeclas__Grava__1804cc8a0(uVar12,uVar2,uVar11,0);
              SparkTeclas_Captura__Termina__1804b4aa0(param_1,0);
              Gear__UpdateWeaponType__1803dadf0(&uStack_50,MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.Controls.KeyControl>.Dispose);
              return;
            }
            iVar1 = *(int *)(lVar10 + 0x148);
            if (iVar1 - 1U < 0x32) {
              if ((iVar1 == 2) || (iVar1 == 3)) goto code_r0x0001804b4e49;
            }
            else if ((iVar1 < 0x4e) || (0x5d < iVar1)) goto code_r0x0001804b4e49;
            if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
              func_0x000180315660();
            }
            SparkComandos__Diz__1805ed000(LIT_"'That key types text in the chat. Use another key, or Alt...",0);
          }
        }
      }
      Gear__UpdateWeaponType__1803dadf0(&uStack_50,MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.Controls.KeyControl>.Dispose);
      if (*(int *)(param_1 + 0x44) == 0) {
        return;
      }
      if (bVar5 != 0) {
        return;
      }
      if (bVar6 != 0) {
        return;
      }
      if (cVar4 != '\0') {
        return;
      }
      uVar11 = LIT_"'ctrl'";
      if (((*(int *)(param_1 + 0x44) != 0x37) && (*(int *)(param_1 + 0x44) != 0x38)) &&
         ((uVar11 = LIT_"'shift'", *(int *)(param_1 + 0x44) != 0x33 &&
          (((*(int *)(param_1 + 0x44) != 0x34 &&
            (uVar11 = LIT_"'alt'", *(int *)(param_1 + 0x44) != 0x35)) &&
           (*(int *)(param_1 + 0x44) != 0x36)))))) {
        uVar11 = LIT_"''";
      }
      *(undefined4 *)(param_1 + 0x44) = 0;
      cVar4 = System_String__op_Inequality(uVar11,LIT_"''",0);
      if (cVar4 == '\0') {
        return;
      }
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = *(undefined4 *)(param_1 + 0x30);
      uVar11 = System_String__Concat(LIT_"'<Keyboard>/'",uVar11,0);
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
      }
    }
    else {
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = *(undefined4 *)(param_1 + 0x30);
      uVar11 = LIT_"''";
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
        uVar11 = LIT_"''";
      }
    }
  }
  else {
    if ((*(longlong *)(param_1 + 0x28) == 0) ||
       (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x20), lVar8 == 0))
    goto code_r0x0001804b50ef;
    cVar4 = func_0x0001817058a0(*(undefined8 *)(lVar8 + 0x10),LIT_"'CloseWindow'",0);
    if (cVar4 == '\0') goto code_r0x0001804b50d2;
    if (*(longlong *)(lVar10 + 0x1a8) == 0) goto code_r0x0001804b50ef;
    cVar4 = UnityEngine_InputSystem_Controls_ButtonControl__get_isPressed
                      (*(longlong *)(lVar10 + 0x1a8),0);
    if (cVar4 != '\0') goto code_r0x0001804b50d2;
    if (*(longlong *)(lVar10 + 0x1a0) == 0) goto code_r0x0001804b50ef;
    cVar4 = UnityEngine_InputSystem_Controls_ButtonControl__get_isPressed
                      (*(longlong *)(lVar10 + 0x1a0),0);
    if (cVar4 != '\0') goto code_r0x0001804b50d2;
    if (*(longlong *)(lVar10 + 0x198) == 0) goto code_r0x0001804b50ef;
    cVar4 = UnityEngine_InputSystem_Controls_ButtonControl__get_isPressed
                      (*(longlong *)(lVar10 + 0x198),0);
    if (cVar4 != '\0') goto code_r0x0001804b50d2;
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    uVar11 = LIT_"'<Keyboard>/escape'";
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
      uVar11 = LIT_"'<Keyboard>/escape'";
    }
  }
  SparkTeclas__Grava__1804cc8a0(uVar12,uVar2,uVar11,0);
code_r0x0001804b50d2:
  SparkTeclas_Captura__Termina__1804b4aa0(param_1,0);
  return;
}

