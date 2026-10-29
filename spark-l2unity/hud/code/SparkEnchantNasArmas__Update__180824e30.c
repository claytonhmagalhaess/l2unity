// SparkEnchantNasArmas__Update__180824e30 @ 0x180824e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkEnchantNasArmas__Update__180824e30(longlong param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  ushort uVar16;
  ushort uVar17;
  float fVar18;
  char cStackX_18;
  undefined4 uStack_150;
  longlong *plStack_148;
  longlong **pplStack_140;
  longlong lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined4 uStack_110;
  longlong *plStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  longlong *plStack_f0;
  longlong **pplStack_e8;
  longlong lStack_e0;
  longlong *plStack_d8;
  longlong **pplStack_d0;
  longlong lStack_c8;
  longlong *plStack_c0;
  longlong **pplStack_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong *plStack_98;
  longlong **pplStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  
  if (cRam00000001834b47ec == '\0') {
    FUN_180315380(TI_System.Comparison<System.ValueTuple<Entity,float>>);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.Transform,long>.Clear);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.Transform,long>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.Transform,long>.Remove);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Transform>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<Entity,float>>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.Transform,long>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<Entity,float>>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.Transform,long>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Transform>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.Transform,long>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Transform>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<Entity,float>>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.HashSet<UnityEngine.Transform>.Clear);
    FUN_180315380(MR_System.Collections.Generic.HashSet<UnityEngine.Transform>.Contains);
    FUN_180315380(TI_System.IDisposable);
    FUN_180315380(TI_System.Collections.Generic.IEnumerable<Entity>);
    FUN_180315380(TI_System.Collections.Generic.IEnumerator<Entity>);
    FUN_180315380(TI_System.Collections.IEnumerator);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<UnityEngine.Transform,long>.get_Key);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Transform>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<Entity,float>>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Transform>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Transform>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<Entity>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<Entity,float>>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<Entity,float>>.RemoveRange);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<Entity,float>>.Sort);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<Entity,float>>.get_Count);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkAjusteEfeitos);
    FUN_180315380(TI_SparkBotsArma);
    FUN_180315380(TI_SparkBrilhoEnchant);
    FUN_180315380(TI_SparkDesempenho);
    FUN_180315380(TI_SparkEnchantRetail);
    FUN_180315380(TI_SparkEnchantWp);
    FUN_180315380(MD_SparkEnchantNasArmas.__c._Update_b__14_0);
    FUN_180315380(TI_SparkEnchantNasArmas.<>c);
    cRam00000001834b47ec = '\x01';
  }
  plStack_108 = (longlong *)0x0;
  plStack_f0 = (longlong *)0x0;
  pplStack_e8 = (longlong **)0x0;
  lStack_e0 = 0;
  plStack_98 = (longlong *)0x0;
  pplStack_90 = (longlong **)0x0;
  lStack_88 = 0;
  uStack_80 = 0;
  plStack_c0 = (longlong *)0x0;
  pplStack_b8 = (longlong **)0x0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  plStack_d8 = (longlong *)0x0;
  pplStack_d0 = (longlong **)0x0;
  lStack_c8 = 0;
  fVar18 = (float)FUN_1824366b0(0);
  if (fVar18 < *(float *)(param_1 + 0x40)) {
    return;
  }
  fVar18 = (float)FUN_1824366b0(0);
  *(float *)(param_1 + 0x40) = fVar18 + 0.33;
  iVar7 = *(int *)(*(longlong *)(TI_SparkAjusteEfeitos + 0xb8) + 8);
  if (*(int *)(param_1 + 0x44) != iVar7) {
    *(int *)(param_1 + 0x44) = iVar7;
    if (*(longlong *)(param_1 + 0x20) == 0) goto code_r0x000180825e8c;
    FUN_18117b6e0(*(longlong *)(param_1 + 0x20),MR_System.Collections.Generic.Dictionary<UnityEngine.Transform,long>.Clear);
  }
  if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
    func_0x000180315660();
  }
  puVar11 = (undefined8 *)SparkDesempenho__PosicaoDoJogador(&uStack_118,0);
  lVar15 = *(longlong *)(param_1 + 0x28);
  if (lVar15 != 0) {
    uVar1 = *puVar11;
    uVar9 = *(undefined4 *)(puVar11 + 1);
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    iVar7 = *(int *)(lVar15 + 0x18);
    *(undefined4 *)(lVar15 + 0x18) = 0;
    uStack_100 = uVar1;
    uStack_f8 = uVar9;
    if (0 < iVar7) {
      System_Array__Clear(*(undefined8 *)(lVar15 + 0x10),0,iVar7,0);
    }
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    uVar13 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if (cVar4 != '\0') {
      if (DAT_1834b2f32 == '\0') {
        FUN_180315380(TI_PlayerEntity);
        DAT_1834b2f32 = '\x01';
      }
      uStack_118 = uVar1;
      uStack_110 = uVar9;
      SparkEnchantNasArmas__Considera
                (param_1,**(undefined8 **)(TI_PlayerEntity + 0xb8),&uStack_118,0);
    }
    if (cRam00000001834b31bd == '\0') {
      FUN_180315380(TI_WorldSpawner);
      cRam00000001834b31bd = '\x01';
    }
    uVar13 = **(undefined8 **)(TI_WorldSpawner + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Inequality(uVar13,0,0);
    if (cVar4 == '\0') {
code_r0x0001808254d0:
      if (*(int *)(TI_SparkDesempenho + 0xe4) == 0) {
        func_0x000180315660(TI_SparkDesempenho);
      }
      lVar15 = *(longlong *)(*(longlong *)(TI_SparkDesempenho + 0xb8) + 0x40);
      if (lVar15 != 0) {
        FUN_180bada40(&plStack_148,lVar15,MR_System.Collections.Generic.List<Entity>.GetEnumerator);
        plStack_f0 = plStack_148;
        pplStack_e8 = pplStack_140;
        lStack_e0 = lStack_138;
        plStack_148 = (longlong *)0x0;
        pplStack_140 = &plStack_f0;
        while (cVar4 = FUN_1812fa7e0(&plStack_f0,MR_System.Collections.Generic.List<Entity>.MoveNext), cVar4 != '\0') {
          uStack_118 = uVar1;
          uStack_110 = uVar9;
          SparkEnchantNasArmas__Considera(param_1,lStack_e0,&uStack_118);
        }
        Gear__UpdateWeaponType__1803dadf0(&plStack_f0,MR_System.Collections.Generic.List<Entity>.Dispose);
        if (*(int *)(TI_SparkBotsArma + 0xe4) == 0) {
          func_0x000180315660();
        }
        iVar7 = SparkBotsArma__get_Quantos(0);
        if (iVar7 < 1) {
          iVar7 = 0x28;
        }
        else {
          if (*(int *)(TI_SparkBotsArma + 0xe4) == 0) {
            func_0x000180315660();
          }
          iVar7 = SparkBotsArma__get_Quantos(0);
          iVar7 = iVar7 + 0x28;
        }
        lVar15 = *(longlong *)(param_1 + 0x28);
        if (lVar15 != 0) {
          if (iVar7 < *(int *)(lVar15 + 0x18)) {
            if (*(int *)(TI_SparkEnchantNasArmas.<>c + 0xe4) == 0) {
              func_0x000180315660();
            }
            lVar14 = *(longlong *)(*(longlong *)(TI_SparkEnchantNasArmas.<>c + 0xb8) + 8);
            if (lVar14 == 0) {
              if (*(int *)(TI_SparkEnchantNasArmas.<>c + 0xe4) == 0) {
                func_0x000180315660();
              }
              uVar1 = **(undefined8 **)(TI_SparkEnchantNasArmas.<>c + 0xb8);
              lVar14 = func_0x000180315580(TI_System.Comparison<System.ValueTuple<Entity,float>>);
              FUN_180e56940(lVar14,uVar1,MD_SparkEnchantNasArmas.__c._Update_b__14_0,0);
              *(longlong *)(*(longlong *)(TI_SparkEnchantNasArmas.<>c + 0xb8) + 8) = lVar14;
              func_0x000180314690(*(longlong *)(TI_SparkEnchantNasArmas.<>c + 0xb8) + 8,lVar14);
            }
            FUN_180bb3810(lVar15,lVar14,MR_System.Collections.Generic.List<System.ValueTuple<Entity,float>>.Sort);
            if (*(longlong *)(param_1 + 0x28) == 0) goto code_r0x000180825e8c;
            FUN_180bb1f20(*(undefined8 *)(param_1 + 0x28),iVar7,
                          *(int *)(*(longlong *)(param_1 + 0x28) + 0x18) - iVar7,
                          MR_System.Collections.Generic.List<System.ValueTuple<Entity,float>>.RemoveRange);
          }
          if (*(longlong *)(param_1 + 0x30) != 0) {
            FUN_1814ceb00(*(longlong *)(param_1 + 0x30),MR_System.Collections.Generic.HashSet<UnityEngine.Transform>.Clear);
            if (*(longlong *)(param_1 + 0x28) != 0) {
              FUN_180badb20(&plStack_148,*(longlong *)(param_1 + 0x28),MR_System.Collections.Generic.List<System.ValueTuple<Entity,float>>.GetEnumerator);
              plStack_98 = plStack_148;
              pplStack_90 = pplStack_140;
              lStack_88 = lStack_138;
              uStack_80 = uStack_130;
              plStack_148 = (longlong *)0x0;
              pplStack_140 = &plStack_98;
              while (cVar4 = FUN_1812ec720(&plStack_98,MR_System.Collections.Generic.List<System.ValueTuple<Entity,float>>.MoveNext), lVar15 = lStack_88,
                    cVar4 != '\0') {
                if (lStack_88 == 0) {
code_r0x000180825e63:
                  FUN_1803155d0();
                  FUN_180311490();
                  goto code_r0x000180825e6f;
                }
                if (*(longlong *)(lStack_88 + 0x30) == 0) {
code_r0x000180825e5e:
                  FUN_1803155d0();
                  goto code_r0x000180825e63;
                }
                uVar9 = *(undefined4 *)(*(longlong *)(lStack_88 + 0x30) + 0x68);
                lVar14 = Entity__get_Gear(lStack_88,0);
                if (lVar14 == 0) {
code_r0x000180825e59:
                  FUN_1803155d0();
                  goto code_r0x000180825e5e;
                }
                uVar8 = func_0x0001807d9b00(lVar14,0);
                if (*(int *)(TI_SparkBrilhoEnchant + 0xe4) == 0) {
                  func_0x000180315660();
                }
                cVar4 = func_0x000180802560(uVar8,0);
                if (cVar4 == '\0') {
                  lVar14 = Entity__get_Gear(lVar15,0);
                  if (lVar14 != 0) {
                    uVar8 = func_0x0001807d9ad0(lVar14,0);
                    if (*(int *)(TI_SparkBrilhoEnchant + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    cStackX_18 = func_0x000180802560(uVar8,0);
                    goto code_r0x00018082584b;
                  }
code_r0x000180825e54:
                  FUN_1803155d0();
                  goto code_r0x000180825e59;
                }
                cStackX_18 = '\x01';
code_r0x00018082584b:
                cVar4 = SparkEnchantNasArmas__Infinita(lVar15,0);
                if (cVar4 != '\0') {
                  uVar9 = 0xf;
                }
                lVar14 = Entity__get_Gear(lVar15,0);
                if (lVar14 == 0) {
code_r0x000180825e4f:
                  FUN_1803155d0();
                  goto code_r0x000180825e54;
                }
                iVar7 = func_0x0001807d9b00(lVar14,0);
                if (iVar7 < 1) {
                  lVar14 = Entity__get_Gear(lVar15,0);
                  if (lVar14 != 0) {
                    iVar7 = func_0x0001807d9ad0(lVar14,0);
                    goto code_r0x0001808258cd;
                  }
code_r0x000180825e4a:
                  FUN_1803155d0();
                  goto code_r0x000180825e4f;
                }
                lVar14 = Entity__get_Gear(lVar15);
                if (lVar14 == 0) {
                  FUN_1803155d0();
code_r0x000180825e0e:
                  FUN_1803155d0();
code_r0x000180825e13:
                  FUN_1803155d0();
code_r0x000180825e18:
                  FUN_1803155d0();
code_r0x000180825e1d:
                  FUN_1803155d0();
code_r0x000180825e22:
                  FUN_1803155d0();
code_r0x000180825e27:
                  FUN_1803155d0();
code_r0x000180825e2c:
                  FUN_1803155d0();
code_r0x000180825e31:
                  FUN_1803155d0();
code_r0x000180825e36:
                  FUN_1803155d0();
code_r0x000180825e3b:
                  FUN_1803155d0();
code_r0x000180825e40:
                  FUN_1803155d0();
code_r0x000180825e45:
                  FUN_1803155d0();
                  goto code_r0x000180825e4a;
                }
                iVar7 = func_0x0001807d9b00(lVar14,0);
code_r0x0001808258cd:
                if (*(int *)(TI_SparkEnchantRetail + 0xe4) == 0) {
                  func_0x000180315660();
                }
                if ((iVar7 == 0x1ffe) || (iVar7 == 0x21f1)) {
                  lVar14 = Entity__get_Gear(lVar15,0);
                  if (lVar14 == 0) goto code_r0x000180825e45;
                  if (*(longlong *)(lVar15 + 0x30) == 0) goto code_r0x000180825e40;
                  SparkEnchantNasArmas__AplicaAmaldicoada
                            (param_1,*(undefined8 *)(lVar14 + 0x60),iVar7,
                             *(undefined4 *)(*(longlong *)(lVar15 + 0x30) + 0x70),0,0);
                  lVar14 = Entity__get_Gear(lVar15,0);
                  if (lVar14 == 0) goto code_r0x000180825e3b;
                  if (*(longlong *)(lVar15 + 0x30) == 0) goto code_r0x000180825e36;
                  SparkEnchantNasArmas__AplicaAmaldicoada
                            (param_1,*(undefined8 *)(lVar14 + 0x78),iVar7,
                             *(undefined4 *)(*(longlong *)(lVar15 + 0x30) + 0x70),1,0);
                }
                else {
                  if (*(int *)(TI_SparkEnchantWp + 0xe4) == 0) {
                    func_0x000180315660();
                  }
                  lVar14 = SparkEnchantWp__get_A(0);
                  if (lVar14 == 0) goto code_r0x000180825e31;
                  if ((*(char *)(lVar14 + 0x20) == '\0') || (cStackX_18 != '\0')) {
                    cVar5 = '\0';
code_r0x00018082596a:
                    uStack_150 = 0;
                  }
                  else {
                    if (*(int *)(TI_SparkEnchantRetail + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    cVar5 = SparkEnchantRetail__Conhece(iVar7,0);
                    if (cVar5 == '\0') goto code_r0x00018082596a;
                    uStack_150 = SparkEnchantNasArmas__Augment(lVar15,iVar7,0);
                  }
                  lVar14 = Entity__get_Gear(lVar15,0);
                  if (lVar14 == 0) goto code_r0x000180825e2c;
                  uStack_100 = *(undefined8 *)(lVar14 + 0x60);
                  lVar14 = Entity__get_Gear(lVar15,0);
                  if (lVar14 == 0) goto code_r0x000180825e27;
                  uVar2 = *(undefined1 *)(lVar14 + 0x5c);
                  lVar14 = Entity__get_Gear(lVar15,0);
                  if (lVar14 == 0) goto code_r0x000180825e22;
                  uVar6 = func_0x0001807d9b20(lVar14,0);
                  iVar10 = iVar7;
                  if (cVar5 == '\0') {
                    iVar10 = 0;
                  }
                  if (param_1 == 0) goto code_r0x000180825e1d;
                  SparkEnchantNasArmas__Aplica
                            (param_1,uStack_100,uVar9,uVar2,uVar6,cStackX_18,cVar4,iVar10,0,
                             uStack_150,0);
                  lVar14 = Entity__get_Gear(lVar15,0);
                  if (lVar14 == 0) goto code_r0x000180825e18;
                  uVar1 = *(undefined8 *)(lVar14 + 0x78);
                  lVar14 = Entity__get_Gear(lVar15,0);
                  if (lVar14 == 0) goto code_r0x000180825e13;
                  uVar2 = *(undefined1 *)(lVar14 + 0x70);
                  lVar15 = Entity__get_Gear(lVar15,0);
                  if (lVar15 == 0) goto code_r0x000180825e0e;
                  uVar6 = func_0x0001807d9b20(lVar15,0);
                  if (cVar5 == '\0') {
                    iVar7 = 0;
                  }
                  SparkEnchantNasArmas__Aplica
                            (param_1,uVar1,uVar9,uVar2,uVar6,cStackX_18,cVar4,iVar7,1,uStack_150,0);
                }
              }
              Gear__UpdateWeaponType__1803dadf0(&plStack_98,MR_System.Collections.Generic.List<System.ValueTuple<Entity,float>>.Dispose);
              lVar15 = *(longlong *)(param_1 + 0x38);
              if (lVar15 != 0) {
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                iVar7 = *(int *)(lVar15 + 0x18);
                *(undefined4 *)(lVar15 + 0x18) = 0;
                if (0 < iVar7) {
                  System_Array__Clear(*(undefined8 *)(lVar15 + 0x10),0,iVar7,0);
                }
                if (*(longlong *)(param_1 + 0x20) != 0) {
                  FUN_18117ccd0(&plStack_148,*(longlong *)(param_1 + 0x20),MR_System.Collections.Generic.Dictionary<UnityEngine.Transform,long>.GetEnumerator);
                  plStack_c0 = plStack_148;
                  pplStack_b8 = pplStack_140;
                  lStack_b0 = lStack_138;
                  uStack_a8 = uStack_130;
                  uStack_a0 = uStack_128;
                  plStack_148 = (longlong *)0x0;
                  pplStack_140 = &plStack_c0;
                  while (cVar4 = FUN_18133b700(&plStack_c0,MR_System.Collections.Generic.Dictionary<UnityEngine.Transform,long>.MoveNext), lVar15 = lStack_b0
                        , cVar4 != '\0') {
                    if (*(longlong *)(param_1 + 0x30) == 0) goto code_r0x000180825e74;
                    cVar4 = FUN_1814cf450(*(longlong *)(param_1 + 0x30),lStack_b0,
                                          MR_System.Collections.Generic.HashSet<UnityEngine.Transform>.Contains);
                    if (cVar4 == '\0') {
                      if (*(longlong *)(param_1 + 0x38) == 0) goto code_r0x000180825e6f;
                      FUN_180002eb0(*(longlong *)(param_1 + 0x38),lVar15,MR_System.Collections.Generic.List<UnityEngine.Transform>.Add);
                    }
                  }
                  Gear__UpdateWeaponType__1803dadf0(&plStack_c0,MR_System.Collections.Generic.Dictionary<UnityEngine.Transform,long>.Dispose);
                  if (*(longlong *)(param_1 + 0x38) != 0) {
                    FUN_180bada40(&plStack_148,*(longlong *)(param_1 + 0x38),MR_System.Collections.Generic.List<UnityEngine.Transform>.GetEnumerator);
                    plStack_d8 = plStack_148;
                    pplStack_d0 = pplStack_140;
                    lStack_c8 = lStack_138;
                    plStack_148 = (longlong *)0x0;
                    pplStack_140 = &plStack_d8;
                    while( true ) {
                      cVar4 = FUN_1812fa7e0(&plStack_d8,MR_System.Collections.Generic.List<UnityEngine.Transform>.MoveNext);
                      lVar15 = lStack_c8;
                      if (cVar4 == '\0') {
                        Gear__UpdateWeaponType__1803dadf0(&plStack_d8,MR_System.Collections.Generic.List<UnityEngine.Transform>.Dispose);
                        return;
                      }
                      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                        func_0x000180315660();
                      }
                      cVar4 = UnityEngine_Object__op_Inequality(lVar15,0,0);
                      if (cVar4 != '\0') {
                        if (*(int *)(TI_SparkBrilhoEnchant + 0xe4) == 0) {
                          func_0x000180315660();
                        }
                        SparkBrilhoEnchant__Aplica(lVar15,0,0,0,0,0);
                      }
                      if (*(longlong *)(param_1 + 0x20) == 0) break;
                      FUN_181252d30(*(longlong *)(param_1 + 0x20),lVar15);
                    }
                    goto code_r0x000180825e80;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      if (cRam00000001834b31bd == '\0') {
        FUN_180315380(TI_WorldSpawner);
        cRam00000001834b31bd = '\x01';
      }
      if ((**(longlong **)(TI_WorldSpawner + 0xb8) != 0) &&
         (plVar12 = (longlong *)
                    WorldSpawner__get_Entidades(**(longlong **)(TI_WorldSpawner + 0xb8),0),
         plVar12 != (longlong *)0x0)) {
        lVar15 = *plVar12;
        uVar17 = 0;
        if (*(ushort *)(lVar15 + 0x12e) != 0) {
          uVar16 = uVar17;
          do {
            if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                TI_System.Collections.Generic.IEnumerable<Entity>) {
              puVar11 = (undefined8 *)
                        ((longlong)
                         *(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10) *
                         0x10 + 0x138 + lVar15);
              goto code_r0x000180825306;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < *(ushort *)(lVar15 + 0x12e));
        }
        puVar11 = (undefined8 *)FUN_180312860(plVar12,TI_System.Collections.Generic.IEnumerable<Entity>,0);
code_r0x000180825306:
        plStack_108 = (longlong *)(*(code *)*puVar11)(plVar12,puVar11[1]);
        plStack_148 = (longlong *)0x0;
        pplStack_140 = &plStack_108;
        do {
          plVar12 = plStack_108;
          if (plStack_108 == (longlong *)0x0) {
code_r0x000180825df7:
            FUN_1803155d0();
            FUN_180311490();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar15 = *plStack_108;
          if (*(ushort *)(lVar15 + 0x12e) != 0) {
            uVar16 = uVar17;
            do {
              if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                  TI_System.Collections.IEnumerator) {
                puVar11 = (undefined8 *)
                          ((longlong)
                           *(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10) *
                           0x10 + 0x138 + lVar15);
                goto code_r0x000180825396;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < *(ushort *)(lVar15 + 0x12e));
          }
          puVar11 = (undefined8 *)FUN_180312860(plStack_108,TI_System.Collections.IEnumerator,0);
code_r0x000180825396:
          cVar4 = (*(code *)*puVar11)(plVar12,puVar11[1]);
          plVar12 = plStack_108;
          if (cVar4 == '\0') {
            FUN_1803fb400(&pplStack_140);
            goto code_r0x0001808254d0;
          }
          if (plStack_108 == (longlong *)0x0) {
            FUN_1803155d0();
            goto code_r0x000180825df7;
          }
          lVar15 = *plStack_108;
          if (*(ushort *)(lVar15 + 0x12e) != 0) {
            uVar16 = uVar17;
            do {
              if (*(longlong *)(*(longlong *)(lVar15 + 0xb0) + (ulonglong)uVar16 * 0x10) ==
                  TI_System.Collections.Generic.IEnumerator<Entity>) {
                puVar11 = (undefined8 *)
                          ((longlong)
                           *(int *)(*(longlong *)(lVar15 + 0xb0) + 8 + (ulonglong)uVar16 * 0x10) *
                           0x10 + 0x138 + lVar15);
                goto code_r0x000180825406;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < *(ushort *)(lVar15 + 0x12e));
          }
          puVar11 = (undefined8 *)FUN_180312860(plStack_108,TI_System.Collections.Generic.IEnumerator<Entity>,0);
code_r0x000180825406:
          uVar13 = (*(code *)*puVar11)(plVar12,puVar11[1]);
          uStack_118 = uVar1;
          uStack_110 = uVar9;
          SparkEnchantNasArmas__Considera(param_1,uVar13,&uStack_118,0);
        } while( true );
      }
    }
  }
code_r0x000180825e8c:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
code_r0x000180825e6f:
  FUN_1803155d0();
code_r0x000180825e74:
  FUN_1803155d0();
  FUN_180311490();
code_r0x000180825e80:
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

