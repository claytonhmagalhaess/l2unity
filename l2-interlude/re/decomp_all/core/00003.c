// ==== 1010bd30 FUN_1010bd30

void FUN_1010bd30(void)

{
  byte bVar1;
  int in_ECX;
  
  bVar1 = **(byte **)(in_ECX + 0xc);
  *(byte **)(in_ECX + 0xc) = *(byte **)(in_ECX + 0xc) + 1;
  (*(code *)(&GNatives)[bVar1])();
  return;
}


// ==== 1010bd60 FUN_1010bd60

undefined4 FUN_1010bd60(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = **(undefined4 **)(in_ECX + 0xc);
  *(undefined4 **)(in_ECX + 0xc) = *(undefined4 **)(in_ECX + 0xc) + 1;
  return uVar1;
}


// ==== 1010bd70 FUN_1010bd70

undefined4 FUN_1010bd70(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = **(undefined4 **)(in_ECX + 0xc);
  *(undefined4 **)(in_ECX + 0xc) = *(undefined4 **)(in_ECX + 0xc) + 1;
  return uVar1;
}


// ==== 1010bd80 FUN_1010bd80

float10 FUN_1010bd80(void)

{
  float fVar1;
  int in_ECX;
  
  fVar1 = **(float **)(in_ECX + 0xc);
  *(float **)(in_ECX + 0xc) = *(float **)(in_ECX + 0xc) + 1;
  return (float10)fVar1;
}


// ==== 1010bda0 FUN_1010bda0

undefined2 FUN_1010bda0(void)

{
  undefined2 uVar1;
  int in_ECX;
  
  uVar1 = **(undefined2 **)(in_ECX + 0xc);
  *(undefined2 **)(in_ECX + 0xc) = *(undefined2 **)(in_ECX + 0xc) + 1;
  return uVar1;
}


// ==== 1010bdb0 FUN_1010bdb0

void FUN_1010bdb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xc);
  *param_1 = *puVar1;
  *(undefined4 **)(in_ECX + 0xc) = puVar1 + 1;
  return;
}


// ==== 1010bdd0 FUN_1010bdd0

void FUN_1010bdd0(int param_1)

{
  undefined4 *in_ECX;
  undefined4 uVar1;
  
  *in_ECX = FFrame::vftable;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  in_ECX[2] = param_1;
  in_ECX[1] = uVar1;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *in_ECX = FStateFrame::vftable;
  in_ECX[6] = 0;
  in_ECX[7] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[8] = 0xffffffff;
  in_ECX[9] = 0xffffffff;
  return;
}


// ==== 1010be30 FUN_1010be30

wchar_t * FUN_1010be30(void)

{
  wchar_t *pwVar1;
  int in_ECX;
  
  if (*(UObject **)(in_ECX + 4) != (UObject *)0x0) {
    pwVar1 = (wchar_t *)UObject::GetFullName(*(UObject **)(in_ECX + 4),(ushort *)0x0);
    return pwVar1;
  }
  return L"None";
}


// ==== 1010be50 FUN_1010be50

UClass * FUN_1010be50(void)

{
  return &UFactory::PrivateStaticClass;
}


// ==== 1010be60 FUN_1010be60

void FUN_1010be60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject(&UFactory::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010bea0 FUN_1010bea0

undefined4 FUN_1010bea0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010beb0 FUN_1010beb0

undefined4 FUN_1010beb0(void)

{
  return 0;
}


// ==== 1010bec0 FUN_1010bec0

undefined4 FUN_1010bec0(void)

{
  return 0;
}


// ==== 1010bed0 FUN_1010bed0

undefined4 FUN_1010bed0(void)

{
  return 0;
}


// ==== 1010bee0 FUN_1010bee0

UClass * FUN_1010bee0(void)

{
  return &UExporter::PrivateStaticClass;
}


// ==== 1010bef0 FUN_1010bef0

void FUN_1010bef0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject(&UExporter::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0)
  ;
  return;
}


// ==== 1010bf30 FUN_1010bf30

undefined4 FUN_1010bf30(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010bf40 FUN_1010bf40

undefined4 FUN_1010bf40(void)

{
  return 0;
}


// ==== 1010bf50 FUN_1010bf50

undefined4 FUN_1010bf50(void)

{
  return 0;
}


// ==== 1010bf60 FUN_1010bf60

UClass * FUN_1010bf60(void)

{
  return &UObjectExporterT3D::PrivateStaticClass;
}


// ==== 1010bf70 FUN_1010bf70

void FUN_1010bf70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UObjectExporterT3D::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 1010bfb0 FUN_1010bfb0

undefined4 FUN_1010bfb0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 1010bfc0 FUN_1010bfc0

void FUN_1010bfc0(void)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -0x1000000;
  return;
}


// ==== 1010bfd0 FUN_1010bfd0

undefined8 FUN_1010bfd0(void)

{
  undefined8 *in_ECX;
  
  return *in_ECX;
}


// ==== 1010bfe0 FUN_1010bfe0

undefined4 FUN_1010bfe0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 8);
}


// ==== 1010bff0 FUN_1010bff0

int FUN_1010bff0(void)

{
  int in_ECX;
  
  return *(int *)(*(int *)(in_ECX + 0x14) + 8) - *(int *)(in_ECX + 8);
}


// ==== 1010c000 FUN_1010c000

undefined1 FUN_1010c000(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 0xf);
}


// ==== 1010c010 FUN_1010c010

void FUN_1010c010(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0xf) = param_1;
  return;
}


// ==== 1010c020 FUN_1010c020

undefined4 FUN_1010c020(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x10);
}


// ==== 1010c030 FUN_1010c030

undefined2 FUN_1010c030(void)

{
  int in_ECX;
  
  return *(undefined2 *)(in_ECX + 0xc);
}


// ==== 1010c040 FUN_1010c040

void FUN_1010c040(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  return;
}


// ==== 1010c050 FUN_1010c050

undefined4 FUN_1010c050(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}


// ==== 1010c060 FUN_1010c060

undefined4 FUN_1010c060(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x18);
}


// ==== 1010c070 FUN_1010c070

undefined4 FUN_1010c070(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x1c);
}


// ==== 1010c080 FUN_1010c080

undefined4 FUN_1010c080(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ==== 1010c090 FUN_1010c090

uint FUN_1010c090(uint param_1)

{
  return ((param_1 >> 0xc ^ param_1) >> 0xc ^ param_1) & 0x3fff;
}


// ==== 1010c0b0 FUN_1010c0b0

void FUN_1010c0b0(uint param_1,int param_2)

{
  FOutputDevice *pFVar1;
  int iVar2;
  uint uVar3;
  FOutputDevice *in_ECX;
  
  uVar3 = ((param_1 >> 0xc ^ param_1) >> 0xc ^ param_1) & 0x3fff;
  iVar2 = *(int *)(in_ECX + uVar3 * 4 + 0x24);
  pFVar1 = in_ECX + uVar3 * 4 + 0x24;
  while( true ) {
    if (iVar2 == 0) {
      FOutputDevice::Logf(in_ECX,(ushort *)GError);
      return;
    }
    in_ECX = *(FOutputDevice **)pFVar1;
    if ((*(uint *)in_ECX == param_1) && (*(int *)(in_ECX + 4) == param_2)) break;
    iVar2 = *(int *)(in_ECX + 0x1c);
    pFVar1 = in_ECX + 0x1c;
  }
  *(int *)pFVar1 = *(int *)(in_ECX + 0x1c);
  return;
}


// ==== 1010c130 FUN_1010c130

void FUN_1010c130(void)

{
  return;
}


// ==== 1010c140 FUN_1010c140

void FUN_1010c140(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 1010c160 FUN_1010c160

void FUN_1010c160(void *param_1)

{
  void *in_ECX;
  
  _memcpy(in_ECX,param_1,0x10058);
  return;
}


// ==== 1010c190 FUN_1010c190

void FUN_1010c190(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  return;
}


// ==== 1010c1b0 FUN_1010c1b0

void FUN_1010c1b0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  return;
}


// ==== 1010c1e0 FUN_1010c1e0

void FUN_1010c1e0(void)

{
  void *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b6983;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  _eh_vector_destructor_iterator_(in_ECX,0x10,8,FMemStackFrame::~FMemStackFrame);
  ExceptionList = local_c;
  return;
}


// ==== 1010c230 FUN_1010c230

void FUN_1010c230(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 1010c290 FUN_1010c290

void FUN_1010c290(void)

{
  return;
}


// ==== 1010c2a0 FUN_1010c2a0

void FUN_1010c2a0(FMemStack *param_1)

{
  FMemStackFrame *pFVar1;
  undefined4 *in_ECX;
  
  pFVar1 = FMemStack::GetThreadSafeMemStack(param_1);
  in_ECX[1] = pFVar1;
  *in_ECX = *(undefined4 *)pFVar1;
  in_ECX[2] = *(undefined4 *)(pFVar1 + 0xc);
  return;
}


// ==== 1010c2d0 FUN_1010c2d0

void FUN_1010c2d0(void)

{
  undefined4 *in_ECX;
  
  if ((FTaggedMemory *)in_ECX[2] != *(FTaggedMemory **)((FMemStackFrame *)in_ECX[1] + 0xc)) {
    FMemStackFrame::FreeChunks((FMemStackFrame *)in_ECX[1],(FTaggedMemory *)in_ECX[2]);
  }
  *(undefined4 *)in_ECX[1] = *in_ECX;
  return;
}


// ==== 1010c300 FUN_1010c300

void FUN_1010c300(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  return;
}


// ==== 1010c320 FUN_1010c320

void FUN_1010c320(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  return;
}


// ==== 1010c330 FUN_1010c330

void FUN_1010c330(int param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *(undefined4 *)(param_1 + 0x2c);
  in_ECX[1] = *(undefined4 *)(param_1 + 0x44);
  return;
}


// ==== 1010c350 FUN_1010c350

undefined4 FUN_1010c350(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}


// ==== 1010c360 FUN_1010c360

void FUN_1010c360(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


// ==== 1010c380 FUN_1010c380

void FUN_1010c380(void)

{
  FBitReader *in_ECX;
  
  FBitReader::FBitReader(in_ECX,(uchar *)0x0,0);
  return;
}


// ==== 1010c390 FUN_1010c390

float10 FUN_1010c390(float param_1,float param_2)

{
  int iVar1;
  
  if (param_2 == 0.0) {
    return (float10)param_1;
  }
  iVar1 = appFloor((param_2 * 0.5 + param_1) / param_2);
  return (float10)((float)iVar1 * param_2);
}


// ==== 1010c400 FUN_1010c400

float10 FUN_1010c400(float param_1)

{
  if (param_1 < -0.65) {
    return (float10)(param_1 + 0.15);
  }
  if (0.65 < param_1) {
    return (float10)(param_1 - 0.15);
  }
  if (param_1 < -0.55) {
    return (float10)-0.5;
  }
  if (0.55 < param_1) {
    return (float10)0.5;
  }
  if (param_1 < -0.05) {
    return (float10)(param_1 + 0.05);
  }
  if (0.05 < param_1) {
    return (float10)(param_1 - 0.05);
  }
  return (float10)0;
}


// ==== 1010c560 FUN_1010c560

void FUN_1010c560(void)

{
  return;
}


// ==== 1010c570 FUN_1010c570

void FUN_1010c570(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  return;
}


// ==== 1010c590 FUN_1010c590

void FUN_1010c590(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = param_2[2] * in_ECX[1] - param_2[1] * in_ECX[2];
  param_1[1] = in_ECX[2] * *param_2 - *in_ECX * param_2[2];
  param_1[2] = param_2[1] * *in_ECX - *param_2 * in_ECX[1];
  return;
}


// ==== 1010c5e0 FUN_1010c5e0

float10 FUN_1010c5e0(float *param_1)

{
  float *in_ECX;
  
  return (float10)(param_1[2] * in_ECX[2] + *param_1 * *in_ECX + param_1[1] * in_ECX[1]);
}


// ==== 1010c640 FUN_1010c640

void FUN_1010c640(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = *param_2 + *in_ECX;
  param_1[1] = param_2[1] + in_ECX[1];
  param_1[2] = param_2[2] + in_ECX[2];
  return;
}


// ==== 1010c670 FUN_1010c670

void FUN_1010c670(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = *in_ECX - *param_2;
  param_1[1] = in_ECX[1] - param_2[1];
  param_1[2] = in_ECX[2] - param_2[2];
  return;
}


// ==== 1010c6a0 FUN_1010c6a0

void FUN_1010c6a0(float *param_1,float param_2)

{
  float *in_ECX;
  
  *param_1 = param_2 * *in_ECX;
  param_1[1] = in_ECX[1] * param_2;
  param_1[2] = param_2 * in_ECX[2];
  return;
}


// ==== 1010c6d0 FUN_1010c6d0

void FUN_1010c6d0(float *param_1,float param_2)

{
  float *in_ECX;
  
  param_2 = 1.0 / param_2;
  *param_1 = param_2 * *in_ECX;
  param_1[1] = in_ECX[1] * param_2;
  param_1[2] = param_2 * in_ECX[2];
  return;
}


// ==== 1010c710 FUN_1010c710

void FUN_1010c710(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = *param_2 * *in_ECX;
  param_1[1] = param_2[1] * in_ECX[1];
  param_1[2] = param_2[2] * in_ECX[2];
  return;
}


// ==== 1010c740 FUN_1010c740

undefined4 FUN_1010c740(float *param_1)

{
  float *in_ECX;
  
  if (((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) && (param_1[2] == in_ECX[2])) {
    return 1;
  }
  return 0;
}


// ==== 1010c790 FUN_1010c790

undefined4 FUN_1010c790(float *param_1)

{
  float *in_ECX;
  
  if (((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) && (param_1[2] == in_ECX[2])) {
    return 0;
  }
  return 1;
}


// ==== 1010c7e0 FUN_1010c7e0

void FUN_1010c7e0(float *param_1)

{
  float *in_ECX;
  
  *param_1 = -*in_ECX;
  param_1[1] = -in_ECX[1];
  param_1[2] = -in_ECX[2];
  return;
}


// ==== 1010c810 FUN_1010c810

void FUN_1010c810(float *param_1,float *param_2)

{
  float fVar1;
  float *in_ECX;
  
  *in_ECX = *param_2 + *in_ECX;
  in_ECX[1] = param_2[1] + in_ECX[1];
  in_ECX[2] = param_2[2] + in_ECX[2];
  *param_1 = *in_ECX;
  fVar1 = in_ECX[2];
  param_1[1] = in_ECX[1];
  param_1[2] = fVar1;
  return;
}


// ==== 1010c850 FUN_1010c850

void FUN_1010c850(float *param_1,float *param_2)

{
  float fVar1;
  float *in_ECX;
  
  *in_ECX = *in_ECX - *param_2;
  in_ECX[1] = in_ECX[1] - param_2[1];
  in_ECX[2] = in_ECX[2] - param_2[2];
  *param_1 = *in_ECX;
  fVar1 = in_ECX[2];
  param_1[1] = in_ECX[1];
  param_1[2] = fVar1;
  return;
}


// ==== 1010c890 FUN_1010c890

void FUN_1010c890(float *param_1,float param_2)

{
  float fVar1;
  float *in_ECX;
  
  *in_ECX = param_2 * *in_ECX;
  in_ECX[1] = in_ECX[1] * param_2;
  in_ECX[2] = param_2 * in_ECX[2];
  *param_1 = *in_ECX;
  fVar1 = in_ECX[2];
  param_1[1] = in_ECX[1];
  param_1[2] = fVar1;
  return;
}


// ==== 1010c8d0 FUN_1010c8d0

void FUN_1010c8d0(float *param_1,float param_2)

{
  float fVar1;
  float *in_ECX;
  
  param_2 = 1.0 / param_2;
  *in_ECX = param_2 * *in_ECX;
  in_ECX[1] = in_ECX[1] * param_2;
  in_ECX[2] = param_2 * in_ECX[2];
  *param_1 = *in_ECX;
  fVar1 = in_ECX[2];
  param_1[1] = in_ECX[1];
  param_1[2] = fVar1;
  return;
}


// ==== 1010c920 FUN_1010c920

void FUN_1010c920(float *param_1,float *param_2)

{
  float fVar1;
  float *in_ECX;
  
  *in_ECX = *param_2 * *in_ECX;
  in_ECX[1] = param_2[1] * in_ECX[1];
  in_ECX[2] = param_2[2] * in_ECX[2];
  *param_1 = *in_ECX;
  fVar1 = in_ECX[2];
  param_1[1] = in_ECX[1];
  param_1[2] = fVar1;
  return;
}


// ==== 1010c960 FUN_1010c960

void FUN_1010c960(float *param_1,float *param_2)

{
  float fVar1;
  float *in_ECX;
  
  *in_ECX = *in_ECX / *param_2;
  in_ECX[1] = in_ECX[1] / param_2[1];
  in_ECX[2] = in_ECX[2] / param_2[2];
  *param_1 = *in_ECX;
  fVar1 = in_ECX[2];
  param_1[1] = in_ECX[1];
  param_1[2] = fVar1;
  return;
}


// ==== 1010c9a0 FUN_1010c9a0

int FUN_1010c9a0(uint param_1)

{
  int iVar1;
  int in_ECX;
  
  if (0x7fffffff < param_1) {
    appFailAssert("i>-1","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnMath.h",0x2f1);
  }
  if (2 < (int)param_1) {
    appFailAssert("i<3","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnMath.h",0x2f2);
  }
  if (param_1 == 0) {
    return in_ECX;
  }
  iVar1 = in_ECX + 4;
  if (param_1 != 1) {
    iVar1 = in_ECX + 8;
  }
  return iVar1;
}


// ==== 1010ca20 FUN_1010ca20

float10 FUN_1010ca20(void)

{
  float *in_ECX;
  double dVar1;
  
  dVar1 = appSqrt((double)(in_ECX[2] * in_ECX[2] + *in_ECX * *in_ECX + in_ECX[1] * in_ECX[1]));
  return (float10)(float)dVar1;
}


// ==== 1010ca60 FUN_1010ca60

float10 FUN_1010ca60(void)

{
  float *in_ECX;
  
  return (float10)(in_ECX[2] * in_ECX[2] + *in_ECX * *in_ECX + in_ECX[1] * in_ECX[1]);
}


// ==== 1010ca90 FUN_1010ca90

float10 FUN_1010ca90(void)

{
  float *in_ECX;
  double dVar1;
  
  dVar1 = appSqrt((double)(*in_ECX * *in_ECX + in_ECX[1] * in_ECX[1]));
  return (float10)(float)dVar1;
}


// ==== 1010cac0 FUN_1010cac0

float10 FUN_1010cac0(void)

{
  float *in_ECX;
  
  return (float10)(*in_ECX * *in_ECX + in_ECX[1] * in_ECX[1]);
}


// ==== 1010cae0 FUN_1010cae0

undefined4 FUN_1010cae0(void)

{
  float *in_ECX;
  
  if (((*in_ECX == 0.0) && (in_ECX[1] == 0.0)) && (in_ECX[2] == 0.0)) {
    return 1;
  }
  return 0;
}


// ==== 1010cb20 FUN_1010cb20

undefined4 FUN_1010cb20(void)

{
  float fVar1;
  float *in_ECX;
  double dVar2;
  
  fVar1 = in_ECX[2] * in_ECX[2] + *in_ECX * *in_ECX + in_ECX[1] * in_ECX[1];
  if (1e-08 <= fVar1) {
    dVar2 = appSqrt((double)fVar1);
    fVar1 = 1.0 / (float)dVar2;
    *in_ECX = fVar1 * *in_ECX;
    in_ECX[1] = fVar1 * in_ECX[1];
    in_ECX[2] = fVar1 * in_ECX[2];
    return 1;
  }
  return 0;
}


// ==== 1010cbb0 FUN_1010cbb0

void FUN_1010cbb0(float *param_1)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  double dVar3;
  
  fVar1 = in_ECX[2] * in_ECX[2] + *in_ECX * *in_ECX + in_ECX[1] * in_ECX[1];
  if (1e-08 <= fVar1) {
    dVar3 = appSqrt((double)fVar1);
    fVar1 = 1.0 / (float)dVar3;
    *in_ECX = fVar1 * *in_ECX;
    in_ECX[1] = fVar1 * in_ECX[1];
    in_ECX[2] = fVar1 * in_ECX[2];
    fVar1 = in_ECX[1];
    *param_1 = *in_ECX;
    fVar2 = in_ECX[2];
    param_1[1] = fVar1;
    param_1[2] = fVar2;
    return;
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return;
}


// ==== 1010cc70 FUN_1010cc70

void FUN_1010cc70(float *param_1)

{
  float fVar1;
  float *in_ECX;
  
  fVar1 = in_ECX[2];
  *param_1 = (1.0 / fVar1) * *in_ECX;
  param_1[1] = (1.0 / fVar1) * in_ECX[1];
  param_1[2] = 1.0;
  return;
}


// ==== 1010ccb0 FUN_1010ccb0

void FUN_1010ccb0(float *param_1)

{
  float fVar1;
  float *in_ECX;
  double dVar2;
  
  dVar2 = appSqrt((double)(in_ECX[2] * in_ECX[2] + *in_ECX * *in_ECX + in_ECX[1] * in_ECX[1]));
  fVar1 = 1.0 / (float)dVar2;
  *param_1 = fVar1 * *in_ECX;
  param_1[1] = fVar1 * in_ECX[1];
  param_1[2] = fVar1 * in_ECX[2];
  return;
}


// ==== 1010cd20 FUN_1010cd20

void FUN_1010cd20(float *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)thunk_FUN_1010c390(*in_ECX,*param_2);
  fVar2 = (float10)thunk_FUN_1010c390(in_ECX[1],param_2[1]);
  fVar3 = (float10)thunk_FUN_1010c390(in_ECX[2],param_2[2]);
  *param_1 = (float)fVar1;
  param_1[1] = (float)fVar2;
  param_1[2] = (float)fVar3;
  return;
}


// ==== 1010cdb0 FUN_1010cdb0

int FUN_1010cdb0(int param_1)

{
  int in_ECX;
  
  return in_ECX + param_1 * 4;
}


// ==== 1010cdc0 FUN_1010cdc0

undefined4 FUN_1010cdc0(void)

{
  float fVar1;
  float *in_ECX;
  
  if (*in_ECX <= 0.0) {
    if (*in_ECX < 0.0) {
      return 0;
    }
    if (in_ECX[1] <= 0.0) {
      if (in_ECX[1] < 0.0) {
        return 0;
      }
      fVar1 = in_ECX[2];
      if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
        return 0;
      }
    }
  }
  return 1;
}


// ==== 1010ce20 FUN_1010ce20

void FUN_1010ce20(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  return;
}


// ==== 1010ce40 FUN_1010ce40

void FUN_1010ce40(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  return;
}


// ==== 1010ce50 FUN_1010ce50

void FUN_1010ce50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  return;
}


// ==== 1010ce70 FUN_1010ce70

undefined4 FUN_1010ce70(int *param_1)

{
  int *in_ECX;
  
  if (((*in_ECX == *param_1) && (in_ECX[1] == param_1[1])) && (in_ECX[2] == param_1[2])) {
    return 1;
  }
  return 0;
}


// ==== 1010cea0 FUN_1010cea0

undefined4 FUN_1010cea0(int *param_1)

{
  int *in_ECX;
  
  if (((*in_ECX == *param_1) && (in_ECX[1] == param_1[1])) && (in_ECX[2] == param_1[2])) {
    return 0;
  }
  return 1;
}


// ==== 1010ced0 FUN_1010ced0

void FUN_1010ced0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  return;
}


// ==== 1010cef0 FUN_1010cef0

void FUN_1010cef0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  return;
}


// ==== 1010cf10 FUN_1010cf10

void FUN_1010cf10(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  return;
}


// ==== 1010cf30 FUN_1010cf30

undefined4 FUN_1010cf30(int *param_1)

{
  int *in_ECX;
  
  if ((*in_ECX == *param_1) && (in_ECX[1] == param_1[1])) {
    return 1;
  }
  return 0;
}


// ==== 1010cf60 FUN_1010cf60

undefined4 FUN_1010cf60(int *param_1)

{
  int *in_ECX;
  
  if ((*in_ECX == *param_1) && (in_ECX[1] == param_1[1])) {
    return 0;
  }
  return 1;
}


// ==== 1010cf90 FUN_1010cf90

void FUN_1010cf90(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


// ==== 1010cfb0 FUN_1010cfb0

void FUN_1010cfb0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  return;
}


// ==== 1010cfd0 FUN_1010cfd0

void FUN_1010cfd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  return;
}


// ==== 1010cff0 FUN_1010cff0

undefined4 FUN_1010cff0(int *param_1)

{
  int *in_ECX;
  
  if ((*in_ECX == *param_1) && (in_ECX[1] == param_1[1])) {
    return 1;
  }
  return 0;
}


// ==== 1010d020 FUN_1010d020

undefined4 FUN_1010d020(int *param_1)

{
  int *in_ECX;
  
  if ((*in_ECX == *param_1) && (in_ECX[1] == param_1[1])) {
    return 0;
  }
  return 1;
}


// ==== 1010d050 FUN_1010d050

void FUN_1010d050(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


// ==== 1010d070 FUN_1010d070

void FUN_1010d070(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  return;
}


// ==== 1010d090 FUN_1010d090

void FUN_1010d090(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  return;
}


// ==== 1010d0b0 FUN_1010d0b0

undefined4 FUN_1010d0b0(int *param_1)

{
  int *in_ECX;
  
  if ((*in_ECX == *param_1) && (in_ECX[1] == param_1[1])) {
    return 1;
  }
  return 0;
}


// ==== 1010d0e0 FUN_1010d0e0

undefined4 FUN_1010d0e0(int *param_1)

{
  int *in_ECX;
  
  if ((*in_ECX == *param_1) && (in_ECX[1] == param_1[1])) {
    return 0;
  }
  return 1;
}


// ==== 1010d110 FUN_1010d110

void FUN_1010d110(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


// ==== 1010d130 FUN_1010d130

void FUN_1010d130(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  return;
}


// ==== 1010d150 FUN_1010d150

void FUN_1010d150(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  return;
}


// ==== 1010d170 FUN_1010d170

undefined4 FUN_1010d170(int *param_1)

{
  int *in_ECX;
  
  if ((*in_ECX == *param_1) && (in_ECX[1] == param_1[1])) {
    return 1;
  }
  return 0;
}


// ==== 1010d1a0 FUN_1010d1a0

undefined4 FUN_1010d1a0(int *param_1)

{
  int *in_ECX;
  
  if ((*in_ECX == *param_1) && (in_ECX[1] == param_1[1])) {
    return 0;
  }
  return 1;
}


// ==== 1010d1d0 FUN_1010d1d0

void FUN_1010d1d0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


// ==== 1010d1f0 FUN_1010d1f0

void FUN_1010d1f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  return;
}


// ==== 1010d210 FUN_1010d210

void FUN_1010d210(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  return;
}


// ==== 1010d230 FUN_1010d230

undefined4 FUN_1010d230(int *param_1)

{
  int *in_ECX;
  
  if ((*in_ECX == *param_1) && (in_ECX[1] == param_1[1])) {
    return 1;
  }
  return 0;
}


// ==== 1010d260 FUN_1010d260

undefined4 FUN_1010d260(int *param_1)

{
  int *in_ECX;
  
  if ((*in_ECX == *param_1) && (in_ECX[1] == param_1[1])) {
    return 0;
  }
  return 1;
}


// ==== 1010d290 FUN_1010d290

void FUN_1010d290(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


// ==== 1010d2b0 FUN_1010d2b0

void FUN_1010d2b0(void)

{
  return;
}


// ==== 1010d2c0 FUN_1010d2c0

void FUN_1010d2c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[3] = param_4;
  in_ECX[2] = param_3;
  in_ECX[4] = param_5;
  in_ECX[5] = param_6;
  return;
}


// ==== 1010d300 FUN_1010d300

undefined4 FUN_1010d300(float *param_1)

{
  float *in_ECX;
  
  if (((((*in_ECX != *param_1) || (in_ECX[1] != param_1[1])) || (in_ECX[2] != param_1[2])) ||
      (((in_ECX[3] != param_1[3] || (in_ECX[4] != param_1[4])) || (in_ECX[5] != param_1[5])))) &&
     (((in_ECX[3] != *param_1 || (in_ECX[4] != param_1[1])) ||
      ((in_ECX[5] != param_1[2] ||
       (((*in_ECX != param_1[3] || (in_ECX[1] != param_1[4])) || (in_ECX[2] != param_1[5])))))))) {
    return 0;
  }
  return 1;
}


// ==== 1010d400 FUN_1010d400

void FUN_1010d400(undefined4 *param_1)

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


// ==== 1010d440 FUN_1010d440

void FUN_1010d440(void)

{
  return;
}


// ==== 1010d450 FUN_1010d450

void FUN_1010d450(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  return;
}


// ==== 1010d480 FUN_1010d480

void FUN_1010d480(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  uVar1 = param_1[2];
  in_ECX[3] = 0;
  in_ECX[2] = uVar1;
  return;
}


// ==== 1010d4b0 FUN_1010d4b0

void FUN_1010d4b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  return;
}


// ==== 1010d4e0 FUN_1010d4e0

void FUN_1010d4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = param_4;
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  return;
}


// ==== 1010d510 FUN_1010d510

void FUN_1010d510(float param_1,float param_2,float param_3,float *param_4)

{
  float *in_ECX;
  
  *in_ECX = *param_4;
  in_ECX[1] = param_4[1];
  in_ECX[2] = param_4[2];
  in_ECX[3] = param_4[2] * param_3 + *param_4 * param_1 + param_4[1] * param_2;
  return;
}


// ==== 1010d560 FUN_1010d560

void FUN_1010d560(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int in_ECX;
  float unaff_ESI;
  float unaff_retaddr;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = param_7 - param_1;
  fVar3 = param_8 - param_2;
  param_7 = param_9 - param_3;
  fVar2 = param_4 - param_1;
  param_4 = param_6 - param_3;
  local_c = param_7 * (param_5 - param_2) - fVar3 * param_4;
  local_8 = fVar1 * param_4 - fVar2 * param_7;
  local_4 = fVar2 * fVar3 - fVar1 * (param_5 - param_2);
  FVector::SafeNormal((FVector *)&local_c);
  param_8 = param_3;
  param_4 = unaff_ESI * param_3 - fVar3 * param_6;
  param_5 = fVar3 * fVar1 - unaff_ESI * fVar2;
  param_3 = param_6 * fVar2 - fVar1 * param_3;
  param_6 = fVar3;
  param_7 = fVar2;
  pfVar4 = (float *)FVector::SafeNormal((FVector *)&param_3);
  *(float *)(in_ECX + 0xc) = pfVar4[2] * param_1 + *pfVar4 * local_4 + pfVar4[1] * unaff_retaddr;
  return;
}


// ==== 1010d750 FUN_1010d750

float10 FUN_1010d750(float *param_1)

{
  float *in_ECX;
  
  return (float10)((param_1[2] * in_ECX[2] + *param_1 * *in_ECX + param_1[1] * in_ECX[1]) -
                  in_ECX[3]);
}


// ==== 1010d780 FUN_1010d780

void FUN_1010d780(float *param_1)

{
  float *in_ECX;
  
  *param_1 = -*in_ECX;
  param_1[1] = -in_ECX[1];
  param_1[2] = -in_ECX[2];
  param_1[3] = -in_ECX[3];
  return;
}


// ==== 1010d7b0 FUN_1010d7b0

undefined4 FUN_1010d7b0(float *param_1)

{
  float *in_ECX;
  
  if ((((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) && (param_1[2] == in_ECX[2])) &&
     (param_1[3] == in_ECX[3])) {
    return 1;
  }
  return 0;
}


// ==== 1010d810 FUN_1010d810

undefined4 FUN_1010d810(float *param_1)

{
  float *in_ECX;
  
  if ((((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) && (param_1[2] == in_ECX[2])) &&
     (param_1[3] == in_ECX[3])) {
    return 0;
  }
  return 1;
}


// ==== 1010d870 FUN_1010d870

void FUN_1010d870(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = *param_2 + *in_ECX;
  param_1[1] = param_2[1] + in_ECX[1];
  param_1[2] = param_2[2] + in_ECX[2];
  param_1[3] = param_2[3] + in_ECX[3];
  return;
}


// ==== 1010d8b0 FUN_1010d8b0

void FUN_1010d8b0(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = *in_ECX - *param_2;
  param_1[1] = in_ECX[1] - param_2[1];
  param_1[2] = in_ECX[2] - param_2[2];
  param_1[3] = in_ECX[3] - param_2[3];
  return;
}


// ==== 1010d8f0 FUN_1010d8f0

void FUN_1010d8f0(float *param_1,float param_2)

{
  float *in_ECX;
  
  param_2 = 1.0 / param_2;
  *param_1 = param_2 * *in_ECX;
  param_1[1] = in_ECX[1] * param_2;
  param_1[2] = in_ECX[2] * param_2;
  param_1[3] = param_2 * in_ECX[3];
  return;
}


// ==== 1010d940 FUN_1010d940

void FUN_1010d940(float *param_1,float param_2)

{
  float *in_ECX;
  
  *param_1 = param_2 * *in_ECX;
  param_1[1] = in_ECX[1] * param_2;
  param_1[2] = in_ECX[2] * param_2;
  param_1[3] = param_2 * in_ECX[3];
  return;
}


// ==== 1010d980 FUN_1010d980

void FUN_1010d980(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = *param_2 * *in_ECX;
  param_1[1] = param_2[1] * in_ECX[1];
  param_1[2] = param_2[2] * in_ECX[2];
  param_1[3] = param_2[3] * in_ECX[3];
  return;
}


// ==== 1010d9c0 FUN_1010d9c0

void FUN_1010d9c0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  
  *in_ECX = *param_2 + *in_ECX;
  in_ECX[1] = param_2[1] + in_ECX[1];
  in_ECX[2] = param_2[2] + in_ECX[2];
  fVar1 = param_2[3];
  fVar2 = in_ECX[3];
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  in_ECX[3] = fVar1 + fVar2;
  fVar3 = in_ECX[2];
  param_1[3] = fVar1 + fVar2;
  param_1[2] = fVar3;
  return;
}


// ==== 1010da20 FUN_1010da20

void FUN_1010da20(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  
  *in_ECX = *in_ECX - *param_2;
  in_ECX[1] = in_ECX[1] - param_2[1];
  in_ECX[2] = in_ECX[2] - param_2[2];
  fVar1 = in_ECX[3];
  fVar2 = param_2[3];
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  in_ECX[3] = fVar1 - fVar2;
  fVar3 = in_ECX[2];
  param_1[3] = fVar1 - fVar2;
  param_1[2] = fVar3;
  return;
}


// ==== 1010da80 FUN_1010da80

void FUN_1010da80(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  
  *in_ECX = param_2 * *in_ECX;
  in_ECX[1] = in_ECX[1] * param_2;
  in_ECX[2] = param_2 * in_ECX[2];
  *param_1 = *in_ECX;
  fVar1 = in_ECX[3];
  param_1[1] = in_ECX[1];
  in_ECX[3] = param_2 * fVar1;
  fVar2 = in_ECX[2];
  param_1[3] = param_2 * fVar1;
  param_1[2] = fVar2;
  return;
}


// ==== 1010dae0 FUN_1010dae0

void FUN_1010dae0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  
  *in_ECX = *param_2 * *in_ECX;
  in_ECX[1] = param_2[1] * in_ECX[1];
  in_ECX[2] = param_2[2] * in_ECX[2];
  fVar1 = param_2[3];
  fVar2 = in_ECX[3];
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  in_ECX[3] = fVar1 * fVar2;
  fVar3 = in_ECX[2];
  param_1[3] = fVar1 * fVar2;
  param_1[2] = fVar3;
  return;
}


// ==== 1010db40 FUN_1010db40

void FUN_1010db40(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  
  param_2 = 1.0 / param_2;
  *in_ECX = param_2 * *in_ECX;
  in_ECX[1] = in_ECX[1] * param_2;
  in_ECX[2] = in_ECX[2] * param_2;
  *param_1 = *in_ECX;
  fVar1 = in_ECX[3];
  param_1[1] = in_ECX[1];
  in_ECX[3] = param_2 * fVar1;
  fVar2 = in_ECX[2];
  param_1[3] = param_2 * fVar1;
  param_1[2] = fVar2;
  return;
}


// ==== 1010dbb0 FUN_1010dbb0

void FUN_1010dbb0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  return;
}


// ==== 1010dbe0 FUN_1010dbe0

void FUN_1010dbe0(void)

{
  return;
}


// ==== 1010dbf0 FUN_1010dbf0

void FUN_1010dbf0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return;
}


// ==== 1010dc10 FUN_1010dc10

void FUN_1010dc10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = param_4;
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  return;
}


// ==== 1010dc40 FUN_1010dc40

void FUN_1010dc40(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  return;
}


// ==== 1010dc70 FUN_1010dc70

void FUN_1010dc70(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  return;
}


// ==== 1010dca0 FUN_1010dca0

void FUN_1010dca0(void)

{
  return;
}


// ==== 1010dcb0 FUN_1010dcb0

void FUN_1010dcb0(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  uVar1 = param_1[2];
  in_ECX[3] = param_2;
  in_ECX[2] = uVar1;
  *(undefined1 *)(in_ECX + 4) = param_3;
  return;
}


// ==== 1010dce0 FUN_1010dce0

undefined4 FUN_1010dce0(float *param_1)

{
  float *in_ECX;
  
  if ((((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) && (param_1[2] == in_ECX[2])) &&
     ((param_1[3] == in_ECX[3] && (*(char *)(in_ECX + 4) == *(char *)(param_1 + 4))))) {
    return 1;
  }
  return 0;
}


// ==== 1010dd50 FUN_1010dd50

void FUN_1010dd50(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  return;
}


// ==== 1010dd80 FUN_1010dd80

void FUN_1010dd80(void)

{
  return;
}


// ==== 1010dd90 FUN_1010dd90

void FUN_1010dd90(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = 0x3f800000;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[8] = 0;
  in_ECX[7] = 0x3f800000;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0x3f800000;
  return;
}


// ==== 1010dde0 FUN_1010dde0

void FUN_1010dde0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = *param_2;
  in_ECX[4] = param_2[1];
  in_ECX[5] = param_2[2];
  in_ECX[6] = *param_3;
  in_ECX[7] = param_3[1];
  in_ECX[8] = param_3[2];
  in_ECX[9] = *param_4;
  in_ECX[10] = param_4[1];
  in_ECX[0xb] = param_4[2];
  return;
}


// ==== 1010de50 FUN_1010de50

void FUN_1010de50(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 1010de70 FUN_1010de70

void FUN_1010de70(void)

{
  return;
}


// ==== 1010de80 FUN_1010de80

void FUN_1010de80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = in_ECX;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar2 = in_ECX + 0xc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}


// ==== 1010deb0 FUN_1010deb0

void FUN_1010deb0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 1010ded0 FUN_1010ded0

void FUN_1010ded0(void)

{
  return;
}


// ==== 1010dee0 FUN_1010dee0

void FUN_1010dee0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  return;
}


// ==== 1010df00 FUN_1010df00

void FUN_1010df00(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  *param_1 = *param_2 + *in_ECX;
  iVar1 = param_2[2];
  iVar2 = in_ECX[2];
  param_1[1] = param_2[1] + in_ECX[1];
  param_1[2] = iVar1 + iVar2;
  return;
}


// ==== 1010df30 FUN_1010df30

void FUN_1010df30(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  *param_1 = *in_ECX - *param_2;
  iVar1 = in_ECX[2];
  iVar2 = param_2[2];
  param_1[1] = in_ECX[1] - param_2[1];
  param_1[2] = iVar1 - iVar2;
  return;
}


// ==== 1010df60 FUN_1010df60

undefined4 * FUN_1010df60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1017b700();
  *param_1 = uVar1;
  uVar1 = FUN_1017b700();
  param_1[1] = uVar1;
  uVar1 = FUN_1017b700();
  param_1[2] = uVar1;
  return param_1;
}


// ==== 1010dfb0 FUN_1010dfb0

void FUN_1010dfb0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  
  uVar2 = FUN_1017b700();
  *in_ECX = uVar2;
  uVar2 = FUN_1017b700();
  in_ECX[1] = uVar2;
  uVar2 = FUN_1017b700();
  in_ECX[2] = uVar2;
  uVar2 = in_ECX[1];
  *param_1 = *in_ECX;
  uVar1 = in_ECX[2];
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return;
}


// ==== 1010e010 FUN_1010e010

undefined4 FUN_1010e010(int *param_1)

{
  int *in_ECX;
  
  if (((*in_ECX == *param_1) && (in_ECX[1] == param_1[1])) && (in_ECX[2] == param_1[2])) {
    return 1;
  }
  return 0;
}


// ==== 1010e040 FUN_1010e040

undefined4 FUN_1010e040(int *param_1)

{
  int *in_ECX;
  
  if (((*in_ECX == *param_1) && (in_ECX[1] == param_1[1])) && (in_ECX[2] == param_1[2])) {
    return 0;
  }
  return 1;
}


// ==== 1010e070 FUN_1010e070

void FUN_1010e070(int *param_1,int *param_2)

{
  int iVar1;
  int *in_ECX;
  
  *in_ECX = *in_ECX + *param_2;
  in_ECX[1] = in_ECX[1] + param_2[1];
  in_ECX[2] = in_ECX[2] + param_2[2];
  *param_1 = *in_ECX;
  iVar1 = in_ECX[2];
  param_1[1] = in_ECX[1];
  param_1[2] = iVar1;
  return;
}


// ==== 1010e0b0 FUN_1010e0b0

void FUN_1010e0b0(int *param_1,int *param_2)

{
  int iVar1;
  int *in_ECX;
  
  *in_ECX = *in_ECX - *param_2;
  in_ECX[1] = in_ECX[1] - param_2[1];
  in_ECX[2] = in_ECX[2] - param_2[2];
  *param_1 = *in_ECX;
  iVar1 = in_ECX[2];
  param_1[1] = in_ECX[1];
  param_1[2] = iVar1;
  return;
}


// ==== 1010e0f0 FUN_1010e0f0

undefined4 FUN_1010e0f0(void)

{
  uint *in_ECX;
  
  if ((((*in_ECX & 0xffff) == 0) && ((in_ECX[1] & 0xffff) == 0)) && ((in_ECX[2] & 0xffff) == 0)) {
    return 1;
  }
  return 0;
}


// ==== 1010e120 FUN_1010e120

void FUN_1010e120(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *in_ECX;
  
  in_ECX[1] = in_ECX[1] + param_3;
  in_ECX[2] = in_ECX[2] + param_4;
  *in_ECX = *in_ECX + param_2;
  *param_1 = *in_ECX;
  iVar1 = in_ECX[2];
  param_1[1] = in_ECX[1];
  param_1[2] = iVar1;
  return;
}


// ==== 1010e160 FUN_1010e160

void FUN_1010e160(uint *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint *in_ECX;
  
  in_ECX[1] = in_ECX[1] + param_3;
  uVar1 = *in_ECX;
  if (param_2 < 0) {
    if ((param_2 < -0xffff) || (param_2 <= (int)-(uVar1 + 0x4000 & 0xffff))) {
      uVar1 = 0xc000;
    }
    else {
LAB_1010e1ad:
      uVar1 = param_2 + uVar1 & 0xffff;
    }
  }
  else {
    if ((param_2 < 1) || ((param_2 < 0x10000 && (param_2 < (int)(0x4000 - uVar1 & 0xffff)))))
    goto LAB_1010e1ad;
    uVar1 = 0x4000;
  }
  *in_ECX = uVar1;
  uVar1 = in_ECX[2];
  if (param_4 < 0) {
    if ((param_4 < -0xffff) || (param_4 <= (int)-(uVar1 + 0x4000 & 0xffff))) {
      uVar1 = 0xc000;
      goto LAB_1010e202;
    }
  }
  else if ((0 < param_4) && ((0xffff < param_4 || ((int)(0x4000 - uVar1 & 0xffff) <= param_4)))) {
    uVar1 = 0x4000;
    goto LAB_1010e202;
  }
  uVar1 = uVar1 + param_4 & 0xffff;
LAB_1010e202:
  in_ECX[2] = uVar1;
  *param_1 = *in_ECX;
  uVar1 = in_ECX[2];
  param_1[1] = in_ECX[1];
  param_1[2] = uVar1;
  return;
}


// ==== 1010e250 FUN_1010e250

undefined4 * FUN_1010e250(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  thunk_FUN_1010c390((float)in_ECX[2],(float)param_2[2]);
  uVar1 = FUN_1017b700();
  thunk_FUN_1010c390((float)in_ECX[1],(float)param_2[1]);
  uVar2 = FUN_1017b700();
  thunk_FUN_1010c390((float)*in_ECX,(float)*param_2);
  uVar3 = FUN_1017b700();
  param_1[1] = uVar2;
  *param_1 = uVar3;
  param_1[2] = uVar1;
  return param_1;
}


// ==== 1010e2e0 FUN_1010e2e0

void FUN_1010e2e0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = in_ECX[2];
  iVar2 = in_ECX[1];
  *param_1 = *in_ECX % 0xffff;
  param_1[1] = iVar2 % 0xffff;
  param_1[2] = iVar1 % 0xffff;
  return;
}


// ==== 1010e34a Catch@1010e34a

void Catch_1010e34a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 1010e35e Catch@1010e35e

void Catch_1010e35e(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FRotator::Clamp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 1010e3a0 FUN_1010e3a0

void FUN_1010e3a0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  return;
}


// ==== 1010e3c0 FUN_1010e3c0

void FUN_1010e3c0(void)

{
  return;
}


// ==== 1010e3d0 FUN_1010e3d0

void FUN_1010e3d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  puVar2 = (undefined4 *)&stack0x00000010;
  puVar3 = in_ECX + 3;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


// ==== 1010e410 FUN_1010e410

void FUN_1010e410(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 1010e430 FUN_1010e430

void FUN_1010e430(void)

{
  return;
}


// ==== 1010e440 FUN_1010e440

void FUN_1010e440(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_1;
  return;
}


// ==== 1010e460 FUN_1010e460

undefined4 FUN_1010e460(float *param_1)

{
  float *in_ECX;
  
  if ((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) {
    return 1;
  }
  return 0;
}


// ==== 1010e4a0 FUN_1010e4a0

undefined4 FUN_1010e4a0(float *param_1)

{
  float *in_ECX;
  
  if ((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) {
    return 0;
  }
  return 1;
}


// ==== 1010e4e0 FUN_1010e4e0

void FUN_1010e4e0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  
  *in_ECX = *param_2 + *in_ECX;
  fVar1 = param_2[1];
  fVar2 = in_ECX[1];
  *param_1 = *in_ECX;
  in_ECX[1] = fVar1 + fVar2;
  param_1[1] = in_ECX[1];
  return;
}


// ==== 1010e510 FUN_1010e510

void FUN_1010e510(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  
  *in_ECX = *in_ECX - *param_2;
  fVar1 = in_ECX[1];
  fVar2 = param_2[1];
  *param_1 = *in_ECX;
  in_ECX[1] = fVar1 - fVar2;
  param_1[1] = in_ECX[1];
  return;
}


// ==== 1010e540 FUN_1010e540

void FUN_1010e540(float *param_1,float param_2)

{
  float *in_ECX;
  
  *in_ECX = param_2 + *in_ECX;
  *param_1 = *in_ECX;
  in_ECX[1] = param_2 + in_ECX[1];
  param_1[1] = in_ECX[1];
  return;
}


// ==== 1010e570 FUN_1010e570

void FUN_1010e570(float *param_1,float param_2)

{
  float *in_ECX;
  
  *in_ECX = *in_ECX - param_2;
  *param_1 = *in_ECX;
  in_ECX[1] = in_ECX[1] - param_2;
  param_1[1] = in_ECX[1];
  return;
}


// ==== 1010e5a0 FUN_1010e5a0

void FUN_1010e5a0(float *param_1,float param_2)

{
  float *in_ECX;
  
  *in_ECX = param_2 * *in_ECX;
  *param_1 = *in_ECX;
  in_ECX[1] = param_2 * in_ECX[1];
  param_1[1] = in_ECX[1];
  return;
}


// ==== 1010e5d0 FUN_1010e5d0

void FUN_1010e5d0(float *param_1,float param_2)

{
  float *in_ECX;
  
  *in_ECX = (1.0 / param_2) * *in_ECX;
  *param_1 = *in_ECX;
  in_ECX[1] = (1.0 / param_2) * in_ECX[1];
  param_1[1] = in_ECX[1];
  return;
}


// ==== 1010e610 FUN_1010e610

void FUN_1010e610(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  
  *in_ECX = *param_2 * *in_ECX;
  fVar1 = param_2[1];
  fVar2 = in_ECX[1];
  *param_1 = *in_ECX;
  in_ECX[1] = fVar1 * fVar2;
  param_1[1] = in_ECX[1];
  return;
}


// ==== 1010e640 FUN_1010e640

void FUN_1010e640(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  
  *in_ECX = *in_ECX / *param_2;
  fVar1 = in_ECX[1];
  fVar2 = param_2[1];
  *param_1 = *in_ECX;
  in_ECX[1] = fVar1 / fVar2;
  param_1[1] = in_ECX[1];
  return;
}


// ==== 1010e670 FUN_1010e670

float10 FUN_1010e670(void)

{
  float *in_ECX;
  
  return (float10)((in_ECX[1] + *in_ECX) * 0.5);
}


// ==== 1010e690 FUN_1010e690

float10 FUN_1010e690(void)

{
  float *in_ECX;
  float fVar1;
  
  fVar1 = appFrand();
  return (float10)((*in_ECX - in_ECX[1]) * fVar1 + in_ECX[1]);
}


// ==== 1010e6c0 FUN_1010e6c0

float10 FUN_1010e6c0(void)

{
  float *in_ECX;
  float fVar1;
  
  fVar1 = appSRand();
  return (float10)((*in_ECX - in_ECX[1]) * fVar1 + in_ECX[1]);
}


// ==== 1010e6f0 FUN_1010e6f0

undefined4 FUN_1010e6f0(void)

{
  float *in_ECX;
  
  if ((*in_ECX == 0.0) && (in_ECX[1] == 0.0)) {
    return 1;
  }
  return 0;
}


// ==== 1010e720 FUN_1010e720

int FUN_1010e720(int param_1)

{
  int in_ECX;
  
  return in_ECX + param_1 * 4;
}


// ==== 1010e730 FUN_1010e730

undefined4 FUN_1010e730(void)

{
  float fVar1;
  float *in_ECX;
  
  if (*in_ECX <= 0.0) {
    if (*in_ECX < 0.0) {
      return 0;
    }
    fVar1 = in_ECX[1];
    if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
      return 0;
    }
  }
  return 1;
}


// ==== 1010e770 FUN_1010e770

void FUN_1010e770(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


// ==== 1010e790 FUN_1010e790

void FUN_1010e790(void)

{
  return;
}


// ==== 1010e7a0 FUN_1010e7a0

void FUN_1010e7a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  in_ECX[4] = param_5;
  in_ECX[5] = param_6;
  return;
}


// ==== 1010e7e0 FUN_1010e7e0

void FUN_1010e7e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_1;
  in_ECX[2] = param_2;
  in_ECX[3] = param_2;
  in_ECX[4] = param_3;
  in_ECX[5] = param_3;
  return;
}


// ==== 1010e810 FUN_1010e810

undefined4 FUN_1010e810(float *param_1)

{
  float *in_ECX;
  
  if ((((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) && (param_1[2] == in_ECX[2])) &&
     (((param_1[3] == in_ECX[3] && (param_1[4] == in_ECX[4])) && (param_1[5] == in_ECX[5])))) {
    return 1;
  }
  return 0;
}


// ==== 1010e8a0 FUN_1010e8a0

undefined4 FUN_1010e8a0(float *param_1)

{
  float *in_ECX;
  
  if ((((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) && (param_1[2] == in_ECX[2])) &&
     (((param_1[3] == in_ECX[3] && (param_1[4] == in_ECX[4])) && (param_1[5] == in_ECX[5])))) {
    return 0;
  }
  return 1;
}


// ==== 1010e930 FUN_1010e930

void FUN_1010e930(float *param_1,float *param_2)

{
  float fVar1;
  float *in_ECX;
  
  *in_ECX = *param_2 + *in_ECX;
  in_ECX[1] = param_2[1] + in_ECX[1];
  in_ECX[2] = param_2[2] + in_ECX[2];
  in_ECX[3] = param_2[3] + in_ECX[3];
  in_ECX[4] = in_ECX[4] + param_2[4];
  in_ECX[5] = param_2[5] + in_ECX[5];
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  param_1[2] = in_ECX[2];
  param_1[3] = in_ECX[3];
  fVar1 = in_ECX[5];
  param_1[4] = in_ECX[4];
  param_1[5] = fVar1;
  return;
}


// ==== 1010e9b0 FUN_1010e9b0

void FUN_1010e9b0(float *param_1,float *param_2)

{
  float fVar1;
  float *in_ECX;
  
  *in_ECX = *in_ECX - *param_2;
  in_ECX[1] = in_ECX[1] - param_2[1];
  in_ECX[2] = in_ECX[2] - param_2[2];
  in_ECX[3] = in_ECX[3] - param_2[3];
  in_ECX[4] = in_ECX[4] - param_2[4];
  in_ECX[5] = in_ECX[5] - param_2[5];
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  param_1[2] = in_ECX[2];
  param_1[3] = in_ECX[3];
  fVar1 = in_ECX[5];
  param_1[4] = in_ECX[4];
  param_1[5] = fVar1;
  return;
}


// ==== 1010ea30 FUN_1010ea30

void FUN_1010ea30(float *param_1,float *param_2)

{
  float fVar1;
  float *in_ECX;
  
  fVar1 = *param_2;
  *in_ECX = fVar1 + *in_ECX;
  in_ECX[1] = fVar1 + in_ECX[1];
  fVar1 = param_2[1];
  in_ECX[2] = fVar1 + in_ECX[2];
  in_ECX[3] = fVar1 + in_ECX[3];
  fVar1 = param_2[2];
  in_ECX[4] = fVar1 + in_ECX[4];
  in_ECX[5] = fVar1 + in_ECX[5];
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  param_1[2] = in_ECX[2];
  param_1[3] = in_ECX[3];
  fVar1 = in_ECX[5];
  param_1[4] = in_ECX[4];
  param_1[5] = fVar1;
  return;
}


// ==== 1010eae0 FUN_1010eae0

void FUN_1010eae0(float *param_1,float *param_2)

{
  float fVar1;
  float *in_ECX;
  
  fVar1 = *param_2;
  *in_ECX = *in_ECX - fVar1;
  in_ECX[1] = in_ECX[1] - fVar1;
  fVar1 = param_2[1];
  in_ECX[2] = in_ECX[2] - fVar1;
  in_ECX[3] = in_ECX[3] - fVar1;
  fVar1 = param_2[2];
  in_ECX[4] = in_ECX[4] - fVar1;
  in_ECX[5] = in_ECX[5] - fVar1;
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  param_1[2] = in_ECX[2];
  param_1[3] = in_ECX[3];
  fVar1 = in_ECX[5];
  param_1[4] = in_ECX[4];
  param_1[5] = fVar1;
  return;
}


// ==== 1010eb90 FUN_1010eb90

void FUN_1010eb90(float *param_1,float param_2)

{
  float fVar1;
  float *in_ECX;
  
  *in_ECX = param_2 * *in_ECX;
  in_ECX[1] = in_ECX[1] * param_2;
  in_ECX[2] = param_2 * in_ECX[2];
  in_ECX[3] = in_ECX[3] * param_2;
  in_ECX[4] = in_ECX[4] * param_2;
  in_ECX[5] = param_2 * in_ECX[5];
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  param_1[2] = in_ECX[2];
  param_1[3] = in_ECX[3];
  fVar1 = in_ECX[5];
  param_1[4] = in_ECX[4];
  param_1[5] = fVar1;
  return;
}


// ==== 1010ec10 FUN_1010ec10

void FUN_1010ec10(float *param_1,float param_2)

{
  float fVar1;
  float *in_ECX;
  
  param_2 = 1.0 / param_2;
  *in_ECX = param_2 * *in_ECX;
  in_ECX[1] = in_ECX[1] * param_2;
  in_ECX[2] = in_ECX[2] * param_2;
  in_ECX[3] = in_ECX[3] * param_2;
  in_ECX[4] = in_ECX[4] * param_2;
  in_ECX[5] = param_2 * in_ECX[5];
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  param_1[2] = in_ECX[2];
  param_1[3] = in_ECX[3];
  fVar1 = in_ECX[5];
  param_1[4] = in_ECX[4];
  param_1[5] = fVar1;
  return;
}


// ==== 1010eca0 FUN_1010eca0

void FUN_1010eca0(float *param_1,float *param_2)

{
  float fVar1;
  float *in_ECX;
  
  *in_ECX = *param_2 * *in_ECX;
  in_ECX[1] = param_2[1] * in_ECX[1];
  in_ECX[2] = param_2[2] * in_ECX[2];
  in_ECX[3] = param_2[3] * in_ECX[3];
  in_ECX[4] = in_ECX[4] * param_2[4];
  in_ECX[5] = param_2[5] * in_ECX[5];
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  param_1[2] = in_ECX[2];
  param_1[3] = in_ECX[3];
  fVar1 = in_ECX[5];
  param_1[4] = in_ECX[4];
  param_1[5] = fVar1;
  return;
}


// ==== 1010ed20 FUN_1010ed20

void FUN_1010ed20(float *param_1,float *param_2)

{
  float fVar1;
  float *in_ECX;
  
  *in_ECX = *in_ECX / *param_2;
  in_ECX[1] = in_ECX[1] / param_2[1];
  in_ECX[2] = in_ECX[2] / param_2[2];
  in_ECX[3] = in_ECX[3] / param_2[3];
  in_ECX[4] = in_ECX[4] / param_2[4];
  in_ECX[5] = in_ECX[5] / param_2[5];
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  param_1[2] = in_ECX[2];
  param_1[3] = in_ECX[3];
  fVar1 = in_ECX[5];
  param_1[4] = in_ECX[4];
  param_1[5] = fVar1;
  return;
}


// ==== 1010eda0 FUN_1010eda0

void FUN_1010eda0(float *param_1)

{
  float *in_ECX;
  
  *param_1 = (in_ECX[1] + *in_ECX) * 0.5;
  param_1[1] = (in_ECX[3] + in_ECX[2]) * 0.5;
  param_1[2] = (in_ECX[5] + in_ECX[4]) * 0.5;
  return;
}


// ==== 1010ede0 FUN_1010ede0

void FUN_1010ede0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_ECX;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = appFrand();
  fVar1 = in_ECX[4];
  fVar2 = in_ECX[5];
  fVar3 = in_ECX[5];
  fVar8 = appFrand();
  fVar4 = in_ECX[2];
  fVar5 = in_ECX[3];
  fVar6 = in_ECX[3];
  fVar9 = appFrand();
  *param_1 = (*in_ECX - in_ECX[1]) * fVar9 + in_ECX[1];
  param_1[1] = (fVar4 - fVar5) * fVar8 + fVar6;
  param_1[2] = (fVar1 - fVar2) * fVar7 + fVar3;
  return;
}


// ==== 1010ee50 FUN_1010ee50

void FUN_1010ee50(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_ECX;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = appSRand();
  fVar1 = in_ECX[4];
  fVar2 = in_ECX[5];
  fVar3 = in_ECX[5];
  fVar8 = appSRand();
  fVar4 = in_ECX[2];
  fVar5 = in_ECX[3];
  fVar6 = in_ECX[3];
  fVar9 = appSRand();
  *param_1 = (*in_ECX - in_ECX[1]) * fVar9 + in_ECX[1];
  param_1[1] = (fVar4 - fVar5) * fVar8 + fVar6;
  param_1[2] = (fVar1 - fVar2) * fVar7 + fVar3;
  return;
}


// ==== 1010eec0 FUN_1010eec0

undefined4 FUN_1010eec0(void)

{
  float *in_ECX;
  
  if ((((*in_ECX == 0.0) && (in_ECX[1] == 0.0)) && (in_ECX[2] == 0.0)) &&
     (((in_ECX[3] == 0.0 && (in_ECX[4] == 0.0)) && (in_ECX[5] == 0.0)))) {
    return 1;
  }
  return 0;
}


// ==== 1010ef20 FUN_1010ef20

int FUN_1010ef20(int param_1)

{
  int in_ECX;
  
  return in_ECX + param_1 * 8;
}


// ==== 1010ef30 FUN_1010ef30

void FUN_1010ef30(undefined4 *param_1)

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


// ==== 1010ef70 FUN_1010ef70

void FUN_1010ef70(void)

{
  return;
}


// ==== 1010ef80 FUN_1010ef80

void FUN_1010ef80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = *param_2;
  in_ECX[4] = param_2[1];
  in_ECX[5] = param_2[2];
  *(undefined1 *)(in_ECX + 6) = 1;
  return;
}


// ==== 1010efc0 FUN_1010efc0

int FUN_1010efc0(int param_1)

{
  int in_ECX;
  
  return in_ECX + param_1 * 0xc;
}


// ==== 1010efd0 FUN_1010efd0

int FUN_1010efd0(int param_1)

{
  int in_ECX;
  
  return in_ECX + param_1 * 0xc;
}


// ==== 1010efe0 FUN_1010efe0

void FUN_1010efe0(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 6) = 0;
  in_ECX[3] = 0;
  *in_ECX = 0;
  in_ECX[4] = 0;
  in_ECX[1] = 0;
  in_ECX[5] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1010f030 FUN_1010f030

void FUN_1010f030(uint param_1)

{
  if (0x7fffffff < param_1) {
    appFailAssert("i>-1","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnMath.h",0x7dc);
  }
  if (1 < (int)param_1) {
    appFailAssert("i<2","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnMath.h",0x7dd);
  }
  return;
}


// ==== 1010f0a0 FUN_1010f0a0

void FUN_1010f0a0(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_ECX;
  
  *(undefined1 *)(param_1 + 6) = 1;
  fVar1 = in_ECX[3];
  fVar2 = in_ECX[4];
  fVar3 = in_ECX[5];
  fVar4 = in_ECX[1];
  fVar5 = in_ECX[2];
  *param_1 = *in_ECX - param_2;
  param_1[1] = fVar4 - param_2;
  param_1[3] = param_2 + fVar1;
  param_1[2] = fVar5 - param_2;
  param_1[4] = fVar2 + param_2;
  param_1[5] = fVar3 + param_2;
  return;
}


// ==== 1010f130 FUN_1010f130

void FUN_1010f130(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_ECX;
  
  fVar1 = in_ECX[4];
  fVar2 = in_ECX[1];
  fVar3 = in_ECX[5];
  fVar4 = in_ECX[2];
  *param_1 = (in_ECX[3] + *in_ECX) * 0.5;
  param_1[1] = (fVar1 + fVar2) * 0.5;
  param_1[2] = (fVar3 + fVar4) * 0.5;
  return;
}


// ==== 1010f1b0 FUN_1010f1b0

void FUN_1010f1b0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_ECX;
  
  fVar1 = in_ECX[4];
  fVar2 = in_ECX[1];
  fVar3 = in_ECX[5];
  fVar4 = in_ECX[2];
  *param_1 = (in_ECX[3] - *in_ECX) * 0.5;
  param_1[1] = (fVar1 - fVar2) * 0.5;
  param_1[2] = (fVar3 - fVar4) * 0.5;
  return;
}


// ==== 1010f210 FUN_1010f210

void FUN_1010f210(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_ECX;
  
  fVar1 = in_ECX[4];
  fVar2 = in_ECX[1];
  fVar3 = in_ECX[5];
  fVar4 = in_ECX[2];
  *param_2 = in_ECX[3] - *in_ECX;
  param_2[1] = fVar1 - fVar2;
  param_2[2] = fVar3 - fVar4;
  fVar1 = *param_2;
  *param_2 = fVar1 * 0.5;
  fVar2 = param_2[1];
  param_2[1] = fVar2 * 0.5;
  fVar3 = param_2[2];
  param_2[2] = fVar3 * 0.5;
  fVar4 = in_ECX[1];
  fVar5 = in_ECX[2];
  *param_1 = *in_ECX + fVar1 * 0.5;
  param_1[1] = fVar4 + fVar2 * 0.5;
  param_1[2] = fVar3 * 0.5 + fVar5;
  return;
}


// ==== 1010f2e0 FUN_1010f2e0

ushort FUN_1010f2e0(float *param_1)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  ushort uVar3;
  
  fVar1 = *in_ECX;
  fVar2 = param_1[3];
  uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
          (ushort)(fVar2 == fVar1) << 0xe;
  if (fVar2 >= fVar1) {
    fVar1 = *param_1;
    fVar2 = in_ECX[3];
    uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
            (ushort)(fVar2 == fVar1) << 0xe;
    if (fVar2 >= fVar1) {
      fVar1 = in_ECX[1];
      fVar2 = param_1[4];
      uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
              (ushort)(fVar2 == fVar1) << 0xe;
      if (fVar2 >= fVar1) {
        fVar1 = param_1[1];
        fVar2 = in_ECX[4];
        uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                (ushort)(fVar2 == fVar1) << 0xe;
        if (fVar2 >= fVar1) {
          fVar1 = in_ECX[2];
          fVar2 = param_1[5];
          uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                  (ushort)(fVar2 == fVar1) << 0xe;
          if (fVar2 >= fVar1) {
            fVar1 = param_1[2];
            fVar2 = in_ECX[5];
            uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                    (ushort)(fVar2 == fVar1) << 0xe;
            if (fVar2 >= fVar1) {
              return CONCAT11((char)(uVar3 >> 8),1);
            }
          }
        }
      }
    }
  }
  return uVar3;
}


// ==== 1010f360 FUN_1010f360

void FUN_1010f360(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 1010f380 FUN_1010f380

void FUN_1010f380(void)

{
  return;
}


// ==== 1010f390 FUN_1010f390

void FUN_1010f390(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  return;
}


// ==== 1010f3b0 FUN_1010f3b0

undefined4 FUN_1010f3b0(float *param_1)

{
  float *in_ECX;
  
  if ((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) {
    return 1;
  }
  return 0;
}


// ==== 1010f3f0 FUN_1010f3f0

void FUN_1010f3f0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


// ==== 1010f410 FUN_1010f410

float10 FUN_1010f410(int param_1)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x1008c + param_1 * 4);
}


// ==== 1010f430 FUN_1010f430

float10 FUN_1010f430(int param_1)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x8c + (param_1 >> 2 & 0x3fffU) * 4);
}


// ==== 1010f450 FUN_1010f450

float10 FUN_1010f450(int param_1)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x8c + (param_1 + 0x4000 >> 2 & 0x3fffU) * 4);
}


// ==== 1010f480 FUN_1010f480

float10 FUN_1010f480(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_1017b700();
  return (float10)*(float *)(in_ECX + 0x8c + (iVar1 >> 2 & 0x3fffU) * 4);
}


// ==== 1010f4c0 FUN_1010f4c0

float10 FUN_1010f4c0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_1017b700();
  return (float10)*(float *)(in_ECX + 0x8c + (0x4000 - iVar1 >> 2 & 0x3fffU) * 4);
}


// ==== 1010f510 FUN_1010f510

void FUN_1010f510(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = *param_2 - *param_1;
  fVar8 = param_2[1] - param_1[1];
  fVar9 = param_2[2] - param_1[2];
  fVar1 = param_1[6];
  fVar2 = param_1[9];
  fVar3 = param_1[7];
  fVar4 = param_1[10];
  fVar5 = param_1[8];
  fVar6 = param_1[0xb];
  *param_3 = fVar9 * param_1[5] + fVar8 * param_1[4] + fVar7 * param_1[3];
  param_3[1] = fVar9 * fVar5 + fVar8 * fVar3 + fVar7 * fVar1;
  param_3[2] = fVar9 * fVar6 + fVar8 * fVar4 + fVar7 * fVar2;
  return;
}


// ==== 1010f5b0 FUN_1010f5b0

void FUN_1010f5b0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = *(float *)(param_1 + 0x18);
  fVar5 = *(float *)(param_1 + 0x24);
  fVar6 = *(float *)(param_1 + 0x1c);
  fVar7 = *(float *)(param_1 + 0x28);
  fVar8 = *(float *)(param_1 + 0x20);
  fVar9 = *(float *)(param_1 + 0x2c);
  *param_3 = fVar3 * *(float *)(param_1 + 0x14) +
             fVar2 * *(float *)(param_1 + 0x10) + fVar1 * *(float *)(param_1 + 0xc);
  param_3[1] = fVar3 * fVar8 + fVar2 * fVar6 + fVar1 * fVar4;
  param_3[2] = fVar3 * fVar9 + fVar2 * fVar7 + fVar1 * fVar5;
  return;
}


// ==== 1010f640 FUN_1010f640

undefined4 FUN_1010f640(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1010f510(param_2);
  return param_1;
}


// ==== 1010f660 FUN_1010f660

undefined4 FUN_1010f660(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1010f5b0(param_2);
  return param_1;
}


// ==== 1010f680 FUN_1010f680

void FUN_1010f680(float *param_1,int param_2)

{
  float *in_ECX;
  
  *param_1 = *(float *)(param_2 + 0x24) * in_ECX[2] +
             *(float *)(param_2 + 0x18) * in_ECX[1] + *(float *)(param_2 + 0xc) * *in_ECX;
  param_1[1] = *(float *)(param_2 + 0x28) * in_ECX[2] +
               *(float *)(param_2 + 0x1c) * in_ECX[1] + *(float *)(param_2 + 0x10) * *in_ECX;
  param_1[2] = *(float *)(param_2 + 0x2c) * in_ECX[2] +
               *(float *)(param_2 + 0x20) * in_ECX[1] + *(float *)(param_2 + 0x14) * *in_ECX;
  return;
}


// ==== 1010f6f0 FUN_1010f6f0

void FUN_1010f6f0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *in_ECX;
  
  fVar1 = param_2[7];
  fVar2 = in_ECX[1];
  fVar3 = *in_ECX;
  fVar4 = param_2[6];
  fVar5 = param_2[8];
  fVar6 = in_ECX[2];
  fVar7 = param_2[10];
  fVar8 = in_ECX[1];
  fVar9 = param_2[9];
  fVar10 = *in_ECX;
  fVar11 = param_2[0xb];
  fVar12 = in_ECX[2];
  *param_1 = *param_2 + param_2[5] * in_ECX[2] + param_2[3] * *in_ECX + param_2[4] * in_ECX[1];
  param_1[1] = param_2[1] + fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  param_1[2] = param_2[2] + fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8;
  return;
}


// ==== 1010f790 FUN_1010f790

void FUN_1010f790(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  
  fVar3 = param_2[2] * in_ECX[2] + param_2[1] * in_ECX[1] + *param_2 * *in_ECX;
  fVar3 = fVar3 + fVar3;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = *in_ECX - fVar3 * *param_2;
  param_1[1] = in_ECX[1] - fVar3 * fVar1;
  param_1[2] = in_ECX[2] - fVar3 * fVar2;
  return;
}


// ==== 1010f820 FUN_1010f820

void FUN_1010f820(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  
  fVar3 = (param_2[2] * in_ECX[2] + param_2[1] * in_ECX[1] + *param_2 * *in_ECX) - param_2[3];
  fVar3 = fVar3 + fVar3;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = *in_ECX - fVar3 * *param_2;
  param_1[1] = in_ECX[1] - fVar3 * fVar1;
  param_1[2] = in_ECX[2] - fVar3 * fVar2;
  return;
}


// ==== 1010f8b0 FUN_1010f8b0

void FUN_1010f8b0(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *in_ECX;
  
  fVar1 = *(float *)(&DAT_1023ffd4 + (param_2 >> 2 & 0x3fffU) * 4);
  fVar2 = *(float *)(&DAT_1023ffd4 + (param_2 + 0x4000 >> 2 & 0x3fffU) * 4);
  fVar3 = param_3[2];
  fVar4 = param_3[1];
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar10 = 1.0 - fVar2;
  fVar9 = fVar10 * param_3[1] * *param_3;
  fVar8 = fVar10 * param_3[2] * *param_3;
  *param_1 = (fVar6 * fVar1 + fVar8) * in_ECX[2] +
             (fVar9 - fVar1 * fVar7) * in_ECX[1] + (*param_3 * *param_3 * fVar10 + fVar2) * *in_ECX;
  fVar3 = fVar10 * fVar3 * fVar4;
  param_1[1] = (fVar3 - fVar1 * fVar5) * in_ECX[2] +
               (param_3[1] * param_3[1] * fVar10 + fVar2) * in_ECX[1] +
               *in_ECX * (fVar1 * fVar7 + fVar9);
  param_1[2] = (fVar1 * fVar5 + fVar3) * in_ECX[1] + *in_ECX * (fVar8 - fVar6 * fVar1) +
               in_ECX[2] * (param_3[2] * param_3[2] * fVar10 + fVar2);
  return;
}


// ==== 1010fa40 FUN_1010fa40

void FUN_1010fa40(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int in_ECX;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = *(float *)(in_ECX + 0x14);
  fVar2 = *(float *)(in_ECX + 0x20);
  fVar3 = *(float *)(in_ECX + 0x2c);
  fVar4 = *(float *)(in_ECX + 0x10);
  fVar5 = *(float *)(in_ECX + 0x1c);
  fVar6 = *(float *)(in_ECX + 0x28);
  fVar7 = *(float *)(in_ECX + 0xc);
  fVar8 = *(float *)(in_ECX + 0x18);
  fVar9 = *(float *)(in_ECX + 0x24);
  thunk_FUN_1010f5b0();
  *param_1 = -local_c;
  param_1[1] = -local_8;
  param_1[3] = fVar7;
  param_1[2] = -local_4;
  param_1[4] = fVar8;
  param_1[5] = fVar9;
  param_1[6] = fVar4;
  param_1[7] = fVar5;
  param_1[9] = fVar1;
  param_1[8] = fVar6;
  param_1[10] = fVar2;
  param_1[0xb] = fVar3;
  return;
}


// ==== 1010fb40 FUN_1010fb40

void FUN_1010fb40(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  FVector *in_ECX;
  FVector local_30 [8];
  FVector local_28 [8];
  FVector local_20 [8];
  FVector local_18 [12];
  undefined4 *local_c;
  undefined4 *local_8;
  undefined4 local_4;
  
  puVar3 = (undefined4 *)FVector::MirrorByVector(in_ECX + 0x24,local_30);
  puVar4 = (undefined4 *)FVector::MirrorByVector(in_ECX + 0x18,local_28);
  local_4 = FVector::MirrorByVector(in_ECX + 0xc,local_20);
  puVar5 = (undefined4 *)FVector::MirrorByVector(in_ECX,local_18);
  *local_c = *puVar5;
  uVar1 = puVar5[2];
  local_c[1] = puVar5[1];
  local_c[2] = uVar1;
  local_c[3] = *local_8;
  uVar1 = local_8[2];
  local_c[4] = local_8[1];
  uVar2 = *puVar4;
  local_c[5] = uVar1;
  uVar1 = puVar4[1];
  local_c[6] = uVar2;
  uVar2 = puVar4[2];
  local_c[7] = uVar1;
  local_c[9] = *puVar3;
  uVar1 = puVar3[2];
  local_c[8] = uVar2;
  local_c[10] = puVar3[1];
  local_c[0xb] = uVar1;
  return;
}


// ==== 1010fc10 FUN_1010fc10

void FUN_1010fc10(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  FVector *in_ECX;
  FVector local_30 [8];
  FVector local_28 [8];
  FVector local_20 [8];
  FPlane local_18 [12];
  undefined4 *local_c;
  undefined4 *local_8;
  undefined4 local_4;
  
  puVar3 = (undefined4 *)FVector::MirrorByVector(in_ECX + 0x24,local_30);
  puVar4 = (undefined4 *)FVector::MirrorByVector(in_ECX + 0x18,local_28);
  local_4 = FVector::MirrorByVector(in_ECX + 0xc,local_20);
  puVar5 = (undefined4 *)FVector::MirrorByPlane(in_ECX,local_18);
  *local_c = *puVar5;
  uVar1 = puVar5[2];
  local_c[1] = puVar5[1];
  local_c[2] = uVar1;
  local_c[3] = *local_8;
  uVar1 = local_8[2];
  local_c[4] = local_8[1];
  uVar2 = *puVar4;
  local_c[5] = uVar1;
  uVar1 = puVar4[1];
  local_c[6] = uVar2;
  uVar2 = puVar4[2];
  local_c[7] = uVar1;
  local_c[9] = *puVar3;
  uVar1 = puVar3[2];
  local_c[8] = uVar2;
  local_c[10] = puVar3[1];
  local_c[0xb] = uVar1;
  return;
}


// ==== 1010fce0 FUN_1010fce0

void FUN_1010fce0(undefined4 param_1)

{
  undefined4 *in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  thunk_FUN_1010f510(param_1);
  *in_ECX = local_c;
  in_ECX[1] = local_8;
  in_ECX[2] = local_4;
  thunk_FUN_1010f5b0(param_1,in_ECX + 3,&local_c);
  in_ECX[3] = local_c;
  in_ECX[4] = local_8;
  in_ECX[5] = local_4;
  thunk_FUN_1010f5b0(param_1,in_ECX + 6,&local_c);
  in_ECX[6] = local_c;
  in_ECX[7] = local_8;
  in_ECX[8] = local_4;
  thunk_FUN_1010f5b0(param_1,in_ECX + 9,&local_c);
  in_ECX[9] = local_c;
  in_ECX[10] = local_8;
  in_ECX[0xb] = local_4;
  return;
}


// ==== 1010fdb0 FUN_1010fdb0

void FUN_1010fdb0(undefined4 *param_1,FCoords *param_2)

{
  FCoords *pFVar1;
  undefined4 *in_ECX;
  int iVar2;
  FCoords local_30 [48];
  
  pFVar1 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pFVar1 = *in_ECX;
    in_ECX = in_ECX + 1;
    pFVar1 = pFVar1 + 4;
  }
  pFVar1 = FCoords::operator*=(local_30,param_2);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *(undefined4 *)pFVar1;
    pFVar1 = pFVar1 + 4;
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 1010fe00 FUN_1010fe00

void FUN_1010fe00(int *param_1)

{
  uint uVar1;
  FCoords *in_ECX;
  uint uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = param_1[1] >> 2 & 0x3fff;
  local_18 = -*(float *)(&DAT_1023ffd4 + uVar2 * 4);
  uVar1 = param_1[1] + 0x4000 >> 2 & 0x3fff;
  local_14 = *(undefined4 *)(&DAT_1023ffd4 + uVar1 * 4);
  local_24 = *(undefined4 *)(&DAT_1023ffd4 + uVar1 * 4);
  local_20 = *(undefined4 *)(&DAT_1023ffd4 + uVar2 * 4);
  local_30 = 0;
  local_28 = 0;
  local_2c = 0;
  local_1c = 0;
  local_10 = 0.0;
  local_c = 0.0;
  local_4 = 0x3f800000;
  local_8 = 0;
  FCoords::operator*=(in_ECX,(FCoords *)&local_30);
  uVar1 = *param_1 >> 2 & 0x3fff;
  local_c = -*(float *)(&DAT_1023ffd4 + uVar1 * 4);
  local_4 = *(undefined4 *)(&DAT_1023ffd4 + (*param_1 + 0x4000 >> 2 & 0x3fffU) * 4);
  local_24 = *(undefined4 *)(&DAT_1023ffd4 + (*param_1 + 0x4000 >> 2 & 0x3fffU) * 4);
  local_1c = *(undefined4 *)(&DAT_1023ffd4 + uVar1 * 4);
  local_30 = 0;
  local_28 = 0;
  local_2c = 0;
  local_18 = 0.0;
  local_20 = 0;
  local_10 = 0.0;
  local_14 = 0x3f800000;
  local_8 = 0;
  FCoords::operator*=(in_ECX,(FCoords *)&local_30);
  uVar1 = param_1[2] >> 2 & 0x3fff;
  local_8 = *(undefined4 *)(&DAT_1023ffd4 + uVar1 * 4);
  uVar2 = param_1[2] + 0x4000 >> 2 & 0x3fff;
  local_4 = *(undefined4 *)(&DAT_1023ffd4 + uVar2 * 4);
  local_14 = *(undefined4 *)(&DAT_1023ffd4 + uVar2 * 4);
  local_10 = -*(float *)(&DAT_1023ffd4 + uVar1 * 4);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0x3f800000;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0.0;
  local_c = 0.0;
  FCoords::operator*=(in_ECX,(FCoords *)&local_30);
  return;
}


// ==== 10110150 FUN_10110150

void FUN_10110150(undefined4 *param_1,FRotator *param_2)

{
  FCoords *pFVar1;
  undefined4 *in_ECX;
  int iVar2;
  FCoords local_30 [48];
  
  pFVar1 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pFVar1 = *in_ECX;
    in_ECX = in_ECX + 1;
    pFVar1 = pFVar1 + 4;
  }
  pFVar1 = FCoords::operator*=(local_30,param_2);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *(undefined4 *)pFVar1;
    pFVar1 = pFVar1 + 4;
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 101101a0 FUN_101101a0

void FUN_101101a0(float *param_1)

{
  float *in_ECX;
  
  *in_ECX = *in_ECX - *param_1;
  in_ECX[1] = in_ECX[1] - param_1[1];
  in_ECX[2] = in_ECX[2] - param_1[2];
  return;
}


// ==== 101101d0 FUN_101101d0

void FUN_101101d0(float *param_1,float *param_2)

{
  float *in_ECX;
  int iVar1;
  float *pfVar2;
  float local_30 [12];
  
  pfVar2 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar2 = *in_ECX;
    in_ECX = in_ECX + 1;
    pfVar2 = pfVar2 + 1;
  }
  local_30[0] = local_30[0] - *param_2;
  local_30[1] = local_30[1] - param_2[1];
  local_30[2] = local_30[2] - param_2[2];
  pfVar2 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 10110240 FUN_10110240

void FUN_10110240(int *param_1)

{
  uint uVar1;
  FCoords *in_ECX;
  uint uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  uVar2 = param_1[2] >> 2 & 0x3fff;
  local_8 = -*(float *)(&DAT_1023ffd4 + uVar2 * 4);
  uVar1 = param_1[2] + 0x4000 >> 2 & 0x3fff;
  local_4 = *(undefined4 *)(&DAT_1023ffd4 + uVar1 * 4);
  local_14 = *(undefined4 *)(&DAT_1023ffd4 + uVar1 * 4);
  local_10 = *(undefined4 *)(&DAT_1023ffd4 + uVar2 * 4);
  local_30 = 0;
  local_28 = 0;
  local_24 = 0x3f800000;
  local_2c = 0;
  local_1c = 0.0;
  local_18 = -0.0;
  local_20 = -0.0;
  local_c = 0;
  FCoords::operator*=(in_ECX,(FCoords *)&local_30);
  uVar2 = *param_1 >> 2 & 0x3fff;
  local_c = *(undefined4 *)(&DAT_1023ffd4 + uVar2 * 4);
  uVar1 = *param_1 + 0x4000 >> 2 & 0x3fff;
  local_4 = *(undefined4 *)(&DAT_1023ffd4 + uVar1 * 4);
  local_24 = *(undefined4 *)(&DAT_1023ffd4 + uVar1 * 4);
  local_1c = -*(float *)(&DAT_1023ffd4 + uVar2 * 4);
  local_30 = 0;
  local_28 = 0;
  local_2c = 0;
  local_18 = 0.0;
  local_20 = 0.0;
  local_10 = 0x80000000;
  local_14 = 0x3f800000;
  local_8 = 0.0;
  FCoords::operator*=(in_ECX,(FCoords *)&local_30);
  local_18 = *(float *)(&DAT_1023ffd4 + (param_1[1] >> 2 & 0x3fffU) * 4);
  uVar1 = param_1[1] + 0x4000 >> 2 & 0x3fff;
  local_14 = *(undefined4 *)(&DAT_1023ffd4 + uVar1 * 4);
  local_24 = *(undefined4 *)(&DAT_1023ffd4 + uVar1 * 4);
  local_20 = -*(float *)(&DAT_1023ffd4 + (param_1[1] >> 2 & 0x3fffU) * 4);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_1c = -0.0;
  local_c = 0x80000000;
  local_10 = 0;
  local_8 = 0.0;
  local_4 = 0x3f800000;
  FCoords::operator*=(in_ECX,(FCoords *)&local_30);
  return;
}


// ==== 101105b0 FUN_101105b0

void FUN_101105b0(undefined4 *param_1,FRotator *param_2)

{
  FCoords *pFVar1;
  undefined4 *in_ECX;
  int iVar2;
  FCoords local_30 [48];
  
  pFVar1 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pFVar1 = *in_ECX;
    in_ECX = in_ECX + 1;
    pFVar1 = pFVar1 + 4;
  }
  pFVar1 = FCoords::operator/=(local_30,param_2);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *(undefined4 *)pFVar1;
    pFVar1 = pFVar1 + 4;
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 10110600 FUN_10110600

void FUN_10110600(float *param_1)

{
  float *in_ECX;
  
  *in_ECX = *param_1 + *in_ECX;
  in_ECX[1] = param_1[1] + in_ECX[1];
  in_ECX[2] = param_1[2] + in_ECX[2];
  return;
}


// ==== 10110630 FUN_10110630

void FUN_10110630(float *param_1,float *param_2)

{
  float fVar1;
  float *in_ECX;
  int iVar2;
  float *pfVar3;
  float local_30 [12];
  
  fVar1 = *param_2;
  pfVar3 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *in_ECX;
    in_ECX = in_ECX + 1;
    pfVar3 = pfVar3 + 1;
  }
  local_30[0] = fVar1 + local_30[0];
  local_30[1] = param_2[1] + local_30[1];
  local_30[2] = param_2[2] + local_30[2];
  pfVar3 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 101106a0 FUN_101106a0

void FUN_101106a0(float *param_1)

{
  float fVar1;
  undefined1 uVar2;
  FCoords *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  FCoords *pFVar5;
  float10 fVar6;
  FCoords local_30 [16];
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  float local_8;
  
  fVar6 = (float10)thunk_FUN_1010c400(param_1[3]);
  fVar1 = (float)fVar6;
  uVar2 = *(undefined1 *)(param_1 + 4);
  puVar4 = &DAT_1023ff60;
  pFVar5 = local_30;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pFVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    pFVar5 = pFVar5 + 4;
  }
  switch(uVar2) {
  case 1:
    local_20 = fVar1;
    break;
  case 2:
    local_1c = fVar1;
    break;
  case 3:
    local_18 = fVar1;
    break;
  case 4:
    local_10 = fVar1;
    break;
  case 5:
    local_c = fVar1;
    break;
  case 6:
    local_8 = fVar1;
  }
  FCoords::operator*=(in_ECX,local_30);
  *(float *)(in_ECX + 0xc) = *(float *)(in_ECX + 0xc) * *param_1;
  *(float *)(in_ECX + 0x10) = *(float *)(in_ECX + 0x10) * param_1[1];
  *(float *)(in_ECX + 0x14) = *(float *)(in_ECX + 0x14) * param_1[2];
  *(float *)(in_ECX + 0x18) = *(float *)(in_ECX + 0x18) * *param_1;
  *(float *)(in_ECX + 0x1c) = param_1[1] * *(float *)(in_ECX + 0x1c);
  *(float *)(in_ECX + 0x20) = *(float *)(in_ECX + 0x20) * param_1[2];
  *(float *)(in_ECX + 0x24) = *(float *)(in_ECX + 0x24) * *param_1;
  *(float *)(in_ECX + 0x28) = *(float *)(in_ECX + 0x28) * param_1[1];
  *(float *)(in_ECX + 0x2c) = *(float *)(in_ECX + 0x2c) * param_1[2];
  *(float *)in_ECX = *(float *)in_ECX / *param_1;
  *(float *)(in_ECX + 4) = *(float *)(in_ECX + 4) / param_1[1];
  *(float *)(in_ECX + 8) = *(float *)(in_ECX + 8) / param_1[2];
  return;
}


// ==== 10110800 FUN_10110800

void FUN_10110800(undefined4 *param_1,FScale *param_2)

{
  FCoords *pFVar1;
  undefined4 *in_ECX;
  int iVar2;
  FCoords local_30 [48];
  
  pFVar1 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pFVar1 = *in_ECX;
    in_ECX = in_ECX + 1;
    pFVar1 = pFVar1 + 4;
  }
  pFVar1 = FCoords::operator*=(local_30,param_2);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *(undefined4 *)pFVar1;
    pFVar1 = pFVar1 + 4;
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 10110850 FUN_10110850

void FUN_10110850(float *param_1)

{
  float fVar1;
  FCoords *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  FCoords *pFVar4;
  float10 fVar5;
  FCoords local_30 [16];
  float local_20;
  float local_1c;
  float local_18;
  float local_10;
  float local_c;
  float local_8;
  
  *(float *)(in_ECX + 0xc) = *(float *)(in_ECX + 0xc) / *param_1;
  *(float *)(in_ECX + 0x10) = *(float *)(in_ECX + 0x10) / param_1[1];
  *(float *)(in_ECX + 0x14) = *(float *)(in_ECX + 0x14) / param_1[2];
  *(float *)(in_ECX + 0x18) = *(float *)(in_ECX + 0x18) / *param_1;
  *(float *)(in_ECX + 0x1c) = *(float *)(in_ECX + 0x1c) / param_1[1];
  *(float *)(in_ECX + 0x20) = *(float *)(in_ECX + 0x20) / param_1[2];
  *(float *)(in_ECX + 0x24) = *(float *)(in_ECX + 0x24) / *param_1;
  *(float *)(in_ECX + 0x28) = *(float *)(in_ECX + 0x28) / param_1[1];
  *(float *)(in_ECX + 0x2c) = *(float *)(in_ECX + 0x2c) / param_1[2];
  *(float *)in_ECX = *param_1 * *(float *)in_ECX;
  *(float *)(in_ECX + 4) = *(float *)(in_ECX + 4) * param_1[1];
  *(float *)(in_ECX + 8) = param_1[2] * *(float *)(in_ECX + 8);
  puVar3 = &DAT_1023ff60;
  pFVar4 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pFVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    pFVar4 = pFVar4 + 4;
  }
  fVar5 = (float10)thunk_FUN_1010c400(param_1[3]);
  fVar1 = (float)fVar5;
  switch(*(undefined1 *)(param_1 + 4)) {
  case 1:
    local_20 = -fVar1;
    break;
  case 2:
    local_1c = -fVar1;
    break;
  case 3:
    local_18 = -fVar1;
    break;
  case 4:
    local_10 = -fVar1;
    break;
  case 5:
    local_c = -fVar1;
    break;
  case 6:
    local_8 = -fVar1;
  }
  FCoords::operator*=(in_ECX,local_30);
  return;
}


// ==== 101109c0 FUN_101109c0

void FUN_101109c0(undefined4 *param_1,FScale *param_2)

{
  FCoords *pFVar1;
  undefined4 *in_ECX;
  int iVar2;
  FCoords local_30 [48];
  
  pFVar1 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pFVar1 = *in_ECX;
    in_ECX = in_ECX + 1;
    pFVar1 = pFVar1 + 4;
  }
  pFVar1 = FCoords::operator/=(local_30,param_2);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *(undefined4 *)pFVar1;
    pFVar1 = pFVar1 + 4;
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 10110a10 FUN_10110a10

void FUN_10110a10(undefined4 *param_1)

{
  FCoords *pFVar1;
  FRotator *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  FCoords local_30 [48];
  
  puVar3 = &DAT_1023ff60;
  pFVar1 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pFVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    pFVar1 = pFVar1 + 4;
  }
  pFVar1 = FCoords::operator/=(local_30,in_ECX);
  puVar3 = local_60;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *(undefined4 *)pFVar1;
    pFVar1 = pFVar1 + 4;
    puVar3 = puVar3 + 1;
  }
  *param_1 = local_60[3];
  param_1[1] = local_50;
  param_1[2] = local_4c;
  return;
}


// ==== 10110a80 FUN_10110a80

void FUN_10110a80(void)

{
  return;
}


// ==== 10110a90 FUN_10110a90

void FUN_10110a90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  return;
}


// ==== 10110ac0 FUN_10110ac0

void FUN_10110ac0(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = *param_2 + *in_ECX;
  param_1[1] = param_2[1] + in_ECX[1];
  param_1[2] = param_2[2] + in_ECX[2];
  param_1[3] = param_2[3] + in_ECX[3];
  return;
}


// ==== 10110b00 FUN_10110b00

void FUN_10110b00(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = *in_ECX - *param_2;
  param_1[1] = in_ECX[1] - param_2[1];
  param_1[2] = in_ECX[2] - param_2[2];
  param_1[3] = in_ECX[3] - param_2[3];
  return;
}


// ==== 10110b40 FUN_10110b40

void FUN_10110b40(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = (param_2[2] * in_ECX[1] + *in_ECX * param_2[3] + *param_2 * in_ECX[3]) -
             param_2[1] * in_ECX[2];
  param_1[1] = in_ECX[2] * *param_2 +
               in_ECX[1] * param_2[3] + (param_2[1] * in_ECX[3] - param_2[2] * *in_ECX);
  param_1[2] = in_ECX[2] * param_2[3] +
               ((param_2[1] * *in_ECX + param_2[2] * in_ECX[3]) - in_ECX[1] * *param_2);
  param_1[3] = ((param_2[3] * in_ECX[3] - *param_2 * *in_ECX) - param_2[1] * in_ECX[1]) -
               in_ECX[2] * param_2[2];
  return;
}


// ==== 10110bf0 FUN_10110bf0

void FUN_10110bf0(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = *param_2 * *in_ECX;
  param_1[1] = in_ECX[1] * *param_2;
  param_1[2] = in_ECX[2] * *param_2;
  param_1[3] = in_ECX[3] * *param_2;
  return;
}


// ==== 10110c30 FUN_10110c30

void FUN_10110c30(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  param_1[2] = in_ECX[2];
  param_1[3] = -(float)in_ECX[3];
  return;
}


// ==== 10110c60 FUN_10110c60

undefined4 FUN_10110c60(float *param_1)

{
  float *in_ECX;
  
  if ((((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) && (param_1[2] == in_ECX[2])) &&
     (param_1[3] == in_ECX[3])) {
    return 0;
  }
  return 1;
}


// ==== 10110cc0 FUN_10110cc0

undefined4 FUN_10110cc0(void)

{
  float fVar1;
  float *in_ECX;
  double dVar2;
  
  fVar1 = in_ECX[3] * in_ECX[3] + in_ECX[2] * in_ECX[2] + *in_ECX * *in_ECX + in_ECX[1] * in_ECX[1];
  if (1e-05 <= fVar1) {
    dVar2 = appSqrt((double)fVar1);
    fVar1 = 1.0 / (float)dVar2;
    *in_ECX = fVar1 * *in_ECX;
    in_ECX[1] = fVar1 * in_ECX[1];
    in_ECX[2] = in_ECX[2] * fVar1;
    in_ECX[3] = fVar1 * in_ECX[3];
    return 1;
  }
  *in_ECX = 0.0;
  in_ECX[1] = 0.0;
  in_ECX[2] = 0.1;
  in_ECX[3] = 0.0;
  return 0;
}


// ==== 10110d90 FUN_10110d90

float * FUN_10110d90(float *param_1)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  double dVar3;
  
  dVar3 = appSin((double)*(float *)(in_ECX + 0xc));
  fVar1 = (float)dVar3;
  if (1e-05 <= fVar1) {
    fVar2 = *(float *)(in_ECX + 8) / fVar1;
    *param_1 = fVar2;
    param_1[1] = *(float *)(in_ECX + 4) / fVar1;
    param_1[2] = fVar2;
    dVar3 = appAcos((double)*(float *)(in_ECX + 0xc));
    param_1[3] = (float)((float10)dVar3 + (float10)dVar3);
    return param_1;
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 1.0;
  param_1[3] = 0.0;
  return param_1;
}


// ==== 10110e40 FUN_10110e40

float * FUN_10110e40(float *param_1)

{
  float fVar1;
  float *in_ECX;
  double dVar2;
  
  fVar1 = in_ECX[2] * in_ECX[2] + *in_ECX * *in_ECX + in_ECX[1] * in_ECX[1];
  if (1e-05 <= fVar1) {
    dVar2 = appSqrt((double)fVar1);
    fVar1 = 1.0 / (float)dVar2;
    *param_1 = fVar1 * *in_ECX;
    param_1[1] = fVar1 * in_ECX[1];
    param_1[2] = fVar1 * in_ECX[2];
    dVar2 = appCos((double)(in_ECX[3] * 0.5));
    param_1[3] = (float)dVar2;
    return param_1;
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 1.0;
  param_1[3] = 0.0;
  return param_1;
}


// ==== 10110f20 FUN_10110f20

void FUN_10110f20(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *in_ECX;
  
  fVar1 = *in_ECX;
  fVar2 = in_ECX[1];
  fVar3 = in_ECX[2];
  fVar4 = in_ECX[3] + in_ECX[3];
  fVar5 = fVar4 * (fVar2 * param_4 - param_3 * fVar3);
  *param_1 = fVar5;
  fVar6 = (fVar3 * param_2 - fVar1 * param_4) * fVar4;
  param_1[1] = fVar6;
  fVar4 = fVar4 * (fVar1 * param_3 - fVar2 * param_2);
  param_1[2] = fVar4;
  fVar7 = in_ECX[3] * in_ECX[3] - (fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  fVar8 = param_2 * fVar1 + param_3 * fVar2 + fVar3 * param_4;
  fVar8 = fVar8 + fVar8;
  *param_1 = fVar5 + fVar7 * param_2 + fVar8 * fVar1;
  param_1[1] = fVar6 + param_3 * fVar7 + fVar2 * fVar8;
  param_1[2] = fVar4 + param_4 * fVar7 + fVar8 * fVar3;
  return;
}


// ==== 10111100 FUN_10111100

void FUN_10111100(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  return;
}


// ==== 10111130 FUN_10111130

void FUN_10111130(void)

{
  return;
}


// ==== 10111140 FUN_10111140

void FUN_10111140(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  in_ECX[4] = param_5;
  in_ECX[5] = param_6;
  in_ECX[6] = param_7;
  in_ECX[7] = param_8;
  in_ECX[8] = param_9;
  in_ECX[9] = param_10;
  in_ECX[10] = param_11;
  in_ECX[0xb] = param_12;
  in_ECX[0xc] = param_13;
  in_ECX[0xd] = param_14;
  in_ECX[0xe] = param_15;
  in_ECX[0xf] = param_16;
  return;
}


// ==== 101111e0 FUN_101111e0

void FUN_101111e0(void)

{
  return;
}


// ==== 101111f0 FUN_101111f0

void FUN_101111f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0x3f800000;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[5] = 0x3f800000;
  in_ECX[10] = 0x3f800000;
  in_ECX[0xf] = 0x3f800000;
  return;
}


// ==== 10111240 FUN_10111240

void FUN_10111240(float *param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float param_9,float param_10,
                 float param_11,float param_12,float param_13,float param_14,float param_15,
                 float param_16,float param_17)

{
  float *in_ECX;
  
  *param_1 = param_10 * in_ECX[2] + param_6 * in_ECX[1] + param_2 * *in_ECX + param_14 * in_ECX[3];
  param_1[1] = in_ECX[3] * param_15 + param_11 * in_ECX[2] + param_7 * in_ECX[1] + param_3 * *in_ECX
  ;
  param_1[2] = in_ECX[3] * param_16 + param_12 * in_ECX[2] + param_8 * in_ECX[1] + *in_ECX * param_4
  ;
  param_1[3] = in_ECX[3] * param_17 + param_13 * in_ECX[2] + param_9 * in_ECX[1] + *in_ECX * param_5
  ;
  param_1[4] = in_ECX[7] * param_14 +
               in_ECX[6] * param_10 + in_ECX[5] * param_6 + in_ECX[4] * param_2;
  param_1[5] = in_ECX[7] * param_15 +
               in_ECX[6] * param_11 + in_ECX[5] * param_7 + in_ECX[4] * param_3;
  param_1[6] = in_ECX[7] * param_16 +
               in_ECX[6] * param_12 + in_ECX[5] * param_8 + in_ECX[4] * param_4;
  param_1[7] = in_ECX[7] * param_17 +
               in_ECX[6] * param_13 + in_ECX[5] * param_9 + in_ECX[4] * param_5;
  param_1[8] = in_ECX[0xb] * param_14 +
               in_ECX[10] * param_10 + in_ECX[9] * param_6 + in_ECX[8] * param_2;
  param_1[9] = in_ECX[0xb] * param_15 +
               in_ECX[10] * param_11 + in_ECX[9] * param_7 + in_ECX[8] * param_3;
  param_1[10] = in_ECX[0xb] * param_16 +
                in_ECX[10] * param_12 + in_ECX[9] * param_8 + in_ECX[8] * param_4;
  param_1[0xb] = in_ECX[0xb] * param_17 +
                 in_ECX[10] * param_13 + in_ECX[9] * param_9 + in_ECX[8] * param_5;
  param_1[0xc] = param_10 * in_ECX[0xe] + in_ECX[0xc] * param_2 + in_ECX[0xd] * param_6 +
                 in_ECX[0xf] * param_14;
  param_1[0xd] = in_ECX[0xf] * param_15 +
                 in_ECX[0xe] * param_11 + in_ECX[0xd] * param_7 + param_3 * in_ECX[0xc];
  param_1[0xe] = in_ECX[0xf] * param_16 +
                 in_ECX[0xe] * param_12 + in_ECX[0xd] * param_8 + in_ECX[0xc] * param_4;
  param_1[0xf] = in_ECX[0xf] * param_17 +
                 in_ECX[0xe] * param_13 + in_ECX[0xd] * param_9 + in_ECX[0xc] * param_5;
  return;
}


// ==== 10111520 FUN_10111520

void FUN_10111520(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float param_9,float param_10,
                 float param_11,float param_12,float param_13,float param_14,float param_15,
                 float param_16)

{
  float *in_ECX;
  int iVar1;
  float *pfVar2;
  float local_40 [4];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_40[0] = param_9 * in_ECX[2] + param_5 * in_ECX[1] + param_1 * *in_ECX + param_13 * in_ECX[3]
  ;
  local_40[1] = in_ECX[3] * param_14 +
                param_10 * in_ECX[2] + param_6 * in_ECX[1] + param_2 * *in_ECX;
  local_40[2] = in_ECX[3] * param_15 +
                param_11 * in_ECX[2] + param_7 * in_ECX[1] + *in_ECX * param_3;
  local_40[3] = in_ECX[3] * param_16 +
                param_12 * in_ECX[2] + param_8 * in_ECX[1] + *in_ECX * param_4;
  local_30 = param_13 * in_ECX[7] + in_ECX[6] * param_9 + param_1 * in_ECX[4] + in_ECX[5] * param_5;
  local_2c = param_14 * in_ECX[7] + in_ECX[6] * param_10 + param_2 * in_ECX[4] + in_ECX[5] * param_6
  ;
  local_28 = param_15 * in_ECX[7] + in_ECX[6] * param_11 + param_3 * in_ECX[4] + in_ECX[5] * param_7
  ;
  local_24 = param_16 * in_ECX[7] + in_ECX[6] * param_12 + param_4 * in_ECX[4] + in_ECX[5] * param_8
  ;
  local_20 = param_13 * in_ECX[0xb] +
             in_ECX[10] * param_9 + param_1 * in_ECX[8] + in_ECX[9] * param_5;
  local_1c = param_14 * in_ECX[0xb] +
             in_ECX[10] * param_10 + param_2 * in_ECX[8] + in_ECX[9] * param_6;
  local_18 = param_15 * in_ECX[0xb] +
             in_ECX[10] * param_11 + param_3 * in_ECX[8] + in_ECX[9] * param_7;
  local_14 = param_16 * in_ECX[0xb] +
             in_ECX[10] * param_12 + param_4 * in_ECX[8] + in_ECX[9] * param_8;
  local_10 = param_9 * in_ECX[0xe] + in_ECX[0xd] * param_5 + in_ECX[0xc] * param_1 +
             in_ECX[0xf] * param_13;
  local_c = param_14 * in_ECX[0xf] +
            in_ECX[0xe] * param_10 + in_ECX[0xd] * param_6 + in_ECX[0xc] * param_2;
  local_8 = param_15 * in_ECX[0xf] +
            in_ECX[0xe] * param_11 + param_3 * in_ECX[0xc] + in_ECX[0xd] * param_7;
  local_4 = param_16 * in_ECX[0xf] +
            in_ECX[0xe] * param_12 + param_4 * in_ECX[0xc] + in_ECX[0xd] * param_8;
  pfVar2 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *pfVar2;
    pfVar2 = pfVar2 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 10111860 FUN_10111860

undefined4 FUN_10111860(float *param_1)

{
  int in_ECX;
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = in_ECX - (int)param_1;
  do {
    iVar2 = 0;
    pfVar1 = param_1;
    do {
      if (*pfVar1 != *(float *)(iVar3 + (int)pfVar1)) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      pfVar1 = pfVar1 + 1;
    } while (iVar2 < 4);
    iVar4 = iVar4 + 1;
    param_1 = param_1 + 4;
  } while (iVar4 < 4);
  return 1;
}


// ==== 101118c0 FUN_101118c0

bool FUN_101118c0(FMatrix *param_1)

{
  int iVar1;
  FMatrix *in_ECX;
  
  iVar1 = FMatrix::operator==(in_ECX,param_1);
  return iVar1 == 0;
}


// ==== 101118e0 FUN_101118e0

void FUN_101118e0(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = in_ECX[0xc] * param_2[3] +
             in_ECX[8] * param_2[2] + *param_2 * *in_ECX + in_ECX[4] * param_2[1];
  param_1[1] = in_ECX[0xd] * param_2[3] +
               in_ECX[9] * param_2[2] + in_ECX[5] * param_2[1] + in_ECX[1] * *param_2;
  param_1[2] = in_ECX[0xe] * param_2[3] +
               in_ECX[10] * param_2[2] + in_ECX[6] * param_2[1] + in_ECX[2] * *param_2;
  param_1[3] = in_ECX[0xf] * param_2[3] +
               in_ECX[0xb] * param_2[2] + in_ECX[7] * param_2[1] + in_ECX[3] * *param_2;
  return;
}


// ==== 10111990 FUN_10111990

void FUN_10111990(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *in_ECX;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = in_ECX[1];
  fVar5 = in_ECX[5];
  fVar6 = in_ECX[9];
  fVar7 = in_ECX[0xd];
  fVar8 = in_ECX[2];
  fVar9 = in_ECX[6];
  fVar10 = in_ECX[10];
  fVar11 = in_ECX[0xe];
  *param_1 = fVar2 * in_ECX[4] + fVar1 * *in_ECX + fVar3 * in_ECX[8] + in_ECX[0xc];
  param_1[1] = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1 + fVar7;
  param_1[2] = fVar8 * fVar1 + fVar9 * fVar2 + fVar10 * fVar3 + fVar11;
  return;
}


// ==== 10111a50 FUN_10111a50

void FUN_10111a50(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *param_1 = fVar2 * in_ECX[4] + fVar1 * *in_ECX + fVar3 * in_ECX[8] + in_ECX[0xc] * 0.0;
  param_1[1] = in_ECX[0xd] * 0.0 + in_ECX[9] * fVar3 + in_ECX[5] * fVar2 + in_ECX[1] * fVar1;
  param_1[2] = in_ECX[0xe] * 0.0 + in_ECX[10] * fVar3 + in_ECX[6] * fVar2 + in_ECX[2] * fVar1;
  param_1[3] = fVar3 * in_ECX[0xb] + in_ECX[3] * fVar1 + in_ECX[7] * fVar2 + in_ECX[0xf] * 0.0;
  return;
}


// ==== 10111b30 FUN_10111b30

void FUN_10111b30(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[4];
  param_1[2] = in_ECX[8];
  param_1[3] = in_ECX[0xc];
  param_1[4] = in_ECX[1];
  param_1[5] = in_ECX[5];
  param_1[6] = in_ECX[9];
  param_1[7] = in_ECX[0xd];
  param_1[8] = in_ECX[2];
  param_1[9] = in_ECX[6];
  param_1[10] = in_ECX[10];
  param_1[0xb] = in_ECX[0xe];
  param_1[0xc] = in_ECX[3];
  param_1[0xd] = in_ECX[7];
  param_1[0xe] = in_ECX[0xb];
  param_1[0xf] = in_ECX[0xf];
  return;
}


// ==== 10111bb0 FUN_10111bb0

float10 FUN_10111bb0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_ECX;
  
  fVar1 = in_ECX[0xf] * in_ECX[10] - in_ECX[0xe] * in_ECX[0xb];
  fVar5 = in_ECX[6] * in_ECX[0xf] - in_ECX[7] * in_ECX[0xe];
  fVar4 = in_ECX[0xb] * in_ECX[6] - in_ECX[7] * in_ECX[10];
  fVar2 = in_ECX[2] * in_ECX[0xf] - in_ECX[0xe] * in_ECX[3];
  fVar3 = in_ECX[2] * in_ECX[0xb] - in_ECX[10] * in_ECX[3];
  fVar6 = in_ECX[2] * in_ECX[7] - in_ECX[6] * in_ECX[3];
  return (float10)((((in_ECX[0xd] * fVar4 + (in_ECX[5] * fVar1 - in_ECX[9] * fVar5)) * *in_ECX -
                    in_ECX[4] * (in_ECX[0xd] * fVar3 + (in_ECX[1] * fVar1 - in_ECX[9] * fVar2))) +
                   in_ECX[8] * (in_ECX[0xd] * fVar6 + (in_ECX[1] * fVar5 - in_ECX[5] * fVar2))) -
                  ((in_ECX[1] * fVar4 - in_ECX[5] * fVar3) + in_ECX[9] * fVar6) * in_ECX[0xc]);
}


// ==== 10111cb0 FUN_10111cb0

void FUN_10111cb0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  FMatrix *in_ECX;
  int iVar8;
  FMatrix *pFVar9;
  float *pfVar10;
  float fVar11;
  float local_40 [4];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar11 = FMatrix::Determinant(in_ECX);
  if (fVar11 == 0.0) {
    pFVar9 = &FMatrix::Identity;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *param_1 = *(float *)pFVar9;
      pFVar9 = pFVar9 + 4;
      param_1 = param_1 + 1;
    }
    return;
  }
  fVar11 = 1.0 / fVar11;
  fVar1 = *(float *)(in_ECX + 0x3c) * *(float *)(in_ECX + 0x28) -
          *(float *)(in_ECX + 0x38) * *(float *)(in_ECX + 0x2c);
  fVar2 = *(float *)(in_ECX + 0x18) * *(float *)(in_ECX + 0x3c) -
          *(float *)(in_ECX + 0x38) * *(float *)(in_ECX + 0x1c);
  fVar3 = *(float *)(in_ECX + 0x2c) * *(float *)(in_ECX + 0x18) -
          *(float *)(in_ECX + 0x28) * *(float *)(in_ECX + 0x1c);
  local_40[0] = fVar11 * (*(float *)(in_ECX + 0x34) * fVar3 +
                         (*(float *)(in_ECX + 0x14) * fVar1 - *(float *)(in_ECX + 0x24) * fVar2));
  fVar5 = *(float *)(in_ECX + 0x3c) * *(float *)(in_ECX + 8) -
          *(float *)(in_ECX + 0x38) * *(float *)(in_ECX + 0xc);
  fVar6 = *(float *)(in_ECX + 0x2c) * *(float *)(in_ECX + 8) -
          *(float *)(in_ECX + 0x28) * *(float *)(in_ECX + 0xc);
  fVar4 = -fVar11;
  local_40[1] = fVar4 * (fVar6 * *(float *)(in_ECX + 0x34) +
                        (*(float *)(in_ECX + 4) * fVar1 - *(float *)(in_ECX + 0x24) * fVar5));
  fVar7 = *(float *)(in_ECX + 0x1c) * *(float *)(in_ECX + 8) -
          *(float *)(in_ECX + 0x18) * *(float *)(in_ECX + 0xc);
  local_40[2] = (*(float *)(in_ECX + 0x34) * fVar7 +
                (*(float *)(in_ECX + 4) * fVar2 - *(float *)(in_ECX + 0x14) * fVar5)) * fVar11;
  local_40[3] = ((*(float *)(in_ECX + 4) * fVar3 - *(float *)(in_ECX + 0x14) * fVar6) +
                *(float *)(in_ECX + 0x24) * fVar7) * fVar4;
  local_30 = (*(float *)(in_ECX + 0x30) * fVar3 +
             (*(float *)(in_ECX + 0x10) * fVar1 - *(float *)(in_ECX + 0x20) * fVar2)) * fVar4;
  local_2c = ((*(float *)in_ECX * fVar1 - *(float *)(in_ECX + 0x20) * fVar5) +
             *(float *)(in_ECX + 0x30) * fVar6) * fVar11;
  local_28 = fVar4 * (*(float *)(in_ECX + 0x30) * fVar7 +
                     (*(float *)in_ECX * fVar2 - *(float *)(in_ECX + 0x10) * fVar5));
  local_24 = fVar11 * ((*(float *)in_ECX * fVar3 - *(float *)(in_ECX + 0x10) * fVar6) +
                      *(float *)(in_ECX + 0x20) * fVar7);
  fVar2 = *(float *)(in_ECX + 0x24) * *(float *)(in_ECX + 0x3c) -
          *(float *)(in_ECX + 0x2c) * *(float *)(in_ECX + 0x34);
  fVar3 = *(float *)(in_ECX + 0x3c) * *(float *)(in_ECX + 0x14) -
          *(float *)(in_ECX + 0x34) * *(float *)(in_ECX + 0x1c);
  fVar1 = *(float *)(in_ECX + 0x2c) * *(float *)(in_ECX + 0x14) -
          *(float *)(in_ECX + 0x24) * *(float *)(in_ECX + 0x1c);
  local_20 = (*(float *)(in_ECX + 0x30) * fVar1 +
             (*(float *)(in_ECX + 0x10) * fVar2 - *(float *)(in_ECX + 0x20) * fVar3)) * fVar11;
  fVar6 = *(float *)(in_ECX + 4) * *(float *)(in_ECX + 0x3c) -
          *(float *)(in_ECX + 0x34) * *(float *)(in_ECX + 0xc);
  fVar5 = *(float *)(in_ECX + 0x2c) * *(float *)(in_ECX + 4) -
          *(float *)(in_ECX + 0x24) * *(float *)(in_ECX + 0xc);
  local_1c = fVar4 * (*(float *)(in_ECX + 0x30) * fVar5 +
                     (*(float *)in_ECX * fVar2 - *(float *)(in_ECX + 0x20) * fVar6));
  fVar2 = *(float *)(in_ECX + 4) * *(float *)(in_ECX + 0x1c) -
          *(float *)(in_ECX + 0x14) * *(float *)(in_ECX + 0xc);
  local_18 = fVar11 * (*(float *)(in_ECX + 0x30) * fVar2 +
                      (*(float *)in_ECX * fVar3 - *(float *)(in_ECX + 0x10) * fVar6));
  local_14 = (fVar2 * *(float *)(in_ECX + 0x20) +
             (fVar1 * *(float *)in_ECX - *(float *)(in_ECX + 0x10) * fVar5)) * fVar4;
  fVar1 = *(float *)(in_ECX + 0x38) * *(float *)(in_ECX + 0x24) -
          *(float *)(in_ECX + 0x28) * *(float *)(in_ECX + 0x34);
  fVar3 = *(float *)(in_ECX + 0x38) * *(float *)(in_ECX + 0x14) -
          *(float *)(in_ECX + 0x18) * *(float *)(in_ECX + 0x34);
  local_10 = ((*(float *)(in_ECX + 0x10) * fVar1 - *(float *)(in_ECX + 0x20) * fVar3) +
             (*(float *)(in_ECX + 0x28) * *(float *)(in_ECX + 0x14) -
             *(float *)(in_ECX + 0x24) * *(float *)(in_ECX + 0x18)) * *(float *)(in_ECX + 0x30)) *
             fVar4;
  fVar2 = *(float *)(in_ECX + 0x38) * *(float *)(in_ECX + 4) -
          *(float *)(in_ECX + 0x34) * *(float *)(in_ECX + 8);
  local_c = fVar11 * ((*(float *)(in_ECX + 4) * *(float *)(in_ECX + 0x28) -
                      *(float *)(in_ECX + 0x24) * *(float *)(in_ECX + 8)) *
                      *(float *)(in_ECX + 0x30) +
                     (*(float *)in_ECX * fVar1 - *(float *)(in_ECX + 0x20) * fVar2));
  fVar1 = *(float *)(in_ECX + 0x18) * *(float *)(in_ECX + 4) -
          *(float *)(in_ECX + 0x14) * *(float *)(in_ECX + 8);
  local_8 = (*(float *)(in_ECX + 0x30) * fVar1 +
            (*(float *)in_ECX * fVar3 - *(float *)(in_ECX + 0x10) * fVar2)) * fVar4;
  local_4 = (((*(float *)(in_ECX + 0x28) * *(float *)(in_ECX + 0x14) -
              *(float *)(in_ECX + 0x24) * *(float *)(in_ECX + 0x18)) * *(float *)in_ECX -
             (*(float *)(in_ECX + 4) * *(float *)(in_ECX + 0x28) -
             *(float *)(in_ECX + 0x24) * *(float *)(in_ECX + 8)) * *(float *)(in_ECX + 0x10)) +
            *(float *)(in_ECX + 0x20) * fVar1) * fVar11;
  pfVar10 = local_40;
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *param_1 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 101120e0 FUN_101120e0

void FUN_101120e0(float *param_1)

{
  float *in_ECX;
  
  *param_1 = in_ECX[10] * in_ECX[5] - in_ECX[9] * in_ECX[6];
  param_1[1] = in_ECX[8] * in_ECX[6] - in_ECX[4] * in_ECX[10];
  param_1[2] = in_ECX[4] * in_ECX[9] - in_ECX[8] * in_ECX[5];
  param_1[3] = 0.0;
  param_1[4] = in_ECX[2] * in_ECX[9] - in_ECX[10] * in_ECX[1];
  param_1[5] = *in_ECX * in_ECX[10] - in_ECX[2] * in_ECX[8];
  param_1[6] = in_ECX[8] * in_ECX[1] - in_ECX[9] * *in_ECX;
  param_1[7] = 0.0;
  param_1[8] = in_ECX[6] * in_ECX[1] - in_ECX[2] * in_ECX[5];
  param_1[9] = in_ECX[2] * in_ECX[4] - in_ECX[6] * *in_ECX;
  param_1[10] = *in_ECX * in_ECX[5] - in_ECX[4] * in_ECX[1];
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xd] = 1.0;
  return;
}


// ==== 101121c0 FUN_101121c0

void FUN_101121c0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  
  uVar1 = in_ECX[4];
  uVar2 = in_ECX[8];
  param_1[3] = *in_ECX;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar1 = in_ECX[5];
  uVar2 = in_ECX[9];
  param_1[6] = in_ECX[1];
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  uVar1 = in_ECX[6];
  uVar2 = in_ECX[10];
  param_1[9] = in_ECX[2];
  param_1[10] = uVar1;
  param_1[0xb] = uVar2;
  uVar1 = in_ECX[0xd];
  uVar2 = in_ECX[0xe];
  *param_1 = in_ECX[0xc];
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}


// ==== 101122a0 FUN_101122a0

void FUN_101122a0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 101122c0 FUN_101122c0

void FUN_101122c0(float *param_1,undefined4 param_2)

{
  float fVar1;
  int in_ECX;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_1010f5b0(param_2);
  thunk_FUN_1010f5b0(param_2,param_2,&local_c);
  fVar1 = *(float *)(in_ECX + 0xc);
  *param_1 = local_18;
  param_1[1] = local_14;
  param_1[2] = local_10;
  param_1[3] = fVar1 - (local_4 * local_10 + local_18 * local_c + local_8 * local_14);
  return;
}


// ==== 10112350 FUN_10112350

float * FUN_10112350(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *in_ECX;
  float unaff_ESI;
  float *unaff_retaddr;
  float local_34;
  float local_30;
  FVector local_28 [24];
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  thunk_FUN_1010f5b0(param_2);
  local_4 = in_ECX[3];
  local_10 = local_4 * *in_ECX;
  local_c = in_ECX[1] * local_4;
  local_8 = in_ECX[2] * local_4;
  local_4 = local_4 * in_ECX[3];
  thunk_FUN_1010f510(param_2,&local_10,&local_34);
  pfVar4 = (float *)FVector::SafeNormal(local_28);
  fVar1 = pfVar4[1];
  fVar2 = *pfVar4;
  *unaff_retaddr = *pfVar4;
  unaff_retaddr[1] = pfVar4[1];
  fVar3 = pfVar4[2];
  unaff_retaddr[2] = pfVar4[2];
  unaff_retaddr[3] = fVar3 * local_30 + fVar2 * unaff_ESI + fVar1 * local_34;
  return unaff_retaddr;
}


// ==== 10112420 FUN_10112420

void FUN_10112420(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float *in_ECX;
  
  fVar1 = *in_ECX;
  fVar2 = in_ECX[1];
  fVar3 = in_ECX[2];
  fVar14 = fVar3 * param_2[8] + fVar2 * param_2[4] + fVar1 * *param_2 + param_2[0xc] * 0.0;
  fVar16 = param_2[0xd] * 0.0 + param_2[9] * fVar3 + fVar1 * param_2[1] + param_2[5] * fVar2;
  fVar15 = param_2[0xe] * 0.0 + fVar3 * param_2[10] + param_2[6] * fVar2 + param_2[2] * fVar1;
  fVar1 = *param_2;
  fVar2 = param_2[4];
  fVar3 = param_2[8];
  fVar4 = param_2[0xc];
  fVar5 = param_2[5];
  fVar6 = param_2[1];
  fVar7 = param_2[9];
  fVar8 = param_2[0xd];
  fVar9 = param_2[6];
  fVar10 = param_2[2];
  fVar11 = param_2[10];
  fVar12 = param_2[0xe];
  fVar13 = in_ECX[3];
  *param_1 = fVar14;
  param_1[1] = fVar16;
  param_1[2] = fVar15;
  param_1[3] = fVar13 - ((fVar10 * 0.0 + fVar9 * 0.0 + fVar11 * 0.0 + fVar12) * fVar15 +
                        (fVar3 * 0.0 + fVar2 * 0.0 + fVar1 * 0.0 + fVar4) * fVar14 +
                        (fVar7 * 0.0 + fVar6 * 0.0 + fVar5 * 0.0 + fVar8) * fVar16);
  return;
}


// ==== 10112580 FUN_10112580

void FUN_10112580(FMatrix *param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  float unaff_ESI;
  float fVar3;
  float *unaff_retaddr;
  float local_20;
  float local_1c;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_20 = *in_ECX;
  local_1c = in_ECX[1];
  fVar3 = in_ECX[2];
  local_10 = local_1c * param_3[4] + local_20 * *param_3 + fVar3 * param_3[8] + param_3[0xc] * 0.0;
  local_c = param_3[0xd] * 0.0 + param_3[9] * fVar3 + param_3[5] * local_1c + param_3[1] * local_20;
  local_8 = param_3[0xe] * 0.0 + param_3[10] * fVar3 + param_3[6] * local_1c + param_3[2] * local_20
  ;
  local_4 = fVar3 * param_3[0xb] + param_3[3] * local_20 + param_3[7] * local_1c +
            param_3[0xf] * 0.0;
  FVector::SafeNormal((FVector *)&local_10);
  fVar3 = FMatrix::Determinant(param_1);
  if (fVar3 < 0.0) {
    unaff_ESI = unaff_ESI * -1.0;
    local_20 = local_20 * -1.0;
    local_1c = local_1c * -1.0;
  }
  fVar3 = in_ECX[3];
  fVar1 = *in_ECX;
  *unaff_retaddr = unaff_ESI;
  fVar1 = fVar3 * fVar1;
  unaff_retaddr[1] = local_20;
  unaff_retaddr[2] = local_1c;
  fVar2 = in_ECX[1] * fVar3;
  fVar3 = fVar3 * in_ECX[2];
  unaff_retaddr[3] =
       (fVar3 * *(float *)(param_1 + 0x28) +
        *(float *)(param_1 + 0x18) * fVar2 + *(float *)(param_1 + 8) * fVar1 +
       *(float *)(param_1 + 0x38)) * local_1c +
       (fVar2 * *(float *)(param_1 + 0x10) + fVar1 * *(float *)param_1 +
        fVar3 * *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x30)) * unaff_ESI +
       (*(float *)(param_1 + 0x24) * fVar3 +
        *(float *)(param_1 + 4) * fVar1 + *(float *)(param_1 + 0x14) * fVar2 +
       *(float *)(param_1 + 0x34)) * local_20;
  return;
}


// ==== 101127c0 FUN_101127c0

float * FUN_101127c0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *in_ECX;
  double dVar12;
  
  fVar1 = *in_ECX;
  fVar2 = in_ECX[1];
  fVar3 = in_ECX[2];
  fVar4 = param_2[5];
  fVar5 = param_2[1];
  fVar6 = param_2[9];
  fVar7 = param_2[0xd];
  fVar8 = param_2[6];
  fVar9 = param_2[2];
  fVar10 = param_2[10];
  fVar11 = param_2[0xe];
  *param_1 = param_2[0xc] + fVar3 * param_2[8] + fVar2 * param_2[4] + fVar1 * *param_2;
  param_1[1] = fVar6 * fVar3 + fVar1 * fVar5 + fVar4 * fVar2 + fVar7;
  param_1[2] = fVar2 * fVar8 + fVar9 * fVar1 + fVar10 * fVar3 + fVar11;
  fVar1 = param_2[6] * param_2[6] + param_2[4] * param_2[4] + param_2[5] * param_2[5];
  fVar2 = param_2[10] * param_2[10] + param_2[8] * param_2[8] + param_2[9] * param_2[9];
  if ((uint)fVar1 < (uint)fVar2) {
    fVar1 = fVar2;
  }
  fVar2 = param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1];
  if ((uint)fVar1 <= (uint)fVar2) {
    fVar1 = fVar2;
  }
  dVar12 = appSqrt((double)fVar1);
  param_1[3] = (float)dVar12 * in_ECX[3];
  return param_1;
}


// ==== 101129b0 FUN_101129b0

void FUN_101129b0(ushort *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = L2ThreadBase::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[4] = 0;
  appStrncpy((ushort *)(in_ECX + 5),param_1,0x40);
  in_ECX[0x25] = 0;
  return;
}


// ==== 10112a00 FUN_10112a00

void FUN_10112a00(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = L2ThreadBase::vftable;
  return;
}


// ==== 10112a10 FUN_10112a10

undefined4 FUN_10112a10(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 8);
}


// ==== 10112a20 FUN_10112a20

undefined4 FUN_10112a20(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


// ==== 10112a30 FUN_10112a30

undefined4 FUN_10112a30(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}


// ==== 10112a40 FUN_10112a40

undefined4 FUN_10112a40(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x10);
}


// ==== 10112a50 FUN_10112a50

void FUN_10112a50(int param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *in_ECX = L2ThreadBase::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0x14);
  puVar3 = in_ECX + 5;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ECX[0x25] = *(undefined4 *)(param_1 + 0x94);
  return;
}


// ==== 10112ab0 FUN_10112ab0

void FUN_10112ab0(int param_1)

{
  int in_ECX;
  undefined2 *puVar1;
  int iVar2;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  puVar1 = (undefined2 *)(in_ECX + 0x14);
  iVar2 = 0x40;
  do {
    *puVar1 = *(undefined2 *)((param_1 - in_ECX) + (int)puVar1);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  return;
}


// ==== 10112b50 FUN_10112b50

undefined4 * FUN_10112b50(byte param_1)

{
  undefined4 *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x98,in_ECX[-1],L2ThreadBase::~L2ThreadBase);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -1);
    }
    return in_ECX + -1;
  }
  *in_ECX = L2ThreadBase::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  return in_ECX;
}


// ==== 10112bd0 FUN_10112bd0

void FUN_10112bd0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = L2ThreadInterface::vftable;
  return;
}


// ==== 10112be0 FUN_10112be0

void FUN_10112be0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = L2ThreadInterface::vftable;
  return;
}


// ==== 10112bf0 FUN_10112bf0

void FUN_10112bf0(void)

{
  return;
}


// ==== 10112c00 FUN_10112c00

void FUN_10112c00(undefined4 *param_1)

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


// ==== 10112c20 FUN_10112c20

undefined4 FUN_10112c20(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x2c4);
}


// ==== 10112c30 FUN_10112c30

void FUN_10112c30(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *in_ECX = L2ThreadUtil::vftable;
  iVar1 = 8;
  puVar2 = param_1;
  puVar3 = in_ECX;
  while( true ) {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    *puVar3 = *puVar2;
  }
  puVar2 = param_1 + 9;
  puVar3 = in_ECX + 9;
  for (iVar1 = 0xa8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ECX[0xb1] = param_1[0xb1];
  in_ECX[0xb2] = param_1[0xb2];
  return;
}


// ==== 10112c90 FUN_10112c90

void FUN_10112c90(int param_1)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(param_1 + 0x20);
  puVar2 = (undefined4 *)(param_1 + 0x24);
  puVar3 = (undefined4 *)(in_ECX + 0x24);
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x78);
  puVar3 = (undefined4 *)(in_ECX + 0x78);
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xcc);
  puVar3 = (undefined4 *)(in_ECX + 0xcc);
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x120);
  puVar3 = (undefined4 *)(in_ECX + 0x120);
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x174);
  puVar3 = (undefined4 *)(in_ECX + 0x174);
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x1c8);
  puVar3 = (undefined4 *)(in_ECX + 0x1c8);
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x21c);
  puVar3 = (undefined4 *)(in_ECX + 0x21c);
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x270);
  puVar3 = (undefined4 *)(in_ECX + 0x270);
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(in_ECX + 0x2c4) = *(undefined4 *)(param_1 + 0x2c4);
  *(undefined4 *)(in_ECX + 0x2c8) = *(undefined4 *)(param_1 + 0x2c8);
  return;
}


// ==== 10112db0 FUN_10112db0

void FUN_10112db0(byte param_1)

{
  L2ThreadUtil *in_ECX;
  
  L2ThreadUtil::~L2ThreadUtil(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  return;
}


// ==== 10112de0 FUN_10112de0

L2ThreadUtil * FUN_10112de0(byte param_1)

{
  L2ThreadUtil *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x2cc,*(int *)(in_ECX + -4),L2ThreadUtil::~L2ThreadUtil);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  L2ThreadUtil::~L2ThreadUtil(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  return in_ECX;
}


// ==== 10112e60 FUN_10112e60

void FUN_10112e60(int *param_1)

{
  undefined4 *in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b69b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = FArchive::vftable;
  in_ECX[1] = 0x7b;
  in_ECX[2] = 2000;
  in_ECX[3] = 0x1e;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 1;
  in_ECX[9] = 1;
  in_ECX[10] = 1;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0xffffffff;
  local_4 = 0;
  *in_ECX = FArchiveCountMem::vftable;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  (**(code **)(*param_1 + 0x2c))();
  ExceptionList = in_ECX;
  return;
}


// ==== 10112f20 FUN_10112f20

undefined4 FUN_10112f20(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x38);
}


// ==== 10112f30 FUN_10112f30

undefined4 FUN_10112f30(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x3c);
}


// ==== 10112f40 FUN_10112f40

void FUN_10112f40(int param_1,int param_2)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + param_1;
  *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + param_2;
  return;
}


// ==== 10112f60 FUN_10112f60

void FUN_10112f60(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = FArchive::vftable;
  return;
}


// ==== 10112fb0 FUN_10112fb0

void FUN_10112fb0(FArchive *param_1)

{
  FArchive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b69f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArchive::FArchive(in_ECX,param_1);
  *(undefined ***)in_ECX = FArchiveCountMem::vftable;
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  ExceptionList = local_c;
  return;
}


// ==== 10113030 FUN_10113030

void FUN_10113030(int param_1)

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
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return;
}


// ==== 101130b0 FUN_101130b0

void FUN_101130b0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b6a18;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  *in_ECX = FArchive::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10113120 FUN_10113120

undefined4 * FUN_10113120(byte param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6a38;
  local_c = ExceptionList;
  if ((param_1 & 2) != 0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_(in_ECX,0x40,in_ECX[-1],FArchiveCountMem::~FArchiveCountMem);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -1);
    }
    ExceptionList = local_c;
    return in_ECX + -1;
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  *in_ECX = FArchive::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  ExceptionList = local_c;
  return in_ECX;
}


// ==== 101131f0 FUN_101131f0

void FUN_101131f0(undefined4 *param_1)

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


// ==== 10113210 FUN_10113210

void FUN_10113210(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ECX = *param_1;
    param_1 = param_1 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}


// ==== 10113230 FUN_10113230

void FUN_10113230(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  return;
}


// ==== 10113250 FUN_10113250

uint FUN_10113250(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 4) & 0xffff;
}


// ==== 10113260 FUN_10113260

undefined2 FUN_10113260(void)

{
  int in_ECX;
  
  return *(undefined2 *)(in_ECX + 6);
}


// ==== 10113270 FUN_10113270

void FUN_10113270(uint param_1,int param_2)

{
  int in_ECX;
  
  if (*(int *)(GSys + 0x38) == 0) {
    *(uint *)(in_ECX + 4) = param_1;
    return;
  }
  *(uint *)(in_ECX + 4) = param_2 << 0x10 | param_1;
  return;
}


// ==== 101132a0 FUN_101132a0

UClass * FUN_101132a0(void)

{
  return &ULinker::PrivateStaticClass;
}


// ==== 101132b0 FUN_101132b0

void FUN_101132b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject(&ULinker::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 101132f0 FUN_101132f0

undefined4 FUN_101132f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10113300 FUN_10113300

UClass * FUN_10113300(void)

{
  return &ULinkerLoad::PrivateStaticClass;
}


// ==== 10113310 FUN_10113310

void FUN_10113310(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&ULinkerLoad::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 10113350 FUN_10113350

undefined4 FUN_10113350(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 10113360 FUN_10113360

void FUN_10113360(void)

{
  int *in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x10113365. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x28))();
  return;
}


// ==== 10113370 FUN_10113370

uint FUN_10113370(undefined4 *param_1)

{
  FArchive *pFVar1;
  UObject *pUVar2;
  uint in_ECX;
  FCompactIndex *pFVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b6a50;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  pFVar3 = (FCompactIndex *)&local_18;
  ExceptionList = &local_10;
  pFVar1 = ULinkerLoad::GetReader((ULinkerLoad *)(in_ECX - 0xc0));
  operator<<(pFVar1,pFVar3);
  pUVar2 = ULinkerLoad::IndexToObject((ULinkerLoad *)(in_ECX - 0xc0),local_18);
  *param_1 = pUVar2;
  ExceptionList = local_10;
  return -(uint)(in_ECX != 0xc0) & in_ECX;
}


// ==== 101133e9 Catch@101133e9

void Catch_101133e9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 101133fd Catch@101133fd

void Catch_101133fd(void)

{
  int *piVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101cdb60,L"ULinkerLoad<<UObject");
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  uVar2 = (**(code **)(*piVar1 + 0x28))();
  puVar3 = UObject::GetFullName((UObject *)(piVar1 + -0x30),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s %i))",puVar3,uVar2);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10113480 FUN_10113480

UClass * FUN_10113480(void)

{
  return &UTextBufferFactory::PrivateStaticClass;
}


// ==== 10113490 FUN_10113490

void FUN_10113490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UTextBufferFactory::PrivateStaticClass,param_2,param_3,param_4,0,GError,0,0);
  return;
}


// ==== 101134d0 FUN_101134d0

undefined4 FUN_101134d0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 101134e0 FUN_101134e0

void FUN_101134e0(UTextBufferFactory *param_1)

{
  if (param_1 != (UTextBufferFactory *)0x0) {
    UTextBufferFactory::UTextBufferFactory(param_1);
    return;
  }
  return;
}


// ==== 10113500 FUN_10113500

void FUN_10113500(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10113560 FUN_10113560

void FUN_10113560(undefined4 param_1)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,4);
  return;
}


// ==== 10113590 FUN_10113590

void FUN_10113590(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 101135e0 FUN_101135e0

void FUN_101135e0(undefined4 param_1)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6aa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = param_1;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,2);
  ExceptionList = local_c;
  return;
}


// ==== 10113650 FUN_10113650

void FUN_10113650(void)

{
  return;
}


// ==== 101136a0 FUN_101136a0

int FUN_101136a0(int param_1)

{
  int *in_ECX;
  
  return *in_ECX + param_1 * 2;
}


// ==== 101136b0 FUN_101136b0

int FUN_101136b0(int param_1)

{
  int *in_ECX;
  
  return *in_ECX + param_1 * 2;
}


// ==== 101136c0 FUN_101136c0

int FUN_101136c0(int param_1)

{
  int *in_ECX;
  
  if (in_ECX[1] <= param_1) {
    appFailAssert("c<ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x198);
  }
  return *in_ECX + -2 + (in_ECX[1] - param_1) * 2;
}


// ==== 10113710 FUN_10113710

int FUN_10113710(int param_1)

{
  int *in_ECX;
  
  return *in_ECX + -2 + (in_ECX[1] - param_1) * 2;
}


// ==== 10113730 FUN_10113730

void FUN_10113730(void)

{
  FArray *in_ECX;
  
  if (*(int *)(in_ECX + 8) != *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 4);
    FArray::Realloc(in_ECX,2);
  }
  return;
}


// ==== 10113750 FUN_10113750

undefined4 FUN_10113750(short *param_1,int *param_2)

{
  int *in_ECX;
  int iVar1;
  
  *param_2 = 0;
  if (0 < in_ECX[1]) {
    do {
      if (*(short *)(*in_ECX + *param_2 * 2) == *param_1) {
        return 1;
      }
      iVar1 = *param_2 + 1;
      *param_2 = iVar1;
    } while (iVar1 < in_ECX[1]);
  }
  return 0;
}


// ==== 101137a0 FUN_101137a0

int FUN_101137a0(short *param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  short *psVar2;
  
  iVar1 = 0;
  if (0 < (int)in_ECX[1]) {
    psVar2 = (short *)*in_ECX;
    do {
      if (*psVar2 == *param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 1;
    } while (iVar1 < (int)in_ECX[1]);
  }
  return -1;
}


// ==== 101137e0 FUN_101137e0

void FUN_101137e0(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x14))(*(int *)(in_ECX + 4) * 2,*(int *)(in_ECX + 8) * 2);
  return;
}


// ==== 10113810 FUN_10113810

int FUN_10113810(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  param_1 = iVar1 + param_1;
  *(int *)(in_ECX + 4) = param_1;
  if (*(int *)(in_ECX + 8) < param_1) {
    *(int *)(in_ECX + 8) = ((int)(param_1 * 3 + (param_1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + param_1;
    FArray::Realloc(in_ECX,2);
  }
  return iVar1;
}


// ==== 10113860 FUN_10113860

void FUN_10113860(int param_1,int param_2)

{
  FArray *in_ECX;
  
  FArray::Insert(in_ECX,param_1,param_2,2);
  return;
}


// ==== 10113880 FUN_10113880

void FUN_10113880(int param_1,int param_2)

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
  FArray::Remove(in_ECX,param_1,param_2,2);
  return;
}


// ==== 10113920 FUN_10113920

void FUN_10113920(undefined4 param_1)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,2);
  return;
}


// ==== 10113950 FUN_10113950

int FUN_10113950(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  FArray *in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,2);
  }
  *(undefined2 *)(*(int *)in_ECX + iVar2 * 2) = *param_1;
  return iVar2;
}


// ==== 101139b0 FUN_101139b0

void FUN_101139b0(int param_1)

{
  FArray *in_ECX;
  
  FArray::AddZeroed(in_ECX,2,param_1);
  return;
}


// ==== 101139d0 FUN_101139d0

int FUN_101139d0(short *param_1)

{
  int iVar1;
  int iVar2;
  FArray *in_ECX;
  short *psVar3;
  
  iVar1 = *(int *)(in_ECX + 4);
  iVar2 = 0;
  if (0 < iVar1) {
    psVar3 = *(short **)in_ECX;
    do {
      if (*psVar3 == *param_1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      psVar3 = psVar3 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = iVar1 + 1;
  *(int *)(in_ECX + 4) = iVar2;
  if (*(int *)(in_ECX + 8) < iVar2) {
    *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
    FArray::Realloc(in_ECX,2);
  }
  *(short *)(*(int *)in_ECX + iVar1 * 2) = *param_1;
  return iVar1;
}


// ==== 10113a50 FUN_10113a50

int FUN_10113a50(short *param_1)

{
  int iVar1;
  TArray<unsigned_short> *in_ECX;
  int iVar2;
  
  iVar1 = *(int *)(in_ECX + 4);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(short *)(*(int *)in_ECX + iVar2 * 2) == *param_1) {
        TArray<unsigned_short>::Remove(in_ECX,iVar2,1);
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  return iVar1 - *(int *)(in_ECX + 4);
}


// ==== 10113aa0 FUN_10113aa0

void FUN_10113aa0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10113b50 FUN_10113b50

void FUN_10113b50(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10113ba0 FUN_10113ba0

void FUN_10113ba0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10113bf0 FUN_10113bf0

int FUN_10113bf0(int param_1)

{
  int *in_ECX;
  
  return *in_ECX + param_1 * 4;
}


// ==== 10113c80 FUN_10113c80

void FUN_10113c80(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10113cd0 FUN_10113cd0

void FUN_10113cd0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10113d20 FUN_10113d20

void FUN_10113d20(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10113d70 FUN_10113d70

void FUN_10113d70(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10113dd0 FUN_10113dd0

void FUN_10113dd0(int param_1,int param_2)

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


// ==== 10113ec0 FUN_10113ec0

void FUN_10113ec0(int param_1,int param_2)

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
  FArray::Remove(in_ECX,param_1,param_2,1);
  return;
}


// ==== 10113f60 FUN_10113f60

void FUN_10113f60(undefined4 param_1)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,1);
  return;
}


// ==== 10113fa0 FUN_10113fa0

void FUN_10113fa0(int param_1,int param_2)

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


// ==== 101140f0 FUN_101140f0

void FUN_101140f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10114140 FUN_10114140

void FUN_10114140(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 101141a0 FUN_101141a0

void FUN_101141a0(int param_1,int param_2)

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


// ==== 10114240 FUN_10114240

void FUN_10114240(undefined4 param_1)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,4);
  return;
}


// ==== 101142d0 FUN_101142d0

void FUN_101142d0(void)

{
  UClass *pUVar1;
  int iVar2;
  int *in_ECX;
  
  if (*in_ECX != 0) {
    while( true ) {
      iVar2 = in_ECX[1];
      while (iVar2 != 0) {
        for (pUVar1 = *(UClass **)(in_ECX[1] + 0x24); pUVar1 != (UClass *)0x0;
            pUVar1 = *(UClass **)(pUVar1 + 0x34)) {
          if (pUVar1 == &UFunction::PrivateStaticClass) {
            return;
          }
        }
        iVar2 = *(int *)(in_ECX[1] + 0x38);
        in_ECX[1] = iVar2;
      }
      iVar2 = (**(code **)(*(int *)*in_ECX + 0x7c))();
      *in_ECX = iVar2;
      if (iVar2 == 0) break;
      in_ECX[1] = *(int *)(iVar2 + 0x48);
    }
  }
  return;
}


// ==== 10114340 FUN_10114340

void FUN_10114340(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  do {
    if (iVar1 == 0) {
      return;
    }
    iVar1 = in_ECX[1];
    while (iVar1 != 0) {
      if ((*(uint *)(*(int *)(in_ECX[1] + 0x24) + 0x4a4) & 0x8000) != 0) {
        return;
      }
      iVar1 = *(int *)(in_ECX[1] + 0x38);
      in_ECX[1] = iVar1;
    }
    iVar1 = (**(code **)(*(int *)*in_ECX + 0x7c))();
    *in_ECX = iVar1;
    if (iVar1 != 0) {
      in_ECX[1] = *(int *)(iVar1 + 0x48);
    }
    iVar1 = *in_ECX;
  } while( true );
}


// ==== 10114650 FUN_10114650

void FUN_10114650(undefined4 param_1)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,0xc);
  return;
}


// ==== 10114680 FUN_10114680

void FUN_10114680(undefined4 param_1)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,0xc);
  return;
}


// ==== 101146b0 FUN_101146b0

int FUN_101146b0(int param_1,int param_2,int param_3)

{
  if ((param_2 <= param_1) && (param_2 = param_3, param_1 < param_3)) {
    param_2 = param_1;
  }
  return param_2;
}


// ==== 101146f0 FUN_101146f0

int FUN_101146f0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = iVar2 + 1;
  *(int *)(param_2 + 4) = iVar1;
  if (*(int *)(param_2 + 8) < iVar1) {
    *(int *)(param_2 + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(param_2,0xc);
  }
  return *(int *)param_2 + iVar2 * 0xc;
}


// ==== 10114740 FUN_10114740

int FUN_10114740(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = iVar2 + 1;
  *(int *)(param_2 + 4) = iVar1;
  if (*(int *)(param_2 + 8) < iVar1) {
    *(int *)(param_2 + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(param_2,0xc);
  }
  return *(int *)param_2 + iVar2 * 0xc;
}


// ==== 101147b0 FUN_101147b0

float10 FUN_101147b0(float param_1,float param_2)

{
  if (param_2 < param_1 != (param_2 == param_1)) {
    return (float10)param_1;
  }
  return (float10)param_2;
}


// ==== 101147e0 FUN_101147e0

float10 FUN_101147e0(float param_1)

{
  if (param_1 < 0.0) {
    param_1 = -param_1;
  }
  return (float10)param_1;
}


// ==== 10114810 FUN_10114810

float10 FUN_10114810(float param_1,float param_2)

{
  if (param_1 <= param_2) {
    return (float10)param_1;
  }
  return (float10)param_2;
}


// ==== 101148f0 FUN_101148f0

int FUN_101148f0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = iVar2 + 1;
  *(int *)(param_2 + 4) = iVar1;
  if (*(int *)(param_2 + 8) < iVar1) {
    *(int *)(param_2 + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(param_2,8);
  }
  return *(int *)param_2 + iVar2 * 8;
}


// ==== 10114a30 FUN_10114a30

int FUN_10114a30(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = iVar2 + 1;
  *(int *)(param_2 + 4) = iVar1;
  if (*(int *)(param_2 + 8) < iVar1) {
    *(int *)(param_2 + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(param_2,4);
  }
  return *(int *)param_2 + iVar2 * 4;
}


// ==== 10114ad0 FUN_10114ad0

int FUN_10114ad0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = iVar2 + 1;
  *(int *)(param_2 + 4) = iVar1;
  if (*(int *)(param_2 + 8) < iVar1) {
    *(int *)(param_2 + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(param_2,0xc);
  }
  return *(int *)param_2 + iVar2 * 0xc;
}


// ==== 10114b20 FUN_10114b20

int FUN_10114b20(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = iVar2 + 1;
  *(int *)(param_2 + 4) = iVar1;
  if (*(int *)(param_2 + 8) < iVar1) {
    *(int *)(param_2 + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(param_2,0x44);
  }
  return *(int *)param_2 + iVar2 * 0x44;
}


// ==== 10114b70 FUN_10114b70

int FUN_10114b70(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = iVar2 + 1;
  *(int *)(param_2 + 4) = iVar1;
  if (*(int *)(param_2 + 8) < iVar1) {
    *(int *)(param_2 + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(param_2,4);
  }
  return *(int *)param_2 + iVar2 * 4;
}


// ==== 10114bc0 FUN_10114bc0

int FUN_10114bc0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = iVar2 + 1;
  *(int *)(param_2 + 4) = iVar1;
  if (*(int *)(param_2 + 8) < iVar1) {
    *(int *)(param_2 + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(param_2,8);
  }
  return *(int *)param_2 + iVar2 * 8;
}


// ==== 10114cb0 FUN_10114cb0

int FUN_10114cb0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = iVar2 + 1;
  *(int *)(param_2 + 4) = iVar1;
  if (*(int *)(param_2 + 8) < iVar1) {
    *(int *)(param_2 + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(param_2,0x1c);
  }
  return *(int *)param_2 + iVar2 * 0x1c;
}


// ==== 10114d10 FUN_10114d10

int FUN_10114d10(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = iVar2 + 1;
  *(int *)(param_2 + 4) = iVar1;
  if (*(int *)(param_2 + 8) < iVar1) {
    *(int *)(param_2 + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(param_2,0x24);
  }
  return *(int *)param_2 + iVar2 * 0x24;
}


// ==== 10114e50 FUN_10114e50

int FUN_10114e50(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = iVar2 + 1;
  *(int *)(param_2 + 4) = iVar1;
  if (*(int *)(param_2 + 8) < iVar1) {
    *(int *)(param_2 + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(param_2,0xc);
  }
  return *(int *)param_2 + iVar2 * 0xc;
}


// ==== 10114ea0 FUN_10114ea0

int FUN_10114ea0(undefined4 param_1,FArray *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = iVar2 + 1;
  *(int *)(param_2 + 4) = iVar1;
  if (*(int *)(param_2 + 8) < iVar1) {
    *(int *)(param_2 + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(param_2,0xc);
  }
  return *(int *)param_2 + iVar2 * 0xc;
}


// ==== 10114ef0 FUN_10114ef0

void FUN_10114ef0(int param_1,int param_2)

{
  byte *pbVar1;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 4))(param_1,(int)(param_2 + 7 + (param_2 + 7 >> 0x1f & 7U)) >> 3);
  if (in_ECX[4] != 0) {
    pbVar1 = (byte *)(((int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3) + param_1);
    *pbVar1 = *pbVar1 & ('\x01' << ((byte)param_2 & 7)) - 1U;
  }
  return;
}


// ==== 10114f50 FUN_10114f50

void FUN_10114f50(void)

{
  int *in_ECX;
  undefined4 uStack00000008;
  
  uStack00000008 = 4;
                    /* WARNING: Could not recover jumptable at 0x10114f67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 4))();
  return;
}


// ==== 10114f70 FUN_10114f70

void FUN_10114f70(int param_1,int param_2,int param_3)

{
  FArray *in_ECX;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  FArray::Insert(in_ECX,param_1,param_2,param_3);
  uVar2 = param_2 * param_3 & 3;
  puVar3 = (undefined4 *)(param_1 * param_3 + *(int *)in_ECX);
  for (uVar1 = (uint)(param_2 * param_3) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return;
}


// ==== 10114fd0 FUN_10114fd0

void FUN_10114fd0(ushort *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  if (*(ushort **)in_ECX != param_1) {
    if (*param_1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = appStrlen(param_1);
      iVar1 = iVar1 + 1;
    }
    *(int *)(in_ECX + 8) = iVar1;
    *(int *)(in_ECX + 4) = iVar1;
    FArray::Realloc(in_ECX,2);
    if (*(int *)(in_ECX + 4) != 0) {
      _memcpy(*(void **)in_ECX,param_1,*(int *)(in_ECX + 4) * 2);
    }
  }
  return;
}


// ==== 10115040 FUN_10115040

void FUN_10115040(void)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  FArray::Realloc(in_ECX,2);
  return;
}


// ==== 10115060 TArray<unsigned_short>::Remove thunk -> 10103c79

// ==== 10115070 FUN_10115070

bool FUN_10115070(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 4) < 1;
}


// ==== 10115090 FUN_10115090

void FUN_10115090(void)

{
  FArray *in_ECX;
  
  if (*(int *)(in_ECX + 8) != *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 4);
    FArray::Realloc(in_ECX,2);
  }
  return;
}


// ==== 101150b0 FUN_101150b0

undefined2 * FUN_101150b0(void)

{
  undefined4 *in_ECX;
  
  if (in_ECX[1] != 0) {
    return (undefined2 *)*in_ECX;
  }
  return &DAT_101cdd44;
}


// ==== 101150d0 FUN_101150d0

void FUN_101150d0(ushort *param_1)

{
  int iVar1;
  int iVar2;
  FArray *in_ECX;
  
  if (*param_1 != 0) {
    iVar1 = *(int *)(in_ECX + 4);
    iVar2 = appStrlen(param_1);
    if (iVar1 != 0) {
      *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + iVar2;
      iVar2 = *(int *)(in_ECX + 4);
      if (*(int *)(in_ECX + 8) < iVar2) {
        *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
        FArray::Realloc(in_ECX,2);
      }
      appStrcpy((ushort *)(*(int *)in_ECX + -2 + iVar1 * 2),param_1);
      return;
    }
    TArray<unsigned_short>::Add((TArray<unsigned_short> *)in_ECX,iVar2 + 1);
    appStrcpy(*(ushort **)in_ECX,param_1);
  }
  return;
}


// ==== 10115170 FUN_10115170

void FUN_10115170(short param_1)

{
  int iVar1;
  int iVar2;
  TArray<unsigned_short> *in_ECX;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(in_ECX + 4);
    if (iVar2 != 0) {
      iVar1 = iVar2 + 1;
      *(int *)(in_ECX + 4) = iVar1;
      if (*(int *)(in_ECX + 8) < iVar1) {
        *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
        FArray::Realloc((FArray *)in_ECX,2);
      }
      *(short *)(*(int *)in_ECX + -2 + iVar2 * 2) = param_1;
      *(undefined2 *)(*(int *)in_ECX + iVar2 * 2) = 0;
      return;
    }
    TArray<unsigned_short>::Add(in_ECX,2);
    **(short **)in_ECX = param_1;
    *(undefined2 *)(*(int *)in_ECX + 2) = 0;
  }
  return;
}


// ==== 10115200 FUN_10115200

void FUN_10115200(undefined4 *param_1)

{
  FString *in_ECX;
  
  if (param_1[1] != 0) {
    FString::operator+=(in_ECX,(ushort *)*param_1);
    return;
  }
  FString::operator+=(in_ECX,&DAT_101cdd44);
  return;
}


// ==== 10115230 FUN_10115230

void FUN_10115230(ushort *param_1)

{
  FString *in_ECX;
  
  if ((1 < *(int *)(in_ECX + 4)) &&
     (*(short *)(*(int *)in_ECX + -4 + *(int *)(in_ECX + 4) * 2) != 0x5c)) {
    FString::operator+=(in_ECX,(ushort *)&DAT_101ce154);
  }
  FString::operator+=(in_ECX,param_1);
  return;
}


// ==== 10115270 FUN_10115270

void FUN_10115270(undefined4 *param_1)

{
  FString *in_ECX;
  ushort *puVar1;
  
  if (param_1[1] == 0) {
    puVar1 = &DAT_101cdd44;
  }
  else {
    puVar1 = (ushort *)*param_1;
  }
  if ((1 < *(int *)(in_ECX + 4)) &&
     (*(short *)(*(int *)in_ECX + -4 + *(int *)(in_ECX + 4) * 2) != 0x5c)) {
    FString::operator+=(in_ECX,(ushort *)&DAT_101ce154);
  }
  FString::operator+=(in_ECX,puVar1);
  return;
}


// ==== 101152d0 FUN_101152d0

bool FUN_101152d0(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  if (in_ECX[1] == 0) {
    puVar1 = &DAT_101cdd44;
  }
  else {
    puVar1 = (ushort *)*in_ECX;
  }
  iVar2 = appStricmp(puVar1,param_1);
  return iVar2 < 1;
}


// ==== 10115310 FUN_10115310

bool FUN_10115310(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  if (in_ECX[1] == 0) {
    puVar1 = &DAT_101cdd44;
  }
  else {
    puVar1 = (ushort *)*in_ECX;
  }
  iVar2 = appStricmp(puVar1,param_1);
  return iVar2 < 0;
}


// ==== 10115350 FUN_10115350

bool FUN_10115350(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  if (in_ECX[1] == 0) {
    puVar1 = &DAT_101cdd44;
  }
  else {
    puVar1 = (ushort *)*in_ECX;
  }
  iVar2 = appStricmp(puVar1,param_1);
  return -1 < iVar2;
}


// ==== 10115390 FUN_10115390

bool FUN_10115390(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  if (in_ECX[1] == 0) {
    puVar1 = &DAT_101cdd44;
  }
  else {
    puVar1 = (ushort *)*in_ECX;
  }
  iVar2 = appStricmp(puVar1,param_1);
  return 0 < iVar2;
}


// ==== 101153d0 FUN_101153d0

bool FUN_101153d0(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  if (in_ECX[1] == 0) {
    puVar1 = &DAT_101cdd44;
  }
  else {
    puVar1 = (ushort *)*in_ECX;
  }
  iVar2 = appStricmp(puVar1,param_1);
  return iVar2 == 0;
}


// ==== 10115400 FUN_10115400

bool FUN_10115400(undefined4 *param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  ushort *puVar2;
  
  if (param_1[1] == 0) {
    puVar2 = &DAT_101cdd44;
  }
  else {
    puVar2 = (ushort *)*param_1;
  }
  if (in_ECX[1] != 0) {
    iVar1 = appStricmp((ushort *)*in_ECX,puVar2);
    return iVar1 == 0;
  }
  iVar1 = appStricmp(&DAT_101cdd44,puVar2);
  return iVar1 == 0;
}


// ==== 10115460 FUN_10115460

bool FUN_10115460(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  
  if (in_ECX[1] == 0) {
    puVar1 = &DAT_101cdd44;
  }
  else {
    puVar1 = (ushort *)*in_ECX;
  }
  iVar2 = appStricmp(puVar1,param_1);
  return iVar2 != 0;
}


// ==== 10115490 FUN_10115490

bool FUN_10115490(undefined4 *param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  ushort *puVar2;
  
  if (param_1[1] == 0) {
    puVar2 = &DAT_101cdd44;
  }
  else {
    puVar2 = (ushort *)*param_1;
  }
  if (in_ECX[1] != 0) {
    iVar1 = appStricmp((ushort *)*in_ECX,puVar2);
    return iVar1 != 0;
  }
  iVar1 = appStricmp(&DAT_101cdd44,puVar2);
  return iVar1 != 0;
}


// ==== 101154f0 FUN_101154f0

int FUN_101154f0(ushort *param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  int *in_ECX;
  int iVar4;
  
  if (param_2 == 0) {
    if (in_ECX[1] == 0) {
      puVar1 = &DAT_101cdd44;
    }
    else {
      puVar1 = (ushort *)*in_ECX;
    }
    puVar1 = appStrstr(puVar1,param_1);
    if (puVar1 == (ushort *)0x0) {
      return -1;
    }
    if (in_ECX[1] == 0) {
      return (int)(puVar1 + -0x80e6ea2) >> 1;
    }
    return (int)puVar1 - *in_ECX >> 1;
  }
  if (in_ECX[1] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = in_ECX[1] + -1;
  }
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      iVar4 = 0;
      if (*param_1 != 0) {
        puVar1 = (ushort *)(*in_ECX + iVar2 * 2);
        uVar3 = *param_1;
        do {
          if (*puVar1 != uVar3) break;
          uVar3 = param_1[iVar4 + 1];
          iVar4 = iVar4 + 1;
          puVar1 = puVar1 + 1;
        } while (uVar3 != 0);
      }
      if (param_1[iVar4] == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return -1;
}


// ==== 101155d0 FUN_101155d0

void FUN_101155d0(undefined4 *param_1,int param_2)

{
  FString *in_ECX;
  
  if (param_1[1] != 0) {
    FString::InStr(in_ECX,(ushort *)*param_1,param_2);
    return;
  }
  FString::InStr(in_ECX,&DAT_101cdd44,param_2);
  return;
}


// ==== 10115600 FUN_10115600

void FUN_10115600(ushort *param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  if ((param_1 != (ushort *)0x0) && (*(ushort **)in_ECX != param_1)) {
    if (*param_1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = appStrlen(param_1);
      iVar1 = iVar1 + 1;
    }
    *(int *)(in_ECX + 8) = iVar1;
    *(int *)(in_ECX + 4) = iVar1;
    FArray::Realloc(in_ECX,2);
    if (*(int *)(in_ECX + 4) != 0) {
      _memcpy(*(void **)in_ECX,param_1,*(int *)(in_ECX + 4) * 2);
    }
  }
  return;
}


// ==== 10115670 FUN_10115670

void FUN_10115670(FArray *param_1)

{
  undefined4 uVar1;
  FArray *in_ECX;
  undefined2 *_Src;
  
  if (in_ECX != param_1) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(in_ECX + 8) = uVar1;
    *(undefined4 *)(in_ECX + 4) = uVar1;
    FArray::Realloc(in_ECX,2);
    if (*(int *)(in_ECX + 4) != 0) {
      if (*(int *)(param_1 + 4) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)param_1;
      }
      _memcpy(*(void **)in_ECX,_Src,*(int *)(in_ECX + 4) * 2);
    }
  }
  return;
}


// ==== 101156d0 FUN_101156d0

void FUN_101156d0(void *param_1,size_t param_2)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x3c) < 0) {
    appFailAssert("Pos>=0","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",
                  0x6fa);
  }
  if (*(int *)(*(int *)(in_ECX + 0x38) + 4) < (int)(*(int *)(in_ECX + 0x3c) + param_2)) {
    appFailAssert("Pos+Num<=Bytes.Num()",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x6fb);
  }
  _memcpy(param_1,(void *)(**(int **)(in_ECX + 0x38) + *(int *)(in_ECX + 0x3c)),param_2);
  *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + param_2;
  return;
}


// ==== 10115760 FUN_10115760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10115760(void)

{
  int *in_ECX;
  
  return *(int *)(_Names + *in_ECX * 4) + 0xc;
}


// ==== 10115780 FUN_10115780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10115780(void)

{
  int *in_ECX;
  
  return *(undefined4 *)(*(int *)(_Names + *in_ECX * 4) + 4);
}


// ==== 101157a0 FUN_101157a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101157a0(uint param_1)

{
  uint *puVar1;
  int *in_ECX;
  
  puVar1 = (uint *)(*(int *)(_Names + *in_ECX * 4) + 4);
  *puVar1 = *puVar1 | param_1;
  return;
}


// ==== 101157c0 FUN_101157c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101157c0(uint param_1)

{
  uint *puVar1;
  int *in_ECX;
  
  puVar1 = (uint *)(*(int *)(_Names + *in_ECX * 4) + 4);
  *puVar1 = *puVar1 & ~param_1;
  return;
}


// ==== 101157e0 FUN_101157e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101157e0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  if (((-1 < iVar1) && (iVar1 < DAT_10327ae4)) && (*(int *)(_Names + iVar1 * 4) != 0)) {
    return 1;
  }
  return 0;
}


// ==== 10115810 FUN_10115810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

wchar_t * FUN_10115810(int param_1)

{
  if (FName::Initialized != 0) {
    return (wchar_t *)(*(int *)(_Names + param_1 * 4) + 0xc);
  }
  return L"Uninitialized";
}


// ==== 10115840 FUN_10115840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10115840(int param_1)

{
  if ((FName::Initialized != 0) && ((*(uint *)(*(int *)(_Names + param_1 * 4) + 4) & 0x1000) != 0))
  {
    return 1;
  }
  return 0;
}


// ==== 10115880 FUN_10115880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10115880(int param_1)

{
  return *(undefined4 *)(_Names + param_1 * 4);
}


// ==== 101158a0 FUN_101158a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_101158a0(void)

{
  int in_ECX;
  
  return *(int *)(_Names + *(int *)(in_ECX + 0x20) * 4) + 0xc;
}


// ==== 101158c0 FUN_101158c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101158c0(int param_1)

{
  return *(undefined4 *)(_GObjLoaders + param_1 * 4);
}


// ==== 101158e0 FUN_101158e0

int FUN_101158e0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  while( true ) {
    if (in_ECX == 0) {
      return 0;
    }
    iVar1 = *(int *)(in_ECX + 0xc);
    if ((iVar1 <= param_1) && (param_1 < *(int *)(in_ECX + 0x20) + iVar1)) break;
    in_ECX = *(int *)(in_ECX + 0x10);
  }
  return *(int *)(in_ECX + 0x1c) + (param_1 - iVar1) * 0xc;
}


// ==== 10115930 FUN_10115930

void FUN_10115930(UParamStack *param_1)

{
  if (param_1 != (UParamStack *)0x0) {
    UParamStack::UParamStack(param_1);
    return;
  }
  return;
}


// ==== 10115950 FUN_10115950

undefined4 FUN_10115950(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x34);
}


// ==== 10115960 FUN_10115960

ulong FUN_10115960(void)

{
  int iVar1;
  ulong uVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x40);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 0x44) != 0) {
    uVar2 = appStrCrc(*(ushort **)(iVar1 + 0x40));
    return uVar2;
  }
  uVar2 = appStrCrc(&DAT_101cdd44);
  return uVar2;
}


// ==== 101159a0 FUN_101159a0

undefined4 FUN_101159a0(int param_1)

{
  int in_ECX;
  
  while( true ) {
    if (in_ECX == 0) {
      return 0;
    }
    if (in_ECX == param_1) break;
    in_ECX = *(int *)(in_ECX + 0x34);
  }
  return 1;
}


// ==== 101159d0 FUN_101159d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * FUN_101159d0(void)

{
  ushort *puVar1;
  int in_ECX;
  
  puVar1 = appStaticString1024();
  appSprintf(puVar1,(ushort *)&DAT_101ce1a0,*(int *)(_Names + *(int *)(in_ECX + 0x20) * 4) + 0xc);
  return puVar1;
}


// ==== 10115a10 FUN_10115a10

undefined4 FUN_10115a10(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x34);
}


// ==== 10115a20 FUN_10115a20

undefined4 FUN_10115a20(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x34);
}


// ==== 10115a30 FUN_10115a30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * FUN_10115a30(void)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  undefined *puVar4;
  int in_ECX;
  
  puVar2 = appStaticString1024();
  iVar1 = in_ECX;
  do {
    if (iVar1 == 0) {
      puVar4 = &DAT_101ce1bc;
LAB_10115a6f:
      appSprintf(puVar2,(ushort *)L"%s%s",puVar4,
                 *(int *)(_Names + *(int *)(in_ECX + 0x20) * 4) + 0xc);
      return puVar2;
    }
    iVar3 = appStricmp((ushort *)(*(int *)(_Names + *(int *)(iVar1 + 0x20) * 4) + 0xc),
                       (ushort *)L"Actor");
    if (iVar3 == 0) {
      puVar4 = &DAT_101ce1ac;
      goto LAB_10115a6f;
    }
    iVar1 = *(int *)(iVar1 + 0x34);
  } while( true );
}


// ==== 10115ac0 FUN_10115ac0

void FUN_10115ac0(UClass *param_1,uint param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  FDependency *this;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b6c00;
  local_10 = ExceptionList;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  while( true ) {
    if (*(int *)(in_ECX + 0x4e0) <= iVar3) break;
    piVar2 = (int *)(*(int *)(in_ECX + 0x4dc) + iVar3 * 0xc);
    if ((UClass *)*piVar2 == param_1) {
      puVar1 = (uint *)(piVar2 + 1);
      *puVar1 = *puVar1 | param_2;
    }
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == *(int *)(in_ECX + 0x4e0)) {
    this = (FDependency *)thunk_FUN_10114740(0xc,in_ECX + 0x4dc);
    if (this != (FDependency *)0x0) {
      FDependency::FDependency(this,param_1,param_2);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 10115b49 Catch@10115b49

void Catch_10115b49(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10115b5d Catch@10115b5d

void Catch_10115b5d(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"UClass::AddDependency");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10115bb0 FUN_10115bb0

int FUN_10115bb0(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = in_ECX[0x13e];
  iVar2 = (**(code **)(*in_ECX + 0x78))();
  if (iVar1 != iVar2) {
    appFailAssert("Defaults.Num()==GetPropertiesSize()",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnClass.h",0x211);
  }
  return in_ECX[0x13d];
}


// ==== 10115c00 FUN_10115c00

undefined4 FUN_10115c00(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x4f8) == 0) {
    appFailAssert("Defaults.Num()",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnClass.h",0x218);
  }
  return *(undefined4 *)(in_ECX + 0x4f4);
}


// ==== 10115c40 FUN_10115c40

undefined4 FUN_10115c40(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x4f8) == 0) {
    appFailAssert("Defaults.Num()",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnClass.h",0x21f);
  }
  return *(undefined4 *)(in_ECX + 0x4f4);
}


// ==== 10115c80 FUN_10115c80

bool FUN_10115c80(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x24);
  while( true ) {
    if (iVar1 == 0) {
      return param_1 == 0;
    }
    if (iVar1 == param_1) break;
    iVar1 = *(int *)(iVar1 + 0x34);
  }
  return true;
}


// ==== 10115cc0 FUN_10115cc0

void FUN_10115cc0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *in_ECX;
  
  in_ECX[1] = param_2;
  in_ECX[2] = param_1;
  *in_ECX = FFrame::vftable;
  iVar1 = *(int *)(param_2 + 0x54);
  in_ECX[4] = param_4;
  in_ECX[3] = iVar1 + param_3;
  return;
}


// ==== 10115d00 FUN_10115d00

uint FUN_10115d00(uint param_1,uint param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  undefined2 uVar2;
  uint *puVar3;
  int in_ECX;
  
  if ((param_1 == *(uint *)(in_ECX + 8)) && (param_2 == *(uint *)(in_ECX + 0xc))) {
    *param_3 = *(undefined4 *)(in_ECX + 0x10);
    piVar1 = (int *)(*(int *)(in_ECX + 0x10) + 0x10);
    *piVar1 = *piVar1 + 0x1000000;
    return *(int *)(*(int *)(in_ECX + 0x10) + 8) + -1 + param_4 & ~(param_4 - 1U);
  }
  puVar3 = *(uint **)(in_ECX + 0x24 + (((param_1 >> 0xc ^ param_1) >> 0xc ^ param_1) & 0x3fff) * 4);
  while( true ) {
    if (puVar3 == (uint *)0x0) {
      return 0;
    }
    if ((*puVar3 == param_1) && (puVar3[1] == param_2)) break;
    puVar3 = (uint *)puVar3[7];
  }
  *(uint *)(in_ECX + 8) = param_1;
  *(uint **)(in_ECX + 0x10) = puVar3;
  *(uint *)(in_ECX + 0xc) = param_2;
  *param_3 = puVar3;
  uVar2 = *(undefined2 *)(in_ECX + 4);
  puVar3[4] = puVar3[4] + 0x1000000;
  *(undefined2 *)(puVar3 + 3) = uVar2;
  return (puVar3[2] - 1) + param_4 & ~(param_4 - 1U);
}


// ==== 10115de0 FUN_10115de0

void FUN_10115de0(void)

{
  int in_ECX;
  FMemStackStats *this;
  int iVar1;
  
  this = (FMemStackStats *)(in_ECX + 0x80);
  iVar1 = 7;
  do {
    FMemStackStats::FMemStackStats(this);
    this = this + 0xc;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}


// ==== 10115e10 FUN_10115e10

float10 FUN_10115e10(void)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  
  fVar1 = *in_ECX;
  fVar2 = in_ECX[1];
  if (fVar2 < fVar1 != (fVar2 == fVar1)) {
    fVar2 = fVar1;
  }
  fVar1 = in_ECX[2];
  if (fVar1 < fVar2 == (fVar1 == fVar2)) {
    return (float10)fVar1;
  }
  return (float10)fVar2;
}


// ==== 10115e80 FUN_10115e80

float10 FUN_10115e80(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  
  fVar1 = in_ECX[2];
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  fVar2 = in_ECX[1];
  if (fVar2 < 0.0) {
    fVar2 = -fVar2;
  }
  fVar3 = *in_ECX;
  if (fVar3 < 0.0) {
    fVar3 = -fVar3;
  }
  if (fVar2 < fVar3 != (fVar2 == fVar3)) {
    fVar2 = fVar3;
  }
  if (fVar1 < fVar2 == (fVar1 == fVar2)) {
    return (float10)fVar1;
  }
  return (float10)fVar2;
}


// ==== 10115f40 FUN_10115f40

float10 FUN_10115f40(void)

{
  float fVar1;
  float *in_ECX;
  
  fVar1 = in_ECX[1];
  if (*in_ECX <= fVar1) {
    fVar1 = *in_ECX;
  }
  if (in_ECX[2] < fVar1) {
    return (float10)in_ECX[2];
  }
  return (float10)fVar1;
}


// ==== 10115fb0 FUN_10115fb0

undefined4 FUN_10115fb0(void)

{
  float fVar1;
  float *in_ECX;
  
  fVar1 = *in_ECX;
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (fVar1 < 0.0001) {
    fVar1 = in_ECX[1];
    if (fVar1 < 0.0) {
      fVar1 = -fVar1;
    }
    if (fVar1 < 0.0001) {
      fVar1 = in_ECX[2];
      if (fVar1 < 0.0) {
        fVar1 = -fVar1;
      }
      if (fVar1 < 0.0001) {
        return 1;
      }
    }
  }
  return 0;
}


// ==== 10116060 FUN_10116060

void FUN_10116060(undefined4 *param_1)

{
  float fVar1;
  float *in_ECX;
  
  fVar1 = *in_ECX;
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (0.57 < fVar1) {
    *param_1 = 0;
    param_1[1] = 0x3f800000;
    param_1[2] = 0;
    return;
  }
  fVar1 = in_ECX[1];
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (0.57 < fVar1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0x3f800000;
    return;
  }
  *param_1 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ==== 10116100 FUN_10116100

void FUN_10116100(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  float local_c;
  float local_8;
  
  fVar1 = in_ECX[2];
  fVar2 = -param_2;
  local_8 = fVar2;
  if ((fVar2 <= fVar1) && (local_8 = fVar1, param_2 <= fVar1)) {
    local_8 = param_2;
  }
  fVar1 = in_ECX[1];
  local_c = fVar2;
  if ((fVar2 <= fVar1) && (local_c = fVar1, param_2 <= fVar1)) {
    local_c = param_2;
  }
  fVar1 = *in_ECX;
  if ((fVar1 < fVar2) || (fVar2 = param_2, param_2 <= fVar1)) {
    fVar1 = fVar2;
  }
  *param_1 = fVar1;
  param_1[1] = local_c;
  param_1[2] = local_8;
  return;
}


// ==== 10116220 FUN_10116220

void FUN_10116220(float *param_1)

{
  float *pfVar1;
  float *in_ECX;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  local_18 = *param_1 + *in_ECX;
  local_14 = param_1[1] + in_ECX[1];
  local_10 = param_1[2] + in_ECX[2];
  pfVar1 = (float *)FVector::BoundToCube((FVector *)&local_18,(float)local_c);
  *in_ECX = *pfVar1;
  in_ECX[1] = pfVar1[1];
  in_ECX[2] = pfVar1[2];
  return;
}


// ==== 10116290 FUN_10116290

undefined4 FUN_10116290(void)

{
  float fVar1;
  float *in_ECX;
  
  fVar1 = *in_ECX - in_ECX[1];
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (fVar1 < 0.0001) {
    fVar1 = in_ECX[1] - in_ECX[2];
    if (fVar1 < 0.0) {
      fVar1 = -fVar1;
    }
    if (fVar1 < 0.0001) {
      return 1;
    }
  }
  return 0;
}


// ==== 10116320 FUN_10116320

float10 FUN_10116320(void)

{
  float fVar1;
  float *in_ECX;
  int local_4;
  
  fVar1 = in_ECX[1] * *in_ECX * in_ECX[2];
  if (0.0 < fVar1) {
    return (float10)1;
  }
  local_4 = -1;
  if (0.0 <= fVar1) {
    local_4 = 0;
  }
  return (float10)local_4;
}


// ==== 10116380 FUN_10116380

void FUN_10116380(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  FCoords *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *local_4;
  
  puVar1 = (undefined4 *)FCoords::Transpose(in_ECX);
  puVar2 = (undefined4 *)FCoords::Transpose(in_ECX + 0x30);
  puVar4 = local_4;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = local_4 + 0xc;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}


// ==== 101163e0 FUN_101163e0

void FUN_101163e0(uint *param_1)

{
  uint uVar1;
  uint *in_ECX;
  
  *param_1 = *in_ECX & 0xfffc;
  uVar1 = in_ECX[2];
  param_1[1] = in_ECX[1] & 0xfffc;
  param_1[2] = uVar1 & 0xfffc;
  return;
}


// ==== 10116420 FUN_10116420

int * FUN_10116420(int *param_1)

{
  int *in_ECX;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = in_ECX[2];
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  iVar2 = in_ECX[1];
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  iVar1 = *in_ECX;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  *param_1 = iVar1 % 0xffff;
  param_1[1] = iVar2 % 0xffff;
  param_1[2] = iVar3 % 0xffff;
  return param_1;
}


// ==== 101164d3 Catch@101164d3

void Catch_101164d3(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101164e7 Catch@101164e7

void Catch_101164e7(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FRotator::Clamp");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10116540 FUN_10116540

void FUN_10116540(float param_1,float param_2)

{
  float fVar1;
  float *in_ECX;
  
  fVar1 = param_1;
  if (param_2 < param_1) {
    param_1 = param_2;
  }
  *in_ECX = param_1;
  if (fVar1 < param_2) {
    in_ECX[1] = param_2;
    return;
  }
  in_ECX[1] = fVar1;
  return;
}


// ==== 101165b0 FUN_101165b0

FRange * FUN_101165b0(FRange *param_1,float *param_2)

{
  float *in_ECX;
  
  FRange::FRange(param_1,*param_2 + *in_ECX,param_2[1] + in_ECX[1]);
  return param_1;
}


// ==== 10116600 FUN_10116600

FRange * FUN_10116600(FRange *param_1,float param_2)

{
  float *in_ECX;
  
  FRange::FRange(param_1,param_2 + *in_ECX,param_2 + in_ECX[1]);
  return param_1;
}


// ==== 10116650 FUN_10116650

FRange * FUN_10116650(FRange *param_1,float param_2)

{
  float *in_ECX;
  
  FRange::FRange(param_1,*in_ECX - param_2,in_ECX[1] - param_2);
  return param_1;
}


// ==== 101166a0 FUN_101166a0

FRange * FUN_101166a0(FRange *param_1,float *param_2)

{
  float *in_ECX;
  
  FRange::FRange(param_1,*in_ECX - *param_2,in_ECX[1] - param_2[1]);
  return param_1;
}


// ==== 101166f0 FUN_101166f0

FRange * FUN_101166f0(FRange *param_1,float param_2)

{
  float *in_ECX;
  
  FRange::FRange(param_1,param_2 * *in_ECX,param_2 * in_ECX[1]);
  return param_1;
}


// ==== 10116740 FUN_10116740

FRange * FUN_10116740(FRange *param_1,float param_2)

{
  float *in_ECX;
  
  FRange::FRange(param_1,(1.0 / param_2) * *in_ECX,(1.0 / param_2) * in_ECX[1]);
  return param_1;
}


// ==== 101167a0 FUN_101167a0

FRange * FUN_101167a0(FRange *param_1,float *param_2)

{
  float *in_ECX;
  
  FRange::FRange(param_1,*param_2 * *in_ECX,param_2[1] * in_ECX[1]);
  return param_1;
}


// ==== 101167f0 FUN_101167f0

FRange * FUN_101167f0(FRange *param_1)

{
  float *in_ECX;
  
  FRange::FRange(param_1,-*in_ECX,-in_ECX[1]);
  return param_1;
}


// ==== 10116820 FUN_10116820

float10 FUN_10116820(void)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  
  fVar1 = *in_ECX;
  fVar2 = in_ECX[1];
  if (fVar2 < fVar1 != (fVar2 == fVar1)) {
    return (float10)fVar1;
  }
  return (float10)fVar2;
}


// ==== 10116870 FUN_10116870

float10 FUN_10116870(void)

{
  float *in_ECX;
  
  if (*in_ECX <= in_ECX[1]) {
    return (float10)*in_ECX;
  }
  return (float10)in_ECX[1];
}


// ==== 101168c0 FUN_101168c0

float10 FUN_101168c0(void)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  
  fVar1 = *in_ECX;
  fVar2 = in_ECX[1];
  if (fVar2 < fVar1 != (fVar2 == fVar1)) {
    fVar2 = fVar1;
  }
  if (in_ECX[1] < *in_ECX) {
    return (float10)(fVar2 - in_ECX[1]);
  }
  return (float10)(fVar2 - *in_ECX);
}


// ==== 10116960 FUN_10116960

undefined4 FUN_10116960(void)

{
  float fVar1;
  float *in_ECX;
  
  fVar1 = *in_ECX;
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (fVar1 < 0.0001) {
    fVar1 = in_ECX[1];
    if (fVar1 < 0.0) {
      fVar1 = -fVar1;
    }
    if (fVar1 < 0.0001) {
      return 1;
    }
  }
  return 0;
}


// ==== 101169e0 FUN_101169e0

FRange * FUN_101169e0(FRange *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  float10 fVar1;
  float fVar2;
  
  fVar1 = (float10)thunk_FUN_1010c390(in_ECX[1],param_2[1]);
  fVar2 = (float)fVar1;
  fVar1 = (float10)thunk_FUN_1010c390(*in_ECX,*param_2);
  FRange::FRange(param_1,(float)fVar1,fVar2);
  return param_1;
}


// ==== 10116a40 FUN_10116a40

void FUN_10116a40(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_ECX;
  float local_18;
  float local_10;
  float local_8;
  
  fVar1 = in_ECX[4] + param_2[4];
  fVar2 = param_2[5] + in_ECX[5];
  local_8 = fVar2;
  if (fVar1 <= fVar2) {
    local_8 = fVar1;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = param_2[2] + in_ECX[2];
  fVar3 = param_2[3] + in_ECX[3];
  local_10 = fVar3;
  if (fVar1 <= fVar3) {
    local_10 = fVar1;
  }
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  fVar1 = *param_2 + *in_ECX;
  fVar4 = param_2[1] + in_ECX[1];
  local_18 = fVar4;
  if (fVar1 <= fVar4) {
    local_18 = fVar1;
  }
  if (fVar4 <= fVar1) {
    fVar4 = fVar1;
  }
  *param_1 = local_18;
  param_1[1] = fVar4;
  param_1[2] = local_10;
  param_1[3] = fVar3;
  param_1[4] = local_8;
  param_1[5] = fVar2;
  return;
}


// ==== 10116b90 FUN_10116b90

void FUN_10116b90(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_ECX;
  float local_18;
  float local_10;
  float local_8;
  
  fVar1 = in_ECX[4] - param_2[4];
  fVar2 = in_ECX[5] - param_2[5];
  local_8 = fVar2;
  if (fVar1 <= fVar2) {
    local_8 = fVar1;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = in_ECX[2] - param_2[2];
  fVar3 = in_ECX[3] - param_2[3];
  local_10 = fVar3;
  if (fVar1 <= fVar3) {
    local_10 = fVar1;
  }
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  fVar1 = *in_ECX - *param_2;
  fVar4 = in_ECX[1] - param_2[1];
  local_18 = fVar4;
  if (fVar1 <= fVar4) {
    local_18 = fVar1;
  }
  if (fVar4 <= fVar1) {
    fVar4 = fVar1;
  }
  *param_1 = local_18;
  param_1[1] = fVar4;
  param_1[2] = local_10;
  param_1[3] = fVar3;
  param_1[4] = local_8;
  param_1[5] = fVar2;
  return;
}


// ==== 10116ce0 FUN_10116ce0

void FUN_10116ce0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_ECX;
  float local_18;
  float local_10;
  float local_8;
  
  fVar1 = param_2[2] + in_ECX[4];
  fVar2 = param_2[2] + in_ECX[5];
  local_8 = fVar2;
  if (fVar1 <= fVar2) {
    local_8 = fVar1;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = param_2[1] + in_ECX[2];
  fVar3 = param_2[1] + in_ECX[3];
  local_10 = fVar3;
  if (fVar1 <= fVar3) {
    local_10 = fVar1;
  }
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  fVar1 = *param_2 + *in_ECX;
  fVar4 = *param_2 + in_ECX[1];
  local_18 = fVar4;
  if (fVar1 <= fVar4) {
    local_18 = fVar1;
  }
  if (fVar4 <= fVar1) {
    fVar4 = fVar1;
  }
  *param_1 = local_18;
  param_1[1] = fVar4;
  param_1[2] = local_10;
  param_1[3] = fVar3;
  param_1[4] = local_8;
  param_1[5] = fVar2;
  return;
}


// ==== 10116e50 FUN_10116e50

void FUN_10116e50(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_ECX;
  float local_18;
  float local_10;
  float local_8;
  
  fVar1 = in_ECX[4] - param_2[2];
  fVar2 = in_ECX[5] - param_2[2];
  local_8 = fVar2;
  if (fVar1 <= fVar2) {
    local_8 = fVar1;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = in_ECX[2] - param_2[1];
  fVar3 = in_ECX[3] - param_2[1];
  local_10 = fVar3;
  if (fVar1 <= fVar3) {
    local_10 = fVar1;
  }
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  fVar1 = *in_ECX - *param_2;
  fVar4 = in_ECX[1] - *param_2;
  local_18 = fVar4;
  if (fVar1 <= fVar4) {
    local_18 = fVar1;
  }
  if (fVar4 <= fVar1) {
    fVar4 = fVar1;
  }
  *param_1 = local_18;
  param_1[1] = fVar4;
  param_1[2] = local_10;
  param_1[3] = fVar3;
  param_1[4] = local_8;
  param_1[5] = fVar2;
  return;
}


// ==== 10116fc0 FUN_10116fc0

void FUN_10116fc0(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  float local_18;
  float local_10;
  float local_8;
  
  fVar1 = param_2 * in_ECX[2];
  fVar2 = in_ECX[3] * param_2;
  local_8 = fVar2;
  if (fVar1 <= fVar2) {
    local_8 = fVar1;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar3 = param_2 * in_ECX[2];
  fVar1 = in_ECX[3] * param_2;
  local_10 = fVar1;
  if (fVar3 <= fVar1) {
    local_10 = fVar3;
  }
  if (fVar1 <= fVar3) {
    fVar1 = fVar3;
  }
  fVar3 = *in_ECX * param_2;
  param_2 = param_2 * in_ECX[1];
  local_18 = param_2;
  if (fVar3 <= param_2) {
    local_18 = fVar3;
  }
  if (param_2 <= fVar3) {
    param_2 = fVar3;
  }
  *param_1 = local_18;
  param_1[1] = param_2;
  param_1[2] = local_10;
  param_1[3] = fVar1;
  param_1[4] = local_8;
  param_1[5] = fVar2;
  return;
}


// ==== 10117100 FUN_10117100

void FUN_10117100(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  float local_18;
  float local_10;
  float local_8;
  
  param_2 = 1.0 / param_2;
  fVar2 = param_2 * in_ECX[4];
  fVar1 = in_ECX[5] * param_2;
  local_8 = fVar1;
  if (fVar2 <= fVar1) {
    local_8 = fVar2;
  }
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  fVar2 = in_ECX[2] * param_2;
  fVar3 = in_ECX[3] * param_2;
  local_10 = fVar3;
  if (fVar2 <= fVar3) {
    local_10 = fVar2;
  }
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  fVar2 = *in_ECX * param_2;
  param_2 = param_2 * in_ECX[1];
  local_18 = param_2;
  if (fVar2 <= param_2) {
    local_18 = fVar2;
  }
  if (param_2 <= fVar2) {
    param_2 = fVar2;
  }
  *param_1 = local_18;
  param_1[1] = param_2;
  param_1[2] = local_10;
  param_1[3] = fVar3;
  param_1[4] = local_8;
  param_1[5] = fVar1;
  return;
}


// ==== 10117250 FUN_10117250

void FUN_10117250(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_ECX;
  float local_18;
  float local_10;
  float local_8;
  
  fVar1 = in_ECX[4] * param_2[4];
  fVar2 = param_2[5] * in_ECX[5];
  local_8 = fVar2;
  if (fVar1 <= fVar2) {
    local_8 = fVar1;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = param_2[2] * in_ECX[2];
  fVar3 = param_2[3] * in_ECX[3];
  local_10 = fVar3;
  if (fVar1 <= fVar3) {
    local_10 = fVar1;
  }
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  fVar1 = *param_2 * *in_ECX;
  fVar4 = param_2[1] * in_ECX[1];
  local_18 = fVar4;
  if (fVar1 <= fVar4) {
    local_18 = fVar1;
  }
  if (fVar4 <= fVar1) {
    fVar4 = fVar1;
  }
  *param_1 = local_18;
  param_1[1] = fVar4;
  param_1[2] = local_10;
  param_1[3] = fVar3;
  param_1[4] = local_8;
  param_1[5] = fVar2;
  return;
}


// ==== 101173a0 FUN_101173a0

void FUN_101173a0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_ECX;
  float local_18;
  float local_10;
  float local_8;
  
  fVar1 = -in_ECX[4];
  fVar2 = -in_ECX[5];
  local_8 = fVar2;
  if (fVar1 <= fVar2) {
    local_8 = fVar1;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = -in_ECX[2];
  fVar3 = -in_ECX[3];
  local_10 = fVar3;
  if (fVar1 <= fVar3) {
    local_10 = fVar1;
  }
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  fVar1 = -*in_ECX;
  fVar4 = -in_ECX[1];
  local_18 = fVar4;
  if (fVar1 <= fVar4) {
    local_18 = fVar1;
  }
  if (fVar4 <= fVar1) {
    fVar4 = fVar1;
  }
  *param_1 = local_18;
  param_1[1] = fVar4;
  param_1[2] = local_10;
  param_1[3] = fVar3;
  param_1[4] = local_8;
  param_1[5] = fVar2;
  return;
}


// ==== 101174e0 FUN_101174e0

void FUN_101174e0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_ECX;
  
  fVar1 = in_ECX[4];
  fVar2 = in_ECX[5];
  if (fVar2 < fVar1 != (fVar2 == fVar1)) {
    fVar2 = fVar1;
  }
  fVar1 = in_ECX[2];
  fVar3 = in_ECX[3];
  if (fVar3 < fVar1 != (fVar3 == fVar1)) {
    fVar3 = fVar1;
  }
  fVar1 = *in_ECX;
  fVar4 = in_ECX[1];
  if (fVar4 < fVar1 != (fVar4 == fVar1)) {
    fVar4 = fVar1;
  }
  *param_1 = fVar4;
  param_1[1] = fVar3;
  param_1[2] = fVar2;
  return;
}


// ==== 101175a0 FUN_101175a0

undefined4 FUN_101175a0(void)

{
  int iVar1;
  FRange *in_ECX;
  
  iVar1 = FRange::IsNearlyZero(in_ECX);
  if (iVar1 != 0) {
    iVar1 = FRange::IsNearlyZero(in_ECX + 8);
    if (iVar1 != 0) {
      iVar1 = FRange::IsNearlyZero(in_ECX + 0x10);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


// ==== 101175e0 FUN_101175e0

void FUN_101175e0(float *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *in_ECX;
  float10 fVar5;
  float local_18;
  float local_10;
  float local_8;
  
  fVar5 = (float10)thunk_FUN_1010c390(in_ECX[4],param_2[4]);
  fVar1 = (float)fVar5;
  fVar5 = (float10)thunk_FUN_1010c390(in_ECX[5],param_2[5]);
  fVar2 = (float)fVar5;
  local_8 = fVar2;
  if (fVar1 <= fVar2) {
    local_8 = fVar1;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar5 = (float10)thunk_FUN_1010c390(in_ECX[2],param_2[2]);
  fVar1 = (float)fVar5;
  fVar5 = (float10)thunk_FUN_1010c390(in_ECX[3],param_2[3]);
  fVar3 = (float)fVar5;
  local_10 = fVar3;
  if (fVar1 <= fVar3) {
    local_10 = fVar1;
  }
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  fVar5 = (float10)thunk_FUN_1010c390(*in_ECX,*param_2);
  fVar1 = (float)fVar5;
  fVar5 = (float10)thunk_FUN_1010c390(in_ECX[1],param_2[1]);
  fVar4 = (float)fVar5;
  local_18 = fVar4;
  if (fVar1 <= fVar4) {
    local_18 = fVar1;
  }
  if (fVar4 <= fVar1) {
    fVar4 = fVar1;
  }
  *param_1 = local_18;
  param_1[1] = fVar4;
  param_1[2] = local_10;
  param_1[3] = fVar3;
  param_1[4] = local_8;
  param_1[5] = fVar2;
  return;
}


// ==== 101177a0 FUN_101177a0

void FUN_101177a0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = 0;
  *in_ECX = 0;
  in_ECX[4] = 0;
  in_ECX[1] = 0;
  in_ECX[5] = 0;
  in_ECX[2] = 0;
  *(undefined1 *)(in_ECX + 6) = 0;
  return;
}


// ==== 101177f0 FUN_101177f0

void FUN_101177f0(float *param_1)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  
  if (*(char *)(in_ECX + 6) == '\0') {
    in_ECX[3] = *param_1;
    in_ECX[4] = param_1[1];
    in_ECX[5] = param_1[2];
    *in_ECX = in_ECX[3];
    in_ECX[1] = in_ECX[4];
    in_ECX[2] = in_ECX[5];
    *(undefined1 *)(in_ECX + 6) = 1;
    return;
  }
  fVar1 = *param_1;
  if (*in_ECX <= fVar1) {
    fVar1 = *in_ECX;
  }
  *in_ECX = fVar1;
  fVar1 = param_1[1];
  if (in_ECX[1] <= fVar1) {
    fVar1 = in_ECX[1];
  }
  in_ECX[1] = fVar1;
  fVar1 = param_1[2];
  if (in_ECX[2] <= fVar1) {
    fVar1 = in_ECX[2];
  }
  in_ECX[2] = fVar1;
  fVar1 = in_ECX[3];
  fVar2 = *param_1;
  if ((!NAN(fVar2) && !NAN(fVar1)) && fVar2 < fVar1 != (fVar2 == fVar1)) {
    fVar2 = fVar1;
  }
  in_ECX[3] = fVar2;
  fVar1 = in_ECX[4];
  fVar2 = param_1[1];
  if ((!NAN(fVar2) && !NAN(fVar1)) && fVar2 < fVar1 != (fVar2 == fVar1)) {
    fVar2 = fVar1;
  }
  in_ECX[4] = fVar2;
  fVar1 = in_ECX[5];
  fVar2 = param_1[2];
  if ((NAN(fVar2) || NAN(fVar1)) || fVar2 < fVar1 == (fVar2 == fVar1)) {
    in_ECX[5] = fVar2;
    return;
  }
  in_ECX[5] = fVar1;
  return;
}


// ==== 101179b0 FUN_101179b0

void FUN_101179b0(undefined4 *param_1,FVector *param_2)

{
  FBox *pFVar1;
  undefined4 *in_ECX;
  int iVar2;
  FBox local_1c [28];
  
  pFVar1 = local_1c;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pFVar1 = *in_ECX;
    in_ECX = in_ECX + 1;
    pFVar1 = pFVar1 + 4;
  }
  pFVar1 = FBox::operator+=(local_1c,param_2);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *(undefined4 *)pFVar1;
    pFVar1 = pFVar1 + 4;
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 10117a00 FUN_10117a00

void FUN_10117a00(float *param_1)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  int iVar3;
  
  if ((*(char *)(in_ECX + 6) == '\0') || (*(char *)(param_1 + 6) == '\0')) {
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *in_ECX = *param_1;
      param_1 = param_1 + 1;
      in_ECX = in_ECX + 1;
    }
    return;
  }
  fVar1 = *param_1;
  if (*in_ECX <= fVar1) {
    fVar1 = *in_ECX;
  }
  *in_ECX = fVar1;
  fVar1 = param_1[1];
  if (in_ECX[1] <= fVar1) {
    fVar1 = in_ECX[1];
  }
  in_ECX[1] = fVar1;
  fVar1 = param_1[2];
  if (in_ECX[2] <= fVar1) {
    fVar1 = in_ECX[2];
  }
  in_ECX[2] = fVar1;
  fVar1 = in_ECX[3];
  fVar2 = param_1[3];
  if ((!NAN(fVar2) && !NAN(fVar1)) && fVar2 < fVar1 != (fVar2 == fVar1)) {
    fVar2 = fVar1;
  }
  in_ECX[3] = fVar2;
  fVar1 = in_ECX[4];
  fVar2 = param_1[4];
  if ((!NAN(fVar2) && !NAN(fVar1)) && fVar2 < fVar1 != (fVar2 == fVar1)) {
    fVar2 = fVar1;
  }
  in_ECX[4] = fVar2;
  fVar1 = in_ECX[5];
  fVar2 = param_1[5];
  if ((NAN(fVar2) || NAN(fVar1)) || fVar2 < fVar1 == (fVar2 == fVar1)) {
    in_ECX[5] = fVar2;
    return;
  }
  in_ECX[5] = fVar1;
  return;
}


// ==== 10117bc0 FUN_10117bc0

void FUN_10117bc0(undefined4 *param_1,FBox *param_2)

{
  FBox *pFVar1;
  undefined4 *in_ECX;
  int iVar2;
  FBox local_1c [28];
  
  pFVar1 = local_1c;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pFVar1 = *in_ECX;
    in_ECX = in_ECX + 1;
    pFVar1 = pFVar1 + 4;
  }
  pFVar1 = FBox::operator+=(local_1c,param_2);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *(undefined4 *)pFVar1;
    pFVar1 = pFVar1 + 4;
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 10117c10 FUN_10117c10

/* WARNING: Restarted to delay deadcode elimination for space: stack */

FBox * FUN_10117c10(FBox *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FBox *this;
  float *in_ECX;
  float *pfVar4;
  float *local_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_c;
  float local_8;
  float local_4;
  
  this = param_1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0x18] = (FBox)0x0;
  local_2c = 2;
  local_38 = in_ECX;
  do {
    local_30 = 2;
    param_1 = (FBox *)(in_ECX + 1);
    do {
      local_34 = 2;
      pfVar4 = in_ECX + 2;
      do {
        fVar1 = *local_38 - *param_2;
        fVar2 = *(float *)param_1 - param_2[1];
        fVar3 = *pfVar4 - param_2[2];
        local_c = fVar3 * param_2[5] + fVar2 * param_2[4] + fVar1 * param_2[3];
        local_4 = fVar3 * param_2[0xb] + fVar2 * param_2[10] + fVar1 * param_2[9];
        local_8 = fVar3 * param_2[8] + fVar2 * param_2[7] + fVar1 * param_2[6];
        FBox::operator+=(this,(FVector *)&local_c);
        pfVar4 = pfVar4 + 3;
        local_34 = local_34 + -1;
      } while (local_34 != 0);
      param_1 = (FBox *)((int)param_1 + 0xc);
      local_30 = local_30 + -1;
    } while (local_30 != 0);
    local_38 = local_38 + 3;
    local_2c = local_2c + -1;
  } while (local_2c != 0);
  return this;
}


// ==== 10117dd0 FUN_10117dd0

FBox * FUN_10117dd0(FBox *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FBox *this;
  float *pfVar4;
  float *in_ECX;
  float *pfVar5;
  float *pfVar6;
  int local_38;
  int local_34;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pfVar4 = param_2;
  this = param_1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0x18] = (FBox)0x0;
  local_34 = 2;
  param_1 = (FBox *)in_ECX;
  do {
    local_38 = 2;
    pfVar5 = in_ECX + 1;
    do {
      param_2 = (float *)0x2;
      pfVar6 = in_ECX + 2;
      do {
        fVar1 = *(float *)param_1;
        fVar2 = *pfVar5;
        fVar3 = *pfVar6;
        local_1c = fVar2 * pfVar4[4] + fVar1 * *pfVar4 + fVar3 * pfVar4[8] + pfVar4[0xc];
        local_18 = pfVar4[9] * fVar3 + pfVar4[1] * fVar1 + pfVar4[5] * fVar2 + pfVar4[0xd];
        local_14 = fVar3 * pfVar4[10] + pfVar4[6] * fVar2 + pfVar4[2] * fVar1 + pfVar4[0xe];
        local_10 = local_1c;
        local_c = local_18;
        local_8 = local_14;
        FBox::operator+=(this,(FVector *)&local_1c);
        pfVar6 = pfVar6 + 3;
        param_2 = (float *)((int)param_2 + -1);
      } while (param_2 != (float *)0x0);
      pfVar5 = pfVar5 + 3;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
    param_1 = (FBox *)((int)param_1 + 0xc);
    local_34 = local_34 + -1;
  } while (local_34 != 0);
  return this;
}


// ==== 10117f80 FUN_10117f80

FMatrix * FUN_10117f80(undefined4 param_1,FMatrix *param_2)

{
  FPlane *in_ECX;
  FMatrix *unaff_retaddr;
  
  FMatrix::TransposeAdjoint(param_2);
  FPlane::TransformByUsingAdjointT(in_ECX,unaff_retaddr,param_2);
  return unaff_retaddr;
}


// ==== 10117fc0 FUN_10117fc0

undefined4 FUN_10117fc0(int *param_1)

{
  int iVar1;
  int *in_ECX;
  
  if (*in_ECX == *param_1) {
    iVar1 = FString::operator==((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


// ==== 10117ff0 FUN_10117ff0

uint FUN_10117ff0(undefined4 *param_1)

{
  FArchive *pFVar1;
  int iVar2;
  uint in_ECX;
  int iVar3;
  FCompactIndex *pFVar4;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b6c20;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  pFVar4 = (FCompactIndex *)&local_18;
  ExceptionList = &local_10;
  pFVar1 = ULinkerLoad::GetReader((ULinkerLoad *)(in_ECX - 0xc0));
  operator<<(pFVar1,pFVar4);
  iVar3 = local_18;
  iVar2 = FArray::IsValidIndex((FArray *)(in_ECX - 0x48),local_18);
  if (iVar2 == 0) {
    FOutputDevice::Logf((FOutputDevice *)GError,(ushort *)GError);
    iVar3 = local_18;
  }
  *param_1 = *(undefined4 *)(*(int *)(in_ECX - 0x48) + iVar3 * 4);
  ExceptionList = local_10;
  return -(uint)(in_ECX != 0xc0) & in_ECX;
}


// ==== 1011808f Catch@1011808f

void Catch_1011808f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 101180a3 Catch@101180a3

void Catch_101180a3(void)

{
  int *piVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int unaff_EBP;
  
  appUnwindf((ushort *)&DAT_101cdb60,L"ULinkerLoad<<FName");
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  uVar2 = (**(code **)(*piVar1 + 0x28))();
  puVar3 = UObject::GetFullName((UObject *)(piVar1 + -0x30),(ushort *)0x0);
  appUnwindf((ushort *)L"(%s %i))",puVar3,uVar2);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10118130 FUN_10118130

void FUN_10118130(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6c38;
  local_c = ExceptionList;
  iVar1 = param_1[1];
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar1;
  *(int *)(in_ECX + 8) = iVar1;
  FArray::Realloc(in_ECX,4);
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


// ==== 101181d0 FUN_101181d0

void FUN_101181d0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b6c58;
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
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 101182b0 FUN_101182b0

void FUN_101182b0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *in_ECX;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,4);
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  do {
    iVar3 = *(int *)(in_ECX + 4);
    iVar2 = iVar3 + 1;
    *(int *)(in_ECX + 4) = iVar2;
    if (*(int *)(in_ECX + 8) < iVar2) {
      *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
      FArray::Realloc(in_ECX,4);
    }
    puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4 * 4);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < *(int *)(param_1 + 4));
  return;
}


// ==== 10118350 FUN_10118350

void FUN_10118350(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6c78;
  local_c = ExceptionList;
  iVar1 = param_1[1];
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar1;
  *(int *)(in_ECX + 8) = iVar1;
  FArray::Realloc(in_ECX,2);
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    do {
      *(undefined2 *)(*(int *)in_ECX + iVar1 * 2) = *(undefined2 *)(*param_1 + iVar1 * 2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  ExceptionList = local_c;
  return;
}


// ==== 101183f0 FUN_101183f0

void FUN_101183f0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b6c98;
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
  FArray::Remove(in_ECX,0,iVar1,2);
  local_4 = 0xffffffff;
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 101184d0 FUN_101184d0

undefined2 FUN_101184d0(void)

{
  undefined2 uVar1;
  TArray<unsigned_short> *in_ECX;
  
  if (*(int *)(in_ECX + 4) < 1) {
    appFailAssert("ArrayNum>0",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x18e);
  }
  uVar1 = *(undefined2 *)(*(int *)in_ECX + -2 + *(int *)(in_ECX + 4) * 2);
  TArray<unsigned_short>::Remove(in_ECX,*(int *)(in_ECX + 4) + -1,1);
  return uVar1;
}


// ==== 10118520 FUN_10118520

void FUN_10118520(int param_1,uint param_2)

{
  FArray *in_ECX;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  FArray::Insert(in_ECX,param_1,param_2,2);
  uVar2 = param_2 * 2 & 3;
  puVar3 = (undefined4 *)(*(int *)in_ECX + param_1 * 2);
  for (uVar1 = (param_2 & 0x7fffffff) >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  return;
}


// ==== 10118580 FUN_10118580

void FUN_10118580(FArray *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  FArray *in_ECX;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar4 = 0;
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  do {
    iVar3 = *(int *)(in_ECX + 4);
    iVar1 = iVar3 + 1;
    *(int *)(in_ECX + 4) = iVar1;
    if (*(int *)(in_ECX + 8) < iVar1) {
      *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
      FArray::Realloc(in_ECX,2);
    }
    puVar2 = (undefined2 *)(*(int *)in_ECX + iVar3 * 2);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = *(undefined2 *)(*(int *)param_1 + iVar4 * 2);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < *(int *)(param_1 + 4));
  return;
}


// ==== 10118610 FUN_10118610

void FUN_10118610(FArray *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  FArray *in_ECX;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,2);
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  do {
    iVar3 = *(int *)(in_ECX + 4);
    iVar2 = iVar3 + 1;
    *(int *)(in_ECX + 4) = iVar2;
    if (*(int *)(in_ECX + 8) < iVar2) {
      *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
      FArray::Realloc(in_ECX,2);
    }
    puVar1 = (undefined2 *)(*(int *)in_ECX + iVar3 * 2);
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = *(undefined2 *)(*(int *)param_1 + iVar4 * 2);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < *(int *)(param_1 + 4));
  return;
}


// ==== 101186c0 FUN_101186c0

void FUN_101186c0(undefined4 *param_1)

{
  undefined4 uVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6cb8;
  local_c = ExceptionList;
  uVar1 = param_1[1];
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = uVar1;
  *(undefined4 *)(in_ECX + 8) = uVar1;
  FArray::Realloc(in_ECX,1);
  local_4 = 0;
  _memcpy(*(void **)in_ECX,(void *)*param_1,*(size_t *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10118750 FUN_10118750

void FUN_10118750(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b6cd8;
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
  FArray::Remove(in_ECX,0,iVar1,1);
  local_4 = 0xffffffff;
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10118830 FUN_10118830

void FUN_10118830(FArray *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  FArray *in_ECX;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  iVar4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar1;
  FArray::Realloc(in_ECX,1);
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  do {
    iVar2 = *(int *)(in_ECX + 4);
    iVar1 = iVar2 + 1;
    *(int *)(in_ECX + 4) = iVar1;
    if (*(int *)(in_ECX + 8) < iVar1) {
      *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
      FArray::Realloc(in_ECX,1);
    }
    puVar3 = (undefined1 *)(*(int *)in_ECX + iVar2);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = *(undefined1 *)(*(int *)param_1 + iVar4);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < *(int *)(param_1 + 4));
  return;
}


// ==== 101188d0 FUN_101188d0

void FUN_101188d0(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6cf8;
  local_c = ExceptionList;
  iVar1 = param_1[1];
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar1;
  *(int *)(in_ECX + 8) = iVar1;
  FArray::Realloc(in_ECX,4);
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


// ==== 10118970 FUN_10118970

void FUN_10118970(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b6d18;
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
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10118a50 FUN_10118a50

void FUN_10118a50(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *in_ECX;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6d38;
  local_c = ExceptionList;
  iVar2 = param_1[1];
  iVar4 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar2;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,4);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar3 = *(int *)(in_ECX + 4);
      iVar2 = iVar3 + 1;
      *(int *)(in_ECX + 4) = iVar2;
      if (*(int *)(in_ECX + 8) < iVar2) {
        *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
        FArray::Realloc(in_ECX,4);
      }
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar4 * 4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10118b30 FUN_10118b30

void FUN_10118b30(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  FArray *in_ECX;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6d58;
  local_c = ExceptionList;
  iVar2 = param_1[1];
  iVar6 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar2;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,0xc);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar3 = *(int *)(in_ECX + 4);
      iVar2 = iVar3 + 1;
      *(int *)(in_ECX + 4) = iVar2;
      if (*(int *)(in_ECX + 8) < iVar2) {
        *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
        FArray::Realloc(in_ECX,0xc);
      }
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)(*piVar4 + (int)param_1);
        *puVar1 = *puVar5;
        puVar1[1] = puVar5[1];
        puVar1[2] = puVar5[2];
      }
      param_1 = (int *)((int)param_1 + 0xc);
      iVar6 = iVar6 + 1;
    } while (iVar6 < piVar4[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10118c40 FUN_10118c40

undefined4 FUN_10118c40(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar1 + 4);
  }
  iVar4 = *(int *)(in_ECX[3] + (in_ECX[4] - 1U & uVar3) * 4);
  if (iVar4 != -1) {
    iVar2 = *in_ECX;
    do {
      if (*(int *)(iVar2 + 4 + iVar4 * 0xc) == iVar1) {
        return *(undefined4 *)(iVar2 + 8 + iVar4 * 0xc);
      }
      iVar4 = *(int *)(iVar2 + iVar4 * 0xc);
    } while (iVar4 != -1);
  }
  return 0;
}


// ==== 10118cb0 FUN_10118cb0

void FUN_10118cb0(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6d78;
  local_c = ExceptionList;
  iVar1 = param_1[1];
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar1;
  *(int *)(in_ECX + 8) = iVar1;
  FArray::Realloc(in_ECX,4);
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


// ==== 10118d50 FUN_10118d50

void FUN_10118d50(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b6d98;
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
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10118e30 FUN_10118e30

void FUN_10118e30(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *in_ECX;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,4);
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  do {
    iVar3 = *(int *)(in_ECX + 4);
    iVar2 = iVar3 + 1;
    *(int *)(in_ECX + 4) = iVar2;
    if (*(int *)(in_ECX + 8) < iVar2) {
      *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
      FArray::Realloc(in_ECX,4);
    }
    puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4 * 4);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < *(int *)(param_1 + 4));
  return;
}


// ==== 10118ed0 FUN_10118ed0

void FUN_10118ed0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *in_ECX;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6db8;
  local_c = ExceptionList;
  iVar2 = param_1[1];
  iVar4 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar2;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,8);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar3 = *(int *)(in_ECX + 4);
      iVar2 = iVar3 + 1;
      *(int *)(in_ECX + 4) = iVar2;
      if (*(int *)(in_ECX + 8) < iVar2) {
        *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
        FArray::Realloc(in_ECX,8);
      }
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar4 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar4 * 8);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10118fc0 FUN_10118fc0

void FUN_10118fc0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *in_ECX;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6dd8;
  local_c = ExceptionList;
  iVar2 = param_1[1];
  iVar4 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar2;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,4);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar3 = *(int *)(in_ECX + 4);
      iVar2 = iVar3 + 1;
      *(int *)(in_ECX + 4) = iVar2;
      if (*(int *)(in_ECX + 8) < iVar2) {
        *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
        FArray::Realloc(in_ECX,4);
      }
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar4 * 4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 101190a0 FUN_101190a0

void FUN_101190a0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  FArray *in_ECX;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6df8;
  local_c = ExceptionList;
  iVar2 = param_1[1];
  iVar6 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar2;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,0xc);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar3 = *(int *)(in_ECX + 4);
      iVar2 = iVar3 + 1;
      *(int *)(in_ECX + 4) = iVar2;
      if (*(int *)(in_ECX + 8) < iVar2) {
        *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
        FArray::Realloc(in_ECX,0xc);
      }
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)(*piVar4 + (int)param_1);
        *puVar1 = *puVar5;
        puVar1[1] = puVar5[1];
        puVar1[2] = puVar5[2];
      }
      param_1 = (int *)((int)param_1 + 0xc);
      iVar6 = iVar6 + 1;
    } while (iVar6 < piVar4[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 101191b0 FUN_101191b0

void FUN_101191b0(int param_1)

{
  int *in_ECX;
  
  *in_ECX = param_1;
  if (param_1 != 0) {
    in_ECX[1] = *(int *)(param_1 + 0x48);
    thunk_FUN_101142d0();
    return;
  }
  in_ECX[1] = 0;
  thunk_FUN_101142d0();
  return;
}


// ==== 10119210 FUN_10119210

void FUN_10119210(int param_1)

{
  int *in_ECX;
  
  *in_ECX = param_1;
  if (param_1 != 0) {
    in_ECX[1] = *(int *)(param_1 + 0x48);
    thunk_FUN_10114340();
    return;
  }
  in_ECX[1] = 0;
  thunk_FUN_10114340();
  return;
}


// ==== 10119270 FUN_10119270

void FUN_10119270(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *in_ECX;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6e18;
  local_c = ExceptionList;
  iVar2 = param_1[1];
  iVar4 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar2;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,8);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar3 = *(int *)(in_ECX + 4);
      iVar2 = iVar3 + 1;
      *(int *)(in_ECX + 4) = iVar2;
      if (*(int *)(in_ECX + 8) < iVar2) {
        *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
        FArray::Realloc(in_ECX,8);
      }
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar4 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar4 * 8);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10119360 FUN_10119360

void FUN_10119360(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *in_ECX;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6e38;
  local_c = ExceptionList;
  iVar2 = param_1[1];
  iVar4 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar2;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,8);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar3 = *(int *)(in_ECX + 4);
      iVar2 = iVar3 + 1;
      *(int *)(in_ECX + 4) = iVar2;
      if (*(int *)(in_ECX + 8) < iVar2) {
        *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
        FArray::Realloc(in_ECX,8);
      }
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 8);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1;
        *puVar1 = *(undefined4 *)(iVar2 + iVar4 * 8);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar4 * 8);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10119450 FUN_10119450

void FUN_10119450(undefined4 param_1)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,8);
  return;
}


// ==== 10119480 FUN_10119480

void FUN_10119480(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *in_ECX;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,8);
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  do {
    iVar3 = *(int *)(in_ECX + 4);
    iVar2 = iVar3 + 1;
    *(int *)(in_ECX + 4) = iVar2;
    if (*(int *)(in_ECX + 8) < iVar2) {
      *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
      FArray::Realloc(in_ECX,8);
    }
    puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 8);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = *(int *)param_1;
      *puVar1 = *(undefined4 *)(iVar2 + iVar4 * 8);
      puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar4 * 8);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < *(int *)(param_1 + 4));
  return;
}


// ==== 10119530 FUN_10119530

void FUN_10119530(int *param_1)

{
  int iVar1;
  int *piVar2;
  FArray *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6e58;
  local_c = ExceptionList;
  iVar3 = param_1[1];
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar3;
  *(int *)(in_ECX + 8) = iVar3;
  FArray::Realloc(in_ECX,0x1c);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar1 = *(int *)(in_ECX + 4);
      iVar3 = iVar1 + 1;
      *(int *)(in_ECX + 4) = iVar3;
      if (*(int *)(in_ECX + 8) < iVar3) {
        *(int *)(in_ECX + 8) = ((int)(iVar3 * 3 + (iVar3 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar3;
        FArray::Realloc(in_ECX,0x1c);
      }
      puVar5 = (undefined4 *)(*(int *)in_ECX + iVar1 * 0x1c);
      if (puVar5 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*piVar2 + (int)param_1);
        for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x1c);
      local_14 = local_14 + 1;
    } while (local_14 < piVar2[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10119640 FUN_10119640

void FUN_10119640(int *param_1)

{
  int iVar1;
  int *piVar2;
  FArray *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6e78;
  local_c = ExceptionList;
  iVar3 = param_1[1];
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar3;
  *(int *)(in_ECX + 8) = iVar3;
  FArray::Realloc(in_ECX,0x24);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar1 = *(int *)(in_ECX + 4);
      iVar3 = iVar1 + 1;
      *(int *)(in_ECX + 4) = iVar3;
      if (*(int *)(in_ECX + 8) < iVar3) {
        *(int *)(in_ECX + 8) = ((int)(iVar3 * 3 + (iVar3 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar3;
        FArray::Realloc(in_ECX,0x24);
      }
      puVar5 = (undefined4 *)(*(int *)in_ECX + iVar1 * 0x24);
      if (puVar5 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*piVar2 + (int)param_1);
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      param_1 = (int *)((int)param_1 + 0x24);
      local_14 = local_14 + 1;
    } while (local_14 < piVar2[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10119750 FUN_10119750

void FUN_10119750(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *in_ECX;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6e98;
  local_c = ExceptionList;
  iVar2 = param_1[1];
  iVar4 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar2;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,4);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar3 = *(int *)(in_ECX + 4);
      iVar2 = iVar3 + 1;
      *(int *)(in_ECX + 4) = iVar2;
      if (*(int *)(in_ECX + 8) < iVar2) {
        *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
        FArray::Realloc(in_ECX,4);
      }
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar4 * 4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10119830 FUN_10119830

void FUN_10119830(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *in_ECX;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6eb8;
  local_c = ExceptionList;
  iVar2 = param_1[1];
  iVar4 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar2;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,4);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    do {
      iVar3 = *(int *)(in_ECX + 4);
      iVar2 = iVar3 + 1;
      *(int *)(in_ECX + 4) = iVar2;
      if (*(int *)(in_ECX + 8) < iVar2) {
        *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
        FArray::Realloc(in_ECX,4);
      }
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(*param_1 + iVar4 * 4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10119910 FUN_10119910

void FUN_10119910(int param_1,int param_2)

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


// ==== 101199e0 FUN_101199e0

void FUN_101199e0(int param_1,int param_2)

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


// ==== 10119a80 FUN_10119a80

void FUN_10119a80(undefined4 param_1)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,0xc);
  return;
}


// ==== 10119ab0 FUN_10119ab0

void FUN_10119ab0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  
  iVar2 = (*(code *)**(undefined4 **)GMalloc)
                    ((uint)((ulonglong)(uint)in_ECX[4] * 4) |
                     -(uint)((int)((ulonglong)(uint)in_ECX[4] * 4 >> 0x20) != 0),L"HashMapHash");
  iVar3 = 0;
  if (0 < in_ECX[4]) {
    do {
      *(undefined4 *)(iVar2 + iVar3 * 4) = 0xffffffff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < in_ECX[4]);
  }
  iVar3 = 0;
  if (0 < in_ECX[1]) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(*in_ECX + 4 + iVar5);
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar1 + 4);
      }
      uVar4 = in_ECX[4] - 1U & uVar4;
      *(undefined4 *)(*in_ECX + iVar5) = *(undefined4 *)(iVar2 + uVar4 * 4);
      *(int *)(iVar2 + uVar4 * 4) = iVar3;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar3 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(*(int *)GMalloc + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar2;
  return;
}


// ==== 10119b80 FUN_10119b80

void FUN_10119b80(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  FArray *in_ECX;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6ed8;
  local_c = ExceptionList;
  iVar2 = param_1[1];
  iVar6 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar2;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,0xc);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar3 = *(int *)(in_ECX + 4);
      iVar2 = iVar3 + 1;
      *(int *)(in_ECX + 4) = iVar2;
      if (*(int *)(in_ECX + 8) < iVar2) {
        *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
        FArray::Realloc(in_ECX,0xc);
      }
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)(*piVar4 + (int)param_1);
        *puVar1 = *puVar5;
        puVar1[1] = puVar5[1];
        puVar1[2] = puVar5[2];
      }
      param_1 = (int *)((int)param_1 + 0xc);
      iVar6 = iVar6 + 1;
    } while (iVar6 < piVar4[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10119c90 FUN_10119c90

void FUN_10119c90(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  
  iVar2 = (*(code *)**(undefined4 **)GMalloc)
                    ((uint)((ulonglong)(uint)in_ECX[4] * 4) |
                     -(uint)((int)((ulonglong)(uint)in_ECX[4] * 4 >> 0x20) != 0),L"HashMapHash");
  iVar3 = 0;
  if (0 < in_ECX[4]) {
    do {
      *(undefined4 *)(iVar2 + iVar3 * 4) = 0xffffffff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < in_ECX[4]);
  }
  iVar3 = 0;
  if (0 < in_ECX[1]) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(*in_ECX + 4 + iVar5);
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar1 + 4);
      }
      uVar4 = in_ECX[4] - 1U & uVar4;
      *(undefined4 *)(*in_ECX + iVar5) = *(undefined4 *)(iVar2 + uVar4 * 4);
      *(int *)(iVar2 + uVar4 * 4) = iVar3;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar3 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(*(int *)GMalloc + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar2;
  return;
}


// ==== 10119d60 FUN_10119d60

void FUN_10119d60(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  FArray *in_ECX;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6ef8;
  local_c = ExceptionList;
  iVar2 = param_1[1];
  iVar6 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar2;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,0xc);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar3 = *(int *)(in_ECX + 4);
      iVar2 = iVar3 + 1;
      *(int *)(in_ECX + 4) = iVar2;
      if (*(int *)(in_ECX + 8) < iVar2) {
        *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
        FArray::Realloc(in_ECX,0xc);
      }
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)(*piVar4 + (int)param_1);
        *puVar1 = *puVar5;
        puVar1[1] = puVar5[1];
        puVar1[2] = puVar5[2];
      }
      param_1 = (int *)((int)param_1 + 0xc);
      iVar6 = iVar6 + 1;
    } while (iVar6 < piVar4[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10119e70 FUN_10119e70

void FUN_10119e70(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  
  iVar2 = (*(code *)**(undefined4 **)GMalloc)
                    ((uint)((ulonglong)(uint)in_ECX[4] * 4) |
                     -(uint)((int)((ulonglong)(uint)in_ECX[4] * 4 >> 0x20) != 0),L"HashMapHash");
  iVar3 = 0;
  if (0 < in_ECX[4]) {
    do {
      *(undefined4 *)(iVar2 + iVar3 * 4) = 0xffffffff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < in_ECX[4]);
  }
  iVar3 = 0;
  if (0 < in_ECX[1]) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(*in_ECX + 4 + iVar5);
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar1 + 4);
      }
      uVar4 = in_ECX[4] - 1U & uVar4;
      *(undefined4 *)(*in_ECX + iVar5) = *(undefined4 *)(iVar2 + uVar4 * 4);
      *(int *)(iVar2 + uVar4 * 4) = iVar3;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar3 < in_ECX[1]);
  }
  if (in_ECX[3] != 0) {
    (**(code **)(*(int *)GMalloc + 8))(in_ECX[3]);
  }
  in_ECX[3] = iVar2;
  return;
}


// ==== 10119f40 FUN_10119f40

void FUN_10119f40(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  FArray *in_ECX;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6f18;
  local_c = ExceptionList;
  iVar2 = param_1[1];
  iVar6 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar2;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,0xc);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar3 = *(int *)(in_ECX + 4);
      iVar2 = iVar3 + 1;
      *(int *)(in_ECX + 4) = iVar2;
      if (*(int *)(in_ECX + 8) < iVar2) {
        *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
        FArray::Realloc(in_ECX,0xc);
      }
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)(*piVar4 + (int)param_1);
        *puVar1 = *puVar5;
        puVar1[1] = puVar5[1];
        puVar1[2] = puVar5[2];
      }
      param_1 = (int *)((int)param_1 + 0xc);
      iVar6 = iVar6 + 1;
    } while (iVar6 < piVar4[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1011a050 FUN_1011a050

void FUN_1011a050(int param_1,int param_2)

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
  FArray::Remove(in_ECX,param_1,param_2,8);
  return;
}


// ==== 1011a0f0 FUN_1011a0f0

void FUN_1011a0f0(undefined4 param_1)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,8);
  return;
}


// ==== 1011a120 FUN_1011a120

void FUN_1011a120(int param_1,int param_2)

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


// ==== 1011a1c0 FUN_1011a1c0

void FUN_1011a1c0(undefined4 param_1)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,4);
  return;
}


// ==== 1011a1f0 FUN_1011a1f0

void FUN_1011a1f0(int param_1,int param_2)

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


// ==== 1011a290 FUN_1011a290

void FUN_1011a290(undefined4 param_1)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,0xc);
  return;
}


// ==== 1011a2c0 FUN_1011a2c0

void FUN_1011a2c0(int param_1,int param_2)

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
  FArray::Remove(in_ECX,param_1,param_2,8);
  return;
}


// ==== 1011a390 FUN_1011a390

void FUN_1011a390(int param_1,int param_2)

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
  FArray::Remove(in_ECX,param_1,param_2,8);
  return;
}


// ==== 1011a430 FUN_1011a430

void FUN_1011a430(int param_1,int param_2)

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
  FArray::Remove(in_ECX,param_1,param_2,0x1c);
  return;
}


// ==== 1011a4d0 FUN_1011a4d0

void FUN_1011a4d0(undefined4 param_1)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,0x1c);
  return;
}


// ==== 1011a500 FUN_1011a500

void FUN_1011a500(int param_1,int param_2)

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
  FArray::Remove(in_ECX,param_1,param_2,0x24);
  return;
}


// ==== 1011a5a0 FUN_1011a5a0

void FUN_1011a5a0(undefined4 param_1)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,0x24);
  return;
}


// ==== 1011a5d0 FUN_1011a5d0

void FUN_1011a5d0(int param_1,int param_2)

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


// ==== 1011a670 FUN_1011a670

void FUN_1011a670(undefined4 param_1)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,4);
  return;
}


// ==== 1011a6a0 FUN_1011a6a0

void FUN_1011a6a0(int param_1,int param_2)

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


// ==== 1011a740 FUN_1011a740

void FUN_1011a740(undefined4 param_1)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,4);
  return;
}


// ==== 1011a770 FUN_1011a770

void FUN_1011a770(int param_1,int param_2)

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


// ==== 1011a810 FUN_1011a810

void FUN_1011a810(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *pFVar4;
  undefined4 *puVar5;
  FArray *in_ECX;
  int iVar6;
  
  pFVar4 = param_1;
  if (in_ECX == param_1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar6 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,0xc);
  if (0 < *(int *)(param_1 + 4)) {
    param_1 = (FArray *)0x0;
    do {
      iVar3 = *(int *)(in_ECX + 4);
      iVar2 = iVar3 + 1;
      *(int *)(in_ECX + 4) = iVar2;
      if (*(int *)(in_ECX + 8) < iVar2) {
        *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
        FArray::Realloc(in_ECX,0xc);
      }
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)(*(int *)pFVar4 + (int)param_1);
        *puVar1 = *puVar5;
        puVar1[1] = puVar5[1];
        puVar1[2] = puVar5[2];
      }
      param_1 = (FArray *)((int)param_1 + 0xc);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(pFVar4 + 4));
    return;
  }
  return;
}


// ==== 1011a8e0 FUN_1011a8e0

void FUN_1011a8e0(int param_1,int param_2)

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


// ==== 1011a980 FUN_1011a980

void FUN_1011a980(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *pFVar4;
  undefined4 *puVar5;
  FArray *in_ECX;
  int iVar6;
  
  pFVar4 = param_1;
  if (in_ECX == param_1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar6 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,0xc);
  if (0 < *(int *)(param_1 + 4)) {
    param_1 = (FArray *)0x0;
    do {
      iVar3 = *(int *)(in_ECX + 4);
      iVar2 = iVar3 + 1;
      *(int *)(in_ECX + 4) = iVar2;
      if (*(int *)(in_ECX + 8) < iVar2) {
        *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
        FArray::Realloc(in_ECX,0xc);
      }
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)(*(int *)pFVar4 + (int)param_1);
        *puVar1 = *puVar5;
        puVar1[1] = puVar5[1];
        puVar1[2] = puVar5[2];
      }
      param_1 = (FArray *)((int)param_1 + 0xc);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(pFVar4 + 4));
    return;
  }
  return;
}


// ==== 1011aa50 FUN_1011aa50

void FUN_1011aa50(int param_1,int param_2)

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


// ==== 1011aaf0 FUN_1011aaf0

void FUN_1011aaf0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *pFVar4;
  undefined4 *puVar5;
  FArray *in_ECX;
  int iVar6;
  
  pFVar4 = param_1;
  if (in_ECX == param_1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar6 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,0xc);
  if (0 < *(int *)(param_1 + 4)) {
    param_1 = (FArray *)0x0;
    do {
      iVar3 = *(int *)(in_ECX + 4);
      iVar2 = iVar3 + 1;
      *(int *)(in_ECX + 4) = iVar2;
      if (*(int *)(in_ECX + 8) < iVar2) {
        *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
        FArray::Realloc(in_ECX,0xc);
      }
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)(*(int *)pFVar4 + (int)param_1);
        *puVar1 = *puVar5;
        puVar1[1] = puVar5[1];
        puVar1[2] = puVar5[2];
      }
      param_1 = (FArray *)((int)param_1 + 0xc);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(pFVar4 + 4));
    return;
  }
  return;
}


// ==== 1011abc0 FUN_1011abc0

void FUN_1011abc0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1011ac10 FUN_1011ac10

void FUN_1011ac10(undefined4 *param_1)

{
  TArray<unsigned_short> *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6f58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TArray<unsigned_short>::TArray<unsigned_short>(in_ECX,param_1[1]);
  local_4 = 0;
  if (*(int *)(in_ECX + 4) != 0) {
    _memcpy(*(void **)in_ECX,(void *)*param_1,*(int *)(in_ECX + 4) * 2);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1011aca0 FUN_1011aca0

void FUN_1011aca0(ushort *param_1)

{
  int iVar1;
  TArray<unsigned_short> *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b6f78;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    iVar1 = 0;
    ExceptionList = &local_c;
  }
  else {
    ExceptionList = &local_c;
    iVar1 = appStrlen(param_1);
    iVar1 = iVar1 + 1;
  }
  TArray<unsigned_short>::TArray<unsigned_short>(in_ECX,iVar1);
  local_4 = 0;
  if (*(int *)(in_ECX + 4) != 0) {
    _memcpy(*(void **)in_ECX,param_1,*(int *)(in_ECX + 4) * 2);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1011ad40 FUN_1011ad40

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_1011ad40(ushort *param_1)

{
  char cVar1;
  void *_Dst;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  ushort *_Src;
  TArray<unsigned_short> *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar3 = (char *)param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_101b6f98;
  local_10 = ExceptionList;
  if (*(char *)param_1 == '\0') {
    pcVar4 = (char *)0x0;
  }
  else {
    pcVar4 = (char *)param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = pcVar4 + (1 - (int)((int)param_1 + 1));
  }
  ExceptionList = &local_10;
  TArray<unsigned_short>::TArray<unsigned_short>(in_ECX,(int)pcVar4);
  local_8 = 0;
  if (*(int *)(in_ECX + 4) != 0) {
    uVar5 = winGetSizeUNICODE((char *)param_1);
    if ((uVar5 & 0x7fffffff) == 0) {
      param_1 = (ushort *)0x0;
    }
    else {
      winGetSizeUNICODE((char *)param_1);
      param_1 = (ushort *)&stack0xffffffdc;
    }
    _Dst = *(void **)in_ECX;
    iVar2 = *(int *)(in_ECX + 4);
    iVar6 = winGetSizeUNICODE(pcVar3);
    _Src = winToUNICODE(param_1,pcVar3,iVar6);
    _memcpy(_Dst,_Src,iVar2 * 2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 1011ae40 FUN_1011ae40

void FUN_1011ae40(void)

{
  return;
}


// ==== 1011ae90 FUN_1011ae90

void FUN_1011ae90(FArray *param_1)

{
  undefined4 uVar1;
  FArray *in_ECX;
  undefined2 *_Src;
  
  if (in_ECX != param_1) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(in_ECX + 8) = uVar1;
    *(undefined4 *)(in_ECX + 4) = uVar1;
    FArray::Realloc(in_ECX,2);
    if (*(int *)(in_ECX + 4) != 0) {
      if (*(int *)(param_1 + 4) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)param_1;
      }
      _memcpy(*(void **)in_ECX,_Src,*(int *)(in_ECX + 4) * 2);
    }
  }
  return;
}


// ==== 1011aef0 FUN_1011aef0

void FUN_1011aef0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b6fd8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  FArray::Realloc(in_ECX,2);
  local_4 = 0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011af60 FUN_1011af60

FString * FUN_1011af60(FString *param_1,ushort *param_2)

{
  FString *pFVar1;
  FString *in_ECX;
  FString local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7019;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pFVar1 = (FString *)FString::FString(local_18,in_ECX);
  local_4 = 1;
  pFVar1 = FString::operator+=(pFVar1,param_2);
  FString::FString(param_1,pFVar1);
  local_4 = 2;
  local_14 = 0;
  local_10 = 0;
  FArray::Realloc((FArray *)local_18,2);
  local_4 = local_4 & 0xffffff00;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)local_18);
  ExceptionList = local_c;
  return param_1;
}


// ==== 1011b020 FUN_1011b020

ushort * FUN_1011b020(ushort *param_1)

{
  FString *in_ECX;
  void *pvStack_c;
  undefined1 *local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  local_8 = &LAB_101b7049;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::operator+(in_ECX,param_1);
  ExceptionList = (void *)0x0;
  return param_1;
}


// ==== 1011b0a0 FUN_1011b0a0

FString * FUN_1011b0a0(FString *param_1,ushort *param_2)

{
  FString *pFVar1;
  FString *in_ECX;
  FString local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7089;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pFVar1 = (FString *)FString::FString(local_18,in_ECX);
  local_4 = 1;
  if ((1 < *(int *)(pFVar1 + 4)) &&
     (*(short *)(*(int *)pFVar1 + -4 + *(int *)(pFVar1 + 4) * 2) != 0x5c)) {
    FString::operator+=(pFVar1,(ushort *)&DAT_101ce154);
  }
  pFVar1 = FString::operator+=(pFVar1,param_2);
  FString::FString(param_1,pFVar1);
  local_4 = 2;
  local_14 = 0;
  local_10 = 0;
  FArray::Realloc((FArray *)local_18,2);
  local_4 = local_4 & 0xffffff00;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)local_18);
  ExceptionList = local_c;
  return param_1;
}


// ==== 1011b180 FUN_1011b180

ushort * FUN_1011b180(ushort *param_1)

{
  FString *in_ECX;
  void *pvStack_c;
  undefined1 *local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  local_8 = &LAB_101b70b9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FString::operator*(in_ECX,param_1);
  ExceptionList = (void *)0x0;
  return param_1;
}


// ==== 1011b200 FUN_1011b200

FString * FUN_1011b200(FString *param_1,int param_2)

{
  int iVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined2 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b70e9;
  local_c = ExceptionList;
  iVar1 = in_ECX[1];
  if (iVar1 == 0) {
    puVar3 = &DAT_101cdd44;
    iVar2 = 0;
    iVar1 = 0;
  }
  else {
    puVar3 = (undefined2 *)*in_ECX;
    iVar2 = iVar1 + -1;
    iVar1 = iVar1 + -1;
  }
  if (param_2 < 0) {
    iVar1 = 0;
  }
  else if (param_2 < iVar1) {
    iVar1 = param_2;
  }
  ExceptionList = &local_c;
  FString::FString(param_1,puVar3 + (iVar2 - iVar1));
  ExceptionList = local_c;
  return param_1;
}


// ==== 1011b2b0 FUN_1011b2b0

FString * FUN_1011b2b0(FString *param_1)

{
  short *psVar1;
  short sVar2;
  ushort *puVar3;
  undefined4 *in_ECX;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b7119;
  local_c = ExceptionList;
  local_4 = 0;
  if (in_ECX[1] == 0) {
    puVar3 = &DAT_101cdd44;
  }
  else {
    puVar3 = (ushort *)*in_ECX;
  }
  ExceptionList = &local_c;
  FString::FString(param_1,puVar3);
  iVar4 = 0;
  if (0 < (int)in_ECX[1]) {
    do {
      psVar1 = (short *)(*(int *)param_1 + iVar4 * 2);
      sVar2 = *psVar1;
      if ((ushort)(sVar2 - 0x61U) < 0x1a) {
        sVar2 = sVar2 + -0x20;
      }
      iVar4 = iVar4 + 1;
      *psVar1 = sVar2;
    } while (iVar4 < (int)in_ECX[1]);
  }
  ExceptionList = local_c;
  return param_1;
}


// ==== 1011b360 FUN_1011b360

FString * FUN_1011b360(FString *param_1)

{
  short *psVar1;
  short sVar2;
  ushort *puVar3;
  undefined4 *in_ECX;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b7149;
  local_c = ExceptionList;
  local_4 = 0;
  if (in_ECX[1] == 0) {
    puVar3 = &DAT_101cdd44;
  }
  else {
    puVar3 = (ushort *)*in_ECX;
  }
  ExceptionList = &local_c;
  FString::FString(param_1,puVar3);
  iVar4 = 0;
  if (0 < (int)in_ECX[1]) {
    do {
      psVar1 = (short *)(*(int *)param_1 + iVar4 * 2);
      sVar2 = *psVar1;
      if ((ushort)(sVar2 - 0x41U) < 0x1a) {
        sVar2 = sVar2 + 0x20;
      }
      iVar4 = iVar4 + 1;
      *psVar1 = sVar2;
    } while (iVar4 < (int)in_ECX[1]);
  }
  ExceptionList = local_c;
  return param_1;
}


// ==== 1011b410 FUN_1011b410

void FUN_1011b410(int param_1,ushort *param_2)

{
  int iVar1;
  TArray<unsigned_short> *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7168;
  local_c = ExceptionList;
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 1;
  }
  ExceptionList = &local_c;
  TArray<unsigned_short>::TArray<unsigned_short>(in_ECX,iVar1);
  local_4 = 0;
  if (*(int *)(in_ECX + 4) != 0) {
    appStrncpy(*(ushort **)in_ECX,param_2,param_1 + 1);
  }
  ExceptionList = local_c;
  return;
}


// ==== 1011b4a0 FUN_1011b4a0

void FUN_1011b4a0(void)

{
  return;
}


// ==== 1011b4e0 FUN_1011b4e0

void FUN_1011b4e0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b71b8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011b530 FUN_1011b530

void FUN_1011b530(FString *param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b71d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 1011b590 FUN_1011b590

void FUN_1011b590(FArray *param_1)

{
  undefined4 uVar1;
  FArray *in_ECX;
  undefined2 *_Src;
  
  if (in_ECX != param_1) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(in_ECX + 8) = uVar1;
    *(undefined4 *)(in_ECX + 4) = uVar1;
    FArray::Realloc(in_ECX,2);
    if (*(int *)(in_ECX + 4) != 0) {
      if (*(int *)(param_1 + 4) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)param_1;
      }
      _memcpy(*(void **)in_ECX,_Src,*(int *)(in_ECX + 4) * 2);
    }
  }
  return;
}


// ==== 1011b5f0 FUN_1011b5f0

void FUN_1011b5f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  return;
}


// ==== 1011b6b0 FUN_1011b6b0

void FUN_1011b6b0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101b72e4;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  FString::~FString(in_ECX + 0x30);
  local_4._0_1_ = 2;
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


// ==== 1011b740 FUN_1011b740

void FUN_1011b740(FString *param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7334;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX,param_1);
  local_4 = 0;
  FString::FString(in_ECX + 0xc,param_1 + 0xc);
  local_4._0_1_ = 1;
  FString::FString(in_ECX + 0x18,param_1 + 0x18);
  local_4._0_1_ = 2;
  FString::FString(in_ECX + 0x24,param_1 + 0x24);
  local_4 = CONCAT31(local_4._1_3_,3);
  FString::FString(in_ECX + 0x30,param_1 + 0x30);
  ExceptionList = local_c;
  return;
}


// ==== 1011b7f0 FUN_1011b7f0

void FUN_1011b7f0(FArray *param_1)

{
  FArray *pFVar1;
  undefined4 uVar2;
  FArray *in_ECX;
  undefined2 *puVar3;
  
  if (in_ECX != param_1) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(in_ECX + 8) = uVar2;
    *(undefined4 *)(in_ECX + 4) = uVar2;
    FArray::Realloc(in_ECX,2);
    if (*(int *)(in_ECX + 4) != 0) {
      if (*(int *)(param_1 + 4) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)param_1;
      }
      _memcpy(*(void **)in_ECX,puVar3,*(int *)(in_ECX + 4) * 2);
    }
  }
  pFVar1 = in_ECX + 0xc;
  if (pFVar1 != param_1 + 0xc) {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(in_ECX + 0x14) = uVar2;
    *(undefined4 *)(in_ECX + 0x10) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(in_ECX + 0x10) != 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0xc);
      }
      _memcpy(*(void **)pFVar1,puVar3,*(int *)(in_ECX + 0x10) * 2);
    }
  }
  pFVar1 = in_ECX + 0x18;
  if (pFVar1 != param_1 + 0x18) {
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(in_ECX + 0x20) = uVar2;
    *(undefined4 *)(in_ECX + 0x1c) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(in_ECX + 0x1c) != 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0x18);
      }
      _memcpy(*(void **)pFVar1,puVar3,*(int *)(in_ECX + 0x1c) * 2);
    }
  }
  pFVar1 = in_ECX + 0x24;
  if (pFVar1 != param_1 + 0x24) {
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(in_ECX + 0x2c) = uVar2;
    *(undefined4 *)(in_ECX + 0x28) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(in_ECX + 0x28) != 0) {
      if (*(int *)(param_1 + 0x28) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0x24);
      }
      _memcpy(*(void **)pFVar1,puVar3,*(int *)(in_ECX + 0x28) * 2);
    }
  }
  pFVar1 = in_ECX + 0x30;
  if (pFVar1 != param_1 + 0x30) {
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(in_ECX + 0x38) = uVar2;
    *(undefined4 *)(in_ECX + 0x34) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(in_ECX + 0x34) != 0) {
      if (*(int *)(param_1 + 0x34) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0x30);
      }
      _memcpy(*(void **)pFVar1,puVar3,*(int *)(in_ECX + 0x34) * 2);
    }
  }
  return;
}


// ==== 1011b9a0 FUN_1011b9a0

void FUN_1011b9a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  return;
}


// ==== 1011ba40 FUN_1011ba40

void FUN_1011ba40(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101b73de;
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


// ==== 1011bab0 FUN_1011bab0

void FUN_1011bab0(FString *param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b741e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX,param_1);
  local_4 = 0;
  FString::FString(in_ECX + 0xc,param_1 + 0xc);
  local_4 = CONCAT31(local_4._1_3_,1);
  FString::FString(in_ECX + 0x18,param_1 + 0x18);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  ExceptionList = local_c;
  return;
}


// ==== 1011bb50 FUN_1011bb50

void FUN_1011bb50(FArray *param_1)

{
  FArray *pFVar1;
  undefined4 uVar2;
  FArray *in_ECX;
  undefined2 *puVar3;
  
  if (in_ECX != param_1) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(in_ECX + 8) = uVar2;
    *(undefined4 *)(in_ECX + 4) = uVar2;
    FArray::Realloc(in_ECX,2);
    if (*(int *)(in_ECX + 4) != 0) {
      if (*(int *)(param_1 + 4) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)param_1;
      }
      _memcpy(*(void **)in_ECX,puVar3,*(int *)(in_ECX + 4) * 2);
    }
  }
  pFVar1 = in_ECX + 0xc;
  if (pFVar1 != param_1 + 0xc) {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(in_ECX + 0x14) = uVar2;
    *(undefined4 *)(in_ECX + 0x10) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(in_ECX + 0x10) != 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0xc);
      }
      _memcpy(*(void **)pFVar1,puVar3,*(int *)(in_ECX + 0x10) * 2);
    }
  }
  pFVar1 = in_ECX + 0x18;
  if (pFVar1 != param_1 + 0x18) {
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(in_ECX + 0x20) = uVar2;
    *(undefined4 *)(in_ECX + 0x1c) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(in_ECX + 0x1c) != 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0x18);
      }
      _memcpy(*(void **)pFVar1,puVar3,*(int *)(in_ECX + 0x1c) * 2);
    }
  }
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


// ==== 1011bc70 FUN_1011bc70

undefined4 FUN_1011bc70(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7459;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_101188d0(&UObject::GObjLoaders);
  ExceptionList = local_c;
  return param_1;
}


// ==== 1011bce0 FUN_1011bce0

int FUN_1011bce0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = 0;
  while ((in_ECX != 0 && (iVar1 = thunk_FUN_10118c40(&stack0x00000004), iVar1 == 0))) {
    in_ECX = *(int *)(in_ECX + 0x10);
  }
  return iVar1;
}


// ==== 1011bd20 FUN_1011bd20

void FUN_1011bd20(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b7478;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011bd70 FUN_1011bd70

void FUN_1011bd70(FString *param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7498;
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
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  ExceptionList = local_c;
  return;
}


// ==== 1011be40 FUN_1011be40

void FUN_1011be40(FArray *param_1)

{
  undefined4 uVar1;
  FArray *in_ECX;
  undefined2 *_Src;
  
  if (in_ECX != param_1) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(in_ECX + 8) = uVar1;
    *(undefined4 *)(in_ECX + 4) = uVar1;
    FArray::Realloc(in_ECX,2);
    if (*(int *)(in_ECX + 4) != 0) {
      if (*(int *)(param_1 + 4) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)param_1;
      }
      _memcpy(*(void **)in_ECX,_Src,*(int *)(in_ECX + 4) * 2);
    }
  }
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
  return;
}


// ==== 1011bf10 FUN_1011bf10

void FUN_1011bf10(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101b7512;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UCommandlet::vftable;
  local_4 = 6;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 5;
  _eh_vector_destructor_iterator_(in_ECX + 0x124,0xc,0x10,FStringNoInit::~FStringNoInit);
  local_4._0_1_ = 4;
  _eh_vector_destructor_iterator_(in_ECX + 100,0xc,0x10,FStringNoInit::~FStringNoInit);
  local_4._0_1_ = 3;
  FString::~FString((FString *)(in_ECX + 0x58));
  local_4._0_1_ = 2;
  FString::~FString((FString *)(in_ECX + 0x4c));
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x40));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x34));
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011c000 FUN_1011c000

void FUN_1011c000(UObject *param_1)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7574;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UCommandlet::vftable;
  FString::FString((FString *)(in_ECX + 0x34),(FString *)(param_1 + 0x34));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0x40),(FString *)(param_1 + 0x40));
  local_4._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0x4c),(FString *)(param_1 + 0x4c));
  local_4._0_1_ = 3;
  FString::FString((FString *)(in_ECX + 0x58),(FString *)(param_1 + 0x58));
  local_4 = CONCAT31(local_4._1_3_,4);
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 100,param_1 + 100,0xc,0x10,FStringNoInit::FStringNoInit,
             FStringNoInit::~FStringNoInit);
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x124,param_1 + 0x124,0xc,0x10,FStringNoInit::FStringNoInit,
             FStringNoInit::~FStringNoInit);
  *(uint *)(in_ECX + 0x1e4) =
       *(uint *)(in_ECX + 0x1e4) ^ (*(uint *)(in_ECX + 0x1e4) ^ *(uint *)(param_1 + 0x1e4)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x1e4) ^ *(uint *)(in_ECX + 0x1e4)) & 2 ^ *(uint *)(in_ECX + 0x1e4);
  *(uint *)(in_ECX + 0x1e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x1e4) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x1e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x1e4) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(in_ECX + 0x1e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x1e4) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(in_ECX + 0x1e4) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x1e4) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(in_ECX + 0x1e4) = uVar1;
  *(uint *)(in_ECX + 0x1e4) = (*(uint *)(param_1 + 0x1e4) ^ uVar1) & 0x40 ^ uVar1;
  ExceptionList = local_c;
  return;
}


// ==== 1011c1c0 FUN_1011c1c0

void FUN_1011c1c0(UObject *param_1)

{
  FArray *pFVar1;
  undefined4 uVar2;
  int iVar3;
  UObject *pUVar4;
  int iVar5;
  uint uVar6;
  UObject *in_ECX;
  undefined2 *puVar7;
  UObject *pUVar8;
  int local_4;
  
  pUVar4 = param_1;
  UObject::operator=(in_ECX,param_1);
  pFVar1 = (FArray *)(in_ECX + 0x34);
  if (pFVar1 != (FArray *)(param_1 + 0x34)) {
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(in_ECX + 0x3c) = uVar2;
    *(undefined4 *)(in_ECX + 0x38) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(in_ECX + 0x38) != 0) {
      if (*(int *)(param_1 + 0x38) == 0) {
        puVar7 = &DAT_101cdd44;
      }
      else {
        puVar7 = *(undefined2 **)(param_1 + 0x34);
      }
      _memcpy(*(void **)pFVar1,puVar7,*(int *)(in_ECX + 0x38) * 2);
    }
  }
  pFVar1 = (FArray *)(in_ECX + 0x40);
  if (pFVar1 != (FArray *)(param_1 + 0x40)) {
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(in_ECX + 0x48) = uVar2;
    *(undefined4 *)(in_ECX + 0x44) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(in_ECX + 0x44) != 0) {
      if (*(int *)(param_1 + 0x44) == 0) {
        puVar7 = &DAT_101cdd44;
      }
      else {
        puVar7 = *(undefined2 **)(param_1 + 0x40);
      }
      _memcpy(*(void **)pFVar1,puVar7,*(int *)(in_ECX + 0x44) * 2);
    }
  }
  pFVar1 = (FArray *)(in_ECX + 0x4c);
  if (pFVar1 != (FArray *)(param_1 + 0x4c)) {
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(in_ECX + 0x54) = uVar2;
    *(undefined4 *)(in_ECX + 0x50) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(in_ECX + 0x50) != 0) {
      if (*(int *)(param_1 + 0x50) == 0) {
        puVar7 = &DAT_101cdd44;
      }
      else {
        puVar7 = *(undefined2 **)(param_1 + 0x4c);
      }
      _memcpy(*(void **)pFVar1,puVar7,*(int *)(in_ECX + 0x50) * 2);
    }
  }
  pFVar1 = (FArray *)(in_ECX + 0x58);
  if (pFVar1 != (FArray *)(param_1 + 0x58)) {
    uVar2 = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(in_ECX + 0x60) = uVar2;
    *(undefined4 *)(in_ECX + 0x5c) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(in_ECX + 0x5c) != 0) {
      if (*(int *)(param_1 + 0x5c) == 0) {
        puVar7 = &DAT_101cdd44;
      }
      else {
        puVar7 = *(undefined2 **)(param_1 + 0x58);
      }
      _memcpy(*(void **)pFVar1,puVar7,*(int *)(in_ECX + 0x5c) * 2);
    }
  }
  iVar5 = (int)param_1 - (int)in_ECX;
  pUVar8 = in_ECX + 0x68;
  local_4 = 0x10;
  param_1 = param_1 + 100;
  do {
    if (pUVar8 + -4 != param_1) {
      iVar3 = *(int *)(pUVar8 + iVar5);
      *(int *)(pUVar8 + 4) = iVar3;
      *(int *)pUVar8 = iVar3;
      FArray::Realloc((FArray *)(pUVar8 + -4),2);
      if (*(int *)pUVar8 != 0) {
        if (*(int *)(pUVar8 + iVar5) == 0) {
          puVar7 = &DAT_101cdd44;
        }
        else {
          puVar7 = *(undefined2 **)param_1;
        }
        _memcpy(*(void **)(pUVar8 + -4),puVar7,*(int *)pUVar8 * 2);
      }
    }
    param_1 = param_1 + 0xc;
    pUVar8 = pUVar8 + 0xc;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  param_1 = pUVar4 + 0x124;
  pUVar8 = in_ECX + 0x128;
  local_4 = 0x10;
  do {
    if (pUVar8 + -4 != param_1) {
      iVar3 = *(int *)(pUVar8 + iVar5);
      *(int *)(pUVar8 + 4) = iVar3;
      *(int *)pUVar8 = iVar3;
      FArray::Realloc((FArray *)(pUVar8 + -4),2);
      if (*(int *)pUVar8 != 0) {
        if (*(int *)(pUVar8 + iVar5) == 0) {
          puVar7 = &DAT_101cdd44;
        }
        else {
          puVar7 = *(undefined2 **)param_1;
        }
        _memcpy(*(void **)(pUVar8 + -4),puVar7,*(int *)pUVar8 * 2);
      }
    }
    param_1 = param_1 + 0xc;
    pUVar8 = pUVar8 + 0xc;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  *(uint *)(in_ECX + 0x1e4) =
       *(uint *)(in_ECX + 0x1e4) ^ (*(uint *)(in_ECX + 0x1e4) ^ *(uint *)(pUVar4 + 0x1e4)) & 1;
  uVar6 = (*(uint *)(pUVar4 + 0x1e4) ^ *(uint *)(in_ECX + 0x1e4)) & 2 ^ *(uint *)(in_ECX + 0x1e4);
  *(uint *)(in_ECX + 0x1e4) = uVar6;
  uVar6 = (*(uint *)(pUVar4 + 0x1e4) ^ uVar6) & 4 ^ uVar6;
  *(uint *)(in_ECX + 0x1e4) = uVar6;
  uVar6 = (*(uint *)(pUVar4 + 0x1e4) ^ uVar6) & 8 ^ uVar6;
  *(uint *)(in_ECX + 0x1e4) = uVar6;
  uVar6 = (*(uint *)(pUVar4 + 0x1e4) ^ uVar6) & 0x10 ^ uVar6;
  *(uint *)(in_ECX + 0x1e4) = uVar6;
  uVar6 = (*(uint *)(pUVar4 + 0x1e4) ^ uVar6) & 0x20 ^ uVar6;
  *(uint *)(in_ECX + 0x1e4) = uVar6;
  *(uint *)(in_ECX + 0x1e4) = (*(uint *)(pUVar4 + 0x1e4) ^ uVar6) & 0x40 ^ uVar6;
  return;
}


// ==== 1011c520 FUN_1011c520

void FUN_1011c520(byte param_1)

{
  UCommandlet *in_ECX;
  
  UCommandlet::~UCommandlet(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1e8);
  }
  return;
}


// ==== 1011c550 FUN_1011c550

UCommandlet * FUN_1011c550(byte param_1)

{
  UCommandlet *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x1e8,*(int *)(in_ECX + -4),UCommandlet::~UCommandlet);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UCommandlet::~UCommandlet(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1e8);
  }
  return in_ECX;
}


// ==== 1011c5d0 FUN_1011c5d0

void FUN_1011c5d0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 1011c620 FUN_1011c620

void FUN_1011c620(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b75c8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011c670 FUN_1011c670

void FUN_1011c670(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101b75f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UTextBuffer::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UTextBuffer::vftable_for_FOutputDevice_;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x40));
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011c6f0 FUN_1011c6f0

void FUN_1011c6f0(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7623;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)(in_ECX + 0x34) = FOutputDevice::vftable;
  *(undefined ***)in_ECX = UTextBuffer::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UTextBuffer::vftable_for_FOutputDevice_;
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  FString::FString((FString *)(in_ECX + 0x40),(FString *)(param_1 + 0x40));
  ExceptionList = local_c;
  return;
}


// ==== 1011c790 FUN_1011c790

void FUN_1011c790(UObject *param_1)

{
  FArray *this;
  undefined4 uVar1;
  UObject *in_ECX;
  undefined2 *_Src;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  this = (FArray *)(in_ECX + 0x40);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  if (this != (FArray *)(param_1 + 0x40)) {
    uVar1 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(in_ECX + 0x48) = uVar1;
    *(undefined4 *)(in_ECX + 0x44) = uVar1;
    FArray::Realloc(this,2);
    if (*(int *)(in_ECX + 0x44) != 0) {
      if (*(int *)(param_1 + 0x44) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)(param_1 + 0x40);
      }
      _memcpy(*(void **)this,_Src,*(int *)(in_ECX + 0x44) * 2);
    }
  }
  return;
}


// ==== 1011c810 FUN_1011c810

void FUN_1011c810(byte param_1)

{
  UTextBuffer *in_ECX;
  
  UTextBuffer::~UTextBuffer(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4c);
  }
  return;
}


// ==== 1011c840 FUN_1011c840

UTextBuffer * FUN_1011c840(byte param_1)

{
  UTextBuffer *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x4c,*(int *)(in_ECX + -4),UTextBuffer::~UTextBuffer);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTextBuffer::~UTextBuffer(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4c);
  }
  return in_ECX;
}


// ==== 1011c8b0 FUN_1011c8b0

void FUN_1011c8b0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101b7653;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UStruct::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10118750();
  local_4 = 0xffffffff;
  UField::~UField((UField *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011c930 FUN_1011c930

void FUN_1011c930(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7693;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UField::vftable;
  *(undefined ***)in_ECX = UStruct::vftable;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1011c9b0 FUN_1011c9b0

void FUN_1011c9b0(UField *param_1)

{
  UField *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b76c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UField::UField(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UStruct::vftable;
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  thunk_FUN_101186c0(param_1 + 0x54);
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
  ExceptionList = local_c;
  return;
}


// ==== 1011cac0 FUN_1011cac0

void FUN_1011cac0(UObject *param_1)

{
  UObject *pUVar1;
  UObject *in_ECX;
  int iVar2;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  thunk_FUN_10118830(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  pUVar1 = in_ECX + 0x7c;
  iVar2 = 0x10;
  do {
    *pUVar1 = pUVar1[(int)param_1 - (int)in_ECX];
    pUVar1 = pUVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


// ==== 1011cb80 FUN_1011cb80

void FUN_1011cb80(byte param_1)

{
  UStruct *in_ECX;
  
  UStruct::~UStruct(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x8c);
  }
  return;
}


// ==== 1011cbb0 FUN_1011cbb0

UStruct * FUN_1011cbb0(byte param_1)

{
  UStruct *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x8c,*(int *)(in_ECX + -4),UStruct::~UStruct);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UStruct::~UStruct(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x8c);
  }
  return in_ECX;
}


// ==== 1011cc30 FUN_1011cc30

void FUN_1011cc30(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b76e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UFunction::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UStruct::~UStruct((UStruct *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011cca0 FUN_1011cca0

void FUN_1011cca0(void)

{
  UStruct *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7708;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UStruct::UStruct(in_ECX);
  *(undefined ***)in_ECX = UFunction::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011cd00 FUN_1011cd00

void FUN_1011cd00(UStruct *param_1)

{
  UStruct *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7728;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UStruct::UStruct(in_ECX,param_1);
  *(undefined ***)in_ECX = UFunction::vftable;
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined2 *)(in_ECX + 0x90) = *(undefined2 *)(param_1 + 0x90);
  *(undefined2 *)(in_ECX + 0x92) = *(undefined2 *)(param_1 + 0x92);
  in_ECX[0x94] = param_1[0x94];
  in_ECX[0x95] = param_1[0x95];
  *(undefined2 *)(in_ECX + 0x96) = *(undefined2 *)(param_1 + 0x96);
  *(undefined2 *)(in_ECX + 0x98) = *(undefined2 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  ExceptionList = local_c;
  return;
}


// ==== 1011ce30 FUN_1011ce30

void FUN_1011ce30(UStruct *param_1)

{
  UStruct *in_ECX;
  
  UStruct::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined2 *)(in_ECX + 0x90) = *(undefined2 *)(param_1 + 0x90);
  *(undefined2 *)(in_ECX + 0x92) = *(undefined2 *)(param_1 + 0x92);
  in_ECX[0x94] = param_1[0x94];
  in_ECX[0x95] = param_1[0x95];
  *(undefined2 *)(in_ECX + 0x96) = *(undefined2 *)(param_1 + 0x96);
  *(undefined2 *)(in_ECX + 0x98) = *(undefined2 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  return;
}


// ==== 1011cf10 FUN_1011cf10

void FUN_1011cf10(byte param_1)

{
  UFunction *in_ECX;
  
  UFunction::~UFunction(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xb0);
  }
  return;
}


// ==== 1011cf40 FUN_1011cf40

UFunction * FUN_1011cf40(byte param_1)

{
  UFunction *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0xb0,*(int *)(in_ECX + -4),UFunction::~UFunction);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UFunction::~UFunction(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xb0);
  }
  return in_ECX;
}


// ==== 1011cfc0 FUN_1011cfc0

void FUN_1011cfc0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b7748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UState::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UStruct::~UStruct((UStruct *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011d030 FUN_1011d030

void FUN_1011d030(void)

{
  UStruct *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7768;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UStruct::UStruct(in_ECX);
  *(undefined ***)in_ECX = UState::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011d090 FUN_1011d090

void FUN_1011d090(UStruct *param_1)

{
  UStruct *in_ECX;
  int iVar1;
  UStruct *pUVar2;
  UStruct *pUVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UStruct::UStruct(in_ECX,param_1);
  *(undefined ***)in_ECX = UState::vftable;
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined2 *)(in_ECX + 0xa0) = *(undefined2 *)(param_1 + 0xa0);
  pUVar2 = param_1 + 0xa4;
  pUVar3 = in_ECX + 0xa4;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  ExceptionList = local_c;
  return;
}


// ==== 1011d170 FUN_1011d170

void FUN_1011d170(UStruct *param_1)

{
  UStruct *pUVar1;
  UStruct *in_ECX;
  int iVar2;
  
  UStruct::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined2 *)(in_ECX + 0xa0) = *(undefined2 *)(param_1 + 0xa0);
  pUVar1 = in_ECX + 0xa4;
  iVar2 = 0x100;
  do {
    *(undefined4 *)pUVar1 = *(undefined4 *)(pUVar1 + ((int)param_1 - (int)in_ECX));
    pUVar1 = pUVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


// ==== 1011d210 FUN_1011d210

void FUN_1011d210(byte param_1)

{
  UState *in_ECX;
  
  UState::~UState(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4a4);
  }
  return;
}


// ==== 1011d240 FUN_1011d240

UState * FUN_1011d240(byte param_1)

{
  UState *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x4a4,*(int *)(in_ECX + -4),UState::~UState);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UState::~UState(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4a4);
  }
  return in_ECX;
}


// ==== 1011d2c0 FUN_1011d2c0

void FUN_1011d2c0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101b77b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UEnum::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10118d50();
  local_4 = 0xffffffff;
  UField::~UField((UField *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011d340 FUN_1011d340

void FUN_1011d340(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b77f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UField::vftable;
  *(undefined ***)in_ECX = UEnum::vftable;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1011d3c0 FUN_1011d3c0

void FUN_1011d3c0(UField *param_1)

{
  UField *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7823;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UField::UField(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UEnum::vftable;
  thunk_FUN_10118cb0(param_1 + 0x40);
  ExceptionList = local_c;
  return;
}


// ==== 1011d440 FUN_1011d440

void FUN_1011d440(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  thunk_FUN_10118e30(param_1 + 0x40);
  return;
}


// ==== 1011d480 FUN_1011d480

void FUN_1011d480(byte param_1)

{
  UEnum *in_ECX;
  
  UEnum::~UEnum(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4c);
  }
  return;
}


// ==== 1011d4b0 FUN_1011d4b0

UEnum * FUN_1011d4b0(byte param_1)

{
  UEnum *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x4c,*(int *)(in_ECX + -4),UEnum::~UEnum);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UEnum::~UEnum(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4c);
  }
  return in_ECX;
}


// ==== 1011d520 FUN_1011d520

undefined4 FUN_1011d520(int param_1)

{
  int in_ECX;
  int local_8;
  int local_4;
  
  if ((*(uint *)(in_ECX + 0x1c) & 0x4000000) != 0) {
    if ((*(uint *)(in_ECX + 0x1c) & 0x10) != 0) {
      return 1;
    }
    if ((*(int *)(in_ECX + 0x40) != 0) && (*(int *)(in_ECX + 0x18) == param_1)) {
      thunk_FUN_101191b0(in_ECX);
      while ((local_4 != 0 && (local_8 == in_ECX))) {
        if ((*(uint *)(local_4 + 0x8c) & 0x400) != 0) {
          return 1;
        }
        local_4 = *(int *)(local_4 + 0x38);
        thunk_FUN_101142d0();
      }
    }
  }
  return 0;
}


// ==== 1011d5c0 FUN_1011d5c0

void FUN_1011d5c0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101b7853;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UConst::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x40));
  local_4 = 0xffffffff;
  UField::~UField((UField *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011d640 FUN_1011d640

void FUN_1011d640(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b789b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UField::vftable;
  *(undefined ***)in_ECX = UConst::vftable;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 1011d6c0 FUN_1011d6c0

void FUN_1011d6c0(UField *param_1)

{
  UField *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b78d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UField::UField(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UConst::vftable;
  FString::FString((FString *)(in_ECX + 0x40),(FString *)(param_1 + 0x40));
  ExceptionList = local_c;
  return;
}


// ==== 1011d740 FUN_1011d740

void FUN_1011d740(UObject *param_1)

{
  FArray *this;
  undefined4 uVar1;
  UObject *in_ECX;
  undefined2 *_Src;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  this = (FArray *)(in_ECX + 0x40);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  if (this != (FArray *)(param_1 + 0x40)) {
    uVar1 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(in_ECX + 0x48) = uVar1;
    *(undefined4 *)(in_ECX + 0x44) = uVar1;
    FArray::Realloc(this,2);
    if (*(int *)(in_ECX + 0x44) != 0) {
      if (*(int *)(param_1 + 0x44) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)(param_1 + 0x40);
      }
      _memcpy(*(void **)this,_Src,*(int *)(in_ECX + 0x44) * 2);
    }
  }
  return;
}


// ==== 1011d7d0 FUN_1011d7d0

void FUN_1011d7d0(byte param_1)

{
  UConst *in_ECX;
  
  UConst::~UConst(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4c);
  }
  return;
}


// ==== 1011d800 FUN_1011d800

UConst * FUN_1011d800(byte param_1)

{
  UConst *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x4c,*(int *)(in_ECX + -4),UConst::~UConst);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UConst::~UConst(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4c);
  }
  return in_ECX;
}


// ==== 1011d870 FUN_1011d870

void FUN_1011d870(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101b7903;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UProperty::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FString::~FString((FString *)(in_ECX + 0x6c));
  local_4 = 0xffffffff;
  UField::~UField((UField *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011d8f0 FUN_1011d8f0

void FUN_1011d8f0(UField *param_1)

{
  UField *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7933;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UField::UField(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UProperty::vftable;
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined2 *)(in_ECX + 0x50) = *(undefined2 *)(param_1 + 0x50);
  *(undefined2 *)(in_ECX + 0x52) = *(undefined2 *)(param_1 + 0x52);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  FString::FString((FString *)(in_ECX + 0x6c),(FString *)(param_1 + 0x6c));
  ExceptionList = local_c;
  return;
}


// ==== 1011d9d0 FUN_1011d9d0

void FUN_1011d9d0(UObject *param_1)

{
  FArray *this;
  undefined4 uVar1;
  UObject *in_ECX;
  undefined2 *_Src;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined2 *)(in_ECX + 0x50) = *(undefined2 *)(param_1 + 0x50);
  *(undefined2 *)(in_ECX + 0x52) = *(undefined2 *)(param_1 + 0x52);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  this = (FArray *)(in_ECX + 0x6c);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  if (this != (FArray *)(param_1 + 0x6c)) {
    uVar1 = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(in_ECX + 0x74) = uVar1;
    *(undefined4 *)(in_ECX + 0x70) = uVar1;
    FArray::Realloc(this,2);
    if (*(int *)(in_ECX + 0x70) != 0) {
      if (*(int *)(param_1 + 0x70) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)(param_1 + 0x6c);
      }
      _memcpy(*(void **)this,_Src,*(int *)(in_ECX + 0x70) * 2);
    }
  }
  return;
}


// ==== 1011dac0 FUN_1011dac0

void FUN_1011dac0(byte param_1)

{
  UProperty *in_ECX;
  
  UProperty::~UProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x78);
  }
  return;
}


// ==== 1011daf0 FUN_1011daf0

UProperty * FUN_1011daf0(byte param_1)

{
  UProperty *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x78,*(int *)(in_ECX + -4),UProperty::~UProperty);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UProperty::~UProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x78);
  }
  return in_ECX;
}


// ==== 1011db60 FUN_1011db60

void FUN_1011db60(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b7958;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UByteProperty::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UProperty::~UProperty((UProperty *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011dbd0 FUN_1011dbd0

void FUN_1011dbd0(void)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7978;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX);
  *(undefined ***)in_ECX = UByteProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011dc30 FUN_1011dc30

void FUN_1011dc30(undefined4 param_1,int param_2,ushort *param_3,ulong param_4,undefined4 param_5)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7998;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,0,param_2,param_3,param_4);
  *(undefined ***)in_ECX = UByteProperty::vftable;
  *(undefined4 *)(in_ECX + 0x78) = param_5;
  ExceptionList = local_c;
  return;
}


// ==== 1011dcb0 FUN_1011dcb0

void FUN_1011dcb0(UProperty *param_1)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b79b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,param_1);
  *(undefined ***)in_ECX = UByteProperty::vftable;
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  ExceptionList = local_c;
  return;
}


// ==== 1011dd20 FUN_1011dd20

void FUN_1011dd20(UProperty *param_1)

{
  UProperty *in_ECX;
  
  UProperty::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return;
}


// ==== 1011dd50 FUN_1011dd50

void FUN_1011dd50(byte param_1)

{
  UByteProperty *in_ECX;
  
  UByteProperty::~UByteProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return;
}


// ==== 1011dd80 FUN_1011dd80

UByteProperty * FUN_1011dd80(byte param_1)

{
  UByteProperty *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x7c,*(int *)(in_ECX + -4),UByteProperty::~UByteProperty)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UByteProperty::~UByteProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return in_ECX;
}


// ==== 1011ddf0 FUN_1011ddf0

void FUN_1011ddf0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b79d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UIntProperty::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UProperty::~UProperty((UProperty *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011de60 FUN_1011de60

void FUN_1011de60(void)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b79f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX);
  *(undefined ***)in_ECX = UIntProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011dec0 FUN_1011dec0

void FUN_1011dec0(undefined4 param_1,int param_2,ushort *param_3,ulong param_4)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7a18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,0,param_2,param_3,param_4);
  *(undefined ***)in_ECX = UIntProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011df40 FUN_1011df40

void FUN_1011df40(UProperty *param_1)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7a38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,param_1);
  *(undefined ***)in_ECX = UIntProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011dfb0 FUN_1011dfb0

void FUN_1011dfb0(UProperty *param_1)

{
  UProperty *in_ECX;
  
  UProperty::operator=(in_ECX,param_1);
  return;
}


// ==== 1011dfd0 FUN_1011dfd0

void FUN_1011dfd0(byte param_1)

{
  UIntProperty *in_ECX;
  
  UIntProperty::~UIntProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x78);
  }
  return;
}


// ==== 1011e000 FUN_1011e000

UIntProperty * FUN_1011e000(byte param_1)

{
  UIntProperty *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x78,*(int *)(in_ECX + -4),UIntProperty::~UIntProperty);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UIntProperty::~UIntProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x78);
  }
  return in_ECX;
}


// ==== 1011e070 FUN_1011e070

void FUN_1011e070(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b7a58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UBoolProperty::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UProperty::~UProperty((UProperty *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011e0e0 FUN_1011e0e0

void FUN_1011e0e0(void)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7a78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX);
  *(undefined ***)in_ECX = UBoolProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011e140 FUN_1011e140

void FUN_1011e140(undefined4 param_1,int param_2,ushort *param_3,ulong param_4)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7a98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,0,param_2,param_3,param_4);
  *(undefined ***)in_ECX = UBoolProperty::vftable;
  *(undefined4 *)(in_ECX + 0x78) = 1;
  ExceptionList = local_c;
  return;
}


// ==== 1011e1c0 FUN_1011e1c0

void FUN_1011e1c0(UProperty *param_1)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7ab8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,param_1);
  *(undefined ***)in_ECX = UBoolProperty::vftable;
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  ExceptionList = local_c;
  return;
}


// ==== 1011e230 FUN_1011e230

void FUN_1011e230(UProperty *param_1)

{
  UProperty *in_ECX;
  
  UProperty::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return;
}


// ==== 1011e260 FUN_1011e260

void FUN_1011e260(byte param_1)

{
  UBoolProperty *in_ECX;
  
  UBoolProperty::~UBoolProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return;
}


// ==== 1011e290 FUN_1011e290

UBoolProperty * FUN_1011e290(byte param_1)

{
  UBoolProperty *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x7c,*(int *)(in_ECX + -4),UBoolProperty::~UBoolProperty)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UBoolProperty::~UBoolProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return in_ECX;
}


// ==== 1011e300 FUN_1011e300

void FUN_1011e300(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b7ad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UFloatProperty::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UProperty::~UProperty((UProperty *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011e370 FUN_1011e370

void FUN_1011e370(void)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7af8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX);
  *(undefined ***)in_ECX = UFloatProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011e3d0 FUN_1011e3d0

void FUN_1011e3d0(undefined4 param_1,int param_2,ushort *param_3,ulong param_4)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7b18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,0,param_2,param_3,param_4);
  *(undefined ***)in_ECX = UFloatProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011e450 FUN_1011e450

void FUN_1011e450(UProperty *param_1)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7b38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,param_1);
  *(undefined ***)in_ECX = UFloatProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011e4c0 FUN_1011e4c0

void FUN_1011e4c0(UProperty *param_1)

{
  UProperty *in_ECX;
  
  UProperty::operator=(in_ECX,param_1);
  return;
}


// ==== 1011e4e0 FUN_1011e4e0

void FUN_1011e4e0(byte param_1)

{
  UFloatProperty *in_ECX;
  
  UFloatProperty::~UFloatProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x78);
  }
  return;
}


// ==== 1011e510 FUN_1011e510

UFloatProperty * FUN_1011e510(byte param_1)

{
  UFloatProperty *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x78,*(int *)(in_ECX + -4),UFloatProperty::~UFloatProperty);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UFloatProperty::~UFloatProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x78);
  }
  return in_ECX;
}


// ==== 1011e580 FUN_1011e580

void FUN_1011e580(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b7b58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UObjectProperty::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UProperty::~UProperty((UProperty *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011e5f0 FUN_1011e5f0

void FUN_1011e5f0(void)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7b78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX);
  *(undefined ***)in_ECX = UObjectProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011e650 FUN_1011e650

void FUN_1011e650(undefined4 param_1,int param_2,ushort *param_3,ulong param_4,undefined4 param_5)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7b98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,0,param_2,param_3,param_4);
  *(undefined ***)in_ECX = UObjectProperty::vftable;
  *(undefined4 *)(in_ECX + 0x78) = param_5;
  ExceptionList = local_c;
  return;
}


// ==== 1011e6d0 FUN_1011e6d0

void FUN_1011e6d0(UProperty *param_1)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7bb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,param_1);
  *(undefined ***)in_ECX = UObjectProperty::vftable;
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  ExceptionList = local_c;
  return;
}


// ==== 1011e740 FUN_1011e740

void FUN_1011e740(UProperty *param_1)

{
  UProperty *in_ECX;
  
  UProperty::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return;
}


// ==== 1011e770 FUN_1011e770

void FUN_1011e770(byte param_1)

{
  UObjectProperty *in_ECX;
  
  UObjectProperty::~UObjectProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return;
}


// ==== 1011e7a0 FUN_1011e7a0

UObjectProperty * FUN_1011e7a0(byte param_1)

{
  UObjectProperty *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x7c,*(int *)(in_ECX + -4),UObjectProperty::~UObjectProperty);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UObjectProperty::~UObjectProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return in_ECX;
}


// ==== 1011e810 FUN_1011e810

void FUN_1011e810(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b7bd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UClassProperty::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObjectProperty::~UObjectProperty((UObjectProperty *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011e880 FUN_1011e880

void FUN_1011e880(void)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7c00;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX);
  *(undefined ***)in_ECX = UObjectProperty::vftable;
  *(undefined ***)in_ECX = UClassProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011e8f0 FUN_1011e8f0

void FUN_1011e8f0(undefined4 param_1,int param_2,ushort *param_3,ulong param_4,undefined4 param_5)

{
  UObjectProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7c18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObjectProperty::UObjectProperty(in_ECX,0,param_2,param_3,param_4,&UClass::PrivateStaticClass);
  *(undefined ***)in_ECX = UClassProperty::vftable;
  *(undefined4 *)(in_ECX + 0x7c) = param_5;
  ExceptionList = local_c;
  return;
}


// ==== 1011e980 FUN_1011e980

void FUN_1011e980(UObjectProperty *param_1)

{
  UObjectProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7c38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObjectProperty::UObjectProperty(in_ECX,param_1);
  *(undefined ***)in_ECX = UClassProperty::vftable;
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  ExceptionList = local_c;
  return;
}


// ==== 1011e9f0 FUN_1011e9f0

void FUN_1011e9f0(UProperty *param_1)

{
  UProperty *in_ECX;
  
  UProperty::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  return;
}


// ==== 1011ea20 FUN_1011ea20

void FUN_1011ea20(byte param_1)

{
  UClassProperty *in_ECX;
  
  UClassProperty::~UClassProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x80);
  }
  return;
}


// ==== 1011ea50 FUN_1011ea50

UClassProperty * FUN_1011ea50(byte param_1)

{
  UClassProperty *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x80,*(int *)(in_ECX + -4),UClassProperty::~UClassProperty);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UClassProperty::~UClassProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x80);
  }
  return in_ECX;
}


// ==== 1011ead0 FUN_1011ead0

void FUN_1011ead0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b7c58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UNameProperty::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UProperty::~UProperty((UProperty *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011eb40 FUN_1011eb40

void FUN_1011eb40(void)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7c78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX);
  *(undefined ***)in_ECX = UNameProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011eba0 FUN_1011eba0

void FUN_1011eba0(undefined4 param_1,int param_2,ushort *param_3,ulong param_4)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7c98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,0,param_2,param_3,param_4);
  *(undefined ***)in_ECX = UNameProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011ec20 FUN_1011ec20

void FUN_1011ec20(UProperty *param_1)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7cb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,param_1);
  *(undefined ***)in_ECX = UNameProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011ec90 FUN_1011ec90

void FUN_1011ec90(UProperty *param_1)

{
  UProperty *in_ECX;
  
  UProperty::operator=(in_ECX,param_1);
  return;
}


// ==== 1011ecb0 FUN_1011ecb0

void FUN_1011ecb0(byte param_1)

{
  UNameProperty *in_ECX;
  
  UNameProperty::~UNameProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x78);
  }
  return;
}


// ==== 1011ece0 FUN_1011ece0

UNameProperty * FUN_1011ece0(byte param_1)

{
  UNameProperty *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x78,*(int *)(in_ECX + -4),UNameProperty::~UNameProperty)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UNameProperty::~UNameProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x78);
  }
  return in_ECX;
}


// ==== 1011ed50 FUN_1011ed50

void FUN_1011ed50(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b7cd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UStrProperty::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UProperty::~UProperty((UProperty *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011edc0 FUN_1011edc0

void FUN_1011edc0(void)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7cf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX);
  *(undefined ***)in_ECX = UStrProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011ee20 FUN_1011ee20

void FUN_1011ee20(undefined4 param_1,int param_2,ushort *param_3,ulong param_4)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7d18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,0,param_2,param_3,param_4);
  *(undefined ***)in_ECX = UStrProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011eea0 FUN_1011eea0

void FUN_1011eea0(UProperty *param_1)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7d38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,param_1);
  *(undefined ***)in_ECX = UStrProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011ef10 FUN_1011ef10

void FUN_1011ef10(UProperty *param_1)

{
  UProperty *in_ECX;
  
  UProperty::operator=(in_ECX,param_1);
  return;
}


// ==== 1011ef30 FUN_1011ef30

void FUN_1011ef30(byte param_1)

{
  UStrProperty *in_ECX;
  
  UStrProperty::~UStrProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x78);
  }
  return;
}


// ==== 1011ef60 FUN_1011ef60

UStrProperty * FUN_1011ef60(byte param_1)

{
  UStrProperty *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x78,*(int *)(in_ECX + -4),UStrProperty::~UStrProperty);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UStrProperty::~UStrProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x78);
  }
  return in_ECX;
}


// ==== 1011efd0 FUN_1011efd0

void FUN_1011efd0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b7d58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UFixedArrayProperty::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UProperty::~UProperty((UProperty *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011f040 FUN_1011f040

void FUN_1011f040(void)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7d78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX);
  *(undefined ***)in_ECX = UFixedArrayProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011f0a0 FUN_1011f0a0

void FUN_1011f0a0(undefined4 param_1,int param_2,ushort *param_3,ulong param_4)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7d98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,0,param_2,param_3,param_4);
  *(undefined ***)in_ECX = UFixedArrayProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011f120 FUN_1011f120

void FUN_1011f120(UProperty *param_1)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7db8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,param_1);
  *(undefined ***)in_ECX = UFixedArrayProperty::vftable;
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  ExceptionList = local_c;
  return;
}


// ==== 1011f1a0 FUN_1011f1a0

void FUN_1011f1a0(UProperty *param_1)

{
  UProperty *in_ECX;
  
  UProperty::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  return;
}


// ==== 1011f1d0 FUN_1011f1d0

void FUN_1011f1d0(byte param_1)

{
  UFixedArrayProperty *in_ECX;
  
  UFixedArrayProperty::~UFixedArrayProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x80);
  }
  return;
}


// ==== 1011f200 FUN_1011f200

UFixedArrayProperty * FUN_1011f200(byte param_1)

{
  UFixedArrayProperty *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x80,*(int *)(in_ECX + -4),UFixedArrayProperty::~UFixedArrayProperty);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UFixedArrayProperty::~UFixedArrayProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x80);
  }
  return in_ECX;
}


// ==== 1011f280 FUN_1011f280

void FUN_1011f280(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b7dd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UArrayProperty::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UProperty::~UProperty((UProperty *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011f2f0 FUN_1011f2f0

void FUN_1011f2f0(void)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7df8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX);
  *(undefined ***)in_ECX = UArrayProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011f350 FUN_1011f350

void FUN_1011f350(undefined4 param_1,int param_2,ushort *param_3,ulong param_4)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7e18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,0,param_2,param_3,param_4);
  *(undefined ***)in_ECX = UArrayProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011f3d0 FUN_1011f3d0

void FUN_1011f3d0(UProperty *param_1)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7e38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,param_1);
  *(undefined ***)in_ECX = UArrayProperty::vftable;
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  ExceptionList = local_c;
  return;
}


// ==== 1011f440 FUN_1011f440

void FUN_1011f440(UProperty *param_1)

{
  UProperty *in_ECX;
  
  UProperty::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return;
}


// ==== 1011f470 FUN_1011f470

void FUN_1011f470(byte param_1)

{
  UArrayProperty *in_ECX;
  
  UArrayProperty::~UArrayProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return;
}


// ==== 1011f4a0 FUN_1011f4a0

UArrayProperty * FUN_1011f4a0(byte param_1)

{
  UArrayProperty *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x7c,*(int *)(in_ECX + -4),UArrayProperty::~UArrayProperty);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UArrayProperty::~UArrayProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return in_ECX;
}


// ==== 1011f510 FUN_1011f510

void FUN_1011f510(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b7e58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UMapProperty::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UProperty::~UProperty((UProperty *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011f580 FUN_1011f580

void FUN_1011f580(void)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7e78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX);
  *(undefined ***)in_ECX = UMapProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011f5e0 FUN_1011f5e0

void FUN_1011f5e0(undefined4 param_1,int param_2,ushort *param_3,ulong param_4)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7e98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,0,param_2,param_3,param_4);
  *(undefined ***)in_ECX = UMapProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011f660 FUN_1011f660

void FUN_1011f660(UProperty *param_1)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7eb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,param_1);
  *(undefined ***)in_ECX = UMapProperty::vftable;
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  ExceptionList = local_c;
  return;
}


// ==== 1011f6e0 FUN_1011f6e0

void FUN_1011f6e0(UProperty *param_1)

{
  UProperty *in_ECX;
  
  UProperty::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  return;
}


// ==== 1011f710 FUN_1011f710

void FUN_1011f710(byte param_1)

{
  UMapProperty *in_ECX;
  
  UMapProperty::~UMapProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x80);
  }
  return;
}


// ==== 1011f740 FUN_1011f740

UMapProperty * FUN_1011f740(byte param_1)

{
  UMapProperty *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x80,*(int *)(in_ECX + -4),UMapProperty::~UMapProperty);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UMapProperty::~UMapProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x80);
  }
  return in_ECX;
}


// ==== 1011f7c0 FUN_1011f7c0

void FUN_1011f7c0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b7ed8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UStructProperty::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UProperty::~UProperty((UProperty *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011f830 FUN_1011f830

void FUN_1011f830(void)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7ef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX);
  *(undefined ***)in_ECX = UStructProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011f890 FUN_1011f890

void FUN_1011f890(undefined4 param_1,int param_2,ushort *param_3,ulong param_4,undefined4 param_5)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7f18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,0,param_2,param_3,param_4);
  *(undefined ***)in_ECX = UStructProperty::vftable;
  *(undefined4 *)(in_ECX + 0x78) = param_5;
  ExceptionList = local_c;
  return;
}


// ==== 1011f910 FUN_1011f910

void FUN_1011f910(UProperty *param_1)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7f38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,param_1);
  *(undefined ***)in_ECX = UStructProperty::vftable;
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  ExceptionList = local_c;
  return;
}


// ==== 1011f980 FUN_1011f980

void FUN_1011f980(UProperty *param_1)

{
  UProperty *in_ECX;
  
  UProperty::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return;
}


// ==== 1011f9b0 FUN_1011f9b0

void FUN_1011f9b0(byte param_1)

{
  UStructProperty *in_ECX;
  
  UStructProperty::~UStructProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return;
}


// ==== 1011f9e0 FUN_1011f9e0

UStructProperty * FUN_1011f9e0(byte param_1)

{
  UStructProperty *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x7c,*(int *)(in_ECX + -4),UStructProperty::~UStructProperty);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UStructProperty::~UStructProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return in_ECX;
}


// ==== 1011fa50 FUN_1011fa50

void FUN_1011fa50(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b7f58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UDelegateProperty::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UProperty::~UProperty((UProperty *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 1011fac0 FUN_1011fac0

void FUN_1011fac0(void)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7f78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX);
  *(undefined ***)in_ECX = UDelegateProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011fb20 FUN_1011fb20

void FUN_1011fb20(undefined4 param_1,int param_2,ushort *param_3,ulong param_4)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7f98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,0,param_2,param_3,param_4);
  *(undefined ***)in_ECX = UDelegateProperty::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011fba0 FUN_1011fba0

void FUN_1011fba0(UProperty *param_1)

{
  UProperty *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b7fb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UProperty::UProperty(in_ECX,param_1);
  *(undefined ***)in_ECX = UDelegateProperty::vftable;
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  ExceptionList = local_c;
  return;
}


// ==== 1011fc10 FUN_1011fc10

void FUN_1011fc10(UProperty *param_1)

{
  UProperty *in_ECX;
  
  UProperty::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return;
}


// ==== 1011fc40 FUN_1011fc40

void FUN_1011fc40(byte param_1)

{
  UDelegateProperty *in_ECX;
  
  UDelegateProperty::~UDelegateProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return;
}


// ==== 1011fc70 FUN_1011fc70

UDelegateProperty * FUN_1011fc70(byte param_1)

{
  UDelegateProperty *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x7c,*(int *)(in_ECX + -4),UDelegateProperty::~UDelegateProperty);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UDelegateProperty::~UDelegateProperty(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return in_ECX;
}


// ==== 1011fce0 FUN_1011fce0

undefined4 FUN_1011fce0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int *local_4;
  
  if (in_ECX == 0) {
    local_4 = (int *)0x0;
  }
  else {
    local_4 = *(int **)(in_ECX + 0x48);
  }
  thunk_FUN_10114340();
  do {
    if (local_4 == (int *)0x0) {
      return 1;
    }
    iVar3 = 0;
    if (0 < local_4[0x10]) {
      do {
        iVar1 = local_4[0x11] * iVar3 + local_4[0x15];
        if (param_2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = iVar1 + param_2;
        }
        iVar1 = (**(code **)(*local_4 + 0x84))(iVar1 + param_1,iVar2);
        if (iVar1 == 0) {
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_4[0x10]);
    }
    local_4 = (int *)local_4[0xe];
    thunk_FUN_10114340();
  } while( true );
}


// ==== 1011fdb0 FUN_1011fdb0

void FUN_1011fdb0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b7fe3;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10118750();
  *in_ECX = FArchive::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 1011fe10 FUN_1011fe10

void FUN_1011fe10(FArchive *param_1)

{
  FArchive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8013;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArchive::FArchive(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = FBitWriter::vftable;
  thunk_FUN_101186c0(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  ExceptionList = local_c;
  return;
}


// ==== 1011fea0 FUN_1011fea0

void FUN_1011fea0(int param_1)

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
  thunk_FUN_10118830(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return;
}


// ==== 1011ff40 FUN_1011ff40

void FUN_1011ff40(byte param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8043;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10118750();
  local_4 = 0xffffffff;
  *in_ECX = FArchive::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 1011ffc0 FUN_1011ffc0

FBitWriter * FUN_1011ffc0(byte param_1)

{
  FBitWriter *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x4c,*(int *)(in_ECX + -4),FBitWriter::~FBitWriter);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FBitWriter::~FBitWriter(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  return in_ECX;
}


// ==== 10120040 FUN_10120040

void FUN_10120040(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8073;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10118750();
  *in_ECX = FArchive::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 101200a0 FUN_101200a0

void FUN_101200a0(FArchive *param_1)

{
  FArchive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b80a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArchive::FArchive(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = FBitReader::vftable;
  thunk_FUN_101186c0(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  ExceptionList = local_c;
  return;
}


// ==== 10120130 FUN_10120130

void FUN_10120130(int param_1)

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
  thunk_FUN_10118830(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return;
}


// ==== 101201d0 FUN_101201d0

void FUN_101201d0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b80d3;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10118750();
  local_4 = 0xffffffff;
  *in_ECX = FArchive::vftable;
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10120250 FUN_10120250

FBitReader * FUN_10120250(byte param_1)

{
  FBitReader *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x4c,*(int *)(in_ECX + -4),FBitReader::~FBitReader);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FBitReader::~FBitReader(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  return in_ECX;
}


// ==== 101202d0 FUN_101202d0

void FUN_101202d0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}


// ==== 10120330 FUN_10120330

void FUN_10120330(undefined4 param_1,ushort *param_2)

{
  FArray *this;
  int iVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b813b;
  local_c = ExceptionList;
  this = (FArray *)(in_ECX + 1);
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  local_4 = 2;
  *in_ECX = param_1;
  if (*(ushort **)this != param_2) {
    if (*param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = appStrlen(param_2);
      iVar1 = iVar1 + 1;
    }
    in_ECX[3] = iVar1;
    in_ECX[2] = iVar1;
    FArray::Realloc(this,2);
    if (in_ECX[2] != 0) {
      _memcpy(*(void **)this,param_2,in_ECX[2] * 2);
    }
  }
  ExceptionList = local_c;
  return;
}


// ==== 10120410 FUN_10120410

void FUN_10120410(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b815b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 10120460 FUN_10120460

void FUN_10120460(undefined4 param_1,undefined2 *param_2,int param_3)

{
  FArray *this;
  undefined4 *in_ECX;
  undefined2 *_Src;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8180;
  local_c = ExceptionList;
  local_4 = 0;
  this = (FArray *)(in_ECX + 1);
  ExceptionList = &local_c;
  *in_ECX = param_1;
  if (this != (FArray *)&param_2) {
    in_ECX[3] = param_3;
    in_ECX[2] = param_3;
    FArray::Realloc(this,2);
    if (in_ECX[2] != 0) {
      _Src = param_2;
      if (param_3 == 0) {
        _Src = &DAT_101cdd44;
      }
      _memcpy(*(void **)this,_Src,in_ECX[2] * 2);
    }
  }
  local_4 = 0xffffffff;
  FString::~FString((FString *)&param_2);
  ExceptionList = local_c;
  return;
}


// ==== 10120520 FUN_10120520

void FUN_10120520(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b819b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  FString::FString((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  ExceptionList = local_c;
  return;
}


// ==== 10120580 FUN_10120580

void FUN_10120580(undefined4 *param_1)

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
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  thunk_FUN_10119480(param_1 + 0xd);
  return;
}


// ==== 10120600 FUN_10120600

void FUN_10120600(TArray<unsigned_short> *param_1)

{
  TArray<unsigned_short> *pTVar1;
  TArray<unsigned_short> *in_ECX;
  
  if (in_ECX != param_1) {
    pTVar1 = TArray<unsigned_short>::operator+(in_ECX,param_1);
    TArray<unsigned_short>::operator=(in_ECX,pTVar1);
  }
  return;
}


// ==== 10120630 FUN_10120630

void FUN_10120630(int *param_1)

{
  FString *this;
  int iVar1;
  int iVar2;
  int *piVar3;
  FArray *in_ECX;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar3 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b81b8;
  local_c = ExceptionList;
  iVar1 = param_1[1];
  iVar4 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar1;
  *(int *)(in_ECX + 8) = iVar1;
  FArray::Realloc(in_ECX,0xc);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = *(int *)(in_ECX + 4);
      iVar1 = iVar2 + 1;
      *(int *)(in_ECX + 4) = iVar1;
      if (*(int *)(in_ECX + 8) < iVar1) {
        *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
        FArray::Realloc(in_ECX,0xc);
      }
      this = (FString *)(*(int *)in_ECX + iVar2 * 0xc);
      if (this != (FString *)0x0) {
        FString::FString(this,(FString *)(*piVar3 + (int)param_1));
      }
      param_1 = (int *)((int)param_1 + 0xc);
      iVar4 = iVar4 + 1;
    } while (iVar4 < piVar3[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10120730 FUN_10120730

void FUN_10120730(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b81d8;
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
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10120810 FUN_10120810

void FUN_10120810(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *in_ECX;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,4);
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  do {
    iVar3 = *(int *)(in_ECX + 4);
    iVar2 = iVar3 + 1;
    *(int *)(in_ECX + 4) = iVar2;
    if (*(int *)(in_ECX + 8) < iVar2) {
      *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
      FArray::Realloc(in_ECX,4);
    }
    puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4 * 4);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < *(int *)(param_1 + 4));
  return;
}


// ==== 101208b0 FUN_101208b0

void FUN_101208b0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b81f8;
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
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10120990 FUN_10120990

void FUN_10120990(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *pFVar4;
  undefined4 *puVar5;
  FArray *in_ECX;
  int iVar6;
  
  pFVar4 = param_1;
  if (in_ECX == param_1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar6 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,0xc);
  if (0 < *(int *)(param_1 + 4)) {
    param_1 = (FArray *)0x0;
    do {
      iVar3 = *(int *)(in_ECX + 4);
      iVar2 = iVar3 + 1;
      *(int *)(in_ECX + 4) = iVar2;
      if (*(int *)(in_ECX + 8) < iVar2) {
        *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
        FArray::Realloc(in_ECX,0xc);
      }
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)(*(int *)pFVar4 + (int)param_1);
        *puVar1 = *puVar5;
        puVar1[1] = puVar5[1];
        puVar1[2] = puVar5[2];
      }
      param_1 = (FArray *)((int)param_1 + 0xc);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(pFVar4 + 4));
    return;
  }
  return;
}


// ==== 10120a60 FUN_10120a60

void FUN_10120a60(int *param_1)

{
  FPackageInfo *this;
  int iVar1;
  int iVar2;
  int *piVar3;
  FArray *in_ECX;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar3 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8218;
  local_c = ExceptionList;
  iVar1 = param_1[1];
  iVar4 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)in_ECX = 0;
  *(int *)(in_ECX + 4) = iVar1;
  *(int *)(in_ECX + 8) = iVar1;
  FArray::Realloc(in_ECX,0x44);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      iVar2 = *(int *)(in_ECX + 4);
      iVar1 = iVar2 + 1;
      *(int *)(in_ECX + 4) = iVar1;
      if (*(int *)(in_ECX + 8) < iVar1) {
        *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
        FArray::Realloc(in_ECX,0x44);
      }
      this = (FPackageInfo *)(*(int *)in_ECX + iVar2 * 0x44);
      if (this != (FPackageInfo *)0x0) {
        FPackageInfo::FPackageInfo(this,(FPackageInfo *)(*piVar3 + (int)param_1));
      }
      param_1 = (int *)((int)param_1 + 0x44);
      iVar4 = iVar4 + 1;
    } while (iVar4 < piVar3[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 10120b60 FUN_10120b60

void FUN_10120b60(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8238;
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
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10120c40 FUN_10120c40

void FUN_10120c40(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *in_ECX;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,8);
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  do {
    iVar3 = *(int *)(in_ECX + 4);
    iVar2 = iVar3 + 1;
    *(int *)(in_ECX + 4) = iVar2;
    if (*(int *)(in_ECX + 8) < iVar2) {
      *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
      FArray::Realloc(in_ECX,8);
    }
    puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 8);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = *(int *)param_1;
      *puVar1 = *(undefined4 *)(iVar2 + iVar4 * 8);
      puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar4 * 8);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < *(int *)(param_1 + 4));
  return;
}


// ==== 10120cf0 FUN_10120cf0

void FUN_10120cf0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8258;
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
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10120dd0 FUN_10120dd0

void FUN_10120dd0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *in_ECX;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,4);
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  do {
    iVar3 = *(int *)(in_ECX + 4);
    iVar2 = iVar3 + 1;
    *(int *)(in_ECX + 4) = iVar2;
    if (*(int *)(in_ECX + 8) < iVar2) {
      *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
      FArray::Realloc(in_ECX,4);
    }
    puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4 * 4);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < *(int *)(param_1 + 4));
  return;
}


// ==== 10120e70 FUN_10120e70

void FUN_10120e70(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8278;
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
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10120f50 FUN_10120f50

void FUN_10120f50(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *pFVar4;
  undefined4 *puVar5;
  FArray *in_ECX;
  int iVar6;
  
  pFVar4 = param_1;
  if (in_ECX == param_1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar6 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,0xc);
  if (0 < *(int *)(param_1 + 4)) {
    param_1 = (FArray *)0x0;
    do {
      iVar3 = *(int *)(in_ECX + 4);
      iVar2 = iVar3 + 1;
      *(int *)(in_ECX + 4) = iVar2;
      if (*(int *)(in_ECX + 8) < iVar2) {
        *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
        FArray::Realloc(in_ECX,0xc);
      }
      puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)(*(int *)pFVar4 + (int)param_1);
        *puVar1 = *puVar5;
        puVar1[1] = puVar5[1];
        puVar1[2] = puVar5[2];
      }
      param_1 = (FArray *)((int)param_1 + 0xc);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(pFVar4 + 4));
    return;
  }
  return;
}


// ==== 10121020 FUN_10121020

void FUN_10121020(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8298;
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
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10121100 FUN_10121100

void FUN_10121100(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *in_ECX;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,8);
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  do {
    iVar3 = *(int *)(in_ECX + 4);
    iVar2 = iVar3 + 1;
    *(int *)(in_ECX + 4) = iVar2;
    if (*(int *)(in_ECX + 8) < iVar2) {
      *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
      FArray::Realloc(in_ECX,8);
    }
    puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 8);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = *(int *)param_1;
      *puVar1 = *(undefined4 *)(iVar2 + iVar4 * 8);
      puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar4 * 8);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < *(int *)(param_1 + 4));
  return;
}


// ==== 101211b0 FUN_101211b0

void FUN_101211b0(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b82b8;
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
  FArray::Remove(in_ECX,0,iVar1,8);
  local_4 = 0xffffffff;
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10121290 FUN_10121290

void FUN_10121290(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b82d8;
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
  FArray::Remove(in_ECX,0,iVar1,0x1c);
  local_4 = 0xffffffff;
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10121370 FUN_10121370

void FUN_10121370(FArray *param_1)

{
  int iVar1;
  FArray *pFVar2;
  FArray *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_4;
  
  pFVar2 = param_1;
  if (in_ECX == param_1) {
    return;
  }
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar3;
  FArray::Realloc(in_ECX,0x1c);
  local_4 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    param_1 = (FArray *)0x0;
    do {
      iVar1 = *(int *)(in_ECX + 4);
      iVar3 = iVar1 + 1;
      *(int *)(in_ECX + 4) = iVar3;
      if (*(int *)(in_ECX + 8) < iVar3) {
        *(int *)(in_ECX + 8) = ((int)(iVar3 * 3 + (iVar3 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar3;
        FArray::Realloc(in_ECX,0x1c);
      }
      puVar5 = (undefined4 *)(*(int *)in_ECX + iVar1 * 0x1c);
      if (puVar5 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*(int *)pFVar2 + (int)param_1);
        for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      param_1 = (FArray *)((int)param_1 + 0x1c);
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(pFVar2 + 4));
    return;
  }
  return;
}


// ==== 10121450 FUN_10121450

void FUN_10121450(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b82f8;
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
  FArray::Remove(in_ECX,0,iVar1,0x24);
  local_4 = 0xffffffff;
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10121530 FUN_10121530

void FUN_10121530(FArray *param_1)

{
  int iVar1;
  FArray *pFVar2;
  FArray *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_4;
  
  pFVar2 = param_1;
  if (in_ECX == param_1) {
    return;
  }
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar3;
  FArray::Realloc(in_ECX,0x24);
  local_4 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    param_1 = (FArray *)0x0;
    do {
      iVar1 = *(int *)(in_ECX + 4);
      iVar3 = iVar1 + 1;
      *(int *)(in_ECX + 4) = iVar3;
      if (*(int *)(in_ECX + 8) < iVar3) {
        *(int *)(in_ECX + 8) = ((int)(iVar3 * 3 + (iVar3 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar3;
        FArray::Realloc(in_ECX,0x24);
      }
      puVar5 = (undefined4 *)(*(int *)in_ECX + iVar1 * 0x24);
      if (puVar5 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(*(int *)pFVar2 + (int)param_1);
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      param_1 = (FArray *)((int)param_1 + 0x24);
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(pFVar2 + 4));
    return;
  }
  return;
}


// ==== 10121600 FUN_10121600

void FUN_10121600(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8318;
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
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 101216e0 FUN_101216e0

void FUN_101216e0(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *in_ECX;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,4);
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  do {
    iVar3 = *(int *)(in_ECX + 4);
    iVar2 = iVar3 + 1;
    *(int *)(in_ECX + 4) = iVar2;
    if (*(int *)(in_ECX + 8) < iVar2) {
      *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
      FArray::Realloc(in_ECX,4);
    }
    puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4 * 4);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < *(int *)(param_1 + 4));
  return;
}


// ==== 10121780 FUN_10121780

void FUN_10121780(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8338;
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
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10121860 FUN_10121860

void FUN_10121860(FArray *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  FArray *in_ECX;
  int iVar4;
  
  if (in_ECX == param_1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(int *)(in_ECX + 8) = iVar2;
  FArray::Realloc(in_ECX,4);
  if (*(int *)(param_1 + 4) < 1) {
    return;
  }
  do {
    iVar3 = *(int *)(in_ECX + 4);
    iVar2 = iVar3 + 1;
    *(int *)(in_ECX + 4) = iVar2;
    if (*(int *)(in_ECX + 8) < iVar2) {
      *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
      FArray::Realloc(in_ECX,4);
    }
    puVar1 = (undefined4 *)(*(int *)in_ECX + iVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *(undefined4 *)(*(int *)param_1 + iVar4 * 4);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < *(int *)(param_1 + 4));
  return;
}


// ==== 10121930 FUN_10121930

void FUN_10121930(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8358;
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
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10121a40 FUN_10121a40

void FUN_10121a40(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8378;
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
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10121b50 FUN_10121b50

void FUN_10121b50(void)

{
  int iVar1;
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8398;
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
  FArray::Remove(in_ECX,0,iVar1,0xc);
  local_4 = 0xffffffff;
  if (*(int *)in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)in_ECX);
  }
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10121c30 FUN_10121c30

void FUN_10121c30(byte param_1)

{
  FString *in_ECX;
  
  FString::~FString(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  return;
}


// ==== 10121c60 FUN_10121c60

void FUN_10121c60(byte param_1)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b83b8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10121cd0 FUN_10121cd0

FString * FUN_10121cd0(FString *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b83e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(param_1,&DAT_101cdd44);
  ExceptionList = local_c;
  return param_1;
}


// ==== 10121d40 FUN_10121d40

FString * FUN_10121d40(FString *param_1,int param_2)

{
  int iVar1;
  undefined4 *in_ECX;
  ushort *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8419;
  local_c = ExceptionList;
  if (in_ECX[1] == 0) {
    puVar2 = &DAT_101cdd44;
    iVar1 = 0;
  }
  else {
    puVar2 = (ushort *)*in_ECX;
    iVar1 = in_ECX[1] + -1;
  }
  if (param_2 < 0) {
    iVar1 = 0;
  }
  else if (param_2 < iVar1) {
    iVar1 = param_2;
  }
  ExceptionList = &local_c;
  FString::FString(param_1,iVar1,puVar2);
  ExceptionList = local_c;
  return param_1;
}


// ==== 10121de0 FUN_10121de0

FString * FUN_10121de0(FString *param_1,int param_2)

{
  int iVar1;
  undefined4 *in_ECX;
  ushort *puVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8449;
  local_c = ExceptionList;
  iVar1 = in_ECX[1];
  if (iVar1 == 0) {
    puVar2 = &DAT_101cdd44;
    iVar3 = 0;
    iVar1 = 0;
  }
  else {
    puVar2 = (ushort *)*in_ECX;
    iVar3 = iVar1 + -1;
    iVar1 = iVar1 + -1;
  }
  iVar1 = iVar1 - param_2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (iVar3 <= iVar1) {
    iVar1 = iVar3;
  }
  ExceptionList = &local_c;
  FString::FString(param_1,iVar1,puVar2);
  ExceptionList = local_c;
  return param_1;
}


// ==== 10121e90 FUN_10121e90

FString * FUN_10121e90(FString *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *in_ECX;
  undefined2 *puVar4;
  uint uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8479;
  local_c = ExceptionList;
  iVar1 = in_ECX[1];
  uVar2 = param_3 + param_2;
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = iVar1 - 1U;
    if (param_2 < iVar1 - 1U) goto LAB_10121eca;
  }
  param_2 = uVar5;
LAB_10121eca:
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = iVar1 - 1;
  }
  uVar3 = param_2;
  if ((param_2 <= uVar2) && (uVar3 = uVar2, uVar5 <= uVar2)) {
    uVar3 = uVar5;
  }
  if (iVar1 == 0) {
    puVar4 = &DAT_101cdd44;
  }
  else {
    puVar4 = (undefined2 *)*in_ECX;
  }
  ExceptionList = &local_c;
  FString::FString(param_1,uVar3 - param_2,puVar4 + param_2);
  ExceptionList = local_c;
  return param_1;
}


// ==== 10121f60 FUN_10121f60

undefined4 FUN_10121f60(undefined4 *param_1,FString *param_2,undefined4 param_3,int param_4)

{
  ushort *puVar1;
  int iVar2;
  FString *pFVar3;
  int iVar4;
  FString *in_ECX;
  int unaff_retaddr;
  undefined1 local_18 [8];
  void *pvStack_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  local_8 = &LAB_101b84a0;
  local_c = ExceptionList;
  if (param_1[1] == 0) {
    puVar1 = &DAT_101cdd44;
  }
  else {
    puVar1 = (ushort *)*param_1;
  }
  ExceptionList = &local_c;
  iVar2 = FString::InStr(in_ECX,puVar1,param_4);
  if (-1 < iVar2) {
    if (param_2 != (FString *)0x0) {
      pFVar3 = (FString *)FString::Left(in_ECX,(int)local_18);
      local_8 = (undefined1 *)0x0;
      FString::operator=(param_2,pFVar3);
      local_8 = (undefined1 *)0xffffffff;
      FString::~FString((FString *)&stack0xffffffe4);
      if (*(int *)(unaff_retaddr + 4) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(unaff_retaddr + 4) + -1;
      }
      pFVar3 = (FString *)FString::Mid(in_ECX,(int)&stack0xffffffe4,iVar4 + iVar2);
      local_c = (void *)0x1;
      FString::operator=(param_2,pFVar3);
      local_c = (void *)0xffffffff;
      FString::~FString((FString *)&stack0xffffffe0);
    }
    ExceptionList = pvStack_10;
    return 1;
  }
  ExceptionList = local_c;
  return 0;
}


// ==== 101220a0 FUN_101220a0

undefined4 FUN_101220a0(ushort *param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  FString *in_ECX;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101b84c0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffffc0;
  if (param_2 == 0) {
    ExceptionList = &local_10;
    appFailAssert("InArray","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",
                  0x615);
    puVar2 = local_14;
  }
  local_14 = puVar2;
  FString::FString(local_28,in_ECX);
  local_8 = CONCAT31(local_8._1_3_,1);
  while (iVar3 = FString::InStr(local_28,param_1,0), 0 < iVar3) {
    iVar4 = thunk_FUN_101146f0(0xc,param_2);
    if (iVar4 != 0) {
      FString::Left(local_28,iVar4);
    }
    pFVar5 = (FString *)FString::Mid(local_28,(int)local_34,iVar3 + 1);
    local_8._0_1_ = 2;
    FString::operator=(local_28,pFVar5);
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_34);
  }
  pFVar5 = (FString *)thunk_FUN_101146f0(0xc,param_2);
  if (pFVar5 != (FString *)0x0) {
    FString::FString(pFVar5,local_28);
  }
  uVar1 = *(undefined4 *)(param_2 + 4);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return uVar1;
}


// ==== 1012219f Catch@1012219f

void Catch_1012219f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101221b3 Catch@101221b3

void Catch_101221b3(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FString::ParseIntoArray");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10122220 FUN_10122220

void FUN_10122220(byte param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b84db;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FString::~FString((FString *)(in_ECX + 4));
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 10122290 FUN_10122290

undefined4 FUN_10122290(ushort *param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  FString *in_ECX;
  FString local_34 [12];
  FString local_28 [20];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101b8500;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffffc0;
  if (param_2 == 0) {
    ExceptionList = &local_10;
    appFailAssert("InArray","d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",
                  0x629);
    puVar2 = local_14;
  }
  local_14 = puVar2;
  FString::FString(local_28,in_ECX);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar3 = appStrlen(param_1);
  while (iVar4 = FString::InStr(local_28,param_1,0), -1 < iVar4) {
    iVar5 = thunk_FUN_101146f0(0xc,param_2);
    if (iVar5 != 0) {
      FString::Left(local_28,iVar5);
    }
    pFVar6 = (FString *)FString::Mid(local_28,(int)local_34,iVar4 + iVar3);
    local_8._0_1_ = 2;
    FString::operator=(local_28,pFVar6);
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_34);
  }
  pFVar6 = (FString *)thunk_FUN_101146f0(0xc,param_2);
  if (pFVar6 != (FString *)0x0) {
    FString::FString(pFVar6,local_28);
  }
  uVar1 = *(undefined4 *)(param_2 + 4);
  local_8 = local_8 & 0xffffff00;
  FString::~FString(local_28);
  ExceptionList = local_10;
  return uVar1;
}


// ==== 1012239a Catch@1012239a

void Catch_1012239a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101223ae Catch@101223ae

void Catch_101223ae(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FString::SplitIntoArray");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10122420 FUN_10122420

FString * FUN_10122420(FString *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  FString *pFVar2;
  FString *in_ECX;
  FString local_2c [20];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101b8549;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_18 = 0;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  ExceptionList = &local_10;
  FString::FString(param_1,in_ECX);
  local_18 = 1;
  iVar1 = FString::InStr(in_ECX,(FString *)&param_2,0);
  if (iVar1 != -1) {
    pFVar2 = (FString *)FString::Left(in_ECX,(int)local_2c);
    local_8._0_1_ = 4;
    FString::operator=(param_1,pFVar2);
    local_8._0_1_ = 3;
    FString::~FString(local_2c);
    FString::operator+=(param_1,(FString *)&stack0x00000014);
    pFVar2 = (FString *)FString::Right(in_ECX,(int)local_2c);
    local_8._0_1_ = 5;
    FString::operator+=(param_1,pFVar2);
    local_8._0_1_ = 3;
    FString::~FString(local_2c);
  }
  local_8._0_1_ = 1;
  FString::~FString((FString *)&param_2);
  local_8 = (uint)local_8._1_3_ << 8;
  FString::~FString((FString *)&stack0x00000014);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1012251b Catch@1012251b

void Catch_1012251b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 1012252f Catch@1012252f

void Catch_1012252f(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FString::Substitute");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101225a0 FUN_101225a0

FString * FUN_101225a0(FString *param_1)

{
  int iVar1;
  FString *pFVar2;
  FString *in_ECX;
  FString local_30 [20];
  int local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b8591;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_18 = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  FString::FString(param_1);
  local_18 = 1;
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_ECX + 4) + -1;
  }
  while (iVar1 = iVar1 + -1, local_1c = iVar1, -1 < iVar1) {
    pFVar2 = (FString *)FString::Mid(in_ECX,(int)local_30,iVar1);
    local_8._0_1_ = 2;
    FString::operator+=(param_1,pFVar2);
    local_8 = CONCAT31(local_8._1_3_,1);
    FString::~FString(local_30);
  }
  FString::operator=(in_ECX,param_1);
  ExceptionList = local_10;
  return param_1;
}


// ==== 1012263f Catch@1012263f

void Catch_1012263f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 10122653 Catch@10122653

void Catch_10122653(void)

{
  appUnwindf((ushort *)&DAT_101cdb60,L"FString::Reverse");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 101226b0 FUN_101226b0

undefined4 FUN_101226b0(undefined4 param_1,int param_2)

{
  ushort *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  FArray local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_101b8609;
  local_c = ExceptionList;
  local_34 = 0;
  ExceptionList = &local_c;
  puVar1 = appItoa(param_2);
  FString::FString((FString *)&local_24,puVar1);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_4 = 4;
  iVar3 = 0;
  if (local_20 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = local_20 + -1;
  }
  uVar4 = local_20 - 1;
  if (-1 < (int)uVar4) {
    do {
      puVar2 = (undefined4 *)FString::Mid((FString *)&local_24,(int)&local_18,uVar4);
      local_8._0_1_ = 5;
      if (puVar2[1] == 0) {
        puVar1 = &DAT_101cdd44;
      }
      else {
        puVar1 = (ushort *)*puVar2;
      }
      FString::operator+=((FString *)&local_34,puVar1);
      local_8._0_1_ = 6;
      local_18 = 0;
      local_14 = 0;
      FArray::Realloc(local_1c,2);
      local_8 = (undefined1 *)CONCAT31(local_8._1_3_,4);
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)local_1c);
      iVar3 = iVar3 + 1;
      if ((iVar3 == 3) && (0 < (int)uVar4)) {
        FString::operator+=((FString *)&local_34,(ushort *)&DAT_101cf688);
        iVar3 = 0;
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 < 0x80000000);
  }
  FString::Reverse((FString *)&local_30);
  local_8._0_1_ = 7;
  local_30 = 0;
  local_2c = 0;
  FArray::Realloc((FArray *)&local_34,2);
  local_8 = (undefined1 *)CONCAT31(local_8._1_3_,1);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&local_34);
  local_8 = (undefined1 *)0x8;
  local_24 = 0;
  local_20 = 0;
  FArray::Realloc((FArray *)&local_28,2);
  local_8 = (undefined1 *)((uint)local_8 & 0xffffff00);
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&local_28);
  ExceptionList = pvStack_10;
  return param_1;
}


// ==== 10122870 FUN_10122870

undefined4 FUN_10122870(void **param_1)

{
  UFunction *pUVar1;
  int *in_ECX;
  void *unaff_EBX;
  undefined4 unaff_ESI;
  undefined2 *_Src;
  void *local_1c;
  void *local_18;
  void *local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8660;
  pvStack_c = ExceptionList;
  local_1c = (void *)0x0;
  local_18 = (void *)0x0;
  local_14 = (void *)0x0;
  local_4 = 3;
  ExceptionList = &pvStack_c;
  if (&local_1c != param_1) {
    local_18 = param_1[1];
    ExceptionList = &pvStack_c;
    local_14 = local_18;
    FArray::Realloc((FArray *)&local_1c,2);
    if (local_18 != (void *)0x0) {
      if (param_1[1] == (void *)0x0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *param_1;
      }
      _memcpy(local_1c,_Src,(int)local_18 * 2);
    }
  }
  pUVar1 = UObject::FindFunctionChecked();
  (**(code **)(*in_ECX + 0x10))(pUVar1);
  local_18 = (void *)0x5;
  FArray::Realloc((FArray *)&stack0xffffffd0,2);
  local_18 = (void *)0xffffffff;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)&stack0xffffffd0);
  ExceptionList = unaff_EBX;
  return unaff_ESI;
}


// ==== 10122990 FUN_10122990

void FUN_10122990(UStruct *param_1)

{
  if (param_1 != (UStruct *)0x0) {
    UStruct::UStruct(param_1);
    return;
  }
  return;
}


// ==== 101229b0 FUN_101229b0

void FUN_101229b0(UFunction *param_1)

{
  if (param_1 != (UFunction *)0x0) {
    UFunction::UFunction(param_1);
    return;
  }
  return;
}


// ==== 101229d0 FUN_101229d0

void FUN_101229d0(UState *param_1)

{
  if (param_1 != (UState *)0x0) {
    UState::UState(param_1);
    return;
  }
  return;
}


// ==== 101229f0 FUN_101229f0

void FUN_101229f0(UEnum *param_1)

{
  if (param_1 != (UEnum *)0x0) {
    UEnum::UEnum(param_1);
    return;
  }
  return;
}


// ==== 10122a10 FUN_10122a10

void FUN_10122a10(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101b86f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UClass::vftable;
  local_4 = 8;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 7;
  FString::~FString((FString *)(in_ECX + 0x520));
  local_4._0_1_ = 6;
  thunk_FUN_10118d50();
  local_4._0_1_ = 5;
  thunk_FUN_10118d50();
  local_4._0_1_ = 4;
  thunk_FUN_10118750();
  local_4._0_1_ = 3;
  thunk_FUN_10118d50();
  local_4._0_1_ = 2;
  thunk_FUN_10120e70();
  local_4._0_1_ = 1;
  thunk_FUN_10120cf0();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10120b60();
  local_4 = 0xffffffff;
  UState::~UState((UState *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10122b20 FUN_10122b20

void FUN_10122b20(UState *param_1)

{
  UState *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b87a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UState::UState(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UClass::vftable;
  *(undefined4 *)(in_ECX + 0x4a4) = *(undefined4 *)(param_1 + 0x4a4);
  *(undefined4 *)(in_ECX + 0x4a8) = *(undefined4 *)(param_1 + 0x4a8);
  *(undefined4 *)(in_ECX + 0x4ac) = *(undefined4 *)(param_1 + 0x4ac);
  *(undefined4 *)(in_ECX + 0x4b0) = *(undefined4 *)(param_1 + 0x4b0);
  *(undefined4 *)(in_ECX + 0x4b4) = *(undefined4 *)(param_1 + 0x4b4);
  *(undefined4 *)(in_ECX + 0x4b8) = *(undefined4 *)(param_1 + 0x4b8);
  *(undefined4 *)(in_ECX + 0x4bc) = *(undefined4 *)(param_1 + 0x4bc);
  *(undefined4 *)(in_ECX + 0x4c0) = *(undefined4 *)(param_1 + 0x4c0);
  thunk_FUN_10118ed0(param_1 + 0x4c4);
  local_4._0_1_ = 1;
  thunk_FUN_10118fc0(param_1 + 0x4d0);
  local_4._0_1_ = 2;
  thunk_FUN_101190a0(param_1 + 0x4dc);
  local_4._0_1_ = 3;
  thunk_FUN_10118cb0(param_1 + 0x4e8);
  local_4._0_1_ = 4;
  thunk_FUN_101186c0(param_1 + 0x4f4);
  local_4._0_1_ = 5;
  thunk_FUN_10118cb0(param_1 + 0x500);
  local_4._0_1_ = 6;
  thunk_FUN_10118cb0(param_1 + 0x50c);
  local_4 = CONCAT31(local_4._1_3_,7);
  *(undefined4 *)(in_ECX + 0x518) = *(undefined4 *)(param_1 + 0x518);
  *(undefined4 *)(in_ECX + 0x51c) = *(undefined4 *)(param_1 + 0x51c);
  FString::FString((FString *)(in_ECX + 0x520),(FString *)(param_1 + 0x520));
  ExceptionList = local_c;
  return;
}


// ==== 10122d00 FUN_10122d00

void FUN_10122d00(UState *param_1)

{
  FArray *this;
  undefined4 uVar1;
  UState *in_ECX;
  undefined2 *_Src;
  
  UState::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x4a4) = *(undefined4 *)(param_1 + 0x4a4);
  *(undefined4 *)(in_ECX + 0x4a8) = *(undefined4 *)(param_1 + 0x4a8);
  *(undefined4 *)(in_ECX + 0x4ac) = *(undefined4 *)(param_1 + 0x4ac);
  *(undefined4 *)(in_ECX + 0x4b0) = *(undefined4 *)(param_1 + 0x4b0);
  *(undefined4 *)(in_ECX + 0x4b4) = *(undefined4 *)(param_1 + 0x4b4);
  *(undefined4 *)(in_ECX + 0x4b8) = *(undefined4 *)(param_1 + 0x4b8);
  *(undefined4 *)(in_ECX + 0x4bc) = *(undefined4 *)(param_1 + 0x4bc);
  *(undefined4 *)(in_ECX + 0x4c0) = *(undefined4 *)(param_1 + 0x4c0);
  thunk_FUN_10120c40(param_1 + 0x4c4);
  thunk_FUN_10120dd0(param_1 + 0x4d0);
  thunk_FUN_10120f50(param_1 + 0x4dc);
  thunk_FUN_10118e30(param_1 + 0x4e8);
  thunk_FUN_10118830(param_1 + 0x4f4);
  thunk_FUN_10118e30(param_1 + 0x500);
  thunk_FUN_10118e30(param_1 + 0x50c);
  *(undefined4 *)(in_ECX + 0x518) = *(undefined4 *)(param_1 + 0x518);
  this = (FArray *)(in_ECX + 0x520);
  *(undefined4 *)(in_ECX + 0x51c) = *(undefined4 *)(param_1 + 0x51c);
  if (this != (FArray *)(param_1 + 0x520)) {
    uVar1 = *(undefined4 *)(param_1 + 0x524);
    *(undefined4 *)(in_ECX + 0x528) = uVar1;
    *(undefined4 *)(in_ECX + 0x524) = uVar1;
    FArray::Realloc(this,2);
    if (*(int *)(in_ECX + 0x524) != 0) {
      if (*(int *)(param_1 + 0x524) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)(param_1 + 0x520);
      }
      _memcpy(*(void **)this,_Src,*(int *)(in_ECX + 0x524) * 2);
    }
  }
  return;
}


// ==== 10122eb0 FUN_10122eb0

void FUN_10122eb0(byte param_1)

{
  UClass *in_ECX;
  
  UClass::~UClass(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x52c);
  }
  return;
}


// ==== 10122ee0 FUN_10122ee0

UClass * FUN_10122ee0(byte param_1)

{
  UClass *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x52c,*(int *)(in_ECX + -4),UClass::~UClass);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UClass::~UClass(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x52c);
  }
  return in_ECX;
}


// ==== 10122f60 FUN_10122f60

void FUN_10122f60(UConst *param_1)

{
  if (param_1 != (UConst *)0x0) {
    UConst::UConst(param_1);
    return;
  }
  return;
}


// ==== 10122f80 FUN_10122f80

void FUN_10122f80(UByteProperty *param_1)

{
  if (param_1 != (UByteProperty *)0x0) {
    UByteProperty::UByteProperty(param_1);
    return;
  }
  return;
}


// ==== 10122fa0 FUN_10122fa0

void FUN_10122fa0(UIntProperty *param_1)

{
  if (param_1 != (UIntProperty *)0x0) {
    UIntProperty::UIntProperty(param_1);
    return;
  }
  return;
}


// ==== 10122fc0 FUN_10122fc0

void FUN_10122fc0(UBoolProperty *param_1)

{
  if (param_1 != (UBoolProperty *)0x0) {
    UBoolProperty::UBoolProperty(param_1);
    return;
  }
  return;
}


// ==== 10122fe0 FUN_10122fe0

void FUN_10122fe0(UFloatProperty *param_1)

{
  if (param_1 != (UFloatProperty *)0x0) {
    UFloatProperty::UFloatProperty(param_1);
    return;
  }
  return;
}


// ==== 10123000 FUN_10123000

void FUN_10123000(UObjectProperty *param_1)

{
  if (param_1 != (UObjectProperty *)0x0) {
    UObjectProperty::UObjectProperty(param_1);
    return;
  }
  return;
}


// ==== 10123020 FUN_10123020

void FUN_10123020(UClassProperty *param_1)

{
  if (param_1 != (UClassProperty *)0x0) {
    UClassProperty::UClassProperty(param_1);
    return;
  }
  return;
}


// ==== 10123040 FUN_10123040

void FUN_10123040(UNameProperty *param_1)

{
  if (param_1 != (UNameProperty *)0x0) {
    UNameProperty::UNameProperty(param_1);
    return;
  }
  return;
}


// ==== 10123060 FUN_10123060

void FUN_10123060(UStrProperty *param_1)

{
  if (param_1 != (UStrProperty *)0x0) {
    UStrProperty::UStrProperty(param_1);
    return;
  }
  return;
}


// ==== 10123080 FUN_10123080

void FUN_10123080(UFixedArrayProperty *param_1)

{
  if (param_1 != (UFixedArrayProperty *)0x0) {
    UFixedArrayProperty::UFixedArrayProperty(param_1);
    return;
  }
  return;
}


// ==== 101230a0 FUN_101230a0

void FUN_101230a0(UArrayProperty *param_1)

{
  if (param_1 != (UArrayProperty *)0x0) {
    UArrayProperty::UArrayProperty(param_1);
    return;
  }
  return;
}


// ==== 101230c0 FUN_101230c0

void FUN_101230c0(UMapProperty *param_1)

{
  if (param_1 != (UMapProperty *)0x0) {
    UMapProperty::UMapProperty(param_1);
    return;
  }
  return;
}


// ==== 101230e0 FUN_101230e0

void FUN_101230e0(UStructProperty *param_1)

{
  if (param_1 != (UStructProperty *)0x0) {
    UStructProperty::UStructProperty(param_1);
    return;
  }
  return;
}


// ==== 10123100 FUN_10123100

void FUN_10123100(UDelegateProperty *param_1)

{
  if (param_1 != (UDelegateProperty *)0x0) {
    UDelegateProperty::UDelegateProperty(param_1);
    return;
  }
  return;
}


// ==== 10123120 thunk_FUN_10121100 thunk -> 10121100

// ==== 10123130 FUN_10123130

void FUN_10123130(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b87e8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10121020();
  ExceptionList = local_c;
  return;
}


// ==== 10123180 FUN_10123180

void FUN_10123180(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8808;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10119270(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 101231e0 FUN_101231e0

void FUN_101231e0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b882b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_101211b0();
  ExceptionList = local_c;
  return;
}


// ==== 10123230 FUN_10123230

void FUN_10123230(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b884b;
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
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  thunk_FUN_10119360(param_1 + 0xd);
  ExceptionList = local_c;
  return;
}


// ==== 101232f0 FUN_101232f0

void FUN_101232f0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101b88b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = ULinker::vftable;
  local_4 = 5;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 4;
  FString::~FString((FString *)(in_ECX + 0xa0));
  local_4._0_1_ = 3;
  thunk_FUN_10121450();
  local_4._0_1_ = 2;
  thunk_FUN_10121290();
  local_4._0_1_ = 1;
  thunk_FUN_10118d50();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_101211b0();
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 101233c0 FUN_101233c0

void FUN_101233c0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8950;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = ULinker::vftable;
  FPackageFileSummary::FPackageFileSummary((FPackageFileSummary *)(in_ECX + 0x38));
  *(undefined4 *)(in_ECX + 0x78) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 101234a0 FUN_101234a0

void FUN_101234a0(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b89c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = ULinker::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  FPackageFileSummary::FPackageFileSummary
            ((FPackageFileSummary *)(in_ECX + 0x38),(FPackageFileSummary *)(param_1 + 0x38));
  local_4._0_1_ = 1;
  thunk_FUN_10118cb0(param_1 + 0x78);
  local_4._0_1_ = 2;
  thunk_FUN_10119530(param_1 + 0x84);
  local_4._0_1_ = 3;
  thunk_FUN_10119640(param_1 + 0x90);
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  FString::FString((FString *)(in_ECX + 0xa0),(FString *)(param_1 + 0xa0));
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  ExceptionList = local_c;
  return;
}


// ==== 101235f0 FUN_101235f0

void FUN_101235f0(UObject *param_1)

{
  FArray *this;
  undefined4 uVar1;
  UObject *pUVar2;
  UObject *in_ECX;
  int iVar3;
  undefined2 *_Src;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  FPackageFileSummary::operator=
            ((FPackageFileSummary *)(in_ECX + 0x38),(FPackageFileSummary *)(param_1 + 0x38));
  thunk_FUN_10118e30(param_1 + 0x78);
  thunk_FUN_10121370(param_1 + 0x84);
  thunk_FUN_10121530(param_1 + 0x90);
  this = (FArray *)(in_ECX + 0xa0);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  if (this != (FArray *)(param_1 + 0xa0)) {
    uVar1 = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(in_ECX + 0xa8) = uVar1;
    *(undefined4 *)(in_ECX + 0xa4) = uVar1;
    FArray::Realloc(this,2);
    if (*(int *)(in_ECX + 0xa4) != 0) {
      if (*(int *)(param_1 + 0xa4) == 0) {
        _Src = &DAT_101cdd44;
      }
      else {
        _Src = *(undefined2 **)(param_1 + 0xa0);
      }
      _memcpy(*(void **)this,_Src,*(int *)(in_ECX + 0xa4) * 2);
    }
  }
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  pUVar2 = in_ECX + 0xb0;
  iVar3 = 0x10;
  do {
    *pUVar2 = pUVar2[(int)param_1 - (int)in_ECX];
    pUVar2 = pUVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


// ==== 10123700 FUN_10123700

void FUN_10123700(byte param_1)

{
  ULinker *in_ECX;
  
  ULinker::~ULinker(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xc0);
  }
  return;
}


// ==== 10123730 FUN_10123730

ULinker * FUN_10123730(byte param_1)

{
  ULinker *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0xc0,*(int *)(in_ECX + -4),ULinker::~ULinker);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  ULinker::~ULinker(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xc0);
  }
  return in_ECX;
}


// ==== 101237b0 FUN_101237b0

void FUN_101237b0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8a3d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = ULinkerLoad::vftable_for_ULinker_;
  *(undefined ***)(in_ECX + 0xc0) = ULinkerLoad::vftable_for_FArchive_;
  local_4 = 3;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 2;
  thunk_FUN_10121780();
  local_4 = CONCAT31(local_4._1_3_,1);
  thunk_FUN_10121600();
  *(undefined ***)(in_ECX + 0xc0) = FArchive::vftable;
  local_4 = 0xffffffff;
  ULinker::~ULinker((ULinker *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10123860 FUN_10123860

void FUN_10123860(void)

{
  ULinker *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8aa2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ULinker::ULinker(in_ECX);
  *(undefined ***)(in_ECX + 0xc0) = FArchive::vftable;
  *(undefined4 *)(in_ECX + 0xc4) = 0x7b;
  *(undefined4 *)(in_ECX + 200) = 2000;
  *(undefined4 *)(in_ECX + 0xcc) = 0x1e;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  *(undefined4 *)(in_ECX + 0xd8) = 0;
  *(undefined4 *)(in_ECX + 0xdc) = 0;
  *(undefined4 *)(in_ECX + 0xe0) = 1;
  *(undefined4 *)(in_ECX + 0xe4) = 1;
  *(undefined4 *)(in_ECX + 0xe8) = 1;
  *(undefined4 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xf4) = 0xffffffff;
  *(undefined ***)in_ECX = ULinkerLoad::vftable_for_ULinker_;
  *(undefined ***)(in_ECX + 0xc0) = ULinkerLoad::vftable_for_FArchive_;
  *(undefined4 *)(in_ECX + 0x500) = 0;
  *(undefined4 *)(in_ECX + 0x504) = 0;
  *(undefined4 *)(in_ECX + 0x508) = 0;
  *(undefined4 *)(in_ECX + 0x50c) = 0;
  *(undefined4 *)(in_ECX + 0x510) = 0;
  *(undefined4 *)(in_ECX + 0x514) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10123990 FUN_10123990

void FUN_10123990(ULinker *param_1)

{
  FArchive *pFVar1;
  ULinker *in_ECX;
  int iVar2;
  ULinker *pUVar3;
  ULinker *pUVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8af2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ULinker::ULinker(in_ECX,param_1);
  pFVar1 = (FArchive *)0x0;
  local_4 = 0;
  if (param_1 != (ULinker *)0x0) {
    pFVar1 = (FArchive *)(param_1 + 0xc0);
  }
  FArchive::FArchive((FArchive *)(in_ECX + 0xc0),pFVar1);
  local_4._0_1_ = 1;
  *(undefined ***)(in_ECX + 0xc0) = ULinkerLoad::vftable_for_FArchive_;
  *(undefined ***)in_ECX = ULinkerLoad::vftable_for_ULinker_;
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  pUVar3 = param_1 + 0x100;
  pUVar4 = in_ECX + 0x100;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar3;
    pUVar3 = pUVar3 + 4;
    pUVar4 = pUVar4 + 4;
  }
  thunk_FUN_10119750(param_1 + 0x500);
  local_4 = CONCAT31(local_4._1_3_,2);
  thunk_FUN_10119830(param_1 + 0x50c);
  *(undefined4 *)(in_ECX + 0x518) = *(undefined4 *)(param_1 + 0x518);
  *(undefined4 *)(in_ECX + 0x51c) = *(undefined4 *)(param_1 + 0x51c);
  *(undefined4 *)(in_ECX + 0x520) = *(undefined4 *)(param_1 + 0x520);
  *(undefined4 *)(in_ECX + 0x524) = *(undefined4 *)(param_1 + 0x524);
  *(undefined4 *)(in_ECX + 0x528) = *(undefined4 *)(param_1 + 0x528);
  ExceptionList = local_c;
  return;
}


// ==== 10123ae0 FUN_10123ae0

void FUN_10123ae0(ULinker *param_1)

{
  ULinker *pUVar1;
  ULinker *in_ECX;
  int iVar2;
  
  ULinker::operator=(in_ECX,param_1);
  if (param_1 == (ULinker *)0x0) {
    pUVar1 = (ULinker *)0x0;
  }
  else {
    pUVar1 = param_1 + 0xc0;
  }
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(pUVar1 + 4);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(pUVar1 + 8);
  *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(pUVar1 + 0xc);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(pUVar1 + 0x10);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(pUVar1 + 0x14);
  *(undefined4 *)(in_ECX + 0xd8) = *(undefined4 *)(pUVar1 + 0x18);
  *(undefined4 *)(in_ECX + 0xdc) = *(undefined4 *)(pUVar1 + 0x1c);
  *(undefined4 *)(in_ECX + 0xe0) = *(undefined4 *)(pUVar1 + 0x20);
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(pUVar1 + 0x24);
  *(undefined4 *)(in_ECX + 0xe8) = *(undefined4 *)(pUVar1 + 0x28);
  *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(pUVar1 + 0x2c);
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(pUVar1 + 0x30);
  *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(pUVar1 + 0x34);
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  pUVar1 = in_ECX + 0x100;
  iVar2 = 0x100;
  do {
    *(undefined4 *)pUVar1 = *(undefined4 *)(pUVar1 + ((int)param_1 - (int)in_ECX));
    pUVar1 = pUVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  thunk_FUN_101216e0(param_1 + 0x500);
  thunk_FUN_10121860(param_1 + 0x50c);
  *(undefined4 *)(in_ECX + 0x518) = *(undefined4 *)(param_1 + 0x518);
  *(undefined4 *)(in_ECX + 0x51c) = *(undefined4 *)(param_1 + 0x51c);
  *(undefined4 *)(in_ECX + 0x520) = *(undefined4 *)(param_1 + 0x520);
  *(undefined4 *)(in_ECX + 0x524) = *(undefined4 *)(param_1 + 0x524);
  *(undefined4 *)(in_ECX + 0x528) = *(undefined4 *)(param_1 + 0x528);
  return;
}


// ==== 10123c70 FUN_10123c70

void FUN_10123c70(byte param_1)

{
  ULinkerLoad *in_ECX;
  
  ULinkerLoad::~ULinkerLoad(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x52c);
  }
  return;
}


// ==== 10123ca0 FUN_10123ca0

ULinkerLoad * FUN_10123ca0(byte param_1)

{
  ULinkerLoad *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x52c,*(int *)(in_ECX + -4),ULinkerLoad::~ULinkerLoad);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  ULinkerLoad::~ULinkerLoad(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x52c);
  }
  return in_ECX;
}


// ==== 10123d50 FUN_10123d50

void FUN_10123d50(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8b18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10119b80(param_1);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  thunk_FUN_10119ab0();
  ExceptionList = local_c;
  return;
}


// ==== 10123dd0 FUN_10123dd0

void FUN_10123dd0(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8b38;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*(int *)GMalloc + 8))(*(int *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  thunk_FUN_10121930();
  ExceptionList = pvStack_c;
  return;
}


// ==== 10123e50 FUN_10123e50

void FUN_10123e50(int param_1)

{
  int in_ECX;
  
  thunk_FUN_1011a980(param_1);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  thunk_FUN_10119c90();
  return;
}


// ==== 10123e80 FUN_10123e80

void FUN_10123e80(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8b60;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_4 = 1;
  in_ECX[3] = 0;
  in_ECX[4] = 8;
  thunk_FUN_10119c90();
  ExceptionList = local_c;
  return;
}


// ==== 10123ef0 FUN_10123ef0

void FUN_10123ef0(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8b78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10119d60(param_1);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  thunk_FUN_10119c90();
  ExceptionList = local_c;
  return;
}


// ==== 10123f70 FUN_10123f70

void FUN_10123f70(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8b98;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*(int *)GMalloc + 8))(*(int *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  thunk_FUN_10121a40();
  ExceptionList = pvStack_c;
  return;
}


// ==== 10123ff0 FUN_10123ff0

void FUN_10123ff0(int param_1)

{
  int in_ECX;
  
  thunk_FUN_1011aaf0(param_1);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  thunk_FUN_10119e70();
  return;
}


// ==== 10124020 FUN_10124020

void FUN_10124020(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8bc0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_4 = 1;
  in_ECX[3] = 0;
  in_ECX[4] = 8;
  thunk_FUN_10119e70();
  ExceptionList = local_c;
  return;
}


// ==== 10124090 FUN_10124090

void FUN_10124090(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8bd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10119f40(param_1);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  thunk_FUN_10119e70();
  ExceptionList = local_c;
  return;
}


// ==== 10124110 FUN_10124110

void FUN_10124110(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8bf8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*(int *)GMalloc + 8))(*(int *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  thunk_FUN_10121b50();
  ExceptionList = pvStack_c;
  return;
}


// ==== 10124190 FUN_10124190

void FUN_10124190(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  FArray *this;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8c18;
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
  iVar1 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar1) {
    iVar2 = param_1 * 0xc;
    iVar1 = iVar1 - param_1;
    do {
      this = (FArray *)(*(int *)in_ECX + iVar2);
      local_4 = 0;
      *(undefined4 *)(this + 4) = 0;
      *(undefined4 *)(this + 8) = 0;
      FArray::Realloc(this,2);
      local_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)this);
      iVar2 = iVar2 + 0xc;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0xc);
  ExceptionList = local_c;
  return;
}


// ==== 101242c0 FUN_101242c0

void FUN_101242c0(undefined4 param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  FArray *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8c38;
  local_c = ExceptionList;
  iVar1 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar2 = 0;
    ExceptionList = &local_c;
    do {
      this = (FArray *)(*(int *)in_ECX + iVar2);
      local_4 = 0;
      *(undefined4 *)(this + 4) = 0;
      *(undefined4 *)(this + 8) = 0;
      FArray::Realloc(this,2);
      local_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)this);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,0xc);
  ExceptionList = local_c;
  return;
}


// ==== 10124370 FUN_10124370

void FUN_10124370(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  FArray *this;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8c60;
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
  iVar1 = param_2 + param_1;
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar1) {
    iVar2 = param_1 * 0x44;
    iVar1 = iVar1 - param_1;
    do {
      this = (FArray *)(*(int *)in_ECX + iVar2);
      local_4 = 1;
      *(undefined4 *)(this + 4) = 0;
      *(undefined4 *)(this + 8) = 0;
      FArray::Realloc(this,2);
      local_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)this);
      iVar2 = iVar2 + 0x44;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x44);
  ExceptionList = local_c;
  return;
}


// ==== 101244a0 FUN_101244a0

void FUN_101244a0(undefined4 param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  FArray *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8c80;
  local_c = ExceptionList;
  iVar1 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar2 = 0;
    ExceptionList = &local_c;
    do {
      this = (FArray *)(*(int *)in_ECX + iVar2);
      local_4 = 1;
      *(undefined4 *)(this + 4) = 0;
      *(undefined4 *)(this + 8) = 0;
      FArray::Realloc(this,2);
      local_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)this);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x44;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,0x44);
  ExceptionList = local_c;
  return;
}


// ==== 10124550 FUN_10124550

void FUN_10124550(void)

{
  thunk_FUN_10123ca0();
  return;
}


// ==== 10124560 FUN_10124560

void FUN_10124560(int param_1,int param_2)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8ca3;
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
  iVar2 = param_1 + param_2;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar3 = param_1 << 4;
    iVar2 = iVar2 - param_1;
    do {
      iVar1 = *(int *)in_ECX + iVar3;
      local_4 = 1;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0;
      FArray::Realloc((FArray *)(iVar1 + 4),2);
      local_4 = 0xffffffff;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(iVar1 + 4));
      iVar3 = iVar3 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x10);
  ExceptionList = local_c;
  return;
}


// ==== 101246a0 FUN_101246a0

void FUN_101246a0(int param_1)

{
  int in_ECX;
  
  thunk_FUN_10120810(param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  thunk_FUN_10120990(param_1 + 0x1c);
  thunk_FUN_1011a810(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  thunk_FUN_10119ab0();
  return;
}


// ==== 10124710 FUN_10124710

void FUN_10124710(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8cc8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10123dd0();
  ExceptionList = local_c;
  return;
}


// ==== 10124760 FUN_10124760

void FUN_10124760(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8ce8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10123d50(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 101247c0 FUN_101247c0

void FUN_101247c0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8d08;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10123f70();
  ExceptionList = local_c;
  return;
}


// ==== 10124810 FUN_10124810

void FUN_10124810(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8d28;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_10124110();
  ExceptionList = local_c;
  return;
}


// ==== 10124860 FUN_10124860

void FUN_10124860(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8d48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10123e80();
  ExceptionList = local_c;
  return;
}


// ==== 101248b0 FUN_101248b0

void FUN_101248b0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8d68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10124020();
  ExceptionList = local_c;
  return;
}


// ==== 10124900 FUN_10124900

void FUN_10124900(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8d88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10123ef0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 10124960 FUN_10124960

void FUN_10124960(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8da8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10124090(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 101249c0 FUN_101249c0

void FUN_101249c0(ULinker *param_1)

{
  if (param_1 != (ULinker *)0x0) {
    ULinker::ULinker(param_1);
    return;
  }
  return;
}


// ==== 101249e0 FUN_101249e0

void FUN_101249e0(ULinkerLoad *param_1)

{
  if (param_1 != (ULinkerLoad *)0x0) {
    ULinkerLoad::ULinkerLoad(param_1);
    return;
  }
  return;
}


// ==== 10124a00 FUN_10124a00

void FUN_10124a00(void)

{
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8dc8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10124190(0,in_ECX[1]);
  local_4 = 0xffffffff;
  if (*in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*in_ECX);
  }
  *in_ECX = 0;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10124a90 FUN_10124a90

void FUN_10124a90(FArray *param_1)

{
  int iVar1;
  FString *this;
  int iVar2;
  FArray *pFVar3;
  FArray *in_ECX;
  int iVar4;
  
  pFVar3 = param_1;
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_101242c0(*(int *)(param_1 + 4));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    param_1 = (FArray *)0x0;
    do {
      iVar2 = *(int *)(in_ECX + 4);
      iVar1 = iVar2 + 1;
      *(int *)(in_ECX + 4) = iVar1;
      if (*(int *)(in_ECX + 8) < iVar1) {
        *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
        FArray::Realloc(in_ECX,0xc);
      }
      this = (FString *)(*(int *)in_ECX + iVar2 * 0xc);
      if (this != (FString *)0x0) {
        FString::FString(this,(FString *)(*(int *)pFVar3 + (int)param_1));
      }
      param_1 = (FArray *)((int)param_1 + 0xc);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(pFVar3 + 4));
    return;
  }
  return;
}


// ==== 10124b40 FUN_10124b40

void FUN_10124b40(void)

{
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8de8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10124370(0,in_ECX[1]);
  local_4 = 0xffffffff;
  if (*in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*in_ECX);
  }
  *in_ECX = 0;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10124bd0 FUN_10124bd0

void FUN_10124bd0(FArray *param_1)

{
  int iVar1;
  FPackageInfo *this;
  int iVar2;
  FArray *pFVar3;
  FArray *in_ECX;
  int iVar4;
  
  pFVar3 = param_1;
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_101244a0(*(int *)(param_1 + 4));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    param_1 = (FArray *)0x0;
    do {
      iVar2 = *(int *)(in_ECX + 4);
      iVar1 = iVar2 + 1;
      *(int *)(in_ECX + 4) = iVar1;
      if (*(int *)(in_ECX + 8) < iVar1) {
        *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
        FArray::Realloc(in_ECX,0x44);
      }
      this = (FPackageInfo *)(*(int *)in_ECX + iVar2 * 0x44);
      if (this != (FPackageInfo *)0x0) {
        FPackageInfo::FPackageInfo(this,(FPackageInfo *)(*(int *)pFVar3 + (int)param_1));
      }
      param_1 = (FArray *)((int)param_1 + 0x44);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(pFVar3 + 4));
    return;
  }
  return;
}


// ==== 10124c80 FUN_10124c80

void FUN_10124c80(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ==== 10124ce0 FUN_10124ce0

void FUN_10124ce0(void)

{
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b8e48;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10124560(0,in_ECX[1]);
  local_4 = 0xffffffff;
  if (*in_ECX != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*in_ECX);
  }
  *in_ECX = 0;
  in_ECX[2] = 0;
  in_ECX[1] = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10124d70 FUN_10124d70

void FUN_10124d70(void)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101b8e86;
  local_c = ExceptionList;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  thunk_FUN_10123dd0();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_101208b0();
  local_4 = 0xffffffff;
  thunk_FUN_10120730();
  ExceptionList = local_c;
  return;
}


// ==== 10124df0 FUN_10124df0

void FUN_10124df0(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8ec6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10118a50(param_1);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  thunk_FUN_10118b30(param_1 + 0x1c);
  local_4 = CONCAT31(local_4._1_3_,1);
  thunk_FUN_10123d50(param_1 + 0x28);
  ExceptionList = local_c;
  return;
}


// ==== 10124ea0 FUN_10124ea0

void FUN_10124ea0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101b8f24;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UPackageMap::vftable;
  local_4 = 4;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 3;
  thunk_FUN_101181d0();
  local_4._0_1_ = 2;
  thunk_FUN_10124110();
  local_4._0_1_ = 1;
  thunk_FUN_10123f70();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10124b40();
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10124f60 FUN_10124f60

void FUN_10124f60(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b8fa4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UPackageMap::vftable;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  thunk_FUN_10123e80();
  local_4 = CONCAT31(local_4._1_3_,4);
  thunk_FUN_10124020();
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 10125020 FUN_10125020

void FUN_10125020(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b9014;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UPackageMap::vftable;
  thunk_FUN_10120a60(param_1 + 0x34);
  local_4._0_1_ = 1;
  thunk_FUN_10123ef0(param_1 + 0x40);
  local_4._0_1_ = 3;
  thunk_FUN_10124090(param_1 + 0x54);
  local_4 = CONCAT31(local_4._1_3_,5);
  thunk_FUN_10118130(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  ExceptionList = local_c;
  return;
}


// ==== 10125100 FUN_10125100

void FUN_10125100(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  thunk_FUN_10124bd0(param_1 + 0x34);
  thunk_FUN_1011a980(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  thunk_FUN_10119c90();
  thunk_FUN_1011aaf0(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  thunk_FUN_10119e70();
  thunk_FUN_101182b0(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return;
}


// ==== 10125190 FUN_10125190

void FUN_10125190(byte param_1)

{
  UPackageMap *in_ECX;
  
  UPackageMap::~UPackageMap(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return;
}


// ==== 101251c0 FUN_101251c0

UPackageMap * FUN_101251c0(byte param_1)

{
  UPackageMap *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x7c,*(int *)(in_ECX + -4),UPackageMap::~UPackageMap);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UPackageMap::~UPackageMap(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return in_ECX;
}


// ==== 10125230 FUN_10125230

void FUN_10125230(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101b907f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = USystem::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = USystem::vftable_for_FExec_;
  local_4 = 5;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 4;
  thunk_FUN_10118d50();
  local_4._0_1_ = 3;
  thunk_FUN_10124a00();
  local_4._0_1_ = 2;
  FString::~FString((FString *)(in_ECX + 0x58));
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x4c));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x40));
  local_4 = 0xffffffff;
  USubsystem::~USubsystem((USubsystem *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 101252f0 FUN_101252f0

void FUN_101252f0(USubsystem *param_1)

{
  USubsystem *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b90df;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USubsystem::USubsystem(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = USystem::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = USystem::vftable_for_FExec_;
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  FString::FString((FString *)(in_ECX + 0x40),(FString *)(param_1 + 0x40));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0x4c),(FString *)(param_1 + 0x4c));
  local_4._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0x58),(FString *)(param_1 + 0x58));
  local_4._0_1_ = 3;
  thunk_FUN_10120630(param_1 + 100);
  local_4 = CONCAT31(local_4._1_3_,4);
  thunk_FUN_10118cb0(param_1 + 0x70);
  ExceptionList = local_c;
  return;
}


// ==== 101253e0 FUN_101253e0

void FUN_101253e0(UObject *param_1)

{
  FArray *pFVar1;
  undefined4 uVar2;
  UObject *in_ECX;
  undefined2 *puVar3;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  pFVar1 = (FArray *)(in_ECX + 0x40);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  if (pFVar1 != (FArray *)(param_1 + 0x40)) {
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(in_ECX + 0x48) = uVar2;
    *(undefined4 *)(in_ECX + 0x44) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(in_ECX + 0x44) != 0) {
      if (*(int *)(param_1 + 0x44) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0x40);
      }
      _memcpy(*(void **)pFVar1,puVar3,*(int *)(in_ECX + 0x44) * 2);
    }
  }
  pFVar1 = (FArray *)(in_ECX + 0x4c);
  if (pFVar1 != (FArray *)(param_1 + 0x4c)) {
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(in_ECX + 0x54) = uVar2;
    *(undefined4 *)(in_ECX + 0x50) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(in_ECX + 0x50) != 0) {
      if (*(int *)(param_1 + 0x50) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0x4c);
      }
      _memcpy(*(void **)pFVar1,puVar3,*(int *)(in_ECX + 0x50) * 2);
    }
  }
  pFVar1 = (FArray *)(in_ECX + 0x58);
  if (pFVar1 != (FArray *)(param_1 + 0x58)) {
    uVar2 = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(in_ECX + 0x60) = uVar2;
    *(undefined4 *)(in_ECX + 0x5c) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(in_ECX + 0x5c) != 0) {
      if (*(int *)(param_1 + 0x5c) == 0) {
        puVar3 = &DAT_101cdd44;
      }
      else {
        puVar3 = *(undefined2 **)(param_1 + 0x58);
      }
      _memcpy(*(void **)pFVar1,puVar3,*(int *)(in_ECX + 0x5c) * 2);
    }
  }
  thunk_FUN_10124a90(param_1 + 100);
  thunk_FUN_10118e30(param_1 + 0x70);
  return;
}


// ==== 10125530 FUN_10125530

void FUN_10125530(byte param_1)

{
  USystem *in_ECX;
  
  USystem::~USystem(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return;
}


// ==== 10125560 FUN_10125560

USystem * FUN_10125560(byte param_1)

{
  USystem *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x7c,*(int *)(in_ECX + -4),USystem::~USystem);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  USystem::~USystem(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return in_ECX;
}


// ==== 101255d0 FUN_101255d0

void FUN_101255d0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101b9134;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UFactory::vftable;
  local_4 = 4;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 3;
  thunk_FUN_10124a00();
  local_4._0_1_ = 2;
  FString::~FString((FString *)(in_ECX + 0x54));
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x48));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x3c));
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10125680 FUN_10125680

void FUN_10125680(UObject *param_1)

{
  uint uVar1;
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b9184;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UFactory::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  FString::FString((FString *)(in_ECX + 0x3c),(FString *)(param_1 + 0x3c));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0x48),(FString *)(param_1 + 0x48));
  local_4._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0x54),(FString *)(param_1 + 0x54));
  local_4 = CONCAT31(local_4._1_3_,3);
  thunk_FUN_10120630(param_1 + 0x60);
  *(uint *)(in_ECX + 0x6c) =
       *(uint *)(in_ECX + 0x6c) ^ (*(uint *)(in_ECX + 0x6c) ^ *(uint *)(param_1 + 0x6c)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x6c) ^ *(uint *)(in_ECX + 0x6c)) & 2 ^ *(uint *)(in_ECX + 0x6c);
  *(uint *)(in_ECX + 0x6c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x6c) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x6c) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x6c) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(in_ECX + 0x6c) = uVar1;
  *(uint *)(in_ECX + 0x6c) = (*(uint *)(param_1 + 0x6c) ^ uVar1) & 0x10 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  ExceptionList = local_c;
  return;
}


// ==== 101257b0 FUN_101257b0

void FUN_101257b0(UObject *param_1)

{
  FArray *pFVar1;
  undefined4 uVar2;
  uint uVar3;
  UObject *in_ECX;
  undefined2 *puVar4;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  pFVar1 = (FArray *)(in_ECX + 0x3c);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  if (pFVar1 != (FArray *)(param_1 + 0x3c)) {
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(in_ECX + 0x44) = uVar2;
    *(undefined4 *)(in_ECX + 0x40) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(in_ECX + 0x40) != 0) {
      if (*(int *)(param_1 + 0x40) == 0) {
        puVar4 = &DAT_101cdd44;
      }
      else {
        puVar4 = *(undefined2 **)(param_1 + 0x3c);
      }
      _memcpy(*(void **)pFVar1,puVar4,*(int *)(in_ECX + 0x40) * 2);
    }
  }
  pFVar1 = (FArray *)(in_ECX + 0x48);
  if (pFVar1 != (FArray *)(param_1 + 0x48)) {
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(in_ECX + 0x50) = uVar2;
    *(undefined4 *)(in_ECX + 0x4c) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(in_ECX + 0x4c) != 0) {
      if (*(int *)(param_1 + 0x4c) == 0) {
        puVar4 = &DAT_101cdd44;
      }
      else {
        puVar4 = *(undefined2 **)(param_1 + 0x48);
      }
      _memcpy(*(void **)pFVar1,puVar4,*(int *)(in_ECX + 0x4c) * 2);
    }
  }
  pFVar1 = (FArray *)(in_ECX + 0x54);
  if (pFVar1 != (FArray *)(param_1 + 0x54)) {
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(in_ECX + 0x5c) = uVar2;
    *(undefined4 *)(in_ECX + 0x58) = uVar2;
    FArray::Realloc(pFVar1,2);
    if (*(int *)(in_ECX + 0x58) != 0) {
      if (*(int *)(param_1 + 0x58) == 0) {
        puVar4 = &DAT_101cdd44;
      }
      else {
        puVar4 = *(undefined2 **)(param_1 + 0x54);
      }
      _memcpy(*(void **)pFVar1,puVar4,*(int *)(in_ECX + 0x58) * 2);
    }
  }
  thunk_FUN_10124a90(param_1 + 0x60);
  *(uint *)(in_ECX + 0x6c) =
       *(uint *)(in_ECX + 0x6c) ^ (*(uint *)(in_ECX + 0x6c) ^ *(uint *)(param_1 + 0x6c)) & 1;
  uVar3 = (*(uint *)(param_1 + 0x6c) ^ *(uint *)(in_ECX + 0x6c)) & 2 ^ *(uint *)(in_ECX + 0x6c);
  *(uint *)(in_ECX + 0x6c) = uVar3;
  uVar3 = (*(uint *)(param_1 + 0x6c) ^ uVar3) & 4 ^ uVar3;
  *(uint *)(in_ECX + 0x6c) = uVar3;
  uVar3 = (*(uint *)(param_1 + 0x6c) ^ uVar3) & 8 ^ uVar3;
  *(uint *)(in_ECX + 0x6c) = uVar3;
  *(uint *)(in_ECX + 0x6c) = (*(uint *)(param_1 + 0x6c) ^ uVar3) & 0x10 ^ uVar3;
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  return;
}


// ==== 10125950 FUN_10125950

void FUN_10125950(byte param_1)

{
  UFactory *in_ECX;
  
  UFactory::~UFactory(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x74);
  }
  return;
}


// ==== 10125980 FUN_10125980

UFactory * FUN_10125980(byte param_1)

{
  UFactory *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x74,*(int *)(in_ECX + -4),UFactory::~UFactory);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UFactory::~UFactory(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x74);
  }
  return in_ECX;
}


// ==== 101259f0 FUN_101259f0

void FUN_101259f0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_101b91b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UExporter::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10124a00();
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10125a70 FUN_10125a70

void FUN_10125a70(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b91e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UExporter::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  thunk_FUN_10120630(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(uint *)(in_ECX + 0x48) =
       *(uint *)(in_ECX + 0x48) ^ (*(uint *)(in_ECX + 0x48) ^ *(uint *)(param_1 + 0x48)) & 1;
  *(uint *)(in_ECX + 0x48) =
       (*(uint *)(param_1 + 0x48) ^ *(uint *)(in_ECX + 0x48)) & 2 ^ *(uint *)(in_ECX + 0x48);
  ExceptionList = local_c;
  return;
}


// ==== 10125b20 FUN_10125b20

void FUN_10125b20(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  thunk_FUN_10124a90(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(uint *)(in_ECX + 0x48) =
       *(uint *)(in_ECX + 0x48) ^ (*(uint *)(in_ECX + 0x48) ^ *(uint *)(param_1 + 0x48)) & 1;
  *(uint *)(in_ECX + 0x48) =
       (*(uint *)(param_1 + 0x48) ^ *(uint *)(in_ECX + 0x48)) & 2 ^ *(uint *)(in_ECX + 0x48);
  return;
}


// ==== 10125b80 FUN_10125b80

void FUN_10125b80(byte param_1)

{
  UExporter *in_ECX;
  
  UExporter::~UExporter(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4c);
  }
  return;
}


// ==== 10125bb0 FUN_10125bb0

UExporter * FUN_10125bb0(byte param_1)

{
  UExporter *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x4c,*(int *)(in_ECX + -4),UExporter::~UExporter);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UExporter::~UExporter(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4c);
  }
  return in_ECX;
}


// ==== 10125c20 FUN_10125c20

void FUN_10125c20(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b9208;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UObjectExporterT3D::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UExporter::~UExporter((UExporter *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10125c90 FUN_10125c90

void FUN_10125c90(void)

{
  UExporter *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b9228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UExporter::UExporter(in_ECX);
  *(undefined ***)in_ECX = UObjectExporterT3D::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10125cf0 FUN_10125cf0

void FUN_10125cf0(UExporter *param_1)

{
  UExporter *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b9248;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UExporter::UExporter(in_ECX,param_1);
  *(undefined ***)in_ECX = UObjectExporterT3D::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10125d60 FUN_10125d60

void FUN_10125d60(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  thunk_FUN_10124a90(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(uint *)(in_ECX + 0x48) =
       *(uint *)(in_ECX + 0x48) ^ (*(uint *)(in_ECX + 0x48) ^ *(uint *)(param_1 + 0x48)) & 1;
  *(uint *)(in_ECX + 0x48) =
       (*(uint *)(param_1 + 0x48) ^ *(uint *)(in_ECX + 0x48)) & 2 ^ *(uint *)(in_ECX + 0x48);
  return;
}


// ==== 10125dc0 FUN_10125dc0

void FUN_10125dc0(byte param_1)

{
  UObjectExporterT3D *in_ECX;
  
  UObjectExporterT3D::~UObjectExporterT3D(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4c);
  }
  return;
}


// ==== 10125df0 FUN_10125df0

UObjectExporterT3D * FUN_10125df0(byte param_1)

{
  UObjectExporterT3D *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x4c,*(int *)(in_ECX + -4),UObjectExporterT3D::~UObjectExporterT3D);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UObjectExporterT3D::~UObjectExporterT3D(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4c);
  }
  return in_ECX;
}


// ==== 10125e60 FUN_10125e60

void FUN_10125e60(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101b9268;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UTextBufferFactory::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UFactory::~UFactory((UFactory *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10125ed0 FUN_10125ed0

void FUN_10125ed0(UFactory *param_1)

{
  UFactory *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b9288;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UFactory::UFactory(in_ECX,param_1);
  *(undefined ***)in_ECX = UTextBufferFactory::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10125f40 FUN_10125f40

void FUN_10125f40(UFactory *param_1)

{
  UFactory *in_ECX;
  
  UFactory::operator=(in_ECX,param_1);
  return;
}


// ==== 10125f60 FUN_10125f60

void FUN_10125f60(byte param_1)

{
  UTextBufferFactory *in_ECX;
  
  UTextBufferFactory::~UTextBufferFactory(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x74);
  }
  return;
}


// ==== 10125f90 FUN_10125f90

UTextBufferFactory * FUN_10125f90(byte param_1)

{
  UTextBufferFactory *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x74,*(int *)(in_ECX + -4),UTextBufferFactory::~UTextBufferFactory);
    if ((param_1 & 1) != 0) {
      (**(code **)(*(int *)GMalloc + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTextBufferFactory::~UTextBufferFactory(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x74);
  }
  return in_ECX;
}


// ==== 10126000 FUN_10126000

void FUN_10126000(UPackageMap *param_1)

{
  if (param_1 != (UPackageMap *)0x0) {
    UPackageMap::UPackageMap(param_1);
    return;
  }
  return;
}


// ==== 10126020 FUN_10126020

void FUN_10126020(UObjectExporterT3D *param_1)

{
  if (param_1 != (UObjectExporterT3D *)0x0) {
    UObjectExporterT3D::UObjectExporterT3D(param_1);
    return;
  }
  return;
}


// ==== 10126040 FUN_10126040

/* WARNING: Removing unreachable block (ram,0x10126082) */
/* WARNING: Removing unreachable block (ram,0x10126058) */
/* WARNING: Removing unreachable block (ram,0x101260e6) */

void FUN_10126040(void)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined2 uVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  undefined2 *puVar8;
  void *_Dst;
  int *in_ECX;
  uint uVar9;
  int iVar10;
  ushort unaff_DI;
  uint uVar11;
  uint uVar12;
  uint local_10;
  
  uVar5 = *(ushort *)(in_ECX + 1);
  if ((uVar5 & 7) != 0) {
    uVar5 = ((uVar5 >> 3) + 1) * 8;
  }
  uVar9 = (uint)uVar5;
  uVar6 = *(ushort *)((int)in_ECX + 6);
  if ((uVar6 & 7) != 0) {
    uVar6 = ((uVar6 >> 3) + 1) * 8;
  }
  local_10 = (uint)uVar6;
  iVar7 = (*(code *)**(undefined4 **)GMalloc)(local_10 * uVar9 * 3,&DAT_101cfd08);
  iVar10 = 0;
  in_ECX[0xba1] = iVar7;
  if (iVar7 != 0) {
    if ((*(ushort *)(in_ECX + 1) & 3) == 0) {
      bVar4 = 0;
    }
    else {
      bVar4 = 4 - ((byte)*(ushort *)(in_ECX + 1) & 3);
    }
    uVar6 = 0;
    if (*(short *)((int)in_ECX + 6) != 0) {
      do {
        iVar7 = uVar6 * uVar9;
        _memcpy((void *)(iVar7 * 3 + in_ECX[0xba1]),(void *)(*in_ECX + iVar10),
                (uint)*(ushort *)(in_ECX + 1) * 3);
        uVar2 = *(ushort *)(in_ECX + 1);
        iVar10 = iVar10 + (uint)bVar4 + (uint)uVar2 * 3;
        puVar8 = (undefined2 *)(((uint)uVar2 + iVar7) * 3 + -3 + in_ECX[0xba1]);
        uVar1 = *(undefined1 *)(puVar8 + 1);
        uVar3 = *puVar8;
        if (uVar2 < uVar5) {
          iVar7 = ((uint)uVar2 + iVar7) * 3;
          uVar11 = uVar9 - uVar2 & 0xffff;
          do {
            puVar8 = (undefined2 *)(in_ECX[0xba1] + iVar7);
            iVar7 = iVar7 + 3;
            uVar11 = uVar11 - 1;
            *puVar8 = uVar3;
            *(undefined1 *)(puVar8 + 1) = uVar1;
          } while (uVar11 != 0);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)((int)in_ECX + 6));
    }
    uVar9 = uVar9 * 3 & 0xffff;
    *(ushort *)(in_ECX + 1) = uVar5;
    _Dst = (void *)(*(code *)**(undefined4 **)GMalloc)(uVar9,&DAT_101cfd0c);
    if (_Dst != (void *)0x0) {
      _memcpy(_Dst,(void *)((*(ushort *)((int)in_ECX + 6) - 1) * (uint)*(ushort *)(in_ECX + 1) * 3 +
                           in_ECX[0xba1]),uVar9);
      uVar5 = *(ushort *)((int)in_ECX + 6);
      if (uVar5 < unaff_DI) {
        uVar11 = (uint)(ushort)(unaff_DI - uVar5);
        uVar12 = (uint)uVar5;
        do {
          _memcpy((void *)(*(ushort *)(in_ECX + 1) * uVar12 * 3 + in_ECX[0xba1]),_Dst,uVar9);
          uVar12 = uVar12 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      *(ushort *)((int)in_ECX + 6) = unaff_DI;
      (**(code **)(*(int *)GMalloc + 8))(_Dst);
    }
  }
  return;
}


// ==== 101262e0 FUN_101262e0

void FUN_101262e0(int param_1,byte param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  
  pbVar4 = &DAT_101cfcc8;
  iVar3 = 0x40;
  do {
    uVar2 = ((uint)pbVar4[param_1 + -0x101cfcc8] * (uint)param_2 + 0x32) / 100;
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    else if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    iVar3 = iVar3 + -1;
    *(char *)((uint)bVar1 + param_3) = (char)uVar2;
  } while (iVar3 != 0);
  return;
}


// ==== 10126370 FUN_10126370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10126370(void)

{
  _DAT_1027a57d = DAT_10238461;
  _DAT_1027a581 = DAT_10238465;
  _DAT_1027a585 = DAT_10238469;
  _DAT_1027a589 = DAT_1023846d;
  _DAT_1027a58d = DAT_10238474;
  _DAT_1027a591 = DAT_10238478;
  _DAT_1027a595 = DAT_1023847c;
  _DAT_1027a59a = DAT_102384a1;
  DAT_1027a578 = 0xffc4;
  DAT_1027a57a = 0x1a2;
  DAT_1027a57c = 0;
  DAT_1027a599 = 0x10;
  _DAT_1027a59e = DAT_102384a5;
  _DAT_1027a5a2 = DAT_102384a9;
  _DAT_1027a5a6 = DAT_102384ad;
  _memcpy(&DAT_1027a5aa,&DAT_102384b8,0xa2);
  _DAT_1027a64d = DAT_10238481;
  _DAT_1027a651 = DAT_10238485;
  _DAT_1027a655 = DAT_10238489;
  _DAT_1027a659 = DAT_1023848d;
  _DAT_1027a65d = DAT_10238494;
  _DAT_1027a661 = DAT_10238498;
  _DAT_1027a665 = DAT_1023849c;
  _DAT_1027a66a = DAT_1023855d;
  DAT_1027a64c = 1;
  DAT_1027a669 = 0x11;
  _DAT_1027a66e = DAT_10238561;
  _DAT_1027a672 = DAT_10238565;
  _DAT_1027a676 = DAT_10238569;
  _memcpy(&DAT_1027a67a,&DAT_10238570,0xa2);
  return;
}


// ==== 10126520 FUN_10126520

void FUN_10126520(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  byte bVar3;
  uint uVar4;
  
  sVar2 = 0;
  uVar4 = 0;
  bVar1 = 1;
  do {
    param_1 = param_1 + 1;
    bVar3 = 1;
    if (*param_1 != 0) {
      do {
        *(short *)(param_3 + 2 + (uint)*(byte *)(uVar4 + param_2) * 4) = sVar2;
        *(byte *)(param_3 + (uint)*(byte *)(uVar4 + param_2) * 4) = bVar1;
        bVar3 = bVar3 + 1;
        uVar4 = (uint)(byte)((char)uVar4 + 1);
        sVar2 = sVar2 + 1;
      } while (bVar3 <= *param_1);
    }
    bVar1 = bVar1 + 1;
    sVar2 = sVar2 * 2;
  } while (bVar1 < 0x11);
  return;
}


// ==== 101265c0 FUN_101265c0

void FUN_101265c0(void)

{
  int iVar1;
  byte bVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  
  iVar1 = (*(code *)**(undefined4 **)GMalloc)(0xffff,&DAT_101cfd18);
  *(int *)(in_ECX + 0x874) = iVar1;
  if (iVar1 != 0) {
    *(int *)(in_ECX + 0x878) = iVar1 + 0x7fff;
    iVar1 = (*(code *)**(undefined4 **)GMalloc)(0x3fffc,&DAT_101cfd1c);
    *(int *)(in_ECX + 0x87c) = iVar1;
    if (iVar1 != 0) {
      *(int *)(in_ECX + 0x880) = iVar1 + 0x1fffc;
      iVar1 = 1;
      iVar3 = 2;
      bVar2 = 1;
      iVar4 = iVar1;
      do {
        for (; iVar1 < iVar3; iVar1 = iVar1 + 1) {
          *(byte *)(iVar1 + *(int *)(in_ECX + 0x878)) = bVar2;
          *(byte *)(*(int *)(in_ECX + 0x880) + iVar1 * 4) = bVar2;
          *(short *)(*(int *)(in_ECX + 0x880) + 2 + iVar1 * 4) = (short)iVar1;
        }
        iVar1 = -iVar3;
        while (iVar1 = iVar1 + 1, iVar1 <= -iVar4) {
          *(byte *)(iVar1 + *(int *)(in_ECX + 0x878)) = bVar2;
          *(byte *)(*(int *)(in_ECX + 0x880) + iVar1 * 4) = bVar2;
          *(short *)(*(int *)(in_ECX + 0x880) + 2 + iVar1 * 4) = (short)iVar3 + -1 + (short)iVar1;
        }
        iVar1 = iVar4 * 2;
        bVar2 = bVar2 + 1;
        iVar3 = iVar3 * 2;
        iVar4 = iVar1;
      } while (bVar2 < 0x10);
    }
  }
  return;
}


// ==== 10126710 FUN_10126710

void FUN_10126710(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  iVar2 = 0;
  piVar1 = (int *)(in_ECX + 0x1484);
  iVar3 = 0x100;
  do {
    piVar1[-0x300] = iVar2;
    *piVar1 = iVar4;
    piVar1[0x300] = iVar5;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 0x4c8b;
    iVar4 = iVar4 + -0x2b32;
    iVar5 = iVar5 + 0x8000;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar5 = 0;
  iVar4 = 0;
  iVar2 = 0;
  piVar1 = (int *)(in_ECX + 0x1884);
  iVar3 = 0x100;
  do {
    piVar1[-0x300] = iVar2;
    *piVar1 = iVar4;
    piVar1[0x300] = iVar5;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 0x9646;
    iVar4 = iVar4 + -0x54cc;
    iVar5 = iVar5 + -0x6b2e;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar5 = 0;
  iVar4 = 0;
  piVar1 = (int *)(in_ECX + 0x1c84);
  iVar3 = 0;
  iVar2 = 0x100;
  do {
    piVar1[-0x300] = iVar3;
    *piVar1 = iVar4;
    piVar1[0x300] = iVar5;
    piVar1 = piVar1 + 1;
    iVar3 = iVar3 + 0x1d2f;
    iVar4 = iVar4 + 0x8000;
    iVar5 = iVar5 + -0x14d0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


// ==== 10126810 FUN_10126810

void FUN_10126810(void)

{
  int in_ECX;
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  int iVar5;
  int local_50;
  double local_48 [8];
  
  local_48[0] = 1.0;
  local_48[1] = 1.387039845;
  uVar2 = 0;
  local_48[2] = 1.306562965;
  pdVar4 = local_48;
  local_50 = 8;
  local_48[3] = 1.175875602;
  local_48[4] = 1.0;
  local_48[5] = 0.785694958;
  local_48[6] = 0.5411961;
  local_48[7] = 0.275899379;
  do {
    iVar5 = 8;
    pdVar1 = local_48;
    uVar3 = uVar2;
    do {
      uVar2 = (uint)(byte)((char)uVar3 + 1);
      iVar5 = iVar5 + -1;
      *(float *)(in_ECX + 0x2c84 + uVar3 * 4) =
           1.0 / ((float)(byte)(&DAT_1027a4f5)[(byte)(&DAT_101cfcc8)[uVar3]] * (float)*pdVar4 *
                  (float)*pdVar1 * 8.0);
      *(float *)(in_ECX + 0x2d84 + uVar3 * 4) =
           1.0 / ((float)(byte)(&DAT_1027a536)[(byte)(&DAT_101cfcc8)[uVar3]] * (float)*pdVar4 *
                  (float)*pdVar1 * 8.0);
      pdVar1 = pdVar1 + 1;
      uVar3 = uVar2;
    } while (iVar5 != 0);
    pdVar4 = pdVar4 + 1;
    local_50 = local_50 + -1;
  } while (local_50 != 0);
  return;
}


// ==== 10126930 FUN_10126930

/* WARNING: Removing unreachable block (ram,0x10126a8a) */
/* WARNING: Removing unreachable block (ram,0x1012695e) */
/* WARNING: Removing unreachable block (ram,0x101269a4) */
/* WARNING: Removing unreachable block (ram,0x10126ad0) */

void FUN_10126930(void)

{
  int in_ECX;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined *puStack_68;
  undefined4 uStack_64;
  undefined *puStack_60;
  undefined4 uStack_5c;
  undefined *puStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  undefined1 local_1;
  
  uStack_c = 1;
  puStack_10 = &local_1;
  uStack_14 = 0x10126950;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_c = CONCAT13((char)DAT_102383a8,(undefined3)uStack_c);
  uStack_14 = 1;
  iStack_18 = (int)&uStack_c + 3;
  uStack_1c = 0x1012697a;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_14 = CONCAT13(DAT_102383aa._1_1_,(undefined3)uStack_14);
  uStack_1c = 1;
  iStack_20 = (int)&uStack_14 + 3;
  uStack_24 = 0x10126996;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_1c = CONCAT13((char)DAT_102383aa,(undefined3)uStack_1c);
  uStack_24 = 1;
  iStack_28 = (int)&uStack_1c + 3;
  uStack_2c = 0x101269c0;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_24 = CONCAT13(0x4a,(undefined3)uStack_24);
  uStack_2c = 1;
  iStack_30 = (int)&uStack_24 + 3;
  uStack_34 = 0x101269d6;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_2c = CONCAT13(0x46,(undefined3)uStack_2c);
  uStack_34 = 1;
  iStack_38 = (int)&uStack_2c + 3;
  uStack_3c = 0x101269ec;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_34 = CONCAT13(0x49,(undefined3)uStack_34);
  uStack_3c = 1;
  iStack_40 = (int)&uStack_34 + 3;
  uStack_44 = 0x10126a02;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_3c = CONCAT13(0x46,(undefined3)uStack_3c);
  uStack_44 = 1;
  iStack_48 = (int)&uStack_3c + 3;
  uStack_4c = 0x10126a18;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_44 = uStack_44 & 0xffffff;
  uStack_4c = 1;
  iStack_50 = (int)&uStack_44 + 3;
  uStack_54 = 0x10126a2e;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_54 = 1;
  puStack_58 = &DAT_102383b1;
  uStack_5c = 0x10126a3f;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_5c = 1;
  puStack_60 = &DAT_102383b2;
  uStack_64 = 0x10126a50;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_64 = 1;
  puStack_68 = &DAT_102383b3;
  uStack_6c = 0x10126a61;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_64 = CONCAT13(DAT_102383b4._1_1_,(undefined3)uStack_64);
  uStack_6c = 1;
  iStack_70 = (int)&uStack_64 + 3;
  uStack_74 = 0x10126a7c;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_6c = CONCAT13((char)DAT_102383b4,(undefined3)uStack_6c);
  uStack_74 = 1;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_74 = CONCAT13(DAT_102383b6._1_1_,(undefined3)uStack_74);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))((int)&uStack_74 + 3,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&stack0xffffff87,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383b8,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383b9,1);
  return;
}


// ==== 10126b90 FUN_10126b90

/* WARNING: Removing unreachable block (ram,0x10126bc0) */
/* WARNING: Removing unreachable block (ram,0x10126c06) */

void FUN_10126b90(void)

{
  int in_ECX;
  int iVar1;
  undefined *puVar2;
  undefined4 uStack_14;
  
  uStack_14 = 1;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&stack0xfffffff7,1);
  uStack_14 = CONCAT13(DAT_1027a4f2._1_1_,(undefined3)uStack_14);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))((int)&uStack_14 + 3,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&stack0xffffffe7,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_1027a4f4,1);
  puVar2 = &DAT_1027a4f5;
  iVar1 = 0x40;
  do {
    (**(code **)(**(int **)(in_ECX + 0xc) + 4))(puVar2,1);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_1027a535,1);
  puVar2 = &DAT_1027a536;
  iVar1 = 0x40;
  do {
    (**(code **)(**(int **)(in_ECX + 0xc) + 4))(puVar2,1);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 10126cd0 FUN_10126cd0

/* WARNING: Removing unreachable block (ram,0x10126d9b) */
/* WARNING: Removing unreachable block (ram,0x10126cfe) */
/* WARNING: Removing unreachable block (ram,0x10126d44) */
/* WARNING: Removing unreachable block (ram,0x10126de1) */

void FUN_10126cd0(void)

{
  int in_ECX;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  undefined1 local_1;
  
  uStack_c = 1;
  puStack_10 = &local_1;
  uStack_14 = 0x10126cf0;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_c = CONCAT13((char)DAT_102383bc,(undefined3)uStack_c);
  uStack_14 = 1;
  iStack_18 = (int)&uStack_c + 3;
  uStack_1c = 0x10126d1a;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_14 = CONCAT13(DAT_102383be._1_1_,(undefined3)uStack_14);
  uStack_1c = 1;
  iStack_20 = (int)&uStack_14 + 3;
  uStack_24 = 0x10126d36;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_1c = CONCAT13((char)DAT_102383be,(undefined3)uStack_1c);
  uStack_24 = 1;
  iStack_28 = (int)&uStack_1c + 3;
  uStack_2c = 0x10126d60;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_2c = 1;
  puStack_30 = &DAT_102383c0;
  uStack_34 = 0x10126d71;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_2c = CONCAT13(DAT_102383c2._1_1_,(undefined3)uStack_2c);
  uStack_34 = 1;
  iStack_38 = (int)&uStack_2c + 3;
  uStack_3c = 0x10126d8d;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_34 = CONCAT13((char)DAT_102383c2,(undefined3)uStack_34);
  uStack_3c = 1;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_3c = CONCAT13(DAT_102383c4._1_1_,(undefined3)uStack_3c);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))((int)&uStack_3c + 3,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&stack0xffffffbf,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383c6,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383c7,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383c8,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383c9,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383ca,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383cb,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383cc,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383cd,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383ce,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383cf,1);
  return;
}


// ==== 10126f20 FUN_10126f20

/* WARNING: Removing unreachable block (ram,0x10126f50) */
/* WARNING: Removing unreachable block (ram,0x10126f96) */

void FUN_10126f20(void)

{
  int in_ECX;
  int iVar1;
  undefined *puVar2;
  undefined4 uStack_14;
  
  uStack_14 = 1;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&stack0xfffffff7,1);
  uStack_14 = CONCAT13(DAT_1027a57a._1_1_,(undefined3)uStack_14);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))((int)&uStack_14 + 3,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&stack0xffffffe7,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_1027a57c,1);
  puVar2 = &DAT_1027a57d;
  iVar1 = 0x10;
  do {
    (**(code **)(**(int **)(in_ECX + 0xc) + 4))(puVar2,1);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = &DAT_1027a58d;
  iVar1 = 0xc;
  do {
    (**(code **)(**(int **)(in_ECX + 0xc) + 4))(puVar2,1);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_1027a599,1);
  puVar2 = &DAT_1027a59a;
  iVar1 = 0x10;
  do {
    (**(code **)(**(int **)(in_ECX + 0xc) + 4))(puVar2,1);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = &DAT_1027a5aa;
  iVar1 = 0xa2;
  do {
    (**(code **)(**(int **)(in_ECX + 0xc) + 4))(puVar2,1);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_1027a64c,1);
  puVar2 = &DAT_1027a64d;
  iVar1 = 0x10;
  do {
    (**(code **)(**(int **)(in_ECX + 0xc) + 4))(puVar2,1);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = &DAT_1027a65d;
  iVar1 = 0xc;
  do {
    (**(code **)(**(int **)(in_ECX + 0xc) + 4))(puVar2,1);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_1027a669,1);
  puVar2 = &DAT_1027a66a;
  iVar1 = 0x10;
  do {
    (**(code **)(**(int **)(in_ECX + 0xc) + 4))(puVar2,1);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = &DAT_1027a67a;
  iVar1 = 0xa2;
  do {
    (**(code **)(**(int **)(in_ECX + 0xc) + 4))(puVar2,1);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ==== 10127170 FUN_10127170

/* WARNING: Removing unreachable block (ram,0x1012719e) */
/* WARNING: Removing unreachable block (ram,0x101271e4) */

void FUN_10127170(void)

{
  int in_ECX;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  undefined1 local_1;
  
  uStack_c = 1;
  puStack_10 = &local_1;
  uStack_14 = 0x10127190;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_c = CONCAT13((char)DAT_102383d0,(undefined3)uStack_c);
  uStack_14 = 1;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))();
  uStack_14 = CONCAT13(DAT_102383d2._1_1_,(undefined3)uStack_14);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))((int)&uStack_14 + 3,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&stack0xffffffe7,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383d4,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383d5,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383d6,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383d7,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383d8,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383d9,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383da,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383db,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383dc,1);
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&DAT_102383dd,1);
  return;
}


// ==== 10127300 FUN_10127300

void FUN_10127300(ushort param_1,ushort param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte local_9;
  int local_8;
  
  local_9 = 0;
  iVar2 = (uint)param_2 * (uint)*(ushort *)(in_ECX + 4) + (uint)param_1;
  local_8 = 8;
  do {
    iVar5 = iVar2 * 3;
    _param_1 = 8;
    do {
      pbVar3 = (byte *)(*(int *)(in_ECX + 0x2e84) + iVar5);
      uVar4 = (uint)*pbVar3;
      uVar7 = (uint)*(byte *)(*(int *)(in_ECX + 0x2e84) + 2 + iVar5);
      uVar6 = (uint)pbVar3[1];
      iVar1 = (uint)local_9 + in_ECX;
      iVar5 = iVar5 + 3;
      *(char *)(iVar1 + 0x2e88) =
           (char)((uint)(*(int *)(in_ECX + 0x1084 + uVar4 * 4) +
                         *(int *)(in_ECX + 0x884 + uVar7 * 4) + *(int *)(in_ECX + 0xc84 + uVar6 * 4)
                        ) >> 0x10) + -0x80;
      *(char *)(iVar1 + 0x2ec8) =
           (char)((uint)(*(int *)(in_ECX + 0x1c84 + uVar4 * 4) +
                         *(int *)(in_ECX + 0x1484 + uVar7 * 4) +
                        *(int *)(in_ECX + 0x1884 + uVar6 * 4)) >> 0x10);
      local_9 = local_9 + 1;
      _param_1 = _param_1 + -1;
      *(char *)(iVar1 + 0x2f08) =
           (char)((uint)(*(int *)(in_ECX + 0x2884 + uVar4 * 4) +
                         *(int *)(in_ECX + 0x2084 + uVar7 * 4) +
                        *(int *)(in_ECX + 0x2484 + uVar6 * 4)) >> 0x10);
    } while (_param_1 != 0);
    local_8 = local_8 + -1;
    iVar2 = iVar2 + (uint)*(ushort *)(in_ECX + 4);
  } while (local_8 != 0);
  return;
}


// ==== 10127440 FUN_10127440

void FUN_10127440(char *param_1,undefined4 param_2,short *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  float *pfVar9;
  char cVar10;
  int iVar11;
  float local_100 [16];
  float local_c0 [8];
  float local_a0 [8];
  float local_80 [8];
  float local_60 [8];
  float local_40 [8];
  float local_20 [8];
  
  iVar11 = 0x40;
  pfVar9 = local_100;
  do {
    cVar10 = *param_1;
    param_1 = param_1 + 1;
    iVar11 = iVar11 + -1;
    *pfVar9 = (float)(int)cVar10;
    pfVar9 = pfVar9 + 1;
  } while (iVar11 != 0);
  cVar10 = '\a';
  pfVar9 = local_100 + 2;
  do {
    fVar4 = pfVar9[-2] - pfVar9[5];
    fVar1 = pfVar9[4];
    fVar2 = *pfVar9;
    fVar3 = pfVar9[2];
    fVar6 = pfVar9[-2] + pfVar9[5] + pfVar9[2] + pfVar9[1];
    fVar5 = (pfVar9[-2] + pfVar9[5]) - (pfVar9[2] + pfVar9[1]);
    fVar7 = pfVar9[-1] + pfVar9[4] + pfVar9[3] + *pfVar9;
    pfVar9[-2] = fVar6 + fVar7;
    pfVar9[2] = fVar6 - fVar7;
    fVar6 = (fVar5 + ((pfVar9[-1] + pfVar9[4]) - (pfVar9[3] + *pfVar9))) * 0.70710677;
    *pfVar9 = fVar6 + fVar5;
    pfVar9[4] = fVar5 - fVar6;
    fVar3 = (fVar2 - pfVar9[3]) + (pfVar9[1] - fVar3);
    fVar5 = fVar4 + (pfVar9[-1] - fVar1);
    cVar10 = cVar10 + -1;
    fVar6 = (fVar3 - fVar5) * 0.38268343;
    fVar3 = fVar6 + fVar3 * 0.5411961;
    fVar6 = fVar5 * 1.306563 + fVar6;
    fVar1 = ((fVar2 - pfVar9[3]) + (pfVar9[-1] - fVar1)) * 0.70710677;
    fVar2 = fVar1 + fVar4;
    fVar4 = fVar4 - fVar1;
    pfVar9[3] = fVar3 + fVar4;
    pfVar9[1] = fVar4 - fVar3;
    pfVar9[-1] = fVar6 + fVar2;
    pfVar9[5] = fVar2 - fVar6;
    pfVar9 = pfVar9 + 8;
  } while (-1 < cVar10);
  cVar10 = '\a';
  pfVar9 = local_c0;
  do {
    fVar5 = pfVar9[-0x10] - pfVar9[0x28];
    fVar1 = pfVar9[0x20];
    fVar2 = *pfVar9;
    fVar3 = pfVar9[0x10];
    fVar4 = pfVar9[-0x10] + pfVar9[0x28] + pfVar9[0x10] + pfVar9[8];
    fVar6 = (pfVar9[-0x10] + pfVar9[0x28]) - (pfVar9[0x10] + pfVar9[8]);
    fVar7 = pfVar9[-8] + pfVar9[0x20] + pfVar9[0x18] + *pfVar9;
    pfVar9[-0x10] = fVar4 + fVar7;
    pfVar9[0x10] = fVar4 - fVar7;
    fVar4 = (fVar6 + ((pfVar9[-8] + pfVar9[0x20]) - (pfVar9[0x18] + *pfVar9))) * 0.70710677;
    *pfVar9 = fVar4 + fVar6;
    pfVar9[0x20] = fVar6 - fVar4;
    fVar3 = (fVar2 - pfVar9[0x18]) + (pfVar9[8] - fVar3);
    fVar4 = fVar5 + (pfVar9[-8] - fVar1);
    cVar10 = cVar10 + -1;
    fVar6 = (fVar3 - fVar4) * 0.38268343;
    fVar3 = fVar6 + fVar3 * 0.5411961;
    fVar6 = fVar4 * 1.306563 + fVar6;
    fVar1 = ((fVar2 - pfVar9[0x18]) + (pfVar9[-8] - fVar1)) * 0.70710677;
    fVar2 = fVar1 + fVar5;
    fVar5 = fVar5 - fVar1;
    pfVar9[0x18] = fVar3 + fVar5;
    pfVar9[8] = fVar5 - fVar3;
    pfVar9[-8] = fVar6 + fVar2;
    pfVar9[0x28] = fVar2 - fVar6;
    pfVar9 = pfVar9 + 1;
  } while (-1 < cVar10);
  iVar11 = 0x40;
  do {
    sVar8 = FUN_1017b700();
    *param_3 = sVar8 + -0x4000;
    param_3 = param_3 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  return;
}


// ==== 101278f0 FUN_101278f0

void FUN_101278f0(undefined4 param_1)

{
  char *pcVar1;
  char cVar2;
  uint in_ECX;
  code *pcVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  undefined4 uStack_4;
  
  cVar2 = (char)param_1 + -1;
  uStack_4 = in_ECX & 0xffffff;
  if (-1 < cVar2) {
    puVar4 = (ushort *)(&DAT_101cfca8 + cVar2 * 2);
    do {
      if ((*puVar4 & (ushort)((uint)param_1 >> 0x10)) != 0) {
        *(byte *)(in_ECX + 0x10) =
             *(byte *)(in_ECX + 0x10) | (&DAT_101cfca8)[*(char *)(in_ECX + 0x11) * 2];
      }
      cVar2 = cVar2 + -1;
      puVar4 = puVar4 + -1;
      pcVar1 = (char *)(in_ECX + 0x11);
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 < '\0') {
        if (*(char *)(in_ECX + 0x10) == -1) {
          uStack_4 = CONCAT13(0xff,(undefined3)uStack_4);
          (**(code **)(**(int **)(in_ECX + 0xc) + 4))((int)&uStack_4 + 3,1);
          uStack_4 = uStack_4 & 0xffffff;
          pcVar3 = *(code **)(**(int **)(in_ECX + 0xc) + 4);
          puVar5 = (undefined1 *)((int)&uStack_4 + 3);
        }
        else {
          pcVar3 = *(code **)(**(int **)(in_ECX + 0xc) + 4);
          puVar5 = (undefined1 *)(in_ECX + 0x10);
        }
        (*pcVar3)(puVar5,1);
        *(undefined1 *)(in_ECX + 0x11) = 7;
        *(undefined1 *)(in_ECX + 0x10) = 0;
      }
    } while (-1 < cVar2);
  }
  return;
}


// ==== 101279c0 FUN_101279c0

void FUN_101279c0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2e84) != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)(in_ECX + 0x2e84));
  }
  if (*(int *)(in_ECX + 0x874) != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)(in_ECX + 0x874));
  }
  if (*(int *)(in_ECX + 0x87c) != 0) {
    (**(code **)(*(int *)GMalloc + 8))(*(int *)(in_ECX + 0x87c));
  }
  return;
}


// ==== 10127a20 FUN_10127a20

void FUN_10127a20(undefined4 param_1)

{
  DAT_1027a4f0 = 0xffdb;
  DAT_1027a4f2 = 0x84;
  DAT_1027a4f4 = 0;
  DAT_1027a535 = 1;
  thunk_FUN_101262e0(&DAT_102383e0,param_1,&DAT_1027a4f5);
  thunk_FUN_101262e0(&DAT_10238420,param_1,&DAT_1027a536);
  return;
}


// ==== 10127a90 FUN_10127a90

void FUN_10127a90(void)

{
  int in_ECX;
  
  thunk_FUN_10126520(s_8ccccc_Bcccccccccccccccccccccccc_10238432 + 0x2e,&DAT_10238474,in_ECX + 0x12)
  ;
  thunk_FUN_10126520(&DAT_10238480,&DAT_10238494,in_ECX + 0x42);
  thunk_FUN_10126520(&DAT_102384a0,&DAT_102384b8,in_ECX + 0x72);
  thunk_FUN_10126520(&DAT_1023855c,&DAT_10238570,in_ECX + 0x472);
  return;
}


// ==== 10127b00 FUN_10127b00

/* WARNING: Removing unreachable block (ram,0x10127c50) */

void FUN_10127b00(undefined4 param_1,undefined4 param_2,short *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  short sVar8;
  int in_ECX;
  byte *pbVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  
  uVar2 = *param_5;
  uVar3 = param_5[0xf0];
  puVar6 = (undefined2 *)(in_ECX + 0x2f48);
  thunk_FUN_10127440(param_1,param_2,puVar6);
  pbVar9 = &DAT_101cfcc8;
  iVar10 = 0x40;
  do {
    bVar4 = *pbVar9;
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    pbVar9 = pbVar9 + 1;
    iVar10 = iVar10 + -1;
    *(undefined2 *)(in_ECX + 0x2fc8 + (uint)bVar4 * 2) = uVar1;
  } while (iVar10 != 0);
  sVar8 = *(short *)(in_ECX + 0x2fc8) - *param_3;
  *param_3 = *(short *)(in_ECX + 0x2fc8);
  if (sVar8 == 0) {
    uVar7 = *param_4;
  }
  else {
    thunk_FUN_101278f0(param_4[*(byte *)(*(int *)(in_ECX + 0x878) + (int)sVar8)]);
    uVar7 = *(undefined4 *)(*(int *)(in_ECX + 0x880) + sVar8 * 4);
  }
  thunk_FUN_101278f0(uVar7);
  uVar12 = 0x3f;
  do {
    if (*(short *)(in_ECX + 0x2fc8 + uVar12 * 2) != 0) break;
    bVar4 = (char)uVar12 - 1;
    uVar12 = (uint)bVar4;
  } while (bVar4 != 0);
  bVar4 = (byte)uVar12;
  if (bVar4 == 0) {
    thunk_FUN_101278f0(uVar2);
    return;
  }
  if (bVar4 != 0) {
    uVar12 = 1;
    do {
      sVar8 = *(short *)(in_ECX + 0x2fc8 + uVar12 * 2);
      uVar13 = uVar12;
      while ((bVar11 = (byte)uVar13, sVar8 == 0 && (bVar11 <= bVar4))) {
        uVar13 = (uint)(byte)(bVar11 + 1);
        sVar8 = *(short *)(in_ECX + 0x2fc8 + uVar13 * 2);
      }
      bVar5 = bVar11 - (char)uVar12;
      if (0xf < bVar5) {
        if (bVar5 >> 4 != 0) {
          uVar12 = (uint)(bVar5 >> 4);
          do {
            thunk_FUN_101278f0(uVar3);
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        bVar5 = bVar5 & 0xf;
      }
      thunk_FUN_101278f0(param_5[(uint)*(byte *)((int)*(short *)(in_ECX + 0x2fc8 + uVar13 * 2) +
                                                *(int *)(in_ECX + 0x878)) + (uint)bVar5 * 0x10]);
      thunk_FUN_101278f0(*(undefined4 *)
                          (*(int *)(in_ECX + 0x880) + *(short *)(in_ECX + 0x2fc8 + uVar13 * 2) * 4))
      ;
      uVar12 = (uint)(byte)(bVar11 + 1);
    } while ((byte)(bVar11 + 1) <= bVar4);
  }
  if (bVar4 != 0x3f) {
    thunk_FUN_101278f0(uVar2);
  }
  return;
}


// ==== 10127d40 FUN_10127d40

void FUN_10127d40(undefined4 param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9330;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10126040();
  thunk_FUN_10127a20(param_1);
  thunk_FUN_10126370();
  thunk_FUN_10127a90();
  thunk_FUN_101265c0();
  thunk_FUN_10126710();
  thunk_FUN_10126810();
  DAT_102383c4 = *(undefined2 *)(in_ECX + 8);
  DAT_102383c2 = *(undefined2 *)(in_ECX + 10);
  ExceptionList = local_10;
  return;
}


// ==== 10127dcd Catch@10127dcd

void Catch_10127dcd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10127de1 Catch@10127de1

void Catch_10127de1(void)

{
  appUnwindf((ushort *)&DAT_101cfd10,L"L2JpegEncoder::init_all");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10127e30 FUN_10127e30

void FUN_10127e30(void)

{
  ushort uVar1;
  int in_ECX;
  int iVar2;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_10 = 0;
  if (*(short *)(in_ECX + 6) != 0) {
    uVar1 = *(ushort *)(in_ECX + 4);
    do {
      iVar2 = 0;
      if (uVar1 != 0) {
        do {
          thunk_FUN_10127300(iVar2,local_10);
          thunk_FUN_10127b00(in_ECX + 0x2e88,in_ECX + 0x2c84,&local_c,in_ECX + 0x12,in_ECX + 0x72);
          thunk_FUN_10127b00(in_ECX + 0x2ec8,in_ECX + 0x2d84,&local_8,in_ECX + 0x42,in_ECX + 0x472);
          thunk_FUN_10127b00(in_ECX + 0x2f08,in_ECX + 0x2d84,&local_4,in_ECX + 0x42,in_ECX + 0x472);
          uVar1 = *(ushort *)(in_ECX + 4);
          iVar2 = iVar2 + 8;
        } while ((ushort)iVar2 < uVar1);
      }
      local_10 = local_10 + 8;
    } while ((ushort)local_10 < *(ushort *)(in_ECX + 6));
  }
  return;
}


// ==== 10127f40 FUN_10127f40

void FUN_10127f40(void)

{
  byte bVar1;
  int in_ECX;
  undefined4 local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9340;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  local_15 = 0xff;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&local_15,1);
  local_15 = 0xd8;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&local_15,1);
  thunk_FUN_10126930();
  thunk_FUN_10126b90();
  thunk_FUN_10126cd0();
  thunk_FUN_10126f20();
  thunk_FUN_10127170();
  *(undefined1 *)(in_ECX + 0x10) = 0;
  *(undefined1 *)(in_ECX + 0x11) = 7;
  thunk_FUN_10127e30();
  if (-1 < *(char *)(in_ECX + 0x11)) {
    bVar1 = *(char *)(in_ECX + 0x11) + 1;
    local_1c = CONCAT31(local_1c._1_3_,bVar1);
    local_1c = CONCAT22((short)(1 << (bVar1 & 0x1f)) + -1,(undefined2)local_1c);
    thunk_FUN_101278f0(local_1c);
  }
  local_15 = 0xff;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&local_15,1);
  local_15 = 0xd9;
  (**(code **)(**(int **)(in_ECX + 0xc) + 4))(&local_15,1);
  (**(code **)(*(int *)GMalloc + 8))(*(undefined4 *)(in_ECX + 0x2e84));
  *(undefined4 *)(in_ECX + 0x2e84) = 0;
  (**(code **)(*(int *)GMalloc + 8))(*(undefined4 *)(in_ECX + 0x874));
  *(undefined4 *)(in_ECX + 0x874) = 0;
  (**(code **)(*(int *)GMalloc + 8))(*(undefined4 *)(in_ECX + 0x87c));
  *(undefined4 *)(in_ECX + 0x87c) = 0;
  ExceptionList = local_10;
  return;
}


// ==== 10128078 Catch@10128078

void Catch_10128078(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 1012808c Catch@1012808c

void Catch_1012808c(void)

{
  appUnwindf((ushort *)&DAT_101cfd20,L"L2JpegEncoder::CreateJpeg");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10128110 FUN_10128110

void FUN_10128110(undefined4 param_1)

{
  FArray *in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = param_1;
  FArray::Realloc(in_ECX,4);
  return;
}


// ==== 10128140 FUN_10128140

undefined4 FUN_10128140(void)

{
  undefined4 uVar1;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x14))();
  uVar1 = *(undefined4 *)in_ECX[0x26];
  if (in_ECX[0x27] < 0) {
    appFailAssert("Index<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x204);
  }
  if (in_ECX[0x27] < 1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  FArray::Remove((FArray *)(in_ECX + 0x26),0,1,4);
  (**(code **)(*in_ECX + 0x18))();
  return uVar1;
}


// ==== 101281e0 FUN_101281e0

void FUN_101281e0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  return;
}


// ==== 10128230 FUN_10128230

int FUN_10128230(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  param_1 = iVar1 + param_1;
  *(int *)(in_ECX + 4) = param_1;
  if (*(int *)(in_ECX + 8) < param_1) {
    *(int *)(in_ECX + 8) = ((int)(param_1 * 3 + (param_1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + param_1;
    FArray::Realloc(in_ECX,4);
  }
  return iVar1;
}


// ==== 10128280 FUN_10128280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10128280(void)

{
  UObject *this;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9370;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (iVar1 = 0; iVar1 < DAT_103308ec; iVar1 = iVar1 + 1) {
    this = *(UObject **)(_GObjObjectsBuffer + iVar1 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    UObject::AddObject(this,-1);
  }
  thunk_FUN_10128110(0);
  UObject::DeleteAllHashObjectBuffer();
  ExceptionList = local_10;
  return;
}


// ==== 101282f2 Catch@101282f2

void Catch_101282f2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10128306 Catch@10128306

void Catch_10128306(void)

{
  appUnwindf((ushort *)&DAT_101cfe78,L"UObject::FinishThreadLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10128350 FUN_10128350

void FUN_10128350(int *param_1)

{
  UObject *this;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9380;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  do {
    while (param_1[0x27] < 1) {
      (**(code **)(*param_1 + 8))();
    }
    this = (UObject *)thunk_FUN_10128140();
    if ((*(uint *)(this + 0x1c) & 0x200) != 0) {
      if (*(int *)(this + 0x10) == 0) {
        appFailAssert("Object->GetLinker()",".\\L2ThreadFunc.cpp",0x39);
      }
      (**(code **)(*(int *)(*(int *)(this + 0x10) + 0xc0) + 0x10))(this);
      UObject::ConditionalPostLoad(this);
      UObject::DissociateImports();
    }
    appSleep(0.0);
  } while( true );
}


// ==== 101283eb Catch@101283eb

void Catch_101283eb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 101283ff Catch@101283ff

void Catch_101283ff(void)

{
  appUnwindf((ushort *)&DAT_101cfea8,L"RunStaticLoad");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10128450 FUN_10128450

void FUN_10128450(undefined4 param_1,ushort *param_2)

{
  FCriticalSection *this;
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101b93cf;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = L2ThreadBase::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[4] = 0;
  appStrncpy((ushort *)(in_ECX + 5),param_2,0x40);
  in_ECX[0x25] = 0;
  *in_ECX = L2Thread<UObject*,UObject*>::vftable;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  local_4 = 4;
  in_ECX[0x2d] = param_1;
  in_ECX[0x2c] = 0;
  this = (FCriticalSection *)(*(code *)**(undefined4 **)GMalloc)(4,&DAT_101cd5d8);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,5);
  if (this == (FCriticalSection *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FCriticalSection::FCriticalSection(this);
  }
  in_ECX[0x25] = uVar1;
  ExceptionList = unaff_ESI;
  return;
}


// ==== 10128570 FUN_10128570

void FUN_10128570(void)

{
  HANDLE pvVar1;
  LPVOID in_ECX;
  FOutputDevice *this;
  
  if ((*(int *)((int)in_ECX + 4) == 0) && (*(int *)((int)in_ECX + 8) == 0)) {
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,
                          *(LPTHREAD_START_ROUTINE *)((int)in_ECX + 0xb4),in_ECX,0,
                          (LPDWORD)((int)in_ECX + 4));
    *(HANDLE *)((int)in_ECX + 8) = pvVar1;
    if (pvVar1 == (HANDLE)0x0) {
      appFailAssert("Handle","..\\Inc\\L2Thread.h",0x29);
    }
    pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    *(HANDLE *)((int)in_ECX + 0xc) = pvVar1;
    if (GLog != (undefined *)0x0) {
      FOutputDevice::Logf2(this,(ushort *)GLog);
    }
  }
  return;
}


// ==== 10128600 FUN_10128600

void FUN_10128600(void)

{
  int in_ECX;
  
  appSleep(0.0);
  WaitForSingleObject(*(HANDLE *)(in_ECX + 0xc),0xffffffff);
  return;
}


// ==== 10128630 FUN_10128630

void FUN_10128630(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) != 0) && (*(int *)(in_ECX + 8) != 0)) {
    SetEvent(*(HANDLE *)(in_ECX + 0xc));
  }
  return;
}


// ==== 10128650 FUN_10128650

void FUN_10128650(void)

{
  int in_ECX;
  
  FCriticalSection::Lock(*(FCriticalSection **)(in_ECX + 0x94));
  return;
}


// ==== 10128660 FUN_10128660

void FUN_10128660(void)

{
  int in_ECX;
  
  FCriticalSection::Unlock(*(FCriticalSection **)(in_ECX + 0x94));
  return;
}


// ==== 10128670 FUN_10128670

void FUN_10128670(int param_1)

{
  int in_ECX;
  
  if (param_1 == 0) {
    SetThreadPriority(*(HANDLE *)(in_ECX + 8),0);
    return;
  }
  if (param_1 == -1) {
    SetThreadPriority(*(HANDLE *)(in_ECX + 8),-2);
    return;
  }
  if (param_1 == 1) {
    SetThreadPriority(*(HANDLE *)(in_ECX + 8),2);
  }
  return;
}


// ==== 101286c0 FUN_101286c0

undefined4 FUN_101286c0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 8);
}


// ==== 101286d0 FUN_101286d0

undefined4 FUN_101286d0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xc);
}


// ==== 101286e0 FUN_101286e0

void FUN_101286e0(byte param_1)

{
  FCriticalSection *in_ECX;
  
  FCriticalSection::~FCriticalSection(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  return;
}


// ==== 10128710 FUN_10128710

void FUN_10128710(void)

{
  FCriticalSection *this;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) != 0) && (*(HANDLE *)(in_ECX + 8) != (HANDLE)0x0)) {
    TerminateThread(*(HANDLE *)(in_ECX + 8),0xc);
    if (GLog != (undefined *)0x0) {
      FOutputDevice::Logf2((FOutputDevice *)(in_ECX + 0x14),(ushort *)GLog);
    }
    this = *(FCriticalSection **)(in_ECX + 0x94);
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    if (this != (FCriticalSection *)0x0) {
      FCriticalSection::~FCriticalSection(this);
      (**(code **)(*(int *)GMalloc + 8))(this);
    }
    *(undefined4 *)(in_ECX + 0x94) = 0;
  }
  return;
}


// ==== 101287a0 FUN_101287a0

int FUN_101287a0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  FArray *in_ECX;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar1 = iVar2 + 1;
  *(int *)(in_ECX + 4) = iVar1;
  if (*(int *)(in_ECX + 8) < iVar1) {
    *(int *)(in_ECX + 8) = ((int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar1;
    FArray::Realloc(in_ECX,4);
  }
  *(undefined4 *)(*(int *)in_ECX + iVar2 * 4) = *param_1;
  return iVar2;
}


// ==== 101287f0 FUN_101287f0

void FUN_101287f0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101b9414;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = L2Thread<UObject*,UObject*>::vftable;
  local_4 = 2;
  thunk_FUN_10128710();
  local_4._0_1_ = 1;
  thunk_FUN_10118970();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10118970();
  *in_ECX = L2ThreadBase::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 10128880 FUN_10128880

void FUN_10128880(byte param_1)

{
  thunk_FUN_101287f0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*(int *)GMalloc + 8))();
  }
  return;
}


// ==== 101288b0 FUN_101288b0

int FUN_101288b0(int *param_1)

{
  int iVar1;
  int iVar2;
  FArray *in_ECX;
  int *piVar3;
  
  iVar1 = *(int *)(in_ECX + 4);
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = *(int **)in_ECX;
    do {
      if (*piVar3 == *param_1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = iVar1 + 1;
  *(int *)(in_ECX + 4) = iVar2;
  if (*(int *)(in_ECX + 8) < iVar2) {
    *(int *)(in_ECX + 8) = ((int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 7U)) >> 3) + 0x20 + iVar2;
    FArray::Realloc(in_ECX,4);
  }
  *(int *)(*(int *)in_ECX + iVar1 * 4) = *param_1;
  return iVar1;
}


// ==== 10128920 FUN_10128920

void FUN_10128920(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x14))();
  thunk_FUN_101288b0(&stack0x00000004);
  (**(code **)(*in_ECX + 0x18))();
  return;
}


// ==== 10128950 FUN_10128950

void FUN_10128950(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101b943b;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (DAT_1027a78c == (L2ThreadBase *)0x0) {
    ExceptionList = &local_10;
    iVar1 = thunk_FUN_101088a0(0xb8);
    local_8._0_1_ = 1;
    if (iVar1 == 0) {
      DAT_1027a78c = (L2ThreadBase *)0x0;
    }
    else {
      DAT_1027a78c = (L2ThreadBase *)thunk_FUN_10128450(FUN_10128350,L"StaticLoad Thread");
    }
    local_8 = (uint)local_8._1_3_ << 8;
    (**(code **)(*(int *)DAT_1027a78c + 4))();
    (**(code **)(*(int *)DAT_1027a78c + 0x1c))(1);
    L2ThreadUtil::AddThread(&GThreadUtil,3,DAT_1027a78c);
  }
  thunk_FUN_10128920(*(undefined4 *)(in_ECX + 4));
  (**(code **)(*(int *)DAT_1027a78c + 0xc))();
  ExceptionList = local_10;
  return;
}


// ==== 10128a18 Catch@10128a18

void Catch_10128a18(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10128a2c Catch@10128a2c

void Catch_10128a2c(void)

{
  appUnwindf((ushort *)&DAT_101cfed4,L"L2StaticLoadThread::Queueing");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10128a90 FUN_10128a90

undefined4 FUN_10128a90(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  FScopeCriticalSection local_1c [4];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101b9458;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  ExceptionList = &local_10;
  FScopeCriticalSection::FScopeCriticalSection(local_1c,L2ThreadUtil::ThreadUtilCS);
  local_8._0_1_ = 1;
  for (iVar2 = 0; local_18 = iVar2, iVar2 < *(int *)(in_ECX + 0x2c4); iVar2 = iVar2 + 1) {
    if (*(int *)(in_ECX + 4 + iVar2 * 4) != 0) {
      puVar1 = *(undefined4 **)(in_ECX + 4 + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(in_ECX + 4 + iVar2 * 4) = 0;
    }
  }
  *(undefined4 *)(in_ECX + 0x2c4) = 0;
  local_8 = (uint)local_8._1_3_ << 8;
  FScopeCriticalSection::~FScopeCriticalSection(local_1c);
  ExceptionList = local_10;
  return 0;
}


// ==== 10128b1a Catch@10128b1a

void Catch_10128b1a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x1c,&DAT_101f843c);
}


// ==== 10128b2e Catch@10128b2e

void Catch_10128b2e(void)

{
  appUnwindf((ushort *)&DAT_101d0060,L"L2ThreadUtil::KillAllThread");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10128b80 FUN_10128b80

undefined4 FUN_10128b80(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4 + param_1 * 4) != 0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 4 + param_1 * 4) + 0x2c))();
    return uVar1;
  }
  return 0;
}


// ==== 10128bb0 FUN_10128bb0

undefined4 FUN_10128bb0(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4 + param_1 * 4) != 0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 4 + param_1 * 4) + 0x28))();
    return uVar1;
  }
  return 0xffffffff;
}


// ==== 10128be0 KERNEL32.DLL::GetCurrentThreadId thunk -> EXTERNAL:00000014

// ==== 10128bf0 FUN_10128bf0

bool FUN_10128bf0(int param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  int in_ECX;
  
  DVar1 = GetCurrentThreadId();
  if (*(int *)(in_ECX + 4 + param_1 * 4) != 0) {
    DVar2 = (**(code **)(**(int **)(in_ECX + 4 + param_1 * 4) + 0x28))();
    return DVar1 == DVar2;
  }
  return DVar1 == 0xffffffff;
}


// ==== 10128c50 FUN_10128c50

int FUN_10128c50(int param_1)

{
  int in_ECX;
  
  return param_1 * 0x54 + 0x24 + in_ECX;
}


// ==== 10128c70 FUN_10128c70

void FUN_10128c70(DWORD_PTR param_1)

{
  HANDLE hThread;
  FOutputDevice *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b9470;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  hThread = GetCurrentThread();
  SetThreadAffinityMask(hThread,param_1);
  if (GLog != (undefined *)0x0) {
    FOutputDevice::Logf2(this,(ushort *)GLog);
  }
  ExceptionList = local_10;
  return;
}


// ==== 10128cdb Catch@10128cdb

void Catch_10128cdb(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10128cef Catch@10128cef

void Catch_10128cef(void)

{
  appUnwindf((ushort *)&DAT_101d0100,L"L2ThreadUtil::SetThreadAffinityMask");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10128d40 FUN_10128d40

void FUN_10128d40(void)

{
  return;
}


// ==== 10128d82 Catch@10128d82

void Catch_10128d82(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


// ==== 10128d96 Catch@10128d96

void Catch_10128d96(void)

{
  appUnwindf((ushort *)&DAT_101d0108,L"L2ThreadUtil::ConditionalThreadAffinityMask");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10128dd0 FUN_10128dd0

void FUN_10128dd0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[0x14] = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  return;
}


// ==== 10128e30 FUN_10128e30

void FUN_10128e30(void)

{
  __uint64 *in_ECX;
  __uint64 _Var1;
  
  _Var1 = appCyclesQPC();
  *in_ECX = _Var1;
  return;
}


// ==== 10128e50 FUN_10128e50

void FUN_10128e50(void)

{
  int in_ECX;
  __uint64 _Var1;
  
  _Var1 = appCyclesQPC();
  *(__uint64 *)(in_ECX + 0x20) = _Var1;
  return;
}


// ==== 10128e70 FUN_10128e70

void FUN_10128e70(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  double dVar4;
  
  puVar1 = (uint *)(in_ECX + 0x18);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + *(uint *)(in_ECX + 8);
  *(int *)(in_ECX + 0x1c) =
       *(int *)(in_ECX + 0x1c) + *(int *)(in_ECX + 0xc) + (uint)CARRY4(uVar2,*(uint *)(in_ECX + 8));
  puVar1 = (uint *)(in_ECX + 0x38);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + *(uint *)(in_ECX + 0x28);
  *(int *)(in_ECX + 0x3c) =
       *(int *)(in_ECX + 0x3c) + *(int *)(in_ECX + 0x2c) +
       (uint)CARRY4(uVar2,*(uint *)(in_ECX + 0x28));
  dVar4 = appSecondsQPC();
  if (10.0 < (float)dVar4 - *(float *)(in_ECX + 0x50)) {
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)(in_ECX + 0x14) = 0;
    *(undefined4 *)(in_ECX + 0x30) = 0;
    *(undefined4 *)(in_ECX + 0x34) = 0;
    *(undefined4 *)(in_ECX + 0x44) = 0;
    *(undefined4 *)(in_ECX + 0x4c) = 0;
  }
  iVar3 = *(int *)(in_ECX + 0xc);
  if ((*(int *)(in_ECX + 0x14) <= iVar3) &&
     ((*(int *)(in_ECX + 0x14) < iVar3 || (*(uint *)(in_ECX + 0x10) < *(uint *)(in_ECX + 8))))) {
    *(uint *)(in_ECX + 0x10) = *(uint *)(in_ECX + 8);
    *(int *)(in_ECX + 0x14) = iVar3;
    dVar4 = appSecondsQPC();
    *(float *)(in_ECX + 0x50) = (float)dVar4;
  }
  iVar3 = *(int *)(in_ECX + 0x2c);
  if ((*(int *)(in_ECX + 0x34) <= iVar3) &&
     ((*(int *)(in_ECX + 0x34) < iVar3 || (*(uint *)(in_ECX + 0x30) < *(uint *)(in_ECX + 0x28))))) {
    *(uint *)(in_ECX + 0x30) = *(uint *)(in_ECX + 0x28);
    *(int *)(in_ECX + 0x34) = iVar3;
    dVar4 = appSecondsQPC();
    *(float *)(in_ECX + 0x50) = (float)dVar4;
  }
  if (*(uint *)(in_ECX + 0x44) < *(uint *)(in_ECX + 0x40)) {
    *(uint *)(in_ECX + 0x44) = *(uint *)(in_ECX + 0x40);
    dVar4 = appSecondsQPC();
    *(float *)(in_ECX + 0x50) = (float)dVar4;
  }
  if (*(uint *)(in_ECX + 0x4c) < *(uint *)(in_ECX + 0x48)) {
    *(uint *)(in_ECX + 0x4c) = *(uint *)(in_ECX + 0x48);
    dVar4 = appSecondsQPC();
    *(float *)(in_ECX + 0x50) = (float)dVar4;
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  return;
}


// ==== 10129000 FUN_10129000

void FUN_10129000(void)

{
  undefined4 *in_ECX;
  int iVar1;
  
  *in_ECX = L2ThreadUtil::vftable;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x43] = 0;
  in_ECX[0x44] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0;
  in_ECX[0x45] = 0;
  in_ECX[0x46] = 0;
  in_ECX[0x47] = 0;
  in_ECX[0x48] = 0;
  in_ECX[0x49] = 0;
  in_ECX[0x4a] = 0;
  in_ECX[0x4b] = 0;
  in_ECX[0x4c] = 0;
  in_ECX[0x4d] = 0;
  in_ECX[0x4e] = 0;
  in_ECX[0x4f] = 0;
  in_ECX[0x58] = 0;
  in_ECX[0x59] = 0;
  in_ECX[0x50] = 0;
  in_ECX[0x51] = 0;
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  in_ECX[0x54] = 0;
  in_ECX[0x55] = 0;
  in_ECX[0x56] = 0;
  in_ECX[0x57] = 0;
  in_ECX[0x5a] = 0;
  in_ECX[0x5b] = 0;
  in_ECX[0x5c] = 0;
  in_ECX[0x5d] = 0;
  in_ECX[0x5e] = 0;
  in_ECX[0x5f] = 0;
  in_ECX[0x60] = 0;
  in_ECX[0x61] = 0;
  in_ECX[0x62] = 0;
  in_ECX[99] = 0;
  in_ECX[100] = 0;
  in_ECX[0x6d] = 0;
  in_ECX[0x6e] = 0;
  in_ECX[0x65] = 0;
  in_ECX[0x66] = 0;
  in_ECX[0x67] = 0;
  in_ECX[0x68] = 0;
  in_ECX[0x69] = 0;
  in_ECX[0x6a] = 0;
  in_ECX[0x6b] = 0;
  in_ECX[0x6c] = 0;
  in_ECX[0x6f] = 0;
  in_ECX[0x70] = 0;
  in_ECX[0x71] = 0;
  in_ECX[0x72] = 0;
  in_ECX[0x73] = 0;
  in_ECX[0x74] = 0;
  in_ECX[0x75] = 0;
  in_ECX[0x76] = 0;
  in_ECX[0x77] = 0;
  in_ECX[0x78] = 0;
  in_ECX[0x79] = 0;
  in_ECX[0x82] = 0;
  in_ECX[0x83] = 0;
  in_ECX[0x7a] = 0;
  in_ECX[0x7b] = 0;
  in_ECX[0x7c] = 0;
  in_ECX[0x7d] = 0;
  in_ECX[0x7e] = 0;
  in_ECX[0x7f] = 0;
  in_ECX[0x80] = 0;
  in_ECX[0x81] = 0;
  in_ECX[0x84] = 0;
  in_ECX[0x85] = 0;
  in_ECX[0x86] = 0;
  in_ECX[0x87] = 0;
  in_ECX[0x88] = 0;
  in_ECX[0x89] = 0;
  in_ECX[0x8a] = 0;
  in_ECX[0x8b] = 0;
  in_ECX[0x8c] = 0;
  in_ECX[0x8d] = 0;
  in_ECX[0x8e] = 0;
  in_ECX[0x97] = 0;
  in_ECX[0x98] = 0;
  in_ECX[0x8f] = 0;
  in_ECX[0x90] = 0;
  in_ECX[0x91] = 0;
  in_ECX[0x92] = 0;
  in_ECX[0x93] = 0;
  in_ECX[0x94] = 0;
  in_ECX[0x95] = 0;
  in_ECX[0x96] = 0;
  in_ECX[0x99] = 0;
  in_ECX[0x9a] = 0;
  in_ECX[0x9b] = 0;
  in_ECX[0x9c] = 0;
  in_ECX[0x9d] = 0;
  in_ECX[0x9e] = 0;
  in_ECX[0x9f] = 0;
  in_ECX[0xa0] = 0;
  in_ECX[0xa1] = 0;
  in_ECX[0xa2] = 0;
  in_ECX[0xa3] = 0;
  in_ECX[0xac] = 0;
  in_ECX[0xad] = 0;
  in_ECX[0xa4] = 0;
  in_ECX[0xa5] = 0;
  in_ECX[0xa6] = 0;
  in_ECX[0xa7] = 0;
  in_ECX[0xa8] = 0;
  in_ECX[0xa9] = 0;
  in_ECX[0xaa] = 0;
  in_ECX[0xab] = 0;
  in_ECX[0xae] = 0;
  in_ECX[0xaf] = 0;
  in_ECX[0xb0] = 0;
  in_ECX[0xb1] = 0;
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    in_ECX[iVar1 + 1] = 0;
  }
  return;
}


// ==== 1012940c Catch@1012940c

void Catch_1012940c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_101f843c);
}


// ==== 10129420 Catch@10129420

void Catch_10129420(void)

{
  appUnwindf((ushort *)&DAT_101d0048,L"L2ThreadUtil::L2ThreadUtil");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10129550 FUN_10129550

void FUN_10129550(void)

{
  FCriticalSection *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101b94ab;
  local_10 = ExceptionList;
  local_8 = 0;
  if (L2ThreadUtil::ThreadUtilCS == (FCriticalSection *)0x0) {
    ExceptionList = &local_10;
    this = (FCriticalSection *)thunk_FUN_101088a0(4);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (this == (FCriticalSection *)0x0) {
      L2ThreadUtil::ThreadUtilCS = (FCriticalSection *)0x0;
    }
    else {
      L2ThreadUtil::ThreadUtilCS = (FCriticalSection *)FCriticalSection::FCriticalSection(this);
    }
  }
  ExceptionList = local_10;
  return;
}


// ==== 101295c2 Catch@101295c2

void Catch_101295c2(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_101f843c);
}


