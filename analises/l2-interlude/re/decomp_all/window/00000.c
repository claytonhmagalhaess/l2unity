// ==== 1100100a WConfigProperties::~WConfigProperties

/* public: virtual __thiscall WConfigProperties::~WConfigProperties(void) */

void __thiscall WConfigProperties::~WConfigProperties(WConfigProperties *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x100a  199  ??1WConfigProperties@@UAE@XZ */
  puStack_8 = &LAB_11063ef6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable_for_WWindow_;
  *(undefined ***)(this + 0x3c) = vftable_for_FControlSnoop_;
  uStack_4 = 1;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  FConfigItem::~FConfigItem((FConfigItem *)(this + 0xfc));
  uStack_4 = 0xffffffff;
  WProperties::~WProperties((WProperties *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1100100f WThinScrollBar::SetRange

/* public: void __thiscall WThinScrollBar::SetRange(int) */

void __thiscall WThinScrollBar::SetRange(WThinScrollBar *this,int param_1)

{
                    /* 0x100f  947  ?SetRange@WThinScrollBar@@QAEXH@Z */
  if (param_1 < 1) {
    appFailAssert(s_InMaxVal_>_0_1106f634,s___Window_cpp_1106f624,0x4de);
  }
  *(int *)(this + 0x54) = param_1;
  InvalidateRect(*(HWND *)(this + 4),(RECT *)0x0,0);
  return;
}


// ==== 11001014 WWizardPage::GetBackText

/* public: virtual unsigned short const * __thiscall WWizardPage::GetBackText(void) */

ushort * __thiscall WWizardPage::GetBackText(WWizardPage *this)

{
  ushort *puVar1;
  
                    /* 0x1014  470  ?GetBackText@WWizardPage@@UAEPBGXZ */
  puVar1 = LocalizeGeneral(s_BackButton_1106b10c,(ushort *)u_Window_1106949c,(ushort *)0x0);
  return puVar1;
}


// ==== 11001019 thunk_FUN_11013e90 thunk -> 11013e90

// ==== 1100101e FPropertyItem::FPropertyItem

/* public: __thiscall FPropertyItem::FPropertyItem(class FPropertyItem const &) */

FPropertyItem * __thiscall FPropertyItem::FPropertyItem(FPropertyItem *this,FPropertyItem *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x101e  29  ??0FPropertyItem@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110638e4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FTreeItem::FTreeItem((FTreeItem *)this,(FTreeItem *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  FString::FString((FString *)(this + 0x74),(FString *)(param_1 + 0x74));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001023 FHeaderItem::ToHSL

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class FVector __thiscall FHeaderItem::ToHSL(class FVector) */

float * __thiscall
FHeaderItem::ToHSL(undefined4 param_1,float *param_2,float param_3,float param_4,float param_5)

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
  char cStack_20;
  
                    /* 0x1023  1011  ?ToHSL@FHeaderItem@@QAE?AVFVector@@V2@@Z */
  pfVar10 = param_2;
  fVar2 = 0.0;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  if (param_5 <= param_4) {
    param_2 = (float *)param_5;
  }
  else {
    param_2 = (float *)param_4;
  }
  if ((float)param_2 <= param_3) {
    if (param_5 <= param_4) {
      param_2 = (float *)param_5;
    }
    else {
      param_2 = (float *)param_4;
    }
  }
  else {
    param_2 = (float *)param_3;
  }
  fVar1 = ROUND((float)param_2);
  cStack_20 = (char)(int)fVar1;
  cVar11 = cStack_20;
  if (param_4 <= param_5) {
    param_2 = (float *)param_5;
  }
  else {
    param_2 = (float *)param_4;
  }
  if (param_3 <= (float)param_2) {
    if (param_4 <= param_5) {
      param_2 = (float *)param_5;
    }
    else {
      param_2 = (float *)param_4;
    }
  }
  else {
    param_2 = (float *)param_3;
  }
  cStack_20 = (char)(int)ROUND((float)param_2);
  fVar3 = (float)((int)ROUND((float)param_2) & 0xff);
  fVar4 = (float)((int)fVar1 & 0xff);
  fVar1 = fVar3 - fVar4;
  fVar4 = fVar4 + fVar3;
  fVar7 = (float)_DAT_1106bf08;
  fVar8 = fVar4 / fVar7;
  pfVar10[2] = fVar8;
  if (cStack_20 == cVar11) {
    pfVar10[1] = 0.0;
  }
  else {
    fVar6 = (fVar3 - param_3) / fVar1;
    fVar5 = (fVar3 - param_4) / fVar1;
    fVar2 = (fVar3 - param_5) / fVar1;
    if (_DAT_1106bf04 < fVar8) {
      fVar4 = fVar7 - fVar4;
    }
    pfVar10[1] = fVar1 / fVar4;
    dVar9 = _DAT_1106bee8;
    if (param_3 == fVar3) {
      *pfVar10 = ((fVar2 + (float)_DAT_1106bef8) - fVar5) * (float)_DAT_1106bee8;
    }
    if (param_4 == fVar3) {
      *pfVar10 = ((fVar6 + (float)_DAT_1106bed8) - fVar2) * (float)dVar9;
    }
    if (param_5 == fVar3) {
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


// ==== 11001028 WUrlButton::GetPackageName

/* public: virtual unsigned short const * __thiscall WUrlButton::GetPackageName(void) */

ushort * __thiscall WUrlButton::GetPackageName(WUrlButton *this)

{
                    /* 0x1028  563  ?GetPackageName@WUrlButton@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 1100102d WWizardPage::GetWindowClassName

/* public: virtual void __thiscall WWizardPage::GetWindowClassName(unsigned short *) */

void __thiscall WWizardPage::GetWindowClassName(WWizardPage *this,ushort *param_1)

{
                    /* 0x102d  642  ?GetWindowClassName@WWizardPage@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WWizardPage_1106fdd4);
  return;
}


// ==== 11001032 WWindow::OnMouseHover

/* public: virtual void __thiscall WWindow::OnMouseHover(void) */

void __thiscall WWindow::OnMouseHover(WWindow *this)

{
                    /* 0x1032  786  ?OnMouseHover@WWindow@@UAEXXZ */
  return;
}


// ==== 11001037 FControlSnoop::SnoopRightMouseDown

/* public: virtual void __thiscall FControlSnoop::SnoopRightMouseDown(class WWindow *,struct FPoint)
    */

void __thiscall FControlSnoop::SnoopRightMouseDown(void)

{
                    /* 0x1037  981  ?SnoopRightMouseDown@FControlSnoop@@UAEXPAVWWindow@@UFPoint@@@Z
                        */
  return;
}


// ==== 1100103c WEditTerminal::~WEditTerminal

/* public: virtual __thiscall WEditTerminal::~WEditTerminal(void) */

void __thiscall WEditTerminal::~WEditTerminal(WEditTerminal *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x103c  207  ??1WEditTerminal@@UAE@XZ */
  puStack_8 = &LAB_11062f98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WEdit::~WEdit((WEdit *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11001041 WTimeScrollBar::OnMouseMove

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall WTimeScrollBar::OnMouseMove(unsigned long,struct FPoint) */

void __thiscall
WTimeScrollBar::OnMouseMove(WTimeScrollBar *this,undefined4 param_1,int param_3,undefined4 param_4)

{
  float fVar1;
  HWND pHVar2;
  undefined1 *puVar3;
  undefined1 auStack_30 [8];
  int iStack_28;
  float fStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1041  791  ?OnMouseMove@WTimeScrollBar@@UAEXKUFPoint@@@Z */
  puStack_c = &LAB_11061ec0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pHVar2 = GetCapture();
  if (pHVar2 == *(HWND *)(this + 4)) {
    puVar3 = auStack_30;
    WWindow::GetClientRect((WWindow *)this);
    fStack_18 = (float)(param_3 - *(int *)(this + 100));
    if (fStack_18 != 0.0) {
      fVar1 = (float)_DAT_1106f610;
      fStack_18 = *(float *)(this + 0x48) +
                  ((float)(int)fStack_18 / (float)((iStack_28 - *(int *)(this + 0x70)) + -4)) *
                  fVar1;
      *(float *)(this + 0x48) = fStack_18;
      if (fStack_18 < 0.0) {
        *(undefined4 *)(this + 0x48) = 0;
      }
      if (fVar1 < *(float *)(this + 0x48)) {
        *(undefined4 *)(this + 0x48) = _DAT_11070308;
      }
      (*(code *)**(undefined4 **)(this + 0x3c))(puVar3);
    }
    *(int *)(this + 100) = param_3;
    *(undefined4 *)(this + 0x68) = param_4;
  }
  InvalidateRect(*(HWND *)(this + 4),(RECT *)0x0,0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001046 WTimeScrollBar::WTimeScrollBar

/* public: __thiscall WTimeScrollBar::WTimeScrollBar(class WWindow *,int) */

WTimeScrollBar * __thiscall
WTimeScrollBar::WTimeScrollBar(WTimeScrollBar *this,WWindow *param_1,int param_2)

{
  HANDLE pvVar1;
  void *unaff_EBX;
  undefined4 unaff_retaddr;
  WTimeScrollBar *pWStack_28;
  WWindow *pWStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1046  156  ??0WTimeScrollBar@@QAE@PAVWWindow@@H@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062a58;
  pvStack_c = ExceptionList;
  pWStack_24 = param_1;
  ExceptionList = &pvStack_c;
  pWStack_28 = this;
  FName::FName((FName *)&pWStack_28,(ushort *)u_TimeScrollBar_11071d04,1);
  WWindow::WWindow((WWindow *)this);
  pvStack_c = (void *)0x0;
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x3c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x4c) = unaff_retaddr;
  pvVar1 = LoadImageA(hInstanceWindow,(LPCSTR)0x697a,0,0,0,0);
  *(HANDLE *)(this + 0x54) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    appFailAssert(s_hbmThumb_11071cf8,s____Inc_Window_h_1106aefc,0x487);
  }
  pvVar1 = LoadImageA(hInstanceWindow,(LPCSTR)0x697b,0,0,0,0);
  *(HANDLE *)(this + 0x58) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    appFailAssert(s_hbmLeft_11071cec,s____Inc_Window_h_1106aefc,0x488);
  }
  pvVar1 = LoadImageA(hInstanceWindow,(LPCSTR)0x697c,0,0,0,0);
  *(HANDLE *)(this + 0x5c) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    appFailAssert(s_hbmBody_11071ce0,s____Inc_Window_h_1106aefc,0x489);
  }
  pvVar1 = LoadImageA(hInstanceWindow,(LPCSTR)0x697d,0,0,0,0);
  *(HANDLE *)(this + 0x60) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    appFailAssert(s_hbmRight_11071cd4,s____Inc_Window_h_1106aefc,0x48a);
  }
  GetObjectA(*(HANDLE *)(this + 0x54),0x18,this + 0x6c);
  GetObjectA(*(HANDLE *)(this + 0x58),0x18,this + 0x84);
  GetObjectA(*(HANDLE *)(this + 0x5c),0x18,this + 0x9c);
  GetObjectA(*(HANDLE *)(this + 0x60),0x18,this + 0xb4);
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  ExceptionList = unaff_EBX;
  return this;
}


// ==== 1100104b WDialog::CenterInOwnerWindow

/* public: void __thiscall WDialog::CenterInOwnerWindow(void) */

void __thiscall WDialog::CenterInOwnerWindow(WDialog *this)

{
  int unaff_ESI;
  tagRECT tStack_20;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
                    /* 0x104b  410  ?CenterInOwnerWindow@WDialog@@QAEXXZ */
  if (*(int *)(this + 0x14) != 0) {
    GetWindowRect(*(HWND *)(this + 4),&tStack_20);
    WWindow::GetWindowRect(*(WWindow **)(this + 0x14),(int)&iStack_10);
    SetWindowPos(*(HWND *)(this + 4),(HWND)0x0,
                 (((unaff_ESI - tStack_20.top) - tStack_20.bottom) + iStack_c) / 2,
                 (((tStack_20.left - tStack_20.right) - iStack_10) + iStack_8) / 2,0,0,1);
  }
  return;
}


// ==== 11001050 WTrackBar::SetPos

/* public: void __thiscall WTrackBar::SetPos(int) */

void __thiscall WTrackBar::SetPos(WTrackBar *this,int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1050  941  ?SetPos@WTrackBar@@QAEXH@Z */
  puStack_c = &LAB_1105fcf0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0x405,1,param_1);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0x405,1,param_1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001055 FTreeItem::GetUnitIndentPixels

/* public: int __thiscall FTreeItem::GetUnitIndentPixels(void) */

int __thiscall FTreeItem::GetUnitIndentPixels(FTreeItem *this)

{
                    /* 0x1055  599  ?GetUnitIndentPixels@FTreeItem@@QAEHXZ */
  return (uint)(*(int *)(*(int *)(this + 8) + 0x40) != 0) * 4 + 8;
}


// ==== 1100105a WClassProperties::operator=

/* public: class WClassProperties & __thiscall WClassProperties::operator=(class WClassProperties
   const &) */

WClassProperties * __thiscall
WClassProperties::operator=(WClassProperties *this,WClassProperties *param_1)

{
                    /* 0x105a  263  ??4WClassProperties@@QAEAAV0@ABV0@@Z */
  WProperties::operator=((WProperties *)this,(WProperties *)param_1);
  FTreeItem::operator=((FTreeItem *)(this + 0xfc),(FTreeItem *)(param_1 + 0xfc));
  FString::operator=((FString *)(this + 0x138),(FString *)(param_1 + 0x138));
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(this + 0x148) = *(undefined4 *)(param_1 + 0x148);
  return this;
}


// ==== 1100105f thunk_FUN_1102e740 thunk -> 1102e740

// ==== 11001064 WTimeScrollBar::WTimeScrollBar

/* public: __thiscall WTimeScrollBar::WTimeScrollBar(class WTimeScrollBar const &) */

WTimeScrollBar * __thiscall
WTimeScrollBar::WTimeScrollBar(WTimeScrollBar *this,WTimeScrollBar *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1064  155  ??0WTimeScrollBar@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062a78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow::WWindow((WWindow *)this,(WWindow *)param_1);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x3c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001069 WItemBox::WItemBox

/* public: __thiscall WItemBox::WItemBox(class WItemBox const &) */

WItemBox * __thiscall WItemBox::WItemBox(WItemBox *this,WItemBox *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1069  96  ??0WItemBox@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063698;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WListBox::WListBox((WListBox *)this,(WListBox *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100106e thunk_FUN_1102e800 thunk -> 1102e800

// ==== 11001073 FPropertyItem::OnArrayEmpty

/* public: void __thiscall FPropertyItem::OnArrayEmpty(void) */

void __thiscall FPropertyItem::OnArrayEmpty(FPropertyItem *this)

{
  FArray *this_00;
  UObject *pUVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1073  686  ?OnArrayEmpty@FPropertyItem@@QAEXXZ */
  puStack_c = &LAB_11060d20;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  this_00 = (FArray *)(**(code **)(*(int *)this + 0x68))(this,1);
  if (this_00 != (FArray *)0x0) {
    pUVar1 = thunk_FUN_110140d0(*(UObject **)(this + 0x3c));
    (**(code **)(*(int *)this + 0x50))();
    FArray::Empty(this_00,*(int *)(*(int *)(pUVar1 + 0x78) + 0x44),0);
    (**(code **)(*(int *)this + 0x54))();
    (**(code **)(*(int *)this + 0x6c))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001078 WThinScrollBar::OnLeftButtonDown

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall WThinScrollBar::OnLeftButtonDown(void) */

void __thiscall WThinScrollBar::OnLeftButtonDown(WThinScrollBar *this)

{
  float fVar1;
  BOOL BVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 auStack_2c [4];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1078  770  ?OnLeftButtonDown@WThinScrollBar@@UAEXXZ */
  puStack_c = &LAB_11062210;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  BVar2 = IsWindowEnabled(*(HWND *)(this + 4));
  if (BVar2 == 0) {
    ExceptionList = pvStack_10;
    return;
  }
  piVar5 = &iStack_24;
  WWindow::GetCursorPos((WWindow *)this);
  *(int *)(this + 0x5c) = iStack_24;
  *(int *)(this + 0x60) = iStack_20;
  puVar4 = auStack_2c;
  GetThumbRect(this);
  iVar3 = thunk_FUN_11024c60(auStack_2c,iStack_24,iStack_20);
  if (iVar3 == 0) {
    *(HBRUSH__ **)(this + 0x58) = hBrushCyanLow;
    if (iStack_20 < iStack_28) {
      fVar1 = *(float *)(this + 0x48) - (float)_DAT_1106c3b0;
    }
    else {
      fVar1 = *(float *)(this + 0x48) + (float)_DAT_1106c3b0;
    }
    *(float *)(this + 0x48) = fVar1;
    if (*(float *)(this + 0x48) < 0.0) {
      *(undefined4 *)(this + 0x48) = 0;
    }
    if ((float)_DAT_1106f610 < *(float *)(this + 0x4c) + *(float *)(this + 0x48)) {
      *(float *)(this + 0x48) = (float)_DAT_1106f610 - *(float *)(this + 0x4c);
    }
    (*(code *)**(undefined4 **)(this + 0x3c))(puVar4,piVar5);
    ExceptionList = pvStack_10;
    return;
  }
  *(HBRUSH__ **)(this + 0x58) = hBrushCyanHighlight;
  SetCapture(*(HWND *)(this + 4));
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100107d WWindow::OnClose

/* public: virtual int __thiscall WWindow::OnClose(void) */

int __thiscall WWindow::OnClose(WWindow *this)

{
  HWND hWnd;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x107d  700  ?OnClose@WWindow@@UAEHXZ */
  puStack_c = &LAB_11061a30;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  hWnd = *(HWND *)(this + 4);
  if (((byte)this[0x10] & 2) == 0) {
    if (hWnd != (HWND)0x0) {
      ExceptionList = &pvStack_10;
      DestroyWindow(hWnd);
      *(undefined4 *)(this + 4) = 0;
    }
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(*(int *)(this + 0x14) + 4),0x221,(WPARAM)hWnd,0);
  }
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 11001082 WSplitter::operator=

/* public: class WSplitter & __thiscall WSplitter::operator=(class WSplitter const &) */

WSplitter * __thiscall WSplitter::operator=(WSplitter *this,WSplitter *param_1)

{
                    /* 0x1082  289  ??4WSplitter@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  return this;
}


// ==== 11001087 WSplitter::~WSplitter

/* public: virtual __thiscall WSplitter::~WSplitter(void) */

void __thiscall WSplitter::~WSplitter(WSplitter *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1087  223  ??1WSplitter@@UAE@XZ */
  puStack_8 = &LAB_11064268;
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


// ==== 11001091 thunk_FUN_1102aac0 thunk -> 1102aac0

// ==== 11001096 FTreeItem::GetIndent

/* public: int __thiscall FTreeItem::GetIndent(void) */

int __thiscall FTreeItem::GetIndent(FTreeItem *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1096  510  ?GetIndent@FTreeItem@@QAEHXZ */
  puStack_c = &LAB_11060340;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iVar2 = 0;
  iVar3 = *(int *)(this + 0xc);
  ExceptionList = &pvStack_10;
  while( true ) {
    iVar1 = (**(code **)(**(int **)(this + 8) + 0xe8))();
    if (iVar3 == iVar1) break;
    iVar2 = iVar2 + 1;
    iVar3 = *(int *)(iVar3 + 0xc);
  }
  ExceptionList = pvStack_10;
  return iVar2;
}


// ==== 1100109b WTabControl::GetlParam

/* public: int __thiscall WTabControl::GetlParam(int) */

int __thiscall WTabControl::GetlParam(WTabControl *this,int param_1)

{
  undefined4 auStack_38 [6];
  int iStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x109b  644  ?GetlParam@WTabControl@@QAEHH@Z */
  puStack_c = &LAB_1105f960;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffbc;
  uStack_8 = 0;
  auStack_38[0] = 8;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0x133c,param_1,(LPARAM)auStack_38);
  }
  else {
    ExceptionList = &pvStack_10;
    puStack_14 = &stack0xffffffbc;
    SendMessageW(*(HWND *)(this + 4),0x133c,param_1,(LPARAM)auStack_38);
  }
  ExceptionList = pvStack_10;
  return iStack_20;
}


// ==== 110010a0 FPropertyItemBase::Collapse

/* public: virtual void __thiscall FPropertyItemBase::Collapse(void) */

void __thiscall FPropertyItemBase::Collapse(FPropertyItemBase *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x10a0  421  ?Collapse@FPropertyItemBase@@UAEXXZ */
  puStack_c = &LAB_11061250;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FTreeItem::Collapse((FTreeItem *)this);
  FTreeItem::EmptyChildren((FTreeItem *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110010aa FObjectsItem::Eval

/* public: int __thiscall FObjectsItem::Eval(class FString,float *) */

int __thiscall FObjectsItem::Eval(void)

{
  int iVar1;
  FString *pFVar2;
  FOutputDevice *extraout_ECX;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *this;
  int iVar3;
  undefined4 *in_stack_00000010;
  wchar_t *pwVar4;
  FString aFStack_40 [12];
  FString aFStack_34 [20];
  int iStack_20;
  FObjectsItem *pFStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x10aa  446  ?Eval@FObjectsItem@@QAEHVFString@@PAM@Z */
  puStack_c = &LAB_1106128b;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffb4;
  iVar3 = 0;
  uStack_8._0_1_ = 1;
  uStack_8._1_3_ = 0;
  iStack_18 = 0;
  ExceptionList = &pvStack_10;
  while( true ) {
    iStack_20 = iVar3;
    iVar1 = FString::Len((FString *)&stack0x00000004);
    if (iVar1 <= iVar3) break;
    pFVar2 = (FString *)FString::Mid((FString *)&stack0x00000004,(int)aFStack_34,iVar3);
    uStack_8._0_1_ = 2;
    iVar1 = FString::operator==(pFVar2,(ushort *)&DAT_1106cc74);
    uStack_8._0_1_ = 1;
    FString::~FString(aFStack_34);
    if (iVar1 != 0) {
      iStack_18 = iStack_18 + 1;
    }
    pFVar2 = (FString *)FString::Mid((FString *)&stack0x00000004,(int)aFStack_40,iVar3);
    uStack_8._0_1_ = 3;
    iVar1 = FString::operator==(pFVar2,(ushort *)&DAT_1106cc70);
    uStack_8._0_1_ = 1;
    FString::~FString(aFStack_40);
    if (iVar1 != 0) {
      iStack_18 = iStack_18 + -1;
    }
    iVar3 = iVar3 + 1;
  }
  if (iStack_18 == 0) {
    iVar3 = SubEval(pFStack_1c,(FString *)&stack0x00000004,(float *)&pFStack_1c,0);
    if (iVar3 != 0) goto LAB_1101d6c0;
    if (*(int *)GLog_exref != 0) {
      pwVar4 = u_Expression_Error___Error_in_expr_1106e548;
      this = extraout_ECX_00;
      goto LAB_1101d6af;
    }
  }
  else if (*(int *)GLog_exref != 0) {
    pwVar4 = u_Expression_Error___Mismatched_br_1106e5a8;
    this = extraout_ECX;
LAB_1101d6af:
    FOutputDevice::Logf2(this,*(ushort **)GLog_exref,pwVar4);
  }
  pFStack_1c = (FObjectsItem *)0x0;
LAB_1101d6c0:
  *in_stack_00000010 = pFStack_1c;
  uStack_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 110010af FPropertyItem::OnPickColorButton

/* public: void __thiscall FPropertyItem::OnPickColorButton(void) */

void __thiscall FPropertyItem::OnPickColorButton(FPropertyItem *this)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x10af  809  ?OnPickColorButton@FPropertyItem@@QAEXXZ */
  puStack_c = &LAB_11060510;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iVar1 = *(int *)(this + 8);
  ExceptionList = &pvStack_10;
  if (*(int *)(iVar1 + 0x18) != 0) {
    ExceptionList = &pvStack_10;
    (**(code **)(**(int **)(iVar1 + 0x18) + 0xc))(iVar1,u_USECOLOR_1106bd30);
  }
  (**(code **)(*(int *)this + 0x50))();
  (**(code **)(*(int *)this + 0x28))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 110010b4 WWindow::GetLength

/* public: virtual int __thiscall WWindow::GetLength(void) */

int __thiscall WWindow::GetLength(WWindow *this)

{
  LRESULT LVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x10b4  516  ?GetLength@WWindow@@UAEHXZ */
  puStack_c = &LAB_11061e40;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 4) == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert(&DAT_11068b4c,s___Window_cpp_1106f624,0x316);
  }
  if (*(int *)GUnicodeOS_exref != 0) {
    LVar1 = SendMessageW(*(HWND *)(this + 4),0xe,0,0);
    ExceptionList = pvStack_10;
    return LVar1;
  }
  LVar1 = SendMessageA(*(HWND *)(this + 4),0xe,0,0);
  ExceptionList = pvStack_10;
  return LVar1;
}


// ==== 110010b9 WTrackBar::WTrackBar

/* public: __thiscall WTrackBar::WTrackBar(void) */

WTrackBar * __thiscall WTrackBar::WTrackBar(WTrackBar *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x10b9  162  ??0WTrackBar@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063478;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x44) = FDelegate::vftable;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined ***)(this + 0x50) = FDelegate::vftable;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110010be WPictureButton::operator=

/* public: class WPictureButton & __thiscall WPictureButton::operator=(class WPictureButton const &)
    */

WPictureButton * __thiscall WPictureButton::operator=(WPictureButton *this,WPictureButton *param_1)

{
                    /* 0x10be  281  ??4WPictureButton@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  FString::operator=((FString *)(this + 0x74),(FString *)(param_1 + 0x74));
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  return this;
}


// ==== 110010c3 WListView::GetPackageName

/* public: virtual unsigned short const * __thiscall WListView::GetPackageName(void) */

ushort * __thiscall WListView::GetPackageName(WListView *this)

{
                    /* 0x10c3  541  ?GetPackageName@WListView@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 110010c8 WTerminal::GetWindowClassName

/* public: virtual void __thiscall WTerminal::GetWindowClassName(unsigned short *) */

void __thiscall WTerminal::GetWindowClassName(WTerminal *this,ushort *param_1)

{
                    /* 0x10c8  632  ?GetWindowClassName@WTerminal@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WTerminal_1106fc60);
  return;
}


// ==== 110010cd thunk_FUN_11024db0 thunk -> 11024db0

// ==== 110010d2 thunk_FUN_110382b0 thunk -> 110382b0

// ==== 110010d7 FObjectsItem::Serialize

/* public: virtual void __thiscall FObjectsItem::Serialize(class FArchive &) */

void __thiscall FObjectsItem::Serialize(FObjectsItem *this,FArchive *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x10d7  910  ?Serialize@FObjectsItem@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_11061260;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FPropertyItemBase::Serialize((FPropertyItemBase *)this,param_1);
  thunk_FUN_1101bd10(param_1,(FArray *)(this + 0x58));
  ExceptionList = pvStack_10;
  return;
}


// ==== 110010dc WColorButton::WColorButton

/* public: __thiscall WColorButton::WColorButton(void) */

WColorButton * __thiscall WColorButton::WColorButton(WColorButton *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x10dc  63  ??0WColorButton@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062938;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WButton::WButton((WButton *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110010e1 FConfigItem::GetId

/* public: virtual unsigned __int64 __thiscall FConfigItem::GetId(void)const  */

__uint64 __thiscall FConfigItem::GetId(FConfigItem *this)

{
                    /* 0x10e1  506  ?GetId@FConfigItem@@UBE_KXZ */
  return CONCAT44(((int)this >> 0x1f) + 3,this);
}


// ==== 110010e6 LoadFileToBitmap

/* struct HBITMAP__ * __cdecl LoadFileToBitmap(unsigned short const *,int &,int &) */

HBITMAP__ * __cdecl LoadFileToBitmap(ushort *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  HDC hdc;
  uchar *puVar3;
  HBITMAP pHVar4;
  TArray<unsigned_char> aTStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x10e6  669  ?LoadFileToBitmap@@YAPAUHBITMAP__@@PBGAAH1@Z */
  puStack_c = &LAB_110619e9;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  TArray<unsigned_char>::TArray<unsigned_char>(aTStack_28);
  iStack_8._0_1_ = 1;
  iVar2 = appLoadFileToArray(aTStack_28,param_1,*(FFileManager **)GFileManager_exref);
  if (iVar2 != 0) {
    hdc = GetDC((HWND)0x0);
    puVar3 = TArray<unsigned_char>::operator()(aTStack_28,0);
    bVar1 = puVar3[0x1c];
    *param_2 = *(int *)(puVar3 + 0x12);
    *param_3 = *(int *)(puVar3 + 0x16);
    pHVar4 = CreateDIBitmap(hdc,(BITMAPINFOHEADER *)(puVar3 + 0xe),4,
                            puVar3 + (1 << (bVar1 & 0x1f)) * 4 + 0x36,(BITMAPINFO *)(puVar3 + 0xe),0
                           );
    ReleaseDC((HWND)0x0,hdc);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    TArray<unsigned_char>::~TArray<unsigned_char>(aTStack_28);
    ExceptionList = pvStack_10;
    return pHVar4;
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  TArray<unsigned_char>::~TArray<unsigned_char>(aTStack_28);
  ExceptionList = pvStack_10;
  return (HBITMAP__ *)0x0;
}


// ==== 110010eb WColorButton::GetColor

/* public: void __thiscall WColorButton::GetColor(int &,int &,int &) */

void __thiscall WColorButton::GetColor(WColorButton *this,int *param_1,int *param_2,int *param_3)

{
                    /* 0x10eb  487  ?GetColor@WColorButton@@QAEXAAH00@Z */
  *param_1 = *(int *)(this + 0x94);
  *param_2 = *(int *)(this + 0x98);
  *param_3 = *(int *)(this + 0x9c);
  return;
}


// ==== 110010f5 WSplitterPane::OnPaint

/* public: virtual void __thiscall WSplitterPane::OnPaint(void) */

void __thiscall WSplitterPane::OnPaint(WSplitterPane *this)

{
  HDC hDC;
  HBRUSH hbr;
  tagPAINTSTRUCT tStack_6c;
  RECT RStack_2c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x10f5  802  ?OnPaint@WSplitterPane@@UAEXXZ */
  puStack_c = &LAB_11061fe0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff88;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  hDC = BeginPaint(*(HWND *)(this + 4),&tStack_6c);
  WWindow::GetClientRect((WWindow *)this);
  hbr = GetSysColorBrush(0xf);
  FillRect(hDC,&RStack_2c,hbr);
  EndPaint(*(HWND *)(this + 4),&tStack_6c);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110010ff thunk_FUN_11013c90 thunk -> 11013c90

// ==== 11001104 WPropertyPage::GetID

/* public: int __thiscall WPropertyPage::GetID(void) */

int __thiscall WPropertyPage::GetID(WPropertyPage *this)

{
                    /* 0x1104  504  ?GetID@WPropertyPage@@QAEHXZ */
  return *(int *)(this + 0x60);
}


// ==== 11001109 FObjectsItem::Expand

/* public: virtual void __thiscall FObjectsItem::Expand(void) */

void __thiscall FObjectsItem::Expand(FObjectsItem *this)

{
  FName *pFVar1;
  UObject *pUVar2;
  int iVar3;
  FPropertyItem *pFVar4;
  undefined4 *puVar5;
  FCategoryItem *pFVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  int iVar9;
  int iStack_58;
  int iStack_54;
  UObject *pUStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  UObject *pUStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x1109  452  ?Expand@FObjectsItem@@UAEXXZ */
  puStack_c = &LAB_11061920;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff9c;
  uStack_8 = 0;
  uStack_2c = *(undefined4 *)(this + 0x18);
  if (*(int *)(this + 0x50) == 0) {
    ExceptionList = &pvStack_10;
    thunk_FUN_1101c650(&iStack_54,*(int *)(this + 0x4c));
    while (pUVar2 = pUStack_50, pUStack_50 != (UObject *)0x0) {
      iVar9 = (**(code **)(*(int *)this + 0x78))(*(undefined4 *)(pUStack_50 + 0x48));
      if (iVar9 != 0) {
        iVar9 = thunk_FUN_1101be50((void *)(*(int *)(this + 0x4c) + 0x500),(FName *)(pUVar2 + 0x4c))
        ;
        if (iVar9 == -1) {
          pUVar7 = (UClass *)(**(code **)(*(int *)pUVar2 + 0x74))();
          pUVar8 = UObject::StaticClass();
          if (pUVar7 != pUVar8) {
            pFVar4 = (FPropertyItem *)thunk_FUN_110115b0(0x80,u_FPropertyItem_1106f11c);
            if (pFVar4 == (FPropertyItem *)0x0) {
              uStack_28 = 0;
            }
            else {
              puVar5 = (undefined4 *)UObject::GetFName(pUVar2);
              uStack_28 = FPropertyItem::FPropertyItem
                                    (pFVar4,*(undefined4 *)(this + 8),this,pUVar2,*puVar5,
                                     *(undefined4 *)(pUVar2 + 0x54),0xffffffff,0x29a);
            }
            thunk_FUN_1101bf00(this + 0x30,&uStack_28);
          }
        }
      }
      pUStack_50 = *(UObject **)(pUVar2 + 0x38);
      thunk_FUN_11015cb0(&iStack_54);
    }
  }
  else {
    if ((*(int *)(this + 0x4c) == 0) || ((*(uint *)(*(int *)(this + 0x4c) + 0x4a4) & 0x2000) == 0))
    {
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xffffff9c;
      thunk_FUN_11015a00((FArray *)&iStack_58);
      uStack_8 = CONCAT31(uStack_8._1_3_,2);
      thunk_FUN_1101c650(&iStack_4c,*(int *)(this + 0x4c));
      while (iVar9 = iStack_48, iStack_48 != 0) {
        iVar3 = (**(code **)(*(int *)this + 0x78))(*(undefined4 *)(iStack_48 + 0x48));
        if (iVar3 != 0) {
          pFVar1 = (FName *)(iVar9 + 0x4c);
          iVar3 = thunk_FUN_1101be50((void *)(*(int *)(this + 0x4c) + 0x500),pFVar1);
          if (iVar3 == -1) {
            thunk_FUN_1101db20(&iStack_58,pFVar1);
          }
        }
        iStack_48 = *(int *)(iVar9 + 0x38);
        thunk_FUN_11015cb0(&iStack_4c);
      }
      for (iVar9 = 0; iStack_24 = iVar9, iVar9 < iStack_54; iVar9 = iVar9 + 1) {
        pFVar6 = (FCategoryItem *)thunk_FUN_110115b0(0x44,u_FCategoryItem_1106f1f8);
        if (pFVar6 == (FCategoryItem *)0x0) {
          uStack_20 = 0;
        }
        else {
          uStack_20 = FCategoryItem::FCategoryItem
                                (pFVar6,*(undefined4 *)(this + 8),this,*(undefined4 *)(this + 0x4c),
                                 *(undefined4 *)(iStack_58 + iVar9 * 4),1);
        }
        thunk_FUN_1101bf00(this + 0x30,&uStack_20);
      }
    }
    else {
      ExceptionList = &pvStack_10;
      *(undefined4 *)(this + 0x18) = 0;
      puStack_14 = &stack0xffffff9c;
      thunk_FUN_11015a00((FArray *)&iStack_58);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      thunk_FUN_1101c650(&iStack_3c,*(int *)(this + 0x4c));
      while (iVar9 = iStack_38, iStack_38 != 0) {
        pFVar1 = (FName *)(iStack_38 + 0x4c);
        iVar3 = thunk_FUN_1101be50((void *)(*(int *)(this + 0x4c) + 0x500),pFVar1);
        if (iVar3 == -1) {
          thunk_FUN_1101db20(&iStack_58,pFVar1);
        }
        iStack_38 = *(int *)(iVar9 + 0x38);
        thunk_FUN_11015cb0(&iStack_3c);
      }
      for (iVar9 = 0; iStack_18 = iVar9, iVar9 < iStack_54; iVar9 = iVar9 + 1) {
        thunk_FUN_1101c650(&iStack_44,*(int *)(this + 0x4c));
        while (pUVar2 = pUStack_40, pUStack_40 != (UObject *)0x0) {
          iVar3 = FName::operator==((FName *)(pUStack_40 + 0x4c),(FName *)(iStack_58 + iVar9 * 4));
          if (iVar3 != 0) {
            iVar3 = (**(code **)(*(int *)this + 0x78))(*(undefined4 *)(pUVar2 + 0x48));
            if (iVar3 != 0) {
              pFVar4 = (FPropertyItem *)thunk_FUN_110115b0(0x80,u_FPropertyItem_1106f11c);
              if (pFVar4 == (FPropertyItem *)0x0) {
                uStack_1c = 0;
              }
              else {
                puVar5 = (undefined4 *)UObject::GetFName(pUVar2);
                uStack_1c = FPropertyItem::FPropertyItem
                                      (pFVar4,*(undefined4 *)(this + 8),this,pUVar2,*puVar5,
                                       *(undefined4 *)(pUVar2 + 0x54),0xffffffff,0x29a);
              }
              thunk_FUN_1101bf00(this + 0x30,&uStack_1c);
              iVar9 = iStack_18;
            }
          }
          pUStack_40 = *(UObject **)(pUVar2 + 0x38);
          thunk_FUN_11015cb0(&iStack_44);
        }
      }
    }
    uStack_8 = uStack_8 & 0xffffff00;
    thunk_FUN_1101c590((FArray *)&iStack_58);
  }
  FTreeItem::Expand((FTreeItem *)this);
  *(undefined4 *)(this + 0x18) = uStack_2c;
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100110e WComboBox::~WComboBox

/* public: virtual __thiscall WComboBox::~WComboBox(void) */

void __thiscall WComboBox::~WComboBox(WComboBox *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x110e  198  ??1WComboBox@@UAE@XZ */
  puStack_8 = &LAB_11060918;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WControl::~WControl((WControl *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11001113 FPropertyItem::OnArrayDelete

/* public: void __thiscall FPropertyItem::OnArrayDelete(void) */

void __thiscall FPropertyItem::OnArrayDelete(FPropertyItem *this)

{
  int *piVar1;
  UProperty *this_00;
  int iVar2;
  FArray *this_01;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1113  685  ?OnArrayDelete@FPropertyItem@@QAEXXZ */
  puStack_c = &LAB_11060500;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  this_01 = (FArray *)(**(code **)(*(int *)this + 0x68))(*(undefined4 *)(this + 0xc),1);
  if (this_01 != (FArray *)0x0) {
    piVar1 = *(int **)(this + 0xc);
    this_00 = *(UProperty **)(this + 0x3c);
    iVar2 = *(int *)(this + 0x44);
    (**(code **)(*piVar1 + 0x50))();
    iVar3 = UProperty::GetSize(this_00);
    FArray::Remove(this_01,iVar2,1,iVar3);
    (**(code **)(*piVar1 + 0x54))();
    (**(code **)(*piVar1 + 0x6c))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001118 WWizardPage::GetNext

/* public: virtual class WWizardPage * __thiscall WWizardPage::GetNext(void) */

WWizardPage * __thiscall WWizardPage::GetNext(WWizardPage *this)

{
                    /* 0x1118  521  ?GetNext@WWizardPage@@UAEPAV1@XZ */
  return (WWizardPage *)0x0;
}


// ==== 11001127 WPropertyPage::WPropertyPage

/* public: __thiscall WPropertyPage::WPropertyPage(class WPropertyPage const &) */

WPropertyPage * __thiscall WPropertyPage::WPropertyPage(WPropertyPage *this,WPropertyPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1127  125  ??0WPropertyPage@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1106447a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow::WWindow((WWindow *)this,(WWindow *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  thunk_FUN_1102a950(this + 0x3c,(int *)(param_1 + 0x3c));
  uStack_4._0_1_ = 1;
  thunk_FUN_1102aa10(this + 0x48,(int *)(param_1 + 0x48));
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  FString::FString((FString *)(this + 0x54),(FString *)(param_1 + 0x54));
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100112c FClassItem::FClassItem

/* public: __thiscall FClassItem::FClassItem(class WPropertiesBase *,class FTreeItem *,unsigned
   long,unsigned short const *,class UClass *) */

FClassItem * __thiscall
FClassItem::FClassItem
          (FClassItem *this,WPropertiesBase *param_1,FTreeItem *param_2,ulong param_3,
          ushort *param_4,UClass *param_5)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x112c  4
                       ??0FClassItem@@QAE@PAVWPropertiesBase@@PAVFTreeItem@@KPBGPAVUClass@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063ce8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FPropertyItemBase::FPropertyItemBase((FPropertyItemBase *)this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  *(UClass **)(this + 0x4c) = param_5;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001131 FWindowAnchor::FWindowAnchor

/* public: __thiscall FWindowAnchor::FWindowAnchor(void) */

FWindowAnchor * __thiscall FWindowAnchor::FWindowAnchor(FWindowAnchor *this)

{
                    /* 0x1131  44  ??0FWindowAnchor@@QAE@XZ */
  return this;
}


// ==== 11001136 WTerminal::WTerminal

/* public: __thiscall WTerminal::WTerminal(void) */

WTerminal * __thiscall WTerminal::WTerminal(WTerminal *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1136  149  ??0WTerminal@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063033;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WTerminalBase::WTerminalBase((WTerminalBase *)this);
  uStack_4 = 0;
  FOutputDevice::FOutputDevice((FOutputDevice *)(this + 0x3c));
  *(undefined ***)this = vftable_for_WTerminalBase_;
  *(undefined ***)(this + 0x3c) = vftable_for_FOutputDevice_;
  WEditTerminal::WEditTerminal((WEditTerminal *)(this + 0x40),(WTerminalBase *)0x0);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001140 WComboBox::GetCount

/* public: virtual int __thiscall WComboBox::GetCount(void) */

int __thiscall WComboBox::GetCount(WComboBox *this)

{
  LRESULT LVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1140  490  ?GetCount@WComboBox@@UAEHXZ */
  puStack_c = &LAB_1105fb60;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &pvStack_10;
    LVar1 = SendMessageW(*(HWND *)(this + 4),0x146,0,0);
    ExceptionList = pvStack_10;
    return LVar1;
  }
  ExceptionList = &pvStack_10;
  LVar1 = SendMessageA(*(HWND *)(this + 4),0x146,0,0);
  ExceptionList = pvStack_10;
  return LVar1;
}


// ==== 11001145 FNewObjectItem::OnItemKillFocus

/* public: virtual void __thiscall FNewObjectItem::OnItemKillFocus(int) */

void __thiscall FNewObjectItem::OnItemKillFocus(FNewObjectItem *this,int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  FString *pFVar4;
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1145  748  ?OnItemKillFocus@FNewObjectItem@@UAEXH@Z */
  puStack_c = &LAB_11061219;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar2 = &stack0xffffffcc;
  if (param_1 == 0) {
    iVar1 = **(int **)(this + 0x40);
    ExceptionList = &pvStack_10;
    uVar3 = (**(code **)(iVar1 + 0xfc))();
    pFVar4 = (FString *)(**(code **)(iVar1 + 0xec))(aFStack_28,uVar3);
    iStack_8._0_1_ = 1;
    FString::operator=((FString *)(this + 0x48),pFVar4);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    FString::~FString(aFStack_28);
    puVar2 = puStack_14;
  }
  puStack_14 = puVar2;
  if (*(int **)(this + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x40) + 4))(1);
  }
  *(undefined4 *)(this + 0x40) = 0;
  if (*(int **)(this + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x44) + 4))(1);
  }
  *(undefined4 *)(this + 0x44) = 0;
  FHeaderItem::OnItemKillFocus((FHeaderItem *)this,param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100114a CRect::CRect thunk -> 11006aa0

// ==== 1100114f thunk_FUN_1102e870 thunk -> 1102e870

// ==== 11001154 WRichEdit::StreamTextOut

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall WRichEdit::StreamTextOut(char *,int) */

void __thiscall WRichEdit::StreamTextOut(WRichEdit *this,char *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1154  986  ?StreamTextOut@WRichEdit@@QAEXPADH@Z */
  puStack_c = &LAB_1105f770;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xffffffcc;
  if (25000 < param_2) {
    ExceptionList = &pvStack_10;
    (**(code **)(**(int **)GWarn_exref + 0x10))(u_Saving_text____110690e8,1);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  DAT_1109c288 = param_1;
  DAT_1109c284 = param_2;
  _DAT_1109c280 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  puStack_20 = &LAB_110060e0;
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(*(HWND *)(this + 4),0x44a,1,(LPARAM)&uStack_28);
  }
  else {
    SendMessageW(*(HWND *)(this + 4),0x44a,1,(LPARAM)&uStack_28);
  }
  if (25000 < param_2) {
    (**(code **)(**(int **)GWarn_exref + 0x14))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100115e thunk_FUN_11014030 thunk -> 11014030

// ==== 11001163 FUDNHelpTopic::operator=

/* public: class FUDNHelpTopic & __thiscall FUDNHelpTopic::operator=(class FUDNHelpTopic const &) */

FUDNHelpTopic * __thiscall FUDNHelpTopic::operator=(FUDNHelpTopic *this,FUDNHelpTopic *param_1)

{
                    /* 0x1163  255  ??4FUDNHelpTopic@@QAEAAV0@ABV0@@Z */
  FString::operator=((FString *)this,(FString *)param_1);
  FString::operator=((FString *)(this + 0xc),(FString *)(param_1 + 0xc));
  return this;
}


// ==== 11001168 WClassProperties::WClassProperties

/* public: __thiscall WClassProperties::WClassProperties(void) */

WClassProperties * __thiscall WClassProperties::WClassProperties(WClassProperties *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1168  60  ??0WClassProperties@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063dd6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WProperties::WProperties((WProperties *)this);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_WWindow_;
  *(undefined ***)(this + 0x3c) = vftable_for_FControlSnoop_;
  FClassItem::FClassItem((FClassItem *)(this + 0xfc));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001172 WListBox::InsertItem

/* public: void __thiscall WListBox::InsertItem(int,void const *) */

void __thiscall WListBox::InsertItem(WListBox *this,int param_1,void *param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1172  649  ?InsertItem@WListBox@@QAEXHPBX@Z */
  puStack_c = &LAB_1105fee0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0x181,param_1,(LPARAM)param_2);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0x181,param_1,(LPARAM)param_2);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001177 WThinScrollBar::OnSetCursor

/* public: virtual int __thiscall WThinScrollBar::OnSetCursor(void) */

int __thiscall WThinScrollBar::OnSetCursor(WThinScrollBar *this)

{
  HCURSOR hCursor;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1177  825  ?OnSetCursor@WThinScrollBar@@UAEHXZ */
  puStack_c = &LAB_11061a80;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    hCursor = LoadCursorA(hInstanceWindow,(LPCSTR)0x5a4);
  }
  else {
    ExceptionList = &pvStack_10;
    hCursor = LoadCursorW(hInstanceWindow,(LPCWSTR)0x5a4);
  }
  SetCursor(hCursor);
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 11001181 WToolTip::GetPackageName

/* public: virtual unsigned short const * __thiscall WToolTip::GetPackageName(void) */

ushort * __thiscall WToolTip::GetPackageName(WToolTip *this)

{
                    /* 0x1181  559  ?GetPackageName@WToolTip@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11001186 WWindow::Show

/* public: virtual void __thiscall WWindow::Show(int) */

void __thiscall WWindow::Show(WWindow *this,int param_1)

{
  BOOL BVar1;
  int nCmdShow;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1186  971  ?Show@WWindow@@UAEXH@Z */
  puStack_c = &LAB_11061a00;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(this + 0x2c) = param_1;
  if (param_1 == 0) {
    nCmdShow = 0;
  }
  else {
    BVar1 = IsIconic(*(HWND *)(this + 4));
    nCmdShow = (-(uint)(BVar1 != 0) & 4) + 5;
  }
  ShowWindow(*(HWND *)(this + 4),nCmdShow);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100118b WDragInterceptor::WDragInterceptor

/* public: __thiscall WDragInterceptor::WDragInterceptor(class WWindow *,struct FPoint,struct
   FRect,struct FPoint) */

WDragInterceptor * __thiscall
WDragInterceptor::WDragInterceptor
          (WDragInterceptor *this,undefined4 param_1,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  void *unaff_ESI;
  undefined4 unaff_retaddr;
  WDragInterceptor *pWStack_1c;
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x118b  86  ??0WDragInterceptor@@QAE@PAVWWindow@@UFPoint@@UFRect@@1@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11061468;
  pvStack_c = ExceptionList;
  uStack_18 = param_1;
  ExceptionList = &pvStack_c;
  pWStack_1c = this;
  FName::FName((FName *)&pWStack_1c,0);
  WWindow::WWindow((WWindow *)this);
  *(undefined4 *)(this + 0x44) = unaff_retaddr;
  *(WDragInterceptor ***)(this + 0x48) = &pWStack_1c;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 100) = param_3;
  *(undefined4 *)(this + 0x5c) = param_7;
  *(undefined4 *)(this + 0x60) = param_8;
  *(undefined4 *)(this + 0x68) = param_4;
  *(undefined4 *)(this + 0x6c) = param_5;
  *(undefined4 *)(this + 0x70) = param_6;
  *(undefined4 *)(this + 0x74) = 1;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11001195 WWizardDialog::OnBack

/* public: virtual void __thiscall WWizardDialog::OnBack(void) */

void __thiscall WWizardDialog::OnBack(WWizardDialog *this)

{
  WWizardDialog *this_00;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1195  688  ?OnBack@WWizardDialog@@UAEXXZ */
  puStack_c = &LAB_110602b0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (1 < *(int *)(this + 0x2f0)) {
    this_00 = this + 0x2ec;
    ExceptionList = &pvStack_10;
    (**(code **)(**(int **)(*(int *)this_00 + -8 + *(int *)(this + 0x2f0) * 4) + 8))(1);
    piVar1 = (int *)thunk_FUN_11010180((int *)this_00);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
    (**(code **)(*(int *)this + 0xf4))();
    puVar2 = (undefined4 *)thunk_FUN_1100f510(this_00,0);
    iVar3 = (**(code **)(*(int *)*puVar2 + 0x108))();
    if (iVar3 == 0) {
      (**(code **)(*(int *)this + 0xf8))();
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100119a WEdit::GetPackageName

/* public: virtual unsigned short const * __thiscall WEdit::GetPackageName(void) */

ushort * __thiscall WEdit::GetPackageName(WEdit *this)

{
                    /* 0x119a  535  ?GetPackageName@WEdit@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 1100119f WTerminal::~WTerminal

/* public: virtual __thiscall WTerminal::~WTerminal(void) */

void __thiscall WTerminal::~WTerminal(WTerminal *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x119f  227  ??1WTerminal@@UAE@XZ */
  puStack_8 = &LAB_11063003;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable_for_WTerminalBase_;
  *(undefined ***)(this + 0x3c) = vftable_for_FOutputDevice_;
  uStack_4 = 1;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  WEditTerminal::~WEditTerminal((WEditTerminal *)(this + 0x40));
  uStack_4 = 0xffffffff;
  WTerminalBase::~WTerminalBase((WTerminalBase *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 110011a4 WTabControl::WTabControl

/* public: __thiscall WTabControl::WTabControl(void) */

WTabControl * __thiscall WTabControl::WTabControl(WTabControl *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x11a4  146  ??0WTabControl@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062618;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110011a9 WWindow::StaticWndProc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static long __stdcall WWindow::StaticWndProc(struct HWND__ *,unsigned int,unsigned
   int,long) */

long WWindow::StaticWndProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  LRESULT LVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x11a9  984  ?StaticWndProc@WWindow@@SGJPAUHWND__@@IIJ@Z */
  puStack_c = &LAB_11061dce;
  pvStack_10 = ExceptionList;
  iVar4 = 0;
  iStack_8 = 0;
  while ((iVar4 < DAT_1109c4fc && (*(HWND__ **)(*(int *)(__Windows + iVar4 * 4) + 4) != param_1))) {
    iVar4 = iVar4 + 1;
  }
  ExceptionList = &pvStack_10;
  if ((DAT_1109f1dc & 1) == 0) {
    DAT_1109f1dc = DAT_1109f1dc | 1;
    iStack_8._0_1_ = 1;
    iStack_8._1_3_ = 0;
    ExceptionList = &pvStack_10;
    DAT_1109f1d8 = RegisterWindowMessageW(u_QueryCancelAutoPlay_1106ff30);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
  }
  if (param_2 == DAT_1109f1d8) {
    SetWindowLongW(param_1,0,1);
    ExceptionList = pvStack_10;
    return 1;
  }
  if (iVar4 == DAT_1109c4fc) {
    if (param_2 == 0x81) {
      if (*(int *)GUnicodeOS_exref == 0) {
        uVar1 = GetWindowLongA(param_1,-0x14);
      }
      else {
        uVar1 = GetWindowLongW(param_1,-0x14);
      }
      if ((uVar1 & 0x40) == 0) {
        iVar5 = *(int *)param_4;
      }
      else {
        iVar5 = *(int *)(*(int *)param_4 + 0x20);
      }
LAB_110266ea:
      if (iVar5 == 0) {
        appFailAssert(s_WindowCreate_1106fef0,s___Window_cpp_1106f624,0x1a6);
      }
      if (*(int *)(iVar5 + 4) != 0) {
        appFailAssert(s__WindowCreate_>hWnd_1106fed8,s___Window_cpp_1106f624,0x1a7);
      }
      *(HWND__ **)(iVar5 + 4) = param_1;
      for (iVar4 = 0; iVar4 < DAT_1109c4fc; iVar4 = iVar4 + 1) {
        if (*(int *)(__Windows + iVar4 * 4) == iVar5) {
          if (iVar4 < DAT_1109c4fc) goto LAB_11026782;
          break;
        }
      }
      appFailAssert(s_i<_Windows_Num()_1106fec4,s___Window_cpp_1106f624,0x1ac);
    }
    else {
      iVar5 = param_4;
      if (param_2 == 0x110) goto LAB_110266ea;
    }
LAB_11026782:
    if (iVar4 == DAT_1109c4fc) goto LAB_11026786;
  }
  if (*(int *)GIsCriticalError_exref == 0) {
    lVar3 = (**(code **)(**(int **)(__Windows + iVar4 * 4) + 0x1c))(param_2,param_3,param_4);
    ExceptionList = pvStack_10;
    return lVar3;
  }
LAB_11026786:
  if (*(int *)GUnicodeOS_exref == 0) {
    LVar2 = DefWindowProcA(param_1,param_2,param_3,param_4);
    ExceptionList = pvStack_10;
    return LVar2;
  }
  LVar2 = DefWindowProcW(param_1,param_2,param_3,param_4);
  ExceptionList = pvStack_10;
  return LVar2;
}


// ==== 110011ae WTreeView::GetPackageName

/* public: virtual unsigned short const * __thiscall WTreeView::GetPackageName(void) */

ushort * __thiscall WTreeView::GetPackageName(WTreeView *this)

{
                    /* 0x11ae  561  ?GetPackageName@WTreeView@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 110011b3 WCheckListBox::OnDestroy

/* public: virtual void __thiscall WCheckListBox::OnDestroy(void) */

void __thiscall WCheckListBox::OnDestroy(WCheckListBox *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x11b3  716  ?OnDestroy@WCheckListBox@@UAEXXZ */
  puStack_c = &LAB_1105f7b0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::OnDestroy((WWindow *)this);
  DeleteObject(*(HGDIOBJ *)(this + 0x8c));
  DeleteObject(*(HGDIOBJ *)(this + 0x90));
  ExceptionList = pvStack_10;
  return;
}


// ==== 110011c2 thunk_FUN_11034260 thunk -> 11034260

// ==== 110011c7 FConfigItem::~FConfigItem

/* public: virtual __thiscall FConfigItem::~FConfigItem(void) */

void __thiscall FConfigItem::~FConfigItem(FConfigItem *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x11c7  180  ??1FConfigItem@@UAE@XZ */
  puStack_8 = &LAB_110617ec;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  FPreferencesInfo::~FPreferencesInfo((FPreferencesInfo *)(this + 0x3c));
  uStack_4 = 0xffffffff;
  FTreeItem::~FTreeItem((FTreeItem *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 110011cc WPropertyPage::Refresh

/* public: virtual void __thiscall WPropertyPage::Refresh(void) */

void __thiscall WPropertyPage::Refresh(WPropertyPage *this)

{
                    /* 0x11cc  891  ?Refresh@WPropertyPage@@UAEXXZ */
  return;
}


// ==== 110011d1 WCheckBox::operator=

/* public: class WCheckBox & __thiscall WCheckBox::operator=(class WCheckBox const &) */

WCheckBox * __thiscall WCheckBox::operator=(WCheckBox *this,WCheckBox *param_1)

{
                    /* 0x11d1  261  ??4WCheckBox@@QAEAAV0@ABV0@@Z */
  WButton::operator=((WButton *)this,(WButton *)param_1);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  return this;
}


// ==== 110011d6 WWindow::WWindow

/* public: __thiscall WWindow::WWindow(class FName,class WWindow *) */

WWindow * __thiscall WWindow::WWindow(WWindow *this,undefined4 param_2,undefined4 param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x11d6  172  ??0WWindow@@QAE@VFName@@PAV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11060064;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xfffffffc;
  *(undefined4 *)(this + 0x14) = param_3;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = param_2;
  *(undefined2 *)(this + 0xc) = 0;
  *(undefined2 *)(this + 0xe) = 0x2000;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  FArray::FArray((FArray *)(this + 0x20));
  *(undefined4 *)(this + 0x38) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110011db WLog::OnCopyData

/* public: virtual void __thiscall WLog::OnCopyData(struct HWND__ *,struct tagCOPYDATASTRUCT *) */

void __thiscall WLog::OnCopyData(WLog *this,HWND__ *param_1,tagCOPYDATASTRUCT *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  WLog *pWVar3;
  int iVar4;
  FString *pFVar5;
  ushort *puVar6;
  WLog *pWVar7;
  ushort auStack_844 [1024];
  FString aFStack_44 [12];
  FString aFStack_38 [12];
  FString aFStack_2c [16];
  ushort *apuStack_1c [2];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x11db  706  ?OnCopyData@WLog@@UAEXPAUHWND__@@PAUtagCOPYDATASTRUCT@@@Z */
  puStack_c = &LAB_11061b0b;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffff7b0;
  pWVar7 = (WLog *)0x0;
  iStack_8 = 0;
  if (*(int *)(this + 0x9c) != 0) {
    ExceptionList = &pvStack_10;
    puVar2 = &stack0xfffff7b0;
    if (*(int *)GLog_exref != 0) {
      ExceptionList = &pvStack_10;
      FOutputDevice::Logf2
                ((FOutputDevice *)param_2,*(ushort **)GLog_exref,u_WM_COPYDATA___s_1106f7c0,
                 *(undefined4 *)(param_2 + 8));
      puVar2 = puStack_14;
    }
    puStack_14 = puVar2;
    if (GLogWindow == (WLog *)0x0) {
      pWVar3 = (WLog *)0x0;
    }
    else {
      pWVar3 = GLogWindow + 0x3c;
    }
    (**(code **)**(undefined4 **)(this + 0x9c))(u_TakeFocus_1106f7a8,pWVar3);
    apuStack_1c[0] = *(ushort **)(param_2 + 8);
    iVar4 = ParseToken(apuStack_1c,auStack_844,0x400,0);
    if ((iVar4 != 0) && (auStack_844[0] != 0x2d)) {
      if (GLogWindow != (WLog *)0x0) {
        pWVar7 = GLogWindow + 0x3c;
      }
      pFVar5 = (FString *)FString::FString(aFStack_38,(ushort *)&DAT_11068ff8);
      iStack_8._0_1_ = 1;
      pFVar5 = (FString *)FString::operator+(pFVar5,(ushort *)aFStack_44);
      iStack_8._0_1_ = 2;
      pFVar5 = (FString *)FString::operator+(pFVar5,(ushort *)aFStack_2c);
      iStack_8._0_1_ = 3;
      puVar1 = (undefined4 *)**(undefined4 **)(this + 0x9c);
      puVar6 = FString::operator*(pFVar5);
      (*(code *)*puVar1)(puVar6,pWVar7);
      iStack_8._0_1_ = 2;
      FString::~FString(aFStack_2c);
      iStack_8._0_1_ = 1;
      FString::~FString(aFStack_44);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FString::~FString(aFStack_38);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110011e0 WWindow::OnSysCommand

/* public: virtual int __thiscall WWindow::OnSysCommand(int) */

int __thiscall WWindow::OnSysCommand(WWindow *this,int param_1)

{
                    /* 0x11e0  839  ?OnSysCommand@WWindow@@UAEHH@Z */
  return 0;
}


// ==== 110011ea WProperties::SnoopLeftMouseDown

/* public: virtual void __thiscall WProperties::SnoopLeftMouseDown(class WWindow *,struct FPoint) */

void __thiscall
WProperties::SnoopLeftMouseDown(WProperties *this,WListBox *param_1,int param_3,int param_4)

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
  
                    /* 0x11ea  980  ?SnoopLeftMouseDown@WProperties@@UAEXPAVWWindow@@UFPoint@@@Z */
  puStack_c = &LAB_11060f70;
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
      (**(code **)(*(int *)pFVar2 + 0x38))(iStack_1c,param_4 - piVar3[1]);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110011ef WWizardPage::GetPackageName

/* public: virtual unsigned short const * __thiscall WWizardPage::GetPackageName(void) */

ushort * __thiscall WWizardPage::GetPackageName(WWizardPage *this)

{
                    /* 0x11ef  566  ?GetPackageName@WWizardPage@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 110011f4 thunk_FUN_11037c20 thunk -> 11037c20

// ==== 110011f9 WPropertiesBase::GetListItem

/* public: class FTreeItem * __thiscall WPropertiesBase::GetListItem(int) */

FTreeItem * __thiscall WPropertiesBase::GetListItem(WPropertiesBase *this,int param_1)

{
  FTreeItem *pFVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x11f9  519  ?GetListItem@WPropertiesBase@@QAEPAVFTreeItem@@H@Z */
  puStack_c = &LAB_110602c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pFVar1 = WListBox::GetItemData((WListBox *)(this + 0x44),param_1);
  if (pFVar1 == (FTreeItem *)0x0) {
    appFailAssert(s_Result_1106b550,s___Properties_cpp_1106b558,0x19);
  }
  ExceptionList = pvStack_10;
  return pFVar1;
}


// ==== 110011fe WTrackBar::operator=

/* public: class WTrackBar & __thiscall WTrackBar::operator=(class WTrackBar const &) */

WTrackBar * __thiscall WTrackBar::operator=(WTrackBar *this,WTrackBar *param_1)

{
                    /* 0x11fe  298  ??4WTrackBar@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  return this;
}


// ==== 11001203 FDelegate::operator=

/* public: struct FDelegate & __thiscall FDelegate::operator=(struct FDelegate const &) */

FDelegate * __thiscall FDelegate::operator=(FDelegate *this,FDelegate *param_1)

{
                    /* 0x1203  245  ??4FDelegate@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}


// ==== 11001208 thunk_FUN_11013d70 thunk -> 11013d70

// ==== 1100120d WLog::WLog

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: __thiscall WLog::WLog(unsigned short const *,class FArchive * &,class FName,class WWindow
   *) */

WLog * __thiscall
WLog::WLog(WLog *this,ushort *param_1,undefined4 param_2,undefined4 param_4,undefined4 param_5)

{
  UINT UVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x120d  109  ??0WLog@@QAE@PBGAAPAVFArchive@@VFName@@PAVWWindow@@@Z */
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_11063127;
  pvStack_10 = ExceptionList;
  uStack_24 = param_5;
  uStack_28 = param_4;
  ExceptionList = &pvStack_10;
  WTerminal::WTerminal((WTerminal *)this);
  pcVar3 = (char *)0x0;
  uStack_8 = 0;
  *(undefined ***)this = vftable_for_WTerminalBase_;
  *(undefined ***)(this + 0x3c) = vftable_for_FOutputDevice_;
  if (*(int *)GUnicodeOS_exref == 0) {
    iVar2 = winGetSizeANSI((ushort *)u_UnrealNidMessage_110729ec);
    if (iVar2 != 0) {
      winGetSizeANSI((ushort *)u_UnrealNidMessage_110729ec);
      pcVar3 = (char *)&uStack_28;
    }
    iVar2 = winGetSizeANSI((ushort *)u_UnrealNidMessage_110729ec);
    pcVar3 = winToANSI(pcVar3,(ushort *)u_UnrealNidMessage_110729ec,iVar2);
    UVar1 = RegisterWindowMessageA(pcVar3);
  }
  else {
    UVar1 = RegisterWindowMessageW(u_UnrealNidMessage_110729ec);
  }
  *(UINT *)(this + 0x2ac) = UVar1;
  *(undefined4 *)(this + 0x2b0) = param_2;
  FString::FString((FString *)(this + 0x2b4),param_1);
  ExceptionList = pvStack_10;
  return this;
}


// ==== 11001212 WWizardPage::WWizardPage

/* public: __thiscall WWizardPage::WWizardPage(unsigned short const *,int,class WWizardDialog *) */

WWizardPage * __thiscall
WWizardPage::WWizardPage(WWizardPage *this,ushort *param_1,int param_2,WWizardDialog *param_3)

{
  void *unaff_EDI;
  WWizardPage *pWStack_24;
  int iStack_20;
  WWizardDialog *pWStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1212  176  ??0WWizardPage@@QAE@PBGHPAVWWizardDialog@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063ff8;
  pvStack_c = ExceptionList;
  pWStack_1c = param_3;
  iStack_20 = param_2;
  ExceptionList = &pvStack_c;
  pWStack_24 = this;
  FName::FName((FName *)&pWStack_24,param_1,1);
  WDialog::WDialog((WDialog *)this);
  *(undefined ***)this = vftable;
  *(WWizardDialog **)(this + 0x3c) = param_3;
  ExceptionList = unaff_EDI;
  return this;
}


// ==== 11001217 WTrackBar::GetPos

/* public: int __thiscall WTrackBar::GetPos(void) */

int __thiscall WTrackBar::GetPos(WTrackBar *this)

{
  LRESULT LVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1217  572  ?GetPos@WTrackBar@@QAEHXZ */
  puStack_c = &LAB_1105fd00;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &pvStack_10;
    LVar1 = SendMessageW(*(HWND *)(this + 4),0x400,0,0);
    ExceptionList = pvStack_10;
    return LVar1;
  }
  ExceptionList = &pvStack_10;
  LVar1 = SendMessageA(*(HWND *)(this + 4),0x400,0,0);
  ExceptionList = pvStack_10;
  return LVar1;
}


// ==== 1100121c WControl::WControl

/* public: __thiscall WControl::WControl(class WWindow *,int,long (__stdcall*)(struct HWND__
   *,unsigned int,unsigned int,long)) */

WControl * __thiscall
WControl::WControl(WControl *this,WWindow *param_1,int param_2,
                  _func_long_HWND___ptr_uint_uint_long *param_3)

{
  int iVar1;
  int iVar2;
  void *unaff_ESI;
  uint unaff_retaddr;
  WControl *pWStack_20;
  WWindow *pWStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x121c  71  ??0WControl@@QAE@PAVWWindow@@HP6GJPAUHWND__@@IIJ@Z@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11060088;
  pvStack_c = ExceptionList;
  pWStack_1c = param_1;
  ExceptionList = &pvStack_c;
  pWStack_20 = this;
  FName::FName((FName *)&pWStack_20,0);
  WWindow::WWindow((WWindow *)this);
  pvStack_c = (void *)0x0;
  *(undefined ***)this = vftable;
  if (*(int *)(this + 0x14) == 0) {
    appFailAssert(s_OwnerWindow_1106abb4,s____Inc_Window_h_1106aefc,0x302);
  }
  *(WControl ***)(this + 0x3c) = &pWStack_20;
  if (unaff_retaddr == 0) {
    unaff_retaddr = (uint)*(ushort *)(param_1 + 0xe);
    *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) + 1;
  }
  iVar1 = *(int *)(this + 0x14);
  *(short *)(this + 0xc) = (short)unaff_retaddr;
  iVar2 = FArray::Add((FArray *)(iVar1 + 0x20),1,4);
  *(WControl **)(*(int *)(iVar1 + 0x20) + iVar2 * 4) = this;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11001221 thunk_FUN_11014000 thunk -> 11014000

// ==== 11001226 WTabControl::SetCurrent

/* public: int __thiscall WTabControl::SetCurrent(int) */

int __thiscall WTabControl::SetCurrent(WTabControl *this,int param_1)

{
  LRESULT LVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1226  926  ?SetCurrent@WTabControl@@QAEHH@Z */
  puStack_c = &LAB_1105f900;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &pvStack_10;
    LVar1 = SendMessageW(*(HWND *)(this + 4),0x130c,param_1,0);
    ExceptionList = pvStack_10;
    return LVar1;
  }
  ExceptionList = &pvStack_10;
  LVar1 = SendMessageA(*(HWND *)(this + 4),0x130c,param_1,0);
  ExceptionList = pvStack_10;
  return LVar1;
}


// ==== 1100122b WWizardDialog::RefreshPage

/* public: virtual void __thiscall WWizardDialog::RefreshPage(void) */

void __thiscall WWizardDialog::RefreshPage(WWizardDialog *this)

{
  WWizardDialog *this_00;
  WDialog *this_01;
  undefined4 *puVar1;
  ushort *puVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x122b  893  ?RefreshPage@WWizardDialog@@UAEXXZ */
  puStack_c = &LAB_11060250;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0x2f0) != 0) {
    this_00 = this + 0x2ec;
    ExceptionList = &pvStack_10;
    puVar1 = (undefined4 *)thunk_FUN_1100f510(this_00,0);
    this_01 = (WDialog *)*puVar1;
    if (*(int *)(this_01 + 4) == 0) {
      WDialog::OpenChildWindow(this_01,0x425,1);
    }
    if (*(int *)(this + 0x2f0) < 2) {
      puVar2 = (ushort *)0x0;
    }
    else {
      puVar2 = (ushort *)(**(code **)(*(int *)this_01 + 0xf8))();
    }
    WButton::SetVisibleText((WButton *)(this + 0x3c),puVar2);
    puVar2 = (ushort *)(**(code **)(*(int *)this_01 + 0xfc))();
    WButton::SetVisibleText((WButton *)(this + 0xd8),puVar2);
    puVar2 = (ushort *)(**(code **)(*(int *)this_01 + 0x100))();
    WButton::SetVisibleText((WButton *)(this + 0x174),puVar2);
    puVar2 = (ushort *)(**(code **)(*(int *)this_01 + 0x104))();
    WButton::SetVisibleText((WButton *)(this + 0x210),puVar2);
    if (1 < *(int *)(this + 0x2f0)) {
      (**(code **)(**(int **)(*(int *)this_00 + -8 + *(int *)(this + 0x2f0) * 4) + 8))(0);
    }
    puVar1 = (undefined4 *)thunk_FUN_1100f510(this_00,0);
    (**(code **)(*(int *)*puVar1 + 0xf0))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001230 thunk_FUN_1102bf50 thunk -> 1102bf50

// ==== 11001235 thunk_FUN_1101c650 thunk -> 1101c650

// ==== 1100123a WDragInterceptor::~WDragInterceptor

/* public: virtual __thiscall WDragInterceptor::~WDragInterceptor(void) */

void __thiscall WDragInterceptor::~WDragInterceptor(WDragInterceptor *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x123a  205  ??1WDragInterceptor@@UAE@XZ */
  puStack_8 = &LAB_11060b28;
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


// ==== 1100123f WObjectProperties::Show

/* public: virtual void __thiscall WObjectProperties::Show(int) */

void __thiscall WObjectProperties::Show(WObjectProperties *this,int param_1)

{
                    /* 0x123f  970  ?Show@WObjectProperties@@UAEXH@Z */
  WWindow::Show((WWindow *)this,param_1);
  if (*(int *)(this + 0x2c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x1101365b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    BringWindowToTop(*(HWND *)(this + 4));
    return;
  }
  return;
}


// ==== 11001244 WSplitter::OnLeftButtonUp

/* public: virtual void __thiscall WSplitter::OnLeftButtonUp(void) */

void __thiscall WSplitter::OnLeftButtonUp(WSplitter *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1244  775  ?OnLeftButtonUp@WSplitter@@UAEXXZ */
  puStack_c = &LAB_11061b60;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  ReleaseCapture();
  InvalidateRect(*(HWND *)(this + 4),(RECT *)0x0,0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001249 WProperties::OnListSelectionChange

/* public: void __thiscall WProperties::OnListSelectionChange(void) */

void __thiscall WProperties::OnListSelectionChange(WProperties *this)

{
                    /* 0x1249  780  ?OnListSelectionChange@WProperties@@QAEXXZ */
  (**(code **)(*(int *)this + 0xf4))(1);
  return;
}


// ==== 1100124e WTrackBar::GetPackageName

/* public: virtual unsigned short const * __thiscall WTrackBar::GetPackageName(void) */

ushort * __thiscall WTrackBar::GetPackageName(WTrackBar *this)

{
                    /* 0x124e  560  ?GetPackageName@WTrackBar@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11001253 thunk_FUN_110393c0 thunk -> 110393c0

// ==== 11001258 WListBox::DeleteString

/* public: void __thiscall WListBox::DeleteString(int) */

void __thiscall WListBox::DeleteString(WListBox *this,int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1258  427  ?DeleteString@WListBox@@QAEXH@Z */
  puStack_c = &LAB_1105fde0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0x182,param_1,0);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0x182,param_1,0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001267 thunk_FUN_110140d0 thunk -> 110140d0

// ==== 1100126c FHeaderItem::operator=

/* public: class FHeaderItem & __thiscall FHeaderItem::operator=(class FHeaderItem const &) */

FHeaderItem * __thiscall FHeaderItem::operator=(FHeaderItem *this,FHeaderItem *param_1)

{
                    /* 0x126c  247  ??4FHeaderItem@@QAEAAV0@ABV0@@Z */
  FTreeItem::operator=((FTreeItem *)this,(FTreeItem *)param_1);
  return this;
}


// ==== 11001271 WButton::WButton

/* public: __thiscall WButton::WButton(void) */

WButton * __thiscall WButton::WButton(WButton *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1271  51  ??0WButton@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062858;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined ***)(this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined ***)(this + 0x58) = FDelegate::vftable;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined ***)(this + 100) = FDelegate::vftable;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined ***)(this + 0x70) = FDelegate::vftable;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined ***)(this + 0x7c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001276 WItemBox::WItemBox

/* public: __thiscall WItemBox::WItemBox(class WWindow *,int) */

WItemBox * __thiscall WItemBox::WItemBox(WItemBox *this,WWindow *param_1,int param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1276  97  ??0WItemBox@@QAE@PAVWWindow@@H@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063678;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WListBox::WListBox((WListBox *)this,param_1,param_2,(_func_long_HWND___ptr_uint_uint_long *)0x0);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  if (*(int *)(this + 0x14) == 0) {
    appFailAssert(s_OwnerWindow_1106abb4,s____Inc_Window_h_1106aefc,0x84c);
  }
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100127b FConfigItem::operator=

/* public: class FConfigItem & __thiscall FConfigItem::operator=(class FConfigItem const &) */

FConfigItem * __thiscall FConfigItem::operator=(FConfigItem *this,FConfigItem *param_1)

{
                    /* 0x127b  242  ??4FConfigItem@@QAEAAV0@ABV0@@Z */
  FTreeItem::operator=((FTreeItem *)this,(FTreeItem *)param_1);
  FPreferencesInfo::operator=
            ((FPreferencesInfo *)(this + 0x3c),(FPreferencesInfo *)(param_1 + 0x3c));
  return this;
}


// ==== 11001285 WCheckListBox::GetPackageName

/* public: virtual unsigned short const * __thiscall WCheckListBox::GetPackageName(void) */

ushort * __thiscall WCheckListBox::GetPackageName(WCheckListBox *this)

{
                    /* 0x1285  526  ?GetPackageName@WCheckListBox@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 1100128f WPictureButton::OnDestroy

/* public: virtual void __thiscall WPictureButton::OnDestroy(void) */

void __thiscall WPictureButton::OnDestroy(WPictureButton *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x128f  719  ?OnDestroy@WPictureButton@@UAEXXZ */
  puStack_c = &LAB_1105f6b0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::OnDestroy((WWindow *)this);
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 4))(1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001294 WConfigProperties::GetRoot

/* public: virtual class FTreeItem * __thiscall WConfigProperties::GetRoot(void) */

FTreeItem * __thiscall WConfigProperties::GetRoot(WConfigProperties *this)

{
                    /* 0x1294  581  ?GetRoot@WConfigProperties@@UAEPAVFTreeItem@@XZ */
  return (FTreeItem *)(this + 0xfc);
}


// ==== 11001299 thunk_FUN_1101fb40 thunk -> 1101fb40

// ==== 1100129e WListView::GetWindowClassName

/* public: virtual void __thiscall WListView::GetWindowClassName(unsigned short *) */

void __thiscall WListView::GetWindowClassName(WListView *this,ushort *param_1)

{
                    /* 0x129e  618  ?GetWindowClassName@WListView@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WListView_1106fd20);
  return;
}


// ==== 110012a3 WTrackBar::InterceptControlCommand

/* public: virtual int __thiscall WTrackBar::InterceptControlCommand(unsigned int,unsigned int,long)
    */

int __thiscall
WTrackBar::InterceptControlCommand(WTrackBar *this,uint param_1,uint param_2,long param_3)

{
  WTrackBar *pWVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x12a3  660  ?InterceptControlCommand@WTrackBar@@UAEHIIJ@Z */
  puStack_c = &LAB_1105f790;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (param_1 == 0x114) {
    if ((short)param_2 == 5) {
      pWVar1 = this + 0x44;
    }
    else {
      pWVar1 = this + 0x50;
    }
    ExceptionList = &pvStack_10;
    (*(code *)**(undefined4 **)pWVar1)();
    ExceptionList = pvStack_10;
    return 1;
  }
  return 0;
}


// ==== 110012a8 FPropertyItem::FPropertyItem

/* public: __thiscall FPropertyItem::FPropertyItem(class WPropertiesBase *,class FTreeItem *,class
   UProperty *,class FName,int,int,int) */

FPropertyItem * __thiscall
FPropertyItem::FPropertyItem
          (FPropertyItem *this,WPropertiesBase *param_1,FTreeItem *param_2,UObject *param_3,
          undefined4 param_5,undefined4 param_6,int param_7)

{
  UObject *pUVar1;
  uchar *puVar2;
  undefined4 uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x12a8  30
                       ??0FPropertyItem@@QAE@PAVWPropertiesBase@@PAVFTreeItem@@PAVUProperty@@VFName@@HHH@Z
                        */
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_11061504;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  FTreeItem::FTreeItem((FTreeItem *)this,param_1,param_2,0);
  uStack_8 = 0;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  *(UObject **)(this + 0x3c) = param_3;
  *(undefined4 *)(this + 0x40) = param_6;
  *(int *)(this + 0x44) = param_7;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x70) = param_5;
  FString::FString((FString *)(this + 0x74));
  uStack_8 = CONCAT31((int3)((uint)uStack_8 >> 8),2);
  if ((((*(uint *)(param_3 + 0x48) & 0x8000000) == 0) ||
      (pUVar1 = thunk_FUN_11015e40(param_3), pUVar1 == (UObject *)0x0)) ||
     (puVar2 = FTreeItem::GetReadAddress((FTreeItem *)this,this,0), puVar2 == (uchar *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined4 *)(this + 0x68) = uVar3;
  if ((((*(uint *)(param_3 + 0x48) & 0x4000000) == 0) ||
      (pUVar1 = thunk_FUN_11015e40(param_3), pUVar1 == (UObject *)0x0)) ||
     (puVar2 = FTreeItem::GetReadAddress((FTreeItem *)this,this,0), puVar2 == (uchar *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined4 *)(this + 0x5c) = uVar3;
  if ((((*(uint *)(param_3 + 0x48) & 0x10000000) == 0) ||
      (pUVar1 = thunk_FUN_11015e40(param_3), pUVar1 == (UObject *)0x0)) ||
     (puVar2 = FTreeItem::GetReadAddress((FTreeItem *)this,this,0), puVar2 == (uchar *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined4 *)(this + 0x60) = uVar3;
  if (((*(uint *)(param_3 + 0x48) & 0x40000000) == 0) ||
     (pUVar1 = thunk_FUN_11015e40(param_3), pUVar1 == (UObject *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined4 *)(this + 100) = uVar3;
  puVar2 = FTreeItem::GetReadAddress((FTreeItem *)this,this,1);
  *(uint *)(this + 0x6c) = (uint)(puVar2 != (uchar *)0x0);
  pUVar1 = thunk_FUN_11015e70(param_3);
  if ((pUVar1 == (UObject *)0x0) &&
     (((pUVar1 = thunk_FUN_11015ea0(param_3), pUVar1 == (UObject *)0x0 ||
       (puVar2 = FTreeItem::GetReadAddress((FTreeItem *)this,this,0), puVar2 == (uchar *)0x0)) &&
      (*(int *)(this + 0x5c) == 0)))) {
    if (*(int *)(param_3 + 0x40) < 2) {
      ExceptionList = pvStack_10;
      return this;
    }
    if (param_7 != -1) {
      ExceptionList = pvStack_10;
      return this;
    }
  }
  *(undefined4 *)(this + 0x10) = 1;
  ExceptionList = pvStack_10;
  return this;
}


// ==== 110012b7 FHeaderItem::Draw

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: virtual void __thiscall FHeaderItem::Draw(struct HDC__ *) */

void __thiscall FHeaderItem::Draw(FHeaderItem *this,HDC__ *param_1)

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
  int aiStack_78 [13];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  RECT RStack_38;
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x12b7  431  ?Draw@FHeaderItem@@UAEXPAUHDC__@@@Z */
  puStack_c = &LAB_11060d69;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff7c;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(*(int *)this + 0x24))();
  iVar1 = FTreeItem::GetIndent((FTreeItem *)this);
  hbr = (HBRUSH)(**(code **)(*(int *)this + 0x14))();
  FillRect(param_1,&RStack_38,hbr);
  aiStack_78[0xc] = (**(code **)(*(int *)this + 0x40))();
  aiStack_78[0xc] = aiStack_78[0xc] + 1;
  uStack_44 = 1;
  uStack_40 = 0xffffffff;
  uStack_3c = 0xffffffff;
  pLVar2 = (LONG *)thunk_FUN_110143f0(&RStack_38,aiStack_78,aiStack_78 + 0xc);
  RStack_38.left = *pLVar2;
  RStack_38.top = pLVar2[1];
  RStack_38.right = pLVar2[2];
  RStack_38.bottom = pLVar2[3];
  pHVar3 = hBrushBlack;
  if (iVar1 != 0) {
    pHVar3 = hBrushGrey160;
  }
  FillRect(param_1,&RStack_38,pHVar3);
  aiStack_78[8] = 1;
  aiStack_78[9] = 1;
  aiStack_78[10] = 0xffffffff;
  aiStack_78[0xb] = 0xffffffff;
  pLVar2 = (LONG *)thunk_FUN_110143f0(&RStack_38,aiStack_78,aiStack_78 + 8);
  RStack_38.left = *pLVar2;
  RStack_38.top = pLVar2[1];
  RStack_38.right = pLVar2[2];
  RStack_38.bottom = pLVar2[3];
  pHVar3 = hBrushGrey180;
  if (iVar1 != 0) {
    pHVar3 = hBrushGrey;
  }
  FillRect(param_1,&RStack_38,pHVar3);
  aiStack_78[4] = 1;
  aiStack_78[5] = 1;
  aiStack_78[6] = 0xffffffff;
  aiStack_78[7] = 0xffffffff;
  pLVar2 = (LONG *)thunk_FUN_110143f0(&RStack_38,aiStack_78,aiStack_78 + 4);
  RStack_38.left = *pLVar2;
  RStack_38.top = pLVar2[1];
  RStack_38.right = pLVar2[2];
  RStack_38.bottom = pLVar2[3];
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x24))();
  (**(code **)(iVar1 + 0x4c))();
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x48))();
  color = (**(code **)(iVar1 + 0x18))();
  SetTextColor(param_1,color);
  SetBkMode(param_1,1);
  (**(code **)(*(int *)this + 0x80))();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  aiStack_78[0] = 0x12;
  aiStack_78[1] = 0;
  aiStack_78[2] = 0xffffffee;
  aiStack_78[3] = 0;
  piVar4 = (int *)thunk_FUN_110143f0(&RStack_38,aiStack_78 + 4,aiStack_78);
  RStack_38.left = *piVar4;
  RStack_38.top = piVar4[1];
  RStack_38.right = piVar4[2];
  RStack_38.bottom = piVar4[3];
  puVar10 = (ushort *)&DAT_1106d7d8;
  puVar5 = UObject::GetLanguage();
  iVar1 = appStricmp(puVar5,puVar10);
  if (iVar1 == 0) {
    iVar1 = FString::Len(aFStack_28);
    lpString = (LPCWSTR)FString::operator*(aFStack_28);
    TextOutW(param_1,RStack_38.left,RStack_38.top,lpString,iVar1);
  }
  else if (*(int *)GUnicodeOS_exref == 0) {
    puVar5 = FString::operator*(aFStack_28);
    iVar1 = winGetSizeANSI(puVar5);
    if (iVar1 == 0) {
      pcVar7 = (char *)0x0;
    }
    else {
      puVar5 = FString::operator*(aFStack_28);
      winGetSizeANSI(puVar5);
      puStack_14 = &stack0xffffff4c;
      pcVar7 = &stack0xffffff4c;
    }
    ptVar11 = (LPDRAWTEXTPARAMS)0x0;
    UVar9 = 0x8024;
    pRVar8 = &RStack_38;
    iVar1 = FString::Len(aFStack_28);
    puVar5 = FString::operator*(aFStack_28);
    iVar6 = winGetSizeANSI(puVar5);
    puVar5 = FString::operator*(aFStack_28);
    pcVar7 = winToANSI(pcVar7,puVar5,iVar6);
    DrawTextExA(param_1,pcVar7,iVar1,pRVar8,UVar9,ptVar11);
  }
  else {
    ptVar11 = (LPDRAWTEXTPARAMS)0x0;
    UVar9 = 0x8024;
    pRVar8 = &RStack_38;
    iVar1 = FString::Len(aFStack_28);
    lpchText = (LPWSTR)FString::operator*(aFStack_28);
    DrawTextExW(param_1,lpchText,iVar1,pRVar8,UVar9,ptVar11);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  FString::~FString(aFStack_28);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110012bc WProperties::OnSetCursor

/* public: virtual int __thiscall WProperties::OnSetCursor(void) */

int __thiscall WProperties::OnSetCursor(WProperties *this)

{
  BOOL BVar1;
  int iVar2;
  FTreeItem *pFVar3;
  undefined4 *puVar4;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x12bc  823  ?OnSetCursor@WProperties@@UAEHXZ */
  puStack_c = &LAB_11060660;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  BVar1 = IsWindow(*(HWND *)(this + 0x48));
  if (BVar1 != 0) {
    iVar2 = WListBox::GetCount((WListBox *)(this + 0x44));
    if (iVar2 != 0) {
      puVar4 = &uStack_24;
      WWindow::GetCursorPos((WWindow *)this);
      iVar2 = WListBox::ItemFromPoint((WListBox *)(this + 0x44),uStack_24,uStack_20,puVar4);
      if (0 < iVar2) {
        pFVar3 = WPropertiesBase::GetListItem((WPropertiesBase *)this,iVar2);
        iVar2 = (**(code **)(*(int *)pFVar3 + 0x20))();
        ExceptionList = pvStack_10;
        return iVar2;
      }
    }
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 110012c1 FWindowsBitmap::operator=

/* private: void __thiscall FWindowsBitmap::operator=(class FWindowsBitmap &) */

void __thiscall FWindowsBitmap::operator=(FWindowsBitmap *this,FWindowsBitmap *param_1)

{
                    /* 0x12c1  258  ??4FWindowsBitmap@@AAEXAAV0@@Z */
  return;
}


// ==== 110012c6 WTabControl::GetPackageName

/* public: virtual unsigned short const * __thiscall WTabControl::GetPackageName(void) */

ushort * __thiscall WTabControl::GetPackageName(WTabControl *this)

{
                    /* 0x12c6  554  ?GetPackageName@WTabControl@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 110012cb WDialog::CallDefaultProc

/* public: virtual int __thiscall WDialog::CallDefaultProc(unsigned int,unsigned int,long) */

int __thiscall WDialog::CallDefaultProc(WDialog *this,uint param_1,uint param_2,long param_3)

{
                    /* 0x12cb  407  ?CallDefaultProc@WDialog@@UAEHIIJ@Z */
  return 0;
}


// ==== 110012d5 WToolTip::~WToolTip

/* public: virtual __thiscall WToolTip::~WToolTip(void) */

void __thiscall WToolTip::~WToolTip(WToolTip *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x12d5  231  ??1WToolTip@@UAE@XZ */
  puStack_8 = &LAB_1105f878;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WControl::~WControl((WControl *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 110012da WTabControl::GetWindowClassName

/* public: virtual void __thiscall WTabControl::GetWindowClassName(unsigned short *) */

void __thiscall WTabControl::GetWindowClassName(WTabControl *this,ushort *param_1)

{
                    /* 0x12da  631  ?GetWindowClassName@WTabControl@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WTabControl_11069480);
  return;
}


// ==== 110012df thunk_FUN_1102e9a0 thunk -> 1102e9a0

// ==== 110012e4 thunk_FUN_1102e490 thunk -> 1102e490

// ==== 110012e9 FTreeItem::SnoopChar

/* public: virtual void __thiscall FTreeItem::SnoopChar(class WWindow *,int) */

void __thiscall FTreeItem::SnoopChar(FTreeItem *this,WWindow *param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x12e9  974  ?SnoopChar@FTreeItem@@UAEXPAVWWindow@@H@Z */
  puStack_c = &LAB_110603f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if ((param_2 == 0xd) && (*(int *)(this + 0xc) != 0)) {
    ExceptionList = &pvStack_10;
    (**(code **)(*(int *)(this + -4) + 0x58))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110012ee WListBox::operator=

/* public: class WListBox & __thiscall WListBox::operator=(class WListBox const &) */

WListBox * __thiscall WListBox::operator=(WListBox *this,WListBox *param_1)

{
                    /* 0x12ee  278  ??4WListBox@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  return this;
}


// ==== 110012f3 WLog::OpenWindow

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall WLog::OpenWindow(int,int) */

void __thiscall WLog::OpenWindow(WLog *this,int param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x12f3  864  ?OpenWindow@WLog@@QAEXHH@Z */
  puStack_c = &LAB_110622b0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WTerminal::OpenWindow((WTerminal *)this,param_2,0);
  (**(code **)(*(int *)this + 8))(param_1);
  UpdateWindow(*(HWND *)(this + 4));
  *(WLog **)GLogHook_exref = this + 0x3c;
  if ((*(int *)GIsClient_exref == 0) && (*(int *)GIsEditor_exref == 0)) {
    _NID = 0x98;
    _DAT_1109c364 = *(undefined4 *)(this + 4);
    _DAT_1109c368 = 0;
    _DAT_1109c36c = 7;
    _DAT_1109c370 = *(undefined4 *)(this + 0x2ac);
    if (*(int *)GUnicodeOS_exref == 0) {
      _DAT_1109c374 =
           LoadIconA(hInstanceWindow,
                     (LPCSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    }
    else {
      _DAT_1109c374 =
           LoadIconW(hInstanceWindow,
                     (LPCWSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    }
    _DAT_1109c378 = 0;
    if ((*(int *)GUnicode_exref == 0) || (*(int *)GUnicodeOS_exref != 0)) {
      (*Shell_NotifyIconWX)(0,&NID);
    }
    else {
      NIDA.cbSize = 0x58;
      NIDA.hWnd = *(HWND *)(this + 4);
      NIDA.uID = 0;
      NIDA.uFlags = 7;
      NIDA.uCallbackMessage = *(UINT *)(this + 0x2ac);
      if (*(int *)GUnicodeOS_exref == 0) {
        NIDA.hIcon = LoadIconA(hInstanceWindow,
                               (LPCSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
      }
      else {
        NIDA.hIcon = LoadIconW(hInstanceWindow,
                               (LPCWSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
      }
      NIDA.szTip[0] = '\0';
      Shell_NotifyIconA(0,&NIDA);
    }
    GNotify = 1;
    _atexit((_func_4879 *)&LAB_11024110);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110012f8 WProgressBar::OpenWindow

/* public: void __thiscall WProgressBar::OpenWindow(int) */

void __thiscall WProgressBar::OpenWindow(WProgressBar *this,int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x12f8  866  ?OpenWindow@WProgressBar@@QAEXH@Z */
  puStack_c = &LAB_1105fd10;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0x200,(ushort *)0x0,-(uint)(param_1 != 0) & 0x10000000 | 0x40000000,0,0
             ,0,0,*(HWND__ **)(*(int *)(this + 0x14) + 4),(HMENU__ *)(uint)*(ushort *)(this + 0xc),
             DAT_1109c35c);
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(*(HWND *)(this + 4),0x401,0,100);
  }
  else {
    SendMessageW(*(HWND *)(this + 4),0x401,0,100);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110012fd WTrackBar::~WTrackBar

/* public: virtual __thiscall WTrackBar::~WTrackBar(void) */

void __thiscall WTrackBar::~WTrackBar(WTrackBar *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x12fd  232  ??1WTrackBar@@UAE@XZ */
  puStack_8 = &LAB_11060b08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WControl::~WControl((WControl *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11001302 WCheckBox::WCheckBox

/* public: __thiscall WCheckBox::WCheckBox(class WWindow *,int,struct FDelegate) */

WCheckBox * __thiscall
WCheckBox::WCheckBox
          (WCheckBox *this,undefined4 param_1,undefined4 param_2,undefined4 param_4,void *param_5)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1302  53  ??0WCheckBox@@QAE@PAVWWindow@@HUFDelegate@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062bc8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WButton::WButton((WButton *)this,param_1,param_2);
  *(undefined ***)this = vftable;
  ExceptionList = param_5;
  return this;
}


// ==== 11001307 CRect::CRect thunk -> 11014310

// ==== 1100130c FPropertyItem::OnTrackBarThumbTrack

/* public: void __thiscall FPropertyItem::OnTrackBarThumbTrack(void) */

void __thiscall FPropertyItem::OnTrackBarThumbTrack(FPropertyItem *this)

{
  int iVar1;
  ushort auStack_220 [262];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x130c  843  ?OnTrackBarThumbTrack@FPropertyItem@@QAEXXZ */
  puStack_c = &LAB_11060cd0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffdd4;
  uStack_8 = 0;
  if ((*(WTrackBar **)(this + 0x4c) != (WTrackBar *)0x0) && (*(int *)(this + 0x48) != 0)) {
    ExceptionList = &pvStack_10;
    iVar1 = WTrackBar::GetPos(*(WTrackBar **)(this + 0x4c));
    appSprintf(auStack_220,(ushort *)&DAT_1106d4d8,iVar1);
    (**(code **)(**(int **)(this + 0x48) + 0x2c))(auStack_220);
    WEdit::SetModify(*(WEdit **)(this + 0x48),1);
    UpdateWindow(*(HWND *)(*(int *)(this + 0x48) + 4));
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001311 WCrashBoxDialog::OnInitDialog

/* public: virtual void __thiscall WCrashBoxDialog::OnInitDialog(void) */

void __thiscall WCrashBoxDialog::OnInitDialog(WCrashBoxDialog *this)

{
  int iVar1;
  HDC hDC;
  ushort *puVar2;
  FString *pFVar3;
  ushort auStack_d8 [64];
  FString aFStack_58 [16];
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int aiStack_2c [2];
  int iStack_24;
  FString aFStack_20 [12];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1311  740  ?OnInitDialog@WCrashBoxDialog@@UAEXXZ */
  puStack_c = &LAB_110601f2;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff1c;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  WDialog::OnInitDialog((WDialog *)this);
  hDC = GetDC(*(HWND *)(this + 4));
  ReleaseDC(*(HWND *)(this + 4),hDC);
  WWindow::SetFont((WWindow *)(this + 0x3c),hFontText);
  iVar1 = *(int *)this;
  puVar2 = FString::operator*((FString *)(this + 0x268));
  (**(code **)(iVar1 + 0x2c))(puVar2);
  FString::FString(aFStack_20);
  iStack_8._0_1_ = 1;
  appSystemTime(aiStack_2c,&iStack_34,&iStack_48,&iStack_40,&iStack_38,&iStack_3c,&iStack_30,
                &iStack_44);
  appSprintf(auStack_d8,(ushort *)u__d__d__d__02d__02d__02d_1106b244,aiStack_2c[0],iStack_34,
             iStack_40,iStack_38,iStack_3c,iStack_30);
  pFVar3 = (FString *)FString::FString(aFStack_58,auStack_d8);
  iStack_8._0_1_ = 2;
  FString::operator+=(aFStack_20,pFVar3);
  iStack_8._0_1_ = 1;
  FString::~FString(aFStack_58);
  FString::operator+=(aFStack_20,(ushort *)&DAT_1106b23c);
  FString::operator+=(aFStack_20,(ushort *)u_OS___1106b22c);
  FString::operator+=(aFStack_20,(ushort *)GMachineOS_exref);
  FString::operator+=(aFStack_20,(ushort *)&DAT_1106b23c);
  FString::operator+=(aFStack_20,(ushort *)u_CPU___1106b21c);
  FString::operator+=(aFStack_20,(ushort *)GMachineCPU_exref);
  FString::operator+=(aFStack_20,(ushort *)&DAT_1106b23c);
  FString::operator+=(aFStack_20,(ushort *)u_Video___1106b204);
  FString::operator+=(aFStack_20,(ushort *)GMachineVideo_exref);
  FString::operator+=(aFStack_20,(ushort *)&DAT_1106b23c);
  FString::operator+=(aFStack_20,(ushort *)&DAT_1106b23c);
  pFVar3 = (FString *)(this + 0x274);
  FString::operator+=(aFStack_20,pFVar3);
  FString::operator+=(aFStack_20,(ushort *)&DAT_1106b23c);
  FString::operator+=(aFStack_20,(ushort *)&DAT_1106b23c);
  FString::operator=(pFVar3,aFStack_20);
  iStack_24 = *(int *)(this + 0x3c);
  puVar2 = FString::operator*(pFVar3);
  (**(code **)(iStack_24 + 0x2c))(puVar2);
  SetFocus(*(HWND *)(this + 0x98));
  MessageBeep(0x10);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FString::~FString(aFStack_20);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001316 WItemBox::~WItemBox

/* public: virtual __thiscall WItemBox::~WItemBox(void) */

void __thiscall WItemBox::~WItemBox(WItemBox *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1316  209  ??1WItemBox@@UAE@XZ */
  puStack_8 = &LAB_11063638;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WListBox::~WListBox((WListBox *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1100131b thunk_FUN_1101dad0 thunk -> 1101dad0

// ==== 11001320 WLog::WLog

/* public: __thiscall WLog::WLog(class WLog const &) */

WLog * __thiscall WLog::WLog(WLog *this,WLog *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1320  108  ??0WLog@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063157;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WTerminal::WTerminal((WTerminal *)this,(WTerminal *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_WTerminalBase_;
  *(undefined ***)(this + 0x3c) = vftable_for_FOutputDevice_;
  *(undefined4 *)(this + 0x2ac) = *(undefined4 *)(param_1 + 0x2ac);
  *(undefined4 *)(this + 0x2b0) = *(undefined4 *)(param_1 + 0x2b0);
  FString::FString((FString *)(this + 0x2b4),(FString *)(param_1 + 0x2b4));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001325 WWindow::MoveWindow

/* public: void __thiscall WWindow::MoveWindow(struct FRect,int) */

void __thiscall
WWindow::MoveWindow(WWindow *this,int param_2,int param_3,int param_4,int param_5,BOOL param_6)

{
                    /* 0x1325  676  ?MoveWindow@WWindow@@QAEXUFRect@@H@Z */
  ::MoveWindow(*(HWND *)(this + 4),param_2,param_3,param_4 - param_2,param_5 - param_3,param_6);
  return;
}


// ==== 1100132a thunk_FUN_11038b50 thunk -> 11038b50

// ==== 1100132f WCheckListBox::~WCheckListBox

/* public: virtual __thiscall WCheckListBox::~WCheckListBox(void) */

void __thiscall WCheckListBox::~WCheckListBox(WCheckListBox *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x132f  195  ??1WCheckListBox@@UAE@XZ */
  puStack_8 = &LAB_110635b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WListBox::~WListBox((WListBox *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11001334 FPropertyItemBase::FPropertyItemBase

/* public: __thiscall FPropertyItemBase::FPropertyItemBase(class WPropertiesBase *,class FTreeItem
   *,unsigned long,unsigned short const *) */

FPropertyItemBase * __thiscall
FPropertyItemBase::FPropertyItemBase
          (FPropertyItemBase *this,WPropertiesBase *param_1,FTreeItem *param_2,ulong param_3,
          ushort *param_4)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1334  32
                       ??0FPropertyItemBase@@QAE@PAVWPropertiesBase@@PAVFTreeItem@@KPBG@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11061694;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FHeaderItem::FHeaderItem((FHeaderItem *)this,param_1,param_2,1);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  FString::FString((FString *)(this + 0x3c),param_4);
  *(ulong *)(this + 0x48) = param_3;
  *(undefined4 *)(this + 0x4c) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001339 WListBox::SetItemData

/* public: void __thiscall WListBox::SetItemData(int,void *) */

void __thiscall WListBox::SetItemData(WListBox *this,int param_1,void *param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1339  932  ?SetItemData@WListBox@@QAEXHPAX@Z */
  puStack_c = &LAB_1105fd70;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0x19a,param_1,(LPARAM)param_2);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0x19a,param_1,(LPARAM)param_2);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100133e WProperties::SetValue

/* public: virtual void __thiscall WProperties::SetValue(unsigned short const *) */

void __thiscall WProperties::SetValue(WProperties *this,ushort *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x133e  966  ?SetValue@WProperties@@UAEXPBG@Z */
  puStack_c = &LAB_110606b0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0xd0) != 0) {
    ExceptionList = &pvStack_10;
    (**(code **)(**(int **)(this + 0xd0) + 0x8c))(param_1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001343 LoadLocalizedMenu

/* struct HMENU__ * __cdecl LoadLocalizedMenu(struct HINSTANCE__ *,int,unsigned short const
   *,unsigned short const *) */

HMENU__ * __cdecl
LoadLocalizedMenu(HINSTANCE__ *param_1,int param_2,ushort *param_3,ushort *param_4)

{
  HMENU pHVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1343  670  ?LoadLocalizedMenu@@YAPAUHMENU__@@PAUHINSTANCE__@@HPBG1@Z */
  puStack_c = &LAB_11061bf0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    pHVar1 = LoadMenuA(param_1,(LPCSTR)(param_2 & 0xffff));
  }
  else {
    ExceptionList = &pvStack_10;
    pHVar1 = LoadMenuW(param_1,(LPCWSTR)(param_2 & 0xffff));
  }
  if (pHVar1 == (HMENU)0x0) {
    FOutputDevice::Logf((FOutputDevice *)GError_exref,*(ushort **)GError_exref,
                        u_Failed_loading_menu___s__s_1106fa0c,param_4,param_3);
  }
  thunk_FUN_11024ea0(pHVar1,param_3,param_4);
  ExceptionList = pvStack_10;
  return pHVar1;
}


// ==== 11001348 WScrollBar::OpenWindow

/* public: void __thiscall WScrollBar::OpenWindow(int,int,int,int,int,int) */

void __thiscall
WScrollBar::OpenWindow
          (WScrollBar *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1348  871  ?OpenWindow@WScrollBar@@QAEXHHHHHH@Z */
  puStack_c = &LAB_1105fab0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)0x0,param_6 != 0 | 0x40000000,param_2,param_3,param_4,
             param_5,*(HWND__ **)(*(int *)(this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)(this + 0xc),DAT_1109c35c);
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
  if (param_1 != 0) {
    ShowWindow(*(HWND *)(this + 4),4);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100134d WWindow::VerifyPosition

/* public: void __thiscall WWindow::VerifyPosition(void) */

void __thiscall WWindow::VerifyPosition(WWindow *this)

{
  int iVar1;
  int iVar2;
  tagRECT tStack_10;
  
                    /* 0x134d  1019  ?VerifyPosition@WWindow@@QAEXXZ */
  ::GetWindowRect(*(HWND *)(this + 4),&tStack_10);
  iVar1 = GetSystemMetrics(0x4e);
  iVar2 = GetSystemMetrics(0x4f);
  if ((iVar1 + 4 <= tStack_10.left) || (tStack_10.left < -4)) {
    tStack_10.left = 0;
  }
  if ((iVar2 + 4 <= tStack_10.top) || (tStack_10.top < -4)) {
    tStack_10.top = 0;
  }
  SetWindowPos(*(HWND *)(this + 4),(HWND)0x0,tStack_10.left,tStack_10.top,tStack_10.right,
               tStack_10.bottom,0x405);
  return;
}


// ==== 11001352 FHeaderItem::~FHeaderItem

/* public: virtual __thiscall FHeaderItem::~FHeaderItem(void) */

void __thiscall FHeaderItem::~FHeaderItem(FHeaderItem *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1352  181  ??1FHeaderItem@@UAE@XZ */
  puStack_8 = &LAB_11061578;
  pvStack_c = ExceptionList;
  uStack_4 = 0xffffffff;
  ExceptionList = &pvStack_c;
  FTreeItem::~FTreeItem((FTreeItem *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11001357 WUDNWindow::~WUDNWindow

/* public: virtual __thiscall WUDNWindow::~WUDNWindow(void) */

void __thiscall WUDNWindow::~WUDNWindow(WUDNWindow *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1357  234  ??1WUDNWindow@@UAE@XZ */
  puStack_8 = &LAB_11062b28;
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


// ==== 1100135c WListBox::FindStringChecked

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: int __thiscall WListBox::FindStringChecked(unsigned short const *) */

int __thiscall WListBox::FindStringChecked(WListBox *this,ushort *param_1)

{
  HWND hWnd;
  int iVar1;
  char *pcVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x135c  461  ?FindStringChecked@WListBox@@QAEHPBG@Z */
  puStack_c = &LAB_1105feb0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
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
    iVar1 = SendMessageA(hWnd,399,0xffffffff,(LPARAM)pcVar2);
  }
  else {
    ExceptionList = &pvStack_10;
    iVar1 = SendMessageW(*(HWND *)(this + 4),399,0xffffffff,(LPARAM)param_1);
  }
  if (iVar1 == -1) {
    appFailAssert(s_Result__LB_ERR_1106a980,s___Controls_cpp_11068b54,0x7f8);
  }
  ExceptionList = pvStack_10;
  return iVar1;
}


// ==== 11001361 WEdit::GetLineIndex

/* public: int __thiscall WEdit::GetLineIndex(int) */

int __thiscall WEdit::GetLineIndex(WEdit *this,int param_1)

{
  LRESULT LVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1361  518  ?GetLineIndex@WEdit@@QAEHH@Z */
  puStack_c = &LAB_1105fc10;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 4) == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert(&DAT_11068b4c,s___Controls_cpp_11068b54,0x605);
  }
  if (*(int *)GUnicodeOS_exref != 0) {
    LVar1 = SendMessageW(*(HWND *)(this + 4),0xbb,param_1,0);
    ExceptionList = pvStack_10;
    return LVar1;
  }
  LVar1 = SendMessageA(*(HWND *)(this + 4),0xbb,param_1,0);
  ExceptionList = pvStack_10;
  return LVar1;
}


// ==== 11001366 WLog::OnCreate

/* public: virtual void __thiscall WLog::OnCreate(void) */

void __thiscall WLog::OnCreate(WLog *this)

{
  WEdit *this_00;
  HFONT__ *pHVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1366  709  ?OnCreate@WLog@@UAEXXZ */
  puStack_c = &LAB_11061f40;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  this_00 = (WEdit *)(this + 0x40);
  ExceptionList = &pvStack_10;
  WEdit::OpenWindow(this_00,1,1,1,0,0,0);
  pHVar1 = GetStockObject(0xb);
  WWindow::SetFont((WWindow *)this_00,pHVar1);
  (**(code **)(*(int *)this_00 + 0x2c))(this + 0xa8);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100136b WListBox::ClearSel

/* public: void __thiscall WListBox::ClearSel(void) */

void __thiscall WListBox::ClearSel(WListBox *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x136b  412  ?ClearSel@WListBox@@QAEXXZ */
  puStack_c = &LAB_1105fda0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0x185,0,-1);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0x185,0,-1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001370 thunk_FUN_110361f0 thunk -> 110361f0

// ==== 11001375 WWindow::OnSetFocus

/* public: virtual void __thiscall WWindow::OnSetFocus(struct HWND__ *) */

void __thiscall WWindow::OnSetFocus(WWindow *this,HWND__ *param_1)

{
                    /* 0x1375  829  ?OnSetFocus@WWindow@@UAEXPAUHWND__@@@Z */
  return;
}


// ==== 1100137a WProgressBar::GetPackageName

/* public: virtual unsigned short const * __thiscall WProgressBar::GetPackageName(void) */

ushort * __thiscall WProgressBar::GetPackageName(WProgressBar *this)

{
                    /* 0x137a  545  ?GetPackageName@WProgressBar@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 1100137f WWizardPage::GetShow

/* public: virtual int __thiscall WWizardPage::GetShow(void) */

int __thiscall WWizardPage::GetShow(WWizardPage *this)

{
                    /* 0x137f  588  ?GetShow@WWizardPage@@UAEHXZ */
  return 1;
}


// ==== 11001384 FPropertyItem::operator=

/* public: class FPropertyItem & __thiscall FPropertyItem::operator=(class FPropertyItem const &) */

FPropertyItem * __thiscall FPropertyItem::operator=(FPropertyItem *this,FPropertyItem *param_1)

{
                    /* 0x1384  251  ??4FPropertyItem@@QAEAAV0@ABV0@@Z */
  FTreeItem::operator=((FTreeItem *)this,(FTreeItem *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  FString::operator=((FString *)(this + 0x74),(FString *)(param_1 + 0x74));
  return this;
}


// ==== 11001389 WRichEdit::WRichEdit

/* public: __thiscall WRichEdit::WRichEdit(void) */

WRichEdit * __thiscall WRichEdit::WRichEdit(WRichEdit *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1389  132  ??0WRichEdit@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062eb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100138e thunk_FUN_110143a0 thunk -> 110143a0

// ==== 11001393 WWizardDialog::Advance

/* public: virtual void __thiscall WWizardDialog::Advance(class WWizardPage *) */

void __thiscall WWizardDialog::Advance(WWizardDialog *this,WWizardPage *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1393  404  ?Advance@WWizardDialog@@UAEXPAVWWizardPage@@@Z */
  puStack_c = &LAB_110602a0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (param_1 == (WWizardPage *)0x0) {
    ExceptionList = &pvStack_10;
    appFailAssert(s_NewPage_1106b4a8,s___Dialogs_cpp_1106b4b4,0xb9);
  }
  thunk_FUN_1100ff90(this + 0x2ec,&param_1);
  if (*(int *)(this + 4) != 0) {
    (**(code **)(*(int *)this + 0xf4))();
  }
  puVar1 = (undefined4 *)thunk_FUN_1100f510(this + 0x2ec,0);
  iVar2 = (**(code **)(*(int *)*puVar1 + 0x108))();
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0xfc))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001398 WTabControl::GetCurrent

/* public: int __thiscall WTabControl::GetCurrent(void) */

int __thiscall WTabControl::GetCurrent(WTabControl *this)

{
  LRESULT LVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1398  496  ?GetCurrent@WTabControl@@QAEHXZ */
  puStack_c = &LAB_1105f910;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &pvStack_10;
    LVar1 = SendMessageW(*(HWND *)(this + 4),0x132f,0,0);
    ExceptionList = pvStack_10;
    return LVar1;
  }
  ExceptionList = &pvStack_10;
  LVar1 = SendMessageA(*(HWND *)(this + 4),0x132f,0,0);
  ExceptionList = pvStack_10;
  return LVar1;
}


// ==== 1100139d WCustomLabel::GetWindowClassName

/* public: virtual void __thiscall WCustomLabel::GetWindowClassName(unsigned short *) */

void __thiscall WCustomLabel::GetWindowClassName(WCustomLabel *this,ushort *param_1)

{
                    /* 0x139d  610  ?GetWindowClassName@WCustomLabel@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WCustomLabel_1106faac);
  return;
}


// ==== 110013a2 thunk_FUN_11015ea0 thunk -> 11015ea0

// ==== 110013a7 FPropertyItem::OnSetCursor

/* public: virtual int __thiscall FPropertyItem::OnSetCursor(void) */

int __thiscall FPropertyItem::OnSetCursor(FPropertyItem *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  HCURSOR hCursor;
  int iVar4;
  int *piVar5;
  undefined1 auStack_3c [16];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x13a7  821  ?OnSetCursor@FPropertyItem@@UAEHXZ */
  puStack_c = &LAB_11060c40;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffb8;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  piVar1 = (int *)(**(code **)(*(int *)this + 0x24))(auStack_3c);
  piVar5 = &iStack_2c;
  piVar2 = (int *)WWindow::GetCursorPos(*(WWindow **)(this + 8));
  iStack_20 = piVar2[1];
  iVar4 = *piVar2 - *piVar1;
  iStack_28 = iStack_20 - piVar1[1];
  iStack_2c = iVar4;
  iStack_24 = iVar4;
  iVar3 = (**(code **)(**(int **)(this + 8) + 0xec))(piVar5);
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
    ExceptionList = pvStack_10;
    return 1;
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 110013ac WProperties::SetItemFocus

/* public: virtual void __thiscall WProperties::SetItemFocus(int) */

void __thiscall WProperties::SetItemFocus(WProperties *this,int param_1)

{
  int iVar1;
  FTreeItem *pFVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x13ac  933  ?SetItemFocus@WProperties@@UAEXH@Z */
  puStack_c = &LAB_110606c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int **)(this + 0xd0) != (int *)0x0) {
    ExceptionList = &pvStack_10;
    (**(code **)(**(int **)(this + 0xd0) + 0x30))(0);
  }
  *(undefined4 *)(this + 0xd0) = 0;
  if (param_1 != 0) {
    iVar1 = WListBox::GetCount((WListBox *)(this + 0x44));
    if (0 < iVar1) {
      iVar1 = WListBox::GetCurrent((WListBox *)(this + 0x44));
      pFVar2 = WPropertiesBase::GetListItem((WPropertiesBase *)this,iVar1);
      *(FTreeItem **)(this + 0xd0) = pFVar2;
    }
  }
  if (*(int **)(this + 0xd0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xd0) + 0x2c))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110013b1 FPropertyItem::OnClearButton

/* public: void __thiscall FPropertyItem::OnClearButton(void) */

void __thiscall FPropertyItem::OnClearButton(FPropertyItem *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x13b1  697  ?OnClearButton@FPropertyItem@@QAEXXZ */
  puStack_c = &LAB_11060530;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(*(int *)this + 0x8c))(u_None_1106bdec);
  (**(code **)(*(int *)this + 0x28))();
  if (*(int *)(this + 0x5c) != 0) {
    (**(code **)(*(int *)this + 0x50))();
    (**(code **)(*(int *)this + 0x54))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110013b6 thunk_FUN_1101bed0 thunk -> 1101bed0

// ==== 110013bb thunk_FUN_1102acd0 thunk -> 1102acd0

// ==== 110013c0 FTreeItem::Expand

/* public: virtual void __thiscall FTreeItem::Expand(void) */

void __thiscall FTreeItem::Expand(FTreeItem *this)

{
  FTreeItem *pFVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x13c0  454  ?Expand@FTreeItem@@UAEXXZ */
  puStack_c = &LAB_110611c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 0x18) != 0) {
    ExceptionList = &pvStack_10;
    thunk_FUN_1101c1f0(*(int *)(this + 0x30),*(int *)(this + 0x34));
  }
  pFVar1 = (FTreeItem *)(**(code **)(**(int **)(this + 8) + 0xe8))();
  if (this == pFVar1) {
    for (iVar2 = 0; iVar2 < *(int *)(this + 0x34); iVar2 = iVar2 + 1) {
      WListBox::AddItem((WListBox *)(*(int *)(this + 8) + 0x44),
                        *(void **)(*(int *)(this + 0x30) + iVar2 * 4));
    }
  }
  else {
    iVar2 = *(int *)(this + 0x34);
    while( true ) {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) break;
      WListBox::InsertItemAfter
                ((WListBox *)(*(int *)(this + 8) + 0x44),this,
                 *(void **)(*(int *)(this + 0x30) + iVar2 * 4));
    }
  }
  (**(code **)(**(int **)(this + 8) + 0xf4))(0);
  (**(code **)(**(int **)(this + 8) + 0xf0))();
  *(undefined4 *)(this + 0x14) = 1;
  ExceptionList = pvStack_10;
  return;
}


// ==== 110013c5 WEdit::Eval

/* public: virtual int __thiscall WEdit::Eval(class FString,float *) */

int __thiscall WEdit::Eval(void)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  undefined4 *in_stack_00000010;
  wchar_t *pwVar4;
  FString aFStack_44 [12];
  FString aFStack_38 [20];
  int *piStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x13c5  447  ?Eval@WEdit@@UAEHVFString@@PAM@Z */
  puStack_c = &LAB_1106099b;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffb0;
  iVar3 = 0;
  uStack_8._0_1_ = 1;
  uStack_8._1_3_ = 0;
  iStack_18 = 0;
  ExceptionList = &pvStack_10;
  while( true ) {
    iStack_20 = iVar3;
    iVar1 = FString::Len((FString *)&stack0x00000004);
    if (iVar1 <= iVar3) break;
    pFVar2 = (FString *)FString::Mid((FString *)&stack0x00000004,(int)aFStack_38,iVar3);
    uStack_8._0_1_ = 2;
    iVar1 = FString::operator==(pFVar2,(ushort *)&DAT_1106cc74);
    uStack_8._0_1_ = 1;
    FString::~FString(aFStack_38);
    if (iVar1 == 0) {
      pFVar2 = (FString *)FString::Mid((FString *)&stack0x00000004,(int)aFStack_44,iVar3);
      uStack_8._0_1_ = 3;
      iVar1 = FString::operator==(pFVar2,(ushort *)&DAT_1106cc70);
      uStack_8._0_1_ = 1;
      FString::~FString(aFStack_44);
      if (iVar1 != 0) {
        iStack_18 = iStack_18 + -1;
      }
      iVar3 = iVar3 + 1;
    }
    else {
      iStack_18 = iStack_18 + 1;
      iVar3 = iVar3 + 1;
    }
  }
  if (iStack_18 == 0) {
    iVar3 = (**(code **)(*piStack_24 + 0xec))(&stack0x00000004,&uStack_1c,0);
    if (iVar3 != 0) goto LAB_11014b57;
    pwVar4 = u_Error_in_expression__1106cc08;
  }
  else {
    pwVar4 = u_Mismatched_brackets__1106cc3c;
  }
  appMsgf(0,(ushort *)pwVar4);
  uStack_1c = 0;
LAB_11014b57:
  *in_stack_00000010 = uStack_1c;
  uStack_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 110013cf WTreeView::OnRightButtonDown

/* public: virtual void __thiscall WTreeView::OnRightButtonDown(void) */

void __thiscall WTreeView::OnRightButtonDown(WTreeView *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x13cf  818  ?OnRightButtonDown@WTreeView@@UAEXXZ */
  puStack_c = &LAB_1105f720;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    PostMessageA(*(HWND *)(*(int *)(this + 0x14) + 4),0x111,0x801e,0);
  }
  else {
    ExceptionList = &pvStack_10;
    PostMessageW(*(HWND *)(*(int *)(this + 0x14) + 4),0x111,0x801e,0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110013d4 FControlSnoop::SnoopChar

/* public: virtual void __thiscall FControlSnoop::SnoopChar(class WWindow *,int) */

void __thiscall FControlSnoop::SnoopChar(FControlSnoop *this,WWindow *param_1,int param_2)

{
                    /* 0x13d4  972  ?SnoopChar@FControlSnoop@@UAEXPAVWWindow@@H@Z */
  return;
}


// ==== 110013d9 FTreeItem::GetStates

/* public: virtual void __thiscall FTreeItem::GetStates(class TArray<class FName> &) */

void __thiscall FTreeItem::GetStates(FTreeItem *this,TArray<FName> *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x13d9  590  ?GetStates@FTreeItem@@UAEXAAV?$TArray@VFName@@@@@Z */
  puStack_c = &LAB_110603d0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0xc) != 0) {
    ExceptionList = &pvStack_10;
    (**(code **)(**(int **)(this + 0xc) + 0x74))(param_1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110013de WLabel::OpenWindow

/* public: void __thiscall WLabel::OpenWindow(int,int,unsigned long) */

void __thiscall WLabel::OpenWindow(WLabel *this,int param_1,int param_2,ulong param_3)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x13de  861  ?OpenWindow@WLabel@@QAEXHHK@Z */
  puStack_c = &LAB_1105f970;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,-(uint)(param_2 != 0) & 0x200,(ushort *)0x0,
             -(uint)(param_1 != 0) & 0x10000000 | param_3 | 0x40000000,0,0,0,0,
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


// ==== 110013e3 WWindow::PerformCreateWindowEx

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall WWindow::PerformCreateWindowEx(unsigned long,unsigned short const
   *,unsigned long,int,int,int,int,struct HWND__ *,struct HMENU__ *,struct HINSTANCE__ *) */

void __thiscall
WWindow::PerformCreateWindowEx
          (WWindow *this,ulong param_1,ushort *param_2,ulong param_3,int param_4,int param_5,
          int param_6,int param_7,HWND__ *param_8,HMENU__ *param_9,HINSTANCE__ *param_10)

{
  FName *this_00;
  undefined1 *puVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  HWND pHVar5;
  int iVar6;
  char *lpWindowName;
  ushort *puVar7;
  char *pcVar8;
  int iVar9;
  int nHeight;
  HWND__ *hWndParent;
  HMENU__ *hMenu;
  ushort *puVar10;
  HINSTANCE__ *hInstance;
  undefined4 uVar11;
  WWindow *lpParam;
  ushort auStack_430 [256];
  WCHAR aWStack_230 [262];
  int iStack_24;
  int iStack_20;
  WWindow *pWStack_1c;
  WWindow *pWStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x13e3  884
                       ?PerformCreateWindowEx@WWindow@@QAEXKPBGKHHHHPAUHWND__@@PAUHMENU__@@PAUHINSTANCE__@@@Z
                        */
  puVar7 = param_2;
  puStack_c = &LAB_110621f0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffbc4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pWStack_18 = this;
  puVar1 = &stack0xfffffbc4;
  if (*(int *)(this + 4) != 0) {
    ExceptionList = &pvStack_10;
    appFailAssert(s_hWnd__NULL_11070cf0,s___Window_cpp_1106f624,0x38c);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  FName::FName((FName *)&pWStack_1c,0);
  this_00 = (FName *)(this + 8);
  iVar2 = FName::operator!=(this_00,(FName *)&pWStack_1c);
  if (iVar2 != 0) {
    iVar2 = **(int **)GConfig_exref;
    uVar11 = 0x100;
    puVar10 = auStack_430;
    puVar3 = FName::operator*(this_00);
    iVar2 = (**(code **)(iVar2 + 0x10))(u_WindowPositions_1106dcec,puVar3,puVar10,uVar11);
    if (iVar2 != 0) {
      Parse(auStack_430,(ushort *)&DAT_11070ce8,&param_4);
      Parse(auStack_430,(ushort *)&DAT_11070ce0,&param_5);
      if ((param_3 & 0x40000) != 0) {
        Parse(auStack_430,(ushort *)&DAT_11070cd4,&param_6);
        Parse(auStack_430,(ushort *)&DAT_11070cc8,&param_7);
      }
      iVar2 = 0;
      iVar9 = 0;
      while( true ) {
        iStack_24 = iVar2;
        iStack_20 = iVar9;
        if (DAT_1109c4fc <= iVar9) break;
        iVar4 = FName::operator==((FName *)(*(int *)(__Windows + iVar9 * 4) + 8),this_00);
        iVar2 = iVar2 + iVar4;
        iVar9 = iVar9 + 1;
      }
      if (iVar2 != 0) {
        param_4 = param_4 + iVar2 * 0x10;
        param_5 = param_5 + iVar2 * 0x10;
      }
      VerifyPosition(pWStack_18);
      this = pWStack_18;
    }
  }
  pWStack_1c = this;
  thunk_FUN_1101bea0(&_Windows,&pWStack_1c);
  (**(code **)(*(int *)this + 0x18))();
  if (*(int *)GUnicodeOS_exref == 0) {
    iVar2 = winGetSizeANSI(param_2);
    if (iVar2 == 0) {
      param_2 = (ushort *)0x0;
    }
    else {
      winGetSizeANSI(param_2);
      puStack_14 = &stack0xfffffbc0;
      param_2 = (ushort *)&stack0xfffffbc0;
    }
    iVar2 = winGetSizeANSI((ushort *)aWStack_230);
    if (iVar2 == 0) {
      pcVar8 = (char *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)aWStack_230);
      puStack_14 = &stack0xfffffbc0;
      pcVar8 = &stack0xfffffbc0;
    }
    iVar2 = param_4;
    iVar9 = param_5;
    iVar4 = param_6;
    nHeight = param_7;
    hWndParent = param_8;
    hMenu = param_9;
    hInstance = hInstanceWindow;
    lpParam = pWStack_18;
    iVar6 = winGetSizeANSI(puVar7);
    lpWindowName = winToANSI((char *)param_2,puVar7,iVar6);
    iVar6 = winGetSizeANSI((ushort *)aWStack_230);
    pcVar8 = winToANSI(pcVar8,(ushort *)aWStack_230,iVar6);
    pHVar5 = CreateWindowExA(param_1,pcVar8,lpWindowName,param_3,iVar2,iVar9,iVar4,nHeight,
                             hWndParent,hMenu,hInstance,lpParam);
    this = pWStack_18;
  }
  else {
    pHVar5 = CreateWindowExW(param_1,aWStack_230,(LPCWSTR)param_2,param_3,param_4,param_5,param_6,
                             param_7,param_8,param_9,hInstanceWindow,this);
  }
  if (pHVar5 == (HWND)0x0) {
    puVar7 = appGetSystemErrorMessage(0);
    FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref,
                        u_CreateWindowEx_failed___s_11070c88,puVar7);
    appFailAssert(s_hWndCreated_11070c78,s___Window_cpp_1106f624,0x3b5);
  }
  if (pHVar5 != *(HWND *)(this + 4)) {
    appFailAssert(s_hWndCreated__hWnd_11070c60,s___Window_cpp_1106f624,0x3b6);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110013e8 thunk_FUN_110262c0 thunk -> 110262c0

// ==== 110013f7 thunk_FUN_11004bc0 thunk -> 11004bc0

// ==== 11001401 thunk_FUN_110070e0 thunk -> 110070e0

// ==== 11001406 WBitmapButton::GetPackageName

/* public: virtual unsigned short const * __thiscall WBitmapButton::GetPackageName(void) */

ushort * __thiscall WBitmapButton::GetPackageName(WBitmapButton *this)

{
                    /* 0x1406  523  ?GetPackageName@WBitmapButton@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11001410 FContainer::operator=

/* public: class FContainer & __thiscall FContainer::operator=(class FContainer const &) */

FContainer * __thiscall FContainer::operator=(FContainer *this,FContainer *param_1)

{
                    /* 0x1410  243  ??4FContainer@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  return this;
}


// ==== 11001415 WButton::GetPackageName

/* public: virtual unsigned short const * __thiscall WButton::GetPackageName(void) */

ushort * __thiscall WButton::GetPackageName(WButton *this)

{
                    /* 0x1415  524  ?GetPackageName@WButton@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 1100141a FDelegateInt::`default_constructor_closure'

/* public: void __thiscall FDelegateInt::`default constructor closure'(void) */

void __thiscall FDelegateInt::_default_constructor_closure_(FDelegateInt *this)

{
                    /* 0x141a  389  ??_FFDelegateInt@@QAEXXZ */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


// ==== 1100141f WCoolButton::GetPackageName

/* public: virtual unsigned short const * __thiscall WCoolButton::GetPackageName(void) */

ushort * __thiscall WCoolButton::GetPackageName(WCoolButton *this)

{
                    /* 0x141f  531  ?GetPackageName@WCoolButton@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11001424 WToolTip::GetWindowClassName

/* public: virtual void __thiscall WToolTip::GetWindowClassName(unsigned short *) */

void __thiscall WToolTip::GetWindowClassName(WToolTip *this,ushort *param_1)

{
                    /* 0x1424  636  ?GetWindowClassName@WToolTip@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WToolTip_110696fc);
  return;
}


// ==== 11001429 WEdit::GetReadOnly

/* public: int __thiscall WEdit::GetReadOnly(void) */

int __thiscall WEdit::GetReadOnly(WEdit *this)

{
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1429  578  ?GetReadOnly@WEdit@@QAEHXZ */
  puStack_c = &LAB_1105fbe0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 4) == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert(&DAT_11068b4c,s___Controls_cpp_11068b54,0x5ed);
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    uVar1 = GetWindowLongA(*(HWND *)(this + 4),-0x10);
  }
  else {
    uVar1 = GetWindowLongW(*(HWND *)(this + 4),-0x10);
  }
  ExceptionList = pvStack_10;
  return uVar1 >> 0xb & 1;
}


// ==== 1100142e FObjectsItem::GrabChar

/* public: class FString __thiscall FObjectsItem::GrabChar(class FString *) */

FString * __thiscall FObjectsItem::GrabChar(FObjectsItem *this,FString *param_1)

{
  int iVar1;
  FString *pFVar2;
  FString *in_stack_00000008;
  FString aFStack_38 [12];
  FString aFStack_2c [20];
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x142e  646  ?GrabChar@FObjectsItem@@QAE?AVFString@@PAV2@@Z */
  puStack_c = &LAB_1106074c;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffbc;
  uStack_18 = 0;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  FString::FString(param_1);
  uStack_18 = 1;
  iVar1 = FString::Len(in_stack_00000008);
  if (iVar1 == 0) {
    FString::operator=(param_1,(ushort *)&DAT_11068ff8);
  }
  else {
    do {
      pFVar2 = (FString *)FString::Left(in_stack_00000008,(int)aFStack_2c);
      uStack_8._0_1_ = 2;
      FString::operator=(param_1,pFVar2);
      uStack_8._0_1_ = 1;
      FString::~FString(aFStack_2c);
      pFVar2 = (FString *)FString::Mid(in_stack_00000008,(int)aFStack_38,1);
      uStack_8._0_1_ = 3;
      FString::operator=(in_stack_00000008,pFVar2);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      FString::~FString(aFStack_38);
      iVar1 = FString::operator==(param_1,(ushort *)&DAT_1106c3a8);
    } while (iVar1 != 0);
  }
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 11001433 WWindow::GetPackageName

/* public: virtual unsigned short const * __thiscall WWindow::GetPackageName(void) */

ushort * __thiscall WWindow::GetPackageName(WWindow *this)

{
                    /* 0x1433  564  ?GetPackageName@WWindow@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11001438 WListBox::~WListBox

/* public: virtual __thiscall WListBox::~WListBox(void) */

void __thiscall WListBox::~WListBox(WListBox *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1438  211  ??1WListBox@@UAE@XZ */
  puStack_8 = &LAB_11063538;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WControl::~WControl((WControl *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1100143d WButton::WButton

/* public: __thiscall WButton::WButton(class WButton const &) */

WButton * __thiscall WButton::WButton(WButton *this,WButton *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x143d  49  ??0WButton@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062878;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,(WControl *)param_1);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined ***)(this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined ***)(this + 0x58) = FDelegate::vftable;
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined ***)(this + 100) = FDelegate::vftable;
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined ***)(this + 0x70) = FDelegate::vftable;
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined ***)(this + 0x7c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001442 WClassProperties::GetRoot

/* public: virtual class FTreeItem * __thiscall WClassProperties::GetRoot(void) */

FTreeItem * __thiscall WClassProperties::GetRoot(WClassProperties *this)

{
                    /* 0x1442  580  ?GetRoot@WClassProperties@@UAEPAVFTreeItem@@XZ */
  return (FTreeItem *)(this + 0xfc);
}


// ==== 11001447 WWindow::InterceptControlCommand

/* public: virtual int __thiscall WWindow::InterceptControlCommand(unsigned int,unsigned int,long)
    */

int __thiscall
WWindow::InterceptControlCommand(WWindow *this,uint param_1,uint param_2,long param_3)

{
                    /* 0x1447  662  ?InterceptControlCommand@WWindow@@UAEHIIJ@Z */
  return 0;
}


// ==== 1100144c WEdit::OpenWindow

/* public: void __thiscall WEdit::OpenWindow(int,int,int,int,int,int) */

void __thiscall
WEdit::OpenWindow(WEdit *this,int param_1,int param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x144c  859  ?OpenWindow@WEdit@@QAEXHHHHHH@Z */
  puStack_c = &LAB_1105fbd0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0x200,(ushort *)0x0,
             -(uint)(param_6 != 0) & 0x2000 | -(uint)(param_1 != 0) & 0x10000000 |
             -(uint)(param_3 != 0) & 0x800 | -(uint)(param_5 != 0) & 0x100 |
             -(uint)(param_2 != 0) & 0x200004 | -(uint)(param_4 != 0) & 0x100000 | 0x400000c0,0,0,0,
             0,*(HWND__ **)(*(int *)(this + 0x14) + 4),(HMENU__ *)(uint)*(ushort *)(this + 0xc),
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


// ==== 11001451 WSplitterContainer::OpenWindow

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall WSplitterContainer::OpenWindow(int) */

void __thiscall WSplitterContainer::OpenWindow(WSplitterContainer *this,int param_1)

{
  HWND__ *pHVar1;
  HGDIOBJ pvVar2;
  WSplitter *pWVar3;
  WSplitterPane *pWVar4;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1451  873  ?OpenWindow@WSplitterContainer@@UAEXH@Z */
  puStack_c = &LAB_11064381;
  pvStack_10 = ExceptionList;
  iStack_8 = 0;
  if (*(int *)(this + 0x14) == 0) {
    pHVar1 = (HWND__ *)0x0;
  }
  else {
    pHVar1 = *(HWND__ **)(*(int *)(this + 0x14) + 4);
  }
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)0x0,0x56000000,0,0,0,0,pHVar1,(HMENU__ *)0x0,DAT_1109c35c);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar2 = GetStockObject(0x11);
    SendMessageA(*(HWND *)(this + 4),0x30,(WPARAM)pvVar2,lParam);
  }
  else {
    pvVar2 = GetStockObject(0x11);
    SendMessageW(*(HWND *)(this + 4),0x30,(WPARAM)pvVar2,lParam);
  }
  pWVar3 = (WSplitter *)thunk_FUN_11004ba0(0x44);
  iStack_8._0_1_ = 1;
  if (pWVar3 == (WSplitter *)0x0) {
    pWVar3 = (WSplitter *)0x0;
  }
  else {
    pWVar3 = (WSplitter *)WSplitter::WSplitter(pWVar3,(WWindow *)this);
  }
  iStack_8._0_1_ = 0;
  *(WSplitter **)(this + 0x3c) = pWVar3;
  WSplitter::OpenWindow(pWVar3,param_1);
  SetPct(this,_DAT_11074074);
  pWVar4 = (WSplitterPane *)thunk_FUN_11004ba0(0x3c);
  iStack_8._0_1_ = 2;
  if (pWVar4 == (WSplitterPane *)0x0) {
    pWVar4 = (WSplitterPane *)0x0;
  }
  else {
    pWVar4 = (WSplitterPane *)WSplitterPane::WSplitterPane(pWVar4,(WWindow *)this);
  }
  iStack_8._0_1_ = 0;
  *(WSplitterPane **)(this + 0x40) = pWVar4;
  WSplitterPane::OpenWindow(pWVar4);
  pWVar4 = (WSplitterPane *)thunk_FUN_11004ba0(0x3c);
  iStack_8._0_1_ = 3;
  if (pWVar4 == (WSplitterPane *)0x0) {
    pWVar4 = (WSplitterPane *)0x0;
  }
  else {
    pWVar4 = (WSplitterPane *)WSplitterPane::WSplitterPane(pWVar4,(WWindow *)this);
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  *(WSplitterPane **)(this + 0x44) = pWVar4;
  WSplitterPane::OpenWindow(pWVar4);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001456 WComboBox::FindStringExact

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: virtual int __thiscall WComboBox::FindStringExact(unsigned short const *) */

int __thiscall WComboBox::FindStringExact(WComboBox *this,ushort *param_1)

{
  HWND hWnd;
  int iVar1;
  char *pcVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1456  462  ?FindStringExact@WComboBox@@UAEHPBG@Z */
  puStack_c = &LAB_1105fbb0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
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
    iVar1 = SendMessageA(hWnd,0x158,0xffffffff,(LPARAM)pcVar2);
  }
  else {
    ExceptionList = &pvStack_10;
    iVar1 = SendMessageW(*(HWND *)(this + 4),0x158,0xffffffff,(LPARAM)param_1);
  }
  ExceptionList = pvStack_10;
  return iVar1;
}


// ==== 1100145b WDragInterceptor::ToggleDraw

/* public: virtual void __thiscall WDragInterceptor::ToggleDraw(struct HDC__ *) */

void __thiscall WDragInterceptor::ToggleDraw(WDragInterceptor *this,HDC__ *param_1)

{
  HDC__ *hdc;
  HGDIOBJ h;
  int iVar1;
  int *piVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x145b  1012  ?ToggleDraw@WDragInterceptor@@UAEXPAUHDC__@@@Z */
  puStack_c = &LAB_11061fb0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  hdc = param_1;
  ExceptionList = &pvStack_10;
  if (param_1 == (HDC__ *)0x0) {
    ExceptionList = &pvStack_10;
    hdc = GetDC(*(HWND *)(*(int *)(this + 0x14) + 4));
  }
  h = SelectObject(hdc,hBrushWhite);
  if (*(int *)(this + 0x44) != -1) {
    iVar1 = WWindow::GetClientRect(*(WWindow **)(this + 0x14));
    PatBlt(hdc,*(int *)(this + 0x4c),0,*(int *)(this + 0x5c),
           *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 4),0x5a0049);
  }
  if (*(int *)(this + 0x48) != -1) {
    piVar2 = (int *)WWindow::GetClientRect(*(WWindow **)(this + 0x14));
    PatBlt(hdc,0,*(int *)(this + 0x50),piVar2[2] - *piVar2,*(int *)(this + 0x60),0x5a0049);
  }
  if (param_1 == (HDC__ *)0x0) {
    ReleaseDC(*(HWND *)(this + 4),hdc);
  }
  SelectObject(hdc,h);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001465 WColorButton::WColorButton

/* public: __thiscall WColorButton::WColorButton(class WColorButton const &) */

WColorButton * __thiscall WColorButton::WColorButton(WColorButton *this,WColorButton *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1465  61  ??0WColorButton@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062978;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WButton::WButton((WButton *)this,(WButton *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100146a FPropertyItem::OnItemLeftMouseDown

/* public: virtual void __thiscall FPropertyItem::OnItemLeftMouseDown(struct FPoint) */

void __thiscall FPropertyItem::OnItemLeftMouseDown(FPropertyItem *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [8];
  int iStack_28;
  int iStack_24;
  wchar_t *pwStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x146a  751  ?OnItemLeftMouseDown@FPropertyItem@@UAEXUFPoint@@@Z */
  puStack_c = &LAB_11060c50;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffb4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  piVar1 = (int *)(**(code **)(*(int *)this + 0x24))(auStack_40);
  puVar6 = auStack_30;
  piVar2 = (int *)WWindow::GetCursorPos(*(WWindow **)(this + 8));
  iStack_24 = piVar2[1];
  iVar5 = *piVar2 - *piVar1;
  iVar4 = iStack_24 - piVar1[1];
  iStack_28 = iVar5;
  iVar3 = (**(code **)(**(int **)(this + 8) + 0xec))(puVar6);
  iVar3 = iVar5 - iVar3;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar3 < 3) {
    (**(code **)(**(int **)(this + 8) + 0xfc))();
    pwStack_18 = u_NoRoute_1106b458;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&pwStack_18,&DAT_1107a670);
  }
  FTreeItem::OnItemLeftMouseDown((FTreeItem *)this,iVar5,iVar4);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100146f FUDNHelpTopic::FUDNHelpTopic

/* public: __thiscall FUDNHelpTopic::FUDNHelpTopic(class FUDNHelpTopic const &) */

FUDNHelpTopic * __thiscall FUDNHelpTopic::FUDNHelpTopic(FUDNHelpTopic *this,FUDNHelpTopic *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x146f  39  ??0FUDNHelpTopic@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11061cb5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)this,(FString *)param_1);
  uStack_4 = 0;
  FString::FString((FString *)(this + 0xc),(FString *)(param_1 + 0xc));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001474 FWindowsBitmap::LoadFile

/* public: int __thiscall FWindowsBitmap::LoadFile(unsigned short const *) */

int __thiscall FWindowsBitmap::LoadFile(FWindowsBitmap *this,ushort *param_1)

{
  HBITMAP__ *pHVar1;
  
                    /* 0x1474  668  ?LoadFile@FWindowsBitmap@@QAEHPBG@Z */
  if (*(HGDIOBJ *)(this + 0xc) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(this + 0xc));
  }
  pHVar1 = LoadFileToBitmap(param_1,(int *)this,(int *)(this + 4));
  *(HBITMAP__ **)(this + 0xc) = pHVar1;
  return (uint)(pHVar1 != (HBITMAP__ *)0x0);
}


// ==== 11001479 WComboBox::GetWindowClassName

/* public: virtual void __thiscall WComboBox::GetWindowClassName(unsigned short *) */

void __thiscall WComboBox::GetWindowClassName(WComboBox *this,ushort *param_1)

{
                    /* 0x1479  606  ?GetWindowClassName@WComboBox@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WComboBox_1106ca9c);
  return;
}


// ==== 1100147e thunk_FUN_11032850 thunk -> 11032850

// ==== 11001483 thunk_FUN_1102a610 thunk -> 1102a610

// ==== 11001488 WSplitterContainer::GetWindowClassName

/* public: virtual void __thiscall WSplitterContainer::GetWindowClassName(unsigned short *) */

void __thiscall WSplitterContainer::GetWindowClassName(WSplitterContainer *this,ushort *param_1)

{
                    /* 0x1488  629  ?GetWindowClassName@WSplitterContainer@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WSplitterContainer_1106fe50);
  return;
}


// ==== 1100148d WTreeView::AddItem

/* public: struct _TREEITEM * __thiscall WTreeView::AddItem(unsigned short const *,struct _TREEITEM
   *,int) */

_TREEITEM * __thiscall
WTreeView::AddItem(WTreeView *this,ushort *param_1,_TREEITEM *param_2,int param_3)

{
  _TREEITEM *p_Var1;
  ushort auStack_24c [2];
  undefined1 auStack_248 [508];
  _TREEITEM *p_Stack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ushort *puStack_34;
  undefined4 uStack_24;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x148d  397  ?AddItem@WTreeView@@QAEPAU_TREEITEM@@PBGPAU2@H@Z */
  puStack_c = &LAB_1105fae0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffda8;
  uStack_8 = 0;
  auStack_24c[0] = 0;
  auStack_24c[1] = 0;
  ExceptionList = &pvStack_10;
  _memset(auStack_248,0,0x1fc);
  appStrcpy(auStack_24c,param_1);
  p_Stack_4c = param_2;
  uStack_48 = 0xffff0003;
  uStack_44 = 1;
  puStack_34 = auStack_24c;
  if (param_3 != 0) {
    uStack_44 = 0x41;
    uStack_24 = 1;
  }
  if (*(int *)GUnicodeOS_exref != 0) {
    p_Var1 = (_TREEITEM *)SendMessageW(*(HWND *)(this + 4),0x1132,0,(LPARAM)&p_Stack_4c);
    ExceptionList = pvStack_10;
    return p_Var1;
  }
  p_Var1 = (_TREEITEM *)SendMessageA(*(HWND *)(this + 4),0x1132,0,(LPARAM)&p_Stack_4c);
  ExceptionList = pvStack_10;
  return p_Var1;
}


// ==== 11001492 WCrashBoxDialog::~WCrashBoxDialog

/* public: virtual __thiscall WCrashBoxDialog::~WCrashBoxDialog(void) */

void __thiscall WCrashBoxDialog::~WCrashBoxDialog(WCrashBoxDialog *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x1492  202  ??1WCrashBoxDialog@@UAE@XZ */
  puStack_8 = &LAB_11063293;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  iStack_4 = 6;
  WWindow::MaybeDestroy((WWindow *)this);
  iStack_4._0_1_ = 5;
  FString::~FString((FString *)(this + 0x274));
  iStack_4._0_1_ = 4;
  FString::~FString((FString *)(this + 0x268));
  iStack_4._0_1_ = 3;
  WCoolButton::~WCoolButton((WCoolButton *)(this + 0x1cc));
  iStack_4._0_1_ = 2;
  WCoolButton::~WCoolButton((WCoolButton *)(this + 0x130));
  iStack_4._0_1_ = 1;
  WCoolButton::~WCoolButton((WCoolButton *)(this + 0x94));
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  WEdit::~WEdit((WEdit *)(this + 0x3c));
  iStack_4 = 0xffffffff;
  WWindow::~WWindow((WWindow *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11001497 WTabControl::GetCount

/* public: int __thiscall WTabControl::GetCount(void) */

int __thiscall WTabControl::GetCount(WTabControl *this)

{
  LRESULT LVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1497  492  ?GetCount@WTabControl@@QAEHXZ */
  puStack_c = &LAB_1105f8f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &pvStack_10;
    LVar1 = SendMessageW(*(HWND *)(this + 4),0x1304,0,0);
    ExceptionList = pvStack_10;
    return LVar1;
  }
  ExceptionList = &pvStack_10;
  LVar1 = SendMessageA(*(HWND *)(this + 4),0x1304,0,0);
  ExceptionList = pvStack_10;
  return LVar1;
}


// ==== 1100149c WListBox::WListBox

/* public: __thiscall WListBox::WListBox(void) */

WListBox * __thiscall WListBox::WListBox(WListBox *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x149c  104  ??0WListBox@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063558;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined ***)(this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined ***)(this + 0x58) = FDelegate::vftable;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined ***)(this + 100) = FDelegate::vftable;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined ***)(this + 0x70) = FDelegate::vftable;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined ***)(this + 0x7c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110014a1 WTreeView::GetWindowClassName

/* public: virtual void __thiscall WTreeView::GetWindowClassName(unsigned short *) */

void __thiscall WTreeView::GetWindowClassName(WTreeView *this,ushort *param_1)

{
                    /* 0x14a1  638  ?GetWindowClassName@WTreeView@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WTreeView_1106fbcc);
  return;
}


// ==== 110014ab thunk_FUN_1100dea0 thunk -> 1100dea0

// ==== 110014b0 WTimeScrollBar::operator=

/* public: class WTimeScrollBar & __thiscall WTimeScrollBar::operator=(class WTimeScrollBar const &)
    */

WTimeScrollBar * __thiscall WTimeScrollBar::operator=(WTimeScrollBar *this,WTimeScrollBar *param_1)

{
                    /* 0x14b0  296  ??4WTimeScrollBar@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  return this;
}


// ==== 110014b5 WLabel::operator=

/* public: class WLabel & __thiscall WLabel::operator=(class WLabel const &) */

WLabel * __thiscall WLabel::operator=(WLabel *this,WLabel *param_1)

{
                    /* 0x14b5  277  ??4WLabel@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return this;
}


// ==== 110014ba WSplitterPane::WSplitterPane

/* public: __thiscall WSplitterPane::WSplitterPane(class WSplitterPane const &) */

WSplitterPane * __thiscall WSplitterPane::WSplitterPane(WSplitterPane *this,WSplitterPane *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14ba  141  ??0WSplitterPane@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11064248;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow::WWindow((WWindow *)this,(WWindow *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110014bf thunk_FUN_1102e380 thunk -> 1102e380

// ==== 110014c4 WDialog::LocalizeTextEnumProc

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: static int __stdcall WDialog::LocalizeTextEnumProc(struct HWND__ *,long) */

int WDialog::LocalizeTextEnumProc(HWND__ *param_1,long param_2)

{
  HWND__ *hWnd;
  ushort *puVar1;
  FString *pFVar2;
  int iVar3;
  ushort *puVar4;
  undefined2 *puVar5;
  ushort *puVar6;
  char *lParam;
  HGDIOBJ pvVar7;
  int iVar8;
  LPARAM lParam_00;
  ushort uStack_c40;
  undefined1 auStack_c3e [2046];
  char cStack_440;
  undefined1 auStack_43f [1023];
  FString aFStack_40 [12];
  FString aFStack_34 [20];
  FString aFStack_20 [12];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x14c4  672  ?LocalizeTextEnumProc@WDialog@@SGHPAUHWND__@@J@Z */
  hWnd = param_1;
  puStack_c = &LAB_11061f8b;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffff3b4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FString::FString(aFStack_20);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (*(int *)GUnicodeOS_exref == 0) {
    cStack_440 = '\0';
    _memset(auStack_43f,0,0x3ff);
    SendMessageA(param_1,0xd,0x400,(LPARAM)&cStack_440);
    puVar1 = appFromAnsi(&cStack_440,(ushort *)0x0);
  }
  else {
    uStack_c40 = 0;
    _memset(auStack_c3e,0,0x7fe);
    SendMessageW(param_1,0xd,0x400,(LPARAM)&uStack_c40);
    puVar1 = &uStack_c40;
  }
  FString::operator=(aFStack_20,puVar1);
  pFVar2 = (FString *)FString::FString(aFStack_40,aFStack_20);
  uStack_8._0_1_ = 2;
  pFVar2 = (FString *)FString::Left(pFVar2,(int)aFStack_34);
  uStack_8._0_1_ = 3;
  iVar3 = FString::operator==(pFVar2,(ushort *)u_IDC__110705b4);
  uStack_8._0_1_ = 2;
  FString::~FString(aFStack_34);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  FString::~FString(aFStack_40);
  if (iVar3 == 0) {
    iVar3 = FString::operator==(aFStack_20,(ushort *)u_IDOK_110705a8);
    if (iVar3 == 0) {
      iVar3 = FString::operator==(aFStack_20,(ushort *)u_IDCANCEL_11070584);
      if (iVar3 == 0) goto LAB_11029af9;
      if (*(int *)GUnicodeOS_exref != 0) {
        puVar1 = LocalizeGeneral(s_CancelButton_1106b12c,(ushort *)u_Window_1106949c,(ushort *)0x0);
        puVar5 = thunk_FUN_11024db0((short *)puVar1);
        SendMessageW(param_1,0xc,0,(LPARAM)puVar5);
        goto LAB_11029af9;
      }
      puVar1 = LocalizeGeneral(s_CancelButton_1106b12c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      puVar1 = thunk_FUN_11024db0((short *)puVar1);
      iVar3 = winGetSizeANSI(puVar1);
      if (iVar3 == 0) {
        param_1 = (HWND__ *)0x0;
      }
      else {
        puVar1 = LocalizeGeneral(s_CancelButton_1106b12c,(ushort *)u_Window_1106949c,(ushort *)0x0);
        puVar1 = thunk_FUN_11024db0((short *)puVar1);
        winGetSizeANSI(puVar1);
        puStack_14 = &stack0xfffff3b4;
        param_1 = (HWND__ *)&stack0xfffff3b4;
      }
      puVar1 = LocalizeGeneral(s_CancelButton_1106b12c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      puVar1 = thunk_FUN_11024db0((short *)puVar1);
      iVar3 = winGetSizeANSI(puVar1);
      puVar1 = LocalizeGeneral(s_CancelButton_1106b12c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      puVar1 = thunk_FUN_11024db0((short *)puVar1);
    }
    else {
      if (*(int *)GUnicodeOS_exref != 0) {
        puVar1 = LocalizeGeneral(s_OkButton_1107059c,(ushort *)u_Window_1106949c,(ushort *)0x0);
        puVar5 = thunk_FUN_11024db0((short *)puVar1);
        SendMessageW(param_1,0xc,0,(LPARAM)puVar5);
        goto LAB_11029af9;
      }
      puVar1 = LocalizeGeneral(s_OkButton_1107059c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      puVar1 = thunk_FUN_11024db0((short *)puVar1);
      iVar3 = winGetSizeANSI(puVar1);
      if (iVar3 == 0) {
        param_1 = (HWND__ *)0x0;
      }
      else {
        puVar1 = LocalizeGeneral(s_OkButton_1107059c,(ushort *)u_Window_1106949c,(ushort *)0x0);
        puVar1 = thunk_FUN_11024db0((short *)puVar1);
        winGetSizeANSI(puVar1);
        puStack_14 = &stack0xfffff3b4;
        param_1 = (HWND__ *)&stack0xfffff3b4;
      }
      puVar1 = LocalizeGeneral(s_OkButton_1107059c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      puVar1 = thunk_FUN_11024db0((short *)puVar1);
      iVar3 = winGetSizeANSI(puVar1);
      puVar1 = LocalizeGeneral(s_OkButton_1107059c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      puVar1 = thunk_FUN_11024db0((short *)puVar1);
    }
  }
  else {
    iVar3 = 0;
    puVar1 = (ushort *)0x0;
    if (*(int *)GUnicodeOS_exref != 0) {
      puVar6 = *(ushort **)(param_2 + 4);
      puVar4 = FString::operator*(aFStack_20);
      puVar1 = Localize(*(ushort **)param_2,puVar4,puVar6,puVar1,iVar3);
      puVar5 = thunk_FUN_11024db0((short *)puVar1);
      SendMessageW(param_1,0xc,0,(LPARAM)puVar5);
      goto LAB_11029af9;
    }
    puVar6 = *(ushort **)(param_2 + 4);
    puVar4 = FString::operator*(aFStack_20);
    puVar1 = Localize(*(ushort **)param_2,puVar4,puVar6,puVar1,iVar3);
    puVar1 = thunk_FUN_11024db0((short *)puVar1);
    iVar3 = winGetSizeANSI(puVar1);
    if (iVar3 == 0) {
      param_1 = (HWND__ *)0x0;
    }
    else {
      iVar3 = 0;
      puVar4 = (ushort *)0x0;
      puVar1 = *(ushort **)(param_2 + 4);
      puVar6 = FString::operator*(aFStack_20);
      puVar1 = Localize(*(ushort **)param_2,puVar6,puVar1,puVar4,iVar3);
      puVar1 = thunk_FUN_11024db0((short *)puVar1);
      winGetSizeANSI(puVar1);
      puStack_14 = &stack0xfffff3b4;
      param_1 = (HWND__ *)&stack0xfffff3b4;
    }
    iVar3 = 0;
    puVar4 = (ushort *)0x0;
    puVar1 = *(ushort **)(param_2 + 4);
    puVar6 = FString::operator*(aFStack_20);
    puVar1 = Localize(*(ushort **)param_2,puVar6,puVar1,puVar4,iVar3);
    puVar1 = thunk_FUN_11024db0((short *)puVar1);
    iVar3 = winGetSizeANSI(puVar1);
    iVar8 = 0;
    puVar4 = (ushort *)0x0;
    puVar1 = *(ushort **)(param_2 + 4);
    puVar6 = FString::operator*(aFStack_20);
    puVar1 = Localize(*(ushort **)param_2,puVar6,puVar1,puVar4,iVar8);
    puVar1 = thunk_FUN_11024db0((short *)puVar1);
  }
  lParam = winToANSI((char *)param_1,puVar1,iVar3);
  SendMessageA(hWnd,0xc,0,(LPARAM)lParam);
LAB_11029af9:
  lParam_00 = 1;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar7 = GetStockObject(0x11);
    SendMessageA(hWnd,0x30,(WPARAM)pvVar7,lParam_00);
  }
  else {
    pvVar7 = GetStockObject(0x11);
    SendMessageW(hWnd,0x30,(WPARAM)pvVar7,lParam_00);
  }
  uStack_8 = uStack_8 & 0xffffff00;
  FString::~FString(aFStack_20);
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 110014c9 WColorButton::OpenWindow

/* public: void __thiscall WColorButton::OpenWindow(int,unsigned long) */

void __thiscall WColorButton::OpenWindow(WColorButton *this,int param_1,ulong param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14c9  855  ?OpenWindow@WColorButton@@QAEXHK@Z */
  puStack_c = &LAB_1105fa70;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)0x0,
             -(uint)(param_1 != 0) & 0x10000000 | param_2 | 0x4200000b,0,0,0,0,
             *(HWND__ **)(*(int *)(this + 0x14) + 4),(HMENU__ *)(uint)*(ushort *)(this + 0xc),
             DAT_1109c35c);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110014ce FDelegateInt::operator()

/* public: virtual void __thiscall FDelegateInt::operator()(int) */

void __thiscall FDelegateInt::operator()(FDelegateInt *this,int param_1)

{
                    /* 0x14ce  307  ??RFDelegateInt@@UAEXH@Z */
  if (*(int *)(this + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x11024d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 8))();
    return;
  }
  return;
}


// ==== 110014d3 thunk_FUN_11032bb0 thunk -> 11032bb0

// ==== 110014d8 WPictureButton::WPictureButton

/* public: __thiscall WPictureButton::WPictureButton(class WPictureButton const &) */

WPictureButton * __thiscall
WPictureButton::WPictureButton(WPictureButton *this,WPictureButton *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x14d8  114  ??0WPictureButton@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062b04;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow::WWindow((WWindow *)this,(WWindow *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  FString::FString((FString *)(this + 0x74),(FString *)(param_1 + 0x74));
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110014dd WToolTip::OpenWindow

/* public: void __thiscall WToolTip::OpenWindow(void) */

void __thiscall WToolTip::OpenWindow(WToolTip *this)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14dd  879  ?OpenWindow@WToolTip@@QAEXXZ */
  puStack_c = &LAB_1105fa80;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)0x0,1,0,0,0,0,(HWND__ *)0x0,(HMENU__ *)0x0,DAT_1109c35c);
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


// ==== 110014e7 FTreeItem::~FTreeItem

/* public: virtual __thiscall FTreeItem::~FTreeItem(void) */

void __thiscall FTreeItem::~FTreeItem(FTreeItem *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14e7  187  ??1FTreeItem@@UAE@XZ */
  puStack_c = &LAB_110614d6;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  uStack_8 = 2;
  EmptyChildren(this);
  uStack_8 = 0;
  thunk_FUN_1101dc40((FArray *)(this + 0x30));
  uStack_8 = 0xffffffff;
  thunk_FUN_1101db80((FArray *)(this + 0x24));
  ExceptionList = pvStack_10;
  return;
}


// ==== 110014ec WRichEdit::SetTextLimit

/* public: void __thiscall WRichEdit::SetTextLimit(int) */

void __thiscall WRichEdit::SetTextLimit(WRichEdit *this,int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14ec  958  ?SetTextLimit@WRichEdit@@QAEXH@Z */
  puStack_c = &LAB_1105fc90;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0x435,param_1,0);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0x435,param_1,0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110014f1 WEdit::ScrollCaret

/* public: void __thiscall WEdit::ScrollCaret(void) */

void __thiscall WEdit::ScrollCaret(WEdit *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x14f1  905  ?ScrollCaret@WEdit@@QAEXXZ */
  puStack_c = &LAB_1105fc70;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0xb7,0,0);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0xb7,0,0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110014fb WObjectProperties::GetWindowClassName

/* public: virtual void __thiscall WObjectProperties::GetWindowClassName(unsigned short *) */

void __thiscall WObjectProperties::GetWindowClassName(WObjectProperties *this,ushort *param_1)

{
                    /* 0x14fb  620  ?GetWindowClassName@WObjectProperties@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WObjectProperties_1106fd54);
  return;
}


// ==== 11001500 WWindow::ScreenToClient

/* public: struct FRect __thiscall WWindow::ScreenToClient(struct FRect const &) */

void __thiscall WWindow::ScreenToClient(WWindow *this,FRect *param_1)

{
  LONG LVar1;
  LONG *in_stack_00000008;
  tagPOINT tStack_18;
  tagPOINT tStack_10;
  LONG LStack_4;
  
                    /* 0x1500  904  ?ScreenToClient@WWindow@@QAE?AUFRect@@ABU2@@Z */
  tStack_18.x = in_stack_00000008[2];
  tStack_18.y = in_stack_00000008[3];
  ::ScreenToClient(*(HWND *)(this + 4),&tStack_18);
  LVar1 = tStack_18.x;
  tStack_10.x = *in_stack_00000008;
  tStack_10.y = in_stack_00000008[1];
  LStack_4 = tStack_18.y;
  ::ScreenToClient(*(HWND *)(this + 4),&tStack_10);
  *(LONG *)param_1 = tStack_10.x;
  *(LONG *)(param_1 + 8) = LVar1;
  *(LONG *)(param_1 + 4) = tStack_10.y;
  *(LONG *)(param_1 + 0xc) = LStack_4;
  return;
}


// ==== 1100150a FClassItem::SetProperty

/* public: virtual void __thiscall FClassItem::SetProperty(class FPropertyItem *,unsigned short
   const *) */

void __thiscall FClassItem::SetProperty(FClassItem *this,FPropertyItem *param_1,ushort *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x150a  943  ?SetProperty@FClassItem@@UAEXPAVFPropertyItem@@PBG@Z */
  puStack_c = &LAB_110607f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iVar1 = **(int **)(param_1 + 0x3c);
  ExceptionList = &pvStack_10;
  uVar2 = (**(code **)(*(int *)this + 0x68))(param_1,0,1);
  (**(code **)(iVar1 + 0x9c))(param_2,uVar2);
  UObject::SetFlags(*(UObject **)(this + 0x4c),0x20);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100150f WEdit::operator=

/* public: class WEdit & __thiscall WEdit::operator=(class WEdit const &) */

WEdit * __thiscall WEdit::operator=(WEdit *this,WEdit *param_1)

{
                    /* 0x150f  273  ??4WEdit@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return this;
}


// ==== 11001514 FTreeItem::SetSelected

/* public: virtual void __thiscall FTreeItem::SetSelected(int) */

void __thiscall FTreeItem::SetSelected(FTreeItem *this,int param_1)

{
                    /* 0x1514  953  ?SetSelected@FTreeItem@@UAEXH@Z */
  *(int *)(this + 0x1c) = param_1;
  return;
}


// ==== 1100151e FPropertyItem::OnUseCurrentButton

/* public: void __thiscall FPropertyItem::OnUseCurrentButton(void) */

void __thiscall FPropertyItem::OnUseCurrentButton(FPropertyItem *this)

{
  int iVar1;
  UObject *pUVar2;
  wchar_t *pwVar3;
  ushort auStack_220 [262];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x151e  846  ?OnUseCurrentButton@FPropertyItem@@QAEXXZ */
  puStack_c = &LAB_11060d40;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffdd4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pUVar2 = thunk_FUN_11014140(*(UObject **)(this + 0x3c));
  if (*(int *)(pUVar2 + 0x78) == 0) {
    pwVar3 = u_Texture_1106d6bc;
  }
  else {
    pwVar3 = (wchar_t *)UObject::GetName(*(UObject **)(pUVar2 + 0x78));
  }
  appSprintf(auStack_220,(ushort *)u_USECURRENT_CLASS__s_1106d724,pwVar3);
  iVar1 = *(int *)(this + 8);
  if (*(int *)(iVar1 + 0x18) != 0) {
    (**(code **)(**(int **)(iVar1 + 0x18) + 0xc))(iVar1,auStack_220);
  }
  (**(code **)(*(int *)this + 0x28))();
  if (*(int *)(this + 0x5c) != 0) {
    (**(code **)(*(int *)this + 0x50))();
    (**(code **)(*(int *)this + 0x54))();
    if (*(int *)(this + 0x34) != 0) {
      (**(code **)(*(int *)**(undefined4 **)(this + 0x30) + 0x54))();
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001523 GOnKillFocus

/* void __cdecl GOnKillFocus(struct HWND__ *) */

void __cdecl GOnKillFocus(HWND__ *param_1)

{
  DWORD DVar1;
  DWORD DStack_4;
  
                    /* 0x1523  468  ?GOnKillFocus@@YAXPAUHWND__@@@Z */
  if (*(int *)__Client_exref != 0) {
    if (param_1 == (HWND__ *)0x0) {
      param_1 = GetForegroundWindow();
    }
    GetWindowThreadProcessId(param_1,&DStack_4);
    DVar1 = GetCurrentProcessId();
    if (DStack_4 != DVar1) {
      (**(code **)(**(int **)__Client_exref + 0x74))();
    }
  }
  return;
}


// ==== 11001528 WRichEdit::~WRichEdit

/* public: virtual __thiscall WRichEdit::~WRichEdit(void) */

void __thiscall WRichEdit::~WRichEdit(WRichEdit *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1528  221  ??1WRichEdit@@UAE@XZ */
  puStack_8 = &LAB_11062e98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WControl::~WControl((WControl *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1100152d WWindow::SetNotifyHook

/* public: void __thiscall WWindow::SetNotifyHook(class FNotifyHook *) */

void __thiscall WWindow::SetNotifyHook(WWindow *this,FNotifyHook *param_1)

{
                    /* 0x152d  935  ?SetNotifyHook@WWindow@@QAEXPAVFNotifyHook@@@Z */
  *(FNotifyHook **)(this + 0x18) = param_1;
  return;
}


// ==== 1100153c WControl::operator=

/* public: class WControl & __thiscall WControl::operator=(class WControl const &) */

WControl * __thiscall WControl::operator=(WControl *this,WControl *param_1)

{
                    /* 0x153c  267  ??4WControl@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return this;
}


// ==== 11001541 WUDNWindow::OnLeftButtonDown

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: virtual void __thiscall WUDNWindow::OnLeftButtonDown(void) */

void __thiscall WUDNWindow::OnLeftButtonDown(WUDNWindow *this)

{
  undefined4 *puVar1;
  FString *this_00;
  POINT Point;
  HWND hWnd;
  int iVar2;
  FUDNHelpTopic *pFVar3;
  undefined4 uVar4;
  ushort *puVar5;
  BOOL BVar6;
  LPCWSTR lpFile;
  int iVar7;
  LPCWSTR lpParameters;
  LPCWSTR lpDirectory;
  INT nShowCmd;
  MENUITEMINFOA MStack_88;
  FString aFStack_58 [12];
  FString aFStack_4c [12];
  FString *pFStack_40;
  int iStack_3c;
  int iStack_34;
  int iStack_30;
  tagPOINT tStack_28;
  undefined1 *puStack_20;
  WUDNWindow *pWStack_1c;
  FUDNHelpTopic *pFStack_18;
  char *pcStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1541  772  ?OnLeftButtonDown@WUDNWindow@@UAEXXZ */
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_11062548;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  pWStack_1c = this;
  GetCursorPos(&tStack_28);
  Point.y = tStack_28.y;
  Point.x = tStack_28.x;
  hWnd = WindowFromPoint(Point);
  if (*(int *)GUnicodeOS_exref == 0) {
    pcStack_14 = (char *)SendMessageA(hWnd,0x8034,0,0);
  }
  else {
    pcStack_14 = (char *)SendMessageW(hWnd,0x8034,0,0);
  }
  if (pcStack_14 == (char *)0x0) {
    appMsgf(0,(ushort *)u_Sorry__there_s_no_help_topic_for_110712e0);
    goto LAB_1102f5a7;
  }
  FArray::FArray((FArray *)&iStack_34);
  uStack_8 = 1;
  iVar7 = 0;
  do {
    FString::Printf((ushort *)aFStack_58);
    uStack_8._0_1_ = 2;
    FString::FString(aFStack_4c);
    uStack_8._0_1_ = 3;
    iVar2 = **(int **)GConfig_exref;
    FString::operator*(aFStack_58);
    iVar2 = (**(code **)(iVar2 + 0xc))();
    if (iVar2 == 0) {
      uStack_8._0_1_ = 2;
      FString::~FString(aFStack_4c);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      FString::~FString(aFStack_58);
      break;
    }
    FArray::FArray((FArray *)&pFStack_40);
    uStack_8._0_1_ = 5;
    iVar2 = FString::ParseIntoArray
                      (aFStack_4c,(ushort *)&DAT_110713e0,(TArray<FString> *)&pFStack_40);
    if (iVar2 == 2) {
      pFVar3 = (FUDNHelpTopic *)(**(code **)**(undefined4 **)GMalloc_exref)();
      uStack_8._0_1_ = 6;
      pFStack_18 = pFVar3;
      if (pFVar3 == (FUDNHelpTopic *)0x0) {
        uVar4 = 0;
      }
      else {
        puStack_20 = &stack0xffffff60;
        FString::FString((FString *)&stack0xffffff60,pFStack_40 + 0xc);
        uStack_8._0_1_ = 7;
        tStack_28.y = (LONG)&stack0xffffff54;
        FString::FString((FString *)&stack0xffffff54,pFStack_40);
        uStack_8._0_1_ = 6;
        uVar4 = FUDNHelpTopic::FUDNHelpTopic(pFVar3);
      }
      uStack_8._0_1_ = 5;
      iVar2 = FArray::Add((FArray *)&iStack_34,1,4);
      *(undefined4 *)(iStack_34 + iVar2 * 4) = uVar4;
    }
    uStack_8._0_1_ = 9;
    thunk_FUN_1102afa0(&pFStack_40,0,iStack_3c);
    uStack_8._0_1_ = 3;
    FArray::~FArray((FArray *)&pFStack_40);
    uStack_8._0_1_ = 2;
    FString::~FString(aFStack_4c);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    FString::~FString(aFStack_58);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x32);
  if (iStack_30 == 0) {
    appMsgf(0,(ushort *)u_Help_topic_not_found___d___1107135c);
  }
  else {
    iVar7 = 0;
    if (iStack_30 < 2) {
LAB_1102f4ca:
      FString::operator*((FString *)(*(int *)(iStack_34 + iVar7 * 4) + 0xc));
      FString::Printf((ushort *)aFStack_58);
      uStack_8._0_1_ = 10;
      nShowCmd = 1;
      lpDirectory = (LPCWSTR)0x0;
      lpParameters = (LPCWSTR)0x0;
      lpFile = (LPCWSTR)FString::operator*(aFStack_58);
      ShellExecuteW((HWND)0x0,u_open_11068fec,lpFile,lpParameters,lpDirectory,nShowCmd);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      FString::~FString(aFStack_58);
    }
    else {
      pFStack_18 = (FUDNHelpTopic *)CreatePopupMenu();
      iVar7 = 0;
      MStack_88.cbSize = 0x30;
      MStack_88.fMask = 0x12;
      MStack_88.fType = 0;
      if (0 < iStack_30) {
        do {
          puVar5 = FString::operator*(*(FString **)(iStack_34 + iVar7 * 4));
          iVar2 = winGetSizeANSI(puVar5);
          if (iVar2 == 0) {
            pcStack_14 = (char *)0x0;
          }
          else {
            puVar5 = FString::operator*(*(FString **)(iStack_34 + iVar7 * 4));
            winGetSizeANSI(puVar5);
            pcStack_14 = &stack0xffffff6c;
          }
          puVar1 = (undefined4 *)(iStack_34 + iVar7 * 4);
          puVar5 = FString::operator*(*(FString **)(iStack_34 + iVar7 * 4));
          iVar2 = winGetSizeANSI(puVar5);
          puVar5 = FString::operator*((FString *)*puVar1);
          MStack_88.dwTypeData = winToANSI(pcStack_14,puVar5,iVar2);
          MStack_88.wID = iVar7 + 0x4c2c;
          InsertMenuItemA((HMENU)pFStack_18,99999,0,&MStack_88);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iStack_30);
      }
      pFVar3 = pFStack_18;
      GetCursorPos(&tStack_28);
      BVar6 = TrackPopupMenu((HMENU)pFVar3,0x182,tStack_28.x,tStack_28.y,0,*(HWND *)(pWStack_1c + 4)
                             ,(RECT *)0x0);
      DestroyMenu((HMENU)pFVar3);
      iVar7 = BVar6 + -0x4c2c;
      if (-1 < iVar7) goto LAB_1102f4ca;
    }
    iVar7 = 0;
    if (0 < iStack_30) {
      do {
        this_00 = *(FString **)(iStack_34 + iVar7 * 4);
        tStack_28.y = (LONG)this_00;
        if (this_00 != (FString *)0x0) {
          uStack_8._0_1_ = 0xb;
          FString::~FString(this_00 + 0xc);
          uStack_8 = CONCAT31(uStack_8._1_3_,1);
          FString::~FString(this_00);
          (**(code **)(**(int **)GMalloc_exref + 8))();
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iStack_30);
    }
    FArray::Empty((FArray *)&iStack_34,4,0);
  }
  uStack_8 = 0xffffffff;
  thunk_FUN_1102e5a0((FArray *)&iStack_34);
  this = pWStack_1c;
LAB_1102f5a7:
  ReleaseCapture();
  (**(code **)(*(int *)this + 8))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001546 FPropertyItem::OnArrayAdd

/* public: void __thiscall FPropertyItem::OnArrayAdd(void) */

void __thiscall FPropertyItem::OnArrayAdd(FPropertyItem *this)

{
  int iVar1;
  int *piVar2;
  FArray *this_00;
  UObject *pUVar3;
  int iVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1546  684  ?OnArrayAdd@FPropertyItem@@QAEXXZ */
  puStack_c = &LAB_11060d10;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  this_00 = (FArray *)(**(code **)(*(int *)this + 0x68))(this,1);
  if (this_00 != (FArray *)0x0) {
    pUVar3 = thunk_FUN_110140d0(*(UObject **)(this + 0x3c));
    (**(code **)(*(int *)this + 0x50))();
    FArray::AddZeroed(this_00,*(int *)(*(int *)(pUVar3 + 0x78) + 0x44),1);
    (**(code **)(*(int *)this + 0x54))();
    (**(code **)(*(int *)this + 0x6c))();
    iVar1 = *(int *)(this_00 + 4);
    iVar5 = 1;
    iVar4 = WListBox::FindItem((WListBox *)(*(int *)(this + 8) + 0x44),this);
    WListBox::SetCurrent((WListBox *)(*(int *)(this + 8) + 0x44),iVar4 + iVar1,iVar5);
    if ((*(int *)(this + 0x34) != 0) &&
       (piVar2 = *(int **)(*(int *)(this + 0x30) + -4 + *(int *)(this + 0x34) * 4), piVar2[4] != 0))
    {
      (**(code **)(*piVar2 + 0x54))();
    }
    (**(code **)(**(int **)(this + 8) + 0xf4))(1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100154b FObjectConfigItem::GetBase

/* public: virtual unsigned char * __thiscall FObjectConfigItem::GetBase(unsigned char *) */

uchar * __thiscall FObjectConfigItem::GetBase(FObjectConfigItem *this,uchar *param_1)

{
                    /* 0x154b  473  ?GetBase@FObjectConfigItem@@UAEPAEPAE@Z */
  return param_1;
}


// ==== 11001550 thunk_FUN_1101f680 thunk -> 1101f680

// ==== 11001555 WDialog::EndDialogTrue

/* public: void __thiscall WDialog::EndDialogTrue(void) */

void __thiscall WDialog::EndDialogTrue(WDialog *this)

{
                    /* 0x1555  445  ?EndDialogTrue@WDialog@@QAEXXZ */
  ::EndDialog(*(HWND *)(this + 4),1);
  return;
}


// ==== 1100155a WWindow::OnWindowPosChanging

/* public: virtual void __thiscall WWindow::OnWindowPosChanging(int *,int *,int *,int *) */

void __thiscall
WWindow::OnWindowPosChanging(WWindow *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
                    /* 0x155a  848  ?OnWindowPosChanging@WWindow@@UAEXPAH000@Z */
  return;
}


// ==== 1100155f FHeaderItem::SetValue

/* public: virtual void __thiscall FHeaderItem::SetValue(unsigned short const *) */

void __thiscall FHeaderItem::SetValue(FHeaderItem *this,ushort *param_1)

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
  FString aFStack_90 [12];
  FString aFStack_84 [12];
  FString aFStack_78 [12];
  FString aFStack_6c [12];
  FString aFStack_60 [12];
  FString aFStack_54 [12];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  FString aFStack_3c [20];
  FHeaderItem *pFStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x155f  963  ?SetValue@FHeaderItem@@UAEXPBG@Z */
  puStack_c = &LAB_11060e19;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff64;
  uStack_18 = 0;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  pFStack_28 = this;
  pFVar2 = (FString *)(**(code **)(*(int *)this + 0x80))(&fStack_48);
  iStack_8._0_1_ = 1;
  iVar3 = FString::operator==(pFVar2,(ushort *)u_LightColor_1106d900);
  iStack_8._0_1_ = 0;
  FString::~FString((FString *)&fStack_48);
  if (iVar3 != 0) {
    FString::FString(aFStack_3c,param_1);
    iStack_8._0_1_ = 2;
    iVar3 = FString::InStr(aFStack_3c,(ushort *)&DAT_1106d8f8,0);
    if (iVar3 == -1) {
      param_1 = (ushort *)0xff;
      pcVar5 = appAtoi_exref;
    }
    else {
      pFVar2 = (FString *)FString::Mid(aFStack_3c,(int)&fStack_48,iVar3 + 2);
      iStack_8 = CONCAT31(iStack_8._1_3_,3);
      uStack_18 = 1;
      puVar4 = FString::operator*(pFVar2);
      pcVar5 = appAtoi_exref;
      param_1 = (ushort *)appAtoi(puVar4);
    }
    iStack_8 = 2;
    if ((uStack_18 & 1) != 0) {
      uStack_18 = uStack_18 & 0xfffffffe;
      FString::~FString((FString *)&fStack_48);
    }
    iVar3 = FString::InStr(aFStack_3c,(ushort *)&DAT_1106d8f0,0);
    if (iVar3 == -1) {
      iStack_20 = 0xff;
    }
    else {
      pFVar2 = (FString *)FString::Mid(aFStack_3c,(int)&fStack_48,iVar3 + 2);
      iStack_8 = CONCAT31(iStack_8._1_3_,4);
      uStack_18 = uStack_18 | 2;
      puVar4 = FString::operator*(pFVar2);
      iStack_20 = (*pcVar5)(puVar4);
    }
    iStack_8 = 2;
    if ((uStack_18 & 2) != 0) {
      uStack_18 = uStack_18 & 0xfffffffd;
      FString::~FString((FString *)&fStack_48);
    }
    iVar3 = FString::InStr(aFStack_3c,(ushort *)&DAT_1106d8e8,0);
    if (iVar3 == -1) {
      iStack_24 = 0xff;
    }
    else {
      pFVar2 = (FString *)FString::Mid(aFStack_3c,(int)&fStack_48,iVar3 + 2);
      iStack_8 = CONCAT31(iStack_8._1_3_,5);
      uStack_18 = uStack_18 | 4;
      puVar4 = FString::operator*(pFVar2);
      iStack_24 = (*pcVar5)(puVar4);
    }
    iStack_8._0_1_ = 2;
    iStack_8._1_3_ = 0;
    if ((uStack_18 & 4) != 0) {
      uStack_18 = uStack_18 & 0xfffffffb;
      FString::~FString((FString *)&fStack_48);
    }
    fStack_48 = (float)(int)param_1;
    fStack_44 = (float)iStack_20;
    fStack_40 = (float)iStack_24;
    ToHSL(this,&fStack_48,fStack_48,fStack_44,fStack_40);
    for (iStack_1c = 0; iStack_1c < *(int *)(this + 0x34); iStack_1c = iStack_1c + 1) {
      piVar1 = *(int **)(*(int *)(this + 0x30) + iStack_1c * 4);
      pFVar2 = (FString *)(**(code **)(*piVar1 + 0x80))(aFStack_54);
      iStack_8._0_1_ = 6;
      iVar3 = FString::operator==(pFVar2,(ushort *)u_LightHue_1106d8d0);
      iStack_8._0_1_ = 2;
      FString::~FString(aFStack_54);
      if (iVar3 != 0) {
        uVar6 = FUN_1103b180(extraout_ECX,extraout_EDX);
        pFVar2 = (FString *)FString::Printf((ushort *)aFStack_60,&DAT_1106d8c8,(int)uVar6);
        iStack_8._0_1_ = 7;
        iVar3 = *piVar1;
        puVar4 = FString::operator*(pFVar2);
        (**(code **)(iVar3 + 0x8c))(puVar4);
        iStack_8._0_1_ = 2;
        FString::~FString(aFStack_60);
      }
      pFVar2 = (FString *)(**(code **)(*piVar1 + 0x80))(aFStack_6c);
      iStack_8._0_1_ = 8;
      iVar3 = FString::operator==(pFVar2,(ushort *)u_LightSaturation_1106d8a0);
      iStack_8._0_1_ = 2;
      FString::~FString(aFStack_6c);
      if (iVar3 != 0) {
        uVar6 = FUN_1103b180(extraout_ECX_00,extraout_EDX_00);
        pFVar2 = (FString *)FString::Printf((ushort *)aFStack_78,&DAT_1106d8c8,(int)uVar6);
        iStack_8._0_1_ = 9;
        iVar3 = *piVar1;
        puVar4 = FString::operator*(pFVar2);
        (**(code **)(iVar3 + 0x8c))(puVar4);
        iStack_8._0_1_ = 2;
        FString::~FString(aFStack_78);
      }
      pFVar2 = (FString *)(**(code **)(*piVar1 + 0x80))(aFStack_84);
      iStack_8._0_1_ = 10;
      iVar3 = FString::operator==(pFVar2,(ushort *)u_LightBrightness_1106d878);
      iStack_8._0_1_ = 2;
      FString::~FString(aFStack_84);
      if (iVar3 != 0) {
        uVar6 = FUN_1103b180(extraout_ECX_01,extraout_EDX_01);
        pFVar2 = (FString *)FString::Printf((ushort *)aFStack_90,&DAT_1106d8c8,(int)uVar6);
        iStack_8._0_1_ = 0xb;
        iVar3 = *piVar1;
        puVar4 = FString::operator*(pFVar2);
        (**(code **)(iVar3 + 0x8c))(puVar4);
        iStack_8._0_1_ = 2;
        FString::~FString(aFStack_90);
      }
      this = pFStack_28;
    }
    (**(code **)(*(int *)this + 0x28))();
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    FString::~FString(aFStack_3c);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001564 FClassItem::FClassItem

/* public: __thiscall FClassItem::FClassItem(class FClassItem const &) */

FClassItem * __thiscall FClassItem::FClassItem(FClassItem *this,FClassItem *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1564  3  ??0FClassItem@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063d28;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FPropertyItemBase::FPropertyItemBase((FPropertyItemBase *)this,(FPropertyItemBase *)param_1);
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001569 WDialog::Show

/* public: virtual void __thiscall WDialog::Show(int) */

void __thiscall WDialog::Show(WDialog *this,int param_1)

{
                    /* 0x1569  969  ?Show@WDialog@@UAEXH@Z */
  WWindow::Show((WWindow *)this,param_1);
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x1102485b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    BringWindowToTop(*(HWND *)(this + 4));
    return;
  }
  return;
}


// ==== 1100156e WWizardDialog::~WWizardDialog

/* public: virtual __thiscall WWizardDialog::~WWizardDialog(void) */

void __thiscall WWizardDialog::~WWizardDialog(WWizardDialog *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x156e  237  ??1WWizardDialog@@UAE@XZ */
  puStack_8 = &LAB_11064091;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  iStack_4 = 6;
  WWindow::MaybeDestroy((WWindow *)this);
  iStack_4._0_1_ = 5;
  thunk_FUN_1102ea80((FArray *)(this + 0x2ec));
  iStack_4._0_1_ = 4;
  WLabel::~WLabel((WLabel *)(this + 0x2ac));
  iStack_4._0_1_ = 3;
  WCoolButton::~WCoolButton((WCoolButton *)(this + 0x210));
  iStack_4._0_1_ = 2;
  WCoolButton::~WCoolButton((WCoolButton *)(this + 0x174));
  iStack_4._0_1_ = 1;
  WCoolButton::~WCoolButton((WCoolButton *)(this + 0xd8));
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  WCoolButton::~WCoolButton((WCoolButton *)(this + 0x3c));
  iStack_4 = 0xffffffff;
  WWindow::~WWindow((WWindow *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1100157d thunk_FUN_1102a8a0 thunk -> 1102a8a0

// ==== 11001587 WButton::OpenWindow

/* public: void __thiscall WButton::OpenWindow(int,int,int,int,int,unsigned short const
   *,int,unsigned long) */

void __thiscall
WButton::OpenWindow(WButton *this,int param_1,int param_2,int param_3,int param_4,int param_5,
                   ushort *param_6,int param_7,ulong param_8)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1587  852  ?OpenWindow@WButton@@QAEXHHHHHPBGHK@Z */
  puStack_c = &LAB_1105fa30;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)0x0,-(uint)(param_7 != 0) & 0x80 | param_8 | 0x40000000,
             param_2,param_3,param_4,param_5,*(HWND__ **)(*(int *)(this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)(this + 0xc),DAT_1109c35c);
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
  (**(code **)(*(int *)this + 0x2c))(param_6);
  if (param_1 != 0) {
    ShowWindow(*(HWND *)(this + 4),4);
  }
  *(ulong *)(this + 0x90) = param_8 & 0xb;
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100158c WCheckListBox::WCheckListBox

/* public: __thiscall WCheckListBox::WCheckListBox(class WWindow *,int,long (__stdcall*)(struct
   HWND__ *,unsigned int,unsigned int,long)) */

WCheckListBox * __thiscall
WCheckListBox::WCheckListBox
          (WCheckListBox *this,WWindow *param_1,int param_2,
          _func_long_HWND___ptr_uint_uint_long *param_3)

{
  HANDLE pvVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x158c  56  ??0WCheckListBox@@QAE@PAVWWindow@@HP6GJPAUHWND__@@IIJ@Z@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110635f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WListBox::WListBox((WListBox *)this,param_1,param_2,(_func_long_HWND___ptr_uint_uint_long *)0x0);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  if (*(int *)(this + 0x14) == 0) {
    appFailAssert(s_OwnerWindow_1106abb4,s____Inc_Window_h_1106aefc,0x824);
  }
  pvVar1 = LoadImageA(hInstanceWindow,(LPCSTR)0x6978,0,0,0,0x1000);
  *(HANDLE *)(this + 0x8c) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    appFailAssert(s_hbmOff_11072fe4,s____Inc_Window_h_1106aefc,0x825);
  }
  pvVar1 = LoadImageA(hInstanceWindow,(LPCSTR)0x6979,0,0,0,0x1000);
  *(HANDLE *)(this + 0x90) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    appFailAssert(s_hbmOn_11072fdc,s____Inc_Window_h_1106aefc,0x826);
  }
  *(undefined4 *)(this + 0x94) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001591 WConfigProperties::GetPackageName

/* public: virtual unsigned short const * __thiscall WConfigProperties::GetPackageName(void) */

ushort * __thiscall WConfigProperties::GetPackageName(WConfigProperties *this)

{
                    /* 0x1591  530  ?GetPackageName@WConfigProperties@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11001596 WUDNWindow::GetPackageName

/* public: virtual unsigned short const * __thiscall WUDNWindow::GetPackageName(void) */

ushort * __thiscall WUDNWindow::GetPackageName(WUDNWindow *this)

{
                    /* 0x1596  562  ?GetPackageName@WUDNWindow@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 110015a0 FTreeItem::operator=

/* public: class FTreeItem & __thiscall FTreeItem::operator=(class FTreeItem const &) */

FTreeItem * __thiscall FTreeItem::operator=(FTreeItem *this,FTreeItem *param_1)

{
                    /* 0x15a0  253  ??4FTreeItem@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  thunk_FUN_1102e9a0(this + 0x24,(FArray *)(param_1 + 0x24));
  thunk_FUN_1102ea10(this + 0x30,(FArray *)(param_1 + 0x30));
  return this;
}


// ==== 110015a5 WUDNWindow::GetWindowClassName

/* public: virtual void __thiscall WUDNWindow::GetWindowClassName(unsigned short *) */

void __thiscall WUDNWindow::GetWindowClassName(WUDNWindow *this,ushort *param_1)

{
                    /* 0x15a5  639  ?GetWindowClassName@WUDNWindow@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WUDNWindow_1106fb7c);
  return;
}


// ==== 110015aa WButton::WButton

/* public: __thiscall WButton::WButton(class WWindow *,int,struct FDelegate,long (__stdcall*)(struct
   HWND__ *,unsigned int,unsigned int,long)) */

WButton * __thiscall
WButton::WButton(WButton *this,WWindow *param_1,int param_2,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,_func_long_HWND___ptr_uint_uint_long *param_7)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x15aa  50  ??0WButton@@QAE@PAVWWindow@@HUFDelegate@@P6GJPAUHWND__@@IIJ@Z@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110613c8;
  pvStack_c = ExceptionList;
  if (param_7 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_7 = SuperProc;
  }
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,param_1,param_2,param_7);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x44) = param_5;
  *(undefined4 *)(this + 0x48) = param_6;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined ***)(this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined ***)(this + 0x58) = FDelegate::vftable;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined ***)(this + 100) = FDelegate::vftable;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined ***)(this + 0x70) = FDelegate::vftable;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined ***)(this + 0x7c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110015af WListView::WListView

/* public: __thiscall WListView::WListView(class WWindow *,int,long (__stdcall*)(struct HWND__
   *,unsigned int,unsigned int,long)) */

WListView * __thiscall
WListView::WListView
          (WListView *this,WWindow *param_1,int param_2,
          _func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x15af  106  ??0WListView@@QAE@PAVWWindow@@HP6GJPAUHWND__@@IIJ@Z@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110636f8;
  pvStack_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = SuperProc;
  }
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,param_1,param_2,param_3);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined ***)(this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110015be thunk_FUN_110320b0 thunk -> 110320b0

// ==== 110015c3 thunk_FUN_11022c10 thunk -> 11022c10

// ==== 110015c8 WProperties::operator=

/* public: class WProperties & __thiscall WProperties::operator=(class WProperties const &) */

WProperties * __thiscall WProperties::operator=(WProperties *this,WProperties *param_1)

{
                    /* 0x15c8  283  ??4WProperties@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  WListBox::operator=((WListBox *)(this + 0x44),(WListBox *)(param_1 + 0x44));
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  thunk_FUN_1102ae50(this + 0xd4,(FArray *)(param_1 + 0xd4));
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  return this;
}


// ==== 110015cd FPropertyItem::OnArrayInsert

/* public: void __thiscall FPropertyItem::OnArrayInsert(void) */

void __thiscall FPropertyItem::OnArrayInsert(FPropertyItem *this)

{
  int *piVar1;
  FArray *this_00;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x15cd  687  ?OnArrayInsert@FPropertyItem@@QAEXXZ */
  puStack_c = &LAB_110604f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  this_00 = (FArray *)(**(code **)(*(int *)this + 0x68))(*(undefined4 *)(this + 0xc),1);
  if (this_00 != (FArray *)0x0) {
    iVar2 = UProperty::GetSize(*(UProperty **)(this + 0x3c));
    FArray::Insert(this_00,*(int *)(this + 0x44),1,iVar2);
    iVar3 = UProperty::GetSize(*(UProperty **)(this + 0x3c));
    iVar2 = *(int *)(this + 0x44);
    uVar4 = UProperty::GetSize(*(UProperty **)(this + 0x3c));
    pvVar5 = FArray::GetData(this_00);
    thunk_FUN_110112c0((undefined4 *)((int)pvVar5 + iVar3 * iVar2),uVar4);
    piVar1 = *(int **)(this + 0xc);
    (**(code **)(*piVar1 + 0x50))();
    (**(code **)(*piVar1 + 0x54))();
    (**(code **)(*piVar1 + 0x6c))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110015e1 WTrackBar::SetTicFreq

/* public: void __thiscall WTrackBar::SetTicFreq(int) */

void __thiscall WTrackBar::SetTicFreq(WTrackBar *this,int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x15e1  959  ?SetTicFreq@WTrackBar@@QAEXH@Z */
  puStack_c = &LAB_1105fcc0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0x414,param_1,0);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0x414,param_1,0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110015eb FObjectConfigItem::~FObjectConfigItem

/* public: virtual __thiscall FObjectConfigItem::~FObjectConfigItem(void) */

void __thiscall FObjectConfigItem::~FObjectConfigItem(FObjectConfigItem *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x15eb  183  ??1FObjectConfigItem@@UAE@XZ */
  puStack_8 = &LAB_11061784;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  FString::~FString((FString *)(this + 0x50));
  uStack_4 = 0xffffffff;
  FPropertyItemBase::~FPropertyItemBase((FPropertyItemBase *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 110015f5 thunk_FUN_110365a0 thunk -> 110365a0

// ==== 110015fa thunk_FUN_11035400 thunk -> 11035400

// ==== 110015ff WSplitter::WSplitter

/* public: __thiscall WSplitter::WSplitter(class WSplitter const &) */

WSplitter * __thiscall WSplitter::WSplitter(WSplitter *this,WSplitter *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x15ff  136  ??0WSplitter@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110642c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow::WWindow((WWindow *)this,(WWindow *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001604 FTreeItem::OnItemDoubleClick

/* public: virtual void __thiscall FTreeItem::OnItemDoubleClick(void) */

void __thiscall FTreeItem::OnItemDoubleClick(FTreeItem *this)

{
                    /* 0x1604  745  ?OnItemDoubleClick@FTreeItem@@UAEXXZ */
  return;
}


// ==== 11001609 FHeaderItem::FHeaderItem

/* public: __thiscall FHeaderItem::FHeaderItem(class FHeaderItem const &) */

FHeaderItem * __thiscall FHeaderItem::FHeaderItem(FHeaderItem *this,FHeaderItem *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1609  18  ??0FHeaderItem@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063928;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FTreeItem::FTreeItem((FTreeItem *)this,(FTreeItem *)param_1);
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100160e FPropertyItem::GetId

/* public: virtual unsigned __int64 __thiscall FPropertyItem::GetId(void)const  */

__uint64 __thiscall FPropertyItem::GetId(FPropertyItem *this)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x160e  508  ?GetId@FPropertyItem@@UBE_KXZ */
  puStack_c = &LAB_11060440;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = FName::GetIndex((FName *)(this + 0x70));
  ExceptionList = pvStack_10;
  return CONCAT44((iVar1 >> 0x1f) + 1,iVar1);
}


// ==== 11001613 WWizardPage::operator=

/* public: class WWizardPage & __thiscall WWizardPage::operator=(class WWizardPage const &) */

WWizardPage * __thiscall WWizardPage::operator=(WWizardPage *this,WWizardPage *param_1)

{
                    /* 0x1613  304  ??4WWizardPage@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return this;
}


// ==== 11001618 FClassItem::FClassItem

/* public: __thiscall FClassItem::FClassItem(void) */

FClassItem * __thiscall FClassItem::FClassItem(FClassItem *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1618  5  ??0FClassItem@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063cc8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FPropertyItemBase::FPropertyItemBase((FPropertyItemBase *)this);
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100161d WCustomLabel::WCustomLabel

/* public: __thiscall WCustomLabel::WCustomLabel(class WCustomLabel const &) */

WCustomLabel * __thiscall WCustomLabel::WCustomLabel(WCustomLabel *this,WCustomLabel *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x161d  79  ??0WCustomLabel@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062838;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WLabel::WLabel((WLabel *)this,(WLabel *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001622 WDragInterceptor::OnKeyDown

/* public: virtual void __thiscall WDragInterceptor::OnKeyDown(unsigned short) */

void __thiscall WDragInterceptor::OnKeyDown(WDragInterceptor *this,ushort param_1)

{
                    /* 0x1622  759  ?OnKeyDown@WDragInterceptor@@UAEXG@Z */
  if (param_1 == 0x1b) {
    *(undefined4 *)(this + 0x74) = 0;
    ReleaseCapture();
  }
  return;
}


// ==== 11001627 thunk_FUN_11014350 thunk -> 11014350

// ==== 1100162c FObjectsItem::SubEval

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall FObjectsItem::SubEval(class FString *,float *,int) */

int __thiscall FObjectsItem::SubEval(FObjectsItem *this,FString *param_1,float *param_2,int param_3)

{
  FString *pFVar1;
  int iVar2;
  FOutputDevice *extraout_ECX;
  FOutputDevice *this_00;
  FString *pFVar3;
  FOutputDevice *extraout_ECX_00;
  FOutputDevice *extraout_ECX_01;
  undefined4 extraout_ECX_02;
  FOutputDevice *this_01;
  undefined4 extraout_EDX;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  double dVar7;
  FOutputDevice *pFVar8;
  FString aFStack_70 [12];
  FString aFStack_64 [12];
  FString aFStack_58 [12];
  FString aFStack_4c [12];
  FString aFStack_40 [12];
  FString aFStack_34 [20];
  undefined1 *puStack_20;
  float fStack_1c;
  float fStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x162c  987  ?SubEval@FObjectsItem@@QAEHPAVFString@@PAMH@Z */
  pFVar3 = param_1;
  puStack_c = &LAB_110610cd;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff84;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  FString::FString(aFStack_34);
  iStack_8._0_1_ = 1;
  fStack_1c = 0.0;
  fStack_18 = 0.0;
  pFVar1 = (FString *)GrabChar(this,aFStack_40);
  iStack_8._0_1_ = 2;
  FString::operator=(aFStack_34,pFVar1);
  iStack_8._0_1_ = 1;
  FString::~FString(aFStack_40);
  iVar2 = FString::operator>=(aFStack_34,(ushort *)&DAT_1106c3c0);
  if (((iVar2 != 0) && (iVar2 = FString::operator<=(aFStack_34,(ushort *)&DAT_1106c3bc), iVar2 != 0)
      ) || (iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106ce34), iVar2 != 0)) {
    fStack_18 = 0.0;
    while ((iVar2 = FString::operator>=(aFStack_34,(ushort *)&DAT_1106c3c0), iVar2 != 0 &&
           (iVar2 = FString::operator<=(aFStack_34,(ushort *)&DAT_1106c3bc), iVar2 != 0))) {
      FString::FString((FString *)&stack0xffffff74,aFStack_34);
      iStack_8._0_1_ = 1;
      fVar6 = Val(this);
      fStack_18 = fStack_18 * (float)_DAT_1106c3b0 + fVar6;
      pFVar1 = (FString *)GrabChar(this,aFStack_40);
      iStack_8._0_1_ = 4;
      FString::operator=(aFStack_34,pFVar1);
      iStack_8._0_1_ = 1;
      FString::~FString(aFStack_40);
    }
    iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106ce34);
    if (iVar2 == 0) goto LAB_1101b470;
    param_1 = _DAT_1106ce30;
    pFVar1 = (FString *)GrabChar(this,aFStack_40);
    iStack_8._0_1_ = 5;
    do {
      FString::operator=(aFStack_34,pFVar1);
      iStack_8._0_1_ = 1;
      FString::~FString(aFStack_40);
      iVar2 = FString::operator>=(aFStack_34,(ushort *)&DAT_1106c3c0);
      if (iVar2 == 0) goto LAB_1101b470;
      iVar2 = FString::operator<=(aFStack_34,(ushort *)&DAT_1106c3bc);
      if (iVar2 == 0) goto LAB_1101b470;
      puStack_20 = &stack0xffffff74;
      FString::FString((FString *)&stack0xffffff74,aFStack_34);
      iStack_8._0_1_ = 1;
      puStack_20 = (undefined1 *)Val(this);
      fStack_18 = fStack_18 + (float)param_1 * (float)puStack_20;
      param_1 = (FString *)((float)param_1 / (float)_DAT_1106c3b0);
      pFVar1 = (FString *)GrabChar(this,aFStack_40);
      iStack_8._0_1_ = 7;
    } while( true );
  }
  iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106cc74);
  if (iVar2 == 0) {
    iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106ce2c);
    if (iVar2 == 0) {
      iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106ce28);
      if (iVar2 == 0) {
        iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106ce24);
        if (iVar2 == 0) {
          if (*(int *)GLog_exref == 0) goto LAB_1101b40d;
          this_00 = *(FOutputDevice **)GLog_exref;
          pFVar8 = this_00;
        }
        else {
          iVar2 = SubEval(this,param_1,&fStack_18,1000);
          if (iVar2 == 0) goto LAB_1101b40d;
          if (0.0 <= fStack_18) {
            dVar7 = appSqrt((double)fStack_18);
            fStack_18 = (float)dVar7;
            pFVar1 = (FString *)GrabChar(this,aFStack_40);
            iStack_8._0_1_ = 0xb;
            goto LAB_1101b452;
          }
          this_00 = extraout_ECX;
          if (*(int *)GLog_exref == 0) goto LAB_1101b40d;
LAB_1101b401:
          pFVar8 = *(FOutputDevice **)GLog_exref;
        }
LAB_1101b404:
        FOutputDevice::Logf2(this_00,(ushort *)pFVar8);
      }
      else {
        iVar2 = SubEval(this,param_1,&fStack_18,1000);
        if (iVar2 != 0) {
          pFVar1 = (FString *)GrabChar(this,aFStack_40);
          iStack_8._0_1_ = 10;
          goto LAB_1101b452;
        }
      }
    }
    else {
      iVar2 = SubEval(this,param_1,&fStack_18,1000);
      if (iVar2 != 0) {
        fStack_18 = -fStack_18;
        pFVar1 = (FString *)GrabChar(this,aFStack_40);
        iStack_8._0_1_ = 9;
        goto LAB_1101b452;
      }
    }
  }
  else {
    iVar2 = SubEval(this,param_1,&fStack_18,0);
    if (iVar2 != 0) {
      pFVar1 = (FString *)GrabChar(this,aFStack_40);
      iStack_8._0_1_ = 8;
LAB_1101b452:
      do {
        FString::operator=(aFStack_34,pFVar1);
        pFVar1 = aFStack_40;
        while( true ) {
          iStack_8._0_1_ = 1;
          FString::~FString(pFVar1);
LAB_1101b470:
          iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_11068ff8);
          if (iVar2 != 0) {
            *param_2 = fStack_18;
            iStack_8 = (uint)iStack_8._1_3_ << 8;
            FString::~FString(aFStack_34);
            ExceptionList = pvStack_10;
            return 1;
          }
          iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106cc70);
          if (iVar2 != 0) {
            iVar2 = FString::operator_int(pFVar3);
            FString::operator=(pFVar3,(ushort *)(&DAT_1106cc70 + iVar2 * 2));
            goto LAB_1101b4d7;
          }
          iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106ce28);
          if (iVar2 != 0) break;
          iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106ce2c);
          if (iVar2 == 0) {
            iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106cdbc);
            if (iVar2 == 0) {
              iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106cd6c);
              if (iVar2 == 0) {
                iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106cd28);
                if (iVar2 == 0) {
                  if (*(int *)GLog_exref != 0) {
                    FOutputDevice::Logf2(this_01,*(ushort **)GLog_exref);
                  }
                  goto LAB_1101b4d7;
                }
                if (3 < param_3) {
                  *param_2 = fStack_18;
                  pFVar1 = (FString *)FString::operator+(aFStack_34,aFStack_64);
                  iStack_8._0_1_ = 0x14;
                  FString::operator=(pFVar3,pFVar1);
                  pFVar3 = aFStack_64;
                  goto LAB_1101b546;
                }
                iVar2 = SubEval(this,pFVar3,&fStack_1c,4);
                if (iVar2 == 0) goto LAB_1101b4d7;
                fStack_18 = fStack_1c * fStack_18;
                pFVar1 = (FString *)GrabChar(this,aFStack_70);
                iStack_8._0_1_ = 0x15;
                FString::operator=(aFStack_34,pFVar1);
                pFVar1 = aFStack_70;
              }
              else {
                if (2 < param_3) {
                  *param_2 = fStack_18;
                  pFVar1 = (FString *)FString::operator+(aFStack_34,aFStack_58);
                  iStack_8._0_1_ = 0x12;
                  FString::operator=(pFVar3,pFVar1);
                  pFVar3 = aFStack_58;
                  goto LAB_1101b546;
                }
                iVar2 = SubEval(this,pFVar3,&fStack_1c,3);
                if (iVar2 == 0) goto LAB_1101b4d7;
                if (fStack_1c == 0.0) {
                  this_00 = extraout_ECX_01;
                  if (*(int *)GLog_exref != 0) goto LAB_1101b401;
                  goto LAB_1101b40d;
                }
                uVar4 = FUN_1103b180(extraout_ECX_01,extraout_EDX);
                uVar5 = FUN_1103b180(extraout_ECX_02,(int)(uVar4 >> 0x20));
                fStack_18 = (float)(int)((longlong)
                                         ((ulonglong)(uint)((int)uVar5 >> 0x1f) << 0x20 |
                                         uVar5 & 0xffffffff) % (longlong)(int)uVar4);
                pFVar1 = (FString *)GrabChar(this,aFStack_64);
                iStack_8._0_1_ = 0x13;
                FString::operator=(aFStack_34,pFVar1);
                pFVar1 = aFStack_64;
              }
            }
            else {
              if (2 < param_3) {
                *param_2 = fStack_18;
                pFVar1 = (FString *)FString::operator+(aFStack_34,aFStack_4c);
                iStack_8._0_1_ = 0x10;
                FString::operator=(pFVar3,pFVar1);
                pFVar3 = aFStack_4c;
                goto LAB_1101b546;
              }
              iVar2 = SubEval(this,pFVar3,&fStack_1c,3);
              if (iVar2 == 0) goto LAB_1101b4d7;
              if (fStack_1c == 0.0) {
                if (*(int *)GLog_exref == 0) goto LAB_1101b40d;
                this_00 = extraout_ECX_00;
                pFVar8 = *(FOutputDevice **)GLog_exref;
                goto LAB_1101b404;
              }
              fStack_18 = fStack_18 / fStack_1c;
              pFVar1 = (FString *)GrabChar(this,aFStack_58);
              iStack_8._0_1_ = 0x11;
              FString::operator=(aFStack_34,pFVar1);
              pFVar1 = aFStack_58;
            }
          }
          else {
            if (1 < param_3) {
              *param_2 = fStack_18;
              pFVar1 = (FString *)FString::operator+(aFStack_34,aFStack_40);
              iStack_8._0_1_ = 0xe;
              goto LAB_1101b537;
            }
            iVar2 = SubEval(this,pFVar3,&fStack_1c,2);
            if (iVar2 == 0) goto LAB_1101b4d7;
            fStack_18 = fStack_18 - fStack_1c;
            pFVar1 = (FString *)GrabChar(this,aFStack_4c);
            iStack_8._0_1_ = 0xf;
            FString::operator=(aFStack_34,pFVar1);
            pFVar1 = aFStack_4c;
          }
        }
        if (1 < param_3) {
          *param_2 = fStack_18;
          pFVar1 = (FString *)FString::operator+(aFStack_34,aFStack_40);
          iStack_8._0_1_ = 0xc;
LAB_1101b537:
          FString::operator=(pFVar3,pFVar1);
          pFVar3 = aFStack_40;
LAB_1101b546:
          iStack_8._0_1_ = 1;
          FString::~FString(pFVar3);
          iStack_8 = (uint)iStack_8._1_3_ << 8;
          FString::~FString(aFStack_34);
          ExceptionList = pvStack_10;
          return 1;
        }
        iVar2 = SubEval(this,pFVar3,&fStack_1c,2);
        if (iVar2 == 0) {
LAB_1101b4d7:
          *param_2 = fStack_18;
          iStack_8 = (uint)iStack_8._1_3_ << 8;
          FString::~FString(aFStack_34);
          ExceptionList = pvStack_10;
          return 1;
        }
        fStack_18 = fStack_1c + fStack_18;
        pFVar1 = (FString *)GrabChar(this,aFStack_40);
        iStack_8._0_1_ = 0xd;
      } while( true );
    }
  }
LAB_1101b40d:
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FString::~FString(aFStack_34);
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 11001631 WWindow::OnChar

/* public: virtual void __thiscall WWindow::OnChar(unsigned short) */

void __thiscall WWindow::OnChar(WWindow *this,ushort param_1)

{
                    /* 0x1631  694  ?OnChar@WWindow@@UAEXG@Z */
  return;
}


// ==== 11001636 WLog::GetWindowClassName

/* public: virtual void __thiscall WLog::GetWindowClassName(unsigned short *) */

void __thiscall WLog::GetWindowClassName(WLog *this,ushort *param_1)

{
                    /* 0x1636  619  ?GetWindowClassName@WLog@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WLog_1106fc78);
  return;
}


// ==== 1100163b WComboBox::GetCurrent

/* public: virtual int __thiscall WComboBox::GetCurrent(void) */

int __thiscall WComboBox::GetCurrent(WComboBox *this)

{
  LRESULT LVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x163b  493  ?GetCurrent@WComboBox@@UAEHXZ */
  puStack_c = &LAB_1105fb90;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &pvStack_10;
    LVar1 = SendMessageW(*(HWND *)(this + 4),0x147,0,0);
    ExceptionList = pvStack_10;
    return LVar1;
  }
  ExceptionList = &pvStack_10;
  LVar1 = SendMessageA(*(HWND *)(this + 4),0x147,0,0);
  ExceptionList = pvStack_10;
  return LVar1;
}


// ==== 11001645 WTimeScrollBar::GetPct

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: float __thiscall WTimeScrollBar::GetPct(void) */

float __thiscall WTimeScrollBar::GetPct(WTimeScrollBar *this)

{
                    /* 0x1645  569  ?GetPct@WTimeScrollBar@@QAEMXZ */
  return *(float *)(this + 0x48) / (float)_DAT_1106f610;
}


// ==== 1100164a WEdit::SetSelection

/* public: void __thiscall WEdit::SetSelection(int,int) */

void __thiscall WEdit::SetSelection(WEdit *this,int param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x164a  955  ?SetSelection@WEdit@@QAEXHH@Z */
  puStack_c = &LAB_1105fc30;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 4) == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert(&DAT_11068b4c,s___Controls_cpp_11068b54,0x615);
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(*(HWND *)(this + 4),0xb1,param_1,param_2);
  }
  else {
    SendMessageW(*(HWND *)(this + 4),0xb1,param_1,param_2);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100164f FTreeItem::IsPropertyItem

/* public: virtual bool __thiscall FTreeItem::IsPropertyItem(void) */

bool __thiscall FTreeItem::IsPropertyItem(FTreeItem *this)

{
                    /* 0x164f  665  ?IsPropertyItem@FTreeItem@@UAE_NXZ */
  return false;
}


// ==== 11001654 thunk_FUN_1101da60 thunk -> 1101da60

// ==== 11001659 thunk_FUN_1100e550 thunk -> 1100e550

// ==== 1100165e WCoolButton::~WCoolButton

/* public: virtual __thiscall WCoolButton::~WCoolButton(void) */

void __thiscall WCoolButton::~WCoolButton(WCoolButton *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x165e  201  ??1WCoolButton@@UAE@XZ */
  puStack_8 = &LAB_110608f8;
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


// ==== 11001668 WTerminalBase::WTerminalBase

/* public: __thiscall WTerminalBase::WTerminalBase(class WTerminalBase const &) */

WTerminalBase * __thiscall WTerminalBase::WTerminalBase(WTerminalBase *this,WTerminalBase *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1668  150  ??0WTerminalBase@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062f78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow::WWindow((WWindow *)this,(WWindow *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100166d FTreeItem::GetSelected

/* public: virtual int __thiscall FTreeItem::GetSelected(void) */

int __thiscall FTreeItem::GetSelected(FTreeItem *this)

{
                    /* 0x166d  583  ?GetSelected@FTreeItem@@UAEHXZ */
  return *(int *)(this + 0x1c);
}


// ==== 11001672 FHeaderItem::FHeaderItem

/* public: __thiscall FHeaderItem::FHeaderItem(class WPropertiesBase *,class FTreeItem *,int) */

FHeaderItem * __thiscall
FHeaderItem::FHeaderItem(FHeaderItem *this,WPropertiesBase *param_1,FTreeItem *param_2,int param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1672  19  ??0FHeaderItem@@QAE@PAVWPropertiesBase@@PAVFTreeItem@@H@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11061558;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FTreeItem::FTreeItem((FTreeItem *)this,param_1,param_2,param_3);
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001677 FClassItem::GetBase

/* public: virtual unsigned char * __thiscall FClassItem::GetBase(unsigned char *) */

uchar * __thiscall FClassItem::GetBase(FClassItem *this,uchar *param_1)

{
                    /* 0x1677  472  ?GetBase@FClassItem@@UAEPAEPAE@Z */
  return param_1;
}


// ==== 1100167c WWindow::OnCreate

/* public: virtual void __thiscall WWindow::OnCreate(void) */

void __thiscall WWindow::OnCreate(WWindow *this)

{
                    /* 0x167c  712  ?OnCreate@WWindow@@UAEXXZ */
  return;
}


// ==== 11001681 WTrackBar::OpenWindow

/* public: void __thiscall WTrackBar::OpenWindow(int,int) */

void __thiscall WTrackBar::OpenWindow(WTrackBar *this,int param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1681  880  ?OpenWindow@WTrackBar@@QAEXHH@Z */
  puStack_c = &LAB_1105fcb0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,-(uint)(param_2 != 0) & 0x200,(ushort *)0x0,
             (uint)(*(int *)(this + 0x40) == 0) | -(uint)(param_1 != 0) & 0x10000000 | 0x40000000,0,
             0,0,0,*(HWND__ **)(*(int *)(this + 0x14) + 4),(HMENU__ *)(uint)*(ushort *)(this + 0xc),
             DAT_1109c35c);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001690 WToolTip::operator=

/* public: class WToolTip & __thiscall WToolTip::operator=(class WToolTip const &) */

WToolTip * __thiscall WToolTip::operator=(WToolTip *this,WToolTip *param_1)

{
                    /* 0x1690  297  ??4WToolTip@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return this;
}


// ==== 110016a4 WWindow::OnShowWindow

/* public: virtual void __thiscall WWindow::OnShowWindow(int) */

void __thiscall WWindow::OnShowWindow(WWindow *this,int param_1)

{
                    /* 0x16a4  832  ?OnShowWindow@WWindow@@UAEXH@Z */
  return;
}


// ==== 110016a9 WCheckBox::OpenWindow

/* public: void __thiscall WCheckBox::OpenWindow(int,int,int,int,int,unsigned short const
   *,int,int,unsigned long) */

void __thiscall
WCheckBox::OpenWindow
          (WCheckBox *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          ushort *param_6,int param_7,int param_8,ulong param_9)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x16a9  853  ?OpenWindow@WCheckBox@@QAEXHHHHHPBGHHK@Z */
  puStack_c = &LAB_1105faa0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(this + 0x94) = param_7;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)0x0,
             -(uint)(param_8 != 0) & 0x80 | -(uint)(param_7 != 0) & 3 | param_9 | 0x40000002,param_2
             ,param_3,param_4,param_5,*(HWND__ **)(*(int *)(this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)(this + 0xc),DAT_1109c35c);
  (**(code **)(*(int *)this + 0x2c))(param_6);
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
  if (param_1 != 0) {
    ShowWindow(*(HWND *)(this + 4),4);
  }
  *(ulong *)(this + 0x90) = param_9 & 0xb;
  ExceptionList = pvStack_10;
  return;
}


// ==== 110016ae WUDNWindow::OnKeyDown

/* public: virtual void __thiscall WUDNWindow::OnKeyDown(unsigned short) */

void __thiscall WUDNWindow::OnKeyDown(WUDNWindow *this,ushort param_1)

{
                    /* 0x16ae  760  ?OnKeyDown@WUDNWindow@@UAEXG@Z */
  if (param_1 == 0x1b) {
    ReleaseCapture();
    (**(code **)(*(int *)this + 8))(0);
  }
  return;
}


// ==== 110016b3 FNewObjectItem::GetId

/* public: virtual unsigned __int64 __thiscall FNewObjectItem::GetId(void)const  */

__uint64 __thiscall FNewObjectItem::GetId(FNewObjectItem *this)

{
                    /* 0x16b3  507  ?GetId@FNewObjectItem@@UBE_KXZ */
  return CONCAT44(((int)this >> 0x1f) + 4,this);
}


// ==== 110016b8 WCustomLabel::OnPaint

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: virtual void __thiscall WCustomLabel::OnPaint(void) */

void __thiscall WCustomLabel::OnPaint(WCustomLabel *this)

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
  tagPAINTSTRUCT tStack_80;
  RECT RStack_40;
  FString aFStack_30 [20];
  HGDIOBJ pvStack_1c;
  char *pcStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x16b8  797  ?OnPaint@WCustomLabel@@UAEXXZ */
  puStack_c = &LAB_1105fa19;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff74;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  hDC = BeginPaint(*(HWND *)(this + 4),&tStack_80);
  WWindow::GetClientRect((WWindow *)this);
  FillRect(hDC,&RStack_40,hBrushGrey);
  h = GetStockObject(0x11);
  pvStack_1c = SelectObject(hDC,h);
  (**(code **)(*(int *)this + 0x28))();
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  SetBkMode(hDC,1);
  if (*(int *)GUnicodeOS_exref == 0) {
    puVar2 = FString::operator*(aFStack_30);
    iVar1 = winGetSizeANSI(puVar2);
    if (iVar1 == 0) {
      pcStack_18 = (char *)0x0;
    }
    else {
      puVar2 = FString::operator*(aFStack_30);
      winGetSizeANSI(puVar2);
      puStack_14 = &stack0xffffff6c;
      pcStack_18 = &stack0xffffff6c;
    }
    UVar5 = 0x24;
    pRVar4 = &RStack_40;
    iVar1 = FString::Len(aFStack_30);
    puVar2 = FString::operator*(aFStack_30);
    iVar3 = winGetSizeANSI(puVar2);
    puVar2 = FString::operator*(aFStack_30);
    lpchText_00 = winToANSI(pcStack_18,puVar2,iVar3);
    DrawTextA(hDC,lpchText_00,iVar1,pRVar4,UVar5);
  }
  else {
    UVar5 = 0x24;
    pRVar4 = &RStack_40;
    iVar1 = FString::Len(aFStack_30);
    lpchText = (LPCWSTR)FString::operator*(aFStack_30);
    DrawTextW(hDC,lpchText,iVar1,pRVar4,UVar5);
  }
  SelectObject(hDC,pvStack_1c);
  EndPaint(*(HWND *)(this + 4),&tStack_80);
  uStack_8 = uStack_8 & 0xffffff00;
  FString::~FString(aFStack_30);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110016c7 thunk_FUN_110311f0 thunk -> 110311f0

// ==== 110016cc WButton::~WButton

/* public: virtual __thiscall WButton::~WButton(void) */

void __thiscall WButton::~WButton(WButton *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x16cc  193  ??1WButton@@UAE@XZ */
  puStack_8 = &LAB_110608d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WControl::~WControl((WControl *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 110016d1 WConfigProperties::operator=

/* public: class WConfigProperties & __thiscall WConfigProperties::operator=(class WConfigProperties
   const &) */

WConfigProperties * __thiscall
WConfigProperties::operator=(WConfigProperties *this,WConfigProperties *param_1)

{
                    /* 0x16d1  266  ??4WConfigProperties@@QAEAAV0@ABV0@@Z */
  WProperties::operator=((WProperties *)this,(WProperties *)param_1);
  FTreeItem::operator=((FTreeItem *)(this + 0xfc),(FTreeItem *)(param_1 + 0xfc));
  FPreferencesInfo::operator=
            ((FPreferencesInfo *)(this + 0x138),(FPreferencesInfo *)(param_1 + 0x138));
  return this;
}


// ==== 110016db FPropertyItem::GetHeight

/* public: virtual int __thiscall FPropertyItem::GetHeight(void) */

int __thiscall FPropertyItem::GetHeight(FPropertyItem *this)

{
                    /* 0x16db  503  ?GetHeight@FPropertyItem@@UAEHXZ */
  return 0x10;
}


// ==== 110016e0 WPropertiesBase::~WPropertiesBase

/* public: virtual __thiscall WPropertiesBase::~WPropertiesBase(void) */

void __thiscall WPropertiesBase::~WPropertiesBase(WPropertiesBase *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x16e0  218  ??1WPropertiesBase@@UAE@XZ */
  puStack_8 = &LAB_110637a3;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  WItemBox::~WItemBox((WItemBox *)(this + 0x44));
  uStack_4 = 0xffffffff;
  WWindow::~WWindow((WWindow *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 110016e5 WWindow::ScreenToClient

/* public: struct FPoint __thiscall WWindow::ScreenToClient(struct FPoint const &) */

void __thiscall WWindow::ScreenToClient(WWindow *this,FPoint *param_1)

{
  LONG *in_stack_00000008;
  tagPOINT tStack_8;
  
                    /* 0x16e5  903  ?ScreenToClient@WWindow@@QAE?AUFPoint@@ABU2@@Z */
  tStack_8.x = *in_stack_00000008;
  tStack_8.y = in_stack_00000008[1];
  ::ScreenToClient(*(HWND *)(this + 4),&tStack_8);
  *(LONG *)param_1 = tStack_8.x;
  *(LONG *)(param_1 + 4) = tStack_8.y;
  return;
}


// ==== 110016ef FDelegateInt::operator=

/* public: struct FDelegateInt & __thiscall FDelegateInt::operator=(struct FDelegateInt const &) */

FDelegateInt * __thiscall FDelegateInt::operator=(FDelegateInt *this,FDelegateInt *param_1)

{
                    /* 0x16ef  246  ??4FDelegateInt@@QAEAAU0@ABU0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}


// ==== 110016f4 FPropertyItem::OnItemSetFocus

/* public: virtual void __thiscall FPropertyItem::OnItemSetFocus(void) */

void __thiscall FPropertyItem::OnItemSetFocus(FPropertyItem *this)

{
  WLabel *pWVar1;
  undefined1 *puVar2;
  char cVar3;
  UClass *pUVar4;
  int iVar5;
  UObject *pUVar6;
  FName *pFVar7;
  void *pvVar8;
  undefined4 *puVar9;
  FName *pFVar10;
  UClass *pUVar11;
  int iVar12;
  ushort *puVar13;
  ushort *puVar14;
  undefined **ppuStack_10c;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  ushort *puVar18;
  int iVar19;
  wchar_t *pwVar20;
  int aiStack_d0 [8];
  undefined **appuStack_b0 [3];
  int aiStack_a4 [4];
  undefined **appuStack_94 [3];
  undefined1 *puStack_88;
  void *pvStack_84;
  undefined1 *puStack_80;
  undefined1 uStack_7c;
  undefined3 uStack_7b;
  undefined **appuStack_78 [3];
  int iStack_6c;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  ushort auStack_58 [2];
  int aiStack_54 [5];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined **ppuStack_34;
  int iStack_30;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  WLabel *pWStack_c;
  WTrackBar *pWStack_8;
  
                    /* 0x16f4  757  ?OnItemSetFocus@FPropertyItem@@UAEXXZ */
  puStack_80 = &LAB_11061880;
  pvStack_84 = ExceptionList;
  puStack_88 = &stack0xffffff20;
  uStack_7c = 0;
  uStack_7b = 0;
  ExceptionList = &pvStack_84;
  puVar2 = &stack0xffffff20;
  if (*(int *)(this + 0x48) != 0) {
    ExceptionList = &pvStack_84;
    appFailAssert(s__EditControl_1106f0d8,s___Properties_cpp_1106b558,0x25c);
    puVar2 = puStack_88;
  }
  puStack_88 = puVar2;
  if (*(int *)(this + 0x4c) != 0) {
    appFailAssert(s__TrackControl_1106f0c8,s___Properties_cpp_1106b558,0x25d);
  }
  FTreeItem::OnItemSetFocus((FTreeItem *)this);
  if ((*(int *)(*(int *)(this + 0x3c) + 0x40) != 1) && (*(int *)(this + 0x44) == -1)) {
    ExceptionList = pvStack_84;
    return;
  }
  if ((*(uint *)(*(int *)(this + 0x3c) + 0x48) & 0x20000) != 0) {
    ExceptionList = pvStack_84;
    return;
  }
  pUVar4 = UByteProperty::StaticClass();
  iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
  if ((iVar5 != 0) &&
     (pUVar6 = thunk_FUN_11014030(*(UObject **)(this + 0x3c)), *(int *)(pUVar6 + 0x78) == 0)) {
    (**(code **)(*(int *)this + 0x24))();
    iStack_18 = (**(code **)(**(int **)(this + 8) + 0xec))();
    iStack_18 = iStack_18 + 0x1c;
    iStack_14 = iStack_14 + -1;
    pWStack_8 = (WTrackBar *)thunk_FUN_11004ba0(0x5c);
    uStack_7c = 1;
    if (pWStack_8 == (WTrackBar *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = WTrackBar::WTrackBar
                        (pWStack_8,(WWindow *)(*(int *)(this + 8) + 0x44),0,
                         (_func_long_HWND___ptr_uint_uint_long *)0x0);
    }
    uStack_7c = 0;
    *(int *)(this + 0x4c) = iVar5;
    appuStack_b0[0] = FDelegate::vftable;
    *(FPropertyItem **)(iVar5 + 0x48) = this;
    *(code **)(iVar5 + 0x4c) = OnTrackBarThumbTrack;
    appuStack_78[0] = FDelegate::vftable;
    iVar5 = *(int *)(this + 0x4c);
    *(FPropertyItem **)(iVar5 + 0x54) = this;
    *(code **)(iVar5 + 0x58) = OnTrackBarThumbPosition;
    WTrackBar::OpenWindow(*(WTrackBar **)(this + 0x4c),0,1);
    WTrackBar::SetTicFreq(*(WTrackBar **)(this + 0x4c),0x20);
    WTrackBar::SetRange(*(WTrackBar **)(this + 0x4c),0,0xff);
    WWindow::MoveWindow(*(WWindow **)(this + 0x4c));
  }
  pUVar4 = UBoolProperty::StaticClass();
  iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
  if (iVar5 == 0) {
    pUVar4 = UByteProperty::StaticClass();
    iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
    if ((iVar5 != 0) &&
       (pUVar6 = thunk_FUN_11014030(*(UObject **)(this + 0x3c)), *(int *)(pUVar6 + 0x78) != 0))
    goto LAB_110201e5;
    pUVar4 = UNameProperty::StaticClass();
    iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
    if (iVar5 != 0) {
      FName::FName((FName *)&pWStack_8,0x338);
      iVar5 = FName::operator==((FName *)(this + 0x70),(FName *)&pWStack_8);
      if (iVar5 != 0) goto LAB_110201e5;
    }
    pUVar6 = thunk_FUN_11013fa0(*(UObject **)(this + 0x3c));
    if (pUVar6 != (UObject *)0x0) goto LAB_110201e5;
    pUVar4 = UIntProperty::StaticClass();
    iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
    if (((iVar5 != 0) && (*(int **)(this + 0xc) != (int *)0x0)) &&
       (cVar3 = (**(code **)(**(int **)(this + 0xc) + 0x94))(), cVar3 != '\0')) {
      pUVar4 = UStructProperty::StaticClass();
      iVar5 = UObject::IsA(*(UObject **)(*(int *)(this + 0xc) + 0x3c),pUVar4);
      if (iVar5 != 0) {
        FName::FName((FName *)&pWStack_8,0x58);
        pFVar10 = (FName *)&pWStack_8;
        pUVar6 = thunk_FUN_11015e70(*(UObject **)(*(int *)(this + 0xc) + 0x3c));
        pFVar7 = (FName *)UObject::GetFName(*(UObject **)(pUVar6 + 0x78));
        iVar5 = FName::operator==(pFVar7,pFVar10);
        if (iVar5 != 0) goto LAB_110201e5;
      }
    }
  }
  else {
LAB_110201e5:
    aiStack_d0[4] = 0;
    aiStack_d0[5] = 0;
    aiStack_d0[6] = 0xffffffff;
    aiStack_d0[7] = 0xffffffff;
    piVar17 = aiStack_54 + 4;
    piVar16 = aiStack_54;
    pvVar8 = (void *)(**(code **)(*(int *)this + 0x24))();
    thunk_FUN_110143f0(pvVar8,piVar16,piVar17);
    aiStack_54[4] = (**(code **)(**(int **)(this + 8) + 0xec))();
    pWStack_c = (WLabel *)thunk_FUN_11004ba0(0x40);
    uStack_7c = 2;
    if (pWStack_c == (WLabel *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = WLabel::WLabel(pWStack_c,(WWindow *)(*(int *)(this + 8) + 0x44),0,
                             (_func_long_HWND___ptr_uint_uint_long *)0x0);
    }
    uStack_7c = 0;
    *(int *)(this + 0x54) = iVar5;
    *(FPropertyItem **)(iVar5 + 0x1c) = this + 4;
    WLabel::OpenWindow(*(WLabel **)(this + 0x54),0,1,0);
    aiStack_d0[0] = 0;
    aiStack_d0[1] = 0;
    aiStack_d0[2] = 0;
    aiStack_d0[3] = 1;
    piVar17 = aiStack_d0;
    piVar16 = &iStack_28;
    pvVar8 = (void *)thunk_FUN_1101c460(aiStack_54 + 4,aiStack_54,0x14);
    thunk_FUN_110143f0(pvVar8,piVar16,piVar17);
    WWindow::MoveWindow(*(WWindow **)(this + 0x54));
    aiStack_a4[0] = -2;
    aiStack_a4[1] = 0xfffffffb;
    aiStack_a4[2] = 0xfffffffe;
    aiStack_a4[3] = 0;
    puVar9 = (undefined4 *)thunk_FUN_110143f0(aiStack_54 + 4,aiStack_54,aiStack_a4);
    aiStack_54[4] = *puVar9;
    uStack_40 = puVar9[1];
    uStack_3c = puVar9[2];
    uStack_38 = puVar9[3];
    pWStack_c = (WLabel *)thunk_FUN_11004ba0(0xb8);
    uStack_7c = 3;
    if (pWStack_c == (WLabel *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = WComboBox::WComboBox
                        ((WComboBox *)pWStack_c,*(WWindow **)(this + 0x54),0,
                         (_func_long_HWND___ptr_uint_uint_long *)0x0);
    }
    uStack_7c = 0;
    *(int *)(this + 0x50) = iVar5;
    *(FPropertyItem **)(iVar5 + 0x1c) = this + 4;
    appuStack_94[0] = FDelegate::vftable;
    iVar5 = *(int *)(this + 0x50);
    *(FPropertyItem **)(iVar5 + 0xa4) = this;
    *(code **)(iVar5 + 0xa8) = ComboSelectionEndOk;
    ppuStack_34 = FDelegate::vftable;
    iVar5 = *(int *)(this + 0x50);
    *(FPropertyItem **)(iVar5 + 0xb0) = this;
    *(code **)(iVar5 + 0xb4) = ComboSelectionEndCancel;
    uVar15 = 3;
    pUVar6 = thunk_FUN_11013fa0(*(UObject **)(this + 0x3c));
    WComboBox::OpenWindow(*(WComboBox **)(this + 0x50),0,(uint)(pUVar6 != (UObject *)0x0),uVar15);
    puVar9 = (undefined4 *)thunk_FUN_110143a0(aiStack_54 + 4,aiStack_54,&iStack_28);
    ppuStack_10c = (undefined **)*puVar9;
    WWindow::MoveWindow(*(WWindow **)(this + 0x50));
    pUVar4 = UBoolProperty::StaticClass();
    iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
    if (iVar5 == 0) {
      pUVar4 = UByteProperty::StaticClass();
      iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
      if (iVar5 == 0) {
        pUVar4 = UNameProperty::StaticClass();
        iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
        if (iVar5 != 0) {
          FName::FName((FName *)&pWStack_8,0x338);
          iVar5 = FName::operator==((FName *)(this + 0x70),(FName *)&pWStack_8);
          if (iVar5 != 0) {
            thunk_FUN_11015a00((FArray *)&ppuStack_34);
            _uStack_7c = CONCAT31(uStack_7b,4);
            (**(code **)(*(int *)this + 0x74))();
            iVar5 = **(int **)(this + 0x50);
            pFVar10 = (FName *)FName::FName((FName *)&pWStack_c,0);
            FName::operator*(pFVar10);
            (**(code **)(iVar5 + 0xe8))();
            for (iVar5 = 0; iStack_5c = iVar5, iVar5 < iStack_30; iVar5 = iVar5 + 1) {
              iVar12 = **(int **)(this + 0x50);
              FName::operator*((FName *)(ppuStack_34 + iVar5));
              (**(code **)(iVar12 + 0xe8))();
            }
            uStack_7c = 0;
            thunk_FUN_1101c590((FArray *)&ppuStack_34);
            goto LAB_11020756;
          }
        }
        pUVar6 = thunk_FUN_11013fa0(*(UObject **)(this + 0x3c));
        if (pUVar6 != (UObject *)0x0) {
          pUVar6 = thunk_FUN_11014060(*(UObject **)(this + 0x3c));
          pwVar20 = u_Drivers_1106d3a0;
          puVar14 = FName::operator*((FName *)(*(int *)(this + 0x3c) + 0x4c));
          iVar5 = appStricmp(puVar14,(ushort *)pwVar20);
          if (iVar5 == 0) {
            thunk_FUN_11013cf0((FArray *)&ppuStack_34);
            _uStack_7c = CONCAT31(uStack_7b,5);
            iVar5 = 0;
            pUVar4 = *(UClass **)(pUVar6 + 0x7c);
            pUVar11 = UClass::StaticClass();
            UObject::GetRegistryObjects
                      ((TArray<FRegistryObjectInfo> *)&ppuStack_34,pUVar11,pUVar4,iVar5);
            for (iVar5 = 0; iStack_64 = iVar5, iVar5 < iStack_30; iVar5 = iVar5 + 1) {
              FString::FString((FString *)appuStack_78,(FString *)(ppuStack_34 + iVar5 * 0xf));
              uStack_7c = 6;
              FString::FString((FString *)appuStack_94);
              uStack_7c = 7;
              FString::FString((FString *)&iStack_14);
              uStack_7c = 8;
              FString::FString((FString *)appuStack_b0,(ushort *)&DAT_1106ce34);
              uStack_7c = 9;
              iVar12 = FString::Split((FString *)appuStack_78,(FString *)appuStack_b0,
                                      (FString *)appuStack_94,(FString *)&iStack_14,0);
              _uStack_7c = CONCAT31(uStack_7b,8);
              FString::~FString((FString *)appuStack_b0);
              iVar19 = 0;
              if (iVar12 == 0) {
                iVar12 = **(int **)(this + 0x50);
                puVar14 = FString::operator*((FString *)appuStack_78);
                Localize(s_Language_1106d368,s_Language_1106d368,(ushort *)u_Core_1106d374,puVar14,
                         iVar19);
              }
              else {
                iVar12 = **(int **)(this + 0x50);
                puVar18 = (ushort *)0x0;
                puVar14 = FString::operator*((FString *)appuStack_94);
                pwVar20 = u_ClassCaption_1106d380;
                puVar13 = FString::operator*((FString *)&iStack_14);
                Localize(puVar13,(ushort *)pwVar20,puVar14,puVar18,iVar19);
              }
              (**(code **)(iVar12 + 0xe8))();
              uStack_7c = 7;
              FString::~FString((FString *)&iStack_14);
              uStack_7c = 6;
              FString::~FString((FString *)appuStack_94);
              _uStack_7c = CONCAT31(uStack_7b,5);
              FString::~FString((FString *)appuStack_78);
            }
            uStack_7c = 0;
            thunk_FUN_1101da60((FArray *)&ppuStack_34);
          }
          else {
            (**(code **)(**(int **)(this + 0x50) + 0xe8))();
            thunk_FUN_1101dd00(&uStack_10);
            while (pWVar1 = pWStack_c, (int)pWStack_c < *(int *)(GObjObjects_exref + 4)) {
              iVar5 = UStruct::IsChildOf(*(UStruct **)
                                          (*(int *)GObjObjects_exref + (int)pWStack_c * 4),
                                         *(UStruct **)(pUVar6 + 0x7c));
              if (iVar5 != 0) {
                iVar5 = **(int **)(this + 0x50);
                UObject::GetName(*(UObject **)(*(int *)GObjObjects_exref + (int)pWVar1 * 4));
                (**(code **)(iVar5 + 0xe8))();
              }
              thunk_FUN_1101a3f0(&uStack_10);
            }
          }
          goto LAB_11020d1d;
        }
        pUVar4 = UIntProperty::StaticClass();
        iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
        if (iVar5 != 0) {
          iStack_60 = 0;
          while (iVar5 = iStack_60, iStack_60 < 0x10) {
            appSprintf(auStack_58,(ushort *)&DAT_1106d8c8);
            (**(code **)(**(int **)(this + 0x50) + 0xe8))();
            iStack_60 = iVar5 + 1;
          }
        }
      }
      else {
        for (iVar5 = 0; iStack_6c = iVar5, pUVar6 = thunk_FUN_11014030(*(UObject **)(this + 0x3c)),
            iVar5 < *(int *)(*(int *)(pUVar6 + 0x78) + 0x44); iVar5 = iVar5 + 1) {
          pUVar6 = thunk_FUN_11014030(*(UObject **)(this + 0x3c));
          iVar12 = **(int **)(this + 0x50);
          FName::operator*((FName *)(*(int *)(*(int *)(pUVar6 + 0x78) + 0x40) + iVar5 * 4));
          (**(code **)(iVar12 + 0xe8))();
        }
      }
    }
    else {
      (**(code **)(**(int **)(this + 0x50) + 0xe8))();
      (**(code **)(**(int **)(this + 0x50) + 0xe8))();
    }
  }
LAB_11020756:
  pUVar4 = UArrayProperty::StaticClass();
  iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
  if (((iVar5 != 0) && (*(int *)(this + 0x6c) != 0)) &&
     ((*(byte *)(*(int *)(this + 0x3c) + 0x48) & 0x40) == 0)) {
    pWStack_c = (WLabel *)&stack0xffffff14;
    iVar5 = *(int *)this;
    LocalizeGeneral(s_AddButton_1106f0bc,(ushort *)u_Window_1106949c,(ushort *)0x0);
    (**(code **)(iVar5 + 0x34))();
    pWStack_c = (WLabel *)&stack0xffffff04;
    iVar5 = *(int *)this;
    ppuStack_10c = (undefined **)0x110207e2;
    LocalizeGeneral(s_EmptyButton_1106f0ac,(ushort *)u_Window_1106949c,(ushort *)0x0);
    (**(code **)(iVar5 + 0x34))();
  }
  pUVar6 = UObject::GetOuter(*(UObject **)(this + 0x3c));
  pUVar6 = thunk_FUN_11015ea0(pUVar6);
  if ((pUVar6 != (UObject *)0x0) && (*(int *)(this + 0x6c) != 0)) {
    pUVar6 = UObject::GetOuter(*(UObject **)(this + 0x3c));
    pUVar6 = thunk_FUN_11015ea0(pUVar6);
    if (((byte)pUVar6[0x48] & 0x40) == 0) {
      pWStack_c = (WLabel *)&stack0xffffff14;
      iVar5 = *(int *)this;
      LocalizeGeneral(s_InsertButton_1106f09c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      (**(code **)(iVar5 + 0x34))();
      pWStack_c = (WLabel *)&stack0xffffff04;
      iVar5 = *(int *)this;
      ppuStack_10c = (undefined **)0x11020890;
      LocalizeGeneral(s_DeleteButton_1106f08c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      (**(code **)(iVar5 + 0x34))();
    }
  }
  pUVar4 = UStructProperty::StaticClass();
  iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
  if (iVar5 != 0) {
    pwVar20 = u_Color_1106f07c;
    pUVar6 = thunk_FUN_11015e70(*(UObject **)(this + 0x3c));
    puVar14 = UObject::GetName(*(UObject **)(pUVar6 + 0x78));
    iVar5 = appStricmp(puVar14,(ushort *)pwVar20);
    if (iVar5 == 0) {
      pWStack_c = (WLabel *)&stack0xffffff14;
      iVar5 = *(int *)this;
      LocalizeGeneral(s_BrowseButton_1106f06c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      (**(code **)(iVar5 + 0x34))();
      pWStack_c = (WLabel *)&stack0xffffff04;
      iVar5 = *(int *)this;
      ppuStack_10c = (undefined **)0x1102093a;
      LocalizeGeneral(s_PickButton_1106d9bc,(ushort *)u_Window_1106949c,(ushort *)0x0);
      (**(code **)(iVar5 + 0x34))();
    }
  }
  pUVar4 = UObjectProperty::StaticClass();
  iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
  if (iVar5 != 0) {
    pWStack_c = (WLabel *)&stack0xffffff14;
    if (*(int *)(this + 0x68) == 0) {
      iVar5 = *(int *)this;
      LocalizeGeneral(s_BrowseButton_1106f06c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      (**(code **)(iVar5 + 0x34))();
      if ((*(int *)(this + 0x5c) == 0) || (*(int *)(this + 0x60) != 0)) {
        pWStack_c = (WLabel *)&stack0xffffff04;
        iVar5 = *(int *)this;
        ppuStack_10c = (undefined **)0x11020a5e;
        LocalizeGeneral(s_UseButton_1106f040,(ushort *)u_Window_1106949c,(ushort *)0x0);
        (**(code **)(iVar5 + 0x34))();
      }
      pWStack_c = (WLabel *)&stack0xffffff04;
      iVar5 = *(int *)this;
      ppuStack_10c = (undefined **)0x11020a93;
      LocalizeGeneral(s_ClearButton_1106f05c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      (**(code **)(iVar5 + 0x34))();
    }
    else {
      iVar5 = *(int *)this;
      pWStack_c = (WLabel *)&stack0xffffff14;
      LocalizeGeneral(s_ClearButton_1106f05c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      (**(code **)(iVar5 + 0x34))();
      pWStack_c = (WLabel *)&stack0xffffff04;
      iVar5 = *(int *)this;
      ppuStack_10c = (undefined **)0x110209c6;
      LocalizeGeneral(s_FindButton_1106f04c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      (**(code **)(iVar5 + 0x34))();
      pWStack_c = (WLabel *)&ppuStack_10c;
      ppuStack_10c = FDelegate::vftable;
      iVar5 = *(int *)this;
      puVar14 = LocalizeGeneral(s_UseButton_1106f040,(ushort *)u_Window_1106949c,(ushort *)0x0);
      (**(code **)(iVar5 + 0x34))(puVar14);
    }
  }
  pUVar4 = UFloatProperty::StaticClass();
  iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
  if (iVar5 == 0) {
    pUVar4 = UIntProperty::StaticClass();
    iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
    if (iVar5 == 0) {
      pUVar4 = UNameProperty::StaticClass();
      iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
      if (iVar5 != 0) {
        FName::FName((FName *)&pWStack_8,0x338);
        iVar5 = FName::operator!=((FName *)(this + 0x70),(FName *)&pWStack_8);
        if (iVar5 != 0) goto LAB_11020b56;
      }
      pUVar4 = UStrProperty::StaticClass();
      iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
      if (iVar5 == 0) {
        pUVar4 = UObjectProperty::StaticClass();
        iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
        if (iVar5 == 0) {
          pUVar4 = UByteProperty::StaticClass();
          iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
          if ((iVar5 == 0) ||
             (pUVar6 = thunk_FUN_11014030(*(UObject **)(this + 0x3c)), *(int *)(pUVar6 + 0x78) != 0)
             ) goto LAB_11020d1d;
        }
      }
    }
  }
LAB_11020b56:
  (**(code **)(*(int *)this + 0x24))();
  iStack_28 = (**(code **)(**(int **)(this + 8) + 0xec))();
  iStack_28 = iStack_28 + 1;
  iStack_24 = iStack_24 + -1;
  pUVar4 = UByteProperty::StaticClass();
  iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
  if (iVar5 != 0) {
    iStack_20 = iStack_28 + 0x1c;
  }
  pUVar4 = UIntProperty::StaticClass();
  iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
  if (((iVar5 == 0) || (*(int **)(this + 0xc) == (int *)0x0)) ||
     (cVar3 = (**(code **)(**(int **)(this + 0xc) + 0x94))(), cVar3 == '\0')) {
LAB_11020c17:
    iStack_20 = iStack_20 - *(int *)(this + 0x20);
  }
  else {
    pUVar4 = UStructProperty::StaticClass();
    iVar5 = UObject::IsA(*(UObject **)(*(int *)(this + 0xc) + 0x3c),pUVar4);
    if (iVar5 == 0) goto LAB_11020c17;
    FName::FName((FName *)&pWStack_8,0x58);
    pFVar10 = (FName *)&pWStack_8;
    pUVar6 = thunk_FUN_11015e70(*(UObject **)(*(int *)(this + 0xc) + 0x3c));
    pFVar7 = (FName *)UObject::GetFName(*(UObject **)(pUVar6 + 0x78));
    iVar5 = FName::operator==(pFVar7,pFVar10);
    if (iVar5 == 0) goto LAB_11020c17;
    iStack_20 = iStack_20 + -0x15;
  }
  pWStack_c = (WLabel *)thunk_FUN_11004ba0(0x58);
  uStack_7c = 10;
  if (pWStack_c == (WLabel *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = WEdit::WEdit((WEdit *)pWStack_c,(WWindow *)(*(int *)(this + 8) + 0x44),0,
                         (_func_long_HWND___ptr_uint_uint_long *)0x0);
  }
  uStack_7c = 0;
  *(int *)(this + 0x48) = iVar5;
  *(FPropertyItem **)(iVar5 + 0x1c) = this + 4;
  pUVar4 = UIntProperty::StaticClass();
  iVar5 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar4);
  if (((iVar5 == 0) || (*(int **)(this + 0xc) == (int *)0x0)) ||
     (cVar3 = (**(code **)(**(int **)(this + 0xc) + 0x94))(), cVar3 == '\0')) {
LAB_11020ccf:
    iVar5 = 0;
  }
  else {
    pUVar4 = UStructProperty::StaticClass();
    iVar5 = UObject::IsA(*(UObject **)(*(int *)(this + 0xc) + 0x3c),pUVar4);
    if (iVar5 == 0) goto LAB_11020ccf;
    FName::FName((FName *)&pWStack_8,0x58);
    pFVar10 = (FName *)&pWStack_8;
    pUVar6 = thunk_FUN_11015e70(*(UObject **)(*(int *)(this + 0xc) + 0x3c));
    pFVar7 = (FName *)UObject::GetFName(*(UObject **)(pUVar6 + 0x78));
    iVar5 = FName::operator==(pFVar7,pFVar10);
    if (iVar5 == 0) goto LAB_11020ccf;
    iVar5 = 1;
  }
  WEdit::OpenWindow(*(WEdit **)(this + 0x48),0,0,0,0,0,iVar5);
  aiStack_54[0] = 0;
  aiStack_54[1] = 1;
  aiStack_54[2] = 0;
  aiStack_54[3] = 1;
  thunk_FUN_110143f0(&iStack_28,aiStack_a4,aiStack_54);
  WWindow::MoveWindow(*(WWindow **)(this + 0x48));
LAB_11020d1d:
  (**(code **)(*(int *)this + 0xa0))();
  (**(code **)(*(int *)this + 0x28))();
  if (*(int **)(this + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x48) + 8))();
  }
  if (*(int **)(this + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x4c) + 8))();
  }
  if (*(int **)(this + 0x50) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x50) + 8))();
  }
  if (*(int **)(this + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x54) + 8))();
  }
  (**(code **)(*(int *)this + 0x88))();
  ExceptionList = pvStack_84;
  return;
}


// ==== 110016f9 WListBox::InsertStringAfter

/* public: void __thiscall WListBox::InsertStringAfter(unsigned short const *,unsigned short const
   *) */

void __thiscall WListBox::InsertStringAfter(WListBox *this,ushort *param_1,ushort *param_2)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x16f9  652  ?InsertStringAfter@WListBox@@QAEXPBG0@Z */
  puStack_c = &LAB_1105fec0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = FindStringChecked(this,param_1);
  InsertString(this,iVar1 + 1,param_2);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110016fe WListBox::SetCurrent

/* public: int __thiscall WListBox::SetCurrent(int,int) */

int __thiscall WListBox::SetCurrent(WListBox *this,int param_1,int param_2)

{
  LRESULT LVar1;
  HWND hWnd;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x16fe  923  ?SetCurrent@WListBox@@QAEHHH@Z */
  puStack_c = &LAB_1105fdb0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0x88) == 0) {
    if (*(int *)GUnicodeOS_exref == 0) {
      ExceptionList = &pvStack_10;
      LVar1 = SendMessageA(*(HWND *)(this + 4),0x186,param_1,0);
    }
    else {
      ExceptionList = &pvStack_10;
      LVar1 = SendMessageW(*(HWND *)(this + 4),0x186,param_1,0);
    }
    hWnd = *(HWND *)(this + 4);
    if (*(int *)GUnicodeOS_exref != 0) {
      SendMessageW(hWnd,0x19e,param_1,param_2);
      ExceptionList = pvStack_10;
      return LVar1;
    }
  }
  else {
    ExceptionList = &pvStack_10;
    ClearSel(this);
    if (*(int *)GUnicodeOS_exref == 0) {
      LVar1 = SendMessageA(*(HWND *)(this + 4),0x185,1,param_1);
    }
    else {
      LVar1 = SendMessageW(*(HWND *)(this + 4),0x185,1,param_1);
    }
    hWnd = *(HWND *)(this + 4);
    if (*(int *)GUnicodeOS_exref != 0) {
      SendMessageW(hWnd,0x19e,param_1,param_2);
      ExceptionList = pvStack_10;
      return LVar1;
    }
  }
  SendMessageA(hWnd,0x19e,param_1,param_2);
  ExceptionList = pvStack_10;
  return LVar1;
}


// ==== 11001703 FDelegateInt::FDelegateInt

/* public: __thiscall FDelegateInt::FDelegateInt(struct FDelegateInt const &) */

void __thiscall FDelegateInt::FDelegateInt(FDelegateInt *this,FDelegateInt *param_1)

{
                    /* 0x1703  16  ??0FDelegateInt@@QAE@ABU0@@Z */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return;
}


// ==== 11001708 WWindow::OnPaste

/* public: virtual void __thiscall WWindow::OnPaste(void) */

void __thiscall WWindow::OnPaste(WWindow *this)

{
                    /* 0x1708  807  ?OnPaste@WWindow@@UAEXXZ */
  return;
}


// ==== 1100170d WWindow::ClientToScreen

/* public: struct FPoint __thiscall WWindow::ClientToScreen(struct FPoint const &) */

void __thiscall WWindow::ClientToScreen(WWindow *this,FPoint *param_1)

{
  LONG *in_stack_00000008;
  tagPOINT tStack_8;
  
                    /* 0x170d  416  ?ClientToScreen@WWindow@@QAE?AUFPoint@@ABU2@@Z */
  tStack_8.x = *in_stack_00000008;
  tStack_8.y = in_stack_00000008[1];
  ::ClientToScreen(*(HWND *)(this + 4),&tStack_8);
  *(LONG *)param_1 = tStack_8.x;
  *(LONG *)(param_1 + 4) = tStack_8.y;
  return;
}


// ==== 11001712 thunk_FUN_11025fb0 thunk -> 11025fb0

// ==== 11001717 thunk_FUN_1102ebb0 thunk -> 1102ebb0

// ==== 1100171c WEdit::GetWindowClassName

/* public: virtual void __thiscall WEdit::GetWindowClassName(unsigned short *) */

void __thiscall WEdit::GetWindowClassName(WEdit *this,ushort *param_1)

{
                    /* 0x171c  612  ?GetWindowClassName@WEdit@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WEdit_1106cbdc);
  return;
}


// ==== 11001721 WButton::OnDrawItem

/* public: virtual void __thiscall WButton::OnDrawItem(struct tagDRAWITEMSTRUCT *) */

void __thiscall WButton::OnDrawItem(WButton *this,tagDRAWITEMSTRUCT *param_1)

{
  bool bVar1;
  HDC hdc;
  HGDIOBJ h;
  int x;
  int y;
  undefined1 auStack_60 [4];
  int iStack_5c;
  int iStack_58;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  LONG LStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  HGDIOBJ pvStack_20;
  HDC pHStack_1c;
  HPEN pHStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1721  727  ?OnDrawItem@WButton@@UAEXPAUtagDRAWITEMSTRUCT@@@Z */
  puStack_c = &LAB_1105f610;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff94;
  uStack_8 = 0;
  LStack_38 = ((RECT *)(param_1 + 0x1c))->left;
  iStack_34 = *(int *)(param_1 + 0x20);
  iStack_30 = *(int *)(param_1 + 0x24);
  iStack_2c = *(int *)(param_1 + 0x28);
  if ((((byte)param_1[0x10] & 1) != 0) || (bVar1 = false, *(int *)(this + 0x8c) != 0)) {
    bVar1 = true;
  }
  ExceptionList = &pvStack_10;
  FillRect(*(HDC *)(param_1 + 0x18),(RECT *)(param_1 + 0x1c),hBrushGrey);
  (**(code **)(*(int *)this + 0xe4))(*(undefined4 *)(param_1 + 0x18),&LStack_38,!bVar1);
  hdc = CreateCompatibleDC(*(HDC *)(param_1 + 0x18));
  pHStack_1c = hdc;
  pvStack_20 = SelectObject(hdc,*(HGDIOBJ *)(this + 0x88));
  GetObjectA(*(HANDLE *)(this + 0x88),0x18,auStack_60);
  pHStack_18 = (HPEN)(iStack_2c / 2);
  BitBlt(*(HDC *)(param_1 + 0x18),(iStack_30 / 2 - iStack_5c / 2) + (-(uint)bVar1 & 2),
         (int)pHStack_18 + ((-(uint)bVar1 & 2) - iStack_58 / 2),iStack_5c,iStack_58,hdc,0,0,0xcc0020
        );
  if (bVar1) {
    pHStack_18 = CreatePen(0,1,0xc6d291);
    iStack_48 = LStack_38 + 1;
    y = iStack_34 + 1;
    x = iStack_30 + -1;
    iStack_3c = iStack_2c + -1;
    iStack_44 = y;
    iStack_40 = x;
    h = SelectObject(*(HDC *)(param_1 + 0x18),pHStack_18);
    MoveToEx(*(HDC *)(param_1 + 0x18),iStack_48,y,(LPPOINT)0x0);
    LineTo(*(HDC *)(param_1 + 0x18),x,y);
    LineTo(*(HDC *)(param_1 + 0x18),x,iStack_3c);
    LineTo(*(HDC *)(param_1 + 0x18),iStack_48,iStack_3c);
    LineTo(*(HDC *)(param_1 + 0x18),iStack_48,y);
    SelectObject(*(HDC *)(param_1 + 0x18),h);
    DeleteObject(pHStack_18);
    hdc = pHStack_1c;
  }
  SelectObject(hdc,pvStack_20);
  DeleteDC(hdc);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001726 WWindow::OnDestroy

/* public: virtual void __thiscall WWindow::OnDestroy(void) */

void __thiscall WWindow::OnDestroy(WWindow *this)

{
  undefined1 *puVar1;
  int iVar2;
  BOOL BVar3;
  FString *this_00;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  WWindow *pWStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1726  724  ?OnDestroy@WWindow@@UAEXXZ */
  puStack_c = &LAB_11062479;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc4;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xffffffc4;
  if (*(int *)(this + 4) == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert(&DAT_11068b4c,s___Window_cpp_1106f624,0x35e);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  FName::FName((FName *)&pWStack_18,0);
  iVar2 = FName::operator!=((FName *)(this + 8),(FName *)&pWStack_18);
  if (iVar2 != 0) {
    uVar6 = 1;
    GetWindowRect(this,(int)&iStack_30);
    BVar3 = IsZoomed(*(HWND *)(this + 4));
    if (BVar3 == 0) {
      this_00 = (FString *)
                FString::Printf((ushort *)&iStack_2c,u__X__i_Y__i_XL__i_YL__i__11071224,iStack_30,
                                iStack_2c,iStack_28 - iStack_30,iStack_24 - iStack_2c,uVar6);
      iStack_8._0_1_ = 1;
      iVar2 = **(int **)GConfig_exref;
      uVar6 = 0;
      puVar4 = FString::operator*(this_00);
      puVar5 = FName::operator*((FName *)(this + 8));
      (**(code **)(iVar2 + 0x30))(u_WindowPositions_1106dcec,puVar5,puVar4,uVar6);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FString::~FString((FString *)&iStack_2c);
    }
  }
  pWStack_18 = this;
  thunk_FUN_1102e490(&_Windows,(int *)&pWStack_18);
  *(undefined4 *)(this + 4) = 0;
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100172b WUDNWindow::GetCurrentTopicID

/* public: int __thiscall WUDNWindow::GetCurrentTopicID(void) */

int __thiscall WUDNWindow::GetCurrentTopicID(WUDNWindow *this)

{
  POINT Point;
  HWND hWnd;
  LRESULT LVar1;
  tagPOINT tStack_8;
  
                    /* 0x172b  497  ?GetCurrentTopicID@WUDNWindow@@QAEHXZ */
  GetCursorPos(&tStack_8);
  Point.y = tStack_8.y;
  Point.x = tStack_8.x;
  hWnd = WindowFromPoint(Point);
  if (*(int *)GUnicodeOS_exref != 0) {
    LVar1 = SendMessageW(hWnd,0x8034,0,0);
    return LVar1;
  }
  LVar1 = SendMessageA(hWnd,0x8034,0,0);
  return LVar1;
}


// ==== 11001730 WCrashBoxDialog::WCrashBoxDialog

/* public: __thiscall WCrashBoxDialog::WCrashBoxDialog(class WCrashBoxDialog const &) */

WCrashBoxDialog * __thiscall
WCrashBoxDialog::WCrashBoxDialog(WCrashBoxDialog *this,WCrashBoxDialog *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1730  76  ??0WCrashBoxDialog@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1106344b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WDialog::WDialog((WDialog *)this,(WDialog *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  WEdit::WEdit((WEdit *)(this + 0x3c),(WEdit *)(param_1 + 0x3c));
  uStack_4._0_1_ = 1;
  WCoolButton::WCoolButton((WCoolButton *)(this + 0x94),(WCoolButton *)(param_1 + 0x94));
  uStack_4._0_1_ = 2;
  WCoolButton::WCoolButton((WCoolButton *)(this + 0x130),(WCoolButton *)(param_1 + 0x130));
  uStack_4._0_1_ = 3;
  WCoolButton::WCoolButton((WCoolButton *)(this + 0x1cc),(WCoolButton *)(param_1 + 0x1cc));
  uStack_4._0_1_ = 4;
  FString::FString((FString *)(this + 0x268),(FString *)(param_1 + 0x268));
  uStack_4 = CONCAT31(uStack_4._1_3_,5);
  FString::FString((FString *)(this + 0x274),(FString *)(param_1 + 0x274));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100173a WWindow::OnMdiActivate

/* public: virtual void __thiscall WWindow::OnMdiActivate(int) */

void __thiscall WWindow::OnMdiActivate(WWindow *this,int param_1)

{
                    /* 0x173a  781  ?OnMdiActivate@WWindow@@UAEXH@Z */
  return;
}


// ==== 1100173f thunk_FUN_11035c20 thunk -> 11035c20

// ==== 11001749 WRichEdit::OpenWindow

/* public: void __thiscall WRichEdit::OpenWindow(int,int) */

void __thiscall WRichEdit::OpenWindow(WRichEdit *this,int param_1,int param_2)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1749  870  ?OpenWindow@WRichEdit@@QAEXHH@Z */
  puStack_c = &LAB_1105fc80;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0x200,(ushort *)0x0,-(uint)(param_1 != 0) & 0x10000000 | 0x4030c104,0,0
             ,0,0,*(HWND__ **)(*(int *)(this + 0x14) + 4),(HMENU__ *)(uint)*(ushort *)(this + 0xc),
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


// ==== 1100174e WListView::Empty

/* public: void __thiscall WListView::Empty(void) */

void __thiscall WListView::Empty(WListView *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x174e  437  ?Empty@WListView@@QAEXXZ */
  puStack_c = &LAB_1105f7c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0x1009,0,0);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0x1009,0,0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001753 WClassProperties::GetWindowClassName

/* public: virtual void __thiscall WClassProperties::GetWindowClassName(unsigned short *) */

void __thiscall WClassProperties::GetWindowClassName(WClassProperties *this,ushort *param_1)

{
                    /* 0x1753  604  ?GetWindowClassName@WClassProperties@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WClassProperties_1106fd80);
  return;
}


// ==== 11001758 WProperties::OnPaint

/* public: virtual void __thiscall WProperties::OnPaint(void) */

void __thiscall WProperties::OnPaint(WProperties *this)

{
  BOOL BVar1;
  HDC hDC;
  tagPAINTSTRUCT tStack_7c;
  LONG LStack_30;
  RECT RStack_2c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1758  799  ?OnPaint@WProperties@@UAEXXZ */
  puStack_c = &LAB_11060f60;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff78;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  BVar1 = GetUpdateRect(*(HWND *)(this + 4),(LPRECT)0x0,0);
  if (BVar1 != 0) {
    hDC = BeginPaint(*(HWND *)(this + 4),&tStack_7c);
    WWindow::GetClientRect((WWindow *)this);
    WWindow::GetClientRect((WWindow *)(this + 0x44));
    RStack_2c.top = LStack_30;
    FillRect(hDC,&RStack_2c,(HBRUSH)0x10);
    EndPaint(*(HWND *)(this + 4),&tStack_7c);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100175d thunk_FUN_1102bfc0 thunk -> 1102bfc0

// ==== 11001762 thunk_FUN_1100de40 thunk -> 1100de40

// ==== 11001767 WTreeView::WTreeView

/* public: __thiscall WTreeView::WTreeView(class WWindow *,int,long (__stdcall*)(struct HWND__
   *,unsigned int,unsigned int,long)) */

WTreeView * __thiscall
WTreeView::WTreeView
          (WTreeView *this,WWindow *param_1,int param_2,
          _func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1767  164  ??0WTreeView@@QAE@PAVWWindow@@HP6GJPAUHWND__@@IIJ@Z@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062cc8;
  pvStack_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = SuperProc;
  }
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,param_1,param_2,param_3);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined ***)(this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined ***)(this + 0x58) = FDelegate::vftable;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100176c WComboBox::FindString

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: virtual int __thiscall WComboBox::FindString(unsigned short const *) */

int __thiscall WComboBox::FindString(WComboBox *this,ushort *param_1)

{
  HWND hWnd;
  int iVar1;
  char *pcVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x176c  459  ?FindString@WComboBox@@UAEHPBG@Z */
  puStack_c = &LAB_1105fba0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
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
    iVar1 = SendMessageA(hWnd,0x14c,0xffffffff,(LPARAM)pcVar2);
  }
  else {
    ExceptionList = &pvStack_10;
    iVar1 = SendMessageW(*(HWND *)(this + 4),0x14c,0xffffffff,(LPARAM)param_1);
  }
  ExceptionList = pvStack_10;
  return iVar1;
}


// ==== 11001771 WItemBox::operator=

/* public: class WItemBox & __thiscall WItemBox::operator=(class WItemBox const &) */

WItemBox * __thiscall WItemBox::operator=(WItemBox *this,WItemBox *param_1)

{
                    /* 0x1771  276  ??4WItemBox@@QAEAAV0@ABV0@@Z */
  WListBox::operator=((WListBox *)this,(WListBox *)param_1);
  return this;
}


// ==== 1100177b WComboBox::OpenWindow

/* public: void __thiscall WComboBox::OpenWindow(int,int,unsigned int) */

void __thiscall WComboBox::OpenWindow(WComboBox *this,int param_1,int param_2,uint param_3)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x177b  856  ?OpenWindow@WComboBox@@QAEXHHI@Z */
  puStack_c = &LAB_1105fb00;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)0x0,
             -(uint)(param_1 != 0) & 0x10000000 | -(uint)(param_2 != 0) & 0x100 | param_3 |
             0x40200000,0,0,0x40,0x180,*(HWND__ **)(*(int *)(this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)(this + 0xc),DAT_1109c35c);
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


// ==== 11001780 WWindow::CallDefaultProc

/* public: virtual int __thiscall WWindow::CallDefaultProc(unsigned int,unsigned int,long) */

int __thiscall WWindow::CallDefaultProc(WWindow *this,uint param_1,uint param_2,long param_3)

{
  LRESULT LVar1;
  
                    /* 0x1780  408  ?CallDefaultProc@WWindow@@UAEHIIJ@Z */
  if (((byte)this[0x10] & 2) == 0) {
    if (*(int *)GUnicodeOS_exref != 0) {
      LVar1 = DefWindowProcW(*(HWND *)(this + 4),param_1,param_2,param_3);
      return LVar1;
    }
    LVar1 = DefWindowProcA(*(HWND *)(this + 4),param_1,param_2,param_3);
    return LVar1;
  }
  if (*(int *)GUnicodeOS_exref != 0) {
    LVar1 = DefMDIChildProcW(*(HWND *)(this + 4),param_1,param_2,param_3);
    return LVar1;
  }
  LVar1 = DefMDIChildProcA(*(HWND *)(this + 4),param_1,param_2,param_3);
  return LVar1;
}


// ==== 11001785 WSplitterPane::WSplitterPane

/* public: __thiscall WSplitterPane::WSplitterPane(void) */

WSplitterPane * __thiscall WSplitterPane::WSplitterPane(WSplitterPane *this)

{
  WSplitterPane *pWStack_20;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1785  143  ??0WSplitterPane@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11064208;
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


// ==== 1100178a WThinScrollBar::OnMouseMove

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall WThinScrollBar::OnMouseMove(unsigned long,struct FPoint) */

void __thiscall
WThinScrollBar::OnMouseMove(WThinScrollBar *this,undefined4 param_1,undefined4 param_3,int param_4)

{
  float fVar1;
  HWND pHVar2;
  undefined1 *puVar3;
  undefined1 auStack_30 [12];
  int iStack_24;
  float fStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x178a  790  ?OnMouseMove@WThinScrollBar@@UAEXKUFPoint@@@Z */
  puStack_c = &LAB_11061e90;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pHVar2 = GetCapture();
  if (pHVar2 == *(HWND *)(this + 4)) {
    puVar3 = auStack_30;
    WWindow::GetClientRect((WWindow *)this);
    fStack_18 = (float)(param_4 - *(int *)(this + 0x60));
    if (fStack_18 != 0.0) {
      fVar1 = (float)_DAT_1106f610;
      fStack_18 = *(float *)(this + 0x48) + ((float)(int)fStack_18 / (float)iStack_24) * fVar1;
      *(float *)(this + 0x48) = fStack_18;
      if (fStack_18 < 0.0) {
        *(undefined4 *)(this + 0x48) = 0;
      }
      if (fVar1 < *(float *)(this + 0x48) + *(float *)(this + 0x4c)) {
        *(float *)(this + 0x48) = fVar1 - *(float *)(this + 0x4c);
      }
      (*(code *)**(undefined4 **)(this + 0x3c))(puVar3);
    }
    *(undefined4 *)(this + 0x5c) = param_3;
    *(int *)(this + 0x60) = param_4;
  }
  InvalidateRect(*(HWND *)(this + 4),(RECT *)0x0,0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100178f WDragInterceptor::OpenWindow

/* public: virtual void __thiscall WDragInterceptor::OpenWindow(void) */

void __thiscall WDragInterceptor::OpenWindow(WDragInterceptor *this)

{
  undefined4 *puVar1;
  int *piVar2;
  void *this_00;
  undefined4 uVar3;
  RECT *lpRect;
  int *piVar4;
  FRect aFStack_54 [16];
  int aiStack_44 [4];
  int aiStack_34 [8];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x178f  858  ?OpenWindow@WDragInterceptor@@UAEXXZ */
  puStack_c = &LAB_110622f0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffa0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)0x0,0x50000000,0,0,0,0,
             *(HWND__ **)(*(int *)(this + 0x14) + 4),(HMENU__ *)0x0,DAT_1109c35c);
  puVar1 = (undefined4 *)WWindow::GetCursorPos(*(WWindow **)(this + 0x14));
  *(undefined4 *)(this + 0x3c) = *puVar1;
  *(undefined4 *)(this + 0x40) = puVar1[1];
  *(int *)(this + 0x54) = *(int *)(this + 0x4c);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(this + 0x50);
  SetCapture(*(HWND *)(this + 4));
  SetFocus(*(HWND *)(this + 4));
  piVar2 = (int *)WWindow::GetCursorPos(*(WWindow **)(this + 0x14));
  piVar4 = aiStack_34;
  this_00 = (void *)thunk_FUN_110143a0(this + 100,aiStack_44,(int *)(this + 0x4c));
  uVar3 = thunk_FUN_11014350(this_00,piVar4,piVar2);
  lpRect = (RECT *)WWindow::ClientToScreen((WWindow *)this,aFStack_54);
  ClipCursor(lpRect);
  (**(code **)(*(int *)this + 0xec))(0,uVar3);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001794 thunk_FUN_110147d0 thunk -> 110147d0

// ==== 1100179e WSplitterContainer::SetPct

/* public: void __thiscall WSplitterContainer::SetPct(float) */

void __thiscall WSplitterContainer::SetPct(WSplitterContainer *this,float param_1)

{
                    /* 0x179e  937  ?SetPct@WSplitterContainer@@QAEXM@Z */
  *(float *)(*(int *)(this + 0x3c) + 0x40) = param_1;
  WSplitter::PositionSplitter(*(WSplitter **)(this + 0x3c));
  return;
}


// ==== 110017a3 WListBox::GetString

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: class FString __thiscall WListBox::GetString(int) */

int __thiscall WListBox::GetString(WListBox *this,int param_1)

{
  uint uVar1;
  ushort *lParam;
  WPARAM in_stack_00000008;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x17a3  592  ?GetString@WListBox@@QAE?AVFString@@H@Z */
  puStack_c = &LAB_1105fd4a;
  pvStack_10 = ExceptionList;
  lParam = (ushort *)0x0;
  uStack_8 = 1;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    uVar1 = SendMessageA(*(HWND *)(this + 4),0x18a,in_stack_00000008,0);
  }
  else {
    ExceptionList = &pvStack_10;
    uVar1 = SendMessageW(*(HWND *)(this + 4),0x18a,in_stack_00000008,0);
  }
  if (uVar1 == 0xffffffff) {
    FString::FString((FString *)param_1,(ushort *)&DAT_11068ff8);
  }
  else {
    if ((*(int *)GUnicode_exref == 0) || (*(int *)GUnicodeOS_exref != 0)) {
      if ((uVar1 & 0x7fffffff) != 0x7fffffff) {
        lParam = (ushort *)&stack0xffffffd4;
      }
      SendMessageW(*(HWND *)(this + 4),0x189,in_stack_00000008,(LPARAM)lParam);
      lParam[uVar1] = 0;
    }
    else {
      if (uVar1 != 0xffffffff) {
        lParam = (ushort *)&stack0xffffffd4;
      }
      SendMessageA(*(HWND *)(this + 4),0x189,in_stack_00000008,(LPARAM)lParam);
      *(char *)((int)lParam + uVar1) = '\0';
      lParam = appFromAnsi((char *)lParam,(ushort *)0x0);
    }
    FString::FString((FString *)param_1,lParam);
  }
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 110017ad WItemBox::GetPackageName

/* public: virtual unsigned short const * __thiscall WItemBox::GetPackageName(void) */

ushort * __thiscall WItemBox::GetPackageName(WItemBox *this)

{
                    /* 0x17ad  538  ?GetPackageName@WItemBox@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 110017b2 WWindow::SetFont

/* public: void __thiscall WWindow::SetFont(struct HFONT__ *) */

void __thiscall WWindow::SetFont(WWindow *this,HFONT__ *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x17b2  930  ?SetFont@WWindow@@QAEXPAUHFONT__@@@Z */
  puStack_c = &LAB_11061e60;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0x30,(WPARAM)param_1,0);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0x30,(WPARAM)param_1,0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110017b7 WTerminal::operator=

/* public: class WTerminal & __thiscall WTerminal::operator=(class WTerminal const &) */

WTerminal * __thiscall WTerminal::operator=(WTerminal *this,WTerminal *param_1)

{
  FOutputDevice *pFVar1;
  WTerminal *pWVar2;
  int iVar3;
  
                    /* 0x17b7  293  ??4WTerminal@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  if (param_1 == (WTerminal *)0x0) {
    pFVar1 = (FOutputDevice *)0x0;
  }
  else {
    pFVar1 = (FOutputDevice *)(param_1 + 0x3c);
  }
  FOutputDevice::operator=((FOutputDevice *)(this + 0x3c),pFVar1);
  WWindow::operator=((WWindow *)(this + 0x40),(WWindow *)(param_1 + 0x40));
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  pWVar2 = this + 0xa8;
  iVar3 = 0x100;
  do {
    *(undefined2 *)pWVar2 = *(undefined2 *)(pWVar2 + ((int)param_1 - (int)this));
    pWVar2 = pWVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0x2a8) = *(undefined4 *)(param_1 + 0x2a8);
  return this;
}


// ==== 110017bc WPropertySheet::GetPackageName

/* public: virtual unsigned short const * __thiscall WPropertySheet::GetPackageName(void) */

ushort * __thiscall WPropertySheet::GetPackageName(WPropertySheet *this)

{
                    /* 0x17bc  548  ?GetPackageName@WPropertySheet@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 110017c6 WThinScrollBar::OpenWindow

/* public: void __thiscall WThinScrollBar::OpenWindow(int,int,int,int) */

void __thiscall
WThinScrollBar::OpenWindow(WThinScrollBar *this,int param_1,int param_2,int param_3,int param_4)

{
  HWND__ *pHVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x17c6  877  ?OpenWindow@WThinScrollBar@@QAEXHHHH@Z */
  puStack_c = &LAB_11062200;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0x14) == 0) {
    pHVar1 = (HWND__ *)0x0;
  }
  else {
    pHVar1 = *(HWND__ **)(*(int *)(this + 0x14) + 4);
  }
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)0x0,0x56000000,param_1,param_2,param_3,param_4,pHVar1,
             (HMENU__ *)0x0,DAT_1109c35c);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110017cb thunk_FUN_11016150 thunk -> 11016150

// ==== 110017d0 WCoolButton::operator=

/* public: class WCoolButton & __thiscall WCoolButton::operator=(class WCoolButton const &) */

WCoolButton * __thiscall WCoolButton::operator=(WCoolButton *this,WCoolButton *param_1)

{
                    /* 0x17d0  268  ??4WCoolButton@@QAEAAV0@ABV0@@Z */
  WButton::operator=((WButton *)this,(WButton *)param_1);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  return this;
}


// ==== 110017da WProperties::GetPackageName

/* public: virtual unsigned short const * __thiscall WProperties::GetPackageName(void) */

ushort * __thiscall WProperties::GetPackageName(WProperties *this)

{
                    /* 0x17da  546  ?GetPackageName@WProperties@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 110017df FWindowsBitmap::~FWindowsBitmap

/* public: __thiscall FWindowsBitmap::~FWindowsBitmap(void) */

void __thiscall FWindowsBitmap::~FWindowsBitmap(FWindowsBitmap *this)

{
                    /* 0x17df  191  ??1FWindowsBitmap@@QAE@XZ */
  if ((*(HGDIOBJ *)(this + 0xc) != (HGDIOBJ)0x0) && (*(int *)(this + 8) == 0)) {
    DeleteObject(*(HGDIOBJ *)(this + 0xc));
  }
  return;
}


// ==== 110017e4 thunk_FUN_1102aec0 thunk -> 1102aec0

// ==== 110017e9 thunk_FUN_11039910 thunk -> 11039910

// ==== 110017ee WWindow::OnEnterIdle

/* public: virtual void __thiscall WWindow::OnEnterIdle(void) */

void __thiscall WWindow::OnEnterIdle(WWindow *this)

{
                    /* 0x17ee  732  ?OnEnterIdle@WWindow@@UAEXXZ */
  return;
}


// ==== 110017f3 WComboBox::SetCurrent

/* public: virtual void __thiscall WComboBox::SetCurrent(unsigned short const *) */

void __thiscall WComboBox::SetCurrent(WComboBox *this,ushort *param_1)

{
  WPARAM wParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x17f3  922  ?SetCurrent@WComboBox@@UAEXPBG@Z */
  puStack_c = &LAB_1105fb80;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  wParam = (**(code **)(*(int *)this + 0x104))(param_1);
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(*(HWND *)(this + 4),0x14e,wParam,0);
  }
  else {
    SendMessageW(*(HWND *)(this + 4),0x14e,wParam,0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110017f8 FWindowAnchor::~FWindowAnchor

/* public: __thiscall FWindowAnchor::~FWindowAnchor(void) */

void __thiscall FWindowAnchor::~FWindowAnchor(FWindowAnchor *this)

{
                    /* 0x17f8  190  ??1FWindowAnchor@@QAE@XZ */
  return;
}


// ==== 110017fd FPropertyItem::OnChooseColorButton

/* public: void __thiscall FPropertyItem::OnChooseColorButton(void) */

void __thiscall FPropertyItem::OnChooseColorButton(FPropertyItem *this)

{
  uint *puVar1;
  BOOL BVar2;
  int iVar3;
  uint uVar4;
  tagCHOOSECOLORA *ptVar5;
  ushort auStack_248 [260];
  tagCHOOSECOLORA tStack_40;
  tagCHOOSECOLORA *ptStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x17fd  695  ?OnChooseColorButton@FPropertyItem@@QAEXXZ */
  puStack_c = &LAB_11060d00;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffdac;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = (uint *)(**(code **)(*(int *)this + 0x68))(this,0);
  if (puVar1 == (uint *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
  }
  ptStack_18 = &tStack_40;
  ptVar5 = ptStack_18;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    ptVar5->lStructSize = 0;
    ptVar5 = (tagCHOOSECOLORA *)&ptVar5->hwndOwner;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)&ptVar5->lStructSize = 0;
    ptVar5 = (tagCHOOSECOLORA *)((int)&ptVar5->lStructSize + 1);
  }
  tStack_40.lStructSize = 0x24;
  tStack_40.hwndOwner = *(HWND *)(*(int *)(this + 8) + 0x48);
  tStack_40.lpCustColors = (COLORREF *)&DAT_1109c290;
  tStack_40.rgbResult = (uint)CONCAT11((char)uVar4,(char)(uVar4 >> 8)) << 8 | uVar4 >> 0x10 & 0xff;
  tStack_40.Flags = 3;
  BVar2 = ChooseColorA(&tStack_40);
  if (BVar2 == 1) {
    appSprintf(auStack_248,(ushort *)u__R__i_G__i_B__i__1106d594,tStack_40.rgbResult & 0xff,
               tStack_40.rgbResult >> 8 & 0xff,tStack_40.rgbResult >> 0x10 & 0xff);
    (**(code **)(*(int *)this + 0x8c))(auStack_248);
    InvalidateRect(*(HWND *)(*(int *)(this + 8) + 0x48),(RECT *)0x0,0);
    UpdateWindow(*(HWND *)(*(int *)(this + 8) + 0x48));
  }
  (**(code **)(*(int *)this + 0x50))();
  (**(code **)(*(int *)this + 0x28))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001802 WListBox::GetItemData

/* public: void * __thiscall WListBox::GetItemData(int) */

void * __thiscall WListBox::GetItemData(WListBox *this,int param_1)

{
  void *pvVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1802  513  ?GetItemData@WListBox@@QAEPAXH@Z */
  puStack_c = &LAB_1105fd60;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &pvStack_10;
    pvVar1 = (void *)SendMessageW(*(HWND *)(this + 4),0x199,param_1,0);
    ExceptionList = pvStack_10;
    return pvVar1;
  }
  ExceptionList = &pvStack_10;
  pvVar1 = (void *)SendMessageA(*(HWND *)(this + 4),0x199,param_1,0);
  ExceptionList = pvStack_10;
  return pvVar1;
}


// ==== 11001807 WWizardDialog::OnCancel

/* public: virtual void __thiscall WWizardDialog::OnCancel(void) */

void __thiscall WWizardDialog::OnCancel(WWizardDialog *this)

{
  undefined4 *puVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1807  691  ?OnCancel@WWizardDialog@@UAEXXZ */
  puStack_c = &LAB_11060280;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = (undefined4 *)thunk_FUN_1100f510(this + 0x2ec,0);
  (**(code **)(*(int *)*puVar1 + 0x10c))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001811 WObjectProperties::WObjectProperties

/* public: __thiscall WObjectProperties::WObjectProperties(class WObjectProperties const &) */

WObjectProperties * __thiscall
WObjectProperties::WObjectProperties(WObjectProperties *this,WObjectProperties *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1811  111  ??0WObjectProperties@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063ca6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WProperties::WProperties((WProperties *)this,(WProperties *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_WWindow_;
  *(undefined ***)(this + 0x3c) = vftable_for_FControlSnoop_;
  FObjectsItem::FObjectsItem((FObjectsItem *)(this + 0xfc),(FObjectsItem *)(param_1 + 0xfc));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001816 WProperties::WProperties

/* public: __thiscall WProperties::WProperties(void) */

WProperties * __thiscall WProperties::WProperties(WProperties *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1816  121  ??0WProperties@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063a5f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WPropertiesBase::WPropertiesBase((WPropertiesBase *)this);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_WWindow_;
  *(undefined ***)(this + 0x3c) = vftable_for_FControlSnoop_;
  FArray::FArray((FArray *)(this + 0xd4));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100181b WThinScrollBar::OnLeftButtonDoubleClick

/* public: virtual void __thiscall WThinScrollBar::OnLeftButtonDoubleClick(void) */

void __thiscall WThinScrollBar::OnLeftButtonDoubleClick(WThinScrollBar *this)

{
                    /* 0x181b  764  ?OnLeftButtonDoubleClick@WThinScrollBar@@UAEXXZ */
                    /* WARNING: Could not recover jumptable at 0x11023938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0xb8))();
  return;
}


// ==== 11001820 WCoolButton::GetWindowClassName

/* public: virtual void __thiscall WCoolButton::GetWindowClassName(unsigned short *) */

void __thiscall WCoolButton::GetWindowClassName(WCoolButton *this,ushort *param_1)

{
                    /* 0x1820  608  ?GetWindowClassName@WCoolButton@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WCoolButton_1106c938);
  return;
}


// ==== 11001825 WEdit::SubEval

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual int __thiscall WEdit::SubEval(class FString *,float *,int) */

int __thiscall WEdit::SubEval(WEdit *this,FString *param_1,float *param_2,int param_3)

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
  FString aFStack_70 [12];
  FString aFStack_64 [12];
  FString aFStack_58 [12];
  FString aFStack_4c [12];
  FString aFStack_40 [12];
  FString aFStack_34 [20];
  undefined1 *puStack_20;
  float fStack_1c;
  float fStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1825  988  ?SubEval@WEdit@@UAEHPAVFString@@PAMH@Z */
  pFVar4 = param_1;
  puStack_c = &LAB_11060abd;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff84;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  FString::FString(aFStack_34);
  iStack_8._0_1_ = 1;
  fStack_1c = 0.0;
  fStack_18 = 0.0;
  pFVar1 = (FString *)GrabChar(this,aFStack_40);
  iStack_8._0_1_ = 2;
  FString::operator=(aFStack_34,pFVar1);
  iStack_8._0_1_ = 1;
  FString::~FString(aFStack_40);
  iVar2 = FString::operator>=(aFStack_34,(ushort *)&DAT_1106c3c0);
  if (iVar2 != 0) {
    uVar5 = 0x1106c3bc11014ded;
    iVar2 = FString::operator<=(aFStack_34,(ushort *)&DAT_1106c3bc);
    if (iVar2 != 0) goto LAB_11014e07;
  }
  uVar5 = 0x1106ce3411014dff;
  iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106ce34);
  if (iVar2 != 0) {
LAB_11014e07:
    fStack_18 = 0.0;
    while( true ) {
      pwVar10 = (wchar_t *)((ulonglong)uVar5 >> 0x20);
      iVar2 = FString::operator>=(aFStack_34,(ushort *)&DAT_1106c3c0);
      if ((iVar2 == 0) ||
         (iVar2 = FString::operator<=(aFStack_34,(ushort *)&DAT_1106c3bc), iVar2 == 0)) break;
      FString::FString((FString *)&pFStack_90,aFStack_34);
      iStack_8._0_1_ = 1;
      fVar8 = Val(this);
      fStack_18 = fStack_18 * (float)_DAT_1106c3b0 + fVar8;
      pFVar1 = param_1;
      pFVar3 = (FString *)GrabChar(this,aFStack_40);
      iStack_8._0_1_ = 4;
      FString::operator=(aFStack_34,pFVar3);
      iStack_8._0_1_ = 1;
      uVar5 = CONCAT44(pFVar1,0x11014e8c);
      FString::~FString(aFStack_40);
    }
    iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106ce34);
    if (iVar2 == 0) goto LAB_110150d1;
    param_1 = _DAT_1106ce30;
    uVar5 = CONCAT44(pwVar10,pFVar4);
    pFStack_90 = (FString *)0x11014eb9;
    pFVar1 = (FString *)GrabChar(this,aFStack_40);
    iStack_8._0_1_ = 5;
    do {
      pwVar10 = (wchar_t *)((ulonglong)uVar5 >> 0x20);
      FString::operator=(aFStack_34,pFVar1);
      iStack_8._0_1_ = 1;
      FString::~FString(aFStack_40);
      iVar2 = FString::operator>=(aFStack_34,(ushort *)&DAT_1106c3c0);
      if (iVar2 == 0) goto LAB_110150d1;
      iVar2 = FString::operator<=(aFStack_34,(ushort *)&DAT_1106c3bc);
      if (iVar2 == 0) goto LAB_110150d1;
      puStack_20 = (undefined1 *)&pFStack_90;
      FString::FString((FString *)&pFStack_90,aFStack_34);
      iStack_8._0_1_ = 1;
      puStack_20 = (undefined1 *)Val(this);
      fStack_18 = fStack_18 + (float)param_1 * (float)puStack_20;
      param_1 = (FString *)((float)param_1 / (float)_DAT_1106c3b0);
      uVar5 = CONCAT44(pFVar4,aFStack_40);
      pFVar1 = (FString *)GrabChar(this,aFStack_40);
      iStack_8._0_1_ = 7;
    } while( true );
  }
  iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106cc74);
  pwVar10 = (wchar_t *)param_1;
  if (iVar2 == 0) {
    iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106ce2c);
    if (iVar2 == 0) {
      iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106ce28);
      if (iVar2 == 0) {
        iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106ce24);
        if (iVar2 == 0) {
          pwVar10 = u_No_value_recognized_1106ccc4;
        }
        else {
          pFStack_90 = (FString *)0x11015050;
          iVar2 = (**(code **)(*(int *)this + 0xec))();
          if (iVar2 == 0) goto LAB_11015076;
          if (0.0 <= fStack_18) {
            dVar9 = appSqrt((double)fStack_18);
            fStack_18 = (float)dVar9;
            pFVar1 = (FString *)GrabChar(this,aFStack_40);
            iStack_8._0_1_ = 0xb;
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
          pFVar1 = (FString *)GrabChar(this,aFStack_40);
          iStack_8._0_1_ = 10;
          goto LAB_110150bb;
        }
      }
    }
    else {
      pFStack_90 = (FString *)0x11014fbe;
      iVar2 = (**(code **)(*(int *)this + 0xec))();
      if (iVar2 != 0) {
        fStack_18 = -fStack_18;
        pFVar1 = (FString *)GrabChar(this,aFStack_40);
        iStack_8._0_1_ = 9;
        goto LAB_110150bb;
      }
    }
  }
  else {
    pFStack_90 = (FString *)0x11014f79;
    iVar2 = (**(code **)(*(int *)this + 0xec))();
    if (iVar2 != 0) {
      pFVar1 = (FString *)GrabChar(this,aFStack_40);
      iStack_8._0_1_ = 8;
LAB_110150bb:
      while( true ) {
        FString::operator=(aFStack_34,pFVar1);
        pFVar1 = aFStack_40;
        while( true ) {
          iStack_8._0_1_ = 1;
          FString::~FString(pFVar1);
LAB_110150d1:
          iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_11068ff8);
          if (iVar2 != 0) goto LAB_1101546a;
          iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106cc70);
          if (iVar2 != 0) {
            iVar2 = FString::operator_int(pFVar4);
            FString::operator=(pFVar4,(ushort *)(&DAT_1106cc70 + iVar2 * 2));
            *param_2 = fStack_18;
            iStack_8 = (uint)iStack_8._1_3_ << 8;
            FString::~FString(aFStack_34);
            ExceptionList = pvStack_10;
            return 1;
          }
          iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106ce28);
          if (iVar2 != 0) break;
          iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106ce2c);
          if (iVar2 == 0) {
            iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106cdbc);
            if (iVar2 == 0) {
              iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106cd6c);
              if (iVar2 == 0) {
                iVar2 = FString::operator==(aFStack_34,(ushort *)&DAT_1106cd28);
                if (iVar2 == 0) {
                  pFStack_90 = (FString *)0x11015467;
                  appMsgf(0,(ushort *)u_Unrecognized_Operator_1106ccf4);
                  goto LAB_1101546a;
                }
                if (3 < param_3) {
                  *param_2 = fStack_18;
                  pFStack_90 = (FString *)0x110153fd;
                  pFVar1 = (FString *)FString::operator+(aFStack_34,aFStack_64);
                  iStack_8._0_1_ = 0x14;
                  FString::operator=(pFVar4,pFVar1);
                  pFVar4 = aFStack_64;
                  goto LAB_11015180;
                }
                pFStack_90 = pFVar4;
                iVar2 = (**(code **)(*(int *)this + 0xec))();
                if (iVar2 == 0) goto LAB_1101546a;
                fStack_18 = fStack_1c * fStack_18;
                pFStack_90 = (FString *)0x11015441;
                pFVar1 = (FString *)GrabChar(this,aFStack_70);
                iStack_8._0_1_ = 0x15;
                pFStack_90 = (FString *)0x1101544f;
                FString::operator=(aFStack_34,pFVar1);
                pFVar1 = aFStack_70;
              }
              else {
                if (2 < param_3) {
                  *param_2 = fStack_18;
                  pFStack_90 = (FString *)0x1101533d;
                  pFVar1 = (FString *)FString::operator+(aFStack_34,aFStack_58);
                  iStack_8._0_1_ = 0x12;
                  FString::operator=(pFVar4,pFVar1);
                  pFVar4 = aFStack_58;
                  goto LAB_11015180;
                }
                pFStack_90 = pFVar4;
                uVar5 = (**(code **)(*(int *)this + 0xec))();
                if ((int)uVar5 == 0) goto LAB_1101546a;
                if (fStack_1c == 0.0) goto LAB_1101506b;
                uVar6 = FUN_1103b180(extraout_ECX,(int)((ulonglong)uVar5 >> 0x20));
                uVar7 = FUN_1103b180(extraout_ECX_00,(int)(uVar6 >> 0x20));
                fStack_18 = (float)(int)((longlong)
                                         ((ulonglong)(uint)((int)uVar7 >> 0x1f) << 0x20 |
                                         uVar7 & 0xffffffff) % (longlong)(int)uVar6);
                pFStack_90 = (FString *)0x110153b1;
                pFVar1 = (FString *)GrabChar(this,aFStack_64);
                iStack_8._0_1_ = 0x13;
                pFStack_90 = (FString *)0x110153bf;
                FString::operator=(aFStack_34,pFVar1);
                pFVar1 = aFStack_64;
              }
            }
            else {
              if (2 < param_3) {
                *param_2 = fStack_18;
                pFStack_90 = (FString *)0x11015293;
                pFVar1 = (FString *)FString::operator+(aFStack_34,aFStack_4c);
                iStack_8._0_1_ = 0x10;
                FString::operator=(pFVar4,pFVar1);
                pFVar4 = aFStack_4c;
                goto LAB_11015180;
              }
              pFStack_90 = pFVar4;
              iVar2 = (**(code **)(*(int *)this + 0xec))();
              if (iVar2 == 0) goto LAB_1101546a;
              if (fStack_1c == 0.0) goto LAB_1101506b;
              fStack_18 = fStack_18 / fStack_1c;
              pFStack_90 = (FString *)0x110152f2;
              pFVar1 = (FString *)GrabChar(this,aFStack_58);
              iStack_8._0_1_ = 0x11;
              pFStack_90 = (FString *)0x11015300;
              FString::operator=(aFStack_34,pFVar1);
              pFVar1 = aFStack_58;
            }
          }
          else {
            if (1 < param_3) {
              *param_2 = fStack_18;
              pFStack_90 = (FString *)0x1101520f;
              pFVar1 = (FString *)FString::operator+(aFStack_34,aFStack_40);
              iStack_8._0_1_ = 0xe;
              goto LAB_11015171;
            }
            pFStack_90 = pFVar4;
            iVar2 = (**(code **)(*(int *)this + 0xec))();
            if (iVar2 == 0) goto LAB_1101546a;
            fStack_18 = fStack_18 - fStack_1c;
            pFStack_90 = (FString *)0x11015248;
            pFVar1 = (FString *)GrabChar(this,aFStack_4c);
            iStack_8._0_1_ = 0xf;
            pFStack_90 = (FString *)0x11015256;
            FString::operator=(aFStack_34,pFVar1);
            pFVar1 = aFStack_4c;
          }
        }
        if (1 < param_3) break;
        pFStack_90 = pFVar4;
        iVar2 = (**(code **)(*(int *)this + 0xec))();
        if (iVar2 == 0) {
LAB_1101546a:
          *param_2 = fStack_18;
LAB_11015186:
          iStack_8 = (uint)iStack_8._1_3_ << 8;
          FString::~FString(aFStack_34);
          ExceptionList = pvStack_10;
          return 1;
        }
        fStack_18 = fStack_1c + fStack_18;
        pFStack_90 = (FString *)0x110151d9;
        pFVar1 = (FString *)GrabChar(this,aFStack_40);
        iStack_8._0_1_ = 0xd;
      }
      *param_2 = fStack_18;
      pFStack_90 = (FString *)0x1101516d;
      pFVar1 = (FString *)FString::operator+(aFStack_34,aFStack_40);
      iStack_8._0_1_ = 0xc;
LAB_11015171:
      FString::operator=(pFVar4,pFVar1);
      pFVar4 = aFStack_40;
LAB_11015180:
      iStack_8._0_1_ = 1;
      FString::~FString(pFVar4);
      goto LAB_11015186;
    }
  }
LAB_11015076:
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FString::~FString(aFStack_34);
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 1100182a FPropertyItem::SnoopChar

/* public: virtual void __thiscall FPropertyItem::SnoopChar(class WWindow *,int) */

void __thiscall FPropertyItem::SnoopChar(FPropertyItem *this,WWindow *param_1,int param_2)

{
  code *pcVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x182a  973  ?SnoopChar@FPropertyItem@@UAEXPAVWWindow@@H@Z */
  puStack_c = &LAB_11060cc0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (param_2 == 0xd) {
    if (*(int *)(this + 0x58) != 0) {
      ExceptionList = &pvStack_10;
      FTreeItem::SnoopKeyDown((FTreeItem *)this,param_1,9);
      ExceptionList = pvStack_10;
      return;
    }
    pcVar1 = *(code **)(*(int *)(this + -4) + 0x98);
  }
  else {
    ExceptionList = &pvStack_10;
    if (param_2 != 0x1b) goto LAB_11017d45;
    pcVar1 = *(code **)(*(int *)(this + -4) + 0xa0);
  }
  ExceptionList = &pvStack_10;
  (*pcVar1)();
LAB_11017d45:
  FTreeItem::SnoopChar((FTreeItem *)this,param_1,param_2);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100182f WDragInterceptor::GetWindowClassName

/* public: virtual void __thiscall WDragInterceptor::GetWindowClassName(unsigned short *) */

void __thiscall WDragInterceptor::GetWindowClassName(WDragInterceptor *this,ushort *param_1)

{
                    /* 0x182f  611  ?GetWindowClassName@WDragInterceptor@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WDragInterceptor_1106d0c4);
  return;
}


// ==== 11001834 WPropertySheet::~WPropertySheet

/* public: virtual __thiscall WPropertySheet::~WPropertySheet(void) */

void __thiscall WPropertySheet::~WPropertySheet(WPropertySheet *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x1834  220  ??1WPropertySheet@@UAE@XZ */
  puStack_8 = &LAB_11062723;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 1;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  thunk_FUN_1102e870((FArray *)(this + 0x44));
  uStack_4 = 0xffffffff;
  WControl::~WControl((WControl *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11001839 WCheckListBox::OnDrawItem

/* public: virtual void __thiscall WCheckListBox::OnDrawItem(struct tagDRAWITEMSTRUCT *) */

void __thiscall WCheckListBox::OnDrawItem(WCheckListBox *this,tagDRAWITEMSTRUCT *param_1)

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
  FString aFStack_34 [20];
  COLORREF CStack_20;
  COLORREF CStack_1c;
  WCheckListBox *pWStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1839  728  ?OnDrawItem@WCheckListBox@@UAEXPAUtagDRAWITEMSTRUCT@@@Z */
  puStack_c = &LAB_1105ff39;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc0;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  pWStack_18 = this;
  puVar1 = &stack0xffffffc0;
  if ((-1 < *(int *)(param_1 + 8)) &&
     (ExceptionList = &pvStack_10, puVar1 = &stack0xffffffc0, ((byte)param_1[0xc] & 3) != 0)) {
    ExceptionList = &pvStack_10;
    BVar2 = IsWindowEnabled(*(HWND *)(this + 4));
    if (BVar2 != 0) {
      color = GetSysColor(8);
    }
    else {
      color = 0x808080;
    }
    CStack_1c = SetTextColor(*(HDC *)(param_1 + 0x18),color);
    DVar3 = GetSysColor(5);
    CStack_20 = SetBkColor(*(HDC *)(param_1 + 0x18),DVar3);
    if ((BVar2 != 0) && (((byte)param_1[0x10] & 1) != 0)) {
      DVar3 = GetSysColor(0xe);
      SetTextColor(*(HDC *)(param_1 + 0x18),DVar3);
      DVar3 = GetSysColor(0xd);
      SetBkColor(*(HDC *)(param_1 + 0x18),DVar3);
    }
    WListBox::GetString((WListBox *)pWStack_18,(int)aFStack_34);
    iStack_8._0_1_ = 1;
    lprect = (RECT *)(param_1 + 0x1c);
    lpDx = (INT *)0x0;
    c = FString::Len(aFStack_34);
    pcVar7 = (char *)0x0;
    puVar4 = FString::operator*(aFStack_34);
    pcVar7 = appToAnsi(puVar4,pcVar7);
    ExtTextOutA(*(HDC *)(param_1 + 0x18),lprect->left + 0x12,*(int *)(param_1 + 0x20) + 2,2,lprect,
                pcVar7,c,lpDx);
    SetTextColor(*(HDC *)(param_1 + 0x18),CStack_1c);
    SetBkColor(*(HDC *)(param_1 + 0x18),CStack_20);
    hdc = CreateCompatibleDC(*(HDC *)(param_1 + 0x18));
    pvVar5 = WListBox::GetItemData((WListBox *)pWStack_18,*(int *)(param_1 + 8));
    if (pvVar5 == (void *)0x0) {
      pvVar6 = *(HGDIOBJ *)(pWStack_18 + 0x8c);
    }
    else {
      pvVar6 = *(HGDIOBJ *)(pWStack_18 + 0x90);
    }
    pvVar6 = SelectObject(hdc,pvVar6);
    BitBlt(*(HDC *)(param_1 + 0x18),lprect->left + 2,*(int *)(param_1 + 0x20) + 3,0xd,0xd,hdc,0,0,
           0xcc0020);
    SelectObject(hdc,pvVar6);
    DeleteDC(hdc);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    FString::~FString(aFStack_34);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  if (((byte)param_1[0xc] & 4) != 0) {
    DrawFocusRect(*(HDC *)(param_1 + 0x18),(RECT *)(param_1 + 0x1c));
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001843 WListBox::Empty

/* public: void __thiscall WListBox::Empty(void) */

void __thiscall WListBox::Empty(WListBox *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1843  436  ?Empty@WListBox@@QAEXXZ */
  puStack_c = &LAB_1105fe30;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0x184,0,0);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0x184,0,0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001848 FWaitCursor::operator=

/* public: class FWaitCursor & __thiscall FWaitCursor::operator=(class FWaitCursor const &) */

FWaitCursor * __thiscall FWaitCursor::operator=(FWaitCursor *this,FWaitCursor *param_1)

{
                    /* 0x1848  256  ??4FWaitCursor@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  return this;
}


// ==== 1100184d WButton::IsChecked

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: int __thiscall WButton::IsChecked(void) */

int __thiscall WButton::IsChecked(WButton *this)

{
  HWND hWnd;
  LRESULT LVar1;
  int iVar2;
  char *pcVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x184d  663  ?IsChecked@WButton@@QAEHXZ */
  puStack_c = &LAB_1105fa40;
  pvStack_10 = ExceptionList;
  pcVar3 = (char *)0x0;
  uStack_8 = 0;
  if (*(int *)(this + 0x90) != 0) {
    return *(int *)(this + 0x8c);
  }
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &pvStack_10;
    LVar1 = SendMessageW(*(HWND *)(this + 4),0xf0,0,0);
    ExceptionList = pvStack_10;
    return (uint)(LVar1 == 1);
  }
  ExceptionList = &pvStack_10;
  iVar2 = winGetSizeANSI((ushort *)0x0);
  if (iVar2 != 0) {
    winGetSizeANSI((ushort *)0x0);
    pcVar3 = &stack0xffffffd8;
  }
  hWnd = *(HWND *)(this + 4);
  iVar2 = winGetSizeANSI((ushort *)0x0);
  pcVar3 = winToANSI(pcVar3,(ushort *)0x0,iVar2);
  LVar1 = SendMessageA(hWnd,0xf0,0,(LPARAM)pcVar3);
  ExceptionList = pvStack_10;
  return (uint)(LVar1 == 1);
}


// ==== 11001857 WControl::~WControl

/* public: virtual __thiscall WControl::~WControl(void) */

void __thiscall WControl::~WControl(WControl *this)

{
  WControl *pWStack_14;
  WControl *pWStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1857  200  ??1WControl@@UAE@XZ */
  puStack_8 = &LAB_11062498;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  pWStack_10 = this;
  if (*(int *)(this + 0x14) != 0) {
    pWStack_14 = this;
    thunk_FUN_1102e380((void *)(*(int *)(this + 0x14) + 0x20),(int *)&pWStack_14);
  }
  uStack_4 = 0xffffffff;
  WWindow::~WWindow((WWindow *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1100185c WTabControl::WTabControl

/* public: __thiscall WTabControl::WTabControl(class WTabControl const &) */

WTabControl * __thiscall WTabControl::WTabControl(WTabControl *this,WTabControl *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x185c  144  ??0WTabControl@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062638;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,(WControl *)param_1);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001861 FNewObjectItem::GetCaption

/* public: virtual class FString __thiscall FNewObjectItem::GetCaption(void)const  */

FString * __thiscall FNewObjectItem::GetCaption(FNewObjectItem *this)

{
  FString *in_stack_00000004;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1861  481  ?GetCaption@FNewObjectItem@@UBE?AVFString@@XZ */
  puStack_c = &LAB_1106062a;
  pvStack_10 = ExceptionList;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  FString::FString(in_stack_00000004,(ushort *)&DAT_11068ff8);
  ExceptionList = pvStack_10;
  return in_stack_00000004;
}


// ==== 11001866 WControl::CallDefaultProc

/* public: virtual int __thiscall WControl::CallDefaultProc(unsigned int,unsigned int,long) */

int __thiscall WControl::CallDefaultProc(WControl *this,uint param_1,uint param_2,long param_3)

{
  BOOL BVar1;
  LRESULT LVar2;
  
                    /* 0x1866  406  ?CallDefaultProc@WControl@@UAEHIIJ@Z */
  BVar1 = IsWindow(*(HWND *)(this + 4));
  if (BVar1 == 0) {
    return 1;
  }
  if (*(int *)GUnicodeOS_exref != 0) {
    LVar2 = CallWindowProcW(*(WNDPROC *)(this + 0x3c),*(HWND *)(this + 4),param_1,param_2,param_3);
    return LVar2;
  }
  LVar2 = CallWindowProcA(*(WNDPROC *)(this + 0x3c),*(HWND *)(this + 4),param_1,param_2,param_3);
  return LVar2;
}


// ==== 1100186b WListView::~WListView

/* public: virtual __thiscall WListView::~WListView(void) */

void __thiscall WListView::~WListView(WListView *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x186b  212  ??1WListView@@UAE@XZ */
  puStack_8 = &LAB_110636b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WControl::~WControl((WControl *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11001870 WWindow::MyDrawEdge

/* public: virtual void __thiscall WWindow::MyDrawEdge(struct HDC__ *,struct tagRECT *,int) */

void __thiscall WWindow::MyDrawEdge(WWindow *this,HDC__ *param_1,tagRECT *param_2,int param_3)

{
  int x;
  int y;
  HPEN ho;
  HPEN ho_00;
  HDC hdc;
  HGDIOBJ pvVar1;
  HPEN pHVar2;
  int y_00;
  int x_00;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1870  677  ?MyDrawEdge@WWindow@@UAEXPAUHDC__@@PAUtagRECT@@H@Z */
  puStack_c = &LAB_11061a60;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  ho = CreatePen(0,1,0x9f9f9f);
  ho_00 = CreatePen(0,1,0x6a6a6a);
  hdc = GetDC(*(HWND *)(this + 4));
  x = param_2->left;
  y = param_2->top;
  x_00 = param_2->right + -1;
  y_00 = param_2->bottom + -1;
  pHVar2 = ho;
  if (param_3 == 0) {
    pHVar2 = ho_00;
  }
  pvVar1 = SelectObject(hdc,pHVar2);
  MoveToEx(hdc,x,y,(LPPOINT)0x0);
  LineTo(hdc,x_00,y);
  MoveToEx(hdc,x,y,(LPPOINT)0x0);
  LineTo(hdc,x,y_00);
  SelectObject(hdc,pvVar1);
  pHVar2 = ho_00;
  if (param_3 == 0) {
    pHVar2 = ho;
  }
  pvVar1 = SelectObject(hdc,pHVar2);
  MoveToEx(hdc,x_00,y_00,(LPPOINT)0x0);
  LineTo(hdc,x_00,y);
  MoveToEx(hdc,x_00,y_00,(LPPOINT)0x0);
  LineTo(hdc,x,y_00);
  SelectObject(hdc,pvVar1);
  DeleteObject(ho);
  DeleteObject(ho_00);
  ReleaseDC(*(HWND *)(this + 4),hdc);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001875 FPropertyItemBase::~FPropertyItemBase

/* public: virtual __thiscall FPropertyItemBase::~FPropertyItemBase(void) */

void __thiscall FPropertyItemBase::~FPropertyItemBase(FPropertyItemBase *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1875  186  ??1FPropertyItemBase@@UAE@XZ */
  puStack_8 = &LAB_110616cc;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  FString::~FString((FString *)(this + 0x3c));
  uStack_4 = 0xffffffff;
  FTreeItem::~FTreeItem((FTreeItem *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1100187f FCategoryItem::Collapse

/* public: virtual void __thiscall FCategoryItem::Collapse(void) */

void __thiscall FCategoryItem::Collapse(FCategoryItem *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x187f  418  ?Collapse@FCategoryItem@@UAEXXZ */
  puStack_c = &LAB_11061200;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FTreeItem::Collapse((FTreeItem *)this);
  FTreeItem::EmptyChildren((FTreeItem *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001884 FObjectConfigItem::FObjectConfigItem

/* public: __thiscall FObjectConfigItem::FObjectConfigItem(class WPropertiesBase *,class FTreeItem
   *,unsigned short const *,unsigned short const *,int,class FName) */

FObjectConfigItem * __thiscall
FObjectConfigItem::FObjectConfigItem
          (FObjectConfigItem *this,WPropertiesBase *param_1,FTreeItem *param_2,ushort *param_3,
          ushort *param_4,undefined4 param_5,undefined4 param_7)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1884  25
                       ??0FObjectConfigItem@@QAE@PAVWPropertiesBase@@PAVFTreeItem@@PBG2HVFName@@@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11061754;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FPropertyItemBase::FPropertyItemBase((FPropertyItemBase *)this,param_1,param_2,0x4000,param_3);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  FString::FString((FString *)(this + 0x50),param_4);
  *(undefined4 *)(this + 0x5c) = param_7;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = param_5;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001889 thunk_FUN_1100ffc0 thunk -> 1100ffc0

// ==== 1100188e WGroupBox::WGroupBox

/* public: __thiscall WGroupBox::WGroupBox(class WWindow *,int,long (__stdcall*)(struct HWND__
   *,unsigned int,unsigned int,long)) */

WGroupBox * __thiscall
WGroupBox::WGroupBox
          (WGroupBox *this,WWindow *param_1,int param_2,
          _func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x188e  94  ??0WGroupBox@@QAE@PAVWWindow@@HP6GJPAUHWND__@@IIJ@Z@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110626d8;
  pvStack_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = SuperProc;
  }
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,param_1,param_2,param_3);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001893 WWindow::OnRightButtonDoubleClick

/* public: virtual void __thiscall WWindow::OnRightButtonDoubleClick(void) */

void __thiscall WWindow::OnRightButtonDoubleClick(WWindow *this)

{
                    /* 0x1893  813  ?OnRightButtonDoubleClick@WWindow@@UAEXXZ */
  return;
}


// ==== 11001898 WObjectProperties::~WObjectProperties

/* public: virtual __thiscall WObjectProperties::~WObjectProperties(void) */

void __thiscall WObjectProperties::~WObjectProperties(WObjectProperties *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x1898  214  ??1WObjectProperties@@UAE@XZ */
  puStack_8 = &LAB_11063c19;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable_for_WWindow_;
  *(undefined ***)(this + 0x3c) = vftable_for_FControlSnoop_;
  iStack_4 = 1;
  WWindow::MaybeDestroy((WWindow *)this);
  iStack_4._1_3_ = (uint3)((uint)iStack_4 >> 8);
  iStack_4._0_1_ = 2;
  thunk_FUN_1101c4a0((FArray *)(this + 0x154));
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FPropertyItemBase::~FPropertyItemBase((FPropertyItemBase *)(this + 0xfc));
  iStack_4 = 0xffffffff;
  WProperties::~WProperties((WProperties *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1100189d FHeaderItem::FromHSV

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class FVector __thiscall FHeaderItem::FromHSV(unsigned char,unsigned char,unsigned char)
    */

void __thiscall FHeaderItem::FromHSV(FHeaderItem *this,uchar param_1,uchar param_2,uchar param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  double dVar6;
  undefined3 in_stack_00000005;
  byte in_stack_00000010;
  float fStack_c;
  float fStack_8;
  
                    /* 0x189d  465  ?FromHSV@FHeaderItem@@QAE?AVFVector@@EEE@Z */
  fVar1 = ((float)in_stack_00000010 * (float)_DAT_1106d838) / (float)_DAT_1106bea8;
  dVar6 = appSqrt((double)fVar1);
  fVar1 = (float)(((float10)_DAT_1106d818 / ((float10)dVar6 + (float10)_DAT_1106d828)) *
                 (float10)fVar1);
  fVar3 = 0.0;
  fVar2 = fVar3;
  if ((0.0 <= fVar1) && (fVar2 = fVar1, 1.0 <= fVar1)) {
    fVar2 = 1.0;
  }
  if (param_2 < 0x56) {
    fStack_c = (float)(int)(0x55 - (uint)param_2) / (float)_DAT_1106d808;
    fStack_8 = (float)param_2 / (float)_DAT_1106d808;
  }
  else {
    uVar5 = (uint)param_2;
    if (param_2 < 0xab) {
      fStack_c = 0.0;
      fStack_8 = (float)(int)(0xaa - uVar5) / (float)_DAT_1106d808;
      fVar3 = (float)(int)(uVar5 - 0x55) / (float)_DAT_1106d808;
    }
    else {
      fStack_c = (float)(int)(uVar5 - 0xaa) / (float)_DAT_1106d808;
      fStack_8 = 0.0;
      fVar3 = (float)(int)(0xff - uVar5) / (float)_DAT_1106d7f8;
    }
  }
  fVar4 = (float)_DAT_1106bea8;
  fVar1 = (float)param_3 / fVar4;
  *_param_1 = (fVar1 * (1.0 - fStack_c) + fStack_c) * fVar2 * fVar4;
  _param_1[1] = (fStack_8 + (1.0 - fStack_8) * fVar1) * fVar2 * fVar4;
  _param_1[2] = fVar4 * (fVar3 + fVar1 * (1.0 - fVar3)) * fVar2;
  return;
}


// ==== 110018a2 thunk_FUN_11014140 thunk -> 11014140

// ==== 110018ac thunk_FUN_1100ff90 thunk -> 1100ff90

// ==== 110018b1 WToolTip::WToolTip

/* public: __thiscall WToolTip::WToolTip(void) */

WToolTip * __thiscall WToolTip::WToolTip(WToolTip *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x18b1  159  ??0WToolTip@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062998;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110018b6 thunk_FUN_1102ea80 thunk -> 1102ea80

// ==== 110018bb WPropertySheet::OnSize

/* public: virtual void __thiscall WPropertySheet::OnSize(unsigned long,int,int) */

void __thiscall WPropertySheet::OnSize(WPropertySheet *this,ulong param_1,int param_2,int param_3)

{
  tagRECT tStack_2c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x18bb  835  ?OnSize@WPropertySheet@@UAEXKHH@Z */
  puStack_c = &LAB_1105ffb0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::OnSize((WWindow *)this,param_1,param_2,param_3);
  GetClientRect(*(HWND *)(this + 4),&tStack_2c);
  MoveWindow(*(HWND *)(*(int *)(this + 0x40) + 4),4,4,tStack_2c.right + -8,tStack_2c.bottom + -8,1);
  RefreshPages(this);
  InvalidateRect(*(HWND *)(this + 4),(RECT *)0x0,1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110018c0 WLabel::WLabel

/* public: __thiscall WLabel::WLabel(class WLabel const &) */

WLabel * __thiscall WLabel::WLabel(WLabel *this,WLabel *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x18c0  99  ??0WLabel@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062678;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,(WControl *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110018c5 FTreeItem::FTreeItem

/* public: __thiscall FTreeItem::FTreeItem(void) */

FTreeItem * __thiscall FTreeItem::FTreeItem(FTreeItem *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x18c5  36  ??0FTreeItem@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063888;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)(this + 4) = FControlSnoop::vftable;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  FArray::FArray((FArray *)(this + 0x24));
  uStack_4 = 1;
  FArray::FArray((FArray *)(this + 0x30));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110018ca FTreeItem::AcceptFlags

/* public: virtual int __thiscall FTreeItem::AcceptFlags(unsigned long) */

int __thiscall FTreeItem::AcceptFlags(FTreeItem *this,ulong param_1)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x18ca  394  ?AcceptFlags@FTreeItem@@UAEHK@Z */
  puStack_c = &LAB_110603e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0xc) != 0) {
    ExceptionList = &pvStack_10;
    iVar1 = (**(code **)(**(int **)(this + 0xc) + 0x78))(param_1);
    ExceptionList = pvStack_10;
    return iVar1;
  }
  return 0;
}


// ==== 110018cf WWizardDialog::GetWindowClassName

/* public: virtual void __thiscall WWizardDialog::GetWindowClassName(unsigned short *) */

void __thiscall WWizardDialog::GetWindowClassName(WWizardDialog *this,ushort *param_1)

{
                    /* 0x18cf  641  ?GetWindowClassName@WWizardDialog@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WWizardDialog_1106fdf0);
  return;
}


// ==== 110018d4 thunk_FUN_110325b0 thunk -> 110325b0

// ==== 110018de WTrackBar::WTrackBar

/* public: __thiscall WTrackBar::WTrackBar(class WTrackBar const &) */

WTrackBar * __thiscall WTrackBar::WTrackBar(WTrackBar *this,WTrackBar *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x18de  160  ??0WTrackBar@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063498;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,(WControl *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined ***)(this + 0x44) = FDelegate::vftable;
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined ***)(this + 0x50) = FDelegate::vftable;
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110018e3 WItemBox::OnMeasureItem

/* public: virtual void __thiscall WItemBox::OnMeasureItem(struct tagMEASUREITEMSTRUCT *) */

void __thiscall WItemBox::OnMeasureItem(WItemBox *this,tagMEASUREITEMSTRUCT *param_1)

{
  undefined4 uVar1;
  
                    /* 0x18e3  782  ?OnMeasureItem@WItemBox@@UAEXPAUtagMEASUREITEMSTRUCT@@@Z */
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 8))();
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  return;
}


// ==== 110018e8 WTerminal::Serialize

/* public: virtual void __thiscall WTerminal::Serialize(unsigned short const *,enum EName) */

void __thiscall WTerminal::Serialize(WTerminal *this,ushort *param_1,EName param_2)

{
  WWindow *this_00;
  int iVar1;
  FName *this_01;
  ushort *puVar2;
  ushort uStack_820;
  undefined1 auStack_81e [2044];
  undefined2 uStack_22;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x18e8  915  ?Serialize@WTerminal@@UAEXPBGW4EName@@@Z */
  puStack_c = &LAB_11062250;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffff7d4;
  uStack_8 = 0;
  if (param_2 == 0x314) {
    ExceptionList = &pvStack_10;
    puStack_14 = &stack0xfffff7d4;
    (**(code **)(*(int *)(this + -0x3c) + 0x2c))(param_1);
    ExceptionList = pvStack_10;
    return;
  }
  if (*(int *)(this + 0x26c) != 0) {
    this_00 = (WWindow *)(this + 4);
    ExceptionList = &pvStack_10;
    WWindow::SetRedraw(this_00,0);
    iVar1 = WEdit::GetLineCount((WEdit *)this_00);
    if (*(int *)(this + 100) < iVar1) {
      iVar1 = WEdit::GetLineIndex((WEdit *)this_00,
                                  iVar1 - (iVar1 - *(int *)(this + 0x68) &
                                          (iVar1 - *(int *)(this + 0x68) < 0) - 1));
      WEdit::SetSelection((WEdit *)this_00,0,iVar1);
      WEdit::SetSelectedText((WEdit *)this_00,(ushort *)&DAT_11068ff8);
      iVar1 = (**(code **)(*(int *)this_00 + 0x30))();
      WEdit::SetSelection((WEdit *)this_00,iVar1,iVar1);
      WEdit::ScrollCaret((WEdit *)this_00);
    }
    uStack_820 = 0;
    _memset(auStack_81e,0,0x7fe);
    iVar1 = 0x400;
    this_01 = (FName *)FName::FName((FName *)&param_2,param_2);
    puVar2 = FName::operator*(this_01);
    appStrncat(&uStack_820,puVar2,iVar1);
    appStrncat(&uStack_820,(ushort *)&DAT_11070e8c,0x400);
    appStrncat(&uStack_820,param_1,0x400);
    appStrncat(&uStack_820,(ushort *)&DAT_1106b23c,0x400);
    appStrncat(&uStack_820,(ushort *)(this + 0x6c),0x400);
    uStack_22 = 0;
    SelectTyping(this + -0x3c);
    WWindow::SetRedraw(this_00,1);
    WEdit::SetSelectedText((WEdit *)this_00,&uStack_820);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110018ed WUrlButton::WUrlButton

/* public: __thiscall WUrlButton::WUrlButton(void) */

WUrlButton * __thiscall WUrlButton::WUrlButton(WUrlButton *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x18ed  170  ??0WUrlButton@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062d8f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WButton::WButton((WButton *)this);
  *(undefined ***)this = WCoolButton::vftable;
  uStack_4 = 1;
  *(undefined ***)this = vftable;
  FString::FString((FString *)(this + 0x9c));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110018f2 WPropertySheet::AddPage

/* public: void __thiscall WPropertySheet::AddPage(class WPropertyPage *) */

void __thiscall WPropertySheet::AddPage(WPropertySheet *this,WPropertyPage *param_1)

{
  WPropertyPage *this_00;
  WPropertyPage *pWVar1;
  WPropertyPage aWStack_38 [8];
  undefined4 uStack_30;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x18f2  398  ?AddPage@WPropertySheet@@QAEXPAVWPropertyPage@@@Z */
  puStack_c = &LAB_1105ffd9;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  uStack_30 = 0x1100e386;
  ExceptionList = &pvStack_10;
  thunk_FUN_1100dea0(this + 0x44,&param_1);
  this_00 = param_1;
  WPropertyPage::GetID(param_1);
  param_1 = aWStack_38;
  pWVar1 = aWStack_38;
  WPropertyPage::GetCaption(this_00);
  uStack_8 = uStack_8 & 0xffffff00;
  WTabControl::AddTab(*(WTabControl **)(this + 0x40),pWVar1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110018f7 FNewObjectItem::FNewObjectItem

/* public: __thiscall FNewObjectItem::FNewObjectItem(class FNewObjectItem const &) */

FNewObjectItem * __thiscall
FNewObjectItem::FNewObjectItem(FNewObjectItem *this,FNewObjectItem *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x18f7  21  ??0FNewObjectItem@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110639e4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FHeaderItem::FHeaderItem((FHeaderItem *)this,(FHeaderItem *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  FString::FString((FString *)(this + 0x48),(FString *)(param_1 + 0x48));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110018fc WClassProperties::WClassProperties

/* public: __thiscall WClassProperties::WClassProperties(class WClassProperties const &) */

WClassProperties * __thiscall
WClassProperties::WClassProperties(WClassProperties *this,WClassProperties *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x18fc  58  ??0WClassProperties@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063e36;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WProperties::WProperties((WProperties *)this,(WProperties *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_WWindow_;
  *(undefined ***)(this + 0x3c) = vftable_for_FControlSnoop_;
  FClassItem::FClassItem((FClassItem *)(this + 0xfc),(FClassItem *)(param_1 + 0xfc));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001906 WPropertyPage::GetWindowClassName

/* public: virtual void __thiscall WPropertyPage::GetWindowClassName(unsigned short *) */

void __thiscall WPropertyPage::GetWindowClassName(WPropertyPage *this,ushort *param_1)

{
                    /* 0x1906  624  ?GetWindowClassName@WPropertyPage@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WPropertyPage_1106fa64);
  return;
}


// ==== 1100190b WCheckListBox::WCheckListBox

/* public: __thiscall WCheckListBox::WCheckListBox(void) */

WCheckListBox * __thiscall WCheckListBox::WCheckListBox(WCheckListBox *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x190b  57  ??0WCheckListBox@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110635d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WListBox::WListBox((WListBox *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001910 FWindowsBitmap::FWindowsBitmap

/* public: __thiscall FWindowsBitmap::FWindowsBitmap(int) */

void __thiscall FWindowsBitmap::FWindowsBitmap(FWindowsBitmap *this,int param_1)

{
                    /* 0x1910  45  ??0FWindowsBitmap@@QAE@H@Z */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(int *)(this + 8) = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


// ==== 11001915 thunk_FUN_1101ef50 thunk -> 1101ef50

// ==== 11001924 thunk_FUN_11013950 thunk -> 11013950

// ==== 11001929 FPropertyItem::GetBase

/* public: virtual unsigned char * __thiscall FPropertyItem::GetBase(unsigned char *) */

uchar * __thiscall FPropertyItem::GetBase(FPropertyItem *this,uchar *param_1)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1929  475  ?GetBase@FPropertyItem@@UAEPAEPAE@Z */
  puStack_c = &LAB_11060480;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = (**(code **)(**(int **)(this + 0xc) + 100))(param_1);
  ExceptionList = pvStack_10;
  return (uchar *)(iVar1 + *(int *)(this + 0x40));
}


// ==== 1100192e WWindow::OnSetCursor

/* public: virtual int __thiscall WWindow::OnSetCursor(void) */

int __thiscall WWindow::OnSetCursor(WWindow *this)

{
                    /* 0x192e  827  ?OnSetCursor@WWindow@@UAEHXZ */
  return 0;
}


// ==== 11001933 WWindow::OnLeftButtonDown

/* public: virtual void __thiscall WWindow::OnLeftButtonDown(void) */

void __thiscall WWindow::OnLeftButtonDown(WWindow *this)

{
                    /* 0x1933  773  ?OnLeftButtonDown@WWindow@@UAEXXZ */
  return;
}


// ==== 11001938 thunk_FUN_1102e660 thunk -> 1102e660

// ==== 1100193d WSplitterContainer::OnPaint

/* public: virtual void __thiscall WSplitterContainer::OnPaint(void) */

void __thiscall WSplitterContainer::OnPaint(WSplitterContainer *this)

{
  HDC hDC;
  tagPAINTSTRUCT tStack_6c;
  RECT RStack_2c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x193d  801  ?OnPaint@WSplitterContainer@@UAEXXZ */
  puStack_c = &LAB_11062010;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff88;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  hDC = BeginPaint(*(HWND *)(this + 4),&tStack_6c);
  WWindow::GetClientRect((WWindow *)this);
  FillRect(hDC,&RStack_2c,hBrushBlack);
  EndPaint(*(HWND *)(this + 4),&tStack_6c);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001947 WSplitter::OpenWindow

/* public: void __thiscall WSplitter::OpenWindow(int) */

void __thiscall WSplitter::OpenWindow(WSplitter *this,int param_1)

{
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1947  872  ?OpenWindow@WSplitter@@QAEXH@Z */
  puStack_c = &LAB_11062310;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)0x0,0x50000000,0,0,0,0,
             *(HWND__ **)(*(int *)(this + 0x14) + 4),(HMENU__ *)0x0,DAT_1109c35c);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(*(HWND *)(this + 4),0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(*(HWND *)(this + 4),0x30,(WPARAM)pvVar1,lParam);
  }
  *(int *)(this + 0x3c) = param_1;
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100194c thunk_FUN_1101fcb0 thunk -> 1101fcb0

// ==== 11001951 WThinScrollBar::operator=

/* public: class WThinScrollBar & __thiscall WThinScrollBar::operator=(class WThinScrollBar const &)
    */

WThinScrollBar * __thiscall WThinScrollBar::operator=(WThinScrollBar *this,WThinScrollBar *param_1)

{
                    /* 0x1951  295  ??4WThinScrollBar@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  return this;
}


// ==== 11001956 WObjectProperties::GetPackageName

/* public: virtual unsigned short const * __thiscall WObjectProperties::GetPackageName(void) */

ushort * __thiscall WObjectProperties::GetPackageName(WObjectProperties *this)

{
                    /* 0x1956  543  ?GetPackageName@WObjectProperties@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 1100195b thunk_FUN_11015e70 thunk -> 11015e70

// ==== 11001960 thunk_FUN_11006f00 thunk -> 11006f00

// ==== 11001965 FPropertyItemBase::operator=

/* public: class FPropertyItemBase & __thiscall FPropertyItemBase::operator=(class FPropertyItemBase
   const &) */

FPropertyItemBase * __thiscall
FPropertyItemBase::operator=(FPropertyItemBase *this,FPropertyItemBase *param_1)

{
                    /* 0x1965  252  ??4FPropertyItemBase@@QAEAAV0@ABV0@@Z */
  FTreeItem::operator=((FTreeItem *)this,(FTreeItem *)param_1);
  FString::operator=((FString *)(this + 0x3c),(FString *)(param_1 + 0x3c));
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  return this;
}


// ==== 1100196a thunk_FUN_1101f0a0 thunk -> 1101f0a0

// ==== 1100196f WCheckBox::OnRightButtonDown

/* public: virtual void __thiscall WCheckBox::OnRightButtonDown(void) */

void __thiscall WCheckBox::OnRightButtonDown(WCheckBox *this)

{
  HWND pHVar1;
  uint lParam;
  UINT Msg;
  WPARAM wParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x196f  814  ?OnRightButtonDown@WCheckBox@@UAEXXZ */
  puStack_c = &LAB_1105f700;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  lParam = (uint)*(ushort *)(this + 0xc);
  wParam = 0x801b;
  Msg = 0x111;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    pHVar1 = GetParent(*(HWND *)(this + 4));
    SendMessageA(pHVar1,Msg,wParam,lParam);
  }
  else {
    ExceptionList = &pvStack_10;
    pHVar1 = GetParent(*(HWND *)(this + 4));
    SendMessageW(pHVar1,Msg,wParam,lParam);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001979 FPropertyItemBase::GetCaption

/* public: virtual class FString __thiscall FPropertyItemBase::GetCaption(void)const  */

FString * __thiscall FPropertyItemBase::GetCaption(FPropertyItemBase *this)

{
  FString *in_stack_00000004;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1979  484  ?GetCaption@FPropertyItemBase@@UBE?AVFString@@XZ */
  puStack_c = &LAB_110606fa;
  pvStack_10 = ExceptionList;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  FString::FString(in_stack_00000004,(FString *)(this + 0x3c));
  ExceptionList = pvStack_10;
  return in_stack_00000004;
}


// ==== 1100197e FPropertyItem::OnTrackBarThumbPosition

/* public: void __thiscall FPropertyItem::OnTrackBarThumbPosition(void) */

void __thiscall FPropertyItem::OnTrackBarThumbPosition(FPropertyItem *this)

{
  FString *this_00;
  int iVar1;
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x197e  842  ?OnTrackBarThumbPosition@FPropertyItem@@QAEXXZ */
  puStack_c = &LAB_11060ce9;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  OnTrackBarThumbTrack(this);
  (**(code **)(*(int *)this + 0x9c))();
  if (*(int *)(this + 0x48) != 0) {
    SetFocus(*(HWND *)(*(int *)(this + 0x48) + 4));
    this_00 = (FString *)(**(code **)(**(int **)(this + 0x48) + 0x28))(aFStack_28);
    iStack_8._0_1_ = 1;
    iVar1 = FString::Len(this_00);
    WEdit::SetSelection(*(WEdit **)(this + 0x48),0,iVar1);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    FString::~FString(aFStack_28);
    (**(code **)(*(int *)this + 0x28))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001988 WRichEdit::WRichEdit

/* public: __thiscall WRichEdit::WRichEdit(class WRichEdit const &) */

WRichEdit * __thiscall WRichEdit::WRichEdit(WRichEdit *this,WRichEdit *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1988  130  ??0WRichEdit@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062ef8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,(WControl *)param_1);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100198d WToolTip::WToolTip

/* public: __thiscall WToolTip::WToolTip(class WToolTip const &) */

WToolTip * __thiscall WToolTip::WToolTip(WToolTip *this,WToolTip *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x198d  157  ??0WToolTip@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110629b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,(WControl *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001992 thunk_FUN_1100f510 thunk -> 1100f510

// ==== 11001997 WWindow::DoDestroy

/* public: virtual void __thiscall WWindow::DoDestroy(void) */

void __thiscall WWindow::DoDestroy(WWindow *this)

{
  undefined1 *puVar1;
  WWindow *pWStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1997  429  ?DoDestroy@WWindow@@UAEXXZ */
  puStack_c = &LAB_11062460;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xffffffd4;
  if (*(int *)(this + 0x18) != 0) {
    ExceptionList = &pvStack_10;
    (**(code **)**(undefined4 **)(this + 0x18))(this);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  if (*(HWND *)(this + 4) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(this + 4));
  }
  pWStack_18 = this;
  thunk_FUN_1102e490(&_Windows,(int *)&pWStack_18);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100199c thunk_FUN_1100df00 thunk -> 1100df00

// ==== 110019a1 WProgressBar::SetProgress

/* WARNING: Removing unreachable block (ram,0x1100ba33) */
/* public: void __thiscall WProgressBar::SetProgress(__int64,__int64) */

void __thiscall WProgressBar::SetProgress(WProgressBar *this,__int64 param_1,__int64 param_2)

{
  WPARAM wParam;
  longlong lVar1;
  undefined8 uVar2;
  
                    /* 0x19a1  942  ?SetProgress@WProgressBar@@QAEX_J0@Z */
  if (param_2 < 1) {
    param_2 = 1;
  }
  lVar1 = __allmul((uint)param_1,(int)((ulonglong)param_1 >> 0x20),100,0);
  uVar2 = __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),(uint)param_2,
                   (uint)((ulonglong)param_2 >> 0x20));
  wParam = (WPARAM)uVar2;
  if (wParam != *(WPARAM *)(this + 0x40)) {
    if (*(int *)GUnicodeOS_exref != 0) {
      SendMessageW(*(HWND *)(this + 4),0x402,wParam,0);
      *(WPARAM *)(this + 0x40) = wParam;
      return;
    }
    SendMessageA(*(HWND *)(this + 4),0x402,wParam,0);
  }
  *(WPARAM *)(this + 0x40) = wParam;
  return;
}


// ==== 110019a6 FObjectsItem::FObjectsItem

/* public: __thiscall FObjectsItem::FObjectsItem(void) */

FObjectsItem * __thiscall FObjectsItem::FObjectsItem(FObjectsItem *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x19a6  28  ??0FObjectsItem@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063b7c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FPropertyItemBase::FPropertyItemBase((FPropertyItemBase *)this);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  FArray::FArray((FArray *)(this + 0x58));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110019ab WProperties::WProperties

/* public: __thiscall WProperties::WProperties(class FName,class WWindow *) */

WProperties * __thiscall
WProperties::WProperties(WProperties *this,undefined4 param_2,FArray *param_3)

{
  int iVar1;
  ushort *puVar2;
  FString *pFVar3;
  WProperties *pWVar4;
  undefined4 uVar5;
  FString aFStack_38 [12];
  FString aFStack_2c [16];
  WProperties *pWStack_1c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x19ab  120  ??0WProperties@@QAE@VFName@@PAVWWindow@@@Z */
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_11063ab1;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffbc;
  ExceptionList = &pvStack_10;
  pWStack_1c = this;
  WPropertiesBase::WPropertiesBase((WPropertiesBase *)this,param_2,param_3);
  uStack_8 = 0;
  *(undefined ***)this = vftable_for_WWindow_;
  *(undefined ***)(this + 0x3c) = vftable_for_FControlSnoop_;
  param_3 = (FArray *)(this + 0xd4);
  FArray::FArray(param_3);
  uStack_8._1_3_ = (undefined3)((uint)uStack_8 >> 8);
  *(undefined4 *)(this + 0xf0) = 0;
  pWVar4 = this + 0xf4;
  *(undefined4 *)pWVar4 = 0x80;
  uStack_8._0_1_ = 3;
  FName::FName((FName *)&param_3,0);
  iVar1 = FName::operator!=((FName *)(this + 8),(FName *)&param_3);
  if (iVar1 != 0) {
    puVar2 = FName::operator*((FName *)(this + 8));
    pFVar3 = (FString *)FString::FString(aFStack_38,puVar2);
    uStack_8._0_1_ = 4;
    pFVar3 = (FString *)FString::operator+(pFVar3,(ushort *)aFStack_2c);
    uStack_8._0_1_ = 5;
    iVar1 = **(int **)GConfig_exref;
    uVar5 = 0;
    puVar2 = FString::operator*(pFVar3);
    (**(code **)(iVar1 + 4))(u_WindowPositions_1106dcec,puVar2,pWVar4,uVar5);
    uStack_8._0_1_ = 4;
    FString::~FString(aFStack_2c);
    uStack_8._0_1_ = 3;
    FString::~FString(aFStack_38);
  }
  param_3 = (FArray *)this;
  thunk_FUN_1102aec0(&PropertiesWindows,&param_3);
  *(WProperties **)(this + 0x88) = this;
  *(code **)(this + 0x8c) = OnListDoubleClick;
  *(WProperties **)(this + 0x94) = this;
  *(code **)(this + 0x98) = OnListSelectionChange;
  *(undefined4 *)(this + 0xf8) = 1;
  ExceptionList = pvStack_10;
  return this;
}


// ==== 110019b5 FDelegate::operator()

/* public: virtual void __thiscall FDelegate::operator()(void) */

void __thiscall FDelegate::operator()(FDelegate *this)

{
                    /* 0x19b5  306  ??RFDelegate@@UAEXXZ */
  if (*(int *)(this + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x11006b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 8))();
    return;
  }
  return;
}


// ==== 110019bf FPropertyItem::IsPropertyItem

/* public: virtual bool __thiscall FPropertyItem::IsPropertyItem(void) */

bool __thiscall FPropertyItem::IsPropertyItem(FPropertyItem *this)

{
                    /* 0x19bf  664  ?IsPropertyItem@FPropertyItem@@UAE_NXZ */
  return true;
}


// ==== 110019c9 WTerminalBase::GetWindowClassName

/* public: virtual void __thiscall WTerminalBase::GetWindowClassName(unsigned short *) */

void __thiscall WTerminalBase::GetWindowClassName(WTerminalBase *this,ushort *param_1)

{
                    /* 0x19c9  633  ?GetWindowClassName@WTerminalBase@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WTerminalBase_1106fc18);
  return;
}


// ==== 110019ce WButton::GetWindowClassName

/* public: virtual void __thiscall WButton::GetWindowClassName(unsigned short *) */

void __thiscall WButton::GetWindowClassName(WButton *this,ushort *param_1)

{
                    /* 0x19ce  601  ?GetWindowClassName@WButton@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WButton_1106c800);
  return;
}


// ==== 110019d3 WLog::WndProc

/* public: virtual long __thiscall WLog::WndProc(unsigned int,unsigned int,long) */

long __thiscall WLog::WndProc(WLog *this,uint param_1,uint param_2,long param_3)

{
  HMENU__ *hMenu;
  HMENU hMenu_00;
  long lVar1;
  uint uFlags;
  int nReserved;
  HWND hWnd;
  RECT *prcRect;
  tagPOINT atStack_24 [2];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x19d3  1023  ?WndProc@WLog@@UAEJIIJ@Z */
  puStack_c = &LAB_11061f60;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd0;
  uStack_8 = 0;
  if (param_1 == *(uint *)(this + 0x2ac)) {
    if ((param_3 == 0x204) || (param_3 == 0x201)) {
      ExceptionList = &pvStack_10;
      puStack_14 = &stack0xffffffd0;
      GetCursorPos(atStack_24);
      hMenu = LoadLocalizedMenu(hInstanceWindow,0x75,(ushort *)u_IDMENU_NotifyIcon_11070510,
                                (ushort *)u_Window_1106949c);
      SetForegroundWindow(*(HWND *)(this + 4));
      prcRect = (RECT *)0x0;
      hWnd = *(HWND *)(this + 4);
      nReserved = 0;
      uFlags = -(uint)(param_3 != 0x201) & 2;
      hMenu_00 = GetSubMenu(hMenu,0);
      TrackPopupMenu(hMenu_00,uFlags,atStack_24[0].x,atStack_24[0].y,nReserved,hWnd,prcRect);
      DestroyMenu(hMenu);
      if (*(int *)GUnicodeOS_exref == 0) {
        PostMessageA(*(HWND *)(this + 4),0,0,0);
      }
      else {
        PostMessageW(*(HWND *)(this + 4),0,0,0);
      }
    }
    ExceptionList = pvStack_10;
    return 1;
  }
  ExceptionList = &pvStack_10;
  lVar1 = WWindow::WndProc((WWindow *)this,param_1,param_2,param_3);
  ExceptionList = pvStack_10;
  return lVar1;
}


// ==== 110019dd WWindow::StaticDlgProc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static int __stdcall WWindow::StaticDlgProc(struct HWND__ *,unsigned int,unsigned
   int,long) */

int WWindow::StaticDlgProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x19dd  983  ?StaticDlgProc@WWindow@@SGHPAUHWND__@@IIJ@Z */
  puStack_c = &LAB_11061db0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iVar1 = 0;
  while ((iVar1 < DAT_1109c4fc && (*(HWND__ **)(*(int *)(__Windows + iVar1 * 4) + 4) != param_1))) {
    iVar1 = iVar1 + 1;
  }
  ExceptionList = &pvStack_10;
  if (iVar1 == DAT_1109c4fc) {
    ExceptionList = &pvStack_10;
    if (param_2 == 0x110) {
      ExceptionList = &pvStack_10;
      if (param_4 == 0) {
        ExceptionList = &pvStack_10;
        appFailAssert(s_WindowCreate_1106fef0,s___Window_cpp_1106f624,0x179);
      }
      if (*(int *)(param_4 + 4) != 0) {
        appFailAssert(s__WindowCreate_>hWnd_1106fed8,s___Window_cpp_1106f624,0x17a);
      }
      *(HWND__ **)(param_4 + 4) = param_1;
      for (iVar1 = 0; iVar1 < DAT_1109c4fc; iVar1 = iVar1 + 1) {
        if (*(int *)(__Windows + iVar1 * 4) == param_4) {
          if (iVar1 < DAT_1109c4fc) goto LAB_1102651c;
          break;
        }
      }
      appFailAssert(s_i<_Windows_Num()_1106fec4,s___Window_cpp_1106f624,0x17f);
    }
    if (iVar1 == DAT_1109c4fc) goto LAB_1102653a;
  }
LAB_1102651c:
  if (*(int *)GIsCriticalError_exref == 0) {
    (**(code **)(**(int **)(__Windows + iVar1 * 4) + 0x1c))(param_2,param_3,param_4);
  }
LAB_1102653a:
  Sleep(0);
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 110019e2 WWindow::GetCursorPos

/* public: struct FPoint __thiscall WWindow::GetCursorPos(void) */

void __thiscall WWindow::GetCursorPos(WWindow *this)

{
  LONG *in_stack_00000004;
  tagPOINT tStack_10;
  tagPOINT tStack_8;
  
                    /* 0x19e2  498  ?GetCursorPos@WWindow@@QAE?AUFPoint@@XZ */
  ::GetCursorPos(&tStack_8);
  tStack_10.x = tStack_8.x;
  tStack_10.y = tStack_8.y;
  ::ScreenToClient(*(HWND *)(this + 4),&tStack_10);
  *in_stack_00000004 = tStack_10.x;
  in_stack_00000004[1] = tStack_10.y;
  return;
}


// ==== 110019e7 WCustomLabel::operator=

/* public: class WCustomLabel & __thiscall WCustomLabel::operator=(class WCustomLabel const &) */

WCustomLabel * __thiscall WCustomLabel::operator=(WCustomLabel *this,WCustomLabel *param_1)

{
                    /* 0x19e7  270  ??4WCustomLabel@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return this;
}


// ==== 110019ec FPropertyItem::ComboSelectionEndCancel

/* public: void __thiscall FPropertyItem::ComboSelectionEndCancel(void) */

void __thiscall FPropertyItem::ComboSelectionEndCancel(FPropertyItem *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x19ec  424  ?ComboSelectionEndCancel@FPropertyItem@@QAEXXZ */
  puStack_c = &LAB_110604c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(*(int *)this + 0xa0))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 110019f6 FObjectsItem::GetReadAddress

/* public: virtual unsigned char * __thiscall FObjectsItem::GetReadAddress(class FPropertyItem
   *,int) */

uchar * __thiscall
FObjectsItem::GetReadAddress(FObjectsItem *this,FPropertyItem *param_1,int param_2)

{
  UObject *pUVar1;
  int iVar2;
  int iVar3;
  uchar *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iStack_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x19f6  576  ?GetReadAddress@FObjectsItem@@UAEPAEPAVFPropertyItem@@H@Z */
  puStack_c = &LAB_11060ff0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if ((*(int *)(this + 0x5c) != 0) && ((param_2 == 0 || (*(int *)(this + 0x5c) < 2)))) {
    ExceptionList = &pvStack_10;
    pUVar1 = UObject::GetOuter(*(UObject **)(param_1 + 0x3c));
    pUVar1 = thunk_FUN_11015ea0(pUVar1);
    if (pUVar1 != (UObject *)0x0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x60))(**(undefined4 **)(this + 0x58));
      iVar2 = *(int *)(iVar2 + 4);
      for (iVar6 = 1; iVar6 < *(int *)(this + 0x5c); iVar6 = iVar6 + 1) {
        iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x60))
                          (*(undefined4 *)(*(int *)(this + 0x58) + iVar6 * 4));
        if (iVar2 != *(int *)(iVar3 + 4)) {
          ExceptionList = pvStack_10;
          return (uchar *)0x0;
        }
      }
    }
    puVar4 = (uchar *)(**(code **)(*(int *)param_1 + 0x60))(**(undefined4 **)(this + 0x58));
    pUVar1 = thunk_FUN_11015ea0(*(UObject **)(param_1 + 0x3c));
    if (pUVar1 == (UObject *)0x0) {
      for (iStack_18 = 1; iStack_18 < *(int *)(this + 0x5c); iStack_18 = iStack_18 + 1) {
        iVar2 = **(int **)(param_1 + 0x3c);
        uVar5 = (**(code **)(*(int *)param_1 + 0x60))
                          (*(undefined4 *)(*(int *)(this + 0x58) + iStack_18 * 4));
        iVar2 = (**(code **)(iVar2 + 0x84))(puVar4,uVar5);
        if (iVar2 == 0) {
          ExceptionList = pvStack_10;
          return (uchar *)0x0;
        }
      }
    }
    else {
      iVar2 = (**(code **)(*(int *)param_1 + 0x60))(**(undefined4 **)(this + 0x58));
      iVar2 = *(int *)(iVar2 + 4);
      for (iVar6 = 1; iVar6 < *(int *)(this + 0x5c); iVar6 = iVar6 + 1) {
        iVar3 = (**(code **)(*(int *)param_1 + 0x60))
                          (*(undefined4 *)(*(int *)(this + 0x58) + iVar6 * 4));
        if (iVar2 != *(int *)(iVar3 + 4)) {
          ExceptionList = pvStack_10;
          return (uchar *)0x0;
        }
      }
    }
    ExceptionList = pvStack_10;
    return puVar4;
  }
  return (uchar *)0x0;
}


// ==== 110019fb FPropertyItem::ComboSelectionEndOk

/* public: void __thiscall FPropertyItem::ComboSelectionEndOk(void) */

void __thiscall FPropertyItem::ComboSelectionEndOk(FPropertyItem *this)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  FString *this_00;
  ushort *puVar4;
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x19fb  426  ?ComboSelectionEndOk@FPropertyItem@@QAEXXZ */
  puStack_c = &LAB_110604d9;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(undefined4 *)(this + 0x58) = 1;
  puVar2 = &stack0xffffffcc;
  if ((*(int **)(this + 0x50) != (int *)0x0) &&
     (puVar2 = &stack0xffffffcc, *(int *)(this + 0x48) != 0)) {
    iVar1 = **(int **)(this + 0x50);
    uVar3 = (**(code **)(iVar1 + 0xfc))();
    this_00 = (FString *)(**(code **)(iVar1 + 0xec))(aFStack_28,uVar3);
    iStack_8._0_1_ = 1;
    iVar1 = **(int **)(this + 0x48);
    puVar4 = FString::operator*(this_00);
    (**(code **)(iVar1 + 0x2c))(puVar4);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    FString::~FString(aFStack_28);
    WEdit::SetModify(*(WEdit **)(this + 0x48),1);
    puVar2 = puStack_14;
  }
  puStack_14 = puVar2;
  (**(code **)(*(int *)this + 0x9c))();
  (**(code **)(*(int *)this + 0xa0))();
  (**(code **)(*(int *)this + 0x28))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001a00 thunk_FUN_1101c590 thunk -> 1101c590

// ==== 11001a05 WPropertyPage::WPropertyPage

/* public: __thiscall WPropertyPage::WPropertyPage(class WWindow *) */

WPropertyPage * __thiscall WPropertyPage::WPropertyPage(WPropertyPage *this,WWindow *param_1)

{
  void *unaff_ESI;
  WPropertyPage *pWStack_1c;
  WWindow *pWStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  FArray *pFStack_4;
  
                    /* 0x1a05  126  ??0WPropertyPage@@QAE@PAVWWindow@@@Z */
  pFStack_4 = (FArray *)0xffffffff;
  puStack_8 = &LAB_1106442c;
  pvStack_c = ExceptionList;
  pWStack_18 = param_1;
  ExceptionList = &pvStack_c;
  pWStack_1c = this;
  FName::FName((FName *)&pWStack_1c,(ushort *)u_WPropertyPage_1106fa64,1);
  WWindow::WWindow((WWindow *)this);
  pvStack_c = (void *)0x0;
  pFStack_4 = (FArray *)(this + 0x3c);
  *(undefined ***)this = vftable;
  FArray::FArray(pFStack_4);
  pvStack_c._0_1_ = 2;
  pFStack_4 = (FArray *)(this + 0x48);
  FArray::FArray(pFStack_4);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,4);
  FString::FString((FString *)(this + 0x54));
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11001a0a thunk_FUN_1102ae50 thunk -> 1102ae50

// ==== 11001a0f WWindow::OnCopy

/* public: virtual void __thiscall WWindow::OnCopy(void) */

void __thiscall WWindow::OnCopy(WWindow *this)

{
                    /* 0x1a0f  705  ?OnCopy@WWindow@@UAEXXZ */
  return;
}


// ==== 11001a19 thunk_FUN_1102a830 thunk -> 1102a830

// ==== 11001a1e WPictureButton::OnPaint

/* public: virtual void __thiscall WPictureButton::OnPaint(void) */

void __thiscall WPictureButton::OnPaint(WPictureButton *this)

{
  HDC pHVar1;
  HGDIOBJ h;
  WPictureButton *pWVar2;
  tagPAINTSTRUCT tStack_84;
  int iStack_40;
  tagRECT tStack_34;
  HGDIOBJ pvStack_1c;
  HDC pHStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1a1e  798  ?OnPaint@WPictureButton@@UAEXXZ */
  puStack_c = &LAB_1105fa90;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff70;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pHVar1 = BeginPaint(*(HWND *)(this + 4),&tStack_84);
  pHStack_18 = pHVar1;
  GetClientRect(*(HWND *)(this + 4),&tStack_34);
  pHVar1 = CreateCompatibleDC(pHVar1);
  if (*(int *)(this + 0x88) == 0) {
    h = *(HGDIOBJ *)(this + 0x40);
  }
  else {
    h = *(HGDIOBJ *)(this + 0x3c);
  }
  pvStack_1c = SelectObject(pHVar1,h);
  pWVar2 = this + 100;
  if (*(int *)(this + 0x88) == 0) {
    pWVar2 = this + 0x54;
  }
  iStack_40 = *(int *)(pWVar2 + 4);
  BitBlt(pHStack_18,(tStack_34.right - *(int *)(pWVar2 + 8)) / 2,
         (tStack_34.bottom - *(int *)(pWVar2 + 0xc)) / 2,*(int *)(pWVar2 + 8),*(int *)(pWVar2 + 0xc)
         ,pHVar1,*(int *)pWVar2,iStack_40,0xcc0020);
  SelectObject(pHVar1,pvStack_1c);
  DeleteDC(pHVar1);
  EndPaint(*(HWND *)(this + 4),&tStack_84);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001a23 WWizardDialog::operator=

/* public: class WWizardDialog & __thiscall WWizardDialog::operator=(class WWizardDialog const &) */

WWizardDialog * __thiscall WWizardDialog::operator=(WWizardDialog *this,WWizardDialog *param_1)

{
                    /* 0x1a23  303  ??4WWizardDialog@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  WButton::operator=((WButton *)(this + 0x3c),(WButton *)(param_1 + 0x3c));
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  WButton::operator=((WButton *)(this + 0xd8),(WButton *)(param_1 + 0xd8));
  *(undefined4 *)(this + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(this + 0x170) = *(undefined4 *)(param_1 + 0x170);
  WButton::operator=((WButton *)(this + 0x174),(WButton *)(param_1 + 0x174));
  *(undefined4 *)(this + 0x208) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(this + 0x20c) = *(undefined4 *)(param_1 + 0x20c);
  WButton::operator=((WButton *)(this + 0x210),(WButton *)(param_1 + 0x210));
  *(undefined4 *)(this + 0x2a4) = *(undefined4 *)(param_1 + 0x2a4);
  *(undefined4 *)(this + 0x2a8) = *(undefined4 *)(param_1 + 0x2a8);
  WWindow::operator=((WWindow *)(this + 0x2ac),(WWindow *)(param_1 + 0x2ac));
  *(undefined4 *)(this + 0x2e8) = *(undefined4 *)(param_1 + 0x2e8);
  thunk_FUN_1102eb40(this + 0x2ec,(FArray *)(param_1 + 0x2ec));
  *(undefined4 *)(this + 0x2f8) = *(undefined4 *)(param_1 + 0x2f8);
  return this;
}


// ==== 11001a28 WSplitterPane::GetPackageName

/* public: virtual unsigned short const * __thiscall WSplitterPane::GetPackageName(void) */

ushort * __thiscall WSplitterPane::GetPackageName(WSplitterPane *this)

{
                    /* 0x1a28  553  ?GetPackageName@WSplitterPane@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11001a2d FCategoryItem::FCategoryItem

/* public: __thiscall FCategoryItem::FCategoryItem(class WPropertiesBase *,class FTreeItem *,class
   UClass *,class FName,int) */

FCategoryItem * __thiscall
FCategoryItem::FCategoryItem
          (FCategoryItem *this,WPropertiesBase *param_1,FTreeItem *param_2,int param_3,
          undefined4 param_5,int param_6)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1a2d  2
                       ??0FCategoryItem@@QAE@PAVWPropertiesBase@@PAVFTreeItem@@PAVUClass@@VFName@@H@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110615b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FHeaderItem::FHeaderItem((FHeaderItem *)this,param_1,param_2,param_6);
  uStack_4 = 0;
  *(undefined4 *)(this + 0x3c) = param_5;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  *(int *)(this + 0x40) = param_3;
  if (param_3 == 0) {
    appFailAssert(s_BaseClass_1106eaac,s____Inc_Window_h_1106aefc,0x985);
  }
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001a32 WColorButton::WColorButton

/* public: __thiscall WColorButton::WColorButton(class WWindow *,int,struct FDelegate,long
   (__stdcall*)(struct HWND__ *,unsigned int,unsigned int,long)) */

WColorButton * __thiscall
WColorButton::WColorButton(WColorButton *this,undefined4 param_1,undefined4 param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1a32  62
                       ??0WColorButton@@QAE@PAVWWindow@@HUFDelegate@@P6GJPAUHWND__@@IIJ@Z@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062958;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WButton::WButton((WButton *)this,param_1,param_2);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x9c) = 0xff;
  *(undefined4 *)(this + 0x98) = 0xff;
  *(undefined4 *)(this + 0x94) = 0xff;
  ExceptionList = FDelegate::vftable;
  return this;
}


// ==== 11001a41 FClassItem::GetReadAddress

/* public: virtual unsigned char * __thiscall FClassItem::GetReadAddress(class FPropertyItem *,int)
    */

uchar * __thiscall FClassItem::GetReadAddress(FClassItem *this,FPropertyItem *param_1,int param_2)

{
  int iVar1;
  uchar *puVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1a41  574  ?GetReadAddress@FClassItem@@UAEPAEPAVFPropertyItem@@H@Z */
  puStack_c = &LAB_110607e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iVar1 = *(int *)param_1;
  ExceptionList = &pvStack_10;
  puVar2 = TArray<unsigned_char>::operator()
                     ((TArray<unsigned_char> *)(*(int *)(this + 0x4c) + 0x4f4),0);
  puVar2 = (uchar *)(**(code **)(iVar1 + 0x60))(puVar2);
  ExceptionList = pvStack_10;
  return puVar2;
}


// ==== 11001a46 WThinScrollBar::GetThumbRect

/* public: struct FRect __thiscall WThinScrollBar::GetThumbRect(void) */

CRect * __thiscall WThinScrollBar::GetThumbRect(WThinScrollBar *this)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  ulonglong uVar1;
  ulonglong uVar2;
  CRect *in_stack_00000004;
  tagRECT tStack_30;
  float fStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1a46  596  ?GetThumbRect@WThinScrollBar@@QAE?AUFRect@@XZ */
  puStack_c = &LAB_11061ea0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  GetClientRect(*(HWND *)(this + 4),&tStack_30);
  fStack_18 = (float)tStack_30.bottom;
  uVar1 = FUN_1103b180(extraout_ECX,extraout_EDX);
  tStack_30.top = (int)uVar1;
  uVar2 = FUN_1103b180(extraout_ECX_00,(int)(uVar1 >> 0x20));
  tStack_30.bottom = (LONG)uVar2;
  CRect::CRect(in_stack_00000004,tStack_30.left,(int)uVar1,tStack_30.right,tStack_30.bottom);
  ExceptionList = pvStack_10;
  return in_stack_00000004;
}


// ==== 11001a4b WEditTerminal::GetPackageName

/* public: virtual unsigned short const * __thiscall WEditTerminal::GetPackageName(void) */

ushort * __thiscall WEditTerminal::GetPackageName(WEditTerminal *this)

{
                    /* 0x1a4b  536  ?GetPackageName@WEditTerminal@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11001a50 thunk_FUN_110146b0 thunk -> 110146b0

// ==== 11001a55 WWizardPage::GetFinishText

/* public: virtual unsigned short const * __thiscall WWizardPage::GetFinishText(void) */

ushort * __thiscall WWizardPage::GetFinishText(WWizardPage *this)

{
                    /* 0x1a55  501  ?GetFinishText@WWizardPage@@UAEPBGXZ */
  return (ushort *)0x0;
}


// ==== 11001a5a thunk_FUN_1101be50 thunk -> 1101be50

// ==== 11001a5f WPictureButton::~WPictureButton

/* public: virtual __thiscall WPictureButton::~WPictureButton(void) */

void __thiscall WPictureButton::~WPictureButton(WPictureButton *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x1a5f  215  ??1WPictureButton@@UAE@XZ */
  puStack_8 = &LAB_11062aa4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 1;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  FString::~FString((FString *)(this + 0x74));
  uStack_4 = 0xffffffff;
  WWindow::~WWindow((WWindow *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11001a69 WWindow::OnTimer

/* public: virtual void __thiscall WWindow::OnTimer(void) */

void __thiscall WWindow::OnTimer(WWindow *this)

{
                    /* 0x1a69  841  ?OnTimer@WWindow@@UAEXXZ */
  return;
}


// ==== 11001a6e FPropertyItemBase::FPropertyItemBase

/* public: __thiscall FPropertyItemBase::FPropertyItemBase(class FPropertyItemBase const &) */

FPropertyItemBase * __thiscall
FPropertyItemBase::FPropertyItemBase(FPropertyItemBase *this,FPropertyItemBase *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1a6e  31  ??0FPropertyItemBase@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063b44;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FHeaderItem::FHeaderItem((FHeaderItem *)this,(FHeaderItem *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  FString::FString((FString *)(this + 0x3c),(FString *)(param_1 + 0x3c));
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001a73 thunk_FUN_1101c1f0 thunk -> 1101c1f0

// ==== 11001a78 WUDNWindow::operator=

/* public: class WUDNWindow & __thiscall WUDNWindow::operator=(class WUDNWindow const &) */

WUDNWindow * __thiscall WUDNWindow::operator=(WUDNWindow *this,WUDNWindow *param_1)

{
                    /* 0x1a78  300  ??4WUDNWindow@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  return this;
}


// ==== 11001a82 WBitmapButton::operator=

/* public: class WBitmapButton & __thiscall WBitmapButton::operator=(class WBitmapButton const &) */

WBitmapButton * __thiscall WBitmapButton::operator=(WBitmapButton *this,WBitmapButton *param_1)

{
                    /* 0x1a82  259  ??4WBitmapButton@@QAEAAV0@ABV0@@Z */
  WButton::operator=((WButton *)this,(WButton *)param_1);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  return this;
}


// ==== 11001a91 WUrlButton::operator=

/* public: class WUrlButton & __thiscall WUrlButton::operator=(class WUrlButton const &) */

WUrlButton * __thiscall WUrlButton::operator=(WUrlButton *this,WUrlButton *param_1)

{
                    /* 0x1a91  301  ??4WUrlButton@@QAEAAV0@ABV0@@Z */
  WButton::operator=((WButton *)this,(WButton *)param_1);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  FString::operator=((FString *)(this + 0x9c),(FString *)(param_1 + 0x9c));
  return this;
}


// ==== 11001a96 thunk_FUN_1102be50 thunk -> 1102be50

// ==== 11001a9b FTreeItem::AddButton

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: virtual void __thiscall FTreeItem::AddButton(unsigned short const *,struct FDelegate) */

void __thiscall
FTreeItem::AddButton
          (FTreeItem *this,LPCWSTR param_1,undefined4 param_3,undefined4 param_4,
          WCoolButton *param_5)

{
  HDC hdc;
  int iVar1;
  int iVar2;
  char *lpString;
  WCoolButton *this_00;
  tagSIZE *ptVar3;
  undefined1 *puStack_4c;
  undefined1 auStack_3c [4];
  int iStack_38;
  int iStack_34;
  int iStack_30;
  tagSIZE tStack_2c;
  undefined1 *puStack_20;
  WCoolButton *pWStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1a9b  395  ?AddButton@FTreeItem@@UAEXPBGUFDelegate@@@Z */
  puStack_c = &LAB_1106180b;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffb8;
  iStack_8 = 0;
  puStack_4c = auStack_3c;
  ExceptionList = &pvStack_10;
  (**(code **)(*(int *)this + 0x24))();
  iStack_34 = iStack_34 - *(int *)(this + 0x20);
  hdc = GetDC(*(HWND *)(*(int *)(this + 8) + 4));
  if (*(int *)GUnicodeOS_exref == 0) {
    iVar1 = winGetSizeANSI((ushort *)param_1);
    if (iVar1 == 0) {
      pWStack_18 = (WCoolButton *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)param_1);
      puStack_14 = (undefined1 *)&puStack_4c;
      pWStack_18 = (WCoolButton *)&puStack_4c;
    }
    ptVar3 = &tStack_2c;
    iVar1 = appStrlen((ushort *)param_1);
    iVar2 = winGetSizeANSI((ushort *)param_1);
    lpString = winToANSI((char *)pWStack_18,(ushort *)param_1,iVar2);
    GetTextExtentPoint32A(hdc,lpString,iVar1,ptVar3);
  }
  else {
    ptVar3 = &tStack_2c;
    iVar1 = appStrlen((ushort *)param_1);
    GetTextExtentPoint32W(hdc,param_1,iVar1,ptVar3);
  }
  ReleaseDC(*(HWND *)(*(int *)(this + 8) + 4),hdc);
  iVar1 = tStack_2c.cx + 2;
  pWStack_18 = (WCoolButton *)thunk_FUN_11004ba0(0x9c);
  iStack_8._0_1_ = 1;
  if (pWStack_18 == (WCoolButton *)0x0) {
    this_00 = (WCoolButton *)0x0;
  }
  else {
    puStack_20 = &stack0xffffffa4;
    this_00 = (WCoolButton *)WCoolButton::WCoolButton(pWStack_18,*(int *)(this + 8) + 0x44,0);
  }
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  param_5 = this_00;
  thunk_FUN_1101bed0(this + 0x24,&param_5);
  WCoolButton::OpenWindow
            (this_00,1,iStack_34 - iVar1,iStack_38,iVar1,iStack_30 - iStack_38,(ushort *)param_1);
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + iVar1;
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001aa0 FTreeItem::DrawTreeLines

/* public: virtual void __thiscall FTreeItem::DrawTreeLines(struct HDC__ *,struct FRect,int) */

void __thiscall
FTreeItem::DrawTreeLines
          (FTreeItem *this,HDC param_1,int param_3,uint param_4,int param_5,int param_6,int param_7)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  RECT *pRVar6;
  undefined4 uVar7;
  void *this_00;
  HBRUSH hbr;
  int extraout_EDX;
  FTreeItem *pFVar8;
  int aiStack_8c [8];
  undefined1 *puStack_6c;
  void *pvStack_68;
  undefined1 *puStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  uint uStack_48;
  RECT RStack_44;
  int iStack_34;
  uint uStack_30;
  FTreeItem *pFStack_28;
  RECT RStack_24;
  int iStack_14;
  uint uStack_10;
  FTreeItem *pFStack_c;
  int iStack_8;
  
                    /* 0x1aa0  434  ?DrawTreeLines@FTreeItem@@UAEXPAUHDC__@@UFRect@@H@Z */
  puStack_64 = &LAB_11060c00;
  pvStack_68 = ExceptionList;
  puStack_6c = &stack0xffffff44;
  uStack_60 = 0;
  ExceptionList = &pvStack_68;
  pFStack_28 = this;
  SetBkMode(param_1,1);
  SetTextColor(param_1,0);
  if (*(int *)(*(int *)(this + 8) + 0x40) != 0) {
    pFStack_c = this;
    iStack_8 = GetIndent(this);
    pFVar8 = this;
    for (; iVar5 = iStack_8, -1 < iStack_8; iStack_8 = iStack_8 + -1) {
      iVar2 = (**(code **)(*(int *)pFVar8 + 8))();
      uStack_10 = (uint)(iVar2 == 0x14);
      if (*(int *)(pFVar8 + 0xc) == 0) {
        appFailAssert(s_Prev_>Parent_1106d1c0,s___Properties_cpp_1106b558,0xd2);
      }
      puVar3 = (undefined4 *)thunk_FUN_11013d70((void *)(*(int *)(pFVar8 + 0xc) + 0x30),0);
      if ((((FTreeItem *)*puVar3 == pFVar8) &&
          (piVar4 = (int *)thunk_FUN_11013d70((void *)(*(int *)(pFVar8 + 0xc) + 0x30),0),
          (FTreeItem *)*piVar4 != this)) ||
         ((iVar5 == 0 && ((FTreeItem *)**(int **)(*(int *)(pFVar8 + 0xc) + 0x30) == this)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      thunk_FUN_11013d70((void *)(*(int *)(pFVar8 + 0xc) + 0x30),0);
      iVar5 = GetUnitIndentPixels(this);
      iVar5 = iVar5 * iStack_8 + param_3;
      if (uStack_10 == 0) {
        if (bVar1) {
          if (extraout_EDX == 0) {
            iVar2 = 8;
          }
          else {
            iVar2 = (**(code **)(*(int *)this + 8))();
            this = pFStack_28;
          }
LAB_1101652a:
          uStack_10 = param_4;
          iStack_14 = iVar5 + 9;
          uStack_54 = 8;
          iStack_50 = (-(uint)bVar1 & 0xfffffff8) + 8;
          uStack_30 = param_4;
          iStack_34 = iVar5 + 8;
          pRVar6 = (RECT *)CRect::CRect((CRect *)&RStack_24,iStack_34,param_4 + iStack_50,iStack_14,
                                        param_4 + iVar2);
          FillRect(param_1,pRVar6,hBrushDark);
        }
        else if (extraout_EDX != 0) {
          iVar2 = (**(code **)(*(int *)this + 8))();
          this = pFStack_28;
          goto LAB_1101652a;
        }
        iVar2 = GetIndent(this);
        if (iStack_8 == iVar2) {
          uStack_48 = param_4;
          iStack_4c = iVar5 + 0x14;
          uStack_58 = param_4;
          iStack_5c = iVar5 + 8;
          pRVar6 = (RECT *)CRect::CRect((CRect *)&RStack_44,iStack_5c,param_4 + 8,iStack_4c,
                                        param_4 + 9);
          FillRect(param_1,pRVar6,hBrushDark);
        }
      }
      pFVar8 = *(FTreeItem **)(pFStack_c + 0xc);
      pFStack_c = pFVar8;
    }
  }
  if (*(int *)(this + 0x10) != 0) {
    uVar7 = (**(code **)(*(int *)this + 0x24))(&RStack_24);
    piVar4 = &param_3;
    pRVar6 = &RStack_44;
    this_00 = (void *)(**(code **)(*(int *)this + 0x44))(pRVar6,piVar4,uVar7);
    thunk_FUN_11014350(this_00,&pRVar6->left,piVar4);
    if (param_7 == 0) {
      FillRect(param_1,(RECT *)&param_3,hBrushDark);
      aiStack_8c[4] = 1;
      aiStack_8c[5] = 1;
      aiStack_8c[6] = 0xffffffff;
      aiStack_8c[7] = 0xffffffff;
      piVar4 = (int *)thunk_FUN_110143f0(&param_3,&RStack_24.left,aiStack_8c + 4);
      param_3 = *piVar4;
      param_4 = piVar4[1];
      param_5 = piVar4[2];
      param_6 = piVar4[3];
      hbr = (HBRUSH)(**(code **)(*(int *)this + 0x14))(0);
      FillRect(param_1,(RECT *)&param_3,hbr);
      aiStack_8c[0] = 1;
      aiStack_8c[1] = 1;
      aiStack_8c[2] = 0xffffffff;
      aiStack_8c[3] = 0xffffffff;
      piVar4 = (int *)thunk_FUN_110143f0(&param_3,&RStack_24.left,aiStack_8c);
      param_3 = *piVar4;
      param_4 = piVar4[1];
      param_5 = piVar4[2];
      param_6 = piVar4[3];
    }
    iVar5 = (param_5 - param_3) / 2 + param_3;
    RStack_44.top = (int)(param_6 - param_4) / 2 + param_4;
    RStack_44.right = param_5;
    RStack_44.bottom = RStack_44.top + 1;
    RStack_44.left = param_3;
    FillRect(param_1,&RStack_44,hBrushDark);
    if (*(int *)(this + 0x14) == 0) {
      RStack_24.top = param_4;
      RStack_24.right = iVar5 + 1;
      RStack_24.bottom = param_6;
      RStack_24.left = iVar5;
      FillRect(param_1,&RStack_24,hBrushDark);
    }
  }
  ExceptionList = pvStack_68;
  return;
}


// ==== 11001aaa WCoolButton::OnDestroy

/* public: virtual void __thiscall WCoolButton::OnDestroy(void) */

void __thiscall WCoolButton::OnDestroy(WCoolButton *this)

{
                    /* 0x1aaa  717  ?OnDestroy@WCoolButton@@UAEXXZ */
  if (GlobalCoolButton == this) {
    GlobalCoolButton = (WCoolButton *)0x0;
  }
  WWindow::OnDestroy((WWindow *)this);
  return;
}


// ==== 11001aaf WGroupBox::operator=

/* public: class WGroupBox & __thiscall WGroupBox::operator=(class WGroupBox const &) */

WGroupBox * __thiscall WGroupBox::operator=(WGroupBox *this,WGroupBox *param_1)

{
                    /* 0x1aaf  275  ??4WGroupBox@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return this;
}


// ==== 11001ab4 FHeaderItem::OnPickColorButton

/* public: void __thiscall FHeaderItem::OnPickColorButton(void) */

void __thiscall FHeaderItem::OnPickColorButton(FHeaderItem *this)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1ab4  808  ?OnPickColorButton@FHeaderItem@@QAEXXZ */
  puStack_c = &LAB_11060590;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iVar1 = *(int *)(this + 8);
  ExceptionList = &pvStack_10;
  if (*(int *)(iVar1 + 0x18) != 0) {
    ExceptionList = &pvStack_10;
    (**(code **)(**(int **)(iVar1 + 0x18) + 0xc))(iVar1,u_USECOLOR_1106bd30);
  }
  (**(code **)(*(int *)this + 0x28))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001ab9 WPropertyPage::Cleanup

/* public: void __thiscall WPropertyPage::Cleanup(void) */

void __thiscall WPropertyPage::Cleanup(WPropertyPage *this)

{
  int *piVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1ab9  411  ?Cleanup@WPropertyPage@@QAEXXZ */
  puStack_c = &LAB_1105f9c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x4c); iVar2 = iVar2 + 1) {
    DestroyWindow(*(HWND *)(*(int *)(*(int *)(this + 0x48) + iVar2 * 4) + 4));
    piVar1 = *(int **)(*(int *)(this + 0x48) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001abe thunk_FUN_11034fb0 thunk -> 11034fb0

// ==== 11001ac3 WColorButton::GetPackageName

/* public: virtual unsigned short const * __thiscall WColorButton::GetPackageName(void) */

ushort * __thiscall WColorButton::GetPackageName(WColorButton *this)

{
                    /* 0x1ac3  528  ?GetPackageName@WColorButton@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11001ac8 WComboBox::GetPackageName

/* public: virtual unsigned short const * __thiscall WComboBox::GetPackageName(void) */

ushort * __thiscall WComboBox::GetPackageName(WComboBox *this)

{
                    /* 0x1ac8  529  ?GetPackageName@WComboBox@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11001acd FDelegate::`default_constructor_closure'

/* public: void __thiscall FDelegate::`default constructor closure'(void) */

void __thiscall FDelegate::_default_constructor_closure_(FDelegate *this)

{
                    /* 0x1acd  388  ??_FFDelegate@@QAEXXZ */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


// ==== 11001ad2 FTreeItem::GetBackgroundBrush

/* public: virtual struct HBRUSH__ * __thiscall FTreeItem::GetBackgroundBrush(int) */

HBRUSH__ * __thiscall FTreeItem::GetBackgroundBrush(FTreeItem *this,int param_1)

{
  HBRUSH__ *pHVar1;
  
                    /* 0x1ad2  471  ?GetBackgroundBrush@FTreeItem@@UAEPAUHBRUSH__@@H@Z */
  pHVar1 = hBrushCurrent;
  if (param_1 == 0) {
    pHVar1 = hBrushGrey197;
  }
  return pHVar1;
}


// ==== 11001ad7 WListBox::AddString

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: int __thiscall WListBox::AddString(unsigned short const *) */

int __thiscall WListBox::AddString(WListBox *this,ushort *param_1)

{
  HWND hWnd;
  int iVar1;
  char *pcVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1ad7  400  ?AddString@WListBox@@QAEHPBG@Z */
  puStack_c = &LAB_1105fe70;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
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
    iVar1 = SendMessageA(hWnd,0x180,0,(LPARAM)pcVar2);
  }
  else {
    ExceptionList = &pvStack_10;
    iVar1 = SendMessageW(*(HWND *)(this + 4),0x180,0,(LPARAM)param_1);
  }
  ExceptionList = pvStack_10;
  return iVar1;
}


// ==== 11001adc thunk_FUN_1102e4e0 thunk -> 1102e4e0

// ==== 11001ae1 thunk_FUN_1101d9f0 thunk -> 1101d9f0

// ==== 11001aeb WCoolButton::WCoolButton

/* public: __thiscall WCoolButton::WCoolButton(class WCoolButton const &) */

WCoolButton * __thiscall WCoolButton::WCoolButton(WCoolButton *this,WCoolButton *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1aeb  73  ??0WCoolButton@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062d28;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WButton::WButton((WButton *)this,(WButton *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001af5 FWindowAnchor::FWindowAnchor

/* public: __thiscall FWindowAnchor::FWindowAnchor(struct HWND__ *,struct HWND__
   *,int,int,int,int,int,int) */

void __thiscall
FWindowAnchor::FWindowAnchor
          (FWindowAnchor *this,HWND__ *param_1,HWND__ *param_2,int param_3,int param_4,int param_5,
          int param_6,int param_7,int param_8)

{
                    /* 0x1af5  43  ??0FWindowAnchor@@QAE@PAUHWND__@@0HHHHHH@Z */
  *(HWND__ **)this = param_1;
  *(HWND__ **)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  *(int *)(this + 0xc) = param_4;
  *(int *)(this + 0x10) = param_5;
  *(int *)(this + 0x14) = param_6;
  *(int *)(this + 0x18) = param_7;
  *(int *)(this + 0x1c) = param_8;
  return;
}


// ==== 11001afa thunk_FUN_1101bea0 thunk -> 1101bea0

// ==== 11001aff thunk_FUN_1102afa0 thunk -> 1102afa0

// ==== 11001b04 thunk_FUN_11015a00 thunk -> 11015a00

// ==== 11001b09 thunk_FUN_110157b0 thunk -> 110157b0

// ==== 11001b18 WItemBox::GetWindowClassName

/* public: virtual void __thiscall WItemBox::GetWindowClassName(unsigned short *) */

void __thiscall WItemBox::GetWindowClassName(WItemBox *this,ushort *param_1)

{
                    /* 0x1b18  615  ?GetWindowClassName@WItemBox@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WItemBox_1106fd08);
  return;
}


// ==== 11001b1d WComboBox::SetCurrent

/* public: virtual void __thiscall WComboBox::SetCurrent(int) */

void __thiscall WComboBox::SetCurrent(WComboBox *this,int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1b1d  921  ?SetCurrent@WComboBox@@UAEXH@Z */
  puStack_c = &LAB_1105fb70;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0x14e,param_1,0);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0x14e,param_1,0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001b22 thunk_FUN_1102aa10 thunk -> 1102aa10

// ==== 11001b27 WDragInterceptor::OnLeftButtonUp

/* public: virtual void __thiscall WDragInterceptor::OnLeftButtonUp(void) */

void __thiscall WDragInterceptor::OnLeftButtonUp(WDragInterceptor *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1b27  774  ?OnLeftButtonUp@WDragInterceptor@@UAEXXZ */
  puStack_c = &LAB_11061b40;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  ReleaseCapture();
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001b2c WCheckBox::OnCreate

/* public: virtual void __thiscall WCheckBox::OnCreate(void) */

void __thiscall WCheckBox::OnCreate(WCheckBox *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1b2c  708  ?OnCreate@WCheckBox@@UAEXXZ */
  puStack_c = &LAB_1105f6f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::OnCreate((WWindow *)this);
  *(undefined4 *)(this + 0x90) = 0;
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001b31 WListView::GetCurrent

/* public: int __thiscall WListView::GetCurrent(void) */

int __thiscall WListView::GetCurrent(WListView *this)

{
  LRESULT LVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1b31  495  ?GetCurrent@WListView@@QAEHXZ */
  puStack_c = &LAB_1105f7e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &pvStack_10;
    LVar1 = SendMessageW(*(HWND *)(this + 4),0x100c,0xffffffff,3);
    ExceptionList = pvStack_10;
    return LVar1;
  }
  ExceptionList = &pvStack_10;
  LVar1 = SendMessageA(*(HWND *)(this + 4),0x100c,0xffffffff,3);
  ExceptionList = pvStack_10;
  return LVar1;
}


// ==== 11001b3b FTreeItem::GetBase

/* public: virtual unsigned char * __thiscall FTreeItem::GetBase(unsigned char *) */

uchar * __thiscall FTreeItem::GetBase(FTreeItem *this,uchar *param_1)

{
  uchar *puVar1;
  
                    /* 0x1b3b  476  ?GetBase@FTreeItem@@UAEPAEPAE@Z */
  if (*(int *)(this + 0xc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x11010cbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (uchar *)(**(code **)(**(int **)(this + 0xc) + 100))();
    return puVar1;
  }
  return (uchar *)0x0;
}


// ==== 11001b40 WDialog::WDialog

/* public: __thiscall WDialog::WDialog(class WDialog const &) */

WDialog * __thiscall WDialog::WDialog(WDialog *this,WDialog *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1b40  82  ??0WDialog@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110631d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow::WWindow((WWindow *)this,(WWindow *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001b45 thunk_FUN_11013fa0 thunk -> 11013fa0

// ==== 11001b4a FObjectsItem::Val

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: float __thiscall FObjectsItem::Val(class FString) */

float __thiscall FObjectsItem::Val(void)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  float fStack_20;
  FString aFStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x1b4a  1017  ?Val@FObjectsItem@@QAEMVFString@@@Z */
  puStack_8 = &LAB_11060782;
  pvStack_c = ExceptionList;
  iVar3 = 0;
  uStack_4 = 0;
  fStack_20 = 0.0;
  ExceptionList = &pvStack_c;
  iVar1 = FString::Len((FString *)&stack0x00000004);
  if (0 < iVar1) {
    do {
      FString::Mid((FString *)&stack0x00000004,(int)aFStack_18,iVar3);
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      iVar1 = FString::operator>=(aFStack_18,(ushort *)&DAT_1106c3c0);
      if ((iVar1 == 0) ||
         (iVar1 = FString::operator<=(aFStack_18,(ushort *)&DAT_1106c3bc), iVar1 == 0)) {
        iVar1 = FString::operator!=(aFStack_18,(ushort *)&DAT_1106c3a8);
        if (iVar1 != 0) {
          uStack_4 = uStack_4 & 0xffffff00;
          FString::~FString(aFStack_18);
          break;
        }
      }
      else {
        puVar2 = FString::operator*(aFStack_18);
        iVar1 = appAtoi(puVar2);
        fStack_20 = (float)iVar1 + fStack_20 * (float)_DAT_1106c3b0;
      }
      uStack_4 = uStack_4 & 0xffffff00;
      FString::~FString(aFStack_18);
      iVar3 = iVar3 + 1;
      iVar1 = FString::Len((FString *)&stack0x00000004);
    } while (iVar3 < iVar1);
  }
  uStack_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = pvStack_c;
  return fStack_20;
}


// ==== 11001b5e WCoolButton::WCoolButton

/* public: __thiscall WCoolButton::WCoolButton(void) */

WCoolButton * __thiscall WCoolButton::WCoolButton(WCoolButton *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1b5e  75  ??0WCoolButton@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062d08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WButton::WButton((WButton *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001b63 FUDNHelpTopic::~FUDNHelpTopic

/* public: __thiscall FUDNHelpTopic::~FUDNHelpTopic(void) */

void __thiscall FUDNHelpTopic::~FUDNHelpTopic(FUDNHelpTopic *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1b63  188  ??1FUDNHelpTopic@@QAE@XZ */
  puStack_8 = &LAB_11061c85;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  FString::~FString((FString *)(this + 0xc));
  uStack_4 = 0xffffffff;
  FString::~FString((FString *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11001b68 FObjectsItem::GetBase

/* public: virtual unsigned char * __thiscall FObjectsItem::GetBase(unsigned char *) */

uchar * __thiscall FObjectsItem::GetBase(FObjectsItem *this,uchar *param_1)

{
                    /* 0x1b68  474  ?GetBase@FObjectsItem@@UAEPAEPAE@Z */
  return param_1;
}


// ==== 11001b6d thunk_FUN_1100e610 thunk -> 1100e610

// ==== 11001b72 thunk_FUN_110388a0 thunk -> 110388a0

// ==== 11001b7c thunk_FUN_11024c60 thunk -> 11024c60

// ==== 11001b81 WTreeView::Empty

/* public: void __thiscall WTreeView::Empty(void) */

void __thiscall WTreeView::Empty(WTreeView *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1b81  440  ?Empty@WTreeView@@QAEXXZ */
  puStack_c = &LAB_1105fad0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0x1101,0,-0x10000);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0x1101,0,-0x10000);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001b86 WCheckBox::WCheckBox

/* public: __thiscall WCheckBox::WCheckBox(class WCheckBox const &) */

WCheckBox * __thiscall WCheckBox::WCheckBox(WCheckBox *this,WCheckBox *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1b86  52  ??0WCheckBox@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062be8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WButton::WButton((WButton *)this,(WButton *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001b8b WCrashBoxDialog::GetWindowClassName

/* public: virtual void __thiscall WCrashBoxDialog::GetWindowClassName(unsigned short *) */

void __thiscall WCrashBoxDialog::GetWindowClassName(WCrashBoxDialog *this,ushort *param_1)

{
                    /* 0x1b8b  609  ?GetWindowClassName@WCrashBoxDialog@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WCrashBoxDialog_1106fc84);
  return;
}


// ==== 11001b90 WTabControl::Empty

/* public: void __thiscall WTabControl::Empty(void) */

void __thiscall WTabControl::Empty(WTabControl *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1b90  439  ?Empty@WTabControl@@QAEXXZ */
  puStack_c = &LAB_1105f8e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0x1309,0,0);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0x1309,0,0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001b9a WThinScrollBar::GetWindowClassName

/* public: virtual void __thiscall WThinScrollBar::GetWindowClassName(unsigned short *) */

void __thiscall WThinScrollBar::GetWindowClassName(WThinScrollBar *this,ushort *param_1)

{
                    /* 0x1b9a  634  ?GetWindowClassName@WThinScrollBar@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WThinScrollBar_1106fb10);
  return;
}


// ==== 11001b9f FNewObjectItem::~FNewObjectItem

/* public: virtual __thiscall FNewObjectItem::~FNewObjectItem(void) */

void __thiscall FNewObjectItem::~FNewObjectItem(FNewObjectItem *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1b9f  182  ??1FNewObjectItem@@UAE@XZ */
  puStack_8 = &LAB_1106166c;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  FString::~FString((FString *)(this + 0x48));
  uStack_4 = 0xffffffff;
  FTreeItem::~FTreeItem((FTreeItem *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11001ba4 WTerminal::Paste

/* public: virtual void __thiscall WTerminal::Paste(void) */

void __thiscall WTerminal::Paste(WTerminal *this)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  FString aFStack_2c [20];
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1ba4  883  ?Paste@WTerminal@@UAEXXZ */
  puStack_c = &LAB_11062289;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  SelectTyping(this);
  appClipboardPaste();
  iStack_8._0_1_ = 1;
  iVar3 = 0x100;
  puVar2 = FString::operator*(aFStack_2c);
  appStrncat((ushort *)(this + 0xa8),puVar2,iVar3);
  *(undefined2 *)(this + 0x2a6) = 0;
  iStack_18 = 0;
  while( true ) {
    uVar1 = *(ushort *)(this + iStack_18 * 2 + 0xa8);
    if (uVar1 == 0) break;
    if ((uVar1 < 0x20) || (0x7e < uVar1)) {
      *(undefined2 *)(this + iStack_18 * 2 + 0xa8) = 0;
    }
    iStack_18 = iStack_18 + 1;
  }
  UpdateTyping(this);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FString::~FString(aFStack_2c);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001ba9 thunk_FUN_11035870 thunk -> 11035870

// ==== 11001bae thunk_FUN_1101bf00 thunk -> 1101bf00

// ==== 11001bb3 WListBox::InterceptControlCommand

/* public: virtual int __thiscall WListBox::InterceptControlCommand(unsigned int,unsigned int,long)
    */

int __thiscall
WListBox::InterceptControlCommand(WListBox *this,uint param_1,uint param_2,long param_3)

{
  short sVar1;
  WListBox *pWVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1bb3  656  ?InterceptControlCommand@WListBox@@UAEHIIJ@Z */
  puStack_c = &LAB_1105f7a0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  sVar1 = (short)(param_2 >> 0x10);
  if (sVar1 == 2) {
    pWVar2 = this + 0x40;
  }
  else if (sVar1 == 1) {
    pWVar2 = this + 0x4c;
  }
  else if (sVar1 == 3) {
    pWVar2 = this + 0x58;
  }
  else if (sVar1 == 4) {
    pWVar2 = this + 100;
  }
  else {
    if (sVar1 != 5) {
      return 0;
    }
    pWVar2 = this + 0x70;
  }
  ExceptionList = &pvStack_10;
  (*(code *)**(undefined4 **)pWVar2)();
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 11001bbd WWindow::OnKeyUp

/* public: virtual void __thiscall WWindow::OnKeyUp(unsigned int,long) */

void __thiscall WWindow::OnKeyUp(WWindow *this,uint param_1,long param_2)

{
                    /* 0x1bbd  762  ?OnKeyUp@WWindow@@UAEXIJ@Z */
  return;
}


// ==== 11001bc2 WProperties::OnFinishSplitterDrag

/* public: virtual void __thiscall WProperties::OnFinishSplitterDrag(class WDragInterceptor *,int)
    */

void __thiscall
WProperties::OnFinishSplitterDrag(WProperties *this,WDragInterceptor *param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  FString *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FString aFStack_34 [12];
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1bc2  737  ?OnFinishSplitterDrag@WProperties@@UAEXPAVWDragInterceptor@@H@Z
                        */
  puStack_c = &LAB_11060fb2;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc0;
  iStack_8 = 0;
  if (param_2 != 0) {
    ExceptionList = &pvStack_10;
    *(int *)(this + 0xf4) =
         *(int *)(this + 0xf4) + (*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x54));
    FName::FName((FName *)&param_2,0);
    iVar1 = FName::operator!=((FName *)(this + 8),(FName *)&param_2);
    if (iVar1 != 0) {
      puVar2 = FName::operator*((FName *)(this + 8));
      pFVar3 = (FString *)FString::FString(aFStack_34,puVar2);
      iStack_8._0_1_ = 1;
      pFVar3 = (FString *)FString::operator+(pFVar3,(ushort *)aFStack_28);
      iStack_8._0_1_ = 2;
      iVar1 = **(int **)GConfig_exref;
      uVar5 = 0;
      uVar4 = *(undefined4 *)(this + 0xf4);
      puVar2 = FString::operator*(pFVar3);
      (**(code **)(iVar1 + 0x28))(u_WindowPositions_1106dcec,puVar2,uVar4,uVar5);
      iStack_8._0_1_ = 1;
      FString::~FString(aFStack_28);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FString::~FString(aFStack_34);
    }
    InvalidateRect(*(HWND *)(this + 4),(RECT *)0x0,1);
    InvalidateRect(*(HWND *)(this + 0x48),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(this + 4));
  }
  *(undefined4 *)(this + 0xf0) = 0;
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001bc7 FClassItem::operator=

/* public: class FClassItem & __thiscall FClassItem::operator=(class FClassItem const &) */

FClassItem * __thiscall FClassItem::operator=(FClassItem *this,FClassItem *param_1)

{
                    /* 0x1bc7  240  ??4FClassItem@@QAEAAV0@ABV0@@Z */
  FTreeItem::operator=((FTreeItem *)this,(FTreeItem *)param_1);
  FString::operator=((FString *)(this + 0x3c),(FString *)(param_1 + 0x3c));
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  return this;
}


// ==== 11001bd1 FTreeItem::EmptyChildren

/* public: void __thiscall FTreeItem::EmptyChildren(void) */

void __thiscall FTreeItem::EmptyChildren(FTreeItem *this)

{
  int *piVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1bd1  441  ?EmptyChildren@FTreeItem@@QAEXXZ */
  puStack_c = &LAB_110611a0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x34); iVar2 = iVar2 + 1) {
    piVar1 = *(int **)(*(int *)(this + 0x30) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(1);
    }
  }
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x34); iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(this + 0x30),4,0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001bd6 thunk_FUN_11014060 thunk -> 11014060

// ==== 11001bdb WWindow::OnDrawItem

/* public: virtual void __thiscall WWindow::OnDrawItem(struct tagDRAWITEMSTRUCT *) */

void __thiscall WWindow::OnDrawItem(WWindow *this,tagDRAWITEMSTRUCT *param_1)

{
                    /* 0x1bdb  731  ?OnDrawItem@WWindow@@UAEXPAUtagDRAWITEMSTRUCT@@@Z */
  return;
}


// ==== 11001be0 WScrollBar::GetPackageName

/* public: virtual unsigned short const * __thiscall WScrollBar::GetPackageName(void) */

ushort * __thiscall WScrollBar::GetPackageName(WScrollBar *this)

{
                    /* 0x1be0  550  ?GetPackageName@WScrollBar@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11001be5 thunk_FUN_11039690 thunk -> 11039690

// ==== 11001bea FCategoryItem::Expand

/* public: virtual void __thiscall FCategoryItem::Expand(void) */

void __thiscall FCategoryItem::Expand(FCategoryItem *this)

{
  UObject *this_00;
  int iVar1;
  FPropertyItem *pFVar2;
  undefined4 *puVar3;
  int iStack_2c;
  UObject *pUStack_28;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1bea  448  ?Expand@FCategoryItem@@UAEXXZ */
  puStack_c = &LAB_110618b0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  thunk_FUN_1101c650(&iStack_2c,*(int *)(this + 0x40));
  while (this_00 = pUStack_28, pUStack_28 != (UObject *)0x0) {
    iVar1 = FName::operator==((FName *)(pUStack_28 + 0x4c),(FName *)(this + 0x3c));
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(int *)this + 0x78))(*(undefined4 *)(this_00 + 0x48));
      if (iVar1 != 0) {
        pFVar2 = (FPropertyItem *)thunk_FUN_110115b0(0x80,u_FPropertyItem_1106f11c);
        if (pFVar2 == (FPropertyItem *)0x0) {
          uStack_18 = 0;
        }
        else {
          puVar3 = (undefined4 *)UObject::GetFName(this_00);
          uStack_18 = FPropertyItem::FPropertyItem
                                (pFVar2,*(undefined4 *)(this + 8),this,this_00,*puVar3,
                                 *(undefined4 *)(this_00 + 0x54),0xffffffff,0x29a);
        }
        thunk_FUN_1101bf00(this + 0x30,&uStack_18);
      }
    }
    pUStack_28 = *(UObject **)(this_00 + 0x38);
    thunk_FUN_11015cb0(&iStack_2c);
  }
  FTreeItem::Expand((FTreeItem *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001bef thunk_FUN_11035ed0 thunk -> 11035ed0

// ==== 11001bf9 WBitmapButton::WBitmapButton

/* public: __thiscall WBitmapButton::WBitmapButton(class WBitmapButton const &) */

WBitmapButton * __thiscall WBitmapButton::WBitmapButton(WBitmapButton *this,WBitmapButton *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1bf9  46  ??0WBitmapButton@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110628f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WButton::WButton((WButton *)this,(WButton *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001bfe WRichEdit::GetPackageName

/* public: virtual unsigned short const * __thiscall WRichEdit::GetPackageName(void) */

ushort * __thiscall WRichEdit::GetPackageName(WRichEdit *this)

{
                    /* 0x1bfe  549  ?GetPackageName@WRichEdit@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11001c03 GOnSetFocus

/* void __cdecl GOnSetFocus(struct HWND__ *) */

void __cdecl GOnSetFocus(HWND__ *param_1)

{
  DWORD DVar1;
  DWORD DStack_4;
  
                    /* 0x1c03  469  ?GOnSetFocus@@YAXPAUHWND__@@@Z */
  if (*(int *)__Client_exref != 0) {
    GetWindowThreadProcessId(param_1,&DStack_4);
    DVar1 = GetCurrentProcessId();
    if (DStack_4 != DVar1) {
      (**(code **)(**(int **)__Client_exref + 0x70))();
    }
  }
  return;
}


// ==== 11001c08 thunk_FUN_11006f80 thunk -> 11006f80

// ==== 11001c0d WDragInterceptor::operator=

/* public: class WDragInterceptor & __thiscall WDragInterceptor::operator=(class WDragInterceptor
   const &) */

WDragInterceptor * __thiscall
WDragInterceptor::operator=(WDragInterceptor *this,WDragInterceptor *param_1)

{
                    /* 0x1c0d  272  ??4WDragInterceptor@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  return this;
}


// ==== 11001c12 WListBox::OnRightButtonDown

/* public: virtual void __thiscall WListBox::OnRightButtonDown(void) */

void __thiscall WListBox::OnRightButtonDown(WListBox *this)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined4 *puVar2;
  undefined4 auStack_8 [2];
  
                    /* 0x1c12  816  ?OnRightButtonDown@WListBox@@UAEXXZ */
  puVar2 = auStack_8;
  WWindow::GetCursorPos((WWindow *)this);
  iVar1 = ItemFromPoint(this,unaff_ESI,auStack_8[0],puVar2);
  SetCurrent(this,iVar1,1);
  (*(code *)**(undefined4 **)(this + 0x7c))();
  return;
}


// ==== 11001c17 WTabControl::AddTab

/* public: void __thiscall WTabControl::AddTab(class FString,int) */

void __thiscall WTabControl::AddTab(WTabControl *this)

{
  HWND hWnd;
  ushort *puVar1;
  WPARAM WVar2;
  undefined4 in_stack_00000010;
  undefined4 *puVar3;
  ushort uStack_238;
  undefined1 auStack_236 [510];
  undefined4 auStack_38 [3];
  ushort *puStack_2c;
  undefined4 uStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1c17  401  ?AddTab@WTabControl@@QAEXVFString@@H@Z */
  puStack_c = &LAB_1105ff99;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffdbc;
  uStack_8 = 1;
  uStack_238 = 0;
  ExceptionList = &pvStack_10;
  _memset(auStack_236,0,0x1fe);
  puVar1 = FString::operator*((FString *)&stack0x00000004);
  appStrcpy(&uStack_238,puVar1);
  auStack_38[0] = 9;
  puStack_2c = &uStack_238;
  uStack_20 = in_stack_00000010;
  hWnd = *(HWND *)(this + 4);
  if (*(int *)GUnicodeOS_exref == 0) {
    puVar3 = auStack_38;
    WVar2 = GetCount(this);
    SendMessageA(hWnd,0x133e,WVar2,(LPARAM)puVar3);
  }
  else {
    puVar3 = auStack_38;
    WVar2 = GetCount(this);
    SendMessageW(hWnd,0x133e,WVar2,(LPARAM)puVar3);
  }
  uStack_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001c1c WUrlButton::OnClick

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: void __thiscall WUrlButton::OnClick(void) */

void __thiscall WUrlButton::OnClick(WUrlButton *this)

{
  LPCWSTR lpFile;
  HWND pHVar1;
  int iVar2;
  ushort *puVar3;
  char *lpParameters;
  char *lpFile_00;
  char *lpOperation;
  FString *this_00;
  char *pcVar4;
  wchar_t *lpOperation_00;
  LPCWSTR lpParameters_00;
  LPCWSTR lpDirectory;
  INT IVar5;
  char *pcStack_20;
  char *pcStack_1c;
  char *pcStack_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1c1c  698  ?OnClick@WUrlButton@@QAEXXZ */
  puStack_c = &LAB_1105f740;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
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
      pcStack_18 = (char *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)&DAT_11068ff8);
      pcStack_18 = &stack0xffffffcc;
    }
    this_00 = (FString *)(this + 0x9c);
    puVar3 = FString::operator*(this_00);
    iVar2 = winGetSizeANSI(puVar3);
    if (iVar2 == 0) {
      pcStack_1c = (char *)0x0;
    }
    else {
      puVar3 = FString::operator*(this_00);
      winGetSizeANSI(puVar3);
      pcStack_1c = &stack0xffffffcc;
    }
    iVar2 = winGetSizeANSI((ushort *)u_open_11068fec);
    if (iVar2 == 0) {
      pcStack_20 = (char *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)u_open_11068fec);
      pcStack_20 = &stack0xffffffcc;
    }
    IVar5 = 1;
    iVar2 = winGetSizeANSI((ushort *)&DAT_11068ff8);
    pcVar4 = winToANSI(pcVar4,(ushort *)&DAT_11068ff8,iVar2);
    iVar2 = winGetSizeANSI((ushort *)&DAT_11068ff8);
    lpParameters = winToANSI(pcStack_18,(ushort *)&DAT_11068ff8,iVar2);
    puVar3 = FString::operator*(this_00);
    iVar2 = winGetSizeANSI(puVar3);
    puVar3 = FString::operator*(this_00);
    lpFile_00 = winToANSI(pcStack_1c,puVar3,iVar2);
    iVar2 = winGetSizeANSI((ushort *)u_open_11068fec);
    lpOperation = winToANSI(pcStack_20,(ushort *)u_open_11068fec,iVar2);
    pHVar1 = GetActiveWindow();
    ShellExecuteA(pHVar1,lpOperation,lpFile_00,lpParameters,pcVar4,IVar5);
  }
  else {
    IVar5 = 1;
    lpDirectory = (LPCWSTR)&DAT_11068ff8;
    lpParameters_00 = (LPCWSTR)&DAT_11068ff8;
    ExceptionList = &pvStack_10;
    lpFile = (LPCWSTR)FString::operator*((FString *)(this + 0x9c));
    lpOperation_00 = u_open_11068fec;
    pHVar1 = GetActiveWindow();
    ShellExecuteW(pHVar1,lpOperation_00,lpFile,lpParameters_00,lpDirectory,IVar5);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001c21 WToolTip::AddTool

/* public: void __thiscall WToolTip::AddTool(struct HWND__ *,class FString,int,struct tagRECT *) */

void __thiscall WToolTip::AddTool(WToolTip *this,HWND param_1)

{
  BOOL BVar1;
  ushort *puVar2;
  int in_stack_00000014;
  LONG *in_stack_00000018;
  ushort uStack_158;
  undefined1 auStack_156 [262];
  tagRECT tStack_50;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  HWND pHStack_38;
  int iStack_34;
  LONG LStack_30;
  LONG LStack_2c;
  LONG LStack_28;
  LONG LStack_24;
  undefined4 uStack_20;
  ushort *puStack_1c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1c21  402  ?AddTool@WToolTip@@QAEXPAUHWND__@@VFString@@HPAUtagRECT@@@Z */
  puStack_c = &LAB_1105f679;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffe9c;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  BVar1 = IsWindow(*(HWND *)(this + 4));
  if (BVar1 == 0) {
    appFailAssert(s___IsWindow__hWnd___11068d60,s___Controls_cpp_11068b54,0x356);
  }
  GetClientRect(param_1,&tStack_50);
  uStack_158 = 0;
  _memset(auStack_156,0,0xfe);
  puVar2 = FString::operator*((FString *)&stack0x00000008);
  appStrcpy(&uStack_158,puVar2);
  uStack_40 = 0x28;
  uStack_3c = 0x10;
  pHStack_38 = param_1;
  uStack_20 = DAT_1109c35c;
  iStack_34 = (uint)*(ushort *)(this + 0xc) + in_stack_00000014;
  puStack_1c = &uStack_158;
  if (in_stack_00000018 == (LONG *)0x0) {
    LStack_30 = tStack_50.left;
    LStack_2c = tStack_50.top;
    LStack_28 = tStack_50.right;
    LStack_24 = tStack_50.bottom;
  }
  else {
    LStack_30 = *in_stack_00000018;
    LStack_2c = in_stack_00000018[1];
    LStack_28 = in_stack_00000018[2];
    LStack_24 = in_stack_00000018[3];
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(*(HWND *)(this + 4),0x432,0,(LPARAM)&uStack_40);
  }
  else {
    SendMessageW(*(HWND *)(this + 4),0x432,0,(LPARAM)&uStack_40);
  }
  uStack_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001c26 WButton::operator=

/* public: class WButton & __thiscall WButton::operator=(class WButton const &) */

WButton * __thiscall WButton::operator=(WButton *this,WButton *param_1)

{
                    /* 0x1c26  260  ??4WButton@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  return this;
}


// ==== 11001c30 WCrashBoxDialog::OnBugReport

/* public: void __thiscall WCrashBoxDialog::OnBugReport(void) */

void __thiscall WCrashBoxDialog::OnBugReport(WCrashBoxDialog *this)

{
  ushort *puVar1;
  FString *pFVar2;
  ushort *puVar3;
  undefined4 uVar4;
  FString aFStack_24 [12];
  FString aFStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1c30  690  ?OnBugReport@WCrashBoxDialog@@QAEXXZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11060222;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = FString::operator*((FString *)(this + 0x274));
  pFVar2 = FUN_1100f100(aFStack_18,puVar1);
  uStack_4 = 0;
  puVar1 = FString::operator*(pFVar2);
  uVar4 = 0x83e;
  puVar3 = Localize((ushort *)u_IDDIALOG_CrashBox_1106b2b8,(ushort *)u_BugReportURL_1106b2e4,
                    (ushort *)u_Window_1106949c,(ushort *)0x0,0);
  FString::Printf((ushort *)aFStack_24,u__s_version__d_error__s_1106b280,puVar3,uVar4,puVar1);
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  FString::~FString(aFStack_18);
  pFVar2 = (FString *)0x0;
  puVar3 = (ushort *)&DAT_11068ff8;
  puVar1 = FString::operator*(aFStack_24);
  appLaunchURL(puVar1,puVar3,pFVar2);
  EndDialogTrue(this);
  uStack_4 = 0xffffffff;
  FString::~FString(aFStack_24);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11001c35 thunk_FUN_11039110 thunk -> 11039110

// ==== 11001c3a WCrashBoxDialog::operator=

/* public: class WCrashBoxDialog & __thiscall WCrashBoxDialog::operator=(class WCrashBoxDialog const
   &) */

WCrashBoxDialog * __thiscall
WCrashBoxDialog::operator=(WCrashBoxDialog *this,WCrashBoxDialog *param_1)

{
                    /* 0x1c3a  269  ??4WCrashBoxDialog@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  WWindow::operator=((WWindow *)(this + 0x3c),(WWindow *)(param_1 + 0x3c));
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  WButton::operator=((WButton *)(this + 0x94),(WButton *)(param_1 + 0x94));
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(this + 300) = *(undefined4 *)(param_1 + 300);
  WButton::operator=((WButton *)(this + 0x130),(WButton *)(param_1 + 0x130));
  *(undefined4 *)(this + 0x1c4) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(this + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
  WButton::operator=((WButton *)(this + 0x1cc),(WButton *)(param_1 + 0x1cc));
  *(undefined4 *)(this + 0x260) = *(undefined4 *)(param_1 + 0x260);
  *(undefined4 *)(this + 0x264) = *(undefined4 *)(param_1 + 0x264);
  FString::operator=((FString *)(this + 0x268),(FString *)(param_1 + 0x268));
  FString::operator=((FString *)(this + 0x274),(FString *)(param_1 + 0x274));
  return this;
}


// ==== 11001c3f FHeaderItem::OnChooseHSLColorButton

/* public: void __thiscall FHeaderItem::OnChooseHSLColorButton(void) */

void __thiscall FHeaderItem::OnChooseHSLColorButton(FHeaderItem *this)

{
  FPropertyItem *this_00;
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
  ushort auStack_2b8 [256];
  FString aFStack_b8 [12];
  FString aFStack_ac [12];
  FString aFStack_a0 [12];
  FString aFStack_94 [12];
  undefined1 *puStack_88;
  void *pvStack_84;
  undefined1 *puStack_80;
  int iStack_7c;
  tagCHOOSECOLORA tStack_70;
  FString aFStack_4c [12];
  FString aFStack_40 [16];
  float fStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  float fStack_8;
  
                    /* 0x1c3f  696  ?OnChooseHSLColorButton@FHeaderItem@@QAEXXZ */
  puStack_80 = &LAB_11060ea1;
  pvStack_84 = ExceptionList;
  puStack_88 = &stack0xfffffd3c;
  iStack_7c._0_1_ = 0;
  iStack_7c._1_3_ = 0;
  ExceptionList = &pvStack_84;
  (**(code **)(*(int *)this + 0x50))();
  (**(code **)(*(int *)this + 0x54))();
  uStack_24 = uStack_24 & 0xffffff00;
  uStack_28 = uStack_28 & 0xffffff00;
  uStack_2c = uStack_2c & 0xffffff00;
  for (iStack_1c = 0; iStack_1c < *(int *)(this + 0x34); iStack_1c = iStack_1c + 1) {
    this_00 = *(FPropertyItem **)(*(int *)(this + 0x30) + iStack_1c * 4);
    pFVar4 = (FString *)(**(code **)(*(int *)this_00 + 0x80))(&fStack_18);
    iStack_7c._0_1_ = 1;
    iVar5 = FString::operator==(pFVar4,(ushort *)u_LightHue_1106d8d0);
    iStack_7c = (uint)iStack_7c._1_3_ << 8;
    FString::~FString((FString *)&fStack_18);
    if (iVar5 != 0) {
      FPropertyItem::GetPropertyText(this_00,auStack_2b8);
      iVar5 = appAtoi(auStack_2b8);
      uStack_24 = CONCAT31(uStack_24._1_3_,(char)iVar5);
    }
    pFVar4 = (FString *)(**(code **)(*(int *)this_00 + 0x80))(aFStack_4c);
    iStack_7c._0_1_ = 2;
    iVar5 = FString::operator==(pFVar4,(ushort *)u_LightSaturation_1106d8a0);
    iStack_7c = (uint)iStack_7c._1_3_ << 8;
    FString::~FString(aFStack_4c);
    if (iVar5 != 0) {
      FPropertyItem::GetPropertyText(this_00,auStack_2b8);
      iVar5 = appAtoi(auStack_2b8);
      uStack_28 = CONCAT31(uStack_28._1_3_,(char)iVar5);
    }
    pFVar4 = (FString *)(**(code **)(*(int *)this_00 + 0x80))(aFStack_40);
    iStack_7c._0_1_ = 3;
    iVar5 = FString::operator==(pFVar4,(ushort *)u_LightBrightness_1106d878);
    iStack_7c._0_1_ = 0;
    FString::~FString(aFStack_40);
    if (iVar5 != 0) {
      FPropertyItem::GetPropertyText(this_00,auStack_2b8);
      iVar5 = appAtoi(auStack_2b8);
      uStack_2c = CONCAT31(uStack_2c._1_3_,(char)iVar5);
    }
  }
  uVar10 = uStack_2c;
  FromHSV(this,(uchar)&fStack_18,(uchar)uStack_24,(uchar)uStack_28);
  ptVar8 = &tStack_70;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    ptVar8->lStructSize = 0;
    ptVar8 = (tagCHOOSECOLORA *)&ptVar8->hwndOwner;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)&ptVar8->lStructSize = 0;
    ptVar8 = (tagCHOOSECOLORA *)((int)&ptVar8->lStructSize + 1);
  }
  tStack_70.lStructSize = 0x24;
  tStack_70.hwndOwner = *(HWND *)(*(int *)(this + 8) + 0x48);
  tStack_70.lpCustColors = (COLORREF *)&DAT_1109c2e0;
  fStack_8._0_1_ = (undefined1)(int)ROUND(fStack_10);
  uVar3 = fStack_8._0_1_;
  fStack_8._0_1_ = (undefined1)(int)ROUND(fStack_14);
  uVar2 = CONCAT11(uVar3,fStack_8._0_1_);
  uStack_c = (float)CONCAT22(in_FPUControlWord,(short)&tStack_70);
  fStack_8 = (float)(int)ROUND(fStack_18);
  tStack_70.rgbResult = (COLORREF)CONCAT21(uVar2,fStack_8._0_1_);
  tStack_70.Flags = 3;
  BVar6 = ChooseColorA(&tStack_70);
  if (BVar6 == 1) {
    fStack_18 = (float)(tStack_70.rgbResult & 0xff);
    fStack_30 = (float)(tStack_70.rgbResult >> 8 & 0xff);
    fStack_10 = (float)(tStack_70.rgbResult >> 0x10 & 0xff);
    fStack_14 = fStack_30;
    uStack_c = fStack_18;
    fStack_8 = fStack_10;
    ToHSL(this,&fStack_18,fStack_18,fStack_30,fStack_10,uVar10);
    for (iStack_20 = 0; iStack_20 < *(int *)(this + 0x34); iStack_20 = iStack_20 + 1) {
      piVar1 = *(int **)(*(int *)(this + 0x30) + iStack_20 * 4);
      pFVar4 = (FString *)(**(code **)(*piVar1 + 0x80))(aFStack_40);
      iStack_7c._0_1_ = 4;
      iVar5 = FString::operator==(pFVar4,(ushort *)u_LightHue_1106d8d0);
      iStack_7c._0_1_ = 0;
      FString::~FString(aFStack_40);
      if (iVar5 != 0) {
        uVar9 = FUN_1103b180(extraout_ECX,extraout_EDX);
        pFVar4 = (FString *)FString::Printf((ushort *)aFStack_4c,&DAT_1106d8c8,(int)uVar9);
        iStack_7c._0_1_ = 5;
        iVar5 = *piVar1;
        puVar7 = FString::operator*(pFVar4);
        (**(code **)(iVar5 + 0x8c))(puVar7);
        iStack_7c._0_1_ = 0;
        FString::~FString(aFStack_4c);
      }
      pFVar4 = (FString *)(**(code **)(*piVar1 + 0x80))(aFStack_ac);
      iStack_7c._0_1_ = 6;
      iVar5 = FString::operator==(pFVar4,(ushort *)u_LightSaturation_1106d8a0);
      iStack_7c._0_1_ = 0;
      FString::~FString(aFStack_ac);
      if (iVar5 != 0) {
        uVar9 = FUN_1103b180(extraout_ECX_00,extraout_EDX_00);
        pFVar4 = (FString *)FString::Printf((ushort *)aFStack_a0,&DAT_1106d8c8,(int)uVar9);
        iStack_7c._0_1_ = 7;
        iVar5 = *piVar1;
        puVar7 = FString::operator*(pFVar4);
        (**(code **)(iVar5 + 0x8c))(puVar7);
        iStack_7c._0_1_ = 0;
        FString::~FString(aFStack_a0);
      }
      pFVar4 = (FString *)(**(code **)(*piVar1 + 0x80))(aFStack_b8);
      iStack_7c._0_1_ = 8;
      iVar5 = FString::operator==(pFVar4,(ushort *)u_LightBrightness_1106d878);
      iStack_7c._0_1_ = 0;
      FString::~FString(aFStack_b8);
      if (iVar5 != 0) {
        uVar9 = FUN_1103b180(extraout_ECX_01,extraout_EDX_01);
        pFVar4 = (FString *)FString::Printf((ushort *)aFStack_94,&DAT_1106d8c8,(int)uVar9);
        iStack_7c._0_1_ = 9;
        iVar5 = *piVar1;
        puVar7 = FString::operator*(pFVar4);
        (**(code **)(iVar5 + 0x8c))(puVar7);
        iStack_7c._0_1_ = 0;
        FString::~FString(aFStack_94);
      }
    }
    InvalidateRect(*(HWND *)(*(int *)(this + 8) + 0x48),(RECT *)0x0,0);
    UpdateWindow(*(HWND *)(*(int *)(this + 8) + 0x48));
  }
  (**(code **)(*(int *)this + 0x28))();
  ExceptionList = pvStack_84;
  return;
}


// ==== 11001c44 WButton::SetCheck

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: void __thiscall WButton::SetCheck(int) */

void __thiscall WButton::SetCheck(WButton *this,int param_1)

{
  HWND hWnd;
  int iVar1;
  char *pcVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1c44  919  ?SetCheck@WButton@@QAEXH@Z */
  puStack_c = &LAB_1105fa50;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    iVar1 = winGetSizeANSI((ushort *)0x0);
    if (iVar1 == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)0x0);
      pcVar2 = &stack0xffffffd8;
    }
    hWnd = *(HWND *)(this + 4);
    iVar1 = winGetSizeANSI((ushort *)0x0);
    pcVar2 = winToANSI(pcVar2,(ushort *)0x0,iVar1);
    SendMessageA(hWnd,0xf1,param_1,(LPARAM)pcVar2);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0xf1,param_1,0);
  }
  *(uint *)(this + 0x8c) = (uint)(param_1 == 1);
  InvalidateRect(*(HWND *)(this + 4),(RECT *)0x0,1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001c49 WListBox::FindItem

/* public: int __thiscall WListBox::FindItem(void const *) */

int __thiscall WListBox::FindItem(WListBox *this,void *param_1)

{
  LRESULT LVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1c49  457  ?FindItem@WListBox@@QAEHPBX@Z */
  puStack_c = &LAB_1105fef0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &pvStack_10;
    LVar1 = SendMessageW(*(HWND *)(this + 4),399,0xffffffff,(LPARAM)param_1);
    ExceptionList = pvStack_10;
    return LVar1;
  }
  ExceptionList = &pvStack_10;
  LVar1 = SendMessageA(*(HWND *)(this + 4),399,0xffffffff,(LPARAM)param_1);
  ExceptionList = pvStack_10;
  return LVar1;
}


// ==== 11001c53 WWindow::OnMouseMove

/* public: virtual void __thiscall WWindow::OnMouseMove(unsigned long,struct FPoint) */

void __thiscall WWindow::OnMouseMove(void)

{
                    /* 0x1c53  793  ?OnMouseMove@WWindow@@UAEXKUFPoint@@@Z */
  return;
}


// ==== 11001c62 WEdit::SetReadOnly

/* public: void __thiscall WEdit::SetReadOnly(int) */

void __thiscall WEdit::SetReadOnly(WEdit *this,int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1c62  950  ?SetReadOnly@WEdit@@QAEXH@Z */
  puStack_c = &LAB_1105fbf0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 4) == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert(&DAT_11068b4c,s___Controls_cpp_11068b54,0x5f5);
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(*(HWND *)(this + 4),0xcf,param_1,0);
  }
  else {
    SendMessageW(*(HWND *)(this + 4),0xcf,param_1,0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001c67 WCheckListBox::WCheckListBox

/* public: __thiscall WCheckListBox::WCheckListBox(class WCheckListBox const &) */

WCheckListBox * __thiscall WCheckListBox::WCheckListBox(WCheckListBox *this,WCheckListBox *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1c67  55  ??0WCheckListBox@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063618;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WListBox::WListBox((WListBox *)this,(WListBox *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001c71 WListBox::InsertString

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: void __thiscall WListBox::InsertString(int,unsigned short const *) */

void __thiscall WListBox::InsertString(WListBox *this,int param_1,ushort *param_2)

{
  HWND hWnd;
  int iVar1;
  char *pcVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1c71  651  ?InsertString@WListBox@@QAEXHPBG@Z */
  puStack_c = &LAB_1105fe80;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    iVar1 = winGetSizeANSI(param_2);
    if (iVar1 == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      winGetSizeANSI(param_2);
      pcVar2 = &stack0xffffffd8;
    }
    hWnd = *(HWND *)(this + 4);
    iVar1 = winGetSizeANSI(param_2);
    pcVar2 = winToANSI(pcVar2,param_2,iVar1);
    SendMessageA(hWnd,0x181,param_1,(LPARAM)pcVar2);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0x181,param_1,(LPARAM)param_2);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001c76 WTimeScrollBar::OnSetCursor

/* public: virtual int __thiscall WTimeScrollBar::OnSetCursor(void) */

int __thiscall WTimeScrollBar::OnSetCursor(WTimeScrollBar *this)

{
  HCURSOR hCursor;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1c76  826  ?OnSetCursor@WTimeScrollBar@@UAEHXZ */
  puStack_c = &LAB_11061aa0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  }
  else {
    ExceptionList = &pvStack_10;
    hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  }
  SetCursor(hCursor);
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 11001c7b thunk_FUN_11006cf0 thunk -> 11006cf0

// ==== 11001c80 WUDNWindow::WUDNWindow

/* public: __thiscall WUDNWindow::WUDNWindow(class WUDNWindow const &) */

WUDNWindow * __thiscall WUDNWindow::WUDNWindow(WUDNWindow *this,WUDNWindow *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1c80  166  ??0WUDNWindow@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062b68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow::WWindow((WWindow *)this,(WWindow *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001c85 InitWindowing

/* void __cdecl InitWindowing(void) */

void __cdecl InitWindowing(void)

{
  UPackage *pUVar1;
  USubsystem *pUVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1c85  648  ?InitWindowing@@YAXXZ */
  puStack_c = &LAB_110621e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  uVar4 = 0;
  ExceptionList = &pvStack_10;
  FName::FName((FName *)&stack0xffffffcc,0);
  uVar3 = extraout_var;
  pUVar1 = UObject::GetTransientPackage();
  pUVar2 = (USubsystem *)thunk_FUN_11022c10(0x38,pUVar1,uVar3,uVar4);
  if (pUVar2 == (USubsystem *)0x0) {
    pUVar2 = (USubsystem *)0x0;
  }
  else {
    pUVar2 = thunk_FUN_1102b200(pUVar2);
  }
  *(USubsystem **)GWindowManager_exref = pUVar2;
  UObject::AddToRoot(*(UObject **)GWindowManager_exref);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001c8f WProgressBar::WProgressBar

/* public: __thiscall WProgressBar::WProgressBar(class WProgressBar const &) */

WProgressBar * __thiscall WProgressBar::WProgressBar(WProgressBar *this,WProgressBar *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1c8f  116  ??0WProgressBar@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063518;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,(WControl *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001c94 thunk_FUN_1102bd10 thunk -> 1102bd10

// ==== 11001c99 WScrollBar::WScrollBar

/* public: __thiscall WScrollBar::WScrollBar(void) */

WScrollBar * __thiscall WScrollBar::WScrollBar(WScrollBar *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1c99  135  ??0WScrollBar@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062c28;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001ca8 FTreeItem::OnItemSetFocus

/* public: virtual void __thiscall FTreeItem::OnItemSetFocus(void) */

void __thiscall FTreeItem::OnItemSetFocus(FTreeItem *this)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1ca8  758  ?OnItemSetFocus@FTreeItem@@UAEXXZ */
  puStack_c = &LAB_11060310;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0xc) != 0) {
    ExceptionList = &pvStack_10;
    iVar1 = (**(code **)(**(int **)(this + 8) + 0xe8))();
    if (*(int *)(this + 0xc) != iVar1) {
      (**(code **)(**(int **)(this + 0xc) + 0x2c))();
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001cad WGroupBox::~WGroupBox

/* public: virtual __thiscall WGroupBox::~WGroupBox(void) */

void __thiscall WGroupBox::~WGroupBox(WGroupBox *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1cad  208  ??1WGroupBox@@UAE@XZ */
  puStack_8 = &LAB_11062698;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WControl::~WControl((WControl *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11001cb2 FCategoryItem::Serialize

/* public: virtual void __thiscall FCategoryItem::Serialize(class FArchive &) */

void __thiscall FCategoryItem::Serialize(FCategoryItem *this,FArchive *param_1)

{
  int *piVar1;
  FCategoryItem *pFVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1cb2  908  ?Serialize@FCategoryItem@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_11060ef0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FTreeItem::Serialize((FTreeItem *)this,param_1);
  pFVar2 = this + 0x3c;
  piVar1 = (int *)(**(code **)(*(int *)param_1 + 0x1c))(pFVar2,this + 0x40);
  thunk_FUN_110132b0(piVar1,pFVar2);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001cb7 WPropertySheet::OpenWindow

/* public: void __thiscall WPropertySheet::OpenWindow(int,int,unsigned long) */

void __thiscall
WPropertySheet::OpenWindow(WPropertySheet *this,int param_1,int param_2,ulong param_3)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1cb7  869  ?OpenWindow@WPropertySheet@@QAEXHHK@Z */
  puStack_c = &LAB_1105f9d0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(this + 0x54) = param_2;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)0x0,
             -(uint)(param_1 != 0) & 0x10000000 | param_3 | 0x40000000,0,0,0,0,
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


// ==== 11001cbc WCheckBox::GetPackageName

/* public: virtual unsigned short const * __thiscall WCheckBox::GetPackageName(void) */

ushort * __thiscall WCheckBox::GetPackageName(WCheckBox *this)

{
                    /* 0x1cbc  525  ?GetPackageName@WCheckBox@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11001cc6 thunk_FUN_1101a3f0 thunk -> 1101a3f0

// ==== 11001ccb WTreeView::~WTreeView

/* public: virtual __thiscall WTreeView::~WTreeView(void) */

void __thiscall WTreeView::~WTreeView(WTreeView *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1ccb  233  ??1WTreeView@@UAE@XZ */
  puStack_8 = &LAB_11062c88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WControl::~WControl((WControl *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11001cd0 WEdit::WEdit

/* public: __thiscall WEdit::WEdit(void) */

WEdit * __thiscall WEdit::WEdit(WEdit *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1cd0  90  ??0WEdit@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062e58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined ***)(this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001cda WCoolButton::WCoolButton

/* public: __thiscall WCoolButton::WCoolButton(class WWindow *,int,struct FDelegate,unsigned long)
    */

WCoolButton * __thiscall
WCoolButton::WCoolButton
          (WCoolButton *this,undefined4 param_1,undefined4 param_2,undefined4 param_4,void *param_5)

{
  undefined4 unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1cda  74  ??0WCoolButton@@QAE@PAVWWindow@@HUFDelegate@@K@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110613e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WButton::WButton((WButton *)this,param_1,param_2);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = unaff_retaddr;
  ExceptionList = param_5;
  return this;
}


// ==== 11001cdf WUrlButton::WUrlButton

/* public: __thiscall WUrlButton::WUrlButton(class WUrlButton const &) */

WUrlButton * __thiscall WUrlButton::WUrlButton(WUrlButton *this,WUrlButton *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1cdf  168  ??0WUrlButton@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062df7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WCoolButton::WCoolButton((WCoolButton *)this,(WCoolButton *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  FString::FString((FString *)(this + 0x9c),(FString *)(param_1 + 0x9c));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001ce4 thunk_FUN_1102e930 thunk -> 1102e930

// ==== 11001ce9 WWindow::GetWindowRect

/* public: struct FRect __thiscall WWindow::GetWindowRect(int)const  */

int __thiscall WWindow::GetWindowRect(WWindow *this,int param_1)

{
  LONG *pLVar1;
  int in_stack_00000008;
  tagRECT tStack_30;
  LONG LStack_20;
  LONG LStack_1c;
  LONG LStack_18;
  LONG LStack_14;
  FRect aFStack_10 [16];
  
                    /* 0x1ce9  643  ?GetWindowRect@WWindow@@QBE?AUFRect@@H@Z */
  ::GetWindowRect(*(HWND *)(this + 4),&tStack_30);
  if (in_stack_00000008 != 0) {
    if (*(WWindow **)(this + 0x14) == (WWindow *)0x0) {
      LStack_20 = tStack_30.left;
      LStack_18 = tStack_30.right;
      LStack_1c = tStack_30.top;
      LStack_14 = tStack_30.bottom;
      pLVar1 = &LStack_20;
    }
    else {
      LStack_20 = tStack_30.left;
      LStack_1c = tStack_30.top;
      LStack_18 = tStack_30.right;
      LStack_14 = tStack_30.bottom;
      pLVar1 = (LONG *)ScreenToClient(*(WWindow **)(this + 0x14),aFStack_10);
    }
    *(LONG *)param_1 = *pLVar1;
    *(LONG *)(param_1 + 4) = pLVar1[1];
    *(LONG *)(param_1 + 8) = pLVar1[2];
    *(LONG *)(param_1 + 0xc) = pLVar1[3];
    return param_1;
  }
  *(LONG *)param_1 = tStack_30.left;
  *(LONG *)(param_1 + 4) = tStack_30.top;
  *(LONG *)(param_1 + 8) = tStack_30.right;
  *(LONG *)(param_1 + 0xc) = tStack_30.bottom;
  return param_1;
}


// ==== 11001cee thunk_FUN_110112c0 thunk -> 110112c0

// ==== 11001cf3 WListBox::AddItem

/* public: int __thiscall WListBox::AddItem(void const *) */

int __thiscall WListBox::AddItem(WListBox *this,void *param_1)

{
  LRESULT LVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1cf3  396  ?AddItem@WListBox@@QAEHPBX@Z */
  puStack_c = &LAB_1105fed0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &pvStack_10;
    LVar1 = SendMessageW(*(HWND *)(this + 4),0x180,0,(LPARAM)param_1);
    ExceptionList = pvStack_10;
    return LVar1;
  }
  ExceptionList = &pvStack_10;
  LVar1 = SendMessageA(*(HWND *)(this + 4),0x180,0,(LPARAM)param_1);
  ExceptionList = pvStack_10;
  return LVar1;
}


// ==== 11001cf8 thunk_FUN_11022730 thunk -> 11022730

// ==== 11001cfd WCrashBoxDialog::EndDialogTrue

/* public: void __thiscall WCrashBoxDialog::EndDialogTrue(void) */

void __thiscall WCrashBoxDialog::EndDialogTrue(WCrashBoxDialog *this)

{
  HWND hWnd;
  HDC hdc;
  int iVar1;
  undefined2 uVar2;
  undefined2 auStack_600 [256];
  undefined2 auStack_400 [256];
  undefined2 auStack_200 [256];
  
                    /* 0x1cfd  444  ?EndDialogTrue@WCrashBoxDialog@@QAEXXZ */
  hWnd = GetDesktopWindow();
  hdc = GetDC(hWnd);
  iVar1 = 0;
  do {
    uVar2 = (undefined2)(iVar1 << 8);
    auStack_200[iVar1] = uVar2;
    auStack_400[iVar1] = uVar2;
    auStack_600[iVar1] = uVar2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  SetDeviceGammaRamp(hdc,auStack_600);
  WDialog::EndDialogTrue((WDialog *)this);
  return;
}


// ==== 11001d02 WScrollBar::WScrollBar

/* public: __thiscall WScrollBar::WScrollBar(class WWindow *,int,long (__stdcall*)(struct HWND__
   *,unsigned int,unsigned int,long)) */

WScrollBar * __thiscall
WScrollBar::WScrollBar
          (WScrollBar *this,WWindow *param_1,int param_2,
          _func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1d02  134  ??0WScrollBar@@QAE@PAVWWindow@@HP6GJPAUHWND__@@IIJ@Z@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062c48;
  pvStack_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = SuperProc;
  }
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,param_1,param_2,param_3);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001d07 FPropertyItem::Serialize

/* public: virtual void __thiscall FPropertyItem::Serialize(class FArchive &) */

void __thiscall FPropertyItem::Serialize(FPropertyItem *this,FArchive *param_1)

{
  int *piVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1d07  911  ?Serialize@FPropertyItem@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_11060c30;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FTreeItem::Serialize((FTreeItem *)this,param_1);
  piVar1 = (int *)thunk_FUN_11013950((int *)param_1,this + 0x3c);
  (**(code **)(*piVar1 + 0x1c))(this + 0x70);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001d0c WRichEdit::SetReadOnly

/* public: void __thiscall WRichEdit::SetReadOnly(int) */

void __thiscall WRichEdit::SetReadOnly(WRichEdit *this,int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1d0c  951  ?SetReadOnly@WRichEdit@@QAEXH@Z */
  puStack_c = &LAB_1105fca0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 4) == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert(&DAT_11068b4c,s___Controls_cpp_11068b54,0x6a5);
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(*(HWND *)(this + 4),0xcf,param_1,0);
  }
  else {
    SendMessageW(*(HWND *)(this + 4),0xcf,param_1,0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001d16 WWindow::RegisterWindowClass

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: static long (__stdcall*__cdecl WWindow::RegisterWindowClass(unsigned short const
   *,unsigned long))(struct HWND__ *,unsigned int,unsigned int,long) */

_func_long_HWND___ptr_uint_uint_long * __cdecl
WWindow::RegisterWindowClass(ushort *param_1,ulong param_2)

{
  ATOM AVar1;
  int iVar2;
  WNDCLASSEXW *pWVar3;
  char *pcVar4;
  WNDCLASSEXW WStack_80;
  WNDCLASSEXW WStack_50;
  WNDCLASSEXW *pWStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1d16  896  ?RegisterWindowClass@WWindow@@SAP6GJPAUHWND__@@IIJ@ZPBGK@Z */
  puStack_c = &LAB_11061de0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff74;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pWStack_18 = &WStack_80;
    pWVar3 = pWStack_18;
    ExceptionList = &pvStack_10;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pWVar3->cbSize = 0;
      pWVar3 = (WNDCLASSEXW *)&pWVar3->style;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)&pWVar3->cbSize = 0;
      pWVar3 = (WNDCLASSEXW *)((int)&pWVar3->cbSize + 1);
    }
    WStack_80.cbSize = 0x30;
    WStack_80.style = param_2;
    WStack_80.lpfnWndProc = StaticWndProc;
    WStack_80.hInstance = hInstanceWindow;
    if (*(int *)GUnicodeOS_exref == 0) {
      WStack_80.hIcon =
           LoadIconA(hInstanceWindow,
                     (LPCSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    }
    else {
      puStack_14 = &stack0xffffff74;
      WStack_80.hIcon =
           LoadIconW(hInstanceWindow,
                     (LPCWSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    }
    iVar2 = winGetSizeANSI(param_1);
    if (iVar2 == 0) {
      pcVar4 = (char *)0x0;
    }
    else {
      winGetSizeANSI(param_1);
      puStack_14 = &stack0xffffff74;
      pcVar4 = &stack0xffffff74;
    }
    iVar2 = winGetSizeANSI(param_1);
    WStack_80.lpszClassName = (LPCWSTR)winToANSI(pcVar4,param_1,iVar2);
    if (*(int *)GUnicodeOS_exref == 0) {
      WStack_80.hIconSm =
           LoadIconA(hInstanceWindow,
                     (LPCSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    }
    else {
      WStack_80.hIconSm =
           LoadIconW(hInstanceWindow,
                     (LPCWSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    }
    AVar1 = RegisterClassExA((WNDCLASSEXA *)&WStack_80);
    if (AVar1 != 0) {
      ExceptionList = pvStack_10;
      return (_func_long_HWND___ptr_uint_uint_long *)0x0;
    }
    iVar2 = 0x1d7;
    pcVar4 = s_RegisterClassExA___Cls___1106ffa8;
  }
  else {
    pWStack_18 = &WStack_50;
    pWVar3 = pWStack_18;
    ExceptionList = &pvStack_10;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pWVar3->cbSize = 0;
      pWVar3 = (WNDCLASSEXW *)&pWVar3->style;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)&pWVar3->cbSize = 0;
      pWVar3 = (WNDCLASSEXW *)((int)&pWVar3->cbSize + 1);
    }
    WStack_50.cbSize = 0x30;
    WStack_50.style = param_2;
    WStack_50.lpfnWndProc = StaticWndProc;
    WStack_50.hInstance = hInstanceWindow;
    if (*(int *)GUnicodeOS_exref == 0) {
      puStack_14 = &stack0xffffff74;
      WStack_50.hIcon =
           LoadIconA(hInstanceWindow,
                     (LPCSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    }
    else {
      puStack_14 = &stack0xffffff74;
      WStack_50.hIcon =
           LoadIconW(hInstanceWindow,
                     (LPCWSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    }
    WStack_50.lpszClassName = (LPCWSTR)param_1;
    if (*(int *)GUnicodeOS_exref == 0) {
      WStack_50.hIconSm =
           LoadIconA(hInstanceWindow,
                     (LPCSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    }
    else {
      WStack_50.hIconSm =
           LoadIconW(hInstanceWindow,
                     (LPCWSTR)((-(uint)(*(int *)GIsEditor_exref != 0) & 0x6ed4) + 0x80));
    }
    AVar1 = RegisterClassExW(&WStack_50);
    if (AVar1 != 0) {
      ExceptionList = pvStack_10;
      return (_func_long_HWND___ptr_uint_uint_long *)0x0;
    }
    iVar2 = 0x1c9;
    pcVar4 = s_RegisterClassExW___Cls___1106ffc8;
  }
  appFailAssert(pcVar4,s___Window_cpp_1106f624,iVar2);
  ExceptionList = pvStack_10;
  return (_func_long_HWND___ptr_uint_uint_long *)0x0;
}


// ==== 11001d1b thunk_FUN_1101dc40 thunk -> 1101dc40

// ==== 11001d20 WSplitterPane::~WSplitterPane

/* public: virtual __thiscall WSplitterPane::~WSplitterPane(void) */

void __thiscall WSplitterPane::~WSplitterPane(WSplitterPane *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1d20  225  ??1WSplitterPane@@UAE@XZ */
  puStack_8 = &LAB_110641e8;
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


// ==== 11001d25 WTimeScrollBar::GetPos

/* public: int __thiscall WTimeScrollBar::GetPos(void) */

int __thiscall WTimeScrollBar::GetPos(WTimeScrollBar *this)

{
  undefined4 in_EDX;
  ulonglong uVar1;
  
                    /* 0x1d25  571  ?GetPos@WTimeScrollBar@@QAEHXZ */
  uVar1 = FUN_1103b180(this,in_EDX);
  return (int)uVar1;
}


// ==== 11001d2a thunk_FUN_11015cb0 thunk -> 11015cb0

// ==== 11001d2f FCategoryItem::GetCaption

/* public: virtual class FString __thiscall FCategoryItem::GetCaption(void)const  */

FString * __thiscall FCategoryItem::GetCaption(FCategoryItem *this)

{
  ushort *puVar1;
  FString *in_stack_00000004;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1d2f  479  ?GetCaption@FCategoryItem@@UBE?AVFString@@XZ */
  puStack_c = &LAB_110605ca;
  pvStack_10 = ExceptionList;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  puVar1 = FName::operator*((FName *)(this + 0x3c));
  FString::FString(in_stack_00000004,puVar1);
  ExceptionList = pvStack_10;
  return in_stack_00000004;
}


// ==== 11001d39 WProgressBar::operator=

/* public: class WProgressBar & __thiscall WProgressBar::operator=(class WProgressBar const &) */

WProgressBar * __thiscall WProgressBar::operator=(WProgressBar *this,WProgressBar *param_1)

{
                    /* 0x1d39  282  ??4WProgressBar@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  return this;
}


// ==== 11001d3e WDialog::LocalizeText

/* public: virtual void __thiscall WDialog::LocalizeText(unsigned short const *,unsigned short const
   *) */

void __thiscall WDialog::LocalizeText(WDialog *this,ushort *param_1,ushort *param_2)

{
  ushort *puStack_28;
  ushort *puStack_24;
  WDialog *pWStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1d3e  671  ?LocalizeText@WDialog@@UAEXPBG0@Z */
  puStack_c = &LAB_11061fa0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  uStack_8 = 0;
  puStack_28 = param_1;
  puStack_24 = param_2;
  ExceptionList = &pvStack_10;
  pWStack_20 = this;
  EnumChildWindows(*(HWND *)(this + 4),LocalizeTextEnumProc,(LPARAM)&puStack_28);
  LocalizeTextEnumProc(*(HWND__ **)(this + 4),(long)&puStack_28);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001d43 WBitmapButton::WBitmapButton

/* public: __thiscall WBitmapButton::WBitmapButton(class WWindow *,int,struct FDelegate,long
   (__stdcall*)(struct HWND__ *,unsigned int,unsigned int,long)) */

WBitmapButton * __thiscall
WBitmapButton::WBitmapButton(WBitmapButton *this,undefined4 param_1,undefined4 param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1d43  47
                       ??0WBitmapButton@@QAE@PAVWWindow@@HUFDelegate@@P6GJPAUHWND__@@IIJ@Z@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110628d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WButton::WButton((WButton *)this,param_1,param_2);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 200) = 0;
  ExceptionList = FDelegate::vftable;
  return this;
}


// ==== 11001d48 FPropertyItem::SetFocusToItem

/* public: virtual void __thiscall FPropertyItem::SetFocusToItem(void) */

void __thiscall FPropertyItem::SetFocusToItem(FPropertyItem *this)

{
  int iVar1;
  HWND hWnd;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1d48  928  ?SetFocusToItem@FPropertyItem@@UAEXXZ */
  puStack_c = &LAB_11060cb0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iVar1 = *(int *)(this + 0x48);
  if ((iVar1 == 0) && (iVar1 = *(int *)(this + 0x4c), iVar1 == 0)) {
    if (*(int *)(this + 0x50) == 0) {
      return;
    }
    hWnd = *(HWND *)(*(int *)(this + 0x50) + 4);
  }
  else {
    hWnd = *(HWND *)(iVar1 + 4);
  }
  ExceptionList = &pvStack_10;
  SetFocus(hWnd);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001d4d WTimeScrollBar::GetPackageName

/* public: virtual unsigned short const * __thiscall WTimeScrollBar::GetPackageName(void) */

ushort * __thiscall WTimeScrollBar::GetPackageName(WTimeScrollBar *this)

{
                    /* 0x1d4d  558  ?GetPackageName@WTimeScrollBar@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11001d52 thunk_FUN_11033de0 thunk -> 11033de0

// ==== 11001d57 WThinScrollBar::OnLeftButtonUp

/* public: virtual void __thiscall WThinScrollBar::OnLeftButtonUp(void) */

void __thiscall WThinScrollBar::OnLeftButtonUp(WThinScrollBar *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1d57  776  ?OnLeftButtonUp@WThinScrollBar@@UAEXXZ */
  puStack_c = &LAB_11061a70;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(HBRUSH__ **)(this + 0x58) = hBrushCyanLow;
  ReleaseCapture();
  InvalidateRect(*(HWND *)(this + 4),(RECT *)0x0,0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001d5c thunk_FUN_1102ac20 thunk -> 1102ac20

// ==== 11001d61 WTimeScrollBar::OnLeftButtonUp

/* public: virtual void __thiscall WTimeScrollBar::OnLeftButtonUp(void) */

void __thiscall WTimeScrollBar::OnLeftButtonUp(WTimeScrollBar *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1d61  777  ?OnLeftButtonUp@WTimeScrollBar@@UAEXXZ */
  puStack_c = &LAB_11061a90;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  ReleaseCapture();
  InvalidateRect(*(HWND *)(this + 4),(RECT *)0x0,0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001d66 WWindow::OnVScroll

/* public: virtual void __thiscall WWindow::OnVScroll(unsigned int,long) */

void __thiscall WWindow::OnVScroll(WWindow *this,uint param_1,long param_2)

{
                    /* 0x1d66  847  ?OnVScroll@WWindow@@UAEXIJ@Z */
  return;
}


// ==== 11001d6b WWindow::~WWindow

/* public: virtual __thiscall WWindow::~WWindow(void) */

void __thiscall WWindow::~WWindow(WWindow *this)

{
  WWindow *pWStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1d6b  236  ??1WWindow@@UAE@XZ */
  puStack_c = &LAB_1106244b;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd0;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = vftable;
  uStack_8 = 1;
  MaybeDestroy(this);
  pWStack_18 = this;
  thunk_FUN_1102e490(&_DeleteWindows,(int *)&pWStack_18);
  uStack_8 = 0xffffffff;
  thunk_FUN_1100e550((FArray *)(this + 0x20));
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001d70 WRichEdit::InterceptControlCommand

/* public: virtual int __thiscall WRichEdit::InterceptControlCommand(unsigned int,unsigned int,long)
    */

int __thiscall
WRichEdit::InterceptControlCommand(WRichEdit *this,uint param_1,uint param_2,long param_3)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1d70  658  ?InterceptControlCommand@WRichEdit@@UAEHIIJ@Z */
  puStack_c = &LAB_1105f780;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (param_2 >> 0x10 == 0x300) {
    ExceptionList = &pvStack_10;
    (*(code *)**(undefined4 **)(this + 0x40))();
    ExceptionList = pvStack_10;
    return 1;
  }
  return 0;
}


// ==== 11001d75 FPropertyItem::GetCaption

/* public: virtual class FString __thiscall FPropertyItem::GetCaption(void)const  */

FString * __thiscall FPropertyItem::GetCaption(FPropertyItem *this)

{
  ushort *puVar1;
  FString *in_stack_00000004;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1d75  483  ?GetCaption@FPropertyItem@@UBE?AVFString@@XZ */
  puStack_c = &LAB_1106046a;
  pvStack_10 = ExceptionList;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  puVar1 = FName::operator*((FName *)(this + 0x70));
  FString::FString(in_stack_00000004,puVar1);
  ExceptionList = pvStack_10;
  return in_stack_00000004;
}


// ==== 11001d7a WSplitterContainer::OnDestroy

/* public: virtual void __thiscall WSplitterContainer::OnDestroy(void) */

void __thiscall WSplitterContainer::OnDestroy(WSplitterContainer *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1d7a  721  ?OnDestroy@WSplitterContainer@@UAEXXZ */
  puStack_c = &LAB_110625a0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::OnDestroy((WWindow *)this);
  if (*(int **)(this + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x3c) + 4))(1);
  }
  if (*(int **)(this + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x40) + 4))(1);
  }
  if (*(int **)(this + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x44) + 4))(1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001d7f WEdit::GetModify

/* public: int __thiscall WEdit::GetModify(void) */

int __thiscall WEdit::GetModify(WEdit *this)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1d7f  520  ?GetModify@WEdit@@QAEHXZ */
  puStack_c = &LAB_1105fc50;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    iVar1 = SendMessageA(*(HWND *)(this + 4),0xb8,0,0);
  }
  else {
    ExceptionList = &pvStack_10;
    iVar1 = SendMessageW(*(HWND *)(this + 4),0xb8,0,0);
  }
  ExceptionList = pvStack_10;
  return (uint)(iVar1 != 0);
}


// ==== 11001d89 FConfigItem::FConfigItem

/* public: __thiscall FConfigItem::FConfigItem(class FConfigItem const &) */

FConfigItem * __thiscall FConfigItem::FConfigItem(FConfigItem *this,FConfigItem *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1d89  8  ??0FConfigItem@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063ec4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FHeaderItem::FHeaderItem((FHeaderItem *)this,(FHeaderItem *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  FPreferencesInfo::FPreferencesInfo
            ((FPreferencesInfo *)(this + 0x3c),(FPreferencesInfo *)(param_1 + 0x3c));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001d8e WSplitter::OnSetCursor

/* public: virtual int __thiscall WSplitter::OnSetCursor(void) */

int __thiscall WSplitter::OnSetCursor(WSplitter *this)

{
  HCURSOR hCursor;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1d8e  824  ?OnSetCursor@WSplitter@@UAEHXZ */
  puStack_c = &LAB_11061b50;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    hCursor = LoadCursorA(hInstanceWindow,(LPCSTR)((*(int *)(this + 0x3c) != 0) + 0x44e));
  }
  else {
    ExceptionList = &pvStack_10;
    hCursor = LoadCursorW(hInstanceWindow,(LPCWSTR)((*(int *)(this + 0x3c) != 0) + 0x44e));
  }
  SetCursor(hCursor);
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 11001d98 WWindow::_CloseWindow

/* public: void __thiscall WWindow::_CloseWindow(void) */

void __thiscall WWindow::_CloseWindow(WWindow *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1d98  1025  ?_CloseWindow@WWindow@@QAEXXZ */
  puStack_c = &LAB_11061e50;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 4) == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert(&DAT_11068b4c,s___Window_cpp_1106f624,0x37e);
  }
  DestroyWindow(*(HWND *)(this + 4));
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001da7 thunk_FUN_11014430 thunk -> 11014430

// ==== 11001dac thunk_FUN_110307b0 thunk -> 110307b0

// ==== 11001db1 WPictureButton::WPictureButton

/* public: __thiscall WPictureButton::WPictureButton(class WWindow *) */

WPictureButton * __thiscall WPictureButton::WPictureButton(WPictureButton *this,WWindow *param_1)

{
  void *unaff_ESI;
  WPictureButton *pWStack_20;
  WWindow *pWStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1db1  115  ??0WPictureButton@@QAE@PAVWWindow@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062ad4;
  pvStack_c = ExceptionList;
  pWStack_1c = param_1;
  ExceptionList = &pvStack_c;
  pWStack_20 = this;
  FName::FName((FName *)&pWStack_20,(ushort *)u_PictureButton_11071e44,1);
  WWindow::WWindow((WWindow *)this);
  pvStack_c = (void *)0x0;
  *(undefined ***)this = vftable;
  FString::FString((FString *)(this + 0x74));
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11001dbb WListBox::WListBox

/* public: __thiscall WListBox::WListBox(class WListBox const &) */

WListBox * __thiscall WListBox::WListBox(WListBox *this,WListBox *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1dbb  102  ??0WListBox@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063598;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,(WControl *)param_1);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined ***)(this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined ***)(this + 0x58) = FDelegate::vftable;
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined ***)(this + 100) = FDelegate::vftable;
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined ***)(this + 0x70) = FDelegate::vftable;
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined ***)(this + 0x7c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001dc0 WListBox::GetSelectedCount

/* public: int __thiscall WListBox::GetSelectedCount(void) */

int __thiscall WListBox::GetSelectedCount(WListBox *this)

{
  LRESULT LVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1dc0  585  ?GetSelectedCount@WListBox@@QAEHXZ */
  puStack_c = &LAB_1105fe60;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &pvStack_10;
    LVar1 = SendMessageW(*(HWND *)(this + 4),400,0,0);
    ExceptionList = pvStack_10;
    return LVar1;
  }
  ExceptionList = &pvStack_10;
  LVar1 = SendMessageA(*(HWND *)(this + 4),400,0,0);
  ExceptionList = pvStack_10;
  return LVar1;
}


// ==== 11001dc5 WSplitterPane::OpenWindow

/* public: void __thiscall WSplitterPane::OpenWindow(void) */

void __thiscall WSplitterPane::OpenWindow(WSplitterPane *this)

{
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1dc5  874  ?OpenWindow@WSplitterPane@@QAEXXZ */
  puStack_c = &LAB_11062300;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)0x0,0x50000000,0,0,0,0,
             *(HWND__ **)(*(int *)(this + 0x14) + 4),(HMENU__ *)0x0,DAT_1109c35c);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar1 = GetStockObject(0x11);
    SendMessageA(*(HWND *)(this + 4),0x30,(WPARAM)pvVar1,lParam);
  }
  else {
    pvVar1 = GetStockObject(0x11);
    SendMessageW(*(HWND *)(this + 4),0x30,(WPARAM)pvVar1,lParam);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001dca FObjectConfigItem::OnResetToDefaultsButton

/* public: void __thiscall FObjectConfigItem::OnResetToDefaultsButton(void) */

void __thiscall FObjectConfigItem::OnResetToDefaultsButton(FObjectConfigItem *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1dca  812  ?OnResetToDefaultsButton@FObjectConfigItem@@QAEXXZ */
  puStack_c = &LAB_11061120;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  LazyLoadClass(this);
  if (*(UClass **)(this + 0x60) != (UClass *)0x0) {
    UObject::ResetConfig(*(UClass **)(this + 0x60));
    InvalidateRect(*(HWND *)(*(int *)(this + 8) + 0x48),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(*(int *)(this + 8) + 0x48));
  }
  (**(code **)(*(int *)this + 0x28))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001dcf WEditTerminal::OnUndo

/* public: virtual void __thiscall WEditTerminal::OnUndo(void) */

void __thiscall WEditTerminal::OnUndo(WEditTerminal *this)

{
  wchar_t *pwStack_4;
  
                    /* 0x1dcf  844  ?OnUndo@WEditTerminal@@UAEXXZ */
  pwStack_4 = u_NoRoute_1106b458;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&pwStack_4,&DAT_1107a670);
}


// ==== 11001dd4 WSplitter::GetWindowClassName

/* public: virtual void __thiscall WSplitter::GetWindowClassName(unsigned short *) */

void __thiscall WSplitter::GetWindowClassName(WSplitter *this,ushort *param_1)

{
                    /* 0x1dd4  628  ?GetWindowClassName@WSplitter@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WSplitter_1106fe38);
  return;
}


// ==== 11001dd9 WPictureButton::OnSize

/* public: virtual void __thiscall WPictureButton::OnSize(unsigned long,int,int) */

void __thiscall WPictureButton::OnSize(WPictureButton *this,ulong param_1,int param_2,int param_3)

{
  int iVar1;
  FString aFStack_4c [4];
  undefined4 uStack_48;
  tagRECT tStack_2c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x1dd9  833  ?OnSize@WPictureButton@@UAEXKHH@Z */
  puStack_c = &LAB_1105f699;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  uStack_8 = 0;
  uStack_48 = 0x110054bd;
  ExceptionList = &pvStack_10;
  WWindow::OnSize((WWindow *)this,param_1,param_2,param_3);
  GetClientRect(*(HWND *)(this + 4),&tStack_2c);
  if (*(int *)(this + 0x84) != 0) {
    iVar1 = FString::Len((FString *)(this + 0x74));
    if (iVar1 != 0) {
      FString::FString(aFStack_4c,(FString *)(this + 0x74));
      uStack_8 = uStack_8 & 0xffffff00;
      WToolTip::AddTool(*(WToolTip **)(this + 0x84),*(undefined4 *)(this + 4));
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001dde WUDNWindow::OpenWindow

/* public: void __thiscall WUDNWindow::OpenWindow(void) */

void __thiscall WUDNWindow::OpenWindow(WUDNWindow *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1dde  882  ?OpenWindow@WUDNWindow@@QAEXXZ */
  puStack_c = &LAB_11062240;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xfffffffd;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)0x0,0x56000000,0,0,1,1,
             *(HWND__ **)(*(int *)(this + 0x14) + 4),(HMENU__ *)0x0,DAT_1109c35c);
  (**(code **)(*(int *)this + 8))(0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001de3 WTabControl::operator=

/* public: class WTabControl & __thiscall WTabControl::operator=(class WTabControl const &) */

WTabControl * __thiscall WTabControl::operator=(WTabControl *this,WTabControl *param_1)

{
                    /* 0x1de3  292  ??4WTabControl@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return this;
}


// ==== 11001de8 thunk_FUN_1102ab70 thunk -> 1102ab70

// ==== 11001ded WEdit::~WEdit

/* public: virtual __thiscall WEdit::~WEdit(void) */

void __thiscall WEdit::~WEdit(WEdit *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1ded  206  ??1WEdit@@UAE@XZ */
  puStack_8 = &LAB_11060938;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WControl::~WControl((WControl *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11001df2 FClassItem::~FClassItem

/* public: virtual __thiscall FClassItem::~FClassItem(void) */

void __thiscall FClassItem::~FClassItem(FClassItem *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1df2  179  ??1FClassItem@@UAE@XZ */
  puStack_8 = &LAB_11063d08;
  pvStack_c = ExceptionList;
  uStack_4 = 0xffffffff;
  ExceptionList = &pvStack_c;
  FPropertyItemBase::~FPropertyItemBase((FPropertyItemBase *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11001df7 thunk_FUN_1101ec20 thunk -> 1101ec20

// ==== 11001dfc WWindow::OnKeyDown

/* public: virtual void __thiscall WWindow::OnKeyDown(unsigned short) */

void __thiscall WWindow::OnKeyDown(WWindow *this,ushort param_1)

{
                    /* 0x1dfc  761  ?OnKeyDown@WWindow@@UAEXG@Z */
  return;
}


// ==== 11001e01 WPropertyPage::GetPackageName

/* public: virtual unsigned short const * __thiscall WPropertyPage::GetPackageName(void) */

ushort * __thiscall WPropertyPage::GetPackageName(WPropertyPage *this)

{
                    /* 0x1e01  547  ?GetPackageName@WPropertyPage@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11001e06 WBitmapButton::OnDrawItem

/* public: virtual void __thiscall WBitmapButton::OnDrawItem(struct tagDRAWITEMSTRUCT *) */

void __thiscall WBitmapButton::OnDrawItem(WBitmapButton *this,tagDRAWITEMSTRUCT *param_1)

{
  bool bVar1;
  HDC hdc;
  BOOL BVar2;
  HGDIOBJ h;
  int x;
  int y;
  LONG LStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  HGDIOBJ pvStack_28;
  HPEN pHStack_24;
  int iStack_20;
  HDC pHStack_1c;
  WBitmapButton *pWStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1e06  726  ?OnDrawItem@WBitmapButton@@UAEXPAUtagDRAWITEMSTRUCT@@@Z */
  puStack_c = &LAB_1105f640;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffa4;
  uStack_8 = 0;
  LStack_50 = ((RECT *)(param_1 + 0x1c))->left;
  iStack_4c = *(int *)(param_1 + 0x20);
  iStack_48 = *(int *)(param_1 + 0x24);
  iStack_44 = *(int *)(param_1 + 0x28);
  if ((((byte)param_1[0x10] & 1) != 0) || (bVar1 = false, *(int *)(this + 0x8c) != 0)) {
    bVar1 = true;
  }
  ExceptionList = &pvStack_10;
  FillRect(*(HDC *)(param_1 + 0x18),(RECT *)(param_1 + 0x1c),hBrushGrey);
  pWStack_18 = this + 0x98;
  BVar2 = IsWindowEnabled(*(HWND *)(this + 4));
  if (BVar2 == 0) {
    pWStack_18 = this + 0xb8;
  }
  else if (bVar1) {
    pWStack_18 = this + 0xa8;
  }
  pHStack_24 = (HPEN)(*(int *)(this + 0xa0) - *(int *)(this + 0x98));
  iStack_20 = *(int *)(this + 0xa4) - *(int *)(this + 0x9c);
  pHStack_1c = CreateCompatibleDC(*(HDC *)(param_1 + 0x18));
  pvStack_28 = SelectObject(pHStack_1c,*(HGDIOBJ *)(this + 0x94));
  BitBlt(*(HDC *)(param_1 + 0x18),-(uint)bVar1 & 2,-(uint)bVar1 & 2,(int)pHStack_24,iStack_20,
         pHStack_1c,*(int *)pWStack_18,*(int *)(pWStack_18 + 4),0xcc0020);
  (**(code **)(*(int *)this + 0xe4))(*(undefined4 *)(param_1 + 0x18),&LStack_50,!bVar1);
  if (bVar1) {
    pHStack_24 = CreatePen(0,1,0xc6d291);
    iStack_40 = LStack_50 + 1;
    y = iStack_4c + 1;
    x = iStack_48 + -1;
    iStack_34 = iStack_44 + -1;
    iStack_3c = y;
    iStack_38 = x;
    h = SelectObject(*(HDC *)(param_1 + 0x18),pHStack_24);
    MoveToEx(*(HDC *)(param_1 + 0x18),iStack_40,y,(LPPOINT)0x0);
    LineTo(*(HDC *)(param_1 + 0x18),x,y);
    LineTo(*(HDC *)(param_1 + 0x18),x,iStack_34);
    LineTo(*(HDC *)(param_1 + 0x18),iStack_40,iStack_34);
    LineTo(*(HDC *)(param_1 + 0x18),iStack_40,y);
    SelectObject(*(HDC *)(param_1 + 0x18),h);
    DeleteObject(pHStack_24);
  }
  hdc = pHStack_1c;
  SelectObject(pHStack_1c,pvStack_28);
  DeleteDC(hdc);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001e0b FTreeItem::FTreeItem

/* public: __thiscall FTreeItem::FTreeItem(class WPropertiesBase *,class FTreeItem *,int) */

FTreeItem * __thiscall
FTreeItem::FTreeItem(FTreeItem *this,WPropertiesBase *param_1,FTreeItem *param_2,int param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1e0b  35  ??0FTreeItem@@QAE@PAVWPropertiesBase@@PAV0@H@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110614a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)(this + 4) = FControlSnoop::vftable;
  *(WPropertiesBase **)(this + 8) = param_1;
  *(FTreeItem **)(this + 0xc) = param_2;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  *(int *)(this + 0x10) = param_3;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  FArray::FArray((FArray *)(this + 0x24));
  uStack_4 = 1;
  FArray::FArray((FArray *)(this + 0x30));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001e10 FTreeItem::SetProperty

/* public: virtual void __thiscall FTreeItem::SetProperty(class FPropertyItem *,unsigned short const
   *) */

void __thiscall FTreeItem::SetProperty(FTreeItem *this,FPropertyItem *param_1,ushort *param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1e10  946  ?SetProperty@FTreeItem@@UAEXPAVFPropertyItem@@PBG@Z */
  puStack_c = &LAB_110603c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0xc) != 0) {
    ExceptionList = &pvStack_10;
    (**(code **)(**(int **)(this + 0xc) + 0x70))(param_1,param_2);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001e1a WProperties::ResizeList

/* public: virtual void __thiscall WProperties::ResizeList(void) */

void __thiscall WProperties::ResizeList(WProperties *this)

{
  WListBox *this_00;
  int iVar1;
  int iVar2;
  DWORD dwStyle;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  tagRECT tStack_30;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1e1a  898  ?ResizeList@WProperties@@UAEXXZ */
  puStack_c = &LAB_11060fd0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffa4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::GetClientRect((WWindow *)this);
  tStack_30.left = 0;
  tStack_30.top = 0;
  tStack_30.right = 0;
  tStack_30.bottom = 4;
  this_00 = (WListBox *)(this + 0x44);
  iVar1 = WListBox::GetCount(this_00);
  while( true ) {
    iVar1 = iVar1 + -1;
    iStack_18 = iVar1;
    if (iVar1 < 0) break;
    iVar2 = WListBox::GetItemHeight(this_00,iVar1);
    tStack_30.bottom = tStack_30.bottom + iVar2;
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    dwStyle = GetWindowLongA(*(HWND *)(this + 0x48),-0x10);
  }
  else {
    dwStyle = GetWindowLongW(*(HWND *)(this + 0x48),-0x10);
  }
  AdjustWindowRect(&tStack_30,dwStyle,0);
  iVar1 = iStack_34 - iStack_3c;
  if (tStack_30.bottom - tStack_30.top < iStack_34 - iStack_3c) {
    iVar1 = tStack_30.bottom - tStack_30.top;
  }
  WWindow::MoveWindow((WWindow *)this_00,0,0,iStack_38 - iStack_40,iVar1,1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001e1f WConfigProperties::GetWindowClassName

/* public: virtual void __thiscall WConfigProperties::GetWindowClassName(unsigned short *) */

void __thiscall WConfigProperties::GetWindowClassName(WConfigProperties *this,ushort *param_1)

{
                    /* 0x1e1f  607  ?GetWindowClassName@WConfigProperties@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WConfigProperties_1106fda8);
  return;
}


// ==== 11001e24 FTreeItem::Collapse

/* public: virtual void __thiscall FTreeItem::Collapse(void) */

void __thiscall FTreeItem::Collapse(FTreeItem *this)

{
  int iVar1;
  int iVar2;
  FTreeItem *pFVar3;
  FTreeItem *pFVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1e24  422  ?Collapse@FTreeItem@@UAEXXZ */
  puStack_c = &LAB_11060380;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(this + 8) + 0xf4))(0);
  iVar1 = WListBox::FindItemChecked((WListBox *)(*(int *)(this + 8) + 0x44),this);
  iVar2 = WListBox::GetCount((WListBox *)(*(int *)(this + 8) + 0x44));
  while( true ) {
    if (iVar2 <= iVar1 + 1) break;
    pFVar3 = WPropertiesBase::GetListItem(*(WPropertiesBase **)(this + 8),iVar1 + 1);
    pFVar4 = *(FTreeItem **)(pFVar3 + 0xc);
    while( true ) {
      if (pFVar4 == (FTreeItem *)0x0) goto LAB_11010b78;
      if (pFVar4 == this) break;
      pFVar4 = *(FTreeItem **)(pFVar4 + 0xc);
    }
    *(undefined4 *)(pFVar3 + 0x14) = 0;
    WListBox::DeleteString((WListBox *)(*(int *)(this + 8) + 0x44),iVar1 + 1);
    iVar2 = iVar2 + -1;
  }
LAB_11010b78:
  *(undefined4 *)(this + 0x14) = 0;
  (**(code **)(**(int **)(this + 8) + 0xf0))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001e29 WColorButton::~WColorButton

/* public: virtual __thiscall WColorButton::~WColorButton(void) */

void __thiscall WColorButton::~WColorButton(WColorButton *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1e29  197  ??1WColorButton@@UAE@XZ */
  puStack_8 = &LAB_11062918;
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


// ==== 11001e2e WObjectProperties::WObjectProperties

/* public: __thiscall WObjectProperties::WObjectProperties(class FName,unsigned long,unsigned short
   const *,class WWindow *,int) */

WObjectProperties * __thiscall
WObjectProperties::WObjectProperties
          (WObjectProperties *this,ushort *param_2,undefined4 param_3,int param_4,undefined4 param_5
          )

{
  void *unaff_ESI;
  ulong unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1e2e  112  ??0WObjectProperties@@QAE@VFName@@KPBGPAVWWindow@@H@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063c76;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WProperties::WProperties((WProperties *)this,param_2,param_5);
  pvStack_c = (void *)0x0;
  *(undefined ***)this = vftable_for_WWindow_;
  *(undefined ***)(this + 0x3c) = vftable_for_FControlSnoop_;
  FObjectsItem::FObjectsItem
            ((FObjectsItem *)(this + 0xfc),(WPropertiesBase *)this,(FTreeItem *)0x0,unaff_retaddr,
             param_2,param_4,0);
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11001e38 WLog::WLog

/* public: __thiscall WLog::WLog(void) */

WLog * __thiscall WLog::WLog(WLog *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1e38  110  ??0WLog@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110630f7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WTerminal::WTerminal((WTerminal *)this);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_WTerminalBase_;
  *(undefined ***)(this + 0x3c) = vftable_for_FOutputDevice_;
  FString::FString((FString *)(this + 0x2b4));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001e3d thunk_FUN_11037f10 thunk -> 11037f10

// ==== 11001e42 FDelegate::FDelegate

/* public: __thiscall FDelegate::FDelegate(class FCommandTarget *,void (__thiscall
   FCommandTarget::*)(void)) */

void __thiscall FDelegate::FDelegate(FDelegate *this,FCommandTarget *param_1,_func_void *param_2)

{
                    /* 0x1e42  15  ??0FDelegate@@QAE@PAVFCommandTarget@@P81@AEXXZ@Z */
  *(undefined ***)this = vftable;
  *(FCommandTarget **)(this + 4) = param_1;
  *(_func_void **)(this + 8) = param_2;
  return;
}


// ==== 11001e47 FCategoryItem::operator=

/* public: class FCategoryItem & __thiscall FCategoryItem::operator=(class FCategoryItem const &) */

FCategoryItem * __thiscall FCategoryItem::operator=(FCategoryItem *this,FCategoryItem *param_1)

{
                    /* 0x1e47  239  ??4FCategoryItem@@QAEAAV0@ABV0@@Z */
  FTreeItem::operator=((FTreeItem *)this,(FTreeItem *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  return this;
}


// ==== 11001e4c FHeaderItem::FHeaderItem

/* public: __thiscall FHeaderItem::FHeaderItem(void) */

FHeaderItem * __thiscall FHeaderItem::FHeaderItem(FHeaderItem *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1e4c  20  ??0FHeaderItem@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063908;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FTreeItem::FTreeItem((FTreeItem *)this);
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001e56 WClassProperties::GetPackageName

/* public: virtual unsigned short const * __thiscall WClassProperties::GetPackageName(void) */

ushort * __thiscall WClassProperties::GetPackageName(WClassProperties *this)

{
                    /* 0x1e56  527  ?GetPackageName@WClassProperties@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11001e5b thunk_FUN_1101bfc0 thunk -> 1101bfc0

// ==== 11001e60 WWindow::operator_struct_HWND__*

/* public: __thiscall WWindow::operator struct HWND__ *(void)const  */

HWND__ * __thiscall WWindow::operator_struct_HWND___(WWindow *this)

{
                    /* 0x1e60  305  ??BWWindow@@QBEPAUHWND__@@XZ */
  return *(HWND__ **)(this + 4);
}


// ==== 11001e6a thunk_FUN_1102e6d0 thunk -> 1102e6d0

// ==== 11001e6f WListBox::GetItemHeight

/* public: int __thiscall WListBox::GetItemHeight(int) */

int __thiscall WListBox::GetItemHeight(WListBox *this,int param_1)

{
  LRESULT LVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1e6f  514  ?GetItemHeight@WListBox@@QAEHH@Z */
  puStack_c = &LAB_1105fe00;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &pvStack_10;
    LVar1 = SendMessageW(*(HWND *)(this + 4),0x1a1,param_1,0);
    ExceptionList = pvStack_10;
    return LVar1;
  }
  ExceptionList = &pvStack_10;
  LVar1 = SendMessageA(*(HWND *)(this + 4),0x1a1,param_1,0);
  ExceptionList = pvStack_10;
  return LVar1;
}


// ==== 11001e74 thunk_FUN_1101c4a0 thunk -> 1101c4a0

// ==== 11001e79 WWindow::OnMouseEnter

/* public: virtual void __thiscall WWindow::OnMouseEnter(void) */

void __thiscall WWindow::OnMouseEnter(WWindow *this)

{
                    /* 0x1e79  785  ?OnMouseEnter@WWindow@@UAEXXZ */
  return;
}


// ==== 11001e83 WGroupBox::WGroupBox

/* public: __thiscall WGroupBox::WGroupBox(class WGroupBox const &) */

WGroupBox * __thiscall WGroupBox::WGroupBox(WGroupBox *this,WGroupBox *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1e83  93  ??0WGroupBox@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110626f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,(WControl *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001e8d WDialog::DoModal

/* public: virtual int __thiscall WDialog::DoModal(struct HINSTANCE__ *) */

int __thiscall WDialog::DoModal(WDialog *this,HINSTANCE__ *param_1)

{
  undefined1 *puVar1;
  HWND pHVar2;
  int iVar3;
  WDialog *pWStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1e8d  430  ?DoModal@WDialog@@UAEHPAUHINSTANCE__@@@Z */
  puStack_c = &LAB_110622c0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xffffffd4;
  if (*(int *)(this + 4) != 0) {
    ExceptionList = &pvStack_10;
    appFailAssert(s_hWnd__NULL_11070cf0,s___Window_cpp_1106f624,0x821);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  pWStack_18 = this;
  thunk_FUN_1101bea0(&WWindow::_Windows,&pWStack_18);
  WWindow::ModalCount = WWindow::ModalCount + 1;
  iVar3 = *(int *)(this + 0x14);
  if (*(int *)GUnicodeOS_exref == 0) {
    if (iVar3 == 0) {
      pHVar2 = (HWND)0x0;
    }
    else {
      pHVar2 = *(HWND *)(iVar3 + 4);
    }
    iVar3 = DialogBoxParamA(param_1,(LPCSTR)(uint)*(ushort *)(this + 0xc),pHVar2,
                            WWindow::StaticWndProc,(LPARAM)this);
  }
  else {
    if (iVar3 == 0) {
      pHVar2 = (HWND)0x0;
    }
    else {
      pHVar2 = *(HWND *)(iVar3 + 4);
    }
    iVar3 = DialogBoxParamW(param_1,(LPCWSTR)(uint)*(ushort *)(this + 0xc),pHVar2,
                            WWindow::StaticWndProc,(LPARAM)this);
  }
  WWindow::ModalCount = WWindow::ModalCount + -1;
  ExceptionList = pvStack_10;
  return iVar3;
}


// ==== 11001e92 thunk_FUN_1102e5a0 thunk -> 1102e5a0

// ==== 11001e97 FContainer::SetAnchors

/* public: void __thiscall FContainer::SetAnchors(class TMap<unsigned long,class FWindowAnchor> *)
    */

void __thiscall FContainer::SetAnchors(FContainer *this,TMap<unsigned_long,FWindowAnchor> *param_1)

{
                    /* 0x1e97  917  ?SetAnchors@FContainer@@QAEXPAV?$TMap@KVFWindowAnchor@@@@@Z */
  if (param_1 == (TMap<unsigned_long,FWindowAnchor> *)0x0) {
    appFailAssert(s_InAnchors_1106f3d4,s___Utils_cpp_1106f3e0,0x29);
  }
  *(TMap<unsigned_long,FWindowAnchor> **)this = param_1;
  RefreshControls(this);
  return;
}


// ==== 11001e9c WClassProperties::WClassProperties

/* public: __thiscall WClassProperties::WClassProperties(class FName,unsigned long,unsigned short
   const *,class UClass *) */

WClassProperties * __thiscall
WClassProperties::WClassProperties(WClassProperties *this,ushort *param_2,UClass *param_3)

{
  void *unaff_ESI;
  ulong unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1e9c  59  ??0WClassProperties@@QAE@VFName@@KPBGPAVUClass@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063e06;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WProperties::WProperties((WProperties *)this,param_2,0);
  pvStack_c = (void *)0x0;
  *(undefined ***)this = vftable_for_WWindow_;
  *(undefined ***)(this + 0x3c) = vftable_for_FControlSnoop_;
  FClassItem::FClassItem
            ((FClassItem *)(this + 0xfc),(WPropertiesBase *)this,(FTreeItem *)0x0,unaff_retaddr,
             param_2,param_3);
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11001ea1 FControlSnoop::FControlSnoop

/* public: __thiscall FControlSnoop::FControlSnoop(class FControlSnoop const &) */

void __thiscall FControlSnoop::FControlSnoop(FControlSnoop *this,FControlSnoop *param_1)

{
                    /* 0x1ea1  12  ??0FControlSnoop@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  return;
}


// ==== 11001ea6 WThinScrollBar::OnDestroy

/* public: virtual void __thiscall WThinScrollBar::OnDestroy(void) */

void __thiscall WThinScrollBar::OnDestroy(WThinScrollBar *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1ea6  722  ?OnDestroy@WThinScrollBar@@UAEXXZ */
  puStack_c = &LAB_110624b0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::OnDestroy((WWindow *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001eab FConfigItem::Expand

/* public: virtual void __thiscall FConfigItem::Expand(void) */

void __thiscall FConfigItem::Expand(FConfigItem *this)

{
  ushort *puVar1;
  FString *pFVar2;
  ushort *puVar3;
  FObjectConfigItem *pFVar4;
  FConfigItem *this_00;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  FString aFStack_44 [12];
  int iStack_38;
  int iStack_34;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x1eab  450  ?Expand@FConfigItem@@UAEXXZ */
  puStack_c = &LAB_11061971;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffb0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  thunk_FUN_11013c90((FArray *)&iStack_38);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  iVar8 = 0;
  puVar1 = FString::operator*((FString *)(this + 0x3c));
  UObject::GetPreferences((TArray<FPreferencesInfo> *)&iStack_38,puVar1,iVar8);
  iStack_18 = 0;
LAB_11022060:
  do {
    if (iStack_34 <= iStack_18) {
      FTreeItem::Expand((FTreeItem *)this);
      uStack_8 = uStack_8 & 0xffffff00;
      thunk_FUN_1101d9f0((FArray *)&iStack_38);
      ExceptionList = pvStack_10;
      return;
    }
    for (iStack_1c = 0; bVar6 = iStack_1c == *(int *)(this + 0x34),
        iStack_1c < *(int *)(this + 0x34); iStack_1c = iStack_1c + 1) {
      pFVar2 = (FString *)
               (**(code **)(**(int **)(*(int *)(this + 0x30) + iStack_1c * 4) + 0x80))(aFStack_44);
      uStack_8._0_1_ = 2;
      puVar1 = FString::operator*((FString *)(iStack_18 * 0x2c + iStack_38));
      puVar3 = FString::operator*(pFVar2);
      iVar8 = appStricmp(puVar3,puVar1);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      FString::~FString(aFStack_44);
      if (iVar8 == 0) {
        bVar6 = iStack_1c == *(int *)(this + 0x34);
        break;
      }
    }
    if (bVar6) {
      iVar5 = iStack_18 * 0x2c;
      iVar8 = FString::operator!=((FString *)(iVar5 + 0x18 + iStack_38),(ushort *)&DAT_11068ff8);
      if (iVar8 != 0) {
        pFVar4 = (FObjectConfigItem *)thunk_FUN_110115b0(0x6c,u_FObjectConfigItem_1106f2d0);
        if (pFVar4 == (FObjectConfigItem *)0x0) {
          uStack_20 = 0;
          thunk_FUN_1101bf00(this + 0x30,&uStack_20);
          iStack_18 = iStack_18 + 1;
        }
        else {
          pFVar2 = (FString *)(iVar5 + iStack_38);
          uVar9 = *(undefined4 *)(pFVar2 + 0x24);
          uVar7 = *(undefined4 *)(pFVar2 + 0x28);
          puVar1 = FString::operator*(pFVar2 + 0x18);
          puVar3 = FString::operator*(pFVar2);
          uStack_20 = FObjectConfigItem::FObjectConfigItem
                                (pFVar4,*(undefined4 *)(this + 8),this,puVar3,puVar1,uVar7,uVar9);
          thunk_FUN_1101bf00(this + 0x30,&uStack_20);
          iStack_18 = iStack_18 + 1;
        }
        goto LAB_11022060;
      }
      this_00 = (FConfigItem *)thunk_FUN_110115b0(0x68,u_FConfigItem_1106f2b4);
      if (this_00 == (FConfigItem *)0x0) {
        uStack_24 = 0;
      }
      else {
        uStack_24 = FConfigItem(this_00,(FPreferencesInfo *)(iVar5 + iStack_38),
                                *(WPropertiesBase **)(this + 8),(FTreeItem *)this);
      }
      thunk_FUN_1101bf00(this + 0x30,&uStack_24);
    }
    iStack_18 = iStack_18 + 1;
  } while( true );
}


// ==== 11001eb5 WThinScrollBar::WThinScrollBar

/* public: __thiscall WThinScrollBar::WThinScrollBar(class WWindow *,int) */

WThinScrollBar * __thiscall
WThinScrollBar::WThinScrollBar(WThinScrollBar *this,WWindow *param_1,int param_2)

{
  HBRUSH__ *pHVar1;
  void *unaff_ESI;
  undefined4 unaff_retaddr;
  WThinScrollBar *pWStack_1c;
  WWindow *pWStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1eb5  154  ??0WThinScrollBar@@QAE@PAVWWindow@@H@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110629f8;
  pvStack_c = ExceptionList;
  pWStack_18 = param_1;
  ExceptionList = &pvStack_c;
  pWStack_1c = this;
  FName::FName((FName *)&pWStack_1c,(ushort *)u_ThinScrollBar_11071b94,1);
  WWindow::WWindow((WWindow *)this);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x3c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x50) = unaff_retaddr;
  pHVar1 = hBrushCyanLow;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(HBRUSH__ **)(this + 0x58) = pHVar1;
  *(undefined4 *)(this + 0x54) = 0;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11001eba WPictureButton::GetWindowClassName

/* public: virtual void __thiscall WPictureButton::GetWindowClassName(unsigned short *) */

void __thiscall WPictureButton::GetWindowClassName(WPictureButton *this,ushort *param_1)

{
                    /* 0x1eba  621  ?GetWindowClassName@WPictureButton@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WPictureButton_1106fb58);
  return;
}


// ==== 11001ebf FTreeItemBase::FTreeItemBase

/* public: __thiscall FTreeItemBase::FTreeItemBase(void) */

void __thiscall FTreeItemBase::FTreeItemBase(FTreeItemBase *this)

{
                    /* 0x1ebf  38  ??0FTreeItemBase@@QAE@XZ */
  *(undefined ***)(this + 4) = FControlSnoop::vftable;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  return;
}


// ==== 11001ec4 WWizardPage::GetCancelText

/* public: virtual unsigned short const * __thiscall WWizardPage::GetCancelText(void) */

ushort * __thiscall WWizardPage::GetCancelText(WWizardPage *this)

{
  ushort *puVar1;
  
                    /* 0x1ec4  478  ?GetCancelText@WWizardPage@@UAEPBGXZ */
  puVar1 = LocalizeGeneral(s_CancelButton_1106b12c,(ushort *)u_Window_1106949c,(ushort *)0x0);
  return puVar1;
}


// ==== 11001ec9 FPropertyItem::SetValue

/* public: virtual void __thiscall FPropertyItem::SetValue(unsigned short const *) */

void __thiscall FPropertyItem::SetValue(FPropertyItem *this,ushort *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1ec9  964  ?SetValue@FPropertyItem@@UAEXPBG@Z */
  puStack_c = &LAB_11060490;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(*(int *)this + 0x70))(this,param_1);
  (**(code **)(*(int *)this + 0xa0))();
  (**(code **)(*(int *)this + 0x28))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001ece WLog::OnDestroy

/* public: virtual void __thiscall WLog::OnDestroy(void) */

void __thiscall WLog::OnDestroy(WLog *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1ece  718  ?OnDestroy@WLog@@UAEXXZ */
  puStack_c = &LAB_11062580;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(undefined4 *)GLogHook_exref = 0;
  WWindow::OnDestroy((WWindow *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001ed8 WProperties::Serialize

/* public: virtual void __thiscall WProperties::Serialize(class FArchive &) */

void __thiscall WProperties::Serialize(WProperties *this,FArchive *param_1)

{
  int *piVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1ed8  914  ?Serialize@WProperties@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_11060650;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::Serialize((WWindow *)this,param_1);
  piVar1 = (int *)(**(code **)(*(int *)this + 0xe8))();
  (**(code **)(*piVar1 + 0x1c))(param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001edd WListBox::GetCount

/* public: int __thiscall WListBox::GetCount(void) */

int __thiscall WListBox::GetCount(WListBox *this)

{
  LRESULT LVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1edd  491  ?GetCount@WListBox@@QAEHXZ */
  puStack_c = &LAB_1105fdf0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &pvStack_10;
    LVar1 = SendMessageW(*(HWND *)(this + 4),0x18b,0,0);
    ExceptionList = pvStack_10;
    return LVar1;
  }
  ExceptionList = &pvStack_10;
  LVar1 = SendMessageA(*(HWND *)(this + 4),0x18b,0,0);
  ExceptionList = pvStack_10;
  return LVar1;
}


// ==== 11001ee7 WTabControl::InterceptControlCommand

/* public: virtual int __thiscall WTabControl::InterceptControlCommand(unsigned int,unsigned
   int,long) */

int __thiscall
WTabControl::InterceptControlCommand(WTabControl *this,uint param_1,uint param_2,long param_3)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1ee7  659  ?InterceptControlCommand@WTabControl@@UAEHIIJ@Z */
  puStack_c = &LAB_1105f590;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(uint *)(this + 0x30) = param_2;
  *(long *)(this + 0x34) = param_3;
  if (*(int *)(param_3 + 8) == -0x227) {
    (*(code *)**(undefined4 **)(this + 0x40))();
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 11001eec WRichEdit::GetWindowClassName

/* public: virtual void __thiscall WRichEdit::GetWindowClassName(unsigned short *) */

void __thiscall WRichEdit::GetWindowClassName(WRichEdit *this,ushort *param_1)

{
                    /* 0x1eec  626  ?GetWindowClassName@WRichEdit@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WRichEdit_1106fc00);
  return;
}


// ==== 11001ef1 WListBox::ItemFromPoint

/* public: int __thiscall WListBox::ItemFromPoint(struct FPoint) */

int __thiscall WListBox::ItemFromPoint(WListBox *this,undefined2 param_2,undefined2 param_3)

{
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1ef1  666  ?ItemFromPoint@WListBox@@QAEHUFPoint@@@Z */
  puStack_c = &LAB_1105fe10;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    uVar1 = SendMessageA(*(HWND *)(this + 4),0x1a9,0,CONCAT22(param_3,param_2));
  }
  else {
    ExceptionList = &pvStack_10;
    uVar1 = SendMessageW(*(HWND *)(this + 4),0x1a9,0,CONCAT22(param_3,param_2));
  }
  if (uVar1 >> 0x10 != 0) {
    ExceptionList = pvStack_10;
    return -1;
  }
  ExceptionList = pvStack_10;
  return uVar1 & 0xffff;
}


// ==== 11001ef6 WWindow::OnCopyData

/* public: virtual void __thiscall WWindow::OnCopyData(struct HWND__ *,struct tagCOPYDATASTRUCT *)
    */

void __thiscall WWindow::OnCopyData(WWindow *this,HWND__ *param_1,tagCOPYDATASTRUCT *param_2)

{
                    /* 0x1ef6  707  ?OnCopyData@WWindow@@UAEXPAUHWND__@@PAUtagCOPYDATASTRUCT@@@Z */
  return;
}


// ==== 11001f00 thunk_FUN_11022700 thunk -> 11022700

// ==== 11001f05 WWindow::GetText

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: virtual class FString __thiscall WWindow::GetText(void) */

FString * __thiscall WWindow::GetText(WWindow *this)

{
  uint uVar1;
  ushort *puVar2;
  FString *in_stack_00000004;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1f05  594  ?GetText@WWindow@@UAE?AVFString@@XZ */
  puStack_c = &LAB_11061e1a;
  pvStack_10 = ExceptionList;
  puVar2 = (ushort *)0x0;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 4) == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert(&DAT_11068b4c,s___Window_cpp_1106f624,0x2f8);
  }
  uVar1 = (**(code **)(*(int *)this + 0x30))();
  if ((*(int *)GUnicode_exref == 0) || (*(int *)GUnicodeOS_exref != 0)) {
    if ((uVar1 & 0x7fffffff) != 0x7fffffff) {
      puVar2 = (ushort *)&stack0xffffffd0;
    }
    SendMessageW(*(HWND *)(this + 4),0xd,uVar1 + 1,(LPARAM)puVar2);
    FString::FString(in_stack_00000004,puVar2);
  }
  else {
    if (uVar1 + 1 != 0) {
      puVar2 = (ushort *)&stack0xffffffd0;
    }
    SendMessageA(*(HWND *)(this + 4),0xd,uVar1 + 1,(LPARAM)puVar2);
    puVar2 = appFromAnsi((char *)puVar2,(ushort *)0x0);
    FString::FString(in_stack_00000004,puVar2);
  }
  ExceptionList = pvStack_10;
  return in_stack_00000004;
}


// ==== 11001f0a WPictureButton::GetPackageName

/* public: virtual unsigned short const * __thiscall WPictureButton::GetPackageName(void) */

ushort * __thiscall WPictureButton::GetPackageName(WPictureButton *this)

{
                    /* 0x1f0a  544  ?GetPackageName@WPictureButton@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11001f0f WCrashBoxDialog::OnCopy

/* public: virtual void __thiscall WCrashBoxDialog::OnCopy(void) */

void __thiscall WCrashBoxDialog::OnCopy(WCrashBoxDialog *this)

{
  ushort *puVar1;
  
                    /* 0x1f0f  704  ?OnCopy@WCrashBoxDialog@@UAEXXZ */
  puVar1 = FString::operator*((FString *)(this + 0x274));
  appClipboardCopy(puVar1);
  return;
}


// ==== 11001f14 WComboBox::WComboBox

/* public: __thiscall WComboBox::WComboBox(void) */

WComboBox * __thiscall WComboBox::WComboBox(WComboBox *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1f14  66  ??0WComboBox@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062e18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined ***)(this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined ***)(this + 0x58) = FDelegate::vftable;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined ***)(this + 100) = FDelegate::vftable;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined ***)(this + 0x70) = FDelegate::vftable;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined ***)(this + 0x7c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined ***)(this + 0x88) = FDelegate::vftable;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined ***)(this + 0x94) = FDelegate::vftable;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined ***)(this + 0xa0) = FDelegate::vftable;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined ***)(this + 0xac) = FDelegate::vftable;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001f19 WWindow::MaybeDestroy

/* public: void __thiscall WWindow::MaybeDestroy(void) */

void __thiscall WWindow::MaybeDestroy(WWindow *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1f19  673  ?MaybeDestroy@WWindow@@QAEXXZ */
  puStack_c = &LAB_11061a50;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if ((*(uint *)(this + 0x10) & 1) == 0) {
    ExceptionList = &pvStack_10;
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
    (**(code **)(*(int *)this + 0x14))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001f1e WScrollBar::GetWindowClassName

/* public: virtual void __thiscall WScrollBar::GetWindowClassName(unsigned short *) */

void __thiscall WScrollBar::GetWindowClassName(WScrollBar *this,ushort *param_1)

{
                    /* 0x1f1e  627  ?GetWindowClassName@WScrollBar@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WScrollBar_1106fbb0);
  return;
}


// ==== 11001f23 FObjectsItem::operator=

/* public: class FObjectsItem & __thiscall FObjectsItem::operator=(class FObjectsItem const &) */

FObjectsItem * __thiscall FObjectsItem::operator=(FObjectsItem *this,FObjectsItem *param_1)

{
                    /* 0x1f23  250  ??4FObjectsItem@@QAEAAV0@ABV0@@Z */
  FTreeItem::operator=((FTreeItem *)this,(FTreeItem *)param_1);
  FString::operator=((FString *)(this + 0x3c),(FString *)(param_1 + 0x3c));
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  thunk_FUN_1102a830(this + 0x58,(FArray *)(param_1 + 0x58));
  return this;
}


// ==== 11001f28 WComboBox::WComboBox

/* public: __thiscall WComboBox::WComboBox(class WComboBox const &) */

WComboBox * __thiscall WComboBox::WComboBox(WComboBox *this,WComboBox *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1f28  64  ??0WComboBox@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062e38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,(WControl *)param_1);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined ***)(this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined ***)(this + 0x58) = FDelegate::vftable;
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined ***)(this + 100) = FDelegate::vftable;
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined ***)(this + 0x70) = FDelegate::vftable;
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined ***)(this + 0x7c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined ***)(this + 0x88) = FDelegate::vftable;
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined ***)(this + 0x94) = FDelegate::vftable;
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined ***)(this + 0xa0) = FDelegate::vftable;
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined ***)(this + 0xac) = FDelegate::vftable;
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001f32 WProperties::OnActivate

/* public: virtual void __thiscall WProperties::OnActivate(int) */

void __thiscall WProperties::OnActivate(WProperties *this,int param_1)

{
  undefined4 uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1f32  682  ?OnActivate@WProperties@@UAEXH@Z */
  puStack_c = &LAB_11060f40;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (param_1 == 1) {
    ExceptionList = &pvStack_10;
    SetFocus(*(HWND *)(this + 0x48));
    if (*(int *)(this + 0xd0) != 0) {
      ExceptionList = pvStack_10;
      return;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    ExceptionList = &pvStack_10;
  }
  (**(code **)(*(int *)this + 0xf4))(uVar1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001f37 WSplitterContainer::WSplitterContainer

/* public: __thiscall WSplitterContainer::WSplitterContainer(class WSplitterContainer const &) */

WSplitterContainer * __thiscall
WSplitterContainer::WSplitterContainer(WSplitterContainer *this,WSplitterContainer *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1f37  139  ??0WSplitterContainer@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11064328;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow::WWindow((WWindow *)this,(WWindow *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001f3c WCustomLabel::~WCustomLabel

/* public: virtual __thiscall WCustomLabel::~WCustomLabel(void) */

void __thiscall WCustomLabel::~WCustomLabel(WCustomLabel *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1f3c  203  ??1WCustomLabel@@UAE@XZ */
  puStack_8 = &LAB_110627d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WLabel::~WLabel((WLabel *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11001f41 WEditTerminal::GetWindowClassName

/* public: virtual void __thiscall WEditTerminal::GetWindowClassName(unsigned short *) */

void __thiscall WEditTerminal::GetWindowClassName(WEditTerminal *this,ushort *param_1)

{
                    /* 0x1f41  613  ?GetWindowClassName@WEditTerminal@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WEditTerminal_1106fc3c);
  return;
}


// ==== 11001f4b WSplitterContainer::OnSize

/* public: virtual void __thiscall WSplitterContainer::OnSize(unsigned long,int,int) */

void __thiscall
WSplitterContainer::OnSize(WSplitterContainer *this,ulong param_1,int param_2,int param_3)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1f4b  836  ?OnSize@WSplitterContainer@@UAEXKHH@Z */
  puStack_c = &LAB_11062330;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(WSplitter **)(this + 0x3c) != (WSplitter *)0x0) {
    ExceptionList = &pvStack_10;
    WSplitter::PositionSplitter(*(WSplitter **)(this + 0x3c));
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001f50 FControlSnoop::operator=

/* public: class FControlSnoop & __thiscall FControlSnoop::operator=(class FControlSnoop const &) */

FControlSnoop * __thiscall FControlSnoop::operator=(FControlSnoop *this,FControlSnoop *param_1)

{
                    /* 0x1f50  244  ??4FControlSnoop@@QAEAAV0@ABV0@@Z */
  return this;
}


// ==== 11001f55 thunk_FUN_11026270 thunk -> 11026270

// ==== 11001f5a thunk_FUN_11015e40 thunk -> 11015e40

// ==== 11001f5f WCheckListBox::OpenWindow

/* public: void __thiscall WCheckListBox::OpenWindow(int,int,int,int,unsigned long) */

void __thiscall
WCheckListBox::OpenWindow
          (WCheckListBox *this,int param_1,int param_2,int param_3,int param_4,ulong param_5)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1f5f  854  ?OpenWindow@WCheckListBox@@QAEXHHHHK@Z */
  puStack_c = &LAB_1105ff20;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(int *)(this + 0x88) = param_3;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0x200,(ushort *)0x0,
             -(uint)(param_1 != 0) & 0x10000000 | -(uint)(param_3 != 0) & 0x808 |
             (-(uint)(param_2 != 0) & 0xffffff00) + 0x100 | -(uint)(param_4 != 0) & 2 | param_5 |
             0x42a00051,0,0,0,0,*(HWND__ **)(*(int *)(this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)(this + 0xc),DAT_1109c35c);
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


// ==== 11001f64 thunk_FUN_110348b0 thunk -> 110348b0

// ==== 11001f69 thunk_FUN_1102e3d0 thunk -> 1102e3d0

// ==== 11001f6e WProgressBar::~WProgressBar

/* public: virtual __thiscall WProgressBar::~WProgressBar(void) */

void __thiscall WProgressBar::~WProgressBar(WProgressBar *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1f6e  216  ??1WProgressBar@@UAE@XZ */
  puStack_8 = &LAB_110634b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WControl::~WControl((WControl *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11001f73 WPropertySheet::operator=

/* public: class WPropertySheet & __thiscall WPropertySheet::operator=(class WPropertySheet const &)
    */

WPropertySheet * __thiscall WPropertySheet::operator=(WPropertySheet *this,WPropertySheet *param_1)

{
                    /* 0x1f73  286  ??4WPropertySheet@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  thunk_FUN_1102e930(this + 0x44,(FArray *)(param_1 + 0x44));
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  return this;
}


// ==== 11001f7d WWindow::`default_constructor_closure'

/* public: void __thiscall WWindow::`default constructor closure'(void) */

void __thiscall WWindow::_default_constructor_closure_(WWindow *this)

{
  WWindow *pWStack_c;
  undefined4 uStack_8;
  
                    /* 0x1f7d  392  ??_FWWindow@@QAEXXZ */
  uStack_8 = 0;
  pWStack_c = this;
  FName::FName((FName *)&pWStack_c,0);
  WWindow(this);
  return;
}


// ==== 11001f82 thunk_FUN_1102ad90 thunk -> 1102ad90

// ==== 11001f8c FPropertyItem::SendToControl

/* public: virtual void __thiscall FPropertyItem::SendToControl(void) */

void __thiscall FPropertyItem::SendToControl(FPropertyItem *this)

{
  int iVar1;
  FString *pFVar2;
  ushort *puVar3;
  undefined4 uVar4;
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1f8c  907  ?SendToControl@FPropertyItem@@UAEXXZ */
  puStack_c = &LAB_11060562;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  iStack_8 = 0;
  if (*(WEdit **)(this + 0x48) == (WEdit *)0x0) {
    if (*(int **)(this + 0x50) != (int *)0x0) {
      if (*(int *)(this + 0x58) != 0) {
        iVar1 = **(int **)(this + 0x50);
        ExceptionList = &pvStack_10;
        uVar4 = (**(code **)(iVar1 + 0xfc))();
        pFVar2 = (FString *)(**(code **)(iVar1 + 0xec))(aFStack_28,uVar4);
        iStack_8._0_1_ = 2;
        iVar1 = *(int *)this;
        puVar3 = FString::operator*(pFVar2);
        (**(code **)(iVar1 + 0x8c))(puVar3);
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        FString::~FString(aFStack_28);
      }
      *(undefined4 *)(this + 0x58) = 0;
    }
  }
  else {
    ExceptionList = &pvStack_10;
    puStack_14 = &stack0xffffffcc;
    iVar1 = WEdit::GetModify(*(WEdit **)(this + 0x48));
    if (iVar1 != 0) {
      pFVar2 = (FString *)(**(code **)(**(int **)(this + 0x48) + 0x28))(aFStack_28);
      iStack_8._0_1_ = 1;
      iVar1 = *(int *)this;
      puVar3 = FString::operator*(pFVar2);
      (**(code **)(iVar1 + 0x8c))(puVar3);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FString::~FString(aFStack_28);
      if (*(int *)(this + 0x5c) != 0) {
        (**(code **)(*(int *)this + 0x50))();
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001f91 thunk_FUN_1100de70 thunk -> 1100de70

// ==== 11001f96 WEditTerminal::WEditTerminal

/* public: __thiscall WEditTerminal::WEditTerminal(class WTerminalBase *) */

WEditTerminal * __thiscall WEditTerminal::WEditTerminal(WEditTerminal *this,WTerminalBase *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1f96  92  ??0WEditTerminal@@QAE@PAVWTerminalBase@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062fc0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,(WWindow *)param_1,0,WEdit::SuperProc);
  *(undefined ***)this = WEdit::vftable;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined ***)(this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined ***)this = vftable;
  *(WTerminalBase **)(this + 0x58) = param_1;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001f9b WSplitter::OnLeftButtonDown

/* public: virtual void __thiscall WSplitter::OnLeftButtonDown(void) */

void __thiscall WSplitter::OnLeftButtonDown(WSplitter *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1f9b  769  ?OnLeftButtonDown@WSplitter@@UAEXXZ */
  puStack_c = &LAB_11062000;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::GetCursorPos((WWindow *)this);
  SetCapture(*(HWND *)(this + 4));
  InvalidateRect(*(HWND *)(this + 4),(RECT *)0x0,1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001fa0 WListBox::FindString

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: int __thiscall WListBox::FindString(unsigned short const *) */

int __thiscall WListBox::FindString(WListBox *this,ushort *param_1)

{
  HWND hWnd;
  int iVar1;
  char *pcVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1fa0  460  ?FindString@WListBox@@QAEHPBG@Z */
  puStack_c = &LAB_1105fea0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
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
    iVar1 = SendMessageA(hWnd,399,0xffffffff,(LPARAM)pcVar2);
  }
  else {
    ExceptionList = &pvStack_10;
    iVar1 = SendMessageW(*(HWND *)(this + 4),399,0xffffffff,(LPARAM)param_1);
  }
  ExceptionList = pvStack_10;
  return iVar1;
}


// ==== 11001fa5 thunk_FUN_11013cf0 thunk -> 11013cf0

// ==== 11001faa FPropertyItem::GetPropertyText

/* public: void __thiscall FPropertyItem::GetPropertyText(unsigned short *) */

void __thiscall FPropertyItem::GetPropertyText(FPropertyItem *this,ushort *param_1)

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
  FString aFStack_4c [12];
  FString aFStack_40 [12];
  FString aFStack_34 [12];
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x1faa  573  ?GetPropertyText@FPropertyItem@@QAEXPAG@Z */
  puStack_c = &LAB_11060c84;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffa8;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  pUVar2 = thunk_FUN_11013fa0(*(UObject **)(this + 0x3c));
  if (pUVar2 != (UObject *)0x0) {
    pwVar10 = u_Drivers_1106d3a0;
    puVar3 = FName::operator*((FName *)(*(int *)(this + 0x3c) + 0x4c));
    iVar4 = appStricmp(puVar3,(ushort *)pwVar10);
    if (iVar4 == 0) {
      FString::FString(aFStack_28);
      iStack_8._0_1_ = 1;
      FString::FString(aFStack_40);
      iStack_8._0_1_ = 2;
      FString::FString(aFStack_34);
      iStack_8._0_1_ = 3;
      iVar4 = **(int **)GConfig_exref;
      pUVar2 = *(UObject **)(this + 0x3c);
      uVar11 = 0;
      pFVar9 = aFStack_28;
      puVar3 = UObject::GetName(pUVar2);
      puVar8 = (ushort *)0x0;
      pUVar6 = (UObject *)0x0;
      pUVar2 = (UObject *)(**(code **)(*(int *)pUVar2 + 0x74))(0,0,puVar3,pFVar9,uVar11);
      puVar3 = UObject::GetPathName(pUVar2,pUVar6,puVar8);
      (**(code **)(iVar4 + 0xc))(puVar3);
      FString::FString(aFStack_4c,(ushort *)&DAT_1106ce34);
      iStack_8._0_1_ = 4;
      iVar4 = FString::Split(aFStack_28,aFStack_4c,aFStack_40,aFStack_34,0);
      iStack_8 = CONCAT31(iStack_8._1_3_,3);
      FString::~FString(aFStack_4c);
      iVar7 = 0;
      if (iVar4 == 0) {
        puVar3 = FString::operator*(aFStack_28);
        puVar3 = Localize(s_Language_1106d368,s_Language_1106d368,(ushort *)u_Core_1106d374,puVar3,
                          iVar7);
      }
      else {
        puVar5 = (ushort *)0x0;
        puVar3 = FString::operator*(aFStack_40);
        pwVar10 = u_ClassCaption_1106d380;
        puVar8 = FString::operator*(aFStack_34);
        puVar3 = Localize(puVar8,(ushort *)pwVar10,puVar3,puVar5,iVar7);
      }
      appStrcpy(param_1,puVar3);
      iStack_8._0_1_ = 2;
      FString::~FString(aFStack_34);
      iStack_8._0_1_ = 1;
      FString::~FString(aFStack_40);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FString::~FString(aFStack_28);
      ExceptionList = pvStack_10;
      return;
    }
  }
  piVar1 = *(int **)(this + 0x3c);
  iVar4 = *piVar1;
  iVar7 = (**(code **)(*(int *)this + 0x68))(this,0,1);
  iVar7 = (**(code **)(*(int *)this + 0x68))(this,0,iVar7 - *(int *)(*(int *)(this + 0x3c) + 0x54));
  (**(code **)(iVar4 + 0xa0))(0,param_1,iVar7 - piVar1[0x15]);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001faf WSplitterContainer::PositionPanes

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall WSplitterContainer::PositionPanes(void) */

void __thiscall WSplitterContainer::PositionPanes(WSplitterContainer *this)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  code *pcVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  LONG nHeight;
  BOOL bRepaint;
  undefined4 uVar7;
  tagRECT tStack_20;
  tagRECT tStack_10;
  
                    /* 0x1faf  886  ?PositionPanes@WSplitterContainer@@QAEXXZ */
  if (*(int *)(this + 0x40) != 0) {
    GetClientRect(*(HWND *)(this + 4),&tStack_20);
    bRepaint = 1;
    if (*(int *)(*(int *)(this + 0x3c) + 0x3c) == 0) {
      uVar3 = FUN_1103b180(tStack_20.bottom + -6,extraout_EDX);
      pcVar2 = MoveWindow_exref;
      MoveWindow(*(HWND *)(*(int *)(this + 0x40) + 4),0,0,tStack_20.right,(int)uVar3,bRepaint);
      GetClientRect(*(HWND *)(*(int *)(this + 0x40) + 4),&tStack_10);
      uVar7 = 1;
      uVar3 = FUN_1103b180(extraout_ECX_02,extraout_EDX_01);
      iVar1 = (int)uVar3;
      uVar3 = FUN_1103b180(extraout_ECX_03,(int)(uVar3 >> 0x20));
      uVar6 = (undefined4)uVar3;
      uVar4 = *(undefined4 *)(*(int *)(this + 0x44) + 4);
      uVar5 = 0;
    }
    else {
      nHeight = tStack_20.bottom;
      uVar3 = FUN_1103b180(extraout_ECX,tStack_20.right + -6);
      pcVar2 = MoveWindow_exref;
      MoveWindow(*(HWND *)(*(int *)(this + 0x40) + 4),0,0,(int)uVar3,nHeight,bRepaint);
      GetClientRect(*(HWND *)(*(int *)(this + 0x40) + 4),&tStack_10);
      uVar7 = 1;
      uVar3 = FUN_1103b180(extraout_ECX_00,extraout_EDX_00);
      iVar1 = (int)uVar3;
      uVar6 = 0;
      uVar3 = FUN_1103b180(extraout_ECX_01,(int)(uVar3 >> 0x20));
      uVar5 = (undefined4)uVar3;
      uVar4 = *(undefined4 *)(*(int *)(this + 0x44) + 4);
      tStack_20.right = iVar1;
      iVar1 = tStack_20.bottom;
    }
    (*pcVar2)(uVar4,uVar5,uVar6,tStack_20.right,iVar1,uVar7);
    if (*(FContainer **)(this + 0x48) != (FContainer *)0x0) {
      FContainer::RefreshControls(*(FContainer **)(this + 0x48));
      return;
    }
  }
  return;
}


// ==== 11001fb4 WButton::InterceptControlCommand

/* public: virtual int __thiscall WButton::InterceptControlCommand(unsigned int,unsigned int,long)
    */

int __thiscall
WButton::InterceptControlCommand(WButton *this,uint param_1,uint param_2,long param_3)

{
  short sVar1;
  WButton *pWVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1fb4  653  ?InterceptControlCommand@WButton@@UAEHIIJ@Z */
  puStack_c = &LAB_1105f620;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  sVar1 = (short)(param_2 >> 0x10);
  if (sVar1 == 0) {
    ExceptionList = &pvStack_10;
    (**(code **)(*(int *)this + 0xe8))();
    (*(code *)**(undefined4 **)(this + 0x40))();
    ExceptionList = pvStack_10;
    return 0;
  }
  if (sVar1 == 5) {
    pWVar2 = this + 0x4c;
  }
  else if (sVar1 == 2) {
    pWVar2 = this + 0x58;
  }
  else {
    if (sVar1 != 3) {
      if (sVar1 == 6) {
        pWVar2 = this + 0x70;
        goto LAB_11004ae6;
      }
      if (sVar1 != 7) {
        return 0;
      }
    }
    pWVar2 = this + 100;
  }
LAB_11004ae6:
  ExceptionList = &pvStack_10;
  (*(code *)**(undefined4 **)pWVar2)();
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 11001fb9 FPropertyItem::Draw

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: virtual void __thiscall FPropertyItem::Draw(struct HDC__ *) */

void __thiscall FPropertyItem::Draw(FPropertyItem *this,HDC__ *param_1)

{
  uint uVar1;
  HDC__ *hdc;
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
  WCHAR aWStack_2134 [4100];
  int aiStack_12c [10];
  undefined4 uStack_104;
  undefined4 uStack_100;
  int aiStack_fc [32];
  undefined1 *puStack_7c;
  void *pvStack_78;
  undefined1 *puStack_74;
  undefined4 uStack_70;
  int aiStack_6c [5];
  int aiStack_58 [5];
  LONG LStack_44;
  int iStack_40;
  LONG LStack_3c;
  int aiStack_38 [4];
  RECT RStack_28;
  RECT *pRStack_18;
  int iStack_14;
  LONG LStack_10;
  int iStack_c;
  LONG LStack_8;
  
                    /* 0x1fb9  433  ?Draw@FPropertyItem@@UAEXPAUHDC__@@@Z */
  hdc = param_1;
  puStack_74 = &LAB_11060ca0;
  pvStack_78 = ExceptionList;
  aiStack_fc[0x1f] = 0x11017138;
  puStack_7c = &stack0xffffdec0;
  uStack_70 = 0;
  ExceptionList = &pvStack_78;
  (**(code **)(*(int *)this + 0x24))();
  FillRect(param_1,&RStack_28,hBrushGrey160);
  aiStack_58[4] = RStack_28.left;
  LStack_44 = RStack_28.top;
  iStack_40 = RStack_28.right;
  LStack_3c = RStack_28.bottom;
  iStack_40 = (**(code **)(**(int **)(this + 8) + 0xec))();
  aiStack_12c[9] = (**(code **)(*(int *)this + 0x48))();
  aiStack_12c[9] = 1 - aiStack_12c[9];
  aiStack_12c[8] = 0;
  uStack_104 = 0xffffffff;
  uStack_100 = 0;
  pRStack_18 = (RECT *)thunk_FUN_110143f0(aiStack_58 + 4,aiStack_38,aiStack_12c + 8);
  iVar3 = *(int *)this;
  (**(code **)(iVar3 + 0x48))();
  pHVar2 = (HBRUSH)(**(code **)(iVar3 + 0x14))();
  FillRect(param_1,pRStack_18,pHVar2);
  iVar3 = (**(code **)(*(int *)this + 0x40))();
  aiStack_58[4] = aiStack_58[4] + iVar3;
  (**(code **)(*(int *)this + 0x4c))();
  SetBkMode(param_1,1);
  if (*(int *)(this + 0x44) == -1) {
    puVar4 = FName::operator*((FName *)(this + 0x70));
    appStrcpy((ushort *)aWStack_2134,puVar4);
  }
  else {
    appSprintf((ushort *)aWStack_2134,(ushort *)u___i__1106d3f0);
  }
  iVar3 = *(int *)this;
  (**(code **)(iVar3 + 0x48))();
  CVar5 = (**(code **)(iVar3 + 0x18))();
  SetTextColor(param_1,CVar5);
  if (*(int *)GUnicodeOS_exref == 0) {
    iVar3 = winGetSizeANSI((ushort *)aWStack_2134);
    if (iVar3 == 0) {
      param_1 = (HDC__ *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)aWStack_2134);
      puStack_7c = &stack0xffffde98;
      param_1 = (HDC__ *)&stack0xffffde98;
    }
    aiStack_12c[4] = 0;
    aiStack_12c[5] = 1;
    aiStack_12c[6] = 0;
    aiStack_12c[7] = 0;
    ptVar6 = (LPRECT)thunk_FUN_110143f0(aiStack_58 + 4,aiStack_58,aiStack_12c + 4);
    ptVar15 = (LPDRAWTEXTPARAMS)0x0;
    UVar14 = 0x8024;
    iVar3 = appStrlen((ushort *)aWStack_2134);
    iVar10 = winGetSizeANSI((ushort *)aWStack_2134);
    pcVar11 = winToANSI((char *)param_1,(ushort *)aWStack_2134,iVar10);
    DrawTextExA(hdc,pcVar11,iVar3,ptVar6,UVar14,ptVar15);
  }
  else {
    aiStack_12c[0] = 0;
    aiStack_12c[1] = 1;
    aiStack_12c[2] = 0;
    aiStack_12c[3] = 0;
    ptVar6 = (LPRECT)thunk_FUN_110143f0(aiStack_58 + 4,aiStack_38,aiStack_12c);
    ptVar15 = (LPDRAWTEXTPARAMS)0x0;
    UVar14 = 0x8024;
    iVar3 = appStrlen((ushort *)aWStack_2134);
    DrawTextExW(param_1,aWStack_2134,iVar3,ptVar6,UVar14,ptVar15);
  }
  iVar3 = (**(code **)(*(int *)this + 0x48))();
  if (iVar3 != 0) {
    if (*(int *)GUnicodeOS_exref == 0) {
      iVar3 = winGetSizeANSI((ushort *)aWStack_2134);
      if (iVar3 == 0) {
        param_1 = (HDC__ *)0x0;
      }
      else {
        winGetSizeANSI((ushort *)aWStack_2134);
        puStack_7c = &stack0xffffde98;
        param_1 = (HDC__ *)&stack0xffffde98;
      }
      aiStack_fc[0xc] = 1;
      aiStack_fc[0xd] = 1;
      aiStack_fc[0xe] = 0;
      aiStack_fc[0xf] = 0;
      ptVar6 = (LPRECT)thunk_FUN_110143f0(aiStack_58 + 4,aiStack_58,aiStack_fc + 0xc);
      ptVar15 = (LPDRAWTEXTPARAMS)0x0;
      UVar14 = 0x8024;
      iVar3 = appStrlen((ushort *)aWStack_2134);
      iVar10 = winGetSizeANSI((ushort *)aWStack_2134);
      pcVar11 = winToANSI((char *)param_1,(ushort *)aWStack_2134,iVar10);
      DrawTextExA(hdc,pcVar11,iVar3,ptVar6,UVar14,ptVar15);
    }
    else {
      aiStack_fc[0x18] = 1;
      aiStack_fc[0x19] = 1;
      aiStack_fc[0x1a] = 0;
      aiStack_fc[0x1b] = 0;
      ptVar6 = (LPRECT)thunk_FUN_110143f0(aiStack_58 + 4,aiStack_38,aiStack_fc + 0x18);
      ptVar15 = (LPDRAWTEXTPARAMS)0x0;
      UVar14 = 0x8024;
      iVar3 = appStrlen((ushort *)aWStack_2134);
      DrawTextExW(hdc,aWStack_2134,iVar3,ptVar6,UVar14,ptVar15);
    }
  }
  iStack_14 = RStack_28.left;
  LStack_10 = RStack_28.top;
  iStack_c = RStack_28.right;
  LStack_8 = RStack_28.bottom;
  iStack_14 = (**(code **)(**(int **)(this + 8) + 0xec))();
  aiStack_fc[8] = 0;
  aiStack_fc[9] = 1;
  aiStack_fc[10] = 0;
  aiStack_fc[0xb] = 0;
  pRVar7 = (RECT *)thunk_FUN_110143f0(&iStack_14,aiStack_38,aiStack_fc + 8);
  pHVar2 = (HBRUSH)(**(code **)(*(int *)this + 0x14))();
  FillRect(hdc,pRVar7,pHVar2);
  iStack_c = iStack_c - *(int *)(this + 0x20);
  puVar8 = (uint *)(**(code **)(*(int *)this + 0x68))();
  CVar5 = (**(code **)(*(int *)this + 0x18))();
  SetTextColor(hdc,CVar5);
  if (((*(int *)(*(UObject **)(this + 0x3c) + 0x40) == 1) || (*(int *)(this + 0x44) != -1)) &&
     (pUVar9 = thunk_FUN_11015ea0(*(UObject **)(this + 0x3c)), pUVar9 == (UObject *)0x0)) {
    if (puVar8 == (uint *)0x0) {
      ExceptionList = pvStack_78;
      return;
    }
    pUVar9 = thunk_FUN_11015e70(*(UObject **)(this + 0x3c));
    if (pUVar9 != (UObject *)0x0) {
      FName::FName((FName *)&pRStack_18,0x5a);
      pFVar13 = (FName *)&pRStack_18;
      pUVar9 = thunk_FUN_11015e70(*(UObject **)(this + 0x3c));
      this_00 = (FName *)UObject::GetFName(*(UObject **)(pUVar9 + 0x78));
      iVar3 = FName::operator==(this_00,pFVar13);
      if (iVar3 != 0) {
        aiStack_fc[0x14] = 4;
        aiStack_fc[0x15] = 4;
        aiStack_fc[0x16] = 0xfffffffc;
        aiStack_fc[0x17] = 0xfffffffc;
        pRVar7 = (RECT *)thunk_FUN_110143f0(&iStack_14,aiStack_38,aiStack_fc + 0x14);
        FillRect(hdc,pRVar7,hBrushBlack);
        uVar1 = *puVar8;
        pHVar2 = CreateSolidBrush((uVar1 >> 0x10 & 0xff) + (uVar1 & 0xff) * 0x10000 +
                                  (uVar1 & 0xff00));
        aiStack_fc[0x10] = 5;
        aiStack_fc[0x11] = 5;
        aiStack_fc[0x12] = 0xfffffffb;
        aiStack_fc[0x13] = 0xfffffffb;
        pRVar7 = (RECT *)thunk_FUN_110143f0(&iStack_14,aiStack_38,aiStack_fc + 0x10);
        FillRect(hdc,pRVar7,pHVar2);
        DeleteObject(pHVar2);
        ExceptionList = pvStack_78;
        return;
      }
    }
    aWStack_2134[0] = L'\0';
    GetPropertyText(this,(ushort *)aWStack_2134);
    pUVar9 = thunk_FUN_11013fd0(*(UObject **)(this + 0x3c));
    if (((pUVar9 == (UObject *)0x0) &&
        (pUVar9 = thunk_FUN_11014000(*(UObject **)(this + 0x3c)), pUVar9 == (UObject *)0x0)) &&
       ((pUVar9 = thunk_FUN_11014030(*(UObject **)(this + 0x3c)), pUVar9 == (UObject *)0x0 ||
        (pUVar9 = thunk_FUN_11014030(*(UObject **)(this + 0x3c)), *(int *)(pUVar9 + 0x78) != 0)))) {
      if (*(int *)GUnicodeOS_exref != 0) {
        aiStack_6c[0] = 4;
        aiStack_6c[1] = 1;
        aiStack_6c[2] = 0;
        aiStack_6c[3] = 0;
        ptVar6 = (LPRECT)thunk_FUN_110143f0(&iStack_14,aiStack_38,aiStack_6c);
        ptVar15 = (LPDRAWTEXTPARAMS)0x0;
        UVar14 = 0x8024;
        iVar3 = appStrlen((ushort *)aWStack_2134);
        DrawTextExW(hdc,aWStack_2134,iVar3,ptVar6,UVar14,ptVar15);
        ExceptionList = pvStack_78;
        return;
      }
      iVar3 = winGetSizeANSI((ushort *)aWStack_2134);
      if (iVar3 == 0) {
        pcVar11 = (char *)0x0;
      }
      else {
        winGetSizeANSI((ushort *)aWStack_2134);
        puStack_7c = &stack0xffffde88;
        pcVar11 = &stack0xffffde88;
      }
      aiStack_fc[0x1c] = 4;
      aiStack_fc[0x1d] = 1;
      aiStack_fc[0x1e] = 0;
      aiStack_fc[0x1f] = 0;
      ptVar6 = (LPRECT)thunk_FUN_110143f0(&iStack_14,aiStack_58,aiStack_fc + 0x1c);
      ptVar15 = (LPDRAWTEXTPARAMS)0x0;
      UVar14 = 0x8024;
      iVar3 = appStrlen((ushort *)aWStack_2134);
      iVar10 = winGetSizeANSI((ushort *)aWStack_2134);
      pWVar12 = aWStack_2134;
    }
    else {
      this_01 = (FString *)(this + 0x74);
      iVar3 = FString::Len(this_01);
      if (iVar3 == 0) {
        FString::operator=(this_01,(ushort *)aWStack_2134);
      }
      puVar4 = FString::operator*(this_01);
      appStrcpy((ushort *)aWStack_2134,puVar4);
      if (*(int *)GUnicodeOS_exref != 0) {
        aiStack_58[0] = 4;
        aiStack_58[1] = 1;
        aiStack_58[2] = 0;
        aiStack_58[3] = 0;
        ptVar6 = (LPRECT)thunk_FUN_110143f0(&iStack_14,aiStack_fc + 0x1c,aiStack_58);
        ptVar15 = (LPDRAWTEXTPARAMS)0x0;
        UVar14 = 0x8024;
        iVar3 = appStrlen((ushort *)aWStack_2134);
        DrawTextExW(hdc,aWStack_2134,iVar3,ptVar6,UVar14,ptVar15);
        ExceptionList = pvStack_78;
        return;
      }
      iVar3 = winGetSizeANSI((ushort *)aWStack_2134);
      if (iVar3 == 0) {
        pcVar11 = (char *)0x0;
      }
      else {
        winGetSizeANSI((ushort *)aWStack_2134);
        puStack_7c = &stack0xffffde88;
        pcVar11 = &stack0xffffde88;
      }
      aiStack_38[0] = 4;
      aiStack_38[1] = 1;
      aiStack_38[2] = 0;
      aiStack_38[3] = 0;
      ptVar6 = (LPRECT)thunk_FUN_110143f0(&iStack_14,aiStack_6c,aiStack_38);
      ptVar15 = (LPDRAWTEXTPARAMS)0x0;
      UVar14 = 0x8024;
      iVar3 = appStrlen((ushort *)aWStack_2134);
      iVar10 = winGetSizeANSI((ushort *)aWStack_2134);
      pWVar12 = aWStack_2134;
    }
  }
  else {
    if (*(int *)GUnicodeOS_exref != 0) {
      aiStack_fc[4] = 4;
      aiStack_fc[5] = 0;
      aiStack_fc[6] = 0;
      aiStack_fc[7] = 1;
      ptVar6 = (LPRECT)thunk_FUN_110143f0(&iStack_14,aiStack_38,aiStack_fc + 4);
      ptVar15 = (LPDRAWTEXTPARAMS)0x0;
      UVar14 = 0x8024;
      iVar3 = appStrlen((ushort *)&DAT_1106d3e4);
      DrawTextExW(hdc,(LPWSTR)&DAT_1106d3e4,iVar3,ptVar6,UVar14,ptVar15);
      ExceptionList = pvStack_78;
      return;
    }
    iVar3 = winGetSizeANSI((ushort *)&DAT_1106d3e4);
    if (iVar3 == 0) {
      pcVar11 = (char *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)&DAT_1106d3e4);
      puStack_7c = &stack0xffffde88;
      pcVar11 = &stack0xffffde88;
    }
    aiStack_fc[0] = 4;
    aiStack_fc[1] = 0;
    aiStack_fc[2] = 0;
    aiStack_fc[3] = 1;
    ptVar6 = (LPRECT)thunk_FUN_110143f0(&iStack_14,aiStack_58,aiStack_fc);
    ptVar15 = (LPDRAWTEXTPARAMS)0x0;
    UVar14 = 0x8024;
    iVar3 = appStrlen((ushort *)&DAT_1106d3e4);
    iVar10 = winGetSizeANSI((ushort *)&DAT_1106d3e4);
    pWVar12 = (WCHAR *)&DAT_1106d3e4;
  }
  pcVar11 = winToANSI(pcVar11,(ushort *)pWVar12,iVar10);
  DrawTextExA(hdc,pcVar11,iVar3,ptVar6,UVar14,ptVar15);
  ExceptionList = pvStack_78;
  return;
}


// ==== 11001fbe WEdit::GetLineCount

/* public: int __thiscall WEdit::GetLineCount(void) */

int __thiscall WEdit::GetLineCount(WEdit *this)

{
  LRESULT LVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1fbe  517  ?GetLineCount@WEdit@@QAEHXZ */
  puStack_c = &LAB_1105fc00;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 4) == 0) {
    ExceptionList = &pvStack_10;
    appFailAssert(&DAT_11068b4c,s___Controls_cpp_11068b54,0x5fd);
  }
  if (*(int *)GUnicodeOS_exref != 0) {
    LVar1 = SendMessageW(*(HWND *)(this + 4),0xba,0,0);
    ExceptionList = pvStack_10;
    return LVar1;
  }
  LVar1 = SendMessageA(*(HWND *)(this + 4),0xba,0,0);
  ExceptionList = pvStack_10;
  return LVar1;
}


// ==== 11001fc3 WCustomLabel::WCustomLabel

/* public: __thiscall WCustomLabel::WCustomLabel(void) */

WCustomLabel * __thiscall WCustomLabel::WCustomLabel(WCustomLabel *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1fc3  81  ??0WCustomLabel@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062800;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this);
  *(undefined ***)this = WLabel::vftable;
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001fc8 WWindow::WWindow

/* public: __thiscall WWindow::WWindow(class WWindow const &) */

WWindow * __thiscall WWindow::WWindow(WWindow *this,WWindow *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x1fc8  171  ??0WWindow@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110625bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined2 *)(this + 0xc) = *(undefined2 *)(param_1 + 0xc);
  *(undefined2 *)(this + 0xe) = *(undefined2 *)(param_1 + 0xe);
  *(uint *)(this + 0x10) =
       *(uint *)(this + 0x10) ^ (*(uint *)(this + 0x10) ^ *(uint *)(param_1 + 0x10)) & 1;
  *(uint *)(this + 0x10) =
       (*(uint *)(param_1 + 0x10) ^ *(uint *)(this + 0x10)) & 2 ^ *(uint *)(this + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  thunk_FUN_1102a8a0(this + 0x20,(int *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11001fcd FTreeItem::SnoopKeyDown

/* public: virtual void __thiscall FTreeItem::SnoopKeyDown(class WWindow *,int) */

void __thiscall FTreeItem::SnoopKeyDown(FTreeItem *this,WWindow *param_1,int param_2)

{
  HWND pHVar1;
  ushort uVar2;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1fcd  977  ?SnoopKeyDown@FTreeItem@@UAEXPAVWWindow@@H@Z */
  puStack_c = &LAB_11060c20;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if ((param_2 == 0x26) || (ExceptionList = &pvStack_10, param_2 == 0x28)) {
    if (*(int *)GUnicodeOS_exref == 0) {
      ExceptionList = &pvStack_10;
      PostMessageA(*(HWND *)(*(int *)(this + 4) + 0x48),0x100,param_2,0);
    }
    else {
      ExceptionList = &pvStack_10;
      PostMessageW(*(HWND *)(*(int *)(this + 4) + 0x48),0x100,param_2,0);
    }
  }
  if (param_2 == 9) {
    lParam = 0;
    if (*(int *)GUnicodeOS_exref == 0) {
      pHVar1 = *(HWND *)(*(int *)(this + 4) + 0x48);
      uVar2 = GetKeyState(0x10);
      PostMessageA(pHVar1,0x100,(-(uint)((uVar2 & 0x8000) != 0) & 0xfffffffe) + 0x28,lParam);
    }
    else {
      pHVar1 = *(HWND *)(*(int *)(this + 4) + 0x48);
      uVar2 = GetKeyState(0x10);
      PostMessageW(pHVar1,0x100,(-(uint)((uVar2 & 0x8000) != 0) & 0xfffffffe) + 0x28,lParam);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001fd2 FPropertyItem::OnFindButton

/* public: void __thiscall FPropertyItem::OnFindButton(void) */

void __thiscall FPropertyItem::OnFindButton(FPropertyItem *this)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1fd2  735  ?OnFindButton@FPropertyItem@@QAEXXZ */
  puStack_c = &LAB_11060520;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iVar1 = *(int *)(this + 8);
  ExceptionList = &pvStack_10;
  if (*(int *)(iVar1 + 0x18) != 0) {
    ExceptionList = &pvStack_10;
    (**(code **)(**(int **)(iVar1 + 0x18) + 0xc))(iVar1,u_FINDACTOR_1106bd8c);
  }
  (**(code **)(*(int *)this + 0x50))();
  (**(code **)(*(int *)this + 0x28))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001fe1 FConfigItem::GetCaption

/* public: virtual class FString __thiscall FConfigItem::GetCaption(void)const  */

FString * __thiscall FConfigItem::GetCaption(FConfigItem *this)

{
  FString *in_stack_00000004;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1fe1  480  ?GetCaption@FConfigItem@@UBE?AVFString@@XZ */
  puStack_c = &LAB_1106086a;
  pvStack_10 = ExceptionList;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  FString::FString(in_stack_00000004,(FString *)(this + 0x3c));
  ExceptionList = pvStack_10;
  return in_stack_00000004;
}


// ==== 11001fe6 WWizardPage::OnCancel

/* public: virtual void __thiscall WWizardPage::OnCancel(void) */

void __thiscall WWizardPage::OnCancel(WWizardPage *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1fe6  692  ?OnCancel@WWizardPage@@UAEXXZ */
  puStack_c = &LAB_110601c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WDialog::EndDialog(*(WDialog **)(this + 0x3c),0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001feb thunk_FUN_11031610 thunk -> 11031610

// ==== 11001ff0 WCoolButton::OpenWindow

/* public: void __thiscall WCoolButton::OpenWindow(int,int,int,int,int,unsigned short const *) */

void __thiscall
WCoolButton::OpenWindow
          (WCoolButton *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          ushort *param_6)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1ff0  857  ?OpenWindow@WCoolButton@@QAEXHHHHHPBG@Z */
  puStack_c = &LAB_1105faf0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)u_BUTTON_11069e2c,0x50000000,param_2,param_3,param_4,
             param_5,*(HWND__ **)(*(int *)(this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)(this + 0xc),DAT_1109c35c);
  (**(code **)(*(int *)this + 0x2c))(param_6);
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
  if (param_1 != 0) {
    ShowWindow(*(HWND *)(this + 4),4);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11001ffa FPropertyItemBase::GetId

/* public: virtual unsigned __int64 __thiscall FPropertyItemBase::GetId(void)const  */

__uint64 __thiscall FPropertyItemBase::GetId(FPropertyItemBase *this)

{
  uint uVar1;
  
                    /* 0x1ffa  509  ?GetId@FPropertyItemBase@@UBE_KXZ */
  uVar1 = *(uint *)(this + 0x4c);
  return CONCAT44(((int)uVar1 >> 0x1f) + (uint)(0xfffffffb < uVar1),uVar1 + 4);
}


// ==== 11001fff WProperties::ForceRefresh

/* public: virtual void __thiscall WProperties::ForceRefresh(void) */

void __thiscall WProperties::ForceRefresh(WProperties *this)

{
  WListBox *this_00;
  int iVar1;
  FTreeItem *pFVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x1fff  464  ?ForceRefresh@WProperties@@UAEXXZ */
  puStack_c = &LAB_11061240;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffbc;
  iVar4 = 0;
  uStack_8 = 0;
  if (*(int *)(this + 0xf8) != 0) {
    ExceptionList = &pvStack_10;
    (**(code **)(*(int *)this + 0xf4))(0);
    this_00 = (WListBox *)(this + 0x44);
    iVar1 = WListBox::GetCount(this_00);
    if (iVar1 != 0) {
      FArray::Empty((FArray *)(this + 0xd4),8,0);
      iVar1 = WListBox::GetTop(this_00);
      pFVar2 = WPropertiesBase::GetListItem((WPropertiesBase *)this,iVar1);
      uVar5 = (**(code **)(*(int *)pFVar2 + 0x7c))();
      *(undefined8 *)(this + 0xe0) = uVar5;
      iVar1 = WListBox::GetCurrent(this_00);
      iVar1 = WListBox::GetSelected(this_00,iVar1);
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        iVar1 = WListBox::GetCurrent(this_00);
        pFVar2 = WPropertiesBase::GetListItem((WPropertiesBase *)this,iVar1);
        uVar5 = (**(code **)(*(int *)pFVar2 + 0x7c))();
      }
      *(undefined8 *)(this + 0xe8) = uVar5;
      while( true ) {
        iStack_24 = iVar4;
        iVar1 = WListBox::GetCount(this_00);
        if (iVar1 <= iVar4) break;
        pFVar2 = WPropertiesBase::GetListItem((WPropertiesBase *)this,iVar4);
        if (*(int *)(pFVar2 + 0x14) != 0) {
          uVar5 = (**(code **)(*(int *)pFVar2 + 0x7c))();
          uStack_38 = uVar5;
          thunk_FUN_1101bf30(this + 0xd4,(undefined4 *)&uStack_38);
        }
        iVar4 = iVar4 + 1;
      }
    }
    WListBox::Empty(this_00);
    pFVar2 = (FTreeItem *)(**(code **)(*(int *)this + 0xe8))();
    FTreeItem::EmptyChildren(pFVar2);
    iVar4 = (**(code **)(*(int *)this + 0xe8))();
    *(undefined4 *)(iVar4 + 0x14) = 0;
    piVar3 = (int *)(**(code **)(*(int *)this + 0xe8))();
    (**(code **)(*piVar3 + 0x54))();
    iStack_20 = -1;
    iStack_1c = -1;
    iStack_18 = 0;
    while( true ) {
      iVar4 = iStack_18;
      iVar1 = WListBox::GetCount((WListBox *)(this + 0x44));
      if (iVar1 <= iVar4) break;
      pFVar2 = WPropertiesBase::GetListItem((WPropertiesBase *)this,iVar4);
      uVar5 = (**(code **)(*(int *)pFVar2 + 0x7c))();
      iVar4 = (int)((ulonglong)uVar5 >> 0x20);
      uStack_38._0_4_ = (int)uVar5;
      if ((*(int *)(pFVar2 + 0x10) != 0) && (*(int *)(pFVar2 + 0x14) == 0)) {
        for (iStack_28 = 0; iStack_28 < *(int *)(this + 0xd8); iStack_28 = iStack_28 + 1) {
          if ((*(int *)(*(int *)(this + 0xd4) + iStack_28 * 8) == (int)uStack_38) &&
             (*(int *)(*(int *)(this + 0xd4) + 4 + iStack_28 * 8) == iVar4)) {
            (**(code **)(*(int *)pFVar2 + 0x54))();
            break;
          }
        }
      }
      if (((int)uStack_38 == *(int *)(this + 0xe0)) && (iVar4 == *(int *)(this + 0xe4))) {
        iStack_1c = iStack_18;
      }
      if (((int)uStack_38 == *(int *)(this + 0xe8)) && (iVar4 == *(int *)(this + 0xec))) {
        iStack_20 = iStack_18;
      }
      iStack_18 = iStack_18 + 1;
    }
    (**(code **)(*(int *)this + 0xf0))();
    if (-1 < iStack_1c) {
      WListBox::SetTop((WListBox *)(this + 0x44),iStack_1c);
    }
    if (-1 < iStack_20) {
      WListBox::SetCurrent((WListBox *)(this + 0x44),iStack_20,1);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002004 WButton::SetBitmap

/* public: void __thiscall WButton::SetBitmap(struct HBITMAP__ *) */

void __thiscall WButton::SetBitmap(WButton *this,HBITMAP__ *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2004  918  ?SetBitmap@WButton@@QAEXPAUHBITMAP__@@@Z */
  puStack_c = &LAB_1105f5f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  SendMessageA(*(HWND *)(this + 4),0xf7,0,(LPARAM)param_1);
  *(HBITMAP__ **)(this + 0x88) = param_1;
  InvalidateRect(*(HWND *)(this + 4),(RECT *)0x0,1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002009 WUDNWindow::Capture

/* public: void __thiscall WUDNWindow::Capture(void) */

void __thiscall WUDNWindow::Capture(WUDNWindow *this)

{
  HCURSOR hCursor;
  
                    /* 0x2009  409  ?Capture@WUDNWindow@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(1);
  SetCapture(*(HWND *)(this + 4));
  hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f8b);
  SetCursor(hCursor);
  SetFocus(*(HWND *)(this + 4));
  return;
}


// ==== 1100200e FObjectsItem::~FObjectsItem

/* public: virtual __thiscall FObjectsItem::~FObjectsItem(void) */

void __thiscall FObjectsItem::~FObjectsItem(FObjectsItem *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x200e  184  ??1FObjectsItem@@UAE@XZ */
  puStack_8 = &LAB_11061723;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  thunk_FUN_1101c4a0((FArray *)(this + 0x58));
  uStack_4 = 0xffffffff;
  FPropertyItemBase::~FPropertyItemBase((FPropertyItemBase *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11002013 WColorButton::SetColor

/* public: void __thiscall WColorButton::SetColor(int,int,int) */

void __thiscall WColorButton::SetColor(WColorButton *this,int param_1,int param_2,int param_3)

{
                    /* 0x2013  920  ?SetColor@WColorButton@@QAEXHHH@Z */
  *(int *)(this + 0x94) = param_1;
  *(int *)(this + 0x98) = param_2;
  *(int *)(this + 0x9c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x11005235. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InvalidateRect(*(HWND *)(this + 4),(RECT *)0x0,0);
  return;
}


// ==== 11002018 WRichEdit::operator=

/* public: class WRichEdit & __thiscall WRichEdit::operator=(class WRichEdit const &) */

WRichEdit * __thiscall WRichEdit::operator=(WRichEdit *this,WRichEdit *param_1)

{
                    /* 0x2018  287  ??4WRichEdit@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return this;
}


// ==== 1100201d thunk_FUN_1102ea10 thunk -> 1102ea10

// ==== 11002022 WListView::InterceptControlCommand

/* public: virtual int __thiscall WListView::InterceptControlCommand(unsigned int,unsigned int,long)
    */

int __thiscall
WListView::InterceptControlCommand(WListView *this,uint param_1,uint param_2,long param_3)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2022  657  ?InterceptControlCommand@WListView@@UAEHIIJ@Z */
  puStack_c = &LAB_1105f7d0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(uint *)(this + 0x30) = param_2;
  *(long *)(this + 0x34) = param_3;
  if (*(int *)(param_3 + 8) == -3) {
    (*(code *)**(undefined4 **)(this + 0x40))();
    ExceptionList = pvStack_10;
    return 1;
  }
  if (*(int *)(param_3 + 8) == -0x65) {
    (*(code *)**(undefined4 **)(this + 0x4c))();
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 11002027 WWindow::SetText

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: virtual void __thiscall WWindow::SetText(unsigned short const *) */

void __thiscall WWindow::SetText(WWindow *this,ushort *param_1)

{
  HWND hWnd;
  BOOL BVar1;
  int iVar2;
  char *pcVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2027  957  ?SetText@WWindow@@UAEXPBG@Z */
  puStack_c = &LAB_11061e30;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  BVar1 = IsWindow(*(HWND *)(this + 4));
  if (BVar1 != 0) {
    if (*(int *)GUnicodeOS_exref == 0) {
      iVar2 = winGetSizeANSI(param_1);
      if (iVar2 == 0) {
        pcVar3 = (char *)0x0;
      }
      else {
        winGetSizeANSI(param_1);
        pcVar3 = &stack0xffffffd8;
      }
      hWnd = *(HWND *)(this + 4);
      iVar2 = winGetSizeANSI(param_1);
      pcVar3 = winToANSI(pcVar3,param_1,iVar2);
      SendMessageA(hWnd,0xc,0,(LPARAM)pcVar3);
    }
    else {
      SendMessageW(*(HWND *)(this + 4),0xc,0,(LPARAM)param_1);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100202c FPropertyItem::OnItemKillFocus

/* public: virtual void __thiscall FPropertyItem::OnItemKillFocus(int) */

void __thiscall FPropertyItem::OnItemKillFocus(FPropertyItem *this,int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x202c  749  ?OnItemKillFocus@FPropertyItem@@UAEXH@Z */
  puStack_c = &LAB_110611d0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (param_1 == 0) {
    ExceptionList = &pvStack_10;
    (**(code **)(*(int *)this + 0x9c))();
  }
  if (*(int **)(this + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x48) + 4))(1);
  }
  *(undefined4 *)(this + 0x48) = 0;
  if (*(int **)(this + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x4c) + 4))(1);
  }
  *(undefined4 *)(this + 0x4c) = 0;
  if (*(int **)(this + 0x50) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x50) + 4))(1);
  }
  *(undefined4 *)(this + 0x50) = 0;
  if (*(int **)(this + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x54) + 4))(1);
  }
  *(undefined4 *)(this + 0x54) = 0;
  FTreeItem::OnItemKillFocus((FTreeItem *)this,param_1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002031 WWindow::OnKillFocus

/* public: virtual void __thiscall WWindow::OnKillFocus(struct HWND__ *) */

void __thiscall WWindow::OnKillFocus(WWindow *this,HWND__ *param_1)

{
                    /* 0x2031  763  ?OnKillFocus@WWindow@@UAEXPAUHWND__@@@Z */
  return;
}


// ==== 1100203b WTreeView::WTreeView

/* public: __thiscall WTreeView::WTreeView(class WTreeView const &) */

WTreeView * __thiscall WTreeView::WTreeView(WTreeView *this,WTreeView *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x203b  163  ??0WTreeView@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062ce8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,(WControl *)param_1);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined ***)(this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined ***)(this + 0x58) = FDelegate::vftable;
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002040 WLog::OnClose

/* public: virtual int __thiscall WLog::OnClose(void) */

int __thiscall WLog::OnClose(WLog *this)

{
  wchar_t *pwStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2040  699  ?OnClose@WLog@@UAEHXZ */
  puStack_c = &LAB_11061b20;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(*(int *)this + 8))(0);
  pwStack_18 = u_NoRoute_1106b458;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&pwStack_18,&DAT_1107a670);
}


// ==== 11002045 WDialog::WDialog

/* public: __thiscall WDialog::WDialog(class FName,int,class WWindow *) */

WDialog * __thiscall
WDialog::WDialog(WDialog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *unaff_ESI;
  undefined2 unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2045  83  ??0WDialog@@QAE@VFName@@HPAVWWindow@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063198;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow::WWindow((WWindow *)this,param_2,param_4);
  *(undefined ***)this = vftable;
  *(undefined2 *)(this + 0xc) = unaff_retaddr;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 1100204a WBitmapButton::~WBitmapButton

/* public: virtual __thiscall WBitmapButton::~WBitmapButton(void) */

void __thiscall WBitmapButton::~WBitmapButton(WBitmapButton *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x204a  192  ??1WBitmapButton@@UAE@XZ */
  puStack_8 = &LAB_11062898;
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


// ==== 1100204f WSplitter::GetPackageName

/* public: virtual unsigned short const * __thiscall WSplitter::GetPackageName(void) */

ushort * __thiscall WSplitter::GetPackageName(WSplitter *this)

{
                    /* 0x204f  551  ?GetPackageName@WSplitter@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11002059 FCommandTarget::FCommandTarget

/* public: __thiscall FCommandTarget::FCommandTarget(void) */

void __thiscall FCommandTarget::FCommandTarget(FCommandTarget *this)

{
                    /* 0x2059  7  ??0FCommandTarget@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}


// ==== 1100205e WTerminal::OpenWindow

/* public: void __thiscall WTerminal::OpenWindow(int,int) */

void __thiscall WTerminal::OpenWindow(WTerminal *this,int param_1,int param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  FString *this_00;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  HMENU__ *pHVar9;
  HINSTANCE__ *pHVar10;
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x205e  876  ?OpenWindow@WTerminal@@QAEXHH@Z */
  puStack_c = &LAB_11062269;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) ^ (param_1 * 2 ^ *(uint *)(this + 0x10)) & 2;
  if (*(int *)(this + 0x14) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = *(int *)(*(int *)(this + 0x14) + 4);
  }
  if ((*(uint *)(this + 0x10) & 2) == 0) {
    uVar4 = -(uint)(param_2 != 0) & 0x40000;
  }
  else {
    uVar4 = 0x40;
  }
  puVar1 = LocalizeGeneral(s_Product_11070ed4,(ushort *)u_Core_1106d374,(ushort *)0x0);
  puVar2 = LocalizeGeneral(s_LogWindow_11070ec8,(ushort *)u_Window_1106949c,(ushort *)0x0);
  this_00 = (FString *)FString::Printf((ushort *)aFStack_28,puVar2,puVar1);
  iStack_8._0_1_ = 1;
  pHVar9 = (HMENU__ *)0x0;
  iVar8 = 0x100;
  iVar7 = 0x200;
  iVar6 = -0x80000000;
  iVar5 = -0x80000000;
  uVar3 = (-(uint)((*(uint *)(this + 0x10) & 2) != 0) & 0x46030000) + 0xcc0000;
  pHVar10 = DAT_1109c35c;
  puVar1 = FString::operator*(this_00);
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,uVar4,puVar1,uVar3,iVar5,iVar6,iVar7,iVar8,(HWND__ *)param_1,pHVar9,
             pHVar10);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FString::~FString(aFStack_28);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002063 WUrlButton::WUrlButton

/* public: __thiscall WUrlButton::WUrlButton(class WWindow *,unsigned short const *,int) */

WUrlButton * __thiscall
WUrlButton::WUrlButton(WUrlButton *this,WWindow *param_1,ushort *param_2,int param_3)

{
  undefined **ppuStack_28;
  WUrlButton *pWStack_24;
  code *pcStack_20;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2063  169  ??0WUrlButton@@QAE@PAVWWindow@@PBGH@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062dc7;
  pvStack_c = ExceptionList;
  uStack_1c = 5;
  ppuStack_28 = FDelegate::vftable;
  pcStack_20 = OnClick;
  ExceptionList = &pvStack_c;
  pWStack_24 = this;
  WCoolButton::WCoolButton((WCoolButton *)this,param_1,param_3);
  uStack_1c = 0;
  *(undefined ***)this = vftable;
  FString::FString((FString *)(this + 0x9c),(ushort *)&ppuStack_28);
  *(undefined4 *)(this + 0x98) = 0x19;
  ExceptionList = pWStack_24;
  return this;
}


// ==== 11002068 WColorButton::operator=

/* public: class WColorButton & __thiscall WColorButton::operator=(class WColorButton const &) */

WColorButton * __thiscall WColorButton::operator=(WColorButton *this,WColorButton *param_1)

{
                    /* 0x2068  264  ??4WColorButton@@QAEAAV0@ABV0@@Z */
  WButton::operator=((WButton *)this,(WButton *)param_1);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  return this;
}


// ==== 1100206d WTerminal::GetPackageName

/* public: virtual unsigned short const * __thiscall WTerminal::GetPackageName(void) */

ushort * __thiscall WTerminal::GetPackageName(WTerminal *this)

{
                    /* 0x206d  555  ?GetPackageName@WTerminal@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11002072 WWindow::OnUndo

/* public: virtual void __thiscall WWindow::OnUndo(void) */

void __thiscall WWindow::OnUndo(WWindow *this)

{
                    /* 0x2072  845  ?OnUndo@WWindow@@UAEXXZ */
  return;
}


// ==== 11002077 thunk_FUN_11033050 thunk -> 11033050

// ==== 1100207c FObjectConfigItem::FObjectConfigItem

/* public: __thiscall FObjectConfigItem::FObjectConfigItem(class FObjectConfigItem const &) */

FObjectConfigItem * __thiscall
FObjectConfigItem::FObjectConfigItem(FObjectConfigItem *this,FObjectConfigItem *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x207c  24  ??0FObjectConfigItem@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063e64;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FPropertyItemBase::FPropertyItemBase((FPropertyItemBase *)this,(FPropertyItemBase *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  FString::FString((FString *)(this + 0x50),(FString *)(param_1 + 0x50));
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002086 thunk_FUN_11006b80 thunk -> 11006b80

// ==== 1100208b WThinScrollBar::~WThinScrollBar

/* public: virtual __thiscall WThinScrollBar::~WThinScrollBar(void) */

void __thiscall WThinScrollBar::~WThinScrollBar(WThinScrollBar *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x208b  229  ??1WThinScrollBar@@UAE@XZ */
  puStack_8 = &LAB_110629d8;
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


// ==== 11002095 WWindow::OnPaint

/* public: virtual void __thiscall WWindow::OnPaint(void) */

void __thiscall WWindow::OnPaint(WWindow *this)

{
                    /* 0x2095  805  ?OnPaint@WWindow@@UAEXXZ */
  return;
}


// ==== 1100209a WListBox::SetTop

/* public: void __thiscall WListBox::SetTop(int) */

void __thiscall WListBox::SetTop(WListBox *this,int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x209a  961  ?SetTop@WListBox@@QAEXH@Z */
  puStack_c = &LAB_1105fdd0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0x197,param_1,0);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0x197,param_1,0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100209f WDragInterceptor::WDragInterceptor

/* public: __thiscall WDragInterceptor::WDragInterceptor(void) */

WDragInterceptor * __thiscall WDragInterceptor::WDragInterceptor(WDragInterceptor *this)

{
  WDragInterceptor *pWStack_20;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x209f  87  ??0WDragInterceptor@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063828;
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


// ==== 110020a4 FObjectsItem::GetCaption

/* public: virtual class FString __thiscall FObjectsItem::GetCaption(void)const  */

FString * __thiscall FObjectsItem::GetCaption(FObjectsItem *this)

{
  UObject *this_00;
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  FString *in_stack_00000004;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x20a4  482  ?GetCaption@FObjectsItem@@UBE?AVFString@@XZ */
  puStack_c = &LAB_110607ba;
  pvStack_10 = ExceptionList;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  iVar1 = FString::Len((FString *)(this + 0x3c));
  if (iVar1 == 0) {
    this_00 = *(UObject **)(this + 0x4c);
    if (this_00 == (UObject *)0x0) {
      puVar2 = LocalizeGeneral(s_PropNone_1106c41c,(ushort *)u_Window_1106949c,(ushort *)0x0);
      FString::FString(in_stack_00000004,puVar2);
    }
    else {
      iVar1 = *(int *)(this + 0x5c);
      if (iVar1 == 1) {
        puVar2 = UObject::GetName(this_00);
        puVar3 = LocalizeGeneral(s_PropSingle_1106c40c,(ushort *)u_Window_1106949c,(ushort *)0x0);
        FString::Printf((ushort *)in_stack_00000004,puVar3,puVar2);
      }
      else {
        puVar2 = UObject::GetName(this_00);
        puVar3 = LocalizeGeneral(s_PropMulti_1106c400,(ushort *)u_Window_1106949c,(ushort *)0x0);
        FString::Printf((ushort *)in_stack_00000004,puVar3,puVar2,iVar1);
      }
    }
  }
  else {
    FString::FString(in_stack_00000004,(FString *)(this + 0x3c));
  }
  ExceptionList = pvStack_10;
  return in_stack_00000004;
}


// ==== 110020a9 WThinScrollBar::GetPos

/* public: int __thiscall WThinScrollBar::GetPos(void) */

int __thiscall WThinScrollBar::GetPos(WThinScrollBar *this)

{
  undefined4 in_EDX;
  ulonglong uVar1;
  
                    /* 0x20a9  570  ?GetPos@WThinScrollBar@@QAEHXZ */
  uVar1 = FUN_1103b180(this,in_EDX);
  return (int)uVar1;
}


// ==== 110020b3 FTreeItem::GetReadAddress

/* public: virtual unsigned char * __thiscall FTreeItem::GetReadAddress(class FPropertyItem *,int)
    */

uchar * __thiscall FTreeItem::GetReadAddress(FTreeItem *this,FPropertyItem *param_1,int param_2)

{
  uchar *puVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x20b3  577  ?GetReadAddress@FTreeItem@@UAEPAEPAVFPropertyItem@@H@Z */
  puStack_c = &LAB_110603a0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0xc) != 0) {
    ExceptionList = &pvStack_10;
    puVar1 = (uchar *)(**(code **)(**(int **)(this + 0xc) + 0x68))(param_1,param_2);
    ExceptionList = pvStack_10;
    return puVar1;
  }
  return (uchar *)0x0;
}


// ==== 110020b8 WCheckBox::Clicked

/* public: virtual void __thiscall WCheckBox::Clicked(void) */

void __thiscall WCheckBox::Clicked(WCheckBox *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x20b8  415  ?Clicked@WCheckBox@@UAEXXZ */
  puStack_c = &LAB_1105f710;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WButton::Clicked((WButton *)this);
  if (*(int *)(this + 0x94) == 0) {
    *(undefined4 *)(this + 0x8c) = 0;
  }
  else {
    *(uint *)(this + 0x8c) = (uint)(*(int *)(this + 0x8c) == 0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110020bd WWindow::OnHScroll

/* public: virtual void __thiscall WWindow::OnHScroll(unsigned int,long) */

void __thiscall WWindow::OnHScroll(WWindow *this,uint param_1,long param_2)

{
                    /* 0x20bd  739  ?OnHScroll@WWindow@@UAEXIJ@Z */
  return;
}


// ==== 110020c7 thunk_FUN_11004ba0 thunk -> 11004ba0

// ==== 110020cc WProgressBar::WProgressBar

/* public: __thiscall WProgressBar::WProgressBar(void) */

WProgressBar * __thiscall WProgressBar::WProgressBar(WProgressBar *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x20cc  118  ??0WProgressBar@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110634d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110020d1 WWindow::MoveWindow

/* public: void __thiscall WWindow::MoveWindow(int,int,int,int,int) */

void __thiscall
WWindow::MoveWindow(WWindow *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
                    /* 0x20d1  675  ?MoveWindow@WWindow@@QAEXHHHHH@Z */
  ::MoveWindow(*(HWND *)(this + 4),param_1,param_2,param_3,param_4,param_5);
  return;
}


// ==== 110020d6 FObjectConfigItem::Serialize

/* public: virtual void __thiscall FObjectConfigItem::Serialize(class FArchive &) */

void __thiscall FObjectConfigItem::Serialize(FObjectConfigItem *this,FArchive *param_1)

{
  int *piVar1;
  FObjectConfigItem *pFVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x20d6  909  ?Serialize@FObjectConfigItem@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_11061130;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FPropertyItemBase::Serialize((FPropertyItemBase *)this,param_1);
  pFVar2 = this + 0x5c;
  piVar1 = (int *)(**(code **)(*(int *)param_1 + 0x1c))(pFVar2,this + 0x60);
  thunk_FUN_110132b0(piVar1,pFVar2);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110020e0 WWindow::Serialize

/* public: virtual void __thiscall WWindow::Serialize(class FArchive &) */

void __thiscall WWindow::Serialize(WWindow *this,FArchive *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x20e0  916  ?Serialize@WWindow@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_11061a10;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(*(int *)param_1 + 0x1c))(this + 8);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110020ea WItemBox::WItemBox

/* public: __thiscall WItemBox::WItemBox(void) */

WItemBox * __thiscall WItemBox::WItemBox(WItemBox *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x20ea  98  ??0WItemBox@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063658;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WListBox::WListBox((WListBox *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110020ef WComboBox::GetString

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: virtual class FString __thiscall WComboBox::GetString(int) */

int __thiscall WComboBox::GetString(WComboBox *this,int param_1)

{
  uint uVar1;
  ushort *lParam;
  WPARAM in_stack_00000008;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x20ef  591  ?GetString@WComboBox@@UAE?AVFString@@H@Z */
  puStack_c = &LAB_1105fb4a;
  pvStack_10 = ExceptionList;
  lParam = (ushort *)0x0;
  uStack_8 = 1;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    uVar1 = SendMessageA(*(HWND *)(this + 4),0x149,in_stack_00000008,0);
  }
  else {
    ExceptionList = &pvStack_10;
    uVar1 = SendMessageW(*(HWND *)(this + 4),0x149,in_stack_00000008,0);
  }
  if (uVar1 == 0xffffffff) {
    FString::FString((FString *)param_1,(ushort *)&DAT_11068ff8);
  }
  else {
    if ((*(int *)GUnicode_exref == 0) || (*(int *)GUnicodeOS_exref != 0)) {
      if ((uVar1 & 0x7fffffff) != 0x7fffffff) {
        lParam = (ushort *)&stack0xffffffd4;
      }
      SendMessageW(*(HWND *)(this + 4),0x148,in_stack_00000008,(LPARAM)lParam);
    }
    else {
      if (uVar1 != 0xffffffff) {
        lParam = (ushort *)&stack0xffffffd4;
      }
      SendMessageA(*(HWND *)(this + 4),0x148,in_stack_00000008,(LPARAM)lParam);
      lParam = appFromAnsi((char *)lParam,(ushort *)0x0);
    }
    FString::FString((FString *)param_1,lParam);
  }
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 110020f4 WTabControl::GetString

/* public: class FString __thiscall WTabControl::GetString(int) */

int __thiscall WTabControl::GetString(WTabControl *this,int param_1)

{
  WPARAM in_stack_00000008;
  ushort uStack_23c;
  undefined1 auStack_23a [510];
  undefined4 auStack_3c [3];
  ushort *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x20f4  593  ?GetString@WTabControl@@QAE?AVFString@@H@Z */
  puStack_c = &LAB_1105f94a;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffdb8;
  uStack_18 = 0;
  uStack_8 = 1;
  uStack_23c = 0;
  ExceptionList = &pvStack_10;
  _memset(auStack_23a,0,0x1fe);
  auStack_3c[0] = 1;
  puStack_30 = &uStack_23c;
  uStack_2c = 0x100;
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(*(HWND *)(this + 4),0x133c,in_stack_00000008,(LPARAM)auStack_3c);
  }
  else {
    SendMessageW(*(HWND *)(this + 4),0x133c,in_stack_00000008,(LPARAM)auStack_3c);
  }
  FString::FString((FString *)param_1,&uStack_23c);
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 110020f9 WWindow::SetRedraw

/* public: void __thiscall WWindow::SetRedraw(int) */

void __thiscall WWindow::SetRedraw(WWindow *this,int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x20f9  952  ?SetRedraw@WWindow@@QAEXH@Z */
  puStack_c = &LAB_11061e70;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0xb,param_1,0);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0xb,param_1,0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110020fe WEdit::WEdit

/* public: __thiscall WEdit::WEdit(class WWindow *,int,long (__stdcall*)(struct HWND__ *,unsigned
   int,unsigned int,long)) */

WEdit * __thiscall
WEdit::WEdit(WEdit *this,WWindow *param_1,int param_2,_func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x20fe  89  ??0WEdit@@QAE@PAVWWindow@@HP6GJPAUHWND__@@IIJ@Z@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11061428;
  pvStack_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = SuperProc;
  }
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,param_1,param_2,param_3);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined ***)(this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002108 WCheckListBox::OnLeftButtonDown

/* public: virtual void __thiscall WCheckListBox::OnLeftButtonDown(void) */

void __thiscall WCheckListBox::OnLeftButtonDown(WCheckListBox *this)

{
  int iVar1;
  void *pvVar2;
  tagPOINT atStack_24 [2];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2108  767  ?OnLeftButtonDown@WCheckListBox@@UAEXXZ */
  puStack_c = &LAB_1105ff50;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::OnLeftButtonDown((WWindow *)this);
  GetCursorPos(atStack_24);
  ScreenToClient(*(HWND *)(this + 4),atStack_24);
  if (atStack_24[0].x < 0x11) {
    iVar1 = WListBox::ItemFromPoint((WListBox *)this,atStack_24[0].x,atStack_24[0].y);
    pvVar2 = WListBox::GetItemData((WListBox *)this,iVar1);
    WListBox::SetItemData((WListBox *)this,iVar1,(uint)(pvVar2 == (void *)0x0));
  }
  if (*(int *)(this + 0x14) == 0) {
    appFailAssert(s_OwnerWindow_1106abb4,s___Controls_cpp_11068b54,0x891);
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    PostMessageA(*(HWND *)(*(int *)(this + 0x14) + 4),0x111,0x8021,0);
  }
  else {
    PostMessageW(*(HWND *)(*(int *)(this + 0x14) + 4),0x111,0x8021,0);
  }
  InvalidateRect(*(HWND *)(this + 4),(RECT *)0x0,0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100210d thunk_FUN_1101db20 thunk -> 1101db20

// ==== 11002112 thunk_FUN_1101c460 thunk -> 1101c460

// ==== 11002117 FClassItem::Expand

/* public: virtual void __thiscall FClassItem::Expand(void) */

void __thiscall FClassItem::Expand(FClassItem *this)

{
  int iVar1;
  FCategoryItem *pFVar2;
  int iVar3;
  int iStack_38;
  int iStack_34;
  int iStack_2c;
  int iStack_28;
  int iStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x2117  449  ?Expand@FClassItem@@UAEXXZ */
  puStack_c = &LAB_11061938;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffbc;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  thunk_FUN_11015a00((FArray *)&iStack_38);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  thunk_FUN_1101c650(&iStack_2c,*(int *)(this + 0x4c));
  while (iVar3 = iStack_28, iStack_28 != 0) {
    iVar1 = (**(code **)(*(int *)this + 0x78))(*(undefined4 *)(iStack_28 + 0x48));
    if (iVar1 != 0) {
      thunk_FUN_1101db20(&iStack_38,(FName *)(iVar3 + 0x4c));
    }
    iStack_28 = *(int *)(iVar3 + 0x38);
    thunk_FUN_11015cb0(&iStack_2c);
  }
  for (iVar3 = 0; iStack_1c = iVar3, iVar3 < iStack_34; iVar3 = iVar3 + 1) {
    pFVar2 = (FCategoryItem *)thunk_FUN_110115b0(0x44,u_FCategoryItem_1106f1f8);
    if (pFVar2 == (FCategoryItem *)0x0) {
      uStack_18 = 0;
    }
    else {
      uStack_18 = FCategoryItem::FCategoryItem
                            (pFVar2,*(undefined4 *)(this + 8),this,*(undefined4 *)(this + 0x4c),
                             *(undefined4 *)(iStack_38 + iVar3 * 4),1);
    }
    thunk_FUN_1101bf00(this + 0x30,&uStack_18);
  }
  FTreeItem::Expand((FTreeItem *)this);
  uStack_8 = uStack_8 & 0xffffff00;
  thunk_FUN_1101c590((FArray *)&iStack_38);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100211c thunk_FUN_1101dd00 thunk -> 1101dd00

// ==== 11002121 FPropertyItem::OnBrowseButton

/* public: void __thiscall FPropertyItem::OnBrowseButton(void) */

void __thiscall FPropertyItem::OnBrowseButton(FPropertyItem *this)

{
  int iVar1;
  UObject *pUVar2;
  wchar_t *pwVar3;
  ushort auStack_220 [262];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2121  689  ?OnBrowseButton@FPropertyItem@@QAEXXZ */
  puStack_c = &LAB_11060d30;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffdd4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pUVar2 = thunk_FUN_11014140(*(UObject **)(this + 0x3c));
  if (*(int *)(pUVar2 + 0x78) == 0) {
    pwVar3 = u_Texture_1106d6bc;
  }
  else {
    pwVar3 = (wchar_t *)UObject::GetName(*(UObject **)(pUVar2 + 0x78));
  }
  appSprintf(auStack_220,(ushort *)u_BROWSECLASS_CLASS__s_1106d688,pwVar3);
  iVar1 = *(int *)(this + 8);
  if (*(int *)(iVar1 + 0x18) != 0) {
    (**(code **)(**(int **)(iVar1 + 0x18) + 0xc))(iVar1,auStack_220);
  }
  (**(code **)(*(int *)this + 0x28))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002126 FObjectConfigItem::LazyLoadClass

/* public: void __thiscall FObjectConfigItem::LazyLoadClass(void) */

void __thiscall FObjectConfigItem::LazyLoadClass(FObjectConfigItem *this)

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
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x2126  667  ?LazyLoadClass@FObjectConfigItem@@QAEXXZ */
  puStack_c = &LAB_11060829;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  iStack_8 = 0;
  if ((*(int *)(this + 0x60) == 0) && (*(int *)(this + 100) == 0)) {
    pUVar9 = (UPackageMap *)0x0;
    uVar7 = 2;
    puVar5 = (ushort *)0x0;
    ExceptionList = &pvStack_10;
    puVar1 = FString::operator*((FString *)(this + 0x50));
    pUVar4 = (UObject *)0x0;
    pUVar2 = UObject::StaticClass();
    pUVar2 = UObject::StaticLoadClass(pUVar2,pUVar4,puVar1,puVar5,uVar7,pUVar9);
    *(UClass **)(this + 0x60) = pUVar2;
    if (pUVar2 == (UClass *)0x0) {
      *(undefined4 *)(this + 100) = 1;
      uVar6 = *(undefined4 *)(this + 0x50);
      uVar8 = *(undefined4 *)(this + 0x54);
      uVar10 = *(undefined4 *)(this + 0x58);
      puVar1 = LocalizeError(s_FailedConfigLoad_1106c5c8,(ushort *)u_Window_1106949c,(ushort *)0x0);
      pFVar3 = (FString *)FString::Printf((ushort *)aFStack_28,puVar1,uVar6,uVar8,uVar10);
      iStack_8._0_1_ = 1;
      FString::operator=((FString *)(this + 0x3c),pFVar3);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FString::~FString(aFStack_28);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100212b WPropertySheet::WPropertySheet

/* public: __thiscall WPropertySheet::WPropertySheet(class WPropertySheet const &) */

WPropertySheet * __thiscall
WPropertySheet::WPropertySheet(WPropertySheet *this,WPropertySheet *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x212b  127  ??0WPropertySheet@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110627b3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,(WControl *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  thunk_FUN_1102aac0(this + 0x44,(int *)(param_1 + 0x44));
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002135 WComboBox::operator=

/* public: class WComboBox & __thiscall WComboBox::operator=(class WComboBox const &) */

WComboBox * __thiscall WComboBox::operator=(WComboBox *this,WComboBox *param_1)

{
                    /* 0x2135  265  ??4WComboBox@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  return this;
}


// ==== 1100213a WProperties::OnDestroy

/* public: virtual void __thiscall WProperties::OnDestroy(void) */

void __thiscall WProperties::OnDestroy(WProperties *this)

{
  WProperties *pWStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x213a  720  ?OnDestroy@WProperties@@UAEXXZ */
  puStack_c = &LAB_11061230;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::OnDestroy((WWindow *)this);
  pWStack_18 = this;
  thunk_FUN_1101bea0(&WWindow::_DeleteWindows,&pWStack_18);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100213f WBitmapButton::OnDestroy

/* public: virtual void __thiscall WBitmapButton::OnDestroy(void) */

void __thiscall WBitmapButton::OnDestroy(WBitmapButton *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x213f  715  ?OnDestroy@WBitmapButton@@UAEXXZ */
  puStack_c = &LAB_1105f630;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::OnDestroy((WWindow *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002144 thunk_FUN_11030ec0 thunk -> 11030ec0

// ==== 11002149 WLabel::~WLabel

/* public: virtual __thiscall WLabel::~WLabel(void) */

void __thiscall WLabel::~WLabel(WLabel *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2149  210  ??1WLabel@@UAE@XZ */
  puStack_8 = &LAB_1105f828;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WControl::~WControl((WControl *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1100214e WTreeView::operator=

/* public: class WTreeView & __thiscall WTreeView::operator=(class WTreeView const &) */

WTreeView * __thiscall WTreeView::operator=(WTreeView *this,WTreeView *param_1)

{
                    /* 0x214e  299  ??4WTreeView@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  return this;
}


// ==== 11002153 WListBox::GetWindowClassName

/* public: virtual void __thiscall WListBox::GetWindowClassName(unsigned short *) */

void __thiscall WListBox::GetWindowClassName(WListBox *this,ushort *param_1)

{
                    /* 0x2153  617  ?GetWindowClassName@WListBox@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WListBox_1106fccc);
  return;
}


// ==== 11002158 WThinScrollBar::WThinScrollBar

/* public: __thiscall WThinScrollBar::WThinScrollBar(class WThinScrollBar const &) */

WThinScrollBar * __thiscall
WThinScrollBar::WThinScrollBar(WThinScrollBar *this,WThinScrollBar *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2158  153  ??0WThinScrollBar@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062a18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow::WWindow((WWindow *)this,(WWindow *)param_1);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x3c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100215d FContainer::RefreshControls

/* public: void __thiscall FContainer::RefreshControls(void) */

void __thiscall FContainer::RefreshControls(FContainer *this)

{
  int *piVar1;
  uint uVar2;
  undefined4 *this_00;
  int iVar3;
  int *piStack_58;
  int *piStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  tagRECT tStack_48;
  undefined1 auStack_38 [12];
  int iStack_2c;
  undefined4 *puStack_24;
  int iStack_1c;
  undefined4 *puStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x215d  892  ?RefreshControls@FContainer@@QAEXXZ */
  puStack_c = &LAB_110619be;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff9c;
  iVar3 = 0;
  iStack_8 = 0;
  if (*(int *)this != 0) {
    ExceptionList = &pvStack_10;
    puStack_24 = (undefined4 *)thunk_FUN_11004ba0(4);
    iStack_8._0_1_ = 1;
    if (puStack_24 == (undefined4 *)0x0) {
      puStack_18 = (undefined4 *)0x0;
    }
    else {
      puStack_18 = thunk_FUN_11022700(puStack_24);
    }
    iStack_1c = 0;
    piStack_58 = *(int **)this;
    uStack_4c = 0;
    iStack_8._0_1_ = 2;
    piStack_54 = piStack_58;
    for (iStack_50 = 0; this_00 = puStack_18, iStack_50 < piStack_54[1]; iStack_50 = iStack_50 + 1)
    {
      piVar1 = (int *)(*piStack_54 + 8 + iStack_50 * 0x28);
      if (iVar3 != *piVar1) {
        if (iVar3 != 0) {
          if (puStack_18 != (undefined4 *)0x0) {
            thunk_FUN_11022730(puStack_18,1);
          }
          puStack_24 = (undefined4 *)thunk_FUN_11004ba0(4);
          iStack_8._0_1_ = 3;
          if (puStack_24 == (undefined4 *)0x0) {
            puStack_18 = (undefined4 *)0x0;
          }
          else {
            puStack_18 = thunk_FUN_11022700(puStack_24);
          }
          iStack_8._0_1_ = 2;
        }
        iVar3 = *piVar1;
        iStack_1c = iVar3;
      }
      GetClientRect((HWND)*piVar1,&tStack_48);
      GetWindowRect((HWND)piVar1[1],(LPRECT)auStack_38);
      ScreenToClient((HWND)*piVar1,(LPPOINT)auStack_38);
      ScreenToClient((HWND)*piVar1,(LPPOINT)(auStack_38 + 8));
      if ((piVar1[2] & 2U) == 0) {
        if ((piVar1[2] & 8U) != 0) {
          auStack_38._0_4_ = piVar1[3] + tStack_48.right;
        }
      }
      else {
        auStack_38._0_4_ = piVar1[3] + tStack_48.left;
      }
      if ((piVar1[2] & 1U) == 0) {
        if ((piVar1[2] & 4U) != 0) {
          auStack_38._4_4_ = piVar1[4] + tStack_48.bottom;
        }
      }
      else {
        auStack_38._4_4_ = piVar1[4] + tStack_48.top;
      }
      uVar2 = piVar1[5];
      if ((uVar2 & 0x10) == 0) {
        if ((uVar2 & 2) == 0) {
          if ((uVar2 & 8) != 0) {
            auStack_38._8_4_ = piVar1[6] + tStack_48.right;
          }
        }
        else {
          auStack_38._8_4_ = piVar1[6] + tStack_48.left;
        }
      }
      else {
        auStack_38._8_4_ = piVar1[6] + auStack_38._0_4_;
      }
      uVar2 = piVar1[5];
      if ((uVar2 & 0x20) == 0) {
        if ((uVar2 & 1) == 0) {
          if ((uVar2 & 4) != 0) {
            iStack_2c = piVar1[7] + tStack_48.bottom;
          }
        }
        else {
          iStack_2c = piVar1[7] + tStack_48.top;
        }
      }
      else {
        iStack_2c = piVar1[7] + auStack_38._4_4_;
      }
      MoveWindow((HWND)piVar1[1],auStack_38._0_4_,auStack_38._4_4_,
                 auStack_38._8_4_ - auStack_38._0_4_,iStack_2c - auStack_38._4_4_,1);
    }
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    thunk_FUN_110228a0(&piStack_58);
    if (this_00 != (undefined4 *)0x0) {
      thunk_FUN_11022730(this_00,1);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002167 WPropertyPage::Finalize

/* public: void __thiscall WPropertyPage::Finalize(void) */

void __thiscall WPropertyPage::Finalize(WPropertyPage *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  WLabel *pWVar4;
  ushort *puVar5;
  WLabel *pWStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x2167  456  ?Finalize@WPropertyPage@@QAEXXZ */
  puStack_c = &LAB_1106010b;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffbc;
  iStack_8 = 0;
  iStack_18 = 0;
  ExceptionList = &pvStack_10;
  while (iVar3 = iStack_18, iStack_18 < *(int *)(this + 0x40)) {
    pWVar4 = (WLabel *)thunk_FUN_11004ba0(0x40);
    iStack_8._0_1_ = 1;
    if (pWVar4 == (WLabel *)0x0) {
      pWVar4 = (WLabel *)0x0;
    }
    else {
      pWVar4 = (WLabel *)
               WLabel::WLabel(pWVar4,(WWindow *)this,*(int *)(*(int *)(this + 0x3c) + iVar3 * 0x28),
                              (_func_long_HWND___ptr_uint_uint_long *)0x0);
    }
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    pWStack_1c = pWVar4;
    thunk_FUN_1100de40(this + 0x48,&pWStack_1c);
    WLabel::OpenWindow(pWVar4,1,0,0);
    iVar3 = iVar3 * 0x28;
    piVar1 = (int *)(*(int *)(this + 0x3c) + 4 + iVar3);
    MoveWindow(*(HWND *)(pWVar4 + 4),*piVar1,piVar1[1],piVar1[2] - *piVar1,piVar1[3] - piVar1[1],1);
    iVar2 = *(int *)pWVar4;
    puVar5 = FString::operator*((FString *)(*(int *)(this + 0x3c) + iVar3 + 0x14));
    (**(code **)(iVar2 + 0x2c))(puVar5);
    if (*(int *)GUnicodeOS_exref == 0) {
      SetWindowLongA(*(HWND *)(pWVar4 + 4),-0x10,*(LONG *)(*(int *)(this + 0x3c) + iVar3 + 0x20));
    }
    else {
      SetWindowLongW(*(HWND *)(pWVar4 + 4),-0x10,*(LONG *)(*(int *)(this + 0x3c) + iVar3 + 0x20));
    }
    if (*(int *)GUnicodeOS_exref == 0) {
      SetWindowLongA(*(HWND *)(pWVar4 + 4),-0x14,*(LONG *)(*(int *)(this + 0x3c) + iVar3 + 0x24));
      iStack_18 = iStack_18 + 1;
    }
    else {
      SetWindowLongW(*(HWND *)(pWVar4 + 4),-0x14,*(LONG *)(*(int *)(this + 0x3c) + iVar3 + 0x24));
      iStack_18 = iStack_18 + 1;
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002171 FDelegate::FDelegate

/* public: __thiscall FDelegate::FDelegate(struct FDelegate const &) */

void __thiscall FDelegate::FDelegate(FDelegate *this,FDelegate *param_1)

{
                    /* 0x2171  14  ??0FDelegate@@QAE@ABU0@@Z */
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return;
}


// ==== 11002176 WTimeScrollBar::GetThumbRect

/* public: struct FRect __thiscall WTimeScrollBar::GetThumbRect(void) */

CRect * __thiscall WTimeScrollBar::GetThumbRect(WTimeScrollBar *this)

{
  int iVar1;
  undefined4 extraout_ECX;
  int iVar2;
  ulonglong uVar3;
  CRect *in_stack_00000004;
  tagRECT tStack_30;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2176  597  ?GetThumbRect@WTimeScrollBar@@QAE?AUFRect@@XZ */
  puStack_c = &LAB_11061ed0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  GetClientRect(*(HWND *)(this + 4),&tStack_30);
  iVar2 = tStack_30.top + 2;
  tStack_30.bottom = tStack_30.bottom + -2;
  iVar1 = *(int *)(this + 0x70);
  iStack_18 = (tStack_30.right - iVar1) + -4;
  tStack_30.top = iVar2;
  uVar3 = FUN_1103b180(extraout_ECX,iStack_18);
  tStack_30.left = (LONG)uVar3;
  tStack_30.right = iVar1 + tStack_30.left;
  CRect::CRect(in_stack_00000004,tStack_30.left,iVar2,tStack_30.right,tStack_30.bottom);
  ExceptionList = pvStack_10;
  return in_stack_00000004;
}


// ==== 1100217b FCommandTarget::FCommandTarget

/* public: __thiscall FCommandTarget::FCommandTarget(class FCommandTarget const &) */

void __thiscall FCommandTarget::FCommandTarget(FCommandTarget *this,FCommandTarget *param_1)

{
                    /* 0x217b  6  ??0FCommandTarget@@QAE@ABV0@@Z */
  *(undefined ***)this = vftable;
  return;
}


// ==== 11002185 WScrollBar::WScrollBar

/* public: __thiscall WScrollBar::WScrollBar(class WScrollBar const &) */

WScrollBar * __thiscall WScrollBar::WScrollBar(WScrollBar *this,WScrollBar *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2185  133  ??0WScrollBar@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062c68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,(WControl *)param_1);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100218a WComboBox::AddString

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: virtual void __thiscall WComboBox::AddString(unsigned short const *) */

void __thiscall WComboBox::AddString(WComboBox *this,ushort *param_1)

{
  HWND hWnd;
  int iVar1;
  char *pcVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x218a  399  ?AddString@WComboBox@@UAEXPBG@Z */
  puStack_c = &LAB_1105fb20;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
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
    SendMessageA(hWnd,0x143,0,(LPARAM)pcVar2);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0x143,0,(LPARAM)param_1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002194 WTabControl::GetIndexFromlParam

/* public: int __thiscall WTabControl::GetIndexFromlParam(int) */

int __thiscall WTabControl::GetIndexFromlParam(WTabControl *this,int param_1)

{
  WPARAM wParam;
  int iVar1;
  undefined4 auStack_3c [6];
  int iStack_24;
  WPARAM WStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2194  512  ?GetIndexFromlParam@WTabControl@@QAEHH@Z */
  puStack_c = &LAB_1105f920;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffb8;
  uStack_8 = 0;
  auStack_3c[0] = 8;
  WStack_18 = 0;
  ExceptionList = &pvStack_10;
  while( true ) {
    wParam = WStack_18;
    iVar1 = GetCount(this);
    if (iVar1 <= (int)wParam) {
      ExceptionList = pvStack_10;
      return -1;
    }
    if (*(int *)GUnicodeOS_exref == 0) {
      SendMessageA(*(HWND *)(this + 4),0x133c,wParam,(LPARAM)auStack_3c);
    }
    else {
      SendMessageW(*(HWND *)(this + 4),0x133c,wParam,(LPARAM)auStack_3c);
    }
    if (iStack_24 == param_1) break;
    WStack_18 = wParam + 1;
  }
  ExceptionList = pvStack_10;
  return wParam;
}


// ==== 1100219e WWindow::OnMouseLeave

/* public: virtual void __thiscall WWindow::OnMouseLeave(void) */

void __thiscall WWindow::OnMouseLeave(WWindow *this)

{
                    /* 0x219e  787  ?OnMouseLeave@WWindow@@UAEXXZ */
  return;
}


// ==== 110021a8 WWizardDialog::OnNext

/* public: virtual void __thiscall WWizardDialog::OnNext(void) */

void __thiscall WWizardDialog::OnNext(WWizardDialog *this)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x21a8  796  ?OnNext@WWizardDialog@@UAEXXZ */
  puStack_c = &LAB_11060270;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0x2f0) != 0) {
    ExceptionList = &pvStack_10;
    puVar1 = (undefined4 *)thunk_FUN_1100f510(this + 0x2ec,0);
    iVar2 = (**(code **)(*(int *)*puVar1 + 0xfc))();
    if (iVar2 != 0) {
      puVar1 = (undefined4 *)thunk_FUN_1100f510(this + 0x2ec,0);
      iVar2 = (**(code **)(*(int *)*puVar1 + 0xf4))();
      if (iVar2 != 0) {
        (**(code **)(*(int *)this + 0xf0))(iVar2);
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110021ad WSplitterPane::GetWindowClassName

/* public: virtual void __thiscall WSplitterPane::GetWindowClassName(unsigned short *) */

void __thiscall WSplitterPane::GetWindowClassName(WSplitterPane *this,ushort *param_1)

{
                    /* 0x21ad  630  ?GetWindowClassName@WSplitterPane@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WSplitterPane_1106fe14);
  return;
}


// ==== 110021b2 WTabControl::~WTabControl

/* public: virtual __thiscall WTabControl::~WTabControl(void) */

void __thiscall WTabControl::~WTabControl(WTabControl *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x21b2  226  ??1WTabControl@@UAE@XZ */
  puStack_8 = &LAB_1105f7f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WControl::~WControl((WControl *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 110021b7 thunk_FUN_110338a0 thunk -> 110338a0

// ==== 110021bc thunk_FUN_1101bf30 thunk -> 1101bf30

// ==== 110021c1 WWindow::OnEraseBkgnd

/* public: virtual int __thiscall WWindow::OnEraseBkgnd(void) */

int __thiscall WWindow::OnEraseBkgnd(WWindow *this)

{
                    /* 0x21c1  734  ?OnEraseBkgnd@WWindow@@UAEHXZ */
  return 0;
}


// ==== 110021c6 thunk_FUN_1102a950 thunk -> 1102a950

// ==== 110021cb WTerminal::SelectTyping

/* public: void __thiscall WTerminal::SelectTyping(void) */

void __thiscall WTerminal::SelectTyping(WTerminal *this)

{
  int iVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x21cb  906  ?SelectTyping@WTerminal@@QAEXXZ */
  puStack_c = &LAB_11061f30;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = (**(code **)(*(int *)(this + 0x40) + 0x30))();
  iVar2 = appStrlen((ushort *)(this + 0xa8));
  WEdit::SetSelection((WEdit *)(this + 0x40),(iVar1 - iVar2 < 0) - 1 & iVar1 - iVar2,iVar1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110021d0 WWindow::OnMiddleButtonDoubleClick

/* public: virtual void __thiscall WWindow::OnMiddleButtonDoubleClick(void) */

void __thiscall WWindow::OnMiddleButtonDoubleClick(WWindow *this)

{
                    /* 0x21d0  784  ?OnMiddleButtonDoubleClick@WWindow@@UAEXXZ */
  return;
}


// ==== 110021d5 FObjectsItem::FObjectsItem

/* public: __thiscall FObjectsItem::FObjectsItem(class FObjectsItem const &) */

FObjectsItem * __thiscall FObjectsItem::FObjectsItem(FObjectsItem *this,FObjectsItem *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x21d5  26  ??0FObjectsItem@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063ba3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FPropertyItemBase::FPropertyItemBase((FPropertyItemBase *)this,(FPropertyItemBase *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  thunk_FUN_1102a7a0(this + 0x58,(int *)(param_1 + 0x58));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110021da FControlSnoop::FControlSnoop

/* public: __thiscall FControlSnoop::FControlSnoop(void) */

void __thiscall FControlSnoop::FControlSnoop(FControlSnoop *this)

{
                    /* 0x21da  13  ??0FControlSnoop@@QAE@XZ */
  *(undefined ***)this = vftable;
  return;
}


// ==== 110021df WListBox::InsertItemAfter

/* public: void __thiscall WListBox::InsertItemAfter(void const *,void const *) */

void __thiscall WListBox::InsertItemAfter(WListBox *this,void *param_1,void *param_2)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x21df  650  ?InsertItemAfter@WListBox@@QAEXPBX0@Z */
  puStack_c = &LAB_1105ff10;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = FindItemChecked(this,param_1);
  InsertItem(this,iVar1 + 1,param_2);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110021e9 WTimeScrollBar::OpenWindow

/* public: void __thiscall WTimeScrollBar::OpenWindow(int,int,int) */

void __thiscall WTimeScrollBar::OpenWindow(WTimeScrollBar *this,int param_1,int param_2,int param_3)

{
  HWND__ *pHVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x21e9  878  ?OpenWindow@WTimeScrollBar@@QAEXHHH@Z */
  puStack_c = &LAB_11062220;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0x14) == 0) {
    pHVar1 = (HWND__ *)0x0;
  }
  else {
    pHVar1 = *(HWND__ **)(*(int *)(this + 0x14) + 4);
  }
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)0x0,0x56000000,param_1,param_2,param_3,0x11,pHVar1,
             (HMENU__ *)0x0,DAT_1109c35c);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110021ee WListView::WListView

/* public: __thiscall WListView::WListView(void) */

WListView * __thiscall WListView::WListView(WListView *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x21ee  107  ??0WListView@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110636d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined ***)(this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110021f3 WLabel::GetWindowClassName

/* public: virtual void __thiscall WLabel::GetWindowClassName(unsigned short *) */

void __thiscall WLabel::GetWindowClassName(WLabel *this,ushort *param_1)

{
                    /* 0x21f3  616  ?GetWindowClassName@WLabel@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WLabel_110695cc);
  return;
}


// ==== 110021fd thunk_FUN_1101bf60 thunk -> 1101bf60

// ==== 11002202 WWindow::OnFinishSplitterDrag

/* public: virtual void __thiscall WWindow::OnFinishSplitterDrag(class WDragInterceptor *,int) */

void __thiscall WWindow::OnFinishSplitterDrag(WWindow *this,WDragInterceptor *param_1,int param_2)

{
                    /* 0x2202  738  ?OnFinishSplitterDrag@WWindow@@UAEXPAVWDragInterceptor@@H@Z */
  return;
}


// ==== 11002207 WLabel::WLabel

/* public: __thiscall WLabel::WLabel(class WWindow *,int,long (__stdcall*)(struct HWND__ *,unsigned
   int,unsigned int,long)) */

WLabel * __thiscall
WLabel::WLabel(WLabel *this,WWindow *param_1,int param_2,
              _func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2207  100  ??0WLabel@@QAE@PAVWWindow@@HP6GJPAUHWND__@@IIJ@Z@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110600c8;
  pvStack_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = SuperProc;
  }
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,param_1,param_2,param_3);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100220c WWizardDialog::WWizardDialog

/* public: __thiscall WWizardDialog::WWizardDialog(class WWizardDialog const &) */

WWizardDialog * __thiscall WWizardDialog::WWizardDialog(WWizardDialog *this,WWizardDialog *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x220c  173  ??0WWizardDialog@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110641b9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WDialog::WDialog((WDialog *)this,(WDialog *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  WCoolButton::WCoolButton((WCoolButton *)(this + 0x3c),(WCoolButton *)(param_1 + 0x3c));
  uStack_4._0_1_ = 1;
  WCoolButton::WCoolButton((WCoolButton *)(this + 0xd8),(WCoolButton *)(param_1 + 0xd8));
  uStack_4._0_1_ = 2;
  WCoolButton::WCoolButton((WCoolButton *)(this + 0x174),(WCoolButton *)(param_1 + 0x174));
  uStack_4._0_1_ = 3;
  WCoolButton::WCoolButton((WCoolButton *)(this + 0x210),(WCoolButton *)(param_1 + 0x210));
  uStack_4._0_1_ = 4;
  WLabel::WLabel((WLabel *)(this + 0x2ac),(WLabel *)(param_1 + 0x2ac));
  uStack_4 = CONCAT31(uStack_4._1_3_,5);
  thunk_FUN_1102aef0(this + 0x2ec,(int *)(param_1 + 0x2ec));
  *(undefined4 *)(this + 0x2f8) = *(undefined4 *)(param_1 + 0x2f8);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002211 WClassProperties::~WClassProperties

/* public: virtual __thiscall WClassProperties::~WClassProperties(void) */

void __thiscall WClassProperties::~WClassProperties(WClassProperties *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x2211  196  ??1WClassProperties@@UAE@XZ */
  puStack_8 = &LAB_11063d9e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable_for_WWindow_;
  *(undefined ***)(this + 0x3c) = vftable_for_FControlSnoop_;
  uStack_4 = 1;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  FPropertyItemBase::~FPropertyItemBase((FPropertyItemBase *)(this + 0xfc));
  uStack_4 = 0xffffffff;
  WProperties::~WProperties((WProperties *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11002216 WListView::WListView

/* public: __thiscall WListView::WListView(class WListView const &) */

WListView * __thiscall WListView::WListView(WListView *this,WListView *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2216  105  ??0WListView@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063718;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,(WControl *)param_1);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined ***)(this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100221b WLog::~WLog

/* public: virtual __thiscall WLog::~WLog(void) */

void __thiscall WLog::~WLog(WLog *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x221b  213  ??1WLog@@UAE@XZ */
  puStack_8 = &LAB_110630c7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable_for_WTerminalBase_;
  *(undefined ***)(this + 0x3c) = vftable_for_FOutputDevice_;
  uStack_4 = 1;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  FString::~FString((FString *)(this + 0x2b4));
  uStack_4 = 0xffffffff;
  WTerminal::~WTerminal((WTerminal *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11002220 WWindow::OnMove

/* public: virtual void __thiscall WWindow::OnMove(int,int) */

void __thiscall WWindow::OnMove(WWindow *this,int param_1,int param_2)

{
                    /* 0x2220  794  ?OnMove@WWindow@@UAEXHH@Z */
  return;
}


// ==== 1100222a WPropertiesBase::operator=

/* public: class WPropertiesBase & __thiscall WPropertiesBase::operator=(class WPropertiesBase const
   &) */

WPropertiesBase * __thiscall
WPropertiesBase::operator=(WPropertiesBase *this,WPropertiesBase *param_1)

{
                    /* 0x222a  284  ??4WPropertiesBase@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  WListBox::operator=((WListBox *)(this + 0x44),(WListBox *)(param_1 + 0x44));
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  return this;
}


// ==== 11002234 thunk_FUN_1101f810 thunk -> 1101f810

// ==== 11002239 FNewObjectItem::OnNew

/* public: void __thiscall FNewObjectItem::OnNew(void) */

void __thiscall FNewObjectItem::OnNew(FNewObjectItem *this)

{
  int iVar1;
  int *piVar2;
  UObject *pUVar3;
  ushort *puVar4;
  ushort *puVar5;
  FString *this_00;
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x2239  795  ?OnNew@FNewObjectItem@@QAEXXZ */
  puStack_c = &LAB_11060f09;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  pUVar3 = (UObject *)(**(code **)(*(int *)this + 0x90))();
  pUVar3 = UObject::GetOuter(pUVar3);
  if (*(int *)(*(int *)(this + 8) + 0x18) != 0) {
    puVar4 = UObject::GetPathName(pUVar3,(UObject *)0x0,(ushort *)0x0);
    puVar5 = FString::operator*((FString *)(this + 0x48));
    this_00 = (FString *)
              FString::Printf((ushort *)aFStack_28,u_NEWOBJECT_CLASS__s_OUTER__s_1106da4c,puVar5,
                              puVar4);
    iStack_8._0_1_ = 1;
    iVar1 = **(int **)(*(int *)(this + 8) + 0x18);
    puVar4 = FString::operator*(this_00);
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(this + 0xc),puVar4);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    FString::~FString(aFStack_28);
  }
  piVar2 = *(int **)(this + 0xc);
  (**(code **)(*piVar2 + 0x50))();
  (**(code **)(*piVar2 + 0x54))();
  (**(code **)(**(int **)piVar2[0xc] + 0x54))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100223e FWindowsBitmap::`default_constructor_closure'

/* public: void __thiscall FWindowsBitmap::`default constructor closure'(void) */

void __thiscall FWindowsBitmap::_default_constructor_closure_(FWindowsBitmap *this)

{
                    /* 0x223e  390  ??_FFWindowsBitmap@@QAEXXZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


// ==== 11002243 thunk_FUN_11039ee0 thunk -> 11039ee0

// ==== 11002248 FObjectsItem::GetParentObject

/* public: virtual class UObject * __thiscall FObjectsItem::GetParentObject(void) */

UObject * __thiscall FObjectsItem::GetParentObject(FObjectsItem *this)

{
                    /* 0x2248  567  ?GetParentObject@FObjectsItem@@UAEPAVUObject@@XZ */
  return (UObject *)**(undefined4 **)(this + 0x58);
}


// ==== 1100224d thunk_FUN_1102a7a0 thunk -> 1102a7a0

// ==== 11002252 WProperties::GetWindowClassName

/* public: virtual void __thiscall WProperties::GetWindowClassName(unsigned short *) */

void __thiscall WProperties::GetWindowClassName(WProperties *this,ushort *param_1)

{
                    /* 0x2252  623  ?GetWindowClassName@WProperties@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WProperties_1106fd38);
  return;
}


// ==== 11002257 WColorButton::GetWindowClassName

/* public: virtual void __thiscall WColorButton::GetWindowClassName(unsigned short *) */

void __thiscall WColorButton::GetWindowClassName(WColorButton *this,ushort *param_1)

{
                    /* 0x2257  605  ?GetWindowClassName@WColorButton@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WColorButton_1106faf0);
  return;
}


// ==== 1100225c WPropertySheet::Empty

/* public: void __thiscall WPropertySheet::Empty(void) */

void __thiscall WPropertySheet::Empty(WPropertySheet *this)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x225c  438  ?Empty@WPropertySheet@@QAEXXZ */
  puStack_c = &LAB_1105ffc0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WTabControl::Empty(*(WTabControl **)(this + 0x40));
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x48); iVar1 = iVar1 + 1) {
  }
  FArray::Empty((FArray *)(this + 0x44),4,0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002261 FObjectConfigItem::operator=

/* public: class FObjectConfigItem & __thiscall FObjectConfigItem::operator=(class FObjectConfigItem
   const &) */

FObjectConfigItem * __thiscall
FObjectConfigItem::operator=(FObjectConfigItem *this,FObjectConfigItem *param_1)

{
                    /* 0x2261  249  ??4FObjectConfigItem@@QAEAAV0@ABV0@@Z */
  FTreeItem::operator=((FTreeItem *)this,(FTreeItem *)param_1);
  FString::operator=((FString *)(this + 0x3c),(FString *)(param_1 + 0x3c));
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  FString::operator=((FString *)(this + 0x50),(FString *)(param_1 + 0x50));
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  return this;
}


// ==== 11002266 WCrashBoxDialog::WCrashBoxDialog

/* public: __thiscall WCrashBoxDialog::WCrashBoxDialog(void) */

WCrashBoxDialog * __thiscall WCrashBoxDialog::WCrashBoxDialog(WCrashBoxDialog *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2266  78  ??0WCrashBoxDialog@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063333;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WDialog::WDialog((WDialog *)this);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  WEdit::WEdit((WEdit *)(this + 0x3c));
  uStack_4._0_1_ = 1;
  WButton::WButton((WButton *)(this + 0x94));
  *(undefined ***)(this + 0x94) = WCoolButton::vftable;
  uStack_4._0_1_ = 3;
  WButton::WButton((WButton *)(this + 0x130));
  *(undefined ***)(this + 0x130) = WCoolButton::vftable;
  uStack_4._0_1_ = 5;
  WButton::WButton((WButton *)(this + 0x1cc));
  *(undefined ***)(this + 0x1cc) = WCoolButton::vftable;
  uStack_4._0_1_ = 7;
  FString::FString((FString *)(this + 0x268));
  uStack_4 = CONCAT31(uStack_4._1_3_,8);
  FString::FString((FString *)(this + 0x274));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100226b WTrackBar::GetWindowClassName

/* public: virtual void __thiscall WTrackBar::GetWindowClassName(unsigned short *) */

void __thiscall WTrackBar::GetWindowClassName(WTrackBar *this,ushort *param_1)

{
                    /* 0x226b  637  ?GetWindowClassName@WTrackBar@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WTrackBar_1106cf54);
  return;
}


// ==== 11002270 WListBox::GetSelected

/* public: int __thiscall WListBox::GetSelected(int) */

int __thiscall WListBox::GetSelected(WListBox *this,int param_1)

{
  LRESULT LVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2270  584  ?GetSelected@WListBox@@QAEHH@Z */
  puStack_c = &LAB_1105fe40;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &pvStack_10;
    LVar1 = SendMessageW(*(HWND *)(this + 4),0x187,param_1,0);
    ExceptionList = pvStack_10;
    return LVar1;
  }
  ExceptionList = &pvStack_10;
  LVar1 = SendMessageA(*(HWND *)(this + 4),0x187,param_1,0);
  ExceptionList = pvStack_10;
  return LVar1;
}


// ==== 11002275 WEditTerminal::OnPaste

/* public: virtual void __thiscall WEditTerminal::OnPaste(void) */

void __thiscall WEditTerminal::OnPaste(WEditTerminal *this)

{
  WEditTerminal *pWStack_4;
  
                    /* 0x2275  806  ?OnPaste@WEditTerminal@@UAEXXZ */
  pWStack_4 = this;
  (**(code **)(**(int **)(this + 0x58) + 0xec))();
  pWStack_4 = (WEditTerminal *)u_NoRoute_1106b458;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&pWStack_4,&DAT_1107a670);
}


// ==== 1100227a FObjectsItem::FObjectsItem

/* public: __thiscall FObjectsItem::FObjectsItem(class WPropertiesBase *,class FTreeItem *,unsigned
   long,unsigned short const *,int,int) */

FObjectsItem * __thiscall
FObjectsItem::FObjectsItem
          (FObjectsItem *this,WPropertiesBase *param_1,FTreeItem *param_2,ulong param_3,
          ushort *param_4,int param_5,int param_6)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x227a  27  ??0FObjectsItem@@QAE@PAVWPropertiesBase@@PAVFTreeItem@@KPBGHH@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110616fc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FPropertyItemBase::FPropertyItemBase((FPropertyItemBase *)this,param_1,param_2,param_3,param_4);
  uStack_4 = 0;
  *(int *)(this + 0x50) = param_5;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  *(int *)(this + 0x54) = param_6;
  FArray::FArray((FArray *)(this + 0x58));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002289 WPropertiesBase::WPropertiesBase

/* public: __thiscall WPropertiesBase::WPropertiesBase(class FName,class WWindow *) */

WPropertiesBase * __thiscall
WPropertiesBase::WPropertiesBase(WPropertiesBase *this,undefined4 param_2,undefined4 param_3)

{
  WPropertiesBase *pWVar1;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2289  123  ??0WPropertiesBase@@QAE@VFName@@PAVWWindow@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063773;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow::WWindow((WWindow *)this,param_2,param_3);
  pvStack_c = (void *)0x0;
  pWVar1 = this + 0x3c;
  *(undefined ***)pWVar1 = FControlSnoop::vftable;
  *(undefined ***)this = vftable_for_WWindow_;
  *(undefined ***)pWVar1 = vftable_for_FControlSnoop_;
  *(undefined4 *)(this + 0x40) = 1;
  WItemBox::WItemBox((WItemBox *)(this + 0x44),(WWindow *)this,0);
  *(undefined4 *)(this + 0xd0) = 0;
  *(WPropertiesBase **)(this + 0x60) = pWVar1;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 1100228e WTerminalBase::WTerminalBase

/* public: __thiscall WTerminalBase::WTerminalBase(class FName,class WWindow *) */

WTerminalBase * __thiscall
WTerminalBase::WTerminalBase(WTerminalBase *this,undefined4 param_2,undefined4 param_3)

{
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x228e  151  ??0WTerminalBase@@QAE@VFName@@PAVWWindow@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062f58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow::WWindow((WWindow *)this,param_2,param_3);
  *(undefined ***)this = vftable;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11002293 WPropertySheet::GetWindowClassName

/* public: virtual void __thiscall WPropertySheet::GetWindowClassName(unsigned short *) */

void __thiscall WPropertySheet::GetWindowClassName(WPropertySheet *this,ushort *param_1)

{
                    /* 0x2293  625  ?GetWindowClassName@WPropertySheet@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WPropertySheet_1106fa88);
  return;
}


// ==== 11002298 FTreeItem::GetIndentPixels

/* public: virtual int __thiscall FTreeItem::GetIndentPixels(int) */

int __thiscall FTreeItem::GetIndentPixels(FTreeItem *this,int param_1)

{
  int iVar1;
  int extraout_EDX;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2298  511  ?GetIndentPixels@FTreeItem@@UAEHH@Z */
  puStack_c = &LAB_11060350;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (uint)(*(int *)(*(int *)(this + 8) + 0x40) != 0) * 4 + 0x10;
  }
  ExceptionList = &pvStack_10;
  GetIndent(this);
  iVar1 = GetUnitIndentPixels(this);
  ExceptionList = pvStack_10;
  return extraout_EDX * iVar1 + iVar2;
}


// ==== 110022a2 FTreeItem::FTreeItem

/* public: __thiscall FTreeItem::FTreeItem(class FTreeItem const &) */

FTreeItem * __thiscall FTreeItem::FTreeItem(FTreeItem *this,FTreeItem *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x22a2  34  ??0FTreeItem@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110638b6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)(this + 4) = FControlSnoop::vftable;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  thunk_FUN_1102ab70(this + 0x24,(int *)(param_1 + 0x24));
  uStack_4 = 0;
  thunk_FUN_1102ac20(this + 0x30,(int *)(param_1 + 0x30));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110022ac WTerminal::OnShowWindow

/* public: virtual void __thiscall WTerminal::OnShowWindow(int) */

void __thiscall WTerminal::OnShowWindow(WTerminal *this,int param_1)

{
                    /* 0x22ac  831  ?OnShowWindow@WTerminal@@UAEXH@Z */
  *(int *)(this + 0x2a8) = param_1;
  return;
}


// ==== 110022b1 FNewObjectItem::operator=

/* public: class FNewObjectItem & __thiscall FNewObjectItem::operator=(class FNewObjectItem const &)
    */

FNewObjectItem * __thiscall FNewObjectItem::operator=(FNewObjectItem *this,FNewObjectItem *param_1)

{
                    /* 0x22b1  248  ??4FNewObjectItem@@QAEAAV0@ABV0@@Z */
  FTreeItem::operator=((FTreeItem *)this,(FTreeItem *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  FString::operator=((FString *)(this + 0x48),(FString *)(param_1 + 0x48));
  return this;
}


// ==== 110022b6 WCrashBoxDialog::WCrashBoxDialog

/* public: __thiscall WCrashBoxDialog::WCrashBoxDialog(unsigned short const *,unsigned short const
   *) */

WCrashBoxDialog * __thiscall
WCrashBoxDialog::WCrashBoxDialog(WCrashBoxDialog *this,ushort *param_1,ushort *param_2)

{
  undefined **ppuStack_6c;
  WCrashBoxDialog *pWStack_68;
  code *pcStack_64;
  void *pvStack_60;
  WCrashBoxDialog *pWStack_5c;
  undefined4 uStack_58;
  undefined **ppuStack_54;
  WCrashBoxDialog *pWStack_50;
  ushort *puStack_4c;
  undefined4 uStack_48;
  WCrashBoxDialog *pWStack_44;
  undefined4 uStack_40;
  undefined **ppuStack_3c;
  WCrashBoxDialog *pWStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x22b6  77  ??0WCrashBoxDialog@@QAE@PBG0@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110633c3;
  pvStack_c = ExceptionList;
  uStack_24 = 0;
  uStack_28 = 0x97;
  ExceptionList = &pvStack_c;
  pWStack_2c = this;
  FName::FName((FName *)&pWStack_2c,(ushort *)u_CrashBox_11072c64,1);
  WDialog::WDialog((WDialog *)this);
  *(undefined ***)this = vftable;
  ppuStack_3c = (undefined **)0x11034be8;
  WControl::WControl((WControl *)(this + 0x3c),(WWindow *)this,1000,WEdit::SuperProc);
  *(undefined ***)(this + 0x3c) = WEdit::vftable;
  *(undefined ***)(this + 0x7c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined ***)(this + 0x88) = FDelegate::vftable;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  uStack_40 = 1;
  ppuStack_3c = FDelegate::vftable;
  uStack_48 = 0x11034c3b;
  pWStack_44 = this;
  WCoolButton::WCoolButton((WCoolButton *)(this + 0x94));
  uStack_28 = CONCAT31(uStack_28._1_3_,3);
  uStack_48 = 5;
  uStack_58 = 2;
  ppuStack_54 = FDelegate::vftable;
  puStack_4c = (ushort *)&LAB_11002225;
  pvStack_60 = (void *)0x11034c69;
  pWStack_5c = this;
  pWStack_50 = this;
  WCoolButton::WCoolButton((WCoolButton *)(this + 0x130));
  uStack_40 = CONCAT31(uStack_40._1_3_,4);
  pvStack_60 = (void *)0x5;
  puStack_4c = (ushort *)&ppuStack_6c;
  ppuStack_6c = FDelegate::vftable;
  pcStack_64 = OnBugReport;
  pWStack_68 = this;
  WCoolButton::WCoolButton((WCoolButton *)(this + 0x1cc),this,3);
  uStack_58._0_1_ = 5;
  FString::FString((FString *)(this + 0x268),(ushort *)pWStack_50);
  uStack_58 = CONCAT31(uStack_58._1_3_,6);
  FString::FString((FString *)(this + 0x274),puStack_4c);
  ExceptionList = pvStack_60;
  return this;
}


// ==== 110022bb WCustomLabel::WCustomLabel

/* public: __thiscall WCustomLabel::WCustomLabel(class WWindow *,int,long (__stdcall*)(struct HWND__
   *,unsigned int,unsigned int,long)) */

WCustomLabel * __thiscall
WCustomLabel::WCustomLabel
          (WCustomLabel *this,WWindow *param_1,int param_2,
          _func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x22bb  80  ??0WCustomLabel@@QAE@PAVWWindow@@HP6GJPAUHWND__@@IIJ@Z@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062818;
  pvStack_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = SuperProc;
  }
  ExceptionList = &pvStack_c;
  WLabel::WLabel((WLabel *)this,param_1,param_2,param_3);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110022c0 WLog::SetText

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: virtual void __thiscall WLog::SetText(unsigned short const *) */

void __thiscall WLog::SetText(WLog *this,ushort *param_1)

{
  int iVar1;
  char *pcVar2;
  size_t _Size;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x22c0  956  ?SetText@WLog@@UAEXPBG@Z */
  puStack_c = &LAB_11061f50;
  pvStack_10 = ExceptionList;
  pcVar2 = (char *)0x0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::SetText((WWindow *)this,param_1);
  if (GNotify != 0) {
    if ((*(int *)GUnicode_exref == 0) || (*(int *)GUnicodeOS_exref != 0)) {
      appStrncpy((ushort *)&DAT_1109c378,param_1,0x40);
      (*Shell_NotifyIconWX)(1,&NID);
    }
    else {
      iVar1 = winGetSizeANSI(param_1);
      if (iVar1 != 0) {
        winGetSizeANSI(param_1);
        pcVar2 = &stack0xffffffd8;
      }
      iVar1 = appStrlen(param_1);
      _Size = 0x40;
      if ((int)(iVar1 + 1U) < 0x40) {
        _Size = iVar1 + 1U;
      }
      iVar1 = winGetSizeANSI(param_1);
      pcVar2 = winToANSI(pcVar2,param_1,iVar1);
      _memcpy(NIDA.szTip,pcVar2,_Size);
      NIDA.szTip[0x3f] = '\0';
      Shell_NotifyIconA(1,&NIDA);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110022c5 WDragInterceptor::OnMouseMove

/* public: virtual void __thiscall WDragInterceptor::OnMouseMove(unsigned long,struct FPoint) */

void __thiscall
WDragInterceptor::OnMouseMove
          (WDragInterceptor *this,undefined4 param_1,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x22c5  788  ?OnMouseMove@WDragInterceptor@@UAEXKUFPoint@@@Z */
  puStack_c = &LAB_11061fc0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(*(int *)this + 0xec))(0);
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    if (*(int *)(this + iVar2 * 4 + 0x44) != -1) {
      iVar1 = thunk_FUN_11026270(((&param_3)[iVar2] - *(int *)(this + iVar2 * 4 + 0x3c)) +
                                 *(int *)(this + iVar2 * 4 + 0x4c),*(int *)(this + iVar2 * 4 + 100),
                                 *(int *)(this + iVar2 * 4 + 0x6c));
      *(int *)(this + iVar2 * 4 + 0x4c) = iVar1;
    }
  }
  (**(code **)(*(int *)this + 0xec))(0);
  *(undefined4 *)(this + 0x3c) = param_3;
  *(undefined4 *)(this + 0x40) = param_4;
  ExceptionList = pvStack_10;
  return;
}


// ==== 110022ca thunk_FUN_11024ea0 thunk -> 11024ea0

// ==== 110022cf WTrackBar::WTrackBar

/* public: __thiscall WTrackBar::WTrackBar(class WWindow *,int,long (__stdcall*)(struct HWND__
   *,unsigned int,unsigned int,long)) */

WTrackBar * __thiscall
WTrackBar::WTrackBar
          (WTrackBar *this,WWindow *param_1,int param_2,
          _func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x22cf  161  ??0WTrackBar@@QAE@PAVWWindow@@HP6GJPAUHWND__@@IIJ@Z@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11061448;
  pvStack_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = SuperProc;
  }
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,param_1,param_2,param_3);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)(this + 0x44) = FDelegate::vftable;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined ***)(this + 0x50) = FDelegate::vftable;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110022d9 FTreeItem::ToggleExpansion

/* public: virtual void __thiscall FTreeItem::ToggleExpansion(void) */

void __thiscall FTreeItem::ToggleExpansion(FTreeItem *this)

{
  code *pcVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x22d9  1013  ?ToggleExpansion@FTreeItem@@UAEXXZ */
  puStack_c = &LAB_11060c10;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int *)(this + 0x10) != 0) {
    ExceptionList = &pvStack_10;
    WWindow::SetRedraw((WWindow *)(*(int *)(this + 8) + 0x44),0);
    if (*(int *)(this + 0x14) == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x54);
    }
    else {
      pcVar1 = *(code **)(*(int *)this + 0x50);
    }
    (*pcVar1)();
    WWindow::SetRedraw((WWindow *)(*(int *)(this + 8) + 0x44),1);
    UpdateWindow(*(HWND *)(*(int *)(this + 8) + 0x48));
  }
  (**(code **)(**(int **)(this + 8) + 0xf4))(1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110022de WWindow::OnLeftButtonDoubleClick

/* public: virtual void __thiscall WWindow::OnLeftButtonDoubleClick(void) */

void __thiscall WWindow::OnLeftButtonDoubleClick(WWindow *this)

{
                    /* 0x22de  766  ?OnLeftButtonDoubleClick@WWindow@@UAEXXZ */
  return;
}


// ==== 110022e3 WWindow::OnInitDialog

/* public: virtual void __thiscall WWindow::OnInitDialog(void) */

void __thiscall WWindow::OnInitDialog(WWindow *this)

{
                    /* 0x22e3  742  ?OnInitDialog@WWindow@@UAEXXZ */
  return;
}


// ==== 110022e8 WPropertySheet::RefreshPages

/* public: void __thiscall WPropertySheet::RefreshPages(void) */

void __thiscall WPropertySheet::RefreshPages(WPropertySheet *this)

{
  WPARAM wParam;
  WPARAM WVar1;
  tagRECT tStack_40;
  undefined1 auStack_30 [12];
  int iStack_24;
  WPARAM WStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x22e8  894  ?RefreshPages@WPropertySheet@@QAEXXZ */
  puStack_c = &LAB_1105f9e0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffb4;
  WVar1 = 0;
  uStack_8 = 0;
  if (*(int *)(this + 0x48) != 0) {
    ExceptionList = &pvStack_10;
    wParam = WTabControl::GetCurrent(*(WTabControl **)(this + 0x40));
    if (wParam == 0xffffffff) {
      wParam = 0;
    }
    if (*(int *)(this + 0x48) <= (int)wParam) {
      appFailAssert(s_idx_<_Pages_Num()_11069aa8,s___Controls_cpp_11068b54,0x195);
    }
    GetClientRect(*(HWND *)(this + 4),&tStack_40);
    if (*(int *)GUnicodeOS_exref == 0) {
      SendMessageA(*(HWND *)(*(int *)(this + 0x40) + 4),0x130a,wParam,(LPARAM)auStack_30);
    }
    else {
      SendMessageW(*(HWND *)(*(int *)(this + 0x40) + 4),0x130a,wParam,(LPARAM)auStack_30);
    }
    for (; WStack_18 = WVar1, (int)WVar1 < *(int *)(this + 0x48); WVar1 = WVar1 + 1) {
      if (WVar1 == wParam) {
        (**(code **)(**(int **)(*(int *)(this + 0x44) + WVar1 * 4) + 8))(1);
      }
      else {
        (**(code **)(**(int **)(*(int *)(this + 0x44) + WVar1 * 4) + 8))(0);
      }
      (**(code **)(**(int **)(*(int *)(this + 0x44) + WVar1 * 4) + 0xec))();
      if (*(int *)(this + 0x54) != 0) {
        SetWindowPos(*(HWND *)(*(int *)(*(int *)(this + 0x44) + wParam * 4) + 4),(HWND)0x0,0,0,
                     tStack_40.right + -0x18,(tStack_40.bottom - iStack_24) + -0x18,2);
      }
    }
    SetWindowPos(*(HWND *)(*(int *)(*(int *)(this + 0x44) + wParam * 4) + 4),(HWND)0x0,8,
                 iStack_24 + 8,0,0,1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110022ed FContainer::FContainer

/* public: __thiscall FContainer::FContainer(void) */

void __thiscall FContainer::FContainer(FContainer *this)

{
                    /* 0x22ed  11  ??0FContainer@@QAE@XZ */
  *(undefined4 *)this = 0;
  return;
}


// ==== 110022f2 WTrackBar::SetRange

/* public: void __thiscall WTrackBar::SetRange(int,int) */

void __thiscall WTrackBar::SetRange(WTrackBar *this,int param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x22f2  949  ?SetRange@WTrackBar@@QAEXHH@Z */
  puStack_c = &LAB_1105fce0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0x406,1,CONCAT22((undefined2)param_2,(undefined2)param_1));
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0x406,1,CONCAT22((undefined2)param_2,(undefined2)param_1));
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110022f7 WLog::OnCommand

/* public: virtual void __thiscall WLog::OnCommand(int) */

void __thiscall WLog::OnCommand(WLog *this,int param_1)

{
  WLog *pWVar1;
  wchar_t *pwVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x22f7  702  ?OnCommand@WLog@@UAEXH@Z */
  puStack_c = &LAB_11061b30;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if ((param_1 == 0x9c44) || (param_1 == 0x9c45)) {
    ExceptionList = &pvStack_10;
    if (*(int *)GLog_exref != 0) {
      pwVar2 = u_ID_LogFileExit_1106f888;
      if (param_1 != 0x9c44) {
        pwVar2 = u_ID_NotifyExit_1106f864;
      }
      ExceptionList = &pvStack_10;
      FOutputDevice::Logf2
                (*(FOutputDevice **)GLog_exref,(ushort *)*(FOutputDevice **)GLog_exref,
                 u_WLog__OnCommand__s_1106f834,pwVar2);
    }
    appRequestExit(0);
  }
  else if ((param_1 == 0x9c46) || (param_1 == 0x9c47)) {
    if (*(int *)(this + 0x9c) != 0) {
      if (GLogWindow == (WLog *)0x0) {
        pWVar1 = (WLog *)0x0;
      }
      else {
        pWVar1 = GLogWindow + 0x3c;
      }
      ExceptionList = &pvStack_10;
      (**(code **)**(undefined4 **)(this + 0x9c))(u_PREFERENCES_1106f8ac,pWVar1);
    }
  }
  else if (param_1 == 0x9c42) {
    ExceptionList = &pvStack_10;
    ShowWindow(*(HWND *)(this + 4),1);
    SetForegroundWindow(*(HWND *)(this + 4));
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110022fc FHeaderItem::OnItemKillFocus

/* public: virtual void __thiscall FHeaderItem::OnItemKillFocus(int) */

void __thiscall FHeaderItem::OnItemKillFocus(FHeaderItem *this,int param_1)

{
  int *piVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x22fc  747  ?OnItemKillFocus@FHeaderItem@@UAEXH@Z */
  puStack_c = &LAB_110611f0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x28); iVar2 = iVar2 + 1) {
    piVar1 = *(int **)(*(int *)(this + 0x24) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
  }
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x28); iVar2 = iVar2 + 1) {
  }
  FArray::Empty((FArray *)(this + 0x24),4,0);
  *(undefined4 *)(this + 0x20) = 0;
  (**(code **)(*(int *)this + 0x28))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002301 WSplitterContainer::WSplitterContainer

/* public: __thiscall WSplitterContainer::WSplitterContainer(class WWindow *) */

WSplitterContainer * __thiscall
WSplitterContainer::WSplitterContainer(WSplitterContainer *this,WWindow *param_1)

{
  void *unaff_ESI;
  WSplitterContainer *pWStack_1c;
  WWindow *pWStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2301  140  ??0WSplitterContainer@@QAE@PAVWWindow@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11064308;
  pvStack_c = ExceptionList;
  pWStack_18 = param_1;
  ExceptionList = &pvStack_c;
  pWStack_1c = this;
  FName::FName((FName *)&pWStack_1c,(ushort *)u_WSplitterContainer_1106fe50,1);
  WWindow::WWindow((WWindow *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11002306 FPropertyItemBase::Serialize

/* public: virtual void __thiscall FPropertyItemBase::Serialize(class FArchive &) */

void __thiscall FPropertyItemBase::Serialize(FPropertyItemBase *this,FArchive *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2306  912  ?Serialize@FPropertyItemBase@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_11060fe0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FTreeItem::Serialize((FTreeItem *)this,param_1);
  thunk_FUN_110132b0((int *)param_1,this + 0x4c);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002310 WWindow::OnReleaseCapture

/* public: virtual void __thiscall WWindow::OnReleaseCapture(void) */

void __thiscall WWindow::OnReleaseCapture(WWindow *this)

{
                    /* 0x2310  811  ?OnReleaseCapture@WWindow@@UAEXXZ */
  return;
}


// ==== 11002315 WEdit::InterceptControlCommand

/* public: virtual int __thiscall WEdit::InterceptControlCommand(unsigned int,unsigned int,long) */

int __thiscall WEdit::InterceptControlCommand(WEdit *this,uint param_1,uint param_2,long param_3)

{
  short sVar1;
  WEdit *pWVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2315  655  ?InterceptControlCommand@WEdit@@UAEHIIJ@Z */
  puStack_c = &LAB_1105f750;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  sVar1 = (short)(param_2 >> 0x10);
  if (sVar1 == 0x300) {
    pWVar2 = this + 0x40;
  }
  else {
    if (sVar1 != 0x200) {
      return 0;
    }
    pWVar2 = this + 0x4c;
  }
  ExceptionList = &pvStack_10;
  (*(code *)**(undefined4 **)pWVar2)();
  ExceptionList = pvStack_10;
  return 1;
}


// ==== 1100231a WGroupBox::WGroupBox

/* public: __thiscall WGroupBox::WGroupBox(void) */

WGroupBox * __thiscall WGroupBox::WGroupBox(WGroupBox *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x231a  95  ??0WGroupBox@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110626b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100231f WWindow::GetClientRect

/* public: struct FRect __thiscall WWindow::GetClientRect(void)const  */

void __thiscall WWindow::GetClientRect(WWindow *this)

{
  LONG *in_stack_00000004;
  tagRECT tStack_10;
  
                    /* 0x231f  486  ?GetClientRect@WWindow@@QBE?AUFRect@@XZ */
  ::GetClientRect(*(HWND *)(this + 4),&tStack_10);
  *in_stack_00000004 = tStack_10.left;
  in_stack_00000004[1] = tStack_10.top;
  in_stack_00000004[2] = tStack_10.right;
  in_stack_00000004[3] = tStack_10.bottom;
  return;
}


// ==== 11002324 WConfigProperties::WConfigProperties

/* public: __thiscall WConfigProperties::WConfigProperties(class FName,unsigned short const *) */

WConfigProperties * __thiscall
WConfigProperties::WConfigProperties(WConfigProperties *this,undefined4 param_2)

{
  FPreferencesInfo *pFVar1;
  ushort *unaff_retaddr;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2324  68  ??0WConfigProperties@@QAE@VFName@@PBG@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063f5f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WProperties::WProperties((WProperties *)this,param_2,0);
  pvStack_c = (void *)0x0;
  *(undefined ***)this = vftable_for_WWindow_;
  *(undefined ***)(this + 0x3c) = vftable_for_FControlSnoop_;
  pFVar1 = (FPreferencesInfo *)
           FPreferencesInfo::FPreferencesInfo((FPreferencesInfo *)&stack0xffffffc0);
  pvStack_c._0_1_ = 1;
  FConfigItem::FConfigItem
            ((FConfigItem *)(this + 0xfc),pFVar1,(WPropertiesBase *)this,(FTreeItem *)0x0);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,3);
  FPreferencesInfo::~FPreferencesInfo((FPreferencesInfo *)&stack0xffffffc0);
  FString::operator=((FString *)(this + 0x138),unaff_retaddr);
  ExceptionList = pvStack_14;
  return this;
}


// ==== 11002329 WTimeScrollBar::OnRightButtonDown

/* public: virtual void __thiscall WTimeScrollBar::OnRightButtonDown(void) */

void __thiscall WTimeScrollBar::OnRightButtonDown(WTimeScrollBar *this)

{
  int iVar1;
  undefined1 auStack_34 [16];
  int iStack_24;
  int iStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2329  817  ?OnRightButtonDown@WTimeScrollBar@@UAEXXZ */
  puStack_c = &LAB_11061ef0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::GetCursorPos((WWindow *)this);
  GetThumbRect(this);
  iVar1 = thunk_FUN_11024c60(auStack_34,iStack_24,iStack_20);
  if (iVar1 != 0) {
    if (*(int *)GUnicodeOS_exref == 0) {
      SendMessageA(*(HWND *)(*(int *)(this + 0x14) + 4),0x111,0x802d,(uint)*(ushort *)(this + 0xc));
    }
    else {
      SendMessageW(*(HWND *)(*(int *)(this + 0x14) + 4),0x111,0x802d,(uint)*(ushort *)(this + 0xc));
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100232e WWindow::OnRightButtonUp

/* public: virtual void __thiscall WWindow::OnRightButtonUp(void) */

void __thiscall WWindow::OnRightButtonUp(WWindow *this)

{
                    /* 0x232e  820  ?OnRightButtonUp@WWindow@@UAEXXZ */
  return;
}


// ==== 11002333 WWindow::SaveWindowPos

/* public: void __thiscall WWindow::SaveWindowPos(void) */

void __thiscall WWindow::SaveWindowPos(WWindow *this)

{
                    /* 0x2333  902  ?SaveWindowPos@WWindow@@QAEXXZ */
  return;
}


// ==== 1100233d FWaitCursor::Restore

/* public: void __thiscall FWaitCursor::Restore(void) */

void __thiscall FWaitCursor::Restore(FWaitCursor *this)

{
  HCURSOR pHVar1;
  
                    /* 0x233d  900  ?Restore@FWaitCursor@@QAEXXZ */
  if (*(int *)GUnicodeOS_exref != 0) {
    pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f02);
    SetCursor(pHVar1);
    return;
  }
  pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
  SetCursor(pHVar1);
  return;
}


// ==== 11002342 WControl::RegisterWindowClass

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: static long (__stdcall*__cdecl WControl::RegisterWindowClass(unsigned short const
   *,unsigned short const *))(struct HWND__ *,unsigned int,unsigned int,long) */

_func_long_HWND___ptr_uint_uint_long * __cdecl
WControl::RegisterWindowClass(ushort *param_1,ushort *param_2)

{
  ATOM AVar1;
  BOOL BVar2;
  int iVar3;
  char *pcVar4;
  tagWNDCLASSEXW *ptVar5;
  tagWNDCLASSEXA *ptVar6;
  tagWNDCLASSEXA tStack_84;
  tagWNDCLASSEXW tStack_54;
  tagWNDCLASSEXW *ptStack_1c;
  _func_long_HWND___ptr_uint_uint_long *p_Stack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2342  895  ?RegisterWindowClass@WControl@@SAP6GJPAUHWND__@@IIJ@ZPBG1@Z */
  puStack_c = &LAB_11061e80;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff70;
  uStack_8 = 0;
  p_Stack_18 = (_func_long_HWND___ptr_uint_uint_long *)0x0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ptStack_1c = (tagWNDCLASSEXW *)&tStack_84;
    ptVar6 = (tagWNDCLASSEXA *)ptStack_1c;
    ExceptionList = &pvStack_10;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      ptVar6->cbSize = 0;
      ptVar6 = (tagWNDCLASSEXA *)&ptVar6->style;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)&ptVar6->cbSize = 0;
      ptVar6 = (tagWNDCLASSEXA *)((int)&ptVar6->cbSize + 1);
    }
    tStack_84.cbSize = 0x30;
    iVar3 = winGetSizeANSI(param_2);
    if (iVar3 == 0) {
      pcVar4 = (char *)0x0;
    }
    else {
      winGetSizeANSI(param_2);
      puStack_14 = &stack0xffffff70;
      pcVar4 = &stack0xffffff70;
    }
    ptVar6 = &tStack_84;
    iVar3 = winGetSizeANSI(param_2);
    pcVar4 = winToANSI(pcVar4,param_2,iVar3);
    BVar2 = GetClassInfoExA((HINSTANCE)0x0,pcVar4,ptVar6);
    if (BVar2 == 0) {
      appFailAssert(s_GetClassInfoExA__NULL__TCHAR_TO__11070164,s___Window_cpp_1106f624,0x427);
    }
    p_Stack_18 = (_func_long_HWND___ptr_uint_uint_long *)tStack_84.lpfnWndProc;
    tStack_84.lpfnWndProc = WWindow::StaticWndProc;
    iVar3 = winGetSizeANSI(param_1);
    if (iVar3 == 0) {
      pcVar4 = (char *)0x0;
    }
    else {
      winGetSizeANSI(param_1);
      puStack_14 = &stack0xffffff70;
      pcVar4 = &stack0xffffff70;
    }
    iVar3 = winGetSizeANSI(param_1);
    tStack_84.lpszClassName = winToANSI(pcVar4,param_1,iVar3);
    tStack_84.hInstance = hInstanceWindow;
    if (tStack_84.lpszMenuName != (LPCSTR)0x0) {
      appFailAssert(s_Cls_lpszMenuName__NULL_110701ac,s___Window_cpp_1106f624,0x42c);
    }
    AVar1 = RegisterClassExA(&tStack_84);
    if (AVar1 == 0) {
      appFailAssert(s_RegisterClassExA___Cls___1106ffa8,s___Window_cpp_1106f624,0x42d);
    }
  }
  else {
    ptStack_1c = &tStack_54;
    ptVar5 = ptStack_1c;
    ExceptionList = &pvStack_10;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      ptVar5->cbSize = 0;
      ptVar5 = (tagWNDCLASSEXW *)&ptVar5->style;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)&ptVar5->cbSize = 0;
      ptVar5 = (tagWNDCLASSEXW *)((int)&ptVar5->cbSize + 1);
    }
    tStack_54.cbSize = 0x30;
    puStack_14 = &stack0xffffff70;
    BVar2 = GetClassInfoExW((HINSTANCE)0x0,(LPCWSTR)param_2,&tStack_54);
    if (BVar2 == 0) {
      appFailAssert(s_GetClassInfoExW__NULL__WinBaseCl_110701c8,s___Window_cpp_1106f624,0x419);
    }
    p_Stack_18 = (_func_long_HWND___ptr_uint_uint_long *)tStack_54.lpfnWndProc;
    tStack_54.lpfnWndProc = WWindow::StaticWndProc;
    tStack_54.lpszClassName = (LPCWSTR)param_1;
    tStack_54.hInstance = hInstanceWindow;
    if (tStack_54.lpszMenuName != (LPCWSTR)0x0) {
      appFailAssert(s_Cls_lpszMenuName__NULL_110701ac,s___Window_cpp_1106f624,0x41e);
    }
    AVar1 = RegisterClassExW(&tStack_54);
    if (AVar1 == 0) {
      appFailAssert(s_RegisterClassExW___Cls___1106ffc8,s___Window_cpp_1106f624,0x41f);
    }
  }
  ExceptionList = pvStack_10;
  return p_Stack_18;
}


// ==== 11002347 WSplitterPane::WSplitterPane

/* public: __thiscall WSplitterPane::WSplitterPane(class WWindow *) */

WSplitterPane * __thiscall WSplitterPane::WSplitterPane(WSplitterPane *this,WWindow *param_1)

{
  void *unaff_ESI;
  WSplitterPane *pWStack_1c;
  WWindow *pWStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2347  142  ??0WSplitterPane@@QAE@PAVWWindow@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11064228;
  pvStack_c = ExceptionList;
  pWStack_18 = param_1;
  ExceptionList = &pvStack_c;
  pWStack_1c = this;
  FName::FName((FName *)&pWStack_1c,(ushort *)u_WSplitterPane_1106fe14,1);
  WWindow::WWindow((WWindow *)this);
  *(undefined ***)this = vftable;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 1100234c FWindowAnchor::operator=

/* public: class FWindowAnchor __thiscall FWindowAnchor::operator=(class FWindowAnchor const &) */

void __thiscall FWindowAnchor::operator=(FWindowAnchor *this,FWindowAnchor *param_1)

{
  int iVar1;
  undefined4 *in_stack_00000008;
  
                    /* 0x234c  257  ??4FWindowAnchor@@QAE?AV0@ABV0@@Z */
  *(undefined4 *)this = *in_stack_00000008;
  *(undefined4 *)(this + 4) = in_stack_00000008[1];
  *(undefined4 *)(this + 8) = in_stack_00000008[2];
  *(undefined4 *)(this + 0xc) = in_stack_00000008[3];
  *(undefined4 *)(this + 0x10) = in_stack_00000008[4];
  *(undefined4 *)(this + 0x14) = in_stack_00000008[5];
  *(undefined4 *)(this + 0x18) = in_stack_00000008[6];
  *(undefined4 *)(this + 0x1c) = in_stack_00000008[7];
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)this;
    this = this + 4;
    param_1 = param_1 + 4;
  }
  return;
}


// ==== 11002351 WListBox::GetSelectedItems

/* public: int __thiscall WListBox::GetSelectedItems(int,int *) */

int __thiscall WListBox::GetSelectedItems(WListBox *this,int param_1,int *param_2)

{
  LRESULT LVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2351  586  ?GetSelectedItems@WListBox@@QAEHHPAH@Z */
  puStack_c = &LAB_1105fe50;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &pvStack_10;
    LVar1 = SendMessageW(*(HWND *)(this + 4),0x191,param_1,(LPARAM)param_2);
    ExceptionList = pvStack_10;
    return LVar1;
  }
  ExceptionList = &pvStack_10;
  LVar1 = SendMessageA(*(HWND *)(this + 4),0x191,param_1,(LPARAM)param_2);
  ExceptionList = pvStack_10;
  return LVar1;
}


// ==== 11002356 thunk_FUN_1102aef0 thunk -> 1102aef0

// ==== 1100235b WCheckBox::WCheckBox

/* public: __thiscall WCheckBox::WCheckBox(void) */

WCheckBox * __thiscall WCheckBox::WCheckBox(WCheckBox *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x235b  54  ??0WCheckBox@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062ba8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WButton::WButton((WButton *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002360 FHeaderItem::OnItemSetFocus

/* public: virtual void __thiscall FHeaderItem::OnItemSetFocus(void) */

void __thiscall FHeaderItem::OnItemSetFocus(FHeaderItem *this)

{
  FString *this_00;
  int iVar1;
  ushort *puVar2;
  undefined **ppuStack_58;
  undefined **ppuStack_48;
  FHeaderItem *pFStack_44;
  FString aFStack_2c [16];
  undefined1 *puStack_1c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x2360  754  ?OnItemSetFocus@FHeaderItem@@UAEXXZ */
  puStack_c = &LAB_11060ed9;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  this_00 = (FString *)(**(code **)(*(int *)this + 0x80))();
  iStack_8._0_1_ = 1;
  pFStack_44 = (FHeaderItem *)0x11019a6b;
  iVar1 = FString::operator==(this_00,(ushort *)u_LightColor_1106d900);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FString::~FString(aFStack_2c);
  if (iVar1 != 0) {
    puStack_1c = (undefined1 *)&ppuStack_48;
    ppuStack_48 = FDelegate::vftable;
    iVar1 = *(int *)this;
    ppuStack_58 = (undefined **)0x11019aac;
    pFStack_44 = this;
    LocalizeGeneral(s_ColorButton_1106d9cc,(ushort *)u_Window_1106949c,(ushort *)0x0);
    (**(code **)(iVar1 + 0x34))();
    puStack_1c = (undefined1 *)&ppuStack_58;
    ppuStack_58 = FDelegate::vftable;
    iVar1 = *(int *)this;
    puVar2 = LocalizeGeneral(s_PickButton_1106d9bc,(ushort *)u_Window_1106949c,(ushort *)0x0);
    (**(code **)(iVar1 + 0x34))(puVar2);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002365 FPropertyItem::ReceiveFromControl

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual void __thiscall FPropertyItem::ReceiveFromControl(void) */

void __thiscall FPropertyItem::ReceiveFromControl(FPropertyItem *this)

{
  FName *this_00;
  UObject *pUVar1;
  int iVar2;
  UClass *pUVar3;
  ushort *puVar4;
  int *piVar5;
  uint uVar6;
  ushort uStack_2024;
  undefined1 auStack_2022 [8202];
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2365  889  ?ReceiveFromControl@FPropertyItem@@UAEXXZ */
  puStack_c = &LAB_11060d50;
  pvStack_10 = ExceptionList;
  uStack_18 = 0x11018653;
  puStack_14 = &stack0xffffdfd0;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(undefined4 *)(this + 0x58) = 0;
  this_00 = (FName *)(**(code **)(*(int *)this + 0x68))(this,0);
  if (*(int *)(this + 0x48) != 0) {
    uStack_2024 = 0;
    _memset(auStack_2022,0,0x1ffe);
    if (this_00 != (FName *)0x0) {
      GetPropertyText(this,&uStack_2024);
    }
    pUVar1 = thunk_FUN_11013fd0(*(UObject **)(this + 0x3c));
    if (((pUVar1 == (UObject *)0x0) &&
        (pUVar1 = thunk_FUN_11014000(*(UObject **)(this + 0x3c)), pUVar1 == (UObject *)0x0)) &&
       ((pUVar1 = thunk_FUN_11014030(*(UObject **)(this + 0x3c)), pUVar1 == (UObject *)0x0 ||
        (pUVar1 = thunk_FUN_11014030(*(UObject **)(this + 0x3c)), *(int *)(pUVar1 + 0x78) != 0)))) {
      (**(code **)(**(int **)(this + 0x48) + 0x2c))(&uStack_2024);
    }
    else {
      iVar2 = **(int **)(this + 0x48);
      puVar4 = FString::operator*((FString *)(this + 0x74));
      (**(code **)(iVar2 + 0x2c))(puVar4);
    }
    iVar2 = appStrlen(&uStack_2024);
    WEdit::SetSelection(*(WEdit **)(this + 0x48),0,iVar2);
  }
  if ((*(WTrackBar **)(this + 0x4c) != (WTrackBar *)0x0) && (this_00 != (FName *)0x0)) {
    WTrackBar::SetPos(*(WTrackBar **)(this + 0x4c),(uint)(byte)*this_00);
  }
  if (*(int *)(this + 0x50) == 0) {
    ExceptionList = pvStack_10;
    return;
  }
  pUVar1 = thunk_FUN_110141b0(*(UObject **)(this + 0x3c));
  if (pUVar1 == (UObject *)0x0) {
    pUVar3 = UByteProperty::StaticClass();
    iVar2 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar3);
    if (iVar2 == 0) {
      pUVar3 = UNameProperty::StaticClass();
      iVar2 = UObject::IsA(*(UObject **)(this + 0x3c),pUVar3);
      if (iVar2 == 0) goto LAB_11018810;
      FName::FName((FName *)&uStack_18,0x338);
      iVar2 = FName::operator==((FName *)(this + 0x70),(FName *)&uStack_18);
      if (iVar2 == 0) goto LAB_11018810;
      if (this_00 == (FName *)0x0) {
        uVar6 = 0;
      }
      else {
        iVar2 = **(int **)(this + 0x50);
        puVar4 = FName::operator*(this_00);
        uVar6 = (**(code **)(iVar2 + 0x100))(puVar4);
      }
      piVar5 = *(int **)(this + 0x50);
      uVar6 = ((int)uVar6 < 0) - 1 & uVar6;
    }
    else {
      if (this_00 == (FName *)0x0) goto LAB_11018771;
      uVar6 = (uint)(byte)*this_00;
      piVar5 = *(int **)(this + 0x50);
    }
  }
  else if (this_00 == (FName *)0x0) {
LAB_11018771:
    piVar5 = *(int **)(this + 0x50);
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)((*(uint *)(pUVar1 + 0x78) & *(uint *)this_00) != 0);
    piVar5 = *(int **)(this + 0x50);
  }
  (**(code **)(*piVar5 + 0xf8))(uVar6);
LAB_11018810:
  *(undefined4 *)(this + 0x58) = 0;
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100236a FPropertyItem::OnItemDoubleClick

/* public: virtual void __thiscall FPropertyItem::OnItemDoubleClick(void) */

void __thiscall FPropertyItem::OnItemDoubleClick(FPropertyItem *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x236a  744  ?OnItemDoubleClick@FPropertyItem@@UAEXXZ */
  puStack_c = &LAB_110604b0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  (**(code **)(*(int *)this + 0x98))();
  FTreeItem::OnItemDoubleClick((FTreeItem *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100236f FTreeItem::SetFocusToItem

/* public: virtual void __thiscall FTreeItem::SetFocusToItem(void) */

void __thiscall FTreeItem::SetFocusToItem(FTreeItem *this)

{
                    /* 0x236f  929  ?SetFocusToItem@FTreeItem@@UAEXXZ */
  return;
}


// ==== 11002374 WPropertySheet::SetCurrent

/* public: int __thiscall WPropertySheet::SetCurrent(class WPropertyPage *) */

int __thiscall WPropertySheet::SetCurrent(WPropertySheet *this,WPropertyPage *param_1)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2374  925  ?SetCurrent@WPropertySheet@@QAEHPAVWPropertyPage@@@Z */
  puStack_c = &LAB_1105fff0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = thunk_FUN_1100de70(this + 0x44,(int *)&param_1);
  if (iVar1 != -1) {
    iVar1 = SetCurrent(this,iVar1);
    ExceptionList = pvStack_10;
    return iVar1;
  }
  ExceptionList = pvStack_10;
  return -1;
}


// ==== 11002379 WProperties::OnListDoubleClick

/* public: void __thiscall WProperties::OnListDoubleClick(void) */

void __thiscall WProperties::OnListDoubleClick(WProperties *this)

{
                    /* 0x2379  779  ?OnListDoubleClick@WProperties@@QAEXXZ */
  if (*(int *)(this + 0xd0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x11012bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(this + 0xd0) + 0x5c))();
    return;
  }
  return;
}


// ==== 1100237e thunk_FUN_11033b40 thunk -> 11033b40

// ==== 11002383 WEdit::WEdit

/* public: __thiscall WEdit::WEdit(class WEdit const &) */

WEdit * __thiscall WEdit::WEdit(WEdit *this,WEdit *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2383  88  ??0WEdit@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062e78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,(WControl *)param_1);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined ***)(this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002388 WWindow::OnSize

/* public: virtual void __thiscall WWindow::OnSize(unsigned long,int,int) */

void __thiscall WWindow::OnSize(WWindow *this,ulong param_1,int param_2,int param_3)

{
                    /* 0x2388  838  ?OnSize@WWindow@@UAEXKHH@Z */
  return;
}


// ==== 1100238d WTimeScrollBar::OnLeftButtonDown

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall WTimeScrollBar::OnLeftButtonDown(void) */

void __thiscall WTimeScrollBar::OnLeftButtonDown(WTimeScrollBar *this)

{
  float fVar1;
  BOOL BVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int aiStack_2c [2];
  int iStack_24;
  int iStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x238d  771  ?OnLeftButtonDown@WTimeScrollBar@@UAEXXZ */
  puStack_c = &LAB_11062230;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  BVar2 = IsWindowEnabled(*(HWND *)(this + 4));
  if (BVar2 == 0) {
    ExceptionList = pvStack_10;
    return;
  }
  piVar5 = &iStack_24;
  WWindow::GetCursorPos((WWindow *)this);
  *(int *)(this + 100) = iStack_24;
  *(int *)(this + 0x68) = iStack_20;
  piVar4 = aiStack_2c;
  GetThumbRect(this);
  iVar3 = thunk_FUN_11024c60(aiStack_2c,iStack_24,iStack_20);
  if (iVar3 == 0) {
    if (iStack_24 < aiStack_2c[0]) {
      fVar1 = *(float *)(this + 0x48) - (float)_DAT_1106c3b0;
    }
    else {
      fVar1 = *(float *)(this + 0x48) + (float)_DAT_1106c3b0;
    }
    *(float *)(this + 0x48) = fVar1;
    if (*(float *)(this + 0x48) < 0.0) {
      *(undefined4 *)(this + 0x48) = 0;
    }
    if ((float)_DAT_1106f610 < *(float *)(this + 0x48)) {
      *(undefined4 *)(this + 0x48) = _DAT_11070308;
    }
    (*(code *)**(undefined4 **)(this + 0x3c))(piVar4,piVar5);
    ExceptionList = pvStack_10;
    return;
  }
  SetCapture(*(HWND *)(this + 4));
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002397 WTabControl::OpenWindow

/* public: void __thiscall WTabControl::OpenWindow(int,unsigned long) */

void __thiscall WTabControl::OpenWindow(WTabControl *this,int param_1,ulong param_2)

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2397  875  ?OpenWindow@WTabControl@@QAEXHK@Z */
  puStack_c = &LAB_1105f8d0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)0x0,
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


// ==== 1100239c thunk_FUN_11039990 thunk -> 11039990

// ==== 110023a1 WWindow::WndProc

/* public: virtual long __thiscall WWindow::WndProc(unsigned int,unsigned int,long) */

long __thiscall WWindow::WndProc(WWindow *this,uint param_1,uint param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x23a1  1024  ?WndProc@WWindow@@UAEJIIJ@Z */
  puStack_c = &LAB_11061df0;
  pvStack_10 = ExceptionList;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  *(uint *)(this + 0x30) = param_2;
  *(long *)(this + 0x34) = param_3;
  piVar1 = *(int **)(this + 0x1c);
  if (piVar1 != (int *)0x0) {
    if (param_1 == 0x102) {
      (**(code **)*piVar1)(this,param_2);
    }
    else if (param_1 == 0x100) {
      (**(code **)(*piVar1 + 4))(this,param_2);
    }
    else {
      if (param_1 == 0x201) {
        pcVar5 = *(code **)(*piVar1 + 8);
      }
      else {
        if (param_1 != 0x204) goto LAB_11026faa;
        pcVar5 = *(code **)(*piVar1 + 0xc);
      }
      (*pcVar5)(this,param_3 & 0xffff,(uint)param_3 >> 0x10);
    }
  }
LAB_11026faa:
  if ((((byte)this[0x10] & 2) == 0) && (ModalCount == 0)) {
    if (param_1 == 0x1c) {
      DAT_1109f1e0 = param_2;
      if (*(int *)GUnicodeOS_exref == 0) {
        SendMessageA(*(HWND *)(this + 4),0x86,param_2,0);
        lVar2 = (**(code **)(*(int *)this + 0x20))(0x1c,param_2,param_3);
        ExceptionList = pvStack_10;
        return lVar2;
      }
      SendMessageW(*(HWND *)(this + 4),0x86,param_2,0);
      lVar2 = (**(code **)(*(int *)this + 0x20))(0x1c,param_2,param_3);
      ExceptionList = pvStack_10;
      return lVar2;
    }
    if (param_1 == 0x86) {
      if ((DAT_1109f1e0 != 0) && (param_2 == 0)) {
        ExceptionList = pvStack_10;
        return 1;
      }
      goto LAB_110278fb;
    }
  }
  if (param_1 == 2) {
    (**(code **)(*(int *)this + 0xe0))();
    lVar2 = (**(code **)(*(int *)this + 0x20))(2,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x2b) {
    iVar3 = 0;
    while( true ) {
      if (*(int *)(this + 0x24) <= iVar3) {
        ExceptionList = pvStack_10;
        return 1;
      }
      piVar1 = *(int **)(*(int *)(this + 0x20) + iVar3 * 4);
      if (piVar1[1] == *(int *)(param_3 + 0x14)) break;
      iVar3 = iVar3 + 1;
    }
    pcVar5 = *(code **)(*piVar1 + 0x8c);
LAB_110270b3:
    (*pcVar5)(param_3);
    ExceptionList = pvStack_10;
    return 1;
  }
  if (param_1 == 0x2c) {
    iVar3 = 0;
    while( true ) {
      if (*(int *)(this + 0x24) <= iVar3) {
        ExceptionList = pvStack_10;
        return 1;
      }
      piVar1 = *(int **)(*(int *)(this + 0x20) + iVar3 * 4);
      if ((uint)*(ushort *)(piVar1 + 3) == *(uint *)(param_3 + 4)) break;
      iVar3 = iVar3 + 1;
    }
    pcVar5 = *(code **)(*piVar1 + 0x90);
    goto LAB_110270b3;
  }
  if (param_1 == 0x10) {
    iVar3 = (**(code **)(*(int *)this + 0xdc))();
    if (iVar3 == 0) {
      ExceptionList = pvStack_10;
      return 0;
    }
    goto LAB_110278fb;
  }
  if (param_1 == 0x102) {
    (**(code **)(*(int *)this + 0x58))(param_2);
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x102,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x100) {
    (**(code **)(*(int *)this + 0x5c))(param_2);
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x100,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0xf) {
    (**(code **)(*(int *)this + 0x84))();
    lVar2 = (**(code **)(*(int *)this + 0x20))(0xf,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 1) {
    (**(code **)(*(int *)this + 0x88))();
    lVar2 = (**(code **)(*(int *)this + 0x20))(1,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x113) {
    (**(code **)(*(int *)this + 0xa8))();
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x113,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x110) {
    (**(code **)(*(int *)this + 0x94))();
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x110,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x121) {
    (**(code **)(*(int *)this + 0x98))();
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x121,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 7) {
    GOnSetFocus((HWND__ *)param_2);
    (**(code **)(*(int *)this + 0x38))(param_2);
    lVar2 = (**(code **)(*(int *)this + 0x20))(7,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 6) {
    (**(code **)(*(int *)this + 0x54))((short)param_2 != 0);
    lVar2 = (**(code **)(*(int *)this + 0x20))(6,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 8) {
    GOnKillFocus((HWND__ *)param_2);
    (**(code **)(*(int *)this + 0x3c))(param_2);
    lVar2 = (**(code **)(*(int *)this + 0x20))(8,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 5) {
    (**(code **)(*(int *)this + 0x40))(param_2,param_3 & 0xffff,(uint)param_3 >> 0x10);
    lVar2 = (**(code **)(*(int *)this + 0x20))(5,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x46) {
    (**(code **)(*(int *)this + 0x44))(param_3 + 8,param_3 + 0xc,param_3 + 0x10,param_3 + 0x14);
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x46,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 3) {
    (**(code **)(*(int *)this + 0x48))(param_3 & 0xffff,(uint)param_3 >> 0x10);
    lVar2 = (**(code **)(*(int *)this + 0x20))(3,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x302) {
    (**(code **)(*(int *)this + 0x68))();
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x302,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x18) {
    (**(code **)(*(int *)this + 0x6c))(param_2);
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x18,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x4a) {
    (**(code **)(*(int *)this + 0x34))(param_2,param_3);
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x4a,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x215) {
    (**(code **)(*(int *)this + 0xac))();
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x215,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x222) {
    (**(code **)(*(int *)this + 0xb0))(param_3 == *(int *)(this + 4));
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x222,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x200) {
    (**(code **)(*(int *)this + 0xb4))
              (param_2,(int)(short)param_3,(int)(short)((uint)param_3 >> 0x10));
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x200,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x201) {
    (**(code **)(*(int *)this + 0xb8))();
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x201,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x203) {
    (**(code **)(*(int *)this + 0xbc))();
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x203,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x209) {
    (**(code **)(*(int *)this + 0xc0))();
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x209,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x206) {
    (**(code **)(*(int *)this + 0xc4))();
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x206,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x204) {
    (**(code **)(*(int *)this + 200))();
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x204,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x202) {
    (**(code **)(*(int *)this + 0xcc))();
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x202,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x205) {
    (**(code **)(*(int *)this + 0xd0))();
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x205,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x300) {
    (**(code **)(*(int *)this + 0x60))();
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x300,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x301) {
    (**(code **)(*(int *)this + 100))();
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x301,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x304) {
    (**(code **)(*(int *)this + 0x70))();
    lVar2 = (**(code **)(*(int *)this + 0x20))(0x304,param_2,param_3);
    ExceptionList = pvStack_10;
    return lVar2;
  }
  if (param_1 == 0x14) {
    iVar3 = (**(code **)(*(int *)this + 0x74))();
  }
  else {
    if (param_1 != 0x20) {
      if (param_1 == 0x4e) {
        for (iVar3 = 0; iVar3 < *(int *)(this + 0x24); iVar3 = iVar3 + 1) {
          piVar1 = *(int **)(*(int *)(this + 0x20) + iVar3 * 4);
          if ((param_2 == *(ushort *)(piVar1 + 3)) &&
             (iVar4 = (**(code **)(*piVar1 + 0x24))(0x4e,param_2,param_3), iVar4 != 0)) {
            ExceptionList = pvStack_10;
            return 1;
          }
        }
      }
      else {
        if (param_1 == 0x115) {
          (**(code **)(*(int *)this + 0x78))(param_2,param_3);
          lVar2 = (**(code **)(*(int *)this + 0x20))(0x115,param_2,param_3);
          ExceptionList = pvStack_10;
          return lVar2;
        }
        if (param_1 == 0x101) {
          (**(code **)(*(int *)this + 0x80))(param_2,param_3);
          lVar2 = (**(code **)(*(int *)this + 0x20))(0x101,param_2,param_3);
          ExceptionList = pvStack_10;
          return lVar2;
        }
        if (param_1 != 0x111) {
          if (param_1 != 0x114) {
            if (param_1 != 0x112) {
              if (param_1 == 0x8034) {
                ExceptionList = pvStack_10;
                return *(long *)(this + 0x38);
              }
              goto LAB_110278fb;
            }
            iVar3 = (**(code **)(*(int *)this + 0x50))(param_2);
            goto joined_r0x110277a5;
          }
          (**(code **)(*(int *)this + 0x7c))(param_2,param_3);
        }
        for (iVar3 = 0; iVar3 < *(int *)(this + 0x24); iVar3 = iVar3 + 1) {
          piVar1 = *(int **)(*(int *)(this + 0x20) + iVar3 * 4);
          if ((param_3 == piVar1[1]) &&
             (iVar4 = (**(code **)(*piVar1 + 0x24))(param_1,param_2,param_3), iVar4 != 0)) {
            ExceptionList = pvStack_10;
            return 1;
          }
        }
      }
      (**(code **)(*(int *)this + 0x4c))(param_2);
      goto LAB_110278fb;
    }
    iVar3 = (**(code **)(*(int *)this + 0xd8))();
  }
joined_r0x110277a5:
  if (iVar3 != 0) {
    ExceptionList = pvStack_10;
    return 1;
  }
LAB_110278fb:
  lVar2 = (**(code **)(*(int *)this + 0x20))(param_1,param_2,param_3);
  ExceptionList = pvStack_10;
  return lVar2;
}


// ==== 110023a6 WListBox::GetCurrent

/* public: int __thiscall WListBox::GetCurrent(void) */

int __thiscall WListBox::GetCurrent(WListBox *this)

{
  LRESULT LVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x23a6  494  ?GetCurrent@WListBox@@QAEHXZ */
  puStack_c = &LAB_1105fd90;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref != 0) {
    ExceptionList = &pvStack_10;
    LVar1 = SendMessageW(*(HWND *)(this + 4),0x19f,0,0);
    ExceptionList = pvStack_10;
    return LVar1;
  }
  ExceptionList = &pvStack_10;
  LVar1 = SendMessageA(*(HWND *)(this + 4),0x19f,0,0);
  ExceptionList = pvStack_10;
  return LVar1;
}


// ==== 110023ab WSplitterContainer::GetPackageName

/* public: virtual unsigned short const * __thiscall WSplitterContainer::GetPackageName(void) */

ushort * __thiscall WSplitterContainer::GetPackageName(WSplitterContainer *this)

{
                    /* 0x23ab  552  ?GetPackageName@WSplitterContainer@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 110023b0 WListBox::FindStringExact

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: int __thiscall WListBox::FindStringExact(unsigned short const *) */

int __thiscall WListBox::FindStringExact(WListBox *this,ushort *param_1)

{
  HWND hWnd;
  int iVar1;
  char *pcVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x23b0  463  ?FindStringExact@WListBox@@QAEHPBG@Z */
  puStack_c = &LAB_1105fe90;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
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
    iVar1 = SendMessageA(hWnd,0x1a2,0xffffffff,(LPARAM)pcVar2);
  }
  else {
    ExceptionList = &pvStack_10;
    iVar1 = SendMessageW(*(HWND *)(this + 4),0x1a2,0xffffffff,(LPARAM)param_1);
  }
  ExceptionList = pvStack_10;
  return iVar1;
}


// ==== 110023b5 WConfigProperties::WConfigProperties

/* public: __thiscall WConfigProperties::WConfigProperties(class WConfigProperties const &) */

WConfigProperties * __thiscall
WConfigProperties::WConfigProperties(WConfigProperties *this,WConfigProperties *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x23b5  67  ??0WConfigProperties@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063f96;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WProperties::WProperties((WProperties *)this,(WProperties *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_WWindow_;
  *(undefined ***)(this + 0x3c) = vftable_for_FControlSnoop_;
  FConfigItem::FConfigItem((FConfigItem *)(this + 0xfc),(FConfigItem *)(param_1 + 0xfc));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110023ba WCrashBoxDialog::GetPackageName

/* public: virtual unsigned short const * __thiscall WCrashBoxDialog::GetPackageName(void) */

ushort * __thiscall WCrashBoxDialog::GetPackageName(WCrashBoxDialog *this)

{
                    /* 0x23ba  532  ?GetPackageName@WCrashBoxDialog@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 110023c4 WProperties::SnoopKeyDown

/* public: virtual void __thiscall WProperties::SnoopKeyDown(class WWindow *,int) */

void __thiscall WProperties::SnoopKeyDown(WProperties *this,WWindow *param_1,int param_2)

{
  HWND hWnd;
  ushort uVar1;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x23c4  978  ?SnoopKeyDown@WProperties@@UAEXPAVWWindow@@H@Z */
  puStack_c = &LAB_11060f90;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (param_2 == 9) {
    hWnd = *(HWND *)(this + 0xc);
    lParam = 0;
    if (*(int *)GUnicodeOS_exref == 0) {
      ExceptionList = &pvStack_10;
      uVar1 = GetKeyState(0x10);
      PostMessageA(hWnd,0x100,(-(uint)((uVar1 & 0x8000) != 0) & 0xfffffffe) + 0x28,lParam);
    }
    else {
      ExceptionList = &pvStack_10;
      uVar1 = GetKeyState(0x10);
      PostMessageW(hWnd,0x100,(-(uint)((uVar1 & 0x8000) != 0) & 0xfffffffe) + 0x28,lParam);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110023c9 WObjectProperties::operator=

/* public: class WObjectProperties & __thiscall WObjectProperties::operator=(class WObjectProperties
   const &) */

WObjectProperties * __thiscall
WObjectProperties::operator=(WObjectProperties *this,WObjectProperties *param_1)

{
                    /* 0x23c9  280  ??4WObjectProperties@@QAEAAV0@ABV0@@Z */
  WProperties::operator=((WProperties *)this,(WProperties *)param_1);
  FTreeItem::operator=((FTreeItem *)(this + 0xfc),(FTreeItem *)(param_1 + 0xfc));
  FString::operator=((FString *)(this + 0x138),(FString *)(param_1 + 0x138));
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(this + 0x148) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(this + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(this + 0x150) = *(undefined4 *)(param_1 + 0x150);
  thunk_FUN_1102a830(this + 0x154,(FArray *)(param_1 + 0x154));
  return this;
}


// ==== 110023ce WTimeScrollBar::SetRange

/* public: void __thiscall WTimeScrollBar::SetRange(int) */

void __thiscall WTimeScrollBar::SetRange(WTimeScrollBar *this,int param_1)

{
                    /* 0x23ce  948  ?SetRange@WTimeScrollBar@@QAEXH@Z */
  if (param_1 < 1) {
    appFailAssert(s_InMaxVal_>_0_1106f634,s___Window_cpp_1106f624,0x5be);
  }
  *(int *)(this + 0x50) = param_1;
  InvalidateRect(*(HWND *)(this + 4),(RECT *)0x0,0);
  return;
}


// ==== 110023d3 WPropertyPage::OpenWindow

/* public: virtual void __thiscall WPropertyPage::OpenWindow(int,struct HINSTANCE__ *) */

void __thiscall WPropertyPage::OpenWindow(WPropertyPage *this,int param_1,HINSTANCE__ *param_2)

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
  char acStack_e8 [80];
  CHAR CStack_98;
  undefined1 auStack_97 [79];
  undefined1 *puStack_48;
  void *pvStack_44;
  undefined1 *puStack_40;
  uint uStack_3c;
  tagRECT tStack_38;
  int iStack_24;
  HGLOBAL pvStack_1c;
  undefined1 auStack_18 [4];
  LONG LStack_14;
  tagPOINT tStack_10;
  WPropertyPage *pWStack_8;
  
                    /* 0x23d3  868  ?OpenWindow@WPropertyPage@@UAEXHPAUHINSTANCE__@@@Z */
  puStack_40 = &LAB_1105f9a2;
  pvStack_44 = ExceptionList;
  puStack_48 = &stack0xffffff0c;
  uStack_3c = 0;
  ExceptionList = &pvStack_44;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xfffffffd;
  *(int *)(this + 0x60) = param_1;
  if (*(int *)(this + 0x14) == 0) {
    pHVar2 = (HWND__ *)0x0;
  }
  else {
    pHVar2 = *(HWND__ **)(*(int *)(this + 0x14) + 4);
  }
  pWStack_8 = this;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)0x0,0x50000000,0,0,0,0,pHVar2,(HMENU__ *)0x0,DAT_1109c35c);
  lParam = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    pvVar3 = GetStockObject(0x11);
    SendMessageA(*(HWND *)(this + 4),0x30,(WPARAM)pvVar3,lParam);
  }
  else {
    pvVar3 = GetStockObject(0x11);
    SendMessageW(*(HWND *)(this + 4),0x30,(WPARAM)pvVar3,lParam);
  }
  if (param_1 != 0) {
    if (param_2 == (HINSTANCE__ *)0x0) {
      appFailAssert(s_InHMOD_110699e0,s___Controls_cpp_11068b54,0xe1);
    }
    acStack_e8[0] = '\0';
    _memset(acStack_e8 + 1,0,0x4f);
    this_00 = (FString *)FString::Printf((ushort *)&LStack_14);
    uStack_3c = CONCAT31(uStack_3c._1_3_,1);
    pcVar6 = (char *)0x0;
    puVar4 = FString::operator*(this_00);
    pcVar5 = appToAnsi(puVar4,pcVar6);
    pcVar6 = acStack_e8;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uStack_3c = uStack_3c & 0xffffff00;
    FString::~FString((FString *)&LStack_14);
    hResInfo = FindResourceA(param_2,acStack_e8,(LPCSTR)0x5);
    if (hResInfo == (HRSRC)0x0) {
      appFailAssert(s_hrsrc_110699cc,s___Controls_cpp_11068b54,0xe8);
    }
    hResData = LoadResource(param_2,hResInfo);
    pvStack_1c = hResData;
    if (hResData == (HGLOBAL)0x0) {
      appFailAssert(&DAT_110699c4,s___Controls_cpp_11068b54,0xeb);
    }
    lpTemplate = LockResource(hResData);
    if (lpTemplate == (LPCDLGTEMPLATEA)0x0) {
      appFailAssert(s_dlgtemplate_110699b4,s___Controls_cpp_11068b54,0xee);
    }
    hWnd = CreateDialogIndirectParamA(DAT_1109c35c,lpTemplate,*(HWND *)(this + 4),(DLGPROC)0x0,0);
    if (hWnd == (HWND)0x0) {
      appFailAssert(s_hwndDlg_110699a8,s___Controls_cpp_11068b54,0xf1);
    }
    CStack_98 = '\0';
    _memset(auStack_97,0,0x4f);
    GetWindowTextA(hWnd,&CStack_98,0x50);
    puVar4 = appFromAnsi(&CStack_98,(ushort *)0x0);
    FString::operator=((FString *)(this + 0x54),puVar4);
    hWnd_00 = GetWindow(hWnd,5);
    while (hWnd_00 != (HWND)0x0) {
      GetWindowRect(hWnd_00,(LPRECT)auStack_18);
      ScreenToClient(hWnd,(LPPOINT)auStack_18);
      ScreenToClient(hWnd,&tStack_10);
      iStack_24 = GetDlgCtrlID(hWnd_00);
      GetWindowTextA(hWnd_00,&CStack_98,0x50);
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
      this_01 = (void *)thunk_FUN_110072d0(0x28,(FArray *)(pWStack_8 + 0x3c));
      if (this_01 != (void *)0x0) {
        puVar4 = appFromAnsi(&CStack_98,(ushort *)0x0);
        FString::FString((FString *)&stack0xfffffef8,puVar4);
        uStack_3c = uStack_3c & 0xffffff00;
        thunk_FUN_11006f80(this_01,iStack_24,auStack_18,LStack_14,tStack_10.x,tStack_10.y);
      }
      hWnd_00 = GetWindow(hWnd_00,2);
      this = pWStack_8;
    }
    GetClientRect(hWnd,&tStack_38);
    MoveWindow(*(HWND *)(this + 4),0,0,tStack_38.right,tStack_38.bottom,1);
    DeleteObject(pvStack_1c);
    DestroyWindow(hWnd);
  }
  ExceptionList = pvStack_44;
  return;
}


// ==== 110023d8 WListView::operator=

/* public: class WListView & __thiscall WListView::operator=(class WListView const &) */

WListView * __thiscall WListView::operator=(WListView *this,WListView *param_1)

{
                    /* 0x23d8  279  ??4WListView@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return this;
}


// ==== 110023dd thunk_FUN_1101db80 thunk -> 1101db80

// ==== 110023e2 WProperties::SnoopChar

/* public: virtual void __thiscall WProperties::SnoopChar(class WWindow *,int) */

void __thiscall WProperties::SnoopChar(WProperties *this,WWindow *param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x23e2  975  ?SnoopChar@WProperties@@UAEXPAVWWindow@@H@Z */
  puStack_c = &LAB_11060690;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0x94) != 0) {
    ExceptionList = &pvStack_10;
    (*(code *)**(undefined4 **)(*(int *)(this + 0x94) + 4))(param_1,param_2);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110023e7 WComboBox::WComboBox

/* public: __thiscall WComboBox::WComboBox(class WWindow *,int,long (__stdcall*)(struct HWND__
   *,unsigned int,unsigned int,long)) */

WComboBox * __thiscall
WComboBox::WComboBox
          (WComboBox *this,WWindow *param_1,int param_2,
          _func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x23e7  65  ??0WComboBox@@QAE@PAVWWindow@@HP6GJPAUHWND__@@IIJ@Z@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11061408;
  pvStack_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = SuperProc;
  }
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,param_1,param_2,param_3);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined ***)(this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined ***)(this + 0x58) = FDelegate::vftable;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined ***)(this + 100) = FDelegate::vftable;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined ***)(this + 0x70) = FDelegate::vftable;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined ***)(this + 0x7c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined ***)(this + 0x88) = FDelegate::vftable;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined ***)(this + 0x94) = FDelegate::vftable;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined ***)(this + 0xa0) = FDelegate::vftable;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined ***)(this + 0xac) = FDelegate::vftable;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110023ec WWizardDialog::GetPackageName

/* public: virtual unsigned short const * __thiscall WWizardDialog::GetPackageName(void) */

ushort * __thiscall WWizardDialog::GetPackageName(WWizardDialog *this)

{
                    /* 0x23ec  565  ?GetPackageName@WWizardDialog@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 110023f1 WTabControl::WTabControl

/* public: __thiscall WTabControl::WTabControl(class WWindow *,int,long (__stdcall*)(struct HWND__
   *,unsigned int,unsigned int,long)) */

WTabControl * __thiscall
WTabControl::WTabControl
          (WTabControl *this,WWindow *param_1,int param_2,
          _func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x23f1  145  ??0WTabControl@@QAE@PAVWWindow@@HP6GJPAUHWND__@@IIJ@Z@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110600a8;
  pvStack_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = SuperProc;
  }
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,param_1,param_2,param_3);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110023f6 WBitmapButton::Clicked

/* public: virtual void __thiscall WBitmapButton::Clicked(void) */

void __thiscall WBitmapButton::Clicked(WBitmapButton *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x23f6  413  ?Clicked@WBitmapButton@@UAEXXZ */
  puStack_c = &LAB_1105f650;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 200) == 0) {
    ExceptionList = &pvStack_10;
    *(undefined4 *)(this + 0x8c) = 0;
  }
  else {
    ExceptionList = &pvStack_10;
    *(uint *)(this + 0x8c) = (uint)(*(int *)(this + 0x8c) == 0);
  }
  InvalidateRect(*(HWND *)(this + 4),(RECT *)0x0,0);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002400 thunk_FUN_11010180 thunk -> 11010180

// ==== 11002405 WCheckListBox::operator=

/* public: class WCheckListBox & __thiscall WCheckListBox::operator=(class WCheckListBox const &) */

WCheckListBox * __thiscall WCheckListBox::operator=(WCheckListBox *this,WCheckListBox *param_1)

{
                    /* 0x2405  262  ??4WCheckListBox@@QAEAAV0@ABV0@@Z */
  WListBox::operator=((WListBox *)this,(WListBox *)param_1);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  return this;
}


// ==== 1100240a WUrlButton::~WUrlButton

/* public: virtual __thiscall WUrlButton::~WUrlButton(void) */

void __thiscall WUrlButton::~WUrlButton(WUrlButton *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x240a  235  ??1WUrlButton@@UAE@XZ */
  puStack_8 = &LAB_11062d57;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 1;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  FString::~FString((FString *)(this + 0x9c));
  uStack_4 = 0xffffffff;
  WCoolButton::~WCoolButton((WCoolButton *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11002414 FTreeItem::OnItemLeftMouseDown

/* public: virtual void __thiscall FTreeItem::OnItemLeftMouseDown(struct FPoint) */

void __thiscall FTreeItem::OnItemLeftMouseDown(FTreeItem *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2414  752  ?OnItemLeftMouseDown@FTreeItem@@UAEXUFPoint@@@Z */
  puStack_c = &LAB_11060320;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)(this + 0x10) != 0) {
    ExceptionList = &pvStack_10;
    (**(code **)(*(int *)this + 0x58))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100241e thunk_FUN_11014590 thunk -> 11014590

// ==== 11002423 WPropertyPage::~WPropertyPage

/* public: virtual __thiscall WPropertyPage::~WPropertyPage(void) */

void __thiscall WPropertyPage::~WPropertyPage(WPropertyPage *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x2423  219  ??1WPropertyPage@@UAE@XZ */
  puStack_8 = &LAB_110643ca;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  iStack_4 = 3;
  WWindow::MaybeDestroy((WWindow *)this);
  iStack_4._0_1_ = 2;
  FString::~FString((FString *)(this + 0x54));
  iStack_4._0_1_ = 1;
  thunk_FUN_1102e740((FArray *)(this + 0x48));
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  thunk_FUN_11039990((FArray *)(this + 0x3c));
  iStack_4 = 0xffffffff;
  WWindow::~WWindow((WWindow *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11002428 FNewObjectItem::FNewObjectItem

/* public: __thiscall FNewObjectItem::FNewObjectItem(class WPropertiesBase *,class FTreeItem *,class
   UObjectProperty *) */

FNewObjectItem * __thiscall
FNewObjectItem::FNewObjectItem
          (FNewObjectItem *this,WPropertiesBase *param_1,FTreeItem *param_2,UObjectProperty *param_3
          )

{
  FString *this_00;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  ushort *puVar7;
  int iVar8;
  UClass *pUStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2428  22
                       ??0FNewObjectItem@@QAE@PAVWPropertiesBase@@PAVFTreeItem@@PAVUObjectProperty@@@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11061635;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FHeaderItem::FHeaderItem((FHeaderItem *)this,param_1,param_2,0);
  uStack_4 = 0;
  this_00 = (FString *)(this + 0x48);
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  *(UObjectProperty **)(this + 0x3c) = param_3;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  FString::FString(this_00);
  uStack_4._0_1_ = 1;
  uVar1 = *(uint *)(*(int *)(*(int *)(this + 0x3c) + 0x78) + 0x4a4);
  bVar3 = false;
  bVar2 = false;
  if (((uVar1 & 1) != 0) || ((uVar1 & 0x1000) == 0)) {
    FArray::FArray((FArray *)&iStack_18);
    uStack_4 = CONCAT31(uStack_4._1_3_,3);
    pUStack_20 = UClass::StaticClass();
    iStack_1c = -1;
    if (pUStack_20 == (UClass *)0x0) {
      appFailAssert(s_Class_1106e404,s_d__work_interlude_2007_05_23_war_1106e40c,0x505);
    }
    thunk_FUN_1101a3f0(&pUStack_20);
    iVar8 = iStack_1c;
    if (iStack_1c < *(int *)(GObjObjects_exref + 4)) {
      do {
        iVar4 = UStruct::IsChildOf(*(UStruct **)(*(int *)GObjObjects_exref + iVar8 * 4),
                                   *(UStruct **)(*(int *)(this + 0x3c) + 0x78));
        pcVar6 = GObjObjects_exref;
        if (((iVar4 != 0) &&
            (iVar4 = *(int *)(*(int *)GObjObjects_exref + iVar8 * 4),
            (*(uint *)(iVar4 + 0x4a4) & 0x1000) != 0)) && ((*(byte *)(iVar4 + 0x4a4) & 1) == 0)) {
          iVar5 = FArray::Add((FArray *)&iStack_18,1,4);
          *(int *)(iStack_18 + iVar5 * 4) = iVar4;
          pcVar6 = GObjObjects_exref;
        }
        do {
          iVar8 = iVar8 + 1;
          if (*(int *)(pcVar6 + 4) <= iVar8) goto LAB_1101f4ba;
        } while ((*(int *)(*(int *)pcVar6 + iVar8 * 4) == 0) ||
                (iVar4 = UObject::IsA(*(UObject **)(*(int *)pcVar6 + iVar8 * 4),pUStack_20),
                pcVar6 = GObjObjects_exref, iVar4 == 0));
      } while (iVar8 < *(int *)(GObjObjects_exref + 4));
    }
LAB_1101f4ba:
    thunk_FUN_11015ed0(iStack_18,iStack_14);
    iVar8 = 0;
    if (0 < iStack_14) {
      do {
        if (!bVar2) {
          puVar7 = UObject::GetName(*(UObject **)(iStack_18 + iVar8 * 4));
          FString::operator=(this_00,puVar7);
          bVar2 = true;
        }
        puVar7 = UObject::GetName(*(UObject **)(iStack_18 + iVar8 * 4));
        iVar4 = FString::operator==((FString *)&DAT_1109c32c,puVar7);
        if (iVar4 != 0) {
          bVar3 = true;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iStack_14);
    }
    uStack_4._0_1_ = 1;
    thunk_FUN_1101c4a0((FArray *)&iStack_18);
    if (bVar3) {
      FString::operator=(this_00,(FString *)&DAT_1109c32c);
      ExceptionList = pvStack_c;
      return this;
    }
    if (bVar2) {
      ExceptionList = pvStack_c;
      return this;
    }
  }
  puVar7 = UObject::GetName(*(UObject **)(*(int *)(this + 0x3c) + 0x78));
  FString::operator=(this_00,puVar7);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002432 WEditTerminal::WEditTerminal

/* public: __thiscall WEditTerminal::WEditTerminal(class WEditTerminal const &) */

WEditTerminal * __thiscall WEditTerminal::WEditTerminal(WEditTerminal *this,WEditTerminal *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2432  91  ??0WEditTerminal@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062fd8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WEdit::WEdit((WEdit *)this,(WEdit *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002437 FObjectConfigItem::Expand

/* public: virtual void __thiscall FObjectConfigItem::Expand(void) */

void __thiscall FObjectConfigItem::Expand(FObjectConfigItem *this)

{
  UObject *pUVar1;
  FPropertyItem *pFVar2;
  undefined4 *puVar3;
  int iVar4;
  UClass *pUVar5;
  ushort *puVar6;
  int iStack_30;
  UObject *pUStack_2c;
  undefined4 uStack_1c;
  FName aFStack_18 [4];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2437  451  ?Expand@FObjectConfigItem@@UAEXXZ */
  puStack_c = &LAB_11061950;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  LazyLoadClass(this);
  if (*(UClass **)(this + 0x60) == (UClass *)0x0) {
    *(undefined4 *)(this + 0x10) = 0;
    (**(code **)(*(int *)this + 0x28))();
  }
  else {
    if (*(int *)(this + 0x34) == 0) {
      puVar6 = (ushort *)0x0;
      pUVar5 = (UClass *)0x0;
      iVar4 = 1;
      pUVar1 = UClass::GetDefaultObject(*(UClass **)(this + 0x60));
      UObject::LoadConfig(pUVar1,iVar4,pUVar5,puVar6);
      thunk_FUN_1101c650(&iStack_30,*(int *)(this + 0x60));
      while (pUVar1 = pUStack_2c, pUStack_2c != (UObject *)0x0) {
        iVar4 = (**(code **)(*(int *)this + 0x78))(*(undefined4 *)(pUStack_2c + 0x48));
        if (iVar4 != 0) {
          iVar4 = (**(code **)(*(int *)pUVar1 + 0x74))();
          if ((*(int *)(this + 0x60) == iVar4) || ((*(uint *)(pUVar1 + 0x48) & 0x40000) == 0)) {
            FName::FName(aFStack_18,0);
            iVar4 = FName::operator==((FName *)(this + 0x5c),aFStack_18);
            if (iVar4 == 0) {
              iVar4 = FName::operator==((FName *)(pUVar1 + 0x4c),(FName *)(this + 0x5c));
              if (iVar4 == 0) goto LAB_11021f35;
            }
            pFVar2 = (FPropertyItem *)thunk_FUN_110115b0(0x80,u_FPropertyItem_1106f11c);
            if (pFVar2 == (FPropertyItem *)0x0) {
              uStack_1c = 0;
            }
            else {
              puVar3 = (undefined4 *)UObject::GetFName(pUVar1);
              uStack_1c = FPropertyItem::FPropertyItem
                                    (pFVar2,*(undefined4 *)(this + 8),this,pUVar1,*puVar3,
                                     *(undefined4 *)(pUVar1 + 0x54),0xffffffff,0x29a);
            }
            thunk_FUN_1101bf00(this + 0x30,&uStack_1c);
          }
        }
LAB_11021f35:
        pUStack_2c = *(UObject **)(pUVar1 + 0x38);
        thunk_FUN_11015cb0(&iStack_30);
      }
    }
    FTreeItem::Expand((FTreeItem *)this);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100243c FObjectConfigItem::OnItemSetFocus

/* public: virtual void __thiscall FObjectConfigItem::OnItemSetFocus(void) */

void __thiscall FObjectConfigItem::OnItemSetFocus(FObjectConfigItem *this)

{
  int iVar1;
  ushort *puVar2;
  undefined **ppuVar3;
  code *pcVar4;
  
                    /* 0x243c  756  ?OnItemSetFocus@FObjectConfigItem@@UAEXXZ */
  FHeaderItem::OnItemSetFocus((FHeaderItem *)this);
  ppuVar3 = FDelegate::vftable;
  pcVar4 = OnResetToDefaultsButton;
  iVar1 = *(int *)this;
  puVar2 = LocalizeGeneral(s_DefaultsButton_1106e160,(ushort *)u_Window_1106949c,(ushort *)0x0);
  (**(code **)(iVar1 + 0x34))(puVar2,ppuVar3,this,pcVar4);
  return;
}


// ==== 11002441 WDialog::~WDialog

/* public: virtual __thiscall WDialog::~WDialog(void) */

void __thiscall WDialog::~WDialog(WDialog *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2441  204  ??1WDialog@@UAE@XZ */
  puStack_8 = &LAB_110631b8;
  pvStack_c = ExceptionList;
  uStack_4 = 0xffffffff;
  ExceptionList = &pvStack_c;
  WWindow::~WWindow((WWindow *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11002446 FControlSnoop::SnoopKeyDown

/* public: virtual void __thiscall FControlSnoop::SnoopKeyDown(class WWindow *,int) */

void __thiscall FControlSnoop::SnoopKeyDown(FControlSnoop *this,WWindow *param_1,int param_2)

{
                    /* 0x2446  976  ?SnoopKeyDown@FControlSnoop@@UAEXPAVWWindow@@H@Z */
  return;
}


// ==== 1100244b WPropertySheet::OnTabsSelChange

/* public: void __thiscall WPropertySheet::OnTabsSelChange(void) */

void __thiscall WPropertySheet::OnTabsSelChange(WPropertySheet *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x244b  840  ?OnTabsSelChange@WPropertySheet@@QAEXXZ */
  puStack_c = &LAB_1105fa00;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  RefreshPages(this);
  if (*(FContainer **)(this + 0x50) != (FContainer *)0x0) {
    FContainer::RefreshControls(*(FContainer **)(this + 0x50));
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002450 thunk_FUN_110345e0 thunk -> 110345e0

// ==== 11002455 WTreeView::InterceptControlCommand

/* public: virtual int __thiscall WTreeView::InterceptControlCommand(unsigned int,unsigned int,long)
    */

int __thiscall
WTreeView::InterceptControlCommand(WTreeView *this,uint param_1,uint param_2,long param_3)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2455  661  ?InterceptControlCommand@WTreeView@@UAEHIIJ@Z */
  puStack_c = &LAB_1105f730;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(uint *)(this + 0x30) = param_2;
  *(long *)(this + 0x34) = param_3;
  if ((*(int *)(param_3 + 8) == -0x192) || (*(int *)(param_3 + 8) == -0x1c3)) {
    (*(code *)**(undefined4 **)(this + 0x4c))();
  }
  if ((*(int *)(param_3 + 8) == -0x195) || (*(int *)(param_3 + 8) == -0x1c6)) {
    (*(code *)**(undefined4 **)(this + 0x40))();
  }
  if (*(int *)(param_3 + 8) == -3) {
    (*(code *)**(undefined4 **)(this + 0x58))();
    ExceptionList = pvStack_10;
    return 1;
  }
  ExceptionList = pvStack_10;
  return 0;
}


// ==== 1100245a WSplitter::OnPaint

/* public: virtual void __thiscall WSplitter::OnPaint(void) */

void __thiscall WSplitter::OnPaint(WSplitter *this)

{
  HDC hDC;
  HWND pHVar1;
  UINT grfFlags;
  tagPAINTSTRUCT tStack_6c;
  RECT RStack_2c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x245a  800  ?OnPaint@WSplitter@@UAEXXZ */
  puStack_c = &LAB_11061ff0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff88;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  hDC = BeginPaint(*(HWND *)(this + 4),&tStack_6c);
  WWindow::GetClientRect((WWindow *)this);
  FillRect(hDC,&RStack_2c,hBrushGreyWindow);
  grfFlags = 0xf;
  pHVar1 = GetCapture();
  DrawEdge(hDC,&RStack_2c,(-(uint)(pHVar1 != *(HWND *)(this + 4)) & 0xfffffffb) + 10,grfFlags);
  EndPaint(*(HWND *)(this + 4),&tStack_6c);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100245f FObjectsItem::SetProperty

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* public: virtual void __thiscall FObjectsItem::SetProperty(class FPropertyItem *,unsigned short
   const *) */

void __thiscall FObjectsItem::SetProperty(FObjectsItem *this,FPropertyItem *param_1,ushort *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  UObject *pUVar3;
  int iVar4;
  undefined4 uVar5;
  ushort *puVar6;
  ushort *puStack_205c;
  ushort uStack_2040;
  undefined1 auStack_203e [8190];
  FString aFStack_40 [16];
  FString aFStack_30 [16];
  FString *pFStack_20;
  FObjectsItem *pFStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x245f  945  ?SetProperty@FObjectsItem@@UAEXPAVFPropertyItem@@PBG@Z */
  puStack_c = &LAB_1106138b;
  pvStack_10 = ExceptionList;
  iStack_18 = 0x1101df13;
  puStack_14 = &stack0xffffdfb4;
  iStack_8 = 0;
  ExceptionList = &pvStack_10;
  pFStack_1c = this;
  puVar2 = &stack0xffffdfb4;
  if (*(int *)(*(int *)(this + 8) + 0x18) != 0) {
    ExceptionList = &pvStack_10;
    (**(code **)(**(int **)(*(int *)(this + 8) + 0x18) + 4))();
    puVar2 = puStack_14;
  }
  puStack_14 = puVar2;
  for (iStack_18 = 0; iVar1 = iStack_18, iStack_18 < *(int *)(this + 0x5c);
      iStack_18 = iStack_18 + 1) {
    pUVar3 = thunk_FUN_11013fd0(*(UObject **)(param_1 + 0x3c));
    if (((pUVar3 == (UObject *)0x0) &&
        (pUVar3 = thunk_FUN_11014000(*(UObject **)(param_1 + 0x3c)), pUVar3 == (UObject *)0x0)) &&
       ((pUVar3 = thunk_FUN_11014030(*(UObject **)(param_1 + 0x3c)), pUVar3 == (UObject *)0x0 ||
        (pUVar3 = thunk_FUN_11014030(*(UObject **)(param_1 + 0x3c)), *(int *)(pUVar3 + 0x78) != 0)))
       ) {
      iVar4 = **(int **)(param_1 + 0x3c);
      (**(code **)(*(int *)param_1 + 0x60))();
      puStack_205c = param_2;
      (**(code **)(iVar4 + 0x9c))();
    }
    else {
      FString::FString(aFStack_30,param_2);
      iStack_8._0_1_ = 1;
      pFStack_20 = (FString *)&puStack_205c;
      FString::FString((FString *)&puStack_205c,aFStack_30);
      iStack_8._0_1_ = 1;
      iVar4 = Eval(this);
      if (iVar4 == 0) {
        FString::operator=((FString *)(param_1 + 0x74),param_2);
        iVar4 = **(int **)(param_1 + 0x3c);
        uVar5 = (**(code **)(*(int *)param_1 + 0x60))
                          (*(undefined4 *)(*(int *)(this + 0x58) + iVar1 * 4));
        (**(code **)(iVar4 + 0x9c))(param_2,uVar5);
      }
      else {
        pFStack_20 = (FString *)
                     FString::Printf((ushort *)aFStack_40,&DAT_1106e758,(double)(float)param_1);
        iStack_8._0_1_ = 3;
        iVar4 = **(int **)(param_1 + 0x3c);
        uVar5 = (**(code **)(*(int *)param_1 + 0x60))
                          (*(undefined4 *)(*(int *)(this + 0x58) + iVar1 * 4));
        puVar6 = FString::operator*(pFStack_20);
        (**(code **)(iVar4 + 0x9c))(puVar6,uVar5);
        iStack_8._0_1_ = 1;
        FString::~FString(aFStack_40);
      }
      puVar6 = param_2;
      if (*(int *)(pFStack_1c + 0x5c) < 2) {
        uStack_2040 = 0;
        puStack_205c = (ushort *)0x1101e0c2;
        _memset(auStack_203e,0,0x1ffe);
        FPropertyItem::GetPropertyText(param_1,&uStack_2040);
        puVar6 = &uStack_2040;
      }
      FString::operator=((FString *)(param_1 + 0x74),puVar6);
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      FString::~FString(aFStack_30);
    }
    if (*(int *)GL2NeedEditChange_exref != 0) {
      (**(code **)(**(int **)(iVar1 * 4 + *(int *)(pFStack_1c + 0x58)) + 0x44))();
    }
    this = pFStack_1c;
  }
  if (*(int *)(*(int *)(this + 8) + 0x18) != 0) {
    (**(code **)(**(int **)(*(int *)(this + 8) + 0x18) + 8))();
  }
  if (*(int *)(this + 0x54) != 0) {
    (**(code **)(**(int **)(this + 0xc) + 0x6c))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002469 WTimeScrollBar::OnPaint

/* public: virtual void __thiscall WTimeScrollBar::OnPaint(void) */

void __thiscall WTimeScrollBar::OnPaint(WTimeScrollBar *this)

{
  HDC pHVar1;
  HDC hdc;
  tagPAINTSTRUCT tStack_88;
  int iStack_48;
  tagRECT tStack_38;
  HGDIOBJ pvStack_20;
  HDC pHStack_1c;
  HBITMAP pHStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2469  804  ?OnPaint@WTimeScrollBar@@UAEXXZ */
  puStack_c = &LAB_11061ee0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff6c;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pHVar1 = BeginPaint(*(HWND *)(this + 4),&tStack_88);
  pHStack_1c = pHVar1;
  GetClientRect(*(HWND *)(this + 4),&tStack_38);
  hdc = CreateCompatibleDC(pHVar1);
  pHStack_18 = CreateCompatibleBitmap(pHVar1,tStack_38.right,tStack_38.bottom);
  pHVar1 = CreateCompatibleDC(pHVar1);
  SelectObject(pHVar1,pHStack_18);
  pvStack_20 = SelectObject(hdc,*(HGDIOBJ *)(this + 0x5c));
  StretchBlt(pHVar1,0,0,tStack_38.right,tStack_38.bottom,hdc,0,0,*(int *)(this + 0xa0),
             *(int *)(this + 0xa4),0xcc0020);
  SelectObject(hdc,*(HGDIOBJ *)(this + 0x58));
  BitBlt(pHVar1,0,0,*(int *)(this + 0x88),*(int *)(this + 0x8c),hdc,0,0,0xcc0020);
  SelectObject(hdc,*(HGDIOBJ *)(this + 0x60));
  BitBlt(pHVar1,tStack_38.right + -1,0,*(int *)(this + 0xb8),*(int *)(this + 0xbc),hdc,0,0,0xcc0020)
  ;
  SelectObject(hdc,*(HGDIOBJ *)(this + 0x54));
  GetThumbRect(this);
  BitBlt(pHVar1,iStack_48,2,*(int *)(this + 0x70),*(int *)(this + 0x74),hdc,0,0,0xcc0020);
  BitBlt(pHStack_1c,0,0,tStack_38.right,tStack_38.bottom,pHVar1,0,0,0xcc0020);
  SelectObject(hdc,pvStack_20);
  DeleteObject(pHStack_18);
  DeleteDC(hdc);
  DeleteDC(pHVar1);
  EndPaint(*(HWND *)(this + 4),&tStack_88);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002473 thunk_FUN_1102bd80 thunk -> 1102bd80

// ==== 11002478 FTreeItem::GetParentObject

/* public: virtual class UObject * __thiscall FTreeItem::GetParentObject(void) */

UObject * __thiscall FTreeItem::GetParentObject(FTreeItem *this)

{
  UObject *pUVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2478  568  ?GetParentObject@FTreeItem@@UAEPAVUObject@@XZ */
  puStack_c = &LAB_11060400;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pUVar1 = (UObject *)(**(code **)(**(int **)(this + 0xc) + 0x90))();
  ExceptionList = pvStack_10;
  return pUVar1;
}


// ==== 11002482 WUrlButton::GetWindowClassName

/* public: virtual void __thiscall WUrlButton::GetWindowClassName(unsigned short *) */

void __thiscall WUrlButton::GetWindowClassName(WUrlButton *this,ushort *param_1)

{
                    /* 0x2482  640  ?GetWindowClassName@WUrlButton@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WUrlButton_1106fbe4);
  return;
}


// ==== 1100248c FTreeItemBase::operator=

/* public: class FTreeItemBase & __thiscall FTreeItemBase::operator=(class FTreeItemBase const &) */

FTreeItemBase * __thiscall FTreeItemBase::operator=(FTreeItemBase *this,FTreeItemBase *param_1)

{
                    /* 0x248c  254  ??4FTreeItemBase@@QAEAAV0@ABV0@@Z */
  return this;
}


// ==== 11002491 WEdit::SetModify

/* public: void __thiscall WEdit::SetModify(int) */

void __thiscall WEdit::SetModify(WEdit *this,int param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2491  934  ?SetModify@WEdit@@QAEXH@Z */
  puStack_c = &LAB_1105fc60;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0xb9,param_1,0);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0xb9,param_1,0);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002496 WThinScrollBar::SetPos

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall WThinScrollBar::SetPos(int,float) */

void __thiscall WThinScrollBar::SetPos(WThinScrollBar *this,int param_1,float param_2)

{
                    /* 0x2496  939  ?SetPos@WThinScrollBar@@QAEXHM@Z */
  if (*(int *)(this + 0x54) == 0) {
    appFailAssert(s_MaxVal_1106f61c,s___Window_cpp_1106f624,0x4d4);
  }
  *(float *)(this + 0x48) = ((float)param_1 / (float)*(int *)(this + 0x54)) * (float)_DAT_1106f610;
  *(float *)(this + 0x4c) = param_2;
  InvalidateRect(*(HWND *)(this + 4),(RECT *)0x0,0);
  return;
}


// ==== 1100249b WEditTerminal::`default_constructor_closure'

/* public: void __thiscall WEditTerminal::`default constructor closure'(void) */

void __thiscall WEditTerminal::_default_constructor_closure_(WEditTerminal *this)

{
                    /* 0x249b  391  ??_FWEditTerminal@@QAEXXZ */
  WEditTerminal(this,(WTerminalBase *)0x0);
  return;
}


// ==== 110024a0 WScrollBar::~WScrollBar

/* public: virtual __thiscall WScrollBar::~WScrollBar(void) */

void __thiscall WScrollBar::~WScrollBar(WScrollBar *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x24a0  222  ??1WScrollBar@@UAE@XZ */
  puStack_8 = &LAB_11062c08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable;
  uStack_4 = 0;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = 0xffffffff;
  WControl::~WControl((WControl *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 110024a5 FUDNHelpTopic::FUDNHelpTopic

/* public: __thiscall FUDNHelpTopic::FUDNHelpTopic(class FString,class FString) */

FUDNHelpTopic * __thiscall FUDNHelpTopic::FUDNHelpTopic(FUDNHelpTopic *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0x24a5  40  ??0FUDNHelpTopic@@QAE@VFString@@0@Z */
  puStack_8 = &LAB_11061c57;
  pvStack_c = ExceptionList;
  iStack_4 = 1;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)this,(FString *)&stack0x00000004);
  iStack_4._0_1_ = 2;
  FString::FString((FString *)(this + 0xc),(FString *)&stack0x00000010);
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FString::~FString((FString *)&stack0x00000004);
  iStack_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000010);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110024aa thunk_FUN_1101c080 thunk -> 1101c080

// ==== 110024af WProperties::GetDividerWidth

/* public: virtual int __thiscall WProperties::GetDividerWidth(void) */

int __thiscall WProperties::GetDividerWidth(WProperties *this)

{
                    /* 0x24af  499  ?GetDividerWidth@WProperties@@UAEHXZ */
  return *(int *)(this + 0xf4);
}


// ==== 110024b9 thunk_FUN_110115b0 thunk -> 110115b0

// ==== 110024be WWizardPage::GetNextText

/* public: virtual unsigned short const * __thiscall WWizardPage::GetNextText(void) */

ushort * __thiscall WWizardPage::GetNextText(WWizardPage *this)

{
  ushort *puVar1;
  
                    /* 0x24be  522  ?GetNextText@WWizardPage@@UAEPBGXZ */
  puVar1 = LocalizeGeneral(s_NextButton_1106b11c,(ushort *)u_Window_1106949c,(ushort *)0x0);
  return puVar1;
}


// ==== 110024c3 WBitmapButton::WBitmapButton

/* public: __thiscall WBitmapButton::WBitmapButton(void) */

WBitmapButton * __thiscall WBitmapButton::WBitmapButton(WBitmapButton *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x24c3  48  ??0WBitmapButton@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110628b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WButton::WButton((WButton *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110024cd WTerminal::OnSize

/* public: virtual void __thiscall WTerminal::OnSize(unsigned long,int,int) */

void __thiscall WTerminal::OnSize(WTerminal *this,ulong param_1,int param_2,int param_3)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x24cd  837  ?OnSize@WTerminal@@UAEXKHH@Z */
  puStack_c = &LAB_11061f20;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::MoveWindow((WWindow *)(this + 0x40),0,0,param_2,param_3,1);
  WEdit::ScrollCaret((WEdit *)(this + 0x40));
  ExceptionList = pvStack_10;
  return;
}


// ==== 110024d2 WToolTip::WToolTip

/* public: __thiscall WToolTip::WToolTip(class WWindow *,int,long (__stdcall*)(struct HWND__
   *,unsigned int,unsigned int,long)) */

WToolTip * __thiscall
WToolTip::WToolTip(WToolTip *this,WWindow *param_1,int param_2,
                  _func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x24d2  158  ??0WToolTip@@QAE@PAVWWindow@@HP6GJPAUHWND__@@IIJ@Z@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110600e8;
  pvStack_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = SuperProc;
  }
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,param_1,param_2,param_3);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  if (*(int *)(this + 0x14) == 0) {
    appFailAssert(s_OwnerWindow_1106abb4,s____Inc_Window_h_1106aefc,0x438);
  }
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110024d7 thunk_FUN_1101bd10 thunk -> 1101bd10

// ==== 110024dc FPropertyItemBase::AcceptFlags

/* public: virtual int __thiscall FPropertyItemBase::AcceptFlags(unsigned long) */

int __thiscall FPropertyItemBase::AcceptFlags(FPropertyItemBase *this,ulong param_1)

{
                    /* 0x24dc  393  ?AcceptFlags@FPropertyItemBase@@UAEHK@Z */
  return (uint)((*(uint *)(this + 0x48) & param_1) == *(uint *)(this + 0x48));
}


// ==== 110024e1 WWindow::OnCommand

/* public: virtual void __thiscall WWindow::OnCommand(int) */

void __thiscall WWindow::OnCommand(WWindow *this,int param_1)

{
                    /* 0x24e1  703  ?OnCommand@WWindow@@UAEXH@Z */
  return;
}


// ==== 110024e6 thunk_FUN_11022790 thunk -> 11022790

// ==== 110024eb thunk_FUN_110301a0 thunk -> 110301a0

// ==== 110024f5 FTreeItem::Serialize

/* public: virtual void __thiscall FTreeItem::Serialize(class FArchive &) */

void __thiscall FTreeItem::Serialize(FTreeItem *this,FArchive *param_1)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x24f5  913  ?Serialize@FTreeItem@@UAEXAAVFArchive@@@Z */
  puStack_c = &LAB_11060bd0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x34); iVar1 = iVar1 + 1) {
    (**(code **)(**(int **)(*(int *)(this + 0x30) + iVar1 * 4) + 0x1c))(param_1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110024fa WTimeScrollBar::SetPct

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall WTimeScrollBar::SetPct(float) */

void __thiscall WTimeScrollBar::SetPct(WTimeScrollBar *this,float param_1)

{
  float fVar1;
  
                    /* 0x24fa  938  ?SetPct@WTimeScrollBar@@QAEXM@Z */
  if (NAN(param_1) || 0.0 < param_1 == (param_1 == 0.0)) {
    param_1 = 0.0;
  }
  fVar1 = (float)_DAT_1106f610;
  if ((NAN(param_1) || NAN(fVar1)) || param_1 < fVar1 == (param_1 == fVar1)) {
    param_1 = _DAT_11070308;
  }
  *(float *)(this + 0x48) = param_1;
  InvalidateRect(*(HWND *)(this + 4),(RECT *)0x0,0);
  return;
}


// ==== 110024ff WCustomLabel::GetPackageName

/* public: virtual unsigned short const * __thiscall WCustomLabel::GetPackageName(void) */

ushort * __thiscall WCustomLabel::GetPackageName(WCustomLabel *this)

{
                    /* 0x24ff  533  ?GetPackageName@WCustomLabel@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11002509 thunk_FUN_1101c150 thunk -> 1101c150

// ==== 11002513 WWindow::ClientToScreen

/* public: struct FRect __thiscall WWindow::ClientToScreen(struct FRect const &) */

void __thiscall WWindow::ClientToScreen(WWindow *this,FRect *param_1)

{
  LONG LVar1;
  LONG *in_stack_00000008;
  tagPOINT tStack_18;
  tagPOINT tStack_10;
  LONG LStack_4;
  
                    /* 0x2513  417  ?ClientToScreen@WWindow@@QAE?AUFRect@@ABU2@@Z */
  tStack_18.x = in_stack_00000008[2];
  tStack_18.y = in_stack_00000008[3];
  ::ClientToScreen(*(HWND *)(this + 4),&tStack_18);
  LVar1 = tStack_18.x;
  tStack_10.x = *in_stack_00000008;
  tStack_10.y = in_stack_00000008[1];
  LStack_4 = tStack_18.y;
  ::ClientToScreen(*(HWND *)(this + 4),&tStack_10);
  *(LONG *)param_1 = tStack_10.x;
  *(LONG *)(param_1 + 8) = LVar1;
  *(LONG *)(param_1 + 4) = tStack_10.y;
  *(LONG *)(param_1 + 0xc) = LStack_4;
  return;
}


// ==== 11002518 WCheckBox::GetWindowClassName

/* public: virtual void __thiscall WCheckBox::GetWindowClassName(unsigned short *) */

void __thiscall WCheckBox::GetWindowClassName(WCheckBox *this,ushort *param_1)

{
                    /* 0x2518  602  ?GetWindowClassName@WCheckBox@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WCheckBox_1106fb98);
  return;
}


// ==== 1100251d FTreeItem::Redraw

/* public: virtual void __thiscall FTreeItem::Redraw(void) */

void __thiscall FTreeItem::Redraw(FTreeItem *this)

{
  RECT *lpRect;
  int iVar1;
  undefined1 auStack_2c [24];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x251d  890  ?Redraw@FTreeItem@@UAEXXZ */
  puStack_c = &LAB_11060be0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  lpRect = (RECT *)(**(code **)(*(int *)this + 0x24))(auStack_2c);
  InvalidateRect(*(HWND *)(*(int *)(this + 8) + 0x48),lpRect,0);
  UpdateWindow(*(HWND *)(*(int *)(this + 8) + 0x48));
  iVar1 = (**(code **)(**(int **)(this + 8) + 0xe8))();
  if (*(int *)(this + 0xc) != iVar1) {
    (**(code **)(**(int **)(this + 0xc) + 0x28))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002522 FCategoryItem::GetId

/* public: virtual unsigned __int64 __thiscall FCategoryItem::GetId(void)const  */

__uint64 __thiscall FCategoryItem::GetId(FCategoryItem *this)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2522  505  ?GetId@FCategoryItem@@UBE_KXZ */
  puStack_c = &LAB_110605a0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  iVar1 = FName::GetIndex((FName *)(this + 0x3c));
  ExceptionList = pvStack_10;
  return CONCAT44((iVar1 >> 0x1f) + 2,iVar1);
}


// ==== 1100252c WEditTerminal::OnRightButtonDown

/* public: virtual void __thiscall WEditTerminal::OnRightButtonDown(void) */

void __thiscall WEditTerminal::OnRightButtonDown(WEditTerminal *this)

{
  wchar_t *pwStack_4;
  
                    /* 0x252c  815  ?OnRightButtonDown@WEditTerminal@@UAEXXZ */
  pwStack_4 = u_NoRoute_1106b458;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&pwStack_4,&DAT_1107a670);
}


// ==== 11002531 FTreeItemBase::FTreeItemBase

/* public: __thiscall FTreeItemBase::FTreeItemBase(class FTreeItemBase const &) */

void __thiscall FTreeItemBase::FTreeItemBase(FTreeItemBase *this,FTreeItemBase *param_1)

{
                    /* 0x2531  37  ??0FTreeItemBase@@QAE@ABV0@@Z */
  *(undefined ***)(this + 4) = FControlSnoop::vftable;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  return;
}


// ==== 11002536 WProperties::OpenChildWindow

/* public: void __thiscall WProperties::OpenChildWindow(int) */

void __thiscall WProperties::OpenChildWindow(WProperties *this,int param_1)

{
  HWND hWnd;
  tagRECT tStack_2c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2536  850  ?OpenChildWindow@WProperties@@QAEXH@Z */
  puStack_c = &LAB_11060f30;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  uStack_8 = 0;
  if (param_1 == 0) {
    hWnd = *(HWND *)(*(int *)(this + 0x14) + 4);
    ExceptionList = &pvStack_10;
    puStack_14 = &stack0xffffffc8;
  }
  else {
    ExceptionList = &pvStack_10;
    hWnd = GetDlgItem(*(HWND *)(*(int *)(this + 0x14) + 4),param_1);
  }
  if (hWnd == (HWND)0x0) {
    appFailAssert(s_hWndParent_1106db10,s___Properties_cpp_1106b558,0x63c);
  }
  GetClientRect(hWnd,&tStack_2c);
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)0x0,0x46000000,0,0,tStack_2c.right - tStack_2c.left,
             tStack_2c.bottom - tStack_2c.top,hWnd,(HMENU__ *)0x0,DAT_1109c35c);
  WListBox::OpenWindow((WListBox *)(this + 0x44),1,0,0,1,0,0);
  (**(code **)(*(int *)this + 8))(1);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100253b WEditTerminal::OnChar

/* public: virtual void __thiscall WEditTerminal::OnChar(unsigned short) */

void __thiscall WEditTerminal::OnChar(WEditTerminal *this,ushort param_1)

{
  undefined2 in_stack_00000006;
  
                    /* 0x253b  693  ?OnChar@WEditTerminal@@UAEXG@Z */
  if (param_1 != 3) {
    (**(code **)(**(int **)(this + 0x58) + 0xe8))(_param_1);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&stack0x00000000,&DAT_1107a670);
  }
  return;
}


// ==== 11002540 WDragInterceptor::GetPackageName

/* public: virtual unsigned short const * __thiscall WDragInterceptor::GetPackageName(void) */

ushort * __thiscall WDragInterceptor::GetPackageName(WDragInterceptor *this)

{
                    /* 0x2540  534  ?GetPackageName@WDragInterceptor@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 11002545 WListBox::GetItemRect

/* public: struct FRect __thiscall WListBox::GetItemRect(int) */

int __thiscall WListBox::GetItemRect(WListBox *this,int param_1)

{
  WPARAM in_stack_00000008;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2545  515  ?GetItemRect@WListBox@@QAE?AUFRect@@H@Z */
  puStack_c = &LAB_1105fe20;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffc8;
  uStack_8 = 0;
  iStack_20 = 0;
  iStack_28 = 0;
  iStack_24 = 0;
  iStack_2c = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0x198,in_stack_00000008,(LPARAM)&iStack_2c);
  }
  else {
    ExceptionList = &pvStack_10;
    puStack_14 = &stack0xffffffc8;
    SendMessageW(*(HWND *)(this + 4),0x198,in_stack_00000008,(LPARAM)&iStack_2c);
  }
  CRect::CRect((CRect *)param_1,iStack_2c,iStack_28,iStack_24,iStack_20);
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 1100254a WPropertyPage::operator=

/* public: class WPropertyPage & __thiscall WPropertyPage::operator=(class WPropertyPage const &) */

WPropertyPage * __thiscall WPropertyPage::operator=(WPropertyPage *this,WPropertyPage *param_1)

{
                    /* 0x254a  285  ??4WPropertyPage@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  thunk_FUN_11039a00(this + 0x3c,(FArray *)(param_1 + 0x3c));
  thunk_FUN_1102e800(this + 0x48,(FArray *)(param_1 + 0x48));
  FString::operator=((FString *)(this + 0x54),(FString *)(param_1 + 0x54));
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  return this;
}


// ==== 11002554 WBitmapButton::OpenWindow

/* public: void __thiscall WBitmapButton::OpenWindow(int,unsigned long,unsigned long,struct
   HBITMAP__ *,struct FRect,struct FRect,struct FRect) */

void __thiscall
WBitmapButton::OpenWindow
          (WBitmapButton *this,int param_1,uint param_2,uint param_3,undefined4 param_4,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
          undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
          undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2554  851  ?OpenWindow@WBitmapButton@@QAEXHKKPAUHBITMAP__@@UFRect@@11@Z */
  puStack_c = &LAB_1105fa60;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  *(uint *)(this + 200) = (uint)(param_2 == 3);
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0,(ushort *)0x0,
             -(uint)(param_1 != 0) & 0x10000000 | param_2 | param_3 | 0x4200000b,0,0,0,0,
             *(HWND__ **)(*(int *)(this + 0x14) + 4),(HMENU__ *)(uint)*(ushort *)(this + 0xc),
             DAT_1109c35c);
  *(undefined4 *)(this + 0x94) = param_4;
  *(undefined4 *)(this + 0x98) = param_6;
  *(undefined4 *)(this + 0x9c) = param_7;
  *(undefined4 *)(this + 0xa0) = param_8;
  *(undefined4 *)(this + 0xa4) = param_9;
  *(undefined4 *)(this + 0xa8) = param_10;
  *(undefined4 *)(this + 0xac) = param_11;
  *(undefined4 *)(this + 0xb0) = param_12;
  *(undefined4 *)(this + 0xb4) = param_13;
  *(undefined4 *)(this + 0xb8) = param_14;
  *(undefined4 *)(this + 0xbc) = param_15;
  *(undefined4 *)(this + 0xc0) = param_16;
  *(undefined4 *)(this + 0xc4) = param_17;
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002559 thunk_FUN_11006de0 thunk -> 11006de0

// ==== 1100256d WPictureButton::OnLeftButtonDown

/* public: virtual void __thiscall WPictureButton::OnLeftButtonDown(void) */

void __thiscall WPictureButton::OnLeftButtonDown(WPictureButton *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x256d  768  ?OnLeftButtonDown@WPictureButton@@UAEXXZ */
  puStack_c = &LAB_1105f6c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(*(int *)(this + 0x14) + 4),0x111,0x801d,*(LPARAM *)(this + 0x80));
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(*(int *)(this + 0x14) + 4),0x111,0x801d,*(LPARAM *)(this + 0x80));
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002572 FWaitCursor::FWaitCursor

/* public: __thiscall FWaitCursor::FWaitCursor(void) */

FWaitCursor * __thiscall FWaitCursor::FWaitCursor(FWaitCursor *this)

{
  HCURSOR pHVar1;
  
                    /* 0x2572  42  ??0FWaitCursor@@QAE@XZ */
  pHVar1 = GetCursor();
  *(HCURSOR *)this = pHVar1;
  if (*(int *)GUnicodeOS_exref != 0) {
    pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f02);
    SetCursor(pHVar1);
    return this;
  }
  pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
  SetCursor(pHVar1);
  return this;
}


// ==== 11002577 thunk_FUN_110143f0 thunk -> 110143f0

// ==== 1100257c WTrackBar::SetTicks

/* public: void __thiscall WTrackBar::SetTicks(int *,int) */

void __thiscall WTrackBar::SetTicks(WTrackBar *this,int *param_1,int param_2)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x257c  960  ?SetTicks@WTrackBar@@QAEXPAHH@Z */
  puStack_c = &LAB_1105fcd0;
  pvStack_10 = ExceptionList;
  iVar1 = 0;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0x409,1,0);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0x409,1,0);
  }
  while (iVar1 < param_2) {
    if (*(int *)GUnicodeOS_exref == 0) {
      SendMessageA(*(HWND *)(this + 4),0x404,0,param_1[iVar1]);
      iVar1 = iVar1 + 1;
    }
    else {
      SendMessageW(*(HWND *)(this + 4),0x404,0,param_1[iVar1]);
      iVar1 = iVar1 + 1;
    }
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002586 thunk_FUN_1101f280 thunk -> 1101f280

// ==== 1100258b WWizardPage::WWizardPage

/* public: __thiscall WWizardPage::WWizardPage(class WWizardPage const &) */

WWizardPage * __thiscall WWizardPage::WWizardPage(WWizardPage *this,WWizardPage *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x258b  175  ??0WWizardPage@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11064018;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WDialog::WDialog((WDialog *)this,(WDialog *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002590 thunk_FUN_11031cd0 thunk -> 11031cd0

// ==== 11002595 thunk_FUN_1101f9a0 thunk -> 1101f9a0

// ==== 1100259a FPropertyItem::Advance

/* public: virtual void __thiscall FPropertyItem::Advance(void) */

void __thiscall FPropertyItem::Advance(FPropertyItem *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x259a  403  ?Advance@FPropertyItem@@UAEXXZ */
  puStack_c = &LAB_11060540;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  if (*(int **)(this + 0x50) != (int *)0x0) {
    ExceptionList = &pvStack_10;
    iVar1 = (**(code **)(**(int **)(this + 0x50) + 0xfc))();
    if (-1 < iVar1) {
      iVar1 = **(int **)(this + 0x50);
      iVar2 = (**(code **)(iVar1 + 0xfc))();
      iVar3 = (**(code **)(**(int **)(this + 0x50) + 0xf0))();
      (**(code **)(iVar1 + 0xf8))((iVar2 + 1) % iVar3);
      *(undefined4 *)(this + 0x58) = 1;
    }
  }
  (**(code **)(*(int *)this + 0x9c))();
  (**(code **)(*(int *)this + 0xa0))();
  (**(code **)(*(int *)this + 0x28))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100259f WLog::OnShowWindow

/* public: virtual void __thiscall WLog::OnShowWindow(int) */

void __thiscall WLog::OnShowWindow(WLog *this,int param_1)

{
  WEdit *this_00;
  undefined4 *puVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  TArray<unsigned_short> aTStack_38 [4];
  uint uStack_34;
  WLog *pWStack_24;
  ushort auStack_20 [2];
  int iStack_1c;
  uint uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
                    /* 0x259f  830  ?OnShowWindow@WLog@@UAEXH@Z */
  iVar4 = param_1;
  puStack_c = &LAB_11061ad9;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffbc;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pWStack_24 = this;
  WTerminal::OnShowWindow((WTerminal *)this,param_1);
  if (iVar4 != 0) {
    if (**(int **)(this + 0x2b0) != 0) {
      puVar1 = (undefined4 *)**(int **)(this + 0x2b0);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar4 = **(int **)GFileManager_exref;
      uVar6 = *(undefined4 *)GNull_exref;
      uVar8 = 0;
      puVar2 = FString::operator*((FString *)(this + 0x2b4));
      piVar3 = (int *)(**(code **)(iVar4 + 8))(puVar2,uVar8,uVar6);
      if (piVar3 != (int *)0x0) {
        uStack_18 = 0;
        iVar4 = (**(code **)(*piVar3 + 0x2c))();
        TArray<unsigned_short>::TArray<unsigned_short>(aTStack_38,iVar4);
        uStack_8 = CONCAT31(uStack_8._1_3_,1);
        iVar4 = *piVar3;
        iVar5 = (uStack_34 >> 1) + *(int *)GUnicode_exref * -2;
        puVar2 = TArray<unsigned_short>::operator()(aTStack_38,0);
        (**(code **)(iVar4 + 4))(puVar2,iVar5);
        (**(code **)*piVar3)(1);
        iStack_1c = 0;
        uVar7 = uStack_34;
        while( true ) {
          iVar4 = iStack_1c;
          uVar7 = uVar7 - 1;
          uStack_18 = uVar7;
          if (((int)uVar7 < 1) || (*(int *)(this + 0xa0) <= iStack_1c)) break;
          puVar2 = TArray<unsigned_short>::operator()(aTStack_38,uVar7);
          iStack_1c = iVar4 + (uint)(*puVar2 == 10);
        }
        while (uVar7 = uStack_18, (int)uStack_18 < (int)uStack_34) {
          puVar2 = TArray<unsigned_short>::operator()(aTStack_38,uStack_18);
          if (*puVar2 != 10) break;
          uStack_18 = uVar7 + 1;
        }
        param_1 = 0x3e;
        TArray<unsigned_short>::AddItem(aTStack_38,(ushort *)&param_1);
        auStack_20[0] = 0;
        auStack_20[1] = 0;
        TArray<unsigned_short>::AddItem(aTStack_38,auStack_20);
        iVar4 = *(int *)(this + 0x40);
        puVar2 = TArray<unsigned_short>::operator()(aTStack_38,uVar7);
        (**(code **)(iVar4 + 0x2c))(puVar2);
        uStack_8 = uStack_8 & 0xffffff00;
        TArray<unsigned_short>::~TArray<unsigned_short>(aTStack_38);
        this = pWStack_24;
      }
      iVar4 = **(int **)GFileManager_exref;
      uVar6 = *(undefined4 *)GNull_exref;
      uVar8 = 0x18;
      puVar2 = FString::operator*((FString *)(this + 0x2b4));
      uVar6 = (**(code **)(iVar4 + 0xc))(puVar2,uVar8,uVar6);
      **(undefined4 **)(this + 0x2b0) = uVar6;
    }
    this_00 = (WEdit *)(this + 0x40);
    iVar4 = (**(code **)(*(int *)this_00 + 0x30))();
    WEdit::SetSelection(this_00,iVar4,iVar4);
    WEdit::ScrollCaret(this_00);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110025a9 WWizardDialog::OnDestroy

/* public: virtual void __thiscall WWizardDialog::OnDestroy(void) */

void __thiscall WWizardDialog::OnDestroy(WWizardDialog *this)

{
  int *piVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x25a9  725  ?OnDestroy@WWizardDialog@@UAEXXZ */
  puStack_c = &LAB_11060260;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar2 = 0; iVar2 < *(int *)(this + 0x2f0); iVar2 = iVar2 + 1) {
    piVar1 = *(int **)(*(int *)(this + 0x2ec) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
  }
  WWindow::OnDestroy((WWindow *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110025ae WTreeView::WTreeView

/* public: __thiscall WTreeView::WTreeView(void) */

WTreeView * __thiscall WTreeView::WTreeView(WTreeView *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x25ae  165  ??0WTreeView@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062ca8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined ***)(this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined ***)(this + 0x58) = FDelegate::vftable;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110025b3 WTerminal::OnSetFocus

/* public: virtual void __thiscall WTerminal::OnSetFocus(struct HWND__ *) */

void __thiscall WTerminal::OnSetFocus(WTerminal *this,HWND__ *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x25b3  828  ?OnSetFocus@WTerminal@@UAEXPAUHWND__@@@Z */
  puStack_c = &LAB_11061f10;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  SetFocus(*(HWND *)(this + 0x44));
  ExceptionList = pvStack_10;
  return;
}


// ==== 110025bd WRichEdit::WRichEdit

/* public: __thiscall WRichEdit::WRichEdit(class WWindow *,int,long (__stdcall*)(struct HWND__
   *,unsigned int,unsigned int,long)) */

WRichEdit * __thiscall
WRichEdit::WRichEdit
          (WRichEdit *this,WWindow *param_1,int param_2,
          _func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x25bd  131  ??0WRichEdit@@QAE@PAVWWindow@@HP6GJPAUHWND__@@IIJ@Z@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062ed8;
  pvStack_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = SuperProc;
  }
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,param_1,param_2,param_3);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110025c7 WWindow::OnLeftButtonUp

/* public: virtual void __thiscall WWindow::OnLeftButtonUp(void) */

void __thiscall WWindow::OnLeftButtonUp(WWindow *this)

{
                    /* 0x25c7  778  ?OnLeftButtonUp@WWindow@@UAEXXZ */
  return;
}


// ==== 110025cc FCommandTarget::Unused

/* public: virtual void __thiscall FCommandTarget::Unused(void) */

void __thiscall FCommandTarget::Unused(FCommandTarget *this)

{
                    /* 0x25cc  1015  ?Unused@FCommandTarget@@UAEXXZ */
  return;
}


// ==== 110025d6 WDialog::WDialog

/* public: __thiscall WDialog::WDialog(void) */

WDialog * __thiscall WDialog::WDialog(WDialog *this)

{
  WDialog *pWStack_20;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x25d6  84  ??0WDialog@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063178;
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


// ==== 110025db thunk_FUN_110132b0 thunk -> 110132b0

// ==== 110025e0 WDialog::EndDialog

/* public: void __thiscall WDialog::EndDialog(int) */

void __thiscall WDialog::EndDialog(WDialog *this,int param_1)

{
                    /* 0x25e0  442  ?EndDialog@WDialog@@QAEXH@Z */
  ::EndDialog(*(HWND *)(this + 4),param_1);
  return;
}


// ==== 110025e5 WPropertyPage::GetCaption

/* public: class FString __thiscall WPropertyPage::GetCaption(void) */

FString * __thiscall WPropertyPage::GetCaption(WPropertyPage *this)

{
  FString *in_stack_00000004;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x25e5  485  ?GetCaption@WPropertyPage@@QAE?AVFString@@XZ */
  puStack_c = &LAB_1105f5ba;
  pvStack_10 = ExceptionList;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  FString::FString(in_stack_00000004,(FString *)(this + 0x54));
  ExceptionList = pvStack_10;
  return in_stack_00000004;
}


// ==== 110025ea FHeaderItem::GetHeight

/* public: virtual int __thiscall FHeaderItem::GetHeight(void) */

int __thiscall FHeaderItem::GetHeight(FHeaderItem *this)

{
                    /* 0x25ea  502  ?GetHeight@FHeaderItem@@UAEHXZ */
  return 0x14;
}


// ==== 110025ef WDragInterceptor::WDragInterceptor

/* public: __thiscall WDragInterceptor::WDragInterceptor(class WDragInterceptor const &) */

WDragInterceptor * __thiscall
WDragInterceptor::WDragInterceptor(WDragInterceptor *this,WDragInterceptor *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x25ef  85  ??0WDragInterceptor@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063848;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow::WWindow((WWindow *)this,(WWindow *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110025f4 WTimeScrollBar::OnDestroy

/* public: virtual void __thiscall WTimeScrollBar::OnDestroy(void) */

void __thiscall WTimeScrollBar::OnDestroy(WTimeScrollBar *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x25f4  723  ?OnDestroy@WTimeScrollBar@@UAEXXZ */
  puStack_c = &LAB_110624c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::OnDestroy((WWindow *)this);
  DeleteObject(*(HGDIOBJ *)(this + 0x54));
  DeleteObject(*(HGDIOBJ *)(this + 0x58));
  DeleteObject(*(HGDIOBJ *)(this + 0x5c));
  DeleteObject(*(HGDIOBJ *)(this + 0x60));
  ExceptionList = pvStack_10;
  return;
}


// ==== 110025f9 thunk_FUN_110141b0 thunk -> 110141b0

// ==== 11002603 WThinScrollBar::OnPaint

/* public: virtual void __thiscall WThinScrollBar::OnPaint(void) */

void __thiscall WThinScrollBar::OnPaint(WThinScrollBar *this)

{
  HDC hDC;
  BOOL BVar1;
  HBRUSH__ *hbr;
  tagPAINTSTRUCT tStack_7c;
  RECT RStack_3c;
  tagRECT tStack_2c;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2603  803  ?OnPaint@WThinScrollBar@@UAEXXZ */
  puStack_c = &LAB_11061eb0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffff78;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  hDC = BeginPaint(*(HWND *)(this + 4),&tStack_7c);
  GetClientRect(*(HWND *)(this + 4),&tStack_2c);
  BVar1 = IsWindowEnabled(*(HWND *)(this + 4));
  hbr = hBrushBlack;
  if (BVar1 == 0) {
    hbr = hBrushGrey;
  }
  FillRect(hDC,&tStack_2c,hbr);
  (**(code **)(*(int *)this + 0xe4))(hDC,&tStack_2c,1);
  BVar1 = IsWindowEnabled(*(HWND *)(this + 4));
  if (BVar1 != 0) {
    GetThumbRect(this);
    FillRect(hDC,&RStack_3c,*(HBRUSH *)(this + 0x58));
  }
  EndPaint(*(HWND *)(this + 4),&tStack_7c);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002608 WWizardPage::WWizardPage

/* public: __thiscall WWizardPage::WWizardPage(void) */

WWizardPage * __thiscall WWizardPage::WWizardPage(WWizardPage *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2608  177  ??0WWizardPage@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063fd8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WDialog::WDialog((WDialog *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100260d thunk_FUN_1102eb40 thunk -> 1102eb40

// ==== 11002612 WTerminal::WTerminal

/* public: __thiscall WTerminal::WTerminal(class FName,class WWindow *) */

WTerminal * __thiscall WTerminal::WTerminal(WTerminal *this,undefined4 param_2,undefined4 param_3)

{
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2612  148  ??0WTerminal@@QAE@VFName@@PAVWWindow@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063063;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WTerminalBase::WTerminalBase((WTerminalBase *)this,param_2,param_3);
  pvStack_c = (void *)0x0;
  FOutputDevice::FOutputDevice((FOutputDevice *)(this + 0x3c));
  *(undefined ***)this = vftable_for_WTerminalBase_;
  *(undefined ***)(this + 0x3c) = vftable_for_FOutputDevice_;
  WEditTerminal::WEditTerminal((WEditTerminal *)(this + 0x40),(WTerminalBase *)this);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0x100;
  *(undefined4 *)(this + 0xa4) = 0x40;
  *(undefined4 *)(this + 0x2a8) = 0;
  appStrcpy((ushort *)(this + 0xa8),(ushort *)&DAT_11070f40);
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11002617 FUDNHelpTopic::FUDNHelpTopic

/* public: __thiscall FUDNHelpTopic::FUDNHelpTopic(void) */

FUDNHelpTopic * __thiscall FUDNHelpTopic::FUDNHelpTopic(FUDNHelpTopic *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2617  41  ??0FUDNHelpTopic@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11061c15;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)this);
  uStack_4 = 0;
  FString::FString((FString *)(this + 0xc));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002621 FTreeItem::GetRect

/* public: virtual struct FRect __thiscall FTreeItem::GetRect(void) */

int __thiscall FTreeItem::GetRect(FTreeItem *this)

{
  int in_stack_00000004;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2621  579  ?GetRect@FTreeItem@@UAE?AUFRect@@XZ */
  puStack_c = &LAB_11060300;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WListBox::FindItemChecked((WListBox *)(*(int *)(this + 8) + 0x44),this);
  WListBox::GetItemRect((WListBox *)(*(int *)(this + 8) + 0x44),in_stack_00000004);
  ExceptionList = pvStack_10;
  return in_stack_00000004;
}


// ==== 11002626 WWindow::OnRightButtonDown

/* public: virtual void __thiscall WWindow::OnRightButtonDown(void) */

void __thiscall WWindow::OnRightButtonDown(WWindow *this)

{
                    /* 0x2626  819  ?OnRightButtonDown@WWindow@@UAEXXZ */
  return;
}


// ==== 1100262b FTreeItem::OnItemRightMouseDown

/* public: virtual void __thiscall FTreeItem::OnItemRightMouseDown(struct FPoint) */

void __thiscall FTreeItem::OnItemRightMouseDown(void)

{
                    /* 0x262b  753  ?OnItemRightMouseDown@FTreeItem@@UAEXUFPoint@@@Z */
  return;
}


// ==== 11002630 WListBox::FindItemChecked

/* public: int __thiscall WListBox::FindItemChecked(void const *) */

int __thiscall WListBox::FindItemChecked(WListBox *this,void *param_1)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2630  458  ?FindItemChecked@WListBox@@QAEHPBX@Z */
  puStack_c = &LAB_1105ff00;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    iVar1 = SendMessageA(*(HWND *)(this + 4),399,0xffffffff,(LPARAM)param_1);
  }
  else {
    ExceptionList = &pvStack_10;
    iVar1 = SendMessageW(*(HWND *)(this + 4),399,0xffffffff,(LPARAM)param_1);
  }
  if (iVar1 == -1) {
    appFailAssert(s_Result__LB_ERR_1106a980,s___Controls_cpp_11068b54,0x81d);
  }
  ExceptionList = pvStack_10;
  return iVar1;
}


// ==== 11002635 WRichEdit::StreamTextIn

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall WRichEdit::StreamTextIn(char *,int) */

void __thiscall WRichEdit::StreamTextIn(WRichEdit *this,char *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2635  985  ?StreamTextIn@WRichEdit@@QAEXPADH@Z */
  puStack_c = &LAB_1105f760;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xffffffcc;
  if (25000 < param_2) {
    ExceptionList = &pvStack_10;
    (**(code **)(**(int **)GWarn_exref + 0x10))(u_Loading_text____11069084,1);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  DAT_1109c288 = param_1;
  DAT_1109c284 = param_2;
  _DAT_1109c280 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  puStack_20 = &LAB_11006060;
  if (*(int *)GUnicodeOS_exref == 0) {
    SendMessageA(*(HWND *)(this + 4),0x449,2,(LPARAM)&uStack_28);
  }
  else {
    SendMessageW(*(HWND *)(this + 4),0x449,2,(LPARAM)&uStack_28);
  }
  if (25000 < param_2) {
    (**(code **)(**(int **)GWarn_exref + 0x14))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100263a thunk_FUN_110322e0 thunk -> 110322e0

// ==== 1100263f WProperties::WProperties

/* public: __thiscall WProperties::WProperties(class WProperties const &) */

WProperties * __thiscall WProperties::WProperties(WProperties *this,WProperties *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x263f  119  ??0WProperties@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063ae6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WPropertiesBase::WPropertiesBase((WPropertiesBase *)this,(WPropertiesBase *)param_1);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_WWindow_;
  *(undefined ***)(this + 0x3c) = vftable_for_FControlSnoop_;
  thunk_FUN_1102acd0(this + 0xd4,(int *)(param_1 + 0xd4));
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002644 FObjectConfigItem::GetReadAddress

/* public: virtual unsigned char * __thiscall FObjectConfigItem::GetReadAddress(class FPropertyItem
   *,int) */

uchar * __thiscall
FObjectConfigItem::GetReadAddress(FObjectConfigItem *this,FPropertyItem *param_1,int param_2)

{
  int iVar1;
  uchar *puVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2644  575  ?GetReadAddress@FObjectConfigItem@@UAEPAEPAVFPropertyItem@@H@Z
                        */
  puStack_c = &LAB_11060810;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iVar1 = *(int *)param_1;
  ExceptionList = &pvStack_10;
  puVar2 = TArray<unsigned_char>::operator()
                     ((TArray<unsigned_char> *)(*(int *)(this + 0x60) + 0x4f4),0);
  puVar2 = (uchar *)(**(code **)(iVar1 + 0x60))(puVar2);
  ExceptionList = pvStack_10;
  return puVar2;
}


// ==== 11002649 thunk_FUN_11015ed0 thunk -> 11015ed0

// ==== 1100264e WSplitter::WSplitter

/* public: __thiscall WSplitter::WSplitter(class WWindow *) */

WSplitter * __thiscall WSplitter::WSplitter(WSplitter *this,WWindow *param_1)

{
  void *unaff_ESI;
  WSplitter *pWStack_1c;
  WWindow *pWStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x264e  137  ??0WSplitter@@QAE@PAVWWindow@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110642a8;
  pvStack_c = ExceptionList;
  pWStack_18 = param_1;
  ExceptionList = &pvStack_c;
  pWStack_1c = this;
  FName::FName((FName *)&pWStack_1c,(ushort *)u_WSplitter_1106fe38,1);
  WWindow::WWindow((WWindow *)this);
  *(undefined ***)this = vftable;
  ExceptionList = unaff_ESI;
  return this;
}


// ==== 11002653 WLabel::WLabel

/* public: __thiscall WLabel::WLabel(void) */

WLabel * __thiscall WLabel::WLabel(WLabel *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2653  101  ??0WLabel@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062658;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this);
  *(undefined ***)this = vftable;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002658 FPropertyItem::~FPropertyItem

/* public: virtual __thiscall FPropertyItem::~FPropertyItem(void) */

void __thiscall FPropertyItem::~FPropertyItem(FPropertyItem *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2658  185  ??1FPropertyItem@@UAE@XZ */
  puStack_8 = &LAB_11061534;
  pvStack_c = ExceptionList;
  uStack_4 = 0;
  ExceptionList = &pvStack_c;
  FString::~FString((FString *)(this + 0x74));
  uStack_4 = 0xffffffff;
  FTreeItem::~FTreeItem((FTreeItem *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 1100265d thunk_FUN_11013fd0 thunk -> 11013fd0

// ==== 11002662 WListBox::WListBox

/* public: __thiscall WListBox::WListBox(class WWindow *,int,long (__stdcall*)(struct HWND__
   *,unsigned int,unsigned int,long)) */

WListBox * __thiscall
WListBox::WListBox(WListBox *this,WWindow *param_1,int param_2,
                  _func_long_HWND___ptr_uint_uint_long *param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2662  103  ??0WListBox@@QAE@PAVWWindow@@HP6GJPAUHWND__@@IIJ@Z@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063578;
  pvStack_c = ExceptionList;
  if (param_3 == (_func_long_HWND___ptr_uint_uint_long *)0x0) {
    param_3 = SuperProc;
  }
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this,param_1,param_2,param_3);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined ***)(this + 0x40) = FDelegate::vftable;
  *(undefined ***)(this + 0x4c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined ***)(this + 0x58) = FDelegate::vftable;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined ***)(this + 100) = FDelegate::vftable;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined ***)(this + 0x70) = FDelegate::vftable;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined ***)(this + 0x7c) = FDelegate::vftable;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  if (*(int *)(this + 0x14) == 0) {
    appFailAssert(s_OwnerWindow_1106abb4,s____Inc_Window_h_1106aefc,0x7eb);
  }
  *(undefined4 *)(this + 0x88) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002667 FConfigItem::FConfigItem

/* public: __thiscall FConfigItem::FConfigItem(void) */

FConfigItem * __thiscall FConfigItem::FConfigItem(FConfigItem *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2667  10  ??0FConfigItem@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063e94;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FHeaderItem::FHeaderItem((FHeaderItem *)this);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  FPreferencesInfo::FPreferencesInfo((FPreferencesInfo *)(this + 0x3c));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100266c FConfigItem::FConfigItem

/* public: __thiscall FConfigItem::FConfigItem(class FPreferencesInfo const &,class WPropertiesBase
   *,class FTreeItem *) */

FConfigItem * __thiscall
FConfigItem::FConfigItem
          (FConfigItem *this,FPreferencesInfo *param_1,WPropertiesBase *param_2,FTreeItem *param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x266c  9
                       ??0FConfigItem@@QAE@ABVFPreferencesInfo@@PAVWPropertiesBase@@PAVFTreeItem@@@Z
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110617b4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FHeaderItem::FHeaderItem((FHeaderItem *)this,param_2,param_3,1);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  FPreferencesInfo::FPreferencesInfo((FPreferencesInfo *)(this + 0x3c),param_1);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002671 WTerminal::WTerminal

/* public: __thiscall WTerminal::WTerminal(class WTerminal const &) */

WTerminal * __thiscall WTerminal::WTerminal(WTerminal *this,WTerminal *param_1)

{
  FOutputDevice *pFVar1;
  int iVar2;
  WTerminal *pWVar3;
  WTerminal *pWVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2671  147  ??0WTerminal@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063093;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WTerminalBase::WTerminalBase((WTerminalBase *)this,(WTerminalBase *)param_1);
  pFVar1 = (FOutputDevice *)0x0;
  uStack_4 = 0;
  if (param_1 != (WTerminal *)0x0) {
    pFVar1 = (FOutputDevice *)(param_1 + 0x3c);
  }
  FOutputDevice::FOutputDevice((FOutputDevice *)(this + 0x3c),pFVar1);
  *(undefined ***)this = vftable_for_WTerminalBase_;
  *(undefined ***)(this + 0x3c) = vftable_for_FOutputDevice_;
  WEditTerminal::WEditTerminal((WEditTerminal *)(this + 0x40),(WEditTerminal *)(param_1 + 0x40));
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  pWVar3 = param_1 + 0xa8;
  pWVar4 = this + 0xa8;
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pWVar4 = *(undefined4 *)pWVar3;
    pWVar3 = pWVar3 + 4;
    pWVar4 = pWVar4 + 4;
  }
  *(undefined4 *)(this + 0x2a8) = *(undefined4 *)(param_1 + 0x2a8);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002676 WTreeView::OpenWindow

/* public: void __thiscall WTreeView::OpenWindow(int,int,int,int,int,unsigned long) */

void __thiscall
WTreeView::OpenWindow
          (WTreeView *this,int param_1,int param_2,int param_3,int param_4,int param_5,ulong param_6
          )

{
  HWND hWnd;
  HGDIOBJ pvVar1;
  LPARAM lParam;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2676  881  ?OpenWindow@WTreeView@@QAEXHHHHHK@Z */
  puStack_c = &LAB_1105fac0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::PerformCreateWindowEx
            ((WWindow *)this,0x200,(ushort *)0x0,param_6 | 0x40000037,param_2,param_3,param_4,
             param_5,*(HWND__ **)(*(int *)(this + 0x14) + 4),
             (HMENU__ *)(uint)*(ushort *)(this + 0xc),DAT_1109c35c);
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
  if (param_1 != 0) {
    ShowWindow(*(HWND *)(this + 4),4);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100267b FPropertyItemBase::FPropertyItemBase

/* public: __thiscall FPropertyItemBase::FPropertyItemBase(void) */

FPropertyItemBase * __thiscall FPropertyItemBase::FPropertyItemBase(FPropertyItemBase *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x267b  33  ??0FPropertyItemBase@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11063b14;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FHeaderItem::FHeaderItem((FHeaderItem *)this);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  FString::FString((FString *)(this + 0x3c));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002680 FControlSnoop::SnoopLeftMouseDown

/* public: virtual void __thiscall FControlSnoop::SnoopLeftMouseDown(class WWindow *,struct FPoint)
    */

void __thiscall FControlSnoop::SnoopLeftMouseDown(void)

{
                    /* 0x2680  979  ?SnoopLeftMouseDown@FControlSnoop@@UAEXPAVWWindow@@UFPoint@@@Z
                        */
  return;
}


// ==== 1100268f FNewObjectItem::ComboSelectionEndOk

/* public: void __thiscall FNewObjectItem::ComboSelectionEndOk(void) */

void __thiscall FNewObjectItem::ComboSelectionEndOk(FNewObjectItem *this)

{
  int iVar1;
  undefined4 uVar2;
  FString *pFVar3;
  FString aFStack_28 [20];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
                    /* 0x268f  425  ?ComboSelectionEndOk@FNewObjectItem@@QAEXXZ */
  puStack_c = &LAB_110605f9;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffcc;
  iStack_8 = 0;
  iVar1 = **(int **)(this + 0x40);
  ExceptionList = &pvStack_10;
  uVar2 = (**(code **)(**(int **)(this + 0x40) + 0xfc))();
  pFVar3 = (FString *)(**(code **)(iVar1 + 0xec))(aFStack_28,uVar2);
  iStack_8._0_1_ = 1;
  FString::operator=((FString *)(this + 0x48),pFVar3);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  FString::~FString(aFStack_28);
  FString::operator=((FString *)&DAT_1109c32c,(FString *)(this + 0x48));
  (**(code **)(*(int *)this + 0x28))();
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002694 FNewObjectItem::FNewObjectItem

/* public: __thiscall FNewObjectItem::FNewObjectItem(void) */

FNewObjectItem * __thiscall FNewObjectItem::FNewObjectItem(FNewObjectItem *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x2694  23  ??0FNewObjectItem@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110639b4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FHeaderItem::FHeaderItem((FHeaderItem *)this);
  uStack_4 = 0;
  *(undefined ***)this = vftable_for_FCommandTarget_;
  *(undefined ***)(this + 4) = vftable_for_FControlSnoop_;
  FString::FString((FString *)(this + 0x48));
  ExceptionList = pvStack_c;
  return this;
}


// ==== 1100269e thunk_FUN_11006c00 thunk -> 11006c00

// ==== 110026a3 WLog::GetPackageName

/* public: virtual unsigned short const * __thiscall WLog::GetPackageName(void) */

ushort * __thiscall WLog::GetPackageName(WLog *this)

{
                    /* 0x26a3  542  ?GetPackageName@WLog@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 110026ad WTerminal::TypeChar

/* public: virtual void __thiscall WTerminal::TypeChar(unsigned short) */

void __thiscall WTerminal::TypeChar(WTerminal *this,ushort param_1)

{
  WTerminal *pWVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  ushort auStack_220 [262];
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x26ad  1014  ?TypeChar@WTerminal@@UAEXG@Z */
  puStack_c = &LAB_110622a0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffdd4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  SelectTyping(this);
  pWVar1 = this + 0xa8;
  uVar2 = appStrlen((ushort *)pWVar1);
  if (param_1 < 0x20) {
    if (param_1 == 0xd) {
      if (1 < (int)uVar2) {
        UpdateTyping(this);
        WEdit::SetSelectedText((WEdit *)(this + 0x40),(ushort *)&DAT_11070f44);
        appStrcpy(auStack_220,(ushort *)(this + 0xaa));
        appStrcpy((ushort *)pWVar1,(ushort *)&DAT_11070f40);
        if (*(int *)(this + 0x9c) != 0) {
          iVar3 = (**(code **)**(undefined4 **)(this + 0x9c))(auStack_220,*(undefined4 *)GLog_exref)
          ;
          if (iVar3 == 0) {
            puVar4 = LocalizeError(&DAT_11070f38,(ushort *)u_Core_1106d374,(ushort *)0x0);
            FOutputDevice::Log((FOutputDevice *)(this + 0x3c),puVar4);
          }
        }
        SelectTyping(this);
      }
    }
    else if (((param_1 == 8) || (param_1 == 0x7f)) && (1 < (int)uVar2)) {
      *(undefined2 *)(this + uVar2 * 2 + 0xa6) = 0;
    }
    else if (param_1 == 0x1b) {
      appStrcpy((ushort *)pWVar1,(ushort *)&DAT_11070f40);
    }
  }
  else if (uVar2 < 0xff) {
    *(ushort *)(this + uVar2 * 2 + 0xa8) = param_1;
    *(undefined2 *)(this + uVar2 * 2 + 0xaa) = 0;
  }
  UpdateTyping(this);
  if (param_1 == 0x16) {
    (**(code **)(*(int *)this + 0xec))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110026b2 WTerminalBase::GetPackageName

/* public: virtual unsigned short const * __thiscall WTerminalBase::GetPackageName(void) */

ushort * __thiscall WTerminalBase::GetPackageName(WTerminalBase *this)

{
                    /* 0x26b2  556  ?GetPackageName@WTerminalBase@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 110026b7 WControl::WControl

/* public: __thiscall WControl::WControl(class WControl const &) */

WControl * __thiscall WControl::WControl(WControl *this,WControl *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x26b7  70  ??0WControl@@QAE@ABV0@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_110625f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow::WWindow((WWindow *)this,(WWindow *)param_1);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 110026bc WDialog::OpenChildWindow

/* public: void __thiscall WDialog::OpenChildWindow(int,int) */

void __thiscall WDialog::OpenChildWindow(WDialog *this,int param_1,int param_2)

{
  undefined1 *puVar1;
  HWND pHVar2;
  WDialog *pWStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x26bc  849  ?OpenChildWindow@WDialog@@QAEXHH@Z */
  puStack_c = &LAB_110622d0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffd4;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xffffffd4;
  if (*(int *)(this + 4) != 0) {
    ExceptionList = &pvStack_10;
    appFailAssert(s__hWnd_11070fdc,s___Window_cpp_1106f624,0x82d);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  pWStack_18 = this;
  thunk_FUN_1101bea0(&WWindow::_Windows,&pWStack_18);
  if (param_1 == 0) {
    if (*(int *)(this + 0x14) == 0) {
      pHVar2 = (HWND)0x0;
    }
    else {
      pHVar2 = *(HWND *)(*(int *)(this + 0x14) + 4);
    }
  }
  else {
    pHVar2 = GetDlgItem(*(HWND *)(*(int *)(this + 0x14) + 4),param_1);
  }
  if (*(int *)GUnicodeOS_exref == 0) {
    pHVar2 = CreateDialogParamA(hInstanceWindow,(LPCSTR)(uint)*(ushort *)(this + 0xc),pHVar2,
                                WWindow::StaticWndProc,(LPARAM)this);
  }
  else {
    pHVar2 = CreateDialogParamW(hInstanceWindow,(LPCWSTR)(uint)*(ushort *)(this + 0xc),pHVar2,
                                WWindow::StaticWndProc,(LPARAM)this);
  }
  if (pHVar2 == (HWND)0x0) {
    appFailAssert(s_hWndCreated_11070c78,s___Window_cpp_1106f624,0x831);
  }
  if (pHVar2 != *(HWND *)(this + 4)) {
    appFailAssert(s_hWndCreated__hWnd_11070c60,s___Window_cpp_1106f624,0x832);
  }
  (**(code **)(*(int *)this + 8))(param_2);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110026c1 WWizardPage::OnCurrent

/* public: virtual void __thiscall WWizardPage::OnCurrent(void) */

void __thiscall WWizardPage::OnCurrent(WWizardPage *this)

{
                    /* 0x26c1  713  ?OnCurrent@WWizardPage@@UAEXXZ */
  return;
}


// ==== 110026c6 WLabel::GetPackageName

/* public: virtual unsigned short const * __thiscall WLabel::GetPackageName(void) */

ushort * __thiscall WLabel::GetPackageName(WLabel *this)

{
                    /* 0x26c6  539  ?GetPackageName@WLabel@@UAEPBGXZ */
  return (ushort *)u_Window_1106949c;
}


// ==== 110026d0 WTerminalBase::WTerminalBase

/* public: __thiscall WTerminalBase::WTerminalBase(void) */

WTerminalBase * __thiscall WTerminalBase::WTerminalBase(WTerminalBase *this)

{
  WTerminalBase *pWStack_20;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x26d0  152  ??0WTerminalBase@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_11062f38;
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


// ==== 110026d5 WTimeScrollBar::GetWindowClassName

/* public: virtual void __thiscall WTimeScrollBar::GetWindowClassName(unsigned short *) */

void __thiscall WTimeScrollBar::GetWindowClassName(WTimeScrollBar *this,ushort *param_1)

{
                    /* 0x26d5  635  ?GetWindowClassName@WTimeScrollBar@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WTimeScrollBar_1106fb34);
  return;
}


// ==== 110026df WDialog::OnInitDialog

/* public: virtual void __thiscall WDialog::OnInitDialog(void) */

void __thiscall WDialog::OnInitDialog(WDialog *this)

{
  int iVar1;
  HGDIOBJ pvVar2;
  HWND pHVar3;
  LONG LVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int iVar7;
  LPARAM lParam;
  ushort auStack_22c [260];
  int iStack_24;
  int iStack_20;
  int iStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x26df  741  ?OnInitDialog@WDialog@@UAEXXZ */
  puStack_c = &LAB_110622e0;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xfffffdc8;
  iVar7 = 0;
  uStack_8 = 0;
  lParam = 1;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    pvVar2 = GetStockObject(0x11);
    SendMessageA(*(HWND *)(this + 4),0x30,(WPARAM)pvVar2,lParam);
  }
  else {
    ExceptionList = &pvStack_10;
    puStack_14 = &stack0xfffffdc8;
    pvVar2 = GetStockObject(0x11);
    SendMessageW(*(HWND *)(this + 4),0x30,(WPARAM)pvVar2,lParam);
  }
  while (iStack_20 = iVar7, iVar7 < *(int *)(this + 0x24)) {
    iVar1 = *(int *)(*(int *)(this + 0x20) + iVar7 * 4);
    if (*(int *)(iVar1 + 4) != 0) {
      appFailAssert(s__Control_>hWnd_11071044,s___Window_cpp_1106f624,0x86a);
    }
    pHVar3 = GetDlgItem(*(HWND *)(this + 4),(uint)*(ushort *)(iVar1 + 0xc));
    *(HWND *)(iVar1 + 4) = pHVar3;
    if (pHVar3 == (HWND)0x0) {
      appFailAssert(s_Control_>hWnd_11071034,s___Window_cpp_1106f624,0x86c);
    }
    iStack_24 = iVar1;
    thunk_FUN_1101bea0(&WWindow::_Windows,&iStack_24);
    if (*(int *)GUnicodeOS_exref == 0) {
      LVar4 = GetWindowLongA(*(HWND *)(iVar1 + 4),-4);
    }
    else {
      LVar4 = GetWindowLongW(*(HWND *)(iVar1 + 4),-4);
    }
    *(LONG *)(iVar1 + 0x3c) = LVar4;
    if (*(int *)GUnicodeOS_exref == 0) {
      SetWindowLongA(*(HWND *)(iVar1 + 4),-4,0x110011a9);
      iVar7 = iVar7 + 1;
    }
    else {
      SetWindowLongW(*(HWND *)(iVar1 + 4),-4,0x110011a9);
      iVar7 = iVar7 + 1;
    }
  }
  for (iVar7 = 0; iStack_18 = iVar7, iVar7 < *(int *)(this + 0x24); iVar7 = iVar7 + 1) {
    (**(code **)(**(int **)(*(int *)(this + 0x20) + iVar7 * 4) + 0x88))();
  }
  puVar5 = FName::operator*((FName *)(this + 8));
  appSprintf(auStack_22c,(ushort *)u_IDDIALOG__s_11071018,puVar5);
  iVar7 = *(int *)this;
  uVar6 = (**(code **)(iVar7 + 0x10))();
  (**(code **)(iVar7 + 0xec))(auStack_22c,uVar6);
  ExceptionList = pvStack_10;
  return;
}


// ==== 110026e9 WWindow::operator=

/* public: class WWindow & __thiscall WWindow::operator=(class WWindow const &) */

WWindow * __thiscall WWindow::operator=(WWindow *this,WWindow *param_1)

{
                    /* 0x26e9  302  ??4WWindow@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined2 *)(this + 0xc) = *(undefined2 *)(param_1 + 0xc);
  *(undefined2 *)(this + 0xe) = *(undefined2 *)(param_1 + 0xe);
  *(uint *)(this + 0x10) =
       *(uint *)(this + 0x10) ^ (*(uint *)(this + 0x10) ^ *(uint *)(param_1 + 0x10)) & 1;
  *(uint *)(this + 0x10) =
       (*(uint *)(param_1 + 0x10) ^ *(uint *)(this + 0x10)) & 2 ^ *(uint *)(this + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  thunk_FUN_1102e6d0(this + 0x20,(FArray *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return this;
}


// ==== 110026ee WProperties::OnSize

/* public: virtual void __thiscall WProperties::OnSize(unsigned long,int,int) */

void __thiscall WProperties::OnSize(WProperties *this,ulong param_1,int param_2,int param_3)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x26ee  834  ?OnSize@WProperties@@UAEXKHH@Z */
  puStack_c = &LAB_11060f50;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WWindow::OnSize((WWindow *)this,param_1,param_2,param_3);
  if (*(int *)(this + 0x48) != 0) {
    (**(code **)(*(int *)this + 0xf4))(0);
    InvalidateRect(*(HWND *)(this + 0x48),(RECT *)0x0,0);
    (**(code **)(*(int *)this + 0xf0))();
    (**(code **)(*(int *)this + 0xf4))(1);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110026f8 FObjectsItem::NotifyChange

/* public: virtual void __thiscall FObjectsItem::NotifyChange(void) */

void __thiscall FObjectsItem::NotifyChange(FObjectsItem *this)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x26f8  680  ?NotifyChange@FObjectsItem@@UAEXXZ */
  puStack_c = &LAB_11061000;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x5c); iVar1 = iVar1 + 1) {
    (**(code **)(**(int **)(*(int *)(this + 0x58) + iVar1 * 4) + 0x44))();
  }
  if (*(int *)(this + 0x54) != 0) {
    (**(code **)(**(int **)(this + 0xc) + 0x6c))();
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 110026fd WPropertySheet::WPropertySheet

/* public: __thiscall WPropertySheet::WPropertySheet(void) */

WPropertySheet * __thiscall WPropertySheet::WPropertySheet(WPropertySheet *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x26fd  129  ??0WPropertySheet@@QAE@XZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1106275c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WControl::WControl((WControl *)this);
  uStack_4 = 0;
  *(undefined ***)this = vftable;
  FArray::FArray((FArray *)(this + 0x44));
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  ExceptionList = pvStack_c;
  return this;
}


// ==== 11002702 WEdit::GrabChar

/* public: class FString __thiscall WEdit::GrabChar(class FString *) */

FString * __thiscall WEdit::GrabChar(WEdit *this,FString *param_1)

{
  int iVar1;
  FString *pFVar2;
  FString *in_stack_00000008;
  FString aFStack_38 [12];
  FString aFStack_2c [20];
  undefined4 uStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2702  647  ?GrabChar@WEdit@@QAE?AVFString@@PAV2@@Z */
  puStack_c = &LAB_110609dc;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffbc;
  uStack_18 = 0;
  uStack_8 = 1;
  ExceptionList = &pvStack_10;
  FString::FString(param_1);
  uStack_18 = 1;
  iVar1 = FString::Len(in_stack_00000008);
  if (iVar1 == 0) {
    FString::operator=(param_1,(ushort *)&DAT_11068ff8);
  }
  else {
    do {
      pFVar2 = (FString *)FString::Left(in_stack_00000008,(int)aFStack_2c);
      uStack_8._0_1_ = 2;
      FString::operator=(param_1,pFVar2);
      uStack_8._0_1_ = 1;
      FString::~FString(aFStack_2c);
      pFVar2 = (FString *)FString::Mid(in_stack_00000008,(int)aFStack_38,1);
      uStack_8._0_1_ = 3;
      FString::operator=(in_stack_00000008,pFVar2);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      FString::~FString(aFStack_38);
      iVar1 = FString::operator==(param_1,(ushort *)&DAT_1106c3a8);
    } while (iVar1 != 0);
  }
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 11002707 WSplitter::OnMouseMove

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall WSplitter::OnMouseMove(unsigned long,struct FPoint) */

void __thiscall WSplitter::OnMouseMove(WSplitter *this)

{
  float fVar1;
  HWND pHVar2;
  int *piVar3;
  float10 fVar4;
  int iStack_34;
  int iStack_30;
  tagPOINT atStack_2c [2];
  FPoint aFStack_1c [4];
  float fStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2707  789  ?OnMouseMove@WSplitter@@UAEXKUFPoint@@@Z */
  puStack_c = &LAB_11062590;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffb8;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  pHVar2 = GetCapture();
  if (pHVar2 == *(HWND *)(this + 4)) {
    WWindow::GetClientRect(*(WWindow **)(this + 0x14));
    GetCursorPos(atStack_2c);
    piVar3 = (int *)WWindow::ScreenToClient(*(WWindow **)(this + 0x14),aFStack_1c);
    atStack_2c[0].x = *piVar3;
    atStack_2c[0].y = piVar3[1];
    if (*(int *)(this + 0x3c) == 0) {
      fStack_18 = (float)(iStack_30 + -6);
      fVar1 = (float)atStack_2c[0].y / (float)(int)fStack_18;
    }
    else {
      fStack_18 = (float)(iStack_34 + -6);
      fVar1 = (float)atStack_2c[0].x / (float)(int)fStack_18;
    }
    *(float *)(this + 0x40) = fVar1 * (float)_DAT_1106f610;
    fVar4 = thunk_FUN_11026290(*(float *)(this + 0x40),0.0);
    fStack_18 = (float)fVar4;
    *(float *)(this + 0x40) = fStack_18;
    fVar4 = thunk_FUN_110262c0(fStack_18,_DAT_11070308);
    *(float *)(this + 0x40) = (float)fVar4;
    PositionSplitter(this);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100270c WTerminal::SetExec

/* public: void __thiscall WTerminal::SetExec(class FExec *) */

void __thiscall WTerminal::SetExec(WTerminal *this,FExec *param_1)

{
                    /* 0x270c  927  ?SetExec@WTerminal@@QAEXPAVFExec@@@Z */
  *(FExec **)(this + 0x9c) = param_1;
  return;
}


// ==== 11002711 WTerminal::UpdateTyping

/* public: void __thiscall WTerminal::UpdateTyping(void) */

void __thiscall WTerminal::UpdateTyping(WTerminal *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2711  1016  ?UpdateTyping@WTerminal@@QAEXXZ */
  puStack_c = &LAB_11061ac0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  WEdit::SetSelectedText((WEdit *)(this + 0x40),(ushort *)(this + 0xa8));
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002716 FPropertyItem::Expand

/* public: virtual void __thiscall FPropertyItem::Expand(void) */

void __thiscall FPropertyItem::Expand(FPropertyItem *this)

{
  FPropertyItem *pFVar1;
  UObject *pUVar2;
  undefined4 *puVar3;
  int *piVar4;
  FObjectsItem *this_00;
  ushort *puVar5;
  FNewObjectItem *this_01;
  int iVar6;
  int iVar7;
  int **ppiVar8;
  int iStack_44;
  UObject *pUStack_40;
  int *piStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  UObject *pUStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2716  453  ?Expand@FPropertyItem@@UAEXXZ */
  puStack_c = &LAB_11061990;
  pvStack_10 = ExceptionList;
  puStack_14 = &stack0xffffffb0;
  uStack_8 = 0;
  if ((*(int *)(*(UObject **)(this + 0x3c) + 0x40) < 2) || (*(int *)(this + 0x44) != -1)) {
    ExceptionList = &pvStack_10;
    pUVar2 = thunk_FUN_11015ea0(*(UObject **)(this + 0x3c));
    if (pUVar2 == (UObject *)0x0) {
      pUVar2 = thunk_FUN_11015e70(*(UObject **)(this + 0x3c));
      if (pUVar2 == (UObject *)0x0) {
        pUVar2 = thunk_FUN_11015e40(*(UObject **)(this + 0x3c));
        if (pUVar2 != (UObject *)0x0) {
          piVar4 = (int *)(**(code **)(*(int *)this + 0x68))(this,0);
          pUStack_18 = (UObject *)*piVar4;
          if (pUStack_18 == (UObject *)0x0) {
            this_01 = (FNewObjectItem *)thunk_FUN_110115b0(0x54,u_FNewObjectItem_1106f330);
            if (this_01 == (FNewObjectItem *)0x0) {
              piStack_34 = (int *)0x0;
            }
            else {
              piStack_34 = (int *)FNewObjectItem::FNewObjectItem
                                            (this_01,*(WPropertiesBase **)(this + 8),
                                             (FTreeItem *)this,(UObjectProperty *)pUVar2);
            }
            ppiVar8 = &piStack_34;
          }
          else {
            this_00 = (FObjectsItem *)thunk_FUN_110115b0(100,u_FObjectsItem_1106f354);
            if (this_00 == (FObjectsItem *)0x0) {
              piStack_30 = (int *)0x0;
            }
            else {
              iVar6 = *(int *)(this + 100);
              iVar7 = 1;
              puVar5 = UObject::GetFullName(pUStack_18,(ushort *)0x0);
              piStack_30 = (int *)FObjectsItem::FObjectsItem
                                            (this_00,*(WPropertiesBase **)(this + 8),
                                             (FTreeItem *)this,1,puVar5,iVar7,iVar6);
            }
            (**(code **)(*piStack_30 + 0x98))(&pUStack_18,1);
            ppiVar8 = &piStack_30;
          }
          thunk_FUN_1101bf00(this + 0x30,ppiVar8);
        }
      }
      else {
        thunk_FUN_1101c650(&iStack_44,*(int *)(pUVar2 + 0x78));
        while (pUVar2 = pUStack_40, pUStack_40 != (UObject *)0x0) {
          iVar6 = (**(code **)(*(int *)this + 0x78))(*(undefined4 *)(pUStack_40 + 0x48));
          if (iVar6 != 0) {
            pFVar1 = (FPropertyItem *)thunk_FUN_110115b0(0x80,u_FPropertyItem_1106f11c);
            if (pFVar1 == (FPropertyItem *)0x0) {
              uStack_2c = 0;
            }
            else {
              puVar3 = (undefined4 *)UObject::GetFName(pUVar2);
              uStack_2c = FPropertyItem(pFVar1,*(undefined4 *)(this + 8),this,pUVar2,*puVar3,
                                        *(undefined4 *)(pUVar2 + 0x54),0xffffffff,0x29a);
            }
            thunk_FUN_1101bf00(this + 0x30,&uStack_2c);
          }
          pUStack_40 = *(UObject **)(pUVar2 + 0x38);
          thunk_FUN_11015cb0(&iStack_44);
        }
      }
    }
    else {
      *(undefined4 *)(this + 0x18) = 0;
      iStack_1c = (**(code **)(*(int *)this + 0x68))(this,0);
      if (iStack_1c != 0) {
        iStack_28 = 0;
        while (iVar6 = iStack_28, iStack_28 < *(int *)(iStack_1c + 4)) {
          pFVar1 = (FPropertyItem *)thunk_FUN_110115b0(0x80,u_FPropertyItem_1106f11c);
          if (pFVar1 == (FPropertyItem *)0x0) {
            uStack_24 = 0;
          }
          else {
            uStack_24 = FPropertyItem(pFVar1,*(undefined4 *)(this + 8),this,*(int *)(pUVar2 + 0x78),
                                      *(undefined4 *)(this + 0x70),
                                      *(int *)(*(int *)(pUVar2 + 0x78) + 0x44) * iVar6,iVar6,0x29a);
          }
          thunk_FUN_1101bf00(this + 0x30,&uStack_24);
          iStack_28 = iVar6 + 1;
        }
      }
    }
  }
  else {
    ExceptionList = &pvStack_10;
    *(undefined4 *)(this + 0x18) = 0;
    puStack_14 = &stack0xffffffb0;
    for (iVar6 = 0; iStack_20 = iVar6, iVar6 < *(int *)(*(int *)(this + 0x3c) + 0x40);
        iVar6 = iVar6 + 1) {
      pFVar1 = (FPropertyItem *)thunk_FUN_110115b0(0x80,u_FPropertyItem_1106f11c);
      if (pFVar1 == (FPropertyItem *)0x0) {
        iStack_1c = 0;
      }
      else {
        iStack_1c = FPropertyItem(pFVar1,*(undefined4 *)(this + 8),this,*(int *)(this + 0x3c),
                                  *(undefined4 *)(this + 0x70),
                                  *(int *)(*(int *)(this + 0x3c) + 0x44) * iVar6,iVar6,0x29a);
      }
      thunk_FUN_1101bf00(this + 0x30,&iStack_1c);
    }
  }
  FTreeItem::Expand((FTreeItem *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100271b FNewObjectItem::ComboSelectionEndCancel

/* public: void __thiscall FNewObjectItem::ComboSelectionEndCancel(void) */

void __thiscall FNewObjectItem::ComboSelectionEndCancel(FNewObjectItem *this)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x271b  423  ?ComboSelectionEndCancel@FNewObjectItem@@QAEXXZ */
  puStack_c = &LAB_110605e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  iVar1 = **(int **)(this + 0x40);
  ExceptionList = &pvStack_10;
  puVar2 = FString::operator*((FString *)(this + 0x48));
  uVar3 = (**(code **)(iVar1 + 0x100))(puVar2);
  (**(code **)(**(int **)(this + 0x40) + 0xf8))(((int)uVar3 < 0) - 1 & uVar3);
  ExceptionList = pvStack_10;
  return;
}


// ==== 11002725 thunk_FUN_110158f0 thunk -> 110158f0

// ==== 1100272a WComboBox::WndProc

/* public: virtual long __thiscall WComboBox::WndProc(unsigned int,unsigned int,long) */

long __thiscall WComboBox::WndProc(WComboBox *this,uint param_1,uint param_2,long param_3)

{
  long lVar1;
  
                    /* 0x272a  1022  ?WndProc@WComboBox@@UAEJIIJ@Z */
  if ((param_1 == 0x100) && ((param_2 == 0x26 || (param_2 == 0x28)))) {
    if (*(int *)(this + 0x1c) != 0) {
      (**(code **)(**(int **)(this + 0x1c) + 4))(this,param_2);
    }
    return 1;
  }
  lVar1 = WWindow::WndProc((WWindow *)this,param_1,param_2,param_3);
  return lVar1;
}


// ==== 1100272f WSplitterContainer::operator=

/* public: class WSplitterContainer & __thiscall WSplitterContainer::operator=(class
   WSplitterContainer const &) */

WSplitterContainer * __thiscall
WSplitterContainer::operator=(WSplitterContainer *this,WSplitterContainer *param_1)

{
                    /* 0x272f  290  ??4WSplitterContainer@@QAEAAV0@ABV0@@Z */
  WWindow::operator=((WWindow *)this,(WWindow *)param_1);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return this;
}


// ==== 11002734 FCommandTarget::operator=

/* public: class FCommandTarget & __thiscall FCommandTarget::operator=(class FCommandTarget const &)
    */

FCommandTarget * __thiscall FCommandTarget::operator=(FCommandTarget *this,FCommandTarget *param_1)

{
                    /* 0x2734  241  ??4FCommandTarget@@QAEAAV0@ABV0@@Z */
  return this;
}


// ==== 11002739 WUDNWindow::Release

/* public: void __thiscall WUDNWindow::Release(void) */

void __thiscall WUDNWindow::Release(WUDNWindow *this)

{
                    /* 0x2739  897  ?Release@WUDNWindow@@QAEXXZ */
  ReleaseCapture();
  (**(code **)(*(int *)this + 8))(0);
  return;
}


// ==== 1100273e WEdit::Val

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: float __thiscall WEdit::Val(class FString) */

float __thiscall WEdit::Val(void)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  float fStack_20;
  FString aFStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x273e  1018  ?Val@WEdit@@QAEMVFString@@@Z */
  puStack_8 = &LAB_11060962;
  pvStack_c = ExceptionList;
  iVar3 = 0;
  uStack_4 = 0;
  fStack_20 = 0.0;
  ExceptionList = &pvStack_c;
  iVar1 = FString::Len((FString *)&stack0x00000004);
  if (0 < iVar1) {
    do {
      FString::Mid((FString *)&stack0x00000004,(int)aFStack_18,iVar3);
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      iVar1 = FString::operator>=(aFStack_18,(ushort *)&DAT_1106c3c0);
      if ((iVar1 == 0) ||
         (iVar1 = FString::operator<=(aFStack_18,(ushort *)&DAT_1106c3bc), iVar1 == 0)) {
        iVar1 = FString::operator!=(aFStack_18,(ushort *)&DAT_1106c3a8);
        if (iVar1 != 0) {
          uStack_4 = uStack_4 & 0xffffff00;
          FString::~FString(aFStack_18);
          break;
        }
      }
      else {
        puVar2 = FString::operator*(aFStack_18);
        iVar1 = appAtoi(puVar2);
        fStack_20 = (float)iVar1 + fStack_20 * (float)_DAT_1106c3b0;
      }
      uStack_4 = uStack_4 & 0xffffff00;
      FString::~FString(aFStack_18);
      iVar3 = iVar3 + 1;
      iVar1 = FString::Len((FString *)&stack0x00000004);
    } while (iVar3 < iVar1);
  }
  uStack_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = pvStack_c;
  return fStack_20;
}


// ==== 11002743 WCheckListBox::GetWindowClassName

/* public: virtual void __thiscall WCheckListBox::GetWindowClassName(unsigned short *) */

void __thiscall WCheckListBox::GetWindowClassName(WCheckListBox *this,ushort *param_1)

{
                    /* 0x2743  603  ?GetWindowClassName@WCheckListBox@@UAEXPAG@Z */
  thunk_FUN_11006cf0(param_1,u_WCheckListBox_1106fce4);
  return;
}


// ==== 11002748 WListBox::SetItemData

/* public: void __thiscall WListBox::SetItemData(int,int) */

void __thiscall WListBox::SetItemData(WListBox *this,int param_1,int param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2748  931  ?SetItemData@WListBox@@QAEXHH@Z */
  puStack_c = &LAB_1105fd80;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  if (*(int *)GUnicodeOS_exref == 0) {
    ExceptionList = &pvStack_10;
    SendMessageA(*(HWND *)(this + 4),0x19a,param_1,param_2);
  }
  else {
    ExceptionList = &pvStack_10;
    SendMessageW(*(HWND *)(this + 4),0x19a,param_1,param_2);
  }
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100274d _DllMain@12 thunk -> 11022be0

// ==== 11002757 FNewObjectItem::Draw

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* public: virtual void __thiscall FNewObjectItem::Draw(struct HDC__ *) */

void __thiscall FNewObjectItem::Draw(FNewObjectItem *this,HDC__ *param_1)

{
  HDC__ *hdc;
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
  WCHAR aWStack_20b0 [4098];
  int aiStack_ac [6];
  undefined4 uStack_94;
  undefined4 uStack_90;
  int aiStack_8c [4];
  undefined1 *puStack_7c;
  void *pvStack_78;
  undefined1 *puStack_74;
  undefined4 uStack_70;
  int aiStack_6c [9];
  int aiStack_48 [4];
  RECT *pRStack_38;
  int iStack_34;
  LONG LStack_30;
  int iStack_2c;
  LONG LStack_28;
  int iStack_24;
  LONG LStack_20;
  int iStack_1c;
  LONG LStack_18;
  RECT RStack_14;
  
                    /* 0x2757  432  ?Draw@FNewObjectItem@@UAEXPAUHDC__@@@Z */
  hdc = param_1;
  puStack_74 = &LAB_11060f20;
  pvStack_78 = ExceptionList;
  aiStack_8c[3] = 0x11019db8;
  puStack_7c = &stack0xffffdf44;
  uStack_70 = 0;
  ExceptionList = &pvStack_78;
  (**(code **)(*(int *)this + 0x24))();
  FillRect(param_1,&RStack_14,hBrushGrey160);
  iStack_34 = RStack_14.left;
  LStack_30 = RStack_14.top;
  iStack_2c = RStack_14.right;
  LStack_28 = RStack_14.bottom;
  iStack_2c = (**(code **)(**(int **)(this + 8) + 0xec))();
  aiStack_ac[5] = (**(code **)(*(int *)this + 0x48))();
  aiStack_ac[5] = 1 - aiStack_ac[5];
  aiStack_ac[4] = 0;
  uStack_94 = 0xffffffff;
  uStack_90 = 0;
  pRStack_38 = (RECT *)thunk_FUN_110143f0(&iStack_34,aiStack_48,aiStack_ac + 4);
  iVar2 = *(int *)this;
  (**(code **)(iVar2 + 0x48))();
  pHVar1 = (HBRUSH)(**(code **)(iVar2 + 0x14))();
  FillRect(param_1,pRStack_38,pHVar1);
  iVar2 = (**(code **)(*(int *)this + 0x40))();
  iStack_34 = iStack_34 + iVar2;
  (**(code **)(*(int *)this + 0x4c))();
  SetBkMode(param_1,1);
  puVar3 = LocalizeGeneral(&DAT_1106dac4,(ushort *)u_Window_1106949c,(ushort *)0x0);
  appStrcpy((ushort *)aWStack_20b0,puVar3);
  iVar2 = *(int *)this;
  (**(code **)(iVar2 + 0x48))();
  CVar4 = (**(code **)(iVar2 + 0x18))();
  SetTextColor(param_1,CVar4);
  if (*(int *)GUnicodeOS_exref == 0) {
    iVar2 = winGetSizeANSI((ushort *)aWStack_20b0);
    if (iVar2 == 0) {
      param_1 = (HDC__ *)0x0;
    }
    else {
      winGetSizeANSI((ushort *)aWStack_20b0);
      puStack_7c = &stack0xffffdf1c;
      param_1 = (HDC__ *)&stack0xffffdf1c;
    }
    aiStack_6c[4] = 0;
    aiStack_6c[5] = 1;
    aiStack_6c[6] = 0;
    aiStack_6c[7] = 0;
    ptVar5 = (LPRECT)thunk_FUN_110143f0(&iStack_34,aiStack_8c,aiStack_6c + 4);
    ptVar10 = (LPDRAWTEXTPARAMS)0x0;
    HVar9.unused = 0x8024;
    iVar2 = appStrlen((ushort *)aWStack_20b0);
    iVar6 = winGetSizeANSI((ushort *)aWStack_20b0);
    pcVar7 = winToANSI((char *)param_1,(ushort *)aWStack_20b0,iVar6);
    DrawTextExA(hdc,pcVar7,iVar2,ptVar5,HVar9.unused,ptVar10);
  }
  else {
    aiStack_ac[0] = 0;
    aiStack_ac[1] = 1;
    aiStack_ac[2] = 0;
    aiStack_ac[3] = 0;
    ptVar5 = (LPRECT)thunk_FUN_110143f0(&iStack_34,aiStack_48,aiStack_ac);
    ptVar10 = (LPDRAWTEXTPARAMS)0x0;
    HVar9.unused = 0x8024;
    iVar2 = appStrlen((ushort *)aWStack_20b0);
    DrawTextExW(param_1,aWStack_20b0,iVar2,ptVar5,HVar9.unused,ptVar10);
  }
  iStack_24 = RStack_14.left;
  LStack_20 = RStack_14.top;
  iStack_1c = RStack_14.right;
  LStack_18 = RStack_14.bottom;
  iStack_24 = (**(code **)(**(int **)(this + 8) + 0xec))();
  aiStack_6c[0] = 0;
  aiStack_6c[1] = 1;
  aiStack_6c[2] = 0;
  aiStack_6c[3] = 0;
  lprc = (RECT *)thunk_FUN_110143f0(&iStack_24,aiStack_48,aiStack_6c);
  pHVar1 = (HBRUSH)(**(code **)(*(int *)this + 0x14))();
  FillRect(hdc,lprc,pHVar1);
  iStack_1c = iStack_1c - *(int *)(this + 0x20);
  CVar4 = (**(code **)(*(int *)this + 0x18))();
  SetTextColor(hdc,CVar4);
  if (*(int *)GUnicodeOS_exref == 0) {
    this_00 = (FString *)(this + 0x48);
    puVar3 = FString::operator*(this_00);
    iVar2 = winGetSizeANSI(puVar3);
    if (iVar2 == 0) {
      param_1 = (HDC__ *)0x0;
    }
    else {
      puVar3 = FString::operator*(this_00);
      winGetSizeANSI(puVar3);
      puStack_7c = &stack0xffffdf14;
      param_1 = (HDC__ *)&stack0xffffdf14;
    }
    aiStack_48[0] = 4;
    aiStack_48[1] = 1;
    aiStack_48[2] = 0;
    aiStack_48[3] = 0;
    ptVar5 = (LPRECT)thunk_FUN_110143f0(&iStack_24,aiStack_6c + 4,aiStack_48);
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
    aiStack_8c[0] = 4;
    aiStack_8c[1] = 1;
    aiStack_8c[2] = 0;
    aiStack_8c[3] = 0;
    ptVar5 = (LPRECT)thunk_FUN_110143f0(&iStack_24,aiStack_6c,aiStack_8c);
    ptVar10 = (LPDRAWTEXTPARAMS)0x0;
    UVar8 = 0x8024;
    iVar2 = FString::Len((FString *)(this + 0x48));
    lpchText = (LPWSTR)FString::operator*((FString *)(this + 0x48));
    DrawTextExW(hdc,lpchText,iVar2,ptVar5,UVar8,ptVar10);
  }
  ExceptionList = pvStack_78;
  return;
}


// ==== 11002761 FTreeItem::SetValue

/* public: virtual void __thiscall FTreeItem::SetValue(unsigned short const *) */

void __thiscall FTreeItem::SetValue(FTreeItem *this,ushort *param_1)

{
                    /* 0x2761  965  ?SetValue@FTreeItem@@UAEXPBG@Z */
  return;
}


// ==== 11002766 FConfigItem::Collapse

/* public: virtual void __thiscall FConfigItem::Collapse(void) */

void __thiscall FConfigItem::Collapse(FConfigItem *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2766  419  ?Collapse@FConfigItem@@UAEXXZ */
  puStack_c = &LAB_110612c0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FTreeItem::Collapse((FTreeItem *)this);
  FTreeItem::EmptyChildren((FTreeItem *)this);
  ExceptionList = pvStack_10;
  return;
}


// ==== 1100276b WWizardPage::~WWizardPage

/* public: virtual __thiscall WWizardPage::~WWizardPage(void) */

void __thiscall WWizardPage::~WWizardPage(WWizardPage *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x276b  238  ??1WWizardPage@@UAE@XZ */
  puStack_8 = &LAB_11063fc0;
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


// ==== 11002770 WProperties::~WProperties

/* public: virtual __thiscall WProperties::~WProperties(void) */

void __thiscall WProperties::~WProperties(WProperties *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* 0x2770  217  ??1WProperties@@UAE@XZ */
  puStack_8 = &LAB_11063a29;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)this = vftable_for_WWindow_;
  *(undefined ***)(this + 0x3c) = vftable_for_FControlSnoop_;
  uStack_4 = 1;
  WWindow::MaybeDestroy((WWindow *)this);
  uStack_4 = uStack_4 & 0xffffff00;
  thunk_FUN_1102ad90((FArray *)(this + 0xd4));
  uStack_4 = 2;
  WItemBox::~WItemBox((WItemBox *)(this + 0x44));
  uStack_4 = 0xffffffff;
  WWindow::~WWindow((WWindow *)this);
  ExceptionList = pvStack_c;
  return;
}


// ==== 11002775 FPropertyItem::Collapse

/* public: virtual void __thiscall FPropertyItem::Collapse(void) */

void __thiscall FPropertyItem::Collapse(FPropertyItem *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x2775  420  ?Collapse@FPropertyItem@@UAEXXZ */
  puStack_c = &LAB_110611e0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_10;
  FTreeItem::Collapse((FTreeItem *)this);
  FTreeItem::EmptyChildren((FTreeItem *)this);
  ExceptionList = pvStack_10;
  return;
}


