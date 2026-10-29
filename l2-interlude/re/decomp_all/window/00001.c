// ==== 1100277a thunk_FUN_110072d0 thunk -> 110072d0

// ==== 1100277f thunk_FUN_1102b200 thunk -> 1102b200

// ==== 11002784 WItemBox::OnEraseBkgnd

/* public: virtual int __thiscall WItemBox::OnEraseBkgnd(void) */

int __thiscall WItemBox::OnEraseBkgnd(WItemBox *this)

{
                    /* 0x2784  733  ?OnEraseBkgnd@WItemBox@@UAEHXZ */
  return 1;
}


// ==== 11002789 WTerminal::OnCreate

/* public: virtual void __thiscall WTerminal::OnCreate(void) */

void __thiscall WTerminal::OnCreate(WTerminal *this)

{
  WEdit *this_00;
  HFONT__ *pHVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2789  711  ?OnCreate@WTerminal@@UAEXXZ */
  puStack_c = &LAB_11061f00;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  this_00 = (WEdit *)(this + 0x40);
  ExceptionList = &pvStack_10;
  WEdit::OpenWindow(this_00,1,1,1,0,0,0);
  pHVar1 = GetStockObject(0x11);
  WWindow::SetFont((WWindow *)this_00,pHVar1);
  (**(code **)(*(int *)this_00 + 0x2c))(this + 0xa8);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100278e thunk_FUN_110228a0 thunk -> 110228a0

// ==== 11002793 thunk_FUN_11026290 thunk -> 11026290

// ==== 11002798 WUDNWindow::OnMouseMove

/* public: virtual void __thiscall WUDNWindow::OnMouseMove(unsigned long,struct FPoint) */

void __thiscall WUDNWindow::OnMouseMove(void)

{
  POINT Point;
  HWND hWnd;
  int iVar1;
  HCURSOR pHVar2;
  LPCWSTR lpCursorName;
  tagPOINT tStack_8;
  
                    /* 0x2798  792  ?OnMouseMove@WUDNWindow@@UAEXKUFPoint@@@Z */
  GetCursorPos(&tStack_8);
  Point.y = tStack_8.y;
  Point.x = tStack_8.x;
  hWnd = WindowFromPoint(Point);
  if (*(int *)GUnicodeOS_exref == 0) {
    iVar1 = SendMessageA(hWnd,0x8034,0,0);
  }
  else {
    iVar1 = SendMessageW(hWnd,0x8034,0,0);
  }
  if (iVar1 == 0) {
    lpCursorName = (LPCWSTR)0x5a5;
  }
  else {
    lpCursorName = (LPCWSTR)0x5a6;
  }
  if (*(int *)GUnicodeOS_exref != 0) {
    pHVar2 = LoadCursorW(DAT_1109c35c,lpCursorName);
    SetCursor(pHVar2);
    return;
  }
  pHVar2 = LoadCursorA(DAT_1109c35c,(LPCSTR)lpCursorName);
  SetCursor(pHVar2);
  return;
}


// ==== 110027a2 WPropertySheet::OnCreate

/* public: virtual void __thiscall WPropertySheet::OnCreate(void) */

void __thiscall WPropertySheet::OnCreate(WPropertySheet *this)

{
  int iVar1;
  WTabControl *pWVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x27a2  710  ?OnCreate@WPropertySheet@@UAEXXZ */
  puStack_c = &LAB_1106012b;
  pvStack_10 = ExceptionList;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::OnCreate((WWindow *)this);
  pWVar2 = (WTabControl *)thunk_FUN_11004ba0(0x4c);
  iStack_8._0_1_ = 1;
  if (pWVar2 == (WTabControl *)0x0) {
    pWVar2 = (WTabControl *)0x0;
  }
  else {
    pWVar2 = (WTabControl *)
             WTabControl::WTabControl
                       (pWVar2,(WWindow *)this,0x4dbc,(_func_long_HWND___ptr_uint_uint_long *)0x0);
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  *(WTabControl **)(this + 0x40) = pWVar2;
  WTabControl::OpenWindow(pWVar2,1,-(uint)(*(int *)(this + 0x58) != 0) & 0x200);
  iVar1 = *(int *)(this + 0x40);
  *(WPropertySheet **)(iVar1 + 0x44) = this;
  *(code **)(iVar1 + 0x48) = OnTabsSelChange;
  ExceptionList = pvStack_10;
  return;
}


// ==== 110027a7 WWindow::ResizeWindow

/* public: void __thiscall WWindow::ResizeWindow(int,int,int) */

void __thiscall WWindow::ResizeWindow(WWindow *this,int param_1,int param_2,int param_3)

{
  int unaff_ESI;
  int unaff_retaddr;
  int aiStack_10 [4];
  
                    /* 0x27a7  899  ?ResizeWindow@WWindow@@QAEXHHH@Z */
  GetWindowRect(this,(int)aiStack_10);
  ::MoveWindow(*(HWND *)(this + 4),unaff_ESI,aiStack_10[0],unaff_retaddr,param_1,param_2);
  return;
}


// ==== 110027b1 WBitmapButton::GetWindowClassName

/* public: virtual void __thiscall WBitmapButton::GetWindowClassName(unsigned short *) */

void __thiscall WBitmapButton::GetWindowClassName(WBitmapButton *this,ushort *param_1)

{
                    /* 0x27b1  600  ?GetWindowClassName@WBitmapButton@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WBitmapButton_1106facc);
  return;
}


// ==== 110027b6 WItemBox::OnDrawItem

/* public: virtual void __thiscall WItemBox::OnDrawItem(struct tagDRAWITEMSTRUCT *) */

void __thiscall WItemBox::OnDrawItem(WItemBox *this,tagDRAWITEMSTRUCT *param_1)

{
                    /* 0x27b6  730  ?OnDrawItem@WItemBox@@UAEXPAUtagDRAWITEMSTRUCT@@@Z */
  if (*(int *)(param_1 + 0x2c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0xc))(*(uint *)(param_1 + 0x10) & 1);
                    /* WARNING: Could not recover jumptable at 0x1100673c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x2c) + 4))();
    return;
  }
  return;
}


// ==== 110027bb WProperties::BeginSplitterDrag

/* public: virtual void __thiscall WProperties::BeginSplitterDrag(void) */

void __thiscall WProperties::BeginSplitterDrag(WProperties *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *this_00;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 auStack_4c [8];
  undefined4 uStack_44;
  int aiStack_3c [2];
  undefined4 auStack_34 [2];
  undefined4 uStack_2c;
  undefined4 uStack_1c;
  WDragInterceptor *pWStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x27bb  405  ?BeginSplitterDrag@WProperties@@UAEXXZ */
  puStack_c = &LAB_110618fb;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffa8;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(*(int *)this + 0xf4))(0);
  pWStack_18 = (WDragInterceptor *)thunk_FUN_11004ba0(0x78);
  iStack_8._0_1_ = 1;
  if (pWStack_18 == (WDragInterceptor *)0x0) {
    uVar2 = 0;
  }
  else {
    auStack_34[0] = 3;
    uStack_2c = 0;
    puVar5 = auStack_4c;
    puVar1 = (undefined4 *)WWindow::GetClientRect((WWindow *)this);
    uVar2 = WDragInterceptor::WDragInterceptor
                      (pWStack_18,this,uStack_2c,0xffffffff,*puVar1,puVar1[1],puVar1[2],puVar1[3],3,
                       3,puVar5);
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  *(undefined4 *)(this + 0xf0) = uVar2;
  puVar1 = auStack_34;
  iVar3 = WWindow::GetCursorPos((WWindow *)this);
  uVar2 = *(undefined4 *)(iVar3 + 4);
  uStack_1c = (**(code **)(*(int *)this + 0xec))(puVar1);
  iVar3 = *(int *)(this + 0xf0);
  *(undefined4 *)(iVar3 + 0x4c) = uStack_1c;
  *(undefined4 *)(iVar3 + 0x50) = uVar2;
  uStack_44 = 0x40;
  uVar2 = 0;
  iVar3 = 0x40;
  puVar5 = auStack_4c;
  piVar4 = aiStack_3c;
  this_00 = (void *)WWindow::GetClientRect((WWindow *)this);
  puVar1 = (undefined4 *)thunk_FUN_11014430(this_00,piVar4,(int)puVar5,iVar3);
  iVar3 = *(int *)(this + 0xf0);
  *(undefined4 *)(iVar3 + 100) = *puVar1;
  *(undefined4 *)(iVar3 + 0x68) = puVar1[1];
  *(undefined4 *)(iVar3 + 0x6c) = puVar1[2];
  *(undefined4 *)(iVar3 + 0x70) = puVar1[3];
  (**(code **)(**(int **)(this + 0xf0) + 0xe8))(uVar2);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110027c0 WWizardDialog::OnInitDialog

/* public: virtual void __thiscall WWizardDialog::OnInitDialog(void) */

void __thiscall WWizardDialog::OnInitDialog(WWizardDialog *this)

{
  HICON pHVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x27c0  743  ?OnInitDialog@WWizardDialog@@UAEXXZ */
  puStack_c = &LAB_11060240;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WDialog::OnInitDialog((WDialog *)this);
  if (*(int *)GUnicodeOS_exref == 0) {
    pHVar1 = LoadIconA(DAT_1109c35c,
                       (LPCSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    SendMessageA(*(HWND *)(this + 4),0x80,1,(LPARAM)pHVar1);
  }
  else {
    pHVar1 = LoadIconW(DAT_1109c35c,
                       (LPCWSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    SendMessageW(*(HWND *)(this + 4),0x80,1,(LPARAM)pHVar1);
  }
  (**(code **)(*(int *)this + 0xf4))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 110027c5 thunk_FUN_1102c1f0 thunk -> 1102c1f0

// ==== 110027cf WListBox::OpenWindow

/* public: void __thiscall WListBox::OpenWindow(int,int,int,int,int,unsigned long) */

void __thiscall
WListBox::OpenWindow
          (WListBox *this,int param_1,int param_2,int param_3,int param_4,int param_5,ulong param_6)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x27cf  862  ?OpenWindow@WListBox@@QAEXHHHHHK@Z */
  puStack_c = &LAB_1105fd20;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(this + 0x88) = param_3;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0x200,(ushort *)0x0,
             -(uint)(param_1 != 0) & 0x10000000 | -(uint)(param_3 != 0) & 0x808 |
             (-(uint)(param_2 != 0) & 0xffffff00) + 0x100 | -(uint)(param_4 != 0) & 0x20 |
             -(uint)(param_5 != 0) & 2 | param_6 | 0x42a00001,0,0,0,0,
             *(HWND__ **)(*(int *)(this + 0x14) + 4),(HMENU__ *)(uint)*(ushort *)(this + 0xc),
             DAT_1109c35c);
  hWnd = *(HWND *)(this + 4);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110027d4 WPropertySheet::SetCurrent

/* public: int __thiscall WPropertySheet::SetCurrent(int) */

int __thiscall WPropertySheet::SetCurrent(WPropertySheet *this,int param_1)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x27d4  924  ?SetCurrent@WPropertySheet@@QAEHH@Z */
  puStack_c = &LAB_1105f9f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = WTabControl::SetCurrent(*(WTabControl **)(this + 0x40),param_1);
  RefreshPages(this);
  if (*(FContainer **)(this + 0x50) != (FContainer *)0x0) {
    FContainer::RefreshControls(*(FContainer **)(this + 0x50));
  }
  ExceptionList = pvStack_10;
  return iVar1;
}


// ==== 110027d9 WSplitter::PositionSplitter

/* public: void __thiscall WSplitter::PositionSplitter(void) */

void __thiscall WSplitter::PositionSplitter(WSplitter *this)

{
  HWND hWnd;
  undefined4 extraout_EDX;
  ulonglong uVar1;
  int X;
  int Y;
  int iVar2;
  BOOL bRepaint;
  tagRECT tStack_30;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x27d9  887  ?PositionSplitter@WSplitter@@QAEXXZ */
  puStack_c = &LAB_11062320;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  GetClientRect(*(HWND *)(*(int *)(this + 0x14) + 4),&tStack_30);
  bRepaint = 1;
  if (*(int *)(this + 0x3c) == 0) {
    iVar2 = 6;
    iStack_18 = tStack_30.bottom + -6;
    uVar1 = FUN_1103b180(iStack_18,extraout_EDX);
    Y = (int)uVar1;
    X = 0;
  }
  else {
    iVar2 = 6;
    Y = 0;
    iStack_18 = tStack_30.right + -6;
    uVar1 = FUN_1103b180(iStack_18,extraout_EDX);
    X = (int)uVar1;
    tStack_30.right = iVar2;
    iVar2 = tStack_30.bottom;
  }
  MoveWindow(*(HWND *)(this + 4),X,Y,tStack_30.right,iVar2,bRepaint);
  WSplitterContainer::PositionPanes(*(WSplitterContainer **)(this + 0x14));
  hWnd = *(HWND *)(*(int *)(*(int *)(this + 0x14) + 0x14) + 4);
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(hWnd,0x111,0x8035,0);
  }
  else {
    SendMessageW(hWnd,0x111,0x8035,0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110027de WListBox::GetTop

/* public: int __thiscall WListBox::GetTop(void) */

int __thiscall WListBox::GetTop(WListBox *this)

{
  LRESULT LVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x27de  598  ?GetTop@WListBox@@QAEHXZ */
  puStack_c = &LAB_1105fdc0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &pvStack_10;
    LVar1 = SendMessageW(*(HWND *)(this + 4),0x18e,0,0);
    ExceptionList = pvStack_10;
    return LVar1;
  }
  ExceptionList = &pvStack_10;
  LVar1 = SendMessageA(*(HWND *)(this + 4),0x18e,0,0);
  ExceptionList = pvStack_10;
  return LVar1;
}


// ==== 110027e3 WProperties::ExpandAll

/* public: virtual void __thiscall WProperties::ExpandAll(void) */

void __thiscall WProperties::ExpandAll(WProperties *this)

{
  int iVar1;
  FTreeItem *pFVar2;
  int iVar3;
  
                    /* 0x27e3  455  ?ExpandAll@WProperties@@UAEXXZ */
  iVar3 = 0;
  iVar1 = WListBox::GetCount((WListBox *)(this + 0x44));
  if (0 < iVar1) {
    do {
      pFVar2 = WPropertiesBase::GetListItem((WPropertiesBase *)this,iVar3);
      if ((*(int *)(pFVar2 + 0x10) != 0) && (*(int *)(pFVar2 + 0x14) == 0)) {
        (**(code **)(*(int *)pFVar2 + 0x54))();
      }
      iVar3 = iVar3 + 1;
      iVar1 = WListBox::GetCount((WListBox *)(this + 0x44));
    } while (iVar3 < iVar1);
  }
  return;
}


// ==== 110027e8 thunk_FUN_11039a00 thunk -> 11039a00

// ==== 110027ed WUDNWindow::WUDNWindow

/* public: __thiscall WUDNWindow::WUDNWindow(class WWindow *) */

WUDNWindow * __thiscall WUDNWindow::WUDNWindow(WUDNWindow *this,WWindow *param_1)

{
  void *unaff_ESI;
  WUDNWindow *pWStack_1c;
  WWindow *pWStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x27ed  167  ??0WUDNWindow@@QAE@PAVWWindow@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062b48;
  pvStack_c = ExceptionList;
  pWStack_18 = param_1;
  ExceptionList = &pvStack_c;
  pWStack_1c = this;
  FName::FName((FName *)&pWStack_1c,(ushort *)&DAT_11071f84,1);
  WWindow::WWindow((WWindow *)this);
  *(undefined ***)this = vftable;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 110027f2 FNewObjectItem::OnItemSetFocus

/* public: virtual void __thiscall FNewObjectItem::OnItemSetFocus(void) */

void __thiscall FNewObjectItem::OnItemSetFocus(FNewObjectItem *this)

{
  UObject *this_00;
  WLabel *pWVar1;
  ushort *puVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined **ppuStack_8c;
  FNewObjectItem *pFStack_88;
  code *pcStack_84;
  int aiStack_74 [11];
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined **ppuStack_34;
  undefined **ppuStack_24;
  undefined4 uStack_20;
  WLabel *pWStack_1c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x27f2  755  ?OnItemSetFocus@FNewObjectItem@@UAEXXZ */
  puStack_c = &LAB_110618d6;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff80;
  iStack_8 = 0;
  pcStack_84 = (code *)0x1102130d;
  ExceptionList = &pvStack_10;
  FHeaderItem::OnItemSetFocus((FHeaderItem *)this);
  pWStack_1c = (WLabel *)&ppuStack_8c;
  ppuStack_8c = FDelegate::vftable;
  pcStack_84 = OnNew;
  iVar4 = *(int *)this;
  pFStack_88 = this;
  puVar2 = LocalizeGeneral(&DAT_1106dac4,(ushort *)u_Window_1106949c,(ushort *)0x0);
  (**(code **)(iVar4 + 0x34))(puVar2);
  aiStack_74[10] = -1 - *(int *)(this + 0x20);
  aiStack_74[8] = 0;
  aiStack_74[9] = 0;
  uStack_48 = 0xffffffff;
  piVar5 = &iStack_44;
  piVar8 = aiStack_74;
  pvVar3 = (void *)(**(code **)(*(int *)this + 0x24))(piVar8,piVar5,aiStack_74 + 8);
  thunk_FUN_110143f0(pvVar3,piVar8,piVar5);
  iStack_44 = (**(code **)(**(int **)(this + 8) + 0xec))();
  pWStack_1c = (WLabel *)thunk_FUN_11004ba0(0x40);
  iStack_8._0_1_ = 1;
  if (pWStack_1c == (WLabel *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = WLabel::WLabel(pWStack_1c,(WWindow *)(*(int *)(this + 8) + 0x44),0,
                           (_func_long_HWND___ptr_uint_uint_long *)0x0);
  }
  iStack_8._0_1_ = 0;
  *(int *)(this + 0x44) = iVar4;
  *(FNewObjectItem **)(iVar4 + 0x1c) = this + 4;
  WLabel::OpenWindow(*(WLabel **)(this + 0x44),0,1,0);
  aiStack_74[4] = 0;
  aiStack_74[5] = 0;
  aiStack_74[6] = 0;
  aiStack_74[7] = 1;
  piVar5 = aiStack_74 + 4;
  piVar8 = aiStack_74 + 8;
  pvVar3 = (void *)thunk_FUN_1101c460(&iStack_44,aiStack_74,0x14);
  thunk_FUN_110143f0(pvVar3,piVar8,piVar5);
  WWindow::MoveWindow(*(WWindow **)(this + 0x44),aiStack_74[8],aiStack_74[9],aiStack_74[10],
                      uStack_48,0);
  aiStack_74[0] = -2;
  aiStack_74[1] = 0xfffffffa;
  aiStack_74[2] = 0xfffffffe;
  aiStack_74[3] = 0;
  piVar5 = (int *)thunk_FUN_110143f0(&iStack_44,aiStack_74 + 4,aiStack_74);
  iStack_44 = *piVar5;
  iStack_40 = piVar5[1];
  iStack_3c = piVar5[2];
  iStack_38 = piVar5[3];
  pWStack_1c = (WLabel *)thunk_FUN_11004ba0(0xb8);
  iStack_8._0_1_ = 2;
  if (pWStack_1c == (WLabel *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = WComboBox::WComboBox
                      ((WComboBox *)pWStack_1c,*(WWindow **)(this + 0x44),0,
                       (_func_long_HWND___ptr_uint_uint_long *)0x0);
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  *(int *)(this + 0x40) = iVar4;
  *(FNewObjectItem **)(iVar4 + 0x1c) = this + 4;
  ppuStack_24 = FDelegate::vftable;
  iVar4 = *(int *)(this + 0x40);
  *(FNewObjectItem **)(iVar4 + 0xa4) = this;
  *(code **)(iVar4 + 0xa8) = ComboSelectionEndOk;
  ppuStack_34 = FDelegate::vftable;
  iVar4 = *(int *)(this + 0x40);
  *(FNewObjectItem **)(iVar4 + 0xb0) = this;
  *(code **)(iVar4 + 0xb4) = ComboSelectionEndCancel;
  WComboBox::OpenWindow(*(WComboBox **)(this + 0x40),0,1,3);
  puVar6 = (undefined4 *)thunk_FUN_110143a0(&iStack_44,aiStack_74,aiStack_74 + 8);
  WWindow::MoveWindow(*(WWindow **)(this + 0x40),*puVar6,puVar6[1],puVar6[2],puVar6[3],1);
  thunk_FUN_1101dd00(&uStack_20);
  while( true ) {
    pWVar1 = pWStack_1c;
    if (*(int *)(GObjObjects_exref + 4) <= (int)pWStack_1c) break;
    iVar4 = UStruct::IsChildOf(*(UStruct **)(*(int *)GObjObjects_exref + (int)pWStack_1c * 4),
                               *(UStruct **)(*(int *)(this + 0x3c) + 0x78));
    if (((iVar4 != 0) &&
        (this_00 = *(UObject **)(*(int *)GObjObjects_exref + (int)pWVar1 * 4),
        (*(uint *)(this_00 + 0x4a4) & 0x1000) != 0)) && (((byte)this_00[0x4a4] & 1) == 0)) {
      iVar4 = **(int **)(this + 0x40);
      puVar2 = UObject::GetName(this_00);
      (**(code **)(iVar4 + 0xe8))(puVar2);
    }
    thunk_FUN_1101a3f0(&uStack_20);
  }
  iVar4 = **(int **)(this + 0x40);
  puVar2 = FString::operator*((FString *)(this + 0x48));
  uVar7 = (**(code **)(iVar4 + 0x100))(puVar2);
  (**(code **)(**(int **)(this + 0x40) + 0xf8))(((int)uVar7 < 0) - 1 & uVar7);
  (**(code **)(**(int **)(this + 0x40) + 8))(1);
  (**(code **)(**(int **)(this + 0x44) + 8))(1);
  SetFocus(*(HWND *)(*(int *)(this + 0x40) + 4));
  ExceptionList = pvStack_10;
  return;
}


// ==== 110027f7 FTreeItem::OnItemKillFocus

/* public: virtual void __thiscall FTreeItem::OnItemKillFocus(int) */

void __thiscall FTreeItem::OnItemKillFocus(FTreeItem *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x27f7  750  ?OnItemKillFocus@FTreeItem@@UAEXH@Z */
  puStack_c = &LAB_110611b0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar3 = 0; iVar3 < *(int *)(this + 0x28); iVar3 = iVar3 + 1) {
    piVar1 = *(int **)(*(int *)(this + 0x24) + iVar3 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
  }
  for (iVar3 = 0; iVar3 < *(int *)(this + 0x28); iVar3 = iVar3 + 1) {
  }
  FArray::Empty((FArray *)(this + 0x24),4,0);
  *(undefined4 *)(this + 0x20) = 0;
  (**(code **)(*(int *)this + 0x28))();
  if (*(int *)(this + 0xc) != 0) {
    piVar1 = *(int **)(this + 0xc);
    piVar2 = (int *)(**(code **)(**(int **)(this + 8) + 0xe8))();
    if (piVar1 != piVar2) {
      (**(code **)(*piVar1 + 0x30))(param_1);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110027fc WPictureButton::SetUp

/* public: void __thiscall WPictureButton::SetUp(class FString,int,int,int,int,int,struct HBITMAP__
   *,int,int,int,int,struct HBITMAP__ *,int,int,int,int) */

void __thiscall WPictureButton::SetUp(WPictureButton *this)

{
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x27fc  962
                       ?SetUp@WPictureButton@@QAEXVFString@@HHHHHPAUHBITMAP__@@HHHH1HHHH@Z */
  puStack_c = &LAB_1105f6d9;
  pvStack_10 = ExceptionList;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  *(undefined4 *)(this + 0x8c) = 1;
  FString::operator=((FString *)(this + 0x74),(FString *)&stack0x00000004);
  *(undefined4 *)(this + 0x80) = in_stack_00000010;
  *(undefined4 *)(this + 0x44) = in_stack_00000014;
  *(undefined4 *)(this + 0x48) = in_stack_00000018;
  *(undefined4 *)(this + 0x4c) = in_stack_0000001c;
  *(undefined4 *)(this + 0x50) = in_stack_00000020;
  *(undefined4 *)(this + 0x40) = in_stack_00000024;
  *(undefined4 *)(this + 0x54) = in_stack_00000028;
  *(undefined4 *)(this + 0x58) = in_stack_0000002c;
  *(undefined4 *)(this + 0x5c) = in_stack_00000030;
  *(undefined4 *)(this + 0x60) = in_stack_00000034;
  *(undefined4 *)(this + 0x3c) = in_stack_00000038;
  *(undefined4 *)(this + 100) = in_stack_0000003c;
  *(undefined4 *)(this + 0x68) = in_stack_00000040;
  *(undefined4 *)(this + 0x6c) = in_stack_00000044;
  *(undefined4 *)(this + 0x70) = in_stack_00000048;
  uStack_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002806 FWaitCursor::~FWaitCursor

/* public: __thiscall FWaitCursor::~FWaitCursor(void) */

void __thiscall FWaitCursor::~FWaitCursor(FWaitCursor *this)

{
                    /* 0x2806  189  ??1FWaitCursor@@QAE@XZ */
  SetCursor(*(HCURSOR *)this);
  return;
}


// ==== 1100280b WPropertiesBase::WPropertiesBase

/* public: __thiscall WPropertiesBase::WPropertiesBase(class WPropertiesBase const &) */

WPropertiesBase * __thiscall
WPropertiesBase::WPropertiesBase(WPropertiesBase *this,WPropertiesBase *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x280b  122  ??0WPropertiesBase@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110637d3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow::WWindow((WWindow *)this,(WWindow *)param_1);
  uStack_4 = 0;
  *(undefined ***)(this + 0x3c) = FControlSnoop::vftable;
  *(undefined ***)this = vftable_for_WWindow_;
  *(undefined ***)(this + 0x3c) = vftable_for_FControlSnoop_;
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  WItemBox::WItemBox((WItemBox *)(this + 0x44),(WItemBox *)(param_1 + 0x44));
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002810 FTreeItem::GetTextColor

/* public: virtual unsigned long __thiscall FTreeItem::GetTextColor(int) */

ulong __thiscall FTreeItem::GetTextColor(FTreeItem *this,int param_1)

{
                    /* 0x2810  595  ?GetTextColor@FTreeItem@@UAEKH@Z */
  return 0;
}


// ==== 11002815 WDialog::EndDialogFalse

/* public: void __thiscall WDialog::EndDialogFalse(void) */

void __thiscall WDialog::EndDialogFalse(WDialog *this)

{
                    /* 0x2815  443  ?EndDialogFalse@WDialog@@QAEXXZ */
  ::EndDialog(*(HWND *)(this + 4),0);
  return;
}


// ==== 1100281a WColorButton::OnDrawItem

/* public: virtual void __thiscall WColorButton::OnDrawItem(struct tagDRAWITEMSTRUCT *) */

void __thiscall WColorButton::OnDrawItem(WColorButton *this,tagDRAWITEMSTRUCT *param_1)

{
  HBRUSH h;
  uint uVar1;
  tagRECT tStack_34;
  HGDIOBJ pvStack_1c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x281a  729  ?OnDrawItem@WColorButton@@UAEXPAUtagDRAWITEMSTRUCT@@@Z */
  puStack_c = &LAB_1105f660;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc0;
  uStack_8 = 0;
  tStack_34.left = ((RECT *)(param_1 + 0x1c))->left;
  tStack_34.top = *(LONG *)(param_1 + 0x20);
  tStack_34.right = *(LONG *)(param_1 + 0x24);
  tStack_34.bottom = *(LONG *)(param_1 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x10);
  ExceptionList = &pvStack_10;
  h = CreateSolidBrush((uint)CONCAT21(CONCAT11(this[0x9c],this[0x98]),this[0x94]));
  FillRect(*(HDC *)(param_1 + 0x18),(RECT *)(param_1 + 0x1c),hBrushGrey);
  DrawEdge(*(HDC *)(param_1 + 0x18),&tStack_34,(-(uint)((uVar1 & 1) != 0) & 5) + 5,0xf);
  pvStack_1c = SelectObject(*(HDC *)(param_1 + 0x18),h);
  uVar1 = -(uint)((uVar1 & 1) != 0) & 2;
  tStack_34.left = tStack_34.left + 2 + uVar1;
  tStack_34.top = tStack_34.top + 2 + uVar1;
  tStack_34.right = tStack_34.right + (-2 - uVar1);
  tStack_34.bottom = tStack_34.bottom + (-2 - uVar1);
  Rectangle(*(HDC *)(param_1 + 0x18),tStack_34.left,tStack_34.top,tStack_34.right,tStack_34.bottom);
  SelectObject(*(HDC *)(param_1 + 0x18),pvStack_1c);
  DeleteObject(h);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100281f FObjectsItem::SetObjects

/* public: virtual void __thiscall FObjectsItem::SetObjects(class UObject * *,int) */

void __thiscall FObjectsItem::SetObjects(FObjectsItem *this,UObject **param_1,int param_2)

{
  UObject **ppUVar1;
  UClass *pUVar2;
  int iVar3;
  FString *this_00;
  ushort *puVar4;
  FObjectsItem *pFVar5;
  int iVar6;
  UStruct *pUVar7;
  FString aFStack_2c [20];
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x281f  936  ?SetObjects@FObjectsItem@@UAEXPAPAVUObject@@H@Z */
  puStack_c = &LAB_110612a9;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(this + 8) + 0xf4))(0);
  FArray::Empty((FArray *)(this + 0x58),4,0);
  *(undefined4 *)(this + 0x4c) = 0;
  for (iVar6 = 0; iStack_18 = iVar6, iVar6 < param_2; iVar6 = iVar6 + 1) {
    ppUVar1 = param_1 + iVar6;
    if (*ppUVar1 != (UObject *)0x0) {
      pUVar2 = UObject::GetClass(*ppUVar1);
      if (pUVar2 == (UClass *)0x0) {
        appFailAssert(s_InObjects_i__>GetClass___1106e644,s___Properties_cpp_1106b558,0x94e);
      }
      if (*(int *)(this + 0x4c) != 0) goto LAB_1101d810;
      pUVar2 = UObject::GetClass(*ppUVar1);
      while( true ) {
        *(UClass **)(this + 0x4c) = pUVar2;
LAB_1101d810:
        pUVar7 = *(UStruct **)(this + 0x4c);
        pUVar2 = UObject::GetClass(*ppUVar1);
        iVar3 = UStruct::IsChildOf((UStruct *)pUVar2,pUVar7);
        if (iVar3 != 0) break;
        pUVar2 = UClass::GetSuperClass(*(UClass **)(this + 0x4c));
      }
      thunk_FUN_1101c560(this + 0x58,ppUVar1);
    }
  }
  this_00 = (FString *)(**(code **)(*(int *)this + 0x80))(aFStack_2c);
  iStack_8._0_1_ = 1;
  iVar6 = **(int **)(this + 8);
  puVar4 = FString::operator*(this_00);
  (**(code **)(iVar6 + 0x2c))(puVar4);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FString::~FString(aFStack_2c);
  if ((*(int *)(this + 0x14) == 0) &&
     (pFVar5 = (FObjectsItem *)(**(code **)(**(int **)(this + 8) + 0xe8))(), this != pFVar5)) {
    ExceptionList = pvStack_10;
    return;
  }
  (**(code **)(**(int **)(this + 8) + 0xf8))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002824 WProperties::OpenWindow

/* public: void __thiscall WProperties::OpenWindow(struct HWND__ *) */

void __thiscall WProperties::OpenWindow(WProperties *this,HWND__ *param_1)

{
  int *piVar1;
  FString *this_00;
  ushort *puVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  HMENU__ *pHVar8;
  HINSTANCE__ *pHVar9;
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x2824  867  ?OpenWindow@WProperties@@QAEXPAUHWND__@@@Z */
  puStack_c = &LAB_11060679;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  iStack_8 = 0;
  if (param_1 == (HWND__ *)0x0) {
    if (*(int *)(this + 0x14) == 0) {
      param_1 = (HWND__ *)0x0;
    }
    else {
      param_1 = *(HWND__ **)(*(int *)(this + 0x14) + 4);
    }
  }
  ExceptionList = &pvStack_10;
  piVar1 = (int *)(**(code **)(*(int *)this + 0xe8))();
  this_00 = (FString *)(**(code **)(*piVar1 + 0x80))(aFStack_28);
  iStack_8._0_1_ = 1;
  pHVar8 = (HMENU__ *)0x0;
  iVar7 = 0x200;
  iVar6 = 0x160;
  iVar5 = -0x80000000;
  iVar4 = -0x80000000;
  uVar3 = 0xce0000;
  pHVar9 = DAT_1109c35c;
  puVar2 = FString::operator*(this_00);
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0x80,puVar2,uVar3,iVar4,iVar5,iVar6,iVar7,param_1,pHVar8,pHVar9);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FString::~FString(aFStack_28);
  WListBox::OpenWindow((WListBox *)(this + 0x44),1,1,0,1,0,0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002829 WTimeScrollBar::SetPos

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall WTimeScrollBar::SetPos(int) */

void __thiscall WTimeScrollBar::SetPos(WTimeScrollBar *this,int param_1)

{
                    /* 0x2829  940  ?SetPos@WTimeScrollBar@@QAEXH@Z */
  if (*(int *)(this + 0x50) == 0) {
    appFailAssert(s_MaxVal_1106f61c,s___Window_cpp_1106f624,0x5ad);
  }
  *(float *)(this + 0x48) = ((float)param_1 / (float)*(int *)(this + 0x50)) * (float)_DAT_1106f610;
  InvalidateRect(*(HWND *)(this + 4),(RECT *)0x0,0);
  return;
}


// ==== 1100282e FWindowsBitmap::GetBitmapHandle

/* public: struct HBITMAP__ * __thiscall FWindowsBitmap::GetBitmapHandle(void) */

HBITMAP__ * __thiscall FWindowsBitmap::GetBitmapHandle(FWindowsBitmap *this)

{
                    /* 0x282e  477  ?GetBitmapHandle@FWindowsBitmap@@QAEPAUHBITMAP__@@XZ */
  return *(HBITMAP__ **)(this + 0xc);
}


// ==== 11002838 thunk_FUN_1102be10 thunk -> 1102be10

// ==== 1100283d FCategoryItem::FCategoryItem

/* public: __thiscall FCategoryItem::FCategoryItem(class FCategoryItem const &) */

FCategoryItem * __thiscall FCategoryItem::FCategoryItem(FCategoryItem *this,FCategoryItem *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x283d  1  ??0FCategoryItem@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063968;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FHeaderItem::FHeaderItem((FHeaderItem *)this,(FHeaderItem *)param_1);
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002842 WControl::WControl

/* public: __thiscall WControl::WControl(void) */

WControl * __thiscall WControl::WControl(WControl *this)

{
  WControl *pWStack_20;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2842  72  ??0WControl@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110625d8;
  pvStack_c = ExceptionList;
  uStack_1c = 0;
  ExceptionList = &pvStack_c;
  pWStack_20 = this;
  FName::FName((FName *)&pWStack_20,0);
  WWindow::WWindow((WWindow *)this);
  *(undefined ***)this = vftable;
  ExceptionList = this;
  return this;
}


// ==== 11002847 WProperties::DoDestroy

/* public: virtual void __thiscall WProperties::DoDestroy(void) */

void __thiscall WProperties::DoDestroy(WProperties *this)

{
  WProperties *pWStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2847  428  ?DoDestroy@WProperties@@UAEXXZ */
  puStack_c = &LAB_11061350;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pWStack_18 = this;
  thunk_FUN_1101dad0(&PropertiesWindows,(int *)&pWStack_18);
  WWindow::DoDestroy((WWindow *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100284c WWindow::OnCut

/* public: virtual void __thiscall WWindow::OnCut(void) */

void __thiscall WWindow::OnCut(WWindow *this)

{
                    /* 0x284c  714  ?OnCut@WWindow@@UAEXXZ */
  return;
}


// ==== 11002851 FTreeItem::NotifyChange

/* public: virtual void __thiscall FTreeItem::NotifyChange(void) */

void __thiscall FTreeItem::NotifyChange(FTreeItem *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2851  681  ?NotifyChange@FTreeItem@@UAEXXZ */
  puStack_c = &LAB_110603b0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0xc) != 0) {
    ExceptionList = &pvStack_10;
    (**(code **)(**(int **)(this + 0xc) + 0x6c))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002856 WGroupBox::GetWindowClassName

/* public: virtual void __thiscall WGroupBox::GetWindowClassName(unsigned short *) */

void __thiscall WGroupBox::GetWindowClassName(WGroupBox *this,ushort *param_1)

{
                    /* 0x2856  614  ?GetWindowClassName@WGroupBox@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WGroupBox_1106fa4c);
  return;
}


// ==== 1100285b FPropertyItem::GetContents

/* public: virtual unsigned char * __thiscall FPropertyItem::GetContents(unsigned char *) */

uchar * __thiscall FPropertyItem::GetContents(FPropertyItem *this,uchar *param_1)

{
  UObject *this_00;
  FArray *this_01;
  UClass *pUVar1;
  int iVar2;
  uchar *puVar3;
  
                    /* 0x285b  488  ?GetContents@FPropertyItem@@UAEPAEPAE@Z */
  this_01 = (FArray *)(**(code **)(*(int *)this + 0x60))(param_1);
  this_00 = *(UObject **)(this + 0x3c);
  if (this_00 != (UObject *)0x0) {
    pUVar1 = UArrayProperty::StaticClass();
    iVar2 = UObject::IsA(this_00,pUVar1);
    if (iVar2 != 0) {
      puVar3 = FArray::GetData(this_01);
      return puVar3;
    }
  }
  return (uchar *)this_01;
}


// ==== 11002860 WDragInterceptor::OnReleaseCapture

/* public: virtual void __thiscall WDragInterceptor::OnReleaseCapture(void) */

void __thiscall WDragInterceptor::OnReleaseCapture(WDragInterceptor *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2860  810  ?OnReleaseCapture@WDragInterceptor@@UAEXXZ */
  puStack_c = &LAB_11061fd0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  ClipCursor((RECT *)0x0);
  (**(code **)(*(int *)this + 0xec))(0);
  (**(code **)(**(int **)(this + 0x14) + 0xd4))(this,*(undefined4 *)(this + 0x74));
  DestroyWindow(*(HWND *)(this + 4));
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002865 WThinScrollBar::GetPackageName

/* public: virtual unsigned short const * __thiscall WThinScrollBar::GetPackageName(void) */

ushort * __thiscall WThinScrollBar::GetPackageName(WThinScrollBar *this)

{
                    /* 0x2865  557  ?GetPackageName@WThinScrollBar@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 1100286f WListBox::GetPackageName

/* public: virtual unsigned short const * __thiscall WListBox::GetPackageName(void) */

ushort * __thiscall WListBox::GetPackageName(WListBox *this)

{
                    /* 0x286f  540  ?GetPackageName@WListBox@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11002874 WEditTerminal::operator=

/* public: class WEditTerminal & __thiscall WEditTerminal::operator=(class WEditTerminal const &) */

WEditTerminal * __thiscall WEditTerminal::operator=(WEditTerminal *this,WEditTerminal *param_1)

{
                    /* 0x2874  274  ??4WEditTerminal@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  return this;
}


// ==== 11002879 WProgressBar::GetWindowClassName

/* public: virtual void __thiscall WProgressBar::GetWindowClassName(unsigned short *) */

void __thiscall WProgressBar::GetWindowClassName(WProgressBar *this,ushort *param_1)

{
                    /* 0x2879  622  ?GetWindowClassName@WProgressBar@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WProgressBar_1106fcac);
  return;
}


// ==== 1100287e WObjectProperties::GetRoot

/* public: virtual class FTreeItem * __thiscall WObjectProperties::GetRoot(void) */

FTreeItem * __thiscall WObjectProperties::GetRoot(WObjectProperties *this)

{
                    /* 0x287e  582  ?GetRoot@WObjectProperties@@UAEPAVFTreeItem@@XZ */
  return (FTreeItem *)(this + 0xfc);
}


// ==== 11002883 WProperties::SnoopRightMouseDown

/* public: virtual void __thiscall WProperties::SnoopRightMouseDown(class WWindow *,struct FPoint)
    */

void __thiscall
WProperties::SnoopRightMouseDown(WProperties *this,WListBox *param_1,int param_3,int param_4)

{
  WListBox *this_00;
  int iVar1;
  FTreeItem *pFVar2;
  int *piVar3;
  undefined1 auStack_34 [24];
  int iStack_1c;
  WProperties *pWStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2883  982  ?SnoopRightMouseDown@WProperties@@UAEXPAVWWindow@@UFPoint@@@Z */
  puStack_c = &LAB_11060f80;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc0;
  uStack_8 = 0;
  this_00 = (WListBox *)(this + 8);
  if (param_1 == this_00) {
    ExceptionList = &pvStack_10;
    pWStack_18 = this;
    iVar1 = WListBox::ItemFromPoint(this_00,param_3,param_4);
    if (-1 < iVar1) {
      WListBox::SetCurrent(this_00,iVar1,0);
      pFVar2 = WPropertiesBase::GetListItem((WPropertiesBase *)(pWStack_18 + -0x3c),iVar1);
      piVar3 = (int *)(**(code **)(*(int *)pFVar2 + 0x24))(auStack_34);
      pWStack_18 = (WProperties *)param_4;
      iStack_1c = param_3 - *piVar3;
      (**(code **)(*(int *)pFVar2 + 0x3c))(iStack_1c,param_4 - piVar3[1]);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002888 WConfigProperties::WConfigProperties

/* public: __thiscall WConfigProperties::WConfigProperties(void) */

WConfigProperties * __thiscall WConfigProperties::WConfigProperties(WConfigProperties *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2888  69  ??0WConfigProperties@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063f26;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WProperties::WProperties((WProperties *)this);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_WWindow_;
  *(undefined ***)(this + 0x3c) = vftable_for_FControlSnoop_;
  FConfigItem::FConfigItem((FConfigItem *)(this + 0xfc));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100288d thunk_FUN_1101c560 thunk -> 1101c560

// ==== 11002897 WEdit::SetSelectedText

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: void __thiscall WEdit::SetSelectedText(unsigned short const *) */

void __thiscall WEdit::SetSelectedText(WEdit *this,ushort *param_1)

{
  HWND hWnd;
  int iVar1;
  char *pcVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2897  954  ?SetSelectedText@WEdit@@QAEXPBG@Z */
  puStack_c = &LAB_1105fc40;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 4) == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert(&DAT_11068b4c,s___Controls_cpp_11068b54,0x61d);
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    iVar1 = winGetSizeANSI(param_1);
    if (iVar1 == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      winGetSizeANSI(param_1);
      pcVar2 = &stack0xffffffd8;
    }
    hWnd = *(HWND *)(this + 4);
    iVar1 = winGetSizeANSI(param_1);
    pcVar2 = winToANSI(pcVar2,param_1,iVar1);
    SendMessageA(hWnd,0xc2,1,(LPARAM)pcVar2);
  }
  else {
    SendMessageW(*(HWND *)(this + 4),0xc2,1,(LPARAM)param_1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110028a6 WTimeScrollBar::~WTimeScrollBar

/* public: virtual __thiscall WTimeScrollBar::~WTimeScrollBar(void) */

void __thiscall WTimeScrollBar::~WTimeScrollBar(WTimeScrollBar *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x28a6  230  ??1WTimeScrollBar@@UAE@XZ */
  puStack_8 = &LAB_11062a38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WWindow::~WWindow((WWindow *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 110028ab FDelegateInt::FDelegateInt

/* public: __thiscall FDelegateInt::FDelegateInt(class FCommandTarget *,void (__thiscall
   FCommandTarget::*)(int)) */

void __thiscall
FDelegateInt::FDelegateInt(FDelegateInt *this,FCommandTarget *param_1,_func_void_int *param_2)

{
                    /* 0x28ab  17  ??0FDelegateInt@@QAE@PAVFCommandTarget@@P81@AEXH@Z@Z */
  *(undefined ***)this = vftable;
  *(FCommandTarget **)(this + 4) = param_1;
  *(_func_void_int **)(this + 8) = param_2;
  return;
}


// ==== 110028b0 WListView::OpenWindow

/* public: void __thiscall WListView::OpenWindow(int,unsigned long) */

void __thiscall WListView::OpenWindow(WListView *this,int param_1,ulong param_2)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x28b0  863  ?OpenWindow@WListView@@QAEXHK@Z */
  puStack_c = &LAB_1105ff60;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0x200,(ushort *)0x0,
             -(uint)(param_1 != 0) & 0x10000000 | param_2 | 0x40000000,0,0,0,0,
             *(HWND__ **)(*(int *)(this + 0x14) + 4),(HMENU__ *)(uint)*(ushort *)(this + 0xc),
             DAT_1109c35c);
  hWnd = *(HWND *)(this + 4);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110028b5 WWizardDialog::WWizardDialog

/* public: __thiscall WWizardDialog::WWizardDialog(void) */

WWizardDialog * __thiscall WWizardDialog::WWizardDialog(WWizardDialog *this)

{
  WControl *this_00;
  undefined **ppuStack_80;
  WWizardDialog *pWStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_74;
  WWizardDialog *pWStack_70;
  undefined4 uStack_6c;
  undefined **ppuStack_68;
  WWizardDialog *pWStack_64;
  undefined1 *puStack_60;
  undefined4 uStack_5c;
  WWizardDialog *pWStack_58;
  undefined4 uStack_54;
  undefined **ppuStack_50;
  WWizardDialog *pWStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  WWizardDialog *pWStack_40;
  undefined4 uStack_3c;
  undefined **ppuStack_38;
  WWizardDialog *pWStack_34;
  WWizardDialog *pWStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x28b5  174  ??0WWizardDialog@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1106412a;
  pvStack_c = ExceptionList;
  uStack_20 = 0;
  uStack_24 = 0x68;
  pWStack_34 = (WWizardDialog *)0x11038ce8;
  ExceptionList = &pvStack_c;
  pWStack_28 = this;
  FName::FName((FName *)&pWStack_28,(ushort *)u_WizardDialog_11073ca4,1);
  WDialog::WDialog((WDialog *)this);
  *(undefined ***)this = vftable;
  uStack_3c = 3;
  ppuStack_38 = FDelegate::vftable;
  uStack_44 = 0x11038d23;
  pWStack_40 = this;
  pWStack_34 = this;
  WCoolButton::WCoolButton((WCoolButton *)(this + 0x3c));
  pWStack_28 = (WWizardDialog *)CONCAT31(pWStack_28._1_3_,1);
  uStack_44 = 5;
  pWStack_34 = (WWizardDialog *)&ppuStack_50;
  uStack_54 = 0x3ec;
  ppuStack_50 = FDelegate::vftable;
  puStack_48 = &LAB_11001c6c;
  uStack_5c = 0x11038d54;
  pWStack_58 = this;
  pWStack_4c = this;
  WCoolButton::WCoolButton((WCoolButton *)(this + 0xd8));
  pWStack_40 = (WWizardDialog *)CONCAT31(pWStack_40._1_3_,2);
  uStack_5c = 5;
  pWStack_4c = (WWizardDialog *)&ppuStack_68;
  uStack_6c = 0x3ed;
  ppuStack_68 = FDelegate::vftable;
  puStack_60 = &LAB_11001b13;
  uStack_74 = 0x11038d85;
  pWStack_70 = this;
  pWStack_64 = this;
  WCoolButton::WCoolButton((WCoolButton *)(this + 0x174));
  pWStack_58 = (WWizardDialog *)CONCAT31(pWStack_58._1_3_,3);
  uStack_74 = 5;
  pWStack_64 = (WWizardDialog *)&ppuStack_80;
  ppuStack_80 = FDelegate::vftable;
  puStack_78 = &LAB_11001ae6;
  pWStack_7c = this;
  WCoolButton::WCoolButton((WCoolButton *)(this + 0x210),this,2);
  pWStack_70._0_1_ = 4;
  this_00 = (WControl *)(this + 0x2ac);
  pWStack_7c = (WWizardDialog *)this_00;
  WControl::WControl(this_00,(WWindow *)this,0x425,WLabel::SuperProc);
  *(undefined ***)this_00 = WLabel::vftable;
  pWStack_70 = (WWizardDialog *)CONCAT31(pWStack_70._1_3_,6);
  pWStack_7c = this + 0x2ec;
  FArray::FArray((FArray *)pWStack_7c);
  *(undefined4 *)(this + 0x2f8) = 0;
  ExceptionList = puStack_78;
  return this;
}


// ==== 110028ba WWindow::OnMeasureItem

/* public: virtual void __thiscall WWindow::OnMeasureItem(struct tagMEASUREITEMSTRUCT *) */

void __thiscall WWindow::OnMeasureItem(WWindow *this,tagMEASUREITEMSTRUCT *param_1)

{
                    /* 0x28ba  783  ?OnMeasureItem@WWindow@@UAEXPAUtagMEASUREITEMSTRUCT@@@Z */
  return;
}


// ==== 110028bf thunk_FUN_11037520 thunk -> 11037520

// ==== 110028c4 WEdit::GetSelection

/* public: void __thiscall WEdit::GetSelection(int &,int &) */

void __thiscall WEdit::GetSelection(WEdit *this,int *param_1,int *param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x28c4  587  ?GetSelection@WEdit@@QAEXAAH0@Z */
  puStack_c = &LAB_1105fc20;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 4) == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert(&DAT_11068b4c,s___Controls_cpp_11068b54,0x60d);
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(*(HWND *)(this + 4),0xb0,(WPARAM)param_1,(LPARAM)param_2);
  }
  else {
    SendMessageW(*(HWND *)(this + 4),0xb0,(WPARAM)param_1,(LPARAM)param_2);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110028c9 WGroupBox::OpenWindow

/* public: void __thiscall WGroupBox::OpenWindow(int,unsigned long) */

void __thiscall WGroupBox::OpenWindow(WGroupBox *this,int param_1,ulong param_2)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x28c9  860  ?OpenWindow@WGroupBox@@QAEXHK@Z */
  puStack_c = &LAB_1105f980;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)0x0,
             -(uint)(param_1 != 0) & 0x10000000 | param_2 | 0x40000007,0,0,0,0,
             *(HWND__ **)(*(int *)(this + 0x14) + 4),(HMENU__ *)(uint)*(ushort *)(this + 0xc),
             DAT_1109c35c);
  hWnd = *(HWND *)(this + 4);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110028ce WPropertiesBase::WPropertiesBase

/* public: __thiscall WPropertiesBase::WPropertiesBase(void) */

WPropertiesBase * __thiscall WPropertiesBase::WPropertiesBase(WPropertiesBase *this)

{
  WPropertiesBase *pWStack_24;
  undefined4 uStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x28ce  124  ??0WPropertiesBase@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1106374b;
  pvStack_c = ExceptionList;
  uStack_20 = 0;
  ExceptionList = &pvStack_c;
  pWStack_24 = this;
  FName::FName((FName *)&pWStack_24,0);
  WWindow::WWindow((WWindow *)this);
  pvStack_c = (void *)0x0;
  *(undefined ***)(this + 0x3c) = FControlSnoop::vftable;
  *(undefined ***)this = vftable_for_WWindow_;
  *(undefined ***)(this + 0x3c) = vftable_for_FControlSnoop_;
  WListBox::WListBox((WListBox *)(this + 0x44));
  *(undefined ***)(this + 0x44) = WItemBox::vftable;
  ExceptionList = this;
  return this;
}


// ==== 110028d8 FTreeItem::OnSetCursor

/* public: virtual int __thiscall FTreeItem::OnSetCursor(void) */

int __thiscall FTreeItem::OnSetCursor(FTreeItem *this)

{
                    /* 0x28d8  822  ?OnSetCursor@FTreeItem@@UAEHXZ */
  return 0;
}


// ==== 110028dd WSplitterPane::operator=

/* public: class WSplitterPane & __thiscall WSplitterPane::operator=(class WSplitterPane const &) */

WSplitterPane * __thiscall WSplitterPane::operator=(WSplitterPane *this,WSplitterPane *param_1)

{
                    /* 0x28dd  291  ??4WSplitterPane@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  return this;
}


// ==== 110028e2 WDialog::operator=

/* public: class WDialog & __thiscall WDialog::operator=(class WDialog const &) */

WDialog * __thiscall WDialog::operator=(WDialog *this,WDialog *param_1)

{
                    /* 0x28e2  271  ??4WDialog@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  return this;
}


// ==== 110028e7 WWizardDialog::OnFinish

/* public: virtual void __thiscall WWizardDialog::OnFinish(void) */

void __thiscall WWizardDialog::OnFinish(WWizardDialog *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x28e7  736  ?OnFinish@WWizardDialog@@UAEXXZ */
  puStack_c = &LAB_110601d0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WDialog::EndDialog((WDialog *)this,1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110028ec WTerminalBase::~WTerminalBase

/* public: virtual __thiscall WTerminalBase::~WTerminalBase(void) */

void __thiscall WTerminalBase::~WTerminalBase(WTerminalBase *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x28ec  228  ??1WTerminalBase@@UAE@XZ */
  puStack_8 = &LAB_11062f18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WWindow::~WWindow((WWindow *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 110028f1 WPropertyPage::PlaceControl

/* public: void __thiscall WPropertyPage::PlaceControl(class WControl *) */

void __thiscall WPropertyPage::PlaceControl(WPropertyPage *this,WControl *param_1)

{
  WPropertyPage *this_00;
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x28f1  885  ?PlaceControl@WPropertyPage@@QAEXPAVWControl@@@Z */
  puStack_c = &LAB_11060040;
  pvStack_10 = ExceptionList;
  iVar2 = 0;
  uStack_8 = 0;
  while( true ) {
    if (*(int *)(this + 0x40) <= iVar2) {
      return;
    }
    iVar4 = iVar2 * 0x28;
    this_00 = this + 0x3c;
    if (*(uint *)(*(int *)this_00 + iVar4) == (uint)*(ushort *)(param_1 + 0xc)) break;
    iVar2 = iVar2 + 1;
  }
  iVar1 = *(int *)param_1;
  ExceptionList = &pvStack_10;
  puVar3 = FString::operator*((FString *)((uint *)(*(int *)this_00 + iVar4) + 5));
  (**(code **)(iVar1 + 0x2c))(puVar3);
  if (*(int *)GUnicodeOS_exref == 0) {
    SetWindowLongA(*(HWND *)(param_1 + 4),-0x10,*(LONG *)(*(int *)this_00 + iVar4 + 0x20));
  }
  else {
    SetWindowLongW(*(HWND *)(param_1 + 4),-0x10,*(LONG *)(*(int *)this_00 + iVar4 + 0x20));
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    SetWindowLongA(*(HWND *)(param_1 + 4),-0x14,*(LONG *)(*(int *)this_00 + iVar4 + 0x24));
  }
  else {
    SetWindowLongW(*(HWND *)(param_1 + 4),-0x14,*(LONG *)(*(int *)this_00 + iVar4 + 0x24));
  }
  iVar4 = iVar4 + *(int *)this_00;
  MoveWindow(*(HWND *)(param_1 + 4),*(int *)(iVar4 + 4),*(int *)(iVar4 + 8),
             *(int *)(iVar4 + 0xc) - *(int *)(iVar4 + 4),
             *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 8),1);
  thunk_FUN_1100e610(this_00,iVar2,1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110028fb thunk_FUN_11015690 thunk -> 11015690

// ==== 1100290a WPictureButton::OpenWindow

/* public: void __thiscall WPictureButton::OpenWindow(void) */

void __thiscall WPictureButton::OpenWindow(WPictureButton *this)

{
  HWND__ *pHVar1;
  HGDIOBJ pvVar2;
  WToolTip *pWVar3;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x290a  865  ?OpenWindow@WPictureButton@@QAEXXZ */
  puStack_c = &LAB_1106014b;
  pvStack_10 = ExceptionList;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xfffffffd;
  if (*(int *)(this + 0x8c) == 0) {
    appFailAssert(s_bHasBeenSetup_1106b0e4,s___Controls_cpp_11068b54,0x377);
  }
  if (*(int *)(this + 0x14) == 0) {
    pHVar1 = (HWND__ *)0x0;
  }
  else {
    pHVar1 = *(HWND__ **)(*(int *)(this + 0x14) + 4);
  }
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)0x0,0x56000000,*(int *)(this + 0x44),*(int *)(this + 0x48),
             *(int *)(this + 0x4c),*(int *)(this + 0x50),pHVar1,(HMENU__ *)0x0,DAT_1109c35c);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar2 = GetStockObject(0x11);
    SendMessageA(*(HWND *)(this + 4),0x30,(WPARAM)pvVar2,lParam);
  }
  else {
    pvVar2 = GetStockObject(0x11);
    SendMessageW(*(HWND *)(this + 4),0x30,(WPARAM)pvVar2,lParam);
  }
  pWVar3 = (WToolTip *)thunk_FUN_11004ba0(0x40);
  iStack_8._0_1_ = 1;
  if (pWVar3 == (WToolTip *)0x0) {
    pWVar3 = (WToolTip *)0x0;
  }
  else {
    pWVar3 = (WToolTip *)
             WToolTip::WToolTip(pWVar3,(WWindow *)this,900,
                                (_func_long_HWND___ptr_uint_uint_long *)0x0);
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  *(WToolTip **)(this + 0x84) = pWVar3;
  WToolTip::OpenWindow(pWVar3);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100290f WPropertySheet::WPropertySheet

/* public: __thiscall WPropertySheet::WPropertySheet(class WWindow *,int,long (__stdcall*)(struct
   HWND__ *,unsigned int,unsigned int,long)) */

WPropertySheet * __thiscall
WPropertySheet::WPropertySheet
          (WPropertySheet *this,WWindow *param_1,int param_2,
          _func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x290f  128  ??0WPropertySheet@@QAE@PAVWWindow@@HP6GJPAUHWND__@@IIJ@Z@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1106278c;
  pvStack_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = SuperProc;
  }
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,param_1,param_2,param_3);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  FArray::FArray((FArray *)(this + 0x44));
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002914 WCheckBox::~WCheckBox

/* public: virtual __thiscall WCheckBox::~WCheckBox(void) */

void __thiscall WCheckBox::~WCheckBox(WCheckBox *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2914  194  ??1WCheckBox@@UAE@XZ */
  puStack_8 = &LAB_11062b88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WButton::~WButton((WButton *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11002919 WSplitter::WSplitter

/* public: __thiscall WSplitter::WSplitter(void) */

WSplitter * __thiscall WSplitter::WSplitter(WSplitter *this)

{
  WSplitter *pWStack_20;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2919  138  ??0WSplitter@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11064288;
  pvStack_c = ExceptionList;
  uStack_1c = 0;
  ExceptionList = &pvStack_c;
  pWStack_20 = this;
  FName::FName((FName *)&pWStack_20,0);
  WWindow::WWindow((WWindow *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x3c) = 1;
  ExceptionList = this;
  return this;
}


// ==== 11002923 WWindow::OnActivate

/* public: virtual void __thiscall WWindow::OnActivate(int) */

void __thiscall WWindow::OnActivate(WWindow *this,int param_1)

{
                    /* 0x2923  683  ?OnActivate@WWindow@@UAEXH@Z */
  VerifyPosition(this);
  return;
}


// ==== 1100292d WWizardDialog::OnClose

/* public: virtual int __thiscall WWizardDialog::OnClose(void) */

int __thiscall WWizardDialog::OnClose(WWizardDialog *this)

{
  undefined4 *puVar1;
  wchar_t *pwStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x292d  701  ?OnClose@WWizardDialog@@UAEHXZ */
  puStack_c = &LAB_11060290;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = (undefined4 *)thunk_FUN_1100f510(this + 0x2ec,0);
  (**(code **)(*(int *)*puVar1 + 0x10c))();
  pwStack_18 = u_NoRoute_1106b458;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&pwStack_18,&DAT_1107a670);
}


// ==== 11002932 WGroupBox::GetPackageName

/* public: virtual unsigned short const * __thiscall WGroupBox::GetPackageName(void) */

ushort * __thiscall WGroupBox::GetPackageName(WGroupBox *this)

{
                    /* 0x2932  537  ?GetPackageName@WGroupBox@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11002937 FTreeItem::GetContents

/* public: virtual unsigned char * __thiscall FTreeItem::GetContents(unsigned char *) */

uchar * __thiscall FTreeItem::GetContents(FTreeItem *this,uchar *param_1)

{
  uchar *puVar1;
  
                    /* 0x2937  489  ?GetContents@FTreeItem@@UAEPAEPAE@Z */
                    /* WARNING: Could not recover jumptable at 0x11010cd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = (uchar *)(**(code **)(*(int *)this + 0x60))();
  return puVar1;
}


// ==== 1100293c WScrollBar::operator=

/* public: class WScrollBar & __thiscall WScrollBar::operator=(class WScrollBar const &) */

WScrollBar * __thiscall WScrollBar::operator=(WScrollBar *this,WScrollBar *param_1)

{
                    /* 0x293c  288  ??4WScrollBar@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return this;
}


// ==== 11002946 WButton::Clicked

/* public: virtual void __thiscall WButton::Clicked(void) */

void __thiscall WButton::Clicked(WButton *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2946  414  ?Clicked@WButton@@UAEXXZ */
  puStack_c = &LAB_1105f600;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(*(int *)(this + 0x14) + 4),0x111,0x801d,(uint)*(ushort *)(this + 0xc));
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(*(int *)(this + 0x14) + 4),0x111,0x801d,(uint)*(ushort *)(this + 0xc));
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100294b WSplitterContainer::~WSplitterContainer

/* public: virtual __thiscall WSplitterContainer::~WSplitterContainer(void) */

void __thiscall WSplitterContainer::~WSplitterContainer(WSplitterContainer *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x294b  224  ??1WSplitterContainer@@UAE@XZ */
  puStack_8 = &LAB_110642e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WWindow::~WWindow((WWindow *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11002950 WTimeScrollBar::OnLeftButtonDoubleClick

/* public: virtual void __thiscall WTimeScrollBar::OnLeftButtonDoubleClick(void) */

void __thiscall WTimeScrollBar::OnLeftButtonDoubleClick(WTimeScrollBar *this)

{
                    /* 0x2950  765  ?OnLeftButtonDoubleClick@WTimeScrollBar@@UAEXXZ */
                    /* WARNING: Could not recover jumptable at 0x11023ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0xb8))();
  return;
}


// ==== 11002955 FCategoryItem::~FCategoryItem

/* public: virtual __thiscall FCategoryItem::~FCategoryItem(void) */

void __thiscall FCategoryItem::~FCategoryItem(FCategoryItem *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2955  178  ??1FCategoryItem@@UAE@XZ */
  puStack_8 = &LAB_110615e0;
  pvStack_c = ExceptionList;
  uStack_4 = 0xffffffff;
  ExceptionList = &pvStack_c;
  FTreeItem::~FTreeItem((FTreeItem *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1100295a FTreeItem::GetExpanderRect

/* public: virtual struct FRect __thiscall FTreeItem::GetExpanderRect(void) */

void __thiscall FTreeItem::GetExpanderRect(FTreeItem *this)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x295a  500  ?GetExpanderRect@FTreeItem@@UAE?AUFRect@@XZ */
  puStack_c = &LAB_11060bf0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = (**(code **)(*(int *)this + 0x40))(0);
  iVar2 = (**(code **)(*(int *)this + 0x40))(0);
  *in_stack_00000004 = iVar2 + 4;
  in_stack_00000004[1] = 4;
  in_stack_00000004[2] = iVar1 + 0xd;
  in_stack_00000004[3] = 0xd;
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100295f thunk_FUN_11030500 thunk -> 11030500

// ==== 11002964 FPropertyItemBase::GetStates

/* public: virtual void __thiscall FPropertyItemBase::GetStates(class TArray<class FName> &) */

void __thiscall FPropertyItemBase::GetStates(FPropertyItemBase *this,TArray<FName> *param_1)

{
  UObject *pUVar1;
  FName *pFVar2;
  int iStack_24;
  UObject *pUStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2964  589  ?GetStates@FPropertyItemBase@@UAEXAAV?$TArray@VFName@@@@@Z */
  puStack_c = &LAB_11061360;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd0;
  uStack_8 = 0;
  if (*(int *)(this + 0x4c) != 0) {
    ExceptionList = &pvStack_10;
    thunk_FUN_1101bf60(&iStack_24,*(int *)(this + 0x4c));
    while (pUVar1 = pUStack_20, pUStack_20 != (UObject *)0x0) {
      if (((byte)pUStack_20[0x9c] & 1) != 0) {
        pFVar2 = (FName *)UObject::GetFName(pUStack_20);
        thunk_FUN_1101db20(param_1,pFVar2);
      }
      pUStack_20 = *(UObject **)(pUVar1 + 0x38);
      thunk_FUN_11013e90(&iStack_24);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002969 WProgressBar::WProgressBar

/* public: __thiscall WProgressBar::WProgressBar(class WWindow *,int,long (__stdcall*)(struct HWND__
   *,unsigned int,unsigned int,long)) */

WProgressBar * __thiscall
WProgressBar::WProgressBar
          (WProgressBar *this,WWindow *param_1,int param_2,
          _func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2969  117  ??0WProgressBar@@QAE@PAVWWindow@@HP6GJPAUHWND__@@IIJ@Z@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110634f8;
  pvStack_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = SuperProc;
  }
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,param_1,param_2,param_3);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x40) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002973 FObjectConfigItem::SetProperty

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual void __thiscall FObjectConfigItem::SetProperty(class FPropertyItem *,unsigned
   short const *) */

void __thiscall
FObjectConfigItem::SetProperty(FObjectConfigItem *this,FPropertyItem *param_1,ushort *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  UObject *pUVar3;
  ushort *puVar4;
  int iVar5;
  UClass *pUVar6;
  ushort *puVar7;
  int iVar8;
  UObject *pUVar9;
  ushort *puVar10;
  UClass *pUVar11;
  ulong uVar12;
  wchar_t *pwVar13;
  undefined4 uVar14;
  ushort auStack_2034 [4100];
  FObjectConfigItem *pFStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x2973  944  ?SetProperty@FObjectConfigItem@@UAEXPAVFPropertyItem@@PBG@Z */
  puStack_c = &LAB_110613a8;
  pvStack_10 = ExceptionList;
  iStack_18 = 0x1101e263;
  puStack_14 = &stack0xffffdfc0;
  iVar8 = 0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pFStack_2c = this;
  puVar2 = &stack0xffffdfc0;
  if (*(int *)(this + 0x60) == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert(s_Class_1106e404,s___Properties_cpp_1106b558,0x9c0);
    puVar2 = puStack_14;
  }
  puStack_14 = puVar2;
  iVar5 = *(int *)(this + 8);
  if (*(int *)(iVar5 + 0x18) != 0) {
    (**(code **)(**(int **)(iVar5 + 0x18) + 4))(iVar5);
  }
  pUVar3 = thunk_FUN_11013fa0(*(UObject **)(param_1 + 0x3c));
  if (pUVar3 != (UObject *)0x0) {
    pwVar13 = u_Drivers_1106d3a0;
    puVar4 = FName::operator*((FName *)(*(int *)(param_1 + 0x3c) + 0x4c));
    iVar5 = appStricmp(puVar4,(ushort *)pwVar13);
    if (iVar5 == 0) {
      pUVar3 = thunk_FUN_11014060(*(UObject **)(param_1 + 0x3c));
      thunk_FUN_11013cf0((FArray *)&iStack_28);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      iVar5 = 0;
      pUVar11 = *(UClass **)(pUVar3 + 0x7c);
      pUVar6 = UClass::StaticClass();
      UObject::GetRegistryObjects((TArray<FRegistryObjectInfo> *)&iStack_28,pUVar6,pUVar11,iVar5);
      for (; iStack_18 = iVar8, iVar8 < iStack_24; iVar8 = iVar8 + 1) {
        puVar4 = FString::operator*((FString *)(iVar8 * 0x3c + iStack_28));
        appStrcpy(auStack_2034,puVar4);
        puVar4 = appStrstr(auStack_2034,(ushort *)&DAT_1106ce34);
        if (puVar4 == (ushort *)0x0) {
          puVar4 = Localize(s_Language_1106d368,s_Language_1106d368,(ushort *)u_Core_1106d374,
                            auStack_2034,0);
        }
        else {
          *puVar4 = 0;
          puVar4 = Localize(puVar4 + 1,(ushort *)u_ClassCaption_1106d380,auStack_2034,(ushort *)0x0,
                            0);
        }
        iVar5 = appStricmp(puVar4,param_2);
        if (iVar5 == 0) {
          iVar5 = **(int **)GConfig_exref;
          piVar1 = *(int **)(param_1 + 0x3c);
          uVar14 = 0;
          puVar4 = FString::operator*((FString *)(iVar8 * 0x3c + iStack_28));
          puVar7 = UObject::GetName(*(UObject **)(param_1 + 0x3c));
          puVar10 = (ushort *)0x0;
          pUVar9 = (UObject *)0x0;
          pUVar3 = (UObject *)(**(code **)(*piVar1 + 0x74))(0,0,puVar7,puVar4,uVar14);
          puVar4 = UObject::GetPathName(pUVar3,pUVar9,puVar10);
          (**(code **)(iVar5 + 0x30))(puVar4);
          iVar8 = iStack_18;
        }
      }
      uStack_8 = uStack_8 & 0xffffff00;
      thunk_FUN_1101da60((FArray *)&iStack_28);
      this = pFStack_2c;
      goto LAB_1101e483;
    }
  }
  pUVar3 = UObject::GetOuter(*(UObject **)(param_1 + 0x3c));
  pUVar3 = thunk_FUN_11015ea0(pUVar3);
  if (pUVar3 == (UObject *)0x0) {
    UObject::GlobalSetProperty
              (param_2,*(UClass **)(this + 0x60),*(UProperty **)(param_1 + 0x3c),
               *(int *)(*(UProperty **)(param_1 + 0x3c) + 0x54),*(int *)(this + 0x68));
  }
  else {
    iVar8 = **(int **)(param_1 + 0x3c);
    uVar14 = (**(code **)(*(int *)this + 0x68))(param_1,0,1);
    (**(code **)(iVar8 + 0x9c))(param_2,uVar14);
    puVar4 = (ushort *)0x0;
    uVar12 = 0x4000;
    pUVar3 = UClass::GetDefaultObject(*(UClass **)(this + 0x60));
    UObject::SaveConfig(pUVar3,uVar12,puVar4);
  }
LAB_1101e483:
  iVar8 = *(int *)(this + 8);
  if (*(int *)(iVar8 + 0x18) != 0) {
    (**(code **)(**(int **)(iVar8 + 0x18) + 8))(iVar8);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002978 FTreeItem::OnItemHelp

/* public: virtual void __thiscall FTreeItem::OnItemHelp(void) */

void __thiscall FTreeItem::OnItemHelp(FTreeItem *this)

{
                    /* 0x2978  746  ?OnItemHelp@FTreeItem@@UAEXXZ */
  return;
}


// ==== 11002982 WComboBox::InterceptControlCommand

/* public: virtual int __thiscall WComboBox::InterceptControlCommand(unsigned int,unsigned int,long)
    */

int __thiscall
WComboBox::InterceptControlCommand(WComboBox *this,uint param_1,uint param_2,long param_3)

{
  short sVar1;
  LRESULT LVar2;
  LRESULT LVar3;
  int iVar4;
  int *piVar5;
  WComboBox *pWVar6;
  undefined1 auStack_2c [24];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2982  654  ?InterceptControlCommand@WComboBox@@UAEHIIJ@Z */
  puStack_c = &LAB_1105fb10;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  uStack_8 = 0;
  sVar1 = (short)(param_2 >> 0x10);
  if (sVar1 == 2) {
    ExceptionList = &pvStack_10;
    puStack_14 = &stack0xffffffc8;
    (*(code *)**(undefined4 **)(this + 0x40))();
  }
  else {
    if (sVar1 == 7) {
      ExceptionList = &pvStack_10;
      LVar2 = SendMessageW(*(HWND *)(this + 4),0x154,0,0);
      LVar3 = SendMessageW(*(HWND *)(this + 4),0x154,0xffffffff,0);
      iVar4 = (**(code **)(*(int *)this + 0xf0))();
      iVar4 = (iVar4 + 1) * LVar2 + LVar3;
      if (0x180 < iVar4) {
        iVar4 = 0x180;
      }
      piVar5 = (int *)WWindow::GetWindowRect((WWindow *)this,(int)auStack_2c);
      WWindow::ResizeWindow((WWindow *)this,piVar5[2] - *piVar5,iVar4,0);
      pWVar6 = this + 0x4c;
    }
    else if (sVar1 == 8) {
      pWVar6 = this + 0x58;
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xffffffc8;
    }
    else if (sVar1 == 5) {
      pWVar6 = this + 100;
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xffffffc8;
    }
    else if (sVar1 == 6) {
      pWVar6 = this + 0x70;
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xffffffc8;
    }
    else if (sVar1 == 3) {
      pWVar6 = this + 0x7c;
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xffffffc8;
    }
    else if (sVar1 == 4) {
      pWVar6 = this + 0x88;
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xffffffc8;
    }
    else if (sVar1 == 1) {
      pWVar6 = this + 0x94;
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xffffffc8;
    }
    else if (sVar1 == 9) {
      pWVar6 = this + 0xa0;
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xffffffc8;
    }
    else {
      if (sVar1 != 10) {
        return 0;
      }
      pWVar6 = this + 0xac;
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xffffffc8;
    }
    (*(code *)**(undefined4 **)pWVar6)();
  }
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 11002987 WObjectProperties::WObjectProperties

/* public: __thiscall WObjectProperties::WObjectProperties(void) */

WObjectProperties * __thiscall WObjectProperties::WObjectProperties(WObjectProperties *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2987  113  ??0WObjectProperties@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063c46;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WProperties::WProperties((WProperties *)this);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_WWindow_;
  *(undefined ***)(this + 0x3c) = vftable_for_FControlSnoop_;
  FObjectsItem::FObjectsItem((FObjectsItem *)(this + 0xfc));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100298c WComboBox::Empty

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: void __thiscall WComboBox::Empty(void) */

void __thiscall WComboBox::Empty(WComboBox *this)

{
  HWND hWnd;
  int iVar1;
  char *pcVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x298c  435  ?Empty@WComboBox@@QAEXXZ */
  puStack_c = &LAB_1105fbc0;
  pvStack_10 = ExceptionList;
  pcVar2 = (char *)0x0;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    iVar1 = winGetSizeANSI((ushort *)0x0);
    if (iVar1 != 0) {
      winGetSizeANSI((ushort *)0x0);
      pcVar2 = &stack0xffffffd8;
    }
    hWnd = *(HWND *)(this + 4);
    iVar1 = winGetSizeANSI((ushort *)0x0);
    pcVar2 = winToANSI(pcVar2,(ushort *)0x0,iVar1);
    SendMessageA(hWnd,0x14b,0,(LPARAM)pcVar2);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0x14b,0,0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002991 WTerminalBase::operator=

/* public: class WTerminalBase & __thiscall WTerminalBase::operator=(class WTerminalBase const &) */

WTerminalBase * __thiscall WTerminalBase::operator=(WTerminalBase *this,WTerminalBase *param_1)

{
                    /* 0x2991  294  ??4WTerminalBase@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  return this;
}


// ==== 11002996 WButton::SetVisibleText

/* public: void __thiscall WButton::SetVisibleText(unsigned short const *) */

void __thiscall WButton::SetVisibleText(WButton *this,ushort *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2996  967  ?SetVisibleText@WButton@@QAEXPBG@Z */
  puStack_c = &LAB_1105f5e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 4) == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert(&DAT_11068b4c,s___Controls_cpp_11068b54,0x216);
  }
  if (param_1 != (ushort *)0x0) {
    (**(code **)(*(int *)this + 0x2c))(param_1);
  }
  (**(code **)(*(int *)this + 8))(param_1 != (ushort *)0x0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11004340 FUN_11004340

undefined4 __thiscall FUN_11004340(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f590;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0x30) = param_2;
  *(int *)((int)this + 0x34) = param_3;
  if (*(int *)(param_3 + 8) == -0x227) {
    (*(code *)**(undefined4 **)((int)this + 0x40))();
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 1100439b Catch@1100439b

void Catch_1100439b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110043af Catch@110043af

void Catch_110043af(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTabControl__InterceptControlCom_11068a58);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110043f0 FUN_110043f0

FString * __thiscall FUN_110043f0(void *this,FString *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f5ba;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FString::FString(param_1,(FString *)((int)this + 0x54));
  ExceptionList = local_10;
  return param_1;
}


// ==== 11004447 Catch@11004447

void Catch_11004447(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1100445b Catch@1100445b

void Catch_1100445b(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPropertyPage__GetCaption_11068ab0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110044a0 FUN_110044a0

undefined4 __fastcall FUN_110044a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}


// ==== 110044dc Catch@110044dc

void Catch_110044dc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110044f0 Catch@110044f0

void Catch_110044f0(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPropertyPage__GetID_11068af0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11004530 FUN_11004530

void FUN_11004530(void)

{
  return;
}


// ==== 11004540 FUN_11004540

void __thiscall FUN_11004540(void *this,int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f5e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 4) == 0) {
    ExceptionList = &local_10;
    appFailAssert(&DAT_11068b4c,s___Controls_cpp_11068b54,0x216);
  }
  if (param_1 != 0) {
    (**(code **)(*(int *)this + 0x2c))(param_1);
  }
  (**(code **)(*(int *)this + 8))(param_1 != 0);
  ExceptionList = local_10;
  return;
}


// ==== 110045c4 Catch@110045c4

void Catch_110045c4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110045d8 Catch@110045d8

void Catch_110045d8(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WButton__SetText_11068b24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11004630 FUN_11004630

void __thiscall FUN_11004630(void *this,LPARAM param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f5f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  SendMessageA(*(HWND *)((int)this + 4),0xf7,0,param_1);
  *(LPARAM *)((int)this + 0x88) = param_1;
  InvalidateRect(*(HWND *)((int)this + 4),(RECT *)0x0,1);
  ExceptionList = local_10;
  return;
}


// ==== 1100469d Catch@1100469d

void Catch_1100469d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110046b1 Catch@110046b1

void Catch_110046b1(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WButton__SetText_11068b68);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11004700 FUN_11004700

void __fastcall FUN_11004700(int param_1)

{
  HWND hWnd;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f600;
  local_10 = ExceptionList;
  local_8 = 0;
  hWnd = *(HWND *)(*(int *)(param_1 + 0x14) + 4);
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(hWnd,0x111,0x801d,(uint)*(ushort *)(param_1 + 0xc));
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(hWnd,0x111,0x801d,(uint)*(ushort *)(param_1 + 0xc));
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100476e Catch@1100476e

void Catch_1100476e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11004782 Catch@11004782

void Catch_11004782(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WButton__Clicked_11068b90);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110047d0 FUN_110047d0

void __thiscall FUN_110047d0(void *this,int param_1)

{
  bool bVar1;
  HDC hdc;
  HGDIOBJ h;
  int x;
  int y;
  undefined1 local_60 [4];
  int local_5c;
  int local_58;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  LONG local_38;
  int local_34;
  int local_30;
  int local_2c;
  HGDIOBJ local_20;
  HDC local_1c;
  HPEN local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f610;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff94;
  local_8 = 0;
  local_38 = ((RECT *)(param_1 + 0x1c))->left;
  local_34 = *(int *)(param_1 + 0x20);
  local_30 = *(int *)(param_1 + 0x24);
  local_2c = *(int *)(param_1 + 0x28);
  if (((*(byte *)(param_1 + 0x10) & 1) != 0) || (bVar1 = false, *(int *)((int)this + 0x8c) != 0)) {
    bVar1 = true;
  }
  ExceptionList = &local_10;
  FillRect(*(HDC *)(param_1 + 0x18),(RECT *)(param_1 + 0x1c),hBrushGrey);
  (**(code **)(*(int *)this + 0xe4))(*(undefined4 *)(param_1 + 0x18),&local_38,!bVar1);
  hdc = CreateCompatibleDC(*(HDC *)(param_1 + 0x18));
  local_1c = hdc;
  local_20 = SelectObject(hdc,*(HGDIOBJ *)((int)this + 0x88));
  GetObjectA(*(HANDLE *)((int)this + 0x88),0x18,local_60);
  local_18 = (HPEN)(local_2c / 2);
  BitBlt(*(HDC *)(param_1 + 0x18),(local_30 / 2 - local_5c / 2) + (-(uint)bVar1 & 2),
         (int)local_18 + ((-(uint)bVar1 & 2) - local_58 / 2),local_5c,local_58,hdc,0,0,0xcc0020);
  if (bVar1) {
    local_18 = CreatePen(0,1,0xc6d291);
    local_48 = local_38 + 1;
    y = local_34 + 1;
    x = local_30 + -1;
    local_3c = local_2c + -1;
    local_44 = y;
    local_40 = x;
    h = SelectObject(*(HDC *)(param_1 + 0x18),local_18);
    MoveToEx(*(HDC *)(param_1 + 0x18),local_48,y,(LPPOINT)0x0);
    LineTo(*(HDC *)(param_1 + 0x18),x,y);
    LineTo(*(HDC *)(param_1 + 0x18),x,local_3c);
    LineTo(*(HDC *)(param_1 + 0x18),local_48,local_3c);
    LineTo(*(HDC *)(param_1 + 0x18),local_48,y);
    SelectObject(*(HDC *)(param_1 + 0x18),h);
    DeleteObject(local_18);
    hdc = local_1c;
  }
  SelectObject(hdc,local_20);
  DeleteDC(hdc);
  ExceptionList = local_10;
  return;
}


// ==== 110049c5 Catch@110049c5

void Catch_110049c5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_1107a670);
}


// ==== 110049d9 Catch@110049d9

void Catch_110049d9(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WButton__OnDrawItem_11068bb8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11004a80 FUN_11004a80

undefined4 __thiscall FUN_11004a80(void *this,undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f620;
  local_10 = ExceptionList;
  local_8 = 0;
  sVar1 = (short)((uint)param_2 >> 0x10);
  if (sVar1 == 0) {
    ExceptionList = &local_10;
    (**(code **)(*(int *)this + 0xe8))();
    (*(code *)**(undefined4 **)((int)this + 0x40))();
    ExceptionList = local_10;
    return 0;
  }
  if (sVar1 == 5) {
    puVar2 = (undefined4 *)((int)this + 0x4c);
  }
  else if (sVar1 == 2) {
    puVar2 = (undefined4 *)((int)this + 0x58);
  }
  else {
    if (sVar1 != 3) {
      if (sVar1 == 6) {
        puVar2 = (undefined4 *)((int)this + 0x70);
        goto LAB_11004ae6;
      }
      if (sVar1 != 7) {
        return 0;
      }
    }
    puVar2 = (undefined4 *)((int)this + 100);
  }
LAB_11004ae6:
  ExceptionList = &local_10;
  (**(code **)*puVar2)();
  ExceptionList = local_10;
  return 1;
}


// ==== 11004b2b Catch@11004b2b

void Catch_11004b2b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11004b3f Catch@11004b3f

void Catch_11004b3f(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WButton__InterceptControlCommand_11068be8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11004ba0 FUN_11004ba0

void __cdecl FUN_11004ba0(undefined4 param_1)

{
  (**(code **)**(undefined4 **)GMalloc_exref)(param_1,&DAT_11068c38);
  return;
}


// ==== 11004bc0 FUN_11004bc0

void __cdecl FUN_11004bc0(undefined4 param_1)

{
  (**(code **)(**(int **)GMalloc_exref + 8))(param_1);
  return;
}


// ==== 11004be0 FUN_11004be0

void __fastcall FUN_11004be0(WWindow *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f630;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::OnDestroy(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 11004c25 Catch@11004c25

void Catch_11004c25(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11004c39 Catch@11004c39

void Catch_11004c39(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WBitmapButton__OnDestroy_11068c44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11004ca0 FUN_11004ca0

void __thiscall FUN_11004ca0(void *this,int param_1)

{
  bool bVar1;
  HDC hdc;
  BOOL BVar2;
  HGDIOBJ h;
  int x;
  int y;
  LONG local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  HGDIOBJ local_28;
  HPEN local_24;
  int local_20;
  HDC local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f640;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa4;
  local_8 = 0;
  local_50 = ((RECT *)(param_1 + 0x1c))->left;
  local_4c = *(int *)(param_1 + 0x20);
  local_48 = *(int *)(param_1 + 0x24);
  local_44 = *(int *)(param_1 + 0x28);
  if (((*(byte *)(param_1 + 0x10) & 1) != 0) || (bVar1 = false, *(int *)((int)this + 0x8c) != 0)) {
    bVar1 = true;
  }
  ExceptionList = &local_10;
  FillRect(*(HDC *)(param_1 + 0x18),(RECT *)(param_1 + 0x1c),hBrushGrey);
  local_18 = (int *)((int)this + 0x98);
  BVar2 = IsWindowEnabled(*(HWND *)((int)this + 4));
  if (BVar2 == 0) {
    local_18 = (int *)((int)this + 0xb8);
  }
  else if (bVar1) {
    local_18 = (int *)((int)this + 0xa8);
  }
  local_24 = (HPEN)(*(int *)((int)this + 0xa0) - *(int *)((int)this + 0x98));
  local_20 = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0x9c);
  local_1c = CreateCompatibleDC(*(HDC *)(param_1 + 0x18));
  local_28 = SelectObject(local_1c,*(HGDIOBJ *)((int)this + 0x94));
  BitBlt(*(HDC *)(param_1 + 0x18),-(uint)bVar1 & 2,-(uint)bVar1 & 2,(int)local_24,local_20,local_1c,
         *local_18,local_18[1],0xcc0020);
  (**(code **)(*(int *)this + 0xe4))(*(undefined4 *)(param_1 + 0x18),&local_50,!bVar1);
  if (bVar1) {
    local_24 = CreatePen(0,1,0xc6d291);
    local_40 = local_50 + 1;
    y = local_4c + 1;
    x = local_48 + -1;
    local_34 = local_44 + -1;
    local_3c = y;
    local_38 = x;
    h = SelectObject(*(HDC *)(param_1 + 0x18),local_24);
    MoveToEx(*(HDC *)(param_1 + 0x18),local_40,y,(LPPOINT)0x0);
    LineTo(*(HDC *)(param_1 + 0x18),x,y);
    LineTo(*(HDC *)(param_1 + 0x18),x,local_34);
    LineTo(*(HDC *)(param_1 + 0x18),local_40,local_34);
    LineTo(*(HDC *)(param_1 + 0x18),local_40,y);
    SelectObject(*(HDC *)(param_1 + 0x18),h);
    DeleteObject(local_24);
  }
  hdc = local_1c;
  SelectObject(local_1c,local_28);
  DeleteDC(hdc);
  ExceptionList = local_10;
  return;
}


// ==== 11004ea5 Catch@11004ea5

void Catch_11004ea5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_1107a670);
}


// ==== 11004eb9 Catch@11004eb9

void Catch_11004eb9(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WBitmapButton__OnDrawItem_11068c80);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11004f70 FUN_11004f70

void __fastcall FUN_11004f70(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f650;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(param_1 + 200) == 0) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  else {
    ExceptionList = &local_10;
    *(uint *)(param_1 + 0x8c) = (uint)(*(int *)(param_1 + 0x8c) == 0);
  }
  InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
  ExceptionList = local_10;
  return;
}


// ==== 11004fe4 Catch@11004fe4

void Catch_11004fe4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11004ff8 Catch@11004ff8

void Catch_11004ff8(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WBitmapButton__Clicked_11068cc0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11005040 FUN_11005040

void __thiscall FUN_11005040(void *this,int param_1)

{
  HBRUSH h;
  uint uVar1;
  tagRECT local_34;
  HGDIOBJ local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f660;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  local_34.left = ((RECT *)(param_1 + 0x1c))->left;
  local_34.top = *(int *)(param_1 + 0x20);
  local_34.right = *(int *)(param_1 + 0x24);
  local_34.bottom = *(int *)(param_1 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x10) & 1;
  ExceptionList = &local_10;
  h = CreateSolidBrush((uint)CONCAT21(CONCAT11(*(undefined1 *)((int)this + 0x9c),
                                               *(undefined1 *)((int)this + 0x98)),
                                      *(undefined1 *)((int)this + 0x94)));
  FillRect(*(HDC *)(param_1 + 0x18),(RECT *)(param_1 + 0x1c),hBrushGrey);
  DrawEdge(*(HDC *)(param_1 + 0x18),&local_34,(-(uint)(uVar1 != 0) & 5) + 5,0xf);
  local_1c = SelectObject(*(HDC *)(param_1 + 0x18),h);
  uVar1 = -(uint)(uVar1 != 0) & 2;
  local_34.left = local_34.left + 2 + uVar1;
  local_34.top = local_34.top + 2 + uVar1;
  local_34.right = local_34.right + (-2 - uVar1);
  local_34.bottom = local_34.bottom + (-2 - uVar1);
  Rectangle(*(HDC *)(param_1 + 0x18),local_34.left,local_34.top,local_34.right,local_34.bottom);
  SelectObject(*(HDC *)(param_1 + 0x18),local_1c);
  DeleteObject(h);
  ExceptionList = local_10;
  return;
}


// ==== 1100516b Catch@1100516b

void Catch_1100516b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_1107a670);
}


// ==== 1100517f Catch@1100517f

void Catch_1100517f(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WColorButton__OnDrawItem_11068cf8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11005200 FUN_11005200

void __thiscall FUN_11005200(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 0x94) = param_1;
  *(undefined4 *)((int)this + 0x98) = param_2;
  *(undefined4 *)((int)this + 0x9c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x11005235. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InvalidateRect(*(HWND *)((int)this + 4),(RECT *)0x0,0);
  return;
}


// ==== 11005250 FUN_11005250

void __thiscall FUN_11005250(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_1 = *(undefined4 *)((int)this + 0x94);
  *param_2 = *(undefined4 *)((int)this + 0x98);
  *param_3 = *(undefined4 *)((int)this + 0x9c);
  return;
}


// ==== 11005280 FUN_11005280

void __thiscall FUN_11005280(void *this,HWND param_1)

{
  BOOL BVar1;
  ushort *puVar2;
  int in_stack_00000014;
  LONG *in_stack_00000018;
  ushort local_158;
  undefined1 local_156 [262];
  tagRECT local_50;
  undefined4 local_40;
  undefined4 local_3c;
  HWND local_38;
  int local_34;
  LONG local_30;
  LONG local_2c;
  LONG local_28;
  LONG local_24;
  undefined4 local_20;
  ushort *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f679;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe9c;
  local_8 = 1;
  ExceptionList = &local_10;
  BVar1 = IsWindow(*(HWND *)((int)this + 4));
  if (BVar1 == 0) {
    appFailAssert(s___IsWindow__hWnd___11068d60,s___Controls_cpp_11068b54,0x356);
  }
  GetClientRect(param_1,&local_50);
  local_158 = 0;
  _memset(local_156,0,0xfe);
  puVar2 = FString::operator*((FString *)&stack0x00000008);
  appStrcpy(&local_158,puVar2);
  local_40 = 0x28;
  local_3c = 0x10;
  local_38 = param_1;
  local_20 = DAT_1109c35c;
  local_34 = (uint)*(ushort *)((int)this + 0xc) + in_stack_00000014;
  local_1c = &local_158;
  if (in_stack_00000018 == (LONG *)0x0) {
    local_30 = local_50.left;
    local_2c = local_50.top;
    local_28 = local_50.right;
    local_24 = local_50.bottom;
  }
  else {
    local_30 = *in_stack_00000018;
    local_2c = in_stack_00000018[1];
    local_28 = in_stack_00000018[2];
    local_24 = in_stack_00000018[3];
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(*(HWND *)((int)this + 4),0x432,0,(LPARAM)&local_40);
  }
  else {
    SendMessageW(*(HWND *)((int)this + 4),0x432,0,(LPARAM)&local_40);
  }
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


// ==== 110053dd Catch@110053dd

void Catch_110053dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x50);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110053f1 Catch@110053f1

void Catch_110053f1(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WToolTip__AddTool_11068d34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11005480 FUN_11005480

void __thiscall FUN_11005480(void *this,ulong param_1,int param_2,int param_3)

{
  int iVar1;
  FString aFStack_4c [4];
  undefined4 uStack_48;
  tagRECT local_2c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1105f699;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  uStack_48 = 0x110054bd;
  ExceptionList = &local_10;
  WWindow::OnSize(this,param_1,param_2,param_3);
  GetClientRect(*(HWND *)((int)this + 4),&local_2c);
  if (*(int *)((int)this + 0x84) != 0) {
    iVar1 = FString::Len((FString *)((int)this + 0x74));
    if (iVar1 != 0) {
      FString::FString(aFStack_4c,(FString *)((int)this + 0x74));
      local_8 = local_8 & 0xffffff00;
      WToolTip::AddTool(*(WToolTip **)((int)this + 0x84),*(undefined4 *)((int)this + 4));
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 11005527 Catch@11005527

void Catch_11005527(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100553b Catch@1100553b

void Catch_1100553b(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPictureButton__OnSize_11068d78);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11005590 FUN_11005590

void __fastcall FUN_11005590(WWindow *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f6b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::OnDestroy(param_1);
  if (*(int **)(param_1 + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x84) + 4))(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 110055ea Catch@110055ea

void Catch_110055ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110055fe Catch@110055fe

void Catch_110055fe(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPictureButton__OnDestroy_11068db0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11005640 FUN_11005640

void __fastcall FUN_11005640(int param_1)

{
  HWND hWnd;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f6c0;
  local_10 = ExceptionList;
  local_8 = 0;
  hWnd = *(HWND *)(*(int *)(param_1 + 0x14) + 4);
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(hWnd,0x111,0x801d,*(LPARAM *)(param_1 + 0x80));
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(hWnd,0x111,0x801d,*(LPARAM *)(param_1 + 0x80));
  }
  ExceptionList = local_10;
  return;
}


// ==== 110056b0 Catch@110056b0

void Catch_110056b0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110056c4 Catch@110056c4

void Catch_110056c4(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPictureButton__OnLeftButtonDown_11068df0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11005710 FUN_11005710

void __thiscall FUN_11005710(void *this)

{
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f6d9;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0x8c) = 1;
  FString::operator=((FString *)((int)this + 0x74),(FString *)&stack0x00000004);
  *(undefined4 *)((int)this + 0x80) = in_stack_00000010;
  *(undefined4 *)((int)this + 0x44) = in_stack_00000014;
  *(undefined4 *)((int)this + 0x48) = in_stack_00000018;
  *(undefined4 *)((int)this + 0x4c) = in_stack_0000001c;
  *(undefined4 *)((int)this + 0x50) = in_stack_00000020;
  *(undefined4 *)((int)this + 0x40) = in_stack_00000024;
  *(undefined4 *)((int)this + 0x54) = in_stack_00000028;
  *(undefined4 *)((int)this + 0x58) = in_stack_0000002c;
  *(undefined4 *)((int)this + 0x5c) = in_stack_00000030;
  *(undefined4 *)((int)this + 0x60) = in_stack_00000034;
  *(undefined4 *)((int)this + 0x3c) = in_stack_00000038;
  *(undefined4 *)((int)this + 100) = in_stack_0000003c;
  *(undefined4 *)((int)this + 0x68) = in_stack_00000040;
  *(undefined4 *)((int)this + 0x6c) = in_stack_00000044;
  *(undefined4 *)((int)this + 0x70) = in_stack_00000048;
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 110057d5 Catch@110057d5

void Catch_110057d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110057e9 Catch@110057e9

void Catch_110057e9(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPictureButton__SetUp_11068e40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11005850 FUN_11005850

void __fastcall FUN_11005850(WWindow *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f6f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::OnCreate(param_1);
  *(undefined4 *)(param_1 + 0x90) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 110058a1 Catch@110058a1

void Catch_110058a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110058b5 Catch@110058b5

void Catch_110058b5(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WCheckBox__OnCreate_11068e74);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11005900 FUN_11005900

void __fastcall FUN_11005900(int param_1)

{
  HWND pHVar1;
  uint lParam;
  UINT Msg;
  WPARAM wParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f700;
  local_10 = ExceptionList;
  local_8 = 0;
  lParam = (uint)*(ushort *)(param_1 + 0xc);
  wParam = 0x801b;
  Msg = 0x111;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    pHVar1 = GetParent(*(HWND *)(param_1 + 4));
    SendMessageA(pHVar1,Msg,wParam,lParam);
  }
  else {
    ExceptionList = &local_10;
    pHVar1 = GetParent(*(HWND *)(param_1 + 4));
    SendMessageW(pHVar1,Msg,wParam,lParam);
  }
  ExceptionList = local_10;
  return;
}


// ==== 11005979 Catch@11005979

void Catch_11005979(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100598d Catch@1100598d

void Catch_1100598d(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WCheckBox__OnRightButtonDown_11068ea4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110059e0 FUN_110059e0

void __fastcall FUN_110059e0(WButton *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f710;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WButton::Clicked(param_1);
  if (*(int *)(param_1 + 0x94) == 0) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  else {
    *(uint *)(param_1 + 0x8c) = (uint)(*(int *)(param_1 + 0x8c) == 0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 11005a4d Catch@11005a4d

void Catch_11005a4d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11005a61 Catch@11005a61

void Catch_11005a61(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WCheckBox__Clicked_11068eec);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11005ab0 FUN_11005ab0

void __fastcall FUN_11005ab0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f720;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    PostMessageA(*(HWND *)(*(int *)(param_1 + 0x14) + 4),0x111,0x801e,0);
  }
  else {
    ExceptionList = &local_10;
    PostMessageW(*(HWND *)(*(int *)(param_1 + 0x14) + 4),0x111,0x801e,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 11005b22 Catch@11005b22

void Catch_11005b22(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11005b36 Catch@11005b36

void Catch_11005b36(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTreeView__OnRightButtonDown_11068f1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11005b80 FUN_11005b80

undefined4 __thiscall FUN_11005b80(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f730;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0x30) = param_2;
  *(int *)((int)this + 0x34) = param_3;
  if ((*(int *)(param_3 + 8) == -0x192) || (*(int *)(param_3 + 8) == -0x1c3)) {
    (*(code *)**(undefined4 **)((int)this + 0x4c))();
  }
  if ((*(int *)(param_3 + 8) == -0x195) || (*(int *)(param_3 + 8) == -0x1c6)) {
    (*(code *)**(undefined4 **)((int)this + 0x40))();
  }
  if (*(int *)(param_3 + 8) == -3) {
    (*(code *)**(undefined4 **)((int)this + 0x58))();
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 11005c26 Catch@11005c26

void Catch_11005c26(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11005c3a Catch@11005c3a

void Catch_11005c3a(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTreeView__InterceptControlComma_11068f68);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11005c90 FUN_11005c90

void __fastcall FUN_11005c90(WWindow *param_1)

{
  if (WCoolButton::GlobalCoolButton == (WCoolButton *)param_1) {
    WCoolButton::GlobalCoolButton = (WCoolButton *)0x0;
  }
  WWindow::OnDestroy(param_1);
  return;
}


// ==== 11005cb0 FUN_11005cb0

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __fastcall FUN_11005cb0(int param_1)

{
  LPCWSTR lpFile;
  HWND pHVar1;
  int iVar2;
  ushort *puVar3;
  char *lpParameters;
  char *lpFile_00;
  char *lpOperation;
  FString *this;
  char *pcVar4;
  wchar_t *lpOperation_00;
  LPCWSTR lpParameters_00;
  LPCWSTR lpDirectory;
  INT IVar5;
  char *local_20;
  char *local_1c;
  char *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f740;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    iVar2 = winGetSizeANSI((ushort *)&DAT_11068ff8);
    if (iVar2 == 0) {
      pcVar4 = (char *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)&DAT_11068ff8);
      pcVar4 = &stack0xffffffcc;
    }
    iVar2 = winGetSizeANSI((ushort *)&DAT_11068ff8);
    if (iVar2 == 0) {
      local_18 = (char *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)&DAT_11068ff8);
      local_18 = &stack0xffffffcc;
    }
    this = (FString *)(param_1 + 0x9c);
    puVar3 = FString::operator*(this);
    iVar2 = winGetSizeANSI(puVar3);
    if (iVar2 == 0) {
      local_1c = (char *)0x0;
    }
    else {
      puVar3 = FString::operator*(this);
      winGetSizeANSI(puVar3);
      local_1c = &stack0xffffffcc;
    }
    iVar2 = winGetSizeANSI((ushort *)u_open_11068fec);
    if (iVar2 == 0) {
      local_20 = (char *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)u_open_11068fec);
      local_20 = &stack0xffffffcc;
    }
    IVar5 = 1;
    iVar2 = winGetSizeANSI((ushort *)&DAT_11068ff8);
    pcVar4 = winToANSI(pcVar4,(ushort *)&DAT_11068ff8,iVar2);
    iVar2 = winGetSizeANSI((ushort *)&DAT_11068ff8);
    lpParameters = winToANSI(local_18,(ushort *)&DAT_11068ff8,iVar2);
    puVar3 = FString::operator*(this);
    iVar2 = winGetSizeANSI(puVar3);
    puVar3 = FString::operator*(this);
    lpFile_00 = winToANSI(local_1c,puVar3,iVar2);
    iVar2 = winGetSizeANSI((ushort *)u_open_11068fec);
    lpOperation = winToANSI(local_20,(ushort *)u_open_11068fec,iVar2);
    pHVar1 = GetActiveWindow();
    ShellExecuteA(pHVar1,lpOperation,lpFile_00,lpParameters,pcVar4,IVar5);
  }
  else {
    IVar5 = 1;
    lpDirectory = (LPCWSTR)&DAT_11068ff8;
    lpParameters_00 = (LPCWSTR)&DAT_11068ff8;
    ExceptionList = &local_10;
    lpFile = (LPCWSTR)FString::operator*((FString *)(param_1 + 0x9c));
    lpOperation_00 = u_open_11068fec;
    pHVar1 = GetActiveWindow();
    ShellExecuteW(pHVar1,lpOperation_00,lpFile,lpParameters_00,lpDirectory,IVar5);
  }
  ExceptionList = local_10;
  return;
}


// ==== 11005e73 Catch@11005e73

void Catch_11005e73(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_1107a670);
}


// ==== 11005e87 Catch@11005e87

void Catch_11005e87(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WUrlButton__OnClick_11068fbc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11005f30 FUN_11005f30

long __thiscall FUN_11005f30(void *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
  if ((param_1 == 0x100) && ((param_2 == 0x26 || (param_2 == 0x28)))) {
    if (*(int *)((int)this + 0x1c) != 0) {
      (**(code **)(**(int **)((int)this + 0x1c) + 4))(this,param_2);
    }
    return 1;
  }
  lVar1 = WWindow::WndProc(this,param_1,param_2,param_3);
  return lVar1;
}


// ==== 11005f90 FUN_11005f90

undefined4 __thiscall FUN_11005f90(void *this,undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f750;
  local_10 = ExceptionList;
  local_8 = 0;
  sVar1 = (short)((uint)param_2 >> 0x10);
  if (sVar1 == 0x300) {
    puVar2 = (undefined4 *)((int)this + 0x40);
  }
  else {
    if (sVar1 != 0x200) {
      return 0;
    }
    puVar2 = (undefined4 *)((int)this + 0x4c);
  }
  ExceptionList = &local_10;
  (**(code **)*puVar2)();
  ExceptionList = local_10;
  return 1;
}


// ==== 11006005 Catch@11006005

void Catch_11006005(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11006019 Catch@11006019

void Catch_11006019(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WEdit__InterceptControlCommand_11068ffc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11006110 FUN_11006110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_11006110(void *this,undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f760;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffffcc;
  if (25000 < param_2) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)GWarn_exref + 0x10))(u_Loading_text____11069084,1);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  DAT_1109c288 = param_1;
  DAT_1109c284 = param_2;
  _DAT_1109c280 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = &LAB_11006060;
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(*(HWND *)((int)this + 4),0x449,2,(LPARAM)&local_28);
  }
  else {
    SendMessageW(*(HWND *)((int)this + 4),0x449,2,(LPARAM)&local_28);
  }
  if (25000 < param_2) {
    (**(code **)(**(int **)GWarn_exref + 0x14))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 110061e1 Catch@110061e1

void Catch_110061e1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110061f5 Catch@110061f5

void Catch_110061f5(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WRichEdit__StreamTextIn_11069048);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11006260 FUN_11006260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_11006260(void *this,undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f770;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffffcc;
  if (25000 < param_2) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)GWarn_exref + 0x10))(u_Saving_text____110690e8,1);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  DAT_1109c288 = param_1;
  DAT_1109c284 = param_2;
  _DAT_1109c280 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = &LAB_110060e0;
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(*(HWND *)((int)this + 4),0x44a,1,(LPARAM)&local_28);
  }
  else {
    SendMessageW(*(HWND *)((int)this + 4),0x44a,1,(LPARAM)&local_28);
  }
  if (25000 < param_2) {
    (**(code **)(**(int **)GWarn_exref + 0x14))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 11006331 Catch@11006331

void Catch_11006331(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11006345 Catch@11006345

void Catch_11006345(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WRichEdit__StreamTextIn_110690ac);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110063b0 FUN_110063b0

undefined4 __thiscall FUN_110063b0(void *this,undefined4 param_1,uint param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f780;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_2 >> 0x10 == 0x300) {
    ExceptionList = &local_10;
    (*(code *)**(undefined4 **)((int)this + 0x40))();
    ExceptionList = local_10;
    return 1;
  }
  return 0;
}


// ==== 1100641b Catch@1100641b

void Catch_1100641b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100642f Catch@1100642f

void Catch_1100642f(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WRichEdit__InterceptControlComma_11069110);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11006480 FUN_11006480

undefined4 __thiscall FUN_11006480(void *this,int param_1,short param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f790;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 == 0x114) {
    if (param_2 == 5) {
      puVar1 = (undefined4 *)((int)this + 0x44);
    }
    else {
      puVar1 = (undefined4 *)((int)this + 0x50);
    }
    ExceptionList = &local_10;
    (**(code **)*puVar1)();
    ExceptionList = local_10;
    return 1;
  }
  return 0;
}


// ==== 110064f3 Catch@110064f3

void Catch_110064f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11006507 Catch@11006507

void Catch_11006507(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTrackBar__InterceptControlComma_11069168);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11006550 FUN_11006550

undefined4 __thiscall FUN_11006550(void *this,undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f7a0;
  local_10 = ExceptionList;
  local_8 = 0;
  sVar1 = (short)((uint)param_2 >> 0x10);
  if (sVar1 == 2) {
    puVar2 = (undefined4 *)((int)this + 0x40);
  }
  else if (sVar1 == 1) {
    puVar2 = (undefined4 *)((int)this + 0x4c);
  }
  else if (sVar1 == 3) {
    puVar2 = (undefined4 *)((int)this + 0x58);
  }
  else if (sVar1 == 4) {
    puVar2 = (undefined4 *)((int)this + 100);
  }
  else {
    if (sVar1 != 5) {
      return 0;
    }
    puVar2 = (undefined4 *)((int)this + 0x70);
  }
  ExceptionList = &local_10;
  (**(code **)*puVar2)();
  ExceptionList = local_10;
  return 1;
}


// ==== 110065e6 Catch@110065e6

void Catch_110065e6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110065fa Catch@110065fa

void Catch_110065fa(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__InterceptControlComman_110691c0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11006650 FUN_11006650

void __fastcall FUN_11006650(WWindow *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f7b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::OnDestroy(param_1);
  DeleteObject(*(HGDIOBJ *)(param_1 + 0x8c));
  DeleteObject(*(HGDIOBJ *)(param_1 + 0x90));
  ExceptionList = local_10;
  return;
}


// ==== 110066af Catch@110066af

void Catch_110066af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110066c3 Catch@110066c3

void Catch_110066c3(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WCheckListBox__OnDestroy_11069214);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11006710 FUN_11006710

void FUN_11006710(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0xc))(*(uint *)(param_1 + 0x10) & 1);
                    /* WARNING: Could not recover jumptable at 0x1100673c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x2c) + 4))();
    return;
  }
  return;
}


// ==== 11006750 FUN_11006750

void FUN_11006750(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 8))();
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  return;
}


// ==== 11006770 FUN_11006770

undefined4 FUN_11006770(void)

{
  return 1;
}


// ==== 11006780 FUN_11006780

void __fastcall FUN_11006780(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f7c0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)(param_1 + 4),0x1009,0,0);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)(param_1 + 4),0x1009,0,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 110067e9 Catch@110067e9

void Catch_110067e9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110067fd Catch@110067fd

void Catch_110067fd(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListView__Empty_11069250);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11006840 FUN_11006840

undefined4 __thiscall FUN_11006840(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f7d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0x30) = param_2;
  *(int *)((int)this + 0x34) = param_3;
  if (*(int *)(param_3 + 8) == -3) {
    (*(code *)**(undefined4 **)((int)this + 0x40))();
    ExceptionList = local_10;
    return 1;
  }
  if (*(int *)(param_3 + 8) == -0x65) {
    (*(code *)**(undefined4 **)((int)this + 0x4c))();
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 110068c0 Catch@110068c0

void Catch_110068c0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110068d4 Catch@110068d4

void Catch_110068d4(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListView__InterceptControlComma_11069278);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11006920 FUN_11006920

void __fastcall FUN_11006920(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f7e0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)(param_1 + 4),0x100c,0xffffffff,3);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  SendMessageA(*(HWND *)(param_1 + 4),0x100c,0xffffffff,3);
  ExceptionList = local_10;
  return;
}


// ==== 11006991 Catch@11006991

void Catch_11006991(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110069a5 Catch@110069a5

void Catch_110069a5(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListView__GetCurrent_110692cc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11006aa0 CRect::CRect

/* Library Function - Single Match
    public: __thiscall CRect::CRect(int,int,int,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall CRect::CRect(CRect *this,int param_1,int param_2,int param_3,int param_4)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  *(int *)(this + 0xc) = param_4;
  return;
}


// ==== 11006af0 FUN_11006af0

void __fastcall FUN_11006af0(undefined4 *param_1)

{
  *param_1 = FCommandTarget::vftable;
  return;
}


// ==== 11006b00 FUN_11006b00

void FUN_11006b00(void)

{
  return;
}


// ==== 11006b10 FUN_11006b10

void __thiscall FUN_11006b10(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined ***)this = FDelegate::vftable;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return;
}


// ==== 11006b30 FUN_11006b30

void __fastcall FUN_11006b30(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x11006b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))();
    return;
  }
  return;
}


// ==== 11006b50 FUN_11006b50

void __thiscall FUN_11006b50(void *this,int param_1)

{
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return;
}


// ==== 11006b70 FUN_11006b70

undefined4 __fastcall FUN_11006b70(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ==== 11006b80 FUN_11006b80

WWindow * __thiscall FUN_11006b80(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x3c,*(int *)((int)this + -4),WWindow::~WWindow);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WWindow *)((int)this + -4));
    }
    return (WWindow *)((int)this + -4);
  }
  WWindow::~WWindow(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11006c00 FUN_11006c00

WControl * __thiscall FUN_11006c00(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x40,*(int *)((int)this + -4),WControl::~WControl);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WControl *)((int)this + -4));
    }
    return (WControl *)((int)this + -4);
  }
  WControl::~WControl(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11006c80 FUN_11006c80

void __fastcall FUN_11006c80(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1105f7f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WTabControl::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WControl::~WControl((WControl *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11006cf0 FUN_11006cf0

void __cdecl FUN_11006cf0(ushort *param_1,undefined4 param_2)

{
  ushort *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f810;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = appPackage();
  appSprintf(param_1,(ushort *)u__sUnreal_s_11069464,puVar1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 11006d4d Catch@11006d4d

void Catch_11006d4d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11006d61 Catch@11006d61

void Catch_11006d61(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_MakeWindowClassName_11069434);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11006db0 FUN_11006db0

void FUN_11006db0(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WTabControl_11069480);
  return;
}


// ==== 11006dd0 FUN_11006dd0

wchar_t * FUN_11006dd0(void)

{
  return u_Window_1106949c;
}


// ==== 11006de0 FUN_11006de0

WTabControl * __thiscall FUN_11006de0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x4c,*(int *)((int)this + -4),WTabControl::~WTabControl);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WTabControl *)((int)this + -4));
    }
    return (WTabControl *)((int)this + -4);
  }
  WTabControl::~WTabControl(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11006e60 FUN_11006e60

void __fastcall FUN_11006e60(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1105f828;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WLabel::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WControl::~WControl((WControl *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11006ed0 FUN_11006ed0

void FUN_11006ed0(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WLabel_110695cc);
  return;
}


// ==== 11006ef0 FUN_11006ef0

wchar_t * FUN_11006ef0(void)

{
  return u_Window_1106949c;
}


// ==== 11006f00 FUN_11006f00

WLabel * __thiscall FUN_11006f00(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x40,*(int *)((int)this + -4),WLabel::~WLabel);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WLabel *)((int)this + -4));
    }
    return (WLabel *)((int)this + -4);
  }
  WLabel::~WLabel(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11006f80 FUN_11006f80

undefined4 * __thiscall
FUN_11006f80(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1105f855;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::FString((FString *)((int)this + 0x14));
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  FString::operator=((FString *)((int)this + 0x14),(FString *)&stack0x00000018);
  *(undefined4 *)((int)this + 0x20) = in_stack_00000024;
  *(undefined4 *)((int)this + 0x24) = in_stack_00000028;
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000018);
  ExceptionList = local_c;
  return this;
}


// ==== 11007040 FUN_11007040

void __fastcall FUN_11007040(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1105f878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WToolTip::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WControl::~WControl((WControl *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 110070b0 FUN_110070b0

void FUN_110070b0(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WToolTip_110696fc);
  return;
}


// ==== 110070d0 FUN_110070d0

wchar_t * FUN_110070d0(void)

{
  return u_Window_1106949c;
}


// ==== 110070e0 FUN_110070e0

WToolTip * __thiscall FUN_110070e0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x40,*(int *)((int)this + -4),WToolTip::~WToolTip);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WToolTip *)((int)this + -4));
    }
    return (WToolTip *)((int)this + -4);
  }
  WToolTip::~WToolTip(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11007160 FUN_11007160

FArray * __fastcall FUN_11007160(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1105f899;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 11007260 FUN_11007260

void __fastcall FUN_11007260(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1105f8bc;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(param_1 + 0x14));
  ExceptionList = local_c;
  return;
}


// ==== 110072d0 FUN_110072d0

int __cdecl FUN_110072d0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x28);
  return *(int *)param_2 + iVar1 * 0x28;
}


// ==== 11007300 FUN_11007300

void __thiscall FUN_11007300(void *this,int param_1,uint param_2)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f8d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (this,0,(ushort *)0x0,-(uint)(param_1 != 0) & 0x10000000 | param_2 | 0x40000000,0,0,0,0,
             *(HWND__ **)(*(int *)((int)this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)((int)this + 0xc),DAT_1109c35c);
  hWnd = *(HWND *)((int)this + 4);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  ExceptionList = local_10;
  return;
}


// ==== 110073b3 Catch@110073b3

void Catch_110073b3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110073c7 Catch@110073c7

void Catch_110073c7(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTabControl__OpenWindow_11069714);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11007420 FUN_11007420

void __fastcall FUN_11007420(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f8e0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)(param_1 + 4),0x1309,0,0);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)(param_1 + 4),0x1309,0,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 11007485 Catch@11007485

void Catch_11007485(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11007499 Catch@11007499

void Catch_11007499(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTabControl__Empty_11069750);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110074e0 FUN_110074e0

void __fastcall FUN_110074e0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f8f0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)(param_1 + 4),0x1304,0,0);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  SendMessageA(*(HWND *)(param_1 + 4),0x1304,0,0);
  ExceptionList = local_10;
  return;
}


// ==== 1100754d Catch@1100754d

void Catch_1100754d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11007561 Catch@11007561

void Catch_11007561(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTabControl__GetCount_11069780);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110075b0 FUN_110075b0

void __thiscall FUN_110075b0(void *this,WPARAM param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f900;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x130c,param_1,0);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  SendMessageA(*(HWND *)((int)this + 4),0x130c,param_1,0);
  ExceptionList = local_10;
  return;
}


// ==== 1100762d Catch@1100762d

void Catch_1100762d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11007641 Catch@11007641

void Catch_11007641(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTabControl__SetCurrent_110697b4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11007690 FUN_11007690

void __fastcall FUN_11007690(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f910;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)(param_1 + 4),0x132f,0,0);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  SendMessageA(*(HWND *)(param_1 + 4),0x132f,0,0);
  ExceptionList = local_10;
  return;
}


// ==== 110076fd Catch@110076fd

void Catch_110076fd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11007711 Catch@11007711

void Catch_11007711(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTabControl__GetCurrent_110697f0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11007760 FUN_11007760

WPARAM __thiscall FUN_11007760(void *this,int param_1)

{
  WPARAM wParam;
  int iVar1;
  undefined4 local_3c [6];
  int local_24;
  WPARAM local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f920;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  local_8 = 0;
  local_3c[0] = 8;
  local_18 = 0;
  ExceptionList = &local_10;
  while( true ) {
    wParam = local_18;
    iVar1 = WTabControl::GetCount(this);
    if (iVar1 <= (int)wParam) {
      ExceptionList = local_10;
      return 0xffffffff;
    }
    if (*(int *)GUnicodeOS_exref == 0) {
      SendMessageA(*(HWND *)((int)this + 4),0x133c,wParam,(LPARAM)local_3c);
    }
    else {
      SendMessageW(*(HWND *)((int)this + 4),0x133c,wParam,(LPARAM)local_3c);
    }
    if (local_24 == param_1) break;
    local_18 = wParam + 1;
  }
  ExceptionList = local_10;
  return wParam;
}


// ==== 1100780b Catch@1100780b

void Catch_1100780b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1100781f Catch@1100781f

void Catch_1100781f(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTabControl__GetIndexFromlParam_11069830);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11007880 FUN_11007880

FString * __thiscall FUN_11007880(void *this,FString *param_1,WPARAM param_2)

{
  ushort local_23c;
  undefined1 local_23a [510];
  undefined4 local_3c [3];
  ushort *local_30;
  undefined4 local_2c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f94a;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdb8;
  local_18 = 0;
  local_8 = 1;
  local_23c = 0;
  ExceptionList = &local_10;
  _memset(local_23a,0,0x1fe);
  local_3c[0] = 1;
  local_30 = &local_23c;
  local_2c = 0x100;
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(*(HWND *)((int)this + 4),0x133c,param_2,(LPARAM)local_3c);
  }
  else {
    SendMessageW(*(HWND *)((int)this + 4),0x133c,param_2,(LPARAM)local_3c);
  }
  FString::FString(param_1,&local_23c);
  ExceptionList = local_10;
  return param_1;
}


// ==== 11007949 Catch@11007949

void Catch_11007949(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1100795d Catch@1100795d

void Catch_1100795d(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTabControl__GetIndexFromlParam_11069880);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110079c0 FUN_110079c0

undefined4 __thiscall FUN_110079c0(void *this,WPARAM param_1)

{
  undefined4 local_38 [6];
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f960;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_8 = 0;
  local_38[0] = 8;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)((int)this + 4),0x133c,param_1,(LPARAM)local_38);
  }
  else {
    ExceptionList = &local_10;
    local_14 = &stack0xffffffbc;
    SendMessageW(*(HWND *)((int)this + 4),0x133c,param_1,(LPARAM)local_38);
  }
  ExceptionList = local_10;
  return local_20;
}


// ==== 11007a2e Catch@11007a2e

void Catch_11007a2e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11007a42 Catch@11007a42

void Catch_11007a42(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTabControl__GetlParam_110698cc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11007a90 FUN_11007a90

void __thiscall FUN_11007a90(void *this,int param_1,int param_2,uint param_3)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f970;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (this,-(uint)(param_2 != 0) & 0x200,(ushort *)0x0,
             -(uint)(param_1 != 0) & 0x10000000 | param_3 | 0x40000000,0,0,0,0,
             *(HWND__ **)(*(int *)((int)this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)((int)this + 0xc),DAT_1109c35c);
  hWnd = *(HWND *)((int)this + 4);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  ExceptionList = local_10;
  return;
}


// ==== 11007b4f Catch@11007b4f

void Catch_11007b4f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11007b63 Catch@11007b63

void Catch_11007b63(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WLabel__OpenWindow_11069904);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11007bc0 FUN_11007bc0

void __thiscall FUN_11007bc0(void *this,int param_1,uint param_2)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f980;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (this,0,(ushort *)0x0,-(uint)(param_1 != 0) & 0x10000000 | param_2 | 0x40000007,0,0,0,0,
             *(HWND__ **)(*(int *)((int)this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)((int)this + 0xc),DAT_1109c35c);
  hWnd = *(HWND *)((int)this + 4);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  ExceptionList = local_10;
  return;
}


// ==== 11007c73 Catch@11007c73

void Catch_11007c73(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11007c87 Catch@11007c87

void Catch_11007c87(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WGroupBox__OpenWindow_11069934);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11007ce0 FUN_11007ce0

void __thiscall FUN_11007ce0(void *this,int param_1,HMODULE param_2)

{
  char cVar1;
  HWND__ *pHVar2;
  HGDIOBJ pvVar3;
  FString *this_00;
  ushort *puVar4;
  char *pcVar5;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPCDLGTEMPLATEA lpTemplate;
  HWND hWnd;
  HWND hWnd_00;
  void *this_01;
  LPARAM lParam;
  char *pcVar6;
  char local_e8 [80];
  CHAR local_98;
  undefined1 local_97 [79];
  undefined1 *local_48;
  void *local_44;
  undefined1 *puStack_40;
  uint local_3c;
  tagRECT local_38;
  int local_24;
  HGLOBAL local_1c;
  undefined1 local_18 [4];
  LONG local_14;
  tagPOINT local_10;
  void *local_8;
  
  puStack_40 = &LAB_1105f9a2;
  local_44 = ExceptionList;
  local_48 = &stack0xffffff0c;
  local_3c = 0;
  ExceptionList = &local_44;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xfffffffd;
  *(int *)((int)this + 0x60) = param_1;
  if (*(int *)((int)this + 0x14) == 0) {
    pHVar2 = (HWND__ *)0x0;
  }
  else {
    pHVar2 = *(HWND__ **)(*(int *)((int)this + 0x14) + 4);
  }
  local_8 = this;
  WWindow::PerformCreateWindowEx
            (this,0,(ushort *)0x0,0x50000000,0,0,0,0,pHVar2,(HMENU__ *)0x0,DAT_1109c35c);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar3 = GetStockObject(0x11);
    SendMessageA(*(HWND *)((int)this + 4),0x30,(WPARAM)pvVar3,lParam);
  }
  else {
    pvVar3 = GetStockObject(0x11);
    SendMessageW(*(HWND *)((int)this + 4),0x30,(WPARAM)pvVar3,lParam);
  }
  if (param_1 != 0) {
    if (param_2 == (HMODULE)0x0) {
      appFailAssert(s_InHMOD_110699e0,s___Controls_cpp_11068b54,0xe1);
    }
    local_e8[0] = '\0';
    _memset(local_e8 + 1,0,0x4f);
    this_00 = (FString *)FString::Printf((ushort *)&local_14);
    local_3c = CONCAT31(local_3c._1_3_,1);
    pcVar6 = (char *)0x0;
    puVar4 = FString::operator*(this_00);
    pcVar5 = appToAnsi(puVar4,pcVar6);
    pcVar6 = local_e8;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_3c = local_3c & 0xffffff00;
    FString::~FString((FString *)&local_14);
    hResInfo = FindResourceA(param_2,local_e8,(LPCSTR)0x5);
    if (hResInfo == (HRSRC)0x0) {
      appFailAssert(s_hrsrc_110699cc,s___Controls_cpp_11068b54,0xe8);
    }
    hResData = LoadResource(param_2,hResInfo);
    local_1c = hResData;
    if (hResData == (HGLOBAL)0x0) {
      appFailAssert(&DAT_110699c4,s___Controls_cpp_11068b54,0xeb);
    }
    lpTemplate = LockResource(hResData);
    if (lpTemplate == (LPCDLGTEMPLATEA)0x0) {
      appFailAssert(s_dlgtemplate_110699b4,s___Controls_cpp_11068b54,0xee);
    }
    hWnd = CreateDialogIndirectParamA
                     (DAT_1109c35c,lpTemplate,*(HWND *)((int)this + 4),(DLGPROC)0x0,0);
    if (hWnd == (HWND)0x0) {
      appFailAssert(s_hwndDlg_110699a8,s___Controls_cpp_11068b54,0xf1);
    }
    local_98 = '\0';
    _memset(local_97,0,0x4f);
    GetWindowTextA(hWnd,&local_98,0x50);
    puVar4 = appFromAnsi(&local_98,(ushort *)0x0);
    FString::operator=((FString *)((int)this + 0x54),puVar4);
    hWnd_00 = GetWindow(hWnd,5);
    while (hWnd_00 != (HWND)0x0) {
      GetWindowRect(hWnd_00,(LPRECT)local_18);
      ScreenToClient(hWnd,(LPPOINT)local_18);
      ScreenToClient(hWnd,&local_10);
      local_24 = GetDlgCtrlID(hWnd_00);
      GetWindowTextA(hWnd_00,&local_98,0x50);
      if (*(int *)GUnicodeOS_exref == 0) {
        GetWindowLongA(hWnd_00,-0x10);
      }
      else {
        GetWindowLongW(hWnd_00,-0x10);
      }
      if (*(int *)GUnicodeOS_exref == 0) {
        GetWindowLongA(hWnd_00,-0x14);
      }
      else {
        GetWindowLongW(hWnd_00,-0x14);
      }
      this_01 = (void *)thunk_FUN_110072d0(0x28,(FArray *)((int)local_8 + 0x3c));
      if (this_01 != (void *)0x0) {
        puVar4 = appFromAnsi(&local_98,(ushort *)0x0);
        FString::FString((FString *)&stack0xfffffef8,puVar4);
        local_3c = local_3c & 0xffffff00;
        thunk_FUN_11006f80(this_01,local_24,local_18,local_14,local_10.x,local_10.y);
      }
      hWnd_00 = GetWindow(hWnd_00,2);
      this = local_8;
    }
    GetClientRect(hWnd,&local_38);
    MoveWindow(*(HWND *)((int)this + 4),0,0,local_38.right,local_38.bottom,1);
    DeleteObject(local_1c);
    DestroyWindow(hWnd);
  }
  ExceptionList = local_44;
  return;
}


// ==== 11008041 Catch@11008041

void Catch_11008041(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(unaff_EBP + 0x10);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x18,&DAT_1107a670);
}


// ==== 11008055 Catch@11008055

void Catch_11008055(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPropertyPage___OpenWindow_11069968);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11008160 FUN_11008160

void __fastcall FUN_11008160(int param_1)

{
  int *piVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f9c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x4c); iVar2 = iVar2 + 1) {
    DestroyWindow(*(HWND *)(*(int *)(*(int *)(param_1 + 0x48) + iVar2 * 4) + 4));
    piVar1 = *(int **)(*(int *)(param_1 + 0x48) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 110081d5 Catch@110081d5

void Catch_110081d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 110081e9 Catch@110081e9

void Catch_110081e9(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPropertyPage__Cleanup_110699e8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11008230 FUN_11008230

void __thiscall FUN_11008230(void *this,int param_1,undefined4 param_2,uint param_3)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f9d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0x54) = param_2;
  WWindow::PerformCreateWindowEx
            (this,0,(ushort *)0x0,-(uint)(param_1 != 0) & 0x10000000 | param_3 | 0x40000000,0,0,0,0,
             *(HWND__ **)(*(int *)((int)this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)((int)this + 0xc),DAT_1109c35c);
  hWnd = *(HWND *)((int)this + 4);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  ExceptionList = local_10;
  return;
}


// ==== 110082ea Catch@110082ea

void Catch_110082ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110082fe Catch@110082fe

void Catch_110082fe(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPropertySheet__OpenWindow_11069a20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11008360 FUN_11008360

void __fastcall FUN_11008360(int param_1)

{
  WPARAM wParam;
  WPARAM WVar1;
  tagRECT local_40;
  undefined1 local_30 [12];
  int local_24;
  WPARAM local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f9e0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  WVar1 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    ExceptionList = &local_10;
    wParam = WTabControl::GetCurrent(*(WTabControl **)(param_1 + 0x40));
    if (wParam == 0xffffffff) {
      wParam = 0;
    }
    if (*(int *)(param_1 + 0x48) <= (int)wParam) {
      appFailAssert(s_idx_<_Pages_Num()_11069aa8,s___Controls_cpp_11068b54,0x195);
    }
    GetClientRect(*(HWND *)(param_1 + 4),&local_40);
    if (*(int *)GUnicodeOS_exref == 0) {
      SendMessageA(*(HWND *)(*(int *)(param_1 + 0x40) + 4),0x130a,wParam,(LPARAM)local_30);
    }
    else {
      SendMessageW(*(HWND *)(*(int *)(param_1 + 0x40) + 4),0x130a,wParam,(LPARAM)local_30);
    }
    for (; local_18 = WVar1, (int)WVar1 < *(int *)(param_1 + 0x48); WVar1 = WVar1 + 1) {
      if (WVar1 == wParam) {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x44) + WVar1 * 4) + 8))(1);
      }
      else {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x44) + WVar1 * 4) + 8))(0);
      }
      (**(code **)(**(int **)(*(int *)(param_1 + 0x44) + WVar1 * 4) + 0xec))();
      if (*(int *)(param_1 + 0x54) != 0) {
        SetWindowPos(*(HWND *)(*(int *)(*(int *)(param_1 + 0x44) + wParam * 4) + 4),(HWND)0x0,0,0,
                     local_40.right + -0x18,(local_40.bottom - local_24) + -0x18,2);
      }
    }
    SetWindowPos(*(HWND *)(*(int *)(*(int *)(param_1 + 0x44) + wParam * 4) + 4),(HWND)0x0,8,
                 local_24 + 8,0,0,1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 110084a6 Catch@110084a6

void Catch_110084a6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 110084ba Catch@110084ba

void Catch_110084ba(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPropertySheet__RefreshPages_11069a60);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11008540 FUN_11008540

int __thiscall FUN_11008540(void *this,int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105f9f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = WTabControl::SetCurrent(*(WTabControl **)((int)this + 0x40),param_1);
  WPropertySheet::RefreshPages(this);
  if (*(FContainer **)((int)this + 0x50) != (FContainer *)0x0) {
    FContainer::RefreshControls(*(FContainer **)((int)this + 0x50));
  }
  ExceptionList = local_10;
  return iVar1;
}


// ==== 110085a0 Catch@110085a0

void Catch_110085a0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110085b4 Catch@110085b4

void Catch_110085b4(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPropertySheet__SetCurrent_11069ac0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11008600 FUN_11008600

void __fastcall FUN_11008600(WPropertySheet *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fa00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WPropertySheet::RefreshPages(param_1);
  if (*(FContainer **)(param_1 + 0x50) != (FContainer *)0x0) {
    FContainer::RefreshControls(*(FContainer **)(param_1 + 0x50));
  }
  ExceptionList = local_10;
  return;
}


// ==== 11008653 Catch@11008653

void Catch_11008653(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11008667 Catch@11008667

void Catch_11008667(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPropertySheet__OnTabsSelChange_11069b00);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110086b0 FUN_110086b0

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __fastcall FUN_110086b0(WWindow *param_1)

{
  HDC hDC;
  HGDIOBJ h;
  int iVar1;
  LPCWSTR lpchText;
  ushort *puVar2;
  int iVar3;
  char *lpchText_00;
  RECT *pRVar4;
  UINT UVar5;
  tagPAINTSTRUCT local_80;
  RECT local_40;
  FString local_30 [20];
  HGDIOBJ local_1c;
  char *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1105fa19;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff74;
  local_8 = 0;
  ExceptionList = &local_10;
  hDC = BeginPaint(*(HWND *)(param_1 + 4),&local_80);
  WWindow::GetClientRect(param_1);
  FillRect(hDC,&local_40,hBrushGrey);
  h = GetStockObject(0x11);
  local_1c = SelectObject(hDC,h);
  (**(code **)(*(int *)param_1 + 0x28))();
  local_8 = CONCAT31(local_8._1_3_,1);
  SetBkMode(hDC,1);
  if (*(int *)GUnicodeOS_exref == 0) {
    puVar2 = FString::operator*(local_30);
    iVar1 = winGetSizeANSI(puVar2);
    if (iVar1 == 0) {
      local_18 = (char *)0x0;
    }
    else {
      puVar2 = FString::operator*(local_30);
      winGetSizeANSI(puVar2);
      local_14 = &stack0xffffff6c;
      local_18 = &stack0xffffff6c;
    }
    UVar5 = 0x24;
    pRVar4 = &local_40;
    iVar1 = FString::Len(local_30);
    puVar2 = FString::operator*(local_30);
    iVar3 = winGetSizeANSI(puVar2);
    puVar2 = FString::operator*(local_30);
    lpchText_00 = winToANSI(local_18,puVar2,iVar3);
    DrawTextA(hDC,lpchText_00,iVar1,pRVar4,UVar5);
  }
  else {
    UVar5 = 0x24;
    pRVar4 = &local_40;
    iVar1 = FString::Len(local_30);
    lpchText = (LPCWSTR)FString::operator*(local_30);
    DrawTextW(hDC,lpchText,iVar1,pRVar4,UVar5);
  }
  SelectObject(hDC,local_1c);
  EndPaint(*(HWND *)(param_1 + 4),&local_80);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_30);
  ExceptionList = local_10;
  return;
}


// ==== 11008828 Catch@11008828

void Catch_11008828(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_1107a670);
}


// ==== 1100883c Catch@1100883c

void Catch_1100883c(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WCustomLabel__OnPaint_11069b4c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110088d0 FUN_110088d0

void __thiscall
FUN_110088d0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,
            undefined4 param_6,int param_7,uint param_8)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fa30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (this,0,(ushort *)0x0,-(uint)(param_7 != 0) & 0x80 | param_8 | 0x40000000,param_2,
             param_3,param_4,param_5,*(HWND__ **)(*(int *)((int)this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)((int)this + 0xc),DAT_1109c35c);
  hWnd = *(HWND *)((int)this + 4);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  (**(code **)(*(int *)this + 0x2c))(param_6);
  if (param_1 != 0) {
    ShowWindow(*(HWND *)((int)this + 4),4);
  }
  *(uint *)((int)this + 0x90) = param_8 & 0xb;
  ExceptionList = local_10;
  return;
}


// ==== 110089b7 Catch@110089b7

void Catch_110089b7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110089cb Catch@110089cb

void Catch_110089cb(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WButton__OpenWindow_11069b80);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11008a30 FUN_11008a30

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

uint __fastcall FUN_11008a30(int param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  int iVar2;
  char *pcVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fa40;
  local_10 = ExceptionList;
  pcVar3 = (char *)0x0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x90) != 0) {
    return *(uint *)(param_1 + 0x8c);
  }
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &local_10;
    LVar1 = SendMessageW(*(HWND *)(param_1 + 4),0xf0,0,0);
    ExceptionList = local_10;
    return (uint)(LVar1 == 1);
  }
  ExceptionList = &local_10;
  iVar2 = winGetSizeANSI((ushort *)0x0);
  if (iVar2 != 0) {
    winGetSizeANSI((ushort *)0x0);
    pcVar3 = &stack0xffffffd8;
  }
  hWnd = *(HWND *)(param_1 + 4);
  iVar2 = winGetSizeANSI((ushort *)0x0);
  pcVar3 = winToANSI(pcVar3,(ushort *)0x0,iVar2);
  LVar1 = SendMessageA(hWnd,0xf0,0,(LPARAM)pcVar3);
  ExceptionList = local_10;
  return (uint)(LVar1 == 1);
}


// ==== 11008b18 Catch@11008b18

void Catch_11008b18(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11008b2c Catch@11008b2c

void Catch_11008b2c(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WButton__IsChecked_11069bb0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11008b90 FUN_11008b90

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall FUN_11008b90(void *this,WPARAM param_1)

{
  HWND hWnd;
  int iVar1;
  char *pcVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fa50;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    iVar1 = winGetSizeANSI((ushort *)0x0);
    if (iVar1 == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)0x0);
      pcVar2 = &stack0xffffffd8;
    }
    hWnd = *(HWND *)((int)this + 4);
    iVar1 = winGetSizeANSI((ushort *)0x0);
    pcVar2 = winToANSI(pcVar2,(ushort *)0x0,iVar1);
    SendMessageA(hWnd,0xf1,param_1,(LPARAM)pcVar2);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0xf1,param_1,0);
  }
  *(uint *)((int)this + 0x8c) = (uint)(param_1 == 1);
  InvalidateRect(*(HWND *)((int)this + 4),(RECT *)0x0,1);
  ExceptionList = local_10;
  return;
}


// ==== 11008c67 Catch@11008c67

void Catch_11008c67(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11008c7b Catch@11008c7b

void Catch_11008c7b(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WButton__SetCheck_11069be0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11008ce0 FUN_11008ce0

void __thiscall
FUN_11008ce0(void *this,int param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fa60;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(uint *)((int)this + 200) = (uint)(param_2 == 3);
  WWindow::PerformCreateWindowEx
            (this,0,(ushort *)0x0,
             -(uint)(param_1 != 0) & 0x10000000 | param_2 | param_3 | 0x4200000b,0,0,0,0,
             *(HWND__ **)(*(int *)((int)this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)((int)this + 0xc),DAT_1109c35c);
  *(undefined4 *)((int)this + 0x94) = param_4;
  *(undefined4 *)((int)this + 0x98) = param_5;
  *(undefined4 *)((int)this + 0x9c) = param_6;
  *(undefined4 *)((int)this + 0xa0) = param_7;
  *(undefined4 *)((int)this + 0xa4) = param_8;
  *(undefined4 *)((int)this + 0xa8) = param_9;
  *(undefined4 *)((int)this + 0xac) = param_10;
  *(undefined4 *)((int)this + 0xb0) = param_11;
  *(undefined4 *)((int)this + 0xb4) = param_12;
  *(undefined4 *)((int)this + 0xb8) = param_13;
  *(undefined4 *)((int)this + 0xbc) = param_14;
  *(undefined4 *)((int)this + 0xc0) = param_15;
  *(undefined4 *)((int)this + 0xc4) = param_16;
  ExceptionList = local_10;
  return;
}


// ==== 11008de9 Catch@11008de9

void Catch_11008de9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11008dfd Catch@11008dfd

void Catch_11008dfd(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WBitmapButton__OpenWindow_11069c0c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11008e70 FUN_11008e70

void __thiscall FUN_11008e70(void *this,int param_1,uint param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fa70;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (this,0,(ushort *)0x0,-(uint)(param_1 != 0) & 0x10000000 | param_2 | 0x4200000b,0,0,0,0,
             *(HWND__ **)(*(int *)((int)this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)((int)this + 0xc),DAT_1109c35c);
  ExceptionList = local_10;
  return;
}


// ==== 11008eeb Catch@11008eeb

void Catch_11008eeb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11008eff Catch@11008eff

void Catch_11008eff(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WColorButton__OpenWindow_11069c4c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11008f50 FUN_11008f50

void __fastcall FUN_11008f50(WWindow *param_1)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fa80;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (param_1,0,(ushort *)0x0,1,0,0,0,0,(HWND__ *)0x0,(HMENU__ *)0x0,DAT_1109c35c);
  hWnd = *(HWND *)(param_1 + 4);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  ExceptionList = local_10;
  return;
}


// ==== 11008fe3 Catch@11008fe3

void Catch_11008fe3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11008ff7 Catch@11008ff7

void Catch_11008ff7(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WToolTip__OpenWindow_11069c88);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11009050 FUN_11009050

void __fastcall FUN_11009050(int param_1)

{
  HDC pHVar1;
  HGDIOBJ h;
  int *piVar2;
  tagPAINTSTRUCT local_84;
  int local_40;
  tagRECT local_34;
  HGDIOBJ local_1c;
  HDC local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fa90;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff70;
  local_8 = 0;
  ExceptionList = &local_10;
  pHVar1 = BeginPaint(*(HWND *)(param_1 + 4),&local_84);
  local_18 = pHVar1;
  GetClientRect(*(HWND *)(param_1 + 4),&local_34);
  pHVar1 = CreateCompatibleDC(pHVar1);
  if (*(int *)(param_1 + 0x88) == 0) {
    h = *(HGDIOBJ *)(param_1 + 0x40);
  }
  else {
    h = *(HGDIOBJ *)(param_1 + 0x3c);
  }
  local_1c = SelectObject(pHVar1,h);
  piVar2 = (int *)(param_1 + 100);
  if (*(int *)(param_1 + 0x88) == 0) {
    piVar2 = (int *)(param_1 + 0x54);
  }
  local_40 = piVar2[1];
  BitBlt(local_18,(local_34.right - piVar2[2]) / 2,(local_34.bottom - piVar2[3]) / 2,piVar2[2],
         piVar2[3],pHVar1,*piVar2,local_40,0xcc0020);
  SelectObject(pHVar1,local_1c);
  DeleteDC(pHVar1);
  EndPaint(*(HWND *)(param_1 + 4),&local_84);
  ExceptionList = local_10;
  return;
}


// ==== 11009141 Catch@11009141

void Catch_11009141(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_1107a670);
}


// ==== 11009155 Catch@11009155

void Catch_11009155(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPictureButton__OnPaint_11069cbc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110091c0 FUN_110091c0

void __thiscall
FUN_110091c0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,
            undefined4 param_6,int param_7,int param_8,uint param_9)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105faa0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)((int)this + 0x94) = param_7;
  WWindow::PerformCreateWindowEx
            (this,0,(ushort *)0x0,
             -(uint)(param_8 != 0) & 0x80 | -(uint)(param_7 != 0) & 3 | param_9 | 0x40000002,param_2
             ,param_3,param_4,param_5,*(HWND__ **)(*(int *)((int)this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)((int)this + 0xc),DAT_1109c35c);
  (**(code **)(*(int *)this + 0x2c))(param_6);
  hWnd = *(HWND *)((int)this + 4);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  if (param_1 != 0) {
    ShowWindow(*(HWND *)((int)this + 4),4);
  }
  *(uint *)((int)this + 0x90) = param_9 & 0xb;
  ExceptionList = local_10;
  return;
}


// ==== 110092b8 Catch@110092b8

void Catch_110092b8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110092cc Catch@110092cc

void Catch_110092cc(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WCheckBox__OpenWindow_11069cf8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11009340 FUN_11009340

void __thiscall
FUN_11009340(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fab0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (this,0,(ushort *)0x0,param_6 != 0 | 0x40000000,param_2,param_3,param_4,param_5,
             *(HWND__ **)(*(int *)((int)this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)((int)this + 0xc),DAT_1109c35c);
  hWnd = *(HWND *)((int)this + 4);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  if (param_1 != 0) {
    ShowWindow(*(HWND *)((int)this + 4),4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 11009407 Catch@11009407

void Catch_11009407(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100941b Catch@1100941b

void Catch_1100941b(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WScrollBar__OpenWindow_11069d2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11009480 FUN_11009480

void __thiscall
FUN_11009480(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fac0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (this,0x200,(ushort *)0x0,param_6 | 0x40000037,param_2,param_3,param_4,param_5,
             *(HWND__ **)(*(int *)((int)this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)((int)this + 0xc),DAT_1109c35c);
  hWnd = *(HWND *)((int)this + 4);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  if (param_1 != 0) {
    ShowWindow(*(HWND *)((int)this + 4),4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 11009545 Catch@11009545

void Catch_11009545(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11009559 Catch@11009559

void Catch_11009559(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTreeView__OpenWindow_11069d64);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110095c0 FUN_110095c0

void __fastcall FUN_110095c0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fad0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)(param_1 + 4),0x1101,0,-0x10000);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)(param_1 + 4),0x1101,0,-0x10000);
  }
  ExceptionList = local_10;
  return;
}


// ==== 11009628 Catch@11009628

void Catch_11009628(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100963c Catch@1100963c

void Catch_1100963c(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTreeView__Empty_11069d98);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11009680 FUN_11009680

void __thiscall FUN_11009680(void *this,ushort *param_1,undefined4 param_2,int param_3)

{
  ushort local_24c [2];
  undefined1 local_248 [508];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ushort *local_34;
  undefined4 local_24;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fae0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffda8;
  local_8 = 0;
  local_24c[0] = 0;
  local_24c[1] = 0;
  ExceptionList = &local_10;
  _memset(local_248,0,0x1fc);
  appStrcpy(local_24c,param_1);
  local_4c = param_2;
  local_48 = 0xffff0003;
  local_44 = 1;
  local_34 = local_24c;
  if (param_3 != 0) {
    local_44 = 0x41;
    local_24 = 1;
  }
  if (*(int *)GUnicodeOS_exref != 0) {
    SendMessageW(*(HWND *)((int)this + 4),0x1132,0,(LPARAM)&local_4c);
    ExceptionList = local_10;
    return;
  }
  SendMessageA(*(HWND *)((int)this + 4),0x1132,0,(LPARAM)&local_4c);
  ExceptionList = local_10;
  return;
}


// ==== 11009764 Catch@11009764

void Catch_11009764(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11009778 Catch@11009778

void Catch_11009778(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTreeView__AddItem_11069dc0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110097e0 FUN_110097e0

void __thiscall
FUN_110097e0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,
            undefined4 param_6)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105faf0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (this,0,(ushort *)u_BUTTON_11069e2c,0x50000000,param_2,param_3,param_4,param_5,
             *(HWND__ **)(*(int *)((int)this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)((int)this + 0xc),DAT_1109c35c);
  (**(code **)(*(int *)this + 0x2c))(param_6);
  hWnd = *(HWND *)((int)this + 4);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  if (param_1 != 0) {
    ShowWindow(*(HWND *)((int)this + 4),4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 110098ac Catch@110098ac

void Catch_110098ac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110098c0 Catch@110098c0

void Catch_110098c0(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WCoolButton__OpenWindow_11069df0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11009920 FUN_11009920

void __thiscall FUN_11009920(void *this,int param_1,int param_2,uint param_3)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fb00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (this,0,(ushort *)0x0,
             -(uint)(param_1 != 0) & 0x10000000 | -(uint)(param_2 != 0) & 0x100 | param_3 |
             0x40200000,0,0,0x40,0x180,*(HWND__ **)(*(int *)((int)this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)((int)this + 0xc),DAT_1109c35c);
  hWnd = *(HWND *)((int)this + 4);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  ExceptionList = local_10;
  return;
}


// ==== 110099e5 Catch@110099e5

void Catch_110099e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110099f9 Catch@110099f9

void Catch_110099f9(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WComboBox__OpenWindow_11069e3c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11009a60 FUN_11009a60

undefined4 __thiscall FUN_11009a60(void *this,undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  LRESULT LVar2;
  LRESULT LVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fb10;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  sVar1 = (short)((uint)param_2 >> 0x10);
  if (sVar1 == 2) {
    ExceptionList = &local_10;
    local_14 = &stack0xffffffc8;
    (*(code *)**(undefined4 **)((int)this + 0x40))();
  }
  else {
    if (sVar1 == 7) {
      ExceptionList = &local_10;
      LVar2 = SendMessageW(*(HWND *)((int)this + 4),0x154,0,0);
      LVar3 = SendMessageW(*(HWND *)((int)this + 4),0x154,0xffffffff,0);
      iVar4 = (**(code **)(*(int *)this + 0xf0))();
      iVar4 = (iVar4 + 1) * LVar2 + LVar3;
      if (0x180 < iVar4) {
        iVar4 = 0x180;
      }
      piVar5 = (int *)WWindow::GetWindowRect(this,(int)local_2c);
      WWindow::ResizeWindow(this,piVar5[2] - *piVar5,iVar4,0);
      puVar6 = (undefined4 *)((int)this + 0x4c);
    }
    else if (sVar1 == 8) {
      puVar6 = (undefined4 *)((int)this + 0x58);
      ExceptionList = &local_10;
      local_14 = &stack0xffffffc8;
    }
    else if (sVar1 == 5) {
      puVar6 = (undefined4 *)((int)this + 100);
      ExceptionList = &local_10;
      local_14 = &stack0xffffffc8;
    }
    else if (sVar1 == 6) {
      puVar6 = (undefined4 *)((int)this + 0x70);
      ExceptionList = &local_10;
      local_14 = &stack0xffffffc8;
    }
    else if (sVar1 == 3) {
      puVar6 = (undefined4 *)((int)this + 0x7c);
      ExceptionList = &local_10;
      local_14 = &stack0xffffffc8;
    }
    else if (sVar1 == 4) {
      puVar6 = (undefined4 *)((int)this + 0x88);
      ExceptionList = &local_10;
      local_14 = &stack0xffffffc8;
    }
    else if (sVar1 == 1) {
      puVar6 = (undefined4 *)((int)this + 0x94);
      ExceptionList = &local_10;
      local_14 = &stack0xffffffc8;
    }
    else if (sVar1 == 9) {
      puVar6 = (undefined4 *)((int)this + 0xa0);
      ExceptionList = &local_10;
      local_14 = &stack0xffffffc8;
    }
    else {
      if (sVar1 != 10) {
        return 0;
      }
      puVar6 = (undefined4 *)((int)this + 0xac);
      ExceptionList = &local_10;
      local_14 = &stack0xffffffc8;
    }
    (**(code **)*puVar6)();
  }
  ExceptionList = local_10;
  return 1;
}


// ==== 11009baf Catch@11009baf

void Catch_11009baf(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11009bc3 Catch@11009bc3

void Catch_11009bc3(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WComboBox__InterceptControlComma_11069e70);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11009c40 FUN_11009c40

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall FUN_11009c40(void *this,ushort *param_1)

{
  HWND hWnd;
  int iVar1;
  char *pcVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fb20;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    iVar1 = winGetSizeANSI(param_1);
    if (iVar1 == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      winGetSizeANSI(param_1);
      pcVar2 = &stack0xffffffd8;
    }
    hWnd = *(HWND *)((int)this + 4);
    iVar1 = winGetSizeANSI(param_1);
    pcVar2 = winToANSI(pcVar2,param_1,iVar1);
    SendMessageA(hWnd,0x143,0,(LPARAM)pcVar2);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x143,0,(LPARAM)param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 11009cfa Catch@11009cfa

void Catch_11009cfa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11009d0e Catch@11009d0e

void Catch_11009d0e(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WComboBox__AddString_11069ec4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11009d70 FUN_11009d70

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

FString * __thiscall FUN_11009d70(void *this,FString *param_1,WPARAM param_2)

{
  uint uVar1;
  ushort *lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fb4a;
  local_10 = ExceptionList;
  lParam = (ushort *)0x0;
  local_8 = 1;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    uVar1 = SendMessageA(*(HWND *)((int)this + 4),0x149,param_2,0);
  }
  else {
    ExceptionList = &local_10;
    uVar1 = SendMessageW(*(HWND *)((int)this + 4),0x149,param_2,0);
  }
  if (uVar1 == 0xffffffff) {
    FString::FString(param_1,(ushort *)&DAT_11068ff8);
  }
  else {
    if ((*(int *)GUnicode_exref == 0) || (*(int *)GUnicodeOS_exref != 0)) {
      if ((uVar1 & 0x7fffffff) != 0x7fffffff) {
        lParam = (ushort *)&stack0xffffffd4;
      }
      SendMessageW(*(HWND *)((int)this + 4),0x148,param_2,(LPARAM)lParam);
    }
    else {
      if (uVar1 != 0xffffffff) {
        lParam = (ushort *)&stack0xffffffd4;
      }
      SendMessageA(*(HWND *)((int)this + 4),0x148,param_2,(LPARAM)lParam);
      lParam = appFromAnsi((char *)lParam,(ushort *)0x0);
    }
    FString::FString(param_1,lParam);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 11009e7b Catch@11009e7b

void Catch_11009e7b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 11009e8f Catch@11009e8f

void Catch_11009e8f(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WComboBox__GetString_11069ef8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11009f00 FUN_11009f00

void __fastcall FUN_11009f00(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fb60;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)(param_1 + 4),0x146,0,0);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  SendMessageA(*(HWND *)(param_1 + 4),0x146,0,0);
  ExceptionList = local_10;
  return;
}


// ==== 11009f6d Catch@11009f6d

void Catch_11009f6d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11009f81 Catch@11009f81

void Catch_11009f81(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WComboBox__GetCount_11069f2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11009fd0 FUN_11009fd0

void __thiscall FUN_11009fd0(void *this,WPARAM param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fb70;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)((int)this + 4),0x14e,param_1,0);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x14e,param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100a043 Catch@1100a043

void Catch_1100a043(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100a057 Catch@1100a057

void Catch_1100a057(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WComboBox__SetCurrent_11069f5c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100a0a0 FUN_1100a0a0

void __thiscall FUN_1100a0a0(void *this,undefined4 param_1)

{
  WPARAM wParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fb80;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  wParam = (**(code **)(*(int *)this + 0x104))(param_1);
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(*(HWND *)((int)this + 4),0x14e,wParam,0);
  }
  else {
    SendMessageW(*(HWND *)((int)this + 4),0x14e,wParam,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100a119 Catch@1100a119

void Catch_1100a119(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100a12d Catch@1100a12d

void Catch_1100a12d(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WComboBox__SetCurrent_11069f90);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100a180 FUN_1100a180

void __fastcall FUN_1100a180(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fb90;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)(param_1 + 4),0x147,0,0);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  SendMessageA(*(HWND *)(param_1 + 4),0x147,0,0);
  ExceptionList = local_10;
  return;
}


// ==== 1100a1ed Catch@1100a1ed

void Catch_1100a1ed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100a201 Catch@1100a201

void Catch_1100a201(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WComboBox__GetCurrent_11069fc4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100a250 FUN_1100a250

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

LRESULT __thiscall FUN_1100a250(void *this,ushort *param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  int iVar2;
  char *pcVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fba0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    iVar2 = winGetSizeANSI(param_1);
    if (iVar2 == 0) {
      pcVar3 = (char *)0x0;
    }
    else {
      winGetSizeANSI(param_1);
      pcVar3 = &stack0xffffffd8;
    }
    hWnd = *(HWND *)((int)this + 4);
    iVar2 = winGetSizeANSI(param_1);
    pcVar3 = winToANSI(pcVar3,param_1,iVar2);
    LVar1 = SendMessageA(hWnd,0x14c,0xffffffff,(LPARAM)pcVar3);
  }
  else {
    ExceptionList = &local_10;
    LVar1 = SendMessageW(*(HWND *)((int)this + 4),0x14c,0xffffffff,(LPARAM)param_1);
  }
  ExceptionList = local_10;
  return LVar1;
}


// ==== 1100a30a Catch@1100a30a

void Catch_1100a30a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100a31e Catch@1100a31e

void Catch_1100a31e(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WComboBox__FindString_11069ff8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100a380 FUN_1100a380

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

LRESULT __thiscall FUN_1100a380(void *this,ushort *param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  int iVar2;
  char *pcVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fbb0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    iVar2 = winGetSizeANSI(param_1);
    if (iVar2 == 0) {
      pcVar3 = (char *)0x0;
    }
    else {
      winGetSizeANSI(param_1);
      pcVar3 = &stack0xffffffd8;
    }
    hWnd = *(HWND *)((int)this + 4);
    iVar2 = winGetSizeANSI(param_1);
    pcVar3 = winToANSI(pcVar3,param_1,iVar2);
    LVar1 = SendMessageA(hWnd,0x158,0xffffffff,(LPARAM)pcVar3);
  }
  else {
    ExceptionList = &local_10;
    LVar1 = SendMessageW(*(HWND *)((int)this + 4),0x158,0xffffffff,(LPARAM)param_1);
  }
  ExceptionList = local_10;
  return LVar1;
}


// ==== 1100a43a Catch@1100a43a

void Catch_1100a43a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100a44e Catch@1100a44e

void Catch_1100a44e(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WComboBox__FindString_1106a02c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100a4b0 FUN_1100a4b0

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __fastcall FUN_1100a4b0(int param_1)

{
  HWND hWnd;
  int iVar1;
  char *pcVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fbc0;
  local_10 = ExceptionList;
  pcVar2 = (char *)0x0;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    iVar1 = winGetSizeANSI((ushort *)0x0);
    if (iVar1 != 0) {
      winGetSizeANSI((ushort *)0x0);
      pcVar2 = &stack0xffffffd8;
    }
    hWnd = *(HWND *)(param_1 + 4);
    iVar1 = winGetSizeANSI((ushort *)0x0);
    pcVar2 = winToANSI(pcVar2,(ushort *)0x0,iVar1);
    SendMessageA(hWnd,0x14b,0,(LPARAM)pcVar2);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)(param_1 + 4),0x14b,0,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100a557 Catch@1100a557

void Catch_1100a557(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100a56b Catch@1100a56b

void Catch_1100a56b(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WComboBox__Empty_1106a060);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100a5c0 FUN_1100a5c0

void __thiscall
FUN_1100a5c0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fbd0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (this,0x200,(ushort *)0x0,
             -(uint)(param_6 != 0) & 0x2000 | -(uint)(param_1 != 0) & 0x10000000 |
             -(uint)(param_3 != 0) & 0x800 | -(uint)(param_5 != 0) & 0x100 |
             -(uint)(param_2 != 0) & 0x200004 | -(uint)(param_4 != 0) & 0x100000 | 0x400000c0,0,0,0,
             0,*(HWND__ **)(*(int *)((int)this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)((int)this + 0xc),DAT_1109c35c);
  hWnd = *(HWND *)((int)this + 4);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100a6be Catch@1100a6be

void Catch_1100a6be(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100a6d2 Catch@1100a6d2

void Catch_1100a6d2(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WEdit__OpenWindow_1106a088);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100a740 FUN_1100a740

uint __fastcall FUN_1100a740(int param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fbe0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 4) == 0) {
    ExceptionList = &local_10;
    appFailAssert(&DAT_11068b4c,s___Controls_cpp_11068b54,0x5ed);
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    uVar1 = GetWindowLongA(*(HWND *)(param_1 + 4),-0x10);
  }
  else {
    uVar1 = GetWindowLongW(*(HWND *)(param_1 + 4),-0x10);
  }
  ExceptionList = local_10;
  return uVar1 >> 0xb & 1;
}


// ==== 1100a7bd Catch@1100a7bd

void Catch_1100a7bd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100a7d1 Catch@1100a7d1

void Catch_1100a7d1(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WEdit__GetReadOnly_1106a0b4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100a820 FUN_1100a820

void __thiscall FUN_1100a820(void *this,WPARAM param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fbf0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 4) == 0) {
    ExceptionList = &local_10;
    appFailAssert(&DAT_11068b4c,s___Controls_cpp_11068b54,0x5f5);
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(*(HWND *)((int)this + 4),0xcf,param_1,0);
  }
  else {
    SendMessageW(*(HWND *)((int)this + 4),0xcf,param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100a8b3 Catch@1100a8b3

void Catch_1100a8b3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100a8c7 Catch@1100a8c7

void Catch_1100a8c7(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WEdit__SetReadOnly_1106a0e4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100a920 FUN_1100a920

void __fastcall FUN_1100a920(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fc00;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 4) == 0) {
    ExceptionList = &local_10;
    appFailAssert(&DAT_11068b4c,s___Controls_cpp_11068b54,0x5fd);
  }
  if (*(int *)GUnicodeOS_exref != 0) {
    SendMessageW(*(HWND *)(param_1 + 4),0xba,0,0);
    ExceptionList = local_10;
    return;
  }
  SendMessageA(*(HWND *)(param_1 + 4),0xba,0,0);
  ExceptionList = local_10;
  return;
}


// ==== 1100a9ad Catch@1100a9ad

void Catch_1100a9ad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100a9c1 Catch@1100a9c1

void Catch_1100a9c1(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WEdit__GetLineCount_1106a114);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100aa10 FUN_1100aa10

void __thiscall FUN_1100aa10(void *this,WPARAM param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fc10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 4) == 0) {
    ExceptionList = &local_10;
    appFailAssert(&DAT_11068b4c,s___Controls_cpp_11068b54,0x605);
  }
  if (*(int *)GUnicodeOS_exref != 0) {
    SendMessageW(*(HWND *)((int)this + 4),0xbb,param_1,0);
    ExceptionList = local_10;
    return;
  }
  SendMessageA(*(HWND *)((int)this + 4),0xbb,param_1,0);
  ExceptionList = local_10;
  return;
}


// ==== 1100aaad Catch@1100aaad

void Catch_1100aaad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100aac1 Catch@1100aac1

void Catch_1100aac1(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WEdit__GetLineIndex_1106a144);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100ab20 FUN_1100ab20

void __thiscall FUN_1100ab20(void *this,WPARAM param_1,LPARAM param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fc20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 4) == 0) {
    ExceptionList = &local_10;
    appFailAssert(&DAT_11068b4c,s___Controls_cpp_11068b54,0x60d);
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(*(HWND *)((int)this + 4),0xb0,param_1,param_2);
  }
  else {
    SendMessageW(*(HWND *)((int)this + 4),0xb0,param_1,param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100abb9 Catch@1100abb9

void Catch_1100abb9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100abcd Catch@1100abcd

void Catch_1100abcd(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WEdit__GetSelection_1106a174);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100ac20 FUN_1100ac20

void __thiscall FUN_1100ac20(void *this,WPARAM param_1,LPARAM param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fc30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 4) == 0) {
    ExceptionList = &local_10;
    appFailAssert(&DAT_11068b4c,s___Controls_cpp_11068b54,0x615);
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(*(HWND *)((int)this + 4),0xb1,param_1,param_2);
  }
  else {
    SendMessageW(*(HWND *)((int)this + 4),0xb1,param_1,param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100acb9 Catch@1100acb9

void Catch_1100acb9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100accd Catch@1100accd

void Catch_1100accd(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WEdit__SetSelection_1106a1a4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100ad20 FUN_1100ad20

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall FUN_1100ad20(void *this,ushort *param_1)

{
  HWND hWnd;
  int iVar1;
  char *pcVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fc40;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 4) == 0) {
    ExceptionList = &local_10;
    appFailAssert(&DAT_11068b4c,s___Controls_cpp_11068b54,0x61d);
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    iVar1 = winGetSizeANSI(param_1);
    if (iVar1 == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      winGetSizeANSI(param_1);
      pcVar2 = &stack0xffffffd8;
    }
    hWnd = *(HWND *)((int)this + 4);
    iVar1 = winGetSizeANSI(param_1);
    pcVar2 = winToANSI(pcVar2,param_1,iVar1);
    SendMessageA(hWnd,0xc2,1,(LPARAM)pcVar2);
  }
  else {
    SendMessageW(*(HWND *)((int)this + 4),0xc2,1,(LPARAM)param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100adf8 Catch@1100adf8

void Catch_1100adf8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100ae0c Catch@1100ae0c

void Catch_1100ae0c(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WEdit__SetSelectedText_1106a1d4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100ae70 FUN_1100ae70

bool __fastcall FUN_1100ae70(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fc50;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    iVar1 = SendMessageA(*(HWND *)(param_1 + 4),0xb8,0,0);
  }
  else {
    ExceptionList = &local_10;
    iVar1 = SendMessageW(*(HWND *)(param_1 + 4),0xb8,0,0);
  }
  ExceptionList = local_10;
  return iVar1 != 0;
}


// ==== 1100aed7 Catch@1100aed7

void Catch_1100aed7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100aeeb Catch@1100aeeb

void Catch_1100aeeb(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WEdit__GetModify_1106a20c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100af30 FUN_1100af30

void __thiscall FUN_1100af30(void *this,WPARAM param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fc60;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)((int)this + 4),0xb9,param_1,0);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0xb9,param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100afa3 Catch@1100afa3

void Catch_1100afa3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100afb7 Catch@1100afb7

void Catch_1100afb7(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WEdit__SetModify_1106a234);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100b000 FUN_1100b000

void __fastcall FUN_1100b000(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fc70;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)(param_1 + 4),0xb7,0,0);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)(param_1 + 4),0xb7,0,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100b065 Catch@1100b065

void Catch_1100b065(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100b079 Catch@1100b079

void Catch_1100b079(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WEdit__ScrollCaret_1106a25c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100b0c0 FUN_1100b0c0

void __thiscall FUN_1100b0c0(void *this,int param_1)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fc80;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (this,0x200,(ushort *)0x0,-(uint)(param_1 != 0) & 0x10000000 | 0x4030c104,0,0,0,0,
             *(HWND__ **)(*(int *)((int)this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)((int)this + 0xc),DAT_1109c35c);
  hWnd = *(HWND *)((int)this + 4);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100b173 Catch@1100b173

void Catch_1100b173(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100b187 Catch@1100b187

void Catch_1100b187(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WRichEdit__OpenWindow_1106a28c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100b1e0 FUN_1100b1e0

void __thiscall FUN_1100b1e0(void *this,WPARAM param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fc90;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)((int)this + 4),0x435,param_1,0);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x435,param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100b253 Catch@1100b253

void Catch_1100b253(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100b267 Catch@1100b267

void Catch_1100b267(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WRichEdit__SetTextLimit_1106a2c0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100b2b0 FUN_1100b2b0

void __thiscall FUN_1100b2b0(void *this,WPARAM param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fca0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 4) == 0) {
    ExceptionList = &local_10;
    appFailAssert(&DAT_11068b4c,s___Controls_cpp_11068b54,0x6a5);
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(*(HWND *)((int)this + 4),0xcf,param_1,0);
  }
  else {
    SendMessageW(*(HWND *)((int)this + 4),0xcf,param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100b343 Catch@1100b343

void Catch_1100b343(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100b357 Catch@1100b357

void Catch_1100b357(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WRichEdit__SetReadOnly_1106a2fc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100b3b0 FUN_1100b3b0

void __thiscall FUN_1100b3b0(void *this,int param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fcb0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (this,-(uint)(param_2 != 0) & 0x200,(ushort *)0x0,
             (uint)(*(int *)((int)this + 0x40) == 0) | -(uint)(param_1 != 0) & 0x10000000 |
             0x40000000,0,0,0,0,*(HWND__ **)(*(int *)((int)this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)((int)this + 0xc),DAT_1109c35c);
  ExceptionList = local_10;
  return;
}


// ==== 1100b43e Catch@1100b43e

void Catch_1100b43e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100b452 Catch@1100b452

void Catch_1100b452(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTrackBar__OpenWindow_1106a334);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100b4a0 FUN_1100b4a0

void __thiscall FUN_1100b4a0(void *this,WPARAM param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fcc0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)((int)this + 4),0x414,param_1,0);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x414,param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100b513 Catch@1100b513

void Catch_1100b513(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100b527 Catch@1100b527

void Catch_1100b527(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTrackBar__SetTicFreq_1106a368);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100b570 FUN_1100b570

void __thiscall FUN_1100b570(void *this,int param_1,int param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fcd0;
  local_10 = ExceptionList;
  iVar1 = 0;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)((int)this + 4),0x409,1,0);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x409,1,0);
  }
  while (iVar1 < param_2) {
    if (*(int *)GUnicodeOS_exref == 0) {
      SendMessageA(*(HWND *)((int)this + 4),0x404,0,*(LPARAM *)(param_1 + iVar1 * 4));
      iVar1 = iVar1 + 1;
    }
    else {
      SendMessageW(*(HWND *)((int)this + 4),0x404,0,*(LPARAM *)(param_1 + iVar1 * 4));
      iVar1 = iVar1 + 1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100b61c Catch@1100b61c

void Catch_1100b61c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1100b630 Catch@1100b630

void Catch_1100b630(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTrackBar__SetTicks_1106a39c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100b690 FUN_1100b690

void __thiscall FUN_1100b690(void *this,undefined2 param_1,undefined2 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fce0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)((int)this + 4),0x406,1,CONCAT22(param_2,param_1));
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x406,1,CONCAT22(param_2,param_1));
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100b70e Catch@1100b70e

void Catch_1100b70e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100b722 Catch@1100b722

void Catch_1100b722(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTrackBar__SetRange_1106a3cc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100b770 FUN_1100b770

void __thiscall FUN_1100b770(void *this,LPARAM param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fcf0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)((int)this + 4),0x405,1,param_1);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x405,1,param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100b7e5 Catch@1100b7e5

void Catch_1100b7e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100b7f9 Catch@1100b7f9

void Catch_1100b7f9(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTrackBar__SetPos_1106a3fc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100b840 FUN_1100b840

void __fastcall FUN_1100b840(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fd00;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)(param_1 + 4),0x400,0,0);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  SendMessageA(*(HWND *)(param_1 + 4),0x400,0,0);
  ExceptionList = local_10;
  return;
}


// ==== 1100b8ad Catch@1100b8ad

void Catch_1100b8ad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100b8c1 Catch@1100b8c1

void Catch_1100b8c1(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTrackBar__GetPos_1106a428);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100b910 FUN_1100b910

void __thiscall FUN_1100b910(void *this,int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fd10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (this,0x200,(ushort *)0x0,-(uint)(param_1 != 0) & 0x10000000 | 0x40000000,0,0,0,0,
             *(HWND__ **)(*(int *)((int)this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)((int)this + 0xc),DAT_1109c35c);
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(*(HWND *)((int)this + 4),0x401,0,100);
  }
  else {
    SendMessageW(*(HWND *)((int)this + 4),0x401,0,100);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100b9b5 Catch@1100b9b5

void Catch_1100b9b5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100b9c9 Catch@1100b9c9

void Catch_1100b9c9(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WProgressBar__OpenWindow_1106a454);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100ba20 FUN_1100ba20

void __thiscall FUN_1100ba20(void *this,uint param_1,int param_2,uint param_3,uint param_4)

{
  WPARAM wParam;
  longlong lVar1;
  undefined8 uVar2;
  
  if (((int)param_4 < 0) || (((int)param_4 < 1 && (param_3 == 0)))) {
    param_3 = 1;
    param_4 = 0;
  }
  lVar1 = __allmul(param_1,param_2,100,0);
  uVar2 = __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),param_3,param_4);
  wParam = (WPARAM)uVar2;
  if (wParam != *(WPARAM *)((int)this + 0x40)) {
    if (*(int *)GUnicodeOS_exref != 0) {
      SendMessageW(*(HWND *)((int)this + 4),0x402,wParam,0);
      *(WPARAM *)((int)this + 0x40) = wParam;
      return;
    }
    SendMessageA(*(HWND *)((int)this + 4),0x402,wParam,0);
  }
  *(WPARAM *)((int)this + 0x40) = wParam;
  return;
}


// ==== 1100bac0 FUN_1100bac0

void __thiscall
FUN_1100bac0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fd20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)((int)this + 0x88) = param_3;
  WWindow::PerformCreateWindowEx
            (this,0x200,(ushort *)0x0,
             -(uint)(param_1 != 0) & 0x10000000 | -(uint)(param_3 != 0) & 0x808 |
             (-(uint)(param_2 != 0) & 0xffffff00) + 0x100 | -(uint)(param_4 != 0) & 0x20 |
             -(uint)(param_5 != 0) & 2 | param_6 | 0x42a00001,0,0,0,0,
             *(HWND__ **)(*(int *)((int)this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)((int)this + 0xc),DAT_1109c35c);
  hWnd = *(HWND *)((int)this + 4);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100bbb8 Catch@1100bbb8

void Catch_1100bbb8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100bbcc Catch@1100bbcc

void Catch_1100bbcc(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__OpenWindow_1106a490);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100bc40 FUN_1100bc40

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

FString * __thiscall FUN_1100bc40(void *this,FString *param_1,WPARAM param_2)

{
  uint uVar1;
  ushort *lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fd4a;
  local_10 = ExceptionList;
  lParam = (ushort *)0x0;
  local_8 = 1;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    uVar1 = SendMessageA(*(HWND *)((int)this + 4),0x18a,param_2,0);
  }
  else {
    ExceptionList = &local_10;
    uVar1 = SendMessageW(*(HWND *)((int)this + 4),0x18a,param_2,0);
  }
  if (uVar1 == 0xffffffff) {
    FString::FString(param_1,(ushort *)&DAT_11068ff8);
  }
  else {
    if ((*(int *)GUnicode_exref == 0) || (*(int *)GUnicodeOS_exref != 0)) {
      if ((uVar1 & 0x7fffffff) != 0x7fffffff) {
        lParam = (ushort *)&stack0xffffffd4;
      }
      SendMessageW(*(HWND *)((int)this + 4),0x189,param_2,(LPARAM)lParam);
      lParam[uVar1] = 0;
    }
    else {
      if (uVar1 != 0xffffffff) {
        lParam = (ushort *)&stack0xffffffd4;
      }
      SendMessageA(*(HWND *)((int)this + 4),0x189,param_2,(LPARAM)lParam);
      *(char *)((int)lParam + uVar1) = '\0';
      lParam = appFromAnsi((char *)lParam,(ushort *)0x0);
    }
    FString::FString(param_1,lParam);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1100bd66 Catch@1100bd66

void Catch_1100bd66(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1100bd7a Catch@1100bd7a

void Catch_1100bd7a(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__GetText_1106a4c4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100bdf0 FUN_1100bdf0

void __thiscall FUN_1100bdf0(void *this,WPARAM param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fd60;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x199,param_1,0);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  SendMessageA(*(HWND *)((int)this + 4),0x199,param_1,0);
  ExceptionList = local_10;
  return;
}


// ==== 1100be6d Catch@1100be6d

void Catch_1100be6d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100be81 Catch@1100be81

void Catch_1100be81(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__GetItemData_1106a4f0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100bed0 FUN_1100bed0

void __thiscall FUN_1100bed0(void *this,WPARAM param_1,LPARAM param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fd70;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)((int)this + 4),0x19a,param_1,param_2);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x19a,param_1,param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100bf3b Catch@1100bf3b

void Catch_1100bf3b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100bf4f Catch@1100bf4f

void Catch_1100bf4f(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__SetItemData_1106a524);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100bfa0 FUN_1100bfa0

void __thiscall FUN_1100bfa0(void *this,WPARAM param_1,LPARAM param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fd80;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)((int)this + 4),0x19a,param_1,param_2);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x19a,param_1,param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100c00b Catch@1100c00b

void Catch_1100c00b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100c01f Catch@1100c01f

void Catch_1100c01f(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__SetItemData_1106a558);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100c070 FUN_1100c070

void __fastcall FUN_1100c070(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fd90;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)(param_1 + 4),0x19f,0,0);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  SendMessageA(*(HWND *)(param_1 + 4),0x19f,0,0);
  ExceptionList = local_10;
  return;
}


// ==== 1100c0dd Catch@1100c0dd

void Catch_1100c0dd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100c0f1 Catch@1100c0f1

void Catch_1100c0f1(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__GetCurrent_1106a58c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100c140 FUN_1100c140

void __fastcall FUN_1100c140(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fda0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)(param_1 + 4),0x185,0,-1);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)(param_1 + 4),0x185,0,-1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100c1a5 Catch@1100c1a5

void Catch_1100c1a5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100c1b9 Catch@1100c1b9

void Catch_1100c1b9(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__ClearSel_1106a5c0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100c200 FUN_1100c200

LRESULT __thiscall FUN_1100c200(void *this,WPARAM param_1,LPARAM param_2)

{
  LRESULT LVar1;
  HWND hWnd;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fdb0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)((int)this + 0x88) == 0) {
    if (*(int *)GUnicodeOS_exref == 0) {
      ExceptionList = &local_10;
      LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x186,param_1,0);
    }
    else {
      ExceptionList = &local_10;
      LVar1 = SendMessageW(*(HWND *)((int)this + 4),0x186,param_1,0);
    }
    hWnd = *(HWND *)((int)this + 4);
    if (*(int *)GUnicodeOS_exref != 0) {
      SendMessageW(hWnd,0x19e,param_1,param_2);
      ExceptionList = local_10;
      return LVar1;
    }
  }
  else {
    ExceptionList = &local_10;
    WListBox::ClearSel(this);
    if (*(int *)GUnicodeOS_exref == 0) {
      LVar1 = SendMessageA(*(HWND *)((int)this + 4),0x185,1,param_1);
    }
    else {
      LVar1 = SendMessageW(*(HWND *)((int)this + 4),0x185,1,param_1);
    }
    hWnd = *(HWND *)((int)this + 4);
    if (*(int *)GUnicodeOS_exref != 0) {
      SendMessageW(hWnd,0x19e,param_1,param_2);
      ExceptionList = local_10;
      return LVar1;
    }
  }
  SendMessageA(hWnd,0x19e,param_1,param_2);
  ExceptionList = local_10;
  return LVar1;
}


// ==== 1100c2ff Catch@1100c2ff

void Catch_1100c2ff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1100c313 Catch@1100c313

void Catch_1100c313(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__SetCurrent_1106a5f0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100c380 FUN_1100c380

void __fastcall FUN_1100c380(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fdc0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)(param_1 + 4),0x18e,0,0);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  SendMessageA(*(HWND *)(param_1 + 4),0x18e,0,0);
  ExceptionList = local_10;
  return;
}


// ==== 1100c3ed Catch@1100c3ed

void Catch_1100c3ed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100c401 Catch@1100c401

void Catch_1100c401(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__GetTop_1106a624);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100c450 FUN_1100c450

void __thiscall FUN_1100c450(void *this,WPARAM param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fdd0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)((int)this + 4),0x197,param_1,0);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x197,param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100c4c3 Catch@1100c4c3

void Catch_1100c4c3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100c4d7 Catch@1100c4d7

void Catch_1100c4d7(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__SetTop_1106a64c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100c520 FUN_1100c520

void __thiscall FUN_1100c520(void *this,WPARAM param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fde0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)((int)this + 4),0x182,param_1,0);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x182,param_1,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100c593 Catch@1100c593

void Catch_1100c593(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100c5a7 Catch@1100c5a7

void Catch_1100c5a7(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__DeleteItem_1106a674);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100c5f0 FUN_1100c5f0

void __fastcall FUN_1100c5f0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fdf0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)(param_1 + 4),0x18b,0,0);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  SendMessageA(*(HWND *)(param_1 + 4),0x18b,0,0);
  ExceptionList = local_10;
  return;
}


// ==== 1100c65d Catch@1100c65d

void Catch_1100c65d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100c671 Catch@1100c671

void Catch_1100c671(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__GetCount_1106a6a8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100c6c0 FUN_1100c6c0

void __thiscall FUN_1100c6c0(void *this,WPARAM param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fe00;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x1a1,param_1,0);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  SendMessageA(*(HWND *)((int)this + 4),0x1a1,param_1,0);
  ExceptionList = local_10;
  return;
}


// ==== 1100c73d Catch@1100c73d

void Catch_1100c73d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100c751 Catch@1100c751

void Catch_1100c751(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__GetItemHeight_1106a6d8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100c7a0 FUN_1100c7a0

uint __thiscall FUN_1100c7a0(void *this,undefined2 param_1,undefined2 param_2)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fe10;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    uVar1 = SendMessageA(*(HWND *)((int)this + 4),0x1a9,0,CONCAT22(param_2,param_1));
  }
  else {
    ExceptionList = &local_10;
    uVar1 = SendMessageW(*(HWND *)((int)this + 4),0x1a9,0,CONCAT22(param_2,param_1));
  }
  if (uVar1 >> 0x10 != 0) {
    ExceptionList = local_10;
    return 0xffffffff;
  }
  ExceptionList = local_10;
  return uVar1 & 0xffff;
}


// ==== 1100c83a Catch@1100c83a

void Catch_1100c83a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100c84e Catch@1100c84e

void Catch_1100c84e(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__ItemFromPoint_1106a714);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100c8a0 FUN_1100c8a0

CRect * __thiscall FUN_1100c8a0(void *this,CRect *param_1,WPARAM param_2)

{
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fe20;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  local_20 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)((int)this + 4),0x198,param_2,(LPARAM)&local_2c);
  }
  else {
    ExceptionList = &local_10;
    local_14 = &stack0xffffffc8;
    SendMessageW(*(HWND *)((int)this + 4),0x198,param_2,(LPARAM)&local_2c);
  }
  CRect::CRect(param_1,local_2c,local_28,local_24,local_20);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1100c936 Catch@1100c936

void Catch_1100c936(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100c94a Catch@1100c94a

void Catch_1100c94a(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__GetItemRect_1106a750);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100c9a0 FUN_1100c9a0

void __fastcall FUN_1100c9a0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fe30;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)(param_1 + 4),0x184,0,0);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)(param_1 + 4),0x184,0,0);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100ca05 Catch@1100ca05

void Catch_1100ca05(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100ca19 Catch@1100ca19

void Catch_1100ca19(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__Empty_1106a784);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100ca60 FUN_1100ca60

void __thiscall FUN_1100ca60(void *this,WPARAM param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fe40;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x187,param_1,0);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  SendMessageA(*(HWND *)((int)this + 4),0x187,param_1,0);
  ExceptionList = local_10;
  return;
}


// ==== 1100cadd Catch@1100cadd

void Catch_1100cadd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100caf1 Catch@1100caf1

void Catch_1100caf1(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__GetSelected_1106a7ac);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100cb40 FUN_1100cb40

void __thiscall FUN_1100cb40(void *this,WPARAM param_1,LPARAM param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fe50;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x191,param_1,param_2);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  SendMessageA(*(HWND *)((int)this + 4),0x191,param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 1100cbb5 Catch@1100cbb5

void Catch_1100cbb5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100cbc9 Catch@1100cbc9

void Catch_1100cbc9(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__GetSelectedItems_1106a7e0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100cc10 FUN_1100cc10

void __fastcall FUN_1100cc10(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fe60;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)(param_1 + 4),400,0,0);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  SendMessageA(*(HWND *)(param_1 + 4),400,0,0);
  ExceptionList = local_10;
  return;
}


// ==== 1100cc7d Catch@1100cc7d

void Catch_1100cc7d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100cc91 Catch@1100cc91

void Catch_1100cc91(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__GetSelectedCount_1106a820);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100cce0 FUN_1100cce0

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall FUN_1100cce0(void *this,ushort *param_1)

{
  HWND hWnd;
  int iVar1;
  char *pcVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fe70;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    iVar1 = winGetSizeANSI(param_1);
    if (iVar1 == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      winGetSizeANSI(param_1);
      pcVar2 = &stack0xffffffd8;
    }
    hWnd = *(HWND *)((int)this + 4);
    iVar1 = winGetSizeANSI(param_1);
    pcVar2 = winToANSI(pcVar2,param_1,iVar1);
    SendMessageA(hWnd,0x180,0,(LPARAM)pcVar2);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x180,0,(LPARAM)param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100cd93 Catch@1100cd93

void Catch_1100cd93(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100cda7 Catch@1100cda7

void Catch_1100cda7(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__AddString_1106a860);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100ce00 FUN_1100ce00

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall FUN_1100ce00(void *this,WPARAM param_1,ushort *param_2)

{
  HWND hWnd;
  int iVar1;
  char *pcVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fe80;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    iVar1 = winGetSizeANSI(param_2);
    if (iVar1 == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      winGetSizeANSI(param_2);
      pcVar2 = &stack0xffffffd8;
    }
    hWnd = *(HWND *)((int)this + 4);
    iVar1 = winGetSizeANSI(param_2);
    pcVar2 = winToANSI(pcVar2,param_2,iVar1);
    SendMessageA(hWnd,0x181,param_1,(LPARAM)pcVar2);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x181,param_1,(LPARAM)param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100cebe Catch@1100cebe

void Catch_1100cebe(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100ced2 Catch@1100ced2

void Catch_1100ced2(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__InsertString_1106a890);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100cf30 FUN_1100cf30

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall FUN_1100cf30(void *this,ushort *param_1)

{
  HWND hWnd;
  int iVar1;
  char *pcVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fe90;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    iVar1 = winGetSizeANSI(param_1);
    if (iVar1 == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      winGetSizeANSI(param_1);
      pcVar2 = &stack0xffffffd8;
    }
    hWnd = *(HWND *)((int)this + 4);
    iVar1 = winGetSizeANSI(param_1);
    pcVar2 = winToANSI(pcVar2,param_1,iVar1);
    SendMessageA(hWnd,0x1a2,0xffffffff,(LPARAM)pcVar2);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x1a2,0xffffffff,(LPARAM)param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100cfe3 Catch@1100cfe3

void Catch_1100cfe3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100cff7 Catch@1100cff7

void Catch_1100cff7(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__FindStringExact_1106a8c8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100d050 FUN_1100d050

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall FUN_1100d050(void *this,ushort *param_1)

{
  HWND hWnd;
  int iVar1;
  char *pcVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fea0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    iVar1 = winGetSizeANSI(param_1);
    if (iVar1 == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      winGetSizeANSI(param_1);
      pcVar2 = &stack0xffffffd8;
    }
    hWnd = *(HWND *)((int)this + 4);
    iVar1 = winGetSizeANSI(param_1);
    pcVar2 = winToANSI(pcVar2,param_1,iVar1);
    SendMessageA(hWnd,399,0xffffffff,(LPARAM)pcVar2);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),399,0xffffffff,(LPARAM)param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100d103 Catch@1100d103

void Catch_1100d103(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100d117 Catch@1100d117

void Catch_1100d117(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__FindString_1106a908);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100d170 FUN_1100d170

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

int __thiscall FUN_1100d170(void *this,ushort *param_1)

{
  HWND hWnd;
  int iVar1;
  char *pcVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105feb0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    iVar1 = winGetSizeANSI(param_1);
    if (iVar1 == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      winGetSizeANSI(param_1);
      pcVar2 = &stack0xffffffd8;
    }
    hWnd = *(HWND *)((int)this + 4);
    iVar1 = winGetSizeANSI(param_1);
    pcVar2 = winToANSI(pcVar2,param_1,iVar1);
    iVar1 = SendMessageA(hWnd,399,0xffffffff,(LPARAM)pcVar2);
  }
  else {
    ExceptionList = &local_10;
    iVar1 = SendMessageW(*(HWND *)((int)this + 4),399,0xffffffff,(LPARAM)param_1);
  }
  if (iVar1 == -1) {
    appFailAssert(s_Result__LB_ERR_1106a980,s___Controls_cpp_11068b54,0x7f8);
  }
  ExceptionList = local_10;
  return iVar1;
}


// ==== 1100d244 Catch@1100d244

void Catch_1100d244(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100d258 Catch@1100d258

void Catch_1100d258(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__FindStringChecked_1106a93c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100d2c0 FUN_1100d2c0

void __thiscall FUN_1100d2c0(void *this,ushort *param_1,ushort *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fec0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = WListBox::FindStringChecked(this,param_1);
  WListBox::InsertString(this,iVar1 + 1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 1100d31e Catch@1100d31e

void Catch_1100d31e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100d332 Catch@1100d332

void Catch_1100d332(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__InsertStringAfter_1106a994);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100d380 FUN_1100d380

void __thiscall FUN_1100d380(void *this,LPARAM param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fed0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x180,0,param_1);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  SendMessageA(*(HWND *)((int)this + 4),0x180,0,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1100d3ff Catch@1100d3ff

void Catch_1100d3ff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100d413 Catch@1100d413

void Catch_1100d413(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__AddItem_1106a9d8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100d460 FUN_1100d460

void __thiscall FUN_1100d460(void *this,WPARAM param_1,LPARAM param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fee0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    SendMessageA(*(HWND *)((int)this + 4),0x181,param_1,param_2);
  }
  else {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),0x181,param_1,param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100d4cb Catch@1100d4cb

void Catch_1100d4cb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100d4df Catch@1100d4df

void Catch_1100d4df(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__AddInsert_1106aa04);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100d530 FUN_1100d530

void __thiscall FUN_1100d530(void *this,LPARAM param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fef0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &local_10;
    SendMessageW(*(HWND *)((int)this + 4),399,0xffffffff,param_1);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  SendMessageA(*(HWND *)((int)this + 4),399,0xffffffff,param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1100d5af Catch@1100d5af

void Catch_1100d5af(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100d5c3 Catch@1100d5c3

void Catch_1100d5c3(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__FindItem_1106aa34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100d610 FUN_1100d610

int __thiscall FUN_1100d610(void *this,LPARAM param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105ff00;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &local_10;
    iVar1 = SendMessageA(*(HWND *)((int)this + 4),399,0xffffffff,param_1);
  }
  else {
    ExceptionList = &local_10;
    iVar1 = SendMessageW(*(HWND *)((int)this + 4),399,0xffffffff,param_1);
  }
  if (iVar1 == -1) {
    appFailAssert(s_Result__LB_ERR_1106a980,s___Controls_cpp_11068b54,0x81d);
  }
  ExceptionList = local_10;
  return iVar1;
}


// ==== 1100d69f Catch@1100d69f

void Catch_1100d69f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100d6b3 Catch@1100d6b3

void Catch_1100d6b3(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__FindItemChecked_1106aa64);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100d700 FUN_1100d700

void __thiscall FUN_1100d700(void *this,void *param_1,void *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105ff10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = WListBox::FindItemChecked(this,param_1);
  WListBox::InsertItem(this,iVar1 + 1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 1100d75e Catch@1100d75e

void Catch_1100d75e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100d772 Catch@1100d772

void Catch_1100d772(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListBox__InsertStringAfter_1106aaa4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100d7c0 FUN_1100d7c0

void __thiscall
FUN_1100d7c0(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105ff20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)((int)this + 0x88) = param_3;
  WWindow::PerformCreateWindowEx
            (this,0x200,(ushort *)0x0,
             -(uint)(param_1 != 0) & 0x10000000 | -(uint)(param_3 != 0) & 0x808 |
             (-(uint)(param_2 != 0) & 0xffffff00) + 0x100 | -(uint)(param_4 != 0) & 2 | param_5 |
             0x42a00051,0,0,0,0,*(HWND__ **)(*(int *)((int)this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)((int)this + 0xc),DAT_1109c35c);
  hWnd = *(HWND *)((int)this + 4);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100d8ad Catch@1100d8ad

void Catch_1100d8ad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100d8c1 Catch@1100d8c1

void Catch_1100d8c1(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WCheckListBox__OpenWindow_1106aae8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100d930 FUN_1100d930

void __thiscall FUN_1100d930(void *this,int param_1)

{
  RECT *lprect;
  undefined1 *puVar1;
  BOOL BVar2;
  COLORREF color;
  DWORD DVar3;
  UINT c;
  ushort *puVar4;
  HDC hdc;
  void *pvVar5;
  HGDIOBJ pvVar6;
  char *pcVar7;
  INT *lpDx;
  FString local_34 [20];
  COLORREF local_20;
  COLORREF local_1c;
  WListBox *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1105ff39;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = this;
  puVar1 = &stack0xffffffc0;
  if ((-1 < *(int *)(param_1 + 8)) &&
     (ExceptionList = &local_10, puVar1 = &stack0xffffffc0, (*(byte *)(param_1 + 0xc) & 3) != 0)) {
    ExceptionList = &local_10;
    BVar2 = IsWindowEnabled(*(HWND *)((int)this + 4));
    if (BVar2 != 0) {
      color = GetSysColor(8);
    }
    else {
      color = 0x808080;
    }
    local_1c = SetTextColor(*(HDC *)(param_1 + 0x18),color);
    DVar3 = GetSysColor(5);
    local_20 = SetBkColor(*(HDC *)(param_1 + 0x18),DVar3);
    if ((BVar2 != 0) && ((*(byte *)(param_1 + 0x10) & 1) != 0)) {
      DVar3 = GetSysColor(0xe);
      SetTextColor(*(HDC *)(param_1 + 0x18),DVar3);
      DVar3 = GetSysColor(0xd);
      SetBkColor(*(HDC *)(param_1 + 0x18),DVar3);
    }
    WListBox::GetString(local_18,(int)local_34);
    local_8._0_1_ = 1;
    lprect = (RECT *)(param_1 + 0x1c);
    lpDx = (INT *)0x0;
    c = FString::Len(local_34);
    pcVar7 = (char *)0x0;
    puVar4 = FString::operator*(local_34);
    pcVar7 = appToAnsi(puVar4,pcVar7);
    ExtTextOutA(*(HDC *)(param_1 + 0x18),lprect->left + 0x12,*(int *)(param_1 + 0x20) + 2,2,lprect,
                pcVar7,c,lpDx);
    SetTextColor(*(HDC *)(param_1 + 0x18),local_1c);
    SetBkColor(*(HDC *)(param_1 + 0x18),local_20);
    hdc = CreateCompatibleDC(*(HDC *)(param_1 + 0x18));
    pvVar5 = WListBox::GetItemData(local_18,*(int *)(param_1 + 8));
    if (pvVar5 == (void *)0x0) {
      pvVar6 = *(HGDIOBJ *)(local_18 + 0x8c);
    }
    else {
      pvVar6 = *(HGDIOBJ *)(local_18 + 0x90);
    }
    pvVar6 = SelectObject(hdc,pvVar6);
    BitBlt(*(HDC *)(param_1 + 0x18),lprect->left + 2,*(int *)(param_1 + 0x20) + 3,0xd,0xd,hdc,0,0,
           0xcc0020);
    SelectObject(hdc,pvVar6);
    DeleteDC(hdc);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_34);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  if ((*(byte *)(param_1 + 0xc) & 4) != 0) {
    DrawFocusRect(*(HDC *)(param_1 + 0x18),(RECT *)(param_1 + 0x1c));
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100daf7 Catch@1100daf7

void Catch_1100daf7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_1107a670);
}


// ==== 1100db0b Catch@1100db0b

void Catch_1100db0b(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WCheckListBox__OnDrawItem_1106ab28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100dbb0 FUN_1100dbb0

void __fastcall FUN_1100dbb0(WWindow *param_1)

{
  int iVar1;
  void *pvVar2;
  tagPOINT local_24 [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105ff50;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::OnLeftButtonDown(param_1);
  GetCursorPos(local_24);
  ScreenToClient(*(HWND *)(param_1 + 4),local_24);
  if (local_24[0].x < 0x11) {
    iVar1 = WListBox::ItemFromPoint((WListBox *)param_1,local_24[0].x,local_24[0].y);
    pvVar2 = WListBox::GetItemData((WListBox *)param_1,iVar1);
    WListBox::SetItemData((WListBox *)param_1,iVar1,(uint)(pvVar2 == (void *)0x0));
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    appFailAssert(s_OwnerWindow_1106abb4,s___Controls_cpp_11068b54,0x891);
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    PostMessageA(*(HWND *)(*(int *)(param_1 + 0x14) + 4),0x111,0x8021,0);
  }
  else {
    PostMessageW(*(HWND *)(*(int *)(param_1 + 0x14) + 4),0x111,0x8021,0);
  }
  InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
  ExceptionList = local_10;
  return;
}


// ==== 1100dc9c Catch@1100dc9c

void Catch_1100dc9c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100dcb0 Catch@1100dcb0

void Catch_1100dcb0(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WCheckListBox__OnLeftButtonDown_1106ab68);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100dd20 FUN_1100dd20

void __thiscall FUN_1100dd20(void *this,int param_1,uint param_2)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105ff60;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::PerformCreateWindowEx
            (this,0x200,(ushort *)0x0,-(uint)(param_1 != 0) & 0x10000000 | param_2 | 0x40000000,0,0,
             0,0,*(HWND__ **)(*(int *)((int)this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)((int)this + 0xc),DAT_1109c35c);
  hWnd = *(HWND *)((int)this + 4);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar1,lParam);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100ddd6 Catch@1100ddd6

void Catch_1100ddd6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100ddea Catch@1100ddea

void Catch_1100ddea(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WListView__OpenWindow_1106abc4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100de40 FUN_1100de40

void __thiscall FUN_1100de40(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar1 * 4) = *param_1;
  return;
}


// ==== 1100de70 FUN_1100de70

int __thiscall FUN_1100de70(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 4)) {
    piVar2 = *(int **)this;
    do {
      if (*piVar2 == *param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)((int)this + 4));
  }
  return -1;
}


// ==== 1100dea0 FUN_1100dea0

void __thiscall FUN_1100dea0(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar1 * 4) = *param_1;
  return;
}


// ==== 1100df00 FUN_1100df00

void __thiscall FUN_1100df00(void *this,int param_1,int param_2)

{
  if (param_1 < 0) {
    appFailAssert(s_Index>_0_1106ac28,s_d__work_interlude_2007_05_23_war_1106ac34,0x203);
  }
  if (*(int *)((int)this + 4) < param_1) {
    appFailAssert(s_Index<_ArrayNum_1106ac14,s_d__work_interlude_2007_05_23_war_1106ac34,0x204);
  }
  if (*(int *)((int)this + 4) < param_1 + param_2) {
    appFailAssert(s_Index_Count<_ArrayNum_1106abf8,s_d__work_interlude_2007_05_23_war_1106ac34,0x205
                 );
  }
  FArray::Remove(this,param_1,param_2,4);
  return;
}


// ==== 1100dfc0 FUN_1100dfc0

int __thiscall FUN_1100dfc0(void *this,byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1105ff7c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)((int)this + 0x14));
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  ExceptionList = local_c;
  return (int)this;
}


// ==== 1100e030 FUN_1100e030

void __thiscall FUN_1100e030(void *this)

{
  HWND hWnd;
  ushort *puVar1;
  WPARAM WVar2;
  undefined4 in_stack_00000010;
  undefined4 *puVar3;
  ushort local_238;
  undefined1 local_236 [510];
  undefined4 local_38 [3];
  ushort *local_2c;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105ff99;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdbc;
  local_8 = 1;
  local_238 = 0;
  ExceptionList = &local_10;
  _memset(local_236,0,0x1fe);
  puVar1 = FString::operator*((FString *)&stack0x00000004);
  appStrcpy(&local_238,puVar1);
  local_38[0] = 9;
  local_2c = &local_238;
  local_20 = in_stack_00000010;
  hWnd = *(HWND *)((int)this + 4);
  if (*(int *)GUnicodeOS_exref == 0) {
    puVar3 = local_38;
    WVar2 = WTabControl::GetCount(this);
    SendMessageA(hWnd,0x133e,WVar2,(LPARAM)puVar3);
  }
  else {
    puVar3 = local_38;
    WVar2 = WTabControl::GetCount(this);
    SendMessageW(hWnd,0x133e,WVar2,(LPARAM)puVar3);
  }
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 1100e111 Catch@1100e111

void Catch_1100e111(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100e125 Catch@1100e125

void Catch_1100e125(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WTabControl__AddTab_1106ac80);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100e190 FUN_1100e190

void __thiscall FUN_1100e190(void *this,ulong param_1,int param_2,int param_3)

{
  tagRECT local_2c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105ffb0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::OnSize(this,param_1,param_2,param_3);
  GetClientRect(*(HWND *)((int)this + 4),&local_2c);
  MoveWindow(*(HWND *)(*(int *)((int)this + 0x40) + 4),4,4,local_2c.right + -8,local_2c.bottom + -8,
             1);
  WPropertySheet::RefreshPages(this);
  InvalidateRect(*(HWND *)((int)this + 4),(RECT *)0x0,1);
  ExceptionList = local_10;
  return;
}


// ==== 1100e22b Catch@1100e22b

void Catch_1100e22b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100e23f Catch@1100e23f

void Catch_1100e23f(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPropertySheet__OnSize_1106acb0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100e290 FUN_1100e290

void __fastcall FUN_1100e290(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105ffc0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WTabControl::Empty(*(WTabControl **)(param_1 + 0x40));
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x48); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(param_1 + 0x44),4,0);
  ExceptionList = local_10;
  return;
}


// ==== 1100e2f6 Catch@1100e2f6

void Catch_1100e2f6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1100e30a Catch@1100e30a

void Catch_1100e30a(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPropertySheet__Empty_1106ace8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100e350 FUN_1100e350

void __thiscall FUN_1100e350(void *this,WPropertyPage *param_1)

{
  WPropertyPage *this_00;
  WPropertyPage *pWVar1;
  WPropertyPage aWStack_38 [8];
  undefined4 uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1105ffd9;
  local_10 = ExceptionList;
  local_8 = 0;
  uStack_30 = 0x1100e386;
  ExceptionList = &local_10;
  thunk_FUN_1100dea0((void *)((int)this + 0x44),&param_1);
  this_00 = param_1;
  WPropertyPage::GetID(param_1);
  param_1 = aWStack_38;
  pWVar1 = aWStack_38;
  WPropertyPage::GetCaption(this_00);
  local_8 = local_8 & 0xffffff00;
  WTabControl::AddTab(*(WTabControl **)((int)this + 0x40),pWVar1);
  ExceptionList = local_10;
  return;
}


// ==== 1100e3cb Catch@1100e3cb

void Catch_1100e3cb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100e3df Catch@1100e3df

void Catch_1100e3df(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPropertySheet__AddPage_1106ad1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100e430 FUN_1100e430

int __fastcall FUN_1100e430(WPropertySheet *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1105fff0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = thunk_FUN_1100de70(param_1 + 0x44,(int *)&stack0x00000004);
  if (iVar1 != -1) {
    iVar1 = WPropertySheet::SetCurrent(param_1,iVar1);
    ExceptionList = local_10;
    return iVar1;
  }
  ExceptionList = local_10;
  return -1;
}


// ==== 1100e49c Catch@1100e49c

void Catch_1100e49c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100e4b0 Catch@1100e4b0

void Catch_1100e4b0(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPropertySheet__SetCurrent_1106ad58);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100e500 FUN_1100e500

void __fastcall FUN_1100e500(WWindow *param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined4 *puVar2;
  undefined4 local_8 [2];
  
  puVar2 = local_8;
  WWindow::GetCursorPos(param_1);
  iVar1 = WListBox::ItemFromPoint((WListBox *)param_1,unaff_ESI,local_8[0],puVar2);
  WListBox::SetCurrent((WListBox *)param_1,iVar1,1);
  (*(code *)**(undefined4 **)(param_1 + 0x7c))();
  return;
}


// ==== 1100e550 FUN_1100e550

void __fastcall FUN_1100e550(FArray *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11060009;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(param_1 + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert(s_Index<_ArrayNum_1106ac14,s_d__work_interlude_2007_05_23_war_1106ac34,0x204);
  }
  if (*(int *)(param_1 + 4) < iVar1) {
    appFailAssert(s_Index_Count<_ArrayNum_1106abf8,s_d__work_interlude_2007_05_23_war_1106ac34,0x205
                 );
  }
  FArray::Remove(param_1,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1100e610 FUN_1100e610

void __thiscall FUN_1100e610(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1106002c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert(s_Index>_0_1106ac28,s_d__work_interlude_2007_05_23_war_1106ac34,0x203);
  }
  if (*(int *)((int)this + 4) < param_1) {
    appFailAssert(s_Index<_ArrayNum_1106ac14,s_d__work_interlude_2007_05_23_war_1106ac34,0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)((int)this + 4) < iVar2) {
    appFailAssert(s_Index_Count<_ArrayNum_1106abf8,s_d__work_interlude_2007_05_23_war_1106ac34,0x205
                 );
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x28;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      FString::~FString((FString *)(*(int *)this + iVar1 + 0x14));
      iVar1 = iVar1 + 0x28;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(this,param_1,param_2,0x28);
  ExceptionList = local_c;
  return;
}


// ==== 1100e710 FUN_1100e710

void __thiscall FUN_1100e710(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060040;
  local_10 = ExceptionList;
  iVar2 = 0;
  local_8 = 0;
  while( true ) {
    if (*(int *)((int)this + 0x40) <= iVar2) {
      return;
    }
    iVar4 = iVar2 * 0x28;
    this_00 = (int *)((int)this + 0x3c);
    if (*(uint *)(*this_00 + iVar4) == (uint)*(ushort *)(param_1 + 3)) break;
    iVar2 = iVar2 + 1;
  }
  iVar1 = *param_1;
  ExceptionList = &local_10;
  puVar3 = FString::operator*((FString *)((uint *)(*this_00 + iVar4) + 5));
  (**(code **)(iVar1 + 0x2c))(puVar3);
  if (*(int *)GUnicodeOS_exref == 0) {
    SetWindowLongA((HWND)param_1[1],-0x10,*(LONG *)(*this_00 + iVar4 + 0x20));
  }
  else {
    SetWindowLongW((HWND)param_1[1],-0x10,*(LONG *)(*this_00 + iVar4 + 0x20));
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    SetWindowLongA((HWND)param_1[1],-0x14,*(LONG *)(*this_00 + iVar4 + 0x24));
  }
  else {
    SetWindowLongW((HWND)param_1[1],-0x14,*(LONG *)(*this_00 + iVar4 + 0x24));
  }
  iVar4 = iVar4 + *this_00;
  MoveWindow((HWND)param_1[1],*(int *)(iVar4 + 4),*(int *)(iVar4 + 8),
             *(int *)(iVar4 + 0xc) - *(int *)(iVar4 + 4),
             *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 8),1);
  thunk_FUN_1100e610(this_00,iVar2,1);
  ExceptionList = local_10;
  return;
}


// ==== 1100e83a Catch@1100e83a

void Catch_1100e83a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_1107a670);
}


// ==== 1100e84e Catch@1100e84e

void Catch_1100e84e(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPropertyPage__PlaceControl_1106ad98);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100e8d0 FUN_1100e8d0

undefined4 * __thiscall FUN_1100e8d0(void *this,undefined4 param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11060064;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xfffffffc;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined ***)this = WWindow::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0xe) = 0x2000;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  FArray::FArray((FArray *)((int)this + 0x20));
  *(undefined4 *)((int)this + 0x38) = 0;
  ExceptionList = local_c;
  return this;
}


// ==== 1100e970 FUN_1100e970

WWindow * __thiscall FUN_1100e970(void *this,int param_1)

{
  int iVar1;
  void *unaff_ESI;
  FArray *this_00;
  uint unaff_retaddr;
  void *pvStack_20;
  int iStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11060088;
  pvStack_c = ExceptionList;
  iStack_1c = param_1;
  ExceptionList = &pvStack_c;
  pvStack_20 = this;
  FName::FName((FName *)&pvStack_20,0);
  WWindow::WWindow(this);
  pvStack_c = (void *)0x0;
  *(undefined ***)this = WControl::vftable;
  if (*(int *)((int)this + 0x14) == 0) {
    appFailAssert(s_OwnerWindow_1106abb4,s____Inc_Window_h_1106aefc,0x302);
  }
  *(void ***)((int)this + 0x3c) = &pvStack_20;
  if (unaff_retaddr == 0) {
    unaff_retaddr = (uint)*(ushort *)(param_1 + 0xe);
    *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) + 1;
  }
  this_00 = (FArray *)(*(int *)((int)this + 0x14) + 0x20);
  *(short *)((int)this + 0xc) = (short)unaff_retaddr;
  iVar1 = FArray::Add(this_00,1,4);
  *(void **)(*(int *)this_00 + iVar1 * 4) = this;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 1100ea60 FUN_1100ea60

WControl * __thiscall
FUN_1100ea60(void *this,WWindow *param_1,int param_2,_func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110600a8;
  local_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = WTabControl::SuperProc;
  }
  ExceptionList = &local_c;
  WControl::WControl(this,param_1,param_2,param_3);
  *(undefined ***)this = WTabControl::vftable;
  *(undefined ***)((int)this + 0x40) = FDelegate::vftable;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  ExceptionList = local_c;
  return this;
}


// ==== 1100eb00 FUN_1100eb00

WControl * __thiscall
FUN_1100eb00(void *this,WWindow *param_1,int param_2,_func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110600c8;
  local_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = WLabel::SuperProc;
  }
  ExceptionList = &local_c;
  WControl::WControl(this,param_1,param_2,param_3);
  *(undefined ***)this = WLabel::vftable;
  ExceptionList = local_c;
  return this;
}


// ==== 1100eb80 FUN_1100eb80

WControl * __thiscall
FUN_1100eb80(void *this,WWindow *param_1,int param_2,_func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110600e8;
  local_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = WToolTip::SuperProc;
  }
  ExceptionList = &local_c;
  WControl::WControl(this,param_1,param_2,param_3);
  local_4 = 0;
  *(undefined ***)this = WToolTip::vftable;
  if (*(int *)((int)this + 0x14) == 0) {
    appFailAssert(s_OwnerWindow_1106abb4,s____Inc_Window_h_1106aefc,0x438);
  }
  ExceptionList = local_c;
  return this;
}


// ==== 1100ec30 FUN_1100ec30

void __fastcall FUN_1100ec30(WWindow *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  WLabel *pWVar4;
  ushort *puVar5;
  WLabel *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1106010b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_8 = 0;
  local_18 = 0;
  ExceptionList = &local_10;
  while (iVar3 = local_18, local_18 < *(int *)(param_1 + 0x40)) {
    pWVar4 = (WLabel *)thunk_FUN_11004ba0(0x40);
    local_8._0_1_ = 1;
    if (pWVar4 == (WLabel *)0x0) {
      pWVar4 = (WLabel *)0x0;
    }
    else {
      pWVar4 = (WLabel *)
               WLabel::WLabel(pWVar4,param_1,*(int *)(*(int *)(param_1 + 0x3c) + iVar3 * 0x28),
                              (_func_long_HWND___ptr_uint_uint_long *)0x0);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_1c = pWVar4;
    thunk_FUN_1100de40(param_1 + 0x48,&local_1c);
    WLabel::OpenWindow(pWVar4,1,0,0);
    iVar3 = iVar3 * 0x28;
    piVar1 = (int *)(*(int *)(param_1 + 0x3c) + 4 + iVar3);
    MoveWindow(*(HWND *)(pWVar4 + 4),*piVar1,piVar1[1],piVar1[2] - *piVar1,piVar1[3] - piVar1[1],1);
    iVar2 = *(int *)pWVar4;
    puVar5 = FString::operator*((FString *)(*(int *)(param_1 + 0x3c) + iVar3 + 0x14));
    (**(code **)(iVar2 + 0x2c))(puVar5);
    if (*(int *)GUnicodeOS_exref == 0) {
      SetWindowLongA(*(HWND *)(pWVar4 + 4),-0x10,*(LONG *)(*(int *)(param_1 + 0x3c) + iVar3 + 0x20))
      ;
    }
    else {
      SetWindowLongW(*(HWND *)(pWVar4 + 4),-0x10,*(LONG *)(*(int *)(param_1 + 0x3c) + iVar3 + 0x20))
      ;
    }
    if (*(int *)GUnicodeOS_exref == 0) {
      SetWindowLongA(*(HWND *)(pWVar4 + 4),-0x14,*(LONG *)(*(int *)(param_1 + 0x3c) + iVar3 + 0x24))
      ;
      local_18 = local_18 + 1;
    }
    else {
      SetWindowLongW(*(HWND *)(pWVar4 + 4),-0x14,*(LONG *)(*(int *)(param_1 + 0x3c) + iVar3 + 0x24))
      ;
      local_18 = local_18 + 1;
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100eda3 Catch@1100eda3

void Catch_1100eda3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_1107a670);
}


// ==== 1100edb7 Catch@1100edb7

void Catch_1100edb7(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPropertyPage__Finalize_1106b02c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100ee40 FUN_1100ee40

void __fastcall FUN_1100ee40(WWindow *param_1)

{
  int iVar1;
  WTabControl *pWVar2;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1106012b;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::OnCreate(param_1);
  pWVar2 = (WTabControl *)thunk_FUN_11004ba0(0x4c);
  local_8._0_1_ = 1;
  if (pWVar2 == (WTabControl *)0x0) {
    pWVar2 = (WTabControl *)0x0;
  }
  else {
    pWVar2 = (WTabControl *)
             WTabControl::WTabControl
                       (pWVar2,param_1,0x4dbc,(_func_long_HWND___ptr_uint_uint_long *)0x0);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(WTabControl **)(param_1 + 0x40) = pWVar2;
  WTabControl::OpenWindow(pWVar2,1,-(uint)(*(int *)(param_1 + 0x58) != 0) & 0x200);
  iVar1 = *(int *)(param_1 + 0x40);
  *(WWindow **)(iVar1 + 0x44) = param_1;
  *(code **)(iVar1 + 0x48) = WPropertySheet::OnTabsSelChange;
  ExceptionList = local_10;
  return;
}


// ==== 1100eee4 Catch@1100eee4

void Catch_1100eee4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100eef8 Catch@1100eef8

void Catch_1100eef8(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPropertySheet__OnCreate_1106b068);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100ef50 FUN_1100ef50

void __fastcall FUN_1100ef50(WWindow *param_1)

{
  HWND__ *pHVar1;
  HGDIOBJ pvVar2;
  WToolTip *pWVar3;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1106014b;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffd;
  if (*(int *)(param_1 + 0x8c) == 0) {
    appFailAssert(s_bHasBeenSetup_1106b0e4,s___Controls_cpp_11068b54,0x377);
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    pHVar1 = (HWND__ *)0x0;
  }
  else {
    pHVar1 = *(HWND__ **)(*(int *)(param_1 + 0x14) + 4);
  }
  WWindow::PerformCreateWindowEx
            (param_1,0,(ushort *)0x0,0x56000000,*(int *)(param_1 + 0x44),*(int *)(param_1 + 0x48),
             *(int *)(param_1 + 0x4c),*(int *)(param_1 + 0x50),pHVar1,(HMENU__ *)0x0,DAT_1109c35c);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar2 = GetStockObject(0x11);
    SendMessageA(*(HWND *)(param_1 + 4),0x30,(WPARAM)pvVar2,lParam);
  }
  else {
    pvVar2 = GetStockObject(0x11);
    SendMessageW(*(HWND *)(param_1 + 4),0x30,(WPARAM)pvVar2,lParam);
  }
  pWVar3 = (WToolTip *)thunk_FUN_11004ba0(0x40);
  local_8._0_1_ = 1;
  if (pWVar3 == (WToolTip *)0x0) {
    pWVar3 = (WToolTip *)0x0;
  }
  else {
    pWVar3 = (WToolTip *)
             WToolTip::WToolTip(pWVar3,param_1,900,(_func_long_HWND___ptr_uint_uint_long *)0x0);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(WToolTip **)(param_1 + 0x84) = pWVar3;
  WToolTip::OpenWindow(pWVar3);
  ExceptionList = local_10;
  return;
}


// ==== 1100f05e Catch@1100f05e

void Catch_1100f05e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100f072 Catch@1100f072

void Catch_1100f072(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPictureButton__OpenWindow_1106b0a4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100f0e0 FUN_1100f0e0

void __fastcall FUN_1100f0e0(int param_1)

{
  ushort *puVar1;
  
  puVar1 = FString::operator*((FString *)(param_1 + 0x274));
  appClipboardCopy(puVar1);
  return;
}


// ==== 1100f100 FUN_1100f100

FString * __cdecl FUN_1100f100(FString *param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  FString *pFVar3;
  int local_44;
  FString local_3c [12];
  FString local_30 [12];
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1106019e;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::FString(param_1);
  local_4 = 0;
  uVar2 = *param_2;
  local_44 = 0;
  puVar1 = param_2;
  while (uVar2 != 0) {
    uVar2 = *puVar1;
    if ((((uVar2 < 0x61) || (0x7a < uVar2)) && ((uVar2 < 0x41 || (0x5a < uVar2)))) &&
       ((uVar2 < 0x30 || (0x39 < uVar2)))) {
      FString::Printf((ushort *)local_18,u____02x_1106b0f4,(uint)uVar2);
      local_4 = 3;
      pFVar3 = (FString *)FString::operator+(param_1,local_24);
      local_4._0_1_ = 4;
      FString::operator=(param_1,pFVar3);
      local_4._0_1_ = 3;
      FString::~FString(local_24);
      pFVar3 = local_18;
    }
    else {
      FString::Printf((ushort *)local_30,&DAT_1106b104,(uint)uVar2);
      local_4 = 1;
      pFVar3 = (FString *)FString::operator+(param_1,local_3c);
      local_4._0_1_ = 2;
      FString::operator=(param_1,pFVar3);
      local_4._0_1_ = 1;
      FString::~FString(local_3c);
      pFVar3 = local_30;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FString::~FString(pFVar3);
    local_44 = local_44 + 1;
    puVar1 = param_2 + local_44;
    uVar2 = param_2[local_44];
  }
  ExceptionList = local_c;
  return param_1;
}


// ==== 1100f2b0 FUN_1100f2b0

void __fastcall FUN_1100f2b0(WDialog *param_1)

{
  HWND hWnd;
  HDC hdc;
  int iVar1;
  undefined2 uVar2;
  undefined2 local_600 [256];
  undefined2 auStack_400 [256];
  undefined2 auStack_200 [256];
  
  hWnd = GetDesktopWindow();
  hdc = GetDC(hWnd);
  iVar1 = 0;
  do {
    uVar2 = (undefined2)(iVar1 << 8);
    auStack_200[iVar1] = uVar2;
    auStack_400[iVar1] = uVar2;
    local_600[iVar1] = uVar2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  SetDeviceGammaRamp(hdc,local_600);
  WDialog::EndDialogTrue(param_1);
  return;
}


// ==== 1100f330 FUN_1100f330

void FUN_1100f330(void)

{
  return;
}


// ==== 1100f340 FUN_1100f340

undefined4 FUN_1100f340(void)

{
  return 0;
}


// ==== 1100f350 FUN_1100f350

void FUN_1100f350(void)

{
  LocalizeGeneral(s_BackButton_1106b10c,(ushort *)u_Window_1106949c,(ushort *)0x0);
  return;
}


// ==== 1100f370 FUN_1100f370

void FUN_1100f370(void)

{
  LocalizeGeneral(s_NextButton_1106b11c,(ushort *)u_Window_1106949c,(ushort *)0x0);
  return;
}


// ==== 1100f390 FUN_1100f390

undefined4 FUN_1100f390(void)

{
  return 0;
}


// ==== 1100f3a0 FUN_1100f3a0

void FUN_1100f3a0(void)

{
  LocalizeGeneral(s_CancelButton_1106b12c,(ushort *)u_Window_1106949c,(ushort *)0x0);
  return;
}


// ==== 1100f3c0 FUN_1100f3c0

undefined4 FUN_1100f3c0(void)

{
  return 1;
}


// ==== 1100f3d0 FUN_1100f3d0

void __fastcall FUN_1100f3d0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110601c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WDialog::EndDialog(*(WDialog **)(param_1 + 0x3c),0);
  ExceptionList = local_10;
  return;
}


// ==== 1100f41a Catch@1100f41a

void Catch_1100f41a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100f42e Catch@1100f42e

void Catch_1100f42e(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWizardPage__OnCancel_1106b13c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100f470 FUN_1100f470

void __fastcall FUN_1100f470(WDialog *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110601d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WDialog::EndDialog(param_1,1);
  ExceptionList = local_10;
  return;
}


// ==== 1100f4b7 Catch@1100f4b7

void Catch_1100f4b7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100f4cb Catch@1100f4cb

void Catch_1100f4cb(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWizardDialog__OnFinish_1106b170);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100f510 FUN_1100f510

int __thiscall FUN_1100f510(void *this,int param_1)

{
  if (*(int *)((int)this + 4) <= param_1) {
    appFailAssert(s_c<ArrayNum_1106b1ac,s_d__work_interlude_2007_05_23_war_1106ac34,0x198);
  }
  return *(int *)this + -4 + (*(int *)((int)this + 4) - param_1) * 4;
}


// ==== 1100f5a0 FUN_1100f5a0

void __fastcall FUN_1100f5a0(WDialog *param_1)

{
  int iVar1;
  HDC hDC;
  ushort *puVar2;
  FString *pFVar3;
  ushort local_d8 [64];
  FString local_58 [16];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c [2];
  int local_24;
  FString local_20 [12];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_110601f2;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff1c;
  local_8 = 0;
  ExceptionList = &local_10;
  WDialog::OnInitDialog(param_1);
  hDC = GetDC(*(HWND *)(param_1 + 4));
  ReleaseDC(*(HWND *)(param_1 + 4),hDC);
  WWindow::SetFont((WWindow *)(param_1 + 0x3c),hFontText);
  iVar1 = *(int *)param_1;
  puVar2 = FString::operator*((FString *)(param_1 + 0x268));
  (**(code **)(iVar1 + 0x2c))(puVar2);
  FString::FString(local_20);
  local_8._0_1_ = 1;
  appSystemTime(local_2c,&local_34,&local_48,&local_40,&local_38,&local_3c,&local_30,&local_44);
  appSprintf(local_d8,(ushort *)u__d__d__d__02d__02d__02d_1106b244,local_2c[0],local_34,local_40,
             local_38,local_3c,local_30);
  pFVar3 = (FString *)FString::FString(local_58,local_d8);
  local_8._0_1_ = 2;
  FString::operator+=(local_20,pFVar3);
  local_8._0_1_ = 1;
  FString::~FString(local_58);
  FString::operator+=(local_20,(ushort *)&DAT_1106b23c);
  FString::operator+=(local_20,(ushort *)u_OS___1106b22c);
  FString::operator+=(local_20,(ushort *)GMachineOS_exref);
  FString::operator+=(local_20,(ushort *)&DAT_1106b23c);
  FString::operator+=(local_20,(ushort *)u_CPU___1106b21c);
  FString::operator+=(local_20,(ushort *)GMachineCPU_exref);
  FString::operator+=(local_20,(ushort *)&DAT_1106b23c);
  FString::operator+=(local_20,(ushort *)u_Video___1106b204);
  FString::operator+=(local_20,(ushort *)GMachineVideo_exref);
  FString::operator+=(local_20,(ushort *)&DAT_1106b23c);
  FString::operator+=(local_20,(ushort *)&DAT_1106b23c);
  pFVar3 = (FString *)(param_1 + 0x274);
  FString::operator+=(local_20,pFVar3);
  FString::operator+=(local_20,(ushort *)&DAT_1106b23c);
  FString::operator+=(local_20,(ushort *)&DAT_1106b23c);
  FString::operator=(pFVar3,local_20);
  local_24 = *(int *)(param_1 + 0x3c);
  puVar2 = FString::operator*(pFVar3);
  (**(code **)(local_24 + 0x2c))(puVar2);
  SetFocus(*(HWND *)(param_1 + 0x98));
  MessageBeep(0x10);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_20);
  ExceptionList = local_10;
  return;
}


// ==== 1100f7c2 Catch@1100f7c2

void Catch_1100f7c2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_1107a670);
}


// ==== 1100f7d6 Catch@1100f7d6

void Catch_1100f7d6(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WCrashBoxDialog__OnInitDialog_1106b1bc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100f890 FUN_1100f890

void __fastcall FUN_1100f890(WCrashBoxDialog *param_1)

{
  ushort *puVar1;
  FString *pFVar2;
  ushort *puVar3;
  undefined4 uVar4;
  FString local_24 [12];
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11060222;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FString::operator*((FString *)(param_1 + 0x274));
  pFVar2 = FUN_1100f100(local_18,puVar1);
  local_4 = 0;
  puVar1 = FString::operator*(pFVar2);
  uVar4 = 0x83e;
  puVar3 = Localize((ushort *)u_IDDIALOG_CrashBox_1106b2b8,(ushort *)u_BugReportURL_1106b2e4,
                    (ushort *)u_Window_1106949c,(ushort *)0x0,0);
  FString::Printf((ushort *)local_24,u__s_version__d_error__s_1106b280,puVar3,uVar4,puVar1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FString::~FString(local_18);
  pFVar2 = (FString *)0x0;
  puVar3 = (ushort *)&DAT_11068ff8;
  puVar1 = FString::operator*(local_24);
  appLaunchURL(puVar1,puVar3,pFVar2);
  WCrashBoxDialog::EndDialogTrue(param_1);
  local_4 = 0xffffffff;
  FString::~FString(local_24);
  ExceptionList = local_c;
  return;
}


// ==== 1100f9a0 FUN_1100f9a0

void __fastcall FUN_1100f9a0(WDialog *param_1)

{
  HICON pHVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060240;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WDialog::OnInitDialog(param_1);
  if (*(int *)GUnicodeOS_exref == 0) {
    pHVar1 = LoadIconA(DAT_1109c35c,
                       (LPCSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    SendMessageA(*(HWND *)(param_1 + 4),0x80,1,(LPARAM)pHVar1);
  }
  else {
    pHVar1 = LoadIconW(DAT_1109c35c,
                       (LPCWSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    SendMessageW(*(HWND *)(param_1 + 4),0x80,1,(LPARAM)pHVar1);
  }
  (**(code **)(*(int *)param_1 + 0xf4))();
  ExceptionList = local_10;
  return;
}


// ==== 1100fa60 Catch@1100fa60

void Catch_1100fa60(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100fa74 Catch@1100fa74

void Catch_1100fa74(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWizardDialog__OnInitDialog_1106b304);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100fad0 FUN_1100fad0

void __fastcall FUN_1100fad0(int param_1)

{
  int *this;
  WDialog *this_00;
  undefined4 *puVar1;
  ushort *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060250;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(param_1 + 0x2f0) != 0) {
    this = (int *)(param_1 + 0x2ec);
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)thunk_FUN_1100f510(this,0);
    this_00 = (WDialog *)*puVar1;
    if (*(int *)(this_00 + 4) == 0) {
      WDialog::OpenChildWindow(this_00,0x425,1);
    }
    if (*(int *)(param_1 + 0x2f0) < 2) {
      puVar2 = (ushort *)0x0;
    }
    else {
      puVar2 = (ushort *)(**(code **)(*(int *)this_00 + 0xf8))();
    }
    WButton::SetVisibleText((WButton *)(param_1 + 0x3c),puVar2);
    puVar2 = (ushort *)(**(code **)(*(int *)this_00 + 0xfc))();
    WButton::SetVisibleText((WButton *)(param_1 + 0xd8),puVar2);
    puVar2 = (ushort *)(**(code **)(*(int *)this_00 + 0x100))();
    WButton::SetVisibleText((WButton *)(param_1 + 0x174),puVar2);
    puVar2 = (ushort *)(**(code **)(*(int *)this_00 + 0x104))();
    WButton::SetVisibleText((WButton *)(param_1 + 0x210),puVar2);
    if (1 < *(int *)(param_1 + 0x2f0)) {
      (**(code **)(**(int **)(*this + -8 + *(int *)(param_1 + 0x2f0) * 4) + 8))(0);
    }
    puVar1 = (undefined4 *)thunk_FUN_1100f510(this,0);
    (**(code **)(*(int *)*puVar1 + 0xf0))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100fbdd Catch@1100fbdd

void Catch_1100fbdd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100fbf1 Catch@1100fbf1

void Catch_1100fbf1(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWizardDialog__RefreshPage_1106b348);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100fc60 FUN_1100fc60

void __fastcall FUN_1100fc60(WWindow *param_1)

{
  int *piVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060260;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x2f0); iVar2 = iVar2 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x2ec) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
  }
  WWindow::OnDestroy(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 1100fcd1 Catch@1100fcd1

void Catch_1100fcd1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1100fce5 Catch@1100fce5

void Catch_1100fce5(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWizardDialog__OnDestroy_1106b388);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100fd30 FUN_1100fd30

void __fastcall FUN_1100fd30(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060270;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1[0xbc] != 0) {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)thunk_FUN_1100f510(param_1 + 0xbb,0);
    iVar2 = (**(code **)(*(int *)*puVar1 + 0xfc))();
    if (iVar2 != 0) {
      puVar1 = (undefined4 *)thunk_FUN_1100f510(param_1 + 0xbb,0);
      iVar2 = (**(code **)(*(int *)*puVar1 + 0xf4))();
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0xf0))(iVar2);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1100fdc0 Catch@1100fdc0

void Catch_1100fdc0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100fdd4 Catch@1100fdd4

void Catch_1100fdd4(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWizardDialog__OnNext_1106b3c4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100fe30 FUN_1100fe30

void __fastcall FUN_1100fe30(int param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060280;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)thunk_FUN_1100f510((void *)(param_1 + 0x2ec),0);
  (**(code **)(*(int *)*puVar1 + 0x10c))();
  ExceptionList = local_10;
  return;
}


// ==== 1100fe89 Catch@1100fe89

void Catch_1100fe89(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1100fe9d Catch@1100fe9d

void Catch_1100fe9d(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWizardDialog__OnCancel_1106b3f8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100fee0 FUN_1100fee0

void __fastcall FUN_1100fee0(int param_1)

{
  undefined4 *puVar1;
  wchar_t *local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060290;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = (undefined4 *)thunk_FUN_1100f510((void *)(param_1 + 0x2ec),0);
  (**(code **)(*(int *)*puVar1 + 0x10c))();
  local_18 = u_NoRoute_1106b458;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_18,&DAT_1107a670);
}


// ==== 1100ff36 Catch@1100ff36

void Catch_1100ff36(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1100ff4a Catch@1100ff4a

void Catch_1100ff4a(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WLog__OnClose_1106b434);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1100ff90 FUN_1100ff90

void __thiscall FUN_1100ff90(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FArray::Add(this,1,4);
  *(undefined4 *)(*(int *)this + iVar1 * 4) = *param_1;
  return;
}


// ==== 1100ffc0 FUN_1100ffc0

void __thiscall FUN_1100ffc0(void *this,int param_1,int param_2)

{
  if (param_1 < 0) {
    appFailAssert(s_Index>_0_1106ac28,s_d__work_interlude_2007_05_23_war_1106ac34,0x203);
  }
  if (*(int *)((int)this + 4) < param_1) {
    appFailAssert(s_Index<_ArrayNum_1106ac14,s_d__work_interlude_2007_05_23_war_1106ac34,0x204);
  }
  if (*(int *)((int)this + 4) < param_1 + param_2) {
    appFailAssert(s_Index_Count<_ArrayNum_1106abf8,s_d__work_interlude_2007_05_23_war_1106ac34,0x205
                 );
  }
  FArray::Remove(this,param_1,param_2,4);
  return;
}


// ==== 11010060 FUN_11010060

void __thiscall FUN_11010060(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110602a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1 == 0) {
    ExceptionList = &local_10;
    appFailAssert(s_NewPage_1106b4a8,s___Dialogs_cpp_1106b4b4,0xb9);
  }
  thunk_FUN_1100ff90((void *)((int)this + 0x2ec),&param_1);
  if (*(int *)((int)this + 4) != 0) {
    (**(code **)(*(int *)this + 0xf4))();
  }
  puVar1 = (undefined4 *)thunk_FUN_1100f510((void *)((int)this + 0x2ec),0);
  iVar2 = (**(code **)(*(int *)*puVar1 + 0x108))();
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0xfc))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1101010a Catch@1101010a

void Catch_1101010a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101011e Catch@1101011e

void Catch_1101011e(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWizardDialog__Advanced_1106b46c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11010180 FUN_11010180

undefined4 __fastcall FUN_11010180(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[1] < 1) {
    appFailAssert(s_ArrayNum>0_1106b4c4,s_d__work_interlude_2007_05_23_war_1106ac34,0x18e);
  }
  uVar1 = *(undefined4 *)(*param_1 + -4 + param_1[1] * 4);
  thunk_FUN_1100ffc0(param_1,param_1[1] + -1,1);
  return uVar1;
}


// ==== 110101d0 FUN_110101d0

void __fastcall FUN_110101d0(int *param_1)

{
  int *this;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110602b0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (1 < param_1[0xbc]) {
    this = param_1 + 0xbb;
    ExceptionList = &local_10;
    (**(code **)(**(int **)(*this + -8 + param_1[0xbc] * 4) + 8))(1);
    piVar1 = (int *)thunk_FUN_11010180(this);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
    (**(code **)(*param_1 + 0xf4))();
    puVar2 = (undefined4 *)thunk_FUN_1100f510(this,0);
    iVar3 = (**(code **)(*(int *)*puVar2 + 0x108))();
    if (iVar3 == 0) {
      (**(code **)(*param_1 + 0xf8))();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 11010279 Catch@11010279

void Catch_11010279(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101028d Catch@1101028d

void Catch_1101028d(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WWizardDialog__OnBack_1106b4d4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110102e0 FUN_110102e0

void * __thiscall FUN_110102e0(void *this,int param_1)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110602c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pvVar1 = WListBox::GetItemData((WListBox *)((int)this + 0x44),param_1);
  if (pvVar1 == (void *)0x0) {
    appFailAssert(s_Result_1106b550,s___Properties_cpp_1106b558,0x19);
  }
  ExceptionList = local_10;
  return pvVar1;
}


// ==== 11010344 Catch@11010344

void Catch_11010344(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11010358 Catch@11010358

void Catch_11010358(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WPropertiesBase__GetListItem_1106b508);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110103a0 FUN_110103a0

HBRUSH__ * FUN_110103a0(int param_1)

{
  HBRUSH__ *pHVar1;
  
  pHVar1 = hBrushCurrent;
  if (param_1 == 0) {
    pHVar1 = hBrushGrey197;
  }
  return pHVar1;
}


// ==== 110103eb Catch@110103eb

void Catch_110103eb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110103ff Catch@110103ff

void Catch_110103ff(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__GetBackgroundBrush_1106b56c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11010440 FUN_11010440

undefined4 FUN_11010440(void)

{
  return 0;
}


// ==== 1101047d Catch@1101047d

void Catch_1101047d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11010491 Catch@11010491

void Catch_11010491(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__GetTextColor_1106b5b4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110104d0 FUN_110104d0

undefined4 FUN_110104d0(void)

{
  return 0;
}


// ==== 1101050b Catch@1101050b

void Catch_1101050b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101051f Catch@1101051f

void Catch_1101051f(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__OnSetCursor_1106b5f0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11010560 FUN_11010560

int __thiscall FUN_11010560(void *this,int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060300;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WListBox::FindItemChecked((WListBox *)(*(int *)((int)this + 8) + 0x44),this);
  WListBox::GetItemRect((WListBox *)(*(int *)((int)this + 8) + 0x44),param_1);
  ExceptionList = local_10;
  return param_1;
}


// ==== 110105bb Catch@110105bb

void Catch_110105bb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110105cf Catch@110105cf

void Catch_110105cf(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__GetRect_1106b628);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11010610 FUN_11010610

void __fastcall FUN_11010610(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060310;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    ExceptionList = &local_10;
    iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0xe8))();
    if (*(int *)(param_1 + 0xc) != iVar1) {
      (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 11010674 Catch@11010674

void Catch_11010674(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11010688 Catch@11010688

void Catch_11010688(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__OnItemSetFocus_1106b658);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110106d0 FUN_110106d0

void __fastcall FUN_110106d0(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060320;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1[4] != 0) {
    ExceptionList = &local_10;
    (**(code **)(*param_1 + 0x58))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1101071f Catch@1101071f

void Catch_1101071f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11010733 Catch@11010733

void Catch_11010733(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__OnItemLeftMouseDown_1106b698);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11010770 FUN_11010770

void FUN_11010770(void)

{
  return;
}


// ==== 110107b2 Catch@110107b2

void Catch_110107b2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110107c6 Catch@110107c6

void Catch_110107c6(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__OnItemRightMouseDown_1106b6e8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11010800 FUN_11010800

int __fastcall FUN_11010800(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060340;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0xc);
  ExceptionList = &local_10;
  while( true ) {
    iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0xe8))();
    if (iVar3 == iVar1) break;
    iVar2 = iVar2 + 1;
    iVar3 = *(int *)(iVar3 + 0xc);
  }
  ExceptionList = local_10;
  return iVar2;
}


// ==== 11010861 Catch@11010861

void Catch_11010861(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 11010875 Catch@11010875

void Catch_11010875(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__GetIndent_1106b734);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110108c0 FUN_110108c0

char __fastcall FUN_110108c0(int param_1)

{
  return (*(int *)(*(int *)(param_1 + 8) + 0x40) != 0) * '\x04' + '\b';
}


// ==== 110108e0 FUN_110108e0

int __thiscall FUN_110108e0(void *this,int param_1)

{
  int iVar1;
  int extraout_EDX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060350;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (uint)(*(int *)(*(int *)((int)this + 8) + 0x40) != 0) * 4 + 0x10;
  }
  ExceptionList = &local_10;
  FTreeItem::GetIndent(this);
  iVar1 = FTreeItem::GetUnitIndentPixels(this);
  ExceptionList = local_10;
  return extraout_EDX * iVar1 + iVar2;
}


// ==== 11010952 Catch@11010952

void Catch_11010952(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11010966 Catch@11010966

void Catch_11010966(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__GetIndentPixels_1106b768);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110109b0 FUN_110109b0

undefined4 __fastcall FUN_110109b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}


// ==== 110109ec Catch@110109ec

void Catch_110109ec(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11010a00 Catch@11010a00

void Catch_11010a00(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__GetSelected_1106b7a8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11010a40 FUN_11010a40

void __thiscall FUN_11010a40(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x1c) = param_1;
  return;
}


// ==== 11010a88 Catch@11010a88

void Catch_11010a88(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11010a9c Catch@11010a9c

void Catch_11010a9c(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__SetSelected_1106b7e0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11010ae0 FUN_11010ae0

void __fastcall FUN_11010ae0(void *param_1)

{
  int iVar1;
  int iVar2;
  FTreeItem *pFVar3;
  void *pvVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060380;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)((int)param_1 + 8) + 0xf4))(0);
  iVar1 = WListBox::FindItemChecked((WListBox *)(*(int *)((int)param_1 + 8) + 0x44),param_1);
  iVar2 = WListBox::GetCount((WListBox *)(*(int *)((int)param_1 + 8) + 0x44));
  while( true ) {
    if (iVar2 <= iVar1 + 1) break;
    pFVar3 = WPropertiesBase::GetListItem(*(WPropertiesBase **)((int)param_1 + 8),iVar1 + 1);
    pvVar4 = *(void **)(pFVar3 + 0xc);
    while( true ) {
      if (pvVar4 == (void *)0x0) goto LAB_11010b78;
      if (pvVar4 == param_1) break;
      pvVar4 = *(void **)((int)pvVar4 + 0xc);
    }
    *(undefined4 *)(pFVar3 + 0x14) = 0;
    WListBox::DeleteString((WListBox *)(*(int *)((int)param_1 + 8) + 0x44),iVar1 + 1);
    iVar2 = iVar2 + -1;
  }
LAB_11010b78:
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  (**(code **)(**(int **)((int)param_1 + 8) + 0xf0))();
  ExceptionList = local_10;
  return;
}


// ==== 11010ba6 Catch@11010ba6

void Catch_11010ba6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 11010bba Catch@11010bba

void Catch_11010bba(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__Collapse_1106b818);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11010c20 FUN_11010c20

void FUN_11010c20(void)

{
  return;
}


// ==== 11010c60 Catch@11010c60

void Catch_11010c60(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11010c74 Catch@11010c74

void Catch_11010c74(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__OnItemDoubleClick_1106b848);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11010cb0 FUN_11010cb0

undefined4 __fastcall FUN_11010cb0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x11010cbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 100))();
    return uVar1;
  }
  return 0;
}


// ==== 11010cd0 FUN_11010cd0

void __fastcall FUN_11010cd0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x11010cd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))();
  return;
}


// ==== 11010ce0 FUN_11010ce0

undefined4 __thiscall FUN_11010ce0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110603a0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    ExceptionList = &local_10;
    uVar1 = (**(code **)(**(int **)((int)this + 0xc) + 0x68))(param_1,param_2);
    ExceptionList = local_10;
    return uVar1;
  }
  return 0;
}


// ==== 11010d48 Catch@11010d48

void Catch_11010d48(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11010d5c Catch@11010d5c

void Catch_11010d5c(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeList__GetReadAddress_1106b890);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11010da0 FUN_11010da0

void __fastcall FUN_11010da0(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110603b0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(param_1 + 0xc) + 0x6c))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 11010df0 Catch@11010df0

void Catch_11010df0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11010e04 Catch@11010e04

void Catch_11010e04(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeList__NotifyChange_1106b8d0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11010e50 FUN_11010e50

void __thiscall FUN_11010e50(void *this,undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110603c0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)((int)this + 0xc) + 0x70))(param_1,param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 11010eaa Catch@11010eaa

void Catch_11010eaa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11010ebe Catch@11010ebe

void Catch_11010ebe(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeList__SetProperty_1106b90c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11010f00 FUN_11010f00

void __thiscall FUN_11010f00(void *this,undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110603d0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)((int)this + 0xc) + 0x74))(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 11010f56 Catch@11010f56

void Catch_11010f56(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11010f6a Catch@11010f6a

void Catch_11010f6a(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeList__GetStates_1106b944);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11010fb0 FUN_11010fb0

undefined4 __thiscall FUN_11010fb0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110603e0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    ExceptionList = &local_10;
    uVar1 = (**(code **)(**(int **)((int)this + 0xc) + 0x78))(param_1);
    ExceptionList = local_10;
    return uVar1;
  }
  return 0;
}


// ==== 11011014 Catch@11011014

void Catch_11011014(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11011028 Catch@11011028

void Catch_11011028(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeList__AcceptFlags_1106b978);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11011070 FUN_11011070

void FUN_11011070(void)

{
  return;
}


// ==== 11011080 FUN_11011080

void FUN_11011080(void)

{
  return;
}


// ==== 11011090 FUN_11011090

void FUN_11011090(void)

{
  return;
}


// ==== 110110a0 FUN_110110a0

void __thiscall FUN_110110a0(void *this,undefined4 param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110603f0;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((param_2 == 0xd) && (*(int *)((int)this + 0xc) != 0)) {
    ExceptionList = &local_10;
    (**(code **)(*(int *)((int)this + -4) + 0x58))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 110110f8 Catch@110110f8

void Catch_110110f8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101110c Catch@1101110c

void Catch_1101110c(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__SnoopChar_1106b9b0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11011150 FUN_11011150

void __fastcall FUN_11011150(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060400;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x90))();
  ExceptionList = local_10;
  return;
}


// ==== 11011196 Catch@11011196

void Catch_11011196(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110111aa Catch@110111aa

void Catch_110111aa(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__GetParentObject_1106b9e4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110111f0 FUN_110111f0

int __fastcall FUN_110111f0(int *param_1,int *param_2)

{
  FString *this;
  FString *this_00;
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  FString aFStack_20 [8];
  undefined1 local_18 [4];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11060422;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = (FString *)(**(code **)(*param_1 + 0x80))(local_18);
  puStack_8 = (undefined1 *)0x0;
  this_00 = (FString *)(**(code **)(*param_2 + 0x80))(&stack0xffffffd8);
  pvStack_c._0_1_ = 1;
  puVar1 = FString::operator*(this);
  puVar2 = FString::operator*(this_00);
  iVar3 = appStricmp(puVar2,puVar1);
  pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
  FString::~FString((FString *)&stack0xffffffd4);
  pvStack_c = (void *)0xffffffff;
  FString::~FString(aFStack_20);
  ExceptionList = pvStack_14;
  return iVar3;
}


// ==== 110112c0 FUN_110112c0

void __cdecl FUN_110112c0(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 & 3;
  for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}


// ==== 110112f0 FUN_110112f0

undefined8 __fastcall FUN_110112f0(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060440;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FName::GetIndex((FName *)(param_1 + 0x70));
  ExceptionList = local_10;
  return CONCAT44((iVar1 >> 0x1f) + 1,iVar1);
}


// ==== 11011339 Catch@11011339

void Catch_11011339(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101134d Catch@1101134d

void Catch_1101134d(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__GetId_1106ba24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11011390 FUN_11011390

FString * __thiscall FUN_11011390(void *this,FString *param_1)

{
  ushort *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1106046a;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  puVar1 = FName::operator*((FName *)((int)this + 0x70));
  FString::FString(param_1,puVar1);
  ExceptionList = local_10;
  return param_1;
}


// ==== 110113ed Catch@110113ed

void Catch_110113ed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 11011401 Catch@11011401

void Catch_11011401(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__GetCaption_1106ba58);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11011450 FUN_11011450

int __thiscall FUN_11011450(void *this,undefined4 param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060480;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(**(int **)((int)this + 0xc) + 100))(param_1);
  ExceptionList = local_10;
  return iVar1 + *(int *)((int)this + 0x40);
}


// ==== 1101149e Catch@1101149e

void Catch_1101149e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110114b2 Catch@110114b2

void Catch_110114b2(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__GetBase_1106ba98);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110114f0 FUN_110114f0

void __thiscall FUN_110114f0(void *this,undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060490;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x70))(this,param_1);
  (**(code **)(*(int *)this + 0xa0))();
  (**(code **)(*(int *)this + 0x28))();
  ExceptionList = local_10;
  return;
}


// ==== 11011557 Catch@11011557

void Catch_11011557(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101156b Catch@1101156b

void Catch_1101156b(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__SetValue_1106bad0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110115b0 FUN_110115b0

void __cdecl FUN_110115b0(undefined4 param_1,undefined4 param_2)

{
  (**(code **)**(undefined4 **)GMalloc_exref)(param_1,param_2);
  return;
}


// ==== 110115d0 FUN_110115d0

undefined4 FUN_110115d0(void)

{
  return 0x10;
}


// ==== 1101160e Catch@1101160e

void Catch_1101160e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11011622 Catch@11011622

void Catch_11011622(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__GetHeight_1106bb0c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11011660 FUN_11011660

void __fastcall FUN_11011660(FTreeItem *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110604b0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*(int *)param_1 + 0x98))();
  FTreeItem::OnItemDoubleClick(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 110116b3 Catch@110116b3

void Catch_110116b3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110116c7 Catch@110116c7

void Catch_110116c7(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__OnItemDoubleClick_1106bb48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11011740 FUN_11011740

void __fastcall FUN_11011740(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110604c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0xa0))();
  ExceptionList = local_10;
  return;
}


// ==== 1101178a Catch@1101178a

void Catch_1101178a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101179e Catch@1101179e

void Catch_1101179e(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__ComboSelectionEnd_1106bb98);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110117e0 FUN_110117e0

void __fastcall FUN_110117e0(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  FString *this;
  ushort *puVar4;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_110604d9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  param_1[0x16] = 1;
  puVar2 = &stack0xffffffcc;
  if (((int *)param_1[0x14] != (int *)0x0) && (puVar2 = &stack0xffffffcc, param_1[0x12] != 0)) {
    iVar1 = *(int *)param_1[0x14];
    uVar3 = (**(code **)(iVar1 + 0xfc))();
    this = (FString *)(**(code **)(iVar1 + 0xec))(local_28,uVar3);
    local_8._0_1_ = 1;
    iVar1 = *(int *)param_1[0x12];
    puVar4 = FString::operator*(this);
    (**(code **)(iVar1 + 0x2c))(puVar4);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
    WEdit::SetModify((WEdit *)param_1[0x12],1);
    puVar2 = local_14;
  }
  local_14 = puVar2;
  (**(code **)(*param_1 + 0x9c))();
  (**(code **)(*param_1 + 0xa0))();
  (**(code **)(*param_1 + 0x28))();
  ExceptionList = local_10;
  return;
}


// ==== 110118a1 Catch@110118a1

void Catch_110118a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110118b5 Catch@110118b5

void Catch_110118b5(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__ComboSelectionEnd_1106bbf8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11011910 FUN_11011910

void __fastcall FUN_11011910(int *param_1)

{
  int *piVar1;
  FArray *this;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110604f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  this = (FArray *)(**(code **)(*param_1 + 0x68))(param_1[3],1);
  if (this != (FArray *)0x0) {
    iVar2 = UProperty::GetSize((UProperty *)param_1[0xf]);
    FArray::Insert(this,param_1[0x11],1,iVar2);
    iVar3 = UProperty::GetSize((UProperty *)param_1[0xf]);
    iVar2 = param_1[0x11];
    uVar4 = UProperty::GetSize((UProperty *)param_1[0xf]);
    pvVar5 = FArray::GetData(this);
    thunk_FUN_110112c0((undefined4 *)((int)pvVar5 + iVar3 * iVar2),uVar4);
    piVar1 = (int *)param_1[3];
    (**(code **)(*piVar1 + 0x50))();
    (**(code **)(*piVar1 + 0x54))();
    (**(code **)(*piVar1 + 0x6c))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 110119c9 Catch@110119c9

void Catch_110119c9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110119dd Catch@110119dd

void Catch_110119dd(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__OnArrayInsert_1106bc4c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11011a40 FUN_11011a40

void __fastcall FUN_11011a40(int *param_1)

{
  int *piVar1;
  UProperty *this;
  int iVar2;
  FArray *this_00;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060500;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  this_00 = (FArray *)(**(code **)(*param_1 + 0x68))(param_1[3],1);
  if (this_00 != (FArray *)0x0) {
    piVar1 = (int *)param_1[3];
    this = (UProperty *)param_1[0xf];
    iVar2 = param_1[0x11];
    (**(code **)(*piVar1 + 0x50))();
    iVar3 = UProperty::GetSize(this);
    FArray::Remove(this_00,iVar2,1,iVar3);
    (**(code **)(*piVar1 + 0x54))();
    (**(code **)(*piVar1 + 0x6c))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 11011ad3 Catch@11011ad3

void Catch_11011ad3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 11011ae7 Catch@11011ae7

void Catch_11011ae7(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__OnArrayDelete_1106bc94);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11011b40 FUN_11011b40

void __fastcall FUN_11011b40(int *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060510;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = param_1[2];
  ExceptionList = &local_10;
  if (*(int *)(iVar1 + 0x18) != 0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(iVar1 + 0x18) + 0xc))(iVar1,u_USECOLOR_1106bd30);
  }
  (**(code **)(*param_1 + 0x50))();
  (**(code **)(*param_1 + 0x28))();
  ExceptionList = local_10;
  return;
}


// ==== 11011bad Catch@11011bad

void Catch_11011bad(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11011bc1 Catch@11011bc1

void Catch_11011bc1(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__OnPickColorButton_1106bce0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11011c10 FUN_11011c10

void __fastcall FUN_11011c10(int *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060520;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = param_1[2];
  ExceptionList = &local_10;
  if (*(int *)(iVar1 + 0x18) != 0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(iVar1 + 0x18) + 0xc))(iVar1,u_FINDACTOR_1106bd8c);
  }
  (**(code **)(*param_1 + 0x50))();
  (**(code **)(*param_1 + 0x28))();
  ExceptionList = local_10;
  return;
}


// ==== 11011c7d Catch@11011c7d

void Catch_11011c7d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11011c91 Catch@11011c91

void Catch_11011c91(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__OnFindButton_1106bd48);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11011ce0 FUN_11011ce0

void __fastcall FUN_11011ce0(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060530;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x8c))(u_None_1106bdec);
  (**(code **)(*param_1 + 0x28))();
  if (param_1[0x17] != 0) {
    (**(code **)(*param_1 + 0x50))();
    (**(code **)(*param_1 + 0x54))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 11011d52 Catch@11011d52

void Catch_11011d52(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11011d66 Catch@11011d66

void Catch_11011d66(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__OnClearButton_1106bda4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11011db0 FUN_11011db0

void __fastcall FUN_11011db0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060540;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((int *)param_1[0x14] != (int *)0x0) {
    ExceptionList = &local_10;
    iVar1 = (**(code **)(*(int *)param_1[0x14] + 0xfc))();
    if (-1 < iVar1) {
      iVar1 = *(int *)param_1[0x14];
      iVar2 = (**(code **)(iVar1 + 0xfc))();
      iVar3 = (**(code **)(*(int *)param_1[0x14] + 0xf0))();
      (**(code **)(iVar1 + 0xf8))((iVar2 + 1) % iVar3);
      param_1[0x16] = 1;
    }
  }
  (**(code **)(*param_1 + 0x9c))();
  (**(code **)(*param_1 + 0xa0))();
  (**(code **)(*param_1 + 0x28))();
  ExceptionList = local_10;
  return;
}


// ==== 11011e5f Catch@11011e5f

void Catch_11011e5f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11011e73 Catch@11011e73

void Catch_11011e73(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__Advance_1106bdf8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11011ed0 FUN_11011ed0

void __fastcall FUN_11011ed0(int *param_1)

{
  int iVar1;
  FString *pFVar2;
  ushort *puVar3;
  undefined4 uVar4;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_11060562;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  if ((WEdit *)param_1[0x12] == (WEdit *)0x0) {
    if ((int *)param_1[0x14] != (int *)0x0) {
      if (param_1[0x16] != 0) {
        iVar1 = *(int *)param_1[0x14];
        ExceptionList = &local_10;
        uVar4 = (**(code **)(iVar1 + 0xfc))();
        pFVar2 = (FString *)(**(code **)(iVar1 + 0xec))(local_28,uVar4);
        local_8._0_1_ = 2;
        iVar1 = *param_1;
        puVar3 = FString::operator*(pFVar2);
        (**(code **)(iVar1 + 0x8c))(puVar3);
        local_8 = (uint)local_8._1_3_ << 8;
        FString::~FString(local_28);
      }
      param_1[0x16] = 0;
    }
  }
  else {
    ExceptionList = &local_10;
    local_14 = &stack0xffffffcc;
    iVar1 = WEdit::GetModify((WEdit *)param_1[0x12]);
    if (iVar1 != 0) {
      pFVar2 = (FString *)(**(code **)(*(int *)param_1[0x12] + 0x28))(local_28);
      local_8._0_1_ = 1;
      iVar1 = *param_1;
      puVar3 = FString::operator*(pFVar2);
      (**(code **)(iVar1 + 0x8c))(puVar3);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_28);
      if (param_1[0x17] != 0) {
        (**(code **)(*param_1 + 0x50))();
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 11011fb5 Catch@11011fb5

void Catch_11011fb5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11011fc9 Catch@11011fc9

void Catch_11011fc9(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__SendToControl_1106be30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11012030 FUN_11012030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_11012030(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float *pfVar10;
  char cVar11;
  char local_20;
  
  pfVar10 = param_1;
  fVar2 = 0.0;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  if (param_4 <= param_3) {
    param_1 = (float *)param_4;
  }
  else {
    param_1 = (float *)param_3;
  }
  if ((float)param_1 <= param_2) {
    if (param_4 <= param_3) {
      param_1 = (float *)param_4;
    }
    else {
      param_1 = (float *)param_3;
    }
  }
  else {
    param_1 = (float *)param_2;
  }
  fVar1 = ROUND((float)param_1);
  local_20 = (char)(int)fVar1;
  cVar11 = local_20;
  if (param_3 <= param_4) {
    param_1 = (float *)param_4;
  }
  else {
    param_1 = (float *)param_3;
  }
  if (param_2 <= (float)param_1) {
    if (param_3 <= param_4) {
      param_1 = (float *)param_4;
    }
    else {
      param_1 = (float *)param_3;
    }
  }
  else {
    param_1 = (float *)param_2;
  }
  local_20 = (char)(int)ROUND((float)param_1);
  fVar3 = (float)((int)ROUND((float)param_1) & 0xff);
  fVar4 = (float)((int)fVar1 & 0xff);
  fVar1 = fVar3 - fVar4;
  fVar4 = fVar4 + fVar3;
  fVar7 = (float)_DAT_1106bf08;
  fVar8 = fVar4 / fVar7;
  pfVar10[2] = fVar8;
  if (local_20 == cVar11) {
    pfVar10[1] = 0.0;
  }
  else {
    fVar6 = (fVar3 - param_2) / fVar1;
    fVar5 = (fVar3 - param_3) / fVar1;
    fVar2 = (fVar3 - param_4) / fVar1;
    if (_DAT_1106bf04 < fVar8) {
      fVar4 = fVar7 - fVar4;
    }
    pfVar10[1] = fVar1 / fVar4;
    dVar9 = _DAT_1106bee8;
    if (param_2 == fVar3) {
      *pfVar10 = ((fVar2 + (float)_DAT_1106bef8) - fVar5) * (float)_DAT_1106bee8;
    }
    if (param_3 == fVar3) {
      *pfVar10 = ((fVar6 + (float)_DAT_1106bed8) - fVar2) * (float)dVar9;
    }
    if (param_4 == fVar3) {
      *pfVar10 = ((fVar5 + (float)_DAT_1106bec8) - fVar6) * (float)dVar9;
    }
    if (*pfVar10 <= _DAT_1106bec4) goto LAB_11012241;
    fVar2 = *pfVar10 - (float)_DAT_1106beb8;
  }
  *pfVar10 = fVar2;
LAB_11012241:
  fVar2 = (float)_DAT_1106bea8;
  *pfVar10 = (*pfVar10 / (float)_DAT_1106beb8) * fVar2;
  pfVar10[1] = pfVar10[1] * fVar2;
  pfVar10[2] = fVar2 * fVar8;
  return pfVar10;
}


// ==== 11012279 Catch@11012279

void Catch_11012279(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_1107a670);
}


// ==== 1101228d Catch@1101228d

void Catch_1101228d(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FHeaderItem__ToHSL_1106be78);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11012350 FUN_11012350

void __fastcall FUN_11012350(int *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060590;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = param_1[2];
  ExceptionList = &local_10;
  if (*(int *)(iVar1 + 0x18) != 0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(iVar1 + 0x18) + 0xc))(iVar1,u_USECOLOR_1106bd30);
  }
  (**(code **)(*param_1 + 0x28))();
  ExceptionList = local_10;
  return;
}


// ==== 110123b4 Catch@110123b4

void Catch_110123b4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110123c8 Catch@110123c8

void Catch_110123c8(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FHeaderItem__OnPickColorButton_1106bf18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11012410 FUN_11012410

undefined4 FUN_11012410(void)

{
  return 0x14;
}


// ==== 11012420 FUN_11012420

undefined8 __fastcall FUN_11012420(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110605a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FName::GetIndex((FName *)(param_1 + 0x3c));
  ExceptionList = local_10;
  return CONCAT44((iVar1 >> 0x1f) + 2,iVar1);
}


// ==== 11012469 Catch@11012469

void Catch_11012469(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101247d Catch@1101247d

void Catch_1101247d(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FCategoryItem__GetId_1106bf64);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110124c0 FUN_110124c0

FString * __thiscall FUN_110124c0(void *this,FString *param_1)

{
  ushort *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110605ca;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  puVar1 = FName::operator*((FName *)((int)this + 0x3c));
  FString::FString(param_1,puVar1);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1101251d Catch@1101251d

void Catch_1101251d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 11012531 Catch@11012531

void Catch_11012531(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FCategoryItem__GetText_1106bf98);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11012580 FUN_11012580

void __fastcall FUN_11012580(int param_1)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110605e0;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = **(int **)(param_1 + 0x40);
  ExceptionList = &local_10;
  puVar2 = FString::operator*((FString *)(param_1 + 0x48));
  uVar3 = (**(code **)(iVar1 + 0x100))(puVar2);
  (**(code **)(**(int **)(param_1 + 0x40) + 0xf8))(((int)uVar3 < 0) - 1 & uVar3);
  ExceptionList = local_10;
  return;
}


// ==== 110125f6 Catch@110125f6

void Catch_110125f6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101260a Catch@1101260a

void Catch_1101260a(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FNewObjectItem__ComboSelectionEn_1106bfd0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11012650 FUN_11012650

void __fastcall FUN_11012650(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  FString *pFVar3;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_110605f9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  iVar1 = *(int *)param_1[0x10];
  ExceptionList = &local_10;
  uVar2 = (**(code **)(*(int *)param_1[0x10] + 0xfc))();
  pFVar3 = (FString *)(**(code **)(iVar1 + 0xec))(local_28,uVar2);
  local_8._0_1_ = 1;
  FString::operator=((FString *)(param_1 + 0x12),pFVar3);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  FString::operator=((FString *)&DAT_1109c32c,(FString *)(param_1 + 0x12));
  (**(code **)(*param_1 + 0x28))();
  ExceptionList = local_10;
  return;
}


// ==== 110126e5 Catch@110126e5

void Catch_110126e5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110126f9 Catch@110126f9

void Catch_110126f9(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FNewObjectItem__ComboSelectionEn_1106c030);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11012750 FUN_11012750

FString * FUN_11012750(FString *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1106062a;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FString::FString(param_1,(ushort *)&DAT_11068ff8);
  ExceptionList = local_10;
  return param_1;
}


// ==== 110127a8 Catch@110127a8

void Catch_110127a8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 110127bc Catch@110127bc

void Catch_110127bc(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FNewObjectItem__GetCaption_1106c088);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11012800 FUN_11012800

undefined8 __fastcall FUN_11012800(int param_1)

{
  return CONCAT44((param_1 >> 0x1f) + 4,param_1);
}


// ==== 11012842 Catch@11012842

void Catch_11012842(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11012856 Catch@11012856

void Catch_11012856(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FNewObjectItem__GetId_1106c0c8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11012890 FUN_11012890

void __thiscall FUN_11012890(void *this,FArchive *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060650;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::Serialize(this,param_1);
  piVar1 = (int *)(**(code **)(*(int *)this + 0xe8))();
  (**(code **)(*piVar1 + 0x1c))(param_1);
  ExceptionList = local_10;
  return;
}


// ==== 110128f3 Catch@110128f3

void Catch_110128f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11012907 Catch@11012907

void Catch_11012907(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WProperties__Serialize_1106c0fc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11012950 FUN_11012950

undefined4 __fastcall FUN_11012950(WWindow *param_1)

{
  BOOL BVar1;
  int iVar2;
  FTreeItem *pFVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060660;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  ExceptionList = &local_10;
  BVar1 = IsWindow(*(HWND *)(param_1 + 0x48));
  if (BVar1 != 0) {
    iVar2 = WListBox::GetCount((WListBox *)(param_1 + 0x44));
    if (iVar2 != 0) {
      puVar5 = &local_24;
      WWindow::GetCursorPos(param_1);
      iVar2 = WListBox::ItemFromPoint((WListBox *)(param_1 + 0x44),local_24,local_20,puVar5);
      if (0 < iVar2) {
        pFVar3 = WPropertiesBase::GetListItem((WPropertiesBase *)param_1,iVar2);
        uVar4 = (**(code **)(*(int *)pFVar3 + 0x20))();
        ExceptionList = local_10;
        return uVar4;
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 110129e9 Catch@110129e9

void Catch_110129e9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110129fd Catch@110129fd

void Catch_110129fd(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WProperties__OnSetCursor_1106c134);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11012a50 FUN_11012a50

void __thiscall FUN_11012a50(void *this,HWND__ *param_1)

{
  int *piVar1;
  FString *this_00;
  ushort *puVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  HMENU__ *pHVar8;
  HINSTANCE__ *pHVar9;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_11060679;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  if (param_1 == (HWND__ *)0x0) {
    if (*(int *)((int)this + 0x14) == 0) {
      param_1 = (HWND__ *)0x0;
    }
    else {
      param_1 = *(HWND__ **)(*(int *)((int)this + 0x14) + 4);
    }
  }
  ExceptionList = &local_10;
  piVar1 = (int *)(**(code **)(*(int *)this + 0xe8))();
  this_00 = (FString *)(**(code **)(*piVar1 + 0x80))(local_28);
  local_8._0_1_ = 1;
  pHVar8 = (HMENU__ *)0x0;
  iVar7 = 0x200;
  iVar6 = 0x160;
  iVar5 = -0x80000000;
  iVar4 = -0x80000000;
  uVar3 = 0xce0000;
  pHVar9 = DAT_1109c35c;
  puVar2 = FString::operator*(this_00);
  WWindow::PerformCreateWindowEx
            (this,0x80,puVar2,uVar3,iVar4,iVar5,iVar6,iVar7,param_1,pHVar8,pHVar9);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  WListBox::OpenWindow((WListBox *)((int)this + 0x44),1,1,0,1,0,0);
  ExceptionList = local_10;
  return;
}


// ==== 11012b22 Catch@11012b22

void Catch_11012b22(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11012b36 Catch@11012b36

void Catch_11012b36(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WProperties__OpenWindow_1106c170);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11012bc0 FUN_11012bc0

void __fastcall FUN_11012bc0(int param_1)

{
  if (*(int *)(param_1 + 0xd0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x11012bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xd0) + 0x5c))();
    return;
  }
  return;
}


// ==== 11012be0 FUN_11012be0

void __fastcall FUN_11012be0(int *param_1)

{
  (**(code **)(*param_1 + 0xf4))(1);
  return;
}


// ==== 11012bf0 FUN_11012bf0

void __thiscall FUN_11012bf0(void *this,undefined4 param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060690;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)((int)this + 0x94) != 0) {
    ExceptionList = &local_10;
    (*(code *)**(undefined4 **)(*(int *)((int)this + 0x94) + 4))(param_1,param_2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 11012c52 Catch@11012c52

void Catch_11012c52(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11012c66 Catch@11012c66

void Catch_11012c66(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WProperties__SnoopChar_1106c1ac);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11012cb0 FUN_11012cb0

undefined4 __fastcall FUN_11012cb0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xf4);
}


// ==== 11012cef Catch@11012cef

void Catch_11012cef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11012d03 Catch@11012d03

void Catch_11012d03(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WProperties__GetDividerWidth_1106c1e4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11012d40 FUN_11012d40

void __thiscall FUN_11012d40(void *this,undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110606b0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)((int)this + 0xd0) != 0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)((int)this + 0xd0) + 0x8c))(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 11012d9f Catch@11012d9f

void Catch_11012d9f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11012db3 Catch@11012db3

void Catch_11012db3(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WProperties__SetValue_1106c22c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11012e00 FUN_11012e00

void __thiscall FUN_11012e00(void *this,int param_1)

{
  int iVar1;
  FTreeItem *pFVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110606c0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int **)((int)this + 0xd0) != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)((int)this + 0xd0) + 0x30))(0);
  }
  *(undefined4 *)((int)this + 0xd0) = 0;
  if (param_1 != 0) {
    iVar1 = WListBox::GetCount((WListBox *)((int)this + 0x44));
    if (0 < iVar1) {
      iVar1 = WListBox::GetCurrent((WListBox *)((int)this + 0x44));
      pFVar2 = WPropertiesBase::GetListItem(this,iVar1);
      *(FTreeItem **)((int)this + 0xd0) = pFVar2;
    }
  }
  if (*(int **)((int)this + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xd0) + 0x2c))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 11012e9b Catch@11012e9b

void Catch_11012e9b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11012eaf Catch@11012eaf

void Catch_11012eaf(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WProperties__SetItemFocus_1106c260);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11012f00 FUN_11012f00

void __fastcall FUN_11012f00(WPropertiesBase *param_1)

{
  int iVar1;
  FTreeItem *pFVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = WListBox::GetCount((WListBox *)(param_1 + 0x44));
  if (0 < iVar1) {
    do {
      pFVar2 = WPropertiesBase::GetListItem(param_1,iVar3);
      if ((*(int *)(pFVar2 + 0x10) != 0) && (*(int *)(pFVar2 + 0x14) == 0)) {
        (**(code **)(*(int *)pFVar2 + 0x54))();
      }
      iVar3 = iVar3 + 1;
      iVar1 = WListBox::GetCount((WListBox *)(param_1 + 0x44));
    } while (iVar3 < iVar1);
  }
  return;
}


// ==== 11012f60 FUN_11012f60

bool __thiscall FUN_11012f60(void *this,uint param_1)

{
  return (*(uint *)((int)this + 0x48) & param_1) == *(uint *)((int)this + 0x48);
}


// ==== 11012fac Catch@11012fac

void Catch_11012fac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11012fc0 Catch@11012fc0

void Catch_11012fc0(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItemBase__AcceptFlags_1106c2a0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11013000 FUN_11013000

FString * __thiscall FUN_11013000(void *this,FString *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110606fa;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FString::FString(param_1,(FString *)((int)this + 0x3c));
  ExceptionList = local_10;
  return param_1;
}


// ==== 11013057 Catch@11013057

void Catch_11013057(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1101306b Catch@1101306b

void Catch_1101306b(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItemBase__GetCaption_1106c2ec);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110130b0 FUN_110130b0

undefined8 __fastcall FUN_110130b0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x4c);
  return CONCAT44(((int)uVar1 >> 0x1f) + (uint)(0xfffffffb < uVar1),uVar1 + 4);
}


// ==== 110130f3 Catch@110130f3

void Catch_110130f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11013107 Catch@11013107

void Catch_11013107(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItemBase__GetId_1106c334);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11013150 FUN_11013150

undefined4 FUN_11013150(undefined4 param_1)

{
  return param_1;
}


// ==== 11013160 FUN_11013160

FString * FUN_11013160(FString *param_1,FString *param_2)

{
  int iVar1;
  FString *pFVar2;
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1106074c;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_18 = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  FString::FString(param_1);
  local_18 = 1;
  iVar1 = FString::Len(param_2);
  if (iVar1 == 0) {
    FString::operator=(param_1,(ushort *)&DAT_11068ff8);
  }
  else {
    do {
      pFVar2 = (FString *)FString::Left(param_2,(int)local_2c);
      local_8._0_1_ = 2;
      FString::operator=(param_1,pFVar2);
      local_8._0_1_ = 1;
      FString::~FString(local_2c);
      pFVar2 = (FString *)FString::Mid(param_2,(int)local_38,1);
      local_8._0_1_ = 3;
      FString::operator=(param_2,pFVar2);
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_38);
      iVar1 = FString::operator==(param_1,(ushort *)&DAT_1106c3a8);
    } while (iVar1 != 0);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 1101323a Catch@1101323a

void Catch_1101323a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1101324e Catch@1101324e

void Catch_1101324e(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FObjectsItem__GrabChar_1106c370);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110132b0 FUN_110132b0

void __cdecl FUN_110132b0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 110132d0 FUN_110132d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_110132d0(void)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  float local_20;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_11060782;
  local_c = ExceptionList;
  iVar3 = 0;
  local_4 = 0;
  local_20 = 0.0;
  ExceptionList = &local_c;
  iVar1 = FString::Len((FString *)&stack0x00000004);
  if (0 < iVar1) {
    do {
      FString::Mid((FString *)&stack0x00000004,(int)local_18,iVar3);
      local_4 = CONCAT31(local_4._1_3_,1);
      iVar1 = FString::operator>=(local_18,(ushort *)&DAT_1106c3c0);
      if ((iVar1 == 0) ||
         (iVar1 = FString::operator<=(local_18,(ushort *)&DAT_1106c3bc), iVar1 == 0)) {
        iVar1 = FString::operator!=(local_18,(ushort *)&DAT_1106c3a8);
        if (iVar1 != 0) {
          local_4 = local_4 & 0xffffff00;
          FString::~FString(local_18);
          break;
        }
      }
      else {
        puVar2 = FString::operator*(local_18);
        iVar1 = appAtoi(puVar2);
        local_20 = (float)iVar1 + local_20 * (float)_DAT_1106c3b0;
      }
      local_4 = local_4 & 0xffffff00;
      FString::~FString(local_18);
      iVar3 = iVar3 + 1;
      iVar1 = FString::Len((FString *)&stack0x00000004);
    } while (iVar3 < iVar1);
  }
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return (float10)local_20;
}


// ==== 11013440 FUN_11013440

FString * __thiscall FUN_11013440(void *this,FString *param_1)

{
  UObject *this_00;
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110607ba;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  iVar1 = FString::Len((FString *)((int)this + 0x3c));
  if (iVar1 == 0) {
    this_00 = *(UObject **)((int)this + 0x4c);
    if (this_00 == (UObject *)0x0) {
      puVar2 = LocalizeGeneral(s_PropNone_1106c41c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      FString::FString(param_1,puVar2);
    }
    else {
      iVar1 = *(int *)((int)this + 0x5c);
      if (iVar1 == 1) {
        puVar2 = UObject::GetName(this_00);
        puVar3 = LocalizeGeneral(s_PropSingle_1106c40c,(ushort *)u_Window_1106949c,(ushort *)0x0);
        FString::Printf((ushort *)param_1,puVar3,puVar2);
      }
      else {
        puVar2 = UObject::GetName(this_00);
        puVar3 = LocalizeGeneral(s_PropMulti_1106c400,(ushort *)u_Window_1106949c,(ushort *)0x0);
        FString::Printf((ushort *)param_1,puVar3,puVar2,iVar1);
      }
    }
  }
  else {
    FString::FString(param_1,(FString *)((int)this + 0x3c));
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 11013531 Catch@11013531

void Catch_11013531(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 11013545 Catch@11013545

void Catch_11013545(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FObjectsItem__GetCaption_1106c3c4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110135b0 FUN_110135b0

int __fastcall FUN_110135b0(int param_1)

{
  return param_1 + 0xfc;
}


// ==== 110135ef Catch@110135ef

void Catch_110135ef(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11013603 Catch@11013603

void Catch_11013603(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WObjectProperties__GetRoot_1106c428);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11013640 FUN_11013640

void __thiscall FUN_11013640(void *this,int param_1)

{
  WWindow::Show(this,param_1);
  if (*(int *)((int)this + 0x2c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x1101365b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    BringWindowToTop(*(HWND *)((int)this + 4));
    return;
  }
  return;
}


// ==== 11013670 FUN_11013670

undefined4 FUN_11013670(undefined4 param_1)

{
  return param_1;
}


// ==== 11013680 FUN_11013680

void __thiscall FUN_11013680(void *this,int *param_1)

{
  int iVar1;
  uchar *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110607e0;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *param_1;
  ExceptionList = &local_10;
  puVar2 = TArray<unsigned_char>::operator()
                     ((TArray<unsigned_char> *)(*(int *)((int)this + 0x4c) + 0x4f4),0);
  (**(code **)(iVar1 + 0x60))(puVar2);
  ExceptionList = local_10;
  return;
}


// ==== 110136d9 Catch@110136d9

void Catch_110136d9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110136ed Catch@110136ed

void Catch_110136ed(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FObjectsItem__GetReadAddress_1106c468);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11013730 FUN_11013730

void __thiscall FUN_11013730(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110607f0;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = **(int **)(param_1 + 0x3c);
  ExceptionList = &local_10;
  uVar2 = (**(code **)(*(int *)this + 0x68))(param_1,0,1);
  (**(code **)(iVar1 + 0x9c))(param_2,uVar2);
  UObject::SetFlags(*(UObject **)((int)this + 0x4c),0x20);
  ExceptionList = local_10;
  return;
}


// ==== 110137a3 Catch@110137a3

void Catch_110137a3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110137b7 Catch@110137b7

void Catch_110137b7(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FObjectsItem__SetProperty_1106c4b0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11013800 FUN_11013800

int __fastcall FUN_11013800(int param_1)

{
  return param_1 + 0xfc;
}


// ==== 1101383f Catch@1101383f

void Catch_1101383f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11013853 Catch@11013853

void Catch_11013853(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WClassProperties__GetRoot_1106c4f0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11013890 FUN_11013890

undefined4 FUN_11013890(undefined4 param_1)

{
  return param_1;
}


// ==== 110138a0 FUN_110138a0

void __thiscall FUN_110138a0(void *this,int *param_1)

{
  int iVar1;
  uchar *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060810;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *param_1;
  ExceptionList = &local_10;
  puVar2 = TArray<unsigned_char>::operator()
                     ((TArray<unsigned_char> *)(*(int *)((int)this + 0x60) + 0x4f4),0);
  (**(code **)(iVar1 + 0x60))(puVar2);
  ExceptionList = local_10;
  return;
}


// ==== 110138f9 Catch@110138f9

void Catch_110138f9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101390d Catch@1101390d

void Catch_1101390d(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FObjectsItem__GetReadAddress_1106c530);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11013950 FUN_11013950

void __cdecl FUN_11013950(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 11013970 FUN_11013970

void __fastcall FUN_11013970(int param_1)

{
  ushort *puVar1;
  UClass *pUVar2;
  FString *pFVar3;
  UObject *pUVar4;
  ushort *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined4 uVar8;
  UPackageMap *pUVar9;
  undefined4 uVar10;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_11060829;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  if ((*(int *)(param_1 + 0x60) == 0) && (*(int *)(param_1 + 100) == 0)) {
    pUVar9 = (UPackageMap *)0x0;
    uVar7 = 2;
    puVar5 = (ushort *)0x0;
    ExceptionList = &local_10;
    puVar1 = FString::operator*((FString *)(param_1 + 0x50));
    pUVar4 = (UObject *)0x0;
    pUVar2 = UObject::StaticClass();
    pUVar2 = UObject::StaticLoadClass(pUVar2,pUVar4,puVar1,puVar5,uVar7,pUVar9);
    *(UClass **)(param_1 + 0x60) = pUVar2;
    if (pUVar2 == (UClass *)0x0) {
      *(undefined4 *)(param_1 + 100) = 1;
      uVar6 = *(undefined4 *)(param_1 + 0x50);
      uVar8 = *(undefined4 *)(param_1 + 0x54);
      uVar10 = *(undefined4 *)(param_1 + 0x58);
      puVar1 = LocalizeError(s_FailedConfigLoad_1106c5c8,(ushort *)u_Window_1106949c,(ushort *)0x0);
      pFVar3 = (FString *)FString::Printf((ushort *)local_28,puVar1,uVar6,uVar8,uVar10);
      local_8._0_1_ = 1;
      FString::operator=((FString *)(param_1 + 0x3c),pFVar3);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_28);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 11013a4b Catch@11013a4b

void Catch_11013a4b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11013a5f Catch@11013a5f

void Catch_11013a5f(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FObjectConfigItem__LazyLoadClass_1106c578);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11013ac0 FUN_11013ac0

undefined8 __fastcall FUN_11013ac0(int param_1)

{
  return CONCAT44((param_1 >> 0x1f) + 3,param_1);
}


// ==== 11013b02 Catch@11013b02

void Catch_11013b02(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11013b16 Catch@11013b16

void Catch_11013b16(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FConfigItem__GetId_1106c5dc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11013b50 FUN_11013b50

FString * __thiscall FUN_11013b50(void *this,FString *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1106086a;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FString::FString(param_1,(FString *)((int)this + 0x3c));
  ExceptionList = local_10;
  return param_1;
}


// ==== 11013ba7 Catch@11013ba7

void Catch_11013ba7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 11013bbb Catch@11013bbb

void Catch_11013bbb(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FConfigItem__GetText_1106c60c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11013c00 FUN_11013c00

int __fastcall FUN_11013c00(int param_1)

{
  return param_1 + 0xfc;
}


// ==== 11013c3f Catch@11013c3f

void Catch_11013c3f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11013c53 Catch@11013c53

void Catch_11013c53(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WConfigProperties__GetRoot_1106c640);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11013c90 FUN_11013c90

FArray * __fastcall FUN_11013c90(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11060899;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 11013cf0 FUN_11013cf0

FArray * __fastcall FUN_11013cf0(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_110608b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 11013d70 FUN_11013d70

int __thiscall FUN_11013d70(void *this,int param_1)

{
  if (*(int *)((int)this + 4) <= param_1) {
    appFailAssert(s_c<ArrayNum_1106b1ac,s_d__work_interlude_2007_05_23_war_1106ac34,0x198);
  }
  return *(int *)this + -4 + (*(int *)((int)this + 4) - param_1) * 4;
}


// ==== 11013e90 FUN_11013e90

void __fastcall FUN_11013e90(int *param_1)

{
  UClass *pUVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    while( true ) {
      iVar2 = param_1[1];
      while (iVar2 != 0) {
        pUVar1 = UState::StaticClass();
        iVar2 = UObject::IsA((UObject *)param_1[1],pUVar1);
        if (iVar2 != 0) {
          return;
        }
        iVar2 = *(int *)(param_1[1] + 0x38);
        param_1[1] = iVar2;
      }
      iVar2 = (**(code **)(*(int *)*param_1 + 0x7c))();
      *param_1 = iVar2;
      if (iVar2 == 0) break;
      param_1[1] = *(int *)(iVar2 + 0x48);
    }
  }
  return;
}


// ==== 11013ef0 FUN_11013ef0

FPreferencesInfo * __thiscall FUN_11013ef0(void *this,byte param_1)

{
  FPreferencesInfo::~FPreferencesInfo(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11013f20 FUN_11013f20

FRegistryObjectInfo * __thiscall FUN_11013f20(void *this,byte param_1)

{
  FRegistryObjectInfo::~FRegistryObjectInfo(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11013fa0 FUN_11013fa0

UObject * __cdecl FUN_11013fa0(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UClassProperty::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 11013fd0 FUN_11013fd0

UObject * __cdecl FUN_11013fd0(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UFloatProperty::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 11014000 FUN_11014000

UObject * __cdecl FUN_11014000(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UIntProperty::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 11014030 FUN_11014030

UObject * __cdecl FUN_11014030(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UByteProperty::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 11014060 FUN_11014060

UObject * __cdecl FUN_11014060(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  wchar_t *pwVar3;
  ushort *puVar4;
  
  if (param_1 == (UObject *)0x0) {
    pwVar3 = u_NULL_1106c6bc;
  }
  else {
    pUVar1 = UClassProperty::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
    pwVar3 = (wchar_t *)UObject::GetFullName(param_1,(ushort *)0x0);
  }
  pUVar1 = UClassProperty::StaticClass();
  puVar4 = UObject::GetName((UObject *)pUVar1);
  FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref,
                      u_Cast_of__s_to__s_failed_1106c680,pwVar3,puVar4);
  return param_1;
}


// ==== 110140d0 FUN_110140d0

UObject * __cdecl FUN_110140d0(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  wchar_t *pwVar3;
  ushort *puVar4;
  
  if (param_1 == (UObject *)0x0) {
    pwVar3 = u_NULL_1106c6bc;
  }
  else {
    pUVar1 = UArrayProperty::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
    pwVar3 = (wchar_t *)UObject::GetFullName(param_1,(ushort *)0x0);
  }
  pUVar1 = UArrayProperty::StaticClass();
  puVar4 = UObject::GetName((UObject *)pUVar1);
  FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref,
                      u_Cast_of__s_to__s_failed_1106c680,pwVar3,puVar4);
  return param_1;
}


// ==== 11014140 FUN_11014140

UObject * __cdecl FUN_11014140(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  wchar_t *pwVar3;
  ushort *puVar4;
  
  if (param_1 == (UObject *)0x0) {
    pwVar3 = u_NULL_1106c6bc;
  }
  else {
    pUVar1 = UObjectProperty::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
    pwVar3 = (wchar_t *)UObject::GetFullName(param_1,(ushort *)0x0);
  }
  pUVar1 = UObjectProperty::StaticClass();
  puVar4 = UObject::GetName((UObject *)pUVar1);
  FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref,
                      u_Cast_of__s_to__s_failed_1106c680,pwVar3,puVar4);
  return param_1;
}


// ==== 110141b0 FUN_110141b0

UObject * __cdecl FUN_110141b0(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UBoolProperty::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 11014310 CRect::CRect

/* Library Function - Single Match
    public: __thiscall CRect::CRect(int,int,int,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall CRect::CRect(CRect *this,int param_1,int param_2,int param_3,int param_4)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  *(int *)(this + 0xc) = param_4;
  return;
}


// ==== 11014350 FUN_11014350

void __thiscall FUN_11014350(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 8);
  iVar2 = *(int *)this;
  iVar3 = *(int *)((int)this + 4);
  iVar4 = *param_2;
  iVar5 = param_2[1];
  param_1[3] = *(int *)((int)this + 0xc) + iVar5;
  *param_1 = iVar2 + iVar4;
  param_1[1] = iVar3 + iVar5;
  param_1[2] = iVar1 + iVar4;
  return;
}


// ==== 110143a0 FUN_110143a0

void __thiscall FUN_110143a0(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 8);
  iVar2 = *(int *)this;
  iVar3 = *(int *)((int)this + 4);
  iVar4 = *param_2;
  iVar5 = param_2[1];
  param_1[3] = *(int *)((int)this + 0xc) - iVar5;
  *param_1 = iVar2 - iVar4;
  param_1[1] = iVar3 - iVar5;
  param_1[2] = iVar1 - iVar4;
  return;
}


// ==== 110143f0 FUN_110143f0

void __thiscall FUN_110143f0(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)((int)this + 8);
  iVar2 = param_2[2];
  iVar3 = *(int *)((int)this + 0xc);
  iVar4 = param_2[3];
  iVar5 = *(int *)((int)this + 4);
  iVar6 = param_2[1];
  *param_1 = *(int *)this + *param_2;
  param_1[3] = iVar3 + iVar4;
  param_1[1] = iVar5 + iVar6;
  param_1[2] = iVar1 + iVar2;
  return;
}


// ==== 11014430 FUN_11014430

void __thiscall FUN_11014430(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 0xc);
  iVar3 = *(int *)((int)this + 4);
  *param_1 = *(int *)this + param_2;
  param_1[3] = iVar2 - param_3;
  param_1[1] = iVar3 + param_3;
  param_1[2] = iVar1 - param_2;
  return;
}


// ==== 11014470 FUN_11014470

void FUN_11014470(void)

{
  return;
}


// ==== 11014480 FUN_11014480

void __fastcall FUN_11014480(undefined4 *param_1)

{
  *param_1 = FControlSnoop::vftable;
  return;
}


// ==== 11014490 FUN_11014490

void FUN_11014490(void)

{
  return;
}


// ==== 110144a0 FUN_110144a0

void FUN_110144a0(void)

{
  return;
}


// ==== 110144b0 FUN_110144b0

void FUN_110144b0(void)

{
  return;
}


// ==== 110144c0 FUN_110144c0

void __thiscall FUN_110144c0(void *this,int param_1)

{
  *(undefined ***)this = FDelegate::vftable;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return;
}


// ==== 110144f0 FUN_110144f0

void __fastcall FUN_110144f0(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_110608d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WButton::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WControl::~WControl((WControl *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11014560 FUN_11014560

void FUN_11014560(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WButton_1106c800);
  return;
}


// ==== 11014580 FUN_11014580

wchar_t * FUN_11014580(void)

{
  return u_Window_1106949c;
}


// ==== 11014590 FUN_11014590

WButton * __thiscall FUN_11014590(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x94,*(int *)((int)this + -4),WButton::~WButton);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WButton *)((int)this + -4));
    }
    return (WButton *)((int)this + -4);
  }
  WButton::~WButton(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11014610 FUN_11014610

void __fastcall FUN_11014610(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_110608f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WCoolButton::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WButton::~WButton((WButton *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11014680 FUN_11014680

void FUN_11014680(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WCoolButton_1106c938);
  return;
}


// ==== 110146a0 FUN_110146a0

wchar_t * FUN_110146a0(void)

{
  return u_Window_1106949c;
}


// ==== 110146b0 FUN_110146b0

WCoolButton * __thiscall FUN_110146b0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x9c,*(int *)((int)this + -4),WCoolButton::~WCoolButton);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WCoolButton *)((int)this + -4));
    }
    return (WCoolButton *)((int)this + -4);
  }
  WCoolButton::~WCoolButton(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11014730 FUN_11014730

void __fastcall FUN_11014730(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11060918;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WComboBox::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WControl::~WControl((WControl *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 110147a0 FUN_110147a0

void FUN_110147a0(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WComboBox_1106ca9c);
  return;
}


// ==== 110147c0 FUN_110147c0

wchar_t * FUN_110147c0(void)

{
  return u_Window_1106949c;
}


// ==== 110147d0 FUN_110147d0

WComboBox * __thiscall FUN_110147d0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0xb8,*(int *)((int)this + -4),WComboBox::~WComboBox);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WComboBox *)((int)this + -4));
    }
    return (WComboBox *)((int)this + -4);
  }
  WComboBox::~WComboBox(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11014850 FUN_11014850

void __fastcall FUN_11014850(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11060938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WEdit::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WControl::~WControl((WControl *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 110148c0 FUN_110148c0

void FUN_110148c0(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WEdit_1106cbdc);
  return;
}


// ==== 110148e0 FUN_110148e0

wchar_t * FUN_110148e0(void)

{
  return u_Window_1106949c;
}


// ==== 110148f0 FUN_110148f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_110148f0(void)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  float local_20;
  FString local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_11060962;
  local_c = ExceptionList;
  iVar3 = 0;
  local_4 = 0;
  local_20 = 0.0;
  ExceptionList = &local_c;
  iVar1 = FString::Len((FString *)&stack0x00000004);
  if (0 < iVar1) {
    do {
      FString::Mid((FString *)&stack0x00000004,(int)local_18,iVar3);
      local_4 = CONCAT31(local_4._1_3_,1);
      iVar1 = FString::operator>=(local_18,(ushort *)&DAT_1106c3c0);
      if ((iVar1 == 0) ||
         (iVar1 = FString::operator<=(local_18,(ushort *)&DAT_1106c3bc), iVar1 == 0)) {
        iVar1 = FString::operator!=(local_18,(ushort *)&DAT_1106c3a8);
        if (iVar1 != 0) {
          local_4 = local_4 & 0xffffff00;
          FString::~FString(local_18);
          break;
        }
      }
      else {
        puVar2 = FString::operator*(local_18);
        iVar1 = appAtoi(puVar2);
        local_20 = (float)iVar1 + local_20 * (float)_DAT_1106c3b0;
      }
      local_4 = local_4 & 0xffffff00;
      FString::~FString(local_18);
      iVar3 = iVar3 + 1;
      iVar1 = FString::Len((FString *)&stack0x00000004);
    } while (iVar3 < iVar1);
  }
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return (float10)local_20;
}


// ==== 11014a60 FUN_11014a60

undefined4 FUN_11014a60(void)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  undefined4 *in_stack_00000010;
  wchar_t *pwVar4;
  FString local_44 [12];
  FString local_38 [20];
  int *local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1106099b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  iVar3 = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_18 = 0;
  ExceptionList = &local_10;
  while( true ) {
    local_20 = iVar3;
    iVar1 = FString::Len((FString *)&stack0x00000004);
    if (iVar1 <= iVar3) break;
    pFVar2 = (FString *)FString::Mid((FString *)&stack0x00000004,(int)local_38,iVar3);
    local_8._0_1_ = 2;
    iVar1 = FString::operator==(pFVar2,(ushort *)&DAT_1106cc74);
    local_8._0_1_ = 1;
    FString::~FString(local_38);
    if (iVar1 == 0) {
      pFVar2 = (FString *)FString::Mid((FString *)&stack0x00000004,(int)local_44,iVar3);
      local_8._0_1_ = 3;
      iVar1 = FString::operator==(pFVar2,(ushort *)&DAT_1106cc70);
      local_8._0_1_ = 1;
      FString::~FString(local_44);
      if (iVar1 != 0) {
        local_18 = local_18 + -1;
      }
      iVar3 = iVar3 + 1;
    }
    else {
      local_18 = local_18 + 1;
      iVar3 = iVar3 + 1;
    }
  }
  if (local_18 == 0) {
    iVar3 = (**(code **)(*local_24 + 0xec))(&stack0x00000004,&local_1c,0);
    if (iVar3 != 0) goto LAB_11014b57;
    pwVar4 = u_Error_in_expression__1106cc08;
  }
  else {
    pwVar4 = u_Mismatched_brackets__1106cc3c;
  }
  appMsgf(0,(ushort *)pwVar4);
  local_1c = 0;
LAB_11014b57:
  *in_stack_00000010 = local_1c;
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return 1;
}


// ==== 11014b85 Catch@11014b85

void Catch_11014b85(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_1107a670);
}


// ==== 11014b99 Catch@11014b99

void Catch_11014b99(void)

{
  appUnwindf((ushort *)&DAT_11068a50,
             `public:_virtual_int___thiscall_WEdit::Eval(FString,float*)'::__l3::__FUNC_NAME__);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11014c10 FUN_11014c10

FString * FUN_11014c10(FString *param_1,FString *param_2)

{
  int iVar1;
  FString *pFVar2;
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_110609dc;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_18 = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  FString::FString(param_1);
  local_18 = 1;
  iVar1 = FString::Len(param_2);
  if (iVar1 == 0) {
    FString::operator=(param_1,(ushort *)&DAT_11068ff8);
  }
  else {
    do {
      pFVar2 = (FString *)FString::Left(param_2,(int)local_2c);
      local_8._0_1_ = 2;
      FString::operator=(param_1,pFVar2);
      local_8._0_1_ = 1;
      FString::~FString(local_2c);
      pFVar2 = (FString *)FString::Mid(param_2,(int)local_38,1);
      local_8._0_1_ = 3;
      FString::operator=(param_2,pFVar2);
      local_8 = CONCAT31(local_8._1_3_,1);
      FString::~FString(local_38);
      iVar1 = FString::operator==(param_1,(ushort *)&DAT_1106c3a8);
    } while (iVar1 != 0);
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 11014cea Catch@11014cea

void Catch_11014cea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 11014cfe Catch@11014cfe

void Catch_11014cfe(void)

{
  appUnwindf((ushort *)&DAT_11068a50,
             `public:_class_FString___thiscall_WEdit::GrabChar(FString*)'::__l3::__FUNC_NAME__);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11014d60 FUN_11014d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_11014d60(void *this,FString *param_1,float *param_2,int param_3)

{
  FString *pFVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  double dVar9;
  FString *pFStack_90;
  wchar_t *pwVar10;
  FString local_70 [12];
  FString local_64 [12];
  FString local_58 [12];
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [20];
  undefined1 *local_20;
  float local_1c;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pFVar4 = param_1;
  puStack_c = &LAB_11060abd;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff84;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::FString(local_34);
  local_8._0_1_ = 1;
  local_1c = 0.0;
  local_18 = 0.0;
  pFVar1 = (FString *)WEdit::GrabChar(this,local_40);
  local_8._0_1_ = 2;
  FString::operator=(local_34,pFVar1);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  iVar2 = FString::operator>=(local_34,(ushort *)&DAT_1106c3c0);
  if (iVar2 != 0) {
    uVar5 = 0x1106c3bc11014ded;
    iVar2 = FString::operator<=(local_34,(ushort *)&DAT_1106c3bc);
    if (iVar2 != 0) goto LAB_11014e07;
  }
  uVar5 = 0x1106ce3411014dff;
  iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106ce34);
  if (iVar2 != 0) {
LAB_11014e07:
    local_18 = 0.0;
    while( true ) {
      pwVar10 = (wchar_t *)((ulonglong)uVar5 >> 0x20);
      iVar2 = FString::operator>=(local_34,(ushort *)&DAT_1106c3c0);
      if ((iVar2 == 0) ||
         (iVar2 = FString::operator<=(local_34,(ushort *)&DAT_1106c3bc), iVar2 == 0)) break;
      FString::FString((FString *)&pFStack_90,local_34);
      local_8._0_1_ = 1;
      fVar8 = WEdit::Val(this);
      local_18 = local_18 * (float)_DAT_1106c3b0 + fVar8;
      pFVar1 = param_1;
      pFVar3 = (FString *)WEdit::GrabChar(this,local_40);
      local_8._0_1_ = 4;
      FString::operator=(local_34,pFVar3);
      local_8._0_1_ = 1;
      uVar5 = CONCAT44(pFVar1,0x11014e8c);
      FString::~FString(local_40);
    }
    iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106ce34);
    if (iVar2 == 0) goto LAB_110150d1;
    param_1 = _DAT_1106ce30;
    uVar5 = CONCAT44(pwVar10,pFVar4);
    pFStack_90 = (FString *)0x11014eb9;
    pFVar1 = (FString *)WEdit::GrabChar(this,local_40);
    local_8._0_1_ = 5;
    do {
      pwVar10 = (wchar_t *)((ulonglong)uVar5 >> 0x20);
      FString::operator=(local_34,pFVar1);
      local_8._0_1_ = 1;
      FString::~FString(local_40);
      iVar2 = FString::operator>=(local_34,(ushort *)&DAT_1106c3c0);
      if (iVar2 == 0) goto LAB_110150d1;
      iVar2 = FString::operator<=(local_34,(ushort *)&DAT_1106c3bc);
      if (iVar2 == 0) goto LAB_110150d1;
      local_20 = (undefined1 *)&pFStack_90;
      FString::FString((FString *)&pFStack_90,local_34);
      local_8._0_1_ = 1;
      local_20 = (undefined1 *)WEdit::Val(this);
      local_18 = local_18 + (float)param_1 * (float)local_20;
      param_1 = (FString *)((float)param_1 / (float)_DAT_1106c3b0);
      uVar5 = CONCAT44(pFVar4,local_40);
      pFVar1 = (FString *)WEdit::GrabChar(this,local_40);
      local_8._0_1_ = 7;
    } while( true );
  }
  iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106cc74);
  pwVar10 = (wchar_t *)param_1;
  if (iVar2 == 0) {
    iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106ce2c);
    if (iVar2 == 0) {
      iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106ce28);
      if (iVar2 == 0) {
        iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106ce24);
        if (iVar2 == 0) {
          pwVar10 = u_No_value_recognized_1106ccc4;
        }
        else {
          pFStack_90 = (FString *)0x11015050;
          iVar2 = (**(code **)(*(int *)this + 0xec))();
          if (iVar2 == 0) goto LAB_11015076;
          if (0.0 <= local_18) {
            dVar9 = appSqrt((double)local_18);
            local_18 = (float)dVar9;
            pFVar1 = (FString *)WEdit::GrabChar(this,local_40);
            local_8._0_1_ = 0xb;
            goto LAB_110150bb;
          }
          pwVar10 = u_Can_t_take_square_root_of_negati_1106cdc0;
        }
LAB_1101506b:
        appMsgf(0,(ushort *)pwVar10);
      }
      else {
        pFStack_90 = (FString *)0x1101500b;
        iVar2 = (**(code **)(*(int *)this + 0xec))();
        if (iVar2 != 0) {
          pFVar1 = (FString *)WEdit::GrabChar(this,local_40);
          local_8._0_1_ = 10;
          goto LAB_110150bb;
        }
      }
    }
    else {
      pFStack_90 = (FString *)0x11014fbe;
      iVar2 = (**(code **)(*(int *)this + 0xec))();
      if (iVar2 != 0) {
        local_18 = -local_18;
        pFVar1 = (FString *)WEdit::GrabChar(this,local_40);
        local_8._0_1_ = 9;
        goto LAB_110150bb;
      }
    }
  }
  else {
    pFStack_90 = (FString *)0x11014f79;
    iVar2 = (**(code **)(*(int *)this + 0xec))();
    if (iVar2 != 0) {
      pFVar1 = (FString *)WEdit::GrabChar(this,local_40);
      local_8._0_1_ = 8;
LAB_110150bb:
      while( true ) {
        FString::operator=(local_34,pFVar1);
        pFVar1 = local_40;
        while( true ) {
          local_8._0_1_ = 1;
          FString::~FString(pFVar1);
LAB_110150d1:
          iVar2 = FString::operator==(local_34,(ushort *)&DAT_11068ff8);
          if (iVar2 != 0) goto LAB_1101546a;
          iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106cc70);
          if (iVar2 != 0) {
            iVar2 = FString::operator_int(pFVar4);
            FString::operator=(pFVar4,(ushort *)(&DAT_1106cc70 + iVar2 * 2));
            *param_2 = local_18;
            local_8 = (uint)local_8._1_3_ << 8;
            FString::~FString(local_34);
            ExceptionList = local_10;
            return 1;
          }
          iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106ce28);
          if (iVar2 != 0) break;
          iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106ce2c);
          if (iVar2 == 0) {
            iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106cdbc);
            if (iVar2 == 0) {
              iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106cd6c);
              if (iVar2 == 0) {
                iVar2 = FString::operator==(local_34,(ushort *)&DAT_1106cd28);
                if (iVar2 == 0) {
                  pFStack_90 = (FString *)0x11015467;
                  appMsgf(0,(ushort *)u_Unrecognized_Operator_1106ccf4);
                  goto LAB_1101546a;
                }
                if (3 < param_3) {
                  *param_2 = local_18;
                  pFStack_90 = (FString *)0x110153fd;
                  pFVar1 = (FString *)FString::operator+(local_34,local_64);
                  local_8._0_1_ = 0x14;
                  FString::operator=(pFVar4,pFVar1);
                  pFVar4 = local_64;
                  goto LAB_11015180;
                }
                pFStack_90 = pFVar4;
                iVar2 = (**(code **)(*(int *)this + 0xec))();
                if (iVar2 == 0) goto LAB_1101546a;
                local_18 = local_1c * local_18;
                pFStack_90 = (FString *)0x11015441;
                pFVar1 = (FString *)WEdit::GrabChar(this,local_70);
                local_8._0_1_ = 0x15;
                pFStack_90 = (FString *)0x1101544f;
                FString::operator=(local_34,pFVar1);
                pFVar1 = local_70;
              }
              else {
                if (2 < param_3) {
                  *param_2 = local_18;
                  pFStack_90 = (FString *)0x1101533d;
                  pFVar1 = (FString *)FString::operator+(local_34,local_58);
                  local_8._0_1_ = 0x12;
                  FString::operator=(pFVar4,pFVar1);
                  pFVar4 = local_58;
                  goto LAB_11015180;
                }
                pFStack_90 = pFVar4;
                uVar5 = (**(code **)(*(int *)this + 0xec))();
                if ((int)uVar5 == 0) goto LAB_1101546a;
                if (local_1c == 0.0) goto LAB_1101506b;
                uVar6 = FUN_1103b180(extraout_ECX,(int)((ulonglong)uVar5 >> 0x20));
                uVar7 = FUN_1103b180(extraout_ECX_00,(int)(uVar6 >> 0x20));
                local_18 = (float)(int)((longlong)
                                        ((ulonglong)(uint)((int)uVar7 >> 0x1f) << 0x20 |
                                        uVar7 & 0xffffffff) % (longlong)(int)uVar6);
                pFStack_90 = (FString *)0x110153b1;
                pFVar1 = (FString *)WEdit::GrabChar(this,local_64);
                local_8._0_1_ = 0x13;
                pFStack_90 = (FString *)0x110153bf;
                FString::operator=(local_34,pFVar1);
                pFVar1 = local_64;
              }
            }
            else {
              if (2 < param_3) {
                *param_2 = local_18;
                pFStack_90 = (FString *)0x11015293;
                pFVar1 = (FString *)FString::operator+(local_34,local_4c);
                local_8._0_1_ = 0x10;
                FString::operator=(pFVar4,pFVar1);
                pFVar4 = local_4c;
                goto LAB_11015180;
              }
              pFStack_90 = pFVar4;
              iVar2 = (**(code **)(*(int *)this + 0xec))();
              if (iVar2 == 0) goto LAB_1101546a;
              if (local_1c == 0.0) goto LAB_1101506b;
              local_18 = local_18 / local_1c;
              pFStack_90 = (FString *)0x110152f2;
              pFVar1 = (FString *)WEdit::GrabChar(this,local_58);
              local_8._0_1_ = 0x11;
              pFStack_90 = (FString *)0x11015300;
              FString::operator=(local_34,pFVar1);
              pFVar1 = local_58;
            }
          }
          else {
            if (1 < param_3) {
              *param_2 = local_18;
              pFStack_90 = (FString *)0x1101520f;
              pFVar1 = (FString *)FString::operator+(local_34,local_40);
              local_8._0_1_ = 0xe;
              goto LAB_11015171;
            }
            pFStack_90 = pFVar4;
            iVar2 = (**(code **)(*(int *)this + 0xec))();
            if (iVar2 == 0) goto LAB_1101546a;
            local_18 = local_18 - local_1c;
            pFStack_90 = (FString *)0x11015248;
            pFVar1 = (FString *)WEdit::GrabChar(this,local_4c);
            local_8._0_1_ = 0xf;
            pFStack_90 = (FString *)0x11015256;
            FString::operator=(local_34,pFVar1);
            pFVar1 = local_4c;
          }
        }
        if (1 < param_3) break;
        pFStack_90 = pFVar4;
        iVar2 = (**(code **)(*(int *)this + 0xec))();
        if (iVar2 == 0) {
LAB_1101546a:
          *param_2 = local_18;
LAB_11015186:
          local_8 = (uint)local_8._1_3_ << 8;
          FString::~FString(local_34);
          ExceptionList = local_10;
          return 1;
        }
        local_18 = local_1c + local_18;
        pFStack_90 = (FString *)0x110151d9;
        pFVar1 = (FString *)WEdit::GrabChar(this,local_40);
        local_8._0_1_ = 0xd;
      }
      *param_2 = local_18;
      pFStack_90 = (FString *)0x1101516d;
      pFVar1 = (FString *)FString::operator+(local_34,local_40);
      local_8._0_1_ = 0xc;
LAB_11015171:
      FString::operator=(pFVar4,pFVar1);
      pFVar4 = local_40;
LAB_11015180:
      local_8._0_1_ = 1;
      FString::~FString(pFVar4);
      goto LAB_11015186;
    }
  }
LAB_11015076:
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_34);
  ExceptionList = local_10;
  return 0;
}


// ==== 11015481 Catch@11015481

void Catch_11015481(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_1107a670);
}


// ==== 11015495 Catch@11015495

void Catch_11015495(void)

{
  appUnwindf((ushort *)&DAT_11068a50,
             `public:_virtual_int___thiscall_WEdit::SubEval(FString*,float*,int)'::__l3::
             __FUNC_NAME__);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11015690 FUN_11015690

WEdit * __thiscall FUN_11015690(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x58,*(int *)((int)this + -4),WEdit::~WEdit);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WEdit *)((int)this + -4));
    }
    return (WEdit *)((int)this + -4);
  }
  WEdit::~WEdit(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11015710 FUN_11015710

void __fastcall FUN_11015710(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11060b08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WTrackBar::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WControl::~WControl((WControl *)param_1);
  ExceptionList = local_c;
  return;
}


// ==== 11015780 FUN_11015780

void FUN_11015780(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WTrackBar_1106cf54);
  return;
}


// ==== 110157a0 FUN_110157a0

wchar_t * FUN_110157a0(void)

{
  return u_Window_1106949c;
}


// ==== 110157b0 FUN_110157b0

WTrackBar * __thiscall FUN_110157b0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x5c,*(int *)((int)this + -4),WTrackBar::~WTrackBar);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WTrackBar *)((int)this + -4));
    }
    return (WTrackBar *)((int)this + -4);
  }
  WTrackBar::~WTrackBar(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11015830 FUN_11015830

void __fastcall FUN_11015830(undefined4 *param_1)

{
  param_1[1] = FControlSnoop::vftable;
  *param_1 = FTreeItemBase::vftable_for_FCommandTarget_;
  param_1[1] = FTreeItemBase::vftable_for_FControlSnoop_;
  return;
}


// ==== 11015850 FUN_11015850

void __fastcall FUN_11015850(WWindow *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_11060b28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)param_1 = WDragInterceptor::vftable;
  local_4 = 0;
  WWindow::MaybeDestroy(param_1);
  local_4 = 0xffffffff;
  WWindow::~WWindow(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 110158c0 FUN_110158c0

void FUN_110158c0(ushort *param_1)

{
  thunk_FUN_11006cf0(param_1,u_WDragInterceptor_1106d0c4);
  return;
}


// ==== 110158e0 FUN_110158e0

wchar_t * FUN_110158e0(void)

{
  return u_Window_1106949c;
}


// ==== 110158f0 FUN_110158f0

WDragInterceptor * __thiscall FUN_110158f0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (this,0x78,*(int *)((int)this + -4),WDragInterceptor::~WDragInterceptor);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))((WDragInterceptor *)((int)this + -4));
    }
    return (WDragInterceptor *)((int)this + -4);
  }
  WDragInterceptor::~WDragInterceptor(this);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(this);
  }
  return this;
}


// ==== 11015970 FUN_11015970

void __thiscall FUN_11015970(void *this,UObject *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = UObject::GetName(this);
  puVar2 = UObject::GetName(param_1);
  appStrcmp(puVar2,puVar1);
  return;
}


// ==== 110159a0 FUN_110159a0

FArray * __fastcall FUN_110159a0(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11060b49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 11015a00 FUN_11015a00

FArray * __fastcall FUN_11015a00(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11060b69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 11015a80 FUN_11015a80

FArray * __fastcall FUN_11015a80(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11060b89;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 11015ad0 FUN_11015ad0

FArray * __fastcall FUN_11015ad0(FArray *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_11060ba9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(param_1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 11015cb0 FUN_11015cb0

void __fastcall FUN_11015cb0(int *param_1)

{
  UClass *pUVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    while( true ) {
      iVar2 = param_1[1];
      while (iVar2 != 0) {
        pUVar1 = UObject::GetClass((UObject *)param_1[1]);
        if ((*(uint *)(pUVar1 + 0x4a4) & 0x8000) != 0) {
          return;
        }
        iVar2 = *(int *)(param_1[1] + 0x38);
        param_1[1] = iVar2;
      }
      iVar2 = (**(code **)(*(int *)*param_1 + 0x7c))();
      *param_1 = iVar2;
      if (iVar2 == 0) break;
      param_1[1] = *(int *)(iVar2 + 0x48);
    }
  }
  return;
}


// ==== 11015e40 FUN_11015e40

UObject * __cdecl FUN_11015e40(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UObjectProperty::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 11015e70 FUN_11015e70

UObject * __cdecl FUN_11015e70(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UStructProperty::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 11015ea0 FUN_11015ea0

UObject * __cdecl FUN_11015ea0(UObject *param_1)

{
  UClass *pUVar1;
  int iVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UArrayProperty::StaticClass();
    iVar2 = UObject::IsA(param_1,pUVar1);
    if (iVar2 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 11015ed0 FUN_11015ed0

void __cdecl FUN_11015ed0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_13c;
  int local_138;
  undefined1 local_134 [256];
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_20;
  undefined4 *local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060bc0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffeb8;
  local_8 = 0;
  if (1 < param_2) {
    local_13c = param_1;
    local_138 = param_1 + -4 + param_2 * 4;
    ExceptionList = &local_10;
    _memset(local_134,0,0xf8);
    for (local_18 = &local_13c; &local_13c <= local_18; local_18 = local_18 + -2) {
      local_20 = (undefined4 *)*local_18;
      local_1c = (undefined4 *)local_18[1];
      puVar6 = (undefined4 *)*local_18;
LAB_11015f52:
      iVar3 = ((int)local_1c - (int)puVar6 >> 2) + 1;
      if (8 < iVar3) {
        uVar1 = puVar6[iVar3 / 2];
        puVar6[iVar3 / 2] = *puVar6;
        *puVar6 = uVar1;
        puVar4 = local_1c + 1;
        puVar5 = puVar6;
        local_30 = puVar4;
LAB_11015fc5:
        puVar5 = puVar5 + 1;
        local_34 = puVar5;
        if (puVar5 <= local_1c) goto code_r0x11015fd0;
        goto LAB_11015fe1;
      }
      for (; puVar6 < local_1c; local_1c = local_1c + -1) {
        local_2c = puVar6;
        puVar4 = puVar6;
        puVar5 = puVar6;
        while( true ) {
          puVar5 = puVar5 + 1;
          local_28 = puVar5;
          if (local_1c < puVar5) break;
          iVar3 = FUN_11015970((void *)*puVar4,(UObject *)*puVar5);
          if (0 < iVar3) {
            local_2c = puVar5;
            puVar4 = puVar5;
          }
        }
        uVar1 = *puVar4;
        *puVar4 = *local_1c;
        *local_1c = uVar1;
      }
LAB_1101606a:
    }
  }
  ExceptionList = local_10;
  return;
code_r0x11015fd0:
  iVar3 = FUN_11015970((void *)*puVar6,(UObject *)*puVar5);
  if (iVar3 < 1) goto LAB_11015fc5;
LAB_11015fe1:
  do {
    puVar7 = puVar4;
    puVar4 = puVar7 + -1;
    local_30 = puVar4;
    if (puVar4 <= puVar6) break;
    iVar3 = FUN_11015970((void *)*puVar6,(UObject *)*puVar4);
  } while (-1 < iVar3);
  puVar2 = local_1c;
  if (puVar5 <= puVar4) {
    uVar1 = *puVar5;
    *puVar5 = *puVar4;
    *puVar4 = uVar1;
    goto LAB_11015fc5;
  }
  uVar1 = *puVar6;
  *puVar6 = *puVar4;
  *puVar4 = uVar1;
  if ((int)((int)puVar4 + (-4 - (int)puVar6) & 0xfffffffcU) <
      (int)((int)local_1c - (int)puVar5 & 0xfffffffcU)) {
    if (puVar5 < local_1c) {
      *local_18 = (int)puVar5;
      local_18[1] = (int)local_1c;
      local_18 = local_18 + 2;
    }
    if (puVar4 <= puVar6 + 1) goto LAB_1101606a;
    local_1c = puVar7 + -2;
  }
  else {
    if (puVar6 + 1 < puVar4) {
      *local_18 = (int)puVar6;
      local_18[1] = (int)(puVar7 + -2);
      local_18 = local_18 + 2;
    }
    if (puVar2 <= puVar5) goto LAB_1101606a;
    local_20 = puVar5;
    puVar6 = puVar5;
  }
  goto LAB_11015f52;
}


// ==== 11016098 Catch@11016098

void Catch_11016098(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_1107a670);
}


// ==== 110160ac Catch@110160ac

void Catch_110160ac(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_Sort_1106d0ec);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11016150 FUN_11016150

int __cdecl FUN_11016150(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 11016170 FUN_11016170

void __thiscall FUN_11016170(void *this,undefined4 param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060bd0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar1 = 0; iVar1 < *(int *)((int)this + 0x34); iVar1 = iVar1 + 1) {
    (**(code **)(**(int **)(*(int *)((int)this + 0x30) + iVar1 * 4) + 0x1c))(param_1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 110161d4 Catch@110161d4

void Catch_110161d4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 110161e8 Catch@110161e8

void Catch_110161e8(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__Serialize_1106d0f8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11016230 FUN_11016230

void __fastcall FUN_11016230(int *param_1)

{
  RECT *lpRect;
  int iVar1;
  undefined1 local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060be0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  lpRect = (RECT *)(**(code **)(*param_1 + 0x24))(local_2c);
  InvalidateRect(*(HWND *)(param_1[2] + 0x48),lpRect,0);
  UpdateWindow(*(HWND *)(param_1[2] + 0x48));
  iVar1 = (**(code **)(*(int *)param_1[2] + 0xe8))();
  if (param_1[3] != iVar1) {
    (**(code **)(*(int *)param_1[3] + 0x28))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 110162b8 Catch@110162b8

void Catch_110162b8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110162cc Catch@110162cc

void Catch_110162cc(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__Redraw_1106d12c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11016320 FUN_11016320

void __thiscall FUN_11016320(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060bf0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*(int *)this + 0x40))(0);
  iVar2 = (**(code **)(*(int *)this + 0x40))(0);
  *param_1 = iVar2 + 4;
  param_1[1] = 4;
  param_1[2] = iVar1 + 0xd;
  param_1[3] = 0xd;
  ExceptionList = local_10;
  return;
}


// ==== 11016391 Catch@11016391

void Catch_11016391(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110163a5 Catch@110163a5

void Catch_110163a5(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__GetExpanderRect_1106d158);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110163f0 FUN_110163f0

void __thiscall
FUN_110163f0(void *this,HDC param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  RECT *pRVar6;
  undefined4 uVar7;
  void *this_00;
  int *piVar8;
  HBRUSH hbr;
  int extraout_EDX;
  int local_8c [8];
  undefined1 *local_6c;
  void *local_68;
  undefined1 *puStack_64;
  undefined4 local_60;
  int local_5c;
  uint local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  uint local_48;
  RECT local_44;
  int local_34;
  uint local_30;
  FTreeItem *local_28;
  RECT local_24;
  int local_14;
  uint local_10;
  int *local_c;
  int local_8;
  
  puStack_64 = &LAB_11060c00;
  local_68 = ExceptionList;
  local_6c = &stack0xffffff44;
  local_60 = 0;
  ExceptionList = &local_68;
  local_28 = this;
  SetBkMode(param_1,1);
  SetTextColor(param_1,0);
  if (*(int *)(*(int *)((int)this + 8) + 0x40) != 0) {
    local_c = this;
    local_8 = FTreeItem::GetIndent(this);
    piVar8 = this;
    for (; iVar5 = local_8, -1 < local_8; local_8 = local_8 + -1) {
      iVar2 = (**(code **)(*piVar8 + 8))();
      local_10 = (uint)(iVar2 == 0x14);
      if (piVar8[3] == 0) {
        appFailAssert(s_Prev_>Parent_1106d1c0,s___Properties_cpp_1106b558,0xd2);
      }
      puVar3 = (undefined4 *)thunk_FUN_11013d70((void *)(piVar8[3] + 0x30),0);
      if ((((int *)*puVar3 == piVar8) &&
          (piVar4 = (int *)thunk_FUN_11013d70((void *)(piVar8[3] + 0x30),0),
          (FTreeItem *)*piVar4 != this)) ||
         ((iVar5 == 0 && ((FTreeItem *)**(int **)(piVar8[3] + 0x30) == this)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      thunk_FUN_11013d70((void *)(piVar8[3] + 0x30),0);
      iVar5 = FTreeItem::GetUnitIndentPixels(this);
      iVar5 = iVar5 * local_8 + param_2;
      if (local_10 == 0) {
        if (bVar1) {
          if (extraout_EDX == 0) {
            iVar2 = 8;
          }
          else {
            iVar2 = (**(code **)(*(int *)this + 8))();
            this = local_28;
          }
LAB_1101652a:
          local_10 = param_3;
          local_14 = iVar5 + 9;
          local_54 = 8;
          local_50 = (-(uint)bVar1 & 0xfffffff8) + 8;
          local_30 = param_3;
          local_34 = iVar5 + 8;
          pRVar6 = (RECT *)CRect::CRect((CRect *)&local_24,local_34,param_3 + local_50,local_14,
                                        param_3 + iVar2);
          FillRect(param_1,pRVar6,hBrushDark);
        }
        else if (extraout_EDX != 0) {
          iVar2 = (**(code **)(*(int *)this + 8))();
          this = local_28;
          goto LAB_1101652a;
        }
        iVar2 = FTreeItem::GetIndent(this);
        if (local_8 == iVar2) {
          local_48 = param_3;
          local_4c = iVar5 + 0x14;
          local_58 = param_3;
          local_5c = iVar5 + 8;
          pRVar6 = (RECT *)CRect::CRect((CRect *)&local_44,local_5c,param_3 + 8,local_4c,param_3 + 9
                                       );
          FillRect(param_1,pRVar6,hBrushDark);
        }
      }
      piVar8 = (int *)local_c[3];
      local_c = piVar8;
    }
  }
  if (*(int *)((int)this + 0x10) != 0) {
    uVar7 = (**(code **)(*(int *)this + 0x24))(&local_24);
    piVar8 = &param_2;
    pRVar6 = &local_44;
    this_00 = (void *)(**(code **)(*(int *)this + 0x44))(pRVar6,piVar8,uVar7);
    thunk_FUN_11014350(this_00,&pRVar6->left,piVar8);
    if (param_6 == 0) {
      FillRect(param_1,(RECT *)&param_2,hBrushDark);
      local_8c[4] = 1;
      local_8c[5] = 1;
      local_8c[6] = 0xffffffff;
      local_8c[7] = 0xffffffff;
      piVar8 = (int *)thunk_FUN_110143f0(&param_2,&local_24.left,local_8c + 4);
      param_2 = *piVar8;
      param_3 = piVar8[1];
      param_4 = piVar8[2];
      param_5 = piVar8[3];
      hbr = (HBRUSH)(**(code **)(*(int *)this + 0x14))(0);
      FillRect(param_1,(RECT *)&param_2,hbr);
      local_8c[0] = 1;
      local_8c[1] = 1;
      local_8c[2] = 0xffffffff;
      local_8c[3] = 0xffffffff;
      piVar8 = (int *)thunk_FUN_110143f0(&param_2,&local_24.left,local_8c);
      param_2 = *piVar8;
      param_3 = piVar8[1];
      param_4 = piVar8[2];
      param_5 = piVar8[3];
    }
    iVar5 = (param_4 - param_2) / 2 + param_2;
    local_44.top = (int)(param_5 - param_3) / 2 + param_3;
    local_44.right = param_4;
    local_44.bottom = local_44.top + 1;
    local_44.left = param_2;
    FillRect(param_1,&local_44,hBrushDark);
    if (*(int *)((int)this + 0x14) == 0) {
      local_24.top = param_3;
      local_24.right = iVar5 + 1;
      local_24.bottom = param_5;
      local_24.left = iVar5;
      FillRect(param_1,&local_24,hBrushDark);
    }
  }
  ExceptionList = local_68;
  return;
}


// ==== 1101675e Catch@1101675e

void Catch_1101675e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x30) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x30,&DAT_1107a670);
}


// ==== 11016772 Catch@11016772

void Catch_11016772(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__Draw_1106d198);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11016880 FUN_11016880

void __fastcall FUN_11016880(int *param_1)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060c10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (param_1[4] != 0) {
    ExceptionList = &local_10;
    WWindow::SetRedraw((WWindow *)(param_1[2] + 0x44),0);
    if (param_1[5] == 0) {
      pcVar1 = *(code **)(*param_1 + 0x54);
    }
    else {
      pcVar1 = *(code **)(*param_1 + 0x50);
    }
    (*pcVar1)();
    WWindow::SetRedraw((WWindow *)(param_1[2] + 0x44),1);
    UpdateWindow(*(HWND *)(param_1[2] + 0x48));
  }
  (**(code **)(*(int *)param_1[2] + 0xf4))(1);
  ExceptionList = local_10;
  return;
}


// ==== 11016912 Catch@11016912

void Catch_11016912(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11016926 Catch@11016926

void Catch_11016926(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__ToggleExpansion_1106d1d0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11016980 FUN_11016980

void __thiscall FUN_11016980(void *this,undefined4 param_1,WPARAM param_2)

{
  HWND pHVar1;
  ushort uVar2;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060c20;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((param_2 == 0x26) || (ExceptionList = &local_10, param_2 == 0x28)) {
    if (*(int *)GUnicodeOS_exref == 0) {
      ExceptionList = &local_10;
      PostMessageA(*(HWND *)(*(int *)((int)this + 4) + 0x48),0x100,param_2,0);
    }
    else {
      ExceptionList = &local_10;
      PostMessageW(*(HWND *)(*(int *)((int)this + 4) + 0x48),0x100,param_2,0);
    }
  }
  if (param_2 == 9) {
    lParam = 0;
    if (*(int *)GUnicodeOS_exref == 0) {
      pHVar1 = *(HWND *)(*(int *)((int)this + 4) + 0x48);
      uVar2 = GetKeyState(0x10);
      PostMessageA(pHVar1,0x100,(-(uint)((uVar2 & 0x8000) != 0) & 0xfffffffe) + 0x28,lParam);
    }
    else {
      pHVar1 = *(HWND *)(*(int *)((int)this + 4) + 0x48);
      uVar2 = GetKeyState(0x10);
      PostMessageW(pHVar1,0x100,(-(uint)((uVar2 & 0x8000) != 0) & 0xfffffffe) + 0x28,lParam);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 11016a64 Catch@11016a64

void Catch_11016a64(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11016a78 Catch@11016a78

void Catch_11016a78(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FTreeItem__SnoopKeyDown_1106d210);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11016ae0 FUN_11016ae0

void __thiscall FUN_11016ae0(void *this,FArchive *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060c30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FTreeItem::Serialize(this,param_1);
  piVar1 = (int *)thunk_FUN_11013950((int *)param_1,(int)this + 0x3c);
  (**(code **)(*piVar1 + 0x1c))((int)this + 0x70);
  ExceptionList = local_10;
  return;
}


// ==== 11016b47 Catch@11016b47

void Catch_11016b47(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11016b5b Catch@11016b5b

void Catch_11016b5b(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__Serialize_1106d24c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11016ba0 FUN_11016ba0

undefined4 __fastcall FUN_11016ba0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  HCURSOR hCursor;
  int iVar4;
  int *piVar5;
  undefined1 local_3c [16];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060c40;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar1 = (int *)(**(code **)(*param_1 + 0x24))(local_3c);
  piVar5 = &local_2c;
  piVar2 = (int *)WWindow::GetCursorPos((WWindow *)param_1[2]);
  local_20 = piVar2[1];
  iVar4 = *piVar2 - *piVar1;
  local_28 = local_20 - piVar1[1];
  local_2c = iVar4;
  local_24 = iVar4;
  iVar3 = (**(code **)(*(int *)param_1[2] + 0xec))(piVar5);
  iVar4 = iVar4 - iVar3;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if (iVar4 < 3) {
    if (*(int *)GUnicodeOS_exref == 0) {
      hCursor = LoadCursorA(hInstanceWindow,(LPCSTR)0x44f);
    }
    else {
      hCursor = LoadCursorW(hInstanceWindow,(LPCWSTR)0x44f);
    }
    SetCursor(hCursor);
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}


// ==== 11016c71 Catch@11016c71

void Catch_11016c71(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11016c85 Catch@11016c85

void Catch_11016c85(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__OnSetCursor_1106d288);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11016cf0 FUN_11016cf0

void __fastcall FUN_11016cf0(FTreeItem *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack00000004;
  int *piStack00000008;
  undefined1 *puVar5;
  undefined1 local_40 [16];
  undefined1 local_30 [8];
  int local_28;
  int local_24;
  wchar_t *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060c50;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_8 = 0;
  ExceptionList = &local_10;
  piStack00000008 = (int *)(**(code **)(*(int *)param_1 + 0x24))(local_40);
  puVar5 = local_30;
  piVar1 = (int *)WWindow::GetCursorPos(*(WWindow **)(param_1 + 8));
  local_24 = piVar1[1];
  iVar4 = *piVar1 - *piStack00000008;
  iVar3 = local_24 - piStack00000008[1];
  iStack00000004 = iVar4;
  piStack00000008 = (int *)iVar3;
  local_28 = iVar4;
  iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0xec))(puVar5);
  iVar2 = iVar4 - iVar2;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar2 < 3) {
    (**(code **)(**(int **)(param_1 + 8) + 0xfc))();
    local_18 = u_NoRoute_1106b458;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_18,&DAT_1107a670);
  }
  FTreeItem::OnItemLeftMouseDown(param_1,iVar4,iVar3);
  ExceptionList = local_10;
  return;
}


// ==== 11016db1 Catch@11016db1

void Catch_11016db1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 11016dc5 Catch@11016dc5

void Catch_11016dc5(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__OnItemLeftMouseDo_1106d2c8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11016e20 FUN_11016e20

FArray * __thiscall FUN_11016e20(void *this,undefined4 param_1)

{
  UObject *this_00;
  FArray *pFVar1;
  UClass *pUVar2;
  int iVar3;
  
  pFVar1 = (FArray *)(**(code **)(*(int *)this + 0x60))(param_1);
  this_00 = *(UObject **)((int)this + 0x3c);
  if (this_00 != (UObject *)0x0) {
    pUVar2 = UArrayProperty::StaticClass();
    iVar3 = UObject::IsA(this_00,pUVar2);
    if (iVar3 != 0) {
      pFVar1 = FArray::GetData(pFVar1);
      return pFVar1;
    }
  }
  return pFVar1;
}


// ==== 11016e80 FUN_11016e80

void __thiscall FUN_11016e80(void *this,ushort *param_1)

{
  int *piVar1;
  UObject *pUVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  UObject *pUVar6;
  int iVar7;
  ushort *puVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  undefined4 uVar11;
  FString local_4c [12];
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_11060c84;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa8;
  local_8 = 0;
  ExceptionList = &local_10;
  pUVar2 = thunk_FUN_11013fa0(*(UObject **)((int)this + 0x3c));
  if (pUVar2 != (UObject *)0x0) {
    pwVar10 = u_Drivers_1106d3a0;
    puVar3 = FName::operator*((FName *)(*(int *)((int)this + 0x3c) + 0x4c));
    iVar4 = appStricmp(puVar3,(ushort *)pwVar10);
    if (iVar4 == 0) {
      FString::FString(local_28);
      local_8._0_1_ = 1;
      FString::FString(local_40);
      local_8._0_1_ = 2;
      FString::FString(local_34);
      local_8._0_1_ = 3;
      iVar4 = **(int **)GConfig_exref;
      pUVar2 = *(UObject **)((int)this + 0x3c);
      uVar11 = 0;
      pFVar9 = local_28;
      puVar3 = UObject::GetName(pUVar2);
      puVar8 = (ushort *)0x0;
      pUVar6 = (UObject *)0x0;
      pUVar2 = (UObject *)(**(code **)(*(int *)pUVar2 + 0x74))(0,0,puVar3,pFVar9,uVar11);
      puVar3 = UObject::GetPathName(pUVar2,pUVar6,puVar8);
      (**(code **)(iVar4 + 0xc))(puVar3);
      FString::FString(local_4c,(ushort *)&DAT_1106ce34);
      local_8._0_1_ = 4;
      iVar4 = FString::Split(local_28,local_4c,local_40,local_34,0);
      local_8 = CONCAT31(local_8._1_3_,3);
      FString::~FString(local_4c);
      iVar7 = 0;
      if (iVar4 == 0) {
        puVar3 = FString::operator*(local_28);
        puVar3 = Localize(s_Language_1106d368,s_Language_1106d368,(ushort *)u_Core_1106d374,puVar3,
                          iVar7);
      }
      else {
        puVar5 = (ushort *)0x0;
        puVar3 = FString::operator*(local_40);
        pwVar10 = u_ClassCaption_1106d380;
        puVar8 = FString::operator*(local_34);
        puVar3 = Localize(puVar8,(ushort *)pwVar10,puVar3,puVar5,iVar7);
      }
      appStrcpy(param_1,puVar3);
      local_8._0_1_ = 2;
      FString::~FString(local_34);
      local_8._0_1_ = 1;
      FString::~FString(local_40);
      local_8 = (uint)local_8._1_3_ << 8;
      FString::~FString(local_28);
      ExceptionList = local_10;
      return;
    }
  }
  piVar1 = *(int **)((int)this + 0x3c);
  iVar4 = *piVar1;
  iVar7 = (**(code **)(*(int *)this + 0x68))(this,0,1);
  iVar7 = (**(code **)(*(int *)this + 0x68))
                    (this,0,iVar7 - *(int *)(*(int *)((int)this + 0x3c) + 0x54));
  (**(code **)(iVar4 + 0xa0))(0,param_1,iVar7 - piVar1[0x15]);
  ExceptionList = local_10;
  return;
}


// ==== 11017059 Catch@11017059

void Catch_11017059(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101706d Catch@1101706d

void Catch_1101706d(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__GetPropertyText_1106d31c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11017110 FUN_11017110

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall FUN_11017110(void *this,HDC param_1)

{
  uint uVar1;
  HDC hdc;
  HBRUSH pHVar2;
  int iVar3;
  ushort *puVar4;
  COLORREF CVar5;
  LPRECT ptVar6;
  RECT *pRVar7;
  uint *puVar8;
  UObject *pUVar9;
  int iVar10;
  FName *this_00;
  char *pcVar11;
  FString *this_01;
  WCHAR *pWVar12;
  FName *pFVar13;
  UINT UVar14;
  LPDRAWTEXTPARAMS ptVar15;
  WCHAR local_2134 [4100];
  int local_12c [10];
  undefined4 local_104;
  undefined4 local_100;
  int local_fc [32];
  undefined1 *local_7c;
  void *local_78;
  undefined1 *puStack_74;
  undefined4 local_70;
  int local_6c [5];
  int local_58 [5];
  LONG local_44;
  int local_40;
  LONG local_3c;
  int local_38 [4];
  RECT local_28;
  RECT *local_18;
  int local_14;
  LONG local_10;
  int local_c;
  LONG local_8;
  
  hdc = param_1;
  puStack_74 = &LAB_11060ca0;
  local_78 = ExceptionList;
  local_fc[0x1f] = 0x11017138;
  local_7c = &stack0xffffdec0;
  local_70 = 0;
  ExceptionList = &local_78;
  (**(code **)(*(int *)this + 0x24))();
  FillRect(param_1,&local_28,hBrushGrey160);
  local_58[4] = local_28.left;
  local_44 = local_28.top;
  local_40 = local_28.right;
  local_3c = local_28.bottom;
  local_40 = (**(code **)(**(int **)((int)this + 8) + 0xec))();
  local_12c[9] = (**(code **)(*(int *)this + 0x48))();
  local_12c[9] = 1 - local_12c[9];
  local_12c[8] = 0;
  local_104 = 0xffffffff;
  local_100 = 0;
  local_18 = (RECT *)thunk_FUN_110143f0(local_58 + 4,local_38,local_12c + 8);
  iVar3 = *(int *)this;
  (**(code **)(iVar3 + 0x48))();
  pHVar2 = (HBRUSH)(**(code **)(iVar3 + 0x14))();
  FillRect(param_1,local_18,pHVar2);
  iVar3 = (**(code **)(*(int *)this + 0x40))();
  local_58[4] = local_58[4] + iVar3;
  (**(code **)(*(int *)this + 0x4c))();
  SetBkMode(param_1,1);
  if (*(int *)((int)this + 0x44) == -1) {
    puVar4 = FName::operator*((FName *)((int)this + 0x70));
    appStrcpy((ushort *)local_2134,puVar4);
  }
  else {
    appSprintf((ushort *)local_2134,(ushort *)u___i__1106d3f0);
  }
  iVar3 = *(int *)this;
  (**(code **)(iVar3 + 0x48))();
  CVar5 = (**(code **)(iVar3 + 0x18))();
  SetTextColor(param_1,CVar5);
  if (*(int *)GUnicodeOS_exref == 0) {
    iVar3 = winGetSizeANSI((ushort *)local_2134);
    if (iVar3 == 0) {
      param_1 = (HDC)0x0;
    }
    else {
      winGetSizeANSI((ushort *)local_2134);
      local_7c = &stack0xffffde98;
      param_1 = (HDC)&stack0xffffde98;
    }
    local_12c[4] = 0;
    local_12c[5] = 1;
    local_12c[6] = 0;
    local_12c[7] = 0;
    ptVar6 = (LPRECT)thunk_FUN_110143f0(local_58 + 4,local_58,local_12c + 4);
    ptVar15 = (LPDRAWTEXTPARAMS)0x0;
    UVar14 = 0x8024;
    iVar3 = appStrlen((ushort *)local_2134);
    iVar10 = winGetSizeANSI((ushort *)local_2134);
    pcVar11 = winToANSI((char *)param_1,(ushort *)local_2134,iVar10);
    DrawTextExA(hdc,pcVar11,iVar3,ptVar6,UVar14,ptVar15);
  }
  else {
    local_12c[0] = 0;
    local_12c[1] = 1;
    local_12c[2] = 0;
    local_12c[3] = 0;
    ptVar6 = (LPRECT)thunk_FUN_110143f0(local_58 + 4,local_38,local_12c);
    ptVar15 = (LPDRAWTEXTPARAMS)0x0;
    UVar14 = 0x8024;
    iVar3 = appStrlen((ushort *)local_2134);
    DrawTextExW(param_1,local_2134,iVar3,ptVar6,UVar14,ptVar15);
  }
  iVar3 = (**(code **)(*(int *)this + 0x48))();
  if (iVar3 != 0) {
    if (*(int *)GUnicodeOS_exref == 0) {
      iVar3 = winGetSizeANSI((ushort *)local_2134);
      if (iVar3 == 0) {
        param_1 = (HDC)0x0;
      }
      else {
        winGetSizeANSI((ushort *)local_2134);
        local_7c = &stack0xffffde98;
        param_1 = (HDC)&stack0xffffde98;
      }
      local_fc[0xc] = 1;
      local_fc[0xd] = 1;
      local_fc[0xe] = 0;
      local_fc[0xf] = 0;
      ptVar6 = (LPRECT)thunk_FUN_110143f0(local_58 + 4,local_58,local_fc + 0xc);
      ptVar15 = (LPDRAWTEXTPARAMS)0x0;
      UVar14 = 0x8024;
      iVar3 = appStrlen((ushort *)local_2134);
      iVar10 = winGetSizeANSI((ushort *)local_2134);
      pcVar11 = winToANSI((char *)param_1,(ushort *)local_2134,iVar10);
      DrawTextExA(hdc,pcVar11,iVar3,ptVar6,UVar14,ptVar15);
    }
    else {
      local_fc[0x18] = 1;
      local_fc[0x19] = 1;
      local_fc[0x1a] = 0;
      local_fc[0x1b] = 0;
      ptVar6 = (LPRECT)thunk_FUN_110143f0(local_58 + 4,local_38,local_fc + 0x18);
      ptVar15 = (LPDRAWTEXTPARAMS)0x0;
      UVar14 = 0x8024;
      iVar3 = appStrlen((ushort *)local_2134);
      DrawTextExW(hdc,local_2134,iVar3,ptVar6,UVar14,ptVar15);
    }
  }
  local_14 = local_28.left;
  local_10 = local_28.top;
  local_c = local_28.right;
  local_8 = local_28.bottom;
  local_14 = (**(code **)(**(int **)((int)this + 8) + 0xec))();
  local_fc[8] = 0;
  local_fc[9] = 1;
  local_fc[10] = 0;
  local_fc[0xb] = 0;
  pRVar7 = (RECT *)thunk_FUN_110143f0(&local_14,local_38,local_fc + 8);
  pHVar2 = (HBRUSH)(**(code **)(*(int *)this + 0x14))();
  FillRect(hdc,pRVar7,pHVar2);
  local_c = local_c - *(int *)((int)this + 0x20);
  puVar8 = (uint *)(**(code **)(*(int *)this + 0x68))();
  CVar5 = (**(code **)(*(int *)this + 0x18))();
  SetTextColor(hdc,CVar5);
  if (((*(int *)(*(UObject **)((int)this + 0x3c) + 0x40) == 1) || (*(int *)((int)this + 0x44) != -1)
      ) && (pUVar9 = thunk_FUN_11015ea0(*(UObject **)((int)this + 0x3c)), pUVar9 == (UObject *)0x0))
  {
    if (puVar8 == (uint *)0x0) {
      ExceptionList = local_78;
      return;
    }
    pUVar9 = thunk_FUN_11015e70(*(UObject **)((int)this + 0x3c));
    if (pUVar9 != (UObject *)0x0) {
      FName::FName((FName *)&local_18,0x5a);
      pFVar13 = (FName *)&local_18;
      pUVar9 = thunk_FUN_11015e70(*(UObject **)((int)this + 0x3c));
      this_00 = (FName *)UObject::GetFName(*(UObject **)(pUVar9 + 0x78));
      iVar3 = FName::operator==(this_00,pFVar13);
      if (iVar3 != 0) {
        local_fc[0x14] = 4;
        local_fc[0x15] = 4;
        local_fc[0x16] = 0xfffffffc;
        local_fc[0x17] = 0xfffffffc;
        pRVar7 = (RECT *)thunk_FUN_110143f0(&local_14,local_38,local_fc + 0x14);
        FillRect(hdc,pRVar7,hBrushBlack);
        uVar1 = *puVar8;
        pHVar2 = CreateSolidBrush((uVar1 >> 0x10 & 0xff) + (uVar1 & 0xff) * 0x10000 +
                                  (uVar1 & 0xff00));
        local_fc[0x10] = 5;
        local_fc[0x11] = 5;
        local_fc[0x12] = 0xfffffffb;
        local_fc[0x13] = 0xfffffffb;
        pRVar7 = (RECT *)thunk_FUN_110143f0(&local_14,local_38,local_fc + 0x10);
        FillRect(hdc,pRVar7,pHVar2);
        DeleteObject(pHVar2);
        ExceptionList = local_78;
        return;
      }
    }
    local_2134[0] = L'\0';
    FPropertyItem::GetPropertyText(this,(ushort *)local_2134);
    pUVar9 = thunk_FUN_11013fd0(*(UObject **)((int)this + 0x3c));
    if (((pUVar9 == (UObject *)0x0) &&
        (pUVar9 = thunk_FUN_11014000(*(UObject **)((int)this + 0x3c)), pUVar9 == (UObject *)0x0)) &&
       ((pUVar9 = thunk_FUN_11014030(*(UObject **)((int)this + 0x3c)), pUVar9 == (UObject *)0x0 ||
        (pUVar9 = thunk_FUN_11014030(*(UObject **)((int)this + 0x3c)), *(int *)(pUVar9 + 0x78) != 0)
        ))) {
      if (*(int *)GUnicodeOS_exref != 0) {
        local_6c[0] = 4;
        local_6c[1] = 1;
        local_6c[2] = 0;
        local_6c[3] = 0;
        ptVar6 = (LPRECT)thunk_FUN_110143f0(&local_14,local_38,local_6c);
        ptVar15 = (LPDRAWTEXTPARAMS)0x0;
        UVar14 = 0x8024;
        iVar3 = appStrlen((ushort *)local_2134);
        DrawTextExW(hdc,local_2134,iVar3,ptVar6,UVar14,ptVar15);
        ExceptionList = local_78;
        return;
      }
      iVar3 = winGetSizeANSI((ushort *)local_2134);
      if (iVar3 == 0) {
        pcVar11 = (char *)0x0;
      }
      else {
        winGetSizeANSI((ushort *)local_2134);
        local_7c = &stack0xffffde88;
        pcVar11 = &stack0xffffde88;
      }
      local_fc[0x1c] = 4;
      local_fc[0x1d] = 1;
      local_fc[0x1e] = 0;
      local_fc[0x1f] = 0;
      ptVar6 = (LPRECT)thunk_FUN_110143f0(&local_14,local_58,local_fc + 0x1c);
      ptVar15 = (LPDRAWTEXTPARAMS)0x0;
      UVar14 = 0x8024;
      iVar3 = appStrlen((ushort *)local_2134);
      iVar10 = winGetSizeANSI((ushort *)local_2134);
      pWVar12 = local_2134;
    }
    else {
      this_01 = (FString *)((int)this + 0x74);
      iVar3 = FString::Len(this_01);
      if (iVar3 == 0) {
        FString::operator=(this_01,(ushort *)local_2134);
      }
      puVar4 = FString::operator*(this_01);
      appStrcpy((ushort *)local_2134,puVar4);
      if (*(int *)GUnicodeOS_exref != 0) {
        local_58[0] = 4;
        local_58[1] = 1;
        local_58[2] = 0;
        local_58[3] = 0;
        ptVar6 = (LPRECT)thunk_FUN_110143f0(&local_14,local_fc + 0x1c,local_58);
        ptVar15 = (LPDRAWTEXTPARAMS)0x0;
        UVar14 = 0x8024;
        iVar3 = appStrlen((ushort *)local_2134);
        DrawTextExW(hdc,local_2134,iVar3,ptVar6,UVar14,ptVar15);
        ExceptionList = local_78;
        return;
      }
      iVar3 = winGetSizeANSI((ushort *)local_2134);
      if (iVar3 == 0) {
        pcVar11 = (char *)0x0;
      }
      else {
        winGetSizeANSI((ushort *)local_2134);
        local_7c = &stack0xffffde88;
        pcVar11 = &stack0xffffde88;
      }
      local_38[0] = 4;
      local_38[1] = 1;
      local_38[2] = 0;
      local_38[3] = 0;
      ptVar6 = (LPRECT)thunk_FUN_110143f0(&local_14,local_6c,local_38);
      ptVar15 = (LPDRAWTEXTPARAMS)0x0;
      UVar14 = 0x8024;
      iVar3 = appStrlen((ushort *)local_2134);
      iVar10 = winGetSizeANSI((ushort *)local_2134);
      pWVar12 = local_2134;
    }
  }
  else {
    if (*(int *)GUnicodeOS_exref != 0) {
      local_fc[4] = 4;
      local_fc[5] = 0;
      local_fc[6] = 0;
      local_fc[7] = 1;
      ptVar6 = (LPRECT)thunk_FUN_110143f0(&local_14,local_38,local_fc + 4);
      ptVar15 = (LPDRAWTEXTPARAMS)0x0;
      UVar14 = 0x8024;
      iVar3 = appStrlen((ushort *)&DAT_1106d3e4);
      DrawTextExW(hdc,(LPWSTR)&DAT_1106d3e4,iVar3,ptVar6,UVar14,ptVar15);
      ExceptionList = local_78;
      return;
    }
    iVar3 = winGetSizeANSI((ushort *)&DAT_1106d3e4);
    if (iVar3 == 0) {
      pcVar11 = (char *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)&DAT_1106d3e4);
      local_7c = &stack0xffffde88;
      pcVar11 = &stack0xffffde88;
    }
    local_fc[0] = 4;
    local_fc[1] = 0;
    local_fc[2] = 0;
    local_fc[3] = 1;
    ptVar6 = (LPRECT)thunk_FUN_110143f0(&local_14,local_58,local_fc);
    ptVar15 = (LPDRAWTEXTPARAMS)0x0;
    UVar14 = 0x8024;
    iVar3 = appStrlen((ushort *)&DAT_1106d3e4);
    iVar10 = winGetSizeANSI((ushort *)&DAT_1106d3e4);
    pWVar12 = (WCHAR *)&DAT_1106d3e4;
  }
  pcVar11 = winToANSI(pcVar11,(ushort *)pWVar12,iVar10);
  DrawTextExA(hdc,pcVar11,iVar3,ptVar6,UVar14,ptVar15);
  ExceptionList = local_78;
  return;
}


// ==== 110179a8 Catch@110179a8

void Catch_110179a8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -200);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x10,&DAT_1107a670);
}


// ==== 110179bf Catch@110179bf

void Catch_110179bf(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__Draw_1106d3b4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11017c10 FUN_11017c10

void __fastcall FUN_11017c10(int param_1)

{
  int iVar1;
  HWND hWnd;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060cb0;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 0x48);
  if ((iVar1 == 0) && (iVar1 = *(int *)(param_1 + 0x4c), iVar1 == 0)) {
    if (*(int *)(param_1 + 0x50) == 0) {
      return;
    }
    hWnd = *(HWND *)(*(int *)(param_1 + 0x50) + 4);
  }
  else {
    hWnd = *(HWND *)(iVar1 + 4);
  }
  ExceptionList = &local_10;
  SetFocus(hWnd);
  ExceptionList = local_10;
  return;
}


// ==== 11017c75 Catch@11017c75

void Catch_11017c75(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11017c89 Catch@11017c89

void Catch_11017c89(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__SetFocusToItem_1106d3fc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11017cd0 FUN_11017cd0

void __thiscall FUN_11017cd0(void *this,WWindow *param_1,int param_2)

{
  code *pcVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060cc0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_2 == 0xd) {
    if (*(int *)((int)this + 0x58) != 0) {
      ExceptionList = &local_10;
      FTreeItem::SnoopKeyDown(this,param_1,9);
      ExceptionList = local_10;
      return;
    }
    pcVar1 = *(code **)(*(int *)((int)this + -4) + 0x98);
  }
  else {
    ExceptionList = &local_10;
    if (param_2 != 0x1b) goto LAB_11017d45;
    pcVar1 = *(code **)(*(int *)((int)this + -4) + 0xa0);
  }
  ExceptionList = &local_10;
  (*pcVar1)();
LAB_11017d45:
  FTreeItem::SnoopChar(this,param_1,param_2);
  ExceptionList = local_10;
  return;
}


// ==== 11017d6b Catch@11017d6b

void Catch_11017d6b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11017d7f Catch@11017d7f

void Catch_11017d7f(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__SnoopChar_1106d444);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11017dd0 FUN_11017dd0

void __fastcall FUN_11017dd0(int param_1)

{
  int iVar1;
  ushort local_220 [262];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060cd0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdd4;
  local_8 = 0;
  if ((*(WTrackBar **)(param_1 + 0x4c) != (WTrackBar *)0x0) && (*(int *)(param_1 + 0x48) != 0)) {
    ExceptionList = &local_10;
    iVar1 = WTrackBar::GetPos(*(WTrackBar **)(param_1 + 0x4c));
    appSprintf(local_220,(ushort *)&DAT_1106d4d8,iVar1);
    (**(code **)(**(int **)(param_1 + 0x48) + 0x2c))(local_220);
    WEdit::SetModify(*(WEdit **)(param_1 + 0x48),1);
    UpdateWindow(*(HWND *)(*(int *)(param_1 + 0x48) + 4));
  }
  ExceptionList = local_10;
  return;
}


// ==== 11017e65 Catch@11017e65

void Catch_11017e65(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11017e79 Catch@11017e79

void Catch_11017e79(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__OnTrackBarThumbTr_1106d480);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11017ed0 FUN_11017ed0

void __fastcall FUN_11017ed0(FPropertyItem *param_1)

{
  FString *this;
  int iVar1;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_11060ce9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  FPropertyItem::OnTrackBarThumbTrack(param_1);
  (**(code **)(*(int *)param_1 + 0x9c))();
  if (*(int *)(param_1 + 0x48) != 0) {
    SetFocus(*(HWND *)(*(int *)(param_1 + 0x48) + 4));
    this = (FString *)(**(code **)(**(int **)(param_1 + 0x48) + 0x28))(local_28);
    local_8._0_1_ = 1;
    iVar1 = FString::Len(this);
    WEdit::SetSelection(*(WEdit **)(param_1 + 0x48),0,iVar1);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
    (**(code **)(*(int *)param_1 + 0x28))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 11017f6f Catch@11017f6f

void Catch_11017f6f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11017f83 Catch@11017f83

void Catch_11017f83(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__OnTrackBarThumbPo_1106d4e0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11017fe0 FUN_11017fe0

void __fastcall FUN_11017fe0(int *param_1)

{
  uint *puVar1;
  BOOL BVar2;
  int iVar3;
  uint uVar4;
  tagCHOOSECOLORA *ptVar5;
  ushort local_248 [260];
  tagCHOOSECOLORA local_40;
  tagCHOOSECOLORA *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060d00;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdac;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (uint *)(**(code **)(*param_1 + 0x68))(param_1,0);
  if (puVar1 == (uint *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
  }
  local_18 = &local_40;
  ptVar5 = local_18;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    ptVar5->lStructSize = 0;
    ptVar5 = (tagCHOOSECOLORA *)&ptVar5->hwndOwner;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)&ptVar5->lStructSize = 0;
    ptVar5 = (tagCHOOSECOLORA *)((int)&ptVar5->lStructSize + 1);
  }
  local_40.lStructSize = 0x24;
  local_40.hwndOwner = *(HWND *)(param_1[2] + 0x48);
  local_40.lpCustColors = (COLORREF *)&DAT_1109c290;
  local_40.rgbResult = (uint)CONCAT11((char)uVar4,(char)(uVar4 >> 8)) << 8 | uVar4 >> 0x10 & 0xff;
  local_40.Flags = 3;
  BVar2 = ChooseColorA(&local_40);
  if (BVar2 == 1) {
    appSprintf(local_248,(ushort *)u__R__i_G__i_B__i__1106d594,local_40.rgbResult & 0xff,
               local_40.rgbResult >> 8 & 0xff,local_40.rgbResult >> 0x10 & 0xff);
    (**(code **)(*param_1 + 0x8c))(local_248);
    InvalidateRect(*(HWND *)(param_1[2] + 0x48),(RECT *)0x0,0);
    UpdateWindow(*(HWND *)(param_1[2] + 0x48));
  }
  (**(code **)(*param_1 + 0x50))();
  (**(code **)(*param_1 + 0x28))();
  ExceptionList = local_10;
  return;
}


// ==== 11018106 Catch@11018106

void Catch_11018106(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x40);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1101811a Catch@1101811a

void Catch_1101811a(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__OnChooseColorButt_1106d540);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11018190 FUN_11018190

void __fastcall FUN_11018190(int *param_1)

{
  int iVar1;
  int *piVar2;
  FArray *this;
  UObject *pUVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060d10;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  this = (FArray *)(**(code **)(*param_1 + 0x68))(param_1,1);
  if (this != (FArray *)0x0) {
    pUVar3 = thunk_FUN_110140d0((UObject *)param_1[0xf]);
    (**(code **)(*param_1 + 0x50))();
    FArray::AddZeroed(this,*(int *)(*(int *)(pUVar3 + 0x78) + 0x44),1);
    (**(code **)(*param_1 + 0x54))();
    (**(code **)(*param_1 + 0x6c))();
    iVar1 = *(int *)(this + 4);
    iVar5 = 1;
    iVar4 = WListBox::FindItem((WListBox *)(param_1[2] + 0x44),param_1);
    WListBox::SetCurrent((WListBox *)(param_1[2] + 0x44),iVar4 + iVar1,iVar5);
    if ((param_1[0xd] != 0) &&
       (piVar2 = *(int **)(param_1[0xc] + -4 + param_1[0xd] * 4), piVar2[4] != 0)) {
      (**(code **)(*piVar2 + 0x54))();
    }
    (**(code **)(*(int *)param_1[2] + 0xf4))(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1101826f Catch@1101826f

void Catch_1101826f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11018283 Catch@11018283

void Catch_11018283(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__OnArrayAdd_1106d5bc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110182f0 FUN_110182f0

void __fastcall FUN_110182f0(int *param_1)

{
  FArray *this;
  UObject *pUVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060d20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  this = (FArray *)(**(code **)(*param_1 + 0x68))(param_1,1);
  if (this != (FArray *)0x0) {
    pUVar1 = thunk_FUN_110140d0((UObject *)param_1[0xf]);
    (**(code **)(*param_1 + 0x50))();
    FArray::Empty(this,*(int *)(*(int *)(pUVar1 + 0x78) + 0x44),0);
    (**(code **)(*param_1 + 0x54))();
    (**(code **)(*param_1 + 0x6c))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1101837c Catch@1101837c

void Catch_1101837c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11018390 Catch@11018390

void Catch_11018390(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__OnArrayEmpty_1106d5fc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110183e0 FUN_110183e0

void __fastcall FUN_110183e0(int *param_1)

{
  int iVar1;
  UObject *pUVar2;
  wchar_t *pwVar3;
  ushort local_220 [262];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060d30;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdd4;
  local_8 = 0;
  ExceptionList = &local_10;
  pUVar2 = thunk_FUN_11014140((UObject *)param_1[0xf]);
  if (*(int *)(pUVar2 + 0x78) == 0) {
    pwVar3 = u_Texture_1106d6bc;
  }
  else {
    pwVar3 = (wchar_t *)UObject::GetName(*(UObject **)(pUVar2 + 0x78));
  }
  appSprintf(local_220,(ushort *)u_BROWSECLASS_CLASS__s_1106d688,pwVar3);
  iVar1 = param_1[2];
  if (*(int *)(iVar1 + 0x18) != 0) {
    (**(code **)(**(int **)(iVar1 + 0x18) + 0xc))(iVar1,local_220);
  }
  (**(code **)(*param_1 + 0x28))();
  ExceptionList = local_10;
  return;
}


// ==== 11018483 Catch@11018483

void Catch_11018483(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11018497 Catch@11018497

void Catch_11018497(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__OnBrowseButton_1106d640);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110184f0 FUN_110184f0

void __fastcall FUN_110184f0(int *param_1)

{
  int iVar1;
  UObject *pUVar2;
  wchar_t *pwVar3;
  ushort local_220 [262];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060d40;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdd4;
  local_8 = 0;
  ExceptionList = &local_10;
  pUVar2 = thunk_FUN_11014140((UObject *)param_1[0xf]);
  if (*(int *)(pUVar2 + 0x78) == 0) {
    pwVar3 = u_Texture_1106d6bc;
  }
  else {
    pwVar3 = (wchar_t *)UObject::GetName(*(UObject **)(pUVar2 + 0x78));
  }
  appSprintf(local_220,(ushort *)u_USECURRENT_CLASS__s_1106d724,pwVar3);
  iVar1 = param_1[2];
  if (*(int *)(iVar1 + 0x18) != 0) {
    (**(code **)(**(int **)(iVar1 + 0x18) + 0xc))(iVar1,local_220);
  }
  (**(code **)(*param_1 + 0x28))();
  if (param_1[0x17] != 0) {
    (**(code **)(*param_1 + 0x50))();
    (**(code **)(*param_1 + 0x54))();
    if (param_1[0xd] != 0) {
      (**(code **)(**(int **)param_1[0xc] + 0x54))();
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 110185bd Catch@110185bd

void Catch_110185bd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 110185d1 Catch@110185d1

void Catch_110185d1(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__OnUseCurrentButto_1106d6d0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11018630 FUN_11018630

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_11018630(FPropertyItem *param_1)

{
  FName *this;
  UObject *pUVar1;
  int iVar2;
  UClass *pUVar3;
  ushort *puVar4;
  int *piVar5;
  uint uVar6;
  ushort local_2024;
  undefined1 local_2022 [8202];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060d50;
  local_10 = ExceptionList;
  local_18 = 0x11018653;
  local_14 = &stack0xffffdfd0;
  local_8 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x58) = 0;
  this = (FName *)(**(code **)(*(int *)param_1 + 0x68))(param_1,0);
  if (*(int *)(param_1 + 0x48) != 0) {
    local_2024 = 0;
    _memset(local_2022,0,0x1ffe);
    if (this != (FName *)0x0) {
      FPropertyItem::GetPropertyText(param_1,&local_2024);
    }
    pUVar1 = thunk_FUN_11013fd0(*(UObject **)(param_1 + 0x3c));
    if (((pUVar1 == (UObject *)0x0) &&
        (pUVar1 = thunk_FUN_11014000(*(UObject **)(param_1 + 0x3c)), pUVar1 == (UObject *)0x0)) &&
       ((pUVar1 = thunk_FUN_11014030(*(UObject **)(param_1 + 0x3c)), pUVar1 == (UObject *)0x0 ||
        (pUVar1 = thunk_FUN_11014030(*(UObject **)(param_1 + 0x3c)), *(int *)(pUVar1 + 0x78) != 0)))
       ) {
      (**(code **)(**(int **)(param_1 + 0x48) + 0x2c))(&local_2024);
    }
    else {
      iVar2 = **(int **)(param_1 + 0x48);
      puVar4 = FString::operator*((FString *)(param_1 + 0x74));
      (**(code **)(iVar2 + 0x2c))(puVar4);
    }
    iVar2 = appStrlen(&local_2024);
    WEdit::SetSelection(*(WEdit **)(param_1 + 0x48),0,iVar2);
  }
  if ((*(WTrackBar **)(param_1 + 0x4c) != (WTrackBar *)0x0) && (this != (FName *)0x0)) {
    WTrackBar::SetPos(*(WTrackBar **)(param_1 + 0x4c),(uint)(byte)*this);
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    ExceptionList = local_10;
    return;
  }
  pUVar1 = thunk_FUN_110141b0(*(UObject **)(param_1 + 0x3c));
  if (pUVar1 == (UObject *)0x0) {
    pUVar3 = UByteProperty::StaticClass();
    iVar2 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar3);
    if (iVar2 == 0) {
      pUVar3 = UNameProperty::StaticClass();
      iVar2 = UObject::IsA(*(UObject **)(param_1 + 0x3c),pUVar3);
      if (iVar2 == 0) goto LAB_11018810;
      FName::FName((FName *)&local_18,0x338);
      iVar2 = FName::operator==((FName *)(param_1 + 0x70),(FName *)&local_18);
      if (iVar2 == 0) goto LAB_11018810;
      if (this == (FName *)0x0) {
        uVar6 = 0;
      }
      else {
        iVar2 = **(int **)(param_1 + 0x50);
        puVar4 = FName::operator*(this);
        uVar6 = (**(code **)(iVar2 + 0x100))(puVar4);
      }
      piVar5 = *(int **)(param_1 + 0x50);
      uVar6 = ((int)uVar6 < 0) - 1 & uVar6;
    }
    else {
      if (this == (FName *)0x0) goto LAB_11018771;
      uVar6 = (uint)(byte)*this;
      piVar5 = *(int **)(param_1 + 0x50);
    }
  }
  else if (this == (FName *)0x0) {
LAB_11018771:
    piVar5 = *(int **)(param_1 + 0x50);
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)((*(uint *)(pUVar1 + 0x78) & *(uint *)this) != 0);
    piVar5 = *(int **)(param_1 + 0x50);
  }
  (**(code **)(*piVar5 + 0xf8))(uVar6);
LAB_11018810:
  *(undefined4 *)(param_1 + 0x58) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 1101882b Catch@1101882b

void Catch_1101882b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_1107a670);
}


// ==== 1101883f Catch@1101883f

void Catch_1101883f(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FPropertyItem__ReceiveFromContro_1106d758);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 110188f0 FUN_110188f0

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall FUN_110188f0(void *this,HDC param_1)

{
  int iVar1;
  HBRUSH hbr;
  LONG *pLVar2;
  HBRUSH__ *pHVar3;
  COLORREF color;
  int *piVar4;
  ushort *puVar5;
  LPCWSTR lpString;
  LPWSTR lpchText;
  int iVar6;
  char *pcVar7;
  RECT *pRVar8;
  UINT UVar9;
  ushort *puVar10;
  LPDRAWTEXTPARAMS ptVar11;
  int local_78 [13];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  RECT local_38;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_11060d69;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff7c;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x24))();
  iVar1 = FTreeItem::GetIndent(this);
  hbr = (HBRUSH)(**(code **)(*(int *)this + 0x14))();
  FillRect(param_1,&local_38,hbr);
  local_78[0xc] = (**(code **)(*(int *)this + 0x40))();
  local_78[0xc] = local_78[0xc] + 1;
  local_44 = 1;
  local_40 = 0xffffffff;
  local_3c = 0xffffffff;
  pLVar2 = (LONG *)thunk_FUN_110143f0(&local_38,local_78,local_78 + 0xc);
  local_38.left = *pLVar2;
  local_38.top = pLVar2[1];
  local_38.right = pLVar2[2];
  local_38.bottom = pLVar2[3];
  pHVar3 = hBrushBlack;
  if (iVar1 != 0) {
    pHVar3 = hBrushGrey160;
  }
  FillRect(param_1,&local_38,pHVar3);
  local_78[8] = 1;
  local_78[9] = 1;
  local_78[10] = 0xffffffff;
  local_78[0xb] = 0xffffffff;
  pLVar2 = (LONG *)thunk_FUN_110143f0(&local_38,local_78,local_78 + 8);
  local_38.left = *pLVar2;
  local_38.top = pLVar2[1];
  local_38.right = pLVar2[2];
  local_38.bottom = pLVar2[3];
  pHVar3 = hBrushGrey180;
  if (iVar1 != 0) {
    pHVar3 = hBrushGrey;
  }
  FillRect(param_1,&local_38,pHVar3);
  local_78[4] = 1;
  local_78[5] = 1;
  local_78[6] = 0xffffffff;
  local_78[7] = 0xffffffff;
  pLVar2 = (LONG *)thunk_FUN_110143f0(&local_38,local_78,local_78 + 4);
  local_38.left = *pLVar2;
  local_38.top = pLVar2[1];
  local_38.right = pLVar2[2];
  local_38.bottom = pLVar2[3];
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x24))();
  (**(code **)(iVar1 + 0x4c))();
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x48))();
  color = (**(code **)(iVar1 + 0x18))();
  SetTextColor(param_1,color);
  SetBkMode(param_1,1);
  (**(code **)(*(int *)this + 0x80))();
  local_8 = CONCAT31(local_8._1_3_,1);
  local_78[0] = 0x12;
  local_78[1] = 0;
  local_78[2] = 0xffffffee;
  local_78[3] = 0;
  piVar4 = (int *)thunk_FUN_110143f0(&local_38,local_78 + 4,local_78);
  local_38.left = *piVar4;
  local_38.top = piVar4[1];
  local_38.right = piVar4[2];
  local_38.bottom = piVar4[3];
  puVar10 = (ushort *)&DAT_1106d7d8;
  puVar5 = UObject::GetLanguage();
  iVar1 = appStricmp(puVar5,puVar10);
  if (iVar1 == 0) {
    iVar1 = FString::Len(local_28);
    lpString = (LPCWSTR)FString::operator*(local_28);
    TextOutW(param_1,local_38.left,local_38.top,lpString,iVar1);
  }
  else if (*(int *)GUnicodeOS_exref == 0) {
    puVar5 = FString::operator*(local_28);
    iVar1 = winGetSizeANSI(puVar5);
    if (iVar1 == 0) {
      pcVar7 = (char *)0x0;
    }
    else {
      puVar5 = FString::operator*(local_28);
      winGetSizeANSI(puVar5);
      local_14 = &stack0xffffff4c;
      pcVar7 = &stack0xffffff4c;
    }
    ptVar11 = (LPDRAWTEXTPARAMS)0x0;
    UVar9 = 0x8024;
    pRVar8 = &local_38;
    iVar1 = FString::Len(local_28);
    puVar5 = FString::operator*(local_28);
    iVar6 = winGetSizeANSI(puVar5);
    puVar5 = FString::operator*(local_28);
    pcVar7 = winToANSI(pcVar7,puVar5,iVar6);
    DrawTextExA(param_1,pcVar7,iVar1,pRVar8,UVar9,ptVar11);
  }
  else {
    ptVar11 = (LPDRAWTEXTPARAMS)0x0;
    UVar9 = 0x8024;
    pRVar8 = &local_38;
    iVar1 = FString::Len(local_28);
    lpchText = (LPWSTR)FString::operator*(local_28);
    DrawTextExW(param_1,lpchText,iVar1,pRVar8,UVar9,ptVar11);
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 11018c0b Catch@11018c0b

void Catch_11018c0b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11018c1f Catch@11018c1f

void Catch_11018c1f(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FHeaderItem__Draw_1106d7ac);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11018d10 FUN_11018d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_11018d10(float *param_1,byte param_2,byte param_3,byte param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  double dVar6;
  float local_c;
  float local_8;
  
  fVar1 = ((float)param_4 * (float)_DAT_1106d838) / (float)_DAT_1106bea8;
  dVar6 = appSqrt((double)fVar1);
  fVar1 = (float)(((float10)_DAT_1106d818 / ((float10)dVar6 + (float10)_DAT_1106d828)) *
                 (float10)fVar1);
  fVar3 = 0.0;
  fVar2 = fVar3;
  if ((0.0 <= fVar1) && (fVar2 = fVar1, 1.0 <= fVar1)) {
    fVar2 = 1.0;
  }
  if (param_2 < 0x56) {
    local_c = (float)(int)(0x55 - (uint)param_2) / (float)_DAT_1106d808;
    local_8 = (float)param_2 / (float)_DAT_1106d808;
  }
  else {
    uVar5 = (uint)param_2;
    if (param_2 < 0xab) {
      local_c = 0.0;
      local_8 = (float)(int)(0xaa - uVar5) / (float)_DAT_1106d808;
      fVar3 = (float)(int)(uVar5 - 0x55) / (float)_DAT_1106d808;
    }
    else {
      local_c = (float)(int)(uVar5 - 0xaa) / (float)_DAT_1106d808;
      local_8 = 0.0;
      fVar3 = (float)(int)(0xff - uVar5) / (float)_DAT_1106d7f8;
    }
  }
  fVar4 = (float)_DAT_1106bea8;
  fVar1 = (float)param_3 / fVar4;
  *param_1 = (fVar1 * (1.0 - local_c) + local_c) * fVar2 * fVar4;
  param_1[1] = (local_8 + (1.0 - local_8) * fVar1) * fVar2 * fVar4;
  param_1[2] = fVar4 * (fVar3 + fVar1 * (1.0 - fVar3)) * fVar2;
  return;
}


// ==== 11018f90 FUN_11018f90

void __thiscall FUN_11018f90(void *this,ushort *param_1)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  code *pcVar5;
  ulonglong uVar6;
  FString local_90 [12];
  FString local_84 [12];
  FString local_78 [12];
  FString local_6c [12];
  FString local_60 [12];
  FString local_54 [12];
  float local_48;
  float local_44;
  float local_40;
  FString local_3c [20];
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_11060e19;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff64;
  local_18 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_28 = this;
  pFVar2 = (FString *)(**(code **)(*(int *)this + 0x80))(&local_48);
  local_8._0_1_ = 1;
  iVar3 = FString::operator==(pFVar2,(ushort *)u_LightColor_1106d900);
  local_8._0_1_ = 0;
  FString::~FString((FString *)&local_48);
  if (iVar3 != 0) {
    FString::FString(local_3c,param_1);
    local_8._0_1_ = 2;
    iVar3 = FString::InStr(local_3c,(ushort *)&DAT_1106d8f8,0);
    if (iVar3 == -1) {
      param_1 = (ushort *)0xff;
      pcVar5 = appAtoi_exref;
    }
    else {
      pFVar2 = (FString *)FString::Mid(local_3c,(int)&local_48,iVar3 + 2);
      local_8 = CONCAT31(local_8._1_3_,3);
      local_18 = 1;
      puVar4 = FString::operator*(pFVar2);
      pcVar5 = appAtoi_exref;
      param_1 = (ushort *)appAtoi(puVar4);
    }
    local_8 = 2;
    if ((local_18 & 1) != 0) {
      local_18 = local_18 & 0xfffffffe;
      FString::~FString((FString *)&local_48);
    }
    iVar3 = FString::InStr(local_3c,(ushort *)&DAT_1106d8f0,0);
    if (iVar3 == -1) {
      local_20 = 0xff;
    }
    else {
      pFVar2 = (FString *)FString::Mid(local_3c,(int)&local_48,iVar3 + 2);
      local_8 = CONCAT31(local_8._1_3_,4);
      local_18 = local_18 | 2;
      puVar4 = FString::operator*(pFVar2);
      local_20 = (*pcVar5)(puVar4);
    }
    local_8 = 2;
    if ((local_18 & 2) != 0) {
      local_18 = local_18 & 0xfffffffd;
      FString::~FString((FString *)&local_48);
    }
    iVar3 = FString::InStr(local_3c,(ushort *)&DAT_1106d8e8,0);
    if (iVar3 == -1) {
      local_24 = 0xff;
    }
    else {
      pFVar2 = (FString *)FString::Mid(local_3c,(int)&local_48,iVar3 + 2);
      local_8 = CONCAT31(local_8._1_3_,5);
      local_18 = local_18 | 4;
      puVar4 = FString::operator*(pFVar2);
      local_24 = (*pcVar5)(puVar4);
    }
    local_8._0_1_ = 2;
    local_8._1_3_ = 0;
    if ((local_18 & 4) != 0) {
      local_18 = local_18 & 0xfffffffb;
      FString::~FString((FString *)&local_48);
    }
    local_48 = (float)(int)param_1;
    local_44 = (float)local_20;
    local_40 = (float)local_24;
    FHeaderItem::ToHSL(this,&local_48,local_48,local_44,local_40);
    for (local_1c = 0; local_1c < *(int *)((int)this + 0x34); local_1c = local_1c + 1) {
      piVar1 = *(int **)(*(int *)((int)this + 0x30) + local_1c * 4);
      pFVar2 = (FString *)(**(code **)(*piVar1 + 0x80))(local_54);
      local_8._0_1_ = 6;
      iVar3 = FString::operator==(pFVar2,(ushort *)u_LightHue_1106d8d0);
      local_8._0_1_ = 2;
      FString::~FString(local_54);
      if (iVar3 != 0) {
        uVar6 = FUN_1103b180(extraout_ECX,extraout_EDX);
        pFVar2 = (FString *)FString::Printf((ushort *)local_60,&DAT_1106d8c8,(int)uVar6);
        local_8._0_1_ = 7;
        iVar3 = *piVar1;
        puVar4 = FString::operator*(pFVar2);
        (**(code **)(iVar3 + 0x8c))(puVar4);
        local_8._0_1_ = 2;
        FString::~FString(local_60);
      }
      pFVar2 = (FString *)(**(code **)(*piVar1 + 0x80))(local_6c);
      local_8._0_1_ = 8;
      iVar3 = FString::operator==(pFVar2,(ushort *)u_LightSaturation_1106d8a0);
      local_8._0_1_ = 2;
      FString::~FString(local_6c);
      if (iVar3 != 0) {
        uVar6 = FUN_1103b180(extraout_ECX_00,extraout_EDX_00);
        pFVar2 = (FString *)FString::Printf((ushort *)local_78,&DAT_1106d8c8,(int)uVar6);
        local_8._0_1_ = 9;
        iVar3 = *piVar1;
        puVar4 = FString::operator*(pFVar2);
        (**(code **)(iVar3 + 0x8c))(puVar4);
        local_8._0_1_ = 2;
        FString::~FString(local_78);
      }
      pFVar2 = (FString *)(**(code **)(*piVar1 + 0x80))(local_84);
      local_8._0_1_ = 10;
      iVar3 = FString::operator==(pFVar2,(ushort *)u_LightBrightness_1106d878);
      local_8._0_1_ = 2;
      FString::~FString(local_84);
      if (iVar3 != 0) {
        uVar6 = FUN_1103b180(extraout_ECX_01,extraout_EDX_01);
        pFVar2 = (FString *)FString::Printf((ushort *)local_90,&DAT_1106d8c8,(int)uVar6);
        local_8._0_1_ = 0xb;
        iVar3 = *piVar1;
        puVar4 = FString::operator*(pFVar2);
        (**(code **)(iVar3 + 0x8c))(puVar4);
        local_8._0_1_ = 2;
        FString::~FString(local_90);
      }
      this = local_28;
    }
    (**(code **)(*(int *)this + 0x28))();
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_3c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 11019334 Catch@11019334

void Catch_11019334(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x2c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_1107a670);
}


// ==== 11019348 Catch@11019348

void Catch_11019348(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FHeaderItem__SetValue_1106d844);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11019460 FUN_11019460

void __fastcall FUN_11019460(FHeaderItem *param_1)

{
  FPropertyItem *this;
  int *piVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  FString *pFVar4;
  int iVar5;
  BOOL BVar6;
  ushort *puVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  tagCHOOSECOLORA *ptVar8;
  undefined2 in_FPUControlWord;
  ulonglong uVar9;
  uint uVar10;
  ushort local_2b8 [256];
  FString local_b8 [12];
  FString local_ac [12];
  FString local_a0 [12];
  FString local_94 [12];
  undefined1 *local_88;
  void *local_84;
  undefined1 *puStack_80;
  int local_7c;
  tagCHOOSECOLORA local_70;
  FString local_4c [12];
  FString local_40 [16];
  float local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  float local_8;
  
  puStack_80 = &LAB_11060ea1;
  local_84 = ExceptionList;
  local_88 = &stack0xfffffd3c;
  local_7c._0_1_ = 0;
  local_7c._1_3_ = 0;
  ExceptionList = &local_84;
  (**(code **)(*(int *)param_1 + 0x50))();
  (**(code **)(*(int *)param_1 + 0x54))();
  local_24 = local_24 & 0xffffff00;
  local_28 = local_28 & 0xffffff00;
  local_2c = local_2c & 0xffffff00;
  for (local_1c = 0; local_1c < *(int *)(param_1 + 0x34); local_1c = local_1c + 1) {
    this = *(FPropertyItem **)(*(int *)(param_1 + 0x30) + local_1c * 4);
    pFVar4 = (FString *)(**(code **)(*(int *)this + 0x80))(&local_18);
    local_7c._0_1_ = 1;
    iVar5 = FString::operator==(pFVar4,(ushort *)u_LightHue_1106d8d0);
    local_7c = (uint)local_7c._1_3_ << 8;
    FString::~FString((FString *)&local_18);
    if (iVar5 != 0) {
      FPropertyItem::GetPropertyText(this,local_2b8);
      iVar5 = appAtoi(local_2b8);
      local_24 = CONCAT31(local_24._1_3_,(char)iVar5);
    }
    pFVar4 = (FString *)(**(code **)(*(int *)this + 0x80))(local_4c);
    local_7c._0_1_ = 2;
    iVar5 = FString::operator==(pFVar4,(ushort *)u_LightSaturation_1106d8a0);
    local_7c = (uint)local_7c._1_3_ << 8;
    FString::~FString(local_4c);
    if (iVar5 != 0) {
      FPropertyItem::GetPropertyText(this,local_2b8);
      iVar5 = appAtoi(local_2b8);
      local_28 = CONCAT31(local_28._1_3_,(char)iVar5);
    }
    pFVar4 = (FString *)(**(code **)(*(int *)this + 0x80))(local_40);
    local_7c._0_1_ = 3;
    iVar5 = FString::operator==(pFVar4,(ushort *)u_LightBrightness_1106d878);
    local_7c._0_1_ = 0;
    FString::~FString(local_40);
    if (iVar5 != 0) {
      FPropertyItem::GetPropertyText(this,local_2b8);
      iVar5 = appAtoi(local_2b8);
      local_2c = CONCAT31(local_2c._1_3_,(char)iVar5);
    }
  }
  uVar10 = local_2c;
  FHeaderItem::FromHSV(param_1,(uchar)&local_18,(uchar)local_24,(uchar)local_28);
  ptVar8 = &local_70;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    ptVar8->lStructSize = 0;
    ptVar8 = (tagCHOOSECOLORA *)&ptVar8->hwndOwner;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)&ptVar8->lStructSize = 0;
    ptVar8 = (tagCHOOSECOLORA *)((int)&ptVar8->lStructSize + 1);
  }
  local_70.lStructSize = 0x24;
  local_70.hwndOwner = *(HWND *)(*(int *)(param_1 + 8) + 0x48);
  local_70.lpCustColors = (COLORREF *)&DAT_1109c2e0;
  local_8._0_1_ = (undefined1)(int)ROUND(local_10);
  uVar3 = local_8._0_1_;
  local_8._0_1_ = (undefined1)(int)ROUND(local_14);
  uVar2 = CONCAT11(uVar3,local_8._0_1_);
  local_c = (float)CONCAT22(in_FPUControlWord,(short)&local_70);
  local_8 = (float)(int)ROUND(local_18);
  local_70.rgbResult = (COLORREF)CONCAT21(uVar2,local_8._0_1_);
  local_70.Flags = 3;
  BVar6 = ChooseColorA(&local_70);
  if (BVar6 == 1) {
    local_18 = (float)(local_70.rgbResult & 0xff);
    local_30 = (float)(local_70.rgbResult >> 8 & 0xff);
    local_10 = (float)(local_70.rgbResult >> 0x10 & 0xff);
    local_14 = local_30;
    local_c = local_18;
    local_8 = local_10;
    FHeaderItem::ToHSL(param_1,&local_18,local_18,local_30,local_10,uVar10);
    for (local_20 = 0; local_20 < *(int *)(param_1 + 0x34); local_20 = local_20 + 1) {
      piVar1 = *(int **)(*(int *)(param_1 + 0x30) + local_20 * 4);
      pFVar4 = (FString *)(**(code **)(*piVar1 + 0x80))(local_40);
      local_7c._0_1_ = 4;
      iVar5 = FString::operator==(pFVar4,(ushort *)u_LightHue_1106d8d0);
      local_7c._0_1_ = 0;
      FString::~FString(local_40);
      if (iVar5 != 0) {
        uVar9 = FUN_1103b180(extraout_ECX,extraout_EDX);
        pFVar4 = (FString *)FString::Printf((ushort *)local_4c,&DAT_1106d8c8,(int)uVar9);
        local_7c._0_1_ = 5;
        iVar5 = *piVar1;
        puVar7 = FString::operator*(pFVar4);
        (**(code **)(iVar5 + 0x8c))(puVar7);
        local_7c._0_1_ = 0;
        FString::~FString(local_4c);
      }
      pFVar4 = (FString *)(**(code **)(*piVar1 + 0x80))(local_ac);
      local_7c._0_1_ = 6;
      iVar5 = FString::operator==(pFVar4,(ushort *)u_LightSaturation_1106d8a0);
      local_7c._0_1_ = 0;
      FString::~FString(local_ac);
      if (iVar5 != 0) {
        uVar9 = FUN_1103b180(extraout_ECX_00,extraout_EDX_00);
        pFVar4 = (FString *)FString::Printf((ushort *)local_a0,&DAT_1106d8c8,(int)uVar9);
        local_7c._0_1_ = 7;
        iVar5 = *piVar1;
        puVar7 = FString::operator*(pFVar4);
        (**(code **)(iVar5 + 0x8c))(puVar7);
        local_7c._0_1_ = 0;
        FString::~FString(local_a0);
      }
      pFVar4 = (FString *)(**(code **)(*piVar1 + 0x80))(local_b8);
      local_7c._0_1_ = 8;
      iVar5 = FString::operator==(pFVar4,(ushort *)u_LightBrightness_1106d878);
      local_7c._0_1_ = 0;
      FString::~FString(local_b8);
      if (iVar5 != 0) {
        uVar9 = FUN_1103b180(extraout_ECX_01,extraout_EDX_01);
        pFVar4 = (FString *)FString::Printf((ushort *)local_94,&DAT_1106d8c8,(int)uVar9);
        local_7c._0_1_ = 9;
        iVar5 = *piVar1;
        puVar7 = FString::operator*(pFVar4);
        (**(code **)(iVar5 + 0x8c))(puVar7);
        local_7c._0_1_ = 0;
        FString::~FString(local_94);
      }
    }
    InvalidateRect(*(HWND *)(*(int *)(param_1 + 8) + 0x48),(RECT *)0x0,0);
    UpdateWindow(*(HWND *)(*(int *)(param_1 + 8) + 0x48));
  }
  (**(code **)(*(int *)param_1 + 0x28))();
  ExceptionList = local_84;
  return;
}


// ==== 110198c6 Catch@110198c6

void Catch_110198c6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x44) = *(undefined4 *)(unaff_EBP + 4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x44,&DAT_1107a670);
}


// ==== 110198da Catch@110198da

void Catch_110198da(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FHeaderItem__OnChooseHSLColorBut_1106d920);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11019a20 FUN_11019a20

void __fastcall FUN_11019a20(int *param_1)

{
  FString *this;
  int iVar1;
  ushort *puVar2;
  undefined **ppuStack_58;
  undefined **ppuStack_48;
  int *piStack_44;
  FString local_2c [16];
  undefined1 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_11060ed9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  this = (FString *)(**(code **)(*param_1 + 0x80))();
  local_8._0_1_ = 1;
  piStack_44 = (int *)0x11019a6b;
  iVar1 = FString::operator==(this,(ushort *)u_LightColor_1106d900);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  if (iVar1 != 0) {
    local_1c = (undefined1 *)&ppuStack_48;
    ppuStack_48 = FDelegate::vftable;
    iVar1 = *param_1;
    ppuStack_58 = (undefined **)0x11019aac;
    piStack_44 = param_1;
    LocalizeGeneral(s_ColorButton_1106d9cc,(ushort *)u_Window_1106949c,(ushort *)0x0);
    (**(code **)(iVar1 + 0x34))();
    local_1c = (undefined1 *)&ppuStack_58;
    ppuStack_58 = FDelegate::vftable;
    iVar1 = *param_1;
    puVar2 = LocalizeGeneral(s_PickButton_1106d9bc,(ushort *)u_Window_1106949c,(ushort *)0x0);
    (**(code **)(iVar1 + 0x34))(puVar2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 11019b02 Catch@11019b02

void Catch_11019b02(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11019b16 Catch@11019b16

void Catch_11019b16(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FHeaderItem__OnItemSetFocus_1106d978);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11019b80 FUN_11019b80

void __thiscall FUN_11019b80(void *this,FArchive *param_1)

{
  int *piVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060ef0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FTreeItem::Serialize(this,param_1);
  iVar2 = (int)this + 0x3c;
  piVar1 = (int *)(**(code **)(*(int *)param_1 + 0x1c))(iVar2,(int)this + 0x40);
  thunk_FUN_110132b0(piVar1,iVar2);
  ExceptionList = local_10;
  return;
}


// ==== 11019be7 Catch@11019be7

void Catch_11019be7(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11019bfb Catch@11019bfb

void Catch_11019bfb(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FCategoryItem__Serialize_1106d9dc);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11019c40 FUN_11019c40

void __fastcall FUN_11019c40(int *param_1)

{
  int iVar1;
  int *piVar2;
  UObject *pUVar3;
  ushort *puVar4;
  ushort *puVar5;
  FString *this;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_11060f09;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  pUVar3 = (UObject *)(**(code **)(*param_1 + 0x90))();
  pUVar3 = UObject::GetOuter(pUVar3);
  if (*(int *)(param_1[2] + 0x18) != 0) {
    puVar4 = UObject::GetPathName(pUVar3,(UObject *)0x0,(ushort *)0x0);
    puVar5 = FString::operator*((FString *)(param_1 + 0x12));
    this = (FString *)
           FString::Printf((ushort *)local_28,u_NEWOBJECT_CLASS__s_OUTER__s_1106da4c,puVar5,puVar4);
    local_8._0_1_ = 1;
    iVar1 = **(int **)(param_1[2] + 0x18);
    puVar4 = FString::operator*(this);
    (**(code **)(iVar1 + 0xc))(param_1[3],puVar4);
    local_8 = (uint)local_8._1_3_ << 8;
    FString::~FString(local_28);
  }
  piVar2 = (int *)param_1[3];
  (**(code **)(*piVar2 + 0x50))();
  (**(code **)(*piVar2 + 0x54))();
  (**(code **)(**(int **)piVar2[0xc] + 0x54))();
  ExceptionList = local_10;
  return;
}


// ==== 11019d18 Catch@11019d18

void Catch_11019d18(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 11019d2c Catch@11019d2c

void Catch_11019d2c(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FNewObjectItem__OnNew_1106da18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 11019d90 FUN_11019d90

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __thiscall FUN_11019d90(void *this,HDC param_1)

{
  HDC hdc;
  HBRUSH pHVar1;
  int iVar2;
  ushort *puVar3;
  COLORREF CVar4;
  LPRECT ptVar5;
  RECT *lprc;
  LPWSTR lpchText;
  int iVar6;
  char *pcVar7;
  FString *this_00;
  UINT UVar8;
  HDC__ HVar9;
  LPDRAWTEXTPARAMS ptVar10;
  WCHAR local_20b0 [4098];
  int local_ac [6];
  undefined4 local_94;
  undefined4 local_90;
  int local_8c [4];
  undefined1 *local_7c;
  void *local_78;
  undefined1 *puStack_74;
  undefined4 local_70;
  int local_6c [9];
  int local_48 [4];
  RECT *local_38;
  int local_34;
  LONG local_30;
  int local_2c;
  LONG local_28;
  int local_24;
  LONG local_20;
  int local_1c;
  LONG local_18;
  RECT local_14;
  
  hdc = param_1;
  puStack_74 = &LAB_11060f20;
  local_78 = ExceptionList;
  local_8c[3] = 0x11019db8;
  local_7c = &stack0xffffdf44;
  local_70 = 0;
  ExceptionList = &local_78;
  (**(code **)(*(int *)this + 0x24))();
  FillRect(param_1,&local_14,hBrushGrey160);
  local_34 = local_14.left;
  local_30 = local_14.top;
  local_2c = local_14.right;
  local_28 = local_14.bottom;
  local_2c = (**(code **)(**(int **)((int)this + 8) + 0xec))();
  local_ac[5] = (**(code **)(*(int *)this + 0x48))();
  local_ac[5] = 1 - local_ac[5];
  local_ac[4] = 0;
  local_94 = 0xffffffff;
  local_90 = 0;
  local_38 = (RECT *)thunk_FUN_110143f0(&local_34,local_48,local_ac + 4);
  iVar2 = *(int *)this;
  (**(code **)(iVar2 + 0x48))();
  pHVar1 = (HBRUSH)(**(code **)(iVar2 + 0x14))();
  FillRect(param_1,local_38,pHVar1);
  iVar2 = (**(code **)(*(int *)this + 0x40))();
  local_34 = local_34 + iVar2;
  (**(code **)(*(int *)this + 0x4c))();
  SetBkMode(param_1,1);
  puVar3 = LocalizeGeneral(&DAT_1106dac4,(ushort *)u_Window_1106949c,(ushort *)0x0);
  appStrcpy((ushort *)local_20b0,puVar3);
  iVar2 = *(int *)this;
  (**(code **)(iVar2 + 0x48))();
  CVar4 = (**(code **)(iVar2 + 0x18))();
  SetTextColor(param_1,CVar4);
  if (*(int *)GUnicodeOS_exref == 0) {
    iVar2 = winGetSizeANSI((ushort *)local_20b0);
    if (iVar2 == 0) {
      param_1 = (HDC)0x0;
    }
    else {
      winGetSizeANSI((ushort *)local_20b0);
      local_7c = &stack0xffffdf1c;
      param_1 = (HDC)&stack0xffffdf1c;
    }
    local_6c[4] = 0;
    local_6c[5] = 1;
    local_6c[6] = 0;
    local_6c[7] = 0;
    ptVar5 = (LPRECT)thunk_FUN_110143f0(&local_34,local_8c,local_6c + 4);
    ptVar10 = (LPDRAWTEXTPARAMS)0x0;
    HVar9.unused = 0x8024;
    iVar2 = appStrlen((ushort *)local_20b0);
    iVar6 = winGetSizeANSI((ushort *)local_20b0);
    pcVar7 = winToANSI((char *)param_1,(ushort *)local_20b0,iVar6);
    DrawTextExA(hdc,pcVar7,iVar2,ptVar5,HVar9.unused,ptVar10);
  }
  else {
    local_ac[0] = 0;
    local_ac[1] = 1;
    local_ac[2] = 0;
    local_ac[3] = 0;
    ptVar5 = (LPRECT)thunk_FUN_110143f0(&local_34,local_48,local_ac);
    ptVar10 = (LPDRAWTEXTPARAMS)0x0;
    HVar9.unused = 0x8024;
    iVar2 = appStrlen((ushort *)local_20b0);
    DrawTextExW(param_1,local_20b0,iVar2,ptVar5,HVar9.unused,ptVar10);
  }
  local_24 = local_14.left;
  local_20 = local_14.top;
  local_1c = local_14.right;
  local_18 = local_14.bottom;
  local_24 = (**(code **)(**(int **)((int)this + 8) + 0xec))();
  local_6c[0] = 0;
  local_6c[1] = 1;
  local_6c[2] = 0;
  local_6c[3] = 0;
  lprc = (RECT *)thunk_FUN_110143f0(&local_24,local_48,local_6c);
  pHVar1 = (HBRUSH)(**(code **)(*(int *)this + 0x14))();
  FillRect(hdc,lprc,pHVar1);
  local_1c = local_1c - *(int *)((int)this + 0x20);
  CVar4 = (**(code **)(*(int *)this + 0x18))();
  SetTextColor(hdc,CVar4);
  if (*(int *)GUnicodeOS_exref == 0) {
    this_00 = (FString *)((int)this + 0x48);
    puVar3 = FString::operator*(this_00);
    iVar2 = winGetSizeANSI(puVar3);
    if (iVar2 == 0) {
      param_1 = (HDC)0x0;
    }
    else {
      puVar3 = FString::operator*(this_00);
      winGetSizeANSI(puVar3);
      local_7c = &stack0xffffdf14;
      param_1 = (HDC)&stack0xffffdf14;
    }
    local_48[0] = 4;
    local_48[1] = 1;
    local_48[2] = 0;
    local_48[3] = 0;
    ptVar5 = (LPRECT)thunk_FUN_110143f0(&local_24,local_6c + 4,local_48);
    ptVar10 = (LPDRAWTEXTPARAMS)0x0;
    UVar8 = 0x8024;
    iVar2 = FString::Len(this_00);
    puVar3 = FString::operator*(this_00);
    iVar6 = winGetSizeANSI(puVar3);
    puVar3 = FString::operator*(this_00);
    pcVar7 = winToANSI((char *)param_1,puVar3,iVar6);
    DrawTextExA(hdc,pcVar7,iVar2,ptVar5,UVar8,ptVar10);
  }
  else {
    local_8c[0] = 4;
    local_8c[1] = 1;
    local_8c[2] = 0;
    local_8c[3] = 0;
    ptVar5 = (LPRECT)thunk_FUN_110143f0(&local_24,local_6c,local_8c);
    ptVar10 = (LPDRAWTEXTPARAMS)0x0;
    UVar8 = 0x8024;
    iVar2 = FString::Len((FString *)((int)this + 0x48));
    lpchText = (LPWSTR)FString::operator*((FString *)((int)this + 0x48));
    DrawTextExW(hdc,lpchText,iVar2,ptVar5,UVar8,ptVar10);
  }
  ExceptionList = local_78;
  return;
}


// ==== 1101a16b Catch@1101a16b

void Catch_1101a16b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + -0x44);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 0x20,&DAT_1107a670);
}


// ==== 1101a17f Catch@1101a17f

void Catch_1101a17f(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_FNewObjectItem__Draw_1106da90);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101a2a0 FUN_1101a2a0

void __thiscall FUN_1101a2a0(void *this,int param_1)

{
  HWND hWnd;
  tagRECT local_2c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060f30;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  if (param_1 == 0) {
    hWnd = *(HWND *)(*(int *)((int)this + 0x14) + 4);
    ExceptionList = &local_10;
    local_14 = &stack0xffffffc8;
  }
  else {
    ExceptionList = &local_10;
    hWnd = GetDlgItem(*(HWND *)(*(int *)((int)this + 0x14) + 4),param_1);
  }
  if (hWnd == (HWND)0x0) {
    appFailAssert(s_hWndParent_1106db10,s___Properties_cpp_1106b558,0x63c);
  }
  GetClientRect(hWnd,&local_2c);
  WWindow::PerformCreateWindowEx
            (this,0,(ushort *)0x0,0x46000000,0,0,local_2c.right - local_2c.left,
             local_2c.bottom - local_2c.top,hWnd,(HMENU__ *)0x0,DAT_1109c35c);
  WListBox::OpenWindow((WListBox *)((int)this + 0x44),1,0,0,1,0,0);
  (**(code **)(*(int *)this + 8))(1);
  ExceptionList = local_10;
  return;
}


// ==== 1101a375 Catch@1101a375

void Catch_1101a375(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101a389 Catch@1101a389

void Catch_1101a389(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_wWProperties__OpenChildWindow_1106dac6 + 1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101a3f0 FUN_1101a3f0

void __fastcall FUN_1101a3f0(undefined4 *param_1)

{
  int iVar1;
  
  do {
    param_1[1] = param_1[1] + 1;
    iVar1 = param_1[1];
    if (*(int *)(GObjObjects_exref + 4) <= iVar1) {
      return;
    }
  } while ((*(int *)(*(int *)GObjObjects_exref + iVar1 * 4) == 0) ||
          (iVar1 = UObject::IsA(*(UObject **)(*(int *)GObjObjects_exref + iVar1 * 4),
                                (UClass *)*param_1), iVar1 == 0));
  return;
}


// ==== 1101a470 FUN_1101a470

void __thiscall FUN_1101a470(void *this,int param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060f40;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_1 == 1) {
    ExceptionList = &local_10;
    SetFocus(*(HWND *)((int)this + 0x48));
    if (*(int *)((int)this + 0xd0) != 0) {
      ExceptionList = local_10;
      return;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    ExceptionList = &local_10;
  }
  (**(code **)(*(int *)this + 0xf4))(uVar1);
  ExceptionList = local_10;
  return;
}


// ==== 1101a4df Catch@1101a4df

void Catch_1101a4df(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101a4f3 Catch@1101a4f3

void Catch_1101a4f3(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WProperties__OnActivate_1106db20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101a540 FUN_1101a540

void __thiscall FUN_1101a540(void *this,ulong param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060f50;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  WWindow::OnSize(this,param_1,param_2,param_3);
  if (*(int *)((int)this + 0x48) != 0) {
    (**(code **)(*(int *)this + 0xf4))(0);
    InvalidateRect(*(HWND *)((int)this + 0x48),(RECT *)0x0,0);
    (**(code **)(*(int *)this + 0xf0))();
    (**(code **)(*(int *)this + 0xf4))(1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1101a5d3 Catch@1101a5d3

void Catch_1101a5d3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101a5e7 Catch@1101a5e7

void Catch_1101a5e7(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WProperties__OnSize_1106db5c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101a640 FUN_1101a640

void __fastcall FUN_1101a640(WWindow *param_1)

{
  BOOL BVar1;
  HDC hDC;
  tagPAINTSTRUCT local_7c;
  LONG local_30;
  RECT local_2c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060f60;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff78;
  local_8 = 0;
  ExceptionList = &local_10;
  BVar1 = GetUpdateRect(*(HWND *)(param_1 + 4),(LPRECT)0x0,0);
  if (BVar1 != 0) {
    hDC = BeginPaint(*(HWND *)(param_1 + 4),&local_7c);
    WWindow::GetClientRect(param_1);
    WWindow::GetClientRect(param_1 + 0x44);
    local_2c.top = local_30;
    FillRect(hDC,&local_2c,(HBRUSH)0x10);
    EndPaint(*(HWND *)(param_1 + 4),&local_7c);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1101a6dc Catch@1101a6dc

void Catch_1101a6dc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


// ==== 1101a6f0 Catch@1101a6f0

void Catch_1101a6f0(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WProperties__OnPaint_1106db8c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101a740 FUN_1101a740

void __thiscall FUN_1101a740(void *this,WListBox *param_1,int param_2,int param_3)

{
  WListBox *this_00;
  int iVar1;
  FTreeItem *pFVar2;
  int *piVar3;
  undefined1 local_34 [24];
  int local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060f70;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  this_00 = (WListBox *)((int)this + 8);
  if (param_1 == this_00) {
    ExceptionList = &local_10;
    local_18 = this;
    iVar1 = WListBox::ItemFromPoint(this_00,param_2,param_3);
    if (-1 < iVar1) {
      WListBox::SetCurrent(this_00,iVar1,0);
      pFVar2 = WPropertiesBase::GetListItem((WPropertiesBase *)((int)local_18 + -0x3c),iVar1);
      piVar3 = (int *)(**(code **)(*(int *)pFVar2 + 0x24))(local_34);
      local_18 = (void *)param_3;
      local_1c = param_2 - *piVar3;
      (**(code **)(*(int *)pFVar2 + 0x38))(local_1c,param_3 - piVar3[1]);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1101a7e3 Catch@1101a7e3

void Catch_1101a7e3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_1107a670);
}


// ==== 1101a7f7 Catch@1101a7f7

void Catch_1101a7f7(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WProperties__SnoopLeftMouseDown_1106dbc0);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101a850 FUN_1101a850

void __thiscall FUN_1101a850(void *this,WListBox *param_1,int param_2,int param_3)

{
  WListBox *this_00;
  int iVar1;
  FTreeItem *pFVar2;
  int *piVar3;
  undefined1 local_34 [24];
  int local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060f80;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  this_00 = (WListBox *)((int)this + 8);
  if (param_1 == this_00) {
    ExceptionList = &local_10;
    local_18 = this;
    iVar1 = WListBox::ItemFromPoint(this_00,param_2,param_3);
    if (-1 < iVar1) {
      WListBox::SetCurrent(this_00,iVar1,0);
      pFVar2 = WPropertiesBase::GetListItem((WPropertiesBase *)((int)local_18 + -0x3c),iVar1);
      piVar3 = (int *)(**(code **)(*(int *)pFVar2 + 0x24))(local_34);
      local_18 = (void *)param_3;
      local_1c = param_2 - *piVar3;
      (**(code **)(*(int *)pFVar2 + 0x3c))(local_1c,param_3 - piVar3[1]);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1101a8f3 Catch@1101a8f3

void Catch_1101a8f3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_1107a670);
}


// ==== 1101a907 Catch@1101a907

void Catch_1101a907(void)

{
  appUnwindf((ushort *)&DAT_11068a50,u_WProperties__SnoopRightMouseDown_1106dc10);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 1101a960 FUN_1101a960

void __thiscall FUN_1101a960(void *this,undefined4 param_1,int param_2)

{
  HWND hWnd;
  ushort uVar1;
  LPARAM lParam;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_11060f90;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_2 == 9) {
    hWnd = *(HWND *)((int)this + 0xc);
    lParam = 0;
    if (*(int *)GUnicodeOS_exref == 0) {
      ExceptionList = &local_10;
      uVar1 = GetKeyState(0x10);
      PostMessageA(hWnd,0x100,(-(uint)((uVar1 & 0x8000) != 0) & 0xfffffffe) + 0x28,lParam);
    }
    else {
      ExceptionList = &local_10;
      uVar1 = GetKeyState(0x10);
      PostMessageW(hWnd,0x100,(-(uint)((uVar1 & 0x8000) != 0) & 0xfffffffe) + 0x28,lParam);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1101a9ff Catch@1101a9ff

void Catch_1101a9ff(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_1107a670);
}


