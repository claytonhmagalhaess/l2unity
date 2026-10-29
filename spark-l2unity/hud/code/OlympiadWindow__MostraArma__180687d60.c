// OlympiadWindow__MostraArma__180687d60 @ 0x180687d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OlympiadWindow__MostraArma__180687d60(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if (cRam00000001834b3e6d == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<string>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<string>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<string>.GetEnumerator);
    FUN_180315380(MR_System.Collections.Generic.List<string>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(TI_System.Collections.Generic.List<string>);
    FUN_180315380(TI_SparkDicaItem);
    FUN_180315380(TI_System.Text.StringBuilder);
    FUN_180315380(LIT_"'\\n\\n<color=#C896FF>Augment Effects</color>'");
    FUN_180315380(LIT_"'  <color=#C896FF>(Augmented)</color>'");
    FUN_180315380(LIT_"'</color>'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'\\nNo augment'");
    FUN_180315380(LIT_"'\\n<color=#C896FF>  '");
    cRam00000001834b3e6d = '\x01';
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x2c) < 1) {
      if ((param_1 != 0) && (plVar7 = *(longlong **)(param_1 + 0x30), plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0xe48))(plVar7,LIT_"''",*(undefined8 *)(*plVar7 + 0xe50));
        lVar5 = *(longlong *)(param_1 + 0x38);
        if (lVar5 != 0) {
          *(undefined8 *)(lVar5 + 0x18) = LIT_"''";
          func_0x000180314690(lVar5 + 0x18);
          return;
        }
      }
    }
    else {
      uVar4 = SparkUI__NomeDoItem(*(undefined4 *)(param_2 + 0x2c),0);
      if (*(int *)(param_2 + 0x30) == 0) {
        lVar5 = func_0x000180315580(TI_System.Collections.Generic.List<string>);
        FUN_180bba2e0(lVar5,MR_System.Collections.Generic.List<string>..ctor);
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x30);
        if (*(int *)(TI_SparkDicaItem + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar5 = SparkDicaItem__LinhasAugment__180626c20(uVar1,0);
      }
      if ((lVar5 != 0) && (param_1 != 0)) {
        if (*(int *)(lVar5 + 0x18) == 0) {
          plVar7 = *(longlong **)(param_1 + 0x30);
          if (plVar7 == (longlong *)0x0) goto code_r0x0001806880e1;
          (**(code **)(*plVar7 + 0xe48))(plVar7,uVar4,*(undefined8 *)(*plVar7 + 0xe50));
          lVar5 = *(longlong *)(param_1 + 0x38);
          uVar4 = System_String__Concat(uVar4,LIT_"'\\nNo augment'",0);
        }
        else {
          plVar7 = *(longlong **)(param_1 + 0x30);
          uVar6 = System_String__Concat(uVar4,LIT_"'  <color=#C896FF>(Augmented)</color>'",0);
          if (plVar7 == (longlong *)0x0) goto code_r0x0001806880e1;
          (**(code **)(*plVar7 + 0xe48))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0xe50));
          plVar7 = (longlong *)func_0x000180315580(TI_System.Text.StringBuilder);
          System_Text_StringBuilder___ctor(plVar7,uVar4,0);
          if (plVar7 == (longlong *)0x0) goto code_r0x0001806880e1;
          System_Text_StringBuilder__Append(plVar7,LIT_"'\\n\\n<color=#C896FF>Augment Effects</color>'",0);
          FUN_180bada40(&uStack_60,lVar5,MR_System.Collections.Generic.List<string>.GetEnumerator);
          uStack_48 = (undefined4)uStack_60;
          uStack_44 = uStack_60._4_4_;
          uStack_40 = (undefined4)uStack_58;
          uStack_3c = uStack_58._4_4_;
          uStack_38 = uStack_50;
          uStack_60 = 0;
          uStack_58 = &uStack_48;
          while( true ) {
            cVar3 = FUN_1812fa7e0(&uStack_48,MR_System.Collections.Generic.List<string>.MoveNext);
            uVar4 = uStack_38;
            if (cVar3 == '\0') break;
            lVar5 = System_Text_StringBuilder__Append(plVar7,LIT_"'\\n<color=#C896FF>  '",0);
            if (lVar5 == 0) goto code_r0x0001806880ed;
            lVar5 = System_Text_StringBuilder__Append(lVar5,uVar4,0);
            if (lVar5 == 0) goto code_r0x0001806880e7;
            System_Text_StringBuilder__Append(lVar5,LIT_"'</color>'",0);
          }
          Gear__UpdateWeaponType__1803dadf0(&uStack_48,MR_System.Collections.Generic.List<string>.Dispose);
          lVar5 = *(longlong *)(param_1 + 0x38);
          uVar4 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        }
        if (lVar5 != 0) {
          *(undefined8 *)(lVar5 + 0x18) = uVar4;
          func_0x000180314690(lVar5 + 0x18,uVar4);
          return;
        }
      }
    }
  }
code_r0x0001806880e1:
  FUN_1803155d0();
code_r0x0001806880e7:
  FUN_1803155d0();
code_r0x0001806880ed:
  FUN_1803155d0();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

