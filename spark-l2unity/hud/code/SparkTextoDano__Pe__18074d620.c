// SparkTextoDano__Pe__18074d620 @ 0x18074d620

undefined8 * SparkTextoDano__Pe__18074d620(undefined8 *param_1,undefined8 param_2)

{
  undefined4 auStackX_8 [2];
  
  if (cRam00000001834b42a6 == '\0') {
    FUN_180315380(TI_SparkMontaria);
    cRam00000001834b42a6 = '\x01';
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  auStackX_8[0] = 0;
  if (*(int *)(TI_SparkMontaria + 0xe4) == 0) {
    func_0x000180315660();
  }
  SparkMontaria__Corpo(param_2,param_1,auStackX_8,0);
  return param_1;
}

