// RestartingState__Enter__180479b50 @ 0x180479b50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RestartingState__Enter__180479b50(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b3020 == '\0') {
    FUN_180315380(TI_MusicManager);
    cRam00000001834b3020 = '\x01';
  }
  if (**(longlong **)(TI_MusicManager + 0xb8) != 0) {
    MusicManager__Clear(**(longlong **)(TI_MusicManager + 0xb8),0);
    if (*(longlong *)(param_1 + 0x18) != 0) {
      GameManager__StartLoading(*(longlong *)(param_1 + 0x18),0);
      if (cRam00000001834b31c5 == '\0') {
        FUN_180315380(TI_SceneLoader);
        cRam00000001834b31c5 = '\x01';
      }
      lVar6 = **(longlong **)(TI_SceneLoader + 0xb8);
      if (lVar6 != 0) {
        if (cRam00000001834b313d == '\0') {
          FUN_180315380(TI_System.Action<UnityEngine.AsyncOperation>);
          FUN_180315380(MD_SceneLoader._LoadMenu_b__14_0);
          cRam00000001834b313d = '\x01';
        }
        SceneLoader__EsqueceRegiao(lVar6,0);
        uVar5 = *(undefined8 *)(lVar6 + 0x20);
        lVar3 = func_0x000180315580(TI_System.Action<UnityEngine.AsyncOperation>);
        FUN_18055b980(lVar3,lVar6,MD_SceneLoader._LoadMenu_b__14_0,0);
        if (cRam00000001834b313f == '\0') {
          FUN_180315380(TI_System.Action<UnityEngine.AsyncOperation>,uVar5,lVar3,0,unaff_RDI);
          FUN_180315380(TI_UnityEngine.AsyncOperation);
          FUN_180315380(TI_UnityEngine.Debug);
          FUN_180315380(TI_UnityEngine.SceneManagement.SceneManager);
          FUN_180315380(TI_SparkArte);
          FUN_180315380(MD_SceneLoader.__c._SwitchScene_b__16_0);
          FUN_180315380(TI_SceneLoader.<>c);
          FUN_180315380(LIT_"'Skipping scene switch '");
          FUN_180315380(LIT_"'Switching to scene '");
          cRam00000001834b313f = '\x01';
        }
        if (*(int *)(TI_UnityEngine.SceneManagement.SceneManager + 0xe4) == 0) {
          func_0x000180315660();
        }
        UnityEngine_SceneManagement_SceneManager__GetActiveScene(0);
        uVar4 = func_0x000182464d30(&stack0x00000010,0);
        cVar2 = System_String__op_Inequality(uVar4,uVar5,0);
        if (cVar2 == '\0') {
          uVar5 = System_String__Concat(LIT_"'Skipping scene switch '");
          if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
            func_0x000180315660();
          }
          UnityEngine_Debug__Log(uVar5,0);
          uVar5 = func_0x000180315580(TI_UnityEngine.AsyncOperation);
          SparkMapaWindow_Loja___ctor__1803f01b0(uVar5,0);
          if (lVar3 == 0) {
code_r0x000180485e22:
            FUN_1803155d0();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (**(code **)(lVar3 + 0x18))
                    (*(undefined8 *)(lVar3 + 0x40),uVar5,*(undefined8 *)(lVar3 + 0x28));
        }
        else {
          uVar4 = System_String__Concat(LIT_"'Switching to scene '",uVar5,0);
          if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
            func_0x000180315660();
          }
          UnityEngine_Debug__Log(uVar4,0);
          if (*(int *)(TI_SparkArte + 0xe4) == 0) {
            func_0x000180315660();
          }
          SparkArte__GaranteCena(uVar5,0);
          if (*(int *)(TI_UnityEngine.SceneManagement.SceneManager + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar6 = UnityEngine_SceneManagement_SceneManager__LoadSceneAsync(uVar5,0);
          if (*(int *)(TI_SceneLoader.<>c + 0xe4) == 0) {
            func_0x000180315660(TI_SceneLoader.<>c);
          }
          lVar7 = *(longlong *)(*(longlong *)(TI_SceneLoader.<>c + 0xb8) + 0x10);
          if (lVar7 == 0) {
            if (*(int *)(TI_SceneLoader.<>c + 0xe4) == 0) {
              func_0x000180315660(TI_SceneLoader.<>c);
            }
            uVar5 = **(undefined8 **)(TI_SceneLoader.<>c + 0xb8);
            lVar7 = func_0x000180315580(TI_System.Action<UnityEngine.AsyncOperation>);
            FUN_18055b980(lVar7,uVar5,MD_SceneLoader.__c._SwitchScene_b__16_0,0);
            *(longlong *)(*(longlong *)(TI_SceneLoader.<>c + 0xb8) + 0x10) = lVar7;
            func_0x000180314690(*(longlong *)(TI_SceneLoader.<>c + 0xb8) + 0x10,lVar7);
          }
          if (lVar6 == 0) goto code_r0x000180485e22;
          UnityEngine_AsyncOperation__add_completed(lVar6,lVar7,0);
          UnityEngine_AsyncOperation__add_completed(lVar6,lVar3,0);
        }
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

