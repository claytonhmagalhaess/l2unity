// SparkMapaWindow__AndarParaRadar__180638170 @ 0x180638170

longlong SparkMapaWindow__AndarParaRadar__180638170
                   (undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if (cRam00000001834b3d13 == '\0') {
    FUN_180315380(TI_SparkMapaWindow);
    cRam00000001834b3d13 = '\x01';
  }
  if (param_2 != 0) {
    uStack_38 = *param_1;
    uStack_30 = *(undefined4 *)(param_1 + 1);
    cVar4 = SparkMapaWindow_Andar__Contem__180654320(param_2,&uStack_38,param_3,0);
    if (cVar4 != '\0') {
      return param_2;
    }
  }
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    func_0x000180315660(TI_SparkMapaWindow);
  }
  lVar5 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x18);
  if (lVar5 != 0) {
    uVar7 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= (int)uVar7) {
        return 0;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar7) {
code_r0x0001806382da:
        FUN_1803155c0();
        pcVar3 = (code *)swi(3);
        lVar5 = (*pcVar3)();
        return lVar5;
      }
      lVar1 = *(longlong *)(lVar5 + 0x20 + (longlong)(int)uVar7 * 8);
      if (lVar1 == 0) break;
      if (*(char *)(lVar1 + 0x28) == '\0') {
        lVar1 = *(longlong *)(lVar1 + 0x20);
        uVar6 = 0;
        if (lVar1 == 0) break;
        for (; (int)uVar6 < (int)*(uint *)(lVar1 + 0x18); uVar6 = uVar6 + 1) {
          if (*(uint *)(lVar1 + 0x18) <= uVar6) goto code_r0x0001806382da;
          lVar2 = *(longlong *)(lVar1 + 0x20 + (longlong)(int)uVar6 * 8);
          if (lVar2 == 0) goto code_r0x0001806382d4;
          uStack_38 = *param_1;
          uStack_30 = *(undefined4 *)(param_1 + 1);
          cVar4 = SparkMapaWindow_Andar__Contem__1806542f0(lVar2,&uStack_38,0);
          if (cVar4 != '\0') {
            return lVar2;
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while( true );
  }
code_r0x0001806382d4:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  lVar5 = (*pcVar3)();
  return lVar5;
}

