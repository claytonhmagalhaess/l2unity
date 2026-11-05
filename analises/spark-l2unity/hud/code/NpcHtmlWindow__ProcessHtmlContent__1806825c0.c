// NpcHtmlWindow__ProcessHtmlContent__1806825c0 @ 0x1806825c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NpcHtmlWindow__ProcessHtmlContent__1806825c0
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong lStack_30;
  
  if (cRam00000001834b3e4c == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.GetEnumerator);
    FUN_180315380(TI_System.Text.StringBuilder);
    cRam00000001834b3e4c = '\x01';
  }
  uVar4 = NpcHtmlWindow__ParseHtmlIntoNodes__180680fd0(param_1,param_3,0);
  *(undefined8 *)(param_1 + 0xe8) = uVar4;
  func_0x000180314690(param_1 + 0xe8,uVar4);
  plVar5 = (longlong *)func_0x000180315580(TI_System.Text.StringBuilder);
  System_Text_StringBuilder___ctor(plVar5,0);
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_180bada40(&uStack_58,*(longlong *)(param_1 + 0xe8),MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.GetEnumerator);
    uStack_40 = (undefined4)uStack_58;
    uStack_3c = uStack_58._4_4_;
    uStack_38 = (undefined4)uStack_50;
    uStack_34 = uStack_50._4_4_;
    lStack_30 = lStack_48;
    uStack_58 = 0;
    uStack_50 = &uStack_40;
    while( true ) {
      cVar2 = FUN_1812fa7e0(&uStack_40,MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.MoveNext);
      if (cVar2 == '\0') break;
      if (lStack_30 == 0) goto code_r0x000180682811;
      if (*(int *)(lStack_30 + 0x10) == 0) {
        if (plVar5 == (longlong *)0x0) goto code_r0x00018068280c;
        System_Text_StringBuilder__Append(plVar5,*(undefined8 *)(lStack_30 + 0x18),0);
      }
      else {
        if (plVar5 == (longlong *)0x0) goto code_r0x000180682806;
        iVar3 = func_0x000181717180(plVar5,0);
        if (0 < iVar3) {
          uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          NpcHtmlWindow__AddTextElement__18067f5b0(param_1,param_2,uVar4,0);
          System_Text_StringBuilder__Clear(plVar5,0);
        }
        NpcHtmlWindow__ProcessNode__180682820(param_1,param_2);
      }
    }
    Gear__UpdateWeaponType__1803dadf0(&uStack_40,MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Dispose);
    if (plVar5 != (longlong *)0x0) {
      iVar3 = func_0x000181717180(plVar5,0);
      if (0 < iVar3) {
        uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        NpcHtmlWindow__AddTextElement__18067f5b0(param_1,param_2,uVar4,0);
      }
      return;
    }
  }
  FUN_1803155d0();
code_r0x000180682806:
  FUN_1803155d0();
code_r0x00018068280c:
  FUN_1803155d0();
code_r0x000180682811:
  FUN_1803155d0();
  FUN_180311490();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

