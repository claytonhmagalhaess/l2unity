// SparkDetalhePersonagem__Termina__180498f60 @ 0x180498f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkDetalhePersonagem__Termina__180498f60
               (longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  
  if (cRam00000001834b327c == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<UnityEngine.Mesh,UnityEngine.Mesh__>.set_Item);
    FUN_180315380(MR_System.Collections.Generic.List<SparkDetalhePersonagem.Trabalho>.RemoveAt);
    FUN_180315380(MR_System.Collections.Generic.List<SparkDetalhePersonagem.Trabalho>.get_Item);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b327c = '\x01';
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar4 = FUN_180bbafe0(*(longlong *)(param_1 + 0x80),param_2,MR_System.Collections.Generic.List<SparkDetalhePersonagem.Trabalho>.get_Item);
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_18164e790(*(longlong *)(param_1 + 0x80),param_2,MR_System.Collections.Generic.List<SparkDetalhePersonagem.Trabalho>.RemoveAt);
      if (lVar4 != 0) {
        uVar1 = *(undefined8 *)(lVar4 + 0x10);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
        if (cVar3 == '\0') {
          if (param_3 == 0) goto code_r0x0001804990d2;
          for (uVar5 = 0; (int)uVar5 < *(int *)(param_3 + 0x18); uVar5 = uVar5 + 1) {
            if (*(uint *)(param_3 + 0x18) <= uVar5) {
              FUN_1803155c0();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar1 = *(undefined8 *)(param_3 + 0x20 + (longlong)(int)uVar5 * 8);
            if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
              func_0x000180315660();
            }
            cVar3 = UnityEngine_Object__op_Inequality(uVar1,0,0);
            if (cVar3 != '\0') {
              if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
                func_0x000180315660();
              }
              UnityEngine_Object__Destroy(uVar1);
            }
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x68) == 0) goto code_r0x0001804990d2;
          FUN_18126c020(*(longlong *)(param_1 + 0x68),*(undefined8 *)(lVar4 + 0x10),param_3,
                        MR_System.Collections.Generic.Dictionary<UnityEngine.Mesh,UnityEngine.Mesh__>.set_Item);
        }
        return;
      }
    }
  }
code_r0x0001804990d2:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

