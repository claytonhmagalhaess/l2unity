// SparkSons__get_Instance__180586f00 @ 0x180586f00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkSons__get_Instance__180586f00(void)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (cRam00000001834b38d4 == '\0') {
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkSons>);
    FUN_180315380(TI_UnityEngine.GameObject);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkSons);
    FUN_180315380(LIT_"'SparkSons'");
    cRam00000001834b38d4 = '\x01';
  }
  uVar4 = **(undefined8 **)(TI_SparkSons + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
  if (cVar2 != '\0') {
    lVar3 = func_0x000180315580(TI_UnityEngine.GameObject);
    UnityEngine_GameObject___ctor(lVar3,LIT_"'SparkSons'",0);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    UnityEngine_Object__DontDestroyOnLoad(lVar3,0);
    if (lVar3 == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    uVar4 = FUN_1809e9600(lVar3,MR_UnityEngine.GameObject.AddComponent<SparkSons>);
    **(undefined8 **)(TI_SparkSons + 0xb8) = uVar4;
    func_0x000180314690(*(undefined8 *)(TI_SparkSons + 0xb8),uVar4);
  }
  return **(undefined8 **)(TI_SparkSons + 0xb8);
}

