// SparkDetalhePersonagem__EhSimplificadaDe__180496f20 @ 0x180496f20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkDetalhePersonagem__EhSimplificadaDe__180496f20(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lStackX_10;
  
  if (cRam00000001834b3277 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.Mesh,UnityEngine.Mesh__>.TryGetValue);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3277 = '\x01';
  }
  lStackX_10 = 0;
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Equality(param_2,0,0);
  if (cVar3 == '\0') {
    if (*(longlong *)(param_1 + 0x68) == 0) {
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    cVar3 = FUN_1812698d0(*(longlong *)(param_1 + 0x68),param_2,&lStackX_10,MR_System.Collections.Generic.Dictionary<UnityEngine.Mesh,UnityEngine.Mesh__>.TryGetValue);
    lVar2 = lStackX_10;
    if ((cVar3 != '\0') && (lStackX_10 != 0)) {
      uVar5 = 0;
      while( true ) {
        if (*(int *)(lVar2 + 0x18) <= (int)uVar5) {
          return 0;
        }
        if (*(uint *)(lVar2 + 0x18) <= uVar5) break;
        uVar4 = *(undefined8 *)(lVar2 + 0x20 + (longlong)(int)uVar5 * 8);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
        if (cVar3 != '\0') {
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar3 = UnityEngine_Object__op_Equality(uVar4);
          if (cVar3 != '\0') {
            return 1;
          }
        }
        uVar5 = uVar5 + 1;
      }
      FUN_1803155c0();
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  return 0;
}

