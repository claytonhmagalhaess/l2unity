// SparkMusica__Numeros__180454ce0 @ 0x180454ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkMusica__Numeros__180454ce0(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  
  if (cRam00000001834b3001 == '\0') {
    FUN_180315380(TI_System.Globalization.CultureInfo);
    FUN_180315380(TI_float__);
    cRam00000001834b3001 = '\x01';
  }
  if (param_1 != 0) {
    lVar3 = func_0x000180314710(TI_float__,*(undefined4 *)(param_1 + 0x18));
    uVar6 = 0;
    do {
      if (*(int *)(param_1 + 0x18) <= (int)uVar6) {
        return lVar3;
      }
      if (*(uint *)(param_1 + 0x18) <= uVar6) {
code_r0x000180454db8:
        FUN_1803155c0();
        pcVar2 = (code *)swi(3);
        lVar3 = (*pcVar2)();
        return lVar3;
      }
      uVar1 = *(undefined8 *)(param_1 + 0x20 + (longlong)(int)uVar6 * 8);
      if (*(int *)(TI_System.Globalization.CultureInfo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar7 = System_Single__Parse(uVar1,0xa7,uVar4,0);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar6) goto code_r0x000180454db8;
      lVar5 = (longlong)(int)uVar6;
      uVar6 = uVar6 + 1;
      *(undefined4 *)(lVar3 + 0x20 + lVar5 * 4) = uVar7;
    } while( true );
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  lVar3 = (*pcVar2)();
  return lVar3;
}

