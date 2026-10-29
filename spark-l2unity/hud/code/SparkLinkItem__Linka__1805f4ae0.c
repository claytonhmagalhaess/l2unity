// SparkLinkItem__Linka__1805f4ae0 @ 0x1805f4ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkLinkItem__Linka__1805f4ae0(longlong *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (cRam00000001834b3b45 == '\0') {
    FUN_180315380(TI_ChatWindow);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,int>.Clear);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,int>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<string,int>.set_Item);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_ProductSlot);
    FUN_180315380(TI_SparkLinkItem);
    cRam00000001834b3b45 = '\x01';
  }
  if (((param_1 == (longlong *)0x0) || ((char)param_1[7] != '\0')) || ((int)param_1[0x14] < 1)) {
    return 0;
  }
  if ((*(byte *)(TI_ProductSlot + 0x130) <= *(byte *)(*param_1 + 0x130)) &&
     (*(longlong *)
       (*(longlong *)(*param_1 + 200) + -8 + (ulonglong)*(byte *)(TI_ProductSlot + 0x130) * 8)
      == TI_ProductSlot)) {
    return 0;
  }
  if ((int)param_1[3] == 5) {
    return 0;
  }
  if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar4 = FUN_180458270(0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
  if (cVar2 != '\0') {
    return 0;
  }
  uVar4 = FUN_180458380(0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if (cVar2 == '\0') {
code_r0x0001805f4c7f:
    uVar7 = 0;
    uVar6 = 0;
  }
  else {
    if (DAT_1834b3102 == '\0') {
      FUN_180315380(TI_PlayerInventory);
      DAT_1834b3102 = '\x01';
    }
    if (**(longlong **)(TI_PlayerInventory + 0xb8) == 0) goto DAT_1805f4dad;
    lVar5 = PlayerInventory__GetItemByObjectId
                      (**(longlong **)(TI_PlayerInventory + 0xb8),(int)param_1[0x14],0);
    if (lVar5 == 0) goto code_r0x0001805f4c7f;
    uVar6 = *(undefined4 *)(lVar5 + 0x34);
    uVar7 = *(undefined4 *)(lVar5 + 0x28);
  }
  lVar5 = param_1[2];
  if (*(int *)(TI_SparkLinkItem + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar4 = SparkLinkItem__Rotulo__1805f6120((int)lVar5,uVar6,uVar7,0);
  if (**(longlong **)(TI_SparkLinkItem + 0xb8) != 0) {
    iVar3 = func_0x000181183c40(**(longlong **)(TI_SparkLinkItem + 0xb8),MR_System.Collections.Generic.Dictionary<string,int>.get_Count);
    if (0x40 < iVar3) {
      if (*(int *)(TI_SparkLinkItem + 0xe4) == 0) {
        func_0x000180315660(TI_SparkLinkItem);
      }
      if (**(longlong **)(TI_SparkLinkItem + 0xb8) == 0) goto DAT_1805f4dad;
      FUN_18117b6e0(**(longlong **)(TI_SparkLinkItem + 0xb8),MR_System.Collections.Generic.Dictionary<string,int>.Clear);
    }
    if (*(int *)(TI_SparkLinkItem + 0xe4) == 0) {
      func_0x000180315660(TI_SparkLinkItem);
    }
    if (**(longlong **)(TI_SparkLinkItem + 0xb8) != 0) {
      FUN_18125db60(**(longlong **)(TI_SparkLinkItem + 0xb8),uVar4,(int)param_1[0x14],
                    MR_System.Collections.Generic.Dictionary<string,int>.set_Item);
      if (*(int *)(TI_ChatWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      lVar5 = FUN_180458270(0);
      if (lVar5 != 0) {
        ChatWindow__InsereLink__1805c7480(lVar5,uVar4,0);
        return 1;
      }
    }
  }
DAT_1805f4dad:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

