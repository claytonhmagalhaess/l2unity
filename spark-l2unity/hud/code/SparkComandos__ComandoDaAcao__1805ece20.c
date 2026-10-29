// SparkComandos__ComandoDaAcao__1805ece20 @ 0x1805ece20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkComandos__ComandoDaAcao__1805ece20(int param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  int aiStackX_8 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  aiStackX_8[0] = param_1;
  if (cRam00000001834b3b3f == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,int>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,int>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,int>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,int>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<string,int>.get_Key);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<string,int>.get_Value);
    FUN_180315380(TI_SparkComandos);
    FUN_180315380(LIT_"'/'");
    FUN_180315380(LIT_"'/action '");
    cRam00000001834b3b3f = '\x01';
  }
  if (*(int *)(TI_SparkComandos + 0xe4) == 0) {
    func_0x000180315660(TI_SparkComandos);
  }
  if (**(longlong **)(TI_SparkComandos + 0xb8) != 0) {
    FUN_18117ccd0(&uStack_38,**(longlong **)(TI_SparkComandos + 0xb8),MR_System.Collections.Generic.Dictionary<string,int>.GetEnumerator);
    uStack_60 = uStack_38;
    uStack_58 = uStack_30;
    uStack_50 = uStack_28;
    uStack_48 = uStack_20;
    uStack_40 = uStack_18;
    do {
      cVar2 = FUN_18133ba70(&uStack_60,MR_System.Collections.Generic.Dictionary<string,int>.MoveNext);
      if (cVar2 == '\0') {
        Gear__UpdateWeaponType__1803dadf0(&uStack_60,MR_System.Collections.Generic.Dictionary<string,int>.Dispose);
        uVar3 = System_Int32__ToString(aiStackX_8,0);
        uVar3 = System_String__Concat(LIT_"'/action '",uVar3,0);
        return uVar3;
      }
    } while ((int)uStack_48 != aiStackX_8[0]);
    uVar3 = System_String__Concat(LIT_"'/'",uStack_50,0);
    Gear__UpdateWeaponType__1803dadf0(&uStack_60,MR_System.Collections.Generic.Dictionary<string,int>.Dispose);
    return uVar3;
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

