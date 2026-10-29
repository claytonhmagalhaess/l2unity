// SparkEmissoresDoMapa__Awake__18055f9b0 @ 0x18055f9b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkEmissoresDoMapa__Awake__18055f9b0(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  char cVar11;
  longlong lVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  longlong lStack_70;
  
  if (cRam00000001834b3881 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkEmissoresDoMapa.Lugar>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkEmissoresDoMapa.Lugar>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkEmissoresDoMapa.Lugar>.get_Current);
    FUN_180315380(MR_UnityEngine.JsonUtility.FromJson<SparkEmissoresDoMapa.Arquivo>);
    FUN_180315380(MR_System.Collections.Generic.List<SparkEmissoresDoMapa.Lugar>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<SparkEmissoresDoMapa.Lugar>.GetEnumerator);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.TextAsset>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_SparkEmissoresDoMapa);
    FUN_180315380(LIT_"'Data/Effects/spark_emissores_mapa'");
    cRam00000001834b3881 = '\x01';
  }
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  uVar14 = 0;
  uStack_a0 = 0;
  if (*(int *)(TI_SparkArte + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar12 = FUN_180a90ae0(LIT_"'Data/Effects/spark_emissores_mapa'",MR_SparkArte.Load<UnityEngine.TextAsset>);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar11 = UnityEngine_Object__op_Inequality(lVar12,0,0);
  if (cVar11 != '\0') {
    if (lVar12 == 0) goto code_r0x00018055fdef;
    uVar13 = UnityEngine_TextAsset__ToString(lVar12,0);
    lVar12 = FUN_180a18af0(uVar13,MR_UnityEngine.JsonUtility.FromJson<SparkEmissoresDoMapa.Arquivo>);
    if ((lVar12 != 0) && (*(longlong *)(lVar12 + 0x10) != 0)) {
      lVar5 = *(longlong *)(lVar12 + 0x10);
      for (; uVar1 = *(uint *)(lVar5 + 0x18), (int)uVar14 < (int)uVar1; uVar14 = uVar14 + 1) {
        if (uVar1 <= uVar14) goto code_r0x00018055fdc6;
        lVar6 = *(longlong *)(lVar5 + 0x20 + (longlong)(int)uVar14 * 8);
        if (lVar6 == 0) goto code_r0x00018055fdea;
        lVar7 = *(longlong *)(lVar6 + 0x20);
        if (lVar7 == 0) goto code_r0x00018055fde5;
        if (*(int *)(lVar7 + 0x18) == 0) goto code_r0x00018055fdcc;
        if (lVar7 == 0) goto code_r0x00018055fde0;
        if (*(uint *)(lVar7 + 0x18) < 2) goto code_r0x00018055fdd1;
        if (lVar7 == 0) goto code_r0x00018055fddb;
        if (*(uint *)(lVar7 + 0x18) < 3) goto code_r0x00018055fdd6;
        uVar2 = *(undefined4 *)(lVar7 + 0x24);
        uVar3 = *(undefined4 *)(lVar7 + 0x28);
        *(undefined4 *)(lVar6 + 0x40) = *(undefined4 *)(lVar7 + 0x20);
        *(undefined4 *)(lVar6 + 0x44) = uVar2;
        *(undefined4 *)(lVar6 + 0x48) = uVar3;
      }
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar12 + 0x10);
      func_0x000180314690(param_1 + 0x20);
    }
  }
  if (*(int *)(TI_SparkEmissoresDoMapa + 0xe4) == 0) {
    func_0x000180315660(TI_SparkEmissoresDoMapa);
  }
  lVar12 = *(longlong *)(*(longlong *)(TI_SparkEmissoresDoMapa + 0xb8) + 8);
  if (lVar12 != 0) {
    FUN_180bada40(&uStack_98,lVar12,MR_System.Collections.Generic.List<SparkEmissoresDoMapa.Lugar>.GetEnumerator);
    uStack_80 = uStack_98;
    puStack_78 = puStack_90;
    lStack_70 = lStack_88;
    uStack_98 = 0;
    puStack_90 = &uStack_80;
    while (cVar11 = FUN_1812fa7e0(&uStack_80,MR_System.Collections.Generic.List<SparkEmissoresDoMapa.Lugar>.MoveNext), lVar12 = lStack_70,
          cVar11 != '\0') {
      if (lStack_70 == 0) goto code_r0x00018055fdf5;
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      uVar9 = *(undefined8 *)(lStack_70 + 0x18);
      uVar13 = *(undefined8 *)(lStack_70 + 0x40);
      uVar3 = *(undefined4 *)(lStack_70 + 0x48);
      uVar2 = *(undefined4 *)(lStack_70 + 0x4c);
      if (*(int *)(TI_SparkEmissoresDoMapa + 0xe4) == 0) {
        func_0x000180315660();
      }
      uStack_a8 = uVar13;
      uStack_a0 = uVar3;
      cVar11 = SparkEmissoresDoMapa__Perto(uVar8,uVar9,&uStack_a8,uVar2,0);
      if (cVar11 == '\0') {
        SparkEmissoresDoMapa__Junta(param_1,lVar12,0);
      }
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_80,MR_System.Collections.Generic.List<SparkEmissoresDoMapa.Lugar>.Dispose);
    if (*(int *)(TI_SparkEmissoresDoMapa + 0xe4) == 0) {
      func_0x000180315660(TI_SparkEmissoresDoMapa);
    }
    lVar12 = *(longlong *)(*(longlong *)(TI_SparkEmissoresDoMapa + 0xb8) + 8);
    if (lVar12 != 0) {
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      iVar4 = *(int *)(lVar12 + 0x18);
      *(undefined4 *)(lVar12 + 0x18) = 0;
      if (0 < iVar4) {
        System_Array__Clear(*(undefined8 *)(lVar12 + 0x10),0,iVar4,0);
      }
      return;
    }
  }
  FUN_1803155d0();
code_r0x00018055fdc6:
  FUN_1803155c0();
code_r0x00018055fdcc:
  FUN_1803155c0();
code_r0x00018055fdd1:
  FUN_1803155c0();
code_r0x00018055fdd6:
  FUN_1803155c0();
code_r0x00018055fddb:
  FUN_1803155d0();
code_r0x00018055fde0:
  FUN_1803155d0();
code_r0x00018055fde5:
  FUN_1803155d0();
code_r0x00018055fdea:
  FUN_1803155d0();
code_r0x00018055fdef:
  FUN_1803155d0();
code_r0x00018055fdf5:
  FUN_1803155d0();
  FUN_180311490();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

