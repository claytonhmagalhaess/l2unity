// SparkSons__Clipe__180584eb0 @ 0x180584eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkSons__Clipe__180584eb0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uStackX_10;
  undefined8 uStackX_20;
  
  if (DAT_1834b38e2 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.AudioClip>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.AudioClip>.set_Item);
    FUN_180315380(MR_System.Collections.Generic.HashSet<string>.Add);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.AudioClip>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(LIT_"'[SPARK] som nao exportado: '");
    DAT_1834b38e2 = '\x01';
  }
  uStackX_10 = 0;
  uStackX_20 = 0;
  lVar3 = SparkSons__Chave__180584d90(param_2,0);
  if (lVar3 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    cVar2 = FUN_1812698d0(*(longlong *)(param_1 + 0x28),lVar3,&uStackX_10,MR_System.Collections.Generic.Dictionary<string,UnityEngine.AudioClip>.TryGetValue);
    if (cVar2 != '\0') {
      return uStackX_10;
    }
    lVar4 = SparkSons__Indice__180585910(param_1,0);
    if (lVar4 != 0) {
      cVar2 = FUN_1812698d0(lVar4,lVar3,&uStackX_20,MR_System.Collections.Generic.Dictionary<string,string>.TryGetValue);
      uVar5 = uStackX_20;
      if (cVar2 == '\0') {
        if (*(longlong *)(param_1 + 0x30) != 0) {
          cVar2 = func_0x0001814ce980(*(longlong *)(param_1 + 0x30),lVar3,MR_System.Collections.Generic.HashSet<string>.Add);
          if (cVar2 == '\0') {
            return 0;
          }
          uVar5 = System_String__Concat(LIT_"'[SPARK] som nao exportado: '",param_2,0);
          if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
            func_0x000180315660();
          }
          UnityEngine_Debug__LogWarning(uVar5,0);
          return 0;
        }
      }
      else {
        if (*(int *)(TI_SparkArte + 0xe4) == 0) {
          func_0x000180315660();
        }
        uStackX_10 = FUN_180a90ae0(uVar5,MR_SparkArte.Load<UnityEngine.AudioClip>);
        if (*(longlong *)(param_1 + 0x28) != 0) {
          FUN_18126c020(*(longlong *)(param_1 + 0x28),lVar3,uStackX_10,MR_System.Collections.Generic.Dictionary<string,UnityEngine.AudioClip>.set_Item);
          return uStackX_10;
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}

