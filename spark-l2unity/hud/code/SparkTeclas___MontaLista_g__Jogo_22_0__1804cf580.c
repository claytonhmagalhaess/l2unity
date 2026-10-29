// SparkTeclas___MontaLista_g__Jogo_22_0__1804cf580 @ 0x1804cf580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkTeclas___MontaLista_g__Jogo_22_0__1804cf580
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (cRam00000001834b3306 == '\0') {
    FUN_180315380(TI_SparkTeclas.Item);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.Add);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkTeclas);
    cRam00000001834b3306 = '\x01';
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660(TI_SparkTeclas);
  }
  uVar1 = *(undefined8 *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if (cVar4 != '\0') {
    if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
      func_0x000180315660(TI_SparkTeclas);
    }
    lVar5 = *(longlong *)(*(longlong *)(TI_SparkTeclas + 0xb8) + 8);
    if (lVar5 != 0) {
      lVar5 = UnityEngine_InputSystem_InputActionAsset__FindAction(lVar5,param_3,0,0);
      if (lVar5 == 0) {
        return;
      }
      lVar2 = *param_4;
      lVar6 = func_0x000180315580(TI_SparkTeclas.Item);
      SparkTeclas_Item___ctor(lVar6,0);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x18) = param_1;
        func_0x000180314690(lVar6 + 0x18,param_1);
        *(undefined8 *)(lVar6 + 0x10) = param_2;
        func_0x000180314690(lVar6 + 0x10,param_2);
        *(longlong *)(lVar6 + 0x20) = lVar5;
        func_0x000180314690(lVar6 + 0x20,lVar5);
        if (lVar2 != 0) {
          FUN_180002eb0(lVar2,lVar6,MR_System.Collections.Generic.List<SparkTeclas.Item>.Add);
          return;
        }
      }
    }
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

