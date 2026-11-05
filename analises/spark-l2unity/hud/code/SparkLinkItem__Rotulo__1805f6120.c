// SparkLinkItem__Rotulo__1805f6120 @ 0x1805f6120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkLinkItem__Rotulo__1805f6120(undefined4 param_1,int param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 auStackX_8 [2];
  int aiStackX_10 [2];
  int aiStack_18 [4];
  
  auStackX_8[0] = param_1;
  aiStackX_10[0] = param_2;
  if (cRam00000001834b3b4a == '\0') {
    FUN_180315380(TI_ItemTable);
    FUN_180315380(TI_SparkLinkItem);
    FUN_180315380(TI_string__);
    FUN_180315380(LIT_"'+'");
    FUN_180315380(LIT_"' '");
    FUN_180315380(LIT_"'Item '");
    FUN_180315380(LIT_"'['");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"']'");
    cRam00000001834b3b4a = '\x01';
  }
  if (*(int *)(TI_ItemTable + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar3 = ItemTable__get_Instance(0);
  if (lVar3 == 0) {
code_r0x0001805f6240:
    uVar5 = System_Int32__ToString(auStackX_8,0);
    uVar5 = System_String__Concat(LIT_"'Item '",uVar5,0);
  }
  else {
    if (*(int *)(TI_ItemTable + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar3 = ItemTable__get_Instance(0);
    if (lVar3 == 0) goto code_r0x0001805f63c1;
    lVar3 = ItemTable__GetItem(lVar3,auStackX_8[0],0);
    if (((lVar3 == 0) || (*(longlong *)(lVar3 + 0x20) == 0)) ||
       (cVar2 = func_0x000181707e50(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0x18),0),
       cVar2 != '\0')) goto code_r0x0001805f6240;
    if (*(longlong *)(lVar3 + 0x20) == 0) goto code_r0x0001805f63c1;
    uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0x18);
  }
  lVar3 = func_0x000180314710(TI_string__,5);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = LIT_"'['";
      func_0x000180314690(lVar3 + 0x20);
      uVar4 = LIT_"''";
      if (0 < aiStackX_10[0]) {
        uVar4 = System_Int32__ToString(aiStackX_10,0);
        uVar4 = System_String__Concat(LIT_"'+'",uVar4,LIT_"' '",0);
      }
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x28) = uVar4;
        func_0x000180314690(lVar3 + 0x28,uVar4);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = uVar5;
          func_0x000180314690(lVar3 + 0x30,uVar5);
          if (*(int *)(TI_SparkLinkItem + 0xe4) == 0) {
            func_0x000180315660();
          }
          if (cRam00000001834b3b4b == '\0') {
            FUN_180315380(LIT_"''");
            FUN_180315380(LIT_"' ({0:n0})'");
            cRam00000001834b3b4b = '\x01';
          }
          uVar5 = LIT_"''";
          if (1 < param_3) {
            aiStack_18[0] = param_3;
            uVar5 = func_0x000180314670(_DAT_1834c6268,aiStack_18);
            uVar5 = System_String__Format(LIT_"' ({0:n0})'",uVar5,0);
          }
          if (3 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x38) = uVar5;
            func_0x000180314690(lVar3 + 0x38,uVar5);
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = LIT_"']'";
              func_0x000180314690(lVar3 + 0x40);
              System_String__Concat(lVar3,0);
              return;
            }
          }
        }
      }
    }
    FUN_1803155c0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
code_r0x0001805f63c1:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

