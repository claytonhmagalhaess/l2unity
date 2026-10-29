// SparkMacros__Executa__1804745f0 @ 0x1804745f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMacros__Executa__1804745f0(undefined4 param_1)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (DAT_1834b3082 == '\0') {
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<SparkMacros.MacroRunner>);
    FUN_180315380(TI_UnityEngine.GameObject);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkMacros);
    FUN_180315380(LIT_"'SparkMacros'");
    DAT_1834b3082 = '\x01';
  }
  if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
    func_0x000180315660();
  }
  if (DAT_1834b307b == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Macro>.Find);
    FUN_180315380(TI_System.Predicate<SparkMacros.Macro>);
    FUN_180315380(TI_SparkMacros);
    FUN_180315380(MD_SparkMacros.__c__DisplayClass18_0._Busca_b__0);
    FUN_180315380(TI_SparkMacros.<>c__DisplayClass18_0);
    DAT_1834b307b = '\x01';
  }
  lVar3 = func_0x000180315580(TI_SparkMacros.<>c__DisplayClass18_0);
  Gear__UpdateWeaponType__1803dadf0(lVar3,0);
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x10) = param_1;
    if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
      func_0x000180315660(TI_SparkMacros);
    }
    lVar5 = **(longlong **)(TI_SparkMacros + 0xb8);
    uVar4 = func_0x000180315580(TI_System.Predicate<SparkMacros.Macro>);
    FUN_180d27680(uVar4,lVar3,MD_SparkMacros.__c__DisplayClass18_0._Busca_b__0,0);
    if (lVar5 != 0) {
      lVar3 = FUN_180bad500(lVar5,uVar4,MR_System.Collections.Generic.List<SparkMacros.Macro>.Find);
      if (lVar3 != 0) {
        if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
          func_0x000180315660(TI_SparkMacros);
        }
        uVar4 = *(undefined8 *)(*(longlong *)(TI_SparkMacros + 0xb8) + 0x20);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
        if (cVar2 != '\0') {
          lVar5 = func_0x000180315580(TI_UnityEngine.GameObject);
          UnityEngine_GameObject___ctor(lVar5,LIT_"'SparkMacros'",0);
          if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
            func_0x000180315660();
          }
          UnityEngine_Object__DontDestroyOnLoad(lVar5,0);
          if (lVar5 == 0) goto LAB_18047490a;
          uVar4 = FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<SparkMacros.MacroRunner>);
          if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
            func_0x000180315660();
          }
          *(undefined8 *)(*(longlong *)(TI_SparkMacros + 0xb8) + 0x20) = uVar4;
          func_0x000180314690(*(longlong *)(TI_SparkMacros + 0xb8) + 0x20,uVar4);
        }
        if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
          func_0x000180315660(TI_SparkMacros);
        }
        lVar5 = *(longlong *)(*(longlong *)(TI_SparkMacros + 0xb8) + 0x20);
        if (lVar5 == 0) goto LAB_18047490a;
        if (*(longlong *)(lVar5 + 0x20) != 0) {
          UnityEngine_MonoBehaviour__StopCoroutine(lVar5,*(undefined8 *)(lVar5 + 0x20),0);
        }
        if (DAT_1834b308a == '\0') {
          FUN_180315380(TI_SparkMacros.MacroRunner.<Executa>d__2);
          DAT_1834b308a = '\x01';
        }
        lVar6 = func_0x000180315580(TI_SparkMacros.MacroRunner.<Executa>d__2);
        Gear__UpdateWeaponType__1803dadf0(lVar6,0);
        *(undefined4 *)(lVar6 + 0x10) = 0;
        *(longlong *)(lVar6 + 0x28) = lVar5;
        func_0x000180314690(lVar6 + 0x28,lVar5);
        *(longlong *)(lVar6 + 0x20) = lVar3;
        func_0x000180314690(lVar6 + 0x20,lVar3);
        uVar4 = UnityEngine_MonoBehaviour__StartCoroutine(lVar5,lVar6,0);
        *(undefined8 *)(lVar5 + 0x20) = uVar4;
        func_0x000180314690(lVar5 + 0x20,uVar4);
      }
      return;
    }
  }
LAB_18047490a:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

