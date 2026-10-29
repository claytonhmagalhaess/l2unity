// SparkMapaWindow__LocalInterno__18063c550 @ 0x18063c550

undefined8
SparkMapaWindow__LocalInterno__18063c550(undefined8 *param_1,longlong *param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  if (cRam00000001834b3d16 == '\0') {
    FUN_180315380(TI_SparkMapaWindow);
    cRam00000001834b3d16 = '\x01';
  }
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkMapaWindow + 0xb8) + 0x18);
  if (lVar1 != 0) {
    uVar9 = 0;
    lVar7 = TI_SparkMapaWindow;
    do {
      if (*(int *)(lVar1 + 0x18) <= (int)uVar9) {
        *param_2 = 0;
        func_0x000180314690(param_2,0);
        *param_3 = 0xffffffff;
        return 0;
      }
      if (*(uint *)(lVar1 + 0x18) <= uVar9) {
code_r0x00018063c6da:
        FUN_1803155c0();
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
      lVar2 = *(longlong *)(lVar1 + 0x20 + (longlong)(int)uVar9 * 8);
      if (lVar2 == 0) break;
      if (*(char *)(lVar2 + 0x28) == '\0') {
code_r0x00018063c612:
        uVar8 = 0;
        while( true ) {
          lVar3 = *(longlong *)(lVar2 + 0x20);
          if (lVar3 == 0) goto code_r0x00018063c6d4;
          lVar7 = TI_SparkMapaWindow;
          if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar8) break;
          if (*(uint *)(lVar3 + 0x18) <= uVar8) goto code_r0x00018063c6da;
          lVar7 = *(longlong *)(lVar3 + 0x20 + (longlong)(int)uVar8 * 8);
          if (lVar7 == 0) goto code_r0x00018063c6d4;
          uStack_28 = *param_1;
          uStack_20 = *(undefined4 *)(param_1 + 1);
          cVar5 = SparkMapaWindow_Andar__Contem__1806542f0(lVar7,&uStack_28,0);
          if (cVar5 != '\0') {
            *param_2 = lVar2;
            func_0x000180314690(param_2,lVar2);
            *param_3 = uVar8;
            return 1;
          }
          uVar8 = uVar8 + 1;
        }
      }
      else {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          func_0x000180315660();
          lVar7 = TI_SparkMapaWindow;
        }
        if (*(char *)(*(longlong *)(lVar7 + 0xb8) + 0x20) != '\0') goto code_r0x00018063c612;
      }
      uVar9 = uVar9 + 1;
    } while( true );
  }
code_r0x00018063c6d4:
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return uVar6;
}

