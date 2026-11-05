// ==== 103317e0 FUN_103317e0

int FUN_103317e0(void)

{
  byte *in_ECX;
  
  return (uint)(*in_ECX >> 3) + ((in_ECX[2] & 0xfffffff8) * 0x20 + (in_ECX[1] & 0xfffffffc)) * 8;
}


// ==== 10331810 FUN_10331810

int FUN_10331810(void)

{
  byte *in_ECX;
  
  return (uint)(*in_ECX >> 3) + ((in_ECX[2] & 0xfffffff8) * 0x20 + (in_ECX[1] & 0xfffffff8)) * 4;
}


// ==== 10331840 FUN_10331840

int FUN_10331840(void)

{
  byte *in_ECX;
  
  return ((in_ECX[3] & 0xfffffff0) * 0x10 + (in_ECX[2] & 0xfffffff0)) * 0x10 + (uint)(*in_ECX >> 4)
         + (in_ECX[1] & 0xfffffff0);
}


// ==== 10331880 FUN_10331880

void FUN_10331880(float *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *in_ECX;
  
  bVar1 = in_ECX[1];
  bVar2 = *in_ECX;
  bVar3 = in_ECX[3];
  *param_1 = (float)in_ECX[2] / 255.0;
  param_1[1] = (float)bVar1 / 255.0;
  param_1[2] = (float)bVar2 / 255.0;
  param_1[3] = (float)bVar3 / 255.0;
  return;
}


// ==== 103318f0 FUN_103318f0

void FUN_103318f0(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 *in_ECX;
  
  if (*(int *)GIsOpenGL_exref != 0) {
    *(undefined1 *)param_1 = *(undefined1 *)((int)in_ECX + 2);
    *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)in_ECX + 1);
    uVar1 = *(undefined1 *)((int)in_ECX + 3);
    *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)in_ECX;
    *(undefined1 *)((int)param_1 + 3) = uVar1;
    return;
  }
  *param_1 = *in_ECX;
  return;
}


// ==== 10331930 FUN_10331930

void FUN_10331930(float *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *in_ECX;
  
  bVar1 = in_ECX[1];
  bVar2 = *in_ECX;
  bVar3 = in_ECX[3];
  *param_1 = (float)in_ECX[2] / 255.0;
  param_1[1] = (float)bVar1 / 255.0;
  param_1[2] = (float)bVar2 / 255.0;
  param_1[3] = (float)bVar3 / 255.0;
  return;
}


// ==== 103319a0 FUN_103319a0

void FUN_103319a0(float *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *in_ECX;
  
  bVar1 = in_ECX[1];
  bVar2 = *in_ECX;
  *param_1 = (float)in_ECX[2] / 255.0;
  param_1[1] = (float)bVar1 / 255.0;
  param_1[2] = (float)bVar2 / 255.0;
  return;
}


// ==== 103319f0 FUN_103319f0

undefined4 FUN_103319f0(void)

{
  undefined4 *in_ECX;
  
  return *in_ECX;
}


// ==== 10331a00 FUN_10331a00

void FUN_10331a00(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  return;
}


// ==== 10331a10 FUN_10331a10

void FUN_10331a10(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10331a30 FUN_10331a30

undefined8 FUN_10331a30(void)

{
  int in_ECX;
  
  return *(undefined8 *)(in_ECX + 4);
}


// ==== 10331a40 FUN_10331a40

void FUN_10331a40(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  return;
}


// ==== 10331a70 FUN_10331a70

void FUN_10331a70(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  return;
}


// ==== 10331a90 FUN_10331a90

void FUN_10331a90(byte param_1)

{
  FRenderResource *in_ECX;
  
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10331ac0 FUN_10331ac0

FRenderResource * FUN_10331ac0(byte param_1)

{
  FRenderResource *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0xc,*(int *)(in_ECX + -4),FRenderResource::~FRenderResource);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10331b40 FUN_10331b40

void FUN_10331b40(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = FBaseTexture::vftable;
  return;
}


// ==== 10331ba0 FUN_10331ba0

void FUN_10331ba0(void)

{
  return;
}


// ==== 10331bb0 FUN_10331bb0

undefined4 FUN_10331bb0(void)

{
  return 0;
}


// ==== 10331bc0 FUN_10331bc0

undefined4 FUN_10331bc0(void)

{
  return 0;
}


// ==== 10331bd0 FUN_10331bd0

undefined4 FUN_10331bd0(void)

{
  return 0;
}


// ==== 10331be0 FUN_10331be0

undefined4 FUN_10331be0(void)

{
  return 0;
}


// ==== 10331bf0 FUN_10331bf0

undefined4 FUN_10331bf0(void)

{
  return 0;
}


// ==== 10331c00 FUN_10331c00

undefined4 FUN_10331c00(void)

{
  return 0;
}


// ==== 10331c10 FUN_10331c10

void FUN_10331c10(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1938;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10331c60 FUN_10331c60

void FUN_10331c60(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1960;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10331cb0 FUN_10331cb0

void FUN_10331cb0(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1978;
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


// ==== 10331d20 FUN_10331d20

void FUN_10331d20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  return;
}


// ==== 10331d40 FUN_10331d40

void FUN_10331d40(void)

{
  return;
}


// ==== 10331d50 FUN_10331d50

FArchive * FUN_10331d50(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 8),4);
  return param_1;
}


// ==== 10331da0 FUN_10331da0

void FUN_10331da0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  return;
}


// ==== 10331dc0 FUN_10331dc0

int FUN_10331dc0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x10) * 0xc;
}


// ==== 10331dd0 FUN_10331dd0

undefined4 FUN_10331dd0(void)

{
  return 0xc;
}


// ==== 10331de0 FUN_10331de0

undefined4 FUN_10331de0(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0xc;
  return 1;
}


// ==== 10331e00 FUN_10331e00

undefined4 FUN_10331e00(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


// ==== 10331e10 FUN_10331e10

void FUN_10331e10(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = FVertexStream::vftable;
  return;
}


// ==== 10331e70 FUN_10331e70

undefined4 FUN_10331e70(void)

{
  return 0;
}


// ==== 10331e80 FUN_10331e80

undefined4 FUN_10331e80(void)

{
  return 0;
}


// ==== 10331e90 FUN_10331e90

undefined4 FUN_10331e90(void)

{
  return 0;
}


// ==== 10331ea0 FUN_10331ea0

undefined4 FUN_10331ea0(void)

{
  return 0;
}


// ==== 10331eb0 FUN_10331eb0

void FUN_10331eb0(void)

{
  return;
}


// ==== 10331ec0 FUN_10331ec0

void FUN_10331ec0(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f19b8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10331f10 FUN_10331f10

void FUN_10331f10(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FVertexStream::vftable;
  return;
}


// ==== 10331fa0 FUN_10331fa0

void FUN_10331fa0(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f19f8;
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


// ==== 10332010 FUN_10332010

UClass * FUN_10332010(void)

{
  return &URenderResource::PrivateStaticClass;
}


// ==== 10332020 FUN_10332020

void FUN_10332020(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&URenderResource::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10332060 FUN_10332060

undefined4 FUN_10332060(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10332070 FUN_10332070

void FUN_10332070(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1a19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = URenderResource::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103320e0 FUN_103320e0

void FUN_103320e0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1a39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = URenderResource::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10332140 FUN_10332140

void FUN_10332140(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1a59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  *(undefined ***)in_ECX = URenderResource::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  ExceptionList = local_c;
  return;
}


// ==== 103321b0 FUN_103321b0

void FUN_103321b0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  return;
}


// ==== 103321e0 FUN_103321e0

void FUN_103321e0(byte param_1)

{
  URenderResource *in_ECX;
  
  URenderResource::~URenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return;
}


// ==== 10332210 FUN_10332210

URenderResource * FUN_10332210(byte param_1)

{
  URenderResource *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x38,*(int *)(in_ECX + -4),URenderResource::~URenderResource);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  URenderResource::~URenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x38);
  }
  return in_ECX;
}


// ==== 10332290 FUN_10332290

UClass * FUN_10332290(void)

{
  return &UVertexStreamBase::PrivateStaticClass;
}


// ==== 103322a0 FUN_103322a0

void FUN_103322a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UVertexStreamBase::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 103322e0 FUN_103322e0

undefined4 FUN_103322e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103322f0 FUN_103322f0

void FUN_103322f0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1a78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UVertexStreamBase::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  URenderResource::~URenderResource((URenderResource *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10332360 FUN_10332360

void FUN_10332360(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1aa1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = URenderResource::vftable;
  *(undefined ***)in_ECX = UVertexStreamBase::vftable;
  *(undefined4 *)(in_ECX + 0x38) = param_1;
  *(undefined4 *)(in_ECX + 0x3c) = param_2;
  *(undefined4 *)(in_ECX + 0x40) = param_3;
  ExceptionList = local_c;
  return;
}


// ==== 103323f0 FUN_103323f0

void FUN_103323f0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x3c);
  *(int *)(in_ECX + 0x3c) = param_1;
  if (iVar1 != param_1) {
    *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
  }
  return;
}


// ==== 10332410 FUN_10332410

void FUN_10332410(FArchive *param_1)

{
  int iVar1;
  URenderResource *in_ECX;
  
  URenderResource::Serialize(in_ECX,param_1);
  iVar1 = FArchive::Ver(param_1);
  if (0x4a < iVar1) {
    FArchive::ByteOrderSerialize(param_1,in_ECX + 0x38,4);
    FArchive::ByteOrderSerialize(param_1,in_ECX + 0x3c,4);
    FArchive::ByteOrderSerialize(param_1,in_ECX + 0x40,4);
  }
  return;
}


// ==== 10332470 FUN_10332470

void FUN_10332470(URenderResource *param_1)

{
  URenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1ac8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  URenderResource::URenderResource(in_ECX,param_1);
  *(undefined ***)in_ECX = UVertexStreamBase::vftable;
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  ExceptionList = local_c;
  return;
}


// ==== 103324f0 FUN_103324f0

void FUN_103324f0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  return;
}


// ==== 10332530 FUN_10332530

void FUN_10332530(byte param_1)

{
  UVertexStreamBase *in_ECX;
  
  UVertexStreamBase::~UVertexStreamBase(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x44);
  }
  return;
}


// ==== 10332560 FUN_10332560

UVertexStreamBase * FUN_10332560(byte param_1)

{
  UVertexStreamBase *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x44,*(int *)(in_ECX + -4),UVertexStreamBase::~UVertexStreamBase);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UVertexStreamBase::~UVertexStreamBase(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x44);
  }
  return in_ECX;
}


// ==== 103325f0 FUN_103325f0

FArchive * FUN_103325f0(FArchive *param_1,void *param_2)

{
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
  return param_1;
}


// ==== 103326d0 FUN_103326d0

UClass * FUN_103326d0(void)

{
  return &UVertexBuffer::PrivateStaticClass;
}


// ==== 103326e0 FUN_103326e0

void FUN_103326e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UVertexBuffer::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10332720 FUN_10332720

undefined4 FUN_10332720(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10332730 FUN_10332730

int FUN_10332730(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x48) * 0x2c;
}


// ==== 10332740 FUN_10332740

UClass * FUN_10332740(void)

{
  return &UVertexStreamVECTOR::PrivateStaticClass;
}


// ==== 10332750 FUN_10332750

void FUN_10332750(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UVertexStreamVECTOR::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10332790 FUN_10332790

undefined4 FUN_10332790(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103327a0 FUN_103327a0

int FUN_103327a0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x48) * 0xc;
}


// ==== 103327c0 FUN_103327c0

int * FUN_103327c0(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 4))(param_2 + 2,1);
  (**(code **)(*param_1 + 4))(param_2 + 1,1);
  (**(code **)(*param_1 + 4))(param_2,1);
  (**(code **)(*param_1 + 4))(param_2 + 3,1);
  return param_1;
}


// ==== 10332820 FUN_10332820

UClass * FUN_10332820(void)

{
  return &UVertexStreamCOLOR::PrivateStaticClass;
}


// ==== 10332830 FUN_10332830

void FUN_10332830(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UVertexStreamCOLOR::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10332870 FUN_10332870

undefined4 FUN_10332870(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10332880 FUN_10332880

int FUN_10332880(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x48) * 4;
}


// ==== 10332890 FUN_10332890

FArchive * FUN_10332890(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  return param_1;
}


// ==== 103328d0 FUN_103328d0

UClass * FUN_103328d0(void)

{
  return &UVertexStreamUV::PrivateStaticClass;
}


// ==== 103328e0 FUN_103328e0

void FUN_103328e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UVertexStreamUV::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10332920 FUN_10332920

undefined4 FUN_10332920(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10332930 FUN_10332930

int FUN_10332930(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x48) * 8;
}


// ==== 10332940 FUN_10332940

FArchive * FUN_10332940(FArchive *param_1,void *param_2)

{
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
  return param_1;
}


// ==== 10332a00 FUN_10332a00

UClass * FUN_10332a00(void)

{
  return &UVertexStreamPosNormTex::PrivateStaticClass;
}


// ==== 10332a10 FUN_10332a10

void FUN_10332a10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UVertexStreamPosNormTex::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10332a50 FUN_10332a50

undefined4 FUN_10332a50(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10332a60 FUN_10332a60

int FUN_10332a60(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x48) * 0x28;
}


// ==== 10332a70 FUN_10332a70

FArchive * FUN_10332a70(FArchive *param_1,void *param_2)

{
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
  return param_1;
}


// ==== 10332ba0 FUN_10332ba0

UClass * FUN_10332ba0(void)

{
  return &USkinVertexBuffer::PrivateStaticClass;
}


// ==== 10332bb0 FUN_10332bb0

void FUN_10332bb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&USkinVertexBuffer::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10332bf0 FUN_10332bf0

undefined4 FUN_10332bf0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10332c00 FUN_10332c00

UClass * FUN_10332c00(void)

{
  return &UIndexBuffer::PrivateStaticClass;
}


// ==== 10332c10 FUN_10332c10

void FUN_10332c10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UIndexBuffer::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref
             ,0,0);
  return;
}


// ==== 10332c50 FUN_10332c50

undefined4 FUN_10332c50(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10332c60 FUN_10332c60

void FUN_10332c60(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107f1af4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UIndexBuffer::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(in_ECX + 0x38));
  local_4 = 0xffffffff;
  URenderResource::~URenderResource((URenderResource *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10332ce0 FUN_10332ce0

void FUN_10332ce0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1b2d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = URenderResource::vftable;
  local_4 = 1;
  *(undefined ***)in_ECX = UIndexBuffer::vftable;
  TArray<unsigned_short>::TArray<unsigned_short>((TArray<unsigned_short> *)(in_ECX + 0x38));
  ExceptionList = local_c;
  return;
}


// ==== 10332d60 FUN_10332d60

void FUN_10332d60(URenderResource *param_1)

{
  URenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1b54;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  URenderResource::URenderResource(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UIndexBuffer::vftable;
  TArray<unsigned_short>::TArray<unsigned_short>
            ((TArray<unsigned_short> *)(in_ECX + 0x38),(TArray<unsigned_short> *)(param_1 + 0x38));
  ExceptionList = local_c;
  return;
}


// ==== 10332de0 FUN_10332de0

void FUN_10332de0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  TArray<unsigned_short>::operator=
            ((TArray<unsigned_short> *)(in_ECX + 0x38),(TArray<unsigned_short> *)(param_1 + 0x38));
  return;
}


// ==== 10332e20 FUN_10332e20

void FUN_10332e20(byte param_1)

{
  UIndexBuffer *in_ECX;
  
  UIndexBuffer::~UIndexBuffer(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x44);
  }
  return;
}


// ==== 10332e50 FUN_10332e50

UIndexBuffer * FUN_10332e50(byte param_1)

{
  UIndexBuffer *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x44,*(int *)(in_ECX + -4),UIndexBuffer::~UIndexBuffer);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UIndexBuffer::~UIndexBuffer(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x44);
  }
  return in_ECX;
}


// ==== 10332ed0 FUN_10332ed0

void FUN_10332ed0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  return;
}


// ==== 10332f00 FUN_10332f00

void FUN_10332f00(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 10332f20 FUN_10332f20

void FUN_10332f20(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  return;
}


// ==== 10332f50 FUN_10332f50

void FUN_10332f50(void)

{
  return;
}


// ==== 10332f60 FUN_10332f60

void FUN_10332f60(void)

{
  undefined1 *in_ECX;
  undefined4 *puVar1;
  FString *this;
  int local_4;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  appMemset(in_ECX + 0x14,0,0x400);
  puVar1 = (undefined4 *)(in_ECX + 0x428);
  this = (FString *)(in_ECX + 0x468);
  local_4 = 0x10;
  do {
    FString::operator=(this,(ushort *)&DAT_10853d94);
    *puVar1 = 0;
    this = this + 0xc;
    puVar1 = puVar1 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  *(undefined4 *)(in_ECX + 0x41c) = 0;
  *(undefined4 *)(in_ECX + 0x414) = 0;
  *(undefined4 *)(in_ECX + 0x418) = 0;
  *(undefined4 *)(in_ECX + 0x420) = 0;
  *(undefined4 *)(in_ECX + 0x424) = 0;
  return;
}


// ==== 10333020 FUN_10333020

void FUN_10333020(void)

{
  FMaterialProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1b8a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _eh_vector_constructor_iterator_(in_ECX + 0x468,0xc,0x10,FString_exref,~FString_exref);
  local_4 = 0;
  FMaterialProperty::Clear(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103330a0 FUN_103330a0

void FUN_103330a0(void *param_1)

{
  void *in_ECX;
  FString *this;
  undefined4 *puVar1;
  int local_4;
  
  _memcpy(in_ECX,param_1,0x412);
  puVar1 = (undefined4 *)((int)in_ECX + 0x428);
  this = (FString *)((int)in_ECX + 0x468);
  local_4 = 0x10;
  do {
    FString::operator=(this,this + ((int)param_1 - (int)in_ECX));
    *puVar1 = *(undefined4 *)(((int)param_1 - (int)in_ECX) + (int)puVar1);
    this = this + 0xc;
    puVar1 = puVar1 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  *(undefined4 *)((int)in_ECX + 0x414) = *(undefined4 *)((int)param_1 + 0x414);
  *(undefined4 *)((int)in_ECX + 0x418) = *(undefined4 *)((int)param_1 + 0x418);
  *(undefined4 *)((int)in_ECX + 0x41c) = *(undefined4 *)((int)param_1 + 0x41c);
  *(undefined4 *)((int)in_ECX + 0x420) = *(undefined4 *)((int)param_1 + 0x420);
  *(undefined4 *)((int)in_ECX + 0x424) = *(undefined4 *)((int)param_1 + 0x424);
  return;
}


// ==== 10333160 FUN_10333160

void FUN_10333160(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1bba;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  _eh_vector_destructor_iterator_((void *)(in_ECX + 0x468),0xc,0x10,~FString_exref);
  ExceptionList = local_c;
  return;
}


// ==== 103331c0 FUN_103331c0

void FUN_103331c0(undefined1 *param_1)

{
  code *pcVar1;
  undefined1 *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  puVar3 = (undefined4 *)(param_1 + 0x14);
  puVar4 = (undefined4 *)(in_ECX + 0x14);
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(in_ECX + 0x414) = *(undefined4 *)(param_1 + 0x414);
  *(undefined4 *)(in_ECX + 0x418) = *(undefined4 *)(param_1 + 0x418);
  *(undefined4 *)(in_ECX + 0x41c) = *(undefined4 *)(param_1 + 0x41c);
  *(undefined4 *)(in_ECX + 0x420) = *(undefined4 *)(param_1 + 0x420);
  *(undefined4 *)(in_ECX + 0x424) = *(undefined4 *)(param_1 + 0x424);
  pcVar1 = FString_exref;
  puVar3 = (undefined4 *)(param_1 + 0x428);
  puVar4 = (undefined4 *)(in_ECX + 0x428);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x468,param_1 + 0x468,0xc,0x10,pcVar1,~FString_exref);
  return;
}


// ==== 103332c0 FUN_103332c0

UClass * FUN_103332c0(void)

{
  return &UMaterial::PrivateStaticClass;
}


// ==== 103332d0 FUN_103332d0

void FUN_103332d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UMaterial::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,
             0);
  return;
}


// ==== 10333310 FUN_10333310

undefined4 FUN_10333310(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10333320 FUN_10333320

void FUN_10333320(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 10333340 FUN_10333340

void FUN_10333340(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107f1c0d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UMaterial::vftable;
  local_4 = 2;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x56c));
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x4ac,0xc,0x10,~FString_exref);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103333f0 FUN_103333f0

uint FUN_103333f0(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 0x3c) >> 1 & 1;
}


// ==== 10333400 FUN_10333400

void FUN_10333400(int param_1)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x3c) = *(uint *)(in_ECX + 0x3c) ^ (param_1 * 2 ^ *(uint *)(in_ECX + 0x3c)) & 2
  ;
  return;
}


// ==== 10333420 FUN_10333420

void FUN_10333420(void)

{
  return;
}


// ==== 10333430 FUN_10333430

undefined4 FUN_10333430(void)

{
  return 0;
}


// ==== 10333440 FUN_10333440

undefined4 FUN_10333440(void)

{
  return 0;
}


// ==== 10333450 FUN_10333450

undefined4 FUN_10333450(void)

{
  return 0;
}


// ==== 10333460 FUN_10333460

undefined4 FUN_10333460(void)

{
  return 0;
}


// ==== 10333470 FUN_10333470

undefined4 FUN_10333470(void)

{
  return 0;
}


// ==== 10333480 FUN_10333480

void FUN_10333480(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x88))();
  return;
}


// ==== 10333490 FUN_10333490

undefined4 FUN_10333490(void)

{
  return 0;
}


// ==== 103334a0 FUN_103334a0

undefined4 FUN_103334a0(void)

{
  return 0;
}


// ==== 103334b0 FUN_103334b0

undefined1 FUN_103334b0(void)

{
  return 1;
}


// ==== 103334c0 FUN_103334c0

undefined4 FUN_103334c0(void)

{
  return 0;
}


// ==== 103334d0 FUN_103334d0

bool FUN_103334d0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x34) != 0;
}


// ==== 103334e0 FUN_103334e0

void FUN_103334e0(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1c53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UMaterial::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(uint *)(in_ECX + 0x3c) =
       *(uint *)(in_ECX + 0x3c) ^ (*(uint *)(in_ECX + 0x3c) ^ *(uint *)(param_1 + 0x3c)) & 1;
  *(uint *)(in_ECX + 0x3c) =
       (*(uint *)(param_1 + 0x3c) ^ *(uint *)(in_ECX + 0x3c)) & 2 ^ *(uint *)(in_ECX + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  FMaterialProperty::FMaterialProperty
            ((FMaterialProperty *)(in_ECX + 0x44),(FMaterialProperty *)(param_1 + 0x44));
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::FString((FString *)(in_ECX + 0x56c),(FString *)(param_1 + 0x56c));
  ExceptionList = local_c;
  return;
}


// ==== 103335b0 FUN_103335b0

void FUN_103335b0(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(uint *)(in_ECX + 0x3c) =
       *(uint *)(in_ECX + 0x3c) ^ (*(uint *)(in_ECX + 0x3c) ^ *(uint *)(param_1 + 0x3c)) & 1;
  *(uint *)(in_ECX + 0x3c) =
       (*(uint *)(param_1 + 0x3c) ^ *(uint *)(in_ECX + 0x3c)) & 2 ^ *(uint *)(in_ECX + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  FMaterialProperty::operator=
            ((FMaterialProperty *)(in_ECX + 0x44),(FMaterialProperty *)(param_1 + 0x44));
  FString::operator=((FString *)(in_ECX + 0x56c),(FString *)(param_1 + 0x56c));
  return;
}


// ==== 10333630 FUN_10333630

void FUN_10333630(byte param_1)

{
  UMaterial *in_ECX;
  
  UMaterial::~UMaterial(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x578);
  }
  return;
}


// ==== 10333660 FUN_10333660

UMaterial * FUN_10333660(byte param_1)

{
  UMaterial *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x578,*(int *)(in_ECX + -4),UMaterial::~UMaterial);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UMaterial::~UMaterial(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x578);
  }
  return in_ECX;
}


// ==== 103336e0 FUN_103336e0

UClass * FUN_103336e0(void)

{
  return &URenderedMaterial::PrivateStaticClass;
}


// ==== 103336f0 FUN_103336f0

void FUN_103336f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&URenderedMaterial::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10333730 FUN_10333730

undefined4 FUN_10333730(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10333740 FUN_10333740

void FUN_10333740(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1c78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = URenderedMaterial::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UMaterial::~UMaterial((UMaterial *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103337b0 FUN_103337b0

void FUN_103337b0(void)

{
  UMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1c98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMaterial::UMaterial(in_ECX);
  *(undefined ***)in_ECX = URenderedMaterial::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10333810 FUN_10333810

void FUN_10333810(UMaterial *param_1)

{
  UMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1cb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMaterial::UMaterial(in_ECX,param_1);
  *(undefined ***)in_ECX = URenderedMaterial::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10333880 FUN_10333880

void FUN_10333880(UMaterial *param_1)

{
  UMaterial *in_ECX;
  
  UMaterial::operator=(in_ECX,param_1);
  return;
}


// ==== 103338a0 FUN_103338a0

void FUN_103338a0(byte param_1)

{
  URenderedMaterial *in_ECX;
  
  URenderedMaterial::~URenderedMaterial(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x578);
  }
  return;
}


// ==== 103338d0 FUN_103338d0

URenderedMaterial * FUN_103338d0(byte param_1)

{
  URenderedMaterial *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x578,*(int *)(in_ECX + -4),URenderedMaterial::~URenderedMaterial);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  URenderedMaterial::~URenderedMaterial(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x578);
  }
  return in_ECX;
}


// ==== 10333950 FUN_10333950

UClass * FUN_10333950(void)

{
  return &UBitmapMaterial::PrivateStaticClass;
}


// ==== 10333960 FUN_10333960

void FUN_10333960(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UBitmapMaterial::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 103339a0 FUN_103339a0

undefined4 FUN_103339a0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103339b0 FUN_103339b0

void FUN_103339b0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1cd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UBitmapMaterial::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  URenderedMaterial::~URenderedMaterial((URenderedMaterial *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10333a20 FUN_10333a20

void FUN_10333a20(void)

{
  return;
}


// ==== 10333a30 FUN_10333a30

undefined4 FUN_10333a30(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x580);
}


// ==== 10333a40 FUN_10333a40

undefined4 FUN_10333a40(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x584);
}


// ==== 10333a50 FUN_10333a50

int FUN_10333a50(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x580) << ((byte)*(undefined4 *)(in_ECX + 0x590) & 0x1f);
}


// ==== 10333a70 FUN_10333a70

int FUN_10333a70(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x584) << ((byte)*(undefined4 *)(in_ECX + 0x590) & 0x1f);
}


// ==== 10333a90 FUN_10333a90

void FUN_10333a90(void)

{
  UMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1d00;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMaterial::UMaterial(in_ECX);
  *(undefined ***)in_ECX = URenderedMaterial::vftable;
  *(undefined ***)in_ECX = UBitmapMaterial::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10333b00 FUN_10333b00

void FUN_10333b00(URenderedMaterial *param_1)

{
  URenderedMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1d18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  URenderedMaterial::URenderedMaterial(in_ECX,param_1);
  *(undefined ***)in_ECX = UBitmapMaterial::vftable;
  in_ECX[0x578] = param_1[0x578];
  in_ECX[0x579] = param_1[0x579];
  in_ECX[0x57a] = param_1[0x57a];
  in_ECX[0x57b] = param_1[0x57b];
  in_ECX[0x57c] = param_1[0x57c];
  *(undefined4 *)(in_ECX + 0x580) = *(undefined4 *)(param_1 + 0x580);
  *(undefined4 *)(in_ECX + 0x584) = *(undefined4 *)(param_1 + 0x584);
  *(undefined4 *)(in_ECX + 0x588) = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(in_ECX + 0x58c) = *(undefined4 *)(param_1 + 0x58c);
  *(undefined4 *)(in_ECX + 0x590) = *(undefined4 *)(param_1 + 0x590);
  ExceptionList = local_c;
  return;
}


// ==== 10333c10 FUN_10333c10

void FUN_10333c10(UMaterial *param_1)

{
  UMaterial *in_ECX;
  
  UMaterial::operator=(in_ECX,param_1);
  in_ECX[0x578] = param_1[0x578];
  in_ECX[0x579] = param_1[0x579];
  in_ECX[0x57a] = param_1[0x57a];
  in_ECX[0x57b] = param_1[0x57b];
  in_ECX[0x57c] = param_1[0x57c];
  *(undefined4 *)(in_ECX + 0x580) = *(undefined4 *)(param_1 + 0x580);
  *(undefined4 *)(in_ECX + 0x584) = *(undefined4 *)(param_1 + 0x584);
  *(undefined4 *)(in_ECX + 0x588) = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(in_ECX + 0x58c) = *(undefined4 *)(param_1 + 0x58c);
  *(undefined4 *)(in_ECX + 0x590) = *(undefined4 *)(param_1 + 0x590);
  return;
}


// ==== 10333cd0 FUN_10333cd0

void FUN_10333cd0(byte param_1)

{
  UBitmapMaterial *in_ECX;
  
  UBitmapMaterial::~UBitmapMaterial(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x594);
  }
  return;
}


// ==== 10333d00 FUN_10333d00

UBitmapMaterial * FUN_10333d00(byte param_1)

{
  UBitmapMaterial *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x594,*(int *)(in_ECX + -4),UBitmapMaterial::~UBitmapMaterial);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UBitmapMaterial::~UBitmapMaterial(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x594);
  }
  return in_ECX;
}


// ==== 10333d80 FUN_10333d80

UClass * FUN_10333d80(void)

{
  return &UProxyBitmapMaterial::PrivateStaticClass;
}


// ==== 10333d90 FUN_10333d90

void FUN_10333d90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UProxyBitmapMaterial::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10333dd0 FUN_10333dd0

undefined4 FUN_10333dd0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10333de0 FUN_10333de0

void FUN_10333de0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1d38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UProxyBitmapMaterial::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UBitmapMaterial::~UBitmapMaterial((UBitmapMaterial *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10333e50 FUN_10333e50

void FUN_10333e50(int *param_1)

{
  undefined1 uVar1;
  uchar uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  *(int **)(in_ECX + 0x594) = param_1;
  uVar1 = (**(code **)(*param_1 + 0x38))();
  *(undefined1 *)(in_ECX + 0x578) = uVar1;
  uVar1 = (**(code **)(**(int **)(in_ECX + 0x594) + 0x3c))();
  *(undefined1 *)(in_ECX + 0x579) = uVar1;
  uVar1 = (**(code **)(**(int **)(in_ECX + 0x594) + 0x40))();
  *(undefined1 *)(in_ECX + 0x57a) = uVar1;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x594) + 0x28))();
  *(undefined4 *)(in_ECX + 0x580) = uVar3;
  *(undefined4 *)(in_ECX + 0x588) = uVar3;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x594) + 0x2c))();
  *(undefined4 *)(in_ECX + 0x584) = uVar3;
  *(undefined4 *)(in_ECX + 0x58c) = uVar3;
  uVar2 = appCeilLogTwo(*(ulong *)(in_ECX + 0x588));
  *(uchar *)(in_ECX + 0x57b) = uVar2;
  uVar2 = appCeilLogTwo(*(ulong *)(in_ECX + 0x58c));
  *(uchar *)(in_ECX + 0x57c) = uVar2;
  return;
}


// ==== 10333f20 FUN_10333f20

undefined4 FUN_10333f20(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x594);
}


// ==== 10333f30 FUN_10333f30

void FUN_10333f30(void)

{
  return;
}


// ==== 10333f40 FUN_10333f40

void FUN_10333f40(void)

{
  UBitmapMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1d58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UBitmapMaterial::UBitmapMaterial(in_ECX);
  *(undefined ***)in_ECX = UProxyBitmapMaterial::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10333fa0 FUN_10333fa0

void FUN_10333fa0(UBitmapMaterial *param_1)

{
  UBitmapMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1d78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UBitmapMaterial::UBitmapMaterial(in_ECX,param_1);
  *(undefined ***)in_ECX = UProxyBitmapMaterial::vftable;
  *(undefined4 *)(in_ECX + 0x594) = *(undefined4 *)(param_1 + 0x594);
  ExceptionList = local_c;
  return;
}


// ==== 10334020 FUN_10334020

void FUN_10334020(UBitmapMaterial *param_1)

{
  UBitmapMaterial *in_ECX;
  
  UBitmapMaterial::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x594) = *(undefined4 *)(param_1 + 0x594);
  return;
}


// ==== 10334050 FUN_10334050

void FUN_10334050(byte param_1)

{
  UProxyBitmapMaterial *in_ECX;
  
  UProxyBitmapMaterial::~UProxyBitmapMaterial(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x598);
  }
  return;
}


// ==== 10334080 FUN_10334080

UProxyBitmapMaterial * FUN_10334080(byte param_1)

{
  UProxyBitmapMaterial *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x598,*(int *)(in_ECX + -4),UProxyBitmapMaterial::~UProxyBitmapMaterial);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UProxyBitmapMaterial::~UProxyBitmapMaterial(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x598);
  }
  return in_ECX;
}


// ==== 10334100 FUN_10334100

UClass * FUN_10334100(void)

{
  return &UTexCoordMaterial::PrivateStaticClass;
}


// ==== 10334110 FUN_10334110

void FUN_10334110(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UTexCoordMaterial::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10334150 FUN_10334150

undefined4 FUN_10334150(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10334160 FUN_10334160

void FUN_10334160(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1d98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UTexCoordMaterial::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  URenderedMaterial::~URenderedMaterial((URenderedMaterial *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103341d0 FUN_103341d0

undefined4 FUN_103341d0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x103341e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x78))();
    return uVar1;
  }
  return 0;
}


// ==== 103341f0 FUN_103341f0

undefined4 FUN_103341f0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x10334204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x7c))();
    return uVar1;
  }
  return 0;
}


// ==== 10334210 FUN_10334210

undefined4 FUN_10334210(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x10334227. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x80))();
    return uVar1;
  }
  return 0;
}


// ==== 10334240 FUN_10334240

undefined4 FUN_10334240(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x10334257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x84))();
    return uVar1;
  }
  return 0;
}


// ==== 10334270 FUN_10334270

void FUN_10334270(void)

{
  UMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1dc0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMaterial::UMaterial(in_ECX);
  *(undefined ***)in_ECX = URenderedMaterial::vftable;
  *(undefined ***)in_ECX = UTexCoordMaterial::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103342e0 FUN_103342e0

void FUN_103342e0(URenderedMaterial *param_1)

{
  URenderedMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1dd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  URenderedMaterial::URenderedMaterial(in_ECX,param_1);
  *(undefined ***)in_ECX = UTexCoordMaterial::vftable;
  *(undefined4 *)(in_ECX + 0x578) = *(undefined4 *)(param_1 + 0x578);
  *(undefined4 *)(in_ECX + 0x57c) = *(undefined4 *)(param_1 + 0x57c);
  ExceptionList = local_c;
  return;
}


// ==== 10334370 FUN_10334370

void FUN_10334370(UMaterial *param_1)

{
  UMaterial *in_ECX;
  
  UMaterial::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x578) = *(undefined4 *)(param_1 + 0x578);
  *(undefined4 *)(in_ECX + 0x57c) = *(undefined4 *)(param_1 + 0x57c);
  return;
}


// ==== 103343b0 FUN_103343b0

void FUN_103343b0(byte param_1)

{
  UTexCoordMaterial *in_ECX;
  
  UTexCoordMaterial::~UTexCoordMaterial(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x580);
  }
  return;
}


// ==== 103343e0 FUN_103343e0

UTexCoordMaterial * FUN_103343e0(byte param_1)

{
  UTexCoordMaterial *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x580,*(int *)(in_ECX + -4),UTexCoordMaterial::~UTexCoordMaterial);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTexCoordMaterial::~UTexCoordMaterial(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x580);
  }
  return in_ECX;
}


// ==== 10334460 FUN_10334460

UClass * FUN_10334460(void)

{
  return &UWaterMaterial::PrivateStaticClass;
}


// ==== 10334470 FUN_10334470

void FUN_10334470(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UWaterMaterial::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 103344b0 FUN_103344b0

undefined4 FUN_103344b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103344c0 FUN_103344c0

void FUN_103344c0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1df8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UWaterMaterial::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  URenderedMaterial::~URenderedMaterial((URenderedMaterial *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10334530 FUN_10334530

undefined4 FUN_10334530(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x10334544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x78))();
    return uVar1;
  }
  return 0;
}


// ==== 10334550 FUN_10334550

undefined4 FUN_10334550(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x10334564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x7c))();
    return uVar1;
  }
  return 0;
}


// ==== 10334570 FUN_10334570

void FUN_10334570(void)

{
  UMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1e20;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMaterial::UMaterial(in_ECX);
  *(undefined ***)in_ECX = URenderedMaterial::vftable;
  local_4 = 1;
  *(undefined ***)in_ECX = UWaterMaterial::vftable;
  FRotator::FRotator((FRotator *)(in_ECX + 0x588));
  ExceptionList = local_c;
  return;
}


// ==== 103345f0 FUN_103345f0

void FUN_103345f0(URenderedMaterial *param_1)

{
  URenderedMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1e38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  URenderedMaterial::URenderedMaterial(in_ECX,param_1);
  *(undefined ***)in_ECX = UWaterMaterial::vftable;
  *(undefined4 *)(in_ECX + 0x578) = *(undefined4 *)(param_1 + 0x578);
  *(undefined4 *)(in_ECX + 0x57c) = *(undefined4 *)(param_1 + 0x57c);
  *(undefined4 *)(in_ECX + 0x580) = *(undefined4 *)(param_1 + 0x580);
  *(undefined4 *)(in_ECX + 0x584) = *(undefined4 *)(param_1 + 0x584);
  *(undefined4 *)(in_ECX + 0x588) = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(in_ECX + 0x58c) = *(undefined4 *)(param_1 + 0x58c);
  *(undefined4 *)(in_ECX + 0x590) = *(undefined4 *)(param_1 + 0x590);
  in_ECX[0x594] = param_1[0x594];
  ExceptionList = local_c;
  return;
}


// ==== 103346d0 FUN_103346d0

void FUN_103346d0(UMaterial *param_1)

{
  UMaterial *in_ECX;
  
  UMaterial::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x578) = *(undefined4 *)(param_1 + 0x578);
  *(undefined4 *)(in_ECX + 0x57c) = *(undefined4 *)(param_1 + 0x57c);
  *(undefined4 *)(in_ECX + 0x580) = *(undefined4 *)(param_1 + 0x580);
  *(undefined4 *)(in_ECX + 0x584) = *(undefined4 *)(param_1 + 0x584);
  *(undefined4 *)(in_ECX + 0x588) = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(in_ECX + 0x58c) = *(undefined4 *)(param_1 + 0x58c);
  *(undefined4 *)(in_ECX + 0x590) = *(undefined4 *)(param_1 + 0x590);
  in_ECX[0x594] = param_1[0x594];
  return;
}


// ==== 10334770 FUN_10334770

void FUN_10334770(byte param_1)

{
  UWaterMaterial *in_ECX;
  
  UWaterMaterial::~UWaterMaterial(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x598);
  }
  return;
}


// ==== 103347a0 FUN_103347a0

UWaterMaterial * FUN_103347a0(byte param_1)

{
  UWaterMaterial *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x598,*(int *)(in_ECX + -4),UWaterMaterial::~UWaterMaterial);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UWaterMaterial::~UWaterMaterial(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x598);
  }
  return in_ECX;
}


// ==== 10334820 FUN_10334820

UClass * FUN_10334820(void)

{
  return &UUnderWaterMaterial::PrivateStaticClass;
}


// ==== 10334830 FUN_10334830

void FUN_10334830(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UUnderWaterMaterial::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10334870 FUN_10334870

undefined4 FUN_10334870(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10334880 FUN_10334880

void FUN_10334880(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1e58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UUnderWaterMaterial::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  URenderedMaterial::~URenderedMaterial((URenderedMaterial *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103348f0 FUN_103348f0

undefined4 FUN_103348f0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x10334904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x78))();
    return uVar1;
  }
  return 0;
}


// ==== 10334910 FUN_10334910

undefined4 FUN_10334910(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x578) != 0) {
                    /* WARNING: Could not recover jumptable at 0x10334924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x578) + 0x7c))();
    return uVar1;
  }
  return 0;
}


// ==== 10334930 FUN_10334930

void FUN_10334930(void)

{
  UMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1e80;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMaterial::UMaterial(in_ECX);
  *(undefined ***)in_ECX = URenderedMaterial::vftable;
  *(undefined ***)in_ECX = UUnderWaterMaterial::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103349a0 FUN_103349a0

void FUN_103349a0(URenderedMaterial *param_1)

{
  URenderedMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1e98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  URenderedMaterial::URenderedMaterial(in_ECX,param_1);
  *(undefined ***)in_ECX = UUnderWaterMaterial::vftable;
  *(undefined4 *)(in_ECX + 0x578) = *(undefined4 *)(param_1 + 0x578);
  *(undefined4 *)(in_ECX + 0x57c) = *(undefined4 *)(param_1 + 0x57c);
  ExceptionList = local_c;
  return;
}


// ==== 10334a30 FUN_10334a30

void FUN_10334a30(UMaterial *param_1)

{
  UMaterial *in_ECX;
  
  UMaterial::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x578) = *(undefined4 *)(param_1 + 0x578);
  *(undefined4 *)(in_ECX + 0x57c) = *(undefined4 *)(param_1 + 0x57c);
  return;
}


// ==== 10334a70 FUN_10334a70

void FUN_10334a70(byte param_1)

{
  UUnderWaterMaterial *in_ECX;
  
  UUnderWaterMaterial::~UUnderWaterMaterial(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x580);
  }
  return;
}


// ==== 10334aa0 FUN_10334aa0

UUnderWaterMaterial * FUN_10334aa0(byte param_1)

{
  UUnderWaterMaterial *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x580,*(int *)(in_ECX + -4),UUnderWaterMaterial::~UUnderWaterMaterial);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UUnderWaterMaterial::~UUnderWaterMaterial(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x580);
  }
  return in_ECX;
}


// ==== 10334b20 FUN_10334b20

void FUN_10334b20(void)

{
  return;
}


// ==== 10334b30 FUN_10334b30

void FUN_10334b30(void)

{
  return;
}


// ==== 10334b40 FUN_10334b40

void FUN_10334b40(void)

{
  return;
}


// ==== 10334b50 FUN_10334b50

void FUN_10334b50(void)

{
  return;
}


// ==== 10334b60 FUN_10334b60

void FUN_10334b60(void)

{
  return;
}


// ==== 10334b70 FUN_10334b70

void FUN_10334b70(void)

{
  return;
}


// ==== 10334b80 FUN_10334b80

void FUN_10334b80(void)

{
  return;
}


// ==== 10334b90 FUN_10334b90

void FUN_10334b90(void)

{
  return;
}


// ==== 10334ba0 FUN_10334ba0

void FUN_10334ba0(void)

{
  return;
}


// ==== 10334bb0 FUN_10334bb0

undefined4 FUN_10334bb0(void)

{
  return 0;
}


// ==== 10334bc0 FUN_10334bc0

void FUN_10334bc0(void)

{
  return;
}


// ==== 10334bd0 FUN_10334bd0

void FUN_10334bd0(void)

{
  return;
}


// ==== 10334be0 FUN_10334be0

void FUN_10334be0(void)

{
  return;
}


// ==== 10334bf0 FUN_10334bf0

void FUN_10334bf0(void)

{
  return;
}


// ==== 10334c00 FUN_10334c00

void FUN_10334c00(void)

{
  return;
}


// ==== 10334c10 FUN_10334c10

void FUN_10334c10(void)

{
  return;
}


// ==== 10334c20 FUN_10334c20

void FUN_10334c20(void)

{
  return;
}


// ==== 10334c30 FUN_10334c30

void FUN_10334c30(void)

{
  return;
}


// ==== 10334c40 FUN_10334c40

void FUN_10334c40(void)

{
  return;
}


// ==== 10334c50 FUN_10334c50

void FUN_10334c50(void)

{
  return;
}


// ==== 10334c60 FUN_10334c60

undefined4 FUN_10334c60(void)

{
  return 0xffffffff;
}


// ==== 10334c70 FUN_10334c70

void FUN_10334c70(void)

{
  return;
}


// ==== 10334c80 FUN_10334c80

void FUN_10334c80(void)

{
  return;
}


// ==== 10334c90 FUN_10334c90

void FUN_10334c90(void)

{
  return;
}


// ==== 10334ca0 FUN_10334ca0

float10 FUN_10334ca0(void)

{
  return (float10)-1.0;
}


// ==== 10334cb0 FUN_10334cb0

undefined4 FUN_10334cb0(void)

{
  return 0;
}


// ==== 10334cc0 FUN_10334cc0

void FUN_10334cc0(void)

{
  return;
}


// ==== 10334cd0 FUN_10334cd0

undefined4 FUN_10334cd0(void)

{
  return 0;
}


// ==== 10334ce0 FUN_10334ce0

void FUN_10334ce0(void)

{
  return;
}


// ==== 10334cf0 FUN_10334cf0

void FUN_10334cf0(void)

{
  return;
}


// ==== 10334d00 FUN_10334d00

undefined4 FUN_10334d00(void)

{
  return 0;
}


// ==== 10334d10 FUN_10334d10

void FUN_10334d10(void)

{
  return;
}


// ==== 10334d20 FUN_10334d20

void FUN_10334d20(void)

{
  return;
}


// ==== 10334d30 FUN_10334d30

void FUN_10334d30(void)

{
  return;
}


// ==== 10334d40 FUN_10334d40

void FUN_10334d40(void)

{
  return;
}


// ==== 10334d50 FUN_10334d50

void FUN_10334d50(void)

{
  return;
}


// ==== 10334d60 FUN_10334d60

void FUN_10334d60(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1eb9;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FMatrix::~FMatrix((FMatrix *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 10334db0 FUN_10334db0

void FUN_10334db0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1ee2;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FMatrix::~FMatrix((FMatrix *)&stack0x00000004);
  local_4 = 0xffffffff;
  FMatrix::~FMatrix((FMatrix *)&stack0x00000044);
  ExceptionList = local_c;
  return;
}


// ==== 10334e10 FUN_10334e10

void FUN_10334e10(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1f09;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FMatrix::~FMatrix((FMatrix *)&stack0x00000004);
  ExceptionList = local_c;
  return;
}


// ==== 10334e60 FUN_10334e60

undefined4 FUN_10334e60(void)

{
  return 0;
}


// ==== 10334e70 FUN_10334e70

undefined4 FUN_10334e70(void)

{
  return 0;
}


// ==== 10334e80 FUN_10334e80

undefined4 FUN_10334e80(void)

{
  return 0;
}


// ==== 10334e90 FUN_10334e90

undefined4 FUN_10334e90(void)

{
  return 0;
}


// ==== 10334ea0 FUN_10334ea0

void FUN_10334ea0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FRenderInterface::vftable;
  return;
}


// ==== 10334eb0 FUN_10334eb0

void FUN_10334eb0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FRenderInterface::vftable;
  return;
}


// ==== 10334ec0 FUN_10334ec0

void FUN_10334ec0(void)

{
  return;
}


// ==== 10334ed0 FUN_10334ed0

UClass * FUN_10334ed0(void)

{
  return &URenderDevice::PrivateStaticClass;
}


// ==== 10334ee0 FUN_10334ee0

void FUN_10334ee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&URenderDevice::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10334f20 FUN_10334f20

undefined4 FUN_10334f20(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10334f30 FUN_10334f30

void FUN_10334f30(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107f1f35;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = URenderDevice::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = URenderDevice::vftable_for_FExec_;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x40));
  local_4 = 0xffffffff;
  USubsystem::~USubsystem((USubsystem *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10334fb0 FUN_10334fb0

undefined4 FUN_10334fb0(void)

{
  return 0;
}


// ==== 10334fc0 FUN_10334fc0

undefined4 FUN_10334fc0(void)

{
  return 1;
}


// ==== 10334fd0 FUN_10334fd0

void FUN_10334fd0(void)

{
  return;
}


// ==== 10334fe0 FUN_10334fe0

undefined4 FUN_10334fe0(void)

{
  return 0;
}


// ==== 10334ff0 FUN_10334ff0

undefined4 FUN_10334ff0(void)

{
  return 1;
}


// ==== 10335000 FUN_10335000

void FUN_10335000(void)

{
  return;
}


// ==== 10335010 FUN_10335010

void FUN_10335010(void)

{
  return;
}


// ==== 10335020 FUN_10335020

void FUN_10335020(void)

{
  USubsystem *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1f65;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USubsystem::USubsystem(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = URenderDevice::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = URenderDevice::vftable_for_FExec_;
  FString::FString((FString *)(in_ECX + 0x40));
  ExceptionList = local_c;
  return;
}


// ==== 103350a0 FUN_103350a0

void FUN_103350a0(USubsystem *param_1)

{
  USubsystem *in_ECX;
  int iVar1;
  USubsystem *pUVar2;
  USubsystem *pUVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f1f95;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USubsystem::USubsystem(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = URenderDevice::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = URenderDevice::vftable_for_FExec_;
  in_ECX[0x38] = param_1[0x38];
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  FString::FString((FString *)(in_ECX + 0x40),(FString *)(param_1 + 0x40));
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  pUVar2 = param_1 + 0x80;
  pUVar3 = in_ECX + 0x80;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  pUVar2 = param_1 + 0xa0;
  pUVar3 = in_ECX + 0xa0;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 200);
  ExceptionList = local_c;
  return;
}


// ==== 10335200 FUN_10335200

void FUN_10335200(USubsystem *param_1)

{
  USubsystem *in_ECX;
  
  USubsystem::operator=(in_ECX,param_1);
  in_ECX[0x38] = param_1[0x38];
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  FString::operator=((FString *)(in_ECX + 0x40),(FString *)(param_1 + 0x40));
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 200);
  return;
}


// ==== 103353c0 FUN_103353c0

void FUN_103353c0(byte param_1)

{
  URenderDevice *in_ECX;
  
  URenderDevice::~URenderDevice(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xcc);
  }
  return;
}


// ==== 103353f0 FUN_103353f0

URenderDevice * FUN_103353f0(byte param_1)

{
  URenderDevice *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0xcc,*(int *)(in_ECX + -4),URenderDevice::~URenderDevice)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  URenderDevice::~URenderDevice(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xcc);
  }
  return in_ECX;
}


// ==== 10335470 FUN_10335470

void FUN_10335470(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0x81; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 10335490 FUN_10335490

void FUN_10335490(undefined4 param_1,int param_2,int param_3,int param_4,code *param_5)

{
  while (param_4 = param_4 + -1, -1 < param_4) {
    (*param_5)(param_2);
    param_2 = param_2 + param_3;
  }
  return;
}


// ==== 103354e0 FUN_103354e0

void FUN_103354e0(void)

{
  return;
}


// ==== 103354f0 CRect::CRect

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


// ==== 10335520 FUN_10335520

void FUN_10335520(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  return;
}


// ==== 10335550 FUN_10335550

void FUN_10335550(byte param_1)

{
  FLineBatcher *in_ECX;
  
  FLineBatcher::~FLineBatcher(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10335580 FUN_10335580

FLineBatcher * FUN_10335580(byte param_1)

{
  FLineBatcher *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x20,*(int *)(in_ECX + -4),FLineBatcher::~FLineBatcher);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FLineBatcher::~FLineBatcher(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10335600 FUN_10335600

void FUN_10335600(void)

{
  return;
}


// ==== 10335610 FUN_10335610

void FUN_10335610(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *in_ECX;
  
  in_ECX[4] = param_5;
  *in_ECX = param_1;
  in_ECX[5] = param_6;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  return;
}


// ==== 10335650 FUN_10335650

void FUN_10335650(undefined4 *param_1)

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


// ==== 10335690 FUN_10335690

void FUN_10335690(byte param_1)

{
  FCanvasUtil *in_ECX;
  
  FCanvasUtil::~FCanvasUtil(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 103356c0 FUN_103356c0

FCanvasUtil * FUN_103356c0(byte param_1)

{
  FCanvasUtil *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0xa8,*(int *)(in_ECX + -4),FCanvasUtil::~FCanvasUtil);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FCanvasUtil::~FCanvasUtil(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10335740 FUN_10335740

void FUN_10335740(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1fb8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10335790 FUN_10335790

void FUN_10335790(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FIndexBuffer::vftable;
  return;
}


// ==== 10335820 FUN_10335820

void FUN_10335820(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f1ff8;
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


// ==== 10335890 FUN_10335890

void FUN_10335890(void)

{
  return;
}


// ==== 103358a0 FUN_103358a0

void FUN_103358a0(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2020;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103358f0 FUN_103358f0

void FUN_103358f0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FBaseTexture::vftable;
  return;
}


// ==== 10335980 FUN_10335980

UClass * FUN_10335980(void)

{
  return &UPalette::PrivateStaticClass;
}


// ==== 10335990 FUN_10335990

void FUN_10335990(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UPalette::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0
            );
  return;
}


// ==== 103359d0 FUN_103359d0

undefined4 FUN_103359d0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103359e0 FUN_103359e0

void FUN_103359e0(UPalette *param_1)

{
  if (param_1 != (UPalette *)0x0) {
    UPalette::UPalette(param_1);
    return;
  }
  return;
}


// ==== 10335a00 FUN_10335a00

void FUN_10335a00(byte param_1,byte param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  *(byte *)(in_ECX + 3) = param_1;
  in_ECX[1] = 1 << (param_1 & 0x1f);
  *(byte *)((int)in_ECX + 0xd) = param_2;
  in_ECX[2] = 1 << (param_2 & 0x1f);
  return;
}


// ==== 10335a40 FUN_10335a40

void FUN_10335a40(void)

{
  return;
}


// ==== 10335a50 FUN_10335a50

void FUN_10335a50(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  return;
}


// ==== 10335ad0 FUN_10335ad0

void FUN_10335ad0(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2068;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10335b20 FUN_10335b20

void FUN_10335b20(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2098;
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


// ==== 10335b90 FUN_10335b90

FRenderResource * FUN_10335b90(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f20c8;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x14,*(int *)(in_ECX + -4),FStaticTexture::~FStaticTexture);
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


// ==== 10335c60 FUN_10335c60

void FUN_10335c60(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f20f0;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10335cb0 FUN_10335cb0

void FUN_10335cb0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FBaseTexture::vftable;
  *in_ECX = FCubemap::vftable;
  return;
}


// ==== 10335d30 FUN_10335d30

void FUN_10335d30(void)

{
  return;
}


// ==== 10335d60 FUN_10335d60

void FUN_10335d60(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2130;
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


// ==== 10335dd0 FUN_10335dd0

UClass * FUN_10335dd0(void)

{
  return &UTexture::PrivateStaticClass;
}


// ==== 10335de0 FUN_10335de0

void FUN_10335de0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UTexture::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0
            );
  return;
}


// ==== 10335e20 FUN_10335e20

undefined4 FUN_10335e20(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10335e30 FUN_10335e30

void FUN_10335e30(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 10335e50 FUN_10335e50

void FUN_10335e50(UTexture *param_1)

{
  if (param_1 != (UTexture *)0x0) {
    UTexture::UTexture(param_1);
    return;
  }
  return;
}


// ==== 10335e70 FUN_10335e70

void FUN_10335e70(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10335e76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::GetIndex(*(UObject **)(in_ECX + 0x594));
  return;
}


// ==== 10335e80 FUN_10335e80

undefined4 FUN_10335e80(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x5f4);
}


// ==== 10335e90 FUN_10335e90

FString * FUN_10335e90(FString *param_1)

{
  int in_ECX;
  wchar_t *pwVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f215a;
  local_c = ExceptionList;
  switch(*(undefined1 *)(in_ECX + 0x578)) {
  case 0:
    ExceptionList = &local_c;
    FString::FString(param_1,(ushort *)&DAT_108546fc);
    ExceptionList = local_c;
    return param_1;
  case 1:
    pwVar1 = L"RGBA7";
    break;
  case 2:
    pwVar1 = L"RGB16";
    break;
  case 3:
    pwVar1 = L"DXT1";
    break;
  case 4:
    pwVar1 = L"RGB8";
    break;
  case 5:
    pwVar1 = L"RGBA8";
    break;
  default:
    pwVar1 = L"?";
    break;
  case 7:
    pwVar1 = L"DXT3";
    break;
  case 8:
    pwVar1 = L"DXT5";
    break;
  case 9:
    pwVar1 = L"L8";
    break;
  case 10:
    pwVar1 = L"G16";
    break;
  case 0xb:
    pwVar1 = L"RRRGGGBBB";
  }
  ExceptionList = &local_c;
  FString::FString(param_1,(ushort *)pwVar1);
  ExceptionList = local_c;
  return param_1;
}


// ==== 10335fc0 FUN_10335fc0

void FUN_10335fc0(void)

{
  return;
}


// ==== 10335fd0 FUN_10335fd0

void FUN_10335fd0(void)

{
  return;
}


// ==== 10335fe0 FUN_10335fe0

undefined4 FUN_10335fe0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x600);
}


// ==== 10335ff0 FUN_10335ff0

void FUN_10335ff0(undefined8 param_1)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xd0))(param_1);
  return;
}


// ==== 10336020 FUN_10336020

void FUN_10336020(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x5d8) = 0;
  *(undefined4 *)(in_ECX + 0x5ec) = 0;
  return;
}


// ==== 10336040 FUN_10336040

uint FUN_10336040(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 0x5c0) >> 1 & 1;
}


// ==== 10336050 FUN_10336050

byte FUN_10336050(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x5c0) >> 1 & 1;
}


// ==== 10336060 FUN_10336060

undefined4 FUN_10336060(void)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x5c0) & 3) == 0) {
    return 0;
  }
  return 1;
}


// ==== 10336080 FUN_10336080

float10 FUN_10336080(void)

{
  int in_ECX;
  
  return (float10)*(double *)(in_ECX + 0x604);
}


// ==== 10336090 FUN_10336090

void FUN_10336090(undefined8 param_1)

{
  int in_ECX;
  
  *(undefined8 *)(in_ECX + 0x604) = param_1;
  return;
}


// ==== 103360a0 FUN_103360a0

UClass * FUN_103360a0(void)

{
  return &UCubemap::PrivateStaticClass;
}


// ==== 103360b0 FUN_103360b0

void FUN_103360b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UCubemap::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0
            );
  return;
}


// ==== 103360f0 FUN_103360f0

undefined4 FUN_103360f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10336100 FUN_10336100

void FUN_10336100(UCubemap *param_1)

{
  if (param_1 != (UCubemap *)0x0) {
    UCubemap::UCubemap(param_1);
    return;
  }
  return;
}


// ==== 10336120 FUN_10336120

void FUN_10336120(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  return;
}


// ==== 10336150 FUN_10336150

UClass * FUN_10336150(void)

{
  return &UFont::PrivateStaticClass;
}


// ==== 10336160 FUN_10336160

void FUN_10336160(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UFont::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 103361a0 FUN_103361a0

undefined4 FUN_103361a0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103361b0 FUN_103361b0

void FUN_103361b0(UFont *param_1)

{
  if (param_1 != (UFont *)0x0) {
    UFont::UFont(param_1);
    return;
  }
  return;
}


// ==== 103361d0 FUN_103361d0

void FUN_103361d0(void)

{
  return;
}


// ==== 103361e0 FUN_103361e0

void FUN_103361e0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 10336200 FUN_10336200

FArchive * FUN_10336200(FArchive *param_1,void *param_2)

{
  int iVar1;
  
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 8),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x18),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x1c),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x20),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x24),4);
  iVar1 = FArchive::Ver(param_1);
  if (0x6c < iVar1) {
    FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0xc),4);
    FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x10),4);
    FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0x14),4);
  }
  return param_1;
}


// ==== 103362d0 FUN_103362d0

void FUN_103362d0(void)

{
  return;
}


// ==== 103362e0 FUN_103362e0

void FUN_103362e0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 10336300 FUN_10336300

int FUN_10336300(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x10) * 0x28;
}


// ==== 10336310 FUN_10336310

undefined4 FUN_10336310(void)

{
  return 0x28;
}


// ==== 10336320 FUN_10336320

undefined4 FUN_10336320(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[2] = 1;
  param_1[3] = 1;
  param_1[1] = 0;
  param_1[4] = 2;
  param_1[5] = 4;
  param_1[6] = 2;
  param_1[7] = 5;
  return 4;
}


// ==== 10336370 FUN_10336370

undefined4 FUN_10336370(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


// ==== 10336380 FUN_10336380

undefined4 FUN_10336380(void)

{
  return 0;
}


// ==== 10336390 FUN_10336390

void FUN_10336390(void)

{
  return;
}


// ==== 103363a0 FUN_103363a0

undefined4 FUN_103363a0(void)

{
  return 0;
}


// ==== 103363b0 FUN_103363b0

undefined4 FUN_103363b0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x24);
}


// ==== 103363c0 FUN_103363c0

undefined4 FUN_103363c0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x28);
}


// ==== 103363d0 FUN_103363d0

undefined4 FUN_103363d0(void)

{
  return 0;
}


// ==== 103363e0 FUN_103363e0

undefined4 FUN_103363e0(void)

{
  return 1;
}


// ==== 103363f0 FUN_103363f0

undefined4 FUN_103363f0(void)

{
  return 5;
}


// ==== 10336400 FUN_10336400

undefined4 FUN_10336400(void)

{
  return 1;
}


// ==== 10336410 FUN_10336410

undefined4 FUN_10336410(void)

{
  return 1;
}


// ==== 10336420 FUN_10336420

undefined4 FUN_10336420(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x2c);
}


// ==== 10336430 FUN_10336430

void FUN_10336430(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = FBaseTexture::vftable;
  *in_ECX = FTexture::vftable;
  return;
}


// ==== 103364a0 FUN_103364a0

void FUN_103364a0(void)

{
  return;
}


// ==== 103364b0 FUN_103364b0

void FUN_103364b0(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f21a0;
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


// ==== 10336520 FUN_10336520

undefined4 FUN_10336520(void)

{
  return 0;
}


// ==== 10336530 FUN_10336530

undefined4 FUN_10336530(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x40);
}


// ==== 10336540 FUN_10336540

undefined4 FUN_10336540(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x44);
}


// ==== 10336550 FUN_10336550

undefined4 FUN_10336550(void)

{
  return 2;
}


// ==== 10336560 FUN_10336560

undefined1 FUN_10336560(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 0x3c);
}


// ==== 10336570 FUN_10336570

undefined4 FUN_10336570(void)

{
  return 0;
}


// ==== 10336580 FUN_10336580

undefined4 FUN_10336580(void)

{
  return 0;
}


// ==== 10336590 FUN_10336590

undefined4 FUN_10336590(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x48);
}


// ==== 103365a0 FUN_103365a0

undefined4 FUN_103365a0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x14);
}


// ==== 103365b0 FUN_103365b0

undefined4 FUN_103365b0(void)

{
  return 0x200;
}


// ==== 103365c0 FUN_103365c0

undefined4 FUN_103365c0(void)

{
  return 0x200;
}


// ==== 103365d0 FUN_103365d0

undefined4 FUN_103365d0(void)

{
  return 0;
}


// ==== 103365e0 FUN_103365e0

undefined4 FUN_103365e0(void)

{
  return 1;
}


// ==== 103365f0 FUN_103365f0

undefined4 FUN_103365f0(void)

{
  return 5;
}


// ==== 10336600 FUN_10336600

undefined4 FUN_10336600(void)

{
  return 0;
}


// ==== 10336610 FUN_10336610

undefined4 FUN_10336610(void)

{
  return 0;
}


// ==== 10336620 FUN_10336620

undefined4 FUN_10336620(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x68);
}


// ==== 10336630 FUN_10336630

void FUN_10336630(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = FBaseTexture::vftable;
  *in_ECX = FCompositeTexture::vftable;
  return;
}


// ==== 103366a0 FUN_103366a0

void FUN_103366a0(void)

{
  return;
}


// ==== 103366b0 FUN_103366b0

void FUN_103366b0(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f21e0;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10336700 FUN_10336700

void FUN_10336700(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FRenderResource::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  *in_ECX = FBaseTexture::vftable;
  *in_ECX = FCompositeTexture::vftable;
  return;
}


// ==== 103367a0 FUN_103367a0

void FUN_103367a0(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2220;
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


// ==== 10336810 FUN_10336810

UClass * FUN_10336810(void)

{
  return &UModel::PrivateStaticClass;
}


// ==== 10336820 FUN_10336820

void FUN_10336820(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UModel::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10336860 FUN_10336860

undefined4 FUN_10336860(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10336870 FUN_10336870

void FUN_10336870(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


// ==== 103368bc Catch@103368bc

void Catch_103368bc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 103368d0 Catch@103368d0

void Catch_103368d0(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2TimeBlock::operator =");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10336910 FUN_10336910

void FUN_10336910(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


// ==== 1033695c Catch@1033695c

void Catch_1033695c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10336970 Catch@10336970

void Catch_10336970(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2SkinNotifyInfo_FrameBase::operator =");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103369b0 FUN_103369b0

UClass * FUN_103369b0(void)

{
  return &USound::PrivateStaticClass;
}


// ==== 103369c0 FUN_103369c0

void FUN_103369c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&USound::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10336a00 FUN_10336a00

undefined4 FUN_10336a00(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10336a10 FUN_10336a10

float10 FUN_10336a10(void)

{
  int in_ECX;
  float fVar1;
  
  if (*(float *)(in_ECX + 100) < 0.0) {
    fVar1 = FSoundData::GetPeriod((FSoundData *)(in_ECX + 0x34));
    *(float *)(in_ECX + 100) = fVar1;
  }
  return (float10)*(float *)(in_ECX + 100);
}


// ==== 10336a40 FUN_10336a40

undefined4 FUN_10336a40(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x70);
}


// ==== 10336a50 FUN_10336a50

void FUN_10336a50(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x74) = 0;
  return;
}


// ==== 10336a60 FUN_10336a60

void FUN_10336a60(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x70) = param_1;
  if (param_1 != 0) {
    *(undefined4 *)(in_ECX + 0x74) = 0;
  }
  return;
}


// ==== 10336a80 FUN_10336a80

void FUN_10336a80(float param_1)

{
  int in_ECX;
  
  *(float *)(in_ECX + 0x74) = param_1 + *(float *)(in_ECX + 0x74);
  return;
}


// ==== 10336aa0 FUN_10336aa0

void FUN_10336aa0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNPawnLight::vftable;
  return;
}


// ==== 10336ab0 FUN_10336ab0

void FUN_10336ab0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNPawnLight::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  *(undefined1 *)(in_ECX + 2) = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)((int)in_ECX + 9) = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)((int)in_ECX + 10) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)((int)in_ECX + 0xb) = *(undefined1 *)(param_1 + 0xb);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  in_ECX[0xb] = *(undefined4 *)(param_1 + 0x2c);
  in_ECX[0xc] = *(undefined4 *)(param_1 + 0x30);
  in_ECX[0xd] = *(undefined4 *)(param_1 + 0x34);
  in_ECX[0xe] = *(undefined4 *)(param_1 + 0x38);
  in_ECX[0xf] = *(undefined4 *)(param_1 + 0x3c);
  in_ECX[0x10] = *(undefined4 *)(param_1 + 0x40);
  in_ECX[0x11] = *(undefined4 *)(param_1 + 0x44);
  in_ECX[0x12] = *(undefined4 *)(param_1 + 0x48);
  in_ECX[0x13] = *(undefined4 *)(param_1 + 0x4c);
  *(undefined1 *)(in_ECX + 0x14) = *(undefined1 *)(param_1 + 0x50);
  *(undefined1 *)((int)in_ECX + 0x51) = *(undefined1 *)(param_1 + 0x51);
  *(undefined1 *)((int)in_ECX + 0x52) = *(undefined1 *)(param_1 + 0x52);
  in_ECX[0x15] = *(undefined4 *)(param_1 + 0x54);
  in_ECX[0x16] = *(undefined4 *)(param_1 + 0x58);
  in_ECX[0x17] = *(undefined4 *)(param_1 + 0x5c);
  in_ECX[0x18] = *(undefined4 *)(param_1 + 0x60);
  return;
}


// ==== 10336bb0 FUN_10336bb0

void FUN_10336bb0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined1 *)(in_ECX + 8) = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(in_ECX + 9) = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(in_ECX + 10) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(in_ECX + 0xb) = *(undefined1 *)(param_1 + 0xb);
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
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined1 *)(in_ECX + 0x50) = *(undefined1 *)(param_1 + 0x50);
  *(undefined1 *)(in_ECX + 0x51) = *(undefined1 *)(param_1 + 0x51);
  *(undefined1 *)(in_ECX + 0x52) = *(undefined1 *)(param_1 + 0x52);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  return;
}


// ==== 10336ca0 FUN_10336ca0

void FUN_10336ca0(void)

{
  FNPawnLight *in_ECX;
  
  FNPawnLight::FNPawnLight(in_ECX,(AActor *)0x0);
  return;
}


// ==== 10336ce0 FUN_10336ce0

undefined4 * FUN_10336ce0(byte param_1)

{
  undefined4 *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,100,in_ECX[-1],FNPawnLight::~FNPawnLight);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -1);
    }
    return in_ECX + -1;
  }
  *in_ECX = FNPawnLight::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10336d60 FUN_10336d60

undefined4 FUN_10336d60(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x10);
}


// ==== 10336d70 FUN_10336d70

void FUN_10336d70(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 10336dd0 FUN_10336dd0

void FUN_10336dd0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 10336e30 FUN_10336e30

void FUN_10336e30(void)

{
  FNAbnormalStat *in_ECX;
  
  FNAbnormalStat::FNAbnormalStat(in_ECX,(APawn *)0x0);
  return;
}


// ==== 10336e40 FUN_10336e40

void FUN_10336e40(byte param_1)

{
  FNAbnormalStat *in_ECX;
  
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10336e70 FUN_10336e70

FNAbnormalStat * FUN_10336e70(byte param_1)

{
  FNAbnormalStat *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),FNAbnormalStat::~FNAbnormalStat);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10336ef0 FUN_10336ef0

void FUN_10336ef0(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2258;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_BLEEDING::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 1;
  ExceptionList = local_c;
  return;
}


// ==== 10336f60 FUN_10336f60

void FUN_10336f60(void)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2278;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_BLEEDING::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10336fb0 FUN_10336fb0

void FUN_10336fb0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_DOT_BLEEDING::vftable;
  return;
}


// ==== 10337060 FUN_10337060

void FUN_10337060(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 103370c0 FUN_103370c0

void FUN_103370c0(void)

{
  FNAbnormalStat_DOT_BLEEDING *in_ECX;
  
  FNAbnormalStat_DOT_BLEEDING::FNAbnormalStat_DOT_BLEEDING(in_ECX,(APawn *)0x0);
  return;
}


// ==== 103370d0 FUN_103370d0

void FUN_103370d0(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f22b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_BLEEDING::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10337140 FUN_10337140

FNAbnormalStat * FUN_10337140(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f22d8;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),
               FNAbnormalStat_DOT_BLEEDING::~FNAbnormalStat_DOT_BLEEDING);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_BLEEDING::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 10337210 FUN_10337210

void FUN_10337210(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f22f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_POISON::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 2;
  ExceptionList = local_c;
  return;
}


// ==== 10337280 FUN_10337280

void FUN_10337280(void)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2318;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_POISON::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103372d0 FUN_103372d0

void FUN_103372d0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_DOT_POISON::vftable;
  return;
}


// ==== 10337380 FUN_10337380

void FUN_10337380(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 103373e0 FUN_103373e0

void FUN_103373e0(void)

{
  FNAbnormalStat_DOT_POISON *in_ECX;
  
  FNAbnormalStat_DOT_POISON::FNAbnormalStat_DOT_POISON(in_ECX,(APawn *)0x0);
  return;
}


// ==== 103373f0 FUN_103373f0

void FUN_103373f0(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2358;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_POISON::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10337460 FUN_10337460

FNAbnormalStat * FUN_10337460(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2378;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),
               FNAbnormalStat_DOT_POISON::~FNAbnormalStat_DOT_POISON);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_POISON::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 10337530 FUN_10337530

void FUN_10337530(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2398;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_FIRE::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 4;
  ExceptionList = local_c;
  return;
}


// ==== 103375a0 FUN_103375a0

void FUN_103375a0(void)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f23b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_FIRE::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103375f0 FUN_103375f0

void FUN_103375f0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_DOT_FIRE::vftable;
  return;
}


// ==== 103376a0 FUN_103376a0

void FUN_103376a0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 10337700 FUN_10337700

void FUN_10337700(void)

{
  FNAbnormalStat_DOT_FIRE *in_ECX;
  
  FNAbnormalStat_DOT_FIRE::FNAbnormalStat_DOT_FIRE(in_ECX,(APawn *)0x0);
  return;
}


// ==== 10337710 FUN_10337710

void FUN_10337710(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f23f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_FIRE::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10337780 FUN_10337780

FNAbnormalStat * FUN_10337780(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2418;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),FNAbnormalStat_DOT_FIRE::~FNAbnormalStat_DOT_FIRE);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_FIRE::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 10337850 FUN_10337850

void FUN_10337850(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2438;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_WATER::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  ExceptionList = local_c;
  return;
}


// ==== 103378c0 FUN_103378c0

void FUN_103378c0(void)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2458;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_WATER::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10337910 FUN_10337910

void FUN_10337910(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_DOT_WATER::vftable;
  return;
}


// ==== 103379c0 FUN_103379c0

void FUN_103379c0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 10337a20 FUN_10337a20

void FUN_10337a20(void)

{
  FNAbnormalStat_DOT_WATER *in_ECX;
  
  FNAbnormalStat_DOT_WATER::FNAbnormalStat_DOT_WATER(in_ECX,(APawn *)0x0);
  return;
}


// ==== 10337a30 FUN_10337a30

void FUN_10337a30(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2498;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_WATER::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10337aa0 FUN_10337aa0

FNAbnormalStat * FUN_10337aa0(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f24b8;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),FNAbnormalStat_DOT_WATER::~FNAbnormalStat_DOT_WATER
              );
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_WATER::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 10337b70 FUN_10337b70

void FUN_10337b70(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f24d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_WIND::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 0x10;
  ExceptionList = local_c;
  return;
}


// ==== 10337be0 FUN_10337be0

void FUN_10337be0(void)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f24f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_WIND::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10337c30 FUN_10337c30

void FUN_10337c30(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_DOT_WIND::vftable;
  return;
}


// ==== 10337ce0 FUN_10337ce0

void FUN_10337ce0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 10337d40 FUN_10337d40

void FUN_10337d40(void)

{
  FNAbnormalStat_DOT_WIND *in_ECX;
  
  FNAbnormalStat_DOT_WIND::FNAbnormalStat_DOT_WIND(in_ECX,(APawn *)0x0);
  return;
}


// ==== 10337d50 FUN_10337d50

void FUN_10337d50(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_WIND::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10337dc0 FUN_10337dc0

FNAbnormalStat * FUN_10337dc0(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2558;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),FNAbnormalStat_DOT_WIND::~FNAbnormalStat_DOT_WIND);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_WIND::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 10337e90 FUN_10337e90

void FUN_10337e90(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_SOIL::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 0x20;
  ExceptionList = local_c;
  return;
}


// ==== 10337f00 FUN_10337f00

void FUN_10337f00(void)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2598;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_SOIL::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10337f50 FUN_10337f50

void FUN_10337f50(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_DOT_SOIL::vftable;
  return;
}


// ==== 10338000 FUN_10338000

void FUN_10338000(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 10338060 FUN_10338060

void FUN_10338060(void)

{
  FNAbnormalStat_DOT_SOIL *in_ECX;
  
  FNAbnormalStat_DOT_SOIL::FNAbnormalStat_DOT_SOIL(in_ECX,(APawn *)0x0);
  return;
}


// ==== 10338070 FUN_10338070

void FUN_10338070(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f25d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_SOIL::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 103380e0 FUN_103380e0

FNAbnormalStat * FUN_103380e0(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f25f8;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),FNAbnormalStat_DOT_SOIL::~FNAbnormalStat_DOT_SOIL);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_SOIL::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 103381b0 FUN_103381b0

void FUN_103381b0(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_STUN::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 0x40;
  ExceptionList = local_c;
  return;
}


// ==== 10338220 FUN_10338220

void FUN_10338220(void)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2638;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_STUN::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10338270 FUN_10338270

void FUN_10338270(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_STUN::vftable;
  return;
}


// ==== 10338320 FUN_10338320

void FUN_10338320(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 10338380 FUN_10338380

void FUN_10338380(void)

{
  FNAbnormalStat_STUN *in_ECX;
  
  FNAbnormalStat_STUN::FNAbnormalStat_STUN(in_ECX,(APawn *)0x0);
  return;
}


// ==== 10338390 FUN_10338390

void FUN_10338390(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2678;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_STUN::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10338400 FUN_10338400

FNAbnormalStat * FUN_10338400(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2698;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),FNAbnormalStat_STUN::~FNAbnormalStat_STUN);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_STUN::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 103384d0 FUN_103384d0

void FUN_103384d0(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f26b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_SLEEP::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 0x80;
  ExceptionList = local_c;
  return;
}


// ==== 10338540 FUN_10338540

void FUN_10338540(void)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f26d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_SLEEP::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10338590 FUN_10338590

void FUN_10338590(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_SLEEP::vftable;
  return;
}


// ==== 10338640 FUN_10338640

void FUN_10338640(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 103386a0 FUN_103386a0

void FUN_103386a0(void)

{
  FNAbnormalStat_SLEEP *in_ECX;
  
  FNAbnormalStat_SLEEP::FNAbnormalStat_SLEEP(in_ECX,(APawn *)0x0);
  return;
}


// ==== 103386b0 FUN_103386b0

void FUN_103386b0(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2718;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_SLEEP::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10338720 FUN_10338720

FNAbnormalStat * FUN_10338720(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2738;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),FNAbnormalStat_SLEEP::~FNAbnormalStat_SLEEP);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_SLEEP::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 103387f0 FUN_103387f0

void FUN_103387f0(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2758;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_SILENCE::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 0x100;
  ExceptionList = local_c;
  return;
}


// ==== 10338860 FUN_10338860

void FUN_10338860(void)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2778;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_SILENCE::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103388b0 FUN_103388b0

void FUN_103388b0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_SILENCE::vftable;
  return;
}


// ==== 10338960 FUN_10338960

void FUN_10338960(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 103389c0 FUN_103389c0

void FUN_103389c0(void)

{
  FNAbnormalStat_SILENCE *in_ECX;
  
  FNAbnormalStat_SILENCE::FNAbnormalStat_SILENCE(in_ECX,(APawn *)0x0);
  return;
}


// ==== 103389d0 FUN_103389d0

void FUN_103389d0(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f27b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_SILENCE::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10338a40 FUN_10338a40

FNAbnormalStat * FUN_10338a40(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f27d8;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),FNAbnormalStat_SILENCE::~FNAbnormalStat_SILENCE);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_SILENCE::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 10338b10 FUN_10338b10

void FUN_10338b10(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f27f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_ROOT::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 0x200;
  ExceptionList = local_c;
  return;
}


// ==== 10338b80 FUN_10338b80

void FUN_10338b80(void)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_ROOT::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10338bd0 FUN_10338bd0

void FUN_10338bd0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_ROOT::vftable;
  return;
}


// ==== 10338c80 FUN_10338c80

void FUN_10338c80(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 10338ce0 FUN_10338ce0

void FUN_10338ce0(void)

{
  FNAbnormalStat_ROOT *in_ECX;
  
  FNAbnormalStat_ROOT::FNAbnormalStat_ROOT(in_ECX,(APawn *)0x0);
  return;
}


// ==== 10338cf0 FUN_10338cf0

void FUN_10338cf0(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2858;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_ROOT::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10338d60 FUN_10338d60

FNAbnormalStat * FUN_10338d60(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2878;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),FNAbnormalStat_ROOT::~FNAbnormalStat_ROOT);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_ROOT::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 10338e30 FUN_10338e30

void FUN_10338e30(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2898;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_PARALYZE::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 0x400;
  ExceptionList = local_c;
  return;
}


// ==== 10338ea0 FUN_10338ea0

void FUN_10338ea0(void)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f28b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_PARALYZE::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10338ef0 FUN_10338ef0

void FUN_10338ef0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_PARALYZE::vftable;
  return;
}


// ==== 10338fa0 FUN_10338fa0

void FUN_10338fa0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 10339000 FUN_10339000

void FUN_10339000(void)

{
  FNAbnormalStat_PARALYZE *in_ECX;
  
  FNAbnormalStat_PARALYZE::FNAbnormalStat_PARALYZE(in_ECX,(APawn *)0x0);
  return;
}


// ==== 10339010 FUN_10339010

void FUN_10339010(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f28f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_PARALYZE::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10339080 FUN_10339080

FNAbnormalStat * FUN_10339080(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2918;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),FNAbnormalStat_PARALYZE::~FNAbnormalStat_PARALYZE);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_PARALYZE::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 10339150 FUN_10339150

void FUN_10339150(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_FLESH_STONE::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 0x800;
  ExceptionList = local_c;
  return;
}


// ==== 103391c0 FUN_103391c0

void FUN_103391c0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_FLESH_STONE::vftable;
  return;
}


// ==== 10339270 FUN_10339270

void FUN_10339270(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 103392d0 FUN_103392d0

void FUN_103392d0(void)

{
  FNAbnormalStat_FLESH_STONE *in_ECX;
  
  FNAbnormalStat_FLESH_STONE::FNAbnormalStat_FLESH_STONE(in_ECX,(APawn *)0x0);
  return;
}


// ==== 103392e0 FUN_103392e0

void FUN_103392e0(byte param_1)

{
  FNAbnormalStat_FLESH_STONE *in_ECX;
  
  FNAbnormalStat_FLESH_STONE::~FNAbnormalStat_FLESH_STONE(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10339310 FUN_10339310

FNAbnormalStat_FLESH_STONE * FUN_10339310(byte param_1)

{
  FNAbnormalStat_FLESH_STONE *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),
               FNAbnormalStat_FLESH_STONE::~FNAbnormalStat_FLESH_STONE);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FNAbnormalStat_FLESH_STONE::~FNAbnormalStat_FLESH_STONE(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10339390 FUN_10339390

void FUN_10339390(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2978;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_MP::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 0x1000;
  ExceptionList = local_c;
  return;
}


// ==== 10339400 FUN_10339400

void FUN_10339400(void)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2998;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_MP::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10339450 FUN_10339450

undefined4 FUN_10339450(void)

{
  return 0;
}


// ==== 10339460 FUN_10339460

undefined4 FUN_10339460(void)

{
  return 0;
}


// ==== 10339470 FUN_10339470

void FUN_10339470(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_DOT_MP::vftable;
  return;
}


// ==== 10339520 FUN_10339520

void FUN_10339520(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 10339580 FUN_10339580

void FUN_10339580(void)

{
  FNAbnormalStat_DOT_MP *in_ECX;
  
  FNAbnormalStat_DOT_MP::FNAbnormalStat_DOT_MP(in_ECX,(APawn *)0x0);
  return;
}


// ==== 10339590 FUN_10339590

void FUN_10339590(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f29d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_MP::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10339600 FUN_10339600

FNAbnormalStat * FUN_10339600(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f29f8;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),FNAbnormalStat_DOT_MP::~FNAbnormalStat_DOT_MP);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_MP::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 103396d0 FUN_103396d0

void FUN_103396d0(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2a18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x2c) = 0x3f800000;
  *(undefined ***)in_ECX = FNAbnormalStat_BIGHEAD::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 0x2000;
  ExceptionList = local_c;
  return;
}


// ==== 10339750 FUN_10339750

void FUN_10339750(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_BIGHEAD::vftable;
  in_ECX[0xb] = *(undefined4 *)(param_1 + 0x2c);
  return;
}


// ==== 10339810 FUN_10339810

void FUN_10339810(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  return;
}


// ==== 10339870 FUN_10339870

void FUN_10339870(void)

{
  FNAbnormalStat_BIGHEAD *in_ECX;
  
  FNAbnormalStat_BIGHEAD::FNAbnormalStat_BIGHEAD(in_ECX,(APawn *)0x0);
  return;
}


// ==== 10339880 FUN_10339880

void FUN_10339880(byte param_1)

{
  FNAbnormalStat_BIGHEAD *in_ECX;
  
  FNAbnormalStat_BIGHEAD::~FNAbnormalStat_BIGHEAD(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 103398b0 FUN_103398b0

FNAbnormalStat_BIGHEAD * FUN_103398b0(byte param_1)

{
  FNAbnormalStat_BIGHEAD *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x30,*(int *)(in_ECX + -4),FNAbnormalStat_BIGHEAD::~FNAbnormalStat_BIGHEAD);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FNAbnormalStat_BIGHEAD::~FNAbnormalStat_BIGHEAD(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10339930 FUN_10339930

void FUN_10339930(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2a58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_FIRE_AREA::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 0x4000;
  ExceptionList = local_c;
  return;
}


// ==== 103399a0 FUN_103399a0

void FUN_103399a0(void)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2a78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_FIRE_AREA::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103399f0 FUN_103399f0

void FUN_103399f0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_DOT_FIRE_AREA::vftable;
  return;
}


// ==== 10339aa0 FUN_10339aa0

void FUN_10339aa0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 10339b00 FUN_10339b00

void FUN_10339b00(void)

{
  FNAbnormalStat_DOT_FIRE_AREA *in_ECX;
  
  FNAbnormalStat_DOT_FIRE_AREA::FNAbnormalStat_DOT_FIRE_AREA(in_ECX,(APawn *)0x0);
  return;
}


// ==== 10339b10 FUN_10339b10

void FUN_10339b10(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2ab8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_FIRE_AREA::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10339b80 FUN_10339b80

FNAbnormalStat * FUN_10339b80(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2ad8;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),
               FNAbnormalStat_DOT_FIRE_AREA::~FNAbnormalStat_DOT_FIRE_AREA);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DOT_FIRE_AREA::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 10339c50 FUN_10339c50

void FUN_10339c50(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2af8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_CHANGE_TEXTURE::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 0x8000;
  ExceptionList = local_c;
  return;
}


// ==== 10339cc0 FUN_10339cc0

void FUN_10339cc0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_CHANGE_TEXTURE::vftable;
  return;
}


// ==== 10339d70 FUN_10339d70

void FUN_10339d70(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 10339dd0 FUN_10339dd0

void FUN_10339dd0(void)

{
  FNAbnormalStat_CHANGE_TEXTURE *in_ECX;
  
  FNAbnormalStat_CHANGE_TEXTURE::FNAbnormalStat_CHANGE_TEXTURE(in_ECX,(APawn *)0x0);
  return;
}


// ==== 10339de0 FUN_10339de0

void FUN_10339de0(byte param_1)

{
  FNAbnormalStat_CHANGE_TEXTURE *in_ECX;
  
  FNAbnormalStat_CHANGE_TEXTURE::~FNAbnormalStat_CHANGE_TEXTURE(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10339e10 FUN_10339e10

FNAbnormalStat_CHANGE_TEXTURE * FUN_10339e10(byte param_1)

{
  FNAbnormalStat_CHANGE_TEXTURE *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),
               FNAbnormalStat_CHANGE_TEXTURE::~FNAbnormalStat_CHANGE_TEXTURE);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FNAbnormalStat_CHANGE_TEXTURE::~FNAbnormalStat_CHANGE_TEXTURE(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10339e90 FUN_10339e90

void FUN_10339e90(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2b38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x2c) = 0x3f800000;
  *(undefined ***)in_ECX = FNAbnormalStat_BIGBODY::vftable;
  *(undefined4 *)(in_ECX + 0x30) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x10) = 0x10000;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10339f20 FUN_10339f20

void FUN_10339f20(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_BIGBODY::vftable;
  in_ECX[0xb] = *(undefined4 *)(param_1 + 0x2c);
  in_ECX[0xc] = *(undefined4 *)(param_1 + 0x30);
  in_ECX[0xd] = *(undefined4 *)(param_1 + 0x34);
  in_ECX[0xe] = *(undefined4 *)(param_1 + 0x38);
  return;
}


// ==== 10339ff0 FUN_10339ff0

void FUN_10339ff0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
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
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return;
}


// ==== 1033a070 FUN_1033a070

void FUN_1033a070(void)

{
  FNAbnormalStat_BIGBODY *in_ECX;
  
  FNAbnormalStat_BIGBODY::FNAbnormalStat_BIGBODY(in_ECX,(APawn *)0x0);
  return;
}


// ==== 1033a080 FUN_1033a080

void FUN_1033a080(byte param_1)

{
  FNAbnormalStat_BIGBODY *in_ECX;
  
  FNAbnormalStat_BIGBODY::~FNAbnormalStat_BIGBODY(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1033a0b0 FUN_1033a0b0

FNAbnormalStat_BIGBODY * FUN_1033a0b0(byte param_1)

{
  FNAbnormalStat_BIGBODY *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x3c,*(int *)(in_ECX + -4),FNAbnormalStat_BIGBODY::~FNAbnormalStat_BIGBODY);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FNAbnormalStat_BIGBODY::~FNAbnormalStat_BIGBODY(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 1033a130 FUN_1033a130

void FUN_1033a130(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2b78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_FLOATING_ROOT::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 0x20000;
  ExceptionList = local_c;
  return;
}


// ==== 1033a1a0 FUN_1033a1a0

void FUN_1033a1a0(void)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2b98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_FLOATING_ROOT::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1033a1f0 FUN_1033a1f0

void FUN_1033a1f0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_FLOATING_ROOT::vftable;
  return;
}


// ==== 1033a2a0 FUN_1033a2a0

void FUN_1033a2a0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 1033a300 FUN_1033a300

void FUN_1033a300(void)

{
  FNAbnormalStat_FLOATING_ROOT *in_ECX;
  
  FNAbnormalStat_FLOATING_ROOT::FNAbnormalStat_FLOATING_ROOT(in_ECX,(APawn *)0x0);
  return;
}


// ==== 1033a310 FUN_1033a310

void FUN_1033a310(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2bd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_FLOATING_ROOT::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1033a380 FUN_1033a380

FNAbnormalStat * FUN_1033a380(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2bf8;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),
               FNAbnormalStat_FLOATING_ROOT::~FNAbnormalStat_FLOATING_ROOT);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_FLOATING_ROOT::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 1033a450 FUN_1033a450

void FUN_1033a450(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2c18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_DANCE_ROOT::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 0x40000;
  ExceptionList = local_c;
  return;
}


// ==== 1033a4c0 FUN_1033a4c0

void FUN_1033a4c0(void)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2c38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DANCE_ROOT::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1033a510 FUN_1033a510

void FUN_1033a510(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_DANCE_ROOT::vftable;
  return;
}


// ==== 1033a5c0 FUN_1033a5c0

void FUN_1033a5c0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 1033a620 FUN_1033a620

void FUN_1033a620(void)

{
  FNAbnormalStat_DANCE_ROOT *in_ECX;
  
  FNAbnormalStat_DANCE_ROOT::FNAbnormalStat_DANCE_ROOT(in_ECX,(APawn *)0x0);
  return;
}


// ==== 1033a630 FUN_1033a630

void FUN_1033a630(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2c78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DANCE_ROOT::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1033a6a0 FUN_1033a6a0

FNAbnormalStat * FUN_1033a6a0(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2c98;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),
               FNAbnormalStat_DANCE_ROOT::~FNAbnormalStat_DANCE_ROOT);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_DANCE_ROOT::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 1033a770 FUN_1033a770

void FUN_1033a770(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2cb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_GHOST_STUN::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 0x80000;
  ExceptionList = local_c;
  return;
}


// ==== 1033a7e0 FUN_1033a7e0

void FUN_1033a7e0(void)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2cd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_GHOST_STUN::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1033a830 FUN_1033a830

void FUN_1033a830(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_GHOST_STUN::vftable;
  return;
}


// ==== 1033a8e0 FUN_1033a8e0

void FUN_1033a8e0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 1033a940 FUN_1033a940

void FUN_1033a940(void)

{
  FNAbnormalStat_GHOST_STUN *in_ECX;
  
  FNAbnormalStat_GHOST_STUN::FNAbnormalStat_GHOST_STUN(in_ECX,(APawn *)0x0);
  return;
}


// ==== 1033a950 FUN_1033a950

void FUN_1033a950(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2d18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_GHOST_STUN::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1033a9c0 FUN_1033a9c0

FNAbnormalStat * FUN_1033a9c0(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2d38;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),
               FNAbnormalStat_GHOST_STUN::~FNAbnormalStat_GHOST_STUN);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_GHOST_STUN::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 1033aa90 FUN_1033aa90

void FUN_1033aa90(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2d58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_STEALTH::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 0x100000;
  ExceptionList = local_c;
  return;
}


// ==== 1033ab00 FUN_1033ab00

void FUN_1033ab00(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_STEALTH::vftable;
  return;
}


// ==== 1033abb0 FUN_1033abb0

void FUN_1033abb0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 1033ac10 FUN_1033ac10

void FUN_1033ac10(void)

{
  FNAbnormalStat_STEALTH *in_ECX;
  
  FNAbnormalStat_STEALTH::FNAbnormalStat_STEALTH(in_ECX,(APawn *)0x0);
  return;
}


// ==== 1033ac20 FUN_1033ac20

void FUN_1033ac20(byte param_1)

{
  FNAbnormalStat_STEALTH *in_ECX;
  
  FNAbnormalStat_STEALTH::~FNAbnormalStat_STEALTH(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1033ac50 FUN_1033ac50

FNAbnormalStat_STEALTH * FUN_1033ac50(byte param_1)

{
  FNAbnormalStat_STEALTH *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),FNAbnormalStat_STEALTH::~FNAbnormalStat_STEALTH);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FNAbnormalStat_STEALTH::~FNAbnormalStat_STEALTH(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 1033acd0 FUN_1033acd0

void FUN_1033acd0(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2d98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_SEIZURE1::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 0x200000;
  ExceptionList = local_c;
  return;
}


// ==== 1033ad40 FUN_1033ad40

void FUN_1033ad40(void)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2db8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_SEIZURE1::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1033ad90 FUN_1033ad90

void FUN_1033ad90(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_SEIZURE1::vftable;
  return;
}


// ==== 1033ae40 FUN_1033ae40

void FUN_1033ae40(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 1033aea0 FUN_1033aea0

void FUN_1033aea0(void)

{
  FNAbnormalStat_SEIZURE1 *in_ECX;
  
  FNAbnormalStat_SEIZURE1::FNAbnormalStat_SEIZURE1(in_ECX,(APawn *)0x0);
  return;
}


// ==== 1033aeb0 FUN_1033aeb0

void FUN_1033aeb0(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2df8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_SEIZURE1::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1033af20 FUN_1033af20

FNAbnormalStat * FUN_1033af20(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2e18;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),FNAbnormalStat_SEIZURE1::~FNAbnormalStat_SEIZURE1);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_SEIZURE1::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 1033aff0 FUN_1033aff0

void FUN_1033aff0(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2e38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_SEIZURE2::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 0x400000;
  ExceptionList = local_c;
  return;
}


// ==== 1033b060 FUN_1033b060

void FUN_1033b060(void)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2e58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_SEIZURE2::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1033b0b0 FUN_1033b0b0

void FUN_1033b0b0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_SEIZURE2::vftable;
  return;
}


// ==== 1033b160 FUN_1033b160

void FUN_1033b160(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 1033b1c0 FUN_1033b1c0

void FUN_1033b1c0(void)

{
  FNAbnormalStat_SEIZURE2 *in_ECX;
  
  FNAbnormalStat_SEIZURE2::FNAbnormalStat_SEIZURE2(in_ECX,(APawn *)0x0);
  return;
}


// ==== 1033b1d0 FUN_1033b1d0

void FUN_1033b1d0(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2e98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_SEIZURE2::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1033b240 FUN_1033b240

FNAbnormalStat * FUN_1033b240(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2eb8;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),FNAbnormalStat_SEIZURE2::~FNAbnormalStat_SEIZURE2);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_SEIZURE2::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 1033b310 FUN_1033b310

void FUN_1033b310(APawn *param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2ed8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAbnormalStat::FNAbnormalStat(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAbnormalStat_MAGIC_SQUARE::vftable;
  *(undefined4 *)(in_ECX + 0x10) = 0x800000;
  ExceptionList = local_c;
  return;
}


// ==== 1033b380 FUN_1033b380

void FUN_1033b380(void)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2ef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_MAGIC_SQUARE::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1033b3d0 FUN_1033b3d0

void FUN_1033b3d0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAbnormalStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  *in_ECX = FNAbnormalStat_MAGIC_SQUARE::vftable;
  return;
}


// ==== 1033b480 FUN_1033b480

void FUN_1033b480(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 1033b4e0 FUN_1033b4e0

void FUN_1033b4e0(void)

{
  FNAbnormalStat_MAGIC_SQUARE *in_ECX;
  
  FNAbnormalStat_MAGIC_SQUARE::FNAbnormalStat_MAGIC_SQUARE(in_ECX,(APawn *)0x0);
  return;
}


// ==== 1033b4f0 FUN_1033b4f0

void FUN_1033b4f0(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2f38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_MAGIC_SQUARE::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1033b560 FUN_1033b560

FNAbnormalStat * FUN_1033b560(byte param_1)

{
  FNAbnormalStat *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2f58;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x2c,*(int *)(in_ECX + -4),
               FNAbnormalStat_MAGIC_SQUARE::~FNAbnormalStat_MAGIC_SQUARE);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAbnormalStat_MAGIC_SQUARE::vftable;
  local_4 = 0xffffffff;
  FNAbnormalStat::~FNAbnormalStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 1033b630 FUN_1033b630

undefined4 FUN_1033b630(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


// ==== 1033b640 FUN_1033b640

void FUN_1033b640(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAppendixEffect::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 1033b670 FUN_1033b670

void FUN_1033b670(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 1033b6a0 FUN_1033b6a0

void FUN_1033b6a0(void)

{
  FNAppendixEffect *in_ECX;
  
  FNAppendixEffect::FNAppendixEffect(in_ECX,(AActor *)0x0);
  return;
}


// ==== 1033b6b0 FUN_1033b6b0

void FUN_1033b6b0(byte param_1)

{
  FNAppendixEffect *in_ECX;
  
  FNAppendixEffect::~FNAppendixEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1033b6e0 FUN_1033b6e0

FNAppendixEffect * FUN_1033b6e0(byte param_1)

{
  FNAppendixEffect *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x14,*(int *)(in_ECX + -4),FNAppendixEffect::~FNAppendixEffect);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FNAppendixEffect::~FNAppendixEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 1033b760 FUN_1033b760

void FUN_1033b760(AActor *param_1)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2f78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAppendixEffect::FNAppendixEffect(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_1::vftable;
  *(undefined4 *)(in_ECX + 0xc) = 1;
  *(undefined4 *)(in_ECX + 0x10) = 1;
  ExceptionList = local_c;
  return;
}


// ==== 1033b7e0 FUN_1033b7e0

void FUN_1033b7e0(void)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2f98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_1::vftable;
  local_4 = 0xffffffff;
  FNAppendixEffect::~FNAppendixEffect(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1033b830 FUN_1033b830

void FUN_1033b830(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAppendixEffect::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  *in_ECX = FNAppendixEffect_COLOSSEUM_1::vftable;
  return;
}


// ==== 1033b8b0 FUN_1033b8b0

void FUN_1033b8b0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 1033b8e0 FUN_1033b8e0

void FUN_1033b8e0(void)

{
  FNAppendixEffect_COLOSSEUM_1 *in_ECX;
  
  FNAppendixEffect_COLOSSEUM_1::FNAppendixEffect_COLOSSEUM_1(in_ECX,(AActor *)0x0);
  return;
}


// ==== 1033b8f0 FUN_1033b8f0

void FUN_1033b8f0(byte param_1)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f2fd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_1::vftable;
  local_4 = 0xffffffff;
  FNAppendixEffect::~FNAppendixEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1033b960 FUN_1033b960

FNAppendixEffect * FUN_1033b960(byte param_1)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f2ff8;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x14,*(int *)(in_ECX + -4),
               FNAppendixEffect_COLOSSEUM_1::~FNAppendixEffect_COLOSSEUM_1);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_1::vftable;
  local_4 = 0xffffffff;
  FNAppendixEffect::~FNAppendixEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 1033ba30 FUN_1033ba30

void FUN_1033ba30(AActor *param_1)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f3018;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAppendixEffect::FNAppendixEffect(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_2::vftable;
  *(undefined4 *)(in_ECX + 0xc) = 2;
  *(undefined4 *)(in_ECX + 0x10) = 1;
  ExceptionList = local_c;
  return;
}


// ==== 1033bab0 FUN_1033bab0

void FUN_1033bab0(void)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f3038;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_2::vftable;
  local_4 = 0xffffffff;
  FNAppendixEffect::~FNAppendixEffect(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1033bb00 FUN_1033bb00

void FUN_1033bb00(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAppendixEffect::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  *in_ECX = FNAppendixEffect_COLOSSEUM_2::vftable;
  return;
}


// ==== 1033bb80 FUN_1033bb80

void FUN_1033bb80(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 1033bbb0 FUN_1033bbb0

void FUN_1033bbb0(void)

{
  FNAppendixEffect_COLOSSEUM_2 *in_ECX;
  
  FNAppendixEffect_COLOSSEUM_2::FNAppendixEffect_COLOSSEUM_2(in_ECX,(AActor *)0x0);
  return;
}


// ==== 1033bbc0 FUN_1033bbc0

void FUN_1033bbc0(byte param_1)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f3078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_2::vftable;
  local_4 = 0xffffffff;
  FNAppendixEffect::~FNAppendixEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1033bc30 FUN_1033bc30

FNAppendixEffect * FUN_1033bc30(byte param_1)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f3098;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x14,*(int *)(in_ECX + -4),
               FNAppendixEffect_COLOSSEUM_2::~FNAppendixEffect_COLOSSEUM_2);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_2::vftable;
  local_4 = 0xffffffff;
  FNAppendixEffect::~FNAppendixEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 1033bd00 FUN_1033bd00

void FUN_1033bd00(AActor *param_1)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f30b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAppendixEffect::FNAppendixEffect(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_IDENTIFIER_RED::vftable;
  *(undefined4 *)(in_ECX + 0xc) = 4;
  ExceptionList = local_c;
  return;
}


// ==== 1033bd70 FUN_1033bd70

void FUN_1033bd70(void)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f30d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_IDENTIFIER_RED::vftable;
  local_4 = 0xffffffff;
  FNAppendixEffect::~FNAppendixEffect(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1033bdc0 FUN_1033bdc0

void FUN_1033bdc0(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAppendixEffect::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  *in_ECX = FNAppendixEffect_COLOSSEUM_IDENTIFIER_RED::vftable;
  return;
}


// ==== 1033be40 FUN_1033be40

void FUN_1033be40(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 1033be70 FUN_1033be70

void FUN_1033be70(void)

{
  FNAppendixEffect_COLOSSEUM_IDENTIFIER_RED *in_ECX;
  
  FNAppendixEffect_COLOSSEUM_IDENTIFIER_RED::FNAppendixEffect_COLOSSEUM_IDENTIFIER_RED
            (in_ECX,(AActor *)0x0);
  return;
}


// ==== 1033be80 FUN_1033be80

void FUN_1033be80(byte param_1)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f3118;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_IDENTIFIER_RED::vftable;
  local_4 = 0xffffffff;
  FNAppendixEffect::~FNAppendixEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1033bef0 FUN_1033bef0

FNAppendixEffect * FUN_1033bef0(byte param_1)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f3138;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x14,*(int *)(in_ECX + -4),
               FNAppendixEffect_COLOSSEUM_IDENTIFIER_RED::~FNAppendixEffect_COLOSSEUM_IDENTIFIER_RED
              );
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_IDENTIFIER_RED::vftable;
  local_4 = 0xffffffff;
  FNAppendixEffect::~FNAppendixEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 1033bfc0 FUN_1033bfc0

void FUN_1033bfc0(AActor *param_1)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f3158;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAppendixEffect::FNAppendixEffect(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE::vftable;
  *(undefined4 *)(in_ECX + 0xc) = 8;
  ExceptionList = local_c;
  return;
}


// ==== 1033c030 FUN_1033c030

void FUN_1033c030(void)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f3178;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE::vftable;
  local_4 = 0xffffffff;
  FNAppendixEffect::~FNAppendixEffect(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1033c080 FUN_1033c080

void FUN_1033c080(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAppendixEffect::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  *in_ECX = FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE::vftable;
  return;
}


// ==== 1033c100 FUN_1033c100

void FUN_1033c100(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 1033c130 FUN_1033c130

void FUN_1033c130(void)

{
  FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE *in_ECX;
  
  FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE::FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE
            (in_ECX,(AActor *)0x0);
  return;
}


// ==== 1033c140 FUN_1033c140

void FUN_1033c140(byte param_1)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f31b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE::vftable;
  local_4 = 0xffffffff;
  FNAppendixEffect::~FNAppendixEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1033c1b0 FUN_1033c1b0

FNAppendixEffect * FUN_1033c1b0(byte param_1)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f31d8;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x14,*(int *)(in_ECX + -4),
               FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE::
               ~FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_IDENTIFIER_BLUE::vftable;
  local_4 = 0xffffffff;
  FNAppendixEffect::~FNAppendixEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 1033c280 FUN_1033c280

void FUN_1033c280(AActor *param_1)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f31f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAppendixEffect::FNAppendixEffect(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_SELECTED_RED::vftable;
  *(undefined4 *)(in_ECX + 0xc) = 0x10;
  ExceptionList = local_c;
  return;
}


// ==== 1033c2f0 FUN_1033c2f0

void FUN_1033c2f0(void)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f3218;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_SELECTED_RED::vftable;
  local_4 = 0xffffffff;
  FNAppendixEffect::~FNAppendixEffect(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1033c340 FUN_1033c340

void FUN_1033c340(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAppendixEffect::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  *in_ECX = FNAppendixEffect_COLOSSEUM_SELECTED_RED::vftable;
  return;
}


// ==== 1033c3c0 FUN_1033c3c0

void FUN_1033c3c0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 1033c3f0 FUN_1033c3f0

void FUN_1033c3f0(void)

{
  FNAppendixEffect_COLOSSEUM_SELECTED_RED *in_ECX;
  
  FNAppendixEffect_COLOSSEUM_SELECTED_RED::FNAppendixEffect_COLOSSEUM_SELECTED_RED
            (in_ECX,(AActor *)0x0);
  return;
}


// ==== 1033c400 FUN_1033c400

void FUN_1033c400(byte param_1)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f3258;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_SELECTED_RED::vftable;
  local_4 = 0xffffffff;
  FNAppendixEffect::~FNAppendixEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1033c470 FUN_1033c470

FNAppendixEffect * FUN_1033c470(byte param_1)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f3278;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x14,*(int *)(in_ECX + -4),
               FNAppendixEffect_COLOSSEUM_SELECTED_RED::~FNAppendixEffect_COLOSSEUM_SELECTED_RED);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_SELECTED_RED::vftable;
  local_4 = 0xffffffff;
  FNAppendixEffect::~FNAppendixEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 1033c540 FUN_1033c540

void FUN_1033c540(AActor *param_1)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f3298;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FNAppendixEffect::FNAppendixEffect(in_ECX,param_1);
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_SELECTED_BLUE::vftable;
  *(undefined4 *)(in_ECX + 0xc) = 0x20;
  ExceptionList = local_c;
  return;
}


// ==== 1033c5b0 FUN_1033c5b0

void FUN_1033c5b0(void)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f32b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_SELECTED_BLUE::vftable;
  local_4 = 0xffffffff;
  FNAppendixEffect::~FNAppendixEffect(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1033c600 FUN_1033c600

void FUN_1033c600(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNAppendixEffect::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  *in_ECX = FNAppendixEffect_COLOSSEUM_SELECTED_BLUE::vftable;
  return;
}


// ==== 1033c680 FUN_1033c680

void FUN_1033c680(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


// ==== 1033c6b0 FUN_1033c6b0

void FUN_1033c6b0(void)

{
  FNAppendixEffect_COLOSSEUM_SELECTED_BLUE *in_ECX;
  
  FNAppendixEffect_COLOSSEUM_SELECTED_BLUE::FNAppendixEffect_COLOSSEUM_SELECTED_BLUE
            (in_ECX,(AActor *)0x0);
  return;
}


// ==== 1033c6c0 FUN_1033c6c0

void FUN_1033c6c0(byte param_1)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f32f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_SELECTED_BLUE::vftable;
  local_4 = 0xffffffff;
  FNAppendixEffect::~FNAppendixEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1033c730 FUN_1033c730

FNAppendixEffect * FUN_1033c730(byte param_1)

{
  FNAppendixEffect *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f3318;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (in_ECX,0x14,*(int *)(in_ECX + -4),
               FNAppendixEffect_COLOSSEUM_SELECTED_BLUE::~FNAppendixEffect_COLOSSEUM_SELECTED_BLUE);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    ExceptionList = local_c;
    return in_ECX + -4;
  }
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = FNAppendixEffect_COLOSSEUM_SELECTED_BLUE::vftable;
  local_4 = 0xffffffff;
  FNAppendixEffect::~FNAppendixEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 1033c800 FUN_1033c800

void FUN_1033c800(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f333c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FNWeaponEffect::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  FString::FString((FString *)(in_ECX + 9),(FString *)(param_1 + 0x24));
  in_ECX[0xc] = *(undefined4 *)(param_1 + 0x30);
  in_ECX[0xd] = *(undefined4 *)(param_1 + 0x34);
  in_ECX[0xe] = *(undefined4 *)(param_1 + 0x38);
  in_ECX[0xf] = *(undefined4 *)(param_1 + 0x3c);
  in_ECX[0x10] = *(undefined4 *)(param_1 + 0x40);
  ExceptionList = local_c;
  return;
}


// ==== 1033c8e0 FUN_1033c8e0

void FUN_1033c8e0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FString::operator=((FString *)(in_ECX + 0x24),(FString *)(param_1 + 0x24));
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  return;
}


// ==== 1033c970 FUN_1033c970

void FUN_1033c970(byte param_1)

{
  FNWeaponEffect *in_ECX;
  
  FNWeaponEffect::~FNWeaponEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1033c9a0 FUN_1033c9a0

FNWeaponEffect * FUN_1033c9a0(byte param_1)

{
  FNWeaponEffect *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x44,*(int *)(in_ECX + -4),FNWeaponEffect::~FNWeaponEffect);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FNWeaponEffect::~FNWeaponEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 1033ca20 FUN_1033ca20

void FUN_1033ca20(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNCursedWeaponEffect::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  return;
}


// ==== 1033ca60 FUN_1033ca60

void FUN_1033ca60(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return;
}


// ==== 1033ca90 FUN_1033ca90

void FUN_1033ca90(byte param_1)

{
  FNCursedWeaponEffect *in_ECX;
  
  FNCursedWeaponEffect::~FNCursedWeaponEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1033cac0 FUN_1033cac0

FNCursedWeaponEffect * FUN_1033cac0(byte param_1)

{
  FNCursedWeaponEffect *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x18,*(int *)(in_ECX + -4),FNCursedWeaponEffect::~FNCursedWeaponEffect);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FNCursedWeaponEffect::~FNCursedWeaponEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 1033cb40 FUN_1033cb40

void FUN_1033cb40(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNViewShake::vftable;
  return;
}


// ==== 1033cb50 FUN_1033cb50

void FUN_1033cb50(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNViewShake::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  *(undefined1 *)(in_ECX + 2) = *(undefined1 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  in_ECX[0xb] = *(undefined4 *)(param_1 + 0x2c);
  in_ECX[0xc] = *(undefined4 *)(param_1 + 0x30);
  in_ECX[0xd] = *(undefined4 *)(param_1 + 0x34);
  in_ECX[0xe] = *(undefined4 *)(param_1 + 0x38);
  in_ECX[0xf] = *(undefined4 *)(param_1 + 0x3c);
  in_ECX[0x10] = *(undefined4 *)(param_1 + 0x40);
  in_ECX[0x11] = *(undefined4 *)(param_1 + 0x44);
  in_ECX[0x12] = *(undefined4 *)(param_1 + 0x48);
  in_ECX[0x13] = *(undefined4 *)(param_1 + 0x4c);
  in_ECX[0x14] = *(undefined4 *)(param_1 + 0x50);
  in_ECX[0x15] = *(undefined4 *)(param_1 + 0x54);
  in_ECX[0x16] = *(undefined4 *)(param_1 + 0x58);
  in_ECX[0x17] = *(undefined4 *)(param_1 + 0x5c);
  in_ECX[0x18] = *(undefined4 *)(param_1 + 0x60);
  in_ECX[0x19] = *(undefined4 *)(param_1 + 100);
  in_ECX[0x1a] = *(undefined4 *)(param_1 + 0x68);
  in_ECX[0x1b] = *(undefined4 *)(param_1 + 0x6c);
  in_ECX[0x1c] = *(undefined4 *)(param_1 + 0x70);
  in_ECX[0x1d] = *(undefined4 *)(param_1 + 0x74);
  in_ECX[0x1e] = *(undefined4 *)(param_1 + 0x78);
  in_ECX[0x1f] = *(undefined4 *)(param_1 + 0x7c);
  in_ECX[0x20] = *(undefined4 *)(param_1 + 0x80);
  *(undefined1 *)(in_ECX + 0x21) = *(undefined1 *)(param_1 + 0x84);
  in_ECX[0x22] = *(undefined4 *)(param_1 + 0x88);
  in_ECX[0x23] = *(undefined4 *)(param_1 + 0x8c);
  in_ECX[0x24] = *(undefined4 *)(param_1 + 0x90);
  in_ECX[0x25] = *(undefined4 *)(param_1 + 0x94);
  in_ECX[0x26] = *(undefined4 *)(param_1 + 0x98);
  return;
}


// ==== 1033ccc0 FUN_1033ccc0

void FUN_1033ccc0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined1 *)(in_ECX + 8) = *(undefined1 *)(param_1 + 8);
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
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined1 *)(in_ECX + 0x84) = *(undefined1 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  return;
}


// ==== 1033ce20 FUN_1033ce20

void FUN_1033ce20(void)

{
  FNViewShake *in_ECX;
  
  FNViewShake::FNViewShake(in_ECX,(AActor *)0x0);
  return;
}


// ==== 1033ce60 FUN_1033ce60

undefined4 * FUN_1033ce60(byte param_1)

{
  undefined4 *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x9c,in_ECX[-1],FNViewShake::~FNViewShake);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -1);
    }
    return in_ECX + -1;
  }
  *in_ECX = FNViewShake::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 1033cee0 FUN_1033cee0

void FUN_1033cee0(byte param_1)

{
  FNViewShakeMgr *in_ECX;
  
  FNViewShakeMgr::~FNViewShakeMgr(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1033cf10 FUN_1033cf10

FNViewShakeMgr * FUN_1033cf10(byte param_1)

{
  FNViewShakeMgr *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x40,*(int *)(in_ECX + -4),FNViewShakeMgr::~FNViewShakeMgr);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FNViewShakeMgr::~FNViewShakeMgr(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 1033cf90 FUN_1033cf90

void FUN_1033cf90(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = FNBoneScalerStat::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  *(undefined1 *)(in_ECX + 7) = *(undefined1 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  return;
}


// ==== 1033cff0 FUN_1033cff0

void FUN_1033cff0(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined1 *)(in_ECX + 0x1c) = *(undefined1 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  return;
}


// ==== 1033d040 FUN_1033d040

void FUN_1033d040(void)

{
  FNBoneScalerStat *in_ECX;
  
  FNBoneScalerStat::FNBoneScalerStat(in_ECX,(AActor *)0x0);
  return;
}


// ==== 1033d050 FUN_1033d050

void FUN_1033d050(byte param_1)

{
  FNBoneScalerStat *in_ECX;
  
  FNBoneScalerStat::~FNBoneScalerStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 1033d080 FUN_1033d080

FNBoneScalerStat * FUN_1033d080(byte param_1)

{
  FNBoneScalerStat *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x28,*(int *)(in_ECX + -4),FNBoneScalerStat::~FNBoneScalerStat);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FNBoneScalerStat::~FNBoneScalerStat(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 1033d100 FUN_1033d100

void FUN_1033d100(void)

{
  return;
}


// ==== 1033d140 FUN_1033d140

void FUN_1033d140(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x40) = param_1;
  return;
}


// ==== 1033d1a0 FUN_1033d1a0

FArchive * FUN_1033d1a0(undefined4 param_1,int param_2)

{
  FArchive *this;
  
  this = (FArchive *)thunk_FUN_10330350(param_1,param_2);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x40),4);
  return this;
}


// ==== 1033d1e0 FUN_1033d1e0

void FUN_1033d1e0(void)

{
  FMatrix *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f3399;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FMatrix::~FMatrix(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1033d230 FUN_1033d230

void FUN_1033d230(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 1033d250 FUN_1033d250

void FUN_1033d250(void)

{
  return;
}


// ==== 1033d290 FUN_1033d290

void FUN_1033d290(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x40) = param_1;
  *(undefined4 *)(in_ECX + 0x44) = param_1;
  *(undefined4 *)(in_ECX + 0x48) = param_1;
  return;
}


// ==== 1033d2f0 FUN_1033d2f0

void FUN_1033d2f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x40) = param_1;
  *(undefined4 *)(in_ECX + 0x44) = param_2;
  *(undefined4 *)(in_ECX + 0x48) = param_3;
  return;
}


// ==== 1033d360 FUN_1033d360

FArchive * FUN_1033d360(undefined4 param_1,int param_2)

{
  FArchive *this;
  
  this = (FArchive *)thunk_FUN_10330350(param_1,param_2);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x40),4);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x44),4);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x48),4);
  return this;
}


// ==== 1033d3c0 FUN_1033d3c0

void FUN_1033d3c0(void)

{
  FMatrix *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f3419;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FMatrix::~FMatrix(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1033d410 FUN_1033d410

void FUN_1033d410(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 1033d430 FUN_1033d430

void FUN_1033d430(void)

{
  return;
}


// ==== 1033d470 FUN_1033d470

void FUN_1033d470(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x40) = param_1;
  *(undefined4 *)(in_ECX + 0x44) = param_2;
  return;
}


// ==== 1033d4d0 FUN_1033d4d0

FArchive * FUN_1033d4d0(undefined4 param_1,int param_2)

{
  FArchive *this;
  
  this = (FArchive *)thunk_FUN_10330350(param_1,param_2);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x40),4);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x44),4);
  return this;
}


// ==== 1033d520 FUN_1033d520

void FUN_1033d520(void)

{
  FMatrix *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f3479;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FMatrix::~FMatrix(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1033d570 FUN_1033d570

void FUN_1033d570(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 1033d590 FUN_1033d590

int FUN_1033d590(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x28) + *(int *)(in_ECX + 0x1c) + *(int *)(in_ECX + 0x10) +
         *(int *)(in_ECX + 4);
}


// ==== 1033d5a0 FUN_1033d5a0

UClass * FUN_1033d5a0(void)

{
  return &UKMeshProps::PrivateStaticClass;
}


// ==== 1033d5b0 FUN_1033d5b0

void FUN_1033d5b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UKMeshProps::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,
             0,0);
  return;
}


// ==== 1033d5f0 FUN_1033d5f0

undefined4 FUN_1033d5f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033d600 FUN_1033d600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d600(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_TravelPostAccept,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033d630 FUN_1033d630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d630(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_TravelPreAccept,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033d660 FUN_1033d660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d660(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_PostSetPawnResource,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033d690 FUN_1033d690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d690(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_PostNetBeginPlay,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033d6c0 FUN_1033d6c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d6c0(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_SetInitialState,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033d6f0 FUN_1033d6f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d6f0(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FName aFStack_c [4];
  
  FName::FName(aFStack_c,0x165);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = _ENGINE_PostBeginPlay;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,uVar5,uVar6);
  }
  return;
}


// ==== 1033d740 FUN_1033d740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d740(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *in_ECX;
  uVar6 = 0;
  local_14 = param_1;
  local_c = param_3;
  puVar5 = &local_14;
  local_10 = param_2;
  local_8 = param_4;
  uVar4 = 0;
  local_4 = param_5;
  uVar3 = _ENGINE_BroadcastLocalizedMessage;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 1033d7b0 FUN_1033d7b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d7b0(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FName aFStack_c [4];
  
  FName::FName(aFStack_c,0x163);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = _ENGINE_PreBeginPlay;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,uVar5,uVar6);
  }
  return;
}


// ==== 1033d800 FUN_1033d800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d800(undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar1 = *in_ECX;
  uVar6 = 0;
  puVar5 = &param_1;
  uVar4 = 0;
  uVar3 = _ENGINE_RenderTexture;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 1033d840 FUN_1033d840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d840(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FName aFStack_c [4];
  
  FName::FName(aFStack_c,0x164);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = _ENGINE_BeginPlay;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,uVar5,uVar6);
  }
  return;
}


// ==== 1033d890 FUN_1033d890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d890(undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar1 = *in_ECX;
  uVar6 = 0;
  puVar5 = &param_1;
  uVar4 = 0;
  uVar3 = _ENGINE_PostTeleport;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 1033d8d0 FUN_1033d8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1033d8d0(undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *in_ECX;
  uVar6 = 0;
  puVar5 = &local_8;
  uVar4 = 0;
  local_4 = 0;
  local_8 = param_1;
  uVar3 = _ENGINE_PreTeleport;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return puVar5;
}


// ==== 1033d930 FUN_1033d930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d930(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_14 = param_3;
  local_c = param_5;
  local_8 = param_6;
  iVar1 = *in_ECX;
  local_18 = param_2;
  uVar6 = 0;
  puVar5 = &local_1c;
  local_10 = param_4;
  local_1c = param_1;
  uVar4 = 0;
  local_4 = param_7;
  uVar3 = _ENGINE_DemoPlaySound;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 1033d9c0 FUN_1033d9c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d9c0(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_TornOff,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033d9f0 FUN_1033d9f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d9f0(undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar1 = *in_ECX;
  uVar6 = 0;
  puVar5 = &param_1;
  uVar4 = 0;
  uVar3 = _ENGINE_KilledBy;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 1033da30 FUN_1033da30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033da30(undefined1 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  
  iVar1 = *in_ECX;
  uVar6 = 0;
  puVar5 = &param_1;
  uVar4 = 0;
  uVar3 = _ENGINE_FellOutOfWorld;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 1033da70 FUN_1033da70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033da70(undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar1 = *in_ECX;
  uVar6 = 0;
  puVar5 = &param_1;
  uVar4 = 0;
  uVar3 = _ENGINE_UsedBy;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 1033dab0 FUN_1033dab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033dab0(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FName aFStack_c [4];
  
  FName::FName(aFStack_c,0x145);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = _ENGINE_EndedRotation;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,uVar5,uVar6);
  }
  return;
}


// ==== 1033db00 FUN_1033db00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033db00(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_FinishedInterpolation,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033db30 FUN_1033db30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033db30(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_10 [4];
  
  FName::FName(aFStack_10,0x148);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff8;
    uVar4 = 0;
    uVar3 = _ENGINE_EncroachedBy;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 1033dba0 FUN_1033dba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1033dba0(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_14 [4];
  undefined4 uStack_8;
  
  FName::FName(aFStack_14,0x147);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff4;
    uVar4 = 0;
    uVar3 = _ENGINE_EncroachingOn;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return uStack_8;
}


// ==== 1033dc20 FUN_1033dc20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1033dc20(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_14 [4];
  undefined4 uStack_8;
  
  FName::FName(aFStack_14,0x15a);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff4;
    uVar4 = 0;
    uVar3 = _ENGINE_SpecialHandling;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return uStack_8;
}


// ==== 1033dca0 FUN_1033dca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033dca0(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_10 [4];
  
  FName::FName(aFStack_10,0x140);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff8;
    uVar4 = 0;
    uVar3 = _ENGINE_Detach;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 1033dd10 FUN_1033dd10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033dd10(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_10 [4];
  
  FName::FName(aFStack_10,0x13f);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff8;
    uVar4 = 0;
    uVar3 = _ENGINE_Attach;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 1033dd80 FUN_1033dd80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033dd80(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FName aFStack_c [4];
  
  FName::FName(aFStack_c,0x13e);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = _ENGINE_BaseChange;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,uVar5,uVar6);
  }
  return;
}


// ==== 1033ddd0 FUN_1033ddd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033ddd0(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_10 [4];
  
  FName::FName(aFStack_10,0x13b);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff8;
    uVar4 = 0;
    uVar3 = _ENGINE_Bump;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 1033de40 FUN_1033de40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033de40(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_10 [4];
  
  FName::FName(aFStack_10,0x13a);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff8;
    uVar4 = 0;
    uVar3 = _ENGINE_UnTouch;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 1033deb0 FUN_1033deb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033deb0(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_10 [4];
  
  FName::FName(aFStack_10,0x14b);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff8;
    uVar4 = 0;
    uVar3 = _ENGINE_PostTouch;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 1033df20 FUN_1033df20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033df20(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_10 [4];
  
  FName::FName(aFStack_10,0x139);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff8;
    uVar4 = 0;
    uVar3 = _ENGINE_Touch;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 1033df90 FUN_1033df90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033df90(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_10 [4];
  
  FName::FName(aFStack_10,0x138);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff8;
    uVar4 = 0;
    uVar3 = _ENGINE_PhysicsVolumeChange;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 1033e000 FUN_1033e000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e000(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_10 [4];
  
  FName::FName(aFStack_10,0x143);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff8;
    uVar4 = 0;
    uVar3 = _ENGINE_ZoneChange;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 1033e070 FUN_1033e070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e070(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FName aFStack_c [4];
  
  FName::FName(aFStack_c,0x136);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = _ENGINE_Falling;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,uVar5,uVar6);
  }
  return;
}


// ==== 1033e0c0 FUN_1033e0c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e0c0(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FName aFStack_c [4];
  
  FName::FName(aFStack_c,0x134);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = _ENGINE_Timer;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,uVar5,uVar6);
  }
  return;
}


// ==== 1033e110 FUN_1033e110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e110(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_EndEvent,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033e140 FUN_1033e140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e140(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_BeginEvent,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033e170 FUN_1033e170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e170(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_14 [4];
  
  FName::FName(aFStack_14,0x133);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff4;
    uVar4 = 0;
    uVar3 = _ENGINE_UnTrigger;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 1033e1e0 FUN_1033e1e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e1e0(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_14 [4];
  
  FName::FName(aFStack_14,0x132);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff4;
    uVar4 = 0;
    uVar3 = _ENGINE_Trigger;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 1033e250 FUN_1033e250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e250(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FName aFStack_c [4];
  
  FName::FName(aFStack_c,0x162);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = _ENGINE_PostNetReceive;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,uVar5,uVar6);
  }
  return;
}


// ==== 1033e2a0 FUN_1033e2a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e2a0(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_10 [4];
  
  FName::FName(aFStack_10,0x150);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff8;
    uVar4 = 0;
    uVar3 = _ENGINE_Tick;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 1033e310 FUN_1033e310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e310(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_10 [4];
  
  FName::FName(aFStack_10,0x12f);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff8;
    uVar4 = 0;
    uVar3 = _ENGINE_LostChild;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 1033e380 FUN_1033e380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e380(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_10 [4];
  
  FName::FName(aFStack_10,0x12e);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff8;
    uVar4 = 0;
    uVar3 = _ENGINE_GainedChild;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 1033e3f0 FUN_1033e3f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e3f0(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FName aFStack_c [4];
  
  FName::FName(aFStack_c,0x12d);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = _ENGINE_Destroyed;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,uVar5,uVar6);
  }
  return;
}


// ==== 1033e440 FUN_1033e440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e440(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_KSkelConvulse,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033e470 FUN_1033e470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e470(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_KVelDropBelow,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033e4a0 FUN_1033e4a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e4a0(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_10 [4];
  
  FName::FName(aFStack_10,0x144);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff8;
    uVar4 = 0;
    uVar3 = _ENGINE_AnimEnd;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 1033e510 FUN_1033e510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e510(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_ClearL2Game,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033e540 FUN_1033e540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033e540(undefined1 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  
  iVar1 = *in_ECX;
  uVar6 = 0;
  puVar5 = &param_1;
  uVar4 = 0;
  uVar3 = _ENGINE_L2GameActionNotify;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 1033e580 FUN_1033e580

UClass * FUN_1033e580(void)

{
  return &AActor::PrivateStaticClass;
}


// ==== 1033e590 FUN_1033e590

void FUN_1033e590(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AActor::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1033e5d0 FUN_1033e5d0

undefined4 FUN_1033e5d0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033e5e0 FUN_1033e5e0

void FUN_1033e5e0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_2);
  return;
}


// ==== 1033e600 FUN_1033e600

undefined4 FUN_1033e600(void)

{
  int in_ECX;
  
  if ((-1 < (char)*(uint *)(in_ECX + 0x368)) && ((*(uint *)(in_ECX + 0x368) & 0x100) == 0)) {
    return 0;
  }
  return 1;
}


// ==== 1033e620 FUN_1033e620

void FUN_1033e620(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x2f0);
  param_1[1] = *(undefined4 *)(in_ECX + 0x2f0);
  param_1[2] = *(undefined4 *)(in_ECX + 0x2f4);
  return;
}


// ==== 1033e650 FUN_1033e650

bool FUN_1033e650(void)

{
  int in_ECX;
  
  return 0 < *(int *)(in_ECX + 0x16c);
}


// ==== 1033e660 FUN_1033e660

void FUN_1033e660(void)

{
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x2e4) & 8) != 0) && (*(AActor **)(in_ECX + 0x40) != (AActor *)0x0)) {
    AActor::GetAmbientLightingActor(*(AActor **)(in_ECX + 0x40));
    return;
  }
  return;
}


// ==== 1033e680 FUN_1033e680

void FUN_1033e680(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined1 *puVar5;
  undefined1 local_44 [24];
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_107f3490;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff98;
  local_8 = 0;
  if (0.0 < param_3[2] * param_4[2] + param_3[1] * param_4[1] + *param_3 * *param_4) {
    fVar3 = param_3[2] * param_2[2] + param_2[1] * param_3[1] + *param_2 * *param_3;
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    param_5 = 1.0 - param_5;
    *param_2 = param_5 * (*param_2 - fVar3 * *param_3);
    param_2[1] = (param_2[1] - fVar3 * fVar1) * param_5;
    param_2[2] = param_5 * (param_2[2] - fVar3 * fVar2);
    fVar1 = param_1[2] * param_2[2] + *param_1 * *param_2 + param_1[1] * param_2[1];
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      *param_2 = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
    }
  }
  else {
    local_2c = param_4[2] * param_3[1] - param_3[2] * param_4[1];
    local_28 = *param_4 * param_3[2] - *param_3 * param_4[2];
    local_24 = *param_3 * param_4[1] - *param_4 * param_3[1];
    puVar5 = local_44;
    ExceptionList = &local_10;
    local_18 = local_24;
    pfVar4 = (float *)FVector::SafeNormal((FVector *)&local_2c);
    local_2c = *pfVar4;
    local_28 = pfVar4[1];
    local_24 = pfVar4[2];
    pfVar4 = (float *)thunk_FUN_103301a0(local_44,(1.0 - param_5) *
                                                  (local_24 * param_2[2] +
                                                  local_28 * param_2[1] + *param_2 * local_2c),
                                         &local_2c,puVar5);
    *param_2 = *pfVar4;
    param_2[1] = pfVar4[1];
    param_2[2] = pfVar4[2];
    if (param_1[2] * param_2[2] + *param_1 * *param_2 + param_1[1] * param_2[1] < 0.0) {
      pfVar4 = (float *)thunk_FUN_103301a0(local_44,0xbf800000,param_2,puVar5);
      *param_2 = *pfVar4;
      param_2[1] = pfVar4[1];
      param_2[2] = pfVar4[2];
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 1033e8e3 Catch@1033e8e3

void Catch_1033e8e3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 1033e8f7 Catch@1033e8f7

void Catch_1033e8f7(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AActor::TwoWallAdjust");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1033e9c0 FUN_1033e9c0

FName * FUN_1033e9c0(FName *param_1)

{
  FName::FName(param_1,0);
  return param_1;
}


// ==== 1033e9e0 FUN_1033e9e0

FName * FUN_1033e9e0(FName *param_1)

{
  FName::FName(param_1,0);
  return param_1;
}


// ==== 1033ea00 FUN_1033ea00

void FUN_1033ea00(void)

{
  return;
}


// ==== 1033ea10 FUN_1033ea10

void FUN_1033ea10(void)

{
  return;
}


// ==== 1033ea20 FUN_1033ea20

void FUN_1033ea20(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x2ae) = param_1;
  *(undefined1 *)(in_ECX + 0x2ad) = param_2;
  *(undefined1 *)(in_ECX + 0x2ac) = param_3;
  *(undefined1 *)(in_ECX + 0x2af) = param_4;
  return;
}


// ==== 1033ea60 FUN_1033ea60

void FUN_1033ea60(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x3b0) = param_1;
  return;
}


// ==== 1033ea70 FUN_1033ea70

void FUN_1033ea70(void)

{
  FName *in_ECX;
  
  FName::FName(in_ECX);
  return;
}


// ==== 1033ead0 FUN_1033ead0

void FUN_1033ead0(void)

{
  int in_ECX;
  
  FQuat::FQuat((FQuat *)(in_ECX + 0xc));
  return;
}


// ==== 1033eaf0 FUN_1033eaf0

UClass * FUN_1033eaf0(void)

{
  return &ADecoVolumeObject::PrivateStaticClass;
}


// ==== 1033eb00 FUN_1033eb00

void FUN_1033eb00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ADecoVolumeObject::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1033eb40 FUN_1033eb40

undefined4 FUN_1033eb40(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033eb50 FUN_1033eb50

UClass * FUN_1033eb50(void)

{
  return &AKeypoint::PrivateStaticClass;
}


// ==== 1033eb60 FUN_1033eb60

void FUN_1033eb60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AKeypoint::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,
             0);
  return;
}


// ==== 1033eba0 FUN_1033eba0

undefined4 FUN_1033eba0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033ebb0 FUN_1033ebb0

UClass * FUN_1033ebb0(void)

{
  return &ADecorationList::PrivateStaticClass;
}


// ==== 1033ebc0 FUN_1033ebc0

void FUN_1033ebc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ADecorationList::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1033ec00 FUN_1033ec00

undefined4 FUN_1033ec00(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033ec10 FUN_1033ec10

UClass * FUN_1033ec10(void)

{
  return &ALookTarget::PrivateStaticClass;
}


// ==== 1033ec20 FUN_1033ec20

void FUN_1033ec20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ALookTarget::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,
             0,0);
  return;
}


// ==== 1033ec60 FUN_1033ec60

undefined4 FUN_1033ec60(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033ec70 FUN_1033ec70

UClass * FUN_1033ec70(void)

{
  return &AAmbientSound::PrivateStaticClass;
}


// ==== 1033ec80 FUN_1033ec80

void FUN_1033ec80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AAmbientSound::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1033ecc0 FUN_1033ecc0

undefined4 FUN_1033ecc0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033ecd0 FUN_1033ecd0

bool FUN_1033ecd0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x3c8) != 0;
}


// ==== 1033ece0 FUN_1033ece0

UClass * FUN_1033ece0(void)

{
  return &AAIScript::PrivateStaticClass;
}


// ==== 1033ecf0 FUN_1033ecf0

void FUN_1033ecf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AAIScript::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,
             0);
  return;
}


// ==== 1033ed30 FUN_1033ed30

undefined4 FUN_1033ed30(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033ed40 FUN_1033ed40

UClass * FUN_1033ed40(void)

{
  return &AInterpolationPoint::PrivateStaticClass;
}


// ==== 1033ed50 FUN_1033ed50

void FUN_1033ed50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AInterpolationPoint::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1033ed90 FUN_1033ed90

undefined4 FUN_1033ed90(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033eda0 FUN_1033eda0

UClass * FUN_1033eda0(void)

{
  return &APolyMarker::PrivateStaticClass;
}


// ==== 1033edb0 FUN_1033edb0

void FUN_1033edb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&APolyMarker::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,
             0,0);
  return;
}


// ==== 1033edf0 FUN_1033edf0

undefined4 FUN_1033edf0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033ee00 FUN_1033ee00

UClass * FUN_1033ee00(void)

{
  return &AClipMarker::PrivateStaticClass;
}


// ==== 1033ee10 FUN_1033ee10

void FUN_1033ee10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AClipMarker::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,
             0,0);
  return;
}


// ==== 1033ee50 FUN_1033ee50

undefined4 FUN_1033ee50(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033ee60 FUN_1033ee60

UClass * FUN_1033ee60(void)

{
  return &AViewportWindowController::PrivateStaticClass;
}


// ==== 1033ee70 FUN_1033ee70

void FUN_1033ee70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AViewportWindowController::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1033eeb0 FUN_1033eeb0

undefined4 FUN_1033eeb0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033eec0 FUN_1033eec0

void FUN_1033eec0(FArchive *param_1,FString *param_2)

{
  FArchive *pFVar1;
  FString *pFVar2;
  
  pFVar2 = param_2 + 0xc;
  pFVar1 = operator<<(param_1,param_2);
  operator<<(pFVar1,pFVar2);
  return;
}


// ==== 1033eef0 FUN_1033eef0

void FUN_1033eef0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f34b5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FString::FString(in_ECX + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 1033ef60 FUN_1033ef60

void FUN_1033ef60(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f34e5;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString(in_ECX + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1033efd0 FUN_1033efd0

void FUN_1033efd0(FString *param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f3515;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX,param_1);
  local_4 = 0;
  FString::FString(in_ECX + 0xc,param_1 + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 1033f050 FUN_1033f050

void FUN_1033f050(FString *param_1)

{
  FString *in_ECX;
  
  FString::operator=(in_ECX,param_1);
  FString::operator=(in_ECX + 0xc,param_1 + 0xc);
  return;
}


// ==== 1033f080 FUN_1033f080

void FUN_1033f080(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AInfo::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1033f0c0 FUN_1033f0c0

undefined4 FUN_1033f0c0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033f0d0 FUN_1033f0d0

UClass * FUN_1033f0d0(void)

{
  return &ASecurity::PrivateStaticClass;
}


// ==== 1033f0e0 FUN_1033f0e0

void FUN_1033f0e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ASecurity::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,
             0);
  return;
}


// ==== 1033f120 FUN_1033f120

undefined4 FUN_1033f120(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033f130 FUN_1033f130

void FUN_1033f130(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f353c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 1033f180 FUN_1033f180

void FUN_1033f180(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f355c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 1033f1d0 FUN_1033f1d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f1d0(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_SceneEnded,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033f200 FUN_1033f200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f200(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_SceneStarted,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033f230 FUN_1033f230

UClass * FUN_1033f230(void)

{
  return &ASceneManager::PrivateStaticClass;
}


// ==== 1033f240 FUN_1033f240

void FUN_1033f240(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ASceneManager::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1033f280 FUN_1033f280

undefined4 FUN_1033f280(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033f290 FUN_1033f290

UClass * FUN_1033f290(void)

{
  return &AL2SeamlessInfo::PrivateStaticClass;
}


// ==== 1033f2a0 FUN_1033f2a0

void FUN_1033f2a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AL2SeamlessInfo::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1033f2e0 FUN_1033f2e0

undefined4 FUN_1033f2e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033f2f0 FUN_1033f2f0

UClass * FUN_1033f2f0(void)

{
  return &ASuperPointInfo::PrivateStaticClass;
}


// ==== 1033f300 FUN_1033f300

void FUN_1033f300(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ASuperPointInfo::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1033f340 FUN_1033f340

undefined4 FUN_1033f340(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033f350 FUN_1033f350

undefined4 FUN_1033f350(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x3fc);
}


// ==== 1033f360 FUN_1033f360

UClass * FUN_1033f360(void)

{
  return &AServerPrimitive::PrivateStaticClass;
}


// ==== 1033f370 FUN_1033f370

void FUN_1033f370(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AServerPrimitive::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1033f3b0 FUN_1033f3b0

undefined4 FUN_1033f3b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033f3c0 FUN_1033f3c0

UClass * FUN_1033f3c0(void)

{
  return &ANpcPosInfo::PrivateStaticClass;
}


// ==== 1033f3d0 FUN_1033f3d0

void FUN_1033f3d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ANpcPosInfo::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,
             0,0);
  return;
}


// ==== 1033f410 FUN_1033f410

undefined4 FUN_1033f410(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033f420 FUN_1033f420

UClass * FUN_1033f420(void)

{
  return &ALocationInfo::PrivateStaticClass;
}


// ==== 1033f430 FUN_1033f430

void FUN_1033f430(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ALocationInfo::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1033f470 FUN_1033f470

undefined4 FUN_1033f470(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033f480 FUN_1033f480

UClass * FUN_1033f480(void)

{
  return &ATerritoryInfo::PrivateStaticClass;
}


// ==== 1033f490 FUN_1033f490

void FUN_1033f490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ATerritoryInfo::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1033f4d0 FUN_1033f4d0

undefined4 FUN_1033f4d0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033f4e0 FUN_1033f4e0

UClass * FUN_1033f4e0(void)

{
  return &AEnvCreatureManagerInfo::PrivateStaticClass;
}


// ==== 1033f4f0 FUN_1033f4f0

void FUN_1033f4f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AEnvCreatureManagerInfo::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1033f530 FUN_1033f530

undefined4 FUN_1033f530(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033f540 AActor::PostScriptDestroyed thunk -> 10310627

// ==== 1033f550 AActor::PostBeginPlay thunk -> 10314362

// ==== 1033f560 FUN_1033f560

void FUN_1033f560(float param_1,ELevelTick param_2)

{
  AActor *in_ECX;
  
  AActor::Tick(in_ECX,param_1,param_2);
  return;
}


// ==== 1033f580 FUN_1033f580

void FUN_1033f580(void)

{
  return;
}


// ==== 1033f590 FUN_1033f590

UClass * FUN_1033f590(void)

{
  return &AReplicationInfo::PrivateStaticClass;
}


// ==== 1033f5a0 FUN_1033f5a0

void FUN_1033f5a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AReplicationInfo::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1033f5e0 FUN_1033f5e0

undefined4 FUN_1033f5e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033f5f0 FUN_1033f5f0

UClass * FUN_1033f5f0(void)

{
  return &ATeamInfo::PrivateStaticClass;
}


// ==== 1033f600 FUN_1033f600

void FUN_1033f600(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ATeamInfo::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,
             0);
  return;
}


// ==== 1033f640 FUN_1033f640

undefined4 FUN_1033f640(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033f650 FUN_1033f650

UClass * FUN_1033f650(void)

{
  return &AGameReplicationInfo::PrivateStaticClass;
}


// ==== 1033f660 FUN_1033f660

void FUN_1033f660(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AGameReplicationInfo::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1033f6a0 FUN_1033f6a0

undefined4 FUN_1033f6a0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033f6b0 FUN_1033f6b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f6b0(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_ClientNameChange,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033f6e0 FUN_1033f6e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f6e0(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_UpdateCharacter,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033f710 FUN_1033f710

UClass * FUN_1033f710(void)

{
  return &APlayerReplicationInfo::PrivateStaticClass;
}


// ==== 1033f720 FUN_1033f720

void FUN_1033f720(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&APlayerReplicationInfo::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1033f760 FUN_1033f760

undefined4 FUN_1033f760(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033f770 FUN_1033f770

UClass * FUN_1033f770(void)

{
  return &APotentialClimbWatcher::PrivateStaticClass;
}


// ==== 1033f780 FUN_1033f780

void FUN_1033f780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&APotentialClimbWatcher::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1033f7c0 FUN_1033f7c0

undefined4 FUN_1033f7c0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033f7d0 FUN_1033f7d0

UClass * FUN_1033f7d0(void)

{
  return &AMutator::PrivateStaticClass;
}


// ==== 1033f7e0 FUN_1033f7e0

void FUN_1033f7e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AMutator::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0
            );
  return;
}


// ==== 1033f820 FUN_1033f820

undefined4 FUN_1033f820(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033f830 FUN_1033f830

UClass * FUN_1033f830(void)

{
  return &AInternetInfo::PrivateStaticClass;
}


// ==== 1033f840 FUN_1033f840

void FUN_1033f840(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AInternetInfo::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1033f880 FUN_1033f880

undefined4 FUN_1033f880(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033f890 FUN_1033f890

UClass * FUN_1033f890(void)

{
  return &ASavedMove::PrivateStaticClass;
}


// ==== 1033f8a0 FUN_1033f8a0

void FUN_1033f8a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ASavedMove::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0
             ,0);
  return;
}


// ==== 1033f8e0 FUN_1033f8e0

undefined4 FUN_1033f8e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033f8f0 FUN_1033f8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f8f0(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_10 [4];
  
  FName::FName(aFStack_10,0x142);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff8;
    uVar4 = 0;
    uVar3 = _ENGINE_ActorLeaving;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 1033f960 FUN_1033f960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f960(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_10 [4];
  
  FName::FName(aFStack_10,0x141);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff8;
    uVar4 = 0;
    uVar3 = _ENGINE_ActorEntered;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 1033f9d0 FUN_1033f9d0

UClass * FUN_1033f9d0(void)

{
  return &AZoneInfo::PrivateStaticClass;
}


// ==== 1033f9e0 FUN_1033f9e0

void FUN_1033f9e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AZoneInfo::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,
             0);
  return;
}


// ==== 1033fa20 FUN_1033fa20

undefined4 FUN_1033fa20(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033fa30 FUN_1033fa30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fa30(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_ForceGenerate,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033fa60 FUN_1033fa60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fa60(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_Generate,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033fa90 FUN_1033fa90

UClass * FUN_1033fa90(void)

{
  return &AWarpZoneInfo::PrivateStaticClass;
}


// ==== 1033faa0 FUN_1033faa0

void FUN_1033faa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AWarpZoneInfo::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 1033fae0 FUN_1033fae0

undefined4 FUN_1033fae0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033faf0 FUN_1033faf0

UClass * FUN_1033faf0(void)

{
  return &ASkyZoneInfo::PrivateStaticClass;
}


// ==== 1033fb00 FUN_1033fb00

void FUN_1033fb00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ASkyZoneInfo::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref
             ,0,0);
  return;
}


// ==== 1033fb40 FUN_1033fb40

undefined4 FUN_1033fb40(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033fb50 FUN_1033fb50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fb50(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_FillPrecacheStaticMeshesArray,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033fb80 FUN_1033fb80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fb80(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_FillPrecacheMaterialsArray,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033fbb0 FUN_1033fbb0

UClass * FUN_1033fbb0(void)

{
  return &ALevelInfo::PrivateStaticClass;
}


// ==== 1033fbc0 FUN_1033fbc0

void FUN_1033fbc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ALevelInfo::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0
             ,0);
  return;
}


// ==== 1033fc00 FUN_1033fc00

undefined4 FUN_1033fc00(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033fc10 FUN_1033fc10

void FUN_1033fc10(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f3579;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1033fc60 FUN_1033fc60

void FUN_1033fc60(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f3599;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1033fcb0 FUN_1033fcb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fcb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *in_ECX;
  local_18 = param_1;
  local_14 = param_2;
  uVar6 = 0;
  local_c = param_4;
  puVar5 = &local_18;
  local_8 = param_5;
  uVar4 = 0;
  local_10 = param_3;
  local_4 = param_6;
  uVar3 = _ENGINE_BroadcastLocalized;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 1033fd30 FUN_1033fd30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fd30(undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar1 = *in_ECX;
  uVar6 = 0;
  puVar5 = &param_1;
  uVar4 = 0;
  uVar3 = _ENGINE_AcceptInventory;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 1033fd70 FUN_1033fd70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fd70(undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar1 = *in_ECX;
  uVar6 = 0;
  puVar5 = &param_1;
  uVar4 = 0;
  uVar3 = _ENGINE_L2NetPostLogin;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 1033fdb0 FUN_1033fdb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fdb0(undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar1 = *in_ECX;
  uVar6 = 0;
  puVar5 = &param_1;
  uVar4 = 0;
  uVar3 = _ENGINE_PostLogin;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 1033fdf0 FUN_1033fdf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fdf0(undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar1 = *in_ECX;
  uVar6 = 0;
  puVar5 = &param_1;
  uVar4 = 0;
  uVar3 = _ENGINE_SpawnDefaultPlayerPawn;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 1033fe30 FUN_1033fe30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fe30(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_DetailChange,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033fe60 FUN_1033fe60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033fe60(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_GameEnding,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 1033fe90 FUN_1033fe90

UClass * FUN_1033fe90(void)

{
  return &AGameInfo::PrivateStaticClass;
}


// ==== 1033fea0 FUN_1033fea0

void FUN_1033fea0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AGameInfo::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,
             0);
  return;
}


// ==== 1033fee0 FUN_1033fee0

undefined4 FUN_1033fee0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1033fef0 FUN_1033fef0

void FUN_1033fef0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f35bc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4));
  local_4 = 0;
  FName::FName((FName *)(in_ECX + 0x10));
  ExceptionList = local_c;
  return;
}


// ==== 1033ff60 FUN_1033ff60

void FUN_1033ff60(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f35dc;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 1033ffb0 FUN_1033ffb0

void FUN_1033ffb0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f35fc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4));
  local_4 = 0;
  FRotator::FRotator((FRotator *)(in_ECX + 0x1c));
  ExceptionList = local_c;
  return;
}


// ==== 10340020 FUN_10340020

void FUN_10340020(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f361c;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10340070 FUN_10340070

void FUN_10340070(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f3651;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FString::FString(in_ECX + 0xc);
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::FString(in_ECX + 0x18);
  ExceptionList = local_c;
  return;
}


// ==== 103400f0 FUN_103400f0

void FUN_103400f0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107f3691;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FString::~FString(in_ECX + 0x18);
  local_4 = local_4 & 0xffffff00;
  FString::~FString(in_ECX + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10340170 FUN_10340170

void FUN_10340170(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f36d1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FString::FString(in_ECX + 0xc);
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::FString(in_ECX + 0x18);
  ExceptionList = local_c;
  return;
}


// ==== 103401f0 FUN_103401f0

void FUN_103401f0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107f3711;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FString::~FString(in_ECX + 0x18);
  local_4 = local_4 & 0xffffff00;
  FString::~FString(in_ECX + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10340270 FUN_10340270

void FUN_10340270(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f375d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FString::FString(in_ECX + 0xc);
  local_4._0_1_ = 1;
  FString::FString(in_ECX + 0x18);
  local_4 = CONCAT31(local_4._1_3_,2);
  FString::FString(in_ECX + 0x24);
  ExceptionList = local_c;
  return;
}


// ==== 10340300 FUN_10340300

void FUN_10340300(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_107f37ad;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FString::~FString(in_ECX + 0x24);
  local_4._0_1_ = 1;
  FString::~FString(in_ECX + 0x18);
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString(in_ECX + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10340390 FUN_10340390

void FUN_10340390(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f37d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103403e0 FUN_103403e0

void FUN_103403e0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f37f9;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10340430 FUN_10340430

void FUN_10340430(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f3825;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FString::FString(in_ECX + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 103404a0 FUN_103404a0

void FUN_103404a0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f3855;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString(in_ECX + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10340510 FUN_10340510

UClass * FUN_10340510(void)

{
  return &AStatLog::PrivateStaticClass;
}


// ==== 10340520 FUN_10340520

void FUN_10340520(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AStatLog::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0
            );
  return;
}


// ==== 10340560 FUN_10340560

undefined4 FUN_10340560(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10340570 FUN_10340570

void FUN_10340570(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f3891;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FString::FString(in_ECX + 0xc);
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::FString(in_ECX + 0x18);
  ExceptionList = local_c;
  return;
}


// ==== 103405f0 FUN_103405f0

void FUN_103405f0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_107f38d1;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FString::~FString(in_ECX + 0x18);
  local_4 = local_4 & 0xffffff00;
  FString::~FString(in_ECX + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10340670 FUN_10340670

void FUN_10340670(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f3905;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  local_4 = 0;
  FString::FString(in_ECX + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 103406e0 FUN_103406e0

void FUN_103406e0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f3935;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FString::~FString(in_ECX + 0xc);
  local_4 = 0xffffffff;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10340750 FUN_10340750

void FUN_10340750(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_107f3959;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103407a0 FUN_103407a0

void FUN_103407a0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_107f3979;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103407f0 FUN_103407f0

UClass * FUN_103407f0(void)

{
  return &AStatLogFile::PrivateStaticClass;
}


// ==== 10340800 FUN_10340800

void FUN_10340800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AStatLogFile::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref
             ,0,0);
  return;
}


// ==== 10340840 FUN_10340840

undefined4 FUN_10340840(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10340850 FUN_10340850

void FUN_10340850(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AGameStats::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0
             ,0);
  return;
}


// ==== 10340890 FUN_10340890

void FUN_10340890(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AFileLog::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0
            );
  return;
}


// ==== 103408d0 FUN_103408d0

void FUN_103408d0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


// ==== 103408f0 FUN_103408f0

UClass * FUN_103408f0(void)

{
  return &AStaticMeshActor::PrivateStaticClass;
}


// ==== 10340900 FUN_10340900

void FUN_10340900(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AStaticMeshActor::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10340940 FUN_10340940

undefined4 FUN_10340940(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10340950 FUN_10340950

UClass * FUN_10340950(void)

{
  return &AMovableStaticMeshActor::PrivateStaticClass;
}


// ==== 10340960 FUN_10340960

void FUN_10340960(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AMovableStaticMeshActor::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 103409a0 FUN_103409a0

undefined4 FUN_103409a0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103409b0 FUN_103409b0

UClass * FUN_103409b0(void)

{
  return &ASpawnableStaticMeshActor::PrivateStaticClass;
}


// ==== 103409c0 FUN_103409c0

void FUN_103409c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ASpawnableStaticMeshActor::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10340a00 FUN_10340a00

undefined4 FUN_10340a00(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10340a10 FUN_10340a10

UClass * FUN_10340a10(void)

{
  return &AProjector::PrivateStaticClass;
}


// ==== 10340a20 FUN_10340a20

void FUN_10340a20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AProjector::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0
             ,0);
  return;
}


// ==== 10340a60 FUN_10340a60

undefined4 FUN_10340a60(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10340a70 FUN_10340a70

void FUN_10340a70(void)

{
  AActor *in_ECX;
  
  AActor::PostEditChange(in_ECX);
  (**(code **)(*(int *)in_ECX + 0x324))(1);
                    /* WARNING: Could not recover jumptable at 0x10340a91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)in_ECX + 800))();
  return;
}


// ==== 10340aa0 FUN_10340aa0

void FUN_10340aa0(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x1bc))(0,0);
                    /* WARNING: Could not recover jumptable at 0x10340abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 800))();
  return;
}


// ==== 10340ad0 FUN_10340ad0

void FUN_10340ad0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = FVector::operator!=((FVector *)(in_ECX + 0x14f),(FVector *)(in_ECX + 0x6f));
  if (iVar1 != 0) {
    (**(code **)(*in_ECX + 0x324))(1);
                    /* WARNING: Could not recover jumptable at 0x10340b03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_ECX + 800))();
    return;
  }
  return;
}


// ==== 10340b20 FUN_10340b20

void FUN_10340b20(void)

{
  AActor *in_ECX;
  
  (**(code **)(*(int *)in_ECX + 0x324))(1);
  AActor::Destroy(in_ECX);
  return;
}


// ==== 10340b40 FUN_10340b40

void FUN_10340b40(void)

{
  int *in_ECX;
  
  if ((char)in_ECX[0xd] == '\x05') {
    (**(code **)(*in_ECX + 0x32c))();
  }
  return;
}


// ==== 10340b60 FUN_10340b60

UClass * FUN_10340b60(void)

{
  return &AMarkProjector::PrivateStaticClass;
}


// ==== 10340b70 FUN_10340b70

void FUN_10340b70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AMarkProjector::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10340bb0 FUN_10340bb0

undefined4 FUN_10340bb0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10340bc0 FUN_10340bc0

UClass * FUN_10340bc0(void)

{
  return &AShadowProjector::PrivateStaticClass;
}


// ==== 10340bd0 FUN_10340bd0

void FUN_10340bd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AShadowProjector::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10340c10 FUN_10340c10

undefined4 FUN_10340c10(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10340c20 FUN_10340c20

UClass * FUN_10340c20(void)

{
  return &AMatDemoActor::PrivateStaticClass;
}


// ==== 10340c30 FUN_10340c30

void FUN_10340c30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&AMatDemoActor::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10340c70 FUN_10340c70

undefined4 FUN_10340c70(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10340c80 FUN_10340c80

void FUN_10340c80(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  return;
}


// ==== 10340cb0 FUN_10340cb0

void FUN_10340cb0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


// ==== 10340cd0 FUN_10340cd0

void FUN_10340cd0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  return;
}


// ==== 10340ce0 FUN_10340ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10340ce0(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_NotifyDie,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 10340d10 FUN_10340d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10340d10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  uVar3 = _ENGINE_AssociateAttackedNotify;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 10340dc0 FUN_10340dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10340dc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *in_ECX;
  uVar6 = 0;
  local_14 = param_1;
  local_c = param_3;
  puVar5 = &local_14;
  local_10 = param_2;
  local_8 = param_4;
  uVar4 = 0;
  local_4 = param_5;
  uVar3 = _ENGINE_AttackedNotify;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 10340e30 FUN_10340e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10340e30(undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  puVar5 = &param_1;
  iVar1 = *in_ECX;
  uVar4 = 0;
  uVar3 = _ENGINE_PlayLandingAnimation;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 10340e70 FUN_10340e70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10340e70(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_PlayFalling,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 10340ea0 FUN_10340ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10340ea0(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_PlayJump,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 10340ed0 FUN_10340ed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10340ed0(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_ChangeAnimation,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 10340f00 FUN_10340f00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10340f00(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_StopPlayFiring,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 10340f30 FUN_10340f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10340f30(void)

{
  int iVar1;
  UFunction *pUVar2;
  UObject *in_ECX;
  
  iVar1 = *(int *)in_ECX;
  pUVar2 = UObject::FindFunctionChecked(in_ECX,_ENGINE_BreathTimer,0,0,0);
  (**(code **)(iVar1 + 0x10))(pUVar2);
  return;
}


// ==== 10340f60 FUN_10340f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10340f60(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_10 [4];
  
  FName::FName(aFStack_10,0x14a);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff8;
    uVar4 = 0;
    uVar3 = _ENGINE_HeadVolumeChange;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 10340fd0 FUN_10340fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10340fd0(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  FName aFStack_10 [4];
  
  FName::FName(aFStack_10,0x157);
  iVar1 = UObject::IsProbing();
  if (iVar1 != 0) {
    iVar1 = *in_ECX;
    uVar6 = 0;
    puVar5 = &stack0xfffffff8;
    uVar4 = 0;
    uVar3 = _ENGINE_UpdateEyeHeight;
    pUVar2 = UObject::FindFunctionChecked();
    (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  }
  return;
}


// ==== 10341040 FUN_10341040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341040(undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  puVar5 = &param_1;
  iVar1 = *in_ECX;
  uVar4 = 0;
  uVar3 = _ENGINE_StartCrouch;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 10341080 FUN_10341080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341080(undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  puVar5 = &param_1;
  iVar1 = *in_ECX;
  uVar4 = 0;
  uVar3 = _ENGINE_EndCrouch;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 103410c0 FUN_103410c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103410c0(undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar1 = *in_ECX;
  uVar6 = 0;
  puVar5 = &param_1;
  uVar4 = 0;
  uVar3 = _ENGINE_SetWalking;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 10341100 FUN_10341100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10341100(undefined4 param_1)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  puVar5 = &param_1;
  iVar1 = *in_ECX;
  uVar4 = 0;
  uVar3 = _ENGINE_SetHeadScale;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,puVar5,uVar6);
  return;
}


// ==== 10341140 FUN_10341140

UClass * FUN_10341140(void)

{
  return &APawn::PrivateStaticClass;
}


// ==== 10341150 FUN_10341150

void FUN_10341150(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&APawn::PrivateStaticClass,param_2,param_3,param_4,0,*(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 10341190 FUN_10341190

undefined4 FUN_10341190(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103411a0 FUN_103411a0

undefined4 FUN_103411a0(void)

{
  return 1;
}


// ==== 103411b0 FUN_103411b0

void FUN_103411b0(void)

{
  return;
}


// ==== 103411c0 FUN_103411c0

void FUN_103411c0(uint param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (param_1 < 9) {
    *(undefined4 *)(in_ECX + 0x464 + param_1 * 4) = param_2;
  }
  return;
}


// ==== 103411e0 FUN_103411e0

void FUN_103411e0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x488) = param_1;
  return;
}


// ==== 103411f0 FUN_103411f0

void FUN_103411f0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x48c) = param_1;
  return;
}


// ==== 10341200 FUN_10341200

void FUN_10341200(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x490) = param_1;
  return;
}


// ==== 10341210 FUN_10341210

void FUN_10341210(uint param_1,undefined4 param_2)

{
  int in_ECX;
  
  if ((-1 < (int)param_1) && (param_1 < 3)) {
    *(undefined4 *)(in_ECX + 0x494 + param_1 * 4) = param_2;
  }
  return;
}


// ==== 10341240 FUN_10341240

void FUN_10341240(uint param_1,undefined4 param_2)

{
  int in_ECX;
  
  if ((-1 < (int)param_1) && (param_1 < 2)) {
    *(undefined4 *)(in_ECX + 0x4a0 + param_1 * 4) = param_2;
  }
  return;
}


// ==== 10341270 FUN_10341270

void FUN_10341270(void)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x73c) = *(uint *)(in_ECX + 0x73c) | 1;
  *(undefined4 *)(in_ECX + 0x740) = 0;
  return;
}


// ==== 10341290 FUN_10341290

uint FUN_10341290(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 0x73c) & 1;
}


// ==== 103412a0 FUN_103412a0

uint FUN_103412a0(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 0x748) & 1;
}


// ==== 103412b0 FUN_103412b0

float10 FUN_103412b0(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x744);
}


// ==== 103412c0 FUN_103412c0

void FUN_103412c0(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x434);
  return;
}


// ==== 103412e0 FUN_103412e0

void FUN_103412e0(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x438);
  return;
}


// ==== 10341300 FUN_10341300

void FUN_10341300(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x43c);
  return;
}


// ==== 10341320 FUN_10341320

void FUN_10341320(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x440);
  return;
}


// ==== 10341340 FUN_10341340

void FUN_10341340(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x44c);
  return;
}


// ==== 10341360 FUN_10341360

void FUN_10341360(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x444);
  return;
}


// ==== 10341380 FUN_10341380

void FUN_10341380(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x450);
  return;
}


// ==== 103413a0 FUN_103413a0

void FUN_103413a0(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x448);
  return;
}


// ==== 103413c0 FUN_103413c0

void FUN_103413c0(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x454);
  return;
}


// ==== 103413e0 FUN_103413e0

void FUN_103413e0(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x458);
  return;
}


// ==== 10341400 FUN_10341400

void FUN_10341400(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x454) = param_1;
  return;
}


// ==== 10341410 FUN_10341410

void FUN_10341410(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x458) = param_1;
  return;
}


// ==== 10341420 FUN_10341420

void FUN_10341420(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x434) = param_1;
  return;
}


// ==== 10341430 FUN_10341430

void FUN_10341430(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x438) = param_1;
  return;
}


// ==== 10341440 FUN_10341440

void FUN_10341440(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x43c) = param_1;
  return;
}


// ==== 10341450 FUN_10341450

void FUN_10341450(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x440) = param_1;
  return;
}


// ==== 10341460 FUN_10341460

void FUN_10341460(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x44c) = param_1;
  return;
}


// ==== 10341470 FUN_10341470

void FUN_10341470(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x444) = param_1;
  return;
}


// ==== 10341480 FUN_10341480

void FUN_10341480(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x450) = param_1;
  return;
}


// ==== 10341490 FUN_10341490

void FUN_10341490(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x448) = param_1;
  return;
}


// ==== 103414a0 FUN_103414a0

undefined4 FUN_103414a0(int param_1)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x3bc + param_1 * 4);
}


// ==== 103414c0 FUN_103414c0

undefined4 FUN_103414c0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x3e0);
}


// ==== 103414d0 FUN_103414d0

undefined4 FUN_103414d0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x3e4);
}


// ==== 103414e0 FUN_103414e0

undefined4 FUN_103414e0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 1000);
}


// ==== 103414f0 FUN_103414f0

undefined4 FUN_103414f0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x3ec);
}


// ==== 10341500 FUN_10341500

undefined4 FUN_10341500(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x3f0);
}


// ==== 10341510 FUN_10341510

undefined4 FUN_10341510(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x3f4);
}


// ==== 10341520 FUN_10341520

void FUN_10341520(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x3e0) = param_1;
  return;
}


// ==== 10341530 FUN_10341530

void FUN_10341530(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x3e4) = param_1;
  return;
}


// ==== 10341540 FUN_10341540

void FUN_10341540(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 1000) = param_1;
  return;
}


// ==== 10341550 FUN_10341550

void FUN_10341550(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x3ec) = param_1;
  return;
}


// ==== 10341560 FUN_10341560

void FUN_10341560(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x3f0) = param_1;
  return;
}


// ==== 10341570 FUN_10341570

void FUN_10341570(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x3f4) = param_1;
  return;
}


// ==== 10341580 FUN_10341580

undefined4 FUN_10341580(int param_1)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x3f8 + param_1 * 4);
}


// ==== 103415a0 FUN_103415a0

undefined4 FUN_103415a0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x41c);
}


// ==== 103415b0 FUN_103415b0

undefined4 FUN_103415b0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x420);
}


// ==== 103415c0 FUN_103415c0

undefined4 FUN_103415c0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x424);
}


// ==== 103415d0 FUN_103415d0

undefined4 FUN_103415d0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x428);
}


// ==== 103415e0 FUN_103415e0

undefined4 FUN_103415e0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x42c);
}


// ==== 103415f0 FUN_103415f0

undefined4 FUN_103415f0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x430);
}


// ==== 10341600 FUN_10341600

void FUN_10341600(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x78c + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 10341620 FUN_10341620

void FUN_10341620(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x7ac + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 10341640 FUN_10341640

void FUN_10341640(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x7cc + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 10341660 FUN_10341660

void FUN_10341660(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x7ec + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 10341680 FUN_10341680

void FUN_10341680(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x80c + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 103416a0 FUN_103416a0

void FUN_103416a0(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x82c + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 103416c0 FUN_103416c0

void FUN_103416c0(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x84c + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 103416e0 FUN_103416e0

void FUN_103416e0(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x86c + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 10341700 FUN_10341700

void FUN_10341700(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x88c + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 10341720 FUN_10341720

void FUN_10341720(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x8ac + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 10341740 FUN_10341740

void FUN_10341740(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x8cc + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 10341760 FUN_10341760

void FUN_10341760(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x8ec + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 10341780 FUN_10341780

void FUN_10341780(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x90c + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 103417a0 FUN_103417a0

void FUN_103417a0(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x92c + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 103417c0 FUN_103417c0

void FUN_103417c0(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x94c + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 103417e0 FUN_103417e0

void FUN_103417e0(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x96c + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 10341800 FUN_10341800

void FUN_10341800(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x98c + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 10341820 FUN_10341820

void FUN_10341820(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x9ac + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 10341840 FUN_10341840

void FUN_10341840(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x9cc + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 10341860 FUN_10341860

void FUN_10341860(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x9ec + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 10341880 FUN_10341880

void FUN_10341880(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0xa0c + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 103418a0 FUN_103418a0

void FUN_103418a0(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0xa2c + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 103418c0 FUN_103418c0

void FUN_103418c0(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0xa4c + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 103418e0 FUN_103418e0

void FUN_103418e0(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0xa6c + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 10341900 FUN_10341900

void FUN_10341900(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0xa8c + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 10341920 FUN_10341920

void FUN_10341920(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0xaac + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


// ==== 10341940 FUN_10341940

void FUN_10341940(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0xacc + (uint)*(byte *)(in_ECX + 0x71d) * 4);
  return;
}


