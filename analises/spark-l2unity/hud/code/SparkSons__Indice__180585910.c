// SparkSons__Indice__180585910 @ 0x180585910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkSons__Indice__180585910(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  if (DAT_1834b38e4 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>..ctor);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.set_Item);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<string,string>);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.TextAsset>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(LIT_"'Data/Sounds/_indice'");
    DAT_1834b38e4 = '\x01';
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    return *(undefined8 *)(param_1 + 0x20);
  }
  uVar5 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<string,string>);
  FUN_18124bf80(uVar5,MR_System.Collections.Generic.Dictionary<string,string>..ctor);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  func_0x000180314690(param_1 + 0x20,uVar5);
  if (*(int *)(TI_SparkArte + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar6 = FUN_180a90ae0(LIT_"'Data/Sounds/_indice'",MR_SparkArte.Load<UnityEngine.TextAsset>);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar3 = UnityEngine_Object__op_Inequality(lVar6,0,0);
  if (cVar3 != '\0') {
    if (lVar6 != 0) {
      lVar6 = UnityEngine_TextAsset__ToString(lVar6,0);
      if (lVar6 != 0) {
        lVar6 = System_String__Split(lVar6,10,0,0);
        if (lVar6 != 0) {
          for (uVar8 = 0; (int)uVar8 < *(int *)(lVar6 + 0x18); uVar8 = uVar8 + 1) {
            if (*(uint *)(lVar6 + 0x18) <= uVar8) {
              FUN_1803155c0();
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return uVar5;
            }
            lVar7 = *(longlong *)(lVar6 + 0x20 + (longlong)(int)uVar8 * 8);
            if (lVar7 == 0) goto LAB_180585b3a;
            iVar4 = func_0x0001817079f0(lVar7,9,0);
            if (0 < iVar4) {
              lVar1 = *(longlong *)(param_1 + 0x20);
              uVar5 = System_String__Substring(lVar7,0,iVar4,0);
              lVar7 = func_0x00018170c060(lVar7,iVar4 + 1,0);
              if (lVar7 == 0) goto LAB_180585b3a;
              func_0x00018170d270(lVar7,0);
              if (lVar1 == 0) goto LAB_180585b3a;
              FUN_18126c020(lVar1,uVar5);
            }
          }
          goto LAB_180585b00;
        }
      }
    }
LAB_180585b3a:
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
LAB_180585b00:
  return *(undefined8 *)(param_1 + 0x20);
}

