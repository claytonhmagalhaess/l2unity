// SparkRadarWindow___ctor__1806eb640 @ 0x1806eb640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow___ctor__1806eb640(longlong param_1)

{
  undefined8 uVar1;
  
  if (cRam00000001834b40a6 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>..ctor);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>);
    FUN_180315380(MR_System.Collections.Generic.HashSet<int>..ctor);
    FUN_180315380(TI_System.Collections.Generic.HashSet<int>);
    FUN_180315380(TI_L2Window);
    FUN_180315380(MR_System.Collections.Generic.List<int>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<SparkRadarWindow.Candidato>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<int>);
    FUN_180315380(TI_System.Collections.Generic.List<SparkRadarWindow.Candidato>);
    cRam00000001834b40a6 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x8c) = 1;
  *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x158) = 0x461c3c00;
  *(undefined4 *)(param_1 + 0x15c) = 0x461c3c00;
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.List<SparkRadarWindow.Candidato>);
  FUN_180bba370(uVar1,0x400,MR_System.Collections.Generic.List<SparkRadarWindow.Candidato>..ctor);
  *(undefined8 *)(param_1 + 0x178) = uVar1;
  func_0x000180314690(param_1 + 0x178,uVar1);
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.HashSet<int>);
  FUN_1814e1d50(uVar1,MR_System.Collections.Generic.HashSet<int>..ctor);
  *(undefined8 *)(param_1 + 0x180) = uVar1;
  func_0x000180314690(param_1 + 0x180,uVar1);
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>);
  FUN_1811e4340(uVar1,MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>..ctor);
  *(undefined8 *)(param_1 + 0x198) = uVar1;
  func_0x000180314690(param_1 + 0x198,uVar1);
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.HashSet<int>);
  FUN_1814e1d50(uVar1,MR_System.Collections.Generic.HashSet<int>..ctor);
  *(undefined8 *)(param_1 + 0x1a0) = uVar1;
  func_0x000180314690(param_1 + 0x1a0,uVar1);
  uVar1 = func_0x000180315580(TI_System.Collections.Generic.List<int>);
  FUN_180bba2e0(uVar1,MR_System.Collections.Generic.List<int>..ctor);
  *(undefined8 *)(param_1 + 0x1a8) = uVar1;
  func_0x000180314690(param_1 + 0x1a8,uVar1);
  *(undefined4 *)(param_1 + 0x1e8) = 0xbf800000;
  if (*(int *)(TI_L2Window + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834c10ac == '\0') {
    FUN_180315380(TI_UnityEngine.Object,0);
    DAT_1834c10ac = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  return;
}

