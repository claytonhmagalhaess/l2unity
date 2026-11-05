// ClickManager__EmLoja__1804f3330 @ 0x1804f3330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool ClickManager__EmLoja__1804f3330(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  
  if (cRam00000001834b359b == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkLoja);
    cRam00000001834b359b = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = UnityEngine_Object__op_Inequality(param_1,0,0);
  if (cVar4 != '\0') {
    if (param_1 == 0) {
code_r0x0001804f343a:
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      if (DAT_1834b2f32 == '\0') {
        FUN_180315380(TI_PlayerEntity);
        DAT_1834b2f32 = '\x01';
      }
      uVar2 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = UnityEngine_Object__op_Inequality(param_1,uVar2,0);
      if (cVar4 != '\0') {
        if (*(longlong *)(param_1 + 0x30) != 0) {
          uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x14);
          if (*(int *)(TI_SparkLoja + 0xe4) == 0) {
            func_0x000180315660();
          }
          iVar6 = SparkLoja__TipoDe(uVar1,0);
          return iVar6 != 0;
        }
        goto code_r0x0001804f343a;
      }
    }
  }
  return false;
}

