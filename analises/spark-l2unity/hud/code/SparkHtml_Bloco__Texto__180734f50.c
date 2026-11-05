// SparkHtml_Bloco__Texto__180734f50 @ 0x180734f50

longlong SparkHtml_Bloco__Texto__180734f50(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  lVar7 = *(longlong *)(param_1 + 0x28);
  if (lVar7 == 0) {
    FUN_1803155d0();
    pcVar3 = (code *)swi(3);
    lVar7 = (*pcVar3)();
    return lVar7;
  }
  if (param_2 != 0) {
    lVar2 = *(longlong *)(lVar7 + 0x10);
    if (lVar2 == 0) {
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      lVar7 = (*pcVar3)();
      return lVar7;
    }
    uVar1 = *(uint *)(lVar7 + 0x20);
    lVar8 = (longlong)(int)uVar1;
    iVar5 = *(int *)(param_2 + 0x10);
    iVar9 = iVar5 + uVar1;
    if (iVar9 < *(int *)(lVar2 + 0x18)) {
      if (2 < iVar5) {
        iVar6 = func_0x0001817c2fd0(0);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          func_0x00018098f890(lVar2 + (lVar8 + 0x10) * 2,iVar6 + param_2,iVar5,0);
          *(int *)(lVar7 + 0x20) = iVar9;
          return lVar7;
        }
LAB_181713600:
        FUN_1803155c0();
        pcVar3 = (code *)swi(3);
        lVar7 = (*pcVar3)();
        return lVar7;
      }
      if (0 < iVar5) {
        uVar4 = System_String__get_Chars(param_2,0,0);
        if (*(uint *)(lVar2 + 0x18) <= uVar1) goto LAB_181713600;
        *(undefined2 *)(lVar2 + 0x20 + lVar8 * 2) = uVar4;
      }
      if (1 < iVar5) {
        uVar4 = System_String__get_Chars(param_2,1,0);
        if (*(uint *)(lVar2 + 0x18) <= (uint)(lVar8 + 1)) goto LAB_181713600;
        *(undefined2 *)(lVar2 + 0x20 + (lVar8 + 1) * 2) = uVar4;
      }
      *(int *)(lVar7 + 0x20) = iVar9;
      return lVar7;
    }
    iVar5 = func_0x0001817c2fd0(0);
    System_Text_StringBuilder__Append(lVar7,iVar5 + param_2,*(undefined4 *)(param_2 + 0x10),0);
  }
  return lVar7;
}

