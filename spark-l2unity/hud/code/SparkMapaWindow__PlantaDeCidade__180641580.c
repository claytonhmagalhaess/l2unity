// SparkMapaWindow__PlantaDeCidade__180641580 @ 0x180641580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkMapaWindow__PlantaDeCidade__180641580
                   (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  if (cRam00000001834b3d11 == '\0') {
    FUN_180315380(TI_SparkMapaWindow.Andar__);
    FUN_180315380(TI_SparkMapaWindow.Andar);
    FUN_180315380(TI_SparkMapaWindow.Masmorra);
    FUN_180315380(LIT_"''");
    cRam00000001834b3d11 = '\x01';
  }
  plVar2 = (longlong *)func_0x000180314710(TI_SparkMapaWindow.Andar__,1);
  lVar3 = func_0x000180315580(TI_SparkMapaWindow.Andar);
  SparkMapaWindow_Andar___ctor__1806548b0
            (lVar3,LIT_"''",param_2,param_3,CONCAT44(uVar6,param_4),CONCAT44(uVar7,0x3d4ccccd)
             ,0x46ea6000,0xc6ea6000,param_5,param_6,param_7,param_8,0);
  if (plVar2 != (longlong *)0x0) {
    if (lVar3 != 0) {
      lVar4 = func_0x0001803146b0(lVar3,*(undefined8 *)(*plVar2 + 0x40));
      if (lVar4 == 0) {
        uVar5 = func_0x000180314f80();
        FUN_180315590(uVar5,0);
        pcVar1 = (code *)swi(3);
        lVar3 = (*pcVar1)();
        return lVar3;
      }
    }
    if ((int)plVar2[3] == 0) {
      FUN_1803155c0();
      pcVar1 = (code *)swi(3);
      lVar3 = (*pcVar1)();
      return lVar3;
    }
    plVar2[4] = lVar3;
    func_0x000180314690(plVar2 + 4,lVar3);
    lVar3 = func_0x000180315580(TI_SparkMapaWindow.Masmorra);
    SparkMapaWindow_Masmorra___ctor__180668d40(lVar3,param_1,param_3,param_4,plVar2,0);
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x28) = 1;
      return lVar3;
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  lVar3 = (*pcVar1)();
  return lVar3;
}

