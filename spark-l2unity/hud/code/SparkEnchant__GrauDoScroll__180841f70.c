// SparkEnchant__GrauDoScroll__180841f70 @ 0x180841f70

longlong SparkEnchant__GrauDoScroll__180841f70(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)(param_1 - 0x2d9U);
  if (param_1 - 0x2d9U < 4) {
LAB_180841fdd:
    return CONCAT71((int7)(uVar1 >> 8),4);
  }
  uVar1 = (ulonglong)(param_1 - 0x3b3U);
  if (param_1 - 0x3b3U < 4) {
LAB_180841fda:
    return CONCAT71((int7)(uVar1 >> 8),3);
  }
  uVar1 = (ulonglong)(param_1 - 0x3b7U);
  if (param_1 - 0x3b7U < 4) {
LAB_180841fd7:
    return CONCAT71((int7)(uVar1 >> 8),2);
  }
  uVar1 = (ulonglong)(param_1 - 0x3bbU);
  if (3 < param_1 - 0x3bbU) {
    uVar1 = (ulonglong)(param_1 - 0x3bfU);
    if (3 < param_1 - 0x3bfU) {
      if (9 < param_1 - 0x19a9U) {
        return (ulonglong)(uint3)(param_1 - 0x19a9U >> 8) << 8;
      }
      uVar1 = (ulonglong)*(uint *)(&UNK_180841fe0 + (longlong)(param_1 + -0x19a9) * 4) + 0x180000000
      ;
      switch(param_1) {
      default:
        goto LAB_180841fdd;
      case 0x19ab:
      case 0x19ac:
        goto LAB_180841fda;
      case 0x19ad:
      case 0x19ae:
        goto LAB_180841fd7;
      case 0x19af:
      case 0x19b0:
        goto LAB_180841fd4;
      case 0x19b1:
      case 0x19b2:
        break;
      }
    }
    return CONCAT71((int7)(uVar1 >> 8),5);
  }
LAB_180841fd4:
  return CONCAT71((int7)(uVar1 >> 8),1);
}

