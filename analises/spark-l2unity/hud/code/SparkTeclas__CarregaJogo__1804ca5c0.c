// SparkTeclas__CarregaJogo__1804ca5c0 @ 0x1804ca5c0

/* WARNING: Removing unreachable block (ram,0x0001804cb1c0) */
/* WARNING: Removing unreachable block (ram,0x0001804cb1dc) */
/* WARNING: Removing unreachable block (ram,0x0001804cb1f7) */
/* WARNING: Removing unreachable block (ram,0x0001804cb1e7) */
/* WARNING: Removing unreachable block (ram,0x0001804cb1f1) */
/* WARNING: Removing unreachable block (ram,0x0001804cb1fe) */
/* WARNING: Removing unreachable block (ram,0x0001804cb207) */
/* WARNING: Removing unreachable block (ram,0x0001804cb211) */
/* WARNING: Removing unreachable block (ram,0x0001804cb234) */
/* WARNING: Removing unreachable block (ram,0x0001804cb228) */
/* WARNING: Removing unreachable block (ram,0x0001804cb22e) */
/* WARNING: Removing unreachable block (ram,0x0001804cb23b) */
/* WARNING: Removing unreachable block (ram,0x0001804cb244) */
/* WARNING: Removing unreachable block (ram,0x0001804cb24e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTeclas__CarregaJogo__1804ca5c0(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  longlong lStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined4 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  longlong lStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  longlong lStack_120;
  longlong lStack_118;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_88 [64];
  longlong lStack_48;
  
  if (cRam00000001834b32f0 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>..ctor);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string__>.get_Item);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.set_Item);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<string,string>);
    FUN_180315380(MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputBinding>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext);
    FUN_180315380(MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputBinding>.MoveNext);
    FUN_180315380(MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputBinding>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.get_Current);
    FUN_180315380(TI_UnityEngine.InputSystem.InputSystem);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputBinding>.GetEnumerator);
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(TI_string__);
    FUN_180315380(LIT_"'spark.opt.teclas'");
    FUN_180315380(LIT_"'CharacterStatus'");
    FUN_180315380(LIT_"'spark.opt.teclas.statussemp'");
    FUN_180315380(LIT_"'spark.opt.teclas.atacarsemf'");
    FUN_180315380(LIT_"'Move'");
    FUN_180315380(LIT_"'<Keyboard>/f'");
    FUN_180315380(LIT_"'<Keyboard>/p'");
    FUN_180315380(LIT_"'Attack'");
    FUN_180315380(LIT_"'Jump'");
    FUN_180315380(LIT_"'spark.opt.binds'");
    FUN_180315380(LIT_"'Test'");
    FUN_180315380(LIT_"''");
    cRam00000001834b32f0 = '\x01';
  }
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  lStack_198 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  lStack_120 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_168 = 0;
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660(TI_SparkTeclas);
  }
  *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 8) = param_1;
  func_0x000180314690(*(longlong *)(TI_SparkTeclas + 0xb8) + 8,param_1);
  if (*(int *)(TI_UnityEngine.InputSystem.InputSystem + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar6 = UnityEngine_InputSystem_InputSystem__get_settings(0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if (cVar4 == '\0') {
code_r0x0001804ca83a:
    lVar7 = func_0x000180314710(TI_string__,3);
    if (lVar7 == 0) goto code_r0x0001804cb794;
    if (*(int *)(lVar7 + 0x18) == 0) {
code_r0x0001804cb8f9:
      FUN_1803155c0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined8 *)(lVar7 + 0x20) = LIT_"'Move'";
    func_0x000180314690(lVar7 + 0x20);
    if (*(uint *)(lVar7 + 0x18) < 2) goto code_r0x0001804cb8f9;
    *(undefined8 *)(lVar7 + 0x28) = LIT_"'Jump'";
    func_0x000180314690(lVar7 + 0x28);
    if (*(uint *)(lVar7 + 0x18) < 3) goto code_r0x0001804cb8f9;
    *(undefined8 *)(lVar7 + 0x30) = LIT_"'Test'";
    func_0x000180314690(lVar7 + 0x30);
    for (uVar11 = 0; (int)uVar11 < *(int *)(lVar7 + 0x18); uVar11 = uVar11 + 1) {
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto code_r0x0001804cb8f9;
      if (param_1 == 0) goto code_r0x0001804cb794;
      lVar8 = UnityEngine_InputSystem_InputActionAsset__FindAction
                        (param_1,*(undefined8 *)(lVar7 + 0x20 + (longlong)(int)uVar11 * 8),0);
      if (lVar8 != 0) {
        lVar9 = func_0x000180314710(TI_string__,2);
        if (lVar9 == 0) goto code_r0x0001804cb794;
        if (*(int *)(lVar9 + 0x18) == 0) goto code_r0x0001804cb8f9;
        *(undefined8 *)(lVar9 + 0x20) = LIT_"''";
        func_0x000180314690(lVar9 + 0x20);
        if (*(uint *)(lVar9 + 0x18) < 2) goto code_r0x0001804cb8f9;
        *(undefined8 *)(lVar9 + 0x28) = LIT_"''";
        func_0x000180314690(lVar9 + 0x28);
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        SparkTeclas__MontaBindings__1804ccab0(lVar8,lVar9);
      }
    }
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkTeclas__MontaLista__1804cd140(0);
    lVar7 = *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x10);
    if (lVar7 == 0) goto code_r0x0001804cb794;
    FUN_180bada40(&uStack_148,lVar7,MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
    uStack_1a8 = CONCAT44(uStack_144,uStack_148);
    uStack_1a0 = CONCAT44(uStack_13c,uStack_140);
    lStack_198 = lStack_138;
    uStack_180 = 0;
    puStack_178 = &uStack_1a8;
    while (cVar4 = FUN_1812fa7e0(&uStack_1a8,MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext), lVar7 = lStack_198,
          cVar4 != '\0') {
      if (lStack_198 == 0) goto code_r0x0001804cb7eb;
      if (*(longlong *)(lStack_198 + 0x20) == 0) goto code_r0x0001804cb7e6;
      lVar8 = func_0x000181e83e90(*(longlong *)(lStack_198 + 0x20),0);
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (lVar8 == **(longlong **)(TI_SparkTeclas + 0xb8)) {
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        if (*(longlong *)(lVar7 + 0x20) == 0) goto code_r0x0001804cb7a0;
        lVar8 = *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x18);
        if (lVar8 == 0) goto code_r0x0001804cb79a;
        lVar8 = FUN_18126bf20(lVar8,*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0x10));
      }
      else {
        uVar6 = *(undefined8 *)(lVar7 + 0x20);
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar8 = SparkTeclas__Deriva__1804cbf60(uVar6,0);
      }
      if (lVar8 == 0) goto code_r0x0001804cb7e1;
      if (*(int *)(lVar8 + 0x18) == 0) goto code_r0x0001804cb7a5;
      lVar9 = *(longlong *)(lVar7 + 0x30);
      if (lVar9 == 0) goto code_r0x0001804cb7dc;
      if (*(int *)(lVar9 + 0x18) == 0) goto code_r0x0001804cb7aa;
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      func_0x000180314690(lVar9 + 0x20);
      if (*(uint *)(lVar8 + 0x18) < 2) goto code_r0x0001804cb7af;
      lVar9 = *(longlong *)(lVar7 + 0x30);
      if (lVar9 == 0) goto code_r0x0001804cb7d7;
      if (*(uint *)(lVar9 + 0x18) < 2) goto code_r0x0001804cb7b4;
      *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      func_0x000180314690(lVar9 + 0x28);
      if (*(int *)(lVar8 + 0x18) == 0) goto code_r0x0001804cb7b9;
      lVar9 = *(longlong *)(lVar7 + 0x28);
      if (lVar9 == 0) goto code_r0x0001804cb7d2;
      if (*(int *)(lVar9 + 0x18) == 0) goto code_r0x0001804cb7be;
      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      func_0x000180314690(lVar9 + 0x20);
      if (*(uint *)(lVar8 + 0x18) < 2) goto code_r0x0001804cb7c3;
      lVar7 = *(longlong *)(lVar7 + 0x28);
      if (lVar7 == 0) goto code_r0x0001804cb7cd;
      if (*(uint *)(lVar7 + 0x18) < 2) goto code_r0x0001804cb7c8;
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
      func_0x000180314690(lVar7 + 0x28);
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_1a8,MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
    lVar7 = UnityEngine_PlayerPrefs__GetString(LIT_"'spark.opt.teclas'",LIT_"''",0);
    cVar4 = func_0x000181707e50(lVar7,0);
    if (cVar4 != '\0') {
      uVar6 = UnityEngine_PlayerPrefs__GetString(LIT_"'spark.opt.binds'",LIT_"''",0);
      cVar4 = func_0x000181707e50(uVar6,0);
      if (cVar4 != '\0') {
code_r0x0001804cb3ef:
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660(TI_SparkTeclas);
        }
        lVar7 = *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x10);
        if (lVar7 != 0) {
          FUN_180bada40(&uStack_160,lVar7,MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
          uStack_1a8 = CONCAT44(uStack_15c,uStack_160);
          uStack_1a0 = CONCAT44(uStack_154,uStack_158);
          lStack_198 = lStack_150;
          uStack_180 = 0;
          puStack_178 = &uStack_1a8;
          while (cVar4 = FUN_1812fa7e0(&uStack_1a8,MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext), lVar7 = lStack_198,
                cVar4 != '\0') {
            if (lStack_198 == 0) goto code_r0x0001804cb8e1;
            if (*(longlong *)(lStack_198 + 0x20) == 0) goto code_r0x0001804cb8dc;
            lVar8 = func_0x000181e83e90(*(longlong *)(lStack_198 + 0x20),0);
            if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
              func_0x000180315660(TI_SparkTeclas);
            }
            if (lVar8 != **(longlong **)(TI_SparkTeclas + 0xb8)) {
              if (*(longlong *)(lVar7 + 0x20) == 0) goto code_r0x0001804cb8d7;
              cVar4 = System_String__op_Inequality
                                (*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0x10),
                                 LIT_"'Attack'",0);
              if (cVar4 == '\0') {
                for (uVar11 = 0; (int)uVar11 < 2; uVar11 = uVar11 + 1) {
                  lVar8 = *(longlong *)(lVar7 + 0x30);
                  if (lVar8 == 0) goto code_r0x0001804cb8bc;
                  if (*(uint *)(lVar8 + 0x18) <= uVar11) goto code_r0x0001804cb8a1;
                  cVar4 = func_0x0001817058a0(*(undefined8 *)
                                               (lVar8 + 0x20 + (longlong)(int)uVar11 * 8));
                  if (cVar4 != '\0') {
                    lVar8 = *(longlong *)(lVar7 + 0x30);
                    if (lVar8 == 0) goto code_r0x0001804cb8b7;
                    if (*(uint *)(lVar8 + 0x18) <= uVar11) goto code_r0x0001804cb8b2;
                    *(undefined8 *)(lVar8 + 0x20 + (longlong)(int)uVar11 * 8) = LIT_"''";
                    func_0x000180314690(lVar8 + (longlong)(int)uVar11 * 8 + 0x20);
                  }
                }
                iVar5 = UnityEngine_PlayerPrefs__GetInt(LIT_"'spark.opt.teclas.atacarsemf'",0);
                if (iVar5 == 0) {
                  for (uVar11 = 0; (int)uVar11 < 2; uVar11 = uVar11 + 1) {
                    lVar8 = *(longlong *)(lVar7 + 0x28);
                    if (lVar8 == 0) goto code_r0x0001804cb8d1;
                    if (*(uint *)(lVar8 + 0x18) <= uVar11) goto code_r0x0001804cb8c2;
                    cVar4 = func_0x0001817058a0(*(undefined8 *)
                                                 (lVar8 + 0x20 + (longlong)(int)uVar11 * 8),
                                                LIT_"'<Keyboard>/f'");
                    if (cVar4 != '\0') {
                      lVar8 = *(longlong *)(lVar7 + 0x28);
                      if (lVar8 == 0) goto code_r0x0001804cb8cc;
                      if (*(uint *)(lVar8 + 0x18) <= uVar11) goto code_r0x0001804cb8c7;
                      *(undefined8 *)(lVar8 + 0x20 + (longlong)(int)uVar11 * 8) = LIT_"''";
                      func_0x000180314690(lVar8 + (longlong)(int)uVar11 * 8 + 0x20);
                    }
                  }
                  UnityEngine_PlayerPrefs__SetInt(LIT_"'spark.opt.teclas.atacarsemf'",1);
                }
              }
            }
          }
          Gear__UpdateWeaponType__1803dadf0(puStack_178,MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
          if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
            func_0x000180315660(TI_SparkTeclas);
          }
          lVar7 = *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x10);
          if (lVar7 != 0) {
            FUN_180bada40(&uStack_160,lVar7,MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
            uStack_1a8 = CONCAT44(uStack_15c,uStack_160);
            uStack_1a0 = CONCAT44(uStack_154,uStack_158);
            lStack_198 = lStack_150;
            uStack_190 = 0;
            puStack_188 = &uStack_1a8;
            while( true ) {
              cVar4 = FUN_1812fa7e0(&uStack_1a8,MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext);
              if (cVar4 == '\0') {
                Gear__UpdateWeaponType__1803dadf0(&uStack_1a8,MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
                if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
                  func_0x000180315660();
                }
                SparkTeclas__Salva__1804ce320(0);
                return;
              }
              if (lStack_198 == 0) break;
              uVar6 = *(undefined8 *)(lStack_198 + 0x20);
              uVar1 = *(undefined8 *)(lStack_198 + 0x28);
              if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
                func_0x000180315660();
              }
              SparkTeclas__MontaBindings__1804ccab0(uVar6,uVar1,0);
            }
            goto code_r0x0001804cb8ed;
          }
        }
        goto code_r0x0001804cb794;
      }
      UnityEngine_InputSystem_InputActionRebindingExtensions__LoadBindingOverridesFromJson
                (param_1,uVar6,1,0);
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTeclas);
      }
      lVar7 = *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x10);
      if (lVar7 != 0) {
        FUN_180bada40(&uStack_148,lVar7,MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
        uStack_1a8 = CONCAT44(uStack_144,uStack_148);
        uStack_1a0 = CONCAT44(uStack_13c,uStack_140);
        lStack_198 = lStack_138;
        uStack_180 = 0;
        puStack_178 = &uStack_1a8;
        while (cVar4 = FUN_1812fa7e0(&uStack_1a8,MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext), lVar7 = lStack_198,
              cVar4 != '\0') {
          lStack_118 = lStack_198;
          if (lStack_198 == 0) goto code_r0x0001804cb829;
          if (*(longlong *)(lStack_198 + 0x20) == 0) goto code_r0x0001804cb824;
          lVar8 = func_0x000181e83e90(*(longlong *)(lStack_198 + 0x20),0);
          if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
            func_0x000180315660(TI_SparkTeclas);
          }
          if (lVar8 != **(longlong **)(TI_SparkTeclas + 0xb8)) {
            if (*(longlong *)(lVar7 + 0x20) == 0) goto code_r0x0001804cb81f;
            bVar3 = false;
            puVar10 = (undefined8 *)
                      UnityEngine_InputSystem_InputAction__get_bindings
                                (&uStack_148,*(longlong *)(lVar7 + 0x20),0);
            uStack_f0 = *puVar10;
            uStack_e8 = puVar10[1];
            FUN_180d7b470(&uStack_160,&uStack_f0);
            uStack_130 = CONCAT44(uStack_15c,uStack_160);
            uStack_128 = CONCAT44(uStack_154,uStack_158);
            lStack_120 = lStack_150;
            uStack_190 = 0;
            puStack_188 = &uStack_130;
            while (cVar4 = func_0x0001812f8c20(&uStack_130,MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputBinding>.MoveNext), cVar4 != '\0') {
              FUN_1812fe300(auStack_88,&uStack_130);
              if (lStack_48 != 0) {
                bVar3 = true;
              }
            }
            Gear__UpdateWeaponType__1803dadf0(&uStack_130,MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputBinding>.Dispose);
            if (bVar3) {
              uVar6 = *(undefined8 *)(lVar7 + 0x20);
              if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
                func_0x000180315660();
              }
              lVar8 = SparkTeclas__Deriva__1804cbf60(uVar6,1);
              if (lVar8 == 0) goto code_r0x0001804cb81a;
              if (*(int *)(lVar8 + 0x18) == 0) goto code_r0x0001804cb7fc;
              lVar9 = *(longlong *)(lVar7 + 0x28);
              if (lVar9 == 0) goto code_r0x0001804cb815;
              if (*(int *)(lVar9 + 0x18) == 0) goto code_r0x0001804cb801;
              *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
              func_0x000180314690(lVar9 + 0x20);
              if (*(uint *)(lVar8 + 0x18) < 2) goto code_r0x0001804cb806;
              lVar7 = *(longlong *)(lVar7 + 0x28);
              if (lVar7 == 0) goto code_r0x0001804cb810;
              if (*(uint *)(lVar7 + 0x18) < 2) goto code_r0x0001804cb80b;
              *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
              func_0x000180314690(lVar7 + 0x28);
            }
          }
        }
        Gear__UpdateWeaponType__1803dadf0(puStack_178,MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
        UnityEngine_InputSystem_InputActionRebindingExtensions__RemoveAllBindingOverrides(param_1,0)
        ;
        goto code_r0x0001804cb3ef;
      }
      goto code_r0x0001804cb834;
    }
    lVar8 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<string,string>);
    FUN_18124bf80(lVar8,MR_System.Collections.Generic.Dictionary<string,string>..ctor);
    if ((lVar7 == 0) || (lVar7 = System_String__Split(lVar7,10,0,0), lVar7 == 0))
    goto code_r0x0001804cb794;
    for (uVar11 = 0; (int)uVar11 < *(int *)(lVar7 + 0x18); uVar11 = uVar11 + 1) {
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto code_r0x0001804cb8f9;
      lVar9 = *(longlong *)(lVar7 + 0x20 + (longlong)(int)uVar11 * 8);
      if (lVar9 == 0) goto code_r0x0001804cb794;
      iVar5 = func_0x0001817079f0(lVar9,0x3d,0);
      if (0 < iVar5) {
        uVar6 = System_String__Substring(lVar9,0,iVar5,0);
        func_0x00018170c060(lVar9,iVar5 + 1,0);
        if (lVar8 == 0) goto code_r0x0001804cb794;
        FUN_18126c020(lVar8,uVar6);
      }
    }
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660(TI_SparkTeclas);
    }
    lVar7 = *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x10);
    if (lVar7 == 0) goto code_r0x0001804cb794;
    FUN_180bada40(&uStack_160,lVar7,MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
    uStack_1a8 = CONCAT44(uStack_15c,uStack_160);
    uStack_1a0 = CONCAT44(uStack_154,uStack_158);
    lStack_198 = lStack_150;
    uStack_190 = 0;
    puStack_188 = &uStack_1a8;
    do {
      cVar4 = FUN_1812fa7e0(&uStack_1a8,MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext);
      lVar7 = lStack_198;
      if (cVar4 == '\0') {
        Gear__UpdateWeaponType__1803dadf0(&uStack_1a8,MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
        iVar5 = UnityEngine_PlayerPrefs__GetInt(LIT_"'spark.opt.teclas.statussemp'",0,0);
        if (iVar5 != 0) goto code_r0x0001804cb3ef;
        if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
          func_0x000180315660(TI_SparkTeclas);
        }
        lVar7 = *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x10);
        if (lVar7 == 0) goto code_r0x0001804cb8ac;
        FUN_180bada40(&uStack_160,lVar7,MR_System.Collections.Generic.List<SparkTeclas.Item>.GetEnumerator);
        uStack_1a8 = CONCAT44(uStack_15c,uStack_160);
        uStack_1a0 = CONCAT44(uStack_154,uStack_158);
        lStack_198 = lStack_150;
        uStack_190 = 0;
        puStack_188 = &uStack_1a8;
        goto code_r0x0001804cb320;
      }
      if (lStack_198 == 0) goto code_r0x0001804cb876;
      if (cRam00000001834b3308 == '\0') {
        FUN_180315380(LIT_"'/'");
        cRam00000001834b3308 = '\x01';
      }
      lVar9 = *(longlong *)(lVar7 + 0x20);
      if (lVar9 == 0) goto code_r0x0001804cb871;
      lVar9 = func_0x000181e83e90(lVar9,0);
      if (lVar9 == 0) goto code_r0x0001804cb86c;
      lVar7 = *(longlong *)(lVar7 + 0x20);
      if (lVar7 == 0) goto code_r0x0001804cb867;
      uVar6 = System_String__Concat
                        (*(undefined8 *)(lVar9 + 0x10),LIT_"'/'",*(undefined8 *)(lVar7 + 0x10),
                         0);
      if (lVar8 == 0) goto code_r0x0001804cb862;
      cVar4 = FUN_1812698d0(lVar8,uVar6);
    } while (cVar4 == '\0');
  }
  else {
    if (*(int *)(TI_UnityEngine.InputSystem.InputSystem + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar7 = UnityEngine_InputSystem_InputSystem__get_settings(0);
    if (lVar7 != 0) {
      func_0x000181f5cb90(lVar7,1,0);
      goto code_r0x0001804ca83a;
    }
code_r0x0001804cb794:
    FUN_1803155d0();
code_r0x0001804cb79a:
    FUN_1803155d0();
code_r0x0001804cb7a0:
    FUN_1803155d0();
code_r0x0001804cb7a5:
    FUN_1803155c0();
code_r0x0001804cb7aa:
    FUN_1803155c0();
code_r0x0001804cb7af:
    FUN_1803155c0();
code_r0x0001804cb7b4:
    FUN_1803155c0();
code_r0x0001804cb7b9:
    FUN_1803155c0();
code_r0x0001804cb7be:
    FUN_1803155c0();
code_r0x0001804cb7c3:
    FUN_1803155c0();
code_r0x0001804cb7c8:
    FUN_1803155c0();
code_r0x0001804cb7cd:
    FUN_1803155d0();
code_r0x0001804cb7d2:
    FUN_1803155d0();
code_r0x0001804cb7d7:
    FUN_1803155d0();
code_r0x0001804cb7dc:
    FUN_1803155d0();
code_r0x0001804cb7e1:
    FUN_1803155d0();
code_r0x0001804cb7e6:
    FUN_1803155d0();
code_r0x0001804cb7eb:
    FUN_1803155d0();
    FUN_180311490();
    FUN_180311490();
code_r0x0001804cb7fc:
    FUN_1803155c0();
code_r0x0001804cb801:
    FUN_1803155c0();
code_r0x0001804cb806:
    FUN_1803155c0();
code_r0x0001804cb80b:
    FUN_1803155c0();
code_r0x0001804cb810:
    FUN_1803155d0();
code_r0x0001804cb815:
    FUN_1803155d0();
code_r0x0001804cb81a:
    FUN_1803155d0();
code_r0x0001804cb81f:
    FUN_1803155d0();
code_r0x0001804cb824:
    FUN_1803155d0();
code_r0x0001804cb829:
    FUN_1803155d0();
    FUN_180311490();
code_r0x0001804cb834:
    FUN_1803155d0();
    FUN_1803155c0();
    FUN_1803155c0();
    FUN_1803155c0();
    FUN_1803155c0();
    FUN_1803155d0();
    FUN_1803155d0();
    FUN_1803155d0();
  }
  FUN_1803155d0();
code_r0x0001804cb862:
  FUN_1803155d0();
code_r0x0001804cb867:
  FUN_1803155d0();
code_r0x0001804cb86c:
  FUN_1803155d0();
code_r0x0001804cb871:
  FUN_1803155d0();
code_r0x0001804cb876:
  FUN_1803155d0();
  FUN_180311490();
code_r0x0001804cb882:
  FUN_1803155c0();
code_r0x0001804cb887:
  FUN_1803155c0();
code_r0x0001804cb88c:
  FUN_1803155d0();
code_r0x0001804cb891:
  FUN_1803155d0();
code_r0x0001804cb896:
  FUN_1803155d0();
code_r0x0001804cb89b:
  FUN_1803155d0();
code_r0x0001804cb8a1:
  FUN_1803155c0();
  FUN_180311490();
code_r0x0001804cb8ac:
  FUN_1803155d0();
code_r0x0001804cb8b2:
  FUN_1803155c0();
code_r0x0001804cb8b7:
  FUN_1803155d0();
code_r0x0001804cb8bc:
  FUN_1803155d0();
code_r0x0001804cb8c2:
  FUN_1803155c0();
code_r0x0001804cb8c7:
  FUN_1803155c0();
code_r0x0001804cb8cc:
  FUN_1803155d0();
code_r0x0001804cb8d1:
  FUN_1803155d0();
code_r0x0001804cb8d7:
  FUN_1803155d0();
code_r0x0001804cb8dc:
  FUN_1803155d0();
code_r0x0001804cb8e1:
  FUN_1803155d0();
  FUN_180311490();
code_r0x0001804cb8ed:
  FUN_1803155d0();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
code_r0x0001804cb320:
  cVar4 = FUN_1812fa7e0(&uStack_1a8,MR_System.Collections.Generic.List<SparkTeclas.Item>.MoveNext);
  lVar7 = lStack_198;
  if (cVar4 != '\0') {
    if (lStack_198 == 0) goto code_r0x0001804cb89b;
    if (*(longlong *)(lStack_198 + 0x20) == 0) goto code_r0x0001804cb896;
    cVar4 = func_0x0001817058a0(*(undefined8 *)(*(longlong *)(lStack_198 + 0x20) + 0x10),
                                LIT_"'CharacterStatus'");
    if (cVar4 != '\0') {
      lVar8 = *(longlong *)(lVar7 + 0x28);
      if (lVar8 == 0) goto code_r0x0001804cb891;
      if (*(int *)(lVar8 + 0x18) == 0) goto code_r0x0001804cb882;
      cVar4 = func_0x0001817058a0(*(undefined8 *)(lVar8 + 0x20),LIT_"'<Keyboard>/p'");
      if (cVar4 != '\0') {
        lVar7 = *(longlong *)(lVar7 + 0x28);
        if (lVar7 == 0) goto code_r0x0001804cb88c;
        if (*(int *)(lVar7 + 0x18) == 0) goto code_r0x0001804cb887;
        *(undefined8 *)(lVar7 + 0x20) = LIT_"''";
        func_0x000180314690(lVar7 + 0x20);
      }
    }
    goto code_r0x0001804cb320;
  }
  Gear__UpdateWeaponType__1803dadf0(&uStack_1a8,MR_System.Collections.Generic.List<SparkTeclas.Item>.Dispose);
  UnityEngine_PlayerPrefs__SetInt(LIT_"'spark.opt.teclas.statussemp'",1,0);
  goto code_r0x0001804cb3ef;
}

