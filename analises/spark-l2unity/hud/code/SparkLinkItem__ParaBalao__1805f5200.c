// SparkLinkItem__ParaBalao__1805f5200 @ 0x1805f5200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkLinkItem__ParaBalao__1805f5200(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  int aiStackX_8 [4];
  undefined4 auStackX_18 [2];
  undefined4 auStackX_20 [2];
  undefined4 auStack_48 [4];
  
  if (cRam00000001834b3b48 == '\0') {
    FUN_180315380(TI_SparkLinkItem);
    FUN_180315380(TI_System.Text.StringBuilder);
    FUN_180315380(LIT_"'[Unknown item]'");
    cRam00000001834b3b48 = '\x01';
  }
  aiStackX_8[0] = 0;
  auStackX_18[0] = 0;
  auStackX_20[0] = 0;
  auStack_48[0] = 0;
  cVar3 = func_0x000181707e50(param_1,0);
  if (cVar3 != '\0') {
    return param_1;
  }
  if (param_1 != 0) {
    iVar4 = func_0x0001817079f0(param_1,8,0);
    if (iVar4 < 0) {
      return param_1;
    }
    lVar5 = System_String__Split(param_1,8,0,0);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    plVar6 = (longlong *)func_0x000180315580(TI_System.Text.StringBuilder);
    func_0x000181716710(plVar6,uVar1,0);
    if (lVar5 != 0) {
      uVar9 = 0;
code_r0x0001805f52f0:
      do {
        if (*(int *)(lVar5 + 0x18) <= (int)uVar9) goto code_r0x0001805f54fe;
        if ((uVar9 & 1) == 0) {
          if (*(uint *)(lVar5 + 0x18) <= uVar9) goto code_r0x0001805f553c;
          if (plVar6 == (longlong *)0x0) break;
          System_Text_StringBuilder__Append
                    (plVar6,*(undefined8 *)(lVar5 + 0x20 + (longlong)(int)uVar9 * 8),0);
        }
        else if ((int)uVar9 < *(int *)(lVar5 + 0x18) + -1) {
          if (*(uint *)(lVar5 + 0x18) <= uVar9) goto code_r0x0001805f553c;
          lVar7 = *(longlong *)(lVar5 + 0x20 + (longlong)(int)uVar9 * 8);
          if (*(int *)(TI_SparkLinkItem + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (cRam00000001834b3b4c == '\0') {
            FUN_180315380(LIT_"'ID='");
            cRam00000001834b3b4c = '\x01';
          }
          auStackX_20[0] = 0;
          auStack_48[0] = 0;
          auStackX_18[0] = 0;
          aiStackX_8[0] = 0;
          uVar8 = LIT_"'[Unknown item]'";
          if ((lVar7 != 0) &&
             (cVar3 = System_String__StartsWith(lVar7,LIT_"'ID='"),
             uVar8 = LIT_"'[Unknown item]'", cVar3 != '\0')) {
            if ((LIT_"'ID='" == 0) ||
               ((lVar7 = func_0x00018170c060(lVar7,*(undefined4 *)(LIT_"'ID='" + 0x10)),
                lVar7 == 0 || (lVar7 = System_String__Split(lVar7,0x2c,0,0), lVar7 == 0)))) break;
            if ((*(int *)(lVar7 + 0x18) == 4) ||
               (uVar8 = LIT_"'[Unknown item]'", *(int *)(lVar7 + 0x18) == 5)) {
              if (*(uint *)(lVar7 + 0x18) < 2) {
code_r0x0001805f553c:
                FUN_1803155c0();
                pcVar2 = (code *)swi(3);
                lVar5 = (*pcVar2)();
                return lVar5;
              }
              cVar3 = System_Int32__TryParse(*(undefined8 *)(lVar7 + 0x28),aiStackX_8);
              uVar8 = LIT_"'[Unknown item]'";
              if ((cVar3 != '\0') && (0 < aiStackX_8[0])) {
                if (*(uint *)(lVar7 + 0x18) < 3) goto code_r0x0001805f553c;
                cVar3 = System_Int32__TryParse(*(undefined8 *)(lVar7 + 0x30),auStackX_18);
                uVar8 = LIT_"'[Unknown item]'";
                if (cVar3 != '\0') {
                  if (*(uint *)(lVar7 + 0x18) < 4) goto code_r0x0001805f553c;
                  cVar3 = System_Int32__TryParse(*(undefined8 *)(lVar7 + 0x38),auStack_48);
                  uVar8 = LIT_"'[Unknown item]'";
                  if (cVar3 != '\0') {
                    if (*(uint *)(lVar7 + 0x18) != 4) {
                      if (*(uint *)(lVar7 + 0x18) < 5) goto code_r0x0001805f553c;
                      cVar3 = System_Int32__TryParse(*(undefined8 *)(lVar7 + 0x40),auStackX_20);
                      uVar8 = LIT_"'[Unknown item]'";
                      if (cVar3 == '\0') goto code_r0x0001805f54b8;
                    }
                    uVar1 = auStackX_18[0];
                    iVar4 = aiStackX_8[0];
                    if (*(int *)(TI_SparkLinkItem + 0xe4) == 0) {
                      func_0x000180315660();
                    }
                    uVar8 = SparkLinkItem__Rotulo__1805f6120(iVar4,uVar1);
                  }
                }
              }
            }
          }
code_r0x0001805f54b8:
          if (plVar6 == (longlong *)0x0) break;
          System_Text_StringBuilder__Append(plVar6,uVar8,0);
          uVar9 = uVar9 + 1;
          goto code_r0x0001805f52f0;
        }
        uVar9 = uVar9 + 1;
      } while( true );
    }
  }
code_r0x0001805f5542:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  lVar5 = (*pcVar2)();
  return lVar5;
code_r0x0001805f54fe:
  if (plVar6 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    return lVar5;
  }
  goto code_r0x0001805f5542;
}

