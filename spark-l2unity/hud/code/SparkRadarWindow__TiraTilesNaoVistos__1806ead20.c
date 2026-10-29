// SparkRadarWindow__TiraTilesNaoVistos__1806ead20 @ 0x1806ead20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRadarWindow__TiraTilesNaoVistos__1806ead20(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong uStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulonglong uStack_28;
  longlong lStack_20;
  undefined8 uStack_18;
  
  if (cRam00000001834b409c == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.Remove);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.get_Item);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<int,SparkRadarWindow.Tile>.get_Key);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<int,SparkRadarWindow.Tile>.get_Value);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<int>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<int>.get_Item);
    cRam00000001834b409c = '\x01';
  }
  lVar4 = *(longlong *)(param_1 + 0x1a8);
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    iVar5 = 0;
    *(undefined4 *)(lVar4 + 0x18) = 0;
    if (*(longlong *)(param_1 + 0x198) != 0) {
      FUN_18117ccd0(&uStack_38,*(longlong *)(param_1 + 0x198),MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.GetEnumerator);
      uStack_60 = uStack_38;
      uStack_58 = uStack_30;
      uStack_50 = uStack_28;
      lStack_48 = lStack_20;
      uStack_40 = uStack_18;
      while (cVar2 = FUN_181334a60(&uStack_60,MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.MoveNext), cVar2 != '\0') {
        if (lStack_48 == 0) goto code_r0x0001806eafaf;
        if (*(char *)(lStack_48 + 0x2c) == '\0') {
          if (*(longlong *)(param_1 + 0x1a8) == 0) {
            FUN_1803155d0();
code_r0x0001806eafaf:
            FUN_1803155d0();
            FUN_180311490();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FUN_1800034b0(*(longlong *)(param_1 + 0x1a8),uStack_50 & 0xffffffff,MR_System.Collections.Generic.List<int>.Add);
        }
      }
      Gear__UpdateWeaponType__1803dadf0(&uStack_60,MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.Dispose);
      lVar4 = *(longlong *)(param_1 + 0x1a8);
      if (lVar4 != 0) {
        while( true ) {
          if (*(int *)(lVar4 + 0x18) <= iVar5) {
            return;
          }
          if (*(longlong *)(param_1 + 0x1a8) == 0) break;
          lVar4 = *(longlong *)(param_1 + 0x198);
          uVar3 = FUN_180bed530(*(longlong *)(param_1 + 0x1a8),iVar5,MR_System.Collections.Generic.List<int>.get_Item);
          if (((lVar4 == 0) || (lVar4 = FUN_1812035e0(lVar4,uVar3,MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.get_Item), lVar4 == 0)
              ) || (*(longlong *)(lVar4 + 0x10) == 0)) break;
          UnityEngine_UIElements_VisualElement__RemoveFromHierarchy(*(longlong *)(lVar4 + 0x10),0);
          if (*(longlong *)(param_1 + 0x1a8) == 0) break;
          lVar4 = *(longlong *)(param_1 + 0x198);
          uVar3 = FUN_180bed530(*(longlong *)(param_1 + 0x1a8),iVar5,MR_System.Collections.Generic.List<int>.get_Item);
          if (lVar4 == 0) break;
          FUN_1811f9940(lVar4,uVar3,MR_System.Collections.Generic.Dictionary<int,SparkRadarWindow.Tile>.Remove);
          iVar5 = iVar5 + 1;
          lVar4 = *(longlong *)(param_1 + 0x1a8);
          if (lVar4 == 0) break;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

