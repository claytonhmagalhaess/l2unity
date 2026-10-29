// SkillbarImageTable__LoadTextureByKey__1806d5dd0 @ 0x1806d5dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SkillbarImageTable__LoadTextureByKey__1806d5dd0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uStackX_10;
  
  if (cRam00000001834b401d == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.Add);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.TryGetValue);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(LIT_"'\\\\Shortcuts\\\\ShortcutWnd_DF_Key_'");
    FUN_180315380(LIT_"'Missing skillbar icon: '");
    cRam00000001834b401d = '\x01';
  }
  uStackX_10 = 0;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x10) == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      cVar2 = FUN_1812698d0(*(longlong *)(param_1 + 0x18),param_2,&uStackX_10,MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.TryGetValue);
      if (cVar2 == '\0') {
        uVar3 = System_String__Concat
                          (*(undefined8 *)(param_1 + 0x10),LIT_"'\\\\Shortcuts\\\\ShortcutWnd_DF_Key_'",param_2,0);
        if (*(int *)(TI_SparkArte + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar3 = FUN_180a90ae0(uVar3,MR_SparkArte.Load<UnityEngine.Texture2D>);
        uStackX_10 = uVar3;
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if (cVar2 == '\0') {
          uVar3 = System_String__Concat(LIT_"'Missing skillbar icon: '",param_2,0);
          if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
            func_0x000180315660();
          }
          UnityEngine_Debug__LogWarning(uVar3,0);
          return 0;
        }
        if (*(longlong *)(param_1 + 0x18) == 0) goto code_r0x0001806d5f78;
        FUN_18125dd50(*(longlong *)(param_1 + 0x18),param_2,uStackX_10,MR_System.Collections.Generic.Dictionary<string,UnityEngine.Texture2D>.Add);
      }
      return uStackX_10;
    }
  }
code_r0x0001806d5f78:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

