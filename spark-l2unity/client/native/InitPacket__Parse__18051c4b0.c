// InitPacket__Parse__18051c4b0 @ 0x18051c4b0

void InitPacket__Parse__18051c4b0(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 auStackX_8 [2];
  undefined4 auStackX_18 [2];
  undefined4 auStackX_20 [2];
  
  if (cRam00000001834b363c == '\0') {
    FUN_180315380(0x1832f3868);
    FUN_180315380(0x1832d8e68);
    FUN_180315380(0x1832df580);
    FUN_180315380(0x1832cfec0);
    FUN_180315380(0x1832c1170);
    FUN_180315380(0x1832e8e50);
    FUN_180315380(0x1832c1220);
    cRam00000001834b363c = '\x01';
  }
  uVar1 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  *(undefined4 *)(param_1 + 5) = uVar1;
  uVar1 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  lVar2 = FUN_180520e80(param_1,uVar1,0);
  param_1[6] = lVar2;
  func_0x000180314690(param_1 + 6,lVar2);
  uVar1 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  *(undefined4 *)(param_1 + 7) = uVar1;
  lVar2 = FUN_180520e80(param_1,uVar1,0);
  param_1[8] = lVar2;
  func_0x000180314690(param_1 + 8,lVar2);
  auStackX_8[0] = (undefined4)param_1[5];
  uVar3 = func_0x000180314670(uRam00000001834c6268,auStackX_8);
  uVar3 = FUN_181706880(uRam00000001832df580,uVar3,0);
  if (*(int *)(lRam00000001832f3868 + 0xe4) == 0) {
    func_0x000180315660();
  }
  FUN_1823d2370(uVar3,0);
  auStackX_18[0] = *(undefined4 *)((longlong)param_1 + 0x2c);
  uVar3 = func_0x000180314670(uRam00000001834c6268,auStackX_18);
  uVar3 = FUN_181706880(uRam00000001832d8e68,uVar3,0);
  FUN_1823d2370(uVar3,0);
  uVar3 = FUN_1807b5160(param_1[6],0);
  uVar3 = FUN_181703510(uRam00000001832cfec0,uVar3,uRam00000001832e8e50,0);
  FUN_1823d2370(uVar3,0);
  auStackX_20[0] = (undefined4)param_1[7];
  uVar3 = func_0x000180314670(uRam00000001834c6268,auStackX_20);
  uVar3 = FUN_181706880(uRam00000001832c1220,uVar3,0);
  FUN_1823d2370(uVar3,0);
  uVar3 = FUN_1807b5160(param_1[8],0);
  uVar3 = FUN_181703510(uRam00000001832c1170,uVar3,uRam00000001832e8e50,0);
  FUN_1823d2370(uVar3,0);
  return;
}

