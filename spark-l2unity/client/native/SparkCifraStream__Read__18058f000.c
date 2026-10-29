// SparkCifraStream__Read__18058f000 @ 0x18058f000

ulonglong SparkCifraStream__Read__18058f000
                    (longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  char acStackX_8 [32];
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar10;
  undefined8 auStack_60 [2];
  undefined8 uStack_50;
  char *pcStack_48;
  undefined8 *puStack_40;
  
  if (cRam00000001834b39e4 == '\0') {
    FUN_180315380(0x1832eb0e0);
    cRam00000001834b39e4 = '\x01';
  }
  auStack_60[0] = *(undefined8 *)(param_1 + 0x48);
  acStackX_8[0] = '\0';
  uStack_50 = 0;
  pcStack_48 = acStackX_8;
  puStack_40 = auStack_60;
  FUN_181915310(auStack_60[0],acStackX_8,0);
  lVar6 = *(longlong *)(param_1 + 0x38);
  if ((*(longlong *)(param_1 + 0x40) < lVar6) && (0 < param_4)) {
    if (lVar6 - *(longlong *)(param_1 + 0x40) < (longlong)param_4) {
      param_4 = (int)lVar6 - *(int *)(param_1 + 0x40);
    }
    plVar1 = *(longlong **)(param_1 + 0x28);
    if (plVar1 == (longlong *)0x0) {
code_r0x00018058f1f7:
      FUN_1803155d0();
      FUN_180311490();
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
    lVar9 = *(longlong *)(param_1 + 0x40) + 8;
    lVar6 = (**(code **)(*plVar1 + 0x1f8))(plVar1,*(undefined8 *)(*plVar1 + 0x200));
    if (lVar6 != lVar9) {
      plVar1 = *(longlong **)(param_1 + 0x28);
      if (plVar1 == (longlong *)0x0) {
        FUN_1803155d0();
code_r0x00018058f1f2:
        FUN_1803155d0();
        goto code_r0x00018058f1f7;
      }
      (**(code **)(*plVar1 + 0x208))(plVar1,lVar9,*(undefined8 *)(*plVar1 + 0x210));
    }
    for (uVar8 = 0; uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20),
        (int)uVar8 < param_4; uVar8 = uVar8 + iVar5) {
      plVar1 = *(longlong **)(param_1 + 0x28);
      if (plVar1 == (longlong *)0x0) goto code_r0x00018058f1f2;
      in_stack_ffffffffffffff88 = *(undefined8 *)(*plVar1 + 0x340);
      iVar5 = (**(code **)(*plVar1 + 0x338))
                        (plVar1,param_2,uVar8 + param_3,param_4 - uVar8,in_stack_ffffffffffffff88);
      uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
      if (iVar5 < 1) break;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(lRam00000001832eb0e0 + 0xe4) == 0) {
      func_0x000180315660();
    }
    SparkCifraStream__Xor__18058f690(uVar2,uVar3,param_2,param_3,CONCAT44(uVar10,uVar8),0);
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + (longlong)(int)uVar8;
    if (acStackX_8[0] != '\0') {
      func_0x0001819153a0(auStack_60[0],0);
    }
  }
  else {
    uVar8 = 0;
    if (acStackX_8[0] != '\0') {
      func_0x0001819153a0(auStack_60[0],0);
    }
  }
  return (ulonglong)uVar8;
}

