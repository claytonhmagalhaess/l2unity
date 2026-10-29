// ==== 10365870 FUN_10365870

void FUN_10365870(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7428;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UTerrainBrush::UTerrainBrush(in_ECX,param_1);
  *(undefined ***)in_ECX = UTerrainBrushFlatten::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103658e0 FUN_103658e0

void FUN_103658e0(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  
  UTerrainBrush::operator=(in_ECX,param_1);
  return;
}


// ==== 10365900 FUN_10365900

void FUN_10365900(byte param_1)

{
  UTerrainBrushFlatten *in_ECX;
  
  UTerrainBrushFlatten::~UTerrainBrushFlatten(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10365930 FUN_10365930

UTerrainBrushFlatten * FUN_10365930(byte param_1)

{
  UTerrainBrushFlatten *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x68,*(int *)(in_ECX + -4),UTerrainBrushFlatten::~UTerrainBrushFlatten);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTerrainBrushFlatten::~UTerrainBrushFlatten(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 103659b0 FUN_103659b0

void FUN_103659b0(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7448;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UTerrainBrush::UTerrainBrush(in_ECX,param_1);
  *(undefined ***)in_ECX = UTerrainBrushTexPan::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10365a20 FUN_10365a20

void FUN_10365a20(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  
  UTerrainBrush::operator=(in_ECX,param_1);
  return;
}


// ==== 10365a40 FUN_10365a40

void FUN_10365a40(byte param_1)

{
  UTerrainBrushTexPan *in_ECX;
  
  UTerrainBrushTexPan::~UTerrainBrushTexPan(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10365a70 FUN_10365a70

UTerrainBrushTexPan * FUN_10365a70(byte param_1)

{
  UTerrainBrushTexPan *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x68,*(int *)(in_ECX + -4),UTerrainBrushTexPan::~UTerrainBrushTexPan);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTerrainBrushTexPan::~UTerrainBrushTexPan(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10365af0 FUN_10365af0

void FUN_10365af0(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7468;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UTerrainBrush::UTerrainBrush(in_ECX,param_1);
  *(undefined ***)in_ECX = UTerrainBrushTexRotate::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10365b60 FUN_10365b60

void FUN_10365b60(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  
  UTerrainBrush::operator=(in_ECX,param_1);
  return;
}


// ==== 10365b80 FUN_10365b80

void FUN_10365b80(byte param_1)

{
  UTerrainBrushTexRotate *in_ECX;
  
  UTerrainBrushTexRotate::~UTerrainBrushTexRotate(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10365bb0 FUN_10365bb0

UTerrainBrushTexRotate * FUN_10365bb0(byte param_1)

{
  UTerrainBrushTexRotate *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x68,*(int *)(in_ECX + -4),UTerrainBrushTexRotate::~UTerrainBrushTexRotate);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTerrainBrushTexRotate::~UTerrainBrushTexRotate(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10365c30 FUN_10365c30

void FUN_10365c30(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7488;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UTerrainBrush::UTerrainBrush(in_ECX,param_1);
  *(undefined ***)in_ECX = UTerrainBrushTexScale::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10365ca0 FUN_10365ca0

void FUN_10365ca0(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  
  UTerrainBrush::operator=(in_ECX,param_1);
  return;
}


// ==== 10365cc0 FUN_10365cc0

void FUN_10365cc0(byte param_1)

{
  UTerrainBrushTexScale *in_ECX;
  
  UTerrainBrushTexScale::~UTerrainBrushTexScale(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10365cf0 FUN_10365cf0

UTerrainBrushTexScale * FUN_10365cf0(byte param_1)

{
  UTerrainBrushTexScale *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x68,*(int *)(in_ECX + -4),UTerrainBrushTexScale::~UTerrainBrushTexScale);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTerrainBrushTexScale::~UTerrainBrushTexScale(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10365d70 FUN_10365d70

void FUN_10365d70(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f74a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UTerrainBrush::UTerrainBrush(in_ECX,param_1);
  *(undefined ***)in_ECX = UTerrainBrushSelect::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10365de0 FUN_10365de0

void FUN_10365de0(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  
  UTerrainBrush::operator=(in_ECX,param_1);
  return;
}


// ==== 10365e00 FUN_10365e00

void FUN_10365e00(byte param_1)

{
  UTerrainBrushSelect *in_ECX;
  
  UTerrainBrushSelect::~UTerrainBrushSelect(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10365e30 FUN_10365e30

UTerrainBrushSelect * FUN_10365e30(byte param_1)

{
  UTerrainBrushSelect *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x68,*(int *)(in_ECX + -4),UTerrainBrushSelect::~UTerrainBrushSelect);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTerrainBrushSelect::~UTerrainBrushSelect(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10365eb0 FUN_10365eb0

void FUN_10365eb0(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f74c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UTerrainBrush::UTerrainBrush(in_ECX,param_1);
  *(undefined ***)in_ECX = UTerrainBrushVisibility::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10365f20 FUN_10365f20

void FUN_10365f20(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  
  UTerrainBrush::operator=(in_ECX,param_1);
  return;
}


// ==== 10365f40 FUN_10365f40

void FUN_10365f40(byte param_1)

{
  UTerrainBrushVisibility *in_ECX;
  
  UTerrainBrushVisibility::~UTerrainBrushVisibility(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10365f70 FUN_10365f70

UTerrainBrushVisibility * FUN_10365f70(byte param_1)

{
  UTerrainBrushVisibility *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x68,*(int *)(in_ECX + -4),UTerrainBrushVisibility::~UTerrainBrushVisibility);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTerrainBrushVisibility::~UTerrainBrushVisibility(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10365ff0 FUN_10365ff0

void FUN_10365ff0(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f74e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UTerrainBrush::UTerrainBrush(in_ECX,param_1);
  *(undefined ***)in_ECX = UTerrainBrushEdgeTurn::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10366060 FUN_10366060

void FUN_10366060(UTerrainBrush *param_1)

{
  UTerrainBrush *in_ECX;
  
  UTerrainBrush::operator=(in_ECX,param_1);
  return;
}


// ==== 10366080 FUN_10366080

void FUN_10366080(byte param_1)

{
  UTerrainBrushEdgeTurn *in_ECX;
  
  UTerrainBrushEdgeTurn::~UTerrainBrushEdgeTurn(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 103660b0 FUN_103660b0

UTerrainBrushEdgeTurn * FUN_103660b0(byte param_1)

{
  UTerrainBrushEdgeTurn *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x68,*(int *)(in_ECX + -4),UTerrainBrushEdgeTurn::~UTerrainBrushEdgeTurn);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTerrainBrushEdgeTurn::~UTerrainBrushEdgeTurn(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10366130 FUN_10366130

undefined4 FUN_10366130(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0x54);
  }
  return *(undefined4 *)(in_ECX + 0x78);
}


// ==== 10366150 FUN_10366150

undefined4 FUN_10366150(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0x58);
  }
  return *(undefined4 *)(in_ECX + 0x7c);
}


// ==== 10366170 FUN_10366170

undefined4 FUN_10366170(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0x5c);
  }
  return *(undefined4 *)(in_ECX + 0x80);
}


// ==== 10366190 FUN_10366190

undefined4 FUN_10366190(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0x60);
  }
  return *(undefined4 *)(in_ECX + 0x84);
}


// ==== 103661b0 FUN_103661b0

undefined4 FUN_103661b0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x50) + 100);
  }
  return *(undefined4 *)(in_ECX + 0x98);
}


// ==== 103661d0 FUN_103661d0

void FUN_103661d0(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0x54) = param_1;
    return;
  }
  *(undefined4 *)(in_ECX + 0x78) = param_1;
  return;
}


// ==== 10366200 FUN_10366200

void FUN_10366200(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0x58) = param_1;
    return;
  }
  *(undefined4 *)(in_ECX + 0x7c) = param_1;
  return;
}


// ==== 10366230 FUN_10366230

void FUN_10366230(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0x5c) = param_1;
    return;
  }
  *(undefined4 *)(in_ECX + 0x80) = param_1;
  return;
}


// ==== 10366260 FUN_10366260

void FUN_10366260(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x50) + 0x60) = param_1;
    return;
  }
  *(undefined4 *)(in_ECX + 0x84) = param_1;
  return;
}


// ==== 10366290 FUN_10366290

void FUN_10366290(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x50) + 100) = param_1;
    return;
  }
  *(undefined4 *)(in_ECX + 0x98) = param_1;
  return;
}


// ==== 103662c0 FUN_103662c0

undefined4 FUN_103662c0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x94);
}


// ==== 103662d0 FUN_103662d0

void FUN_103662d0(byte param_1)

{
  FTerrainTools *in_ECX;
  
  FTerrainTools::~FTerrainTools(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10366300 FUN_10366300

FTerrainTools * FUN_10366300(byte param_1)

{
  FTerrainTools *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x9c,*(int *)(in_ECX + -4),FTerrainTools::~FTerrainTools)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FTerrainTools::~FTerrainTools(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10366380 FUN_10366380

FArchive * FUN_10366380(FArchive *param_1,void *param_2)

{
  FArchive *this;
  void *pvVar1;
  int iVar2;
  
  pvVar1 = param_2;
  this = param_1;
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(this,(void *)((int)pvVar1 + 4),4);
  FArchive::ByteOrderSerialize(this,(void *)((int)pvVar1 + 8),4);
  FArchive::ByteOrderSerialize(this,(void *)((int)pvVar1 + 0xc),4);
  FArchive::ByteOrderSerialize(this,(void *)((int)pvVar1 + 0x10),4);
  FArchive::ByteOrderSerialize(this,(void *)((int)pvVar1 + 0x14),4);
  iVar2 = FArchive::Ver(this);
  if (iVar2 < 0x70) {
    FArchive::ByteOrderSerialize(this,&param_2,4);
    FArchive::ByteOrderSerialize(this,&param_1,4);
  }
  iVar2 = FArchive::Ver(this);
  if (iVar2 == 0x6f) {
    (**(code **)(*(int *)this + 4))((int)&param_2 + 2);
    (**(code **)(*(int *)this + 4))(&stack0x00000001,1);
    (**(code **)(*(int *)this + 4))(&stack0xfffffff8,1);
    (**(code **)(*(int *)this + 4))(&stack0xfffffff3,1);
  }
  return this;
}


// ==== 10366490 FUN_10366490

void FUN_10366490(void)

{
  return;
}


// ==== 103664a0 FUN_103664a0

void FUN_103664a0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  return;
}


// ==== 103664e0 FUN_103664e0

int FUN_103664e0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x10) * 0x18;
}


// ==== 103664f0 FUN_103664f0

undefined4 FUN_103664f0(void)

{
  return 0x18;
}


// ==== 10366500 FUN_10366500

undefined4 FUN_10366500(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 1;
  return 2;
}


// ==== 10366530 FUN_10366530

undefined4 FUN_10366530(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


// ==== 10366540 FUN_10366540

undefined4 FUN_10366540(undefined4 *param_1)

{
  *param_1 = 4;
  param_1[1] = 3;
  return 1;
}


// ==== 10366560 FUN_10366560

int FUN_10366560(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x10) * 4;
}


// ==== 10366570 FUN_10366570

undefined4 FUN_10366570(void)

{
  return 4;
}


// ==== 10366580 FUN_10366580

undefined4 FUN_10366580(undefined4 *param_1)

{
  *param_1 = 3;
  param_1[1] = 0xd;
  return 1;
}


// ==== 103665a0 FUN_103665a0

undefined4 FUN_103665a0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


// ==== 103665b0 FUN_103665b0

FArchive * FUN_103665b0(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  return param_1;
}


// ==== 103665f0 FUN_103665f0

void FUN_103665f0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


// ==== 10366610 FUN_10366610

int FUN_10366610(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x10) * 8;
}


// ==== 10366620 FUN_10366620

undefined4 FUN_10366620(void)

{
  return 8;
}


// ==== 10366630 FUN_10366630

undefined4 FUN_10366630(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = 2;
  param_1[1] = *(int *)(in_ECX + 0x18) + 4;
  return 1;
}


// ==== 10366660 FUN_10366660

undefined4 FUN_10366660(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x1c);
}


// ==== 10366670 FUN_10366670

void FUN_10366670(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  *(undefined2 *)(in_ECX + 4) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  *(undefined2 *)(in_ECX + 2) = 0;
  *(undefined2 *)(in_ECX + 3) = 0xffff;
  *(undefined2 *)((int)in_ECX + 10) = 0xffff;
  return;
}


// ==== 103666a0 FUN_103666a0

void FUN_103666a0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  return;
}


// ==== 103666d0 FUN_103666d0

void FUN_103666d0(void)

{
  FVector *in_ECX;
  int iVar1;
  
  iVar1 = 2;
  do {
    FVector::FVector(in_ECX);
    in_ECX = in_ECX + 0xc;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}


// ==== 10366700 FUN_10366700

void FUN_10366700(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 10366720 FUN_10366720

void FUN_10366720(FArchive *param_1,void *param_2)

{
  FArchive *pFVar1;
  FCompactIndex *pFVar2;
  FCompactIndex *pFVar3;
  FCompactIndex *pFVar4;
  
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 8),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0xc),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x10),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x14),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x18),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x1c),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x20),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x24),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x28),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x2c),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x30),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x34),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x38),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x3c),4);
  pFVar4 = (FCompactIndex *)((int)param_2 + 0x4c);
  pFVar3 = (FCompactIndex *)((int)param_2 + 0x48);
  pFVar2 = (FCompactIndex *)((int)param_2 + 0x44);
  pFVar1 = operator<<(param_1,(FCompactIndex *)((int)param_2 + 0x40));
  pFVar1 = operator<<(pFVar1,pFVar2);
  pFVar1 = operator<<(pFVar1,pFVar3);
  operator<<(pFVar1,pFVar4);
  return;
}


// ==== 10366880 FUN_10366880

void FUN_10366880(void)

{
  FPlane *in_ECX;
  int iVar1;
  
  iVar1 = 2;
  do {
    in_ECX = in_ECX + 0x10;
    FPlane::FPlane(in_ECX);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}


// ==== 103668b0 FUN_103668b0

void FUN_103668b0(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  pcVar1 = FPlane_exref;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  thunk_FUN_10335490(in_ECX + 4,param_1 + 4,0x10,3,pcVar1);
  in_ECX[0x10] = param_1[0x10];
  in_ECX[0x11] = param_1[0x11];
  in_ECX[0x12] = param_1[0x12];
  in_ECX[0x13] = param_1[0x13];
  in_ECX[0x14] = param_1[0x14];
  return;
}


// ==== 10366920 FUN_10366920

void FUN_10366920(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 10366940 FUN_10366940

void FUN_10366940(FArchive *param_1,FCompactIndex *param_2)

{
  FArchive *pFVar1;
  FCompactIndex *pFVar2;
  FCompactIndex *pFVar3;
  FCompactIndex *pFVar4;
  FCompactIndex *pFVar5;
  
  pFVar5 = param_2 + 0x10;
  pFVar4 = param_2 + 0xc;
  pFVar3 = param_2 + 8;
  pFVar2 = param_2 + 4;
  pFVar1 = operator<<(param_1,param_2);
  pFVar1 = operator<<(pFVar1,pFVar2);
  pFVar1 = operator<<(pFVar1,pFVar3);
  pFVar1 = operator<<(pFVar1,pFVar4);
  thunk_FUN_103302c0(pFVar1,pFVar5);
  return;
}


// ==== 103669a0 FUN_103669a0

void FUN_103669a0(void)

{
  int in_ECX;
  
  FBox::FBox((FBox *)(in_ECX + 0x10));
  return;
}


// ==== 103669c0 FUN_103669c0

void FUN_103669c0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 103669e0 FUN_103669e0

void FUN_103669e0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[2] = 1;
  in_ECX[1] = 1;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}


// ==== 10366a10 FUN_10366a10

void FUN_10366a10(FArchive *param_1,int param_2)

{
  int iVar1;
  FArchive *pFVar2;
  FCompactIndex *pFVar3;
  FCompactIndex *pFVar4;
  FCompactIndex *pFVar5;
  
  iVar1 = FArchive::LicenseeVer(param_1);
  if (0x12 < iVar1) {
    pFVar2 = (FArchive *)(**(code **)(*(int *)param_1 + 0x18))(param_2);
    pFVar5 = (FCompactIndex *)(param_2 + 0x10);
    pFVar4 = (FCompactIndex *)(param_2 + 0xc);
    pFVar3 = (FCompactIndex *)(param_2 + 8);
    pFVar2 = operator<<(pFVar2,(FCompactIndex *)(param_2 + 4));
    pFVar2 = operator<<(pFVar2,pFVar3);
    pFVar2 = operator<<(pFVar2,pFVar4);
    operator<<(pFVar2,pFVar5);
    return;
  }
  iVar1 = FArchive::LicenseeVer(param_1);
  if (4 < iVar1) {
    pFVar2 = (FArchive *)(**(code **)(*(int *)param_1 + 0x18))();
    pFVar5 = (FCompactIndex *)(param_2 + 0xc);
    pFVar4 = (FCompactIndex *)(param_2 + 8);
    pFVar2 = operator<<(pFVar2,(FCompactIndex *)(param_2 + 4));
    pFVar2 = operator<<(pFVar2,pFVar4);
    operator<<(pFVar2,pFVar5);
    return;
  }
  pFVar2 = (FArchive *)(**(code **)(*(int *)param_1 + 0x18))(param_2);
  pFVar5 = (FCompactIndex *)(param_2 + 8);
  pFVar2 = operator<<(pFVar2,(FCompactIndex *)(param_2 + 4));
  operator<<(pFVar2,pFVar5);
  return;
}


// ==== 10366b00 FUN_10366b00

void FUN_10366b00(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  return;
}


// ==== 10366b30 FUN_10366b30

UClass * FUN_10366b30(void)

{
  return &UStaticMesh::PrivateStaticClass;
}


// ==== 10366b40 FUN_10366b40

void FUN_10366b40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UStaticMesh::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,
             0,0);
  return;
}


// ==== 10366b80 FUN_10366b80

undefined4 FUN_10366b80(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10366b90 FUN_10366b90

void FUN_10366b90(UStaticMesh *param_1)

{
  if (param_1 != (UStaticMesh *)0x0) {
    UStaticMesh::UStaticMesh(param_1);
    return;
  }
  return;
}


// ==== 10366bb0 FUN_10366bb0

UClass * FUN_10366bb0(void)

{
  return &UStaticMeshInstance::PrivateStaticClass;
}


// ==== 10366bc0 FUN_10366bc0

void FUN_10366bc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UStaticMeshInstance::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10366c00 FUN_10366c00

undefined4 FUN_10366c00(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10366c10 FUN_10366c10

undefined4 FUN_10366c10(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x40);
}


// ==== 10366c20 FUN_10366c20

undefined4 FUN_10366c20(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x5c);
}


// ==== 10366c30 FUN_10366c30

void FUN_10366c30(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x60) = param_1;
  return;
}


// ==== 10366c40 FUN_10366c40

undefined4 FUN_10366c40(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x60);
}


// ==== 10366c50 FUN_10366c50

void FUN_10366c50(byte param_1)

{
  FMatineeTools *in_ECX;
  
  FMatineeTools::~FMatineeTools(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10366c80 FUN_10366c80

FMatineeTools * FUN_10366c80(byte param_1)

{
  FMatineeTools *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x68,*(int *)(in_ECX + -4),FMatineeTools::~FMatineeTools)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FMatineeTools::~FMatineeTools(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10366d00 FUN_10366d00

UClass * FUN_10366d00(void)

{
  return &UFluidSurfacePrimitive::PrivateStaticClass;
}


// ==== 10366d10 FUN_10366d10

void FUN_10366d10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UFluidSurfacePrimitive::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10366d50 FUN_10366d50

undefined4 FUN_10366d50(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10366d60 FUN_10366d60

void FUN_10366d60(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f7508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UFluidSurfacePrimitive::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UPrimitive::~UPrimitive((UPrimitive *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10366dd0 FUN_10366dd0

void FUN_10366dd0(void)

{
  UPrimitive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPrimitive::UPrimitive(in_ECX);
  *(undefined ***)in_ECX = UFluidSurfacePrimitive::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10366e30 FUN_10366e30

void FUN_10366e30(UPrimitive *param_1)

{
  UPrimitive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7548;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPrimitive::UPrimitive(in_ECX,param_1);
  *(undefined ***)in_ECX = UFluidSurfacePrimitive::vftable;
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  ExceptionList = local_c;
  return;
}


// ==== 10366ea0 FUN_10366ea0

void FUN_10366ea0(UObject *param_1)

{
  UObject *in_ECX;
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  
  UObject::operator=(in_ECX,param_1);
  pUVar2 = param_1 + 0x34;
  pUVar3 = in_ECX + 0x34;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  return;
}


// ==== 10366f00 FUN_10366f00

void FUN_10366f00(byte param_1)

{
  UFluidSurfacePrimitive *in_ECX;
  
  UFluidSurfacePrimitive::~UFluidSurfacePrimitive(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,100);
  }
  return;
}


// ==== 10366f30 FUN_10366f30

UFluidSurfacePrimitive * FUN_10366f30(byte param_1)

{
  UFluidSurfacePrimitive *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,100,*(int *)(in_ECX + -4),UFluidSurfacePrimitive::~UFluidSurfacePrimitive);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UFluidSurfacePrimitive::~UFluidSurfacePrimitive(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,100);
  }
  return in_ECX;
}


// ==== 10366fb0 FUN_10366fb0

UClass * FUN_10366fb0(void)

{
  return &AFluidSurfaceInfo::PrivateStaticClass;
}


// ==== 10366fc0 FUN_10366fc0

void FUN_10366fc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AFluidSurfaceInfo::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10367000 FUN_10367000

undefined4 FUN_10367000(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10367010 FUN_10367010

bool FUN_10367010(int param_1)

{
  int in_ECX;
  
  return in_ECX == param_1;
}


// ==== 10367020 FUN_10367020

void FUN_10367020(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FChatMsgInfo::vftable;
  return;
}


// ==== 10367030 FUN_10367030

undefined4 FUN_10367030(void)

{
  return 0;
}


// ==== 10367040 FUN_10367040

void FUN_10367040(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FChatMsgInfo::vftable;
  return;
}


// ==== 10367050 FUN_10367050

void FUN_10367050(void)

{
  return;
}


// ==== 10367060 FUN_10367060

UClass * FUN_10367060(void)

{
  return &UL2ConsoleWnd::PrivateStaticClass;
}


// ==== 10367070 FUN_10367070

void FUN_10367070(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UL2ConsoleWnd::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 103670b0 FUN_103670b0

undefined4 FUN_103670b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103670c0 FUN_103670c0

void FUN_103670c0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f7569;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UL2ConsoleWnd::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UL2ConsoleWnd::vftable_for_FExec_;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  USubsystem::~USubsystem((USubsystem *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10367130 FUN_10367130

undefined4 FUN_10367130(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x38);
}


// ==== 10367140 FUN_10367140

void FUN_10367140(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x4c) = param_1;
  return;
}


// ==== 10367150 FUN_10367150

undefined4 FUN_10367150(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x4c);
}


// ==== 10367160 FUN_10367160

void FUN_10367160(USubsystem *param_1)

{
  USubsystem *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7589;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USubsystem::USubsystem(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UL2ConsoleWnd::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UL2ConsoleWnd::vftable_for_FExec_;
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  _memcpy(in_ECX + 0x54,param_1 + 0x54,0x3768);
  _memcpy(in_ECX + 0x37bc,param_1 + 0x37bc,0x18a0);
  ExceptionList = local_c;
  return;
}


// ==== 10367240 FUN_10367240

void FUN_10367240(USubsystem *param_1)

{
  USubsystem *pUVar1;
  USubsystem *in_ECX;
  int iVar2;
  int iVar3;
  USubsystem *pUVar4;
  USubsystem *pUVar5;
  USubsystem *pUVar6;
  
  pUVar5 = param_1;
  USubsystem::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  iVar3 = (int)param_1 - (int)in_ECX;
  param_1 = (USubsystem *)0x12;
  pUVar1 = in_ECX + 0x54;
  do {
    param_1 = (USubsystem *)((int)param_1 + -1);
    pUVar4 = pUVar1 + iVar3;
    pUVar6 = pUVar1;
    for (iVar2 = 0xc5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pUVar6 = *(undefined4 *)pUVar4;
      pUVar4 = pUVar4 + 4;
      pUVar6 = pUVar6 + 4;
    }
    pUVar1 = pUVar1 + 0x314;
  } while (param_1 != (USubsystem *)0x0);
  pUVar1 = pUVar5 + 0x37bc;
  pUVar4 = in_ECX + 0x37bc;
  for (iVar3 = 0xc5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar1;
    pUVar1 = pUVar1 + 4;
    pUVar4 = pUVar4 + 4;
  }
  pUVar1 = pUVar5 + 0x3ad0;
  pUVar4 = in_ECX + 0x3ad0;
  for (iVar3 = 0xc5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar1;
    pUVar1 = pUVar1 + 4;
    pUVar4 = pUVar4 + 4;
  }
  pUVar1 = pUVar5 + 0x3de4;
  pUVar4 = in_ECX + 0x3de4;
  for (iVar3 = 0xc5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar1;
    pUVar1 = pUVar1 + 4;
    pUVar4 = pUVar4 + 4;
  }
  pUVar1 = pUVar5 + 0x40f8;
  pUVar4 = in_ECX + 0x40f8;
  for (iVar3 = 0xc5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar1;
    pUVar1 = pUVar1 + 4;
    pUVar4 = pUVar4 + 4;
  }
  pUVar1 = pUVar5 + 0x440c;
  pUVar4 = in_ECX + 0x440c;
  for (iVar3 = 0xc5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar1;
    pUVar1 = pUVar1 + 4;
    pUVar4 = pUVar4 + 4;
  }
  pUVar1 = pUVar5 + 0x4720;
  pUVar4 = in_ECX + 0x4720;
  for (iVar3 = 0xc5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar1;
    pUVar1 = pUVar1 + 4;
    pUVar4 = pUVar4 + 4;
  }
  pUVar1 = pUVar5 + 0x4a34;
  pUVar4 = in_ECX + 0x4a34;
  for (iVar3 = 0xc5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar1;
    pUVar1 = pUVar1 + 4;
    pUVar4 = pUVar4 + 4;
  }
  pUVar5 = pUVar5 + 0x4d48;
  pUVar1 = in_ECX + 0x4d48;
  for (iVar3 = 0xc5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pUVar1 = *(undefined4 *)pUVar5;
    pUVar5 = pUVar5 + 4;
    pUVar1 = pUVar1 + 4;
  }
  return;
}


// ==== 10367390 FUN_10367390

void FUN_10367390(byte param_1)

{
  UL2ConsoleWnd *in_ECX;
  
  UL2ConsoleWnd::~UL2ConsoleWnd(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x505c);
  }
  return;
}


// ==== 103673c0 FUN_103673c0

UL2ConsoleWnd * FUN_103673c0(byte param_1)

{
  UL2ConsoleWnd *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x505c,*(int *)(in_ECX + -4),UL2ConsoleWnd::~UL2ConsoleWnd);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UL2ConsoleWnd::~UL2ConsoleWnd(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x505c);
  }
  return in_ECX;
}


// ==== 10367440 FUN_10367440

UClass * FUN_10367440(void)

{
  return &UBumpShader::PrivateStaticClass;
}


// ==== 10367450 FUN_10367450

void FUN_10367450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UBumpShader::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,
             0,0);
  return;
}


// ==== 10367490 FUN_10367490

undefined4 FUN_10367490(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103674a0 FUN_103674a0

void FUN_103674a0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f75a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UBumpShader::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  URenderedMaterial::~URenderedMaterial((URenderedMaterial *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10367510 FUN_10367510

void FUN_10367510(UBumpShader *param_1)

{
  if (param_1 != (UBumpShader *)0x0) {
    UBumpShader::UBumpShader(param_1);
    return;
  }
  return;
}


// ==== 10367530 FUN_10367530

void FUN_10367530(URenderedMaterial *param_1)

{
  URenderedMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f75c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  URenderedMaterial::URenderedMaterial(in_ECX,param_1);
  *(undefined ***)in_ECX = UBumpShader::vftable;
  *(undefined4 *)(in_ECX + 0x578) = *(undefined4 *)(param_1 + 0x578);
  *(undefined4 *)(in_ECX + 0x57c) = *(undefined4 *)(param_1 + 0x57c);
  *(undefined4 *)(in_ECX + 0x580) = *(undefined4 *)(param_1 + 0x580);
  *(undefined4 *)(in_ECX + 0x584) = *(undefined4 *)(param_1 + 0x584);
  *(undefined4 *)(in_ECX + 0x588) = *(undefined4 *)(param_1 + 0x588);
  ExceptionList = local_c;
  return;
}


// ==== 103675f0 FUN_103675f0

void FUN_103675f0(UMaterial *param_1)

{
  UMaterial *in_ECX;
  
  UMaterial::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x578) = *(undefined4 *)(param_1 + 0x578);
  *(undefined4 *)(in_ECX + 0x57c) = *(undefined4 *)(param_1 + 0x57c);
  *(undefined4 *)(in_ECX + 0x580) = *(undefined4 *)(param_1 + 0x580);
  *(undefined4 *)(in_ECX + 0x584) = *(undefined4 *)(param_1 + 0x584);
  *(undefined4 *)(in_ECX + 0x588) = *(undefined4 *)(param_1 + 0x588);
  return;
}


// ==== 10367660 FUN_10367660

void FUN_10367660(byte param_1)

{
  UBumpShader *in_ECX;
  
  UBumpShader::~UBumpShader(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x58c);
  }
  return;
}


// ==== 10367690 FUN_10367690

UBumpShader * FUN_10367690(byte param_1)

{
  UBumpShader *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x58c,*(int *)(in_ECX + -4),UBumpShader::~UBumpShader);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UBumpShader::~UBumpShader(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x58c);
  }
  return in_ECX;
}


// ==== 10367710 FUN_10367710

UClass * FUN_10367710(void)

{
  return &UUnderWaterShader::PrivateStaticClass;
}


// ==== 10367720 FUN_10367720

void FUN_10367720(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UUnderWaterShader::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10367760 FUN_10367760

undefined4 FUN_10367760(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10367770 FUN_10367770

void FUN_10367770(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f75e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UUnderWaterShader::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  URenderedMaterial::~URenderedMaterial((URenderedMaterial *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103677e0 FUN_103677e0

void FUN_103677e0(UUnderWaterShader *param_1)

{
  if (param_1 != (UUnderWaterShader *)0x0) {
    UUnderWaterShader::UUnderWaterShader(param_1);
    return;
  }
  return;
}


// ==== 10367800 FUN_10367800

void FUN_10367800(URenderedMaterial *param_1)

{
  URenderedMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7608;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  URenderedMaterial::URenderedMaterial(in_ECX,param_1);
  *(undefined ***)in_ECX = UUnderWaterShader::vftable;
  *(undefined4 *)(in_ECX + 0x578) = *(undefined4 *)(param_1 + 0x578);
  *(undefined4 *)(in_ECX + 0x57c) = *(undefined4 *)(param_1 + 0x57c);
  *(undefined4 *)(in_ECX + 0x580) = *(undefined4 *)(param_1 + 0x580);
  *(undefined4 *)(in_ECX + 0x584) = *(undefined4 *)(param_1 + 0x584);
  *(undefined4 *)(in_ECX + 0x588) = *(undefined4 *)(param_1 + 0x588);
  ExceptionList = local_c;
  return;
}


// ==== 103678c0 FUN_103678c0

void FUN_103678c0(UMaterial *param_1)

{
  UMaterial *in_ECX;
  
  UMaterial::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x578) = *(undefined4 *)(param_1 + 0x578);
  *(undefined4 *)(in_ECX + 0x57c) = *(undefined4 *)(param_1 + 0x57c);
  *(undefined4 *)(in_ECX + 0x580) = *(undefined4 *)(param_1 + 0x580);
  *(undefined4 *)(in_ECX + 0x584) = *(undefined4 *)(param_1 + 0x584);
  *(undefined4 *)(in_ECX + 0x588) = *(undefined4 *)(param_1 + 0x588);
  return;
}


// ==== 10367930 FUN_10367930

void FUN_10367930(byte param_1)

{
  UUnderWaterShader *in_ECX;
  
  UUnderWaterShader::~UUnderWaterShader(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x58c);
  }
  return;
}


// ==== 10367960 FUN_10367960

UUnderWaterShader * FUN_10367960(byte param_1)

{
  UUnderWaterShader *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x58c,*(int *)(in_ECX + -4),UUnderWaterShader::~UUnderWaterShader);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUnderWaterShader::~UUnderWaterShader(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x58c);
  }
  return in_ECX;
}


// ==== 103679e0 FUN_103679e0

void FUN_103679e0(byte param_1)

{
  L2AbnormalZone *in_ECX;
  
  L2AbnormalZone::~L2AbnormalZone(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10367a10 FUN_10367a10

L2AbnormalZone * FUN_10367a10(byte param_1)

{
  L2AbnormalZone *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x14,*(int *)(in_ECX + -4),L2AbnormalZone::~L2AbnormalZone);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  L2AbnormalZone::~L2AbnormalZone(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10367a90 FUN_10367a90

void FUN_10367a90(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x54e0) = param_1;
  return;
}


// ==== 10367aa0 FUN_10367aa0

undefined4 FUN_10367aa0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x54e0);
}


// ==== 10367ab0 FUN_10367ab0

void FUN_10367ab0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x54e4) = param_1;
  return;
}


// ==== 10367ac0 FUN_10367ac0

undefined4 FUN_10367ac0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x54e4);
}


// ==== 10367ad0 FUN_10367ad0

void FUN_10367ad0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x54e8) = param_1;
  return;
}


// ==== 10367ae0 FUN_10367ae0

undefined4 FUN_10367ae0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x54e8);
}


// ==== 10367af0 FUN_10367af0

void FUN_10367af0(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f7629;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::operator=((FString *)(in_ECX + (param_1 * 3 + 0x1398) * 4),(FString *)&stack0x00000008);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000008);
  ExceptionList = local_c;
  return;
}


// ==== 10367b60 FUN_10367b60

void FUN_10367b60(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f7649;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::operator=((FString *)(in_ECX + 0x54f4),(FString *)&stack0x00000004);
  local_4 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 10367bd0 FUN_10367bd0

undefined4 FUN_10367bd0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x5504);
}


// ==== 10367be0 FUN_10367be0

void FUN_10367be0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x5508) = param_1;
  return;
}


// ==== 10367bf0 FUN_10367bf0

undefined4 FUN_10367bf0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x5508);
}


// ==== 10367c00 FUN_10367c00

undefined4 FUN_10367c00(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x5510);
}


// ==== 10367c10 FUN_10367c10

void FUN_10367c10(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x5514) = param_1;
  return;
}


// ==== 10367c20 FUN_10367c20

undefined4 FUN_10367c20(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x5514);
}


// ==== 10367c30 FUN_10367c30

void FUN_10367c30(void)

{
  FL2ReplayManager *in_ECX;
  
  FL2ReplayManager::FL2ReplayManager(in_ECX,0);
  return;
}


// ==== 10367c40 FUN_10367c40

void FUN_10367c40(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f766c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  FString::FString((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  ExceptionList = local_c;
  return;
}


// ==== 10367cb0 FUN_10367cb0

void FUN_10367cb0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f768c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10367d30 FUN_10367d30

UClass * FUN_10367d30(void)

{
  return &UL2OrcMove::PrivateStaticClass;
}


// ==== 10367d40 FUN_10367d40

void FUN_10367d40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UL2OrcMove::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0
             ,0);
  return;
}


// ==== 10367d80 FUN_10367d80

undefined4 FUN_10367d80(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10367d90 FUN_10367d90

void FUN_10367d90(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f76a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UL2OrcMove::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UL2OrcMove::vftable_for_FExec_;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  USubsystem::~USubsystem((USubsystem *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10367e00 FUN_10367e00

void FUN_10367e00(void)

{
  USubsystem *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f76c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USubsystem::USubsystem(in_ECX);
  *(undefined ***)in_ECX = UL2OrcMove::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UL2OrcMove::vftable_for_FExec_;
  ExceptionList = local_c;
  return;
}


// ==== 10367e70 FUN_10367e70

void FUN_10367e70(USubsystem *param_1)

{
  USubsystem *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f76e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USubsystem::USubsystem(in_ECX,param_1);
  *(undefined ***)in_ECX = UL2OrcMove::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UL2OrcMove::vftable_for_FExec_;
  ExceptionList = local_c;
  return;
}


// ==== 10367ee0 FUN_10367ee0

void FUN_10367ee0(USubsystem *param_1)

{
  USubsystem *in_ECX;
  
  USubsystem::operator=(in_ECX,param_1);
  return;
}


// ==== 10367f00 FUN_10367f00

void FUN_10367f00(byte param_1)

{
  UL2OrcMove *in_ECX;
  
  UL2OrcMove::~UL2OrcMove(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return;
}


// ==== 10367f30 FUN_10367f30

UL2OrcMove * FUN_10367f30(byte param_1)

{
  UL2OrcMove *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x38,*(int *)(in_ECX + -4),UL2OrcMove::~UL2OrcMove);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UL2OrcMove::~UL2OrcMove(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 10367fe0 FUN_10367fe0

void FUN_10367fe0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  if (in_ECX != param_1) {
    *in_ECX = *param_1;
    in_ECX[1] = param_1[1];
    in_ECX[2] = param_1[2];
  }
  return;
}


// ==== 10368010 FUN_10368010

UClass * FUN_10368010(void)

{
  return &UOrcMove::PrivateStaticClass;
}


// ==== 10368020 FUN_10368020

void FUN_10368020(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UOrcMove::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0
            );
  return;
}


// ==== 10368060 FUN_10368060

undefined4 FUN_10368060(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10368070 FUN_10368070

undefined4 FUN_10368070(void)

{
  return 0;
}


// ==== 10368080 FUN_10368080

void FUN_10368080(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f770b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10520200();
  ExceptionList = local_c;
  return;
}


// ==== 103680d0 FUN_103680d0

void FUN_103680d0(int param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *in_ECX = AES::vftable;
  *(undefined1 *)(in_ECX + 1) = *(undefined1 *)(param_1 + 4);
  puVar2 = (undefined4 *)(param_1 + 8);
  puVar3 = in_ECX + 2;
  for (iVar1 = 0x78; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x1e8);
  puVar3 = in_ECX + 0x7a;
  for (iVar1 = 0x78; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ECX[0xf2] = *(undefined4 *)(param_1 + 0x3c8);
  in_ECX[0xf3] = *(undefined4 *)(param_1 + 0x3cc);
  in_ECX[0xf4] = *(undefined4 *)(param_1 + 0x3d0);
  puVar2 = (undefined4 *)(param_1 + 0x3d4);
  puVar3 = in_ECX + 0xf5;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x3f4);
  puVar3 = in_ECX + 0xfd;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x414);
  puVar3 = in_ECX + 0x105;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x434);
  puVar3 = in_ECX + 0x10d;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x454);
  puVar3 = in_ECX + 0x115;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


// ==== 103681c0 FUN_103681c0

void FUN_103681c0(int param_1)

{
  int in_ECX;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  *(undefined1 *)(in_ECX + 4) = *(undefined1 *)(param_1 + 4);
  puVar1 = (undefined4 *)(in_ECX + 8);
  iVar2 = param_1 - in_ECX;
  iVar3 = 0x78;
  do {
    *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = (undefined4 *)(in_ECX + 0x1e8);
  iVar3 = 0x78;
  do {
    *puVar1 = *(undefined4 *)((int)puVar1 + iVar2);
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(in_ECX + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)(in_ECX + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)(in_ECX + 0x3d0) = *(undefined4 *)(param_1 + 0x3d0);
  puVar4 = (undefined1 *)(in_ECX + 0x3d4);
  iVar3 = 0x20;
  do {
    *puVar4 = puVar4[iVar2];
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar4 = (undefined1 *)(in_ECX + 0x3f4);
  iVar3 = 0x20;
  do {
    *puVar4 = puVar4[iVar2];
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(in_ECX + 0x414) = *(undefined4 *)(param_1 + 0x414);
  *(undefined4 *)(in_ECX + 0x418) = *(undefined4 *)(param_1 + 0x418);
  *(undefined4 *)(in_ECX + 0x41c) = *(undefined4 *)(param_1 + 0x41c);
  *(undefined4 *)(in_ECX + 0x420) = *(undefined4 *)(param_1 + 0x420);
  *(undefined4 *)(in_ECX + 0x424) = *(undefined4 *)(param_1 + 0x424);
  *(undefined4 *)(in_ECX + 0x428) = *(undefined4 *)(param_1 + 0x428);
  *(undefined4 *)(in_ECX + 0x42c) = *(undefined4 *)(param_1 + 0x42c);
  *(undefined4 *)(in_ECX + 0x430) = *(undefined4 *)(param_1 + 0x430);
  *(undefined4 *)(in_ECX + 0x434) = *(undefined4 *)(param_1 + 0x434);
  *(undefined4 *)(in_ECX + 0x438) = *(undefined4 *)(param_1 + 0x438);
  *(undefined4 *)(in_ECX + 0x43c) = *(undefined4 *)(param_1 + 0x43c);
  *(undefined4 *)(in_ECX + 0x440) = *(undefined4 *)(param_1 + 0x440);
  *(undefined4 *)(in_ECX + 0x444) = *(undefined4 *)(param_1 + 0x444);
  *(undefined4 *)(in_ECX + 0x448) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)(in_ECX + 0x44c) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)(in_ECX + 0x450) = *(undefined4 *)(param_1 + 0x450);
  *(undefined4 *)(in_ECX + 0x454) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(in_ECX + 0x458) = *(undefined4 *)(param_1 + 0x458);
  *(undefined4 *)(in_ECX + 0x45c) = *(undefined4 *)(param_1 + 0x45c);
  *(undefined4 *)(in_ECX + 0x460) = *(undefined4 *)(param_1 + 0x460);
  *(undefined4 *)(in_ECX + 0x464) = *(undefined4 *)(param_1 + 0x464);
  *(undefined4 *)(in_ECX + 0x468) = *(undefined4 *)(param_1 + 0x468);
  *(undefined4 *)(in_ECX + 0x46c) = *(undefined4 *)(param_1 + 0x46c);
  *(undefined4 *)(in_ECX + 0x470) = *(undefined4 *)(param_1 + 0x470);
  return;
}


// ==== 10368400 FUN_10368400

void FUN_10368400(byte param_1)

{
  thunk_FUN_10520200();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10368430 FUN_10368430

void FUN_10368430(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7729;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10368480 FUN_10368480

void FUN_10368480(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7749;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103684d0 FUN_103684d0

void FUN_103684d0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7769;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10368520 FUN_10368520

void FUN_10368520(int param_1)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7789;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1,1);
  ExceptionList = local_c;
  return;
}


// ==== 10368580 FUN_10368580

void FUN_10368580(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f77a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 103685e0 FUN_103685e0

int FUN_103685e0(int param_1)

{
  int *in_ECX;
  
  if (in_ECX[1] <= param_1) {
    appFailAssert("c<ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x198);
  }
  return (*in_ECX - param_1) + -1 + in_ECX[1];
}


// ==== 10368630 FUN_10368630

int FUN_10368630(int param_1)

{
  int *in_ECX;
  
  return (in_ECX[1] - param_1) + -1 + *in_ECX;
}


// ==== 10368650 FUN_10368650

void FUN_10368650(void)

{
  FArray *in_ECX;
  
  FArray::Shrink(in_ECX,1);
  return;
}


// ==== 10368660 FUN_10368660

undefined4 FUN_10368660(char *param_1,int *param_2)

{
  int *in_ECX;
  int iVar1;
  
  *param_2 = 0;
  if (0 < in_ECX[1]) {
    do {
      if (*(char *)(*param_2 + *in_ECX) == *param_1) {
        return 1;
      }
      iVar1 = *param_2 + 1;
      *param_2 = iVar1;
    } while (iVar1 < in_ECX[1]);
  }
  return 0;
}


// ==== 103686b0 FUN_103686b0

int FUN_103686b0(char *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = 0;
  if (0 < in_ECX[1]) {
    do {
      if (*(char *)(*in_ECX + iVar1) == *param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < in_ECX[1]);
  }
  return -1;
}


// ==== 103686e0 FUN_103686e0

void FUN_103686e0(FArchive *param_1)

{
  FArray *in_ECX;
  
  FArray::CountBytes(in_ECX,param_1,1);
  return;
}


// ==== 10368700 FUN_10368700

void FUN_10368700(int param_1)

{
  FArray *in_ECX;
  
  FArray::Add(in_ECX,param_1,1);
  return;
}


// ==== 10368720 FUN_10368720

void FUN_10368720(int param_1,int param_2)

{
  FArray *in_ECX;
  
  FArray::Insert(in_ECX,param_1,param_2,1);
  return;
}


// ==== 10368740 FUN_10368740

void FUN_10368740(int param_1,int param_2)

{
  FArray *in_ECX;
  
  FArray::InsertZeroed(in_ECX,param_1,param_2,1);
  return;
}


// ==== 10368760 FUN_10368760

void FUN_10368760(undefined1 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,1);
  *(undefined1 *)(iVar1 + *(int *)in_ECX) = *param_1;
  return;
}


// ==== 10368790 FUN_10368790

void FUN_10368790(int param_1)

{
  FArray *in_ECX;
  
  FArray::AddZeroed(in_ECX,1,param_1);
  return;
}


// ==== 103687b0 FUN_103687b0

void FUN_103687b0(char *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    do {
      if (*(char *)(*(int *)in_ECX + iVar1) == *param_1) {
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  iVar1 = FArray::Add(in_ECX,1,1);
  *(char *)(iVar1 + *(int *)in_ECX) = *param_1;
  return;
}


// ==== 10368800 FUN_10368800

int FUN_10368800(char *param_1)

{
  int iVar1;
  TArray<unsigned_char> *in_ECX;
  int iVar2;
  
  iVar1 = *(int *)(in_ECX + 4);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(char *)(iVar2 + *(int *)in_ECX) == *param_1) {
        TArray<unsigned_char>::Remove(in_ECX,iVar2,1);
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  return iVar1 - *(int *)(in_ECX + 4);
}


// ==== 10368850 FUN_10368850

void FUN_10368850(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f77c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103688b0 FUN_103688b0

void FUN_103688b0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f77e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10368910 FUN_10368910

void FUN_10368910(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7809;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10368960 FUN_10368960

int FUN_10368960(int param_1)

{
  int *in_ECX;
  
  return *in_ECX + param_1 * 0xc;
}


// ==== 10368980 FUN_10368980

void FUN_10368980(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7829;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103689e0 FUN_103689e0

void FUN_103689e0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7849;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10368a40 FUN_10368a40

void FUN_10368a40(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7869;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10368a90 FUN_10368a90

void FUN_10368a90(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7889;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10368ae0 FUN_10368ae0

void FUN_10368ae0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f78a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10368b30 FUN_10368b30

void FUN_10368b30(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f78c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10368ba0 FUN_10368ba0

void FUN_10368ba0(FArchive *param_1)

{
  FArray *in_ECX;
  
  FArray::CountBytes(in_ECX,param_1,0x14c);
  return;
}


// ==== 10368bc0 FUN_10368bc0

void FUN_10368bc0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f78e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10368c30 FUN_10368c30

void FUN_10368c30(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7909;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10368c90 FUN_10368c90

void FUN_10368c90(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7929;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10368cf0 FUN_10368cf0

void FUN_10368cf0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7949;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10368d50 FUN_10368d50

void FUN_10368d50(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7969;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10368dc0 FUN_10368dc0

void FUN_10368dc0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7989;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10368e10 FUN_10368e10

void FUN_10368e10(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f79a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10368e70 FUN_10368e70

void FUN_10368e70(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f79c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10368ec0 FUN_10368ec0

void FUN_10368ec0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f79e0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 8) < 0) {
    ExceptionList = &local_10;
    FArray::Empty((FArray *)(in_ECX + 0xc),1,0);
    *(int *)(in_ECX + 8) = -*(int *)(in_ECX + 8);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10368f1d Catch@10368f1d

void Catch_10368f1d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10368f31 Catch@10368f31

void Catch_10368f31(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TLazyArray::Unload");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10368fa0 FUN_10368fa0

void FUN_10368fa0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f79f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369010 FUN_10369010

void FUN_10369010(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7a19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369060 FUN_10369060

void FUN_10369060(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7a39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103690b0 FUN_103690b0

void FUN_103690b0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7a59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369110 FUN_10369110

void FUN_10369110(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7a79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369160 FUN_10369160

void FUN_10369160(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7a99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103691b0 FUN_103691b0

void FUN_103691b0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7ab9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369200 FUN_10369200

void FUN_10369200(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7ad9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369250 FUN_10369250

void FUN_10369250(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7af9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103692d0 FUN_103692d0

void FUN_103692d0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7b19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369320 FUN_10369320

void FUN_10369320(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7b39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369370 FUN_10369370

void FUN_10369370(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7b59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103693c0 FUN_103693c0

void FUN_103693c0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7b79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369410 FUN_10369410

void FUN_10369410(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7b99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369460 FUN_10369460

void FUN_10369460(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7bb9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103694b0 FUN_103694b0

void FUN_103694b0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7bd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369500 FUN_10369500

void FUN_10369500(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7bf9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369550 FUN_10369550

void FUN_10369550(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7c19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103695b0 FUN_103695b0

void FUN_103695b0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7c39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369600 FUN_10369600

void FUN_10369600(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7c59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369650 FUN_10369650

void FUN_10369650(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7c79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103696a0 FUN_103696a0

void FUN_103696a0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7c99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103696f0 FUN_103696f0

void FUN_103696f0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7cb9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369740 FUN_10369740

void FUN_10369740(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7cd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369790 FUN_10369790

void FUN_10369790(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7cf9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103697e0 FUN_103697e0

void FUN_103697e0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7d19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369830 FUN_10369830

void FUN_10369830(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7d39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369890 FUN_10369890

void FUN_10369890(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7d59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103698e0 FUN_103698e0

void FUN_103698e0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7d79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369930 FUN_10369930

void FUN_10369930(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7d99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369980 FUN_10369980

void FUN_10369980(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7db9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103699d0 FUN_103699d0

void FUN_103699d0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7dd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369a30 FUN_10369a30

void FUN_10369a30(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7df9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369a80 FUN_10369a80

void FUN_10369a80(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7e19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369af0 FUN_10369af0

void FUN_10369af0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7e39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369b40 FUN_10369b40

void FUN_10369b40(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7e59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369b90 FUN_10369b90

void FUN_10369b90(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7e79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369be0 FUN_10369be0

void FUN_10369be0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7e99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369c30 FUN_10369c30

void FUN_10369c30(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7eb9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369c80 FUN_10369c80

void FUN_10369c80(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7ed9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369cd0 FUN_10369cd0

void FUN_10369cd0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7ef9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369d20 FUN_10369d20

void FUN_10369d20(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7f19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369d70 FUN_10369d70

void FUN_10369d70(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7f3c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TArray<unsigned_short>::TArray<unsigned_short>((TArray<unsigned_short> *)(in_ECX + 3),param_1);
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = TLazyArray<unsigned_short>::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10369de0 FUN_10369de0

void FUN_10369de0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f7f78;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = TLazyArray<unsigned_short>::vftable;
  local_8 = 1;
  if ((int *)in_ECX[1] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[1] + 0x44))();
  }
  local_8 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(in_ECX + 3));
  ExceptionList = local_10;
  return;
}


// ==== 10369e47 Catch@10369e47

void Catch_10369e47(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10369e5b Catch@10369e5b

void Catch_10369e5b(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TLazyArray::~TLazyArray");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10369ea0 FUN_10369ea0

void FUN_10369ea0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f7f90;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 8) < 0) {
    ExceptionList = &local_10;
    TArray<unsigned_short>::Empty((TArray<unsigned_short> *)(in_ECX + 0xc),0);
    *(int *)(in_ECX + 8) = -*(int *)(in_ECX + 8);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10369efb Catch@10369efb

void Catch_10369efb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10369f0f Catch@10369f0f

void Catch_10369f0f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TLazyArray::Unload");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10369f50 FUN_10369f50

void FUN_10369f50(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7fa9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369fa0 FUN_10369fa0

void FUN_10369fa0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7fc9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10369ff0 FUN_10369ff0

void FUN_10369ff0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f7fe9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1036a040 FUN_1036a040

void FUN_1036a040(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8009;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1036a090 FUN_1036a090

void FUN_1036a090(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8029;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1036a0e0 FUN_1036a0e0

void FUN_1036a0e0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8049;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1036a130 FUN_1036a130

void FUN_1036a130(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8069;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1036a180 FUN_1036a180

void FUN_1036a180(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8089;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1036a1e0 FUN_1036a1e0

void FUN_1036a1e0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f80a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1036a240 FUN_1036a240

void FUN_1036a240(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f80c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1036a290 FUN_1036a290

void FUN_1036a290(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f80e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1036a300 FUN_1036a300

void FUN_1036a300(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8109;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1036a350 FUN_1036a350

void FUN_1036a350(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8129;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1036a3a0 FUN_1036a3a0

void FUN_1036a3a0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8149;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1036a410 FUN_1036a410

void FUN_1036a410(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8169;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1036a470 FUN_1036a470

void FUN_1036a470(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8189;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1036a4e0 FUN_1036a4e0

void FUN_1036a4e0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f81a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1036a540 FUN_1036a540

void FUN_1036a540(byte param_1)

{
  FMatrix *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f81c9;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FMatrix::~FMatrix(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1036a5b0 FUN_1036a5b0

void FUN_1036a5b0(byte param_1)

{
  FMatrix *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f81e9;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FMatrix::~FMatrix(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1036a620 FUN_1036a620

void FUN_1036a620(byte param_1)

{
  FMatrix *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f8209;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FMatrix::~FMatrix(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1036a690 FUN_1036a690

void FUN_1036a690(FString *param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8229;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  ExceptionList = local_c;
  return;
}


// ==== 1036a790 FUN_1036a790

void FUN_1036a790(FString *param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8249;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  ExceptionList = local_c;
  return;
}


// ==== 1036a8d0 FUN_1036a8d0

void FUN_1036a8d0(TArray<unsigned_short> *param_1)

{
  TArray<unsigned_short> *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8269;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TArray<unsigned_short>::TArray<unsigned_short>(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 1036a980 FUN_1036a980

void FUN_1036a980(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f828c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  TArray<unsigned_short>::TArray<unsigned_short>
            ((TArray<unsigned_short> *)(in_ECX + 2),(TArray<unsigned_short> *)(param_1 + 2));
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  ExceptionList = local_c;
  return;
}


// ==== 1036ab80 FUN_1036ab80

void FUN_1036ab80(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f82a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036acd0 FUN_1036acd0

void FUN_1036acd0(int param_1)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f82c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1,0xc);
  ExceptionList = local_c;
  return;
}


// ==== 1036ad30 FUN_1036ad30

void FUN_1036ad30(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f82e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036aec0 FUN_1036aec0

void FUN_1036aec0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8309;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036af50 FUN_1036af50

int FUN_1036af50(int param_1)

{
  int *in_ECX;
  
  return *in_ECX + param_1 * 0xc;
}


// ==== 1036afd0 FUN_1036afd0

void FUN_1036afd0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8329;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036b070 FUN_1036b070

void FUN_1036b070(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8349;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036b160 FUN_1036b160

void FUN_1036b160(int param_1)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8369;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1,0x14c);
  ExceptionList = local_c;
  return;
}


// ==== 1036b590 FUN_1036b590

void FUN_1036b590(int param_1)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8389;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1,4);
  ExceptionList = local_c;
  return;
}


// ==== 1036b640 FUN_1036b640

void FUN_1036b640(int param_1)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f83a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1,0x78);
  ExceptionList = local_c;
  return;
}


// ==== 1036b6e0 FUN_1036b6e0

void FUN_1036b6e0(int param_1)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f83c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1,8);
  ExceptionList = local_c;
  return;
}


// ==== 1036b760 FUN_1036b760

void FUN_1036b760(int param_1)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f83e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1,0x44);
  ExceptionList = local_c;
  return;
}


// ==== 1036b950 FUN_1036b950

void FUN_1036b950(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8409;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036b9d0 FUN_1036b9d0

void FUN_1036b9d0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8429;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036bbd0 FUN_1036bbd0

void FUN_1036bbd0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8449;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036bd10 FUN_1036bd10

void FUN_1036bd10(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8469;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036bd90 FUN_1036bd90

void FUN_1036bd90(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8489;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036be00 FUN_1036be00

void FUN_1036be00(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f84a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036bea0 FUN_1036bea0

void FUN_1036bea0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f84c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036bf20 FUN_1036bf20

void FUN_1036bf20(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f84e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036bfc0 FUN_1036bfc0

void FUN_1036bfc0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8509;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036c060 FUN_1036c060

void FUN_1036c060(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8529;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036c0e0 FUN_1036c0e0

void FUN_1036c0e0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8549;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036c160 FUN_1036c160

void FUN_1036c160(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8569;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036c1e0 FUN_1036c1e0

void FUN_1036c1e0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8589;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036c260 FUN_1036c260

void FUN_1036c260(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f85a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036c300 FUN_1036c300

void FUN_1036c300(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f85c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036c380 FUN_1036c380

void FUN_1036c380(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f85e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036c400 FUN_1036c400

void FUN_1036c400(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8609;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036c480 FUN_1036c480

void FUN_1036c480(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8629;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036c500 FUN_1036c500

void FUN_1036c500(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8649;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036c580 FUN_1036c580

void FUN_1036c580(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8669;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036c600 FUN_1036c600

void FUN_1036c600(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8689;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036c680 FUN_1036c680

void FUN_1036c680(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f86a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036c700 FUN_1036c700

void FUN_1036c700(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f86c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036c780 FUN_1036c780

void FUN_1036c780(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f86e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036c800 FUN_1036c800

void FUN_1036c800(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8709;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036c880 FUN_1036c880

void FUN_1036c880(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8729;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036c900 FUN_1036c900

void FUN_1036c900(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8749;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036c9a0 FUN_1036c9a0

void FUN_1036c9a0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8769;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036ca20 FUN_1036ca20

void FUN_1036ca20(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8789;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036caa0 FUN_1036caa0

void FUN_1036caa0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f87a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036cb20 FUN_1036cb20

void FUN_1036cb20(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f87c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036cbc0 FUN_1036cbc0

void FUN_1036cbc0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f87e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036cc40 FUN_1036cc40

void FUN_1036cc40(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8809;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036ccc0 FUN_1036ccc0

void FUN_1036ccc0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8829;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036cd40 FUN_1036cd40

void FUN_1036cd40(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8849;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036cdc0 FUN_1036cdc0

void FUN_1036cdc0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8869;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036ce60 FUN_1036ce60

void FUN_1036ce60(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8889;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036cee0 FUN_1036cee0

void FUN_1036cee0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f88a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036cf80 FUN_1036cf80

void FUN_1036cf80(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f88c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036d020 FUN_1036d020

void FUN_1036d020(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f88e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036d0c0 FUN_1036d0c0

void FUN_1036d0c0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8909;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036d140 FUN_1036d140

void FUN_1036d140(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8929;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036d1c0 FUN_1036d1c0

void FUN_1036d1c0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8949;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036d240 FUN_1036d240

void FUN_1036d240(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8969;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036d2c0 FUN_1036d2c0

void FUN_1036d2c0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8989;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036d340 FUN_1036d340

void FUN_1036d340(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f89a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036d3e0 FUN_1036d3e0

void FUN_1036d3e0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f89c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036d480 FUN_1036d480

void FUN_1036d480(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f89e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036d4e0 FUN_1036d4e0

void FUN_1036d4e0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8a09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036d580 FUN_1036d580

void FUN_1036d580(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8a29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036d600 FUN_1036d600

void FUN_1036d600(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8a49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036d680 FUN_1036d680

void FUN_1036d680(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8a69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036d700 FUN_1036d700

void FUN_1036d700(int param_1)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8a89;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1,4);
  ExceptionList = local_c;
  return;
}


// ==== 1036d7b0 FUN_1036d7b0

void FUN_1036d7b0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8aa9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1036db90 FUN_1036db90

void FUN_1036db90(int param_1)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8ac9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1,0xc);
  ExceptionList = local_c;
  return;
}


// ==== 1036dcc0 FUN_1036dcc0

void FUN_1036dcc0(int param_1)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8ae9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1,0xc);
  ExceptionList = local_c;
  return;
}


// ==== 1036dd90 FUN_1036dd90

void FUN_1036dd90(int param_1)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8b09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1,8);
  ExceptionList = local_c;
  return;
}


// ==== 1036df70 FUN_1036df70

void FUN_1036df70(int param_1)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8b29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1,4);
  ExceptionList = local_c;
  return;
}


// ==== 1036e140 FUN_1036e140

void FUN_1036e140(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8b49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036e1c0 FUN_1036e1c0

void FUN_1036e1c0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8b69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036e7a0 FUN_1036e7a0

void FUN_1036e7a0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8b89;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1036f3c0 FUN_1036f3c0

void FUN_1036f3c0(byte param_1)

{
  FRebuildOptions *in_ECX;
  
  FRebuildOptions::~FRebuildOptions(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1036f3f0 FUN_1036f3f0

void FUN_1036f3f0(byte param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f8bac;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(in_ECX + 0xc));
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1036f460 FUN_1036f460

void FUN_1036f460(byte param_1)

{
  FKeyValuePair *in_ECX;
  
  FKeyValuePair::~FKeyValuePair(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1036f490 FUN_1036f490

void FUN_1036f490(byte param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f8bcc;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FMatrix::~FMatrix((FMatrix *)(in_ECX + 8));
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1036f500 FUN_1036f500

void FUN_1036f500(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  FString::FString((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 4),(FString *)(param_1 + 4));
  ExceptionList = local_c;
  return;
}


// ==== 1036f5c0 FUN_1036f5c0

void FUN_1036f5c0(byte param_1)

{
  thunk_FUN_10588cf0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1036f620 FUN_1036f620

void FUN_1036f620(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8c1c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  FString::FString((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  in_ECX[4] = param_1[4];
  ExceptionList = local_c;
  return;
}


// ==== 1036f6d0 FUN_1036f6d0

void FUN_1036f6d0(byte param_1)

{
  thunk_FUN_10444ed0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1036f700 FUN_1036f700

void FUN_1036f700(byte param_1)

{
  thunk_FUN_104a1de0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1036f730 FUN_1036f730

void FUN_1036f730(byte param_1)

{
  thunk_FUN_104a1ca0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1036f760 FUN_1036f760

void FUN_1036f760(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f8c39;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1036f7b0 FUN_1036f7b0

void FUN_1036f7b0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f8c59;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1036f800 FUN_1036f800

void FUN_1036f800(void)

{
  TArray<unsigned_short> *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f8c79;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TArray<unsigned_short>::~TArray<unsigned_short>(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1036f850 FUN_1036f850

void FUN_1036f850(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f8c9c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(in_ECX + 8));
  ExceptionList = local_c;
  return;
}


// ==== 1036fa70 FUN_1036fa70

void FUN_1036fa70(int param_1)

{
  FArray *in_ECX;
  
  FArray::Empty(in_ECX,0x10,param_1);
  return;
}


// ==== 1036fe50 FUN_1036fe50

void FUN_1036fe50(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8cbc;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    ExceptionList = &local_c;
    do {
      local_4 = 0xffffffff;
      FMatrix::~FMatrix((FMatrix *)(*(int *)in_ECX + iVar1 + 8));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x48;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x48,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10370020 FUN_10370020

void FUN_10370020(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      (*(code *)**(undefined4 **)(iVar1 + *(int *)in_ECX))(0);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x2c;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x2c,param_1);
  return;
}


// ==== 10370070 FUN_10370070

void FUN_10370070(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      (*(code *)**(undefined4 **)(iVar1 + *(int *)in_ECX))(0);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x1c;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x1c,param_1);
  return;
}


// ==== 10370220 FUN_10370220

void FUN_10370220(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f8ce8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 0x10));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10370290 FUN_10370290

void FUN_10370290(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f8d0c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10370460 FUN_10370460

int FUN_10370460(int param_1,int param_2,int param_3)

{
  if ((param_2 <= param_1) && (param_2 = param_3, param_1 < param_3)) {
    param_2 = param_1;
  }
  return param_2;
}


// ==== 10370480 FUN_10370480

float10 FUN_10370480(float param_1)

{
  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  return (float10)param_1;
}


// ==== 103704b0 FUN_103704b0

float10 FUN_103704b0(float param_1,float param_2,float param_3)

{
  if ((param_2 <= param_1) && (param_2 = param_3, param_1 < param_3)) {
    return (float10)param_1;
  }
  return (float10)param_2;
}


// ==== 10370560 FUN_10370560

UObject * FUN_10370560(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&UMaterial::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
    UObject::GetFullName(param_1,(ushort *)0x0);
  }
  UObject::GetName((UObject *)&UMaterial::PrivateStaticClass);
  FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref);
  return param_1;
}


// ==== 103705f0 FUN_103705f0

void FUN_103705f0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,2);
  TArray<unsigned_short>::operator()((TArray<unsigned_short> *)param_2,iVar1);
  return;
}


// ==== 10370620 FUN_10370620

int FUN_10370620(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 10370640 FUN_10370640

int FUN_10370640(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 10370660 FUN_10370660

int FUN_10370660(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x2c);
  return iVar1 * 0x2c + *(int *)param_2;
}


// ==== 10370680 FUN_10370680

int FUN_10370680(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0xc);
  return *(int *)param_2 + iVar1 * 0xc;
}


// ==== 103706b0 FUN_103706b0

int FUN_103706b0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 103706d0 FUN_103706d0

int FUN_103706d0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 103707d0 FUN_103707d0

int FUN_103707d0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 103707f0 FUN_103707f0

int FUN_103707f0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x14c);
  return iVar1 * 0x14c + *(int *)param_2;
}


// ==== 10370820 FUN_10370820

int FUN_10370820(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x1c);
  return *(int *)param_2 + iVar1 * 0x1c;
}


// ==== 10370850 FUN_10370850

int FUN_10370850(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x10);
  return iVar1 * 0x10 + *(int *)param_2;
}


// ==== 10370870 FUN_10370870

int FUN_10370870(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0xc);
  return *(int *)param_2 + iVar1 * 0xc;
}


// ==== 103708a0 FUN_103708a0

int FUN_103708a0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x2c);
  return iVar1 * 0x2c + *(int *)param_2;
}


// ==== 103708c0 FUN_103708c0

int FUN_103708c0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 103708e0 FUN_103708e0

int FUN_103708e0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,8);
  return *(int *)param_2 + iVar1 * 8;
}


// ==== 10370900 FUN_10370900

int FUN_10370900(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x28);
  return *(int *)param_2 + iVar1 * 0x28;
}


// ==== 10370930 FUN_10370930

int FUN_10370930(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x40);
  return iVar1 * 0x40 + *(int *)param_2;
}


// ==== 10370950 FUN_10370950

int FUN_10370950(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x10);
  return iVar1 * 0x10 + *(int *)param_2;
}


// ==== 10370970 FUN_10370970

int FUN_10370970(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 10370990 FUN_10370990

int FUN_10370990(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x1c);
  return *(int *)param_2 + iVar1 * 0x1c;
}


// ==== 103709c0 FUN_103709c0

int FUN_103709c0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x18);
  return *(int *)param_2 + iVar1 * 0x18;
}


// ==== 103709f0 FUN_103709f0

int FUN_103709f0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x28);
  return *(int *)param_2 + iVar1 * 0x28;
}


// ==== 10370a20 FUN_10370a20

int FUN_10370a20(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x14);
  return *(int *)param_2 + iVar1 * 0x14;
}


// ==== 10370a50 FUN_10370a50

int FUN_10370a50(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 10370a70 FUN_10370a70

int FUN_10370a70(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x28);
  return *(int *)param_2 + iVar1 * 0x28;
}


// ==== 10370aa0 FUN_10370aa0

int FUN_10370aa0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x38);
  return *(int *)param_2 + iVar1 * 0x38;
}


// ==== 10370ad0 FUN_10370ad0

int FUN_10370ad0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x6c);
  return iVar1 * 0x6c + *(int *)param_2;
}


// ==== 10370af0 FUN_10370af0

int FUN_10370af0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x78);
  return *(int *)param_2 + iVar1 * 0x78;
}


// ==== 10370b20 FUN_10370b20

int FUN_10370b20(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,8);
  return *(int *)param_2 + iVar1 * 8;
}


// ==== 10370b40 FUN_10370b40

int FUN_10370b40(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x44);
  return *(int *)param_2 + iVar1 * 0x44;
}


// ==== 10370b70 FUN_10370b70

int FUN_10370b70(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x14);
  return *(int *)param_2 + iVar1 * 0x14;
}


// ==== 10370ba0 FUN_10370ba0

int FUN_10370ba0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 10370bc0 FUN_10370bc0

int FUN_10370bc0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x34);
  return iVar1 * 0x34 + *(int *)param_2;
}


// ==== 10370be0 FUN_10370be0

int FUN_10370be0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x1c);
  return *(int *)param_2 + iVar1 * 0x1c;
}


// ==== 10370c10 FUN_10370c10

int FUN_10370c10(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0xac);
  return iVar1 * 0xac + *(int *)param_2;
}


// ==== 10370c40 FUN_10370c40

int FUN_10370c40(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,8);
  return *(int *)param_2 + iVar1 * 8;
}


// ==== 10370c60 FUN_10370c60

int FUN_10370c60(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,8);
  return *(int *)param_2 + iVar1 * 8;
}


// ==== 10370c80 FUN_10370c80

int FUN_10370c80(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x10);
  return iVar1 * 0x10 + *(int *)param_2;
}


// ==== 10370ca0 FUN_10370ca0

int FUN_10370ca0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0xc);
  return *(int *)param_2 + iVar1 * 0xc;
}


// ==== 10370cf0 FUN_10370cf0

int FUN_10370cf0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x10);
  return iVar1 * 0x10 + *(int *)param_2;
}


// ==== 10370d10 FUN_10370d10

int FUN_10370d10(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x44);
  return *(int *)param_2 + iVar1 * 0x44;
}


// ==== 10370d40 FUN_10370d40

int FUN_10370d40(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x4c);
  return iVar1 * 0x4c + *(int *)param_2;
}


// ==== 10370d60 FUN_10370d60

int FUN_10370d60(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x48);
  return *(int *)param_2 + iVar1 * 0x48;
}


// ==== 10370d90 FUN_10370d90

int FUN_10370d90(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x58);
  return iVar1 * 0x58 + *(int *)param_2;
}


// ==== 10370dd0 FUN_10370dd0

int FUN_10370dd0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 10370df0 FUN_10370df0

int FUN_10370df0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 10370e60 FUN_10370e60

int FUN_10370e60(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x18);
  return *(int *)param_2 + iVar1 * 0x18;
}


// ==== 10370e90 FUN_10370e90

int FUN_10370e90(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x2c);
  return iVar1 * 0x2c + *(int *)param_2;
}


// ==== 10371590 FUN_10371590

int FUN_10371590(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 10371610 FUN_10371610

int FUN_10371610(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0xc);
  return *(int *)param_2 + iVar1 * 0xc;
}


// ==== 10371640 FUN_10371640

int FUN_10371640(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0xc);
  return *(int *)param_2 + iVar1 * 0xc;
}


// ==== 10371670 FUN_10371670

int FUN_10371670(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 103717a0 FUN_103717a0

int FUN_103717a0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x3c);
  return *(int *)param_2 + iVar1 * 0x3c;
}


// ==== 103717d0 FUN_103717d0

int FUN_103717d0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x118);
  return iVar1 * 0x118 + *(int *)param_2;
}


// ==== 10371800 FUN_10371800

int FUN_10371800(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 10371820 FUN_10371820

int FUN_10371820(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x10);
  return iVar1 * 0x10 + *(int *)param_2;
}


// ==== 10371860 FUN_10371860

int FUN_10371860(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x20);
  return iVar1 * 0x20 + *(int *)param_2;
}


// ==== 10371880 FUN_10371880

int FUN_10371880(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x5c);
  return iVar1 * 0x5c + *(int *)param_2;
}


// ==== 103718a0 FUN_103718a0

int FUN_103718a0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 103718c0 FUN_103718c0

int FUN_103718c0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,8);
  return *(int *)param_2 + iVar1 * 8;
}


// ==== 103718e0 FUN_103718e0

int FUN_103718e0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0xc);
  return *(int *)param_2 + iVar1 * 0xc;
}


// ==== 10371910 FUN_10371910

int FUN_10371910(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,8);
  return *(int *)param_2 + iVar1 * 8;
}


// ==== 10371930 FUN_10371930

int FUN_10371930(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x10);
  return iVar1 * 0x10 + *(int *)param_2;
}


// ==== 10371950 FUN_10371950

int FUN_10371950(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x10);
  return iVar1 * 0x10 + *(int *)param_2;
}


// ==== 10371970 FUN_10371970

int FUN_10371970(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x28);
  return *(int *)param_2 + iVar1 * 0x28;
}


// ==== 103719a0 FUN_103719a0

int FUN_103719a0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0xc);
  return *(int *)param_2 + iVar1 * 0xc;
}


// ==== 103719d0 FUN_103719d0

int FUN_103719d0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x10);
  return iVar1 * 0x10 + *(int *)param_2;
}


// ==== 103719f0 FUN_103719f0

int FUN_103719f0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x34);
  return iVar1 * 0x34 + *(int *)param_2;
}


// ==== 10371a10 FUN_10371a10

int FUN_10371a10(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x20);
  return iVar1 * 0x20 + *(int *)param_2;
}


// ==== 10371a30 FUN_10371a30

int FUN_10371a30(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,8);
  return *(int *)param_2 + iVar1 * 8;
}


// ==== 10371a50 FUN_10371a50

int FUN_10371a50(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x30);
  return iVar1 * 0x30 + *(int *)param_2;
}


// ==== 10371ad0 FUN_10371ad0

int FUN_10371ad0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x70);
  return iVar1 * 0x70 + *(int *)param_2;
}


// ==== 10371af0 FUN_10371af0

int FUN_10371af0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x3c);
  return *(int *)param_2 + iVar1 * 0x3c;
}


// ==== 10371b20 FUN_10371b20

int FUN_10371b20(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x2c);
  return iVar1 * 0x2c + *(int *)param_2;
}


// ==== 10371b70 FUN_10371b70

int FUN_10371b70(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 10371b90 FUN_10371b90

int FUN_10371b90(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x40);
  return iVar1 * 0x40 + *(int *)param_2;
}


// ==== 10371bb0 FUN_10371bb0

int FUN_10371bb0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x174);
  return iVar1 * 0x174 + *(int *)param_2;
}


// ==== 10371be0 FUN_10371be0

int FUN_10371be0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x10);
  return iVar1 * 0x10 + *(int *)param_2;
}


// ==== 10371c00 FUN_10371c00

int FUN_10371c00(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 10371c20 FUN_10371c20

int FUN_10371c20(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x10);
  return iVar1 * 0x10 + *(int *)param_2;
}


// ==== 10371c40 FUN_10371c40

int FUN_10371c40(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0xc);
  return *(int *)param_2 + iVar1 * 0xc;
}


// ==== 10371c70 FUN_10371c70

int FUN_10371c70(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x5c);
  return iVar1 * 0x5c + *(int *)param_2;
}


// ==== 10371c90 FUN_10371c90

int FUN_10371c90(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x74);
  return iVar1 * 0x74 + *(int *)param_2;
}


// ==== 10371cb0 FUN_10371cb0

int FUN_10371cb0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x10);
  return iVar1 * 0x10 + *(int *)param_2;
}


// ==== 10371cd0 FUN_10371cd0

int FUN_10371cd0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x2c);
  return iVar1 * 0x2c + *(int *)param_2;
}


// ==== 10371cf0 FUN_10371cf0

int FUN_10371cf0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x1c);
  return *(int *)param_2 + iVar1 * 0x1c;
}


// ==== 10371d20 FUN_10371d20

int FUN_10371d20(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x24);
  return *(int *)param_2 + iVar1 * 0x24;
}


// ==== 10371d50 FUN_10371d50

int FUN_10371d50(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x38);
  return *(int *)param_2 + iVar1 * 0x38;
}


// ==== 10371d80 FUN_10371d80

int FUN_10371d80(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x20);
  return iVar1 * 0x20 + *(int *)param_2;
}


// ==== 10371da0 FUN_10371da0

int FUN_10371da0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x24);
  return *(int *)param_2 + iVar1 * 0x24;
}


// ==== 10371dd0 FUN_10371dd0

int FUN_10371dd0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x10);
  return iVar1 * 0x10 + *(int *)param_2;
}


// ==== 10371e20 FUN_10371e20

int FUN_10371e20(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0xc);
  return *(int *)param_2 + iVar1 * 0xc;
}


// ==== 10371e50 FUN_10371e50

int FUN_10371e50(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,4);
  return *(int *)param_2 + iVar1 * 4;
}


// ==== 10371e70 FUN_10371e70

int FUN_10371e70(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x18);
  return *(int *)param_2 + iVar1 * 0x18;
}


// ==== 10371ea0 FUN_10371ea0

int FUN_10371ea0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x14);
  return *(int *)param_2 + iVar1 * 0x14;
}


// ==== 10371ed0 FUN_10371ed0

int FUN_10371ed0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x14);
  return *(int *)param_2 + iVar1 * 0x14;
}


// ==== 10371f00 FUN_10371f00

int FUN_10371f00(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x1c);
  return *(int *)param_2 + iVar1 * 0x1c;
}


// ==== 10371f30 FUN_10371f30

int FUN_10371f30(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x10);
  return iVar1 * 0x10 + *(int *)param_2;
}


// ==== 10371f50 FUN_10371f50

int FUN_10371f50(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x68);
  return iVar1 * 0x68 + *(int *)param_2;
}


// ==== 10371fc0 FUN_10371fc0

int FUN_10371fc0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x18);
  return *(int *)param_2 + iVar1 * 0x18;
}


// ==== 10371ff0 FUN_10371ff0

int FUN_10371ff0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,8);
  return *(int *)param_2 + iVar1 * 8;
}


// ==== 10372010 FUN_10372010

int FUN_10372010(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x20);
  return iVar1 * 0x20 + *(int *)param_2;
}


// ==== 10372030 FUN_10372030

int FUN_10372030(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x14);
  return *(int *)param_2 + iVar1 * 0x14;
}


// ==== 10372060 FUN_10372060

int FUN_10372060(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x14);
  return *(int *)param_2 + iVar1 * 0x14;
}


// ==== 10372090 FUN_10372090

int FUN_10372090(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x54);
  return iVar1 * 0x54 + *(int *)param_2;
}


// ==== 103720b0 FUN_103720b0

int FUN_103720b0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x2c);
  return iVar1 * 0x2c + *(int *)param_2;
}


// ==== 103720d0 FUN_103720d0

int FUN_103720d0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x104);
  return iVar1 * 0x104 + *(int *)param_2;
}


// ==== 10372100 FUN_10372100

int FUN_10372100(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x14);
  return *(int *)param_2 + iVar1 * 0x14;
}


// ==== 103721b0 FUN_103721b0

int FUN_103721b0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x34);
  return iVar1 * 0x34 + *(int *)param_2;
}


// ==== 103721d0 FUN_103721d0

int FUN_103721d0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x20);
  return iVar1 * 0x20 + *(int *)param_2;
}


// ==== 10372250 FUN_10372250

int FUN_10372250(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,8);
  return *(int *)param_2 + iVar1 * 8;
}


// ==== 10372270 FUN_10372270

int FUN_10372270(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  
  iVar1 = FArray::Add(param_2,1,0x1c);
  return *(int *)param_2 + iVar1 * 0x1c;
}


// ==== 103722d0 FUN_103722d0

void FUN_103722d0(int param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  ushort *puVar3;
  ushort *puVar4;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f8d20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar2 = UClass::GetDefaultObject(pUVar1);
  puVar3 = FString::operator*((FString *)(pUVar2 + 0x470));
  pUVar1 = UObject::GetClass(in_ECX);
  pUVar2 = UClass::GetDefaultObject(pUVar1);
  puVar4 = FString::operator*((FString *)(pUVar2 + 0x428));
  appCreateProc(puVar4,puVar3);
  ExceptionList = local_10;
  return;
}


// ==== 10372383 Catch@10372383

void Catch_10372383(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10372397 Catch@10372397

void Catch_10372397(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AStatLog::execBatchLocal");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10372430 FUN_10372430

void FUN_10372430(int param_1)

{
  byte bVar1;
  FString *pFVar2;
  ushort *puVar3;
  ushort *puVar4;
  FString *pFVar5;
  FString local_40 [12];
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_107f8d4b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = (FString *)(**(code **)(**(int **)GFileManager_exref + 0x38))(local_40);
  local_8._0_1_ = 2;
  pFVar2 = (FString *)FString::operator*(pFVar2,local_34);
  local_8._0_1_ = 3;
  pFVar5 = (FString *)0x0;
  puVar4 = (ushort *)0x0;
  puVar3 = FString::operator*(pFVar2);
  appLaunchURL(puVar3,puVar4,pFVar5);
  local_8._0_1_ = 2;
  FString::~FString(local_34);
  local_8._0_1_ = 1;
  FString::~FString(local_40);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 1037252c Catch@1037252c

void Catch_1037252c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10372540 Catch@10372540

void Catch_10372540(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AStatLog::execBrowseRelativeLocalURL");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103725f0 FUN_103725f0

void FUN_103725f0(int param_1,FString *param_2)

{
  undefined1 *puVar1;
  FString *pFVar2;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_107f8d69;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  puVar1 = &stack0xffffffcc;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  pFVar2 = (FString *)appGetGMTRef();
  local_8._0_1_ = 1;
  FString::operator=(param_2,pFVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10372684 Catch@10372684

void Catch_10372684(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10372698 Catch@10372698

void Catch_10372698(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AStatLog::execGetGMTRef");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10372720 FUN_10372720

void FUN_10372720(int param_1,FString *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f8d80;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::operator=(param_2,(FString *)(*(int *)(in_ECX + 0xe4) + 0x94));
  ExceptionList = local_10;
  return;
}


// ==== 103727a1 Catch@103727a1

void Catch_103727a1(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 103727b5 Catch@103727b5

void Catch_103727b5(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AStatLog::execGetMapFileName");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10372840 FUN_10372840

void FUN_10372840(int param_1)

{
  byte bVar1;
  FString *pFVar2;
  FString *this;
  FString local_38 [12];
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_107f8da2;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_8 = 0;
  local_18 = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  ExceptionList = &local_10;
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,&local_18);
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this = local_2c;
  }
  else {
    this = *(FString **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  pFVar2 = (FString *)FString::Printf((ushort *)local_38,L"NoChecksum");
  local_8._0_1_ = 2;
  FString::operator=(this,pFVar2);
  local_8._0_1_ = 1;
  FString::~FString(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10372960 Catch@10372960

void Catch_10372960(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10372974 Catch@10372974

void Catch_10372974(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AStatLog::execGetPlayerChecksum");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10372a20 FUN_10372a20

void FUN_10372a20(int param_1)

{
  int iVar1;
  ushort *puVar2;
  undefined4 uVar3;
  FMD5Context *pFVar4;
  int in_ECX;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f8dc0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  (**(code **)(**(int **)GFileManager_exref + 0x28))(L"..\\Logs",0);
  iVar1 = **(int **)GFileManager_exref;
  uVar3 = *(undefined4 *)GNull_exref;
  uVar5 = 4;
  puVar2 = FString::operator*((FString *)(in_ECX + 0x498));
  uVar3 = (**(code **)(iVar1 + 0xc))(puVar2,uVar5,uVar3);
  *(undefined4 *)(in_ECX + 0x494) = uVar3;
  if ((*(byte *)(in_ECX + 0x3c0) & 1) != 0) {
    pFVar4 = (FMD5Context *)thunk_FUN_1032ffc0(0x58);
    *(FMD5Context **)(in_ECX + 0x3bc) = pFVar4;
    appMD5Init(pFVar4);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10372af9 Catch@10372af9

void Catch_10372af9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10372b0d Catch@10372b0d

void Catch_10372b0d(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AStatLogFile::execOpenLog");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10372bb0 FUN_10372bb0

void FUN_10372bb0(int param_1)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f8dd0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(in_ECX + 0x3bc) != 0) {
    thunk_FUN_103254a0(*(int *)(in_ECX + 0x3bc));
  }
  *(undefined4 *)(in_ECX + 0x3bc) = 0;
  if (*(undefined4 **)(in_ECX + 0x494) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x494))(1);
  }
  *(undefined4 *)(in_ECX + 0x494) = 0;
  iVar1 = **(int **)GFileManager_exref;
  uVar6 = 1;
  uVar5 = 1;
  uVar4 = 1;
  puVar2 = FString::operator*((FString *)(in_ECX + 0x498));
  puVar3 = FString::operator*((FString *)(in_ECX + 0x4a4));
  (**(code **)(iVar1 + 0x1c))(puVar3,puVar2,uVar4,uVar5,uVar6);
  ExceptionList = local_10;
  return;
}


// ==== 10372c80 Catch@10372c80

void Catch_10372c80(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10372c94 Catch@10372c94

void Catch_10372c94(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AStatLogFile::execCloseLog");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10372d30 FUN_10372d30

void FUN_10372d30(int param_1)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  int in_ECX;
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_107f8de9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::FString(local_28);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_28);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  FString::operator+=(local_28,(ushort *)&DAT_10851e60);
  iVar2 = FString::Len(local_28);
  iVar2 = iVar2 * 2;
  puVar3 = FString::operator*(local_28);
  appMD5Update(*(FMD5Context **)(in_ECX + 0x3bc),(uchar *)puVar3,iVar2);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return;
}


// ==== 10372e09 Catch@10372e09

void Catch_10372e09(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10372e1d Catch@10372e1d

void Catch_10372e1d(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AStatLogFile::execWatermark");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10372ec0 FUN_10372ec0

void FUN_10372ec0(int param_1)

{
  byte bVar1;
  int iVar2;
  FString *pFVar3;
  int in_ECX;
  FString *this;
  byte local_58 [32];
  FString local_38 [12];
  FString local_2c [20];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_107f8e12;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff9c;
  local_8 = 0;
  ExceptionList = &local_10;
  FString::FString(local_2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)GPropAddr_exref = 0;
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_2c);
  if (*(int *)GPropObject_exref != 0) {
    (**(code **)(**(int **)GPropObject_exref + 0x60))(*(undefined4 *)GProperty_exref);
  }
  if (*(int *)GPropAddr_exref == 0) {
    this = local_2c;
  }
  else {
    this = *(FString **)GPropAddr_exref;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  local_58[0x10] = 0x4d;
  local_58[0x15] = 0x70;
  local_58[0x12] = 0x79;
  local_58[0x13] = 0x66;
  local_58[0x11] = 0x34;
  local_58[0x1b] = 100;
  local_58[0x17] = 0x39;
  local_58[0x14] = 0x47;
  local_58[0x1c] = 0x44;
  local_58[0x16] = 0x36;
  local_58[0x19] = 0x65;
  local_58[0x1a] = 0x4a;
  local_58[0x1e] = 0x31;
  local_58[0x1f] = 0x71;
  local_58[0x18] = 0x6b;
  local_58[0x1d] = 0x56;
  appMD5Update(*(FMD5Context **)(in_ECX + 0x3bc),local_58 + 0x10,0x10);
  appMD5Final(local_58,*(FMD5Context **)(in_ECX + 0x3bc));
  local_18 = 0;
  while (iVar2 = local_18, local_18 < 0x10) {
    pFVar3 = (FString *)
             FString::Printf((ushort *)(local_58 + 0x20),L"%02x",(uint)local_58[local_18]);
    local_8._0_1_ = 2;
    FString::operator+=(this,pFVar3);
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString((FString *)(local_58 + 0x20));
    local_18 = iVar2 + 1;
  }
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_2c);
  ExceptionList = local_10;
  return;
}


// ==== 10373052 Catch@10373052

void Catch_10373052(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10373066 Catch@10373066

void Catch_10373066(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AStatLogFile::execGetChecksum");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10373130 FUN_10373130

void FUN_10373130(int param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f8e30;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  if (*(int *)(in_ECX + 0x494) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x494) + 0x54))();
  }
  ExceptionList = local_10;
  return;
}


// ==== 103731b2 Catch@103731b2

void Catch_103731b2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 103731c6 Catch@103731c6

void Catch_103731c6(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AStatLogFile::execFileFlush");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10373250 FUN_10373250

void FUN_10373250(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  FString *pFVar5;
  int in_ECX;
  undefined *puVar6;
  FString local_5c [12];
  FString local_50 [12];
  FString local_44 [12];
  FString local_38 [20];
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_107f8e64;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff98;
  local_8 = 0;
  ExceptionList = &local_10;
  local_24 = in_ECX;
  FString::FString(local_50);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = **(byte **)(param_1 + 0xc);
  *(byte **)(param_1 + 0xc) = *(byte **)(param_1 + 0xc) + 1;
  (**(code **)(GNatives_exref + (uint)bVar1 * 4))(param_1,local_50);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (**(char **)(param_1 + 0xc) == 'B') {
    *(char **)(param_1 + 0xc) = *(char **)(param_1 + 0xc) + 1;
    (**(code **)(GNatives_exref + 0x108))(param_1,0);
  }
  puVar6 = &DAT_10851e60;
  FString::operator+(local_50,(ushort *)local_38);
  local_8._0_1_ = 2;
  if ((*(byte *)(in_ECX + 0x3c0) & 1) == 0) {
    if (*(int *)(in_ECX + 0x494) != 0) {
      iVar2 = **(int **)(in_ECX + 0x494);
      iVar3 = FString::Len(local_38);
      iVar3 = iVar3 * 2;
      puVar4 = FString::operator*(local_38);
      (**(code **)(iVar2 + 4))(puVar4,iVar3,puVar6);
    }
  }
  else {
    FString::FString(local_44);
    local_8._0_1_ = 3;
    local_20 = 0;
    while( true ) {
      iVar2 = local_20;
      iVar3 = FString::Len(local_38);
      if (iVar3 <= iVar2) break;
      local_18 = 0;
      puVar4 = FString::operator*(local_38);
      for (local_1c = 0; local_1c < 2; local_1c = local_1c + 1) {
        *(byte *)((int)&local_18 + local_1c) = *(byte *)((int)puVar4 + local_1c + iVar2 * 2) ^ 0xa7;
      }
      pFVar5 = (FString *)FString::Printf((ushort *)local_5c,&DAT_1085ad88,local_18 & 0xffff);
      local_8._0_1_ = 4;
      FString::operator+=(local_44,pFVar5);
      local_8._0_1_ = 3;
      FString::~FString(local_5c);
      local_20 = iVar2 + 1;
    }
    if (*(int *)(local_24 + 0x494) != 0) {
      iVar2 = **(int **)(local_24 + 0x494);
      iVar3 = FString::Len(local_44);
      iVar3 = iVar3 * 2;
      puVar4 = FString::operator*(local_44);
      (**(code **)(iVar2 + 4))(puVar4,iVar3);
    }
    local_8._0_1_ = 2;
    FString::~FString(local_44);
  }
  local_8._0_1_ = 1;
  FString::~FString(local_38);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString(local_50);
  ExceptionList = local_10;
  return;
}


// ==== 10373433 Catch@10373433

void Catch_10373433(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 10373447 Catch@10373447

void Catch_10373447(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_10851d80,L"AStatLogFile::execFileLog");
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar1 + 0xc) - *(int *)(*(UObject **)(iVar1 + 4) + 0x54);
  puVar2 = UObject::GetFullName(*(UObject **)(iVar1 + 4),(ushort *)0x0);
  puVar3 = UObject::GetFullName(*(UObject **)(iVar1 + 8),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s @ %s : %04X)",puVar3,puVar2,iVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103735f0 FUN_103735f0

int FUN_103735f0(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,param_1,4);
  if (*(int *)GUndo_exref != 0) {
    (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
  }
  return iVar1;
}


// ==== 10373650 FUN_10373650

int FUN_10373650(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,param_1,4);
  if (*(int *)GUndo_exref != 0) {
    (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
  }
  return iVar1;
}


// ==== 10373780 FUN_10373780

UObject * FUN_10373780(UObject *param_1)

{
  int iVar1;
  
  if (param_1 != (UObject *)0x0) {
    iVar1 = UObject::IsA(param_1,&AStatLog::PrivateStaticClass);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}


// ==== 103737b0 FUN_103737b0

void FUN_103737b0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  do {
    in_ECX[1] = in_ECX[1] + 1;
    iVar1 = in_ECX[1];
    if (*(int *)(GObjObjects_exref + 4) <= iVar1) {
      return;
    }
  } while ((*(int *)(*(int *)GObjObjects_exref + iVar1 * 4) == 0) ||
          (iVar1 = UObject::IsA(*(UObject **)(*(int *)GObjObjects_exref + iVar1 * 4),
                                (UClass *)*in_ECX), iVar1 == 0));
  return;
}


// ==== 10373830 FUN_10373830

float10 FUN_10373830(float *param_1,float *param_2)

{
  double dVar1;
  
  dVar1 = appSqrt((double)((param_2[1] - param_1[1]) * (param_2[1] - param_1[1]) +
                           (*param_2 - *param_1) * (*param_2 - *param_1) +
                          (param_2[2] - param_1[2]) * (param_2[2] - param_1[2])));
  return (float10)(float)dVar1;
}


// ==== 103738c0 FUN_103738c0

FRebuildOptions * FUN_103738c0(FRebuildOptions *param_1)

{
  FString *in_ECX;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107f8ea1;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FString::operator=(in_ECX,(FString *)&stack0x00000008);
  *(undefined4 *)(in_ECX + 0xc) = in_stack_00000014;
  *(undefined4 *)(in_ECX + 0x10) = in_stack_00000018;
  *(undefined4 *)(in_ECX + 0x18) = in_stack_00000020;
  *(undefined4 *)(in_ECX + 0x14) = in_stack_0000001c;
  *(undefined4 *)(in_ECX + 0x1c) = in_stack_00000024;
  *(undefined4 *)(in_ECX + 0x24) = in_stack_0000002c;
  *(undefined4 *)(in_ECX + 0x20) = in_stack_00000028;
  *(undefined4 *)(in_ECX + 0x28) = in_stack_00000030;
  FRebuildOptions::FRebuildOptions(param_1,(FRebuildOptions *)in_ECX);
  local_4 = local_4 & 0xffffff00;
  FRebuildOptions::~FRebuildOptions((FRebuildOptions *)&stack0x00000008);
  ExceptionList = local_c;
  return param_1;
}


// ==== 10373990 FUN_10373990

undefined4 FUN_10373990(float *param_1)

{
  float fVar1;
  float *in_ECX;
  
  fVar1 = in_ECX[5] * (in_ECX[2] - param_1[2]) +
          in_ECX[3] * (*in_ECX - *param_1) + in_ECX[4] * (in_ECX[1] - param_1[1]);
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (fVar1 < 0.01) {
    fVar1 = param_1[5] * in_ECX[5] + param_1[3] * in_ECX[3] + param_1[4] * in_ECX[4];
    if (fVar1 < 0.0) {
      fVar1 = -fVar1;
    }
    if (0.9999 < fVar1) {
      return 1;
    }
  }
  return 0;
}


// ==== 10373a80 FUN_10373a80

void FUN_10373a80(UPrimitive *param_1)

{
  if (param_1 != (UPrimitive *)0x0) {
    UPrimitive::UPrimitive(param_1);
    return;
  }
  return;
}


// ==== 10373aa0 FUN_10373aa0

void FUN_10373aa0(float *param_1)

{
  int iVar1;
  undefined1 *in_ECX;
  
  iVar1 = appFloor(param_1[2] * 255.0);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  *in_ECX = (char)iVar1;
  iVar1 = appFloor(param_1[1] * 255.0);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  in_ECX[1] = (char)iVar1;
  iVar1 = appFloor(*param_1 * 255.0);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  in_ECX[2] = (char)iVar1;
  iVar1 = appFloor(param_1[3] * 255.0);
  if (iVar1 < 0) {
    in_ECX[3] = 0;
    return;
  }
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  in_ECX[3] = (char)iVar1;
  return;
}


// ==== 10373bc0 FUN_10373bc0

FColor * FUN_10373bc0(void)

{
  FPlane *pFVar1;
  byte *in_ECX;
  FColor *unaff_retaddr;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 local_10 [16];
  
  local_20 = (float)in_ECX[2] / 255.0;
  local_1c = (float)in_ECX[1] / 255.0;
  local_18 = (float)*in_ECX / 255.0;
  local_14 = (float)in_ECX[3] / 255.0;
  pFVar1 = (FPlane *)FPlane::operator*((FPlane *)&local_20,(float)local_10);
  FColor::FColor(unaff_retaddr,pFVar1);
  return unaff_retaddr;
}


// ==== 10373c80 FUN_10373c80

void FUN_10373c80(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f8ed0;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10373cf0 FUN_10373cf0

void FUN_10373cf0(void *param_1)

{
  int in_ECX;
  
  _memcpy(param_1,*(void **)(in_ECX + 0xc),*(int *)(in_ECX + 0x10) * 0xc);
  return;
}


// ==== 10373d20 FUN_10373d20

void FUN_10373d20(int *param_1,int param_2)

{
  int in_ECX;
  
  *param_1 = *(int *)(in_ECX + 0xc) + param_2 * 0xc;
  return;
}


// ==== 10373d40 FUN_10373d40

undefined4 FUN_10373d40(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x44);
}


// ==== 10373d50 FUN_10373d50

undefined4 FUN_10373d50(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x44);
}


// ==== 10373d60 FUN_10373d60

undefined4 FUN_10373d60(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x44);
}


// ==== 10373d70 FUN_10373d70

undefined4 FUN_10373d70(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x44);
}


// ==== 10373d80 FUN_10373d80

undefined4 FUN_10373d80(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x44);
}


// ==== 10373d90 FUN_10373d90

void FUN_10373d90(UIndexBuffer *param_1)

{
  if (param_1 != (UIndexBuffer *)0x0) {
    UIndexBuffer::UIndexBuffer(param_1);
    return;
  }
  return;
}


// ==== 10373db0 FUN_10373db0

FColor * FUN_10373db0(FColor *param_1,float param_2)

{
  float fVar1;
  FPlane *pFVar2;
  FPlane *pFVar3;
  uint uVar4;
  uint uVar5;
  FColor *in_ECX;
  bool bVar6;
  double dVar7;
  undefined1 *puVar8;
  undefined1 local_70 [16];
  FPlane local_60 [32];
  FPlane local_40 [16];
  undefined1 local_30 [24];
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f8ee0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff84;
  local_8 = 0;
  fVar1 = (*(float *)(in_ECX + 0xc) + param_2) / *(float *)(in_ECX + 8);
  if (*(int *)(in_ECX + 0x10) == 1) {
    ExceptionList = &local_10;
    local_14 = &stack0xffffff84;
    dVar7 = appCos((double)(fVar1 * 3.1415927 * 0.5));
    local_18 = 1.0 - (float)((float10)0.5 + (float10)dVar7 * (float10)0.5);
    pFVar3 = local_40;
    pFVar2 = (FPlane *)FColor::Plane(in_ECX + 4);
    FPlane::operator*(pFVar2,(float)pFVar3);
    pFVar3 = local_60;
    puVar8 = local_70;
  }
  else {
    if (*(int *)(in_ECX + 0x10) != 2) {
      *(undefined4 *)param_1 = *(undefined4 *)in_ECX;
      return param_1;
    }
    ExceptionList = &local_10;
    uVar4 = appFloor(fVar1);
    uVar5 = uVar4 & 0x80000001;
    bVar6 = uVar5 == 0;
    if ((int)uVar5 < 0) {
      bVar6 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
    }
    fVar1 = fVar1 - (float)(int)uVar4;
    if (bVar6) {
      fVar1 = 1.0 - fVar1;
    }
    local_18 = 1.0 - fVar1;
    pFVar3 = local_60;
    pFVar2 = (FPlane *)FColor::Plane(in_ECX + 4);
    FPlane::operator*(pFVar2,(float)pFVar3);
    pFVar3 = local_40;
    puVar8 = local_30;
  }
  pFVar2 = (FPlane *)FColor::Plane(in_ECX);
  pFVar2 = (FPlane *)FPlane::operator*(pFVar2,(float)puVar8);
  pFVar3 = (FPlane *)FPlane::operator+(pFVar2,pFVar3);
  FColor::FColor(param_1,pFVar3);
  ExceptionList = local_10;
  return param_1;
}


// ==== 10373f22 Catch@10373f22

void Catch_10373f22(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10373f36 Catch@10373f36

void Catch_10373f36(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UFadeColor::GetColor");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10373fc0 FUN_10373fc0

void FUN_10373fc0(UProxyBitmapMaterial *param_1)

{
  if (param_1 != (UProxyBitmapMaterial *)0x0) {
    UProxyBitmapMaterial::UProxyBitmapMaterial(param_1);
    return;
  }
  return;
}


// ==== 10373fe0 FUN_10373fe0

void FUN_10373fe0(UTexCoordMaterial *param_1)

{
  if (param_1 != (UTexCoordMaterial *)0x0) {
    UTexCoordMaterial::UTexCoordMaterial(param_1);
    return;
  }
  return;
}


// ==== 10374000 FUN_10374000

void FUN_10374000(UWaterMaterial *param_1)

{
  if (param_1 != (UWaterMaterial *)0x0) {
    UWaterMaterial::UWaterMaterial(param_1);
    return;
  }
  return;
}


// ==== 10374020 FUN_10374020

void FUN_10374020(UUnderWaterMaterial *param_1)

{
  if (param_1 != (UUnderWaterMaterial *)0x0) {
    UUnderWaterMaterial::UUnderWaterMaterial(param_1);
    return;
  }
  return;
}


// ==== 10374040 FUN_10374040

void FUN_10374040(int param_1)

{
  int in_ECX;
  
  thunk_FUN_10335490(in_ECX,param_1,0x10,0x20,FPlane_exref);
  *(undefined4 *)(in_ECX + 0x200) = *(undefined4 *)(param_1 + 0x200);
  return;
}


// ==== 10374080 FUN_10374080

void FUN_10374080(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f8f0c;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(in_ECX + 0xc));
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103740e0 FUN_103740e0

void FUN_103740e0(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f8f3c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FIndexBuffer::vftable;
  local_4 = 1;
  *in_ECX = FRawIndexBuffer::vftable;
  TArray<unsigned_short>::TArray<unsigned_short>
            ((TArray<unsigned_short> *)(in_ECX + 3),(TArray<unsigned_short> *)(param_1 + 0xc));
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  ExceptionList = local_c;
  return;
}


// ==== 10374190 FUN_10374190

void FUN_10374190(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  TArray<unsigned_short>::operator=
            ((TArray<unsigned_short> *)(in_ECX + 0xc),(TArray<unsigned_short> *)(param_1 + 0xc));
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


// ==== 103741d0 FUN_103741d0

void FUN_103741d0(byte param_1)

{
  FRawIndexBuffer *in_ECX;
  
  FRawIndexBuffer::~FRawIndexBuffer(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10374200 FUN_10374200

FRawIndexBuffer * FUN_10374200(byte param_1)

{
  FRawIndexBuffer *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x1c,*(int *)(in_ECX + -4),FRawIndexBuffer::~FRawIndexBuffer);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FRawIndexBuffer::~FRawIndexBuffer(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10374280 FUN_10374280

void FUN_10374280(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f8f68;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103742d0 FUN_103742d0

void FUN_103742d0(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f8f98;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10374340 FUN_10374340

FRenderResource * FUN_10374340(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f8fc8;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x14,*(int *)(in_ECX + -4),FSolidColorTexture::~FSolidColorTexture);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 10374410 FUN_10374410

void FUN_10374410(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FBaseTexture::vftable;
  *in_ECX = FTexture::vftable;
  return;
}


// ==== 103744b0 FUN_103744b0

void FUN_103744b0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f9000;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_1032fd80(*(undefined4 *)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x20));
  ExceptionList = local_10;
  return;
}


// ==== 10374500 Catch@10374500

void Catch_10374500(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10374514 Catch@10374514

void Catch_10374514(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FMipmap::Clear");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10374560 FUN_10374560

void FUN_10374560(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9018;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10374410(param_1);
  *in_ECX = FStaticTexture::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  ExceptionList = local_c;
  return;
}


// ==== 103745e0 FUN_103745e0

void FUN_103745e0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 10374610 FUN_10374610

void FUN_10374610(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f9048;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10374660 FUN_10374660

void FUN_10374660(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9068;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10335cb0(param_1);
  *in_ECX = FStaticCubemap::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  ExceptionList = local_c;
  return;
}


// ==== 103746e0 FUN_103746e0

void FUN_103746e0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 10374710 FUN_10374710

void FUN_10374710(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f9098;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10374780 FUN_10374780

FRenderResource * FUN_10374780(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f90c8;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x14,*(int *)(in_ECX + -4),FStaticCubemap::~FStaticCubemap);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 10374850 FUN_10374850

undefined4 FUN_10374850(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x594) != 0) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x594) + 0x34);
  }
  return 0;
}


// ==== 10374870 FUN_10374870

int FUN_10374870(int param_1)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x5f0) + param_1 * 0x28;
}


// ==== 10374890 FUN_10374890

void FUN_10374890(void *param_1)

{
  int in_ECX;
  
  _memcpy(param_1,*(void **)(in_ECX + 0xc),*(int *)(in_ECX + 0x10) * 0x28);
  return;
}


// ==== 103748c0 FUN_103748c0

void FUN_103748c0(int *param_1,int param_2)

{
  int in_ECX;
  
  *param_1 = *(int *)(in_ECX + 0xc) + param_2 * 0x28;
  return;
}


// ==== 103748e0 FUN_103748e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103748e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FName::FName((FName *)&local_c);
  iVar1 = *in_ECX;
  uVar6 = 0;
  local_c = param_1;
  puVar5 = &local_c;
  local_8 = param_2;
  uVar4 = 0;
  local_4 = param_3;
  uVar3 = _ENGINE_TriggerEvent;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 10374950 FUN_10374950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10374950(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_24 = param_1;
  iVar1 = *in_ECX;
  local_20 = param_2;
  local_18 = param_4;
  local_14 = param_5;
  uVar6 = 0;
  local_c = param_7;
  puVar5 = &local_24;
  local_1c = param_3;
  local_8 = param_8;
  uVar4 = 0;
  local_10 = param_6;
  local_4 = param_9;
  uVar3 = _ENGINE_TakeDamage;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 103749f0 FUN_103749f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103749f0(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_18 [4];
  
  FName::FName(aFStack_18,0x137);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff0;
    uVar4 = 0;
    uVar3 = _ENGINE_Landed;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 10374a70 FUN_10374a70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10374a70(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_1c [4];
  
  FName::FName(aFStack_1c,0x135);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xffffffec;
    uVar4 = 0;
    uVar3 = _ENGINE_HitWall;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 10374b00 FUN_10374b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10374b00(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = *param_1;
  local_10 = param_1[2];
  local_14 = param_1[1];
  iVar1 = *in_ECX;
  local_c = *param_2;
  local_8 = param_2[1];
  puVar5 = &local_18;
  uVar4 = 0;
  local_4 = param_2[2];
  uVar3 = _ENGINE_KApplyForce;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5);
  *param_1 = 0;
  param_1[1] = unaff_EDI;
  param_1[2] = unaff_ESI;
  *param_2 = unaff_EBP;
  param_2[1] = unaff_EBX;
  param_2[2] = local_18;
  return;
}


// ==== 10374bb0 FUN_10374bb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10374bb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_24 = param_2;
  iVar1 = *in_ECX;
  local_18 = param_5;
  local_20 = param_3;
  local_28 = param_1;
  local_c = param_8;
  uVar6 = 0;
  local_14 = param_6;
  local_1c = param_4;
  puVar5 = &local_28;
  local_8 = param_9;
  local_10 = param_7;
  uVar4 = 0;
  local_4 = param_10;
  uVar3 = _ENGINE_KImpact;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 10374c60 FUN_10374c60

float10 FUN_10374c60(void)

{
  float fVar1;
  float fVar2;
  UClass *this;
  AActor *pAVar3;
  UObject *in_ECX;
  
  fVar1 = *(float *)(in_ECX + 0xe8);
  this = UObject::GetClass(in_ECX);
  pAVar3 = UClass::GetDefaultActor(this);
  fVar1 = 1.0 - fVar1 / *(float *)(pAVar3 + 0xe8);
  fVar2 = 0.0;
  if ((0.0 <= fVar1) && (fVar2 = fVar1, 1.0 <= fVar1)) {
    return (float10)1.0;
  }
  return (float10)fVar2;
}


// ==== 10374ce0 FUN_10374ce0

void FUN_10374ce0(void)

{
  int in_ECX;
  
  FQuat::FQuat((FQuat *)(in_ECX + 0xc));
  return;
}


// ==== 10374d00 FUN_10374d00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10374d00(undefined4 param_1,FString *param_2)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  void *unaff_ESI;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f90fa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)local_18);
  local_4 = 1;
  local_1c = param_1;
  puStack_2c = (undefined4 *)0x10374d45;
  FString::operator=((FString *)local_18,param_2);
  iVar1 = *in_ECX;
  puStack_2c = &local_1c;
  uVar4 = 0;
  uVar3 = _ENGINE_ServerCallback;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4);
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&puStack_2c);
  ExceptionList = unaff_ESI;
  return;
}


// ==== 10374db0 FUN_10374db0

void FUN_10374db0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  if (0 < *(int *)(in_ECX + 0x3dc)) {
    iVar7 = 0;
    do {
      iVar5 = *(int *)(in_ECX + 0x3d8) + iVar7;
      iVar8 = iVar8 + 1;
      fVar1 = *(float *)(iVar5 + 4);
      fVar2 = *(float *)(in_ECX + 0x1c0);
      fVar3 = *(float *)(iVar5 + 8);
      fVar4 = *(float *)(in_ECX + 0x1c4);
      pfVar6 = (float *)(*(int *)(in_ECX + 0x3cc) + iVar7);
      *pfVar6 = *(float *)(*(int *)(in_ECX + 0x3d8) + iVar7) - *(float *)(in_ECX + 0x1bc);
      pfVar6[1] = fVar1 - fVar2;
      pfVar6[2] = fVar3 - fVar4;
      iVar7 = iVar7 + 0xc;
    } while (iVar8 < *(int *)(in_ECX + 0x3dc));
  }
  return;
}


// ==== 10374e40 FUN_10374e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10374e40(FString *param_1,undefined4 param_2)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  void *unaff_ESI;
  undefined4 uVar3;
  undefined4 uStack_30;
  FString *pFStack_2c;
  FString local_1c [4];
  undefined4 uStack_18;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f912a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString(local_1c);
  local_4 = 1;
  pFStack_2c = (FString *)0x10374e7d;
  FString::operator=(local_1c,param_1);
  iVar1 = *in_ECX;
  pFStack_2c = local_1c;
  uStack_30 = 0;
  local_10 = param_2;
  uVar3 = _ENGINE_ServerTravel;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3);
  uStack_18 = 0xffffffff;
  FString::~FString((FString *)&uStack_30);
  ExceptionList = unaff_ESI;
  return;
}


// ==== 10374ef0 FUN_10374ef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10374ef0(void *param_1,FString *param_2,undefined4 param_3)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  void **ppvStack_30;
  void *local_20;
  FString local_1c [4];
  undefined4 uStack_18;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9151;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_1033fef0();
  local_4 = 0;
  local_20 = param_1;
  ppvStack_30 = (void **)0x10374f34;
  FString::operator=(local_1c,param_2);
  iVar1 = *in_ECX;
  ppvStack_30 = &local_20;
  uVar4 = 0;
  local_10 = param_3;
  uVar3 = _ENGINE_Broadcast;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4);
  uStack_18 = 0xffffffff;
  FString::~FString((FString *)&ppvStack_30);
  ExceptionList = local_20;
  return;
}


// ==== 10374fb0 FUN_10374fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10374fb0(undefined4 param_1,FString *param_2,undefined4 param_3,void *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puStack_44;
  undefined4 local_34;
  FString local_30 [12];
  undefined4 local_24;
  void *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9181;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_1033ffb0();
  local_4 = 0;
  local_34 = param_1;
  puStack_44 = (undefined4 *)0x10374ff4;
  FString::operator=(local_30,param_2);
  iVar1 = *in_ECX;
  local_24 = param_3;
  local_20 = param_4;
  local_18 = param_6;
  puStack_44 = &local_34;
  local_1c = param_5;
  local_14 = param_7;
  uVar4 = 0;
  local_10 = param_8;
  uVar3 = _ENGINE_SpawnPlayerPawn;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4);
  local_18 = 0xffffffff;
  FString::~FString((FString *)&puStack_44);
  ExceptionList = local_20;
  return;
}


// ==== 103750a0 FUN_103750a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103750a0(FString *param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  FString *pFVar5;
  undefined4 uVar6;
  FString local_34 [4];
  FString aFStack_30 [8];
  FString local_28 [4];
  undefined4 uStack_24;
  void *pvStack_20;
  FString local_1c [4];
  undefined4 uStack_18;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f91a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_10340070();
  local_4 = 0;
  local_10 = 0;
  FString::operator=(local_34,param_1);
  FString::operator=(local_28,param_2);
  FString::operator=(local_1c,param_3);
  iVar1 = *in_ECX;
  uVar6 = 0;
  pFVar5 = local_34;
  uVar4 = 0;
  uVar3 = _ENGINE_L2NetLogin;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,pFVar5,uVar6);
  FString::operator=(param_3,aFStack_30);
  uStack_18 = 0xffffffff;
  thunk_FUN_103400f0();
  ExceptionList = pvStack_20;
  return uStack_24;
}


// ==== 10375190 FUN_10375190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10375190(FString *param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  FString *pFVar5;
  undefined4 uVar6;
  FString local_34 [4];
  FString aFStack_30 [8];
  FString local_28 [4];
  undefined4 uStack_24;
  void *pvStack_20;
  FString local_1c [4];
  undefined4 uStack_18;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f91c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_10340170();
  local_4 = 0;
  local_10 = 0;
  FString::operator=(local_34,param_1);
  FString::operator=(local_28,param_2);
  FString::operator=(local_1c,param_3);
  iVar1 = *in_ECX;
  uVar6 = 0;
  pFVar5 = local_34;
  uVar4 = 0;
  uVar3 = _ENGINE_Login;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,pFVar5,uVar6);
  FString::operator=(param_3,aFStack_30);
  uStack_18 = 0xffffffff;
  thunk_FUN_103401f0();
  ExceptionList = pvStack_20;
  return uStack_24;
}


// ==== 10375280 FUN_10375280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375280(FString *param_1,FString *param_2,FString *param_3,FString *param_4)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  FString *pFVar5;
  undefined4 uVar6;
  FString local_3c [4];
  FString aFStack_38 [8];
  FString local_30 [4];
  FString aFStack_2c [8];
  FString local_24 [4];
  void *pvStack_20;
  undefined4 local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f91e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_10340270();
  local_4 = 0;
  FString::operator=(local_3c,param_1);
  FString::operator=(local_30,param_2);
  FString::operator=(local_24,param_3);
  FString::operator=((FString *)local_18,param_4);
  iVar1 = *in_ECX;
  uVar6 = 0;
  pFVar5 = local_3c;
  uVar4 = 0;
  uVar3 = _ENGINE_PreLogin;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,pFVar5,uVar6);
  FString::operator=(param_3,aFStack_38);
  FString::operator=(param_4,aFStack_2c);
  local_18[0] = 0xffffffff;
  thunk_FUN_10340300();
  ExceptionList = pvStack_20;
  return;
}


// ==== 10375380 FUN_10375380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * FUN_10375380(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  void *unaff_ESI;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 local_18 [2];
  FString *pFStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9234;
  pvStack_c = ExceptionList;
  uStack_28 = 0x103753ae;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)local_18);
  local_4 = 2;
  iVar1 = *in_ECX;
  uStack_28 = 0;
  puStack_2c = local_18;
  uVar4 = 0;
  uVar3 = _ENGINE_GetBeaconText;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4);
  FString::FString(pFStack_10,(FString *)&puStack_2c);
  local_18[0] = 0;
  FString::~FString((FString *)&puStack_2c);
  ExceptionList = unaff_ESI;
  return pFStack_10;
}


// ==== 10375440 FUN_10375440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375440(FString *param_1,FString *param_2)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  FString *pFStack_38;
  FString local_24 [4];
  void *pvStack_20;
  undefined4 local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f927c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString(local_24);
  local_4 = 0;
  FString::FString((FString *)local_18);
  local_4 = 2;
  pFStack_38 = (FString *)0x10375490;
  FString::operator=(local_24,param_1);
  pFStack_38 = (FString *)0x1037549f;
  FString::operator=((FString *)local_18,param_2);
  iVar1 = *in_ECX;
  pFStack_38 = local_24;
  uVar4 = 0;
  uVar3 = _ENGINE_InitGame;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4);
  FString::operator=(param_2,(FString *)&stack0xffffffd4);
  local_18[0] = 3;
  FString::~FString((FString *)&stack0xffffffd4);
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&pFStack_38);
  ExceptionList = pvStack_20;
  return;
}


// ==== 10375540 FUN_10375540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375540(FString *param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  FString *pFVar5;
  undefined4 uVar6;
  FString local_30 [12];
  FString local_24 [4];
  void *pvStack_20;
  undefined4 local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f92a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_10340570();
  local_4 = 0;
  FString::operator=(local_30,param_1);
  FString::operator=(local_24,param_2);
  FString::operator=((FString *)local_18,param_3);
  iVar1 = *in_ECX;
  uVar6 = 0;
  pFVar5 = local_30;
  uVar4 = 0;
  uVar3 = _ENGINE_LogGameSpecial2;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,pFVar5,uVar6);
  local_18[0] = 0xffffffff;
  thunk_FUN_103405f0();
  ExceptionList = pvStack_20;
  return;
}


// ==== 10375610 FUN_10375610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375610(FString *param_1,FString *param_2)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uStack_38;
  FString *pFStack_34;
  FString local_24 [4];
  void *pvStack_20;
  undefined4 local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f92ec;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString(local_24);
  local_4 = 0;
  FString::FString((FString *)local_18);
  local_4 = 2;
  pFStack_34 = (FString *)0x1037565f;
  FString::operator=(local_24,param_1);
  pFStack_34 = (FString *)0x1037566e;
  FString::operator=((FString *)local_18,param_2);
  iVar1 = *in_ECX;
  pFStack_34 = local_24;
  uStack_38 = 0;
  uVar3 = _ENGINE_LogGameSpecial;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3);
  local_18[0] = 3;
  FString::~FString((FString *)&stack0xffffffd4);
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&uStack_38);
  ExceptionList = pvStack_20;
  return;
}


// ==== 10375700 FUN_10375700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * FUN_10375700(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  void *unaff_ESI;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 local_18 [2];
  FString *pFStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9344;
  pvStack_c = ExceptionList;
  uStack_28 = 0x1037572e;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)local_18);
  local_4 = 2;
  iVar1 = *in_ECX;
  uStack_28 = 0;
  puStack_2c = local_18;
  uVar4 = 0;
  uVar3 = _ENGINE_GetLocalLogFileName;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4);
  FString::FString(pFStack_10,(FString *)&puStack_2c);
  local_18[0] = 0;
  FString::~FString((FString *)&puStack_2c);
  ExceptionList = unaff_ESI;
  return pFStack_10;
}


// ==== 103757c0 FUN_103757c0

FName * FUN_103757c0(FName *param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 < *(int *)(in_ECX + 0x430)) {
    *(undefined4 *)param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x42c) + param_2 * 4);
    return param_1;
  }
  FName::FName(param_1,0);
  return param_1;
}


// ==== 10375800 FUN_10375800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *in_ECX;
  local_c = param_2;
  uVar6 = 0;
  puVar5 = &local_10;
  local_8 = param_3;
  local_10 = param_1;
  uVar4 = 0;
  local_4 = param_4;
  uVar3 = _ENGINE_PlayDying;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 10375870 FUN_10375870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375870(undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_4;
  
  FName::FName((FName *)&local_4);
  iVar1 = *in_ECX;
  uVar6 = 0;
  puVar5 = &local_4;
  uVar4 = 0;
  local_4 = param_1;
  uVar3 = _ENGINE_SetAnimAction;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 103758c0 FUN_103758c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103758c0(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_1c [4];
  
  FName::FName(aFStack_1c,0x152);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xffffffec;
    uVar4 = 0;
    uVar3 = _ENGINE_ModifyVelocity;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 10375950 FUN_10375950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375950(FString *param_1,undefined4 param_2)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  void *unaff_ESI;
  undefined4 uVar3;
  undefined4 uStack_30;
  FString *pFStack_2c;
  FString local_1c [4];
  undefined4 uStack_18;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f937a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString(local_1c);
  local_4 = 0;
  FName::FName((FName *)&local_10);
  local_4 = 1;
  pFStack_2c = (FString *)0x1037599f;
  FString::operator=(local_1c,param_1);
  iVar1 = *in_ECX;
  pFStack_2c = local_1c;
  uStack_30 = 0;
  local_10 = param_2;
  uVar3 = _ENGINE_ClientMessage;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3);
  uStack_18 = 0xffffffff;
  FString::~FString((FString *)&uStack_30);
  ExceptionList = unaff_ESI;
  return;
}


// ==== 10375a20 FUN_10375a20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375a20(undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_4;
  
  FName::FName((FName *)&local_4);
  iVar1 = *in_ECX;
  uVar6 = 0;
  puVar5 = &local_4;
  uVar4 = 0;
  local_4 = param_1;
  uVar3 = _ENGINE_AnimBegin;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 10375a70 FUN_10375a70

void FUN_10375a70(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  if (0 < *(int *)(in_ECX + 0x1a58)) {
    iVar7 = 0;
    do {
      iVar5 = *(int *)(in_ECX + 0x1a54) + iVar7;
      iVar8 = iVar8 + 1;
      fVar1 = *(float *)(iVar5 + 4);
      fVar2 = *(float *)(in_ECX + 0x1c0);
      fVar3 = *(float *)(iVar5 + 8);
      fVar4 = *(float *)(in_ECX + 0x1c4);
      pfVar6 = (float *)(*(int *)(in_ECX + 0x1a48) + iVar7);
      *pfVar6 = *(float *)(*(int *)(in_ECX + 0x1a54) + iVar7) - *(float *)(in_ECX + 0x1bc);
      pfVar6[1] = fVar1 - fVar2;
      pfVar6[2] = fVar3 - fVar4;
      iVar7 = iVar7 + 0xc;
    } while (iVar8 < *(int *)(in_ECX + 0x1a58));
  }
  return;
}


// ==== 10375b00 FUN_10375b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375b00(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 unaff_EDI;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  FName::FName((FName *)&local_8);
  FName::FName((FName *)&local_4);
  local_8 = *param_1;
  local_4 = *param_2;
  iVar1 = *in_ECX;
  puVar5 = &local_8;
  uVar4 = 0;
  uVar3 = _ENGINE_GetHitEffectName;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5);
  *param_1 = 0;
  *param_2 = unaff_EDI;
  return;
}


// ==== 10375b90 FUN_10375b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375b90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *in_ECX;
  local_c = param_2;
  uVar6 = 0;
  puVar5 = &local_10;
  local_8 = param_3;
  local_10 = param_1;
  uVar4 = 0;
  local_4 = param_4;
  uVar3 = _ENGINE_NotifyHitMover;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 10375c00 FUN_10375c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10375c00(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_20 [4];
  undefined4 uStack_8;
  
  FName::FName(aFStack_20,0x161);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xffffffe8;
    uVar4 = 0;
    uVar3 = _ENGINE_NotifyHitWall;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return uStack_8;
}


// ==== 10375ca0 FUN_10375ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10375ca0(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_1c [4];
  undefined4 uStack_8;
  
  FName::FName(aFStack_1c,0x160);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xffffffec;
    uVar4 = 0;
    uVar3 = _ENGINE_NotifyLanded;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return uStack_8;
}


// ==== 10375d30 FUN_10375d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375d30(FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  void *unaff_EDI;
  undefined4 uVar3;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f93aa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)local_18);
  local_4 = 1;
  puStack_28 = (undefined4 *)0x10375d6d;
  FString::operator=((FString *)local_18,param_1);
  iVar1 = *in_ECX;
  puStack_28 = local_18;
  uStack_2c = 0;
  uVar3 = _ENGINE_SoakStop;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3);
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&uStack_2c);
  ExceptionList = unaff_EDI;
  return;
}


// ==== 10375de0 FUN_10375de0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375de0(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_34 [4];
  
  FName::FName(aFStack_34,0x15e);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xffffffd4;
    uVar4 = 0;
    uVar3 = _ENGINE_AIHearSound;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 10375eb0 FUN_10375eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375eb0(FString *param_1,undefined4 param_2,FString *param_3,FString *param_4)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  FString *pFVar5;
  undefined4 uVar6;
  FString local_34 [12];
  undefined4 local_28;
  FString local_24 [4];
  void *pvStack_20;
  undefined4 local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f93c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_10345050();
  local_4 = 0;
  FString::operator=(local_34,param_1);
  local_28 = param_2;
  FString::operator=(local_24,param_3);
  FString::operator=((FString *)local_18,param_4);
  iVar1 = *in_ECX;
  uVar6 = 0;
  pFVar5 = local_34;
  uVar4 = 0;
  uVar3 = _ENGINE_ClientOpenMenu;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,pFVar5,uVar6);
  local_18[0] = 0xffffffff;
  thunk_FUN_103450d0();
  ExceptionList = pvStack_20;
  return;
}


// ==== 10375f90 FUN_10375f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10375f90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  UFunction *pUVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  FRotator::FRotator((FRotator *)&local_c);
  local_14 = param_2[1];
  local_1c = *param_1;
  local_18 = *param_2;
  local_10 = param_2[2];
  local_8 = param_3[1];
  local_c = *param_3;
  local_4 = param_3[2];
  puVar4 = &local_1c;
  uVar3 = 0;
  uVar2 = _ENGINE_PlayerCalcView;
  pUVar1 = UObject::FindFunctionChecked();
  (**(code **)(local_4 + 0x10))(pUVar1,uVar2,uVar3,puVar4);
  *param_1 = 0;
  *param_2 = unaff_EDI;
  param_2[1] = unaff_ESI;
  param_2[2] = unaff_EBP;
  *param_3 = unaff_EBX;
  param_3[1] = local_1c;
  param_3[2] = local_18;
  return;
}


// ==== 10376070 FUN_10376070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10376070(void *param_1,FString *param_2,undefined4 param_3)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  void **ppvStack_30;
  void *local_20;
  FString local_1c [4];
  undefined4 uStack_18;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f93fa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString(local_1c);
  local_4 = 1;
  local_20 = param_1;
  ppvStack_30 = (void **)0x103760b5;
  FString::operator=(local_1c,param_2);
  iVar1 = *in_ECX;
  ppvStack_30 = &local_20;
  uVar4 = 0;
  local_10 = param_3;
  uVar3 = _ENGINE_SetProgressMessage;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4);
  uStack_18 = 0xffffffff;
  FString::~FString((FString *)&ppvStack_30);
  ExceptionList = local_20;
  return;
}


// ==== 10376130 FUN_10376130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10376130(void *param_1,FString *param_2,undefined4 param_3)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  void **ppvStack_30;
  void *local_20;
  FString local_1c [4];
  undefined4 uStack_18;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9421;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_10345210();
  local_4 = 0;
  local_20 = param_1;
  ppvStack_30 = (void **)0x10376174;
  FString::operator=(local_1c,param_2);
  iVar1 = *in_ECX;
  ppvStack_30 = &local_20;
  uVar4 = 0;
  local_10 = param_3;
  uVar3 = _ENGINE_TeamMessage;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4);
  uStack_18 = 0xffffffff;
  FString::~FString((FString *)&ppvStack_30);
  ExceptionList = local_20;
  return;
}


// ==== 103761f0 FUN_103761f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103761f0(FString *param_1,undefined4 param_2)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  void *unaff_ESI;
  undefined4 uVar3;
  undefined4 uStack_30;
  FString *pFStack_2c;
  FString local_1c [4];
  undefined4 uStack_18;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f945a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString(local_1c);
  local_4 = 0;
  FName::FName((FName *)&local_10);
  local_4 = 1;
  pFStack_2c = (FString *)0x1037623f;
  FString::operator=(local_1c,param_1);
  iVar1 = *in_ECX;
  pFStack_2c = local_1c;
  uStack_30 = 0;
  local_10 = param_2;
  uVar3 = _ENGINE_ClientMessage;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3);
  uStack_18 = 0xffffffff;
  FString::~FString((FString *)&uStack_30);
  ExceptionList = unaff_ESI;
  return;
}


// ==== 103762c0 FUN_103762c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103762c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_24 = param_2;
  iVar1 = *in_ECX;
  local_18 = param_5;
  local_20 = param_3;
  local_28 = param_1;
  local_c = param_8;
  uVar6 = 0;
  local_14 = param_6;
  local_1c = param_4;
  puVar5 = &local_28;
  local_8 = param_9;
  local_10 = param_7;
  uVar4 = 0;
  local_4 = param_10;
  uVar3 = _ENGINE_ClientHearSound;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 10376370 FUN_10376370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10376370(FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  void *unaff_EDI;
  undefined4 uVar3;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f948a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)local_18);
  local_4 = 1;
  puStack_28 = (undefined4 *)0x103763ad;
  FString::operator=((FString *)local_18,param_1);
  iVar1 = *in_ECX;
  puStack_28 = local_18;
  uStack_2c = 0;
  uVar3 = _ENGINE_ServerValidationResponse;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3);
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&uStack_2c);
  ExceptionList = unaff_EDI;
  return;
}


// ==== 10376420 FUN_10376420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10376420(FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  void *unaff_EDI;
  undefined4 uVar3;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f94ba;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)local_18);
  local_4 = 1;
  puStack_28 = (undefined4 *)0x1037645d;
  FString::operator=((FString *)local_18,param_1);
  iVar1 = *in_ECX;
  puStack_28 = local_18;
  uStack_2c = 0;
  uVar3 = _ENGINE_ClientValidate;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3);
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&uStack_2c);
  ExceptionList = unaff_EDI;
  return;
}


// ==== 103764d0 FUN_103764d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103764d0(FString *param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uStack_34;
  void **ppvStack_30;
  void *local_20 [2];
  undefined4 uStack_18;
  undefined1 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f94ea;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)local_20);
  local_4 = 1;
  ppvStack_30 = (void **)0x1037650d;
  FString::operator=((FString *)local_20,param_1);
  iVar1 = *in_ECX;
  ppvStack_30 = local_20;
  local_14 = param_2;
  uStack_34 = 0;
  local_10 = param_3;
  uVar3 = _ENGINE_ClientTravel;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3);
  uStack_18 = 0xffffffff;
  FString::~FString((FString *)&uStack_34);
  ExceptionList = local_20[0];
  return;
}


// ==== 10376590 FUN_10376590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10376590(FString *param_1,FString *param_2)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uStack_38;
  FString *pFStack_34;
  FString local_24 [4];
  void *pvStack_20;
  undefined4 local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f952c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString(local_24);
  local_4 = 0;
  FString::FString((FString *)local_18);
  local_4 = 2;
  pFStack_34 = (FString *)0x103765df;
  FString::operator=(local_24,param_1);
  pFStack_34 = (FString *)0x103765ee;
  FString::operator=((FString *)local_18,param_2);
  iVar1 = *in_ECX;
  pFStack_34 = local_24;
  uStack_38 = 0;
  uVar3 = _ENGINE_ConnectFailure;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3);
  local_18[0] = 3;
  FString::~FString((FString *)&stack0xffffffd4);
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&uStack_38);
  ExceptionList = pvStack_20;
  return;
}


// ==== 10376680 FUN_10376680

void FUN_10376680(UShadowBitmapMaterial *param_1)

{
  if (param_1 != (UShadowBitmapMaterial *)0x0) {
    UShadowBitmapMaterial::UShadowBitmapMaterial(param_1);
    return;
  }
  return;
}


// ==== 103766a0 FUN_103766a0

void FUN_103766a0(UScriptedTexture *param_1)

{
  if (param_1 != (UScriptedTexture *)0x0) {
    UScriptedTexture::UScriptedTexture(param_1);
    return;
  }
  return;
}


// ==== 103766c0 FUN_103766c0

void FUN_103766c0(UProjectorMaterial *param_1)

{
  if (param_1 != (UProjectorMaterial *)0x0) {
    UProjectorMaterial::UProjectorMaterial(param_1);
    return;
  }
  return;
}


// ==== 103766e0 FUN_103766e0

void FUN_103766e0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107f9570;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UParticleMaterial::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(in_ECX + 0x5b4,0x4c,8,(_func_void_void_ptr *)&LAB_10309449);
  local_4 = 0xffffffff;
  URenderedMaterial::~URenderedMaterial((URenderedMaterial *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10376770 FUN_10376770

void FUN_10376770(void)

{
  UMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f95b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMaterial::UMaterial(in_ECX);
  *(undefined ***)in_ECX = URenderedMaterial::vftable;
  local_4 = 1;
  *(undefined ***)in_ECX = UParticleMaterial::vftable;
  _eh_vector_constructor_iterator_
            (in_ECX + 0x5b4,0x4c,8,(_func_void_void_ptr *)&LAB_10308ab7,
             (_func_void_void_ptr *)&LAB_10309449);
  ExceptionList = local_c;
  return;
}


// ==== 10376800 FUN_10376800

void FUN_10376800(byte param_1)

{
  UParticleMaterial *in_ECX;
  
  UParticleMaterial::~UParticleMaterial(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x814);
  }
  return;
}


// ==== 10376830 FUN_10376830

UParticleMaterial * FUN_10376830(byte param_1)

{
  UParticleMaterial *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x814,*(int *)(in_ECX + -4),UParticleMaterial::~UParticleMaterial);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UParticleMaterial::~UParticleMaterial(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x814);
  }
  return in_ECX;
}


// ==== 103768b0 FUN_103768b0

void FUN_103768b0(UVertexColor *param_1)

{
  if (param_1 != (UVertexColor *)0x0) {
    UVertexColor::UVertexColor(param_1);
    return;
  }
  return;
}


// ==== 103768d0 FUN_103768d0

void FUN_103768d0(UConstantMaterial *param_1)

{
  if (param_1 != (UConstantMaterial *)0x0) {
    UConstantMaterial::UConstantMaterial(param_1);
    return;
  }
  return;
}


// ==== 103768f0 FUN_103768f0

void FUN_103768f0(UFadeColor *param_1)

{
  if (param_1 != (UFadeColor *)0x0) {
    UFadeColor::UFadeColor(param_1);
    return;
  }
  return;
}


// ==== 10376910 FUN_10376910

void FUN_10376910(UConstantColor *param_1)

{
  if (param_1 != (UConstantColor *)0x0) {
    UConstantColor::UConstantColor(param_1);
    return;
  }
  return;
}


// ==== 10376930 FUN_10376930

void FUN_10376930(UShader *param_1)

{
  if (param_1 != (UShader *)0x0) {
    UShader::UShader(param_1);
    return;
  }
  return;
}


// ==== 10376950 FUN_10376950

void FUN_10376950(UModifier *param_1)

{
  if (param_1 != (UModifier *)0x0) {
    UModifier::UModifier(param_1);
    return;
  }
  return;
}


// ==== 10376970 FUN_10376970

void FUN_10376970(UGlowModifier *param_1)

{
  if (param_1 != (UGlowModifier *)0x0) {
    UGlowModifier::UGlowModifier(param_1);
    return;
  }
  return;
}


// ==== 10376990 FUN_10376990

void FUN_10376990(UOpacityModifier *param_1)

{
  if (param_1 != (UOpacityModifier *)0x0) {
    UOpacityModifier::UOpacityModifier(param_1);
    return;
  }
  return;
}


// ==== 103769b0 FUN_103769b0

void FUN_103769b0(UFinalBlend *param_1)

{
  if (param_1 != (UFinalBlend *)0x0) {
    UFinalBlend::UFinalBlend(param_1);
    return;
  }
  return;
}


// ==== 103769d0 FUN_103769d0

void FUN_103769d0(UTexModifier *param_1)

{
  if (param_1 != (UTexModifier *)0x0) {
    UTexModifier::UTexModifier(param_1);
    return;
  }
  return;
}


// ==== 103769f0 FUN_103769f0

void FUN_103769f0(UTexCoordSource *param_1)

{
  if (param_1 != (UTexCoordSource *)0x0) {
    UTexCoordSource::UTexCoordSource(param_1);
    return;
  }
  return;
}


// ==== 10376a10 FUN_10376a10

void FUN_10376a10(UTexMatrix *param_1)

{
  if (param_1 != (UTexMatrix *)0x0) {
    UTexMatrix::UTexMatrix(param_1);
    return;
  }
  return;
}


// ==== 10376a30 FUN_10376a30

void FUN_10376a30(UTexEnvMap *param_1)

{
  if (param_1 != (UTexEnvMap *)0x0) {
    UTexEnvMap::UTexEnvMap(param_1);
    return;
  }
  return;
}


// ==== 10376a50 FUN_10376a50

void FUN_10376a50(UTexOscillator *param_1)

{
  if (param_1 != (UTexOscillator *)0x0) {
    UTexOscillator::UTexOscillator(param_1);
    return;
  }
  return;
}


// ==== 10376a70 FUN_10376a70

void FUN_10376a70(UTexOscillatorTriggered *param_1)

{
  if (param_1 != (UTexOscillatorTriggered *)0x0) {
    UTexOscillatorTriggered::UTexOscillatorTriggered(param_1);
    return;
  }
  return;
}


// ==== 10376a90 FUN_10376a90

void FUN_10376a90(UTexRotator *param_1)

{
  if (param_1 != (UTexRotator *)0x0) {
    UTexRotator::UTexRotator(param_1);
    return;
  }
  return;
}


// ==== 10376ab0 FUN_10376ab0

void FUN_10376ab0(UTexScaler *param_1)

{
  if (param_1 != (UTexScaler *)0x0) {
    UTexScaler::UTexScaler(param_1);
    return;
  }
  return;
}


// ==== 10376ad0 FUN_10376ad0

void FUN_10376ad0(UTexPanner *param_1)

{
  if (param_1 != (UTexPanner *)0x0) {
    UTexPanner::UTexPanner(param_1);
    return;
  }
  return;
}


// ==== 10376af0 FUN_10376af0

void FUN_10376af0(UTexPannerTriggered *param_1)

{
  if (param_1 != (UTexPannerTriggered *)0x0) {
    UTexPannerTriggered::UTexPannerTriggered(param_1);
    return;
  }
  return;
}


// ==== 10376b10 FUN_10376b10

void FUN_10376b10(UL2ColorModifier *param_1)

{
  if (param_1 != (UL2ColorModifier *)0x0) {
    UL2ColorModifier::UL2ColorModifier(param_1);
    return;
  }
  return;
}


// ==== 10376b30 FUN_10376b30

void FUN_10376b30(UColorModifier *param_1)

{
  if (param_1 != (UColorModifier *)0x0) {
    UColorModifier::UColorModifier(param_1);
    return;
  }
  return;
}


// ==== 10376b50 FUN_10376b50

void FUN_10376b50(UCombiner *param_1)

{
  if (param_1 != (UCombiner *)0x0) {
    UCombiner::UCombiner(param_1);
    return;
  }
  return;
}


// ==== 10376b70 FUN_10376b70

int FUN_10376b70(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x580) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x580) + 0x78))();
  }
  if (*(int *)(in_ECX + 0x57c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x57c) + 0x78))();
  }
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}


// ==== 10376bd0 FUN_10376bd0

int FUN_10376bd0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x580) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x580) + 0x7c))();
  }
  if (*(int *)(in_ECX + 0x57c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x57c) + 0x7c))();
  }
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}


// ==== 10376c30 FUN_10376c30

int FUN_10376c30(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x580) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x580) + 0x80))();
  }
  if (*(int *)(in_ECX + 0x57c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x57c) + 0x80))();
  }
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}


// ==== 10376c90 FUN_10376c90

int FUN_10376c90(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x580) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x580) + 0x84))();
  }
  if (*(int *)(in_ECX + 0x57c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x57c) + 0x84))();
  }
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}


// ==== 10376cf0 FUN_10376cf0

void FUN_10376cf0(UAnimNotify *param_1)

{
  if (param_1 != (UAnimNotify *)0x0) {
    UAnimNotify::UAnimNotify(param_1);
    return;
  }
  return;
}


// ==== 10376d10 FUN_10376d10

void FUN_10376d10(UAnimNotify_IdleSound *param_1)

{
  if (param_1 != (UAnimNotify_IdleSound *)0x0) {
    UAnimNotify_IdleSound::UAnimNotify_IdleSound(param_1);
    return;
  }
  return;
}


// ==== 10376d30 FUN_10376d30

void FUN_10376d30(UAnimNotify_MatSubAction *param_1)

{
  if (param_1 != (UAnimNotify_MatSubAction *)0x0) {
    UAnimNotify_MatSubAction::UAnimNotify_MatSubAction(param_1);
    return;
  }
  return;
}


// ==== 10376d50 FUN_10376d50

void FUN_10376d50(UAnimNotify_Scripted *param_1)

{
  if (param_1 != (UAnimNotify_Scripted *)0x0) {
    UAnimNotify_Scripted::UAnimNotify_Scripted(param_1);
    return;
  }
  return;
}


// ==== 10376d70 FUN_10376d70

void FUN_10376d70(UAnimNotify_Script *param_1)

{
  if (param_1 != (UAnimNotify_Script *)0x0) {
    UAnimNotify_Script::UAnimNotify_Script(param_1);
    return;
  }
  return;
}


// ==== 10376d90 FUN_10376d90

void FUN_10376d90(UAnimNotify_Sound *param_1)

{
  if (param_1 != (UAnimNotify_Sound *)0x0) {
    UAnimNotify_Sound::UAnimNotify_Sound(param_1);
    return;
  }
  return;
}


// ==== 10376db0 FUN_10376db0

void FUN_10376db0(UAnimNotify_SwimSound *param_1)

{
  if (param_1 != (UAnimNotify_SwimSound *)0x0) {
    UAnimNotify_SwimSound::UAnimNotify_SwimSound(param_1);
    return;
  }
  return;
}


// ==== 10376dd0 FUN_10376dd0

void FUN_10376dd0(UAnimNotify_DestroyEffect *param_1)

{
  if (param_1 != (UAnimNotify_DestroyEffect *)0x0) {
    UAnimNotify_DestroyEffect::UAnimNotify_DestroyEffect(param_1);
    return;
  }
  return;
}


// ==== 10376df0 FUN_10376df0

void FUN_10376df0(UAnimNotify_Effect *param_1)

{
  if (param_1 != (UAnimNotify_Effect *)0x0) {
    UAnimNotify_Effect::UAnimNotify_Effect(param_1);
    return;
  }
  return;
}


// ==== 10376e10 FUN_10376e10

void FUN_10376e10(UAnimNotify_AttackVoice *param_1)

{
  if (param_1 != (UAnimNotify_AttackVoice *)0x0) {
    UAnimNotify_AttackVoice::UAnimNotify_AttackVoice(param_1);
    return;
  }
  return;
}


// ==== 10376e30 FUN_10376e30

void FUN_10376e30(UAnimNotify_Channeling *param_1)

{
  if (param_1 != (UAnimNotify_Channeling *)0x0) {
    UAnimNotify_Channeling::UAnimNotify_Channeling(param_1);
    return;
  }
  return;
}


// ==== 10376e50 FUN_10376e50

void FUN_10376e50(UAnimNotify_AttackPreShot *param_1)

{
  if (param_1 != (UAnimNotify_AttackPreShot *)0x0) {
    UAnimNotify_AttackPreShot::UAnimNotify_AttackPreShot(param_1);
    return;
  }
  return;
}


// ==== 10376e70 FUN_10376e70

void FUN_10376e70(UAnimNotify_AttackShot *param_1)

{
  if (param_1 != (UAnimNotify_AttackShot *)0x0) {
    UAnimNotify_AttackShot::UAnimNotify_AttackShot(param_1);
    return;
  }
  return;
}


// ==== 10376e90 FUN_10376e90

void FUN_10376e90(UAnimNotify_AttackItem *param_1)

{
  if (param_1 != (UAnimNotify_AttackItem *)0x0) {
    UAnimNotify_AttackItem::UAnimNotify_AttackItem(param_1);
    return;
  }
  return;
}


// ==== 10376eb0 FUN_10376eb0

void FUN_10376eb0(UAnimNotify_ScreenFade *param_1)

{
  if (param_1 != (UAnimNotify_ScreenFade *)0x0) {
    UAnimNotify_ScreenFade::UAnimNotify_ScreenFade(param_1);
    return;
  }
  return;
}


// ==== 10376ed0 FUN_10376ed0

void FUN_10376ed0(UAnimNotify_ViewShake *param_1)

{
  if (param_1 != (UAnimNotify_ViewShake *)0x0) {
    UAnimNotify_ViewShake::UAnimNotify_ViewShake(param_1);
    return;
  }
  return;
}


// ==== 10376ef0 FUN_10376ef0

void FUN_10376ef0(UAnimNotify_BoneScale *param_1)

{
  if (param_1 != (UAnimNotify_BoneScale *)0x0) {
    UAnimNotify_BoneScale::UAnimNotify_BoneScale(param_1);
    return;
  }
  return;
}


// ==== 10376f10 FUN_10376f10

void FUN_10376f10(UMatObject *param_1)

{
  if (param_1 != (UMatObject *)0x0) {
    UMatObject::UMatObject(param_1);
    return;
  }
  return;
}


// ==== 10376f30 FUN_10376f30

void FUN_10376f30(UMatSubAction *param_1)

{
  if (param_1 != (UMatSubAction *)0x0) {
    UMatSubAction::UMatSubAction(param_1);
    return;
  }
  return;
}


// ==== 10376f50 FUN_10376f50

void FUN_10376f50(USubActionSceneSpeed *param_1)

{
  if (param_1 != (USubActionSceneSpeed *)0x0) {
    USubActionSceneSpeed::USubActionSceneSpeed(param_1);
    return;
  }
  return;
}


// ==== 10376f70 FUN_10376f70

void FUN_10376f70(USubActionGameSpeed *param_1)

{
  if (param_1 != (USubActionGameSpeed *)0x0) {
    USubActionGameSpeed::USubActionGameSpeed(param_1);
    return;
  }
  return;
}


// ==== 10376f90 FUN_10376f90

void FUN_10376f90(USubActionOrientation *param_1)

{
  if (param_1 != (USubActionOrientation *)0x0) {
    USubActionOrientation::USubActionOrientation(param_1);
    return;
  }
  return;
}


// ==== 10376fb0 FUN_10376fb0

void FUN_10376fb0(USubActionCameraShake *param_1)

{
  if (param_1 != (USubActionCameraShake *)0x0) {
    USubActionCameraShake::USubActionCameraShake(param_1);
    return;
  }
  return;
}


// ==== 10376fd0 FUN_10376fd0

void FUN_10376fd0(USubActionFOV *param_1)

{
  if (param_1 != (USubActionFOV *)0x0) {
    USubActionFOV::USubActionFOV(param_1);
    return;
  }
  return;
}


// ==== 10376ff0 FUN_10376ff0

void FUN_10376ff0(USubActionTrigger *param_1)

{
  if (param_1 != (USubActionTrigger *)0x0) {
    USubActionTrigger::USubActionTrigger(param_1);
    return;
  }
  return;
}


// ==== 10377010 FUN_10377010

void FUN_10377010(USubActionFade *param_1)

{
  if (param_1 != (USubActionFade *)0x0) {
    USubActionFade::USubActionFade(param_1);
    return;
  }
  return;
}


// ==== 10377030 FUN_10377030

void FUN_10377030(UMeshObject *param_1)

{
  if (param_1 != (UMeshObject *)0x0) {
    UMeshObject::UMeshObject(param_1);
    return;
  }
  return;
}


// ==== 10377050 FUN_10377050

void FUN_10377050(UInteractions *param_1)

{
  if (param_1 != (UInteractions *)0x0) {
    UInteractions::UInteractions(param_1);
    return;
  }
  return;
}


// ==== 10377070 FUN_10377070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10377070(FString *param_1,undefined4 param_2)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 unaff_ESI;
  undefined4 uVar3;
  undefined4 uStack_34;
  void **ppvStack_30;
  void *local_20 [2];
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f95ea;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)local_20);
  local_4 = 1;
  local_10 = 0;
  ppvStack_30 = (void **)0x103770b5;
  FString::operator=((FString *)local_20,param_1);
  iVar1 = *in_ECX;
  ppvStack_30 = local_20;
  uStack_34 = 0;
  local_14 = param_2;
  uVar3 = _ENGINE_AddInteraction;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3);
  uStack_18 = 0xffffffff;
  FString::~FString((FString *)&uStack_34);
  ExceptionList = local_20[0];
  return unaff_ESI;
}


// ==== 10377130 FUN_10377130

void FUN_10377130(UInteraction *param_1)

{
  if (param_1 != (UInteraction *)0x0) {
    UInteraction::UInteraction(param_1);
    return;
  }
  return;
}


// ==== 10377150 FUN_10377150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10377150(FString *param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  void *unaff_EDI;
  undefined4 uVar3;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f961a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString((FString *)local_18);
  local_4 = 1;
  puStack_28 = (undefined4 *)0x1037718d;
  FString::operator=((FString *)local_18,param_1);
  iVar1 = *in_ECX;
  puStack_28 = local_18;
  uStack_2c = 0;
  uVar3 = _ENGINE_SetRequiredGameResolution;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3);
  local_18[0] = 0xffffffff;
  FString::~FString((FString *)&uStack_2c);
  ExceptionList = unaff_EDI;
  return;
}


// ==== 10377200 FUN_10377200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10377200(FString *param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  FString *pFVar5;
  undefined4 uVar6;
  FString local_34 [12];
  FString local_28 [4];
  undefined4 uStack_24;
  void *pvStack_20;
  FString local_1c [4];
  undefined4 uStack_18;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9638;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_10352ac0();
  local_4 = 0;
  local_10 = 0;
  FString::operator=(local_34,param_1);
  FString::operator=(local_28,param_2);
  FString::operator=(local_1c,param_3);
  iVar1 = *in_ECX;
  uVar6 = 0;
  pFVar5 = local_34;
  uVar4 = 0;
  uVar3 = _ENGINE_ReplaceMenu;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,pFVar5,uVar6);
  uStack_18 = 0xffffffff;
  thunk_FUN_10352b40();
  ExceptionList = pvStack_20;
  return uStack_24;
}


// ==== 103772e0 FUN_103772e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103772e0(FString *param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  FString *pFVar5;
  undefined4 uVar6;
  FString local_34 [12];
  FString local_28 [4];
  undefined4 uStack_24;
  void *pvStack_20;
  FString local_1c [4];
  undefined4 uStack_18;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9658;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_10352bc0();
  local_4 = 0;
  local_10 = 0;
  FString::operator=(local_34,param_1);
  FString::operator=(local_28,param_2);
  FString::operator=(local_1c,param_3);
  iVar1 = *in_ECX;
  uVar6 = 0;
  pFVar5 = local_34;
  uVar4 = 0;
  uVar3 = _ENGINE_OpenMenu;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,pFVar5,uVar6);
  uStack_18 = 0xffffffff;
  thunk_FUN_10352c40();
  ExceptionList = pvStack_20;
  return uStack_24;
}


// ==== 103773c0 FUN_103773c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103773c0(FString *param_1)

{
  int *in_ECX;
  void *unaff_ESI;
  int *piStack_28;
  FString *pFStack_24;
  FString local_18 [4];
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f968a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::FString(local_18);
  local_4 = 1;
  pFStack_24 = (FString *)0x103773fc;
  FString::operator=(local_18,param_1);
  pFStack_24 = local_18;
  piStack_28 = in_ECX + 0x13;
  (**(code **)(*in_ECX + 0x14))(_ENGINE_OnAdminReply);
  uStack_14 = 0xffffffff;
  FString::~FString((FString *)&piStack_28);
  ExceptionList = unaff_ESI;
  return;
}


// ==== 10377460 FUN_10377460

void FUN_10377460(UBaseGUIController *param_1)

{
  if (param_1 != (UBaseGUIController *)0x0) {
    UBaseGUIController::UBaseGUIController(param_1);
    return;
  }
  return;
}


// ==== 10377480 FUN_10377480

void FUN_10377480(UConsole *param_1)

{
  if (param_1 != (UConsole *)0x0) {
    UConsole::UConsole(param_1);
    return;
  }
  return;
}


// ==== 103774a0 FUN_103774a0

void FUN_103774a0(UPlayerInput *param_1)

{
  if (param_1 != (UPlayerInput *)0x0) {
    UPlayerInput::UPlayerInput(param_1);
    return;
  }
  return;
}


// ==== 103774c0 FUN_103774c0

void FUN_103774c0(UCheatManager *param_1)

{
  if (param_1 != (UCheatManager *)0x0) {
    UCheatManager::UCheatManager(param_1);
    return;
  }
  return;
}


// ==== 103774e0 FUN_103774e0

void FUN_103774e0(UI3DL2Listener *param_1)

{
  if (param_1 != (UI3DL2Listener *)0x0) {
    UI3DL2Listener::UI3DL2Listener(param_1);
    return;
  }
  return;
}


// ==== 10377500 FUN_10377500

void FUN_10377500(UExtraMeshData *param_1)

{
  if (param_1 != (UExtraMeshData *)0x0) {
    UExtraMeshData::UExtraMeshData(param_1);
    return;
  }
  return;
}


// ==== 10377520 FUN_10377520

void FUN_10377520(ULevelSummary *param_1)

{
  if (param_1 != (ULevelSummary *)0x0) {
    ULevelSummary::ULevelSummary(param_1);
    return;
  }
  return;
}


// ==== 10377540 FUN_10377540

void FUN_10377540(UReachSpec *param_1)

{
  if (param_1 != (UReachSpec *)0x0) {
    UReachSpec::UReachSpec(param_1);
    return;
  }
  return;
}


// ==== 10377560 FUN_10377560

void FUN_10377560(ULevelObject *param_1)

{
  if (param_1 != (ULevelObject *)0x0) {
    ULevelObject::ULevelObject(param_1);
    return;
  }
  return;
}


// ==== 10377580 FUN_10377580

void FUN_10377580(UAmbientSoundObject *param_1)

{
  if (param_1 != (UAmbientSoundObject *)0x0) {
    UAmbientSoundObject::UAmbientSoundObject(param_1);
    return;
  }
  return;
}


// ==== 103775a0 FUN_103775a0

void FUN_103775a0(USkillAction *param_1)

{
  if (param_1 != (USkillAction *)0x0) {
    USkillAction::USkillAction(param_1);
    return;
  }
  return;
}


// ==== 103775c0 FUN_103775c0

void FUN_103775c0(USkillAction_SwordTrail *param_1)

{
  if (param_1 != (USkillAction_SwordTrail *)0x0) {
    USkillAction_SwordTrail::USkillAction_SwordTrail(param_1);
    return;
  }
  return;
}


// ==== 103775e0 FUN_103775e0

void FUN_103775e0(USkillAction_LocateEffect *param_1)

{
  if (param_1 != (USkillAction_LocateEffect *)0x0) {
    USkillAction_LocateEffect::USkillAction_LocateEffect(param_1);
    return;
  }
  return;
}


// ==== 10377600 FUN_10377600

void FUN_10377600(UKarmaParamsCollision *param_1)

{
  if (param_1 != (UKarmaParamsCollision *)0x0) {
    UKarmaParamsCollision::UKarmaParamsCollision(param_1);
    return;
  }
  return;
}


// ==== 10377620 FUN_10377620

void FUN_10377620(UKarmaParams *param_1)

{
  if (param_1 != (UKarmaParams *)0x0) {
    UKarmaParams::UKarmaParams(param_1);
    return;
  }
  return;
}


// ==== 10377640 FUN_10377640

void FUN_10377640(UKarmaParamsSkel *param_1)

{
  if (param_1 != (UKarmaParamsSkel *)0x0) {
    UKarmaParamsSkel::UKarmaParamsSkel(param_1);
    return;
  }
  return;
}


// ==== 10377660 FUN_10377660

void FUN_10377660(UKarmaParamsRBFull *param_1)

{
  if (param_1 != (UKarmaParamsRBFull *)0x0) {
    UKarmaParamsRBFull::UKarmaParamsRBFull(param_1);
    return;
  }
  return;
}


// ==== 10377680 FUN_10377680

undefined4 FUN_10377680(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x3c) < 2) {
    appFailAssert("Actors.Num()>=2",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\engine\\inc\\UnLevel.h",0x1e6);
  }
  if (*(int *)(*(int *)(in_ECX + 0x38) + 4) == 0) {
    appFailAssert("Actors(1)!=NULL",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\engine\\inc\\UnLevel.h",0x1e7);
  }
  if (*(int *)(*(int *)(*(int *)(in_ECX + 0x38) + 4) + 0x278) == 0) {
    appFailAssert("Actors(1)->Brush!=NULL",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\engine\\inc\\UnLevel.h",0x1e8);
    return *(undefined4 *)(*(int *)(in_ECX + 0x38) + 4);
  }
  return *(undefined4 *)(*(int *)(in_ECX + 0x38) + 4);
}


// ==== 10377710 FUN_10377710

int FUN_10377710(UObject *param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f96a0;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x3c) <= iVar1) {
      ExceptionList = &local_10;
      UObject::GetFullName(param_1,(ushort *)0x0);
      FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref)
      ;
      ExceptionList = local_10;
      return -1;
    }
    if (*(UObject **)(*(int *)(in_ECX + 0x38) + iVar1 * 4) == param_1) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


// ==== 10377789 Catch@10377789

void Catch_10377789(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1037779d Catch@1037779d

void Catch_1037779d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::GetActorIndex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103777f0 FUN_103777f0

int FUN_103777f0(UObject *param_1)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f96b0;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar1 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x4c) <= iVar1) {
      ExceptionList = &local_10;
      UObject::GetFullName(param_1,(ushort *)0x0);
      FOutputDevice::Logf(*(FOutputDevice **)GError_exref,(ushort *)*(FOutputDevice **)GError_exref)
      ;
      ExceptionList = local_10;
      return -1;
    }
    if (*(UObject **)(*(int *)(in_ECX + 0x48) + iVar1 * 4) == param_1) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


// ==== 10377869 Catch@10377869

void Catch_10377869(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1037787d Catch@1037787d

void Catch_1037787d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ULevel::GetLevelObjectIndex");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103778d0 FUN_103778d0

int FUN_103778d0(void)

{
  int in_ECX;
  
  if (**(int **)(in_ECX + 0x38) == 0) {
    appFailAssert("Actors(0)","d:\\work\\interlude\\2007_05_23\\warfare2110\\engine\\inc\\UnLevel.h"
                  ,0x203);
    return **(int **)(in_ECX + 0x38);
  }
  return **(int **)(in_ECX + 0x38);
}


// ==== 10377910 FUN_10377910

int FUN_10377910(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0xc0) + (param_1 * 3 + 0x27) * 8);
  if (iVar1 == 0) {
    if (**(int **)(in_ECX + 0x38) == 0) {
      appFailAssert("Actors(0)",
                    "d:\\work\\interlude\\2007_05_23\\warfare2110\\engine\\inc\\UnLevel.h",0x203);
    }
    iVar1 = **(int **)(in_ECX + 0x38);
  }
  return iVar1;
}


// ==== 10377960 FUN_10377960

void FUN_10377960(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107f96fc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UInput::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UInput::vftable_for_FExec_;
  local_4 = 2;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0x2b8,0xc,0xff,~FStringNoInit_exref);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x38,0x10,0x28,(_func_void_void_ptr *)&LAB_10310ae1);
  local_4 = 0xffffffff;
  USubsystem::~USubsystem((USubsystem *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10377a10 FUN_10377a10

undefined1 FUN_10377a10(int param_1)

{
  int in_ECX;
  
  if (param_1 < 0) {
    return *(undefined1 *)(in_ECX + 0xecc);
  }
  if (0xfd < param_1) {
    param_1 = 0xfe;
  }
  return *(undefined1 *)(param_1 + 0xecc + in_ECX);
}


// ==== 10377a50 FUN_10377a50

void FUN_10377a50(USubsystem *param_1)

{
  USubsystem *in_ECX;
  int iVar1;
  USubsystem *pUVar2;
  USubsystem *pUVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9729;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USubsystem::USubsystem(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UInput::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UInput::vftable_for_FExec_;
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x38,param_1 + 0x38,0x10,0x28,(_func_void_void_ptr_void_ptr *)&LAB_1030b609,
             (_func_void_void_ptr *)&LAB_10310ae1);
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x2b8,param_1 + 0x2b8,0xc,0xff,FStringNoInit_exref,~FStringNoInit_exref);
  *(undefined4 *)(in_ECX + 0xeac) = *(undefined4 *)(param_1 + 0xeac);
  *(undefined4 *)(in_ECX + 0xeb0) = *(undefined4 *)(param_1 + 0xeb0);
  *(undefined4 *)(in_ECX + 0xeb4) = *(undefined4 *)(param_1 + 0xeb4);
  *(undefined4 *)(in_ECX + 0xeb8) = *(undefined4 *)(param_1 + 0xeb8);
  *(undefined4 *)(in_ECX + 0xebc) = *(undefined4 *)(param_1 + 0xebc);
  *(undefined4 *)(in_ECX + 0xec0) = *(undefined4 *)(param_1 + 0xec0);
  *(undefined4 *)(in_ECX + 0xec4) = *(undefined4 *)(param_1 + 0xec4);
  *(undefined4 *)(in_ECX + 0xec8) = *(undefined4 *)(param_1 + 0xec8);
  pUVar2 = param_1 + 0xecc;
  pUVar3 = in_ECX + 0xecc;
  for (iVar1 = 0x3f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined2 *)pUVar3 = *(undefined2 *)pUVar2;
  pUVar3[2] = pUVar2[2];
  pUVar2 = param_1 + 0xfcc;
  pUVar3 = in_ECX + 0xfcc;
  for (iVar1 = 0x1fe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  pUVar2 = param_1 + 0x17c4;
  pUVar3 = in_ECX + 0x17c4;
  for (iVar1 = 0x1fe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  ExceptionList = local_c;
  return;
}


// ==== 10377be0 FUN_10377be0

void FUN_10377be0(USubsystem *param_1)

{
  USubsystem *in_ECX;
  int iVar1;
  USubsystem *pUVar2;
  USubsystem *pUVar3;
  USubsystem *pUVar4;
  int iVar5;
  int local_4;
  
  pUVar3 = param_1;
  USubsystem::operator=(in_ECX,param_1);
  pUVar4 = in_ECX + 0x3c;
  iVar5 = (int)param_1 - (int)in_ECX;
  local_4 = 0x28;
  param_1 = param_1 + 0x38;
  do {
    *(undefined4 *)(pUVar4 + -4) = *(undefined4 *)param_1;
    FString::operator=((FString *)pUVar4,(FString *)(pUVar4 + iVar5));
    param_1 = param_1 + 0x10;
    pUVar4 = pUVar4 + 0x10;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  pUVar4 = in_ECX + 0x2b8;
  param_1 = (USubsystem *)0xff;
  do {
    FStringNoInit::operator=((FStringNoInit *)pUVar4,(FStringNoInit *)(pUVar4 + iVar5));
    pUVar4 = pUVar4 + 0xc;
    param_1 = (USubsystem *)((int)param_1 + -1);
  } while (param_1 != (USubsystem *)0x0);
  *(undefined4 *)(in_ECX + 0xeac) = *(undefined4 *)(pUVar3 + 0xeac);
  *(undefined4 *)(in_ECX + 0xeb0) = *(undefined4 *)(pUVar3 + 0xeb0);
  *(undefined4 *)(in_ECX + 0xeb4) = *(undefined4 *)(pUVar3 + 0xeb4);
  *(undefined4 *)(in_ECX + 0xeb8) = *(undefined4 *)(pUVar3 + 0xeb8);
  *(undefined4 *)(in_ECX + 0xebc) = *(undefined4 *)(pUVar3 + 0xebc);
  *(undefined4 *)(in_ECX + 0xec0) = *(undefined4 *)(pUVar3 + 0xec0);
  *(undefined4 *)(in_ECX + 0xec4) = *(undefined4 *)(pUVar3 + 0xec4);
  *(undefined4 *)(in_ECX + 0xec8) = *(undefined4 *)(pUVar3 + 0xec8);
  pUVar4 = in_ECX + 0xecc;
  iVar1 = 0xff;
  do {
    *pUVar4 = pUVar4[iVar5];
    pUVar4 = pUVar4 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x33;
  pUVar4 = in_ECX + 0xfcc;
  pUVar2 = pUVar3 + 0xfdc;
  do {
    *(undefined8 *)pUVar4 = *(undefined8 *)(pUVar4 + iVar5);
    iVar1 = iVar1 + -1;
    *(undefined8 *)(pUVar4 + 8) = *(undefined8 *)(pUVar2 + -8);
    *(undefined8 *)(pUVar4 + 0x10) = *(undefined8 *)pUVar2;
    *(undefined8 *)(pUVar4 + 0x18) = *(undefined8 *)(pUVar2 + 8);
    *(undefined8 *)(pUVar4 + 0x20) = *(undefined8 *)(pUVar2 + 0x10);
    pUVar4 = pUVar4 + 0x28;
    pUVar2 = pUVar2 + 0x28;
  } while (iVar1 != 0);
  iVar1 = 0x33;
  pUVar4 = in_ECX + 0x17c4;
  pUVar3 = pUVar3 + 0x17d4;
  do {
    *(undefined8 *)pUVar4 = *(undefined8 *)(pUVar4 + iVar5);
    iVar1 = iVar1 + -1;
    *(undefined8 *)(pUVar4 + 8) = *(undefined8 *)(pUVar3 + -8);
    *(undefined8 *)(pUVar4 + 0x10) = *(undefined8 *)pUVar3;
    *(undefined8 *)(pUVar4 + 0x18) = *(undefined8 *)(pUVar3 + 8);
    *(undefined8 *)(pUVar4 + 0x20) = *(undefined8 *)(pUVar3 + 0x10);
    pUVar4 = pUVar4 + 0x28;
    pUVar3 = pUVar3 + 0x28;
  } while (iVar1 != 0);
  return;
}


// ==== 10377db0 FUN_10377db0

void FUN_10377db0(byte param_1)

{
  UInput *in_ECX;
  
  UInput::~UInput(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1fbc);
  }
  return;
}


// ==== 10377de0 FUN_10377de0

UInput * FUN_10377de0(byte param_1)

{
  UInput *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x1fbc,*(int *)(in_ECX + -4),UInput::~UInput);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UInput::~UInput(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1fbc);
  }
  return in_ECX;
}


// ==== 10377e60 FUN_10377e60

void FUN_10377e60(UCanvas *param_1)

{
  if (param_1 != (UCanvas *)0x0) {
    UCanvas::UCanvas(param_1);
    return;
  }
  return;
}


// ==== 10377e80 FUN_10377e80

void FUN_10377e80(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1035bac0(param_1);
  *in_ECX = FViewportRenderTarget::vftable;
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  ExceptionList = local_c;
  return;
}


// ==== 10377ef0 FUN_10377ef0

undefined4 FUN_10377ef0(void)

{
  return 0;
}


// ==== 10377f00 FUN_10377f00

undefined4 FUN_10377f00(void)

{
  return 1;
}


// ==== 10377f10 FUN_10377f10

undefined4 FUN_10377f10(void)

{
  return 0;
}


// ==== 10377f20 FUN_10377f20

undefined4 FUN_10377f20(void)

{
  return 0;
}


// ==== 10377f30 FUN_10377f30

undefined4 FUN_10377f30(void)

{
  return 1;
}


// ==== 10377f40 FUN_10377f40

void FUN_10377f40(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f9778;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10377fe0 FUN_10377fe0

void FUN_10377fe0(UMotionBlur *param_1)

{
  if (param_1 != (UMotionBlur *)0x0) {
    UMotionBlur::UMotionBlur(param_1);
    return;
  }
  return;
}


// ==== 10378000 FUN_10378000

void FUN_10378000(UBlackWhite *param_1)

{
  if (param_1 != (UBlackWhite *)0x0) {
    UBlackWhite::UBlackWhite(param_1);
    return;
  }
  return;
}


// ==== 10378020 FUN_10378020

void FUN_10378020(UFadeBlackWhite *param_1)

{
  if (param_1 != (UFadeBlackWhite *)0x0) {
    UFadeBlackWhite::UFadeBlackWhite(param_1);
    return;
  }
  return;
}


// ==== 10378040 FUN_10378040

void FUN_10378040(UCameraOverlay *param_1)

{
  if (param_1 != (UCameraOverlay *)0x0) {
    UCameraOverlay::UCameraOverlay(param_1);
    return;
  }
  return;
}


// ==== 10378060 FUN_10378060

void FUN_10378060(USubActionCameraEffect *param_1)

{
  if (param_1 != (USubActionCameraEffect *)0x0) {
    USubActionCameraEffect::USubActionCameraEffect(param_1);
    return;
  }
  return;
}


// ==== 10378080 FUN_10378080

void FUN_10378080(UProjectorPrimitive *param_1)

{
  if (param_1 != (UProjectorPrimitive *)0x0) {
    UProjectorPrimitive::UProjectorPrimitive(param_1);
    return;
  }
  return;
}


// ==== 103780a0 FUN_103780a0

void FUN_103780a0(UMesh *param_1)

{
  if (param_1 != (UMesh *)0x0) {
    UMesh::UMesh(param_1);
    return;
  }
  return;
}


// ==== 103780c0 FUN_103780c0

void FUN_103780c0(UMeshInstance *param_1)

{
  if (param_1 != (UMeshInstance *)0x0) {
    UMeshInstance::UMeshInstance(param_1);
    return;
  }
  return;
}


// ==== 103780e0 FUN_103780e0

int FUN_103780e0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x14);
  if ((*(int *)(in_ECX + 0x20) != 0) && (*(int *)(in_ECX + 0x28) < iVar1)) {
    iVar1 = *(int *)(in_ECX + 0x28);
  }
  return iVar1;
}


// ==== 10378100 FUN_10378100

int FUN_10378100(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (-1 < param_1) {
    iVar1 = *(int *)(in_ECX + 0x14);
    if (param_1 <= *(int *)(in_ECX + 0x14)) {
      iVar1 = param_1;
    }
    *(int *)(in_ECX + 0x28) = iVar1;
    *(undefined4 *)(in_ECX + 0x20) = 1;
    return iVar1;
  }
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  return *(int *)(in_ECX + 0x14);
}


// ==== 10378140 FUN_10378140

void FUN_10378140(void *param_1)

{
  void *_Src;
  int iVar1;
  int *in_ECX;
  
  _Src = (void *)in_ECX[4];
  iVar1 = (**(code **)(*in_ECX + 0x34))();
  _memcpy(param_1,_Src,iVar1 << 5);
  return;
}


// ==== 10378170 FUN_10378170

void FUN_10378170(int *param_1,int param_2)

{
  int in_ECX;
  
  *param_1 = param_2 * 0x20 + *(int *)(in_ECX + 0x10);
  return;
}


// ==== 10378190 FUN_10378190

void FUN_10378190(ULodMeshInstance *param_1)

{
  if (param_1 != (ULodMeshInstance *)0x0) {
    ULodMeshInstance::ULodMeshInstance(param_1);
    return;
  }
  return;
}


// ==== 103781b0 FUN_103781b0

void FUN_103781b0(UAnimation *param_1)

{
  if (param_1 != (UAnimation *)0x0) {
    UAnimation::UAnimation(param_1);
    return;
  }
  return;
}


// ==== 103781d0 FUN_103781d0

int FUN_103781d0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  if (0 < *(int *)(in_ECX + 0x70)) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      iVar1 = FName::operator==((FName *)&stack0x00000004,(FName *)(*(int *)(in_ECX + 0x6c) + iVar2)
                               );
      if (iVar1 != 0) {
        return iVar3 * 0x74 + *(int *)(in_ECX + 0x6c);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x74;
    } while (iVar3 < *(int *)(in_ECX + 0x70));
  }
  return 0;
}


// ==== 10378230 FUN_10378230

int * FUN_10378230(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (0 < *(int *)(in_ECX + 0x70)) {
    iVar3 = 0;
    iVar4 = 0;
    do {
      iVar1 = FName::operator==((FName *)&stack0x00000004,(FName *)(*(int *)(in_ECX + 0x6c) + iVar3)
                               );
      if (iVar1 != 0) {
        if (*(int *)(in_ECX + 0x34) < 1) {
          return (int *)(iVar4 * 0x5c + *(int *)(in_ECX + 0x60));
        }
        iVar3 = 0;
        if (0 < *(int *)(in_ECX + 100)) {
          piVar2 = *(int **)(in_ECX + 0x60);
          do {
            if (*piVar2 == iVar4) {
              return *(int **)(in_ECX + 0x60) + iVar3 * 0x17;
            }
            iVar3 = iVar3 + 1;
            piVar2 = piVar2 + 0x17;
          } while (iVar3 < *(int *)(in_ECX + 100));
        }
        (*(code *)**(undefined4 **)(in_ECX + 0x44))(iVar4);
        if (*(int *)(in_ECX + 100) == 0) {
          return (int *)0x0;
        }
        piVar2 = (int *)(*(int *)(in_ECX + 100) * 0x5c + -0x5c + *(int *)(in_ECX + 0x60));
        if (piVar2 == (int *)0x0) {
          return (int *)0x0;
        }
        *piVar2 = iVar4;
        return piVar2;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x74;
    } while (iVar4 < *(int *)(in_ECX + 0x70));
  }
  return (int *)0x0;
}


// ==== 10378300 FUN_10378300

void FUN_10378300(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x70)) {
    do {
      iVar1 = 0;
      if (0 < *(int *)(in_ECX + 100)) {
        piVar2 = *(int **)(in_ECX + 0x60);
        do {
          if (*piVar2 == iVar3) goto LAB_10378350;
          iVar1 = iVar1 + 1;
          piVar2 = piVar2 + 0x17;
        } while (iVar1 < *(int *)(in_ECX + 100));
      }
      (*(code *)**(undefined4 **)(in_ECX + 0x44))(iVar3);
      if ((*(int *)(in_ECX + 100) != 0) &&
         (piVar2 = (int *)(*(int *)(in_ECX + 100) * 0x5c + -0x5c + *(int *)(in_ECX + 0x60)),
         piVar2 != (int *)0x0)) {
        *piVar2 = iVar3;
      }
LAB_10378350:
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x70));
  }
  return;
}


// ==== 10378380 FUN_10378380

void FUN_10378380(UDummyAudio *param_1)

{
  if (param_1 != (UDummyAudio *)0x0) {
    UDummyAudio::UDummyAudio(param_1);
    return;
  }
  return;
}


// ==== 103783a0 FUN_103783a0

void FUN_103783a0(UTerrainPrimitive *param_1)

{
  if (param_1 != (UTerrainPrimitive *)0x0) {
    UTerrainPrimitive::UTerrainPrimitive(param_1);
    return;
  }
  return;
}


// ==== 103783c0 FUN_103783c0

bool FUN_103783c0(int param_1,int param_2)

{
  int in_ECX;
  
  param_1 = *(int *)(in_ECX + 0x210c) * param_2 + param_1;
  return (*(uint *)(*(int *)(in_ECX + 0x219c) + (param_1 >> 5) * 4) & 1 << ((byte)param_1 & 0x1f))
         != 0;
}


// ==== 10378410 FUN_10378410

void FUN_10378410(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int in_ECX;
  
  param_1 = *(int *)(in_ECX + 0x210c) * param_2 + param_1;
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  puVar1 = (uint *)(*(int *)(in_ECX + 0x219c) + (param_1 >> 5) * 4);
  if (param_3 != 0) {
    *puVar1 = *puVar1 | uVar2;
    return;
  }
  *puVar1 = *puVar1 & ~uVar2;
  return;
}


// ==== 10378460 FUN_10378460

bool FUN_10378460(int param_1,int param_2)

{
  int in_ECX;
  
  param_1 = *(int *)(in_ECX + 0x210c) * param_2 + param_1;
  return (*(uint *)(*(int *)(in_ECX + 0x21a8) + (param_1 >> 5) * 4) & 1 << ((byte)param_1 & 0x1f))
         != 0;
}


// ==== 103784b0 FUN_103784b0

void FUN_103784b0(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int in_ECX;
  
  param_1 = *(int *)(in_ECX + 0x210c) * param_2 + param_1;
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  puVar1 = (uint *)(*(int *)(in_ECX + 0x21a8) + (param_1 >> 5) * 4);
  if (param_3 != 0) {
    *puVar1 = *puVar1 | uVar2;
    return;
  }
  *puVar1 = *puVar1 & ~uVar2;
  return;
}


// ==== 10378500 FUN_10378500

undefined4 FUN_10378500(int param_1,int param_2)

{
  int in_ECX;
  
  if (0 < *(int *)(in_ECX + 0x21b8)) {
    return *(undefined4 *)
            (*(int *)(in_ECX + 0x21b4) + (*(int *)(in_ECX + 0x210c) * param_2 + param_1) * 4);
  }
  return 0;
}


// ==== 10378540 FUN_10378540

bool FUN_10378540(int param_1,int param_2)

{
  int in_ECX;
  
  param_1 = *(int *)(in_ECX + 0x210c) * param_2 + param_1;
  return (*(uint *)(*(int *)(in_ECX + 0x225c) + (param_1 >> 5) * 4) & 1 << ((byte)param_1 & 0x1f))
         != 0;
}


// ==== 10378590 FUN_10378590

bool FUN_10378590(int param_1,int param_2)

{
  int in_ECX;
  
  param_1 = *(int *)(in_ECX + 0x210c) * param_2 + param_1;
  return (*(uint *)(*(int *)(in_ECX + 0x2268) + (param_1 >> 5) * 4) & 1 << ((byte)param_1 & 0x1f))
         != 0;
}


// ==== 103785e0 FUN_103785e0

void FUN_103785e0(void *param_1)

{
  int in_ECX;
  
  _memcpy(param_1,*(void **)(in_ECX + 0xc),*(int *)(in_ECX + 0x10) * 0x18);
  return;
}


// ==== 10378610 FUN_10378610

void FUN_10378610(int *param_1,int param_2)

{
  int in_ECX;
  
  *param_1 = *(int *)(in_ECX + 0xc) + param_2 * 0x18;
  return;
}


// ==== 10378630 FUN_10378630

void FUN_10378630(void *param_1)

{
  int in_ECX;
  
  _memcpy(param_1,*(void **)(in_ECX + 0xc),*(int *)(in_ECX + 0x10) * 4);
  return;
}


// ==== 10378660 FUN_10378660

void FUN_10378660(int *param_1,int param_2)

{
  int in_ECX;
  
  *param_1 = *(int *)(in_ECX + 0xc) + param_2 * 4;
  return;
}


// ==== 10378680 FUN_10378680

void FUN_10378680(void *param_1)

{
  int in_ECX;
  
  _memcpy(param_1,*(void **)(in_ECX + 0xc),*(int *)(in_ECX + 0x10) * 8);
  return;
}


// ==== 103786b0 FUN_103786b0

void FUN_103786b0(int *param_1,int param_2)

{
  int in_ECX;
  
  *param_1 = *(int *)(in_ECX + 0xc) + param_2 * 8;
  return;
}


// ==== 103786d0 FUN_103786d0

int FUN_103786d0(int *param_1,int param_2)

{
  int iVar1;
  UObject *pUVar2;
  int iVar3;
  int in_ECX;
  
  iVar1 = (**(code **)(*param_1 + 0xac))(param_2);
  if ((iVar1 == 0) && (iVar1 = *(int *)(*(int *)(in_ECX + 0x13c) + param_2 * 0x14), iVar1 == 0)) {
    pUVar2 = UClass::GetDefaultObject(&UMaterial::PrivateStaticClass);
    iVar1 = thunk_FUN_10370560(pUVar2);
    iVar1 = *(int *)(iVar1 + 0x38);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if ((((*(byte *)(param_1 + 0xe8) & 1) != 0) &&
      (iVar3 = (**(code **)(*param_1 + 0x124))(), iVar3 != 0)) &&
     (*(int *)(iVar3 + 0x578) = iVar1, iVar1 != 0)) {
    return iVar3;
  }
  return iVar1;
}


// ==== 10378770 FUN_10378770

bool FUN_10378770(int param_1)

{
  int in_ECX;
  
  if ((-1 < param_1) && (param_1 < *(int *)(in_ECX + 0x140))) {
    return *(int *)(*(int *)(in_ECX + 0x13c) + 0x10 + param_1 * 0x14) == 0;
  }
  return false;
}


// ==== 103787b0 FUN_103787b0

void FUN_103787b0(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x5c) = param_1;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    *(undefined4 *)(in_ECX + 0x60) = **(undefined4 **)(param_1 + 0x48);
    return;
  }
  *(undefined4 *)(in_ECX + 0x60) = 0;
  return;
}


// ==== 103787e0 FUN_103787e0

void FUN_103787e0(UFluidSurfacePrimitive *param_1)

{
  if (param_1 != (UFluidSurfacePrimitive *)0x0) {
    UFluidSurfacePrimitive::UFluidSurfacePrimitive(param_1);
    return;
  }
  return;
}


// ==== 10378800 FUN_10378800

bool FUN_10378800(int param_1,int param_2)

{
  int in_ECX;
  
  param_1 = *(int *)(in_ECX + 0x3c4) * param_2 + param_1;
  return (*(uint *)(*(int *)(in_ECX + 0x430) + (param_1 >> 5) * 4) & 1 << ((byte)param_1 & 0x1f)) !=
         0;
}


// ==== 10378850 FUN_10378850

void FUN_10378850(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int in_ECX;
  
  param_1 = *(int *)(in_ECX + 0x3c4) * param_2 + param_1;
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  puVar1 = (uint *)(*(int *)(in_ECX + 0x430) + (param_1 >> 5) * 4);
  if (param_3 != 0) {
    *puVar1 = *puVar1 | uVar2;
    return;
  }
  *puVar1 = *puVar1 & ~uVar2;
  return;
}


// ==== 103788a0 FUN_103788a0

void FUN_103788a0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107f97ae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UOrcMove::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UOrcMove::vftable_for_FExec_;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10520200();
  local_4 = 0xffffffff;
  UL2OrcMove::~UL2OrcMove((UL2OrcMove *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10378930 FUN_10378930

void FUN_10378930(void)

{
  UL2OrcMove *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f97e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UL2OrcMove::UL2OrcMove(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UOrcMove::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UOrcMove::vftable_for_FExec_;
  thunk_FUN_1051f5e0();
  ExceptionList = local_c;
  return;
}


// ==== 103789a0 FUN_103789a0

void FUN_103789a0(byte param_1)

{
  UOrcMove *in_ECX;
  
  UOrcMove::~UOrcMove(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x5a0);
  }
  return;
}


// ==== 103789d0 FUN_103789d0

UOrcMove * FUN_103789d0(byte param_1)

{
  UOrcMove *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x5a0,*(int *)(in_ECX + -4),UOrcMove::~UOrcMove);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UOrcMove::~UOrcMove(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x5a0);
  }
  return in_ECX;
}


// ==== 10378a50 FUN_10378a50

void FUN_10378a50(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f980b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (in_ECX != param_1) {
    ExceptionList = &local_c;
    *in_ECX = *param_1;
    in_ECX[1] = param_1[1];
    in_ECX[2] = param_1[2];
  }
  if (in_ECX + 3 != param_1 + 3) {
    in_ECX[3] = param_1[3];
    in_ECX[4] = param_1[4];
    in_ECX[5] = param_1[5];
  }
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  thunk_FUN_103680d0(param_1 + 0xc);
  puVar2 = param_1 + 0x129;
  puVar3 = in_ECX + 0x129;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_1 + 0x139;
  puVar3 = in_ECX + 0x139;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_1 + 0x149;
  puVar3 = in_ECX + 0x149;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  ExceptionList = local_c;
  return;
}


// ==== 10378b70 FUN_10378b70

void FUN_10378b70(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX != param_1) {
    *in_ECX = *param_1;
    in_ECX[1] = param_1[1];
    in_ECX[2] = param_1[2];
  }
  if (in_ECX + 3 != param_1 + 3) {
    in_ECX[3] = param_1[3];
    in_ECX[4] = param_1[4];
    in_ECX[5] = param_1[5];
  }
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  thunk_FUN_103681c0(param_1 + 0xc);
  puVar1 = in_ECX + 0x129;
  iVar3 = (int)param_1 - (int)in_ECX;
  iVar2 = 0x10;
  do {
    *puVar1 = *(undefined4 *)(iVar3 + (int)puVar1);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = in_ECX + 0x139;
  iVar2 = 0x40;
  do {
    *(undefined1 *)puVar1 = *(undefined1 *)((int)puVar1 + iVar3);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = in_ECX + 0x149;
  iVar2 = 0x40;
  do {
    *(undefined1 *)puVar1 = *(undefined1 *)((int)puVar1 + iVar3);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


// ==== 10378c60 FUN_10378c60

void FUN_10378c60(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9829;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10378d30 FUN_10378d30

void FUN_10378d30(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10378da0 FUN_10378da0

FArchive * FUN_10378da0(FArchive *param_1,TArray<unsigned_short> *param_2)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f9840;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  TArray<unsigned_short>::CountBytes(param_2,param_1);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      puVar3 = TArray<unsigned_short>::operator()(param_2,iVar1);
      thunk_FUN_10330000(param_1,puVar3);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    TArray<unsigned_short>::Empty(param_2,local_18);
    for (iVar1 = 0; iVar1 < local_18; iVar1 = iVar1 + 1) {
      uVar2 = thunk_FUN_103705f0(2,param_2);
      thunk_FUN_10330000(param_1,uVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 10378e61 Catch@10378e61

void Catch_10378e61(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 10378e75 Catch@10378e75

void Catch_10378e75(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10378ed0 FUN_10378ed0

undefined1 FUN_10378ed0(void)

{
  undefined1 uVar1;
  TArray<unsigned_char> *in_ECX;
  
  if (*(int *)(in_ECX + 4) < 1) {
    appFailAssert("ArrayNum>0",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x18e);
  }
  uVar1 = *(undefined1 *)(*(int *)(in_ECX + 4) + -1 + *(int *)in_ECX);
  TArray<unsigned_char>::Remove(in_ECX,*(int *)(in_ECX + 4) + -1,1);
  return uVar1;
}


// ==== 10378f20 FUN_10378f20

FArchive * FUN_10378f20(FArchive *param_1,FArray *param_2)

{
  FCompactIndex *pFVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f9850;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,1);
  pFVar1 = (FCompactIndex *)(param_2 + 4);
  operator<<(param_1,pFVar1);
  iVar2 = FArchive::IsLoading(param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)pFVar1;
    FArray::Realloc(param_2,1);
  }
  (**(code **)(*(int *)param_1 + 4))(*(undefined4 *)param_2,*(undefined4 *)pFVar1);
  ExceptionList = local_10;
  return param_1;
}


// ==== 10378fa4 Catch@10378fa4

void Catch_10378fa4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10378fb8 Catch@10378fb8

void Catch_10378fb8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10379010 FUN_10379010

void FUN_10379010(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  
  if (in_ECX != param_1) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar1 = FArray::Add(in_ECX,1,1);
        if ((undefined1 *)(*(int *)in_ECX + iVar1) != (undefined1 *)0x0) {
          *(undefined1 *)(*(int *)in_ECX + iVar1) = *(undefined1 *)(iVar2 + *(int *)param_1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10379070 FUN_10379070

void FUN_10379070(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9869;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    do {
      *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *(undefined4 *)(*param_1 + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  ExceptionList = local_c;
  return;
}


// ==== 10379100 FUN_10379100

void FUN_10379100(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f9889;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103791c0 FUN_103791c0

void FUN_103791c0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10379230 FUN_10379230

void FUN_10379230(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f98a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    do {
      *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *(undefined4 *)(*param_1 + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  ExceptionList = local_c;
  return;
}


// ==== 103792c0 FUN_103792c0

void FUN_103792c0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f98c9;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10379380 FUN_10379380

void FUN_10379380(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 103793f0 FUN_103793f0

void FUN_103793f0(int *param_1)

{
  int iVar1;
  FRebuildOptions *this;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f98e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x2c);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x2c);
      this = (FRebuildOptions *)(iVar1 * 0x2c + *(int *)in_ECX);
      if (this != (FRebuildOptions *)0x0) {
        FRebuildOptions::FRebuildOptions(this,(FRebuildOptions *)(*param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x2c;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 103794b0 FUN_103794b0

void FUN_103794b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9909;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0xc);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 103795a0 FUN_103795a0

void FUN_103795a0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0xc,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 10379630 FUN_10379630

void FUN_10379630(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  
  iVar2 = FArray::Add(in_ECX,1,0xc);
  puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  return;
}


// ==== 10379670 FUN_10379670

void FUN_10379670(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9929;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    do {
      *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *(undefined4 *)(*param_1 + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  ExceptionList = local_c;
  return;
}


// ==== 10379700 FUN_10379700

void FUN_10379700(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f9949;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = *(int *)(in_ECX + 4);
  ExceptionList = &local_c;
  if (iVar1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,0,iVar1,4);
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103797c0 FUN_103797c0

void FUN_103797c0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10379830 FUN_10379830

void FUN_10379830(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9969;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10379900 FUN_10379900

void FUN_10379900(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10379970 FUN_10379970

void FUN_10379970(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9989;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0xc);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10379a40 FUN_10379a40

void FUN_10379a40(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f99a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0xc);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10379b10 FUN_10379b10

void FUN_10379b10(int *param_1)

{
  FWayPoint *this;
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f99c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x18);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x18);
      this = (FWayPoint *)(*(int *)in_ECX + iVar1 * 0x18);
      if (this != (FWayPoint *)0x0) {
        FWayPoint::FWayPoint(this,(FWayPoint *)(*param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10379bd0 FUN_10379bd0

void FUN_10379bd0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f99e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10379c80 FUN_10379c80

void FUN_10379c80(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9a09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x14c);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14c);
      puVar3 = (undefined4 *)(iVar2 * 0x14c + *(int *)in_ECX);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0x53; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x14c);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 10379d80 FUN_10379d80

void FUN_10379d80(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9a29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x10);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10379e50 FUN_10379e50

void FUN_10379e50(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9a49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0xc);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10379f20 FUN_10379f20

void FUN_10379f20(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9a69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x2c);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x2c);
      puVar3 = (undefined4 *)(iVar2 * 0x2c + *(int *)in_ECX);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x2c);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037a010 FUN_1037a010

void FUN_1037a010(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9a89;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037a0c0 FUN_1037a0c0

void FUN_1037a0c0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9aa9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],8);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,8);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037a180 FUN_1037a180

void FUN_1037a180(int *param_1)

{
  int *piVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9ac9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x28);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x28);
      puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x28);
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x28);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037a260 FUN_1037a260

void FUN_1037a260(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9ae9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x40);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x40);
      puVar3 = (undefined4 *)(iVar2 * 0x40 + *(int *)in_ECX);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x40);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037a350 FUN_1037a350

void FUN_1037a350(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9b09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x10);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037a420 FUN_1037a420

void FUN_1037a420(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9b29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037a4d0 FUN_1037a4d0

void FUN_1037a4d0(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,4);
  *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 1037a500 FUN_1037a500

void FUN_1037a500(int *param_1)

{
  int *piVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9b49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x1c);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x1c);
      puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x1c);
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x1c);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037a630 FUN_1037a630

void FUN_1037a630(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9b69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x18);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x18);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
        puVar1[5] = *(undefined4 *)(iVar2 + 0x14);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037a710 FUN_1037a710

void FUN_1037a710(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9b94;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(in_ECX + 3),param_1,1);
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = TLazyArray<unsigned_char>::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1037a790 FUN_1037a790

void FUN_1037a790(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f9bd7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = TLazyArray<unsigned_char>::vftable;
  local_8 = 1;
  if ((int *)in_ECX[1] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[1] + 0x44))();
  }
  local_8 = 0xffffffff;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(in_ECX + 3));
  ExceptionList = local_10;
  return;
}


// ==== 1037a7f6 Catch@1037a7f6

void Catch_1037a7f6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1037a80a Catch@1037a80a

void Catch_1037a80a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TLazyArray::~TLazyArray");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1037a850 FUN_1037a850

void FUN_1037a850(void)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f9bf0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (0 < *(int *)(in_ECX + 8)) {
    ExceptionList = &local_10;
    uVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0x28))();
    (**(code **)(**(int **)(in_ECX + 4) + 0x3c))(*(undefined4 *)(in_ECX + 8));
    thunk_FUN_10378f20(*(undefined4 *)(in_ECX + 4),in_ECX + 0xc);
    *(int *)(in_ECX + 8) = -*(int *)(in_ECX + 8);
    (**(code **)(**(int **)(in_ECX + 4) + 0x3c))(uVar1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1037a8d5 Catch@1037a8d5

void Catch_1037a8d5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1037a8e9 Catch@1037a8e9

void Catch_1037a8e9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TLazyArray::Load");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1037a940 FUN_1037a940

FArchive * FUN_1037a940(FArchive *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f9c00;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 != 0) {
    local_18 = 0;
    iVar1 = FArchive::Ver(param_1);
    if (iVar1 < 0x3e) {
      (**(code **)(*(int *)param_1 + 0x40))(param_2);
      operator<<(param_1,(FCompactIndex *)&local_20);
      local_18 = (**(code **)(*(int *)param_1 + 0x28))();
      local_18 = local_18 + local_20;
    }
    else {
      thunk_FUN_10330040(param_1,&local_18);
      if (((byte)*GUglyHackFlags_exref & 8) == 0) {
        (**(code **)(*(int *)param_1 + 0x40))(param_2);
      }
      else if (param_2 == (undefined4 *)0x0) {
        thunk_FUN_10378f20(param_1,0);
      }
      else {
        thunk_FUN_10378f20(param_1,param_2 + 3);
      }
    }
    if (*(int *)GLazyLoad_exref == 0) {
      (**(code **)*param_2)();
    }
    (**(code **)(*(int *)param_1 + 0x3c))(local_18);
    ExceptionList = local_10;
    return param_1;
  }
  iVar1 = FArchive::IsSaving(param_1);
  if (iVar1 != 0) {
    iVar1 = FArchive::Ver(param_1);
    if (0x3d < iVar1) {
      local_1c = (**(code **)(*(int *)param_1 + 0x28))();
      if (param_2 == (undefined4 *)0x0) {
        param_2 = (undefined4 *)0x0;
      }
      else {
        param_2 = param_2 + 3;
      }
      uVar2 = thunk_FUN_10330040(param_1,&local_1c,param_2);
      thunk_FUN_10378f20(uVar2);
      local_20 = (**(code **)(*(int *)param_1 + 0x28))();
      (**(code **)(*(int *)param_1 + 0x3c))(local_1c);
      thunk_FUN_10330040(param_1,&local_20);
      (**(code **)(*(int *)param_1 + 0x3c))(local_20);
      ExceptionList = local_10;
      return param_1;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    param_2 = param_2 + 3;
  }
  thunk_FUN_10378f20(param_1,param_2);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1037aaf0 Catch@1037aaf0

void Catch_1037aaf0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 1037ab04 Catch@1037ab04

void Catch_1037ab04(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TLazyArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1037aba0 FUN_1037aba0

void FUN_1037aba0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9c19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x14);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037ac80 FUN_1037ac80

void FUN_1037ac80(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9c39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037ad30 FUN_1037ad30

int FUN_1037ad30(ushort *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & (uint)*param_1) * 4);
  if (iVar2 != -1) {
    iVar1 = *in_ECX;
    do {
      if (*(ushort *)(iVar1 + 4 + iVar2 * 8) == *param_1) {
        return iVar1 + 6 + iVar2 * 8;
      }
      iVar2 = *(int *)(iVar1 + iVar2 * 8);
    } while (iVar2 != -1);
  }
  return 0;
}


// ==== 1037ad80 FUN_1037ad80

void FUN_1037ad80(int *param_1)

{
  int *piVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9c59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x28);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x28);
      puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x28);
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x28);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037ae60 FUN_1037ae60

void FUN_1037ae60(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = FArray::Add(in_ECX,1,4);
  *(undefined4 *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return;
}


// ==== 1037ae90 FUN_1037ae90

void FUN_1037ae90(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9c79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],8);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,8);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037af50 FUN_1037af50

void FUN_1037af50(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9c99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x14);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037b030 FUN_1037b030

void FUN_1037b030(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9cb9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037b100 FUN_1037b100

void FUN_1037b100(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,8,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,8);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1;
          *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
          puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 1037b190 FUN_1037b190

void FUN_1037b190(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,8,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,8);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1;
          *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
          puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 1037b260 FUN_1037b260

void FUN_1037b260(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9cd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037b310 FUN_1037b310

void FUN_1037b310(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9cf9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x10);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037b3e0 FUN_1037b3e0

void FUN_1037b3e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9d19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x44);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x44);
      puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x44);
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x44);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037b4c0 FUN_1037b4c0

void FUN_1037b4c0(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9d39;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    ExceptionList = &local_c;
    do {
      local_4 = 0xffffffff;
      FMatrix::~FMatrix((FMatrix *)(*(int *)in_ECX + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x44;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x44,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1037b550 FUN_1037b550

void FUN_1037b550(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    thunk_FUN_1037b4c0(*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x44);
        puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x44);
        if (puVar4 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x44);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 1037b5e0 FUN_1037b5e0

void FUN_1037b5e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9d59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x4c);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x4c);
      puVar3 = (undefined4 *)(iVar2 * 0x4c + *(int *)in_ECX);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x4c);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037b6d0 FUN_1037b6d0

void FUN_1037b6d0(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9d79;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    ExceptionList = &local_c;
    do {
      local_4 = 0xffffffff;
      FMatrix::~FMatrix((FMatrix *)(*(int *)in_ECX + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x4c;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x4c,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1037b760 FUN_1037b760

void FUN_1037b760(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    thunk_FUN_1037b6d0(*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x4c);
        puVar3 = (undefined4 *)(iVar2 * 0x4c + *(int *)in_ECX);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x4c);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 1037b7f0 FUN_1037b7f0

void FUN_1037b7f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9d99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x48);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x48);
      puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x48);
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x48);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037b8d0 FUN_1037b8d0

void FUN_1037b8d0(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9db9;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    ExceptionList = &local_c;
    do {
      local_4 = 0xffffffff;
      FMatrix::~FMatrix((FMatrix *)(*(int *)in_ECX + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x48;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x48,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1037b960 FUN_1037b960

void FUN_1037b960(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    thunk_FUN_1037b8d0(*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x48);
        puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x48);
        if (puVar4 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x48);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 1037b9f0 FUN_1037b9f0

void FUN_1037b9f0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9dd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],8);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,8);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037bab0 FUN_1037bab0

void FUN_1037bab0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9df9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037bb60 FUN_1037bb60

void FUN_1037bb60(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9e19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037bc10 FUN_1037bc10

void FUN_1037bc10(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9e39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037bcc0 FUN_1037bcc0

void FUN_1037bcc0(int *param_1)

{
  int *piVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9e59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x24);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x24);
      puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x24);
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x24);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037bda0 FUN_1037bda0

void FUN_1037bda0(int *param_1)

{
  FKeyValuePair *this;
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9e79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x18);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x18);
      this = (FKeyValuePair *)(*(int *)in_ECX + iVar1 * 0x18);
      if (this != (FKeyValuePair *)0x0) {
        FKeyValuePair::FKeyValuePair(this,(FKeyValuePair *)(*param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037be60 FUN_1037be60

void FUN_1037be60(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9e99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037bf10 FUN_1037bf10

void FUN_1037bf10(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9eb9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037bfc0 FUN_1037bfc0

void FUN_1037bfc0(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9ed9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x28);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x28);
      if (*(int *)in_ECX + iVar1 * 0x28 != 0) {
        thunk_FUN_1036a690(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037c080 FUN_1037c080

void FUN_1037c080(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9ef9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x34);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x34);
      if (iVar1 * 0x34 + *(int *)in_ECX != 0) {
        thunk_FUN_1036a790(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x34;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037c140 FUN_1037c140

void FUN_1037c140(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9f19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x14);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037c220 FUN_1037c220

void FUN_1037c220(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9f39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037c2d0 FUN_1037c2d0

void FUN_1037c2d0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9f59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037c380 FUN_1037c380

void FUN_1037c380(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9f79;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037c430 FUN_1037c430

void FUN_1037c430(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9f99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037c4e0 FUN_1037c4e0

void FUN_1037c4e0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9fb9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0xc);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037c5b0 FUN_1037c5b0

void FUN_1037c5b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f9fd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],8);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,8);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037c670 FUN_1037c670

void FUN_1037c670(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa001;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 1037c6e0 FUN_1037c6e0

void FUN_1037c6e0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa029;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x10);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037c7b0 FUN_1037c7b0

void FUN_1037c7b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa049;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037c860 FUN_1037c860

void FUN_1037c860(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa069;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037c910 FUN_1037c910

void FUN_1037c910(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa089;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037c9c0 FUN_1037c9c0

void FUN_1037c9c0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa0a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037ca70 FUN_1037ca70

void FUN_1037ca70(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa0c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037cb20 FUN_1037cb20

void FUN_1037cb20(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa0e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037cbd0 FUN_1037cbd0

void FUN_1037cbd0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa109;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037cc80 FUN_1037cc80

void FUN_1037cc80(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa129;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037cd30 FUN_1037cd30

void FUN_1037cd30(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa149;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037cde0 FUN_1037cde0

void FUN_1037cde0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa169;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037ce90 FUN_1037ce90

void FUN_1037ce90(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa189;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037cf40 FUN_1037cf40

void FUN_1037cf40(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa1a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037cff0 FUN_1037cff0

void FUN_1037cff0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa1c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037d0a0 FUN_1037d0a0

void FUN_1037d0a0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa1e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037d150 FUN_1037d150

void FUN_1037d150(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa209;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037d200 FUN_1037d200

void FUN_1037d200(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa229;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x18);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x18);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
        puVar1[5] = *(undefined4 *)(iVar2 + 0x14);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037d2e0 FUN_1037d2e0

void FUN_1037d2e0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa249;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],8);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,8);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037d3a0 FUN_1037d3a0

void FUN_1037d3a0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa269;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],8);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,8);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037d460 FUN_1037d460

void FUN_1037d460(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa289;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x10);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037d530 FUN_1037d530

void FUN_1037d530(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa2a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],8);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,8);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037d5f0 FUN_1037d5f0

void FUN_1037d5f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa2c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x28);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x28);
      puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x28);
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x28);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037d6f0 FUN_1037d6f0

void FUN_1037d6f0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa2e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x10);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037d7c0 FUN_1037d7c0

void FUN_1037d7c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa309;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0xe0);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xe0);
      puVar3 = (undefined4 *)(iVar2 * 0xe0 + *(int *)in_ECX);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0x38; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0xe0);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037d8c0 FUN_1037d8c0

void FUN_1037d8c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa329;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x1c);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x1c);
      puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x1c);
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x1c);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037d9b0 FUN_1037d9b0

void FUN_1037d9b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa349;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x18);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x18);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
        puVar1[5] = *(undefined4 *)(iVar2 + 0x14);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037da90 FUN_1037da90

void FUN_1037da90(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa369;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x20);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x20);
      puVar3 = (undefined4 *)(iVar2 * 0x20 + *(int *)in_ECX);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x20);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037db80 FUN_1037db80

void FUN_1037db80(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa389;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x34);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x34);
      puVar3 = (undefined4 *)(iVar2 * 0x34 + *(int *)in_ECX);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x34);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037dc70 FUN_1037dc70

void FUN_1037dc70(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa3a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x20);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x20);
      puVar3 = (undefined4 *)(iVar2 * 0x20 + *(int *)in_ECX);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x20);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037dd60 FUN_1037dd60

void FUN_1037dd60(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa3c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x10);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037de30 FUN_1037de30

void FUN_1037de30(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa3e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x10);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037df00 FUN_1037df00

void FUN_1037df00(int *param_1)

{
  int *piVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa409;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x48);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x48);
      puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x48);
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x48);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037dfe0 FUN_1037dfe0

void FUN_1037dfe0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa429;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0xc);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037e0b0 FUN_1037e0b0

void FUN_1037e0b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa449;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0xc);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037e180 FUN_1037e180

void FUN_1037e180(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa469;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],8);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,8);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037e240 FUN_1037e240

void FUN_1037e240(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa489;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],8);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,8);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037e300 FUN_1037e300

void FUN_1037e300(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa4a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],8);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,8);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037e3c0 FUN_1037e3c0

void FUN_1037e3c0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa4c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037e470 FUN_1037e470

void FUN_1037e470(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa4e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x14);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037e550 FUN_1037e550

void FUN_1037e550(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa509;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037e600 FUN_1037e600

void FUN_1037e600(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa529;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037e6d0 FUN_1037e6d0

void FUN_1037e6d0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 1037e740 FUN_1037e740

void FUN_1037e740(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa549;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037e7f0 FUN_1037e7f0

void FUN_1037e7f0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa569;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037e8a0 FUN_1037e8a0

void FUN_1037e8a0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa589;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037e950 FUN_1037e950

void FUN_1037e950(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa5a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037ea00 FUN_1037ea00

void FUN_1037ea00(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa5c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x14);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037eae0 FUN_1037eae0

void FUN_1037eae0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa5e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037eb90 FUN_1037eb90

void FUN_1037eb90(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa609;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037ec40 FUN_1037ec40

void FUN_1037ec40(int *param_1)

{
  int *piVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa629;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x3c);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x3c);
      puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x3c);
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x3c);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037ed20 FUN_1037ed20

void FUN_1037ed20(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa649;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x118);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x118);
      puVar3 = (undefined4 *)(iVar2 * 0x118 + *(int *)in_ECX);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0x46; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x118);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037ee40 FUN_1037ee40

void FUN_1037ee40(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa669;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037eef0 FUN_1037eef0

void FUN_1037eef0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa689;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x10);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037efc0 FUN_1037efc0

void FUN_1037efc0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa6a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],8);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,8);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037f080 FUN_1037f080

void FUN_1037f080(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa6c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x20);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x20);
      puVar3 = (undefined4 *)(iVar2 * 0x20 + *(int *)in_ECX);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x20);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037f190 FUN_1037f190

void FUN_1037f190(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x20,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x20);
        puVar3 = (undefined4 *)(iVar2 * 0x20 + *(int *)in_ECX);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x20);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return;
}


// ==== 1037f220 FUN_1037f220

void FUN_1037f220(undefined4 *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FArray::Add(in_ECX,1,0x20);
  puVar3 = (undefined4 *)(iVar1 * 0x20 + *(int *)in_ECX);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


// ==== 1037f250 FUN_1037f250

void FUN_1037f250(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa6e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037f300 FUN_1037f300

void FUN_1037f300(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa709;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],8);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,8);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037f3c0 FUN_1037f3c0

void FUN_1037f3c0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa729;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0xc);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037f490 FUN_1037f490

void FUN_1037f490(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa749;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],8);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,8);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037f550 FUN_1037f550

void FUN_1037f550(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa769;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x10);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037f620 FUN_1037f620

void FUN_1037f620(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa789;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x10);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037f710 FUN_1037f710

void FUN_1037f710(FArray *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x10,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *(int *)param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 1037f7b0 FUN_1037f7b0

void FUN_1037f7b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa7a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0xc);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037f880 FUN_1037f880

void FUN_1037f880(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa7c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],8);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,8);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037f940 FUN_1037f940

void FUN_1037f940(int *param_1)

{
  int *piVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa7e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x30);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x30);
      puVar4 = (undefined4 *)(iVar2 * 0x30 + *(int *)in_ECX);
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x30);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037fa30 FUN_1037fa30

void FUN_1037fa30(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa809;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x20);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x20);
      puVar3 = (undefined4 *)(iVar2 * 0x20 + *(int *)in_ECX);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x20);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037fb20 FUN_1037fb20

void FUN_1037fb20(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa829;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x70);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x70);
      puVar3 = (undefined4 *)(iVar2 * 0x70 + *(int *)in_ECX);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x70);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037fc10 FUN_1037fc10

void FUN_1037fc10(int *param_1)

{
  int *piVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa849;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x3c);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x3c);
      puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x3c);
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x3c);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037fcf0 FUN_1037fcf0

void FUN_1037fcf0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa869;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x2c);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x2c);
      puVar3 = (undefined4 *)(iVar2 * 0x2c + *(int *)in_ECX);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x2c);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037fde0 FUN_1037fde0

void FUN_1037fde0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa889;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0xc);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037feb0 FUN_1037feb0

void FUN_1037feb0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa8a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1037ff60 FUN_1037ff60

void FUN_1037ff60(void)

{
  undefined4 uVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107fa8c0;
  local_10 = ExceptionList;
  local_8 = 0;
  if (0 < *(int *)(in_ECX + 8)) {
    ExceptionList = &local_10;
    uVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0x28))();
    (**(code **)(**(int **)(in_ECX + 4) + 0x3c))(*(undefined4 *)(in_ECX + 8));
    thunk_FUN_10378da0(*(undefined4 *)(in_ECX + 4),in_ECX + 0xc);
    *(int *)(in_ECX + 8) = -*(int *)(in_ECX + 8);
    (**(code **)(**(int **)(in_ECX + 4) + 0x3c))(uVar1);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1037ffe5 Catch@1037ffe5

void Catch_1037ffe5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1037fff9 Catch@1037fff9

void Catch_1037fff9(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TLazyArray::Load");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10380050 FUN_10380050

void FUN_10380050(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa8d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x40);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x40);
      puVar3 = (undefined4 *)(iVar2 * 0x40 + *(int *)in_ECX);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x40);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 10380140 FUN_10380140

void FUN_10380140(int *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<unsigned_short> *this;
  FArray *in_ECX;
  TArray<unsigned_short> *pTVar3;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa902;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x10);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_18 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x10);
      this = (TArray<unsigned_short> *)(iVar2 * 0x10 + *(int *)in_ECX);
      if (this != (TArray<unsigned_short> *)0x0) {
        pTVar3 = (TArray<unsigned_short> *)(*piVar1 + (int)param_1);
        TArray<unsigned_short>::TArray<unsigned_short>(this,pTVar3);
        *(undefined4 *)(this + 0xc) = *(undefined4 *)(pTVar3 + 0xc);
        local_4 = local_4 & 0xffffff00;
      }
      param_1 = (int *)((int)param_1 + 0x10);
      local_18 = local_18 + 1;
    } while (local_18 < piVar1[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 10380250 FUN_10380250

void FUN_10380250(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa929;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10380300 FUN_10380300

void FUN_10380300(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa949;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x10);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *param_1 + iVar4;
        *puVar2 = *(undefined4 *)(*param_1 + iVar4);
        puVar2[1] = *(undefined4 *)(iVar1 + 4);
        puVar2[2] = *(undefined4 *)(iVar1 + 8);
        puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 103803d0 FUN_103803d0

void FUN_103803d0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa969;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0xc);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 103804a0 FUN_103804a0

void FUN_103804a0(int *param_1)

{
  int iVar1;
  FSphere *this;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa989;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x10);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x10);
      this = (FSphere *)(iVar1 * 0x10 + *(int *)in_ECX);
      if (this != (FSphere *)0x0) {
        FSphere::FSphere(this,(FSphere *)(*param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10380560 FUN_10380560

void FUN_10380560(int *param_1)

{
  FRawIndexBuffer *this;
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa9a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x1c);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x1c);
      this = (FRawIndexBuffer *)(*(int *)in_ECX + iVar1 * 0x1c);
      if (this != (FRawIndexBuffer *)0x0) {
        FRawIndexBuffer::FRawIndexBuffer(this,(FRawIndexBuffer *)(*param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10380630 FUN_10380630

void FUN_10380630(int *param_1)

{
  int *piVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa9c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x24);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x24);
      puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x24);
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x24);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10380710 FUN_10380710

void FUN_10380710(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fa9e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x24);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x24);
      if (*(int *)in_ECX + iVar1 * 0x24 != 0) {
        thunk_FUN_1036a980(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x24;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 103807d0 FUN_103807d0

void FUN_103807d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107faa09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x60);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x60);
      puVar4 = (undefined4 *)(iVar2 * 0x60 + *(int *)in_ECX);
      if (puVar4 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x60);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 103808c0 FUN_103808c0

void FUN_103808c0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107faa29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10380970 FUN_10380970

void FUN_10380970(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107faa49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x18);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x18);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
        puVar1[5] = *(undefined4 *)(iVar2 + 0x14);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10380a50 FUN_10380a50

void FUN_10380a50(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107faa69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x14);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10380b30 FUN_10380b30

void FUN_10380b30(int *param_1)

{
  int iVar1;
  UTerrainBrush *this;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107faa89;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x68);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x68);
      this = (UTerrainBrush *)(iVar1 * 0x68 + *(int *)in_ECX);
      if (this != (UTerrainBrush *)0x0) {
        UTerrainBrush::UTerrainBrush(this,(UTerrainBrush *)(*param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x68;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10380bf0 FUN_10380bf0

void FUN_10380bf0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107faaa9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],8);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,8);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10380cb0 FUN_10380cb0

void FUN_10380cb0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107faac9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x14);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10380d90 FUN_10380d90

void FUN_10380d90(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107faae9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x18);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x18);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
        puVar1[5] = *(undefined4 *)(iVar2 + 0x14);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10380e70 FUN_10380e70

void FUN_10380e70(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fab09;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],8);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,8);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10380f30 FUN_10380f30

void FUN_10380f30(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fab29;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x14);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10381010 FUN_10381010

void FUN_10381010(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fab49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x14);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 103810f0 FUN_103810f0

void FUN_103810f0(int *param_1)

{
  int iVar1;
  FStaticMeshCollisionTriangle *this;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fab69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x54);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x54);
      this = (FStaticMeshCollisionTriangle *)(iVar1 * 0x54 + *(int *)in_ECX);
      if (this != (FStaticMeshCollisionTriangle *)0x0) {
        FStaticMeshCollisionTriangle::FStaticMeshCollisionTriangle
                  (this,(FStaticMeshCollisionTriangle *)(*param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x54;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 103811b0 FUN_103811b0

void FUN_103811b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fab89;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x2c);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x2c);
      puVar3 = (undefined4 *)(iVar2 * 0x2c + *(int *)in_ECX);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x2c);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 103812a0 FUN_103812a0

void FUN_103812a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  FArray *in_ECX;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107faba9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x104);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x104);
      puVar3 = (undefined4 *)(iVar2 * 0x104 + *(int *)in_ECX);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*piVar1 + (int)param_1);
        for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x104);
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[1]);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


// ==== 103813a0 FUN_103813a0

void FUN_103813a0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fabd1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 10381410 FUN_10381410

void FUN_10381410(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fabf9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],4);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,4);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 103814c0 FUN_103814c0

void FUN_103814c0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fac19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x14);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 103815a0 FUN_103815a0

void FUN_103815a0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fac39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x14);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10381680 FUN_10381680

void FUN_10381680(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fac5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  thunk_FUN_10379670(param_1 + 4);
  ExceptionList = local_c;
  return;
}


// ==== 10381780 FUN_10381780

void FUN_10381780(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fac7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  TArray<unsigned_char>::TArray<unsigned_char>
            ((TArray<unsigned_char> *)(in_ECX + 1),(TArray<unsigned_char> *)(param_1 + 1));
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  ExceptionList = local_c;
  return;
}


// ==== 103818c0 FUN_103818c0

void FUN_103818c0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fac9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  thunk_FUN_1032bc20(param_1 + 8);
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  ExceptionList = local_c;
  return;
}


// ==== 10381990 FUN_10381990

void FUN_10381990(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  thunk_FUN_1032bcd0(param_1 + 8);
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  return;
}


// ==== 10381a20 FUN_10381a20

void FUN_10381a20(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107facbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  thunk_FUN_1032bc20(param_1 + 3);
  ExceptionList = local_c;
  return;
}


// ==== 10381ad0 FUN_10381ad0

void FUN_10381ad0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107facdb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  TArray<unsigned_char>::TArray<unsigned_char>
            ((TArray<unsigned_char> *)(in_ECX + 1),(TArray<unsigned_char> *)(param_1 + 1));
  ExceptionList = local_c;
  return;
}


// ==== 10381b60 FUN_10381b60

void FUN_10381b60(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107facf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1032bc20(param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  ExceptionList = local_c;
  return;
}


// ==== 10381c00 FUN_10381c00

void FUN_10381c00(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fad1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  TArray<unsigned_char>::TArray<unsigned_char>
            ((TArray<unsigned_char> *)(in_ECX + 1),(TArray<unsigned_char> *)(param_1 + 1));
  ExceptionList = local_c;
  return;
}


// ==== 10381c90 FUN_10381c90

void FUN_10381c90(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fad3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  TArray<unsigned_char>::TArray<unsigned_char>
            ((TArray<unsigned_char> *)(in_ECX + 1),(TArray<unsigned_char> *)(param_1 + 1));
  in_ECX[4] = param_1[4];
  ExceptionList = local_c;
  return;
}


// ==== 10381e30 FUN_10381e30

void FUN_10381e30(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x2c;
    iVar2 = iVar2 - param_1;
    do {
      FRebuildOptions::~FRebuildOptions((FRebuildOptions *)(*(int *)in_ECX + iVar1));
      iVar1 = iVar1 + 0x2c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x2c);
  return;
}


// ==== 10381ef0 FUN_10381ef0

void FUN_10381ef0(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      FRebuildOptions::~FRebuildOptions((FRebuildOptions *)(*(int *)in_ECX + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x2c;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x2c,param_1);
  return;
}


// ==== 10381f40 FUN_10381f40

void FUN_10381f40(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,0xc);
  return;
}


// ==== 10382200 FUN_10382200

void FUN_10382200(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fad5c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x18;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      FStringNoInit::~FStringNoInit((FStringNoInit *)(*(int *)in_ECX + iVar1 + 0xc));
      iVar1 = iVar1 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x18);
  ExceptionList = local_c;
  return;
}


// ==== 10382300 FUN_10382300

void FUN_10382300(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fad7c;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    ExceptionList = &local_c;
    do {
      local_4 = 0xffffffff;
      FStringNoInit::~FStringNoInit((FStringNoInit *)(*(int *)in_ECX + iVar1 + 0xc));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x18;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x18,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103824b0 FUN_103824b0

void FUN_103824b0(int param_1)

{
  FArray *in_ECX;
  
  FArray::Empty(in_ECX,0x14c,param_1);
  return;
}


// ==== 10382e90 FUN_10382e90

void FUN_10382e90(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  
  iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)
                    ((uint)((ulonglong)(uint)in_ECX[4] * 4) |
                     -(uint)((int)((ulonglong)(uint)in_ECX[4] * 4 >> 0x20) != 0),L"HashMapHash");
  iVar2 = 0;
  if (0 < in_ECX[4]) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[4]);
  }
  iVar2 = 0;
  if (0 < in_ECX[1]) {
    do {
      uVar3 = (uint)*(ushort *)(*in_ECX + 4 + iVar2 * 8) & in_ECX[4] - 1U;
      *(undefined4 *)(*in_ECX + iVar2 * 8) = *(undefined4 *)(iVar1 + uVar3 * 4);
      *(int *)(iVar1 + uVar3 * 4) = iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar1;
  return;
}


// ==== 10382f60 FUN_10382f60

void FUN_10382f60(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fad99;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],8);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,8);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 103830e0 FUN_103830e0

void FUN_103830e0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x6c;
    iVar2 = iVar2 - param_1;
    do {
      (*(code *)**(undefined4 **)(*(int *)in_ECX + iVar1))(0);
      iVar1 = iVar1 + 0x6c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x6c);
  return;
}


// ==== 103831b0 FUN_103831b0

void FUN_103831b0(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      (*(code *)**(undefined4 **)(iVar1 + *(int *)in_ECX))(0);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x6c;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x6c,param_1);
  return;
}


// ==== 10383420 FUN_10383420

void FUN_10383420(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0xac;
    iVar2 = iVar2 - param_1;
    do {
      (*(code *)**(undefined4 **)(*(int *)in_ECX + iVar1))(0);
      iVar1 = iVar1 + 0xac;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0xac);
  return;
}


// ==== 103834f0 FUN_103834f0

void FUN_103834f0(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      (*(code *)**(undefined4 **)(iVar1 + *(int *)in_ECX))(0);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xac;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0xac,param_1);
  return;
}


// ==== 10383550 FUN_10383550

void FUN_10383550(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fadb9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],8);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,8);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 103836b0 FUN_103836b0

void FUN_103836b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fadd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],8);
  local_4 = 0;
  iVar3 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = FArray::Add(in_ECX,1,8);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10383810 FUN_10383810

void FUN_10383810(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fadf9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0xc);
  iVar3 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0xc);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 103839a0 FUN_103839a0

void FUN_103839a0(int param_1,int param_2)

{
  FArray *in_ECX;
  
  if (param_1 < 0) {
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (*(int *)(in_ECX + 4) < param_1 + param_2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove(in_ECX,param_1,param_2,4);
  return;
}


// ==== 10383b20 FUN_10383b20

void FUN_10383b20(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fae19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x44;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      FMatrix::~FMatrix((FMatrix *)(*(int *)in_ECX + iVar1));
      iVar1 = iVar1 + 0x44;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x44);
  ExceptionList = local_c;
  return;
}


// ==== 10383c20 FUN_10383c20

void FUN_10383c20(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fae39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x4c;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      FMatrix::~FMatrix((FMatrix *)(*(int *)in_ECX + iVar1));
      iVar1 = iVar1 + 0x4c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x4c);
  ExceptionList = local_c;
  return;
}


// ==== 10383d20 FUN_10383d20

void FUN_10383d20(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fae59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x48;
    iVar2 = iVar2 - param_1;
    do {
      local_4 = 0xffffffff;
      FMatrix::~FMatrix((FMatrix *)(*(int *)in_ECX + iVar1));
      iVar1 = iVar1 + 0x48;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x48);
  ExceptionList = local_c;
  return;
}


// ==== 10383e20 FUN_10383e20

void FUN_10383e20(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,8,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,8);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          iVar2 = *(int *)param_1;
          *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
          puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10383eb0 FUN_10383eb0

void FUN_10383eb0(int param_1)

{
  FArray *in_ECX;
  
  FArray::Empty(in_ECX,4,param_1);
  return;
}


// ==== 10383ed0 FUN_10383ed0

void FUN_10383ed0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10383fe0 FUN_10383fe0

FArray * FUN_10383fe0(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  FArray *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_4;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,0x24,*(int *)(param_1 + 4));
    local_4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x24);
        puVar4 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x24);
        if (puVar4 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(*(int *)pFVar1 + (int)param_1);
          for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        param_1 = (FArray *)((int)param_1 + 0x24);
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pFVar1 + 4));
    }
  }
  return in_ECX;
}


// ==== 10384080 FUN_10384080

void FUN_10384080(int param_1,int param_2)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107fae85;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 < 0) {
    ExceptionList = &local_c;
    appFailAssert("Index>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h"
                  ,0x203);
  }
  if (*(int *)(in_ECX + 4) < param_1) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  iVar2 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar3 = param_1 * 0x18;
    iVar2 = iVar2 - param_1;
    do {
      iVar1 = *(int *)in_ECX;
      local_4 = 0;
      FString::~FString((FString *)(iVar1 + iVar3) + 0xc);
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar1 + iVar3));
      iVar3 = iVar3 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x18);
  ExceptionList = local_c;
  return;
}


// ==== 103841b0 FUN_103841b0

void FUN_103841b0(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107faeb5;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar3 = 0;
    ExceptionList = &local_c;
    do {
      iVar1 = *(int *)in_ECX;
      local_4 = 0;
      FString::~FString((FString *)(iVar1 + iVar3) + 0xc);
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar1 + iVar3));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x18,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103842f0 FUN_103842f0

void FUN_103842f0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10384400 FUN_10384400

void FUN_10384400(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  if (in_ECX != param_1) {
    FArray::Empty(in_ECX,4,*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FArray::Add(in_ECX,1,4);
        puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar3 * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
    return;
  }
  return;
}


// ==== 10384510 FUN_10384510

void FUN_10384510(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  FArray::Empty(in_ECX,0x14,*(int *)(param_1 + 4));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = FArray::Add(in_ECX,1,0x14);
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar2 * 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *(int *)param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
        puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


