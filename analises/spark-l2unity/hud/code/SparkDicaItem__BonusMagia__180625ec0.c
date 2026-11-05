// SparkDicaItem__BonusMagia__180625ec0 @ 0x180625ec0

int SparkDicaItem__BonusMagia__180625ec0(char param_1,int param_2)

{
  int iVar1;
  
  if (cRam00000001834b3d03 == '\0') {
    FUN_180315380(TI_SparkDicaItem);
    cRam00000001834b3d03 = '\x01';
  }
  if ((param_1 == '\0') || (param_2 < 1)) {
    return 0;
  }
  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  iVar1 = 0;
  if (-1 < param_2 + -3) {
    iVar1 = param_2 + -3;
  }
  if (2 < param_2) {
    param_2 = 3;
  }
  param_2 = param_2 + iVar1 * 2;
  if (param_1 == '\x01') {
    return param_2 * 2;
  }
  if (param_1 != '\x05') {
    return param_2 * 3;
  }
  return param_2 * 4;
}

