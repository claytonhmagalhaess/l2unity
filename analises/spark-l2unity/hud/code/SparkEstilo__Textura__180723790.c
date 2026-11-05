// SparkEstilo__Textura__180723790 @ 0x180723790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkEstilo__Textura__180723790(undefined8 param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uStackX_8;
  
  if (cRam00000001834b41ea == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.set_Item);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_SparkEstilo);
    FUN_180315380(LIT_"'Data/UI/Assets/'");
    cRam00000001834b41ea = '\x01';
  }
  uStackX_8 = 0;
  if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
    func_0x000180315660(TI_SparkEstilo);
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0xd8);
  if (lVar1 != 0) {
    cVar3 = FUN_1812698d0(lVar1,param_1,&uStackX_8,MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.TryGetValue);
    uVar4 = uStackX_8;
    if (cVar3 != '\0') {
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar3 = UnityEngine_Object__op_Equality(uVar4,0,0);
      if (cVar3 == '\0') {
        return uStackX_8;
      }
    }
    uVar4 = System_String__Concat(LIT_"'Data/UI/Assets/'",param_1,0);
    if (*(int *)(TI_SparkArte + 0xe4) == 0) {
      func_0x000180315660();
    }
    uStackX_8 = FUN_180a90ae0(uVar4,MR_SparkArte.Load<UnityEngine.Texture2D>);
    if (*(int *)(TI_SparkEstilo + 0xe4) == 0) {
      func_0x000180315660(TI_SparkEstilo);
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkEstilo + 0xb8) + 0xd8);
    if (lVar1 != 0) {
      FUN_18126c020(lVar1,param_1,uStackX_8,MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.set_Item);
      return uStackX_8;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}

