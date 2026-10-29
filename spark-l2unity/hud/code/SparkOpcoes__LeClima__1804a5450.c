// SparkOpcoes__LeClima__1804a5450 @ 0x1804a5450

ulonglong SparkOpcoes__LeClima__1804a5450(void)

{
  char cVar1;
  ulonglong uVar2;
  
  if (cRam00000001834b32ab == '\0') {
    FUN_180315380(LIT_"'spark.opt.clima'");
    FUN_180315380(LIT_"'spark.opt.clima3'");
    FUN_180315380(LIT_"'spark.opt.clima2'");
    cRam00000001834b32ab = '\x01';
  }
  cVar1 = UnityEngine_PlayerPrefs__HasKey(LIT_"'spark.opt.clima3'",0);
  if (cVar1 == '\0') {
    cVar1 = UnityEngine_PlayerPrefs__HasKey(LIT_"'spark.opt.clima2'",0);
    if (cVar1 == '\0') {
      uVar2 = UnityEngine_PlayerPrefs__GetInt(LIT_"'spark.opt.clima'",0,0);
      if (2 < (int)uVar2) {
        uVar2 = (ulonglong)((int)uVar2 - 2);
      }
    }
    else {
      uVar2 = UnityEngine_PlayerPrefs__GetInt(LIT_"'spark.opt.clima2'",0,0);
      if (4 < (int)uVar2) {
        uVar2 = (ulonglong)((int)uVar2 - 4);
      }
    }
  }
  else {
    uVar2 = UnityEngine_PlayerPrefs__GetInt(LIT_"'spark.opt.clima3'",0,0);
  }
  return uVar2;
}

