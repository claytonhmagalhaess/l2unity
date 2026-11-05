// L2SlotManager__IsSameSlot__180792b30 @ FI_73187748

ulonglong L2SlotManager__IsSameSlot__180792b30(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint3 uVar3;
  ulonglong in_RAX;
  
  if ((*(longlong *)(param_1 + 0x88) != 0) && (*(longlong *)(param_1 + 0x90) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x88);
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x90) + 0x14);
    in_RAX = (ulonglong)uVar1;
    if (*(uint *)(lVar2 + 0x14) == uVar1) {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x90) + 0x18);
      in_RAX = (ulonglong)uVar1;
      if (*(uint *)(lVar2 + 0x18) == uVar1) {
        uVar3 = (uint3)(uVar1 >> 8);
        if (*(int *)(lVar2 + 0x18) != 0xb) {
          return CONCAT71((uint7)uVar3,1);
        }
        return (ulonglong)CONCAT31(uVar3,lVar2 == *(longlong *)(param_1 + 0x90));
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

