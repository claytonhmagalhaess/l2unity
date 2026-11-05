// SparkEnchant__ScrollDeArma__180842100 @ 0x180842100

uint SparkEnchant__ScrollDeArma__180842100(int param_1)

{
  uint uVar1;
  
  if (param_1 - 0x19a9U < 10) {
    return (uint)(-(char)param_1 & 1);
  }
  uVar1 = param_1 - 0x3b3;
  if (param_1 < 0x3b3) {
    uVar1 = param_1 - 0x2d9;
  }
  uVar1 = uVar1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  if (uVar1 == 0) {
    return 1;
  }
  return CONCAT31((int3)(uVar1 >> 8),uVar1 == 2);
}

