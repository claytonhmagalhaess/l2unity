// SparkMapaWindow_Andar__NaPlanta__180654830 @ 0x180654830

undefined8 SparkMapaWindow_Andar__NaPlanta__180654830(longlong param_1,undefined8 param_2)

{
  undefined4 uStackX_c;
  
  uStackX_c = (float)((ulonglong)param_2 >> 0x20);
  return CONCAT44((uStackX_c - *(float *)(param_1 + 0x24)) * *(float *)(param_1 + 0x28),
                  ((float)param_2 - *(float *)(param_1 + 0x20)) * *(float *)(param_1 + 0x28));
}

