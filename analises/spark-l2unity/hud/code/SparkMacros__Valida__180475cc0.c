// SparkMacros__Valida__180475cc0 @ 0x180475cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkMacros__Valida__180475cc0(longlong param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int aiStackX_8 [2];
  undefined4 auStackX_20 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong lStack_28;
  
  if (cRam00000001834b307d == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Comando>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Comando>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Comando>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Comando>.Exists);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Comando>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Comando>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMacros.Macro>.get_Count);
    FUN_180315380(TI_System.Predicate<SparkMacros.Comando>);
    FUN_180315380(TI_SparkMacros);
    FUN_180315380(MD_SparkMacros.__c._Valida_b__20_0);
    FUN_180315380(TI_SparkMacros.<>c);
    FUN_180315380(LIT_"'Commands cannot contain \",\" or \";\".'");
    FUN_180315380(LIT_"'You can have up to {0} macros.'");
    FUN_180315380(LIT_"'Enter at least one command.'");
    FUN_180315380(LIT_"'The description can have up to {0} letters.'");
    FUN_180315380(LIT_"'The commands are too long ({0}/{1}). Use fewer or shorte...");
    FUN_180315380(LIT_"'A macro can have up to {0} commands.'");
    FUN_180315380(LIT_"'The name can have up to {0} letters.'");
    FUN_180315380(LIT_"'Enter a name for the macro.'");
    FUN_180315380(LIT_"'The shortcut text can have up to {0} letters.'");
    FUN_180315380(LIT_"''");
    cRam00000001834b307d = '\x01';
  }
  if (param_1 != 0) {
    cVar2 = System_String__IsNullOrWhiteSpace(*(undefined8 *)(param_1 + 0x18),0);
    if (cVar2 != '\0') {
      return LIT_"'Enter a name for the macro.'";
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      if (0x10 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x10)) {
        aiStackX_8[0] = 0x10;
        uVar5 = func_0x000180314670(_DAT_1834c6268,aiStackX_8);
        uVar6 = LIT_"'The name can have up to {0} letters.'";
        goto code_r0x000180475ec3;
      }
      lVar4 = *(longlong *)(param_1 + 0x20);
      if ((*(longlong *)(param_1 + 0x20) != 0) || (lVar4 = LIT_"''", LIT_"''" != 0)) {
        if (0x20 < *(int *)(lVar4 + 0x10)) {
          aiStackX_8[0] = 0x20;
          uVar5 = func_0x000180314670(_DAT_1834c6268,aiStackX_8);
          uVar6 = LIT_"'The description can have up to {0} letters.'";
          goto code_r0x000180475ec3;
        }
        lVar4 = *(longlong *)(param_1 + 0x28);
        if ((*(longlong *)(param_1 + 0x28) != 0) || (lVar4 = LIT_"''", LIT_"''" != 0)) {
          if (4 < *(int *)(lVar4 + 0x10)) {
            aiStackX_8[0] = 4;
            uVar5 = func_0x000180314670(_DAT_1834c6268,aiStackX_8);
            uVar6 = LIT_"'The shortcut text can have up to {0} letters.'";
            goto code_r0x000180475ec3;
          }
          if (param_2 != '\0') {
            if (*(int *)(TI_SparkMacros + 0xe4) == 0) {
              func_0x000180315660(TI_SparkMacros);
            }
            if (**(longlong **)(TI_SparkMacros + 0xb8) == 0) goto code_r0x000180476263;
            if (0x17 < *(int *)(**(longlong **)(TI_SparkMacros + 0xb8) + 0x18)) {
              aiStackX_8[0] = 0x18;
              uVar5 = func_0x000180314670(_DAT_1834c6268,aiStackX_8);
              uVar6 = LIT_"'You can have up to {0} macros.'";
              goto code_r0x000180475ec3;
            }
          }
          lVar4 = *(longlong *)(param_1 + 0x38);
          if (*(int *)(TI_SparkMacros.<>c + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar7 = *(longlong *)(*(longlong *)(TI_SparkMacros.<>c + 0xb8) + 0x10);
          if (lVar7 == 0) {
            if (*(int *)(TI_SparkMacros.<>c + 0xe4) == 0) {
              func_0x000180315660();
            }
            uVar6 = **(undefined8 **)(TI_SparkMacros.<>c + 0xb8);
            lVar7 = func_0x000180315580(TI_System.Predicate<SparkMacros.Comando>);
            FUN_180d27680(lVar7,uVar6,MD_SparkMacros.__c._Valida_b__20_0,0);
            *(longlong *)(*(longlong *)(TI_SparkMacros.<>c + 0xb8) + 0x10) = lVar7;
            func_0x000180314690(*(longlong *)(TI_SparkMacros.<>c + 0xb8) + 0x10,lVar7);
          }
          if (lVar4 != 0) {
            cVar2 = FUN_180bab060(lVar4,lVar7,MR_System.Collections.Generic.List<SparkMacros.Comando>.Exists);
            if (cVar2 == '\0') {
              return LIT_"'Enter at least one command.'";
            }
            lVar4 = *(longlong *)(param_1 + 0x38);
            if (lVar4 != 0) {
              if (0xc < *(int *)(lVar4 + 0x18)) {
                aiStackX_8[0] = 0xc;
                uVar5 = func_0x000180314670(_DAT_1834c6268,aiStackX_8);
                uVar6 = LIT_"'A macro can have up to {0} commands.'";
code_r0x000180475ec3:
                uVar6 = System_String__Format(uVar6,uVar5,0);
                return uVar6;
              }
              iVar8 = 0;
              aiStackX_8[0] = 0;
              FUN_180bada40(&uStack_50,lVar4,MR_System.Collections.Generic.List<SparkMacros.Comando>.GetEnumerator);
              uStack_38 = (undefined4)uStack_50;
              uStack_34 = uStack_50._4_4_;
              uStack_30 = (undefined4)uStack_48;
              uStack_2c = uStack_48._4_4_;
              lStack_28 = lStack_40;
              uStack_50 = 0;
              uStack_48 = &uStack_38;
              while( true ) {
                cVar2 = FUN_1812fa7e0(&uStack_38,MR_System.Collections.Generic.List<SparkMacros.Comando>.MoveNext);
                lVar4 = lStack_28;
                if (cVar2 == '\0') {
                  Gear__UpdateWeaponType__1803dadf0(&uStack_38,MR_System.Collections.Generic.List<SparkMacros.Comando>.Dispose);
                  if (iVar8 < 0xff) {
                    return 0;
                  }
                  aiStackX_8[0] = iVar8;
                  uVar6 = func_0x000180314670(_DAT_1834c6268,aiStackX_8);
                  auStackX_20[0] = 0xfe;
                  uVar5 = func_0x000180314670(_DAT_1834c6268,auStackX_20);
                  uVar6 = System_String__Format(LIT_"'The commands are too long ({0}/{1}). Use fewer or shorte...",uVar6,uVar5,0);
                  return uVar6;
                }
                if (lStack_28 == 0) break;
                if (*(longlong *)(lStack_28 + 0x20) == 0) goto code_r0x000180476274;
                iVar3 = func_0x0001817079f0(*(longlong *)(lStack_28 + 0x20),0x2c,0);
                if (-1 < iVar3) {
code_r0x000180476090:
                  uVar6 = LIT_"'Commands cannot contain \",\" or \";\".'";
                  Gear__UpdateWeaponType__1803dadf0(&uStack_38,MR_System.Collections.Generic.List<SparkMacros.Comando>.Dispose);
                  return uVar6;
                }
                lVar7 = *(longlong *)(lVar4 + 0x20);
                if (lVar7 == 0) goto code_r0x00018047626f;
                iVar3 = func_0x0001817079f0(lVar7,0x3b,0);
                if (-1 < iVar3) goto code_r0x000180476090;
                lVar4 = *(longlong *)(lVar4 + 0x20);
                if (lVar4 == 0) goto code_r0x000180476269;
                if (*(int *)(lVar4 + 0x10) == 0) {
                  iVar8 = iVar8 + 6;
                  aiStackX_8[0] = iVar8;
                }
                else {
                  iVar8 = iVar8 + *(int *)(lVar4 + 0x10) + 7;
                  aiStackX_8[0] = iVar8;
                }
              }
              goto code_r0x000180476279;
            }
          }
        }
      }
    }
  }
code_r0x000180476263:
  FUN_1803155d0();
code_r0x000180476269:
  FUN_1803155d0();
code_r0x00018047626f:
  FUN_1803155d0();
code_r0x000180476274:
  FUN_1803155d0();
code_r0x000180476279:
  FUN_1803155d0();
  FUN_180311490();
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}

