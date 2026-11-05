// SparkDicaItem__TiraGrau__18062a090 @ 0x18062a090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkDicaItem__TiraGrau__18062a090(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (cRam00000001834b3cef == '\0') {
    FUN_180315380(TI_SparkDicaItem);
    FUN_180315380(LIT_"''");
    cRam00000001834b3cef = '\x01';
  }
  if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar5 = LIT_"''";
  if (*param_1 != 0) {
    lVar5 = *param_1;
  }
  lVar1 = *(longlong *)(*(longlong *)(TI_SparkDicaItem + 0xb8) + 0x18);
  if (lVar1 != 0) {
    plVar4 = (longlong *)System_Text_RegularExpressions_Regex__Match(lVar1,lVar5,0);
    if (plVar4 != (longlong *)0x0) {
      cVar3 = func_0x000181db51d0(plVar4,0);
      if (cVar3 == '\0') {
        return 0;
      }
      if (*param_1 != 0) {
        lVar5 = System_String__Remove
                          (*param_1,(int)plVar4[2],*(undefined4 *)((longlong)plVar4 + 0x14),0);
        *param_1 = lVar5;
        func_0x000180314690(param_1,lVar5);
        lVar5 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
        if (lVar5 != 0) {
          lVar5 = func_0x000181db4940(lVar5,1,0);
          if (lVar5 != 0) {
            lVar5 = System_Text_RegularExpressions_Capture__ToString(lVar5,0);
            if (lVar5 != 0) {
              if (DAT_1834b89c9 == '\0') {
                FUN_180315380(TI_System.Globalization.CultureInfo,0);
                DAT_1834b89c9 = '\x01';
              }
              if (*(int *)(TI_System.Globalization.CultureInfo + 0xe4) == 0) {
                func_0x000180315660();
              }
              plVar4 = (longlong *)System_Globalization_CultureInfo__get_InvariantCulture(0);
              if (plVar4 != (longlong *)0x0) {
                plVar4 = (longlong *)
                         (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
                if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018170ca64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar6 = (**(code **)(*plVar4 + 0x1b8))
                                    (plVar4,lVar5,*(undefined8 *)(*plVar4 + 0x1c0));
                  return uVar6;
                }
              }
              FUN_1803155d0();
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return uVar6;
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  uVar6 = (*pcVar2)();
  return uVar6;
}

