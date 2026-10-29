// SparkBalao__De__1805d24a0 @ 0x1805d24a0

undefined8 SparkBalao__De__1805d24a0(undefined4 param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (cRam00000001834b3b2a == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<string,float>>.Remove);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<string,float>>.TryGetValue);
    FUN_180315380(TI_SparkBalao);
    cRam00000001834b3b2a = '\x01';
  }
  uStack_18 = 0;
  uStack_10 = 0;
  if (*(int *)(TI_SparkBalao + 0xe4) == 0) {
    func_0x000180315660(TI_SparkBalao);
  }
  if (**(longlong **)(TI_SparkBalao + 0xb8) != 0) {
    cVar2 = FUN_1811e1920(**(longlong **)(TI_SparkBalao + 0xb8),param_1,&uStack_18,
                          MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<string,float>>.TryGetValue);
    if (cVar2 != '\0') {
      fVar4 = (float)FUN_182436650(0);
      if (fVar4 <= (float)uStack_10) {
        return uStack_18;
      }
      if (*(int *)(TI_SparkBalao + 0xe4) == 0) {
        func_0x000180315660(TI_SparkBalao);
      }
      if (**(longlong **)(TI_SparkBalao + 0xb8) == 0) goto code_r0x0001805d2586;
      FUN_1811d9ff0(**(longlong **)(TI_SparkBalao + 0xb8),param_1,MR_System.Collections.Generic.Dictionary<int,System.ValueTuple<string,float>>.Remove);
    }
    return 0;
  }
code_r0x0001805d2586:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

