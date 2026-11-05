// SparkRadarWindow__LiberaTiles__1806e9df0 @ 0x1806e9df0

void SparkRadarWindow__LiberaTiles__1806e9df0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong lStack_18;
  
  if (cRam00000001834b409d == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.get_Values);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.GetEnumerator);
    cRam00000001834b409d = '\x01';
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    lVar3 = FUN_18117fd20(*(longlong *)(param_1 + 0x198),MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.get_Values);
    if (lVar3 != 0) {
      FUN_180fbde10(&uStack_40,lVar3,MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.GetEnumerator);
      uStack_28 = (undefined4)uStack_40;
      uStack_24 = uStack_40._4_4_;
      uStack_20 = (undefined4)uStack_38;
      uStack_1c = uStack_38._4_4_;
      lStack_18 = lStack_30;
      uStack_40 = 0;
      uStack_38 = &uStack_28;
      while( true ) {
        cVar2 = FUN_1813194f0(&uStack_28,MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.MoveNext);
        if (cVar2 == '\0') {
          Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.Dispose);
          SparkRadarWindow__TiraTilesNaoVistos__1806ead20(param_1,0);
          return;
        }
        if (lStack_18 == 0) break;
        *(undefined1 *)(lStack_18 + 0x2c) = 0;
      }
      goto code_r0x0001806e9f21;
    }
  }
  FUN_1803155d0();
code_r0x0001806e9f21:
  FUN_1803155d0();
  FUN_180311490();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

