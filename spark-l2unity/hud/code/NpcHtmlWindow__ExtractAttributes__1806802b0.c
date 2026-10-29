// NpcHtmlWindow__ExtractAttributes__1806802b0 @ 0x1806802b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong NpcHtmlWindow__ExtractAttributes__1806802b0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (cRam00000001834b3e4f == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>..ctor);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.set_Item);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<string,string>);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<string,string>.get_Key);
    FUN_180315380(MR_System.Collections.Generic.KeyValuePair<string,string>.get_Value);
    FUN_180315380(TI_System.Text.RegularExpressions.Regex);
    FUN_180315380(LIT_"'fore'");
    FUN_180315380(LIT_"'bypass'");
    FUN_180315380(LIT_"'back'");
    FUN_180315380(LIT_"'back=[\"\\']?([^\"\\'>\\\\s]+)[\"\\']?'");
    FUN_180315380(LIT_"'bgcolor'");
    FUN_180315380(LIT_"'value'");
    FUN_180315380(LIT_"'var'");
    FUN_180315380(LIT_"'list'");
    FUN_180315380(LIT_"'value=[\"\\']([^\"\\']*)[\"\\']'");
    FUN_180315380(LIT_"'height'");
    FUN_180315380(LIT_"'width=[\"\\']?([^\"\\'>\\\\s]+)[\"\\']?'");
    FUN_180315380(LIT_"'src=[\"\\']?([^\"\\'>\\\\s]+)[\"\\']?'");
    FUN_180315380(LIT_"'-h'");
    FUN_180315380(LIT_"'var=[\"\\']?([^\"\\'>\\\\s]+)[\"\\']?'");
    FUN_180315380(LIT_"'fore=[\"\\']?([^\"\\'>\\\\s]+)[\"\\']?'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'action=[\"\\']?([^\"\\'>]+)[\"\\']?'");
    FUN_180315380(LIT_"'width'");
    FUN_180315380(LIT_"'list=[\"\\']?([^\"\\'>\\\\s]+)[\"\\']?'");
    FUN_180315380(LIT_"'src'");
    FUN_180315380(LIT_"'height=[\"\\']?([^\"\\'>\\\\s]+)[\"\\']?'");
    FUN_180315380(LIT_"'bgcolor=[\"\\']?([^\"\\'>\\\\s]+)[\"\\']?'");
    FUN_180315380(LIT_"'action'");
    cRam00000001834b3e4f = '\x01';
  }
  lVar5 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<string,string>);
  FUN_18124bf80(lVar5,MR_System.Collections.Generic.Dictionary<string,string>..ctor);
  lVar6 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<string,string>);
  FUN_18124bf80(lVar6,MR_System.Collections.Generic.Dictionary<string,string>..ctor);
  if (lVar6 != 0) {
    FUN_18126c020(lVar6,LIT_"'action'",LIT_"'action=[\"\\']?([^\"\\'>]+)[\"\\']?'",MR_System.Collections.Generic.Dictionary<string,string>.set_Item);
    FUN_18126c020(lVar6,LIT_"'back'",LIT_"'back=[\"\\']?([^\"\\'>\\\\s]+)[\"\\']?'",MR_System.Collections.Generic.Dictionary<string,string>.set_Item);
    FUN_18126c020(lVar6,LIT_"'fore'",LIT_"'fore=[\"\\']?([^\"\\'>\\\\s]+)[\"\\']?'",MR_System.Collections.Generic.Dictionary<string,string>.set_Item);
    FUN_18126c020(lVar6,LIT_"'width'",LIT_"'width=[\"\\']?([^\"\\'>\\\\s]+)[\"\\']?'",MR_System.Collections.Generic.Dictionary<string,string>.set_Item);
    FUN_18126c020(lVar6,LIT_"'height'",LIT_"'height=[\"\\']?([^\"\\'>\\\\s]+)[\"\\']?'",MR_System.Collections.Generic.Dictionary<string,string>.set_Item);
    FUN_18126c020(lVar6,LIT_"'bgcolor'",LIT_"'bgcolor=[\"\\']?([^\"\\'>\\\\s]+)[\"\\']?'",MR_System.Collections.Generic.Dictionary<string,string>.set_Item);
    FUN_18126c020(lVar6,LIT_"'value'",LIT_"'value=[\"\\']([^\"\\']*)[\"\\']'",MR_System.Collections.Generic.Dictionary<string,string>.set_Item);
    FUN_18126c020(lVar6,LIT_"'src'",LIT_"'src=[\"\\']?([^\"\\'>\\\\s]+)[\"\\']?'",MR_System.Collections.Generic.Dictionary<string,string>.set_Item);
    FUN_18126c020(lVar6,LIT_"'var'",LIT_"'var=[\"\\']?([^\"\\'>\\\\s]+)[\"\\']?'",MR_System.Collections.Generic.Dictionary<string,string>.set_Item);
    FUN_18126c020(lVar6,LIT_"'list'",LIT_"'list=[\"\\']?([^\"\\'>\\\\s]+)[\"\\']?'",MR_System.Collections.Generic.Dictionary<string,string>.set_Item);
    FUN_18117ccd0(&uStack_48,lVar6,MR_System.Collections.Generic.Dictionary<string,string>.GetEnumerator);
    uStack_70 = uStack_48;
    uStack_68 = uStack_40;
    uStack_60 = uStack_38;
    uStack_58 = uStack_30;
    uStack_50 = uStack_28;
    do {
      do {
        cVar4 = FUN_18133c520(&uStack_70,MR_System.Collections.Generic.Dictionary<string,string>.MoveNext);
        uVar3 = uStack_58;
        uVar2 = uStack_60;
        if (cVar4 == '\0') {
          Gear__UpdateWeaponType__1803dadf0(&uStack_70,MR_System.Collections.Generic.Dictionary<string,string>.Dispose);
          return lVar5;
        }
        if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
          func_0x000180315660();
        }
        plVar7 = (longlong *)System_Text_RegularExpressions_Regex__Match(param_2,uVar3,0);
        if (plVar7 == (longlong *)0x0) goto code_r0x0001806807cc;
        cVar4 = func_0x000181db51d0(plVar7,0);
      } while (cVar4 == '\0');
      lVar6 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
      if (lVar6 == 0) goto code_r0x0001806807c7;
      lVar6 = func_0x000181db4940(lVar6,1,0);
      if (lVar6 == 0) goto code_r0x0001806807c2;
      lVar6 = System_Text_RegularExpressions_Capture__ToString(lVar6,0);
      cVar4 = func_0x0001817058a0(uVar2,LIT_"'action'",0);
      if (cVar4 != '\0') {
        if (lVar6 == 0) goto code_r0x0001806807b8;
        lVar6 = System_String__Replace(lVar6,LIT_"'bypass'",LIT_"''",0);
        if (lVar6 == 0) goto code_r0x0001806807b3;
        lVar6 = System_String__Replace(lVar6,LIT_"'-h'",LIT_"''",0);
        if (lVar6 == 0) goto code_r0x0001806807ad;
        func_0x00018170d270(lVar6,0);
      }
      if (lVar5 == 0) goto code_r0x0001806807bd;
      FUN_18126c020(lVar5,uVar2);
    } while( true );
  }
  FUN_1803155d0();
code_r0x0001806807ad:
  FUN_1803155d0();
code_r0x0001806807b3:
  FUN_1803155d0();
code_r0x0001806807b8:
  FUN_1803155d0();
code_r0x0001806807bd:
  FUN_1803155d0();
code_r0x0001806807c2:
  FUN_1803155d0();
code_r0x0001806807c7:
  FUN_1803155d0();
code_r0x0001806807cc:
  FUN_1803155d0();
  FUN_180311490();
  pcVar1 = (code *)swi(3);
  lVar5 = (*pcVar1)();
  return lVar5;
}

