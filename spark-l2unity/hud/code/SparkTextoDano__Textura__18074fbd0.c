// SparkTextoDano__Textura__18074fbd0 @ 0x18074fbd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkTextoDano__Textura__18074fbd0(undefined8 param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uStackX_8;
  
  if (cRam00000001834b42b3 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.set_Item);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_SparkTextoDano);
    FUN_180315380(LIT_"'Data/UI/Assets/TextoDano/'");
    cRam00000001834b42b3 = '\x01';
  }
  uStackX_8 = 0;
  if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
    func_0x000180315660(TI_SparkTextoDano);
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x120);
  if (lVar1 != 0) {
    cVar3 = FUN_1812698d0(lVar1,param_1,&uStackX_8,MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.TryGetValue);
    if (cVar3 == '\0') {
      uVar4 = System_String__Concat(LIT_"'Data/UI/Assets/TextoDano/'",param_1,0);
      if (*(int *)(TI_SparkArte + 0xe4) == 0) {
        func_0x000180315660();
      }
      uStackX_8 = FUN_180a90ae0(uVar4,MR_SparkArte.Load<UnityEngine.Texture2D>);
      if (*(int *)(TI_SparkTextoDano + 0xe4) == 0) {
        func_0x000180315660(TI_SparkTextoDano);
      }
      lVar1 = *(longlong *)(*(longlong *)(TI_SparkTextoDano + 0xb8) + 0x120);
      if (lVar1 == 0) goto code_r0x00018074fd28;
      FUN_18126c020(lVar1,param_1,uStackX_8,MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.set_Item);
    }
    return uStackX_8;
  }
code_r0x00018074fd28:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
}

