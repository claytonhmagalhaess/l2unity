// SparkTeclas___MontaLista_g__Nossa_22_1__1804cf710 @ 0x1804cf710

void SparkTeclas___MontaLista_g__Nossa_22_1__1804cf710
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (cRam00000001834b3307 == '\0') {
    FUN_180315380(TI_SparkTeclas.Item);
    FUN_180315380(MR_System.Collections.Generic.List<SparkTeclas.Item>.Add);
    FUN_180315380(TI_SparkTeclas);
    cRam00000001834b3307 = '\x01';
  }
  if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar3 = SparkTeclas__get_Nosso(0);
  if (lVar3 != 0) {
    lVar3 = UnityEngine_InputSystem_InputActionMap__FindAction(lVar3,param_3,0,0);
    if (lVar3 == 0) {
      return;
    }
    lVar1 = *param_4;
    lVar4 = func_0x000180315580(TI_SparkTeclas.Item);
    SparkTeclas_Item___ctor(lVar4,0);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x18) = param_1;
      func_0x000180314690(lVar4 + 0x18,param_1);
      *(undefined8 *)(lVar4 + 0x10) = param_2;
      func_0x000180314690(lVar4 + 0x10,param_2);
      *(longlong *)(lVar4 + 0x20) = lVar3;
      func_0x000180314690(lVar4 + 0x20,lVar3);
      if (lVar1 != 0) {
        FUN_180002eb0(lVar1,lVar4,MR_System.Collections.Generic.List<SparkTeclas.Item>.Add);
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

