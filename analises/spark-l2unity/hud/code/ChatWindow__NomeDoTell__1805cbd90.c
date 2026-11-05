// ChatWindow__NomeDoTell__1805cbd90 @ 0x1805cbd90

undefined1
ChatWindow__NomeDoTell__1805cbd90(longlong param_1,undefined8 *param_2,undefined1 *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  undefined1 extraout_AL_01;
  undefined1 extraout_AL_02;
  undefined1 extraout_AL_03;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 extraout_AH_01;
  undefined1 extraout_AH_02;
  undefined1 extraout_AH_03;
  undefined1 extraout_AH_04;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  
  *param_2 = 0;
  func_0x000180314690(param_2,0);
  *param_3 = 0;
  cVar2 = func_0x000181707e50(param_1,0);
  if (cVar2 == '\0') {
    if (param_1 == 0) {
code_r0x0001805cbe98:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    uVar3 = System_String__get_Chars(param_1,0,0);
    if (CONCAT11(extraout_AH,uVar3) == 0x22) {
      func_0x0001817079f0(param_1,0x20,0);
      if ((int)(CONCAT22(extraout_var,CONCAT11(extraout_AH_00,extraout_AL)) &
               CONCAT22(extraout_var,CONCAT11(extraout_AH_00,extraout_AL))) < 0) {
        func_0x00018170c060(param_1,1,0);
        *param_2 = CONCAT44(extraout_var_07,
                            CONCAT22(extraout_var_03,CONCAT11(extraout_AH_04,extraout_AL_03)));
        func_0x000180314690(param_2,CONCAT44(extraout_var_07,
                                             CONCAT22(extraout_var_03,
                                                      CONCAT11(extraout_AH_04,extraout_AL_03))));
        return 1;
      }
      if (CONCAT22(extraout_var,CONCAT11(extraout_AH_00,extraout_AL)) != 1) {
        func_0x00018170c060(param_1,CONCAT22(extraout_var,CONCAT11(extraout_AH_00,extraout_AL)),0);
        if (((CONCAT44(extraout_var_04,
                       CONCAT22(extraout_var_00,CONCAT11(extraout_AH_01,extraout_AL_00))) &
             CONCAT44(extraout_var_04,
                      CONCAT22(extraout_var_00,CONCAT11(extraout_AH_01,extraout_AL_00)))) != 0) &&
           (func_0x00018170d270(CONCAT44(extraout_var_04,
                                         CONCAT22(extraout_var_00,
                                                  CONCAT11(extraout_AH_01,extraout_AL_00))),0),
           (CONCAT44(extraout_var_05,
                     CONCAT22(extraout_var_01,CONCAT11(extraout_AH_02,extraout_AL_01))) &
           CONCAT44(extraout_var_05,
                    CONCAT22(extraout_var_01,CONCAT11(extraout_AH_02,extraout_AL_01)))) != 0)) {
          if (0 < *(int *)(CONCAT44(extraout_var_05,
                                    CONCAT22(extraout_var_01,CONCAT11(extraout_AH_02,extraout_AL_01)
                                            )) + 0x10)) {
            return 0;
          }
          System_String__Substring
                    (param_1,1,CONCAT22(extraout_var,CONCAT11(extraout_AH_00,extraout_AL)) + -1,0);
          *param_2 = CONCAT44(extraout_var_06,
                              CONCAT22(extraout_var_02,CONCAT11(extraout_AH_03,extraout_AL_02)));
          func_0x000180314690(param_2,CONCAT44(extraout_var_06,
                                               CONCAT22(extraout_var_02,
                                                        CONCAT11(extraout_AH_03,extraout_AL_02))));
          *param_3 = 1;
          return 1;
        }
        goto code_r0x0001805cbe98;
      }
    }
  }
  return 0;
}

