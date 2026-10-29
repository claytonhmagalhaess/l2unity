// SparkMapaWindow__ConfereInterno__180639dc0 @ 0x180639dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__ConfereInterno__180639dc0(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 auStackX_8 [2];
  longlong lStackX_18;
  ulonglong uStack_48;
  undefined4 uStack_40;
  ulonglong uStack_38;
  undefined4 uStack_30;
  
  if (cRam00000001834b3d36 == '\0') {
    FUN_180315380(MR_System.Nullable<UnityEngine.Vector2>..ctor);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(LIT_"'/'");
    FUN_180315380(LIT_"''");
    cRam00000001834b3d36 = '\x01';
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStackX_18 = 0;
  auStackX_8[0] = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar5 = SparkMapaWindow__PosicaoDoJogador3__180642280(&uStack_48,0);
    if (cVar5 != '\0') {
      if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar4 = uStack_48;
      uStack_38 = uStack_48;
      uStack_30 = uStack_40;
      cVar5 = SparkMapaWindow__LocalInterno__18063c550(&uStack_38,&lStackX_18,auStackX_8,0);
      uVar7 = LIT_"''";
      if (cVar5 != '\0') {
        if (lStackX_18 == 0) {
          FUN_1803155d0();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar7 = *(undefined8 *)(lStackX_18 + 0x10);
        uVar6 = System_Int32__ToString(auStackX_8,0);
        uVar7 = System_String__Concat(uVar7,LIT_"'/'",uVar6,0);
      }
      cVar5 = func_0x0001817058a0(uVar7,*(undefined8 *)(param_1 + 0x1a8),0);
      if (cVar5 == '\0') {
        *(undefined8 *)(param_1 + 0x1a8) = uVar7;
        func_0x000180314690(param_1 + 0x1a8,uVar7);
        lVar3 = lStackX_18;
        uVar2 = auStackX_8[0];
        if (lStackX_18 == 0) {
          if ((*(longlong *)(param_1 + 0x188) != 0) && (*(char *)(param_1 + 0x1a0) != '\0')) {
            SparkMapaWindow__EntraNaRegiao__18063aa50(param_1,uVar4 & 0xffffffff,0x3d0f5c29,0,0);
          }
        }
        else {
          uStack_48 = 0;
          uStack_40 = 0;
          func_0x000180cb7f80(&uStack_48,uVar4 & 0xffffffff,MR_System.Nullable<UnityEngine.Vector2>..ctor);
          uStack_38 = uStack_48;
          uStack_30 = uStack_40;
          SparkMapaWindow__AbreInterno__180637670(param_1,lVar3,uVar2,&uStack_38,1,0);
        }
      }
    }
  }
  return;
}

