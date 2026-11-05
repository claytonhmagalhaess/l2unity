// SparkRadarWindow__ConferePlanta__1806e67a0 @ 0x1806e67a0

/* WARNING: Possible PIC construction at 0x0001806e68bd: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001806e6940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001806e6a91: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001806e6945) */
/* WARNING: Removing unreachable block (ram,0x0001806e696e) */
/* WARNING: Removing unreachable block (ram,0x0001806e6973) */
/* WARNING: Removing unreachable block (ram,0x0001806e6984) */
/* WARNING: Removing unreachable block (ram,0x0001806e698d) */
/* WARNING: Removing unreachable block (ram,0x0001806e69b8) */
/* WARNING: Removing unreachable block (ram,0x0001806e69bd) */
/* WARNING: Removing unreachable block (ram,0x0001806e69cc) */
/* WARNING: Removing unreachable block (ram,0x0001806e6b08) */
/* WARNING: Removing unreachable block (ram,0x0001806e69d9) */
/* WARNING: Removing unreachable block (ram,0x0001806e69e9) */
/* WARNING: Removing unreachable block (ram,0x0001806e69ee) */
/* WARNING: Removing unreachable block (ram,0x0001806e69ff) */
/* WARNING: Removing unreachable block (ram,0x0001806e6a16) */
/* WARNING: Removing unreachable block (ram,0x0001806e6a1b) */
/* WARNING: Removing unreachable block (ram,0x0001806e6a2d) */
/* WARNING: Removing unreachable block (ram,0x0001806e6a3d) */
/* WARNING: Removing unreachable block (ram,0x0001806e6a42) */
/* WARNING: Removing unreachable block (ram,0x0001806e6a50) */
/* WARNING: Removing unreachable block (ram,0x0001806e68c2) */
/* WARNING: Removing unreachable block (ram,0x0001806e6a5a) */
/* WARNING: Removing unreachable block (ram,0x0001806e6a6e) */
/* WARNING: Removing unreachable block (ram,0x0001806e6b10) */
/* WARNING: Removing unreachable block (ram,0x0001806e6b15) */
/* WARNING: Removing unreachable block (ram,0x0001806e6a7c) */
/* WARNING: Removing unreachable block (ram,0x0001806e68e0) */
/* WARNING: Removing unreachable block (ram,0x0001806e6b20) */
/* WARNING: Removing unreachable block (ram,0x0001806e68f6) */
/* WARNING: Removing unreachable block (ram,0x0001806e6906) */
/* WARNING: Removing unreachable block (ram,0x0001806e6917) */
/* WARNING: Removing unreachable block (ram,0x0001806e6921) */
/* WARNING: Removing unreachable block (ram,0x0001806e6925) */
/* WARNING: Removing unreachable block (ram,0x0001806e6a96) */
/* WARNING: Removing unreachable block (ram,0x0001806e6b33) */
/* WARNING: Removing unreachable block (ram,0x0001806e6aa6) */
/* WARNING: Removing unreachable block (ram,0x0001806e6acc) */
/* WARNING: Removing unreachable block (ram,0x0001806e6ad1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkRadarWindow__ConferePlanta__1806e67a0(longlong param_1,float *param_2)

{
  ulonglong *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  
  if (cRam00000001834b409e == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.LoadAsync<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(TI_SparkRadarWindow);
    FUN_180315380(TI_UnityEngine.Texture2D);
    FUN_180315380(LIT_"'Data/UI/Assets/Mapa/interno/'");
    FUN_180315380(LIT_"'SparkRadarWindow: planta nao encontrada: Data/UI/Assets/...");
    cRam00000001834b409e = '\x01';
  }
  fVar2 = param_2[2];
  fVar3 = *param_2;
  fVar4 = param_2[1];
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  fStack_48 = fVar2 * 52.5;
  fStack_44 = fVar3 * 52.5;
  fStack_40 = fVar4 * 52.5;
  uVar7 = SparkMapaWindow__AndarParaRadar__180638170(&fStack_48,uVar6,0x43160000,0);
  *(ulonglong *)(param_1 + 0x1c0) = uVar7;
  if (_DAT_1834c7d58 != 0) {
    uVar8 = (uint)(param_1 + 0x1c0U >> 0xc);
    puVar1 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0x18350ff20);
    do {
      uVar5 = *puVar1;
      LOCK();
      uVar7 = *puVar1;
      bVar9 = uVar5 == uVar7;
      if (bVar9) {
        *puVar1 = uVar5 | 1L << (uVar8 & 0x3f);
        uVar7 = uVar5;
      }
      UNLOCK();
    } while (!bVar9);
  }
  return uVar7;
}

