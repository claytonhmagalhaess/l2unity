// ==== 103e48f0 FUN_103e48f0

void FUN_103e48f0(byte param_1)

{
  AKTire *in_ECX;
  
  AKTire::~AKTire(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x45c);
  }
  return;
}


// ==== 103e4920 FUN_103e4920

AKTire * FUN_103e4920(byte param_1)

{
  AKTire *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x45c,*(int *)(in_ECX + -4),AKTire::~AKTire);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  AKTire::~AKTire(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x45c);
  }
  return in_ECX;
}


// ==== 103e49a0 FUN_103e49a0

void FUN_103e49a0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108084d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = AKConstraint::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  AKActor::~AKActor((AKActor *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103e4a10 FUN_103e4a10

void FUN_103e4a10(void)

{
  AKActor *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108084f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AKActor::AKActor(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = AKConstraint::vftable;
  FName::FName((FName *)(in_ECX + 0x3ec));
  FName::FName((FName *)(in_ECX + 0x3f0));
  ExceptionList = local_c;
  return;
}


// ==== 103e4a90 FUN_103e4a90

void FUN_103e4a90(AKActor *param_1)

{
  AKActor *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808518;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AKActor::AKActor(in_ECX,param_1);
  *(undefined ***)in_ECX = AKConstraint::vftable;
  *(undefined4 *)(in_ECX + 0x3e0) = *(undefined4 *)(param_1 + 0x3e0);
  *(undefined4 *)(in_ECX + 0x3e4) = *(undefined4 *)(param_1 + 0x3e4);
  *(undefined4 *)(in_ECX + 1000) = *(undefined4 *)(param_1 + 1000);
  *(undefined4 *)(in_ECX + 0x3ec) = *(undefined4 *)(param_1 + 0x3ec);
  *(undefined4 *)(in_ECX + 0x3f0) = *(undefined4 *)(param_1 + 0x3f0);
  *(uint *)(in_ECX + 0x3f4) =
       *(uint *)(in_ECX + 0x3f4) ^ (*(uint *)(param_1 + 0x3f4) ^ *(uint *)(in_ECX + 0x3f4)) & 1;
  *(undefined4 *)(in_ECX + 0x3f8) = *(undefined4 *)(param_1 + 0x3f8);
  *(undefined4 *)(in_ECX + 0x3fc) = *(undefined4 *)(param_1 + 0x3fc);
  *(undefined4 *)(in_ECX + 0x400) = *(undefined4 *)(param_1 + 0x400);
  *(undefined4 *)(in_ECX + 0x404) = *(undefined4 *)(param_1 + 0x404);
  *(undefined4 *)(in_ECX + 0x408) = *(undefined4 *)(param_1 + 0x408);
  *(undefined4 *)(in_ECX + 0x40c) = *(undefined4 *)(param_1 + 0x40c);
  *(undefined4 *)(in_ECX + 0x410) = *(undefined4 *)(param_1 + 0x410);
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
  *(uint *)(in_ECX + 0x440) =
       *(uint *)(in_ECX + 0x440) ^ (*(uint *)(param_1 + 0x440) ^ *(uint *)(in_ECX + 0x440)) & 1;
  *(undefined4 *)(in_ECX + 0x444) = *(undefined4 *)(param_1 + 0x444);
  ExceptionList = local_c;
  return;
}


// ==== 103e4ca0 FUN_103e4ca0

void FUN_103e4ca0(AKActor *param_1)

{
  AKActor *in_ECX;
  
  AKActor::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x3e0) = *(undefined4 *)(param_1 + 0x3e0);
  *(undefined4 *)(in_ECX + 0x3e4) = *(undefined4 *)(param_1 + 0x3e4);
  *(undefined4 *)(in_ECX + 1000) = *(undefined4 *)(param_1 + 1000);
  *(undefined4 *)(in_ECX + 0x3ec) = *(undefined4 *)(param_1 + 0x3ec);
  *(undefined4 *)(in_ECX + 0x3f0) = *(undefined4 *)(param_1 + 0x3f0);
  *(uint *)(in_ECX + 0x3f4) =
       *(uint *)(in_ECX + 0x3f4) ^ (*(uint *)(param_1 + 0x3f4) ^ *(uint *)(in_ECX + 0x3f4)) & 1;
  *(undefined4 *)(in_ECX + 0x3f8) = *(undefined4 *)(param_1 + 0x3f8);
  *(undefined4 *)(in_ECX + 0x3fc) = *(undefined4 *)(param_1 + 0x3fc);
  *(undefined4 *)(in_ECX + 0x400) = *(undefined4 *)(param_1 + 0x400);
  *(undefined4 *)(in_ECX + 0x404) = *(undefined4 *)(param_1 + 0x404);
  *(undefined4 *)(in_ECX + 0x408) = *(undefined4 *)(param_1 + 0x408);
  *(undefined4 *)(in_ECX + 0x40c) = *(undefined4 *)(param_1 + 0x40c);
  *(undefined4 *)(in_ECX + 0x410) = *(undefined4 *)(param_1 + 0x410);
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
  *(uint *)(in_ECX + 0x440) =
       *(uint *)(in_ECX + 0x440) ^ (*(uint *)(param_1 + 0x440) ^ *(uint *)(in_ECX + 0x440)) & 1;
  *(undefined4 *)(in_ECX + 0x444) = *(undefined4 *)(param_1 + 0x444);
  return;
}


// ==== 103e4e60 FUN_103e4e60

void FUN_103e4e60(byte param_1)

{
  AKConstraint *in_ECX;
  
  AKConstraint::~AKConstraint(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x448);
  }
  return;
}


// ==== 103e4e90 FUN_103e4e90

AKConstraint * FUN_103e4e90(byte param_1)

{
  AKConstraint *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x448,*(int *)(in_ECX + -4),AKConstraint::~AKConstraint);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  AKConstraint::~AKConstraint(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x448);
  }
  return in_ECX;
}


// ==== 103e4f10 FUN_103e4f10

void FUN_103e4f10(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10808538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = AKCarWheelJoint::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  AKConstraint::~AKConstraint((AKConstraint *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103e4f80 FUN_103e4f80

void FUN_103e4f80(void)

{
  AKConstraint *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AKConstraint::AKConstraint(in_ECX);
  *(undefined ***)in_ECX = AKCarWheelJoint::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103e4fe0 FUN_103e4fe0

void FUN_103e4fe0(AKConstraint *param_1)

{
  AKConstraint *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AKConstraint::AKConstraint(in_ECX,param_1);
  *(undefined ***)in_ECX = AKCarWheelJoint::vftable;
  *(undefined4 *)(in_ECX + 0x448) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)(in_ECX + 0x44c) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)(in_ECX + 0x450) = *(undefined4 *)(param_1 + 0x450);
  *(undefined4 *)(in_ECX + 0x454) = *(undefined4 *)(param_1 + 0x454);
  *(uint *)(in_ECX + 0x458) =
       *(uint *)(in_ECX + 0x458) ^ (*(uint *)(param_1 + 0x458) ^ *(uint *)(in_ECX + 0x458)) & 1;
  *(undefined4 *)(in_ECX + 0x45c) = *(undefined4 *)(param_1 + 0x45c);
  *(undefined4 *)(in_ECX + 0x460) = *(undefined4 *)(param_1 + 0x460);
  *(undefined4 *)(in_ECX + 0x464) = *(undefined4 *)(param_1 + 0x464);
  *(undefined4 *)(in_ECX + 0x468) = *(undefined4 *)(param_1 + 0x468);
  *(undefined4 *)(in_ECX + 0x46c) = *(undefined4 *)(param_1 + 0x46c);
  *(undefined4 *)(in_ECX + 0x470) = *(undefined4 *)(param_1 + 0x470);
  *(undefined4 *)(in_ECX + 0x474) = *(undefined4 *)(param_1 + 0x474);
  *(undefined4 *)(in_ECX + 0x478) = *(undefined4 *)(param_1 + 0x478);
  *(undefined4 *)(in_ECX + 0x47c) = *(undefined4 *)(param_1 + 0x47c);
  ExceptionList = local_c;
  return;
}


// ==== 103e5130 FUN_103e5130

void FUN_103e5130(AKConstraint *param_1)

{
  AKConstraint *in_ECX;
  
  AKConstraint::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x448) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)(in_ECX + 0x44c) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)(in_ECX + 0x450) = *(undefined4 *)(param_1 + 0x450);
  *(undefined4 *)(in_ECX + 0x454) = *(undefined4 *)(param_1 + 0x454);
  *(uint *)(in_ECX + 0x458) =
       *(uint *)(in_ECX + 0x458) ^ (*(uint *)(param_1 + 0x458) ^ *(uint *)(in_ECX + 0x458)) & 1;
  *(undefined4 *)(in_ECX + 0x45c) = *(undefined4 *)(param_1 + 0x45c);
  *(undefined4 *)(in_ECX + 0x460) = *(undefined4 *)(param_1 + 0x460);
  *(undefined4 *)(in_ECX + 0x464) = *(undefined4 *)(param_1 + 0x464);
  *(undefined4 *)(in_ECX + 0x468) = *(undefined4 *)(param_1 + 0x468);
  *(undefined4 *)(in_ECX + 0x46c) = *(undefined4 *)(param_1 + 0x46c);
  *(undefined4 *)(in_ECX + 0x470) = *(undefined4 *)(param_1 + 0x470);
  *(undefined4 *)(in_ECX + 0x474) = *(undefined4 *)(param_1 + 0x474);
  *(undefined4 *)(in_ECX + 0x478) = *(undefined4 *)(param_1 + 0x478);
  *(undefined4 *)(in_ECX + 0x47c) = *(undefined4 *)(param_1 + 0x47c);
  return;
}


// ==== 103e5230 FUN_103e5230

void FUN_103e5230(byte param_1)

{
  AKCarWheelJoint *in_ECX;
  
  AKCarWheelJoint::~AKCarWheelJoint(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x480);
  }
  return;
}


// ==== 103e5260 FUN_103e5260

AKCarWheelJoint * FUN_103e5260(byte param_1)

{
  AKCarWheelJoint *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x480,*(int *)(in_ECX + -4),AKCarWheelJoint::~AKCarWheelJoint);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  AKCarWheelJoint::~AKCarWheelJoint(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x480);
  }
  return in_ECX;
}


// ==== 103e52e0 FUN_103e52e0

void FUN_103e52e0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10808598;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = AKConeLimit::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  AKConstraint::~AKConstraint((AKConstraint *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103e5350 FUN_103e5350

void FUN_103e5350(void)

{
  AKConstraint *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108085b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AKConstraint::AKConstraint(in_ECX);
  *(undefined ***)in_ECX = AKConeLimit::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103e53b0 FUN_103e53b0

void FUN_103e53b0(AKConstraint *param_1)

{
  AKConstraint *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108085d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AKConstraint::AKConstraint(in_ECX,param_1);
  *(undefined ***)in_ECX = AKConeLimit::vftable;
  *(undefined4 *)(in_ECX + 0x448) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)(in_ECX + 0x44c) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)(in_ECX + 0x450) = *(undefined4 *)(param_1 + 0x450);
  ExceptionList = local_c;
  return;
}


// ==== 103e5450 FUN_103e5450

void FUN_103e5450(AKConstraint *param_1)

{
  AKConstraint *in_ECX;
  
  AKConstraint::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x448) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)(in_ECX + 0x44c) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)(in_ECX + 0x450) = *(undefined4 *)(param_1 + 0x450);
  return;
}


// ==== 103e54a0 FUN_103e54a0

void FUN_103e54a0(byte param_1)

{
  AKConeLimit *in_ECX;
  
  AKConeLimit::~AKConeLimit(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x454);
  }
  return;
}


// ==== 103e54d0 FUN_103e54d0

AKConeLimit * FUN_103e54d0(byte param_1)

{
  AKConeLimit *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x454,*(int *)(in_ECX + -4),AKConeLimit::~AKConeLimit);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  AKConeLimit::~AKConeLimit(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x454);
  }
  return in_ECX;
}


// ==== 103e5550 FUN_103e5550

void FUN_103e5550(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108085f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = AKHinge::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  AKConstraint::~AKConstraint((AKConstraint *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103e55c0 FUN_103e55c0

void FUN_103e55c0(void)

{
  AKConstraint *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AKConstraint::AKConstraint(in_ECX);
  *(undefined ***)in_ECX = AKHinge::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103e5620 FUN_103e5620

void FUN_103e5620(AKConstraint *param_1)

{
  AKConstraint *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808638;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AKConstraint::AKConstraint(in_ECX,param_1);
  *(undefined ***)in_ECX = AKHinge::vftable;
  in_ECX[0x448] = param_1[0x448];
  *(undefined4 *)(in_ECX + 0x44c) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)(in_ECX + 0x450) = *(undefined4 *)(param_1 + 0x450);
  *(undefined4 *)(in_ECX + 0x454) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(in_ECX + 0x458) = *(undefined4 *)(param_1 + 0x458);
  *(undefined4 *)(in_ECX + 0x45c) = *(undefined4 *)(param_1 + 0x45c);
  *(undefined4 *)(in_ECX + 0x460) = *(undefined4 *)(param_1 + 0x460);
  *(undefined4 *)(in_ECX + 0x464) = *(undefined4 *)(param_1 + 0x464);
  *(uint *)(in_ECX + 0x468) =
       *(uint *)(in_ECX + 0x468) ^ (*(uint *)(param_1 + 0x468) ^ *(uint *)(in_ECX + 0x468)) & 1;
  *(undefined4 *)(in_ECX + 0x46c) = *(undefined4 *)(param_1 + 0x46c);
  ExceptionList = local_c;
  return;
}


// ==== 103e5730 FUN_103e5730

void FUN_103e5730(AKConstraint *param_1)

{
  AKConstraint *in_ECX;
  
  AKConstraint::operator=(in_ECX,param_1);
  in_ECX[0x448] = param_1[0x448];
  *(undefined4 *)(in_ECX + 0x44c) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)(in_ECX + 0x450) = *(undefined4 *)(param_1 + 0x450);
  *(undefined4 *)(in_ECX + 0x454) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(in_ECX + 0x458) = *(undefined4 *)(param_1 + 0x458);
  *(undefined4 *)(in_ECX + 0x45c) = *(undefined4 *)(param_1 + 0x45c);
  *(undefined4 *)(in_ECX + 0x460) = *(undefined4 *)(param_1 + 0x460);
  *(undefined4 *)(in_ECX + 0x464) = *(undefined4 *)(param_1 + 0x464);
  *(uint *)(in_ECX + 0x468) =
       *(uint *)(in_ECX + 0x468) ^ (*(uint *)(param_1 + 0x468) ^ *(uint *)(in_ECX + 0x468)) & 1;
  *(undefined4 *)(in_ECX + 0x46c) = *(undefined4 *)(param_1 + 0x46c);
  return;
}


// ==== 103e57f0 FUN_103e57f0

void FUN_103e57f0(byte param_1)

{
  AKHinge *in_ECX;
  
  AKHinge::~AKHinge(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x470);
  }
  return;
}


// ==== 103e5820 FUN_103e5820

AKHinge * FUN_103e5820(byte param_1)

{
  AKHinge *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x470,*(int *)(in_ECX + -4),AKHinge::~AKHinge);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  AKHinge::~AKHinge(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x470);
  }
  return in_ECX;
}


// ==== 103e58a0 FUN_103e58a0

void FUN_103e58a0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10808658;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = AKBSJoint::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  AKConstraint::~AKConstraint((AKConstraint *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103e5910 FUN_103e5910

void FUN_103e5910(void)

{
  AKConstraint *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808678;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AKConstraint::AKConstraint(in_ECX);
  *(undefined ***)in_ECX = AKBSJoint::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103e5970 FUN_103e5970

void FUN_103e5970(AKConstraint *param_1)

{
  AKConstraint *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808698;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AKConstraint::AKConstraint(in_ECX,param_1);
  *(undefined ***)in_ECX = AKBSJoint::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103e59e0 FUN_103e59e0

void FUN_103e59e0(AKConstraint *param_1)

{
  AKConstraint *in_ECX;
  
  AKConstraint::operator=(in_ECX,param_1);
  return;
}


// ==== 103e5a00 FUN_103e5a00

void FUN_103e5a00(byte param_1)

{
  AKBSJoint *in_ECX;
  
  AKBSJoint::~AKBSJoint(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x448);
  }
  return;
}


// ==== 103e5a30 FUN_103e5a30

AKBSJoint * FUN_103e5a30(byte param_1)

{
  AKBSJoint *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x448,*(int *)(in_ECX + -4),AKBSJoint::~AKBSJoint);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  AKBSJoint::~AKBSJoint(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x448);
  }
  return in_ECX;
}


// ==== 103e5ab0 FUN_103e5ab0

void FUN_103e5ab0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_108087a1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UParticleEmitter::vftable;
  local_4 = 0xb;
  UObject::ConditionalDestroy(in_ECX);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 10;
  thunk_FUN_1038fad0();
  local_4._0_1_ = 9;
  thunk_FUN_103954c0();
  local_4._0_1_ = 8;
  thunk_FUN_103953e0();
  local_4._0_1_ = 7;
  thunk_FUN_1038fce0();
  local_4._0_1_ = 6;
  thunk_FUN_103952b0();
  local_4._0_1_ = 5;
  thunk_FUN_103951d0();
  local_4._0_1_ = 4;
  thunk_FUN_103950f0();
  local_4._0_1_ = 3;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(in_ECX + 0x140));
  local_4._0_1_ = 2;
  thunk_FUN_10395010();
  local_4._0_1_ = 1;
  thunk_FUN_10394f30();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10392b80();
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103e5c70 FUN_103e5c70

void FUN_103e5c70(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080893b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UParticleEmitter::vftable;
  FRangeVector::FRangeVector((FRangeVector *)(in_ECX + 0x50));
  FArray::FArray((FArray *)(in_ECX + 0x6c),0);
  local_4._0_1_ = 3;
  FRange::FRange((FRange *)(in_ECX + 0x7c));
  FRangeVector::FRangeVector((FRangeVector *)(in_ECX + 0x8c));
  FArray::FArray((FArray *)(in_ECX + 0xa8),0);
  local_4._0_1_ = 6;
  FRangeVector::FRangeVector((FRangeVector *)(in_ECX + 0xb8));
  FArray::FArray((FArray *)(in_ECX + 0x128),0);
  local_4._0_1_ = 9;
  FRange::FRange((FRange *)(in_ECX + 0x138));
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x140));
  local_4._0_1_ = 10;
  FRangeVector::FRangeVector((FRangeVector *)(in_ECX + 0x158));
  FRange::FRange((FRange *)(in_ECX + 0x178));
  FRangeVector::FRangeVector((FRangeVector *)(in_ECX + 0x180));
  FRange::FRange((FRange *)(in_ECX + 0x198));
  FRangeVector::FRangeVector((FRangeVector *)(in_ECX + 0x1ac));
  FRangeVector::FRangeVector((FRangeVector *)(in_ECX + 0x1c4));
  FRange::FRange((FRange *)(in_ECX + 0x1ec));
  FRangeVector::FRangeVector((FRangeVector *)(in_ECX + 0x1fc));
  FRangeVector::FRangeVector((FRangeVector *)(in_ECX + 0x214));
  FArray::FArray((FArray *)(in_ECX + 0x230),0);
  local_4._0_1_ = 0xd;
  FRotator::FRotator((FRotator *)(in_ECX + 0x248));
  FRangeVector::FRangeVector((FRangeVector *)(in_ECX + 0x260));
  FRangeVector::FRangeVector((FRangeVector *)(in_ECX + 0x278));
  FRangeVector::FRangeVector((FRangeVector *)(in_ECX + 0x294));
  FArray::FArray((FArray *)(in_ECX + 700),0);
  local_4._0_1_ = 0x10;
  FRangeVector::FRangeVector((FRangeVector *)(in_ECX + 0x2cc));
  FRange::FRange((FRange *)(in_ECX + 0x2fc));
  FArray::FArray((FArray *)(in_ECX + 0x304),0);
  local_4._0_1_ = 0x13;
  FRange::FRange((FRange *)(in_ECX + 0x314));
  FRange::FRange((FRange *)(in_ECX + 0x31c));
  FRange::FRange((FRange *)(in_ECX + 0x328));
  FRange::FRange((FRange *)(in_ECX + 0x330));
  FArray::FArray((FArray *)(in_ECX + 0x358),0);
  local_4._0_1_ = 0x16;
  FRange::FRange((FRange *)(in_ECX + 0x378));
  FRange::FRange((FRange *)(in_ECX + 0x380));
  FRange::FRange((FRange *)(in_ECX + 0x388));
  FRange::FRange((FRange *)(in_ECX + 0x394));
  FRangeVector::FRangeVector((FRangeVector *)(in_ECX + 0x3a0));
  FRange::FRange((FRange *)(in_ECX + 0x3b8));
  FRangeVector::FRangeVector((FRangeVector *)(in_ECX + 0x3cc));
  FRangeVector::FRangeVector((FRangeVector *)(in_ECX + 1000));
  FArray::FArray((FArray *)(in_ECX + 0x408),0);
  local_4._0_1_ = 0x19;
  FArray::FArray((FArray *)(in_ECX + 0x42c),0);
  local_4 = CONCAT31(local_4._1_3_,0x1c);
  FBox::FBox((FBox *)(in_ECX + 0x444));
  FArray::FArray((FArray *)(in_ECX + 0x4b4),0);
  ExceptionList = local_c;
  return;
}


// ==== 103e5ff0 FUN_103e5ff0

void FUN_103e5ff0(UObject *param_1)

{
  uint uVar1;
  UObject *in_ECX;
  int iVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808a91;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UParticleEmitter::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(uint *)(in_ECX + 0x40) =
       *(uint *)(in_ECX + 0x40) ^ (*(uint *)(in_ECX + 0x40) ^ *(uint *)(param_1 + 0x40)) & 1;
  *(uint *)(in_ECX + 0x40) =
       (*(uint *)(param_1 + 0x40) ^ *(uint *)(in_ECX + 0x40)) & 2 ^ *(uint *)(in_ECX + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(uint *)(in_ECX + 0x68) =
       *(uint *)(in_ECX + 0x68) ^ (*(uint *)(param_1 + 0x68) ^ *(uint *)(in_ECX + 0x68)) & 1;
  thunk_FUN_1037b310(param_1 + 0x6c);
  local_4._0_1_ = 2;
  *(uint *)(in_ECX + 0x78) =
       *(uint *)(in_ECX + 0x78) ^ (*(uint *)(param_1 + 0x78) ^ *(uint *)(in_ECX + 0x78)) & 1;
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
  *(uint *)(in_ECX + 0xa4) =
       *(uint *)(in_ECX + 0xa4) ^ (*(uint *)(in_ECX + 0xa4) ^ *(uint *)(param_1 + 0xa4)) & 1;
  *(uint *)(in_ECX + 0xa4) =
       (*(uint *)(param_1 + 0xa4) ^ *(uint *)(in_ECX + 0xa4)) & 2 ^ *(uint *)(in_ECX + 0xa4);
  thunk_FUN_1037d2e0(param_1 + 0xa8);
  local_4._0_1_ = 4;
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(in_ECX + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(in_ECX + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(in_ECX + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(in_ECX + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(uint *)(in_ECX + 0xec) =
       *(uint *)(in_ECX + 0xec) ^ (*(uint *)(param_1 + 0xec) ^ *(uint *)(in_ECX + 0xec)) & 1;
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(uint *)(in_ECX + 0x104) =
       *(uint *)(in_ECX + 0x104) ^ (*(uint *)(in_ECX + 0x104) ^ *(uint *)(param_1 + 0x104)) & 1;
  *(uint *)(in_ECX + 0x104) =
       (*(uint *)(param_1 + 0x104) ^ *(uint *)(in_ECX + 0x104)) & 2 ^ *(uint *)(in_ECX + 0x104);
  in_ECX[0x108] = param_1[0x108];
  *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(uint *)(in_ECX + 0x110) =
       *(uint *)(in_ECX + 0x110) ^ (*(uint *)(param_1 + 0x110) ^ *(uint *)(in_ECX + 0x110)) & 1;
  in_ECX[0x114] = param_1[0x114];
  *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(in_ECX + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  in_ECX[0x120] = param_1[0x120];
  *(uint *)(in_ECX + 0x124) =
       *(uint *)(in_ECX + 0x124) ^ (*(uint *)(param_1 + 0x124) ^ *(uint *)(in_ECX + 0x124)) & 1;
  thunk_FUN_1037d3a0(param_1 + 0x128);
  local_4._0_1_ = 6;
  *(uint *)(in_ECX + 0x134) =
       *(uint *)(in_ECX + 0x134) ^ (*(uint *)(in_ECX + 0x134) ^ *(uint *)(param_1 + 0x134)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x134) ^ *(uint *)(in_ECX + 0x134)) & 2 ^ *(uint *)(in_ECX + 0x134);
  *(uint *)(in_ECX + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x134) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x134) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(in_ECX + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x134) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(in_ECX + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x134) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(in_ECX + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x134) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(in_ECX + 0x134) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x134) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(in_ECX + 0x134) = uVar1;
  *(uint *)(in_ECX + 0x134) = (*(uint *)(param_1 + 0x134) ^ uVar1) & 0x100 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x140),(FStringNoInit *)(param_1 + 0x140))
  ;
  local_4._0_1_ = 7;
  *(undefined4 *)(in_ECX + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(in_ECX + 0x150) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(in_ECX + 0x154) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(in_ECX + 0x158) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(in_ECX + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(in_ECX + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(in_ECX + 0x164) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(in_ECX + 0x168) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(in_ECX + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(in_ECX + 0x170) = *(undefined4 *)(param_1 + 0x170);
  in_ECX[0x174] = param_1[0x174];
  *(undefined4 *)(in_ECX + 0x178) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(in_ECX + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(in_ECX + 0x180) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(in_ECX + 0x184) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(in_ECX + 0x188) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(in_ECX + 0x18c) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(in_ECX + 400) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(in_ECX + 0x194) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(in_ECX + 0x198) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(in_ECX + 0x19c) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(in_ECX + 0x1a0) = *(undefined4 *)(param_1 + 0x1a0);
  in_ECX[0x1a4] = param_1[0x1a4];
  *(uint *)(in_ECX + 0x1a8) =
       *(uint *)(in_ECX + 0x1a8) ^ (*(uint *)(param_1 + 0x1a8) ^ *(uint *)(in_ECX + 0x1a8)) & 1;
  *(undefined4 *)(in_ECX + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(in_ECX + 0x1b0) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(in_ECX + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(in_ECX + 0x1b8) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(in_ECX + 0x1bc) = *(undefined4 *)(param_1 + 0x1bc);
  *(undefined4 *)(in_ECX + 0x1c0) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(in_ECX + 0x1c4) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(in_ECX + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(in_ECX + 0x1cc) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
  *(uint *)(in_ECX + 0x1dc) =
       *(uint *)(in_ECX + 0x1dc) ^ (*(uint *)(in_ECX + 0x1dc) ^ *(uint *)(param_1 + 0x1dc)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x1dc) ^ *(uint *)(in_ECX + 0x1dc)) & 2 ^ *(uint *)(in_ECX + 0x1dc);
  *(uint *)(in_ECX + 0x1dc) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x1dc) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x1dc) = uVar1;
  *(uint *)(in_ECX + 0x1dc) = (*(uint *)(param_1 + 0x1dc) ^ uVar1) & 8 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x1e0) = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(in_ECX + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(in_ECX + 0x1e8) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(in_ECX + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(in_ECX + 0x1f0) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(in_ECX + 500) = *(undefined4 *)(param_1 + 500);
  *(uint *)(in_ECX + 0x1f8) =
       *(uint *)(in_ECX + 0x1f8) ^ (*(uint *)(in_ECX + 0x1f8) ^ *(uint *)(param_1 + 0x1f8)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x1f8) ^ *(uint *)(in_ECX + 0x1f8)) & 2 ^ *(uint *)(in_ECX + 0x1f8);
  *(uint *)(in_ECX + 0x1f8) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x1f8) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x1f8) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x1f8) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(in_ECX + 0x1f8) = uVar1;
  *(uint *)(in_ECX + 0x1f8) = (*(uint *)(param_1 + 0x1f8) ^ uVar1) & 0x10 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x1fc) = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(in_ECX + 0x200) = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)(in_ECX + 0x204) = *(undefined4 *)(param_1 + 0x204);
  *(undefined4 *)(in_ECX + 0x208) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(in_ECX + 0x20c) = *(undefined4 *)(param_1 + 0x20c);
  *(undefined4 *)(in_ECX + 0x210) = *(undefined4 *)(param_1 + 0x210);
  *(undefined4 *)(in_ECX + 0x214) = *(undefined4 *)(param_1 + 0x214);
  *(undefined4 *)(in_ECX + 0x218) = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(in_ECX + 0x21c) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(in_ECX + 0x220) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(in_ECX + 0x224) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(in_ECX + 0x228) = *(undefined4 *)(param_1 + 0x228);
  *(uint *)(in_ECX + 0x22c) =
       *(uint *)(in_ECX + 0x22c) ^ (*(uint *)(param_1 + 0x22c) ^ *(uint *)(in_ECX + 0x22c)) & 1;
  thunk_FUN_1037d460(param_1 + 0x230);
  local_4._0_1_ = 9;
  *(undefined4 *)(in_ECX + 0x23c) = *(undefined4 *)(param_1 + 0x23c);
  in_ECX[0x240] = param_1[0x240];
  *(uint *)(in_ECX + 0x244) =
       *(uint *)(in_ECX + 0x244) ^ (*(uint *)(param_1 + 0x244) ^ *(uint *)(in_ECX + 0x244)) & 1;
  *(undefined4 *)(in_ECX + 0x248) = *(undefined4 *)(param_1 + 0x248);
  *(undefined4 *)(in_ECX + 0x24c) = *(undefined4 *)(param_1 + 0x24c);
  *(undefined4 *)(in_ECX + 0x250) = *(undefined4 *)(param_1 + 0x250);
  *(undefined4 *)(in_ECX + 0x254) = *(undefined4 *)(param_1 + 0x254);
  *(undefined4 *)(in_ECX + 600) = *(undefined4 *)(param_1 + 600);
  *(undefined4 *)(in_ECX + 0x25c) = *(undefined4 *)(param_1 + 0x25c);
  *(undefined4 *)(in_ECX + 0x260) = *(undefined4 *)(param_1 + 0x260);
  *(undefined4 *)(in_ECX + 0x264) = *(undefined4 *)(param_1 + 0x264);
  *(undefined4 *)(in_ECX + 0x268) = *(undefined4 *)(param_1 + 0x268);
  *(undefined4 *)(in_ECX + 0x26c) = *(undefined4 *)(param_1 + 0x26c);
  *(undefined4 *)(in_ECX + 0x270) = *(undefined4 *)(param_1 + 0x270);
  *(undefined4 *)(in_ECX + 0x274) = *(undefined4 *)(param_1 + 0x274);
  *(undefined4 *)(in_ECX + 0x278) = *(undefined4 *)(param_1 + 0x278);
  *(undefined4 *)(in_ECX + 0x27c) = *(undefined4 *)(param_1 + 0x27c);
  *(undefined4 *)(in_ECX + 0x280) = *(undefined4 *)(param_1 + 0x280);
  *(undefined4 *)(in_ECX + 0x284) = *(undefined4 *)(param_1 + 0x284);
  *(undefined4 *)(in_ECX + 0x288) = *(undefined4 *)(param_1 + 0x288);
  *(undefined4 *)(in_ECX + 0x28c) = *(undefined4 *)(param_1 + 0x28c);
  *(uint *)(in_ECX + 0x290) =
       *(uint *)(in_ECX + 0x290) ^ (*(uint *)(param_1 + 0x290) ^ *(uint *)(in_ECX + 0x290)) & 1;
  *(undefined4 *)(in_ECX + 0x294) = *(undefined4 *)(param_1 + 0x294);
  *(undefined4 *)(in_ECX + 0x298) = *(undefined4 *)(param_1 + 0x298);
  *(undefined4 *)(in_ECX + 0x29c) = *(undefined4 *)(param_1 + 0x29c);
  *(undefined4 *)(in_ECX + 0x2a0) = *(undefined4 *)(param_1 + 0x2a0);
  *(undefined4 *)(in_ECX + 0x2a4) = *(undefined4 *)(param_1 + 0x2a4);
  *(undefined4 *)(in_ECX + 0x2a8) = *(undefined4 *)(param_1 + 0x2a8);
  *(undefined4 *)(in_ECX + 0x2ac) = *(undefined4 *)(param_1 + 0x2ac);
  *(undefined4 *)(in_ECX + 0x2b0) = *(undefined4 *)(param_1 + 0x2b0);
  *(undefined4 *)(in_ECX + 0x2b4) = *(undefined4 *)(param_1 + 0x2b4);
  *(uint *)(in_ECX + 0x2b8) =
       *(uint *)(in_ECX + 0x2b8) ^ (*(uint *)(in_ECX + 0x2b8) ^ *(uint *)(param_1 + 0x2b8)) & 1;
  *(uint *)(in_ECX + 0x2b8) =
       (*(uint *)(param_1 + 0x2b8) ^ *(uint *)(in_ECX + 0x2b8)) & 2 ^ *(uint *)(in_ECX + 0x2b8);
  thunk_FUN_1037d530(param_1 + 700);
  local_4._0_1_ = 0xb;
  *(undefined4 *)(in_ECX + 0x2c8) = *(undefined4 *)(param_1 + 0x2c8);
  *(undefined4 *)(in_ECX + 0x2cc) = *(undefined4 *)(param_1 + 0x2cc);
  *(undefined4 *)(in_ECX + 0x2d0) = *(undefined4 *)(param_1 + 0x2d0);
  *(undefined4 *)(in_ECX + 0x2d4) = *(undefined4 *)(param_1 + 0x2d4);
  *(undefined4 *)(in_ECX + 0x2d8) = *(undefined4 *)(param_1 + 0x2d8);
  *(undefined4 *)(in_ECX + 0x2dc) = *(undefined4 *)(param_1 + 0x2dc);
  *(undefined4 *)(in_ECX + 0x2e0) = *(undefined4 *)(param_1 + 0x2e0);
  *(uint *)(in_ECX + 0x2e4) =
       *(uint *)(in_ECX + 0x2e4) ^ (*(uint *)(param_1 + 0x2e4) ^ *(uint *)(in_ECX + 0x2e4)) & 1;
  in_ECX[0x2e8] = param_1[0x2e8];
  *(undefined4 *)(in_ECX + 0x2ec) = *(undefined4 *)(param_1 + 0x2ec);
  *(undefined4 *)(in_ECX + 0x2f0) = *(undefined4 *)(param_1 + 0x2f0);
  *(undefined4 *)(in_ECX + 0x2f4) = *(undefined4 *)(param_1 + 0x2f4);
  *(undefined4 *)(in_ECX + 0x2f8) = *(undefined4 *)(param_1 + 0x2f8);
  *(undefined4 *)(in_ECX + 0x2fc) = *(undefined4 *)(param_1 + 0x2fc);
  *(undefined4 *)(in_ECX + 0x300) = *(undefined4 *)(param_1 + 0x300);
  thunk_FUN_1037d5f0(param_1 + 0x304);
  local_4._0_1_ = 0xd;
  in_ECX[0x310] = param_1[0x310];
  *(undefined4 *)(in_ECX + 0x314) = *(undefined4 *)(param_1 + 0x314);
  *(undefined4 *)(in_ECX + 0x318) = *(undefined4 *)(param_1 + 0x318);
  *(undefined4 *)(in_ECX + 0x31c) = *(undefined4 *)(param_1 + 0x31c);
  *(undefined4 *)(in_ECX + 800) = *(undefined4 *)(param_1 + 800);
  in_ECX[0x324] = param_1[0x324];
  *(undefined4 *)(in_ECX + 0x328) = *(undefined4 *)(param_1 + 0x328);
  *(undefined4 *)(in_ECX + 0x32c) = *(undefined4 *)(param_1 + 0x32c);
  *(undefined4 *)(in_ECX + 0x330) = *(undefined4 *)(param_1 + 0x330);
  *(undefined4 *)(in_ECX + 0x334) = *(undefined4 *)(param_1 + 0x334);
  *(undefined4 *)(in_ECX + 0x338) = *(undefined4 *)(param_1 + 0x338);
  *(undefined4 *)(in_ECX + 0x33c) = *(undefined4 *)(param_1 + 0x33c);
  *(uint *)(in_ECX + 0x340) =
       *(uint *)(in_ECX + 0x340) ^ (*(uint *)(param_1 + 0x340) ^ *(uint *)(in_ECX + 0x340)) & 1;
  in_ECX[0x344] = param_1[0x344];
  *(undefined4 *)(in_ECX + 0x348) = *(undefined4 *)(param_1 + 0x348);
  *(undefined4 *)(in_ECX + 0x34c) = *(undefined4 *)(param_1 + 0x34c);
  *(undefined4 *)(in_ECX + 0x350) = *(undefined4 *)(param_1 + 0x350);
  *(uint *)(in_ECX + 0x354) =
       *(uint *)(in_ECX + 0x354) ^ (*(uint *)(in_ECX + 0x354) ^ *(uint *)(param_1 + 0x354)) & 1;
  *(uint *)(in_ECX + 0x354) =
       (*(uint *)(param_1 + 0x354) ^ *(uint *)(in_ECX + 0x354)) & 2 ^ *(uint *)(in_ECX + 0x354);
  thunk_FUN_10379830(param_1 + 0x358);
  local_4._0_1_ = 0xf;
  *(undefined4 *)(in_ECX + 0x364) = *(undefined4 *)(param_1 + 0x364);
  *(undefined4 *)(in_ECX + 0x368) = *(undefined4 *)(param_1 + 0x368);
  *(uint *)(in_ECX + 0x36c) =
       *(uint *)(in_ECX + 0x36c) ^ (*(uint *)(param_1 + 0x36c) ^ *(uint *)(in_ECX + 0x36c)) & 1;
  *(undefined4 *)(in_ECX + 0x370) = *(undefined4 *)(param_1 + 0x370);
  *(undefined4 *)(in_ECX + 0x374) = *(undefined4 *)(param_1 + 0x374);
  *(undefined4 *)(in_ECX + 0x378) = *(undefined4 *)(param_1 + 0x378);
  *(undefined4 *)(in_ECX + 0x37c) = *(undefined4 *)(param_1 + 0x37c);
  *(undefined4 *)(in_ECX + 0x380) = *(undefined4 *)(param_1 + 0x380);
  *(undefined4 *)(in_ECX + 900) = *(undefined4 *)(param_1 + 900);
  *(undefined4 *)(in_ECX + 0x388) = *(undefined4 *)(param_1 + 0x388);
  *(undefined4 *)(in_ECX + 0x38c) = *(undefined4 *)(param_1 + 0x38c);
  *(uint *)(in_ECX + 0x390) =
       *(uint *)(in_ECX + 0x390) ^ (*(uint *)(in_ECX + 0x390) ^ *(uint *)(param_1 + 0x390)) & 1;
  *(uint *)(in_ECX + 0x390) =
       (*(uint *)(param_1 + 0x390) ^ *(uint *)(in_ECX + 0x390)) & 2 ^ *(uint *)(in_ECX + 0x390);
  *(undefined4 *)(in_ECX + 0x394) = *(undefined4 *)(param_1 + 0x394);
  *(undefined4 *)(in_ECX + 0x398) = *(undefined4 *)(param_1 + 0x398);
  *(undefined4 *)(in_ECX + 0x39c) = *(undefined4 *)(param_1 + 0x39c);
  *(undefined4 *)(in_ECX + 0x3a0) = *(undefined4 *)(param_1 + 0x3a0);
  *(undefined4 *)(in_ECX + 0x3a4) = *(undefined4 *)(param_1 + 0x3a4);
  *(undefined4 *)(in_ECX + 0x3a8) = *(undefined4 *)(param_1 + 0x3a8);
  *(undefined4 *)(in_ECX + 0x3ac) = *(undefined4 *)(param_1 + 0x3ac);
  *(undefined4 *)(in_ECX + 0x3b0) = *(undefined4 *)(param_1 + 0x3b0);
  *(undefined4 *)(in_ECX + 0x3b4) = *(undefined4 *)(param_1 + 0x3b4);
  *(undefined4 *)(in_ECX + 0x3b8) = *(undefined4 *)(param_1 + 0x3b8);
  *(undefined4 *)(in_ECX + 0x3bc) = *(undefined4 *)(param_1 + 0x3bc);
  *(undefined4 *)(in_ECX + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)(in_ECX + 0x3c4) = *(undefined4 *)(param_1 + 0x3c4);
  *(undefined4 *)(in_ECX + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)(in_ECX + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)(in_ECX + 0x3d0) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(in_ECX + 0x3d4) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(in_ECX + 0x3d8) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(in_ECX + 0x3dc) = *(undefined4 *)(param_1 + 0x3dc);
  *(undefined4 *)(in_ECX + 0x3e0) = *(undefined4 *)(param_1 + 0x3e0);
  *(undefined4 *)(in_ECX + 0x3e4) = *(undefined4 *)(param_1 + 0x3e4);
  *(undefined4 *)(in_ECX + 1000) = *(undefined4 *)(param_1 + 1000);
  *(undefined4 *)(in_ECX + 0x3ec) = *(undefined4 *)(param_1 + 0x3ec);
  *(undefined4 *)(in_ECX + 0x3f0) = *(undefined4 *)(param_1 + 0x3f0);
  *(undefined4 *)(in_ECX + 0x3f4) = *(undefined4 *)(param_1 + 0x3f4);
  *(undefined4 *)(in_ECX + 0x3f8) = *(undefined4 *)(param_1 + 0x3f8);
  *(undefined4 *)(in_ECX + 0x3fc) = *(undefined4 *)(param_1 + 0x3fc);
  in_ECX[0x400] = param_1[0x400];
  *(uint *)(in_ECX + 0x404) =
       *(uint *)(in_ECX + 0x404) ^ (*(uint *)(param_1 + 0x404) ^ *(uint *)(in_ECX + 0x404)) & 1;
  thunk_FUN_1037d6f0(param_1 + 0x408);
  local_4._0_1_ = 0x11;
  *(undefined4 *)(in_ECX + 0x414) = *(undefined4 *)(param_1 + 0x414);
  *(undefined4 *)(in_ECX + 0x418) = *(undefined4 *)(param_1 + 0x418);
  *(undefined4 *)(in_ECX + 0x41c) = *(undefined4 *)(param_1 + 0x41c);
  *(undefined4 *)(in_ECX + 0x420) = *(undefined4 *)(param_1 + 0x420);
  *(uint *)(in_ECX + 0x424) =
       *(uint *)(in_ECX + 0x424) ^ (*(uint *)(in_ECX + 0x424) ^ *(uint *)(param_1 + 0x424)) & 1;
  *(uint *)(in_ECX + 0x424) =
       (*(uint *)(param_1 + 0x424) ^ *(uint *)(in_ECX + 0x424)) & 2 ^ *(uint *)(in_ECX + 0x424);
  *(undefined4 *)(in_ECX + 0x428) = *(undefined4 *)(param_1 + 0x428);
  thunk_FUN_1037d7c0(param_1 + 0x42c);
  local_4 = CONCAT31(local_4._1_3_,0x13);
  *(undefined4 *)(in_ECX + 0x438) = *(undefined4 *)(param_1 + 0x438);
  *(undefined4 *)(in_ECX + 0x43c) = *(undefined4 *)(param_1 + 0x43c);
  *(undefined4 *)(in_ECX + 0x440) = *(undefined4 *)(param_1 + 0x440);
  pUVar3 = param_1 + 0x444;
  pUVar4 = in_ECX + 0x444;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar3;
    pUVar3 = pUVar3 + 4;
    pUVar4 = pUVar4 + 4;
  }
  *(undefined4 *)(in_ECX + 0x460) = *(undefined4 *)(param_1 + 0x460);
  *(undefined4 *)(in_ECX + 0x464) = *(undefined4 *)(param_1 + 0x464);
  *(undefined4 *)(in_ECX + 0x468) = *(undefined4 *)(param_1 + 0x468);
  *(uint *)(in_ECX + 0x46c) =
       *(uint *)(in_ECX + 0x46c) ^ (*(uint *)(in_ECX + 0x46c) ^ *(uint *)(param_1 + 0x46c)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x46c) ^ *(uint *)(in_ECX + 0x46c)) & 2 ^ *(uint *)(in_ECX + 0x46c);
  *(uint *)(in_ECX + 0x46c) = uVar1;
  *(uint *)(in_ECX + 0x46c) = (*(uint *)(param_1 + 0x46c) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x470) = *(undefined4 *)(param_1 + 0x470);
  *(undefined4 *)(in_ECX + 0x474) = *(undefined4 *)(param_1 + 0x474);
  *(undefined4 *)(in_ECX + 0x478) = *(undefined4 *)(param_1 + 0x478);
  *(undefined4 *)(in_ECX + 0x47c) = *(undefined4 *)(param_1 + 0x47c);
  *(undefined4 *)(in_ECX + 0x480) = *(undefined4 *)(param_1 + 0x480);
  *(undefined4 *)(in_ECX + 0x484) = *(undefined4 *)(param_1 + 0x484);
  *(undefined4 *)(in_ECX + 0x488) = *(undefined4 *)(param_1 + 0x488);
  *(undefined4 *)(in_ECX + 0x48c) = *(undefined4 *)(param_1 + 0x48c);
  *(undefined4 *)(in_ECX + 0x490) = *(undefined4 *)(param_1 + 0x490);
  *(undefined4 *)(in_ECX + 0x494) = *(undefined4 *)(param_1 + 0x494);
  *(undefined4 *)(in_ECX + 0x498) = *(undefined4 *)(param_1 + 0x498);
  *(undefined4 *)(in_ECX + 0x49c) = *(undefined4 *)(param_1 + 0x49c);
  *(undefined4 *)(in_ECX + 0x4a0) = *(undefined4 *)(param_1 + 0x4a0);
  *(undefined4 *)(in_ECX + 0x4a4) = *(undefined4 *)(param_1 + 0x4a4);
  *(undefined4 *)(in_ECX + 0x4a8) = *(undefined4 *)(param_1 + 0x4a8);
  *(undefined4 *)(in_ECX + 0x4ac) = *(undefined4 *)(param_1 + 0x4ac);
  *(undefined4 *)(in_ECX + 0x4b0) = *(undefined4 *)(param_1 + 0x4b0);
  thunk_FUN_103794b0(param_1 + 0x4b4);
  *(undefined4 *)(in_ECX + 0x4c0) = *(undefined4 *)(param_1 + 0x4c0);
  *(uint *)(in_ECX + 0x4c4) =
       *(uint *)(in_ECX + 0x4c4) ^ (*(uint *)(param_1 + 0x4c4) ^ *(uint *)(in_ECX + 0x4c4)) & 1;
  *(undefined4 *)(in_ECX + 0x4c8) = *(undefined4 *)(param_1 + 0x4c8);
  *(uint *)(in_ECX + 0x4cc) =
       *(uint *)(in_ECX + 0x4cc) ^ (*(uint *)(param_1 + 0x4cc) ^ *(uint *)(in_ECX + 0x4cc)) & 1;
  ExceptionList = local_c;
  return;
}


// ==== 103e7410 FUN_103e7410

void FUN_103e7410(byte param_1)

{
  UParticleEmitter *in_ECX;
  
  UParticleEmitter::~UParticleEmitter(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4d0);
  }
  return;
}


// ==== 103e7440 FUN_103e7440

UParticleEmitter * FUN_103e7440(byte param_1)

{
  UParticleEmitter *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x4d0,*(int *)(in_ECX + -4),UParticleEmitter::~UParticleEmitter);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UParticleEmitter::~UParticleEmitter(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4d0);
  }
  return in_ECX;
}


// ==== 103e74c0 FUN_103e74c0

void FUN_103e74c0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10808b14;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UTrailEmitter::vftable;
  local_4 = 2;
  UObject::ConditionalDestroy(in_ECX);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  thunk_FUN_10395680();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_103955a0();
  local_4 = 0xffffffff;
  UParticleEmitter::~UParticleEmitter((UParticleEmitter *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103e7570 FUN_103e7570

void FUN_103e7570(void)

{
  UParticleEmitter *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808b76;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UParticleEmitter::UParticleEmitter(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UTrailEmitter::vftable;
  FRange::FRange((FRange *)(in_ECX + 0x4d4));
  FArray::FArray((FArray *)(in_ECX + 0x4e4),0);
  local_4 = CONCAT31(local_4._1_3_,3);
  FArray::FArray((FArray *)(in_ECX + 0x4f0),0);
  ExceptionList = local_c;
  return;
}


// ==== 103e7620 FUN_103e7620

void FUN_103e7620(UParticleEmitter *param_1)

{
  UParticleEmitter *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808bd4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UParticleEmitter::UParticleEmitter(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UTrailEmitter::vftable;
  *(undefined4 *)(in_ECX + 0x4d0) = *(undefined4 *)(param_1 + 0x4d0);
  *(undefined4 *)(in_ECX + 0x4d4) = *(undefined4 *)(param_1 + 0x4d4);
  *(undefined4 *)(in_ECX + 0x4d8) = *(undefined4 *)(param_1 + 0x4d8);
  *(uint *)(in_ECX + 0x4dc) =
       *(uint *)(in_ECX + 0x4dc) ^ (*(uint *)(param_1 + 0x4dc) ^ *(uint *)(in_ECX + 0x4dc)) & 1;
  *(undefined4 *)(in_ECX + 0x4e0) = *(undefined4 *)(param_1 + 0x4e0);
  thunk_FUN_1037d8c0(param_1 + 0x4e4);
  local_4 = CONCAT31(local_4._1_3_,2);
  thunk_FUN_1037d9b0(param_1 + 0x4f0);
  *(undefined4 *)(in_ECX + 0x4fc) = *(undefined4 *)(param_1 + 0x4fc);
  *(undefined4 *)(in_ECX + 0x500) = *(undefined4 *)(param_1 + 0x500);
  *(undefined4 *)(in_ECX + 0x504) = *(undefined4 *)(param_1 + 0x504);
  *(undefined4 *)(in_ECX + 0x508) = *(undefined4 *)(param_1 + 0x508);
  *(undefined4 *)(in_ECX + 0x50c) = *(undefined4 *)(param_1 + 0x50c);
  ExceptionList = local_c;
  return;
}


// ==== 103e7770 FUN_103e7770

void FUN_103e7770(byte param_1)

{
  UTrailEmitter *in_ECX;
  
  UTrailEmitter::~UTrailEmitter(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x510);
  }
  return;
}


// ==== 103e77a0 FUN_103e77a0

UTrailEmitter * FUN_103e77a0(byte param_1)

{
  UTrailEmitter *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x510,*(int *)(in_ECX + -4),UTrailEmitter::~UTrailEmitter);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTrailEmitter::~UTrailEmitter(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x510);
  }
  return in_ECX;
}


// ==== 103e7820 FUN_103e7820

void FUN_103e7820(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10808bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = USpriteEmitter::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UParticleEmitter::~UParticleEmitter((UParticleEmitter *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103e7890 FUN_103e7890

void FUN_103e7890(void)

{
  UParticleEmitter *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808c18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UParticleEmitter::UParticleEmitter(in_ECX);
  *(undefined ***)in_ECX = USpriteEmitter::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103e78f0 FUN_103e78f0

void FUN_103e78f0(UParticleEmitter *param_1)

{
  UParticleEmitter *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808c38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UParticleEmitter::UParticleEmitter(in_ECX,param_1);
  *(undefined ***)in_ECX = USpriteEmitter::vftable;
  in_ECX[0x4d0] = param_1[0x4d0];
  *(undefined4 *)(in_ECX + 0x4d4) = *(undefined4 *)(param_1 + 0x4d4);
  *(undefined4 *)(in_ECX + 0x4d8) = *(undefined4 *)(param_1 + 0x4d8);
  *(undefined4 *)(in_ECX + 0x4dc) = *(undefined4 *)(param_1 + 0x4dc);
  *(undefined4 *)(in_ECX + 0x4e0) = *(undefined4 *)(param_1 + 0x4e0);
  *(undefined4 *)(in_ECX + 0x4e4) = *(undefined4 *)(param_1 + 0x4e4);
  *(undefined4 *)(in_ECX + 0x4e8) = *(undefined4 *)(param_1 + 0x4e8);
  *(undefined4 *)(in_ECX + 0x4ec) = *(undefined4 *)(param_1 + 0x4ec);
  *(undefined4 *)(in_ECX + 0x4f0) = *(undefined4 *)(param_1 + 0x4f0);
  *(undefined4 *)(in_ECX + 0x4f4) = *(undefined4 *)(param_1 + 0x4f4);
  ExceptionList = local_c;
  return;
}


// ==== 103e79f0 FUN_103e79f0

void FUN_103e79f0(byte param_1)

{
  USpriteEmitter *in_ECX;
  
  USpriteEmitter::~USpriteEmitter(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4f8);
  }
  return;
}


// ==== 103e7a20 FUN_103e7a20

USpriteEmitter * FUN_103e7a20(byte param_1)

{
  USpriteEmitter *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x4f8,*(int *)(in_ECX + -4),USpriteEmitter::~USpriteEmitter);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  USpriteEmitter::~USpriteEmitter(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4f8);
  }
  return in_ECX;
}


// ==== 103e7aa0 FUN_103e7aa0

void FUN_103e7aa0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10808c6e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = USparkEmitter::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10395760();
  local_4 = 0xffffffff;
  UParticleEmitter::~UParticleEmitter((UParticleEmitter *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103e7b30 FUN_103e7b30

void FUN_103e7b30(void)

{
  UParticleEmitter *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808cb7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UParticleEmitter::UParticleEmitter(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = USparkEmitter::vftable;
  FRange::FRange((FRange *)(in_ECX + 0x4d0));
  FRange::FRange((FRange *)(in_ECX + 0x4d8));
  FRange::FRange((FRange *)(in_ECX + 0x4e0));
  FArray::FArray((FArray *)(in_ECX + 0x4e8),0);
  ExceptionList = local_c;
  return;
}


// ==== 103e7be0 FUN_103e7be0

void FUN_103e7be0(UParticleEmitter *param_1)

{
  UParticleEmitter *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808cee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UParticleEmitter::UParticleEmitter(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = USparkEmitter::vftable;
  *(undefined4 *)(in_ECX + 0x4d0) = *(undefined4 *)(param_1 + 0x4d0);
  *(undefined4 *)(in_ECX + 0x4d4) = *(undefined4 *)(param_1 + 0x4d4);
  *(undefined4 *)(in_ECX + 0x4d8) = *(undefined4 *)(param_1 + 0x4d8);
  *(undefined4 *)(in_ECX + 0x4dc) = *(undefined4 *)(param_1 + 0x4dc);
  *(undefined4 *)(in_ECX + 0x4e0) = *(undefined4 *)(param_1 + 0x4e0);
  *(undefined4 *)(in_ECX + 0x4e4) = *(undefined4 *)(param_1 + 0x4e4);
  thunk_FUN_1037da90(param_1 + 0x4e8);
  *(undefined4 *)(in_ECX + 0x4f4) = *(undefined4 *)(param_1 + 0x4f4);
  *(undefined4 *)(in_ECX + 0x4f8) = *(undefined4 *)(param_1 + 0x4f8);
  *(undefined4 *)(in_ECX + 0x4fc) = *(undefined4 *)(param_1 + 0x4fc);
  *(undefined4 *)(in_ECX + 0x500) = *(undefined4 *)(param_1 + 0x500);
  *(undefined4 *)(in_ECX + 0x504) = *(undefined4 *)(param_1 + 0x504);
  *(undefined4 *)(in_ECX + 0x508) = *(undefined4 *)(param_1 + 0x508);
  ExceptionList = local_c;
  return;
}


// ==== 103e7d20 FUN_103e7d20

void FUN_103e7d20(byte param_1)

{
  USparkEmitter *in_ECX;
  
  USparkEmitter::~USparkEmitter(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x50c);
  }
  return;
}


// ==== 103e7d50 FUN_103e7d50

USparkEmitter * FUN_103e7d50(byte param_1)

{
  USparkEmitter *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x50c,*(int *)(in_ECX + -4),USparkEmitter::~USparkEmitter);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  USparkEmitter::~USparkEmitter(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x50c);
  }
  return in_ECX;
}


// ==== 103e7dd0 FUN_103e7dd0

void FUN_103e7dd0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10808d44;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = URibbonEmitter::vftable;
  local_4 = 2;
  UObject::ConditionalDestroy(in_ECX);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  thunk_FUN_10395840();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_1038fce0();
  local_4 = 0xffffffff;
  UParticleEmitter::~UParticleEmitter((UParticleEmitter *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103e7e80 FUN_103e7e80

void FUN_103e7e80(void)

{
  UParticleEmitter *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808da6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UParticleEmitter::UParticleEmitter(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = URibbonEmitter::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x51c),0);
  local_4 = CONCAT31(local_4._1_3_,3);
  FName::FName((FName *)(in_ECX + 0x540));
  FName::FName((FName *)(in_ECX + 0x544));
  FArray::FArray((FArray *)(in_ECX + 0x548),0);
  ExceptionList = local_c;
  return;
}


// ==== 103e7f30 FUN_103e7f30

void FUN_103e7f30(UParticleEmitter *param_1)

{
  uint uVar1;
  UParticleEmitter *in_ECX;
  int iVar2;
  UParticleEmitter *pUVar3;
  UParticleEmitter *pUVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808e04;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UParticleEmitter::UParticleEmitter(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = URibbonEmitter::vftable;
  *(undefined4 *)(in_ECX + 0x4d0) = *(undefined4 *)(param_1 + 0x4d0);
  *(undefined4 *)(in_ECX + 0x4d4) = *(undefined4 *)(param_1 + 0x4d4);
  *(undefined4 *)(in_ECX + 0x4d8) = *(undefined4 *)(param_1 + 0x4d8);
  in_ECX[0x4dc] = param_1[0x4dc];
  *(undefined4 *)(in_ECX + 0x4e0) = *(undefined4 *)(param_1 + 0x4e0);
  *(undefined4 *)(in_ECX + 0x4e4) = *(undefined4 *)(param_1 + 0x4e4);
  *(undefined4 *)(in_ECX + 0x4e8) = *(undefined4 *)(param_1 + 0x4e8);
  *(undefined4 *)(in_ECX + 0x4ec) = *(undefined4 *)(param_1 + 0x4ec);
  *(undefined4 *)(in_ECX + 0x4f0) = *(undefined4 *)(param_1 + 0x4f0);
  in_ECX[0x4f4] = param_1[0x4f4];
  *(undefined4 *)(in_ECX + 0x4f8) = *(undefined4 *)(param_1 + 0x4f8);
  *(undefined4 *)(in_ECX + 0x4fc) = *(undefined4 *)(param_1 + 0x4fc);
  *(undefined4 *)(in_ECX + 0x500) = *(undefined4 *)(param_1 + 0x500);
  *(undefined4 *)(in_ECX + 0x504) = *(undefined4 *)(param_1 + 0x504);
  *(undefined4 *)(in_ECX + 0x508) = *(undefined4 *)(param_1 + 0x508);
  *(undefined4 *)(in_ECX + 0x50c) = *(undefined4 *)(param_1 + 0x50c);
  *(undefined4 *)(in_ECX + 0x510) = *(undefined4 *)(param_1 + 0x510);
  *(undefined4 *)(in_ECX + 0x514) = *(undefined4 *)(param_1 + 0x514);
  *(undefined4 *)(in_ECX + 0x518) = *(undefined4 *)(param_1 + 0x518);
  thunk_FUN_10379830(param_1 + 0x51c);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)(in_ECX + 0x528) = *(undefined4 *)(param_1 + 0x528);
  *(undefined4 *)(in_ECX + 0x52c) = *(undefined4 *)(param_1 + 0x52c);
  *(undefined4 *)(in_ECX + 0x530) = *(undefined4 *)(param_1 + 0x530);
  *(undefined4 *)(in_ECX + 0x534) = *(undefined4 *)(param_1 + 0x534);
  *(undefined4 *)(in_ECX + 0x538) = *(undefined4 *)(param_1 + 0x538);
  *(undefined4 *)(in_ECX + 0x53c) = *(undefined4 *)(param_1 + 0x53c);
  *(undefined4 *)(in_ECX + 0x540) = *(undefined4 *)(param_1 + 0x540);
  *(undefined4 *)(in_ECX + 0x544) = *(undefined4 *)(param_1 + 0x544);
  thunk_FUN_1037db80(param_1 + 0x548);
  *(uint *)(in_ECX + 0x554) =
       *(uint *)(in_ECX + 0x554) ^ (*(uint *)(param_1 + 0x554) ^ *(uint *)(in_ECX + 0x554)) & 1;
  *(undefined4 *)(in_ECX + 0x558) = *(undefined4 *)(param_1 + 0x558);
  *(undefined4 *)(in_ECX + 0x55c) = *(undefined4 *)(param_1 + 0x55c);
  *(uint *)(in_ECX + 0x560) =
       *(uint *)(in_ECX + 0x560) ^ (*(uint *)(in_ECX + 0x560) ^ *(uint *)(param_1 + 0x560)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x560) ^ *(uint *)(in_ECX + 0x560)) & 2 ^ *(uint *)(in_ECX + 0x560);
  *(uint *)(in_ECX + 0x560) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x560) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x560) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x560) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(in_ECX + 0x560) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x560) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(in_ECX + 0x560) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x560) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(in_ECX + 0x560) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x560) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(in_ECX + 0x560) = uVar1;
  *(uint *)(in_ECX + 0x560) = (*(uint *)(param_1 + 0x560) ^ uVar1) & 0x80 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x564) = *(undefined4 *)(param_1 + 0x564);
  *(undefined4 *)(in_ECX + 0x568) = *(undefined4 *)(param_1 + 0x568);
  *(undefined4 *)(in_ECX + 0x56c) = *(undefined4 *)(param_1 + 0x56c);
  *(undefined4 *)(in_ECX + 0x570) = *(undefined4 *)(param_1 + 0x570);
  *(undefined4 *)(in_ECX + 0x574) = *(undefined4 *)(param_1 + 0x574);
  pUVar3 = param_1 + 0x578;
  pUVar4 = in_ECX + 0x578;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar3;
    pUVar3 = pUVar3 + 4;
    pUVar4 = pUVar4 + 4;
  }
  *(uint *)(in_ECX + 0x5ac) =
       *(uint *)(in_ECX + 0x5ac) ^ (*(uint *)(in_ECX + 0x5ac) ^ *(uint *)(param_1 + 0x5ac)) & 1;
  *(uint *)(in_ECX + 0x5ac) =
       (*(uint *)(param_1 + 0x5ac) ^ *(uint *)(in_ECX + 0x5ac)) & 2 ^ *(uint *)(in_ECX + 0x5ac);
  ExceptionList = local_c;
  return;
}


// ==== 103e8320 FUN_103e8320

void FUN_103e8320(byte param_1)

{
  URibbonEmitter *in_ECX;
  
  URibbonEmitter::~URibbonEmitter(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x5b0);
  }
  return;
}


// ==== 103e8350 FUN_103e8350

URibbonEmitter * FUN_103e8350(byte param_1)

{
  URibbonEmitter *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x5b0,*(int *)(in_ECX + -4),URibbonEmitter::~URibbonEmitter);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  URibbonEmitter::~URibbonEmitter(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x5b0);
  }
  return in_ECX;
}


// ==== 103e83d0 FUN_103e83d0

void FUN_103e83d0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10808e28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UMeshEmitter::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UParticleEmitter::~UParticleEmitter((UParticleEmitter *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103e8440 FUN_103e8440

void FUN_103e8440(void)

{
  UParticleEmitter *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808e48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UParticleEmitter::UParticleEmitter(in_ECX);
  *(undefined ***)in_ECX = UMeshEmitter::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103e84a0 FUN_103e84a0

void FUN_103e84a0(UParticleEmitter *param_1)

{
  uint uVar1;
  UParticleEmitter *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10808e68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UParticleEmitter::UParticleEmitter(in_ECX,param_1);
  *(undefined ***)in_ECX = UMeshEmitter::vftable;
  *(undefined4 *)(in_ECX + 0x4d0) = *(undefined4 *)(param_1 + 0x4d0);
  *(uint *)(in_ECX + 0x4d4) =
       *(uint *)(in_ECX + 0x4d4) ^ (*(uint *)(in_ECX + 0x4d4) ^ *(uint *)(param_1 + 0x4d4)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x4d4) ^ *(uint *)(in_ECX + 0x4d4)) & 2 ^ *(uint *)(in_ECX + 0x4d4);
  *(uint *)(in_ECX + 0x4d4) = uVar1;
  *(uint *)(in_ECX + 0x4d4) = (*(uint *)(param_1 + 0x4d4) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x4d8) = *(undefined4 *)(param_1 + 0x4d8);
  *(undefined4 *)(in_ECX + 0x4dc) = *(undefined4 *)(param_1 + 0x4dc);
  *(undefined4 *)(in_ECX + 0x4e0) = *(undefined4 *)(param_1 + 0x4e0);
  ExceptionList = local_c;
  return;
}


// ==== 103e8590 FUN_103e8590

void FUN_103e8590(byte param_1)

{
  UMeshEmitter *in_ECX;
  
  UMeshEmitter::~UMeshEmitter(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4e4);
  }
  return;
}


// ==== 103e85c0 FUN_103e85c0

UMeshEmitter * FUN_103e85c0(byte param_1)

{
  UMeshEmitter *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x4e4,*(int *)(in_ECX + -4),UMeshEmitter::~UMeshEmitter);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UMeshEmitter::~UMeshEmitter(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4e4);
  }
  return in_ECX;
}


// ==== 103e8640 FUN_103e8640

void FUN_103e8640(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10808f0c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UBeamEmitter::vftable;
  local_4 = 6;
  UObject::ConditionalDestroy(in_ECX);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 5;
  thunk_FUN_10326630();
  local_4._0_1_ = 4;
  thunk_FUN_1038fad0();
  local_4._0_1_ = 3;
  thunk_FUN_10395ae0();
  local_4._0_1_ = 2;
  thunk_FUN_10395a00();
  local_4._0_1_ = 1;
  thunk_FUN_10395a00();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10395920();
  local_4 = 0xffffffff;
  UParticleEmitter::~UParticleEmitter((UParticleEmitter *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103e8770 FUN_103e8770

void FUN_103e8770(void)

{
  UParticleEmitter *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10809002;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UParticleEmitter::UParticleEmitter(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UBeamEmitter::vftable;
  FRange::FRange((FRange *)(in_ECX + 0x4d0));
  FArray::FArray((FArray *)(in_ECX + 0x4d8),0);
  local_4._0_1_ = 3;
  FRangeVector::FRangeVector((FRangeVector *)(in_ECX + 0x4f8));
  FRangeVector::FRangeVector((FRangeVector *)(in_ECX + 0x514));
  FArray::FArray((FArray *)(in_ECX + 0x530),0);
  local_4._0_1_ = 6;
  FArray::FArray((FArray *)(in_ECX + 0x53c),0);
  local_4._0_1_ = 9;
  FRangeVector::FRangeVector((FRangeVector *)(in_ECX + 0x554));
  FRange::FRange((FRange *)(in_ECX + 0x56c));
  FRange::FRange((FRange *)(in_ECX + 0x574));
  FRange::FRange((FRange *)(in_ECX + 0x580));
  FRange::FRange((FRange *)(in_ECX + 0x588));
  FRange::FRange((FRange *)(in_ECX + 0x594));
  FArray::FArray((FArray *)(in_ECX + 0x5b4),0);
  local_4._0_1_ = 0xc;
  FArray::FArray((FArray *)(in_ECX + 0x5c0),0);
  local_4 = CONCAT31(local_4._1_3_,0xf);
  FArray::FArray((FArray *)(in_ECX + 0x5cc),0);
  ExceptionList = local_c;
  return;
}


// ==== 103e8900 FUN_103e8900

void FUN_103e8900(UParticleEmitter *param_1)

{
  uint uVar1;
  UParticleEmitter *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108090cc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UParticleEmitter::UParticleEmitter(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UBeamEmitter::vftable;
  *(undefined4 *)(in_ECX + 0x4d0) = *(undefined4 *)(param_1 + 0x4d0);
  *(undefined4 *)(in_ECX + 0x4d4) = *(undefined4 *)(param_1 + 0x4d4);
  thunk_FUN_1037dc70(param_1 + 0x4d8);
  local_4._0_1_ = 2;
  in_ECX[0x4e4] = param_1[0x4e4];
  *(undefined4 *)(in_ECX + 0x4e8) = *(undefined4 *)(param_1 + 0x4e8);
  *(undefined4 *)(in_ECX + 0x4ec) = *(undefined4 *)(param_1 + 0x4ec);
  *(undefined4 *)(in_ECX + 0x4f0) = *(undefined4 *)(param_1 + 0x4f0);
  *(uint *)(in_ECX + 0x4f4) =
       *(uint *)(in_ECX + 0x4f4) ^ (*(uint *)(param_1 + 0x4f4) ^ *(uint *)(in_ECX + 0x4f4)) & 1;
  *(undefined4 *)(in_ECX + 0x4f8) = *(undefined4 *)(param_1 + 0x4f8);
  *(undefined4 *)(in_ECX + 0x4fc) = *(undefined4 *)(param_1 + 0x4fc);
  *(undefined4 *)(in_ECX + 0x500) = *(undefined4 *)(param_1 + 0x500);
  *(undefined4 *)(in_ECX + 0x504) = *(undefined4 *)(param_1 + 0x504);
  *(undefined4 *)(in_ECX + 0x508) = *(undefined4 *)(param_1 + 0x508);
  *(undefined4 *)(in_ECX + 0x50c) = *(undefined4 *)(param_1 + 0x50c);
  *(undefined4 *)(in_ECX + 0x510) = *(undefined4 *)(param_1 + 0x510);
  *(undefined4 *)(in_ECX + 0x514) = *(undefined4 *)(param_1 + 0x514);
  *(undefined4 *)(in_ECX + 0x518) = *(undefined4 *)(param_1 + 0x518);
  *(undefined4 *)(in_ECX + 0x51c) = *(undefined4 *)(param_1 + 0x51c);
  *(undefined4 *)(in_ECX + 0x520) = *(undefined4 *)(param_1 + 0x520);
  *(undefined4 *)(in_ECX + 0x524) = *(undefined4 *)(param_1 + 0x524);
  *(undefined4 *)(in_ECX + 0x528) = *(undefined4 *)(param_1 + 0x528);
  *(undefined4 *)(in_ECX + 0x52c) = *(undefined4 *)(param_1 + 0x52c);
  thunk_FUN_1037dd60(param_1 + 0x530);
  local_4._0_1_ = 4;
  thunk_FUN_1037dd60(param_1 + 0x53c);
  local_4._0_1_ = 6;
  *(undefined4 *)(in_ECX + 0x548) = *(undefined4 *)(param_1 + 0x548);
  *(undefined4 *)(in_ECX + 0x54c) = *(undefined4 *)(param_1 + 0x54c);
  *(uint *)(in_ECX + 0x550) =
       *(uint *)(in_ECX + 0x550) ^ (*(uint *)(in_ECX + 0x550) ^ *(uint *)(param_1 + 0x550)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x550) ^ *(uint *)(in_ECX + 0x550)) & 2 ^ *(uint *)(in_ECX + 0x550);
  *(uint *)(in_ECX + 0x550) = uVar1;
  *(uint *)(in_ECX + 0x550) = (*(uint *)(param_1 + 0x550) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x554) = *(undefined4 *)(param_1 + 0x554);
  *(undefined4 *)(in_ECX + 0x558) = *(undefined4 *)(param_1 + 0x558);
  *(undefined4 *)(in_ECX + 0x55c) = *(undefined4 *)(param_1 + 0x55c);
  *(undefined4 *)(in_ECX + 0x560) = *(undefined4 *)(param_1 + 0x560);
  *(undefined4 *)(in_ECX + 0x564) = *(undefined4 *)(param_1 + 0x564);
  *(undefined4 *)(in_ECX + 0x568) = *(undefined4 *)(param_1 + 0x568);
  *(undefined4 *)(in_ECX + 0x56c) = *(undefined4 *)(param_1 + 0x56c);
  *(undefined4 *)(in_ECX + 0x570) = *(undefined4 *)(param_1 + 0x570);
  *(undefined4 *)(in_ECX + 0x574) = *(undefined4 *)(param_1 + 0x574);
  *(undefined4 *)(in_ECX + 0x578) = *(undefined4 *)(param_1 + 0x578);
  *(uint *)(in_ECX + 0x57c) =
       *(uint *)(in_ECX + 0x57c) ^ (*(uint *)(param_1 + 0x57c) ^ *(uint *)(in_ECX + 0x57c)) & 1;
  *(undefined4 *)(in_ECX + 0x580) = *(undefined4 *)(param_1 + 0x580);
  *(undefined4 *)(in_ECX + 0x584) = *(undefined4 *)(param_1 + 0x584);
  *(undefined4 *)(in_ECX + 0x588) = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(in_ECX + 0x58c) = *(undefined4 *)(param_1 + 0x58c);
  *(undefined4 *)(in_ECX + 0x590) = *(undefined4 *)(param_1 + 0x590);
  *(undefined4 *)(in_ECX + 0x594) = *(undefined4 *)(param_1 + 0x594);
  *(undefined4 *)(in_ECX + 0x598) = *(undefined4 *)(param_1 + 0x598);
  *(uint *)(in_ECX + 0x59c) =
       *(uint *)(in_ECX + 0x59c) ^ (*(uint *)(param_1 + 0x59c) ^ *(uint *)(in_ECX + 0x59c)) & 1;
  *(undefined4 *)(in_ECX + 0x5a0) = *(undefined4 *)(param_1 + 0x5a0);
  *(undefined4 *)(in_ECX + 0x5a4) = *(undefined4 *)(param_1 + 0x5a4);
  *(undefined4 *)(in_ECX + 0x5a8) = *(undefined4 *)(param_1 + 0x5a8);
  *(undefined4 *)(in_ECX + 0x5ac) = *(undefined4 *)(param_1 + 0x5ac);
  *(undefined4 *)(in_ECX + 0x5b0) = *(undefined4 *)(param_1 + 0x5b0);
  thunk_FUN_1037de30(param_1 + 0x5b4);
  local_4._0_1_ = 8;
  thunk_FUN_103794b0(param_1 + 0x5c0);
  local_4 = CONCAT31(local_4._1_3_,10);
  thunk_FUN_1032bef0(param_1 + 0x5cc);
  *(undefined4 *)(in_ECX + 0x5d8) = *(undefined4 *)(param_1 + 0x5d8);
  ExceptionList = local_c;
  return;
}


// ==== 103e8d80 FUN_103e8d80

void FUN_103e8d80(byte param_1)

{
  UBeamEmitter *in_ECX;
  
  UBeamEmitter::~UBeamEmitter(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x5dc);
  }
  return;
}


// ==== 103e8db0 FUN_103e8db0

UBeamEmitter * FUN_103e8db0(byte param_1)

{
  UBeamEmitter *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x5dc,*(int *)(in_ECX + -4),UBeamEmitter::~UBeamEmitter);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UBeamEmitter::~UBeamEmitter(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x5dc);
  }
  return in_ECX;
}


// ==== 103e8e30 FUN_103e8e30

void FUN_103e8e30(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_1080911e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UTerrainMaterial::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10395bc0();
  local_4 = 0xffffffff;
  URenderedMaterial::~URenderedMaterial((URenderedMaterial *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103e8ec0 FUN_103e8ec0

void FUN_103e8ec0(void)

{
  UMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080916f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMaterial::UMaterial(in_ECX);
  *(undefined ***)in_ECX = URenderedMaterial::vftable;
  local_4 = 1;
  *(undefined ***)in_ECX = UTerrainMaterial::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x578),0);
  ExceptionList = local_c;
  return;
}


// ==== 103e8f50 FUN_103e8f50

void FUN_103e8f50(URenderedMaterial *param_1)

{
  URenderedMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108091ae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  URenderedMaterial::URenderedMaterial(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UTerrainMaterial::vftable;
  thunk_FUN_1037df00(param_1 + 0x578);
  in_ECX[0x584] = param_1[0x584];
  *(uint *)(in_ECX + 0x588) =
       *(uint *)(in_ECX + 0x588) ^ (*(uint *)(param_1 + 0x588) ^ *(uint *)(in_ECX + 0x588)) & 1;
  ExceptionList = local_c;
  return;
}


// ==== 103e9010 FUN_103e9010

void FUN_103e9010(byte param_1)

{
  UTerrainMaterial *in_ECX;
  
  UTerrainMaterial::~UTerrainMaterial(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x58c);
  }
  return;
}


// ==== 103e9040 FUN_103e9040

UTerrainMaterial * FUN_103e9040(byte param_1)

{
  UTerrainMaterial *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x58c,*(int *)(in_ECX + -4),UTerrainMaterial::~UTerrainMaterial);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTerrainMaterial::~UTerrainMaterial(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x58c);
  }
  return in_ECX;
}


// ==== 103e90c0 FUN_103e90c0

void FUN_103e90c0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_108091ee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UMaterialSequence::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_10395c50();
  local_4 = 0xffffffff;
  UModifier::~UModifier((UModifier *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103e9150 FUN_103e9150

void FUN_103e9150(void)

{
  UMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080923f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMaterial::UMaterial(in_ECX);
  *(undefined ***)in_ECX = UModifier::vftable;
  local_4 = 1;
  *(undefined ***)in_ECX = UMaterialSequence::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x57c),0);
  ExceptionList = local_c;
  return;
}


// ==== 103e91e0 FUN_103e91e0

void FUN_103e91e0(UModifier *param_1)

{
  UModifier *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080927e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UModifier::UModifier(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UMaterialSequence::vftable;
  thunk_FUN_1037dfe0(param_1 + 0x57c);
  in_ECX[0x588] = param_1[0x588];
  *(uint *)(in_ECX + 0x58c) =
       *(uint *)(in_ECX + 0x58c) ^ (*(uint *)(in_ECX + 0x58c) ^ *(uint *)(param_1 + 0x58c)) & 1;
  *(uint *)(in_ECX + 0x58c) =
       (*(uint *)(param_1 + 0x58c) ^ *(uint *)(in_ECX + 0x58c)) & 2 ^ *(uint *)(in_ECX + 0x58c);
  *(undefined4 *)(in_ECX + 0x590) = *(undefined4 *)(param_1 + 0x590);
  *(undefined4 *)(in_ECX + 0x594) = *(undefined4 *)(param_1 + 0x594);
  *(undefined4 *)(in_ECX + 0x598) = *(undefined4 *)(param_1 + 0x598);
  ExceptionList = local_c;
  return;
}


// ==== 103e92e0 FUN_103e92e0

void FUN_103e92e0(byte param_1)

{
  UMaterialSequence *in_ECX;
  
  UMaterialSequence::~UMaterialSequence(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x59c);
  }
  return;
}


// ==== 103e9310 FUN_103e9310

UMaterialSequence * FUN_103e9310(byte param_1)

{
  UMaterialSequence *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x59c,*(int *)(in_ECX + -4),UMaterialSequence::~UMaterialSequence);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UMaterialSequence::~UMaterialSequence(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x59c);
  }
  return in_ECX;
}


// ==== 103e9390 FUN_103e9390

void FUN_103e9390(void)

{
  UMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108092cf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMaterial::UMaterial(in_ECX);
  *(undefined ***)in_ECX = UModifier::vftable;
  local_4 = 1;
  *(undefined ***)in_ECX = UMaterialSwitch::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x580),0);
  ExceptionList = local_c;
  return;
}


// ==== 103e9420 FUN_103e9420

void FUN_103e9420(UMaterial *param_1)

{
  UMaterial *in_ECX;
  
  UMaterial::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x578) = *(undefined4 *)(param_1 + 0x578);
  *(undefined4 *)(in_ECX + 0x57c) = *(undefined4 *)(param_1 + 0x57c);
  thunk_FUN_103932e0(param_1 + 0x580);
  return;
}


// ==== 103e9470 FUN_103e9470

void FUN_103e9470(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10809345;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UMatObject::vftable;
  local_4 = 1;
  *(undefined ***)in_ECX = UMatAction::vftable;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x38));
  local_4._0_1_ = 2;
  FArray::FArray((FArray *)(in_ECX + 0x48),0);
  local_4 = CONCAT31(local_4._1_3_,5);
  FArray::FArray((FArray *)(in_ECX + 0x7c),0);
  ExceptionList = local_c;
  return;
}


// ==== 103e9520 FUN_103e9520

void FUN_103e9520(void)

{
  UMatAction *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10809378;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMatAction::UMatAction(in_ECX);
  *(undefined ***)in_ECX = UActionWarp::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103e9580 FUN_103e9580

void FUN_103e9580(void)

{
  UMatAction *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10809398;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMatAction::UMatAction(in_ECX);
  *(undefined ***)in_ECX = UActionPause::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103e95e0 FUN_103e95e0

void FUN_103e95e0(void)

{
  UMatAction *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108093b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UMatAction::UMatAction(in_ECX);
  *(undefined ***)in_ECX = UActionMoveCamera::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103e9640 FUN_103e9640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9640(FString *param_1,undefined4 param_2)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uStack_3c;
  FString *pFStack_38;
  FString local_28 [8];
  void *pvStack_20;
  undefined4 local_1c;
  int local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108093f1;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  thunk_FUN_103a6ff0();
  local_4 = CONCAT31(local_4._1_3_,1);
  pFStack_38 = (FString *)0x103e9681;
  FString::operator=(local_28,param_1);
  local_1c = param_2;
  pFStack_38 = (FString *)0x103e9697;
  thunk_FUN_1032cfe0();
  iVar1 = *in_ECX;
  pFStack_38 = local_28;
  uStack_3c = 0;
  uVar3 = _ENGINE_Process_Message;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3);
  local_18._0_1_ = 2;
  thunk_FUN_1032cf20();
  local_18 = (uint)local_18._1_3_ << 8;
  FString::~FString((FString *)&uStack_3c);
  local_18 = 0xffffffff;
  thunk_FUN_1032cf20();
  ExceptionList = pvStack_20;
  return;
}


// ==== 103e9730 FUN_103e9730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9730(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  void *unaff_ESI;
  undefined4 in_stack_00000010;
  undefined4 uVar3;
  undefined4 uVar4;
  FArray *pFVar5;
  undefined4 uVar6;
  FArray local_1c [4];
  uint uStack_18;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10809439;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FArray::FArray(local_1c);
  local_4 = CONCAT31(local_4._1_3_,3);
  thunk_FUN_1032cfe0(&stack0x00000004);
  local_10 = in_stack_00000010;
  iVar1 = *in_ECX;
  uVar6 = 0;
  pFVar5 = local_1c;
  uVar4 = 0;
  uVar3 = _ENGINE_Process_Tick;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,pFVar5,uVar6);
  uStack_18 = uStack_18 & 0xffffff00;
  thunk_FUN_1032cf20();
  uStack_18 = 0xffffffff;
  thunk_FUN_1032cf20();
  ExceptionList = unaff_ESI;
  return;
}


// ==== 103e9800 FUN_103e9800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9800(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  void *unaff_ESI;
  undefined4 in_stack_00000010;
  undefined4 uVar3;
  undefined4 uVar4;
  FArray *pFVar5;
  undefined4 uVar6;
  FArray local_1c [4];
  uint uStack_18;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10809479;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FArray::FArray(local_1c);
  local_4 = CONCAT31(local_4._1_3_,3);
  thunk_FUN_1032cfe0(&stack0x00000004);
  iVar1 = *in_ECX;
  uVar6 = 0;
  pFVar5 = local_1c;
  uVar4 = 0;
  local_10 = in_stack_00000010;
  uVar3 = _ENGINE_Process_PostRender;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,pFVar5,uVar6);
  uStack_18 = uStack_18 & 0xffffff00;
  thunk_FUN_1032cf20();
  uStack_18 = 0xffffffff;
  thunk_FUN_1032cf20();
  ExceptionList = unaff_ESI;
  return;
}


// ==== 103e98d0 FUN_103e98d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e98d0(void)

{
  int iVar1;
  UFunction *pUVar2;
  int *in_ECX;
  void *unaff_ESI;
  undefined4 in_stack_00000010;
  undefined4 uVar3;
  undefined4 uVar4;
  FArray *pFVar5;
  undefined4 uVar6;
  FArray local_1c [4];
  uint uStack_18;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108094b9;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FArray::FArray(local_1c);
  local_4 = CONCAT31(local_4._1_3_,3);
  thunk_FUN_1032cfe0(&stack0x00000004);
  iVar1 = *in_ECX;
  uVar6 = 0;
  pFVar5 = local_1c;
  uVar4 = 0;
  local_10 = in_stack_00000010;
  uVar3 = _ENGINE_Process_PreRender;
  pUVar2 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar2,uVar3,uVar4,pFVar5,uVar6);
  uStack_18 = uStack_18 & 0xffffff00;
  thunk_FUN_1032cf20();
  uStack_18 = 0xffffffff;
  thunk_FUN_1032cf20();
  ExceptionList = unaff_ESI;
  return;
}


// ==== 103e99a0 FUN_103e99a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103e99a0(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  UFunction *pUVar4;
  int *in_ECX;
  undefined4 unaff_EBP;
  undefined1 *in_stack_00000010;
  undefined1 *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_24;
  void *pvStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_108094f9;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FArray::FArray((FArray *)&local_24);
  local_4 = CONCAT31(local_4._1_3_,3);
  local_10 = 0;
  thunk_FUN_1032cfe0(&stack0x00000004);
  puVar3 = in_stack_00000014;
  puVar2 = in_stack_00000010;
  local_14 = in_stack_00000018;
  iVar1 = *in_ECX;
  uVar8 = 0;
  puVar7 = &local_24;
  uVar6 = 0;
  local_18._0_2_ = CONCAT11(*in_stack_00000014,*in_stack_00000010);
  uVar5 = _ENGINE_Process_KeyEvent;
  pUVar4 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar4,uVar5,uVar6,puVar7,uVar8);
  *puVar2 = (char)unaff_EBP;
  *puVar3 = (char)((uint)unaff_EBP >> 8);
  local_18 = local_18 & 0xffffff00;
  thunk_FUN_1032cf20();
  local_18 = 0xffffffff;
  thunk_FUN_1032cf20();
  ExceptionList = pvStack_20;
  return local_24;
}


// ==== 103e9aa0 FUN_103e9aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103e9aa0(void)

{
  int iVar1;
  undefined1 *puVar2;
  UFunction *pUVar3;
  int *in_ECX;
  undefined1 unaff_SI;
  undefined1 *in_stack_00000010;
  FString *in_stack_00000014;
  undefined4 uVar4;
  undefined4 uVar5;
  FArray *pFVar6;
  undefined4 uVar7;
  FArray local_2c [8];
  undefined4 uStack_24;
  void *local_20;
  FString local_1c [4];
  int iStack_18;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080954b;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FArray::FArray(local_2c);
  local_4._0_1_ = 2;
  FString::FString(local_1c);
  local_4 = CONCAT31(local_4._1_3_,4);
  local_10 = 0;
  thunk_FUN_1032cfe0(&stack0x00000004);
  puVar2 = in_stack_00000010;
  local_20 = (void *)CONCAT31(local_20._1_3_,*in_stack_00000010);
  FString::operator=(local_1c,in_stack_00000014);
  iVar1 = *in_ECX;
  uVar7 = 0;
  pFVar6 = local_2c;
  uVar5 = 0;
  uVar4 = _ENGINE_Process_KeyType;
  pUVar3 = UObject::FindFunctionChecked();
  (**(code **)(iVar1 + 0x10))(pUVar3,uVar4,uVar5,pFVar6,uVar7);
  *puVar2 = unaff_SI;
  iStack_18._0_1_ = 5;
  FString::~FString((FString *)&stack0xffffffd0);
  iStack_18 = (uint)iStack_18._1_3_ << 8;
  thunk_FUN_1032cf20();
  iStack_18 = 0xffffffff;
  thunk_FUN_1032cf20();
  ExceptionList = local_20;
  return uStack_24;
}


// ==== 103e9bc0 FUN_103e9bc0

void FUN_103e9bc0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_1080958b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UInteractionMaster::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_1032cf20();
  local_4 = 0xffffffff;
  UInteractions::~UInteractions((UInteractions *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103e9c50 FUN_103e9c50

void FUN_103e9c50(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108095cd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = UInteractions::vftable;
  local_4 = 1;
  *(undefined ***)in_ECX = UInteractionMaster::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x40),0);
  ExceptionList = local_c;
  return;
}


// ==== 103e9ce0 FUN_103e9ce0

void FUN_103e9ce0(UInteractions *param_1)

{
  UInteractions *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080960b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UInteractions::UInteractions(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UInteractionMaster::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  thunk_FUN_1032c030(param_1 + 0x40);
  *(uint *)(in_ECX + 0x4c) =
       *(uint *)(in_ECX + 0x4c) ^ (*(uint *)(param_1 + 0x4c) ^ *(uint *)(in_ECX + 0x4c)) & 1;
  ExceptionList = local_c;
  return;
}


// ==== 103e9d90 FUN_103e9d90

void FUN_103e9d90(byte param_1)

{
  UInteractionMaster *in_ECX;
  
  UInteractionMaster::~UInteractionMaster(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x50);
  }
  return;
}


// ==== 103e9dc0 FUN_103e9dc0

UInteractionMaster * FUN_103e9dc0(byte param_1)

{
  UInteractionMaster *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x50,*(int *)(in_ECX + -4),UInteractionMaster::~UInteractionMaster);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UInteractionMaster::~UInteractionMaster(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x50);
  }
  return in_ECX;
}


// ==== 103e9e40 FUN_103e9e40

void FUN_103e9e40(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10809675;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UL2NTimeLight::vftable;
  local_4 = 4;
  UObject::ConditionalDestroy(in_ECX);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 3;
  thunk_FUN_10395d80();
  local_4._0_1_ = 2;
  thunk_FUN_10395d80();
  local_4._0_1_ = 1;
  thunk_FUN_10395d80();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10395d80();
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103e9f20 FUN_103e9f20

void FUN_103e9f20(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10809719;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UL2NTimeLight::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x38),0);
  local_4._0_1_ = 3;
  FArray::FArray((FArray *)(in_ECX + 0x44),0);
  local_4._0_1_ = 6;
  FArray::FArray((FArray *)(in_ECX + 0x50),0);
  local_4 = CONCAT31(local_4._1_3_,9);
  FArray::FArray((FArray *)(in_ECX + 0x5c),0);
  ExceptionList = local_c;
  return;
}


// ==== 103e9fe0 FUN_103e9fe0

void FUN_103e9fe0(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_108097a5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UL2NTimeLight::vftable;
  *(uint *)(in_ECX + 0x34) =
       *(uint *)(in_ECX + 0x34) ^ (*(uint *)(param_1 + 0x34) ^ *(uint *)(in_ECX + 0x34)) & 1;
  thunk_FUN_1037e0b0(param_1 + 0x38);
  local_4._0_1_ = 2;
  thunk_FUN_1037e0b0(param_1 + 0x44);
  local_4._0_1_ = 4;
  thunk_FUN_1037e0b0(param_1 + 0x50);
  local_4 = CONCAT31(local_4._1_3_,6);
  thunk_FUN_1037e0b0(param_1 + 0x5c);
  ExceptionList = local_c;
  return;
}


// ==== 103ea0c0 FUN_103ea0c0

void FUN_103ea0c0(byte param_1)

{
  UL2NTimeLight *in_ECX;
  
  UL2NTimeLight::~UL2NTimeLight(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x68);
  }
  return;
}


// ==== 103ea0f0 FUN_103ea0f0

UL2NTimeLight * FUN_103ea0f0(byte param_1)

{
  UL2NTimeLight *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x68,*(int *)(in_ECX + -4),UL2NTimeLight::~UL2NTimeLight)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UL2NTimeLight::~UL2NTimeLight(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x68);
  }
  return in_ECX;
}


// ==== 103ea170 FUN_103ea170

void FUN_103ea170(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10809906;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UL2NEnvLight::vftable;
  local_4 = 0xe;
  UObject::ConditionalDestroy(in_ECX);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 0xd;
  thunk_FUN_10395f40();
  local_4._0_1_ = 0xc;
  thunk_FUN_10395f40();
  local_4._0_1_ = 0xb;
  thunk_FUN_10395e60();
  local_4._0_1_ = 10;
  thunk_FUN_10395e60();
  local_4._0_1_ = 9;
  thunk_FUN_10395e60();
  local_4._0_1_ = 8;
  thunk_FUN_10395e60();
  local_4._0_1_ = 7;
  thunk_FUN_10395e60();
  local_4._0_1_ = 6;
  thunk_FUN_10395e60();
  local_4._0_1_ = 5;
  thunk_FUN_10395e60();
  local_4._0_1_ = 4;
  thunk_FUN_10395e60();
  local_4._0_1_ = 3;
  thunk_FUN_10325f90();
  local_4._0_1_ = 2;
  thunk_FUN_10395e60();
  local_4._0_1_ = 1;
  thunk_FUN_10325f90();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10395e60();
  local_4 = 0xffffffff;
  UL2NTimeLight::~UL2NTimeLight((UL2NTimeLight *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103ea390 FUN_103ea390

void FUN_103ea390(void)

{
  UL2NTimeLight *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10809b14;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UL2NTimeLight::UL2NTimeLight(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UL2NEnvLight::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x68),0);
  local_4._0_1_ = 3;
  FArray::FArray((FArray *)(in_ECX + 0x74),0);
  local_4._0_1_ = 6;
  FArray::FArray((FArray *)(in_ECX + 0x80),0);
  local_4._0_1_ = 9;
  FArray::FArray((FArray *)(in_ECX + 0x8c),0);
  local_4._0_1_ = 0xc;
  FArray::FArray((FArray *)(in_ECX + 0x98),0);
  local_4._0_1_ = 0xf;
  FArray::FArray((FArray *)(in_ECX + 0xa4),0);
  local_4._0_1_ = 0x12;
  FArray::FArray((FArray *)(in_ECX + 0xb0),0);
  local_4._0_1_ = 0x15;
  FArray::FArray((FArray *)(in_ECX + 0xbc),0);
  local_4._0_1_ = 0x18;
  FArray::FArray((FArray *)(in_ECX + 200),0);
  local_4._0_1_ = 0x1b;
  FArray::FArray((FArray *)(in_ECX + 0xd4),0);
  local_4._0_1_ = 0x1e;
  FArray::FArray((FArray *)(in_ECX + 0xe0),0);
  local_4._0_1_ = 0x21;
  FArray::FArray((FArray *)(in_ECX + 0xec),0);
  local_4._0_1_ = 0x24;
  FArray::FArray((FArray *)(in_ECX + 0xf8),0);
  local_4 = CONCAT31(local_4._1_3_,0x27);
  FArray::FArray((FArray *)(in_ECX + 0x104),0);
  ExceptionList = local_c;
  return;
}


// ==== 103ea580 FUN_103ea580

void FUN_103ea580(UL2NTimeLight *param_1)

{
  UL2NTimeLight *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10809cc6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UL2NTimeLight::UL2NTimeLight(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UL2NEnvLight::vftable;
  thunk_FUN_1037e180(param_1 + 0x68);
  local_4._0_1_ = 2;
  thunk_FUN_1032bc20(param_1 + 0x74);
  local_4._0_1_ = 4;
  thunk_FUN_1037e180(param_1 + 0x80);
  local_4._0_1_ = 6;
  thunk_FUN_1032bc20(param_1 + 0x8c);
  local_4._0_1_ = 8;
  thunk_FUN_1037e180(param_1 + 0x98);
  local_4._0_1_ = 10;
  thunk_FUN_1037e180(param_1 + 0xa4);
  local_4._0_1_ = 0xc;
  thunk_FUN_1037e180(param_1 + 0xb0);
  local_4._0_1_ = 0xe;
  thunk_FUN_1037e180(param_1 + 0xbc);
  local_4._0_1_ = 0x10;
  thunk_FUN_1037e180(param_1 + 200);
  local_4._0_1_ = 0x12;
  thunk_FUN_1037e180(param_1 + 0xd4);
  local_4._0_1_ = 0x14;
  thunk_FUN_1037e180(param_1 + 0xe0);
  local_4._0_1_ = 0x16;
  thunk_FUN_1037e180(param_1 + 0xec);
  local_4._0_1_ = 0x18;
  thunk_FUN_1037e240(param_1 + 0xf8);
  local_4 = CONCAT31(local_4._1_3_,0x1a);
  thunk_FUN_1037e240(param_1 + 0x104);
  *(undefined4 *)(in_ECX + 0x110) = *(undefined4 *)(param_1 + 0x110);
  ExceptionList = local_c;
  return;
}


// ==== 103ea7c0 FUN_103ea7c0

void FUN_103ea7c0(byte param_1)

{
  UL2NEnvLight *in_ECX;
  
  UL2NEnvLight::~UL2NEnvLight(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x114);
  }
  return;
}


// ==== 103ea7f0 FUN_103ea7f0

UL2NEnvLight * FUN_103ea7f0(byte param_1)

{
  UL2NEnvLight *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x114,*(int *)(in_ECX + -4),UL2NEnvLight::~UL2NEnvLight);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UL2NEnvLight::~UL2NEnvLight(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x114);
  }
  return in_ECX;
}


// ==== 103ea870 FUN_103ea870

void FUN_103ea870(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10809d88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = USkillVisualEffect::vftable;
  local_4 = 5;
  UObject::ConditionalDestroy(in_ECX);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 4;
  thunk_FUN_10396020();
  local_4._0_1_ = 3;
  thunk_FUN_10396020();
  local_4._0_1_ = 2;
  thunk_FUN_10396020();
  local_4._0_1_ = 1;
  thunk_FUN_10396020();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10396020();
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103ea970 FUN_103ea970

void FUN_103ea970(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10809e45;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = USkillVisualEffect::vftable;
  FName::FName((FName *)(in_ECX + 0x34));
  FArray::FArray((FArray *)(in_ECX + 0x38),0);
  local_4._0_1_ = 3;
  FArray::FArray((FArray *)(in_ECX + 0x44),0);
  local_4._0_1_ = 6;
  FArray::FArray((FArray *)(in_ECX + 0x50),0);
  local_4._0_1_ = 9;
  FArray::FArray((FArray *)(in_ECX + 0x5c),0);
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FArray::FArray((FArray *)(in_ECX + 0x68),0);
  ExceptionList = local_c;
  return;
}


// ==== 103eaa60 FUN_103eaa60

void FUN_103eaa60(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10809ee8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = USkillVisualEffect::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  thunk_FUN_1037e300(param_1 + 0x38);
  local_4._0_1_ = 2;
  thunk_FUN_1037e300(param_1 + 0x44);
  local_4._0_1_ = 4;
  thunk_FUN_1037e300(param_1 + 0x50);
  local_4._0_1_ = 6;
  thunk_FUN_1037e300(param_1 + 0x5c);
  local_4 = CONCAT31(local_4._1_3_,8);
  thunk_FUN_1037e300(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  ExceptionList = local_c;
  return;
}


// ==== 103eab60 FUN_103eab60

void FUN_103eab60(byte param_1)

{
  USkillVisualEffect *in_ECX;
  
  USkillVisualEffect::~USkillVisualEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x78);
  }
  return;
}


// ==== 103eab90 FUN_103eab90

USkillVisualEffect * FUN_103eab90(byte param_1)

{
  USkillVisualEffect *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x78,*(int *)(in_ECX + -4),USkillVisualEffect::~USkillVisualEffect);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  USkillVisualEffect::~USkillVisualEffect(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x78);
  }
  return in_ECX;
}


// ==== 103eac10 FUN_103eac10

void FUN_103eac10(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10809f62;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)(in_ECX + 0x34) = FNetworkNotify::vftable;
  *(undefined ***)in_ECX = ULevelBase::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = ULevelBase::vftable_for_FNetworkNotify_;
  thunk_FUN_103960e0(in_ECX,0);
  local_4._0_1_ = 1;
  thunk_FUN_103b15c0(in_ECX,0);
  local_4._0_1_ = 2;
  FArray::FArray((FArray *)(in_ECX + 0x58));
  local_4._0_1_ = 4;
  FArray::FArray((FArray *)(in_ECX + 100));
  local_4 = CONCAT31(local_4._1_3_,6);
  FURL::FURL((FURL *)(in_ECX + 0x78),(ushort *)0x0);
  ExceptionList = local_c;
  return;
}


// ==== 103eacf0 FUN_103eacf0

void FUN_103eacf0(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10809fd0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)(in_ECX + 0x34) = FNetworkNotify::vftable;
  *(undefined ***)in_ECX = ULevelBase::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = ULevelBase::vftable_for_FNetworkNotify_;
  thunk_FUN_103a7920(param_1 + 0x38);
  local_4._0_1_ = 1;
  thunk_FUN_103a7990(param_1 + 0x48);
  local_4._0_1_ = 2;
  thunk_FUN_1032bef0(param_1 + 0x58);
  local_4._0_1_ = 3;
  thunk_FUN_1032bef0(param_1 + 100);
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  FURL::FURL((FURL *)(in_ECX + 0x78),(FURL *)(param_1 + 0x78));
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  ExceptionList = local_c;
  return;
}


// ==== 103eae00 FUN_103eae00

void FUN_103eae00(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  thunk_FUN_1039d080(param_1 + 0x38);
  thunk_FUN_1039d160(param_1 + 0x48);
  thunk_FUN_1032bfc0(param_1 + 0x58);
  thunk_FUN_1032bfc0(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  FURL::operator=((FURL *)(in_ECX + 0x78),(FURL *)(param_1 + 0x78));
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  return;
}


// ==== 103eae90 FUN_103eae90

void FUN_103eae90(byte param_1)

{
  ULevelBase *in_ECX;
  
  ULevelBase::~ULevelBase(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0xc0);
  }
  return;
}


// ==== 103eaec0 FUN_103eaec0

void FUN_103eaec0(UPackageCheckInfo *param_1)

{
  if (param_1 != (UPackageCheckInfo *)0x0) {
    UPackageCheckInfo::UPackageCheckInfo(param_1);
    return;
  }
  return;
}


// ==== 103eaee0 FUN_103eaee0

void FUN_103eaee0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080a04d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UL2NEnvManager::vftable;
  local_4 = 6;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 5;
  thunk_FUN_10396ac0();
  local_4._0_1_ = 4;
  thunk_FUN_10396ac0();
  local_4._0_1_ = 3;
  thunk_FUN_10396960();
  local_4._0_1_ = 2;
  thunk_FUN_10396830();
  local_4._0_1_ = 1;
  thunk_FUN_10396830();
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x17c));
  local_4 = 0xffffffff;
  UL2NEnvLight::~UL2NEnvLight((UL2NEnvLight *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103eafc0 FUN_103eafc0

void FUN_103eafc0(UL2NEnvLight *param_1)

{
  UL2NEnvLight *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080a0cd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UL2NEnvLight::UL2NEnvLight(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UL2NEnvManager::vftable;
  *(undefined4 *)(in_ECX + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(in_ECX + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(in_ECX + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined8 *)(in_ECX + 0x134) = *(undefined8 *)(param_1 + 0x134);
  *(undefined8 *)(in_ECX + 0x13c) = *(undefined8 *)(param_1 + 0x13c);
  *(undefined4 *)(in_ECX + 0x144) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(in_ECX + 0x148) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(in_ECX + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(in_ECX + 0x150) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(in_ECX + 0x154) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(in_ECX + 0x158) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(in_ECX + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(in_ECX + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(in_ECX + 0x164) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(in_ECX + 0x168) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(in_ECX + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(in_ECX + 0x170) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(in_ECX + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(in_ECX + 0x178) = *(undefined4 *)(param_1 + 0x178);
  FString::FString((FString *)(in_ECX + 0x17c),(FString *)(param_1 + 0x17c));
  local_4._0_1_ = 1;
  thunk_FUN_1037e950(param_1 + 0x188);
  local_4._0_1_ = 2;
  thunk_FUN_1037e950(param_1 + 0x194);
  local_4._0_1_ = 3;
  thunk_FUN_1037ea00(param_1 + 0x1a0);
  local_4._0_1_ = 4;
  thunk_FUN_1037eae0(param_1 + 0x1ac);
  local_4 = CONCAT31(local_4._1_3_,5);
  thunk_FUN_1037eae0(param_1 + 0x1b8);
  in_ECX[0x1c4] = param_1[0x1c4];
  *(undefined4 *)(in_ECX + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(in_ECX + 0x1cc) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(in_ECX + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(in_ECX + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
  in_ECX[0x1dc] = param_1[0x1dc];
  in_ECX[0x1dd] = param_1[0x1dd];
  *(undefined4 *)(in_ECX + 0x1e0) = *(undefined4 *)(param_1 + 0x1e0);
  in_ECX[0x1e4] = param_1[0x1e4];
  in_ECX[0x1e5] = param_1[0x1e5];
  *(undefined4 *)(in_ECX + 0x1e8) = *(undefined4 *)(param_1 + 0x1e8);
  ExceptionList = local_c;
  return;
}


// ==== 103eb300 FUN_103eb300

void FUN_103eb300(byte param_1)

{
  UL2NEnvManager *in_ECX;
  
  UL2NEnvManager::~UL2NEnvManager(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1ec);
  }
  return;
}


// ==== 103eb330 FUN_103eb330

UL2NEnvManager * FUN_103eb330(byte param_1)

{
  UL2NEnvManager *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x1ec,*(int *)(in_ECX + -4),UL2NEnvManager::~UL2NEnvManager);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UL2NEnvManager::~UL2NEnvManager(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1ec);
  }
  return in_ECX;
}


// ==== 103eb3b0 FUN_103eb3b0

void FUN_103eb3b0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080a180;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UGameEngine::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UGameEngine::vftable_for_FExec_;
  local_4 = 8;
  UObject::ConditionalDestroy(in_ECX);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 7;
  thunk_FUN_10394ad0();
  local_4._0_1_ = 6;
  thunk_FUN_10396ea0();
  local_4._0_1_ = 5;
  thunk_FUN_103962b0();
  local_4._0_1_ = 4;
  thunk_FUN_10396d40();
  local_4._0_1_ = 3;
  thunk_FUN_10396bf0();
  local_4._0_1_ = 2;
  thunk_FUN_1032ce30();
  local_4._0_1_ = 1;
  thunk_FUN_1032ce30();
  local_4 = (uint)local_4._1_3_ << 8;
  FURL::~FURL((FURL *)(in_ECX + 0x1ac));
  local_4 = 0xffffffff;
  UEngine::~UEngine((UEngine *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103eb4f0 FUN_103eb4f0

void FUN_103eb4f0(UEngine *param_1)

{
  UEngine *in_ECX;
  int iVar1;
  UEngine *pUVar2;
  UEngine *pUVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080a240;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UEngine::UEngine(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UGameEngine::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = UGameEngine::vftable_for_FExec_;
  *(undefined4 *)(in_ECX + 0x19c) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(in_ECX + 0x1a0) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(in_ECX + 0x1a4) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(in_ECX + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
  FURL::FURL((FURL *)(in_ECX + 0x1ac),(FURL *)(param_1 + 0x1ac));
  local_4._0_1_ = 1;
  thunk_FUN_1032bd40(param_1 + 0x1f0);
  local_4._0_1_ = 3;
  thunk_FUN_1032bd40(param_1 + 0x1fc);
  local_4._0_1_ = 5;
  thunk_FUN_1037eb90(param_1 + 0x208);
  local_4._0_1_ = 6;
  *(undefined4 *)(in_ECX + 0x214) = *(undefined4 *)(param_1 + 0x214);
  *(undefined4 *)(in_ECX + 0x218) = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(in_ECX + 0x21c) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(in_ECX + 0x220) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(in_ECX + 0x224) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(in_ECX + 0x228) = *(undefined4 *)(param_1 + 0x228);
  *(undefined4 *)(in_ECX + 0x22c) = *(undefined4 *)(param_1 + 0x22c);
  *(undefined4 *)(in_ECX + 0x230) = *(undefined4 *)(param_1 + 0x230);
  *(undefined4 *)(in_ECX + 0x234) = *(undefined4 *)(param_1 + 0x234);
  *(undefined4 *)(in_ECX + 0x238) = *(undefined4 *)(param_1 + 0x238);
  *(undefined4 *)(in_ECX + 0x23c) = *(undefined4 *)(param_1 + 0x23c);
  *(undefined4 *)(in_ECX + 0x240) = *(undefined4 *)(param_1 + 0x240);
  *(undefined4 *)(in_ECX + 0x244) = *(undefined4 *)(param_1 + 0x244);
  *(undefined4 *)(in_ECX + 0x248) = *(undefined4 *)(param_1 + 0x248);
  *(undefined4 *)(in_ECX + 0x24c) = *(undefined4 *)(param_1 + 0x24c);
  *(undefined4 *)(in_ECX + 0x250) = *(undefined4 *)(param_1 + 0x250);
  *(undefined4 *)(in_ECX + 0x254) = *(undefined4 *)(param_1 + 0x254);
  *(undefined4 *)(in_ECX + 600) = *(undefined4 *)(param_1 + 600);
  pUVar2 = param_1 + 0x25c;
  pUVar3 = in_ECX + 0x25c;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x2d4) = *(undefined4 *)(param_1 + 0x2d4);
  thunk_FUN_1037ec40(param_1 + 0x2d8);
  local_4._0_1_ = 7;
  thunk_FUN_1037e550(param_1 + 0x2e4);
  local_4._0_1_ = 8;
  thunk_FUN_1037ed20(param_1 + 0x2f0);
  local_4 = CONCAT31(local_4._1_3_,9);
  *(undefined4 *)(in_ECX + 0x2fc) = *(undefined4 *)(param_1 + 0x2fc);
  *(undefined4 *)(in_ECX + 0x300) = *(undefined4 *)(param_1 + 0x300);
  *(undefined4 *)(in_ECX + 0x304) = *(undefined4 *)(param_1 + 0x304);
  *(undefined4 *)(in_ECX + 0x308) = *(undefined4 *)(param_1 + 0x308);
  *(undefined4 *)(in_ECX + 0x30c) = *(undefined4 *)(param_1 + 0x30c);
  *(undefined4 *)(in_ECX + 0x310) = *(undefined4 *)(param_1 + 0x310);
  *(undefined4 *)(in_ECX + 0x314) = *(undefined4 *)(param_1 + 0x314);
  *(undefined4 *)(in_ECX + 0x318) = *(undefined4 *)(param_1 + 0x318);
  *(undefined4 *)(in_ECX + 0x31c) = *(undefined4 *)(param_1 + 0x31c);
  *(undefined4 *)(in_ECX + 800) = *(undefined4 *)(param_1 + 800);
  *(undefined4 *)(in_ECX + 0x324) = *(undefined4 *)(param_1 + 0x324);
  *(undefined4 *)(in_ECX + 0x328) = *(undefined4 *)(param_1 + 0x328);
  *(undefined4 *)(in_ECX + 0x32c) = *(undefined4 *)(param_1 + 0x32c);
  *(undefined4 *)(in_ECX + 0x330) = *(undefined4 *)(param_1 + 0x330);
  *(undefined4 *)(in_ECX + 0x334) = *(undefined4 *)(param_1 + 0x334);
  *(undefined4 *)(in_ECX + 0x338) = *(undefined4 *)(param_1 + 0x338);
  *(undefined4 *)(in_ECX + 0x33c) = *(undefined4 *)(param_1 + 0x33c);
  *(undefined4 *)(in_ECX + 0x340) = *(undefined4 *)(param_1 + 0x340);
  *(undefined4 *)(in_ECX + 0x344) = *(undefined4 *)(param_1 + 0x344);
  *(undefined4 *)(in_ECX + 0x348) = *(undefined4 *)(param_1 + 0x348);
  *(undefined4 *)(in_ECX + 0x34c) = *(undefined4 *)(param_1 + 0x34c);
  *(undefined4 *)(in_ECX + 0x350) = *(undefined4 *)(param_1 + 0x350);
  *(undefined4 *)(in_ECX + 0x354) = *(undefined4 *)(param_1 + 0x354);
  *(undefined4 *)(in_ECX + 0x358) = *(undefined4 *)(param_1 + 0x358);
  *(undefined4 *)(in_ECX + 0x35c) = *(undefined4 *)(param_1 + 0x35c);
  thunk_FUN_1037cff0(param_1 + 0x360);
  *(undefined4 *)(in_ECX + 0x36c) = *(undefined4 *)(param_1 + 0x36c);
  *(undefined4 *)(in_ECX + 0x370) = *(undefined4 *)(param_1 + 0x370);
  *(undefined4 *)(in_ECX + 0x374) = *(undefined4 *)(param_1 + 0x374);
  *(undefined4 *)(in_ECX + 0x378) = *(undefined4 *)(param_1 + 0x378);
  *(undefined4 *)(in_ECX + 0x37c) = *(undefined4 *)(param_1 + 0x37c);
  ExceptionList = local_c;
  return;
}


// ==== 103eb990 FUN_103eb990

void FUN_103eb990(byte param_1)

{
  UGameEngine *in_ECX;
  
  UGameEngine::~UGameEngine(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x380);
  }
  return;
}


// ==== 103eb9c0 FUN_103eb9c0

UGameEngine * FUN_103eb9c0(byte param_1)

{
  UGameEngine *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x380,*(int *)(in_ECX + -4),UGameEngine::~UGameEngine);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UGameEngine::~UGameEngine(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x380);
  }
  return in_ECX;
}


// ==== 103eba40 FUN_103eba40

void FUN_103eba40(ULodMesh *param_1)

{
  if (param_1 != (ULodMesh *)0x0) {
    ULodMesh::ULodMesh(param_1);
    return;
  }
  return;
}


// ==== 103eba60 FUN_103eba60

void FUN_103eba60(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080a28b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10397a70();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 103ebae0 FUN_103ebae0

void FUN_103ebae0(int param_1)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080a2a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_103abe60(param_1);
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  puVar3 = (undefined4 *)(in_ECX + 0x1c);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  ExceptionList = local_c;
  return;
}


// ==== 103ebb80 FUN_103ebb80

void FUN_103ebb80(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  thunk_FUN_10397c80(param_1 + 0xc);
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
  return;
}


// ==== 103ebc20 FUN_103ebc20

void FUN_103ebc20(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080a2c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = ANLine::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  AActor::~AActor((AActor *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103ebc90 FUN_103ebc90

void FUN_103ebc90(void)

{
  AActor *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080a2e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AActor::AActor(in_ECX);
  *(undefined ***)in_ECX = ANLine::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103ebcf0 FUN_103ebcf0

void FUN_103ebcf0(AActor *param_1)

{
  AActor *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080a308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AActor::AActor(in_ECX,param_1);
  *(undefined ***)in_ECX = ANLine::vftable;
  *(undefined4 *)(in_ECX + 0x3bc) = *(undefined4 *)(param_1 + 0x3bc);
  in_ECX[0x3c0] = param_1[0x3c0];
  ExceptionList = local_c;
  return;
}


// ==== 103ebd80 FUN_103ebd80

void FUN_103ebd80(AActor *param_1)

{
  AActor *in_ECX;
  
  AActor::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x3bc) = *(undefined4 *)(param_1 + 0x3bc);
  in_ECX[0x3c0] = param_1[0x3c0];
  return;
}


// ==== 103ebdc0 FUN_103ebdc0

void FUN_103ebdc0(byte param_1)

{
  ANLine *in_ECX;
  
  ANLine::~ANLine(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3c4);
  }
  return;
}


// ==== 103ebdf0 FUN_103ebdf0

ANLine * FUN_103ebdf0(byte param_1)

{
  ANLine *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x3c4,*(int *)(in_ECX + -4),ANLine::~ANLine);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  ANLine::~ANLine(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3c4);
  }
  return in_ECX;
}


// ==== 103ebe70 FUN_103ebe70

void FUN_103ebe70(USubSkeletalMeshInstance *param_1)

{
  if (param_1 != (USubSkeletalMeshInstance *)0x0) {
    USubSkeletalMeshInstance::USubSkeletalMeshInstance(param_1);
    return;
  }
  return;
}


// ==== 103ebe90 FUN_103ebe90

void FUN_103ebe90(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1080a32b;
  local_c = ExceptionList;
  if (*(int *)(in_ECX + 0x78) == 0) {
    ExceptionList = &local_c;
    iVar1 = (**(code **)**(undefined4 **)GMalloc_exref)(0x2c,&DAT_10853a28);
    uStack_4 = 0;
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)thunk_FUN_103ad0a0();
    }
    *(undefined4 **)(in_ECX + 0x78) = puVar2;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x78) + 0x28) = 0x3f800000;
  }
  ExceptionList = local_c;
  return;
}


// ==== 103ebf50 FUN_103ebf50

void FUN_103ebf50(UVertMeshInstance *param_1)

{
  if (param_1 != (UVertMeshInstance *)0x0) {
    UVertMeshInstance::UVertMeshInstance(param_1);
    return;
  }
  return;
}


// ==== 103ebf70 FUN_103ebf70

void FUN_103ebf70(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080a39e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UVertMeshEmitter::vftable;
  local_4 = 5;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 4;
  thunk_FUN_1038fce0();
  local_4._0_1_ = 3;
  thunk_FUN_1038fce0();
  local_4._0_1_ = 2;
  thunk_FUN_1038fce0();
  local_4._0_1_ = 1;
  thunk_FUN_10399f80();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10399ef0();
  local_4 = 0xffffffff;
  UParticleEmitter::~UParticleEmitter((UParticleEmitter *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103ec060 FUN_103ec060

void FUN_103ec060(void)

{
  UParticleEmitter *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080a45b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UParticleEmitter::UParticleEmitter(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UVertMeshEmitter::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x4d0),0);
  local_4._0_1_ = 3;
  FArray::FArray((FArray *)(in_ECX + 0x4dc),0);
  local_4._0_1_ = 6;
  FArray::FArray((FArray *)(in_ECX + 0x4e8));
  local_4._0_1_ = 8;
  FArray::FArray((FArray *)(in_ECX + 0x4f4));
  local_4 = CONCAT31(local_4._1_3_,10);
  FArray::FArray((FArray *)(in_ECX + 0x500));
  ExceptionList = local_c;
  return;
}


// ==== 103ec150 FUN_103ec150

void FUN_103ec150(byte param_1)

{
  UVertMeshEmitter *in_ECX;
  
  UVertMeshEmitter::~UVertMeshEmitter(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x520);
  }
  return;
}


// ==== 103ec180 FUN_103ec180

UVertMeshEmitter * FUN_103ec180(byte param_1)

{
  UVertMeshEmitter *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x520,*(int *)(in_ECX + -4),UVertMeshEmitter::~UVertMeshEmitter);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UVertMeshEmitter::~UVertMeshEmitter(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x520);
  }
  return in_ECX;
}


// ==== 103ec200 FUN_103ec200

void FUN_103ec200(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080a498;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_103b21b0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103ec260 FUN_103ec260

void FUN_103ec260(byte param_1)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080a4cb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_10399ff0();
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 103ec2e0 FUN_103ec2e0

FArchive * FUN_103ec2e0(FArchive *param_1,int param_2)

{
  FArchive *this;
  int iVar1;
  int iVar2;
  FArchive *pFVar3;
  undefined1 *puVar4;
  FRawIndexBuffer *pFVar5;
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [12];
  FStaticMeshVertexStream aFStack_64 [4];
  FStaticMeshVertexStream local_60 [8];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [4];
  FRawIndexBuffer aFStack_48 [4];
  FRawIndexBuffer local_44 [24];
  FRawIndexBuffer aFStack_2c [4];
  FRawIndexBuffer local_28 [24];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080a500;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FArchive::Ver(param_1);
  if (iVar1 < 0x5c) {
    iVar2 = FArchive::Ver(this);
    iVar1 = param_2;
    if (iVar2 < 0x4a) {
      iVar2 = FArchive::IsLoading(this);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar1 + 4) = 0;
      }
    }
    else {
      FArchive::ByteOrderSerialize(this,(void *)(param_2 + 4),4);
    }
    pFVar3 = (FArchive *)(**(code **)(*(int *)this + 0x18))(iVar1);
    FArchive::ByteOrderSerialize(pFVar3,auStack_70,4);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(iVar1 + 0x12),2);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(iVar1 + 0xe),2);
    FArchive::ByteOrderSerialize(pFVar3,&param_1,2);
    puVar4 = auStack_74;
  }
  else {
    iVar2 = FArchive::Ver(this);
    iVar1 = param_2;
    if (iVar2 < 0x70) {
      FStaticMeshVertexStream::FStaticMeshVertexStream(local_60);
      local_4 = 0;
      FRawIndexBuffer::FRawIndexBuffer(local_28);
      local_4._0_1_ = 1;
      FRawIndexBuffer::FRawIndexBuffer(local_44);
      local_4._0_1_ = 2;
      thunk_FUN_1036a470();
      iVar1 = param_2;
      local_4 = CONCAT31(local_4._1_3_,3);
      FArchive::ByteOrderSerialize(this,(void *)(param_2 + 4),4);
      FArchive::ByteOrderSerialize(this,(void *)(iVar1 + 0xe),2);
      FArchive::ByteOrderSerialize(this,(void *)(iVar1 + 0x10),2);
      pFVar3 = (FArchive *)(**(code **)(*(int *)this + 0x18))(iVar1);
      FArchive::ByteOrderSerialize(pFVar3,&stack0x00000000,4);
      pFVar3 = (FArchive *)thunk_FUN_1039af00(pFVar3,auStack_58);
      FArchive::ByteOrderSerialize(pFVar3,auStack_4c,4);
      pFVar5 = aFStack_48;
      pFVar3 = operator<<(pFVar3,aFStack_2c);
      operator<<(pFVar3,pFVar5);
      iVar1 = FArchive::Ver(this);
      if (0x6e < iVar1) {
        thunk_FUN_103b25d0(this,auStack_70);
      }
      puStack_8._0_1_ = 2;
      thunk_FUN_1039b380();
      puStack_8._0_1_ = 1;
      FRawIndexBuffer::~FRawIndexBuffer(aFStack_48);
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      FRawIndexBuffer::~FRawIndexBuffer(aFStack_2c);
      puStack_8 = (undefined1 *)0xffffffff;
      FStaticMeshVertexStream::~FStaticMeshVertexStream(aFStack_64);
      ExceptionList = pvStack_10;
      return this;
    }
    FArchive::ByteOrderSerialize(this,(void *)(param_2 + 4),4);
    FArchive::ByteOrderSerialize(this,(void *)(iVar1 + 8),2);
    FArchive::ByteOrderSerialize(this,(void *)(iVar1 + 10),2);
    FArchive::ByteOrderSerialize(this,(void *)(iVar1 + 0xc),2);
    FArchive::ByteOrderSerialize(this,(void *)(iVar1 + 0xe),2);
    puVar4 = (undefined1 *)(iVar1 + 0x10);
    pFVar3 = this;
  }
  FArchive::ByteOrderSerialize(pFVar3,puVar4,2);
  ExceptionList = pvStack_c;
  return this;
}


// ==== 103ec5f0 FUN_103ec5f0

void FUN_103ec5f0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080a66f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UStaticMesh::vftable;
  local_4 = 0xd;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 0xc;
  thunk_FUN_103b2b00();
  local_4._0_1_ = 0xb;
  thunk_FUN_103b2950();
  local_4._0_1_ = 10;
  thunk_FUN_103b27a0();
  local_4._0_1_ = 9;
  thunk_FUN_1039b550();
  local_4._0_1_ = 8;
  FRawIndexBuffer::~FRawIndexBuffer((FRawIndexBuffer *)(in_ECX + 0x120));
  local_4._0_1_ = 7;
  FRawIndexBuffer::~FRawIndexBuffer((FRawIndexBuffer *)(in_ECX + 0x104));
  local_4._0_1_ = 0xe;
  thunk_FUN_103906e0();
  local_4._0_1_ = 6;
  FRenderResource::~FRenderResource((FRenderResource *)(in_ECX + 0xe8));
  local_4._0_1_ = 0x11;
  thunk_FUN_1038fce0();
  local_4._0_1_ = 5;
  FRenderResource::~FRenderResource((FRenderResource *)(in_ECX + 0xcc));
  local_4._0_1_ = 4;
  thunk_FUN_1039b380();
  local_4._0_1_ = 0x15;
  thunk_FUN_10391680();
  local_4._0_1_ = 3;
  FRenderResource::~FRenderResource((FRenderResource *)(in_ECX + 0xa4));
  local_4._0_1_ = 0x19;
  thunk_FUN_10391680();
  local_4._0_1_ = 2;
  FRenderResource::~FRenderResource((FRenderResource *)(in_ECX + 0x88));
  local_4._0_1_ = 0x1c;
  thunk_FUN_1039ae40();
  local_4._0_1_ = 1;
  FRenderResource::~FRenderResource((FRenderResource *)(in_ECX + 0x6c));
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_1039b3f0();
  local_4 = 0xffffffff;
  UPrimitive::~UPrimitive((UPrimitive *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103ec7f0 FUN_103ec7f0

void FUN_103ec7f0(UPrimitive *param_1)

{
  UPrimitive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080a788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPrimitive::UPrimitive(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UStaticMesh::vftable;
  thunk_FUN_10380f30(param_1 + 0x60);
  local_4._0_1_ = 1;
  FStaticMeshVertexStream::FStaticMeshVertexStream
            ((FStaticMeshVertexStream *)(in_ECX + 0x6c),(FStaticMeshVertexStream *)(param_1 + 0x6c))
  ;
  local_4._0_1_ = 2;
  FStaticMeshColorStream::FStaticMeshColorStream
            ((FStaticMeshColorStream *)(in_ECX + 0x88),(FStaticMeshColorStream *)(param_1 + 0x88));
  local_4._0_1_ = 3;
  FStaticMeshColorStream::FStaticMeshColorStream
            ((FStaticMeshColorStream *)(in_ECX + 0xa4),(FStaticMeshColorStream *)(param_1 + 0xa4));
  local_4._0_1_ = 4;
  thunk_FUN_103b2510(param_1 + 0xc0);
  local_4._0_1_ = 5;
  FStaticMeshLightVisibilityStream::FStaticMeshLightVisibilityStream
            ((FStaticMeshLightVisibilityStream *)(in_ECX + 0xcc),
             (FStaticMeshLightVisibilityStream *)(param_1 + 0xcc));
  local_4._0_1_ = 6;
  FTangentStream::FTangentStream
            ((FTangentStream *)(in_ECX + 0xe8),(FTangentStream *)(param_1 + 0xe8));
  local_4._0_1_ = 7;
  FRawIndexBuffer::FRawIndexBuffer
            ((FRawIndexBuffer *)(in_ECX + 0x104),(FRawIndexBuffer *)(param_1 + 0x104));
  local_4._0_1_ = 8;
  FRawIndexBuffer::FRawIndexBuffer
            ((FRawIndexBuffer *)(in_ECX + 0x120),(FRawIndexBuffer *)(param_1 + 0x120));
  local_4._0_1_ = 9;
  thunk_FUN_10381010(param_1 + 0x13c);
  local_4._0_1_ = 10;
  thunk_FUN_103ae780(param_1 + 0x148);
  local_4._0_1_ = 0xb;
  thunk_FUN_103aea70(param_1 + 0x160);
  local_4 = CONCAT31(local_4._1_3_,0xc);
  *(undefined4 *)(in_ECX + 0x178) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(in_ECX + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(in_ECX + 0x180) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(in_ECX + 0x184) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(in_ECX + 0x188) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(in_ECX + 0x18c) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(in_ECX + 400) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(in_ECX + 0x194) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(in_ECX + 0x198) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(in_ECX + 0x19c) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(in_ECX + 0x1a0) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(in_ECX + 0x1a4) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(in_ECX + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)(in_ECX + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(in_ECX + 0x1b0) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(in_ECX + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(in_ECX + 0x1b8) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(in_ECX + 0x1bc) = *(undefined4 *)(param_1 + 0x1bc);
  *(undefined4 *)(in_ECX + 0x1c0) = *(undefined4 *)(param_1 + 0x1c0);
  thunk_FUN_103aed60(param_1 + 0x1c4);
  *(undefined4 *)(in_ECX + 0x1dc) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(in_ECX + 0x1e0) = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(in_ECX + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(in_ECX + 0x1e8) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(in_ECX + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(in_ECX + 0x1f0) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(in_ECX + 500) = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(in_ECX + 0x1f8) = *(undefined4 *)(param_1 + 0x1f8);
  ExceptionList = local_c;
  return;
}


// ==== 103ecb60 FUN_103ecb60

void FUN_103ecb60(UObject *param_1)

{
  UObject *pUVar1;
  UObject *in_ECX;
  int iVar2;
  UObject *pUVar3;
  
  UObject::operator=(in_ECX,param_1);
  pUVar1 = param_1 + 0x34;
  pUVar3 = in_ECX + 0x34;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar1;
    pUVar1 = pUVar1 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  thunk_FUN_1039b4b0(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  thunk_FUN_1039b050(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  thunk_FUN_10391740(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  thunk_FUN_10391740(param_1 + 0xb0);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  thunk_FUN_103b2720(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  thunk_FUN_10379900(param_1 + 0xd8);
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  thunk_FUN_103908f0(param_1 + 0xf4);
  *(undefined4 *)(in_ECX + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(in_ECX + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  TArray<unsigned_short>::operator=
            ((TArray<unsigned_short> *)(in_ECX + 0x110),(TArray<unsigned_short> *)(param_1 + 0x110))
  ;
  *(undefined4 *)(in_ECX + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(param_1 + 0x128);
  TArray<unsigned_short>::operator=
            ((TArray<unsigned_short> *)(in_ECX + 300),(TArray<unsigned_short> *)(param_1 + 300));
  *(undefined4 *)(in_ECX + 0x138) = *(undefined4 *)(param_1 + 0x138);
  thunk_FUN_1039b610(param_1 + 0x13c);
  if (param_1 == (UObject *)0xfffffeb8) {
    pUVar1 = (UObject *)0x0;
  }
  else {
    pUVar1 = param_1 + 0x154;
  }
  thunk_FUN_1039b770(pUVar1);
  *(undefined4 *)(in_ECX + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(in_ECX + 0x150) = *(undefined4 *)(param_1 + 0x150);
  if (param_1 == (UObject *)0xfffffea0) {
    pUVar1 = (UObject *)0x0;
  }
  else {
    pUVar1 = param_1 + 0x16c;
  }
  thunk_FUN_1039b8b0(pUVar1);
  *(undefined4 *)(in_ECX + 0x164) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(in_ECX + 0x168) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(in_ECX + 0x178) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(in_ECX + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(in_ECX + 0x180) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(in_ECX + 0x184) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(in_ECX + 0x188) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(in_ECX + 0x18c) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(in_ECX + 400) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(in_ECX + 0x194) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(in_ECX + 0x198) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(in_ECX + 0x19c) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(in_ECX + 0x1a0) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(in_ECX + 0x1a4) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(in_ECX + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)(in_ECX + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(in_ECX + 0x1b0) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(in_ECX + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(in_ECX + 0x1b8) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(in_ECX + 0x1bc) = *(undefined4 *)(param_1 + 0x1bc);
  *(undefined4 *)(in_ECX + 0x1c0) = *(undefined4 *)(param_1 + 0x1c0);
  if (param_1 == (UObject *)0xfffffe3c) {
    pUVar1 = (UObject *)0x0;
  }
  else {
    pUVar1 = param_1 + 0x1d0;
  }
  thunk_FUN_1039ba00(pUVar1);
  *(undefined4 *)(in_ECX + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(in_ECX + 0x1cc) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(in_ECX + 0x1dc) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(in_ECX + 0x1e0) = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(in_ECX + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(in_ECX + 0x1e8) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(in_ECX + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(in_ECX + 0x1f0) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(in_ECX + 500) = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(in_ECX + 0x1f8) = *(undefined4 *)(param_1 + 0x1f8);
  return;
}


// ==== 103ed000 FUN_103ed000

void FUN_103ed000(byte param_1)

{
  UStaticMesh *in_ECX;
  
  UStaticMesh::~UStaticMesh(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1fc);
  }
  return;
}


// ==== 103ed030 FUN_103ed030

UStaticMesh * FUN_103ed030(byte param_1)

{
  UStaticMesh *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x1fc,*(int *)(in_ECX + -4),UStaticMesh::~UStaticMesh);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UStaticMesh::~UStaticMesh(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x1fc);
  }
  return in_ECX;
}


// ==== 103ed0b0 FUN_103ed0b0

void FUN_103ed0b0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080a83e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = AFluidSurfaceInfo::vftable;
  local_4 = 5;
  UObject::ConditionalDestroy(in_ECX);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 4;
  thunk_FUN_1039bb80();
  local_4._0_1_ = 3;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(in_ECX + 0x46c));
  local_4._0_1_ = 2;
  thunk_FUN_1038fce0();
  local_4._0_1_ = 1;
  thunk_FUN_1038fce0();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10379700();
  local_4 = 0xffffffff;
  AInfo::~AInfo((AInfo *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103ed1b0 FUN_103ed1b0

void FUN_103ed1b0(void)

{
  AActor *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080a913;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AActor::AActor(in_ECX);
  *(undefined ***)in_ECX = AInfo::vftable;
  local_4 = 1;
  *(undefined ***)in_ECX = AFluidSurfaceInfo::vftable;
  FRange::FRange((FRange *)(in_ECX + 0x3dc));
  FArray::FArray((FArray *)(in_ECX + 0x430));
  local_4._0_1_ = 3;
  FArray::FArray((FArray *)(in_ECX + 0x454),0);
  local_4._0_1_ = 6;
  FArray::FArray((FArray *)(in_ECX + 0x460),0);
  local_4._0_1_ = 9;
  FArray::FArray((FArray *)(in_ECX + 0x46c),0);
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FBox::FBox((FBox *)(in_ECX + 0x47c));
  FArray::FArray((FArray *)(in_ECX + 0x4b0),0);
  ExceptionList = local_c;
  return;
}


// ==== 103ed2d0 FUN_103ed2d0

void FUN_103ed2d0(AInfo *param_1)

{
  AInfo *in_ECX;
  int iVar1;
  AInfo *pAVar2;
  AInfo *pAVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080a9be;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AInfo::AInfo(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = AFluidSurfaceInfo::vftable;
  in_ECX[0x3bc] = param_1[0x3bc];
  *(undefined4 *)(in_ECX + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)(in_ECX + 0x3c4) = *(undefined4 *)(param_1 + 0x3c4);
  *(undefined4 *)(in_ECX + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)(in_ECX + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)(in_ECX + 0x3d0) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(in_ECX + 0x3d4) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(in_ECX + 0x3d8) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(in_ECX + 0x3dc) = *(undefined4 *)(param_1 + 0x3dc);
  *(undefined4 *)(in_ECX + 0x3e0) = *(undefined4 *)(param_1 + 0x3e0);
  *(uint *)(in_ECX + 0x3e4) =
       *(uint *)(in_ECX + 0x3e4) ^ (*(uint *)(param_1 + 0x3e4) ^ *(uint *)(in_ECX + 0x3e4)) & 1;
  *(undefined4 *)(in_ECX + 1000) = *(undefined4 *)(param_1 + 1000);
  *(undefined4 *)(in_ECX + 0x3ec) = *(undefined4 *)(param_1 + 0x3ec);
  *(undefined4 *)(in_ECX + 0x3f0) = *(undefined4 *)(param_1 + 0x3f0);
  *(undefined4 *)(in_ECX + 0x3f4) = *(undefined4 *)(param_1 + 0x3f4);
  *(undefined4 *)(in_ECX + 0x3f8) = *(undefined4 *)(param_1 + 0x3f8);
  *(undefined4 *)(in_ECX + 0x3fc) = *(undefined4 *)(param_1 + 0x3fc);
  *(undefined4 *)(in_ECX + 0x400) = *(undefined4 *)(param_1 + 0x400);
  *(undefined4 *)(in_ECX + 0x404) = *(undefined4 *)(param_1 + 0x404);
  *(undefined4 *)(in_ECX + 0x408) = *(undefined4 *)(param_1 + 0x408);
  in_ECX[0x40c] = param_1[0x40c];
  *(undefined4 *)(in_ECX + 0x410) = *(undefined4 *)(param_1 + 0x410);
  *(undefined4 *)(in_ECX + 0x414) = *(undefined4 *)(param_1 + 0x414);
  *(undefined4 *)(in_ECX + 0x418) = *(undefined4 *)(param_1 + 0x418);
  *(undefined4 *)(in_ECX + 0x41c) = *(undefined4 *)(param_1 + 0x41c);
  *(undefined4 *)(in_ECX + 0x420) = *(undefined4 *)(param_1 + 0x420);
  *(uint *)(in_ECX + 0x424) =
       *(uint *)(in_ECX + 0x424) ^ (*(uint *)(param_1 + 0x424) ^ *(uint *)(in_ECX + 0x424)) & 1;
  *(undefined4 *)(in_ECX + 0x428) = *(undefined4 *)(param_1 + 0x428);
  *(uint *)(in_ECX + 0x42c) =
       *(uint *)(in_ECX + 0x42c) ^ (*(uint *)(param_1 + 0x42c) ^ *(uint *)(in_ECX + 0x42c)) & 1;
  thunk_FUN_10379670(param_1 + 0x430);
  local_4._0_1_ = 1;
  *(undefined4 *)(in_ECX + 0x43c) = *(undefined4 *)(param_1 + 0x43c);
  *(uint *)(in_ECX + 0x440) =
       *(uint *)(in_ECX + 0x440) ^ (*(uint *)(in_ECX + 0x440) ^ *(uint *)(param_1 + 0x440)) & 1;
  *(uint *)(in_ECX + 0x440) =
       (*(uint *)(param_1 + 0x440) ^ *(uint *)(in_ECX + 0x440)) & 2 ^ *(uint *)(in_ECX + 0x440);
  *(undefined4 *)(in_ECX + 0x444) = *(undefined4 *)(param_1 + 0x444);
  *(undefined4 *)(in_ECX + 0x448) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)(in_ECX + 0x44c) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)(in_ECX + 0x450) = *(undefined4 *)(param_1 + 0x450);
  thunk_FUN_10379830(param_1 + 0x454);
  local_4._0_1_ = 3;
  thunk_FUN_10379830(param_1 + 0x460);
  local_4._0_1_ = 5;
  TArray<unsigned_char>::TArray<unsigned_char>
            ((TArray<unsigned_char> *)(in_ECX + 0x46c),(TArray<unsigned_char> *)(param_1 + 0x46c));
  local_4 = CONCAT31(local_4._1_3_,7);
  *(undefined4 *)(in_ECX + 0x478) = *(undefined4 *)(param_1 + 0x478);
  pAVar2 = param_1 + 0x47c;
  pAVar3 = in_ECX + 0x47c;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar3 = *(undefined4 *)pAVar2;
    pAVar2 = pAVar2 + 4;
    pAVar3 = pAVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x498) = *(undefined4 *)(param_1 + 0x498);
  *(undefined4 *)(in_ECX + 0x49c) = *(undefined4 *)(param_1 + 0x49c);
  *(undefined4 *)(in_ECX + 0x4a0) = *(undefined4 *)(param_1 + 0x4a0);
  *(undefined4 *)(in_ECX + 0x4a4) = *(undefined4 *)(param_1 + 0x4a4);
  *(undefined4 *)(in_ECX + 0x4a8) = *(undefined4 *)(param_1 + 0x4a8);
  *(undefined4 *)(in_ECX + 0x4ac) = *(undefined4 *)(param_1 + 0x4ac);
  thunk_FUN_10381410(param_1 + 0x4b0);
  *(undefined4 *)(in_ECX + 0x4bc) = *(undefined4 *)(param_1 + 0x4bc);
  ExceptionList = local_c;
  return;
}


// ==== 103ed6d0 FUN_103ed6d0

void FUN_103ed6d0(AActor *param_1)

{
  AActor *in_ECX;
  int iVar1;
  AActor *pAVar2;
  AActor *pAVar3;
  
  AActor::operator=(in_ECX,param_1);
  in_ECX[0x3bc] = param_1[0x3bc];
  *(undefined4 *)(in_ECX + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)(in_ECX + 0x3c4) = *(undefined4 *)(param_1 + 0x3c4);
  *(undefined4 *)(in_ECX + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)(in_ECX + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)(in_ECX + 0x3d0) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(in_ECX + 0x3d4) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(in_ECX + 0x3d8) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(in_ECX + 0x3dc) = *(undefined4 *)(param_1 + 0x3dc);
  *(undefined4 *)(in_ECX + 0x3e0) = *(undefined4 *)(param_1 + 0x3e0);
  *(uint *)(in_ECX + 0x3e4) =
       *(uint *)(in_ECX + 0x3e4) ^ (*(uint *)(param_1 + 0x3e4) ^ *(uint *)(in_ECX + 0x3e4)) & 1;
  *(undefined4 *)(in_ECX + 1000) = *(undefined4 *)(param_1 + 1000);
  *(undefined4 *)(in_ECX + 0x3ec) = *(undefined4 *)(param_1 + 0x3ec);
  *(undefined4 *)(in_ECX + 0x3f0) = *(undefined4 *)(param_1 + 0x3f0);
  *(undefined4 *)(in_ECX + 0x3f4) = *(undefined4 *)(param_1 + 0x3f4);
  *(undefined4 *)(in_ECX + 0x3f8) = *(undefined4 *)(param_1 + 0x3f8);
  *(undefined4 *)(in_ECX + 0x3fc) = *(undefined4 *)(param_1 + 0x3fc);
  *(undefined4 *)(in_ECX + 0x400) = *(undefined4 *)(param_1 + 0x400);
  *(undefined4 *)(in_ECX + 0x404) = *(undefined4 *)(param_1 + 0x404);
  *(undefined4 *)(in_ECX + 0x408) = *(undefined4 *)(param_1 + 0x408);
  in_ECX[0x40c] = param_1[0x40c];
  *(undefined4 *)(in_ECX + 0x410) = *(undefined4 *)(param_1 + 0x410);
  *(undefined4 *)(in_ECX + 0x414) = *(undefined4 *)(param_1 + 0x414);
  *(undefined4 *)(in_ECX + 0x418) = *(undefined4 *)(param_1 + 0x418);
  *(undefined4 *)(in_ECX + 0x41c) = *(undefined4 *)(param_1 + 0x41c);
  *(undefined4 *)(in_ECX + 0x420) = *(undefined4 *)(param_1 + 0x420);
  *(uint *)(in_ECX + 0x424) =
       *(uint *)(in_ECX + 0x424) ^ (*(uint *)(param_1 + 0x424) ^ *(uint *)(in_ECX + 0x424)) & 1;
  *(undefined4 *)(in_ECX + 0x428) = *(undefined4 *)(param_1 + 0x428);
  *(uint *)(in_ECX + 0x42c) =
       *(uint *)(in_ECX + 0x42c) ^ (*(uint *)(param_1 + 0x42c) ^ *(uint *)(in_ECX + 0x42c)) & 1;
  thunk_FUN_103797c0(param_1 + 0x430);
  *(undefined4 *)(in_ECX + 0x43c) = *(undefined4 *)(param_1 + 0x43c);
  *(uint *)(in_ECX + 0x440) =
       *(uint *)(in_ECX + 0x440) ^ (*(uint *)(in_ECX + 0x440) ^ *(uint *)(param_1 + 0x440)) & 1;
  *(uint *)(in_ECX + 0x440) =
       (*(uint *)(param_1 + 0x440) ^ *(uint *)(in_ECX + 0x440)) & 2 ^ *(uint *)(in_ECX + 0x440);
  *(undefined4 *)(in_ECX + 0x444) = *(undefined4 *)(param_1 + 0x444);
  *(undefined4 *)(in_ECX + 0x448) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)(in_ECX + 0x44c) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)(in_ECX + 0x450) = *(undefined4 *)(param_1 + 0x450);
  thunk_FUN_10379900(param_1 + 0x454);
  thunk_FUN_10379900(param_1 + 0x460);
  TArray<unsigned_char>::operator=
            ((TArray<unsigned_char> *)(in_ECX + 0x46c),(TArray<unsigned_char> *)(param_1 + 0x46c));
  *(undefined4 *)(in_ECX + 0x478) = *(undefined4 *)(param_1 + 0x478);
  pAVar2 = param_1 + 0x47c;
  pAVar3 = in_ECX + 0x47c;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar3 = *(undefined4 *)pAVar2;
    pAVar2 = pAVar2 + 4;
    pAVar3 = pAVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x498) = *(undefined4 *)(param_1 + 0x498);
  *(undefined4 *)(in_ECX + 0x49c) = *(undefined4 *)(param_1 + 0x49c);
  *(undefined4 *)(in_ECX + 0x4a0) = *(undefined4 *)(param_1 + 0x4a0);
  *(undefined4 *)(in_ECX + 0x4a4) = *(undefined4 *)(param_1 + 0x4a4);
  *(undefined4 *)(in_ECX + 0x4a8) = *(undefined4 *)(param_1 + 0x4a8);
  *(undefined4 *)(in_ECX + 0x4ac) = *(undefined4 *)(param_1 + 0x4ac);
  thunk_FUN_1038ac30(param_1 + 0x4b0);
  *(undefined4 *)(in_ECX + 0x4bc) = *(undefined4 *)(param_1 + 0x4bc);
  return;
}


// ==== 103eda50 FUN_103eda50

void FUN_103eda50(byte param_1)

{
  AFluidSurfaceInfo *in_ECX;
  
  AFluidSurfaceInfo::~AFluidSurfaceInfo(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4c0);
  }
  return;
}


// ==== 103eda80 FUN_103eda80

AFluidSurfaceInfo * FUN_103eda80(byte param_1)

{
  AFluidSurfaceInfo *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x4c0,*(int *)(in_ECX + -4),AFluidSurfaceInfo::~AFluidSurfaceInfo);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  AFluidSurfaceInfo::~AFluidSurfaceInfo(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x4c0);
  }
  return in_ECX;
}


// ==== 103edb00 FUN_103edb00

void FUN_103edb00(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080a9fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = L2AbnormalZone::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  thunk_FUN_103b2dc0(param_1 + 8);
  ExceptionList = local_c;
  return;
}


// ==== 103edb70 FUN_103edb70

void FUN_103edb70(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  thunk_FUN_103b2e80(param_1 + 8);
  return;
}


// ==== 103edba0 FUN_103edba0

void FUN_103edba0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080aa19;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103b3130(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103edc10 FUN_103edc10

void FUN_103edc10(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103b3240(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x1c);
      if (*(int *)in_ECX + iVar1 * 0x1c != 0) {
        thunk_FUN_10381680(*(int *)param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103edca0 FUN_103edca0

void FUN_103edca0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080aa39;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103b32d0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103edd10 FUN_103edd10

void FUN_103edd10(FArray *param_1)

{
  FMipmap *this;
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103b33d0(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x28);
      this = (FMipmap *)(*(int *)in_ECX + iVar1 * 0x28);
      if (this != (FMipmap *)0x0) {
        FMipmap::FMipmap(this,(FMipmap *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103edd90 FUN_103edd90

void FUN_103edd90(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080aa59;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103b3460(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103ede00 FUN_103ede00

FArchive * FUN_103ede00(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080aa70;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x38);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (; iVar3 < *(int *)(param_2 + 4); iVar3 = iVar3 + 1) {
      thunk_FUN_1038d830(param_1,*(int *)param_2 + iVar3 * 0x38);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_103b3570(local_18);
    while (iVar3 < local_18) {
      iVar1 = thunk_FUN_10370aa0(0x38,param_2);
      if (iVar1 == 0) {
        thunk_FUN_1038d830(param_1,0);
        iVar3 = iVar3 + 1;
      }
      else {
        uVar2 = thunk_FUN_1038d7d0();
        thunk_FUN_1038d830(param_1,uVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 103edee0 Catch@103edee0

void Catch_103edee0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 103edef4 Catch@103edef4

void Catch_103edef4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103edf60 FUN_103edf60

void FUN_103edf60(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103b3570(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x38);
      if (*(int *)in_ECX + iVar1 * 0x38 != 0) {
        thunk_FUN_10381780(*(int *)param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x38;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103edff0 FUN_103edff0

void FUN_103edff0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080aa89;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103b3600(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103ee060 FUN_103ee060

void FUN_103ee060(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080aaa9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103b3700(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103ee0d0 FUN_103ee0d0

void FUN_103ee0d0(int param_1)

{
  void **ppvVar1;
  FArray *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080aacb;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    do {
      local_4 = 0xffffffff;
      thunk_FUN_10392730();
      iVar2 = iVar2 + 1;
      ppvVar1 = ExceptionList;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  ExceptionList = ppvVar1;
  FArray::Empty(in_ECX,0x10,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103ee160 FUN_103ee160

void FUN_103ee160(FArray *param_1)

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
  puStack_8 = &LAB_1080aaeb;
  local_c = ExceptionList;
  if (in_ECX != param_1) {
    ExceptionList = &local_c;
    thunk_FUN_103ee0d0(*(int *)(param_1 + 4));
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      iVar3 = 0;
      do {
        iVar1 = FArray::Add(in_ECX,1,0x10);
        puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
        if (puVar2 != (undefined4 *)0x0) {
          iVar1 = *(int *)param_1;
          *puVar2 = *(undefined4 *)(iVar1 + iVar3);
          thunk_FUN_10383550(iVar1 + iVar3 + 4);
          local_4 = 0xffffffff;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x10;
      } while (iVar4 < *(int *)(param_1 + 4));
    }
  }
  ExceptionList = local_c;
  return;
}


// ==== 103ee210 FUN_103ee210

void FUN_103ee210(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080ab09;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103b3800(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103ee280 FUN_103ee280

void FUN_103ee280(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ab3f;
  local_c = ExceptionList;
  iVar3 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar2 = 0;
    ExceptionList = &local_c;
    do {
      iVar1 = *(int *)in_ECX;
      local_4 = 1;
      thunk_FUN_10392b80();
      local_4 = local_4 & 0xffffff00;
      thunk_FUN_1038fad0();
      local_4 = 0xffffffff;
      FMatrix::~FMatrix((FMatrix *)(iVar1 + iVar2));
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x58;
    } while (iVar3 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x58,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103ee330 FUN_103ee330

void FUN_103ee330(FArray *param_1)

{
  int iVar1;
  FKConvexElem *this;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103ee280(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x58);
      this = (FKConvexElem *)(iVar1 * 0x58 + *(int *)in_ECX);
      if (this != (FKConvexElem *)0x0) {
        FKConvexElem::FKConvexElem(this,(FKConvexElem *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x58;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103ee3b0 FUN_103ee3b0

void FUN_103ee3b0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ab71;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 103ee400 FUN_103ee400

void FUN_103ee400(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080aba1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 103ee450 FUN_103ee450

void FUN_103ee450(int param_1)

{
  int in_ECX;
  
  thunk_FUN_1039e3f0(param_1);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  thunk_FUN_10387760();
  return;
}


// ==== 103ee480 FUN_103ee480

void FUN_103ee480(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080abd1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 8;
  thunk_FUN_10387760();
  ExceptionList = local_c;
  return;
}


// ==== 103ee4f0 FUN_103ee4f0

void FUN_103ee4f0(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080abf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10387850(param_1);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  thunk_FUN_10387760();
  ExceptionList = local_c;
  return;
}


// ==== 103ee570 FUN_103ee570

void FUN_103ee570(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080ac18;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  thunk_FUN_103b3960();
  ExceptionList = pvStack_c;
  return;
}


// ==== 103ee600 FUN_103ee600

void FUN_103ee600(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ac39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x5c);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x5c);
      if (iVar1 * 0x5c + *(int *)in_ECX != 0) {
        thunk_FUN_103b2fa0(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x5c;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 103ee6c0 FUN_103ee6c0

void FUN_103ee6c0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080ac59;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103b39d0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103ee730 FUN_103ee730

void FUN_103ee730(int param_1)

{
  void **ppvVar1;
  FArray *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ac91;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    do {
      local_4 = 1;
      thunk_FUN_1038fce0();
      local_4 = local_4 & 0xffffff00;
      thunk_FUN_1038fad0();
      local_4 = 0xffffffff;
      thunk_FUN_10397d20();
      iVar2 = iVar2 + 1;
      ppvVar1 = ExceptionList;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  ExceptionList = ppvVar1;
  FArray::Empty(in_ECX,0x28,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103ee7e0 FUN_103ee7e0

void FUN_103ee7e0(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103ee730(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x28);
      if (*(int *)in_ECX + iVar1 * 0x28 != 0) {
        thunk_FUN_1039c2d0(*(int *)param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103ee860 FUN_103ee860

void FUN_103ee860(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080acb9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103b3b10(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103ee8d0 FUN_103ee8d0

void FUN_103ee8d0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080acd9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103b3d20(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103ee940 FUN_103ee940

void FUN_103ee940(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103b3e20(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x18);
      if (*(int *)in_ECX + iVar1 * 0x18 != 0) {
        thunk_FUN_10381a20(*(int *)param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103ee9e0 FUN_103ee9e0

void FUN_103ee9e0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080acf9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103b3ff0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103eea50 FUN_103eea50

void FUN_103eea50(FArray *param_1)

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
  puStack_8 = &LAB_1080ad1b;
  local_c = ExceptionList;
  if (in_ECX != param_1) {
    ExceptionList = &local_c;
    thunk_FUN_103b40f0(*(int *)(param_1 + 4));
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      iVar3 = 0;
      do {
        iVar1 = FArray::Add(in_ECX,1,0x10);
        puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
        if (puVar2 != (undefined4 *)0x0) {
          iVar1 = *(int *)param_1;
          *puVar2 = *(undefined4 *)(iVar1 + iVar3);
          TArray<unsigned_char>::TArray<unsigned_char>
                    ((TArray<unsigned_char> *)(puVar2 + 1),
                     (TArray<unsigned_char> *)(iVar1 + iVar3 + 4));
          local_4 = 0xffffffff;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x10;
      } while (iVar4 < *(int *)(param_1 + 4));
    }
  }
  ExceptionList = local_c;
  return;
}


// ==== 103eeb00 FUN_103eeb00

void FUN_103eeb00(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080ad39;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103b4180(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103eeb70 FUN_103eeb70

void FUN_103eeb70(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103b4280(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x14);
      if (*(int *)in_ECX + iVar1 * 0x14 != 0) {
        thunk_FUN_10381b60(*(int *)param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103eebf0 FUN_103eebf0

void FUN_103eebf0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080ad59;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103b4300(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103eec60 FUN_103eec60

void FUN_103eec60(FArray *param_1)

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
  puStack_8 = &LAB_1080ad7b;
  local_c = ExceptionList;
  if (in_ECX != param_1) {
    ExceptionList = &local_c;
    thunk_FUN_103b4400(*(int *)(param_1 + 4));
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      iVar3 = 0;
      do {
        iVar1 = FArray::Add(in_ECX,1,0x10);
        puVar2 = (undefined4 *)(iVar1 * 0x10 + *(int *)in_ECX);
        if (puVar2 != (undefined4 *)0x0) {
          iVar1 = *(int *)param_1;
          *puVar2 = *(undefined4 *)(iVar1 + iVar3);
          TArray<unsigned_char>::TArray<unsigned_char>
                    ((TArray<unsigned_char> *)(puVar2 + 1),
                     (TArray<unsigned_char> *)(iVar1 + iVar3 + 4));
          local_4 = 0xffffffff;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x10;
      } while (iVar4 < *(int *)(param_1 + 4));
    }
  }
  ExceptionList = local_c;
  return;
}


// ==== 103eed10 FUN_103eed10

void FUN_103eed10(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080ad99;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103b4490(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103eed80 FUN_103eed80

void FUN_103eed80(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103b4590(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x14);
      if (*(int *)in_ECX + iVar1 * 0x14 != 0) {
        thunk_FUN_10381c90(*(int *)param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103eee00 FUN_103eee00

void FUN_103eee00(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080adb9;
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
        thunk_FUN_103b30a0(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 103eeef0 FUN_103eeef0

void FUN_103eeef0(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080add8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1038ad90(param_1);
  local_4 = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  thunk_FUN_1038aca0();
  ExceptionList = local_c;
  return;
}


// ==== 103eef70 FUN_103eef70

void FUN_103eef70(void)

{
  int in_ECX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080adf8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(in_ECX + 0xc) != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)GMalloc_exref + 8))(*(int *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  local_4 = 0xffffffff;
  thunk_FUN_103b4650();
  ExceptionList = pvStack_c;
  return;
}


// ==== 103ef000 FUN_103ef000

void FUN_103ef000(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080aec8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10379670(param_1);
  local_4 = 0;
  thunk_FUN_103889a0(param_1 + 0xc);
  local_4._0_1_ = 1;
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  thunk_FUN_10388bd0(param_1 + 0x1c);
  local_4._0_1_ = 2;
  thunk_FUN_1039d6f0(param_1 + 0x28);
  local_4._0_1_ = 3;
  thunk_FUN_1039d6f0(param_1 + 0x34);
  local_4._0_1_ = 4;
  FRawIndexBuffer::FRawIndexBuffer
            ((FRawIndexBuffer *)(in_ECX + 0x40),(FRawIndexBuffer *)(param_1 + 0x40));
  local_4._0_1_ = 5;
  FRawIndexBuffer::FRawIndexBuffer
            ((FRawIndexBuffer *)(in_ECX + 0x5c),(FRawIndexBuffer *)(param_1 + 0x5c));
  local_4._0_1_ = 6;
  FSkinVertexStream::FSkinVertexStream
            ((FSkinVertexStream *)(in_ECX + 0x78),(FSkinVertexStream *)(param_1 + 0x78));
  local_4._0_1_ = 7;
  FGPUSkinVertexStream::FGPUSkinVertexStream
            ((FGPUSkinVertexStream *)(in_ECX + 0xb4),(FGPUSkinVertexStream *)(param_1 + 0xb4));
  local_4._0_1_ = 8;
  FTangentStream::FTangentStream((FTangentStream *)(in_ECX + 200),(FTangentStream *)(param_1 + 200))
  ;
  local_4._0_1_ = 9;
  TArray<unsigned_short>::TArray<unsigned_short>
            ((TArray<unsigned_short> *)(in_ECX + 0xe4),(TArray<unsigned_short> *)(param_1 + 0xe4));
  local_4._0_1_ = 10;
  thunk_FUN_103acc80(param_1 + 0xf0);
  local_4._0_1_ = 0xb;
  thunk_FUN_103acb60(param_1 + 0x108);
  local_4._0_1_ = 0xc;
  thunk_FUN_1039c660(param_1 + 0x120);
  local_4 = CONCAT31(local_4._1_3_,0xd);
  thunk_FUN_103ac7d0(param_1 + 0x138);
  *(undefined4 *)(in_ECX + 0x150) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(in_ECX + 0x154) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(in_ECX + 0x158) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(in_ECX + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(in_ECX + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(in_ECX + 0x164) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(in_ECX + 0x168) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(in_ECX + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined1 *)(in_ECX + 0x170) = *(undefined1 *)(param_1 + 0x170);
  ExceptionList = local_c;
  return;
}


// ==== 103ef250 FUN_103ef250

void FUN_103ef250(int param_1)

{
  int iVar1;
  int in_ECX;
  
  thunk_FUN_103797c0(param_1);
  thunk_FUN_10388b30(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_1 + 0x18);
  thunk_FUN_10388d80(param_1 + 0x1c);
  thunk_FUN_103b3ca0(param_1 + 0x28);
  thunk_FUN_103b3ca0(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  TArray<unsigned_short>::operator=
            ((TArray<unsigned_short> *)(in_ECX + 0x4c),(TArray<unsigned_short> *)(param_1 + 0x4c));
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  TArray<unsigned_short>::operator=
            ((TArray<unsigned_short> *)(in_ECX + 0x68),(TArray<unsigned_short> *)(param_1 + 0x68));
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  FSkinVertexStream::operator=
            ((FSkinVertexStream *)(in_ECX + 0x78),(FSkinVertexStream *)(param_1 + 0x78));
  *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  thunk_FUN_103908f0(param_1 + 0xd4);
  *(undefined4 *)(in_ECX + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  TArray<unsigned_short>::operator=
            ((TArray<unsigned_short> *)(in_ECX + 0xe4),(TArray<unsigned_short> *)(param_1 + 0xe4));
  if (param_1 == -0xf0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0xfc;
  }
  thunk_FUN_10398170(iVar1);
  *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  if (param_1 == -0x108) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0x114;
  }
  thunk_FUN_103978b0(iVar1);
  *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(in_ECX + 0x110) = *(undefined4 *)(param_1 + 0x110);
  if (param_1 == -0x120) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 300;
  }
  thunk_FUN_10397780(iVar1);
  *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(param_1 + 0x128);
  if (param_1 == -0x138) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0x144;
  }
  thunk_FUN_103795a0(iVar1);
  *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(in_ECX + 0x150) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(in_ECX + 0x154) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)(in_ECX + 0x158) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(in_ECX + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(in_ECX + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(in_ECX + 0x164) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(in_ECX + 0x168) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(in_ECX + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined1 *)(in_ECX + 0x170) = *(undefined1 *)(param_1 + 0x170);
  return;
}


// ==== 103ef520 FUN_103ef520

void FUN_103ef520(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080af31;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  thunk_FUN_1032bc20(param_1 + 7);
  local_4 = 0;
  thunk_FUN_1039d4e0(param_1 + 10);
  local_4 = CONCAT31(local_4._1_3_,1);
  thunk_FUN_1039c2d0(param_1 + 0xd);
  ExceptionList = local_c;
  return;
}


// ==== 103ef5e0 FUN_103ef5e0

void FUN_103ef5e0(undefined1 *param_1)

{
  undefined1 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080af71;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  thunk_FUN_103836b0(param_1 + 4);
  local_4 = 0;
  thunk_FUN_1039ccb0(param_1 + 0x10);
  local_4 = CONCAT31(local_4._1_3_,1);
  thunk_FUN_1039c730(param_1 + 0x1c);
  ExceptionList = local_c;
  return;
}


// ==== 103ef680 FUN_103ef680

void FUN_103ef680(int param_1,int param_2)

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
    iVar1 = param_1 * 0x58;
    iVar2 = iVar2 - param_1;
    do {
      FAnywhereNpc::~FAnywhereNpc((FAnywhereNpc *)(*(int *)in_ECX + iVar1));
      iVar1 = iVar1 + 0x58;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x58);
  return;
}


// ==== 103ef740 FUN_103ef740

void FUN_103ef740(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      FAnywhereNpc::~FAnywhereNpc((FAnywhereNpc *)(*(int *)in_ECX + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x58;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x58,param_1);
  return;
}


// ==== 103ef790 FUN_103ef790

void FUN_103ef790(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080af9b;
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
    iVar1 = iVar1 - param_1;
    do {
      local_4 = 0xffffffff;
      thunk_FUN_1038fad0();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x1c);
  ExceptionList = local_c;
  return;
}


// ==== 103ef8a0 FUN_103ef8a0

void FUN_103ef8a0(int param_1)

{
  void **ppvVar1;
  FArray *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080afbb;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    do {
      local_4 = 0xffffffff;
      thunk_FUN_1038fad0();
      iVar2 = iVar2 + 1;
      ppvVar1 = ExceptionList;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  ExceptionList = ppvVar1;
  FArray::Empty(in_ECX,0x1c,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103ef930 FUN_103ef930

void FUN_103ef930(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080afdb;
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
    iVar1 = iVar1 - param_1;
    do {
      local_4 = 0xffffffff;
      thunk_FUN_10326570();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x78);
  ExceptionList = local_c;
  return;
}


// ==== 103efa40 FUN_103efa40

void FUN_103efa40(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    iVar3 = *(int *)(param_1 + 4);
    if (*(int *)GUndo_exref != 0) {
      (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
    }
    thunk_FUN_1039e650(iVar3);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x44);
        if (*(int *)GUndo_exref != 0) {
          (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
        }
        if (*(int *)in_ECX + iVar2 * 0x44 != 0) {
          thunk_FUN_103818c0(*(int *)pFVar1 + (int)param_1);
        }
        param_1 = (FArray *)((int)param_1 + 0x44);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(pFVar1 + 4));
    }
    return;
  }
  return;
}


// ==== 103efb40 FUN_103efb40

void FUN_103efb40(int param_1,int param_2)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b013;
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
    iVar3 = param_1 * 0x34;
    iVar2 = iVar2 - param_1;
    do {
      iVar1 = *(int *)in_ECX;
      local_4 = 1;
      thunk_FUN_10391d10();
      local_4 = 0xffffffff;
      FRenderResource::~FRenderResource((FRenderResource *)(iVar1 + iVar3));
      iVar3 = iVar3 + 0x34;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x34);
  ExceptionList = local_c;
  return;
}


// ==== 103efc60 FUN_103efc60

void FUN_103efc60(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b053;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar3 = 0;
    ExceptionList = &local_c;
    do {
      iVar1 = *(int *)in_ECX;
      local_4 = 1;
      thunk_FUN_10391d10();
      local_4 = 0xffffffff;
      FRenderResource::~FRenderResource((FRenderResource *)(iVar1 + iVar3));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x34;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x34,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103efd00 FUN_103efd00

void FUN_103efd00(int param_1,int param_2)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b08f;
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
  local_18 = param_1 + param_2;
  if (*(int *)(in_ECX + 4) < local_18) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < local_18) {
    iVar2 = param_1 * 0x1c;
    local_18 = local_18 - param_1;
    do {
      iVar1 = *(int *)in_ECX;
      local_4._0_1_ = 2;
      local_4._1_3_ = 0;
      thunk_FUN_103830e0(0,*(undefined4 *)(iVar1 + iVar2 + 0x14));
      local_4 = (uint)local_4._1_3_ << 8;
      FArray::~FArray((FArray *)(iVar1 + iVar2 + 0x10));
      local_4 = 0xffffffff;
      thunk_FUN_10325f90();
      iVar2 = iVar2 + 0x1c;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x1c);
  ExceptionList = local_c;
  return;
}


// ==== 103efe50 FUN_103efe50

void FUN_103efe50(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b0cf;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    local_18 = 0;
    ExceptionList = &local_c;
    do {
      iVar1 = *(int *)in_ECX;
      local_4._0_1_ = 2;
      local_4._1_3_ = 0;
      thunk_FUN_103830e0(0,*(undefined4 *)(iVar1 + local_18 + 0x14));
      local_4 = (uint)local_4._1_3_ << 8;
      FArray::~FArray((FArray *)(iVar1 + local_18 + 0x10));
      local_4 = 0xffffffff;
      thunk_FUN_10325f90();
      local_18 = local_18 + 0x1c;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x1c,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103eff30 FUN_103eff30

void FUN_103eff30(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b110;
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
  local_18 = param_1 + param_2;
  if (*(int *)(in_ECX + 4) < local_18) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < local_18) {
    iVar1 = param_1 * 0x2c;
    local_18 = local_18 - param_1;
    do {
      iVar2 = *(int *)in_ECX + iVar1;
      local_4._0_1_ = 2;
      local_4._1_3_ = 0;
      thunk_FUN_10384080(0,*(undefined4 *)(iVar2 + 0x24));
      local_4 = (uint)local_4._1_3_ << 8;
      FArray::~FArray((FArray *)(iVar2 + 0x20));
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar2 + 8));
      iVar1 = iVar1 + 0x2c;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x2c);
  ExceptionList = local_c;
  return;
}


// ==== 103f0080 FUN_103f0080

void FUN_103f0080(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b150;
  local_c = ExceptionList;
  iVar1 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    local_18 = 0;
    ExceptionList = &local_c;
    do {
      iVar2 = *(int *)in_ECX + local_18;
      local_4._0_1_ = 2;
      local_4._1_3_ = 0;
      thunk_FUN_10384080(0,*(undefined4 *)(iVar2 + 0x24));
      local_4 = (uint)local_4._1_3_ << 8;
      FArray::~FArray((FArray *)(iVar2 + 0x20));
      local_4 = 0xffffffff;
      FString::~FString((FString *)(iVar2 + 8));
      local_18 = local_18 + 0x2c;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x2c,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103f0160 FUN_103f0160

void FUN_103f0160(int param_1,int param_2)

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
  iVar2 = param_1 + param_2;
  if (*(int *)(in_ECX + 4) < iVar2) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar2) {
    iVar1 = param_1 * 0x50;
    iVar2 = iVar2 - param_1;
    do {
      FStaticMeshBatch::~FStaticMeshBatch((FStaticMeshBatch *)(*(int *)in_ECX + iVar1));
      iVar1 = iVar1 + 0x50;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x50);
  return;
}


// ==== 103f0220 FUN_103f0220

void FUN_103f0220(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      FStaticMeshBatch::~FStaticMeshBatch((FStaticMeshBatch *)(*(int *)in_ECX + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x50;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x50,param_1);
  return;
}


// ==== 103f0270 FUN_103f0270

void FUN_103f0270(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b178;
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
    iVar1 = iVar1 - param_1;
    do {
      local_4 = 0xffffffff;
      thunk_FUN_10326630();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0xc);
  ExceptionList = local_c;
  return;
}


// ==== 103f0370 FUN_103f0370

void FUN_103f0370(int param_1)

{
  void **ppvVar1;
  FArray *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b198;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    do {
      local_4 = 0xffffffff;
      thunk_FUN_10326630();
      iVar2 = iVar2 + 1;
      ppvVar1 = ExceptionList;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  ExceptionList = ppvVar1;
  FArray::Empty(in_ECX,0xc,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103f03f0 FUN_103f03f0

void FUN_103f03f0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b1b8;
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
    iVar1 = iVar1 - param_1;
    do {
      local_4 = 0xffffffff;
      thunk_FUN_10326630();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0xc);
  ExceptionList = local_c;
  return;
}


// ==== 103f04f0 FUN_103f04f0

void FUN_103f04f0(int param_1)

{
  void **ppvVar1;
  FArray *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b1d8;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    do {
      local_4 = 0xffffffff;
      thunk_FUN_10326630();
      iVar2 = iVar2 + 1;
      ppvVar1 = ExceptionList;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  ExceptionList = ppvVar1;
  FArray::Empty(in_ECX,0xc,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103f0570 FUN_103f0570

void FUN_103f0570(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080b1f9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103b4b80(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f05e0 FUN_103f05e0

void FUN_103f05e0(int param_1)

{
  void **ppvVar1;
  FArray *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b218;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    do {
      local_4 = 0xffffffff;
      thunk_FUN_1039d940();
      iVar2 = iVar2 + 1;
      ppvVar1 = ExceptionList;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  ExceptionList = ppvVar1;
  FArray::Empty(in_ECX,0x20,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103f06e0 FUN_103f06e0

void FUN_103f06e0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b23b;
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
    iVar1 = iVar1 - param_1;
    do {
      local_4 = 0xffffffff;
      thunk_FUN_1039db90();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x28);
  ExceptionList = local_c;
  return;
}


// ==== 103f07e0 FUN_103f07e0

void FUN_103f07e0(int param_1)

{
  void **ppvVar1;
  FArray *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b25b;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    do {
      local_4 = 0xffffffff;
      thunk_FUN_1039db90();
      iVar2 = iVar2 + 1;
      ppvVar1 = ExceptionList;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  ExceptionList = ppvVar1;
  FArray::Empty(in_ECX,0x28,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103f0870 FUN_103f0870

void FUN_103f0870(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b287;
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
    iVar2 = param_1 * 0x34;
    iVar1 = iVar1 - param_1;
    do {
      local_4 = 0;
      FString::~FString((FString *)(*(int *)in_ECX + iVar2 + 0x18));
      local_4 = 0xffffffff;
      thunk_FUN_1038fce0();
      iVar2 = iVar2 + 0x34;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x34);
  ExceptionList = local_c;
  return;
}


// ==== 103f0990 FUN_103f0990

void FUN_103f0990(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b2b7;
  local_c = ExceptionList;
  iVar1 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar2 = 0;
    ExceptionList = &local_c;
    do {
      local_4 = 0;
      FString::~FString((FString *)(*(int *)in_ECX + iVar2 + 0x18));
      local_4 = 0xffffffff;
      thunk_FUN_1038fce0();
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x34;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x34,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103f0a30 FUN_103f0a30

void FUN_103f0a30(byte param_1)

{
  thunk_FUN_103b4ad0();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 103f0a60 FUN_103f0a60

void FUN_103f0a60(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080b3b3;
  local_c = ExceptionList;
  local_4 = 0xd;
  ExceptionList = &local_c;
  thunk_FUN_10398800();
  local_4._0_1_ = 0xc;
  thunk_FUN_103984a0();
  local_4._0_1_ = 0xb;
  thunk_FUN_10398310();
  local_4._0_1_ = 10;
  thunk_FUN_103b1930();
  local_4._0_1_ = 9;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(in_ECX + 0xe4));
  local_4._0_1_ = 0xf;
  thunk_FUN_103906e0();
  local_4._0_1_ = 8;
  FRenderResource::~FRenderResource((FRenderResource *)(in_ECX + 200));
  *(undefined ***)(in_ECX + 0xb4) = FGPUSkinVertexStream::vftable;
  local_4._0_1_ = 7;
  FRenderResource::~FRenderResource((FRenderResource *)(in_ECX + 0xb4));
  local_4._0_1_ = 6;
  FSkinVertexStream::~FSkinVertexStream((FSkinVertexStream *)(in_ECX + 0x78));
  local_4._0_1_ = 5;
  FRawIndexBuffer::~FRawIndexBuffer((FRawIndexBuffer *)(in_ECX + 0x5c));
  local_4._0_1_ = 4;
  FRawIndexBuffer::~FRawIndexBuffer((FRawIndexBuffer *)(in_ECX + 0x40));
  local_4._0_1_ = 3;
  thunk_FUN_103ee860();
  local_4._0_1_ = 2;
  thunk_FUN_103ee860();
  local_4._0_1_ = 1;
  thunk_FUN_10397ff0();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10397f30();
  local_4 = 0xffffffff;
  thunk_FUN_10379700();
  ExceptionList = local_c;
  return;
}


// ==== 103f0bf0 FUN_103f0bf0

void FUN_103f0bf0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080b408;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103f0570();
  ExceptionList = local_c;
  return;
}


// ==== 103f0c40 FUN_103f0c40

void FUN_103f0c40(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)GUndo_exref != 0) {
    (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
  }
  thunk_FUN_103b4cd0(param_1);
  return;
}


// ==== 103f0cf0 FUN_103f0cf0

void FUN_103f0cf0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080b4df;
  local_c = ExceptionList;
  local_4 = 0xc;
  ExceptionList = &local_c;
  thunk_FUN_103edba0();
  local_4._0_1_ = 0xb;
  _eh_vector_destructor_iterator_
            ((void *)(in_ECX + 0xd8),0xc,0xd,(_func_void_void_ptr *)&LAB_1030632f);
  local_4._0_1_ = 10;
  thunk_FUN_1032ce30();
  local_4._0_1_ = 9;
  thunk_FUN_1032ce30();
  local_4._0_1_ = 8;
  thunk_FUN_1032ce30();
  local_4._0_1_ = 7;
  thunk_FUN_1032ce30();
  local_4._0_1_ = 6;
  thunk_FUN_1032ce30();
  local_4._0_1_ = 5;
  thunk_FUN_1032ce30();
  local_4._0_1_ = 4;
  thunk_FUN_1038fce0();
  local_4._0_1_ = 3;
  thunk_FUN_1038fce0();
  local_4._0_1_ = 2;
  thunk_FUN_1032ce30();
  local_4._0_1_ = 1;
  thunk_FUN_1032ce30();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10379700();
  local_4 = 0xffffffff;
  thunk_FUN_10379700();
  ExceptionList = local_c;
  return;
}


// ==== 103f0e50 FUN_103f0e50

void FUN_103f0e50(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b5c7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  puVar2 = param_1 + 5;
  puVar3 = in_ECX + 5;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  thunk_FUN_10379670(param_1 + 0x12);
  local_4 = 0;
  thunk_FUN_10379670(param_1 + 0x15);
  local_4._0_1_ = 1;
  thunk_FUN_1032bd40(param_1 + 0x18);
  local_4._0_1_ = 2;
  thunk_FUN_1032bd40(param_1 + 0x1b);
  local_4._0_1_ = 3;
  thunk_FUN_10379830(param_1 + 0x1e);
  local_4._0_1_ = 4;
  thunk_FUN_10379830(param_1 + 0x21);
  local_4._0_1_ = 5;
  thunk_FUN_1032bd40(param_1 + 0x24);
  local_4._0_1_ = 6;
  thunk_FUN_1032bd40(param_1 + 0x27);
  local_4._0_1_ = 7;
  thunk_FUN_1032bd40(param_1 + 0x2a);
  local_4._0_1_ = 8;
  thunk_FUN_1032bd40(param_1 + 0x2d);
  local_4._0_1_ = 9;
  thunk_FUN_1032bd40(param_1 + 0x30);
  local_4._0_1_ = 10;
  thunk_FUN_1032bd40(param_1 + 0x33);
  local_4 = CONCAT31(local_4._1_3_,0xb);
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x36,param_1 + 0x36,0xc,0xd,(_func_void_void_ptr_void_ptr *)&LAB_1030ff24,
             (_func_void_void_ptr *)&LAB_1030632f);
  thunk_FUN_10390040(param_1 + 0x5d);
  ExceptionList = local_c;
  return;
}


// ==== 103f1050 FUN_103f1050

void FUN_103f1050(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int iVar3;
  int iVar4;
  
  puVar1 = param_1;
  *in_ECX = *param_1;
  puVar2 = in_ECX + 5;
  iVar4 = (int)param_1 - (int)in_ECX;
  in_ECX[1] = param_1[1];
  iVar3 = 0xd;
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  do {
    *puVar2 = *(undefined4 *)((int)puVar2 + iVar4);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  thunk_FUN_103797c0(param_1 + 0x12);
  thunk_FUN_103797c0(param_1 + 0x15);
  thunk_FUN_1032cea0(param_1 + 0x18);
  thunk_FUN_1032cea0(param_1 + 0x1b);
  thunk_FUN_10379900(param_1 + 0x1e);
  thunk_FUN_10379900(param_1 + 0x21);
  thunk_FUN_1032cea0(param_1 + 0x24);
  thunk_FUN_1032cea0(param_1 + 0x27);
  thunk_FUN_1032cea0(param_1 + 0x2a);
  thunk_FUN_1032cea0(param_1 + 0x2d);
  thunk_FUN_1032cea0(param_1 + 0x30);
  thunk_FUN_1032cea0(param_1 + 0x33);
  puVar2 = in_ECX + 0x36;
  param_1 = (undefined4 *)0xd;
  do {
    thunk_FUN_1038ffb0((int)puVar2 + iVar4);
    puVar2 = puVar2 + 3;
    param_1 = (undefined4 *)((int)param_1 + -1);
  } while (param_1 != (undefined4 *)0x0);
  thunk_FUN_103edc10(puVar1 + 0x5d);
  return;
}


// ==== 103f11e0 FUN_103f11e0

void FUN_103f11e0(UPolys *param_1)

{
  if (param_1 != (UPolys *)0x0) {
    UPolys::UPolys(param_1);
    return;
  }
  return;
}


// ==== 103f1200 FUN_103f1200

void FUN_103f1200(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_1080b616;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UTexture::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_103edca0();
  local_4 = 0xffffffff;
  UBitmapMaterial::~UBitmapMaterial((UBitmapMaterial *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f1280 FUN_103f1280

void FUN_103f1280(UBitmapMaterial *param_1)

{
  uint uVar1;
  UBitmapMaterial *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b646;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UBitmapMaterial::UBitmapMaterial(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UTexture::vftable;
  *(undefined4 *)(in_ECX + 0x594) = *(undefined4 *)(param_1 + 0x594);
  *(undefined4 *)(in_ECX + 0x598) = *(undefined4 *)(param_1 + 0x598);
  *(undefined4 *)(in_ECX + 0x59c) = *(undefined4 *)(param_1 + 0x59c);
  *(undefined4 *)(in_ECX + 0x5a0) = *(undefined4 *)(param_1 + 0x5a0);
  *(undefined4 *)(in_ECX + 0x5a4) = *(undefined4 *)(param_1 + 0x5a4);
  *(undefined8 *)(in_ECX + 0x5a8) = *(undefined8 *)(param_1 + 0x5a8);
  *(undefined4 *)(in_ECX + 0x5b0) = *(undefined4 *)(param_1 + 0x5b0);
  *(undefined4 *)(in_ECX + 0x5b4) = *(undefined4 *)(param_1 + 0x5b4);
  in_ECX[0x5b8] = param_1[0x5b8];
  *(undefined4 *)(in_ECX + 0x5bc) = *(undefined4 *)(param_1 + 0x5bc);
  *(uint *)(in_ECX + 0x5c0) =
       *(uint *)(in_ECX + 0x5c0) ^ (*(uint *)(in_ECX + 0x5c0) ^ *(uint *)(param_1 + 0x5c0)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x5c0) ^ *(uint *)(in_ECX + 0x5c0)) & 2 ^ *(uint *)(in_ECX + 0x5c0);
  *(uint *)(in_ECX + 0x5c0) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c0) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x5c0) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c0) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(in_ECX + 0x5c0) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c0) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(in_ECX + 0x5c0) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c0) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(in_ECX + 0x5c0) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c0) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(in_ECX + 0x5c0) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c0) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(in_ECX + 0x5c0) = uVar1;
  *(uint *)(in_ECX + 0x5c0) = (*(uint *)(param_1 + 0x5c0) ^ uVar1) & 0x100 ^ uVar1;
  in_ECX[0x5c4] = param_1[0x5c4];
  *(undefined4 *)(in_ECX + 0x5c8) = *(undefined4 *)(param_1 + 0x5c8);
  *(undefined4 *)(in_ECX + 0x5cc) = *(undefined4 *)(param_1 + 0x5cc);
  *(undefined4 *)(in_ECX + 0x5d0) = *(undefined4 *)(param_1 + 0x5d0);
  *(undefined4 *)(in_ECX + 0x5d4) = *(undefined4 *)(param_1 + 0x5d4);
  *(undefined4 *)(in_ECX + 0x5d8) = *(undefined4 *)(param_1 + 0x5d8);
  in_ECX[0x5dc] = param_1[0x5dc];
  in_ECX[0x5dd] = param_1[0x5dd];
  *(undefined4 *)(in_ECX + 0x5e0) = *(undefined4 *)(param_1 + 0x5e0);
  *(undefined4 *)(in_ECX + 0x5e4) = *(undefined4 *)(param_1 + 0x5e4);
  *(undefined4 *)(in_ECX + 0x5e8) = *(undefined4 *)(param_1 + 0x5e8);
  *(undefined4 *)(in_ECX + 0x5ec) = *(undefined4 *)(param_1 + 0x5ec);
  thunk_FUN_103afe10(param_1 + 0x5f0);
  in_ECX[0x5fc] = param_1[0x5fc];
  in_ECX[0x5fd] = param_1[0x5fd];
  in_ECX[0x5fe] = param_1[0x5fe];
  *(undefined4 *)(in_ECX + 0x600) = *(undefined4 *)(param_1 + 0x600);
  *(undefined8 *)(in_ECX + 0x604) = *(undefined8 *)(param_1 + 0x604);
  ExceptionList = local_c;
  return;
}


// ==== 103f1590 FUN_103f1590

void FUN_103f1590(UBitmapMaterial *param_1)

{
  uint uVar1;
  UBitmapMaterial *in_ECX;
  
  UBitmapMaterial::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x594) = *(undefined4 *)(param_1 + 0x594);
  *(undefined4 *)(in_ECX + 0x598) = *(undefined4 *)(param_1 + 0x598);
  *(undefined4 *)(in_ECX + 0x59c) = *(undefined4 *)(param_1 + 0x59c);
  *(undefined4 *)(in_ECX + 0x5a0) = *(undefined4 *)(param_1 + 0x5a0);
  *(undefined4 *)(in_ECX + 0x5a4) = *(undefined4 *)(param_1 + 0x5a4);
  *(undefined8 *)(in_ECX + 0x5a8) = *(undefined8 *)(param_1 + 0x5a8);
  *(undefined4 *)(in_ECX + 0x5b0) = *(undefined4 *)(param_1 + 0x5b0);
  *(undefined4 *)(in_ECX + 0x5b4) = *(undefined4 *)(param_1 + 0x5b4);
  in_ECX[0x5b8] = param_1[0x5b8];
  *(undefined4 *)(in_ECX + 0x5bc) = *(undefined4 *)(param_1 + 0x5bc);
  *(uint *)(in_ECX + 0x5c0) =
       *(uint *)(in_ECX + 0x5c0) ^ (*(uint *)(in_ECX + 0x5c0) ^ *(uint *)(param_1 + 0x5c0)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x5c0) ^ *(uint *)(in_ECX + 0x5c0)) & 2 ^ *(uint *)(in_ECX + 0x5c0);
  *(uint *)(in_ECX + 0x5c0) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c0) ^ uVar1) & 4 ^ uVar1;
  *(uint *)(in_ECX + 0x5c0) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c0) ^ uVar1) & 8 ^ uVar1;
  *(uint *)(in_ECX + 0x5c0) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c0) ^ uVar1) & 0x10 ^ uVar1;
  *(uint *)(in_ECX + 0x5c0) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c0) ^ uVar1) & 0x20 ^ uVar1;
  *(uint *)(in_ECX + 0x5c0) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c0) ^ uVar1) & 0x40 ^ uVar1;
  *(uint *)(in_ECX + 0x5c0) = uVar1;
  uVar1 = (*(uint *)(param_1 + 0x5c0) ^ uVar1) & 0x80 ^ uVar1;
  *(uint *)(in_ECX + 0x5c0) = uVar1;
  *(uint *)(in_ECX + 0x5c0) = (*(uint *)(param_1 + 0x5c0) ^ uVar1) & 0x100 ^ uVar1;
  in_ECX[0x5c4] = param_1[0x5c4];
  *(undefined4 *)(in_ECX + 0x5c8) = *(undefined4 *)(param_1 + 0x5c8);
  *(undefined4 *)(in_ECX + 0x5cc) = *(undefined4 *)(param_1 + 0x5cc);
  *(undefined4 *)(in_ECX + 0x5d0) = *(undefined4 *)(param_1 + 0x5d0);
  *(undefined4 *)(in_ECX + 0x5d4) = *(undefined4 *)(param_1 + 0x5d4);
  *(undefined4 *)(in_ECX + 0x5d8) = *(undefined4 *)(param_1 + 0x5d8);
  in_ECX[0x5dc] = param_1[0x5dc];
  in_ECX[0x5dd] = param_1[0x5dd];
  *(undefined4 *)(in_ECX + 0x5e0) = *(undefined4 *)(param_1 + 0x5e0);
  *(undefined4 *)(in_ECX + 0x5e4) = *(undefined4 *)(param_1 + 0x5e4);
  *(undefined4 *)(in_ECX + 0x5e8) = *(undefined4 *)(param_1 + 0x5e8);
  *(undefined4 *)(in_ECX + 0x5ec) = *(undefined4 *)(param_1 + 0x5ec);
  thunk_FUN_103edd10(param_1 + 0x5f0);
  in_ECX[0x5fc] = param_1[0x5fc];
  in_ECX[0x5fd] = param_1[0x5fd];
  in_ECX[0x5fe] = param_1[0x5fe];
  *(undefined4 *)(in_ECX + 0x600) = *(undefined4 *)(param_1 + 0x600);
  *(undefined8 *)(in_ECX + 0x604) = *(undefined8 *)(param_1 + 0x604);
  return;
}


// ==== 103f1850 FUN_103f1850

void FUN_103f1850(byte param_1)

{
  UTexture *in_ECX;
  
  UTexture::~UTexture(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x60c);
  }
  return;
}


// ==== 103f1880 FUN_103f1880

UTexture * FUN_103f1880(byte param_1)

{
  UTexture *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x60c,*(int *)(in_ECX + -4),UTexture::~UTexture);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTexture::~UTexture(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x60c);
  }
  return in_ECX;
}


// ==== 103f1900 FUN_103f1900

void FUN_103f1900(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080b668;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UCubemap::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UTexture::~UTexture((UTexture *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f1970 FUN_103f1970

void FUN_103f1970(UTexture *param_1)

{
  UTexture *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b688;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UTexture::UTexture(in_ECX,param_1);
  *(undefined ***)in_ECX = UCubemap::vftable;
  *(undefined4 *)(in_ECX + 0x60c) = *(undefined4 *)(param_1 + 0x60c);
  *(undefined4 *)(in_ECX + 0x610) = *(undefined4 *)(param_1 + 0x610);
  *(undefined4 *)(in_ECX + 0x614) = *(undefined4 *)(param_1 + 0x614);
  *(undefined4 *)(in_ECX + 0x618) = *(undefined4 *)(param_1 + 0x618);
  *(undefined4 *)(in_ECX + 0x61c) = *(undefined4 *)(param_1 + 0x61c);
  *(undefined4 *)(in_ECX + 0x620) = *(undefined4 *)(param_1 + 0x620);
  *(undefined4 *)(in_ECX + 0x624) = *(undefined4 *)(param_1 + 0x624);
  ExceptionList = local_c;
  return;
}


// ==== 103f1a40 FUN_103f1a40

void FUN_103f1a40(UTexture *param_1)

{
  UTexture *in_ECX;
  
  UTexture::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x60c) = *(undefined4 *)(param_1 + 0x60c);
  *(undefined4 *)(in_ECX + 0x610) = *(undefined4 *)(param_1 + 0x610);
  *(undefined4 *)(in_ECX + 0x614) = *(undefined4 *)(param_1 + 0x614);
  *(undefined4 *)(in_ECX + 0x618) = *(undefined4 *)(param_1 + 0x618);
  *(undefined4 *)(in_ECX + 0x61c) = *(undefined4 *)(param_1 + 0x61c);
  *(undefined4 *)(in_ECX + 0x620) = *(undefined4 *)(param_1 + 0x620);
  *(undefined4 *)(in_ECX + 0x624) = *(undefined4 *)(param_1 + 0x624);
  return;
}


// ==== 103f1ad0 FUN_103f1ad0

void FUN_103f1ad0(byte param_1)

{
  UCubemap *in_ECX;
  
  UCubemap::~UCubemap(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x628);
  }
  return;
}


// ==== 103f1b00 FUN_103f1b00

UCubemap * FUN_103f1b00(byte param_1)

{
  UCubemap *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x628,*(int *)(in_ECX + -4),UCubemap::~UCubemap);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UCubemap::~UCubemap(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x628);
  }
  return in_ECX;
}


// ==== 103f1b80 FUN_103f1b80

void FUN_103f1b80(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080b6d2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UFont::vftable;
  local_4 = 3;
  UObject::ConditionalDestroy(in_ECX);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 2;
  thunk_FUN_103aff80();
  local_4._0_1_ = 1;
  thunk_FUN_10391be0();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10391a80();
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f1c30 FUN_103f1c30

void FUN_103f1c30(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b722;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UFont::vftable;
  thunk_FUN_1037aba0(param_1 + 0x34);
  local_4._0_1_ = 1;
  thunk_FUN_1037ac80(param_1 + 0x40);
  local_4 = CONCAT31(local_4._1_3_,2);
  thunk_FUN_103aff00(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  ExceptionList = local_c;
  return;
}


// ==== 103f1cf0 FUN_103f1cf0

void FUN_103f1cf0(byte param_1)

{
  UFont *in_ECX;
  
  UFont::~UFont(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x68);
  }
  return;
}


// ==== 103f1d20 FUN_103f1d20

UFont * FUN_103f1d20(byte param_1)

{
  UFont *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x68,*(int *)(in_ECX + -4),UFont::~UFont);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UFont::~UFont(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x68);
  }
  return in_ECX;
}


// ==== 103f1da0 FUN_103f1da0

void FUN_103f1da0(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b782;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10336430();
  *in_ECX = FLightMap::vftable;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FArray::FArray((FArray *)(in_ECX + 0x25));
  local_4 = CONCAT31(local_4._1_3_,3);
  FArray::FArray((FArray *)(in_ECX + 0x28));
  ExceptionList = local_c;
  return;
}


// ==== 103f1e40 FUN_103f1e40

FArchive * FUN_103f1e40(FArchive *param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  FArchive *pFVar3;
  int iVar4;
  FCompactIndex *pFVar5;
  FCompactIndex *pFVar6;
  FCompactIndex *pFVar7;
  FCompactIndex *pFVar8;
  FCompactIndex *pFVar9;
  FCompactIndex *pFVar10;
  
  iVar2 = param_2;
  pFVar10 = (FCompactIndex *)(param_2 + 0x28);
  pFVar9 = (FCompactIndex *)(param_2 + 0x24);
  pFVar8 = (FCompactIndex *)(param_2 + 0x20);
  pFVar7 = (FCompactIndex *)(param_2 + 0x1c);
  pFVar6 = (FCompactIndex *)(param_2 + 0x18);
  pFVar5 = (FCompactIndex *)(param_2 + 0x14);
  pvVar1 = (void *)(param_2 + 0x70);
  pFVar3 = operator<<(param_1,(FCompactIndex *)(param_2 + 0x10));
  pFVar3 = operator<<(pFVar3,pFVar5);
  pFVar3 = operator<<(pFVar3,pFVar6);
  pFVar3 = operator<<(pFVar3,pFVar7);
  pFVar3 = operator<<(pFVar3,pFVar8);
  pFVar3 = operator<<(pFVar3,pFVar9);
  pFVar3 = operator<<(pFVar3,pFVar10);
  pFVar3 = (FArchive *)thunk_FUN_10330350(pFVar3);
  FArchive::ByteOrderSerialize(pFVar3,pvVar1,4);
  FArchive::ByteOrderSerialize(pFVar3,(void *)(iVar2 + 0x74),4);
  FArchive::ByteOrderSerialize(pFVar3,(void *)(iVar2 + 0x78),4);
  FArchive::ByteOrderSerialize(pFVar3,(void *)(iVar2 + 0x7c),4);
  FArchive::ByteOrderSerialize(pFVar3,(void *)(iVar2 + 0x80),4);
  FArchive::ByteOrderSerialize(pFVar3,(void *)(iVar2 + 0x84),4);
  FArchive::ByteOrderSerialize(pFVar3,(void *)(iVar2 + 0x88),4);
  FArchive::ByteOrderSerialize(pFVar3,(void *)(iVar2 + 0x8c),4);
  FArchive::ByteOrderSerialize(pFVar3,(void *)(iVar2 + 0x90),4);
  iVar4 = FArchive::Ver(param_1);
  if (0x6a < iVar4) {
    thunk_FUN_103ede00(param_1,iVar2 + 0x94);
    iVar4 = FArchive::Ver(param_1);
    if (iVar4 < 0x6c) {
      param_2 = 0;
      FArchive::ByteOrderSerialize(param_1,&param_2,4);
    }
  }
  iVar4 = FArchive::Ver(param_1);
  if (0x6d < iVar4) {
    pFVar3 = (FArchive *)(**(code **)(*(int *)param_1 + 0x18))(iVar2 + 0xc);
    FArchive::ByteOrderSerialize(pFVar3,(void *)(iVar2 + 0x2c),4);
    return param_1;
  }
  iVar4 = FArchive::IsLoading(param_1);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
  }
  return param_1;
}


// ==== 103f2010 FUN_103f2010

void FUN_103f2010(void)

{
  FRenderResource *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080b7e0;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  thunk_FUN_10326630();
  local_4._0_1_ = 1;
  thunk_FUN_103edd90();
  local_4 = (uint)local_4._1_3_ << 8;
  FMatrix::~FMatrix((FMatrix *)(in_ECX + 0x30));
  local_4 = 0xffffffff;
  FRenderResource::~FRenderResource(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f20a0 FUN_103f20a0

void FUN_103f20a0(int param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b830;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10374410(param_1);
  *in_ECX = FLightMap::vftable;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  in_ECX[10] = *(undefined4 *)(param_1 + 0x28);
  in_ECX[0xb] = *(undefined4 *)(param_1 + 0x2c);
  puVar2 = (undefined4 *)(param_1 + 0x30);
  puVar3 = in_ECX + 0xc;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  in_ECX[0x1c] = *(undefined4 *)(param_1 + 0x70);
  in_ECX[0x1d] = *(undefined4 *)(param_1 + 0x74);
  in_ECX[0x1e] = *(undefined4 *)(param_1 + 0x78);
  in_ECX[0x1f] = *(undefined4 *)(param_1 + 0x7c);
  in_ECX[0x20] = *(undefined4 *)(param_1 + 0x80);
  in_ECX[0x21] = *(undefined4 *)(param_1 + 0x84);
  in_ECX[0x22] = *(undefined4 *)(param_1 + 0x88);
  in_ECX[0x23] = *(undefined4 *)(param_1 + 0x8c);
  in_ECX[0x24] = *(undefined4 *)(param_1 + 0x90);
  thunk_FUN_10391fc0(param_1 + 0x94);
  local_4 = CONCAT31(local_4._1_3_,2);
  thunk_FUN_1032bef0(param_1 + 0xa0);
  ExceptionList = local_c;
  return;
}


// ==== 103f2210 FUN_103f2210

void FUN_103f2210(int param_1)

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
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  puVar2 = (undefined4 *)(param_1 + 0x30);
  puVar3 = (undefined4 *)(in_ECX + 0x30);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  thunk_FUN_103edf60(param_1 + 0x94);
  thunk_FUN_1032bfc0(param_1 + 0xa0);
  return;
}


// ==== 103f2320 FUN_103f2320

void FUN_103f2320(byte param_1)

{
  FLightMap *in_ECX;
  
  FLightMap::~FLightMap(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 103f2350 FUN_103f2350

FLightMap * FUN_103f2350(byte param_1)

{
  FLightMap *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0xac,*(int *)(in_ECX + -4),FLightMap::~FLightMap);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FLightMap::~FLightMap(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 103f23d0 FUN_103f23d0

void FUN_103f23d0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080b858;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103edff0();
  ExceptionList = local_c;
  return;
}


// ==== 103f2420 FUN_103f2420

void FUN_103f2420(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_10392370(param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 103f2490 FUN_103f2490

void FUN_103f2490(undefined1 *param_1)

{
  undefined1 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080b890;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *in_ECX = *param_1;
  thunk_FUN_1037b190(param_1 + 4);
  thunk_FUN_103ee160(param_1 + 0x10);
  thunk_FUN_1038dee0(param_1 + 0x1c);
  ExceptionList = local_10;
  return;
}


// ==== 103f24fa Catch@103f24fa

void Catch_103f24fa(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 103f250e Catch@103f250e

void Catch_103f250e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2MeshAnimSkinNotify::operator =");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103f2560 FUN_103f2560

void FUN_103f2560(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080b8a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *in_ECX = *param_1;
  thunk_FUN_10379380(param_1 + 1);
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  thunk_FUN_10392970(param_1 + 7);
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  thunk_FUN_103f2490(param_1 + 0x11);
  ExceptionList = local_10;
  return;
}


// ==== 103f25fc Catch@103f25fc

void Catch_103f25fc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 103f2610 Catch@103f2610

void Catch_103f2610(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FMeshAnimSeq::operator =");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103f2660 FUN_103f2660

void FUN_103f2660(void)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080b8dc;
  local_c = ExceptionList;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  thunk_FUN_10392730();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_103ee060();
  local_4 = 0xffffffff;
  thunk_FUN_103927f0();
  ExceptionList = local_c;
  return;
}


// ==== 103f26f0 FUN_103f26f0

void FUN_103f26f0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b94d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX);
  local_4 = 1;
  FArray::FArray(in_ECX + 0xc);
  local_4._0_1_ = 3;
  FArray::FArray(in_ECX + 0x18);
  local_4 = CONCAT31(local_4._1_3_,5);
  FArray::FArray(in_ECX + 0x24);
  ExceptionList = local_c;
  return;
}


// ==== 103f2790 FUN_103f2790

void FUN_103f2790(void)

{
  thunk_FUN_1037b6d0(0);
  thunk_FUN_103ee280(0);
  thunk_FUN_1037b8d0(0);
  thunk_FUN_1037b4c0(0);
  return;
}


// ==== 103f27d0 FUN_103f27d0

void FUN_103f27d0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080b999;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  thunk_FUN_103ee210();
  local_4._0_1_ = 1;
  thunk_FUN_10393070();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10392eb0();
  local_4 = 0xffffffff;
  thunk_FUN_10392ce0();
  ExceptionList = local_c;
  return;
}


// ==== 103f2850 FUN_103f2850

void FUN_103f2850(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080b9d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_1037b3e0(param_1);
  local_4 = 0;
  thunk_FUN_1037b5e0(param_1 + 0xc);
  local_4._0_1_ = 1;
  thunk_FUN_1037b7f0(param_1 + 0x18);
  local_4 = CONCAT31(local_4._1_3_,2);
  thunk_FUN_103b0460(param_1 + 0x24);
  ExceptionList = local_c;
  return;
}


// ==== 103f28f0 FUN_103f28f0

void FUN_103f28f0(int param_1)

{
  thunk_FUN_1037b550(param_1);
  thunk_FUN_1037b760(param_1 + 0xc);
  thunk_FUN_1037b960(param_1 + 0x18);
  thunk_FUN_103ee330(param_1 + 0x24);
  return;
}


// ==== 103f2940 FUN_103f2940

void FUN_103f2940(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_1080ba04;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UKMeshProps::vftable;
  local_4 = 1;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = local_4 & 0xffffff00;
  FKAggregateGeom::~FKAggregateGeom((FKAggregateGeom *)(in_ECX + 0x58));
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f29c0 FUN_103f29c0

void FUN_103f29c0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ba34;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UKMeshProps::vftable;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  FKAggregateGeom::FKAggregateGeom((FKAggregateGeom *)(in_ECX + 0x58));
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 103f2a60 FUN_103f2a60

void FUN_103f2a60(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ba64;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UKMeshProps::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  FKAggregateGeom::FKAggregateGeom
            ((FKAggregateGeom *)(in_ECX + 0x58),(FKAggregateGeom *)(param_1 + 0x58));
  ExceptionList = local_c;
  return;
}


// ==== 103f2b20 FUN_103f2b20

void FUN_103f2b20(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  thunk_FUN_1037b550(param_1 + 0x58);
  thunk_FUN_1037b760(param_1 + 100);
  thunk_FUN_1037b960(param_1 + 0x70);
  thunk_FUN_103ee330(param_1 + 0x7c);
  return;
}


// ==== 103f2bc0 FUN_103f2bc0

void FUN_103f2bc0(byte param_1)

{
  UKMeshProps *in_ECX;
  
  UKMeshProps::~UKMeshProps(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x88);
  }
  return;
}


// ==== 103f2bf0 FUN_103f2bf0

UKMeshProps * FUN_103f2bf0(byte param_1)

{
  UKMeshProps *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x88,*(int *)(in_ECX + -4),UKMeshProps::~UKMeshProps);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UKMeshProps::~UKMeshProps(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x88);
  }
  return in_ECX;
}


// ==== 103f2c70 FUN_103f2c70

void FUN_103f2c70(AActor *param_1)

{
  if (param_1 != (AActor *)0x0) {
    AActor::AActor(param_1);
    return;
  }
  return;
}


// ==== 103f2c90 FUN_103f2c90

void FUN_103f2c90(ADecoVolumeObject *param_1)

{
  if (param_1 != (ADecoVolumeObject *)0x0) {
    ADecoVolumeObject::ADecoVolumeObject(param_1);
    return;
  }
  return;
}


// ==== 103f2cb0 FUN_103f2cb0

void FUN_103f2cb0(AKeypoint *param_1)

{
  if (param_1 != (AKeypoint *)0x0) {
    AKeypoint::AKeypoint(param_1);
    return;
  }
  return;
}


// ==== 103f2cd0 FUN_103f2cd0

void FUN_103f2cd0(ADecorationList *param_1)

{
  if (param_1 != (ADecorationList *)0x0) {
    ADecorationList::ADecorationList(param_1);
    return;
  }
  return;
}


// ==== 103f2cf0 FUN_103f2cf0

void FUN_103f2cf0(ALookTarget *param_1)

{
  if (param_1 != (ALookTarget *)0x0) {
    ALookTarget::ALookTarget(param_1);
    return;
  }
  return;
}


// ==== 103f2d10 FUN_103f2d10

void FUN_103f2d10(AAmbientSound *param_1)

{
  if (param_1 != (AAmbientSound *)0x0) {
    AAmbientSound::AAmbientSound(param_1);
    return;
  }
  return;
}


// ==== 103f2d30 FUN_103f2d30

void FUN_103f2d30(AAIScript *param_1)

{
  if (param_1 != (AAIScript *)0x0) {
    AAIScript::AAIScript(param_1);
    return;
  }
  return;
}


// ==== 103f2d50 FUN_103f2d50

void FUN_103f2d50(AInterpolationPoint *param_1)

{
  if (param_1 != (AInterpolationPoint *)0x0) {
    AInterpolationPoint::AInterpolationPoint(param_1);
    return;
  }
  return;
}


// ==== 103f2d70 FUN_103f2d70

void FUN_103f2d70(APolyMarker *param_1)

{
  if (param_1 != (APolyMarker *)0x0) {
    APolyMarker::APolyMarker(param_1);
    return;
  }
  return;
}


// ==== 103f2d90 FUN_103f2d90

void FUN_103f2d90(AClipMarker *param_1)

{
  if (param_1 != (AClipMarker *)0x0) {
    AClipMarker::AClipMarker(param_1);
    return;
  }
  return;
}


// ==== 103f2db0 FUN_103f2db0

void FUN_103f2db0(AViewportWindowController *param_1)

{
  if (param_1 != (AViewportWindowController *)0x0) {
    AViewportWindowController::AViewportWindowController(param_1);
    return;
  }
  return;
}


// ==== 103f2dd0 FUN_103f2dd0

void FUN_103f2dd0(AInfo *param_1)

{
  if (param_1 != (AInfo *)0x0) {
    AInfo::AInfo(param_1);
    return;
  }
  return;
}


// ==== 103f2df0 FUN_103f2df0

void FUN_103f2df0(ASecurity *param_1)

{
  if (param_1 != (ASecurity *)0x0) {
    ASecurity::ASecurity(param_1);
    return;
  }
  return;
}


// ==== 103f2e10 FUN_103f2e10

void FUN_103f2e10(ASceneManager *param_1)

{
  if (param_1 != (ASceneManager *)0x0) {
    ASceneManager::ASceneManager(param_1);
    return;
  }
  return;
}


// ==== 103f2e30 FUN_103f2e30

void FUN_103f2e30(AL2SeamlessInfo *param_1)

{
  if (param_1 != (AL2SeamlessInfo *)0x0) {
    AL2SeamlessInfo::AL2SeamlessInfo(param_1);
    return;
  }
  return;
}


// ==== 103f2e50 FUN_103f2e50

void FUN_103f2e50(ASuperPointInfo *param_1)

{
  if (param_1 != (ASuperPointInfo *)0x0) {
    ASuperPointInfo::ASuperPointInfo(param_1);
    return;
  }
  return;
}


// ==== 103f2e70 FUN_103f2e70

void FUN_103f2e70(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080bac3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = AServerPrimitive::vftable;
  local_4 = 3;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 2;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(in_ECX + 0x3d8));
  local_4._0_1_ = 1;
  thunk_FUN_103b07c0();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_103b0730();
  local_4 = 0xffffffff;
  AInfo::~AInfo((AInfo *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f2f30 FUN_103f2f30

void FUN_103f2f30(void)

{
  AActor *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080bb3d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AActor::AActor(in_ECX);
  *(undefined ***)in_ECX = AInfo::vftable;
  local_4 = 1;
  *(undefined ***)in_ECX = AServerPrimitive::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x3bc),0);
  local_4._0_1_ = 4;
  FArray::FArray((FArray *)(in_ECX + 0x3c8),0);
  local_4 = CONCAT31(local_4._1_3_,7);
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x3d8));
  ExceptionList = local_c;
  return;
}


// ==== 103f2ff0 FUN_103f2ff0

void FUN_103f2ff0(AInfo *param_1)

{
  AInfo *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080bba3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AInfo::AInfo(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = AServerPrimitive::vftable;
  thunk_FUN_1037bfc0(param_1 + 0x3bc);
  local_4._0_1_ = 2;
  thunk_FUN_1037c080(param_1 + 0x3c8);
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined4 *)(in_ECX + 0x3d4) = *(undefined4 *)(param_1 + 0x3d4);
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x3d8),(FStringNoInit *)(param_1 + 0x3d8))
  ;
  ExceptionList = local_c;
  return;
}


// ==== 103f30d0 FUN_103f30d0

void FUN_103f30d0(byte param_1)

{
  AServerPrimitive *in_ECX;
  
  AServerPrimitive::~AServerPrimitive(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3e4);
  }
  return;
}


// ==== 103f3100 FUN_103f3100

AServerPrimitive * FUN_103f3100(byte param_1)

{
  AServerPrimitive *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x3e4,*(int *)(in_ECX + -4),AServerPrimitive::~AServerPrimitive);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  AServerPrimitive::~AServerPrimitive(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x3e4);
  }
  return in_ECX;
}


// ==== 103f3180 FUN_103f3180

void FUN_103f3180(ANpcPosInfo *param_1)

{
  if (param_1 != (ANpcPosInfo *)0x0) {
    ANpcPosInfo::ANpcPosInfo(param_1);
    return;
  }
  return;
}


// ==== 103f31a0 FUN_103f31a0

void FUN_103f31a0(ALocationInfo *param_1)

{
  if (param_1 != (ALocationInfo *)0x0) {
    ALocationInfo::ALocationInfo(param_1);
    return;
  }
  return;
}


// ==== 103f31c0 FUN_103f31c0

void FUN_103f31c0(AEnvCreatureManagerInfo *param_1)

{
  if (param_1 != (AEnvCreatureManagerInfo *)0x0) {
    AEnvCreatureManagerInfo::AEnvCreatureManagerInfo(param_1);
    return;
  }
  return;
}


// ==== 103f31e0 FUN_103f31e0

void FUN_103f31e0(AReplicationInfo *param_1)

{
  if (param_1 != (AReplicationInfo *)0x0) {
    AReplicationInfo::AReplicationInfo(param_1);
    return;
  }
  return;
}


// ==== 103f3200 FUN_103f3200

void FUN_103f3200(ATeamInfo *param_1)

{
  if (param_1 != (ATeamInfo *)0x0) {
    ATeamInfo::ATeamInfo(param_1);
    return;
  }
  return;
}


// ==== 103f3220 FUN_103f3220

void FUN_103f3220(AGameReplicationInfo *param_1)

{
  if (param_1 != (AGameReplicationInfo *)0x0) {
    AGameReplicationInfo::AGameReplicationInfo(param_1);
    return;
  }
  return;
}


// ==== 103f3240 FUN_103f3240

void FUN_103f3240(APlayerReplicationInfo *param_1)

{
  if (param_1 != (APlayerReplicationInfo *)0x0) {
    APlayerReplicationInfo::APlayerReplicationInfo(param_1);
    return;
  }
  return;
}


// ==== 103f3260 FUN_103f3260

void FUN_103f3260(APotentialClimbWatcher *param_1)

{
  if (param_1 != (APotentialClimbWatcher *)0x0) {
    APotentialClimbWatcher::APotentialClimbWatcher(param_1);
    return;
  }
  return;
}


// ==== 103f3280 FUN_103f3280

void FUN_103f3280(AMutator *param_1)

{
  if (param_1 != (AMutator *)0x0) {
    AMutator::AMutator(param_1);
    return;
  }
  return;
}


// ==== 103f32a0 FUN_103f32a0

void FUN_103f32a0(AInternetInfo *param_1)

{
  if (param_1 != (AInternetInfo *)0x0) {
    AInternetInfo::AInternetInfo(param_1);
    return;
  }
  return;
}


// ==== 103f32c0 FUN_103f32c0

void FUN_103f32c0(ASavedMove *param_1)

{
  if (param_1 != (ASavedMove *)0x0) {
    ASavedMove::ASavedMove(param_1);
    return;
  }
  return;
}


// ==== 103f32e0 FUN_103f32e0

void FUN_103f32e0(AZoneInfo *param_1)

{
  if (param_1 != (AZoneInfo *)0x0) {
    AZoneInfo::AZoneInfo(param_1);
    return;
  }
  return;
}


// ==== 103f3300 FUN_103f3300

void FUN_103f3300(AWarpZoneInfo *param_1)

{
  if (param_1 != (AWarpZoneInfo *)0x0) {
    AWarpZoneInfo::AWarpZoneInfo(param_1);
    return;
  }
  return;
}


// ==== 103f3320 FUN_103f3320

void FUN_103f3320(ASkyZoneInfo *param_1)

{
  if (param_1 != (ASkyZoneInfo *)0x0) {
    ASkyZoneInfo::ASkyZoneInfo(param_1);
    return;
  }
  return;
}


// ==== 103f3340 FUN_103f3340

void FUN_103f3340(ALevelInfo *param_1)

{
  if (param_1 != (ALevelInfo *)0x0) {
    ALevelInfo::ALevelInfo(param_1);
    return;
  }
  return;
}


// ==== 103f3360 FUN_103f3360

void FUN_103f3360(AGameInfo *param_1)

{
  if (param_1 != (AGameInfo *)0x0) {
    AGameInfo::AGameInfo(param_1);
    return;
  }
  return;
}


// ==== 103f3380 FUN_103f3380

void FUN_103f3380(AStatLog *param_1)

{
  if (param_1 != (AStatLog *)0x0) {
    AStatLog::AStatLog(param_1);
    return;
  }
  return;
}


// ==== 103f33a0 FUN_103f33a0

void FUN_103f33a0(AStatLogFile *param_1)

{
  if (param_1 != (AStatLogFile *)0x0) {
    AStatLogFile::AStatLogFile(param_1);
    return;
  }
  return;
}


// ==== 103f33c0 FUN_103f33c0

void FUN_103f33c0(AStaticMeshActor *param_1)

{
  if (param_1 != (AStaticMeshActor *)0x0) {
    AStaticMeshActor::AStaticMeshActor(param_1);
    return;
  }
  return;
}


// ==== 103f33e0 FUN_103f33e0

void FUN_103f33e0(AMovableStaticMeshActor *param_1)

{
  if (param_1 != (AMovableStaticMeshActor *)0x0) {
    AMovableStaticMeshActor::AMovableStaticMeshActor(param_1);
    return;
  }
  return;
}


// ==== 103f3400 FUN_103f3400

void FUN_103f3400(ASpawnableStaticMeshActor *param_1)

{
  if (param_1 != (ASpawnableStaticMeshActor *)0x0) {
    ASpawnableStaticMeshActor::ASpawnableStaticMeshActor(param_1);
    return;
  }
  return;
}


// ==== 103f3420 FUN_103f3420

void FUN_103f3420(AProjector *param_1)

{
  if (param_1 != (AProjector *)0x0) {
    AProjector::AProjector(param_1);
    return;
  }
  return;
}


// ==== 103f3440 FUN_103f3440

void FUN_103f3440(AMarkProjector *param_1)

{
  if (param_1 != (AMarkProjector *)0x0) {
    AMarkProjector::AMarkProjector(param_1);
    return;
  }
  return;
}


// ==== 103f3460 FUN_103f3460

void FUN_103f3460(AShadowProjector *param_1)

{
  if (param_1 != (AShadowProjector *)0x0) {
    AShadowProjector::AShadowProjector(param_1);
    return;
  }
  return;
}


// ==== 103f3480 FUN_103f3480

void FUN_103f3480(AMatDemoActor *param_1)

{
  if (param_1 != (AMatDemoActor *)0x0) {
    AMatDemoActor::AMatDemoActor(param_1);
    return;
  }
  return;
}


// ==== 103f34a0 FUN_103f34a0

void FUN_103f34a0(APawn *param_1)

{
  if (param_1 != (APawn *)0x0) {
    APawn::APawn(param_1);
    return;
  }
  return;
}


// ==== 103f34c0 FUN_103f34c0

void FUN_103f34c0(AVehicle *param_1)

{
  if (param_1 != (AVehicle *)0x0) {
    AVehicle::AVehicle(param_1);
    return;
  }
  return;
}


// ==== 103f34e0 FUN_103f34e0

void FUN_103f34e0(AVehicleRoutePoint *param_1)

{
  if (param_1 != (AVehicleRoutePoint *)0x0) {
    AVehicleRoutePoint::AVehicleRoutePoint(param_1);
    return;
  }
  return;
}


// ==== 103f3500 FUN_103f3500

void FUN_103f3500(AScout *param_1)

{
  if (param_1 != (AScout *)0x0) {
    AScout::AScout(param_1);
    return;
  }
  return;
}


// ==== 103f3520 FUN_103f3520

void FUN_103f3520(AKVehicle *param_1)

{
  if (param_1 != (AKVehicle *)0x0) {
    AKVehicle::AKVehicle(param_1);
    return;
  }
  return;
}


// ==== 103f3540 FUN_103f3540

void FUN_103f3540(AEmitter *param_1)

{
  if (param_1 != (AEmitter *)0x0) {
    AEmitter::AEmitter(param_1);
    return;
  }
  return;
}


// ==== 103f3560 FUN_103f3560

void FUN_103f3560(AAirEmitter *param_1)

{
  if (param_1 != (AAirEmitter *)0x0) {
    AAirEmitter::AAirEmitter(param_1);
    return;
  }
  return;
}


// ==== 103f3580 FUN_103f3580

void FUN_103f3580(AWaterHitEmitter *param_1)

{
  if (param_1 != (AWaterHitEmitter *)0x0) {
    AWaterHitEmitter::AWaterHitEmitter(param_1);
    return;
  }
  return;
}


// ==== 103f35a0 FUN_103f35a0

void FUN_103f35a0(AL2Indicator *param_1)

{
  if (param_1 != (AL2Indicator *)0x0) {
    AL2Indicator::AL2Indicator(param_1);
    return;
  }
  return;
}


// ==== 103f35c0 FUN_103f35c0

void FUN_103f35c0(ANProjectile *param_1)

{
  if (param_1 != (ANProjectile *)0x0) {
    ANProjectile::ANProjectile(param_1);
    return;
  }
  return;
}


// ==== 103f35e0 FUN_103f35e0

void FUN_103f35e0(ANSkillProjectile *param_1)

{
  if (param_1 != (ANSkillProjectile *)0x0) {
    ANSkillProjectile::ANSkillProjectile(param_1);
    return;
  }
  return;
}


// ==== 103f3600 FUN_103f3600

void FUN_103f3600(ANCubics *param_1)

{
  if (param_1 != (ANCubics *)0x0) {
    ANCubics::ANCubics(param_1);
    return;
  }
  return;
}


// ==== 103f3620 FUN_103f3620

void FUN_103f3620(AFluidSurfaceOscillator *param_1)

{
  if (param_1 != (AFluidSurfaceOscillator *)0x0) {
    AFluidSurfaceOscillator::AFluidSurfaceOscillator(param_1);
    return;
  }
  return;
}


// ==== 103f3640 FUN_103f3640

void FUN_103f3640(AL2Radar *param_1)

{
  if (param_1 != (AL2Radar *)0x0) {
    AL2Radar::AL2Radar(param_1);
    return;
  }
  return;
}


// ==== 103f3660 FUN_103f3660

void FUN_103f3660(ALight *param_1)

{
  if (param_1 != (ALight *)0x0) {
    ALight::ALight(param_1);
    return;
  }
  return;
}


// ==== 103f3680 FUN_103f3680

void FUN_103f3680(AEmitterLight *param_1)

{
  if (param_1 != (AEmitterLight *)0x0) {
    AEmitterLight::AEmitterLight(param_1);
    return;
  }
  return;
}


// ==== 103f36a0 FUN_103f36a0

void FUN_103f36a0(ANMovableSunLight *param_1)

{
  if (param_1 != (ANMovableSunLight *)0x0) {
    ANMovableSunLight::ANMovableSunLight(param_1);
    return;
  }
  return;
}


// ==== 103f36c0 FUN_103f36c0

void FUN_103f36c0(AL2Float *param_1)

{
  if (param_1 != (AL2Float *)0x0) {
    AL2Float::AL2Float(param_1);
    return;
  }
  return;
}


// ==== 103f36e0 FUN_103f36e0

void FUN_103f36e0(ABrush *param_1)

{
  if (param_1 != (ABrush *)0x0) {
    ABrush::ABrush(param_1);
    return;
  }
  return;
}


// ==== 103f3700 FUN_103f3700

void FUN_103f3700(AVolume *param_1)

{
  if (param_1 != (AVolume *)0x0) {
    AVolume::AVolume(param_1);
    return;
  }
  return;
}


// ==== 103f3720 FUN_103f3720

void FUN_103f3720(AAirVolume *param_1)

{
  if (param_1 != (AAirVolume *)0x0) {
    AAirVolume::AAirVolume(param_1);
    return;
  }
  return;
}


// ==== 103f3740 FUN_103f3740

void FUN_103f3740(AMusicVolume *param_1)

{
  if (param_1 != (AMusicVolume *)0x0) {
    AMusicVolume::AMusicVolume(param_1);
    return;
  }
  return;
}


// ==== 103f3760 FUN_103f3760

void FUN_103f3760(ABlockingVolume *param_1)

{
  if (param_1 != (ABlockingVolume *)0x0) {
    ABlockingVolume::ABlockingVolume(param_1);
    return;
  }
  return;
}


// ==== 103f3780 FUN_103f3780

void FUN_103f3780(APhysicsVolume *param_1)

{
  if (param_1 != (APhysicsVolume *)0x0) {
    APhysicsVolume::APhysicsVolume(param_1);
    return;
  }
  return;
}


// ==== 103f37a0 FUN_103f37a0

void FUN_103f37a0(ALadderVolume *param_1)

{
  if (param_1 != (ALadderVolume *)0x0) {
    ALadderVolume::ALadderVolume(param_1);
    return;
  }
  return;
}


// ==== 103f37c0 FUN_103f37c0

void FUN_103f37c0(ADefaultPhysicsVolume *param_1)

{
  if (param_1 != (ADefaultPhysicsVolume *)0x0) {
    ADefaultPhysicsVolume::ADefaultPhysicsVolume(param_1);
    return;
  }
  return;
}


// ==== 103f37e0 FUN_103f37e0

void FUN_103f37e0(AL2Alarm *param_1)

{
  if (param_1 != (AL2Alarm *)0x0) {
    AL2Alarm::AL2Alarm(param_1);
    return;
  }
  return;
}


// ==== 103f3800 FUN_103f3800

void FUN_103f3800(ANMoon *param_1)

{
  if (param_1 != (ANMoon *)0x0) {
    ANMoon::ANMoon(param_1);
    return;
  }
  return;
}


// ==== 103f3820 FUN_103f3820

void FUN_103f3820(ANSun *param_1)

{
  if (param_1 != (ANSun *)0x0) {
    ANSun::ANSun(param_1);
    return;
  }
  return;
}


// ==== 103f3840 FUN_103f3840

void FUN_103f3840(AInspector *param_1)

{
  if (param_1 != (AInspector *)0x0) {
    AInspector::AInspector(param_1);
    return;
  }
  return;
}


// ==== 103f3860 FUN_103f3860

void FUN_103f3860(AL2Dice *param_1)

{
  if (param_1 != (AL2Dice *)0x0) {
    AL2Dice::AL2Dice(param_1);
    return;
  }
  return;
}


// ==== 103f3880 FUN_103f3880

void FUN_103f3880(AL2Pickup *param_1)

{
  if (param_1 != (AL2Pickup *)0x0) {
    AL2Pickup::AL2Pickup(param_1);
    return;
  }
  return;
}


// ==== 103f38a0 FUN_103f38a0

void FUN_103f38a0(AController *param_1)

{
  if (param_1 != (AController *)0x0) {
    AController::AController(param_1);
    return;
  }
  return;
}


// ==== 103f38c0 FUN_103f38c0

void FUN_103f38c0(APlayerController *param_1)

{
  if (param_1 != (APlayerController *)0x0) {
    APlayerController::APlayerController(param_1);
    return;
  }
  return;
}


// ==== 103f38e0 FUN_103f38e0

void FUN_103f38e0(ALineagePlayerController *param_1)

{
  if (param_1 != (ALineagePlayerController *)0x0) {
    ALineagePlayerController::ALineagePlayerController(param_1);
    return;
  }
  return;
}


// ==== 103f3900 FUN_103f3900

void FUN_103f3900(ACamera *param_1)

{
  if (param_1 != (ACamera *)0x0) {
    ACamera::ACamera(param_1);
    return;
  }
  return;
}


// ==== 103f3920 FUN_103f3920

void FUN_103f3920(AAIController *param_1)

{
  if (param_1 != (AAIController *)0x0) {
    AAIController::AAIController(param_1);
    return;
  }
  return;
}


// ==== 103f3940 FUN_103f3940

void FUN_103f3940(ACarriedObject *param_1)

{
  if (param_1 != (ACarriedObject *)0x0) {
    ACarriedObject::ACarriedObject(param_1);
    return;
  }
  return;
}


// ==== 103f3960 FUN_103f3960

void FUN_103f3960(ATriggers *param_1)

{
  if (param_1 != (ATriggers *)0x0) {
    ATriggers::ATriggers(param_1);
    return;
  }
  return;
}


// ==== 103f3980 FUN_103f3980

void FUN_103f3980(AAvoidMarker *param_1)

{
  if (param_1 != (AAvoidMarker *)0x0) {
    AAvoidMarker::AAvoidMarker(param_1);
    return;
  }
  return;
}


// ==== 103f39a0 FUN_103f39a0

void FUN_103f39a0(ALineOfSightTrigger *param_1)

{
  if (param_1 != (ALineOfSightTrigger *)0x0) {
    ALineOfSightTrigger::ALineOfSightTrigger(param_1);
    return;
  }
  return;
}


// ==== 103f39c0 FUN_103f39c0

void FUN_103f39c0(ATrigger *param_1)

{
  if (param_1 != (ATrigger *)0x0) {
    ATrigger::ATrigger(param_1);
    return;
  }
  return;
}


// ==== 103f39e0 FUN_103f39e0

void FUN_103f39e0(ANavigationPoint *param_1)

{
  if (param_1 != (ANavigationPoint *)0x0) {
    ANavigationPoint::ANavigationPoint(param_1);
    return;
  }
  return;
}


// ==== 103f3a00 FUN_103f3a00

void FUN_103f3a00(AJumpDest *param_1)

{
  if (param_1 != (AJumpDest *)0x0) {
    AJumpDest::AJumpDest(param_1);
    return;
  }
  return;
}


// ==== 103f3a20 FUN_103f3a20

void FUN_103f3a20(AJumpPad *param_1)

{
  if (param_1 != (AJumpPad *)0x0) {
    AJumpPad::AJumpPad(param_1);
    return;
  }
  return;
}


// ==== 103f3a40 FUN_103f3a40

void FUN_103f3a40(ADoor *param_1)

{
  if (param_1 != (ADoor *)0x0) {
    ADoor::ADoor(param_1);
    return;
  }
  return;
}


// ==== 103f3a60 FUN_103f3a60

void FUN_103f3a60(AAutoDoor *param_1)

{
  if (param_1 != (AAutoDoor *)0x0) {
    AAutoDoor::AAutoDoor(param_1);
    return;
  }
  return;
}


// ==== 103f3a80 FUN_103f3a80

void FUN_103f3a80(ASmallNavigationPoint *param_1)

{
  if (param_1 != (ASmallNavigationPoint *)0x0) {
    ASmallNavigationPoint::ASmallNavigationPoint(param_1);
    return;
  }
  return;
}


// ==== 103f3aa0 FUN_103f3aa0

void FUN_103f3aa0(ALadder *param_1)

{
  if (param_1 != (ALadder *)0x0) {
    ALadder::ALadder(param_1);
    return;
  }
  return;
}


// ==== 103f3ac0 FUN_103f3ac0

void FUN_103f3ac0(AAutoLadder *param_1)

{
  if (param_1 != (AAutoLadder *)0x0) {
    AAutoLadder::AAutoLadder(param_1);
    return;
  }
  return;
}


// ==== 103f3ae0 FUN_103f3ae0

void FUN_103f3ae0(AWarpZoneMarker *param_1)

{
  if (param_1 != (AWarpZoneMarker *)0x0) {
    AWarpZoneMarker::AWarpZoneMarker(param_1);
    return;
  }
  return;
}


// ==== 103f3b00 FUN_103f3b00

void FUN_103f3b00(AAIMarker *param_1)

{
  if (param_1 != (AAIMarker *)0x0) {
    AAIMarker::AAIMarker(param_1);
    return;
  }
  return;
}


// ==== 103f3b20 FUN_103f3b20

void FUN_103f3b20(AInventorySpot *param_1)

{
  if (param_1 != (AInventorySpot *)0x0) {
    AInventorySpot::AInventorySpot(param_1);
    return;
  }
  return;
}


// ==== 103f3b40 FUN_103f3b40

void FUN_103f3b40(APlayerStart *param_1)

{
  if (param_1 != (APlayerStart *)0x0) {
    APlayerStart::APlayerStart(param_1);
    return;
  }
  return;
}


// ==== 103f3b60 FUN_103f3b60

void FUN_103f3b60(ATeleporter *param_1)

{
  if (param_1 != (ATeleporter *)0x0) {
    ATeleporter::ATeleporter(param_1);
    return;
  }
  return;
}


// ==== 103f3b80 FUN_103f3b80

void FUN_103f3b80(ALiftExit *param_1)

{
  if (param_1 != (ALiftExit *)0x0) {
    ALiftExit::ALiftExit(param_1);
    return;
  }
  return;
}


// ==== 103f3ba0 FUN_103f3ba0

void FUN_103f3ba0(ALiftCenter *param_1)

{
  if (param_1 != (ALiftCenter *)0x0) {
    ALiftCenter::ALiftCenter(param_1);
    return;
  }
  return;
}


// ==== 103f3bc0 FUN_103f3bc0

void FUN_103f3bc0(APathNode *param_1)

{
  if (param_1 != (APathNode *)0x0) {
    APathNode::APathNode(param_1);
    return;
  }
  return;
}


// ==== 103f3be0 FUN_103f3be0

void FUN_103f3be0(APickup *param_1)

{
  if (param_1 != (APickup *)0x0) {
    APickup::APickup(param_1);
    return;
  }
  return;
}


// ==== 103f3c00 FUN_103f3c00

void FUN_103f3c00(AStationaryWeapons *param_1)

{
  if (param_1 != (AStationaryWeapons *)0x0) {
    AStationaryWeapons::AStationaryWeapons(param_1);
    return;
  }
  return;
}


// ==== 103f3c20 FUN_103f3c20

void FUN_103f3c20(AAmmo *param_1)

{
  if (param_1 != (AAmmo *)0x0) {
    AAmmo::AAmmo(param_1);
    return;
  }
  return;
}


// ==== 103f3c40 FUN_103f3c40

void FUN_103f3c40(AAntiPortalActor *param_1)

{
  if (param_1 != (AAntiPortalActor *)0x0) {
    AAntiPortalActor::AAntiPortalActor(param_1);
    return;
  }
  return;
}


// ==== 103f3c60 FUN_103f3c60

void FUN_103f3c60(AInventoryAttachment *param_1)

{
  if (param_1 != (AInventoryAttachment *)0x0) {
    AInventoryAttachment::AInventoryAttachment(param_1);
    return;
  }
  return;
}


// ==== 103f3c80 FUN_103f3c80

void FUN_103f3c80(AWeaponAttachment *param_1)

{
  if (param_1 != (AWeaponAttachment *)0x0) {
    AWeaponAttachment::AWeaponAttachment(param_1);
    return;
  }
  return;
}


// ==== 103f3ca0 FUN_103f3ca0

void FUN_103f3ca0(ADamageType *param_1)

{
  if (param_1 != (ADamageType *)0x0) {
    ADamageType::ADamageType(param_1);
    return;
  }
  return;
}


// ==== 103f3cc0 FUN_103f3cc0

void FUN_103f3cc0(AVehiclePart *param_1)

{
  if (param_1 != (AVehiclePart *)0x0) {
    AVehiclePart::AVehiclePart(param_1);
    return;
  }
  return;
}


// ==== 103f3ce0 FUN_103f3ce0

void FUN_103f3ce0(AInventory *param_1)

{
  if (param_1 != (AInventory *)0x0) {
    AInventory::AInventory(param_1);
    return;
  }
  return;
}


// ==== 103f3d00 FUN_103f3d00

void FUN_103f3d00(AAmmunition *param_1)

{
  if (param_1 != (AAmmunition *)0x0) {
    AAmmunition::AAmmunition(param_1);
    return;
  }
  return;
}


// ==== 103f3d20 FUN_103f3d20

void FUN_103f3d20(APowerups *param_1)

{
  if (param_1 != (APowerups *)0x0) {
    APowerups::APowerups(param_1);
    return;
  }
  return;
}


// ==== 103f3d40 FUN_103f3d40

void FUN_103f3d40(AWeapon *param_1)

{
  if (param_1 != (AWeapon *)0x0) {
    AWeapon::AWeapon(param_1);
    return;
  }
  return;
}


// ==== 103f3d60 FUN_103f3d60

void FUN_103f3d60(AHUD *param_1)

{
  if (param_1 != (AHUD *)0x0) {
    AHUD::AHUD(param_1);
    return;
  }
  return;
}


// ==== 103f3d80 FUN_103f3d80

void FUN_103f3d80(AProjectile *param_1)

{
  if (param_1 != (AProjectile *)0x0) {
    AProjectile::AProjectile(param_1);
    return;
  }
  return;
}


// ==== 103f3da0 FUN_103f3da0

void FUN_103f3da0(ADecoration *param_1)

{
  if (param_1 != (ADecoration *)0x0) {
    ADecoration::ADecoration(param_1);
    return;
  }
  return;
}


// ==== 103f3dc0 FUN_103f3dc0

void FUN_103f3dc0(ANote *param_1)

{
  if (param_1 != (ANote *)0x0) {
    ANote::ANote(param_1);
    return;
  }
  return;
}


// ==== 103f3de0 FUN_103f3de0

void FUN_103f3de0(AL2NMover *param_1)

{
  if (param_1 != (AL2NMover *)0x0) {
    AL2NMover::AL2NMover(param_1);
    return;
  }
  return;
}


// ==== 103f3e00 FUN_103f3e00

void FUN_103f3e00(AKActor *param_1)

{
  if (param_1 != (AKActor *)0x0) {
    AKActor::AKActor(param_1);
    return;
  }
  return;
}


// ==== 103f3e20 FUN_103f3e20

void FUN_103f3e20(AKTire *param_1)

{
  if (param_1 != (AKTire *)0x0) {
    AKTire::AKTire(param_1);
    return;
  }
  return;
}


// ==== 103f3e40 FUN_103f3e40

void FUN_103f3e40(AKConstraint *param_1)

{
  if (param_1 != (AKConstraint *)0x0) {
    AKConstraint::AKConstraint(param_1);
    return;
  }
  return;
}


// ==== 103f3e60 FUN_103f3e60

void FUN_103f3e60(AKCarWheelJoint *param_1)

{
  if (param_1 != (AKCarWheelJoint *)0x0) {
    AKCarWheelJoint::AKCarWheelJoint(param_1);
    return;
  }
  return;
}


// ==== 103f3e80 FUN_103f3e80

void FUN_103f3e80(AKConeLimit *param_1)

{
  if (param_1 != (AKConeLimit *)0x0) {
    AKConeLimit::AKConeLimit(param_1);
    return;
  }
  return;
}


// ==== 103f3ea0 FUN_103f3ea0

void FUN_103f3ea0(AKHinge *param_1)

{
  if (param_1 != (AKHinge *)0x0) {
    AKHinge::AKHinge(param_1);
    return;
  }
  return;
}


// ==== 103f3ec0 FUN_103f3ec0

void FUN_103f3ec0(AKBSJoint *param_1)

{
  if (param_1 != (AKBSJoint *)0x0) {
    AKBSJoint::AKBSJoint(param_1);
    return;
  }
  return;
}


// ==== 103f3ee0 FUN_103f3ee0

void FUN_103f3ee0(UParticleEmitter *param_1)

{
  if (param_1 != (UParticleEmitter *)0x0) {
    UParticleEmitter::UParticleEmitter(param_1);
    return;
  }
  return;
}


// ==== 103f3f00 FUN_103f3f00

void FUN_103f3f00(UTrailEmitter *param_1)

{
  if (param_1 != (UTrailEmitter *)0x0) {
    UTrailEmitter::UTrailEmitter(param_1);
    return;
  }
  return;
}


// ==== 103f3f20 FUN_103f3f20

void FUN_103f3f20(USpriteEmitter *param_1)

{
  if (param_1 != (USpriteEmitter *)0x0) {
    USpriteEmitter::USpriteEmitter(param_1);
    return;
  }
  return;
}


// ==== 103f3f40 FUN_103f3f40

void FUN_103f3f40(USparkEmitter *param_1)

{
  if (param_1 != (USparkEmitter *)0x0) {
    USparkEmitter::USparkEmitter(param_1);
    return;
  }
  return;
}


// ==== 103f3f60 FUN_103f3f60

void FUN_103f3f60(URibbonEmitter *param_1)

{
  if (param_1 != (URibbonEmitter *)0x0) {
    URibbonEmitter::URibbonEmitter(param_1);
    return;
  }
  return;
}


// ==== 103f3f80 FUN_103f3f80

void FUN_103f3f80(UMeshEmitter *param_1)

{
  if (param_1 != (UMeshEmitter *)0x0) {
    UMeshEmitter::UMeshEmitter(param_1);
    return;
  }
  return;
}


// ==== 103f3fa0 FUN_103f3fa0

void FUN_103f3fa0(UBeamEmitter *param_1)

{
  if (param_1 != (UBeamEmitter *)0x0) {
    UBeamEmitter::UBeamEmitter(param_1);
    return;
  }
  return;
}


// ==== 103f3fc0 FUN_103f3fc0

void FUN_103f3fc0(UTerrainMaterial *param_1)

{
  if (param_1 != (UTerrainMaterial *)0x0) {
    UTerrainMaterial::UTerrainMaterial(param_1);
    return;
  }
  return;
}


// ==== 103f3fe0 FUN_103f3fe0

void FUN_103f3fe0(UMaterialSequence *param_1)

{
  if (param_1 != (UMaterialSequence *)0x0) {
    UMaterialSequence::UMaterialSequence(param_1);
    return;
  }
  return;
}


// ==== 103f4000 FUN_103f4000

void FUN_103f4000(UMaterialSwitch *param_1)

{
  if (param_1 != (UMaterialSwitch *)0x0) {
    UMaterialSwitch::UMaterialSwitch(param_1);
    return;
  }
  return;
}


// ==== 103f4020 FUN_103f4020

void FUN_103f4020(UMatAction *param_1)

{
  if (param_1 != (UMatAction *)0x0) {
    UMatAction::UMatAction(param_1);
    return;
  }
  return;
}


// ==== 103f4040 FUN_103f4040

void FUN_103f4040(UActionWarp *param_1)

{
  if (param_1 != (UActionWarp *)0x0) {
    UActionWarp::UActionWarp(param_1);
    return;
  }
  return;
}


// ==== 103f4060 FUN_103f4060

void FUN_103f4060(UActionPause *param_1)

{
  if (param_1 != (UActionPause *)0x0) {
    UActionPause::UActionPause(param_1);
    return;
  }
  return;
}


// ==== 103f4080 FUN_103f4080

void FUN_103f4080(UActionMoveCamera *param_1)

{
  if (param_1 != (UActionMoveCamera *)0x0) {
    UActionMoveCamera::UActionMoveCamera(param_1);
    return;
  }
  return;
}


// ==== 103f40a0 FUN_103f40a0

void FUN_103f40a0(UInteractionMaster *param_1)

{
  if (param_1 != (UInteractionMaster *)0x0) {
    UInteractionMaster::UInteractionMaster(param_1);
    return;
  }
  return;
}


// ==== 103f40c0 FUN_103f40c0

void FUN_103f40c0(UL2NTimeLight *param_1)

{
  if (param_1 != (UL2NTimeLight *)0x0) {
    UL2NTimeLight::UL2NTimeLight(param_1);
    return;
  }
  return;
}


// ==== 103f40e0 FUN_103f40e0

void FUN_103f40e0(UL2NEnvLight *param_1)

{
  if (param_1 != (UL2NEnvLight *)0x0) {
    UL2NEnvLight::UL2NEnvLight(param_1);
    return;
  }
  return;
}


// ==== 103f4100 FUN_103f4100

void FUN_103f4100(USkillVisualEffect *param_1)

{
  if (param_1 != (USkillVisualEffect *)0x0) {
    USkillVisualEffect::USkillVisualEffect(param_1);
    return;
  }
  return;
}


// ==== 103f4120 FUN_103f4120

void FUN_103f4120(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080bbc8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103ee570();
  ExceptionList = local_c;
  return;
}


// ==== 103f4170 FUN_103f4170

void FUN_103f4170(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080bbe8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_103ee480();
  ExceptionList = local_c;
  return;
}


// ==== 103f41c0 FUN_103f41c0

void FUN_103f41c0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080bc08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_103ee4f0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103f4220 FUN_103f4220

void FUN_103f4220(ANLine *param_1)

{
  if (param_1 != (ANLine *)0x0) {
    ANLine::ANLine(param_1);
    return;
  }
  return;
}


// ==== 103f4240 FUN_103f4240

void FUN_103f4240(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080bc20;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  thunk_FUN_1038f310(param_1 + 0xd);
  thunk_FUN_1032bcd0(param_1 + 7);
  thunk_FUN_103ee7e0(param_1 + 10);
  *in_ECX = *param_1;
  ExceptionList = local_10;
  return;
}


// ==== 103f42d0 Catch@103f42d0

void Catch_103f42d0(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 103f42e4 Catch@103f42e4

void Catch_103f42e4(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"MotionChunk::operator =");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103f4340 FUN_103f4340

void FUN_103f4340(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080bcb6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = USkeletalMeshInstance::vftable;
  local_4 = 9;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 8;
  thunk_FUN_10325f90();
  local_4._0_1_ = 7;
  thunk_FUN_1038fad0();
  local_4._0_1_ = 6;
  thunk_FUN_10397d20();
  local_4._0_1_ = 5;
  thunk_FUN_10399110();
  local_4._0_1_ = 4;
  thunk_FUN_10398fc0();
  local_4._0_1_ = 3;
  thunk_FUN_10398fc0();
  local_4._0_1_ = 2;
  thunk_FUN_10398e60();
  local_4._0_1_ = 1;
  thunk_FUN_10398d10();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_103ee8d0();
  local_4 = 0xffffffff;
  USubSkeletalMeshInstance::~USubSkeletalMeshInstance((USubSkeletalMeshInstance *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f4460 FUN_103f4460

void FUN_103f4460(void)

{
  USubSkeletalMeshInstance *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080bdc7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USubSkeletalMeshInstance::USubSkeletalMeshInstance(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = USkeletalMeshInstance::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x144));
  local_4._0_1_ = 2;
  FCoords::FCoords((FCoords *)(in_ECX + 0x150));
  FArray::FArray((FArray *)(in_ECX + 0x184));
  local_4._0_1_ = 4;
  FArray::FArray((FArray *)(in_ECX + 400));
  local_4._0_1_ = 6;
  FArray::FArray((FArray *)(in_ECX + 0x19c));
  local_4._0_1_ = 8;
  FArray::FArray((FArray *)(in_ECX + 0x1a8));
  local_4._0_1_ = 10;
  FArray::FArray((FArray *)(in_ECX + 0x1b4));
  local_4._0_1_ = 0xc;
  FArray::FArray((FArray *)(in_ECX + 0x1c8));
  local_4._0_1_ = 0xe;
  FArray::FArray((FArray *)(in_ECX + 0x1d4));
  local_4._0_1_ = 0x10;
  FArray::FArray((FArray *)(in_ECX + 0x1e0));
  local_4 = CONCAT31(local_4._1_3_,0x12);
  FName::FName((FName *)(in_ECX + 0x1f0));
  FName::FName((FName *)(in_ECX + 0x204));
  FRotator::FRotator((FRotator *)(in_ECX + 0x228));
  FRotator::FRotator((FRotator *)(in_ECX + 0x240));
  FCoords::FCoords((FCoords *)(in_ECX + 0x24c));
  FCoords::FCoords((FCoords *)(in_ECX + 0x284));
  FCoords::FCoords((FCoords *)(in_ECX + 0x2b4));
  FCoords::FCoords((FCoords *)(in_ECX + 0x2e4));
  FCoords::FCoords((FCoords *)(in_ECX + 0x314));
  *(undefined4 *)(in_ECX + 500) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 103f4650 FUN_103f4650

void FUN_103f4650(USubSkeletalMeshInstance *param_1)

{
  USubSkeletalMeshInstance *in_ECX;
  int iVar1;
  USubSkeletalMeshInstance *pUVar2;
  USubSkeletalMeshInstance *pUVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080be96;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USubSkeletalMeshInstance::USubSkeletalMeshInstance(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = USkeletalMeshInstance::vftable;
  thunk_FUN_10398c50(param_1 + 0x144);
  local_4._0_1_ = 1;
  pUVar2 = param_1 + 0x150;
  pUVar3 = in_ECX + 0x150;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x180) = *(undefined4 *)(param_1 + 0x180);
  thunk_FUN_1037fb20(param_1 + 0x184);
  local_4._0_1_ = 2;
  thunk_FUN_1037fc10(param_1 + 400);
  local_4._0_1_ = 3;
  thunk_FUN_1037fcf0(param_1 + 0x19c);
  local_4._0_1_ = 4;
  thunk_FUN_1037fcf0(param_1 + 0x1a8);
  local_4._0_1_ = 5;
  thunk_FUN_1037fde0(param_1 + 0x1b4);
  local_4._0_1_ = 6;
  *(undefined4 *)(in_ECX + 0x1c0) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(in_ECX + 0x1c4) = *(undefined4 *)(param_1 + 0x1c4);
  thunk_FUN_1037f620(param_1 + 0x1c8);
  local_4._0_1_ = 7;
  thunk_FUN_103794b0(param_1 + 0x1d4);
  local_4 = CONCAT31(local_4._1_3_,8);
  thunk_FUN_1032bc20(param_1 + 0x1e0);
  *(undefined4 *)(in_ECX + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(in_ECX + 0x1f0) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(in_ECX + 500) = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(in_ECX + 0x1f8) = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined4 *)(in_ECX + 0x1fc) = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(in_ECX + 0x200) = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)(in_ECX + 0x204) = *(undefined4 *)(param_1 + 0x204);
  *(undefined4 *)(in_ECX + 0x208) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(in_ECX + 0x20c) = *(undefined4 *)(param_1 + 0x20c);
  *(undefined4 *)(in_ECX + 0x210) = *(undefined4 *)(param_1 + 0x210);
  *(undefined4 *)(in_ECX + 0x214) = *(undefined4 *)(param_1 + 0x214);
  *(undefined4 *)(in_ECX + 0x218) = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(in_ECX + 0x21c) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(in_ECX + 0x220) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(in_ECX + 0x224) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(in_ECX + 0x228) = *(undefined4 *)(param_1 + 0x228);
  *(undefined4 *)(in_ECX + 0x22c) = *(undefined4 *)(param_1 + 0x22c);
  *(undefined4 *)(in_ECX + 0x230) = *(undefined4 *)(param_1 + 0x230);
  *(undefined4 *)(in_ECX + 0x234) = *(undefined4 *)(param_1 + 0x234);
  *(undefined4 *)(in_ECX + 0x238) = *(undefined4 *)(param_1 + 0x238);
  *(undefined4 *)(in_ECX + 0x23c) = *(undefined4 *)(param_1 + 0x23c);
  *(undefined4 *)(in_ECX + 0x240) = *(undefined4 *)(param_1 + 0x240);
  *(undefined4 *)(in_ECX + 0x244) = *(undefined4 *)(param_1 + 0x244);
  *(undefined4 *)(in_ECX + 0x248) = *(undefined4 *)(param_1 + 0x248);
  pUVar2 = param_1 + 0x24c;
  pUVar3 = in_ECX + 0x24c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x27c) = *(undefined4 *)(param_1 + 0x27c);
  *(undefined4 *)(in_ECX + 0x280) = *(undefined4 *)(param_1 + 0x280);
  pUVar2 = param_1 + 0x284;
  pUVar3 = in_ECX + 0x284;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  pUVar2 = param_1 + 0x2b4;
  pUVar3 = in_ECX + 0x2b4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  pUVar2 = param_1 + 0x2e4;
  pUVar3 = in_ECX + 0x2e4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  pUVar2 = param_1 + 0x314;
  pUVar3 = in_ECX + 0x314;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x344) = *(undefined4 *)(param_1 + 0x344);
  ExceptionList = local_c;
  return;
}


// ==== 103f4a10 FUN_103f4a10

void FUN_103f4a10(USubSkeletalMeshInstance *param_1)

{
  USubSkeletalMeshInstance *in_ECX;
  int iVar1;
  USubSkeletalMeshInstance *pUVar2;
  USubSkeletalMeshInstance *pUVar3;
  
  USubSkeletalMeshInstance::operator=(in_ECX,param_1);
  thunk_FUN_103ee940(param_1 + 0x144);
  pUVar2 = param_1 + 0x150;
  pUVar3 = in_ECX + 0x150;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x180) = *(undefined4 *)(param_1 + 0x180);
  thunk_FUN_10398dd0(param_1 + 0x184);
  thunk_FUN_10398f20(param_1 + 400);
  thunk_FUN_10399080(param_1 + 0x19c);
  thunk_FUN_10399080(param_1 + 0x1a8);
  thunk_FUN_103991d0(param_1 + 0x1b4);
  *(undefined4 *)(in_ECX + 0x1c0) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(in_ECX + 0x1c4) = *(undefined4 *)(param_1 + 0x1c4);
  thunk_FUN_1037f710(param_1 + 0x1c8);
  thunk_FUN_103795a0(param_1 + 0x1d4);
  thunk_FUN_1032bcd0(param_1 + 0x1e0);
  *(undefined4 *)(in_ECX + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(in_ECX + 0x1f0) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(in_ECX + 500) = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(in_ECX + 0x1f8) = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined4 *)(in_ECX + 0x1fc) = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(in_ECX + 0x200) = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)(in_ECX + 0x204) = *(undefined4 *)(param_1 + 0x204);
  *(undefined4 *)(in_ECX + 0x208) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(in_ECX + 0x20c) = *(undefined4 *)(param_1 + 0x20c);
  *(undefined4 *)(in_ECX + 0x210) = *(undefined4 *)(param_1 + 0x210);
  *(undefined4 *)(in_ECX + 0x214) = *(undefined4 *)(param_1 + 0x214);
  *(undefined4 *)(in_ECX + 0x218) = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(in_ECX + 0x21c) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(in_ECX + 0x220) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(in_ECX + 0x224) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(in_ECX + 0x228) = *(undefined4 *)(param_1 + 0x228);
  *(undefined4 *)(in_ECX + 0x22c) = *(undefined4 *)(param_1 + 0x22c);
  *(undefined4 *)(in_ECX + 0x230) = *(undefined4 *)(param_1 + 0x230);
  *(undefined4 *)(in_ECX + 0x234) = *(undefined4 *)(param_1 + 0x234);
  *(undefined4 *)(in_ECX + 0x238) = *(undefined4 *)(param_1 + 0x238);
  *(undefined4 *)(in_ECX + 0x23c) = *(undefined4 *)(param_1 + 0x23c);
  *(undefined4 *)(in_ECX + 0x240) = *(undefined4 *)(param_1 + 0x240);
  *(undefined4 *)(in_ECX + 0x244) = *(undefined4 *)(param_1 + 0x244);
  *(undefined4 *)(in_ECX + 0x248) = *(undefined4 *)(param_1 + 0x248);
  pUVar2 = param_1 + 0x24c;
  pUVar3 = in_ECX + 0x24c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x27c) = *(undefined4 *)(param_1 + 0x27c);
  *(undefined4 *)(in_ECX + 0x280) = *(undefined4 *)(param_1 + 0x280);
  pUVar2 = param_1 + 0x284;
  pUVar3 = in_ECX + 0x284;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  pUVar2 = param_1 + 0x2b4;
  pUVar3 = in_ECX + 0x2b4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  pUVar2 = param_1 + 0x2e4;
  pUVar3 = in_ECX + 0x2e4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  pUVar2 = param_1 + 0x314;
  pUVar3 = in_ECX + 0x314;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x344) = *(undefined4 *)(param_1 + 0x344);
  return;
}


// ==== 103f4d50 FUN_103f4d50

void FUN_103f4d50(byte param_1)

{
  USkeletalMeshInstance *in_ECX;
  
  USkeletalMeshInstance::~USkeletalMeshInstance(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x348);
  }
  return;
}


// ==== 103f4d80 FUN_103f4d80

USkeletalMeshInstance * FUN_103f4d80(byte param_1)

{
  USkeletalMeshInstance *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x348,*(int *)(in_ECX + -4),USkeletalMeshInstance::~USkeletalMeshInstance);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  USkeletalMeshInstance::~USkeletalMeshInstance(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x348);
  }
  return in_ECX;
}


// ==== 103f4e00 FUN_103f4e00

void FUN_103f4e00(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080bed8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UExtraSkeletalMeshInstance::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  USkeletalMeshInstance::~USkeletalMeshInstance((USkeletalMeshInstance *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f4e70 FUN_103f4e70

void FUN_103f4e70(void)

{
  USkeletalMeshInstance *in_ECX;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080bef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USkeletalMeshInstance::USkeletalMeshInstance(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UExtraSkeletalMeshInstance::vftable;
  FName::FName((FName *)(in_ECX + 0x34c));
  *(undefined4 *)(in_ECX + 0x348) = 0;
  FName::FName((FName *)local_14,0);
  *(undefined4 *)(in_ECX + 0x34c) = local_14[0];
  *(undefined4 *)(in_ECX + 0x350) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 103f4f20 FUN_103f4f20

void FUN_103f4f20(USkeletalMeshInstance *param_1)

{
  USkeletalMeshInstance *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080bf18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  USkeletalMeshInstance::USkeletalMeshInstance(in_ECX,param_1);
  *(undefined ***)in_ECX = UExtraSkeletalMeshInstance::vftable;
  *(undefined4 *)(in_ECX + 0x348) = *(undefined4 *)(param_1 + 0x348);
  *(undefined4 *)(in_ECX + 0x34c) = *(undefined4 *)(param_1 + 0x34c);
  *(undefined4 *)(in_ECX + 0x350) = *(undefined4 *)(param_1 + 0x350);
  ExceptionList = local_c;
  return;
}


// ==== 103f4fc0 FUN_103f4fc0

void FUN_103f4fc0(USkeletalMeshInstance *param_1)

{
  USkeletalMeshInstance *in_ECX;
  
  USkeletalMeshInstance::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x348) = *(undefined4 *)(param_1 + 0x348);
  *(undefined4 *)(in_ECX + 0x34c) = *(undefined4 *)(param_1 + 0x34c);
  *(undefined4 *)(in_ECX + 0x350) = *(undefined4 *)(param_1 + 0x350);
  return;
}


// ==== 103f5010 FUN_103f5010

void FUN_103f5010(byte param_1)

{
  UExtraSkeletalMeshInstance *in_ECX;
  
  UExtraSkeletalMeshInstance::~UExtraSkeletalMeshInstance(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x354);
  }
  return;
}


// ==== 103f5040 FUN_103f5040

UExtraSkeletalMeshInstance * FUN_103f5040(byte param_1)

{
  UExtraSkeletalMeshInstance *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x354,*(int *)(in_ECX + -4),
               UExtraSkeletalMeshInstance::~UExtraSkeletalMeshInstance);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UExtraSkeletalMeshInstance::~UExtraSkeletalMeshInstance(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x354);
  }
  return in_ECX;
}


// ==== 103f50c0 FUN_103f50c0

void FUN_103f50c0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080bf63;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(in_ECX + 0x1c));
  local_4 = 1;
  FArray::FArray((FArray *)(in_ECX + 0x28));
  local_4 = CONCAT31(local_4._1_3_,3);
  thunk_FUN_103ad120();
  ExceptionList = local_c;
  return;
}


// ==== 103f5150 FUN_103f5150

void FUN_103f5150(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_1080bfa1;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  thunk_FUN_103ad1b0();
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_103ee6c0();
  local_4 = 0xffffffff;
  thunk_FUN_10325f90();
  ExceptionList = local_c;
  return;
}


// ==== 103f51c0 FUN_103f51c0

void FUN_103f51c0(UVertMeshEmitter *param_1)

{
  if (param_1 != (UVertMeshEmitter *)0x0) {
    UVertMeshEmitter::UVertMeshEmitter(param_1);
    return;
  }
  return;
}


// ==== 103f51e0 FUN_103f51e0

void FUN_103f51e0(UParticleEmitter *param_1)

{
  uint uVar1;
  UParticleEmitter *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c01e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UParticleEmitter::UParticleEmitter(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UVertMeshEmitter::vftable;
  thunk_FUN_103b21b0(param_1 + 0x4d0);
  local_4._0_1_ = 2;
  thunk_FUN_10380560(param_1 + 0x4dc);
  local_4._0_1_ = 4;
  thunk_FUN_10379830(param_1 + 0x4e8);
  local_4._0_1_ = 5;
  thunk_FUN_10379830(param_1 + 0x4f4);
  local_4 = CONCAT31(local_4._1_3_,6);
  thunk_FUN_10379830(param_1 + 0x500);
  *(undefined4 *)(in_ECX + 0x50c) = *(undefined4 *)(param_1 + 0x50c);
  *(uint *)(in_ECX + 0x510) =
       *(uint *)(in_ECX + 0x510) ^ (*(uint *)(in_ECX + 0x510) ^ *(uint *)(param_1 + 0x510)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x510) ^ *(uint *)(in_ECX + 0x510)) & 2 ^ *(uint *)(in_ECX + 0x510);
  *(uint *)(in_ECX + 0x510) = uVar1;
  *(uint *)(in_ECX + 0x510) = (*(uint *)(param_1 + 0x510) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x514) = *(undefined4 *)(param_1 + 0x514);
  *(undefined4 *)(in_ECX + 0x518) = *(undefined4 *)(param_1 + 0x518);
  *(undefined4 *)(in_ECX + 0x51c) = *(undefined4 *)(param_1 + 0x51c);
  ExceptionList = local_c;
  return;
}


// ==== 103f5370 FUN_103f5370

void FUN_103f5370(UParticleEmitter *param_1)

{
  uint uVar1;
  UParticleEmitter *in_ECX;
  
  UParticleEmitter::operator=(in_ECX,param_1);
  thunk_FUN_103b3eb0(param_1 + 0x4d0);
  thunk_FUN_10389b50(param_1 + 0x4dc);
  thunk_FUN_10379900(param_1 + 0x4e8);
  thunk_FUN_10379900(param_1 + 0x4f4);
  thunk_FUN_10379900(param_1 + 0x500);
  *(undefined4 *)(in_ECX + 0x50c) = *(undefined4 *)(param_1 + 0x50c);
  *(uint *)(in_ECX + 0x510) =
       *(uint *)(in_ECX + 0x510) ^ (*(uint *)(in_ECX + 0x510) ^ *(uint *)(param_1 + 0x510)) & 1;
  uVar1 = (*(uint *)(param_1 + 0x510) ^ *(uint *)(in_ECX + 0x510)) & 2 ^ *(uint *)(in_ECX + 0x510);
  *(uint *)(in_ECX + 0x510) = uVar1;
  *(uint *)(in_ECX + 0x510) = (*(uint *)(param_1 + 0x510) ^ uVar1) & 4 ^ uVar1;
  *(undefined4 *)(in_ECX + 0x514) = *(undefined4 *)(param_1 + 0x514);
  *(undefined4 *)(in_ECX + 0x518) = *(undefined4 *)(param_1 + 0x518);
  *(undefined4 *)(in_ECX + 0x51c) = *(undefined4 *)(param_1 + 0x51c);
  return;
}


// ==== 103f5490 FUN_103f5490

void FUN_103f5490(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080c0c4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UTerrainSector::vftable;
  local_4 = 8;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 7;
  thunk_FUN_103b22c0();
  local_4._0_1_ = 6;
  thunk_FUN_10399ff0();
  local_4._0_1_ = 5;
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(in_ECX + 0x140));
  local_4._0_1_ = 4;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(in_ECX + 300));
  local_4._0_1_ = 3;
  FRawIndexBuffer::~FRawIndexBuffer((FRawIndexBuffer *)(in_ECX + 0xa0));
  local_4._0_1_ = 2;
  thunk_FUN_10326570();
  local_4._0_1_ = 1;
  thunk_FUN_103ee9e0();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_103b22c0();
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f5590 FUN_103f5590

void FUN_103f5590(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c19a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UTerrainSector::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x34));
  local_4._0_1_ = 2;
  FArray::FArray((FArray *)(in_ECX + 0x40));
  local_4._0_1_ = 4;
  FBox::FBox((FBox *)(in_ECX + 0x50));
  FArray::FArray((FArray *)(in_ECX + 0x8c));
  local_4._0_1_ = 6;
  FRawIndexBuffer::FRawIndexBuffer((FRawIndexBuffer *)(in_ECX + 0xa0));
  local_4._0_1_ = 7;
  TArray<unsigned_short>::TArray<unsigned_short>((TArray<unsigned_short> *)(in_ECX + 300));
  local_4._0_1_ = 8;
  FArray::FArray((FArray *)(in_ECX + 0x140));
  local_4._0_1_ = 10;
  FArray::FArray((FArray *)(in_ECX + 0x154));
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FArray::FArray((FArray *)(in_ECX + 0x160));
  ExceptionList = local_c;
  return;
}


// ==== 103f56c0 FUN_103f56c0

void FUN_103f56c0(UObject *param_1)

{
  UObject *in_ECX;
  int iVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c254;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UTerrainSector::vftable;
  thunk_FUN_10380710(param_1 + 0x34);
  local_4._0_1_ = 1;
  thunk_FUN_1039a2a0(param_1 + 0x40);
  local_4._0_1_ = 2;
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  pUVar2 = param_1 + 0x50;
  pUVar3 = in_ECX + 0x50;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  thunk_FUN_10379bd0(param_1 + 0x8c);
  local_4._0_1_ = 3;
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined2 *)(in_ECX + 0x9c) = *(undefined2 *)(param_1 + 0x9c);
  FRawIndexBuffer::FRawIndexBuffer
            ((FRawIndexBuffer *)(in_ECX + 0xa0),(FRawIndexBuffer *)(param_1 + 0xa0));
  local_4._0_1_ = 4;
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(in_ECX + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(in_ECX + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(in_ECX + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(in_ECX + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  pUVar2 = param_1 + 0xec;
  pUVar3 = in_ECX + 0xec;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  TArray<unsigned_short>::TArray<unsigned_short>
            ((TArray<unsigned_short> *)(in_ECX + 300),(TArray<unsigned_short> *)(param_1 + 300));
  local_4._0_1_ = 5;
  *(undefined4 *)(in_ECX + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  TArray<unsigned_char>::TArray<unsigned_char>
            ((TArray<unsigned_char> *)(in_ECX + 0x140),(TArray<unsigned_char> *)(param_1 + 0x140));
  local_4._0_1_ = 6;
  *(undefined4 *)(in_ECX + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(in_ECX + 0x150) = *(undefined4 *)(param_1 + 0x150);
  thunk_FUN_10380630(param_1 + 0x154);
  local_4 = CONCAT31(local_4._1_3_,7);
  thunk_FUN_10380710(param_1 + 0x160);
  ExceptionList = local_c;
  return;
}


// ==== 103f59a0 FUN_103f59a0

void FUN_103f59a0(UObject *param_1)

{
  UObject *pUVar1;
  UObject *in_ECX;
  int iVar2;
  UObject *pUVar3;
  
  UObject::operator=(in_ECX,param_1);
  thunk_FUN_103b2330(param_1 + 0x34);
  thunk_FUN_103eea50(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  pUVar1 = param_1 + 0x50;
  pUVar3 = in_ECX + 0x50;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar1;
    pUVar1 = pUVar1 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  thunk_FUN_10390350(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined2 *)(in_ECX + 0x9c) = *(undefined2 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  TArray<unsigned_short>::operator=
            ((TArray<unsigned_short> *)(in_ECX + 0xac),(TArray<unsigned_short> *)(param_1 + 0xac));
  *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(in_ECX + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(in_ECX + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(in_ECX + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(in_ECX + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(in_ECX + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(in_ECX + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  pUVar1 = in_ECX + 0xec;
  iVar2 = 0x20;
  do {
    *(undefined2 *)pUVar1 = *(undefined2 *)(pUVar1 + ((int)param_1 - (int)in_ECX));
    pUVar1 = pUVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  TArray<unsigned_short>::operator=
            ((TArray<unsigned_short> *)(in_ECX + 300),(TArray<unsigned_short> *)(param_1 + 300));
  *(undefined4 *)(in_ECX + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  TArray<unsigned_char>::operator=
            ((TArray<unsigned_char> *)(in_ECX + 0x140),(TArray<unsigned_char> *)(param_1 + 0x140));
  *(undefined4 *)(in_ECX + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(in_ECX + 0x150) = *(undefined4 *)(param_1 + 0x150);
  thunk_FUN_1039a200(param_1 + 0x154);
  thunk_FUN_103b2330(param_1 + 0x160);
  return;
}


// ==== 103f5c40 FUN_103f5c40

void FUN_103f5c40(byte param_1)

{
  UTerrainSector *in_ECX;
  
  UTerrainSector::~UTerrainSector(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x16c);
  }
  return;
}


// ==== 103f5c70 FUN_103f5c70

UTerrainSector * FUN_103f5c70(byte param_1)

{
  UTerrainSector *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x16c,*(int *)(in_ECX + -4),UTerrainSector::~UTerrainSector);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UTerrainSector::~UTerrainSector(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x16c);
  }
  return in_ECX;
}


// ==== 103f5cf0 FUN_103f5cf0

void FUN_103f5cf0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080c2c5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UStaticMeshInstance::vftable;
  local_4 = 3;
  UObject::ConditionalDestroy(in_ECX);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 4;
  thunk_FUN_10391680();
  local_4._0_1_ = 2;
  FRenderResource::~FRenderResource((FRenderResource *)(in_ECX + 0x4c));
  local_4._0_1_ = 1;
  thunk_FUN_103eed10();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_103eed10();
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f5db0 FUN_103f5db0

void FUN_103f5db0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c32c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UStaticMeshInstance::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x34));
  local_4._0_1_ = 2;
  FArray::FArray((FArray *)(in_ECX + 0x40));
  local_4 = CONCAT31(local_4._1_3_,4);
  FRawColorStream::FRawColorStream((FRawColorStream *)(in_ECX + 0x4c));
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 103f5e60 FUN_103f5e60

void FUN_103f5e60(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c37a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UStaticMeshInstance::vftable;
  thunk_FUN_1039baa0(param_1 + 0x34);
  local_4._0_1_ = 1;
  thunk_FUN_1039baa0(param_1 + 0x40);
  local_4 = CONCAT31(local_4._1_3_,2);
  FRawColorStream::FRawColorStream
            ((FRawColorStream *)(in_ECX + 0x4c),(FRawColorStream *)(param_1 + 0x4c));
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  ExceptionList = local_c;
  return;
}


// ==== 103f5f20 FUN_103f5f20

void FUN_103f5f20(UObject *param_1)

{
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  thunk_FUN_103eed80(param_1 + 0x34);
  thunk_FUN_103eed80(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  thunk_FUN_10391740(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  return;
}


// ==== 103f5f90 FUN_103f5f90

void FUN_103f5f90(byte param_1)

{
  UStaticMeshInstance *in_ECX;
  
  UStaticMeshInstance::~UStaticMeshInstance(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x70);
  }
  return;
}


// ==== 103f5fc0 FUN_103f5fc0

UStaticMeshInstance * FUN_103f5fc0(byte param_1)

{
  UStaticMeshInstance *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x70,*(int *)(in_ECX + -4),UStaticMeshInstance::~UStaticMeshInstance);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UStaticMeshInstance::~UStaticMeshInstance(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x70);
  }
  return in_ECX;
}


// ==== 103f6040 FUN_103f6040

void FUN_103f6040(AFluidSurfaceInfo *param_1)

{
  if (param_1 != (AFluidSurfaceInfo *)0x0) {
    AFluidSurfaceInfo::AFluidSurfaceInfo(param_1);
    return;
  }
  return;
}


// ==== 103f6060 FUN_103f6060

void FUN_103f6060(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c3a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_103eeef0(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103f60c0 FUN_103f60c0

void FUN_103f60c0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080c3c8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103eef70();
  ExceptionList = local_c;
  return;
}


// ==== 103f6110 FUN_103f6110

void FUN_103f6110(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080c3e9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103ef680(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f6180 FUN_103f6180

void FUN_103f6180(FArray *param_1)

{
  int iVar1;
  FAnywhereNpc *this;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103ef740(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x58);
      this = (FAnywhereNpc *)(iVar1 * 0x58 + *(int *)in_ECX);
      if (this != (FAnywhereNpc *)0x0) {
        FAnywhereNpc::FAnywhereNpc(this,(FAnywhereNpc *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x58;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103f6200 FUN_103f6200

void FUN_103f6200(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080c409;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103ef790(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f6270 FUN_103f6270

void FUN_103f6270(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103ef8a0(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x1c);
      if (*(int *)in_ECX + iVar1 * 0x1c != 0) {
        thunk_FUN_1039bed0(*(int *)param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103f6300 FUN_103f6300

void FUN_103f6300(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080c429;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103ef930(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f6370 FUN_103f6370

void FUN_103f6370(undefined4 param_1,int param_2)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c451;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_2,0x44);
  *(undefined4 *)(in_ECX + 0xc) = param_1;
  ExceptionList = local_c;
  return;
}


// ==== 103f6400 FUN_103f6400

void FUN_103f6400(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080c479;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103efb40(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f6470 FUN_103f6470

void FUN_103f6470(FArray *param_1)

{
  int iVar1;
  FBspSection *this;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103efc60(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x34);
      this = (FBspSection *)(iVar1 * 0x34 + *(int *)in_ECX);
      if (this != (FBspSection *)0x0) {
        FBspSection::FBspSection(this,(FBspSection *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x34;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103f64f0 FUN_103f64f0

void FUN_103f64f0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080c499;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103efd00(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f6560 FUN_103f6560

void FUN_103f6560(FArray *param_1)

{
  FMultiLightMapTexture *this;
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103efe50(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x1c);
      this = (FMultiLightMapTexture *)(*(int *)in_ECX + iVar1 * 0x1c);
      if (this != (FMultiLightMapTexture *)0x0) {
        FMultiLightMapTexture::FMultiLightMapTexture
                  (this,(FMultiLightMapTexture *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103f65f0 FUN_103f65f0

void FUN_103f65f0(int *param_1)

{
  int iVar1;
  FLightMap *this;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c4b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0xac);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0xac);
      this = (FLightMap *)(iVar1 * 0xac + *(int *)in_ECX);
      if (this != (FLightMap *)0x0) {
        FLightMap::FLightMap(this,(FLightMap *)(*param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xac;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 103f66c0 FUN_103f66c0

void FUN_103f66c0(FArray *param_1)

{
  int iVar1;
  FLightMap *this;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103834f0(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0xac);
      this = (FLightMap *)(iVar1 * 0xac + *(int *)in_ECX);
      if (this != (FLightMap *)0x0) {
        FLightMap::FLightMap(this,(FLightMap *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xac;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103f6750 FUN_103f6750

FArchive * FUN_103f6750(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FKConvexElem *this;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080c4d0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x58);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (; iVar3 < *(int *)(param_2 + 4); iVar3 = iVar3 + 1) {
      thunk_FUN_103a1e50(param_1,iVar3 * 0x58 + *(int *)param_2);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_103ee280(local_18);
    while (iVar3 < local_18) {
      this = (FKConvexElem *)thunk_FUN_10370d90(0x58,param_2);
      if (this == (FKConvexElem *)0x0) {
        thunk_FUN_103a1e50(param_1,0);
        iVar3 = iVar3 + 1;
      }
      else {
        uVar2 = FKConvexElem::FKConvexElem(this);
        thunk_FUN_103a1e50(param_1,uVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 103f6829 Catch@103f6829

void Catch_103f6829(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 103f683d Catch@103f683d

void Catch_103f683d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103f68a0 FUN_103f68a0

void FUN_103f68a0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080c4e9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103eff30(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f6910 FUN_103f6910

FArchive * FUN_103f6910(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FPlayerResponseLine *pFVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080c500;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x2c);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (; iVar3 < *(int *)(param_2 + 4); iVar3 = iVar3 + 1) {
      operator<<(param_1,(FPlayerResponseLine *)(iVar3 * 0x2c + *(int *)param_2));
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_103f0080(local_18);
    while (iVar3 < local_18) {
      pFVar2 = (FPlayerResponseLine *)thunk_FUN_10370e90(0x2c,param_2);
      if (pFVar2 == (FPlayerResponseLine *)0x0) {
        operator<<(param_1,(FPlayerResponseLine *)0x0);
        iVar3 = iVar3 + 1;
      }
      else {
        pFVar2 = (FPlayerResponseLine *)FPlayerResponseLine::FPlayerResponseLine(pFVar2);
        operator<<(param_1,pFVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 103f69e9 Catch@103f69e9

void Catch_103f69e9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 103f69fd Catch@103f69fd

void Catch_103f69fd(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103f6a60 FUN_103f6a60

void FUN_103f6a60(FArray *param_1)

{
  int iVar1;
  FPlayerResponseLine *this;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103f0080(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x2c);
      this = (FPlayerResponseLine *)(iVar1 * 0x2c + *(int *)in_ECX);
      if (this != (FPlayerResponseLine *)0x0) {
        FPlayerResponseLine::FPlayerResponseLine
                  (this,(FPlayerResponseLine *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x2c;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103f6ae0 FUN_103f6ae0

void FUN_103f6ae0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080c519;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103f0160(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f6b50 FUN_103f6b50

void FUN_103f6b50(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  FStaticMeshBatch *this;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103f0220(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x50);
      this = (FStaticMeshBatch *)(iVar1 * 0x50 + *(int *)in_ECX);
      if (this != (FStaticMeshBatch *)0x0) {
        FStaticMeshBatch::FStaticMeshBatch(this,(FStaticMeshBatch *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x50;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103f6bd0 FUN_103f6bd0

void FUN_103f6bd0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080c539;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103f0270(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f6c40 FUN_103f6c40

void FUN_103f6c40(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c558;
  local_c = ExceptionList;
  if (in_ECX != param_1) {
    ExceptionList = &local_c;
    thunk_FUN_103f0370(*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      iVar2 = 0;
      do {
        iVar1 = FArray::Add(in_ECX,1,0xc);
        if (*(int *)in_ECX + iVar1 * 0xc != 0) {
          thunk_FUN_1032bef0(*(int *)param_1 + iVar2);
          local_4 = 0xffffffff;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0xc;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
  }
  ExceptionList = local_c;
  return;
}


// ==== 103f6cf0 FUN_103f6cf0

void FUN_103f6cf0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080c579;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103f03f0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f6d60 FUN_103f6d60

void FUN_103f6d60(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c598;
  local_c = ExceptionList;
  if (in_ECX != param_1) {
    ExceptionList = &local_c;
    thunk_FUN_103f04f0(*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      iVar2 = 0;
      do {
        iVar1 = FArray::Add(in_ECX,1,0xc);
        if (*(int *)in_ECX + iVar1 * 0xc != 0) {
          thunk_FUN_1032bef0(*(int *)param_1 + iVar2);
          local_4 = 0xffffffff;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0xc;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
  }
  ExceptionList = local_c;
  return;
}


// ==== 103f6e10 FUN_103f6e10

void FUN_103f6e10(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c5b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x174);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x174);
      if (iVar1 * 0x174 + *(int *)in_ECX != 0) {
        thunk_FUN_103ef000(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x174;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 103f6ee0 FUN_103f6ee0

void FUN_103f6ee0(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c5d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x5c);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x5c);
      if (iVar1 * 0x5c + *(int *)in_ECX != 0) {
        thunk_FUN_103ef520(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x5c;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 103f6fa0 FUN_103f6fa0

void FUN_103f6fa0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080c5f9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103f06e0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f7010 FUN_103f7010

void FUN_103f7010(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103f07e0(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x28);
      if (*(int *)in_ECX + iVar1 * 0x28 != 0) {
        thunk_FUN_103b30a0(*(int *)param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103f7090 FUN_103f7090

void FUN_103f7090(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080c619;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103f0870(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f7100 FUN_103f7100

void FUN_103f7100(FArray *param_1)

{
  int iVar1;
  FStatGraphLine *this;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103f0990(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x34);
      this = (FStatGraphLine *)(iVar1 * 0x34 + *(int *)in_ECX);
      if (this != (FStatGraphLine *)0x0) {
        FStatGraphLine::FStatGraphLine(this,(FStatGraphLine *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x34;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103f7180 FUN_103f7180

void FUN_103f7180(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c651;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  thunk_FUN_10379230(param_1 + 1);
  local_4 = 0;
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  thunk_FUN_10383810(param_1 + 7);
  local_4 = CONCAT31(local_4._1_3_,1);
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  thunk_FUN_103ef5e0(param_1 + 0x11);
  ExceptionList = local_c;
  return;
}


// ==== 103f7260 FUN_103f7260

void FUN_103f7260(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c678;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_103b3f30(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103f72e0 FUN_103f72e0

void FUN_103f72e0(FArray *param_1)

{
  FArray *pFVar1;
  int iVar2;
  FArray *in_ECX;
  int iVar3;
  
  pFVar1 = param_1;
  if (in_ECX != param_1) {
    iVar3 = *(int *)(param_1 + 4);
    if (*(int *)GUndo_exref != 0) {
      (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
    }
    thunk_FUN_103b4cd0(iVar3);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      param_1 = (FArray *)0x0;
      do {
        iVar2 = FArray::Add(in_ECX,1,0x78);
        if (*(int *)GUndo_exref != 0) {
          (**(code **)(**(int **)GUndo_exref + 4))(*(undefined4 *)(in_ECX + 0xc));
        }
        if (*(int *)in_ECX + iVar2 * 0x78 != 0) {
          thunk_FUN_1039bf50(*(int *)pFVar1 + (int)param_1);
        }
        param_1 = (FArray *)((int)param_1 + 0x78);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(pFVar1 + 4));
    }
    return;
  }
  return;
}


// ==== 103f73e0 FUN_103f73e0

void FUN_103f73e0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c6dd;
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
  local_18 = param_1 + param_2;
  if (*(int *)(in_ECX + 4) < local_18) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < local_18) {
    iVar1 = param_1 * 0x5c;
    local_18 = local_18 - param_1;
    do {
      iVar2 = *(int *)in_ECX + iVar1;
      local_4._0_1_ = 2;
      local_4._1_3_ = 0;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(iVar2 + 0x4c));
      local_4 = (uint)local_4._1_3_ << 8;
      FRenderResource::~FRenderResource((FRenderResource *)(iVar2 + 0x40));
      *(undefined ***)(iVar2 + 0x14) = FAnimMeshVertexStream::vftable;
      local_4 = 5;
      thunk_FUN_10397380();
      local_4 = 0xffffffff;
      FRenderResource::~FRenderResource((FRenderResource *)(iVar2 + 0x14));
      iVar1 = iVar1 + 0x5c;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x5c);
  ExceptionList = local_c;
  return;
}


// ==== 103f7550 FUN_103f7550

void FUN_103f7550(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  int iVar2;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c74d;
  local_c = ExceptionList;
  iVar1 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    local_18 = 0;
    ExceptionList = &local_c;
    do {
      iVar2 = *(int *)in_ECX + local_18;
      local_4._0_1_ = 2;
      local_4._1_3_ = 0;
      TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(iVar2 + 0x4c));
      local_4 = (uint)local_4._1_3_ << 8;
      FRenderResource::~FRenderResource((FRenderResource *)(iVar2 + 0x40));
      *(undefined ***)(iVar2 + 0x14) = FAnimMeshVertexStream::vftable;
      local_4 = 5;
      thunk_FUN_10397380();
      local_4 = 0xffffffff;
      FRenderResource::~FRenderResource((FRenderResource *)(iVar2 + 0x14));
      local_18 = local_18 + 0x5c;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x5c,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103f7650 FUN_103f7650

void FUN_103f7650(byte param_1)

{
  thunk_FUN_103f0a60();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 103f7680 FUN_103f7680

void FUN_103f7680(byte param_1)

{
  thunk_FUN_103f5150();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 103f76b0 FUN_103f76b0

void FUN_103f76b0(byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080c778;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103f0570();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 103f7720 FUN_103f7720

void FUN_103f7720(void)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_1080c7b1;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  thunk_FUN_103f2660();
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_103928b0();
  local_4 = 0xffffffff;
  thunk_FUN_103792c0();
  ExceptionList = local_c;
  return;
}


// ==== 103f7790 FUN_103f7790

void FUN_103f7790(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c7e4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray((FArray *)(in_ECX + 0xc));
  ExceptionList = local_c;
  return;
}


// ==== 103f77f0 FUN_103f77f0

void FUN_103f77f0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080c80b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103f6110();
  ExceptionList = local_c;
  return;
}


// ==== 103f7840 FUN_103f7840

void FUN_103f7840(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c82b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  thunk_FUN_103afb40(param_1 + 3);
  ExceptionList = local_c;
  return;
}


// ==== 103f78b0 FUN_103f78b0

void FUN_103f78b0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  thunk_FUN_103f6180(param_1 + 3);
  return;
}


// ==== 103f78f0 FUN_103f78f0

void FUN_103f78f0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080c85e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UConvexVolume::vftable;
  local_4 = 2;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 1;
  thunk_FUN_10390580();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_103f6200();
  local_4 = 0xffffffff;
  UPrimitive::~UPrimitive((UPrimitive *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f7980 FUN_103f7980

void FUN_103f7980(UPrimitive *param_1)

{
  UPrimitive *in_ECX;
  int iVar1;
  UPrimitive *pUVar2;
  UPrimitive *pUVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c89e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPrimitive::UPrimitive(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UConvexVolume::vftable;
  thunk_FUN_103afd40(param_1 + 0x60);
  local_4 = CONCAT31(local_4._1_3_,1);
  thunk_FUN_10379d80(param_1 + 0x6c);
  pUVar2 = param_1 + 0x78;
  pUVar3 = in_ECX + 0x78;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  ExceptionList = local_c;
  return;
}


// ==== 103f7a30 FUN_103f7a30

void FUN_103f7a30(UObject *param_1)

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
  thunk_FUN_103f6270(param_1 + 0x60);
  thunk_FUN_10390640(param_1 + 0x6c);
  pUVar2 = param_1 + 0x78;
  pUVar3 = in_ECX + 0x78;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  return;
}


// ==== 103f7ab0 FUN_103f7ab0

void FUN_103f7ab0(byte param_1)

{
  UConvexVolume *in_ECX;
  
  UConvexVolume::~UConvexVolume(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x94);
  }
  return;
}


// ==== 103f7ae0 FUN_103f7ae0

UConvexVolume * FUN_103f7ae0(byte param_1)

{
  UConvexVolume *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x94,*(int *)(in_ECX + -4),UConvexVolume::~UConvexVolume)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UConvexVolume::~UConvexVolume(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x94);
  }
  return in_ECX;
}


// ==== 103f7b60 FUN_103f7b60

void FUN_103f7b60(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080c8c8;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103f6300();
  ExceptionList = local_c;
  return;
}


// ==== 103f7bb0 FUN_103f7bb0

void FUN_103f7bb0(int param_1)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c8e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_103b0160(param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  ExceptionList = local_c;
  return;
}


// ==== 103f7c20 FUN_103f7c20

FArchive * FUN_103f7c20(FArchive *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FArchive::Ver(param_1);
  if (iVar1 < 0x71) {
    thunk_FUN_10392d50(param_1,param_2);
    thunk_FUN_10392f20(param_1,param_2 + 0xc);
    thunk_FUN_10392d50(param_1,param_2);
    thunk_FUN_103930e0(param_1,param_2 + 0x18);
    return param_1;
  }
  thunk_FUN_10392d50(param_1,param_2);
  thunk_FUN_10392f20(param_1,param_2 + 0xc);
  thunk_FUN_103930e0(param_1,param_2 + 0x18);
  thunk_FUN_103f6750(param_1,param_2 + 0x24);
  return param_1;
}


// ==== 103f7cb0 FUN_103f7cb0

void FUN_103f7cb0(UKMeshProps *param_1)

{
  if (param_1 != (UKMeshProps *)0x0) {
    UKMeshProps::UKMeshProps(param_1);
    return;
  }
  return;
}


// ==== 103f7cd0 FUN_103f7cd0

void FUN_103f7cd0(FArchive *param_1)

{
  undefined4 uVar1;
  UObject *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080c900;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  UObject::Serialize(in_ECX,param_1);
  uVar1 = thunk_FUN_10330060(param_1,in_ECX + 0x34,in_ECX + 0x38,in_ECX + 0x3c);
  uVar1 = thunk_FUN_10330060(uVar1);
  thunk_FUN_10330060(uVar1);
  uVar1 = thunk_FUN_10330060(param_1,in_ECX + 0x40,in_ECX + 0x44,in_ECX + 0x48);
  uVar1 = thunk_FUN_10330060(uVar1);
  thunk_FUN_10330060(uVar1);
  thunk_FUN_103301d0(param_1,in_ECX + 0x4c);
  thunk_FUN_103f7c20(param_1,in_ECX + 0x58);
  ExceptionList = local_10;
  return;
}


// ==== 103f7d80 Catch@103f7d80

void Catch_103f7d80(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 103f7d94 Catch@103f7d94

void Catch_103f7d94(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UKMeshProps::Serialize");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103f7df0 FUN_103f7df0

void FUN_103f7df0(FArchive *param_1,void *param_2)

{
  FArchive *pFVar1;
  undefined4 uVar2;
  FString *pFVar3;
  FString *pFVar4;
  
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  pFVar1 = operator<<(param_1,(FString *)((int)param_2 + 4));
  FArchive::ByteOrderSerialize(pFVar1,(void *)((int)param_2 + 0x10),4);
  FArchive::ByteOrderSerialize(pFVar1,(void *)((int)param_2 + 0x14),4);
  pFVar4 = (FString *)((int)param_2 + 0x30);
  pFVar3 = (FString *)((int)param_2 + 0x24);
  pFVar1 = operator<<(pFVar1,(FString *)((int)param_2 + 0x18));
  pFVar1 = operator<<(pFVar1,pFVar3);
  pFVar1 = operator<<(pFVar1,pFVar4);
  FArchive::ByteOrderSerialize(pFVar1,(void *)((int)param_2 + 0x3c),4);
  FArchive::ByteOrderSerialize(pFVar1,(void *)((int)param_2 + 0x40),4);
  FArchive::ByteOrderSerialize(pFVar1,(void *)((int)param_2 + 0x44),4);
  uVar2 = thunk_FUN_103934c0(pFVar1,(int)param_2 + 0x48,(int)param_2 + 0x54);
  thunk_FUN_103f6910(uVar2);
  return;
}


// ==== 103f7ed0 FUN_103f7ed0

void FUN_103f7ed0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080c968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString((FString *)(in_ECX + 4));
  local_4 = 0;
  FString::FString((FString *)(in_ECX + 0x18));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 0x24));
  local_4._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0x30));
  local_4._0_1_ = 3;
  FArray::FArray((FArray *)(in_ECX + 0x48));
  local_4 = CONCAT31(local_4._1_3_,5);
  FArray::FArray((FArray *)(in_ECX + 0x54));
  ExceptionList = local_c;
  return;
}


// ==== 103f7f90 FUN_103f7f90

void FUN_103f7f90(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080c9d6;
  local_c = ExceptionList;
  local_4 = 4;
  ExceptionList = &local_c;
  thunk_FUN_103f68a0();
  local_4._0_1_ = 3;
  thunk_FUN_10393450();
  local_4._0_1_ = 2;
  FString::~FString((FString *)(in_ECX + 0x30));
  local_4._0_1_ = 1;
  FString::~FString((FString *)(in_ECX + 0x24));
  local_4 = (uint)local_4._1_3_ << 8;
  FString::~FString((FString *)(in_ECX + 0x18));
  local_4 = 0xffffffff;
  FString::~FString((FString *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 103f8040 FUN_103f8040

void FUN_103f8040(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ca46;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  FString::FString((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  local_4 = 0;
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  FString::FString((FString *)(in_ECX + 6),(FString *)(param_1 + 6));
  local_4._0_1_ = 1;
  FString::FString((FString *)(in_ECX + 9),(FString *)(param_1 + 9));
  local_4._0_1_ = 2;
  FString::FString((FString *)(in_ECX + 0xc),(FString *)(param_1 + 0xc));
  local_4._0_1_ = 3;
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  in_ECX[0x11] = param_1[0x11];
  thunk_FUN_1037bda0(param_1 + 0x12);
  local_4 = CONCAT31(local_4._1_3_,4);
  thunk_FUN_103b05b0(param_1 + 0x15);
  ExceptionList = local_c;
  return;
}


// ==== 103f8140 FUN_103f8140

void FUN_103f8140(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  FString::operator=((FString *)(in_ECX + 1),(FString *)(param_1 + 1));
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  FString::operator=((FString *)(in_ECX + 6),(FString *)(param_1 + 6));
  FString::operator=((FString *)(in_ECX + 9),(FString *)(param_1 + 9));
  FString::operator=((FString *)(in_ECX + 0xc),(FString *)(param_1 + 0xc));
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  in_ECX[0x11] = param_1[0x11];
  thunk_FUN_10393610(param_1 + 0x12);
  thunk_FUN_103f6a60(param_1 + 0x15);
  return;
}


// ==== 103f81e0 FUN_103f81e0

void FUN_103f81e0(AServerPrimitive *param_1)

{
  if (param_1 != (AServerPrimitive *)0x0) {
    AServerPrimitive::AServerPrimitive(param_1);
    return;
  }
  return;
}


// ==== 103f8200 FUN_103f8200

void FUN_103f8200(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080cb0c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = ULevel::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = ULevel::vftable_for_FNetworkNotify_;
  local_4 = 10;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 9;
  thunk_FUN_10326630();
  local_4._0_1_ = 8;
  thunk_FUN_103962b0();
  local_4._0_1_ = 7;
  thunk_FUN_103962b0();
  local_4._0_1_ = 6;
  thunk_FUN_10379100();
  local_4._0_1_ = 5;
  thunk_FUN_10326630();
  local_4._0_1_ = 4;
  thunk_FUN_10326800();
  local_4._0_1_ = 3;
  thunk_FUN_103f6cf0();
  local_4._0_1_ = 2;
  thunk_FUN_103f6bd0();
  local_4._0_1_ = 1;
  thunk_FUN_103f6ae0();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_103ee570();
  local_4 = 0xffffffff;
  ULevelBase::~ULevelBase((ULevelBase *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f8350 FUN_103f8350

void FUN_103f8350(void)

{
  ULevelBase *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080cc2d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ULevelBase::ULevelBase(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = ULevel::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = ULevel::vftable_for_FNetworkNotify_;
  thunk_FUN_103ee480();
  local_4._0_1_ = 2;
  FArray::FArray((FArray *)(in_ECX + 0x1144));
  local_4._0_1_ = 4;
  FArray::FArray((FArray *)(in_ECX + 0x1150));
  local_4._0_1_ = 6;
  FArray::FArray((FArray *)(in_ECX + 0x115c));
  local_4._0_1_ = 8;
  FArray::FArray((FArray *)(in_ECX + 0x1168));
  local_4._0_1_ = 10;
  FArray::FArray((FArray *)(in_ECX + 0x1174));
  local_4._0_1_ = 0xc;
  FArray::FArray((FArray *)(in_ECX + 0x1198));
  local_4._0_1_ = 0xe;
  FArray::FArray((FArray *)(in_ECX + 0x11b0));
  local_4._0_1_ = 0x10;
  FArray::FArray((FArray *)(in_ECX + 0x11bc));
  local_4 = CONCAT31(local_4._1_3_,0x12);
  FArray::FArray((FArray *)(in_ECX + 0x11dc));
  ExceptionList = local_c;
  return;
}


// ==== 103f84c0 FUN_103f84c0

void FUN_103f84c0(ULevelBase *param_1)

{
  ULevelBase *in_ECX;
  int iVar1;
  ULevelBase *pUVar2;
  ULevelBase *pUVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080cd1c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ULevelBase::ULevelBase(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = ULevel::vftable_for_UObject_;
  *(undefined ***)(in_ECX + 0x34) = ULevel::vftable_for_FNetworkNotify_;
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  pUVar2 = param_1 + 0xc4;
  pUVar3 = in_ECX + 0xc4;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  *(undefined8 *)(in_ECX + 0x104) = *(undefined8 *)(param_1 + 0x104);
  thunk_FUN_103ee4f0(param_1 + 0x10c);
  local_4._0_1_ = 2;
  *(undefined4 *)(in_ECX + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(in_ECX + 0x134) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(in_ECX + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(param_1 + 0x140);
  _memcpy(in_ECX + 0x144,param_1 + 0x144,0x1000);
  thunk_FUN_103b1650(param_1 + 0x1144);
  local_4._0_1_ = 3;
  thunk_FUN_103b1710(param_1 + 0x1150);
  local_4._0_1_ = 4;
  thunk_FUN_103b17e0(param_1 + 0x115c);
  local_4._0_1_ = 5;
  thunk_FUN_1037bab0(param_1 + 0x1168);
  local_4._0_1_ = 6;
  thunk_FUN_1032bef0(param_1 + 0x1174);
  local_4._0_1_ = 7;
  *(undefined4 *)(in_ECX + 0x1180) = *(undefined4 *)(param_1 + 0x1180);
  *(undefined4 *)(in_ECX + 0x1184) = *(undefined4 *)(param_1 + 0x1184);
  *(undefined4 *)(in_ECX + 0x1188) = *(undefined4 *)(param_1 + 0x1188);
  *(undefined4 *)(in_ECX + 0x118c) = *(undefined4 *)(param_1 + 0x118c);
  *(undefined4 *)(in_ECX + 0x1190) = *(undefined4 *)(param_1 + 0x1190);
  *(undefined4 *)(in_ECX + 0x1194) = *(undefined4 *)(param_1 + 0x1194);
  thunk_FUN_10379070(param_1 + 0x1198);
  local_4._0_1_ = 8;
  *(undefined4 *)(in_ECX + 0x11a4) = *(undefined4 *)(param_1 + 0x11a4);
  *(undefined4 *)(in_ECX + 0x11a8) = *(undefined4 *)(param_1 + 0x11a8);
  *(undefined4 *)(in_ECX + 0x11ac) = *(undefined4 *)(param_1 + 0x11ac);
  thunk_FUN_1037e550(param_1 + 0x11b0);
  local_4._0_1_ = 9;
  thunk_FUN_1037e550(param_1 + 0x11bc);
  local_4 = CONCAT31(local_4._1_3_,10);
  *(undefined4 *)(in_ECX + 0x11c8) = *(undefined4 *)(param_1 + 0x11c8);
  *(undefined4 *)(in_ECX + 0x11cc) = *(undefined4 *)(param_1 + 0x11cc);
  *(undefined4 *)(in_ECX + 0x11d0) = *(undefined4 *)(param_1 + 0x11d0);
  *(undefined4 *)(in_ECX + 0x11d4) = *(undefined4 *)(param_1 + 0x11d4);
  *(undefined4 *)(in_ECX + 0x11d8) = *(undefined4 *)(param_1 + 0x11d8);
  thunk_FUN_1032bef0(param_1 + 0x11dc);
  ExceptionList = local_c;
  return;
}


// ==== 103f8810 FUN_103f8810

void FUN_103f8810(ULevelBase *param_1)

{
  ULevelBase *pUVar1;
  ULevelBase *in_ECX;
  int iVar2;
  
  ULevelBase::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  pUVar1 = in_ECX + 0xc4;
  iVar2 = 0x10;
  do {
    *(undefined4 *)pUVar1 = *(undefined4 *)(pUVar1 + ((int)param_1 - (int)in_ECX));
    pUVar1 = pUVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined8 *)(in_ECX + 0x104) = *(undefined8 *)(param_1 + 0x104);
  thunk_FUN_1039e3f0(param_1 + 0x10c);
  *(undefined4 *)(in_ECX + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  thunk_FUN_10387760();
  *(undefined4 *)(in_ECX + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(in_ECX + 0x134) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(in_ECX + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(param_1 + 0x140);
  pUVar1 = in_ECX + 0x144;
  iVar2 = 0x1000;
  do {
    *pUVar1 = pUVar1[(int)param_1 - (int)in_ECX];
    pUVar1 = pUVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  thunk_FUN_103f6b50(param_1 + 0x1144);
  thunk_FUN_103f6c40(param_1 + 0x1150);
  thunk_FUN_103f6d60(param_1 + 0x115c);
  thunk_FUN_10393250(param_1 + 0x1168);
  thunk_FUN_1032bfc0(param_1 + 0x1174);
  *(undefined4 *)(in_ECX + 0x1180) = *(undefined4 *)(param_1 + 0x1180);
  *(undefined4 *)(in_ECX + 0x1184) = *(undefined4 *)(param_1 + 0x1184);
  *(undefined4 *)(in_ECX + 0x1188) = *(undefined4 *)(param_1 + 0x1188);
  *(undefined4 *)(in_ECX + 0x118c) = *(undefined4 *)(param_1 + 0x118c);
  *(undefined4 *)(in_ECX + 0x1190) = *(undefined4 *)(param_1 + 0x1190);
  *(undefined4 *)(in_ECX + 0x1194) = *(undefined4 *)(param_1 + 0x1194);
  thunk_FUN_103791c0(param_1 + 0x1198);
  *(undefined4 *)(in_ECX + 0x11a4) = *(undefined4 *)(param_1 + 0x11a4);
  *(undefined4 *)(in_ECX + 0x11a8) = *(undefined4 *)(param_1 + 0x11a8);
  *(undefined4 *)(in_ECX + 0x11ac) = *(undefined4 *)(param_1 + 0x11ac);
  thunk_FUN_10396370(param_1 + 0x11b0);
  thunk_FUN_10396370(param_1 + 0x11bc);
  *(undefined4 *)(in_ECX + 0x11c8) = *(undefined4 *)(param_1 + 0x11c8);
  *(undefined4 *)(in_ECX + 0x11cc) = *(undefined4 *)(param_1 + 0x11cc);
  *(undefined4 *)(in_ECX + 0x11d0) = *(undefined4 *)(param_1 + 0x11d0);
  *(undefined4 *)(in_ECX + 0x11d4) = *(undefined4 *)(param_1 + 0x11d4);
  *(undefined4 *)(in_ECX + 0x11d8) = *(undefined4 *)(param_1 + 0x11d8);
  thunk_FUN_1032bfc0(param_1 + 0x11dc);
  return;
}


// ==== 103f8af0 FUN_103f8af0

void FUN_103f8af0(byte param_1)

{
  ULevel *in_ECX;
  
  ULevel::~ULevel(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x11e8);
  }
  return;
}


// ==== 103f8b20 FUN_103f8b20

ULevel * FUN_103f8b20(byte param_1)

{
  ULevel *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x11e8,*(int *)(in_ECX + -4),ULevel::~ULevel);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  ULevel::~ULevel(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x11e8);
  }
  return in_ECX;
}


// ==== 103f8ba0 FUN_103f8ba0

void FUN_103f8ba0(USkeletalMeshInstance *param_1)

{
  if (param_1 != (USkeletalMeshInstance *)0x0) {
    USkeletalMeshInstance::USkeletalMeshInstance(param_1);
    return;
  }
  return;
}


// ==== 103f8bc0 FUN_103f8bc0

void FUN_103f8bc0(UExtraSkeletalMeshInstance *param_1)

{
  if (param_1 != (UExtraSkeletalMeshInstance *)0x0) {
    UExtraSkeletalMeshInstance::UExtraSkeletalMeshInstance(param_1);
    return;
  }
  return;
}


// ==== 103f8be0 FUN_103f8be0

void FUN_103f8be0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int local_86c;
  undefined1 local_868 [40];
  FArray local_840 [4];
  undefined4 local_83c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080cdb2;
  local_c = ExceptionList;
  iVar3 = *(int *)(in_ECX + 100);
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
    ExceptionList = &local_c;
    thunk_FUN_103f50c0();
    local_4 = 0;
    iVar3 = *(int *)(in_ECX + 100);
    if (iVar3 != 1 && -1 < iVar3 + -1) {
      local_86c = 1;
      do {
        iVar4 = local_86c;
        iVar2 = iVar5;
        if (local_86c < iVar3) {
          do {
            iVar2 = iVar2 + 0x5c;
            iVar3 = *(int *)(in_ECX + 0x60);
            if (*(int *)(iVar2 + iVar3) < *(int *)(iVar3 + iVar5)) {
              thunk_FUN_103f4240(iVar3 + iVar5);
              thunk_FUN_103f4240(iVar2 + *(int *)(in_ECX + 0x60));
              thunk_FUN_103f4240(local_868);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(in_ECX + 100));
        }
        iVar3 = *(int *)(in_ECX + 100);
        iVar5 = iVar5 + 0x5c;
        bVar1 = local_86c < iVar3 + -1;
        local_86c = local_86c + 1;
      } while (bVar1);
    }
    iVar3 = 0;
    if (0 < *(int *)(in_ECX + 100)) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(in_ECX + 100));
    }
    local_4._0_1_ = 5;
    local_4._1_3_ = 0;
    thunk_FUN_1038fce0();
    local_4._0_1_ = 4;
    thunk_FUN_1038fad0();
    local_4._0_1_ = 2;
    thunk_FUN_10397d20();
    local_4._0_1_ = 7;
    thunk_FUN_103b39d0(0,local_83c);
    local_4 = CONCAT31(local_4._1_3_,1);
    FArray::~FArray(local_840);
    local_4 = 0xffffffff;
    thunk_FUN_10325f90();
  }
  ExceptionList = local_c;
  return;
}


// ==== 103f8dd0 FUN_103f8dd0

void FUN_103f8dd0(UTerrainSector *param_1)

{
  if (param_1 != (UTerrainSector *)0x0) {
    UTerrainSector::UTerrainSector(param_1);
    return;
  }
  return;
}


// ==== 103f8df0 FUN_103f8df0

void FUN_103f8df0(UStaticMeshInstance *param_1)

{
  if (param_1 != (UStaticMeshInstance *)0x0) {
    UStaticMeshInstance::UStaticMeshInstance(param_1);
    return;
  }
  return;
}


// ==== 103f8e10 FUN_103f8e10

void FUN_103f8e10(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080cdeb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  thunk_FUN_103eee00(param_1 + 3);
  ExceptionList = local_c;
  return;
}


// ==== 103f8e80 FUN_103f8e80

void FUN_103f8e80(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080ce0b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103f6fa0();
  ExceptionList = local_c;
  return;
}


// ==== 103f8f10 FUN_103f8f10

void FUN_103f8f10(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ce55;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  thunk_FUN_103eeef0(param_1 + 2);
  local_4 = 1;
  thunk_FUN_103b2d00(param_1 + 7);
  local_4._0_1_ = 2;
  thunk_FUN_1032bc20(param_1 + 10);
  local_4 = CONCAT31(local_4._1_3_,3);
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  in_ECX[0x11] = param_1[0x11];
  in_ECX[0x12] = param_1[0x12];
  in_ECX[0x13] = param_1[0x13];
  *(undefined1 *)(in_ECX + 0x14) = *(undefined1 *)(param_1 + 0x14);
  FString::FString((FString *)(in_ECX + 0x15),(FString *)(param_1 + 0x15));
  ExceptionList = local_c;
  return;
}


// ==== 103f9000 FUN_103f9000

void FUN_103f9000(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  thunk_FUN_1039e580(param_1 + 2);
  in_ECX[6] = param_1[6];
  thunk_FUN_1038aca0();
  thunk_FUN_103f7100(param_1 + 7);
  thunk_FUN_1032bcd0(param_1 + 10);
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  in_ECX[0x11] = param_1[0x11];
  in_ECX[0x12] = param_1[0x12];
  in_ECX[0x13] = param_1[0x13];
  *(undefined1 *)(in_ECX + 0x14) = *(undefined1 *)(param_1 + 0x14);
  FString::operator=((FString *)(in_ECX + 0x15),(FString *)(param_1 + 0x15));
  return;
}


// ==== 103f90b0 FUN_103f90b0

void FUN_103f90b0(undefined4 param_1,int param_2)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080ce81;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_2,0x78);
  *(undefined4 *)(in_ECX + 0xc) = param_1;
  ExceptionList = local_c;
  return;
}


// ==== 103f9140 FUN_103f9140

void FUN_103f9140(int *param_1)

{
  FAnywhereNpcMaker *this;
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080cea9;
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
      this = (FAnywhereNpcMaker *)(*(int *)in_ECX + iVar1 * 0x18);
      if (this != (FAnywhereNpcMaker *)0x0) {
        FAnywhereNpcMaker::FAnywhereNpcMaker(this,(FAnywhereNpcMaker *)(*param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 103f9200 FUN_103f9200

void FUN_103f9200(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080cec9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103f73e0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f9270 FUN_103f9270

void FUN_103f9270(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103f7550(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x5c);
      if (iVar1 * 0x5c + *(int *)in_ECX != 0) {
        thunk_FUN_103b2fa0(*(int *)param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x5c;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103f92f0 FUN_103f92f0

void FUN_103f92f0(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080cee9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0x74);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x74);
      if (iVar1 * 0x74 + *(int *)in_ECX != 0) {
        thunk_FUN_103f7180(*param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x74;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 103f93b0 FUN_103f93b0

void FUN_103f93b0(int *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080cf11;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,param_1[1],0xc);
  iVar2 = 0;
  local_4 = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  if (0 < param_1[1]) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0xc);
      if (*(int *)in_ECX + iVar1 * 0xc != 0) {
        thunk_FUN_103b3f30(*param_1 + iVar3);
        local_4 = local_4 & 0xffffff00;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


// ==== 103f9480 FUN_103f9480

void FUN_103f9480(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  
  if (param_1 < 0) {
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
    iVar1 = iVar1 - param_1;
    do {
      thunk_FUN_103f0a60();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x174);
  return;
}


// ==== 103f9550 FUN_103f9550

void FUN_103f9550(int param_1)

{
  FArray *in_ECX;
  int iVar1;
  
  if (0 < *(int *)(in_ECX + 4)) {
    iVar1 = 0;
    do {
      thunk_FUN_103f0a60();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x174,param_1);
  return;
}


// ==== 103f95a0 FUN_103f95a0

void FUN_103f95a0(int param_1,int param_2)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080cf7b;
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
  local_18 = param_1 + param_2;
  if (*(int *)(in_ECX + 4) < local_18) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < local_18) {
    iVar2 = param_1 * 0x5c;
    local_18 = local_18 - param_1;
    do {
      iVar1 = *(int *)in_ECX;
      local_4._0_1_ = 4;
      local_4._1_3_ = 0;
      thunk_FUN_1038fce0();
      local_4._0_1_ = 3;
      thunk_FUN_1038fad0();
      local_4._0_1_ = 1;
      thunk_FUN_10397d20();
      local_4._0_1_ = 6;
      thunk_FUN_103b39d0(0,*(undefined4 *)(iVar1 + iVar2 + 0x2c));
      local_4 = (uint)local_4._1_3_ << 8;
      FArray::~FArray((FArray *)(iVar1 + iVar2 + 0x28));
      local_4 = 0xffffffff;
      thunk_FUN_10325f90();
      iVar2 = iVar2 + 0x5c;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x5c);
  ExceptionList = local_c;
  return;
}


// ==== 103f9730 FUN_103f9730

void FUN_103f9730(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080cfeb;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    local_18 = 0;
    ExceptionList = &local_c;
    do {
      iVar1 = *(int *)in_ECX;
      local_4._0_1_ = 4;
      local_4._1_3_ = 0;
      thunk_FUN_1038fce0();
      local_4._0_1_ = 3;
      thunk_FUN_1038fad0();
      local_4._0_1_ = 1;
      thunk_FUN_10397d20();
      local_4._0_1_ = 6;
      thunk_FUN_103b39d0(0,*(undefined4 *)(iVar1 + local_18 + 0x2c));
      local_4 = (uint)local_4._1_3_ << 8;
      FArray::~FArray((FArray *)(iVar1 + local_18 + 0x28));
      local_4 = 0xffffffff;
      thunk_FUN_10325f90();
      local_18 = local_18 + 0x5c;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x5c,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103f9850 FUN_103f9850

void FUN_103f9850(int param_1,int param_2)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080d021;
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
    iVar3 = param_1 * 0xc;
    iVar2 = iVar2 - param_1;
    do {
      iVar1 = *(int *)in_ECX;
      local_4 = 1;
      thunk_FUN_103b4b80(0,*(undefined4 *)((FArray *)(iVar1 + iVar3) + 4));
      local_4 = 0xffffffff;
      FArray::~FArray((FArray *)(iVar1 + iVar3));
      iVar3 = iVar3 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0xc);
  ExceptionList = local_c;
  return;
}


// ==== 103f9970 FUN_103f9970

void FUN_103f9970(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080d051;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar3 = 0;
    ExceptionList = &local_c;
    do {
      iVar1 = *(int *)in_ECX;
      local_4 = 1;
      thunk_FUN_103b4b80(0,*(undefined4 *)((FArray *)(iVar1 + iVar3) + 4));
      local_4 = 0xffffffff;
      FArray::~FArray((FArray *)(iVar1 + iVar3));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0xc,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103f9a20 FUN_103f9a20

void FUN_103f9a20(byte param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080d07b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103f6110();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  ExceptionList = local_c;
  return;
}


// ==== 103f9a90 FUN_103f9a90

void FUN_103f9a90(byte param_1)

{
  thunk_FUN_103f7720();
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 103f9ac0 FUN_103f9ac0

void FUN_103f9ac0(int param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080d0a4;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar3 = 0;
    ExceptionList = &local_c;
    do {
      iVar1 = *(int *)in_ECX;
      local_4 = 1;
      thunk_FUN_103ef680(0,*(undefined4 *)(iVar1 + iVar3 + 0x10));
      local_4 = 0xffffffff;
      FArray::~FArray((FArray *)(iVar1 + iVar3 + 0xc));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  FArray::Empty(in_ECX,0x18,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103f9b80 FUN_103f9b80

void FUN_103f9b80(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080d1ae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UModel::vftable;
  local_4 = 0xe;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 0xd;
  thunk_FUN_10325f90();
  local_4._0_1_ = 0xc;
  thunk_FUN_103926c0();
  local_4._0_1_ = 0xb;
  thunk_FUN_10392150();
  local_4._0_1_ = 10;
  thunk_FUN_103f64f0();
  local_4._0_1_ = 9;
  thunk_FUN_103f6400();
  local_4._0_1_ = 8;
  thunk_FUN_10392590();
  local_4._0_1_ = 7;
  thunk_FUN_10392430();
  local_4._0_1_ = 6;
  thunk_FUN_10325f90();
  local_4._0_1_ = 5;
  thunk_FUN_103917b0();
  local_4._0_1_ = 4;
  thunk_FUN_103edff0();
  local_4._0_1_ = 3;
  thunk_FUN_1038fad0();
  local_4._0_1_ = 2;
  thunk_FUN_1038fad0();
  local_4._0_1_ = 1;
  thunk_FUN_10392240();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_103f6300();
  local_4 = 0xffffffff;
  UPrimitive::~UPrimitive((UPrimitive *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103f9d30 FUN_103f9d30

void FUN_103f9d30(void)

{
  UPrimitive *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080d317;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPrimitive::UPrimitive(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UModel::vftable;
  thunk_FUN_103f90b0(in_ECX,0);
  local_4._0_1_ = 1;
  thunk_FUN_103b0220(in_ECX,0);
  local_4._0_1_ = 2;
  thunk_FUN_10392300(in_ECX,0);
  local_4._0_1_ = 3;
  thunk_FUN_10392300(in_ECX,0);
  local_4._0_1_ = 4;
  thunk_FUN_103f6370(in_ECX,0);
  local_4._0_1_ = 5;
  FArray::FArray((FArray *)(in_ECX + 0xb4));
  local_4._0_1_ = 7;
  FArray::FArray((FArray *)(in_ECX + 0xc0));
  local_4._0_1_ = 9;
  FArray::FArray((FArray *)(in_ECX + 0xcc));
  local_4._0_1_ = 0xb;
  FArray::FArray((FArray *)(in_ECX + 0xd8));
  local_4._0_1_ = 0xd;
  FArray::FArray((FArray *)(in_ECX + 0xe4));
  local_4._0_1_ = 0xf;
  FArray::FArray((FArray *)(in_ECX + 0xf0));
  local_4._0_1_ = 0x11;
  FArray::FArray((FArray *)(in_ECX + 0x100));
  local_4._0_1_ = 0x13;
  FArray::FArray((FArray *)(in_ECX + 0x10c));
  local_4._0_1_ = 0x15;
  FArray::FArray((FArray *)(in_ECX + 0x118));
  local_4 = CONCAT31(local_4._1_3_,0x17);
  *(undefined4 *)(in_ECX + 0x124) = 1;
  UModel::EmptyModel((UModel *)in_ECX,1,0);
  ExceptionList = local_c;
  return;
}


// ==== 103f9f10 FUN_103f9f10

void FUN_103f9f10(UPrimitive *param_1)

{
  UPrimitive *in_ECX;
  int iVar1;
  UPrimitive *pUVar2;
  UPrimitive *pUVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080d436;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UPrimitive::UPrimitive(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UModel::vftable;
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  thunk_FUN_103f7bb0(param_1 + 100);
  local_4._0_1_ = 1;
  thunk_FUN_103a1890(param_1 + 0x74);
  local_4._0_1_ = 2;
  thunk_FUN_103a1900(param_1 + 0x84);
  local_4._0_1_ = 3;
  thunk_FUN_103a1900(param_1 + 0x94);
  local_4._0_1_ = 4;
  thunk_FUN_103f2420(param_1 + 0xa4);
  local_4._0_1_ = 5;
  thunk_FUN_1037a500(param_1 + 0xb4);
  local_4._0_1_ = 6;
  thunk_FUN_1032bc20(param_1 + 0xc0);
  local_4._0_1_ = 7;
  thunk_FUN_1037af50(param_1 + 0xcc);
  local_4._0_1_ = 8;
  thunk_FUN_1037b030(param_1 + 0xd8);
  local_4._0_1_ = 9;
  thunk_FUN_103b02d0(param_1 + 0xe4);
  local_4._0_1_ = 10;
  thunk_FUN_103b0390(param_1 + 0xf0);
  local_4._0_1_ = 0xb;
  *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  thunk_FUN_10392090(param_1 + 0x100);
  local_4._0_1_ = 0xc;
  thunk_FUN_103f65f0(param_1 + 0x10c);
  local_4 = CONCAT31(local_4._1_3_,0xd);
  thunk_FUN_1032bc20(param_1 + 0x118);
  *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(in_ECX + 0x134) = *(undefined4 *)(param_1 + 0x134);
  pUVar2 = param_1 + 0x138;
  pUVar3 = in_ECX + 0x138;
  for (iVar1 = 0x180; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pUVar3 = *(undefined4 *)pUVar2;
    pUVar2 = pUVar2 + 4;
    pUVar3 = pUVar3 + 4;
  }
  ExceptionList = local_c;
  return;
}


// ==== 103fa180 FUN_103fa180

void FUN_103fa180(UObject *param_1)

{
  UObject *pUVar1;
  UObject *in_ECX;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  
  UObject::operator=(in_ECX,param_1);
  pUVar1 = param_1 + 0x34;
  pUVar4 = in_ECX + 0x34;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pUVar4 = *(undefined4 *)pUVar1;
    pUVar1 = pUVar1 + 4;
    pUVar4 = pUVar4 + 4;
  }
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  thunk_FUN_103f72e0(param_1 + 100);
  thunk_FUN_1039cac0(param_1 + 0x74);
  thunk_FUN_1039cbb0(param_1 + 0x84);
  thunk_FUN_1039cbb0(param_1 + 0x94);
  thunk_FUN_103efa40(param_1 + 0xa4);
  thunk_FUN_10391870(param_1 + 0xb4);
  thunk_FUN_1032bcd0(param_1 + 0xc0);
  thunk_FUN_103924f0(param_1 + 0xcc);
  thunk_FUN_10392650(param_1 + 0xd8);
  thunk_FUN_103f6470(param_1 + 0xe4);
  thunk_FUN_103f6560(param_1 + 0xf0);
  *(undefined4 *)(in_ECX + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  thunk_FUN_103921c0(param_1 + 0x100);
  thunk_FUN_103f66c0(param_1 + 0x10c);
  thunk_FUN_1032bcd0(param_1 + 0x118);
  *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(in_ECX + 0x134) = *(undefined4 *)(param_1 + 0x134);
  pUVar1 = in_ECX + 0x138;
  iVar3 = (int)param_1 - (int)in_ECX;
  iVar2 = 0x40;
  do {
    *(undefined4 *)pUVar1 = *(undefined4 *)(pUVar1 + iVar3);
    *(undefined4 *)(pUVar1 + 4) = *(undefined4 *)(pUVar1 + iVar3 + 4);
    *(undefined4 *)(pUVar1 + 8) = *(undefined4 *)(pUVar1 + iVar3 + 8);
    *(undefined4 *)(pUVar1 + 0xc) = *(undefined4 *)(pUVar1 + iVar3 + 0xc);
    *(undefined4 *)(pUVar1 + 0x10) = *(undefined4 *)(pUVar1 + iVar3 + 0x10);
    *(undefined4 *)(pUVar1 + 0x14) = *(undefined4 *)(pUVar1 + iVar3 + 0x14);
    pUVar1 = pUVar1 + 0x18;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


// ==== 103fa3b0 FUN_103fa3b0

void FUN_103fa3b0(byte param_1)

{
  UModel *in_ECX;
  
  UModel::~UModel(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x738);
  }
  return;
}


// ==== 103fa3e0 FUN_103fa3e0

UModel * FUN_103fa3e0(byte param_1)

{
  UModel *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x738,*(int *)(in_ECX + -4),UModel::~UModel);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UModel::~UModel(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x738);
  }
  return in_ECX;
}


// ==== 103fa460 FUN_103fa460

void FUN_103fa460(ULevel *param_1)

{
  if (param_1 != (ULevel *)0x0) {
    ULevel::ULevel(param_1);
    return;
  }
  return;
}


// ==== 103fa480 FUN_103fa480

void FUN_103fa480(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080d496;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103f9200();
  local_4 = 0xffffffff;
  FRawIndexBuffer::~FRawIndexBuffer((FRawIndexBuffer *)(in_ECX + 4));
  ExceptionList = local_c;
  return;
}


// ==== 103fa4e0 FUN_103fa4e0

void FUN_103fa4e0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080d4cf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FRawIndexBuffer::FRawIndexBuffer((FRawIndexBuffer *)(in_ECX + 4));
  local_4 = 0;
  FArray::FArray((FArray *)(in_ECX + 0x20));
  ExceptionList = local_c;
  return;
}


// ==== 103fa550 FUN_103fa550

void FUN_103fa550(undefined4 *param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080d506;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  FRawIndexBuffer::FRawIndexBuffer((FRawIndexBuffer *)(in_ECX + 1),(FRawIndexBuffer *)(param_1 + 1))
  ;
  local_4 = 0;
  thunk_FUN_103ee600(param_1 + 8);
  ExceptionList = local_c;
  return;
}


// ==== 103fa620 FUN_103fa620

void FUN_103fa620(int param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080d52b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = FMatineeTools::vftable;
  in_ECX[1] = *(undefined4 *)(param_1 + 4);
  in_ECX[2] = *(undefined4 *)(param_1 + 8);
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  in_ECX[4] = *(undefined4 *)(param_1 + 0x10);
  in_ECX[5] = *(undefined4 *)(param_1 + 0x14);
  in_ECX[6] = *(undefined4 *)(param_1 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[9] = *(undefined4 *)(param_1 + 0x24);
  thunk_FUN_103f8e10(param_1 + 0x28);
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
  ExceptionList = local_c;
  return;
}


// ==== 103fa720 FUN_103fa720

void FUN_103fa720(int param_1)

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
  thunk_FUN_103f7010(param_1 + 0x34);
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
  return;
}


// ==== 103fa7f0 FUN_103fa7f0

void FUN_103fa7f0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080d549;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103f9480(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103fa860 FUN_103fa860

void FUN_103fa860(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103f9550(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x174);
      if (iVar1 * 0x174 + *(int *)in_ECX != 0) {
        thunk_FUN_103ef000(*(int *)param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x174;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103fa8f0 FUN_103fa8f0

void FUN_103fa8f0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080d569;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103f95a0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103fa960 FUN_103fa960

void FUN_103fa960(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103f9730(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x5c);
      if (iVar1 * 0x5c + *(int *)in_ECX != 0) {
        thunk_FUN_103ef520(*(int *)param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x5c;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103fa9e0 FUN_103fa9e0

void FUN_103fa9e0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080d589;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103f9850(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103faa50 FUN_103faa50

void FUN_103faa50(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080d5a8;
  local_c = ExceptionList;
  if (in_ECX != param_1) {
    ExceptionList = &local_c;
    thunk_FUN_103f9970(*(int *)(param_1 + 4));
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      iVar2 = 0;
      do {
        iVar1 = FArray::Add(in_ECX,1,0xc);
        if (*(int *)in_ECX + iVar1 * 0xc != 0) {
          thunk_FUN_103b3f30(*(int *)param_1 + iVar2);
          local_4 = 0xffffffff;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0xc;
      } while (iVar3 < *(int *)(param_1 + 4));
    }
  }
  ExceptionList = local_c;
  return;
}


// ==== 103fab00 FUN_103fab00

void FUN_103fab00(int param_1,int param_2)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080d5d4;
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
      local_4 = 1;
      thunk_FUN_103ef680(0,*(undefined4 *)(iVar1 + iVar3 + 0x10));
      local_4 = 0xffffffff;
      FArray::~FArray((FArray *)(iVar1 + iVar3 + 0xc));
      iVar3 = iVar3 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x18);
  ExceptionList = local_c;
  return;
}


// ==== 103fac40 FUN_103fac40

void FUN_103fac40(FArray *param_1)

{
  FAnywhereNpcMaker *this;
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103f9ac0(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x18);
      this = (FAnywhereNpcMaker *)(*(int *)in_ECX + iVar1 * 0x18);
      if (this != (FAnywhereNpcMaker *)0x0) {
        FAnywhereNpcMaker::FAnywhereNpcMaker(this,(FAnywhereNpcMaker *)(*(int *)param_1 + iVar3));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103facc0 FUN_103facc0

void FUN_103facc0(int param_1,int param_2)

{
  FArray *in_ECX;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080d611;
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
  iVar1 = param_1 + param_2;
  if (*(int *)(in_ECX + 4) < iVar1) {
    appFailAssert("Index+Count<=ArrayNum",
                  "d:\\work\\interlude\\2007_05_23\\warfare2110\\core\\inc\\UnTemplate.h",0x205);
  }
  if (param_1 < iVar1) {
    iVar1 = iVar1 - param_1;
    do {
      local_4 = 1;
      thunk_FUN_103f2660();
      local_4 = local_4 & 0xffffff00;
      thunk_FUN_103928b0();
      local_4 = 0xffffffff;
      thunk_FUN_103792c0();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FArray::Remove(in_ECX,param_1,param_2,0x74);
  ExceptionList = local_c;
  return;
}


// ==== 103fadf0 FUN_103fadf0

void FUN_103fadf0(int param_1)

{
  void **ppvVar1;
  FArray *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080d651;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (0 < *(int *)(in_ECX + 4)) {
    do {
      local_4 = 1;
      thunk_FUN_103f2660();
      local_4 = local_4 & 0xffffff00;
      thunk_FUN_103928b0();
      local_4 = 0xffffffff;
      thunk_FUN_103792c0();
      iVar2 = iVar2 + 1;
      ppvVar1 = ExceptionList;
    } while (iVar2 < *(int *)(in_ECX + 4));
  }
  ExceptionList = ppvVar1;
  FArray::Empty(in_ECX,0x74,param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103faea0 FUN_103faea0

void FUN_103faea0(UModel *param_1)

{
  if (param_1 != (UModel *)0x0) {
    UModel::UModel(param_1);
    return;
  }
  return;
}


// ==== 103faec0 FUN_103faec0

void FUN_103faec0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080d78c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = USkeletalMesh::vftable;
  local_4 = 0x13;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 0x12;
  thunk_FUN_103989b0();
  local_4._0_1_ = 0x11;
  thunk_FUN_103792c0();
  local_4._0_1_ = 0x10;
  thunk_FUN_103792c0();
  local_4._0_1_ = 0xf;
  thunk_FUN_103998c0();
  local_4._0_1_ = 0xe;
  thunk_FUN_103989b0();
  local_4._0_1_ = 0xd;
  _eh_vector_destructor_iterator_(in_ECX + 0x250,0x2c,4,(_func_void_void_ptr *)&LAB_10310578);
  local_4._0_1_ = 0xc;
  thunk_FUN_10399790();
  local_4._0_1_ = 0xb;
  thunk_FUN_103b1fe0();
  local_4._0_1_ = 10;
  thunk_FUN_1038fad0();
  local_4._0_1_ = 9;
  thunk_FUN_103fa7f0();
  local_4._0_1_ = 8;
  thunk_FUN_10399640();
  local_4._0_1_ = 7;
  thunk_FUN_10369de0();
  local_4._0_1_ = 6;
  thunk_FUN_10369de0();
  local_4._0_1_ = 5;
  thunk_FUN_103b1930();
  local_4._0_1_ = 4;
  thunk_FUN_103994b0();
  local_4._0_1_ = 3;
  thunk_FUN_10398310();
  local_4._0_1_ = 2;
  thunk_FUN_103b1d40();
  local_4._0_1_ = 1;
  thunk_FUN_10398800();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_1038fce0();
  local_4 = 0xffffffff;
  ULodMesh::~ULodMesh((ULodMesh *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103fb0b0 FUN_103fb0b0

void FUN_103fb0b0(void)

{
  ULodMesh *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080d95f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ULodMesh::ULodMesh(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = USkeletalMesh::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x150));
  local_4._0_1_ = 2;
  thunk_FUN_103986b0(0);
  local_4._0_1_ = 3;
  thunk_FUN_103b1cc0(0);
  local_4._0_1_ = 4;
  thunk_FUN_103981e0(0);
  local_4._0_1_ = 5;
  thunk_FUN_10399390(0);
  local_4._0_1_ = 6;
  thunk_FUN_103b18b0(0);
  local_4._0_1_ = 7;
  thunk_FUN_10369d70(0);
  local_4._0_1_ = 8;
  thunk_FUN_10369d70(0);
  local_4._0_1_ = 9;
  FArray::FArray((FArray *)(in_ECX + 0x208));
  local_4._0_1_ = 0xb;
  FArray::FArray((FArray *)(in_ECX + 0x218));
  local_4._0_1_ = 0xd;
  FArray::FArray((FArray *)(in_ECX + 0x224));
  local_4._0_1_ = 0xf;
  FArray::FArray((FArray *)(in_ECX + 0x230));
  local_4._0_1_ = 0x11;
  FArray::FArray((FArray *)(in_ECX + 0x23c));
  local_4._0_1_ = 0x13;
  _eh_vector_constructor_iterator_
            (in_ECX + 0x250,0x2c,4,(_func_void_void_ptr *)&LAB_10308710,
             (_func_void_void_ptr *)&LAB_10310578);
  local_4._0_1_ = 0x14;
  FArray::FArray((FArray *)(in_ECX + 0x300));
  local_4._0_1_ = 0x16;
  FArray::FArray((FArray *)(in_ECX + 0x30c));
  local_4._0_1_ = 0x18;
  FArray::FArray((FArray *)(in_ECX + 0x318));
  local_4._0_1_ = 0x1a;
  FArray::FArray((FArray *)(in_ECX + 0x324));
  local_4 = CONCAT31(local_4._1_3_,0x1c);
  FArray::FArray((FArray *)(in_ECX + 0x330));
  *(undefined4 *)(in_ECX + 0x248) = 0;
  *(undefined4 *)(in_ECX + 0x148) = 0;
  *(undefined4 *)(in_ECX + 0x15c) = 0;
  ExceptionList = local_c;
  return;
}


// ==== 103fb310 FUN_103fb310

void FUN_103fb310(ULodMesh *param_1)

{
  ULodMesh *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080dad4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ULodMesh::ULodMesh(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = USkeletalMesh::vftable;
  *(undefined4 *)(in_ECX + 0x148) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(in_ECX + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  thunk_FUN_10379830(param_1 + 0x150);
  local_4._0_1_ = 1;
  *(undefined4 *)(in_ECX + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  thunk_FUN_103ac7d0(param_1 + 0x160);
  local_4._0_1_ = 2;
  thunk_FUN_103ac860(param_1 + 0x178);
  local_4._0_1_ = 3;
  thunk_FUN_103acb60(param_1 + 400);
  local_4._0_1_ = 4;
  thunk_FUN_103acbf0(param_1 + 0x1a8);
  local_4._0_1_ = 5;
  thunk_FUN_103acc80(param_1 + 0x1c0);
  local_4._0_1_ = 6;
  thunk_FUN_103638d0(param_1 + 0x1d8);
  local_4._0_1_ = 7;
  thunk_FUN_103638d0(param_1 + 0x1f0);
  local_4._0_1_ = 8;
  thunk_FUN_10380050(param_1 + 0x208);
  local_4._0_1_ = 9;
  *(undefined4 *)(in_ECX + 0x214) = *(undefined4 *)(param_1 + 0x214);
  thunk_FUN_103f6e10(param_1 + 0x218);
  local_4._0_1_ = 10;
  thunk_FUN_103794b0(param_1 + 0x224);
  local_4._0_1_ = 0xb;
  thunk_FUN_10380140(param_1 + 0x230);
  local_4._0_1_ = 0xc;
  thunk_FUN_10380250(param_1 + 0x23c);
  local_4._0_1_ = 0xd;
  *(undefined4 *)(in_ECX + 0x248) = *(undefined4 *)(param_1 + 0x248);
  *(undefined4 *)(in_ECX + 0x24c) = *(undefined4 *)(param_1 + 0x24c);
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x250,param_1 + 0x250,0x2c,4,(_func_void_void_ptr_void_ptr *)&LAB_1030c2cf,
             (_func_void_void_ptr *)&LAB_10310578);
  thunk_FUN_1037f940(param_1 + 0x300);
  local_4._0_1_ = 0xe;
  thunk_FUN_10380300(param_1 + 0x30c);
  local_4._0_1_ = 0xf;
  thunk_FUN_10379230(param_1 + 0x318);
  local_4._0_1_ = 0x10;
  thunk_FUN_10379230(param_1 + 0x324);
  local_4 = CONCAT31(local_4._1_3_,0x11);
  thunk_FUN_1037f940(param_1 + 0x330);
  ExceptionList = local_c;
  return;
}


// ==== 103fb600 FUN_103fb600

void FUN_103fb600(ULodMesh *param_1)

{
  ULodMesh *pUVar1;
  TArray<unsigned_short> *pTVar2;
  int iVar3;
  ULodMesh *in_ECX;
  ULodMesh *pUVar4;
  ULodMesh *pUVar5;
  
  pUVar1 = param_1;
  ULodMesh::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x148) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(in_ECX + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  thunk_FUN_10379900(param_1 + 0x150);
  *(undefined4 *)(in_ECX + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  if (param_1 == (ULodMesh *)0xfffffea0) {
    pUVar5 = (ULodMesh *)0x0;
  }
  else {
    pUVar5 = param_1 + 0x16c;
  }
  thunk_FUN_103795a0(pUVar5);
  *(undefined4 *)(in_ECX + 0x164) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(in_ECX + 0x168) = *(undefined4 *)(param_1 + 0x168);
  if (param_1 == (ULodMesh *)0xfffffe88) {
    pUVar5 = (ULodMesh *)0x0;
  }
  else {
    pUVar5 = param_1 + 0x184;
  }
  thunk_FUN_10399320(pUVar5);
  *(undefined4 *)(in_ECX + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(in_ECX + 0x180) = *(undefined4 *)(param_1 + 0x180);
  if (param_1 == (ULodMesh *)0xfffffe70) {
    pUVar5 = (ULodMesh *)0x0;
  }
  else {
    pUVar5 = param_1 + 0x19c;
  }
  thunk_FUN_103978b0(pUVar5);
  *(undefined4 *)(in_ECX + 0x194) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(in_ECX + 0x198) = *(undefined4 *)(param_1 + 0x198);
  if (param_1 == (ULodMesh *)0xfffffe58) {
    pUVar5 = (ULodMesh *)0x0;
  }
  else {
    pUVar5 = param_1 + 0x1b4;
  }
  thunk_FUN_10397ea0(pUVar5);
  *(undefined4 *)(in_ECX + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(in_ECX + 0x1b0) = *(undefined4 *)(param_1 + 0x1b0);
  if (param_1 == (ULodMesh *)0xfffffe40) {
    pUVar5 = (ULodMesh *)0x0;
  }
  else {
    pUVar5 = param_1 + 0x1cc;
  }
  thunk_FUN_10398170(pUVar5);
  *(undefined4 *)(in_ECX + 0x1c4) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(in_ECX + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
  if (param_1 == (ULodMesh *)0xfffffe28) {
    pTVar2 = (TArray<unsigned_short> *)0x0;
  }
  else {
    pTVar2 = (TArray<unsigned_short> *)(param_1 + 0x1e4);
  }
  TArray<unsigned_short>::operator=((TArray<unsigned_short> *)(in_ECX + 0x1e4),pTVar2);
  *(undefined4 *)(in_ECX + 0x1dc) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(in_ECX + 0x1e0) = *(undefined4 *)(param_1 + 0x1e0);
  if (param_1 == (ULodMesh *)0xfffffe10) {
    pTVar2 = (TArray<unsigned_short> *)0x0;
  }
  else {
    pTVar2 = (TArray<unsigned_short> *)(param_1 + 0x1fc);
  }
  TArray<unsigned_short>::operator=((TArray<unsigned_short> *)(in_ECX + 0x1fc),pTVar2);
  *(undefined4 *)(in_ECX + 500) = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(in_ECX + 0x1f8) = *(undefined4 *)(param_1 + 0x1f8);
  thunk_FUN_10399700(param_1 + 0x208);
  *(undefined4 *)(in_ECX + 0x214) = *(undefined4 *)(param_1 + 0x214);
  thunk_FUN_103fa860(param_1 + 0x218);
  thunk_FUN_103795a0(param_1 + 0x224);
  thunk_FUN_103b2050(param_1 + 0x230);
  thunk_FUN_10399850(param_1 + 0x23c);
  *(undefined4 *)(in_ECX + 0x248) = *(undefined4 *)(param_1 + 0x248);
  iVar3 = (int)param_1 - (int)in_ECX;
  *(undefined4 *)(in_ECX + 0x24c) = *(undefined4 *)(param_1 + 0x24c);
  pUVar5 = param_1 + 0x26c;
  pUVar4 = in_ECX + 600;
  param_1 = (ULodMesh *)0x4;
  do {
    *(undefined4 *)(pUVar4 + -8) = *(undefined4 *)(pUVar5 + -0x1c);
    *(undefined4 *)pUVar4 = *(undefined4 *)(pUVar4 + iVar3);
    *(undefined4 *)(pUVar4 + 4) = *(undefined4 *)(pUVar4 + iVar3 + 4);
    TArray<unsigned_short>::operator=
              ((TArray<unsigned_short> *)(pUVar4 + 8),(TArray<unsigned_short> *)(pUVar5 + -0xc));
    *(undefined4 *)(pUVar4 + 0x14) = *(undefined4 *)pUVar5;
    thunk_FUN_103f9270(pUVar5 + 4);
    pUVar5 = pUVar5 + 0x2c;
    pUVar4 = pUVar4 + 0x2c;
    param_1 = (ULodMesh *)((int)param_1 + -1);
  } while (param_1 != (ULodMesh *)0x0);
  thunk_FUN_10398a70(pUVar1 + 0x300);
  thunk_FUN_10399980(pUVar1 + 0x30c);
  thunk_FUN_10379380(pUVar1 + 0x318);
  thunk_FUN_10379380(pUVar1 + 0x324);
  thunk_FUN_10398a70(pUVar1 + 0x330);
  return;
}


// ==== 103fb990 FUN_103fb990

void FUN_103fb990(byte param_1)

{
  USkeletalMesh *in_ECX;
  
  USkeletalMesh::~USkeletalMesh(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x33c);
  }
  return;
}


// ==== 103fb9c0 FUN_103fb9c0

USkeletalMesh * FUN_103fb9c0(byte param_1)

{
  USkeletalMesh *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x33c,*(int *)(in_ECX + -4),USkeletalMesh::~USkeletalMesh);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  USkeletalMesh::~USkeletalMesh(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x33c);
  }
  return in_ECX;
}


// ==== 103fba40 FUN_103fba40

void FUN_103fba40(int param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080db43;
  local_c = ExceptionList;
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0x1c;
  }
  ExceptionList = &local_c;
  thunk_FUN_103f6ee0(iVar1);
  local_4 = 0;
  thunk_FUN_103ad220(param_1);
  *in_ECX = TRoughArray<MotionChunk>::vftable;
  ExceptionList = local_c;
  return;
}


// ==== 103fbad0 FUN_103fbad0

FArchive * FUN_103fbad0(FArchive *param_1,void *param_2)

{
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 4),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 8),4);
  FArchive::ByteOrderSerialize(param_1,(void *)((int)param_2 + 0xc),4);
  return param_1;
}


// ==== 103fbb70 FUN_103fbb70

FArchive * FUN_103fbb70(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  FQuat *this;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080db60;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x10);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
      thunk_FUN_103fbad0(param_1,iVar1 * 0x10 + *(int *)param_2);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    for (iVar1 = 0; iVar1 < *(int *)(param_2 + 4); iVar1 = iVar1 + 1) {
    }
    FArray::Empty(param_2,0x10,local_18);
    while (iVar3 < local_18) {
      this = (FQuat *)thunk_FUN_10371950(0x10,param_2);
      if (this == (FQuat *)0x0) {
        thunk_FUN_103fbad0(param_1,0);
        iVar3 = iVar3 + 1;
      }
      else {
        uVar2 = FQuat::FQuat(this);
        thunk_FUN_103fbad0(param_1,uVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 103fbc63 Catch@103fbc63

void Catch_103fbc63(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x28);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 103fbc77 Catch@103fbc77

void Catch_103fbc77(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103fbce0 FUN_103fbce0

void FUN_103fbce0(FArchive *param_1,void *param_2)

{
  undefined4 uVar1;
  
  FArchive::ByteOrderSerialize(param_1,param_2,4);
  uVar1 = thunk_FUN_103fbb70(param_1,(int)param_2 + 4,(int)param_2 + 0x10,(int)param_2 + 0x1c);
  uVar1 = thunk_FUN_1038fb90(uVar1);
  thunk_FUN_1038fda0(uVar1);
  return;
}


// ==== 103fbd30 FUN_103fbd30

FArchive * FUN_103fbd30(FArchive *param_1,FArray *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080db70;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  iVar3 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FArray::CountBytes(param_2,param_1,0x28);
  iVar1 = FArchive::IsLoading(param_1);
  if (iVar1 == 0) {
    operator<<(param_1,(FCompactIndex *)(param_2 + 4));
    for (; iVar3 < *(int *)(param_2 + 4); iVar3 = iVar3 + 1) {
      thunk_FUN_103fbce0(param_1,*(int *)param_2 + iVar3 * 0x28);
    }
  }
  else {
    operator<<(param_1,(FCompactIndex *)&local_18);
    thunk_FUN_103ee730(local_18);
    while (iVar3 < local_18) {
      iVar1 = thunk_FUN_10371970(0x28,param_2);
      if (iVar1 == 0) {
        thunk_FUN_103fbce0(param_1,0);
        iVar3 = iVar3 + 1;
      }
      else {
        uVar2 = thunk_FUN_103ad120();
        thunk_FUN_103fbce0(param_1,uVar2);
        iVar3 = iVar3 + 1;
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// ==== 103fbe0a Catch@103fbe0a

void Catch_103fbe0a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x24);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x20,&DAT_10914c48);
}


// ==== 103fbe1e Catch@103fbe1e

void Catch_103fbe1e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TArray<<");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103fbe80 FUN_103fbe80

void FUN_103fbe80(FArchive *param_1,int param_2)

{
  undefined4 uVar1;
  FArchive *this;
  
  FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 4),4);
  FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 8),4);
  FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 0xc),4);
  FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 0x10),4);
  FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 0x14),4);
  FArchive::ByteOrderSerialize(param_1,(void *)(param_2 + 0x18),4);
  uVar1 = thunk_FUN_1038f880(param_1,param_2 + 0x1c,param_2 + 0x28);
  this = (FArchive *)thunk_FUN_103fbd30(uVar1);
  FArchive::ByteOrderSerialize(this,(void *)(param_2 + 0x34),4);
  uVar1 = thunk_FUN_103fbb70(this,param_2 + 0x38,param_2 + 0x44,param_2 + 0x50);
  uVar1 = thunk_FUN_1038fb90(uVar1);
  thunk_FUN_1038fda0(uVar1);
  return;
}


// ==== 103fbf70 FUN_103fbf70

void FUN_103fbf70(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080db80;
  local_10 = ExceptionList;
  local_8 = 0;
  if (0 < *(int *)(*(int *)(in_ECX + 0x10) + param_1 * 4)) {
    ExceptionList = &local_10;
    uVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 4) + param_1 * 4) + 0x28))();
    (**(code **)(**(int **)(*(int *)(in_ECX + 4) + param_1 * 4) + 0x3c))
              (*(undefined4 *)(*(int *)(in_ECX + 0x10) + param_1 * 4));
    iVar3 = thunk_FUN_10371c70(0x5c,in_ECX + 0x1c);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = thunk_FUN_103f50c0();
    }
    thunk_FUN_103fbe80(*(undefined4 *)(*(int *)(in_ECX + 4) + param_1 * 4),uVar4);
    piVar1 = (int *)(*(int *)(in_ECX + 0x10) + param_1 * 4);
    *piVar1 = -*piVar1;
    (**(code **)(**(int **)(*(int *)(in_ECX + 4) + param_1 * 4) + 0x3c))(uVar2);
  }
  ExceptionList = local_10;
  return;
}


// ==== 103fc02a Catch@103fc02a

void Catch_103fc02a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 103fc03e Catch@103fc03e

void Catch_103fc03e(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TRoughArray::Load");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103fc0a0 FUN_103fc0a0

void FUN_103fc0a0(int param_1)

{
  int *piVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080db90;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(*(int *)(in_ECX + 0x10) + param_1 * 4) < 0) {
    ExceptionList = &local_10;
    thunk_FUN_103f9730(0);
    piVar1 = (int *)(*(int *)(in_ECX + 0x10) + param_1 * 4);
    *piVar1 = -*piVar1;
  }
  ExceptionList = local_10;
  return;
}


// ==== 103fc106 Catch@103fc106

void Catch_103fc106(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 103fc11a Catch@103fc11a

void Catch_103fc11a(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TRoughArray::Unload");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103fc1b0 FUN_103fc1b0

void FUN_103fc1b0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080dcc0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = ATerrainInfo::vftable;
  local_4 = 0x13;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 0x12;
  thunk_FUN_103eebf0();
  local_4._0_1_ = 0x11;
  thunk_FUN_10379700();
  local_4._0_1_ = 0x10;
  thunk_FUN_10379700();
  local_4._0_1_ = 0xf;
  thunk_FUN_1039a4c0();
  local_4._0_1_ = 0xe;
  TArray<unsigned_short>::~TArray<unsigned_short>((TArray<unsigned_short> *)(in_ECX + 0x21f4));
  local_4._0_1_ = 0xd;
  thunk_FUN_10391680();
  local_4._0_1_ = 0xc;
  thunk_FUN_10391680();
  local_4._0_1_ = 0xb;
  thunk_FUN_1039a980();
  local_4._0_1_ = 10;
  thunk_FUN_103eeb00();
  local_4._0_1_ = 9;
  thunk_FUN_10326910();
  local_4._0_1_ = 8;
  thunk_FUN_10379700();
  local_4._0_1_ = 7;
  thunk_FUN_10379700();
  local_4._0_1_ = 6;
  thunk_FUN_1039a760();
  local_4._0_1_ = 5;
  thunk_FUN_1039a5f0();
  local_4._0_1_ = 4;
  thunk_FUN_1038fad0();
  local_4._0_1_ = 3;
  thunk_FUN_1039a4c0();
  local_4._0_1_ = 2;
  thunk_FUN_103fa9e0();
  local_4._0_1_ = 1;
  thunk_FUN_1039a370();
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x3d0,0xe8,0x20,(_func_void_void_ptr *)&LAB_10308fee);
  local_4 = 0xffffffff;
  AInfo::~AInfo((AInfo *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103fc3b0 FUN_103fc3b0

void FUN_103fc3b0(AInfo *param_1)

{
  AInfo *in_ECX;
  int iVar1;
  AInfo *pAVar2;
  AInfo *pAVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080de25;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AInfo::AInfo(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = ATerrainInfo::vftable;
  *(undefined4 *)(in_ECX + 0x3bc) = *(undefined4 *)(param_1 + 0x3bc);
  *(undefined4 *)(in_ECX + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)(in_ECX + 0x3c4) = *(undefined4 *)(param_1 + 0x3c4);
  *(undefined4 *)(in_ECX + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)(in_ECX + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  _memcpy(in_ECX + 0x3d0,param_1 + 0x3d0,0x1d00);
  thunk_FUN_103807d0(param_1 + 0x20d0);
  local_4._0_1_ = 1;
  *(undefined4 *)(in_ECX + 0x20dc) = *(undefined4 *)(param_1 + 0x20dc);
  *(uint *)(in_ECX + 0x20e0) =
       *(uint *)(in_ECX + 0x20e0) ^ (*(uint *)(in_ECX + 0x20e0) ^ *(uint *)(param_1 + 0x20e0)) & 1;
  *(uint *)(in_ECX + 0x20e0) =
       (*(uint *)(param_1 + 0x20e0) ^ *(uint *)(in_ECX + 0x20e0)) & 2 ^ *(uint *)(in_ECX + 0x20e0);
  *(undefined4 *)(in_ECX + 0x20e4) = *(undefined4 *)(param_1 + 0x20e4);
  thunk_FUN_103f93b0(param_1 + 0x20e8);
  local_4._0_1_ = 2;
  thunk_FUN_103808c0(param_1 + 0x20f4);
  local_4._0_1_ = 3;
  thunk_FUN_103794b0(param_1 + 0x2100);
  local_4._0_1_ = 4;
  *(undefined4 *)(in_ECX + 0x210c) = *(undefined4 *)(param_1 + 0x210c);
  *(undefined4 *)(in_ECX + 0x2110) = *(undefined4 *)(param_1 + 0x2110);
  *(undefined4 *)(in_ECX + 0x2114) = *(undefined4 *)(param_1 + 0x2114);
  *(undefined4 *)(in_ECX + 0x2118) = *(undefined4 *)(param_1 + 0x2118);
  *(undefined4 *)(in_ECX + 0x211c) = *(undefined4 *)(param_1 + 0x211c);
  thunk_FUN_10380970(param_1 + 0x2120);
  local_4._0_1_ = 5;
  pAVar2 = param_1 + 0x212c;
  pAVar3 = in_ECX + 0x212c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar3 = *(undefined4 *)pAVar2;
    pAVar2 = pAVar2 + 4;
    pAVar3 = pAVar3 + 4;
  }
  pAVar2 = param_1 + 0x215c;
  pAVar3 = in_ECX + 0x215c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar3 = *(undefined4 *)pAVar2;
    pAVar2 = pAVar2 + 4;
    pAVar3 = pAVar3 + 4;
  }
  thunk_FUN_10380a50(param_1 + 0x218c);
  local_4._0_1_ = 6;
  *(undefined4 *)(in_ECX + 0x2198) = *(undefined4 *)(param_1 + 0x2198);
  thunk_FUN_10379670(param_1 + 0x219c);
  local_4._0_1_ = 7;
  thunk_FUN_10379670(param_1 + 0x21a8);
  local_4._0_1_ = 8;
  thunk_FUN_1037bb60(param_1 + 0x21b4);
  local_4._0_1_ = 9;
  thunk_FUN_1039a8c0(param_1 + 0x21c0);
  local_4._0_1_ = 10;
  thunk_FUN_103b23b0(param_1 + 0x21cc);
  local_4._0_1_ = 0xb;
  thunk_FUN_1037a420(param_1 + 0x21d8);
  local_4._0_1_ = 0xc;
  thunk_FUN_1037a420(param_1 + 0x21e4);
  local_4._0_1_ = 0xd;
  *(undefined4 *)(in_ECX + 0x21f0) = *(undefined4 *)(param_1 + 0x21f0);
  TArray<unsigned_short>::TArray<unsigned_short>
            ((TArray<unsigned_short> *)(in_ECX + 0x21f4),
             (TArray<unsigned_short> *)(param_1 + 0x21f4));
  local_4._0_1_ = 0xe;
  *(undefined4 *)(in_ECX + 0x2200) = *(undefined4 *)(param_1 + 0x2200);
  *(undefined4 *)(in_ECX + 0x2204) = *(undefined4 *)(param_1 + 0x2204);
  *(undefined4 *)(in_ECX + 0x2208) = *(undefined4 *)(param_1 + 0x2208);
  *(undefined4 *)(in_ECX + 0x220c) = *(undefined4 *)(param_1 + 0x220c);
  *(undefined4 *)(in_ECX + 0x2210) = *(undefined4 *)(param_1 + 0x2210);
  *(undefined4 *)(in_ECX + 0x2214) = *(undefined4 *)(param_1 + 0x2214);
  *(undefined4 *)(in_ECX + 0x2218) = *(undefined4 *)(param_1 + 0x2218);
  *(undefined4 *)(in_ECX + 0x221c) = *(undefined4 *)(param_1 + 0x221c);
  thunk_FUN_103808c0(param_1 + 0x2220);
  local_4._0_1_ = 0xf;
  pAVar2 = param_1 + 0x222c;
  pAVar3 = in_ECX + 0x222c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar3 = *(undefined4 *)pAVar2;
    pAVar2 = pAVar2 + 4;
    pAVar3 = pAVar3 + 4;
  }
  thunk_FUN_10379670(param_1 + 0x225c);
  local_4._0_1_ = 0x10;
  thunk_FUN_10379670(param_1 + 0x2268);
  local_4 = CONCAT31(local_4._1_3_,0x11);
  *(undefined4 *)(in_ECX + 0x2274) = *(undefined4 *)(param_1 + 0x2274);
  *(undefined4 *)(in_ECX + 0x2278) = *(undefined4 *)(param_1 + 0x2278);
  *(undefined4 *)(in_ECX + 0x227c) = *(undefined4 *)(param_1 + 0x227c);
  *(undefined4 *)(in_ECX + 0x2280) = *(undefined4 *)(param_1 + 0x2280);
  *(undefined4 *)(in_ECX + 0x2284) = *(undefined4 *)(param_1 + 0x2284);
  thunk_FUN_1039a9f0(param_1 + 0x2288);
  *(undefined4 *)(in_ECX + 0x2294) = *(undefined4 *)(param_1 + 0x2294);
  ExceptionList = local_c;
  return;
}


// ==== 103fc870 FUN_103fc870

void FUN_103fc870(AActor *param_1)

{
  AActor *pAVar1;
  AActor *pAVar2;
  AActor *in_ECX;
  int iVar3;
  int iVar4;
  AActor *pAVar5;
  AActor *pAVar6;
  
  pAVar1 = param_1;
  AActor::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x3bc) = *(undefined4 *)(param_1 + 0x3bc);
  *(undefined4 *)(in_ECX + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)(in_ECX + 0x3c4) = *(undefined4 *)(param_1 + 0x3c4);
  *(undefined4 *)(in_ECX + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)(in_ECX + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  iVar4 = (int)param_1 - (int)in_ECX;
  param_1 = (AActor *)0x20;
  pAVar2 = in_ECX + 0x3d0;
  do {
    param_1 = (AActor *)((int)param_1 + -1);
    pAVar5 = pAVar2 + iVar4;
    pAVar6 = pAVar2;
    for (iVar3 = 0x3a; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pAVar6 = *(undefined4 *)pAVar5;
      pAVar5 = pAVar5 + 4;
      pAVar6 = pAVar6 + 4;
    }
    pAVar2 = pAVar2 + 0xe8;
  } while (param_1 != (AActor *)0x0);
  thunk_FUN_1039a430(pAVar1 + 0x20d0);
  *(undefined4 *)(in_ECX + 0x20dc) = *(undefined4 *)(pAVar1 + 0x20dc);
  *(uint *)(in_ECX + 0x20e0) =
       *(uint *)(in_ECX + 0x20e0) ^ (*(uint *)(in_ECX + 0x20e0) ^ *(uint *)(pAVar1 + 0x20e0)) & 1;
  *(uint *)(in_ECX + 0x20e0) =
       (*(uint *)(pAVar1 + 0x20e0) ^ *(uint *)(in_ECX + 0x20e0)) & 2 ^ *(uint *)(in_ECX + 0x20e0);
  *(undefined4 *)(in_ECX + 0x20e4) = *(undefined4 *)(pAVar1 + 0x20e4);
  thunk_FUN_103faa50(pAVar1 + 0x20e8);
  thunk_FUN_1039a580(pAVar1 + 0x20f4);
  thunk_FUN_103795a0(pAVar1 + 0x2100);
  *(undefined4 *)(in_ECX + 0x210c) = *(undefined4 *)(pAVar1 + 0x210c);
  *(undefined4 *)(in_ECX + 0x2110) = *(undefined4 *)(pAVar1 + 0x2110);
  *(undefined4 *)(in_ECX + 0x2114) = *(undefined4 *)(pAVar1 + 0x2114);
  *(undefined4 *)(in_ECX + 0x2118) = *(undefined4 *)(pAVar1 + 0x2118);
  *(undefined4 *)(in_ECX + 0x211c) = *(undefined4 *)(pAVar1 + 0x211c);
  thunk_FUN_1039a6b0(pAVar1 + 0x2120);
  pAVar2 = pAVar1 + 0x212c;
  pAVar5 = in_ECX + 0x212c;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pAVar5 = *(undefined4 *)pAVar2;
    pAVar2 = pAVar2 + 4;
    pAVar5 = pAVar5 + 4;
  }
  pAVar2 = pAVar1 + 0x215c;
  pAVar5 = in_ECX + 0x215c;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pAVar5 = *(undefined4 *)pAVar2;
    pAVar2 = pAVar2 + 4;
    pAVar5 = pAVar5 + 4;
  }
  thunk_FUN_1039a820(pAVar1 + 0x218c);
  *(undefined4 *)(in_ECX + 0x2198) = *(undefined4 *)(pAVar1 + 0x2198);
  thunk_FUN_103797c0(pAVar1 + 0x219c);
  thunk_FUN_103797c0(pAVar1 + 0x21a8);
  thunk_FUN_103932e0(pAVar1 + 0x21b4);
  thunk_FUN_103eeb70(pAVar1 + 0x21c0);
  thunk_FUN_103b2480(pAVar1 + 0x21cc);
  thunk_FUN_10391740(pAVar1 + 0x21d8);
  thunk_FUN_10391740(pAVar1 + 0x21e4);
  *(undefined4 *)(in_ECX + 0x21f0) = *(undefined4 *)(pAVar1 + 0x21f0);
  TArray<unsigned_short>::operator=
            ((TArray<unsigned_short> *)(in_ECX + 0x21f4),(TArray<unsigned_short> *)(pAVar1 + 0x21f4)
            );
  *(undefined4 *)(in_ECX + 0x2200) = *(undefined4 *)(pAVar1 + 0x2200);
  *(undefined4 *)(in_ECX + 0x2204) = *(undefined4 *)(pAVar1 + 0x2204);
  *(undefined4 *)(in_ECX + 0x2208) = *(undefined4 *)(pAVar1 + 0x2208);
  *(undefined4 *)(in_ECX + 0x220c) = *(undefined4 *)(pAVar1 + 0x220c);
  *(undefined4 *)(in_ECX + 0x2210) = *(undefined4 *)(pAVar1 + 0x2210);
  *(undefined4 *)(in_ECX + 0x2214) = *(undefined4 *)(pAVar1 + 0x2214);
  *(undefined4 *)(in_ECX + 0x2218) = *(undefined4 *)(pAVar1 + 0x2218);
  *(undefined4 *)(in_ECX + 0x221c) = *(undefined4 *)(pAVar1 + 0x221c);
  thunk_FUN_1039a580(pAVar1 + 0x2220);
  pAVar2 = pAVar1 + 0x222c;
  pAVar5 = in_ECX + 0x222c;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pAVar5 = *(undefined4 *)pAVar2;
    pAVar2 = pAVar2 + 4;
    pAVar5 = pAVar5 + 4;
  }
  thunk_FUN_103797c0(pAVar1 + 0x225c);
  thunk_FUN_103797c0(pAVar1 + 0x2268);
  *(undefined4 *)(in_ECX + 0x2274) = *(undefined4 *)(pAVar1 + 0x2274);
  *(undefined4 *)(in_ECX + 0x2278) = *(undefined4 *)(pAVar1 + 0x2278);
  *(undefined4 *)(in_ECX + 0x227c) = *(undefined4 *)(pAVar1 + 0x227c);
  *(undefined4 *)(in_ECX + 0x2280) = *(undefined4 *)(pAVar1 + 0x2280);
  *(undefined4 *)(in_ECX + 0x2284) = *(undefined4 *)(pAVar1 + 0x2284);
  thunk_FUN_103eec60(pAVar1 + 0x2288);
  *(undefined4 *)(in_ECX + 0x2294) = *(undefined4 *)(pAVar1 + 0x2294);
  return;
}


// ==== 103fcc90 FUN_103fcc90

void FUN_103fcc90(byte param_1)

{
  ATerrainInfo *in_ECX;
  
  ATerrainInfo::~ATerrainInfo(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2298);
  }
  return;
}


// ==== 103fccc0 FUN_103fccc0

ATerrainInfo * FUN_103fccc0(byte param_1)

{
  ATerrainInfo *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x2298,*(int *)(in_ECX + -4),ATerrainInfo::~ATerrainInfo)
    ;
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  ATerrainInfo::~ATerrainInfo(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x2298);
  }
  return in_ECX;
}


// ==== 103fcd60 FUN_103fcd60

void FUN_103fcd60(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080de89;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103fab00(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103fcdd0 FUN_103fcdd0

void FUN_103fcdd0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1080deee;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = TRoughArray<MotionChunk>::vftable;
  local_8 = 2;
  for (iVar2 = 0; iVar2 < (int)in_ECX[2]; iVar2 = iVar2 + 1) {
    piVar1 = (int *)(in_ECX[1] + iVar2 * 4);
    if (*piVar1 != 0) {
      (**(code **)(*(int *)*piVar1 + 0x4c))();
    }
  }
  local_8 = 4;
  thunk_FUN_10325f90();
  local_8 = local_8 & 0xffffff00;
  thunk_FUN_1038f7c0();
  local_8 = 6;
  thunk_FUN_103f95a0(0,in_ECX[8]);
  local_8 = 0xffffffff;
  FArray::~FArray((FArray *)(in_ECX + 7));
  ExceptionList = local_10;
  return;
}


// ==== 103fce84 Catch@103fce84

void Catch_103fce84(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 103fce98 Catch@103fce98

void Catch_103fce98(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"TRoughArray::~TRoughArray");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 103fcef0 FUN_103fcef0

void FUN_103fcef0(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080df19;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_103facc0(0,*(undefined4 *)(in_ECX + 4));
  local_4 = 0xffffffff;
  FArray::~FArray(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103fcf60 FUN_103fcf60

void FUN_103fcf60(FArray *param_1)

{
  int iVar1;
  FArray *in_ECX;
  int iVar2;
  int iVar3;
  
  if (in_ECX == param_1) {
    return;
  }
  thunk_FUN_103fadf0(*(int *)(param_1 + 4));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = FArray::Add(in_ECX,1,0x74);
      if (iVar1 * 0x74 + *(int *)in_ECX != 0) {
        thunk_FUN_103f7180(*(int *)param_1 + iVar3);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x74;
    } while (iVar2 < *(int *)(param_1 + 4));
    return;
  }
  return;
}


// ==== 103fcfe0 FUN_103fcfe0

void FUN_103fcfe0(AActor *param_1)

{
  AActor *pAVar1;
  AActor *in_ECX;
  int iVar2;
  int iVar3;
  
  AActor::operator=(in_ECX,param_1);
  FStringNoInit::operator=((FStringNoInit *)(in_ECX + 0x3bc),(FStringNoInit *)(param_1 + 0x3bc));
  *(undefined4 *)(in_ECX + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)(in_ECX + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  pAVar1 = in_ECX + 0x3d0;
  iVar2 = (int)param_1 - (int)in_ECX;
  iVar3 = 0x40;
  do {
    *(undefined4 *)pAVar1 = *(undefined4 *)(pAVar1 + iVar2);
    *(undefined4 *)(pAVar1 + 4) = *(undefined4 *)(pAVar1 + iVar2 + 4);
    *(undefined4 *)(pAVar1 + 8) = *(undefined4 *)(pAVar1 + iVar2 + 8);
    pAVar1 = pAVar1 + 0xc;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(in_ECX + 0x6d0) = *(undefined4 *)(param_1 + 0x6d0);
  thunk_FUN_103fac40(param_1 + 0x6d4);
  return;
}


// ==== 103fd0a0 FUN_103fd0a0

void FUN_103fd0a0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080df38;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  thunk_FUN_103fcd60();
  ExceptionList = local_c;
  return;
}


// ==== 103fd0f0 FUN_103fd0f0

void FUN_103fd0f0(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080df58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_103f9140(param_1);
  ExceptionList = local_c;
  return;
}


// ==== 103fd150 FUN_103fd150

void FUN_103fd150(USkeletalMesh *param_1)

{
  if (param_1 != (USkeletalMesh *)0x0) {
    USkeletalMesh::USkeletalMesh(param_1);
    return;
  }
  return;
}


// ==== 103fd170 FUN_103fd170

void FUN_103fd170(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080df9a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UMeshAnimation::vftable;
  local_4 = 3;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 2;
  thunk_FUN_103fcef0();
  local_4._0_1_ = 1;
  thunk_FUN_103fcdd0();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10399c60();
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103fd210 FUN_103fd210

void FUN_103fd210(UObject *param_1)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080dfea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UMeshAnimation::vftable;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  thunk_FUN_103803d0(param_1 + 0x38);
  local_4._0_1_ = 1;
  thunk_FUN_103fba40(param_1 + 0x44);
  local_4 = CONCAT31(local_4._1_3_,2);
  thunk_FUN_103f92f0(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  ExceptionList = local_c;
  return;
}


// ==== 103fd2d0 FUN_103fd2d0

void FUN_103fd2d0(UObject *param_1)

{
  UObject *pUVar1;
  UObject *in_ECX;
  
  UObject::operator=(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  thunk_FUN_10399d20(param_1 + 0x38);
  if (param_1 == (UObject *)0xffffffbc) {
    pUVar1 = (UObject *)0x0;
  }
  else {
    pUVar1 = param_1 + 0x60;
  }
  thunk_FUN_103fa960(pUVar1);
  thunk_FUN_10378d30(param_1 + 0x48);
  thunk_FUN_1032bcd0(param_1 + 0x54);
  thunk_FUN_103fcf60(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  return;
}


// ==== 103fd360 FUN_103fd360

void FUN_103fd360(byte param_1)

{
  UMeshAnimation *in_ECX;
  
  UMeshAnimation::~UMeshAnimation(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return;
}


// ==== 103fd390 FUN_103fd390

UMeshAnimation * FUN_103fd390(byte param_1)

{
  UMeshAnimation *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x7c,*(int *)(in_ECX + -4),UMeshAnimation::~UMeshAnimation);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UMeshAnimation::~UMeshAnimation(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x7c);
  }
  return in_ECX;
}


// ==== 103fd410 FUN_103fd410

void FUN_103fd410(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080e092;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = UVertMesh::vftable;
  local_4 = 8;
  UObject::ConditionalDestroy(in_ECX);
  local_4._0_1_ = 7;
  _eh_vector_destructor_iterator_(in_ECX + 0x1c4,0x2c,4,(_func_void_void_ptr *)&LAB_10310578);
  local_4._0_1_ = 6;
  FAnimMeshVertexStream::~FAnimMeshVertexStream((FAnimMeshVertexStream *)(in_ECX + 0x198));
  local_4._0_1_ = 5;
  thunk_FUN_10399db0();
  local_4._0_1_ = 4;
  thunk_FUN_103917b0();
  local_4._0_1_ = 3;
  thunk_FUN_103fcef0();
  local_4._0_1_ = 2;
  thunk_FUN_1038fce0();
  local_4._0_1_ = 1;
  thunk_FUN_10399260();
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_10397590();
  local_4 = 0xffffffff;
  ULodMesh::~ULodMesh((ULodMesh *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103fd520 FUN_103fd520

void FUN_103fd520(void)

{
  ULodMesh *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e178;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ULodMesh::ULodMesh(in_ECX);
  local_4 = 0;
  *(undefined ***)in_ECX = UVertMesh::vftable;
  FArray::FArray((FArray *)(in_ECX + 0x148));
  local_4._0_1_ = 2;
  FArray::FArray((FArray *)(in_ECX + 0x154));
  local_4._0_1_ = 4;
  FArray::FArray((FArray *)(in_ECX + 0x160));
  local_4._0_1_ = 6;
  FArray::FArray((FArray *)(in_ECX + 0x16c));
  local_4._0_1_ = 8;
  FArray::FArray((FArray *)(in_ECX + 0x178));
  local_4._0_1_ = 10;
  FArray::FArray((FArray *)(in_ECX + 0x184));
  local_4._0_1_ = 0xc;
  FAnimMeshVertexStream::FAnimMeshVertexStream((FAnimMeshVertexStream *)(in_ECX + 0x198));
  local_4 = CONCAT31(local_4._1_3_,0xd);
  _eh_vector_constructor_iterator_
            (in_ECX + 0x1c4,0x2c,4,(_func_void_void_ptr *)&LAB_10308710,
             (_func_void_void_ptr *)&LAB_10310578);
  ExceptionList = local_c;
  return;
}


// ==== 103fd660 FUN_103fd660

void FUN_103fd660(ULodMesh *param_1)

{
  ULodMesh *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e22a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ULodMesh::ULodMesh(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = UVertMesh::vftable;
  thunk_FUN_1037f250(param_1 + 0x148);
  local_4._0_1_ = 1;
  thunk_FUN_1037feb0(param_1 + 0x154);
  local_4._0_1_ = 2;
  thunk_FUN_10379830(param_1 + 0x160);
  local_4._0_1_ = 3;
  thunk_FUN_103f92f0(param_1 + 0x16c);
  local_4._0_1_ = 4;
  thunk_FUN_1037a500(param_1 + 0x178);
  local_4._0_1_ = 5;
  thunk_FUN_103804a0(param_1 + 0x184);
  local_4._0_1_ = 6;
  *(undefined4 *)(in_ECX + 400) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(in_ECX + 0x194) = *(undefined4 *)(param_1 + 0x194);
  FAnimMeshVertexStream::FAnimMeshVertexStream
            ((FAnimMeshVertexStream *)(in_ECX + 0x198),(FAnimMeshVertexStream *)(param_1 + 0x198));
  local_4 = CONCAT31(local_4._1_3_,7);
  _eh_vector_copy_constructor_iterator_
            (in_ECX + 0x1c4,param_1 + 0x1c4,0x2c,4,(_func_void_void_ptr_void_ptr *)&LAB_1030c2cf,
             (_func_void_void_ptr *)&LAB_10310578);
  ExceptionList = local_c;
  return;
}


// ==== 103fd7e0 FUN_103fd7e0

void FUN_103fd7e0(ULodMesh *param_1)

{
  ULodMesh *in_ECX;
  ULodMesh *pUVar1;
  ULodMesh *pUVar2;
  int iVar3;
  
  ULodMesh::operator=(in_ECX,param_1);
  thunk_FUN_10397650(param_1 + 0x148);
  thunk_FUN_10399320(param_1 + 0x154);
  thunk_FUN_10379900(param_1 + 0x160);
  thunk_FUN_103fcf60(param_1 + 0x16c);
  thunk_FUN_10391870(param_1 + 0x178);
  thunk_FUN_10399e70(param_1 + 0x184);
  *(undefined4 *)(in_ECX + 400) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(in_ECX + 0x194) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(in_ECX + 0x19c) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(in_ECX + 0x1a0) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(in_ECX + 0x1a4) = *(undefined4 *)(param_1 + 0x1a4);
  thunk_FUN_1037f190(param_1 + 0x1a8);
  *(undefined4 *)(in_ECX + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(in_ECX + 0x1b8) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(in_ECX + 0x1bc) = *(undefined4 *)(param_1 + 0x1bc);
  pUVar2 = param_1 + 0x1e0;
  *(undefined4 *)(in_ECX + 0x1c0) = *(undefined4 *)(param_1 + 0x1c0);
  pUVar1 = in_ECX + 0x1cc;
  iVar3 = (int)param_1 - (int)in_ECX;
  param_1 = (ULodMesh *)0x4;
  do {
    *(undefined4 *)(pUVar1 + -8) = *(undefined4 *)(pUVar2 + -0x1c);
    *(undefined4 *)pUVar1 = *(undefined4 *)(pUVar1 + iVar3);
    *(undefined4 *)(pUVar1 + 4) = *(undefined4 *)(pUVar1 + iVar3 + 4);
    TArray<unsigned_short>::operator=
              ((TArray<unsigned_short> *)(pUVar1 + 8),(TArray<unsigned_short> *)(pUVar2 + -0xc));
    *(undefined4 *)(pUVar1 + 0x14) = *(undefined4 *)pUVar2;
    thunk_FUN_103f9270(pUVar2 + 4);
    pUVar2 = pUVar2 + 0x2c;
    pUVar1 = pUVar1 + 0x2c;
    param_1 = (ULodMesh *)((int)param_1 + -1);
  } while (param_1 != (ULodMesh *)0x0);
  return;
}


// ==== 103fd990 FUN_103fd990

void FUN_103fd990(byte param_1)

{
  UVertMesh *in_ECX;
  
  UVertMesh::~UVertMesh(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x274);
  }
  return;
}


// ==== 103fd9c0 FUN_103fd9c0

UVertMesh * FUN_103fd9c0(byte param_1)

{
  UVertMesh *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(in_ECX,0x274,*(int *)(in_ECX + -4),UVertMesh::~UVertMesh);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  UVertMesh::~UVertMesh(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x274);
  }
  return in_ECX;
}


// ==== 103fda40 FUN_103fda40

void FUN_103fda40(void)

{
  FArray *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e271;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FArray::FArray(in_ECX,0);
  ExceptionList = local_c;
  return;
}


// ==== 103fda90 FUN_103fda90

void FUN_103fda90(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1080e2bd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = ATerritoryInfo::vftable;
  local_4 = 2;
  UObject::ConditionalDestroy(in_ECX);
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 1;
  thunk_FUN_103fcd60();
  local_4 = (uint)local_4._1_3_ << 8;
  FStringNoInit::~FStringNoInit((FStringNoInit *)(in_ECX + 0x3bc));
  local_4 = 0xffffffff;
  AInfo::~AInfo((AInfo *)in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103fdb30 FUN_103fdb30

void FUN_103fdb30(void)

{
  AActor *in_ECX;
  int iVar1;
  AActor *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e31e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AActor::AActor(in_ECX);
  *(undefined ***)in_ECX = AInfo::vftable;
  local_4 = 1;
  *(undefined ***)in_ECX = ATerritoryInfo::vftable;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x3bc));
  local_4 = CONCAT31(local_4._1_3_,2);
  this = in_ECX + 0x3d0;
  iVar1 = 0x3f;
  do {
    FVector::FVector((FVector *)this);
    this = this + 0xc;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FArray::FArray((FArray *)(in_ECX + 0x6d4),0);
  ExceptionList = local_c;
  return;
}


// ==== 103fdc00 FUN_103fdc00

void FUN_103fdc00(AInfo *param_1)

{
  AInfo *in_ECX;
  int iVar1;
  AInfo *pAVar2;
  AInfo *pAVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e36d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  AInfo::AInfo(in_ECX,param_1);
  local_4 = 0;
  *(undefined ***)in_ECX = ATerritoryInfo::vftable;
  FStringNoInit::FStringNoInit((FStringNoInit *)(in_ECX + 0x3bc),(FStringNoInit *)(param_1 + 0x3bc))
  ;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)(in_ECX + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)(in_ECX + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  pAVar2 = param_1 + 0x3d0;
  pAVar3 = in_ECX + 0x3d0;
  for (iVar1 = 0xc0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar3 = *(undefined4 *)pAVar2;
    pAVar2 = pAVar2 + 4;
    pAVar3 = pAVar3 + 4;
  }
  *(undefined4 *)(in_ECX + 0x6d0) = *(undefined4 *)(param_1 + 0x6d0);
  thunk_FUN_103f9140(param_1 + 0x6d4);
  ExceptionList = local_c;
  return;
}


// ==== 103fdcf0 FUN_103fdcf0

void FUN_103fdcf0(byte param_1)

{
  ATerritoryInfo *in_ECX;
  
  ATerritoryInfo::~ATerritoryInfo(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x6e0);
  }
  return;
}


// ==== 103fdd20 FUN_103fdd20

ATerritoryInfo * FUN_103fdd20(byte param_1)

{
  ATerritoryInfo *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x6e0,*(int *)(in_ECX + -4),ATerritoryInfo::~ATerritoryInfo);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  ATerritoryInfo::~ATerritoryInfo(in_ECX);
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x6e0);
  }
  return in_ECX;
}


// ==== 103fdda0 FUN_103fdda0

void FUN_103fdda0(UVertMesh *param_1)

{
  if (param_1 != (UVertMesh *)0x0) {
    UVertMesh::UVertMesh(param_1);
    return;
  }
  return;
}


// ==== 103fddc0 FUN_103fddc0

void FUN_103fddc0(ATerritoryInfo *param_1)

{
  if (param_1 != (ATerritoryInfo *)0x0) {
    ATerritoryInfo::ATerritoryInfo(param_1);
    return;
  }
  return;
}


// ==== 103fdde0 FUN_103fdde0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fdde0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1 ^ DAT_10a557b0;
  uVar1 = (*(int *)(&DAT_10a55bf8 + (uVar3 >> 0x10 & 0xff) * 4) + (&DAT_10a557f8)[uVar3 >> 0x18] ^
          *(uint *)(&DAT_10a55ff8 + (uVar3 >> 8 & 0xff) * 4)) +
          *(int *)(&DAT_10a563f8 + (uVar3 & 0xff) * 4) ^ *param_2 ^ DAT_10a557b4;
  uVar3 = uVar3 ^ (*(int *)(&DAT_10a55bf8 + (uVar1 >> 0x10 & 0xff) * 4) +
                   (&DAT_10a557f8)[uVar1 >> 0x18] ^
                  *(uint *)(&DAT_10a55ff8 + (uVar1 >> 8 & 0xff) * 4)) +
                  *(int *)(&DAT_10a563f8 + (uVar1 & 0xff) * 4) ^ _DAT_10a557b8;
  uVar1 = uVar1 ^ (*(int *)(&DAT_10a55bf8 + (uVar3 >> 0x10 & 0xff) * 4) +
                   (&DAT_10a557f8)[uVar3 >> 0x18] ^
                  *(uint *)(&DAT_10a55ff8 + (uVar3 >> 8 & 0xff) * 4)) +
                  *(int *)(&DAT_10a563f8 + (uVar3 & 0xff) * 4) ^ _DAT_10a557bc;
  uVar3 = uVar3 ^ (*(int *)(&DAT_10a55bf8 + (uVar1 >> 0x10 & 0xff) * 4) +
                   (&DAT_10a557f8)[uVar1 >> 0x18] ^
                  *(uint *)(&DAT_10a55ff8 + (uVar1 >> 8 & 0xff) * 4)) +
                  *(int *)(&DAT_10a563f8 + (uVar1 & 0xff) * 4) ^ _DAT_10a557c0;
  uVar1 = uVar1 ^ (*(int *)(&DAT_10a55bf8 + (uVar3 >> 0x10 & 0xff) * 4) +
                   (&DAT_10a557f8)[uVar3 >> 0x18] ^
                  *(uint *)(&DAT_10a55ff8 + (uVar3 >> 8 & 0xff) * 4)) +
                  *(int *)(&DAT_10a563f8 + (uVar3 & 0xff) * 4) ^ _DAT_10a557c4;
  uVar3 = uVar3 ^ (*(int *)(&DAT_10a55bf8 + (uVar1 >> 0x10 & 0xff) * 4) +
                   (&DAT_10a557f8)[uVar1 >> 0x18] ^
                  *(uint *)(&DAT_10a55ff8 + (uVar1 >> 8 & 0xff) * 4)) +
                  *(int *)(&DAT_10a563f8 + (uVar1 & 0xff) * 4) ^ _DAT_10a557c8;
  uVar1 = uVar1 ^ (*(int *)(&DAT_10a55bf8 + (uVar3 >> 0x10 & 0xff) * 4) +
                   (&DAT_10a557f8)[uVar3 >> 0x18] ^
                  *(uint *)(&DAT_10a55ff8 + (uVar3 >> 8 & 0xff) * 4)) +
                  *(int *)(&DAT_10a563f8 + (uVar3 & 0xff) * 4) ^ _DAT_10a557cc;
  uVar3 = uVar3 ^ (*(int *)(&DAT_10a55bf8 + (uVar1 >> 0x10 & 0xff) * 4) +
                   (&DAT_10a557f8)[uVar1 >> 0x18] ^
                  *(uint *)(&DAT_10a55ff8 + (uVar1 >> 8 & 0xff) * 4)) +
                  *(int *)(&DAT_10a563f8 + (uVar1 & 0xff) * 4) ^ _DAT_10a557d0;
  uVar1 = uVar1 ^ (*(int *)(&DAT_10a55bf8 + (uVar3 >> 0x10 & 0xff) * 4) +
                   (&DAT_10a557f8)[uVar3 >> 0x18] ^
                  *(uint *)(&DAT_10a55ff8 + (uVar3 >> 8 & 0xff) * 4)) +
                  *(int *)(&DAT_10a563f8 + (uVar3 & 0xff) * 4) ^ _DAT_10a557d4;
  uVar3 = uVar3 ^ (*(int *)(&DAT_10a55bf8 + (uVar1 >> 0x10 & 0xff) * 4) +
                   (&DAT_10a557f8)[uVar1 >> 0x18] ^
                  *(uint *)(&DAT_10a55ff8 + (uVar1 >> 8 & 0xff) * 4)) +
                  *(int *)(&DAT_10a563f8 + (uVar1 & 0xff) * 4) ^ _DAT_10a557d8;
  uVar1 = uVar1 ^ (*(int *)(&DAT_10a55bf8 + (uVar3 >> 0x10 & 0xff) * 4) +
                   (&DAT_10a557f8)[uVar3 >> 0x18] ^
                  *(uint *)(&DAT_10a55ff8 + (uVar3 >> 8 & 0xff) * 4)) +
                  *(int *)(&DAT_10a563f8 + (uVar3 & 0xff) * 4) ^ _DAT_10a557dc;
  uVar3 = uVar3 ^ (*(int *)(&DAT_10a55bf8 + (uVar1 >> 0x10 & 0xff) * 4) +
                   (&DAT_10a557f8)[uVar1 >> 0x18] ^
                  *(uint *)(&DAT_10a55ff8 + (uVar1 >> 8 & 0xff) * 4)) +
                  *(int *)(&DAT_10a563f8 + (uVar1 & 0xff) * 4) ^ _DAT_10a557e0;
  uVar1 = uVar1 ^ (*(int *)(&DAT_10a55bf8 + (uVar3 >> 0x10 & 0xff) * 4) +
                   (&DAT_10a557f8)[uVar3 >> 0x18] ^
                  *(uint *)(&DAT_10a55ff8 + (uVar3 >> 8 & 0xff) * 4)) +
                  *(int *)(&DAT_10a563f8 + (uVar3 & 0xff) * 4) ^ _DAT_10a557e4;
  uVar3 = uVar3 ^ (*(int *)(&DAT_10a55bf8 + (uVar1 >> 0x10 & 0xff) * 4) +
                   (&DAT_10a557f8)[uVar1 >> 0x18] ^
                  *(uint *)(&DAT_10a55ff8 + (uVar1 >> 8 & 0xff) * 4)) +
                  *(int *)(&DAT_10a563f8 + (uVar1 & 0xff) * 4) ^ _DAT_10a557e8;
  uVar1 = uVar1 ^ (*(int *)(&DAT_10a55bf8 + (uVar3 >> 0x10 & 0xff) * 4) +
                   (&DAT_10a557f8)[uVar3 >> 0x18] ^
                  *(uint *)(&DAT_10a55ff8 + (uVar3 >> 8 & 0xff) * 4)) +
                  *(int *)(&DAT_10a563f8 + (uVar3 & 0xff) * 4) ^ _DAT_10a557ec;
  uVar2 = uVar1 ^ _DAT_10a557f4;
  *param_2 = uVar3 ^ (*(int *)(&DAT_10a55bf8 + (uVar1 >> 0x10 & 0xff) * 4) +
                      (&DAT_10a557f8)[uVar1 >> 0x18] ^
                     *(uint *)(&DAT_10a55ff8 + (uVar1 >> 8 & 0xff) * 4)) +
                     *(int *)(&DAT_10a563f8 + (uVar1 & 0xff) * 4) ^ _DAT_10a557f0;
  *param_1 = uVar2;
  return;
}


// ==== 103fe8a0 FUN_103fe8a0

uint FUN_103fe8a0(int param_1,short param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint local_8;
  int local_4;
  
  iVar5 = (int)param_2;
  uVar1 = 0;
  local_4 = 0x12;
  puVar2 = &DAT_10a557b0;
  do {
    iVar3 = (int)(short)uVar1;
    *puVar2 = *puVar2 ^ CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + param_1),
                                                   *(undefined1 *)((iVar3 + 1) % iVar5 + param_1)),
                                          *(undefined1 *)((iVar3 + 2) % iVar5 + param_1)),
                                 *(undefined1 *)((iVar3 + 3) % iVar5 + param_1));
    local_4 = local_4 + -1;
    uVar1 = (iVar3 + 4) % iVar5 & 0xffff;
    puVar2 = puVar2 + 1;
  } while (local_4 != 0);
  local_8 = 0;
  local_4 = 0;
  piVar4 = &DAT_10a557b4;
  iVar5 = 9;
  do {
    iVar3 = iVar5;
    thunk_FUN_103fdde0(&local_8,&local_4);
    piVar4[-1] = local_8;
    *piVar4 = local_4;
    piVar4 = piVar4 + 2;
    iVar5 = iVar3 + -1;
  } while (iVar5 != 0);
  piVar4 = &DAT_10a557fc;
  iVar3 = iVar3 + 3;
  do {
    iVar5 = 0x80;
    do {
      thunk_FUN_103fdde0(&local_8,&local_4);
      piVar4[-1] = local_8;
      *piVar4 = local_4;
      piVar4 = piVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return local_8 & 0xffff0000;
}


// ==== 103fe9c0 FUN_103fe9c0

void FUN_103fe9c0(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x1000) ^ *param_2;
  uVar2 = (*(int *)(param_1 + 0x400 + (uVar3 >> 0x10 & 0xff) * 4) +
           *(int *)(param_1 + (uVar3 >> 0x18) * 4) ^
          *(uint *)(param_1 + 0x800 + (uVar3 >> 8 & 0xff) * 4)) +
          *(int *)(param_1 + 0xc00 + (uVar3 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1004) ^ *param_3;
  uVar3 = uVar3 ^ (*(int *)(param_1 + 0x400 + (uVar2 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar2 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar2 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar2 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1008);
  uVar2 = uVar2 ^ (*(int *)(param_1 + 0x400 + (uVar3 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar3 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar3 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar3 & 0xff) * 4) ^ *(uint *)(param_1 + 0x100c);
  uVar3 = uVar3 ^ (*(int *)(param_1 + 0x400 + (uVar2 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar2 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar2 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar2 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1010);
  uVar2 = uVar2 ^ (*(int *)(param_1 + 0x400 + (uVar3 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar3 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar3 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar3 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1014);
  uVar3 = uVar3 ^ (*(int *)(param_1 + 0x400 + (uVar2 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar2 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar2 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar2 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1018);
  uVar2 = uVar2 ^ (*(int *)(param_1 + 0x400 + (uVar3 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar3 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar3 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar3 & 0xff) * 4) ^ *(uint *)(param_1 + 0x101c);
  uVar3 = uVar3 ^ (*(int *)(param_1 + 0x400 + (uVar2 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar2 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar2 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar2 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1020);
  uVar2 = uVar2 ^ (*(int *)(param_1 + 0x400 + (uVar3 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar3 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar3 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar3 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1024);
  uVar3 = uVar3 ^ (*(int *)(param_1 + 0x400 + (uVar2 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar2 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar2 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar2 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1028);
  uVar2 = uVar2 ^ (*(int *)(param_1 + 0x400 + (uVar3 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar3 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar3 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar3 & 0xff) * 4) ^ *(uint *)(param_1 + 0x102c);
  uVar3 = uVar3 ^ (*(int *)(param_1 + 0x400 + (uVar2 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar2 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar2 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar2 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1030);
  uVar2 = uVar2 ^ (*(int *)(param_1 + 0x400 + (uVar3 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar3 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar3 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar3 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1034);
  uVar3 = uVar3 ^ (*(int *)(param_1 + 0x400 + (uVar2 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar2 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar2 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar2 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1038);
  uVar2 = uVar2 ^ (*(int *)(param_1 + 0x400 + (uVar3 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar3 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar3 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar3 & 0xff) * 4) ^ *(uint *)(param_1 + 0x103c);
  uVar1 = *(uint *)(param_1 + 0x1044);
  *param_3 = uVar3 ^ (*(int *)(param_1 + 0x400 + (uVar2 >> 0x10 & 0xff) * 4) +
                      *(int *)(param_1 + (uVar2 >> 0x18) * 4) ^
                     *(uint *)(param_1 + 0x800 + (uVar2 >> 8 & 0xff) * 4)) +
                     *(int *)(param_1 + 0xc00 + (uVar2 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1040);
  *param_2 = uVar2 ^ uVar1;
  return;
}


// ==== 103fee90 FUN_103fee90

void FUN_103fee90(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_1 + 0x1044) ^ *param_2;
  uVar6 = (*(int *)(param_1 + 0x400 + (uVar7 >> 0x10 & 0xff) * 4) +
           *(int *)(param_1 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(param_1 + 0x800 + (uVar7 >> 8 & 0xff) * 4)) +
          *(int *)(param_1 + 0xc00 + (uVar7 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1040) ^ *param_3;
  uVar7 = uVar7 ^ (*(int *)(param_1 + 0x400 + (uVar6 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar6 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar6 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar6 & 0xff) * 4) ^ *(uint *)(param_1 + 0x103c);
  uVar6 = uVar6 ^ (*(int *)(param_1 + 0x400 + (uVar7 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar7 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar7 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar7 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1038);
  uVar7 = uVar7 ^ (*(int *)(param_1 + 0x400 + (uVar6 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar6 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar6 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar6 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1034);
  uVar6 = uVar6 ^ (*(int *)(param_1 + 0x400 + (uVar7 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar7 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar7 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar7 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1030);
  uVar7 = uVar7 ^ (*(int *)(param_1 + 0x400 + (uVar6 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar6 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar6 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar6 & 0xff) * 4) ^ *(uint *)(param_1 + 0x102c);
  uVar6 = uVar6 ^ (*(int *)(param_1 + 0x400 + (uVar7 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar7 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar7 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar7 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1028);
  uVar7 = uVar7 ^ (*(int *)(param_1 + 0x400 + (uVar6 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar6 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar6 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar6 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1024);
  uVar6 = uVar6 ^ (*(int *)(param_1 + 0x400 + (uVar7 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar7 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar7 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar7 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1020);
  uVar7 = uVar7 ^ (*(int *)(param_1 + 0x400 + (uVar6 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar6 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar6 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar6 & 0xff) * 4) ^ *(uint *)(param_1 + 0x101c);
  uVar6 = uVar6 ^ (*(int *)(param_1 + 0x400 + (uVar7 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar7 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar7 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar7 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1018);
  uVar7 = uVar7 ^ (*(int *)(param_1 + 0x400 + (uVar6 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar6 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar6 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar6 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1014);
  uVar6 = uVar6 ^ (*(int *)(param_1 + 0x400 + (uVar7 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar7 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar7 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar7 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1010);
  uVar7 = uVar7 ^ (*(int *)(param_1 + 0x400 + (uVar6 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar6 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar6 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar6 & 0xff) * 4) ^ *(uint *)(param_1 + 0x100c);
  uVar6 = uVar6 ^ (*(int *)(param_1 + 0x400 + (uVar7 >> 0x10 & 0xff) * 4) +
                   *(int *)(param_1 + (uVar7 >> 0x18) * 4) ^
                  *(uint *)(param_1 + 0x800 + (uVar7 >> 8 & 0xff) * 4)) +
                  *(int *)(param_1 + 0xc00 + (uVar7 & 0xff) * 4) ^ *(uint *)(param_1 + 0x1008);
  iVar1 = *(int *)(param_1 + 0x400 + (uVar6 >> 0x10 & 0xff) * 4);
  iVar2 = *(int *)(param_1 + (uVar6 >> 0x18) * 4);
  uVar3 = *(uint *)(param_1 + 0x800 + (uVar6 >> 8 & 0xff) * 4);
  iVar4 = *(int *)(param_1 + 0xc00 + (uVar6 & 0xff) * 4);
  uVar5 = *(uint *)(param_1 + 0x1004);
  *param_2 = *(uint *)(param_1 + 0x1000) ^ uVar6;
  *param_3 = uVar7 ^ (iVar1 + iVar2 ^ uVar3) + iVar4 ^ uVar5;
  return;
}


// ==== 103ff360 FUN_103ff360

void FUN_103ff360(undefined4 param_1,int param_2,int param_3)

{
  param_3 = param_3 >> 3;
  if (0 < param_3) {
    do {
      thunk_FUN_103fee90(param_1,param_2,param_2 + 4);
      param_2 = param_2 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


// ==== 103ff3a0 FUN_103ff3a0

void FUN_103ff3a0(undefined4 param_1,int param_2,int param_3)

{
  param_3 = param_3 >> 3;
  if (0 < param_3) {
    do {
      thunk_FUN_103fe9c0(param_1,param_2,param_2 + 4);
      param_2 = param_2 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


// ==== 103ff3e0 FUN_103ff3e0

uint FUN_103ff3e0(uint *param_1,int param_2,short param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint local_8;
  uint local_4;
  
  puVar3 = &DAT_10a54768;
  puVar5 = param_1 + 0x400;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  _memcpy(param_1,&DAT_10a547b0,0x1000);
  iVar2 = (int)param_3;
  uVar1 = 0;
  local_4 = 0x12;
  puVar3 = param_1 + 0x400;
  do {
    iVar4 = (int)(short)uVar1;
    *puVar3 = *puVar3 ^ CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar4 + param_2),
                                                   *(undefined1 *)((iVar4 + 1) % iVar2 + param_2)),
                                          *(undefined1 *)((iVar4 + 2) % iVar2 + param_2)),
                                 *(undefined1 *)((iVar4 + 3) % iVar2 + param_2));
    local_4 = local_4 - 1;
    uVar1 = (iVar4 + 4) % iVar2 & 0xffff;
    puVar3 = puVar3 + 1;
  } while (local_4 != 0);
  local_8 = 0;
  local_4 = 0;
  puVar3 = param_1 + 0x401;
  iVar2 = 9;
  do {
    iVar4 = iVar2;
    thunk_FUN_103fe9c0(param_1,&local_8,&local_4);
    puVar3[-1] = local_8;
    *puVar3 = local_4;
    puVar3 = puVar3 + 2;
    iVar2 = iVar4 + -1;
  } while (iVar2 != 0);
  iVar4 = iVar4 + 3;
  puVar3 = param_1;
  do {
    iVar2 = 0x80;
    do {
      thunk_FUN_103fe9c0(param_1,&local_8,&local_4);
      *puVar3 = local_8;
      puVar3[1] = local_4;
      puVar3 = puVar3 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return local_8 & 0xffff0000;
}


// ==== 103ff530 FUN_103ff530

void FUN_103ff530(void)

{
  return;
}


// ==== 103ff540 FUN_103ff540

void FUN_103ff540(void)

{
  return;
}


// ==== 103ff550 FUN_103ff550

undefined4 FUN_103ff550(void)

{
  thunk_FUN_103ff3e0();
  return 1;
}


// ==== 103ff570 FUN_103ff570

undefined4 FUN_103ff570(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_2 + 7 & 0xfffffff8;
  *param_2 = uVar1;
  uVar4 = *param_1;
  iVar2 = (int)uVar1 >> 2;
  iVar3 = 1;
  if (1 < iVar2) {
    do {
      uVar4 = uVar4 + param_1[iVar3];
      param_1[iVar3] = param_1[iVar3] ^ uVar4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  param_1[iVar3] = uVar4;
  *param_2 = *param_2 + 8;
  thunk_FUN_103ff3a0();
  return 1;
}


// ==== 103ff5e0 FUN_103ff5e0

uint FUN_103ff5e0(int param_1,uint param_2)

{
  uint *puVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  
  if ((param_2 & 7) == 0) {
    thunk_FUN_103ff360();
    iVar2 = (int)(param_2 - 8) >> 2;
    uVar3 = *(uint *)(param_1 + iVar2 * 4);
    while (iVar2 = iVar2 + -1, 0 < iVar2) {
      puVar1 = (uint *)(param_1 + iVar2 * 4);
      *puVar1 = *puVar1 ^ uVar3;
      uVar3 = uVar3 - *(int *)(param_1 + iVar2 * 4);
    }
    return CONCAT31((int3)((uint)iVar2 >> 8),uVar3 == 0);
  }
  return in_EAX & 0xffffff00;
}


// ==== 103ff640 FUN_103ff640

undefined4 FUN_103ff640(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *param_2 + 7 & 0xfffffff8;
  *param_2 = uVar1;
  iVar2 = (int)uVar1 >> 2;
  uVar1 = 0;
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      uVar1 = uVar1 ^ *(uint *)(param_1 + iVar3 * 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  *(uint *)(param_1 + iVar3 * 4) = uVar1;
  *param_2 = *param_2 + 8;
  thunk_FUN_103ff3a0();
  return 1;
}


// ==== 103ff6a0 FUN_103ff6a0

uint FUN_103ff6a0(int param_1,uint param_2)

{
  uint in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_2 & 7) == 0) {
    thunk_FUN_103ff360();
    iVar2 = (int)(param_2 - 8) >> 2;
    uVar3 = 0;
    iVar1 = 0;
    if (0 < iVar2) {
      do {
        uVar3 = uVar3 ^ *(uint *)(param_1 + iVar1 * 4);
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
    return CONCAT31((int3)((uint)iVar1 >> 8),*(uint *)(param_1 + iVar1 * 4) == uVar3);
  }
  return in_EAX & 0xffffff00;
}


// ==== 103ff710 FUN_103ff710

void FUN_103ff710(undefined4 param_1,undefined4 param_2)

{
  (**(code **)**(undefined4 **)GMalloc_exref)(param_1,param_2);
  return;
}


// ==== 103ff730 FUN_103ff730

void FUN_103ff730(undefined4 param_1)

{
  (**(code **)**(undefined4 **)GMalloc_exref)(param_1,&DAT_10853a28);
  return;
}


// ==== 103ff760 FUN_103ff760

void FUN_103ff760(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  *(undefined2 *)(in_ECX + 0xd) = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0xffffffff;
  in_ECX[0x1f] = 0xffffffff;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  *(undefined2 *)(in_ECX + 0x27) = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  return;
}


// ==== 103ff860 FUN_103ff860

void FUN_103ff860(short *param_1)

{
  short sVar1;
  int in_ECX;
  int iVar2;
  
  if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
    iVar2 = (in_ECX + 8) - (int)param_1;
    do {
      sVar1 = *param_1;
      *(short *)(iVar2 + (int)param_1) = sVar1;
      param_1 = param_1 + 1;
    } while (sVar1 != 0);
    return;
  }
  *(undefined2 *)(in_ECX + 8) = 0;
  return;
}


// ==== 103ff8a0 FUN_103ff8a0

void FUN_103ff8a0(void)

{
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xac) = 0;
  *(undefined4 *)(in_ECX + 4) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xb4) = 0;
  return;
}


// ==== 103ff8c0 FUN_103ff8c0

void FUN_103ff8c0(void)

{
  undefined2 *in_ECX;
  
  *in_ECX = 0xffff;
  *(undefined4 *)(in_ECX + 2) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 6) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 10) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  *(undefined4 *)(in_ECX + 0x12) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x16) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1a) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0xffffffff;
  return;
}


// ==== 103ff9b0 FUN_103ff9b0

void FUN_103ff9b0(uint param_1)

{
  int in_ECX;
  bool bVar1;
  uint local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = 0;
  _memcpy_s(&local_8,8,(void *)(in_ECX + 9),8);
  bVar1 = CARRY4(local_8,param_1);
  local_8 = local_8 + param_1;
  local_4 = local_4 + ((int)param_1 >> 0x1f) + (uint)bVar1;
  _memcpy_s((void *)(in_ECX + 9),8,&local_8,8);
  return;
}


// ==== 103ffaa0 FUN_103ffaa0

undefined4 FUN_103ffaa0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  iVar2 = *in_ECX;
  if (iVar2 == 1) {
    return puVar1[6];
  }
  if ((iVar2 != 2) && (iVar2 != 3)) {
    if (iVar2 == 4) {
      return puVar1[2];
    }
    if (iVar2 != 5) {
      return 0xffffffff;
    }
  }
  return *puVar1;
}


// ==== 103ffc50 FUN_103ffc50

void FUN_103ffc50(void)

{
  UObject *pUVar1;
  UObject *in_ECX;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e399;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  UObject::UObject(in_ECX);
  *(undefined ***)in_ECX = CPingSocket::vftable;
  pUVar1 = in_ECX + 0x34;
  iVar2 = 0x7f;
  do {
    *(undefined4 *)pUVar1 = 0xffffffff;
    *(undefined4 *)(pUVar1 + 4) = 0;
    *(undefined4 *)(pUVar1 + 8) = 0;
    *(undefined4 *)(pUVar1 + 0xc) = 0;
    pUVar1 = pUVar1 + 0x10;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  ExceptionList = local_c;
  return;
}


// ==== 103ffce0 FUN_103ffce0

void FUN_103ffce0(void)

{
  UObject *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1080e3b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)in_ECX = CPingSocket::vftable;
  local_4 = 0;
  UObject::ConditionalDestroy(in_ECX);
  local_4 = 0xffffffff;
  UObject::~UObject(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 103ffd50 FUN_103ffd50

void FUN_103ffd50(byte param_1)

{
  void *in_ECX;
  
  thunk_FUN_103ffce0();
  if ((param_1 & 1) != 0) {
    UObject::operator_delete(in_ECX,0x854);
  }
  return;
}


// ==== 103ffea0 FUN_103ffea0

UClass * FUN_103ffea0(void)

{
  return &UNetworkHandler::PrivateStaticClass;
}


// ==== 103ffeb0 FUN_103ffeb0

void FUN_103ffeb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UObject::StaticAllocateObject
            (&UNetworkHandler::PrivateStaticClass,param_2,param_3,param_4,0,
             *(undefined4 *)GError_exref,0,0);
  return;
}


// ==== 103ffef0 FUN_103ffef0

undefined4 FUN_103ffef0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}


// ==== 103fff00 FUN_103fff00

undefined4 FUN_103fff00(void)

{
  return 0;
}


// ==== 103fff10 FUN_103fff10

bool FUN_103fff10(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x50) == 0;
}


// ==== 103fffc0 FUN_103fffc0

void FUN_103fffc0(undefined4 param_1,byte param_2)

{
  int *piVar1;
  FOutputDevice *in_ECX;
  
  *(undefined ***)in_ECX = FNPawnResourceInfo::vftable;
  if (*(int *)(in_ECX + 4) == 0) {
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(in_ECX,*(ushort **)GLog_exref);
    }
  }
  else {
    piVar1 = (int *)(*(int *)(in_ECX + 4) + 0x758);
    *piVar1 = *piVar1 + -1;
  }
  if ((param_2 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10400030 FUN_10400030

void FUN_10400030(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 4);
  return;
}


// ==== 10400040 FUN_10400040

undefined4 FUN_10400040(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 8);
}


// ==== 10400050 FUN_10400050

void FUN_10400050(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = param_1;
  return;
}


// ==== 10400060 FUN_10400060

void FUN_10400060(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = param_1;
  return;
}


// ==== 10400070 FUN_10400070

float10 FUN_10400070(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0xc);
}


// ==== 10400080 FUN_10400080

void FUN_10400080(byte param_1)

{
  FNPawnResource *in_ECX;
  
  FNPawnResource::~FNPawnResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 104000b0 FUN_104000b0

FNPawnResource * FUN_104000b0(byte param_1)

{
  FNPawnResource *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x1c,*(int *)(in_ECX + -4),FNPawnResource::~FNPawnResource);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FNPawnResource::~FNPawnResource(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 10400130 FUN_10400130

void FUN_10400130(byte param_1)

{
  FNActorResourceLoader *in_ECX;
  
  FNActorResourceLoader::~FNActorResourceLoader(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10400160 FUN_10400160

FNActorResourceLoader * FUN_10400160(byte param_1)

{
  FNActorResourceLoader *in_ECX;
  
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_
              (in_ECX,0x18,*(int *)(in_ECX + -4),FNActorResourceLoader::~FNActorResourceLoader);
    if ((param_1 & 1) != 0) {
      (**(code **)(**(int **)GMalloc_exref + 8))(in_ECX + -4);
    }
    return in_ECX + -4;
  }
  FNActorResourceLoader::~FNActorResourceLoader(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return in_ECX;
}


// ==== 104001e0 FUN_104001e0

undefined4 FUN_104001e0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 4);
}


// ==== 104001f0 FUN_104001f0

void FUN_104001f0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = param_1;
  return;
}


// ==== 10400200 FUN_10400200

void FUN_10400200(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = param_1;
  return;
}


// ==== 10400210 FUN_10400210

float10 FUN_10400210(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 4);
}


// ==== 10400220 FUN_10400220

undefined4 FUN_10400220(void)

{
  char *pcVar1;
  int iVar2;
  hostent *phVar3;
  int iVar4;
  WSADATA local_3e0;
  char local_250 [256];
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined2 local_144;
  undefined1 local_142 [50];
  undefined1 local_110 [16];
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8 [3];
  undefined1 local_ec;
  undefined1 local_eb;
  undefined1 local_ea;
  undefined1 local_e9;
  undefined1 local_dc;
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined1 local_54 [2];
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  byte *local_1c;
  char local_16;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080e3db;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffc14;
  local_8 = 0;
  ExceptionList = &local_10;
  local_2c = thunk_FUN_1032ffc0(8);
  local_8._0_1_ = 1;
  if (local_2c == 0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = (char *)thunk_FUN_1051fde0();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_1c = (byte *)0x0;
  local_20 = 0;
  *pcVar1 = '\0';
  local_16 = '\x01';
  local_38 = 0;
  local_2c = DAT_10b20f44;
  local_150 = 0x2e323232;
  local_14c = 0x2e313332;
  local_148 = 0x362e3531;
  local_144 = 0x30;
  _memset(local_142,0,0x32);
  iVar2 = gethostname(local_250,0xff);
  if ((iVar2 == 0) && (phVar3 = gethostbyname(local_250), phVar3 != (hostent *)0x0)) {
    _memcpy(local_54,*phVar3->h_addr_list,(int)phVar3->h_length);
    DAT_10b1f510 = (undefined1)_local_54;
    DAT_10b1f511 = (undefined1)((uint)_local_54 >> 8);
    DAT_10b1f512 = uStack_52;
    DAT_10b1f513 = uStack_51;
  }
  for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
    iVar2 = local_30 * 0x10;
    *(undefined1 *)(&local_fc + local_30 * 4) = 0;
    *(undefined1 *)((int)&local_fc + iVar2 + 1) = 0;
    *(undefined1 *)((int)&local_fc + iVar2 + 2) = 0;
    *(undefined1 *)((int)&local_fc + iVar2 + 3) = 0;
  }
  iVar2 = WSAStartup(0x102,&local_3e0);
  if (iVar2 != 0) {
    ExceptionList = local_10;
    return 0;
  }
  local_28 = 1;
  iVar2 = thunk_FUN_1051fe00(&local_150,1,&local_24,local_110);
  if (-1 < iVar2) {
    iVar2 = thunk_FUN_10520180(&local_20,&local_1c,0x20);
    if (iVar2 < 0) {
      thunk_FUN_103254c0(local_20);
      goto LAB_104003a9;
    }
    thunk_FUN_1051fed0(local_20,0x20,0);
    iVar2 = 0;
    while( true ) {
      if ((*pcVar1 != '\0') || (local_16 == '\0')) {
        DAT_10b1f514 = (undefined1)local_fc;
        DAT_10b1f515 = local_fc._1_1_;
        DAT_10b1f516 = local_fc._2_1_;
        DAT_10b1f517 = local_fc._3_1_;
        DAT_10b1f518 = local_ec;
        DAT_10b1f519 = local_eb;
        DAT_10b1f51a = local_ea;
        DAT_10b1f51b = local_e9;
        DAT_10b1f51c = local_dc;
        DAT_10b1f51d = local_db;
        DAT_10b1f51e = local_da;
        DAT_10b1f51f = local_d9;
        DAT_10b1f520 = local_cc;
        DAT_10b1f521 = local_cb;
        DAT_10b1f522 = local_ca;
        DAT_10b1f523 = local_c9;
        ExceptionList = local_10;
        return 0;
      }
      SleepEx(1000,1);
      iVar4 = thunk_FUN_105200b0(local_28,&local_24);
      if (iVar4 < 0) break;
      iVar4 = thunk_FUN_1051ff80(local_24,local_110,local_20,0x20);
      if (-1 < iVar4) {
        do {
          while( true ) {
            local_15 = '\x01';
            thunk_FUN_105200e0(local_24,0,&local_15);
            if (local_15 == '\0') goto LAB_1040051a;
            iVar4 = thunk_FUN_1051ffc0(local_24,&local_48,local_1c,0x414);
            if (-1 < iVar4) break;
            if (*(short *)(local_1c + (ushort)((ushort)(*local_1c & 0xf) * 4) + 6) == 0)
            goto LAB_1040051a;
          }
          (&local_100)[iVar2 * 4] = local_48;
          iVar4 = local_44;
          (&local_fc)[iVar2 * 4] = local_44;
          local_f8[iVar2 * 4] = local_40;
          local_f8[iVar2 * 4 + 1] = local_3c;
          iVar2 = iVar2 + 1;
          if (iVar4 == local_2c) {
            local_16 = '\0';
          }
          local_38 = iVar2;
          iVar4 = thunk_FUN_10520010(local_1c,0x20,&local_48);
          if (iVar4 == -1) {
            thunk_FUN_103254c0(local_20);
            goto LAB_104003a9;
          }
        } while (iVar4 == -2);
LAB_1040051a:
        if (local_28 == 10) {
          *pcVar1 = '\x01';
        }
      }
      local_28 = local_28 + 1;
    }
  }
  thunk_FUN_103254c0(local_20);
LAB_104003a9:
  thunk_FUN_103254c0(local_1c);
  WSACleanup();
  ExceptionList = local_10;
  return 0;
}


// ==== 104005fc Catch@104005fc

void Catch_104005fc(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x58);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x30,&DAT_10914c48);
}


// ==== 10400610 Catch@10400610

void Catch_10400610(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"GetTraceIP2");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10400730 FUN_10400730

uint FUN_10400730(void)

{
  uint extraout_EAX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e3f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(*(int *)GL2Console + 0x80))(L"GameGuard Fail! \n Please Restart Lineage2",1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10400798 Catch@10400798

void Catch_10400798(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 104007ac Catch@104007ac

void Catch_104007ac(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExRestartClient");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104007f0 FUN_104007f0

uint FUN_104007f0(void)

{
  uint extraout_EAX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e400;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10400841 Catch@10400841

void Catch_10400841(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10400855 Catch@10400855

void Catch_10400855(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExRequestHackShield");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104008a0 FUN_104008a0

uint FUN_104008a0(void)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e410;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5b0))();
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 104008ed Catch@104008ed

void Catch_104008ed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10400901 Catch@10400901

void Catch_10400901(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExShowVariationMakeWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10400940 FUN_10400940

uint FUN_10400940(void)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e420;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x5b4))();
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1040098d Catch@1040098d

void Catch_1040098d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 104009a1 Catch@104009a1

void Catch_104009a1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExShowVariationCancelWindow");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104009e0 FUN_104009e0

uint FUN_104009e0(void)

{
  return (uint)ExceptionList & 0xffffff00;
}


// ==== 10400a1b Catch@10400a1b

void Catch_10400a1b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10400a2f Catch@10400a2f

void Catch_10400a2f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExDuelEnemyRelation");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10400a70 FUN_10400a70

uint FUN_10400a70(void)

{
  return (uint)ExceptionList & 0xffffff00;
}


// ==== 10400aab Catch@10400aab

void Catch_10400aab(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10400abf Catch@10400abf

void Catch_10400abf(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ReviveRequestPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10400b30 FUN_10400b30

uint FUN_10400b30(void)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x200))();
  return uVar1 & 0xffffff00;
}


// ==== 10400b50 FUN_10400b50

undefined1 FUN_10400b50(void)

{
  return 0;
}


// ==== 10400b60 FUN_10400b60

undefined1 FUN_10400b60(void)

{
  return 0;
}


// ==== 10400b70 FUN_10400b70

uint FUN_10400b70(void)

{
  uint extraout_EAX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e450;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4e8))();
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10400bd4 Catch@10400bd4

void Catch_10400bd4(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10400be8 Catch@10400be8

void Catch_10400be8(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"AcquireSkillDonePacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10400c30 FUN_10400c30

uint FUN_10400c30(void)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x2d4))(0);
  return uVar1 & 0xffffff00;
}


// ==== 10400c50 FUN_10400c50

uint FUN_10400c50(void)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x2d8))(1);
  return uVar1 & 0xffffff00;
}


// ==== 10400c70 FUN_10400c70

uint FUN_10400c70(void)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x444))(0x1a4);
  return uVar1 & 0xffffff00;
}


// ==== 10400c90 FUN_10400c90

uint FUN_10400c90(void)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x444))(0x3c);
  return uVar1 & 0xffffff00;
}


// ==== 10400cf0 FUN_10400cf0

undefined1 FUN_10400cf0(void)

{
  return 0;
}


// ==== 10400d00 FUN_10400d00

uint FUN_10400d00(void)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x2f8))();
  return uVar1 & 0xffffff00;
}


// ==== 10400d20 FUN_10400d20

undefined1 FUN_10400d20(void)

{
  return 0;
}


// ==== 10400d30 FUN_10400d30

uint FUN_10400d30(void)

{
  uint extraout_EAX;
  
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x2d0))(0);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10400d70 FUN_10400d70

uint FUN_10400d70(void)

{
  uint extraout_EAX;
  
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x260))();
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10400db0 FUN_10400db0

uint FUN_10400db0(void)

{
  uint extraout_EAX;
  
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x314))(2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10400e00 FUN_10400e00

uint FUN_10400e00(void)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e469;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x378))(local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10400ea0 FUN_10400ea0

uint FUN_10400ea0(void)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e489;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x378))(local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10400f40 FUN_10400f40

undefined1 FUN_10400f40(void)

{
  return 0;
}


// ==== 10400f50 FUN_10400f50

undefined1 FUN_10400f50(void)

{
  return 0;
}


// ==== 10400f60 FUN_10400f60

undefined1 FUN_10400f60(void)

{
  return 0;
}


// ==== 10400f70 FUN_10400f70

undefined1 FUN_10400f70(void)

{
  return 0;
}


// ==== 10400f80 FUN_10400f80

undefined1 FUN_10400f80(void)

{
  return 0;
}


// ==== 10400f90 FUN_10400f90

undefined1 FUN_10400f90(void)

{
  return 0;
}


// ==== 10400fa0 FUN_10400fa0

undefined1 FUN_10400fa0(void)

{
  return 0;
}


// ==== 10400fb0 FUN_10400fb0

undefined1 FUN_10400fb0(void)

{
  return 0;
}


// ==== 10400fc0 FUN_10400fc0

uint FUN_10400fc0(void)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e4a9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3ac))(local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10401060 FUN_10401060

uint FUN_10401060(void)

{
  uint extraout_EAX;
  L2ParamStack local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e4c9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x3b4))(local_1c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_4 = 0xffffffff;
  L2ParamStack::~L2ParamStack(local_1c);
  ExceptionList = pvStack_c;
  return extraout_EAX & 0xffffff00;
}


// ==== 10401100 FUN_10401100

uint FUN_10401100(void)

{
  uint extraout_EAX;
  
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x354))();
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10401140 FUN_10401140

undefined1 FUN_10401140(void)

{
  return 0;
}


// ==== 10401150 FUN_10401150

uint FUN_10401150(void)

{
  uint extraout_EAX;
  
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10401170 FUN_10401170

uint FUN_10401170(void)

{
  uint extraout_EAX;
  
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10401190 FUN_10401190

undefined1 FUN_10401190(void)

{
  return 0;
}


// ==== 104011a0 FUN_104011a0

undefined1 FUN_104011a0(void)

{
  return 0;
}


// ==== 104011b0 FUN_104011b0

undefined1 FUN_104011b0(void)

{
  return 0;
}


// ==== 104011c0 FUN_104011c0

undefined1 FUN_104011c0(void)

{
  return 0;
}


// ==== 104011d0 FUN_104011d0

undefined1 FUN_104011d0(void)

{
  return 0;
}


// ==== 104011e0 FUN_104011e0

undefined1 FUN_104011e0(void)

{
  return 0;
}


// ==== 104011f0 FUN_104011f0

undefined1 FUN_104011f0(void)

{
  return 0;
}


// ==== 10401200 FUN_10401200

undefined1 FUN_10401200(void)

{
  return 0;
}


// ==== 10401210 FUN_10401210

undefined1 FUN_10401210(void)

{
  return 0;
}


// ==== 10401220 FUN_10401220

uint FUN_10401220(void)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e4e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = (**(code **)(*(int *)GL2Console + 0x734))();
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1040126b Catch@1040126b

void Catch_1040126b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1040127f Catch@1040127f

void Catch_1040127f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ShowPCCafeCouponShowUI");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104012c0 FUN_104012c0

undefined1 FUN_104012c0(void)

{
  return 0;
}


// ==== 104012d0 FUN_104012d0

uint FUN_104012d0(void)

{
  uint extraout_EAX;
  
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x2b8))();
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10401310 FUN_10401310

uint FUN_10401310(void)

{
  uint extraout_EAX;
  
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x674))();
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return extraout_EAX & 0xffffff00;
}


// ==== 10401350 FUN_10401350

uint FUN_10401350(void)

{
  return (uint)ExceptionList & 0xffffff00;
}


// ==== 1040138b Catch@1040138b

void Catch_1040138b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1040139f Catch@1040139f

void Catch_1040139f(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExEventMatchListPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104013e0 FUN_104013e0

uint FUN_104013e0(void)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e500;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x6f0))();
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1040142d Catch@1040142d

void Catch_1040142d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10401441 Catch@10401441

void Catch_10401441(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExEventMatchGMTestPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10401480 FUN_10401480

uint FUN_10401480(void)

{
  uint extraout_EAX;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080e519;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x708))(local_2c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10401503 Catch@10401503

void Catch_10401503(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10401517 Catch@10401517

void Catch_10401517(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExClosePartyRoomPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10401570 FUN_10401570

undefined1 FUN_10401570(void)

{
  return 0;
}


// ==== 10401580 FUN_10401580

uint FUN_10401580(void)

{
  uint extraout_EAX;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080e539;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x498))(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 104015ed Catch@104015ed

void Catch_104015ed(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10401601 Catch@10401601

void Catch_10401601(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExShowQuestInfoPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10401650 FUN_10401650

void FUN_10401650(byte param_1)

{
  L2ParamStack *in_ECX;
  
  L2ParamStack::~L2ParamStack(in_ECX);
  if ((param_1 & 1) != 0) {
    (**(code **)(**(int **)GMalloc_exref + 8))();
  }
  return;
}


// ==== 10401680 FUN_10401680

void FUN_10401680(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e559;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 104016d0 FUN_104016d0

void FUN_104016d0(void)

{
  FString *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e579;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FString::FString(in_ECX);
  ExceptionList = local_c;
  return;
}


// ==== 10401720 FUN_10401720

uint FUN_10401720(void)

{
  uint extraout_EAX;
  L2ParamStack local_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e599;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4dc))();
  puStack_8 = (undefined1 *)0xffffffff;
  L2ParamStack::~L2ParamStack((L2ParamStack *)&stack0xffffffe0);
  ExceptionList = pvStack_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 104017a0 FUN_104017a0

uint FUN_104017a0(void)

{
  uint extraout_EAX;
  L2ParamStack local_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1080e5b9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  L2ParamStack::L2ParamStack(local_1c,10);
  local_4 = 0;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4e0))();
  puStack_8 = (undefined1 *)0xffffffff;
  L2ParamStack::~L2ParamStack((L2ParamStack *)&stack0xffffffe0);
  ExceptionList = pvStack_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 10401820 FUN_10401820

uint FUN_10401820(void)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e5d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4d0))();
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1040186d Catch@1040186d

void Catch_1040186d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10401881 Catch@10401881

void Catch_10401881(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExOlympiadMatchEndPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104018c0 FUN_104018c0

uint FUN_104018c0(void)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e5e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  uVar1 = (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x4d4))();
  ExceptionList = local_10;
  return uVar1 & 0xffffff00;
}


// ==== 1040190d Catch@1040190d

void Catch_1040190d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10401921 Catch@10401921

void Catch_10401921(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExMailArrivedPacket");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10401960 FUN_10401960

uint FUN_10401960(void)

{
  uint extraout_EAX;
  L2ParamStack local_2c [24];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1080e5f9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  local_8 = 0;
  ExceptionList = &local_10;
  L2ParamStack::L2ParamStack(local_2c,10);
  local_8._0_1_ = 1;
  (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x750))(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  L2ParamStack::~L2ParamStack(local_2c);
  ExceptionList = local_10;
  return extraout_EAX & 0xffffff00;
}


// ==== 104019cd Catch@104019cd

void Catch_104019cd(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 104019e1 Catch@104019e1

void Catch_104019e1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"ExShowAdventurerGuideBook");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10401a60 FUN_10401a60

undefined4 FUN_10401a60(LPCWSTR param_1)

{
  WCHAR local_200 [256];
  
  wvsprintfW(local_200,param_1,&stack0x00000008);
  lstrcatW(local_200,L"\r\n");
  OutputDebugStringW(local_200);
  return 1;
}


// ==== 10401ac0 FUN_10401ac0

void FUN_10401ac0(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e610;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = WSAAsyncSelect(*(SOCKET *)(in_ECX + 0x38),*(HWND *)(in_ECX + 0x34),0x508,0x25);
  if (iVar1 != 0) {
    iVar1 = WSAGetLastError();
    thunk_FUN_10401a60(L"WSAAsncSelect Error : %d : %d",iVar1,*(undefined4 *)(in_ECX + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x4efc));
  }
  ExceptionList = local_10;
  return;
}


// ==== 10401b40 Catch@10401b40

void Catch_10401b40(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10401b54 Catch@10401b54

void Catch_10401b54(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CClientSocket::RefreshWSAAsyncSelect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10401ba0 FUN_10401ba0

void FUN_10401ba0(void)

{
  void *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e620;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  appMemset(in_ECX,0xff,0x20);
  ExceptionList = local_10;
  return;
}


// ==== 10401bf5 Catch@10401bf5

void Catch_10401bf5(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10401c09 Catch@10401c09

void Catch_10401c09(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"FL2NetworkStats::FL2NetworkStats");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10401d60 FUN_10401d60

void FUN_10401d60(void)

{
  int in_ECX;
  
  if (*(SOCKET *)(in_ECX + 0x38) != 0) {
    closesocket(*(SOCKET *)(in_ECX + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x4efc));
  }
  *(undefined4 *)(in_ECX + 0x38) = 0;
  if (*(int *)(in_ECX + 0x495c) != 0) {
    *(undefined4 *)(in_ECX + 0x495c) = 0;
    DAT_10b1f53c = 0;
  }
  return;
}


// ==== 10401dc0 FUN_10401dc0

void FUN_10401dc0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  undefined1 local_806;
  undefined1 local_805;
  undefined4 local_804;
  byte local_800 [2048];
  
  sVar2 = (short)((uint)param_2 >> 0x10);
  if (sVar2 != 0) {
    if (sVar2 == 0x274d) {
      thunk_FUN_10401a60(L"Connection refused by server");
    }
    return;
  }
  iVar3 = WSAAsyncSelect(*(SOCKET *)(in_ECX + 0x38),*(HWND *)(in_ECX + 0x34),0x508,0x25);
  if (iVar3 != 0) {
    iVar3 = WSAGetLastError();
    thunk_FUN_10401a60(L"WSAAsncSelect Error : %d : %d",iVar3,*(undefined4 *)(in_ECX + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x4efc));
    return;
  }
  thunk_FUN_10401a60(L"Connected! ^o^//",L"Message",0);
  FID_conflict__sscanf("#Revision: 746 $","%cRevision: %d %c",&local_806,&local_804,&local_805);
  local_800[0] = 0;
  _memset(local_800 + 1,0,0x7ff);
  iVar3 = 0;
  iVar6 = 0;
  do {
    iVar4 = iVar3 + 1;
    local_800[iVar6] = (&DAT_1087e5e8)[iVar6] ^ (&DAT_1087e6ec)[iVar3];
    if (7 < iVar4) {
      iVar4 = 0;
    }
    iVar3 = iVar4 + 1;
    local_800[iVar6 + 1] = (&DAT_1087e5e9)[iVar6] ^ (&DAT_1087e6ec)[iVar4];
    if (7 < iVar3) {
      iVar3 = 0;
    }
    iVar4 = iVar3 + 1;
    local_800[iVar6 + 2] = (&DAT_1087e5ea)[iVar6] ^ (&DAT_1087e6ec)[iVar3];
    if (7 < iVar4) {
      iVar4 = 0;
    }
    iVar3 = iVar4 + 1;
    local_800[iVar6 + 3] = (&DAT_1087e5eb)[iVar6] ^ (&DAT_1087e6ec)[iVar4];
    if (7 < iVar3) {
      iVar3 = 0;
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x100);
  piVar1 = *(int **)(DAT_10b1f538 + 0x48);
  iVar3 = *piVar1;
  uVar5 = (**(code **)(**(int **)(DAT_10c51044 + 0x70) + 0x78))();
  (**(code **)(iVar3 + 0x68))(piVar1,&DAT_1087f1ec,0,local_804,0x100,local_800,uVar5);
  DAT_10a56e8c = local_804;
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10401fd0 FUN_10401fd0

void FUN_10401fd0(byte *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint local_8;
  int local_4;
  
  *param_1 = *param_1 ^ *(byte *)(param_2 + 1);
  uVar1 = 1;
  if (1 < (int)param_3) {
    do {
      uVar2 = uVar1 + 1;
      param_1[uVar1] = param_1[uVar1] ^ *(byte *)((uVar1 & 0xf) + 1 + param_2) ^ param_1[uVar1 - 1];
      uVar1 = uVar2;
    } while ((int)uVar2 < (int)param_3);
  }
  local_8 = 0;
  local_4 = 0;
  _memcpy_s(&local_8,8,(void *)(param_2 + 9),8);
  bVar3 = CARRY4(local_8,param_3);
  local_8 = local_8 + param_3;
  local_4 = local_4 + ((int)param_3 >> 0x1f) + (uint)bVar3;
  _memcpy_s((void *)(param_2 + 9),8,&local_8,8);
  return;
}


// ==== 10402070 FUN_10402070

void FUN_10402070(byte *param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  uint local_8;
  int local_4;
  
  bVar3 = *param_1;
  *param_1 = *(byte *)(param_2 + 1) ^ bVar3;
  uVar2 = 1;
  if (1 < (int)param_3) {
    do {
      bVar1 = param_1[uVar2];
      param_1[uVar2] = *(byte *)((uVar2 & 0xf) + 1 + param_2) ^ bVar1 ^ bVar3;
      uVar2 = uVar2 + 1;
      bVar3 = bVar1;
    } while ((int)uVar2 < (int)param_3);
  }
  local_8 = 0;
  local_4 = 0;
  _memcpy_s(&local_8,8,(void *)(param_2 + 9),8);
  bVar4 = CARRY4(local_8,param_3);
  local_8 = local_8 + param_3;
  local_4 = local_4 + ((int)param_3 >> 0x1f) + (uint)bVar4;
  _memcpy_s((void *)(param_2 + 9),8,&local_8,8);
  return;
}


// ==== 104021a0 FUN_104021a0

void FUN_104021a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x4f64) = param_1;
  *(undefined4 *)(in_ECX + 0x4f68) = param_2;
  *(undefined4 *)(in_ECX + 0x4f9c) = param_3;
  *(undefined4 *)(in_ECX + 0x4fa0) = param_4;
  *(undefined4 *)(in_ECX + 0x4fa4) = param_5;
  return;
}


// ==== 104021f0 FUN_104021f0

int FUN_104021f0(char *param_1,int param_2,char *param_3,int param_4)

{
  size_t *psVar1;
  undefined4 *puVar2;
  char *pcVar3;
  size_t _Size;
  undefined8 uVar4;
  char cVar5;
  short sVar6;
  short *_Src;
  char *_Dst;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  short *psVar10;
  undefined4 uVar11;
  char *pcVar12;
  int iVar13;
  undefined4 local_8;
  undefined4 uStack_4;
  
  pcVar3 = param_1 + param_2;
  iVar7 = (int)*param_3;
  pcVar8 = param_1;
  if (iVar7 != 0) {
    iVar13 = param_4 + -8;
    pcVar12 = (char *)(param_4 + -4);
    _Dst = param_1;
    do {
      param_3 = param_3 + 1;
      pcVar8 = _Dst;
      switch(iVar7) {
      case 0x51:
        uVar11 = *(undefined4 *)(iVar13 + 8);
        puVar2 = (undefined4 *)(iVar13 + 0xc);
        iVar13 = iVar13 + 8;
        pcVar8 = _Dst + 8;
        pcVar12 = pcVar12 + 8;
        if (pcVar3 < pcVar8) {
          return 0;
        }
        *(undefined4 *)(_Dst + 4) = *puVar2;
        goto LAB_104023a1;
      case 0x53:
        _Src = *(short **)(pcVar12 + 4);
        pcVar12 = pcVar12 + 4;
        iVar13 = iVar13 + 4;
        if (_Src == (short *)0x0) {
          if (pcVar3 < _Dst + 2) {
            return 0;
          }
          *_Dst = '\0';
          _Dst[1] = '\0';
          pcVar8 = _Dst + 2;
        }
        else {
          psVar10 = _Src;
          do {
            sVar6 = *psVar10;
            psVar10 = psVar10 + 1;
          } while (sVar6 != 0);
          _Size = ((int)psVar10 - (int)(_Src + 1) >> 1) * 2 + 2;
          pcVar8 = _Dst + _Size;
          if (pcVar3 < pcVar8) {
            return 0;
          }
          _memcpy(_Dst,_Src,_Size);
        }
        break;
      case 0x62:
      case 0x78:
        psVar1 = (size_t *)(pcVar12 + 4);
        pcVar8 = _Dst + *psVar1;
        pcVar12 = pcVar12 + 8;
        iVar13 = iVar13 + 8;
        if (pcVar3 < pcVar8) {
          return 0;
        }
        _memcpy(_Dst,*(void **)pcVar12,*psVar1);
        break;
      case 99:
        pcVar8 = _Dst + 1;
        pcVar12 = pcVar12 + 4;
        iVar13 = iVar13 + 4;
        if (pcVar3 < pcVar8) {
          return 0;
        }
        *_Dst = *pcVar12;
        break;
      case 100:
        pcVar8 = _Dst + 4;
        pcVar12 = pcVar12 + 4;
        iVar13 = iVar13 + 4;
        if (pcVar3 < pcVar8) {
          return 0;
        }
        uVar11 = *(undefined4 *)pcVar12;
LAB_104023a1:
        *(undefined4 *)_Dst = uVar11;
        break;
      case 0x66:
        uVar4 = *(undefined8 *)(iVar13 + 8);
        iVar13 = iVar13 + 8;
        pcVar8 = _Dst + 8;
        pcVar12 = pcVar12 + 8;
        if (pcVar3 < pcVar8) {
          return 0;
        }
        local_8 = (undefined4)uVar4;
        *(undefined4 *)_Dst = local_8;
        uStack_4 = (undefined4)((ulonglong)uVar4 >> 0x20);
        *(undefined4 *)(_Dst + 4) = uStack_4;
        break;
      case 0x68:
        pcVar8 = _Dst + 2;
        pcVar12 = pcVar12 + 4;
        iVar13 = iVar13 + 4;
        if (pcVar3 < pcVar8) {
          return 0;
        }
        *(undefined2 *)_Dst = *(undefined2 *)pcVar12;
        break;
      case 0x73:
        pcVar9 = *(char **)(pcVar12 + 4);
        pcVar12 = pcVar12 + 4;
        iVar13 = iVar13 + 4;
        if (pcVar9 == (char *)0x0) {
          pcVar8 = _Dst + 1;
          if (pcVar3 < pcVar8) {
            return 0;
          }
          *_Dst = '\0';
        }
        else {
          pcVar8 = pcVar9;
          do {
            cVar5 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar5 != '\0');
          pcVar8 = pcVar8 + (1 - (int)(pcVar9 + 1)) + (int)_Dst;
          if (pcVar3 < pcVar8) {
            return 0;
          }
          iVar7 = (int)_Dst - (int)pcVar9;
          do {
            cVar5 = *pcVar9;
            pcVar9[iVar7] = cVar5;
            pcVar9 = pcVar9 + 1;
          } while (cVar5 != '\0');
        }
      }
      iVar7 = (int)*param_3;
      _Dst = pcVar8;
    } while (iVar7 != 0);
  }
  return (int)pcVar8 - (int)param_1;
}


// ==== 104024b0 FUN_104024b0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_104024b0(int param_1,int param_2)

{
  int iVar1;
  char local_2000;
  undefined1 local_1fff;
  undefined1 local_1ffe [8186];
  undefined4 uStack_4;
  
  uStack_4 = 0x104024ba;
  if (((param_2 != 0) && (param_1 != 0)) &&
     (iVar1 = thunk_FUN_104021f0(local_1ffe,0x1ffe,param_2,&stack0x0000000c), 0 < iVar1)) {
    iVar1 = iVar1 + 2;
    local_2000 = (char)iVar1;
    local_1fff = (undefined1)((uint)iVar1 >> 8);
    send(*(SOCKET *)(param_1 + 0x850),&local_2000,iVar1,0);
  }
  return;
}


// ==== 104025b0 FUN_104025b0

void FUN_104025b0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  
  if (*(SOCKET *)(in_ECX + 0x850) != 0) {
    closesocket(*(SOCKET *)(in_ECX + 0x850));
  }
  if (*(int *)(in_ECX + 0x84c) != 0) {
    *(undefined4 *)(in_ECX + 0x84c) = 0;
  }
  puVar1 = (undefined4 *)(in_ECX + 0x3c);
  iVar2 = 0x80;
  do {
    puVar1[-2] = 0xffffffff;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


// ==== 10402610 FUN_10402610

void FUN_10402610(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_104021f0(param_2,param_3,param_4,&stack0x00000014);
  return;
}


// ==== 10402640 FUN_10402640

void FUN_10402640(char *param_1,char param_2,int param_3)

{
  for (; (0 < param_3 && (*param_1 != param_2)); param_1 = param_1 + 1) {
    param_3 = param_3 + -1;
  }
  return;
}


// ==== 104026b0 FUN_104026b0

short * FUN_104026b0(int param_1,short *param_2,char *param_3)

{
  int *piVar1;
  uint *puVar2;
  short sVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  size_t sVar6;
  char *_Dest;
  char *pcVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int *piVar11;
  
  pcVar7 = param_3;
  if (*(int *)(param_1 + 0x4ef8) == 0) {
    return param_2;
  }
  iVar8 = (int)*param_3;
  if (iVar8 != 0) {
    piVar11 = (int *)&param_3;
    do {
      param_3 = param_3 + 1;
      switch(iVar8) {
      case 0x51:
        puVar5 = (undefined4 *)piVar11[1];
        piVar11 = piVar11 + 1;
        if (param_2 < *(short **)(param_1 + 0x4ef8)) {
          *puVar5 = *(undefined4 *)param_2;
          puVar5[1] = *(undefined4 *)(param_2 + 2);
          param_2 = param_2 + 4;
        }
        else {
          *puVar5 = 0;
          puVar5[1] = 0;
        }
        break;
      default:
        thunk_FUN_10401a60(L"unknown type %c in %s",iVar8,pcVar7);
        break;
      case 0x53:
        puVar2 = (uint *)(piVar11 + 1);
        psVar9 = (short *)piVar11[2];
        piVar11 = piVar11 + 2;
        if (param_2 < *(short **)(param_1 + 0x4ef8)) {
          psVar9 = param_2;
          do {
            sVar3 = *psVar9;
            psVar9 = psVar9 + 1;
          } while (sVar3 != 0);
          iVar10 = (int)psVar9 - (int)(param_2 + 1) >> 1;
          iVar8 = (*puVar2 >> 1) - 1;
          if (iVar10 <= iVar8) {
            iVar8 = iVar10;
          }
          _memcpy((void *)*piVar11,param_2,iVar8 * 2);
          *(undefined2 *)(iVar8 * 2 + *piVar11) = 0;
          param_2 = param_2 + iVar10 + 1;
        }
        else {
LAB_10402743:
          *psVar9 = 0;
        }
        break;
      case 0x62:
        sVar6 = piVar11[1];
        piVar11 = piVar11 + 2;
        if (param_2 < *(short **)(param_1 + 0x4ef8)) {
          _memcpy((void *)*piVar11,param_2,sVar6);
          param_2 = (short *)((int)param_2 + sVar6);
        }
        break;
      case 99:
        piVar1 = piVar11 + 1;
        piVar11 = piVar11 + 1;
        if (param_2 < *(short **)(param_1 + 0x4ef8)) {
          *(undefined1 *)*piVar1 = (char)*param_2;
          param_2 = (short *)((int)param_2 + 1);
        }
        else {
          *(undefined1 *)*piVar1 = 0;
        }
        break;
      case 100:
        piVar1 = piVar11 + 1;
        piVar11 = piVar11 + 1;
        if (param_2 < *(short **)(param_1 + 0x4ef8)) {
          *(undefined4 *)*piVar1 = *(undefined4 *)param_2;
          param_2 = param_2 + 2;
        }
        else {
          *(undefined4 *)*piVar1 = 0;
        }
        break;
      case 0x66:
        puVar4 = (undefined8 *)piVar11[1];
        piVar11 = piVar11 + 1;
        if (param_2 < *(short **)(param_1 + 0x4ef8)) {
          *(undefined4 *)puVar4 = *(undefined4 *)param_2;
          *(undefined4 *)((int)puVar4 + 4) = *(undefined4 *)(param_2 + 2);
          param_2 = param_2 + 4;
        }
        else {
          *puVar4 = 0;
        }
        break;
      case 0x68:
        psVar9 = (short *)piVar11[1];
        piVar11 = piVar11 + 1;
        if (*(short **)(param_1 + 0x4ef8) <= param_2) goto LAB_10402743;
        *psVar9 = *param_2;
        param_2 = param_2 + 1;
        break;
      case 0x73:
        sVar6 = piVar11[1];
        _Dest = (char *)piVar11[2];
        piVar11 = piVar11 + 2;
        if (param_2 < *(short **)(param_1 + 0x4ef8)) {
          _strncpy(_Dest,(char *)param_2,sVar6);
          _Dest[sVar6 - 1] = '\0';
          iVar8 = thunk_FUN_10402640(param_2,0,sVar6);
          param_2 = (short *)(iVar8 + 1);
        }
        else {
          *_Dest = '\0';
        }
      }
      iVar8 = (int)*param_3;
    } while (iVar8 != 0);
  }
  return param_2;
}


// ==== 104029b0 FUN_104029b0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_104029b0(int *param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int len;
  char local_2000;
  undefined1 local_1fff;
  undefined1 local_1ffe [8186];
  undefined4 uStack_4;
  
  uStack_4 = 0x104029ba;
  if (param_1[0xe] != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x13bf);
    EnterCriticalSection(lpCriticalSection);
    if (param_2 != 0) {
      iVar1 = thunk_FUN_104021f0(local_1ffe,0x1ffe,param_2,&stack0x0000000c);
      if (iVar1 != 0) {
        len = iVar1 + 2;
        local_2000 = (char)len;
        local_1fff = (undefined1)((uint)len >> 8);
        if (param_1[0x142f] != 0) {
          (**(code **)(*param_1 + 0x78))(local_1ffe,param_1 + 0x1430,iVar1);
        }
        send(param_1[0xe],&local_2000,len,0);
        param_1[0x125e] = param_1[0x125e] + len;
        param_1[0x125f] = param_1[0x125f] + len;
      }
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}


// ==== 10402ab0 FUN_10402ab0

void FUN_10402ab0(int param_1,int param_2,ushort param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (param_2 + 7U >> 2 & 0x3ffffffe) - 1;
  uVar1 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = uVar1 & 0xff;
      uVar1 = uVar1 + 1;
      *(uint *)(param_1 + -4 + uVar1 * 4) =
           *(uint *)(&DAT_10a56e90 + (uVar3 ^ param_3 & 0xff ^ (uint)(param_3 >> 8)) * 4) ^
           *(uint *)(&DAT_10a56e90 + (param_3 & 0xff) * 4) ^
           *(uint *)(&DAT_10a56e90 + (uint)(param_3 >> 8) * 4);
    } while ((int)uVar1 < iVar2);
  }
  if ((int)(uVar1 * 4) < param_2) {
    _memset((void *)(uVar1 * 4 + param_1),0x6c,param_2 + uVar1 * -4);
  }
  return;
}


// ==== 10402b50 FUN_10402b50

void FUN_10402b50(void)

{
  int in_ECX;
  
  if (*(SOCKET *)(in_ECX + 0x38) != 0) {
    closesocket(*(SOCKET *)(in_ECX + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x4efc));
  }
  *(undefined4 *)(in_ECX + 0x38) = 0;
  return;
}


// ==== 10402b80 FUN_10402b80

void FUN_10402b80(void)

{
  UObject *in_ECX;
  
  if (*(SOCKET *)(in_ECX + 0x38) != 0) {
    closesocket(*(SOCKET *)(in_ECX + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x4efc));
  }
  *(undefined4 *)(in_ECX + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x10402ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UObject::ShutdownAfterError(in_ECX);
  return;
}


// ==== 10402bc0 FUN_10402bc0

void FUN_10402bc0(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int in_ECX;
  
  sVar1 = (short)((uint)param_2 >> 0x10);
  if (sVar1 != 0) {
    if (sVar1 == 0x274d) {
      thunk_FUN_10401a60(L"Connection refused by server");
    }
    return;
  }
  iVar2 = WSAAsyncSelect(*(SOCKET *)(in_ECX + 0x38),*(HWND *)(in_ECX + 0x34),0x508,0x25);
  if (iVar2 != 0) {
    iVar2 = WSAGetLastError();
    thunk_FUN_10401a60(L"WSAAsyncSelect Error : %d : %d",iVar2,*(undefined4 *)(in_ECX + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x4efc));
    return;
  }
  thunk_FUN_10401a60(L"Connected! ^o^//",L"Message",0);
  return;
}


// ==== 10402c60 FUN_10402c60

void FUN_10402c60(int param_1,uint param_2)

{
  int iVar1;
  int *in_ECX;
  WCHAR local_220 [260];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e630;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdd4;
  local_8 = 0;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x13bf));
  if ((short)(param_2 >> 0x10) == 0) {
    switch(param_2 & 0xffff) {
    case 1:
      do {
        if (in_ECX[0x16fc] == 0) {
          local_18 = recv(in_ECX[0xe],(char *)(in_ECX[0x16fb] + 0x850 + (int)in_ECX),
                          2 - in_ECX[0x16fb],0);
          if (0 < local_18) {
            in_ECX[0x16fb] = in_ECX[0x16fb] + local_18;
          }
          if (in_ECX[0x16fb] == 2) {
            *(short *)(in_ECX + 0x16fa) = (short)in_ECX[0x214];
            if (in_ECX[0x16fa] < 2) {
              thunk_FUN_10401a60(L"packet size is under 2 something wrong!");
            }
            else {
              in_ECX[0x16fc] = 1;
            }
          }
        }
        else if (in_ECX[0x16fc] == 1) {
          local_18 = recv(in_ECX[0xe],(char *)(in_ECX[0x16fb] + 0x850 + (int)in_ECX),
                          in_ECX[0x16fa] - in_ECX[0x16fb],0);
          if (0 < local_18) {
            in_ECX[0x16fb] = in_ECX[0x16fb] + local_18;
          }
          if (in_ECX[0x16fb] == in_ECX[0x16fa]) {
            (**(code **)(*in_ECX + 0x74))(in_ECX + 0x214,in_ECX[0x16fa]);
            in_ECX[0x16fa] = 0;
            in_ECX[0x16fb] = 0;
            in_ECX[0x16fc] = 0;
          }
        }
        iVar1 = recv(in_ECX[0xe],(char *)&local_18,1,2);
      } while (0 < iVar1);
      break;
    case 2:
      MessageBoxW((HWND)in_ECX[0xd],local_220,L"FD_WRITE",0);
      break;
    default:
      thunk_FUN_10401a60(L"102 arrive %d:%d",param_1,param_2);
      break;
    case 4:
      MessageBoxW((HWND)in_ECX[0xd],local_220,L"FD_OOB",0);
      break;
    case 0x20:
      break;
    }
  }
  else if (((short)param_2 == 0x20) && (param_1 == in_ECX[0xe])) {
    (**(code **)(**(int **)(DAT_10b1f538 + 0x54) + 0x314))(0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x13bf));
  ExceptionList = local_10;
  return;
}


// ==== 10402e52 Catch@10402e52

void Catch_10402e52(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x1c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x18,&DAT_10914c48);
}


// ==== 10402e66 Catch@10402e66

void Catch_10402e66(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"CAuthSocket::OnUserNetmessage");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10402f50 FUN_10402f50

void FUN_10402f50(int param_1,int param_2)

{
  undefined1 uVar1;
  void *_Dst;
  undefined1 *puVar2;
  int *in_ECX;
  int unaff_ESI;
  
  if (in_ECX[0x142f] != 0) {
    (**(code **)(*in_ECX + 0x84))(param_1 + 2,param_2 + -2);
  }
  uVar1 = *(undefined1 *)(param_1 + 2);
  if (param_2 + -2 == 0) {
    thunk_FUN_10401a60(L"length is under 0 b");
    return;
  }
  _Dst = (void *)(**(code **)**(undefined4 **)GMalloc_exref)(param_2 + -2,L"NetCmd");
  _memcpy(_Dst,(void *)(param_1 + 3),param_2 - 3);
  *(undefined1 *)((int)_Dst + param_2 + -3) = 0;
  puVar2 = (undefined1 *)(**(code **)**(undefined4 **)GMalloc_exref)(0xc,L"NetPacket");
  *(void **)(puVar2 + 8) = _Dst;
  *puVar2 = uVar1;
  *(int *)(puVar2 + 4) = param_2 + -3;
  if (DAT_10b1f538 != (int *)0x0) {
    (**(code **)(*DAT_10b1f538 + 0x84))(puVar2);
  }
  *(int *)(unaff_ESI + 0x4850) = *(int *)(unaff_ESI + 0x4850) + 1;
  return;
}


// ==== 10403040 FUN_10403040

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10403040(int *param_1,int param_2)

{
  int local_2004;
  char local_2000;
  undefined1 local_1fff;
  undefined1 local_1ffe [8186];
  undefined4 uStack_4;
  
  uStack_4 = 0x1040304a;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13bf));
  if ((param_2 != 0) && (param_1 != (int *)0x0)) {
    _memset(&local_2000,0,0x2000);
    local_2004 = thunk_FUN_104021f0(local_1ffe,0x1ffe,param_2,&stack0x0000000c);
    if (local_2004 != 0) {
      if (param_1[0x142f] != 0) {
        (**(code **)(*param_1 + 0x80))(local_1ffe,&local_2004);
      }
      local_2004 = local_2004 + 2;
      local_2000 = (char)local_2004;
      local_1fff = (undefined1)((uint)local_2004 >> 8);
      send(param_1[0xe],&local_2000,local_2004,0);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13bf));
  return;
}


// ==== 10403140 FUN_10403140

void FUN_10403140(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  uVar1 = *param_2 + 7 & 0xfffffff8;
  *param_2 = uVar1;
  iVar2 = (int)uVar1 >> 2;
  uVar1 = 0;
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      uVar1 = uVar1 ^ *(uint *)(param_1 + iVar3 * 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  *(uint *)(param_1 + iVar3 * 4) = uVar1;
  *param_2 = *param_2 + 8;
  if (*(int *)(in_ECX + 0x50b8) != 0) {
    thunk_FUN_103ff570(param_1,param_2);
    return;
  }
  thunk_FUN_103ff640(param_1,param_2);
  return;
}


// ==== 104031c0 FUN_104031c0

void FUN_104031c0(undefined4 param_1,uint param_2)

{
  int in_ECX;
  
  if ((param_2 & 7) != 0) {
    return;
  }
  if (*(int *)(in_ECX + 0x50b8) != 0) {
    thunk_FUN_103ff5e0();
    return;
  }
  thunk_FUN_103ff6a0();
  return;
}


// ==== 10403200 FUN_10403200

void FUN_10403200(void)

{
  return;
}


// ==== 10403210 FUN_10403210

void FUN_10403210(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x48);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x4ef0) = 1;
    appMemset((void *)(iVar1 + 0x4980),0,0x3fc);
  }
  return;
}


// ==== 10403250 FUN_10403250

void FUN_10403250(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x48) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x48) + 0x4ef0) = 0;
  }
  return;
}


// ==== 10403270 FUN_10403270

void FUN_10403270(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x48);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x4ef4) = 1;
    appMemset((void *)(iVar1 + 0x4d7c),0,0x174);
  }
  return;
}


// ==== 104032b0 FUN_104032b0

void FUN_104032b0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x48) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x48) + 0x4ef4) = 0;
  }
  return;
}


// ==== 104032d0 FUN_104032d0

undefined4 FUN_104032d0(void)

{
  return DAT_10b20f30;
}


// ==== 104032e0 FUN_104032e0

void FUN_104032e0(undefined4 *param_1)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(int *)(in_ECX + 0x48) + 0x4f64);
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


// ==== 10403310 FUN_10403310

int FUN_10403310(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x48) + 0x5024;
}


// ==== 10403320 FUN_10403320

void FUN_10403320(int *param_1)

{
  int in_ECX;
  
  *param_1 = *(int *)(in_ECX + 0x48) + 0x4f50;
  return;
}


// ==== 1040336f Catch@1040336f

void Catch_1040336f(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10403383 Catch@10403383

void Catch_10403383(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::GetPartyInfoMap");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104033c0 FUN_104033c0

void FUN_104033c0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e650;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x48) != 0) {
    ExceptionList = &local_10;
    thunk_FUN_10401ac0();
  }
  ExceptionList = local_10;
  return;
}


// ==== 1040340c Catch@1040340c

void Catch_1040340c(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10403420 Catch@10403420

void Catch_10403420(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RefreshWSAAsyncSelect");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10403460 FUN_10403460

undefined4 FUN_10403460(void)

{
  code cVar1;
  int *piVar2;
  size_t _Size;
  char *_Str;
  long lVar3;
  undefined4 *_Memory;
  int in_ECX;
  short sVar4;
  int unaff_EBP;
  wchar_t local_18 [12];
  
  if ((*(int *)GLanguageType_exref == 0) || (*(int *)GLanguageType_exref == 2)) {
    DAT_10b1f52c = 1;
    DAT_10b1f524 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_10400220,&DAT_10b1f528,0,
                                (LPDWORD)0x0);
  }
  if (*(int *)(*(int *)(in_ECX + 0x4c) + 0x38) != 0) {
    cVar1 = *GL2ClientOrder_exref;
    builtin_wcsncpy(local_18,L"package.dat",0xc);
    sVar4 = 0;
    piVar2 = (int *)(**(code **)(**(int **)GFileManager_exref + 8))(local_18,0);
    if (piVar2 != (int *)0x0) {
      _Size = (**(code **)(*piVar2 + 0x2c))();
      _Str = _malloc(_Size);
      (**(code **)(*piVar2 + 4))(_Str,_Size);
      lVar3 = _atol(_Str);
      sVar4 = (short)lVar3;
      (**(code **)*piVar2)(1);
      _free(_Str);
      in_ECX = unaff_EBP;
      piVar2 = (int *)(**(code **)(**(int **)GFileManager_exref + 0xc))
                                (&stack0xffffffd0,0,*(undefined4 *)GNull_exref);
      if (piVar2 != (int *)0x0) {
        _Memory = _malloc(4);
        *_Memory = 0x39393939;
        (**(code **)(*piVar2 + 4))(_Memory,4);
        (**(code **)(*piVar2 + 0x54))();
        (**(code **)*piVar2)(1);
        _free(_Memory);
      }
    }
    (**(code **)(**(int **)(in_ECX + 0x4c) + 0x68))
              (*(int **)(in_ECX + 0x4c),"cxddddddhc",0,0x80,DAT_10b1f538 + 100,
               *(undefined4 *)(in_ECX + 0xe4),*(undefined4 *)(DAT_10c51044 + 0x36c),
               *(undefined4 *)(DAT_10c51044 + 0x370),*(undefined4 *)(DAT_10c51044 + 0x374),
               *(undefined4 *)(DAT_10c51044 + 0x378),8,(int)sVar4,(int)(char)((char)cVar1 + -1));
    appMemset((void *)(DAT_10b1f538 + 100),0,0x80);
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(*(FOutputDevice **)(DAT_10c51044 + 0x36c),*(ushort **)GLog_exref);
    }
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10403720 FUN_10403720

undefined4 FUN_10403720(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x4c);
  if (piVar1[0xe] != 0) {
    (**(code **)(*piVar1 + 0x68))
              (piVar1,"cddddd",7,*(undefined4 *)(in_ECX + 0xe4),
               *(undefined4 *)(DAT_10c51044 + 0x36c),*(undefined4 *)(DAT_10c51044 + 0x370),
               *(undefined4 *)(DAT_10c51044 + 0x374),*(undefined4 *)(DAT_10c51044 + 0x378));
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2((FOutputDevice *)GLog_exref,*(ushort **)GLog_exref);
    }
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10403800 FUN_10403800

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 FUN_10403800(undefined4 param_1)

{
  byte *_Dst;
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  char *pcVar6;
  int iVar7;
  undefined4 local_4210;
  undefined2 local_420c;
  undefined1 local_4208 [4];
  undefined1 local_4204 [128];
  char local_4184 [196];
  byte abStack_40c0 [64];
  byte abStack_4080 [13];
  uint auStack_4073 [9];
  uint auStack_404c [3];
  byte abStack_4040 [13];
  undefined4 auStack_4033 [12];
  undefined1 auStack_4000 [16380];
  undefined4 uStack_4;
  
  uStack_4 = 0x1040380a;
  uVar4 = appRand();
  uVar4 = uVar4 & 0x8000007f;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xffffff80) + 1;
  }
  iVar7 = 0;
  do {
    iVar5 = appRand();
    (&DAT_10b1b490)[iVar7] = (char)iVar5;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x80);
  iVar5 = uVar4 * 0x81;
  _Dst = abStack_4080 + iVar5;
  _memcpy(_Dst,&DAT_10b1b490,0x80);
  auStack_4000[iVar5] = 0;
  _memcpy(_Dst,(void *)(in_ECX + 0xe8),0x80);
  iVar7 = 0x40;
  do {
    _Dst[iVar7] = _Dst[iVar7] ^ abStack_40c0[iVar7 + iVar5];
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x80);
  *(uint *)((int)auStack_4073 + iVar5) =
       *(uint *)((int)auStack_4073 + iVar5) ^ *(uint *)((int)auStack_404c + iVar5);
  iVar7 = 0;
  do {
    _Dst[iVar7] = _Dst[iVar7] ^ abStack_4040[iVar7 + iVar5];
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x40);
  uVar1 = *(undefined4 *)((int)auStack_4033 + iVar5);
  *(undefined4 *)((int)auStack_4033 + iVar5) = *(undefined4 *)_Dst;
  *(undefined4 *)_Dst = uVar1;
  local_4210 = 0x30303031;
  local_420c = 0x31;
  local_4184[0] = '\0';
  _memset(local_4184 + 1,0,0x100);
  iVar7 = 0;
  pcVar6 = local_4184;
  do {
    bVar2 = _Dst[iVar7] >> 4;
    if (bVar2 < 10) {
      cVar3 = bVar2 + 0x30;
    }
    else {
      cVar3 = bVar2 + 0x37;
    }
    bVar2 = _Dst[iVar7] & 0xf;
    *pcVar6 = cVar3;
    if (bVar2 < 10) {
      cVar3 = bVar2 + 0x30;
    }
    else {
      cVar3 = bVar2 + 0x37;
    }
    pcVar6[1] = cVar3;
    iVar7 = iVar7 + 1;
    pcVar6 = pcVar6 + 2;
  } while (iVar7 < 0x80);
  appMemset(local_4204,0,0x80);
  if (*(int *)GL2CurrentTxtCodec_exref != 0) {
    (**(code **)(**(int **)GL2CurrentTxtCodec_exref + 8))
              (local_4184,&local_4210,&stack0x00000008,4,local_4204,local_4208,4);
  }
  (**(code **)(**(int **)(in_ECX + 0x4c) + 0x68))
            (*(int **)(in_ECX + 0x4c),&DAT_1087f644,6,param_1,0x80,local_4204);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10403a50 FUN_10403a50

undefined4 FUN_10403a50(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x4c);
  if (piVar1[0xe] != 0) {
    (**(code **)(*piVar1 + 0x68))(piVar1,&DAT_1087f698,5,DAT_10b20f34,DAT_10b20f38,4);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10403ab0 FUN_10403ab0

undefined4 FUN_10403ab0(L2ParamStack *param_1)

{
  int *piVar1;
  
  DAT_10b20f30 = L2ParamStack::Top(param_1);
  DAT_10b20f44 = L2ParamStack::Top(param_1);
  DAT_10b20f48 = L2ParamStack::Top(param_1);
  piVar1 = *(int **)(DAT_10b1f538 + 0x4c);
  if (piVar1[0xe] != 0) {
    (**(code **)(*piVar1 + 0x68))(piVar1,&DAT_1087f698,2,DAT_10b20f34,DAT_10b20f38,DAT_10b20f30);
  }
  return 1;
}


// ==== 10403b40 FUN_10403b40

void FUN_10403b40(void)

{
  int iVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x50) = 0;
  iVar1 = *(int *)(DAT_10b1f538 + 0x4c);
  if (*(SOCKET *)(iVar1 + 0x38) != 0) {
    closesocket(*(SOCKET *)(iVar1 + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x4efc));
  }
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x38) = 0;
  *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x4850) = 0;
  *(undefined4 *)(*(int *)(DAT_10b1f538 + 0x4c) + 0x4854) = 0;
  iVar1 = *(int *)(in_ECX + 0x48);
  if (*(SOCKET *)(iVar1 + 0x38) != 0) {
    closesocket(*(SOCKET *)(iVar1 + 0x38));
    DeleteCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x4efc));
  }
  *(undefined4 *)(iVar1 + 0x38) = 0;
  if (*(int *)(iVar1 + 0x495c) != 0) {
    *(undefined4 *)(iVar1 + 0x495c) = 0;
    DAT_10b1f53c = 0;
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x48) + 0x38) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 0x48) + 0x4850) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 0x48) + 0x4854) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 0x48) + 0x50bc) = 0;
  return;
}


// ==== 10403c20 FUN_10403c20

void FUN_10403c20(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  
  uVar1 = FUN_107a6660();
  uVar2 = FUN_107a6660();
  uVar3 = FUN_107a6660();
  uVar4 = FUN_107a6660();
  uVar5 = FUN_107a6660();
  uVar6 = FUN_107a6660();
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),"cdddddd",1,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10403cf0 FUN_10403cf0

void FUN_10403cf0(void)

{
  return;
}


// ==== 10403d00 FUN_10403d00

void FUN_10403d00(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 in_stack_00000014;
  
  if (0 < param_1) {
    uVar1 = FUN_107a6660();
    uVar2 = FUN_107a6660();
    uVar3 = FUN_107a6660();
    (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
              (*(int **)(in_ECX + 0x48),"cddddc",4,param_1,uVar1,uVar2,uVar3,in_stack_00000014);
    FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  }
  return;
}


// ==== 10403da0 FUN_10403da0

void FUN_10403da0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 in_stack_00000014;
  
  if (0 < param_1) {
    uVar1 = FUN_107a6660();
    uVar2 = FUN_107a6660();
    uVar3 = FUN_107a6660();
    (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
              (*(int **)(in_ECX + 0x48),"cddddc",10,param_1,uVar1,uVar2,uVar3,in_stack_00000014);
    FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  }
  return;
}


// ==== 10403e40 FUN_10403e40

void FUN_10403e40(void)

{
  return;
}


// ==== 10403e50 FUN_10403e50

void FUN_10403e50(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f8a0,2,param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10403e90 FUN_10403e90

void FUN_10403e90(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x1b,param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10403ed0 FUN_10403ed0

void FUN_10403ed0(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x1c,param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10403f10 FUN_10403f10

void FUN_10403f10(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x1d,param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10403f50 FUN_10403f50

void FUN_10403f50(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x30);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10403f90 FUN_10403f90

void FUN_10403f90(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  uVar1 = FUN_107a6660();
  uVar2 = FUN_107a6660();
  uVar3 = FUN_107a6660();
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fa3c,0x41,uVar1,uVar2,uVar3);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10404010 FUN_10404010

void FUN_10404010(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x48);
  iVar2 = *piVar1;
  uVar3 = FUN_107a6660();
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  (**(code **)(iVar2 + 0x68))(piVar1,"cdddd",0x42,param_1,uVar3);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10404080 FUN_10404080

void FUN_10404080(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x48);
  iVar2 = *piVar1;
  uVar3 = FUN_107a6660();
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  (**(code **)(iVar2 + 0x68))(piVar1,"cdddd",0x43,param_1,uVar3);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104040f0 FUN_104040f0

void FUN_104040f0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  piVar1 = *(int **)(in_ECX + 0x48);
  iVar2 = *piVar1;
  uVar3 = FUN_107a6660(in_stack_00000010,in_stack_00000014);
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  (**(code **)(iVar2 + 0x68))(piVar1,"cddddd",0x48,uVar3);
  return;
}


// ==== 10404150 FUN_10404150

void FUN_10404150(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fb50,0x4a,param_1,param_2);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 104041a0 FUN_104041a0

void FUN_104041a0(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fb50,0x4b,param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 104041e0 FUN_104041e0

undefined4
FUN_104041e0(undefined4 param_1,short param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),"cdhddd",0xd,param_1,(int)param_2,param_3,param_4,param_5);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10404240 FUN_10404240

undefined4 FUN_10404240(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0xc,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10404290 FUN_10404290

undefined4 FUN_10404290(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x62,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 104042e0 FUN_104042e0

undefined4 FUN_104042e0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0xe);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10404320 FUN_10404320

undefined4 FUN_10404320(void)

{
  int in_ECX;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000060;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),"cSdddddddddddd",0xb,&stack0x00000004,in_stack_00000034,
             in_stack_0000003c,in_stack_00000038,in_stack_0000004c,in_stack_00000040,
             in_stack_00000048,in_stack_00000054,in_stack_00000044,in_stack_00000050,
             in_stack_00000058,in_stack_0000005c,in_stack_00000060);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 104043b0 FUN_104043b0

void FUN_104043b0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int in_ECX;
  FOutputDevice *this;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x7a,pvVar1,pvVar2,pvVar3);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10404420 FUN_10404420

undefined4 FUN_10404420(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0xf);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10404460 FUN_10404460

undefined4 FUN_10404460(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x15,param_1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 104044b0 FUN_104044b0

undefined4 FUN_104044b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fa3c,0x16,1,param_2,param_4);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10404500 FUN_10404500

undefined4 FUN_10404500(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x17,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10404550 FUN_10404550

undefined4
FUN_10404550(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int in_ECX;
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
  
  if (DAT_10b1f52c != '\0') {
    WaitForSingleObject(DAT_10b1f524,10000);
    CloseHandle(DAT_10b1f524);
  }
  uVar11 = (uint)DAT_10b1f523;
  uVar12 = (uint)DAT_10b1f520;
  DAT_10b1f52c = '\0';
  iVar1 = **(int **)(in_ECX + 0x48);
  piVar2 = *(int **)(DAT_10c51044 + 0x70);
  uVar18 = (uint)DAT_10b1f522;
  uVar3 = (uint)DAT_10b1f521;
  uVar19 = (uint)DAT_10b1f51f;
  uVar4 = (uint)DAT_10b1f51e;
  uVar13 = (uint)DAT_10b1f51d;
  uVar20 = (uint)DAT_10b1f51c;
  uVar5 = (uint)DAT_10b1f51b;
  uVar14 = (uint)DAT_10b1f51a;
  uVar21 = (uint)DAT_10b1f519;
  uVar6 = (uint)DAT_10b1f518;
  uVar15 = (uint)DAT_10b1f517;
  uVar22 = (uint)DAT_10b1f516;
  uVar7 = (uint)DAT_10b1f515;
  uVar16 = (uint)DAT_10b1f514;
  uVar23 = (uint)DAT_10b1f513;
  uVar8 = (uint)DAT_10b1f512;
  uVar17 = (uint)DAT_10b1f511;
  uVar24 = (uint)DAT_10b1f510;
  iVar9 = _rand();
  uVar10 = (**(code **)(*piVar2 + 0x6c))
                     (iVar9,uVar24,uVar17,uVar8,uVar23,uVar16,uVar7,uVar22,uVar15,uVar6,uVar21,
                      uVar14,uVar5,uVar20,uVar13,uVar4,uVar19,uVar12,uVar3,uVar18,uVar11);
  (**(code **)(iVar1 + 0x68))
            (*(undefined4 *)(in_ECX + 0x48),"cbddddbdcccccccccccccccccccc",3,param_1 * 4,param_2,
             param_3,param_4,param_5,param_6,0x40,uVar10);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 104046f0 FUN_104046f0

undefined4 FUN_104046f0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fb50,0x14,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10404760 FUN_10404760

undefined4 FUN_10404760(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x48);
  iVar2 = *piVar1;
  uVar3 = FUN_107a6660();
  uVar3 = FUN_107a6660(uVar3);
  uVar3 = FUN_107a6660(uVar3);
  (**(code **)(iVar2 + 0x68))(piVar1,"cddddd",0x12,param_2,param_4,uVar3);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 104047e0 FUN_104047e0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 FUN_104047e0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int in_ECX;
  FOutputDevice *this;
  int iVar7;
  void *local_2414;
  undefined1 local_2400 [9212];
  undefined4 uStack_4;
  
  uStack_4 = 0x104047ea;
  iVar7 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  local_2414 = pvVar2;
  if (0 < (int)pvVar2) {
    do {
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      pvVar5 = L2ParamStack::Top(param_1);
      iVar6 = thunk_FUN_10402610(*(undefined4 *)(in_ECX + 0x48),local_2400 + iVar7,0x2400 - iVar7,
                                 &DAT_1087ff0c,pvVar3,pvVar4,pvVar5);
      iVar7 = iVar7 + iVar6;
      local_2414 = (void *)((int)local_2414 + -1);
    } while (local_2414 != (void *)0x0);
  }
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087ff04,0x1e,pvVar1,pvVar2,iVar7,local_2400);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 104048f0 FUN_104048f0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 FUN_104048f0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int in_ECX;
  FOutputDevice *this;
  int iVar6;
  void *local_2410;
  undefined1 local_2400 [9212];
  undefined4 uStack_4;
  
  uStack_4 = 0x104048fa;
  iVar6 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  local_2410 = pvVar2;
  if (0 < (int)pvVar2) {
    do {
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      iVar5 = thunk_FUN_10402610(*(undefined4 *)(in_ECX + 0x48),local_2400 + iVar6,0x2400 - iVar6,
                                 &DAT_1087ff44,pvVar3,pvVar4);
      iVar6 = iVar6 + iVar5;
      local_2410 = (void *)((int)local_2410 + -1);
    } while (local_2410 != (void *)0x0);
  }
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087ff04,0x1f,pvVar1,pvVar2,iVar6,local_2400);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 104049f0 FUN_104049f0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 FUN_104049f0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  void *local_2410;
  undefined1 local_2400 [9212];
  undefined4 uStack_4;
  
  uStack_4 = 0x104049fa;
  iVar6 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  local_2410 = pvVar3;
  if (0 < (int)pvVar3) {
    do {
      pvVar4 = L2ParamStack::Top(param_1);
      iVar5 = thunk_FUN_10402610(*(undefined4 *)(in_ECX + 0x48),local_2400 + iVar6,0x2400 - iVar6,
                                 &DAT_1087ff8c,pvVar4);
      iVar6 = iVar6 + iVar5;
      local_2410 = (void *)((int)local_2410 + -1);
    } while (local_2410 != (void *)0x0);
  }
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),"cdddb",0xc6,pvVar1,pvVar2,pvVar3,iVar6,local_2400);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10404ae0 FUN_10404ae0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 FUN_10404ae0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int in_ECX;
  FOutputDevice *this;
  int iVar7;
  void *local_2414;
  undefined1 local_2400 [9212];
  undefined4 uStack_4;
  
  uStack_4 = 0x10404aea;
  iVar7 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  local_2414 = pvVar2;
  if (0 < (int)pvVar2) {
    do {
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      pvVar5 = L2ParamStack::Top(param_1);
      iVar6 = thunk_FUN_10402610(*(undefined4 *)(in_ECX + 0x48),local_2400 + iVar7,0x2400 - iVar7,
                                 &DAT_1087ff0c,pvVar3,pvVar4,pvVar5);
      iVar7 = iVar7 + iVar6;
      local_2414 = (void *)((int)local_2414 + -1);
    } while (local_2414 != (void *)0x0);
  }
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087ff04,0xc3,pvVar1,pvVar2,iVar7,local_2400);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10404bf0 FUN_10404bf0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 FUN_10404bf0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int in_ECX;
  FOutputDevice *this;
  int iVar6;
  void *local_2410;
  undefined1 local_2400 [9212];
  undefined4 uStack_4;
  
  uStack_4 = 0x10404bfa;
  iVar6 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  local_2410 = pvVar2;
  if (0 < (int)pvVar2) {
    do {
      pvVar3 = L2ParamStack::Top(param_1);
      pvVar4 = L2ParamStack::Top(param_1);
      iVar5 = thunk_FUN_10402610(*(undefined4 *)(in_ECX + 0x48),local_2400 + iVar6,0x2400 - iVar6,
                                 &DAT_1087ff44,pvVar3,pvVar4);
      iVar6 = iVar6 + iVar5;
      local_2410 = (void *)((int)local_2410 + -1);
    } while (local_2410 != (void *)0x0);
  }
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087ff04,0xc4,pvVar1,pvVar2,iVar6,local_2400);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10404cf0 FUN_10404cf0

undefined4
FUN_10404cf0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int in_ECX;
  
  if (param_2 == 2) {
    (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
              (*(int **)(in_ECX + 0x48),"cdddd",0x1a,param_1,2,param_3,param_4);
  }
  else if (param_2 == 3) {
    (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
              (*(int **)(in_ECX + 0x48),"cddddd",0x1a,param_1,3,param_3,param_4,param_5);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10404d90 FUN_10404d90

undefined4 FUN_10404d90(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8a0,0x20,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10404de0 FUN_10404de0

undefined4 FUN_10404de0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8a0,0x7b,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10404e30 FUN_10404e30

undefined4 FUN_10404e30(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x7d,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10404e80 FUN_10404e80

undefined4 FUN_10404e80(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x7e,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10404ed0 FUN_10404ed0

undefined4 FUN_10404ed0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  int in_ECX;
  FOutputDevice *this;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  pvVar5 = L2ParamStack::Top(param_1);
  pvVar6 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),"cSSSSSS",0x22,pvVar1,pvVar2,pvVar3,pvVar4,pvVar5,pvVar6);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10404f80 FUN_10404f80

undefined4 FUN_10404f80(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8a0,0x21,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10404fd0 FUN_10404fd0

undefined4 FUN_10404fd0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8a0,0x7c,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10405020 FUN_10405020

undefined4 FUN_10405020(int param_1,undefined4 param_2)

{
  FOutputDevice *in_ECX;
  
  if (param_1 == 0) {
    (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x53,0);
  }
  else if (param_1 == 0xc0) {
    if (*(int *)GLog_exref != 0) {
      FOutputDevice::Logf2(in_ECX,*(ushort **)GLog_exref);
    }
  }
  else {
    (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
              (*(int **)(in_ECX + 0x48),&DAT_1088029c,0x53,param_1,param_1,param_2);
  }
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 104050d0 FUN_104050d0

undefined4 FUN_104050d0(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x68,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10405120 FUN_10405120

undefined4 FUN_10405120(int param_1,undefined4 param_2)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x48);
  if (param_1 == 0) {
    (**(code **)(*piVar1 + 0x68))(piVar1,&DAT_1088038c,0xd0,0x11,0);
  }
  else {
    (**(code **)(*piVar1 + 0x68))(piVar1,&DAT_10880384,0xd0,0x11,param_1,param_1,param_2);
  }
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 104051a0 FUN_104051a0

undefined4 FUN_104051a0(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1088038c,0xd0,0x10,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 104051f0 FUN_104051f0

undefined4 FUN_104051f0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8a0,0x67,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10405240 FUN_10405240

undefined4 FUN_10405240(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x3c);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10405280 FUN_10405280

undefined4 FUN_10405280(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8a0,0x23,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 104052d0 FUN_104052d0

undefined4 FUN_104052d0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x25,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10405320 FUN_10405320

undefined4 FUN_10405320(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8a0,0x27,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10405370 FUN_10405370

undefined4 FUN_10405370(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x28);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 104053b0 FUN_104053b0

undefined4 FUN_104053b0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fb50,0x24,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10405420 FUN_10405420

undefined4 FUN_10405420(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x26);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10405460 FUN_10405460

undefined4 FUN_10405460(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8a0,0x4d,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 104054b0 FUN_104054b0

undefined4 FUN_104054b0(void)

{
  return 1;
}


// ==== 104054c0 FUN_104054c0

undefined4 FUN_104054c0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8a0,0x4f,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10405510 FUN_10405510

undefined4 FUN_10405510(void)

{
  return 1;
}


// ==== 10405520 FUN_10405520

undefined4 FUN_10405520(void)

{
  return 1;
}


// ==== 10405530 FUN_10405530

undefined4 FUN_10405530(void)

{
  return 1;
}


// ==== 10405540 FUN_10405540

undefined4 FUN_10405540(void)

{
  return 1;
}


// ==== 10405550 FUN_10405550

undefined4 FUN_10405550(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_108806cc,0x55,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 104055c0 FUN_104055c0

undefined4 FUN_104055c0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x82,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10405620 FUN_10405620

undefined4 FUN_10405620(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x83,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10405680 FUN_10405680

undefined4 FUN_10405680(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8a0,0x85,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 104056e0 FUN_104056e0

undefined4 FUN_104056e0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x8e);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10405720 FUN_10405720

undefined4 FUN_10405720(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x84);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10405760 FUN_10405760

undefined4 FUN_10405760(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x86);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 104057a0 FUN_104057a0

undefined4 FUN_104057a0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1088029c,0x87,param_1,param_1,param_2);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 104057f0 FUN_104057f0

undefined4 FUN_104057f0(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x88,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10405840 FUN_10405840

void FUN_10405840(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),"chdSS",0xd0,0x19,param_1,param_2,param_3);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10405890 FUN_10405890

void FUN_10405890(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1088095c,0xd0,0x1a);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 104058d0 FUN_104058d0

void FUN_104058d0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_108809b4,0xd0,0x1b,param_1,param_2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10405920 FUN_10405920

void FUN_10405920(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10880a20,0xd0,0x1c,param_1,param_2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10405970 FUN_10405970

void FUN_10405970(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_108809b4,0xd0,0x1d,param_1,param_2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104059c0 FUN_104059c0

void FUN_104059c0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10880ab0,0xd0,0x1e,param_1,param_2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10405a10 FUN_10405a10

void FUN_10405a10(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int in_ECX;
  FOutputDevice *this;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),"chdSdS",0xd0,0x24,pvVar1,pvVar2,pvVar3,pvVar4);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10405aa0 FUN_10405aa0

void FUN_10405aa0(void)

{
  int iVar1;
  ushort *puVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e669;
  local_10 = ExceptionList;
  local_8 = 1;
  iVar1 = **(int **)(in_ECX + 0x48);
  ExceptionList = &local_10;
  puVar2 = FString::operator*((FString *)&stack0x00000004);
  (**(code **)(iVar1 + 0x68))(*(undefined4 *)(in_ECX + 0x48),&DAT_10880bc4,0xd0,0x20,puVar2);
  FString::operator*((FString *)&stack0x00000004);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 10405b38 Catch@10405b38

void Catch_10405b38(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10405b4c Catch@10405b4c

void Catch_10405b4c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestPCCafeCouponUse");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10405ba0 FUN_10405ba0

undefined4 FUN_10405ba0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8a0,0x5e,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10405bf0 FUN_10405bf0

undefined4 FUN_10405bf0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8a0,0x61,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10405c40 FUN_10405c40

undefined4 FUN_10405c40(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x60);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10405c80 FUN_10405c80

undefined4 FUN_10405c80(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x5f,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10405cd0 FUN_10405cd0

void FUN_10405cd0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  undefined4 uVar2;
  
  pvVar1 = L2ParamStack::Top(param_1);
  switch(pvVar1) {
  case (void *)0x0:
    pvVar1 = L2ParamStack::Top(param_1);
    uVar2 = 0;
    break;
  case (void *)0x1:
    pvVar1 = L2ParamStack::Top(param_1);
    uVar2 = 1;
    break;
  case (void *)0x2:
  case (void *)0x3:
  case (void *)0x4:
    (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
              (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0xa0,pvVar1);
  default:
    goto switchD_10405ce8_default;
  }
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10880cf0,0xa0,uVar2,pvVar1);
switchD_10405ce8_default:
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10405d90 FUN_10405d90

undefined4 FUN_10405d90(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10880d2c,0x29,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10405e00 FUN_10405e00

undefined4 FUN_10405e00(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x2a,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10405e50 FUN_10405e50

undefined4 FUN_10405e50(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x2b);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10405e90 FUN_10405e90

undefined4 FUN_10405e90(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8a0,0x2c,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10405ee0 FUN_10405ee0

undefined4 FUN_10405ee0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x2d);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10405f20 FUN_10405f20

void FUN_10405f20(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int in_ECX;
  FOutputDevice *this;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fa3c,0x6f,pvVar1,pvVar2,pvVar3);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10405f90 FUN_10405f90

void FUN_10405f90(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  int in_ECX;
  FOutputDevice *this;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  pvVar5 = L2ParamStack::Top(param_1);
  pvVar6 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),"cdddddS",0x70,pvVar1,pvVar2,pvVar3,pvVar4,pvVar5,pvVar6);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10406040 FUN_10406040

void FUN_10406040(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int in_ECX;
  FOutputDevice *this;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),"cdddd",0x71,pvVar1,pvVar2,pvVar3,pvVar4);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104060d0 FUN_104060d0

void FUN_104060d0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10880bc4,0xd0,4,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10406120 FUN_10406120

void FUN_10406120(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e680;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1088095c,0xd0,8);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 1040618d Catch@1040618d

void Catch_1040618d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 104061a1 Catch@104061a1

void Catch_104061a1(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestManorList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104061f0 FUN_104061f0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_104061f0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined1 local_2438 [9224];
  void *local_30;
  void *local_2c;
  void *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e690;
  local_10 = ExceptionList;
  local_18 = 0x10406213;
  local_14 = &stack0xffffdbbc;
  iVar4 = 0;
  local_8 = 0;
  local_20 = 0;
  ExceptionList = &local_10;
  local_24 = L2ParamStack::Top(param_1);
  for (local_18 = 0; local_18 < (int)local_24; local_18 = local_18 + 1) {
    local_30 = L2ParamStack::Top(param_1);
    local_2c = L2ParamStack::Top(param_1);
    pvVar1 = L2ParamStack::Top(param_1);
    pvVar2 = L2ParamStack::Top(param_1);
    iVar3 = thunk_FUN_10402610(*(undefined4 *)(local_1c + 0x48),local_2438 + iVar4,0x2400 - iVar4,
                               &DAT_108810b0,local_30,local_2c,pvVar1,pvVar2);
    iVar4 = iVar4 + iVar3;
    local_20 = iVar4;
  }
  (**(code **)(**(int **)(local_1c + 0x48) + 0x68))
            (*(int **)(local_1c + 0x48),&DAT_10880384,0xd0,9,local_24,iVar4,local_2438);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 104062e8 Catch@104062e8

void Catch_104062e8(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x30);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10914c48);
}


// ==== 104062fc Catch@104062fc

void Catch_104062fc(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestProcureCropList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10406370 FUN_10406370

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10406370(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  FOutputDevice *this;
  int iVar4;
  undefined1 local_243c [9224];
  void *local_34;
  void *local_30;
  void *local_28;
  void *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e6a0;
  local_10 = ExceptionList;
  local_18 = 0x10406393;
  local_14 = &stack0xffffdbb8;
  iVar4 = 0;
  local_8 = 0;
  local_20 = 0;
  ExceptionList = &local_10;
  local_24 = L2ParamStack::Top(param_1);
  local_30 = L2ParamStack::Top(param_1);
  for (local_18 = 0; local_18 < (int)local_30; local_18 = local_18 + 1) {
    local_28 = L2ParamStack::Top(param_1);
    local_34 = L2ParamStack::Top(param_1);
    pvVar1 = L2ParamStack::Top(param_1);
    pvVar2 = L2ParamStack::Top(param_1);
    iVar3 = thunk_FUN_10402610(*(undefined4 *)(local_1c + 0x48),local_243c + iVar4,0x2400 - iVar4,
                               &DAT_10881140,local_28,local_34,pvVar1,(int)(char)pvVar2);
    iVar4 = iVar4 + iVar3;
    local_20 = iVar4;
  }
  (**(code **)(**(int **)(local_1c + 0x48) + 0x68))
            (*(int **)(local_1c + 0x48),"chddb",0xd0,0xb,local_24,local_30,iVar4,local_243c);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 10406478 Catch@10406478

void Catch_10406478(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x34);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x28,&DAT_10914c48);
}


// ==== 1040648c Catch@1040648c

void Catch_1040648c(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestSetCrop");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10406500 FUN_10406500

void FUN_10406500(void)

{
  ushort *puVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e6b9;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  puVar1 = FString::operator*((FString *)&stack0x00000004);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10880bc4,0xd0,0xc,puVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  local_8 = 0xffffffff;
  FString::~FString((FString *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


// ==== 10406589 Catch@10406589

void Catch_10406589(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 1040659d Catch@1040659d

void Catch_1040659d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestWriteHeroWords");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104065f0 FUN_104065f0

void FUN_104065f0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e6d0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1088095c,0xd0,0x12);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 1040665d Catch@1040665d

void Catch_1040665d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10406671 Catch@10406671

void Catch_10406671(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestOlympiadObserverEnd");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 104066c0 FUN_104066c0

void FUN_104066c0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e6e0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1088095c,0xd0,0x13);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 1040672d Catch@1040672d

void Catch_1040672d(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10406741 Catch@10406741

void Catch_10406741(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestOlympiadMatchList");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10406790 FUN_10406790

void FUN_10406790(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1088038c,0xd0,1,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104067e0 FUN_104067e0

void FUN_104067e0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10880ab0,0xd0,2,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10406830 FUN_10406830

void FUN_10406830(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10880ab0,0xd0,3,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10406880 FUN_10406880

void FUN_10406880(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10880ab0,0xd0,5,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104068f0 FUN_104068f0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_104068f0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  void *local_2408;
  undefined1 local_2400 [9212];
  undefined4 uStack_4;
  
  uStack_4 = 0x104068fa;
  iVar5 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  local_2408 = pvVar1;
  if (0 < (int)pvVar1) {
    do {
      pvVar2 = L2ParamStack::Top(param_1);
      pvVar3 = L2ParamStack::Top(param_1);
      iVar4 = thunk_FUN_10402610(*(undefined4 *)(in_ECX + 0x48),local_2400 + iVar5,0x2400 - iVar5,
                                 &DAT_1087ff44,pvVar2,pvVar3);
      iVar5 = iVar5 + iVar4;
      local_2408 = (void *)((int)local_2408 + -1);
    } while (local_2408 != (void *)0x0);
  }
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1088029c,0x31,pvVar1,iVar5,local_2400);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104069d0 FUN_104069d0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_104069d0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  void *local_2408;
  undefined1 local_2400 [9212];
  undefined4 uStack_4;
  
  uStack_4 = 0x104069da;
  iVar5 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  local_2408 = pvVar1;
  if (0 < (int)pvVar1) {
    do {
      pvVar2 = L2ParamStack::Top(param_1);
      pvVar3 = L2ParamStack::Top(param_1);
      iVar4 = thunk_FUN_10402610(*(undefined4 *)(in_ECX + 0x48),local_2400 + iVar5,0x2400 - iVar5,
                                 &DAT_1087ff44,pvVar2,pvVar3);
      iVar5 = iVar5 + iVar4;
      local_2408 = (void *)((int)local_2408 + -1);
    } while (local_2408 != (void *)0x0);
  }
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1088029c,0x32,pvVar1,iVar5,local_2400);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10406ab0 FUN_10406ab0

void FUN_10406ab0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),"cdddd",0x33,pvVar1,pvVar2,pvVar3,pvVar4);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10406b40 FUN_10406b40

void FUN_10406b40(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int in_ECX;
  FOutputDevice *this;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f698,0x34,pvVar1,pvVar2,(uint)pvVar3 & 0xff);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10406bc0 FUN_10406bc0

void FUN_10406bc0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1080e6f0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x35,pvVar1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  ExceptionList = local_10;
  return;
}


// ==== 10406c39 Catch@10406c39

void Catch_10406c39(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x14,&DAT_10914c48);
}


// ==== 10406c4d Catch@10406c4d

void Catch_10406c4d(void)

{
  appUnwindf((ushort *)&DAT_10851d80,L"UNetworkHandler::RequestShortCutDel");
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// ==== 10406ca0 FUN_10406ca0

void FUN_10406ca0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1088095c,0x37,(int)(short)pvVar1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10406cf0 FUN_10406cf0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10406cf0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  int iVar12;
  int in_ECX;
  FOutputDevice *this;
  int iVar13;
  uint local_2018;
  undefined1 local_2000 [8188];
  undefined4 uStack_4;
  
  uStack_4 = 0x10406cfa;
  iVar13 = 0;
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  pvVar5 = L2ParamStack::Top(param_1);
  pvVar6 = L2ParamStack::Top(param_1);
  if ((char)pvVar6 != '\0') {
    local_2018 = (uint)pvVar6 & 0xff;
    do {
      pvVar7 = L2ParamStack::Top(param_1);
      pvVar8 = L2ParamStack::Top(param_1);
      pvVar9 = L2ParamStack::Top(param_1);
      pvVar10 = L2ParamStack::Top(param_1);
      pvVar11 = L2ParamStack::Top(param_1);
      iVar12 = thunk_FUN_10402610(*(undefined4 *)(in_ECX + 0x48),local_2000 + iVar13,0x2000 - iVar13
                                  ,"ccdcS",(uint)pvVar7 & 0xff,(uint)pvVar8 & 0xff,pvVar9,
                                  (uint)pvVar10 & 0xff,pvVar11);
      iVar13 = iVar13 + iVar12;
      local_2018 = local_2018 - 1;
    } while (local_2018 != 0);
    pvVar6 = (void *)((uint)pvVar6 & 0xff);
  }
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),"cdSSSccb",0xc1,pvVar1,pvVar2,pvVar3,pvVar4,
             (uint)pvVar5 & 0xff,(uint)pvVar6 & 0xff,iVar13,local_2000);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10406e70 FUN_10406e70

void FUN_10406e70(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0xcd);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10406eb0 FUN_10406eb0

void FUN_10406eb0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0xc2,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10406f00 FUN_10406f00

void FUN_10406f00(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int in_ECX;
  FOutputDevice *this;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087ff0c,0x2e,pvVar2,pvVar1,pvVar3);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10406f70 FUN_10406f70

void FUN_10406f70(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int in_ECX;
  FOutputDevice *this;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f698,0x2f,pvVar1,pvVar2,(uint)pvVar3 & 0xff);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10406ff0 FUN_10406ff0

void FUN_10406ff0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  int in_ECX;
  FOutputDevice *this;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  pvVar4 = L2ParamStack::Top(param_1);
  pvVar5 = L2ParamStack::Top(param_1);
  pvVar6 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),"chdddddc",0xd0,0x2f,pvVar1,pvVar2,pvVar3,pvVar4,pvVar5,
             (uint)pvVar6 & 0xff);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104070b0 FUN_104070b0

void FUN_104070b0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  if (pvVar2 != (void *)0x0) {
    if (pvVar1 == (void *)0x2) {
      (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
                (*(int **)(in_ECX + 0x48),&DAT_108818b4,0x38,pvVar2,2,pvVar3);
    }
    else {
      (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
                (*(int **)(in_ECX + 0x48),&DAT_10880d2c,0x38,pvVar2,pvVar1);
    }
    FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  }
  return;
}


// ==== 10407150 FUN_10407150

void FUN_10407150(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,9);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10407190 FUN_10407190

void FUN_10407190(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10881940,0x39,0,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104071e0 FUN_104071e0

void FUN_104071e0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10881940,0x39,1,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10407230 FUN_10407230

void FUN_10407230(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_108819c8,0x39,3,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104072a0 FUN_104072a0

void FUN_104072a0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_10881a1c,0x39,2);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 104072e0 FUN_104072e0

void FUN_104072e0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fb50,0x10,pvVar1,pvVar2);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10407350 FUN_10407350

void FUN_10407350(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x11,pvVar1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 104073a0 FUN_104073a0

void FUN_104073a0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x3f);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 104073e0 FUN_104073e0

void FUN_104073e0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x3e);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10407420 FUN_10407420

void FUN_10407420(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x44,pvVar1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10407470 FUN_10407470

void FUN_10407470(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int in_ECX;
  FOutputDevice *this;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f698,0x45,pvVar1,pvVar2,(uint)pvVar3 & 0xff);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104074f0 FUN_104074f0

void FUN_104074f0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  uVar1 = FUN_107a6660();
  uVar2 = FUN_107a6660();
  uVar3 = FUN_107a6660();
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),"cdddd",4,param_1,uVar1,uVar2,uVar3);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10407570 FUN_10407570

void FUN_10407570(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x46);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 104075b0 FUN_104075b0

void FUN_104075b0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x6d,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10407600 FUN_10407600

void FUN_10407600(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,0x47);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10407640 FUN_10407640

void FUN_10407640(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fb50,0x49,pvVar1,pvVar2);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 104076b0 FUN_104076b0

void FUN_104076b0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x57,1);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 104076f0 FUN_104076f0

void FUN_104076f0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8a0,0x5b,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10407740 FUN_10407740

void FUN_10407740(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fb50,0x59,param_1,param_2);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10407790 FUN_10407790

undefined4 FUN_10407790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fb50,0x59,param_2,param_4);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 104077e0 FUN_104077e0

void FUN_104077e0(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fb50,0x72,param_1,param_2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10407830 FUN_10407830

undefined4 FUN_10407830(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1087f9dc,99);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return 1;
}


// ==== 10407870 FUN_10407870

undefined4 FUN_10407870(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,100,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 104078c0 FUN_104078c0

undefined4 FUN_104078c0(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087f8f8,0x58,param_1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return 1;
}


// ==== 10407910 FUN_10407910

void FUN_10407910(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10880bc4,0xd0,0xd,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10407960 FUN_10407960

void FUN_10407960(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10880ab0,0xd0,0xe,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 104079d0 FUN_104079d0

void FUN_104079d0(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10880bc4,0xd0,0xf,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10407a20 FUN_10407a20

void FUN_10407a20(L2ParamStack *param_1)

{
  void *pvVar1;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1088038c,0xd0,0x26,pvVar1);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10407a70 FUN_10407a70

void FUN_10407a70(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int in_ECX;
  FOutputDevice *this;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fa3c,0x6b,pvVar1,pvVar2,pvVar3);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10407ae0 FUN_10407ae0

void FUN_10407ae0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int in_ECX;
  FOutputDevice *this;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  pvVar3 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_1087fa3c,0x6c,pvVar1,pvVar2,pvVar3);
  FOutputDevice::Logf(this,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10407b50 FUN_10407b50

void FUN_10407b50(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10880ab0,0xd0,6,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10407bc0 FUN_10407bc0

void FUN_10407bc0(L2ParamStack *param_1)

{
  void *pvVar1;
  void *pvVar2;
  int in_ECX;
  
  pvVar1 = L2ParamStack::Top(param_1);
  pvVar2 = L2ParamStack::Top(param_1);
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))
            (*(int **)(in_ECX + 0x48),&DAT_10880ab0,0xd0,7,pvVar1,pvVar2);
  FOutputDevice::Logf((FOutputDevice *)GNetworkLog_exref,*(ushort **)GNetworkLog_exref);
  return;
}


// ==== 10407c30 FUN_10407c30

void FUN_10407c30(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1088095c,0xd0,0x1f);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10407c70 FUN_10407c70

void FUN_10407c70(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1088095c,0xd0,0x22);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10407cb0 FUN_10407cb0

void FUN_10407cb0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x48) + 0x68))(*(int **)(in_ECX + 0x48),&DAT_1088095c,0xd0,0x23);
  FOutputDevice::Logf(*(FOutputDevice **)GNetworkLog_exref,
                      (ushort *)*(FOutputDevice **)GNetworkLog_exref);
  return;
}


// ==== 10407cf0 FUN_10407cf0

float10 FUN_10407cf0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (iVar3 = param_1[1], iVar3 == 0)) ||
     (iVar1 = param_2[1], iVar1 == 0)) goto LAB_10407dfb;
  iVar2 = *param_1;
  local_24 = 0.0;
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = 0.0;
  local_14 = 0.0;
  local_10 = 0.0;
  if (iVar2 == 1) {
    iVar3 = *(int *)(iVar3 + 0x204);
LAB_10407d5d:
    if (iVar3 == 0) goto LAB_10407dfb;
    local_24 = *(float *)(iVar3 + 0x1bc);
    local_20 = *(float *)(iVar3 + 0x1c0);
    local_1c = *(float *)(iVar3 + 0x1c4);
  }
  else {
    if (iVar2 == 2) {
      iVar3 = *(int *)(iVar3 + 0x10);
      goto LAB_10407d5d;
    }
    if (iVar2 == 3) {
      iVar3 = *(int *)(iVar3 + 4);
      goto LAB_10407d5d;
    }
  }
  iVar3 = *param_2;
  if (iVar3 == 1) {
    iVar3 = *(int *)(iVar1 + 0x204);
  }
  else if (iVar3 == 2) {
    iVar3 = *(int *)(iVar1 + 0x10);
  }
  else {
    if (iVar3 != 3) goto LAB_10407dc6;
    iVar3 = *(int *)(iVar1 + 4);
  }
  if (iVar3 == 0) {
LAB_10407dfb:
    return (float10)-1.0;
  }
  local_18 = *(float *)(iVar3 + 0x1bc);
  local_14 = *(float *)(iVar3 + 0x1c0);
  local_10 = *(float *)(iVar3 + 0x1c4);
LAB_10407dc6:
  local_c = local_24 - local_18;
  local_8 = local_20 - local_14;
  local_4 = local_1c - local_10;
  fVar4 = FVector::Size((FVector *)&local_c);
  return (float10)fVar4;
}


// ==== 10407e50 FUN_10407e50

undefined4 FUN_10407e50(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar1 = param_2[1];
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  switch(param_1) {
  case 1:
    if (*param_2 == 2) {
      return 1;
    }
    break;
  case 2:
    if (((*param_2 == 1) && (*(int *)(iVar1 + 0x10) != 0)) &&
       ((*(int *)(iVar1 + 0x204) != 0 &&
        ((iVar1 = *(int *)(*(int *)(iVar1 + 0x204) + 0x14d8), iVar1 != 0 &&
         ((*(byte *)(iVar1 + 0x41c) & 1) == 0)))))) {
      return 1;
    }
    break;
  case 3:
    if (((*param_2 == 1) && (*(int *)(iVar1 + 8) == 0)) && (*(int *)(iVar1 + 0x10) == 0)) {
      return 1;
    }
    break;
  case 4:
    if (*param_2 != 1) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 0x24c);
    goto LAB_10407ee8;
  case 5:
    if (*param_2 != 1) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 8);
LAB_10407ee8:
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar1 + 0x10);
LAB_10407eee:
      if (iVar1 == 0) {
        return 1;
      }
    }
    break;
  case 6:
    iVar1 = *param_2 + -1;
    goto LAB_10407eee;
  }
  return 0;
}


// ==== 10407f60 FUN_10407f60

void FUN_10407f60(float param_1)

{
  int in_ECX;
  
  param_1 = param_1 + *(float *)(in_ECX + 0x5c);
  *(float *)(in_ECX + 0x5c) = param_1;
  if (3.0 < param_1) {
    *(undefined4 *)(in_ECX + 0x58) = 0;
    *(undefined4 *)(in_ECX + 0x5c) = 0;
    *(undefined4 *)(in_ECX + 0x60) = 0xffffffff;
  }
  return;
}


// ==== 10407fb0 FUN_10407fb0

int FUN_10407fb0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x534))(1,param_1,param_2);
  if (((piVar1 != (int *)0x0) && (piVar1[1] != 0)) && (*piVar1 == 2)) {
    return piVar1[1];
  }
  return 0;
}


// ==== 10407ff0 FUN_10407ff0

int FUN_10407ff0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x538))(1,param_1,param_2);
  if (((piVar1 != (int *)0x0) && (piVar1[1] != 0)) && (*piVar1 == 2)) {
    return piVar1[1];
  }
  return 0;
}


// ==== 10408030 FUN_10408030

int FUN_10408030(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x53c))(1,param_1,param_2);
  if (((piVar1 != (int *)0x0) && (piVar1[1] != 0)) && (*piVar1 == 2)) {
    return piVar1[1];
  }
  return 0;
}


// ==== 10408070 FUN_10408070

int FUN_10408070(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x538))(2,param_1,param_2);
  if (((piVar1 != (int *)0x0) && (piVar1[1] != 0)) && (*piVar1 == 1)) {
    return piVar1[1];
  }
  return 0;
}


// ==== 104080b0 FUN_104080b0

int FUN_104080b0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x53c))(2,param_1,param_2);
  if (((piVar1 != (int *)0x0) && (piVar1[1] != 0)) && (*piVar1 == 1)) {
    return piVar1[1];
  }
  return 0;
}


// ==== 104080f0 FUN_104080f0

int FUN_104080f0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x538))(3,param_1,param_2);
  if (((piVar1 != (int *)0x0) && (piVar1[1] != 0)) && (*piVar1 == 1)) {
    return piVar1[1];
  }
  return 0;
}


// ==== 10408130 FUN_10408130

int FUN_10408130(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x53c))(3,param_1,param_2);
  if (((piVar1 != (int *)0x0) && (piVar1[1] != 0)) && (*piVar1 == 1)) {
    return piVar1[1];
  }
  return 0;
}


// ==== 10408170 FUN_10408170

int FUN_10408170(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x538))(4,param_1,param_2);
  if (((piVar1 != (int *)0x0) && (piVar1[1] != 0)) && (*piVar1 == 1)) {
    return piVar1[1];
  }
  return 0;
}


// ==== 104081b0 FUN_104081b0

int FUN_104081b0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x53c))(4,param_1,param_2);
  if (((piVar1 != (int *)0x0) && (piVar1[1] != 0)) && (*piVar1 == 1)) {
    return piVar1[1];
  }
  return 0;
}


// ==== 104081f0 FUN_104081f0

int FUN_104081f0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x538))(5,param_1,param_2);
  if (((piVar1 != (int *)0x0) && (piVar1[1] != 0)) && (*piVar1 == 1)) {
    return piVar1[1];
  }
  return 0;
}


// ==== 10408230 FUN_10408230

int FUN_10408230(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x53c))(5,param_1,param_2);
  if (((piVar1 != (int *)0x0) && (piVar1[1] != 0)) && (*piVar1 == 1)) {
    return piVar1[1];
  }
  return 0;
}


// ==== 10408270 FUN_10408270

int FUN_10408270(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x538))(6,param_1,param_2);
  if (((piVar1 != (int *)0x0) && (piVar1[1] != 0)) && (*piVar1 == 1)) {
    return piVar1[1];
  }
  return 0;
}


// ==== 104082b0 FUN_104082b0

int FUN_104082b0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x53c))(6,param_1,param_2);
  if (((piVar1 != (int *)0x0) && (piVar1[1] != 0)) && (*piVar1 == 1)) {
    return piVar1[1];
  }
  return 0;
}


