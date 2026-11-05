// SparkDetalhePersonagem__Update__1804990e0 @ 0x1804990e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkDetalhePersonagem__Update__1804990e0(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  float fVar8;
  double dVar9;
  undefined8 uStackX_8;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 auStack_38 [48];
  
  if (cRam00000001834b326c == '\0') {
    FUN_180315380(MR_UnityEngine.Object.FindObjectsByType<Entity>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkMalhaUnica);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b326c = '\x01';
  }
  if (cRam00000001834b327a == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkDetalhePersonagem.Trabalho>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.Queue<UnityEngine.Mesh>.get_Count);
    FUN_180315380(TI_System.TimeSpan);
    cRam00000001834b327a = '\x01';
  }
  uStackX_8 = 0;
  if (*(longlong *)(param_1 + 0x80) == 0) goto DAT_180499437;
  if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x18) == 0) {
    if (*(longlong *)(param_1 + 0x70) == 0) goto DAT_180499437;
    if (*(int *)(*(longlong *)(param_1 + 0x70) + 0x20) != 0) goto code_r0x000180499194;
  }
  else {
code_r0x000180499194:
    if (*(longlong *)(param_1 + 0x88) == 0) {
DAT_180499437:
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    System_Diagnostics_Stopwatch__Restart(*(longlong *)(param_1 + 0x88),0);
    do {
      cVar3 = SparkDetalhePersonagem__Passo(param_1,0);
      if (cVar3 == '\0') break;
      if (*(longlong *)(param_1 + 0x88) == 0) goto DAT_180499437;
      uStackX_8 = System_Diagnostics_Stopwatch__get_Elapsed();
      if (*(int *)(TI_System.TimeSpan + 0xe4) == 0) {
        func_0x000180315660();
      }
      dVar9 = (double)func_0x0001818c1950(&uStackX_8);
    } while (dVar9 < 1.0);
  }
  fVar8 = (float)FUN_1824366b0(0);
  if (fVar8 < *(float *)(param_1 + 0x28)) {
    return;
  }
  *(float *)(param_1 + 0x28) = fVar8 + 0.25;
  if (*(float *)(param_1 + 0x2c) <= fVar8) {
    *(float *)(param_1 + 0x2c) = fVar8 + 1.0;
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = FUN_180a40300(0,MR_UnityEngine.Object.FindObjectsByType<Entity>);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    func_0x000180314690(param_1 + 0x20,uVar4);
  }
  if (*(float *)(param_1 + 0x30) <= fVar8) {
    *(float *)(param_1 + 0x30) = fVar8 + 10.0;
    SparkDetalhePersonagem__Limpa(param_1,0);
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(char *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x49) != '\0') {
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (0 < *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x24)) {
      if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
        func_0x000180315660();
      }
      bVar7 = *(int *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0x3c) != 2;
      goto code_r0x000180499311;
    }
  }
  bVar7 = false;
code_r0x000180499311:
  if (*(int *)(TI_SparkMalhaUnica + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b32c8 == '\0') {
    FUN_180315380(TI_SparkMalhaUnica);
    cRam00000001834b32c8 = '\x01';
  }
  if (*(int *)(TI_SparkMalhaUnica + 0xe4) == 0) {
    func_0x000180315660();
  }
  if ((bool)*(char *)(*(longlong *)(TI_SparkMalhaUnica + 0xb8) + 1) != bVar7) {
    if (*(int *)(TI_SparkMalhaUnica + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkMalhaUnica__set_SombraUnica(bVar7,0);
  }
  lVar5 = UnityEngine_Camera__get_main(0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(lVar5,0,0);
  if (cVar3 == '\0') {
    if ((lVar5 == 0) || (lVar5 = UnityEngine_Component__get_transform(lVar5,0), lVar5 == 0)) {
      FUN_1803155d0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puVar6 = (undefined8 *)UnityEngine_Transform__get_position(auStack_38,lVar5,0);
    uVar4 = *puVar6;
    uVar1 = *(undefined4 *)(puVar6 + 1);
    uStack_48 = uVar4;
    uStack_40 = uVar1;
    SparkDetalhePersonagem__AtualizaSombras(param_1,&uStack_48,fVar8,0);
    uStack_48 = uVar4;
    uStack_40 = uVar1;
    SparkDetalhePersonagem__AtualizaLod(param_1,&uStack_48,fVar8,0);
  }
  return;
}

