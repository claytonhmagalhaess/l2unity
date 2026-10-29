// SparkDados__AbrirTexto__180591520 @ 0x180591520

undefined8 SparkDados__AbrirTexto__180591520(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (cRam00000001834b39f3 == '\0') {
    FUN_180315380(0x1833318a8);
    FUN_180315380(0x1832f4aa0);
    cRam00000001834b39f3 = '\x01';
  }
  uVar1 = SparkDados__LerBytes__180591630(param_1,0);
  uVar2 = func_0x000180315580(uRam00000001833318a8);
  FUN_18185da60(uVar2,uVar1,0);
  uVar1 = FUN_18172dd40(0);
  uVar3 = func_0x000180315580(uRam00000001832f4aa0);
  FUN_181862480(uVar3,uVar2,uVar1,0);
  return uVar3;
}

