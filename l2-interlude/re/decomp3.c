// ==== 0x106ba590 FUN_106ba590

float10 __thiscall FUN_106ba590(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  float10 fVar6;
  undefined4 uVar7;
  float fStack_18;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &UNK_10828250;
  uStack_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_10;
  uStack_8 = 0;
  fStack_18 = 0.0;
  if (param_1[0x62] != 0) {
    piVar1 = (int *)(**(code **)(*param_1 + 0x160))(param_2);
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x68))(param_2);
      if (iVar2 != 0) {
        iVar3 = (**(code **)(*param_1 + 0xd0))(iVar2);
        do {
          iVar3 = iVar3 + -1;
          if (iVar3 < 0) goto LAB_106ba652;
          uVar4 = (**(code **)(*param_1 + 0xdc))(iVar2,iVar3);
          iVar5 = func_0x10307dd3(uVar4);
        } while (iVar5 == 0);
        uVar7 = 1;
        uVar4 = _GetFullName_UObject__QBEPBGPAG_Z(0);
        __0FName__QAE_PBGW4EFindName___Z(uVar4,uVar7);
        *param_3 = param_2;
        fVar6 = (float10)(**(code **)(*param_1 + 0xd4))(iVar2,iVar3);
        fStack_18 = (float)fVar6;
      }
    }
  }
LAB_106ba652:
  *unaff_FS_OFFSET = uStack_10;
  return (float10)fStack_18;
}


