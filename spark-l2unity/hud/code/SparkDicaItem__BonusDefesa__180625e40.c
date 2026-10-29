// SparkDicaItem__BonusDefesa__180625e40 @ 0x180625e40

int SparkDicaItem__BonusDefesa__180625e40(char param_1,int param_2)

{
  int iVar1;
  
  if (cRam00000001834b3d02 == '\0') {
    FUN_180315380(TI_SparkDicaItem);
    cRam00000001834b3d02 = '\x01';
  }
  if ((param_1 != '\0') && (0 < param_2)) {
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
    return iVar1 * 3 + param_2;
  }
  return 0;
}

