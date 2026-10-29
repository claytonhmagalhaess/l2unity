// NpcHtmlWindow__ParseHtmlIntoNodes__180680fd0 @ 0x180680fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong NpcHtmlWindow__ParseHtmlIntoNodes__180680fd0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int iStackX_10;
  
  if (cRam00000001834b3e4d == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>..ctor);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,string>.set_Item);
    FUN_180315380(TI_System.Collections.Generic.Dictionary<string,string>);
    FUN_180315380(TI_NpcHtmlWindow.HtmlNode);
    FUN_180315380(MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>..ctor);
    FUN_180315380(TI_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>);
    FUN_180315380(TI_System.Text.RegularExpressions.Regex);
    FUN_180315380(TI_System.Text.StringBuilder);
    FUN_180315380(LIT_"'<br'");
    FUN_180315380(LIT_"'</a>'");
    FUN_180315380(LIT_"'<edit'");
    FUN_180315380(LIT_"'bypass'");
    FUN_180315380(LIT_"'<combobox'");
    FUN_180315380(LIT_"'<br1'");
    FUN_180315380(LIT_"'<title'");
    FUN_180315380(LIT_"'value'");
    FUN_180315380(LIT_"'<a '");
    FUN_180315380(LIT_"'</title>'");
    FUN_180315380(LIT_"'<button '");
    FUN_180315380(LIT_"'</table>'");
    FUN_180315380(LIT_"'-h'");
    FUN_180315380(LIT_"'action=\"([^\"]+)\".*?>(.*?)$'");
    FUN_180315380(LIT_"'<img'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'<table'");
    FUN_180315380(LIT_"'>'");
    FUN_180315380(LIT_"'action'");
    cRam00000001834b3e4d = '\x01';
  }
  lVar6 = func_0x000180315580(TI_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>);
  FUN_180bba2e0(lVar6,MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>..ctor);
  iStackX_10 = 0;
  plVar7 = (longlong *)func_0x000180315580(TI_System.Text.StringBuilder);
  System_Text_StringBuilder___ctor(plVar7,0);
  if (param_2 != 0) {
code_r0x0001806811a5:
    if (iStackX_10 < *(int *)(param_2 + 0x10)) {
      sVar3 = System_String__get_Chars(param_2,iStackX_10,0);
      if (sVar3 != 0x3c) {
        System_String__get_Chars(param_2,iStackX_10,0);
        if (plVar7 == (longlong *)0x0) goto code_r0x000180681c83;
        System_Text_StringBuilder__Append(plVar7);
        iStackX_10 = iStackX_10 + 1;
        goto code_r0x0001806811a5;
      }
      iVar4 = System_String__IndexOf(param_2,0x3e,iStackX_10,0);
      if (iVar4 == -1) goto code_r0x000180681bea;
      lVar8 = System_String__Substring(param_2,iStackX_10);
      if (lVar8 == 0) goto code_r0x000180681c83;
      cVar2 = System_String__StartsWith(lVar8,LIT_"'<title'");
      if (cVar2 == '\0') {
        cVar2 = System_String__StartsWith(lVar8,LIT_"'<br1'");
        if (cVar2 == '\0') {
          cVar2 = System_String__StartsWith(lVar8,LIT_"'<br'");
          if (cVar2 == '\0') {
            cVar2 = System_String__StartsWith(lVar8,LIT_"'<img'");
            if (cVar2 == '\0') {
              cVar2 = System_String__StartsWith(lVar8,LIT_"'<button '");
              if (cVar2 == '\0') {
                cVar2 = System_String__StartsWith(lVar8,LIT_"'<edit'");
                if (cVar2 == '\0') {
                  cVar2 = System_String__StartsWith(lVar8,LIT_"'<combobox'");
                  if (cVar2 == '\0') {
                    cVar2 = System_String__StartsWith(lVar8,LIT_"'<table'");
                    if (cVar2 == '\0') {
                      cVar2 = System_String__StartsWith(lVar8,LIT_"'<a '");
                      if (plVar7 == (longlong *)0x0) goto code_r0x000180681c83;
                      if (cVar2 == '\0') {
                        System_Text_StringBuilder__Append();
                        iStackX_10 = iVar4 + 1;
                      }
                      else {
                        iVar5 = func_0x000181717180(plVar7,0);
                        if (0 < iVar5) {
                          lVar8 = func_0x000180315580(TI_NpcHtmlWindow.HtmlNode);
                          Gear__UpdateWeaponType__1803dadf0(lVar8,0);
                          if (lVar8 == 0) goto code_r0x000180681c83;
                          *(undefined4 *)(lVar8 + 0x10) = 0;
                          uVar9 = (**(code **)(*plVar7 + 0x168))
                                            (plVar7,*(undefined8 *)(*plVar7 + 0x170));
                          *(undefined8 *)(lVar8 + 0x18) = uVar9;
                          func_0x000180314690(lVar8 + 0x18,uVar9);
                          if (lVar6 == 0) goto code_r0x000180681c83;
                          FUN_180002eb0(lVar6,lVar8,MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add);
                          System_Text_StringBuilder__Clear(plVar7,0);
                        }
                        iVar5 = System_String__IndexOf(param_2);
                        if (iVar5 == -1) {
                          iStackX_10 = iVar4 + 1;
                        }
                        else {
                          uVar9 = System_String__Substring(param_2,iStackX_10);
                          if (*(int *)(TI_System.Text.RegularExpressions.Regex + 0xe4) == 0) {
                            func_0x000180315660();
                          }
                          plVar10 = (longlong *)System_Text_RegularExpressions_Regex__Match(uVar9);
                          if (plVar10 == (longlong *)0x0) goto code_r0x000180681c83;
                          cVar2 = func_0x000181db51d0(plVar10);
                          if (cVar2 != '\0') {
                            lVar8 = func_0x000180315580(TI_NpcHtmlWindow.HtmlNode);
                            Gear__UpdateWeaponType__1803dadf0(lVar8,0);
                            if (lVar8 == 0) goto code_r0x000180681c83;
                            *(undefined4 *)(lVar8 + 0x10) = 5;
                            lVar11 = func_0x000180315580(TI_System.Collections.Generic.Dictionary<string,string>);
                            FUN_18124bf80(lVar11,MR_System.Collections.Generic.Dictionary<string,string>..ctor);
                            lVar12 = (**(code **)(*plVar10 + 0x188))
                                               (plVar10,*(undefined8 *)(*plVar10 + 400));
                            if (((((lVar12 == 0) ||
                                  (lVar12 = func_0x000181db4940(lVar12,1,0), lVar12 == 0)) ||
                                 (lVar12 = System_Text_RegularExpressions_Capture__ToString
                                                     (lVar12,0), lVar12 == 0)) ||
                                ((lVar12 = System_String__Replace
                                                     (lVar12,LIT_"'bypass'",LIT_"''",0),
                                 lVar12 == 0 ||
                                 (lVar12 = System_String__Replace
                                                     (lVar12,LIT_"'-h'",LIT_"''",0),
                                 lVar12 == 0)))) ||
                               (uVar9 = func_0x00018170d270(lVar12,0), lVar11 == 0))
                            goto code_r0x000180681c83;
                            FUN_18126c020(lVar11,LIT_"'action'",uVar9,MR_System.Collections.Generic.Dictionary<string,string>.set_Item);
                            lVar12 = (**(code **)(*plVar10 + 0x188))
                                               (plVar10,*(undefined8 *)(*plVar10 + 400));
                            if ((lVar12 == 0) ||
                               (lVar12 = func_0x000181db4940(lVar12,2,0), lVar12 == 0))
                            goto code_r0x000180681c83;
                            uVar9 = System_Text_RegularExpressions_Capture__ToString(lVar12,0);
                            FUN_18126c020(lVar11,LIT_"'value'",uVar9);
                            *(longlong *)(lVar8 + 0x20) = lVar11;
                            func_0x000180314690(lVar8 + 0x20,lVar11);
                            if (lVar6 == 0) goto code_r0x000180681c83;
                            FUN_180002eb0(lVar6);
                          }
                          iStackX_10 = iVar5 + 4;
                        }
                      }
                    }
                    else {
                      if (plVar7 == (longlong *)0x0) goto code_r0x000180681c83;
                      iVar4 = func_0x000181717180(plVar7,0);
                      if (0 < iVar4) {
                        lVar8 = func_0x000180315580(TI_NpcHtmlWindow.HtmlNode);
                        Gear__UpdateWeaponType__1803dadf0(lVar8,0);
                        if (lVar8 == 0) goto code_r0x000180681c83;
                        *(undefined4 *)(lVar8 + 0x10) = 0;
                        uVar9 = (**(code **)(*plVar7 + 0x168))
                                          (plVar7,*(undefined8 *)(*plVar7 + 0x170));
                        *(undefined8 *)(lVar8 + 0x18) = uVar9;
                        func_0x000180314690(lVar8 + 0x18,uVar9);
                        if (lVar6 == 0) goto code_r0x000180681c83;
                        FUN_180002eb0(lVar6,lVar8,MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add);
                        System_Text_StringBuilder__Clear(plVar7,0);
                      }
                      lVar8 = NpcHtmlWindow__ExtractNode__1806807e0(param_1);
                      if (lVar8 != 0) {
                        if (lVar6 == 0) goto code_r0x000180681c83;
                        FUN_180002eb0(lVar6);
                      }
                    }
                    goto code_r0x0001806811a5;
                  }
                  if (plVar7 == (longlong *)0x0) goto code_r0x000180681c83;
                  iVar4 = func_0x000181717180(plVar7,0);
                  if (0 < iVar4) {
                    lVar8 = func_0x000180315580(TI_NpcHtmlWindow.HtmlNode);
                    Gear__UpdateWeaponType__1803dadf0(lVar8,0);
                    if (lVar8 == 0) goto code_r0x000180681c83;
                    *(undefined4 *)(lVar8 + 0x10) = 0;
                    uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
                    *(undefined8 *)(lVar8 + 0x18) = uVar9;
                    func_0x000180314690(lVar8 + 0x18,uVar9);
                    if (lVar6 == 0) goto code_r0x000180681c83;
                    FUN_180002eb0(lVar6,lVar8,MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add);
                    System_Text_StringBuilder__Clear(plVar7,0);
                  }
                }
                else {
                  if (plVar7 == (longlong *)0x0) goto code_r0x000180681c83;
                  iVar4 = func_0x000181717180(plVar7,0);
                  if (0 < iVar4) {
                    lVar8 = func_0x000180315580(TI_NpcHtmlWindow.HtmlNode);
                    Gear__UpdateWeaponType__1803dadf0(lVar8,0);
                    if (lVar8 == 0) goto code_r0x000180681c83;
                    *(undefined4 *)(lVar8 + 0x10) = 0;
                    uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
                    *(undefined8 *)(lVar8 + 0x18) = uVar9;
                    func_0x000180314690(lVar8 + 0x18,uVar9);
                    if (lVar6 == 0) goto code_r0x000180681c83;
                    FUN_180002eb0(lVar6,lVar8,MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add);
                    System_Text_StringBuilder__Clear(plVar7,0);
                  }
                }
              }
              else {
                if (plVar7 == (longlong *)0x0) goto code_r0x000180681c83;
                iVar4 = func_0x000181717180(plVar7,0);
                if (0 < iVar4) {
                  lVar8 = func_0x000180315580(TI_NpcHtmlWindow.HtmlNode);
                  Gear__UpdateWeaponType__1803dadf0(lVar8,0);
                  if (lVar8 == 0) goto code_r0x000180681c83;
                  *(undefined4 *)(lVar8 + 0x10) = 0;
                  uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
                  *(undefined8 *)(lVar8 + 0x18) = uVar9;
                  func_0x000180314690(lVar8 + 0x18,uVar9);
                  if (lVar6 == 0) goto code_r0x000180681c83;
                  FUN_180002eb0(lVar6,lVar8,MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add);
                  System_Text_StringBuilder__Clear(plVar7,0);
                }
              }
            }
            else {
              if (plVar7 == (longlong *)0x0) goto code_r0x000180681c83;
              iVar4 = func_0x000181717180(plVar7,0);
              if (0 < iVar4) {
                lVar8 = func_0x000180315580(TI_NpcHtmlWindow.HtmlNode);
                Gear__UpdateWeaponType__1803dadf0(lVar8,0);
                if (lVar8 == 0) goto code_r0x000180681c83;
                *(undefined4 *)(lVar8 + 0x10) = 0;
                uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
                *(undefined8 *)(lVar8 + 0x18) = uVar9;
                func_0x000180314690(lVar8 + 0x18,uVar9);
                if (lVar6 == 0) goto code_r0x000180681c83;
                FUN_180002eb0(lVar6,lVar8,MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add);
                System_Text_StringBuilder__Clear(plVar7,0);
              }
            }
            lVar8 = NpcHtmlWindow__ExtractNode__1806807e0(param_1);
            if (lVar8 != 0) {
              if (lVar6 == 0) goto code_r0x000180681c83;
              FUN_180002eb0(lVar6);
            }
            goto code_r0x0001806811a5;
          }
          if (plVar7 == (longlong *)0x0) goto code_r0x000180681c83;
          iVar5 = func_0x000181717180(plVar7,0);
          if (0 < iVar5) {
            lVar8 = func_0x000180315580(TI_NpcHtmlWindow.HtmlNode);
            Gear__UpdateWeaponType__1803dadf0(lVar8,0);
            if (lVar8 == 0) goto code_r0x000180681c83;
            *(undefined4 *)(lVar8 + 0x10) = 0;
            uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
            *(undefined8 *)(lVar8 + 0x18) = uVar9;
            func_0x000180314690(lVar8 + 0x18,uVar9);
            if (lVar6 == 0) goto code_r0x000180681c83;
            FUN_180002eb0(lVar6,lVar8,MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add);
            System_Text_StringBuilder__Clear(plVar7,0);
          }
          lVar8 = func_0x000180315580(TI_NpcHtmlWindow.HtmlNode);
          Gear__UpdateWeaponType__1803dadf0(lVar8,0);
          if (lVar8 == 0) goto code_r0x000180681c83;
          *(undefined4 *)(lVar8 + 0x10) = 1;
        }
        else {
          if (plVar7 == (longlong *)0x0) goto code_r0x000180681c83;
          iVar5 = func_0x000181717180(plVar7,0);
          if (0 < iVar5) {
            lVar8 = func_0x000180315580(TI_NpcHtmlWindow.HtmlNode);
            Gear__UpdateWeaponType__1803dadf0(lVar8,0);
            if (lVar8 == 0) goto code_r0x000180681c83;
            *(undefined4 *)(lVar8 + 0x10) = 0;
            uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
            *(undefined8 *)(lVar8 + 0x18) = uVar9;
            func_0x000180314690(lVar8 + 0x18,uVar9);
            if (lVar6 == 0) goto code_r0x000180681c83;
            FUN_180002eb0(lVar6,lVar8,MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add);
            System_Text_StringBuilder__Clear(plVar7,0);
          }
          lVar8 = func_0x000180315580(TI_NpcHtmlWindow.HtmlNode);
          Gear__UpdateWeaponType__1803dadf0(lVar8,0);
          if (lVar8 == 0) goto code_r0x000180681c83;
          *(undefined4 *)(lVar8 + 0x10) = 2;
        }
        if (lVar6 == 0) goto code_r0x000180681c83;
        FUN_180002eb0(lVar6);
code_r0x000180681a0f:
        iStackX_10 = iVar4 + 1;
        goto code_r0x0001806811a5;
      }
      if (plVar7 == (longlong *)0x0) goto code_r0x000180681c83;
      iVar5 = func_0x000181717180(plVar7,0);
      if (0 < iVar5) {
        lVar8 = func_0x000180315580(TI_NpcHtmlWindow.HtmlNode);
        Gear__UpdateWeaponType__1803dadf0(lVar8,0);
        if (lVar8 == 0) goto code_r0x000180681c83;
        *(undefined4 *)(lVar8 + 0x10) = 0;
        uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        *(undefined8 *)(lVar8 + 0x18) = uVar9;
        func_0x000180314690(lVar8 + 0x18,uVar9);
        if (lVar6 == 0) goto code_r0x000180681c83;
        FUN_180002eb0(lVar6,lVar8,MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add);
        System_Text_StringBuilder__Clear(plVar7,0);
      }
      iVar5 = System_String__IndexOf(param_2);
      if (iVar5 == -1) goto code_r0x000180681a0f;
      lVar8 = System_String__Substring(param_2,iStackX_10,iVar5 - iStackX_10,0);
      iVar4 = (iVar4 - iStackX_10) + 1;
      if (iVar4 < 8) {
        if (iVar4 < 0) {
          iVar4 = 0;
        }
      }
      else {
        iVar4 = 7;
      }
      if (lVar8 == 0) goto code_r0x000180681c83;
      func_0x00018170c060(lVar8,iVar4,0);
      iStackX_10 = iVar5 + 8;
      if (*(longlong **)(param_1 + 0xd8) == (longlong *)0x0) goto code_r0x000180681c83;
      (**(code **)(**(longlong **)(param_1 + 0xd8) + 0xe48))();
      goto code_r0x0001806811a5;
    }
code_r0x000180681bea:
    if (plVar7 != (longlong *)0x0) {
      iVar4 = func_0x000181717180(plVar7,0);
      if (iVar4 < 1) {
        return lVar6;
      }
      lVar8 = func_0x000180315580(TI_NpcHtmlWindow.HtmlNode);
      Gear__UpdateWeaponType__1803dadf0(lVar8,0);
      if (lVar8 != 0) {
        *(undefined4 *)(lVar8 + 0x10) = 0;
        uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        *(undefined8 *)(lVar8 + 0x18) = uVar9;
        func_0x000180314690(lVar8 + 0x18,uVar9);
        if (lVar6 != 0) {
          FUN_180002eb0(lVar6,lVar8,MR_System.Collections.Generic.List<NpcHtmlWindow.HtmlNode>.Add);
          return lVar6;
        }
      }
    }
  }
code_r0x000180681c83:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  lVar6 = (*pcVar1)();
  return lVar6;
}

