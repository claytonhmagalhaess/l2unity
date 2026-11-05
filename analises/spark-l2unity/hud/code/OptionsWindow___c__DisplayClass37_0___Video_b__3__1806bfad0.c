// OptionsWindow___c__DisplayClass37_0___Video_b__3__1806bfad0 @ 0x1806bfad0

void OptionsWindow___c__DisplayClass37_0___Video_b__3__1806bfad0
               (longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 extraout_var;
  
  if (cRam00000001834b3f2a == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<UnityEngine.Vector2Int>.get_Item);
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3f2a = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xd0), lVar1 != 0)) {
    uVar3 = FUN_180bbafe0(lVar1,param_2,MR_System.Collections.Generic.List<UnityEngine.Vector2Int>.get_Item);
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      func_0x000180315660(TI_SparkOpcoes);
    }
    **(undefined4 **)(TI_SparkOpcoes + 0xb8) = uVar3;
    if ((*(longlong *)(param_1 + 0x10) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xd0), lVar1 != 0)) {
      FUN_180bbafe0(lVar1,param_2,MR_System.Collections.Generic.List<UnityEngine.Vector2Int>.get_Item);
      *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 4) = extraout_var;
      *(undefined4 *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 8) = 0;
      return;
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

