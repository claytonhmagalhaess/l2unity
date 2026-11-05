// SparkMoveisDoMapa__Monta__180563430 @ 0x180563430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkMoveisDoMapa__Monta__180563430(undefined4 param_1,longlong param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  undefined8 uStackX_10;
  char cStackX_18;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  
  cStackX_18 = param_3;
  if (cRam00000001834b3893 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.GameObject>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.GameObject>.set_Item);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMoveisDoMapa.Movel>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMoveisDoMapa.Movel>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMoveisDoMapa.Movel>.get_Current);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<UnityEngine.MeshCollider>);
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<UnityEngine.Rigidbody>);
    FUN_180315380(MR_UnityEngine.GameObject.GetComponent<UnityEngine.MeshFilter>);
    FUN_180315380(TI_UnityEngine.GameObject);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.Transform,SparkMoveisDoMapa.Movel>>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMoveisDoMapa.Movel>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.Transform,SparkMoveisDoMapa.Movel>>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<System.ValueTuple<UnityEngine.Transform,SparkMoveisDoMapa.Movel>>);
    FUN_180315380(MR_UnityEngine.Object.Instantiate<UnityEngine.GameObject>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_UnityEngine.SceneManagement.SceneManager);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.GameObject>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_SparkMoveisDoMapa);
    FUN_180315380(MR_System.ValueTuple<UnityEngine.Transform,SparkMoveisDoMapa.Movel>..ctor);
    FUN_180315380(LIT_"'Data/MalhasL2/Moveis/'");
    FUN_180315380(LIT_"'SparkMoveisDoMapa'");
    FUN_180315380(LIT_"'[SPARK] peca movel nao montada (SPARK/Moveis/Montar): '");
    FUN_180315380(LIT_"'.'");
    cRam00000001834b3893 = '\x01';
  }
  uStackX_10 = 0;
  lVar9 = func_0x000180315580(TI_System.Collections.Generic.List<System.ValueTuple<UnityEngine.Transform,SparkMoveisDoMapa.Movel>>);
  FUN_180bba2e0(lVar9,MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.Transform,SparkMoveisDoMapa.Movel>>..ctor);
  lVar10 = func_0x000180315580(TI_UnityEngine.GameObject);
  lStack_e8 = lVar10;
  UnityEngine_GameObject___ctor(lVar10,LIT_"'SparkMoveisDoMapa'",0);
  if (*(int *)(TI_UnityEngine.SceneManagement.SceneManager + 0xe4) == 0) {
    func_0x000180315660();
  }
  UnityEngine_SceneManagement_SceneManager__MoveGameObjectToScene(lVar10,param_1,0);
  if (param_2 == 0) {
    FUN_1803155d0();
code_r0x000180563c9c:
    FUN_1803155c0();
code_r0x000180563ca2:
    FUN_1803155d0();
code_r0x000180563ca7:
    FUN_1803155c0();
code_r0x000180563cac:
    FUN_1803155c0();
code_r0x000180563cb1:
    FUN_1803155c0();
code_r0x000180563cb6:
    FUN_1803155c0();
code_r0x000180563cbb:
    FUN_1803155c0();
code_r0x000180563cc0:
    FUN_1803155c0();
code_r0x000180563cc5:
    FUN_1803155c0();
code_r0x000180563cca:
    FUN_1803155c0();
code_r0x000180563ccf:
    FUN_1803155c0();
code_r0x000180563cd4:
    FUN_1803155c0();
code_r0x000180563cd9:
    FUN_1803155d0();
code_r0x000180563cde:
    FUN_1803155d0();
code_r0x000180563ce3:
    FUN_1803155d0();
code_r0x000180563ce8:
    FUN_1803155d0();
code_r0x000180563ced:
    FUN_1803155d0();
code_r0x000180563cf2:
    FUN_1803155d0();
code_r0x000180563cf7:
    FUN_1803155d0();
code_r0x000180563cfc:
    FUN_1803155d0();
code_r0x000180563d01:
    FUN_1803155d0();
code_r0x000180563d06:
    FUN_1803155d0();
code_r0x000180563d0b:
    FUN_1803155d0();
code_r0x000180563d10:
    FUN_1803155d0();
code_r0x000180563d15:
    FUN_1803155d0();
code_r0x000180563d1a:
    FUN_1803155d0();
code_r0x000180563d1f:
    FUN_1803155d0();
code_r0x000180563d24:
    FUN_1803155d0();
code_r0x000180563d29:
    FUN_1803155d0();
code_r0x000180563d2e:
    FUN_1803155d0();
    FUN_180311490();
    pcVar4 = (code *)swi(3);
    lVar9 = (*pcVar4)();
    return lVar9;
  }
  lStack_e0 = lVar9;
  FUN_180bada40(&uStack_98,param_2,MR_System.Collections.Generic.List<SparkMoveisDoMapa.Movel>.GetEnumerator);
  uStack_c8 = uStack_98;
  uStack_c0 = uStack_90;
  lStack_b8 = lStack_88;
  uStack_f8 = 0;
  puStack_f0 = &uStack_c8;
code_r0x000180563680:
  do {
    cVar8 = FUN_1812fa7e0(&uStack_c8,MR_System.Collections.Generic.List<SparkMoveisDoMapa.Movel>.MoveNext);
    lVar10 = lStack_b8;
    if (cVar8 == '\0') {
      Gear__UpdateWeaponType__1803dadf0(&uStack_c8,MR_System.Collections.Generic.List<SparkMoveisDoMapa.Movel>.Dispose);
      return lVar9;
    }
    if (*(int *)(TI_SparkMoveisDoMapa + 0xe4) == 0) {
      func_0x000180315660(TI_SparkMoveisDoMapa);
    }
    if (lVar10 == 0) goto code_r0x000180563d2e;
    lVar14 = *(longlong *)(*(longlong *)(TI_SparkMoveisDoMapa + 0xb8) + 0x10);
    if (lVar14 == 0) goto code_r0x000180563d29;
    cVar8 = FUN_1812698d0(lVar14,*(undefined8 *)(lVar10 + 0x20),&uStackX_10,MR_System.Collections.Generic.Dictionary<string,UnityEngine.GameObject>.TryGetValue);
    if (cVar8 == '\0') {
      uVar11 = System_String__Concat(LIT_"'Data/MalhasL2/Moveis/'",*(undefined8 *)(lVar10 + 0x20),0);
      if (*(int *)(TI_SparkArte + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar11 = FUN_180a90ae0(uVar11,MR_SparkArte.Load<UnityEngine.GameObject>);
      uStackX_10 = uVar11;
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar8 = UnityEngine_Object__op_Equality(uVar11,0,0);
      if (cVar8 != '\0') {
        uVar11 = System_String__Concat(LIT_"'[SPARK] peca movel nao montada (SPARK/Moveis/Montar): '",*(undefined8 *)(lVar10 + 0x20),0);
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        UnityEngine_Debug__LogWarning(uVar11,0);
      }
      if (*(int *)(TI_SparkMoveisDoMapa + 0xe4) == 0) {
        func_0x000180315660(TI_SparkMoveisDoMapa);
      }
      lVar14 = *(longlong *)(*(longlong *)(TI_SparkMoveisDoMapa + 0xb8) + 0x10);
      if (lVar14 == 0) goto code_r0x000180563ca2;
      FUN_18126c020(lVar14,*(undefined8 *)(lVar10 + 0x20),uStackX_10,MR_System.Collections.Generic.Dictionary<string,UnityEngine.GameObject>.set_Item);
    }
    uVar11 = uStackX_10;
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar8 = UnityEngine_Object__op_Equality(uVar11,0,0);
    uVar11 = uStackX_10;
  } while (cVar8 != '\0');
  lVar14 = *(longlong *)(lVar10 + 0x28);
  if (lVar14 == 0) goto code_r0x000180563d24;
  if (*(int *)(lVar14 + 0x18) == 0) goto code_r0x000180563c9c;
  if (lVar14 == 0) goto code_r0x000180563d1f;
  if (*(uint *)(lVar14 + 0x18) < 2) goto code_r0x000180563ca7;
  if (lVar14 == 0) goto code_r0x000180563d1a;
  if (*(uint *)(lVar14 + 0x18) < 3) goto code_r0x000180563cac;
  lVar16 = *(longlong *)(lVar10 + 0x30);
  if (lVar16 == 0) goto code_r0x000180563d15;
  if (*(int *)(lVar16 + 0x18) == 0) goto code_r0x000180563cb1;
  if (lVar16 == 0) goto code_r0x000180563d10;
  if (*(uint *)(lVar16 + 0x18) < 2) goto code_r0x000180563cb6;
  if (lVar16 == 0) goto code_r0x000180563d0b;
  if (*(uint *)(lVar16 + 0x18) < 3) goto code_r0x000180563cbb;
  uVar1 = *(undefined4 *)(lVar14 + 0x20);
  uVar2 = *(undefined4 *)(lVar14 + 0x24);
  uVar3 = *(undefined4 *)(lVar14 + 0x28);
  if (*(int *)(TI_SparkMoveisDoMapa + 0xe4) == 0) {
    func_0x000180315660();
  }
  puVar12 = (undefined8 *)SparkMoveisDoMapa__GiroUE(&uStack_98);
  if (lStack_e8 == 0) goto code_r0x000180563d06;
  uVar5 = *puVar12;
  uVar6 = puVar12[1];
  uVar13 = UnityEngine_GameObject__get_transform(lStack_e8,0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  uStack_118 = uVar1;
  uStack_114 = uVar2;
  uStack_110 = uVar3;
  uStack_d8 = uVar5;
  uStack_d0 = uVar6;
  lVar14 = FUN_180a405c0(uVar11,&uStack_118,&uStack_d8,uVar13,MR_UnityEngine.Object.Instantiate<UnityEngine.GameObject>);
  uVar11 = System_String__Concat
                     (*(undefined8 *)(lVar10 + 0x20),LIT_"'.'",*(undefined8 *)(lVar10 + 0x18),0
                     );
  if (lVar14 == 0) goto code_r0x000180563d01;
  func_0x00018242cf20(lVar14,uVar11,0);
  lVar15 = UnityEngine_GameObject__get_transform(lVar14,0);
  lVar16 = *(longlong *)(lVar10 + 0x38);
  if (lVar16 == 0) goto code_r0x000180563cfc;
  if (*(int *)(lVar16 + 0x18) == 0) goto code_r0x000180563cc0;
  if (lVar16 == 0) goto code_r0x000180563cf7;
  if (*(uint *)(lVar16 + 0x18) < 2) goto code_r0x000180563cc5;
  if (lVar16 == 0) goto code_r0x000180563cf2;
  if (*(uint *)(lVar16 + 0x18) < 3) goto code_r0x000180563cca;
  if (lVar15 == 0) goto code_r0x000180563ced;
  uStack_108 = *(undefined4 *)(lVar16 + 0x20);
  uStack_104 = *(undefined4 *)(lVar16 + 0x24);
  uStack_100 = *(undefined4 *)(lVar16 + 0x28);
  UnityEngine_Transform__set_localScale(lVar15,&uStack_108,0);
  bVar7 = false;
  uVar18 = 0;
  while ((int)uVar18 < 3) {
    lVar16 = *(longlong *)(lVar10 + 0x40);
    if (*(int *)(TI_SparkMoveisDoMapa + 0xe4) == 0) {
      func_0x000180315660();
    }
    if ((lVar16 == 0) || ((int)*(uint *)(lVar16 + 0x18) <= (int)uVar18)) {
      iVar17 = 0;
    }
    else {
      if (*(uint *)(lVar16 + 0x18) <= uVar18) goto code_r0x000180563ccf;
      iVar17 = *(int *)(lVar16 + 0x20 + (longlong)(int)uVar18 * 4);
    }
    if ((float)iVar17 == 0.0) {
      uVar18 = uVar18 + 1;
    }
    else {
      lVar16 = *(longlong *)(lVar10 + 0x48);
      if (*(int *)(TI_SparkMoveisDoMapa + 0xe4) == 0) {
        func_0x000180315660();
      }
      if ((lVar16 == 0) || ((int)*(uint *)(lVar16 + 0x18) <= (int)uVar18)) {
        iVar17 = 0;
      }
      else {
        if (*(uint *)(lVar16 + 0x18) <= uVar18) goto code_r0x000180563cd4;
        iVar17 = *(int *)(lVar16 + 0x20 + (longlong)(int)uVar18 * 4);
      }
      if ((float)iVar17 == 0.0) {
        uVar18 = uVar18 + 1;
      }
      else {
        bVar7 = true;
        uVar18 = uVar18 + 1;
      }
    }
  }
  if ((cStackX_18 == '\0') || (*(int *)(lVar10 + 0x60) != 0)) {
    if (!bVar7) goto code_r0x000180563680;
  }
  else {
    lVar16 = FUN_1809e9ef0(lVar14,MR_UnityEngine.GameObject.GetComponent<UnityEngine.MeshFilter>);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar8 = UnityEngine_Object__op_Inequality(lVar16,0,0);
    if (cVar8 != '\0') {
      if (lVar16 == 0) goto code_r0x000180563cde;
      uVar11 = UnityEngine_MeshFilter__get_sharedMesh(lVar16,0);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar8 = UnityEngine_Object__op_Inequality(uVar11,0,0);
      if (cVar8 != '\0') {
        lVar15 = FUN_1809e9600(lVar14,MR_UnityEngine.GameObject.AddComponent<UnityEngine.MeshCollider>);
        uVar11 = UnityEngine_MeshFilter__get_sharedMesh(lVar16,0);
        if (lVar15 == 0) goto code_r0x000180563cd9;
        UnityEngine_MeshCollider__set_sharedMesh(lVar15,uVar11,0);
      }
    }
    if (!bVar7) goto code_r0x000180563680;
    lVar16 = FUN_1809e9600(lVar14,MR_UnityEngine.GameObject.AddComponent<UnityEngine.Rigidbody>);
    if (lVar16 == 0) goto code_r0x000180563ce3;
    UnityEngine_Rigidbody__set_isKinematic(lVar16,1,0);
  }
  uVar11 = UnityEngine_GameObject__get_transform(lVar14,0);
  uStack_a8 = 0;
  uStack_a0 = 0;
  System_Linq_Expressions_Interpreter_InterpretedFrameInfo___ctor
            (&uStack_a8,uVar11,lVar10,MR_System.ValueTuple<UnityEngine.Transform,SparkMoveisDoMapa.Movel>..ctor);
  if (lVar9 == 0) goto code_r0x000180563ce8;
  uStack_d8 = uStack_a8;
  uStack_d0 = uStack_a0;
  FUN_180002e30(lVar9,&uStack_d8,MR_System.Collections.Generic.List<System.ValueTuple<UnityEngine.Transform,SparkMoveisDoMapa.Movel>>.Add);
  goto code_r0x000180563680;
}

