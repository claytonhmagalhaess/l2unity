// PlayerShortcuts__RemoveShotcutLocally__1804d2910 @ 0x1804d2910

ulonglong PlayerShortcuts__RemoveShotcutLocally__1804d2910(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  undefined4 auStackX_10 [2];
  longlong lStackX_18;
  
  if (cRam00000001834b340b == '\0') {
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,Shortcut>.Remove);
    cRam00000001834b340b = '\x01';
  }
  if (cRam00000001834b32cb == '\0') {
    FUN_180315380(TI_SkillbarWindow);
    cRam00000001834b32cb = '\x01';
  }
  if (**(longlong **)(TI_SkillbarWindow + 0xb8) != 0) {
    uVar11 = SkillbarWindow__RemoveShortcut__180707dc0
                       (**(longlong **)(TI_SkillbarWindow + 0xb8),param_2,0);
    lVar13 = MR_System.Collections.Generic.Dictionary<int,Shortcut>.Remove;
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (lVar2 != 0) {
      lStackX_18 = MR_System.Collections.Generic.Dictionary<int,Shortcut>.Remove;
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        lVar3 = *(longlong *)(lVar2 + 0x30);
        auStackX_10[0] = param_2;
        if (lVar3 == 0) {
          uVar10 = func_0x00018051ee70(auStackX_10,
                                       *(undefined8 *)
                                        (*(longlong *)
                                          (*(longlong *)(MR_System.Collections.Generic.Dictionary<int,Shortcut>.Remove + 0x20) + 0xc0) +
                                        0x148));
        }
        else {
          lVar12 = *(longlong *)
                    (*(longlong *)(*(longlong *)(MR_System.Collections.Generic.Dictionary<int,Shortcut>.Remove + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_180312f40(lVar12);
          }
          uVar10 = FUN_1800022b0(1,lVar12,lVar3,param_2);
        }
        lVar3 = *(longlong *)(lVar2 + 0x10);
        if (lVar3 == 0) {
code_r0x0001811f9b6e:
          FUN_1803155d0();
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return uVar11;
        }
        uVar15 = (int)(uVar10 & 0x7fffffff) % *(int *)(lVar3 + 0x18);
        uVar11 = (ulonglong)(int)uVar15;
        if (*(uint *)(lVar3 + 0x18) <= uVar15) {
code_r0x0001811f9b74:
          FUN_1803155c0();
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return uVar11;
        }
        uVar9 = *(int *)(lVar3 + 0x20 + uVar11 * 4) - 1;
        uVar7 = auStackX_10[0];
        uVar8 = 0xffffffff;
        while (uVar6 = uVar9, -1 < (int)uVar6) {
          lVar3 = *(longlong *)(lVar2 + 0x18);
          auStackX_10[0] = uVar7;
          if (lVar3 == 0) goto code_r0x0001811f9b6e;
          if (*(uint *)(lVar3 + 0x18) <= uVar6) goto code_r0x0001811f9b74;
          uVar11 = (ulonglong)(int)uVar6;
          lVar12 = lVar3 + (longlong)(int)uVar6 * 0x18;
          if (*(uint *)(lVar3 + 0x20 + uVar11 * 0x18) == (uVar10 & 0x7fffffff)) {
            lVar4 = *(longlong *)(lVar2 + 0x30);
            lVar3 = lVar3 + (longlong)(int)uVar6 * 0x18;
            if (lVar4 == 0) {
              plVar14 = (longlong *)
                        FUN_18002c590(*(undefined8 *)
                                       (*(longlong *)(*(longlong *)(lVar13 + 0x20) + 0xc0) + 0x18));
              if (plVar14 == (longlong *)0x0) goto code_r0x0001811f9b6e;
              uVar11 = (**(code **)(*plVar14 + 0x1b8))
                                 (plVar14,*(undefined4 *)(lVar3 + 0x28),auStackX_10[0],
                                  *(undefined8 *)(*plVar14 + 0x1c0));
            }
            else {
              uVar1 = *(undefined4 *)(lVar3 + 0x28);
              lVar13 = *(longlong *)(*(longlong *)(*(longlong *)(lStackX_18 + 0x20) + 0xc0) + 8);
              if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                lVar13 = FUN_180312f40(lVar13);
              }
              uVar11 = FUN_18002cd30(0,lVar13,lVar4,uVar1,uVar7);
              lVar13 = lStackX_18;
            }
            if ((char)uVar11 != '\0') {
              if ((int)uVar8 < 0) {
                lVar13 = *(longlong *)(lVar2 + 0x10);
                if (lVar13 == 0) goto code_r0x0001811f9b6e;
                if (*(uint *)(lVar13 + 0x18) <= uVar15) goto code_r0x0001811f9b74;
                *(int *)(lVar13 + 0x20 + (longlong)(int)uVar15 * 4) = *(int *)(lVar12 + 0x24) + 1;
              }
              else {
                lVar13 = *(longlong *)(lVar2 + 0x18);
                if (lVar13 == 0) goto code_r0x0001811f9b6e;
                if (*(uint *)(lVar13 + 0x18) <= uVar8) goto code_r0x0001811f9b74;
                *(undefined4 *)(lVar13 + 0x24 + (longlong)(int)uVar8 * 0x18) =
                     *(undefined4 *)(lVar12 + 0x24);
              }
              *(undefined4 *)(lVar12 + 0x20) = 0xffffffff;
              *(undefined4 *)(lVar12 + 0x24) = *(undefined4 *)(lVar2 + 0x24);
              *(undefined8 *)(lVar12 + 0x30) = 0;
              *(int *)(lVar2 + 0x28) = *(int *)(lVar2 + 0x28) + 1;
              *(int *)(lVar2 + 0x2c) = *(int *)(lVar2 + 0x2c) + 1;
              *(uint *)(lVar2 + 0x24) = uVar6;
              return 1;
            }
          }
          uVar7 = auStackX_10[0];
          uVar8 = uVar6;
          uVar9 = *(uint *)(lVar12 + 0x24);
        }
      }
      return uVar11 & 0xffffffffffffff00;
    }
  }
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  uVar11 = (*pcVar5)();
  return uVar11;
}

