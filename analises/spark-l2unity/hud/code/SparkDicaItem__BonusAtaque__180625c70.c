// SparkDicaItem__BonusAtaque__180625c70 @ 0x180625c70

int SparkDicaItem__BonusAtaque__180625c70(char param_1,char param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  if (cRam00000001834b3d04 == '\0') {
    FUN_180315380(TI_SparkDicaItem);
    cRam00000001834b3d04 = '\x01';
  }
  if ((param_1 == '\0') || (param_3 < 1)) {
    return 0;
  }
  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  iVar1 = param_3;
  if (2 < param_3) {
    iVar1 = 3;
  }
  iVar2 = 0;
  if (-1 < param_3 + -3) {
    iVar2 = param_3 + -3;
  }
  bVar3 = param_2 != '\t';
  bVar4 = param_2 != '\n';
  if (param_1 == '\x01') {
    iVar1 = iVar1 + iVar2 * 2;
    iVar2 = iVar1 * 2;
    if (param_2 == '\x06') {
      iVar2 = iVar1 * 4;
    }
    return iVar2;
  }
  if ((param_1 == '\x02') || (param_1 == '\x03')) {
    iVar1 = iVar1 + iVar2 * 2;
    if (param_2 == '\x06') {
      return iVar1 * 6;
    }
    if (bVar3 && bVar4) {
      return iVar1 * 3;
    }
  }
  else {
    if (param_1 != '\x04') {
      if (param_1 != '\x05') {
        return 0;
      }
      if (param_2 != '\x06') {
        if (bVar3 && bVar4) {
          return iVar1 * 4 + iVar2 * 10;
        }
        return (iVar1 + iVar2 * 3) * 4;
      }
      return (iVar1 + iVar2 * 2) * 10;
    }
    iVar1 = iVar1 + iVar2 * 2;
    if (param_2 == '\x06') {
      return iVar1 * 8;
    }
    if (!bVar3 || !bVar4) {
      return iVar1 * 5;
    }
  }
  return iVar1 * 4;
}

