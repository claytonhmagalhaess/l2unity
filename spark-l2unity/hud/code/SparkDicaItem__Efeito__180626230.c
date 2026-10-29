// SparkDicaItem__Efeito__180626230 @ 0x180626230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkDicaItem__Efeito__180626230
               (longlong param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 auStackX_18 [2];
  
  auStackX_18[0] = param_3;
  if (cRam00000001834b3cfb == '\0') {
    FUN_180315380(TI_string__);
    FUN_180315380(LIT_"'Skill '");
    FUN_180315380(LIT_"'none'");
    FUN_180315380(LIT_"': '");
    FUN_180315380(LIT_"'%%'");
    FUN_180315380(LIT_"'#9BE36B'");
    FUN_180315380(LIT_"'%'");
    FUN_180315380(LIT_"'#7A7768'");
    FUN_180315380(LIT_"'\\n<color='");
    FUN_180315380(LIT_"'</color>'");
    FUN_180315380(LIT_"'>'");
    cRam00000001834b3cfb = '\x01';
  }
  lVar4 = SkillNameTable__get_Instance(0);
  if (lVar4 == 0) {
code_r0x000180626311:
    lVar4 = 0;
  }
  else {
    lVar4 = SkillNameTable__GetName(lVar4,auStackX_18[0],1,0);
    if (lVar4 == 0) goto code_r0x000180626311;
    lVar4 = *(longlong *)(lVar4 + 0x28);
  }
  cVar3 = System_String__IsNullOrWhiteSpace(lVar4,0);
  if (cVar3 == '\0') {
    cVar3 = func_0x0001817058a0(lVar4,LIT_"'none'",0);
    if (cVar3 != '\0') goto code_r0x000180626337;
  }
  else {
code_r0x000180626337:
    lVar4 = SkillNameTable__get_Instance(0);
    if (lVar4 != 0) {
      lVar4 = SkillNameTable__GetName(lVar4,auStackX_18[0],1,0);
      if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0)) goto DAT_180626387;
    }
    uVar2 = System_Int32__ToString(auStackX_18,0);
    lVar4 = System_String__Concat(LIT_"'Skill '",uVar2,0);
  }
DAT_180626387:
  if (lVar4 != 0) {
    uVar2 = System_String__Replace(lVar4,LIT_"'%%'",LIT_"'%'",0);
    uVar5 = LIT_"'#7A7768'";
    if (param_4 != '\0') {
      uVar5 = LIT_"'#9BE36B'";
    }
    lVar4 = func_0x000180314710(TI_string__,7);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined8 *)(lVar4 + 0x20) = LIT_"'\\n<color='";
        func_0x000180314690(lVar4 + 0x20);
        if (1 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x28) = uVar5;
          func_0x000180314690(lVar4 + 0x28,uVar5);
          if (2 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x30) = LIT_"'>'";
            func_0x000180314690(lVar4 + 0x30);
            if (3 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x38) = param_2;
              func_0x000180314690(lVar4 + 0x38,param_2);
              if (4 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x40) = LIT_"': '";
                func_0x000180314690(lVar4 + 0x40);
                if (5 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x48) = uVar2;
                  func_0x000180314690(lVar4 + 0x48,uVar2);
                  if (6 < *(uint *)(lVar4 + 0x18)) {
                    *(undefined8 *)(lVar4 + 0x50) = LIT_"'</color>'";
                    func_0x000180314690(lVar4 + 0x50);
                    uVar2 = System_String__Concat(lVar4,0);
                    if (param_1 != 0) {
                      System_Text_StringBuilder__Append(param_1,uVar2,0);
                      return;
                    }
                    goto code_r0x0001806264d9;
                  }
                }
              }
            }
          }
        }
      }
      FUN_1803155c0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
code_r0x0001806264d9:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

