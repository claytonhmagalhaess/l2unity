// ==== 11038990 FUN_11038990

WDialog * __fastcall FUN_11038990(WDialog *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11063fd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WDialog::WDialog(param_1);
  *(undefined ***)param_1 = WWizardPage::vftable;
  ExceptionList = local_c;
  return param_1;
}


// ==== 110389f0 FUN_110389f0

WDialog * __thiscall FUN_110389f0(void *this,ushort *param_1,void *param_2,undefined4 param_3)

{
  void *unaff_EDI;
  void *pvStack_24;
  void *pvStack_20;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063ff8;
  pvStack_c = ExceptionList;
  uStack_1c = param_3;
  pvStack_20 = param_2;
  ExceptionList = &pvStack_c;
  pvStack_24 = this;
  FName::FName((FName *)&pvStack_24,param_1,1);
  WDialog::WDialog(this);
  *(undefined ***)this = WWizardPage::vftable;
  *(undefined4 *)((int)this + 0x3c) = param_3;
  ExceptionList = unaff_EDI;
  return this;
}


// ==== 11038a80 FUN_11038a80

WDialog * __thiscall FUN_11038a80(void *this,WDialog *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11064018;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WDialog::WDialog(this,param_1);
  *(undefined ***)this = WWizardPage::vftable;
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  ExceptionList = local_c;
  return this;
}


// ==== 11038af0 FUN_11038af0

WWindow * __thiscall FUN_11038af0(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return this;
}


// ==== 11038b20 FUN_11038b20

WWizardPage * __thiscall FUN_11038b20(void *this,byte param_1)

{
  WWizardPage::~WWizardPage(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11038b50 FUN_11038b50

WWizardPage * __thiscall FUN_11038b50(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x40,*(int *)((int)this + -4),WWizardPage::~WWizardPage);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WWizardPage *)((int)this + -4));
    }
    return (WWizardPage *)((int)this + -4);
  }
  WWizardPage::~WWizardPage(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11038bd0 FUN_11038bd0

void __fastcall FUN_11038bd0(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_11064091;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WWizardDialog::vftable;
  local_4 = 6;
  WWindow::MaybeDestroy(param_1);
  local_4._0_1_ = 5;
  thunk_FUN_1102ea80((FArray *)(param_1 + 0x2ec));
  local_4._0_1_ = 4;
  WLabel::~WLabel((WLabel *)(param_1 + 0x2ac));
  local_4._0_1_ = 3;
  WCoolButton::~WCoolButton((WCoolButton *)(param_1 + 0x210));
  local_4._0_1_ = 2;
  WCoolButton::~WCoolButton((WCoolButton *)(param_1 + 0x174));
  local_4._0_1_ = 1;
  WCoolButton::~WCoolButton((WCoolButton *)(param_1 + 0xd8));
  local_4 = (uint)local_4._1_3_ << 8;
  WCoolButton::~WCoolButton((WCoolButton *)(param_1 + 0x3c));
  local_4 = 0xffffffff;
  WWindow::~WWindow(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11038cb0 FUN_11038cb0

WDialog * __fastcall FUN_11038cb0(WDialog *param_1)

{
  WControl *this;
  undefined **ppuStack_80;
  WDialog *pWStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_74;
  WDialog *pWStack_70;
  undefined4 uStack_6c;
  undefined **ppuStack_68;
  WDialog *pWStack_64;
  undefined1 *puStack_60;
  undefined4 uStack_5c;
  WDialog *pWStack_58;
  undefined4 uStack_54;
  undefined **ppuStack_50;
  WDialog *pWStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  WDialog *pWStack_40;
  undefined4 uStack_3c;
  undefined **ppuStack_38;
  WDialog *pWStack_34;
  WDialog *pWStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1106412a;
  pvStack_c = ExceptionList;
  uStack_20 = 0;
  uStack_24 = 0x68;
  pWStack_34 = (WDialog *)0x11038ce8;
  ExceptionList = &pvStack_c;
  pWStack_28 = param_1;
  FName::FName((FName *)&pWStack_28,(ushort *)u_WizardDialog_11073ca4,1);
  WDialog::WDialog(param_1);
  *(undefined ***)param_1 = WWizardDialog::vftable;
  uStack_3c = 3;
  ppuStack_38 = FDelegate::vftable;
  uStack_44 = 0x11038d23;
  pWStack_40 = param_1;
  pWStack_34 = param_1;
  WCoolButton::WCoolButton((WCoolButton *)(param_1 + 0x3c));
  pWStack_28 = (WDialog *)CONCAT31(pWStack_28._1_3_,1);
  uStack_44 = 5;
  pWStack_34 = (WDialog *)&ppuStack_50;
  uStack_54 = 0x3ec;
  ppuStack_50 = FDelegate::vftable;
  puStack_48 = &LAB_11001c6c;
  uStack_5c = 0x11038d54;
  pWStack_58 = param_1;
  pWStack_4c = param_1;
  WCoolButton::WCoolButton((WCoolButton *)(param_1 + 0xd8));
  pWStack_40 = (WDialog *)CONCAT31(pWStack_40._1_3_,2);
  uStack_5c = 5;
  pWStack_4c = (WDialog *)&ppuStack_68;
  uStack_6c = 0x3ed;
  ppuStack_68 = FDelegate::vftable;
  puStack_60 = &LAB_11001b13;
  uStack_74 = 0x11038d85;
  pWStack_70 = param_1;
  pWStack_64 = param_1;
  WCoolButton::WCoolButton((WCoolButton *)(param_1 + 0x174));
  pWStack_58 = (WDialog *)CONCAT31(pWStack_58._1_3_,3);
  uStack_74 = 5;
  pWStack_64 = (WDialog *)&ppuStack_80;
  ppuStack_80 = FDelegate::vftable;
  puStack_78 = &LAB_11001ae6;
  pWStack_7c = param_1;
  WCoolButton::WCoolButton((WCoolButton *)(param_1 + 0x210),param_1,2);
  pWStack_70._0_1_ = 4;
  this = (WControl *)(param_1 + 0x2ac);
  pWStack_7c = (WDialog *)this;
  WControl::WControl(this,(WWindow *)param_1,0x425,WLabel::SuperProc);
  *(undefined ***)this = WLabel::vftable;
  pWStack_70 = (WDialog *)CONCAT31(pWStack_70._1_3_,6);
  pWStack_7c = param_1 + 0x2ec;
  FArray::FArray((FArray *)pWStack_7c);
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  ExceptionList = puStack_78;
  return param_1;
}


// ==== 11038e80 FUN_11038e80

WDialog * __thiscall FUN_11038e80(void *this,WDialog *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110641b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WDialog::WDialog(this,param_1);
  local_4 = 0;
  *(undefined ***)this = WWizardDialog::vftable;
  WCoolButton::WCoolButton((WCoolButton *)((int)this + 0x3c),(WCoolButton *)(param_1 + 0x3c));
  local_4._0_1_ = 1;
  WCoolButton::WCoolButton((WCoolButton *)((int)this + 0xd8),(WCoolButton *)(param_1 + 0xd8));
  local_4._0_1_ = 2;
  WCoolButton::WCoolButton((WCoolButton *)((int)this + 0x174),(WCoolButton *)(param_1 + 0x174));
  local_4._0_1_ = 3;
  WCoolButton::WCoolButton((WCoolButton *)((int)this + 0x210),(WCoolButton *)(param_1 + 0x210));
  local_4._0_1_ = 4;
  WLabel::WLabel((WLabel *)((int)this + 0x2ac),(WLabel *)(param_1 + 0x2ac));
  local_4 = CONCAT31(local_4._1_3_,5);
  thunk_FUN_1102aef0((void *)((int)this + 0x2ec),(int *)(param_1 + 0x2ec));
  *(undefined4 *)((int)this + 0x2f8) = *(undefined4 *)(param_1 + 0x2f8);
  ExceptionList = local_c;
  return this;
}


// ==== 11038fa0 FUN_11038fa0

WWindow * __thiscall FUN_11038fa0(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  WButton::operator=((WButton *)((int)this + 0x3c),(WButton *)(param_1 + 0x3c));
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  WButton::operator=((WButton *)((int)this + 0xd8),(WButton *)(param_1 + 0xd8));
  *(undefined4 *)((int)this + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)((int)this + 0x170) = *(undefined4 *)(param_1 + 0x170);
  WButton::operator=((WButton *)((int)this + 0x174),(WButton *)(param_1 + 0x174));
  *(undefined4 *)((int)this + 0x208) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)((int)this + 0x20c) = *(undefined4 *)(param_1 + 0x20c);
  WButton::operator=((WButton *)((int)this + 0x210),(WButton *)(param_1 + 0x210));
  *(undefined4 *)((int)this + 0x2a4) = *(undefined4 *)(param_1 + 0x2a4);
  *(undefined4 *)((int)this + 0x2a8) = *(undefined4 *)(param_1 + 0x2a8);
  WWindow::operator=((WWindow *)((int)this + 0x2ac),param_1 + 0x2ac);
  *(undefined4 *)((int)this + 0x2e8) = *(undefined4 *)(param_1 + 0x2e8);
  thunk_FUN_1102eb40((void *)((int)this + 0x2ec),(FArray *)(param_1 + 0x2ec));
  *(undefined4 *)((int)this + 0x2f8) = *(undefined4 *)(param_1 + 0x2f8);
  return this;
}


// ==== 110390e0 FUN_110390e0

WWizardDialog * __thiscall FUN_110390e0(void *this,byte param_1)

{
  WWizardDialog::~WWizardDialog(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11039110 FUN_11039110

WWizardDialog * __thiscall FUN_11039110(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x2fc,*(int *)((int)this + -4),WWizardDialog::~WWizardDialog);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WWizardDialog *)((int)this + -4));
    }
    return (WWizardDialog *)((int)this + -4);
  }
  WWizardDialog::~WWizardDialog(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11039190 FUN_11039190

void __fastcall FUN_11039190(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_110641e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WSplitterPane::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WWindow::~WWindow(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11039200 FUN_11039200

WWindow * __fastcall FUN_11039200(WWindow *param_1)

{
  WWindow *pWStack_20;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11064208;
  pvStack_c = ExceptionList;
  uStack_1c = 0;
  ExceptionList = &pvStack_c;
  pWStack_20 = param_1;
  FName::FName((FName *)&pWStack_20,0);
  WWindow::WWindow(param_1);
  *(undefined ***)param_1 = WSplitterPane::vftable;
  ExceptionList = param_1;
  return param_1;
}


// ==== 11039280 FUN_11039280

WWindow * __thiscall FUN_11039280(void *this,undefined4 param_1)

{
  void *unaff_ESI;
  void *pvStack_1c;
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11064228;
  pvStack_c = ExceptionList;
  uStack_18 = param_1;
  ExceptionList = &pvStack_c;
  pvStack_1c = this;
  FName::FName((FName *)&pvStack_1c,(ushort *)u_WSplitterPane_1106fe14,1);
  WWindow::WWindow(this);
  *(undefined ***)this = WSplitterPane::vftable;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11039300 FUN_11039300

WWindow * __thiscall FUN_11039300(void *this,WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11064248;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WWindow::WWindow(this,param_1);
  *(undefined ***)this = WSplitterPane::vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 11039370 FUN_11039370

WWindow * __thiscall FUN_11039370(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  return this;
}


// ==== 11039390 FUN_11039390

WSplitterPane * __thiscall FUN_11039390(void *this,byte param_1)

{
  WSplitterPane::~WSplitterPane(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 110393c0 FUN_110393c0

WSplitterPane * __thiscall FUN_110393c0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x3c,*(int *)((int)this + -4),WSplitterPane::~WSplitterPane);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WSplitterPane *)((int)this + -4));
    }
    return (WSplitterPane *)((int)this + -4);
  }
  WSplitterPane::~WSplitterPane(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11039440 FUN_11039440

void __fastcall FUN_11039440(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11064268;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WSplitter::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WWindow::~WWindow(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 110394b0 FUN_110394b0

WWindow * __fastcall FUN_110394b0(WWindow *param_1)

{
  WWindow *pWStack_20;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11064288;
  pvStack_c = ExceptionList;
  uStack_1c = 0;
  ExceptionList = &pvStack_c;
  pWStack_20 = param_1;
  FName::FName((FName *)&pWStack_20,0);
  WWindow::WWindow(param_1);
  *(undefined ***)param_1 = WSplitter::vftable;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  ExceptionList = param_1;
  return param_1;
}


// ==== 11039530 FUN_11039530

WWindow * __thiscall FUN_11039530(void *this,undefined4 param_1)

{
  void *unaff_ESI;
  void *pvStack_1c;
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110642a8;
  pvStack_c = ExceptionList;
  uStack_18 = param_1;
  ExceptionList = &pvStack_c;
  pvStack_1c = this;
  FName::FName((FName *)&pvStack_1c,(ushort *)u_WSplitter_1106fe38,1);
  WWindow::WWindow(this);
  *(undefined ***)this = WSplitter::vftable;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 110395b0 FUN_110395b0

WWindow * __thiscall FUN_110395b0(void *this,WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110642c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WWindow::WWindow(this,param_1);
  *(undefined ***)this = WSplitter::vftable;
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  ExceptionList = local_c;
  return this;
}


// ==== 11039630 FUN_11039630

WWindow * __thiscall FUN_11039630(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  return this;
}


// ==== 11039660 FUN_11039660

WSplitter * __thiscall FUN_11039660(void *this,byte param_1)

{
  WSplitter::~WSplitter(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11039690 FUN_11039690

WSplitter * __thiscall FUN_11039690(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x44,*(int *)((int)this + -4),WSplitter::~WSplitter);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WSplitter *)((int)this + -4));
    }
    return (WSplitter *)((int)this + -4);
  }
  WSplitter::~WSplitter(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11039710 FUN_11039710

void __fastcall FUN_11039710(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_110642e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WSplitterContainer::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WWindow::~WWindow(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11039780 FUN_11039780

WWindow * __thiscall FUN_11039780(void *this,undefined4 param_1)

{
  void *unaff_ESI;
  void *pvStack_1c;
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11064308;
  pvStack_c = ExceptionList;
  uStack_18 = param_1;
  ExceptionList = &pvStack_c;
  pvStack_1c = this;
  FName::FName((FName *)&pvStack_1c,(ushort *)u_WSplitterContainer_1106fe50,1);
  WWindow::WWindow(this);
  *(undefined ***)this = WSplitterContainer::vftable;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11039810 FUN_11039810

WWindow * __thiscall FUN_11039810(void *this,WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11064328;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WWindow::WWindow(this,param_1);
  *(undefined ***)this = WSplitterContainer::vftable;
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  ExceptionList = local_c;
  return this;
}


// ==== 110398a0 FUN_110398a0

WWindow * __thiscall FUN_110398a0(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return this;
}


// ==== 110398e0 FUN_110398e0

WSplitterContainer * __thiscall FUN_110398e0(void *this,byte param_1)

{
  WSplitterContainer::~WSplitterContainer(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11039910 FUN_11039910

WSplitterContainer * __thiscall FUN_11039910(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x4c,*(int *)((int)this + -4),WSplitterContainer::~WSplitterContainer);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WSplitterContainer *)((int)this + -4));
    }
    return (WSplitterContainer *)((int)this + -4);
  }
  WSplitterContainer::~WSplitterContainer(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11039990 FUN_11039990

void __fastcall FUN_11039990(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11064349;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_1100e610(param_1,0,*(int *)(param_1 + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11039a00 FUN_11039a00

FArray * __thiscall FUN_11039a00(void *this,FArray *param_1)

{
  void *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (this == param_1) {
    return this;
  }
  thunk_FUN_1102ebb0(this,*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(this,1,0x28);
      this_00 = (void *)(*(int *)this + iVar1 * 0x28);
      if (this_00 != (void *)0x0) {
        thunk_FUN_11025fb0(this_00,(undefined4 *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (iVar2 < *(int *)(param_1 + 4));
    return this;
  }
  return this;
}


// ==== 11039a80 FUN_11039a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_11039a80(void *this,int param_1)

{
  HWND__ *pHVar1;
  HGDIOBJ pvVar2;
  WSplitter *pWVar3;
  WSplitterPane *pWVar4;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_11064381;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)((int)this + 0x14) == 0) {
    pHVar1 = (HWND__ *)0x0;
  }
  else {
    pHVar1 = *(HWND__ **)(*(int *)((int)this + 0x14) + 4);
  }
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (this,0,(ushort *)0x0,0x56000000,0,0,0,0,pHVar1,(HMENU__ *)0x0,DAT_1109c35c);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar2 = GetStockObject(0x11);
    SendMessageA(*(HWND *)((int)this + 4),0x30,(WPARAM)pvVar2,lParam);
  }
  else {
    pvVar2 = GetStockObject(0x11);
    SendMessageW(*(HWND *)((int)this + 4),0x30,(WPARAM)pvVar2,lParam);
  }
  pWVar3 = (WSplitter *)thunk_FUN_11004ba0(0x44);
  local_8._0_1_ = 1;
  if (pWVar3 == (WSplitter *)0x0) {
    pWVar3 = (WSplitter *)0x0;
  }
  else {
    pWVar3 = (WSplitter *)WSplitter::WSplitter(pWVar3,this);
  }
  local_8._0_1_ = 0;
  *(WSplitter **)((int)this + 0x3c) = pWVar3;
  WSplitter::OpenWindow(pWVar3,param_1);
  WSplitterContainer::SetPct(this,_DAT_11074074);
  pWVar4 = (WSplitterPane *)thunk_FUN_11004ba0(0x3c);
  local_8._0_1_ = 2;
  if (pWVar4 == (WSplitterPane *)0x0) {
    pWVar4 = (WSplitterPane *)0x0;
  }
  else {
    pWVar4 = (WSplitterPane *)WSplitterPane::WSplitterPane(pWVar4,this);
  }
  local_8._0_1_ = 0;
  *(WSplitterPane **)((int)this + 0x40) = pWVar4;
  WSplitterPane::OpenWindow(pWVar4);
  pWVar4 = (WSplitterPane *)thunk_FUN_11004ba0(0x3c);
  local_8._0_1_ = 3;
  if (pWVar4 == (WSplitterPane *)0x0) {
    pWVar4 = (WSplitterPane *)0x0;
  }
  else {
    pWVar4 = (WSplitterPane *)WSplitterPane::WSplitterPane(pWVar4,this);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(WSplitterPane **)((int)this + 0x44) = pWVar4;
  WSplitterPane::OpenWindow(pWVar4);
  ExceptionList = local_10;
  return;
}


// ==== 11039bc1 Catch@11039bc1

void Catch_11039bc1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11039bd5 Catch@11039bd5

void Catch_11039bd5(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WSplitterContainer__OpenWindow_11074028);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11039c50 FUN_11039c50

void __fastcall FUN_11039c50(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_110643ca;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WPropertyPage::vftable;
  local_4 = 3;
  WWindow::MaybeDestroy(param_1);
  local_4._0_1_ = 2;
  FString::~FString((FString *)(param_1 + 0x54));
  local_4._0_1_ = 1;
  thunk_FUN_1102e740((FArray *)(param_1 + 0x48));
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_11039990((FArray *)(param_1 + 0x3c));
  local_4 = 0xffffffff;
  WWindow::~WWindow(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11039cf0 FUN_11039cf0

WWindow * __thiscall FUN_11039cf0(void *this,undefined4 param_1)

{
  void *unaff_ESI;
  void *pvStack_1c;
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  FArray *pFStack_4;
  
  pFStack_4 = (FArray *)0xffffffff;
  puStack_8 = &LAB_1106442c;
  pvStack_c = ExceptionList;
  uStack_18 = param_1;
  ExceptionList = &pvStack_c;
  pvStack_1c = this;
  FName::FName((FName *)&pvStack_1c,(ushort *)u_WPropertyPage_1106fa64,1);
  WWindow::WWindow(this);
  pvStack_c = (void *)0x0;
  pFStack_4 = (FArray *)((int)this + 0x3c);
  *(undefined ***)this = WPropertyPage::vftable;
  FArray::FArray(pFStack_4);
  pvStack_c._0_1_ = 2;
  pFStack_4 = (FArray *)((int)this + 0x48);
  FArray::FArray(pFStack_4);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,4);
  FString::FString((FString *)((int)this + 0x54));
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11039db0 FUN_11039db0

WWindow * __thiscall FUN_11039db0(void *this,WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1106447a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WWindow::WWindow(this,param_1);
  local_4 = 0;
  *(undefined ***)this = WPropertyPage::vftable;
  thunk_FUN_1102a950((void *)((int)this + 0x3c),(int *)(param_1 + 0x3c));
  local_4._0_1_ = 1;
  thunk_FUN_1102aa10((void *)((int)this + 0x48),(int *)(param_1 + 0x48));
  local_4 = CONCAT31(local_4._1_3_,2);
  FString::FString((FString *)((int)this + 0x54),(FString *)(param_1 + 0x54));
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  ExceptionList = local_c;
  return this;
}


// ==== 11039e60 FUN_11039e60

WWindow * __thiscall FUN_11039e60(void *this,WWindow *param_1)

{
  WWindow::operator=(this,param_1);
  thunk_FUN_11039a00((void *)((int)this + 0x3c),(FArray *)(param_1 + 0x3c));
  thunk_FUN_1102e800((void *)((int)this + 0x48),(FArray *)(param_1 + 0x48));
  FString::operator=((FString *)((int)this + 0x54),(FString *)(param_1 + 0x54));
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  return this;
}


// ==== 11039eb0 FUN_11039eb0

WPropertyPage * __thiscall FUN_11039eb0(void *this,byte param_1)

{
  WPropertyPage::~WPropertyPage(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11039ee0 FUN_11039ee0

WPropertyPage * __thiscall FUN_11039ee0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,100,*(int *)((int)this + -4),WPropertyPage::~WPropertyPage)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WPropertyPage *)((int)this + -4));
    }
    return (WPropertyPage *)((int)this + -4);
  }
  WPropertyPage::~WPropertyPage(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 1103a1f2 CORE.DLL::UObject::QueryInterface thunk -> EXTERNAL:00000080

// ==== 1103a1f8 CORE.DLL::UObject::AddRef thunk -> EXTERNAL:00000081

// ==== 1103a1fe CORE.DLL::UObject::Release thunk -> EXTERNAL:00000082

// ==== 1103a204 CORE.DLL::UObject::ProcessEvent thunk -> EXTERNAL:00000083

// ==== 1103a20a CORE.DLL::UObject::ProcessDelegate thunk -> EXTERNAL:00000084

// ==== 1103a210 CORE.DLL::UObject::ProcessState thunk -> EXTERNAL:00000085

// ==== 1103a216 CORE.DLL::UObject::ProcessRemoteFunction thunk -> EXTERNAL:00000086

// ==== 1103a21c CORE.DLL::UObject::Modify thunk -> EXTERNAL:00000087

// ==== 1103a222 CORE.DLL::UObject::PostLoad thunk -> EXTERNAL:00000088

// ==== 1103a228 CORE.DLL::UObject::IsPendingKill thunk -> EXTERNAL:00000089

// ==== 1103a22e CORE.DLL::UObject::GotoState thunk -> EXTERNAL:0000008a

// ==== 1103a234 CORE.DLL::UObject::GotoLabel thunk -> EXTERNAL:0000008b

// ==== 1103a23a CORE.DLL::UObject::InitExecution thunk -> EXTERNAL:0000008c

// ==== 1103a240 CORE.DLL::UObject::ShutdownAfterError thunk -> EXTERNAL:0000008d

// ==== 1103a246 CORE.DLL::UObject::PostEditChange thunk -> EXTERNAL:0000008e

// ==== 1103a24c CORE.DLL::UObject::CallFunction thunk -> EXTERNAL:0000008f

// ==== 1103a252 CORE.DLL::UObject::ScriptConsoleExec thunk -> EXTERNAL:00000090

// ==== 1103a258 CORE.DLL::UObject::Register thunk -> EXTERNAL:00000091

// ==== 1103a25e CORE.DLL::UObject::LanguageChange thunk -> EXTERNAL:00000092

// ==== 1103a264 CORE.DLL::UObject::ClearL2Game thunk -> EXTERNAL:00000093

// ==== 1103a26a CORE.DLL::UObject::Rename thunk -> EXTERNAL:00000094

// ==== 1103a270 CORE.DLL::UObject::NetDirty thunk -> EXTERNAL:00000095

// ==== 1103a276 CORE.DLL::UObject::IsLoaded thunk -> EXTERNAL:00000096

// ==== 1103a2ca CORE.DLL::FOutputDevice::Flush thunk -> EXTERNAL:000000a7

// ==== 1103a2d0 CORE.DLL::FOutputDevice::Release thunk -> EXTERNAL:000000a8

// ==== 1103a660 _JumpToContinuation

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x1103a689. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}


// ==== 1103a690 _CallMemberFunction0

/* Library Function - Single Match
    void __stdcall _CallMemberFunction0(void *,void *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _CallMemberFunction0(void *param_1,void *param_2)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1103a695. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)();
  return;
}


// ==== 1103a697 FID_conflict:_CallMemberFunction1

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1103a69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== 1103a69e FID_conflict:_CallMemberFunction1

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x1103a6a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== 1103a6a5 _UnwindNestedFrames

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2005 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x1103a6ce,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}


// ==== 1103a6f7 FID_conflict:___CxxFrameHandler3

/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __cdecl
FID_conflict____CxxFrameHandler3
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4)

{
  _s_FuncInfo *in_EAX;
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler
                    (param_1,param_2,param_3,param_4,in_EAX,0,(EHRegistrationNode *)0x0,'\0');
  return uVar1;
}


// ==== 1103a72d FID_conflict:___CxxFrameHandler3

/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __cdecl
FID_conflict____CxxFrameHandler3
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4)

{
  _s_FuncInfo *in_EAX;
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler
                    (param_1,param_2,param_3,param_4,in_EAX,0,(EHRegistrationNode *)0x0,'\0');
  return uVar1;
}


// ==== 1103a763 FID_conflict:___CxxFrameHandler3

/* Library Function - Multiple Matches With Different Base Names
    ___CxxFrameHandler
    ___CxxFrameHandler2
    ___CxxFrameHandler3
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __cdecl
FID_conflict____CxxFrameHandler3
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4)

{
  _s_FuncInfo *in_EAX;
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler
                    (param_1,param_2,param_3,param_4,in_EAX,0,(EHRegistrationNode *)0x0,'\0');
  return uVar1;
}


// ==== 1103a7e3 _CallSETranslator

/* Library Function - Single Match
    int __cdecl _CallSETranslator(struct EHExceptionRecord *,struct EHRegistrationNode *,void *,void
   *,struct _s_FuncInfo const *,int,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl
_CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4
                 ,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7)

{
  _ptiddata p_Var1;
  int local_3c;
  EHExceptionRecord *local_38;
  void *local_34;
  code *local_30;
  undefined4 *local_2c;
  code *local_28;
  uint local_24;
  _s_FuncInfo *local_20;
  EHRegistrationNode *local_1c;
  int local_18;
  EHRegistrationNode *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffc0;
  if (param_1 == (EHExceptionRecord *)0x123) {
    *(undefined4 *)param_2 = 0x1103a88c;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_1109acf8 ^ (uint)&local_2c;
    local_20 = param_5;
    local_1c = param_2;
    local_18 = param_6;
    local_14 = param_7;
    local_8 = 0;
    local_2c = ExceptionList;
    ExceptionList = &local_2c;
    local_38 = param_1;
    local_34 = param_3;
    p_Var1 = __getptd();
    local_30 = p_Var1->_translator;
    (*local_30)(*(undefined4 *)param_1,&local_38);
    local_3c = 0;
    if (local_8 != 0) {
      *local_2c = *(undefined4 *)ExceptionList;
    }
    ExceptionList = local_2c;
  }
  return local_3c;
}


// ==== 1103a8b8 TranslatorGuardHandler

/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(struct EHExceptionRecord *,struct
   TranslatorGuardRN *,void *,void *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

_EXCEPTION_DISPOSITION __cdecl
TranslatorGuardHandler
          (EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  code *local_8;
  
  __security_check_cookie(*(uint *)(param_2 + 8) ^ (uint)param_2);
  if ((*(uint *)(param_1 + 4) & 0x66) != 0) {
    *(undefined4 *)(param_2 + 0x24) = 1;
    return 1;
  }
  ___InternalCxxFrameHandler
            (param_1,*(EHRegistrationNode **)(param_2 + 0x10),param_3,(void *)0x0,
             *(_s_FuncInfo **)(param_2 + 0xc),*(int *)(param_2 + 0x14),
             *(EHRegistrationNode **)(param_2 + 0x18),'\x01');
  if (*(int *)(param_2 + 0x24) == 0) {
    _UnwindNestedFrames((EHRegistrationNode *)param_2,param_1);
  }
  _CallSETranslator((EHExceptionRecord *)0x123,(EHRegistrationNode *)&local_8,(void *)0x0,
                    (void *)0x0,(_s_FuncInfo *)0x0,0,(EHRegistrationNode *)0x0);
                    /* WARNING: Could not recover jumptable at 0x1103a94d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}


// ==== 1103a955 _GetRangeOfTrysToCheck

/* Library Function - Single Match
    struct _s_TryBlockMapEntry const * __cdecl _GetRangeOfTrysToCheck(struct _s_FuncInfo const
   *,int,int,unsigned int *,unsigned int *)
   
   Library: Visual Studio 2005 Release */

_s_TryBlockMapEntry * __cdecl
_GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  TryBlockMapEntry *pTVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  pTVar1 = param_1->pTryBlockMap;
  uVar5 = param_1->nTryBlocks;
  uVar2 = uVar5;
  uVar3 = uVar5;
  while (uVar4 = uVar2, -1 < param_2) {
    if (uVar5 == 0xffffffff) {
      _inconsistency();
    }
    uVar5 = uVar5 - 1;
    if (((pTVar1[uVar5].tryHigh < param_3) && (param_3 <= pTVar1[uVar5].catchHigh)) ||
       (uVar2 = uVar4, uVar5 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar2 = uVar5;
      uVar3 = uVar4;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((param_1->nTryBlocks < uVar3) || (uVar3 < uVar5)) {
    _inconsistency();
  }
  return pTVar1 + uVar5;
}


// ==== 1103a9c8 __CreateFrameInfo

/* Library Function - Single Match
    __CreateFrameInfo
   
   Library: Visual Studio 2005 Release */

undefined4 * __cdecl __CreateFrameInfo(undefined4 *param_1,undefined4 param_2)

{
  _ptiddata p_Var1;
  
  *param_1 = param_2;
  p_Var1 = __getptd();
  param_1[1] = p_Var1->_pFrameInfoChain;
  p_Var1 = __getptd();
  p_Var1->_pFrameInfoChain = param_1;
  return param_1;
}


// ==== 1103a9f0 __IsExceptionObjectToBeDestroyed

/* Library Function - Single Match
    __IsExceptionObjectToBeDestroyed
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __IsExceptionObjectToBeDestroyed(int param_1)

{
  _ptiddata p_Var1;
  int *piVar2;
  
  p_Var1 = __getptd();
  piVar2 = p_Var1->_pFrameInfoChain;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    if (*piVar2 == param_1) break;
    piVar2 = (int *)piVar2[1];
  }
  return 0;
}


// ==== 1103aa11 __FindAndUnlinkFrame

/* Library Function - Single Match
    __FindAndUnlinkFrame
   
   Library: Visual Studio 2005 Release */

void __cdecl __FindAndUnlinkFrame(void *param_1)

{
  void *pvVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  
  p_Var2 = __getptd();
  if (param_1 == p_Var2->_pFrameInfoChain) {
    p_Var2 = __getptd();
    p_Var2->_pFrameInfoChain = *(void **)((int)param_1 + 4);
    return;
  }
  p_Var2 = __getptd();
  pvVar1 = p_Var2->_pFrameInfoChain;
  do {
    pvVar3 = pvVar1;
    if (*(int *)((int)pvVar3 + 4) == 0) {
      _inconsistency();
      return;
    }
    pvVar1 = *(void **)((int)pvVar3 + 4);
  } while (param_1 != *(void **)((int)pvVar3 + 4));
  *(undefined4 *)((int)pvVar3 + 4) = *(undefined4 *)((int)param_1 + 4);
  return;
}


// ==== 1103aa5d _CallCatchBlock2

/* Library Function - Single Match
    void * __cdecl _CallCatchBlock2(struct EHRegistrationNode *,struct _s_FuncInfo const *,void
   *,int,unsigned long)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void * __cdecl
_CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,
                ulong param_5)

{
  void *pvVar1;
  void *local_1c;
  undefined1 *local_18;
  uint local_14;
  _s_FuncInfo *local_10;
  EHRegistrationNode *local_c;
  int local_8;
  
  local_14 = DAT_1109acf8 ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &LAB_1103a7b3;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}


// ==== 1103aabb __CxxThrowException@8

/* Library Function - Single Match
    __CxxThrowException@8
   
   Library: Visual Studio 2005 Release */

void __CxxThrowException_8(undefined4 param_1,byte *param_2)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD *pDVar3;
  DWORD local_24 [4];
  DWORD local_14;
  ULONG_PTR local_10;
  undefined4 local_c;
  byte *local_8;
  
  pDVar2 = &DAT_110741d4;
  pDVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar3 = *pDVar2;
    pDVar2 = pDVar2 + 1;
    pDVar3 = pDVar3 + 1;
  }
  local_c = param_1;
  local_8 = param_2;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 8) != 0)) {
    local_10 = 0x1994000;
  }
  RaiseException(local_24[0],local_24[1],local_14,&local_10);
  return;
}


// ==== 1103ab14 type_info::~type_info

/* Library Function - Single Match
    public: virtual __thiscall type_info::~type_info(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall type_info::~type_info(type_info *this)

{
  *(undefined ***)this = vftable;
  _Type_info_dtor(this);
  return;
}


// ==== 1103ab22 type_info::`scalar_deleting_destructor'

/* Library Function - Single Match
    public: virtual void * __thiscall type_info::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall type_info::_scalar_deleting_destructor_(type_info *this,uint param_1)

{
  ~type_info(this);
  if ((param_1 & 1) != 0) {
    thunk_FUN_11004bc0(this);
  }
  return this;
}


// ==== 1103ab55 type_info::operator==

/* Library Function - Single Match
    public: bool __thiscall type_info::operator==(class type_info const &)const 
   
   Library: Visual Studio 2005 Release */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (bool)('\x01' - (iVar1 != 0));
}


// ==== 1103abc0 _memset

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  size_t sVar4;
  uint *puVar5;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_1109fe90 != 0)) {
    pauVar2 = __VEC_memzero(_Dst,_Val,_Size);
    return pauVar2;
  }
  puVar5 = _Dst;
  if (3 < _Size) {
    uVar3 = -(int)_Dst & 3;
    sVar4 = _Size;
    if (uVar3 != 0) {
      sVar4 = _Size - uVar3;
      do {
        *(char *)puVar5 = (char)_Val;
        puVar5 = (uint *)((int)puVar5 + 1);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar4 & 3;
    uVar3 = sVar4 >> 2;
    if (uVar3 != 0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar5 = (char)uVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}


// ==== 1103ac40 __alloca_probe_16

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_16
   
   Library: Visual Studio 2005 Release */

uint __alloca_probe_16(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}


// ==== 1103ac56 __alloca_probe_8

/* WARNING: This is an inlined function */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __alloca_probe_8
   
   Library: Visual Studio */

uint __alloca_probe_8(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 7;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}


// ==== 1103ac70 _strncpy

/* Library Function - Single Match
    _strncpy
   
   Library: Visual Studio */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x1103acbc;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1103ad03;
        goto LAB_1103ad79;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x1103ad75:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_1103ad79:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1103ad03;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x1103ad75;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x1103ad75;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x1103ad75;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1103acbc:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_1103ad03:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}


// ==== 1103ada0 _strncat

/* Library Function - Single Match
    _strncat
   
   Library: Visual Studio */

char * __cdecl _strncat(char *_Dest,char *_Source,size_t _Count)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = (uint *)_Dest;
  if (_Count == 0) {
    return _Dest;
  }
  do {
    if (((uint)puVar5 & 3) == 0) goto LAB_1103adcc;
    uVar4 = *puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1103adfd;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar6 = (uint *)((int)puVar6 + 2);
      goto LAB_1103ae0f;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1103adcc:
    do {
      puVar6 = puVar5;
      puVar5 = puVar6 + 1;
    } while (((*puVar6 ^ 0xffffffff ^ *puVar6 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar6;
    if ((char)uVar4 == '\0') goto LAB_1103ae0f;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar6 = (uint *)((int)puVar6 + 1);
      goto LAB_1103ae0f;
    }
  }
LAB_1103adfd:
  puVar6 = (uint *)((int)puVar5 + -1);
LAB_1103ae0f:
  if (((uint)_Source & 3) == 0) {
    uVar3 = _Count >> 2;
  }
  else {
    do {
      bVar1 = (byte)*(uint *)_Source;
      uVar4 = (uint)bVar1;
      _Source = (char *)((int)_Source + 1);
      if (bVar1 == 0) goto LAB_1103ae6a;
      *(byte *)puVar6 = bVar1;
      puVar6 = (uint *)((int)puVar6 + 1);
      _Count = _Count - 1;
      if (_Count == 0) goto LAB_1103ae60;
    } while (((uint)_Source & 3) != 0);
    uVar3 = _Count >> 2;
  }
  do {
    if (uVar3 == 0) {
      for (uVar4 = _Count & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        uVar3 = *(uint *)_Source;
        _Source = (char *)((int)_Source + 1);
        *(byte *)puVar6 = (byte)uVar3;
        puVar6 = (uint *)((int)puVar6 + 1);
        if ((byte)uVar3 == 0) {
          return _Dest;
        }
      }
LAB_1103ae60:
      *(byte *)puVar6 = 0;
      return _Dest;
    }
    uVar2 = *(uint *)_Source;
    uVar4 = *(uint *)_Source;
    _Source = (char *)((int)_Source + 4);
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar4 == '\0') {
LAB_1103ae6a:
        *(byte *)puVar6 = (byte)uVar4;
        return _Dest;
      }
      if ((char)(uVar4 >> 8) == '\0') {
        *(short *)puVar6 = (short)uVar4;
        return _Dest;
      }
      if ((uVar4 & 0xff0000) == 0) {
        *(short *)puVar6 = (short)uVar4;
        *(byte *)((int)puVar6 + 2) = 0;
        return _Dest;
      }
      if ((uVar4 & 0xff000000) == 0) {
        *puVar6 = uVar4;
        return _Dest;
      }
    }
    *puVar6 = uVar4;
    puVar6 = puVar6 + 1;
    uVar3 = uVar3 - 1;
  } while( true );
}


// ==== 1103aee7 __ArrayUnwind

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffc8;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffc8);
  }
  return;
}


// ==== 1103af45 `eh_vector_destructor_iterator'

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *))
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffd0;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffd0);
  }
  FUN_1103af90();
  return;
}


// ==== 1103af90 FUN_1103af90

void FUN_1103af90(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + 0x10),
                  *(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}


// ==== 1103afb0 __alldiv

/* Library Function - Single Match
    __alldiv
   
   Library: Visual Studio */

undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar7 = param_1;
  uVar3 = param_3;
  uVar5 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar6 = uVar5 >> 1;
      uVar7 = (uint)(CONCAT14((uVar5 & 1) != 0,uVar7) >> 1);
      uVar5 = uVar6;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar6,uVar7) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar7 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}


// ==== 1103b060 __allmul

/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio 2005 Release */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


// ==== 1103b094 __purecall

/* Library Function - Single Match
    __purecall
   
   Library: Visual Studio 2005 Release */

void __purecall(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_1103ccd2(DAT_1109f53c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  FUN_1103db87(0x19);
  __set_abort_behavior(0,1);
                    /* WARNING: Subroutine does not return */
  _abort();
}


// ==== 1103b0ee __cfltcvt_init

/* Library Function - Single Match
    __cfltcvt_init
   
   Library: Visual Studio 2005 Release */

void __cfltcvt_init(void)

{
  PTR_LAB_1109add0 = __cfltcvt;
  PTR_LAB_1109add4 = &LAB_1103e105;
  PTR_LAB_1109add8 = &LAB_1103e0c3;
  PTR_LAB_1109addc = &LAB_1103e0f7;
  PTR_LAB_1109ade0 = &LAB_1103e06d;
  PTR_LAB_1109ade4 = __cfltcvt;
  PTR_LAB_1109ade8 = __cfltcvt_l;
  PTR_LAB_1109adec = __fassign_l;
  PTR_LAB_1109adf0 = __cropzeros_l;
  PTR_LAB_1109adf4 = __forcdecpt_l;
  return;
}


// ==== 1103b15e __fpmath

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2005 Release */

void __cdecl __fpmath(int param_1)

{
  __cfltcvt_init();
  _DAT_1109f1e8 = __ms_p5_mp_test_fdiv();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}


// ==== 1103b180 FUN_1103b180

ulonglong __fastcall FUN_1103b180(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  uint local_20;
  float fStack_1c;
  
  if (DAT_1109fe90 == 0) {
    uVar1 = (ulonglong)ROUND(in_ST0);
    local_20 = (uint)uVar1;
    fStack_1c = (float)(uVar1 >> 0x20);
    fVar3 = (float)in_ST0;
    if ((local_20 != 0) || (fVar3 = fStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
      if ((int)fVar3 < 0) {
        uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
      }
      else {
        uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
        uVar1 = CONCAT44((int)fStack_1c - (uint)(local_20 < uVar2),local_20 - uVar2);
      }
    }
    return uVar1;
  }
  return CONCAT44(param_2,(int)in_ST0);
}


// ==== 1103b230 __alloca_probe

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Library: Visual Studio */

void __alloca_probe(void)

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&stack0x00000000 - (int)in_EAX & ~-(uint)(&stack0x00000000 < in_EAX))
  ;
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = unaff_retaddr;
  return;
}


// ==== 1103b25b FUN_1103b25b

int __cdecl FUN_1103b25b(int param_1)

{
  uint uVar1;
  int *_Memory;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  int iVar6;
  
  _Memory = (int *)FUN_1103ccd2(DAT_1109fe74);
  piVar2 = (int *)FUN_1103ccd2(DAT_1109fe70);
  if (_Memory <= piVar2) {
    uVar1 = ((int)piVar2 - (int)_Memory) + 4;
    if (3 < uVar1) {
      sVar3 = __msize(_Memory);
      if (sVar3 < uVar1) {
        sVar4 = 0x800;
        if (sVar3 < 0x800) {
          sVar4 = sVar3;
        }
        if ((sVar4 + sVar3 < sVar3) ||
           (pvVar5 = __realloc_crt(_Memory,sVar4 + sVar3), pvVar5 == (void *)0x0)) {
          if (sVar3 + 0x10 < sVar3) {
            return 0;
          }
          pvVar5 = __realloc_crt(_Memory,sVar3 + 0x10);
          if (pvVar5 == (void *)0x0) {
            return 0;
          }
        }
        piVar2 = (int *)((int)pvVar5 + ((int)piVar2 - (int)_Memory >> 2) * 4);
        DAT_1109fe74 = FUN_1103cc5b((int)pvVar5);
      }
      iVar6 = FUN_1103cc5b(param_1);
      *piVar2 = iVar6;
      DAT_1109fe70 = FUN_1103cc5b((int)(piVar2 + 1));
      return param_1;
    }
  }
  return 0;
}


// ==== 1103b343 __onexit

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2005 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_1103eda0();
  p_Var1 = (_onexit_t)FUN_1103b25b((int)_Func);
  FUN_1103b379();
  return p_Var1;
}


// ==== 1103b379 FUN_1103b379

void FUN_1103b379(void)

{
  FUN_1103eda9();
  return;
}


// ==== 1103b37f _atexit

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2005 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}


// ==== 1103b3a0 _memcpy

/* Library Function - Single Match
    _memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar1 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *puVar1;
          puVar1 = puVar1 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_1103b583_caseD_2;
        case 3:
          goto switchD_1103b583_caseD_3;
        }
        goto switchD_1103b583_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_1103b583_caseD_0;
      case 1:
        goto switchD_1103b583_caseD_1;
      case 2:
        goto switchD_1103b583_caseD_2;
      case 3:
        goto switchD_1103b583_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          puVar1 = (undefined4 *)((int)puVar1 + -1);
          uVar2 = uVar2 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_1103b583_caseD_2;
            case 3:
              goto switchD_1103b583_caseD_3;
            }
            goto switchD_1103b583_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          puVar1 = (undefined4 *)((int)puVar1 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_1103b583_caseD_2;
            case 3:
              goto switchD_1103b583_caseD_3;
            }
            goto switchD_1103b583_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
          puVar1 = (undefined4 *)((int)puVar1 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_1103b583_caseD_2;
            case 3:
              goto switchD_1103b583_caseD_3;
            }
            goto switchD_1103b583_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar4[7 - uVar2] = puVar1[7 - uVar2];
    case 6:
      puVar4[6 - uVar2] = puVar1[6 - uVar2];
    case 5:
      puVar4[5 - uVar2] = puVar1[5 - uVar2];
    case 4:
      puVar4[4 - uVar2] = puVar1[4 - uVar2];
    case 3:
      puVar4[3 - uVar2] = puVar1[3 - uVar2];
    case 2:
      puVar4[2 - uVar2] = puVar1[2 - uVar2];
    case 1:
      puVar4[1 - uVar2] = puVar1[1 - uVar2];
      puVar1 = puVar1 + -uVar2;
      puVar4 = puVar4 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_1103b583_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_1103b583_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_1103b583_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_1103b583_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_1109fe90 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    puVar1 = __VEC_memcpy(_Dst,_Src,_Size);
    return puVar1;
  }
  puVar1 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar1 = puVar1 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_1103b3fc_caseD_2;
      case 3:
        goto switchD_1103b3fc_caseD_3;
      }
      goto switchD_1103b3fc_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_1103b3fc_caseD_0;
    case 1:
      goto switchD_1103b3fc_caseD_1;
    case 2:
      goto switchD_1103b3fc_caseD_2;
    case 3:
      goto switchD_1103b3fc_caseD_3;
    default:
      uVar2 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar1 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_1103b3fc_caseD_2;
          case 3:
            goto switchD_1103b3fc_caseD_3;
          }
          goto switchD_1103b3fc_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar1 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_1103b3fc_caseD_2;
          case 3:
            goto switchD_1103b3fc_caseD_3;
          }
          goto switchD_1103b3fc_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar1 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_1103b3fc_caseD_2;
          case 3:
            goto switchD_1103b3fc_caseD_3;
          }
          goto switchD_1103b3fc_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar1[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar1[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar1[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar1[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar1[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar1[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar1[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar1 = puVar1 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_1103b3fc_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_1103b3fc_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_1103b3fc_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_1103b3fc_caseD_0:
  return _Dst;
}


// ==== 1103b737 __CRT_INIT@12

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __CRT_INIT@12
   
   Library: Visual Studio 2005 Release */

undefined4 __CRT_INIT_12(undefined4 param_1,int param_2,int param_3)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  LPOSVERSIONINFOA lpVersionInformation;
  BOOL BVar5;
  int iVar6;
  DWORD *_Memory;
  code *pcVar7;
  uint uVar8;
  DWORD DVar9;
  undefined4 uVar10;
  SIZE_T dwBytes;
  DWORD *pDVar11;
  
  if (param_2 == 1) {
    dwBytes = 0x94;
    DVar9 = 0;
    pvVar4 = GetProcessHeap();
    lpVersionInformation = HeapAlloc(pvVar4,DVar9,dwBytes);
    if (lpVersionInformation != (LPOSVERSIONINFOA)0x0) {
      lpVersionInformation->dwOSVersionInfoSize = 0x94;
      BVar5 = GetVersionExA(lpVersionInformation);
      DVar9 = 0;
      if (BVar5 == 0) {
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,DVar9,lpVersionInformation);
      }
      else {
        DVar1 = lpVersionInformation->dwPlatformId;
        DVar2 = lpVersionInformation->dwMajorVersion;
        DVar3 = lpVersionInformation->dwMinorVersion;
        uVar8 = lpVersionInformation->dwBuildNumber & 0x7fff;
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,DVar9,lpVersionInformation);
        if (DVar1 != 2) {
          uVar8 = uVar8 | 0x8000;
        }
        _DAT_1109f550 = DVar2 * 0x100 + DVar3;
        DAT_1109f548 = DVar1;
        _DAT_1109f54c = uVar8;
        DAT_1109f554 = DVar2;
        _DAT_1109f558 = DVar3;
        iVar6 = __heap_init();
        if (iVar6 != 0) {
          iVar6 = __mtinit();
          if (iVar6 != 0) {
            __RTC_Initialize();
            DAT_1109fe94 = GetCommandLineA();
            DAT_1109f1f0 = ___crtGetEnvironmentStringsA();
            iVar6 = __ioinit();
            if (-1 < iVar6) {
              iVar6 = __setargv();
              if (((-1 < iVar6) && (iVar6 = __setenvp(), -1 < iVar6)) &&
                 (iVar6 = __cinit(0), iVar6 == 0)) {
                DAT_1109f1ec = DAT_1109f1ec + 1;
                return 1;
              }
              __ioterm();
            }
            __mtterm();
          }
          __heap_term();
        }
      }
    }
  }
  else if (param_2 == 0) {
    if (0 < DAT_1109f1ec) {
      DAT_1109f1ec = DAT_1109f1ec + -1;
      if (DAT_1109f584 == 0) {
        __cexit();
      }
      if (param_3 == 0) {
        __ioterm();
        __mtterm();
        __heap_term();
      }
      return 1;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 3) {
        return 1;
      }
      __freeptd((_ptiddata)0x0);
      return 1;
    }
    FUN_1103cd64();
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar10 = DAT_1109acf0;
      pDVar11 = _Memory;
      pcVar7 = (code *)FUN_1103ccd2(DAT_1109f208);
      iVar6 = (*pcVar7)(uVar10,pDVar11);
      if (iVar6 != 0) {
        FUN_1103cdec((int)_Memory,0);
        DVar9 = GetCurrentThreadId();
        _Memory[1] = 0xffffffff;
        *_Memory = DVar9;
        return 1;
      }
      _free(_Memory);
    }
  }
  return 0;
}


// ==== 1103b910 ___DllMainCRTStartup

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DllMainCRTStartup
   
   Library: Visual Studio 2005 Release */

int __fastcall ___DllMainCRTStartup(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_20;
  
  local_20 = 1;
  if ((param_2 == 0) && (DAT_1109f1ec == 0)) {
LAB_1103b9fe:
    local_20 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (DAT_11074208 != (code *)0x0) {
        local_20 = (*DAT_11074208)(param_3,param_2,param_1);
      }
      if ((local_20 == 0) || (iVar1 = __CRT_INIT_12(param_3,param_2,param_1), iVar1 == 0))
      goto LAB_1103b9fe;
    }
    local_20 = _DllMain_12(param_3);
    if ((param_2 == 1) && (local_20 == 0)) {
      _DllMain_12(param_3);
      __CRT_INIT_12(param_3,0,param_1);
      if (DAT_11074208 != (code *)0x0) {
        (*DAT_11074208)(param_3,0,param_1);
      }
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = __CRT_INIT_12(param_3,param_2,param_1);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      if ((local_20 != 0) && (DAT_11074208 != (code *)0x0)) {
        local_20 = (*DAT_11074208)(param_3,param_2,param_1);
      }
    }
  }
  return local_20;
}


// ==== 1103ba06 entry

void entry(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 == 1) {
    ___security_init_cookie();
  }
  ___DllMainCRTStartup(param_3,param_2,param_1);
  return;
}


// ==== 1103ba4b FUN_1103ba4b

exception * __thiscall FUN_1103ba4b(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_exception::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    thunk_FUN_11004bc0(this);
  }
  return this;
}


// ==== 1103ba6d ___TypeMatch

/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_1103bac3:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_1103baa1:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_1103bac3;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_1103baa1;
    }
    uVar2 = 0;
  }
  return uVar2;
}


// ==== 1103bb0d ___FrameUnwindToState

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___FrameUnwindToState
   
   Library: Visual Studio 2005 Release */

void __cdecl ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4)

{
  _ptiddata p_Var1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_3 + 4) < 0x81) {
    iVar4 = (int)*(char *)(param_1 + 8);
  }
  else {
    iVar4 = *(int *)(param_1 + 8);
  }
  p_Var1 = __getptd();
  p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + 1;
  while (iVar4 != param_4) {
    if ((iVar4 < 0) || (*(int *)(param_3 + 4) <= iVar4)) {
      _inconsistency();
    }
    iVar2 = iVar4 * 8;
    piVar3 = (int *)(*(int *)(param_3 + 8) + iVar2);
    iVar4 = *piVar3;
    if (piVar3[1] != 0) {
      *(int *)(param_1 + 8) = iVar4;
      __CallSettingFrame_12(*(undefined4 *)(*(int *)(param_3 + 8) + 4 + iVar2),param_1,0x103);
    }
  }
  FUN_1103bbd3();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}


// ==== 1103bbd3 FUN_1103bbd3

void FUN_1103bbd3(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < p_Var1->_ProcessingThrow) {
    p_Var1 = __getptd();
    p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
  }
  return;
}


// ==== 1103bc33 ___DestructExceptionObject

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___DestructExceptionObject
   
   Library: Visual Studio 2005 Release */

void __cdecl ___DestructExceptionObject(int *param_1)

{
  void *pvVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[7] != 0)) &&
     (pvVar1 = *(void **)(param_1[7] + 4), pvVar1 != (void *)0x0)) {
    _CallMemberFunction0((void *)param_1[6],pvVar1);
  }
  return;
}


// ==== 1103bc87 ___AdjustPointer

/* Library Function - Single Match
    ___AdjustPointer
   
   Library: Visual Studio 2005 Release */

int __cdecl ___AdjustPointer(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 + param_1;
  if (-1 < param_2[1]) {
    iVar1 = iVar1 + *(int *)(*(int *)(param_2[1] + param_1) + param_2[2]) + param_2[1];
  }
  return iVar1;
}


// ==== 1103bfcd IsInExceptionSpec

/* Library Function - Single Match
    unsigned char __cdecl IsInExceptionSpec(struct EHExceptionRecord *,struct _s_ESTypeList const *)
   
   Library: Visual Studio 2005 Release */

uchar __cdecl IsInExceptionSpec(EHExceptionRecord *param_1,_s_ESTypeList *param_2)

{
  uchar extraout_AL;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EDI;
  int local_c;
  uchar local_5;
  
  if (unaff_EDI == (int *)0x0) {
    _inconsistency();
    terminate();
    return extraout_AL;
  }
  local_c = 0;
  local_5 = '\0';
  if (0 < *unaff_EDI) {
    do {
      piVar3 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
      iVar2 = *piVar3;
      if (0 < iVar2) {
        do {
          piVar3 = piVar3 + 1;
          iVar1 = ___TypeMatch((byte *)(unaff_EDI[1] + local_c * 0x10),(byte *)*piVar3,
                               *(uint **)(param_1 + 0x1c));
          if (iVar1 != 0) {
            local_5 = '\x01';
            break;
          }
          iVar2 = iVar2 + -1;
        } while (0 < iVar2);
      }
      local_c = local_c + 1;
    } while (local_c < *unaff_EDI);
  }
  return local_5;
}


// ==== 1103c046 CallUnexpected

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    void __cdecl CallUnexpected(struct _s_ESTypeList const *)
   
   Library: Visual Studio 2005 Release */

void __cdecl CallUnexpected(_s_ESTypeList *param_1)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  unexpected();
  terminate();
  return;
}


// ==== 1103c077 Catch_All@1103c077

void Catch_All_1103c077(void)

{
  _ptiddata p_Var1;
  int unaff_EBP;
  
  p_Var1 = __getptd();
  p_Var1->_curexcspec = *(void **)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1103c141 CallCatchBlock

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void * __cdecl CallCatchBlock(struct EHExceptionRecord *,struct EHRegistrationNode *,struct
   _CONTEXT *,struct _s_FuncInfo const *,void *,int,unsigned long)
   
   Library: Visual Studio 2005 Release */

void * __cdecl
CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
              _s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7)

{
  _ptiddata p_Var1;
  void *in_ECX;
  undefined4 local_40 [2];
  undefined4 local_38;
  void *local_34;
  void *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  void *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_11089b48;
  uStack_c = 0x1103c14d;
  local_38 = 0;
  local_28 = *(undefined4 *)(param_2 + -4);
  local_2c = __CreateFrameInfo(local_40,*(undefined4 *)(param_1 + 0x18));
  p_Var1 = __getptd();
  local_30 = p_Var1->_curexception;
  p_Var1 = __getptd();
  local_34 = p_Var1->_curcontext;
  p_Var1 = __getptd();
  p_Var1->_curexception = param_1;
  p_Var1 = __getptd();
  p_Var1->_curcontext = param_3;
  local_8 = (undefined *)0x1;
  local_20 = _CallCatchBlock2(param_2,param_4,in_ECX,(int)param_5,param_6);
  local_8 = (undefined *)0xfffffffe;
  FUN_1103c267();
  return local_20;
}


// ==== 1103c267 FUN_1103c267

void FUN_1103c267(void)

{
  _ptiddata p_Var1;
  int iVar2;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + -4) = *(undefined4 *)(unaff_EBP + -0x24);
  __FindAndUnlinkFrame(*(void **)(unaff_EBP + -0x28));
  p_Var1 = __getptd();
  p_Var1->_curexception = *(void **)(unaff_EBP + -0x2c);
  p_Var1 = __getptd();
  p_Var1->_curcontext = *(void **)(unaff_EBP + -0x30);
  if ((((*unaff_ESI == -0x1f928c9d) && (unaff_ESI[4] == 3)) &&
      ((iVar2 = unaff_ESI[5], iVar2 == 0x19930520 ||
       ((iVar2 == 0x19930521 || (iVar2 == 0x19930522)))))) &&
     ((*(int *)(unaff_EBP + -0x34) == 0 && (*(int *)(unaff_EBP + -0x1c) != 0)))) {
    iVar2 = __IsExceptionObjectToBeDestroyed(unaff_ESI[6]);
    if (iVar2 != 0) {
      ___DestructExceptionObject(unaff_ESI);
    }
  }
  return;
}


// ==== 1103c2dd ___BuildCatchObjectHelper

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObjectHelper
   
   Library: Visual Studio 2005 Release */

char __cdecl ___BuildCatchObjectHelper(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  void *pvVar3;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  size_t _Size;
  
  if (((param_3[1] == 0) || (*(char *)(param_3[1] + 8) == '\0')) ||
     ((param_3[2] == 0 && ((*param_3 & 0x80000000) == 0)))) {
    return '\0';
  }
  if (-1 < (int)*param_3) {
    param_2 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  if ((*param_3 & 8) == 0) {
    pvVar3 = *(void **)(param_1 + 0x18);
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        iVar2 = _ValidateRead(pvVar3,1);
        if ((iVar2 != 0) &&
           (bVar1 = FID_conflict__ValidateExecute((int)param_2),
           CONCAT31(extraout_var_01,bVar1) != 0)) {
          _Size = *(size_t *)(param_4 + 0x14);
          pvVar3 = (void *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          _memmove(param_2,pvVar3,_Size);
          return '\0';
        }
      }
      else {
        iVar2 = _ValidateRead(pvVar3,1);
        if (((iVar2 != 0) &&
            (bVar1 = FID_conflict__ValidateExecute((int)param_2),
            CONCAT31(extraout_var_02,bVar1) != 0)) &&
           (bVar1 = FID_conflict__ValidateExecute(*(int *)(param_4 + 0x18)),
           CONCAT31(extraout_var_03,bVar1) != 0)) {
          return ((*param_4 & 4) != 0) + '\x01';
        }
      }
    }
    else {
      iVar2 = _ValidateRead(pvVar3,1);
      if ((iVar2 != 0) &&
         (bVar1 = FID_conflict__ValidateExecute((int)param_2), CONCAT31(extraout_var_00,bVar1) != 0)
         ) {
        _memmove(param_2,*(void **)(param_1 + 0x18),*(size_t *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          return '\0';
        }
        iVar2 = *param_2;
        if (iVar2 == 0) {
          return '\0';
        }
        goto LAB_1103c362;
      }
    }
  }
  else {
    iVar2 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar2 != 0) &&
       (bVar1 = FID_conflict__ValidateExecute((int)param_2), CONCAT31(extraout_var,bVar1) != 0)) {
      iVar2 = *(int *)(param_1 + 0x18);
      *param_2 = iVar2;
LAB_1103c362:
      iVar2 = ___AdjustPointer(iVar2,(int *)(param_4 + 8));
      *param_2 = iVar2;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}


// ==== 1103c45c ___BuildCatchObject

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObject
   
   Library: Visual Studio 2005 Release */

void __cdecl ___BuildCatchObject(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  char cVar1;
  undefined3 extraout_var;
  int *piVar2;
  
  piVar2 = param_2;
  if ((*param_3 & 0x80000000) == 0) {
    piVar2 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  cVar1 = ___BuildCatchObjectHelper(param_1,param_2,param_3,param_4);
  if (CONCAT31(extraout_var,cVar1) == 1) {
    ___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    FID_conflict__CallMemberFunction1(piVar2,*(undefined **)(param_4 + 0x18));
  }
  else if (CONCAT31(extraout_var,cVar1) == 2) {
    ___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
    FID_conflict__CallMemberFunction1(piVar2,*(undefined **)(param_4 + 0x18));
  }
  return;
}


// ==== 1103c4ed ___CxxExceptionFilter

/* Library Function - Single Match
    ___CxxExceptionFilter
   
   Library: Visual Studio 2005 Release */

int __cdecl ___CxxExceptionFilter(void *param_1,void *param_2,int param_3,void *param_4)

{
  byte *pbVar1;
  _ptiddata p_Var2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint local_14;
  void *local_10;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  piVar5 = *(int **)param_1;
  if (((param_2 == (void *)0x0) || (*(char *)((int)param_2 + 8) == '\0')) &&
     ((*piVar5 == -0x1fbcb0b3 || ((param_3 & 0x40U) == 0)))) {
    if (((((*piVar5 != -0x1f928c9d) || (piVar5[4] != 3)) ||
         ((iVar6 = piVar5[5], iVar6 != 0x19930520 &&
          ((iVar6 != 0x19930521 && (iVar6 != 0x19930522)))))) || (piVar5[7] != 0)) ||
       (p_Var2 = __getptd(), p_Var2->_curexception != (void *)0x0)) {
      p_Var2 = __getptd();
      p_Var2->_ProcessingThrow = p_Var2->_ProcessingThrow + 1;
      return 1;
    }
  }
  else if (((*piVar5 == -0x1f928c9d) && (piVar5[4] == 3)) &&
          ((iVar6 = piVar5[5], iVar6 == 0x19930520 ||
           ((iVar6 == 0x19930521 || (iVar6 == 0x19930522)))))) {
    if (piVar5[7] == 0) {
      p_Var2 = __getptd();
      if (p_Var2->_curexception == (void *)0x0) {
        return 0;
      }
      p_Var2 = __getptd();
      piVar5 = p_Var2->_curexception;
    }
    piVar4 = *(int **)(piVar5[7] + 0xc);
    local_14 = param_3 | 0x80000000;
    local_10 = param_2;
    for (iVar6 = *piVar4; piVar4 = piVar4 + 1, 0 < iVar6; iVar6 = iVar6 + -1) {
      pbVar1 = (byte *)*piVar4;
      iVar3 = ___TypeMatch((byte *)&local_14,pbVar1,(uint *)piVar5[7]);
      if (iVar3 != 0) {
        p_Var2 = __getptd();
        p_Var2->_ProcessingThrow = p_Var2->_ProcessingThrow + 1;
        if (param_4 == (void *)0x0) {
          return 1;
        }
        ___BuildCatchObject((int)piVar5,param_4,&local_14,pbVar1);
        return 1;
      }
    }
  }
  return 0;
}


// ==== 1103c630 CatchIt

/* Library Function - Single Match
    void __cdecl CatchIt(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,struct _s_HandlerType const *,struct _s_CatchableType const
   *,struct _s_TryBlockMapEntry const *,int,struct EHRegistrationNode *,unsigned char)
   
   Library: Visual Studio 2005 Release */

void __cdecl
CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
       _s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
       _s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11)

{
  void *pvVar1;
  uint *unaff_EBX;
  EHRegistrationNode *unaff_ESI;
  int *unaff_EDI;
  EHRegistrationNode *pEVar2;
  
  if (param_5 != (_s_FuncInfo *)0x0) {
    ___BuildCatchObject((int)param_1,(int *)unaff_ESI,unaff_EBX,(byte *)param_5);
  }
  if (param_7 == (_s_CatchableType *)0x0) {
    param_7 = (_s_CatchableType *)unaff_ESI;
  }
  _UnwindNestedFrames((EHRegistrationNode *)param_7,param_1);
  pEVar2 = unaff_ESI;
  ___FrameUnwindToState((int)unaff_ESI,param_3,(int)param_4,*unaff_EDI);
  *(int *)(unaff_ESI + 8) = unaff_EDI[1] + 1;
  pvVar1 = CallCatchBlock(param_1,unaff_ESI,(_CONTEXT *)param_2,param_4,param_6,0x100,(ulong)pEVar2)
  ;
  if (pvVar1 != (void *)0x0) {
    _JumpToContinuation(pvVar1,unaff_ESI);
  }
  return;
}


// ==== 1103c69c FindHandlerForForeignException

/* Library Function - Single Match
    void __cdecl FindHandlerForForeignException(struct EHExceptionRecord *,struct EHRegistrationNode
   *,struct _CONTEXT *,void *,struct _s_FuncInfo const *,int,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2005 Release */

void __cdecl
FindHandlerForForeignException
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  TypeDescriptor *pTVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  int iVar4;
  _s_TryBlockMapEntry *p_Var5;
  _s_TryBlockMapEntry *unaff_EBX;
  EHRegistrationNode *unaff_ESI;
  int unaff_EDI;
  uint extraout_var;
  uint uVar6;
  uint local_8;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    p_Var2 = __getptd();
    uVar6 = extraout_var;
    if (p_Var2->_translator != (void *)0x0) {
      p_Var2 = __getptd();
      pvVar3 = (void *)__encoded_null();
      if (((p_Var2->_translator != pvVar3) && (*(int *)param_1 != -0x1fbcb0b3)) &&
         (iVar4 = _CallSETranslator(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
         iVar4 != 0)) {
        return;
      }
    }
    if (param_5->nTryBlocks == 0) {
      _inconsistency();
    }
    p_Var5 = _GetRangeOfTrysToCheck(param_5,param_7,param_6,&local_8,(uint *)&stack0xfffffff4);
    if (local_8 < uVar6) {
      do {
        if ((p_Var5->tryLow <= param_6) && (param_6 <= p_Var5->tryHigh)) {
          pTVar1 = p_Var5->pHandlerArray[p_Var5->nCatches + -1].pType;
          if (((pTVar1 == (TypeDescriptor *)0x0) || (*(char *)&pTVar1[1].pVFTable == '\0')) &&
             ((p_Var5->pHandlerArray[p_Var5->nCatches + -1].adjectives & 0x40) == 0)) {
            CatchIt(param_1,(EHRegistrationNode *)param_3,param_4,param_5,(_s_FuncInfo *)0x0,
                    (_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EBX,unaff_EDI,
                    unaff_ESI,(uchar)uVar6);
          }
        }
        local_8 = local_8 + 1;
        p_Var5 = p_Var5 + 1;
      } while (local_8 < uVar6);
    }
  }
  return;
}


// ==== 1103c78e FindHandler

/* Library Function - Single Match
    void __cdecl FindHandler(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,unsigned char,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2005 Release */

void __cdecl
FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
           _s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8)

{
  uint uVar1;
  int *piVar2;
  uchar uVar3;
  bool bVar4;
  _ptiddata p_Var5;
  int iVar6;
  _s_TryBlockMapEntry *p_Var7;
  EHRegistrationNode *unaff_EBX;
  int iVar8;
  HandlerType *pHVar9;
  _s_FuncInfo *p_Var10;
  int unaff_ESI;
  _s_FuncInfo *p_Var11;
  _s_TryBlockMapEntry *unaff_EDI;
  EHRegistrationNode *pEVar12;
  undefined4 in_stack_ffffffd0;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  HandlerType *local_10;
  int local_c;
  char local_5;
  
  p_Var10 = param_5;
  local_5 = '\0';
  if (param_5->maxState < 0x81) {
    local_c = (int)(char)param_2[8];
  }
  else {
    local_c = *(int *)(param_2 + 8);
  }
  if ((local_c < -1) || (param_5->maxState <= local_c)) {
    _inconsistency();
  }
  p_Var11 = (_s_FuncInfo *)param_1;
  if (*(int *)param_1 == -0x1f928c9d) {
    if (((*(int *)(param_1 + 0x10) == 3) &&
        (((iVar6 = *(int *)(param_1 + 0x14), iVar6 == 0x19930520 || (iVar6 == 0x19930521)) ||
         (iVar6 == 0x19930522)))) && (*(int *)(param_1 + 0x1c) == 0)) {
      p_Var5 = __getptd();
      if (p_Var5->_curexception == (void *)0x0) {
        return;
      }
      p_Var5 = __getptd();
      p_Var11 = p_Var5->_curexception;
      param_1 = (EHExceptionRecord *)p_Var11;
      p_Var5 = __getptd();
      param_3 = p_Var5->_curcontext;
      iVar6 = _ValidateRead(p_Var11,1);
      if (iVar6 == 0) {
        _inconsistency();
      }
      if ((((p_Var11->magicNumber_and_bbtFlags == 0xe06d7363) &&
           (p_Var11->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
          ((uVar1 = p_Var11->nIPMapEntries, uVar1 == 0x19930520 ||
           ((uVar1 == 0x19930521 || (uVar1 == 0x19930522)))))) &&
         (p_Var11->pESTypeList == (ESTypeList *)0x0)) {
        _inconsistency();
      }
      p_Var5 = __getptd();
      if (p_Var5->_curexcspec != (void *)0x0) {
        p_Var5 = __getptd();
        piVar2 = p_Var5->_curexcspec;
        p_Var5 = __getptd();
        iVar6 = 0;
        p_Var5->_curexcspec = (void *)0x0;
        uVar3 = IsInExceptionSpec(param_1,(_s_ESTypeList *)unaff_EDI);
        p_Var11 = (_s_FuncInfo *)param_1;
        if (uVar3 == '\0') {
          iVar8 = 0;
          if (0 < *piVar2) {
            do {
              bVar4 = type_info::operator==
                                (*(type_info **)(iVar8 + 4 + piVar2[1]),
                                 (type_info *)&std::bad_exception::RTTI_Type_Descriptor);
              if (bVar4) {
                ___DestructExceptionObject((int *)param_1);
                param_1 = (EHExceptionRecord *)s_bad_exception_1107421c;
                std::exception::exception((exception *)&stack0xffffffd0,(char **)&param_1);
                    /* WARNING: Subroutine does not return */
                __CxxThrowException_8(&stack0xffffffd0,&DAT_11089bac);
              }
              iVar6 = iVar6 + 1;
              iVar8 = iVar8 + 0x10;
            } while (iVar6 < *piVar2);
          }
          goto LAB_1103c8cc;
        }
      }
    }
    p_Var10 = param_5;
    if (((p_Var11->magicNumber_and_bbtFlags == 0xe06d7363) &&
        (p_Var11->pTryBlockMap == (TryBlockMapEntry *)0x3)) &&
       ((uVar1 = p_Var11->nIPMapEntries, uVar1 == 0x19930520 ||
        ((uVar1 == 0x19930521 || (uVar1 == 0x19930522)))))) {
      if (param_5->nTryBlocks != 0) {
        p_Var7 = _GetRangeOfTrysToCheck(param_5,param_7,local_c,&local_14,&local_20);
        for (; local_14 < local_20; local_14 = local_14 + 1) {
          if ((p_Var7->tryLow <= local_c) && (local_c <= p_Var7->tryHigh)) {
            local_10 = p_Var7->pHandlerArray;
            for (local_1c = p_Var7->nCatches; 0 < local_1c; local_1c = local_1c + -1) {
              pHVar9 = p_Var11->pESTypeList[1].pTypeArray;
              for (local_18 = pHVar9->adjectives; 0 < (int)local_18; local_18 = local_18 - 1) {
                pHVar9 = (HandlerType *)&pHVar9->pType;
                p_Var10 = *(_s_FuncInfo **)pHVar9;
                iVar6 = ___TypeMatch((byte *)local_10,(byte *)p_Var10,(uint *)p_Var11->pESTypeList);
                if (iVar6 != 0) {
                  local_5 = '\x01';
                  CatchIt((EHExceptionRecord *)p_Var11,(EHRegistrationNode *)param_3,param_4,param_5
                          ,p_Var10,(_s_HandlerType *)param_7,(_s_CatchableType *)param_8,unaff_EDI,
                          unaff_ESI,unaff_EBX,(uchar)SUB41(in_stack_ffffffd0,0));
                  p_Var11 = (_s_FuncInfo *)param_1;
                  goto LAB_1103c9f6;
                }
              }
              local_10 = local_10 + 1;
            }
          }
LAB_1103c9f6:
          p_Var7 = p_Var7 + 1;
        }
      }
      p_Var10 = param_5;
      if (param_6 != '\0') {
        ___DestructExceptionObject((int *)p_Var11);
      }
      if ((((local_5 != '\0') || ((p_Var10->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930521)) ||
          (p_Var10->pESTypeList == (ESTypeList *)0x0)) ||
         (uVar3 = IsInExceptionSpec((EHExceptionRecord *)p_Var11,(_s_ESTypeList *)unaff_EDI),
         uVar3 != '\0')) goto LAB_1103cacc;
      __getptd();
      __getptd();
      p_Var5 = __getptd();
      p_Var5->_curexception = p_Var11;
      p_Var5 = __getptd();
      p_Var5->_curcontext = param_3;
      pEVar12 = param_8;
      if (param_8 == (EHRegistrationNode *)0x0) {
        pEVar12 = param_2;
      }
      _UnwindNestedFrames(pEVar12,(EHExceptionRecord *)p_Var11);
      p_Var11 = param_5;
      ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
      CallUnexpected(p_Var11->pESTypeList);
      p_Var10 = param_5;
    }
  }
  if (p_Var10->nTryBlocks != 0) {
    if (param_6 != '\0') {
LAB_1103c8cc:
      terminate();
      return;
    }
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var11,param_2,param_3,param_4,p_Var10,local_c,param_7,param_8)
    ;
  }
LAB_1103cacc:
  p_Var5 = __getptd();
  if (p_Var5->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  return;
}


// ==== 1103cafc ___InternalCxxFrameHandler

/* Library Function - Single Match
    ___InternalCxxFrameHandler
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl
___InternalCxxFrameHandler
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8)

{
  _ptiddata p_Var1;
  undefined4 uVar2;
  
  p_Var1 = __getptd();
  if ((((*(int *)((p_Var1->_setloc_data)._cacheout + 0x27) != 0) || (*(int *)param_1 == -0x1f928c9d)
       ) || (*(int *)param_1 == -0x7fffffda)) ||
     (((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522 ||
      ((param_5->EHFlags & 1) == 0)))) {
    if (((byte)param_1[4] & 0x66) == 0) {
      if ((param_5->nTryBlocks != 0) ||
         ((0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff) &&
          (param_5->pESTypeList != (ESTypeList *)0x0)))) {
        if ((*(int *)param_1 == -0x1f928c9d) &&
           (((2 < *(uint *)(param_1 + 0x10) && (0x19930522 < *(uint *)(param_1 + 0x14))) &&
            (*(code **)(*(int *)(param_1 + 0x1c) + 8) != (code *)0x0)))) {
          uVar2 = (**(code **)(*(int *)(param_1 + 0x1c) + 8))
                            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          return uVar2;
        }
        FindHandler(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
      }
    }
    else if ((param_5->maxState != 0) && (param_6 == 0)) {
      ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
    }
  }
  return 1;
}


// ==== 1103cbe0 __security_check_cookie

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_1109acf8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}


// ==== 1103cbef FUN_1103cbef

undefined4 FUN_1103cbef(void)

{
  int iVar1;
  HMODULE pHVar2;
  int iVar3;
  uint uVar4;
  char *_Str2;
  int local_8;
  
  uVar4 = 0;
  local_8 = 0;
  __get_winmajor(&local_8);
  if (local_8 < 6) {
    pHVar2 = GetModuleHandleA((LPCSTR)0x0);
    iVar1 = pHVar2[0xf].unused;
    _Str2 = (char *)((int)&pHVar2[6].unused +
                    iVar1 + (uint)*(ushort *)((int)&pHVar2[5].unused + iVar1));
    if (*(short *)((int)&pHVar2[1].unused + iVar1 + 2) != 0) {
      do {
        iVar3 = _strcmp(s__mixcrt_1107422c,_Str2);
        if (iVar3 == 0) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        _Str2 = _Str2 + 0x28;
      } while (uVar4 < *(ushort *)((int)&pHVar2[1].unused + iVar1 + 2));
    }
  }
  return 1;
}


// ==== 1103cc5b FUN_1103cc5b

int __cdecl FUN_1103cc5b(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_1109acf4);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_1109acf0 != -1)) {
    iVar3 = DAT_1109acf0;
    pcVar2 = TlsGetValue(DAT_1109acf4);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_1103ccb5;
    }
  }
  hModule = GetModuleHandleA(s_KERNEL32_DLL_11074244);
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_1103cbef();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,s_EncodePointer_11074234);
LAB_1103ccb5:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}


// ==== 1103ccc9 __encoded_null

/* Library Function - Single Match
    __encoded_null
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __encoded_null(void)

{
  FUN_1103cc5b(0);
  return;
}


// ==== 1103ccd2 FUN_1103ccd2

int __cdecl FUN_1103ccd2(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_1109acf4);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_1109acf0 != -1)) {
    iVar3 = DAT_1109acf0;
    pcVar2 = TlsGetValue(DAT_1109acf4);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_1103cd2c;
    }
  }
  hModule = GetModuleHandleA(s_KERNEL32_DLL_11074244);
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_1103cbef();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,s_DecodePointer_11074254);
LAB_1103cd2c:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}


// ==== 1103cd64 FUN_1103cd64

LPVOID FUN_1103cd64(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_1109acf4);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_1103ccd2(DAT_1109f204);
    TlsSetValue(DAT_1109acf4,lpTlsValue);
  }
  return lpTlsValue;
}


// ==== 1103cdaf __mtterm

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_1109acf0 != -1) {
    iVar2 = DAT_1109acf0;
    pcVar1 = (code *)FUN_1103ccd2(DAT_1109f20c);
    (*pcVar1)(iVar2);
    DAT_1109acf0 = -1;
  }
  if (DAT_1109acf4 != 0xffffffff) {
    TlsFree(DAT_1109acf4);
    DAT_1109acf4 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}


// ==== 1103cdec FUN_1103cdec

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl FUN_1103cdec(int param_1,int param_2)

{
  HMODULE hModule;
  int iVar1;
  FARPROC pFVar2;
  
  hModule = GetModuleHandleA(s_KERNEL32_DLL_11074244);
  *(undefined **)(param_1 + 0x5c) = &DAT_1109ae40;
  *(undefined4 *)(param_1 + 0x14) = 1;
  if (hModule != (HMODULE)0x0) {
    iVar1 = FUN_1103cbef();
    if (iVar1 != 0) {
      pFVar2 = GetProcAddress(hModule,s_EncodePointer_11074234);
      *(FARPROC *)(param_1 + 0x1f8) = pFVar2;
      pFVar2 = GetProcAddress(hModule,s_DecodePointer_11074254);
      *(FARPROC *)(param_1 + 0x1fc) = pFVar2;
    }
  }
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined1 *)(param_1 + 200) = 0x43;
  *(undefined1 *)(param_1 + 0x14b) = 0x43;
  *(undefined **)(param_1 + 0x68) = &DAT_1109b148;
  InterlockedIncrement((LONG *)&DAT_1109b148);
  __lock(0xc);
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x6c) = PTR_DAT_1109b138;
  }
  ___addlocaleref(*(LONG **)(param_1 + 0x6c));
  FUN_1103cea2();
  return;
}


// ==== 1103cea2 FUN_1103cea2

void FUN_1103cea2(void)

{
  FUN_110406e7(0xc);
  return;
}


// ==== 1103ceab FUN_1103ceab

DWORD * FUN_1103ceab(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  DWORD *_Memory;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  DWORD *pDVar5;
  
  dwErrCode = GetLastError();
  uVar4 = DAT_1109acf0;
  pcVar1 = FUN_1103cd64();
  _Memory = (DWORD *)(*pcVar1)(uVar4);
  if (_Memory == (DWORD *)0x0) {
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar4 = DAT_1109acf0;
      pDVar5 = _Memory;
      pcVar1 = (code *)FUN_1103ccd2(DAT_1109f208);
      iVar2 = (*pcVar1)(uVar4,pDVar5);
      if (iVar2 == 0) {
        _free(_Memory);
        _Memory = (DWORD *)0x0;
      }
      else {
        FUN_1103cdec((int)_Memory,0);
        DVar3 = GetCurrentThreadId();
        _Memory[1] = 0xffffffff;
        *_Memory = DVar3;
      }
    }
  }
  SetLastError(dwErrCode);
  return _Memory;
}


// ==== 1103cf22 __getptd

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2005 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = (_ptiddata)FUN_1103ceab();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}


// ==== 1103cf3a __freefls@4

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __freefls@4
   
   Library: Visual Studio 2005 Release */

void __freefls_4(void *param_1)

{
  LONG *pLVar1;
  LONG LVar2;
  
  if (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 0x24) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x24));
    }
    if (*(void **)((int)param_1 + 0x2c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x2c));
    }
    if (*(void **)((int)param_1 + 0x34) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x34));
    }
    if (*(void **)((int)param_1 + 0x3c) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x3c));
    }
    if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x44));
    }
    if (*(void **)((int)param_1 + 0x48) != (void *)0x0) {
      _free(*(void **)((int)param_1 + 0x48));
    }
    if (*(undefined **)((int)param_1 + 0x5c) != &DAT_1109ae40) {
      _free(*(undefined **)((int)param_1 + 0x5c));
    }
    __lock(0xd);
    pLVar1 = *(LONG **)((int)param_1 + 0x68);
    if (pLVar1 != (LONG *)0x0) {
      LVar2 = InterlockedDecrement(pLVar1);
      if ((LVar2 == 0) && (pLVar1 != (LONG *)&DAT_1109b148)) {
        _free(pLVar1);
      }
    }
    FUN_1103d046();
    __lock(0xc);
    pLVar1 = *(LONG **)((int)param_1 + 0x6c);
    if (pLVar1 != (LONG *)0x0) {
      ___removelocaleref(pLVar1);
      if (((pLVar1 != (LONG *)PTR_DAT_1109b138) && (pLVar1 != (LONG *)&DAT_1109b060)) &&
         (*pLVar1 == 0)) {
        ___freetlocinfo(pLVar1);
      }
    }
    FUN_1103d052();
    _free(param_1);
  }
  return;
}


// ==== 1103d046 FUN_1103d046

void FUN_1103d046(void)

{
  FUN_110406e7(0xd);
  return;
}


// ==== 1103d052 FUN_1103d052

void FUN_1103d052(void)

{
  FUN_110406e7(0xc);
  return;
}


// ==== 1103d05b __freeptd

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 2005 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_1109acf0 != -1) {
    if ((_Ptd == (_ptiddata)0x0) && (pvVar1 = TlsGetValue(DAT_1109acf4), pvVar1 != (LPVOID)0x0)) {
      iVar3 = DAT_1109acf0;
      pcVar2 = TlsGetValue(DAT_1109acf4);
      _Ptd = (_ptiddata)(*pcVar2)(iVar3);
    }
    uVar4 = 0;
    iVar3 = DAT_1109acf0;
    pcVar2 = (code *)FUN_1103ccd2(DAT_1109f208);
    (*pcVar2)(iVar3,uVar4);
    __freefls_4(_Ptd);
  }
  if (DAT_1109acf4 != 0xffffffff) {
    TlsSetValue(DAT_1109acf4,(LPVOID)0x0);
  }
  return;
}


// ==== 1103d0d0 __mtinit

/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinit(void)

{
  HMODULE hModule;
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  DWORD *pDVar4;
  DWORD DVar5;
  code *pcVar6;
  DWORD *pDVar7;
  
  hModule = GetModuleHandleA(s_KERNEL32_DLL_11074244);
  if (hModule == (HMODULE)0x0) {
    __mtterm();
    return 0;
  }
  DAT_1109f200 = GetProcAddress(hModule,s_FlsAlloc_11074284);
  DAT_1109f204 = GetProcAddress(hModule,s_FlsGetValue_11074278);
  DAT_1109f208 = GetProcAddress(hModule,s_FlsSetValue_1107426c);
  DAT_1109f20c = GetProcAddress(hModule,s_FlsFree_11074264);
  if ((((DAT_1109f200 == (FARPROC)0x0) || (DAT_1109f204 == (FARPROC)0x0)) ||
      (DAT_1109f208 == (FARPROC)0x0)) || (DAT_1109f20c == (FARPROC)0x0)) {
    DAT_1109f204 = TlsGetValue_exref;
    DAT_1109f200 = (FARPROC)&LAB_1103cd40;
    DAT_1109f208 = TlsSetValue_exref;
    DAT_1109f20c = TlsFree_exref;
  }
  DAT_1109acf4 = TlsAlloc();
  if ((DAT_1109acf4 != 0xffffffff) && (BVar1 = TlsSetValue(DAT_1109acf4,DAT_1109f204), BVar1 != 0))
  {
    __init_pointers();
    DAT_1109f200 = (FARPROC)FUN_1103cc5b((int)DAT_1109f200);
    DAT_1109f204 = (FARPROC)FUN_1103cc5b((int)DAT_1109f204);
    DAT_1109f208 = (FARPROC)FUN_1103cc5b((int)DAT_1109f208);
    DAT_1109f20c = (FARPROC)FUN_1103cc5b((int)DAT_1109f20c);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar6 = __freefls_4;
      pcVar3 = (code *)FUN_1103ccd2((int)DAT_1109f200);
      DAT_1109acf0 = (*pcVar3)(pcVar6);
      if ((DAT_1109acf0 != -1) && (pDVar4 = __calloc_crt(1,0x214), pDVar4 != (DWORD *)0x0)) {
        iVar2 = DAT_1109acf0;
        pDVar7 = pDVar4;
        pcVar3 = (code *)FUN_1103ccd2((int)DAT_1109f208);
        iVar2 = (*pcVar3)(iVar2,pDVar7);
        if (iVar2 != 0) {
          FUN_1103cdec((int)pDVar4,0);
          DVar5 = GetCurrentThreadId();
          pDVar4[1] = 0xffffffff;
          *pDVar4 = DVar5;
          return 1;
        }
      }
    }
    __mtterm();
  }
  return 0;
}


// ==== 1103d254 terminate

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl terminate(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl terminate(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_terminate != (code *)0x0) {
    (*p_Var1->_terminate)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}


// ==== 1103d28d unexpected

/* Library Function - Single Match
    void __cdecl unexpected(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl unexpected(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_unexpected != (code *)0x0) {
    (*p_Var1->_unexpected)();
  }
  terminate();
  return;
}


// ==== 1103d2a0 _inconsistency

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_1103ccd2(DAT_1109f210);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  return;
}


// ==== 1103d2d7 __initp_eh_hooks

/* Library Function - Single Match
    __initp_eh_hooks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __initp_eh_hooks(void)

{
  DAT_1109f210 = FUN_1103cc5b(0x1103d254);
  return;
}


// ==== 1103d2f0 __CallSettingFrame@12

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)__NLG_Notify1(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  __NLG_Notify1(param_3);
  return;
}


// ==== 1103d33c __invoke_watson_if_error

/* Library Function - Single Match
    __invoke_watson_if_error
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2019 Release */

void __cdecl
__invoke_watson_if_error
          (errno_t _ExpressionError,wchar_t *_Expression,wchar_t *_Function,wchar_t *_File,
          uint _Line,uintptr_t _Reserved)

{
  if (_ExpressionError != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson(_Expression,_Function,_File,_Line,_Reserved);
  }
  return;
}


// ==== 1103d35e type_info::_Type_info_dtor

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static void __cdecl type_info::_Type_info_dtor(class type_info *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl type_info::_Type_info_dtor(type_info *param_1)

{
  int *_Memory;
  int *piVar1;
  int *piVar2;
  
  __lock(0xe);
  _Memory = DAT_1109f218;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_1109f214;
    do {
      piVar2 = piVar1;
      if (DAT_1109f218 == (int *)0x0) goto LAB_1103d3a2;
      piVar1 = DAT_1109f218;
    } while (*DAT_1109f218 != *(int *)(param_1 + 4));
    piVar2[1] = DAT_1109f218[1];
    _free(_Memory);
LAB_1103d3a2:
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_1103d3c5();
  return;
}


// ==== 1103d3c5 FUN_1103d3c5

void FUN_1103d3c5(void)

{
  FUN_110406e7(0xe);
  return;
}


// ==== 1103d533 ___unDNameHelper

/* Library Function - Single Match
    ___unDNameHelper
   
   Library: Visual Studio 2005 Release */

void __cdecl ___unDNameHelper(char *param_1,char *param_2,int param_3,ushort param_4)

{
  if (param_4 == 0) {
    param_4 = 0x2800;
  }
  ___unDName(param_1,param_2,param_3,0x11047875,_free,param_4);
  return;
}


// ==== 1103d6b0 _strcmp

/* Library Function - Single Match
    _strcmp
   
   Library: Visual Studio 2005 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_1103d6f4;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_1103d6c0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_1103d6f4;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_1103d6f4;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_1103d6c0:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < (byte)_Str2[2];
    if (bVar4 != _Str2[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_1103d6f4:
  return (uint)bVar5 * -2 + 1;
}


// ==== 1103d738 fastzero_I

/* Library Function - Single Match
    _fastzero_I
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2019 */

void __cdecl fastzero_I(undefined1 (*param_1) [16],uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 7;
  do {
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    param_1[2] = (undefined1  [16])0x0;
    param_1[3] = (undefined1  [16])0x0;
    param_1[4] = (undefined1  [16])0x0;
    param_1[5] = (undefined1  [16])0x0;
    param_1[6] = (undefined1  [16])0x0;
    param_1[7] = (undefined1  [16])0x0;
    param_1 = param_1 + 8;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}


// ==== 1103d78f __VEC_memzero

/* Library Function - Single Match
    __VEC_memzero
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined1 (*) [16] __cdecl
__VEC_memzero(undefined1 (*param_1) [16],undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [16];
  
  uVar2 = (int)param_1 >> 0x1f;
  iVar3 = (((uint)param_1 ^ uVar2) - uVar2 & 0xf ^ uVar2) - uVar2;
  if (iVar3 == 0) {
    uVar2 = param_3 & 0x7f;
    if (param_3 != uVar2) {
      fastzero_I(param_1,param_3 - uVar2);
    }
    if (uVar2 != 0) {
      puVar4 = (undefined1 *)((int)param_1 + (param_3 - uVar2));
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
  }
  else {
    iVar3 = 0x10 - iVar3;
    pauVar5 = param_1;
    for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
      (*pauVar5)[0] = 0;
      pauVar5 = (undefined1 (*) [16])(*pauVar5 + 1);
    }
    __VEC_memzero((undefined1 (*) [16])((int)param_1 + iVar3),0,param_3 - iVar3);
  }
  return param_1;
}


// ==== 1103d848 __SEH_prolog4

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_2 */
/* Library Function - Single Match
    __SEH_prolog4
   
   Library: Visual Studio */

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1109acf8 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


// ==== 1103d88d __SEH_epilog4

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __SEH_epilog4
   
   Library: Visual Studio */

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}


// ==== 1103d8e0 __except_handler4

/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __except_handler4(int *param_1,PVOID param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 local_c;
  int *local_8;
  undefined4 local_4;
  
  piVar8 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_1109acf8);
  bVar3 = false;
  local_c = 1;
  iVar1 = (int)param_2 + 0x10;
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    local_8 = param_1;
    local_4 = param_3;
    *(int ***)((int)param_2 + -4) = &local_8;
    uVar7 = *(uint *)((int)param_2 + 0xc);
    if (*(uint *)((int)param_2 + 0xc) == 0xfffffffe) {
      return 1;
    }
    do {
      uVar2 = piVar8[uVar7 * 3 + 4];
      if ((undefined *)piVar8[uVar7 * 3 + 5] != (undefined *)0x0) {
        iVar4 = _EH4_CallFilterFunc((undefined *)piVar8[uVar7 * 3 + 5]);
        bVar3 = true;
        if (iVar4 < 0) {
          local_c = 0;
          goto LAB_1103d98b;
        }
        if (0 < iVar4) {
          if (((*param_1 == -0x1f928c9d) &&
              (PTR____DestructExceptionObject_1107420c != (undefined *)0x0)) &&
             (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_1107420c)
             , BVar5 != 0)) {
            (*(code *)PTR____DestructExceptionObject_1107420c)(param_1,1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(uint *)((int)param_2 + 0xc) != uVar7) {
            _EH4_LocalUnwind((int)param_2,uVar7,iVar1,&DAT_1109acf8);
          }
          *(uint *)((int)param_2 + 0xc) = uVar2;
          if (*piVar8 != -2) {
            __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
          }
          __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
          uVar6 = _EH4_TransferToHandler((undefined *)(piVar8 + uVar7 * 3 + 4)[2]);
          return uVar6;
        }
      }
      uVar7 = uVar2;
    } while (uVar2 != 0xfffffffe);
    if (!bVar3) {
      return 1;
    }
  }
  else {
    if (*(int *)((int)param_2 + 0xc) == -2) {
      return 1;
    }
    _EH4_LocalUnwind((int)param_2,0xfffffffe,iVar1,&DAT_1109acf8);
  }
LAB_1103d98b:
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  return local_c;
}


// ==== 1103da76 _abort

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2005 Release */

void __cdecl _abort(void)

{
  _PHNDLR p_Var1;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  if (((byte)DAT_1109ad10 & 1) != 0) {
    FUN_1103db87(10);
  }
  p_Var1 = ___get_sigabrt();
  if (p_Var1 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if (((byte)DAT_1109ad10 & 2) != 0) {
    local_2d4 = 0x10001;
    _memset(&local_32c,0,0x50);
    local_2dc.ExceptionRecord = &local_32c;
    local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
    local_32c.ExceptionCode = 0x40000015;
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
    UnhandledExceptionFilter(&local_2dc);
  }
                    /* WARNING: Subroutine does not return */
  __exit(3);
}


// ==== 1103db69 __set_abort_behavior

/* Library Function - Single Match
    __set_abort_behavior
   
   Library: Visual Studio 2005 Release */

uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask)

{
  uint uVar1;
  
  uVar1 = DAT_1109ad10;
  DAT_1109ad10 = ~_Mask & DAT_1109ad10 | _Flags & _Mask;
  return uVar1;
}


// ==== 1103db87 FUN_1103db87

void __cdecl FUN_1103db87(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  errno_t eVar3;
  DWORD DVar4;
  size_t sVar5;
  char *_Dst;
  HANDLE hFile;
  uint uVar6;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_4;
  
  uVar6 = 0;
  do {
    if (param_1 == (&DAT_1109ad18)[uVar6 * 2]) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x17);
  if (uVar6 < 0x17) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_1109f1fc == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_4;
        puVar1 = (undefined4 *)(uVar6 * 8 + 0x1109ad1c);
        sVar5 = _strlen((char *)*puVar1);
        WriteFile(hFile,(LPCVOID)*puVar1,sVar5,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _strcpy_s(&DAT_1109f220,0x314,s_Runtime_Error__Program__11074838);
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_1109f33d = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_1109f239,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = _strcpy_s(&DAT_1109f239,0x2fb,s_<program_name_unknown>_11074820), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar5 = _strlen(&DAT_1109f239);
      if (0x3c < sVar5 + 1) {
        sVar5 = _strlen(&DAT_1109f239);
        _Dst = (char *)((int)&DAT_1109f1fc + sVar5 + 2);
        eVar3 = _strncpy_s(_Dst,(int)&DAT_1109f534 - (int)_Dst,&DAT_1107481c,3);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar3 = _strcat_s(&DAT_1109f220,0x314,&DAT_11074818);
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = _strcat_s(&DAT_1109f220,0x314,*(char **)(uVar6 * 8 + 0x1109ad1c));
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1104817f(&DAT_1109f220,s_Microsoft_Visual_C___Runtime_Lib_110747f0,0x12010);
    }
  }
  return;
}


// ==== 1103dd47 __FF_MSGBANNER

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2005 Release */

void __cdecl __FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = __set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = __set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (DAT_1109f1fc != 1) {
      return;
    }
  }
  FUN_1103db87(0xfc);
  FUN_1103db87(0xff);
  return;
}


// ==== 1103dd80 ___getlocaleinfo

/* Library Function - Single Match
    ___getlocaleinfo
   
   Library: Visual Studio 2005 Release */

int __cdecl
___getlocaleinfo(_locale_t _Locale,int _Lc_type,LPCWSTR _LocaleName,LCTYPE _FieldType,void *_Address
                )

{
  byte bVar1;
  bool bVar2;
  size_t sVar3;
  DWORD DVar4;
  LPSTR _LpLCData;
  char *_Dst;
  int iVar5;
  errno_t eVar6;
  byte *pbVar7;
  CHAR local_88 [32];
  undefined1 local_68 [96];
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)local_68;
  if (_Lc_type != 1) {
    if (_Lc_type == 0) {
      pbVar7 = &DAT_1109f534;
      iVar5 = ___crtGetLocaleInfoW
                        (_Locale,(ulong)_LocaleName,_FieldType,(wchar_t *)&DAT_1109f534,4,0);
      if (iVar5 != 0) {
        *(undefined1 *)_Address = 0;
        do {
          bVar1 = *pbVar7;
          iVar5 = _isdigit((uint)bVar1);
          if (iVar5 == 0) break;
          pbVar7 = pbVar7 + 2;
          *(byte *)_Address = *(char *)_Address * '\n' + bVar1 + -0x30;
        } while ((int)pbVar7 < 0x1109f53c);
      }
    }
    goto LAB_1103de4d;
  }
  _LpLCData = local_88;
  bVar2 = false;
  sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,_LpLCData,0x80);
  if (sVar3 == 0) {
    DVar4 = GetLastError();
    if (((DVar4 != 0x7a) ||
        (sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,(LPSTR)0x0,0), sVar3 == 0)) ||
       (_LpLCData = __calloc_crt(sVar3,1), _LpLCData == (LPSTR)0x0)) goto LAB_1103de4d;
    bVar2 = true;
    sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,_LpLCData,sVar3);
    if (sVar3 != 0) goto LAB_1103de2b;
  }
  else {
LAB_1103de2b:
    _Dst = __calloc_crt(sVar3,1);
    *(char **)_Address = _Dst;
    if (_Dst != (char *)0x0) {
      eVar6 = _strncpy_s(_Dst,sVar3,_LpLCData,sVar3 - 1);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (bVar2) {
        _free(_LpLCData);
      }
      goto LAB_1103de4d;
    }
    if (!bVar2) goto LAB_1103de4d;
  }
  _free(_LpLCData);
LAB_1103de4d:
  iVar5 = __security_check_cookie(local_8 ^ (uint)local_68);
  return iVar5;
}


// ==== 1103deda FUN_1103deda

void __cdecl FUN_1103deda(undefined4 param_1)

{
  DAT_1109f53c = param_1;
  return;
}


// ==== 1103dee9 _LocaleUpdate::_LocaleUpdate

/* Library Function - Single Match
    public: __thiscall _LocaleUpdate::_LocaleUpdate(struct localeinfo_struct *)
   
   Library: Visual Studio 2005 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,localeinfo_struct *param_1)

{
  uint *puVar1;
  _ptiddata p_Var2;
  pthreadlocinfo ptVar3;
  pthreadmbcinfo ptVar4;
  
  this[0xc] = (_LocaleUpdate)0x0;
  if (param_1 == (localeinfo_struct *)0x0) {
    p_Var2 = __getptd();
    *(_ptiddata *)(this + 8) = p_Var2;
    *(pthreadlocinfo *)this = p_Var2->ptlocinfo;
    *(pthreadmbcinfo *)(this + 4) = p_Var2->ptmbcinfo;
    if ((*(undefined **)this != PTR_DAT_1109b138) && ((p_Var2->_ownlocale & DAT_1109b710) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_1109b570) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_1109b710) == 0)) {
      ptVar4 = ___updatetmbcinfo();
      *(pthreadmbcinfo *)(this + 4) = ptVar4;
    }
    if ((*(byte *)(*(int *)(this + 8) + 0x70) & 2) == 0) {
      puVar1 = (uint *)(*(int *)(this + 8) + 0x70);
      *puVar1 = *puVar1 | 2;
      this[0xc] = (_LocaleUpdate)0x1;
    }
  }
  else {
    *(pthreadlocinfo *)this = param_1->locinfo;
    *(pthreadmbcinfo *)(this + 4) = param_1->mbcinfo;
  }
  return this;
}


// ==== 1103df7c __forcdecpt_l

/* Library Function - Single Match
    __forcdecpt_l
   
   Library: Visual Studio 2005 Release */

void __cdecl __forcdecpt_l(char *_Buf,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  iVar3 = _tolower((int)*_Buf);
  bVar4 = iVar3 == 0x65;
  while (!bVar4) {
    _Buf = _Buf + 1;
    iVar3 = _isdigit((uint)(byte)*_Buf);
    bVar4 = iVar3 == 0;
  }
  iVar3 = _tolower((int)*_Buf);
  if (iVar3 == 0x78) {
    _Buf = _Buf + 2;
  }
  bVar2 = *_Buf;
  *_Buf = *(byte *)**(undefined4 **)(local_14[0] + 0xbc);
  do {
    _Buf = _Buf + 1;
    bVar1 = *_Buf;
    *_Buf = bVar2;
    bVar2 = bVar1;
  } while (*_Buf != 0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}


// ==== 1103dfed __cropzeros_l

/* Library Function - Single Match
    __cropzeros_l
   
   Library: Visual Studio 2005 Release */

void __cdecl __cropzeros_l(char *_Buf,_locale_t _Locale)

{
  char *pcVar1;
  char cVar3;
  int local_14 [2];
  int local_c;
  char local_8;
  char *pcVar2;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  cVar3 = *_Buf;
  if (cVar3 != '\0') {
    do {
      if (cVar3 == *(char *)**(undefined4 **)(local_14[0] + 0xbc)) break;
      _Buf = _Buf + 1;
      cVar3 = *_Buf;
    } while (cVar3 != '\0');
  }
  if (*_Buf != '\0') {
    do {
      _Buf = _Buf + 1;
      cVar3 = *_Buf;
      pcVar1 = _Buf;
      if ((cVar3 == '\0') || (cVar3 == 'e')) break;
    } while (cVar3 != 'E');
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + -1;
    } while (*pcVar1 == '0');
    if (*pcVar1 == *(char *)**(undefined4 **)(local_14[0] + 0xbc)) {
      pcVar1 = pcVar2 + -2;
    }
    do {
      cVar3 = *_Buf;
      pcVar1 = pcVar1 + 1;
      _Buf = _Buf + 1;
      *pcVar1 = cVar3;
    } while (cVar3 != '\0');
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}


// ==== 1103e083 __fassign_l

/* Library Function - Single Match
    __fassign_l
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __fassign_l(int flag,char *argument,char *number,_locale_t param_4)

{
  _CRT_FLOAT local_c;
  undefined4 local_8;
  
  if (flag == 0) {
    FID_conflict___atoflt_l((_CRT_FLOAT *)&flag,number,param_4);
    *(int *)argument = flag;
  }
  else {
    FID_conflict___atoflt_l(&local_c,number,param_4);
    *(float *)argument = local_c.f;
    *(undefined4 *)(argument + 4) = local_8;
  }
  return;
}


// ==== 1103e0da __shift

/* Library Function - Single Match
    __shift
   
   Library: Visual Studio 2005 Release */

void __shift(void)

{
  char *in_EAX;
  size_t sVar1;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    sVar1 = _strlen(in_EAX);
    _memmove(in_EAX + unaff_EDI,in_EAX,sVar1 + 1);
  }
  return;
}


// ==== 1103e113 __cftoe2_l

/* Library Function - Single Match
    __cftoe2_l
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl
__cftoe2_l(uint param_1,int param_2,int param_3,int *param_4,char param_5,localeinfo_struct *param_6
          )

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  errno_t eVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *_Dst;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_6);
  if ((in_EAX == (undefined1 *)0x0) || (param_1 == 0)) {
    puVar1 = (undefined4 *)FUN_110491c7();
    uVar7 = 0x16;
  }
  else {
    iVar3 = param_2;
    if (param_2 < 1) {
      iVar3 = 0;
    }
    if (iVar3 + 9U < param_1) {
      if (param_5 != '\0') {
        __shift();
      }
      puVar5 = in_EAX;
      if (*param_4 == 0x2d) {
        *in_EAX = 0x2d;
        puVar5 = in_EAX + 1;
      }
      puVar6 = puVar5;
      if (0 < param_2) {
        puVar6 = puVar5 + 1;
        *puVar5 = *puVar6;
        *puVar6 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      }
      _Dst = puVar6 + (uint)(param_5 == '\0') + param_2;
      if (param_1 == 0xffffffff) {
        puVar5 = (undefined1 *)0xffffffff;
      }
      else {
        puVar5 = in_EAX + (param_1 - (int)_Dst);
      }
      pcVar9 = s_e_000_11074860;
      eVar2 = _strcpy_s(_Dst,(rsize_t)puVar5,s_e_000_11074860);
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (param_3 != 0) {
        *_Dst = 'E';
      }
      if (*(char *)param_4[3] != '0') {
        iVar3 = param_4[1] + -1;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
          _Dst[1] = '-';
        }
        if (99 < iVar3) {
          pcVar9 = (char *)0x64;
          iVar4 = iVar3 / 100;
          iVar3 = iVar3 % 100;
          _Dst[2] = _Dst[2] + (char)iVar4;
        }
        if (9 < iVar3) {
          pcVar9 = (char *)0xa;
          iVar4 = iVar3 / 10;
          iVar3 = iVar3 % 10;
          _Dst[3] = _Dst[3] + (char)iVar4;
        }
        _Dst[4] = _Dst[4] + (char)iVar3;
      }
      if (((DAT_1109fbc8 & 1) != 0) && (_Dst[2] == '0')) {
        pcVar9 = (char *)0x3;
        _memmove(_Dst + 2,_Dst + 3,3);
      }
      if (local_8 == '\0') {
        return pcVar9;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return pcVar9;
    }
    puVar1 = (undefined4 *)FUN_110491c7();
    uVar7 = 0x22;
  }
  uVar8 = 0;
  *puVar1 = uVar7;
  FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar8;
}


// ==== 1103e280 __cftoe_l

/* Library Function - Single Match
    __cftoe_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftoe_l(double *param_1,undefined1 *param_2,uint param_3,int param_4,int param_5,
         localeinfo_struct *param_6)

{
  undefined4 *puVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar1 = (undefined4 *)FUN_110491c7();
    *puVar1 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = (param_3 - (local_30.sign == 0x2d)) - (uint)(0 < param_4);
    }
    eVar2 = __fptostr(param_2 + (uint)(0 < param_4) + (uint)(local_30.sign == 0x2d),_SizeInBytes,
                      param_4 + 1,&local_30);
    if (eVar2 == 0) {
      __cftoe2_l(param_3,param_4,param_5,&local_30.sign,'\0',param_6);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1103e34e __cftoe

/* Library Function - Single Match
    __cftoe
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  errno_t eVar1;
  
  eVar1 = __cftoe_l(_Value,_Buf,_SizeInBytes,_Dec,_Caps,(localeinfo_struct *)0x0);
  return eVar1;
}


// ==== 1103e36c __cftoa_l

/* Library Function - Single Match
    __cftoa_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__cftoa_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  ushort uVar1;
  undefined4 *puVar2;
  size_t _SizeInBytes;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  short sVar7;
  errno_t unaff_EBX;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  errno_t eVar14;
  int local_28 [2];
  int local_20;
  char local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_18 = 0x3ff;
  local_8 = 0x30;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_6);
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar2 = (undefined4 *)FUN_110491c7();
    uVar13 = 0x16;
LAB_1103e3a5:
    eVar14 = 0;
    *puVar2 = uVar13;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_1c != '\0') {
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
    }
    return eVar14;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    puVar2 = (undefined4 *)FUN_110491c7();
    uVar13 = 0x22;
    goto LAB_1103e3a5;
  }
  local_10 = *(uint *)param_1;
  if ((*(uint *)((int)param_1 + 4) >> 0x14 & 0x7ff) == 0x7ff) {
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - 2;
    }
    eVar14 = __cftoe(param_1,param_2 + 2,_SizeInBytes,param_4,0);
    if (eVar14 != 0) {
      *param_2 = 0;
      if (local_1c == '\0') {
        return unaff_EBX;
      }
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      return unaff_EBX;
    }
    if (param_2[2] == '-') {
      *param_2 = 0x2d;
      param_2 = param_2 + 1;
    }
    *param_2 = 0x30;
    param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
    pcVar3 = _strrchr(param_2 + 2,0x65);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
      pcVar3[3] = '\0';
    }
    goto LAB_1103e6c9;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  *param_2 = 0x30;
  param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
  sVar7 = (-(ushort)(param_5 != 0) & 0xffe0) + 0x27;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    param_2[2] = 0x30;
    if (*(int *)param_1 == 0 && ((ulonglong)*param_1 & 0xfffff00000000) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = 0x3fe;
    }
  }
  else {
    param_2[2] = 0x31;
  }
  pcVar9 = param_2 + 3;
  pcVar3 = param_2 + 4;
  if (param_4 == 0) {
    *pcVar9 = '\0';
  }
  else {
    *pcVar9 = *(char *)**(undefined4 **)(local_28[0] + 0xbc);
  }
  if ((((ulonglong)*param_1 & 0xfffff00000000) != 0) || (local_c = 0, *(int *)param_1 != 0)) {
    local_10 = 0;
    local_c = 0xf0000;
    do {
      if ((int)param_4 < 1) break;
      uVar11 = __aullshr((byte)local_8,*(uint *)((int)param_1 + 4) & local_c & 0xfffff);
      uVar1 = (short)uVar11 + 0x30;
      if (0x39 < uVar1) {
        uVar1 = uVar1 + sVar7;
      }
      local_8 = local_8 + -4;
      *pcVar3 = (char)uVar1;
      local_10 = local_10 >> 4 | local_c << 0x1c;
      local_c = local_c >> 4;
      pcVar3 = pcVar3 + 1;
      param_4 = param_4 - 1;
    } while (-1 < (short)local_8);
    if ((-1 < (short)local_8) &&
       (uVar11 = __aullshr((byte)local_8,*(uint *)((int)param_1 + 4) & local_c & 0xfffff),
       pcVar8 = pcVar3, 8 < (ushort)uVar11)) {
      while( true ) {
        pcVar4 = pcVar8 + -1;
        if ((*pcVar4 != 'f') && (*pcVar4 != 'F')) break;
        *pcVar4 = '0';
        pcVar8 = pcVar4;
      }
      if (pcVar4 == pcVar9) {
        pcVar8[-2] = pcVar8[-2] + '\x01';
      }
      else if (*pcVar4 == '9') {
        *pcVar4 = (char)sVar7 + ':';
      }
      else {
        *pcVar4 = *pcVar4 + '\x01';
      }
    }
  }
  if (0 < (int)param_4) {
    _memset(pcVar3,0x30,param_4);
    pcVar3 = pcVar3 + param_4;
  }
  if (*pcVar9 == '\0') {
    pcVar3 = pcVar9;
  }
  *pcVar3 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
  uVar11 = __aullshr(0x34,*(uint *)((int)param_1 + 4));
  uVar5 = (uint)(uVar11 & 0x7ff);
  uVar6 = uVar5 - local_18;
  uVar5 = -(uint)(uVar5 < local_18);
  if ((int)uVar5 < 0) {
    pcVar3[1] = '-';
    bVar10 = uVar6 != 0;
    uVar6 = -uVar6;
    uVar5 = -(uVar5 + bVar10);
  }
  else {
    pcVar3[1] = '+';
  }
  pcVar8 = pcVar3 + 2;
  *pcVar8 = '0';
  pcVar9 = pcVar8;
  if (((int)uVar5 < 0) || (((int)uVar5 < 1 && (uVar6 < 1000)))) {
LAB_1103e678:
    if ((-1 < (int)uVar5) && ((0 < (int)uVar5 || (99 < uVar6)))) goto LAB_1103e683;
  }
  else {
    uVar12 = __alldvrm(uVar6,uVar5,1000,0);
    local_14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    *pcVar8 = (char)uVar12 + '0';
    pcVar9 = pcVar3 + 3;
    uVar5 = 0;
    uVar6 = extraout_ECX;
    if (pcVar9 == pcVar8) goto LAB_1103e678;
LAB_1103e683:
    uVar12 = __alldvrm(uVar6,uVar5,100,0);
    local_14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    *pcVar9 = (char)uVar12 + '0';
    pcVar9 = pcVar9 + 1;
    uVar5 = 0;
    uVar6 = extraout_ECX_00;
  }
  if ((pcVar9 != pcVar8) || ((-1 < (int)uVar5 && ((0 < (int)uVar5 || (9 < uVar6)))))) {
    uVar12 = __alldvrm(uVar6,uVar5,10,0);
    *pcVar9 = (char)uVar12 + '0';
    pcVar9 = pcVar9 + 1;
    uVar6 = extraout_ECX_01;
  }
  *pcVar9 = (char)uVar6 + '0';
  pcVar9[1] = '\0';
LAB_1103e6c9:
  if (local_1c == '\0') {
    return unaff_EBX;
  }
  *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  return unaff_EBX;
}


// ==== 1103e6dd __cftoa

/* Library Function - Single Match
    __cftoa
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __cftoa(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  errno_t extraout_EAX;
  
  __cftoa_l(_Value,_Buf,_SizeInBytes,_Dec,_Caps,(localeinfo_struct *)0x0);
  return extraout_EAX;
}


// ==== 1103e6fb __cftof2_l

/* Library Function - Single Match
    __cftof2_l
   
   Library: Visual Studio 2005 Release */

undefined4 __thiscall
__cftof2_l(void *this,int param_1,size_t param_2,char param_3,localeinfo_struct *param_4)

{
  int iVar1;
  int *in_EAX;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  size_t sVar5;
  int local_14 [2];
  int local_c;
  char local_8;
  
  iVar1 = in_EAX[1];
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_4);
  if ((this == (void *)0x0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_110491c7();
    uVar4 = 0x16;
    *puVar2 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    if ((param_3 != '\0') && (iVar1 - 1U == param_2)) {
      puVar3 = (undefined1 *)((uint)(*in_EAX == 0x2d) + (iVar1 - 1U) + (int)this);
      *puVar3 = 0x30;
      puVar3[1] = 0;
    }
    if (*in_EAX == 0x2d) {
      *(undefined1 *)this = 0x2d;
      this = (void *)((int)this + 1);
    }
    if (in_EAX[1] < 1) {
      __shift();
      *(undefined1 *)this = 0x30;
      puVar3 = (undefined1 *)((int)this + 1);
    }
    else {
      puVar3 = (undefined1 *)((int)this + in_EAX[1]);
    }
    if (0 < (int)param_2) {
      __shift();
      *puVar3 = *(undefined1 *)**(undefined4 **)(local_14[0] + 0xbc);
      if (in_EAX[1] < 0) {
        sVar5 = -in_EAX[1];
        if ((param_3 != '\0') || ((int)sVar5 <= (int)param_2)) {
          param_2 = sVar5;
        }
        __shift();
        _memset(puVar3 + 1,0x30,param_2);
      }
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    uVar4 = 0;
  }
  return uVar4;
}


// ==== 1103e7f0 __cftof_l

/* Library Function - Single Match
    __cftof_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftof_l(double *param_1,undefined1 *param_2,int param_3,size_t param_4,localeinfo_struct *param_5)

{
  undefined4 *puVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar1 = (undefined4 *)FUN_110491c7();
    *puVar1 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (uint)(local_30.sign == 0x2d);
    }
    eVar2 = __fptostr(param_2 + (local_30.sign == 0x2d),_SizeInBytes,local_30.decpt + param_4,
                      &local_30);
    if (eVar2 == 0) {
      __cftof2_l(param_2,param_3,param_4,'\0',param_5);
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1103e8c4 __cftog_l

/* Library Function - Single Match
    __cftog_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftog_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  char *pcVar1;
  undefined4 *puVar2;
  errno_t eVar3;
  size_t _SizeInBytes;
  char *pcVar4;
  _strflt local_34;
  int local_24;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_34,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    puVar2 = (undefined4 *)FUN_110491c7();
    *puVar2 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    local_24 = local_34.decpt + -1;
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (local_34.sign == 0x2d);
    }
    eVar3 = __fptostr(param_2 + (local_34.sign == 0x2d),_SizeInBytes,param_4,&local_34);
    if (eVar3 == 0) {
      local_34.decpt = local_34.decpt + -1;
      if ((local_34.decpt < -4) || ((int)param_4 <= local_34.decpt)) {
        __cftoe2_l(param_3,param_4,param_5,&local_34.sign,'\x01',param_6);
      }
      else {
        pcVar1 = param_2 + (local_34.sign == 0x2d);
        if (local_24 < local_34.decpt) {
          do {
            pcVar4 = pcVar1;
            pcVar1 = pcVar4 + 1;
          } while (*pcVar4 != '\0');
          pcVar4[-1] = '\0';
        }
        __cftof2_l(param_2,param_3,param_4,'\x01',param_6);
      }
    }
    else {
      *param_2 = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1103e9bc __cftog

/* Library Function - Single Match
    __cftog
   
   Library: Visual Studio 2005 Release */

void __cdecl __cftog(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5)

{
  __cftog_l(param_1,param_2,param_3,param_4,param_5,(localeinfo_struct *)0x0);
  return;
}


// ==== 1103e9da __cfltcvt_l

/* Library Function - Single Match
    __cfltcvt_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__cfltcvt_l(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps,
           _locale_t plocinfo)

{
  errno_t eVar1;
  errno_t extraout_EAX;
  
  if ((format == 0x65) || (format == 0x45)) {
    eVar1 = __cftoe_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
  }
  else {
    if (format == 0x66) {
      eVar1 = __cftof_l(arg,buffer,sizeInBytes,precision,plocinfo);
      return eVar1;
    }
    if ((format == 0x61) || (format == 0x41)) {
      __cftoa_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
      eVar1 = extraout_EAX;
    }
    else {
      eVar1 = __cftog_l(arg,buffer,sizeInBytes,precision,caps,plocinfo);
    }
  }
  return eVar1;
}


// ==== 1103ea60 __cfltcvt

/* Library Function - Single Match
    __cfltcvt
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release,
   Visual Studio 2012 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  errno_t eVar1;
  
  eVar1 = __cfltcvt_l(arg,buffer,sizeInBytes,format,precision,caps,(_locale_t)0x0);
  return eVar1;
}


// ==== 1103ea81 __initp_misc_cfltcvt_tab

/* Library Function - Single Match
    __initp_misc_cfltcvt_tab
   
   Library: Visual Studio 2005 Release */

void __initp_misc_cfltcvt_tab(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    piVar1 = (int *)((int)&PTR_LAB_1109add0 + uVar3);
    iVar2 = FUN_1103cc5b(*piVar1);
    uVar3 = uVar3 + 4;
    *piVar1 = iVar2;
  } while (uVar3 < 0x28);
  return;
}


// ==== 1103eaa0 __setdefaultprecision

/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 2005 Release */

void __setdefaultprecision(void)

{
  errno_t eVar1;
  
  eVar1 = __controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return;
}


// ==== 1103eac9 __ms_p5_test_fdiv

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __ms_p5_test_fdiv
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __ms_p5_test_fdiv(void)

{
  if (1.0 < _DAT_11074868 - (_DAT_11074868 / _DAT_11074870) * _DAT_11074870) {
    return 1;
  }
  return 0;
}


// ==== 1103eb05 __ms_p5_mp_test_fdiv

/* Library Function - Single Match
    __ms_p5_mp_test_fdiv
   
   Library: Visual Studio 2005 Release */

void __ms_p5_mp_test_fdiv(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA(s_KERNEL32_11074894);
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,s_GAIsProcessorFeaturePresent_11074876 + 2);
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  __ms_p5_test_fdiv();
  return;
}


// ==== 1103eb2e FUN_1103eb2e

uint __cdecl FUN_1103eb2e(DWORD param_1)

{
  uint uVar1;
  
  Sleep(param_1);
  uVar1 = param_1 + 1000;
  if (DAT_1109f540 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ==== 1103eb5f __malloc_crt

/* Library Function - Single Match
    __malloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __malloc_crt(size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = _malloc(_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (DAT_1109f540 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_1109f540 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}


// ==== 1103eb9f __calloc_crt

/* Library Function - Single Match
    __calloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __calloc_crt(size_t _Count,size_t _Size)

{
  int *piVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    piVar1 = __calloc_impl(_Count,_Size,(undefined4 *)0x0);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_1109f540 == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_1109f540 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}


// ==== 1103ebe7 __realloc_crt

/* Library Function - Single Match
    __realloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __realloc_crt(void *_Ptr,size_t _NewSize)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = _realloc(_Ptr,_NewSize);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (_NewSize == 0) {
      return (void *)0x0;
    }
    if (DAT_1109f540 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_1109f540 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}


// ==== 1103ec32 __recalloc_crt

/* Library Function - Single Match
    __recalloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __recalloc_crt(void *_Ptr,size_t _Count,size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = FUN_1104998a(_Ptr,_Count,_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (_Size == 0) {
      return (void *)0x0;
    }
    if (DAT_1109f540 == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_1109f540 < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}


// ==== 1103ec9e __msize

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __msize
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

size_t __cdecl __msize(void *_Memory)

{
  undefined4 *puVar1;
  size_t sVar2;
  int iVar3;
  void *this;
  size_t local_20;
  
  if (_Memory == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_110491c7();
    *puVar1 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    sVar2 = 0xffffffff;
  }
  else {
    if (DAT_1109fcfc == 3) {
      this = (void *)0x4;
      __lock(4);
      iVar3 = thunk_FUN_11049b12(this,(int)_Memory);
      if (iVar3 != 0) {
        local_20 = *(int *)((int)_Memory + -4) - 9;
      }
      FUN_1103ed38();
      if (iVar3 != 0) {
        return local_20;
      }
    }
    sVar2 = HeapSize(DAT_1109f69c,0,_Memory);
  }
  return sVar2;
}


// ==== 1103ed38 FUN_1103ed38

void FUN_1103ed38(void)

{
  FUN_110406e7(4);
  return;
}


// ==== 1103ed41 __amsg_exit

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_1103db87(param_1);
  pcVar1 = (code *)FUN_1103ccd2((int)PTR___exit_1109adf8);
  (*pcVar1)(0xff);
  return;
}


// ==== 1103ed65 FUN_1103ed65

void __cdecl FUN_1103ed65(undefined4 param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA(s_mscoree_dll_110748b0);
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,s_CorExitProcess_110748a0);
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
  }
  return;
}


// ==== 1103ed8b ___crtExitProcess

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2005 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  FUN_1103ed65(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


// ==== 1103eda0 FUN_1103eda0

void FUN_1103eda0(void)

{
  __lock(8);
  return;
}


// ==== 1103eda9 FUN_1103eda9

void FUN_1103eda9(void)

{
  FUN_110406e7(8);
  return;
}


// ==== 1103edb2 FUN_1103edb2

void __cdecl FUN_1103edb2(undefined4 *param_1)

{
  undefined4 *in_EAX;
  
  for (; in_EAX < param_1; in_EAX = in_EAX + 1) {
    if ((code *)*in_EAX != (code *)0x0) {
      (*(code *)*in_EAX)();
    }
  }
  return;
}


// ==== 1103edca __initterm_e

/* Library Function - Single Match
    __initterm_e
   
   Library: Visual Studio 2005 Release */

void __cdecl __initterm_e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((param_1 < param_2 && (iVar1 == 0))) {
    if ((code *)*param_1 != (code *)0x0) {
      iVar1 = (*(code *)*param_1)();
    }
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 1103edea __get_osplatform

/* Library Function - Single Match
    __get_osplatform
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_osplatform(int *param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != (int *)0x0) && (DAT_1109f548 != 0)) {
    *param_1 = DAT_1109f548;
    return 0;
  }
  puVar1 = (undefined4 *)FUN_110491c7();
  *puVar1 = 0x16;
  FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}


// ==== 1103ee99 __get_winmajor

/* Library Function - Single Match
    __get_winmajor
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_winmajor(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (DAT_1109f548 != 0)) {
    *param_1 = DAT_1109f554;
    return 0;
  }
  puVar1 = (undefined4 *)FUN_110491c7();
  *puVar1 = 0x16;
  FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}


// ==== 1103ef7f __cinit

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((PTR___fpmath_110741fc != (undefined *)0x0) &&
     (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_110741fc), BVar1 != 0)) {
    (*(code *)PTR___fpmath_110741fc)(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_11068320,(undefined4 *)&DAT_11068538);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_1103fa92);
    puVar3 = &DAT_11068000;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_1106821c);
    if ((DAT_1109fe7c != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_1109fe7c), BVar1 != 0)) {
      (*DAT_1109fe7c)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}


// ==== 1103f011 FUN_1103f011

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x1103f0e4) */

void __cdecl FUN_1103f011(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  __lock(8);
  if (DAT_1109f588 != 1) {
    DAT_1109f584 = 1;
    DAT_1109f580 = (undefined1)param_3;
    if (param_2 == 0) {
      piVar2 = (int *)FUN_1103ccd2(DAT_1109fe74);
      piVar3 = (int *)FUN_1103ccd2(DAT_1109fe70);
      if (piVar2 != (int *)0x0) {
        while (piVar3 = piVar3 + -1, piVar2 <= piVar3) {
          if (*piVar3 != 0) {
            iVar1 = *piVar3;
            iVar4 = __encoded_null();
            if (iVar1 != iVar4) {
              pcVar5 = (code *)FUN_1103ccd2(iVar1);
              (*pcVar5)();
            }
          }
        }
      }
      FUN_1103edb2((undefined4 *)&DAT_11068740);
    }
    FUN_1103edb2((undefined4 *)&DAT_11068948);
  }
  FUN_1103f0de();
  if (param_3 != 0) {
    return;
  }
  DAT_1109f588 = 1;
  FUN_110406e7(8);
  ___crtExitProcess(param_1);
  return;
}


// ==== 1103f0de FUN_1103f0de

void FUN_1103f0de(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_110406e7(8);
  }
  return;
}


// ==== 1103f104 __exit

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __exit(int _Code)

{
  FUN_1103f011(_Code,1,0);
  return;
}


// ==== 1103f115 __cexit

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2005 Release */

void __cdecl __cexit(void)

{
  FUN_1103f011(0,0,1);
  return;
}


// ==== 1103f133 __init_pointers

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2005 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_1104abe9(uVar1);
  FUN_1104ab0a(uVar1);
  FUN_11042197(uVar1);
  FUN_1103deda(uVar1);
  FUN_1104a9fc(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_1103fbe5();
  __initp_eh_hooks();
  PTR___exit_1109adf8 = (undefined *)FUN_1103cc5b(0x1103f104);
  return;
}


// ==== 1103f17f FUN_1103f17f

void __cdecl FUN_1103f17f(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  
  uVar16 = param_3 >> 7;
  do {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    uVar5 = param_2[5];
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    uVar8 = param_2[8];
    uVar9 = param_2[9];
    uVar10 = param_2[10];
    uVar11 = param_2[0xb];
    uVar12 = param_2[0xc];
    uVar13 = param_2[0xd];
    uVar14 = param_2[0xe];
    uVar15 = param_2[0xf];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
    param_1[5] = uVar5;
    param_1[6] = uVar6;
    param_1[7] = uVar7;
    param_1[8] = uVar8;
    param_1[9] = uVar9;
    param_1[10] = uVar10;
    param_1[0xb] = uVar11;
    param_1[0xc] = uVar12;
    param_1[0xd] = uVar13;
    param_1[0xe] = uVar14;
    param_1[0xf] = uVar15;
    uVar1 = param_2[0x11];
    uVar2 = param_2[0x12];
    uVar3 = param_2[0x13];
    uVar4 = param_2[0x14];
    uVar5 = param_2[0x15];
    uVar6 = param_2[0x16];
    uVar7 = param_2[0x17];
    uVar8 = param_2[0x18];
    uVar9 = param_2[0x19];
    uVar10 = param_2[0x1a];
    uVar11 = param_2[0x1b];
    uVar12 = param_2[0x1c];
    uVar13 = param_2[0x1d];
    uVar14 = param_2[0x1e];
    uVar15 = param_2[0x1f];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar4;
    param_1[0x15] = uVar5;
    param_1[0x16] = uVar6;
    param_1[0x17] = uVar7;
    param_1[0x18] = uVar8;
    param_1[0x19] = uVar9;
    param_1[0x1a] = uVar10;
    param_1[0x1b] = uVar11;
    param_1[0x1c] = uVar12;
    param_1[0x1d] = uVar13;
    param_1[0x1e] = uVar14;
    param_1[0x1f] = uVar15;
    param_2 = param_2 + 0x20;
    param_1 = param_1 + 0x20;
    uVar16 = uVar16 - 1;
  } while (uVar16 != 0);
  return;
}


// ==== 1103f206 __VEC_memcpy

/* Library Function - Single Match
    __VEC_memcpy
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

undefined4 * __cdecl __VEC_memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  
  uVar3 = (int)param_2 >> 0x1f;
  iVar1 = (((uint)param_2 ^ uVar3) - uVar3 & 0xf ^ uVar3) - uVar3;
  uVar3 = (int)param_1 >> 0x1f;
  uVar6 = ((uint)param_1 ^ uVar3) - uVar3 & 0xf ^ uVar3;
  if (iVar1 == 0 && uVar6 == uVar3) {
    uVar3 = param_3 & 0x7f;
    if (param_3 != uVar3) {
      FUN_1103f17f(param_1,param_2,param_3 - uVar3);
    }
    if (uVar3 != 0) {
      puVar4 = (undefined1 *)((int)param_2 + (param_3 - uVar3));
      puVar7 = (undefined1 *)((int)param_1 + (param_3 - uVar3));
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
    }
  }
  else if (iVar1 == uVar6 - uVar3) {
    iVar1 = 0x10 - iVar1;
    puVar5 = param_2;
    puVar8 = param_1;
    for (iVar2 = iVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    __VEC_memcpy((undefined4 *)((int)param_1 + iVar1),(undefined4 *)((int)param_2 + iVar1),
                 param_3 - iVar1);
  }
  else {
    puVar5 = param_1;
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  return param_1;
}


// ==== 1103f2e9 _free

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2005 Release */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  BOOL BVar2;
  int *piVar3;
  DWORD DVar4;
  int iVar5;
  void *this;
  
  if (_Memory != (void *)0x0) {
    if (DAT_1109fcfc == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_11049b12(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_1103f33f();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_1109f69c,0,_Memory);
    if (BVar2 == 0) {
      piVar3 = (int *)FUN_110491c7();
      DVar4 = GetLastError();
      iVar5 = FUN_1104918c(DVar4);
      *piVar3 = iVar5;
    }
  }
  return;
}


// ==== 1103f33f FUN_1103f33f

void FUN_1103f33f(void)

{
  FUN_110406e7(4);
  return;
}


// ==== 1103f377 __ioinit

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __ioinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __ioinit(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  HANDLE pvVar4;
  int iVar5;
  UINT *pUVar6;
  int iVar7;
  int *piVar8;
  UINT UVar9;
  UINT UVar10;
  _STARTUPINFOA local_68;
  uint local_24;
  byte *local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x1103f383;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = __calloc_crt(0x20,0x38);
  if (puVar2 == (undefined4 *)0x0) {
LAB_1103f5ae:
    iVar7 = -1;
  }
  else {
    DAT_1109fd08 = 0x20;
    DAT_1109fd60 = puVar2;
    for (; puVar2 < DAT_1109fd60 + 0x1c0; puVar2 = puVar2 + 0xe) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar2[2] = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 10;
      *(undefined1 *)((int)puVar2 + 0x26) = 10;
    }
    if ((local_68.cbReserved2 != 0) && ((UINT *)local_68.lpReserved2 != (UINT *)0x0)) {
      UVar9 = *(UINT *)local_68.lpReserved2;
      pUVar6 = (UINT *)((int)local_68.lpReserved2 + 4);
      local_20 = (byte *)((int)pUVar6 + UVar9);
      if (0x7ff < (int)UVar9) {
        UVar9 = 0x800;
      }
      iVar7 = 1;
      while ((UVar10 = UVar9, (int)DAT_1109fd08 < (int)UVar9 &&
             (puVar2 = __calloc_crt(0x20,0x38), UVar10 = DAT_1109fd08, puVar2 != (undefined4 *)0x0))
            ) {
        (&DAT_1109fd60)[iVar7] = puVar2;
        DAT_1109fd08 = DAT_1109fd08 + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x1c0; puVar2 = puVar2 + 0xe) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) & 0x80;
          *(undefined1 *)((int)puVar2 + 0x25) = 10;
          *(undefined1 *)((int)puVar2 + 0x26) = 10;
          puVar1 = (&DAT_1109fd60)[iVar7];
        }
        iVar7 = iVar7 + 1;
      }
      local_24 = 0;
      if (0 < (int)UVar10) {
        do {
          pvVar4 = *(HANDLE *)local_20;
          if ((((pvVar4 != (HANDLE)0xffffffff) && (pvVar4 != (HANDLE)0xfffffffe)) &&
              ((*pUVar6 & 1) != 0)) &&
             (((*pUVar6 & 8) != 0 || (DVar3 = GetFileType(pvVar4), DVar3 != 0)))) {
            puVar2 = (undefined4 *)
                     ((local_24 & 0x1f) * 0x38 + (int)(&DAT_1109fd60)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar6;
            iVar7 = ___crtInitCritSecAndSpinCount(puVar2 + 3,4000);
            if (iVar7 == 0) goto LAB_1103f5ae;
            puVar2[2] = puVar2[2] + 1;
          }
          local_24 = local_24 + 1;
          pUVar6 = (UINT *)((int)pUVar6 + 1);
          local_20 = local_20 + 4;
        } while ((int)local_24 < (int)UVar10);
      }
    }
    iVar7 = 0;
    do {
      piVar8 = DAT_1109fd60 + iVar7 * 0xe;
      if ((*piVar8 == -1) || (*piVar8 == -2)) {
        *(undefined1 *)(piVar8 + 1) = 0x81;
        if (iVar7 == 0) {
          DVar3 = 0xfffffff6;
        }
        else {
          DVar3 = 0xfffffff5 - (iVar7 != 1);
        }
        pvVar4 = GetStdHandle(DVar3);
        if (((pvVar4 == (HANDLE)0xffffffff) || (pvVar4 == (HANDLE)0x0)) ||
           (DVar3 = GetFileType(pvVar4), DVar3 == 0)) {
          *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x40;
          *piVar8 = -2;
        }
        else {
          *piVar8 = (int)pvVar4;
          if ((DVar3 & 0xff) == 2) {
            *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 8;
          }
          iVar5 = ___crtInitCritSecAndSpinCount(piVar8 + 3,4000);
          if (iVar5 == 0) goto LAB_1103f5ae;
          piVar8[2] = piVar8[2] + 1;
        }
      }
      else {
        *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(DAT_1109fd08);
    iVar7 = 0;
  }
  return iVar7;
}


// ==== 1103f5b7 __ioterm

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_1109fd60;
  do {
    uVar3 = *puVar2;
    uVar1 = uVar3;
    if (uVar3 != 0) {
      for (; uVar3 < uVar1 + 0x700; uVar3 = uVar3 + 0x38) {
        if (*(int *)(uVar3 + 8) != 0) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(uVar3 + 0xc));
        }
        uVar1 = *puVar2;
      }
      _free((void *)*puVar2);
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x1109fe60);
  return;
}


// ==== 1103f603 __setenvp

/* Library Function - Single Match
    __setenvp
   
   Library: Visual Studio 2005 Release */

int __cdecl __setenvp(void)

{
  undefined4 *puVar1;
  size_t sVar2;
  char *_Dst;
  errno_t eVar3;
  char *pcVar4;
  int iVar5;
  
  if (DAT_1109fe78 == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_1109f1f0;
  if (DAT_1109f1f0 != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = __calloc_crt(iVar5 + 1,4);
    pcVar4 = DAT_1109f1f0;
    DAT_1109f568 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_1109f1f0);
          DAT_1109f1f0 = (char *)0x0;
          *puVar1 = 0;
          DAT_1109fe60 = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = __calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_1109f568);
            DAT_1109f568 = (undefined4 *)0x0;
            return -1;
          }
          eVar3 = _strcpy_s(_Dst,sVar2,pcVar4);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          puVar1 = puVar1 + 1;
        }
        pcVar4 = pcVar4 + sVar2;
      } while( true );
    }
  }
  return -1;
}


// ==== 1103f6e8 parse_cmdline

/* Library Function - Single Match
    _parse_cmdline
   
   Library: Visual Studio 2005 Release */

void __cdecl parse_cmdline(undefined4 *param_1,byte *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte *in_EDX;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *unaff_EDI;
  
  *unaff_EDI = 0;
  *param_3 = 1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  bVar2 = false;
  pbVar5 = param_2;
  do {
    if (*in_EDX == 0x22) {
      bVar2 = !bVar2;
      bVar6 = 0x22;
      pbVar7 = in_EDX + 1;
    }
    else {
      *unaff_EDI = *unaff_EDI + 1;
      if (pbVar5 != (byte *)0x0) {
        *pbVar5 = *in_EDX;
        param_2 = pbVar5 + 1;
      }
      bVar6 = *in_EDX;
      pbVar7 = in_EDX + 1;
      iVar3 = __ismbblead((uint)bVar6);
      if (iVar3 != 0) {
        *unaff_EDI = *unaff_EDI + 1;
        if (param_2 != (byte *)0x0) {
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        pbVar7 = in_EDX + 2;
      }
      pbVar5 = param_2;
      if (bVar6 == 0) {
        pbVar7 = pbVar7 + -1;
        goto LAB_1103f77a;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_1103f77a:
  bVar2 = false;
  while (*pbVar7 != 0) {
    for (; (*pbVar7 == 0x20 || (*pbVar7 == 9)); pbVar7 = pbVar7 + 1) {
    }
    if (*pbVar7 == 0) break;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = pbVar5;
      param_1 = param_1 + 1;
    }
    *param_3 = *param_3 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      for (; *pbVar7 == 0x5c; pbVar7 = pbVar7 + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*pbVar7 == 0x22) {
        pbVar8 = pbVar7;
        if (((uVar4 & 1) == 0) && ((!bVar2 || (pbVar8 = pbVar7 + 1, *pbVar8 != 0x22)))) {
          bVar1 = false;
          bVar2 = !bVar2;
          pbVar8 = pbVar7;
        }
        uVar4 = uVar4 >> 1;
        pbVar7 = pbVar8;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (pbVar5 != (byte *)0x0) {
          *pbVar5 = 0x5c;
          pbVar5 = pbVar5 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        param_2 = pbVar5;
      }
      bVar6 = *pbVar7;
      if ((bVar6 == 0) || ((!bVar2 && ((bVar6 == 0x20 || (bVar6 == 9)))))) break;
      if (bVar1) {
        if (pbVar5 == (byte *)0x0) {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
          }
        }
        else {
          iVar3 = __ismbblead((int)(char)bVar6);
          if (iVar3 != 0) {
            *param_2 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            *unaff_EDI = *unaff_EDI + 1;
            param_2 = param_2 + 1;
          }
          *param_2 = *pbVar7;
          param_2 = param_2 + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
        pbVar5 = param_2;
      }
      pbVar7 = pbVar7 + 1;
    }
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      param_2 = pbVar5;
    }
    *unaff_EDI = *unaff_EDI + 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  *param_3 = *param_3 + 1;
  return;
}


// ==== 1103f880 __setargv

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 2005 Release */

int __cdecl __setargv(void)

{
  uint _Size;
  uint uVar1;
  undefined4 *puVar2;
  uint local_10;
  uint local_c;
  char *local_8;
  
  if (DAT_1109fe78 == 0) {
    ___initmbctable();
  }
  DAT_1109f694 = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_1109f590,0x104);
  _DAT_1109f578 = &DAT_1109f590;
  if ((DAT_1109fe94 == (char *)0x0) || (local_8 = DAT_1109fe94, *DAT_1109fe94 == '\0')) {
    local_8 = &DAT_1109f590;
  }
  parse_cmdline((undefined4 *)0x0,(byte *)0x0,(int *)&local_c);
  uVar1 = local_c;
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    _Size = local_c * 4 + local_10;
    if ((local_10 <= _Size) && (puVar2 = __malloc_crt(_Size), puVar2 != (undefined4 *)0x0)) {
      parse_cmdline(puVar2,(byte *)(puVar2 + uVar1),(int *)&local_c);
      _DAT_1109f55c = local_c - 1;
      _DAT_1109f560 = puVar2;
      return 0;
    }
  }
  return -1;
}


// ==== 1103f939 ___crtGetEnvironmentStringsA

/* Library Function - Single Match
    ___crtGetEnvironmentStringsA
   
   Library: Visual Studio 2005 Release */

LPVOID __cdecl ___crtGetEnvironmentStringsA(void)

{
  char cVar1;
  WCHAR WVar2;
  DWORD DVar3;
  WCHAR *pWVar4;
  int iVar6;
  size_t _Size;
  LPSTR lpMultiByteStr;
  LPCH _Src;
  char *pcVar7;
  void *_Dst;
  LPWCH lpWideCharStr;
  LPSTR local_8;
  WCHAR *pWVar5;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  if (DAT_1109f698 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1109f698 = 1;
      goto LAB_1103f98b;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_1109f698 = 2;
    }
  }
  if (DAT_1109f698 != 1) {
    if ((DAT_1109f698 != 2) && (DAT_1109f698 != 0)) {
      return (LPVOID)0x0;
    }
    _Src = GetEnvironmentStrings();
    if (_Src == (LPCH)0x0) {
      return (LPVOID)0x0;
    }
    cVar1 = *_Src;
    pcVar7 = _Src;
    while (cVar1 != '\0') {
      do {
        pcVar8 = pcVar7;
        pcVar7 = pcVar8 + 1;
      } while (*pcVar7 != '\0');
      pcVar7 = pcVar8 + 2;
      cVar1 = *pcVar7;
    }
    _Dst = __malloc_crt((size_t)(pcVar7 + (1 - (int)_Src)));
    if (_Dst == (void *)0x0) {
      FreeEnvironmentStringsA(_Src);
      return (LPVOID)0x0;
    }
    _memcpy(_Dst,_Src,(size_t)(pcVar7 + (1 - (int)_Src)));
    FreeEnvironmentStringsA(_Src);
    return _Dst;
  }
LAB_1103f98b:
  if ((lpWideCharStr == (LPWCH)0x0) &&
     (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
    return (LPVOID)0x0;
  }
  WVar2 = *lpWideCharStr;
  pWVar4 = lpWideCharStr;
  while (WVar2 != L'\0') {
    do {
      pWVar5 = pWVar4;
      pWVar4 = pWVar5 + 1;
    } while (*pWVar4 != L'\0');
    pWVar4 = pWVar5 + 2;
    WVar2 = *pWVar4;
  }
  iVar6 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
  _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  local_8 = (LPSTR)0x0;
  if (((_Size != 0) && (lpMultiByteStr = __malloc_crt(_Size), lpMultiByteStr != (LPSTR)0x0)) &&
     (iVar6 = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,lpMultiByteStr,_Size,(LPCSTR)0x0,
                                  (LPBOOL)0x0), local_8 = lpMultiByteStr, iVar6 == 0)) {
    _free(lpMultiByteStr);
    local_8 = (LPSTR)0x0;
  }
  FreeEnvironmentStringsW(lpWideCharStr);
  return local_8;
}


// ==== 1103fa6e __RTC_Initialize

/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2005 Release */

void __RTC_Initialize(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_1107a260;
  do {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_1107a360);
  return;
}


// ==== 1103fab6 ___heap_select

/* Library Function - Single Match
    ___heap_select
   
   Library: Visual Studio 2005 Release */

undefined4 ___heap_select(void)

{
  int iVar1;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  iVar1 = __get_osplatform(&local_8);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  iVar1 = __get_winmajor(&local_c);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if ((local_8 == 2) && (4 < local_c)) {
    return 1;
  }
  return 3;
}


// ==== 1103fb11 __heap_init

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2005 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_1109f69c = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_1109f69c == (HANDLE)0x0) {
    return 0;
  }
  DAT_1109fcfc = ___heap_select();
  if ((DAT_1109fcfc == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_1109f69c);
    DAT_1109f69c = (HANDLE)0x0;
    return 0;
  }
  return 1;
}


// ==== 1103fb6b __heap_term

/* Library Function - Single Match
    __heap_term
   
   Library: Visual Studio 2005 Release */

void __cdecl __heap_term(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_1109fcfc == 3) {
    iVar2 = 0;
    if (0 < DAT_1109fcd0) {
      puVar1 = (undefined4 *)((int)DAT_1109fcd4 + 0x10);
      do {
        VirtualFree((LPVOID)puVar1[-1],0,0x8000);
        HeapFree(DAT_1109f69c,0,(LPVOID)*puVar1);
        puVar1 = puVar1 + 5;
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_1109fcd0);
    }
    HeapFree(DAT_1109f69c,0,DAT_1109fcd4);
  }
  HeapDestroy(DAT_1109f69c);
  DAT_1109f69c = (HANDLE)0x0;
  return;
}


// ==== 1103fbe5 FUN_1103fbe5

void FUN_1103fbe5(void)

{
  return;
}


// ==== 1103fc18 FUN_1103fc18

undefined4 __cdecl FUN_1103fc18(int param_1,DWORD param_2)

{
  int *piVar1;
  code *pcVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  pDVar5 = FUN_1103ceab();
  uVar7 = 0;
  if (pDVar5 != (DWORD *)0x0) {
    piVar1 = (int *)pDVar5[0x17];
    piVar6 = piVar1;
    do {
      if (*piVar6 == param_1) break;
      piVar6 = piVar6 + 3;
    } while (piVar6 < piVar1 + DAT_1109aec4 * 3);
    if ((piVar1 + DAT_1109aec4 * 3 <= piVar6) || (*piVar6 != param_1)) {
      piVar6 = (int *)0x0;
    }
    if ((piVar6 == (int *)0x0) || (pcVar2 = (code *)piVar6[2], pcVar2 == (code *)0x0)) {
      uVar7 = 0;
    }
    else if (pcVar2 == (code *)0x5) {
      piVar6[2] = 0;
      uVar7 = 1;
    }
    else {
      if (pcVar2 != (code *)0x1) {
        DVar3 = pDVar5[0x18];
        pDVar5[0x18] = param_2;
        if (piVar6[1] == 8) {
          if (DAT_1109aeb8 < DAT_1109aebc + DAT_1109aeb8) {
            iVar8 = DAT_1109aeb8 * 0xc;
            iVar9 = DAT_1109aeb8;
            do {
              *(undefined4 *)(iVar8 + 8 + pDVar5[0x17]) = 0;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar9 < DAT_1109aebc + DAT_1109aeb8);
          }
          iVar9 = *piVar6;
          DVar4 = pDVar5[0x19];
          if (iVar9 == -0x3fffff72) {
            pDVar5[0x19] = 0x83;
          }
          else if (iVar9 == -0x3fffff70) {
            pDVar5[0x19] = 0x81;
          }
          else if (iVar9 == -0x3fffff6f) {
            pDVar5[0x19] = 0x84;
          }
          else if (iVar9 == -0x3fffff6d) {
            pDVar5[0x19] = 0x85;
          }
          else if (iVar9 == -0x3fffff73) {
            pDVar5[0x19] = 0x82;
          }
          else if (iVar9 == -0x3fffff71) {
            pDVar5[0x19] = 0x86;
          }
          else if (iVar9 == -0x3fffff6e) {
            pDVar5[0x19] = 0x8a;
          }
          (*pcVar2)(8,pDVar5[0x19]);
          pDVar5[0x19] = DVar4;
        }
        else {
          piVar6[2] = 0;
          (*pcVar2)(piVar6[1]);
        }
        pDVar5[0x18] = DVar3;
      }
      uVar7 = 0xffffffff;
    }
  }
  return uVar7;
}


// ==== 1103fd91 ___security_init_cookie

/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2005 Release */

void __cdecl ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  local_c.dwLowDateTime = 0;
  local_c.dwHighDateTime = 0;
  if ((DAT_1109acf8 == 0xbb40e64e) || ((DAT_1109acf8 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_1109acf8 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_1109acf8 == 0xbb40e64e) {
      DAT_1109acf8 = 0xbb40e64f;
    }
    else if ((DAT_1109acf8 & 0xffff0000) == 0) {
      DAT_1109acf8 = DAT_1109acf8 | DAT_1109acf8 << 0x10;
    }
  }
  DAT_1109acfc = ~DAT_1109acf8;
  return;
}


// ==== 1103fe36 std::exception::exception

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &)
   
   Library: Visual Studio 2005 Release */

exception * __thiscall std::exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  char *_Dst;
  
  *(undefined ***)this = vftable;
  if (*param_1 == (char *)0x0) {
    *(undefined4 *)(this + 4) = 0;
  }
  else {
    sVar1 = _strlen(*param_1);
    _Dst = _malloc(sVar1 + 1);
    *(char **)(this + 4) = _Dst;
    if (_Dst != (char *)0x0) {
      _strcpy_s(_Dst,sVar1 + 1,*param_1);
    }
  }
  *(undefined4 *)(this + 8) = 1;
  return this;
}


// ==== 1103ff4a exception::~exception

/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall exception::~exception(exception *this)

{
  *(undefined ***)this = std::exception::vftable;
  if (*(int *)(this + 8) != 0) {
    _free(*(void **)(this + 4));
  }
  return;
}


// ==== 1103ff60 FUN_1103ff60

char * __fastcall FUN_1103ff60(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = s_Unknown_exception_110748c8;
  }
  return pcVar1;
}


// ==== 11040020 FUN_11040020

exception * __thiscall FUN_11040020(void *this,byte param_1)

{
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    thunk_FUN_11004bc0(this);
  }
  return this;
}


// ==== 1104003c FUN_1104003c

exception * __thiscall FUN_1104003c(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_cast::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    thunk_FUN_11004bc0(this);
  }
  return this;
}


// ==== 1104005e FUN_1104005e

exception * __thiscall FUN_1104005e(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_typeid::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    thunk_FUN_11004bc0(this);
  }
  return this;
}


// ==== 11040080 FUN_11040080

exception * __thiscall FUN_11040080(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_typeid::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    thunk_FUN_11004bc0(this);
  }
  return this;
}


// ==== 110400d5 __EH_prolog3_catch

/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    __EH_prolog3_catch
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __cdecl __EH_prolog3_catch(int param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_1;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1109acf8 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


// ==== 1104017a __EH_epilog3

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __EH_epilog3
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __EH_epilog3(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-3];
  *unaff_EBP = unaff_retaddr;
  return;
}


// ==== 110401ac _ValidateRead

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  return (uint)(param_1 != (void *)0x0);
}


// ==== 110401b9 FID_conflict:_ValidateExecute

/* Library Function - Multiple Matches With Different Base Names
    int __cdecl _ValidateExecute(int (__stdcall*)(void))
    int __cdecl _ValidateRead(void const *,unsigned int)
    int __cdecl _ValidateWrite(void *,unsigned int)
   
   Library: Visual Studio 2005 Release */

bool __cdecl FID_conflict__ValidateExecute(int param_1)

{
  return param_1 != 0;
}


// ==== 110401c6 FID_conflict:_ValidateExecute

/* Library Function - Multiple Matches With Different Base Names
    int __cdecl _ValidateExecute(int (__stdcall*)(void))
    int __cdecl _ValidateRead(void const *,unsigned int)
    int __cdecl _ValidateWrite(void *,unsigned int)
   
   Library: Visual Studio 2005 Release */

bool __cdecl FID_conflict__ValidateExecute(int param_1)

{
  return param_1 != 0;
}


// ==== 110401e0 _memmove

/* Library Function - Single Match
    _memmove
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2005 Release, Visual Studio 2008 Debug, Visual
   Studio 2008 Release */

void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar1 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar2 = _Size >> 2;
      uVar3 = _Size & 3;
      if (7 < uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = *puVar1;
          puVar1 = puVar1 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar3) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_110403c3_caseD_2;
        case 3:
          goto switchD_110403c3_caseD_3;
        }
        goto switchD_110403c3_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_110403c3_caseD_0;
      case 1:
        goto switchD_110403c3_caseD_1;
      case 2:
        goto switchD_110403c3_caseD_2;
      case 3:
        goto switchD_110403c3_caseD_3;
      default:
        uVar2 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          puVar1 = (undefined4 *)((int)puVar1 + -1);
          uVar2 = uVar2 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_110403c3_caseD_2;
            case 3:
              goto switchD_110403c3_caseD_3;
            }
            goto switchD_110403c3_caseD_1;
          }
          break;
        case 2:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          puVar1 = (undefined4 *)((int)puVar1 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_110403c3_caseD_2;
            case 3:
              goto switchD_110403c3_caseD_3;
            }
            goto switchD_110403c3_caseD_1;
          }
          break;
        case 3:
          uVar3 = uVar2 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
          uVar2 = uVar2 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
          puVar1 = (undefined4 *)((int)puVar1 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar2) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar4 = *puVar1;
              puVar1 = puVar1 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar3) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_110403c3_caseD_2;
            case 3:
              goto switchD_110403c3_caseD_3;
            }
            goto switchD_110403c3_caseD_1;
          }
        }
      }
    }
    switch(uVar2) {
    case 7:
      puVar4[7 - uVar2] = puVar1[7 - uVar2];
    case 6:
      puVar4[6 - uVar2] = puVar1[6 - uVar2];
    case 5:
      puVar4[5 - uVar2] = puVar1[5 - uVar2];
    case 4:
      puVar4[4 - uVar2] = puVar1[4 - uVar2];
    case 3:
      puVar4[3 - uVar2] = puVar1[3 - uVar2];
    case 2:
      puVar4[2 - uVar2] = puVar1[2 - uVar2];
    case 1:
      puVar4[1 - uVar2] = puVar1[1 - uVar2];
      puVar1 = puVar1 + -uVar2;
      puVar4 = puVar4 + -uVar2;
    }
    switch(uVar3) {
    case 1:
switchD_110403c3_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_110403c3_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_110403c3_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_110403c3_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_1109fe90 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
    puVar1 = __VEC_memcpy(_Dst,_Src,_Size);
    return puVar1;
  }
  puVar1 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar2 = _Size >> 2;
    uVar3 = _Size & 3;
    if (7 < uVar2) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar1 = *(undefined4 *)_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar1 = puVar1 + 1;
      }
      switch(uVar3) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_1104023c_caseD_2;
      case 3:
        goto switchD_1104023c_caseD_3;
      }
      goto switchD_1104023c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_1104023c_caseD_0;
    case 1:
      goto switchD_1104023c_caseD_1;
    case 2:
      goto switchD_1104023c_caseD_2;
    case 3:
      goto switchD_1104023c_caseD_3;
    default:
      uVar2 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 2) = *(undefined1 *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar1 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_1104023c_caseD_2;
          case 3:
            goto switchD_1104023c_caseD_3;
          }
          goto switchD_1104023c_caseD_1;
        }
        break;
      case 2:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        uVar2 = uVar2 >> 2;
        *(undefined1 *)((int)_Dst + 1) = *(undefined1 *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar1 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_1104023c_caseD_2;
          case 3:
            goto switchD_1104023c_caseD_3;
          }
          goto switchD_1104023c_caseD_1;
        }
        break;
      case 3:
        uVar3 = uVar2 & 3;
        *(undefined1 *)_Dst = *(undefined1 *)_Src;
        _Src = (void *)((int)_Src + 1);
        uVar2 = uVar2 >> 2;
        puVar1 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar2) {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar1 = *(undefined4 *)_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar1 = puVar1 + 1;
          }
          switch(uVar3) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_1104023c_caseD_2;
          case 3:
            goto switchD_1104023c_caseD_3;
          }
          goto switchD_1104023c_caseD_1;
        }
      }
    }
  }
  switch(uVar2) {
  case 7:
    puVar1[uVar2 - 7] = *(undefined4 *)((int)_Src + (uVar2 - 7) * 4);
  case 6:
    puVar1[uVar2 - 6] = *(undefined4 *)((int)_Src + (uVar2 - 6) * 4);
  case 5:
    puVar1[uVar2 - 5] = *(undefined4 *)((int)_Src + (uVar2 - 5) * 4);
  case 4:
    puVar1[uVar2 - 4] = *(undefined4 *)((int)_Src + (uVar2 - 4) * 4);
  case 3:
    puVar1[uVar2 - 3] = *(undefined4 *)((int)_Src + (uVar2 - 3) * 4);
  case 2:
    puVar1[uVar2 - 2] = *(undefined4 *)((int)_Src + (uVar2 - 2) * 4);
  case 1:
    puVar1[uVar2 - 1] = *(undefined4 *)((int)_Src + (uVar2 - 1) * 4);
    _Src = (void *)((int)_Src + uVar2 * 4);
    puVar1 = puVar1 + uVar2;
  }
  switch(uVar3) {
  case 1:
switchD_1104023c_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_1104023c_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_1104023c_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_1104023c_caseD_0:
  return _Dst;
}


// ==== 11040545 ___report_gsfailure

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_gsfailure
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___report_gsfailure(void)

{
  undefined4 in_EAX;
  HANDLE hProcess;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 unaff_retaddr;
  UINT uExitCode;
  undefined4 local_32c;
  undefined4 local_328;
  
  _DAT_1109f7b8 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_1109f7bc = &stack0x00000004;
  _DAT_1109f6f8 = 0x10001;
  _DAT_1109f6a0 = 0xc0000409;
  _DAT_1109f6a4 = 1;
  local_32c = DAT_1109acf8;
  local_328 = DAT_1109acfc;
  _DAT_1109f6ac = unaff_retaddr;
  _DAT_1109f784 = in_GS;
  _DAT_1109f788 = in_FS;
  _DAT_1109f78c = in_ES;
  _DAT_1109f790 = in_DS;
  _DAT_1109f794 = unaff_EDI;
  _DAT_1109f798 = unaff_ESI;
  _DAT_1109f79c = unaff_EBX;
  _DAT_1109f7a0 = in_EDX;
  _DAT_1109f7a4 = in_ECX;
  _DAT_1109f7a8 = in_EAX;
  _DAT_1109f7ac = unaff_EBP;
  DAT_1109f7b0 = unaff_retaddr;
  _DAT_1109f7b4 = in_CS;
  _DAT_1109f7c0 = in_SS;
  DAT_1109f6f0 = IsDebuggerPresent();
  FUN_1104aeb6();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_11074900);
  if (DAT_1109f6f0 == 0) {
    FUN_1104aeb6();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}


// ==== 11040649 __mtinitlocks

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_1109f9c8;
  do {
    if ((&DAT_1109af34)[iVar2 * 2] == 1) {
      (&DAT_1109af30)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount((&DAT_1109af30)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_1109af30)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}


// ==== 11040692 __mtdeletelocks

/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_1109af30;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x1109b050);
  puVar1 = &DAT_1109af30;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x1109b050);
  return;
}


// ==== 110406e7 FUN_110406e7

void __cdecl FUN_110406e7(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1109af30)[param_1 * 2]);
  return;
}


// ==== 11040714 __mtinitlocknum

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocknum(int _LockNum)

{
  int *piVar1;
  void *_Memory;
  undefined4 *puVar2;
  int iVar3;
  int local_20;
  
  iVar3 = 1;
  local_20 = 1;
  if (DAT_1109f69c == 0) {
    __FF_MSGBANNER();
    FUN_1103db87(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_1109af30 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (void *)0x0) {
      puVar2 = (undefined4 *)FUN_110491c7();
      *puVar2 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (iVar3 == 0) {
          _free(_Memory);
          puVar2 = (undefined4 *)FUN_110491c7();
          *puVar2 = 0xc;
          local_20 = 0;
        }
        else {
          *piVar1 = (int)_Memory;
        }
      }
      else {
        _free(_Memory);
      }
      FUN_110407ce();
      iVar3 = local_20;
    }
  }
  return iVar3;
}


// ==== 110407ce FUN_110407ce

void FUN_110407ce(void)

{
  FUN_110406e7(10);
  return;
}


// ==== 110407d7 __lock

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_1109af30)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_1109af30)[_File * 2]);
  return;
}


// ==== 11040814 ___freetlocinfo

/* Library Function - Single Match
    ___freetlocinfo
   
   Library: Visual Studio 2005 Release */

void __cdecl ___freetlocinfo(void *param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((((*(undefined ***)((int)param_1 + 0xbc) != (undefined **)0x0) &&
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_1109b958)) &&
      (*(int **)((int)param_1 + 0xb0) != (int *)0x0)) && (**(int **)((int)param_1 + 0xb0) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0xb8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_mon(*(int *)((int)param_1 + 0xbc));
    }
    piVar1 = *(int **)((int)param_1 + 0xb4);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      _free(piVar1);
      ___free_lconv_num(*(undefined4 **)((int)param_1 + 0xbc));
    }
    _free(*(void **)((int)param_1 + 0xb0));
    _free(*(void **)((int)param_1 + 0xbc));
  }
  if ((*(int **)((int)param_1 + 0xc0) != (int *)0x0) && (**(int **)((int)param_1 + 0xc0) == 0)) {
    _free((void *)(*(int *)((int)param_1 + 0xc4) + -0xfe));
    _free((void *)(*(int *)((int)param_1 + 0xcc) + -0x80));
    _free((void *)(*(int *)((int)param_1 + 0xd0) + -0x80));
    _free(*(void **)((int)param_1 + 0xc0));
  }
  ppuVar2 = *(undefined ***)((int)param_1 + 0xd4);
  if ((ppuVar2 != &PTR_DAT_1109b898) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x50);
  iVar3 = 6;
  do {
    if ((((undefined *)puVar4[-2] != &DAT_1109b058) &&
        (piVar1 = (int *)*puVar4, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      _free(piVar1);
    }
    if (((puVar4[-1] != 0) && (piVar1 = (int *)puVar4[1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      _free(piVar1);
    }
    puVar4 = puVar4 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  _free(param_1);
  return;
}


// ==== 11040954 ___addlocaleref

/* Library Function - Single Match
    ___addlocaleref
   
   Library: Visual Studio 2005 Release */

void __cdecl ___addlocaleref(LONG *param_1)

{
  LONG *pLVar1;
  int iVar2;
  
  InterlockedIncrement(param_1);
  if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2c]);
  }
  if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2e]);
  }
  if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x2d]);
  }
  if ((LONG *)param_1[0x30] != (LONG *)0x0) {
    InterlockedIncrement((LONG *)param_1[0x30]);
  }
  pLVar1 = param_1 + 0x14;
  iVar2 = 6;
  do {
    if (((undefined *)pLVar1[-2] != &DAT_1109b058) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)*pLVar1);
    }
    if ((pLVar1[-1] != 0) && ((LONG *)pLVar1[1] != (LONG *)0x0)) {
      InterlockedIncrement((LONG *)pLVar1[1]);
    }
    pLVar1 = pLVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  InterlockedIncrement((LONG *)(param_1[0x35] + 0xb4));
  return;
}


// ==== 110409da ___removelocaleref

/* Library Function - Single Match
    ___removelocaleref
   
   Library: Visual Studio 2005 Release */

LONG * __cdecl ___removelocaleref(LONG *param_1)

{
  LONG *pLVar1;
  int iVar2;
  
  if (param_1 != (LONG *)0x0) {
    InterlockedDecrement(param_1);
    if ((LONG *)param_1[0x2c] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2c]);
    }
    if ((LONG *)param_1[0x2e] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2e]);
    }
    if ((LONG *)param_1[0x2d] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x2d]);
    }
    if ((LONG *)param_1[0x30] != (LONG *)0x0) {
      InterlockedDecrement((LONG *)param_1[0x30]);
    }
    pLVar1 = param_1 + 0x14;
    iVar2 = 6;
    do {
      if (((undefined *)pLVar1[-2] != &DAT_1109b058) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)*pLVar1);
      }
      if ((pLVar1[-1] != 0) && ((LONG *)pLVar1[1] != (LONG *)0x0)) {
        InterlockedDecrement((LONG *)pLVar1[1]);
      }
      pLVar1 = pLVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    InterlockedDecrement((LONG *)(param_1[0x35] + 0xb4));
  }
  return param_1;
}


// ==== 11040a66 __copytlocinfo_nolock

/* Library Function - Single Match
    __copytlocinfo_nolock
   
   Library: Visual Studio 2005 Release */

void __fastcall __copytlocinfo_nolock(LONG *param_1)

{
  LONG *in_EAX;
  int iVar1;
  LONG *pLVar2;
  
  if (((param_1 != (LONG *)0x0) && (in_EAX != (LONG *)0x0)) && (in_EAX != param_1)) {
    pLVar2 = in_EAX;
    for (iVar1 = 0x36; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pLVar2 = *param_1;
      param_1 = param_1 + 1;
      pLVar2 = pLVar2 + 1;
    }
    *in_EAX = 0;
    ___addlocaleref(in_EAX);
  }
  return;
}


// ==== 11040a8a __updatetlocinfoEx_nolock

/* Library Function - Single Match
    __updatetlocinfoEx_nolock
   
   Library: Visual Studio 2005 Release */

LONG * __updatetlocinfoEx_nolock(void)

{
  LONG *pLVar1;
  undefined4 *in_EAX;
  LONG *unaff_EDI;
  
  if ((unaff_EDI != (LONG *)0x0) && (in_EAX != (undefined4 *)0x0)) {
    pLVar1 = (LONG *)*in_EAX;
    if (pLVar1 != unaff_EDI) {
      *in_EAX = unaff_EDI;
      ___addlocaleref(unaff_EDI);
      if (pLVar1 != (LONG *)0x0) {
        ___removelocaleref(pLVar1);
        if ((*pLVar1 == 0) && (pLVar1 != (LONG *)&DAT_1109b060)) {
          ___freetlocinfo(pLVar1);
        }
      }
    }
    return unaff_EDI;
  }
  return (LONG *)0x0;
}


// ==== 11040ac8 ___updatetlocinfo

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2005 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_1109b710) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_11040b32();
  }
  else {
    p_Var1 = __getptd();
    p_Var1 = (_ptiddata)p_Var1->ptlocinfo;
  }
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x20);
  }
  return (pthreadlocinfo)p_Var1;
}


// ==== 11040b32 FUN_11040b32

void FUN_11040b32(void)

{
  FUN_110406e7(0xc);
  return;
}


// ==== 11040d22 __strcats

/* Library Function - Single Match
    __strcats
   
   Library: Visual Studio 2005 Release */

void __cdecl __strcats(char *param_1,rsize_t param_2,int param_3)

{
  errno_t eVar1;
  int *piVar2;
  int iVar3;
  
  if (0 < param_3) {
    piVar2 = &param_3;
    iVar3 = param_3;
    do {
      piVar2 = piVar2 + 1;
      eVar1 = _strcat_s(param_1,param_2,(char *)*piVar2);
      if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


// ==== 11040d60 ___lc_strtolc

/* Library Function - Single Match
    ___lc_strtolc
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___lc_strtolc(char *param_1,char *param_2)

{
  char cVar1;
  errno_t eVar2;
  uint _MaxCount;
  char *_Dst;
  char *_Str;
  rsize_t _SizeInBytes;
  
  _Str = param_2;
  _memset(param_1,0,0x90);
  if (*param_2 != '\0') {
    if ((*param_2 != '.') || (param_2[1] == '\0')) {
      param_2 = (char *)0x0;
      _MaxCount = _strcspn(_Str,&DAT_11074a10);
      while( true ) {
        if (_MaxCount == 0) {
          return 0xffffffff;
        }
        cVar1 = _Str[_MaxCount];
        if (param_2 == (char *)0x0) {
          if (0x3f < _MaxCount) {
            return 0xffffffff;
          }
          if (cVar1 == '.') {
            return 0xffffffff;
          }
          _SizeInBytes = 0x40;
          _Dst = param_1;
        }
        else if (param_2 == (char *)0x1) {
          if (0x3f < _MaxCount) {
            return 0xffffffff;
          }
          if (cVar1 == '_') {
            return 0xffffffff;
          }
          _SizeInBytes = 0x40;
          _Dst = param_1 + 0x40;
        }
        else {
          if (param_2 != (char *)0x2) {
            return 0xffffffff;
          }
          if (0xf < _MaxCount) {
            return 0xffffffff;
          }
          if ((cVar1 != '\0') && (cVar1 != ',')) {
            return 0xffffffff;
          }
          _SizeInBytes = 0x10;
          _Dst = param_1 + 0x80;
        }
        eVar2 = _strncpy_s(_Dst,_SizeInBytes,_Str,_MaxCount);
        if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        if (cVar1 == ',') break;
        if (cVar1 == '\0') {
          return 0;
        }
        param_2 = param_2 + 1;
        _Str = _Str + _MaxCount + 1;
        _MaxCount = _strcspn(_Str,&DAT_11074a10);
      }
      return 0;
    }
    eVar2 = _strncpy_s(param_1 + 0x80,0x10,param_2 + 1,0xf);
    if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    param_1[0x8f] = '\0';
  }
  return 0;
}


// ==== 11040e89 ___lc_lctostr

/* Library Function - Single Match
    ___lc_lctostr
   
   Library: Visual Studio 2005 Release */

void __cdecl ___lc_lctostr(char *param_1,rsize_t param_2,char *param_3)

{
  errno_t eVar1;
  
  eVar1 = _strcpy_s(param_1,param_2,param_3);
  if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_3[0x40] != '\0') {
    __strcats(param_1,param_2,2);
  }
  if (param_3[0x80] != '\0') {
    __strcats(param_1,param_2,2);
  }
  return;
}


// ==== 11041965 FUN_11041965

undefined4 FUN_11041965(void)

{
  int in_EAX;
  
  if (in_EAX == 0x3a4) {
    return 0x411;
  }
  if (in_EAX == 0x3a8) {
    return 0x804;
  }
  if (in_EAX == 0x3b5) {
    return 0x412;
  }
  if (in_EAX != 0x3b6) {
    return 0;
  }
  return 0x404;
}


// ==== 11041994 setSBCS

/* Library Function - Single Match
    void __cdecl setSBCS(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2005 Release */

void __cdecl setSBCS(threadmbcinfostruct *param_1)

{
  int in_EAX;
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0x101;
  puVar1 = (undefined1 *)(in_EAX + 0x1c);
  _memset(puVar1,0,0x101);
  *(undefined4 *)(in_EAX + 4) = 0;
  *(undefined4 *)(in_EAX + 8) = 0;
  *(undefined4 *)(in_EAX + 0xc) = 0;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *(undefined4 *)(in_EAX + 0x14) = 0;
  *(undefined4 *)(in_EAX + 0x18) = 0;
  do {
    *puVar1 = puVar1[(int)&DAT_1109b148 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_1109b148 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


// ==== 110419e9 setSBUpLow

/* Library Function - Single Match
    void __cdecl setSBUpLow(struct threadmbcinfostruct *)
   
   Library: Visual Studio 2005 Release */

void __cdecl setSBUpLow(threadmbcinfostruct *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  BOOL BVar3;
  uint uVar4;
  CHAR CVar5;
  char cVar6;
  BYTE *pBVar7;
  int unaff_ESI;
  _cpinfo local_51c;
  WORD local_508 [52];
  undefined1 local_4a0 [408];
  CHAR local_308 [256];
  CHAR local_208 [256];
  CHAR local_108 [256];
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)local_4a0;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_11041b50:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_11041b50;
        }
        *pcVar2 = '\0';
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    do {
      local_108[uVar4] = (CHAR)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
    local_108[0] = ' ';
    if (local_51c.LeadByte[0] != 0) {
      pBVar7 = local_51c.LeadByte + 1;
      do {
        uVar4 = (uint)local_51c.LeadByte[0];
        if (uVar4 <= *pBVar7) {
          _memset(local_108 + uVar4,0x20,(*pBVar7 - uVar4) + 1);
        }
        local_51c.LeadByte[0] = pBVar7[1];
        pBVar7 = pBVar7 + 2;
      } while (local_51c.LeadByte[0] != 0);
    }
    ___crtGetStringTypeA
              ((_locale_t)0x0,1,local_108,0x100,local_508,*(int *)(unaff_ESI + 4),
               *(BOOL *)(unaff_ESI + 0xc));
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x100,local_108,0x100,local_208,
                       0x100,*(int *)(unaff_ESI + 4),0);
    ___crtLCMapStringA((_locale_t)0x0,*(LPCWSTR *)(unaff_ESI + 0xc),0x200,local_108,0x100,local_308,
                       0x100,*(int *)(unaff_ESI + 4),0);
    uVar4 = 0;
    do {
      if ((local_508[uVar4] & 1) == 0) {
        if ((local_508[uVar4] & 2) != 0) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          CVar5 = local_308[uVar4];
          goto LAB_11041af7;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_11041af7:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)local_4a0);
  return;
}


// ==== 11041b73 ___updatetmbcinfo

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetmbcinfo
   
   Library: Visual Studio 2005 Release */

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)

{
  _ptiddata p_Var1;
  LONG LVar2;
  pthreadmbcinfo lpAddend;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_1109b710) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_1109b570) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_1109b148)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_1109b570;
      lpAddend = (pthreadmbcinfo)PTR_DAT_1109b570;
      InterlockedIncrement((LONG *)PTR_DAT_1109b570);
    }
    FUN_11041c0e();
  }
  else {
    lpAddend = p_Var1->ptmbcinfo;
  }
  if (lpAddend == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return lpAddend;
}


// ==== 11041c0e FUN_11041c0e

void FUN_11041c0e(void)

{
  FUN_110406e7(0xd);
  return;
}


// ==== 11041c17 getSystemCP

/* Library Function - Single Match
    int __cdecl getSystemCP(int)
   
   Library: Visual Studio 2005 Release */

int __cdecl getSystemCP(int param_1)

{
  UINT UVar1;
  int unaff_ESI;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,(localeinfo_struct *)0x0);
  DAT_1109fb3c = 0;
  if (unaff_ESI == -2) {
    DAT_1109fb3c = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_1109fb3c = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 == '\0') {
        DAT_1109fb3c = 0;
        return unaff_ESI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_1109fb3c = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}


// ==== 11041c91 FUN_11041c91

void __cdecl FUN_11041c91(undefined4 param_1,int param_2)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  BOOL BVar6;
  undefined2 *puVar7;
  byte *pbVar8;
  undefined4 uVar9;
  int extraout_ECX;
  undefined2 *puVar10;
  int iVar11;
  undefined4 extraout_EDX;
  BYTE *pBVar12;
  threadmbcinfostruct *unaff_EDI;
  uint local_24;
  byte *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_11041ccd:
    if (*(uint *)((int)&DAT_1109b578 + uVar5) != uVar4) goto code_r0x11041cd9;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar8 = &DAT_1109b588 + (int)local_20 * 0x30;
    local_20 = pbVar8;
    do {
      for (; (*pbVar8 != 0 && (bVar3 = pbVar8[1], bVar3 != 0)); pbVar8 = pbVar8 + 2) {
        for (uVar5 = (uint)*pbVar8; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x1109b574);
          bVar3 = pbVar8[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar8 = local_20 + 8;
      local_20 = pbVar8;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    uVar9 = FUN_11041965();
    *(undefined4 *)(param_2 + 0xc) = uVar9;
    puVar7 = (undefined2 *)(param_2 + 0x10);
    puVar10 = (undefined2 *)(&DAT_1109b57c + extraout_ECX);
    iVar11 = 6;
    do {
      *puVar7 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar7 = puVar7 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_11041dfe;
  }
LAB_11041cba:
  setSBCS(unaff_EDI);
LAB_11041e5b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x11041cd9:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x11041ce6;
  goto LAB_11041ccd;
code_r0x11041ce6:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_11041e5b;
  BVar6 = GetCPInfo(uVar4,&local_1c);
  if (BVar6 != 0) {
    _memset((void *)(param_2 + 0x1c),0,0x101);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 0;
    if (local_1c.MaxCharSize < 2) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else {
      if (local_1c.LeadByte[0] != '\0') {
        pBVar12 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar12;
          if (bVar3 == 0) break;
          for (uVar4 = (uint)pBVar12[-1]; uVar4 <= bVar3; uVar4 = uVar4 + 1) {
            pbVar8 = (byte *)(param_2 + 0x1d + uVar4);
            *pbVar8 = *pbVar8 | 4;
          }
          pBVar1 = pBVar12 + 1;
          pBVar12 = pBVar12 + 2;
        } while (*pBVar1 != 0);
      }
      pbVar8 = (byte *)(param_2 + 0x1e);
      iVar11 = 0xfe;
      do {
        *pbVar8 = *pbVar8 | 8;
        pbVar8 = pbVar8 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      uVar9 = FUN_11041965();
      *(undefined4 *)(param_2 + 0xc) = uVar9;
      *(undefined4 *)(param_2 + 8) = extraout_EDX;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_11041dfe:
    setSBUpLow(unaff_EDI);
    goto LAB_11041e5b;
  }
  if (DAT_1109fb3c == 0) goto LAB_11041e5b;
  goto LAB_11041cba;
}


// ==== 11041e6a __getmbcp

/* Library Function - Single Match
    __getmbcp
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __getmbcp(void)

{
  int iVar1;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,(localeinfo_struct *)0x0);
  if (*(int *)(local_10 + 8) == 0) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(local_10 + 4);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return iVar1;
    }
  }
  return iVar1;
}


// ==== 11041ea6 __setmbcp

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setmbcp
   
   Library: Visual Studio 2005 Release */

int __cdecl __setmbcp(int _CodePage)

{
  _ptiddata p_Var1;
  int iVar2;
  pthreadmbcinfo ptVar3;
  LONG LVar4;
  undefined4 *puVar5;
  int iVar6;
  pthreadmbcinfo ptVar7;
  pthreadmbcinfo ptVar8;
  int in_stack_ffffffc8;
  int local_24;
  
  local_24 = -1;
  p_Var1 = __getptd();
  ___updatetmbcinfo();
  ptVar3 = p_Var1->ptmbcinfo;
  iVar2 = getSystemCP(in_stack_ffffffc8);
  if (iVar2 == ptVar3->mbcodepage) {
    local_24 = 0;
  }
  else {
    ptVar3 = __malloc_crt(0x220);
    if (ptVar3 != (pthreadmbcinfo)0x0) {
      ptVar7 = p_Var1->ptmbcinfo;
      ptVar8 = ptVar3;
      for (iVar6 = 0x88; iVar6 != 0; iVar6 = iVar6 + -1) {
        ptVar8->refcount = ptVar7->refcount;
        ptVar7 = (pthreadmbcinfo)&ptVar7->mbcodepage;
        ptVar8 = (pthreadmbcinfo)&ptVar8->mbcodepage;
      }
      ptVar3->refcount = 0;
      local_24 = FUN_11041c91(iVar2,(int)ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_1109b148)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement(&ptVar3->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_1109b710 & 1) == 0)) {
          __lock(0xd);
          _DAT_1109fb4c = ptVar3->mbcodepage;
          _DAT_1109fb50 = ptVar3->ismbcodepage;
          _DAT_1109fb54 = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_1109fb40)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_1109b368)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_1109b470)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_1109b570);
          if ((LVar4 == 0) && (PTR_DAT_1109b570 != &DAT_1109b148)) {
            _free(PTR_DAT_1109b570);
          }
          PTR_DAT_1109b570 = (undefined *)ptVar3;
          InterlockedIncrement(&ptVar3->refcount);
          FUN_11042007();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_1109b148) {
          _free(ptVar3);
        }
        puVar5 = (undefined4 *)FUN_110491c7();
        *puVar5 = 0x16;
      }
    }
  }
  return local_24;
}


// ==== 11042007 FUN_11042007

void FUN_11042007(void)

{
  FUN_110406e7(0xd);
  return;
}


// ==== 11042040 ___initmbctable

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2005 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_1109fe78 == 0) {
    __setmbcp(-3);
    DAT_1109fe78 = 1;
  }
  return 0;
}


// ==== 11042060 __global_unwind2

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x11042078,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


// ==== 110420c5 __local_unwind2

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind2(int param_1,uint param_2)

{
  uint uVar1;
  void *local_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  int iStack_14;
  
  iStack_14 = param_1;
  puStack_1c = &LAB_11042080;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_11042194();
    }
  }
  ExceptionList = local_20;
  return;
}


// ==== 1104216c __NLG_Notify1

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1109b670 = param_1;
  DAT_1109b66c = in_EAX;
  DAT_1109b674 = unaff_EBP;
  return in_EAX;
}


// ==== 11042175 __NLG_Notify

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1109b670 = param_1;
  DAT_1109b66c = in_EAX;
  DAT_1109b674 = unaff_EBP;
  return;
}


// ==== 11042194 FUN_11042194

void FUN_11042194(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}


// ==== 11042197 FUN_11042197

void __cdecl FUN_11042197(undefined4 param_1)

{
  DAT_1109fb58 = param_1;
  return;
}


// ==== 110421a1 __invoke_watson

/* Library Function - Single Match
    __invoke_watson
   
   Library: Visual Studio 2005 Release */

void __cdecl
__invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  int iVar1;
  BOOL BVar2;
  LONG LVar3;
  HANDLE hProcess;
  UINT uExitCode;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  iVar1 = DAT_1109acf8;
  local_2d4 = 0x10001;
  _memset(&local_32c,0,0x50);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
  local_32c.ExceptionCode = 0xc000000d;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_1104aeb6();
  }
  uExitCode = 0xc000000d;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  __security_check_cookie(iVar1);
  return;
}


// ==== 110422cc FUN_110422cc

void __cdecl
FUN_110422cc(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}


// ==== 110422d5 FUN_110422d5

void __cdecl
FUN_110422d5(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_1103ccd2(DAT_1109fb58);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x110422e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_1104aeb6();
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}


// ==== 11042309 FUN_11042309

void __cdecl
FUN_11042309(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  FUN_110422d5(param_1,param_2,param_3,param_4,param_5);
  return;
}


// ==== 11042312 _strcpy_s

/* Library Function - Single Match
    _strcpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    pcVar3 = _Dst;
    if (_Src != (char *)0x0) {
      do {
        cVar1 = *_Src;
        *pcVar3 = cVar1;
        _Src = _Src + 1;
        if (cVar1 == '\0') break;
        _SizeInBytes = _SizeInBytes - 1;
        pcVar3 = pcVar3 + 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        return 0;
      }
      *_Dst = '\0';
      puVar2 = (undefined4 *)FUN_110491c7();
      eVar4 = 0x22;
      *puVar2 = 0x22;
      goto LAB_11042331;
    }
    *_Dst = '\0';
  }
  puVar2 = (undefined4 *)FUN_110491c7();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_11042331:
  FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}


// ==== 11042380 _strlen

/* Library Function - Single Match
    _strlen
   
   Library: Visual Studio */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_110423b0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_110423e3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_110423b0:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_110423e3;
}


// ==== 1104242c HeapManager::Destructor

/* Library Function - Single Match
    public: void __thiscall HeapManager::Destructor(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall HeapManager::Destructor(HeapManager *this)

{
  if (*(int *)(this + 4) != 0) {
    while (*(int *)(this + 0xc) = *(int *)(this + 8), *(int *)(this + 8) != 0) {
      *(undefined4 *)(this + 8) = **(undefined4 **)(this + 0xc);
      (**(code **)(this + 4))(*(undefined4 *)(this + 0xc));
    }
  }
  return;
}


// ==== 11042452 UnDecorator::getNumberOfDimensions

/* Library Function - Single Match
    private: static int __cdecl UnDecorator::getNumberOfDimensions(void)
   
   Library: Visual Studio 2005 Release */

int __cdecl UnDecorator::getNumberOfDimensions(void)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *DAT_1109fb7c;
  if (cVar2 != '\0') {
    if (('/' < cVar2) && (cVar2 < ':')) {
      DAT_1109fb7c = DAT_1109fb7c + 1;
      return cVar2 + -0x2f;
    }
    iVar1 = 0;
LAB_1104249e:
    if (cVar2 == '@') {
      cVar2 = *DAT_1109fb7c;
      DAT_1109fb7c = DAT_1109fb7c + 1;
      if (cVar2 != '@') {
LAB_110424b1:
        iVar1 = -1;
      }
      return iVar1;
    }
    if (cVar2 != '\0') {
      if ((cVar2 < 'A') || ('P' < cVar2)) goto LAB_110424b1;
      DAT_1109fb7c = DAT_1109fb7c + 1;
      iVar1 = iVar1 * 0x10 + -0x41 + (int)cVar2;
      cVar2 = *DAT_1109fb7c;
      goto LAB_1104249e;
    }
  }
  return 0;
}


// ==== 110424b5 UnDecorator::getTypeEncoding

/* WARNING: Removing unreachable block (ram,0x1104285f) */
/* WARNING: Removing unreachable block (ram,0x110426ff) */
/* WARNING: Removing unreachable block (ram,0x11042874) */
/* WARNING: Removing unreachable block (ram,0x11042825) */
/* WARNING: Removing unreachable block (ram,0x110427eb) */
/* WARNING: Removing unreachable block (ram,0x11042800) */
/* WARNING: Removing unreachable block (ram,0x1104283a) */
/* Library Function - Single Match
    private: static int __cdecl UnDecorator::getTypeEncoding(void)
   
   Library: Visual Studio 2005 Release */

int __cdecl UnDecorator::getTypeEncoding(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  
  do {
    uVar3 = 0;
    if (*DAT_1109fb7c == '_') {
      DAT_1109fb7c = DAT_1109fb7c + 1;
      uVar3 = 0x4000;
    }
    cVar1 = *DAT_1109fb7c;
    if (('@' < cVar1) && (cVar1 < '[')) {
      uVar7 = (int)*DAT_1109fb7c - 0x41;
      DAT_1109fb7c = DAT_1109fb7c + 1;
      if ((uVar7 & 1) == 0) {
        uVar3 = uVar3 | 0x8000;
      }
      else {
        uVar3 = uVar3 | 0xa000;
      }
      if (0x17 < (int)uVar7) {
        return uVar3;
      }
      if ((uVar3 & 0x8000) == 0) {
        uVar3 = uVar3 & 0xffff9fff;
      }
      else {
        uVar3 = uVar3 | 0x800;
      }
      uVar6 = uVar7 & 0x18;
      if (uVar6 == 0) {
        if ((uVar3 & 0x8000) == 0) {
          uVar3 = uVar3 | 0x800;
        }
        else {
          uVar3 = uVar3 | 0x40;
        }
      }
      else if (uVar6 == 8) {
        if ((uVar3 & 0x8000) == 0) {
          uVar3 = uVar3 & 0xfffff7ff | 0x1000;
        }
        else {
          uVar3 = uVar3 | 0x80;
        }
      }
      else {
        if (uVar6 != 0x10) {
          return 0xffff;
        }
        if ((uVar3 & 0x8000) == 0) {
          uVar3 = uVar3 & 0xffffe7ff;
        }
      }
      uVar7 = uVar7 & 6;
      if (uVar7 != 0) {
        if (uVar7 == 2) {
          if ((uVar3 & 0x8000) == 0) {
            return uVar3 & 0xffff9fff;
          }
          return uVar3 | 0x200;
        }
        if (uVar7 != 4) {
          if (uVar7 != 6) {
            return 0xffff;
          }
          return uVar3 | 0x400;
        }
        return uVar3 | 0x100;
      }
      return uVar3;
    }
    if (cVar1 != '$') {
      cVar1 = *DAT_1109fb7c;
      if (('/' < cVar1) && (cVar1 < '9')) {
        DAT_1109fb7c = DAT_1109fb7c + 1;
        switch(cVar1) {
        case '0':
          return 0x800;
        case '1':
          return 0x1000;
        case '2':
          return 0;
        case '3':
          return 0x4000;
        case '4':
          return 0x2000;
        case '5':
          return 0x6000;
        case '6':
          return 0x6800;
        case '7':
          return 0x7000;
        case '8':
          return 0x7800;
        default:
          return 0xffff;
        }
      }
      if (cVar1 != '9') {
        return (cVar1 != '\0') + 0xfffe;
      }
      DAT_1109fb7c = DAT_1109fb7c + 1;
      return 0xfffd;
    }
    bVar2 = false;
    pcVar4 = DAT_1109fb7c + 1;
    cVar1 = *pcVar4;
    if ('B' < cVar1) {
      if (cVar1 == 'C') {
        uVar3 = 0x7c00;
      }
      else if (cVar1 == 'D') {
        uVar3 = uVar3 | 0x9100;
      }
      else if (cVar1 == 'E') {
        uVar3 = uVar3 | 0x9200;
      }
      else {
        if (cVar1 != 'R') {
          DAT_1109fb7c = pcVar4;
          return 0xffff;
        }
        pcVar4 = DAT_1109fb7c + 2;
        bVar2 = true;
LAB_110426de:
        if (bVar2) {
          uVar3 = uVar3 | 0x8e00;
        }
        else {
          uVar3 = uVar3 | 0x8d00;
        }
        if (((int)*pcVar4 - 0x30U & 1) != 0) {
          uVar3 = uVar3 | 0x2000;
        }
        uVar7 = (int)*pcVar4 - 0x30U & 6;
        if (uVar7 == 0) {
          if ((uVar3 & 0x8000) == 0) {
            uVar3 = uVar3 | 0x800;
          }
          else {
            uVar3 = uVar3 | 0x40;
          }
        }
        else if (uVar7 == 2) {
          if ((uVar3 & 0x8000) == 0) {
            uVar3 = uVar3 & 0xfffff7ff | 0x1000;
          }
          else {
            uVar3 = uVar3 | 0x80;
          }
        }
        else {
          if (uVar7 != 4) {
            DAT_1109fb7c = pcVar4;
            return 0xffff;
          }
          if ((uVar3 & 0x8000) == 0) {
            uVar3 = uVar3 & 0xffffe7ff;
          }
        }
      }
      goto switchD_1104253c_caseD_47;
    }
    if (cVar1 == 'B') {
      uVar3 = uVar3 | 0x9800;
      goto switchD_1104253c_caseD_47;
    }
    if (cVar1 == '\0') {
      uVar3 = 0xfffe;
      goto switchD_1104253c_caseD_47;
    }
    if (cVar1 != '$') {
      if (cVar1 < '0') {
        DAT_1109fb7c = pcVar4;
        return 0xffff;
      }
      if (cVar1 < '6') goto LAB_110426de;
      if (cVar1 != 'A') {
        DAT_1109fb7c = pcVar4;
        return 0xffff;
      }
      uVar3 = uVar3 | 0x9000;
switchD_1104253c_caseD_47:
      DAT_1109fb7c = pcVar4 + 1;
      return uVar3;
    }
    pcVar5 = pcVar4;
    if (DAT_1109fb7c[2] == 'P') {
      pcVar5 = DAT_1109fb7c + 2;
    }
    pcVar4 = pcVar5 + 1;
    switch(*pcVar4) {
    case 'F':
    case 'H':
    case 'L':
    case 'M':
    case 'Q':
      DAT_1109fb7c = pcVar5 + 2;
      break;
    default:
      goto switchD_1104253c_caseD_47;
    case 'J':
    case 'N':
    case 'O':
      pcVar4 = pcVar5 + 2;
      cVar1 = *pcVar4;
      if (('/' < cVar1) && (cVar1 < ':')) {
        DAT_1109fb7c = pcVar5 + cVar1 + -0x2d;
        uVar3 = getTypeEncoding();
        return uVar3 | 0x10000;
      }
      uVar3 = 0xffff;
      goto switchD_1104253c_caseD_47;
    }
  } while( true );
}


// ==== 110429fd UnDecorator::UScore

/* Library Function - Single Match
    public: static char const * __cdecl UnDecorator::UScore(enum Tokens)
   
   Library: Visual Studio 2005 Release */

char * __cdecl UnDecorator::UScore(Tokens param_1)

{
  char *pcVar1;
  
  pcVar1 = (&PTR_s___based__11074fc8)[param_1];
  if ((~DAT_1109fb8c & 1) == 0) {
    pcVar1 = pcVar1 + 2;
  }
  return pcVar1;
}


// ==== 11042a16 HeapManager::getMemory

/* Library Function - Single Match
    public: void * __thiscall HeapManager::getMemory(unsigned int,int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall HeapManager::getMemory(HeapManager *this,uint param_1,int param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = param_1 + 7 & 0xfffffff8;
  if (param_2 != 0) {
    pvVar1 = (void *)(**(code **)this)(uVar3);
    return pvVar1;
  }
  if (uVar3 == 0) {
    uVar3 = 8;
  }
  if (*(uint *)(this + 0x10) < uVar3) {
    if (uVar3 < 0x1001) {
      puVar2 = getMemory((HeapManager *)&DAT_1109fb5c,0x1004,1);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = 0;
      }
      if (puVar2 != (undefined4 *)0x0) {
        if (*(undefined4 **)(this + 0xc) == (undefined4 *)0x0) {
          *(undefined4 **)(this + 8) = puVar2;
        }
        else {
          **(undefined4 **)(this + 0xc) = puVar2;
        }
        *(undefined4 **)(this + 0xc) = puVar2;
        *(uint *)(this + 0x10) = 0x1000 - uVar3;
        goto LAB_11042a8a;
      }
    }
    pvVar1 = (void *)0x0;
  }
  else {
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) - uVar3;
LAB_11042a8a:
    pvVar1 = (void *)(*(int *)(this + 0xc) + 4 + *(int *)(this + 0x10));
  }
  return pvVar1;
}


// ==== 11042ab9 DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(class DName const &)
   
   Library: Visual Studio 2005 Release */

void __thiscall DName::DName(DName *this,DName *param_1)

{
  uint uVar1;
  
  *(uint *)(this + 4) =
       *(uint *)(this + 4) ^ ((*(int *)(param_1 + 4) << 0x1c) >> 0x1c ^ *(uint *)(this + 4)) & 0xf;
  uVar1 = (*(uint *)(param_1 + 4) ^ *(uint *)(this + 4)) & 0x10 ^ *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 4) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(this + 4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 4) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(this + 4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 4) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(this + 4) = uVar1;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(uint *)(this + 4) = *(uint *)(this + 4) ^ (uVar1 ^ *(uint *)(param_1 + 4)) & 0x100;
  uVar1 = (*(uint *)(param_1 + 4) ^ *(uint *)(this + 4)) & 0x200 ^ *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 4) ^ uVar1) & 0x400 ^ uVar1;
  *(uint *)(this + 4) = uVar1;
  *(uint *)(this + 4) = (*(uint *)(param_1 + 4) ^ uVar1) & 0x800 ^ uVar1;
  return;
}


// ==== 11042bcf DName::operator=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator=(DName *this,DName *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 4);
  iVar1 = (int)(uVar2 << 0x1c) >> 0x1c;
  if ((iVar1 == 0) || (iVar1 == 2)) {
    uVar2 = ((*(int *)(param_1 + 4) << 0x1c) >> 0x1c ^ uVar2) & 0xf ^ uVar2;
    *(uint *)(this + 4) = uVar2;
    uVar2 = (*(uint *)(param_1 + 4) ^ uVar2) & 0x10 ^ uVar2;
    *(uint *)(this + 4) = uVar2;
    uVar2 = (*(uint *)(param_1 + 4) ^ uVar2) & 0x20 ^ uVar2;
    *(uint *)(this + 4) = uVar2;
    uVar2 = (*(uint *)(param_1 + 4) ^ uVar2) & 0x40 ^ uVar2;
    *(uint *)(this + 4) = uVar2;
    uVar2 = (*(uint *)(param_1 + 4) ^ uVar2) & 0x80 ^ uVar2;
    *(uint *)(this + 4) = uVar2;
    *(uint *)(this + 4) = (*(uint *)(param_1 + 4) ^ uVar2) & 0x800 ^ uVar2;
    *(undefined4 *)this = *(undefined4 *)param_1;
  }
  return this;
}


// ==== 11042c53 Replicator::operator[]

/* Library Function - Single Match
    public: class DName const & __thiscall Replicator::operator[](int)const 
   
   Library: Visual Studio 2005 Release */

DName * __thiscall Replicator::operator[](Replicator *this,int param_1)

{
  DName *pDVar1;
  
  if ((uint)param_1 < 10) {
    if ((*(int *)this == -1) || (*(int *)this < param_1)) {
      pDVar1 = (DName *)(this + 0x34);
    }
    else {
      pDVar1 = *(DName **)(this + param_1 * 4 + 4);
    }
  }
  else {
    pDVar1 = (DName *)(this + 0x2c);
  }
  return pDVar1;
}


// ==== 11042c89 DNameNode::operator+=

/* Library Function - Single Match
    public: class DNameNode & __thiscall DNameNode::operator+=(class DNameNode *)
   
   Library: Visual Studio 2005 Release */

DNameNode * __thiscall DNameNode::operator+=(DNameNode *this,DNameNode *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (DNameNode *)0x0) {
    iVar1 = *(int *)(this + 4);
    if (*(int *)(this + 4) == 0) {
      *(DNameNode **)(this + 4) = param_1;
    }
    else {
      do {
        iVar2 = iVar1;
        iVar1 = *(int *)(iVar2 + 4);
      } while (iVar1 != 0);
      *(DNameNode **)(iVar2 + 4) = param_1;
    }
  }
  return this;
}


// ==== 11042cc8 FUN_11042cc8

undefined4 FUN_11042cc8(void)

{
  return 1;
}


// ==== 11042ccc FUN_11042ccc

undefined1 __fastcall FUN_11042ccc(int param_1)

{
  return *(undefined1 *)(param_1 + 8);
}


// ==== 11042cd0 FUN_11042cd0

undefined1 * __thiscall FUN_11042cd0(void *this,undefined1 *param_1,int param_2)

{
  if ((param_1 == (undefined1 *)0x0) || (param_2 == 0)) {
    param_1 = (undefined1 *)0x0;
  }
  else {
    *param_1 = *(undefined1 *)((int)this + 8);
  }
  return param_1;
}


// ==== 11042ceb FUN_11042ceb

undefined4 __fastcall FUN_11042ceb(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ==== 11042cef pDNameNode::pDNameNode

/* Library Function - Single Match
    public: __thiscall pDNameNode::pDNameNode(class DName *)
   
   Library: Visual Studio 2005 Release */

void __thiscall pDNameNode::pDNameNode(pDNameNode *this,DName *param_1)

{
  int iVar1;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = vftable;
  if ((param_1 != (DName *)0x0) &&
     ((iVar1 = (*(int *)(param_1 + 4) << 0x1c) >> 0x1c, iVar1 == 1 || (iVar1 == 3)))) {
    param_1 = (DName *)0x0;
  }
  *(DName **)(this + 8) = param_1;
  return;
}


// ==== 11042d1e DNameStatusNode::DNameStatusNode

/* Library Function - Single Match
    public: __thiscall DNameStatusNode::DNameStatusNode(enum DNameStatus)
   
   Library: Visual Studio 2005 Release */

void __thiscall DNameStatusNode::DNameStatusNode(DNameStatusNode *this,DNameStatus param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = vftable;
  *(DNameStatus *)(this + 8) = param_1;
  if (param_1 == 2) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}


// ==== 11042d43 FUN_11042d43

undefined4 __fastcall FUN_11042d43(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ==== 11042d47 FUN_11042d47

byte __fastcall FUN_11042d47(int param_1)

{
  return (*(int *)(param_1 + 8) != 2) - 1U & 0x20;
}


// ==== 11042d62 und_strncpy

/* Library Function - Single Match
    char * __cdecl und_strncpy(char *,char const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

char * __cdecl und_strncpy(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  char *in_EDX;
  
  pcVar2 = param_1;
  for (; (param_2 != (char *)0x0 && (cVar1 = *in_EDX, *pcVar2 = cVar1, cVar1 != '\0'));
      in_EDX = in_EDX + 1) {
    pcVar2 = pcVar2 + 1;
    param_2 = param_2 + -1;
  }
  return param_1;
}


// ==== 11042da7 UnDecorator::getDataIndirectType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataIndirectType(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getDataIndirectType(void)

{
  DName *in_stack_00000004;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = local_8 & 0xfffff000;
  local_10 = local_10 & 0xfffff000;
  local_c = 0;
  local_14 = 0;
  getDataIndirectType(in_stack_00000004,(char)&local_14,(DName *)0x0,(int)&local_c);
  return in_stack_00000004;
}


// ==== 11042dda UnDecorator::getThisType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getThisType(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getThisType(void)

{
  DName *in_stack_00000004;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = local_8 & 0xfffff000;
  local_10 = local_10 & 0xfffff000;
  local_c = 0;
  local_14 = 0;
  getDataIndirectType(in_stack_00000004,(char)&local_14,(DName *)0x0,(int)&local_c);
  return in_stack_00000004;
}


// ==== 11042e21 DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(class DName *)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::DName(DName *this,DName *param_1)

{
  pDNameNode *this_00;
  int iVar1;
  
  if (param_1 == (DName *)0x0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff0;
    *(undefined4 *)this = 0;
  }
  else {
    this_00 = HeapManager::getMemory((HeapManager *)&DAT_1109fb5c,0xc,0);
    if (this_00 == (pDNameNode *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = pDNameNode::pDNameNode(this_00,param_1);
    }
    *(int *)this = iVar1;
    *(uint *)(this + 4) =
         *(uint *)(this + 4) ^ ((-(uint)(iVar1 != 0) & 0xfffffffd) + 3 ^ *(uint *)(this + 4)) & 0xf;
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff00f;
  return this;
}


// ==== 11042e77 DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(enum DNameStatus)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::DName(DName *this,DNameStatus param_1)

{
  DNameStatus DVar1;
  DNameStatusNode *this_00;
  int iVar2;
  
  DVar1 = param_1;
  if ((param_1 != 1) && (param_1 != 3)) {
    DVar1 = 0;
  }
  *(DNameStatus *)(this + 4) =
       *(DNameStatus *)(this + 4) ^ (*(DNameStatus *)(this + 4) ^ DVar1) & 0xf;
  this_00 = HeapManager::getMemory((HeapManager *)&DAT_1109fb5c,0x10,0);
  if (this_00 == (DNameStatusNode *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DNameStatusNode::DNameStatusNode(this_00,param_1);
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff00f;
  *(int *)this = iVar2;
  if (iVar2 == 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
  }
  return this;
}


// ==== 11042ed8 DName::isValid

/* Library Function - Single Match
    public: int __thiscall DName::isValid(void)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall DName::isValid(DName *this)

{
  int iVar1;
  
  iVar1 = (*(int *)(this + 4) << 0x1c) >> 0x1c;
  if ((iVar1 != 0) && (iVar1 != 2)) {
    return 0;
  }
  return 1;
}


// ==== 11042eef DName::isEmpty

/* Library Function - Single Match
    public: int __thiscall DName::isEmpty(void)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall DName::isEmpty(DName *this)

{
  int iVar1;
  
  if (*(int *)this != 0) {
    iVar1 = isValid(this);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}


// ==== 11042f04 DName::isUDC

/* Library Function - Single Match
    public: int __thiscall DName::isUDC(void)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall DName::isUDC(DName *this)

{
  int iVar1;
  int extraout_ECX;
  
  iVar1 = isEmpty(this);
  if ((iVar1 == 0) && ((*(byte *)(extraout_ECX + 4) & 0x20) != 0)) {
    return 1;
  }
  return 0;
}


// ==== 11042f3a DName::length

/* Library Function - Single Match
    public: int __thiscall DName::length(void)const 
   
   Library: Visual Studio 2005 Release */

int __thiscall DName::length(DName *this)

{
  int iVar1;
  undefined4 *extraout_ECX;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = isEmpty(this);
  if (iVar1 == 0) {
    for (puVar2 = (undefined4 *)*extraout_ECX; puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[1]) {
      iVar1 = (**(code **)*puVar2)();
      iVar3 = iVar3 + iVar1;
    }
  }
  return iVar3;
}


// ==== 11042f5f DName::getLastChar

/* Library Function - Single Match
    public: char __thiscall DName::getLastChar(void)const 
   
   Library: Visual Studio 2005 Release */

char __thiscall DName::getLastChar(DName *this)

{
  char cVar1;
  int iVar2;
  int *extraout_ECX;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)0x0;
  iVar2 = isEmpty(this);
  if ((iVar2 == 0) && (piVar3 = (int *)*extraout_ECX, piVar3 != (int *)0x0)) {
    do {
      iVar2 = (**(code **)*piVar3)();
      if (iVar2 != 0) {
        piVar4 = piVar3;
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    if (piVar4 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x11042f8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      cVar1 = (**(code **)(*piVar4 + 4))();
      return cVar1;
    }
  }
  return '\0';
}


// ==== 11042f97 DName::getString

/* Library Function - Single Match
    public: char * __thiscall DName::getString(char *,int)const 
   
   Library: Visual Studio 2005 Release */

char * __thiscall DName::getString(DName *this,char *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  DName *this_00;
  uint uVar3;
  int *piVar4;
  
  iVar1 = isEmpty(this);
  if (iVar1 == 0) {
    uVar3 = param_2;
    if (param_1 == (char *)0x0) {
      iVar1 = length(this_00);
      uVar3 = iVar1 + 1;
      param_1 = HeapManager::getMemory((HeapManager *)&DAT_1109fb5c,uVar3,0);
      if (param_1 == (char *)0x0) {
        return (char *)0x0;
      }
    }
    piVar4 = *(int **)this;
    param_2 = (int)param_1;
    while ((piVar4 != (int *)0x0 && (0 < (int)uVar3))) {
      uVar2 = (**(code **)*piVar4)();
      if (uVar2 != 0) {
        if ((int)(uVar3 - uVar2) < 0) {
          uVar2 = uVar3;
        }
        iVar1 = (**(code **)(*piVar4 + 8))(param_2,uVar2);
        if (iVar1 != 0) {
          uVar3 = uVar3 - uVar2;
          param_2 = param_2 + uVar2;
        }
      }
      piVar4 = (int *)piVar4[1];
    }
  }
  else {
    param_2 = (int)param_1;
    if (param_1 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  *(char *)param_2 = '\0';
  return param_1;
}


// ==== 11043028 DName::operator|=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator|=(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator|=(DName *this,DName *param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_ECX;
  DName *extraout_EDX;
  
  uVar1 = *(uint *)(this + 4);
  if (((byte)uVar1 & 0xf) != 3) {
    iVar2 = isValid(param_1);
    this = extraout_EDX;
    if (iVar2 == 0) {
      *(uint *)(extraout_EDX + 4) =
           ((*(int *)(extraout_ECX + 4) << 0x1c) >> 0x1c ^ uVar1) & 0xf ^ uVar1;
    }
  }
  return this;
}


// ==== 1104305d DName::operator=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(enum DNameStatus)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator=(DName *this,DNameStatus param_1)

{
  DNameStatus DVar1;
  DNameStatusNode *this_00;
  int iVar2;
  
  if ((param_1 == 1) || (param_1 == 3)) {
    DVar1 = *(DNameStatus *)(this + 4);
    *(undefined4 *)this = 0;
    if (((byte)DVar1 & 0xf) != 3) {
      *(DNameStatus *)(this + 4) = (DVar1 ^ param_1) & 0xf ^ DVar1;
    }
  }
  else {
    iVar2 = (int)(*(uint *)(this + 4) << 0x1c) >> 0x1c;
    if ((iVar2 == 0) || (iVar2 == 2)) {
      *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff70f;
      this_00 = HeapManager::getMemory((HeapManager *)&DAT_1109fb5c,0x10,0);
      if (this_00 == (DNameStatusNode *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = DNameStatusNode::DNameStatusNode(this_00,param_1);
      }
      *(int *)this = iVar2;
      if (iVar2 == 0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
      }
    }
  }
  return this;
}


// ==== 110430de Replicator::Replicator

/* Library Function - Single Match
    public: __thiscall Replicator::Replicator(void)
   
   Library: Visual Studio 2005 Release */

Replicator * __thiscall Replicator::Replicator(Replicator *this)

{
  DName::DName((DName *)(this + 0x2c),3);
  DName::DName((DName *)(this + 0x34),1);
  *(undefined4 *)this = 0xffffffff;
  return this;
}


// ==== 110430fc Replicator::operator+=

/* Library Function - Single Match
    public: class Replicator & __thiscall Replicator::operator+=(class DName const &)
   
   Library: Visual Studio 2005 Release */

Replicator * __thiscall Replicator::operator+=(Replicator *this,DName *param_1)

{
  int iVar1;
  DName *this_00;
  
  if (*(int *)this != 9) {
    iVar1 = DName::isEmpty(param_1);
    if (iVar1 == 0) {
      this_00 = HeapManager::getMemory((HeapManager *)&DAT_1109fb5c,8,0);
      if (this_00 == (DName *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = DName::DName(this_00,param_1);
      }
      if (iVar1 != 0) {
        *(int *)this = *(int *)this + 1;
        *(int *)(this + *(int *)this * 4 + 4) = iVar1;
      }
    }
  }
  return this;
}


// ==== 11043143 DNameNode::clone

/* Library Function - Single Match
    public: class DNameNode * __thiscall DNameNode::clone(void)
   
   Library: Visual Studio 2005 Release */

DNameNode * __thiscall DNameNode::clone(DNameNode *this)

{
  pDNameNode *this_00;
  DName *pDVar1;
  DNameNode *pDVar2;
  
  this_00 = HeapManager::getMemory((HeapManager *)&DAT_1109fb5c,0xc,0);
  if (this_00 == (pDNameNode *)0x0) {
    pDVar2 = (DNameNode *)0x0;
  }
  else {
    pDVar1 = HeapManager::getMemory((HeapManager *)&DAT_1109fb5c,8,0);
    if (pDVar1 == (DName *)0x0) {
      pDVar1 = (DName *)0x0;
    }
    else {
      *(uint *)(pDVar1 + 4) = *(uint *)(pDVar1 + 4) & 0xfffff000;
      *(DNameNode **)pDVar1 = this;
    }
    pDVar2 = (DNameNode *)pDNameNode::pDNameNode(this_00,pDVar1);
  }
  return pDVar2;
}


// ==== 1104318a pcharNode::pcharNode

/* Library Function - Single Match
    public: __thiscall pcharNode::pcharNode(char const *,int)
   
   Library: Visual Studio 2005 Release */

pcharNode * __thiscall pcharNode::pcharNode(pcharNode *this,char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  uint unaff_EDI;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = vftable;
  if (param_2 == 0) {
    if (param_1 == (char *)0x0) goto LAB_110431e1;
    param_2 = 0;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      cVar1 = *(char *)(param_2 + (int)param_1);
    }
    if ((char *)param_2 == (char *)0x0) goto LAB_110431e1;
  }
  if (param_1 != (char *)0x0) {
    pcVar2 = HeapManager::getMemory((HeapManager *)&DAT_1109fb5c,param_2,0);
    *(char **)(this + 8) = pcVar2;
    *(int *)(this + 0xc) = param_2;
    if (pcVar2 == (char *)0x0) {
      return this;
    }
    und_strncpy(pcVar2,(char *)param_2,unaff_EDI);
    return this;
  }
LAB_110431e1:
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return this;
}


// ==== 110431ef FUN_110431ef

undefined4 __fastcall FUN_110431ef(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    return CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(*(int *)(param_1 + 8) + -1 + iVar1));
  }
  return 0;
}


// ==== 11043201 pcharNode::getString

/* Library Function - Single Match
    public: virtual char * __thiscall pcharNode::getString(char *,int)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

char * __thiscall pcharNode::getString(pcharNode *this,char *param_1,int param_2)

{
  char *pcVar1;
  uint unaff_retaddr;
  
  if ((int)*(char **)(this + 0xc) < param_2) {
    param_2 = (int)*(char **)(this + 0xc);
  }
  pcVar1 = (char *)0x0;
  if (((*(int *)(this + 8) != 0) && (param_1 != (char *)0x0)) && ((char *)param_2 != (char *)0x0)) {
    pcVar1 = und_strncpy(param_1,(char *)param_2,unaff_retaddr);
  }
  return pcVar1;
}


// ==== 11043232 pDNameNode::length

/* Library Function - Single Match
    public: virtual int __thiscall pDNameNode::length(void)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

int __thiscall pDNameNode::length(pDNameNode *this)

{
  int iVar1;
  
  if (*(DName **)(this + 8) != (DName *)0x0) {
    iVar1 = DName::length(*(DName **)(this + 8));
    return iVar1;
  }
  return 0;
}


// ==== 11043241 pDNameNode::getLastChar

/* Library Function - Single Match
    public: virtual char __thiscall pDNameNode::getLastChar(void)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

char __thiscall pDNameNode::getLastChar(pDNameNode *this)

{
  char cVar1;
  
  if (*(DName **)(this + 8) != (DName *)0x0) {
    cVar1 = DName::getLastChar(*(DName **)(this + 8));
    return cVar1;
  }
  return '\0';
}


// ==== 11043250 pDNameNode::getString

/* Library Function - Single Match
    public: virtual char * __thiscall pDNameNode::getString(char *,int)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

char * __thiscall pDNameNode::getString(pDNameNode *this,char *param_1,int param_2)

{
  char *pcVar1;
  
  if (((*(DName **)(this + 8) != (DName *)0x0) && (param_1 != (char *)0x0)) && (param_2 != 0)) {
    pcVar1 = DName::getString(*(DName **)(this + 8),param_1,param_2);
    return pcVar1;
  }
  return (char *)0x0;
}


// ==== 1104326d DNameStatusNode::getString

/* Library Function - Single Match
    public: virtual char * __thiscall DNameStatusNode::getString(char *,int)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

char * __thiscall DNameStatusNode::getString(DNameStatusNode *this,char *param_1,int param_2)

{
  char *pcVar1;
  uint unaff_retaddr;
  
  if ((int)*(char **)(this + 0xc) < param_2) {
    param_2 = (int)*(char **)(this + 0xc);
  }
  pcVar1 = (char *)0x0;
  if (((*(int *)(this + 8) == 2) && (param_1 != (char *)0x0)) && ((char *)param_2 != (char *)0x0)) {
    pcVar1 = und_strncpy(param_1,(char *)param_2,unaff_retaddr);
  }
  return pcVar1;
}


// ==== 110432a0 UnDecorator::UnDecorator

/* Library Function - Single Match
    public: __thiscall UnDecorator::UnDecorator(char *,char const *,int,char *
   (__cdecl*)(long),unsigned long)
   
   Library: Visual Studio 2005 Release */

UnDecorator * __thiscall
UnDecorator::UnDecorator
          (UnDecorator *this,char *param_1,char *param_2,int param_3,_func_char_ptr_long *param_4,
          ulong param_5)

{
  Replicator::Replicator((Replicator *)this);
  Replicator::Replicator((Replicator *)(this + 0x3c));
  DAT_1109fb80 = param_2;
  DAT_1109fb7c = param_2;
  if (param_1 == (char *)0x0) {
    DAT_1109fb84 = (char *)0x0;
    DAT_1109fb88 = 0;
  }
  else {
    DAT_1109fb88 = param_3 + -1;
    DAT_1109fb84 = param_1;
  }
  DAT_1109fb8c = param_5;
  DAT_1109fb74 = (Replicator *)(this + 0x3c);
  DAT_1109fb90 = param_4;
  DAT_1109fb70 = this;
  DAT_1109fb94 = 0;
  return this;
}


// ==== 11043313 UnDecorator::getReturnType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getReturnType(class DName *)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getReturnType(DName *param_1)

{
  DName *in_stack_00000008;
  
  if (*DAT_1109fb7c == '@') {
    DAT_1109fb7c = DAT_1109fb7c + 1;
    DName::DName(param_1,in_stack_00000008);
  }
  else {
    getDataType(param_1);
  }
  return param_1;
}


// ==== 11043351 DName::operator+=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(enum DNameStatus)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator+=(DName *this,DNameStatus param_1)

{
  int iVar1;
  DNameStatusNode *this_00;
  DNameNode *pDVar2;
  DNameNode *this_01;
  DName *this_02;
  
  iVar1 = isEmpty(this);
  if (((iVar1 != 0) || (param_1 == 1)) || (param_1 == 3)) {
    operator=(this_02,param_1);
    return this;
  }
  this_00 = HeapManager::getMemory((HeapManager *)&DAT_1109fb5c,0x10,0);
  if (this_00 == (DNameStatusNode *)0x0) {
    pDVar2 = (DNameNode *)0x0;
  }
  else {
    pDVar2 = (DNameNode *)DNameStatusNode::DNameStatusNode(this_00,param_1);
  }
  if (pDVar2 == (DNameNode *)0x0) {
    *(undefined4 *)this = 0;
  }
  else {
    this_01 = DNameNode::clone(*(DNameNode **)this);
    *(DNameNode **)this = this_01;
    if (this_01 == (DNameNode *)0x0) goto LAB_110433af;
    DNameNode::operator+=(this_01,pDVar2);
  }
  if (*(int *)this != 0) {
    return this;
  }
LAB_110433af:
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
  return this;
}


// ==== 110433ca DName::operator=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(class DName *)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator=(DName *this,DName *param_1)

{
  pDNameNode *this_00;
  int iVar1;
  
  iVar1 = (int)(*(uint *)(this + 4) << 0x1c) >> 0x1c;
  if ((iVar1 == 0) || (iVar1 == 2)) {
    if (param_1 == (DName *)0x0) {
      operator=(this,3);
    }
    else {
      *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff70f;
      this_00 = HeapManager::getMemory((HeapManager *)&DAT_1109fb5c,0xc,0);
      if (this_00 == (pDNameNode *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = pDNameNode::pDNameNode(this_00,param_1);
      }
      *(int *)this = iVar1;
      if (iVar1 == 0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
      }
    }
  }
  return this;
}


// ==== 11043432 DName::doPchar

/* Library Function - Single Match
    private: void __thiscall DName::doPchar(char const *,int)
   
   Library: Visual Studio 2005 Release */

void __thiscall DName::doPchar(DName *this,char *param_1,int param_2)

{
  char cVar1;
  pcharNode *this_00;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(this + 4);
  iVar4 = (int)(uVar3 << 0x1c) >> 0x1c;
  if (iVar4 == 1) {
    return;
  }
  if (iVar4 == 3) {
    return;
  }
  if (*(int *)this != 0) {
    operator=(this,3);
    return;
  }
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    uVar3 = uVar3 & 0xfffffff1 | 1;
    goto LAB_110434cf;
  }
  if (param_2 != 0) {
    if (param_2 == 1) {
      puVar2 = HeapManager::getMemory((HeapManager *)&DAT_1109fb5c,0xc,0);
      if (puVar2 == (undefined4 *)0x0) goto LAB_1104349b;
      cVar1 = *param_1;
      puVar2[1] = 0;
      *puVar2 = charNode::vftable;
      *(char *)(puVar2 + 2) = cVar1;
    }
    else {
      this_00 = HeapManager::getMemory((HeapManager *)&DAT_1109fb5c,0x10,0);
      if (this_00 == (pcharNode *)0x0) {
LAB_1104349b:
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = (undefined4 *)pcharNode::pcharNode(this_00,param_1,param_2);
      }
    }
    *(undefined4 **)this = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      return;
    }
    uVar3 = *(uint *)(this + 4);
  }
  uVar3 = uVar3 & 0xfffffff3 | 3;
LAB_110434cf:
  *(uint *)(this + 4) = uVar3;
  return;
}


// ==== 110434d8 DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(char)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::DName(DName *this,char param_1)

{
  *(undefined4 *)this = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff000;
  if (param_1 != '\0') {
    doPchar(this,&param_1,1);
  }
  return this;
}


// ==== 110434fe DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(char const *)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::DName(DName *this,char *param_1)

{
  char cVar1;
  int iVar2;
  
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff000;
  *(undefined4 *)this = 0;
  if (param_1 != (char *)0x0) {
    iVar2 = 0;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      iVar2 = iVar2 + 1;
      cVar1 = param_1[iVar2];
    }
    doPchar(this,param_1,iVar2);
  }
  return this;
}


// ==== 1104352f DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(char const * &,char)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::DName(DName *this,char **param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff000;
  uVar4 = *(uint *)(this + 4);
  iVar6 = 0;
  *(undefined4 *)this = 0;
  pcVar3 = *param_1;
  if (pcVar3 == (char *)0x0) {
LAB_110435d8:
    uVar4 = uVar4 & 0xfffffff1 | 1;
  }
  else {
    if (*pcVar3 != '\0') {
      do {
        bVar1 = **param_1;
        if (bVar1 == param_2) break;
        if (((((((bVar1 != 0x5f) && (bVar1 != 0x24)) && (bVar1 != 0x3c)) &&
              (((bVar1 != 0x3e && (bVar1 != 0x2d)) && (((char)bVar1 < 'a' || ('z' < (char)bVar1)))))
              ) && (((char)bVar1 < 'A' || ('Z' < (char)bVar1)))) &&
            (((char)bVar1 < '0' || ('9' < (char)bVar1)))) &&
           (((bVar1 < 0x80 || (bVar1 == 0xff)) && ((DAT_1109fb8c & 0x10000) == 0)))) {
          uVar4 = *(uint *)(this + 4);
          goto LAB_110435d8;
        }
        iVar6 = iVar6 + 1;
        pbVar5 = (byte *)(*param_1 + 1);
        *param_1 = (char *)pbVar5;
      } while (*pbVar5 != 0);
      doPchar(this,pcVar3,iVar6);
      cVar2 = **param_1;
      if (cVar2 != '\0') {
        *param_1 = *param_1 + 1;
        if (cVar2 == param_2) {
          *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff0;
          return this;
        }
        uVar4 = *(uint *)(this + 4) & 0xfffffff3 | 3;
        *(undefined4 *)this = 0;
        goto LAB_110435de;
      }
      uVar4 = *(uint *)(this + 4);
      if ((uVar4 & 0xf) != 0) {
        return this;
      }
    }
    uVar4 = uVar4 & 0xfffffff2 | 2;
  }
LAB_110435de:
  *(uint *)(this + 4) = uVar4;
  return this;
}


// ==== 110435ff DName::DName

/* Library Function - Single Match
    public: __thiscall DName::DName(unsigned __int64)
   
   Library: Visual Studio 2005 Release */

void __thiscall DName::DName(DName *this,__uint64 param_1)

{
  char extraout_CL;
  char *pcVar1;
  __uint64 _Var2;
  char local_d [5];
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)this = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff000;
  pcVar1 = local_d + 1;
  local_d[1] = 0;
  _Var2 = param_1;
  do {
    param_1._4_4_ = (uint)(_Var2 >> 0x20);
    param_1._0_4_ = (uint)_Var2;
    pcVar1 = pcVar1 + -1;
    _Var2 = __aulldvrm((uint)param_1,param_1._4_4_,10,0);
    *pcVar1 = extraout_CL + '0';
  } while (_Var2 != 0);
  doPchar(this,pcVar1,(int)(local_d + (1 - (int)pcVar1)));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 11043668 FUN_11043668

void __thiscall FUN_11043668(void *this,uint param_1,int param_2)

{
  bool bVar1;
  char extraout_CL;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  longlong lVar5;
  char local_d [5];
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffff000;
  *(undefined4 *)this = 0;
  local_d[2] = 0;
  bVar1 = false;
  if ((param_2 < 1) && (param_2 < 0)) {
    bVar4 = param_1 != 0;
    param_1 = -param_1;
    bVar1 = true;
    param_2 = -(param_2 + (uint)bVar4);
  }
  lVar5 = CONCAT44(param_2,param_1);
  pcVar3 = local_d + 2;
  do {
    pcVar2 = pcVar3;
    param_1 = (uint)lVar5;
    pcVar3 = pcVar2 + -1;
    lVar5 = __aulldvrm(param_1,(uint)((ulonglong)lVar5 >> 0x20),10,0);
    *pcVar3 = extraout_CL + '0';
  } while (lVar5 != 0);
  if (bVar1) {
    pcVar3 = pcVar2 + -2;
    *pcVar3 = '-';
  }
  DName::doPchar(this,pcVar3,(int)(local_d + (2 - (int)pcVar3)));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 110436fe DName::operator+

/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(enum DNameStatus)const 
   
   Library: Visual Studio 2005 Release */

DNameStatus __thiscall DName::operator+(DName *this,DNameStatus param_1)

{
  int iVar1;
  DName *this_00;
  DNameStatus in_stack_00000008;
  
  DName((DName *)param_1,this);
  iVar1 = isEmpty((DName *)param_1);
  if (iVar1 == 0) {
    operator+=(this_00,in_stack_00000008);
  }
  else {
    operator=(this_00,in_stack_00000008);
  }
  return param_1;
}


// ==== 1104372c DName::operator+=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator+=(DName *this,DName *param_1)

{
  int iVar1;
  DNameNode *this_00;
  DName *this_01;
  
  iVar1 = isEmpty(param_1);
  if (iVar1 == 0) {
    iVar1 = isEmpty(this);
    if (iVar1 == 0) {
      this_00 = DNameNode::clone(*(DNameNode **)this);
      *(DNameNode **)this = this_00;
      if (this_00 == (DNameNode *)0x0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
      }
      else {
        DNameNode::operator+=(this_00,*(DNameNode **)param_1);
      }
    }
    else {
      operator=(this_01,param_1);
    }
  }
  else {
    operator+=(this,(*(int *)(param_1 + 4) << 0x1c) >> 0x1c);
  }
  return this;
}


// ==== 1104378e FUN_1104378e

DName * __thiscall FUN_1104378e(void *this,DName *param_1)

{
  int iVar1;
  DNameStatus DVar2;
  pDNameNode *this_00;
  DNameNode *pDVar3;
  DNameNode *this_01;
  DName *this_02;
  
  if (param_1 == (DName *)0x0) {
    return this;
  }
  iVar1 = DName::isEmpty(this);
  if (iVar1 != 0) {
    DName::operator=(this_02,param_1);
    return this;
  }
  DVar2 = (*(int *)(param_1 + 4) << 0x1c) >> 0x1c;
  if ((DVar2 != 0) && (DVar2 != 2)) {
    DName::operator+=(this_02,DVar2);
    return this;
  }
  this_00 = HeapManager::getMemory((HeapManager *)&DAT_1109fb5c,0xc,0);
  if (this_00 == (pDNameNode *)0x0) {
    pDVar3 = (DNameNode *)0x0;
  }
  else {
    pDVar3 = (DNameNode *)pDNameNode::pDNameNode(this_00,param_1);
  }
  if (pDVar3 == (DNameNode *)0x0) {
    *(undefined4 *)this = 0;
  }
  else {
    this_01 = DNameNode::clone(*(DNameNode **)this);
    *(DNameNode **)this = this_01;
    if (this_01 == (DNameNode *)0x0) goto LAB_11043806;
    DNameNode::operator+=(this_01,pDVar3);
  }
  if (*(int *)this != 0) {
    return this;
  }
LAB_11043806:
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffff3 | 3;
  return this;
}


// ==== 11043819 DName::operator=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(char)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator=(DName *this,char param_1)

{
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff70f;
  doPchar(this,&param_1,1);
  return this;
}


// ==== 11043835 DName::operator=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(char const *)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator=(DName *this,char *param_1)

{
  char cVar1;
  int iVar2;
  
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff70f;
  iVar2 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
    cVar1 = param_1[iVar2];
  }
  doPchar(this,param_1,iVar2);
  return this;
}


// ==== 1104385f UnDecorator::getCallingConvention

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getCallingConvention(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getCallingConvention(void)

{
  uint uVar1;
  char *pcVar2;
  uint in_ECX;
  DName *in_stack_00000004;
  Tokens TVar3;
  DNameStatus DVar4;
  undefined4 local_c;
  uint local_8;
  
  if (*DAT_1109fb7c == '\0') {
    DVar4 = 2;
  }
  else {
    uVar1 = (int)*DAT_1109fb7c - 0x41;
    DAT_1109fb7c = DAT_1109fb7c + 1;
    if (uVar1 < 0xd) {
      local_c = 0;
      local_8 = in_ECX & 0xfffff000;
      if ((~(DAT_1109fb8c >> 1) & 1) != 0) {
        uVar1 = uVar1 & 0xfffffffe;
        if (uVar1 == 0) {
          TVar3 = 1;
        }
        else if (uVar1 == 2) {
          TVar3 = 2;
        }
        else if (uVar1 == 4) {
          TVar3 = 4;
        }
        else if (uVar1 == 6) {
          TVar3 = 3;
        }
        else if (uVar1 == 8) {
          TVar3 = 5;
        }
        else {
          if (uVar1 != 0xc) goto LAB_110438e4;
          TVar3 = 6;
        }
        pcVar2 = UScore(TVar3);
        DName::operator=((DName *)&local_c,pcVar2);
      }
LAB_110438e4:
      DName::DName(in_stack_00000004,(DName *)&local_c);
      return in_stack_00000004;
    }
    DVar4 = 1;
  }
  DName::DName(in_stack_00000004,DVar4);
  return in_stack_00000004;
}


// ==== 11043905 UnDecorator::getVCallThunkType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVCallThunkType(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getVCallThunkType(void)

{
  DName *in_stack_00000004;
  DNameStatus DVar1;
  
  if (*DAT_1109fb7c == '\0') {
    DVar1 = 2;
  }
  else {
    if (*DAT_1109fb7c == 'A') {
      DAT_1109fb7c = DAT_1109fb7c + 1;
      DName::DName(in_stack_00000004,s__flat__110751a0);
      return in_stack_00000004;
    }
    DVar1 = 1;
  }
  DName::DName(in_stack_00000004,DVar1);
  return in_stack_00000004;
}


// ==== 1104393c DName::operator+

/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(class DName const &)const 
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator+(DName *this,DName *param_1)

{
  int iVar1;
  DName *this_00;
  DName *extraout_ECX;
  DName *in_stack_00000008;
  
  DName(param_1,this);
  iVar1 = isEmpty(param_1);
  if (iVar1 == 0) {
    iVar1 = isEmpty(in_stack_00000008);
    if (iVar1 == 0) {
      operator+=(param_1,extraout_ECX);
    }
    else {
      operator+=(param_1,(*(int *)(extraout_ECX + 4) << 0x1c) >> 0x1c);
    }
  }
  else {
    operator=(this_00,in_stack_00000008);
  }
  return param_1;
}


// ==== 1104398d FUN_1104398d

DName * __thiscall FUN_1104398d(void *this,DName *param_1,DName *param_2)

{
  int iVar1;
  DName *this_00;
  
  DName::DName(param_1,this);
  iVar1 = DName::isEmpty(param_1);
  if (iVar1 == 0) {
    FUN_1104378e(this_00,param_2);
  }
  else {
    DName::operator=(this_00,param_2);
  }
  return param_1;
}


// ==== 110439bb DName::operator+=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(char)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator+=(DName *this,char param_1)

{
  int iVar1;
  DNameNode *pDVar2;
  DName *this_00;
  
  if (param_1 != '\0') {
    iVar1 = isEmpty(this);
    if (iVar1 == 0) {
      pDVar2 = DNameNode::clone(*(DNameNode **)this);
      *(DNameNode **)this = pDVar2;
      if (pDVar2 == (DNameNode *)0x0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
      }
      else {
        pDVar2 = HeapManager::getMemory((HeapManager *)&DAT_1109fb5c,0xc,0);
        if (pDVar2 == (DNameNode *)0x0) {
          pDVar2 = (DNameNode *)0x0;
        }
        else {
          *(undefined4 *)(pDVar2 + 4) = 0;
          *(undefined ***)pDVar2 = charNode::vftable;
          pDVar2[8] = (DNameNode)param_1;
        }
        DNameNode::operator+=(*(DNameNode **)this,pDVar2);
      }
    }
    else {
      operator=(this_00,param_1);
    }
  }
  return this;
}


// ==== 11043a25 DName::operator+=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(char const *)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator+=(DName *this,char *param_1)

{
  int iVar1;
  DNameNode *pDVar2;
  pcharNode *this_00;
  DName *this_01;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = isEmpty(this);
    if (iVar1 == 0) {
      pDVar2 = DNameNode::clone(*(DNameNode **)this);
      *(DNameNode **)this = pDVar2;
      if (pDVar2 == (DNameNode *)0x0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
      }
      else {
        this_00 = HeapManager::getMemory((HeapManager *)&DAT_1109fb5c,0x10,0);
        if (this_00 == (pcharNode *)0x0) {
          pDVar2 = (DNameNode *)0x0;
        }
        else {
          pDVar2 = (DNameNode *)pcharNode::pcharNode(this_00,param_1,0);
        }
        DNameNode::operator+=(*(DNameNode **)this,pDVar2);
      }
    }
    else {
      operator=(this_01,param_1);
    }
  }
  return this;
}


// ==== 11043a91 UnDecorator::getArgumentList

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArgumentList(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getArgumentList(void)

{
  char *pcVar1;
  DName *pDVar2;
  uint uVar3;
  DName *in_stack_00000004;
  DName local_18 [8];
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  *(undefined4 *)in_stack_00000004 = 0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xfffff000;
  local_8 = 1;
  if ((*(uint *)(in_stack_00000004 + 4) & 0xf) == 0) {
    do {
      if (*DAT_1109fb7c == '@') {
        return in_stack_00000004;
      }
      if (*DAT_1109fb7c == 'Z') {
        return in_stack_00000004;
      }
      if (local_8 == 0) {
        DName::operator+=(in_stack_00000004,',');
      }
      else {
        local_8 = 0;
      }
      pcVar1 = DAT_1109fb7c;
      if (*DAT_1109fb7c == '\0') {
        DName::operator+=(in_stack_00000004,2);
        return in_stack_00000004;
      }
      uVar3 = (int)*DAT_1109fb7c - 0x30;
      if (uVar3 < 10) {
        DAT_1109fb7c = DAT_1109fb7c + 1;
        pDVar2 = Replicator::operator[](DAT_1109fb70,uVar3);
      }
      else {
        local_10 = 0;
        local_c = local_c & 0xfffff000;
        getPrimaryDataType(local_18);
        if ((1 < (int)DAT_1109fb7c - (int)pcVar1) && (*(int *)DAT_1109fb70 != 9)) {
          Replicator::operator+=(DAT_1109fb70,local_18);
        }
        pDVar2 = local_18;
      }
      DName::operator+=(in_stack_00000004,pDVar2);
    } while (((byte)in_stack_00000004[4] & 0xf) == 0);
  }
  return in_stack_00000004;
}


// ==== 11043b71 UnDecorator::getVdispMapType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVdispMapType(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getVdispMapType(DName *param_1)

{
  DName *pDVar1;
  DName *in_stack_00000008;
  
  DName::DName(param_1,in_stack_00000008);
  DName::operator+=(param_1,s__for_110751a8);
  pDVar1 = (DName *)getScope();
  DName::operator+=(param_1,pDVar1);
  DName::operator+=(param_1,'}');
  if (*DAT_1109fb7c == '@') {
    DAT_1109fb7c = DAT_1109fb7c + 1;
  }
  return param_1;
}


// ==== 11043bc0 operator+

/* Library Function - Single Match
    class DName __cdecl operator+(char,class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl operator+(char param_1,DName *param_2)

{
  DName *this;
  undefined3 in_stack_00000005;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = _param_1;
  this = (DName *)DName::DName(local_c,(char)param_2);
  DName::operator+(this,pDVar1);
  return _param_1;
}


// ==== 11043be2 operator+

/* Library Function - Single Match
    class DName __cdecl operator+(enum DNameStatus,class DName const &)
   
   Library: Visual Studio 2005 Release */

DNameStatus __cdecl operator+(DNameStatus param_1,DName *param_2)

{
  DName *this;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = (DName *)param_1;
  this = (DName *)DName::DName(local_c,(DNameStatus)param_2);
  DName::operator+(this,pDVar1);
  return param_1;
}


// ==== 11043c04 operator+

/* Library Function - Single Match
    class DName __cdecl operator+(char const *,class DName const &)
   
   Library: Visual Studio 2005 Release */

char * __cdecl operator+(char *param_1,DName *param_2)

{
  DName *this;
  DName *pDVar1;
  DName local_c [8];
  
  pDVar1 = (DName *)param_1;
  this = (DName *)DName::DName(local_c,(char *)param_2);
  DName::operator+(this,pDVar1);
  return param_1;
}


// ==== 11043c26 DName::operator+

/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(char)const 
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator+(DName *this,char param_1)

{
  int iVar1;
  DName *this_00;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  
  DName(_param_1,this);
  iVar1 = isEmpty(_param_1);
  if (iVar1 == 0) {
    operator+=(this_00,in_stack_00000008);
  }
  else {
    operator=(this_00,in_stack_00000008);
  }
  return _param_1;
}


// ==== 11043c54 DName::operator+

/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(char const *)const 
   
   Library: Visual Studio 2005 Release */

char * __thiscall DName::operator+(DName *this,char *param_1)

{
  int iVar1;
  DName *this_00;
  char *in_stack_00000008;
  
  DName((DName *)param_1,this);
  iVar1 = isEmpty((DName *)param_1);
  if (iVar1 == 0) {
    operator+=(this_00,in_stack_00000008);
  }
  else {
    operator=(this_00,in_stack_00000008);
  }
  return param_1;
}


// ==== 11043c82 UnDecorator::getDimension

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDimension(bool)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getDimension(bool param_1)

{
  __uint64 _Var1;
  char *pcVar2;
  char cVar3;
  DName *pDVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  DNameStatus DVar8;
  DName local_20 [8];
  char local_18 [8];
  DName local_10 [4];
  int local_c;
  DName *local_8;
  
  local_8 = (DName *)0x0;
  if (*DAT_1109fb7c == 'Q') {
    DAT_1109fb7c = DAT_1109fb7c + 1;
    local_8 = (DName *)s__non_type_template_parameter_110751b0;
  }
  cVar3 = *DAT_1109fb7c;
  if (cVar3 == '\0') {
    DName::DName(_param_1,2);
    return _param_1;
  }
  if (('/' < cVar3) && (cVar3 < ':')) {
    cVar3 = *DAT_1109fb7c;
    DAT_1109fb7c = DAT_1109fb7c + 1;
    if (local_8 == (DName *)0x0) {
      pDVar4 = (DName *)DName::DName(local_20,(longlong)(cVar3 + -0x2f));
    }
    else {
      DName::DName(local_10,(longlong)(cVar3 + -0x2f));
      pDVar4 = (DName *)operator+(local_18,local_8);
    }
    DName::DName(_param_1,pDVar4);
    return _param_1;
  }
  _Var1 = 0;
  while( true ) {
    pcVar2 = DAT_1109fb7c;
    iVar6 = (int)(_Var1 >> 0x20);
    uVar5 = (uint)_Var1;
    if (cVar3 == '@') break;
    if (cVar3 == '\0') {
      DVar8 = 2;
      goto LAB_11043d73;
    }
    if ((cVar3 < 'A') || ('P' < cVar3)) goto LAB_11043d7d;
    local_c = cVar3 + -0x41 >> 0x1f;
    lVar7 = __allmul(uVar5,iVar6,0x10,0);
    _Var1 = lVar7 + CONCAT44(local_c,cVar3 + -0x41);
    DAT_1109fb7c = pcVar2 + 1;
    cVar3 = *DAT_1109fb7c;
  }
  cVar3 = *DAT_1109fb7c;
  DAT_1109fb7c = DAT_1109fb7c + 1;
  if (cVar3 != '@') {
LAB_11043d7d:
    DVar8 = 1;
LAB_11043d73:
    DName::DName(_param_1,DVar8);
    return _param_1;
  }
  if (in_stack_00000008 == '\0') {
    if (local_8 == (DName *)0x0) {
      pDVar4 = (DName *)DName::DName(local_10,_Var1);
      goto LAB_11043db2;
    }
    DName::DName(local_20,_Var1);
  }
  else {
    if (local_8 == (DName *)0x0) {
      pDVar4 = (DName *)FUN_11043668(local_10,uVar5,iVar6);
      goto LAB_11043db2;
    }
    FUN_11043668(local_20,uVar5,iVar6);
  }
  pDVar4 = (DName *)operator+(local_18,local_8);
LAB_11043db2:
  DName::DName(_param_1,pDVar4);
  return _param_1;
}


// ==== 11043dc3 UnDecorator::getEnumType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getEnumType(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getEnumType(void)

{
  char cVar1;
  DName *pDVar2;
  DName *in_stack_00000004;
  char *pcVar3;
  DNameStatus DVar4;
  char local_14 [8];
  undefined4 local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = local_8 & 0xfffff000;
  if (*DAT_1109fb7c == '\0') {
    DVar4 = 2;
LAB_11043e68:
    DName::DName(in_stack_00000004,DVar4);
    return in_stack_00000004;
  }
  switch(*DAT_1109fb7c) {
  case '0':
  case '1':
    pcVar3 = s_char_110751f4;
    break;
  case '2':
  case '3':
    pcVar3 = s_short_110751ec;
    break;
  case '4':
    goto switchD_11043dee_caseD_34;
  case '5':
    pcVar3 = &DAT_110751e4;
    break;
  case '6':
  case '7':
    pcVar3 = s_long_110751dc;
    break;
  default:
    DVar4 = 1;
    goto LAB_11043e68;
  }
  DName::operator=((DName *)&local_c,pcVar3);
switchD_11043dee_caseD_34:
  cVar1 = *DAT_1109fb7c;
  DAT_1109fb7c = DAT_1109fb7c + 1;
  if ((((cVar1 == '1') || (cVar1 == '3')) || (cVar1 == '5')) || (cVar1 == '7')) {
    pDVar2 = (DName *)operator+(local_14,(DName *)s_unsigned_110751d0);
    DName::operator=((DName *)&local_c,pDVar2);
  }
  DName::DName(in_stack_00000004,(DName *)&local_c);
  return in_stack_00000004;
}


// ==== 11043e97 UnDecorator::getArgumentTypes

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArgumentTypes(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getArgumentTypes(void)

{
  char cVar1;
  DName *pDVar2;
  char *pcVar3;
  DName *in_stack_00000004;
  char local_14 [8];
  DName local_c [4];
  byte local_8;
  
  if (*DAT_1109fb7c == 'X') {
    pcVar3 = &DAT_110751fc;
LAB_11043f4e:
    DAT_1109fb7c = DAT_1109fb7c + 1;
    DName::DName(in_stack_00000004,pcVar3);
    return in_stack_00000004;
  }
  if (*DAT_1109fb7c == 'Z') {
    pcVar3 = &DAT_1107481c;
    if ((~(DAT_1109fb8c >> 0x12) & 1) == 0) {
      pcVar3 = s_<ellipsis>_11075204;
    }
    goto LAB_11043f4e;
  }
  getArgumentList();
  if (((local_8 & 0xf) == 0) && (cVar1 = *DAT_1109fb7c, cVar1 != '\0')) {
    if (cVar1 != '@') {
      if (cVar1 != 'Z') {
        DName::DName(in_stack_00000004,1);
        return in_stack_00000004;
      }
      DAT_1109fb7c = DAT_1109fb7c + 1;
      pDVar2 = (DName *)DName::operator+(local_c,local_14);
      goto LAB_11043f0c;
    }
    DAT_1109fb7c = DAT_1109fb7c + 1;
  }
  pDVar2 = local_c;
LAB_11043f0c:
  DName::DName(in_stack_00000004,pDVar2);
  return in_stack_00000004;
}


// ==== 11043f5b UnDecorator::getThrowTypes

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getThrowTypes(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getThrowTypes(void)

{
  DName *pDVar1;
  DName *this;
  DName *in_stack_00000004;
  char *pcVar2;
  char cVar3;
  char local_14 [8];
  undefined4 local_c;
  uint local_8;
  
  if (*DAT_1109fb7c == '\0') {
    pcVar2 = local_14;
    pDVar1 = in_stack_00000004;
    this = (DName *)DName::DName((DName *)&local_c,s_throw__11075224);
    cVar3 = (char)pDVar1;
    pDVar1 = (DName *)DName::operator+(this,(DNameStatus)pcVar2);
  }
  else {
    if (*DAT_1109fb7c == 'Z') {
      DAT_1109fb7c = DAT_1109fb7c + 1;
      local_c = 0;
      local_8 = local_8 & 0xfffff000;
      DName::DName(in_stack_00000004,(DName *)&local_c);
      return in_stack_00000004;
    }
    pDVar1 = in_stack_00000004;
    getArgumentTypes();
    cVar3 = (char)pDVar1;
    pDVar1 = (DName *)operator+(local_14,(DName *)s_throw__11075224);
  }
  DName::operator+(pDVar1,cVar3);
  return in_stack_00000004;
}


// ==== 11043fd9 UnDecorator::getExtendedDataIndirectType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getExtendedDataIndirectType(char &,bool &,int)
   
   Library: Visual Studio 2005 Release */

char * __cdecl UnDecorator::getExtendedDataIndirectType(char *param_1,bool *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  DName *pDVar3;
  char *pcVar4;
  int in_stack_00000010;
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  DName local_1c [8];
  DName local_14 [8];
  undefined4 local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = local_8 & 0xfffff000;
  pcVar4 = (char *)((int)DAT_1109fb7c + 1);
  iVar2 = (int)*pcVar4;
  if (iVar2 == 0x41) {
    DAT_1109fb7c = pcVar4;
    if (in_stack_00000010 == 0) {
      *param_2 = (bool)(((*param_2 != true) - 1U & 199) + 0x5e);
    }
  }
  else if (iVar2 == 0x42) {
    DAT_1109fb7c = pcVar4;
    *(undefined1 *)param_3 = 1;
    DName::operator=((DName *)&local_c,'>');
  }
  else {
    if (iVar2 != 0x43) {
      uVar1 = (iVar2 + -0x30) * 0x10 + -0x30 + (int)*(char *)((int)DAT_1109fb7c + 2);
      DAT_1109fb7c = (char *)((int)DAT_1109fb7c + 3);
      if (1 < uVar1) {
        DName::operator=((DName *)&local_c,',');
        DName::DName(local_14,(ulonglong)uVar1);
        pDVar3 = (DName *)DName::operator+((DName *)&local_c,local_1c);
        DName::operator=((DName *)&local_c,pDVar3);
      }
      pDVar3 = (DName *)DName::operator+((DName *)&local_c,(char)local_24);
      DName::operator=((DName *)&local_c,pDVar3);
      if (*DAT_1109fb7c == '$') {
        DAT_1109fb7c = DAT_1109fb7c + 1;
      }
      else {
        pDVar3 = (DName *)DName::operator+((DName *)&local_c,(char)local_2c);
        DName::operator=((DName *)&local_c,pDVar3);
      }
      DAT_1109fb7c = DAT_1109fb7c + 1;
      local_8 = local_8 | 0x400;
      DName::DName((DName *)param_1,(DName *)&local_c);
      return param_1;
    }
    DAT_1109fb7c = pcVar4;
    *param_2 = true;
  }
  DAT_1109fb7c = DAT_1109fb7c + 1;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffff000;
  return param_1;
}


// ==== 110440fe UnDecorator::getArrayType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArrayType(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getArrayType(DName *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  DName *pDVar3;
  DName *pDVar4;
  DName *extraout_ECX;
  int iVar5;
  DName *in_stack_00000008;
  char cVar6;
  DName local_2c [8];
  undefined4 local_24 [2];
  DName local_1c [8];
  DName local_14 [4];
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  if (*DAT_1109fb7c == '\0') {
    iVar5 = DName::isEmpty(in_stack_00000008);
    cVar6 = (char)local_2c;
    puVar2 = local_24;
    if (iVar5 == 0) {
      pDVar3 = local_1c;
      pDVar4 = (DName *)operator+((char)local_14,(DName *)0x28);
      pDVar3 = (DName *)DName::operator+(pDVar4,(char *)pDVar3);
      goto LAB_1104413a;
    }
  }
  else {
    iVar1 = getNumberOfDimensions();
    iVar5 = iVar1;
    if (iVar1 < 0) {
      iVar5 = 0;
    }
    if (0 < iVar1) {
      local_c = 0;
      local_8 = local_8 & 0xfffff000;
      if (((byte)in_stack_00000008[4] & 0x80) != 0) {
        DName::operator+=((DName *)&local_c,&DAT_11074f2c);
      }
      do {
        cVar6 = (char)local_1c;
        iVar5 = iVar5 + -1;
        getDimension(SUB41(local_24,0));
        pDVar3 = (DName *)operator+((char)local_2c,(DName *)0x5b);
        pDVar3 = (DName *)DName::operator+(pDVar3,cVar6);
        DName::operator+=((DName *)&local_c,pDVar3);
      } while (iVar5 != 0);
      iVar5 = DName::isEmpty(in_stack_00000008);
      if (iVar5 == 0) {
        pDVar3 = local_2c;
        pDVar4 = extraout_ECX;
        if (((byte)in_stack_00000008[4] & 0x80) == 0) {
          cVar6 = (char)local_24;
          pDVar4 = (DName *)operator+((char)local_1c,(DName *)0x28);
          pDVar4 = (DName *)DName::operator+(pDVar4,cVar6);
        }
        pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
        DName::operator=((DName *)&local_c,pDVar3);
      }
      getPrimaryDataType(local_14);
      local_10 = local_10 | 0x80;
      DName::DName(param_1,local_14);
      return param_1;
    }
    cVar6 = (char)local_14;
    puVar2 = &local_c;
  }
  pDVar3 = (DName *)DName::DName(local_1c,'[');
LAB_1104413a:
  pDVar3 = (DName *)DName::operator+(pDVar3,(DNameStatus)puVar2);
  pDVar3 = (DName *)DName::operator+(pDVar3,cVar6);
  FUN_110471d7(param_1,pDVar3);
  return param_1;
}


// ==== 1104425d UnDecorator::getLexicalFrame

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getLexicalFrame(void)
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl UnDecorator::getLexicalFrame(void)

{
  DName *this;
  undefined4 in_stack_00000004;
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = in_stack_00000004;
  getDimension(true);
  cVar1 = (char)uVar2;
  this = (DName *)operator+(-0x14,(DName *)0x60);
  DName::operator+(this,cVar1);
  return in_stack_00000004;
}


// ==== 110442c4 UnDecorator::getVfTableType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVfTableType(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getVfTableType(DName *param_1)

{
  int iVar1;
  DName *this;
  DName *pDVar2;
  DName *this_00;
  DName *extraout_ECX;
  DName *extraout_ECX_00;
  DName *this_01;
  char *extraout_EDX;
  DName *in_stack_00000008;
  char cVar3;
  char *pcVar4;
  undefined1 local_1c [8];
  DName local_14 [8];
  DName local_c [8];
  
  DName::DName(param_1,in_stack_00000008);
  iVar1 = DName::isValid(param_1);
  if ((iVar1 == 0) || (*DAT_1109fb7c == '\0')) {
    iVar1 = DName::isValid(this_00);
    if (iVar1 != 0) {
      pDVar2 = (DName *)operator+((DNameStatus)local_1c,(DName *)0x2);
      DName::operator=(param_1,pDVar2);
    }
  }
  else {
    getDataIndirectType();
    pDVar2 = local_14;
    this = (DName *)DName::operator+(local_c,(char)local_1c);
    pDVar2 = (DName *)DName::operator+(this,pDVar2);
    DName::operator=(param_1,pDVar2);
    iVar1 = DName::isValid(param_1);
    if (iVar1 != 0) {
      if (*DAT_1109fb7c != '@') {
        pcVar4 = s__for_110751a8;
        pDVar2 = extraout_ECX;
        do {
          DName::operator+=(pDVar2,pcVar4);
          do {
            iVar1 = DName::isValid(param_1);
            if (((iVar1 == 0) || (*DAT_1109fb7c == '\0')) || (*DAT_1109fb7c == '@')) {
              iVar1 = DName::isValid(param_1);
              if (iVar1 != 0) {
                if (*DAT_1109fb7c == '\0') {
                  DName::operator+=(this_01,2);
                }
                DName::operator+=(param_1,'}');
              }
              if (*DAT_1109fb7c != '@') {
                return param_1;
              }
              goto LAB_110443e7;
            }
            cVar3 = (char)local_1c;
            getScope();
            pDVar2 = (DName *)operator+((char)local_c,(DName *)0x60);
            pDVar2 = (DName *)DName::operator+(pDVar2,cVar3);
            DName::operator+=(param_1,pDVar2);
            if (*DAT_1109fb7c == '@') {
              DAT_1109fb7c = DAT_1109fb7c + 1;
            }
            iVar1 = DName::isValid(param_1);
          } while ((iVar1 == 0) || (*extraout_EDX == '@'));
          pcVar4 = &DAT_11075230;
          pDVar2 = extraout_ECX_00;
        } while( true );
      }
LAB_110443e7:
      DAT_1109fb7c = DAT_1109fb7c + 1;
    }
  }
  return param_1;
}


// ==== 11044414 UnDecorator::getStringEncoding

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getStringEncoding(char *,int)
   
   Library: Visual Studio 2005 Release */

char * __cdecl UnDecorator::getStringEncoding(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  DNameStatus DVar3;
  undefined1 local_14 [8];
  DName local_c [8];
  
  DName::DName(local_c,(char *)param_2);
  pcVar1 = DAT_1109fb7c;
  cVar2 = *DAT_1109fb7c;
  DAT_1109fb7c = DAT_1109fb7c + 1;
  if ((cVar2 == '@') && (cVar2 = *DAT_1109fb7c, DAT_1109fb7c = pcVar1 + 2, cVar2 == '_')) {
    DAT_1109fb7c = pcVar1 + 3;
    getDimension(SUB41(local_14,0));
    getDimension(SUB41(local_14,0));
    cVar2 = *DAT_1109fb7c;
    if (cVar2 != '\0') {
      do {
        if (cVar2 == '@') break;
        DAT_1109fb7c = DAT_1109fb7c + 1;
        cVar2 = *DAT_1109fb7c;
      } while (cVar2 != '\0');
      if (*DAT_1109fb7c != '\0') {
        DAT_1109fb7c = DAT_1109fb7c + 1;
        DName::DName((DName *)param_1,local_c);
        return param_1;
      }
    }
    DAT_1109fb7c = DAT_1109fb7c + -1;
    DVar3 = 2;
  }
  else {
    DVar3 = 1;
  }
  DName::DName((DName *)param_1,DVar3);
  return param_1;
}


// ==== 110444b4 UnDecorator::getSignedDimension

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getSignedDimension(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getSignedDimension(void)

{
  DName *in_stack_00000004;
  
  if (*DAT_1109fb7c == '\0') {
    DName::DName(in_stack_00000004,2);
  }
  else if (*DAT_1109fb7c == '?') {
    DAT_1109fb7c = DAT_1109fb7c + 1;
    getDimension(true);
    operator+(SUB41(in_stack_00000004,0),(DName *)0x2d);
  }
  else {
    getDimension(SUB41(in_stack_00000004,0));
  }
  return in_stack_00000004;
}


// ==== 11044504 UnDecorator::getTemplateConstant

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateConstant(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl UnDecorator::getTemplateConstant(void)

{
  int iVar1;
  char *pcVar2;
  DName *pDVar3;
  long lVar4;
  DName *in_stack_00000004;
  char cVar5;
  char *pcVar6;
  DNameStatus DVar7;
  DName local_d4 [8];
  char local_cc [16];
  DName local_bc [16];
  undefined1 local_ac [32];
  char local_8c [8];
  DName local_84 [8];
  char local_7c;
  char local_7b;
  char local_7a;
  undefined1 local_78 [96];
  char local_18 [8];
  DName local_10 [8];
  uint local_8;
  
  pcVar2 = DAT_1109fb7c;
  local_8 = DAT_1109acf8 ^ (uint)local_78;
  cVar5 = *DAT_1109fb7c;
  DAT_1109fb7c = DAT_1109fb7c + 1;
  if (cVar5 < 'E') {
    if (cVar5 == 'D') {
LAB_11044693:
      getSignedDimension();
      if (((ushort)DAT_1109fb8c & 0x4000) != 0) {
        DName::getString(local_84,local_18,0x10);
        lVar4 = _atol(local_18);
        pcVar2 = (char *)(*DAT_1109fb90)(lVar4);
        if (pcVar2 != (char *)0x0) {
LAB_11044607:
          DName::DName(in_stack_00000004,pcVar2);
          goto LAB_110447ab;
        }
      }
      if (cVar5 == 'D') {
        pcVar6 = s__template_parameter_11075234;
        pcVar2 = local_8c;
      }
      else {
        pcVar6 = s__non_type_template_parameter_110751b0;
        pcVar2 = local_cc;
      }
      pDVar3 = (DName *)operator+(pcVar2,(DName *)pcVar6);
      DName::operator+(pDVar3,(char *)in_stack_00000004);
      goto LAB_110447ab;
    }
    if (cVar5 != '\0') {
      if (cVar5 == '0') {
        getSignedDimension();
        goto LAB_110447ab;
      }
      if (cVar5 == '1') {
        if (*DAT_1109fb7c == '@') {
          DAT_1109fb7c = pcVar2 + 2;
          pcVar2 = &DAT_1107524c;
          goto LAB_11044607;
        }
        getDecoratedName();
        pDVar3 = (DName *)DName::DName(local_bc,&DAT_11074f04);
LAB_110445e6:
        DName::operator+(pDVar3,in_stack_00000004);
        goto LAB_110447ab;
      }
      if (cVar5 == '2') {
        getSignedDimension();
        getSignedDimension();
        iVar1 = DName::isValid(local_84);
        pcVar2 = DAT_1109fb7c;
        if ((iVar1 == 0) || (iVar1 = DName::isValid(local_10), pcVar2 = DAT_1109fb7c, iVar1 == 0))
        goto LAB_1104463f;
        pcVar2 = DName::getString(local_84,&local_7b,100);
        if (pcVar2 != (char *)0x0) {
          local_7c = local_7b;
          if (local_7b == '-') {
            local_7b = local_7a;
            local_7a = '.';
          }
          else {
            local_7b = '.';
          }
          cVar5 = (char)local_ac;
          pDVar3 = (DName *)DName::DName(local_d4,&local_7c);
          pDVar3 = (DName *)DName::operator+(pDVar3,cVar5);
          goto LAB_110445e6;
        }
      }
      goto LAB_110445a0;
    }
LAB_1104463f:
    DAT_1109fb7c = pcVar2;
    DVar7 = 2;
  }
  else {
    if (cVar5 == 'E') {
      getDecoratedName();
      goto LAB_110447ab;
    }
    if ('E' < cVar5) {
      if (cVar5 < 'K') {
        DName::DName(local_84,'{');
        if (('G' < cVar5) && (cVar5 < 'K')) {
          pDVar3 = (DName *)getDecoratedName();
          DName::operator+=(local_84,pDVar3);
          DName::operator+=(local_84,',');
        }
        if (cVar5 == 'F') {
LAB_11044767:
          pDVar3 = (DName *)getSignedDimension();
          DName::operator+=(local_84,pDVar3);
          DName::operator+=(local_84,',');
LAB_11044784:
          pDVar3 = (DName *)getSignedDimension();
          DName::operator+=(local_84,pDVar3);
        }
        else {
          if (cVar5 == 'G') {
LAB_1104474a:
            pDVar3 = (DName *)getSignedDimension();
            DName::operator+=(local_84,pDVar3);
            DName::operator+=(local_84,',');
            goto LAB_11044767;
          }
          if (cVar5 == 'H') goto LAB_11044784;
          if (cVar5 == 'I') goto LAB_11044767;
          if (cVar5 == 'J') goto LAB_1104474a;
        }
        DName::operator+(local_84,(char)in_stack_00000004);
        goto LAB_110447ab;
      }
      if (cVar5 == 'Q') goto LAB_11044693;
      if (cVar5 == 'R') {
        getZName(SUB41(local_10,0));
        getSignedDimension();
        DName::DName(in_stack_00000004,local_10);
        goto LAB_110447ab;
      }
    }
LAB_110445a0:
    DVar7 = 1;
  }
  DName::DName(in_stack_00000004,DVar7);
LAB_110447ab:
  __security_check_cookie(local_8 ^ (uint)local_78);
  return;
}


// ==== 110447bf UnDecorator::getPtrRefDataType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPtrRefDataType(class DName const &,int)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getPtrRefDataType(DName *param_1,int param_2)

{
  int iVar1;
  DName *pDVar2;
  int in_stack_0000000c;
  char *pcVar3;
  char local_14 [8];
  DName local_c [8];
  
  if (*DAT_1109fb7c == '\0') {
    operator+((DNameStatus)param_1,(DName *)0x2);
    return param_1;
  }
  if ((in_stack_0000000c != 0) && (*DAT_1109fb7c == 'X')) {
    DAT_1109fb7c = DAT_1109fb7c + 1;
    iVar1 = DName::isEmpty((DName *)param_2);
    if (iVar1 == 0) {
      operator+((char *)param_1,(DName *)s_void_11075270);
      return param_1;
    }
    DName::DName(param_1,&DAT_110751fc);
    return param_1;
  }
  if (*DAT_1109fb7c == 'Y') {
    DAT_1109fb7c = DAT_1109fb7c + 1;
    getArrayType(param_1);
    return param_1;
  }
  FUN_110471d7(local_c,(DName *)param_2);
  if ((*(uint *)(param_2 + 4) & 0x400) == 0) {
    if ((*(uint *)(param_2 + 4) & 0x200) == 0) goto LAB_11044875;
    pcVar3 = s_cli__pin_ptr<_11075254;
  }
  else {
    pcVar3 = s_cli__array<_11075264;
  }
  pDVar2 = (DName *)operator+(local_14,(DName *)pcVar3);
  DName::operator=(local_c,pDVar2);
LAB_11044875:
  DName::DName(param_1,local_c);
  return param_1;
}


// ==== 110448ac UnDecorator::getTemplateArgumentList

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateArgumentList(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl UnDecorator::getTemplateArgumentList(void)

{
  DName DVar1;
  char cVar2;
  char *pcVar3;
  DName *pDVar4;
  long lVar5;
  char *pcVar6;
  DName *in_stack_00000004;
  char *pcVar7;
  char local_5c [8];
  DName local_54 [8];
  char local_4c [8];
  char local_44 [8];
  char local_3c [8];
  undefined4 local_34;
  uint local_30;
  DName local_2c [8];
  int local_24;
  undefined4 local_20;
  uint local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xfffff000;
  DAT_1109fb95 = 1;
  DVar1 = in_stack_00000004[4];
  local_24 = 1;
  do {
    if (((((byte)DVar1 & 0xf) != 0) || (*DAT_1109fb7c == '\0')) || (*DAT_1109fb7c == '@')) {
      DAT_1109fb95 = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (local_24 == 0) {
      DName::operator+=(in_stack_00000004,',');
    }
    else {
      local_24 = 0;
    }
    pcVar3 = DAT_1109fb7c;
    cVar2 = *DAT_1109fb7c;
    if ((int)cVar2 - 0x30U < 10) {
      DAT_1109fb7c = DAT_1109fb7c + 1;
      pDVar4 = Replicator::operator[](DAT_1109fb78,(int)cVar2 - 0x30U);
    }
    else {
      local_20 = 0;
      local_1c = local_1c & 0xfffff000;
      if (cVar2 == 'X') {
        DAT_1109fb7c = DAT_1109fb7c + 1;
        pcVar7 = &DAT_110751fc;
LAB_11044954:
        DName::operator=((DName *)&local_20,pcVar7);
      }
      else {
        if ((cVar2 == '$') && (DAT_1109fb7c[1] != '$')) {
          DAT_1109fb7c = DAT_1109fb7c + 1;
          pDVar4 = (DName *)getTemplateConstant();
        }
        else if (cVar2 == '?') {
          getSignedDimension();
          if (((ushort)DAT_1109fb8c & 0x4000) == 0) {
            pcVar7 = local_5c;
            pcVar6 = local_44;
          }
          else {
            DName::getString(local_2c,local_18,0x10);
            lVar5 = _atol(local_18);
            pcVar7 = (char *)(*DAT_1109fb90)(lVar5);
            if (pcVar7 != (char *)0x0) goto LAB_11044954;
            pcVar7 = local_3c;
            pcVar6 = local_4c;
          }
          pDVar4 = (DName *)operator+(pcVar6,(DName *)s__template_parameter_11075234);
          pDVar4 = (DName *)DName::operator+(pDVar4,pcVar7);
        }
        else {
          local_34 = 0;
          local_30 = local_30 & 0xfffff000;
          pDVar4 = (DName *)getPrimaryDataType(local_54);
        }
        DName::operator=((DName *)&local_20,pDVar4);
      }
      if ((1 < (int)DAT_1109fb7c - (int)pcVar3) && (*(int *)DAT_1109fb78 != 9)) {
        Replicator::operator+=(DAT_1109fb78,(DName *)&local_20);
      }
      pDVar4 = (DName *)&local_20;
    }
    DName::operator+=(in_stack_00000004,pDVar4);
    DVar1 = in_stack_00000004[4];
  } while( true );
}


// ==== 11044a64 UnDecorator::getOperatorName

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getOperatorName(bool,bool *)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getOperatorName(bool param_1,bool *param_2)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  DName *pDVar5;
  DName *this;
  DName *pDVar6;
  DName *extraout_ECX;
  undefined3 in_stack_00000005;
  undefined1 *in_stack_0000000c;
  char *pcVar7;
  DNameStatus DVar8;
  undefined1 local_a4 [24];
  undefined1 local_8c [8];
  undefined1 local_84 [16];
  undefined1 local_74 [8];
  undefined1 local_6c [8];
  DName local_64 [16];
  undefined1 local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined1 local_3c [16];
  undefined1 local_2c [8];
  char local_24 [8];
  undefined4 local_1c;
  uint local_18;
  DName local_14 [4];
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  cVar2 = *DAT_1109fb7c;
  local_8 = local_8 & 0xfffff000;
  local_18 = local_18 & 0xfffff000;
  bVar1 = false;
  pcVar3 = DAT_1109fb7c + 1;
  local_c = 0;
  local_1c = 0;
  if (cVar2 < 'B') {
    if (cVar2 == 'A') {
LAB_11044f9f:
      cVar2 = *DAT_1109fb7c;
      DAT_1109fb7c = pcVar3;
      DName::operator=((DName *)&local_c,*(char **)(s_operator_11074f20 + cVar2 * 4 + 4));
      pcVar3 = DAT_1109fb7c;
      if (bVar1) {
        iVar4 = DName::isEmpty((DName *)&local_c);
        if (iVar4 == 0) {
          local_8 = local_8 | 0x20;
        }
      }
      else {
LAB_11044ad5:
        DAT_1109fb7c = pcVar3;
        iVar4 = DName::isEmpty((DName *)&local_c);
        if (iVar4 == 0) {
          pDVar5 = (DName *)operator+(local_24,(DName *)s_operator_11074f20);
          DName::operator=((DName *)&local_c,pDVar5);
        }
      }
LAB_11044afe:
      pDVar5 = (DName *)&local_c;
LAB_11044b01:
      DName::DName(_param_1,pDVar5);
      return _param_1;
    }
    if (cVar2 == '\0') goto LAB_11044be7;
    if ('/' < cVar2) {
      if (cVar2 < '2') {
        local_1c = 0;
        if ((char)param_2 != '\0') {
          DAT_1109fb7c = pcVar3;
          getTemplateArgumentList();
          pDVar5 = (DName *)operator+((char)local_a4,(DName *)0x3c);
          DName::operator+=((DName *)&local_1c,pDVar5);
          cVar2 = DName::getLastChar((DName *)&local_1c);
          if (cVar2 == '>') {
            DName::operator+=((DName *)&local_1c,' ');
          }
          DName::operator+=((DName *)&local_1c,'>');
          if (in_stack_0000000c != (undefined1 *)0x0) {
            *in_stack_0000000c = 1;
          }
          if (*DAT_1109fb7c == '\0') {
            pDVar5 = (DName *)&local_1c;
            goto LAB_11044b01;
          }
          pcVar3 = DAT_1109fb7c + 1;
        }
        DAT_1109fb7c = pcVar3;
        pDVar5 = (DName *)getZName(SUB41(local_3c,0));
        DName::operator=((DName *)&local_c,pDVar5);
        DAT_1109fb7c = pcVar3;
        iVar4 = DName::isEmpty((DName *)&local_c);
        if ((iVar4 == 0) && (pcVar3[-1] == '1')) {
          pDVar5 = (DName *)operator+((char)local_8c,(DName *)0x7e);
          DName::operator=((DName *)&local_c,pDVar5);
        }
        iVar4 = DName::isEmpty((DName *)&local_1c);
        if (iVar4 == 0) {
          DName::operator+=((DName *)&local_c,extraout_ECX);
        }
        goto LAB_11044afe;
      }
      if (cVar2 < ':') {
        pcVar7 = *(char **)(&DAT_11074f40 + *DAT_1109fb7c * 4);
        DAT_1109fb7c = pcVar3;
        goto LAB_11044acd;
      }
    }
  }
  else {
    if (cVar2 == 'B') {
      bVar1 = true;
      goto LAB_11044f9f;
    }
    if (cVar2 < 'C') goto LAB_11044cee;
    if (cVar2 < '[') goto LAB_11044f9f;
    if (cVar2 == '_') {
      cVar2 = *pcVar3;
      pcVar3 = DAT_1109fb7c + 2;
      if (cVar2 < 'P') {
        if ('C' < cVar2) {
LAB_11044f7c:
          pcVar7 = *(char **)(s___cdecl_11074fb0 + DAT_1109fb7c[1] * 4 + 4);
          DAT_1109fb7c = pcVar3;
LAB_11044c65:
          DName::DName(_param_1,pcVar7);
          return _param_1;
        }
        if (cVar2 < ':') {
          if (cVar2 == '9') {
            pcVar7 = DAT_1109fb7c + 1;
            DAT_1109fb7c = pcVar3;
            DName::DName(local_14,(&PTR_s___pascal_11074fd0)[*pcVar7]);
            local_10 = local_10 | 0x800;
LAB_11044c9c:
            pDVar5 = local_14;
            goto LAB_11044b01;
          }
          if (cVar2 == '\0') {
LAB_11044be7:
            pcVar3 = pcVar3 + -1;
LAB_11044bed:
            DAT_1109fb7c = pcVar3;
            DVar8 = 2;
            goto LAB_11044bef;
          }
          if ('/' < cVar2) {
            if (cVar2 < '7') {
              pcVar7 = (&PTR_s___pascal_11074fd0)[DAT_1109fb7c[1]];
              DAT_1109fb7c = pcVar3;
              goto LAB_11044acd;
            }
            if (cVar2 < '9') {
              pcVar7 = (&PTR_s___pascal_11074fd0)[DAT_1109fb7c[1]];
              DAT_1109fb7c = pcVar3;
              goto LAB_11044c65;
            }
          }
        }
        else if (cVar2 == '?') {
          cVar2 = *pcVar3;
          pcVar3 = DAT_1109fb7c + 3;
          if (cVar2 == '\0') goto LAB_11044be7;
          if (cVar2 == '0') {
            pcVar7 = s__anonymous_namespace__1107527c;
            DAT_1109fb7c = pcVar3;
LAB_11044cc3:
            getStringEncoding((char *)local_14,(int)pcVar7);
            local_10 = local_10 | 0x100;
            goto LAB_11044c9c;
          }
        }
        else if ('@' < cVar2) {
          if (cVar2 < 'C') goto LAB_11044f7c;
          if (cVar2 == 'C') {
            pcVar7 = s__string__11074e54;
            DAT_1109fb7c = pcVar3;
            goto LAB_11044cc3;
          }
        }
      }
      else if (cVar2 < 'U') {
        if ('R' < cVar2) goto LAB_11044f7c;
        pDVar5 = _param_1;
        if (cVar2 == 'P') {
          pcVar7 = DAT_1109fb7c + 1;
          DAT_1109fb7c = pcVar3;
          DName::operator=((DName *)&local_c,*(char **)(s___cdecl_11074fb0 + *pcVar7 * 4 + 4));
          pDVar6 = (DName *)getOperatorName(SUB41(local_84,0),(bool *)0x0);
          DName::operator=((DName *)&local_1c,pDVar6);
          iVar4 = DName::isEmpty((DName *)&local_1c);
          if ((iVar4 != 0) || (pcVar3 = DAT_1109fb7c, (local_18 & 0x40) == 0)) {
LAB_11044d70:
            pDVar6 = (DName *)&local_c;
LAB_11044d7a:
            DName::operator+(pDVar6,pDVar5);
            return _param_1;
          }
        }
        else {
          if (cVar2 == 'Q') goto LAB_11044ad5;
          if (cVar2 == 'R') {
            pcVar7 = DAT_1109fb7c + 1;
            DAT_1109fb7c = pcVar3;
            DName::operator=((DName *)&local_c,*(char **)(s___cdecl_11074fb0 + *pcVar7 * 4 + 4));
            DName::operator=((DName *)&local_1c,*(char **)(&DAT_11074f34 + *DAT_1109fb7c * 4));
            pcVar3 = DAT_1109fb7c;
            iVar4 = (int)*DAT_1109fb7c;
            DAT_1109fb7c = DAT_1109fb7c + 1;
            if (iVar4 == 0x30) {
              getDataType(local_14);
              pDVar6 = local_64;
              this = (DName *)DName::operator+(local_14,(char)local_74);
              pDVar6 = (DName *)DName::operator+(this,pDVar6);
              goto LAB_11044d7a;
            }
            if (iVar4 == 0x31) {
              DName::operator+((DName *)&local_c,local_14);
              cVar2 = (char)local_4c;
              pDVar5 = (DName *)getSignedDimension();
              pDVar5 = (DName *)DName::operator+(pDVar5,cVar2);
              DName::operator+=(local_14,pDVar5);
              cVar2 = (char)local_2c;
              pDVar5 = (DName *)getSignedDimension();
              pDVar5 = (DName *)DName::operator+(pDVar5,cVar2);
              DName::operator+=(local_14,pDVar5);
              cVar2 = (char)local_6c;
              pDVar5 = (DName *)getSignedDimension();
              pDVar5 = (DName *)DName::operator+(pDVar5,cVar2);
              DName::operator+=(local_14,pDVar5);
              cVar2 = (char)local_44;
              pDVar5 = (DName *)getDimension(SUB41(local_54,0));
              pDVar5 = (DName *)DName::operator+(pDVar5,cVar2);
              DName::operator+=(local_14,pDVar5);
              DName::operator+(local_14,param_1);
              return _param_1;
            }
            if (iVar4 - 0x32U < 3) goto LAB_11044d70;
            goto LAB_11044bed;
          }
        }
      }
      else if ('T' < cVar2) {
        if (cVar2 < 'W') {
          pcVar7 = *(char **)(s___cdecl_11074fb0 + DAT_1109fb7c[1] * 4 + 4);
          DAT_1109fb7c = pcVar3;
LAB_11044acd:
          DName::operator=((DName *)&local_c,pcVar7);
          pcVar3 = DAT_1109fb7c;
          goto LAB_11044ad5;
        }
        if ('W' < cVar2) {
          if (cVar2 < 'Z') goto LAB_11044f7c;
          if (cVar2 == '_') {
            cVar2 = *pcVar3;
            pcVar3 = DAT_1109fb7c + 3;
            if ('@' < cVar2) {
              if ('D' < cVar2) {
                if (cVar2 < 'G') {
                  pcVar7 = DAT_1109fb7c + 2;
                  DAT_1109fb7c = pcVar3;
                  DName::DName(local_14,(&PTR_DAT_11075018)[*pcVar7]);
                  if (*DAT_1109fb7c == '?') {
                    pDVar5 = (DName *)getDecoratedName();
                    DName::operator+=(local_14,pDVar5);
                    if (*DAT_1109fb7c == '@') {
                      DAT_1109fb7c = DAT_1109fb7c + 1;
                    }
                  }
                  else {
                    pDVar5 = (DName *)getSymbolName();
                    DName::operator+=(local_14,pDVar5);
                  }
                  DName::operator+=(local_14,&DAT_11075278);
                  goto LAB_11044c9c;
                }
                if ('J' < cVar2) goto LAB_11044cee;
              }
              pcVar7 = (&PTR_DAT_11075018)[DAT_1109fb7c[2]];
              DAT_1109fb7c = pcVar3;
              goto LAB_11044c65;
            }
          }
        }
      }
    }
  }
LAB_11044cee:
  DAT_1109fb7c = pcVar3;
  DVar8 = 1;
LAB_11044bef:
  DName::DName(_param_1,DVar8);
  return _param_1;
}


// ==== 11044fd3 UnDecorator::getTemplateName

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getTemplateName(bool)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getTemplateName(bool param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  DName *pDVar5;
  int iVar6;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  Replicator local_d4 [60];
  Replicator local_98 [60];
  Replicator local_5c [60];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined4 local_10;
  uint local_c;
  char local_5;
  
  uVar3 = DAT_1109fb78;
  uVar2 = DAT_1109fb74;
  uVar1 = DAT_1109fb70;
  if ((*DAT_1109fb7c == '?') && (DAT_1109fb7c[1] == '$')) {
    DAT_1109fb7c = DAT_1109fb7c + 2;
    Replicator::Replicator(local_98);
    Replicator::Replicator(local_5c);
    Replicator::Replicator(local_d4);
    local_10 = 0;
    local_c = local_c & 0xfffff000;
    DAT_1109fb70 = local_98;
    DAT_1109fb74 = local_5c;
    DAT_1109fb78 = local_d4;
    local_5 = '\0';
    if (*DAT_1109fb7c == '?') {
      DAT_1109fb7c = DAT_1109fb7c + 1;
      pDVar5 = (DName *)getOperatorName(SUB41(local_18,0),(bool *)0x1);
    }
    else {
      pDVar5 = (DName *)getZName(SUB41(local_18,0));
    }
    DName::operator=((DName *)&local_10,pDVar5);
    iVar6 = DName::isEmpty((DName *)&local_10);
    if (iVar6 != 0) {
      DAT_1109fb94 = 1;
    }
    if (local_5 == '\0') {
      getTemplateArgumentList();
      pDVar5 = (DName *)operator+((char)local_20,(DName *)0x3c);
      DName::operator+=((DName *)&local_10,pDVar5);
      cVar4 = DName::getLastChar((DName *)&local_10);
      if (cVar4 == '>') {
        DName::operator+=((DName *)&local_10,' ');
      }
      DName::operator+=((DName *)&local_10,'>');
      if (in_stack_00000008 != '\0') {
        DAT_1109fb7c = DAT_1109fb7c + 1;
      }
    }
    DAT_1109fb70 = (Replicator *)uVar1;
    DAT_1109fb74 = (Replicator *)uVar2;
    DAT_1109fb78 = (Replicator *)uVar3;
    DName::DName(_param_1,(DName *)&local_10);
  }
  else {
    DName::DName(_param_1,1);
  }
  return _param_1;
}


// ==== 11045126 UnDecorator::getZName

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getZName(bool)
   
   Library: Visual Studio 2005 Release */

void __cdecl UnDecorator::getZName(bool param_1)

{
  DName *pDVar1;
  long lVar2;
  DName *pDVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  DName local_3c [8];
  DName local_34 [8];
  DName *local_2c;
  DName local_28 [8];
  undefined4 local_20;
  uint local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  uVar4 = (int)*DAT_1109fb7c - 0x30;
  local_2c = _param_1;
  if (uVar4 < 10) {
    DAT_1109fb7c = DAT_1109fb7c + 1;
    pDVar1 = Replicator::operator[](DAT_1109fb74,uVar4);
    DName::DName(_param_1,pDVar1);
    goto LAB_11045303;
  }
  local_20 = 0;
  local_1c = local_1c & 0xfffff000;
  if (*DAT_1109fb7c == '?') {
    pDVar1 = (DName *)getTemplateName(SUB41(local_28,0));
    DName::operator=((DName *)&local_20,pDVar1);
    pcVar7 = DAT_1109fb7c + 1;
    if (*DAT_1109fb7c != '@') {
      DName::operator=((DName *)&local_20,(*DAT_1109fb7c == '\0') + 1);
      pcVar7 = DAT_1109fb7c;
    }
  }
  else {
    pcVar5 = s_template_parameter__110752a8;
    pcVar8 = s_template_parameter__110752a8;
    iVar6 = 0x12;
    pcVar7 = DAT_1109fb7c;
    do {
      if ((*pcVar7 == '\0') || (*pcVar7 != *pcVar8)) break;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (*pcVar7 == *pcVar8) {
      DAT_1109fb7c = DAT_1109fb7c + 0x13;
    }
    else {
      pcVar5 = s_generic_type__11075298;
      pcVar8 = s_generic_type__11075298;
      iVar6 = 0xc;
      pcVar7 = DAT_1109fb7c;
      do {
        if ((*pcVar7 == '\0') || (*pcVar7 != *pcVar8)) break;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (*pcVar7 != *pcVar8) {
        pDVar1 = (DName *)DName::DName(local_34,&DAT_1109fb7c,'@');
        DName::operator=((DName *)&local_20,pDVar1);
        pcVar7 = DAT_1109fb7c;
        goto LAB_110452da;
      }
      DAT_1109fb7c = DAT_1109fb7c + 0xd;
    }
    getSignedDimension();
    if (((ushort)DAT_1109fb8c & 0x4000) == 0) {
      DName::operator=((DName *)&local_20,&DAT_11075294);
      pDVar1 = local_34;
      pDVar3 = local_3c;
    }
    else {
      DName::getString(local_28,local_18,0x10);
      lVar2 = _atol(local_18);
      pcVar7 = (char *)(*DAT_1109fb90)(lVar2);
      if (pcVar7 != (char *)0x0) {
        DName::operator=((DName *)&local_20,pcVar7);
        pcVar7 = DAT_1109fb7c;
        goto LAB_110452da;
      }
      DName::operator=((DName *)&local_20,&DAT_11075294);
      pDVar1 = local_3c;
      pDVar3 = local_34;
    }
    pDVar3 = (DName *)operator+((char *)pDVar3,(DName *)pcVar5);
    pDVar1 = (DName *)DName::operator+(pDVar3,(char *)pDVar1);
    DName::operator+=((DName *)&local_20,pDVar1);
    pcVar7 = DAT_1109fb7c;
  }
LAB_110452da:
  DAT_1109fb7c = pcVar7;
  if ((in_stack_00000008 != '\0') && (*(int *)DAT_1109fb74 != 9)) {
    Replicator::operator+=(DAT_1109fb74,(DName *)&local_20);
  }
  DName::DName(local_2c,(DName *)&local_20);
LAB_11045303:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 11045310 UnDecorator::getScopedName

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getScopedName(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getScopedName(void)

{
  DName *pDVar1;
  DName *pDVar2;
  int iVar3;
  DName *this;
  DName *in_stack_00000004;
  char *pcVar4;
  DName local_1c [8];
  char local_14 [8];
  DName local_c [8];
  
  *(undefined4 *)in_stack_00000004 = 0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xfffff000;
  pDVar1 = (DName *)getZName(SUB41(local_c,0));
  DName::operator=(in_stack_00000004,pDVar1);
  if ((((byte)in_stack_00000004[4] & 0xf) == 0) && (*DAT_1109fb7c != '\0')) {
    if (*DAT_1109fb7c == '@') goto LAB_11045389;
    pDVar1 = local_c;
    pcVar4 = local_14;
    pDVar2 = (DName *)getScope();
    pDVar2 = (DName *)DName::operator+(pDVar2,pcVar4);
    pDVar1 = (DName *)DName::operator+(pDVar2,pDVar1);
    DName::operator=(in_stack_00000004,pDVar1);
  }
  if (*DAT_1109fb7c != '@') {
    if (*DAT_1109fb7c == '\0') {
      iVar3 = DName::isEmpty(in_stack_00000004);
      if (iVar3 != 0) {
        DName::operator=(this,2);
        return in_stack_00000004;
      }
      pDVar1 = local_1c;
      pcVar4 = local_14;
      pDVar2 = (DName *)DName::DName(local_c,2);
      pDVar2 = (DName *)DName::operator+(pDVar2,pcVar4);
      pDVar1 = (DName *)DName::operator+(pDVar2,pDVar1);
      DName::operator=(in_stack_00000004,pDVar1);
      return in_stack_00000004;
    }
    *(undefined4 *)in_stack_00000004 = 0;
    if (((byte)*(uint *)(in_stack_00000004 + 4) & 0xf) == 3) {
      return in_stack_00000004;
    }
    *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xfffffff1 | 1;
    return in_stack_00000004;
  }
LAB_11045389:
  DAT_1109fb7c = DAT_1109fb7c + 1;
  return in_stack_00000004;
}


// ==== 11045403 UnDecorator::getECSUDataType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getECSUDataType(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getECSUDataType(void)

{
  char cVar1;
  DName *pDVar2;
  uint uVar3;
  uint uVar4;
  DName *in_stack_00000004;
  char *pcVar5;
  char local_1c [8];
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  pcVar5 = DAT_1109fb7c;
  uVar4 = 1;
  uVar3 = ~(DAT_1109fb8c >> 0xf) & 1;
  if ((uVar3 == 0) || ((DAT_1109fb8c & 0x1000) != 0)) {
    uVar4 = 0;
  }
  cVar1 = *DAT_1109fb7c;
  local_c = 0;
  local_8 = local_8 & 0xfffff000;
  DAT_1109fb7c = DAT_1109fb7c + 1;
  if (cVar1 == '\0') {
    DAT_1109fb7c = pcVar5;
    DName::DName(in_stack_00000004,s__unknown_ecsu__110752c0 + 2);
    return in_stack_00000004;
  }
  if (cVar1 == 'T') {
    pcVar5 = s_union_110752d0;
  }
  else if (cVar1 == 'U') {
    pcVar5 = s_struct_110752d8;
  }
  else if (cVar1 == 'V') {
    pcVar5 = s_class_110752e0;
  }
  else {
    if (cVar1 == 'W') {
      getEnumType();
      pDVar2 = (DName *)operator+(local_1c,(DName *)s_enum_110752e8);
      DName::operator=((DName *)&local_c,pDVar2);
      goto LAB_110454ae;
    }
    if (cVar1 == 'X') {
      pcVar5 = s_coclass_110752f0;
    }
    else {
      uVar3 = uVar4;
      if (cVar1 != 'Y') goto LAB_110454ae;
      pcVar5 = s_cointerface_110752fc;
    }
  }
  DName::operator=((DName *)&local_c,pcVar5);
  uVar3 = uVar4;
LAB_110454ae:
  local_14 = 0;
  local_10 = local_10 & 0xfffff000;
  if (uVar3 != 0) {
    DName::operator=((DName *)&local_14,(DName *)&local_c);
  }
  getScopedName();
  DName::operator+=((DName *)&local_14,(DName *)&local_c);
  DName::DName(in_stack_00000004,(DName *)&local_14);
  return in_stack_00000004;
}


// ==== 11045503 UnDecorator::getSymbolName

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getSymbolName(void)
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl UnDecorator::getSymbolName(void)

{
  undefined4 in_stack_00000004;
  bool bVar1;
  
  bVar1 = SUB41(in_stack_00000004,0);
  if (*DAT_1109fb7c == '?') {
    if (DAT_1109fb7c[1] == '$') {
      getTemplateName(bVar1);
    }
    else {
      DAT_1109fb7c = DAT_1109fb7c + 1;
      getOperatorName(bVar1,(bool *)0x0);
    }
  }
  else {
    getZName(bVar1);
  }
  return in_stack_00000004;
}


// ==== 11045549 UnDecorator::getBasedType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getBasedType(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getBasedType(void)

{
  char cVar1;
  char *pcVar2;
  DName *pDVar3;
  DName *in_stack_00000004;
  DName local_c [8];
  
  pcVar2 = UScore(0);
  DName::DName(local_c,pcVar2);
  if (*DAT_1109fb7c == '\0') {
    DName::operator+=(local_c,2);
  }
  else {
    cVar1 = *DAT_1109fb7c;
    DAT_1109fb7c = DAT_1109fb7c + 1;
    if (cVar1 == '0') {
      DName::operator+=(local_c,&DAT_110751fc);
    }
    else if (cVar1 == '2') {
      pDVar3 = (DName *)getScopedName();
      DName::operator+=(local_c,pDVar3);
    }
    else if (cVar1 == '5') {
      DName::DName(in_stack_00000004,1);
      return in_stack_00000004;
    }
  }
  DName::operator+=(local_c,&DAT_1107530c);
  DName::DName(in_stack_00000004,local_c);
  return in_stack_00000004;
}


// ==== 110455db UnDecorator::composeDeclaration

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::composeDeclaration(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::composeDeclaration(DName *param_1)

{
  uint uVar1;
  uint uVar2;
  DName *pDVar3;
  DName *pDVar4;
  int iVar5;
  uint uVar6;
  DName *pDVar7;
  DName *pDVar8;
  bool bVar9;
  DName *in_stack_00000008;
  char cVar10;
  char cVar11;
  char cVar12;
  char *pcVar13;
  DName local_70 [8];
  char local_68 [8];
  DName local_60 [8];
  DName local_58 [8];
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  DName local_20 [4];
  int local_1c;
  undefined4 local_18;
  uint local_14;
  undefined1 local_10 [4];
  uint local_c;
  uint local_8;
  
  local_28 = 0;
  local_24 = local_24 & 0xfffff000;
  uVar1 = getTypeEncoding();
  local_1c = DName::isUDC(in_stack_00000008);
  if (uVar1 == 0xffff) {
    DName::DName(param_1,1);
    return param_1;
  }
  if (uVar1 == 0xfffe) {
    operator+((DNameStatus)param_1,(DName *)0x2);
    return param_1;
  }
  if (uVar1 == 0xfffd) {
    DName::DName(param_1,in_stack_00000008);
    return param_1;
  }
  local_8 = uVar1 & 0x8000;
  if (local_8 == 0) {
LAB_11045bdb:
    DName::operator+=((DName *)&local_28,in_stack_00000008);
    if (local_8 == 0) {
      if (((uVar1 & 0x7c00) == 0x6800) || ((uVar1 & 0x7c00) == 0x7000)) {
        getVfTableType(param_1);
        return param_1;
      }
      if ((uVar1 & 0x7c00) == 0x6000) {
        getDimension(SUB41(&local_50,0));
        pDVar3 = local_70;
        pDVar4 = param_1;
        pDVar8 = (DName *)DName::operator+((DName *)&local_28,(char)local_68);
        pDVar3 = (DName *)DName::operator+(pDVar8,pDVar3);
        DName::operator+(pDVar3,(char *)pDVar4);
        return param_1;
      }
      if ((uVar1 & 0x7c00) == 0x7c00) {
        getVdispMapType(param_1);
        return param_1;
      }
      uVar2 = uVar1 & 0x6000;
    }
    else {
      uVar2 = (uVar1 & 0x1800) - 0x800;
    }
    if (uVar2 == 0) {
      uVar2 = uVar1 & 0x400;
    }
    else {
      uVar2 = uVar1 & 0x1000;
    }
    if ((uVar2 == 0) || ((uVar1 & 0x1b00) != 0x1000 || local_8 == 0)) {
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar2 == 0) {
        uVar2 = uVar1 & 0x400;
      }
      else {
        uVar2 = uVar1 & 0x1000;
      }
      if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1100 && local_8 != 0)) {
        pcVar13 = s__template_static_data_member_con_11075390;
        goto LAB_11045d84;
      }
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar2 == 0) {
        uVar2 = uVar1 & 0x400;
      }
      else {
        uVar2 = uVar1 & 0x1000;
      }
      if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1200 && local_8 != 0)) {
        pcVar13 = s__template_static_data_member_des_11075360;
        goto LAB_11045d84;
      }
      if (local_8 == 0) {
        if ((uVar1 & 0x7c00) == 0x7800) goto LAB_11046109;
        goto LAB_11045da3;
      }
LAB_11045da9:
      uVar2 = (uVar1 & 0x1800) - 0x800;
    }
    else {
      pcVar13 = s__local_static_destructor_helper__110753c4;
LAB_11045d84:
      DName::operator+=((DName *)&local_28,pcVar13);
LAB_11045da3:
      if (local_8 != 0) goto LAB_11045da9;
      uVar2 = uVar1 & 0x6000;
    }
    if (uVar2 == 0) {
      uVar2 = uVar1 & 0x400;
    }
    else {
      uVar2 = uVar1 & 0x1000;
    }
    if ((uVar2 == 0) ||
       (((uVar1 & 0x1b00) != 0x1100 || local_8 == 0 && ((uVar1 & 0x1b00) != 0x1200 || local_8 == 0))
       )) {
      pDVar3 = (DName *)getExternalDataType(local_70);
    }
    else {
      pDVar3 = (DName *)operator+((char *)local_70,(DName *)&DAT_11075410);
    }
LAB_11045e2a:
    DName::operator=((DName *)&local_28,pDVar3);
  }
  else {
    local_14 = uVar1 & 0x1800;
    local_c = (uint)(local_14 == 0x800);
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1000)) goto LAB_11045bdb;
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 != 0) && (((uVar1 & 0x1b00) == 0x1100 || ((uVar1 & 0x1b00) == 0x1200))))
    goto LAB_11045bdb;
    if ((uVar1 & 0x4000) != 0) {
      if (((~(DAT_1109fb8c >> 1) & 1) == 0) || ((~(DAT_1109fb8c >> 3) & 1) == 0)) {
        pDVar3 = (DName *)getBasedType();
        DName::operator|=((DName *)&local_28,pDVar3);
      }
      else {
        getBasedType();
        pDVar3 = (DName *)operator+((char)&local_48,(DName *)0x20);
        DName::operator=((DName *)&local_28,pDVar3);
      }
    }
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 == 0) || (local_14 != 0x1800)) {
      local_3c = local_3c & 0xfffff000;
      local_34 = local_34 & 0xfffff000;
      local_14 = local_14 & 0xfffff000;
      local_44 = local_44 & 0xfffff000;
      local_2c = local_2c & 0xfffff000;
      local_40 = 0;
      local_38 = 0;
      local_18 = 0;
      local_48 = 0;
      local_30 = 0;
      if (local_c == 0) {
        uVar2 = uVar1 & 0x1000;
      }
      else {
        uVar2 = uVar1 & 0x400;
      }
      if (uVar2 != 0) {
        if (local_c != 0) {
          if ((uVar1 & 0x700) == 0x600) {
            getDimension(SUB41(&local_50,0));
            DName::operator=((DName *)&local_40,(DName *)&local_50);
            getDimension(SUB41(&local_50,0));
            DName::operator=((DName *)&local_38,(DName *)&local_50);
          }
          else if ((local_c == 0) || ((uVar1 & 0x700) != 0x500)) goto LAB_110458db;
          getDimension(SUB41(&local_50,0));
          DName::operator=((DName *)&local_18,(DName *)&local_50);
        }
LAB_110458db:
        getDimension(SUB41(&local_50,0));
        DName::operator=((DName *)&local_48,(DName *)&local_50);
      }
      if ((local_c != 0) && ((uVar1 & 0x700) != 0x200)) {
        if (((byte)DAT_1109fb8c & 0x60) == 0x60) {
          pDVar3 = (DName *)getThisType();
          DName::operator|=((DName *)&local_30,pDVar3);
        }
        else {
          pDVar3 = (DName *)getThisType();
          DName::operator=((DName *)&local_30,pDVar3);
        }
      }
      if (((~(DAT_1109fb8c >> 1) & 1) == 0) || ((~(DAT_1109fb8c >> 4) & 1) == 0)) {
        pDVar3 = (DName *)getCallingConvention();
        DName::operator|=((DName *)&local_28,pDVar3);
      }
      else {
        pDVar3 = (DName *)&local_50;
        pDVar4 = (DName *)getCallingConvention();
        pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
        DName::operator=((DName *)&local_28,pDVar3);
      }
      iVar5 = DName::isEmpty(in_stack_00000008);
      if (iVar5 == 0) {
        iVar5 = DName::isEmpty((DName *)&local_28);
        if ((iVar5 == 0) && ((DAT_1109fb8c & 0x1000) == 0)) {
          pDVar3 = (DName *)operator+((char)local_58,(DName *)0x20);
          DName::operator+=((DName *)&local_28,pDVar3);
        }
        else {
          DName::operator=((DName *)&local_28,in_stack_00000008);
        }
      }
      local_4c = local_4c & 0xfffff000;
      pDVar3 = (DName *)0x0;
      local_50 = 0;
      if (local_1c == 0) {
        pDVar3 = HeapManager::getMemory((HeapManager *)&DAT_1109fb5c,8,0);
        if (pDVar3 == (DName *)0x0) {
          pDVar3 = (DName *)0x0;
        }
        else {
          *(undefined4 *)pDVar3 = 0;
          *(uint *)(pDVar3 + 4) = *(uint *)(pDVar3 + 4) & 0xfffff000;
        }
        pDVar4 = (DName *)getReturnType(local_58);
        DName::operator=((DName *)&local_50,pDVar4);
      }
      else {
        getReturnType(local_58);
        pDVar4 = (DName *)operator+((char *)local_20,(DName *)&DAT_11075410);
        DName::operator+=((DName *)&local_28,pDVar4);
        if ((DAT_1109fb8c & 0x1000) != 0) goto LAB_11046109;
      }
      uVar2 = local_c;
      if (local_c == 0) {
        uVar6 = uVar1 & 0x1000;
      }
      else {
        uVar6 = uVar1 & 0x400;
      }
      if (uVar6 != 0) {
        if (local_c == 0) {
LAB_11045b09:
          DName::operator+=((DName *)&local_28,s__adjustor__110753e8);
        }
        else {
          if ((uVar1 & 0x700) == 0x600) {
            cVar12 = (char)local_58;
            pDVar4 = local_20;
            cVar11 = (char)local_10;
            pDVar8 = local_60;
            cVar10 = (char)local_68;
            pDVar7 = (DName *)operator+((char *)local_70,(DName *)s__vtordispex__11075400);
            pDVar7 = (DName *)DName::operator+(pDVar7,cVar10);
            pDVar8 = (DName *)DName::operator+(pDVar7,pDVar8);
            pDVar8 = (DName *)DName::operator+(pDVar8,cVar11);
            pDVar4 = (DName *)DName::operator+(pDVar8,pDVar4);
          }
          else {
            if ((local_c == 0) || ((uVar1 & 0x700) != 0x500)) goto LAB_11045b09;
            cVar12 = (char)local_70;
            pDVar4 = (DName *)operator+(local_68,(DName *)s__vtordisp__110753f4);
          }
          pDVar4 = (DName *)DName::operator+(pDVar4,cVar12);
          DName::operator+=((DName *)&local_28,pDVar4);
        }
        pDVar4 = (DName *)DName::operator+((DName *)&local_48,(char *)local_70);
        DName::operator+=((DName *)&local_28,pDVar4);
      }
      cVar12 = (char)local_70;
      getArgumentTypes();
      pDVar4 = (DName *)operator+((char)local_60,(DName *)0x28);
      pDVar4 = (DName *)DName::operator+(pDVar4,cVar12);
      DName::operator+=((DName *)&local_28,pDVar4);
      if ((uVar2 != 0) && ((uVar1 & 0x700) != 0x200)) {
        DName::operator+=((DName *)&local_28,(DName *)&local_30);
      }
      if ((~(DAT_1109fb8c >> 8) & 1) == 0) {
        pDVar4 = (DName *)getThrowTypes();
        DName::operator|=((DName *)&local_28,pDVar4);
      }
      else {
        pDVar4 = (DName *)getThrowTypes();
        DName::operator+=((DName *)&local_28,pDVar4);
      }
      if (((~(DAT_1109fb8c >> 2) & 1) == 0) || (pDVar3 == (DName *)0x0)) goto LAB_11045e33;
      DName::operator=(pDVar3,(DName *)&local_28);
      pDVar3 = (DName *)&local_50;
      goto LAB_11045e2a;
    }
    getDimension(SUB41(&local_50,0));
    pDVar3 = (DName *)&local_48;
    pDVar4 = (DName *)DName::operator+(in_stack_00000008,(char)&local_40);
    pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
    DName::operator+=((DName *)&local_28,pDVar3);
    getVCallThunkType();
    if ((DAT_1109fb8c & 0x1000) == 0) {
      pcVar13 = (char *)&local_48;
      pDVar3 = (DName *)operator+((char)&local_40,(DName *)0x2c);
      pDVar3 = (DName *)DName::operator+(pDVar3,pcVar13);
      DName::operator+=((DName *)&local_28,pDVar3);
    }
    DName::operator+=((DName *)&local_28,&DAT_11075414);
    getCallingConvention();
    if ((((~(DAT_1109fb8c >> 1) & 1) != 0) && ((~(DAT_1109fb8c >> 4) & 1) != 0)) &&
       ((DAT_1109fb8c & 0x1000) == 0)) {
      pDVar3 = (DName *)&local_48;
      cVar12 = (char)&local_40;
      pDVar4 = (DName *)operator+((char)&local_38,(DName *)0x20);
      pDVar4 = (DName *)DName::operator+(pDVar4,cVar12);
      pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
      goto LAB_11045e2a;
    }
  }
LAB_11045e33:
  if (local_8 == 0) {
    uVar2 = uVar1 & 0x6000;
  }
  else {
    uVar2 = (uVar1 & 0x1800) - 0x800;
  }
  if (uVar2 == 0) {
    if ((~(DAT_1109fb8c >> 9) & 1) != 0) {
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if ((uVar2 == 0) && (local_8 == 0 || (uVar1 & 0x700) == 0x200)) {
        pDVar3 = (DName *)operator+((char *)local_70,(DName *)s_static_11075358);
        DName::operator=((DName *)&local_28,pDVar3);
      }
      if (local_8 == 0) {
LAB_11045ef1:
        uVar2 = uVar1 & 0x6000;
LAB_11045ef5:
        if (uVar2 == 0) {
          uVar2 = uVar1 & 0x400;
        }
        else {
          uVar2 = uVar1 & 0x1000;
        }
        if (uVar2 == 0) goto LAB_11045fa6;
        if (local_8 == 0) {
          uVar2 = uVar1 & 0x6000;
        }
        else {
          uVar2 = (uVar1 & 0x1800) - 0x800;
        }
        if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x500)) {
          if (local_8 == 0) {
            uVar2 = uVar1 & 0x6000;
          }
          else {
            uVar2 = (uVar1 & 0x1800) - 0x800;
          }
          if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x600)) {
            if (local_8 == 0) {
              uVar2 = uVar1 & 0x6000;
            }
            else {
              uVar2 = (uVar1 & 0x1800) - 0x800;
            }
            if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x400)) goto LAB_11045fa6;
          }
        }
      }
      else if ((uVar1 & 0x700) != 0x100) {
        if (local_8 == 0) goto LAB_11045ef1;
        uVar2 = (uVar1 & 0x1800) - 0x800;
        goto LAB_11045ef5;
      }
      pDVar3 = (DName *)operator+((char *)local_70,(DName *)s_virtual_1107534c);
      DName::operator=((DName *)&local_28,pDVar3);
    }
LAB_11045fa6:
    if ((~(DAT_1109fb8c >> 7) & 1) != 0) {
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar2 == 0) {
        if (local_8 == 0) {
          bVar9 = (uVar1 & 0x1800) != 0x800;
        }
        else {
          bVar9 = ((byte)uVar1 & 0xc0) != 0x40;
        }
        if (bVar9) goto LAB_11045ffa;
        pcVar13 = s_private__11075340;
LAB_11046075:
        pDVar3 = (DName *)operator+((char *)local_70,(DName *)pcVar13);
        DName::operator=((DName *)&local_28,pDVar3);
      }
      else {
LAB_11045ffa:
        if (local_8 == 0) {
          uVar2 = uVar1 & 0x6000;
        }
        else {
          uVar2 = (uVar1 & 0x1800) - 0x800;
        }
        if (uVar2 == 0) {
          if (local_8 == 0) {
            bVar9 = (uVar1 & 0x1800) != 0x1000;
          }
          else {
            bVar9 = ((byte)uVar1 & 0xc0) != 0x80;
          }
          if (!bVar9) {
            pcVar13 = s_protected__11075334;
            goto LAB_11046075;
          }
        }
        if (local_8 == 0) {
          uVar2 = uVar1 & 0x6000;
        }
        else {
          uVar2 = (uVar1 & 0x1800) - 0x800;
        }
        if (uVar2 == 0) {
          if (local_8 == 0) {
            uVar2 = uVar1 & 0x1800;
          }
          else {
            uVar2 = uVar1 & 0xc0;
          }
          if (uVar2 == 0) {
            pcVar13 = s_public__11075328;
            goto LAB_11046075;
          }
        }
      }
    }
  }
  if (local_8 == 0) {
    uVar2 = uVar1 & 0x6000;
  }
  else {
    uVar2 = (uVar1 & 0x1800) - 0x800;
  }
  if (uVar2 == 0) {
    uVar2 = uVar1 & 0x400;
  }
  else {
    uVar2 = uVar1 & 0x1000;
  }
  if ((uVar2 != 0) && ((DAT_1109fb8c & 0x1000) == 0)) {
    pDVar3 = (DName *)operator+((char *)local_70,(DName *)s__thunk___1107531c);
    DName::operator=((DName *)&local_28,pDVar3);
  }
  if ((uVar1 & 0x10000) != 0) {
    pDVar3 = (DName *)operator+((char *)local_70,(DName *)s_extern__C__11075310);
    DName::operator=((DName *)&local_28,pDVar3);
  }
LAB_11046109:
  DName::DName(param_1,(DName *)&local_28);
  return param_1;
}


// ==== 1104611d UnDecorator::getDecoratedName

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDecoratedName(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getDecoratedName(void)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  DName *pDVar4;
  DName *pDVar5;
  uint extraout_EDX;
  uint uVar6;
  DName *in_stack_00000004;
  DNameStatus DVar7;
  DName local_24 [8];
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  DName local_c [4];
  uint local_8;
  
  if ((DAT_1109fb8c & 0x2000) == 0) {
    if (*DAT_1109fb7c != '?') {
      if (*DAT_1109fb7c == '\0') {
        DVar7 = 2;
        goto LAB_1104631f;
      }
LAB_110462cd:
      DVar7 = 1;
LAB_1104631f:
      DName::DName(in_stack_00000004,DVar7);
      return in_stack_00000004;
    }
    pcVar2 = DAT_1109fb7c + 1;
    if ((*pcVar2 != '?') || (DAT_1109fb7c[2] != '?')) {
      DAT_1109fb7c = pcVar2;
      getSymbolName();
      iVar3 = DName::isEmpty(local_c);
      if ((iVar3 == 0) && ((local_8 & 0x20) != 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      uVar6 = local_8 >> 0xb;
      iVar3 = DName::isValid(local_c);
      if (iVar3 != 0) {
        if ((*DAT_1109fb7c != '\0') && (*DAT_1109fb7c != '@')) {
          getScope();
          iVar3 = DName::isEmpty((DName *)&local_14);
          if (iVar3 == 0) {
            if (DAT_1109fb94 == '\0') {
              pDVar4 = local_24;
              pDVar5 = local_1c;
            }
            else {
              DAT_1109fb94 = '\0';
              pDVar4 = (DName *)DName::operator+(local_c,local_1c);
              DName::operator=(local_c,pDVar4);
              if (*DAT_1109fb7c == '@') goto LAB_11046282;
              pDVar4 = (DName *)getScope();
              DName::operator=((DName *)&local_14,pDVar4);
              pDVar4 = local_1c;
              pDVar5 = local_24;
            }
            pDVar5 = (DName *)DName::operator+((DName *)&local_14,(char *)pDVar5);
            pDVar4 = (DName *)DName::operator+(pDVar5,pDVar4);
            DName::operator=(local_c,pDVar4);
          }
        }
LAB_11046282:
        if ((bVar1) && (iVar3 = DName::isEmpty(local_c), iVar3 == 0)) {
          local_8 = local_8 | 0x20;
        }
        if ((uVar6 & 1) != 0) {
          local_8 = local_8 | 0x800;
        }
        iVar3 = DName::isEmpty(local_c);
        if ((iVar3 == 0) && ((local_8 & 0x100) == 0)) {
          if (*DAT_1109fb7c != '\0') {
            if (*DAT_1109fb7c != '@') goto LAB_110462cd;
            DAT_1109fb7c = DAT_1109fb7c + 1;
          }
          if ((((DAT_1109fb8c & 0x1000) == 0) || (bVar1)) || ((local_8 & extraout_EDX) != 0)) {
            composeDeclaration(in_stack_00000004);
            return in_stack_00000004;
          }
          local_14 = 0;
          local_10 = local_10 & 0xfffff000;
          composeDeclaration(local_24);
        }
      }
      pDVar4 = local_c;
      goto LAB_11046152;
    }
    DAT_1109fb7c = pcVar2;
    getDecoratedName();
    for (; *DAT_1109fb7c != '\0'; DAT_1109fb7c = DAT_1109fb7c + 1) {
    }
  }
  else {
    DAT_1109fb8c = DAT_1109fb8c & 0xffffdfff;
    getDataType((DName *)&local_14);
    DAT_1109fb8c = DAT_1109fb8c | 0x2000;
  }
  pDVar4 = (DName *)&local_14;
LAB_11046152:
  DName::DName(in_stack_00000004,pDVar4);
  return in_stack_00000004;
}


// ==== 1104632e UnDecorator::getScope

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getScope(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getScope(void)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  DName *pDVar4;
  DName *pDVar5;
  DName *this;
  char *pcVar6;
  DName *this_00;
  DName *in_stack_00000004;
  char cVar7;
  char local_94 [8];
  DName local_8c [8];
  DName local_84 [8];
  undefined1 local_7c [8];
  undefined1 local_74 [8];
  DName local_6c [8];
  DName local_64 [8];
  char local_5c [8];
  DName local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [16];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  DName local_24 [8];
  DName local_1c [8];
  DName local_14 [8];
  DName local_c [8];
  
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xfffff000;
  *(undefined4 *)in_stack_00000004 = 0;
  bVar1 = false;
  if ((*(uint *)(in_stack_00000004 + 4) & 0xf) == 0) {
    do {
      if ((*DAT_1109fb7c == '\0') || (*DAT_1109fb7c == '@')) break;
      if ((DAT_1109fb94 != '\0') && (DAT_1109fb95 == '\0')) {
        return in_stack_00000004;
      }
      iVar3 = DName::isEmpty(in_stack_00000004);
      if (iVar3 == 0) {
        pDVar4 = (DName *)operator+(local_94,(DName *)&DAT_110752bc);
        DName::operator=(in_stack_00000004,pDVar4);
        if (bVar1) {
          pDVar4 = (DName *)operator+((char)local_7c,(DName *)0x5b);
          DName::operator=(in_stack_00000004,pDVar4);
          bVar1 = false;
        }
      }
      if (*DAT_1109fb7c == '?') {
        pcVar6 = DAT_1109fb7c + 1;
        cVar7 = *pcVar6;
        if (cVar7 == '$') {
          pDVar4 = local_6c;
          uVar2 = SUB41(local_14,0);
          goto LAB_11046525;
        }
        if (cVar7 != '%') {
          if (cVar7 != '?') {
            if (cVar7 == 'A') goto LAB_110464cd;
            if (cVar7 != 'I') {
              pDVar4 = local_8c;
              DAT_1109fb7c = pcVar6;
              pDVar5 = (DName *)getLexicalFrame();
              goto LAB_1104652f;
            }
            pDVar4 = local_84;
            cVar7 = (char)local_44;
            DAT_1109fb7c = DAT_1109fb7c + 2;
            pDVar5 = (DName *)getZName(SUB41(local_74,0));
            pDVar5 = (DName *)DName::operator+(pDVar5,cVar7);
            pDVar4 = (DName *)DName::operator+(pDVar5,pDVar4);
            DName::operator=(in_stack_00000004,pDVar4);
            bVar1 = true;
            goto LAB_1104653e;
          }
          if ((DAT_1109fb7c[2] == '_') && (DAT_1109fb7c[3] == '?')) {
            pDVar4 = local_54;
            DAT_1109fb7c = DAT_1109fb7c + 2;
            pDVar5 = (DName *)getOperatorName(SUB41(local_2c,0),(bool *)0x0);
            pDVar4 = (DName *)DName::operator+(pDVar5,pDVar4);
            DName::operator=(in_stack_00000004,pDVar4);
            if (*DAT_1109fb7c == '@') {
              DAT_1109fb7c = DAT_1109fb7c + 1;
            }
            goto LAB_1104653e;
          }
          pDVar4 = local_64;
          cVar7 = (char)local_34;
          DAT_1109fb7c = pcVar6;
          getDecoratedName();
          pDVar5 = (DName *)operator+((char)local_4c,(DName *)0x60);
          pDVar5 = (DName *)DName::operator+(pDVar5,cVar7);
          goto LAB_1104652f;
        }
LAB_110464cd:
        DAT_1109fb7c = pcVar6;
        DName::DName(local_c,&DAT_1109fb7c,'@');
        pDVar4 = (DName *)operator+(local_5c,(DName *)s__anonymous_namespace__1107527c);
        DName::operator=(in_stack_00000004,pDVar4);
        if (*(int *)DAT_1109fb74 != 9) {
          Replicator::operator+=(DAT_1109fb74,local_c);
        }
      }
      else {
        pDVar4 = local_24;
        uVar2 = SUB41(local_1c,0);
LAB_11046525:
        pDVar5 = (DName *)getZName((bool)uVar2);
LAB_1104652f:
        pDVar4 = (DName *)DName::operator+(pDVar5,pDVar4);
        DName::operator=(in_stack_00000004,pDVar4);
      }
LAB_1104653e:
    } while (((byte)in_stack_00000004[4] & 0xf) == 0);
  }
  if (*DAT_1109fb7c == '\0') {
    iVar3 = DName::isEmpty(in_stack_00000004);
    if (iVar3 == 0) {
      pDVar4 = local_1c;
      pDVar5 = local_24;
      this = (DName *)DName::DName(local_14,2);
      pDVar5 = (DName *)DName::operator+(this,(char *)pDVar5);
      pDVar4 = (DName *)DName::operator+(pDVar5,pDVar4);
      DName::operator=(in_stack_00000004,pDVar4);
    }
    else {
      DName::operator=(this_00,2);
    }
  }
  else if (*DAT_1109fb7c != '@') {
    *(undefined4 *)in_stack_00000004 = 0;
    if (((byte)*(uint *)(in_stack_00000004 + 4) & 0xf) != 3) {
      *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xfffffff1 | 1;
    }
  }
  return in_stack_00000004;
}


// ==== 110465b9 UnDecorator::getFunctionIndirectType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getFunctionIndirectType(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getFunctionIndirectType(DName *param_1)

{
  char *pcVar1;
  DName *pDVar2;
  DName *pDVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  DName *in_stack_00000008;
  char cVar8;
  DNameStatus DVar9;
  DName local_34 [8];
  undefined1 local_2c [8];
  DName local_24 [8];
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  DName local_c [8];
  
  cVar8 = *DAT_1109fb7c;
  if (cVar8 == '\0') {
    operator+((DNameStatus)param_1,(DName *)0x2);
    return param_1;
  }
  if (((cVar8 < '6') || ('9' < cVar8)) && (cVar8 != '_')) {
    DName::DName(param_1,1);
    return param_1;
  }
  uVar5 = (int)cVar8 - 0x36;
  pcVar1 = DAT_1109fb7c + 1;
  if (uVar5 == 0x29) {
    cVar8 = *pcVar1;
    if (cVar8 == '\0') {
      DAT_1109fb7c = pcVar1;
      operator+((DNameStatus)param_1,(DName *)0x2);
      return param_1;
    }
    uVar5 = (int)cVar8 - 0x3d;
    DAT_1109fb7c = DAT_1109fb7c + 2;
    if ((int)uVar5 < 4) goto LAB_11046649;
    bVar7 = SBORROW4(uVar5,7);
    iVar4 = cVar8 + -0x44;
    bVar6 = uVar5 == 7;
LAB_11046647:
    if (!bVar6 && bVar7 == iVar4 < 0) goto LAB_11046649;
  }
  else {
    DAT_1109fb7c = pcVar1;
    if (-1 < (int)uVar5) {
      bVar7 = SBORROW4(uVar5,3);
      iVar4 = cVar8 + -0x39;
      bVar6 = uVar5 == 3;
      goto LAB_11046647;
    }
LAB_11046649:
    uVar5 = 0xffffffff;
  }
  if (uVar5 == 0xffffffff) {
    DName::DName(param_1,1);
    return param_1;
  }
  local_14 = 0;
  local_10 = local_10 & 0xfffff000;
  DName::DName(local_c,in_stack_00000008);
  if ((uVar5 & 2) != 0) {
    pDVar2 = (DName *)operator+((char *)local_24,(DName *)&DAT_110752bc);
    DName::operator=(local_c,pDVar2);
    if (*DAT_1109fb7c == '\0') {
      pDVar2 = (DName *)operator+((DNameStatus)local_34,(DName *)0x2);
    }
    else {
      pDVar2 = local_24;
      getScope();
      pDVar3 = (DName *)operator+((char)local_34,(DName *)0x20);
      pDVar2 = (DName *)DName::operator+(pDVar3,pDVar2);
    }
    DName::operator=(local_c,pDVar2);
    if (*DAT_1109fb7c == '\0') {
      operator+((DNameStatus)param_1,(DName *)0x2);
      return param_1;
    }
    if (*DAT_1109fb7c != '@') {
      DVar9 = 1;
      goto LAB_110468ea;
    }
    DAT_1109fb7c = DAT_1109fb7c + 1;
    if (((byte)DAT_1109fb8c & 0x60) == 0x60) {
      pDVar2 = (DName *)getThisType();
      DName::operator|=((DName *)&local_14,pDVar2);
    }
    else {
      pDVar2 = (DName *)getThisType();
      DName::operator=((DName *)&local_14,pDVar2);
    }
  }
  if ((uVar5 & 4) != 0) {
    if ((~(DAT_1109fb8c >> 1) & 1) == 0) {
      pDVar2 = (DName *)getBasedType();
      DName::operator|=(local_c,pDVar2);
    }
    else {
      pDVar2 = local_34;
      getBasedType();
      pDVar3 = (DName *)operator+((char)local_24,(DName *)0x20);
      pDVar2 = (DName *)DName::operator+(pDVar3,pDVar2);
      DName::operator=(local_c,pDVar2);
    }
  }
  if ((~(DAT_1109fb8c >> 1) & 1) == 0) {
    pDVar2 = (DName *)getCallingConvention();
    DName::operator|=(local_c,pDVar2);
  }
  else {
    pDVar2 = local_34;
    pDVar3 = (DName *)getCallingConvention();
    pDVar2 = (DName *)DName::operator+(pDVar3,pDVar2);
    DName::operator=(local_c,pDVar2);
  }
  iVar4 = DName::isEmpty(in_stack_00000008);
  if (iVar4 == 0) {
    cVar8 = (char)local_34;
    pDVar2 = (DName *)operator+((char)local_2c,(DName *)0x28);
    pDVar2 = (DName *)DName::operator+(pDVar2,cVar8);
    DName::operator=(local_c,pDVar2);
  }
  pDVar2 = HeapManager::getMemory((HeapManager *)&DAT_1109fb5c,8,0);
  if (pDVar2 == (DName *)0x0) {
    pDVar2 = (DName *)0x0;
  }
  else {
    *(undefined4 *)pDVar2 = 0;
    *(uint *)(pDVar2 + 4) = *(uint *)(pDVar2 + 4) & 0xfffff000;
  }
  getReturnType(local_1c);
  cVar8 = (char)local_34;
  getArgumentTypes();
  pDVar3 = (DName *)operator+((char)local_24,(DName *)0x28);
  pDVar3 = (DName *)DName::operator+(pDVar3,cVar8);
  DName::operator+=(local_c,pDVar3);
  if ((((byte)DAT_1109fb8c & 0x60) != 0x60) && ((uVar5 & 2) != 0)) {
    DName::operator+=(local_c,(DName *)&local_14);
  }
  if ((~(DAT_1109fb8c >> 8) & 1) == 0) {
    pDVar3 = (DName *)getThrowTypes();
    DName::operator|=(local_c,pDVar3);
  }
  else {
    pDVar3 = (DName *)getThrowTypes();
    DName::operator+=(local_c,pDVar3);
  }
  if (pDVar2 != (DName *)0x0) {
    DName::operator=(pDVar2,local_c);
    DName::DName(param_1,local_1c);
    return param_1;
  }
  DVar9 = 3;
LAB_110468ea:
  DName::DName(param_1,DVar9);
  return param_1;
}


// ==== 110468fa UnDecorator::getDataIndirectType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataIndirectType(class DName const
   &,char,class DName const &,int)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl
UnDecorator::getDataIndirectType(DName *param_1,char param_2,DName *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  DName *pDVar3;
  DName *pDVar4;
  char *pcVar5;
  DName *extraout_ECX;
  DName *this;
  DName *this_00;
  DName *extraout_EDX;
  DName *extraout_EDX_00;
  int extraout_EDX_01;
  uint uVar6;
  undefined3 in_stack_00000009;
  int in_stack_00000014;
  Tokens TVar7;
  DNameStatus DVar8;
  DName local_58 [8];
  char local_50 [8];
  undefined1 local_48 [8];
  char local_40 [8];
  undefined1 local_38 [8];
  char local_30 [8];
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  DName local_10 [4];
  uint local_c;
  char local_5;
  
  local_24 = local_24 & 0xfffff000;
  local_28 = 0;
  local_5 = '\0';
  if (*DAT_1109fb7c == '\0') {
    if (in_stack_00000014 == 0) {
      iVar2 = DName::isEmpty(_param_2);
      if (iVar2 == 0) {
        if (((*(byte *)(extraout_EDX_01 + 4) & 0x10) == 0) &&
           (iVar2 = DName::isEmpty((DName *)param_4), iVar2 == 0)) {
          cVar1 = (char)local_58;
          pDVar3 = param_1;
          pDVar4 = (DName *)operator+((DNameStatus)local_50,(DName *)0x2);
          pDVar4 = (DName *)DName::operator+(pDVar4,cVar1);
          DName::operator+(pDVar4,pDVar3);
          return param_1;
        }
      }
      else {
        iVar2 = DName::isEmpty((DName *)param_4);
        if (iVar2 != 0) goto LAB_11046dcc;
      }
      operator+((DNameStatus)param_1,(DName *)0x2);
      return param_1;
    }
LAB_11046dcc:
    DVar8 = 2;
LAB_11046dce:
    DName::DName(param_1,DVar8);
    return param_1;
  }
  if (*DAT_1109fb7c == '$') {
    getExtendedDataIndirectType((char *)&local_20,(bool *)&param_3,(int)&local_5);
    iVar2 = DName::isEmpty((DName *)&local_20);
    pDVar3 = extraout_ECX;
    if (iVar2 == 0) goto LAB_1104694c;
  }
  local_14 = local_14 & 0xfffff000;
  local_18 = 0;
  uVar6 = (int)*DAT_1109fb7c - (((*DAT_1109fb7c < 'A') - 1 & 0x2b) + 0x16);
  local_1c = local_1c & 0xfffff000;
  local_20 = 0;
LAB_11046983:
  if (uVar6 == 4) {
    if (((~(DAT_1109fb8c >> 1) & 1) != 0) && ((~(DAT_1109fb8c >> 0x11) & 1) != 0)) {
      iVar2 = DName::isEmpty((DName *)&local_18);
      TVar7 = 7;
      if (iVar2 == 0) {
        UScore(7);
        pcVar5 = local_50;
        cVar1 = (char)local_58;
LAB_110469cd:
        pDVar3 = (DName *)DName::operator+((DName *)&local_18,cVar1);
        pDVar4 = (DName *)DName::operator+(pDVar3,pcVar5);
        pDVar3 = (DName *)&local_18;
        goto LAB_110469e1;
      }
LAB_11046a74:
      pcVar5 = UScore(TVar7);
      pDVar3 = (DName *)&local_18;
LAB_11046a7c:
      DName::operator=(pDVar3,pcVar5);
    }
  }
  else if (uVar6 == 5) {
    if ((~(DAT_1109fb8c >> 1) & 1) != 0) {
      iVar2 = DName::isEmpty((DName *)&local_20);
      if (iVar2 != 0) {
        pcVar5 = UScore(9);
        pDVar3 = (DName *)&local_20;
        goto LAB_11046a7c;
      }
      UScore(9);
      pcVar5 = local_40;
      pDVar3 = (DName *)DName::operator+(this,(char)local_48);
      pDVar4 = (DName *)DName::operator+(pDVar3,pcVar5);
      pDVar3 = (DName *)&local_20;
LAB_110469e1:
      DName::operator=(pDVar3,pDVar4);
    }
  }
  else {
    if (uVar6 != 8) {
      DAT_1109fb7c = DAT_1109fb7c + 1;
      if (0x1f < uVar6) {
LAB_11046b7a:
        DVar8 = 1;
        goto LAB_11046dce;
      }
      DName::DName(local_10,(char)param_3);
      pDVar3 = (DName *)DName::operator+((DName *)&local_28,local_58);
      DName::operator=(local_10,pDVar3);
      iVar2 = DName::isEmpty((DName *)&local_18);
      if (iVar2 == 0) {
        pDVar3 = local_58;
        pDVar4 = (DName *)DName::operator+(local_10,(char)local_50);
        pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
        DName::operator=(local_10,pDVar3);
      }
      iVar2 = DName::isEmpty((DName *)&local_20);
      if (iVar2 == 0) {
        pDVar3 = local_58;
        pDVar4 = (DName *)DName::operator+(this_00,(char)local_50);
        pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
        DName::operator=(local_10,pDVar3);
      }
      if ((uVar6 & 0x10) != 0) {
        if (in_stack_00000014 != 0) goto LAB_11046b7a;
        if ((char)param_3 == '\0') {
          if (*DAT_1109fb7c != '\0') {
            pDVar3 = (DName *)getScope();
            DName::operator|=(local_10,pDVar3);
            goto LAB_11046bfd;
          }
        }
        else {
          pDVar3 = (DName *)operator+((char *)local_58,(DName *)&DAT_110752bc);
          DName::operator=(local_10,pDVar3);
          pDVar3 = local_58;
          if (*DAT_1109fb7c == '\0') {
            pDVar3 = (DName *)operator+((DNameStatus)pDVar3,(DName *)0x2);
          }
          else {
            pDVar4 = (DName *)getScope();
            pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
          }
          DName::operator=(local_10,pDVar3);
LAB_11046bfd:
          cVar1 = *DAT_1109fb7c;
          if (cVar1 != '\0') {
            DAT_1109fb7c = DAT_1109fb7c + 1;
            if (cVar1 != '@') goto LAB_11046b7a;
            goto LAB_11046c22;
          }
        }
        DName::operator+=(local_10,2);
      }
LAB_11046c22:
      if ((~(DAT_1109fb8c >> 1) & 1) == 0) {
        if (((byte)uVar6 & 0xc) == 0xc) {
          pDVar3 = (DName *)getBasedType();
          DName::operator|=(local_10,pDVar3);
        }
      }
      else if (((byte)uVar6 & 0xc) == 0xc) {
        if (in_stack_00000014 != 0) goto LAB_11046b7a;
        pDVar3 = local_58;
        pDVar4 = (DName *)getBasedType();
        pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
        DName::operator=(local_10,pDVar3);
      }
      if ((uVar6 & 2) != 0) {
        pDVar3 = (DName *)operator+((char *)local_58,(DName *)s_volatile_11075424);
        DName::operator=(local_10,pDVar3);
      }
      if ((uVar6 & 1) != 0) {
        pDVar3 = (DName *)operator+((char *)local_58,(DName *)s_const_1107541c);
        DName::operator=(local_10,pDVar3);
      }
      if (in_stack_00000014 == 0) {
        iVar2 = DName::isEmpty(_param_2);
        if (iVar2 == 0) {
          uVar6 = *(uint *)(extraout_EDX + 4);
          pDVar3 = extraout_EDX;
          if (((uVar6 & 0x10) == 0) &&
             (iVar2 = DName::isEmpty((DName *)param_4), pDVar3 = extraout_EDX_00, iVar2 == 0)) {
            pDVar3 = local_58;
            cVar1 = (char)local_50;
            pDVar4 = (DName *)operator+((char)local_48,(DName *)0x20);
            pDVar4 = (DName *)DName::operator+(pDVar4,cVar1);
            pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
LAB_11046d3d:
            DName::operator+=(local_10,pDVar3);
          }
          else {
            if (-1 < (char)uVar6) goto LAB_11046d30;
            DName::operator=(local_10,pDVar3);
          }
        }
        else {
          iVar2 = DName::isEmpty((DName *)param_4);
          if (iVar2 == 0) {
LAB_11046d30:
            pDVar3 = (DName *)operator+((char)local_58,(DName *)0x20);
            goto LAB_11046d3d;
          }
        }
      }
      uVar6 = local_c | 0x10;
      if (local_5 != '\0') {
        uVar6 = local_c | 0x210;
      }
LAB_11046d57:
      local_c = uVar6;
      pDVar3 = local_10;
LAB_1104694c:
      DName::DName(param_1,pDVar3);
      return param_1;
    }
    if ((~(DAT_1109fb8c >> 1) & 1) != 0) {
      iVar2 = DName::isEmpty((DName *)&local_18);
      TVar7 = 8;
      if (iVar2 != 0) goto LAB_11046a74;
      UScore(8);
      pcVar5 = local_30;
      cVar1 = (char)local_38;
      goto LAB_110469cd;
    }
  }
  DAT_1109fb7c = DAT_1109fb7c + 1;
  if (*DAT_1109fb7c == '$') {
    getExtendedDataIndirectType((char *)local_10,(bool *)&param_3,(int)&local_5);
    iVar2 = DName::isEmpty(local_10);
    uVar6 = local_c;
    if (iVar2 == 0) goto LAB_11046d57;
  }
  uVar6 = (int)*DAT_1109fb7c - (((*DAT_1109fb7c < 'A') - 1 & 0x2b) + 0x16);
  goto LAB_11046983;
}


// ==== 11046dde UnDecorator::operator_char*

/* Library Function - Single Match
    public: __thiscall UnDecorator::operator char *(void)
   
   Library: Visual Studio 2005 Release */

char * __thiscall UnDecorator::operator_char_(UnDecorator *this)

{
  char cVar1;
  DName *pDVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char local_24 [16];
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_c = 0;
  local_14 = 0;
  local_8 = local_8 & 0xfffff000;
  local_10 = local_10 & 0xfffff000;
  if (DAT_1109fb80 == (char *)0x0) goto LAB_11046e74;
  if (*DAT_1109fb80 == '?') {
    if (DAT_1109fb80[1] != '@') {
      if (DAT_1109fb80[1] == '$') {
        pDVar2 = (DName *)getTemplateName(SUB41(local_24,0));
        DName::operator=((DName *)&local_c,pDVar2);
        if (((byte)local_8 & 0xf) != 1) goto LAB_11046e74;
        local_8 = local_8 & 0xfffffff0;
        DAT_1109fb7c = DAT_1109fb80;
      }
      goto LAB_11046e61;
    }
    DAT_1109fb7c = DAT_1109fb7c + 2;
    getDecoratedName();
    pDVar2 = (DName *)operator+(local_24,(DName *)&DAT_11075430);
  }
  else {
LAB_11046e61:
    pDVar2 = (DName *)getDecoratedName();
  }
  DName::operator=((DName *)&local_c,pDVar2);
LAB_11046e74:
  iVar3 = (int)(local_8 << 0x1c) >> 0x1c;
  if (iVar3 == 3) {
    return (char *)0x0;
  }
  if ((iVar3 == 1) || ((((ushort)DAT_1109fb8c & 0x1000) == 0 && (*DAT_1109fb7c != '\0')))) {
    DName::operator=((DName *)&local_14,DAT_1109fb80);
  }
  else {
    DName::operator=((DName *)&local_14,(DName *)&local_c);
  }
  if (DAT_1109fb84 == (char *)0x0) {
    iVar3 = DName::length((DName *)&local_14);
    DAT_1109fb88 = iVar3 + 1;
    DAT_1109fb84 = (char *)(*DAT_1109fb5c)(iVar3 + 8U & 0xfffffff8);
    if (DAT_1109fb84 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  DName::getString((DName *)&local_14,DAT_1109fb84,DAT_1109fb88);
  pcVar4 = DAT_1109fb84;
  pcVar5 = DAT_1109fb84;
  while (cVar1 = *pcVar4, cVar1 != '\0') {
    if (cVar1 == ' ') {
      *pcVar5 = ' ';
      pcVar5 = pcVar5 + 1;
      do {
        pcVar4 = pcVar4 + 1;
      } while (*pcVar4 == ' ');
    }
    else {
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
      pcVar4 = pcVar4 + 1;
    }
  }
  *pcVar5 = '\0';
  return DAT_1109fb84;
}


// ==== 11046f2a UnDecorator::getPtrRefType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPtrRefType(class DName const &,class DName
   const &,char)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getPtrRefType(DName *param_1,DName *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  DName *extraout_ECX;
  undefined3 in_stack_0000000d;
  DName *in_stack_00000010;
  DName local_c [8];
  
  cVar1 = *DAT_1109fb7c;
  if (cVar1 == '\0') {
    DName::DName(local_c,2);
    DName::operator+=(local_c,(char)in_stack_00000010);
    iVar2 = DName::isEmpty(param_2);
    if (iVar2 == 0) {
      DName::operator+=(local_c,extraout_ECX);
    }
    iVar2 = DName::isEmpty(_param_3);
    if (iVar2 == 0) {
      iVar2 = DName::isEmpty(param_2);
      if (iVar2 == 0) {
        DName::operator+=(local_c,' ');
      }
      DName::operator+=(local_c,_param_3);
    }
    DName::DName(param_1,local_c);
  }
  else if (((cVar1 < '6') || ('9' < cVar1)) && (cVar1 != '_')) {
    getDataIndirectType(local_c,param_3,in_stack_00000010,(int)param_2);
    getPtrRefDataType(param_1,(int)local_c);
  }
  else {
    DName::DName(local_c,(char)in_stack_00000010);
    iVar2 = DName::isEmpty(param_2);
    if (iVar2 == 0) {
      iVar2 = DName::isEmpty(_param_3);
      if ((iVar2 != 0) || (((byte)_param_3[4] & 0x10) == 0)) {
        DName::operator+=(local_c,param_2);
      }
    }
    iVar2 = DName::isEmpty(_param_3);
    if (iVar2 == 0) {
      DName::operator+=(local_c,_param_3);
    }
    getFunctionIndirectType(param_1);
  }
  return param_1;
}


// ==== 11047091 ___unDName

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___unDName
   
   Library: Visual Studio 2005 Release */

char * __cdecl
___unDName(char *param_1,char *param_2,int param_3,int param_4,undefined4 param_5,ushort param_6)

{
  int iVar1;
  UnDecorator local_98 [120];
  char *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_11089ea0;
  uStack_c = 0x110470a0;
  if ((param_4 != 0) && (iVar1 = __mtinitlocknum(5), iVar1 != 0)) {
    __lock(5);
    local_8 = (undefined *)0x0;
    DAT_1109fb5c = param_4;
    _DAT_1109fb60 = param_5;
    _DAT_1109fb6c = 0;
    _DAT_1109fb64 = 0;
    _DAT_1109fb68 = 0;
    UnDecorator::UnDecorator
              (local_98,param_1,param_2,param_3,(_func_char_ptr_long *)0x0,(uint)param_6);
    local_20 = UnDecorator::operator_char_(local_98);
    HeapManager::Destructor((HeapManager *)&DAT_1109fb5c);
    local_8 = (undefined *)0xfffffffe;
    FUN_1104712b();
    return local_20;
  }
  return (char *)0x0;
}


// ==== 1104712b FUN_1104712b

void FUN_1104712b(void)

{
  FUN_110406e7(5);
  return;
}


// ==== 110471d7 FUN_110471d7

DName * __cdecl FUN_110471d7(DName *param_1,DName *param_2)

{
  byte bVar1;
  byte *pbVar2;
  DName *pDVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  DName local_28 [8];
  DName local_20 [4];
  byte local_1c;
  DName local_18 [4];
  uint local_14;
  undefined4 local_10;
  uint local_c;
  byte local_5;
  
  pbVar2 = DAT_1109fb7c;
  bVar1 = *DAT_1109fb7c;
  if (bVar1 == 0) {
    operator+((DNameStatus)param_1,(DName *)0x2);
    return param_1;
  }
  DAT_1109fb7c = DAT_1109fb7c + 1;
  local_10 = 0;
  uVar6 = (uint)bVar1;
  local_c = local_c & 0xfffff000;
  uVar5 = 0xffffffff;
  if (uVar6 < 0x4f) {
    if (uVar6 != 0x4e) {
      switch(uVar6) {
      case 0x43:
      case 0x44:
      case 0x45:
        pcVar7 = &DAT_110754d0;
        break;
      case 0x46:
      case 0x47:
        pcVar7 = s_short_110754c8;
        break;
      case 0x48:
      case 0x49:
        pcVar7 = &DAT_110754c4;
        break;
      case 0x4a:
      case 0x4b:
        pcVar7 = &DAT_110754bc;
        break;
      default:
        goto switchD_11047227_caseD_4c;
      case 0x4d:
        pcVar7 = s_float_110754b4;
      }
      goto LAB_110473eb;
    }
LAB_11047411:
    DName::operator+=((DName *)&local_10,s_double_11075460);
LAB_1104741e:
    if (uVar5 != 0xffffffff) {
LAB_1104738f:
      local_10 = 0;
      local_c = local_c & 0xfffff000;
      DName::DName(local_18,param_2);
      if (uVar5 != 0xfffffffe) {
        iVar4 = DName::isEmpty(param_2);
        if (iVar4 != 0) {
          if ((uVar5 & 1) == 0) {
            if ((uVar5 & 2) != 0) {
              DName::operator=((DName *)&local_10,s_volatile_11075438);
            }
          }
          else {
            DName::operator=((DName *)&local_10,s_const_11075450);
            if ((uVar5 & 2) != 0) {
              DName::operator+=((DName *)&local_10,s_volatile_11075444);
            }
          }
        }
        UnDecorator::getPtrRefType(param_1,(DName *)&local_10,(char)local_18);
        return param_1;
      }
      local_14 = local_14 | 0x80;
      UnDecorator::getPtrRefType(local_20,(DName *)&local_10,(char)local_18);
      if ((local_1c & 0x80) == 0) {
        DName::operator+=(local_20,&DAT_11074f2c);
      }
      pDVar3 = local_20;
      goto LAB_11047370;
    }
LAB_11047427:
    if (uVar6 == 0x43) {
      pcVar7 = s_signed_11075458;
      pDVar3 = local_18;
LAB_11047487:
      pDVar3 = (DName *)operator+((char *)pDVar3,(DName *)pcVar7);
      DName::operator=((DName *)&local_10,pDVar3);
    }
    else {
      if ((((uVar6 == 0x45) || (uVar6 == 0x47)) || (uVar6 == 0x49)) || (uVar6 == 0x4b)) {
        pcVar7 = s_unsigned_110751d0;
        pDVar3 = local_20;
        goto LAB_11047487;
      }
      if ((uVar6 == 0x5f) &&
         (((local_5 == 0x45 || (local_5 == 0x47)) ||
          ((local_5 == 0x49 || ((local_5 == 0x4b || (local_5 == 0x4d)))))))) {
        pcVar7 = s_unsigned_110751d0;
        pDVar3 = local_28;
        goto LAB_11047487;
      }
    }
    iVar4 = DName::isEmpty(param_2);
    if (iVar4 == 0) {
      pDVar3 = (DName *)operator+((char)local_28,(DName *)0x20);
      DName::operator+=((DName *)&local_10,pDVar3);
    }
  }
  else {
    if (uVar6 == 0x4f) {
      DName::operator=((DName *)&local_10,s_long_110751dc);
      goto LAB_11047411;
    }
    if (0x4f < uVar6) {
      if (uVar6 < 0x54) {
        uVar5 = uVar6 & 3;
        goto LAB_1104741e;
      }
      if (uVar6 == 0x58) {
        pcVar7 = &DAT_110751fc;
        goto LAB_110473eb;
      }
      if (uVar6 != 0x5f) goto switchD_11047227_caseD_4c;
      local_5 = *DAT_1109fb7c;
      DAT_1109fb7c = pbVar2 + 2;
      uVar5 = (uint)local_5;
      if (uVar5 < 0x4e) {
        if (uVar5 < 0x4c) {
          if (uVar5 < 0x48) {
            if (uVar5 < 0x46) {
              if (uVar5 == 0x24) {
                FUN_110471d7(local_20,param_2);
                operator+((char *)param_1,(DName *)s___w64_110754a4);
                return param_1;
              }
              if (1 < uVar5 - 0x44) goto LAB_1104737e;
              pcVar7 = s___int8_110754ac;
            }
            else {
              pcVar7 = s___int16_1107549c;
            }
          }
          else if (uVar5 < 0x48) {
LAB_1104737e:
            pcVar7 = s_UNKNOWN_11075478;
          }
          else if (uVar5 < 0x4a) {
            pcVar7 = s___int32_1107548c;
          }
          else {
            if (0x4b < uVar5) goto LAB_1104737e;
            pcVar7 = s___int64_11075494;
          }
        }
        else {
          pcVar7 = s___int128_11075480;
        }
LAB_110473eb:
        DName::operator=((DName *)&local_10,pcVar7);
        goto LAB_11047427;
      }
      if (uVar5 == 0x4e) {
        pcVar7 = &DAT_11075468;
        goto LAB_110473eb;
      }
      if (uVar5 != 0x4f) {
        if (uVar5 != 0x57) {
          if (1 < uVar5 - 0x58) goto LAB_1104737e;
          goto LAB_11047347;
        }
        pcVar7 = s_wchar_t_11075470;
        goto LAB_110473eb;
      }
      uVar5 = 0xfffffffe;
      goto LAB_1104738f;
    }
switchD_11047227_caseD_4c:
LAB_11047347:
    DAT_1109fb7c = DAT_1109fb7c + -1;
    pDVar3 = (DName *)UnDecorator::getECSUDataType();
    DName::operator=((DName *)&local_10,pDVar3);
    iVar4 = DName::isEmpty((DName *)&local_10);
    if (iVar4 == 0) goto LAB_11047427;
  }
  pDVar3 = (DName *)&local_10;
LAB_11047370:
  DName::DName(param_1,pDVar3);
  return param_1;
}


// ==== 1104755e UnDecorator::getPrimaryDataType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPrimaryDataType(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getPrimaryDataType(DName *param_1)

{
  char cVar1;
  int iVar2;
  DName *pDVar3;
  char *pcVar4;
  DName *in_stack_00000008;
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  cVar1 = *DAT_1109fb7c;
  local_8 = local_8 & 0xfffff000;
  local_c = 0;
  pcVar4 = DAT_1109fb7c;
  if (cVar1 != '\0') {
    if (cVar1 != '$') {
      if (cVar1 != 'A') {
        if (cVar1 != 'B') {
          FUN_110471d7(param_1,in_stack_00000008);
          return param_1;
        }
        DName::operator=((DName *)&local_c,s_volatile_11075438);
        iVar2 = DName::isEmpty(in_stack_00000008);
        if (iVar2 == 0) {
          DName::operator+=((DName *)&local_c,' ');
        }
      }
      DName::DName((DName *)&local_14,in_stack_00000008);
      DAT_1109fb7c = DAT_1109fb7c + 1;
      local_10 = local_10 | 0x10;
      getPtrRefType(param_1,(DName *)&local_c,(char)&local_14);
      return param_1;
    }
    if (DAT_1109fb7c[1] == '$') {
      pcVar4 = DAT_1109fb7c + 2;
      cVar1 = *pcVar4;
      if (cVar1 != '\0') {
        if (cVar1 == 'A') {
          DAT_1109fb7c = DAT_1109fb7c + 3;
          getFunctionIndirectType(param_1);
          return param_1;
        }
        if (cVar1 == 'B') {
          DAT_1109fb7c = DAT_1109fb7c + 3;
          getPtrRefDataType(param_1,(int)in_stack_00000008);
          return param_1;
        }
        if (cVar1 == 'C') {
          local_10 = local_10 & 0xfffff000;
          DAT_1109fb7c = DAT_1109fb7c + 3;
          local_14 = 0;
          pDVar3 = (DName *)getDataIndirectType(local_1c,(char)in_stack_00000008,(DName *)0x0,
                                                (int)&local_14);
          FUN_110471d7(param_1,pDVar3);
          return param_1;
        }
        goto LAB_11047603;
      }
    }
    else if (DAT_1109fb7c[1] != '\0') {
LAB_11047603:
      DAT_1109fb7c = pcVar4;
      DName::DName(param_1,1);
      return param_1;
    }
  }
  DAT_1109fb7c = pcVar4;
  operator+((DNameStatus)param_1,(DName *)0x2);
  return param_1;
}


// ==== 1104769c UnDecorator::getDataType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDataType(class DName *)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getDataType(DName *param_1)

{
  char cVar1;
  int iVar2;
  DName *pDVar3;
  DName *in_stack_00000008;
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  DName local_c [8];
  
  DName::DName(local_c,in_stack_00000008);
  cVar1 = *DAT_1109fb7c;
  if (cVar1 == '\0') {
    operator+((DNameStatus)param_1,(DName *)0x2);
  }
  else {
    if (cVar1 == '?') {
      DAT_1109fb7c = DAT_1109fb7c + 1;
      local_10 = local_10 & 0xfffff000;
      local_14 = 0;
      pDVar3 = (DName *)getDataIndirectType(local_1c,(char)local_c,(DName *)0x0,(int)&local_14);
      DName::operator=(local_c,pDVar3);
    }
    else if (cVar1 == 'X') {
      DAT_1109fb7c = DAT_1109fb7c + 1;
      iVar2 = DName::isEmpty(local_c);
      if (iVar2 == 0) {
        operator+((char *)param_1,(DName *)s_void_11075270);
        return param_1;
      }
      DName::DName(param_1,&DAT_110751fc);
      return param_1;
    }
    getPrimaryDataType(param_1);
  }
  return param_1;
}


// ==== 1104774d UnDecorator::getExternalDataType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getExternalDataType(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getExternalDataType(DName *param_1)

{
  DName *pDVar1;
  DName *this;
  DName *this_00;
  undefined1 local_1c [8];
  DName local_14 [8];
  DName local_c [8];
  
  pDVar1 = HeapManager::getMemory((HeapManager *)&DAT_1109fb5c,8,0);
  this_00 = (DName *)0x0;
  if (pDVar1 != (DName *)0x0) {
    *(uint *)(pDVar1 + 4) = *(uint *)(pDVar1 + 4) & 0xfffff000;
    *(undefined4 *)pDVar1 = 0;
    this_00 = pDVar1;
  }
  getDataType(param_1);
  getDataIndirectType();
  pDVar1 = local_14;
  this = (DName *)DName::operator+(local_c,(char)local_1c);
  pDVar1 = (DName *)DName::operator+(this,pDVar1);
  DName::operator=(this_00,pDVar1);
  return param_1;
}


// ==== 110477b1 _V6_HeapAlloc

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

int * __cdecl _V6_HeapAlloc(uint *param_1)

{
  undefined4 local_20;
  
  local_20 = (int *)0x0;
  if (param_1 <= DAT_1109fcd8) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_110477f7();
  }
  return local_20;
}


// ==== 110477f7 FUN_110477f7

void FUN_110477f7(void)

{
  FUN_110406e7(4);
  return;
}


// ==== 11047875 _malloc

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _malloc(size_t _Size)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  size_t sVar4;
  uint dwBytes;
  
  if (0xffffffe0 < _Size) {
    __callnewh(_Size);
    puVar3 = (undefined4 *)FUN_110491c7();
    *puVar3 = 0xc;
    return (void *)0x0;
  }
  do {
    if (DAT_1109f69c == (HANDLE)0x0) {
      __FF_MSGBANNER();
      FUN_1103db87(0x1e);
      ___crtExitProcess(0xff);
    }
    if (DAT_1109fcfc == 1) {
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
LAB_110478e6:
      piVar1 = HeapAlloc(DAT_1109f69c,0,dwBytes);
    }
    else if ((DAT_1109fcfc != 3) || (piVar1 = _V6_HeapAlloc((uint *)_Size), piVar1 == (int *)0x0)) {
      sVar4 = _Size;
      if (_Size == 0) {
        sVar4 = 1;
      }
      dwBytes = sVar4 + 0xf & 0xfffffff0;
      goto LAB_110478e6;
    }
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_1109fbe8 == 0) {
      puVar3 = (undefined4 *)FUN_110491c7();
      *puVar3 = 0xc;
      goto LAB_11047914;
    }
    iVar2 = __callnewh(_Size);
    if (iVar2 == 0) {
LAB_11047914:
      puVar3 = (undefined4 *)FUN_110491c7();
      *puVar3 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}


// ==== 11047938 FUN_11047938

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_11047938(void)

{
  return 1;
}


// ==== 11047988 __get_sse2_info

/* WARNING: Removing unreachable block (ram,0x110479c3) */
/* WARNING: Removing unreachable block (ram,0x110479b0) */
/* Library Function - Single Match
    __get_sse2_info
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __get_sse2_info(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar4;
  undefined4 local_8;
  
  local_8 = 0;
  uVar4 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | 0x40
          | (uint)(in_AF & 1) * 0x10 | 4 | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  uVar1 = uVar4 ^ 0x200000;
  if (((uint)((uVar1 & 0x4000) != 0) * 0x4000 | (uint)((uVar1 & 0x200) != 0) * 0x200 |
       (uint)((uVar1 & 0x100) != 0) * 0x100 | (uint)((uVar1 & 0x40) != 0) * 0x40 |
       (uint)((uVar1 & 0x10) != 0) * 0x10 | (uint)((uVar1 & 4) != 0) * 4 |
       (uint)((uVar1 & 0x200000) != 0) * 0x200000 | (uint)((uVar1 & 0x40000) != 0) * 0x40000) !=
      uVar4) {
    cpuid_basic_info(0);
    iVar2 = cpuid_Version_info(1);
    local_8 = *(uint *)(iVar2 + 8);
  }
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_11047938(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


// ==== 110479f8 __local_unwind4

/* Library Function - Single Match
    __local_unwind4
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __cdecl __local_unwind4(uint *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvStack_28;
  undefined1 *puStack_24;
  uint local_20;
  uint uStack_1c;
  int iStack_18;
  uint *puStack_14;
  
  puStack_14 = param_1;
  iStack_18 = param_2;
  uStack_1c = param_3;
  puStack_24 = &LAB_11047a88;
  pvStack_28 = ExceptionList;
  local_20 = DAT_1109acf8 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_11042194();
    }
  }
  ExceptionList = pvStack_28;
  return;
}


// ==== 11047ace FUN_11047ace

void FUN_11047ace(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}


// ==== 11047aea _EH4_CallFilterFunc

/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(undefined *param_1)

{
  (*(code *)param_1)();
  return;
}


// ==== 11047b01 _EH4_TransferToHandler

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x11047b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== 11047b1a _EH4_GlobalUnwind

/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x11047b2f,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


// ==== 11047b34 _EH4_LocalUnwind

/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}


// ==== 11047b50 __ValidateImageBase

/* Library Function - Single Match
    __ValidateImageBase
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl __ValidateImageBase(PBYTE pImageBase)

{
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550)) {
    return (uint)((short)*(int *)((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x10b);
  }
  return 0;
}


// ==== 11047b80 __FindPESection

/* Library Function - Single Match
    __FindPESection
   
   Library: Visual Studio 2005 Release */

PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase + *(ushort *)(pImageBase + iVar1 + 0x14) + 0x18 + iVar1);
  if (*(ushort *)(pImageBase + iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}


// ==== 11047bd0 __IsNonwritableInCurrentImage

/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Library: Visual Studio */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = __except_handler4;
  local_14 = ExceptionList;
  local_c = DAT_1109acf8 ^ 0x11089f20;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_11000000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_11000000,(DWORD_PTR)(pTarget + -0x11000000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}


// ==== 11047c8b __initp_misc_winsig

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2005 Release */

void __cdecl __initp_misc_winsig(undefined4 param_1)

{
  DAT_1109fb98 = param_1;
  DAT_1109fb9c = param_1;
  DAT_1109fba0 = param_1;
  DAT_1109fba4 = param_1;
  return;
}


// ==== 11047d3f siglookup

/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 2005 Release */

uint __cdecl siglookup(uint param_1)

{
  uint uVar1;
  int in_EDX;
  
  uVar1 = param_1;
  do {
    if (*(int *)(uVar1 + 4) == in_EDX) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < DAT_1109aec4 * 0xc + param_1);
  if ((DAT_1109aec4 * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== 11047d73 ___get_sigabrt

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2005 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)FUN_1103ccd2(DAT_1109fba0);
  return p_Var1;
}


// ==== 11047fcf _raise

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2005 Release */

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  DWORD *pDVar7;
  DWORD local_34;
  DWORD local_30;
  int local_28;
  
  pDVar7 = (DWORD *)0x0;
  bVar1 = false;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        puVar6 = &DAT_1109fb98;
        iVar3 = DAT_1109fb98;
        goto LAB_11048084;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_11048062;
        if (_SigNum != 8) goto LAB_11048046;
      }
    }
    pDVar7 = FUN_1103ceab();
    if (pDVar7 == (DWORD *)0x0) {
      return -1;
    }
    uVar2 = siglookup(pDVar7[0x17]);
    puVar6 = (undefined4 *)(uVar2 + 8);
    pcVar4 = (code *)*puVar6;
  }
  else {
    if (_SigNum == 0xf) {
      puVar6 = &DAT_1109fba4;
      iVar3 = DAT_1109fba4;
    }
    else if (_SigNum == 0x15) {
      puVar6 = &DAT_1109fb9c;
      iVar3 = DAT_1109fb9c;
    }
    else {
      if (_SigNum != 0x16) {
LAB_11048046:
        puVar6 = (undefined4 *)FUN_110491c7();
        *puVar6 = 0x16;
        FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
LAB_11048062:
      puVar6 = &DAT_1109fba0;
      iVar3 = DAT_1109fba0;
    }
LAB_11048084:
    bVar1 = true;
    pcVar4 = (code *)FUN_1103ccd2(iVar3);
  }
  if (pcVar4 == (code *)0x1) {
    return 0;
  }
  if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (bVar1) {
    __lock(0);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = pDVar7[0x18];
    pDVar7[0x18] = 0;
    if (_SigNum == 8) {
      local_34 = pDVar7[0x19];
      pDVar7[0x19] = 0x8c;
      goto LAB_110480e8;
    }
  }
  else {
LAB_110480e8:
    if (_SigNum == 8) {
      for (local_28 = DAT_1109aeb8; local_28 < DAT_1109aebc + DAT_1109aeb8; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + pDVar7[0x17]) = 0;
      }
      goto LAB_11048122;
    }
  }
  uVar5 = __encoded_null();
  *puVar6 = uVar5;
LAB_11048122:
  FUN_11048143();
  if (_SigNum == 8) {
    (*pcVar4)(8,pDVar7[0x19]);
  }
  else {
    (*pcVar4)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  pDVar7[0x18] = local_30;
  if (_SigNum == 8) {
    pDVar7[0x19] = local_34;
  }
  return 0;
}


// ==== 11048143 FUN_11048143

void FUN_11048143(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_110406e7(0);
  }
  return;
}


// ==== 1104817f FUN_1104817f

undefined4 __cdecl FUN_1104817f(undefined4 param_1,undefined4 param_2,uint param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined1 local_24 [8];
  byte local_1c;
  undefined1 local_18 [4];
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = __encoded_null();
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  if (DAT_1109fbac == 0) {
    hModule = LoadLibraryA(s_USER32_DLL_1107553c);
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar1 = GetProcAddress(hModule,s_MessageBoxA_11075530);
    if (pFVar1 == (FARPROC)0x0) {
      return 0;
    }
    DAT_1109fbac = FUN_1103cc5b((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,s_GetActiveWindow_11075520);
    DAT_1109fbb0 = FUN_1103cc5b((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,s_GetLastActivePopup_1107550c);
    DAT_1109fbb4 = FUN_1103cc5b((int)pFVar1);
    iVar2 = __get_osplatform(&local_10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_10 == 2) {
      pFVar1 = GetProcAddress(hModule,s_GetUserObjectInformationA_110754f0);
      DAT_1109fbbc = FUN_1103cc5b((int)pFVar1);
      if (DAT_1109fbbc != 0) {
        pFVar1 = GetProcAddress(hModule,s_GetProcessWindowStation_110754d8);
        DAT_1109fbb8 = FUN_1103cc5b((int)pFVar1);
      }
    }
  }
  if ((DAT_1109fbb8 != local_c) && (DAT_1109fbbc != local_c)) {
    pcVar3 = (code *)FUN_1103ccd2(DAT_1109fbb8);
    pcVar4 = (code *)FUN_1103ccd2(DAT_1109fbbc);
    if (((pcVar3 != (code *)0x0) && (pcVar4 != (code *)0x0)) &&
       (((iVar2 = (*pcVar3)(), iVar2 == 0 ||
         (iVar2 = (*pcVar4)(iVar2,1,local_24,0xc,local_18), iVar2 == 0)) || ((local_1c & 1) == 0))))
    {
      iVar2 = __get_winmajor(&local_14);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (local_14 < 4) {
        param_3 = param_3 | 0x40000;
      }
      else {
        param_3 = param_3 | 0x200000;
      }
      goto LAB_11048315;
    }
  }
  if ((((DAT_1109fbb0 != local_c) &&
       (pcVar3 = (code *)FUN_1103ccd2(DAT_1109fbb0), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_1109fbb4 != local_c &&
      (pcVar3 = (code *)FUN_1103ccd2(DAT_1109fbb4), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_11048315:
  pcVar3 = (code *)FUN_1103ccd2(DAT_1109fbac);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar5 = (*pcVar3)(local_8,param_1,param_2,param_3);
  return uVar5;
}


// ==== 1104833c _strcat_s

/* Library Function - Single Match
    _strcat_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  errno_t eVar4;
  
  if ((_Dst != (char *)0x0) && (_SizeInBytes != 0)) {
    pcVar3 = _Dst;
    if (_Src != (char *)0x0) {
      do {
        if (*pcVar3 == '\0') break;
        pcVar3 = pcVar3 + 1;
        _SizeInBytes = _SizeInBytes - 1;
      } while (_SizeInBytes != 0);
      if (_SizeInBytes != 0) {
        do {
          cVar1 = *_Src;
          *pcVar3 = cVar1;
          pcVar3 = pcVar3 + 1;
          _Src = _Src + 1;
          if (cVar1 == '\0') break;
          _SizeInBytes = _SizeInBytes - 1;
        } while (_SizeInBytes != 0);
        if (_SizeInBytes != 0) {
          return 0;
        }
        *_Dst = '\0';
        puVar2 = (undefined4 *)FUN_110491c7();
        eVar4 = 0x22;
        *puVar2 = 0x22;
        goto LAB_1104835b;
      }
    }
    *_Dst = '\0';
  }
  puVar2 = (undefined4 *)FUN_110491c7();
  eVar4 = 0x16;
  *puVar2 = 0x16;
LAB_1104835b:
  FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}


// ==== 110483ad _strncpy_s

/* Library Function - Single Match
    _strncpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  rsize_t rVar4;
  errno_t eVar5;
  
  if (_MaxCount == 0) {
    if (_Dst == (char *)0x0) {
      if (_SizeInBytes == 0) {
        return 0;
      }
    }
    else {
LAB_110483d1:
      if (_SizeInBytes != 0) {
        if (_MaxCount == 0) {
          *_Dst = '\0';
          return 0;
        }
        if (_Src != (char *)0x0) {
          pcVar3 = _Dst;
          rVar4 = _SizeInBytes;
          if (_MaxCount == 0xffffffff) {
            do {
              cVar1 = *_Src;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              _Src = _Src + 1;
              if (cVar1 == '\0') break;
              rVar4 = rVar4 - 1;
            } while (rVar4 != 0);
          }
          else {
            do {
              cVar1 = *_Src;
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              _Src = _Src + 1;
              if ((cVar1 == '\0') || (rVar4 = rVar4 - 1, rVar4 == 0)) break;
              _MaxCount = _MaxCount - 1;
            } while (_MaxCount != 0);
            if (_MaxCount == 0) {
              *pcVar3 = '\0';
            }
          }
          if (rVar4 != 0) {
            return 0;
          }
          if (_MaxCount == 0xffffffff) {
            _Dst[_SizeInBytes - 1] = '\0';
            return 0x50;
          }
          *_Dst = '\0';
          puVar2 = (undefined4 *)FUN_110491c7();
          eVar5 = 0x22;
          *puVar2 = 0x22;
          goto LAB_110483e2;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_110483d1;
  puVar2 = (undefined4 *)FUN_110491c7();
  eVar5 = 0x16;
  *puVar2 = 0x16;
LAB_110483e2:
  FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar5;
}


// ==== 11048460 __set_error_mode

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_1109f1f8;
      DAT_1109f1f8 = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_1109f1f8;
    }
  }
  puVar2 = (undefined4 *)FUN_110491c7();
  *puVar2 = 0x16;
  FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}


// ==== 110484b6 __isalpha_l

/* Library Function - Single Match
    __isalpha_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isalpha_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x103;
  }
  else {
    uVar1 = __isctype_l(_C,0x103,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 11048535 __isupper_l

/* Library Function - Single Match
    __isupper_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isupper_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 1;
  }
  else {
    uVar1 = __isctype_l(_C,1,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 110485ad __islower_l

/* Library Function - Single Match
    __islower_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __islower_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 2;
  }
  else {
    uVar1 = __isctype_l(_C,2,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 11048625 __isdigit_l

/* Library Function - Single Match
    __isdigit_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isdigit_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 4;
  }
  else {
    uVar1 = __isctype_l(_C,4,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 11048674 _isdigit

/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2005 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_1109fb18 == 0) {
    return (byte)PTR_DAT_1109b128[_C * 2] & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}


// ==== 1104869d __isxdigit_l

/* Library Function - Single Match
    __isxdigit_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isxdigit_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 0x80;
  }
  else {
    uVar1 = __isctype_l(_C,0x80,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 1104871c __isspace_l

/* Library Function - Single Match
    __isspace_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isspace_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 8;
  }
  else {
    uVar1 = __isctype_l(_C,8,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 11048794 __ispunct_l

/* Library Function - Single Match
    __ispunct_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __ispunct_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 0x10;
  }
  else {
    uVar1 = __isctype_l(_C,0x10,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 1104880c __isalnum_l

/* Library Function - Single Match
    __isalnum_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isalnum_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x107;
  }
  else {
    uVar1 = __isctype_l(_C,0x107,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 1104888b __isprint_l

/* Library Function - Single Match
    __isprint_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isprint_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x157;
  }
  else {
    uVar1 = __isctype_l(_C,0x157,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 1104890a __isgraph_l

/* Library Function - Single Match
    __isgraph_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isgraph_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = *(ushort *)(local_14.locinfo[1].lc_category[0].locale + _C * 2) & 0x117;
  }
  else {
    uVar1 = __isctype_l(_C,0x117,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 11048989 __iscntrl_l

/* Library Function - Single Match
    __iscntrl_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __iscntrl_l(int _C,_locale_t _Locale)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if ((int)(local_14.locinfo)->locale_name[3] < 2) {
    uVar1 = (byte)local_14.locinfo[1].lc_category[0].locale[_C * 2] & 0x20;
  }
  else {
    uVar1 = __isctype_l(_C,0x20,&local_14);
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


// ==== 11048a9c __freea

/* Library Function - Single Match
    __freea
   
   Library: Visual Studio 2005 Release */

void __cdecl __freea(void *_Memory)

{
  if ((_Memory != (void *)0x0) && (*(int *)((int)_Memory + -8) == 0xdddd)) {
    _free((int *)((int)_Memory + -8));
  }
  return;
}


// ==== 11048ab7 __crtGetLocaleInfoW_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetLocaleInfoW_stat(struct localeinfo_struct *,unsigned long,unsigned
   long,wchar_t *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetLocaleInfoW_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,wchar_t *param_4,int param_5,
          int param_6)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  uint cchData;
  LPSTR lpLCData;
  
  uVar1 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  if (DAT_1109fbc0 == 0) {
    iVar2 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_1109fbc0 = 2;
      }
      goto LAB_11048b09;
    }
    DAT_1109fbc0 = 1;
  }
  else {
LAB_11048b09:
    if (DAT_1109fbc0 != 1) {
      if ((DAT_1109fbc0 == 2) || (DAT_1109fbc0 == 0)) {
        if (param_6 == 0) {
          param_6 = param_1->locinfo->lc_codepage;
        }
        cchData = GetLocaleInfoA(param_2,param_3,(LPSTR)0x0,0);
        if (cchData != 0) {
          if (((int)cchData < 1) || (0xffffffe0 / cchData == 0)) {
            lpLCData = (LPSTR)0x0;
          }
          else if (cchData + 8 < 0x401) {
            if (&stack0x00000000 == (undefined1 *)0x18) goto LAB_11048be0;
            lpLCData = &stack0xfffffff0;
          }
          else {
            lpLCData = _malloc(cchData + 8);
            if (lpLCData != (LPSTR)0x0) {
              lpLCData[0] = -0x23;
              lpLCData[1] = -0x23;
              lpLCData[2] = '\0';
              lpLCData[3] = '\0';
              lpLCData = lpLCData + 8;
            }
          }
          if (lpLCData != (LPSTR)0x0) {
            iVar2 = GetLocaleInfoA(param_2,param_3,lpLCData,cchData);
            if (iVar2 != 0) {
              if (param_5 == 0) {
                param_5 = 0;
                param_4 = (LPWSTR)0x0;
              }
              MultiByteToWideChar(param_6,1,lpLCData,-1,param_4,param_5);
            }
            __freea(lpLCData);
          }
        }
      }
      goto LAB_11048be0;
    }
  }
  GetLocaleInfoW(param_2,param_3,param_4,param_5);
LAB_11048be0:
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 11048bf2 ___crtGetLocaleInfoW

/* Library Function - Single Match
    ___crtGetLocaleInfoW
   
   Library: Visual Studio 2005 Release */

void __cdecl
___crtGetLocaleInfoW
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,wchar_t *param_4,int param_5,
          int param_6)

{
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  __crtGetLocaleInfoW_stat(&local_14,param_2,param_3,param_4,param_5,param_6);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}


// ==== 11048c2d __crtGetLocaleInfoA_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetLocaleInfoA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetLocaleInfoA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          int param_6)

{
  uint _Size;
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  uint cchData;
  LPWSTR lpLCData;
  
  uVar1 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  if (DAT_1109fbc4 == 0) {
    iVar2 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_1109fbc4 = 2;
      }
      goto LAB_11048c7f;
    }
    DAT_1109fbc4 = 1;
  }
  else {
LAB_11048c7f:
    if ((DAT_1109fbc4 == 2) || (DAT_1109fbc4 == 0)) {
      GetLocaleInfoA(param_2,param_3,param_4,param_5);
      goto LAB_11048d58;
    }
    if (DAT_1109fbc4 != 1) goto LAB_11048d58;
  }
  if (param_6 == 0) {
    param_6 = param_1->locinfo->lc_codepage;
  }
  cchData = GetLocaleInfoW(param_2,param_3,(LPWSTR)0x0,0);
  if (cchData != 0) {
    if (((int)cchData < 1) || (0xffffffe0 / cchData < 2)) {
      lpLCData = (LPWSTR)0x0;
    }
    else {
      _Size = cchData * 2 + 8;
      if (_Size < 0x401) {
        if (&stack0x00000000 == (undefined1 *)0x18) goto LAB_11048d58;
        lpLCData = (LPWSTR)&stack0xfffffff0;
      }
      else {
        lpLCData = _malloc(_Size);
        if (lpLCData != (LPWSTR)0x0) {
          lpLCData[0] = L'\xdddd';
          lpLCData[1] = L'\0';
          lpLCData = lpLCData + 4;
        }
      }
    }
    if (lpLCData != (LPWSTR)0x0) {
      iVar2 = GetLocaleInfoW(param_2,param_3,lpLCData,cchData);
      if (iVar2 != 0) {
        if (param_5 == 0) {
          param_5 = 0;
          param_4 = (LPSTR)0x0;
        }
        WideCharToMultiByte(param_6,0,lpLCData,-1,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      __freea(lpLCData);
    }
  }
LAB_11048d58:
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 11048d6a ___crtGetLocaleInfoA

/* Library Function - Single Match
    ___crtGetLocaleInfoA
   
   Library: Visual Studio 2005 Release */

int __cdecl
___crtGetLocaleInfoA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,LCTYPE _LCType,LPSTR _LpLCData,int _CchData)

{
  int iVar1;
  int in_stack_00000018;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Plocinfo);
  iVar1 = __crtGetLocaleInfoA_stat
                    (&local_14,(ulong)_LocaleName,_LCType,_LpLCData,_CchData,in_stack_00000018);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}


// ==== 11048db0 _strrchr

/* Library Function - Single Match
    _strrchr
   
   Library: Visual Studio 2005 Release */

char * __cdecl _strrchr(char *_Str,int _Ch)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = -1;
  do {
    pcVar4 = _Str;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = _Str + 1;
    cVar1 = *_Str;
    _Str = pcVar4;
  } while (cVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  pcVar4 = pcVar4 + -1;
  do {
    pcVar3 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar4 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while ((char)_Ch != cVar1);
  pcVar3 = pcVar3 + 1;
  if (*pcVar3 != (char)_Ch) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}


// ==== 11048de5 __tolower_l

/* Library Function - Single Match
    __tolower_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __tolower_l(int _C,_locale_t _Locale)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  CHAR CVar5;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  byte local_c;
  undefined1 local_b;
  CHAR local_8;
  CHAR local_7;
  undefined1 local_6;
  
  iVar1 = _C;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if ((uint)_C < 0x100) {
    if ((int)(local_1c.locinfo)->locale_name[3] < 2) {
      uVar2 = (byte)local_1c.locinfo[1].lc_category[0].locale[_C * 2] & 1;
    }
    else {
      uVar2 = __isctype_l(_C,1,&local_1c);
    }
    if (uVar2 == 0) {
LAB_11048e44:
      if (local_10 == '\0') {
        return iVar1;
      }
      *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)local_1c.locinfo[1].lc_category[0].wlocale + _C);
  }
  else {
    CVar5 = (CHAR)_C;
    if (((int)(local_1c.locinfo)->locale_name[3] < 2) ||
       (iVar3 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c), iVar3 == 0)) {
      puVar4 = (undefined4 *)FUN_110491c7();
      *puVar4 = 0x2a;
      local_7 = '\0';
      iVar3 = 1;
      local_8 = CVar5;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_8 = (CHAR)_C;
      local_6 = 0;
      iVar3 = 2;
      local_7 = CVar5;
    }
    iVar3 = ___crtLCMapStringA(&local_1c,(local_1c.locinfo)->lc_category[0].wlocale,0x100,&local_8,
                               iVar3,(LPSTR)&local_c,3,(local_1c.locinfo)->lc_codepage,1);
    if (iVar3 == 0) goto LAB_11048e44;
    if (iVar3 == 1) {
      uVar2 = (uint)local_c;
    }
    else {
      uVar2 = (uint)CONCAT11(local_c,local_b);
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return uVar2;
}


// ==== 11048efc _tolower

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2005 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_1109fb18 == 0) {
    if (_C - 0x41U < 0x1a) {
      return _C + 0x20;
    }
  }
  else {
    _C = __tolower_l(_C,(_locale_t)0x0);
  }
  return _C;
}


// ==== 11048f23 FID_conflict:__atoflt_l

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  undefined4 local_2c;
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_110527a4((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int)local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_11048f7a:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_11048fba;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_11048fac:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_11048fba;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_11048fac;
    goto LAB_11048f7a;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_11048fba:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 11048fdc __atoldbl_l

/* Library Function - Single Match
    __atoldbl_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __atoldbl_l(_LDOUBLE *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  undefined4 local_2c;
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_110527a4((undefined2 *)&local_14,&local_2c,_Str,1,0,0,0,(int)local_28);
  IVar1 = __ld12told(&local_14,_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_11049034:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_11049074;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_11049066:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_11049074;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_11049066;
    goto LAB_11049034;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_11049074:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 11049096 FID_conflict:__atoflt_l

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  undefined4 local_2c;
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_110527a4((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int)local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_110490ed:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_1104912d;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_1104911f:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_1104912d;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_1104911f;
    goto LAB_110490ed;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_1104912d:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 1104918c FUN_1104918c

int __cdecl FUN_1104918c(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_1109b718)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x1109b71c);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbcU) & 0xe) + 8;
}


// ==== 110491c7 FUN_110491c7

undefined * FUN_110491c7(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1103ceab();
  if (pDVar1 == (DWORD *)0x0) {
    return &DAT_1109b880;
  }
  return (undefined *)(pDVar1 + 2);
}


// ==== 11049295 __fptostr

/* Library Function - Single Match
    __fptostr
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  char cVar5;
  char *pcVar6;
  errno_t eVar7;
  
  pcVar6 = _PtFlt->mantissa;
  if ((_Buf == (char *)0x0) || (_SizeInBytes == 0)) {
    puVar1 = (undefined4 *)FUN_110491c7();
    eVar7 = 0x16;
    *puVar1 = 0x16;
  }
  else {
    *_Buf = '\0';
    iVar2 = _Digits;
    if (_Digits < 1) {
      iVar2 = 0;
    }
    if (iVar2 + 1U < _SizeInBytes) {
      *_Buf = '0';
      pcVar3 = _Buf;
      for (; pcVar3 = pcVar3 + 1, 0 < _Digits; _Digits = _Digits + -1) {
        cVar5 = *pcVar6;
        if (cVar5 == '\0') {
          cVar5 = '0';
        }
        else {
          pcVar6 = pcVar6 + 1;
        }
        *pcVar3 = cVar5;
      }
      *pcVar3 = '\0';
      if ((-1 < _Digits) && ('4' < *pcVar6)) {
        while (pcVar3 = pcVar3 + -1, *pcVar3 == '9') {
          *pcVar3 = '0';
        }
        *pcVar3 = *pcVar3 + '\x01';
      }
      if (*_Buf == '1') {
        _PtFlt->decpt = _PtFlt->decpt + 1;
      }
      else {
        sVar4 = _strlen(_Buf + 1);
        _memmove(_Buf,_Buf + 1,sVar4 + 1);
      }
      return 0;
    }
    puVar1 = (undefined4 *)FUN_110491c7();
    eVar7 = 0x22;
    *puVar1 = 0x22;
  }
  FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar7;
}


// ==== 11049352 ___dtold

/* Library Function - Single Match
    ___dtold
   
   Library: Visual Studio 2005 Release */

void __cdecl ___dtold(uint *param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint local_8;
  
  uVar2 = *(ushort *)((int)param_2 + 6) >> 4;
  uVar4 = *(ushort *)((int)param_2 + 6) & 0x8000;
  uVar3 = uVar2 & 0x7ff;
  uVar1 = *param_2;
  local_8 = 0x80000000;
  if ((uVar2 & 0x7ff) == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar1 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      goto LAB_11049404;
    }
    uVar3 = uVar3 + 0x3c01;
    local_8 = 0;
  }
  else if (uVar3 == 0x7ff) {
    uVar3 = 0x7fff;
  }
  else {
    uVar3 = uVar3 + 0x3c00;
  }
  param_1[1] = uVar1 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  *param_1 = uVar1 << 0xb;
  while (local_8 == 0) {
    uVar1 = param_1[1];
    uVar3 = uVar3 - 1;
    param_1[1] = uVar1 * 2 | *param_1 >> 0x1f;
    *param_1 = *param_1 * 2;
    local_8 = uVar1 * 2 & 0x80000000;
  }
  uVar4 = uVar4 | uVar3;
LAB_11049404:
  *(ushort *)(param_1 + 2) = uVar4;
  return;
}


// ==== 1104940d __fltout2

/* Library Function - Single Match
    __fltout2
   
   Library: Visual Studio 2005 Release */

STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes)

{
  int iVar1;
  errno_t eVar2;
  STRFLT p_Var3;
  short local_30;
  char local_2e;
  char local_2c [24];
  uint local_14;
  uint uStack_10;
  ushort uStack_c;
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  ___dtold(&local_14,(uint *)&_Dbl);
  iVar1 = FUN_11052f2a(local_14,uStack_10,uStack_c,0x11,0,&local_30);
  _Flt->flag = iVar1;
  _Flt->sign = (int)local_2e;
  _Flt->decpt = (int)local_30;
  eVar2 = _strcpy_s(_ResultStr,_SizeInBytes,local_2c);
  if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  _Flt->mantissa = _ResultStr;
  p_Var3 = (STRFLT)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p_Var3;
}


// ==== 110494a0 __alldvrm

/* Library Function - Single Match
    __alldvrm
   
   Library: Visual Studio 2005 Release */

undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar7 = param_1;
  uVar3 = param_3;
  uVar5 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar6 = uVar5 >> 1;
      uVar7 = (uint)(CONCAT14((uVar5 & 1) != 0,uVar7) >> 1);
      uVar5 = uVar6;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar6,uVar7) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar7 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}


// ==== 11049580 __aullshr

/* Library Function - Single Match
    __aullshr
   
   Library: Visual Studio 2005 Release */

ulonglong __fastcall __aullshr(byte param_1,uint param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 >> (param_1 & 0x1f),
                    in_EAX >> (param_1 & 0x1f) | param_2 << 0x20 - (param_1 & 0x1f));
  }
  return (ulonglong)(param_2 >> (param_1 & 0x1f));
}


// ==== 110495a8 __controlfp_s

/* Library Function - Single Match
    __controlfp_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  uint uVar1;
  undefined4 *puVar2;
  errno_t eVar3;
  
  uVar1 = _Mask & 0xfff7ffff;
  if ((_NewValue & uVar1 & 0xfcf0fce0) == 0) {
    if (_CurrentState == (uint *)0x0) {
      __control87(_NewValue,uVar1);
    }
    else {
      uVar1 = __control87(_NewValue,uVar1);
      *_CurrentState = uVar1;
    }
    eVar3 = 0;
  }
  else {
    if (_CurrentState != (uint *)0x0) {
      uVar1 = __control87(0,0);
      *_CurrentState = uVar1;
    }
    puVar2 = (undefined4 *)FUN_110491c7();
    eVar3 = 0x16;
    *puVar2 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar3;
}


// ==== 11049612 __calloc_impl

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __calloc_impl
   
   Library: Visual Studio 2005 Release */

int * __cdecl __calloc_impl(uint param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint *_Size;
  int *_Dst;
  uint *dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    _Size = (uint *)(param_1 * param_2);
    dwBytes = _Size;
    if (_Size == (uint *)0x0) {
      dwBytes = (uint *)0x1;
    }
    do {
      _Dst = (int *)0x0;
      if (dwBytes < (uint *)0xffffffe1) {
        if ((DAT_1109fcfc == 3) &&
           (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size <= DAT_1109fcd8)) {
          __lock(4);
          _Dst = ___sbh_alloc_block(_Size);
          FUN_1104970e();
          if (_Dst != (int *)0x0) {
            _memset(_Dst,0,(size_t)_Size);
            goto LAB_110496c3;
          }
        }
        else {
LAB_110496c3:
          if (_Dst != (int *)0x0) {
            return _Dst;
          }
        }
        _Dst = HeapAlloc(DAT_1109f69c,8,(SIZE_T)dwBytes);
      }
      if (_Dst != (int *)0x0) {
        return _Dst;
      }
      if (DAT_1109fbe8 == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return (int *)0x0;
        }
        *param_3 = 0xc;
        return (int *)0x0;
      }
      iVar2 = __callnewh((size_t)dwBytes);
    } while (iVar2 != 0);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xc;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_110491c7();
    *puVar1 = 0xc;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return (int *)0x0;
}


// ==== 1104970e FUN_1104970e

void FUN_1104970e(void)

{
  FUN_110406e7(4);
  return;
}


// ==== 11049730 _calloc

/* Library Function - Single Match
    _calloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  int *piVar4;
  int local_8;
  
  local_8 = 0;
  piVar2 = __calloc_impl(_Count,_Size,&local_8);
  iVar1 = local_8;
  if (((piVar2 == (int *)0x0) && (local_8 != 0)) &&
     (puVar3 = FUN_110491c7(), puVar3 != (undefined *)0x0)) {
    piVar4 = (int *)FUN_110491c7();
    *piVar4 = iVar1;
  }
  return piVar2;
}


// ==== 1104976f _realloc

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _realloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  DWORD DVar5;
  LPVOID pvVar6;
  void *this;
  uint *local_24;
  int *local_20;
  
  if (_Memory == (void *)0x0) {
    pvVar1 = _malloc(_NewSize);
    return pvVar1;
  }
  if (_NewSize == 0) {
    _free(_Memory);
    return (void *)0x0;
  }
  if (DAT_1109fcfc == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_11049948;
      pvVar1 = (void *)0x4;
      __lock(4);
      local_24 = (uint *)thunk_FUN_11049b12(pvVar1,(int)_Memory);
      if (local_24 != (uint *)0x0) {
        if (_NewSize <= DAT_1109fcd8) {
          iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block((uint *)_NewSize);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
              if (_NewSize <= puVar3) {
                puVar3 = (uint *)_NewSize;
              }
              _memcpy(local_20,_Memory,(size_t)puVar3);
              local_24 = (uint *)thunk_FUN_11049b12(this,(int)_Memory);
              ___sbh_free_block(local_24,(int)_Memory);
            }
          }
          else {
            local_20 = _Memory;
          }
        }
        if (local_20 == (int *)0x0) {
          if ((uint *)_NewSize == (uint *)0x0) {
            _NewSize = 1;
          }
          _NewSize = _NewSize + 0xf & 0xfffffff0;
          local_20 = HeapAlloc(DAT_1109f69c,0,_NewSize);
          if (local_20 != (int *)0x0) {
            puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
            if (_NewSize <= puVar3) {
              puVar3 = (uint *)_NewSize;
            }
            _memcpy(local_20,_Memory,(size_t)puVar3);
            ___sbh_free_block(local_24,(int)_Memory);
          }
        }
      }
      FUN_110498b3();
      if (local_24 == (uint *)0x0) {
        if ((uint *)_NewSize == (uint *)0x0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_1109f69c,0,_Memory,_NewSize);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_1109fbe8 == 0) {
        piVar4 = (int *)FUN_110491c7();
        if (local_24 != (uint *)0x0) {
          *piVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_11049975;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = (int *)FUN_110491c7();
    if (local_24 != (uint *)0x0) goto LAB_11049954;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_11049948;
      if ((uint *)_NewSize == (uint *)0x0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_1109f69c,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_1109fbe8 == 0) {
        piVar4 = (int *)FUN_110491c7();
LAB_11049975:
        DVar5 = GetLastError();
        iVar2 = FUN_1104918c(DVar5);
        *piVar4 = iVar2;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    piVar4 = (int *)FUN_110491c7();
  }
  DVar5 = GetLastError();
  iVar2 = FUN_1104918c(DVar5);
  *piVar4 = iVar2;
  return (void *)0x0;
LAB_11049948:
  __callnewh(_NewSize);
  piVar4 = (int *)FUN_110491c7();
LAB_11049954:
  *piVar4 = 0xc;
  return (void *)0x0;
}


// ==== 110498b3 FUN_110498b3

void FUN_110498b3(void)

{
  FUN_110406e7(4);
  return;
}


// ==== 1104998a FUN_1104998a

void * __cdecl FUN_1104998a(void *param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint _NewSize;
  size_t sVar3;
  
  sVar3 = 0;
  if ((param_2 == 0) || (param_3 <= 0xffffffe0 / param_2)) {
    _NewSize = param_2 * param_3;
    if (param_1 != (void *)0x0) {
      sVar3 = __msize(param_1);
    }
    pvVar2 = _realloc(param_1,_NewSize);
    if ((pvVar2 != (void *)0x0) && (sVar3 < _NewSize)) {
      _memset((void *)(sVar3 + (int)pvVar2),0,_NewSize - sVar3);
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_110491c7();
    *puVar1 = 0xc;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}


// ==== 11049aa6 ___sbh_heap_init

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_1109fcd4 = HeapAlloc(DAT_1109f69c,0,0x140);
  if (DAT_1109fcd4 == (LPVOID)0x0) {
    return 0;
  }
  DAT_1109fbcc = 0;
  DAT_1109fcd0 = 0;
  DAT_1109fcdc = DAT_1109fcd4;
  DAT_1109fcd8 = param_1;
  DAT_1109fce0 = 0x10;
  return 1;
}


// ==== 11049aee thunk_FUN_11049b12 thunk -> 11049b12

// ==== 11049b12 FUN_11049b12

void __thiscall FUN_11049b12(void *this,int param_1)

{
  void *in_EAX;
  
  for (; (in_EAX < this && (0xfffff < (uint)(param_1 - *(int *)((int)in_EAX + 0xc))));
      in_EAX = (void *)((int)in_EAX + 0x14)) {
  }
  return;
}


// ==== 11049b19 ___sbh_free_block

/* Library Function - Single Match
    ___sbh_free_block
   
   Library: Visual Studio 2005 Release */

void __cdecl ___sbh_free_block(uint *param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar6 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar4 = (int *)(uVar14 * 0x204 + 0x144 + uVar6);
  local_8 = *puVar12 - 1;
  if ((local_8 & 1) == 0) {
    puVar10 = (uint *)(local_8 + (int)puVar12);
    uVar13 = *puVar10;
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar13 & 1) == 0) {
      uVar9 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (puVar10[1] == puVar10[2]) {
        if (uVar9 < 0x20) {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar2 = (char *)(uVar9 + 4 + uVar6);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar11 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar11 = *puVar11 & uVar9;
          *pcVar2 = *pcVar2 + -1;
          if (*pcVar2 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar13;
      *(uint *)(puVar10[2] + 4) = puVar10[1];
      *(uint *)(puVar10[1] + 8) = puVar10[2];
    }
    puVar10 = (uint *)(((int)local_8 >> 4) - 1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) - 1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) - 1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar3 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
            *puVar3 = *puVar3 & uVar13;
            pcVar2 = (char *)((int)puVar11 + uVar6 + 4);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      piVar1 = piVar4 + (int)puVar10 * 2;
      uVar13 = piVar1[1];
      puVar12[2] = (uint)piVar1;
      puVar12[1] = uVar13;
      piVar1[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar5 = *(char *)((int)puVar10 + uVar6 + 4);
        *(char *)((int)puVar10 + uVar6 + 4) = cVar5 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar5 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar5 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar6 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      if (DAT_1109fbcc != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_1109fce4 * 0x8000 + DAT_1109fbcc[3]),0x8000,0x4000);
        DAT_1109fbcc[2] = DAT_1109fbcc[2] | 0x80000000U >> ((byte)DAT_1109fce4 & 0x1f);
        *(undefined4 *)(DAT_1109fbcc[4] + 0xc4 + DAT_1109fce4 * 4) = 0;
        *(char *)(DAT_1109fbcc[4] + 0x43) = *(char *)(DAT_1109fbcc[4] + 0x43) + -1;
        if (*(char *)(DAT_1109fbcc[4] + 0x43) == '\0') {
          DAT_1109fbcc[1] = DAT_1109fbcc[1] & 0xfffffffe;
        }
        if (DAT_1109fbcc[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_1109fbcc[3],0,0x8000);
          HeapFree(DAT_1109f69c,0,(LPVOID)DAT_1109fbcc[4]);
          _memmove(DAT_1109fbcc,DAT_1109fbcc + 5,
                   (DAT_1109fcd0 * 0x14 - (int)DAT_1109fbcc) + -0x14 + DAT_1109fcd4);
          DAT_1109fcd0 = DAT_1109fcd0 + -1;
          if (DAT_1109fbcc < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_1109fcdc = DAT_1109fcd4;
        }
      }
      DAT_1109fbcc = param_1;
      DAT_1109fce4 = uVar14;
    }
  }
  return;
}


// ==== 11049e2d ___sbh_alloc_new_region

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2005 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_1109fcd0 == DAT_1109fce0) {
    pvVar1 = HeapReAlloc(DAT_1109f69c,0,DAT_1109fcd4,(DAT_1109fce0 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1109fce0 = DAT_1109fce0 + 0x10;
    DAT_1109fcd4 = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_1109fcd0 * 0x14 + (int)DAT_1109fcd4);
  pvVar1 = HeapAlloc(DAT_1109f69c,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_1109fcd0 = DAT_1109fcd0 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_1109f69c,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}


// ==== 11049edd ___sbh_alloc_new_group

/* Library Function - Single Match
    ___sbh_alloc_new_group
   
   Library: Visual Studio 2005 Release */

int __cdecl ___sbh_alloc_new_group(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LPVOID pvVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  LPVOID lpAddress;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar8 = 0;
  for (iVar3 = *(int *)(param_1 + 8); -1 < iVar3; iVar3 = iVar3 * 2) {
    iVar8 = iVar8 + 1;
  }
  iVar3 = iVar8 * 0x204 + 0x144 + iVar2;
  iVar7 = 0x3f;
  iVar4 = iVar3;
  do {
    *(int *)(iVar4 + 8) = iVar4;
    *(int *)(iVar4 + 4) = iVar4;
    iVar4 = iVar4 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  lpAddress = (LPVOID)(iVar8 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar5 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar5 == (LPVOID)0x0) {
    iVar8 = -1;
  }
  else {
    if (lpAddress <= (LPVOID)((int)lpAddress + 0x7000U)) {
      piVar6 = (int *)((int)lpAddress + 0x10);
      iVar7 = ((uint)((int)((int)lpAddress + 0x7000U) - (int)lpAddress) >> 0xc) + 1;
      do {
        piVar6[-2] = -1;
        piVar6[0x3fb] = -1;
        *piVar6 = (int)(piVar6 + 0x3ff);
        piVar6[-1] = 0xff0;
        piVar6[1] = (int)(piVar6 + -0x401);
        piVar6[0x3fa] = 0xff0;
        piVar6 = piVar6 + 0x400;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(int *)(iVar3 + 0x1fc) = (int)lpAddress + 0xc;
    *(int *)((int)lpAddress + 0x14) = iVar3 + 0x1f8;
    *(int *)(iVar3 + 0x200) = (int)lpAddress + 0x700c;
    *(int *)((int)lpAddress + 0x7010) = iVar3 + 0x1f8;
    *(undefined4 *)(iVar2 + 0x44 + iVar8 * 4) = 0;
    *(undefined4 *)(iVar2 + 0xc4 + iVar8 * 4) = 1;
    cVar1 = *(char *)(iVar2 + 0x43);
    *(char *)(iVar2 + 0x43) = cVar1 + '\x01';
    if (cVar1 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar8 & 0x1f));
  }
  return iVar8;
}


// ==== 11049fe3 ___sbh_resize_block

/* Library Function - Single Match
    ___sbh_resize_block
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_resize_block(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar7 = param_1[4];
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar5 = uVar10 * 0x204 + 0x144 + uVar7;
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  iVar9 = *(int *)(param_2 + -4) + -1;
  puVar8 = (uint *)(*(int *)(param_2 + -4) + -5 + param_2);
  uVar13 = *puVar8;
  if (iVar9 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + iVar9) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (puVar8[1] == puVar8[2]) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar7);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(uint *)(puVar8[2] + 4) = puVar8[1];
    *(uint *)(puVar8[1] + 8) = puVar8[2];
    iVar9 = uVar13 + (iVar9 - uVar12);
    if (0 < iVar9) {
      uVar13 = (iVar9 >> 4) - 1;
      iVar3 = param_2 + -4 + uVar12;
      if (0x3f < uVar13) {
        uVar13 = 0x3f;
      }
      iVar5 = iVar5 + uVar13 * 8;
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
      *(int *)(iVar3 + 8) = iVar5;
      *(int *)(iVar5 + 4) = iVar3;
      *(int *)(*(int *)(iVar3 + 4) + 8) = iVar3;
      if (*(int *)(iVar3 + 4) == *(int *)(iVar3 + 8)) {
        cVar6 = *(char *)(uVar13 + 4 + uVar7);
        *(char *)(uVar13 + 4 + uVar7) = cVar6 + '\x01';
        if (uVar13 < 0x20) {
          if (cVar6 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> ((byte)uVar13 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar6 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar13 - 0x20 & 0x1f);
          }
          puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          uVar13 = uVar13 - 0x20;
        }
        *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar13 & 0x1f);
      }
      piVar4 = (int *)(param_2 + -4 + uVar12);
      *piVar4 = iVar9;
      *(int *)(iVar9 + -4 + (int)piVar4) = iVar9;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else if ((int)uVar12 < iVar9) {
    param_3 = iVar9 - uVar12;
    *(uint *)(param_2 + -4) = uVar12 + 1;
    piVar4 = (int *)(param_2 + -4 + uVar12);
    uVar11 = (param_3 >> 4) - 1;
    piVar4[-1] = uVar12 + 1;
    if (0x3f < uVar11) {
      uVar11 = 0x3f;
    }
    if ((uVar13 & 1) == 0) {
      uVar12 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar12) {
        uVar12 = 0x3f;
      }
      if (puVar8[1] == puVar8[2]) {
        if (uVar12 < 0x20) {
          pcVar1 = (char *)(uVar12 + 4 + uVar7);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
          puVar2 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar12;
          }
        }
        else {
          pcVar1 = (char *)(uVar12 + 4 + uVar7);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar12;
          }
        }
      }
      *(uint *)(puVar8[2] + 4) = puVar8[1];
      *(uint *)(puVar8[1] + 8) = puVar8[2];
      param_3 = param_3 + uVar13;
      uVar11 = (param_3 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
    }
    iVar5 = iVar5 + uVar11 * 8;
    iVar9 = *(int *)(iVar5 + 4);
    piVar4[2] = iVar5;
    piVar4[1] = iVar9;
    *(int **)(iVar5 + 4) = piVar4;
    *(int **)(piVar4[1] + 8) = piVar4;
    if (piVar4[1] == piVar4[2]) {
      cVar6 = *(char *)(uVar11 + 4 + uVar7);
      *(char *)(uVar11 + 4 + uVar7) = cVar6 + '\x01';
      if (uVar11 < 0x20) {
        if (cVar6 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> ((byte)uVar11 & 0x1f);
        }
        puVar8 = (uint *)(uVar7 + 0x44 + uVar10 * 4);
      }
      else {
        if (cVar6 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> ((byte)uVar11 - 0x20 & 0x1f);
        }
        puVar8 = (uint *)(uVar7 + 0xc4 + uVar10 * 4);
        uVar11 = uVar11 - 0x20;
      }
      *puVar8 = *puVar8 | 0x80000000U >> ((byte)uVar11 & 0x1f);
    }
    *piVar4 = param_3;
    *(int *)(param_3 + -4 + (int)piVar4) = param_3;
  }
  return 1;
}


// ==== 1104a38f ___sbh_heap_check

/* Library Function - Single Match
    ___sbh_heap_check
   
   Library: Visual Studio 2005 Release */

undefined4 ___sbh_heap_check(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  int *piVar10;
  uint *puVar11;
  int local_13c [64];
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint local_2c;
  uint *local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint *local_c;
  uint local_8;
  
  if (DAT_1109fcd4 == (uint *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_38 = DAT_1109fcd4;
    local_20 = 0;
    puVar2 = DAT_1109fcd4;
    if (0 < DAT_1109fcd0) {
      do {
        uVar3 = puVar2[4];
        if (uVar3 == 0) {
          return 0xfffffffe;
        }
        local_c = (uint *)puVar2[3];
        local_28 = (uint *)(uVar3 + 0x144);
        puVar9 = (uint *)(uVar3 + 0xc4);
        local_24 = puVar2[2];
        local_14 = 0;
        local_18 = 0;
        local_10 = 0;
        local_3c = puVar9;
        local_38 = puVar2;
        do {
          uVar3 = local_24;
          iVar7 = 0;
          local_2c = 0;
          local_1c = 0;
          local_8 = 0;
          piVar10 = local_13c;
          local_3c = puVar9;
          for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar10 = 0;
            piVar10 = piVar10 + 1;
          }
          if (-1 < (int)uVar3) {
            if (local_c == (uint *)0x0) {
              return 0xfffffffc;
            }
            puVar2 = local_c + 0x3ff;
            do {
              puVar9 = puVar2 + -0x3fc;
              if ((puVar2[-0x3fd] != 0xffffffff) || (*puVar2 != 0xffffffff)) {
                return 0xfffffffb;
              }
              do {
                uVar3 = *puVar9;
                if ((uVar3 & 1) == 0) {
                  iVar4 = ((int)uVar3 >> 4) + -1;
                  if (0x3f < iVar4) {
                    iVar4 = 0x3f;
                  }
                  local_13c[iVar4] = local_13c[iVar4] + 1;
                  uVar5 = uVar3;
                }
                else {
                  if (0x400 < (int)(uVar3 - 1)) {
                    return 0xfffffffa;
                  }
                  local_8 = local_8 + 1;
                  uVar5 = uVar3 - 1;
                }
                if ((((int)uVar5 < 0x10) || ((uVar5 & 0xf) != 0)) || (0xff0 < (int)uVar5)) {
                  return 0xfffffff9;
                }
                puVar9 = (uint *)(uVar5 + (int)puVar9);
                if (puVar9[-1] != uVar3) {
                  return 0xfffffff8;
                }
              } while (puVar9 < puVar2);
              if (puVar9 != puVar2) {
                return 0xfffffff8;
              }
              puVar2 = puVar2 + 0x400;
              iVar7 = iVar7 + 1;
            } while (iVar7 < 8);
            if (*local_28 != local_8) {
              return 0xfffffff7;
            }
            iVar4 = 0;
            puVar11 = local_28;
            do {
              local_8 = 0;
              local_34 = puVar11 + 2;
              puVar2 = (uint *)puVar11[1];
              local_30 = puVar11;
              puVar8 = local_34;
              if (puVar2 != puVar11) {
                do {
                  if (local_8 == local_13c[iVar4]) break;
                  if ((puVar2 < local_c) || (local_c + 0x2000 <= puVar2)) {
                    return 0xfffffff6;
                  }
                  puVar6 = (uint *)(((uint)puVar2 & 0xfffff000) + 0xc);
                  puVar9 = (uint *)(((uint)puVar2 & 0xfffff000) + 0xffc);
                  if (puVar6 == puVar9) {
                    return 0xfffffff5;
                  }
                  do {
                    if (puVar6 == puVar2) break;
                    puVar6 = (uint *)((int)puVar6 + (*puVar6 & 0xfffffffe));
                    puVar8 = local_34;
                  } while (puVar6 != puVar9);
                  if (puVar6 == puVar9) {
                    return 0xfffffff5;
                  }
                  iVar7 = ((int)*puVar2 >> 4) + -1;
                  if (0x3f < iVar7) {
                    iVar7 = 0x3f;
                  }
                  if (iVar7 != iVar4) {
                    return 0xfffffff4;
                  }
                  if ((uint *)puVar2[2] != local_30) {
                    return 0xfffffff3;
                  }
                  local_8 = local_8 + 1;
                  local_30 = puVar2;
                  puVar2 = (uint *)puVar2[1];
                } while (puVar2 != puVar11);
                if (local_8 != 0) {
                  if (iVar4 < 0x20) {
                    uVar3 = 0x80000000 >> ((byte)iVar4 & 0x1f);
                    local_2c = local_2c | uVar3;
                    local_14 = local_14 | uVar3;
                  }
                  else {
                    uVar3 = 0x80000000 >> ((byte)iVar4 - 0x20 & 0x1f);
                    local_1c = local_1c | uVar3;
                    local_18 = local_18 | uVar3;
                  }
                }
              }
              if (((uint *)local_30[1] != puVar11) || (local_8 != local_13c[iVar4])) {
                return 0xfffffff2;
              }
              if ((uint *)*puVar8 != local_30) {
                return 0xfffffff1;
              }
              iVar4 = iVar4 + 1;
              puVar2 = local_38;
              puVar9 = local_3c;
              puVar11 = puVar8;
            } while (iVar4 < 0x40);
          }
          if ((local_2c != puVar9[-0x20]) || (local_1c != *puVar9)) {
            return 0xfffffff0;
          }
          local_c = local_c + 0x2000;
          local_28 = local_28 + 0x81;
          local_24 = local_24 << 1;
          local_10 = local_10 + 1;
          puVar9 = puVar9 + 1;
          local_3c = puVar9;
        } while (local_10 < 0x20);
        if ((local_14 != *puVar2) || (local_18 != puVar2[1])) {
          return 0xffffffef;
        }
        puVar2 = puVar2 + 5;
        local_20 = local_20 + 1;
        local_38 = puVar2;
      } while (local_20 < DAT_1109fcd0);
    }
    uVar1 = 0;
  }
  return uVar1;
}


// ==== 1104a719 ___sbh_alloc_block

/* Library Function - Single Match
    ___sbh_alloc_block
   
   Library: Visual Studio 2005 Release */

int * __cdecl ___sbh_alloc_block(uint *param_1)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint local_c;
  int local_8;
  
  puVar9 = DAT_1109fcd4 + DAT_1109fcd0 * 5;
  uVar7 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar8 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)iVar8;
  param_1 = DAT_1109fcdc;
  if (iVar8 < 0x20) {
    uVar15 = 0xffffffff >> (bVar6 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    uVar15 = 0;
    local_c = 0xffffffff >> (bVar6 - 0x20 & 0x1f);
  }
  for (; (param_1 < puVar9 && ((param_1[1] & local_c) == 0 && (*param_1 & uVar15) == 0));
      param_1 = param_1 + 5) {
  }
  puVar13 = DAT_1109fcd4;
  if (param_1 == puVar9) {
    for (; (puVar13 < DAT_1109fcdc && ((puVar13[1] & local_c) == 0 && (*puVar13 & uVar15) == 0));
        puVar13 = puVar13 + 5) {
    }
    param_1 = puVar13;
    if (puVar13 == DAT_1109fcdc) {
      for (; (puVar13 < puVar9 && (puVar13[2] == 0)); puVar13 = puVar13 + 5) {
      }
      puVar14 = DAT_1109fcd4;
      param_1 = puVar13;
      if (puVar13 == puVar9) {
        for (; (puVar14 < DAT_1109fcdc && (puVar14[2] == 0)); puVar14 = puVar14 + 5) {
        }
        param_1 = puVar14;
        if ((puVar14 == DAT_1109fcdc) &&
           (param_1 = ___sbh_alloc_new_region(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar8 = ___sbh_alloc_new_group((int)param_1);
      *(int *)param_1[4] = iVar8;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar5 = (int *)param_1[4];
  local_8 = *piVar5;
  if ((local_8 == -1) ||
     ((piVar5[local_8 + 0x31] & local_c) == 0 && (piVar5[local_8 + 0x11] & uVar15) == 0)) {
    local_8 = 0;
    puVar9 = (uint *)(piVar5 + 0x11);
    uVar11 = piVar5[0x31];
    while ((uVar11 & local_c) == 0 && (*puVar9 & uVar15) == 0) {
      local_8 = local_8 + 1;
      puVar13 = puVar9 + 0x21;
      puVar9 = puVar9 + 1;
      uVar11 = *puVar13;
    }
  }
  piVar3 = piVar5 + local_8 * 0x81 + 0x51;
  iVar8 = 0;
  uVar15 = piVar5[local_8 + 0x11] & uVar15;
  if (uVar15 == 0) {
    uVar15 = piVar5[local_8 + 0x31] & local_c;
    iVar8 = 0x20;
  }
  for (; -1 < (int)uVar15; uVar15 = uVar15 * 2) {
    iVar8 = iVar8 + 1;
  }
  piVar12 = (int *)piVar3[iVar8 * 2 + 1];
  iVar10 = *piVar12 - uVar7;
  iVar16 = (iVar10 >> 4) + -1;
  if (0x3f < iVar16) {
    iVar16 = 0x3f;
  }
  DAT_1109fcdc = param_1;
  if (iVar16 != iVar8) {
    if (piVar12[1] == piVar12[2]) {
      if (iVar8 < 0x20) {
        pcVar2 = (char *)((int)piVar5 + iVar8 + 4);
        uVar15 = ~(0x80000000U >> ((byte)iVar8 & 0x1f));
        piVar5[local_8 + 0x11] = uVar15 & piVar5[local_8 + 0x11];
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          *param_1 = *param_1 & uVar15;
        }
      }
      else {
        pcVar2 = (char *)((int)piVar5 + iVar8 + 4);
        uVar15 = ~(0x80000000U >> ((byte)iVar8 - 0x20 & 0x1f));
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] & uVar15;
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          param_1[1] = param_1[1] & uVar15;
        }
      }
    }
    *(int *)(piVar12[2] + 4) = piVar12[1];
    *(int *)(piVar12[1] + 8) = piVar12[2];
    if (iVar10 == 0) goto LAB_1104a9b9;
    piVar1 = piVar3 + iVar16 * 2;
    iVar8 = piVar1[1];
    piVar12[2] = (int)piVar1;
    piVar12[1] = iVar8;
    piVar1[1] = (int)piVar12;
    *(int **)(piVar12[1] + 8) = piVar12;
    if (piVar12[1] == piVar12[2]) {
      cVar4 = *(char *)(iVar16 + 4 + (int)piVar5);
      *(char *)(iVar16 + 4 + (int)piVar5) = cVar4 + '\x01';
      bVar6 = (byte)iVar16;
      if (iVar16 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar6 & 0x1f);
        }
        piVar5[local_8 + 0x11] = piVar5[local_8 + 0x11] | 0x80000000U >> (bVar6 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
        }
        piVar5[local_8 + 0x31] = piVar5[local_8 + 0x31] | 0x80000000U >> (bVar6 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar10 != 0) {
    *piVar12 = iVar10;
    *(int *)(iVar10 + -4 + (int)piVar12) = iVar10;
  }
LAB_1104a9b9:
  piVar12 = (int *)((int)piVar12 + iVar10);
  *piVar12 = uVar7 + 1;
  *(uint *)((int)piVar12 + (uVar7 - 4)) = uVar7 + 1;
  iVar8 = *piVar3;
  *piVar3 = iVar8 + 1;
  if (((iVar8 == 0) && (param_1 == DAT_1109fbcc)) && (local_8 == DAT_1109fce4)) {
    DAT_1109fbcc = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar12 + 1;
}


// ==== 1104a9fc FUN_1104a9fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1104a9fc(undefined4 param_1)

{
  _DAT_1109fbd0 = param_1;
  return;
}


// ==== 1104ab0a FUN_1104ab0a

void __cdecl FUN_1104ab0a(undefined4 param_1)

{
  DAT_1109fbd4 = param_1;
  return;
}


// ==== 1104ab14 ___crtInitCritSecNoSpinCount@8

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2005 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}


// ==== 1104ab24 ___crtInitCritSecAndSpinCount

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___crtInitCritSecAndSpinCount
   
   Library: Visual Studio 2005 Release */

int __cdecl ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  HMODULE hModule;
  int local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_11089fe0;
  uStack_c = 0x1104ab30;
  local_20[0] = 0;
  pcVar1 = (code *)FUN_1103ccd2(DAT_1109fbd4);
  if (pcVar1 != (FARPROC)0x0) goto LAB_1104ab9a;
  iVar2 = __get_osplatform(local_20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_20[0] == 1) {
LAB_1104ab89:
    pcVar1 = ___crtInitCritSecNoSpinCount_8;
  }
  else {
    hModule = GetModuleHandleA(s_kernel32_dll_11075594);
    if (hModule == (HMODULE)0x0) goto LAB_1104ab89;
    pcVar1 = GetProcAddress(hModule,s_InitializeCriticalSectionAndSpin_1107556c);
    if (pcVar1 == (FARPROC)0x0) goto LAB_1104ab89;
  }
  DAT_1109fbd4 = FUN_1103cc5b((int)pcVar1);
LAB_1104ab9a:
  local_8 = (undefined *)0x0;
  iVar2 = (*pcVar1)(param_1,param_2);
  return iVar2;
}


// ==== 1104abe9 FUN_1104abe9

void __cdecl FUN_1104abe9(undefined4 param_1)

{
  DAT_1109fbd8 = param_1;
  return;
}


// ==== 1104ac3a __callnewh

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2005 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_1103ccd2(DAT_1109fbd8);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}


// ==== 1104ac5c x_ismbbtype_l

/* Library Function - Single Match
    int __cdecl x_ismbbtype_l(struct localeinfo_struct *,unsigned int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl x_ismbbtype_l(localeinfo_struct *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  if ((*(byte *)(local_10 + 0x1d + (param_2 & 0xff)) & (byte)param_4) == 0) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)(*(int *)(local_14 + 200) + (param_2 & 0xff) * 2) & param_3;
    }
    iVar2 = 0;
    if (uVar1 == 0) goto LAB_1104ac9e;
  }
  iVar2 = 1;
LAB_1104ac9e:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}


// ==== 1104ae1a __ismbblead

/* Library Function - Single Match
    __ismbblead
   
   Library: Visual Studio 2005 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,4);
  return iVar1;
}


// ==== 1104ae55 __ismbbkana_l

/* Library Function - Single Match
    __ismbbkana_l
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl __ismbbkana_l(uint _C,_locale_t _Locale)

{
  int iVar1;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if ((local_10 == 0) || (*(int *)(local_10 + 4) != 0x3a4)) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = x_ismbbtype_l(_Locale,_C,0,3);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return iVar1;
    }
  }
  return iVar1;
}


// ==== 1104aeb6 FUN_1104aeb6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1104aeb6(void)

{
  _DAT_1109fcb0 = 0;
  return;
}


// ==== 1104aeed __get_lc_time

/* Library Function - Single Match
    __get_lc_time
   
   Library: Visual Studio 2005 Release */

uint __get_lc_time(void)

{
  LPCWSTR pWVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  void *unaff_ESI;
  localeinfo_struct local_14;
  LPCWSTR local_c;
  LPCWSTR local_8;
  
  local_8 = (LPCWSTR)(uint)*(ushort *)(in_EAX + 0x42);
  local_c = (LPCWSTR)(uint)*(ushort *)(in_EAX + 0x44);
  if (unaff_ESI == (void *)0x0) {
    return 0xffffffff;
  }
  local_14.mbcinfo = (pthreadmbcinfo)0x0;
  uVar2 = ___getlocaleinfo(&local_14,1,local_8,0x31,(void *)((int)unaff_ESI + 4));
  uVar3 = ___getlocaleinfo(&local_14,1,local_8,0x32,(void *)((int)unaff_ESI + 8));
  uVar4 = ___getlocaleinfo(&local_14,1,local_8,0x33,(void *)((int)unaff_ESI + 0xc));
  uVar5 = ___getlocaleinfo(&local_14,1,local_8,0x34,(void *)((int)unaff_ESI + 0x10));
  uVar6 = ___getlocaleinfo(&local_14,1,local_8,0x35,(void *)((int)unaff_ESI + 0x14));
  uVar7 = ___getlocaleinfo(&local_14,1,local_8,0x36,(void *)((int)unaff_ESI + 0x18));
  uVar8 = ___getlocaleinfo(&local_14,1,local_8,0x37,unaff_ESI);
  uVar9 = ___getlocaleinfo(&local_14,1,local_8,0x2a,(void *)((int)unaff_ESI + 0x20));
  uVar10 = ___getlocaleinfo(&local_14,1,local_8,0x2b,(void *)((int)unaff_ESI + 0x24));
  uVar11 = ___getlocaleinfo(&local_14,1,local_8,0x2c,(void *)((int)unaff_ESI + 0x28));
  uVar12 = ___getlocaleinfo(&local_14,1,local_8,0x2d,(void *)((int)unaff_ESI + 0x2c));
  uVar13 = ___getlocaleinfo(&local_14,1,local_8,0x2e,(void *)((int)unaff_ESI + 0x30));
  uVar14 = ___getlocaleinfo(&local_14,1,local_8,0x2f,(void *)((int)unaff_ESI + 0x34));
  uVar15 = ___getlocaleinfo(&local_14,1,local_8,0x30,(void *)((int)unaff_ESI + 0x1c));
  uVar16 = ___getlocaleinfo(&local_14,1,local_8,0x44,(void *)((int)unaff_ESI + 0x38));
  uVar17 = ___getlocaleinfo(&local_14,1,local_8,0x45,(void *)((int)unaff_ESI + 0x3c));
  uVar18 = ___getlocaleinfo(&local_14,1,local_8,0x46,(void *)((int)unaff_ESI + 0x40));
  uVar19 = ___getlocaleinfo(&local_14,1,local_8,0x47,(void *)((int)unaff_ESI + 0x44));
  uVar20 = ___getlocaleinfo(&local_14,1,local_8,0x48,(void *)((int)unaff_ESI + 0x48));
  uVar21 = ___getlocaleinfo(&local_14,1,local_8,0x49,(void *)((int)unaff_ESI + 0x4c));
  uVar22 = ___getlocaleinfo(&local_14,1,local_8,0x4a,(void *)((int)unaff_ESI + 0x50));
  uVar23 = ___getlocaleinfo(&local_14,1,local_8,0x4b,(void *)((int)unaff_ESI + 0x54));
  uVar24 = ___getlocaleinfo(&local_14,1,local_8,0x4c,(void *)((int)unaff_ESI + 0x58));
  uVar25 = ___getlocaleinfo(&local_14,1,local_8,0x4d,(void *)((int)unaff_ESI + 0x5c));
  uVar26 = ___getlocaleinfo(&local_14,1,local_8,0x4e,(void *)((int)unaff_ESI + 0x60));
  uVar27 = ___getlocaleinfo(&local_14,1,local_8,0x4f,(void *)((int)unaff_ESI + 100));
  uVar28 = ___getlocaleinfo(&local_14,1,local_8,0x38,(void *)((int)unaff_ESI + 0x68));
  uVar29 = ___getlocaleinfo(&local_14,1,local_8,0x39,(void *)((int)unaff_ESI + 0x6c));
  uVar30 = ___getlocaleinfo(&local_14,1,local_8,0x3a,(void *)((int)unaff_ESI + 0x70));
  uVar31 = ___getlocaleinfo(&local_14,1,local_8,0x3b,(void *)((int)unaff_ESI + 0x74));
  uVar32 = ___getlocaleinfo(&local_14,1,local_8,0x3c,(void *)((int)unaff_ESI + 0x78));
  uVar33 = ___getlocaleinfo(&local_14,1,local_8,0x3d,(void *)((int)unaff_ESI + 0x7c));
  uVar34 = ___getlocaleinfo(&local_14,1,local_8,0x3e,(void *)((int)unaff_ESI + 0x80));
  uVar35 = ___getlocaleinfo(&local_14,1,local_8,0x3f,(void *)((int)unaff_ESI + 0x84));
  uVar36 = ___getlocaleinfo(&local_14,1,local_8,0x40,(void *)((int)unaff_ESI + 0x88));
  uVar37 = ___getlocaleinfo(&local_14,1,local_8,0x41,(void *)((int)unaff_ESI + 0x8c));
  uVar38 = ___getlocaleinfo(&local_14,1,local_8,0x42,(void *)((int)unaff_ESI + 0x90));
  uVar39 = ___getlocaleinfo(&local_14,1,local_8,0x43,(void *)((int)unaff_ESI + 0x94));
  uVar40 = ___getlocaleinfo(&local_14,1,local_8,0x28,(void *)((int)unaff_ESI + 0x98));
  uVar41 = ___getlocaleinfo(&local_14,1,local_8,0x29,(void *)((int)unaff_ESI + 0x9c));
  uVar42 = ___getlocaleinfo(&local_14,1,local_c,0x1f,(void *)((int)unaff_ESI + 0xa0));
  uVar43 = ___getlocaleinfo(&local_14,1,local_c,0x20,(void *)((int)unaff_ESI + 0xa4));
  uVar44 = ___getlocaleinfo(&local_14,1,local_c,0x1003,(void *)((int)unaff_ESI + 0xa8));
  pWVar1 = local_c;
  uVar45 = ___getlocaleinfo(&local_14,0,local_c,0x1009,(void *)((int)unaff_ESI + 0xb0));
  *(LPCWSTR *)((int)unaff_ESI + 0xac) = pWVar1;
  return uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 |
         uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 | uVar22 |
         uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31 | uVar32 |
         uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 | uVar41 | uVar42 |
         uVar43 | uVar44 | uVar45;
}


// ==== 1104b306 ___free_lc_time

/* Library Function - Single Match
    ___free_lc_time
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lc_time(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    _free((void *)param_1[1]);
    _free((void *)param_1[2]);
    _free((void *)param_1[3]);
    _free((void *)param_1[4]);
    _free((void *)param_1[5]);
    _free((void *)param_1[6]);
    _free((void *)*param_1);
    _free((void *)param_1[8]);
    _free((void *)param_1[9]);
    _free((void *)param_1[10]);
    _free((void *)param_1[0xb]);
    _free((void *)param_1[0xc]);
    _free((void *)param_1[0xd]);
    _free((void *)param_1[7]);
    _free((void *)param_1[0xe]);
    _free((void *)param_1[0xf]);
    _free((void *)param_1[0x10]);
    _free((void *)param_1[0x11]);
    _free((void *)param_1[0x12]);
    _free((void *)param_1[0x13]);
    _free((void *)param_1[0x14]);
    _free((void *)param_1[0x15]);
    _free((void *)param_1[0x16]);
    _free((void *)param_1[0x17]);
    _free((void *)param_1[0x18]);
    _free((void *)param_1[0x19]);
    _free((void *)param_1[0x1a]);
    _free((void *)param_1[0x1b]);
    _free((void *)param_1[0x1c]);
    _free((void *)param_1[0x1d]);
    _free((void *)param_1[0x1e]);
    _free((void *)param_1[0x1f]);
    _free((void *)param_1[0x20]);
    _free((void *)param_1[0x21]);
    _free((void *)param_1[0x22]);
    _free((void *)param_1[0x23]);
    _free((void *)param_1[0x24]);
    _free((void *)param_1[0x25]);
    _free((void *)param_1[0x26]);
    _free((void *)param_1[0x27]);
    _free((void *)param_1[0x28]);
    _free((void *)param_1[0x29]);
    _free((void *)param_1[0x2a]);
  }
  return;
}


// ==== 1104b496 ___init_time

/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2005 Release */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  undefined **ppuVar1;
  undefined **_Memory;
  uint uVar2;
  int **ppiVar3;
  
  if (_LocInfo->lc_category[1].locale == (char *)0x0) {
    _Memory = &PTR_DAT_1109b898;
  }
  else {
    _Memory = __calloc_crt(1,0xb8);
    if (_Memory == (undefined **)0x0) {
      return 1;
    }
    uVar2 = __get_lc_time();
    if (uVar2 != 0) {
      ___free_lc_time(_Memory);
      _free(_Memory);
      return 1;
    }
    _Memory[0x2d] = (undefined *)0x1;
  }
  ppiVar3 = &_LocInfo[1].lc_category[0].wrefcount;
  ppuVar1 = (undefined **)*ppiVar3;
  if (ppuVar1 != &PTR_DAT_1109b898) {
    InterlockedDecrement((LONG *)(ppuVar1 + 0x2d));
  }
  *ppiVar3 = (int *)_Memory;
  return 0;
}


// ==== 1104b53c ___free_lconv_num

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_1109b958) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_1109b95c) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_1109b960) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}


// ==== 1104b57c ___init_numeric

/* Library Function - Single Match
    ___init_numeric
   
   Library: Visual Studio 2005 Release */

int __cdecl ___init_numeric(threadlocinfo *_LocInfo)

{
  char *pcVar1;
  char cVar2;
  threadlocinfo *ptVar3;
  threadlocinfo *_Address;
  uint uVar4;
  char *pcVar5;
  LONG LVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  threadlocinfo *ptVar10;
  LPCWSTR _LocaleName;
  localeinfo_struct local_1c;
  uint *local_14;
  uint local_10;
  wchar_t *local_c;
  wchar_t *local_8;
  
  ptVar3 = _LocInfo;
  local_1c.locinfo = _LocInfo;
  local_1c.mbcinfo = (pthreadmbcinfo)0x0;
  if ((_LocInfo->lc_category[0].wrefcount == (int *)0x0) &&
     (_LocInfo->lc_category[0].refcount == (int *)0x0)) {
    local_8 = (wchar_t *)0x0;
    local_c = (wchar_t *)0x0;
    _LocInfo = (threadlocinfo *)&PTR_DAT_1109b958;
LAB_1104b6e6:
    if (ptVar3->locale_name[5] != (wchar_t *)0x0) {
      InterlockedDecrement((LONG *)ptVar3->locale_name[5]);
    }
    if ((ptVar3->locale_name[4] != (wchar_t *)0x0) &&
       (LVar6 = InterlockedDecrement((LONG *)ptVar3->locale_name[4]), LVar6 == 0)) {
      _free(ptVar3->locale_name[4]);
      _free((void *)ptVar3[1].lc_codepage);
    }
    ptVar3->locale_name[5] = local_8;
    ptVar3->locale_name[4] = local_c;
    ptVar3[1].lc_codepage = (uint)_LocInfo;
    iVar7 = 0;
  }
  else {
    _Address = __calloc_crt(1,0x30);
    if (_Address != (threadlocinfo *)0x0) {
      piVar8 = (int *)_LocInfo[1].lc_codepage;
      ptVar10 = _Address;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        ptVar10->refcount = *piVar8;
        piVar8 = piVar8 + 1;
        ptVar10 = (threadlocinfo *)&ptVar10->lc_codepage;
      }
      local_c = __malloc_crt(4);
      if (local_c != (wchar_t *)0x0) {
        local_c[0] = L'\0';
        local_c[1] = L'\0';
        if (_LocInfo->lc_category[0].wrefcount == (int *)0x0) {
          _Address->refcount = (int)PTR_DAT_1109b958;
          _Address->lc_codepage = (uint)PTR_DAT_1109b95c;
          local_8 = (wchar_t *)0x0;
          _Address->lc_collate_cp = (uint)PTR_DAT_1109b960;
        }
        else {
          local_8 = __malloc_crt(4);
          if (local_8 == (wchar_t *)0x0) {
            iVar7 = 1;
LAB_1104b60c:
            _free(_Address);
            _free(local_c);
            return iVar7;
          }
          local_8[0] = L'\0';
          local_8[1] = L'\0';
          _LocaleName = (LPCWSTR)(uint)*(ushort *)((int)&_LocInfo->lc_category[2].wrefcount + 2);
          local_10 = ___getlocaleinfo(&local_1c,1,_LocaleName,0xe,_Address);
          uVar4 = ___getlocaleinfo(&local_1c,1,_LocaleName,0xf,&_Address->lc_codepage);
          local_10 = local_10 | uVar4;
          local_14 = &_Address->lc_collate_cp;
          iVar7 = ___getlocaleinfo(&local_1c,1,_LocaleName,0x10,local_14);
          if (iVar7 != 0 || local_10 != 0) {
            ___free_lconv_num(&_Address->refcount);
            iVar7 = -1;
            goto LAB_1104b60c;
          }
          pcVar5 = (char *)*local_14;
          while (*pcVar5 != '\0') {
            cVar2 = *pcVar5;
            if ((cVar2 < '0') || ('9' < cVar2)) {
              pcVar9 = pcVar5;
              if (cVar2 != ';') goto LAB_1104b696;
              do {
                pcVar1 = pcVar9 + 1;
                *pcVar9 = *pcVar1;
                pcVar9 = pcVar1;
              } while (*pcVar1 != '\0');
            }
            else {
              *pcVar5 = cVar2 + -0x30;
LAB_1104b696:
              pcVar5 = pcVar5 + 1;
            }
          }
        }
        local_c[0] = L'\x01';
        local_c[1] = L'\0';
        _LocInfo = _Address;
        if (local_8 != (wchar_t *)0x0) {
          local_8[0] = L'\x01';
          local_8[1] = L'\0';
        }
        goto LAB_1104b6e6;
      }
      _free(_Address);
    }
    iVar7 = 1;
  }
  return iVar7;
}


// ==== 1104b777 ___free_lconv_mon

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_1109b964) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_1109b968) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_1109b96c) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_1109b970) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_1109b974) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_1109b978) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_1109b97c) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}


// ==== 1104b800 ___init_monetary

/* Library Function - Single Match
    ___init_monetary
   
   Library: Visual Studio 2005 Release */

int __cdecl ___init_monetary(threadlocinfo *_LocInfo)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  uint *puVar18;
  LONG LVar19;
  int iVar20;
  undefined **_Memory;
  LPCWSTR _LocaleName;
  char *pcVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  localeinfo_struct local_14;
  wchar_t *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_14.locinfo = _LocInfo;
  local_14.mbcinfo = (pthreadmbcinfo)0x0;
  if ((_LocInfo->lc_category[0].refcount == (int *)0x0) &&
     (_LocInfo->lc_category[0].wrefcount == (int *)0x0)) {
    local_8 = (undefined4 *)0x0;
    local_c = (wchar_t *)0x0;
    _Memory = &PTR_DAT_1109b958;
LAB_1104ba67:
    if ((LONG *)_LocInfo[1].refcount != (LONG *)0x0) {
      InterlockedDecrement((LONG *)_LocInfo[1].refcount);
    }
    if ((_LocInfo->locale_name[4] != (wchar_t *)0x0) &&
       (LVar19 = InterlockedDecrement((LONG *)_LocInfo->locale_name[4]), LVar19 == 0)) {
      _free((void *)_LocInfo[1].lc_codepage);
      _free(_LocInfo->locale_name[4]);
    }
    _LocInfo[1].refcount = (int)local_8;
    _LocInfo->locale_name[4] = local_c;
    _LocInfo[1].lc_codepage = (uint)_Memory;
    iVar20 = 0;
  }
  else {
    _Memory = __calloc_crt(1,0x30);
    if (_Memory != (undefined **)0x0) {
      local_c = __malloc_crt(4);
      if (local_c == (wchar_t *)0x0) {
        _free(_Memory);
      }
      else {
        local_c[0] = L'\0';
        local_c[1] = L'\0';
        if (_LocInfo->lc_category[0].refcount == (int *)0x0) {
          ppuVar22 = &PTR_DAT_1109b958;
          ppuVar23 = _Memory;
          for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 + -1) {
            *ppuVar23 = *ppuVar22;
            ppuVar22 = ppuVar22 + 1;
            ppuVar23 = ppuVar23 + 1;
          }
LAB_1104ba32:
          puVar18 = &_LocInfo[1].lc_codepage;
          *_Memory = *(undefined **)*puVar18;
          _Memory[1] = *(undefined **)(*puVar18 + 4);
          _Memory[2] = *(undefined **)(*puVar18 + 8);
          local_c[0] = L'\x01';
          local_c[1] = L'\0';
          if (local_8 != (undefined4 *)0x0) {
            *local_8 = 1;
          }
          goto LAB_1104ba67;
        }
        local_8 = __malloc_crt(4);
        if (local_8 == (undefined4 *)0x0) {
          _free(_Memory);
          _free(local_c);
        }
        else {
          *local_8 = 0;
          _LocaleName = (LPCWSTR)(uint)*(ushort *)&_LocInfo->lc_category[2].refcount;
          iVar20 = ___getlocaleinfo(&local_14,1,_LocaleName,0x15,_Memory + 3);
          iVar3 = ___getlocaleinfo(&local_14,1,_LocaleName,0x14,_Memory + 4);
          iVar4 = ___getlocaleinfo(&local_14,1,_LocaleName,0x16,_Memory + 5);
          iVar5 = ___getlocaleinfo(&local_14,1,_LocaleName,0x17,_Memory + 6);
          iVar6 = ___getlocaleinfo(&local_14,1,_LocaleName,0x18,_Memory + 7);
          iVar7 = ___getlocaleinfo(&local_14,1,_LocaleName,0x50,_Memory + 8);
          iVar8 = ___getlocaleinfo(&local_14,1,_LocaleName,0x51,_Memory + 9);
          iVar9 = ___getlocaleinfo(&local_14,0,_LocaleName,0x1a,_Memory + 10);
          iVar10 = ___getlocaleinfo(&local_14,0,_LocaleName,0x19,(void *)((int)_Memory + 0x29));
          iVar11 = ___getlocaleinfo(&local_14,0,_LocaleName,0x54,(void *)((int)_Memory + 0x2a));
          iVar12 = ___getlocaleinfo(&local_14,0,_LocaleName,0x55,(void *)((int)_Memory + 0x2b));
          iVar13 = ___getlocaleinfo(&local_14,0,_LocaleName,0x56,_Memory + 0xb);
          iVar14 = ___getlocaleinfo(&local_14,0,_LocaleName,0x57,(void *)((int)_Memory + 0x2d));
          iVar15 = ___getlocaleinfo(&local_14,0,_LocaleName,0x52,(void *)((int)_Memory + 0x2e));
          iVar16 = ___getlocaleinfo(&local_14,0,_LocaleName,0x53,(void *)((int)_Memory + 0x2f));
          if (iVar16 == 0 &&
              (((((((((((((iVar20 == 0 && iVar3 == 0) && iVar4 == 0) && iVar5 == 0) && iVar6 == 0)
                      && iVar7 == 0) && iVar8 == 0) && iVar9 == 0) && iVar10 == 0) && iVar11 == 0)
                 && iVar12 == 0) && iVar13 == 0) && iVar14 == 0) && iVar15 == 0)) {
            pcVar17 = _Memory[7];
            while (*pcVar17 != '\0') {
              cVar2 = *pcVar17;
              if ((cVar2 < '0') || ('9' < cVar2)) {
                pcVar21 = pcVar17;
                if (cVar2 != ';') goto LAB_1104ba07;
                do {
                  pcVar1 = pcVar21 + 1;
                  *pcVar21 = *pcVar1;
                  pcVar21 = pcVar1;
                } while (*pcVar1 != '\0');
              }
              else {
                *pcVar17 = cVar2 + -0x30;
LAB_1104ba07:
                pcVar17 = pcVar17 + 1;
              }
            }
            goto LAB_1104ba32;
          }
          ___free_lconv_mon((int)_Memory);
          _free(_Memory);
          _free(local_c);
          _free(local_8);
        }
      }
    }
    iVar20 = 1;
  }
  return iVar20;
}


// ==== 1104bac4 ___init_ctype

/* Library Function - Single Match
    ___init_ctype
   
   Library: Visual Studio 2005 Release */

int __cdecl ___init_ctype(threadlocinfo *_LocInfo)

{
  BYTE *pBVar1;
  byte bVar2;
  LONG *lpAddend;
  undefined2 *_Dst;
  int iVar3;
  BOOL BVar4;
  BYTE *pBVar5;
  LONG LVar6;
  BYTE *pBVar7;
  uint uVar8;
  localeinfo_struct local_4c;
  wchar_t *local_44;
  LPWORD local_40;
  undefined2 *local_3c;
  int *local_38;
  wchar_t *local_34;
  undefined4 *local_30;
  void *local_2c;
  undefined2 *local_28;
  LPCSTR local_24;
  BYTE *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  local_30 = (undefined4 *)0x0;
  local_28 = (undefined2 *)0x0;
  local_20 = (BYTE *)0x0;
  local_2c = (void *)0x0;
  local_24 = (LPCSTR)0x0;
  local_4c.locinfo = _LocInfo;
  local_4c.mbcinfo = (pthreadmbcinfo)0x0;
  if (_LocInfo->lc_category[0].wlocale == (wchar_t *)0x0) {
    lpAddend = (LONG *)_LocInfo[1].lc_collate_cp;
    if (lpAddend != (LONG *)0x0) {
      InterlockedDecrement(lpAddend);
    }
    _LocInfo[1].lc_collate_cp = 0;
    _LocInfo[1].lc_time_cp = 0;
    _LocInfo[1].lc_category[0].locale = &DAT_110756a8;
    _LocInfo[1].lc_category[0].wlocale = (wchar_t *)&DAT_11075b30;
    _LocInfo[1].lc_category[0].refcount = (int *)&DAT_11075cb0;
    _LocInfo->locale_name[3] = (wchar_t *)0x1;
    goto LAB_1104be4a;
  }
  if ((_LocInfo->lc_codepage == 0) &&
     (iVar3 = ___getlocaleinfo(&local_4c,0,
                               (LPCWSTR)(uint)*(ushort *)&_LocInfo->lc_category[2].locale,0x1004,
                               &_LocInfo->lc_codepage), iVar3 != 0)) {
LAB_1104bddd:
    _free(local_30);
    _free(local_28);
    _free(local_20);
    _free(local_2c);
  }
  else {
    local_30 = __malloc_crt(4);
    local_28 = __calloc_crt(0x180,2);
    local_20 = __calloc_crt(0x180,1);
    local_2c = __calloc_crt(0x180,1);
    local_24 = __calloc_crt(0x101,1);
    if ((local_30 == (undefined4 *)0x0) ||
       ((((local_28 == (undefined2 *)0x0 || (local_24 == (LPCSTR)0x0)) || (local_20 == (BYTE *)0x0))
        || (local_2c == (void *)0x0)))) goto LAB_1104bddd;
    *local_30 = 0;
    iVar3 = 0;
    do {
      local_24[iVar3] = (CHAR)iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
    BVar4 = GetCPInfo(_LocInfo->lc_codepage,&local_1c);
    if ((BVar4 == 0) || (5 < local_1c.MaxCharSize)) goto LAB_1104bddd;
    local_34 = (wchar_t *)(local_1c.MaxCharSize & 0xffff);
    if (((wchar_t *)0x1 < local_34) && (local_1c.LeadByte[0] != '\0')) {
      pBVar5 = local_1c.LeadByte + 1;
      do {
        bVar2 = *pBVar5;
        if (bVar2 == 0) break;
        for (uVar8 = (uint)pBVar5[-1]; (int)uVar8 <= (int)(uint)bVar2; uVar8 = uVar8 + 1) {
          local_24[uVar8] = ' ';
          bVar2 = *pBVar5;
        }
        pBVar7 = pBVar5 + 1;
        pBVar5 = pBVar5 + 2;
      } while (*pBVar7 != 0);
    }
    local_40 = local_28 + 0x80;
    BVar4 = ___crtGetStringTypeA((_locale_t)0x0,1,local_24,0x100,local_40,_LocInfo->lc_codepage,0);
    if (((BVar4 == 0) ||
        (iVar3 = ___crtLCMapStringA((_locale_t)0x0,_LocInfo->lc_category[0].wlocale,0x100,
                                    local_24 + 1,0xff,(LPSTR)(local_20 + 0x81),0xff,
                                    _LocInfo->lc_codepage,0), iVar3 == 0)) ||
       (iVar3 = ___crtLCMapStringA((_locale_t)0x0,_LocInfo->lc_category[0].wlocale,0x200,
                                   local_24 + 1,0xff,(LPSTR)((int)local_2c + 0x81),0xff,
                                   _LocInfo->lc_codepage,0), pBVar5 = local_20, _Dst = local_28,
       iVar3 == 0)) goto LAB_1104bddd;
    local_3c = local_28 + 0x7f;
    *local_3c = 0;
    local_44 = (wchar_t *)(local_20 + 0x80);
    local_20[0x7f] = 0;
    *(undefined1 *)((int)local_2c + 0x7f) = 0;
    *(byte *)local_44 = 0;
    local_38 = (int *)((int)local_2c + 0x80);
    *(undefined1 *)local_38 = 0;
    if ((1 < (int)local_34) && (local_1c.LeadByte[0] != '\0')) {
      pBVar7 = local_1c.LeadByte + 1;
      do {
        local_20 = pBVar7;
        if (*pBVar7 == 0) break;
        uVar8 = (uint)pBVar7[-1];
        if (uVar8 <= *pBVar7) {
          local_28 = _Dst + uVar8 + 0x80;
          do {
            *local_28 = 0x8000;
            uVar8 = uVar8 + 1;
            local_28 = local_28 + 1;
          } while ((int)uVar8 <= (int)(uint)*pBVar7);
        }
        local_20 = pBVar7 + 2;
        pBVar1 = pBVar7 + 1;
        pBVar7 = local_20;
      } while (*pBVar1 != 0);
    }
    _memcpy(_Dst,_Dst + 0x100,0xfe);
    _memcpy(pBVar5,pBVar5 + 0x100,0x7f);
    _memcpy(local_2c,(void *)((int)local_2c + 0x100),0x7f);
    if (((LONG *)_LocInfo[1].lc_collate_cp != (LONG *)0x0) &&
       (LVar6 = InterlockedDecrement((LONG *)_LocInfo[1].lc_collate_cp), LVar6 == 0)) {
      _free((void *)(_LocInfo[1].lc_time_cp - 0xfe));
      _free(_LocInfo[1].lc_category[0].wlocale + -0x40);
      _free(_LocInfo[1].lc_category[0].refcount + -0x20);
      _free((void *)_LocInfo[1].lc_collate_cp);
    }
    *local_30 = 1;
    _LocInfo[1].lc_collate_cp = (uint)local_30;
    _LocInfo[1].lc_category[0].locale = (char *)local_40;
    _LocInfo[1].lc_time_cp = (uint)local_3c;
    _LocInfo[1].lc_category[0].wlocale = local_44;
    _LocInfo[1].lc_category[0].refcount = local_38;
    _LocInfo->locale_name[3] = local_34;
  }
  _free(local_24);
LAB_1104be4a:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


// ==== 1104be98 ____lc_codepage_func

/* Library Function - Single Match
    ____lc_codepage_func
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

UINT __cdecl ____lc_codepage_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_1109b138) && ((p_Var1->_ownlocale & DAT_1109b710) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return ptVar2->lc_codepage;
}


// ==== 1104bf0d __Getdays_l

/* Library Function - Single Match
    __Getdays_l
   
   Library: Visual Studio 2005 Release */

char * __cdecl __Getdays_l(localeinfo_struct *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  errno_t eVar4;
  int iVar5;
  int iVar6;
  int local_1c [2];
  int local_14;
  char local_10;
  char *local_c;
  uint local_8;
  
  iVar5 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_1c,param_1);
  iVar1 = *(int *)(local_1c[0] + 0xd4);
  local_8 = 0;
  do {
    iVar6 = local_8 * 4;
    local_c = (char *)_strlen(*(char **)(iVar6 + 0x1c + iVar1));
    sVar2 = _strlen(*(char **)(iVar6 + iVar1));
    local_8 = local_8 + 1;
    iVar5 = sVar2 + iVar5 + 2 + (int)local_c;
  } while (local_8 < 7);
  pcVar3 = __malloc_crt(iVar5 + 1);
  local_c = pcVar3;
  if (pcVar3 != (char *)0x0) {
    local_8 = 0;
    do {
      *pcVar3 = ':';
      pcVar3 = pcVar3 + 1;
      eVar4 = _strcpy_s(pcVar3,(rsize_t)(local_c + iVar5 + (1 - (int)pcVar3)),
                        *(char **)(iVar1 + local_8 * 4));
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar3);
      pcVar3[sVar2] = ':';
      pcVar3 = pcVar3 + sVar2 + 1;
      eVar4 = _strcpy_s(pcVar3,(rsize_t)(local_c + iVar5 + (1 - (int)pcVar3)),
                        *(char **)(iVar1 + 0x1c + local_8 * 4));
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar3);
      pcVar3 = pcVar3 + sVar2;
      local_8 = local_8 + 1;
    } while (local_8 < 7);
    *pcVar3 = '\0';
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return local_c;
}


// ==== 1104c014 __Getmonths_l

/* Library Function - Single Match
    __Getmonths_l
   
   Library: Visual Studio 2005 Release */

char * __cdecl __Getmonths_l(localeinfo_struct *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  errno_t eVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_20 [2];
  int local_18;
  char local_14;
  size_t local_10;
  int local_c;
  char *local_8;
  
  iVar5 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_20,param_1);
  iVar1 = *(int *)(local_20[0] + 0xd4);
  puVar6 = (undefined4 *)(iVar1 + 0x38);
  local_c = 0xc;
  do {
    local_8 = (char *)puVar6;
    local_10 = _strlen((char *)puVar6[0xc]);
    sVar2 = _strlen((char *)*puVar6);
    puVar6 = (undefined4 *)((int)local_8 + 4);
    local_c = local_c + -1;
    iVar5 = sVar2 + iVar5 + 2 + local_10;
  } while (local_c != 0);
  local_8 = (char *)puVar6;
  pcVar3 = __malloc_crt(iVar5 + 1);
  local_8 = pcVar3;
  if (pcVar3 != (char *)0x0) {
    puVar6 = (undefined4 *)(iVar1 + 0x68);
    local_c = 0xc;
    do {
      *pcVar3 = ':';
      pcVar3 = pcVar3 + 1;
      eVar4 = _strcpy_s(pcVar3,(rsize_t)(local_8 + iVar5 + (1 - (int)pcVar3)),(char *)puVar6[-0xc]);
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar3);
      pcVar3[sVar2] = ':';
      pcVar3 = pcVar3 + sVar2 + 1;
      eVar4 = _strcpy_s(pcVar3,(rsize_t)(local_8 + iVar5 + (1 - (int)pcVar3)),(char *)*puVar6);
      if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar3);
      pcVar3 = pcVar3 + sVar2;
      puVar6 = puVar6 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    *pcVar3 = '\0';
  }
  if (local_14 != '\0') {
    *(uint *)(local_18 + 0x70) = *(uint *)(local_18 + 0x70) & 0xfffffffd;
  }
  return local_8;
}


// ==== 1104c11b __Gettnames_l

/* Library Function - Single Match
    __Gettnames_l
   
   Library: Visual Studio 2005 Release */

void * __cdecl __Gettnames_l(localeinfo_struct *param_1)

{
  void *_Src;
  undefined4 *puVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  void *_Dst;
  errno_t eVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int local_28 [2];
  int local_20;
  char local_1c;
  size_t local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  size_t local_c;
  undefined4 *local_8;
  
  iVar8 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_1);
  _Src = *(void **)(local_28[0] + 0xd4);
  local_8 = (undefined4 *)0x0;
  do {
    iVar7 = (int)local_8 * 4;
    local_18 = _strlen(*(char **)(iVar7 + 0x1c + (int)_Src));
    sVar2 = _strlen(*(char **)(iVar7 + (int)_Src));
    local_8 = (undefined4 *)((int)local_8 + 1);
    iVar8 = sVar2 + iVar8 + 2 + local_18;
  } while (local_8 < 7);
  local_14 = (undefined4 *)((int)_Src + 0x38);
  local_10 = (undefined4 *)0xc;
  do {
    puVar1 = local_14;
    local_18 = _strlen((char *)local_14[0xc]);
    sVar2 = _strlen((char *)*puVar1);
    local_14 = local_14 + 1;
    local_10 = (undefined4 *)((int)local_10 + -1);
    iVar8 = sVar2 + iVar8 + 2 + local_18;
  } while (local_10 != (undefined4 *)0x0);
  sVar2 = _strlen(*(char **)((int)_Src + 0x9c));
  sVar3 = _strlen(*(char **)((int)_Src + 0x98));
  sVar4 = _strlen(*(char **)((int)_Src + 0xa0));
  sVar5 = _strlen(*(char **)((int)_Src + 0xa4));
  local_c = _strlen(*(char **)((int)_Src + 0xa8));
  local_c = sVar3 + iVar8 + sVar2 + sVar4 + sVar5 + 0xbd + local_c;
  _Dst = __malloc_crt(local_c);
  if (_Dst != (void *)0x0) {
    pcVar9 = (char *)((int)_Dst + 0xb8);
    _memcpy(_Dst,_Src,0xb8);
    local_8 = (undefined4 *)0x0;
    local_10 = (undefined4 *)((int)_Src + 0x1c);
    local_14 = (undefined4 *)((int)_Dst - (int)_Src);
    do {
      *(char **)((int)_Dst + (int)local_8 * 4) = pcVar9;
      eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),(char *)local_10[-7]);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar9);
      pcVar9 = pcVar9 + sVar2 + 1;
      *(char **)((int)local_14 + (int)local_10) = pcVar9;
      eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),(char *)*local_10);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar9);
      local_8 = (undefined4 *)((int)local_8 + 1);
      local_10 = local_10 + 1;
      pcVar9 = pcVar9 + sVar2 + 1;
    } while (local_8 < 7);
    local_8 = (undefined4 *)((int)_Dst + 0x68);
    local_10 = (undefined4 *)((int)_Src + 0x38);
    local_18 = 0xc;
    do {
      *(char **)((int)local_10 + (int)local_14) = pcVar9;
      eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),(char *)*local_10);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar9);
      pcVar9 = pcVar9 + sVar2 + 1;
      *local_8 = pcVar9;
      eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),(char *)local_10[0xc]);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar2 = _strlen(pcVar9);
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
      local_18 = local_18 + -1;
      pcVar9 = pcVar9 + sVar2 + 1;
    } while (local_18 != 0);
    *(char **)((int)_Dst + 0x98) = pcVar9;
    eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),*(char **)((int)_Src + 0x98));
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    sVar2 = _strlen(pcVar9);
    pcVar9 = pcVar9 + sVar2 + 1;
    *(char **)((int)_Dst + 0x9c) = pcVar9;
    eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),*(char **)((int)_Src + 0x9c));
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    sVar2 = _strlen(pcVar9);
    pcVar9 = pcVar9 + sVar2 + 1;
    *(char **)((int)_Dst + 0xa0) = pcVar9;
    eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),*(char **)((int)_Src + 0xa0));
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    sVar2 = _strlen(pcVar9);
    pcVar9 = pcVar9 + sVar2 + 1;
    *(char **)((int)_Dst + 0xa4) = pcVar9;
    eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),*(char **)((int)_Src + 0xa4));
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    sVar2 = _strlen(pcVar9);
    pcVar9 = pcVar9 + sVar2 + 1;
    *(char **)((int)_Dst + 0xa8) = pcVar9;
    eVar6 = _strcpy_s(pcVar9,(int)_Dst + (local_c - (int)pcVar9),*(char **)((int)_Src + 0xa8));
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
  return _Dst;
}


// ==== 1104c479 FUN_1104c479

void __fastcall FUN_1104c479(int *param_1,char *param_2)

{
  int iVar1;
  int *in_EAX;
  
  iVar1 = *in_EAX;
  for (; (iVar1 != 0 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *(char *)*param_1 = *param_2;
    *param_1 = *param_1 + 1;
    *in_EAX = *in_EAX + -1;
    iVar1 = *in_EAX;
  }
  return;
}


// ==== 1104c4cf FID_conflict:__store_num

/* Library Function - Multiple Matches With Different Base Names
    void __cdecl _store_num(int,int,char * *,unsigned int *,unsigned int)
    __store_num
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __fastcall FID_conflict___store_num(uint *param_1,uint param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int *unaff_EDI;
  int local_8;
  
  local_8 = 0;
  if (param_3 == 0) {
    if (param_2 < *param_1) {
      iVar3 = param_2 - 1;
      if (param_2 != 0) {
        do {
          local_8 = local_8 + 1;
          *(char *)(iVar3 + *unaff_EDI) = (char)(in_EAX % 10) + '0';
          iVar3 = iVar3 + -1;
          in_EAX = in_EAX / 10;
        } while (iVar3 != -1);
      }
      *unaff_EDI = *unaff_EDI + local_8;
      *param_1 = *param_1 - local_8;
    }
    else {
      *param_1 = 0;
    }
  }
  else {
    uVar2 = *param_1;
    pcVar5 = (char *)*unaff_EDI;
    do {
      if (uVar2 < 2) break;
      iVar3 = in_EAX / 10;
      *pcVar5 = (char)(in_EAX % 10) + '0';
      pcVar5 = pcVar5 + 1;
      *param_1 = *param_1 - 1;
      uVar2 = *param_1;
      in_EAX = iVar3;
    } while (0 < iVar3);
    pcVar4 = (char *)*unaff_EDI;
    *unaff_EDI = (int)pcVar5;
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar5;
      *pcVar5 = *pcVar4;
      pcVar5 = pcVar5 + -1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < pcVar5);
  }
  return;
}


// ==== 1104c548 FUN_1104c548

undefined4 __fastcall
FUN_1104c548(int *param_1,int *param_2,_locale_t param_3,uint *param_4,int param_5,int param_6)

{
  int iVar1;
  char in_AL;
  undefined4 *puVar2;
  undefined **ppuVar3;
  char *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  
  if (in_AL < 'Z') {
    if (in_AL == 'Y') {
      if ((-0x76d < param_2[5]) && (param_2[5] < 0x1fa4)) {
        uVar8 = 4;
        goto LAB_1104c793;
      }
LAB_1104c6fb:
      puVar2 = (undefined4 *)FUN_110491c7();
      goto LAB_1104c823;
    }
    if (in_AL < 'J') {
      if (in_AL == 'I') {
        if ((-1 < param_2[2]) && (param_2[2] < 0x18)) {
LAB_1104c790:
          uVar8 = 2;
LAB_1104c793:
          FID_conflict___store_num(param_4,uVar8,param_6);
          return 1;
        }
      }
      else {
        if (in_AL == '\x04') {
          return 1;
        }
        if (in_AL == '\r') {
          return 1;
        }
        if (in_AL == '%') {
          *(undefined1 *)*param_1 = 0x25;
          *param_1 = *param_1 + 1;
          *param_4 = *param_4 - 1;
          return 1;
        }
        if (in_AL == 'A') {
          iVar7 = param_2[6];
          if ((-1 < iVar7) && (iVar7 < 7)) {
            pcVar4 = *(char **)(param_5 + 0x1c + iVar7 * 4);
            goto LAB_1104c91e;
          }
        }
        else if (in_AL == 'B') {
          iVar7 = param_2[4];
          if ((-1 < iVar7) && (iVar7 < 0xc)) {
            pcVar4 = *(char **)(param_5 + 0x68 + iVar7 * 4);
            goto LAB_1104c91e;
          }
        }
        else {
          if (in_AL != 'H') {
            return 0;
          }
          iVar1 = param_2[2];
          if (-1 < iVar1) {
            bVar6 = SBORROW4(iVar1,0x17);
            iVar7 = iVar1 + -0x17;
            bVar5 = iVar1 == 0x17;
            goto LAB_1104c5ac;
          }
        }
      }
    }
    else {
      if (in_AL == 'M') {
        iVar7 = param_2[1];
      }
      else {
        if (in_AL != 'S') {
          if (in_AL == 'U') {
            iVar7 = param_2[6];
          }
          else {
            if (in_AL != 'W') {
              if (in_AL != 'X') {
                return 0;
              }
LAB_1104c7da:
              iVar7 = 2;
LAB_1104c7de:
              iVar7 = FUN_1104c92e(param_3,iVar7,(undefined2 *)param_2,param_1,param_4,param_5);
              if (iVar7 == 0) {
                return 0;
              }
              return 1;
            }
            iVar7 = param_2[6];
          }
          if ((((-1 < iVar7) && (iVar7 < 7)) && (-1 < param_2[7])) && (param_2[7] < 0x16e))
          goto LAB_1104c790;
          goto LAB_1104c81e;
        }
        iVar7 = *param_2;
      }
      if (-1 < iVar7) {
        bVar6 = SBORROW4(iVar7,0x3b);
        iVar7 = iVar7 + -0x3b;
        bVar5 = iVar7 == 0;
LAB_1104c5ac:
        if (bVar5 || bVar6 != iVar7 < 0) goto LAB_1104c790;
      }
    }
  }
  else if (in_AL < 'n') {
    if (in_AL == 'm') {
      if ((-1 < param_2[4]) && (param_2[4] < 0xc)) goto LAB_1104c790;
    }
    else {
      if (in_AL == 'Z') {
LAB_1104c875:
        ___tzset();
        ppuVar3 = FUN_1105499b();
        pcVar4 = ppuVar3[param_2[8] != 0];
LAB_1104c91e:
        FUN_1104c479(param_1,pcVar4);
        return 1;
      }
      if (in_AL == 'a') {
        iVar7 = param_2[6];
        if ((-1 < iVar7) && (iVar7 < 7)) {
          pcVar4 = *(char **)(param_5 + iVar7 * 4);
          goto LAB_1104c91e;
        }
      }
      else if (in_AL == 'b') {
        iVar7 = param_2[4];
        if ((-1 < iVar7) && (iVar7 < 0xc)) {
          pcVar4 = *(char **)(param_5 + 0x38 + iVar7 * 4);
          goto LAB_1104c91e;
        }
      }
      else {
        if (in_AL == 'c') {
          iVar7 = FUN_1104c92e(param_3,(uint)(param_6 != 0),(undefined2 *)param_2,param_1,param_4,
                               param_5);
          if (iVar7 == 0) {
            return 0;
          }
          if (*param_4 == 0) {
            return 0;
          }
          *(undefined1 *)*param_1 = 0x20;
          *param_1 = *param_1 + 1;
          *param_4 = *param_4 - 1;
          goto LAB_1104c7da;
        }
        if (in_AL == 'd') {
          if ((param_2[3] < 1) || (0x1f < param_2[3])) goto LAB_1104c6fb;
          goto LAB_1104c790;
        }
        if (in_AL != 'j') {
          return 0;
        }
        if ((-1 < param_2[7]) && (param_2[7] < 0x16e)) {
          uVar8 = 3;
          goto LAB_1104c793;
        }
      }
    }
  }
  else if (in_AL == 'p') {
    iVar7 = param_2[2];
    if ((-1 < iVar7) && (iVar7 < 0x18)) {
      if (iVar7 < 0xc) {
        pcVar4 = *(char **)(param_5 + 0x98);
      }
      else {
        pcVar4 = *(char **)(param_5 + 0x9c);
      }
      goto LAB_1104c91e;
    }
  }
  else if (in_AL == 'w') {
    if ((-1 < param_2[6]) && (param_2[6] < 7)) {
      uVar8 = 1;
      goto LAB_1104c793;
    }
  }
  else {
    if (in_AL == 'x') {
      if (param_6 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = 1;
      }
      goto LAB_1104c7de;
    }
    if (in_AL != 'y') {
      if (in_AL != 'z') {
        return 0;
      }
      goto LAB_1104c875;
    }
    if (-1 < param_2[5]) goto LAB_1104c790;
  }
LAB_1104c81e:
  puVar2 = (undefined4 *)FUN_110491c7();
LAB_1104c823:
  *puVar2 = 0x16;
  FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0;
}


// ==== 1104c92e FUN_1104c92e

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __cdecl
FUN_1104c92e(_locale_t param_1,int param_2,undefined2 *param_3,int *param_4,uint *param_5,
            int param_6)

{
  code cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  code *_Str1;
  code *pcVar7;
  char *pcVar8;
  char *pcVar9;
  short local_24;
  short local_22;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  int local_14;
  code *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    _Str1 = *(code **)(param_6 + 0xa0);
  }
  else if (param_2 == 1) {
    _Str1 = *(code **)(param_6 + 0xa4);
  }
  else {
    _Str1 = *(code **)(param_6 + 0xa8);
  }
  if (*(int *)(param_6 + 0xb0) != 1) {
    local_10 = GetDateFormatA_exref;
    if (param_2 == 2) {
      local_10 = GetTimeFormatA_exref;
    }
    local_24 = param_3[10] + 0x76c;
    local_22 = param_3[8] + 1;
    local_1e = param_3[6];
    local_1c = param_3[4];
    local_1a = param_3[2];
    local_18 = *param_3;
    local_16 = 0;
    local_14 = (*local_10)(*(undefined4 *)(param_6 + 0xac),0,&local_24,_Str1,0,0);
    if (local_14 != 0) {
      if ((int)(local_14 + 8U) < 0x401) {
        puVar2 = (undefined4 *)&stack0xffffffd0;
        puVar6 = (undefined4 *)&stack0xffffffd0;
        if (&stack0x00000000 != (undefined1 *)0x30) {
LAB_1104ca0e:
          puVar6 = puVar2 + 2;
        }
      }
      else {
        puVar2 = _malloc(local_14 + 8U);
        puVar6 = (undefined4 *)0x0;
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0xdddd;
          goto LAB_1104ca0e;
        }
      }
      local_c = puVar6;
      if (puVar6 != (undefined4 *)0x0) {
        iVar3 = (*local_10)(*(undefined4 *)(param_6 + 0xac),0,&local_24,_Str1,puVar6,local_14);
        while ((iVar3 = iVar3 + -1, 0 < iVar3 && (*param_5 != 0))) {
          local_14 = iVar3;
          *(undefined1 *)*param_4 = *(undefined1 *)puVar6;
          *param_4 = *param_4 + 1;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          *param_5 = *param_5 - 1;
        }
        __freea(local_c);
LAB_1104ca60:
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  cVar1 = *_Str1;
joined_r0x1104ca76:
  if ((cVar1 == (code)0x0) || (*param_5 == 0)) goto LAB_1104ca60;
  local_c = (undefined4 *)0x0;
  local_10 = _Str1;
  uVar5 = 0;
  do {
    uVar4 = uVar5;
    local_10 = local_10 + 1;
    uVar5 = uVar4 + 1;
  } while (*local_10 == cVar1);
  iVar3 = (int)(char)cVar1;
  if (iVar3 < 0x65) {
    if (iVar3 == 100) {
      if (uVar4 == 0) {
        local_c = (undefined4 *)0x1;
      }
      else {
joined_r0x1104cbf9:
        if ((uVar4 != 1) && (uVar4 != 2)) {
joined_r0x1104cbff:
          if (uVar4 != 3) goto LAB_1104caca;
        }
      }
      goto LAB_1104cd61;
    }
    if (iVar3 != 0x27) {
      if (iVar3 == 0x41) {
LAB_1104cb52:
        iVar3 = ___ascii_stricmp((char *)_Str1,s_am_pm_11075ee0);
        if (iVar3 == 0) {
          local_10 = _Str1 + 5;
        }
        else {
          iVar3 = ___ascii_stricmp((char *)_Str1,&DAT_11075edc);
          if (iVar3 == 0) {
            local_10 = _Str1 + 3;
          }
        }
      }
      else if (iVar3 == 0x48) {
        if (uVar4 != 0) goto joined_r0x1104cd51;
        local_c = (undefined4 *)0x1;
      }
      else {
        if (iVar3 != 0x4d) {
          if (iVar3 != 0x61) goto LAB_1104caca;
          goto LAB_1104cb52;
        }
        if (uVar4 != 0) goto joined_r0x1104cbf9;
        local_c = (undefined4 *)0x1;
      }
      goto LAB_1104cd61;
    }
    _Str1 = _Str1 + uVar5;
    if ((uVar5 & 1) != 0) {
      cVar1 = *_Str1;
      if (cVar1 == (code)0x0) goto LAB_1104ca60;
      do {
        if (*param_5 == 0) break;
        if (cVar1 == (code)0x27) {
          _Str1 = _Str1 + 1;
          break;
        }
        iVar3 = __isleadbyte_l((int)(char)cVar1,param_1);
        pcVar7 = _Str1;
        if ((iVar3 != 0) && (1 < *param_5)) {
          pcVar7 = _Str1 + 1;
          if (*pcVar7 == (code)0x0) goto LAB_1104ca60;
          *(code *)*param_4 = *_Str1;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
        }
        *(code *)*param_4 = *pcVar7;
        *param_4 = *param_4 + 1;
        _Str1 = pcVar7 + 1;
        *param_5 = *param_5 - 1;
        cVar1 = *_Str1;
      } while (cVar1 != (code)0x0);
    }
  }
  else {
    if (iVar3 == 0x68) {
      if (uVar4 == 0) {
        local_c = (undefined4 *)0x1;
      }
      else {
joined_r0x1104cd51:
        if (uVar5 != 2) {
LAB_1104caca:
          iVar3 = __isleadbyte_l(iVar3,param_1);
          pcVar7 = _Str1;
          if ((iVar3 != 0) && (1 < *param_5)) {
            pcVar7 = _Str1 + 1;
            if (*pcVar7 == (code)0x0) goto LAB_1104ca60;
            *(code *)*param_4 = *_Str1;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          *(code *)*param_4 = *pcVar7;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
          _Str1 = pcVar7 + 1;
          goto LAB_1104cb01;
        }
      }
    }
    else if (iVar3 == 0x6d) {
      if (uVar4 != 0) goto joined_r0x1104cd51;
      local_c = (undefined4 *)0x1;
    }
    else if (iVar3 == 0x73) {
      if (uVar4 != 0) goto joined_r0x1104cd51;
      local_c = (undefined4 *)0x1;
    }
    else {
      if (iVar3 == 0x74) {
        if (*(int *)(param_3 + 4) < 0xc) {
          pcVar9 = *(char **)(param_6 + 0x98);
        }
        else {
          pcVar9 = *(char **)(param_6 + 0x9c);
        }
        if ((uVar5 == 1) && (*param_5 != 0)) {
          iVar3 = __isleadbyte_l((int)*pcVar9,param_1);
          pcVar8 = pcVar9;
          if ((iVar3 != 0) && (1 < *param_5)) {
            pcVar8 = pcVar9 + 1;
            if (*pcVar8 == '\0') goto LAB_1104ca60;
            *(char *)*param_4 = *pcVar9;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          *(char *)*param_4 = *pcVar8;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
          _Str1 = local_10;
          goto LAB_1104cb01;
        }
        while ((_Str1 = local_10, *pcVar9 != '\0' && (*param_5 != 0))) {
          iVar3 = __isleadbyte_l((int)*pcVar9,param_1);
          pcVar8 = pcVar9;
          if ((iVar3 != 0) && (1 < *param_5)) {
            pcVar8 = pcVar9 + 1;
            if (*pcVar8 == '\0') goto LAB_1104ca60;
            *(char *)*param_4 = *pcVar9;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          *(char *)*param_4 = *pcVar8;
          *param_4 = *param_4 + 1;
          pcVar9 = pcVar8 + 1;
          *param_5 = *param_5 - 1;
        }
        goto LAB_1104cb01;
      }
      if (iVar3 != 0x79) goto LAB_1104caca;
      if (uVar4 != 1) goto joined_r0x1104cbff;
    }
LAB_1104cd61:
    iVar3 = FUN_1104c548(param_4,(int *)param_3,param_1,param_5,param_6,(int)local_c);
    _Str1 = local_10;
    if (iVar3 == 0) goto LAB_1104ca60;
  }
LAB_1104cb01:
  cVar1 = *_Str1;
  goto joined_r0x1104ca76;
}


// ==== 1104cd8b __Strftime_l

/* Library Function - Single Match
    __Strftime_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
__Strftime_l(char *param_1,uint param_2,char *param_3,int *param_4,int *param_5,
            localeinfo_struct *param_6)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  localeinfo_struct local_24;
  int local_1c;
  char local_18;
  char *local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_c = 0;
  local_14 = param_1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_24,param_6);
  uVar2 = param_2;
  if (param_1 == (char *)0x0) {
    puVar3 = (undefined4 *)FUN_110491c7();
    *puVar3 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_18 != '\0') {
      *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if (param_2 == 0) {
    puVar3 = (undefined4 *)FUN_110491c7();
    *puVar3 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_18 != '\0') {
      *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  *param_1 = '\0';
  if (param_3 != (char *)0x0) {
    local_10 = param_5;
    if (param_5 == (int *)0x0) {
      local_10 = local_24.locinfo[1].lc_category[0].wrefcount;
    }
    local_8 = param_2;
    pcVar5 = param_3;
    if (param_2 != 0) {
      do {
        cVar1 = *pcVar5;
        if (cVar1 == '\0') break;
        if (cVar1 == '%') {
          if (param_4 == (int *)0x0) {
            puVar3 = (undefined4 *)FUN_110491c7();
            *puVar3 = 0x16;
            goto LAB_1104cf27;
          }
          pcVar6 = pcVar5 + 1;
          cVar1 = *pcVar6;
          if (cVar1 == '#') {
            pcVar6 = pcVar5 + 2;
          }
          iVar4 = FUN_1104c548((int *)&param_1,param_4,&local_24,&local_8,(int)local_10,
                               (uint)(cVar1 == '#'));
          if (iVar4 == 0) {
            if (local_8 != 0) {
              local_c = 1;
            }
            goto LAB_1104ced8;
          }
        }
        else {
          iVar4 = __isleadbyte_l((int)cVar1,&local_24);
          pcVar6 = pcVar5;
          if ((iVar4 != 0) && (1 < local_8)) {
            pcVar6 = pcVar5 + 1;
            if (*pcVar6 == '\0') {
              local_c = 1;
              goto LAB_1104ced8;
            }
            *param_1 = *pcVar5;
            param_1 = param_1 + 1;
            local_8 = local_8 - 1;
          }
          *param_1 = *pcVar6;
          param_1 = param_1 + 1;
          local_8 = local_8 - 1;
        }
        pcVar5 = pcVar6 + 1;
      } while (local_8 != 0);
      if (local_8 != 0) {
        *param_1 = '\0';
        if (local_18 == '\0') {
          return uVar2 - local_8;
        }
        *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
        return uVar2 - local_8;
      }
    }
LAB_1104ced8:
    *local_14 = '\0';
    if ((local_c == 0) && (local_8 == 0)) {
      puVar3 = (undefined4 *)FUN_110491c7();
      *puVar3 = 0x22;
      goto LAB_1104cf27;
    }
  }
  puVar3 = (undefined4 *)FUN_110491c7();
  *puVar3 = 0x16;
  FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_1104cf27:
  if (local_18 != '\0') {
    *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
  }
  return 0;
}


// ==== 1104cf3a __strftime_l

/* Library Function - Single Match
    __strftime_l
   
   Library: Visual Studio 2005 Release */

size_t __cdecl __strftime_l(char *_Buf,size_t _Max_size,char *_Format,tm *_Tm,_locale_t _Locale)

{
  size_t sVar1;
  
  sVar1 = __Strftime_l(_Buf,_Max_size,_Format,&_Tm->tm_sec,(int *)0x0,_Locale);
  return sVar1;
}


// ==== 1104cf75 __Strftime

/* Library Function - Single Match
    __Strftime
   
   Library: Visual Studio 2005 Release */

size_t __cdecl __Strftime(char *param_1,size_t _Maxsize,char *param_3,tm *param_4,void *param_5)

{
  size_t sVar1;
  
  sVar1 = __Strftime_l(param_1,_Maxsize,param_3,&param_4->tm_sec,param_5,(localeinfo_struct *)0x0);
  return sVar1;
}


// ==== 1104cfc0 _strcspn

/* Library Function - Single Match
    _strcspn
   
   Library: Visual Studio 2005 Release */

size_t __cdecl _strcspn(char *_Str,char *_Control)

{
  byte bVar1;
  size_t sVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  sVar2 = 0xffffffff;
  do {
    sVar2 = sVar2 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar2;
    }
    _Str = _Str + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return sVar2;
}


// ==== 1104d006 _TranslateName

/* Library Function - Single Match
    _TranslateName
   
   Library: Visual Studio 2005 Release */

bool __cdecl _TranslateName(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = 0;
  iVar2 = 1;
  if (-1 < param_2) {
    do {
      bVar5 = iVar2 == 0;
      iVar2 = 0;
      if (bVar5) break;
      iVar4 = (param_2 + iVar3) / 2;
      puVar1 = (undefined4 *)(param_1 + iVar4 * 8);
      iVar2 = __stricmp((char *)*param_3,(char *)*puVar1);
      if (iVar2 == 0) {
        *param_3 = puVar1 + 1;
      }
      else if (iVar2 < 0) {
        param_2 = iVar4 + -1;
      }
      else {
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= param_2);
  }
  return iVar2 == 0;
}


// ==== 1104d07a _ProcessCodePage

/* Library Function - Single Match
    _ProcessCodePage
   
   Library: Visual Studio 2005 Release */

void __fastcall _ProcessCodePage(CHAR *param_1)

{
  int iVar1;
  int unaff_EDI;
  LCTYPE LCType;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  if ((param_1 == (CHAR *)0x0) || (*param_1 == '\0')) {
LAB_1104d0c2:
    LCType = 0x1004;
LAB_1104d0cd:
    iVar1 = GetLocaleInfoA(*(LCID *)(unaff_EDI + 0x1c),LCType,local_10,8);
    if (iVar1 == 0) goto LAB_1104d0e4;
    param_1 = local_10;
  }
  else {
    iVar1 = _strcmp(param_1,&DAT_110766c8);
    if (iVar1 == 0) goto LAB_1104d0c2;
    iVar1 = _strcmp(param_1,&DAT_110766c4);
    if (iVar1 == 0) {
      LCType = 0xb;
      goto LAB_1104d0cd;
    }
  }
  _atol(param_1);
LAB_1104d0e4:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1104d0f1 _TestDefaultCountry

/* Library Function - Single Match
    _TestDefaultCountry
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl _TestDefaultCountry(short param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == *(short *)((int)&DAT_110766b0 + uVar1)) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x14);
  return 1;
}


// ==== 1104d10f _LcidFromHexString

/* Library Function - Single Match
    _LcidFromHexString
   
   Library: Visual Studio 2005 Release */

int __fastcall _LcidFromHexString(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while (cVar1 = *param_2, cVar1 != '\0') {
    param_2 = param_2 + 1;
    if ((byte)(cVar1 + 0x9fU) < 6) {
      cVar1 = cVar1 + -0x27;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      cVar1 = cVar1 + -7;
    }
    iVar2 = iVar2 * 0x10 + -0x30 + (int)cVar1;
  }
  return iVar2;
}


// ==== 1104d141 _GetPrimaryLen

/* Library Function - Single Match
    _GetPrimaryLen
   
   Library: Visual Studio 2005 Release */

int __fastcall _GetPrimaryLen(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    if (((cVar1 < 'A') || ('Z' < cVar1)) && (0x19 < (byte)(cVar1 + 0x9fU))) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


// ==== 1104d15c _CountryEnumProc@4

/* Library Function - Single Match
    _CountryEnumProc@4
   
   Library: Visual Studio 2005 Release */

void _CountryEnumProc_4(char *param_1)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  undefined4 extraout_ECX;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  Locale = _LcidFromHexString(extraout_ECX,param_1);
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar3 == 0) {
    (p_Var2->_setloc_data).iLocState = 0;
  }
  else {
    iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchCountry,local_80);
    if ((iVar3 == 0) && (iVar3 = _TestDefaultCountry((short)Locale), iVar3 != 0)) {
      piVar1 = &(p_Var2->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 4;
      *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
      (p_Var2->_setloc_data)._cachecp = Locale;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1104d1f2 _TestDefaultLanguage

/* Library Function - Single Match
    _TestDefaultLanguage
   
   Library: Visual Studio 2005 Release */

void __thiscall _TestDefaultLanguage(void *this,uint param_1,int param_2)

{
  char *_Str;
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  iVar1 = GetLocaleInfoA(param_1 & 0x3ff | 0x400,1,local_80,0x78);
  if (((iVar1 != 0) && (uVar2 = _LcidFromHexString(extraout_ECX,local_80), param_1 != uVar2)) &&
     (param_2 != 0)) {
    _Str = *(char **)this;
    _GetPrimaryLen(extraout_ECX_00,_Str);
    _strlen(_Str);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1104d264 _LangCountryEnumProc@4

/* Library Function - Single Match
    _LangCountryEnumProc@4
   
   Library: Visual Studio 2005 Release */

void _LangCountryEnumProc_4(char *param_1)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  size_t sVar4;
  undefined4 extraout_ECX;
  uint extraout_EDX;
  _setloc_struct *this;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  this = &p_Var2->_setloc_data;
  Locale = _LcidFromHexString(extraout_ECX,param_1);
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar3 == 0) {
LAB_1104d2b5:
    (p_Var2->_setloc_data).iLocState = 0;
    goto LAB_1104d423;
  }
  iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchCountry,local_80);
  if (iVar3 == 0) {
    iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002
                                  ) + 0x1001,local_80,0x78);
    if (iVar3 == 0) goto LAB_1104d2b5;
    iVar3 = __stricmp((char *)this->pchLanguage,local_80);
    if (iVar3 == 0) {
      piVar1 = &(p_Var2->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 0x304;
      (p_Var2->_setloc_data)._cachecp = Locale;
LAB_1104d365:
      *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
    }
    else if (((p_Var2->_setloc_data).iLocState & 2) == 0) {
      sVar4 = (p_Var2->_setloc_data).iPrimaryLen;
      if ((sVar4 == 0) || (iVar3 = __strnicmp((char *)this->pchLanguage,local_80,sVar4), iVar3 != 0)
         ) {
        if ((((p_Var2->_setloc_data).iLocState & 1U) == 0) &&
           (iVar3 = _TestDefaultCountry((short)Locale), iVar3 != 0)) {
          (p_Var2->_setloc_data).iLocState = extraout_EDX | 1;
          goto LAB_1104d365;
        }
      }
      else {
        piVar1 = &(p_Var2->_setloc_data).iLocState;
        *piVar1 = *piVar1 | 2;
        *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
        sVar4 = _strlen((char *)this->pchLanguage);
        if (sVar4 == (p_Var2->_setloc_data).iPrimaryLen) {
          (p_Var2->_setloc_data)._cachecp = Locale;
        }
      }
    }
  }
  if (((p_Var2->_setloc_data).iLocState & 0x300U) == 0x300) goto LAB_1104d423;
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) goto LAB_1104d2b5;
  iVar3 = __stricmp((char *)this->pchLanguage,local_80);
  if (iVar3 == 0) {
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x200;
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      if (((p_Var2->_setloc_data).iPrimaryLen != 0) &&
         (sVar4 = _strlen((char *)this->pchLanguage), sVar4 == (p_Var2->_setloc_data).iPrimaryLen))
      {
        iVar3 = 1;
        goto LAB_1104d3fb;
      }
      goto LAB_1104d409;
    }
    (p_Var2->_setloc_data).iLocState = (p_Var2->_setloc_data).iLocState | 0x100;
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)this->pchLanguage,local_80), iVar3 != 0)) goto LAB_1104d423;
    iVar3 = 0;
LAB_1104d3fb:
    iVar3 = _TestDefaultLanguage(this,Locale,iVar3);
    if (iVar3 == 0) goto LAB_1104d423;
LAB_1104d409:
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x100;
  }
  if ((p_Var2->_setloc_data)._cachecp == 0) {
    (p_Var2->_setloc_data)._cachecp = Locale;
  }
LAB_1104d423:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1104d434 _LanguageEnumProc@4

/* Library Function - Single Match
    _LanguageEnumProc@4
   
   Library: Visual Studio 2005 Release */

void _LanguageEnumProc_4(char *param_1)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  undefined4 extraout_ECX;
  _setloc_struct *this;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  this = &p_Var2->_setloc_data;
  Locale = _LcidFromHexString(extraout_ECX,param_1);
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) {
    (p_Var2->_setloc_data).iLocState = 0;
    goto LAB_1104d4e3;
  }
  iVar3 = __stricmp((char *)this->pchLanguage,local_80);
  if (iVar3 == 0) {
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      iVar3 = 1;
      goto LAB_1104d4c0;
    }
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)this->pchLanguage,local_80), iVar3 != 0)) goto LAB_1104d4e3;
    iVar3 = 0;
LAB_1104d4c0:
    iVar3 = _TestDefaultLanguage(this,Locale,iVar3);
    if (iVar3 == 0) goto LAB_1104d4e3;
  }
  piVar1 = &(p_Var2->_setloc_data).iLocState;
  *piVar1 = *piVar1 | 4;
  (p_Var2->_setloc_data)._cachecp = Locale;
  *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
LAB_1104d4e3:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1104d51f _GetLcidFromLangCountry

/* Library Function - Single Match
    _GetLcidFromLangCountry
   
   Library: Visual Studio 2005 Release */

void _GetLcidFromLangCountry(void)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  char *_Str;
  
  _Str = (char *)*unaff_ESI;
  sVar2 = _strlen(_Str);
  unaff_ESI[4] = (uint)(sVar2 == 3);
  sVar2 = _strlen((char *)unaff_ESI[1]);
  unaff_ESI[6] = 0;
  unaff_ESI[5] = (uint)(sVar2 == 3);
  if (unaff_ESI[4] == 0) {
    iVar3 = _GetPrimaryLen(_Str,(char *)*unaff_ESI);
  }
  else {
    iVar3 = 2;
  }
  unaff_ESI[3] = iVar3;
  EnumSystemLocalesA(_LangCountryEnumProc_4,1);
  uVar1 = unaff_ESI[2];
  if ((((uVar1 & 0x100) == 0) || ((uVar1 & 0x200) == 0)) || ((uVar1 & 7) == 0)) {
    unaff_ESI[2] = 0;
  }
  return;
}


// ==== 1104d584 _GetLcidFromLanguage

/* Library Function - Single Match
    _GetLcidFromLanguage
   
   Library: Visual Studio 2005 Release */

void _GetLcidFromLanguage(void)

{
  size_t sVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  char *_Str;
  
  _Str = (char *)*unaff_ESI;
  sVar1 = _strlen(_Str);
  unaff_ESI[4] = (uint)(sVar1 == 3);
  if ((sVar1 == 3) == 0) {
    iVar2 = _GetPrimaryLen(_Str,(char *)*unaff_ESI);
  }
  else {
    iVar2 = 2;
  }
  unaff_ESI[3] = iVar2;
  EnumSystemLocalesA(_LanguageEnumProc_4,1);
  if ((*(byte *)(unaff_ESI + 2) & 4) == 0) {
    unaff_ESI[2] = 0;
  }
  return;
}


// ==== 1104d5c0 ___get_qualified_locale

/* Library Function - Single Match
    ___get_qualified_locale
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl ___get_qualified_locale(LPLC_STRINGS _LpInStr,UINT *_LpCodePage,LPLC_STRINGS _LpOutStr)

{
  int *piVar1;
  wchar_t **ppwVar2;
  wchar_t *pwVar3;
  bool bVar4;
  _ptiddata p_Var5;
  undefined3 extraout_var;
  size_t sVar6;
  LCID LVar7;
  uint _Value;
  BOOL BVar8;
  errno_t eVar9;
  int iVar10;
  _setloc_struct *p_Var11;
  
  p_Var5 = __getptd();
  p_Var11 = &p_Var5->_setloc_data;
  if (_LpInStr == (LPLC_STRINGS)0x0) {
    piVar1 = &(p_Var5->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x104;
LAB_1104d698:
    LVar7 = GetUserDefaultLCID();
    (p_Var5->_setloc_data)._cachecp = LVar7;
    *(LCID *)(p_Var5->_setloc_data)._cachein = LVar7;
  }
  else {
    pwVar3 = _LpInStr->szLanguage + 0x20;
    ppwVar2 = &(p_Var5->_setloc_data).pchCountry;
    p_Var11->pchLanguage = _LpInStr->szLanguage;
    *ppwVar2 = pwVar3;
    if ((pwVar3 != (wchar_t *)0x0) && ((char)*pwVar3 != '\0')) {
      _TranslateName(0x110765f8,0x16,ppwVar2);
    }
    (p_Var5->_setloc_data).iLocState = 0;
    if ((p_Var11->pchLanguage == (wchar_t *)0x0) || ((char)*p_Var11->pchLanguage == '\0')) {
      pwVar3 = *ppwVar2;
      if ((pwVar3 == (wchar_t *)0x0) || ((char)*pwVar3 == '\0')) {
        (p_Var5->_setloc_data).iLocState = 0x104;
        goto LAB_1104d698;
      }
      sVar6 = _strlen((char *)pwVar3);
      (p_Var5->_setloc_data).bAbbrevCountry = (uint)(sVar6 == 3);
      EnumSystemLocalesA(_CountryEnumProc_4,1);
      if (((p_Var5->_setloc_data).iLocState & 4) == 0) {
        (p_Var5->_setloc_data).iLocState = 0;
      }
    }
    else {
      if ((*ppwVar2 == (wchar_t *)0x0) || ((char)**ppwVar2 == '\0')) {
        _GetLcidFromLanguage();
      }
      else {
        _GetLcidFromLangCountry();
      }
      if ((p_Var5->_setloc_data).iLocState != 0) goto LAB_1104d6ad;
      bVar4 = _TranslateName(0x110763f0,0x40,&p_Var11->pchLanguage);
      if (CONCAT31(extraout_var,bVar4) != 0) {
        if ((*ppwVar2 == (wchar_t *)0x0) || ((char)**ppwVar2 == '\0')) {
          _GetLcidFromLanguage();
        }
        else {
          _GetLcidFromLangCountry();
        }
      }
    }
  }
  if ((p_Var5->_setloc_data).iLocState == 0) {
    return 0;
  }
LAB_1104d6ad:
  _Value = _ProcessCodePage((CHAR *)(-(uint)(_LpInStr != (LPLC_STRINGS)0x0) &
                                    (uint)_LpInStr->szCountry));
  if ((((_Value == 0) || (_Value == 65000)) || (_Value == 0xfde9)) ||
     ((BVar8 = IsValidCodePage(_Value & 0xffff), BVar8 == 0 ||
      (BVar8 = IsValidLocale((p_Var5->_setloc_data)._cachecp,1), BVar8 == 0)))) {
    return 0;
  }
  if (_LpCodePage != (UINT *)0x0) {
    *(short *)_LpCodePage = (short)(p_Var5->_setloc_data)._cachecp;
    *(wchar_t *)((int)_LpCodePage + 2) = (p_Var5->_setloc_data)._cachein[0];
    *(short *)(_LpCodePage + 1) = (short)_Value;
  }
  if (_LpOutStr != (LPLC_STRINGS)0x0) {
    if ((short)*_LpCodePage == 0x814) {
      eVar9 = _strcpy_s((char *)_LpOutStr,0x40,s_Norwegian_Nynorsk_110766cc);
      if (eVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    else {
      iVar10 = GetLocaleInfoA((p_Var5->_setloc_data)._cachecp,0x1001,(LPSTR)_LpOutStr,0x40);
      if (iVar10 == 0) {
        return 0;
      }
    }
    iVar10 = GetLocaleInfoA(*(LCID *)(p_Var5->_setloc_data)._cachein,0x1002,
                            (LPSTR)(_LpOutStr->szLanguage + 0x20),0x40);
    if (iVar10 == 0) {
      return 0;
    }
    __itoa_s(_Value,(char *)_LpOutStr->szCountry,0x10,10);
  }
  return 1;
}


// ==== 11050395 __crtGetStringTypeA_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetStringTypeA_stat(struct localeinfo_struct *,unsigned long,char const
   *,int,unsigned short *,int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetStringTypeA_stat
          (localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,
          int param_6,int param_7,int param_8)

{
  uint _Size;
  BOOL BVar1;
  DWORD DVar2;
  uint cchWideChar;
  undefined4 *puVar3;
  int iVar4;
  ushort *puVar5;
  int *in_ECX;
  LPCWSTR lpWideCharStr;
  void *_Memory;
  int *local_c;
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  local_c = in_ECX;
  if (DAT_1109fbe0 == 0) {
    BVar1 = GetStringTypeW(1,(LPCWSTR)&DAT_110766e0,1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_1109fbe0 = 2;
      }
      goto LAB_110503ee;
    }
    DAT_1109fbe0 = 1;
  }
  else {
LAB_110503ee:
    if ((DAT_1109fbe0 == 2) || (DAT_1109fbe0 == 0)) {
      _Memory = (void *)0x0;
      if (param_6 == 0) {
        param_6 = *(int *)(*in_ECX + 0x14);
      }
      if (param_5 == (ushort *)0x0) {
        param_5 = *(ushort **)(*in_ECX + 4);
      }
      puVar5 = (ushort *)___ansicp(param_6);
      if ((puVar5 != (ushort *)0xffffffff) &&
         (((puVar5 == param_5 ||
           (_Memory = (void *)___convertcp((UINT)param_5,(UINT)puVar5,(char *)param_2,
                                           (uint *)&param_3,(LPSTR)0x0,0), param_2 = (ulong)_Memory,
           _Memory != (void *)0x0)) &&
          (GetStringTypeA(param_6,(DWORD)param_1,(LPCSTR)param_2,(int)param_3,(LPWORD)param_4),
          _Memory != (void *)0x0)))) {
        _free(_Memory);
      }
      goto LAB_1105053b;
    }
    if (DAT_1109fbe0 != 1) goto LAB_1105053b;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1105053b;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar3 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_1105047e:
        lpWideCharStr = (LPCWSTR)(puVar3 + 2);
      }
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_1105047e;
      }
    }
  }
  if (lpWideCharStr != (LPCWSTR)0x0) {
    _memset(lpWideCharStr,0,cchWideChar * 2);
    iVar4 = MultiByteToWideChar((UINT)param_5,1,(LPCSTR)param_2,(int)param_3,lpWideCharStr,
                                cchWideChar);
    if (iVar4 != 0) {
      local_c = (int *)GetStringTypeW((DWORD)param_1,lpWideCharStr,iVar4,(LPWORD)param_4);
    }
    __freea(lpWideCharStr);
  }
LAB_1105053b:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}


// ==== 1105054d ___crtGetStringTypeA

/* Library Function - Single Match
    ___crtGetStringTypeA
   
   Library: Visual Studio 2005 Release */

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_00000020;
  int in_stack_ffffffec;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtGetStringTypeA_stat
                    ((localeinfo_struct *)_DWInfoType,(ulong)_LpSrcStr,(char *)_CchSrc,
                     (int)_LpCharType,(ushort *)_Code_page,_BError,in_stack_00000020,
                     in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}


// ==== 1105058d _strncmp

/* Library Function - Single Match
    _strncmp
   
   Library: Visual Studio 2005 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  if (_MaxCount != 0) {
    if ((3 < _MaxCount) && (pbVar1 = (byte *)_Str1, pbVar3 = (byte *)_Str2, _MaxCount != 4)) {
      do {
        _Str1 = (char *)(pbVar1 + 4);
        _Str2 = (char *)(pbVar3 + 4);
        if ((*pbVar1 == 0) || (*pbVar1 != *pbVar3)) {
          uVar2 = (uint)*pbVar1;
          uVar4 = (uint)*pbVar3;
          goto LAB_11050647;
        }
        if ((pbVar1[1] == 0) || (pbVar1[1] != pbVar3[1])) {
          uVar2 = (uint)pbVar1[1];
          uVar4 = (uint)pbVar3[1];
          goto LAB_11050647;
        }
        if ((pbVar1[2] == 0) || (pbVar1[2] != pbVar3[2])) {
          uVar2 = (uint)pbVar1[2];
          uVar4 = (uint)pbVar3[2];
          goto LAB_11050647;
        }
        if ((pbVar1[3] == 0) || (pbVar1[3] != pbVar3[3])) {
          uVar2 = (uint)pbVar1[3];
          uVar4 = (uint)pbVar3[3];
          goto LAB_11050647;
        }
        local_8 = local_8 + 4;
        pbVar1 = (byte *)_Str1;
        pbVar3 = (byte *)_Str2;
      } while (local_8 < _MaxCount - 4);
    }
    for (; local_8 < _MaxCount; local_8 = local_8 + 1) {
      if ((*_Str1 == 0) || (*_Str1 != *_Str2)) {
        uVar2 = (uint)(byte)*_Str1;
        uVar4 = (uint)(byte)*_Str2;
LAB_11050647:
        return uVar2 - uVar4;
      }
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
    }
  }
  return 0;
}


// ==== 11050650 _strpbrk

/* Library Function - Single Match
    _strpbrk
   
   Library: Visual Studio */

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)0x0;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}


// ==== 110506aa __crtLCMapStringA_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtLCMapStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char *,int,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtLCMapStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  uint cchWideChar;
  undefined4 *puVar6;
  LPCWSTR lpDestStr;
  UINT UVar7;
  int *in_ECX;
  char *pcVar8;
  LPSTR lpMultiByteStr;
  void *local_14;
  LPCWSTR local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  if (DAT_1109fbe4 == 0) {
    iVar3 = LCMapStringW(0,0x100,(LPCWSTR)&DAT_110766e0,1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_1109fbe4 = 2;
      }
    }
    else {
      DAT_1109fbe4 = 1;
    }
  }
  pcVar5 = (char *)param_3;
  pcVar8 = param_4;
  if (0 < (int)param_4) {
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_11050719;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_11050719:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_1109fbe4 == 2) || (DAT_1109fbe4 == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    UVar7 = ___ansicp((LCID)param_1);
    if (UVar7 == 0xffffffff) goto LAB_11050a3a;
    if (UVar7 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPCWSTR)___convertcp(param_7,UVar7,(char *)param_3,(uint *)&param_4,(LPSTR)0x0,0);
      if (local_10 == (LPCWSTR)0x0) goto LAB_11050a3a;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pcVar5 = (char *)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_11050a17;
          pcVar5 = &stack0xffffffe4;
        }
        else {
          pcVar5 = _malloc(local_c + 8);
          if (pcVar5 != (char *)0x0) {
            pcVar5[0] = -0x23;
            pcVar5[1] = -0x23;
            pcVar5[2] = '\0';
            pcVar5[3] = '\0';
            pcVar5 = pcVar5 + 8;
          }
        }
        if (pcVar5 != (char *)0x0) {
          _memset(pcVar5,0,local_c);
          local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,pcVar5,local_c)
          ;
          if (local_c != 0) {
            local_14 = (void *)___convertcp(UVar7,param_7,pcVar5,&local_c,(LPSTR)param_5,
                                            (int)param_6);
          }
          __freea(pcVar5);
        }
      }
    }
LAB_11050a17:
    if (local_10 != (LPCWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_11050a3a;
  }
  if (DAT_1109fbe4 != 1) goto LAB_11050a3a;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_11050a3a;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_110507c1:
        local_10 = (LPCWSTR)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPCWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_110507c1;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_11050a3a;
  iVar3 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,(int)param_4,local_10,cchWideChar);
  if ((iVar3 != 0) &&
     (local_c = LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)0x0,0), local_c != 0
     )) {
    if ((param_2 & 0x400) == 0) {
      if (((int)local_c < 1) || (0xffffffe0 / local_c < 2)) {
        lpDestStr = (LPCWSTR)0x0;
      }
      else {
        uVar1 = local_c * 2 + 8;
        if (uVar1 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_110508d0;
          lpDestStr = (LPCWSTR)&stack0xffffffe4;
        }
        else {
          lpDestStr = _malloc(uVar1);
          if (lpDestStr != (LPCWSTR)0x0) {
            lpDestStr[0] = L'\xdddd';
            lpDestStr[1] = L'\0';
            lpDestStr = lpDestStr + 4;
          }
        }
      }
      if (lpDestStr != (LPCWSTR)0x0) {
        iVar3 = LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,lpDestStr,local_c);
        if (iVar3 != 0) {
          lpMultiByteStr = (LPSTR)param_5;
          pcVar5 = param_6;
          if (param_6 == (char *)0x0) {
            lpMultiByteStr = (LPSTR)0x0;
            pcVar5 = (char *)0x0;
          }
          local_c = WideCharToMultiByte(param_7,0,lpDestStr,local_c,lpMultiByteStr,(int)pcVar5,
                                        (LPCSTR)0x0,(LPBOOL)0x0);
        }
        __freea(lpDestStr);
      }
    }
    else if ((param_6 != (char *)0x0) && ((int)local_c <= (int)param_6)) {
      LCMapStringW((LCID)param_1,param_2,local_10,cchWideChar,(LPWSTR)param_5,(int)param_6);
    }
  }
LAB_110508d0:
  __freea(local_10);
LAB_11050a3a:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


// ==== 11050a4c ___crtLCMapStringA

/* Library Function - Single Match
    ___crtLCMapStringA
   
   Library: Visual Studio 2005 Release */

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  int iVar1;
  int in_stack_ffffffec;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtLCMapStringA_stat
                    ((localeinfo_struct *)_LocaleName,_DwMapFlag,(ulong)_LpSrcStr,(char *)_CchSrc,
                     (int)_LpDestStr,(char *)_CchDest,_Code_page,_BError,in_stack_ffffffec);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}


// ==== 11050a90 __aulldvrm

/* Library Function - Single Match
    __aulldvrm
   
   Library: Visual Studio 2005 Release */

undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar6;
  
  uVar9 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar6 >> 1;
      uVar3 = (uint)(CONCAT14((uVar6 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar7 >> 1;
      uVar9 = (uint)(CONCAT14((uVar7 & 1) != 0,uVar9) >> 1);
      uVar6 = uVar5;
      uVar7 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar9) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar9 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar9)) ||
       ((param_2 <= uVar9 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


// ==== 11050b25 _atol

/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2005 Release */

long __cdecl _atol(char *_Str)

{
  long lVar1;
  
  lVar1 = _strtol(_Str,(char **)0x0,10);
  return lVar1;
}


// ==== 11050b7b __isctype_l

/* Library Function - Single Match
    __isctype_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale)

{
  int iVar1;
  BOOL BVar2;
  CHAR CVar3;
  localeinfo_struct local_1c;
  int local_14;
  char local_10;
  CHAR local_c;
  CHAR local_b;
  undefined1 local_a;
  ushort local_8 [2];
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,_Locale);
  if (_C + 1U < 0x101) {
    local_8[0] = *(ushort *)(local_1c.locinfo[1].lc_category[0].locale + _C * 2);
  }
  else {
    iVar1 = __isleadbyte_l(_C >> 8 & 0xff,&local_1c);
    CVar3 = (CHAR)_C;
    if (iVar1 == 0) {
      local_b = '\0';
      iVar1 = 1;
      local_c = CVar3;
    }
    else {
      _C._0_1_ = (CHAR)((uint)_C >> 8);
      local_c = (CHAR)_C;
      local_a = 0;
      iVar1 = 2;
      local_b = CVar3;
    }
    BVar2 = ___crtGetStringTypeA
                      (&local_1c,1,&local_c,iVar1,local_8,(local_1c.locinfo)->lc_codepage,
                       (BOOL)(local_1c.locinfo)->lc_category[0].wlocale);
    if (BVar2 == 0) {
      if (local_10 != '\0') {
        *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
      }
      return 0;
    }
  }
  if (local_10 != '\0') {
    *(uint *)(local_14 + 0x70) = *(uint *)(local_14 + 0x70) & 0xfffffffd;
  }
  return (uint)local_8[0] & _Type;
}


// ==== 11050c60 __isleadbyte_l

/* Library Function - Single Match
    __isleadbyte_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __isleadbyte_l(int _C,_locale_t _Locale)

{
  ushort uVar1;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
  uVar1 = *(ushort *)(*(int *)(local_14[0] + 200) + (_C & 0xffU) * 2);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return uVar1 & 0x8000;
}


// ==== 11050f97 __RoundMan

/* Library Function - Single Match
    __RoundMan
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl __RoundMan(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_8;
  
  local_8 = 0;
  iVar8 = param_2 + -1;
  iVar7 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar5 = 0x1f - ((byte)param_2 & 0x1f);
  if ((*(uint *)(param_1 + iVar7 * 4) & 1 << (bVar5 & 0x1f)) != 0) {
    uVar3 = *(uint *)(param_1 + iVar7 * 4) & ~(-1 << (bVar5 & 0x1f));
    iVar4 = iVar7;
    while (uVar3 == 0) {
      iVar4 = iVar4 + 1;
      if (2 < iVar4) goto LAB_1105105f;
      uVar3 = *(uint *)(param_1 + iVar4 * 4);
    }
    iVar4 = (int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5;
    param_2 = 0;
    uVar6 = 1 << (0x1f - ((byte)iVar8 & 0x1f) & 0x1f);
    uVar2 = *(uint *)(param_1 + iVar4 * 4);
    uVar3 = uVar2 + uVar6;
    if ((uVar3 < uVar2) || (uVar3 < uVar6)) {
      param_2 = 1;
    }
    *(uint *)(param_1 + iVar4 * 4) = uVar3;
    while ((iVar4 = iVar4 + -1, local_8 = param_2, -1 < iVar4 && (param_2 != 0))) {
      uVar2 = *(uint *)(param_1 + iVar4 * 4);
      uVar3 = uVar2 + 1;
      param_2 = 0;
      if ((uVar3 < uVar2) || (uVar3 == 0)) {
        param_2 = 1;
      }
      *(uint *)(param_1 + iVar4 * 4) = uVar3;
    }
  }
LAB_1105105f:
  puVar1 = (uint *)(param_1 + iVar7 * 4);
  *puVar1 = *puVar1 & -1 << (bVar5 & 0x1f);
  iVar7 = iVar7 + 1;
  if (iVar7 < 3) {
    puVar9 = (undefined4 *)(param_1 + iVar7 * 4);
    for (iVar8 = 3 - iVar7; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
  }
  return local_8;
}


// ==== 110510c5 __ShrMan

/* Library Function - Single Match
    __ShrMan
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __ShrMan(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint local_c;
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar3 = (byte)param_2 & 0x1f;
  local_c = 0;
  param_2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + param_2 * 4);
    *(uint *)(param_1 + param_2 * 4) = *(uint *)(param_1 + param_2 * 4) >> bVar3 | local_c;
    local_c = (uVar1 & ~(-1 << bVar3)) << (0x20 - bVar3 & 0x1f);
    param_2 = param_2 + 1;
  } while (param_2 < 3);
  iVar4 = 2;
  puVar5 = (undefined4 *)(param_1 + (2 - iVar2) * 4);
  do {
    if (iVar4 < iVar2) {
      *(undefined4 *)(param_1 + iVar4 * 4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + iVar4 * 4) = *puVar5;
    }
    iVar4 = iVar4 + -1;
    puVar5 = puVar5 + -1;
  } while (-1 < iVar4);
  return;
}


// ==== 1105115d __ld12cvt

/* Library Function - Single Match
    __ld12cvt
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __ld12cvt(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  byte bVar6;
  uint *puVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_24 [4];
  uint local_14;
  uint local_10;
  int local_c;
  ushort *local_8;
  
  local_24[3] = param_1[5] & 0x8000;
  uVar10 = *(uint *)(param_1 + 3);
  local_24[0] = uVar10;
  uVar2 = *(uint *)(param_1 + 1);
  uVar1 = *param_1;
  uVar11 = param_1[5] & 0x7fff;
  iVar12 = uVar11 - 0x3fff;
  local_24[1] = uVar2;
  local_24[2] = (uint)uVar1 << 0x10;
  if (iVar12 == -0x3fff) {
    iVar12 = 0;
    iVar3 = 0;
    do {
      if (local_24[iVar3] != 0) goto LAB_110512cd;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
LAB_11051643:
    uVar5 = 0;
  }
  else {
    param_1 = (ushort *)0x0;
    uVar8 = param_3[2];
    iVar13 = uVar8 - 1;
    iVar3 = (int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = uVar8 & 0x8000001f;
    local_14 = iVar12;
    local_10 = iVar3;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    puVar4 = local_24 + iVar3;
    bVar6 = (byte)(0x1f - uVar8);
    local_c = 0x1f - uVar8;
    if ((*puVar4 & 1 << (bVar6 & 0x1f)) != 0) {
      uVar8 = local_24[iVar3] & ~(-1 << (bVar6 & 0x1f));
      while( true ) {
        if (uVar8 != 0) {
          iVar3 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (ushort *)0x0;
          puVar9 = (ushort *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar7 = local_24 + iVar3;
          param_1 = (ushort *)(*puVar7 + (int)puVar9);
          if (param_1 < (ushort *)*puVar7) goto LAB_11051282;
          bVar14 = param_1 < puVar9;
          do {
            local_8 = (ushort *)0x0;
            if (!bVar14) goto LAB_11051289;
LAB_11051282:
            do {
              local_8 = (ushort *)0x1;
LAB_11051289:
              iVar3 = iVar3 + -1;
              *puVar7 = (uint)param_1;
              if ((iVar3 < 0) || (local_8 == (ushort *)0x0)) {
                param_1 = local_8;
                goto LAB_11051297;
              }
              local_8 = (ushort *)0x0;
              puVar7 = local_24 + iVar3;
              param_1 = (ushort *)((int)*puVar7 + 1);
            } while (param_1 < (ushort *)*puVar7);
            bVar14 = param_1 == (ushort *)0x0;
          } while( true );
        }
        iVar3 = iVar3 + 1;
        if (2 < iVar3) break;
        uVar8 = local_24[iVar3];
      }
    }
LAB_11051297:
    *puVar4 = *puVar4 & -1 << ((byte)local_c & 0x1f);
    iVar3 = local_10 + 1;
    if (iVar3 < 3) {
      puVar4 = local_24 + iVar3;
      for (iVar13 = 3 - iVar3; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
    if (param_1 != (ushort *)0x0) {
      iVar12 = uVar11 - 0x3ffe;
    }
    iVar3 = param_3[1];
    if (iVar12 < iVar3 - param_3[2]) {
LAB_110512cd:
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (iVar3 < iVar12) {
        if (*param_3 <= iVar12) {
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[0] = 0x80000000;
          uVar10 = param_3[3];
          iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = uVar10 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          param_1 = (ushort *)0x0;
          local_8 = (ushort *)(0x20 - uVar10);
          do {
            uVar2 = local_24[(int)param_1];
            local_14 = uVar2 & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)param_1] = uVar2 >> ((byte)uVar10 & 0x1f) | local_10;
            param_1 = (ushort *)((int)param_1 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)param_1 < 3);
          iVar3 = 2;
          puVar4 = local_24 + (2 - iVar12);
          do {
            if (iVar3 < iVar12) {
              local_24[iVar3] = 0;
            }
            else {
              local_24[iVar3] = *puVar4;
            }
            iVar3 = iVar3 + -1;
            puVar4 = puVar4 + -1;
          } while (-1 < iVar3);
          iVar12 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_11051645;
        }
        local_24[0] = local_24[0] & 0x7fffffff;
        uVar10 = param_3[3];
        iVar12 = param_3[5] + iVar12;
        iVar3 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
        uVar10 = uVar10 & 0x8000001f;
        if ((int)uVar10 < 0) {
          uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
        }
        local_10 = 0;
        param_1 = (ushort *)0x0;
        local_8 = (ushort *)(0x20 - uVar10);
        do {
          local_14 = local_24[(int)param_1] & ~(-1 << ((byte)uVar10 & 0x1f));
          local_24[(int)param_1] = local_24[(int)param_1] >> ((byte)uVar10 & 0x1f) | local_10;
          param_1 = (ushort *)((int)param_1 + 1);
          local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
        } while ((int)param_1 < 3);
        iVar13 = 2;
        puVar4 = local_24 + (2 - iVar3);
        do {
          if (iVar13 < iVar3) {
            local_24[iVar13] = 0;
          }
          else {
            local_24[iVar13] = *puVar4;
          }
          iVar13 = iVar13 + -1;
          puVar4 = puVar4 + -1;
        } while (-1 < iVar13);
        goto LAB_11051643;
      }
      local_14 = iVar3 - local_14;
      local_24[0] = uVar10;
      local_24[1] = uVar2;
      iVar12 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = local_14 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      param_1 = (ushort *)0x0;
      local_8 = (ushort *)(0x20 - uVar10);
      do {
        uVar2 = local_24[(int)param_1];
        local_14 = uVar2 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)param_1] = uVar2 >> ((byte)uVar10 & 0x1f) | local_10;
        param_1 = (ushort *)((int)param_1 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)param_1 < 3);
      iVar3 = 2;
      puVar4 = local_24 + (2 - iVar12);
      do {
        if (iVar3 < iVar12) {
          local_24[iVar3] = 0;
        }
        else {
          local_24[iVar3] = *puVar4;
        }
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + -1;
      } while (-1 < iVar3);
      uVar10 = param_3[2];
      iVar3 = uVar10 - 1;
      iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      local_10 = iVar12;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      bVar6 = (byte)(0x1f - uVar10);
      puVar4 = local_24 + iVar12;
      local_14 = 0x1f - uVar10;
      if ((*puVar4 & 1 << (bVar6 & 0x1f)) != 0) {
        uVar10 = local_24[iVar12] & ~(-1 << (bVar6 & 0x1f));
        while (uVar10 == 0) {
          iVar12 = iVar12 + 1;
          if (2 < iVar12) goto LAB_11051438;
          uVar10 = local_24[iVar12];
        }
        iVar12 = (int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar11 = 1 << (0x1f - ((byte)iVar3 & 0x1f) & 0x1f);
        uVar2 = local_24[iVar12];
        uVar10 = uVar2 + uVar11;
        if ((uVar10 < uVar2) || (uVar10 < uVar11)) {
          bVar14 = true;
        }
        local_24[iVar12] = uVar10;
        while ((iVar12 = iVar12 + -1, -1 < iVar12 && (bVar14))) {
          uVar2 = local_24[iVar12];
          uVar10 = uVar2 + 1;
          bVar14 = false;
          if ((uVar10 < uVar2) || (uVar10 == 0)) {
            bVar14 = true;
          }
          local_24[iVar12] = uVar10;
        }
      }
LAB_11051438:
      *puVar4 = *puVar4 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar4 = local_24 + iVar12;
        for (iVar3 = 3 - iVar12; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
      }
      uVar10 = param_3[3] + 1;
      iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      param_1 = (ushort *)0x0;
      local_8 = (ushort *)(0x20 - uVar10);
      do {
        uVar2 = local_24[(int)param_1];
        local_14 = uVar2 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)param_1] = uVar2 >> ((byte)uVar10 & 0x1f) | local_10;
        param_1 = (ushort *)((int)param_1 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)param_1 < 3);
      iVar3 = 2;
      puVar4 = local_24 + (2 - iVar12);
      do {
        if (iVar3 < iVar12) {
          local_24[iVar3] = 0;
        }
        else {
          local_24[iVar3] = *puVar4;
        }
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + -1;
      } while (-1 < iVar3);
    }
    iVar12 = 0;
    uVar5 = 2;
  }
LAB_11051645:
  local_24[0] = iVar12 << (0x1fU - (char)param_3[3] & 0x1f) | -(uint)(local_24[3] != 0) & 0x80000000
                | local_24[0];
  if (param_3[4] == 0x40) {
    param_2[1] = local_24[0];
    *param_2 = local_24[1];
  }
  else if (param_3[4] == 0x20) {
    *param_2 = local_24[0];
  }
  return uVar5;
}


// ==== 11051686 FID_conflict:__ld12tod

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  undefined4 uVar1;
  int iVar2;
  INTRNCVT_STATUS IVar3;
  int iVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  _LDBL12 *p_Var9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_24 [4];
  uint local_14;
  uint local_10;
  int local_c;
  _LDBL12 *local_8;
  
  local_24[3] = *(ushort *)(_Ifp->ld12 + 10) & 0x8000;
  uVar10 = *(uint *)(_Ifp->ld12 + 6);
  local_24[0] = uVar10;
  uVar1 = *(undefined4 *)(_Ifp->ld12 + 2);
  uVar11 = *(ushort *)(_Ifp->ld12 + 10) & 0x7fff;
  iVar12 = uVar11 - 0x3fff;
  iVar2 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_24[1] = uVar1;
  local_24[2] = iVar2;
  if (iVar12 == -0x3fff) {
    iVar12 = 0;
    iVar2 = 0;
    do {
      if (local_24[iVar2] != 0) {
        local_24[0] = 0;
        local_24[1] = 0;
        IVar3 = INTRNCVT_UNDERFLOW;
        goto LAB_11051b85;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_1109b9a8 - 1;
    iVar4 = (int)(DAT_1109b9a8 + ((int)DAT_1109b9a8 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_1109b9a8 & 0x8000001f;
    local_14 = iVar12;
    local_10 = iVar4;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    puVar7 = local_24 + iVar4;
    bVar5 = (byte)(0x1f - uVar8);
    local_c = 0x1f - uVar8;
    if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
      uVar8 = local_24[iVar4] & ~(-1 << (bVar5 & 0x1f));
      while( true ) {
        if (uVar8 != 0) {
          iVar4 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (_LDBL12 *)0x0;
          p_Var9 = (_LDBL12 *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar6 = local_24 + iVar4;
          _Ifp = (_LDBL12 *)(p_Var9->ld12 + *puVar6);
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_110517b9;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_110517c0;
LAB_110517b9:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_110517c0:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_110517ce;
              }
              local_8 = (_LDBL12 *)0x0;
              puVar6 = local_24 + iVar4;
              _Ifp = (_LDBL12 *)(((_LDBL12 *)*puVar6)->ld12 + 1);
            } while (_Ifp < (_LDBL12 *)*puVar6);
            bVar14 = _Ifp == (_LDBL12 *)0x0;
          } while( true );
        }
        iVar4 = iVar4 + 1;
        if (2 < iVar4) break;
        uVar8 = local_24[iVar4];
      }
    }
LAB_110517ce:
    *puVar7 = *puVar7 & -1 << ((byte)local_c & 0x1f);
    iVar4 = local_10 + 1;
    if (iVar4 < 3) {
      puVar7 = local_24 + iVar4;
      for (iVar13 = 3 - iVar4; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    if (_Ifp != (_LDBL12 *)0x0) {
      iVar12 = uVar11 - 0x3ffe;
    }
    if (iVar12 < (int)(DAT_1109b9a4 - DAT_1109b9a8)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_1109b9a4 < iVar12) {
        if (iVar12 < DAT_1109b9a0) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_1109b9b4;
          iVar2 = (int)(DAT_1109b9ac + ((int)DAT_1109b9ac >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1109b9ac & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            local_14 = local_24[(int)_Ifp] & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = local_24[(int)_Ifp] >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar4 = 2;
          puVar7 = local_24 + (2 - iVar2);
          do {
            if (iVar4 < iVar2) {
              local_24[iVar4] = 0;
            }
            else {
              local_24[iVar4] = *puVar7;
            }
            iVar4 = iVar4 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar4);
          IVar3 = INTRNCVT_OK;
        }
        else {
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[0] = 0x80000000;
          iVar12 = (int)(DAT_1109b9ac + ((int)DAT_1109b9ac >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1109b9ac & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            uVar11 = local_24[(int)_Ifp];
            local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar2 = 2;
          puVar7 = local_24 + (2 - iVar12);
          do {
            if (iVar2 < iVar12) {
              local_24[iVar2] = 0;
            }
            else {
              local_24[iVar2] = *puVar7;
            }
            iVar2 = iVar2 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar2);
          iVar12 = DAT_1109b9b4 + DAT_1109b9a0;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_11051b85;
      }
      local_14 = DAT_1109b9a4 - local_14;
      local_24[0] = uVar10;
      local_24[1] = uVar1;
      iVar12 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = local_14 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
      iVar2 = DAT_1109b9a8 - 1;
      iVar12 = (int)(DAT_1109b9a8 + ((int)DAT_1109b9a8 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_1109b9a8 & 0x8000001f;
      local_10 = iVar12;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      bVar5 = (byte)(0x1f - uVar10);
      puVar7 = local_24 + iVar12;
      local_14 = 0x1f - uVar10;
      if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
        uVar10 = local_24[iVar12] & ~(-1 << (bVar5 & 0x1f));
        while (uVar10 == 0) {
          iVar12 = iVar12 + 1;
          if (2 < iVar12) goto LAB_11051971;
          uVar10 = local_24[iVar12];
        }
        iVar12 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar8 = 1 << (0x1f - ((byte)iVar2 & 0x1f) & 0x1f);
        uVar11 = local_24[iVar12];
        uVar10 = uVar11 + uVar8;
        if ((uVar10 < uVar11) || (uVar10 < uVar8)) {
          bVar14 = true;
        }
        local_24[iVar12] = uVar10;
        while ((iVar12 = iVar12 + -1, -1 < iVar12 && (bVar14))) {
          uVar11 = local_24[iVar12];
          uVar10 = uVar11 + 1;
          bVar14 = false;
          if ((uVar10 < uVar11) || (uVar10 == 0)) {
            bVar14 = true;
          }
          local_24[iVar12] = uVar10;
        }
      }
LAB_11051971:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_1109b9ac + 1;
      iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
    }
    iVar12 = 0;
    IVar3 = INTRNCVT_UNDERFLOW;
  }
LAB_11051b85:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_1109b9ac & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_1109b9b0 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_1109b9b0 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}


// ==== 11051bc8 FID_conflict:__ld12tod

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  undefined4 uVar1;
  int iVar2;
  INTRNCVT_STATUS IVar3;
  int iVar4;
  byte bVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  _LDBL12 *p_Var9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_24 [4];
  uint local_14;
  uint local_10;
  int local_c;
  _LDBL12 *local_8;
  
  local_24[3] = *(ushort *)(_Ifp->ld12 + 10) & 0x8000;
  uVar10 = *(uint *)(_Ifp->ld12 + 6);
  local_24[0] = uVar10;
  uVar1 = *(undefined4 *)(_Ifp->ld12 + 2);
  uVar11 = *(ushort *)(_Ifp->ld12 + 10) & 0x7fff;
  iVar12 = uVar11 - 0x3fff;
  iVar2 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_24[1] = uVar1;
  local_24[2] = iVar2;
  if (iVar12 == -0x3fff) {
    iVar12 = 0;
    iVar2 = 0;
    do {
      if (local_24[iVar2] != 0) {
        local_24[0] = 0;
        local_24[1] = 0;
        IVar3 = INTRNCVT_UNDERFLOW;
        goto LAB_110520c7;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_1109b9c0 - 1;
    iVar4 = (int)(DAT_1109b9c0 + ((int)DAT_1109b9c0 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_1109b9c0 & 0x8000001f;
    local_14 = iVar12;
    local_10 = iVar4;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
    }
    puVar7 = local_24 + iVar4;
    bVar5 = (byte)(0x1f - uVar8);
    local_c = 0x1f - uVar8;
    if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
      uVar8 = local_24[iVar4] & ~(-1 << (bVar5 & 0x1f));
      while( true ) {
        if (uVar8 != 0) {
          iVar4 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (_LDBL12 *)0x0;
          p_Var9 = (_LDBL12 *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar6 = local_24 + iVar4;
          _Ifp = (_LDBL12 *)(p_Var9->ld12 + *puVar6);
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_11051cfb;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_11051d02;
LAB_11051cfb:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_11051d02:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_11051d10;
              }
              local_8 = (_LDBL12 *)0x0;
              puVar6 = local_24 + iVar4;
              _Ifp = (_LDBL12 *)(((_LDBL12 *)*puVar6)->ld12 + 1);
            } while (_Ifp < (_LDBL12 *)*puVar6);
            bVar14 = _Ifp == (_LDBL12 *)0x0;
          } while( true );
        }
        iVar4 = iVar4 + 1;
        if (2 < iVar4) break;
        uVar8 = local_24[iVar4];
      }
    }
LAB_11051d10:
    *puVar7 = *puVar7 & -1 << ((byte)local_c & 0x1f);
    iVar4 = local_10 + 1;
    if (iVar4 < 3) {
      puVar7 = local_24 + iVar4;
      for (iVar13 = 3 - iVar4; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    if (_Ifp != (_LDBL12 *)0x0) {
      iVar12 = uVar11 - 0x3ffe;
    }
    if (iVar12 < (int)(DAT_1109b9bc - DAT_1109b9c0)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_1109b9bc < iVar12) {
        if (iVar12 < DAT_1109b9b8) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_1109b9cc;
          iVar2 = (int)(DAT_1109b9c4 + ((int)DAT_1109b9c4 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1109b9c4 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            local_14 = local_24[(int)_Ifp] & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = local_24[(int)_Ifp] >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar4 = 2;
          puVar7 = local_24 + (2 - iVar2);
          do {
            if (iVar4 < iVar2) {
              local_24[iVar4] = 0;
            }
            else {
              local_24[iVar4] = *puVar7;
            }
            iVar4 = iVar4 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar4);
          IVar3 = INTRNCVT_OK;
        }
        else {
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[0] = 0x80000000;
          iVar12 = (int)(DAT_1109b9c4 + ((int)DAT_1109b9c4 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1109b9c4 & 0x8000001f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
          }
          local_10 = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar10);
          do {
            uVar11 = local_24[(int)_Ifp];
            local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
            local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar2 = 2;
          puVar7 = local_24 + (2 - iVar12);
          do {
            if (iVar2 < iVar12) {
              local_24[iVar2] = 0;
            }
            else {
              local_24[iVar2] = *puVar7;
            }
            iVar2 = iVar2 + -1;
            puVar7 = puVar7 + -1;
          } while (-1 < iVar2);
          iVar12 = DAT_1109b9cc + DAT_1109b9b8;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_110520c7;
      }
      local_14 = DAT_1109b9bc - local_14;
      local_24[0] = uVar10;
      local_24[1] = uVar1;
      iVar12 = (int)(local_14 + ((int)local_14 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = local_14 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
      iVar2 = DAT_1109b9c0 - 1;
      iVar12 = (int)(DAT_1109b9c0 + ((int)DAT_1109b9c0 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_1109b9c0 & 0x8000001f;
      local_10 = iVar12;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      bVar5 = (byte)(0x1f - uVar10);
      puVar7 = local_24 + iVar12;
      local_14 = 0x1f - uVar10;
      if ((*puVar7 & 1 << (bVar5 & 0x1f)) != 0) {
        uVar10 = local_24[iVar12] & ~(-1 << (bVar5 & 0x1f));
        while (uVar10 == 0) {
          iVar12 = iVar12 + 1;
          if (2 < iVar12) goto LAB_11051eb3;
          uVar10 = local_24[iVar12];
        }
        iVar12 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar8 = 1 << (0x1f - ((byte)iVar2 & 0x1f) & 0x1f);
        uVar11 = local_24[iVar12];
        uVar10 = uVar11 + uVar8;
        if ((uVar10 < uVar11) || (uVar10 < uVar8)) {
          bVar14 = true;
        }
        local_24[iVar12] = uVar10;
        while ((iVar12 = iVar12 + -1, -1 < iVar12 && (bVar14))) {
          uVar11 = local_24[iVar12];
          uVar10 = uVar11 + 1;
          bVar14 = false;
          if ((uVar10 < uVar11) || (uVar10 == 0)) {
            bVar14 = true;
          }
          local_24[iVar12] = uVar10;
        }
      }
LAB_11051eb3:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_1109b9c4 + 1;
      iVar12 = (int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = uVar10 & 0x8000001f;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
      }
      local_10 = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar10);
      do {
        uVar11 = local_24[(int)_Ifp];
        local_14 = uVar11 & ~(-1 << ((byte)uVar10 & 0x1f));
        local_24[(int)_Ifp] = uVar11 >> ((byte)uVar10 & 0x1f) | local_10;
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_10 = local_14 << ((byte)(0x20 - uVar10) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar7 = local_24 + (2 - iVar12);
      do {
        if (iVar2 < iVar12) {
          local_24[iVar2] = 0;
        }
        else {
          local_24[iVar2] = *puVar7;
        }
        iVar2 = iVar2 + -1;
        puVar7 = puVar7 + -1;
      } while (-1 < iVar2);
    }
    iVar12 = 0;
    IVar3 = INTRNCVT_UNDERFLOW;
  }
LAB_110520c7:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_1109b9c4 & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_1109b9c8 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_1109b9c8 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}


// ==== 1105210a __ld12told

/* Library Function - Single Match
    __ld12told
   
   Library: Visual Studio 2005 Release */

INTRNCVT_STATUS __cdecl __ld12told(_LDBL12 *_Ifp,_LDOUBLE *_Ld)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  ushort uVar7;
  uint local_18 [3];
  INTRNCVT_STATUS local_c;
  
  uVar2 = *(ushort *)(_Ifp->ld12 + 10);
  local_18[0] = *(uint *)(_Ifp->ld12 + 6);
  uVar3 = *(uint *)(_Ifp->ld12 + 2);
  uVar7 = uVar2 & 0x7fff;
  uVar6 = uVar3;
  if (((*(ushort *)_Ifp->ld12 & 0x8000) != 0) && ((*(ushort *)_Ifp->ld12 & 0x7fff) != 0)) {
    uVar6 = uVar3 + 1;
    bVar5 = false;
    if ((uVar6 < uVar3) || (uVar6 == 0)) {
      bVar5 = true;
    }
    _Ifp = (_LDBL12 *)0x0;
    do {
      if (!bVar5) goto LAB_110521a8;
      bVar5 = false;
      puVar1 = local_18 + (int)_Ifp;
      uVar4 = *puVar1;
      uVar3 = uVar4 + 1;
      if ((uVar3 < uVar4) || (uVar3 == 0)) {
        bVar5 = true;
      }
      _Ifp = (_LDBL12 *)(_Ifp[-1].ld12 + 0xb);
      *puVar1 = uVar3;
    } while (-1 < (int)_Ifp);
    if (bVar5) {
      local_18[0] = 0x80000000;
      uVar7 = uVar7 + 1;
    }
  }
LAB_110521a8:
  local_c = (INTRNCVT_STATUS)(uVar7 == 0x7fff);
  *(uint *)_Ld->ld = uVar6;
  *(uint *)(_Ld->ld + 4) = local_18[0];
  *(ushort *)(_Ld->ld + 8) = uVar2 & 0x8000 | uVar7;
  return local_c;
}


// ==== 11052227 ___ld12mul

/* Library Function - Single Match
    ___ld12mul
   
   Library: Visual Studio 2005 Release */

void __cdecl ___ld12mul(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  short *psVar10;
  ushort uVar11;
  ushort uVar12;
  int local_34;
  int local_30;
  ushort *local_2c;
  ushort *local_28;
  int local_24;
  int local_1c;
  uint local_18;
  byte local_14;
  undefined1 uStack_13;
  ushort uStack_12;
  short local_10;
  undefined4 uStack_e;
  ushort uStack_a;
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  local_24 = 0;
  local_10 = 0;
  iVar4 = 0;
  uStack_e._0_2_ = 0;
  uStack_e._2_2_ = 0;
  iVar5 = 0;
  uStack_a = 0;
  uVar7 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar9 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar12 = uVar9 + uVar7;
  uVar11 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  iVar2 = 0;
  iVar3 = 0;
  if (((uVar7 < 0x7fff) && (iVar2 = 0, iVar3 = 0, uVar9 < 0x7fff)) &&
     (iVar2 = iVar4, iVar3 = iVar5, uVar12 < 0xbffe)) {
    if (uVar12 < 0x3fc0) {
LAB_11052296:
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      goto LAB_1105248c;
    }
    if (((uVar7 == 0) && (uVar12 = uVar12 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
       ((param_1[1] == 0 && (*param_1 == 0)))) {
      *(undefined2 *)((int)param_1 + 10) = 0;
      goto LAB_1105248c;
    }
    if (((uVar9 == 0) && (uVar12 = uVar12 + 1, (param_2[2] & 0x7fffffffU) == 0)) &&
       ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_11052296;
    local_30 = 0;
    psVar10 = &local_10;
    local_1c = 5;
    do {
      local_34 = local_1c;
      if (0 < local_1c) {
        local_2c = (ushort *)(param_2 + 2);
        local_28 = (ushort *)(local_30 * 2 + (int)param_1);
        do {
          bVar6 = false;
          uVar1 = *(uint *)(psVar10 + -2) + (uint)*local_28 * (uint)*local_2c;
          if ((uVar1 < *(uint *)(psVar10 + -2)) || (uVar1 < (uint)*local_28 * (uint)*local_2c)) {
            bVar6 = true;
          }
          *(uint *)(psVar10 + -2) = uVar1;
          if (bVar6) {
            *psVar10 = *psVar10 + 1;
          }
          local_28 = local_28 + 1;
          local_2c = local_2c + -1;
          local_34 = local_34 + -1;
        } while (0 < local_34);
      }
      uVar1 = CONCAT22((ushort)uStack_e,local_10);
      psVar10 = psVar10 + 1;
      local_30 = local_30 + 1;
      local_1c = local_1c + -1;
    } while (0 < local_1c);
    uVar12 = uVar12 + 0xc002;
    uVar8 = uVar1;
    if ((short)uVar12 < 1) {
LAB_110523b0:
      uStack_12 = 0;
      uStack_13 = 0;
      local_14 = 0;
      uVar12 = uVar12 - 1;
      uVar8 = uVar1;
      if ((short)uVar12 < 0) {
        local_18 = (uint)(ushort)-uVar12;
        uVar12 = 0;
        do {
          if ((local_14 & 1) != 0) {
            local_24 = local_24 + 1;
          }
          iVar2 = CONCAT22(uStack_a,uStack_e._2_2_);
          uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
          uStack_a = uStack_a >> 1;
          uStack_e._0_2_ = (ushort)(uVar1 >> 0x11) | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
          uVar8 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
          uStack_12 = uStack_12 >> 1 | (ushort)((uVar1 << 0x1f) >> 0x10);
          local_18 = local_18 - 1;
          local_10 = (short)(uVar1 >> 1);
          uVar1 = CONCAT22((ushort)uStack_e,local_10);
          local_14 = (byte)uVar8;
          uStack_13 = (undefined1)(uVar8 >> 8);
        } while (local_18 != 0);
        uVar8 = CONCAT22((ushort)uStack_e,local_10);
        if (local_24 != 0) {
          local_14 = local_14 | 1;
          uVar8 = uVar1;
        }
      }
    }
    else {
      do {
        uVar1 = uVar8;
        if ((uStack_a & 0x8000) != 0) break;
        uVar1 = uVar8 * 2;
        iVar2 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
        uStack_e._2_2_ = (ushort)iVar2 | (ushort)(uVar8 >> 0x1f);
        uVar12 = uVar12 - 1;
        uStack_a = (ushort)((uint)iVar2 >> 0x10);
        uVar8 = uVar1;
      } while (0 < (short)uVar12);
      uStack_12 = 0;
      uStack_13 = 0;
      local_14 = 0;
      uVar8 = uVar1;
      if ((short)uVar12 < 1) goto LAB_110523b0;
    }
    uStack_e._0_2_ = (ushort)(uVar8 >> 0x10);
    local_10 = (short)uVar8;
    if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
       (iVar3 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e), iVar2 = CONCAT22(local_10,uStack_12),
       (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
      if (CONCAT22(local_10,uStack_12) == -1) {
        iVar2 = 0;
        if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
          if (uStack_a == 0xffff) {
            uStack_a = 0x8000;
            uVar12 = uVar12 + 1;
            iVar3 = 0;
            iVar2 = 0;
          }
          else {
            uStack_a = uStack_a + 1;
            iVar3 = 0;
            iVar2 = 0;
          }
        }
        else {
          iVar3 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
        }
      }
      else {
        iVar2 = CONCAT22(local_10,uStack_12) + 1;
        iVar3 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
      }
    }
    local_10 = (short)((uint)iVar2 >> 0x10);
    uStack_12 = (ushort)iVar2;
    uStack_e._2_2_ = (ushort)((uint)iVar3 >> 0x10);
    uStack_e._0_2_ = (ushort)iVar3;
    if (uVar12 < 0x7fff) {
      *(ushort *)param_1 = uStack_12;
      *(uint *)((int)param_1 + 2) = CONCAT22((ushort)uStack_e,local_10);
      *(uint *)((int)param_1 + 6) = CONCAT22(uStack_a,uStack_e._2_2_);
      *(ushort *)((int)param_1 + 10) = uVar12 | uVar11;
      goto LAB_1105248c;
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
LAB_1105248c:
  local_10 = (short)((uint)iVar2 >> 0x10);
  uStack_e = iVar3;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1105249b FUN_1105249b

void __cdecl FUN_1105249b(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  ushort *puVar8;
  ushort uVar9;
  uint uVar10;
  short *psVar11;
  uint uVar12;
  ushort uVar13;
  ushort *local_44;
  ushort *local_40;
  int local_3c;
  int local_34;
  int local_30;
  undefined *local_2c;
  int local_28;
  ushort local_24;
  ushort local_20;
  undefined4 uStack_1e;
  undefined2 uStack_1a;
  undefined4 local_18;
  byte local_14;
  undefined1 uStack_13;
  undefined4 uStack_12;
  undefined4 uStack_e;
  ushort uStack_a;
  uint local_8;
  
  iVar1 = CONCAT22(uStack_1e._2_2_,(undefined2)uStack_1e);
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  local_2c = &DAT_1109ba20;
  if (param_2 == 0) {
LAB_11052797:
    uStack_1e = iVar1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if ((int)param_2 < 0) {
    param_2 = -param_2;
    local_2c = &DAT_1109bb80;
  }
  if (param_3 == 0) {
    *(undefined2 *)param_1 = 0;
  }
joined_r0x110524e0:
  do {
    if (param_2 == 0) goto LAB_11052797;
    local_2c = local_2c + 0x54;
    uVar12 = (int)param_2 >> 3;
    uVar7 = param_2 & 7;
    param_2 = uVar12;
    if (uVar7 != 0) {
      puVar8 = (ushort *)(local_2c + uVar7 * 0xc);
      if (0x7fff < *puVar8) {
        local_20 = (ushort)*(undefined4 *)puVar8;
        uStack_1e._0_2_ = (undefined2)((uint)*(undefined4 *)puVar8 >> 0x10);
        puVar3 = puVar8 + 4;
        uStack_1e._2_2_ = (undefined2)*(undefined4 *)(puVar8 + 2);
        uStack_1a = (undefined2)((uint)*(undefined4 *)(puVar8 + 2) >> 0x10);
        puVar8 = &local_20;
        local_18 = *(undefined4 *)puVar3;
        iVar1 = CONCAT22(uStack_1e._2_2_,(undefined2)uStack_1e) + -1;
        uStack_1e._0_2_ = (undefined2)iVar1;
        uStack_1e._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
      }
      local_34 = 0;
      local_14 = 0;
      uStack_13 = 0;
      uStack_12._0_2_ = 0;
      uStack_12._2_2_ = 0;
      uStack_e._0_2_ = 0;
      uStack_e._2_2_ = 0;
      uStack_a = 0;
      uVar9 = *(ushort *)((int)param_1 + 10) & 0x7fff;
      uVar13 = puVar8[5] & 0x7fff;
      local_24 = uVar13 + uVar9;
      uVar6 = (puVar8[5] ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
      if (((uVar9 < 0x7fff) && (uVar13 < 0x7fff)) && (local_24 < 0xbffe)) {
        if (0x3fbf < local_24) {
          if (((uVar9 == 0) && (local_24 = local_24 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
             ((param_1[1] == 0 && (*param_1 == 0)))) {
            *(undefined2 *)((int)param_1 + 10) = 0;
            uStack_12 = 0;
            uStack_e = 0;
            goto joined_r0x110524e0;
          }
          if (((uVar13 != 0) || (local_24 = local_24 + 1, (*(uint *)(puVar8 + 4) & 0x7fffffff) != 0)
              ) || ((*(int *)(puVar8 + 2) != 0 || (*(int *)puVar8 != 0)))) {
            local_3c = 0;
            psVar11 = (short *)((int)&uStack_12 + 2);
            local_28 = 5;
            do {
              local_30 = local_28;
              if (0 < local_28) {
                local_44 = puVar8 + 4;
                local_40 = (ushort *)(local_3c * 2 + (int)param_1);
                do {
                  bVar5 = false;
                  uVar12 = *(uint *)(psVar11 + -2) + (uint)*local_40 * (uint)*local_44;
                  if ((uVar12 < *(uint *)(psVar11 + -2)) ||
                     (uVar12 < (uint)*local_40 * (uint)*local_44)) {
                    bVar5 = true;
                  }
                  *(uint *)(psVar11 + -2) = uVar12;
                  if (bVar5) {
                    *psVar11 = *psVar11 + 1;
                  }
                  local_40 = local_40 + 1;
                  local_44 = local_44 + -1;
                  local_30 = local_30 + -1;
                } while (0 < local_30);
              }
              psVar11 = psVar11 + 1;
              local_3c = local_3c + 1;
              local_28 = local_28 + -1;
            } while (0 < local_28);
            local_24 = local_24 + 0xc002;
            if ((short)local_24 < 1) {
LAB_1105268d:
              local_24 = local_24 - 1;
              if ((short)local_24 < 0) {
                uVar12 = (uint)(ushort)-local_24;
                local_24 = 0;
                do {
                  if ((local_14 & 1) != 0) {
                    local_34 = local_34 + 1;
                  }
                  iVar2 = CONCAT22(uStack_a,uStack_e._2_2_);
                  uVar7 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                  iVar4 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                  uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
                  uStack_a = uStack_a >> 1;
                  uStack_e._0_2_ = (ushort)uStack_e >> 1 | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
                  uVar10 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                  uStack_12._0_2_ = (ushort)uStack_12 >> 1 | (ushort)((uint)(iVar4 << 0x1f) >> 0x10)
                  ;
                  uVar12 = uVar12 - 1;
                  uStack_12._2_2_ = (ushort)(uVar7 >> 1);
                  local_14 = (byte)uVar10;
                  uStack_13 = (undefined1)(uVar10 >> 8);
                } while (uVar12 != 0);
                if (local_34 != 0) {
                  local_14 = local_14 | 1;
                }
              }
            }
            else {
              do {
                uVar9 = (ushort)uStack_12;
                if ((uStack_a & 0x8000) != 0) break;
                local_24 = local_24 - 1;
                iVar4 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) << 1;
                local_14 = (byte)iVar4;
                uStack_13 = (undefined1)((uint)iVar4 >> 8);
                uStack_12._0_2_ = (ushort)((uint)iVar4 >> 0x10);
                iVar4 = CONCAT22((ushort)uStack_e,uStack_12._2_2_) * 2;
                uStack_12._2_2_ = (ushort)iVar4 | uVar9 >> 0xf;
                iVar2 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
                uStack_e._2_2_ = (ushort)iVar2 | (ushort)uStack_e >> 0xf;
                uStack_e._0_2_ = (ushort)((uint)iVar4 >> 0x10);
                uStack_a = (ushort)((uint)iVar2 >> 0x10);
              } while (0 < (short)local_24);
              if ((short)local_24 < 1) goto LAB_1105268d;
            }
            if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
               (iVar4 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e),
               iVar2 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12),
               (CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
              if (CONCAT22(uStack_12._2_2_,(ushort)uStack_12) == -1) {
                uStack_12._0_2_ = 0;
                uStack_12._2_2_ = 0;
                iVar2 = 0;
                if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
                  uStack_e._0_2_ = 0;
                  uStack_e._2_2_ = 0;
                  if (uStack_a == 0xffff) {
                    local_24 = local_24 + 1;
                    uStack_a = 0x8000;
                    iVar4 = 0;
                    iVar2 = 0;
                  }
                  else {
                    uStack_a = uStack_a + 1;
                    iVar4 = 0;
                    iVar2 = 0;
                  }
                }
                else {
                  iVar4 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
                  uStack_e._0_2_ = (ushort)iVar4;
                  uStack_e._2_2_ = (ushort)((uint)iVar4 >> 0x10);
                }
              }
              else {
                iVar2 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12) + 1;
                uStack_12._0_2_ = (ushort)iVar2;
                uStack_12._2_2_ = (ushort)((uint)iVar2 >> 0x10);
                iVar4 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
              }
            }
            uStack_12._2_2_ = (ushort)((uint)iVar2 >> 0x10);
            uStack_12._0_2_ = (ushort)iVar2;
            uStack_e._2_2_ = (ushort)((uint)iVar4 >> 0x10);
            uStack_e._0_2_ = (ushort)iVar4;
            uStack_12 = iVar2;
            uStack_e = iVar4;
            if (local_24 < 0x7fff) {
              *(ushort *)param_1 = (ushort)uStack_12;
              *(uint *)((int)param_1 + 2) = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
              *(uint *)((int)param_1 + 6) = CONCAT22(uStack_a,uStack_e._2_2_);
              *(ushort *)((int)param_1 + 10) = local_24 | uVar6;
            }
            else {
              param_1[1] = 0;
              *param_1 = 0;
              param_1[2] = (-(uint)(uVar6 != 0) & 0x80000000) + 0x7fff8000;
            }
            goto joined_r0x110524e0;
          }
        }
        param_1[2] = 0;
      }
      else {
        param_1[2] = (-(uint)(uVar6 != 0) & 0x80000000) + 0x7fff8000;
      }
      param_1[1] = 0;
      *param_1 = 0;
      uStack_12 = 0;
      uStack_e = 0;
    }
  } while( true );
}


// ==== 110527a4 FUN_110527a4

/* WARNING: Removing unreachable block (ram,0x11052a64) */
/* WARNING: Removing unreachable block (ram,0x11052a2d) */
/* WARNING: Removing unreachable block (ram,0x11052de0) */
/* WARNING: Removing unreachable block (ram,0x11052a3c) */
/* WARNING: Removing unreachable block (ram,0x11052a44) */
/* WARNING: Removing unreachable block (ram,0x11052a4a) */
/* WARNING: Removing unreachable block (ram,0x11052a4d) */
/* WARNING: Removing unreachable block (ram,0x11052a54) */
/* WARNING: Removing unreachable block (ram,0x11052a5e) */
/* WARNING: Removing unreachable block (ram,0x11052ab9) */
/* WARNING: Removing unreachable block (ram,0x11052ab3) */
/* WARNING: Removing unreachable block (ram,0x11052abf) */
/* WARNING: Removing unreachable block (ram,0x11052adc) */
/* WARNING: Removing unreachable block (ram,0x11052ade) */
/* WARNING: Removing unreachable block (ram,0x11052ae6) */
/* WARNING: Removing unreachable block (ram,0x11052ae9) */
/* WARNING: Removing unreachable block (ram,0x11052aee) */
/* WARNING: Removing unreachable block (ram,0x11052af1) */
/* WARNING: Removing unreachable block (ram,0x11052de9) */
/* WARNING: Removing unreachable block (ram,0x11052afc) */
/* WARNING: Removing unreachable block (ram,0x11052e00) */
/* WARNING: Removing unreachable block (ram,0x11052e07) */
/* WARNING: Removing unreachable block (ram,0x11052b07) */
/* WARNING: Removing unreachable block (ram,0x11052b1a) */
/* WARNING: Removing unreachable block (ram,0x11052b1c) */
/* WARNING: Removing unreachable block (ram,0x11052b29) */
/* WARNING: Removing unreachable block (ram,0x11052b2e) */
/* WARNING: Removing unreachable block (ram,0x11052b32) */
/* WARNING: Removing unreachable block (ram,0x11052b3b) */
/* WARNING: Removing unreachable block (ram,0x11052b53) */
/* WARNING: Removing unreachable block (ram,0x11052b64) */
/* WARNING: Removing unreachable block (ram,0x11052b78) */
/* WARNING: Removing unreachable block (ram,0x11052bb0) */
/* WARNING: Removing unreachable block (ram,0x11052bbb) */
/* WARNING: Removing unreachable block (ram,0x11052bc6) */
/* WARNING: Removing unreachable block (ram,0x11052bcd) */
/* WARNING: Removing unreachable block (ram,0x11052bda) */
/* WARNING: Removing unreachable block (ram,0x11052bdf) */
/* WARNING: Removing unreachable block (ram,0x11052be9) */
/* WARNING: Removing unreachable block (ram,0x11052bef) */
/* WARNING: Removing unreachable block (ram,0x11052bfe) */
/* WARNING: Removing unreachable block (ram,0x11052c05) */
/* WARNING: Removing unreachable block (ram,0x11052c0f) */
/* WARNING: Removing unreachable block (ram,0x11052c14) */
/* WARNING: Removing unreachable block (ram,0x11052c26) */
/* WARNING: Removing unreachable block (ram,0x11052c33) */
/* WARNING: Removing unreachable block (ram,0x11052c42) */
/* WARNING: Removing unreachable block (ram,0x11052c4f) */
/* WARNING: Removing unreachable block (ram,0x11052c6c) */
/* WARNING: Removing unreachable block (ram,0x11052c70) */
/* WARNING: Removing unreachable block (ram,0x11052c77) */
/* WARNING: Removing unreachable block (ram,0x11052c80) */
/* WARNING: Removing unreachable block (ram,0x11052c83) */
/* WARNING: Removing unreachable block (ram,0x11052c94) */
/* WARNING: Removing unreachable block (ram,0x11052c97) */
/* WARNING: Removing unreachable block (ram,0x11052ca5) */
/* WARNING: Removing unreachable block (ram,0x11052cb0) */
/* WARNING: Removing unreachable block (ram,0x11052cb9) */
/* WARNING: Removing unreachable block (ram,0x11052ce6) */
/* WARNING: Removing unreachable block (ram,0x11052ceb) */
/* WARNING: Removing unreachable block (ram,0x11052cf6) */
/* WARNING: Removing unreachable block (ram,0x11052cff) */
/* WARNING: Removing unreachable block (ram,0x11052d05) */
/* WARNING: Removing unreachable block (ram,0x11052d08) */
/* WARNING: Removing unreachable block (ram,0x11052d2e) */
/* WARNING: Removing unreachable block (ram,0x11052d33) */
/* WARNING: Removing unreachable block (ram,0x11052d38) */
/* WARNING: Removing unreachable block (ram,0x11052d40) */
/* WARNING: Removing unreachable block (ram,0x11052d51) */
/* WARNING: Removing unreachable block (ram,0x11052d81) */
/* WARNING: Removing unreachable block (ram,0x11052d57) */
/* WARNING: Removing unreachable block (ram,0x11052d7c) */
/* WARNING: Removing unreachable block (ram,0x11052d61) */
/* WARNING: Removing unreachable block (ram,0x11052d76) */
/* WARNING: Removing unreachable block (ram,0x11052d6d) */
/* WARNING: Removing unreachable block (ram,0x11052d84) */
/* WARNING: Removing unreachable block (ram,0x11052daa) */
/* WARNING: Removing unreachable block (ram,0x11052dc1) */
/* WARNING: Removing unreachable block (ram,0x11052d8e) */
/* WARNING: Removing unreachable block (ram,0x11052c18) */
/* WARNING: Removing unreachable block (ram,0x11052bf5) */
/* WARNING: Removing unreachable block (ram,0x11052dc4) */
/* WARNING: Removing unreachable block (ram,0x11052dce) */
/* WARNING: Removing unreachable block (ram,0x11052e0f) */

void __cdecl
FUN_110527a4(undefined2 *param_1,undefined4 *param_2,char *param_3,int param_4,int param_5,
            int param_6,undefined4 param_7,int param_8)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  if (param_8 == 0) {
    puVar3 = (undefined4 *)FUN_110491c7();
    *puVar3 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
    return;
  }
  for (; (((cVar1 = *param_3, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\n')) ||
         (cVar1 == '\r')); param_3 = param_3 + 1) {
  }
                    /* WARNING: Could not recover jumptable at 0x11052835. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_11052e34)();
  return;
}


// ==== 11052f2a FUN_11052f2a

/* WARNING: Removing unreachable block (ram,0x1105341b) */
/* WARNING: Removing unreachable block (ram,0x11053425) */
/* WARNING: Removing unreachable block (ram,0x1105342a) */

void __cdecl
FUN_11052f2a(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  errno_t eVar6;
  short *psVar7;
  ushort uVar8;
  ushort uVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  short *psVar18;
  short *psVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ushort uVar23;
  ushort uVar24;
  char *pcVar25;
  undefined *local_6c;
  ushort *local_60;
  ushort *local_5c;
  ushort *local_58;
  int local_54;
  short local_50;
  ushort *local_4c;
  uint local_48;
  int local_44;
  ushort local_40;
  undefined4 uStack_3e;
  ushort uStack_3a;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined4 local_24;
  undefined4 uStack_20;
  ushort uStack_1c;
  undefined1 local_1a;
  byte bStack_19;
  byte local_14;
  undefined1 uStack_13;
  ushort uStack_12;
  undefined4 local_10;
  ushort local_c;
  ushort uStack_a;
  uint local_8;
  
  uVar16 = CONCAT22(local_24._2_2_,(ushort)local_24);
  iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  local_14 = (byte)param_1;
  uStack_13 = (undefined1)((uint)param_1 >> 8);
  uStack_12 = (ushort)((uint)param_1 >> 0x10);
  local_10._0_2_ = (ushort)param_2;
  iVar17 = CONCAT22((ushort)local_10,uStack_12);
  local_10._2_2_ = (ushort)(param_2 >> 0x10);
  local_c = param_3;
  uVar8 = param_3 & 0x8000;
  uVar14 = param_3 & 0x7fff;
  local_34 = 0xcccccccc;
  local_30 = 0xcccccccc;
  local_2c._0_1_ = 0xcc;
  local_2c._1_1_ = 0xcc;
  uStack_2a = 0xfb;
  uStack_29 = 0x3f;
  if (uVar8 == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar14 == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
    *(byte *)(param_6 + 1) = ((uVar8 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
    goto LAB_110537a8;
  }
  if ((short)uVar14 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((uVar8 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_11053059;
        pcVar25 = s_1_INF_110766ec;
      }
      else {
        if (param_1 != 0) {
LAB_11053059:
          pcVar25 = s_1_QNAN_110766e4;
          goto LAB_1105305e;
        }
        pcVar25 = s_1_IND_110766f4;
      }
      eVar6 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar25);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 5;
    }
    else {
      pcVar25 = s_1_SNAN_110766fc;
LAB_1105305e:
      eVar6 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar25);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 6;
    }
    iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
    uVar16 = CONCAT22(local_24._2_2_,(ushort)local_24);
    goto LAB_110537a8;
  }
  local_50 = (short)(((uVar14 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar14 * 0x4d10
                    >> 0x10);
  uVar16 = (uint)local_50;
  local_1a = (undefined1)uVar14;
  bStack_19 = (byte)(uVar14 >> 8);
  local_24._2_2_ = (ushort)param_1;
  local_24._0_2_ = 0;
  local_6c = &DAT_1109ba20;
  uStack_20._0_2_ = uStack_12;
  uStack_20._2_2_ = (ushort)local_10;
  uStack_1c = local_10._2_2_;
  if (uVar16 != 0) {
    iVar20 = param_1;
    uVar14 = -uVar16;
    if ((int)-uVar16 < 0) {
      local_6c = &DAT_1109bb80;
      uVar14 = uVar16;
    }
    while (uVar14 != 0) {
      uStack_20._0_2_ = (ushort)((uint)iVar20 >> 0x10);
      local_24._2_2_ = (ushort)iVar20;
      local_6c = local_6c + 0x54;
      iVar3 = CONCAT22(local_c,local_10._2_2_);
      if ((uVar14 & 7) == 0) goto LAB_1105337f;
      puVar10 = (ushort *)(local_6c + (uVar14 & 7) * 0xc);
      if (0x7fff < *puVar10) {
        local_40 = (ushort)*(undefined4 *)puVar10;
        uStack_3e._0_2_ = (undefined2)((uint)*(undefined4 *)puVar10 >> 0x10);
        puVar2 = puVar10 + 4;
        uStack_3e._2_2_ = (undefined2)*(undefined4 *)(puVar10 + 2);
        uStack_3a = (ushort)((uint)*(undefined4 *)(puVar10 + 2) >> 0x10);
        puVar10 = &local_40;
        local_38 = *(int *)puVar2;
        iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e) + -1;
        uStack_3e._0_2_ = (undefined2)iVar1;
        uStack_3e._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
      }
      uVar13 = CONCAT11(bStack_19,local_1a) & 0x7fff;
      uVar23 = puVar10[5] & 0x7fff;
      local_4c = (ushort *)0x0;
      local_14 = 0;
      uStack_13 = 0;
      uStack_12 = 0;
      local_10._0_2_ = 0;
      iVar11 = 0;
      local_10._2_2_ = 0;
      local_c = 0;
      iVar5 = 0;
      uStack_a = 0;
      uVar9 = (puVar10[5] ^ CONCAT11(bStack_19,local_1a)) & 0x8000;
      uVar24 = uVar23 + uVar13;
      iVar17 = 0;
      iVar3 = 0;
      if (((uVar13 < 0x7fff) && (iVar17 = 0, iVar3 = 0, uVar23 < 0x7fff)) &&
         (iVar17 = iVar11, iVar3 = iVar5, uVar24 < 0xbffe)) {
        if (uVar24 < 0x3fc0) {
          uStack_1c = 0;
          local_1a = 0;
          bStack_19 = 0;
          uStack_20._0_2_ = 0;
          uStack_20._2_2_ = 0;
          local_24._0_2_ = 0;
          local_24._2_2_ = 0;
          iVar20 = 0;
        }
        else if (((uVar13 == 0) &&
                 (uVar24 = uVar24 + 1,
                 (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
                ((CONCAT22(uStack_20._2_2_,(ushort)uStack_20) == 0 &&
                 (CONCAT22(local_24._2_2_,(ushort)local_24) == 0)))) {
          local_1a = 0;
          bStack_19 = 0;
        }
        else if ((((uVar23 == 0) &&
                  (uVar24 = uVar24 + 1, (*(uint *)(puVar10 + 4) & 0x7fffffff) == 0)) &&
                 (*(int *)(puVar10 + 2) == 0)) && (*(int *)puVar10 == 0)) {
          uStack_1c = 0;
          local_1a = 0;
          bStack_19 = 0;
          uStack_20._0_2_ = 0;
          uStack_20._2_2_ = 0;
          local_24._0_2_ = 0;
          local_24._2_2_ = 0;
          iVar20 = 0;
        }
        else {
          psVar7 = (short *)&local_10;
          local_60 = (ushort *)0x0;
          local_44 = 5;
          do {
            local_54 = local_44;
            if (0 < local_44) {
              local_5c = (ushort *)((int)&local_24 + (int)local_60 * 2);
              local_58 = puVar10 + 4;
              do {
                bVar4 = false;
                uVar16 = *(uint *)(psVar7 + -2) + (uint)*local_5c * (uint)*local_58;
                if ((uVar16 < *(uint *)(psVar7 + -2)) ||
                   (uVar16 < (uint)*local_5c * (uint)*local_58)) {
                  bVar4 = true;
                }
                *(uint *)(psVar7 + -2) = uVar16;
                if (bVar4) {
                  *psVar7 = *psVar7 + 1;
                }
                local_5c = local_5c + 1;
                local_58 = local_58 + -1;
                local_54 = local_54 + -1;
              } while (0 < local_54);
            }
            psVar7 = psVar7 + 1;
            local_60 = (ushort *)((int)local_60 + 1);
            local_44 = local_44 + -1;
          } while (0 < local_44);
          uVar24 = uVar24 + 0xc002;
          if ((short)uVar24 < 1) {
LAB_110532a3:
            uVar24 = uVar24 - 1;
            if ((short)uVar24 < 0) {
              local_48 = (uint)(ushort)-uVar24;
              uVar24 = 0;
              do {
                if ((local_14 & 1) != 0) {
                  local_4c = (ushort *)((int)local_4c + 1);
                }
                iVar20 = CONCAT22(uStack_a,local_c);
                uVar16 = CONCAT22(local_10._2_2_,(ushort)local_10);
                iVar17 = CONCAT22(local_10._2_2_,(ushort)local_10);
                local_c = (ushort)(CONCAT22(uStack_a,local_c) >> 1);
                uStack_a = uStack_a >> 1;
                local_10._2_2_ = local_10._2_2_ >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
                uVar12 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                uStack_12 = uStack_12 >> 1 | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
                local_48 = local_48 - 1;
                local_10._0_2_ = (ushort)(uVar16 >> 1);
                local_14 = (byte)uVar12;
                uStack_13 = (undefined1)(uVar12 >> 8);
              } while (local_48 != 0);
              if (local_4c != (ushort *)0x0) {
                local_14 = local_14 | 1;
              }
            }
          }
          else {
            do {
              uVar13 = uStack_12;
              if ((uStack_a & 0x8000) != 0) break;
              iVar17 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) << 1;
              local_14 = (byte)iVar17;
              uStack_13 = (undefined1)((uint)iVar17 >> 8);
              uStack_12 = (ushort)((uint)iVar17 >> 0x10);
              iVar17 = CONCAT22(local_10._2_2_,(ushort)local_10) * 2;
              local_10._0_2_ = (ushort)iVar17 | uVar13 >> 0xf;
              iVar20 = CONCAT22(uStack_a,local_c) * 2;
              local_c = (ushort)iVar20 | local_10._2_2_ >> 0xf;
              uVar24 = uVar24 - 1;
              local_10._2_2_ = (ushort)((uint)iVar17 >> 0x10);
              uStack_a = (ushort)((uint)iVar20 >> 0x10);
            } while (0 < (short)uVar24);
            if ((short)uVar24 < 1) goto LAB_110532a3;
          }
          if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
             (iVar3 = CONCAT22(local_c,local_10._2_2_),
             iVar17 = CONCAT22((ushort)local_10,uStack_12),
             (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
            if (CONCAT22((ushort)local_10,uStack_12) == -1) {
              uStack_12 = 0;
              local_10._0_2_ = 0;
              iVar17 = 0;
              if (CONCAT22(local_c,local_10._2_2_) == -1) {
                local_10._2_2_ = 0;
                local_c = 0;
                if (uStack_a == 0xffff) {
                  uStack_a = 0x8000;
                  uVar24 = uVar24 + 1;
                  iVar3 = 0;
                  iVar17 = 0;
                }
                else {
                  uStack_a = uStack_a + 1;
                  iVar3 = 0;
                  iVar17 = 0;
                }
              }
              else {
                iVar3 = CONCAT22(local_c,local_10._2_2_) + 1;
                local_10._2_2_ = (ushort)iVar3;
                local_c = (ushort)((uint)iVar3 >> 0x10);
              }
            }
            else {
              iVar17 = CONCAT22((ushort)local_10,uStack_12) + 1;
              uStack_12 = (ushort)iVar17;
              local_10._0_2_ = (ushort)((uint)iVar17 >> 0x10);
              iVar3 = CONCAT22(local_c,local_10._2_2_);
            }
          }
          local_10._0_2_ = (ushort)((uint)iVar17 >> 0x10);
          uStack_12 = (ushort)iVar17;
          local_c = (ushort)((uint)iVar3 >> 0x10);
          local_10._2_2_ = (ushort)iVar3;
          if (0x7ffe < uVar24) goto LAB_11053363;
          local_24._0_2_ = uStack_12;
          local_24._2_2_ = (ushort)local_10;
          uStack_20._0_2_ = local_10._2_2_;
          iVar20 = CONCAT22(local_10._2_2_,(ushort)local_10);
          bStack_19 = (byte)(uVar24 >> 8) | (byte)(uVar9 >> 8);
          uStack_20._2_2_ = local_c;
          uStack_1c = uStack_a;
          local_1a = (undefined1)uVar24;
        }
      }
      else {
LAB_11053363:
        uStack_20._0_2_ = 0;
        uStack_20._2_2_ = 0;
        iVar11 = (-(uint)(uVar9 != 0) & 0x80000000) + 0x7fff8000;
        local_24._0_2_ = 0;
        local_24._2_2_ = 0;
        iVar20 = 0;
        uStack_1c = (ushort)iVar11;
        local_1a = (undefined1)((uint)iVar11 >> 0x10);
        bStack_19 = (byte)((uint)iVar11 >> 0x18);
      }
LAB_1105337f:
      uStack_20._0_2_ = (ushort)((uint)iVar20 >> 0x10);
      local_24._2_2_ = (ushort)iVar20;
      local_c = (ushort)((uint)iVar3 >> 0x10);
      local_10._2_2_ = (ushort)iVar3;
      local_10._0_2_ = (ushort)((uint)iVar17 >> 0x10);
      uStack_12 = (ushort)iVar17;
      param_1 = CONCAT22(uStack_12,local_24._2_2_);
      param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
      uVar14 = (int)uVar14 >> 3;
    }
  }
  local_24._2_2_ = (ushort)param_1;
  uVar16 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
  uStack_20 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
  if (0x3ffe < (ushort)(uVar16 >> 0x10)) {
    local_50 = local_50 + 1;
    uVar16 = uVar16 >> 0x10 & 0x7fff;
    iVar17 = uVar16 + 0x3ffb;
    local_5c = (ushort *)0x0;
    local_14 = 0;
    uStack_13 = 0;
    uStack_12 = 0;
    param_1 = param_1 & 0xffff;
    local_10._0_2_ = 0;
    local_10._2_2_ = 0;
    param_2 = 0;
    local_c = 0;
    uStack_a = 0;
    if (((ushort)uVar16 < 0x7fff) && ((ushort)iVar17 < 0xbffe)) {
      if (0x3fbf < (ushort)iVar17) {
        if (((((ushort)uVar16 == 0) &&
             (iVar17 = uVar16 + 0x3ffc,
             (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
            (CONCAT22(uStack_20._2_2_,(ushort)uStack_20) == 0)) &&
           (CONCAT22(local_24._2_2_,(ushort)local_24) == 0)) {
          local_1a = 0;
          bStack_19 = 0;
          uStack_20 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
          goto LAB_110535e7;
        }
        local_58 = (ushort *)0x0;
        psVar7 = (short *)&local_10;
        local_44 = 5;
        do {
          local_54 = local_44;
          if (0 < local_44) {
            local_60 = &local_2c;
            local_4c = (ushort *)((int)&local_24 + (int)local_58 * 2);
            do {
              bVar4 = false;
              uVar16 = *(uint *)(psVar7 + -2) + (uint)*local_60 * (uint)*local_4c;
              if ((uVar16 < *(uint *)(psVar7 + -2)) || (uVar16 < (uint)*local_60 * (uint)*local_4c))
              {
                bVar4 = true;
              }
              *(uint *)(psVar7 + -2) = uVar16;
              if (bVar4) {
                *psVar7 = *psVar7 + 1;
              }
              local_4c = local_4c + 1;
              local_60 = local_60 + -1;
              local_54 = local_54 + -1;
            } while (0 < local_54);
          }
          psVar7 = psVar7 + 1;
          local_58 = (ushort *)((int)local_58 + 1);
          local_44 = local_44 + -1;
        } while (0 < local_44);
        iVar17 = iVar17 + 0xc002;
        if ((short)iVar17 < 1) {
LAB_110534f5:
          uVar24 = (ushort)(iVar17 + 0xffff);
          if ((short)uVar24 < 0) {
            uVar16 = -(iVar17 + 0xffff);
            uVar14 = uVar16 & 0xffff;
            uVar24 = uVar24 + (short)uVar16;
            do {
              if ((local_14 & 1) != 0) {
                local_5c = (ushort *)((int)local_5c + 1);
              }
              iVar20 = CONCAT22(uStack_a,local_c);
              uVar16 = CONCAT22(local_10._2_2_,(ushort)local_10);
              iVar17 = CONCAT22(local_10._2_2_,(ushort)local_10);
              local_c = (ushort)(CONCAT22(uStack_a,local_c) >> 1);
              uStack_a = uStack_a >> 1;
              local_10._2_2_ = local_10._2_2_ >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
              uVar12 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
              uStack_12 = uStack_12 >> 1 | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
              uVar14 = uVar14 - 1;
              local_10._0_2_ = (ushort)(uVar16 >> 1);
              local_14 = (byte)uVar12;
              uStack_13 = (undefined1)(uVar12 >> 8);
            } while (uVar14 != 0);
            if (local_5c != (ushort *)0x0) {
              local_14 = local_14 | 1;
            }
          }
        }
        else {
          do {
            uVar24 = uStack_12;
            if ((uStack_a & 0x8000) != 0) break;
            iVar20 = CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) << 1;
            local_14 = (byte)iVar20;
            uStack_13 = (undefined1)((uint)iVar20 >> 8);
            uStack_12 = (ushort)((uint)iVar20 >> 0x10);
            iVar20 = CONCAT22(local_10._2_2_,(ushort)local_10) * 2;
            local_10._0_2_ = (ushort)iVar20 | uVar24 >> 0xf;
            iVar3 = CONCAT22(uStack_a,local_c) * 2;
            local_c = (ushort)iVar3 | local_10._2_2_ >> 0xf;
            iVar17 = iVar17 + 0xffff;
            local_10._2_2_ = (ushort)((uint)iVar20 >> 0x10);
            uStack_a = (ushort)((uint)iVar3 >> 0x10);
          } while (0 < (short)iVar17);
          uVar24 = (ushort)iVar17;
          if ((short)uVar24 < 1) goto LAB_110534f5;
        }
        iVar17 = 0;
        if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
           (uStack_20 = CONCAT22(local_c,local_10._2_2_),
           iVar20 = CONCAT22((ushort)local_10,uStack_12),
           (CONCAT22(uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
          if (CONCAT22((ushort)local_10,uStack_12) == -1) {
            if (CONCAT22(local_c,local_10._2_2_) == -1) {
              if (uStack_a == 0xffff) {
                uStack_a = 0x8000;
                uVar24 = uVar24 + 1;
                uStack_20 = iVar17;
                iVar20 = iVar17;
              }
              else {
                uStack_a = uStack_a + 1;
                uStack_20 = iVar17;
                iVar20 = iVar17;
              }
            }
            else {
              uStack_20 = CONCAT22(local_c,local_10._2_2_) + 1;
              iVar20 = iVar17;
            }
          }
          else {
            iVar20 = CONCAT22((ushort)local_10,uStack_12) + 1;
            uStack_20 = CONCAT22(local_c,local_10._2_2_);
          }
        }
        local_10._0_2_ = (ushort)((uint)iVar20 >> 0x10);
        uStack_12 = (ushort)iVar20;
        local_c = (ushort)((uint)uStack_20 >> 0x10);
        local_10._2_2_ = (ushort)uStack_20;
        param_2 = CONCAT22(local_10._2_2_,(ushort)local_10);
        if (uVar24 < 0x7fff) {
          bStack_19 = (byte)(uVar24 >> 8) | bStack_19 & 0x80;
          uStack_1c = uStack_a;
          local_1a = (undefined1)uVar24;
        }
        else {
          iVar20 = (-(uint)((bStack_19 & 0x80) != 0) & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar20;
          local_1a = (undefined1)((uint)iVar20 >> 0x10);
          bStack_19 = (byte)((uint)iVar20 >> 0x18);
          uStack_20 = iVar17;
          iVar20 = iVar17;
        }
        local_24._2_2_ = (ushort)((uint)iVar20 >> 0x10);
        local_24._0_2_ = (ushort)iVar20;
        param_1 = CONCAT22(uStack_12,local_24._2_2_);
        goto LAB_110535e7;
      }
      uStack_1c = 0;
      local_1a = 0;
      bStack_19 = 0;
    }
    else {
      iVar17 = (-(uint)((bStack_19 & 0x80) != 0) & 0x80000000) + 0x7fff8000;
      uStack_1c = (ushort)iVar17;
      local_1a = (undefined1)((uint)iVar17 >> 0x10);
      bStack_19 = (byte)((uint)iVar17 >> 0x18);
    }
    local_24._0_2_ = 0;
    param_1 = 0;
    param_2 = 0;
    uStack_20 = 0;
  }
LAB_110535e7:
  uStack_12 = (ushort)((uint)param_1 >> 0x10);
  local_24._2_2_ = (ushort)param_1;
  uVar16 = CONCAT22(local_24._2_2_,(ushort)local_24);
  *param_6 = local_50;
  if (((param_5 & 1) == 0) || (param_4 = param_4 + local_50, 0 < param_4)) {
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar20 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 0x10) - 0x3ffe;
    local_1a = 0;
    bStack_19 = 0;
    iVar17 = 8;
    do {
      uVar24 = local_24._2_2_;
      iVar3 = CONCAT22(local_24._2_2_,(ushort)local_24) << 1;
      local_24._0_2_ = (ushort)iVar3;
      local_24._2_2_ = (ushort)((uint)iVar3 >> 0x10);
      uVar16 = uStack_20 * 2;
      iVar3 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2;
      uStack_1c = (ushort)iVar3 | (ushort)((uint)uStack_20 >> 0x1f);
      iVar17 = iVar17 + -1;
      uStack_20._0_2_ = (ushort)(uVar16 | uVar24 >> 0xf);
      uStack_20._2_2_ = (ushort)(uVar16 >> 0x10);
      local_1a = (undefined1)((uint)iVar3 >> 0x10);
      bStack_19 = (byte)((uint)iVar3 >> 0x18);
    } while (iVar17 != 0);
    if ((iVar20 < 0) && (uVar16 = -iVar20 & 0xff, uVar16 != 0)) {
      do {
        iVar20 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
        uVar12 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
        iVar17 = CONCAT22(uStack_20._2_2_,(ushort)uStack_20);
        uVar14 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 1;
        uStack_1c = (ushort)uVar14;
        local_1a = (undefined1)(uVar14 >> 0x10);
        bStack_19 = bStack_19 >> 1;
        uStack_20._2_2_ = uStack_20._2_2_ >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
        uVar14 = CONCAT22(local_24._2_2_,(ushort)local_24);
        local_24._2_2_ = local_24._2_2_ >> 1 | (ushort)((uint)(iVar17 << 0x1f) >> 0x10);
        uVar16 = uVar16 - 1;
        uStack_20._0_2_ = (ushort)(uVar12 >> 1);
        local_24._0_2_ = (ushort)(uVar14 >> 1);
      } while (0 < (int)uVar16);
    }
    uVar16 = CONCAT22(local_24._2_2_,(ushort)local_24);
    psVar7 = param_6 + 2;
    psVar18 = psVar7;
    uVar24 = uStack_20._2_2_;
    for (iVar17 = param_4 + 1; 0 < iVar17; iVar17 = iVar17 + -1) {
      local_24._2_2_ = (ushort)(uVar16 >> 0x10);
      local_24._0_2_ = (ushort)uVar16;
      iVar1 = CONCAT22((ushort)uStack_20,local_24._2_2_);
      local_38 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
      uVar12 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2 | (uint)(uVar24 >> 0xf)) * 2 |
               (CONCAT22(uVar24,(ushort)uStack_20) & 0x7fffffff) >> 0x1e;
      uVar21 = (CONCAT22(uVar24,(ushort)uStack_20) * 2 | (uint)(local_24._2_2_ >> 0xf)) * 2 |
               (uVar16 & 0x7fffffff) >> 0x1e;
      uVar14 = uVar16 * 5;
      if ((uVar14 < uVar16 * 4) || (uVar22 = uVar21, uVar14 < uVar16)) {
        uVar22 = uVar21 + 1;
        bVar4 = false;
        if ((uVar22 < uVar21) || (uVar22 == 0)) {
          bVar4 = true;
        }
        if (bVar4) {
          uVar12 = uVar12 + 1;
        }
      }
      uVar21 = CONCAT22(uVar24,(ushort)uStack_20) + uVar22;
      if ((uVar21 < uVar22) || (uVar21 < CONCAT22(uVar24,(ushort)uStack_20))) {
        uVar12 = uVar12 + 1;
      }
      iVar20 = (uVar12 + local_38) * 2;
      uStack_1c = (ushort)iVar20 | (ushort)(uVar21 >> 0x1f);
      uVar16 = uVar16 * 10;
      local_1a = (undefined1)((uint)iVar20 >> 0x10);
      uStack_20._0_2_ = (ushort)(uVar21 * 2) | (ushort)(uVar14 >> 0x1f);
      *(char *)psVar18 = (char)((uint)iVar20 >> 0x18) + '0';
      psVar18 = (short *)((int)psVar18 + 1);
      uStack_20._2_2_ = (ushort)(uVar21 * 2 >> 0x10);
      bStack_19 = 0;
      local_40 = (ushort)local_24;
      uStack_3a = uVar24;
      uVar24 = uStack_20._2_2_;
    }
    uStack_20 = CONCAT22(uVar24,(ushort)uStack_20);
    psVar19 = psVar18 + -1;
    if (*(char *)((int)psVar18 + -1) < '5') {
      for (; (psVar7 <= psVar19 && ((char)*psVar19 == '0')); psVar19 = (short *)((int)psVar19 + -1))
      {
      }
      if (psVar19 < psVar7) {
        *param_6 = 0;
        *(undefined1 *)((int)param_6 + 3) = 1;
        *(byte *)(param_6 + 1) = ((uVar8 != 0x8000) - 1U & 0xd) + 0x20;
        *(char *)psVar7 = '0';
        *(undefined1 *)((int)param_6 + 5) = 0;
        goto LAB_110537a8;
      }
    }
    else {
      for (; (psVar7 <= psVar19 && ((char)*psVar19 == '9')); psVar19 = (short *)((int)psVar19 + -1))
      {
        *(char *)psVar19 = '0';
      }
      if (psVar19 < psVar7) {
        psVar19 = (short *)((int)psVar19 + 1);
        *param_6 = *param_6 + 1;
      }
      *(char *)psVar19 = (char)*psVar19 + '\x01';
    }
    cVar15 = ((char)psVar19 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar15;
    *(undefined1 *)(cVar15 + 4 + (int)param_6) = 0;
  }
  else {
    *param_6 = 0;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(byte *)(param_6 + 1) = ((uVar8 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
  }
LAB_110537a8:
  local_24 = uVar16;
  local_10 = param_2;
  uStack_3e = iVar1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 110537f0 __set_controlfp

/* Library Function - Single Match
    __set_controlfp
   
   Library: Visual Studio 2005 Release */

void __cdecl __set_controlfp(uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  ushort in_FPUControlWord;
  
  if ((((_NewValue != 0x9001f) || (_Mask != 0xffffffff)) || ((in_FPUControlWord & 0x1f3d) != 0x23d))
     || ((DAT_1109fe90 != 0 && ((MXCSR & 0xfec0) != 0x1e80)))) {
    eVar1 = __controlfp_s((uint *)0x0,_NewValue,_Mask & 0xfff7ffff);
    if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return;
}


// ==== 110538f3 __hw_cw

/* Library Function - Single Match
    __hw_cw
   
   Library: Visual Studio 2005 Release */

uint __hw_cw(void)

{
  uint uVar1;
  uint uVar2;
  uint unaff_EBX;
  
  uVar1 = (uint)((unaff_EBX & 0x10) != 0);
  if ((unaff_EBX & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((unaff_EBX & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((unaff_EBX & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((unaff_EBX & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((unaff_EBX & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = unaff_EBX & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((unaff_EBX & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((unaff_EBX & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((unaff_EBX & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}


// ==== 11053a5c ___hw_cw_sse2

/* Library Function - Single Match
    ___hw_cw_sse2
   
   Library: Visual Studio 2005 Release */

uint __fastcall ___hw_cw_sse2(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_2 & 0x10) != 0) {
    uVar1 = 0x80;
  }
  if ((param_2 & 8) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((param_2 & 2) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  if ((param_2 & 1) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  if ((param_2 & 0x80000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  uVar2 = param_2 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x2000;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x4000;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0x6000;
    }
  }
  uVar2 = param_2 & 0x3000000;
  if (uVar2 == 0x1000000) {
    uVar1 = uVar1 | 0x8040;
  }
  else {
    if (uVar2 == 0x2000000) {
      return uVar1 | 0x40;
    }
    if (uVar2 == 0x3000000) {
      return uVar1 | 0x8000;
    }
  }
  return uVar1;
}


// ==== 11053b46 __statusfp

/* Library Function - Single Match
    __statusfp
   
   Library: Visual Studio 2005 Release */

uint __cdecl __statusfp(void)

{
  uint uVar1;
  uint uVar2;
  ushort in_FPUStatusWord;
  
  uVar2 = 0;
  if ((in_FPUStatusWord & 0x3f) != 0) {
    if ((in_FPUStatusWord & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((in_FPUStatusWord & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((in_FPUStatusWord & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((in_FPUStatusWord & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((in_FPUStatusWord & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((in_FPUStatusWord & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
  }
  if (DAT_1109fe90 != 0) {
    uVar1 = 0;
    if ((MXCSR & 0x3f) != 0) {
      if ((MXCSR & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((MXCSR & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((MXCSR & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((MXCSR & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((MXCSR & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((MXCSR & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    uVar2 = uVar1 | uVar2;
  }
  return uVar2;
}


// ==== 11053c0c ___statusfp_sse2

/* Library Function - Single Match
    ___statusfp_sse2
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

uint ___statusfp_sse2(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ___get_fpsr_sse2();
  uVar2 = 0;
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((uVar1 & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((uVar1 & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((uVar1 & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((uVar1 & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((uVar1 & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
  }
  return uVar2;
}


// ==== 11053e06 __statusfp2

/* Library Function - Single Match
    __statusfp2
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __statusfp2(uint *_X86_status,uint *_SSE2_status)

{
  uint uVar1;
  ushort in_FPUStatusWord;
  
  if (_X86_status != (uint *)0x0) {
    uVar1 = 0;
    if ((in_FPUStatusWord & 0x3f) != 0) {
      if ((in_FPUStatusWord & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((in_FPUStatusWord & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((in_FPUStatusWord & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((in_FPUStatusWord & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((in_FPUStatusWord & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((in_FPUStatusWord & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    *_X86_status = uVar1;
  }
  if (_SSE2_status != (uint *)0x0) {
    uVar1 = ___statusfp_sse2();
    *_SSE2_status = uVar1;
  }
  return;
}


// ==== 11053e5e __clearfp

/* WARNING: Removing unreachable block (ram,0x11053ee8) */
/* WARNING: Removing unreachable block (ram,0x11053ed8) */
/* WARNING: Removing unreachable block (ram,0x11053ec8) */
/* WARNING: Removing unreachable block (ram,0x11053ec3) */
/* WARNING: Removing unreachable block (ram,0x11053ecb) */
/* WARNING: Removing unreachable block (ram,0x11053ed0) */
/* WARNING: Removing unreachable block (ram,0x11053ed3) */
/* WARNING: Removing unreachable block (ram,0x11053edb) */
/* WARNING: Removing unreachable block (ram,0x11053ee0) */
/* WARNING: Removing unreachable block (ram,0x11053ee3) */
/* WARNING: Removing unreachable block (ram,0x11053eeb) */
/* WARNING: Removing unreachable block (ram,0x11053ef0) */
/* Library Function - Single Match
    __clearfp
   
   Library: Visual Studio 2005 Release */

uint __cdecl __clearfp(void)

{
  uint uVar1;
  ushort in_FPUStatusWord;
  
  if (DAT_1109fe90 == 0) {
    uVar1 = 0;
    if ((in_FPUStatusWord & 0x3f) != 0) {
      if ((in_FPUStatusWord & 1) != 0) {
        uVar1 = 0x10;
      }
      if ((in_FPUStatusWord & 4) != 0) {
        uVar1 = uVar1 | 8;
      }
      if ((in_FPUStatusWord & 8) != 0) {
        uVar1 = uVar1 | 4;
      }
      if ((in_FPUStatusWord & 0x10) != 0) {
        uVar1 = uVar1 | 2;
      }
      if ((in_FPUStatusWord & 0x20) != 0) {
        uVar1 = uVar1 | 1;
      }
      if ((in_FPUStatusWord & 2) != 0) {
        uVar1 = uVar1 | 0x80000;
      }
    }
    return uVar1;
  }
  uVar1 = 0;
  if ((in_FPUStatusWord & 0x3f) != 0) {
    if ((in_FPUStatusWord & 1) != 0) {
      uVar1 = 0x10;
    }
    if ((in_FPUStatusWord & 4) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((in_FPUStatusWord & 8) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((in_FPUStatusWord & 0x10) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((in_FPUStatusWord & 0x20) != 0) {
      uVar1 = uVar1 | 1;
    }
    if ((in_FPUStatusWord & 2) != 0) {
      uVar1 = uVar1 | 0x80000;
    }
  }
  MXCSR = MXCSR & 0xffffffc0;
  return uVar1;
}


// ==== 11053f35 ___control87_2

/* Library Function - Single Match
    ___control87_2
   
   Library: Visual Studio 2005 Release */

int __cdecl ___control87_2(uint _NewValue,uint _Mask,uint *_X86_cw,uint *_Sse2_cw)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort in_FPUControlWord;
  
  uVar3 = 0;
  if (_X86_cw != (uint *)0x0) {
    if ((in_FPUControlWord & 1) != 0) {
      uVar3 = 0x10;
    }
    if ((in_FPUControlWord & 4) != 0) {
      uVar3 = uVar3 | 8;
    }
    if ((in_FPUControlWord & 8) != 0) {
      uVar3 = uVar3 | 4;
    }
    if ((in_FPUControlWord & 0x10) != 0) {
      uVar3 = uVar3 | 2;
    }
    if ((in_FPUControlWord & 0x20) != 0) {
      uVar3 = uVar3 | 1;
    }
    if ((in_FPUControlWord & 2) != 0) {
      uVar3 = uVar3 | 0x80000;
    }
    uVar2 = in_FPUControlWord & 0xc00;
    if ((in_FPUControlWord & 0xc00) != 0) {
      if (uVar2 == 0x400) {
        uVar3 = uVar3 | 0x100;
      }
      else if (uVar2 == 0x800) {
        uVar3 = uVar3 | 0x200;
      }
      else if (uVar2 == 0xc00) {
        uVar3 = uVar3 | 0x300;
      }
    }
    if ((in_FPUControlWord & 0x300) == 0) {
      uVar3 = uVar3 | 0x20000;
    }
    else if ((in_FPUControlWord & 0x300) == 0x200) {
      uVar3 = uVar3 | 0x10000;
    }
    if ((in_FPUControlWord & 0x1000) != 0) {
      uVar3 = uVar3 | 0x40000;
    }
    uVar4 = ~_Mask & uVar3 | _NewValue & _Mask;
    if (uVar4 != uVar3) {
      uVar3 = __hw_cw();
      uVar4 = 0;
      if ((uVar3 & 1) != 0) {
        uVar4 = 0x10;
      }
      if ((uVar3 & 4) != 0) {
        uVar4 = uVar4 | 8;
      }
      if ((uVar3 & 8) != 0) {
        uVar4 = uVar4 | 4;
      }
      if ((uVar3 & 0x10) != 0) {
        uVar4 = uVar4 | 2;
      }
      if ((uVar3 & 0x20) != 0) {
        uVar4 = uVar4 | 1;
      }
      if ((uVar3 & 2) != 0) {
        uVar4 = uVar4 | 0x80000;
      }
      uVar1 = uVar3 & 0xc00;
      if (uVar1 != 0) {
        if (uVar1 == 0x400) {
          uVar4 = uVar4 | 0x100;
        }
        else if (uVar1 == 0x800) {
          uVar4 = uVar4 | 0x200;
        }
        else if (uVar1 == 0xc00) {
          uVar4 = uVar4 | 0x300;
        }
      }
      if ((uVar3 & 0x300) == 0) {
        uVar4 = uVar4 | 0x20000;
      }
      else if ((uVar3 & 0x300) == 0x200) {
        uVar4 = uVar4 | 0x10000;
      }
      if ((uVar3 & 0x1000) != 0) {
        uVar4 = uVar4 | 0x40000;
      }
    }
    *_X86_cw = uVar4;
  }
  if (_Sse2_cw != (uint *)0x0) {
    uVar3 = 0;
    if (DAT_1109fe90 == 0) {
      *_Sse2_cw = 0;
    }
    else {
      if ((char)MXCSR < '\0') {
        uVar3 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar3 = uVar3 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar3 = uVar3 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar3 = uVar3 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar3 = uVar3 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar3 = uVar3 | 0x80000;
      }
      uVar4 = MXCSR & 0x6000;
      if (uVar4 != 0) {
        if (uVar4 == 0x2000) {
          uVar3 = uVar3 | 0x100;
        }
        else if (uVar4 == 0x4000) {
          uVar3 = uVar3 | 0x200;
        }
        else if (uVar4 == 0x6000) {
          uVar3 = uVar3 | 0x300;
        }
      }
      uVar1 = MXCSR & 0x8040;
      if (uVar1 == 0x40) {
        uVar3 = uVar3 | 0x2000000;
      }
      else if (uVar1 == 0x8000) {
        uVar3 = uVar3 | 0x3000000;
      }
      else if (uVar1 == 0x8040) {
        uVar3 = uVar3 | 0x1000000;
      }
      uVar1 = ~(_Mask & 0x308031f) & uVar3 | _Mask & 0x308031f & _NewValue;
      if (uVar1 != uVar3) {
        uVar3 = ___hw_cw_sse2(uVar4,uVar1);
        ___set_fpsr_sse2(uVar3);
        uVar3 = 0;
        if ((char)MXCSR < '\0') {
          uVar3 = 0x10;
        }
        if ((MXCSR & 0x200) != 0) {
          uVar3 = uVar3 | 8;
        }
        if ((MXCSR & 0x400) != 0) {
          uVar3 = uVar3 | 4;
        }
        if ((MXCSR & 0x800) != 0) {
          uVar3 = uVar3 | 2;
        }
        if ((MXCSR & 0x1000) != 0) {
          uVar3 = uVar3 | 1;
        }
        if ((MXCSR & 0x100) != 0) {
          uVar3 = uVar3 | 0x80000;
        }
        uVar4 = MXCSR & 0x6000;
        if (uVar4 != 0) {
          if (uVar4 == 0x2000) {
            uVar3 = uVar3 | 0x100;
          }
          else if (uVar4 == 0x4000) {
            uVar3 = uVar3 | 0x200;
          }
          else if (uVar4 == 0x6000) {
            uVar3 = uVar3 | 0x300;
          }
        }
        uVar4 = MXCSR & 0x8040;
        if (uVar4 == 0x40) {
          uVar3 = uVar3 | 0x2000000;
        }
        else if (uVar4 == 0x8000) {
          uVar3 = uVar3 | 0x3000000;
        }
        else if (uVar4 == 0x8040) {
          uVar3 = uVar3 | 0x1000000;
        }
      }
      *_Sse2_cw = uVar3;
    }
  }
  return 1;
}


// ==== 1105423f __control87

/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 2005 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort in_FPUControlWord;
  
  uVar5 = 0;
  if ((in_FPUControlWord & 1) != 0) {
    uVar5 = 0x10;
  }
  if ((in_FPUControlWord & 4) != 0) {
    uVar5 = uVar5 | 8;
  }
  if ((in_FPUControlWord & 8) != 0) {
    uVar5 = uVar5 | 4;
  }
  if ((in_FPUControlWord & 0x10) != 0) {
    uVar5 = uVar5 | 2;
  }
  if ((in_FPUControlWord & 0x20) != 0) {
    uVar5 = uVar5 | 1;
  }
  if ((in_FPUControlWord & 2) != 0) {
    uVar5 = uVar5 | 0x80000;
  }
  uVar1 = in_FPUControlWord & 0xc00;
  if ((in_FPUControlWord & 0xc00) != 0) {
    if (uVar1 == 0x400) {
      uVar5 = uVar5 | 0x100;
    }
    else if (uVar1 == 0x800) {
      uVar5 = uVar5 | 0x200;
    }
    else if (uVar1 == 0xc00) {
      uVar5 = uVar5 | 0x300;
    }
  }
  if ((in_FPUControlWord & 0x300) == 0) {
    uVar5 = uVar5 | 0x20000;
  }
  else if ((in_FPUControlWord & 0x300) == 0x200) {
    uVar5 = uVar5 | 0x10000;
  }
  if ((in_FPUControlWord & 0x1000) != 0) {
    uVar5 = uVar5 | 0x40000;
  }
  uVar2 = ~_Mask & uVar5 | _NewValue & _Mask;
  if (uVar2 != uVar5) {
    uVar5 = __hw_cw();
    uVar2 = 0;
    if ((uVar5 & 1) != 0) {
      uVar2 = 0x10;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = uVar2 | 8;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((uVar5 & 0x10) != 0) {
      uVar2 = uVar2 | 2;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = uVar2 | 1;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = uVar2 | 0x80000;
    }
    uVar3 = uVar5 & 0xc00;
    if (uVar3 != 0) {
      if (uVar3 == 0x400) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar3 == 0x800) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar3 == 0xc00) {
        uVar2 = uVar2 | 0x300;
      }
    }
    if ((uVar5 & 0x300) == 0) {
      uVar2 = uVar2 | 0x20000;
    }
    else if ((uVar5 & 0x300) == 0x200) {
      uVar2 = uVar2 | 0x10000;
    }
    if ((uVar5 & 0x1000) != 0) {
      uVar2 = uVar2 | 0x40000;
    }
  }
  if (DAT_1109fe90 != 0) {
    uVar5 = 0;
    if ((char)MXCSR < '\0') {
      uVar5 = 0x10;
    }
    if ((MXCSR & 0x200) != 0) {
      uVar5 = uVar5 | 8;
    }
    if ((MXCSR & 0x400) != 0) {
      uVar5 = uVar5 | 4;
    }
    if ((MXCSR & 0x800) != 0) {
      uVar5 = uVar5 | 2;
    }
    if ((MXCSR & 0x1000) != 0) {
      uVar5 = uVar5 | 1;
    }
    if ((MXCSR & 0x100) != 0) {
      uVar5 = uVar5 | 0x80000;
    }
    uVar3 = MXCSR & 0x6000;
    if (uVar3 != 0) {
      if (uVar3 == 0x2000) {
        uVar5 = uVar5 | 0x100;
      }
      else if (uVar3 == 0x4000) {
        uVar5 = uVar5 | 0x200;
      }
      else if (uVar3 == 0x6000) {
        uVar5 = uVar5 | 0x300;
      }
    }
    uVar4 = MXCSR & 0x8040;
    if (uVar4 == 0x40) {
      uVar5 = uVar5 | 0x2000000;
    }
    else if (uVar4 == 0x8000) {
      uVar5 = uVar5 | 0x3000000;
    }
    else if (uVar4 == 0x8040) {
      uVar5 = uVar5 | 0x1000000;
    }
    uVar4 = ~(_Mask & 0x308031f) & uVar5 | _Mask & 0x308031f & _NewValue;
    if (uVar4 != uVar5) {
      uVar5 = ___hw_cw_sse2(uVar3,uVar4);
      ___set_fpsr_sse2(uVar5);
      uVar5 = 0;
      if ((char)MXCSR < '\0') {
        uVar5 = 0x10;
      }
      if ((MXCSR & 0x200) != 0) {
        uVar5 = uVar5 | 8;
      }
      if ((MXCSR & 0x400) != 0) {
        uVar5 = uVar5 | 4;
      }
      if ((MXCSR & 0x800) != 0) {
        uVar5 = uVar5 | 2;
      }
      if ((MXCSR & 0x1000) != 0) {
        uVar5 = uVar5 | 1;
      }
      if ((MXCSR & 0x100) != 0) {
        uVar5 = uVar5 | 0x80000;
      }
      uVar3 = MXCSR & 0x6000;
      if (uVar3 != 0) {
        if (uVar3 == 0x2000) {
          uVar5 = uVar5 | 0x100;
        }
        else if (uVar3 == 0x4000) {
          uVar5 = uVar5 | 0x200;
        }
        else if (uVar3 == 0x6000) {
          uVar5 = uVar5 | 0x300;
        }
      }
      uVar3 = MXCSR & 0x8040;
      if (uVar3 == 0x40) {
        uVar5 = uVar5 | 0x2000000;
      }
      else if (uVar3 == 0x8000) {
        uVar5 = uVar5 | 0x3000000;
      }
      else if (uVar3 == 0x8040) {
        uVar5 = uVar5 | 0x1000000;
      }
    }
    uVar3 = uVar5 ^ uVar2;
    uVar2 = uVar5 | uVar2;
    if ((uVar3 & 0x8031f) != 0) {
      uVar2 = uVar2 | 0x80000000;
    }
  }
  return uVar2;
}


// ==== 1105484b __get_daylight

/* Library Function - Single Match
    __get_daylight
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __get_daylight(int *_Daylight)

{
  undefined4 *puVar1;
  
  if (_Daylight == (int *)0x0) {
    puVar1 = (undefined4 *)FUN_110491c7();
    *puVar1 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *_Daylight = DAT_1109b9d4;
  return 0;
}


// ==== 1105487f __get_dstbias

/* Library Function - Single Match
    __get_dstbias
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __get_dstbias(long *_Daylight_savings_bias)

{
  undefined4 *puVar1;
  
  if (_Daylight_savings_bias == (long *)0x0) {
    puVar1 = (undefined4 *)FUN_110491c7();
    *puVar1 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *_Daylight_savings_bias = DAT_1109b9d8;
  return 0;
}


// ==== 110548b3 FUN_110548b3

undefined4 __cdecl FUN_110548b3(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_110491c7();
    *puVar1 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *param_1 = DAT_1109b9d0;
  return 0;
}


// ==== 110548e7 __get_tzname

/* Library Function - Single Match
    __get_tzname
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __get_tzname(size_t *_ReturnValue,char *_Buffer,size_t _SizeInBytes,int _Index)

{
  undefined4 *puVar1;
  size_t sVar2;
  errno_t eVar3;
  
  if (_Buffer == (char *)0x0) {
    if (_SizeInBytes != 0) goto LAB_11054934;
  }
  else if (_SizeInBytes == 0) {
LAB_11054934:
    puVar1 = (undefined4 *)FUN_110491c7();
    *puVar1 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  if (_Buffer != (char *)0x0) {
    *_Buffer = '\0';
  }
  if ((_ReturnValue == (size_t *)0x0) || ((_Index != 0 && (_Index != 1)))) {
    puVar1 = (undefined4 *)FUN_110491c7();
    eVar3 = 0x16;
    *puVar1 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    sVar2 = _strlen((&PTR_DAT_1109ba60)[_Index]);
    *_ReturnValue = sVar2 + 1;
    if (_Buffer == (char *)0x0) {
      eVar3 = 0;
    }
    else if (_SizeInBytes < sVar2 + 1) {
      eVar3 = 0x22;
    }
    else {
      eVar3 = _strcpy_s(_Buffer,_SizeInBytes,(&PTR_DAT_1109ba60)[_Index]);
    }
  }
  return eVar3;
}


// ==== 11054989 FUN_11054989

undefined4 * FUN_11054989(void)

{
  return &DAT_1109b9d4;
}


// ==== 1105498f FUN_1105498f

undefined4 * FUN_1105498f(void)

{
  return &DAT_1109b9d8;
}


// ==== 11054995 FUN_11054995

undefined4 * FUN_11054995(void)

{
  return &DAT_1109b9d0;
}


// ==== 1105499b FUN_1105499b

undefined ** FUN_1105499b(void)

{
  return &PTR_DAT_1109ba60;
}


// ==== 110549c5 FUN_110549c5

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void FUN_110549c5(void)

{
  char cVar1;
  char cVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  errno_t eVar6;
  UINT CodePage;
  char *_Str1;
  size_t sVar7;
  DWORD DVar8;
  int *piVar9;
  long lVar10;
  char *pcVar11;
  int local_34;
  int local_30;
  long local_2c;
  int local_28;
  undefined **local_24;
  int local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_1108a000;
  uStack_c = 0x110549d1;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_2c = 0;
  local_24 = (undefined **)0x0;
  __lock(7);
  local_8 = (undefined *)0x0;
  local_24 = FUN_1105499b();
  iVar5 = FUN_110548b3(local_20);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar6 = __get_daylight(&local_28);
  if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar6 = __get_dstbias(&local_2c);
  if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  CodePage = ____lc_codepage_func();
  DAT_1109fc9c = 0;
  DAT_1109ba74 = 0xffffffff;
  DAT_1109ba68 = 0xffffffff;
  _Str1 = __getenv_helper_nolock(&DAT_11076744);
  if ((_Str1 == (char *)0x0) || (*_Str1 == '\0')) {
    if (DAT_1109fca0 != (char *)0x0) {
      _free(DAT_1109fca0);
      DAT_1109fca0 = (char *)0x0;
    }
    DVar8 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_1109fbf0);
    if (DVar8 != 0xffffffff) {
      DAT_1109fc9c = 1;
      local_20[0] = DAT_1109fbf0 * 0x3c;
      if (DAT_1109fc36 != 0) {
        local_20[0] = local_20[0] + DAT_1109fc44 * 0x3c;
      }
      if ((DAT_1109fc8a == 0) || (DAT_1109fc98 == 0)) {
        local_28 = 0;
        local_2c = 0;
      }
      else {
        local_28 = 1;
        local_2c = (DAT_1109fc98 - DAT_1109fc44) * 0x3c;
      }
      iVar5 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_1109fbf4,-1,*local_24,0x3f,(LPCSTR)0x0,
                                  &local_34);
      if ((iVar5 == 0) || (local_34 != 0)) {
        **local_24 = 0;
      }
      else {
        (*local_24)[0x3f] = 0;
      }
      iVar5 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_1109fc48,-1,local_24[1],0x3f,(LPCSTR)0x0,
                                  &local_34);
      if ((iVar5 == 0) || (local_34 != 0)) {
        *local_24[1] = 0;
      }
      else {
        local_24[1][0x3f] = 0;
      }
    }
  }
  else {
    if (DAT_1109fca0 != (char *)0x0) {
      iVar5 = _strcmp(_Str1,DAT_1109fca0);
      if (iVar5 == 0) goto LAB_11054be1;
      if (DAT_1109fca0 != (char *)0x0) {
        _free(DAT_1109fca0);
      }
    }
    sVar7 = _strlen(_Str1);
    DAT_1109fca0 = __malloc_crt(sVar7 + 1);
    if (DAT_1109fca0 != (char *)0x0) {
      pcVar11 = _Str1;
      sVar7 = _strlen(_Str1);
      eVar6 = _strcpy_s(DAT_1109fca0,sVar7 + 1,pcVar11);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_11054be8;
    }
  }
LAB_11054be1:
  local_30 = 1;
LAB_11054be8:
  iVar4 = local_20[0];
  piVar9 = FUN_11054995();
  iVar5 = local_28;
  *piVar9 = iVar4;
  piVar9 = FUN_11054989();
  lVar10 = local_2c;
  *piVar9 = iVar5;
  piVar9 = FUN_1105498f();
  *piVar9 = lVar10;
  local_8 = (undefined *)0xfffffffe;
  FUN_11054c74();
  ppuVar3 = local_24;
  if (local_30 == 0) {
    eVar6 = _strncpy_s(*local_24,0x40,_Str1,3);
    if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    pcVar11 = _Str1 + 3;
    cVar1 = *pcVar11;
    if (cVar1 == '-') {
      pcVar11 = _Str1 + 4;
    }
    lVar10 = _atol(pcVar11);
    local_20[0] = lVar10 * 0xe10;
    for (; (cVar2 = *pcVar11, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
        pcVar11 = pcVar11 + 1) {
    }
    if (*pcVar11 == ':') {
      pcVar11 = pcVar11 + 1;
      lVar10 = _atol(pcVar11);
      local_20[0] = local_20[0] + lVar10 * 0x3c;
      for (; ('/' < *pcVar11 && (*pcVar11 < ':')); pcVar11 = pcVar11 + 1) {
      }
      if (*pcVar11 == ':') {
        pcVar11 = pcVar11 + 1;
        lVar10 = _atol(pcVar11);
        local_20[0] = local_20[0] + lVar10;
        for (; ('/' < *pcVar11 && (*pcVar11 < ':')); pcVar11 = pcVar11 + 1) {
        }
      }
    }
    if (cVar1 == '-') {
      local_20[0] = -local_20[0];
    }
    local_28 = (int)*pcVar11;
    if (local_28 == 0) {
      *ppuVar3[1] = 0;
    }
    else {
      eVar6 = _strncpy_s(ppuVar3[1],0x40,pcVar11,3);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    iVar4 = local_20[0];
    piVar9 = FUN_11054995();
    iVar5 = local_28;
    *piVar9 = iVar4;
    piVar9 = FUN_11054989();
    *piVar9 = iVar5;
  }
  return;
}


// ==== 11054c74 FUN_11054c74

void FUN_11054c74(void)

{
  FUN_110406e7(7);
  return;
}


// ==== 11054d0e cvtdate

/* Library Function - Single Match
    _cvtdate
   
   Library: Visual Studio 2005 Release */

int __cdecl
cvtdate(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
       int param_8,int param_9)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  errno_t eVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  long local_8;
  
  local_8 = 0;
  if (param_2 == 1) {
    uVar1 = param_3 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
      iVar4 = (&DAT_1109bd54)[in_EAX];
    }
    else {
      iVar4 = *(int *)(&DAT_1109bd88 + in_EAX * 4);
    }
    iVar6 = iVar4 + 1;
    iVar5 = (int)(param_3 * 0x16d + -0x63db +
                 ((int)((param_3 - 1) + ((int)(param_3 - 1) >> 0x1f & 3U)) >> 2) + iVar6 +
                 ((int)(param_3 + 299) / 400 - (int)(param_3 - 1) / 100)) % 7;
    iVar2 = (param_4 * 7 - iVar5) + param_5;
    if (iVar5 <= param_5) {
      iVar6 = iVar4 + -6;
    }
    iVar6 = iVar6 + iVar2;
    if (param_4 == 5) {
      if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
        iVar2 = *(int *)(&DAT_1109bd58 + in_EAX * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_1109bd8c + in_EAX * 4);
      }
      if (iVar2 < iVar6) {
        iVar6 = iVar6 + -7;
      }
    }
  }
  else {
    uVar1 = param_3 & 0x80000003;
    bVar7 = uVar1 == 0;
    if ((int)uVar1 < 0) {
      bVar7 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (((bVar7) && (iVar2 = (int)param_3 / 100, (int)param_3 % 100 != 0)) ||
       (iVar2 = (int)(param_3 + 0x76c) / 400, (int)(param_3 + 0x76c) % 400 == 0)) {
      iVar6 = (&DAT_1109bd54)[in_EAX];
    }
    else {
      iVar6 = *(int *)(&DAT_1109bd88 + in_EAX * 4);
    }
    iVar6 = iVar6 + param_6;
  }
  iVar4 = ((in_ECX * 0x3c + param_7) * 0x3c + param_8) * 1000 + param_9;
  if (param_1 == 1) {
    DAT_1109ba68 = param_3;
    DAT_1109ba6c = iVar6;
    DAT_1109ba70 = iVar4;
  }
  else {
    DAT_1109ba78 = iVar6;
    DAT_1109ba7c = iVar4;
    eVar3 = __get_dstbias(&local_8);
    if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar2 = local_8 * 1000;
    DAT_1109ba7c = DAT_1109ba7c + iVar2;
    if (DAT_1109ba7c < 0) {
      DAT_1109ba7c = DAT_1109ba7c + 86400000;
      DAT_1109ba78 = DAT_1109ba78 + -1;
    }
    else {
      iVar2 = 86400000;
      if (86399999 < DAT_1109ba7c) {
        DAT_1109ba7c = DAT_1109ba7c + -86400000;
        DAT_1109ba78 = DAT_1109ba78 + 1;
      }
    }
    DAT_1109ba74 = param_3;
  }
  return iVar2;
}


// ==== 11054f03 __isindst_nolock

/* Library Function - Single Match
    __isindst_nolock
   
   Library: Visual Studio 2005 Release */

bool __isindst_nolock(void)

{
  int iVar1;
  bool bVar2;
  errno_t eVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *unaff_EDI;
  uint uVar7;
  uint uVar8;
  int local_8;
  
  local_8 = 0;
  eVar3 = __get_daylight(&local_8);
  if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_8 == 0) {
    return false;
  }
  uVar7 = unaff_EDI[5];
  if ((uVar7 != DAT_1109ba68) || (uVar7 != DAT_1109ba74)) {
    if (DAT_1109fc9c == 0) {
      cvtdate(1,1,uVar7,1,0,0,0,0,0);
      cvtdate(0,1,unaff_EDI[5],5,0,0,0,0,0);
    }
    else {
      if (DAT_1109fc88 != 0) {
        uVar8 = (uint)DAT_1109fc8e;
        uVar4 = 0;
        uVar5 = 0;
      }
      else {
        uVar4 = (uint)DAT_1109fc8c;
        uVar8 = 0;
        uVar5 = (uint)DAT_1109fc8e;
      }
      cvtdate(1,(uint)(DAT_1109fc88 == 0),uVar7,uVar5,uVar4,uVar8,(uint)DAT_1109fc92,
              (uint)DAT_1109fc94,(uint)DAT_1109fc96);
      if (DAT_1109fc34 != 0) {
        uVar8 = (uint)DAT_1109fc3a;
        uVar4 = 0;
        uVar5 = 0;
        uVar7 = unaff_EDI[5];
      }
      else {
        uVar4 = (uint)DAT_1109fc38;
        uVar8 = 0;
        uVar5 = (uint)DAT_1109fc3a;
        uVar7 = unaff_EDI[5];
      }
      cvtdate(0,(uint)(DAT_1109fc34 == 0),uVar7,uVar5,uVar4,uVar8,(uint)DAT_1109fc3e,
              (uint)DAT_1109fc40,(uint)DAT_1109fc42);
    }
  }
  iVar1 = unaff_EDI[7];
  if (DAT_1109ba6c < DAT_1109ba78) {
    if ((iVar1 < DAT_1109ba6c) || (DAT_1109ba78 < iVar1)) {
      return false;
    }
    if ((DAT_1109ba6c < iVar1) && (iVar1 < DAT_1109ba78)) {
      return true;
    }
  }
  else {
    if (iVar1 < DAT_1109ba78) {
      return true;
    }
    if (DAT_1109ba6c < iVar1) {
      return true;
    }
    if ((DAT_1109ba78 < iVar1) && (iVar1 < DAT_1109ba6c)) {
      return false;
    }
  }
  iVar6 = ((unaff_EDI[2] * 0x3c + unaff_EDI[1]) * 0x3c + *unaff_EDI) * 1000;
  if (iVar1 == DAT_1109ba6c) {
    bVar2 = DAT_1109ba70 <= iVar6;
  }
  else {
    bVar2 = iVar6 < DAT_1109ba7c;
  }
  return bVar2;
}


// ==== 110550b1 ___tzset

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tzset
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___tzset(void)

{
  if (DAT_1109fca4 == 0) {
    __lock(6);
    if (DAT_1109fca4 == 0) {
      FUN_110549c5();
      DAT_1109fca4 = DAT_1109fca4 + 1;
    }
    FUN_110550f7();
  }
  return;
}


// ==== 110550f7 FUN_110550f7

void FUN_110550f7(void)

{
  FUN_110406e7(6);
  return;
}


// ==== 11055179 ___ascii_stricmp

/* Library Function - Single Match
    ___ascii_stricmp
   
   Library: Visual Studio 2005 Release */

int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2)

{
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = (uint)(byte)*_Str1;
    _Str1 = _Str1 + 1;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 + 0x20;
    }
    uVar2 = (uint)(byte)*_Str2;
    _Str2 = _Str2 + 1;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 + 0x20;
    }
  } while ((uVar1 != 0) && (uVar1 == uVar2));
  return uVar1 - uVar2;
}


// ==== 110551ae __stricmp_l

/* Library Function - Single Match
    __stricmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __stricmp_l(char *_Str1,char *_Str2,_locale_t _Locale)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_Str1 == (char *)0x0) {
    puVar1 = (undefined4 *)FUN_110491c7();
    *puVar1 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else if (_Str2 == (char *)0x0) {
    puVar1 = (undefined4 *)FUN_110491c7();
    *puVar1 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else {
    if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
      iVar2 = ___ascii_stricmp(_Str1,_Str2);
    }
    else {
      do {
        iVar2 = __tolower_l((uint)(byte)*_Str1,&local_14);
        _Str1 = _Str1 + 1;
        iVar3 = __tolower_l((uint)(byte)*_Str2,&local_14);
        _Str2 = _Str2 + 1;
        if (iVar2 == 0) break;
      } while (iVar2 == iVar3);
      iVar2 = iVar2 - iVar3;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return iVar2;
}


// ==== 11055281 __stricmp

/* Library Function - Single Match
    __stricmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __stricmp(char *_Str1,char *_Str2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_1109fb18 == 0) {
    if ((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) {
      iVar2 = ___ascii_stricmp(_Str1,_Str2);
      return iVar2;
    }
    puVar1 = (undefined4 *)FUN_110491c7();
    *puVar1 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = __stricmp_l(_Str1,_Str2,(_locale_t)0x0);
  }
  return iVar2;
}


// ==== 110552d1 __strnicmp_l

/* Library Function - Single Match
    __strnicmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __strnicmp_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  if (_MaxCount == 0) {
    iVar2 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
    if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
      puVar1 = (undefined4 *)FUN_110491c7();
      *puVar1 = 0x16;
      FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar2 = 0x7fffffff;
    }
    else if (_MaxCount < 0x80000000) {
      if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
        iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
      }
      else {
        do {
          iVar2 = __tolower_l((uint)(byte)*_Str1,&local_14);
          _Str1 = _Str1 + 1;
          iVar3 = __tolower_l((uint)(byte)*_Str2,&local_14);
          _Str2 = _Str2 + 1;
          _MaxCount = _MaxCount - 1;
          if ((_MaxCount == 0) || (iVar2 == 0)) break;
        } while (iVar2 == iVar3);
        iVar2 = iVar2 - iVar3;
      }
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
    }
    else {
      puVar1 = (undefined4 *)FUN_110491c7();
      *puVar1 = 0x16;
      FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar2 = 0x7fffffff;
    }
  }
  return iVar2;
}


// ==== 110553c1 __strnicmp

/* Library Function - Single Match
    __strnicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_1109fb18 == 0) {
    if (((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) && (_MaxCount < 0x80000000)) {
      iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
      return iVar2;
    }
    puVar1 = (undefined4 *)FUN_110491c7();
    *puVar1 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = __strnicmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  }
  return iVar2;
}


// ==== 1105541d xtoa_s

/* Library Function - Single Match
    _xtoa_s@20
   
   Library: Visual Studio 2005 Release
   __stdcall xtoa_s,20 */

undefined4 xtoa_s(uint param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  uint in_EAX;
  undefined4 *puVar3;
  char *in_ECX;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint local_8;
  
  if (in_ECX == (char *)0x0) {
    puVar3 = (undefined4 *)FUN_110491c7();
    *puVar3 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  if (param_1 == 0) {
LAB_1105544f:
    puVar3 = (undefined4 *)FUN_110491c7();
    uVar7 = 0x16;
  }
  else {
    *in_ECX = '\0';
    if ((param_3 != 0) + 1 < param_1) {
      if (0x22 < param_2 - 2) goto LAB_1105544f;
      pcVar6 = in_ECX;
      if (param_3 != 0) {
        *in_ECX = '-';
        pcVar6 = in_ECX + 1;
        in_EAX = -in_EAX;
      }
      local_8 = (uint)(param_3 != 0);
      pcVar2 = pcVar6;
      do {
        pcVar4 = pcVar2;
        uVar1 = (ulonglong)in_EAX;
        in_EAX = in_EAX / param_2;
        cVar5 = (char)(uVar1 % (ulonglong)param_2);
        if ((uint)(uVar1 % (ulonglong)param_2) < 10) {
          cVar5 = cVar5 + '0';
        }
        else {
          cVar5 = cVar5 + 'W';
        }
        *pcVar4 = cVar5;
        local_8 = local_8 + 1;
      } while ((in_EAX != 0) && (pcVar2 = pcVar4 + 1, local_8 < param_1));
      if (local_8 < param_1) {
        pcVar4[1] = '\0';
        do {
          cVar5 = *pcVar4;
          *pcVar4 = *pcVar6;
          pcVar4 = pcVar4 + -1;
          *pcVar6 = cVar5;
          pcVar6 = pcVar6 + 1;
        } while (pcVar6 < pcVar4);
        return 0;
      }
      *in_ECX = '\0';
    }
    puVar3 = (undefined4 *)FUN_110491c7();
    uVar7 = 0x22;
  }
  *puVar3 = uVar7;
  FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return uVar7;
}


// ==== 110554f8 __itoa_s

/* Library Function - Single Match
    __itoa_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __itoa_s(int _Value,char *_DstBuf,size_t _Size,int _Radix)

{
  errno_t eVar1;
  int iVar2;
  
  if ((_Radix == 10) && (_Value < 0)) {
    iVar2 = 1;
    _Radix = 10;
  }
  else {
    iVar2 = 0;
  }
  eVar1 = xtoa_s(_Size,_Radix,iVar2);
  return eVar1;
}


// ==== 11055520 __ltoa_s

/* Library Function - Single Match
    __ltoa_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __ltoa_s(long _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  int iVar1;
  errno_t eVar2;
  
  iVar1 = 0;
  if ((_Radix == 10) && (_Val < 0)) {
    iVar1 = 1;
  }
  eVar2 = xtoa_s(_Size,_Radix,iVar1);
  return eVar2;
}


// ==== 1105555d x64toa_s

/* Library Function - Single Match
    @x64toa_s@24
   
   Library: Visual Studio 2005 Release
   __fastcall x64toa_s,24 */

undefined4 __fastcall
x64toa_s(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6,
        char *param_7)

{
  char *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  uint extraout_ECX;
  char *pcVar4;
  char *unaff_EDI;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  uint local_8;
  
  if ((unaff_EDI == (char *)0x0) || (param_5 == 0)) {
LAB_1105556b:
    puVar2 = (undefined4 *)FUN_110491c7();
    uVar8 = 0x16;
  }
  else {
    *unaff_EDI = '\0';
    if ((param_7 != (char *)0x0) + 1 < param_5) {
      if (param_6 - 2 < 0x23) {
        bVar6 = param_7 != (char *)0x0;
        param_7 = unaff_EDI;
        if (bVar6) {
          bVar5 = param_3 != 0;
          param_3 = -param_3;
          *unaff_EDI = '-';
          param_7 = unaff_EDI + 1;
          param_4 = -(param_4 + bVar5);
        }
        local_8 = (uint)bVar6;
        uVar7 = (ulonglong)param_3;
        pcVar1 = param_7;
        do {
          pcVar4 = pcVar1;
          uVar7 = __aulldvrm((uint)uVar7,param_4,param_6,0);
          param_4 = (uint)(uVar7 >> 0x20);
          if (extraout_ECX < 10) {
            cVar3 = (char)extraout_ECX + '0';
          }
          else {
            cVar3 = (char)extraout_ECX + 'W';
          }
          *pcVar4 = cVar3;
          local_8 = local_8 + 1;
        } while ((uVar7 != 0) && (pcVar1 = pcVar4 + 1, local_8 < param_5));
        if (local_8 < param_5) {
          pcVar4[1] = '\0';
          do {
            cVar3 = *pcVar4;
            *pcVar4 = *param_7;
            pcVar4 = pcVar4 + -1;
            *param_7 = cVar3;
            param_7 = param_7 + 1;
          } while (param_7 < pcVar4);
          return 0;
        }
        *unaff_EDI = '\0';
        puVar2 = (undefined4 *)FUN_110491c7();
        uVar8 = 0x22;
        *puVar2 = 0x22;
        goto LAB_11055575;
      }
      goto LAB_1105556b;
    }
    puVar2 = (undefined4 *)FUN_110491c7();
    uVar8 = 0x22;
  }
  *puVar2 = uVar8;
LAB_11055575:
  FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return uVar8;
}


// ==== 11055653 __i64toa_s

/* Library Function - Single Match
    __i64toa_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __i64toa_s(longlong _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  char *pcVar1;
  errno_t eVar2;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  pcVar1 = (char *)0x0;
  if (((_Radix == 10) && (_Val < 0x100000000)) && (_Val < 0)) {
    pcVar1 = (char *)0x1;
  }
  eVar2 = x64toa_s(in_ECX,in_EDX,(uint)_Val,_Val._4_4_,_Size,_Radix,pcVar1);
  return eVar2;
}


// ==== 11055686 __ui64toa_s

/* Library Function - Single Match
    __ui64toa_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __ui64toa_s(ulonglong _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  errno_t eVar1;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  eVar1 = x64toa_s(in_ECX,in_EDX,(uint)_Val,_Val._4_4_,_Size,_Radix,(char *)0x0);
  return eVar1;
}


// ==== 110556a3 ___ansicp

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 110556ea ___convertcp

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___convertcp
   
   Library: Visual Studio 2005 Release */

void __cdecl
___convertcp(UINT param_1,UINT param_2,char *param_3,uint *param_4,LPSTR param_5,int param_6)

{
  uint _Size;
  uint cbMultiByte;
  bool bVar1;
  BOOL BVar2;
  size_t sVar3;
  undefined4 *puVar4;
  int iVar5;
  LPSTR lpMultiByteStr;
  uint uVar6;
  bool bVar7;
  LPCWSTR local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_1105588a;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_1105588a;
  }
  else {
    bVar1 = true;
    uVar6 = cbMultiByte;
    if (cbMultiByte == 0xffffffff) {
      sVar3 = _strlen(param_3);
      uVar6 = sVar3 + 1;
    }
    bVar7 = uVar6 == 0;
  }
  if ((bVar7 || (int)uVar6 < 0) || (0x7ffffff0 < uVar6)) {
    local_20 = (LPCWSTR)0x0;
  }
  else {
    _Size = uVar6 * 2 + 8;
    if (_Size < 0x401) {
      puVar4 = (undefined4 *)&stack0xffffffbc;
      local_20 = (LPCWSTR)&stack0xffffffbc;
      if (&stack0x00000000 != (undefined1 *)0x44) {
LAB_110557ca:
        local_20 = (LPCWSTR)(puVar4 + 2);
      }
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPCWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_110557ca;
      }
    }
  }
  if (local_20 != (LPCWSTR)0x0) {
    _memset(local_20,0,uVar6 * 2);
    iVar5 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,local_20,uVar6);
    if (iVar5 != 0) {
      if (param_5 == (LPSTR)0x0) {
        if (((bVar1) ||
            (uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,(LPSTR)0x0,0,(LPCSTR)0x0,
                                         (LPBOOL)0x0), uVar6 != 0)) &&
           (lpMultiByteStr = __calloc_crt(1,uVar6), lpMultiByteStr != (LPSTR)0x0)) {
          uVar6 = WideCharToMultiByte(param_2,0,local_20,uVar6,lpMultiByteStr,uVar6,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
          if (uVar6 == 0) {
            _free(lpMultiByteStr);
          }
          else if (cbMultiByte != 0xffffffff) {
            *param_4 = uVar6;
          }
        }
      }
      else {
        WideCharToMultiByte(param_2,0,local_20,uVar6,param_5,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
      }
    }
    __freea(local_20);
  }
LAB_1105588a:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1105589c strtoxl

/* Library Function - Single Match
    unsigned long __cdecl strtoxl(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2005 Release */

ulong __cdecl
strtoxl(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  uint uVar4;
  pthreadlocinfo ptVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  uint local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,param_1);
  if (param_3 != (char **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    puVar3 = (undefined4 *)FUN_110491c7();
    *puVar3 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  bVar8 = *param_2;
  local_8 = 0;
  ptVar5 = local_18.locinfo;
  pbVar2 = (byte *)param_2;
  while( true ) {
    pbVar9 = pbVar2 + 1;
    if ((int)ptVar5->locale_name[3] < 2) {
      uVar4 = (byte)ptVar5[1].lc_category[0].locale[(uint)bVar8 * 2] & 8;
    }
    else {
      uVar4 = __isctype_l((uint)bVar8,8,&local_18);
      ptVar5 = local_18.locinfo;
    }
    if (uVar4 == 0) break;
    bVar8 = *pbVar9;
    pbVar2 = pbVar9;
  }
  if (bVar8 == 0x2d) {
    param_5 = param_5 | 2;
LAB_11055953:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_11055953;
  if (((param_4 < 0) || (param_4 == 1)) || (0x24 < param_4)) {
    if (param_3 != (char **)0x0) {
      *param_3 = param_2;
    }
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if (param_4 == 0) {
    if (bVar8 != 0x30) {
      param_4 = 10;
      goto LAB_110559b9;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_110559b9;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_110559b9;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_110559b9:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_11055a13:
        pbVar9 = pbVar9 + -1;
        if ((param_5 & 8U) == 0) {
          if (param_3 != (char **)0x0) {
            pbVar9 = (byte *)param_2;
          }
          local_8 = 0;
        }
        else if (((param_5 & 4U) != 0) ||
                (((param_5 & 1U) == 0 &&
                 ((((param_5 & 2U) != 0 && (0x80000000 < local_8)) ||
                  (((param_5 & 2U) == 0 && (0x7fffffff < local_8)))))))) {
          puVar3 = (undefined4 *)FUN_110491c7();
          *puVar3 = 0x22;
          if ((param_5 & 1U) == 0) {
            local_8 = ((param_5 & 2U) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_3 != (char **)0x0) {
          *param_3 = (char *)pbVar9;
        }
        if ((param_5 & 2U) != 0) {
          local_8 = -local_8;
        }
        if (local_c == '\0') {
          return local_8;
        }
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
        return local_8;
      }
      iVar7 = (int)(char)bVar8;
      if ((byte)(bVar8 + 0x9f) < 0x1a) {
        iVar7 = iVar7 + -0x20;
      }
      uVar6 = iVar7 - 0x37;
    }
    else {
      uVar6 = (int)(char)bVar8 - 0x30;
    }
    if ((uint)param_4 <= uVar6) goto LAB_11055a13;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_11055a13;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}


// ==== 11055ac7 _strtol

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2005 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_1109fb18 == 0) {
    ppuVar2 = &PTR_DAT_1109b140;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}


// ==== 11055b0b _strtoul

/* Library Function - Single Match
    _strtoul
   
   Library: Visual Studio 2005 Release */

ulong __cdecl _strtoul(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_1109fb18 == 0) {
    ppuVar2 = &PTR_DAT_1109b140;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,1);
  return uVar1;
}


// ==== 11055b50 strtoxq

/* Library Function - Single Match
    unsigned __int64 __cdecl strtoxq(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2005 Release */

__uint64 __cdecl
strtoxq(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint extraout_ECX;
  pthreadlocinfo ptVar6;
  byte *pbVar7;
  byte *pbVar8;
  localeinfo_struct local_3c;
  int local_34;
  char local_30;
  uint local_28;
  uint local_24;
  int local_20;
  undefined8 local_1c;
  undefined8 local_14;
  byte *local_c;
  byte local_5;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_3c,param_1);
  if (param_3 != (char **)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    puVar3 = (undefined4 *)FUN_110491c7();
    *puVar3 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_30 != '\0') {
      *(uint *)(local_34 + 0x70) = *(uint *)(local_34 + 0x70) & 0xfffffffd;
    }
    local_14._0_4_ = 0;
    local_14._4_4_ = 0;
    goto LAB_11055de0;
  }
  local_14 = 0;
  ptVar6 = local_3c.locinfo;
  pbVar8 = (byte *)param_2;
  do {
    pbVar7 = pbVar8;
    local_5 = *pbVar7;
    pbVar8 = pbVar7 + 1;
    if ((int)ptVar6->locale_name[3] < 2) {
      uVar4 = (byte)ptVar6[1].lc_category[0].locale[(uint)local_5 * 2] & 8;
    }
    else {
      uVar4 = __isctype_l((uint)local_5,8,&local_3c);
      ptVar6 = local_3c.locinfo;
    }
  } while (uVar4 != 0);
  if (local_5 == 0x2d) {
    param_5 = param_5 | 2;
LAB_11055c0e:
    local_5 = *pbVar8;
    pbVar8 = pbVar7 + 2;
  }
  else if (local_5 == 0x2b) goto LAB_11055c0e;
  local_c = pbVar8;
  if (param_4 == 0) {
    if (local_5 != 0x30) {
      param_4 = 10;
      goto LAB_11055c63;
    }
    if ((*pbVar8 != 0x78) && (*pbVar8 != 0x58)) {
      param_4 = 8;
      goto LAB_11055c63;
    }
    param_4 = 0x10;
  }
  if (((param_4 == 0x10) && (local_5 == 0x30)) && ((*pbVar8 == 0x78 || (*pbVar8 == 0x58)))) {
    local_5 = pbVar8[1];
    local_c = pbVar8 + 2;
  }
LAB_11055c63:
  local_28 = param_4 >> 0x1f;
  local_1c = __aulldvrm(0xffffffff,0xffffffff,param_4,local_28);
  local_20 = 0;
  pcVar2 = ptVar6[1].lc_category[0].locale;
  local_24 = extraout_ECX;
  do {
    uVar1 = *(ushort *)(pcVar2 + (uint)local_5 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) break;
      iVar5 = (int)(char)local_5;
      if ((byte)(local_5 + 0x9f) < 0x1a) {
        iVar5 = iVar5 + -0x20;
      }
      uVar4 = iVar5 - 0x37;
    }
    else {
      uVar4 = (int)(char)local_5 - 0x30;
    }
    if ((uint)param_4 <= uVar4) break;
    if (((local_14._4_4_ < local_1c._4_4_) ||
        ((local_14._4_4_ == local_1c._4_4_ && ((uint)local_14 < (uint)local_1c)))) ||
       (((uint)local_14 == (uint)local_1c &&
        ((local_14._4_4_ == local_1c._4_4_ && ((local_20 != 0 || (uVar4 <= local_24)))))))) {
      local_14 = __allmul(param_4,local_28,(uint)local_14,local_14._4_4_);
      local_14 = local_14 + (ulonglong)uVar4;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) break;
    }
    local_5 = *local_c;
    local_c = local_c + 1;
  } while( true );
  local_c = local_c + -1;
  if ((param_5 & 8U) == 0) {
    if (param_3 != (char **)0x0) {
      local_c = (byte *)param_2;
    }
    local_14 = 0;
  }
  else if (((param_5 & 4U) != 0) ||
          (((param_5 & 1U) == 0 &&
           ((((param_5 & 2U) != 0 &&
             ((0x80000000 < local_14._4_4_ ||
              ((0x7fffffff < local_14._4_4_ && ((uint)local_14 != 0)))))) ||
            (((param_5 & 2U) == 0 &&
             ((0x7ffffffe < local_14._4_4_ && (0x7fffffff < local_14._4_4_)))))))))) {
    puVar3 = (undefined4 *)FUN_110491c7();
    *puVar3 = 0x22;
    if ((param_5 & 1U) == 0) {
      if ((param_5 & 2U) == 0) {
        local_14 = 0x7fffffffffffffff;
      }
      else {
        local_14 = -0x8000000000000000;
      }
    }
    else {
      local_14 = -1;
    }
  }
  if (param_3 != (char **)0x0) {
    *param_3 = (char *)local_c;
  }
  if ((param_5 & 2U) != 0) {
    local_14 = CONCAT44(-(local_14._4_4_ + ((uint)local_14 != 0)),-(uint)local_14);
  }
  if (local_30 != '\0') {
    *(uint *)(local_34 + 0x70) = *(uint *)(local_34 + 0x70) & 0xfffffffd;
  }
LAB_11055de0:
  return CONCAT44(local_14._4_4_,(uint)local_14);
}


// ==== 11055de4 __strtoi64

/* Library Function - Single Match
    __strtoi64
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __strtoi64(char *_String,char **_EndPtr,int _Radix)

{
  __uint64 _Var1;
  undefined **ppuVar2;
  
  if (DAT_1109fb18 == 0) {
    ppuVar2 = &PTR_DAT_1109b140;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  _Var1 = strtoxq((localeinfo_struct *)ppuVar2,_String,_EndPtr,_Radix,0);
  return _Var1;
}


// ==== 11055e28 __strtoui64

/* Library Function - Single Match
    __strtoui64
   
   Library: Visual Studio 2005 Release */

ulonglong __cdecl __strtoui64(char *_String,char **_EndPtr,int _Radix)

{
  __uint64 _Var1;
  undefined **ppuVar2;
  
  if (DAT_1109fb18 == 0) {
    ppuVar2 = &PTR_DAT_1109b140;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  _Var1 = strtoxq((localeinfo_struct *)ppuVar2,_String,_EndPtr,_Radix,1);
  return _Var1;
}


// ==== 11055e6d __iswctype_l

/* Library Function - Single Match
    __iswctype_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __iswctype_l(wint_t _C,wctype_t _Type,_locale_t _Locale)

{
  int iVar1;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  ushort local_8 [2];
  
  if (_C == 0xffff) {
    local_8[0] = 0;
  }
  else if (_C < 0x100) {
    local_8[0] = *(ushort *)(PTR_DAT_1109b894 + (uint)_C * 2) & _Type;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
    iVar1 = ___crtGetStringTypeW
                      (&local_18,1,(wchar_t *)&_C,1,local_8,(local_18.locinfo)->lc_codepage,
                       (int)(local_18.locinfo)->lc_category[0].wlocale);
    if (iVar1 == 0) {
      local_8[0] = 0;
    }
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
  }
  return (uint)(local_8[0] & _Type);
}


// ==== 11055eef _iswctype

/* Library Function - Single Match
    _iswctype
   
   Library: Visual Studio 2005 Release */

int __cdecl _iswctype(wint_t _C,wctype_t _Type)

{
  int iVar1;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000000a;
  ushort local_8 [2];
  
  if (_C == 0xffff) {
    return 0;
  }
  if (_C < 0x100) {
    return (uint)(*(ushort *)(PTR_DAT_1109b894 + (uint)_C * 2) & _Type);
  }
  if (DAT_1109fb18 == 0) {
    ___crtGetStringTypeW
              ((localeinfo_struct *)&PTR_DAT_1109b140,1,(wchar_t *)&_C,1,local_8,DAT_1109b064,
               DAT_1109b074);
  }
  iVar1 = __iswctype_l((wint_t)__C,(wctype_t)__Type,(_locale_t)0x0);
  return iVar1;
}


// ==== 11055f62 ___mtold12

/* Library Function - Single Match
    ___mtold12
   
   Library: Visual Studio 2005 Release */

void __cdecl ___mtold12(char *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar7 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  sVar6 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar2 = *param_3;
    uVar9 = param_3[1];
    uVar10 = *param_3;
    uVar1 = param_3[1];
    uVar11 = param_3[2];
    bVar4 = false;
    uVar8 = (param_3[2] * 2 | uVar9 >> 0x1f) * 2 | (uVar9 & 0x7fffffff) >> 0x1e;
    uVar3 = uVar2 * 4;
    uVar9 = (uVar9 * 2 | uVar2 >> 0x1f) * 2 | (uVar2 & 0x7fffffff) >> 0x1e;
    uVar2 = uVar3 + uVar10;
    *param_3 = uVar3;
    param_3[1] = uVar9;
    param_3[2] = uVar8;
    if ((uVar2 < uVar3) || (uVar2 < uVar10)) {
      bVar4 = true;
    }
    bVar5 = false;
    *param_3 = uVar2;
    if (bVar4) {
      uVar10 = uVar9 + 1;
      if ((uVar10 < uVar9) || (uVar10 == 0)) {
        bVar5 = true;
      }
      param_3[1] = uVar10;
      if (bVar5) {
        param_3[2] = uVar8 + 1;
      }
    }
    uVar10 = param_3[1] + uVar1;
    bVar4 = false;
    if ((uVar10 < param_3[1]) || (uVar10 < uVar1)) {
      bVar4 = true;
    }
    param_3[1] = uVar10;
    if (bVar4) {
      param_3[2] = param_3[2] + 1;
    }
    param_3[2] = param_3[2] + uVar11;
    bVar4 = false;
    uVar1 = uVar2 * 2;
    uVar11 = uVar10 * 2 | uVar2 >> 0x1f;
    uVar10 = param_3[2] * 2 | uVar10 >> 0x1f;
    *param_3 = uVar1;
    param_3[1] = uVar11;
    param_3[2] = uVar10;
    uVar2 = uVar1 + (int)*param_1;
    if ((uVar2 < uVar1) || (uVar2 < (uint)(int)*param_1)) {
      bVar4 = true;
    }
    *param_3 = uVar2;
    if (bVar4) {
      uVar2 = uVar11 + 1;
      bVar4 = false;
      if ((uVar2 < uVar11) || (uVar2 == 0)) {
        bVar4 = true;
      }
      param_3[1] = uVar2;
      if (bVar4) {
        param_3[2] = uVar10 + 1;
      }
    }
    param_1 = param_1 + 1;
  }
  while (param_3[2] == 0) {
    param_3[2] = param_3[1] >> 0x10;
    sVar6 = sVar6 + -0x10;
    param_3[1] = param_3[1] << 0x10 | *param_3 >> 0x10;
    *param_3 = *param_3 << 0x10;
  }
  uVar2 = param_3[2];
  while ((uVar2 & 0x8000) == 0) {
    uVar10 = *param_3;
    uVar1 = param_3[1];
    sVar6 = sVar6 + -1;
    *param_3 = uVar10 * 2;
    uVar2 = param_3[2] * 2;
    param_3[1] = uVar1 * 2 | uVar10 >> 0x1f;
    param_3[2] = uVar2 | uVar1 >> 0x1f;
  }
  *(short *)((int)param_3 + 10) = sVar6;
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 11056145 __ctrlfp

/* Library Function - Single Match
    __ctrlfp
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __ctrlfp(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}


// ==== 110561c2 ___get_fpsr_sse2

/* Library Function - Single Match
    ___get_fpsr_sse2
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 ___get_fpsr_sse2(void)

{
  undefined4 local_8;
  
  if (DAT_1109fe90 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = MXCSR;
  }
  return local_8;
}


// ==== 110561de ___set_fpsr_sse2

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2005 Release */

void __cdecl ___set_fpsr_sse2(uint param_1)

{
  if (DAT_1109fe90 != 0) {
    if (((param_1 & 0x40) == 0) || (DAT_1109bd54 == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}


// ==== 110562dd __getenv_helper_nolock

/* Library Function - Single Match
    __getenv_helper_nolock
   
   Library: Visual Studio 2005 Release */

char * __cdecl __getenv_helper_nolock(char *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (DAT_1109fe60 == 0) {
    return (char *)0x0;
  }
  if (((DAT_1109f568 != (int *)0x0) ||
      (((DAT_1109f570 != 0 && (iVar1 = ___wtomb_environ(), iVar1 == 0)) &&
       (DAT_1109f568 != (int *)0x0)))) && (piVar3 = DAT_1109f568, param_1 != (char *)0x0)) {
    _MaxCount = _strlen(param_1);
    for (; (char *)*piVar3 != (char *)0x0; piVar3 = piVar3 + 1) {
      sVar2 = _strlen((char *)*piVar3);
      if (((_MaxCount < sVar2) && (((uchar *)*piVar3)[_MaxCount] == '=')) &&
         (iVar1 = __mbsnbicoll((uchar *)*piVar3,(uchar *)param_1,_MaxCount), iVar1 == 0)) {
        return (char *)(*piVar3 + 1 + _MaxCount);
      }
    }
  }
  return (char *)0x0;
}


// ==== 1105635e __getenv_s_helper

/* Library Function - Single Match
    __getenv_s_helper
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __getenv_s_helper(char *param_1,uint param_2,char *param_3)

{
  uint *in_EAX;
  undefined4 *puVar1;
  char *_Str;
  size_t sVar2;
  errno_t eVar3;
  
  if (in_EAX != (uint *)0x0) {
    *in_EAX = 0;
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) goto LAB_1105639b;
    }
    else if (param_2 != 0) {
LAB_1105639b:
      if (param_1 != (char *)0x0) {
        *param_1 = '\0';
      }
      _Str = __getenv_helper_nolock(param_3);
      if (_Str != (char *)0x0) {
        sVar2 = _strlen(_Str);
        *in_EAX = sVar2 + 1;
        if (param_2 != 0) {
          if (param_2 < sVar2 + 1) {
            return 0x22;
          }
          eVar3 = _strcpy_s(param_1,param_2,_Str);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
      }
      return 0;
    }
  }
  puVar1 = (undefined4 *)FUN_110491c7();
  *puVar1 = 0x16;
  FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}


// ==== 110563f1 __dupenv_s_helper

/* Library Function - Single Match
    __dupenv_s_helper
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __dupenv_s_helper(size_t *param_1,char *param_2)

{
  undefined4 *puVar1;
  char *_Str;
  size_t sVar2;
  char *_Dst;
  errno_t eVar3;
  undefined4 *unaff_EBX;
  
  if (unaff_EBX != (undefined4 *)0x0) {
    *unaff_EBX = 0;
    if (param_1 != (size_t *)0x0) {
      *param_1 = 0;
    }
    if (param_2 != (char *)0x0) {
      _Str = __getenv_helper_nolock(param_2);
      if (_Str != (char *)0x0) {
        sVar2 = _strlen(_Str);
        sVar2 = sVar2 + 1;
        _Dst = _calloc(sVar2,1);
        *unaff_EBX = _Dst;
        if (_Dst == (char *)0x0) {
          puVar1 = (undefined4 *)FUN_110491c7();
          *puVar1 = 0xc;
          puVar1 = (undefined4 *)FUN_110491c7();
          return *puVar1;
        }
        eVar3 = _strcpy_s(_Dst,sVar2,_Str);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        if (param_1 != (size_t *)0x0) {
          *param_1 = sVar2;
        }
      }
      return 0;
    }
  }
  puVar1 = (undefined4 *)FUN_110491c7();
  *puVar1 = 0x16;
  FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}


// ==== 110566e0 ___ascii_strnicmp

/* Library Function - Single Match
    ___ascii_strnicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if (_MaxCount != 0) {
    do {
      bVar2 = *_Str1;
      cVar1 = *_Str2;
      uVar3 = CONCAT11(bVar2,cVar1);
      if (bVar2 == 0) break;
      uVar3 = CONCAT11(bVar2,cVar1);
      uVar4 = (uint)uVar3;
      if (cVar1 == '\0') break;
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar4 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
      }
      uVar3 = (ushort)uVar4;
      bVar2 = (byte)uVar4;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        uVar3 = (ushort)CONCAT31((int3)(uVar4 >> 8),bVar2 + 0x20);
      }
      bVar2 = (byte)(uVar3 >> 8);
      bVar6 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) goto LAB_11056731;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_11056731:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}


// ==== 11056741 __crtGetStringTypeW_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtGetStringTypeW_stat(struct localeinfo_struct *,unsigned long,wchar_t const
   *,int,unsigned short *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtGetStringTypeW_stat
          (localeinfo_struct *param_1,ulong param_2,wchar_t *param_3,int param_4,ushort *param_5,
          int param_6,int param_7)

{
  LPWORD pWVar1;
  uint _Size;
  LPSTR lpSrcStr;
  BOOL BVar2;
  DWORD DVar3;
  uint _Size_00;
  undefined4 *puVar4;
  LPWORD lpCharType;
  int iVar5;
  LPSTR local_c;
  uint local_8;
  
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  if (param_4 < -1) goto LAB_11056953;
  if (DAT_1109fca8 == 0) {
    BVar2 = GetStringTypeW(1,(LPCWSTR)&DAT_110766e0,1,(LPWORD)&local_c);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_1109fca8 = 2;
      }
      goto LAB_110567a8;
    }
    DAT_1109fca8 = 1;
  }
  else {
LAB_110567a8:
    if (DAT_1109fca8 != 1) {
      if ((DAT_1109fca8 != 2) && (DAT_1109fca8 != 0)) goto LAB_11056953;
      if (param_7 == 0) {
        param_7 = (int)param_1->locinfo->lc_category[0].wlocale;
      }
      if (param_6 == 0) {
        param_6 = param_1->locinfo->lc_codepage;
      }
      iVar5 = ___ansicp(param_7);
      if ((param_6 != iVar5) && (iVar5 != -1)) {
        param_6 = iVar5;
      }
      _Size_00 = WideCharToMultiByte(param_6,0,param_3,param_4,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0)
      ;
      if (_Size_00 == 0) goto LAB_11056953;
      if (((int)_Size_00 < 1) || (0xffffffe0 < _Size_00)) {
        local_c = (LPSTR)0x0;
      }
      else if (_Size_00 + 8 < 0x401) {
        puVar4 = (undefined4 *)&stack0xffffffe0;
        local_c = &stack0xffffffe0;
        if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_11056859:
          local_c = (LPSTR)(puVar4 + 2);
        }
      }
      else {
        puVar4 = _malloc(_Size_00 + 8);
        local_c = (LPSTR)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xdddd;
          goto LAB_11056859;
        }
      }
      if (local_c == (LPSTR)0x0) goto LAB_11056953;
      _memset(local_c,0,_Size_00);
      iVar5 = WideCharToMultiByte(param_6,0,param_3,param_4,local_c,_Size_00,(LPCSTR)0x0,(LPBOOL)0x0
                                 );
      if (iVar5 != 0) {
        if (((int)(_Size_00 + 1) < 1) || (0x7ffffff0 < _Size_00 + 1)) {
          lpCharType = (LPWORD)0x0;
        }
        else {
          _Size = _Size_00 * 2 + 10;
          if (_Size < 0x401) {
            if (&stack0x00000000 == (undefined1 *)0x20) goto LAB_11056947;
            lpCharType = (LPWORD)&stack0xffffffe8;
          }
          else {
            lpCharType = _malloc(_Size);
            if (lpCharType != (LPWORD)0x0) {
              lpCharType[0] = 0xdddd;
              lpCharType[1] = 0;
              lpCharType = lpCharType + 4;
            }
          }
        }
        lpSrcStr = local_c;
        if (lpCharType != (LPWORD)0x0) {
          if (param_7 == 0) {
            param_7 = (int)param_1->locinfo->lc_category[0].wlocale;
          }
          pWVar1 = lpCharType + param_4;
          *pWVar1 = 0xffff;
          pWVar1[-1] = 0xffff;
          GetStringTypeA(param_7,param_2,lpSrcStr,_Size_00,lpCharType);
          if ((pWVar1[-1] != 0xffff) && (*pWVar1 == 0xffff)) {
            _memmove(param_5,lpCharType,param_4 * 2);
          }
          __freea(lpCharType);
        }
      }
LAB_11056947:
      __freea(local_c);
      goto LAB_11056953;
    }
  }
  GetStringTypeW(param_2,param_3,param_4,param_5);
LAB_11056953:
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}


// ==== 11056965 ___crtGetStringTypeW

/* Library Function - Single Match
    ___crtGetStringTypeW
   
   Library: Visual Studio 2005 Release */

void __cdecl
___crtGetStringTypeW
          (localeinfo_struct *param_1,ulong param_2,wchar_t *param_3,int param_4,ushort *param_5,
          int param_6,int param_7)

{
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  __crtGetStringTypeW_stat(&local_14,param_2,param_3,param_4,param_5,param_6,param_7);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return;
}


// ==== 110569a3 __mbsnbicoll_l

/* Library Function - Single Match
    __mbsnbicoll_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbicoll_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  undefined4 *puVar1;
  int iVar2;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_MaxCount == 0) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if ((_Str1 == (uchar *)0x0) || (_Str2 == (uchar *)0x0)) {
    puVar1 = (undefined4 *)FUN_110491c7();
    *puVar1 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
    if ((local_14.mbcinfo)->ismbcodepage == 0) {
      iVar2 = __strnicoll_l((char *)_Str1,(char *)_Str2,_MaxCount,_Locale);
    }
    else {
      iVar2 = ___crtCompareStringA
                        (&local_14,*(LPCWSTR *)(local_14.mbcinfo)->mbulinfo,0x1001,(LPCSTR)_Str1,
                         _MaxCount,(LPCSTR)_Str2,_MaxCount,(local_14.mbcinfo)->mbcodepage);
      if (iVar2 == 0) goto LAB_11056a6c;
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_110491c7();
    *puVar1 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_11056a6c:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}


// ==== 11056a8f __mbsnbicoll

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


// ==== 11056aa6 ___wtomb_environ

/* Library Function - Single Match
    ___wtomb_environ
   
   Library: Visual Studio 2005 Release */

int __cdecl ___wtomb_environ(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Count;
  int iVar1;
  undefined4 *puVar2;
  LPSTR local_8;
  
  local_8 = (LPSTR)0x0;
  lpWideCharStr = (LPCWSTR)*DAT_1109f570;
  puVar2 = DAT_1109f570;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Count = WideCharToMultiByte(0,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if ((_Count == 0) || (local_8 = __calloc_crt(_Count,1), local_8 == (LPSTR)0x0)) break;
    iVar1 = WideCharToMultiByte(0,0,(LPCWSTR)*puVar2,-1,local_8,_Count,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) {
      _free(local_8);
      return -1;
    }
    iVar1 = FUN_11057101(&local_8,0);
    if ((iVar1 < 0) && (local_8 != (LPSTR)0x0)) {
      _free(local_8);
      local_8 = (LPSTR)0x0;
    }
    puVar2 = puVar2 + 1;
    lpWideCharStr = (LPCWSTR)*puVar2;
  }
  return -1;
}


// ==== 11056b6f __crtCompareStringA_stat

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    int __cdecl __crtCompareStringA_stat(struct localeinfo_struct *,unsigned long,unsigned long,char
   const *,int,char const *,int,int)
   
   Library: Visual Studio 2005 Release */

int __cdecl
__crtCompareStringA_stat
          (localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,
          char *param_6,int param_7,int param_8)

{
  uint _Size;
  char *lpMultiByteStr;
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  BYTE *pBVar4;
  uint cchWideChar;
  undefined4 *puVar5;
  uint uVar6;
  LPWSTR lpWideCharStr;
  char *pcVar7;
  int *in_ECX;
  ulong uVar8;
  byte *in_EDX;
  byte *pbVar9;
  PCNZCH _Memory;
  byte *local_28;
  PCNZWCH local_24;
  char *local_20;
  _cpinfo local_1c;
  uint local_8;
  
  lpMultiByteStr = param_4;
  local_8 = DAT_1109acf8 ^ (uint)&stack0xfffffffc;
  local_20 = param_4;
  if (DAT_1109fcac == 0) {
    iVar1 = CompareStringW(0,0,(PCNZWCH)&DAT_110766e0,1,(PCNZWCH)&DAT_110766e0,1);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_1109fcac = 2;
      }
    }
    else {
      DAT_1109fcac = 1;
    }
  }
  pbVar9 = in_EDX;
  uVar8 = param_3;
  if ((int)param_3 < 1) {
    if ((int)param_3 < -1) goto LAB_11056ee6;
  }
  else {
    do {
      uVar8 = uVar8 - 1;
      if (*pbVar9 == 0) goto LAB_11056be9;
      pbVar9 = pbVar9 + 1;
    } while (uVar8 != 0);
    uVar8 = 0xffffffff;
LAB_11056be9:
    param_3 = param_3 + (-1 - uVar8);
  }
  pcVar7 = lpMultiByteStr;
  iVar1 = param_5;
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_11056ee6;
  }
  else {
    do {
      iVar1 = iVar1 + -1;
      if (*pcVar7 == '\0') goto LAB_11056c0b;
      pcVar7 = pcVar7 + 1;
    } while (iVar1 != 0);
    iVar1 = -1;
LAB_11056c0b:
    param_5 = param_5 + (-1 - iVar1);
  }
  if ((DAT_1109fcac == 2) || (DAT_1109fcac == 0)) {
    _Memory = (PCNZCH)0x0;
    pbVar9 = (byte *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_6 == (char *)0x0) {
      param_6 = *(char **)(*in_ECX + 4);
    }
    pcVar7 = (char *)___ansicp((LCID)param_1);
    if (pcVar7 == (char *)0xffffffff) goto LAB_11056ee6;
    local_28 = in_EDX;
    if (pcVar7 != param_6) {
      pbVar9 = (byte *)___convertcp((UINT)param_6,(UINT)pcVar7,(char *)in_EDX,&param_3,(LPSTR)0x0,0)
      ;
      if (pbVar9 == (byte *)0x0) goto LAB_11056ee6;
      _Memory = (PCNZCH)___convertcp((UINT)param_6,(UINT)pcVar7,lpMultiByteStr,(uint *)&param_5,
                                     (LPSTR)0x0,0);
      local_28 = pbVar9;
      local_20 = _Memory;
      if (_Memory == (PCNZCH)0x0) {
        _free(pbVar9);
        goto LAB_11056ee6;
      }
    }
    CompareStringA((LCID)param_1,param_2,(PCNZCH)local_28,param_3,local_20,param_5);
    if (pbVar9 != (byte *)0x0) {
      _free(pbVar9);
      _free(_Memory);
    }
    goto LAB_11056ee6;
  }
  if (DAT_1109fcac != 1) goto LAB_11056ee6;
  if (param_6 == (char *)0x0) {
    param_6 = *(char **)(*in_ECX + 4);
  }
  if ((param_3 == 0) || (param_5 == 0)) {
    if ((param_3 == param_5) ||
       (((1 < param_5 || (1 < (int)param_3)) ||
        (BVar3 = GetCPInfo((UINT)param_6,&local_1c), BVar3 == 0)))) goto LAB_11056ee6;
    if (0 < (int)param_3) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*in_EDX < *pBVar4 || (pBVar4[1] < *in_EDX))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_11056ee6;
    }
    if (0 < param_5) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               (((byte)*lpMultiByteStr < *pBVar4 || (pBVar4[1] < (byte)*lpMultiByteStr))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_11056ee6;
    }
  }
  cchWideChar = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)in_EDX,param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_11056ee6;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_24 = (PCNZWCH)0x0;
  }
  else {
    uVar6 = cchWideChar * 2 + 8;
    if (uVar6 < 0x401) {
      puVar5 = (undefined4 *)&stack0xffffffc4;
      local_24 = (PCNZWCH)&stack0xffffffc4;
      if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_11056d5f:
        local_24 = (PCNZWCH)(puVar5 + 2);
      }
    }
    else {
      puVar5 = _malloc(uVar6);
      local_24 = (PCNZWCH)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_11056d5f;
      }
    }
  }
  if (local_24 == (PCNZWCH)0x0) goto LAB_11056ee6;
  iVar1 = MultiByteToWideChar((UINT)param_6,1,(LPCSTR)in_EDX,param_3,local_24,cchWideChar);
  if ((iVar1 != 0) &&
     (uVar6 = MultiByteToWideChar((UINT)param_6,9,lpMultiByteStr,param_5,(LPWSTR)0x0,0), uVar6 != 0)
     ) {
    if (((int)uVar6 < 1) || (0xffffffe0 / uVar6 < 2)) {
      lpWideCharStr = (LPWSTR)0x0;
    }
    else {
      _Size = uVar6 * 2 + 8;
      if (_Size < 0x401) {
        if (&stack0x00000000 == (undefined1 *)0x3c) goto LAB_11056e20;
        lpWideCharStr = (LPWSTR)&stack0xffffffcc;
      }
      else {
        lpWideCharStr = _malloc(_Size);
        if (lpWideCharStr != (LPWSTR)0x0) {
          lpWideCharStr[0] = L'\xdddd';
          lpWideCharStr[1] = L'\0';
          lpWideCharStr = lpWideCharStr + 4;
        }
      }
    }
    if (lpWideCharStr != (LPWSTR)0x0) {
      iVar1 = MultiByteToWideChar((UINT)param_6,1,lpMultiByteStr,param_5,lpWideCharStr,uVar6);
      if (iVar1 != 0) {
        CompareStringW((LCID)param_1,param_2,local_24,cchWideChar,lpWideCharStr,uVar6);
      }
      __freea(lpWideCharStr);
    }
  }
LAB_11056e20:
  __freea(local_24);
LAB_11056ee6:
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}


// ==== 11056ef8 ___crtCompareStringA

/* Library Function - Single Match
    ___crtCompareStringA
   
   Library: Visual Studio 2005 Release */

int __cdecl
___crtCompareStringA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwCmpFlags,LPCSTR _LpString1,
          int _CchCount1,LPCSTR _LpString2,int _CchCount2,int _Code_page)

{
  int iVar1;
  int in_stack_ffffffec;
  int in_stack_fffffff0;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&stack0xffffffec,_Plocinfo);
  iVar1 = __crtCompareStringA_stat
                    ((localeinfo_struct *)_LocaleName,_DwCmpFlags,_CchCount1,_LpString2,_CchCount2,
                     (char *)_Code_page,in_stack_ffffffec,in_stack_fffffff0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar1;
}


// ==== 11056f38 __strnicoll_l

/* Library Function - Single Match
    __strnicoll_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __strnicoll_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  LPCWSTR _LocaleName;
  undefined4 *puVar1;
  int iVar2;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_MaxCount == 0) {
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
    puVar1 = (undefined4 *)FUN_110491c7();
    *puVar1 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
    _LocaleName = (LPCWSTR)(local_14.locinfo)->lc_category[0].locale;
    if (_LocaleName == (LPCWSTR)0x0) {
      iVar2 = __strnicmp_l(_Str1,_Str2,_MaxCount,&local_14);
    }
    else {
      iVar2 = ___crtCompareStringA
                        (&local_14,_LocaleName,0x1001,_Str1,_MaxCount,_Str2,_MaxCount,
                         (local_14.locinfo)->lc_collate_cp);
      if (iVar2 == 0) {
        puVar1 = (undefined4 *)FUN_110491c7();
        *puVar1 = 0x16;
        goto LAB_1105700d;
      }
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_110491c7();
    *puVar1 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_1105700d:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}


// ==== 11057030 __strnicoll

/* Library Function - Single Match
    __strnicoll
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl __strnicoll(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (DAT_1109fb18 == 0) {
    iVar1 = __strnicmp(_Str1,_Str2,_MaxCount);
    return iVar1;
  }
  iVar1 = __strnicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


// ==== 11057057 findenv

/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2005 Release */

int __cdecl findenv(uchar *param_1)

{
  int iVar1;
  int *piVar2;
  size_t unaff_EDI;
  
  piVar2 = DAT_1109f568;
  while( true ) {
    if ((uchar *)*piVar2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_1109f568 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*piVar2,unaff_EDI);
    if ((iVar1 == 0) &&
       ((*(char *)(unaff_EDI + *piVar2) == '=' || (*(char *)(unaff_EDI + *piVar2) == '\0')))) break;
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_1109f568 >> 2;
}


// ==== 110570a4 copy_environ

/* Library Function - Single Match
    _copy_environ
   
   Library: Visual Studio 2005 Release */

undefined4 * __cdecl copy_environ(void)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *unaff_EDI;
  
  puVar2 = (undefined4 *)0x0;
  if (unaff_EDI != (int *)0x0) {
    iVar1 = *unaff_EDI;
    piVar4 = unaff_EDI;
    while (iVar1 != 0) {
      piVar4 = piVar4 + 1;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      iVar1 = *piVar4;
    }
    puVar2 = __calloc_crt((int)puVar2 + 1,4);
    if (puVar2 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    pcVar3 = (char *)*unaff_EDI;
    puVar5 = puVar2;
    while (pcVar3 != (char *)0x0) {
      pcVar3 = __strdup(pcVar3);
      *puVar5 = pcVar3;
      puVar5 = puVar5 + 1;
      unaff_EDI = unaff_EDI + 1;
      pcVar3 = (char *)*unaff_EDI;
    }
    *puVar5 = 0;
    return puVar2;
  }
  return puVar2;
}


// ==== 11057101 FUN_11057101

undefined4 __cdecl FUN_11057101(undefined4 *param_1,int param_2)

{
  uint _Size;
  uchar *_Str;
  undefined4 *puVar1;
  uchar *puVar2;
  int iVar3;
  uint _Count;
  int *piVar4;
  size_t sVar5;
  char *_Dst;
  errno_t eVar6;
  BOOL BVar7;
  int *piVar8;
  bool bVar9;
  size_t _Size_00;
  uchar *_Src;
  undefined4 local_14;
  
  local_14 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_110491c7();
    *puVar1 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0xffffffff;
  }
  _Str = (uchar *)*param_1;
  if (((_Str == (uchar *)0x0) || (puVar2 = __mbschr(_Str,0x3d), puVar2 == (uchar *)0x0)) ||
     (_Str == puVar2)) {
LAB_1105718f:
    puVar1 = (undefined4 *)FUN_110491c7();
    *puVar1 = 0x16;
    return 0xffffffff;
  }
  bVar9 = puVar2[1] == '\0';
  if (DAT_1109f568 == DAT_1109f56c) {
    DAT_1109f568 = copy_environ();
  }
  if (DAT_1109f568 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_1109f570 == (undefined4 *)0x0)) {
      if (bVar9) {
        return 0;
      }
      DAT_1109f568 = __malloc_crt(4);
      if (DAT_1109f568 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_1109f568 = 0;
      if (DAT_1109f570 == (undefined4 *)0x0) {
        DAT_1109f570 = __malloc_crt(4);
        if (DAT_1109f570 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_1109f570 = 0;
      }
    }
    else {
      iVar3 = ___wtomb_environ();
      if (iVar3 != 0) goto LAB_1105718f;
    }
  }
  piVar4 = DAT_1109f568;
  if (DAT_1109f568 == (int *)0x0) {
    return 0xffffffff;
  }
  _Count = findenv(_Str);
  if (((int)_Count < 0) || (*piVar4 == 0)) {
    if (bVar9) {
      _free(_Str);
      *param_1 = 0;
      return 0;
    }
    if ((int)_Count < 0) {
      _Count = -_Count;
    }
    _Size = _Count + 2;
    if ((int)_Size < (int)_Count) {
      return 0xffffffff;
    }
    if (0x3ffffffe < _Size) {
      return 0xffffffff;
    }
    piVar4 = __recalloc_crt(DAT_1109f568,4,_Size);
    if (piVar4 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar4[_Count] = (int)_Str;
    (piVar4 + _Count)[1] = 0;
    *param_1 = 0;
  }
  else {
    piVar8 = piVar4 + _Count;
    _free((void *)*piVar8);
    if (!bVar9) {
      *piVar8 = (int)_Str;
      *param_1 = 0;
      goto LAB_110572a0;
    }
    while (*piVar8 != 0) {
      *piVar8 = piVar8[1];
      _Count = _Count + 1;
      piVar8 = piVar4 + _Count;
    }
    if ((0x3ffffffe < _Count) ||
       (piVar4 = __recalloc_crt(DAT_1109f568,_Count,4), piVar4 == (int *)0x0)) goto LAB_110572a0;
  }
  DAT_1109f568 = piVar4;
LAB_110572a0:
  if (param_2 != 0) {
    _Size_00 = 1;
    sVar5 = _strlen((char *)_Str);
    _Dst = __calloc_crt(sVar5 + 2,_Size_00);
    if (_Dst != (char *)0x0) {
      _Src = _Str;
      sVar5 = _strlen((char *)_Str);
      eVar6 = _strcpy_s(_Dst,sVar5 + 2,(char *)_Src);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      puVar2[(int)_Dst - (int)_Str] = '\0';
      BVar7 = SetEnvironmentVariableA
                        (_Dst,(LPCSTR)(~-(uint)bVar9 & (uint)(puVar2 + ((int)_Dst - (int)_Str) + 1))
                        );
      if (BVar7 == 0) {
        local_14 = 0xffffffff;
        puVar1 = (undefined4 *)FUN_110491c7();
        *puVar1 = 0x2a;
      }
      _free(_Dst);
    }
  }
  if (bVar9) {
    _free(_Str);
    *param_1 = 0;
    return local_14;
  }
  return local_14;
}


// ==== 1105734d __strdup

/* Library Function - Single Match
    __strdup
   
   Library: Visual Studio 2005 Release */

char * __cdecl __strdup(char *_Src)

{
  char *_Dst;
  size_t sVar1;
  errno_t eVar2;
  
  if (_Src == (char *)0x0) {
    _Dst = (char *)0x0;
  }
  else {
    sVar1 = _strlen(_Src);
    _Dst = _malloc(sVar1 + 1);
    if (_Dst == (char *)0x0) {
      _Dst = (char *)0x0;
    }
    else {
      eVar2 = _strcpy_s(_Dst,sVar1 + 1,_Src);
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
  return _Dst;
}


// ==== 1105739d __mbschr_l

/* Library Function - Single Match
    __mbschr_l
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbschr_l(uchar *_Str,uint _Ch,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if (_Str == (uchar *)0x0) {
    puVar3 = (undefined4 *)FUN_110491c7();
    *puVar3 = 0x16;
    FUN_110422d5((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    _Str = (byte *)0x0;
  }
  else {
    if (*(int *)(local_10 + 8) == 0) {
      _Str = (uchar *)_strchr((char *)_Str,_Ch);
    }
    else {
      while( true ) {
        bVar2 = *_Str;
        if (bVar2 == 0) break;
        if ((*(byte *)(bVar2 + 0x1d + local_10) & 4) == 0) {
          pbVar4 = _Str;
          if (_Ch == bVar2) break;
        }
        else {
          bVar1 = _Str[1];
          if (bVar1 == 0) goto LAB_11057445;
          pbVar4 = _Str + 1;
          if (_Ch == CONCAT11(bVar2,bVar1)) goto LAB_11057437;
        }
        _Str = pbVar4 + 1;
      }
      if (_Ch != (ushort)bVar2) {
LAB_11057445:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return (uchar *)0x0;
      }
    }
LAB_11057437:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return _Str;
}


// ==== 11057457 __mbschr

/* Library Function - Single Match
    __mbschr
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbschr(uchar *_Str,uint _Ch)

{
  uchar *puVar1;
  
  puVar1 = __mbschr_l(_Str,_Ch,(_locale_t)0x0);
  return puVar1;
}


// ==== 11057480 _strchr

/* Library Function - Single Match
    _strchr
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

char * __cdecl _strchr(char *_Str,int _Val)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)_Str & 3) != 0) {
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    _Str = (char *)((int)_Str + 1);
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *(uint *)_Str;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)_Val,(char)_Val),CONCAT11((char)_Val,(char)_Val));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = (uint *)((int)_Str + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      _Str = (char *)puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (char *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (char *)0x0;
        }
      }
    }
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 1);
    }
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 3);
    }
    _Str = (char *)puVar5;
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}


// ==== 1105753e KERNEL32.DLL::RtlUnwind thunk -> EXTERNAL:000000f2

// ==== 1105f5a0 Unwind@1105f5a0

void Unwind_1105f5a0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x1105f5b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 1105f670 Unwind@1105f670

void Unwind_1105f670(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1105f673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0xc));
  return;
}


// ==== 1105f690 Unwind@1105f690

void Unwind_1105f690(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1105f693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0x10));
  return;
}


// ==== 1105f6d0 Unwind@1105f6d0

void Unwind_1105f6d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1105f6d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 8));
  return;
}


// ==== 1105f7f0 Unwind@1105f7f0

void Unwind_1105f7f0(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 1105f820 Unwind@1105f820

void Unwind_1105f820(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 1105f840 Unwind@1105f840

void Unwind_1105f840(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1105f843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0x18));
  return;
}


// ==== 1105f849 Unwind@1105f849

void Unwind_1105f849(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1105f84f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}


// ==== 1105f870 Unwind@1105f870

void Unwind_1105f870(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 1105f890 Unwind@1105f890

void Unwind_1105f890(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1105f893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 1105f8b0 Unwind@1105f8b0

void Unwind_1105f8b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1105f8b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}


// ==== 1105f930 Unwind@1105f930

void Unwind_1105f930(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x1105f943. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 1105f990 Unwind@1105f990

void Unwind_1105f990(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1105f993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0x24));
  return;
}


// ==== 1105f999 Unwind@1105f999

void Unwind_1105f999(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1105f99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 0x3c));
  return;
}


// ==== 1105fa10 Unwind@1105fa10

void Unwind_1105fa10(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1105fa13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x2c));
  return;
}


// ==== 1105fb30 Unwind@1105fb30

void Unwind_1105fb30(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x1105fb43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 1105fd30 Unwind@1105fd30

void Unwind_1105fd30(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x1105fd43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 1105ff30 Unwind@1105ff30

void Unwind_1105ff30(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1105ff33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 1105ff70 Unwind@1105ff70

void Unwind_1105ff70(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1105ff76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}


// ==== 1105ff90 Unwind@1105ff90

void Unwind_1105ff90(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1105ff93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 8));
  return;
}


// ==== 1105ffd0 Unwind@1105ffd0

void Unwind_1105ffd0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1105ffd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 8));
  return;
}


// ==== 11060000 Unwind@11060000

void Unwind_11060000(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060003. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11060020 Unwind@11060020

void Unwind_11060020(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060026. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + 4) + 0x14));
  return;
}


// ==== 11060050 Unwind@11060050

void Unwind_11060050(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + 4));
  return;
}


// ==== 11060059 Unwind@11060059

void Unwind_11060059(void)

{
  int unaff_EBP;
  
  thunk_FUN_1100e550((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x20));
  return;
}


// ==== 11060080 Unwind@11060080

void Unwind_11060080(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 110600a0 Unwind@110600a0

void Unwind_110600a0(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 110600c0 Unwind@110600c0

void Unwind_110600c0(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 110600e0 Unwind@110600e0

void Unwind_110600e0(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11060100 Unwind@11060100

void Unwind_11060100(void)

{
  int unaff_EBP;
  
  thunk_FUN_11004bc0(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}


// ==== 11060120 Unwind@11060120

void Unwind_11060120(void)

{
  int unaff_EBP;
  
  thunk_FUN_11004bc0(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}


// ==== 11060140 Unwind@11060140

void Unwind_11060140(void)

{
  int unaff_EBP;
  
  thunk_FUN_11004bc0(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}


// ==== 11060160 Unwind@11060160

void Unwind_11060160(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x40) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x40) = *(uint *)(unaff_EBP + -0x40) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x11060173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 4));
    return;
  }
  return;
}


// ==== 1106017a Unwind@1106017a

void Unwind_1106017a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106017d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 11060183 Unwind@11060183

void Unwind_11060183(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060186. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 1106018c Unwind@1106018c

void Unwind_1106018c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106018f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 11060195 Unwind@11060195

void Unwind_11060195(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 110601e0 Unwind@110601e0

void Unwind_110601e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110601e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x1c));
  return;
}


// ==== 110601e9 Unwind@110601e9

void Unwind_110601e9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110601ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x54));
  return;
}


// ==== 11060210 Unwind@11060210

void Unwind_11060210(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 11060219 Unwind@11060219

void Unwind_11060219(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106021c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 11060410 Unwind@11060410

void Unwind_11060410(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 11060419 Unwind@11060419

void Unwind_11060419(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106041c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 11060450 Unwind@11060450

void Unwind_11060450(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x11060463. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 110604d0 Unwind@110604d0

void Unwind_110604d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110604d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 11060550 Unwind@11060550

void Unwind_11060550(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060553. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 11060559 Unwind@11060559

void Unwind_11060559(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 110605b0 Unwind@110605b0

void Unwind_110605b0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x110605c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 110605f0 Unwind@110605f0

void Unwind_110605f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110605f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 11060610 Unwind@11060610

void Unwind_11060610(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x11060623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 11060670 Unwind@11060670

void Unwind_11060670(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 110606e0 Unwind@110606e0

void Unwind_110606e0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x110606f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 11060720 Unwind@11060720

void Unwind_11060720(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x11060733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 1106073a Unwind@1106073a

void Unwind_1106073a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106073d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 11060743 Unwind@11060743

void Unwind_11060743(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x34));
  return;
}


// ==== 11060770 Unwind@11060770

void Unwind_11060770(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060773. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 4));
  return;
}


// ==== 11060779 Unwind@11060779

void Unwind_11060779(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106077c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 110607a0 Unwind@110607a0

void Unwind_110607a0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x110607b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 11060820 Unwind@11060820

void Unwind_11060820(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060823. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 11060850 Unwind@11060850

void Unwind_11060850(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x11060863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 11060890 Unwind@11060890

void Unwind_11060890(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 110608b0 Unwind@110608b0

void Unwind_110608b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110608b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 110608d0 Unwind@110608d0

void Unwind_110608d0(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 110608f0 Unwind@110608f0

void Unwind_110608f0(void)

{
  int unaff_EBP;
  
  WButton::~WButton(*(WButton **)(unaff_EBP + -0x10));
  return;
}


// ==== 11060910 Unwind@11060910

void Unwind_11060910(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11060930 Unwind@11060930

void Unwind_11060930(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11060950 Unwind@11060950

void Unwind_11060950(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 4));
  return;
}


// ==== 11060959 Unwind@11060959

void Unwind_11060959(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106095c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x18));
  return;
}


// ==== 11060980 Unwind@11060980

void Unwind_11060980(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 8));
  return;
}


// ==== 11060989 Unwind@11060989

void Unwind_11060989(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106098c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x34));
  return;
}


// ==== 11060992 Unwind@11060992

void Unwind_11060992(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x40));
  return;
}


// ==== 110609b0 Unwind@110609b0

void Unwind_110609b0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x110609c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 110609ca Unwind@110609ca

void Unwind_110609ca(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110609cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 110609d3 Unwind@110609d3

void Unwind_110609d3(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110609d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x34));
  return;
}


// ==== 11060a00 Unwind@11060a00

void Unwind_11060a00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060a03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 11060a09 Unwind@11060a09

void Unwind_11060a09(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 11060a12 Unwind@11060a12

void Unwind_11060a12(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 8));
  return;
}


// ==== 11060a1b Unwind@11060a1b

void Unwind_11060a1b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060a1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 11060a24 Unwind@11060a24

void Unwind_11060a24(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060a27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 11060a2d Unwind@11060a2d

void Unwind_11060a2d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x1c));
  return;
}


// ==== 11060a36 Unwind@11060a36

void Unwind_11060a36(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060a39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 11060a3f Unwind@11060a3f

void Unwind_11060a3f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060a42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 11060a48 Unwind@11060a48

void Unwind_11060a48(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060a4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 11060a51 Unwind@11060a51

void Unwind_11060a51(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 11060a5a Unwind@11060a5a

void Unwind_11060a5a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060a5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 11060a63 Unwind@11060a63

void Unwind_11060a63(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060a66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 11060a6c Unwind@11060a6c

void Unwind_11060a6c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060a6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 11060a75 Unwind@11060a75

void Unwind_11060a75(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 11060a7e Unwind@11060a7e

void Unwind_11060a7e(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060a81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x48));
  return;
}


// ==== 11060a87 Unwind@11060a87

void Unwind_11060a87(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060a8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x48));
  return;
}


// ==== 11060a90 Unwind@11060a90

void Unwind_11060a90(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060a93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x54));
  return;
}


// ==== 11060a99 Unwind@11060a99

void Unwind_11060a99(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x54));
  return;
}


// ==== 11060aa2 Unwind@11060aa2

void Unwind_11060aa2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x60));
  return;
}


// ==== 11060aab Unwind@11060aab

void Unwind_11060aab(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060aae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x60));
  return;
}


// ==== 11060ab4 Unwind@11060ab4

void Unwind_11060ab4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060ab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x6c));
  return;
}


// ==== 11060b00 Unwind@11060b00

void Unwind_11060b00(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11060b20 Unwind@11060b20

void Unwind_11060b20(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11060b40 Unwind@11060b40

void Unwind_11060b40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060b43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11060b60 Unwind@11060b60

void Unwind_11060b60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060b63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11060b80 Unwind@11060b80

void Unwind_11060b80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060b83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11060ba0 Unwind@11060ba0

void Unwind_11060ba0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060ba3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11060c60 Unwind@11060c60

void Unwind_11060c60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060c63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 11060c69 Unwind@11060c69

void Unwind_11060c69(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 11060c72 Unwind@11060c72

void Unwind_11060c72(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060c75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 11060c7b Unwind@11060c7b

void Unwind_11060c7b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060c7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x48));
  return;
}


// ==== 11060ce0 Unwind@11060ce0

void Unwind_11060ce0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060ce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 11060d60 Unwind@11060d60

void Unwind_11060d60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060d63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 11060d80 Unwind@11060d80

void Unwind_11060d80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060d83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x44));
  return;
}


// ==== 11060d89 Unwind@11060d89

void Unwind_11060d89(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x38));
  return;
}


// ==== 11060d92 Unwind@11060d92

void Unwind_11060d92(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x11060da5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x44));
    return;
  }
  return;
}


// ==== 11060dac Unwind@11060dac

void Unwind_11060dac(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
                    /* WARNING: Could not recover jumptable at 0x11060dbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x44));
    return;
  }
  return;
}


// ==== 11060dc6 Unwind@11060dc6

void Unwind_11060dc6(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffb;
                    /* WARNING: Could not recover jumptable at 0x11060dd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString((FString *)(unaff_EBP + -0x44));
    return;
  }
  return;
}


// ==== 11060de0 Unwind@11060de0

void Unwind_11060de0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060de3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x50));
  return;
}


// ==== 11060de9 Unwind@11060de9

void Unwind_11060de9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x5c));
  return;
}


// ==== 11060df2 Unwind@11060df2

void Unwind_11060df2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060df5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x68));
  return;
}


// ==== 11060dfb Unwind@11060dfb

void Unwind_11060dfb(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060dfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x74));
  return;
}


// ==== 11060e04 Unwind@11060e04

void Unwind_11060e04(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060e07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x80));
  return;
}


// ==== 11060e0d Unwind@11060e0d

void Unwind_11060e0d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060e13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x8c));
  return;
}


// ==== 11060e50 Unwind@11060e50

void Unwind_11060e50(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060e53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0x60));
  return;
}


// ==== 11060e59 Unwind@11060e59

void Unwind_11060e59(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0x2c));
  return;
}


// ==== 11060e62 Unwind@11060e62

void Unwind_11060e62(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0x38));
  return;
}


// ==== 11060e6b Unwind@11060e6b

void Unwind_11060e6b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060e6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0x38));
  return;
}


// ==== 11060e74 Unwind@11060e74

void Unwind_11060e74(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060e77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0x2c));
  return;
}


// ==== 11060e7d Unwind@11060e7d

void Unwind_11060e7d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x34));
  return;
}


// ==== 11060e86 Unwind@11060e86

void Unwind_11060e86(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060e89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 11060e8f Unwind@11060e8f

void Unwind_11060e8f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060e92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x40));
  return;
}


// ==== 11060e98 Unwind@11060e98

void Unwind_11060e98(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060e9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x1c));
  return;
}


// ==== 11060ed0 Unwind@11060ed0

void Unwind_11060ed0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060ed3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 11060f00 Unwind@11060f00

void Unwind_11060f00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060f03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 11060fa0 Unwind@11060fa0

void Unwind_11060fa0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060fa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 11060fa9 Unwind@11060fa9

void Unwind_11060fa9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11060fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 11061010 Unwind@11061010

void Unwind_11061010(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 11061019 Unwind@11061019

void Unwind_11061019(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106101c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 11061022 Unwind@11061022

void Unwind_11061022(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + 8));
  return;
}


// ==== 1106102b Unwind@1106102b

void Unwind_1106102b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106102e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 11061034 Unwind@11061034

void Unwind_11061034(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 1106103d Unwind@1106103d

void Unwind_1106103d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x1c));
  return;
}


// ==== 11061046 Unwind@11061046

void Unwind_11061046(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061049. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 1106104f Unwind@1106104f

void Unwind_1106104f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061052. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 11061058 Unwind@11061058

void Unwind_11061058(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106105b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 11061061 Unwind@11061061

void Unwind_11061061(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 1106106a Unwind@1106106a

void Unwind_1106106a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106106d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 11061073 Unwind@11061073

void Unwind_11061073(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 1106107c Unwind@1106107c

void Unwind_1106107c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106107f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 11061085 Unwind@11061085

void Unwind_11061085(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 1106108e Unwind@1106108e

void Unwind_1106108e(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x48));
  return;
}


// ==== 11061097 Unwind@11061097

void Unwind_11061097(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106109a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x48));
  return;
}


// ==== 110610a0 Unwind@110610a0

void Unwind_110610a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110610a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x54));
  return;
}


// ==== 110610a9 Unwind@110610a9

void Unwind_110610a9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110610ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x54));
  return;
}


// ==== 110610b2 Unwind@110610b2

void Unwind_110610b2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110610b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x60));
  return;
}


// ==== 110610bb Unwind@110610bb

void Unwind_110610bb(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110610be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x60));
  return;
}


// ==== 110610c4 Unwind@110610c4

void Unwind_110610c4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110610c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x6c));
  return;
}


// ==== 11061160 Unwind@11061160

void Unwind_11061160(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061180 Unwind@11061180

void Unwind_11061180(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061210 Unwind@11061210

void Unwind_11061210(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 11061270 Unwind@11061270

void Unwind_11061270(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 8));
  return;
}


// ==== 11061279 Unwind@11061279

void Unwind_11061279(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106127c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 11061282 Unwind@11061282

void Unwind_11061282(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 110612a0 Unwind@110612a0

void Unwind_110612a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110612a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 110612d0 Unwind@110612d0

void Unwind_110612d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110612d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 110612f0 Unwind@110612f0

void Unwind_110612f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110612f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061310 Unwind@11061310

void Unwind_11061310(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061330 Unwind@11061330

void Unwind_11061330(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061370 Unwind@11061370

void Unwind_11061370(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x2c));
  return;
}


// ==== 11061379 Unwind@11061379

void Unwind_11061379(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106137c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x1c));
  return;
}


// ==== 11061382 Unwind@11061382

void Unwind_11061382(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 110613a0 Unwind@110613a0

void Unwind_110613a0(void)

{
  int unaff_EBP;
  
  thunk_FUN_1101da60((FArray *)(unaff_EBP + -0x24));
  return;
}


// ==== 110613c0 Unwind@110613c0

void Unwind_110613c0(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 110613e0 Unwind@110613e0

void Unwind_110613e0(void)

{
  int unaff_EBP;
  
  WButton::~WButton(*(WButton **)(unaff_EBP + -0x14));
  return;
}


// ==== 11061400 Unwind@11061400

void Unwind_11061400(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061420 Unwind@11061420

void Unwind_11061420(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061440 Unwind@11061440

void Unwind_11061440(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061460 Unwind@11061460

void Unwind_11061460(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061480 Unwind@11061480

void Unwind_11061480(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + 4));
  return;
}


// ==== 11061489 Unwind@11061489

void Unwind_11061489(void)

{
  int unaff_EBP;
  
  thunk_FUN_1101db80((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x24));
  return;
}


// ==== 11061494 Unwind@11061494

void Unwind_11061494(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + 4));
  return;
}


// ==== 1106149d Unwind@1106149d

void Unwind_1106149d(void)

{
  int unaff_EBP;
  
  thunk_FUN_1101dc40((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x30));
  return;
}


// ==== 110614c0 Unwind@110614c0

void Unwind_110614c0(void)

{
  int unaff_EBP;
  
  thunk_FUN_1101db80((FArray *)(*(int *)(unaff_EBP + -0x18) + 0x24));
  return;
}


// ==== 110614cb Unwind@110614cb

void Unwind_110614cb(void)

{
  int unaff_EBP;
  
  thunk_FUN_1101dc40((FArray *)(*(int *)(unaff_EBP + -0x18) + 0x30));
  return;
}


// ==== 110614f0 Unwind@110614f0

void Unwind_110614f0(void)

{
  int unaff_EBP;
  
  FTreeItem::~FTreeItem(*(FTreeItem **)(unaff_EBP + -0x18));
  return;
}


// ==== 110614f8 Unwind@110614f8

void Unwind_110614f8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110614fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x74));
  return;
}


// ==== 11061520 Unwind@11061520

void Unwind_11061520(void)

{
  int unaff_EBP;
  
  FTreeItem::~FTreeItem(*(FTreeItem **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061528 Unwind@11061528

void Unwind_11061528(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106152e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x74));
  return;
}


// ==== 11061550 Unwind@11061550

void Unwind_11061550(void)

{
  int unaff_EBP;
  
  FTreeItem::~FTreeItem(*(FTreeItem **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061570 Unwind@11061570

void Unwind_11061570(void)

{
  int unaff_EBP;
  
  FTreeItem::~FTreeItem(*(FTreeItem **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061590 Unwind@11061590

void Unwind_11061590(void)

{
  int unaff_EBP;
  
  FTreeItem::~FTreeItem(*(FTreeItem **)(unaff_EBP + -0x10));
  return;
}


// ==== 110615b0 Unwind@110615b0

void Unwind_110615b0(void)

{
  int unaff_EBP;
  
  FHeaderItem::~FHeaderItem(*(FHeaderItem **)(unaff_EBP + -0x10));
  return;
}


// ==== 110615d0 Unwind@110615d0

void Unwind_110615d0(void)

{
  int unaff_EBP;
  
  FHeaderItem::~FHeaderItem(*(FHeaderItem **)(unaff_EBP + -0x10));
  return;
}


// ==== 110615d8 Unwind@110615d8

void Unwind_110615d8(void)

{
  int unaff_EBP;
  
  FTreeItem::~FTreeItem(*(FTreeItem **)(unaff_EBP + -0x10));
  return;
}


// ==== 110615f0 Unwind@110615f0

void Unwind_110615f0(void)

{
  int unaff_EBP;
  
  FHeaderItem::~FHeaderItem(*(FHeaderItem **)(unaff_EBP + -0x10));
  return;
}


// ==== 110615f8 Unwind@110615f8

void Unwind_110615f8(void)

{
  int unaff_EBP;
  
  FTreeItem::~FTreeItem(*(FTreeItem **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061610 Unwind@11061610

void Unwind_11061610(void)

{
  int unaff_EBP;
  
  FHeaderItem::~FHeaderItem(*(FHeaderItem **)(unaff_EBP + -0x24));
  return;
}


// ==== 11061618 Unwind@11061618

void Unwind_11061618(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106161e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x24) + 0x48));
  return;
}


// ==== 11061624 Unwind@11061624

void Unwind_11061624(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray((FArray *)(unaff_EBP + -0x18));
  return;
}


// ==== 1106162d Unwind@1106162d

void Unwind_1106162d(void)

{
  int unaff_EBP;
  
  thunk_FUN_1101c4a0((FArray *)(unaff_EBP + -0x18));
  return;
}


// ==== 11061650 Unwind@11061650

void Unwind_11061650(void)

{
  int unaff_EBP;
  
  FHeaderItem::~FHeaderItem(*(FHeaderItem **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061658 Unwind@11061658

void Unwind_11061658(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106165e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x48));
  return;
}


// ==== 11061664 Unwind@11061664

void Unwind_11061664(void)

{
  int unaff_EBP;
  
  FTreeItem::~FTreeItem(*(FTreeItem **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061680 Unwind@11061680

void Unwind_11061680(void)

{
  int unaff_EBP;
  
  FHeaderItem::~FHeaderItem(*(FHeaderItem **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061688 Unwind@11061688

void Unwind_11061688(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106168e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x3c));
  return;
}


// ==== 110616b0 Unwind@110616b0

void Unwind_110616b0(void)

{
  int unaff_EBP;
  
  FHeaderItem::~FHeaderItem(*(FHeaderItem **)(unaff_EBP + -0x10));
  return;
}


// ==== 110616b8 Unwind@110616b8

void Unwind_110616b8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110616be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x3c));
  return;
}


// ==== 110616c4 Unwind@110616c4

void Unwind_110616c4(void)

{
  int unaff_EBP;
  
  FTreeItem::~FTreeItem(*(FTreeItem **)(unaff_EBP + -0x10));
  return;
}


// ==== 110616e0 Unwind@110616e0

void Unwind_110616e0(void)

{
  int unaff_EBP;
  
  FPropertyItemBase::~FPropertyItemBase(*(FPropertyItemBase **)(unaff_EBP + -0x10));
  return;
}


// ==== 110616e8 Unwind@110616e8

void Unwind_110616e8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110616eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + 0x10));
  return;
}


// ==== 110616f1 Unwind@110616f1

void Unwind_110616f1(void)

{
  int unaff_EBP;
  
  thunk_FUN_1101c4a0((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x58));
  return;
}


// ==== 11061710 Unwind@11061710

void Unwind_11061710(void)

{
  int unaff_EBP;
  
  FPropertyItemBase::~FPropertyItemBase(*(FPropertyItemBase **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061718 Unwind@11061718

void Unwind_11061718(void)

{
  int unaff_EBP;
  
  thunk_FUN_1101c4a0((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x58));
  return;
}


// ==== 11061740 Unwind@11061740

void Unwind_11061740(void)

{
  int unaff_EBP;
  
  FPropertyItemBase::~FPropertyItemBase(*(FPropertyItemBase **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061748 Unwind@11061748

void Unwind_11061748(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106174e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x50));
  return;
}


// ==== 11061770 Unwind@11061770

void Unwind_11061770(void)

{
  int unaff_EBP;
  
  FPropertyItemBase::~FPropertyItemBase(*(FPropertyItemBase **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061778 Unwind@11061778

void Unwind_11061778(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106177e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x50));
  return;
}


// ==== 110617a0 Unwind@110617a0

void Unwind_110617a0(void)

{
  int unaff_EBP;
  
  FHeaderItem::~FHeaderItem(*(FHeaderItem **)(unaff_EBP + -0x10));
  return;
}


// ==== 110617a8 Unwind@110617a8

void Unwind_110617a8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110617ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FPreferencesInfo::~FPreferencesInfo((FPreferencesInfo *)(*(int *)(unaff_EBP + -0x10) + 0x3c));
  return;
}


// ==== 110617d0 Unwind@110617d0

void Unwind_110617d0(void)

{
  int unaff_EBP;
  
  FHeaderItem::~FHeaderItem(*(FHeaderItem **)(unaff_EBP + -0x10));
  return;
}


// ==== 110617d8 Unwind@110617d8

void Unwind_110617d8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110617de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FPreferencesInfo::~FPreferencesInfo((FPreferencesInfo *)(*(int *)(unaff_EBP + -0x10) + 0x3c));
  return;
}


// ==== 110617e4 Unwind@110617e4

void Unwind_110617e4(void)

{
  int unaff_EBP;
  
  FTreeItem::~FTreeItem(*(FTreeItem **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061800 Unwind@11061800

void Unwind_11061800(void)

{
  int unaff_EBP;
  
  thunk_FUN_11004bc0(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ==== 11061820 Unwind@11061820

void Unwind_11061820(void)

{
  int unaff_EBP;
  
  thunk_FUN_11004bc0(*(undefined4 *)(unaff_EBP + 0x70));
  return;
}


// ==== 1106182b Unwind@1106182b

void Unwind_1106182b(void)

{
  int unaff_EBP;
  
  thunk_FUN_11004bc0(*(undefined4 *)(unaff_EBP + 0x6c));
  return;
}


// ==== 11061836 Unwind@11061836

void Unwind_11061836(void)

{
  int unaff_EBP;
  
  thunk_FUN_11004bc0(*(undefined4 *)(unaff_EBP + 0x6c));
  return;
}


// ==== 11061841 Unwind@11061841

void Unwind_11061841(void)

{
  int unaff_EBP;
  
  thunk_FUN_1101c590((FArray *)(unaff_EBP + 0x44));
  return;
}


// ==== 11061849 Unwind@11061849

void Unwind_11061849(void)

{
  int unaff_EBP;
  
  thunk_FUN_1101da60((FArray *)(unaff_EBP + 0x44));
  return;
}


// ==== 11061851 Unwind@11061851

void Unwind_11061851(void)

{
  FString *unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(unaff_EBP);
  return;
}


// ==== 1106185a Unwind@1106185a

void Unwind_1106185a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106185d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x1c));
  return;
}


// ==== 11061863 Unwind@11061863

void Unwind_11061863(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061866. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 100));
  return;
}


// ==== 1106186c Unwind@1106186c

void Unwind_1106186c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106186f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x38));
  return;
}


// ==== 11061875 Unwind@11061875

void Unwind_11061875(void)

{
  int unaff_EBP;
  
  thunk_FUN_11004bc0(*(undefined4 *)(unaff_EBP + 0x6c));
  return;
}


// ==== 110618c0 Unwind@110618c0

void Unwind_110618c0(void)

{
  int unaff_EBP;
  
  thunk_FUN_11004bc0(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}


// ==== 110618cb Unwind@110618cb

void Unwind_110618cb(void)

{
  int unaff_EBP;
  
  thunk_FUN_11004bc0(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}


// ==== 110618f0 Unwind@110618f0

void Unwind_110618f0(void)

{
  int unaff_EBP;
  
  thunk_FUN_11004bc0(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ==== 11061910 Unwind@11061910

void Unwind_11061910(void)

{
  int unaff_EBP;
  
  thunk_FUN_1101c590((FArray *)(unaff_EBP + -0x54));
  return;
}


// ==== 11061918 Unwind@11061918

void Unwind_11061918(void)

{
  int unaff_EBP;
  
  thunk_FUN_1101c590((FArray *)(unaff_EBP + -0x54));
  return;
}


// ==== 11061930 Unwind@11061930

void Unwind_11061930(void)

{
  int unaff_EBP;
  
  thunk_FUN_1101c590((FArray *)(unaff_EBP + -0x34));
  return;
}


// ==== 11061960 Unwind@11061960

void Unwind_11061960(void)

{
  int unaff_EBP;
  
  thunk_FUN_1101d9f0((FArray *)(unaff_EBP + -0x34));
  return;
}


// ==== 11061968 Unwind@11061968

void Unwind_11061968(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106196b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x40));
  return;
}


// ==== 110619a0 Unwind@110619a0

void Unwind_110619a0(void)

{
  int unaff_EBP;
  
  thunk_FUN_11004bc0(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}


// ==== 110619ab Unwind@110619ab

void Unwind_110619ab(void)

{
  int unaff_EBP;
  
  thunk_FUN_110228a0((undefined4 *)(unaff_EBP + -0x54));
  return;
}


// ==== 110619b3 Unwind@110619b3

void Unwind_110619b3(void)

{
  int unaff_EBP;
  
  thunk_FUN_11004bc0(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}


// ==== 110619e0 Unwind@110619e0

void Unwind_110619e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110619e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(unaff_EBP + -0x24));
  return;
}


// ==== 11061ad0 Unwind@11061ad0

void Unwind_11061ad0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(unaff_EBP + -0x34));
  return;
}


// ==== 11061af0 Unwind@11061af0

void Unwind_11061af0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061af3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x34));
  return;
}


// ==== 11061af9 Unwind@11061af9

void Unwind_11061af9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x40));
  return;
}


// ==== 11061b02 Unwind@11061b02

void Unwind_11061b02(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 11061b70 Unwind@11061b70

void Unwind_11061b70(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061b73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061b90 Unwind@11061b90

void Unwind_11061b90(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061b93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061bb0 Unwind@11061bb0

void Unwind_11061bb0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061bb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061c00 Unwind@11061c00

void Unwind_11061c00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061c03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061c09 Unwind@11061c09

void Unwind_11061c09(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061c0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 11061c30 Unwind@11061c30

void Unwind_11061c30(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061c33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0x10));
  return;
}


// ==== 11061c39 Unwind@11061c39

void Unwind_11061c39(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 4));
  return;
}


// ==== 11061c42 Unwind@11061c42

void Unwind_11061c42(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061c4b Unwind@11061c4b

void Unwind_11061c4b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061c51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 11061c70 Unwind@11061c70

void Unwind_11061c70(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061c73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061c79 Unwind@11061c79

void Unwind_11061c79(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061c7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 11061ca0 Unwind@11061ca0

void Unwind_11061ca0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061ca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061ca9 Unwind@11061ca9

void Unwind_11061ca9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061caf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


// ==== 11061cd0 Unwind@11061cd0

void Unwind_11061cd0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061cd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061cf0 Unwind@11061cf0

void Unwind_11061cf0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061cf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061d10 Unwind@11061d10

void Unwind_11061d10(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061d13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061d30 Unwind@11061d30

void Unwind_11061d30(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061d33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061d50 Unwind@11061d50

void Unwind_11061d50(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061d53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061d70 Unwind@11061d70

void Unwind_11061d70(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061d73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11061d90 Unwind@11061d90

void Unwind_11061d90(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061d96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}


// ==== 11061dc0 Unwind@11061dc0

void Unwind_11061dc0(void)

{
  DAT_1109f1dc = DAT_1109f1dc & 0xfffffffe;
  return;
}


// ==== 11061e00 Unwind@11061e00

void Unwind_11061e00(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x11061e13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 11061f70 Unwind@11061f70

void Unwind_11061f70(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061f73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x1c));
  return;
}


// ==== 11061f79 Unwind@11061f79

void Unwind_11061f79(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x3c));
  return;
}


// ==== 11061f82 Unwind@11061f82

void Unwind_11061f82(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11061f85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 11062020 Unwind@11062020

void Unwind_11062020(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062040 Unwind@11062040

void Unwind_11062040(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062060 Unwind@11062060

void Unwind_11062060(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062080 Unwind@11062080

void Unwind_11062080(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 110620a0 Unwind@110620a0

void Unwind_110620a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110620a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 110620c0 Unwind@110620c0

void Unwind_110620c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110620c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 110620e0 Unwind@110620e0

void Unwind_110620e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110620e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062100 Unwind@11062100

void Unwind_11062100(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062120 Unwind@11062120

void Unwind_11062120(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062123. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062140 Unwind@11062140

void Unwind_11062140(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062143. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062160 Unwind@11062160

void Unwind_11062160(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  USubsystem::~USubsystem(*(USubsystem **)(unaff_EBP + -0x18));
  return;
}


// ==== 11062180 Unwind@11062180

void Unwind_11062180(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  USubsystem::~USubsystem(*(USubsystem **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062260 Unwind@11062260

void Unwind_11062260(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 11062280 Unwind@11062280

void Unwind_11062280(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 11062340 Unwind@11062340

void Unwind_11062340(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062360 Unwind@11062360

void Unwind_11062360(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062363. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062380 Unwind@11062380

void Unwind_11062380(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 110623a0 Unwind@110623a0

void Unwind_110623a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110623a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 110623c0 Unwind@110623c0

void Unwind_110623c0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110623c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 110623e0 Unwind@110623e0

void Unwind_110623e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110623e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062400 Unwind@11062400

void Unwind_11062400(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062403. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062420 Unwind@11062420

void Unwind_11062420(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x14));
  return;
}


// ==== 11062440 Unwind@11062440

void Unwind_11062440(void)

{
  int unaff_EBP;
  
  thunk_FUN_1100e550((FArray *)(*(int *)(unaff_EBP + -0x1c) + 0x20));
  return;
}


// ==== 11062470 Unwind@11062470

void Unwind_11062470(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 11062490 Unwind@11062490

void Unwind_11062490(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 110624d0 Unwind@110624d0

void Unwind_110624d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110624d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray((FArray *)(unaff_EBP + -0x30));
  return;
}


// ==== 110624d9 Unwind@110624d9

void Unwind_110624d9(void)

{
  int unaff_EBP;
  
  thunk_FUN_1102e5a0((FArray *)(unaff_EBP + -0x30));
  return;
}


// ==== 110624e1 Unwind@110624e1

void Unwind_110624e1(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110624e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x54));
  return;
}


// ==== 110624ea Unwind@110624ea

void Unwind_110624ea(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110624ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x48));
  return;
}


// ==== 110624f3 Unwind@110624f3

void Unwind_110624f3(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110624f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray((FArray *)(unaff_EBP + -0x3c));
  return;
}


// ==== 110624fc Unwind@110624fc

void Unwind_110624fc(void)

{
  int unaff_EBP;
  
  thunk_FUN_1102e660((FArray *)(unaff_EBP + -0x3c));
  return;
}


// ==== 11062504 Unwind@11062504

void Unwind_11062504(void)

{
  int unaff_EBP;
  
  thunk_FUN_11004bc0(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ==== 1106250f Unwind@1106250f

void Unwind_1106250f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062512. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x1c));
  return;
}


// ==== 11062518 Unwind@11062518

void Unwind_11062518(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106251b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 11062521 Unwind@11062521

void Unwind_11062521(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray((FArray *)(unaff_EBP + -0x3c));
  return;
}


// ==== 1106252a Unwind@1106252a

void Unwind_1106252a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106252d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x54));
  return;
}


// ==== 11062533 Unwind@11062533

void Unwind_11062533(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x20));
  return;
}


// ==== 1106253c Unwind@1106253c

void Unwind_1106253c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x20) + 0xc));
  return;
}


// ==== 110625b0 Unwind@110625b0

void Unwind_110625b0(void)

{
  int unaff_EBP;
  
  thunk_FUN_1100e550((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x20));
  return;
}


// ==== 110625d0 Unwind@110625d0

void Unwind_110625d0(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x14));
  return;
}


// ==== 110625f0 Unwind@110625f0

void Unwind_110625f0(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062610 Unwind@11062610

void Unwind_11062610(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062630 Unwind@11062630

void Unwind_11062630(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062650 Unwind@11062650

void Unwind_11062650(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062670 Unwind@11062670

void Unwind_11062670(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062690 Unwind@11062690

void Unwind_11062690(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 110626b0 Unwind@110626b0

void Unwind_110626b0(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 110626d0 Unwind@110626d0

void Unwind_110626d0(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 110626f0 Unwind@110626f0

void Unwind_110626f0(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062710 Unwind@11062710

void Unwind_11062710(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062718 Unwind@11062718

void Unwind_11062718(void)

{
  int unaff_EBP;
  
  thunk_FUN_1102e870((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x44));
  return;
}


// ==== 11062740 Unwind@11062740

void Unwind_11062740(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x14));
  return;
}


// ==== 11062748 Unwind@11062748

void Unwind_11062748(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106274b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062751 Unwind@11062751

void Unwind_11062751(void)

{
  int unaff_EBP;
  
  thunk_FUN_1102e870((FArray *)(*(int *)(unaff_EBP + -0x14) + 0x44));
  return;
}


// ==== 11062770 Unwind@11062770

void Unwind_11062770(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062778 Unwind@11062778

void Unwind_11062778(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1106277b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + 0xc));
  return;
}


// ==== 11062781 Unwind@11062781

void Unwind_11062781(void)

{
  int unaff_EBP;
  
  thunk_FUN_1102e870((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x44));
  return;
}


// ==== 110627a0 Unwind@110627a0

void Unwind_110627a0(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 110627a8 Unwind@110627a8

void Unwind_110627a8(void)

{
  int unaff_EBP;
  
  thunk_FUN_1102e870((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x44));
  return;
}


// ==== 110627d0 Unwind@110627d0

void Unwind_110627d0(void)

{
  int unaff_EBP;
  
  WLabel::~WLabel(*(WLabel **)(unaff_EBP + -0x10));
  return;
}


// ==== 110627f0 Unwind@110627f0

void Unwind_110627f0(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 110627f8 Unwind@110627f8

void Unwind_110627f8(void)

{
  int unaff_EBP;
  
  WLabel::~WLabel(*(WLabel **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062810 Unwind@11062810

void Unwind_11062810(void)

{
  int unaff_EBP;
  
  WLabel::~WLabel(*(WLabel **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062830 Unwind@11062830

void Unwind_11062830(void)

{
  int unaff_EBP;
  
  WLabel::~WLabel(*(WLabel **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062850 Unwind@11062850

void Unwind_11062850(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062870 Unwind@11062870

void Unwind_11062870(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062890 Unwind@11062890

void Unwind_11062890(void)

{
  int unaff_EBP;
  
  WButton::~WButton(*(WButton **)(unaff_EBP + -0x10));
  return;
}


// ==== 110628b0 Unwind@110628b0

void Unwind_110628b0(void)

{
  int unaff_EBP;
  
  WButton::~WButton(*(WButton **)(unaff_EBP + -0x10));
  return;
}


// ==== 110628d0 Unwind@110628d0

void Unwind_110628d0(void)

{
  int unaff_EBP;
  
  WButton::~WButton(*(WButton **)(unaff_EBP + -0x10));
  return;
}


// ==== 110628f0 Unwind@110628f0

void Unwind_110628f0(void)

{
  int unaff_EBP;
  
  WButton::~WButton(*(WButton **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062910 Unwind@11062910

void Unwind_11062910(void)

{
  int unaff_EBP;
  
  WButton::~WButton(*(WButton **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062930 Unwind@11062930

void Unwind_11062930(void)

{
  int unaff_EBP;
  
  WButton::~WButton(*(WButton **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062950 Unwind@11062950

void Unwind_11062950(void)

{
  int unaff_EBP;
  
  WButton::~WButton(*(WButton **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062970 Unwind@11062970

void Unwind_11062970(void)

{
  int unaff_EBP;
  
  WButton::~WButton(*(WButton **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062990 Unwind@11062990

void Unwind_11062990(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 110629b0 Unwind@110629b0

void Unwind_110629b0(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 110629d0 Unwind@110629d0

void Unwind_110629d0(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 110629f0 Unwind@110629f0

void Unwind_110629f0(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062a10 Unwind@11062a10

void Unwind_11062a10(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062a30 Unwind@11062a30

void Unwind_11062a30(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062a50 Unwind@11062a50

void Unwind_11062a50(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062a70 Unwind@11062a70

void Unwind_11062a70(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062a90 Unwind@11062a90

void Unwind_11062a90(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062a98 Unwind@11062a98

void Unwind_11062a98(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062a9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x74));
  return;
}


// ==== 11062ac0 Unwind@11062ac0

void Unwind_11062ac0(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062ac8 Unwind@11062ac8

void Unwind_11062ac8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062ace. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x74));
  return;
}


// ==== 11062af0 Unwind@11062af0

void Unwind_11062af0(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062af8 Unwind@11062af8

void Unwind_11062af8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062afe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x74));
  return;
}


// ==== 11062b20 Unwind@11062b20

void Unwind_11062b20(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062b40 Unwind@11062b40

void Unwind_11062b40(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062b60 Unwind@11062b60

void Unwind_11062b60(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062b80 Unwind@11062b80

void Unwind_11062b80(void)

{
  int unaff_EBP;
  
  WButton::~WButton(*(WButton **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062ba0 Unwind@11062ba0

void Unwind_11062ba0(void)

{
  int unaff_EBP;
  
  WButton::~WButton(*(WButton **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062bc0 Unwind@11062bc0

void Unwind_11062bc0(void)

{
  int unaff_EBP;
  
  WButton::~WButton(*(WButton **)(unaff_EBP + -0x14));
  return;
}


// ==== 11062be0 Unwind@11062be0

void Unwind_11062be0(void)

{
  int unaff_EBP;
  
  WButton::~WButton(*(WButton **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062c00 Unwind@11062c00

void Unwind_11062c00(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062c20 Unwind@11062c20

void Unwind_11062c20(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062c40 Unwind@11062c40

void Unwind_11062c40(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062c60 Unwind@11062c60

void Unwind_11062c60(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062c80 Unwind@11062c80

void Unwind_11062c80(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062ca0 Unwind@11062ca0

void Unwind_11062ca0(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062cc0 Unwind@11062cc0

void Unwind_11062cc0(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062ce0 Unwind@11062ce0

void Unwind_11062ce0(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062d00 Unwind@11062d00

void Unwind_11062d00(void)

{
  int unaff_EBP;
  
  WButton::~WButton(*(WButton **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062d20 Unwind@11062d20

void Unwind_11062d20(void)

{
  int unaff_EBP;
  
  WButton::~WButton(*(WButton **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062d40 Unwind@11062d40

void Unwind_11062d40(void)

{
  int unaff_EBP;
  
  WCoolButton::~WCoolButton(*(WCoolButton **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062d48 Unwind@11062d48

void Unwind_11062d48(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062d51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x9c));
  return;
}


// ==== 11062d70 Unwind@11062d70

void Unwind_11062d70(void)

{
  int unaff_EBP;
  
  WButton::~WButton(*(WButton **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062d78 Unwind@11062d78

void Unwind_11062d78(void)

{
  int unaff_EBP;
  
  WCoolButton::~WCoolButton(*(WCoolButton **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062d80 Unwind@11062d80

void Unwind_11062d80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062d89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x9c));
  return;
}


// ==== 11062db0 Unwind@11062db0

void Unwind_11062db0(void)

{
  int unaff_EBP;
  
  WCoolButton::~WCoolButton(*(WCoolButton **)(unaff_EBP + -0x14));
  return;
}


// ==== 11062db8 Unwind@11062db8

void Unwind_11062db8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062dc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x9c));
  return;
}


// ==== 11062de0 Unwind@11062de0

void Unwind_11062de0(void)

{
  int unaff_EBP;
  
  WCoolButton::~WCoolButton(*(WCoolButton **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062de8 Unwind@11062de8

void Unwind_11062de8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11062df1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x9c));
  return;
}


// ==== 11062e10 Unwind@11062e10

void Unwind_11062e10(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062e30 Unwind@11062e30

void Unwind_11062e30(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062e50 Unwind@11062e50

void Unwind_11062e50(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062e70 Unwind@11062e70

void Unwind_11062e70(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062e90 Unwind@11062e90

void Unwind_11062e90(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062eb0 Unwind@11062eb0

void Unwind_11062eb0(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062ed0 Unwind@11062ed0

void Unwind_11062ed0(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062ef0 Unwind@11062ef0

void Unwind_11062ef0(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062f10 Unwind@11062f10

void Unwind_11062f10(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062f30 Unwind@11062f30

void Unwind_11062f30(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x14));
  return;
}


// ==== 11062f50 Unwind@11062f50

void Unwind_11062f50(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062f70 Unwind@11062f70

void Unwind_11062f70(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062f90 Unwind@11062f90

void Unwind_11062f90(void)

{
  int unaff_EBP;
  
  WEdit::~WEdit(*(WEdit **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062fb0 Unwind@11062fb0

void Unwind_11062fb0(void)

{
  int unaff_EBP;
  
  WControl::~WControl(*(WControl **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062fb8 Unwind@11062fb8

void Unwind_11062fb8(void)

{
  int unaff_EBP;
  
  WEdit::~WEdit(*(WEdit **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062fd0 Unwind@11062fd0

void Unwind_11062fd0(void)

{
  int unaff_EBP;
  
  WEdit::~WEdit(*(WEdit **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062ff0 Unwind@11062ff0

void Unwind_11062ff0(void)

{
  int unaff_EBP;
  
  WTerminalBase::~WTerminalBase(*(WTerminalBase **)(unaff_EBP + -0x10));
  return;
}


// ==== 11062ff8 Unwind@11062ff8

void Unwind_11062ff8(void)

{
  int unaff_EBP;
  
  WEditTerminal::~WEditTerminal((WEditTerminal *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}


// ==== 11063020 Unwind@11063020

void Unwind_11063020(void)

{
  int unaff_EBP;
  
  WTerminalBase::~WTerminalBase(*(WTerminalBase **)(unaff_EBP + -0x10));
  return;
}


// ==== 11063028 Unwind@11063028

void Unwind_11063028(void)

{
  int unaff_EBP;
  
  WEditTerminal::~WEditTerminal((WEditTerminal *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}


// ==== 11063050 Unwind@11063050

void Unwind_11063050(void)

{
  int unaff_EBP;
  
  WTerminalBase::~WTerminalBase(*(WTerminalBase **)(unaff_EBP + -0x10));
  return;
}


// ==== 11063058 Unwind@11063058

void Unwind_11063058(void)

{
  int unaff_EBP;
  
  WEditTerminal::~WEditTerminal((WEditTerminal *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}


// ==== 11063080 Unwind@11063080

void Unwind_11063080(void)

{
  int unaff_EBP;
  
  WTerminalBase::~WTerminalBase(*(WTerminalBase **)(unaff_EBP + -0x10));
  return;
}


// ==== 11063088 Unwind@11063088

void Unwind_11063088(void)

{
  int unaff_EBP;
  
  WEditTerminal::~WEditTerminal((WEditTerminal *)(*(int *)(unaff_EBP + -0x10) + 0x40));
  return;
}


// ==== 110630b0 Unwind@110630b0

void Unwind_110630b0(void)

{
  int unaff_EBP;
  
  WTerminal::~WTerminal(*(WTerminal **)(unaff_EBP + -0x10));
  return;
}


// ==== 110630b8 Unwind@110630b8

void Unwind_110630b8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110630c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x2b4));
  return;
}


// ==== 110630e0 Unwind@110630e0

void Unwind_110630e0(void)

{
  int unaff_EBP;
  
  WTerminal::~WTerminal(*(WTerminal **)(unaff_EBP + -0x10));
  return;
}


// ==== 110630e8 Unwind@110630e8

void Unwind_110630e8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x110630f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x2b4));
  return;
}


// ==== 11063110 Unwind@11063110

void Unwind_11063110(void)

{
  int unaff_EBP;
  
  WTerminal::~WTerminal(*(WTerminal **)(unaff_EBP + -0x10));
  return;
}


// ==== 11063118 Unwind@11063118

void Unwind_11063118(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11063121. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x2b4));
  return;
}


// ==== 11063140 Unwind@11063140

void Unwind_11063140(void)

{
  int unaff_EBP;
  
  WTerminal::~WTerminal(*(WTerminal **)(unaff_EBP + -0x10));
  return;
}


// ==== 11063148 Unwind@11063148

void Unwind_11063148(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x11063151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x2b4));
  return;
}


// ==== 11063170 Unwind@11063170

void Unwind_11063170(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x14));
  return;
}


// ==== 11063190 Unwind@11063190

void Unwind_11063190(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 110631b0 Unwind@110631b0

void Unwind_110631b0(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 110631d0 Unwind@110631d0

void Unwind_110631d0(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 110631f0 Unwind@110631f0

void Unwind_110631f0(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11063210 Unwind@11063210

void Unwind_11063210(void)

{
  int unaff_EBP;
  
  WWindow::~WWindow(*(WWindow **)(unaff_EBP + -0x10));
  return;
}


// ==== 11063230 Unwind@11063230

void Unwind_11063230(void)

{
  int unaff_EBP;
  
  WDialog::~WDialog(*(WDialog **)(unaff_EBP + -0x10));
  return;
}


