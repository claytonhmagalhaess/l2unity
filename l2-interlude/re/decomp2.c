// ==== 0x1046f230 FUN_1046f230

void FUN_1046f230(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int unaff_EBX;
  int unaff_EBP;
  uint uVar6;
  undefined4 *unaff_FS_OFFSET;
  
  _appStrcpy__YAPAGPAGPBG_Z(unaff_EBP + -0xb4,&UNK_1089a498);
  func_0x10307ba3(unaff_EBP + -0x134,&UNK_1089a584);
  uVar6 = (-(uint)(*(int *)(unaff_EBP + 8) != 0) & 0xfffffffe) + 2 | 4;
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(unaff_EBX + 0x3d08) + 4);
  piVar2 = (int *)(**(code **)(**(int **)_GFileManager__3PAVFFileManager__A_exref + 0xc))
                            (unaff_EBP + -0xb4,uVar6,
                             *(undefined4 *)_GNull__3PAVFOutputDevice__A_exref);
  piVar3 = (int *)(**(code **)(**(int **)_GFileManager__3PAVFFileManager__A_exref + 0xc))
                            (unaff_EBP + -0x134,uVar6,
                             *(undefined4 *)_GNull__3PAVFOutputDevice__A_exref);
  if (piVar2 == (int *)0x0) {
    _Logf_FOutputDevice__QAAXPBGZZ
              (*(undefined4 *)_GWarn__3PAVFFeedbackContext__A_exref,&UNK_10895738,unaff_EBP + -0xb4)
    ;
  }
  else {
    (**(code **)(*piVar2 + 4))(unaff_EBP + -0x14,4);
  }
  if (piVar3 == (int *)0x0) {
    _Logf_FOutputDevice__QAAXPBGZZ
              (*(undefined4 *)_GWarn__3PAVFFeedbackContext__A_exref,&UNK_10895738,unaff_EBP + -0x134
              );
  }
  else {
    (**(code **)(*piVar3 + 4))(unaff_EBP + -0x14,4);
  }
  piVar5 = *(int **)(unaff_EBX + 0x3d08);
  *(int **)(unaff_EBP + -0x24) = piVar5;
  *(int **)(unaff_EBP + -0x20) = piVar5;
  iVar4 = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  while (iVar4 < piVar5[1]) {
    iVar1 = *(int *)(*piVar5 + 8 + iVar4 * 0xc);
    if (piVar2 != (int *)0x0) {
      func_0x1030366b(piVar2,0);
      iVar4 = *(int *)(unaff_EBP + -0x1c);
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(iVar1 + 0x18,4);
      (**(code **)(*piVar3 + 4))(iVar1 + 0x1c,4);
      func_0x1030366b(piVar3,1);
      iVar4 = *(int *)(unaff_EBP + -0x1c);
    }
    iVar4 = iVar4 + 1;
    *(int *)(unaff_EBP + -0x1c) = iVar4;
    piVar5 = *(int **)(unaff_EBP + -0x20);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  func_0x1030b0f0();
  if (piVar2 != (int *)0x0) {
    func_0x1030d5f3(piVar2);
    (**(code **)(*piVar2 + 0x58))();
    _Logf_FOutputDevice__QAAXPBGZZ
              (*(undefined4 *)_GWarn__3PAVFFeedbackContext__A_exref,0x10a799d8,unaff_EBP + -0xb4);
  }
  if (piVar3 != (int *)0x0) {
    func_0x1030d5f3(piVar3);
    (**(code **)(*piVar3 + 0x58))();
    _Logf_FOutputDevice__QAAXPBGZZ
              (*(undefined4 *)_GWarn__3PAVFFeedbackContext__A_exref,0x10a799d8,unaff_EBP + -0x134);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)*piVar2)(1);
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)*piVar3)(1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


