// SparkTeclas__Troca__1804cf210 @ 0x1804cf210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTeclas__Troca__1804cf210(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if (cRam00000001834b3303 == '\0') {
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkTeclas.Captura>);
    FUN_180315380(TI_UnityEngine.GameObject);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(LIT_"'SparkTeclasCaptura'");
    cRam00000001834b3303 = '\x01';
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834b3302 == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkTeclas);
    DAT_1834b3302 = '\x01';
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar4 = *(undefined8 *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x30);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if (cVar2 != '\0') {
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar3 = *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x30);
    if (lVar3 == 0) goto code_r0x0001804cf492;
    if (*(char *)(lVar3 + 0x20) != '\0') {
      return;
    }
  }
  if (param_1 != 0) {
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = *(undefined8 *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x30);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
    if (cVar2 != '\0') {
      lVar3 = func_0x000180315580(TI_UnityEngine.GameObject);
      UnityEngine_GameObject___ctor(lVar3,LIT_"'SparkTeclasCaptura'",0);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      UnityEngine_Object__DontDestroyOnLoad(lVar3,0);
      if (lVar3 == 0) goto code_r0x0001804cf492;
      uVar4 = FUN_1809e9600(lVar3,MR_UnityEngine.GameObject.AddComponent<SparkTeclas.Captura>);
      if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
        func_0x000180315660();
      }
      *(undefined8 *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x30) = uVar4;
      func_0x000180314690(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x30,uVar4);
    }
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660(TI_SparkTeclas);
    }
    lVar3 = *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 0x30);
    if (lVar3 == 0) {
code_r0x0001804cf492:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(longlong *)(lVar3 + 0x28) = param_1;
    func_0x000180314690(lVar3 + 0x28,param_1);
    *(undefined4 *)(lVar3 + 0x30) = param_2;
    *(undefined8 *)(lVar3 + 0x38) = param_3;
    func_0x000180314690(lVar3 + 0x38,param_3);
    uVar5 = FUN_1824366b0(0);
    *(undefined4 *)(lVar3 + 0x40) = uVar5;
    *(undefined4 *)(lVar3 + 0x44) = 0;
    *(undefined1 *)(lVar3 + 0x20) = 1;
  }
  return;
}

