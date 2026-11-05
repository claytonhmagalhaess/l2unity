// OptionsWindow__LigaTextoDano__180696a00 @ 0x180696a00

void OptionsWindow__LigaTextoDano__180696a00(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  longlong lStack_30;
  undefined8 uStack_28;
  undefined8 *puStack_20;
  longlong lStack_18;
  
  if (cRam00000001834b3e8c == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.GetEnumerator);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3e8c = '\x01';
  }
  uStack_28 = 0;
  puStack_20 = (undefined8 *)0x0;
  lStack_18 = 0;
  param_3 = param_3 + param_2;
  do {
    if (param_3 <= (int)param_2) {
      if (*(longlong *)(param_1 + 0xb0) == 0) {
code_r0x000180696b9a:
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_180bada40(&uStack_40,*(longlong *)(param_1 + 0xb0),MR_System.Collections.Generic.List<System.Action>.GetEnumerator);
      uStack_28 = uStack_40;
      puStack_20 = puStack_38;
      lStack_18 = lStack_30;
      uStack_40 = 0;
      puStack_38 = &uStack_28;
      while( true ) {
        cVar3 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<System.Action>.MoveNext);
        if (cVar3 == '\0') {
          func_0x0001803dadf0(&uStack_28,MR_System.Collections.Generic.List<System.Action>.Dispose);
          return;
        }
        if (lStack_18 == 0) break;
        (**(code **)(lStack_18 + 0x18))
                  (*(undefined8 *)(lStack_18 + 0x40),*(undefined8 *)(lStack_18 + 0x28));
      }
code_r0x000180696b8e:
      FUN_1803155d0();
      FUN_180311490();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    lVar1 = *(longlong *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xf8);
    if (lVar1 == 0) goto code_r0x000180696b9a;
    if (*(uint *)(lVar1 + 0x18) <= param_2) {
      FUN_1803155c0();
      goto code_r0x000180696b8e;
    }
    *(undefined1 *)((longlong)(int)param_2 + 0x20 + lVar1) = 1;
    param_2 = param_2 + 1;
  } while( true );
}

