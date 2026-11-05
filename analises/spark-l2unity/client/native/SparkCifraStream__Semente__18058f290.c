// SparkCifraStream__Semente__18058f290 @ 0x18058f290

undefined8 SparkCifraStream__Semente__18058f290(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if (cRam00000001834b39e6 == '\0') {
    FUN_180315380(0x183331868);
    FUN_180315380(0x1833125d0);
    FUN_180315380(0x1832eb0e0);
    FUN_180315380(0x1832bdd68);
    cRam00000001834b39e6 = '\x01';
  }
  uVar9 = 0;
  plVar3 = (longlong *)FUN_18172dd40(0);
  if ((param_1 != 0) || (param_1 = lRam00000001832bdd68, lRam00000001832bdd68 != 0)) {
    uVar4 = FUN_18170c9f0(param_1,0);
    if (plVar3 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar3 + 0x248))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0x250));
      if (lVar5 != 0) {
        lVar6 = func_0x000180314710(uRam0000000183331868,*(int *)(lVar5 + 0x18) + 0x21);
        while( true ) {
          if (*(int *)(lRam00000001832eb0e0 + 0xe4) == 0) {
            func_0x000180315660();
          }
          lVar1 = *(longlong *)(*(longlong *)(lRam00000001832eb0e0 + 0xb8) + 8);
          if (lVar1 == 0) break;
          uVar8 = (uint)uVar9;
          if ((*(uint *)(lVar1 + 0x18) <= uVar8) ||
             (uVar7 = uVar8 + 1 & 3, *(uint *)(lVar1 + 0x18) <= uVar7)) goto code_r0x00018058f5fe;
          if (lVar6 == 0) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar8 * 8) goto code_r0x00018058f5fe;
          uVar9 = *(ulonglong *)(lVar1 + 0x20 + (ulonglong)uVar7 * 8) >> 7 ^
                  *(ulonglong *)(lVar1 + 0x20 + uVar9 * 8) ^
                  (longlong)(int)(uVar8 + 1) * 0x2545f4914f6cdd1d;
          *(char *)((longlong)(int)(uVar8 * 8) + 0x20 + lVar6) = (char)uVar9;
          if (*(uint *)(lVar6 + 0x18) <= uVar8 * 8 + 1) goto code_r0x00018058f5fe;
          *(char *)((longlong)(int)(uVar8 * 8) + 0x21 + lVar6) = (char)(uVar9 >> 8);
          if (*(uint *)(lVar6 + 0x18) <= uVar8 * 8 + 2) goto code_r0x00018058f5fe;
          *(char *)((longlong)(int)(uVar8 * 8) + 0x22 + lVar6) = (char)(uVar9 >> 0x10);
          if (*(uint *)(lVar6 + 0x18) <= uVar8 * 8 + 3) goto code_r0x00018058f5fe;
          *(char *)((longlong)(int)(uVar8 * 8) + 0x23 + lVar6) = (char)(uVar9 >> 0x18);
          if (*(uint *)(lVar6 + 0x18) <= uVar8 * 8 + 4) goto code_r0x00018058f5fe;
          *(char *)((longlong)(int)(uVar8 * 8) + 0x24 + lVar6) = (char)(uVar9 >> 0x20);
          if (*(uint *)(lVar6 + 0x18) <= uVar8 * 8 + 5) goto code_r0x00018058f5fe;
          *(char *)((longlong)(int)(uVar8 * 8) + 0x25 + lVar6) = (char)(uVar9 >> 0x28);
          if (*(uint *)(lVar6 + 0x18) <= uVar8 * 8 + 6) goto code_r0x00018058f5fe;
          *(char *)((longlong)(int)(uVar8 * 8) + 0x26 + lVar6) = (char)(uVar9 >> 0x30);
          if (*(uint *)(lVar6 + 0x18) <= uVar8 * 8 + 7) goto code_r0x00018058f5fe;
          *(char *)((longlong)(int)(uVar8 * 8) + 0x27 + lVar6) = (char)(uVar9 >> 0x38);
          uVar9 = (ulonglong)(uVar8 + 1);
          if (3 < (int)(uVar8 + 1)) goto code_r0x00018058f50d;
        }
      }
    }
  }
  FUN_1803155d0();
code_r0x00018058f5f2:
  FUN_1803155d0();
  FUN_180311490();
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return uVar4;
code_r0x00018058f50d:
  if (*(uint *)(lVar6 + 0x18) < 0x21) {
code_r0x00018058f5fe:
    FUN_1803155c0();
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  *(undefined1 *)(lVar6 + 0x40) = 0x7c;
  FUN_1818cf2e0(lVar5,0,lVar6,0x21,*(undefined4 *)(lVar5 + 0x18),0);
  lVar5 = FUN_18174b3a0(0);
  if (lVar5 != 0) {
    uVar4 = FUN_18172e850(lVar5,lVar6,0);
    uVar4 = FUN_18180c860(uVar4,0,0);
    if (lVar5 != 0) {
      FUN_180002390(0,uRam00000001833125d0);
    }
    return uVar4;
  }
  goto code_r0x00018058f5f2;
}

