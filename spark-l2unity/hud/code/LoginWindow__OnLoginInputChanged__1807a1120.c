// LoginWindow__OnLoginInputChanged__1807a1120 @ 0x1807a1120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginWindow__OnLoginInputChanged__1807a1120(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  
  if (cRam00000001834b44c2 == '\0') {
    FUN_180315380(MR_UnityEngine.UIElements.ChangeEvent<string>.get_newValue);
    FUN_180315380(MR_UnityEngine.UIElements.ChangeEvent<string>.get_previousValue);
    FUN_180315380(TI_System.Text.RegularExpressions.Regex);
    FUN_180315380(LIT_"'^[a-zA-Z0-9]{0,16}$'");
    cRam00000001834b44c2 = '\x01';
  }
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x70);
    lVar5 = func_0x000180315580(TI_System.Text.RegularExpressions.Regex);
    System_Text_RegularExpressions_Regex___ctor(lVar5,LIT_"'^[a-zA-Z0-9]{0,16}$'",0);
    if (lVar5 != 0) {
      cVar4 = System_Text_RegularExpressions_Regex__IsMatch(lVar5,uVar1,0);
      if (cVar4 == '\0') {
        plVar2 = *(longlong **)(param_1 + 0x90);
        if (plVar2 == (longlong *)0x0) goto code_r0x0001807a11f0;
        (**(code **)(*plVar2 + 0xb28))
                  (plVar2,*(undefined8 *)(param_2 + 0x68),*(undefined8 *)(*plVar2 + 0xb30));
      }
      return;
    }
  }
code_r0x0001807a11f0:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

