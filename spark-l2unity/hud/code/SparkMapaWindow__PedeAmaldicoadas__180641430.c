// SparkMapaWindow__PedeAmaldicoadas__180641430 @ 0x180641430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__PedeAmaldicoadas__180641430(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  
  if (cRam00000001834b3d48 == '\0') {
    FUN_180315380(TI_SparkAmaldicoadas);
    cRam00000001834b3d48 = '\x01';
  }
  fVar7 = (float)FUN_1824366b0(0);
  *(float *)(param_1 + 0x118) = fVar7 + 60.0;
  if (*(int *)(TI_SparkAmaldicoadas + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (cRam00000001834b3dd5 == '\0') {
    FUN_180315380(MR_System.Array.Empty<int>);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAmaldicoadas.Arma>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<SparkAmaldicoadas.Arma>.get_Count);
    FUN_180315380(TI_SparkAmaldicoadas);
    FUN_180315380(TI_SparkPacoteEx);
    cRam00000001834b3dd5 = '\x01';
  }
  if (*(int *)(TI_SparkAmaldicoadas + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (*(char *)(*(longlong *)(TI_SparkAmaldicoadas + 0xb8) + 0x10) != '\0') {
    if (*(int *)(TI_SparkAmaldicoadas + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (**(longlong **)(TI_SparkAmaldicoadas + 0xb8) == 0) {
code_r0x00018066938c:
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (0 < *(int *)(**(longlong **)(TI_SparkAmaldicoadas + 0xb8) + 0x18)) {
      if (*(int *)(TI_SparkAmaldicoadas + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar5 = **(longlong **)(TI_SparkAmaldicoadas + 0xb8);
      if (lVar5 == 0) goto code_r0x00018066938c;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      *(undefined4 *)(lVar5 + 0x18) = 0;
      lVar5 = *(longlong *)(*(longlong *)(TI_SparkAmaldicoadas + 0xb8) + 8);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      }
    }
  }
  if (*(int *)(TI_SparkAmaldicoadas + 0xe4) == 0) {
    func_0x000180315660();
  }
  *(undefined1 *)(*(longlong *)(TI_SparkAmaldicoadas + 0xb8) + 0x10) = 1;
  if (DAT_1834b30fb == '\0') {
    FUN_180315380(TI_GameClient);
    DAT_1834b30fb = '\x01';
  }
  lVar5 = MR_System.Array.Empty<int>;
  if ((**(longlong **)(TI_GameClient + 0xb8) != 0) &&
     (plVar1 = *(longlong **)(**(longlong **)(TI_GameClient + 0xb8) + 0xa8),
     plVar1 != (longlong *)0x0)) {
    if (*(longlong *)(MR_System.Array.Empty<int> + 0x38) == 0) {
      FUN_180312fc0(MR_System.Array.Empty<int>);
    }
    lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_180312f40(lVar4);
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      func_0x000180315660(lVar4);
    }
    lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_180312f40(lVar5);
    }
    uVar2 = **(undefined8 **)(lVar5 + 0xb8);
    uVar6 = func_0x000180315580(TI_SparkPacoteEx);
    SparkPacoteEx___ctor(uVar6,0x23,uVar2,0);
    (**(code **)(*plVar1 + 0x178))(plVar1,uVar6,*(undefined8 *)(*plVar1 + 0x180));
  }
  return;
}

