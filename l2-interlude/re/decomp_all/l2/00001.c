// ==== 1091eeb0 os2ip

undefined4 __cdecl os2ip(uint *param_1,uint param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
                    /* 0x1eeb0  113  os2ip */
  uVar3 = param_4 + 3 >> 2;
  uVar4 = 0;
  if (param_2 < uVar3) {
    return 0xffffffff;
  }
  if (uVar3 < param_2) {
    mpzero(param_2 - uVar3,param_1);
    param_1 = param_1 + (param_2 - uVar3);
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = 0;
    cVar2 = '\x04';
    do {
      uVar4 = uVar4 + 1;
      cVar2 = cVar2 + -1;
      uVar1 = uVar1 << 8;
      if (uVar4 <= param_4) {
        uVar1 = uVar1 | *param_3;
        param_3 = param_3 + 1;
      }
    } while (cVar2 != '\0');
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  }
  return 0;
}


// ==== 1091ef30 hs2ip

undefined4 __cdecl hs2ip(int *param_1,uint param_2,char *param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
                    /* 0x1ef30  2  hs2ip */
  uVar2 = param_4 + 7 >> 3;
  if (uVar2 <= param_2) {
    if ((uVar2 < param_2) && (uVar2 < param_2)) {
      piVar5 = param_1;
      for (iVar3 = param_2 - uVar2; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = 0;
        piVar5 = piVar5 + 1;
      }
      param_1 = param_1 + (param_2 - uVar2);
    }
    for (; param_4 != 0; param_4 = param_4 - uVar4) {
      iVar3 = 0;
      uVar2 = param_4 & 7;
      uVar4 = uVar2;
      if (uVar2 != 0) goto joined_r0x1091ef82;
      uVar2 = 8;
      uVar4 = uVar2;
      do {
        cVar1 = *param_3;
        param_3 = param_3 + 1;
        iVar3 = iVar3 * 0x10;
        if ((byte)(cVar1 - 0x30U) < 10) {
          iVar3 = iVar3 + -0x30 + (int)cVar1;
        }
        else if ((byte)(cVar1 + 0xbfU) < 6) {
          iVar3 = iVar3 + -0x37 + (int)cVar1;
        }
        else if ((byte)(cVar1 + 0x9fU) < 6) {
          iVar3 = iVar3 + -0x57 + (int)cVar1;
        }
        uVar2 = uVar2 - 1;
joined_r0x1091ef82:
      } while (uVar2 != 0);
      *param_1 = iVar3;
      param_1 = param_1 + 1;
    }
    return 0;
  }
  return 0xffffffff;
}


// ==== 1091eff0 mpbits

int __cdecl mpbits(uint param_1,int param_2)

{
  int iVar1;
  
                    /* 0x1eff0  15  mpbits */
  iVar1 = mpmszcnt(param_1,param_2);
  return param_1 * 0x20 - iVar1;
}


// ==== 1091f010 mpnorm

uint __cdecl mpnorm(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  
                    /* 0x1f010  78  mpnorm */
  uVar1 = mpmszcnt(param_1,(int)param_2);
  mplshift(param_1,param_2,uVar1);
  return uVar1;
}


// ==== 1091f040 mpmod

void __cdecl mpmod(uint *param_1,int param_2,void *param_3,uint param_4,void *param_5,uint *param_6)

{
  uint *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
                    /* 0x1f040  64  mpmod */
  iVar2 = param_2 - param_4;
  _Dst = param_6 + param_4 + 1;
  _memcpy(_Dst,param_5,param_4 * 4);
  uVar3 = mpnorm(param_4,_Dst);
  uVar1 = *_Dst;
  _memcpy(param_1,param_3,param_2 * 4);
  iVar4 = mpge(param_4,param_1,_Dst);
  if (iVar4 != 0) {
    mpsub(param_4,(int)param_1,(int)_Dst);
  }
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    uVar5 = mppndiv(*param_1,param_1[1],uVar1);
    uVar5 = mpsetmul(param_4,(int)(param_6 + 1),(int)_Dst,uVar5);
    *param_6 = uVar5;
    iVar4 = mplt(param_4 + 1,param_1,param_6);
    while (iVar4 != 0) {
      mpsubx(param_4 + 1,(int)param_6,param_4,(int)_Dst);
      iVar4 = mplt(param_4 + 1,param_1,param_6);
    }
    mpsub(param_4 + 1,(int)param_1,(int)param_6);
    param_1 = param_1 + 1;
  }
  while (uVar3 != 0) {
    uVar3 = uVar3 - 1;
    mpdivtwo(param_4,(int)_Dst);
    iVar2 = mpge(param_4,param_1,_Dst);
    if (iVar2 != 0) {
      mpsub(param_4,(int)param_1,(int)_Dst);
    }
  }
  return;
}


// ==== 1091f170 mpprint

void __cdecl mpprint(int param_1,undefined4 *param_2)

{
  undefined **ppuVar1;
  
                    /* 0x1f170  92  mpprint */
  ppuVar1 = FUN_1092320c();
  mpfprint((FILE *)(ppuVar1 + 8),param_1,param_2);
  return;
}


// ==== 1091f190 mpprintln

void __cdecl mpprintln(int param_1,undefined4 *param_2)

{
  undefined **ppuVar1;
  
                    /* 0x1f190  93  mpprintln */
  ppuVar1 = FUN_1092320c();
  mpfprintln((FILE *)(ppuVar1 + 8),param_1,param_2);
  return;
}


// ==== 1091f1b0 rsapub

undefined4 __cdecl rsapub(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint *_Memory;
  
                    /* 0x1f1b0  120  rsapub */
  uVar1 = *param_1;
  iVar2 = mpgex(*param_2,(uint *)param_2[1],uVar1,(uint *)param_1[1]);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  _Memory = _malloc(uVar1 * 0x10 + 8);
  if (_Memory != (uint *)0x0) {
    mpnsize(param_3,uVar1);
    mpbpowmod_w(param_1,*param_2,(undefined4 *)param_2[1],param_1[3],(int *)param_1[4],
                (undefined4 *)param_3[1],_Memory);
    _free(_Memory);
    return 0;
  }
  return 0xffffffff;
}


// ==== 1091f240 rsapri

undefined4 __cdecl rsapri(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint *_Memory;
  
                    /* 0x1f240  118  rsapri */
  uVar1 = *param_1;
  iVar2 = mpgex(*param_2,(uint *)param_2[1],uVar1,(uint *)param_1[1]);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  _Memory = _malloc(uVar1 * 0x10 + 8);
  if (_Memory != (uint *)0x0) {
    mpnsize(param_3,uVar1);
    mpbpowmod_w(param_1,*param_2,(undefined4 *)param_2[1],param_1[5],(int *)param_1[6],
                (undefined4 *)param_3[1],_Memory);
    _free(_Memory);
    return 0;
  }
  return 0xffffffff;
}


// ==== 1091f2d0 rsapricrt

undefined4 __cdecl rsapricrt(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *_Memory;
  undefined4 *_Memory_00;
  
                    /* 0x1f2d0  119  rsapricrt */
  uVar1 = *param_1;
  uVar2 = param_1[10];
  uVar3 = param_1[7];
  iVar4 = mpgex(*param_2,(uint *)param_2[1],uVar1,(uint *)param_1[1]);
  if (iVar4 != 0) {
    return 0xffffffff;
  }
  _Memory = _malloc(uVar3 * 0x18 + 8);
  if (_Memory == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  _Memory_00 = _malloc(uVar2 * 0x18 + 8);
  if (_Memory_00 == (undefined4 *)0x0) {
    _free(_Memory);
    return 0xffffffff;
  }
  FUN_1091e1f0(uVar3 * 2,_Memory,*param_2,(undefined4 *)param_2[1]);
  mpbmod_w(param_1 + 7,_Memory,_Memory + uVar3,_Memory + uVar3 * 2);
  mpbpowmod_w(param_1 + 7,uVar3,_Memory + uVar3,param_1[0xd],(int *)param_1[0xe],_Memory,
              _Memory + uVar3 * 2);
  FUN_1091e1f0(uVar2 * 2,_Memory_00,*param_2,(undefined4 *)param_2[1]);
  mpbmod_w(param_1 + 10,_Memory_00,_Memory_00 + uVar2,_Memory_00 + uVar2 * 2);
  mpbpowmod_w(param_1 + 10,uVar2,_Memory_00 + uVar2,param_1[0xf],(int *)param_1[0x10],_Memory_00,
              _Memory_00 + uVar2 * 2);
  mpbsubmod_w(param_1 + 7,uVar3,_Memory,uVar2,(int)_Memory_00,_Memory,_Memory + uVar3 * 2);
  mpbmulmod_w(param_1 + 7,uVar3,(int)_Memory,uVar3,param_1[0x12],_Memory,_Memory + uVar3 * 2);
  mpnsize(param_3,uVar1);
  mpmul(param_3[1],uVar3,(int)_Memory,uVar2,param_1[0xb]);
  mpaddx(uVar1,param_3[1],uVar2,(int)_Memory_00);
  _free(_Memory);
  _free(_Memory_00);
  return 0;
}


// ==== 1091f470 rsavrfy

undefined4 __cdecl rsavrfy(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int *_Memory;
  undefined4 uVar3;
  
                    /* 0x1f470  121  rsavrfy */
  uVar1 = *param_1;
  iVar2 = mpgex(*param_2,(uint *)param_2[1],uVar1,(uint *)param_1[1]);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  iVar2 = mpgex(*param_3,(uint *)param_3[1],*param_1,(uint *)param_1[1]);
  if (iVar2 != 0) {
    return 0;
  }
  _Memory = _malloc(uVar1 * 0x14 + 8);
  if (_Memory != (int *)0x0) {
    mpbpowmod_w(param_1,*param_3,(undefined4 *)param_3[1],param_1[3],(int *)param_1[4],_Memory,
                (uint *)(_Memory + uVar1));
    uVar3 = mpeqx(uVar1,_Memory,*param_2,(int *)param_2[1]);
    _free(_Memory);
    return uVar3;
  }
  return 0;
}


// ==== 1091f530 mpbzero

void __cdecl mpbzero(undefined4 *param_1)

{
                    /* 0x1f530  37  mpbzero */
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}


// ==== 1091f540 mpbinit

void __cdecl mpbinit(int *param_1,int param_2)

{
  void *pvVar1;
  
                    /* 0x1f540  14  mpbinit */
  *param_1 = param_2;
  pvVar1 = _calloc(param_2 * 2 + 1,4);
  param_1[1] = (int)pvVar1;
  if (pvVar1 != (void *)0x0) {
    param_1[2] = (int)((int)pvVar1 + param_2 * 4);
    return;
  }
  param_1[2] = 0;
  return;
}


// ==== 1091f580 mpbfree

void __cdecl mpbfree(undefined4 *param_1)

{
                    /* 0x1f580  13  mpbfree */
  if ((void *)param_1[1] != (void *)0x0) {
    _free((void *)param_1[1]);
    param_1[2] = 0;
    param_1[1] = 0;
  }
  *param_1 = 0;
  return;
}


// ==== 1091f5b0 mpbcopy

void __cdecl mpbcopy(int *param_1,int *param_2)

{
  int iVar1;
  void *pvVar2;
  
                    /* 0x1f5b0  12  mpbcopy */
  pvVar2 = (void *)param_1[1];
  iVar1 = *param_2;
  if (iVar1 == 0) {
    if (pvVar2 == (void *)0x0) {
      return;
    }
    _free(pvVar2);
    param_1[1] = 0;
    goto LAB_1091f630;
  }
  if (pvVar2 == (void *)0x0) {
    pvVar2 = _malloc(iVar1 * 8 + 4);
LAB_1091f5ef:
    param_1[1] = (int)pvVar2;
  }
  else if (*param_1 != iVar1) {
    pvVar2 = _realloc(pvVar2,iVar1 * 8 + 4);
    goto LAB_1091f5ef;
  }
  pvVar2 = (void *)param_1[1];
  if (pvVar2 != (void *)0x0) {
    *param_1 = iVar1;
    param_1[2] = (int)((int)pvVar2 + *param_2 * 4);
    _memcpy(pvVar2,(void *)param_2[1],iVar1 * 8 + 4);
    return;
  }
LAB_1091f630:
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


// ==== 1091f650 mpbwipe

void __cdecl mpbwipe(int *param_1)

{
                    /* 0x1f650  36  mpbwipe */
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    mpzero(*param_1 * 2 + 1,(undefined4 *)param_1[1]);
  }
  return;
}


// ==== 1091f670 mpbmu_w

void __cdecl mpbmu_w(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
                    /* 0x1f670  17  mpbmu_w */
  uVar2 = *param_1;
  puVar1 = param_2 + uVar2 * 2 + 2;
  uVar3 = mpnorm(uVar2,(undefined4 *)param_1[1]);
  *puVar1 = 1 << ((byte)uVar3 & 0x1f);
  mpzero(uVar2 * 2,puVar1 + 1);
  mpndivmod(param_2,uVar2 * 2 + 1,puVar1,uVar2,(uint *)param_1[1],puVar1 + uVar2 * 2 + 1);
  _memcpy((void *)param_1[2],param_2 + 1,uVar2 * 4 + 4);
  mprshift(uVar2,(undefined4 *)param_1[1],uVar3);
  return;
}


// ==== 1091f6f0 mpbrnd_w

void __cdecl mpbrnd_w(uint *param_1,int *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  
                    /* 0x1f6f0  27  mpbrnd_w */
  iVar1 = mpmszcnt(*param_1,param_1[1]);
  _memcpy(param_4,(void *)param_1[1],*param_1 * 4);
  mpsubw(*param_1,(int)param_4,1);
  do {
    (**(code **)(*param_2 + 0x10))(param_2[1],param_3,*param_1 * 4);
    *param_3 = *param_3 & 0xffffffffU >> ((byte)iVar1 & 0x1f);
    iVar2 = mpge(*param_1,param_3,param_4);
    while (iVar2 != 0) {
      mpsub(*param_1,(int)param_3,(int)param_4);
      iVar2 = mpge(*param_1,param_3,param_4);
    }
    iVar2 = mpleone(*param_1,(int)param_3);
  } while (iVar2 != 0);
  return;
}


// ==== 1091f7a0 mpbrndodd_w

void __cdecl mpbrndodd_w(uint *param_1,int *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  
                    /* 0x1f7a0  29  mpbrndodd_w */
  iVar1 = mpmszcnt(*param_1,param_1[1]);
  _memcpy(param_4,(void *)param_1[1],*param_1 * 4);
  mpsubw(*param_1,(int)param_4,1);
  do {
    (**(code **)(*param_2 + 0x10))(param_2[1],param_3,*param_1 * 4);
    *param_3 = *param_3 & 0xffffffffU >> ((byte)iVar1 & 0x1f);
    mpsetlsb(*param_1,(int)param_3);
    iVar2 = mpge(*param_1,param_3,param_4);
    while (iVar2 != 0) {
      mpsub(*param_1,(int)param_3,(int)param_4);
      mpsetlsb(*param_1,(int)param_3);
      iVar2 = mpge(*param_1,param_3,param_4);
    }
    iVar2 = mpleone(*param_1,(int)param_3);
  } while (iVar2 != 0);
  return;
}


// ==== 1091f860 mpbrndinv_w

void __cdecl mpbrndinv_w(uint *param_1,int *param_2,uint *param_3,undefined4 *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
                    /* 0x1f860  28  mpbrndinv_w */
  uVar1 = *param_1;
  do {
    uVar2 = mpeven(uVar1,param_1[1]);
    if (uVar2 == 0) {
      mpbrnd_w(param_1,param_2,param_3,param_5);
    }
    else {
      mpbrndodd_w(param_1,param_2,param_3,param_5);
    }
    iVar3 = mpextgcd_w(uVar1,param_3,(undefined4 *)param_1[1],param_4,param_5);
  } while (iVar3 == 0);
  return;
}


// ==== 1091f8d0 mpbmod_w

void __cdecl mpbmod_w(uint *param_1,undefined4 *param_2,void *param_3,uint *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  
                    /* 0x1f8d0  16  mpbmod_w */
  puVar2 = param_1;
  uVar4 = *param_1;
  puVar6 = param_2 + uVar4;
  uVar7 = 2;
  uVar3 = mpsetmul(2,(int)(param_4 + uVar4 + 1),param_1[2],*puVar6);
  puVar8 = param_4 + uVar4 + 1 + -1;
  *puVar8 = uVar3;
  if (1 < *param_1) {
    do {
      puVar1 = puVar6 + -1;
      puVar6 = puVar6 + -1;
      uVar7 = uVar7 + 1;
      if (*puVar1 == 0) {
        puVar8[-1] = 0;
      }
      else {
        uVar4 = mpaddmul(uVar7,(int)puVar8,param_1[2],*puVar1);
        puVar8[-1] = uVar4;
      }
      puVar8 = puVar8 + -1;
    } while (uVar7 <= *param_1);
  }
  if (puVar6[-1] == 0) {
    puVar8[-1] = 0;
  }
  else {
    uVar4 = mpaddmul(uVar7,(int)puVar8,param_1[2],puVar6[-1]);
    puVar8[-1] = uVar4;
  }
  uVar4 = *param_1;
  puVar6 = param_4 + uVar4 + 1;
  uVar3 = mpsetmul(uVar4,(int)(puVar6 + 1),param_1[1],puVar6[-1]);
  *puVar6 = uVar3;
  if (uVar4 != 0) {
    param_1 = (uint *)0x0;
    puVar8 = puVar6;
    do {
      mpaddmul(uVar4,(int)puVar6,puVar2[1] + (int)param_1,puVar8[-2]);
      param_1 = param_1 + 1;
      uVar4 = uVar4 - 1;
      puVar8 = puVar8 + -1;
    } while (uVar4 != 0);
  }
  FUN_1091e1f0(*puVar2 + 1,param_4,*puVar2 * 2,param_2);
  mpsub(*puVar2 + 1,(int)param_4,(int)(param_4 + *puVar2 + 1));
  iVar5 = mpgex(*puVar2 + 1,param_4,*puVar2,(uint *)puVar2[1]);
  while (iVar5 != 0) {
    mpsubx(*puVar2 + 1,(int)param_4,*puVar2,puVar2[1]);
    iVar5 = mpgex(*puVar2 + 1,param_4,*puVar2,(uint *)puVar2[1]);
  }
  _memcpy(param_3,param_4 + 1,*puVar2 * 4);
  return;
}


// ==== 1091fa50 mpbsubone

void __cdecl mpbsubone(int *param_1,void *param_2)

{
  int iVar1;
  
                    /* 0x1fa50  34  mpbsubone */
  iVar1 = *param_1;
  _memcpy(param_2,(void *)param_1[1],iVar1 * 4);
  mpsubw(iVar1,(int)param_2,1);
  return;
}


// ==== 1091fac0 mpbaddmod_w

void __cdecl
mpbaddmod_w(uint *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,void *param_6,
           uint *param_7)

{
  uint *puVar1;
  uint uVar2;
  
                    /* 0x1fac0  11  mpbaddmod_w */
  puVar1 = param_7 + *param_1 * 2 + 2;
  uVar2 = *param_1 * 2;
  FUN_1091e1f0(uVar2,puVar1,param_2,param_3);
  mpaddx(uVar2,(int)puVar1,param_4,param_5);
  mpbmod_w(param_1,puVar1,param_6,param_7);
  return;
}


// ==== 1091fb10 mpbsubmod_w

void __cdecl
mpbsubmod_w(uint *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,void *param_6,
           uint *param_7)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
                    /* 0x1fb10  33  mpbsubmod_w */
  uVar2 = *param_1;
  puVar1 = param_7 + uVar2 * 2 + 2;
  uVar3 = uVar2 * 2;
  FUN_1091e1f0(uVar3,puVar1,param_2,param_3);
  iVar4 = mpsubx(uVar3,(int)puVar1,param_4,param_5);
  if (iVar4 != 0) {
    mpaddx(uVar3,(int)puVar1,uVar2,param_1[1]);
  }
  mpbmod_w(param_1,puVar1,param_6,param_7);
  return;
}


// ==== 1091fb80 mpbmulmod_w

void __cdecl
mpbmulmod_w(uint *param_1,uint param_2,int param_3,uint param_4,int param_5,void *param_6,
           uint *param_7)

{
  uint *puVar1;
  int iVar2;
  
                    /* 0x1fb80  18  mpbmulmod_w */
  iVar2 = (*param_1 * 2 - param_2) - param_4;
  puVar1 = param_7 + *param_1 * 2 + 2;
  if (iVar2 != 0) {
    mpzero(iVar2,puVar1);
  }
  mpmul((int)(puVar1 + iVar2),param_2,param_3,param_4,param_5);
  mpbmod_w(param_1,puVar1,param_6,param_7);
  return;
}


// ==== 1091fbe0 mpbsqrmod_w

void __cdecl mpbsqrmod_w(uint *param_1,int param_2,int param_3,void *param_4,uint *param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x1fbe0  32  mpbsqrmod_w */
  puVar1 = param_5 + *param_1 * 2 + 2;
  iVar3 = *param_1 - param_2;
  iVar2 = iVar3 * 2;
  if (iVar2 != 0) {
    mpzero(iVar2,puVar1);
  }
  mpsqr((int)(puVar1 + iVar3 * 2),param_2,param_3);
  mpbmod_w(param_1,puVar1,param_4,param_5);
  return;
}


// ==== 1091fc30 FUN_1091fc30

void __cdecl
FUN_1091fc30(uint *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5)

{
  uint uVar1;
  
  uVar1 = *param_1;
  mpbsqrmod_w(param_1,param_2,(int)param_3,param_4,param_5);
  mpbmulmod_w(param_1,param_2,(int)param_3,uVar1,(int)param_4,param_4 + uVar1,param_5);
  mpbmulmod_w(param_1,uVar1,(int)param_4,uVar1,(int)(param_4 + uVar1),param_4 + uVar1 * 2,param_5);
  mpbmulmod_w(param_1,uVar1,(int)param_4,uVar1,(int)(param_4 + uVar1 * 2),param_4 + uVar1 * 3,
              param_5);
  mpbmulmod_w(param_1,uVar1,(int)param_4,uVar1,(int)(param_4 + uVar1 * 3),param_4 + uVar1 * 4,
              param_5);
  mpbmulmod_w(param_1,uVar1,(int)param_4,uVar1,(int)(param_4 + uVar1 * 4),param_4 + uVar1 * 5,
              param_5);
  mpbmulmod_w(param_1,uVar1,(int)param_4,uVar1,(int)(param_4 + uVar1 * 5),param_4 + uVar1 * 6,
              param_5);
  mpbmulmod_w(param_1,uVar1,(int)param_4,uVar1,(int)(param_4 + uVar1 * 6),param_4 + uVar1 * 7,
              param_5);
  FUN_1091e1f0(uVar1,param_4,param_2,param_3);
  return;
}


// ==== 1091fd30 mpbpowmodsld_w

void __cdecl
mpbpowmodsld_w(uint *param_1,int param_2,int param_3,int *param_4,undefined4 *param_5,uint *param_6)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  char cVar7;
  int local_c;
  
                    /* 0x1fd30  25  mpbpowmodsld_w */
  uVar1 = *param_1;
  mpsetw(uVar1,param_5,1);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    local_c = *param_4;
    param_4 = param_4 + 1;
    if (local_c != 0) break;
  }
  if (local_c != 0) {
    sVar5 = 0;
    sVar3 = 0x20;
    sVar6 = 0;
    sVar4 = 0;
    do {
      if (local_c < 0) break;
      sVar3 = sVar3 + -1;
      local_c = local_c * 2;
    } while (sVar3 != 0);
    if (param_3 != 0) {
      while( true ) {
        for (; sVar3 != 0; sVar3 = sVar3 + -1) {
          bVar2 = -(char)(local_c >> 0x1f);
          sVar4 = sVar4 * 2 + (ushort)bVar2;
          if (sVar4 == 0) {
            mpbsqrmod_w(param_1,uVar1,(int)param_5,param_5,param_6);
          }
          else if (sVar5 == 0) {
            if (bVar2 != 0) {
              sVar6 = 1;
            }
          }
          else {
            sVar6 = sVar5 + 1;
            if (sVar6 == 4) {
              for (cVar7 = (&DAT_1096cd24)[sVar4]; cVar7 != '\0'; cVar7 = cVar7 + -1) {
                mpbsqrmod_w(param_1,uVar1,(int)param_5,param_5,param_6);
              }
              mpbmulmod_w(param_1,uVar1,(int)param_5,uVar1,
                          param_2 + (byte)(&DAT_1096cd34)[sVar4] * uVar1 * 4,param_5,param_6);
              for (cVar7 = (&DAT_1096cd44)[sVar4]; cVar7 != '\0'; cVar7 = cVar7 + -1) {
                mpbsqrmod_w(param_1,uVar1,(int)param_5,param_5,param_6);
              }
              sVar4 = 0;
              sVar6 = 0;
            }
          }
          local_c = local_c << 1;
          sVar5 = sVar6;
        }
        param_3 = param_3 + -1;
        if (param_3 == 0) break;
        local_c = *param_4;
        param_4 = param_4 + 1;
        sVar3 = 0x20;
      }
      if (sVar4 != 0) {
        for (cVar7 = (&DAT_1096cd24)[sVar4]; cVar7 != '\0'; cVar7 = cVar7 + -1) {
          mpbsqrmod_w(param_1,uVar1,(int)param_5,param_5,param_6);
        }
        mpbmulmod_w(param_1,uVar1,(int)param_5,uVar1,
                    param_2 + (byte)(&DAT_1096cd34)[sVar4] * uVar1 * 4,param_5,param_6);
        for (cVar7 = (&DAT_1096cd44)[sVar4]; cVar7 != '\0'; cVar7 = cVar7 + -1) {
          mpbsqrmod_w(param_1,uVar1,(int)param_5,param_5,param_6);
        }
      }
    }
  }
  return;
}


// ==== 1091ff70 mpbtwopowmod_w

void __cdecl mpbtwopowmod_w(uint *param_1,int param_2,int *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  
                    /* 0x1ff70  35  mpbtwopowmod_w */
  puVar2 = param_1;
  uVar1 = *param_1;
  mpsetw(uVar1,param_4,1);
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    iVar5 = *param_3;
    param_3 = param_3 + 1;
    if (iVar5 != 0) break;
    param_2 = param_2 + -1;
  }
  param_1 = (uint *)0x20;
  do {
    if (iVar5 < 0) break;
    iVar5 = iVar5 * 2;
    param_1 = (uint *)((int)param_1 + -1);
  } while (param_1 != (uint *)0x0);
  while (param_2 != 0) {
    param_2 = param_2 + -1;
    for (; param_1 != (uint *)0x0; param_1 = (uint *)((int)param_1 + -1)) {
      mpbsqrmod_w(puVar2,uVar1,(int)param_4,param_4,param_5);
      if ((iVar5 < 0) &&
         ((bVar3 = mpadd(uVar1,(int)param_4,(int)param_4), CONCAT31(extraout_var,bVar3) != 0 ||
          (iVar4 = mpge(uVar1,param_4,(uint *)puVar2[1]), iVar4 != 0)))) {
        mpsub(uVar1,(int)param_4,puVar2[1]);
      }
      iVar5 = iVar5 * 2;
    }
    iVar5 = *param_3;
    param_3 = param_3 + 1;
    param_1 = (uint *)0x20;
  }
  return;
}


// ==== 10920060 mpbpprime_w

undefined4 __cdecl mpbpprime_w(uint *param_1,int *param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
                    /* 0x20060  26  mpbpprime_w */
  uVar1 = *param_1;
  uVar2 = mpodd(uVar1,param_1[1]);
  if (uVar2 != 0) {
    if (uVar1 < 0x21) {
      mpgcd_w(uVar1,(uint *)param_1[1],*(uint **)(&DAT_1096d5b4 + uVar1 * 4),param_4,
              param_4 + uVar1 * 2);
    }
    else {
      FUN_1091e1f0(uVar1,param_4 + uVar1,0x20,(undefined4 *)PTR_DAT_1096d634);
      mpgcd_w(uVar1,(uint *)param_1[1],param_4 + uVar1,param_4,param_4 + uVar1 * 2);
    }
    iVar3 = mpisone(uVar1,(int)param_4);
    if (iVar3 != 0) {
      uVar4 = mppmilrab_w(param_1,param_2,param_3,param_4);
      return uVar4;
    }
  }
  return 0;
}


// ==== 10920100 mpbnrnd

void __cdecl mpbnrnd(uint *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  uint *_Memory;
  
                    /* 0x20100  22  mpbnrnd */
  uVar1 = *param_1;
  _Memory = _malloc(uVar1 * 4);
  mpnfree(param_3);
  mpnsize(param_3,uVar1);
  mpbrnd_w(param_1,param_2,(uint *)param_3[1],_Memory);
  _free(_Memory);
  return;
}


// ==== 10920150 mpbnmulmod

void __cdecl mpbnmulmod(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *_Memory;
  int iVar3;
  
                    /* 0x20150  19  mpbnmulmod */
  uVar2 = *param_1;
  _Memory = _malloc(uVar2 * 0x10 + 8);
  iVar3 = (uVar2 * 2 - *param_2) - *param_3;
  puVar1 = _Memory + uVar2 * 2 + 2;
  mpnfree(param_4);
  mpnsize(param_4,uVar2);
  if (iVar3 != 0) {
    mpzero(iVar3,puVar1);
  }
  mpmul((int)(puVar1 + iVar3),*param_2,param_2[1],*param_3,param_3[1]);
  mpbmod_w(param_1,puVar1,(void *)param_4[1],_Memory);
  _free(_Memory);
  return;
}


// ==== 109201f0 mpbnsqrmod

void __cdecl mpbnsqrmod(uint *param_1,int *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *_Memory;
  
                    /* 0x201f0  23  mpbnsqrmod */
  uVar2 = *param_1;
  _Memory = _malloc(uVar2 * 4);
  iVar3 = *param_2;
  iVar4 = (uVar2 - iVar3) * 2;
  puVar1 = _Memory + uVar2 * 2 + 2;
  if (iVar4 != 0) {
    mpzero(iVar4,puVar1);
  }
  mpsqr((int)(puVar1 + (uVar2 - iVar3) * 2),*param_2,param_2[1]);
  mpnsize(param_3,uVar2);
  mpbmod_w(param_1,puVar1,(void *)param_3[1],_Memory);
  _free(_Memory);
  return;
}


// ==== 10920270 mpbnpowmodsld

void __cdecl mpbnpowmodsld(uint *param_1,int param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  uint *_Memory;
  
                    /* 0x20270  21  mpbnpowmodsld */
  uVar1 = *param_1;
  _Memory = _malloc(uVar1 * 0x10 + 8);
  mpnfree(param_4);
  mpnsize(param_4,uVar1);
  mpbpowmodsld_w(param_1,param_2,*param_3,(int *)param_3[1],(undefined4 *)param_4[1],_Memory);
  _free(_Memory);
  return;
}


// ==== 109202d0 mpbset

void __cdecl mpbset(uint *param_1,uint param_2,void *param_3)

{
  void *pvVar1;
  uint *_Memory;
  
                    /* 0x202d0  30  mpbset */
  if (param_2 == 0) {
    return;
  }
  if ((void *)param_1[1] == (void *)0x0) {
    pvVar1 = _malloc(param_2 * 8 + 4);
  }
  else {
    if (*param_1 == param_2) goto LAB_10920313;
    pvVar1 = _realloc((void *)param_1[1],param_2 * 8 + 4);
  }
  param_1[1] = (uint)pvVar1;
LAB_10920313:
  if (param_1[1] == 0) {
    *param_1 = 0;
    param_1[2] = 0;
    return;
  }
  _Memory = _malloc(param_2 * 0x18 + 0x10);
  param_1[2] = (uint)((int)param_1[1] + param_2 * 4);
  *param_1 = param_2;
  _memcpy((void *)param_1[1],param_3,param_2 * 4);
  mpbmu_w(param_1,_Memory);
  _free(_Memory);
  return;
}


// ==== 10920370 mpbsethex

void __cdecl mpbsethex(uint *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  uint *_Memory;
  uint uVar4;
  
                    /* 0x20370  31  mpbsethex */
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar4 = ((int)pcVar2 - (int)(param_2 + 1)) + 7U >> 3;
  if ((void *)param_1[1] == (void *)0x0) {
    pvVar3 = _malloc(uVar4 * 8 + 4);
  }
  else {
    if (*param_1 == uVar4) goto LAB_109203c2;
    pvVar3 = _realloc((void *)param_1[1],uVar4 * 8 + 4);
  }
  param_1[1] = (uint)pvVar3;
LAB_109203c2:
  if (param_1[1] != 0) {
    _Memory = _malloc(uVar4 * 0x18 + 0x10);
    *param_1 = uVar4;
    param_1[2] = (uint)((int *)param_1[1] + uVar4);
    hs2ip((int *)param_1[1],uVar4,param_2,(int)pcVar2 - (int)(param_2 + 1));
    mpbmu_w(param_1,_Memory);
    _free(_Memory);
    return;
  }
  *param_1 = 0;
  param_1[2] = 0;
  return;
}


// ==== 10920420 mpbpowmod_w

void __cdecl
mpbpowmod_w(uint *param_1,uint param_2,undefined4 *param_3,int param_4,int *param_5,
           undefined4 *param_6,uint *param_7)

{
  int iVar1;
  uint *puVar2;
  undefined4 *_Memory;
  
                    /* 0x20420  24  mpbpowmod_w */
  puVar2 = param_1;
  if (param_4 != 0) {
    do {
      iVar1 = *param_5;
      param_5 = param_5 + 1;
      if (iVar1 != 0) goto LAB_1092044c;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    puVar2 = (uint *)0x0;
  }
  if (puVar2 != (uint *)0x0) {
LAB_1092044c:
    _Memory = _malloc(*param_1 << 5);
    FUN_1091fc30(param_1,param_2,param_3,_Memory,param_7);
    mpbpowmodsld_w(param_1,(int)_Memory,param_4,param_5 + -1,param_6,param_7);
    _free(_Memory);
  }
  return;
}


// ==== 109204a0 mpbnpowmod

void __cdecl mpbnpowmod(uint *param_1,uint *param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  uint *_Memory;
  
                    /* 0x204a0  20  mpbnpowmod */
  uVar1 = *param_1;
  _Memory = _malloc(uVar1 * 0x10 + 8);
  mpnfree(param_4);
  mpnsize(param_4,uVar1);
  mpbpowmod_w(param_1,*param_2,(undefined4 *)param_2[1],*param_3,(int *)param_3[1],
              (undefined4 *)param_4[1],_Memory);
  _free(_Memory);
  return;
}


// ==== 10920500 mpptrials

char __cdecl mpptrials(uint param_1)

{
                    /* 0x20500  97  mpptrials */
  if (0x73d < param_1) {
    return '\x02';
  }
  if (0x4c6 < param_1) {
    return '\x03';
  }
  if (0x39e < param_1) {
    return '\x04';
  }
  if (0x2ea < param_1) {
    return '\x05';
  }
  if (0x272 < param_1) {
    return '\x06';
  }
  if (0x21e < param_1) {
    return '\a';
  }
  if (0x1df < param_1) {
    return '\b';
  }
  if (0x1ae < param_1) {
    return '\t';
  }
  if (0x188 < param_1) {
    return '\n';
  }
  if (0x168 < param_1) {
    return '\v';
  }
  if (0x14e < param_1) {
    return '\f';
  }
  if (0x139 < param_1) {
    return '\r';
  }
  if (0x126 < param_1) {
    return '\x0e';
  }
  if (0x116 < param_1) {
    return '\x0f';
  }
  if (0x108 < param_1) {
    return '\x10';
  }
  if (0xfc < param_1) {
    return '\x11';
  }
  if (0xf1 < param_1) {
    return '\x12';
  }
  if (0xe7 < param_1) {
    return '\x13';
  }
  if (0xde < param_1) {
    return '\x14';
  }
  if (0xd7 < param_1) {
    return '\x15';
  }
  if (0xd0 < param_1) {
    return '\x16';
  }
  if (0xc9 < param_1) {
    return '\x17';
  }
  if (0xc3 < param_1) {
    return '\x18';
  }
  if (0xbe < param_1) {
    return '\x19';
  }
  if (0xb9 < param_1) {
    return '\x1a';
  }
  if (0xb5 < param_1) {
    return '\x1b';
  }
  if (0xb1 < param_1) {
    return '\x1c';
  }
  if (0xad < param_1) {
    return '\x1d';
  }
  if (0xa9 < param_1) {
    return '\x1e';
  }
  if (0xa6 < param_1) {
    return '\x1f';
  }
  if (0xa3 < param_1) {
    return ' ';
  }
  if (0xa0 < param_1) {
    return '!';
  }
  return (param_1 < 0xa0) + '\"';
}


// ==== 109206c0 FUN_109206c0

void __cdecl FUN_109206c0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int *in_EAX;
  int *unaff_ESI;
  int unaff_EDI;
  
  iVar2 = *unaff_ESI;
  (**(code **)(*in_EAX + 0x10))(in_EAX[1],unaff_ESI[1],iVar2 * 4);
  if (unaff_EDI != 0) {
    *(uint *)unaff_ESI[1] = *(uint *)unaff_ESI[1] & 0xffffffffU >> ((byte)unaff_EDI & 0x1f);
  }
  *(uint *)unaff_ESI[1] = *(uint *)unaff_ESI[1] | 0x80000000U >> ((byte)unaff_EDI & 0x1f);
  if (param_1 != 0) {
    puVar1 = (uint *)(unaff_ESI[1] + -4 + iVar2 * 4);
    *puVar1 = *puVar1 | 0xffffffffU >> (0x20U - (char)param_1 & 0x1f);
  }
  return;
}


// ==== 10920720 FUN_10920720

void __cdecl FUN_10920720(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (0x20 < uVar1) {
    FUN_1091e1f0(uVar1,param_2 + uVar1,0x20,(undefined4 *)PTR_DAT_1096d634);
    mpgcd_w(uVar1,(uint *)param_1[1],param_2 + uVar1,param_2,param_2 + uVar1 * 2);
    mpisone(uVar1,(int)param_2);
    return;
  }
  mpgcd_w(uVar1,(uint *)param_1[1],*(uint **)(&DAT_1096d5b4 + uVar1 * 4),param_2,param_2 + uVar1 * 2
         );
  mpisone(uVar1,(int)param_2);
  return;
}


// ==== 10920790 FUN_10920790

bool __cdecl FUN_10920790(uint *param_1,int param_2,int *param_3,int *param_4,uint *param_5)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  puVar2 = param_1;
  uVar1 = *param_1;
  param_1 = (uint *)0x0;
  mpbtwopowmod_w(puVar2,uVar1,param_3,param_5,param_5 + uVar1);
  iVar3 = mpisone(uVar1,(int)param_5);
  while( true ) {
    if (iVar3 != 0) {
      return param_1 == (uint *)0x0;
    }
    iVar3 = mpeq(uVar1,(int *)param_5,param_4);
    if (iVar3 != 0) break;
    param_1 = (uint *)((int)param_1 + 1);
    if (param_2 <= (int)param_1) {
      return false;
    }
    mpbsqrmod_w(puVar2,uVar1,(int)param_5,param_5,param_5 + uVar1);
    iVar3 = mpisone(uVar1,(int)param_5);
  }
  return true;
}


// ==== 10920820 FUN_10920820

bool __cdecl
FUN_10920820(uint *param_1,undefined4 *param_2,int param_3,int *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  puVar2 = param_1;
  uVar1 = *param_1;
  param_1 = (uint *)0x0;
  mpbpowmod_w(puVar2,uVar1,param_2,uVar1,param_4,param_6,(uint *)(param_6 + uVar1));
  iVar3 = mpisone(uVar1,(int)param_6);
  while( true ) {
    if (iVar3 != 0) {
      return param_1 == (uint *)0x0;
    }
    iVar3 = mpeq(uVar1,param_6,param_5);
    if (iVar3 != 0) break;
    param_1 = (uint *)((int)param_1 + 1);
    if (param_3 <= (int)param_1) {
      return false;
    }
    mpbsqrmod_w(puVar2,uVar1,(int)param_6,param_6,(uint *)(param_6 + uVar1));
    iVar3 = mpisone(uVar1,(int)param_6);
  }
  return true;
}


// ==== 109208c0 mppmilrab_w

undefined4 __cdecl mppmilrab_w(uint *param_1,int *param_2,int param_3,uint *param_4)

{
  uint *_Dst;
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar4;
  
                    /* 0x208c0  90  mppmilrab_w */
  uVar1 = *param_1;
  _Dst = param_4 + uVar1;
  _memcpy(param_4,(void *)param_1[1],uVar1 * 4);
  mpsubw(uVar1,(int)param_4,1);
  _memcpy(_Dst,param_4,uVar1 * 4);
  iVar3 = mprshiftlsz(uVar1,(int)_Dst);
  if (param_3 == 0) {
    param_3 = 1;
  }
  bVar2 = FUN_10920790(param_1,iVar3,(int *)_Dst,(int *)param_4,param_4 + uVar1 * 3);
  iVar4 = CONCAT31(extraout_var,bVar2);
  while( true ) {
    if (iVar4 == 0) {
      return 0;
    }
    if (param_3 < 1) break;
    param_3 = param_3 + -1;
    mpbrnd_w(param_1,param_2,_Dst + uVar1,param_4);
    bVar2 = FUN_10920820(param_1,_Dst + uVar1,iVar3,(int *)_Dst,(int *)param_4,
                         (int *)(param_4 + uVar1 * 3));
    iVar4 = CONCAT31(extraout_var_00,bVar2);
  }
  return 1;
}


// ==== 109209a0 mpprnd_w

void __cdecl
mpprnd_w(uint *param_1,int *param_2,int param_3,int param_4,uint *param_5,uint *param_6)

{
  int iVar1;
  uint uVar2;
  
                    /* 0x209a0  94  mpprnd_w */
  uVar2 = param_3 + 0x1fU >> 5;
  mpbinit((int *)param_1,uVar2);
  if (param_1[1] != 0) {
LAB_109209e4:
    do {
      do {
        FUN_109206c0(1);
        iVar1 = FUN_10920720(param_1,param_6);
      } while (iVar1 == 0);
      if (param_5 != (uint *)0x0) {
        _memcpy(param_6,(void *)param_1[1],uVar2 * 4);
        mpsubw(uVar2,(int)param_6,1);
        FUN_1091e1f0(uVar2,param_6 + uVar2,*param_5,(undefined4 *)param_5[1]);
        mpgcd_w(uVar2,param_6,param_6 + uVar2,param_6 + uVar2 * 2,param_6 + uVar2 * 3);
        iVar1 = mpisone(uVar2,(int)(param_6 + uVar2 * 2));
        if (iVar1 == 0) goto LAB_109209e4;
      }
      mpbmu_w(param_1,param_6);
      iVar1 = mppmilrab_w(param_1,param_2,param_4,param_6);
    } while (iVar1 == 0);
  }
  return;
}


// ==== 10920a90 mpprndconone_w

void __cdecl
mpprndconone_w(uint *param_1,int *param_2,uint param_3,int param_4,uint *param_5,uint *param_6,
              int *param_7,int param_8,uint *param_9)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined3 extraout_var;
  uint *puVar5;
  uint local_c;
  uint *local_8;
  
                    /* 0x20a90  95  mpprndconone_w */
  mpbinit((int *)param_1,param_3 + 0x1f >> 5);
  if (param_1[1] != 0) {
    iVar2 = mpbits(*param_5,param_5[1]);
    mpbzero(&local_c);
    mpbinit((int *)&local_c,(param_3 - iVar2) + 0x1e >> 5);
LAB_10920b04:
    do {
      do {
        FUN_109206c0(0);
        if (param_8 == 1) {
          mpsetlsb(local_c,(int)local_8);
          iVar3 = mplex(*param_5,(uint *)param_5[1],local_c,local_8);
          if (iVar3 != 0) {
            FUN_1091e1f0(local_c,param_9,*param_5,(undefined4 *)param_5[1]);
            mpgcd_w(local_c,local_8,param_9,param_9 + local_c,param_9 + local_c * 2);
            iVar3 = mpisone(local_c,(int)(param_9 + local_c));
joined_r0x10920bc1:
            if (iVar3 == 0) goto LAB_10920b04;
          }
        }
        else if (param_8 == 2) {
          mpsetlsb(local_c,(int)local_8);
          iVar3 = FUN_10920720(&local_c,param_9);
          goto joined_r0x10920bc1;
        }
        mpmul((int)param_9,local_c,(int)local_8,*param_5,param_5[1]);
        FUN_1091e1f0(*param_1,(undefined4 *)param_1[1],*param_5 + local_c,param_9);
        mpmultwo(*param_1,param_1[1]);
        mpaddw(*param_1,param_1[1],1);
        uVar4 = mpbits(*param_1,param_1[1]);
      } while ((uVar4 < param_3) || (iVar3 = FUN_10920720(param_1,param_9), iVar3 == 0));
      if (param_6 != (uint *)0x0) {
        _memcpy(param_9,(void *)param_1[1],*param_1 * 4);
        mpsubw(*param_1,(int)param_9,1);
        FUN_1091e1f0(*param_1,param_9,*param_6,(undefined4 *)param_6[1]);
        uVar4 = *param_1;
        mpgcd_w(uVar4,param_9,param_9 + uVar4,param_9 + uVar4 * 2,param_9 + uVar4 * 3);
        iVar3 = mpisone(*param_1,(int)(param_9 + *param_1 * 2));
        if (iVar3 == 0) goto LAB_10920b04;
      }
      if (param_8 == 2) {
        mpbmu_w(&local_c,param_9);
        puVar5 = param_9;
        cVar1 = mpptrials((param_3 - iVar2) - 1);
        iVar3 = mppmilrab_w(&local_c,param_2,CONCAT31(extraout_var,cVar1),puVar5);
        if (iVar3 == 0) goto LAB_10920b04;
      }
      mpbmu_w(param_1,param_9);
      iVar3 = mppmilrab_w(param_1,param_2,param_4,param_9);
    } while (iVar3 == 0);
    mpnset(param_7,local_c,local_8);
    mpmultwo(*param_7,param_7[1]);
    mpbfree(&local_c);
  }
  return;
}


// ==== 10920d40 mpprndsafe_w

void __cdecl mpprndsafe_w(uint *param_1,int *param_2,int param_3,int param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint local_c;
  void *local_8;
  
                    /* 0x20d40  96  mpprndsafe_w */
  uVar2 = param_3 + 0x1fU >> 5;
  mpbinit((int *)param_1,uVar2);
  if (param_1[1] != 0) {
    mpbzero(&local_c);
    mpbinit((int *)&local_c,uVar2);
    do {
      do {
        do {
          do {
            FUN_109206c0(2);
            _memcpy(local_8,(void *)param_1[1],uVar2 * 4);
            mpdivtwo(uVar2,(int)local_8);
            iVar1 = FUN_10920720(&local_c,param_5);
          } while (iVar1 == 0);
          iVar1 = FUN_10920720(param_1,param_5);
        } while (iVar1 == 0);
        mpbmu_w(&local_c,param_5);
        iVar1 = mppmilrab_w(&local_c,param_2,param_4,param_5);
      } while (iVar1 == 0);
      mpbmu_w(param_1,param_5);
      iVar1 = mppmilrab_w(param_1,param_2,param_4,param_5);
    } while (iVar1 == 0);
    mpbfree(&local_c);
  }
  return;
}


// ==== 10920e40 mpzero

void __cdecl mpzero(int param_1,undefined4 *param_2)

{
                    /* 0x20e40  112  mpzero */
  for (; param_1 != 0; param_1 = param_1 + -1) {
    *param_2 = 0;
    param_2 = param_2 + 1;
  }
  return;
}


// ==== 10920e50 mpfill

void __cdecl mpfill(int param_1,undefined4 *param_2,undefined4 param_3)

{
                    /* 0x20e50  46  mpfill */
  for (; param_1 != 0; param_1 = param_1 + -1) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  return;
}


// ==== 10920e68 mpodd

uint __cdecl mpodd(int param_1,int param_2)

{
                    /* 0x20e68  88  mpodd */
  return *(uint *)(param_2 + -4 + param_1 * 4) & 1;
}


// ==== 10920e78 mpeven

uint __cdecl mpeven(int param_1,int param_2)

{
                    /* 0x20e78  44  mpeven */
  return ~*(uint *)(param_2 + -4 + param_1 * 4) & 1;
}


// ==== 10920e90 mpaddw

bool __cdecl mpaddw(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  bool bVar3;
  
                    /* 0x20e90  8  mpaddw */
  puVar2 = (uint *)(param_2 + -4 + param_1 * 4);
  bVar3 = CARRY4(*puVar2,param_3);
  *puVar2 = *puVar2 + param_3;
  iVar1 = param_1 + -1;
  if (iVar1 != 0) {
    bVar3 = false;
    do {
      puVar2 = puVar2 + -1;
      *puVar2 = *puVar2 + (uint)bVar3;
      bVar3 = puVar2 < (uint *)0x4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return bVar3;
}


// ==== 10920ec0 mpsubw

bool __cdecl mpsubw(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  bool bVar3;
  
                    /* 0x20ec0  108  mpsubw */
  puVar2 = (uint *)(param_2 + -4 + param_1 * 4);
  bVar3 = *puVar2 < param_3;
  *puVar2 = *puVar2 - param_3;
  iVar1 = param_1 + -1;
  if (iVar1 != 0) {
    bVar3 = false;
    do {
      puVar2 = puVar2 + -1;
      *puVar2 = *puVar2 - (uint)bVar3;
      bVar3 = puVar2 < (uint *)0x4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return bVar3;
}


// ==== 10920ef0 mpadd

bool __cdecl mpadd(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
                    /* 0x20ef0  5  mpadd */
  bVar6 = false;
  iVar5 = param_1 + -1;
  do {
    uVar1 = *(uint *)(param_3 + iVar5 * 4);
    uVar2 = *(uint *)(param_2 + iVar5 * 4);
    uVar3 = (uint)bVar6;
    uVar4 = uVar2 + uVar1;
    bVar6 = CARRY4(uVar2,uVar1) || CARRY4(uVar4,uVar3);
    *(uint *)(param_2 + iVar5 * 4) = uVar4 + uVar3;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  return bVar6;
}


// ==== 10920f20 mpsub

bool __cdecl mpsub(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
                    /* 0x20f20  107  mpsub */
  bVar6 = false;
  iVar5 = param_1 + -1;
  do {
    uVar1 = *(uint *)(param_3 + iVar5 * 4);
    uVar2 = *(uint *)(param_2 + iVar5 * 4);
    uVar3 = (uint)bVar6;
    uVar4 = uVar2 - uVar1;
    bVar6 = uVar2 < uVar1 || uVar4 < uVar3;
    *(uint *)(param_2 + iVar5 * 4) = uVar4 - uVar3;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  return bVar6;
}


// ==== 10920f50 mpdivtwo

void __cdecl mpdivtwo(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
                    /* 0x20f50  40  mpdivtwo */
  iVar3 = -param_1;
  bVar4 = false;
  do {
    puVar1 = (uint *)(param_2 + param_1 * 4 + iVar3 * 4);
    uVar2 = *puVar1;
    *puVar1 = (uint)(CONCAT14(bVar4,uVar2) >> 1);
    bVar4 = (uVar2 & 1) != 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0);
  return;
}


// ==== 10920f68 mpmultwo

bool __cdecl mpmultwo(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
                    /* 0x20f68  68  mpmultwo */
  iVar3 = param_1 + -1;
  bVar4 = false;
  do {
    uVar1 = *(uint *)(param_2 + iVar3 * 4);
    uVar2 = (uint)bVar4;
    bVar4 = CARRY4(uVar1,uVar1) || CARRY4(uVar1 * 2,uVar2);
    *(uint *)(param_2 + iVar3 * 4) = uVar1 * 2 + uVar2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return bVar4;
}


// ==== 10920f88 mpsetmul

uint __cdecl mpsetmul(int param_1,int param_2,int param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
                    /* 0x20f88  103  mpsetmul */
  uVar3 = 0;
  iVar2 = param_1 + -1;
  do {
    lVar1 = (ulonglong)*(uint *)(param_3 + iVar2 * 4) * (ulonglong)param_4 + (ulonglong)uVar3;
    uVar3 = (uint)((ulonglong)lVar1 >> 0x20);
    *(int *)(param_2 + iVar2 * 4) = (int)lVar1;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar3;
}


// ==== 10920fc0 mpaddmul

uint __cdecl mpaddmul(int param_1,int param_2,int param_3,uint param_4)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
                    /* 0x20fc0  6  mpaddmul */
  uVar5 = 0;
  iVar4 = param_1 + -1;
  do {
    lVar2 = (ulonglong)*(uint *)(param_3 + iVar4 * 4) * (ulonglong)param_4 + (ulonglong)uVar5;
    uVar3 = (uint)lVar2;
    puVar1 = (uint *)(param_2 + iVar4 * 4);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    uVar5 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4(uVar5,uVar3);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return uVar5;
}


// ==== 10920ff8 mpaddsqrtrc

uint __cdecl mpaddsqrtrc(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
                    /* 0x20ff8  7  mpaddsqrtrc */
  uVar7 = 0;
  iVar5 = param_1 + -1;
  do {
    uVar4 = *(uint *)(param_3 + iVar5 * 4);
    lVar3 = (ulonglong)uVar4 * (ulonglong)uVar4 + (ulonglong)uVar7;
    uVar4 = (uint)lVar3;
    uVar6 = (uint)((ulonglong)lVar3 >> 0x20);
    puVar1 = (uint *)(param_2 + 4 + iVar5 * 8);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + uVar4;
    puVar1 = (uint *)(param_2 + iVar5 * 8);
    uVar4 = (uint)CARRY4(uVar7,uVar4);
    uVar7 = *puVar1;
    uVar2 = *puVar1 + uVar6;
    *puVar1 = uVar2 + uVar4;
    uVar7 = (uint)(CARRY4(uVar7,uVar6) || CARRY4(uVar2,uVar4));
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  return uVar7;
}


// ==== 1092102a DSETUP.DLL::Ordinal_11 thunk -> EXTERNAL:00000177

// ==== 10921030 WSOCK32.DLL::WSACleanup thunk -> EXTERNAL:00000178

// ==== 10921036 WSOCK32.DLL::WSAStartup thunk -> EXTERNAL:00000179

// ==== 109212ac _JumpToContinuation

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x109212d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)();
  return;
}


// ==== 109212dc _CallMemberFunction0

/* Library Function - Single Match
    void __stdcall _CallMemberFunction0(void *,void *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _CallMemberFunction0(void *param_1,void *param_2)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x109212e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)();
  return;
}


// ==== 109212e3 FID_conflict:_CallMemberFunction1

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x109212e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== 109212ea FID_conflict:_CallMemberFunction1

/* Library Function - Multiple Matches With Different Base Names
    void __stdcall _CallMemberFunction1(void *,void *,void *)
    void __stdcall _CallMemberFunction2(void *,void *,void *,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void FID_conflict__CallMemberFunction1(undefined4 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x109212ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== 109212f1 _UnwindNestedFrames

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2005 Release */

void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x1092131a,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}


// ==== 10921343 FID_conflict:___CxxFrameHandler3

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


// ==== 10921379 FID_conflict:___CxxFrameHandler3

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


// ==== 109213af FID_conflict:___CxxFrameHandler3

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


// ==== 1092142f _CallSETranslator

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
    *(undefined4 *)param_2 = 0x109214d8;
    local_3c = 1;
  }
  else {
    local_28 = TranslatorGuardHandler;
    local_24 = DAT_1096d674 ^ (uint)&local_2c;
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


// ==== 10921504 TranslatorGuardHandler

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
                    /* WARNING: Could not recover jumptable at 0x10921599. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (*local_8)();
  return _Var1;
}


// ==== 109215a1 _GetRangeOfTrysToCheck

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


// ==== 10921614 __CreateFrameInfo

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


// ==== 1092163c __IsExceptionObjectToBeDestroyed

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


// ==== 1092165d __FindAndUnlinkFrame

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


// ==== 109216a9 _CallCatchBlock2

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
  
  local_14 = DAT_1096d674 ^ (uint)&local_1c;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &LAB_109213ff;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  pvVar1 = (void *)__CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return pvVar1;
}


// ==== 10921707 __CxxThrowException@8

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
  
  pDVar2 = &DAT_1095fa50;
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


// ==== 10921760 type_info::~type_info

/* Library Function - Single Match
    public: virtual __thiscall type_info::~type_info(void)
   
   Library: Visual Studio 2005 Release */

void __thiscall type_info::~type_info(type_info *this)

{
  *(undefined ***)this = vftable;
  _Type_info_dtor(this);
  return;
}


// ==== 1092176e type_info::`scalar_deleting_destructor'

/* Library Function - Single Match
    public: virtual void * __thiscall type_info::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2005 Release */

void * __thiscall type_info::_scalar_deleting_destructor_(type_info *this,uint param_1)

{
  ~type_info(this);
  if ((param_1 & 1) != 0) {
    thunk_FUN_10903570(this);
  }
  return this;
}


// ==== 109217a1 type_info::operator==

/* Library Function - Single Match
    public: bool __thiscall type_info::operator==(class type_info const &)const 
   
   Library: Visual Studio 2005 Release */

bool __thiscall type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (bool)('\x01' - (iVar1 != 0));
}


// ==== 10921810 _memset

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
  if ((((char)_Val == '\0') && (0xff < _Size)) && (DAT_109a1790 != 0)) {
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


// ==== 10921890 __alloca_probe_16

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


// ==== 109218a6 __alloca_probe_8

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


// ==== 109218c0 _memcpy

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
          goto switchD_10921aa3_caseD_2;
        case 3:
          goto switchD_10921aa3_caseD_3;
        }
        goto switchD_10921aa3_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_10921aa3_caseD_0;
      case 1:
        goto switchD_10921aa3_caseD_1;
      case 2:
        goto switchD_10921aa3_caseD_2;
      case 3:
        goto switchD_10921aa3_caseD_3;
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
              goto switchD_10921aa3_caseD_2;
            case 3:
              goto switchD_10921aa3_caseD_3;
            }
            goto switchD_10921aa3_caseD_1;
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
              goto switchD_10921aa3_caseD_2;
            case 3:
              goto switchD_10921aa3_caseD_3;
            }
            goto switchD_10921aa3_caseD_1;
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
              goto switchD_10921aa3_caseD_2;
            case 3:
              goto switchD_10921aa3_caseD_3;
            }
            goto switchD_10921aa3_caseD_1;
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
switchD_10921aa3_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_10921aa3_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_10921aa3_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_10921aa3_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_109a1790 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
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
        goto switchD_1092191c_caseD_2;
      case 3:
        goto switchD_1092191c_caseD_3;
      }
      goto switchD_1092191c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_1092191c_caseD_0;
    case 1:
      goto switchD_1092191c_caseD_1;
    case 2:
      goto switchD_1092191c_caseD_2;
    case 3:
      goto switchD_1092191c_caseD_3;
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
            goto switchD_1092191c_caseD_2;
          case 3:
            goto switchD_1092191c_caseD_3;
          }
          goto switchD_1092191c_caseD_1;
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
            goto switchD_1092191c_caseD_2;
          case 3:
            goto switchD_1092191c_caseD_3;
          }
          goto switchD_1092191c_caseD_1;
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
            goto switchD_1092191c_caseD_2;
          case 3:
            goto switchD_1092191c_caseD_3;
          }
          goto switchD_1092191c_caseD_1;
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
switchD_1092191c_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_1092191c_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_1092191c_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_1092191c_caseD_0:
  return _Dst;
}


// ==== 10921c25 __purecall

/* Library Function - Single Match
    __purecall
   
   Library: Visual Studio 2005 Release */

void __purecall(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_10924649(DAT_109a0e34);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  FUN_10925431(0x19);
  __set_abort_behavior(0,1);
                    /* WARNING: Subroutine does not return */
  _abort();
}


// ==== 10921c7f __cfltcvt_init

/* Library Function - Single Match
    __cfltcvt_init
   
   Library: Visual Studio 2005 Release */

void __cfltcvt_init(void)

{
  PTR_LAB_1096da20 = __cfltcvt;
  PTR_LAB_1096da24 = &LAB_109259af;
  PTR_LAB_1096da28 = &LAB_1092596d;
  PTR_LAB_1096da2c = &LAB_109259a1;
  PTR_LAB_1096da30 = &LAB_10925917;
  PTR_LAB_1096da34 = __cfltcvt;
  PTR_LAB_1096da38 = __cfltcvt_l;
  PTR_LAB_1096da3c = __fassign_l;
  PTR_LAB_1096da40 = __cropzeros_l;
  PTR_LAB_1096da44 = __forcdecpt_l;
  return;
}


// ==== 10921cef __fpmath

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2005 Release */

void __cdecl __fpmath(int param_1)

{
  __cfltcvt_init();
  _DAT_109a0ae4 = __ms_p5_mp_test_fdiv();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}


// ==== 10921d10 __alloca_probe

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


// ==== 10921d3b __execl

/* Library Function - Single Match
    __execl
   
   Library: Visual Studio 2005 Release */

intptr_t __cdecl __execl(char *_Filename,char *_ArgList,...)

{
  DWORD *pDVar1;
  intptr_t iVar2;
  
  if ((((_Filename != (char *)0x0) && (*_Filename != '\0')) && (_ArgList != (char *)0x0)) &&
     (*_ArgList != '\0')) {
    iVar2 = __execve(_Filename,&_ArgList,(char **)0x0);
    return iVar2;
  }
  pDVar1 = FUN_1092681e();
  *pDVar1 = 0x16;
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}


// ==== 10921d84 FUN_10921d84

int __cdecl FUN_10921d84(FILE *param_1)

{
  DWORD *pDVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  if (param_1 == (FILE *)0x0) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar3 = -1;
  }
  else {
    if ((param_1->_flag & 0x83) != 0) {
      iVar3 = __flush(param_1);
      __freebuf(param_1);
      iVar2 = __fileno(param_1);
      iVar2 = __close(iVar2);
      if (iVar2 < 0) {
        iVar3 = -1;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        _free(param_1->_tmpfname);
        param_1->_tmpfname = (char *)0x0;
      }
    }
    param_1->_flag = 0;
  }
  return iVar3;
}


// ==== 10921df6 _fclose

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fclose
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl _fclose(FILE *_File)

{
  DWORD *pDVar1;
  int local_20;
  
  local_20 = -1;
  if (_File == (FILE *)0x0) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    local_20 = -1;
  }
  else if ((_File->_flag & 0x40) == 0) {
    FUN_109232e3((uint)_File);
    local_20 = FUN_10921d84(_File);
    FUN_10921e6a();
  }
  else {
    _File->_flag = 0;
  }
  return local_20;
}


// ==== 10921e6a FUN_10921e6a

void FUN_10921e6a(void)

{
  uint unaff_ESI;
  
  FUN_1092334d(unaff_ESI);
  return;
}


// ==== 10921e72 __fsopen

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __fsopen
   
   Library: Visual Studio 2005 Release */

FILE * __cdecl __fsopen(char *_Filename,char *_Mode,int _ShFlag)

{
  DWORD *pDVar1;
  undefined4 *puVar2;
  FILE *pFVar3;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10968778;
  uStack_c = 0x10921e7e;
  if (((_Filename == (char *)0x0) || (_Mode == (char *)0x0)) || (*_Mode == '\0')) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    puVar2 = FUN_10926f76();
    if (puVar2 == (undefined4 *)0x0) {
      pDVar1 = FUN_1092681e();
      *pDVar1 = 0x18;
    }
    else {
      local_8 = (undefined *)0x0;
      if (*_Filename != '\0') {
        pFVar3 = (FILE *)FUN_10926cd6(_Filename,_Mode,_ShFlag,puVar2);
        local_8 = (undefined *)0xfffffffe;
        FUN_10921f2c();
        return pFVar3;
      }
      pDVar1 = FUN_1092681e();
      *pDVar1 = 0x16;
      __local_unwind4(&DAT_1096d674,(int)local_14,0xfffffffe);
    }
  }
  return (FILE *)0x0;
}


// ==== 10921f2c FUN_10921f2c

void FUN_10921f2c(void)

{
  int unaff_EBP;
  
  FUN_1092334d(*(uint *)(unaff_EBP + 8));
  return;
}


// ==== 10921f36 _fopen

/* Library Function - Single Match
    _fopen
   
   Library: Visual Studio 2005 Release */

FILE * __cdecl _fopen(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
  pFVar1 = __fsopen(_Filename,_Mode,0x40);
  return pFVar1;
}


// ==== 10921f99 _sprintf

/* Library Function - Single Match
    _sprintf
   
   Library: Visual Studio 2005 Release */

int __cdecl _sprintf(char *_Dest,char *_Format,...)

{
  DWORD *pDVar1;
  int iVar2;
  FILE local_24;
  
  if ((_Format == (char *)0x0) || (_Dest == (char *)0x0)) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else {
    local_24._base = _Dest;
    local_24._ptr = _Dest;
    local_24._cnt = 0x7fffffff;
    local_24._flag = 0x42;
    iVar2 = FUN_10927427(&local_24,(byte *)_Format,(localeinfo_struct *)0x0,
                         (wchar_t *)&stack0x0000000c);
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar2;
}


// ==== 1092204a __sprintf_s_l

/* Library Function - Single Match
    __sprintf_s_l
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl __sprintf_s_l(char *_DstBuf,size_t _DstSize,char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  
  iVar1 = __vsprintf_s_l(_DstBuf,_DstSize,_Format,_Locale,&stack0x00000014);
  return iVar1;
}


// ==== 10922067 __snprintf_s

/* Library Function - Single Match
    __snprintf_s
   
   Library: Visual Studio 2005 Release */

int __cdecl __snprintf_s(char *_DstBuf,size_t _SizeInBytes,size_t _MaxCount,char *_Format,...)

{
  int iVar1;
  
  iVar1 = __vsnprintf_s_l(_DstBuf,_SizeInBytes,_MaxCount,_Format,(_locale_t)0x0,&stack0x00000014);
  return iVar1;
}


// ==== 10922086 __snprintf_s_l

/* Library Function - Single Match
    __snprintf_s_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
__snprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  
  iVar1 = __vsnprintf_s_l(_DstBuf,_DstSize,_MaxCount,_Format,_Locale,&stack0x00000018);
  return iVar1;
}


// ==== 109220c2 FUN_109220c2

void __cdecl FUN_109220c2(char *param_1,size_t param_2,char *param_3,_locale_t param_4)

{
  FID_conflict___vsnprintf_c_l(param_1,param_2,param_3,param_4,&stack0x00000014);
  return;
}


// ==== 1092212d FUN_1092212d

int __cdecl FUN_1092212d(int param_1)

{
  uint uVar1;
  int *_Memory;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  int iVar6;
  
  _Memory = (int *)FUN_10924649(DAT_109a1774);
  piVar2 = (int *)FUN_10924649(DAT_109a1770);
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
        DAT_109a1774 = FUN_109245d2((int)pvVar5);
      }
      iVar6 = FUN_109245d2(param_1);
      *piVar2 = iVar6;
      DAT_109a1770 = FUN_109245d2((int)(piVar2 + 1));
      return param_1;
    }
  }
  return 0;
}


// ==== 10922215 __onexit

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2005 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_109284a5();
  p_Var1 = (_onexit_t)FUN_1092212d((int)_Func);
  FUN_1092224b();
  return p_Var1;
}


// ==== 1092224b FUN_1092224b

void FUN_1092224b(void)

{
  FUN_109284ae();
  return;
}


// ==== 10922251 _atexit

/* Library Function - Single Match
    _atexit
   
   Library: Visual Studio 2005 Release */

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}


// ==== 10922295 fast_error_exit

/* Library Function - Single Match
    _fast_error_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl fast_error_exit(int param_1)

{
  if (DAT_109a0af0 == 1) {
    __FF_MSGBANNER();
  }
  FUN_10925431(param_1);
  ___crtExitProcess(0xff);
  return;
}


// ==== 109222b9 check_managed_app

/* WARNING: Removing unreachable block (ram,0x109222f7) */
/* Library Function - Single Match
    _check_managed_app
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl check_managed_app(void)

{
  return 0;
}


// ==== 109222fa ___tmainCRTStartup

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___tmainCRTStartup
   
   Library: Visual Studio 2005 Release */

int ___tmainCRTStartup(void)

{
  HANDLE pvVar1;
  LPOSVERSIONINFOA lpVersionInformation;
  BOOL BVar2;
  int iVar3;
  uint uVar4;
  DWORD DVar5;
  SIZE_T dwBytes;
  _STARTUPINFOA local_74;
  DWORD local_2c;
  DWORD local_28;
  DWORD local_24;
  int local_20;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x10922306;
  local_8 = 0;
  GetStartupInfoA(&local_74);
  local_8 = 0xfffffffe;
  dwBytes = 0x94;
  DVar5 = 0;
  pvVar1 = GetProcessHeap();
  lpVersionInformation = HeapAlloc(pvVar1,DVar5,dwBytes);
  if (lpVersionInformation == (LPOSVERSIONINFOA)0x0) {
    fast_error_exit(0x12);
  }
  else {
    lpVersionInformation->dwOSVersionInfoSize = 0x94;
    BVar2 = GetVersionExA(lpVersionInformation);
    DVar5 = 0;
    if (BVar2 != 0) {
      local_24 = lpVersionInformation->dwPlatformId;
      local_28 = lpVersionInformation->dwMajorVersion;
      local_2c = lpVersionInformation->dwMinorVersion;
      uVar4 = lpVersionInformation->dwBuildNumber & 0x7fff;
      pvVar1 = GetProcessHeap();
      HeapFree(pvVar1,DVar5,lpVersionInformation);
      if (local_24 != 2) {
        uVar4 = uVar4 | 0x8000;
      }
      _DAT_109a0e4c = local_28 * 0x100 + local_2c;
      DAT_109a0e44 = local_24;
      DAT_109a0e50 = local_28;
      _DAT_109a0e54 = local_2c;
      _DAT_109a0e48 = uVar4;
      local_24 = check_managed_app();
      iVar3 = __heap_init();
      if (iVar3 == 0) {
        fast_error_exit(0x1c);
      }
      iVar3 = __mtinit();
      if (iVar3 == 0) {
        fast_error_exit(0x10);
      }
      __RTC_Initialize();
      local_8 = 1;
      iVar3 = __ioinit();
      if (iVar3 < 0) {
        __amsg_exit(0x1b);
      }
      DAT_109a2ae4 = GetCommandLineA();
      DAT_109a0ae8 = ___crtGetEnvironmentStringsA();
      iVar3 = __setargv();
      if (iVar3 < 0) {
        __amsg_exit(8);
      }
      iVar3 = __setenvp();
      if (iVar3 < 0) {
        __amsg_exit(9);
      }
      iVar3 = __cinit(1);
      if (iVar3 != 0) {
        __amsg_exit(iVar3);
      }
      __wincmdln();
      local_20 = thunk_FUN_10915ef0(&IMAGE_DOS_HEADER_10900000);
      if (local_24 != 0) {
        __cexit();
        return local_20;
      }
                    /* WARNING: Subroutine does not return */
      _exit(local_20);
    }
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,DVar5,lpVersionInformation);
  }
  return 0xff;
}


// ==== 109224da entry

void entry(void)

{
  ___security_init_cookie();
  ___tmainCRTStartup();
  return;
}


// ==== 109224e4 __calloc_impl

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __calloc_impl
   
   Library: Visual Studio 2005 Release */

int * __cdecl __calloc_impl(uint param_1,uint param_2,undefined4 *param_3)

{
  DWORD *pDVar1;
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
        if ((DAT_109a1600 == 3) &&
           (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size <= DAT_109a15f0)) {
          __lock(4);
          _Dst = ___sbh_alloc_block(_Size);
          FUN_109225e0();
          if (_Dst != (int *)0x0) {
            _memset(_Dst,0,(size_t)_Size);
            goto LAB_10922595;
          }
        }
        else {
LAB_10922595:
          if (_Dst != (int *)0x0) {
            return _Dst;
          }
        }
        _Dst = HeapAlloc(DAT_109a0f94,8,(SIZE_T)dwBytes);
      }
      if (_Dst != (int *)0x0) {
        return _Dst;
      }
      if (DAT_109a10ec == 0) {
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
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0xc;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return (int *)0x0;
}


// ==== 109225e0 FUN_109225e0

void FUN_109225e0(void)

{
  FUN_10929478(4);
  return;
}


// ==== 10922602 _calloc

/* Library Function - Single Match
    _calloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  DWORD DVar1;
  int *piVar2;
  DWORD *pDVar3;
  DWORD local_8;
  
  local_8 = 0;
  piVar2 = __calloc_impl(_Count,_Size,&local_8);
  DVar1 = local_8;
  if (((piVar2 == (int *)0x0) && (local_8 != 0)) &&
     (pDVar3 = FUN_1092681e(), pDVar3 != (DWORD *)0x0)) {
    pDVar3 = FUN_1092681e();
    *pDVar3 = DVar1;
  }
  return piVar2;
}


// ==== 10922641 _free

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2005 Release */

void __cdecl _free(void *_Memory)

{
  uint *puVar1;
  BOOL BVar2;
  DWORD *pDVar3;
  DWORD DVar4;
  void *this;
  
  if (_Memory != (void *)0x0) {
    if (DAT_109a1600 == 3) {
      this = (void *)0x4;
      __lock(4);
      puVar1 = (uint *)thunk_FUN_1092971b(this,(int)_Memory);
      if (puVar1 != (uint *)0x0) {
        ___sbh_free_block(puVar1,(int)_Memory);
      }
      FUN_10922697();
      if (puVar1 != (uint *)0x0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_109a0f94,0,_Memory);
    if (BVar2 == 0) {
      pDVar3 = FUN_1092681e();
      DVar4 = GetLastError();
      DVar4 = FUN_109267e3(DVar4);
      *pDVar3 = DVar4;
    }
  }
  return;
}


// ==== 10922697 FUN_10922697

void FUN_10922697(void)

{
  FUN_10929478(4);
  return;
}


// ==== 109226cf __security_check_cookie

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release
   __fastcall __security_check_cookie,4 */

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_1096d674) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}


// ==== 109226de _V6_HeapAlloc

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _V6_HeapAlloc
   
   Library: Visual Studio 2005 Release */

int * __cdecl _V6_HeapAlloc(uint *param_1)

{
  undefined4 local_20;
  
  local_20 = (int *)0x0;
  if (param_1 <= DAT_109a15f0) {
    __lock(4);
    local_20 = ___sbh_alloc_block(param_1);
    FUN_10922724();
  }
  return local_20;
}


// ==== 10922724 FUN_10922724

void FUN_10922724(void)

{
  FUN_10929478(4);
  return;
}


// ==== 109227a2 _malloc

/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2005 Release */

void * __cdecl _malloc(size_t _Size)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  size_t sVar4;
  uint dwBytes;
  
  if (0xffffffe0 < _Size) {
    __callnewh(_Size);
    pDVar3 = FUN_1092681e();
    *pDVar3 = 0xc;
    return (void *)0x0;
  }
  do {
    if (DAT_109a0f94 == (HANDLE)0x0) {
      __FF_MSGBANNER();
      FUN_10925431(0x1e);
      ___crtExitProcess(0xff);
    }
    if (DAT_109a1600 == 1) {
      dwBytes = _Size;
      if (_Size == 0) {
        dwBytes = 1;
      }
LAB_10922813:
      piVar1 = HeapAlloc(DAT_109a0f94,0,dwBytes);
    }
    else if ((DAT_109a1600 != 3) || (piVar1 = _V6_HeapAlloc((uint *)_Size), piVar1 == (int *)0x0)) {
      sVar4 = _Size;
      if (_Size == 0) {
        sVar4 = 1;
      }
      dwBytes = sVar4 + 0xf & 0xfffffff0;
      goto LAB_10922813;
    }
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
    if (DAT_109a10ec == 0) {
      pDVar3 = FUN_1092681e();
      *pDVar3 = 0xc;
      goto LAB_10922841;
    }
    iVar2 = __callnewh(_Size);
    if (iVar2 == 0) {
LAB_10922841:
      pDVar3 = FUN_1092681e();
      *pDVar3 = 0xc;
      return (void *)0x0;
    }
  } while( true );
}


// ==== 10922865 _realloc

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
  DWORD *pDVar4;
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
  if (DAT_109a1600 == 3) {
    do {
      local_20 = (int *)0x0;
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_10922a3e;
      pvVar1 = (void *)0x4;
      __lock(4);
      local_24 = (uint *)thunk_FUN_1092971b(pvVar1,(int)_Memory);
      if (local_24 != (uint *)0x0) {
        if (_NewSize <= DAT_109a15f0) {
          iVar2 = ___sbh_resize_block(local_24,(int)_Memory,_NewSize);
          if (iVar2 == 0) {
            local_20 = ___sbh_alloc_block((uint *)_NewSize);
            if (local_20 != (int *)0x0) {
              puVar3 = (uint *)(*(int *)((int)_Memory + -4) - 1);
              if (_NewSize <= puVar3) {
                puVar3 = (uint *)_NewSize;
              }
              _memcpy(local_20,_Memory,(size_t)puVar3);
              local_24 = (uint *)thunk_FUN_1092971b(this,(int)_Memory);
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
          local_20 = HeapAlloc(DAT_109a0f94,0,_NewSize);
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
      FUN_109229a9();
      if (local_24 == (uint *)0x0) {
        if ((uint *)_NewSize == (uint *)0x0) {
          _NewSize = 1;
        }
        _NewSize = _NewSize + 0xf & 0xfffffff0;
        local_20 = HeapReAlloc(DAT_109a0f94,0,_Memory,_NewSize);
      }
      if (local_20 != (int *)0x0) {
        return local_20;
      }
      if (DAT_109a10ec == 0) {
        pDVar4 = FUN_1092681e();
        if (local_24 != (uint *)0x0) {
          *pDVar4 = 0xc;
          return (void *)0x0;
        }
        goto LAB_10922a6b;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    pDVar4 = FUN_1092681e();
    if (local_24 != (uint *)0x0) goto LAB_10922a4a;
  }
  else {
    do {
      if ((uint *)0xffffffe0 < _NewSize) goto LAB_10922a3e;
      if ((uint *)_NewSize == (uint *)0x0) {
        _NewSize = 1;
      }
      pvVar6 = HeapReAlloc(DAT_109a0f94,0,_Memory,_NewSize);
      if (pvVar6 != (LPVOID)0x0) {
        return pvVar6;
      }
      if (DAT_109a10ec == 0) {
        pDVar4 = FUN_1092681e();
LAB_10922a6b:
        DVar5 = GetLastError();
        DVar5 = FUN_109267e3(DVar5);
        *pDVar4 = DVar5;
        return (void *)0x0;
      }
      iVar2 = __callnewh(_NewSize);
    } while (iVar2 != 0);
    pDVar4 = FUN_1092681e();
  }
  DVar5 = GetLastError();
  DVar5 = FUN_109267e3(DVar5);
  *pDVar4 = DVar5;
  return (void *)0x0;
LAB_10922a3e:
  __callnewh(_NewSize);
  pDVar4 = FUN_1092681e();
LAB_10922a4a:
  *pDVar4 = 0xc;
  return (void *)0x0;
}


// ==== 109229a9 FUN_109229a9

void FUN_109229a9(void)

{
  FUN_10929478(4);
  return;
}


// ==== 10922a80 FUN_10922a80

void * __cdecl FUN_10922a80(void *param_1,uint param_2,uint param_3)

{
  DWORD *pDVar1;
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
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0xc;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}


// ==== 10922b00 _memmove

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
          goto switchD_10922ce3_caseD_2;
        case 3:
          goto switchD_10922ce3_caseD_3;
        }
        goto switchD_10922ce3_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_10922ce3_caseD_0;
      case 1:
        goto switchD_10922ce3_caseD_1;
      case 2:
        goto switchD_10922ce3_caseD_2;
      case 3:
        goto switchD_10922ce3_caseD_3;
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
              goto switchD_10922ce3_caseD_2;
            case 3:
              goto switchD_10922ce3_caseD_3;
            }
            goto switchD_10922ce3_caseD_1;
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
              goto switchD_10922ce3_caseD_2;
            case 3:
              goto switchD_10922ce3_caseD_3;
            }
            goto switchD_10922ce3_caseD_1;
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
              goto switchD_10922ce3_caseD_2;
            case 3:
              goto switchD_10922ce3_caseD_3;
            }
            goto switchD_10922ce3_caseD_1;
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
switchD_10922ce3_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      return _Dst;
    case 2:
switchD_10922ce3_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      return _Dst;
    case 3:
switchD_10922ce3_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar1 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar1 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar1 + 1);
      return _Dst;
    }
switchD_10922ce3_caseD_0:
    return _Dst;
  }
  if (((0xff < _Size) && (DAT_109a1790 != 0)) && (((uint)_Dst & 0xf) == ((uint)_Src & 0xf))) {
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
        goto switchD_10922b5c_caseD_2;
      case 3:
        goto switchD_10922b5c_caseD_3;
      }
      goto switchD_10922b5c_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_10922b5c_caseD_0;
    case 1:
      goto switchD_10922b5c_caseD_1;
    case 2:
      goto switchD_10922b5c_caseD_2;
    case 3:
      goto switchD_10922b5c_caseD_3;
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
            goto switchD_10922b5c_caseD_2;
          case 3:
            goto switchD_10922b5c_caseD_3;
          }
          goto switchD_10922b5c_caseD_1;
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
            goto switchD_10922b5c_caseD_2;
          case 3:
            goto switchD_10922b5c_caseD_3;
          }
          goto switchD_10922b5c_caseD_1;
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
            goto switchD_10922b5c_caseD_2;
          case 3:
            goto switchD_10922b5c_caseD_3;
          }
          goto switchD_10922b5c_caseD_1;
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
switchD_10922b5c_caseD_1:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    return _Dst;
  case 2:
switchD_10922b5c_caseD_2:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_10922b5c_caseD_3:
    *(undefined1 *)puVar1 = *(undefined1 *)_Src;
    *(undefined1 *)((int)puVar1 + 1) = *(undefined1 *)((int)_Src + 1);
    *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)_Src + 2);
    return _Dst;
  }
switchD_10922b5c_caseD_0:
  return _Dst;
}


// ==== 10922e65 __flush

/* Library Function - Single Match
    __flush
   
   Library: Visual Studio 2005 Release */

int __cdecl __flush(FILE *_File)

{
  int _FileHandle;
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *_Buf;
  
  iVar2 = 0;
  if ((((byte)_File->_flag & 3) == 2) && ((_File->_flag & 0x108U) != 0)) {
    _Buf = _File->_base;
    uVar3 = (int)_File->_ptr - (int)_Buf;
    if (0 < (int)uVar3) {
      uVar1 = uVar3;
      _FileHandle = __fileno(_File);
      uVar1 = __write(_FileHandle,_Buf,uVar1);
      if (uVar1 == uVar3) {
        if ((char)_File->_flag < '\0') {
          _File->_flag = _File->_flag & 0xfffffffd;
        }
      }
      else {
        _File->_flag = _File->_flag | 0x20;
        iVar2 = -1;
      }
    }
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return iVar2;
}


// ==== 10922ec7 __fflush_nolock

/* Library Function - Single Match
    __fflush_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __fflush_nolock(FILE *_File)

{
  int iVar1;
  
  if (_File == (FILE *)0x0) {
    iVar1 = flsall(0);
    return iVar1;
  }
  iVar1 = __flush(_File);
  if (iVar1 != 0) {
    return -1;
  }
  if ((_File->_flag & 0x4000) != 0) {
    iVar1 = __fileno(_File);
    iVar1 = __commit(iVar1);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


// ==== 10922f09 flsall

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _flsall
   
   Library: Visual Studio 2005 Release */

int __cdecl flsall(int param_1)

{
  int *piVar1;
  FILE *_File;
  int iVar2;
  int iVar3;
  int local_28;
  int local_20;
  
  local_20 = 0;
  local_28 = 0;
  __lock(1);
  for (iVar3 = 0; iVar3 < DAT_109a2ae0; iVar3 = iVar3 + 1) {
    piVar1 = (int *)(DAT_109a1794 + iVar3 * 4);
    if ((*piVar1 != 0) && (iVar2 = *piVar1, (*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
      FUN_1092331f(iVar3,iVar2);
      _File = *(FILE **)(DAT_109a1794 + iVar3 * 4);
      if ((_File->_flag & 0x83U) != 0) {
        if (param_1 == 1) {
          iVar2 = __fflush_nolock(_File);
          if (iVar2 != -1) {
            local_20 = local_20 + 1;
          }
        }
        else if ((param_1 == 0) && ((_File->_flag & 2U) != 0)) {
          iVar2 = __fflush_nolock(_File);
          if (iVar2 == -1) {
            local_28 = -1;
          }
        }
      }
      FUN_10922fab();
    }
  }
  FUN_10922fda();
  if (param_1 != 1) {
    local_20 = local_28;
  }
  return local_20;
}


// ==== 10922fab FUN_10922fab

void FUN_10922fab(void)

{
  int unaff_ESI;
  
  FUN_10923383(unaff_ESI,*(int *)(DAT_109a1794 + unaff_ESI * 4));
  return;
}


// ==== 10922fda FUN_10922fda

void FUN_10922fda(void)

{
  FUN_10929478(1);
  return;
}


// ==== 10922fe3 _fflush

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fflush
   
   Library: Visual Studio 2005 Release */

int __cdecl _fflush(FILE *_File)

{
  int iVar1;
  
  if (_File == (FILE *)0x0) {
    iVar1 = flsall(0);
  }
  else {
    FUN_109232e3((uint)_File);
    iVar1 = __fflush_nolock(_File);
    FUN_1092302c();
  }
  return iVar1;
}


// ==== 1092302c FUN_1092302c

void FUN_1092302c(void)

{
  int unaff_EBP;
  
  FUN_1092334d(*(uint *)(unaff_EBP + 8));
  return;
}


// ==== 1092303f _fprintf

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _fprintf
   
   Library: Visual Studio 2005 Release */

int __cdecl _fprintf(FILE *_File,char *_Format,...)

{
  DWORD *pDVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  int local_20;
  
  local_20 = 0;
  if ((_File == (FILE *)0x0) || (_Format == (char *)0x0)) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  FUN_109232e3((uint)_File);
  if ((_File->_flag & 0x40) == 0) {
    iVar2 = __fileno(_File);
    if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
      puVar4 = &DAT_1096dc60;
    }
    else {
      iVar2 = __fileno(_File);
      uVar3 = __fileno(_File);
      puVar4 = (undefined *)((uVar3 & 0x1f) * 0x38 + (&DAT_109a1660)[iVar2 >> 5]);
    }
    if ((puVar4[0x24] & 0x7f) == 0) {
      iVar2 = __fileno(_File);
      if ((iVar2 == -1) || (iVar2 = __fileno(_File), iVar2 == -2)) {
        puVar4 = &DAT_1096dc60;
      }
      else {
        iVar2 = __fileno(_File);
        uVar3 = __fileno(_File);
        puVar4 = (undefined *)((uVar3 & 0x1f) * 0x38 + (&DAT_109a1660)[iVar2 >> 5]);
      }
      if ((puVar4[0x24] & 0x80) == 0) goto LAB_10923147;
    }
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    local_20 = -1;
  }
LAB_10923147:
  if (local_20 == 0) {
    iVar2 = __stbuf(_File);
    local_20 = FUN_10927427(_File,(byte *)_Format,(localeinfo_struct *)0x0,
                            (wchar_t *)&stack0x0000000c);
    __ftbuf(iVar2,_File);
  }
  FUN_10923184();
  return local_20;
}


// ==== 10923184 FUN_10923184

void FUN_10923184(void)

{
  int unaff_EBP;
  
  FUN_1092334d(*(uint *)(unaff_EBP + 8));
  return;
}


// ==== 1092320c FUN_1092320c

undefined ** FUN_1092320c(void)

{
  return &PTR_DAT_1096d680;
}


// ==== 109232e3 FUN_109232e3

void __cdecl FUN_109232e3(uint param_1)

{
  if ((0x1096d67f < param_1) && (param_1 < 0x1096d8e1)) {
    __lock(((int)(param_1 + 0xef692980) >> 5) + 0x10);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


// ==== 1092331f FUN_1092331f

void __cdecl FUN_1092331f(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    __lock(param_1 + 0x10);
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


// ==== 1092334d FUN_1092334d

void __cdecl FUN_1092334d(uint param_1)

{
  if ((0x1096d67f < param_1) && (param_1 < 0x1096d8e1)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffff7fff;
    FUN_10929478(((int)(param_1 + 0xef692980) >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}


// ==== 10923383 FUN_10923383

void __cdecl FUN_10923383(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xffff7fff;
    FUN_10929478(param_1 + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


// ==== 109233d1 FUN_109233d1

exception * __thiscall FUN_109233d1(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_exception::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    thunk_FUN_10903570(this);
  }
  return this;
}


// ==== 109233f3 ___TypeMatch

/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___TypeMatch(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_10923449:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_10923427:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_10923449;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_10923427;
    }
    uVar2 = 0;
  }
  return uVar2;
}


// ==== 10923493 ___FrameUnwindToState

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
  FUN_10923559();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}


// ==== 10923559 FUN_10923559

void FUN_10923559(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (0 < p_Var1->_ProcessingThrow) {
    p_Var1 = __getptd();
    p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
  }
  return;
}


// ==== 109235b9 ___DestructExceptionObject

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


// ==== 1092360d ___AdjustPointer

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


// ==== 10923953 IsInExceptionSpec

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


// ==== 109239cc CallUnexpected

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


// ==== 109239fd Catch_All@109239fd

void Catch_All_109239fd(void)

{
  _ptiddata p_Var1;
  int unaff_EBP;
  
  p_Var1 = __getptd();
  p_Var1->_curexcspec = *(void **)(unaff_EBP + 8);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,(byte *)0x0);
}


// ==== 10923ac7 CallCatchBlock

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
  
  local_8 = &DAT_109689e8;
  uStack_c = 0x10923ad3;
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
  FUN_10923bed();
  return local_20;
}


// ==== 10923bed FUN_10923bed

void FUN_10923bed(void)

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


// ==== 10923c63 ___BuildCatchObjectHelper

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
        goto LAB_10923ce8;
      }
    }
  }
  else {
    iVar2 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar2 != 0) &&
       (bVar1 = FID_conflict__ValidateExecute((int)param_2), CONCAT31(extraout_var,bVar1) != 0)) {
      iVar2 = *(int *)(param_1 + 0x18);
      *param_2 = iVar2;
LAB_10923ce8:
      iVar2 = ___AdjustPointer(iVar2,(int *)(param_4 + 8));
      *param_2 = iVar2;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}


// ==== 10923de2 ___BuildCatchObject

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


// ==== 10923e73 ___CxxExceptionFilter

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


// ==== 10923fb6 CatchIt

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


// ==== 10924022 FindHandlerForForeignException

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


// ==== 10924114 FindHandler

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
                param_1 = (EHExceptionRecord *)s_bad_exception_1095fa94;
                std::exception::exception((exception *)&stack0xffffffd0,(char **)&param_1);
                    /* WARNING: Subroutine does not return */
                __CxxThrowException_8(&stack0xffffffd0,&DAT_10968a4c);
              }
              iVar6 = iVar6 + 1;
              iVar8 = iVar8 + 0x10;
            } while (iVar6 < *piVar2);
          }
          goto LAB_10924252;
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
                  goto LAB_1092437c;
                }
              }
              local_10 = local_10 + 1;
            }
          }
LAB_1092437c:
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
         uVar3 != '\0')) goto LAB_10924452;
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
LAB_10924252:
      terminate();
      return;
    }
    FindHandlerForForeignException
              ((EHExceptionRecord *)p_Var11,param_2,param_3,param_4,p_Var10,local_c,param_7,param_8)
    ;
  }
LAB_10924452:
  p_Var5 = __getptd();
  if (p_Var5->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  return;
}


// ==== 10924482 ___InternalCxxFrameHandler

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


// ==== 10924566 FUN_10924566

undefined4 FUN_10924566(void)

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
        iVar3 = _strcmp(".mixcrt",_Str2);
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


// ==== 109245d2 FUN_109245d2

int __cdecl FUN_109245d2(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_1096d944);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_1096d940 != -1)) {
    iVar3 = DAT_1096d940;
    pcVar2 = TlsGetValue(DAT_1096d944);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1f8);
      goto LAB_1092462c;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_10924566();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"EncodePointer");
LAB_1092462c:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}


// ==== 10924640 __encoded_null

/* Library Function - Single Match
    __encoded_null
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __encoded_null(void)

{
  FUN_109245d2(0);
  return;
}


// ==== 10924649 FUN_10924649

int __cdecl FUN_10924649(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_1096d944);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_1096d940 != -1)) {
    iVar3 = DAT_1096d940;
    pcVar2 = TlsGetValue(DAT_1096d944);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)(iVar3 + 0x1fc);
      goto LAB_109246a3;
    }
  }
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    return param_1;
  }
  iVar3 = FUN_10924566();
  if (iVar3 == 0) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_109246a3:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}


// ==== 109246db FUN_109246db

LPVOID FUN_109246db(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_1096d944);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_10924649(DAT_109a0afc);
    TlsSetValue(DAT_1096d944,lpTlsValue);
  }
  return lpTlsValue;
}


// ==== 10924726 __mtterm

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2005 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_1096d940 != -1) {
    iVar2 = DAT_1096d940;
    pcVar1 = (code *)FUN_10924649(DAT_109a0b04);
    (*pcVar1)(iVar2);
    DAT_1096d940 = -1;
  }
  if (DAT_1096d944 != 0xffffffff) {
    TlsFree(DAT_1096d944);
    DAT_1096d944 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}


// ==== 10924763 FUN_10924763

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl FUN_10924763(int param_1,int param_2)

{
  HMODULE hModule;
  int iVar1;
  FARPROC pFVar2;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  *(undefined **)(param_1 + 0x5c) = &DAT_1096dbd8;
  *(undefined4 *)(param_1 + 0x14) = 1;
  if (hModule != (HMODULE)0x0) {
    iVar1 = FUN_10924566();
    if (iVar1 != 0) {
      pFVar2 = GetProcAddress(hModule,"EncodePointer");
      *(FARPROC *)(param_1 + 0x1f8) = pFVar2;
      pFVar2 = GetProcAddress(hModule,"DecodePointer");
      *(FARPROC *)(param_1 + 0x1fc) = pFVar2;
    }
  }
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined1 *)(param_1 + 200) = 0x43;
  *(undefined1 *)(param_1 + 0x14b) = 0x43;
  *(undefined **)(param_1 + 0x68) = &DAT_1096df18;
  InterlockedIncrement((LONG *)&DAT_1096df18);
  __lock(0xc);
  *(int *)(param_1 + 0x6c) = param_2;
  if (param_2 == 0) {
    *(undefined **)(param_1 + 0x6c) = PTR_DAT_1096df08;
  }
  ___addlocaleref(*(LONG **)(param_1 + 0x6c));
  FUN_10924819();
  return;
}


// ==== 10924819 FUN_10924819

void FUN_10924819(void)

{
  FUN_10929478(0xc);
  return;
}


// ==== 10924822 FUN_10924822

DWORD * FUN_10924822(void)

{
  DWORD dwErrCode;
  code *pcVar1;
  DWORD *_Memory;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  DWORD *pDVar5;
  
  dwErrCode = GetLastError();
  uVar4 = DAT_1096d940;
  pcVar1 = FUN_109246db();
  _Memory = (DWORD *)(*pcVar1)(uVar4);
  if (_Memory == (DWORD *)0x0) {
    _Memory = __calloc_crt(1,0x214);
    if (_Memory != (DWORD *)0x0) {
      uVar4 = DAT_1096d940;
      pDVar5 = _Memory;
      pcVar1 = (code *)FUN_10924649(DAT_109a0b00);
      iVar2 = (*pcVar1)(uVar4,pDVar5);
      if (iVar2 == 0) {
        _free(_Memory);
        _Memory = (DWORD *)0x0;
      }
      else {
        FUN_10924763((int)_Memory,0);
        DVar3 = GetCurrentThreadId();
        _Memory[1] = 0xffffffff;
        *_Memory = DVar3;
      }
    }
  }
  SetLastError(dwErrCode);
  return _Memory;
}


// ==== 10924899 __getptd

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 2005 Release */

_ptiddata __cdecl __getptd(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = (_ptiddata)FUN_10924822();
  if (p_Var1 == (_ptiddata)0x0) {
    __amsg_exit(0x10);
  }
  return p_Var1;
}


// ==== 109249bd FUN_109249bd

void FUN_109249bd(void)

{
  FUN_10929478(0xd);
  return;
}


// ==== 109249c9 FUN_109249c9

void FUN_109249c9(void)

{
  FUN_10929478(0xc);
  return;
}


// ==== 10924a47 __mtinit

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
  undefined1 *puVar6;
  DWORD *pDVar7;
  
  hModule = GetModuleHandleA("KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    __mtterm();
    return 0;
  }
  DAT_109a0af8 = GetProcAddress(hModule,"FlsAlloc");
  DAT_109a0afc = GetProcAddress(hModule,"FlsGetValue");
  DAT_109a0b00 = GetProcAddress(hModule,"FlsSetValue");
  DAT_109a0b04 = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_109a0af8 == (FARPROC)0x0) || (DAT_109a0afc == (FARPROC)0x0)) ||
      (DAT_109a0b00 == (FARPROC)0x0)) || (DAT_109a0b04 == (FARPROC)0x0)) {
    DAT_109a0afc = TlsGetValue_exref;
    DAT_109a0af8 = (FARPROC)&LAB_109246b7;
    DAT_109a0b00 = TlsSetValue_exref;
    DAT_109a0b04 = TlsFree_exref;
  }
  DAT_1096d944 = TlsAlloc();
  if ((DAT_1096d944 != 0xffffffff) && (BVar1 = TlsSetValue(DAT_1096d944,DAT_109a0afc), BVar1 != 0))
  {
    __init_pointers();
    DAT_109a0af8 = (FARPROC)FUN_109245d2((int)DAT_109a0af8);
    DAT_109a0afc = (FARPROC)FUN_109245d2((int)DAT_109a0afc);
    DAT_109a0b00 = (FARPROC)FUN_109245d2((int)DAT_109a0b00);
    DAT_109a0b04 = (FARPROC)FUN_109245d2((int)DAT_109a0b04);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      puVar6 = &LAB_109248b1;
      pcVar3 = (code *)FUN_10924649((int)DAT_109a0af8);
      DAT_1096d940 = (*pcVar3)(puVar6);
      if ((DAT_1096d940 != -1) && (pDVar4 = __calloc_crt(1,0x214), pDVar4 != (DWORD *)0x0)) {
        iVar2 = DAT_1096d940;
        pDVar7 = pDVar4;
        pcVar3 = (code *)FUN_10924649((int)DAT_109a0b00);
        iVar2 = (*pcVar3)(iVar2,pDVar7);
        if (iVar2 != 0) {
          FUN_10924763((int)pDVar4,0);
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


// ==== 10924bcb terminate

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


// ==== 10924c04 unexpected

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


// ==== 10924c17 _inconsistency

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 2005 Release */

void __cdecl _inconsistency(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_10924649(DAT_109a0b08);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  terminate();
  return;
}


// ==== 10924c4e __initp_eh_hooks

/* Library Function - Single Match
    __initp_eh_hooks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __initp_eh_hooks(void)

{
  DAT_109a0b08 = FUN_109245d2(0x10924bcb);
  return;
}


// ==== 10924c60 __CallSettingFrame@12

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


// ==== 10924cac __invoke_watson_if_error

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


// ==== 10924cce type_info::_Type_info_dtor

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
  _Memory = DAT_109a0b10;
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = (int *)&DAT_109a0b0c;
    do {
      piVar2 = piVar1;
      if (DAT_109a0b10 == (int *)0x0) goto LAB_10924d12;
      piVar1 = DAT_109a0b10;
    } while (*DAT_109a0b10 != *(int *)(param_1 + 4));
    piVar2[1] = DAT_109a0b10[1];
    _free(_Memory);
LAB_10924d12:
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_10924d35();
  return;
}


// ==== 10924d35 FUN_10924d35

void FUN_10924d35(void)

{
  FUN_10929478(0xe);
  return;
}


// ==== 10924ea3 ___unDNameHelper

/* Library Function - Single Match
    ___unDNameHelper
   
   Library: Visual Studio 2005 Release */

void __cdecl ___unDNameHelper(char *param_1,char *param_2,int param_3,ushort param_4)

{
  if (param_4 == 0) {
    param_4 = 0x2800;
  }
  ___unDName(param_1,param_2,param_3,0x109227a2,_free,param_4);
  return;
}


// ==== 10925020 _strcmp

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
      if (bVar4 != *_Str2) goto LAB_10925064;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_10925030;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_10925064;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_10925064;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_10925030:
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
LAB_10925064:
  return (uint)bVar5 * -2 + 1;
}


// ==== 109250a8 fastzero_I

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


// ==== 109250ff __VEC_memzero

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


// ==== 109251b6 FUN_109251b6

void __cdecl FUN_109251b6(undefined4 *param_1,undefined4 *param_2,uint param_3)

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


// ==== 1092523d __VEC_memcpy

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
      FUN_109251b6(param_1,param_2,param_3 - uVar3);
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


// ==== 10925320 _abort

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2005 Release */

void __cdecl _abort(void)

{
  code *pcVar1;
  _PHNDLR p_Var2;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  if (((byte)DAT_1096d960 & 1) != 0) {
    FUN_10925431(10);
  }
  p_Var2 = ___get_sigabrt();
  if (p_Var2 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if (((byte)DAT_1096d960 & 2) != 0) {
    local_2d4 = 0x10001;
    _memset(&local_32c,0,0x50);
    local_2dc.ExceptionRecord = &local_32c;
    local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
    local_32c.ExceptionCode = 0x40000015;
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
    UnhandledExceptionFilter(&local_2dc);
  }
  __exit(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ==== 10925413 __set_abort_behavior

/* Library Function - Single Match
    __set_abort_behavior
   
   Library: Visual Studio 2005 Release */

uint __cdecl __set_abort_behavior(uint _Flags,uint _Mask)

{
  uint uVar1;
  
  uVar1 = DAT_1096d960;
  DAT_1096d960 = ~_Mask & DAT_1096d960 | _Flags & _Mask;
  return uVar1;
}


// ==== 10925431 FUN_10925431

void __cdecl FUN_10925431(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  errno_t eVar3;
  DWORD DVar4;
  size_t sVar5;
  HANDLE hFile;
  uint uVar6;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_4;
  
  uVar6 = 0;
  do {
    if (param_1 == (&DAT_1096d968)[uVar6 * 2]) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x17);
  if (uVar6 < 0x17) {
    iVar2 = __set_error_mode(3);
    if ((iVar2 == 1) || ((iVar2 = __set_error_mode(3), iVar2 == 0 && (DAT_1096d670 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_4;
        puVar1 = (undefined4 *)(uVar6 * 8 + 0x1096d96c);
        sVar5 = _strlen((char *)*puVar1);
        WriteFile(hFile,(LPCVOID)*puVar1,sVar5,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar3 = _strcpy_s(&DAT_109a0b18,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_109a0c35 = 0;
      DVar4 = GetModuleFileNameA((HMODULE)0x0,&DAT_109a0b31,0x104);
      if ((DVar4 == 0) &&
         (eVar3 = _strcpy_s(&DAT_109a0b31,0x2fb,"<program name unknown>"), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar5 = _strlen(&DAT_109a0b31);
      if (0x3c < sVar5 + 1) {
        sVar5 = _strlen(&DAT_109a0b31);
        eVar3 = _strncpy_s((char *)(sVar5 + 0x109a0af6),
                           (int)&DAT_109a0e2c - (int)(sVar5 + 0x109a0af6),"...",3);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar3 = _strcat_s(&DAT_109a0b18,0x314,"\n\n");
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar3 = _strcat_s(&DAT_109a0b18,0x314,*(char **)(uVar6 * 8 + 0x1096d96c));
      if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_10932972(&DAT_109a0b18,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}


// ==== 109255f1 __FF_MSGBANNER

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
    if (DAT_1096d670 != 1) {
      return;
    }
  }
  FUN_10925431(0xfc);
  FUN_10925431(0xff);
  return;
}


// ==== 1092562a ___getlocaleinfo

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
  
  local_8 = DAT_1096d674 ^ (uint)local_68;
  if (_Lc_type != 1) {
    if (_Lc_type == 0) {
      pbVar7 = &DAT_109a0e2c;
      iVar5 = ___crtGetLocaleInfoW
                        (_Locale,(ulong)_LocaleName,_FieldType,(wchar_t *)&DAT_109a0e2c,4,0);
      if (iVar5 != 0) {
        *(undefined1 *)_Address = 0;
        do {
          bVar1 = *pbVar7;
          iVar5 = _isdigit((uint)bVar1);
          if (iVar5 == 0) break;
          pbVar7 = pbVar7 + 2;
          *(byte *)_Address = *(char *)_Address * '\n' + bVar1 + -0x30;
        } while ((int)pbVar7 < 0x109a0e34);
      }
    }
    goto LAB_109256f7;
  }
  _LpLCData = local_88;
  bVar2 = false;
  sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,_LpLCData,0x80);
  if (sVar3 == 0) {
    DVar4 = GetLastError();
    if (((DVar4 != 0x7a) ||
        (sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,(LPSTR)0x0,0), sVar3 == 0)) ||
       (_LpLCData = __calloc_crt(sVar3,1), _LpLCData == (LPSTR)0x0)) goto LAB_109256f7;
    bVar2 = true;
    sVar3 = ___crtGetLocaleInfoA(_Locale,_LocaleName,_FieldType,_LpLCData,sVar3);
    if (sVar3 != 0) goto LAB_109256d5;
  }
  else {
LAB_109256d5:
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
      goto LAB_109256f7;
    }
    if (!bVar2) goto LAB_109256f7;
  }
  _free(_LpLCData);
LAB_109256f7:
  iVar5 = __security_check_cookie(local_8 ^ (uint)local_68);
  return iVar5;
}


// ==== 10925784 FUN_10925784

void __cdecl FUN_10925784(undefined4 param_1)

{
  DAT_109a0e34 = param_1;
  return;
}


// ==== 10925793 _LocaleUpdate::_LocaleUpdate

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
    if ((*(undefined **)this != PTR_DAT_1096df08) && ((p_Var2->_ownlocale & DAT_1096e4e0) == 0)) {
      ptVar3 = ___updatetlocinfo();
      *(pthreadlocinfo *)this = ptVar3;
    }
    if ((*(undefined **)(this + 4) != PTR_DAT_1096e340) &&
       ((*(uint *)(*(int *)(this + 8) + 0x70) & DAT_1096e4e0) == 0)) {
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


// ==== 10925826 __forcdecpt_l

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


// ==== 10925897 __cropzeros_l

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


// ==== 1092592d __fassign_l

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


// ==== 10925984 __shift

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


// ==== 109259bd __cftoe2_l

/* Library Function - Single Match
    __cftoe2_l
   
   Library: Visual Studio 2005 Release */

DWORD __cdecl
__cftoe2_l(uint param_1,int param_2,int param_3,int *param_4,char param_5,localeinfo_struct *param_6
          )

{
  undefined1 *in_EAX;
  DWORD *pDVar1;
  errno_t eVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *_Dst;
  DWORD DVar7;
  DWORD DVar8;
  char *pcVar9;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_6);
  if ((in_EAX == (undefined1 *)0x0) || (param_1 == 0)) {
    pDVar1 = FUN_1092681e();
    DVar7 = 0x16;
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
      pcVar9 = "e+000";
      eVar2 = _strcpy_s(_Dst,(rsize_t)puVar5,"e+000");
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
      if (((DAT_109a14d0 & 1) != 0) && (_Dst[2] == '0')) {
        pcVar9 = (char *)0x3;
        _memmove(_Dst + 2,_Dst + 3,3);
      }
      if (local_8 == '\0') {
        return (DWORD)pcVar9;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return (DWORD)pcVar9;
    }
    pDVar1 = FUN_1092681e();
    DVar7 = 0x22;
  }
  DVar8 = 0;
  *pDVar1 = DVar7;
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return DVar8;
}


// ==== 10925b2a __cftoe_l

/* Library Function - Single Match
    __cftoe_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftoe_l(double *param_1,undefined1 *param_2,uint param_3,int param_4,int param_5,
         localeinfo_struct *param_6)

{
  DWORD *pDVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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


// ==== 10925bf8 __cftoe

/* Library Function - Single Match
    __cftoe
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  errno_t eVar1;
  
  eVar1 = __cftoe_l(_Value,_Buf,_SizeInBytes,_Dec,_Caps,(localeinfo_struct *)0x0);
  return eVar1;
}


// ==== 10925c16 __cftoa_l

/* Library Function - Single Match
    __cftoa_l
   
   Library: Visual Studio 2005 Release */

DWORD __cdecl
__cftoa_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  ushort uVar1;
  DWORD *pDVar2;
  size_t _SizeInBytes;
  errno_t eVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  short sVar8;
  DWORD unaff_EBX;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  DWORD DVar14;
  DWORD DVar15;
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
    pDVar2 = FUN_1092681e();
    DVar14 = 0x16;
LAB_10925c4f:
    DVar15 = 0;
    *pDVar2 = DVar14;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_1c != '\0') {
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
    }
    return DVar15;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    pDVar2 = FUN_1092681e();
    DVar14 = 0x22;
    goto LAB_10925c4f;
  }
  local_10 = *(uint *)param_1;
  if ((*(uint *)((int)param_1 + 4) >> 0x14 & 0x7ff) == 0x7ff) {
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - 2;
    }
    eVar3 = __cftoe(param_1,param_2 + 2,_SizeInBytes,param_4,0);
    if (eVar3 != 0) {
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
    pcVar4 = _strrchr(param_2 + 2,0x65);
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
      pcVar4[3] = '\0';
    }
    goto LAB_10925f73;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  *param_2 = 0x30;
  param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
  sVar8 = (-(ushort)(param_5 != 0) & 0xffe0) + 0x27;
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
  pcVar10 = param_2 + 3;
  pcVar4 = param_2 + 4;
  if (param_4 == 0) {
    *pcVar10 = '\0';
  }
  else {
    *pcVar10 = *(char *)**(undefined4 **)(local_28[0] + 0xbc);
  }
  if ((((ulonglong)*param_1 & 0xfffff00000000) != 0) || (local_c = 0, *(int *)param_1 != 0)) {
    local_10 = 0;
    local_c = 0xf0000;
    do {
      if ((int)param_4 < 1) break;
      uVar12 = __aullshr((byte)local_8,*(uint *)((int)param_1 + 4) & local_c & 0xfffff);
      uVar1 = (short)uVar12 + 0x30;
      if (0x39 < uVar1) {
        uVar1 = uVar1 + sVar8;
      }
      local_8 = local_8 + -4;
      *pcVar4 = (char)uVar1;
      local_10 = local_10 >> 4 | local_c << 0x1c;
      local_c = local_c >> 4;
      pcVar4 = pcVar4 + 1;
      param_4 = param_4 - 1;
    } while (-1 < (short)local_8);
    if ((-1 < (short)local_8) &&
       (uVar12 = __aullshr((byte)local_8,*(uint *)((int)param_1 + 4) & local_c & 0xfffff),
       pcVar9 = pcVar4, 8 < (ushort)uVar12)) {
      while( true ) {
        pcVar5 = pcVar9 + -1;
        if ((*pcVar5 != 'f') && (*pcVar5 != 'F')) break;
        *pcVar5 = '0';
        pcVar9 = pcVar5;
      }
      if (pcVar5 == pcVar10) {
        pcVar9[-2] = pcVar9[-2] + '\x01';
      }
      else if (*pcVar5 == '9') {
        *pcVar5 = (char)sVar8 + ':';
      }
      else {
        *pcVar5 = *pcVar5 + '\x01';
      }
    }
  }
  if (0 < (int)param_4) {
    _memset(pcVar4,0x30,param_4);
    pcVar4 = pcVar4 + param_4;
  }
  if (*pcVar10 == '\0') {
    pcVar4 = pcVar10;
  }
  *pcVar4 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
  uVar12 = __aullshr(0x34,*(uint *)((int)param_1 + 4));
  uVar6 = (uint)(uVar12 & 0x7ff);
  uVar7 = uVar6 - local_18;
  uVar6 = -(uint)(uVar6 < local_18);
  if ((int)uVar6 < 0) {
    pcVar4[1] = '-';
    bVar11 = uVar7 != 0;
    uVar7 = -uVar7;
    uVar6 = -(uVar6 + bVar11);
  }
  else {
    pcVar4[1] = '+';
  }
  pcVar9 = pcVar4 + 2;
  *pcVar9 = '0';
  pcVar10 = pcVar9;
  if (((int)uVar6 < 0) || (((int)uVar6 < 1 && (uVar7 < 1000)))) {
LAB_10925f22:
    if ((-1 < (int)uVar6) && ((0 < (int)uVar6 || (99 < uVar7)))) goto LAB_10925f2d;
  }
  else {
    uVar13 = __alldvrm(uVar7,uVar6,1000,0);
    local_14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    *pcVar9 = (char)uVar13 + '0';
    pcVar10 = pcVar4 + 3;
    uVar6 = 0;
    uVar7 = extraout_ECX;
    if (pcVar10 == pcVar9) goto LAB_10925f22;
LAB_10925f2d:
    uVar13 = __alldvrm(uVar7,uVar6,100,0);
    local_14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    *pcVar10 = (char)uVar13 + '0';
    pcVar10 = pcVar10 + 1;
    uVar6 = 0;
    uVar7 = extraout_ECX_00;
  }
  if ((pcVar10 != pcVar9) || ((-1 < (int)uVar6 && ((0 < (int)uVar6 || (9 < uVar7)))))) {
    uVar13 = __alldvrm(uVar7,uVar6,10,0);
    *pcVar10 = (char)uVar13 + '0';
    pcVar10 = pcVar10 + 1;
    uVar7 = extraout_ECX_01;
  }
  *pcVar10 = (char)uVar7 + '0';
  pcVar10[1] = '\0';
LAB_10925f73:
  if (local_1c == '\0') {
    return unaff_EBX;
  }
  *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  return unaff_EBX;
}


// ==== 10925f87 __cftoa

/* Library Function - Single Match
    __cftoa
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __cftoa(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  errno_t extraout_EAX;
  
  __cftoa_l(_Value,_Buf,_SizeInBytes,_Dec,_Caps,(localeinfo_struct *)0x0);
  return extraout_EAX;
}


// ==== 10925fa5 __cftof2_l

/* Library Function - Single Match
    __cftof2_l
   
   Library: Visual Studio 2005 Release */

undefined4 __thiscall
__cftof2_l(void *this,int param_1,size_t param_2,char param_3,localeinfo_struct *param_4)

{
  int iVar1;
  int *in_EAX;
  DWORD *pDVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  size_t sVar5;
  int local_14 [2];
  int local_c;
  char local_8;
  
  iVar1 = in_EAX[1];
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_4);
  if ((this == (void *)0x0) || (param_1 == 0)) {
    pDVar2 = FUN_1092681e();
    uVar4 = 0x16;
    *pDVar2 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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


// ==== 1092609a __cftof_l

/* Library Function - Single Match
    __cftof_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftof_l(double *param_1,undefined1 *param_2,int param_3,size_t param_4,localeinfo_struct *param_5)

{
  DWORD *pDVar1;
  size_t _SizeInBytes;
  errno_t eVar2;
  _strflt local_30;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_30,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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


// ==== 1092616e __cftog_l

/* Library Function - Single Match
    __cftog_l
   
   Library: Visual Studio 2005 Release */

void __cdecl
__cftog_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
         localeinfo_struct *param_6)

{
  char *pcVar1;
  DWORD *pDVar2;
  errno_t eVar3;
  size_t _SizeInBytes;
  char *pcVar4;
  _strflt local_34;
  int local_24;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  __fltout2((_CRT_DOUBLE)*param_1,&local_34,local_20,0x16);
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    pDVar2 = FUN_1092681e();
    *pDVar2 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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


// ==== 10926266 __cftog

/* Library Function - Single Match
    __cftog
   
   Library: Visual Studio 2005 Release */

void __cdecl __cftog(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5)

{
  __cftog_l(param_1,param_2,param_3,param_4,param_5,(localeinfo_struct *)0x0);
  return;
}


// ==== 10926284 __cfltcvt_l

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


// ==== 1092630a __cfltcvt

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


// ==== 1092632b __initp_misc_cfltcvt_tab

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
    piVar1 = (int *)((int)&PTR_LAB_1096da20 + uVar3);
    iVar2 = FUN_109245d2(*piVar1);
    uVar3 = uVar3 + 4;
    *piVar1 = iVar2;
  } while (uVar3 < 0x28);
  return;
}


// ==== 1092634a __setdefaultprecision

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


// ==== 10926373 __ms_p5_test_fdiv

/* WARNING: Removing unreachable block (ram,0x109263a6) */
/* Library Function - Single Match
    __ms_p5_test_fdiv
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __ms_p5_test_fdiv(void)

{
  return 0;
}


// ==== 109263af __ms_p5_mp_test_fdiv

/* Library Function - Single Match
    __ms_p5_mp_test_fdiv
   
   Library: Visual Studio 2005 Release */

void __ms_p5_mp_test_fdiv(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  __ms_p5_test_fdiv();
  return;
}


// ==== 109263d8 comexecmd

/* Library Function - Single Match
    _comexecmd
   
   Library: Visual Studio 2005 Release */

intptr_t __cdecl comexecmd(char *param_1,char **param_2,char **param_3)

{
  DWORD *pDVar1;
  int iVar2;
  intptr_t iVar3;
  char *local_c;
  char *local_8;
  
  if ((param_1 == (char *)0x0) || (param_2 == (char **)0x0)) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    iVar2 = __cenvarg(param_2,param_3,&local_8,&local_c,param_1);
    if (iVar2 != -1) {
      iVar3 = __dospawn(2,param_1,local_8,local_c);
      _free(local_8);
      _free(local_c);
      return iVar3;
    }
  }
  return -1;
}


// ==== 1092644f __execve

/* Library Function - Single Match
    __execve
   
   Library: Visual Studio 2005 Release */

intptr_t __cdecl __execve(char *_Filename,char **_ArgList,char **_Env)

{
  DWORD DVar1;
  DWORD *pDVar2;
  uchar *puVar3;
  uchar *puVar4;
  size_t sVar5;
  errno_t eVar6;
  char *_Dst;
  size_t sVar7;
  intptr_t local_14;
  undefined **local_10;
  char *local_8;
  
  local_8 = _Filename;
  if ((((_Filename == (char *)0x0) || (*_Filename == '\0')) || (_ArgList == (char **)0x0)) ||
     ((*_ArgList == (char *)0x0 || (**_ArgList == '\0')))) {
    pDVar2 = FUN_1092681e();
    *pDVar2 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  puVar3 = __mbsrchr((uchar *)_Filename,0x5c);
  puVar4 = __mbsrchr((uchar *)_Filename,0x2f);
  if (puVar4 == (uchar *)0x0) {
    if ((puVar3 != (uchar *)0x0) ||
       (puVar3 = __mbschr((uchar *)_Filename,0x3a), puVar3 != (uchar *)0x0)) goto LAB_10926541;
    sVar5 = _strlen(_Filename);
    sVar5 = sVar5 + 3;
    local_8 = __calloc_crt(sVar5,1);
    if (local_8 != (char *)0x0) {
      eVar6 = _strcpy_s(local_8,sVar5,".\\");
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar6 = _strcat_s(local_8,sVar5,_Filename);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      puVar3 = (uchar *)(local_8 + 2);
      goto LAB_10926541;
    }
LAB_1092659e:
    local_14 = -1;
  }
  else {
    if ((puVar3 == (uchar *)0x0) || (puVar3 < puVar4)) {
      puVar3 = puVar4;
    }
LAB_10926541:
    local_14 = -1;
    puVar3 = __mbsrchr(puVar3,0x2e);
    if (puVar3 == (uchar *)0x0) {
      sVar5 = _strlen(local_8);
      sVar5 = sVar5 + 5;
      _Dst = __calloc_crt(sVar5,1);
      if (_Dst == (char *)0x0) goto LAB_1092659e;
      eVar6 = _strcpy_s(_Dst,sVar5,local_8);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar7 = _strlen(local_8);
      pDVar2 = FUN_1092681e();
      DVar1 = *pDVar2;
      local_10 = &PTR_DAT_1096da54;
      do {
        eVar6 = _strcpy_s(_Dst + sVar7,(rsize_t)(_Dst + (sVar5 - (int)(_Dst + sVar7))),*local_10);
        if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        eVar6 = __access_s(_Dst,0);
        if (eVar6 == 0) {
          pDVar2 = FUN_1092681e();
          *pDVar2 = DVar1;
          local_14 = comexecmd(_Dst,_ArgList,_Env);
          break;
        }
        local_10 = local_10 + -1;
      } while (0x1096da47 < (int)local_10);
      _free(_Dst);
    }
    else {
      eVar6 = __access_s(local_8,0);
      if (eVar6 == 0) {
        local_14 = comexecmd(local_8,_ArgList,_Env);
      }
    }
    if (local_8 != _Filename) {
      _free(local_8);
    }
  }
  return local_14;
}


// ==== 10926668 FUN_10926668

void __cdecl FUN_10926668(undefined4 param_1)

{
  DAT_109a0e38 = param_1;
  return;
}


// ==== 10926672 __invoke_watson

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
  
  iVar1 = DAT_1096d674;
  local_2d4 = 0x10001;
  _memset(&local_32c,0,0x50);
  local_2dc.ExceptionRecord = &local_32c;
  local_2dc.ContextRecord = (PCONTEXT)&local_2d4;
  local_32c.ExceptionCode = 0xc000000d;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_10934552();
  }
  uExitCode = 0xc000000d;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  __security_check_cookie(iVar1);
  return;
}


// ==== 1092679d FUN_1092679d

void __cdecl
FUN_1092679d(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}


// ==== 109267a6 FUN_109267a6

void __cdecl
FUN_109267a6(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_10924649(DAT_109a0e38);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x109267ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_10934552();
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}


// ==== 109267da FUN_109267da

void __cdecl
FUN_109267da(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  FUN_109267a6(param_1,param_2,param_3,param_4,param_5);
  return;
}


// ==== 109267e3 FUN_109267e3

int __cdecl FUN_109267e3(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_1096da58)[uVar1 * 2]) {
      return *(int *)(uVar1 * 8 + 0x1096da5c);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  return (-(uint)(0xe < param_1 - 0xbcU) & 0xe) + 8;
}


// ==== 1092681e FUN_1092681e

DWORD * FUN_1092681e(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10924822();
  if (pDVar1 == (DWORD *)0x0) {
    return (DWORD *)&DAT_1096dbc0;
  }
  return pDVar1 + 2;
}


// ==== 10926831 FUN_10926831

DWORD * FUN_10926831(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10924822();
  if (pDVar1 == (DWORD *)0x0) {
    return (DWORD *)&DAT_1096dbc4;
  }
  return pDVar1 + 3;
}


// ==== 10926844 FUN_10926844

void __cdecl FUN_10926844(DWORD param_1)

{
  DWORD *pDVar1;
  DWORD DVar2;
  
  pDVar1 = FUN_10926831();
  *pDVar1 = param_1;
  DVar2 = FUN_109267e3(param_1);
  pDVar1 = FUN_1092681e();
  *pDVar1 = DVar2;
  return;
}


// ==== 109268ec __close_nolock

/* Library Function - Single Match
    __close_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __close_nolock(int _FileHandle)

{
  intptr_t iVar1;
  intptr_t iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  iVar1 = __get_osfhandle(_FileHandle);
  if (iVar1 != -1) {
    if (((_FileHandle == 1) && ((*(byte *)(DAT_109a1660 + 0x74) & 1) != 0)) ||
       ((_FileHandle == 2 && ((*(byte *)(DAT_109a1660 + 0x3c) & 1) != 0)))) {
      iVar1 = __get_osfhandle(2);
      iVar2 = __get_osfhandle(1);
      if (iVar2 == iVar1) goto LAB_1092694b;
    }
    hObject = (HANDLE)__get_osfhandle(_FileHandle);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1092694d;
    }
  }
LAB_1092694b:
  DVar4 = 0;
LAB_1092694d:
  __free_osfhnd(_FileHandle);
  *(undefined1 *)((&DAT_109a1660)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38) = 0;
  if (DVar4 == 0) {
    iVar5 = 0;
  }
  else {
    FUN_10926844(DVar4);
    iVar5 = -1;
  }
  return iVar5;
}


// ==== 10926980 __close

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __close
   
   Library: Visual Studio 2005 Release */

int __cdecl __close(int _FileHandle)

{
  DWORD *pDVar1;
  int iVar2;
  int local_20;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_10926831();
    *pDVar1 = 0;
    pDVar1 = FUN_1092681e();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_109a160c)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_109a1660)[_FileHandle >> 5] + 4 + iVar2) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_109a1660)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_1092681e();
          *pDVar1 = 9;
          local_20 = -1;
        }
        else {
          local_20 = __close_nolock(_FileHandle);
        }
        FUN_10926a43();
        return local_20;
      }
    }
    pDVar1 = FUN_10926831();
    *pDVar1 = 0;
    pDVar1 = FUN_1092681e();
    *pDVar1 = 9;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}


// ==== 10926a43 FUN_10926a43

void FUN_10926a43(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}


// ==== 10926a4d __fileno

/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio 2005 Release */

int __cdecl __fileno(FILE *_File)

{
  DWORD *pDVar1;
  
  if (_File == (FILE *)0x0) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  return _File->_file;
}


// ==== 10926a7a __freebuf

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2005 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    _free(_File->_base);
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}


// ==== 10926aa8 __SEH_prolog4

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1096d674 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


// ==== 10926aed __SEH_epilog4

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


// ==== 10926b40 __except_handler4

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
  
  piVar8 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_1096d674);
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
          goto LAB_10926beb;
        }
        if (0 < iVar4) {
          if ((*param_1 == -0x1f928c9d) &&
             (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_1095fa84)
             , BVar5 != 0)) {
            ___DestructExceptionObject(param_1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(uint *)((int)param_2 + 0xc) != uVar7) {
            _EH4_LocalUnwind((int)param_2,uVar7,iVar1,&DAT_1096d674);
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
    _EH4_LocalUnwind((int)param_2,0xfffffffe,iVar1,&DAT_1096d674);
  }
LAB_10926beb:
  if (*piVar8 != -2) {
    __security_check_cookie(piVar8[1] + iVar1 ^ *(uint *)(*piVar8 + iVar1));
  }
  __security_check_cookie(piVar8[3] + iVar1 ^ *(uint *)(piVar8[2] + iVar1));
  return local_c;
}


// ==== 10926cd6 FUN_10926cd6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_10926cd6(char *param_1,char *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  uchar uVar3;
  DWORD *pDVar4;
  int iVar5;
  errno_t eVar6;
  char *pcVar7;
  uchar *_Str2;
  uchar *_Str1;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_109a14d4;
  local_10 = 0;
  local_c = 0;
  local_14 = 0;
  for (pcVar7 = param_2; *pcVar7 == ' '; pcVar7 = pcVar7 + 1) {
  }
  cVar1 = *pcVar7;
  if (cVar1 == 'a') {
    param_2 = (char *)0x109;
LAB_10926d42:
    local_8 = DAT_109a14d4 | 2;
  }
  else {
    if (cVar1 != 'r') {
      if (cVar1 != 'w') {
        pDVar4 = FUN_1092681e();
        *pDVar4 = 0x16;
        FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return (undefined4 *)0x0;
      }
      param_2 = (char *)0x301;
      goto LAB_10926d42;
    }
    local_8 = DAT_109a14d4 | 1;
    param_2 = (char *)0x0;
  }
  bVar2 = true;
  _Str2 = (uchar *)(pcVar7 + 1);
  uVar3 = *_Str2;
  if (uVar3 != '\0') {
    do {
      if (!bVar2) break;
      if ((char)uVar3 < 'T') {
        if (uVar3 == 'S') {
          if (local_c != 0) goto LAB_10926e7a;
          param_2 = (char *)((uint)param_2 | 0x20);
          local_c = 1;
        }
        else if (uVar3 != ' ') {
          if (uVar3 == '+') {
            if (((uint)param_2 & 2) != 0) goto LAB_10926e7a;
            param_2 = (char *)((uint)param_2 & 0xfffffffe | 2);
            local_8 = local_8 & 0xfffffffc | 0x80;
          }
          else if (uVar3 == ',') {
            local_14 = 1;
LAB_10926e7a:
            bVar2 = false;
          }
          else if (uVar3 == 'D') {
            if (((uint)param_2 & 0x40) != 0) goto LAB_10926e7a;
            param_2 = (char *)((uint)param_2 | 0x40);
          }
          else if (uVar3 == 'N') {
            param_2 = (char *)((uint)param_2 | 0x80);
          }
          else {
            if (uVar3 != 'R') goto LAB_10926f15;
            if (local_c != 0) goto LAB_10926e7a;
            param_2 = (char *)((uint)param_2 | 0x10);
            local_c = 1;
          }
        }
      }
      else if (uVar3 == 'T') {
        if (((uint)param_2 & 0x1000) != 0) goto LAB_10926e7a;
        param_2 = (char *)((uint)param_2 | 0x1000);
      }
      else if (uVar3 == 'b') {
        if (((uint)param_2 & 0xc000) != 0) goto LAB_10926e7a;
        param_2 = (char *)((uint)param_2 | 0x8000);
      }
      else if (uVar3 == 'c') {
        if (local_10 != 0) goto LAB_10926e7a;
        local_8 = local_8 | 0x4000;
        local_10 = 1;
      }
      else if (uVar3 == 'n') {
        if (local_10 != 0) goto LAB_10926e7a;
        local_8 = local_8 & 0xffffbfff;
        local_10 = 1;
      }
      else {
        if (uVar3 != 't') goto LAB_10926f15;
        if (((uint)param_2 & 0xc000) != 0) goto LAB_10926e7a;
        param_2 = (char *)((uint)param_2 | 0x4000);
      }
      _Str2 = _Str2 + 1;
      uVar3 = *_Str2;
    } while (uVar3 != '\0');
    if (local_14 != 0) {
      for (; *_Str2 == ' '; _Str2 = _Str2 + 1) {
      }
      iVar5 = __mbsnbcmp("ccs=",_Str2,4);
      if (iVar5 != 0) goto LAB_10926f15;
      _Str1 = _Str2 + 4;
      iVar5 = __mbsicmp(_Str1,(uchar *)"UTF-8");
      if (iVar5 == 0) {
        _Str2 = _Str2 + 9;
        param_2 = (char *)((uint)param_2 | 0x40000);
      }
      else {
        iVar5 = __mbsicmp(_Str1,(uchar *)"UTF-16LE");
        if (iVar5 == 0) {
          _Str2 = _Str2 + 0xc;
          param_2 = (char *)((uint)param_2 | 0x20000);
        }
        else {
          iVar5 = __mbsicmp(_Str1,(uchar *)"UNICODE");
          if (iVar5 != 0) goto LAB_10926f15;
          _Str2 = _Str2 + 0xb;
          param_2 = (char *)((uint)param_2 | 0x10000);
        }
      }
    }
  }
  for (; *_Str2 == ' '; _Str2 = _Str2 + 1) {
  }
  if (*_Str2 == '\0') {
    eVar6 = FID_conflict___sopen_s(&local_14,param_1,(int)param_2,param_3,0x180);
    if (eVar6 != 0) {
      return (undefined4 *)0x0;
    }
    _DAT_109a0af4 = _DAT_109a0af4 + 1;
    param_4[3] = local_8;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[2] = 0;
    param_4[7] = 0;
    param_4[4] = local_14;
    return param_4;
  }
LAB_10926f15:
  pDVar4 = FUN_1092681e();
  *pDVar4 = 0x16;
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return (undefined4 *)0x0;
}


// ==== 10926f76 FUN_10926f76

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 * FUN_10926f76(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar6 = (undefined4 *)0x0;
  __lock(1);
  iVar5 = 0;
  do {
    puVar7 = puVar6;
    if (DAT_109a2ae0 <= iVar5) {
LAB_1092706c:
      if (puVar7 != (undefined4 *)0x0) {
        puVar7[3] = puVar7[3] & 0x8000;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        puVar7[7] = 0;
        puVar7[4] = 0xffffffff;
      }
      FUN_1092709d();
      return puVar7;
    }
    piVar1 = (int *)(DAT_109a1794 + iVar5 * 4);
    if (*piVar1 == 0) {
      iVar5 = iVar5 * 4;
      pvVar4 = __malloc_crt(0x38);
      *(void **)(iVar5 + DAT_109a1794) = pvVar4;
      if (*(int *)(DAT_109a1794 + iVar5) != 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(*(int *)(DAT_109a1794 + iVar5) + 0x20,4000);
        if (iVar3 == 0) {
          _free(*(void **)(iVar5 + DAT_109a1794));
          *(undefined4 *)(iVar5 + DAT_109a1794) = 0;
        }
        else {
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar5 + DAT_109a1794) + 0x20));
          puVar7 = *(undefined4 **)(iVar5 + DAT_109a1794);
        }
      }
      goto LAB_1092706c;
    }
    uVar2 = *(uint *)(*piVar1 + 0xc);
    if (((uVar2 & 0x83) == 0) && (-1 < (short)uVar2)) {
      if ((iVar5 - 3U < 0x11) && (iVar3 = __mtinitlocknum(iVar5 + 0x10), iVar3 == 0))
      goto LAB_1092706c;
      FUN_1092331f(iVar5,*(int *)(DAT_109a1794 + iVar5 * 4));
      puVar7 = *(undefined4 **)(DAT_109a1794 + iVar5 * 4);
      if ((*(byte *)(puVar7 + 3) & 0x83) == 0) goto LAB_1092706c;
      FUN_10923383(iVar5,(int)puVar7);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


// ==== 1092709d FUN_1092709d

void FUN_1092709d(void)

{
  FUN_10929478(1);
  return;
}


// ==== 109270a8 __local_unwind4

/* Library Function - Single Match
    __local_unwind4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

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
  puStack_24 = &LAB_10927138;
  pvStack_28 = ExceptionList;
  local_20 = DAT_1096d674 ^ (uint)&pvStack_28;
  ExceptionList = &pvStack_28;
  while( true ) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((uVar2 == 0xfffffffe) || ((param_3 != 0xfffffffe && (uVar2 <= param_3)))) break;
    puVar1 = (undefined4 *)((*(uint *)(param_2 + 8) ^ *param_1) + 0x10 + uVar2 * 0xc);
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    if (puVar1[1] == 0) {
      __NLG_Notify(0x101);
      FUN_1092cf24();
    }
  }
  ExceptionList = pvStack_28;
  return;
}


// ==== 1092717e FUN_1092717e

void FUN_1092717e(int param_1)

{
  __local_unwind4(*(uint **)(param_1 + 0x28),*(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x1c));
  return;
}


// ==== 1092719a _EH4_CallFilterFunc

/* Library Function - Single Match
    @_EH4_CallFilterFunc@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_CallFilterFunc,8 */

void __fastcall _EH4_CallFilterFunc(undefined *param_1)

{
  (*(code *)param_1)();
  return;
}


// ==== 109271b1 _EH4_TransferToHandler

/* Library Function - Single Match
    @_EH4_TransferToHandler@8
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_TransferToHandler,8 */

void __fastcall _EH4_TransferToHandler(undefined *UNRECOVERED_JUMPTABLE)

{
  __NLG_Notify(1);
                    /* WARNING: Could not recover jumptable at 0x109271c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== 109271ca _EH4_GlobalUnwind

/* Library Function - Single Match
    @_EH4_GlobalUnwind@4
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_GlobalUnwind,4 */

void __fastcall _EH4_GlobalUnwind(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x109271df,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


// ==== 109271e4 _EH4_LocalUnwind

/* Library Function - Single Match
    @_EH4_LocalUnwind@16
   
   Library: Visual Studio 2005 Release
   __fastcall _EH4_LocalUnwind,16 */

void __fastcall _EH4_LocalUnwind(int param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  __local_unwind4(param_4,param_1,param_2);
  return;
}


// ==== 109271fb __flsbuf

/* Library Function - Single Match
    __flsbuf
   
   Library: Visual Studio 2005 Release */

int __cdecl __flsbuf(int _Ch,FILE *_File)

{
  char *_Buf;
  char *pcVar1;
  FILE *_File_00;
  DWORD *pDVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined *puVar5;
  int unaff_EDI;
  uint uVar6;
  longlong lVar7;
  uint local_8;
  
  _File_00 = _File;
  _File = (FILE *)__fileno(_File);
  uVar6 = _File_00->_flag;
  if ((uVar6 & 0x82) == 0) {
    pDVar2 = FUN_1092681e();
    *pDVar2 = 9;
LAB_1092721f:
    _File_00->_flag = _File_00->_flag | 0x20;
    return -1;
  }
  if ((uVar6 & 0x40) != 0) {
    pDVar2 = FUN_1092681e();
    *pDVar2 = 0x22;
    goto LAB_1092721f;
  }
  if ((uVar6 & 1) != 0) {
    _File_00->_cnt = 0;
    if ((uVar6 & 0x10) == 0) {
      _File_00->_flag = uVar6 | 0x20;
      return -1;
    }
    _File_00->_ptr = _File_00->_base;
    _File_00->_flag = uVar6 & 0xfffffffe;
  }
  uVar6 = _File_00->_flag;
  _File_00->_flag = uVar6 & 0xffffffef | 2;
  _File_00->_cnt = 0;
  local_8 = 0;
  if (((uVar6 & 0x10c) == 0) &&
     (((ppuVar3 = FUN_1092320c(), _File_00 != (FILE *)(ppuVar3 + 8) &&
       (ppuVar3 = FUN_1092320c(), _File_00 != (FILE *)(ppuVar3 + 0x10))) ||
      (iVar4 = __isatty((int)_File), iVar4 == 0)))) {
    __getbuf(_File_00);
  }
  if ((_File_00->_flag & 0x108) == 0) {
    uVar6 = 1;
    local_8 = __write((int)_File,&_Ch,1);
  }
  else {
    _Buf = _File_00->_base;
    pcVar1 = _File_00->_ptr;
    _File_00->_ptr = _Buf + 1;
    uVar6 = (int)pcVar1 - (int)_Buf;
    _File_00->_cnt = _File_00->_bufsiz + -1;
    if ((int)uVar6 < 1) {
      if ((_File == (FILE *)0xffffffff) || (_File == (FILE *)0xfffffffe)) {
        puVar5 = &DAT_1096dc60;
      }
      else {
        puVar5 = (undefined *)(((uint)_File & 0x1f) * 0x38 + (&DAT_109a1660)[(int)_File >> 5]);
      }
      if (((puVar5[4] & 0x20) != 0) &&
         (lVar7 = __lseeki64((int)_File,0x200000000,unaff_EDI), lVar7 == -1)) goto LAB_10927345;
    }
    else {
      local_8 = __write((int)_File,_Buf,uVar6);
    }
    *_File_00->_base = (char)_Ch;
  }
  if (local_8 == uVar6) {
    return _Ch & 0xff;
  }
LAB_10927345:
  _File_00->_flag = _File_00->_flag | 0x20;
  return -1;
}


// ==== 1092735b write_char

/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2005 Release */

void __cdecl write_char(void)

{
  int *piVar1;
  byte in_AL;
  uint uVar2;
  FILE *in_ECX;
  int *unaff_ESI;
  
  if (((in_ECX->_flag & 0x40) == 0) || (in_ECX->_base != (char *)0x0)) {
    piVar1 = &in_ECX->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = __flsbuf((int)(char)in_AL,in_ECX);
    }
    else {
      *in_ECX->_ptr = in_AL;
      in_ECX->_ptr = in_ECX->_ptr + 1;
      uVar2 = (uint)in_AL;
    }
    if (uVar2 == 0xffffffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}


// ==== 1092738e write_multi_char

/* Library Function - Single Match
    _write_multi_char
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char();
  } while (*in_EAX != -1);
  return;
}


// ==== 109273b2 write_string

/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 2005 Release */

void __cdecl write_string(int param_1)

{
  int *in_EAX;
  DWORD *pDVar1;
  int unaff_EDI;
  
  if (((*(byte *)(unaff_EDI + 0xc) & 0x40) == 0) || (*(int *)(unaff_EDI + 8) != 0)) {
    while (0 < param_1) {
      param_1 = param_1 + -1;
      write_char();
      if (*in_EAX == -1) {
        pDVar1 = FUN_1092681e();
        if (*pDVar1 != 0x2a) {
          return;
        }
        write_char();
      }
    }
  }
  else {
    *in_EAX = *in_EAX + param_1;
  }
  return;
}


// ==== 10927427 FUN_10927427

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_10927427(FILE *param_1,byte *param_2,localeinfo_struct *param_3,wchar_t *param_4)

{
  byte bVar1;
  wchar_t _WCh;
  short *psVar2;
  int *piVar3;
  DWORD *pDVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined3 extraout_var;
  int iVar8;
  code *pcVar9;
  errno_t eVar10;
  int extraout_ECX;
  uint uVar11;
  byte *pbVar12;
  size_t sVar13;
  wchar_t *pwVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  wchar_t *pwVar18;
  undefined4 uVar19;
  localeinfo_struct *plVar20;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  int local_270;
  int local_26c [2];
  size_t local_264;
  localeinfo_struct local_260;
  int local_258;
  char local_254;
  wchar_t *local_250;
  int local_24c;
  int local_248;
  byte *local_244;
  int local_240;
  int local_23c;
  int local_238;
  undefined1 local_234;
  char local_233;
  int local_230;
  FILE *local_22c;
  wchar_t *local_228;
  size_t local_224;
  wchar_t *local_220;
  int local_21c;
  byte local_215;
  uint local_214;
  wchar_t local_210 [10];
  undefined1 local_1fc [491];
  undefined2 local_11;
  uint local_8;
  
  local_8 = DAT_1096d674 ^ (uint)local_1fc;
  local_22c = param_1;
  local_228 = param_4;
  local_248 = 0;
  local_214 = 0;
  local_23c = 0;
  local_21c = 0;
  local_238 = 0;
  local_24c = 0;
  local_240 = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_260,param_3);
  if (local_22c != (FILE *)0x0) {
    if ((local_22c->_flag & 0x40) == 0) {
      iVar5 = __fileno(local_22c);
      if ((iVar5 == -1) || (iVar5 = __fileno(local_22c), iVar5 == -2)) {
        puVar7 = &DAT_1096dc60;
      }
      else {
        iVar5 = __fileno(local_22c);
        uVar6 = __fileno(local_22c);
        puVar7 = (undefined *)((uVar6 & 0x1f) * 0x38 + (&DAT_109a1660)[iVar5 >> 5]);
      }
      if ((puVar7[0x24] & 0x7f) == 0) {
        iVar5 = __fileno(local_22c);
        if ((iVar5 == -1) || (iVar5 = __fileno(local_22c), iVar5 == -2)) {
          puVar7 = &DAT_1096dc60;
        }
        else {
          iVar5 = __fileno(local_22c);
          uVar6 = __fileno(local_22c);
          puVar7 = (undefined *)((uVar6 & 0x1f) * 0x38 + (&DAT_109a1660)[iVar5 >> 5]);
        }
        if ((puVar7[0x24] & 0x80) == 0) goto LAB_10927565;
      }
    }
    else {
LAB_10927565:
      if (param_2 != (byte *)0x0) {
        local_215 = *param_2;
        local_230 = 0;
        local_224 = 0;
        local_250 = (wchar_t *)0x0;
        iVar5 = 0;
        while ((local_215 != 0 && (pbVar12 = param_2 + 1, local_244 = pbVar12, -1 < local_230))) {
          if ((byte)(local_215 - 0x20) < 0x59) {
            uVar6 = (byte)"UNICODE"[(char)local_215] & 0xf;
          }
          else {
            uVar6 = 0;
          }
          local_270 = (int)(char)(&DAT_10960170)[uVar6 * 8 + iVar5] >> 4;
          switch(local_270) {
          case 0:
switchD_109275c9_caseD_0:
            local_240 = 0;
            iVar5 = __isleadbyte_l((uint)local_215,&local_260);
            if (iVar5 != 0) {
              write_char();
              local_244 = param_2 + 2;
              if (*pbVar12 == 0) {
LAB_10927d5c:
                pDVar4 = FUN_1092681e();
                *pDVar4 = 0x16;
                goto LAB_10927497;
              }
            }
            write_char();
            break;
          case 1:
            local_21c = -1;
            local_274 = 0;
            local_24c = 0;
            local_23c = 0;
            local_238 = 0;
            local_214 = 0;
            local_240 = 0;
            break;
          case 2:
            if (local_215 == 0x20) {
              local_214 = local_214 | 2;
            }
            else if (local_215 == 0x23) {
              local_214 = local_214 | 0x80;
            }
            else if (local_215 == 0x2b) {
              local_214 = local_214 | 1;
            }
            else if (local_215 == 0x2d) {
              local_214 = local_214 | 4;
            }
            else if (local_215 == 0x30) {
              local_214 = local_214 | 8;
            }
            break;
          case 3:
            if (local_215 == 0x2a) {
              local_228 = param_4 + 2;
              local_23c = *(int *)param_4;
              if (local_23c < 0) {
                local_214 = local_214 | 4;
                local_23c = -local_23c;
              }
            }
            else {
              local_23c = local_23c * 10 + -0x30 + (int)(char)local_215;
            }
            break;
          case 4:
            local_21c = 0;
            break;
          case 5:
            if (local_215 == 0x2a) {
              local_228 = param_4 + 2;
              local_21c = *(int *)param_4;
              if (local_21c < 0) {
                local_21c = -1;
              }
            }
            else {
              local_21c = local_21c * 10 + -0x30 + (int)(char)local_215;
            }
            break;
          case 6:
            if (local_215 == 0x49) {
              bVar1 = *pbVar12;
              if ((bVar1 == 0x36) && (param_2[2] == 0x34)) {
                local_214 = local_214 | 0x8000;
                local_244 = param_2 + 3;
              }
              else if ((bVar1 == 0x33) && (param_2[2] == 0x32)) {
                local_214 = local_214 & 0xffff7fff;
                local_244 = param_2 + 3;
              }
              else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                       ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
                local_270 = 0;
                goto switchD_109275c9_caseD_0;
              }
            }
            else if (local_215 == 0x68) {
              local_214 = local_214 | 0x20;
            }
            else if (local_215 == 0x6c) {
              if (*pbVar12 == 0x6c) {
                local_214 = local_214 | 0x1000;
                local_244 = param_2 + 2;
              }
              else {
                local_214 = local_214 | 0x10;
              }
            }
            else if (local_215 == 0x77) {
              local_214 = local_214 | 0x800;
            }
            break;
          case 7:
            if ((char)local_215 < 'e') {
              if (local_215 == 100) {
LAB_109279a8:
                local_214 = local_214 | 0x40;
LAB_109279ac:
                local_224 = 10;
LAB_109279b3:
                if (((short)local_214 < 0) || ((local_214 & 0x1000) != 0)) {
                  uVar6 = *(uint *)param_4;
                  uVar11 = *(uint *)(param_4 + 2);
                  local_228 = param_4 + 4;
                }
                else {
                  local_228 = param_4 + 2;
                  if ((local_214 & 0x20) == 0) {
                    uVar6 = *(uint *)param_4;
                    if ((local_214 & 0x40) == 0) {
                      uVar11 = 0;
                    }
                    else {
                      uVar11 = (int)uVar6 >> 0x1f;
                    }
                  }
                  else {
                    if ((local_214 & 0x40) == 0) {
                      uVar6 = (uint)(ushort)*param_4;
                    }
                    else {
                      uVar6 = (uint)*param_4;
                    }
                    uVar11 = (int)uVar6 >> 0x1f;
                  }
                }
                if ((((local_214 & 0x40) != 0) && ((int)uVar11 < 1)) && ((int)uVar11 < 0)) {
                  bVar15 = uVar6 != 0;
                  uVar6 = -uVar6;
                  uVar11 = -(uVar11 + bVar15);
                  local_214 = local_214 | 0x100;
                }
                uVar16 = CONCAT44(uVar11,uVar6);
                if ((local_214 & 0x9000) == 0) {
                  uVar11 = 0;
                }
                if (local_21c < 0) {
                  local_21c = 1;
                }
                else {
                  local_214 = local_214 & 0xfffffff7;
                  if (0x200 < local_21c) {
                    local_21c = 0x200;
                  }
                }
                if (uVar6 == 0 && uVar11 == 0) {
                  local_238 = 0;
                }
                pwVar14 = &local_11;
                while( true ) {
                  uVar6 = uVar11;
                  iVar5 = local_21c + -1;
                  if ((local_21c < 1) && ((uint)uVar16 == 0 && uVar6 == 0)) break;
                  local_21c = iVar5;
                  uVar16 = __aulldvrm((uint)uVar16,uVar6,local_224,(int)local_224 >> 0x1f);
                  iVar5 = extraout_ECX + 0x30;
                  if (0x39 < iVar5) {
                    iVar5 = iVar5 + local_248;
                  }
                  *(char *)pwVar14 = (char)iVar5;
                  pwVar14 = (wchar_t *)((int)pwVar14 + -1);
                  uVar11 = (uint)((ulonglong)uVar16 >> 0x20);
                  local_264 = uVar6;
                }
                local_224 = (int)&local_11 + -(int)pwVar14;
                local_220 = (wchar_t *)((int)pwVar14 + 1);
                local_21c = iVar5;
                if (((local_214 & 0x200) != 0) && ((local_224 == 0 || (*(char *)local_220 != '0'))))
                {
                  *(char *)pwVar14 = '0';
                  local_224 = (int)&local_11 + -(int)pwVar14 + 1;
                  local_220 = pwVar14;
                }
              }
              else if ((char)local_215 < 'T') {
                if (local_215 == 0x53) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
                  goto LAB_10927831;
                }
                if (local_215 == 0x41) {
LAB_109277dd:
                  local_215 = local_215 + 0x20;
                  local_274 = 1;
LAB_109277ea:
                  local_214 = local_214 | 0x40;
                  local_264 = 0x200;
                  pwVar14 = local_210;
                  sVar13 = local_264;
                  pwVar18 = local_210;
                  if (local_21c < 0) {
                    local_21c = 6;
                  }
                  else if (local_21c == 0) {
                    if (local_215 == 0x67) {
                      local_21c = 1;
                    }
                  }
                  else {
                    if (0x200 < local_21c) {
                      local_21c = 0x200;
                    }
                    if (0xa3 < local_21c) {
                      sVar13 = local_21c + 0x15d;
                      local_220 = local_210;
                      local_250 = __malloc_crt(sVar13);
                      pwVar14 = local_250;
                      pwVar18 = local_250;
                      if (local_250 == (wchar_t *)0x0) {
                        local_21c = 0xa3;
                        pwVar14 = local_210;
                        sVar13 = local_264;
                        pwVar18 = local_220;
                      }
                    }
                  }
                  local_220 = pwVar18;
                  local_264 = sVar13;
                  local_27c = *(undefined4 *)param_4;
                  local_228 = param_4 + 4;
                  local_278 = *(undefined4 *)(param_4 + 2);
                  plVar20 = &local_260;
                  iVar8 = (int)(char)local_215;
                  puVar17 = &local_27c;
                  pwVar18 = pwVar14;
                  sVar13 = local_264;
                  iVar5 = local_21c;
                  uVar19 = local_274;
                  pcVar9 = (code *)FUN_10924649((int)PTR_LAB_1096da38);
                  (*pcVar9)(puVar17,pwVar18,sVar13,iVar8,iVar5,uVar19,plVar20);
                  uVar6 = local_214 & 0x80;
                  if ((uVar6 != 0) && (local_21c == 0)) {
                    plVar20 = &local_260;
                    pwVar18 = pwVar14;
                    pcVar9 = (code *)FUN_10924649((int)PTR_LAB_1096da44);
                    (*pcVar9)(pwVar18,plVar20);
                  }
                  if ((local_215 == 0x67) && (uVar6 == 0)) {
                    plVar20 = &local_260;
                    pwVar18 = pwVar14;
                    pcVar9 = (code *)FUN_10924649((int)PTR_LAB_1096da40);
                    (*pcVar9)(pwVar18,plVar20);
                  }
                  if ((char)*pwVar14 == '-') {
                    local_214 = local_214 | 0x100;
                    local_220 = (wchar_t *)((int)pwVar14 + 1);
                    pwVar14 = local_220;
                  }
LAB_1092791e:
                  local_224 = _strlen((char *)pwVar14);
                }
                else if (local_215 == 0x43) {
                  if ((local_214 & 0x830) == 0) {
                    local_214 = local_214 | 0x800;
                  }
LAB_1092788e:
                  local_228 = param_4 + 2;
                  if ((local_214 & 0x810) == 0) {
                    local_210[0]._0_1_ = (char)*param_4;
                    local_224 = 1;
                  }
                  else {
                    eVar10 = _wctomb_s((int *)&local_224,(char *)local_210,0x200,*param_4);
                    if (eVar10 != 0) {
                      local_24c = 1;
                    }
                  }
                  local_220 = local_210;
                }
                else if ((local_215 == 0x45) || (local_215 == 0x47)) goto LAB_109277dd;
              }
              else {
                if (local_215 == 0x58) goto LAB_10927ab3;
                if (local_215 == 0x5a) {
                  psVar2 = *(short **)param_4;
                  local_228 = param_4 + 2;
                  pwVar14 = (wchar_t *)PTR_s__null__1096dbc8;
                  local_220 = (wchar_t *)PTR_s__null__1096dbc8;
                  if ((psVar2 == (short *)0x0) ||
                     (pwVar18 = *(wchar_t **)(psVar2 + 2), pwVar18 == (wchar_t *)0x0))
                  goto LAB_1092791e;
                  local_224 = (size_t)*psVar2;
                  local_220 = pwVar18;
                  if ((local_214 & 0x800) == 0) {
                    local_240 = 0;
                  }
                  else {
                    local_224 = (int)local_224 / 2;
                    local_240 = 1;
                  }
                }
                else {
                  if (local_215 == 0x61) goto LAB_109277ea;
                  if (local_215 == 99) goto LAB_1092788e;
                }
              }
LAB_10927c2b:
              if (local_24c == 0) {
                if ((local_214 & 0x40) != 0) {
                  if ((local_214 & 0x100) == 0) {
                    if ((local_214 & 1) == 0) {
                      if ((local_214 & 2) == 0) goto LAB_10927c61;
                      local_234 = 0x20;
                    }
                    else {
                      local_234 = 0x2b;
                    }
                  }
                  else {
                    local_234 = 0x2d;
                  }
                  local_238 = 1;
                }
LAB_10927c61:
                iVar5 = (local_23c - local_224) - local_238;
                if ((local_214 & 0xc) == 0) {
                  write_multi_char(0x20,iVar5);
                }
                write_string(local_238);
                if (((local_214 & 8) != 0) && ((local_214 & 4) == 0)) {
                  write_multi_char(0x30,iVar5);
                }
                if ((local_240 == 0) || ((int)local_224 < 1)) {
                  write_string(local_224);
                }
                else {
                  local_264 = local_224;
                  pwVar14 = local_220;
                  do {
                    _WCh = *pwVar14;
                    local_264 = local_264 - 1;
                    pwVar14 = pwVar14 + 1;
                    eVar10 = _wctomb_s(local_26c,(char *)((int)&local_11 + 1),6,_WCh);
                    if ((eVar10 != 0) || (local_26c[0] == 0)) {
                      local_230 = -1;
                      break;
                    }
                    write_string(local_26c[0]);
                  } while (local_264 != 0);
                }
                if ((-1 < local_230) && ((local_214 & 4) != 0)) {
                  write_multi_char(0x20,iVar5);
                }
              }
            }
            else {
              if ('p' < (char)local_215) {
                if (local_215 == 0x73) {
LAB_10927831:
                  iVar5 = local_21c;
                  if (local_21c == -1) {
                    iVar5 = 0x7fffffff;
                  }
                  local_228 = param_4 + 2;
                  local_220 = *(wchar_t **)param_4;
                  if ((local_214 & 0x810) == 0) {
                    pwVar14 = local_220;
                    if (local_220 == (wchar_t *)0x0) {
                      pwVar14 = (wchar_t *)PTR_s__null__1096dbc8;
                      local_220 = (wchar_t *)PTR_s__null__1096dbc8;
                    }
                    for (; (iVar5 != 0 && (iVar5 = iVar5 + -1, (char)*pwVar14 != '\0'));
                        pwVar14 = (wchar_t *)((int)pwVar14 + 1)) {
                    }
                    local_224 = (int)pwVar14 - (int)local_220;
                  }
                  else {
                    if (local_220 == (wchar_t *)0x0) {
                      local_220 = (wchar_t *)PTR_u__null__1096dbcc;
                    }
                    local_240 = 1;
                    for (pwVar14 = local_220;
                        (iVar5 != 0 && (iVar5 = iVar5 + -1, *pwVar14 != L'\0'));
                        pwVar14 = pwVar14 + 1) {
                    }
                    local_224 = (int)pwVar14 - (int)local_220 >> 1;
                  }
                  goto LAB_10927c2b;
                }
                if (local_215 == 0x75) goto LAB_109279ac;
                if (local_215 != 0x78) goto LAB_10927c2b;
                local_248 = 0x27;
LAB_10927ad9:
                local_224 = 0x10;
                if ((local_214 & 0x80) != 0) {
                  local_233 = (char)local_248 + 'Q';
                  local_234 = 0x30;
                  local_238 = 2;
                }
                goto LAB_109279b3;
              }
              if (local_215 == 0x70) {
                local_21c = 8;
LAB_10927ab3:
                local_248 = 7;
                goto LAB_10927ad9;
              }
              if ((char)local_215 < 'e') goto LAB_10927c2b;
              if ((char)local_215 < 'h') goto LAB_109277ea;
              if (local_215 == 0x69) goto LAB_109279a8;
              if (local_215 != 0x6e) {
                if (local_215 != 0x6f) goto LAB_10927c2b;
                local_224 = 8;
                if ((local_214 & 0x80) != 0) {
                  local_214 = local_214 | 0x200;
                }
                goto LAB_109279b3;
              }
              piVar3 = *(int **)param_4;
              local_228 = param_4 + 2;
              bVar15 = FUN_10935cac();
              if (CONCAT31(extraout_var,bVar15) == 0) goto LAB_10927d5c;
              if ((local_214 & 0x20) == 0) {
                *piVar3 = local_230;
              }
              else {
                *(undefined2 *)piVar3 = (undefined2)local_230;
              }
              local_24c = 1;
            }
            if (local_250 != (wchar_t *)0x0) {
              _free(local_250);
              local_250 = (wchar_t *)0x0;
            }
          }
          local_215 = *local_244;
          iVar5 = local_270;
          param_2 = local_244;
          param_4 = local_228;
        }
        if (local_254 != '\0') {
          *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
        }
        goto LAB_10927d83;
      }
    }
  }
  pDVar4 = FUN_1092681e();
  *pDVar4 = 0x16;
LAB_10927497:
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_254 != '\0') {
    *(uint *)(local_258 + 0x70) = *(uint *)(local_258 + 0x70) & 0xfffffffd;
  }
LAB_10927d83:
  __security_check_cookie(local_8 ^ (uint)local_1fc);
  return;
}


// ==== 10927dbb __vsprintf_l

/* Library Function - Single Match
    __vsprintf_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __vsprintf_l(char *_DstBuf,char *_Format,_locale_t param_3,va_list _ArgList)

{
  DWORD *pDVar1;
  int iVar2;
  FILE local_24;
  
  if ((_Format == (char *)0x0) || (_DstBuf == (char *)0x0)) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else {
    local_24._base = _DstBuf;
    local_24._ptr = _DstBuf;
    local_24._cnt = 0x7fffffff;
    local_24._flag = 0x42;
    iVar2 = FUN_10927427(&local_24,(byte *)_Format,param_3,(wchar_t *)_ArgList);
    local_24._cnt = local_24._cnt + -1;
    if (local_24._cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *local_24._ptr = '\0';
    }
  }
  return iVar2;
}


// ==== 10927e4e FID_conflict:__vscprintf_helper

/* Library Function - Multiple Matches With Different Base Names
    __vscprintf_helper
    __vscwprintf_helper
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

undefined4 __cdecl
FID_conflict___vscprintf_helper
          (undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_2 == 0) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar2 = 0xffffffff;
  }
  else {
    local_20 = 0x7fffffff;
    local_18 = 0x42;
    local_1c = 0;
    local_24 = 0;
    uVar2 = (*(code *)param_1)(&local_24,param_2,param_3,param_4);
  }
  return uVar2;
}


// ==== 10927f07 __vsnprintf_helper

/* Library Function - Single Match
    __vsnprintf_helper
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsnprintf_helper(undefined *param_1,char *param_2,uint param_3,int param_4,undefined4 param_5,
                  undefined4 param_6)

{
  DWORD *pDVar1;
  int iVar2;
  int iVar3;
  FILE local_24;
  
  if (param_4 == 0) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else if ((param_3 == 0) || (param_2 != (char *)0x0)) {
    local_24._cnt = 0x7fffffff;
    if (param_3 < 0x80000000) {
      local_24._cnt = param_3;
    }
    local_24._flag = 0x42;
    local_24._base = param_2;
    local_24._ptr = param_2;
    iVar2 = (*(code *)param_1)(&local_24,param_4,param_5,param_6);
    if (param_2 != (char *)0x0) {
      if (-1 < iVar2) {
        local_24._cnt = local_24._cnt - 1;
        if (-1 < local_24._cnt) {
          *local_24._ptr = '\0';
          return iVar2;
        }
        iVar3 = __flsbuf(0,&local_24);
        if (iVar3 != -1) {
          return iVar2;
        }
      }
      param_2[param_3 - 1] = '\0';
      iVar2 = (-1 < local_24._cnt) - 2;
    }
  }
  else {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  return iVar2;
}


// ==== 10927ff8 FID_conflict:__vsnprintf_c_l

/* Library Function - Multiple Matches With Different Base Names
    __vsnprintf_c_l
    __vsprintf_p_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
FID_conflict___vsnprintf_c_l
          (char *_DstBuf,size_t _MaxCount,char *param_3,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnprintf_helper(FUN_10927427,_DstBuf,_MaxCount,(int)param_3,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


// ==== 10928020 __vsprintf_s_l

/* Library Function - Single Match
    __vsprintf_s_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsprintf_s_l(char *_DstBuf,size_t _DstSize,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  DWORD *pDVar1;
  int iVar2;
  
  if (_Format == (char *)0x0) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    if ((_DstBuf == (char *)0x0) || (_DstSize == 0)) {
      pDVar1 = FUN_1092681e();
      *pDVar1 = 0x16;
    }
    else {
      iVar2 = __vsnprintf_helper(&DAT_109373c8,_DstBuf,_DstSize,(int)_Format,_Locale,_ArgList);
      if (iVar2 < 0) {
        *_DstBuf = '\0';
      }
      if (iVar2 != -2) {
        return iVar2;
      }
      pDVar1 = FUN_1092681e();
      *pDVar1 = 0x22;
    }
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}


// ==== 109280c1 __vsnprintf_s_l

/* Library Function - Single Match
    __vsnprintf_s_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsnprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,char *_Format,_locale_t _Locale,
               va_list _ArgList)

{
  DWORD DVar1;
  DWORD *pDVar2;
  int iVar3;
  
  if (_Format == (char *)0x0) {
    pDVar2 = FUN_1092681e();
    *pDVar2 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  if (_MaxCount == 0) {
    if (_DstBuf == (char *)0x0) {
      if (_DstSize == 0) {
        return 0;
      }
    }
    else {
LAB_1092810b:
      if (_DstSize != 0) {
        pDVar2 = FUN_1092681e();
        if (_MaxCount < _DstSize) {
          DVar1 = *pDVar2;
          iVar3 = __vsnprintf_helper(&DAT_109373c8,_DstBuf,_MaxCount + 1,(int)_Format,_Locale,
                                     _ArgList);
          if (iVar3 == -2) {
            pDVar2 = FUN_1092681e();
            if (*pDVar2 != 0x22) {
              return -1;
            }
            pDVar2 = FUN_1092681e();
            *pDVar2 = DVar1;
            return -1;
          }
LAB_1092819b:
          if (-1 < iVar3) {
            return iVar3;
          }
        }
        else {
          DVar1 = *pDVar2;
          iVar3 = __vsnprintf_helper(&DAT_109373c8,_DstBuf,_DstSize,(int)_Format,_Locale,_ArgList);
          _DstBuf[_DstSize - 1] = '\0';
          if (iVar3 != -2) goto LAB_1092819b;
          if (_MaxCount == 0xffffffff) {
            pDVar2 = FUN_1092681e();
            if (*pDVar2 != 0x22) {
              return -1;
            }
            pDVar2 = FUN_1092681e();
            *pDVar2 = DVar1;
            return -1;
          }
        }
        *_DstBuf = '\0';
        if (iVar3 != -2) {
          return -1;
        }
        pDVar2 = FUN_1092681e();
        *pDVar2 = 0x22;
        goto LAB_109281b1;
      }
    }
  }
  else if (_DstBuf != (char *)0x0) goto LAB_1092810b;
  pDVar2 = FUN_1092681e();
  *pDVar2 = 0x16;
LAB_109281b1:
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}


// ==== 109281c6 __vsnprintf_s

/* Library Function - Single Match
    __vsnprintf_s
   
   Library: Visual Studio 2005 Release */

int __cdecl
__vsnprintf_s(char *_DstBuf,size_t _SizeInBytes,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnprintf_s_l(_DstBuf,_SizeInBytes,_MaxCount,_Format,(_locale_t)0x0,_ArgList);
  return iVar1;
}


// ==== 1092820b FID_conflict:__vsnprintf_c_l

/* Library Function - Multiple Matches With Different Base Names
    __vsnprintf_c_l
    __vsprintf_p_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
FID_conflict___vsnprintf_c_l
          (char *_DstBuf,size_t _MaxCount,char *param_3,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  
  iVar1 = __vsnprintf_helper(&DAT_1093639f,_DstBuf,_MaxCount,(int)param_3,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


// ==== 10928233 FUN_10928233

uint __cdecl FUN_10928233(DWORD param_1)

{
  uint uVar1;
  
  Sleep(param_1);
  uVar1 = param_1 + 1000;
  if (DAT_109a0e3c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ==== 10928264 __malloc_crt

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
    if (DAT_109a0e3c == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_109a0e3c < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}


// ==== 109282a4 __calloc_crt

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
    if (DAT_109a0e3c == 0) break;
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_109a0e3c < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}


// ==== 109282ec __realloc_crt

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
    if (DAT_109a0e3c == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_109a0e3c < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}


// ==== 10928337 __recalloc_crt

/* Library Function - Single Match
    __recalloc_crt
   
   Library: Visual Studio 2005 Release */

void * __cdecl __recalloc_crt(void *_Ptr,size_t _Count,size_t _Size)

{
  void *pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = FUN_10922a80(_Ptr,_Count,_Size);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (_Size == 0) {
      return (void *)0x0;
    }
    if (DAT_109a0e3c == 0) {
      return (void *)0x0;
    }
    Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (DAT_109a0e3c < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return (void *)0x0;
}


// ==== 109283a3 __msize

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __msize
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

size_t __cdecl __msize(void *_Memory)

{
  DWORD *pDVar1;
  size_t sVar2;
  int iVar3;
  void *this;
  size_t local_20;
  
  if (_Memory == (void *)0x0) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    sVar2 = 0xffffffff;
  }
  else {
    if (DAT_109a1600 == 3) {
      this = (void *)0x4;
      __lock(4);
      iVar3 = thunk_FUN_1092971b(this,(int)_Memory);
      if (iVar3 != 0) {
        local_20 = *(int *)((int)_Memory + -4) - 9;
      }
      FUN_1092843d();
      if (iVar3 != 0) {
        return local_20;
      }
    }
    sVar2 = HeapSize(DAT_109a0f94,0,_Memory);
  }
  return sVar2;
}


// ==== 1092843d FUN_1092843d

void FUN_1092843d(void)

{
  FUN_10929478(4);
  return;
}


// ==== 10928446 __amsg_exit

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __amsg_exit(int param_1)

{
  code *pcVar1;
  
  __FF_MSGBANNER();
  FUN_10925431(param_1);
  pcVar1 = (code *)FUN_10924649((int)PTR___exit_1096dbd0);
  (*pcVar1)(0xff);
  return;
}


// ==== 1092846a FUN_1092846a

void __cdecl FUN_1092846a(undefined4 param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("mscoree.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"CorExitProcess");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
  }
  return;
}


// ==== 10928490 ___crtExitProcess

/* Library Function - Single Match
    ___crtExitProcess
   
   Library: Visual Studio 2005 Release */

void __cdecl ___crtExitProcess(int param_1)

{
  FUN_1092846a(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


// ==== 109284a5 FUN_109284a5

void FUN_109284a5(void)

{
  __lock(8);
  return;
}


// ==== 109284ae FUN_109284ae

void FUN_109284ae(void)

{
  FUN_10929478(8);
  return;
}


// ==== 109284b7 FUN_109284b7

void __cdecl FUN_109284b7(undefined4 *param_1)

{
  undefined4 *in_EAX;
  
  for (; in_EAX < param_1; in_EAX = in_EAX + 1) {
    if ((code *)*in_EAX != (code *)0x0) {
      (*(code *)*in_EAX)();
    }
  }
  return;
}


// ==== 109284cf __initterm_e

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


// ==== 109284ef __get_osplatform

/* Library Function - Single Match
    __get_osplatform
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_osplatform(int *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 != (int *)0x0) && (DAT_109a0e44 != 0)) {
    *param_1 = DAT_109a0e44;
    return 0;
  }
  pDVar1 = FUN_1092681e();
  *pDVar1 = 0x16;
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}


// ==== 1092859e __get_winmajor

/* Library Function - Single Match
    __get_winmajor
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __get_winmajor(undefined4 *param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (DAT_109a0e44 != 0)) {
    *param_1 = DAT_109a0e50;
    return 0;
  }
  pDVar1 = FUN_1092681e();
  *pDVar1 = 0x16;
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}


// ==== 10928684 __cinit

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2005 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_1095fa78);
  if (BVar1 != 0) {
    __fpmath(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e((undefined4 *)&DAT_1095733c,(undefined4 *)&DAT_1095765c);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_109291f3);
    puVar3 = &DAT_10957000;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_10957238);
    if ((DAT_109a177c != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_109a177c), BVar1 != 0)) {
      (*DAT_109a177c)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}


// ==== 10928716 FUN_10928716

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x109287e9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10928716(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  __lock(8);
  if (DAT_109a0e84 != 1) {
    _DAT_109a0e80 = 1;
    DAT_109a0e7c = (undefined1)param_3;
    if (param_2 == 0) {
      piVar2 = (int *)FUN_10924649(DAT_109a1774);
      piVar3 = (int *)FUN_10924649(DAT_109a1770);
      if (piVar2 != (int *)0x0) {
        while (piVar3 = piVar3 + -1, piVar2 <= piVar3) {
          if (*piVar3 != 0) {
            iVar1 = *piVar3;
            iVar4 = __encoded_null();
            if (iVar1 != iVar4) {
              pcVar5 = (code *)FUN_10924649(iVar1);
              (*pcVar5)();
            }
          }
        }
      }
      FUN_109284b7((undefined4 *)&DAT_10957a6c);
    }
    FUN_109284b7((undefined4 *)&DAT_10957c74);
  }
  FUN_109287e3();
  if (param_3 != 0) {
    return;
  }
  DAT_109a0e84 = 1;
  FUN_10929478(8);
  ___crtExitProcess(param_1);
  return;
}


// ==== 109287e3 FUN_109287e3

void FUN_109287e3(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_10929478(8);
  }
  return;
}


// ==== 109287f8 _exit

/* Library Function - Single Match
    _exit
   
   Library: Visual Studio 2005 Release */

void __cdecl _exit(int _Code)

{
  FUN_10928716(_Code,0,0);
  return;
}


// ==== 10928809 __exit

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2005 Release */

void __cdecl __exit(int param_1)

{
  FUN_10928716(param_1,1,0);
  return;
}


// ==== 1092881a __cexit

/* Library Function - Single Match
    __cexit
   
   Library: Visual Studio 2005 Release */

void __cdecl __cexit(void)

{
  FUN_10928716(0,0,1);
  return;
}


// ==== 10928838 __init_pointers

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2005 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_10929599(uVar1);
  FUN_10935851(uVar1);
  FUN_10926668(uVar1);
  FUN_10925784(uVar1);
  FUN_10937d78(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_109288cf();
  __initp_eh_hooks();
  PTR___exit_1096dbd0 = (undefined *)FUN_109245d2(0x10928809);
  return;
}


// ==== 109288cf FUN_109288cf

void FUN_109288cf(void)

{
  return;
}


// ==== 10928902 FUN_10928902

undefined4 __cdecl FUN_10928902(int param_1,DWORD param_2)

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
  
  pDVar5 = FUN_10924822();
  uVar7 = 0;
  if (pDVar5 != (DWORD *)0x0) {
    piVar1 = (int *)pDVar5[0x17];
    piVar6 = piVar1;
    do {
      if (*piVar6 == param_1) break;
      piVar6 = piVar6 + 3;
    } while (piVar6 < piVar1 + DAT_1096dc5c * 3);
    if ((piVar1 + DAT_1096dc5c * 3 <= piVar6) || (*piVar6 != param_1)) {
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
          if (DAT_1096dc50 < DAT_1096dc54 + DAT_1096dc50) {
            iVar8 = DAT_1096dc50 * 0xc;
            iVar9 = DAT_1096dc50;
            do {
              *(undefined4 *)(iVar8 + 8 + pDVar5[0x17]) = 0;
              iVar9 = iVar9 + 1;
              iVar8 = iVar8 + 0xc;
            } while (iVar9 < DAT_1096dc54 + DAT_1096dc50);
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


// ==== 10928a7b __wincmdln

/* Library Function - Single Match
    __wincmdln
   
   Library: Visual Studio 2005 Release */

byte * __wincmdln(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  
  bVar2 = false;
  if (DAT_109a1778 == 0) {
    ___initmbctable();
  }
  pbVar4 = DAT_109a2ae4;
  if (DAT_109a2ae4 == (byte *)0x0) {
    pbVar4 = &DAT_1095b756;
  }
  do {
    bVar1 = *pbVar4;
    if (bVar1 < 0x21) {
      if (bVar1 == 0) {
        return pbVar4;
      }
      if (!bVar2) {
        for (; (*pbVar4 != 0 && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
        }
        return pbVar4;
      }
    }
    if (bVar1 == 0x22) {
      bVar2 = !bVar2;
    }
    iVar3 = __ismbblead((uint)bVar1);
    if (iVar3 != 0) {
      pbVar4 = pbVar4 + 1;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}


// ==== 10928ad8 __setenvp

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
  
  if (DAT_109a1778 == 0) {
    ___initmbctable();
  }
  iVar5 = 0;
  pcVar4 = DAT_109a0ae8;
  if (DAT_109a0ae8 != (char *)0x0) {
    for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + sVar2 + 1) {
      if (*pcVar4 != '=') {
        iVar5 = iVar5 + 1;
      }
      sVar2 = _strlen(pcVar4);
    }
    puVar1 = __calloc_crt(iVar5 + 1,4);
    pcVar4 = DAT_109a0ae8;
    DAT_109a0e64 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      do {
        if (*pcVar4 == '\0') {
          _free(DAT_109a0ae8);
          DAT_109a0ae8 = (char *)0x0;
          *puVar1 = 0;
          DAT_109a1760 = 1;
          return 0;
        }
        sVar2 = _strlen(pcVar4);
        sVar2 = sVar2 + 1;
        if (*pcVar4 != '=') {
          _Dst = __calloc_crt(sVar2,1);
          *puVar1 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_109a0e64);
            DAT_109a0e64 = (undefined4 *)0x0;
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


// ==== 10928bbd parse_cmdline

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
        goto LAB_10928c4f;
      }
    }
    in_EDX = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != (byte *)0x0) {
    pbVar5[-1] = 0;
  }
LAB_10928c4f:
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


// ==== 10928d55 __setargv

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
  
  if (DAT_109a1778 == 0) {
    ___initmbctable();
  }
  DAT_109a0f8c = 0;
  GetModuleFileNameA((HMODULE)0x0,&DAT_109a0e88,0x104);
  _DAT_109a0e74 = &DAT_109a0e88;
  if ((DAT_109a2ae4 == (char *)0x0) || (local_8 = DAT_109a2ae4, *DAT_109a2ae4 == '\0')) {
    local_8 = &DAT_109a0e88;
  }
  parse_cmdline((undefined4 *)0x0,(byte *)0x0,(int *)&local_c);
  uVar1 = local_c;
  if ((local_c < 0x3fffffff) && (local_10 != 0xffffffff)) {
    _Size = local_c * 4 + local_10;
    if ((local_10 <= _Size) && (puVar2 = __malloc_crt(_Size), puVar2 != (undefined4 *)0x0)) {
      parse_cmdline(puVar2,(byte *)(puVar2 + uVar1),(int *)&local_c);
      _DAT_109a0e58 = local_c - 1;
      _DAT_109a0e5c = puVar2;
      return 0;
    }
  }
  return -1;
}


// ==== 10928e0e ___crtGetEnvironmentStringsA

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
  if (DAT_109a0f90 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_109a0f90 = 1;
      goto LAB_10928e60;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_109a0f90 = 2;
    }
  }
  if (DAT_109a0f90 != 1) {
    if ((DAT_109a0f90 != 2) && (DAT_109a0f90 != 0)) {
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
LAB_10928e60:
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


// ==== 10928f43 __ioinit

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
  
  uStack_c = 0x10928f4f;
  local_8 = 0;
  GetStartupInfoA(&local_68);
  local_8 = 0xfffffffe;
  puVar2 = __calloc_crt(0x20,0x38);
  if (puVar2 == (undefined4 *)0x0) {
LAB_1092917a:
    iVar7 = -1;
  }
  else {
    DAT_109a160c = 0x20;
    DAT_109a1660 = puVar2;
    for (; puVar2 < DAT_109a1660 + 0x1c0; puVar2 = puVar2 + 0xe) {
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
      while ((UVar10 = UVar9, (int)DAT_109a160c < (int)UVar9 &&
             (puVar2 = __calloc_crt(0x20,0x38), UVar10 = DAT_109a160c, puVar2 != (undefined4 *)0x0))
            ) {
        (&DAT_109a1660)[iVar7] = puVar2;
        DAT_109a160c = DAT_109a160c + 0x20;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x1c0; puVar2 = puVar2 + 0xe) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar2[2] = 0;
          *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) & 0x80;
          *(undefined1 *)((int)puVar2 + 0x25) = 10;
          *(undefined1 *)((int)puVar2 + 0x26) = 10;
          puVar1 = (&DAT_109a1660)[iVar7];
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
                     ((local_24 & 0x1f) * 0x38 + (int)(&DAT_109a1660)[(int)local_24 >> 5]);
            *puVar2 = *(undefined4 *)local_20;
            *(byte *)(puVar2 + 1) = (byte)*pUVar6;
            iVar7 = ___crtInitCritSecAndSpinCount(puVar2 + 3,4000);
            if (iVar7 == 0) goto LAB_1092917a;
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
      piVar8 = DAT_109a1660 + iVar7 * 0xe;
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
          if (iVar5 == 0) goto LAB_1092917a;
          piVar8[2] = piVar8[2] + 1;
        }
      }
      else {
        *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | 0x80;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    SetHandleCount(DAT_109a160c);
    iVar7 = 0;
  }
  return iVar7;
}


// ==== 109291cf __RTC_Initialize

/* Library Function - Single Match
    __RTC_Initialize
   
   Library: Visual Studio 2005 Release */

void __RTC_Initialize(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_10964b00;
  do {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_10964c00);
  return;
}


// ==== 10929217 ___heap_select

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


// ==== 10929272 __heap_init

/* Library Function - Single Match
    __heap_init
   
   Library: Visual Studio 2005 Release */

int __cdecl __heap_init(void)

{
  int iVar1;
  int in_stack_00000004;
  
  DAT_109a0f94 = HeapCreate((uint)(in_stack_00000004 == 0),0x1000,0);
  if (DAT_109a0f94 == (HANDLE)0x0) {
    return 0;
  }
  DAT_109a1600 = ___heap_select();
  if ((DAT_109a1600 == 3) && (iVar1 = ___sbh_heap_init(0x3f8), iVar1 == 0)) {
    HeapDestroy(DAT_109a0f94);
    DAT_109a0f94 = (HANDLE)0x0;
    return 0;
  }
  return 1;
}


// ==== 10929346 ___security_init_cookie

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
  if ((DAT_1096d674 == 0xbb40e64e) || ((DAT_1096d674 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
    uVar4 = local_c.dwHighDateTime ^ local_c.dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
    DAT_1096d674 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14.s.HighPart ^ local_14.s.LowPart;
    if (DAT_1096d674 == 0xbb40e64e) {
      DAT_1096d674 = 0xbb40e64f;
    }
    else if ((DAT_1096d674 & 0xffff0000) == 0) {
      DAT_1096d674 = DAT_1096d674 | DAT_1096d674 << 0x10;
    }
  }
  DAT_1096d678 = ~DAT_1096d674;
  return;
}


// ==== 109293da __mtinitlocks

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocks(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = 0;
  puVar3 = &DAT_109a0f98;
  do {
    if ((&DAT_1096dca4)[iVar2 * 2] == 1) {
      (&DAT_1096dca0)[iVar2 * 2] = puVar3;
      puVar3 = puVar3 + 0x18;
      iVar1 = ___crtInitCritSecAndSpinCount((&DAT_1096dca0)[iVar2 * 2],4000);
      if (iVar1 == 0) {
        (&DAT_1096dca0)[iVar2 * 2] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}


// ==== 10929423 __mtdeletelocks

/* Library Function - Single Match
    __mtdeletelocks
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  
  puVar1 = &DAT_1096dca0;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)*puVar1;
    if ((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (puVar1[1] != 1)) {
      DeleteCriticalSection(lpCriticalSection);
      _free(lpCriticalSection);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x1096ddc0);
  puVar1 = &DAT_1096dca0;
  do {
    if (((LPCRITICAL_SECTION)*puVar1 != (LPCRITICAL_SECTION)0x0) && (puVar1[1] == 1)) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*puVar1);
    }
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x1096ddc0);
  return;
}


// ==== 10929478 FUN_10929478

void __cdecl FUN_10929478(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1096dca0)[param_1 * 2]);
  return;
}


// ==== 109294a5 __mtinitlocknum

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __mtinitlocknum
   
   Library: Visual Studio 2005 Release */

int __cdecl __mtinitlocknum(int _LockNum)

{
  int *piVar1;
  void *_Memory;
  DWORD *pDVar2;
  int iVar3;
  int local_20;
  
  iVar3 = 1;
  local_20 = 1;
  if (DAT_109a0f94 == 0) {
    __FF_MSGBANNER();
    FUN_10925431(0x1e);
    ___crtExitProcess(0xff);
  }
  piVar1 = &DAT_1096dca0 + _LockNum * 2;
  if (*piVar1 == 0) {
    _Memory = __malloc_crt(0x18);
    if (_Memory == (void *)0x0) {
      pDVar2 = FUN_1092681e();
      *pDVar2 = 0xc;
      iVar3 = 0;
    }
    else {
      __lock(10);
      if (*piVar1 == 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(_Memory,4000);
        if (iVar3 == 0) {
          _free(_Memory);
          pDVar2 = FUN_1092681e();
          *pDVar2 = 0xc;
          local_20 = 0;
        }
        else {
          *piVar1 = (int)_Memory;
        }
      }
      else {
        _free(_Memory);
      }
      FUN_1092955f();
      iVar3 = local_20;
    }
  }
  return iVar3;
}


// ==== 1092955f FUN_1092955f

void FUN_1092955f(void)

{
  FUN_10929478(10);
  return;
}


// ==== 10929568 __lock

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 2005 Release */

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_1096dca0)[_File * 2] == 0) {
    iVar1 = __mtinitlocknum(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_1096dca0)[_File * 2]);
  return;
}


// ==== 10929599 FUN_10929599

void __cdecl FUN_10929599(undefined4 param_1)

{
  DAT_109a10e8 = param_1;
  return;
}


// ==== 109295ea __callnewh

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2005 Release */

int __cdecl __callnewh(size_t _Size)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_10924649(DAT_109a10e8);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(_Size);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}


// ==== 109296af ___sbh_heap_init

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl ___sbh_heap_init(undefined4 param_1)

{
  DAT_109a15ec = HeapAlloc(DAT_109a0f94,0,0x140);
  if (DAT_109a15ec == (LPVOID)0x0) {
    return 0;
  }
  DAT_109a10f0 = 0;
  DAT_109a15e8 = 0;
  DAT_109a15f4 = DAT_109a15ec;
  DAT_109a15f0 = param_1;
  DAT_109a15f8 = 0x10;
  return 1;
}


// ==== 109296f7 thunk_FUN_1092971b thunk -> 1092971b

// ==== 1092971b FUN_1092971b

void __thiscall FUN_1092971b(void *this,int param_1)

{
  void *in_EAX;
  
  for (; (in_EAX < this && (0xfffff < (uint)(param_1 - *(int *)((int)in_EAX + 0xc))));
      in_EAX = (void *)((int)in_EAX + 0x14)) {
  }
  return;
}


// ==== 10929722 ___sbh_free_block

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
      if (DAT_109a10f0 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_109a15fc * 0x8000 + DAT_109a10f0[3]),0x8000,0x4000);
        DAT_109a10f0[2] = DAT_109a10f0[2] | 0x80000000U >> ((byte)DAT_109a15fc & 0x1f);
        *(undefined4 *)(DAT_109a10f0[4] + 0xc4 + DAT_109a15fc * 4) = 0;
        *(char *)(DAT_109a10f0[4] + 0x43) = *(char *)(DAT_109a10f0[4] + 0x43) + -1;
        if (*(char *)(DAT_109a10f0[4] + 0x43) == '\0') {
          DAT_109a10f0[1] = DAT_109a10f0[1] & 0xfffffffe;
        }
        if (DAT_109a10f0[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_109a10f0[3],0,0x8000);
          HeapFree(DAT_109a0f94,0,(LPVOID)DAT_109a10f0[4]);
          _memmove(DAT_109a10f0,DAT_109a10f0 + 5,
                   (DAT_109a15e8 * 0x14 - (int)DAT_109a10f0) + -0x14 + DAT_109a15ec);
          DAT_109a15e8 = DAT_109a15e8 + -1;
          if (DAT_109a10f0 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_109a15f4 = DAT_109a15ec;
        }
      }
      DAT_109a10f0 = param_1;
      DAT_109a15fc = uVar14;
    }
  }
  return;
}


// ==== 10929a36 ___sbh_alloc_new_region

/* Library Function - Single Match
    ___sbh_alloc_new_region
   
   Library: Visual Studio 2005 Release */

undefined4 * ___sbh_alloc_new_region(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (DAT_109a15e8 == DAT_109a15f8) {
    pvVar1 = HeapReAlloc(DAT_109a0f94,0,DAT_109a15ec,(DAT_109a15f8 + 0x10) * 0x14);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_109a15f8 = DAT_109a15f8 + 0x10;
    DAT_109a15ec = pvVar1;
  }
  puVar2 = (undefined4 *)(DAT_109a15e8 * 0x14 + (int)DAT_109a15ec);
  pvVar1 = HeapAlloc(DAT_109a0f94,8,0x41c4);
  puVar2[4] = pvVar1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar1 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar2[3] = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      puVar2[2] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0;
      DAT_109a15e8 = DAT_109a15e8 + 1;
      *(undefined4 *)puVar2[4] = 0xffffffff;
      return puVar2;
    }
    HeapFree(DAT_109a0f94,0,(LPVOID)puVar2[4]);
  }
  return (undefined4 *)0x0;
}


// ==== 10929ae6 ___sbh_alloc_new_group

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


// ==== 10929bec ___sbh_resize_block

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


// ==== 10929f98 ___sbh_heap_check

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
  
  if (DAT_109a15ec == (uint *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_38 = DAT_109a15ec;
    local_20 = 0;
    puVar2 = DAT_109a15ec;
    if (0 < DAT_109a15e8) {
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
      } while (local_20 < DAT_109a15e8);
    }
    uVar1 = 0;
  }
  return uVar1;
}


// ==== 1092a322 ___sbh_alloc_block

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
  
  puVar9 = DAT_109a15ec + DAT_109a15e8 * 5;
  uVar7 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar8 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar6 = (byte)iVar8;
  param_1 = DAT_109a15f4;
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
  puVar13 = DAT_109a15ec;
  if (param_1 == puVar9) {
    for (; (puVar13 < DAT_109a15f4 && ((puVar13[1] & local_c) == 0 && (*puVar13 & uVar15) == 0));
        puVar13 = puVar13 + 5) {
    }
    param_1 = puVar13;
    if (puVar13 == DAT_109a15f4) {
      for (; (puVar13 < puVar9 && (puVar13[2] == 0)); puVar13 = puVar13 + 5) {
      }
      puVar14 = DAT_109a15ec;
      param_1 = puVar13;
      if (puVar13 == puVar9) {
        for (; (puVar14 < DAT_109a15f4 && (puVar14[2] == 0)); puVar14 = puVar14 + 5) {
        }
        param_1 = puVar14;
        if ((puVar14 == DAT_109a15f4) &&
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
  DAT_109a15f4 = param_1;
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
    if (iVar10 == 0) goto LAB_1092a5c2;
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
LAB_1092a5c2:
  piVar12 = (int *)((int)piVar12 + iVar10);
  *piVar12 = uVar7 + 1;
  *(uint *)((int)piVar12 + (uVar7 - 4)) = uVar7 + 1;
  iVar8 = *piVar3;
  *piVar3 = iVar8 + 1;
  if (((iVar8 == 0) && (param_1 == DAT_109a10f0)) && (local_8 == DAT_109a15fc)) {
    DAT_109a10f0 = (uint *)0x0;
  }
  *piVar5 = local_8;
  return piVar12 + 1;
}


// ==== 1092a605 ___report_gsfailure

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
  
  _DAT_109a1210 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined1 *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_109a1214 = &stack0x00000004;
  _DAT_109a1150 = 0x10001;
  _DAT_109a10f8 = 0xc0000409;
  _DAT_109a10fc = 1;
  local_32c = DAT_1096d674;
  local_328 = DAT_1096d678;
  _DAT_109a1104 = unaff_retaddr;
  _DAT_109a11dc = in_GS;
  _DAT_109a11e0 = in_FS;
  _DAT_109a11e4 = in_ES;
  _DAT_109a11e8 = in_DS;
  _DAT_109a11ec = unaff_EDI;
  _DAT_109a11f0 = unaff_ESI;
  _DAT_109a11f4 = unaff_EBX;
  _DAT_109a11f8 = in_EDX;
  _DAT_109a11fc = in_ECX;
  _DAT_109a1200 = in_EAX;
  _DAT_109a1204 = unaff_EBP;
  DAT_109a1208 = unaff_retaddr;
  _DAT_109a120c = in_CS;
  _DAT_109a1218 = in_SS;
  DAT_109a1148 = IsDebuggerPresent();
  FUN_10934552();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_109601e8);
  if (DAT_109a1148 == 0) {
    FUN_10934552();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}


// ==== 1092a709 __write_nolock

/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    __write_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  WCHAR *pWVar1;
  char cVar2;
  wchar_t *pwVar3;
  WCHAR WVar4;
  wchar_t wVar5;
  DWORD *pDVar6;
  int iVar7;
  _ptiddata p_Var8;
  BOOL BVar9;
  DWORD DVar10;
  int iVar11;
  uint uVar12;
  WCHAR *pWVar13;
  uint uVar14;
  char *pcVar15;
  int unaff_EDI;
  int *piVar16;
  UINT local_598;
  uint local_594;
  WCHAR *local_590;
  int *local_58c;
  char *local_588;
  int local_584;
  WCHAR *local_580;
  char *local_57c;
  WCHAR *local_578;
  char local_571;
  DWORD local_570;
  WCHAR *local_56c;
  WCHAR local_568 [38];
  undefined1 local_51c [264];
  CHAR local_414 [688];
  WCHAR local_164 [170];
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_1096d674 ^ (uint)local_51c;
  local_580 = _Buf;
  local_57c = (char *)0x0;
  local_584 = 0;
  if (_MaxCharCount == 0) goto LAB_1092acb9;
  if (_Buf == (void *)0x0) {
    pDVar6 = FUN_10926831();
    *pDVar6 = 0;
    pDVar6 = FUN_1092681e();
    *pDVar6 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_1092acb9;
  }
  iVar11 = (_FileHandle & 0x1fU) * 0x38;
  piVar16 = &DAT_109a1660 + (_FileHandle >> 5);
  local_571 = (char)(*(char *)(*piVar16 + iVar11 + 0x24) * '\x02') >> 1;
  local_58c = piVar16;
  if (((local_571 == '\x02') || (local_571 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    pDVar6 = FUN_10926831();
    *pDVar6 = 0;
    pDVar6 = FUN_1092681e();
    *pDVar6 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    goto LAB_1092acb9;
  }
  if ((*(byte *)(*piVar16 + iVar11 + 4) & 0x20) != 0) {
    __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  }
  iVar7 = __isatty(_FileHandle);
  if ((iVar7 == 0) || ((*(byte *)(iVar11 + 4 + *piVar16) & 0x80) == 0)) {
LAB_1092a9f4:
    if ((*(byte *)((undefined4 *)(*piVar16 + iVar11) + 1) & 0x80) == 0) {
      BVar9 = WriteFile(*(HANDLE *)(*piVar16 + iVar11),local_580,_MaxCharCount,(LPDWORD)&local_588,
                        (LPOVERLAPPED)0x0);
      if (BVar9 == 0) {
LAB_1092ac4e:
        local_570 = GetLastError();
      }
      else {
        local_570 = 0;
        local_57c = local_588;
      }
LAB_1092ac57:
      piVar16 = local_58c;
      if (local_57c != (char *)0x0) goto LAB_1092acb9;
      goto LAB_1092ac61;
    }
    local_570 = 0;
    if (local_571 == '\0') {
      local_56c = local_580;
      if (_MaxCharCount == 0) goto LAB_1092ac88;
      do {
        local_578 = (WCHAR *)0x0;
        uVar12 = (int)local_56c - (int)local_580;
        pWVar13 = local_568;
        do {
          if (_MaxCharCount <= uVar12) break;
          pWVar1 = (WCHAR *)((int)local_56c + 1);
          WVar4 = *local_56c;
          uVar12 = uVar12 + 1;
          if ((char)WVar4 == '\n') {
            local_584 = local_584 + 1;
            *(char *)pWVar13 = '\r';
            pWVar13 = (WCHAR *)((int)pWVar13 + 1);
            local_578 = (WCHAR *)((int)local_578 + 1);
          }
          *(char *)pWVar13 = (char)WVar4;
          pWVar13 = (WCHAR *)((int)pWVar13 + 1);
          local_578 = (WCHAR *)((int)local_578 + 1);
          local_56c = pWVar1;
        } while (local_578 < (WCHAR *)0x400);
        BVar9 = WriteFile(*(HANDLE *)(iVar11 + *piVar16),local_568,(int)pWVar13 - (int)local_568,
                          (LPDWORD)&local_588,(LPOVERLAPPED)0x0);
        if (BVar9 == 0) goto LAB_1092ac4e;
        local_57c = local_57c + (int)local_588;
      } while (((int)pWVar13 - (int)local_568 <= (int)local_588) &&
              ((uint)((int)local_56c - (int)local_580) < _MaxCharCount));
      goto LAB_1092ac57;
    }
    if (local_571 == '\x02') {
      local_56c = local_580;
      if (_MaxCharCount != 0) {
        do {
          uVar14 = 0;
          uVar12 = (int)local_56c - (int)local_580;
          pWVar13 = local_568;
          do {
            if (_MaxCharCount <= uVar12) break;
            pWVar1 = local_56c + 1;
            WVar4 = *local_56c;
            uVar12 = uVar12 + 2;
            if (WVar4 == L'\n') {
              local_584 = local_584 + 2;
              *pWVar13 = L'\r';
              pWVar13 = pWVar13 + 1;
              uVar14 = uVar14 + 2;
            }
            *pWVar13 = WVar4;
            pWVar13 = pWVar13 + 1;
            uVar14 = uVar14 + 2;
            piVar16 = local_58c;
            local_56c = pWVar1;
          } while (uVar14 < 0x3ff);
          BVar9 = WriteFile(*(HANDLE *)(iVar11 + *piVar16),local_568,(int)pWVar13 - (int)local_568,
                            (LPDWORD)&local_588,(LPOVERLAPPED)0x0);
          if (BVar9 == 0) goto LAB_1092ac4e;
          local_57c = local_57c + (int)local_588;
        } while (((int)pWVar13 - (int)local_568 <= (int)local_588) &&
                ((uint)((int)local_56c - (int)local_580) < _MaxCharCount));
        goto LAB_1092ac57;
      }
    }
    else {
      local_578 = local_580;
      if (_MaxCharCount != 0) {
        do {
          local_56c = (WCHAR *)0x0;
          uVar12 = (int)local_578 - (int)local_580;
          pWVar13 = local_164;
          do {
            if (_MaxCharCount <= uVar12) break;
            WVar4 = *local_578;
            local_578 = local_578 + 1;
            uVar12 = uVar12 + 2;
            if (WVar4 == L'\n') {
              *pWVar13 = L'\r';
              pWVar13 = pWVar13 + 1;
              local_56c = local_56c + 1;
            }
            local_56c = local_56c + 1;
            *pWVar13 = WVar4;
            pWVar13 = pWVar13 + 1;
          } while (local_56c < (WCHAR *)0x152);
          pcVar15 = (char *)0x0;
          iVar7 = WideCharToMultiByte(0xfde9,0,local_164,((int)pWVar13 - (int)local_164) / 2,
                                      local_414,0x2ab,(LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar7 == 0) goto LAB_1092ac4e;
          do {
            BVar9 = WriteFile(*(HANDLE *)(iVar11 + *local_58c),local_414 + (int)pcVar15,
                              iVar7 - (int)pcVar15,(LPDWORD)&local_588,(LPOVERLAPPED)0x0);
            if (BVar9 == 0) {
              local_570 = GetLastError();
              break;
            }
            pcVar15 = pcVar15 + (int)local_588;
          } while ((int)pcVar15 < iVar7);
        } while ((iVar7 <= (int)pcVar15) &&
                (local_57c = (char *)((int)local_578 - (int)local_580), local_57c < _MaxCharCount));
        goto LAB_1092ac57;
      }
    }
LAB_1092ac88:
    DVar10 = 0;
    if (((*(byte *)(iVar11 + 4 + *piVar16) & 0x40) != 0) && ((char)*local_580 == '\x1a'))
    goto LAB_1092acb9;
    pDVar6 = FUN_1092681e();
    *pDVar6 = 0x1c;
  }
  else {
    p_Var8 = __getptd();
    pwVar3 = p_Var8->ptlocinfo->lc_category[0].wlocale;
    BVar9 = GetConsoleMode(*(HANDLE *)(iVar11 + *piVar16),&local_598);
    if ((BVar9 == 0) || ((pwVar3 == (wchar_t *)0x0 && (local_571 == '\0')))) goto LAB_1092a9f4;
    local_598 = GetConsoleCP();
    local_56c = (WCHAR *)0x0;
    local_590 = local_580;
    if (_MaxCharCount != 0) {
      local_578 = (WCHAR *)0x0;
      do {
        pWVar13 = local_590;
        if (local_571 == '\0') {
          cVar2 = (char)*local_590;
          local_594 = (uint)(cVar2 == '\n');
          iVar7 = _isleadbyte(CONCAT22(cVar2 >> 7,(short)cVar2));
          if (iVar7 == 0) {
            iVar7 = _mbtowc((wchar_t *)&local_570,(char *)pWVar13,1);
            if (iVar7 == -1) break;
          }
          else {
            if (((char *)((int)local_580 + (_MaxCharCount - (int)pWVar13)) < (char *)0x2) ||
               (iVar7 = _mbtowc((wchar_t *)&local_570,(char *)pWVar13,2), iVar7 == -1)) break;
            pWVar13 = (WCHAR *)((int)pWVar13 + 1);
            local_578 = (WCHAR *)((int)local_578 + 1);
          }
          local_590 = (WCHAR *)((int)pWVar13 + 1);
          local_578 = (WCHAR *)((int)local_578 + 1);
          DVar10 = WideCharToMultiByte(local_598,0,(LPCWSTR)&local_570,1,local_10,5,(LPCSTR)0x0,
                                       (LPBOOL)0x0);
          if (DVar10 == 0) break;
          BVar9 = WriteFile(*(HANDLE *)(iVar11 + *piVar16),local_10,DVar10,(LPDWORD)&local_56c,
                            (LPOVERLAPPED)0x0);
          if (BVar9 == 0) goto LAB_1092ac4e;
          local_57c = local_57c + (int)local_56c;
          if ((int)local_56c < (int)DVar10) break;
          if (local_594 != 0) {
            local_10[0] = '\r';
            BVar9 = WriteFile(*(HANDLE *)(iVar11 + *piVar16),local_10,1,(LPDWORD)&local_56c,
                              (LPOVERLAPPED)0x0);
            if (BVar9 == 0) goto LAB_1092ac4e;
            if ((int)local_56c < 1) break;
            local_584 = local_584 + 1;
            local_57c = local_57c + 1;
          }
        }
        else {
          if ((local_571 == '\x01') || (local_571 == '\x02')) {
            local_570 = (DWORD)(ushort)*local_590;
            local_594 = (uint)(*local_590 == L'\n');
            local_590 = local_590 + 1;
            local_578 = local_578 + 1;
          }
          if ((local_571 == '\x01') || (local_571 == '\x02')) {
            wVar5 = __putwch_nolock((wchar_t)local_570);
            if (wVar5 != (wchar_t)local_570) goto LAB_1092ac4e;
            local_57c = local_57c + 1;
            if (local_594 != 0) {
              local_570 = 0xd;
              wVar5 = __putwch_nolock(L'\r');
              if (wVar5 != (wchar_t)local_570) goto LAB_1092ac4e;
              local_57c = local_57c + 1;
              local_584 = local_584 + 1;
            }
          }
        }
      } while (local_578 < _MaxCharCount);
      goto LAB_1092ac57;
    }
LAB_1092ac61:
    if (local_570 == 0) goto LAB_1092ac88;
    DVar10 = 5;
    if (local_570 != 5) {
      FUN_10926844(local_570);
      goto LAB_1092acb9;
    }
    pDVar6 = FUN_1092681e();
    *pDVar6 = 9;
  }
  pDVar6 = FUN_10926831();
  *pDVar6 = DVar10;
LAB_1092acb9:
  iVar11 = __security_check_cookie(local_8 ^ (uint)local_51c);
  return iVar11;
}


// ==== 1092accf __write

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __write
   
   Library: Visual Studio 2005 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  DWORD *pDVar1;
  int iVar2;
  int local_20;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_10926831();
    *pDVar1 = 0;
    pDVar1 = FUN_1092681e();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_109a160c)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_109a1660)[_FileHandle >> 5] + 4 + iVar2) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_109a1660)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_1092681e();
          *pDVar1 = 9;
          pDVar1 = FUN_10926831();
          *pDVar1 = 0;
          local_20 = -1;
        }
        else {
          local_20 = __write_nolock(_FileHandle,_Buf,_MaxCharCount);
        }
        FUN_1092ada1();
        return local_20;
      }
    }
    pDVar1 = FUN_10926831();
    *pDVar1 = 0;
    pDVar1 = FUN_1092681e();
    *pDVar1 = 9;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}


// ==== 1092ada1 FUN_1092ada1

void FUN_1092ada1(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}


// ==== 1092adab __commit

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 2005 Release */

int __cdecl __commit(int _FileHandle)

{
  DWORD *pDVar1;
  HANDLE hFile;
  BOOL BVar2;
  int iVar3;
  DWORD local_20;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_109a160c)) {
      iVar3 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)(iVar3 + 4 + (&DAT_109a1660)[_FileHandle >> 5]) & 1) != 0) {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)(iVar3 + 4 + (&DAT_109a1660)[_FileHandle >> 5]) & 1) != 0) {
          hFile = (HANDLE)__get_osfhandle(_FileHandle);
          BVar2 = FlushFileBuffers(hFile);
          if (BVar2 == 0) {
            local_20 = GetLastError();
          }
          else {
            local_20 = 0;
          }
          if (local_20 == 0) goto LAB_1092ae6d;
          pDVar1 = FUN_10926831();
          *pDVar1 = local_20;
        }
        pDVar1 = FUN_1092681e();
        *pDVar1 = 9;
        local_20 = 0xffffffff;
LAB_1092ae6d:
        FUN_1092ae82();
        return local_20;
      }
    }
    pDVar1 = FUN_1092681e();
    *pDVar1 = 9;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return -1;
}


// ==== 1092ae82 FUN_1092ae82

void FUN_1092ae82(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}


// ==== 1092ae8c __stbuf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __stbuf
   
   Library: Visual Studio 2005 Release */

int __cdecl __stbuf(FILE *_File)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined **ppuVar4;
  void *pvVar5;
  
  iVar3 = __fileno(_File);
  iVar3 = __isatty(iVar3);
  if (iVar3 == 0) {
    return 0;
  }
  ppuVar4 = FUN_1092320c();
  if (_File == (FILE *)(ppuVar4 + 8)) {
    iVar3 = 0;
  }
  else {
    ppuVar4 = FUN_1092320c();
    if (_File != (FILE *)(ppuVar4 + 0x10)) {
      return 0;
    }
    iVar3 = 1;
  }
  _DAT_109a0af4 = _DAT_109a0af4 + 1;
  if ((_File->_flag & 0x10c) != 0) {
    return 0;
  }
  piVar1 = &DAT_109a141c + iVar3;
  if (*piVar1 == 0) {
    pvVar5 = __malloc_crt(0x1000);
    *piVar1 = (int)pvVar5;
    if (pvVar5 == (void *)0x0) {
      _File->_base = (char *)&_File->_charbuf;
      _File->_ptr = (char *)&_File->_charbuf;
      _File->_bufsiz = 2;
      _File->_cnt = 2;
      goto LAB_1092af10;
    }
  }
  pcVar2 = (char *)*piVar1;
  _File->_base = pcVar2;
  _File->_ptr = pcVar2;
  _File->_bufsiz = 0x1000;
  _File->_cnt = 0x1000;
LAB_1092af10:
  _File->_flag = _File->_flag | 0x1102;
  return 1;
}


// ==== 1092af22 __ftbuf

/* Library Function - Single Match
    __ftbuf
   
   Library: Visual Studio 2005 Release */

void __cdecl __ftbuf(int _Flag,FILE *_File)

{
  if ((_Flag != 0) && ((_File->_flag & 0x1000) != 0)) {
    __flush(_File);
    _File->_flag = _File->_flag & 0xffffeeff;
    _File->_bufsiz = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
  }
  return;
}


// ==== 1092b1fd std::exception::exception

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


// ==== 1092b311 exception::~exception

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


// ==== 1092b327 FUN_1092b327

char * __fastcall FUN_1092b327(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}


// ==== 1092b3e7 FUN_1092b3e7

exception * __thiscall FUN_1092b3e7(void *this,byte param_1)

{
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    thunk_FUN_10903570(this);
  }
  return this;
}


// ==== 1092b403 FUN_1092b403

exception * __thiscall FUN_1092b403(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_cast::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    thunk_FUN_10903570(this);
  }
  return this;
}


// ==== 1092b425 FUN_1092b425

exception * __thiscall FUN_1092b425(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_typeid::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    thunk_FUN_10903570(this);
  }
  return this;
}


// ==== 1092b447 FUN_1092b447

exception * __thiscall FUN_1092b447(void *this,byte param_1)

{
  *(undefined ***)this = std::bad_typeid::vftable;
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    thunk_FUN_10903570(this);
  }
  return this;
}


// ==== 1092b49c __EH_prolog3_catch

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_1096d674 ^ (uint)&param_1;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


// ==== 1092b541 __EH_epilog3

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


// ==== 1092b573 _ValidateRead

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Library: Visual Studio 2005 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  return (uint)(param_1 != (void *)0x0);
}


// ==== 1092b580 FID_conflict:_ValidateExecute

/* Library Function - Multiple Matches With Different Base Names
    int __cdecl _ValidateExecute(int (__stdcall*)(void))
    int __cdecl _ValidateRead(void const *,unsigned int)
    int __cdecl _ValidateWrite(void *,unsigned int)
   
   Library: Visual Studio 2005 Release */

bool __cdecl FID_conflict__ValidateExecute(int param_1)

{
  return param_1 != 0;
}


// ==== 1092b58d FID_conflict:_ValidateExecute

/* Library Function - Multiple Matches With Different Base Names
    int __cdecl _ValidateExecute(int (__stdcall*)(void))
    int __cdecl _ValidateRead(void const *,unsigned int)
    int __cdecl _ValidateWrite(void *,unsigned int)
   
   Library: Visual Studio 2005 Release */

bool __cdecl FID_conflict__ValidateExecute(int param_1)

{
  return param_1 != 0;
}


// ==== 1092b5a6 ___freetlocinfo

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
       (*(undefined ***)((int)param_1 + 0xbc) != &PTR_DAT_1096e5d0)) &&
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
  if ((ppuVar2 != &PTR_DAT_1096e510) && (ppuVar2[0x2d] == (undefined *)0x0)) {
    ___free_lc_time(ppuVar2);
    _free(*(void **)((int)param_1 + 0xd4));
  }
  puVar4 = (undefined4 *)((int)param_1 + 0x50);
  iVar3 = 6;
  do {
    if ((((undefined *)puVar4[-2] != &DAT_1096de28) &&
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


// ==== 1092b6e6 ___addlocaleref

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
    if (((undefined *)pLVar1[-2] != &DAT_1096de28) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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


// ==== 1092b76c ___removelocaleref

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
      if (((undefined *)pLVar1[-2] != &DAT_1096de28) && ((LONG *)*pLVar1 != (LONG *)0x0)) {
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


// ==== 1092b7f8 __copytlocinfo_nolock

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


// ==== 1092b81c __updatetlocinfoEx_nolock

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
        if ((*pLVar1 == 0) && (pLVar1 != (LONG *)&DAT_1096de30)) {
          ___freetlocinfo(pLVar1);
        }
      }
    }
    return unaff_EDI;
  }
  return (LONG *)0x0;
}


// ==== 1092b85a ___updatetlocinfo

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___updatetlocinfo
   
   Library: Visual Studio 2005 Release */

pthreadlocinfo __cdecl ___updatetlocinfo(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (((p_Var1->_ownlocale & DAT_1096e4e0) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xc);
    __updatetlocinfoEx_nolock();
    FUN_1092b8c4();
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


// ==== 1092b8c4 FUN_1092b8c4

void FUN_1092b8c4(void)

{
  FUN_10929478(0xc);
  return;
}


// ==== 1092bab4 __strcats

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


// ==== 1092baf2 ___lc_strtolc

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
      _MaxCount = _strcspn(_Str,"_.,");
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
        _MaxCount = _strcspn(_Str,"_.,");
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


// ==== 1092bc1b ___lc_lctostr

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


// ==== 1092c6f7 FUN_1092c6f7

undefined4 FUN_1092c6f7(void)

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


// ==== 1092c726 setSBCS

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
    *puVar1 = puVar1[(int)&DAT_1096df18 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined1 *)(in_EAX + 0x11d);
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&DAT_1096df18 - in_EAX];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


// ==== 1092c77b setSBUpLow

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
  
  local_8 = DAT_1096d674 ^ (uint)local_4a0;
  BVar3 = GetCPInfo(*(UINT *)(unaff_ESI + 4),&local_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar2 = (char *)(unaff_ESI + 0x11d + uVar4);
      if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) + 0x20 < (char *)0x1a) {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_1092c8e2:
        *pcVar2 = cVar6;
      }
      else {
        if (pcVar2 + (-0x61 - (unaff_ESI + 0x11d)) < (char *)0x1a) {
          pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 + -0x20;
          goto LAB_1092c8e2;
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
          goto LAB_1092c889;
        }
        *(undefined1 *)(unaff_ESI + 0x11d + uVar4) = 0;
      }
      else {
        pbVar1 = (byte *)(unaff_ESI + 0x1d + uVar4);
        *pbVar1 = *pbVar1 | 0x10;
        CVar5 = local_208[uVar4];
LAB_1092c889:
        *(CHAR *)(unaff_ESI + 0x11d + uVar4) = CVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
  }
  __security_check_cookie(local_8 ^ (uint)local_4a0);
  return;
}


// ==== 1092c905 ___updatetmbcinfo

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
  if (((p_Var1->_ownlocale & DAT_1096e4e0) == 0) || (p_Var1->ptlocinfo == (pthreadlocinfo)0x0)) {
    __lock(0xd);
    lpAddend = p_Var1->ptmbcinfo;
    if (lpAddend != (pthreadmbcinfo)PTR_DAT_1096e340) {
      if (lpAddend != (pthreadmbcinfo)0x0) {
        LVar2 = InterlockedDecrement(&lpAddend->refcount);
        if ((LVar2 == 0) && (lpAddend != (pthreadmbcinfo)&DAT_1096df18)) {
          _free(lpAddend);
        }
      }
      p_Var1->ptmbcinfo = (pthreadmbcinfo)PTR_DAT_1096e340;
      lpAddend = (pthreadmbcinfo)PTR_DAT_1096e340;
      InterlockedIncrement((LONG *)PTR_DAT_1096e340);
    }
    FUN_1092c9a0();
  }
  else {
    lpAddend = p_Var1->ptmbcinfo;
  }
  if (lpAddend == (pthreadmbcinfo)0x0) {
    __amsg_exit(0x20);
  }
  return lpAddend;
}


// ==== 1092c9a0 FUN_1092c9a0

void FUN_1092c9a0(void)

{
  FUN_10929478(0xd);
  return;
}


// ==== 1092c9a9 getSystemCP

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
  DAT_109a1448 = 0;
  if (unaff_ESI == -2) {
    DAT_109a1448 = 1;
    UVar1 = GetOEMCP();
  }
  else if (unaff_ESI == -3) {
    DAT_109a1448 = 1;
    UVar1 = GetACP();
  }
  else {
    if (unaff_ESI != -4) {
      if (local_8 == '\0') {
        DAT_109a1448 = 0;
        return unaff_ESI;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return unaff_ESI;
    }
    UVar1 = *(UINT *)(local_14[0] + 4);
    DAT_109a1448 = 1;
  }
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return UVar1;
}


// ==== 1092ca23 FUN_1092ca23

void __cdecl FUN_1092ca23(undefined4 param_1,int param_2)

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
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  uVar4 = getSystemCP((int)unaff_EDI);
  if (uVar4 != 0) {
    local_20 = (byte *)0x0;
    uVar5 = 0;
LAB_1092ca5f:
    if (*(uint *)((int)&DAT_1096e348 + uVar5) != uVar4) goto code_r0x1092ca6b;
    _memset((void *)(param_2 + 0x1c),0,0x101);
    local_24 = 0;
    pbVar8 = &DAT_1096e358 + (int)local_20 * 0x30;
    local_20 = pbVar8;
    do {
      for (; (*pbVar8 != 0 && (bVar3 = pbVar8[1], bVar3 != 0)); pbVar8 = pbVar8 + 2) {
        for (uVar5 = (uint)*pbVar8; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
          pbVar2 = (byte *)(param_2 + 0x1d + uVar5);
          *pbVar2 = *pbVar2 | *(byte *)(local_24 + 0x1096e344);
          bVar3 = pbVar8[1];
        }
      }
      local_24 = local_24 + 1;
      pbVar8 = local_20 + 8;
      local_20 = pbVar8;
    } while (local_24 < 4);
    *(uint *)(param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 8) = 1;
    uVar9 = FUN_1092c6f7();
    *(undefined4 *)(param_2 + 0xc) = uVar9;
    puVar7 = (undefined2 *)(param_2 + 0x10);
    puVar10 = (undefined2 *)(&DAT_1096e34c + extraout_ECX);
    iVar11 = 6;
    do {
      *puVar7 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar7 = puVar7 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    goto LAB_1092cb90;
  }
LAB_1092ca4c:
  setSBCS(unaff_EDI);
LAB_1092cbed:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x1092ca6b:
  local_20 = (byte *)((int)local_20 + 1);
  uVar5 = uVar5 + 0x30;
  if (0xef < uVar5) goto code_r0x1092ca78;
  goto LAB_1092ca5f;
code_r0x1092ca78:
  if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
     (BVar6 = IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) goto LAB_1092cbed;
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
      uVar9 = FUN_1092c6f7();
      *(undefined4 *)(param_2 + 0xc) = uVar9;
      *(undefined4 *)(param_2 + 8) = extraout_EDX;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
LAB_1092cb90:
    setSBUpLow(unaff_EDI);
    goto LAB_1092cbed;
  }
  if (DAT_109a1448 == 0) goto LAB_1092cbed;
  goto LAB_1092ca4c;
}


// ==== 1092cbfc __getmbcp

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


// ==== 1092cc38 __setmbcp

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
  DWORD *pDVar5;
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
      local_24 = FUN_1092ca23(iVar2,(int)ptVar3);
      if (local_24 == 0) {
        LVar4 = InterlockedDecrement(&p_Var1->ptmbcinfo->refcount);
        if ((LVar4 == 0) && (p_Var1->ptmbcinfo != (pthreadmbcinfo)&DAT_1096df18)) {
          _free(p_Var1->ptmbcinfo);
        }
        p_Var1->ptmbcinfo = ptVar3;
        InterlockedIncrement(&ptVar3->refcount);
        if (((p_Var1->_ownlocale & 2) == 0) && (((byte)DAT_1096e4e0 & 1) == 0)) {
          __lock(0xd);
          _DAT_109a1458 = ptVar3->mbcodepage;
          _DAT_109a145c = ptVar3->ismbcodepage;
          _DAT_109a1460 = *(undefined4 *)ptVar3->mbulinfo;
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            (&DAT_109a144c)[iVar2] = ptVar3->mbulinfo[iVar2 + 2];
          }
          for (iVar2 = 0; iVar2 < 0x101; iVar2 = iVar2 + 1) {
            (&DAT_1096e138)[iVar2] = ptVar3->mbctype[iVar2 + 4];
          }
          for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
            (&DAT_1096e240)[iVar2] = ptVar3->mbcasemap[iVar2 + 4];
          }
          LVar4 = InterlockedDecrement((LONG *)PTR_DAT_1096e340);
          if ((LVar4 == 0) && (PTR_DAT_1096e340 != &DAT_1096df18)) {
            _free(PTR_DAT_1096e340);
          }
          PTR_DAT_1096e340 = (undefined *)ptVar3;
          InterlockedIncrement(&ptVar3->refcount);
          FUN_1092cd99();
        }
      }
      else if (local_24 == -1) {
        if (ptVar3 != (pthreadmbcinfo)&DAT_1096df18) {
          _free(ptVar3);
        }
        pDVar5 = FUN_1092681e();
        *pDVar5 = 0x16;
      }
    }
  }
  return local_24;
}


// ==== 1092cd99 FUN_1092cd99

void FUN_1092cd99(void)

{
  FUN_10929478(0xd);
  return;
}


// ==== 1092cdd2 ___initmbctable

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2005 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_109a1778 == 0) {
    __setmbcp(-3);
    DAT_109a1778 = 1;
  }
  return 0;
}


// ==== 1092cdf0 __global_unwind2

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1092ce08,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


// ==== 1092ce55 __local_unwind2

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
  puStack_1c = &LAB_1092ce10;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((uVar1 == 0xffffffff) || ((param_2 != 0xffffffff && (uVar1 <= param_2)))) break;
    local_18 = *(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_18;
    if (*(int *)(*(int *)(param_1 + 8) + 4 + uVar1 * 0xc) == 0) {
      __NLG_Notify(0x101);
      FUN_1092cf24();
    }
  }
  ExceptionList = local_20;
  return;
}


// ==== 1092cefc __NLG_Notify1

/* Library Function - Single Match
    __NLG_Notify1
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

undefined4 __fastcall __NLG_Notify1(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1096e440 = param_1;
  DAT_1096e43c = in_EAX;
  DAT_1096e444 = unaff_EBP;
  return in_EAX;
}


// ==== 1092cf05 __NLG_Notify

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_1096e440 = param_1;
  DAT_1096e43c = in_EAX;
  DAT_1096e444 = unaff_EBP;
  return;
}


// ==== 1092cf24 FUN_1092cf24

void FUN_1092cf24(void)

{
  code *in_EAX;
  
  (*in_EAX)();
  return;
}


// ==== 1092cf27 _strcpy_s

/* Library Function - Single Match
    _strcpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  DWORD *pDVar2;
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
      pDVar2 = FUN_1092681e();
      eVar4 = 0x22;
      *pDVar2 = 0x22;
      goto LAB_1092cf46;
    }
    *_Dst = '\0';
  }
  pDVar2 = FUN_1092681e();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_1092cf46:
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}


// ==== 1092cf90 _strlen

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
    if (((uint)puVar2 & 3) == 0) goto LAB_1092cfc0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_1092cff3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_1092cfc0:
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
  goto LAB_1092cff3;
}


// ==== 1092d03c HeapManager::Destructor

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


// ==== 1092d062 UnDecorator::getNumberOfDimensions

/* Library Function - Single Match
    private: static int __cdecl UnDecorator::getNumberOfDimensions(void)
   
   Library: Visual Studio 2005 Release */

int __cdecl UnDecorator::getNumberOfDimensions(void)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *DAT_109a1484;
  if (cVar2 != '\0') {
    if (('/' < cVar2) && (cVar2 < ':')) {
      DAT_109a1484 = DAT_109a1484 + 1;
      return cVar2 + -0x2f;
    }
    iVar1 = 0;
LAB_1092d0ae:
    if (cVar2 == '@') {
      cVar2 = *DAT_109a1484;
      DAT_109a1484 = DAT_109a1484 + 1;
      if (cVar2 != '@') {
LAB_1092d0c1:
        iVar1 = -1;
      }
      return iVar1;
    }
    if (cVar2 != '\0') {
      if ((cVar2 < 'A') || ('P' < cVar2)) goto LAB_1092d0c1;
      DAT_109a1484 = DAT_109a1484 + 1;
      iVar1 = iVar1 * 0x10 + -0x41 + (int)cVar2;
      cVar2 = *DAT_109a1484;
      goto LAB_1092d0ae;
    }
  }
  return 0;
}


// ==== 1092d0c5 UnDecorator::getTypeEncoding

/* WARNING: Removing unreachable block (ram,0x1092d46f) */
/* WARNING: Removing unreachable block (ram,0x1092d30f) */
/* WARNING: Removing unreachable block (ram,0x1092d484) */
/* WARNING: Removing unreachable block (ram,0x1092d435) */
/* WARNING: Removing unreachable block (ram,0x1092d3fb) */
/* WARNING: Removing unreachable block (ram,0x1092d410) */
/* WARNING: Removing unreachable block (ram,0x1092d44a) */
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
    if (*DAT_109a1484 == '_') {
      DAT_109a1484 = DAT_109a1484 + 1;
      uVar3 = 0x4000;
    }
    cVar1 = *DAT_109a1484;
    if (('@' < cVar1) && (cVar1 < '[')) {
      uVar7 = (int)*DAT_109a1484 - 0x41;
      DAT_109a1484 = DAT_109a1484 + 1;
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
      cVar1 = *DAT_109a1484;
      if (('/' < cVar1) && (cVar1 < '9')) {
        DAT_109a1484 = DAT_109a1484 + 1;
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
      DAT_109a1484 = DAT_109a1484 + 1;
      return 0xfffd;
    }
    bVar2 = false;
    pcVar4 = DAT_109a1484 + 1;
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
          DAT_109a1484 = pcVar4;
          return 0xffff;
        }
        pcVar4 = DAT_109a1484 + 2;
        bVar2 = true;
LAB_1092d2ee:
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
            DAT_109a1484 = pcVar4;
            return 0xffff;
          }
          if ((uVar3 & 0x8000) == 0) {
            uVar3 = uVar3 & 0xffffe7ff;
          }
        }
      }
      goto switchD_1092d14c_caseD_47;
    }
    if (cVar1 == 'B') {
      uVar3 = uVar3 | 0x9800;
      goto switchD_1092d14c_caseD_47;
    }
    if (cVar1 == '\0') {
      uVar3 = 0xfffe;
      goto switchD_1092d14c_caseD_47;
    }
    if (cVar1 != '$') {
      if (cVar1 < '0') {
        DAT_109a1484 = pcVar4;
        return 0xffff;
      }
      if (cVar1 < '6') goto LAB_1092d2ee;
      if (cVar1 != 'A') {
        DAT_109a1484 = pcVar4;
        return 0xffff;
      }
      uVar3 = uVar3 | 0x9000;
switchD_1092d14c_caseD_47:
      DAT_109a1484 = pcVar4 + 1;
      return uVar3;
    }
    pcVar5 = pcVar4;
    if (DAT_109a1484[2] == 'P') {
      pcVar5 = DAT_109a1484 + 2;
    }
    pcVar4 = pcVar5 + 1;
    switch(*pcVar4) {
    case 'F':
    case 'H':
    case 'L':
    case 'M':
    case 'Q':
      DAT_109a1484 = pcVar5 + 2;
      break;
    default:
      goto switchD_1092d14c_caseD_47;
    case 'J':
    case 'N':
    case 'O':
      pcVar4 = pcVar5 + 2;
      cVar1 = *pcVar4;
      if (('/' < cVar1) && (cVar1 < ':')) {
        DAT_109a1484 = pcVar5 + cVar1 + -0x2d;
        uVar3 = getTypeEncoding();
        return uVar3 | 0x10000;
      }
      uVar3 = 0xffff;
      goto switchD_1092d14c_caseD_47;
    }
  } while( true );
}


// ==== 1092d60d UnDecorator::UScore

/* Library Function - Single Match
    public: static char const * __cdecl UnDecorator::UScore(enum Tokens)
   
   Library: Visual Studio 2005 Release */

char * __cdecl UnDecorator::UScore(Tokens param_1)

{
  char *pcVar1;
  
  pcVar1 = (&PTR_s___based__109608f8)[param_1];
  if ((~DAT_109a1494 & 1) == 0) {
    pcVar1 = pcVar1 + 2;
  }
  return pcVar1;
}


// ==== 1092d626 HeapManager::getMemory

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
      puVar2 = getMemory((HeapManager *)&DAT_109a1464,0x1004,1);
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
        goto LAB_1092d69a;
      }
    }
    pvVar1 = (void *)0x0;
  }
  else {
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) - uVar3;
LAB_1092d69a:
    pvVar1 = (void *)(*(int *)(this + 0xc) + 4 + *(int *)(this + 0x10));
  }
  return pvVar1;
}


// ==== 1092d6c9 DName::DName

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


// ==== 1092d7df DName::operator=

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


// ==== 1092d863 Replicator::operator[]

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


// ==== 1092d899 DNameNode::operator+=

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


// ==== 1092d8d8 FUN_1092d8d8

undefined4 FUN_1092d8d8(void)

{
  return 1;
}


// ==== 1092d8dc FUN_1092d8dc

undefined1 __fastcall FUN_1092d8dc(int param_1)

{
  return *(undefined1 *)(param_1 + 8);
}


// ==== 1092d8e0 FUN_1092d8e0

undefined1 * __thiscall FUN_1092d8e0(void *this,undefined1 *param_1,int param_2)

{
  if ((param_1 == (undefined1 *)0x0) || (param_2 == 0)) {
    param_1 = (undefined1 *)0x0;
  }
  else {
    *param_1 = *(undefined1 *)((int)this + 8);
  }
  return param_1;
}


// ==== 1092d8fb FUN_1092d8fb

undefined4 __fastcall FUN_1092d8fb(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ==== 1092d8ff pDNameNode::pDNameNode

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


// ==== 1092d92e DNameStatusNode::DNameStatusNode

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


// ==== 1092d953 FUN_1092d953

undefined4 __fastcall FUN_1092d953(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ==== 1092d957 FUN_1092d957

byte __fastcall FUN_1092d957(int param_1)

{
  return (*(int *)(param_1 + 8) != 2) - 1U & 0x20;
}


// ==== 1092d972 und_strncpy

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


// ==== 1092d9b7 UnDecorator::getDataIndirectType

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


// ==== 1092d9ea UnDecorator::getThisType

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


// ==== 1092da31 DName::DName

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
    this_00 = HeapManager::getMemory((HeapManager *)&DAT_109a1464,0xc,0);
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


// ==== 1092da87 DName::DName

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
  this_00 = HeapManager::getMemory((HeapManager *)&DAT_109a1464,0x10,0);
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


// ==== 1092dae8 DName::isValid

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


// ==== 1092daff DName::isEmpty

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


// ==== 1092db14 DName::isUDC

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


// ==== 1092db4a DName::length

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


// ==== 1092db6f DName::getLastChar

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
                    /* WARNING: Could not recover jumptable at 0x1092db9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      cVar1 = (**(code **)(*piVar4 + 4))();
      return cVar1;
    }
  }
  return '\0';
}


// ==== 1092dba7 DName::getString

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
      param_1 = HeapManager::getMemory((HeapManager *)&DAT_109a1464,uVar3,0);
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


// ==== 1092dc38 DName::operator|=

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


// ==== 1092dc6d DName::operator=

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
      this_00 = HeapManager::getMemory((HeapManager *)&DAT_109a1464,0x10,0);
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


// ==== 1092dcee Replicator::Replicator

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


// ==== 1092dd0c Replicator::operator+=

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
      this_00 = HeapManager::getMemory((HeapManager *)&DAT_109a1464,8,0);
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


// ==== 1092dd53 DNameNode::clone

/* Library Function - Single Match
    public: class DNameNode * __thiscall DNameNode::clone(void)
   
   Library: Visual Studio 2005 Release */

DNameNode * __thiscall DNameNode::clone(DNameNode *this)

{
  pDNameNode *this_00;
  DName *pDVar1;
  DNameNode *pDVar2;
  
  this_00 = HeapManager::getMemory((HeapManager *)&DAT_109a1464,0xc,0);
  if (this_00 == (pDNameNode *)0x0) {
    pDVar2 = (DNameNode *)0x0;
  }
  else {
    pDVar1 = HeapManager::getMemory((HeapManager *)&DAT_109a1464,8,0);
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


// ==== 1092dd9a pcharNode::pcharNode

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
    if (param_1 == (char *)0x0) goto LAB_1092ddf1;
    param_2 = 0;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      cVar1 = *(char *)(param_2 + (int)param_1);
    }
    if ((char *)param_2 == (char *)0x0) goto LAB_1092ddf1;
  }
  if (param_1 != (char *)0x0) {
    pcVar2 = HeapManager::getMemory((HeapManager *)&DAT_109a1464,param_2,0);
    *(char **)(this + 8) = pcVar2;
    *(int *)(this + 0xc) = param_2;
    if (pcVar2 == (char *)0x0) {
      return this;
    }
    und_strncpy(pcVar2,(char *)param_2,unaff_EDI);
    return this;
  }
LAB_1092ddf1:
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return this;
}


// ==== 1092ddff FUN_1092ddff

undefined4 __fastcall FUN_1092ddff(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    return CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(*(int *)(param_1 + 8) + -1 + iVar1));
  }
  return 0;
}


// ==== 1092de11 pcharNode::getString

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


// ==== 1092de42 pDNameNode::length

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


// ==== 1092de51 pDNameNode::getLastChar

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


// ==== 1092de60 pDNameNode::getString

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


// ==== 1092de7d DNameStatusNode::getString

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


// ==== 1092deb0 UnDecorator::UnDecorator

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
  DAT_109a1488 = param_2;
  DAT_109a1484 = param_2;
  if (param_1 == (char *)0x0) {
    DAT_109a148c = (char *)0x0;
    DAT_109a1490 = 0;
  }
  else {
    DAT_109a1490 = param_3 + -1;
    DAT_109a148c = param_1;
  }
  DAT_109a1494 = param_5;
  DAT_109a147c = (Replicator *)(this + 0x3c);
  DAT_109a1498 = param_4;
  DAT_109a1478 = this;
  DAT_109a149c = 0;
  return this;
}


// ==== 1092df23 UnDecorator::getReturnType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getReturnType(class DName *)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getReturnType(DName *param_1)

{
  DName *in_stack_00000008;
  
  if (*DAT_109a1484 == '@') {
    DAT_109a1484 = DAT_109a1484 + 1;
    DName::DName(param_1,in_stack_00000008);
  }
  else {
    getDataType(param_1);
  }
  return param_1;
}


// ==== 1092df61 DName::operator+=

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
  this_00 = HeapManager::getMemory((HeapManager *)&DAT_109a1464,0x10,0);
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
    if (this_01 == (DNameNode *)0x0) goto LAB_1092dfbf;
    DNameNode::operator+=(this_01,pDVar2);
  }
  if (*(int *)this != 0) {
    return this;
  }
LAB_1092dfbf:
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffff3 | 3;
  return this;
}


// ==== 1092dfda DName::operator=

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
      this_00 = HeapManager::getMemory((HeapManager *)&DAT_109a1464,0xc,0);
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


// ==== 1092e042 DName::doPchar

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
    goto LAB_1092e0df;
  }
  if (param_2 != 0) {
    if (param_2 == 1) {
      puVar2 = HeapManager::getMemory((HeapManager *)&DAT_109a1464,0xc,0);
      if (puVar2 == (undefined4 *)0x0) goto LAB_1092e0ab;
      cVar1 = *param_1;
      puVar2[1] = 0;
      *puVar2 = charNode::vftable;
      *(char *)(puVar2 + 2) = cVar1;
    }
    else {
      this_00 = HeapManager::getMemory((HeapManager *)&DAT_109a1464,0x10,0);
      if (this_00 == (pcharNode *)0x0) {
LAB_1092e0ab:
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
LAB_1092e0df:
  *(uint *)(this + 4) = uVar3;
  return;
}


// ==== 1092e0e8 DName::DName

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


// ==== 1092e10e DName::DName

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


// ==== 1092e13f DName::DName

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
LAB_1092e1e8:
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
           (((bVar1 < 0x80 || (bVar1 == 0xff)) && ((DAT_109a1494 & 0x10000) == 0)))) {
          uVar4 = *(uint *)(this + 4);
          goto LAB_1092e1e8;
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
        goto LAB_1092e1ee;
      }
      uVar4 = *(uint *)(this + 4);
      if ((uVar4 & 0xf) != 0) {
        return this;
      }
    }
    uVar4 = uVar4 & 0xfffffff2 | 2;
  }
LAB_1092e1ee:
  *(uint *)(this + 4) = uVar4;
  return this;
}


// ==== 1092e20f DName::DName

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
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
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


// ==== 1092e278 FUN_1092e278

void __thiscall FUN_1092e278(void *this,uint param_1,int param_2)

{
  bool bVar1;
  char extraout_CL;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  longlong lVar5;
  char local_d [5];
  uint local_8;
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
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


// ==== 1092e30e DName::operator+

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


// ==== 1092e33c DName::operator+=

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


// ==== 1092e39e FUN_1092e39e

DName * __thiscall FUN_1092e39e(void *this,DName *param_1)

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
  this_00 = HeapManager::getMemory((HeapManager *)&DAT_109a1464,0xc,0);
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
    if (this_01 == (DNameNode *)0x0) goto LAB_1092e416;
    DNameNode::operator+=(this_01,pDVar3);
  }
  if (*(int *)this != 0) {
    return this;
  }
LAB_1092e416:
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffff3 | 3;
  return this;
}


// ==== 1092e429 DName::operator=

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(char)
   
   Library: Visual Studio 2005 Release */

DName * __thiscall DName::operator=(DName *this,char param_1)

{
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff70f;
  doPchar(this,&param_1,1);
  return this;
}


// ==== 1092e445 DName::operator=

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


// ==== 1092e46f UnDecorator::getCallingConvention

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
  
  if (*DAT_109a1484 == '\0') {
    DVar4 = 2;
  }
  else {
    uVar1 = (int)*DAT_109a1484 - 0x41;
    DAT_109a1484 = DAT_109a1484 + 1;
    if (uVar1 < 0xd) {
      local_c = 0;
      local_8 = in_ECX & 0xfffff000;
      if ((~(DAT_109a1494 >> 1) & 1) != 0) {
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
          if (uVar1 != 0xc) goto LAB_1092e4f4;
          TVar3 = 6;
        }
        pcVar2 = UScore(TVar3);
        DName::operator=((DName *)&local_c,pcVar2);
      }
LAB_1092e4f4:
      DName::DName(in_stack_00000004,(DName *)&local_c);
      return in_stack_00000004;
    }
    DVar4 = 1;
  }
  DName::DName(in_stack_00000004,DVar4);
  return in_stack_00000004;
}


// ==== 1092e515 UnDecorator::getVCallThunkType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVCallThunkType(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getVCallThunkType(void)

{
  DName *in_stack_00000004;
  DNameStatus DVar1;
  
  if (*DAT_109a1484 == '\0') {
    DVar1 = 2;
  }
  else {
    if (*DAT_109a1484 == 'A') {
      DAT_109a1484 = DAT_109a1484 + 1;
      DName::DName(in_stack_00000004,"{flat}");
      return in_stack_00000004;
    }
    DVar1 = 1;
  }
  DName::DName(in_stack_00000004,DVar1);
  return in_stack_00000004;
}


// ==== 1092e54c DName::operator+

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


// ==== 1092e59d FUN_1092e59d

DName * __thiscall FUN_1092e59d(void *this,DName *param_1,DName *param_2)

{
  int iVar1;
  DName *this_00;
  
  DName::DName(param_1,this);
  iVar1 = DName::isEmpty(param_1);
  if (iVar1 == 0) {
    FUN_1092e39e(this_00,param_2);
  }
  else {
    DName::operator=(this_00,param_2);
  }
  return param_1;
}


// ==== 1092e5cb DName::operator+=

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
        pDVar2 = HeapManager::getMemory((HeapManager *)&DAT_109a1464,0xc,0);
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


// ==== 1092e635 DName::operator+=

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
        this_00 = HeapManager::getMemory((HeapManager *)&DAT_109a1464,0x10,0);
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


// ==== 1092e6a1 UnDecorator::getArgumentList

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
      if (*DAT_109a1484 == '@') {
        return in_stack_00000004;
      }
      if (*DAT_109a1484 == 'Z') {
        return in_stack_00000004;
      }
      if (local_8 == 0) {
        DName::operator+=(in_stack_00000004,',');
      }
      else {
        local_8 = 0;
      }
      pcVar1 = DAT_109a1484;
      if (*DAT_109a1484 == '\0') {
        DName::operator+=(in_stack_00000004,2);
        return in_stack_00000004;
      }
      uVar3 = (int)*DAT_109a1484 - 0x30;
      if (uVar3 < 10) {
        DAT_109a1484 = DAT_109a1484 + 1;
        pDVar2 = Replicator::operator[](DAT_109a1478,uVar3);
      }
      else {
        local_10 = 0;
        local_c = local_c & 0xfffff000;
        getPrimaryDataType(local_18);
        if ((1 < (int)DAT_109a1484 - (int)pcVar1) && (*(int *)DAT_109a1478 != 9)) {
          Replicator::operator+=(DAT_109a1478,local_18);
        }
        pDVar2 = local_18;
      }
      DName::operator+=(in_stack_00000004,pDVar2);
    } while (((byte)in_stack_00000004[4] & 0xf) == 0);
  }
  return in_stack_00000004;
}


// ==== 1092e781 UnDecorator::getVdispMapType

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVdispMapType(class DName const &)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getVdispMapType(DName *param_1)

{
  DName *pDVar1;
  DName *in_stack_00000008;
  
  DName::DName(param_1,in_stack_00000008);
  DName::operator+=(param_1,"{for ");
  pDVar1 = (DName *)getScope();
  DName::operator+=(param_1,pDVar1);
  DName::operator+=(param_1,'}');
  if (*DAT_109a1484 == '@') {
    DAT_109a1484 = DAT_109a1484 + 1;
  }
  return param_1;
}


// ==== 1092e7d0 operator+

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


// ==== 1092e7f2 operator+

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


// ==== 1092e814 operator+

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


// ==== 1092e836 DName::operator+

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


// ==== 1092e864 DName::operator+

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


// ==== 1092e892 UnDecorator::getDimension

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
  if (*DAT_109a1484 == 'Q') {
    DAT_109a1484 = DAT_109a1484 + 1;
    local_8 = (DName *)0x10960ae0;
  }
  cVar3 = *DAT_109a1484;
  if (cVar3 == '\0') {
    DName::DName(_param_1,2);
    return _param_1;
  }
  if (('/' < cVar3) && (cVar3 < ':')) {
    cVar3 = *DAT_109a1484;
    DAT_109a1484 = DAT_109a1484 + 1;
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
    pcVar2 = DAT_109a1484;
    iVar6 = (int)(_Var1 >> 0x20);
    uVar5 = (uint)_Var1;
    if (cVar3 == '@') break;
    if (cVar3 == '\0') {
      DVar8 = 2;
      goto LAB_1092e983;
    }
    if ((cVar3 < 'A') || ('P' < cVar3)) goto LAB_1092e98d;
    local_c = cVar3 + -0x41 >> 0x1f;
    lVar7 = __allmul(uVar5,iVar6,0x10,0);
    _Var1 = lVar7 + CONCAT44(local_c,cVar3 + -0x41);
    DAT_109a1484 = pcVar2 + 1;
    cVar3 = *DAT_109a1484;
  }
  cVar3 = *DAT_109a1484;
  DAT_109a1484 = DAT_109a1484 + 1;
  if (cVar3 != '@') {
LAB_1092e98d:
    DVar8 = 1;
LAB_1092e983:
    DName::DName(_param_1,DVar8);
    return _param_1;
  }
  if (in_stack_00000008 == '\0') {
    if (local_8 == (DName *)0x0) {
      pDVar4 = (DName *)DName::DName(local_10,_Var1);
      goto LAB_1092e9c2;
    }
    DName::DName(local_20,_Var1);
  }
  else {
    if (local_8 == (DName *)0x0) {
      pDVar4 = (DName *)FUN_1092e278(local_10,uVar5,iVar6);
      goto LAB_1092e9c2;
    }
    FUN_1092e278(local_20,uVar5,iVar6);
  }
  pDVar4 = (DName *)operator+(local_18,local_8);
LAB_1092e9c2:
  DName::DName(_param_1,pDVar4);
  return _param_1;
}


// ==== 1092e9d3 UnDecorator::getEnumType

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
  if (*DAT_109a1484 == '\0') {
    DVar4 = 2;
LAB_1092ea78:
    DName::DName(in_stack_00000004,DVar4);
    return in_stack_00000004;
  }
  switch(*DAT_109a1484) {
  case '0':
  case '1':
    pcVar3 = "char ";
    break;
  case '2':
  case '3':
    pcVar3 = "short ";
    break;
  case '4':
    goto switchD_1092e9fe_caseD_34;
  case '5':
    pcVar3 = "int ";
    break;
  case '6':
  case '7':
    pcVar3 = "long ";
    break;
  default:
    DVar4 = 1;
    goto LAB_1092ea78;
  }
  DName::operator=((DName *)&local_c,pcVar3);
switchD_1092e9fe_caseD_34:
  cVar1 = *DAT_109a1484;
  DAT_109a1484 = DAT_109a1484 + 1;
  if ((((cVar1 == '1') || (cVar1 == '3')) || (cVar1 == '5')) || (cVar1 == '7')) {
    pDVar2 = (DName *)operator+(local_14,(DName *)"unsigned ");
    DName::operator=((DName *)&local_c,pDVar2);
  }
  DName::DName(in_stack_00000004,(DName *)&local_c);
  return in_stack_00000004;
}


// ==== 1092eaa7 UnDecorator::getArgumentTypes

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
  
  if (*DAT_109a1484 == 'X') {
    pcVar3 = "void";
LAB_1092eb5e:
    DAT_109a1484 = DAT_109a1484 + 1;
    DName::DName(in_stack_00000004,pcVar3);
    return in_stack_00000004;
  }
  if (*DAT_109a1484 == 'Z') {
    pcVar3 = "...";
    if ((~(DAT_109a1494 >> 0x12) & 1) == 0) {
      pcVar3 = "<ellipsis>";
    }
    goto LAB_1092eb5e;
  }
  getArgumentList();
  if (((local_8 & 0xf) == 0) && (cVar1 = *DAT_109a1484, cVar1 != '\0')) {
    if (cVar1 != '@') {
      if (cVar1 != 'Z') {
        DName::DName(in_stack_00000004,1);
        return in_stack_00000004;
      }
      DAT_109a1484 = DAT_109a1484 + 1;
      pDVar2 = (DName *)DName::operator+(local_c,local_14);
      goto LAB_1092eb1c;
    }
    DAT_109a1484 = DAT_109a1484 + 1;
  }
  pDVar2 = local_c;
LAB_1092eb1c:
  DName::DName(in_stack_00000004,pDVar2);
  return in_stack_00000004;
}


// ==== 1092eb6b UnDecorator::getThrowTypes

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
  
  if (*DAT_109a1484 == '\0') {
    pcVar2 = local_14;
    pDVar1 = in_stack_00000004;
    this = (DName *)DName::DName((DName *)&local_c," throw(");
    cVar3 = (char)pDVar1;
    pDVar1 = (DName *)DName::operator+(this,(DNameStatus)pcVar2);
  }
  else {
    if (*DAT_109a1484 == 'Z') {
      DAT_109a1484 = DAT_109a1484 + 1;
      local_c = 0;
      local_8 = local_8 & 0xfffff000;
      DName::DName(in_stack_00000004,(DName *)&local_c);
      return in_stack_00000004;
    }
    pDVar1 = in_stack_00000004;
    getArgumentTypes();
    cVar3 = (char)pDVar1;
    pDVar1 = (DName *)operator+(local_14,(DName *)" throw(");
  }
  DName::operator+(pDVar1,cVar3);
  return in_stack_00000004;
}


// ==== 1092ebe9 UnDecorator::getExtendedDataIndirectType

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
  pcVar4 = (char *)((int)DAT_109a1484 + 1);
  iVar2 = (int)*pcVar4;
  if (iVar2 == 0x41) {
    DAT_109a1484 = pcVar4;
    if (in_stack_00000010 == 0) {
      *param_2 = (bool)(((*param_2 != true) - 1U & 199) + 0x5e);
    }
  }
  else if (iVar2 == 0x42) {
    DAT_109a1484 = pcVar4;
    *(undefined1 *)param_3 = 1;
    DName::operator=((DName *)&local_c,'>');
  }
  else {
    if (iVar2 != 0x43) {
      uVar1 = (iVar2 + -0x30) * 0x10 + -0x30 + (int)*(char *)((int)DAT_109a1484 + 2);
      DAT_109a1484 = (char *)((int)DAT_109a1484 + 3);
      if (1 < uVar1) {
        DName::operator=((DName *)&local_c,',');
        DName::DName(local_14,(ulonglong)uVar1);
        pDVar3 = (DName *)DName::operator+((DName *)&local_c,local_1c);
        DName::operator=((DName *)&local_c,pDVar3);
      }
      pDVar3 = (DName *)DName::operator+((DName *)&local_c,(char)local_24);
      DName::operator=((DName *)&local_c,pDVar3);
      if (*DAT_109a1484 == '$') {
        DAT_109a1484 = DAT_109a1484 + 1;
      }
      else {
        pDVar3 = (DName *)DName::operator+((DName *)&local_c,(char)local_2c);
        DName::operator=((DName *)&local_c,pDVar3);
      }
      DAT_109a1484 = DAT_109a1484 + 1;
      local_8 = local_8 | 0x400;
      DName::DName((DName *)param_1,(DName *)&local_c);
      return param_1;
    }
    DAT_109a1484 = pcVar4;
    *param_2 = true;
  }
  DAT_109a1484 = DAT_109a1484 + 1;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffff000;
  return param_1;
}


// ==== 1092ed0e UnDecorator::getArrayType

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
  
  if (*DAT_109a1484 == '\0') {
    iVar5 = DName::isEmpty(in_stack_00000008);
    cVar6 = (char)local_2c;
    puVar2 = local_24;
    if (iVar5 == 0) {
      pDVar3 = local_1c;
      pDVar4 = (DName *)operator+((char)local_14,(DName *)0x28);
      pDVar3 = (DName *)DName::operator+(pDVar4,(char *)pDVar3);
      goto LAB_1092ed4a;
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
        DName::operator+=((DName *)&local_c,"[]");
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
LAB_1092ed4a:
  pDVar3 = (DName *)DName::operator+(pDVar3,(DNameStatus)puVar2);
  pDVar3 = (DName *)DName::operator+(pDVar3,cVar6);
  FUN_10931de7(param_1,pDVar3);
  return param_1;
}


// ==== 1092ee6d UnDecorator::getLexicalFrame

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


// ==== 1092eed4 UnDecorator::getVfTableType

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
  if ((iVar1 == 0) || (*DAT_109a1484 == '\0')) {
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
      if (*DAT_109a1484 != '@') {
        pcVar4 = "{for ";
        pDVar2 = extraout_ECX;
        do {
          DName::operator+=(pDVar2,pcVar4);
          do {
            iVar1 = DName::isValid(param_1);
            if (((iVar1 == 0) || (*DAT_109a1484 == '\0')) || (*DAT_109a1484 == '@')) {
              iVar1 = DName::isValid(param_1);
              if (iVar1 != 0) {
                if (*DAT_109a1484 == '\0') {
                  DName::operator+=(this_01,2);
                }
                DName::operator+=(param_1,'}');
              }
              if (*DAT_109a1484 != '@') {
                return param_1;
              }
              goto LAB_1092eff7;
            }
            cVar3 = (char)local_1c;
            getScope();
            pDVar2 = (DName *)operator+((char)local_c,(DName *)0x60);
            pDVar2 = (DName *)DName::operator+(pDVar2,cVar3);
            DName::operator+=(param_1,pDVar2);
            if (*DAT_109a1484 == '@') {
              DAT_109a1484 = DAT_109a1484 + 1;
            }
            iVar1 = DName::isValid(param_1);
          } while ((iVar1 == 0) || (*extraout_EDX == '@'));
          pcVar4 = "s ";
          pDVar2 = extraout_ECX_00;
        } while( true );
      }
LAB_1092eff7:
      DAT_109a1484 = DAT_109a1484 + 1;
    }
  }
  return param_1;
}


// ==== 1092f024 UnDecorator::getStringEncoding

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
  pcVar1 = DAT_109a1484;
  cVar2 = *DAT_109a1484;
  DAT_109a1484 = DAT_109a1484 + 1;
  if ((cVar2 == '@') && (cVar2 = *DAT_109a1484, DAT_109a1484 = pcVar1 + 2, cVar2 == '_')) {
    DAT_109a1484 = pcVar1 + 3;
    getDimension(SUB41(local_14,0));
    getDimension(SUB41(local_14,0));
    cVar2 = *DAT_109a1484;
    if (cVar2 != '\0') {
      do {
        if (cVar2 == '@') break;
        DAT_109a1484 = DAT_109a1484 + 1;
        cVar2 = *DAT_109a1484;
      } while (cVar2 != '\0');
      if (*DAT_109a1484 != '\0') {
        DAT_109a1484 = DAT_109a1484 + 1;
        DName::DName((DName *)param_1,local_c);
        return param_1;
      }
    }
    DAT_109a1484 = DAT_109a1484 + -1;
    DVar3 = 2;
  }
  else {
    DVar3 = 1;
  }
  DName::DName((DName *)param_1,DVar3);
  return param_1;
}


// ==== 1092f0c4 UnDecorator::getSignedDimension

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getSignedDimension(void)
   
   Library: Visual Studio 2005 Release */

DName * __cdecl UnDecorator::getSignedDimension(void)

{
  DName *in_stack_00000004;
  
  if (*DAT_109a1484 == '\0') {
    DName::DName(in_stack_00000004,2);
  }
  else if (*DAT_109a1484 == '?') {
    DAT_109a1484 = DAT_109a1484 + 1;
    getDimension(true);
    operator+(SUB41(in_stack_00000004,0),(DName *)0x2d);
  }
  else {
    getDimension(SUB41(in_stack_00000004,0));
  }
  return in_stack_00000004;
}


// ==== 1092f114 UnDecorator::getTemplateConstant

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
  
  pcVar2 = DAT_109a1484;
  local_8 = DAT_1096d674 ^ (uint)local_78;
  cVar5 = *DAT_109a1484;
  DAT_109a1484 = DAT_109a1484 + 1;
  if (cVar5 < 'E') {
    if (cVar5 == 'D') {
LAB_1092f2a3:
      getSignedDimension();
      if (((ushort)DAT_109a1494 & 0x4000) != 0) {
        DName::getString(local_84,local_18,0x10);
        lVar4 = _atol(local_18);
        pcVar2 = (char *)(*DAT_109a1498)(lVar4);
        if (pcVar2 != (char *)0x0) {
LAB_1092f217:
          DName::DName(in_stack_00000004,pcVar2);
          goto LAB_1092f3bb;
        }
      }
      if (cVar5 == 'D') {
        pcVar6 = "`template-parameter";
        pcVar2 = local_8c;
      }
      else {
        pcVar6 = "`non-type-template-parameter";
        pcVar2 = local_cc;
      }
      pDVar3 = (DName *)operator+(pcVar2,(DName *)pcVar6);
      DName::operator+(pDVar3,(char *)in_stack_00000004);
      goto LAB_1092f3bb;
    }
    if (cVar5 != '\0') {
      if (cVar5 == '0') {
        getSignedDimension();
        goto LAB_1092f3bb;
      }
      if (cVar5 == '1') {
        if (*DAT_109a1484 == '@') {
          DAT_109a1484 = pcVar2 + 2;
          pcVar2 = "NULL";
          goto LAB_1092f217;
        }
        getDecoratedName();
        pDVar3 = (DName *)DName::DName(local_bc,"&");
LAB_1092f1f6:
        DName::operator+(pDVar3,in_stack_00000004);
        goto LAB_1092f3bb;
      }
      if (cVar5 == '2') {
        getSignedDimension();
        getSignedDimension();
        iVar1 = DName::isValid(local_84);
        pcVar2 = DAT_109a1484;
        if ((iVar1 == 0) || (iVar1 = DName::isValid(local_10), pcVar2 = DAT_109a1484, iVar1 == 0))
        goto LAB_1092f24f;
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
          goto LAB_1092f1f6;
        }
      }
      goto LAB_1092f1b0;
    }
LAB_1092f24f:
    DAT_109a1484 = pcVar2;
    DVar7 = 2;
  }
  else {
    if (cVar5 == 'E') {
      getDecoratedName();
      goto LAB_1092f3bb;
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
LAB_1092f377:
          pDVar3 = (DName *)getSignedDimension();
          DName::operator+=(local_84,pDVar3);
          DName::operator+=(local_84,',');
LAB_1092f394:
          pDVar3 = (DName *)getSignedDimension();
          DName::operator+=(local_84,pDVar3);
        }
        else {
          if (cVar5 == 'G') {
LAB_1092f35a:
            pDVar3 = (DName *)getSignedDimension();
            DName::operator+=(local_84,pDVar3);
            DName::operator+=(local_84,',');
            goto LAB_1092f377;
          }
          if (cVar5 == 'H') goto LAB_1092f394;
          if (cVar5 == 'I') goto LAB_1092f377;
          if (cVar5 == 'J') goto LAB_1092f35a;
        }
        DName::operator+(local_84,(char)in_stack_00000004);
        goto LAB_1092f3bb;
      }
      if (cVar5 == 'Q') goto LAB_1092f2a3;
      if (cVar5 == 'R') {
        getZName(SUB41(local_10,0));
        getSignedDimension();
        DName::DName(in_stack_00000004,local_10);
        goto LAB_1092f3bb;
      }
    }
LAB_1092f1b0:
    DVar7 = 1;
  }
  DName::DName(in_stack_00000004,DVar7);
LAB_1092f3bb:
  __security_check_cookie(local_8 ^ (uint)local_78);
  return;
}


// ==== 1092f3cf UnDecorator::getPtrRefDataType

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
  
  if (*DAT_109a1484 == '\0') {
    operator+((DNameStatus)param_1,(DName *)0x2);
    return param_1;
  }
  if ((in_stack_0000000c != 0) && (*DAT_109a1484 == 'X')) {
    DAT_109a1484 = DAT_109a1484 + 1;
    iVar1 = DName::isEmpty((DName *)param_2);
    if (iVar1 == 0) {
      operator+((char *)param_1,(DName *)"void ");
      return param_1;
    }
    DName::DName(param_1,"void");
    return param_1;
  }
  if (*DAT_109a1484 == 'Y') {
    DAT_109a1484 = DAT_109a1484 + 1;
    getArrayType(param_1);
    return param_1;
  }
  FUN_10931de7(local_c,(DName *)param_2);
  if ((*(uint *)(param_2 + 4) & 0x400) == 0) {
    if ((*(uint *)(param_2 + 4) & 0x200) == 0) goto LAB_1092f485;
    pcVar3 = "cli::pin_ptr<";
  }
  else {
    pcVar3 = "cli::array<";
  }
  pDVar2 = (DName *)operator+(local_14,(DName *)pcVar3);
  DName::operator=(local_c,pDVar2);
LAB_1092f485:
  DName::DName(param_1,local_c);
  return param_1;
}


// ==== 1092f4bc UnDecorator::getTemplateArgumentList

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
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xfffff000;
  DAT_109a149d = 1;
  DVar1 = in_stack_00000004[4];
  local_24 = 1;
  do {
    if (((((byte)DVar1 & 0xf) != 0) || (*DAT_109a1484 == '\0')) || (*DAT_109a1484 == '@')) {
      DAT_109a149d = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (local_24 == 0) {
      DName::operator+=(in_stack_00000004,',');
    }
    else {
      local_24 = 0;
    }
    pcVar3 = DAT_109a1484;
    cVar2 = *DAT_109a1484;
    if ((int)cVar2 - 0x30U < 10) {
      DAT_109a1484 = DAT_109a1484 + 1;
      pDVar4 = Replicator::operator[](DAT_109a1480,(int)cVar2 - 0x30U);
    }
    else {
      local_20 = 0;
      local_1c = local_1c & 0xfffff000;
      if (cVar2 == 'X') {
        DAT_109a1484 = DAT_109a1484 + 1;
        pcVar7 = "void";
LAB_1092f564:
        DName::operator=((DName *)&local_20,pcVar7);
      }
      else {
        if ((cVar2 == '$') && (DAT_109a1484[1] != '$')) {
          DAT_109a1484 = DAT_109a1484 + 1;
          pDVar4 = (DName *)getTemplateConstant();
        }
        else if (cVar2 == '?') {
          getSignedDimension();
          if (((ushort)DAT_109a1494 & 0x4000) == 0) {
            pcVar7 = local_5c;
            pcVar6 = local_44;
          }
          else {
            DName::getString(local_2c,local_18,0x10);
            lVar5 = _atol(local_18);
            pcVar7 = (char *)(*DAT_109a1498)(lVar5);
            if (pcVar7 != (char *)0x0) goto LAB_1092f564;
            pcVar7 = local_3c;
            pcVar6 = local_4c;
          }
          pDVar4 = (DName *)operator+(pcVar6,(DName *)"`template-parameter");
          pDVar4 = (DName *)DName::operator+(pDVar4,pcVar7);
        }
        else {
          local_34 = 0;
          local_30 = local_30 & 0xfffff000;
          pDVar4 = (DName *)getPrimaryDataType(local_54);
        }
        DName::operator=((DName *)&local_20,pDVar4);
      }
      if ((1 < (int)DAT_109a1484 - (int)pcVar3) && (*(int *)DAT_109a1480 != 9)) {
        Replicator::operator+=(DAT_109a1480,(DName *)&local_20);
      }
      pDVar4 = (DName *)&local_20;
    }
    DName::operator+=(in_stack_00000004,pDVar4);
    DVar1 = in_stack_00000004[4];
  } while( true );
}


// ==== 1092f674 UnDecorator::getOperatorName

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
  
  cVar2 = *DAT_109a1484;
  local_8 = local_8 & 0xfffff000;
  local_18 = local_18 & 0xfffff000;
  bVar1 = false;
  pcVar3 = DAT_109a1484 + 1;
  local_c = 0;
  local_1c = 0;
  if (cVar2 < 'B') {
    if (cVar2 == 'A') {
LAB_1092fbaf:
      cVar2 = *DAT_109a1484;
      DAT_109a1484 = pcVar3;
      DName::operator=((DName *)&local_c,*(char **)("operator" + cVar2 * 4 + 4));
      pcVar3 = DAT_109a1484;
      if (bVar1) {
        iVar4 = DName::isEmpty((DName *)&local_c);
        if (iVar4 == 0) {
          local_8 = local_8 | 0x20;
        }
      }
      else {
LAB_1092f6e5:
        DAT_109a1484 = pcVar3;
        iVar4 = DName::isEmpty((DName *)&local_c);
        if (iVar4 == 0) {
          pDVar5 = (DName *)operator+(local_24,(DName *)"operator");
          DName::operator=((DName *)&local_c,pDVar5);
        }
      }
LAB_1092f70e:
      pDVar5 = (DName *)&local_c;
LAB_1092f711:
      DName::DName(_param_1,pDVar5);
      return _param_1;
    }
    if (cVar2 == '\0') goto LAB_1092f7f7;
    if ('/' < cVar2) {
      if (cVar2 < '2') {
        local_1c = 0;
        if ((char)param_2 != '\0') {
          DAT_109a1484 = pcVar3;
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
          if (*DAT_109a1484 == '\0') {
            pDVar5 = (DName *)&local_1c;
            goto LAB_1092f711;
          }
          pcVar3 = DAT_109a1484 + 1;
        }
        DAT_109a1484 = pcVar3;
        pDVar5 = (DName *)getZName(SUB41(local_3c,0));
        DName::operator=((DName *)&local_c,pDVar5);
        DAT_109a1484 = pcVar3;
        iVar4 = DName::isEmpty((DName *)&local_c);
        if ((iVar4 == 0) && (pcVar3[-1] == '1')) {
          pDVar5 = (DName *)operator+((char)local_8c,(DName *)0x7e);
          DName::operator=((DName *)&local_c,pDVar5);
        }
        iVar4 = DName::isEmpty((DName *)&local_1c);
        if (iVar4 == 0) {
          DName::operator+=((DName *)&local_c,extraout_ECX);
        }
        goto LAB_1092f70e;
      }
      if (cVar2 < ':') {
        pcVar7 = *(char **)(&DAT_10960870 + *DAT_109a1484 * 4);
        DAT_109a1484 = pcVar3;
        goto LAB_1092f6dd;
      }
    }
  }
  else {
    if (cVar2 == 'B') {
      bVar1 = true;
      goto LAB_1092fbaf;
    }
    if (cVar2 < 'C') goto LAB_1092f8fe;
    if (cVar2 < '[') goto LAB_1092fbaf;
    if (cVar2 == '_') {
      cVar2 = *pcVar3;
      pcVar3 = DAT_109a1484 + 2;
      if (cVar2 < 'P') {
        if ('C' < cVar2) {
LAB_1092fb8c:
          pcVar7 = *(char **)("__cdecl" + DAT_109a1484[1] * 4 + 4);
          DAT_109a1484 = pcVar3;
LAB_1092f875:
          DName::DName(_param_1,pcVar7);
          return _param_1;
        }
        if (cVar2 < ':') {
          if (cVar2 == '9') {
            pcVar7 = DAT_109a1484 + 1;
            DAT_109a1484 = pcVar3;
            DName::DName(local_14,(&PTR_s___pascal_10960900)[*pcVar7]);
            local_10 = local_10 | 0x800;
LAB_1092f8ac:
            pDVar5 = local_14;
            goto LAB_1092f711;
          }
          if (cVar2 == '\0') {
LAB_1092f7f7:
            pcVar3 = pcVar3 + -1;
LAB_1092f7fd:
            DAT_109a1484 = pcVar3;
            DVar8 = 2;
            goto LAB_1092f7ff;
          }
          if ('/' < cVar2) {
            if (cVar2 < '7') {
              pcVar7 = (&PTR_s___pascal_10960900)[DAT_109a1484[1]];
              DAT_109a1484 = pcVar3;
              goto LAB_1092f6dd;
            }
            if (cVar2 < '9') {
              pcVar7 = (&PTR_s___pascal_10960900)[DAT_109a1484[1]];
              DAT_109a1484 = pcVar3;
              goto LAB_1092f875;
            }
          }
        }
        else if (cVar2 == '?') {
          cVar2 = *pcVar3;
          pcVar3 = DAT_109a1484 + 3;
          if (cVar2 == '\0') goto LAB_1092f7f7;
          if (cVar2 == '0') {
            pcVar7 = "`anonymous namespace\'";
            DAT_109a1484 = pcVar3;
LAB_1092f8d3:
            getStringEncoding((char *)local_14,(int)pcVar7);
            local_10 = local_10 | 0x100;
            goto LAB_1092f8ac;
          }
        }
        else if ('@' < cVar2) {
          if (cVar2 < 'C') goto LAB_1092fb8c;
          if (cVar2 == 'C') {
            pcVar7 = "`string\'";
            DAT_109a1484 = pcVar3;
            goto LAB_1092f8d3;
          }
        }
      }
      else if (cVar2 < 'U') {
        if ('R' < cVar2) goto LAB_1092fb8c;
        pDVar5 = _param_1;
        if (cVar2 == 'P') {
          pcVar7 = DAT_109a1484 + 1;
          DAT_109a1484 = pcVar3;
          DName::operator=((DName *)&local_c,*(char **)("__cdecl" + *pcVar7 * 4 + 4));
          pDVar6 = (DName *)getOperatorName(SUB41(local_84,0),(bool *)0x0);
          DName::operator=((DName *)&local_1c,pDVar6);
          iVar4 = DName::isEmpty((DName *)&local_1c);
          if ((iVar4 != 0) || (pcVar3 = DAT_109a1484, (local_18 & 0x40) == 0)) {
LAB_1092f980:
            pDVar6 = (DName *)&local_c;
LAB_1092f98a:
            DName::operator+(pDVar6,pDVar5);
            return _param_1;
          }
        }
        else {
          if (cVar2 == 'Q') goto LAB_1092f6e5;
          if (cVar2 == 'R') {
            pcVar7 = DAT_109a1484 + 1;
            DAT_109a1484 = pcVar3;
            DName::operator=((DName *)&local_c,*(char **)("__cdecl" + *pcVar7 * 4 + 4));
            DName::operator=((DName *)&local_1c,*(char **)(&DAT_10960864 + *DAT_109a1484 * 4));
            pcVar3 = DAT_109a1484;
            iVar4 = (int)*DAT_109a1484;
            DAT_109a1484 = DAT_109a1484 + 1;
            if (iVar4 == 0x30) {
              getDataType(local_14);
              pDVar6 = local_64;
              this = (DName *)DName::operator+(local_14,(char)local_74);
              pDVar6 = (DName *)DName::operator+(this,pDVar6);
              goto LAB_1092f98a;
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
            if (iVar4 - 0x32U < 3) goto LAB_1092f980;
            goto LAB_1092f7fd;
          }
        }
      }
      else if ('T' < cVar2) {
        if (cVar2 < 'W') {
          pcVar7 = *(char **)("__cdecl" + DAT_109a1484[1] * 4 + 4);
          DAT_109a1484 = pcVar3;
LAB_1092f6dd:
          DName::operator=((DName *)&local_c,pcVar7);
          pcVar3 = DAT_109a1484;
          goto LAB_1092f6e5;
        }
        if ('W' < cVar2) {
          if (cVar2 < 'Z') goto LAB_1092fb8c;
          if (cVar2 == '_') {
            cVar2 = *pcVar3;
            pcVar3 = DAT_109a1484 + 3;
            if ('@' < cVar2) {
              if ('D' < cVar2) {
                if (cVar2 < 'G') {
                  pcVar7 = DAT_109a1484 + 2;
                  DAT_109a1484 = pcVar3;
                  DName::DName(local_14,(&PTR_DAT_10960948)[*pcVar7]);
                  if (*DAT_109a1484 == '?') {
                    pDVar5 = (DName *)getDecoratedName();
                    DName::operator+=(local_14,pDVar5);
                    if (*DAT_109a1484 == '@') {
                      DAT_109a1484 = DAT_109a1484 + 1;
                    }
                  }
                  else {
                    pDVar5 = (DName *)getSymbolName();
                    DName::operator+=(local_14,pDVar5);
                  }
                  DName::operator+=(local_14,"\'\'");
                  goto LAB_1092f8ac;
                }
                if ('J' < cVar2) goto LAB_1092f8fe;
              }
              pcVar7 = (&PTR_DAT_10960948)[DAT_109a1484[2]];
              DAT_109a1484 = pcVar3;
              goto LAB_1092f875;
            }
          }
        }
      }
    }
  }
LAB_1092f8fe:
  DAT_109a1484 = pcVar3;
  DVar8 = 1;
LAB_1092f7ff:
  DName::DName(_param_1,DVar8);
  return _param_1;
}


// ==== 1092fbe3 UnDecorator::getTemplateName

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
  
  uVar3 = DAT_109a1480;
  uVar2 = DAT_109a147c;
  uVar1 = DAT_109a1478;
  if ((*DAT_109a1484 == '?') && (DAT_109a1484[1] == '$')) {
    DAT_109a1484 = DAT_109a1484 + 2;
    Replicator::Replicator(local_98);
    Replicator::Replicator(local_5c);
    Replicator::Replicator(local_d4);
    local_10 = 0;
    local_c = local_c & 0xfffff000;
    DAT_109a1478 = local_98;
    DAT_109a147c = local_5c;
    DAT_109a1480 = local_d4;
    local_5 = '\0';
    if (*DAT_109a1484 == '?') {
      DAT_109a1484 = DAT_109a1484 + 1;
      pDVar5 = (DName *)getOperatorName(SUB41(local_18,0),(bool *)0x1);
    }
    else {
      pDVar5 = (DName *)getZName(SUB41(local_18,0));
    }
    DName::operator=((DName *)&local_10,pDVar5);
    iVar6 = DName::isEmpty((DName *)&local_10);
    if (iVar6 != 0) {
      DAT_109a149c = 1;
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
        DAT_109a1484 = DAT_109a1484 + 1;
      }
    }
    DAT_109a1478 = (Replicator *)uVar1;
    DAT_109a147c = (Replicator *)uVar2;
    DAT_109a1480 = (Replicator *)uVar3;
    DName::DName(_param_1,(DName *)&local_10);
  }
  else {
    DName::DName(_param_1,1);
  }
  return _param_1;
}


// ==== 1092fd36 UnDecorator::getZName

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
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  uVar4 = (int)*DAT_109a1484 - 0x30;
  local_2c = _param_1;
  if (uVar4 < 10) {
    DAT_109a1484 = DAT_109a1484 + 1;
    pDVar1 = Replicator::operator[](DAT_109a147c,uVar4);
    DName::DName(_param_1,pDVar1);
    goto LAB_1092ff13;
  }
  local_20 = 0;
  local_1c = local_1c & 0xfffff000;
  if (*DAT_109a1484 == '?') {
    pDVar1 = (DName *)getTemplateName(SUB41(local_28,0));
    DName::operator=((DName *)&local_20,pDVar1);
    pcVar7 = DAT_109a1484 + 1;
    if (*DAT_109a1484 != '@') {
      DName::operator=((DName *)&local_20,(*DAT_109a1484 == '\0') + 1);
      pcVar7 = DAT_109a1484;
    }
  }
  else {
    pcVar5 = "template-parameter-";
    pcVar8 = "template-parameter-";
    iVar6 = 0x12;
    pcVar7 = DAT_109a1484;
    do {
      if ((*pcVar7 == '\0') || (*pcVar7 != *pcVar8)) break;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (*pcVar7 == *pcVar8) {
      DAT_109a1484 = DAT_109a1484 + 0x13;
    }
    else {
      pcVar5 = "generic-type-";
      pcVar8 = "generic-type-";
      iVar6 = 0xc;
      pcVar7 = DAT_109a1484;
      do {
        if ((*pcVar7 == '\0') || (*pcVar7 != *pcVar8)) break;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (*pcVar7 != *pcVar8) {
        pDVar1 = (DName *)DName::DName(local_34,&DAT_109a1484,'@');
        DName::operator=((DName *)&local_20,pDVar1);
        pcVar7 = DAT_109a1484;
        goto LAB_1092feea;
      }
      DAT_109a1484 = DAT_109a1484 + 0xd;
    }
    getSignedDimension();
    if (((ushort)DAT_109a1494 & 0x4000) == 0) {
      DName::operator=((DName *)&local_20,"`");
      pDVar1 = local_34;
      pDVar3 = local_3c;
    }
    else {
      DName::getString(local_28,local_18,0x10);
      lVar2 = _atol(local_18);
      pcVar7 = (char *)(*DAT_109a1498)(lVar2);
      if (pcVar7 != (char *)0x0) {
        DName::operator=((DName *)&local_20,pcVar7);
        pcVar7 = DAT_109a1484;
        goto LAB_1092feea;
      }
      DName::operator=((DName *)&local_20,"`");
      pDVar1 = local_3c;
      pDVar3 = local_34;
    }
    pDVar3 = (DName *)operator+((char *)pDVar3,(DName *)pcVar5);
    pDVar1 = (DName *)DName::operator+(pDVar3,(char *)pDVar1);
    DName::operator+=((DName *)&local_20,pDVar1);
    pcVar7 = DAT_109a1484;
  }
LAB_1092feea:
  DAT_109a1484 = pcVar7;
  if ((in_stack_00000008 != '\0') && (*(int *)DAT_109a147c != 9)) {
    Replicator::operator+=(DAT_109a147c,(DName *)&local_20);
  }
  DName::DName(local_2c,(DName *)&local_20);
LAB_1092ff13:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1092ff20 UnDecorator::getScopedName

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
  if ((((byte)in_stack_00000004[4] & 0xf) == 0) && (*DAT_109a1484 != '\0')) {
    if (*DAT_109a1484 == '@') goto LAB_1092ff99;
    pDVar1 = local_c;
    pcVar4 = local_14;
    pDVar2 = (DName *)getScope();
    pDVar2 = (DName *)DName::operator+(pDVar2,pcVar4);
    pDVar1 = (DName *)DName::operator+(pDVar2,pDVar1);
    DName::operator=(in_stack_00000004,pDVar1);
  }
  if (*DAT_109a1484 != '@') {
    if (*DAT_109a1484 == '\0') {
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
LAB_1092ff99:
  DAT_109a1484 = DAT_109a1484 + 1;
  return in_stack_00000004;
}


// ==== 10930013 UnDecorator::getECSUDataType

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
  
  pcVar5 = DAT_109a1484;
  uVar4 = 1;
  uVar3 = ~(DAT_109a1494 >> 0xf) & 1;
  if ((uVar3 == 0) || ((DAT_109a1494 & 0x1000) != 0)) {
    uVar4 = 0;
  }
  cVar1 = *DAT_109a1484;
  local_c = 0;
  local_8 = local_8 & 0xfffff000;
  DAT_109a1484 = DAT_109a1484 + 1;
  if (cVar1 == '\0') {
    DAT_109a1484 = pcVar5;
    DName::DName(in_stack_00000004,"nknown ecsu\'");
    return in_stack_00000004;
  }
  if (cVar1 == 'T') {
    pcVar5 = "union ";
  }
  else if (cVar1 == 'U') {
    pcVar5 = "struct ";
  }
  else if (cVar1 == 'V') {
    pcVar5 = "class ";
  }
  else {
    if (cVar1 == 'W') {
      getEnumType();
      pDVar2 = (DName *)operator+(local_1c,(DName *)"enum ");
      DName::operator=((DName *)&local_c,pDVar2);
      goto LAB_109300be;
    }
    if (cVar1 == 'X') {
      pcVar5 = "coclass ";
    }
    else {
      uVar3 = uVar4;
      if (cVar1 != 'Y') goto LAB_109300be;
      pcVar5 = "cointerface ";
    }
  }
  DName::operator=((DName *)&local_c,pcVar5);
  uVar3 = uVar4;
LAB_109300be:
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


// ==== 10930113 UnDecorator::getSymbolName

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getSymbolName(void)
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl UnDecorator::getSymbolName(void)

{
  undefined4 in_stack_00000004;
  bool bVar1;
  
  bVar1 = SUB41(in_stack_00000004,0);
  if (*DAT_109a1484 == '?') {
    if (DAT_109a1484[1] == '$') {
      getTemplateName(bVar1);
    }
    else {
      DAT_109a1484 = DAT_109a1484 + 1;
      getOperatorName(bVar1,(bool *)0x0);
    }
  }
  else {
    getZName(bVar1);
  }
  return in_stack_00000004;
}


// ==== 10930159 UnDecorator::getBasedType

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
  if (*DAT_109a1484 == '\0') {
    DName::operator+=(local_c,2);
  }
  else {
    cVar1 = *DAT_109a1484;
    DAT_109a1484 = DAT_109a1484 + 1;
    if (cVar1 == '0') {
      DName::operator+=(local_c,"void");
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
  DName::operator+=(local_c,") ");
  DName::DName(in_stack_00000004,local_c);
  return in_stack_00000004;
}


// ==== 109301eb UnDecorator::composeDeclaration

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
LAB_109307eb:
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
        pcVar13 = "`template static data member constructor helper\'";
        goto LAB_10930994;
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
        pcVar13 = "`template static data member destructor helper\'";
        goto LAB_10930994;
      }
      if (local_8 == 0) {
        if ((uVar1 & 0x7c00) == 0x7800) goto LAB_10930d19;
        goto LAB_109309b3;
      }
LAB_109309b9:
      uVar2 = (uVar1 & 0x1800) - 0x800;
    }
    else {
      pcVar13 = "`local static destructor helper\'";
LAB_10930994:
      DName::operator+=((DName *)&local_28,pcVar13);
LAB_109309b3:
      if (local_8 != 0) goto LAB_109309b9;
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
      pDVar3 = (DName *)operator+((char *)local_70,(DName *)&DAT_10960d40);
    }
LAB_10930a3a:
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
    if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1000)) goto LAB_109307eb;
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 != 0) && (((uVar1 & 0x1b00) == 0x1100 || ((uVar1 & 0x1b00) == 0x1200))))
    goto LAB_109307eb;
    if ((uVar1 & 0x4000) != 0) {
      if (((~(DAT_109a1494 >> 1) & 1) == 0) || ((~(DAT_109a1494 >> 3) & 1) == 0)) {
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
          else if ((local_c == 0) || ((uVar1 & 0x700) != 0x500)) goto LAB_109304eb;
          getDimension(SUB41(&local_50,0));
          DName::operator=((DName *)&local_18,(DName *)&local_50);
        }
LAB_109304eb:
        getDimension(SUB41(&local_50,0));
        DName::operator=((DName *)&local_48,(DName *)&local_50);
      }
      if ((local_c != 0) && ((uVar1 & 0x700) != 0x200)) {
        if (((byte)DAT_109a1494 & 0x60) == 0x60) {
          pDVar3 = (DName *)getThisType();
          DName::operator|=((DName *)&local_30,pDVar3);
        }
        else {
          pDVar3 = (DName *)getThisType();
          DName::operator=((DName *)&local_30,pDVar3);
        }
      }
      if (((~(DAT_109a1494 >> 1) & 1) == 0) || ((~(DAT_109a1494 >> 4) & 1) == 0)) {
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
        if ((iVar5 == 0) && ((DAT_109a1494 & 0x1000) == 0)) {
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
        pDVar3 = HeapManager::getMemory((HeapManager *)&DAT_109a1464,8,0);
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
        pDVar4 = (DName *)operator+((char *)local_20,(DName *)&DAT_10960d40);
        DName::operator+=((DName *)&local_28,pDVar4);
        if ((DAT_109a1494 & 0x1000) != 0) goto LAB_10930d19;
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
LAB_10930719:
          DName::operator+=((DName *)&local_28,"`adjustor{");
        }
        else {
          if ((uVar1 & 0x700) == 0x600) {
            cVar12 = (char)local_58;
            pDVar4 = local_20;
            cVar11 = (char)local_10;
            pDVar8 = local_60;
            cVar10 = (char)local_68;
            pDVar7 = (DName *)operator+((char *)local_70,(DName *)"`vtordispex{");
            pDVar7 = (DName *)DName::operator+(pDVar7,cVar10);
            pDVar8 = (DName *)DName::operator+(pDVar7,pDVar8);
            pDVar8 = (DName *)DName::operator+(pDVar8,cVar11);
            pDVar4 = (DName *)DName::operator+(pDVar8,pDVar4);
          }
          else {
            if ((local_c == 0) || ((uVar1 & 0x700) != 0x500)) goto LAB_10930719;
            cVar12 = (char)local_70;
            pDVar4 = (DName *)operator+(local_68,(DName *)"`vtordisp{");
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
      if ((~(DAT_109a1494 >> 8) & 1) == 0) {
        pDVar4 = (DName *)getThrowTypes();
        DName::operator|=((DName *)&local_28,pDVar4);
      }
      else {
        pDVar4 = (DName *)getThrowTypes();
        DName::operator+=((DName *)&local_28,pDVar4);
      }
      if (((~(DAT_109a1494 >> 2) & 1) == 0) || (pDVar3 == (DName *)0x0)) goto LAB_10930a43;
      DName::operator=(pDVar3,(DName *)&local_28);
      pDVar3 = (DName *)&local_50;
      goto LAB_10930a3a;
    }
    getDimension(SUB41(&local_50,0));
    pDVar3 = (DName *)&local_48;
    pDVar4 = (DName *)DName::operator+(in_stack_00000008,(char)&local_40);
    pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
    DName::operator+=((DName *)&local_28,pDVar3);
    getVCallThunkType();
    if ((DAT_109a1494 & 0x1000) == 0) {
      pcVar13 = (char *)&local_48;
      pDVar3 = (DName *)operator+((char)&local_40,(DName *)0x2c);
      pDVar3 = (DName *)DName::operator+(pDVar3,pcVar13);
      DName::operator+=((DName *)&local_28,pDVar3);
    }
    DName::operator+=((DName *)&local_28,"}\'");
    getCallingConvention();
    if ((((~(DAT_109a1494 >> 1) & 1) != 0) && ((~(DAT_109a1494 >> 4) & 1) != 0)) &&
       ((DAT_109a1494 & 0x1000) == 0)) {
      pDVar3 = (DName *)&local_48;
      cVar12 = (char)&local_40;
      pDVar4 = (DName *)operator+((char)&local_38,(DName *)0x20);
      pDVar4 = (DName *)DName::operator+(pDVar4,cVar12);
      pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
      goto LAB_10930a3a;
    }
  }
LAB_10930a43:
  if (local_8 == 0) {
    uVar2 = uVar1 & 0x6000;
  }
  else {
    uVar2 = (uVar1 & 0x1800) - 0x800;
  }
  if (uVar2 == 0) {
    if ((~(DAT_109a1494 >> 9) & 1) != 0) {
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if ((uVar2 == 0) && (local_8 == 0 || (uVar1 & 0x700) == 0x200)) {
        pDVar3 = (DName *)operator+((char *)local_70,(DName *)"static ");
        DName::operator=((DName *)&local_28,pDVar3);
      }
      if (local_8 == 0) {
LAB_10930b01:
        uVar2 = uVar1 & 0x6000;
LAB_10930b05:
        if (uVar2 == 0) {
          uVar2 = uVar1 & 0x400;
        }
        else {
          uVar2 = uVar1 & 0x1000;
        }
        if (uVar2 == 0) goto LAB_10930bb6;
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
            if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x400)) goto LAB_10930bb6;
          }
        }
      }
      else if ((uVar1 & 0x700) != 0x100) {
        if (local_8 == 0) goto LAB_10930b01;
        uVar2 = (uVar1 & 0x1800) - 0x800;
        goto LAB_10930b05;
      }
      pDVar3 = (DName *)operator+((char *)local_70,(DName *)"virtual ");
      DName::operator=((DName *)&local_28,pDVar3);
    }
LAB_10930bb6:
    if ((~(DAT_109a1494 >> 7) & 1) != 0) {
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
        if (bVar9) goto LAB_10930c0a;
        pcVar13 = "private: ";
LAB_10930c85:
        pDVar3 = (DName *)operator+((char *)local_70,(DName *)pcVar13);
        DName::operator=((DName *)&local_28,pDVar3);
      }
      else {
LAB_10930c0a:
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
            pcVar13 = "protected: ";
            goto LAB_10930c85;
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
            pcVar13 = "public: ";
            goto LAB_10930c85;
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
  if ((uVar2 != 0) && ((DAT_109a1494 & 0x1000) == 0)) {
    pDVar3 = (DName *)operator+((char *)local_70,(DName *)"[thunk]:");
    DName::operator=((DName *)&local_28,pDVar3);
  }
  if ((uVar1 & 0x10000) != 0) {
    pDVar3 = (DName *)operator+((char *)local_70,(DName *)"extern \"C\" ");
    DName::operator=((DName *)&local_28,pDVar3);
  }
LAB_10930d19:
  DName::DName(param_1,(DName *)&local_28);
  return param_1;
}


// ==== 10930d2d UnDecorator::getDecoratedName

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
  
  if ((DAT_109a1494 & 0x2000) == 0) {
    if (*DAT_109a1484 != '?') {
      if (*DAT_109a1484 == '\0') {
        DVar7 = 2;
        goto LAB_10930f2f;
      }
LAB_10930edd:
      DVar7 = 1;
LAB_10930f2f:
      DName::DName(in_stack_00000004,DVar7);
      return in_stack_00000004;
    }
    pcVar2 = DAT_109a1484 + 1;
    if ((*pcVar2 != '?') || (DAT_109a1484[2] != '?')) {
      DAT_109a1484 = pcVar2;
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
        if ((*DAT_109a1484 != '\0') && (*DAT_109a1484 != '@')) {
          getScope();
          iVar3 = DName::isEmpty((DName *)&local_14);
          if (iVar3 == 0) {
            if (DAT_109a149c == '\0') {
              pDVar4 = local_24;
              pDVar5 = local_1c;
            }
            else {
              DAT_109a149c = '\0';
              pDVar4 = (DName *)DName::operator+(local_c,local_1c);
              DName::operator=(local_c,pDVar4);
              if (*DAT_109a1484 == '@') goto LAB_10930e92;
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
LAB_10930e92:
        if ((bVar1) && (iVar3 = DName::isEmpty(local_c), iVar3 == 0)) {
          local_8 = local_8 | 0x20;
        }
        if ((uVar6 & 1) != 0) {
          local_8 = local_8 | 0x800;
        }
        iVar3 = DName::isEmpty(local_c);
        if ((iVar3 == 0) && ((local_8 & 0x100) == 0)) {
          if (*DAT_109a1484 != '\0') {
            if (*DAT_109a1484 != '@') goto LAB_10930edd;
            DAT_109a1484 = DAT_109a1484 + 1;
          }
          if ((((DAT_109a1494 & 0x1000) == 0) || (bVar1)) || ((local_8 & extraout_EDX) != 0)) {
            composeDeclaration(in_stack_00000004);
            return in_stack_00000004;
          }
          local_14 = 0;
          local_10 = local_10 & 0xfffff000;
          composeDeclaration(local_24);
        }
      }
      pDVar4 = local_c;
      goto LAB_10930d62;
    }
    DAT_109a1484 = pcVar2;
    getDecoratedName();
    for (; *DAT_109a1484 != '\0'; DAT_109a1484 = DAT_109a1484 + 1) {
    }
  }
  else {
    DAT_109a1494 = DAT_109a1494 & 0xffffdfff;
    getDataType((DName *)&local_14);
    DAT_109a1494 = DAT_109a1494 | 0x2000;
  }
  pDVar4 = (DName *)&local_14;
LAB_10930d62:
  DName::DName(in_stack_00000004,pDVar4);
  return in_stack_00000004;
}


// ==== 10930f3e UnDecorator::getScope

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
      if ((*DAT_109a1484 == '\0') || (*DAT_109a1484 == '@')) break;
      if ((DAT_109a149c != '\0') && (DAT_109a149d == '\0')) {
        return in_stack_00000004;
      }
      iVar3 = DName::isEmpty(in_stack_00000004);
      if (iVar3 == 0) {
        pDVar4 = (DName *)operator+(local_94,(DName *)&DAT_10960bec);
        DName::operator=(in_stack_00000004,pDVar4);
        if (bVar1) {
          pDVar4 = (DName *)operator+((char)local_7c,(DName *)0x5b);
          DName::operator=(in_stack_00000004,pDVar4);
          bVar1 = false;
        }
      }
      if (*DAT_109a1484 == '?') {
        pcVar6 = DAT_109a1484 + 1;
        cVar7 = *pcVar6;
        if (cVar7 == '$') {
          pDVar4 = local_6c;
          uVar2 = SUB41(local_14,0);
          goto LAB_10931135;
        }
        if (cVar7 != '%') {
          if (cVar7 != '?') {
            if (cVar7 == 'A') goto LAB_109310dd;
            if (cVar7 != 'I') {
              pDVar4 = local_8c;
              DAT_109a1484 = pcVar6;
              pDVar5 = (DName *)getLexicalFrame();
              goto LAB_1093113f;
            }
            pDVar4 = local_84;
            cVar7 = (char)local_44;
            DAT_109a1484 = DAT_109a1484 + 2;
            pDVar5 = (DName *)getZName(SUB41(local_74,0));
            pDVar5 = (DName *)DName::operator+(pDVar5,cVar7);
            pDVar4 = (DName *)DName::operator+(pDVar5,pDVar4);
            DName::operator=(in_stack_00000004,pDVar4);
            bVar1 = true;
            goto LAB_1093114e;
          }
          if ((DAT_109a1484[2] == '_') && (DAT_109a1484[3] == '?')) {
            pDVar4 = local_54;
            DAT_109a1484 = DAT_109a1484 + 2;
            pDVar5 = (DName *)getOperatorName(SUB41(local_2c,0),(bool *)0x0);
            pDVar4 = (DName *)DName::operator+(pDVar5,pDVar4);
            DName::operator=(in_stack_00000004,pDVar4);
            if (*DAT_109a1484 == '@') {
              DAT_109a1484 = DAT_109a1484 + 1;
            }
            goto LAB_1093114e;
          }
          pDVar4 = local_64;
          cVar7 = (char)local_34;
          DAT_109a1484 = pcVar6;
          getDecoratedName();
          pDVar5 = (DName *)operator+((char)local_4c,(DName *)0x60);
          pDVar5 = (DName *)DName::operator+(pDVar5,cVar7);
          goto LAB_1093113f;
        }
LAB_109310dd:
        DAT_109a1484 = pcVar6;
        DName::DName(local_c,&DAT_109a1484,'@');
        pDVar4 = (DName *)operator+(local_5c,(DName *)"`anonymous namespace\'");
        DName::operator=(in_stack_00000004,pDVar4);
        if (*(int *)DAT_109a147c != 9) {
          Replicator::operator+=(DAT_109a147c,local_c);
        }
      }
      else {
        pDVar4 = local_24;
        uVar2 = SUB41(local_1c,0);
LAB_10931135:
        pDVar5 = (DName *)getZName((bool)uVar2);
LAB_1093113f:
        pDVar4 = (DName *)DName::operator+(pDVar5,pDVar4);
        DName::operator=(in_stack_00000004,pDVar4);
      }
LAB_1093114e:
    } while (((byte)in_stack_00000004[4] & 0xf) == 0);
  }
  if (*DAT_109a1484 == '\0') {
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
  else if (*DAT_109a1484 != '@') {
    *(undefined4 *)in_stack_00000004 = 0;
    if (((byte)*(uint *)(in_stack_00000004 + 4) & 0xf) != 3) {
      *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xfffffff1 | 1;
    }
  }
  return in_stack_00000004;
}


// ==== 109311c9 UnDecorator::getFunctionIndirectType

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
  
  cVar8 = *DAT_109a1484;
  if (cVar8 == '\0') {
    operator+((DNameStatus)param_1,(DName *)0x2);
    return param_1;
  }
  if (((cVar8 < '6') || ('9' < cVar8)) && (cVar8 != '_')) {
    DName::DName(param_1,1);
    return param_1;
  }
  uVar5 = (int)cVar8 - 0x36;
  pcVar1 = DAT_109a1484 + 1;
  if (uVar5 == 0x29) {
    cVar8 = *pcVar1;
    if (cVar8 == '\0') {
      DAT_109a1484 = pcVar1;
      operator+((DNameStatus)param_1,(DName *)0x2);
      return param_1;
    }
    uVar5 = (int)cVar8 - 0x3d;
    DAT_109a1484 = DAT_109a1484 + 2;
    if ((int)uVar5 < 4) goto LAB_10931259;
    bVar7 = SBORROW4(uVar5,7);
    iVar4 = cVar8 + -0x44;
    bVar6 = uVar5 == 7;
LAB_10931257:
    if (!bVar6 && bVar7 == iVar4 < 0) goto LAB_10931259;
  }
  else {
    DAT_109a1484 = pcVar1;
    if (-1 < (int)uVar5) {
      bVar7 = SBORROW4(uVar5,3);
      iVar4 = cVar8 + -0x39;
      bVar6 = uVar5 == 3;
      goto LAB_10931257;
    }
LAB_10931259:
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
    pDVar2 = (DName *)operator+((char *)local_24,(DName *)&DAT_10960bec);
    DName::operator=(local_c,pDVar2);
    if (*DAT_109a1484 == '\0') {
      pDVar2 = (DName *)operator+((DNameStatus)local_34,(DName *)0x2);
    }
    else {
      pDVar2 = local_24;
      getScope();
      pDVar3 = (DName *)operator+((char)local_34,(DName *)0x20);
      pDVar2 = (DName *)DName::operator+(pDVar3,pDVar2);
    }
    DName::operator=(local_c,pDVar2);
    if (*DAT_109a1484 == '\0') {
      operator+((DNameStatus)param_1,(DName *)0x2);
      return param_1;
    }
    if (*DAT_109a1484 != '@') {
      DVar9 = 1;
      goto LAB_109314fa;
    }
    DAT_109a1484 = DAT_109a1484 + 1;
    if (((byte)DAT_109a1494 & 0x60) == 0x60) {
      pDVar2 = (DName *)getThisType();
      DName::operator|=((DName *)&local_14,pDVar2);
    }
    else {
      pDVar2 = (DName *)getThisType();
      DName::operator=((DName *)&local_14,pDVar2);
    }
  }
  if ((uVar5 & 4) != 0) {
    if ((~(DAT_109a1494 >> 1) & 1) == 0) {
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
  if ((~(DAT_109a1494 >> 1) & 1) == 0) {
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
  pDVar2 = HeapManager::getMemory((HeapManager *)&DAT_109a1464,8,0);
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
  if ((((byte)DAT_109a1494 & 0x60) != 0x60) && ((uVar5 & 2) != 0)) {
    DName::operator+=(local_c,(DName *)&local_14);
  }
  if ((~(DAT_109a1494 >> 8) & 1) == 0) {
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
LAB_109314fa:
  DName::DName(param_1,DVar9);
  return param_1;
}


// ==== 1093150a UnDecorator::getDataIndirectType

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
  if (*DAT_109a1484 == '\0') {
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
        if (iVar2 != 0) goto LAB_109319dc;
      }
      operator+((DNameStatus)param_1,(DName *)0x2);
      return param_1;
    }
LAB_109319dc:
    DVar8 = 2;
LAB_109319de:
    DName::DName(param_1,DVar8);
    return param_1;
  }
  if (*DAT_109a1484 == '$') {
    getExtendedDataIndirectType((char *)&local_20,(bool *)&param_3,(int)&local_5);
    iVar2 = DName::isEmpty((DName *)&local_20);
    pDVar3 = extraout_ECX;
    if (iVar2 == 0) goto LAB_1093155c;
  }
  local_14 = local_14 & 0xfffff000;
  local_18 = 0;
  uVar6 = (int)*DAT_109a1484 - (((*DAT_109a1484 < 'A') - 1 & 0x2b) + 0x16);
  local_1c = local_1c & 0xfffff000;
  local_20 = 0;
LAB_10931593:
  if (uVar6 == 4) {
    if (((~(DAT_109a1494 >> 1) & 1) != 0) && ((~(DAT_109a1494 >> 0x11) & 1) != 0)) {
      iVar2 = DName::isEmpty((DName *)&local_18);
      TVar7 = 7;
      if (iVar2 == 0) {
        UScore(7);
        pcVar5 = local_50;
        cVar1 = (char)local_58;
LAB_109315dd:
        pDVar3 = (DName *)DName::operator+((DName *)&local_18,cVar1);
        pDVar4 = (DName *)DName::operator+(pDVar3,pcVar5);
        pDVar3 = (DName *)&local_18;
        goto LAB_109315f1;
      }
LAB_10931684:
      pcVar5 = UScore(TVar7);
      pDVar3 = (DName *)&local_18;
LAB_1093168c:
      DName::operator=(pDVar3,pcVar5);
    }
  }
  else if (uVar6 == 5) {
    if ((~(DAT_109a1494 >> 1) & 1) != 0) {
      iVar2 = DName::isEmpty((DName *)&local_20);
      if (iVar2 != 0) {
        pcVar5 = UScore(9);
        pDVar3 = (DName *)&local_20;
        goto LAB_1093168c;
      }
      UScore(9);
      pcVar5 = local_40;
      pDVar3 = (DName *)DName::operator+(this,(char)local_48);
      pDVar4 = (DName *)DName::operator+(pDVar3,pcVar5);
      pDVar3 = (DName *)&local_20;
LAB_109315f1:
      DName::operator=(pDVar3,pDVar4);
    }
  }
  else {
    if (uVar6 != 8) {
      DAT_109a1484 = DAT_109a1484 + 1;
      if (0x1f < uVar6) {
LAB_1093178a:
        DVar8 = 1;
        goto LAB_109319de;
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
        if (in_stack_00000014 != 0) goto LAB_1093178a;
        if ((char)param_3 == '\0') {
          if (*DAT_109a1484 != '\0') {
            pDVar3 = (DName *)getScope();
            DName::operator|=(local_10,pDVar3);
            goto LAB_1093180d;
          }
        }
        else {
          pDVar3 = (DName *)operator+((char *)local_58,(DName *)&DAT_10960bec);
          DName::operator=(local_10,pDVar3);
          pDVar3 = local_58;
          if (*DAT_109a1484 == '\0') {
            pDVar3 = (DName *)operator+((DNameStatus)pDVar3,(DName *)0x2);
          }
          else {
            pDVar4 = (DName *)getScope();
            pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
          }
          DName::operator=(local_10,pDVar3);
LAB_1093180d:
          cVar1 = *DAT_109a1484;
          if (cVar1 != '\0') {
            DAT_109a1484 = DAT_109a1484 + 1;
            if (cVar1 != '@') goto LAB_1093178a;
            goto LAB_10931832;
          }
        }
        DName::operator+=(local_10,2);
      }
LAB_10931832:
      if ((~(DAT_109a1494 >> 1) & 1) == 0) {
        if (((byte)uVar6 & 0xc) == 0xc) {
          pDVar3 = (DName *)getBasedType();
          DName::operator|=(local_10,pDVar3);
        }
      }
      else if (((byte)uVar6 & 0xc) == 0xc) {
        if (in_stack_00000014 != 0) goto LAB_1093178a;
        pDVar3 = local_58;
        pDVar4 = (DName *)getBasedType();
        pDVar3 = (DName *)DName::operator+(pDVar4,pDVar3);
        DName::operator=(local_10,pDVar3);
      }
      if ((uVar6 & 2) != 0) {
        pDVar3 = (DName *)operator+((char *)local_58,(DName *)"volatile ");
        DName::operator=(local_10,pDVar3);
      }
      if ((uVar6 & 1) != 0) {
        pDVar3 = (DName *)operator+((char *)local_58,(DName *)"const ");
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
LAB_1093194d:
            DName::operator+=(local_10,pDVar3);
          }
          else {
            if (-1 < (char)uVar6) goto LAB_10931940;
            DName::operator=(local_10,pDVar3);
          }
        }
        else {
          iVar2 = DName::isEmpty((DName *)param_4);
          if (iVar2 == 0) {
LAB_10931940:
            pDVar3 = (DName *)operator+((char)local_58,(DName *)0x20);
            goto LAB_1093194d;
          }
        }
      }
      uVar6 = local_c | 0x10;
      if (local_5 != '\0') {
        uVar6 = local_c | 0x210;
      }
LAB_10931967:
      local_c = uVar6;
      pDVar3 = local_10;
LAB_1093155c:
      DName::DName(param_1,pDVar3);
      return param_1;
    }
    if ((~(DAT_109a1494 >> 1) & 1) != 0) {
      iVar2 = DName::isEmpty((DName *)&local_18);
      TVar7 = 8;
      if (iVar2 != 0) goto LAB_10931684;
      UScore(8);
      pcVar5 = local_30;
      cVar1 = (char)local_38;
      goto LAB_109315dd;
    }
  }
  DAT_109a1484 = DAT_109a1484 + 1;
  if (*DAT_109a1484 == '$') {
    getExtendedDataIndirectType((char *)local_10,(bool *)&param_3,(int)&local_5);
    iVar2 = DName::isEmpty(local_10);
    uVar6 = local_c;
    if (iVar2 == 0) goto LAB_10931967;
  }
  uVar6 = (int)*DAT_109a1484 - (((*DAT_109a1484 < 'A') - 1 & 0x2b) + 0x16);
  goto LAB_10931593;
}


// ==== 109319ee UnDecorator::operator_char*

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
  if (DAT_109a1488 == (char *)0x0) goto LAB_10931a84;
  if (*DAT_109a1488 == '?') {
    if (DAT_109a1488[1] != '@') {
      if (DAT_109a1488[1] == '$') {
        pDVar2 = (DName *)getTemplateName(SUB41(local_24,0));
        DName::operator=((DName *)&local_c,pDVar2);
        if (((byte)local_8 & 0xf) != 1) goto LAB_10931a84;
        local_8 = local_8 & 0xfffffff0;
        DAT_109a1484 = DAT_109a1488;
      }
      goto LAB_10931a71;
    }
    DAT_109a1484 = DAT_109a1484 + 2;
    getDecoratedName();
    pDVar2 = (DName *)operator+(local_24,(DName *)&DAT_10960d60);
  }
  else {
LAB_10931a71:
    pDVar2 = (DName *)getDecoratedName();
  }
  DName::operator=((DName *)&local_c,pDVar2);
LAB_10931a84:
  iVar3 = (int)(local_8 << 0x1c) >> 0x1c;
  if (iVar3 == 3) {
    return (char *)0x0;
  }
  if ((iVar3 == 1) || ((((ushort)DAT_109a1494 & 0x1000) == 0 && (*DAT_109a1484 != '\0')))) {
    DName::operator=((DName *)&local_14,DAT_109a1488);
  }
  else {
    DName::operator=((DName *)&local_14,(DName *)&local_c);
  }
  if (DAT_109a148c == (char *)0x0) {
    iVar3 = DName::length((DName *)&local_14);
    DAT_109a1490 = iVar3 + 1;
    DAT_109a148c = (char *)(*DAT_109a1464)(iVar3 + 8U & 0xfffffff8);
    if (DAT_109a148c == (char *)0x0) {
      return (char *)0x0;
    }
  }
  DName::getString((DName *)&local_14,DAT_109a148c,DAT_109a1490);
  pcVar4 = DAT_109a148c;
  pcVar5 = DAT_109a148c;
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
  return DAT_109a148c;
}


// ==== 10931b3a UnDecorator::getPtrRefType

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
  
  cVar1 = *DAT_109a1484;
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


// ==== 10931ca1 ___unDName

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
  
  local_8 = &DAT_10968de0;
  uStack_c = 0x10931cb0;
  if ((param_4 != 0) && (iVar1 = __mtinitlocknum(5), iVar1 != 0)) {
    __lock(5);
    local_8 = (undefined *)0x0;
    DAT_109a1464 = param_4;
    _DAT_109a1468 = param_5;
    _DAT_109a1474 = 0;
    _DAT_109a146c = 0;
    _DAT_109a1470 = 0;
    UnDecorator::UnDecorator
              (local_98,param_1,param_2,param_3,(_func_char_ptr_long *)0x0,(uint)param_6);
    local_20 = UnDecorator::operator_char_(local_98);
    HeapManager::Destructor((HeapManager *)&DAT_109a1464);
    local_8 = (undefined *)0xfffffffe;
    FUN_10931d3b();
    return local_20;
  }
  return (char *)0x0;
}


// ==== 10931d3b FUN_10931d3b

void FUN_10931d3b(void)

{
  FUN_10929478(5);
  return;
}


// ==== 10931de7 FUN_10931de7

DName * __cdecl FUN_10931de7(DName *param_1,DName *param_2)

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
  
  pbVar2 = DAT_109a1484;
  bVar1 = *DAT_109a1484;
  if (bVar1 == 0) {
    operator+((DNameStatus)param_1,(DName *)0x2);
    return param_1;
  }
  DAT_109a1484 = DAT_109a1484 + 1;
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
        pcVar7 = "char";
        break;
      case 0x46:
      case 0x47:
        pcVar7 = "short";
        break;
      case 0x48:
      case 0x49:
        pcVar7 = "int";
        break;
      case 0x4a:
      case 0x4b:
        pcVar7 = "long";
        break;
      default:
        goto switchD_10931e37_caseD_4c;
      case 0x4d:
        pcVar7 = "float";
      }
      goto LAB_10931ffb;
    }
LAB_10932021:
    DName::operator+=((DName *)&local_10,"double");
LAB_1093202e:
    if (uVar5 != 0xffffffff) {
LAB_10931f9f:
      local_10 = 0;
      local_c = local_c & 0xfffff000;
      DName::DName(local_18,param_2);
      if (uVar5 != 0xfffffffe) {
        iVar4 = DName::isEmpty(param_2);
        if (iVar4 != 0) {
          if ((uVar5 & 1) == 0) {
            if ((uVar5 & 2) != 0) {
              DName::operator=((DName *)&local_10,"volatile");
            }
          }
          else {
            DName::operator=((DName *)&local_10,"const");
            if ((uVar5 & 2) != 0) {
              DName::operator+=((DName *)&local_10," volatile");
            }
          }
        }
        UnDecorator::getPtrRefType(param_1,(DName *)&local_10,(char)local_18);
        return param_1;
      }
      local_14 = local_14 | 0x80;
      UnDecorator::getPtrRefType(local_20,(DName *)&local_10,(char)local_18);
      if ((local_1c & 0x80) == 0) {
        DName::operator+=(local_20,"[]");
      }
      pDVar3 = local_20;
      goto LAB_10931f80;
    }
LAB_10932037:
    if (uVar6 == 0x43) {
      pcVar7 = "signed ";
      pDVar3 = local_18;
LAB_10932097:
      pDVar3 = (DName *)operator+((char *)pDVar3,(DName *)pcVar7);
      DName::operator=((DName *)&local_10,pDVar3);
    }
    else {
      if ((((uVar6 == 0x45) || (uVar6 == 0x47)) || (uVar6 == 0x49)) || (uVar6 == 0x4b)) {
        pcVar7 = "unsigned ";
        pDVar3 = local_20;
        goto LAB_10932097;
      }
      if ((uVar6 == 0x5f) &&
         (((local_5 == 0x45 || (local_5 == 0x47)) ||
          ((local_5 == 0x49 || ((local_5 == 0x4b || (local_5 == 0x4d)))))))) {
        pcVar7 = "unsigned ";
        pDVar3 = local_28;
        goto LAB_10932097;
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
      DName::operator=((DName *)&local_10,"long ");
      goto LAB_10932021;
    }
    if (0x4f < uVar6) {
      if (uVar6 < 0x54) {
        uVar5 = uVar6 & 3;
        goto LAB_1093202e;
      }
      if (uVar6 == 0x58) {
        pcVar7 = "void";
        goto LAB_10931ffb;
      }
      if (uVar6 != 0x5f) goto switchD_10931e37_caseD_4c;
      local_5 = *DAT_109a1484;
      DAT_109a1484 = pbVar2 + 2;
      uVar5 = (uint)local_5;
      if (uVar5 < 0x4e) {
        if (uVar5 < 0x4c) {
          if (uVar5 < 0x48) {
            if (uVar5 < 0x46) {
              if (uVar5 == 0x24) {
                FUN_10931de7(local_20,param_2);
                operator+((char *)param_1,(DName *)"__w64 ");
                return param_1;
              }
              if (1 < uVar5 - 0x44) goto LAB_10931f8e;
              pcVar7 = "__int8";
            }
            else {
              pcVar7 = "__int16";
            }
          }
          else if (uVar5 < 0x48) {
LAB_10931f8e:
            pcVar7 = "UNKNOWN";
          }
          else if (uVar5 < 0x4a) {
            pcVar7 = "__int32";
          }
          else {
            if (0x4b < uVar5) goto LAB_10931f8e;
            pcVar7 = "__int64";
          }
        }
        else {
          pcVar7 = "__int128";
        }
LAB_10931ffb:
        DName::operator=((DName *)&local_10,pcVar7);
        goto LAB_10932037;
      }
      if (uVar5 == 0x4e) {
        pcVar7 = "bool";
        goto LAB_10931ffb;
      }
      if (uVar5 != 0x4f) {
        if (uVar5 != 0x57) {
          if (1 < uVar5 - 0x58) goto LAB_10931f8e;
          goto LAB_10931f57;
        }
        pcVar7 = "wchar_t";
        goto LAB_10931ffb;
      }
      uVar5 = 0xfffffffe;
      goto LAB_10931f9f;
    }
switchD_10931e37_caseD_4c:
LAB_10931f57:
    DAT_109a1484 = DAT_109a1484 + -1;
    pDVar3 = (DName *)UnDecorator::getECSUDataType();
    DName::operator=((DName *)&local_10,pDVar3);
    iVar4 = DName::isEmpty((DName *)&local_10);
    if (iVar4 == 0) goto LAB_10932037;
  }
  pDVar3 = (DName *)&local_10;
LAB_10931f80:
  DName::DName(param_1,pDVar3);
  return param_1;
}


// ==== 1093216e UnDecorator::getPrimaryDataType

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
  
  cVar1 = *DAT_109a1484;
  local_8 = local_8 & 0xfffff000;
  local_c = 0;
  pcVar4 = DAT_109a1484;
  if (cVar1 != '\0') {
    if (cVar1 != '$') {
      if (cVar1 != 'A') {
        if (cVar1 != 'B') {
          FUN_10931de7(param_1,in_stack_00000008);
          return param_1;
        }
        DName::operator=((DName *)&local_c,"volatile");
        iVar2 = DName::isEmpty(in_stack_00000008);
        if (iVar2 == 0) {
          DName::operator+=((DName *)&local_c,' ');
        }
      }
      DName::DName((DName *)&local_14,in_stack_00000008);
      DAT_109a1484 = DAT_109a1484 + 1;
      local_10 = local_10 | 0x10;
      getPtrRefType(param_1,(DName *)&local_c,(char)&local_14);
      return param_1;
    }
    if (DAT_109a1484[1] == '$') {
      pcVar4 = DAT_109a1484 + 2;
      cVar1 = *pcVar4;
      if (cVar1 != '\0') {
        if (cVar1 == 'A') {
          DAT_109a1484 = DAT_109a1484 + 3;
          getFunctionIndirectType(param_1);
          return param_1;
        }
        if (cVar1 == 'B') {
          DAT_109a1484 = DAT_109a1484 + 3;
          getPtrRefDataType(param_1,(int)in_stack_00000008);
          return param_1;
        }
        if (cVar1 == 'C') {
          local_10 = local_10 & 0xfffff000;
          DAT_109a1484 = DAT_109a1484 + 3;
          local_14 = 0;
          pDVar3 = (DName *)getDataIndirectType(local_1c,(char)in_stack_00000008,(DName *)0x0,
                                                (int)&local_14);
          FUN_10931de7(param_1,pDVar3);
          return param_1;
        }
        goto LAB_10932213;
      }
    }
    else if (DAT_109a1484[1] != '\0') {
LAB_10932213:
      DAT_109a1484 = pcVar4;
      DName::DName(param_1,1);
      return param_1;
    }
  }
  DAT_109a1484 = pcVar4;
  operator+((DNameStatus)param_1,(DName *)0x2);
  return param_1;
}


// ==== 109322ac UnDecorator::getDataType

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
  cVar1 = *DAT_109a1484;
  if (cVar1 == '\0') {
    operator+((DNameStatus)param_1,(DName *)0x2);
  }
  else {
    if (cVar1 == '?') {
      DAT_109a1484 = DAT_109a1484 + 1;
      local_10 = local_10 & 0xfffff000;
      local_14 = 0;
      pDVar3 = (DName *)getDataIndirectType(local_1c,(char)local_c,(DName *)0x0,(int)&local_14);
      DName::operator=(local_c,pDVar3);
    }
    else if (cVar1 == 'X') {
      DAT_109a1484 = DAT_109a1484 + 1;
      iVar2 = DName::isEmpty(local_c);
      if (iVar2 == 0) {
        operator+((char *)param_1,(DName *)"void ");
        return param_1;
      }
      DName::DName(param_1,"void");
      return param_1;
    }
    getPrimaryDataType(param_1);
  }
  return param_1;
}


// ==== 1093235d UnDecorator::getExternalDataType

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
  
  pDVar1 = HeapManager::getMemory((HeapManager *)&DAT_109a1464,8,0);
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


// ==== 109323c1 FUN_109323c1

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

undefined4 FUN_109323c1(void)

{
  return 1;
}


// ==== 10932411 __get_sse2_info

/* WARNING: Removing unreachable block (ram,0x1093244c) */
/* WARNING: Removing unreachable block (ram,0x10932439) */
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
  if (((local_8 & 0x4000000) == 0) || (iVar2 = FUN_109323c1(), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


// ==== 1093247e __initp_misc_winsig

/* Library Function - Single Match
    __initp_misc_winsig
   
   Library: Visual Studio 2005 Release */

void __cdecl __initp_misc_winsig(undefined4 param_1)

{
  DAT_109a14a0 = param_1;
  DAT_109a14a4 = param_1;
  DAT_109a14a8 = param_1;
  DAT_109a14ac = param_1;
  return;
}


// ==== 10932532 siglookup

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
  } while (uVar1 < DAT_1096dc5c * 0xc + param_1);
  if ((DAT_1096dc5c * 0xc + param_1 <= uVar1) || (*(int *)(uVar1 + 4) != in_EDX)) {
    uVar1 = 0;
  }
  return uVar1;
}


// ==== 10932566 ___get_sigabrt

/* Library Function - Single Match
    ___get_sigabrt
   
   Library: Visual Studio 2005 Release */

_PHNDLR __cdecl ___get_sigabrt(void)

{
  _PHNDLR p_Var1;
  
  p_Var1 = (_PHNDLR)FUN_10924649(DAT_109a14a8);
  return p_Var1;
}


// ==== 109327c2 _raise

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2005 Release */

int __cdecl _raise(int _SigNum)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  DWORD *pDVar6;
  DWORD local_34;
  DWORD local_30;
  int local_28;
  int local_20;
  
  pDVar6 = (DWORD *)0x0;
  local_20 = 0;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        puVar5 = &DAT_109a14a0;
        iVar3 = DAT_109a14a0;
        goto LAB_10932877;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_10932855;
        if (_SigNum != 8) goto LAB_10932839;
      }
    }
    pDVar6 = FUN_10924822();
    if (pDVar6 == (DWORD *)0x0) {
      return -1;
    }
    uVar1 = siglookup(pDVar6[0x17]);
    puVar5 = (undefined4 *)(uVar1 + 8);
    pcVar2 = (code *)*puVar5;
  }
  else {
    if (_SigNum == 0xf) {
      puVar5 = &DAT_109a14ac;
      iVar3 = DAT_109a14ac;
    }
    else if (_SigNum == 0x15) {
      puVar5 = &DAT_109a14a4;
      iVar3 = DAT_109a14a4;
    }
    else {
      if (_SigNum != 0x16) {
LAB_10932839:
        pDVar6 = FUN_1092681e();
        *pDVar6 = 0x16;
        FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return -1;
      }
LAB_10932855:
      puVar5 = &DAT_109a14a8;
      iVar3 = DAT_109a14a8;
    }
LAB_10932877:
    local_20 = 1;
    pcVar2 = (code *)FUN_10924649(iVar3);
  }
  iVar3 = 0;
  if (pcVar2 == (code *)0x1) {
    return 0;
  }
  if (pcVar2 == (code *)0x0) {
    iVar3 = __exit(3);
  }
  if (local_20 != iVar3) {
    __lock(iVar3);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = pDVar6[0x18];
    pDVar6[0x18] = 0;
    if (_SigNum == 8) {
      local_34 = pDVar6[0x19];
      pDVar6[0x19] = 0x8c;
      goto LAB_109328db;
    }
  }
  else {
LAB_109328db:
    if (_SigNum == 8) {
      for (local_28 = DAT_1096dc50; local_28 < DAT_1096dc54 + DAT_1096dc50; local_28 = local_28 + 1)
      {
        *(undefined4 *)(local_28 * 0xc + 8 + pDVar6[0x17]) = 0;
      }
      goto LAB_10932915;
    }
  }
  uVar4 = __encoded_null();
  *puVar5 = uVar4;
LAB_10932915:
  FUN_10932936();
  if (_SigNum == 8) {
    (*pcVar2)(8,pDVar6[0x19]);
  }
  else {
    (*pcVar2)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  pDVar6[0x18] = local_30;
  if (_SigNum == 8) {
    pDVar6[0x19] = local_34;
  }
  return 0;
}


// ==== 10932936 FUN_10932936

void FUN_10932936(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_10929478(0);
  }
  return;
}


// ==== 10932972 FUN_10932972

undefined4 __cdecl FUN_10932972(undefined4 param_1,undefined4 param_2,uint param_3)

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
  if (DAT_109a14b4 == 0) {
    hModule = LoadLibraryA("USER32.DLL");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar1 = GetProcAddress(hModule,"MessageBoxA");
    if (pFVar1 == (FARPROC)0x0) {
      return 0;
    }
    DAT_109a14b4 = FUN_109245d2((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetActiveWindow");
    DAT_109a14b8 = FUN_109245d2((int)pFVar1);
    pFVar1 = GetProcAddress(hModule,"GetLastActivePopup");
    DAT_109a14bc = FUN_109245d2((int)pFVar1);
    iVar2 = __get_osplatform(&local_10);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (local_10 == 2) {
      pFVar1 = GetProcAddress(hModule,"GetUserObjectInformationA");
      DAT_109a14c4 = FUN_109245d2((int)pFVar1);
      if (DAT_109a14c4 != 0) {
        pFVar1 = GetProcAddress(hModule,"GetProcessWindowStation");
        DAT_109a14c0 = FUN_109245d2((int)pFVar1);
      }
    }
  }
  if ((DAT_109a14c0 != local_c) && (DAT_109a14c4 != local_c)) {
    pcVar3 = (code *)FUN_10924649(DAT_109a14c0);
    pcVar4 = (code *)FUN_10924649(DAT_109a14c4);
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
      goto LAB_10932b08;
    }
  }
  if ((((DAT_109a14b8 != local_c) &&
       (pcVar3 = (code *)FUN_10924649(DAT_109a14b8), pcVar3 != (code *)0x0)) &&
      (local_8 = (*pcVar3)(), local_8 != 0)) &&
     ((DAT_109a14bc != local_c &&
      (pcVar3 = (code *)FUN_10924649(DAT_109a14bc), pcVar3 != (code *)0x0)))) {
    local_8 = (*pcVar3)(local_8);
  }
LAB_10932b08:
  pcVar3 = (code *)FUN_10924649(DAT_109a14b4);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar5 = (*pcVar3)(local_8,param_1,param_2,param_3);
  return uVar5;
}


// ==== 10932b2f _strcat_s

/* Library Function - Single Match
    _strcat_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src)

{
  char cVar1;
  DWORD *pDVar2;
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
        pDVar2 = FUN_1092681e();
        eVar4 = 0x22;
        *pDVar2 = 0x22;
        goto LAB_10932b4e;
      }
    }
    *_Dst = '\0';
  }
  pDVar2 = FUN_1092681e();
  eVar4 = 0x16;
  *pDVar2 = 0x16;
LAB_10932b4e:
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar4;
}


// ==== 10932ba0 _strncpy_s

/* Library Function - Single Match
    _strncpy_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount)

{
  char cVar1;
  DWORD *pDVar2;
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
LAB_10932bc4:
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
          pDVar2 = FUN_1092681e();
          eVar5 = 0x22;
          *pDVar2 = 0x22;
          goto LAB_10932bd5;
        }
        *_Dst = '\0';
      }
    }
  }
  else if (_Dst != (char *)0x0) goto LAB_10932bc4;
  pDVar2 = FUN_1092681e();
  eVar5 = 0x16;
  *pDVar2 = 0x16;
LAB_10932bd5:
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar5;
}


// ==== 10932c53 __set_error_mode

/* Library Function - Single Match
    __set_error_mode
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_error_mode(int _Mode)

{
  int iVar1;
  DWORD *pDVar2;
  
  if (-1 < _Mode) {
    if (_Mode < 3) {
      iVar1 = DAT_109a0af0;
      DAT_109a0af0 = _Mode;
      return iVar1;
    }
    if (_Mode == 3) {
      return DAT_109a0af0;
    }
  }
  pDVar2 = FUN_1092681e();
  *pDVar2 = 0x16;
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}


// ==== 10932ca9 __isalpha_l

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


// ==== 10932d28 __isupper_l

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


// ==== 10932da0 __islower_l

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


// ==== 10932e18 __isdigit_l

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


// ==== 10932e67 _isdigit

/* Library Function - Single Match
    _isdigit
   
   Library: Visual Studio 2005 Release */

int __cdecl _isdigit(int _C)

{
  int iVar1;
  
  if (DAT_109a1424 == 0) {
    return (byte)PTR_DAT_1096def8[_C * 2] & 4;
  }
  iVar1 = __isdigit_l(_C,(_locale_t)0x0);
  return iVar1;
}


// ==== 10932e90 __isxdigit_l

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


// ==== 10932f0f __isspace_l

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


// ==== 10932f87 __ispunct_l

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


// ==== 10932fff __isalnum_l

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


// ==== 1093307e __isprint_l

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


// ==== 109330fd __isgraph_l

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


// ==== 1093317c __iscntrl_l

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


// ==== 1093328f __freea

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


// ==== 109332aa __crtGetLocaleInfoW_stat

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
  
  uVar1 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  if (DAT_109a14c8 == 0) {
    iVar2 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_109a14c8 = 2;
      }
      goto LAB_109332fc;
    }
    DAT_109a14c8 = 1;
  }
  else {
LAB_109332fc:
    if (DAT_109a14c8 != 1) {
      if ((DAT_109a14c8 == 2) || (DAT_109a14c8 == 0)) {
        if (param_6 == 0) {
          param_6 = param_1->locinfo->lc_codepage;
        }
        cchData = GetLocaleInfoA(param_2,param_3,(LPSTR)0x0,0);
        if (cchData != 0) {
          if (((int)cchData < 1) || (0xffffffe0 / cchData == 0)) {
            lpLCData = (LPSTR)0x0;
          }
          else if (cchData + 8 < 0x401) {
            if (&stack0x00000000 == (undefined1 *)0x18) goto LAB_109333d3;
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
      goto LAB_109333d3;
    }
  }
  GetLocaleInfoW(param_2,param_3,param_4,param_5);
LAB_109333d3:
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 109333e5 ___crtGetLocaleInfoW

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


// ==== 10933420 __crtGetLocaleInfoA_stat

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
  
  uVar1 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  if (DAT_109a14cc == 0) {
    iVar2 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_109a14cc = 2;
      }
      goto LAB_10933472;
    }
    DAT_109a14cc = 1;
  }
  else {
LAB_10933472:
    if ((DAT_109a14cc == 2) || (DAT_109a14cc == 0)) {
      GetLocaleInfoA(param_2,param_3,param_4,param_5);
      goto LAB_1093354b;
    }
    if (DAT_109a14cc != 1) goto LAB_1093354b;
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
        if (&stack0x00000000 == (undefined1 *)0x18) goto LAB_1093354b;
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
LAB_1093354b:
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 1093355d ___crtGetLocaleInfoA

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


// ==== 109335a0 _strrchr

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


// ==== 109335d5 __tolower_l

/* Library Function - Single Match
    __tolower_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __tolower_l(int _C,_locale_t _Locale)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  DWORD *pDVar4;
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
LAB_10933634:
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
      pDVar4 = FUN_1092681e();
      *pDVar4 = 0x2a;
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
    if (iVar3 == 0) goto LAB_10933634;
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


// ==== 109336ec _tolower

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2005 Release */

int __cdecl _tolower(int _C)

{
  if (DAT_109a1424 == 0) {
    if (_C - 0x41U < 0x1a) {
      return _C + 0x20;
    }
  }
  else {
    _C = __tolower_l(_C,(_locale_t)0x0);
  }
  return _C;
}


// ==== 10933713 FID_conflict:__atoflt_l

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  int local_2c;
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_1093f9cc((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int *)local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_1093376a:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_109337aa;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_1093379c:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_109337aa;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_1093379c;
    goto LAB_1093376a;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_109337aa:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 109337cc __atoldbl_l

/* Library Function - Single Match
    __atoldbl_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __atoldbl_l(_LDOUBLE *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  int local_2c;
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_1093f9cc((undefined2 *)&local_14,&local_2c,_Str,1,0,0,0,(int *)local_28);
  IVar1 = __ld12told(&local_14,_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_10933824:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10933864;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_10933856:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_10933864;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_10933856;
    goto LAB_10933824;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_10933864:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 10933886 FID_conflict:__atoflt_l

/* Library Function - Multiple Matches With Different Base Names
    __atodbl_l
    __atoflt_l
   
   Library: Visual Studio 2005 Release */

int __cdecl FID_conflict___atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  int iVar2;
  int local_2c;
  _LocaleUpdate local_28 [8];
  int local_20;
  char local_1c;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  _LocaleUpdate::_LocaleUpdate(local_28,_Locale);
  local_18 = FUN_1093f9cc((undefined2 *)&local_14,&local_2c,_Str,0,0,0,0,(int *)local_28);
  IVar1 = FID_conflict___ld12tod(&local_14,(_CRT_DOUBLE *)_Result);
  if ((local_18 & 3) == 0) {
    if (IVar1 == INTRNCVT_OVERFLOW) {
LAB_109338dd:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_1093391d;
    }
    if (IVar1 != INTRNCVT_UNDERFLOW) {
LAB_1093390f:
      if (local_1c != '\0') {
        *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      }
      goto LAB_1093391d;
    }
  }
  else if ((local_18 & 1) == 0) {
    if ((local_18 & 2) == 0) goto LAB_1093390f;
    goto LAB_109338dd;
  }
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
LAB_1093391d:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


// ==== 1093397c __fptostr

/* Library Function - Single Match
    __fptostr
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt)

{
  DWORD *pDVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  char cVar5;
  char *pcVar6;
  errno_t eVar7;
  
  pcVar6 = _PtFlt->mantissa;
  if ((_Buf == (char *)0x0) || (_SizeInBytes == 0)) {
    pDVar1 = FUN_1092681e();
    eVar7 = 0x16;
    *pDVar1 = 0x16;
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
    pDVar1 = FUN_1092681e();
    eVar7 = 0x22;
    *pDVar1 = 0x22;
  }
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return eVar7;
}


// ==== 10933a39 ___dtold

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
      goto LAB_10933aeb;
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
LAB_10933aeb:
  *(ushort *)(param_1 + 2) = uVar4;
  return;
}


// ==== 10933af4 __fltout2

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
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  ___dtold(&local_14,(uint *)&_Dbl);
  iVar1 = FUN_10940152(local_14,uStack_10,uStack_c,0x11,0,&local_30);
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


// ==== 10933b90 __alldvrm

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


// ==== 10933c70 __aullshr

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


// ==== 10933c98 __controlfp_s

/* Library Function - Single Match
    __controlfp_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  uint uVar1;
  DWORD *pDVar2;
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
    pDVar2 = FUN_1092681e();
    eVar3 = 0x16;
    *pDVar2 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return eVar3;
}


// ==== 10933d02 __dospawn

/* Library Function - Single Match
    __dospawn
   
   Library: Visual Studio 2005 Release */

intptr_t __cdecl __dospawn(int _Mode,char *_Name,char *_Cmd,char *_Env)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  DWORD *pDVar6;
  BOOL BVar7;
  DWORD DVar8;
  uint *puVar9;
  int iVar10;
  HANDLE pvVar11;
  uint uVar12;
  _STARTUPINFOA local_6c;
  _PROCESS_INFORMATION local_28;
  HANDLE local_18;
  char *local_14;
  DWORD local_10;
  uint local_c;
  char local_5;
  
  pvVar11 = (HANDLE)0x0;
  local_10 = 0;
  local_5 = '\0';
  if ((_Mode != 0) && (_Mode != 1)) {
    if (_Mode < 2) {
LAB_10933d36:
      pDVar6 = FUN_10926831();
      *pDVar6 = 0;
      pDVar6 = FUN_1092681e();
      *pDVar6 = 0x16;
      FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      return -1;
    }
    if (3 < _Mode) {
      if (_Mode != 4) goto LAB_10933d36;
      local_5 = '\x01';
    }
  }
  local_14 = _Cmd;
  while (*_Cmd != '\0') {
    do {
      pcVar2 = _Cmd;
      _Cmd = pcVar2 + 1;
    } while (*_Cmd != '\0');
    pcVar2 = pcVar2 + 2;
    if (*pcVar2 != '\0') {
      *_Cmd = ' ';
      _Cmd = pcVar2;
    }
  }
  _memset(&local_6c,0,0x44);
  local_6c.cb = 0x44;
  uVar12 = DAT_109a160c;
  uVar3 = DAT_109a160c;
  if (DAT_109a160c != 0) {
    do {
      uVar3 = uVar3 - 1;
      if (*(char *)((&DAT_109a1660)[(int)uVar3 >> 5] + 4 + (uVar3 & 0x1f) * 0x38) != '\0') break;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if ((int)uVar12 < 0) goto LAB_10933efc;
  }
  if (0x3331 < uVar12) {
LAB_10933efc:
    pDVar6 = FUN_1092681e();
    *pDVar6 = 0xc;
    return -1;
  }
  local_6c.cbReserved2 = (short)uVar12 * 5 + 4;
  local_6c.lpReserved2 = __calloc_crt((uint)local_6c.cbReserved2,1);
  if ((uint *)local_6c.lpReserved2 == (uint *)0x0) goto LAB_10933efc;
  *(uint *)local_6c.lpReserved2 = uVar12;
  puVar9 = (uint *)((int)local_6c.lpReserved2 + 4);
  puVar5 = (undefined4 *)((int)local_6c.lpReserved2 + uVar12 + 4);
  local_c = 0;
  if (0 < (int)uVar12) {
    do {
      puVar4 = (undefined4 *)((local_c & 0x1f) * 0x38 + (&DAT_109a1660)[(int)local_c >> 5]);
      bVar1 = *(byte *)(puVar4 + 1);
      if ((bVar1 & 0x10) == 0) {
        *(byte *)puVar9 = bVar1;
        *puVar5 = *puVar4;
      }
      else {
        *(byte *)puVar9 = 0;
        *puVar5 = 0xffffffff;
      }
      local_c = local_c + 1;
      puVar9 = (uint *)((int)puVar9 + 1);
      puVar5 = puVar5 + 1;
    } while ((int)local_c < (int)uVar12);
  }
  if (local_5 != '\0') {
    puVar9 = (uint *)((int)local_6c.lpReserved2 + 4);
    iVar10 = 0;
    puVar5 = (undefined4 *)((int)local_6c.lpReserved2 + uVar12 + 4);
    while( true ) {
      uVar3 = uVar12;
      if (2 < (int)uVar12) {
        uVar3 = 3;
      }
      if ((int)uVar3 <= iVar10) break;
      *(undefined1 *)puVar9 = 0;
      *puVar5 = 0xffffffff;
      iVar10 = iVar10 + 1;
      puVar9 = (uint *)((int)puVar9 + 1);
      puVar5 = puVar5 + 1;
    }
    local_10 = 8;
  }
  pDVar6 = FUN_10926831();
  *pDVar6 = 0;
  BVar7 = CreateProcessA(_Name,local_14,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,1,
                         local_10,_Env,(LPCSTR)0x0,&local_6c,&local_28);
  DVar8 = GetLastError();
  _free(local_6c.lpReserved2);
  if (BVar7 == 0) {
    FUN_10926844(DVar8);
    return -1;
  }
  if (_Mode == 2) {
    __exit(0);
  }
  if (_Mode == 0) {
    WaitForSingleObject(local_28.hProcess,0xffffffff);
    GetExitCodeProcess(local_28.hProcess,(LPDWORD)&local_18);
    pvVar11 = local_18;
  }
  else if (_Mode != 4) goto LAB_10933ef3;
  CloseHandle(local_28.hProcess);
  local_28.hProcess = pvVar11;
LAB_10933ef3:
  CloseHandle(local_28.hThread);
  return (intptr_t)local_28.hProcess;
}


// ==== 10933f0f __invoke_watson_if_oneof

/* Library Function - Single Match
    __invoke_watson_if_oneof
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2019 Release */

errno_t __cdecl
__invoke_watson_if_oneof
          (errno_t _ExpressionError,errno_t _ErrorValue1,errno_t _ErrorValue2,wchar_t *_Expression,
          wchar_t *_Function,wchar_t *_File,uint _Line,uintptr_t _Reserved)

{
  if ((_ExpressionError != 0) &&
     ((_ExpressionError == _ErrorValue1 || (_ExpressionError == _ErrorValue2)))) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson(_Expression,_Function,_File,_Line,_Reserved);
  }
  return _ExpressionError;
}


// ==== 10933f40 __cenvarg

/* Library Function - Single Match
    __cenvarg
   
   Library: Visual Studio 2005 Release */

int __cdecl __cenvarg(char **_Argv,char **_Env,char **_ArgBlk,char **_EnvBlk,char *_Name)

{
  bool bVar1;
  char *pcVar2;
  DWORD *pDVar3;
  errno_t eVar4;
  size_t sVar5;
  size_t sVar6;
  int iVar7;
  char cVar8;
  char *pcVar9;
  char **ppcVar10;
  char *local_44;
  rsize_t local_34;
  char *local_2c;
  char *local_20;
  char *local_18;
  uchar local_14 [12];
  uint local_8;
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  builtin_memcpy(local_14,"SystemRoot",0xb);
  pcVar2 = *_Argv;
  local_18 = (char *)0x0;
  bVar1 = false;
  sVar6 = 2;
  ppcVar10 = _Argv;
  while (pcVar2 != (char *)0x0) {
    sVar5 = _strlen(pcVar2);
    ppcVar10 = ppcVar10 + 1;
    sVar6 = sVar6 + 1 + sVar5;
    pcVar2 = *ppcVar10;
  }
  pcVar2 = __calloc_crt(sVar6,1);
  *_ArgBlk = pcVar2;
  if (pcVar2 == (char *)0x0) {
    *_EnvBlk = (char *)0x0;
    pDVar3 = FUN_1092681e();
    *pDVar3 = 0xc;
    pDVar3 = FUN_10926831();
    *pDVar3 = 8;
    goto LAB_10934308;
  }
  eVar4 = __dupenv_s(&local_18,(size_t *)0x0,(char *)local_14);
  if (eVar4 == 0) {
    sVar5 = _strlen((char *)local_14);
    local_34 = sVar5 + 2;
    if (local_18 != (char *)0x0) {
      sVar5 = _strlen(local_18);
      local_34 = local_34 + sVar5;
    }
    if (_Env == (char **)0x0) {
      *_EnvBlk = (char *)0x0;
LAB_10934081:
      pcVar2 = *_ArgBlk;
      if (*_Argv != (char *)0x0) {
        eVar4 = _strcpy_s(pcVar2,sVar6,*_Argv);
        if (eVar4 == 0) {
          sVar5 = _strlen(*_Argv);
          pcVar2 = pcVar2 + sVar5 + 1;
          goto LAB_109341ea;
        }
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      pcVar2 = pcVar2 + 1;
      for (; *_Argv != (char *)0x0; _Argv = _Argv + 1) {
        eVar4 = _strcpy_s(pcVar2,(rsize_t)(*_ArgBlk + (sVar6 - (int)pcVar2)),*_Argv);
        if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        sVar5 = _strlen(*_Argv);
        pcVar2[sVar5] = ' ';
        pcVar2 = pcVar2 + sVar5 + 1;
LAB_109341ea:
      }
      pcVar2[-1] = '\0';
      *pcVar2 = '\0';
      pcVar2 = *_EnvBlk;
      if (_Env != (char **)0x0) {
        _memcpy(pcVar2,DAT_109a0ae8 + (int)local_20,(int)local_2c - (int)local_20);
        pcVar2 = pcVar2 + ((int)local_2c - (int)local_20);
        for (; *_Env != (char *)0x0; _Env = _Env + 1) {
          eVar4 = _strcpy_s(pcVar2,(rsize_t)(*_EnvBlk + ((int)local_44 - (int)pcVar2)),*_Env);
          if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          sVar6 = _strlen(*_Env);
          pcVar2 = pcVar2 + sVar6 + 1;
        }
        if (!bVar1) {
          eVar4 = _strcpy_s(pcVar2,local_34,(char *)local_14);
          if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          eVar4 = _strcat_s(pcVar2,local_34,"=");
          if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          if ((local_18 != (char *)0x0) && (eVar4 = _strcat_s(pcVar2,local_34,local_18), eVar4 != 0)
             ) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          pcVar2 = pcVar2 + local_34;
        }
      }
      if (pcVar2 != (char *)0x0) {
        if (pcVar2 == *_EnvBlk) {
          *pcVar2 = '\0';
          pcVar2 = pcVar2 + 1;
        }
        *pcVar2 = '\0';
      }
    }
    else {
      iVar7 = 2;
      pcVar2 = *_Env;
      ppcVar10 = _Env;
      while (pcVar2 != (char *)0x0) {
        sVar5 = _strlen(pcVar2);
        ppcVar10 = ppcVar10 + 1;
        iVar7 = iVar7 + 1 + sVar5;
        pcVar2 = *ppcVar10;
      }
      if ((DAT_109a0ae8 == (char *)0x0) &&
         (DAT_109a0ae8 = ___crtGetEnvironmentStringsA(), DAT_109a0ae8 == (char *)0x0))
      goto LAB_10934064;
      local_20 = (char *)0x0;
      if (*DAT_109a0ae8 != '\0') {
        cVar8 = *DAT_109a0ae8;
        pcVar2 = DAT_109a0ae8;
        do {
          if (cVar8 == '=') break;
          sVar5 = _strlen(pcVar2);
          local_20 = local_20 + sVar5 + 1;
          pcVar2 = DAT_109a0ae8 + (int)local_20;
          cVar8 = *pcVar2;
        } while (cVar8 != '\0');
      }
      local_2c = local_20;
      pcVar2 = DAT_109a0ae8;
      pcVar9 = local_20;
      while ((((pcVar2 = pcVar2 + (int)pcVar9, *pcVar2 == '=' && (pcVar2[1] != '\0')) &&
              (pcVar2[2] == ':')) && (pcVar2[3] == '='))) {
        sVar5 = _strlen(pcVar2 + 4);
        pcVar2 = local_2c + sVar5 + 5;
        pcVar9 = DAT_109a0ae8;
        local_2c = pcVar2;
      }
      local_44 = local_2c + (iVar7 - (int)local_20);
      for (ppcVar10 = _Env; *ppcVar10 != (char *)0x0; ppcVar10 = ppcVar10 + 1) {
        sVar5 = _strlen((char *)local_14);
        iVar7 = __mbsnicmp((uchar *)*ppcVar10,local_14,sVar5);
        if (iVar7 == 0) {
          bVar1 = true;
          pcVar2 = local_44;
          goto LAB_10934135;
        }
      }
      pcVar2 = local_44 + local_34;
LAB_10934135:
      pcVar2 = __calloc_crt((size_t)pcVar2,1);
      *_EnvBlk = pcVar2;
      if (pcVar2 != (char *)0x0) goto LAB_10934081;
      _free(*_ArgBlk);
      *_ArgBlk = (char *)0x0;
      pDVar3 = FUN_1092681e();
      *pDVar3 = 0xc;
      pDVar3 = FUN_10926831();
      *pDVar3 = 8;
    }
  }
  else {
    if (eVar4 == 0x16) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
LAB_10934064:
    _free(*_ArgBlk);
    *_ArgBlk = (char *)0x0;
    *_EnvBlk = (char *)0x0;
  }
  if (DAT_109a0ae8 != (char *)0x0) {
    _free(DAT_109a0ae8);
  }
  DAT_109a0ae8 = (char *)0x0;
  if (local_18 != (char *)0x0) {
    _free(local_18);
  }
LAB_10934308:
  iVar7 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar7;
}


// ==== 10934317 __access_s

/* Library Function - Single Match
    __access_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __access_s(char *_Filename,int _AccessMode)

{
  DWORD *pDVar1;
  DWORD DVar2;
  
  if ((_Filename == (char *)0x0) || ((_AccessMode & 0xfffffff9U) != 0)) {
    pDVar1 = FUN_10926831();
    *pDVar1 = 0;
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  DVar2 = GetFileAttributesA(_Filename);
  if (DVar2 == 0xffffffff) {
    DVar2 = GetLastError();
    FUN_10926844(DVar2);
  }
  else {
    if ((((DVar2 & 0x10) != 0) || ((DVar2 & 1) == 0)) || ((_AccessMode & 2U) == 0)) {
      return 0;
    }
    pDVar1 = FUN_10926831();
    *pDVar1 = 5;
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0xd;
  }
  pDVar1 = FUN_1092681e();
  return *pDVar1;
}


// ==== 109343b2 __mbschr_l

/* Library Function - Single Match
    __mbschr_l
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbschr_l(uchar *_Str,uint _Ch,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  DWORD *pDVar3;
  byte *pbVar4;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if (_Str == (uchar *)0x0) {
    pDVar3 = FUN_1092681e();
    *pDVar3 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
          if (bVar1 == 0) goto LAB_1093445a;
          pbVar4 = _Str + 1;
          if (_Ch == CONCAT11(bVar2,bVar1)) goto LAB_1093444c;
        }
        _Str = pbVar4 + 1;
      }
      if (_Ch != (ushort)bVar2) {
LAB_1093445a:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return (uchar *)0x0;
      }
    }
LAB_1093444c:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return _Str;
}


// ==== 1093446c __mbschr

/* Library Function - Single Match
    __mbschr
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbschr(uchar *_Str,uint _Ch)

{
  uchar *puVar1;
  
  puVar1 = __mbschr_l(_Str,_Ch,(_locale_t)0x0);
  return puVar1;
}


// ==== 1093447f __mbsrchr_l

/* Library Function - Single Match
    __mbsrchr_l
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbsrchr_l(uchar *_Str,uint _Ch,_locale_t _Locale)

{
  byte bVar1;
  ushort uVar2;
  DWORD *pDVar3;
  byte *pbVar4;
  byte bVar5;
  bool bVar6;
  _LocaleUpdate local_18 [4];
  int local_14;
  int local_10;
  char local_c;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  _LocaleUpdate::_LocaleUpdate(local_18,_Locale);
  if (*(int *)(local_14 + 8) == 0) {
    local_8 = (byte *)_strrchr((char *)_Str,_Ch);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
  }
  else if (_Str == (uchar *)0x0) {
    pDVar3 = FUN_1092681e();
    *pDVar3 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    local_8 = (byte *)0x0;
  }
  else {
    do {
      bVar5 = *_Str;
      if ((*(byte *)(bVar5 + 0x1d + local_14) & 4) == 0) {
        bVar6 = _Ch == bVar5;
LAB_10934521:
        pbVar4 = _Str;
        if (bVar6) {
          local_8 = _Str;
        }
      }
      else {
        pbVar4 = _Str + 1;
        bVar1 = *pbVar4;
        if (bVar1 == 0) {
          bVar6 = local_8 == (byte *)0x0;
          _Str = pbVar4;
          bVar5 = bVar1;
          goto LAB_10934521;
        }
        uVar2 = CONCAT11(bVar5,bVar1);
        bVar5 = bVar1;
        if (_Ch == uVar2) {
          local_8 = _Str;
        }
      }
      _Str = pbVar4 + 1;
    } while (bVar5 != 0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
  }
  return local_8;
}


// ==== 1093453f __mbsrchr

/* Library Function - Single Match
    __mbsrchr
   
   Library: Visual Studio 2005 Release */

uchar * __cdecl __mbsrchr(uchar *_Str,uint _Ch)

{
  uchar *puVar1;
  
  puVar1 = __mbsrchr_l(_Str,_Ch,(_locale_t)0x0);
  return puVar1;
}


// ==== 10934552 FUN_10934552

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10934552(void)

{
  _DAT_109a15b4 = 0;
  return;
}


// ==== 1093455a __set_osfhnd

/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2005 Release */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_109a160c)) {
    iVar2 = (param_1 & 0x1fU) * 0x38;
    if (*(int *)(iVar2 + (&DAT_109a1660)[param_1 >> 5]) == -1) {
      if (DAT_1096d670 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_109345b4;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)param_2);
      }
LAB_109345b4:
      *(intptr_t *)(iVar2 + (&DAT_109a1660)[param_1 >> 5]) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_1092681e();
  *pDVar1 = 9;
  pDVar1 = FUN_10926831();
  *pDVar1 = 0;
  return -1;
}


// ==== 109345d7 __free_osfhnd

/* Library Function - Single Match
    __free_osfhnd
   
   Library: Visual Studio 2005 Release */

int __cdecl __free_osfhnd(int param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_109a160c)) {
    iVar3 = (param_1 & 0x1fU) * 0x38;
    piVar1 = (int *)((&DAT_109a1660)[param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_1096d670 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10934635;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_10934635:
      *(undefined4 *)(iVar3 + (&DAT_109a1660)[param_1 >> 5]) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_1092681e();
  *pDVar2 = 9;
  pDVar2 = FUN_10926831();
  *pDVar2 = 0;
  return -1;
}


// ==== 10934658 __get_osfhandle

/* Library Function - Single Match
    __get_osfhandle
   
   Library: Visual Studio 2005 Release */

intptr_t __cdecl __get_osfhandle(int _FileHandle)

{
  DWORD *pDVar1;
  intptr_t *piVar2;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_10926831();
    *pDVar1 = 0;
    pDVar1 = FUN_1092681e();
    *pDVar1 = 9;
    return -1;
  }
  if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_109a160c)) &&
     (piVar2 = (intptr_t *)((_FileHandle & 0x1fU) * 0x38 + (&DAT_109a1660)[_FileHandle >> 5]),
     (*(byte *)(piVar2 + 1) & 1) != 0)) {
    return *piVar2;
  }
  pDVar1 = FUN_10926831();
  *pDVar1 = 0;
  pDVar1 = FUN_1092681e();
  *pDVar1 = 9;
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}


// ==== 109346c9 ___lock_fhandle

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___lock_fhandle
   
   Library: Visual Studio 2005 Release */

int __cdecl ___lock_fhandle(int _Filehandle)

{
  int iVar1;
  int iVar2;
  uint local_20;
  
  iVar2 = (_Filehandle & 0x1fU) * 0x38 + (&DAT_109a1660)[_Filehandle >> 5];
  local_20 = 1;
  if (*(int *)(iVar2 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar2 + 8) == 0) {
      iVar1 = ___crtInitCritSecAndSpinCount(iVar2 + 0xc,4000);
      local_20 = (uint)(iVar1 != 0);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    FUN_10934760();
  }
  if (local_20 != 0) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               ((&DAT_109a1660)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x38));
  }
  return local_20;
}


// ==== 10934760 FUN_10934760

void FUN_10934760(void)

{
  FUN_10929478(10);
  return;
}


// ==== 10934769 __unlock_fhandle

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 2005 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_109a1660)[_Filehandle >> 5] + 0xc + (_Filehandle & 0x1fU) * 0x38));
  return;
}


// ==== 1093478b __alloc_osfhnd

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __alloc_osfhnd
   
   Library: Visual Studio 2005 Release */

int __cdecl __alloc_osfhnd(void)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_20;
  
  local_20 = -1;
  iVar4 = 0;
  bVar1 = false;
  iVar2 = __mtinitlocknum(0xb);
  if (iVar2 == 0) {
    local_20 = -1;
  }
  else {
    __lock(0xb);
    for (; iVar4 < 0x40; iVar4 = iVar4 + 1) {
      puVar3 = (undefined4 *)(&DAT_109a1660)[iVar4];
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = __calloc_crt(0x20,0x38);
        if (puVar3 != (undefined4 *)0x0) {
          (&DAT_109a1660)[iVar4] = puVar3;
          DAT_109a160c = DAT_109a160c + 0x20;
          for (; puVar3 < (undefined4 *)((&DAT_109a1660)[iVar4] + 0x700); puVar3 = puVar3 + 0xe) {
            *(undefined1 *)(puVar3 + 1) = 0;
            *puVar3 = 0xffffffff;
            *(undefined1 *)((int)puVar3 + 5) = 10;
            puVar3[2] = 0;
          }
          local_20 = iVar4 << 5;
          *(undefined1 *)((&DAT_109a1660)[local_20 >> 5] + 4) = 1;
          iVar2 = ___lock_fhandle(local_20);
          if (iVar2 == 0) {
            local_20 = -1;
          }
        }
        break;
      }
      for (; puVar3 < (undefined4 *)((&DAT_109a1660)[iVar4] + 0x700); puVar3 = puVar3 + 0xe) {
        if ((*(byte *)(puVar3 + 1) & 1) == 0) {
          if (puVar3[2] == 0) {
            __lock(10);
            if (puVar3[2] == 0) {
              iVar2 = ___crtInitCritSecAndSpinCount(puVar3 + 3,4000);
              if (iVar2 == 0) {
                bVar1 = true;
              }
              else {
                puVar3[2] = puVar3[2] + 1;
              }
            }
            FUN_1093485e();
          }
          if (!bVar1) {
            EnterCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
            if ((*(byte *)(puVar3 + 1) & 1) == 0) {
              *(undefined1 *)(puVar3 + 1) = 1;
              *puVar3 = 0xffffffff;
              local_20 = ((int)puVar3 - (&DAT_109a1660)[iVar4]) / 0x38 + iVar4 * 0x20;
              break;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
          }
        }
      }
      if (local_20 != -1) break;
    }
    FUN_10934921();
  }
  return local_20;
}


// ==== 1093485e FUN_1093485e

void FUN_1093485e(void)

{
  FUN_10929478(10);
  return;
}


// ==== 10934921 FUN_10934921

void FUN_10934921(void)

{
  FUN_10929478(0xb);
  return;
}


// ==== 10934a40 __ValidateImageBase

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


// ==== 10934a70 __FindPESection

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


// ==== 10934ac0 __IsNonwritableInCurrentImage

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
  local_c = DAT_1096d674 ^ 0x10968f08;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_10900000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_10900000,(DWORD_PTR)(pTarget + -0x10900000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}


// ==== 10934b7b FUN_10934b7b

DWORD __cdecl FUN_10934b7b(undefined4 *param_1,LPCSTR param_2,uint param_3,int param_4,byte param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint *in_EAX;
  int iVar3;
  uint uVar4;
  DWORD *pDVar5;
  DWORD DVar6;
  HANDLE pvVar7;
  long lVar8;
  int iVar9;
  byte bVar10;
  int unaff_EDI;
  bool bVar11;
  longlong lVar12;
  _SECURITY_ATTRIBUTES local_38;
  int local_2c;
  uint local_28 [2];
  HANDLE local_20;
  uint local_1c;
  DWORD local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  char local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  
  bVar11 = (param_3 & 0x80) == 0;
  local_28[0] = 0;
  local_2c = 0;
  local_6 = 0;
  local_38.nLength = 0xc;
  local_38.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar11) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_38.bInheritHandle = (BOOL)bVar11;
  iVar3 = FUN_10942ce5(local_28);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  iVar3 = __get_osplatform(&local_2c);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (((param_3 & 0x8000) == 0) && (((param_3 & 0x74000) != 0 || (local_28[0] != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar4 = param_3 & 3;
  if (uVar4 == 0) {
    local_c = 0x80000000;
  }
  else {
    if (uVar4 == 1) {
      if (((param_3 & 8) == 0) || ((param_3 & 0x70000) == 0)) {
        local_c = 0x40000000;
        goto LAB_10934c64;
      }
    }
    else if (uVar4 != 2) goto LAB_10934c20;
    local_c = 0xc0000000;
  }
LAB_10934c64:
  if (param_4 == 0x10) {
    local_14 = 0;
  }
  else if (param_4 == 0x20) {
    local_14 = 1;
  }
  else if (param_4 == 0x30) {
    local_14 = 2;
  }
  else if (param_4 == 0x40) {
    local_14 = 3;
  }
  else {
    if (param_4 != 0x80) goto LAB_10934c20;
    local_14 = (uint)(local_c == 0x80000000);
  }
  uVar4 = param_3 & 0x700;
  if (uVar4 < 0x401) {
    if ((uVar4 == 0x400) || (uVar4 == 0)) {
      local_18 = 3;
    }
    else if (uVar4 == 0x100) {
      local_18 = 4;
    }
    else {
      if (uVar4 == 0x200) goto LAB_10934d6e;
      if (uVar4 != 0x300) goto LAB_10934c20;
      local_18 = 2;
    }
  }
  else {
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) {
LAB_10934d6e:
        local_18 = 5;
        goto LAB_10934d18;
      }
      if (uVar4 != 0x700) {
LAB_10934c20:
        pDVar5 = FUN_10926831();
        *pDVar5 = 0;
        *in_EAX = 0xffffffff;
        pDVar5 = FUN_1092681e();
        *pDVar5 = 0x16;
        FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        return 0x16;
      }
    }
    local_18 = 1;
  }
LAB_10934d18:
  local_10 = 0x80;
  if (((param_3 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_109a0e40 & param_5))) {
    local_10 = 1;
  }
  if ((param_3 & 0x40) != 0) {
    local_10 = local_10 | 0x4000000;
    local_c = local_c | 0x10000;
    if (local_2c == 2) {
      local_14 = local_14 | 4;
    }
  }
  if ((param_3 & 0x1000) != 0) {
    local_10 = local_10 | 0x100;
  }
  if ((param_3 & 0x20) == 0) {
    if ((param_3 & 0x10) != 0) {
      local_10 = local_10 | 0x10000000;
    }
  }
  else {
    local_10 = local_10 | 0x8000000;
  }
  uVar4 = __alloc_osfhnd();
  *in_EAX = uVar4;
  if (uVar4 == 0xffffffff) {
    pDVar5 = FUN_10926831();
    *pDVar5 = 0;
    *in_EAX = 0xffffffff;
    pDVar5 = FUN_1092681e();
    *pDVar5 = 0x18;
    goto LAB_10934e36;
  }
  *param_1 = 1;
  local_20 = CreateFileA(param_2,local_c,local_14,&local_38,local_18,local_10,(HANDLE)0x0);
  if (local_20 == (HANDLE)0xffffffff) {
    if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
      local_c = local_c & 0x7fffffff;
      local_20 = CreateFileA(param_2,local_c,local_14,&local_38,local_18,local_10,(HANDLE)0x0);
      if (local_20 != (HANDLE)0xffffffff) goto LAB_10934e42;
    }
    pbVar1 = (byte *)((&DAT_109a1660)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar6 = GetLastError();
    FUN_10926844(DVar6);
    goto LAB_10934e36;
  }
LAB_10934e42:
  DVar6 = GetFileType(local_20);
  if (DVar6 == 0) {
    pbVar1 = (byte *)((&DAT_109a1660)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar6 = GetLastError();
    FUN_10926844(DVar6);
    CloseHandle(local_20);
    if (DVar6 == 0) {
      pDVar5 = FUN_1092681e();
      *pDVar5 = 0xd;
    }
    goto LAB_10934e36;
  }
  if (DVar6 == 2) {
    local_5 = local_5 | 0x40;
  }
  else if (DVar6 == 3) {
    local_5 = local_5 | 8;
  }
  __set_osfhnd(*in_EAX,(intptr_t)local_20);
  bVar10 = local_5 | 1;
  *(byte *)((&DAT_109a1660)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38) = bVar10;
  pbVar1 = (byte *)((&DAT_109a1660)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = *pbVar1 & 0x80;
  local_7 = local_5 & 0x48;
  if (local_7 == 0) {
    bVar2 = local_5 & 0x80;
    local_5 = bVar10;
    if (bVar2 == 0) goto LAB_1093504c;
    if ((param_3 & 2) == 0) goto LAB_10934f7c;
    local_1c = __lseek_nolock(*in_EAX,-1,2);
    if (local_1c == 0xffffffff) {
      pDVar5 = FUN_10926831();
      bVar10 = local_5;
      if (*pDVar5 == 0x83) goto LAB_10934f7c;
    }
    else {
      local_8 = '\0';
      iVar3 = FUN_109423d7(*in_EAX,(LPWSTR)&local_8,(LPWSTR)0x1);
      if ((((iVar3 != 0) || (local_8 != '\x1a')) ||
          (iVar3 = __chsize_nolock(*in_EAX,CONCAT44(unaff_EDI,(int)local_1c >> 0x1f)), iVar3 != -1))
         && (lVar8 = __lseek_nolock(*in_EAX,0,0), bVar10 = local_5, lVar8 != -1)) goto LAB_10934f7c;
    }
LAB_10934f2f:
    __close_nolock(*in_EAX);
    goto LAB_10934e36;
  }
LAB_10934f7c:
  local_5 = bVar10;
  if ((local_5 & 0x80) != 0) {
    if ((param_3 & 0x74000) == 0) {
      if ((local_28[0] & 0x74000) == 0) {
        param_3 = param_3 | 0x4000;
      }
      else {
        param_3 = param_3 | local_28[0] & 0x74000;
      }
    }
    uVar4 = param_3 & 0x74000;
    if (uVar4 == 0x4000) {
      local_6 = 0;
    }
    else if ((uVar4 == 0x10000) || (uVar4 == 0x14000)) {
      if ((param_3 & 0x301) == 0x301) goto LAB_10934feb;
    }
    else if ((uVar4 == 0x20000) || (uVar4 == 0x24000)) {
LAB_10934feb:
      local_6 = 2;
    }
    else if ((uVar4 == 0x40000) || (uVar4 == 0x44000)) {
      local_6 = 1;
    }
    if (((param_3 & 0x70000) != 0) && (local_1c = 0, (local_5 & 0x40) == 0)) {
      uVar4 = local_c & 0xc0000000;
      if (uVar4 == 0x40000000) {
        if (local_18 == 0) goto LAB_1093504c;
        if (2 < local_18) {
          if (local_18 < 5) {
            lVar12 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
            if (lVar12 == 0) goto LAB_1093524e;
            lVar12 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
            uVar4 = (uint)lVar12 & (uint)((ulonglong)lVar12 >> 0x20);
            goto LAB_109351e4;
          }
LAB_10935043:
          if (local_18 != 5) goto LAB_1093504c;
        }
LAB_1093524e:
        iVar3 = 0;
        if (local_6 == 1) {
          local_1c = 0xbfbbef;
          local_18 = 3;
        }
        else {
          if (local_6 != 2) goto LAB_1093504c;
          local_1c = 0xfeff;
          local_18 = 2;
        }
        do {
          iVar9 = __write(*in_EAX,(void *)((int)&local_1c + iVar3),local_18 - iVar3);
          if (iVar9 == -1) {
            __close_nolock(*in_EAX);
            pDVar5 = FUN_1092681e();
            return *pDVar5;
          }
          iVar3 = iVar3 + iVar9;
        } while (iVar3 < (int)local_18);
      }
      else {
        if (uVar4 != 0x80000000) {
          if ((uVar4 == 0xc0000000) && (local_18 != 0)) {
            if (2 < local_18) {
              if (4 < local_18) goto LAB_10935043;
              lVar12 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
              if (lVar12 != 0) {
                lVar12 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
                if (lVar12 == -1) goto LAB_10934f2f;
                goto LAB_1093516d;
              }
            }
            goto LAB_1093524e;
          }
          goto LAB_1093504c;
        }
LAB_1093516d:
        iVar3 = FUN_109423d7(*in_EAX,(LPWSTR)&local_1c,(LPWSTR)0x3);
        if (iVar3 == -1) goto LAB_10934f2f;
        if (iVar3 == 2) {
LAB_109351f2:
          if ((local_1c & 0xffff) == 0xfffe) {
            __close_nolock(*in_EAX);
            pDVar5 = FUN_1092681e();
            *pDVar5 = 0x16;
            return 0x16;
          }
          if ((local_1c & 0xffff) == 0xfeff) {
            lVar8 = __lseek_nolock(*in_EAX,2,0);
            if (lVar8 == -1) goto LAB_10934f2f;
            local_6 = 2;
            goto LAB_1093504c;
          }
        }
        else if (iVar3 == 3) {
          if (local_1c == 0xbfbbef) {
            local_6 = 1;
            goto LAB_1093504c;
          }
          goto LAB_109351f2;
        }
        uVar4 = __lseek_nolock(*in_EAX,0,0);
LAB_109351e4:
        if (uVar4 == 0xffffffff) goto LAB_10934f2f;
      }
    }
  }
LAB_1093504c:
  uVar4 = local_c;
  pbVar1 = (byte *)((&DAT_109a1660)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = *pbVar1 ^ (*pbVar1 ^ local_6) & 0x7f;
  pbVar1 = (byte *)((&DAT_109a1660)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x38);
  *pbVar1 = (char)(param_3 >> 0x10) << 7 | *pbVar1 & 0x7f;
  if ((local_7 == 0) && ((param_3 & 8) != 0)) {
    pbVar1 = (byte *)((&DAT_109a1660)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
    *pbVar1 = *pbVar1 | 0x20;
  }
  if (((local_c & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
    CloseHandle(local_20);
    pvVar7 = CreateFileA(param_2,uVar4 & 0x7fffffff,local_14,&local_38,3,local_10,(HANDLE)0x0);
    if (pvVar7 == (HANDLE)0xffffffff) {
      DVar6 = GetLastError();
      FUN_10926844(DVar6);
      pbVar1 = (byte *)((&DAT_109a1660)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x38);
      *pbVar1 = *pbVar1 & 0xfe;
      __free_osfhnd(*in_EAX);
LAB_10934e36:
      pDVar5 = FUN_1092681e();
      return *pDVar5;
    }
    *(HANDLE *)((*in_EAX & 0x1f) * 0x38 + (&DAT_109a1660)[(int)*in_EAX >> 5]) = pvVar7;
  }
  return 0;
}


// ==== 1093538a FID_conflict:__sopen_helper

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    __sopen_helper
    __wsopen_helper
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
FID_conflict___sopen_helper
          (char *_Filename,int _OFlag,int _ShFlag,int _PMode,int *_PFileHandle,int _BSecure)

{
  DWORD *pDVar1;
  DWORD DVar2;
  undefined4 local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_10968f48;
  uStack_c = 0x10935396;
  local_20[0] = 0;
  if (((_PFileHandle == (int *)0x0) || (*_PFileHandle = -1, _Filename == (char *)0x0)) ||
     ((_BSecure != 0 && ((_PMode & 0xfffffe7fU) != 0)))) {
    pDVar1 = FUN_1092681e();
    DVar2 = 0x16;
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    local_8 = (undefined *)0x0;
    DVar2 = FUN_10934b7b(local_20,_Filename,_OFlag,_ShFlag,(byte)_PMode);
    local_8 = (undefined *)0xfffffffe;
    FUN_10935428();
    if (DVar2 != 0) {
      *_PFileHandle = -1;
    }
  }
  return DVar2;
}


// ==== 10935428 FUN_10935428

void FUN_10935428(void)

{
  byte *pbVar1;
  int unaff_EBP;
  int unaff_ESI;
  uint *unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x1c) != unaff_ESI) {
    if (*(int *)(unaff_EBP + -0x20) != unaff_ESI) {
      pbVar1 = (byte *)((&DAT_109a1660)[(int)*unaff_EDI >> 5] + 4 + (*unaff_EDI & 0x1f) * 0x38);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    __unlock_fhandle(*unaff_EDI);
  }
  return;
}


// ==== 10935456 FID_conflict:__sopen

/* Library Function - Multiple Matches With Different Base Names
    __sopen
    __wsopen
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl FID_conflict___sopen(wchar_t *_Filename,int _OpenFlag,int _ShareFlag,...)

{
  errno_t eVar1;
  int in_stack_00000010;
  int local_8;
  
  local_8 = -1;
  eVar1 = FID_conflict___sopen_helper
                    ((char *)_Filename,_OpenFlag,_ShareFlag,in_stack_00000010,&local_8,0);
  if (eVar1 != 0) {
    return -1;
  }
  return local_8;
}


// ==== 10935486 FID_conflict:__sopen_s

/* Library Function - Multiple Matches With Different Base Names
    __sopen_s
    __wsopen_s
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

errno_t __cdecl
FID_conflict___sopen_s
          (int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode)

{
  errno_t eVar1;
  
  eVar1 = FID_conflict___sopen_helper(_Filename,_OpenFlag,_ShareFlag,_PermissionMode,_FileHandle,1);
  return eVar1;
}


// ==== 109354a4 __mbsicmp_l

/* Library Function - Single Match
    __mbsicmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsicmp_l(uchar *_Str1,uchar *_Str2,_locale_t _Locale)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  DWORD *pDVar4;
  int iVar5;
  pthreadmbcinfo ptVar6;
  byte *pbVar7;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  byte local_8;
  byte local_7;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
  if (_Str1 == (uchar *)0x0) {
    pDVar4 = FUN_1092681e();
    *pDVar4 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    iVar5 = 0x7fffffff;
  }
  else if (_Str2 == (uchar *)0x0) {
    pDVar4 = FUN_1092681e();
    *pDVar4 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_c != '\0') {
      *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
    }
    iVar5 = 0x7fffffff;
  }
  else {
    ptVar6 = local_18.mbcinfo;
    if ((local_18.mbcinfo)->ismbcodepage == 0) {
      iVar5 = __stricmp_l((char *)_Str1,(char *)_Str2,&local_18);
      if (local_c != '\0') {
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      }
    }
    else {
      do {
        bVar1 = *_Str1;
        pbVar7 = _Str1 + 1;
        if ((ptVar6->mbctype[bVar1 + 5] & 4) == 0) {
          if ((ptVar6->mbctype[bVar1 + 5] & 0x10) == 0) {
            uVar2 = (ushort)bVar1;
            _Str1 = pbVar7;
          }
          else {
            uVar2 = (ushort)ptVar6->mbcasemap[bVar1 + 4];
            _Str1 = pbVar7;
          }
        }
        else if (*pbVar7 == 0) {
          uVar2 = 0;
          _Str1 = pbVar7;
        }
        else {
          iVar5 = ___crtLCMapStringA(&local_18,*(LPCWSTR *)ptVar6->mbulinfo,0x200,(LPCSTR)_Str1,2,
                                     (LPSTR)&local_8,2,ptVar6->mbcodepage,1);
          if (iVar5 == 1) {
            uVar2 = (ushort)local_8;
          }
          else {
            if (iVar5 != 2) goto LAB_10935676;
            uVar2 = (ushort)local_8 * 0x100 + (ushort)local_7;
          }
          ptVar6 = local_18.mbcinfo;
          _Str1 = _Str1 + 2;
        }
        bVar1 = *_Str2;
        pbVar7 = _Str2 + 1;
        if ((ptVar6->mbctype[bVar1 + 5] & 4) == 0) {
          if ((ptVar6->mbctype[bVar1 + 5] & 0x10) == 0) {
            uVar3 = (ushort)bVar1;
          }
          else {
            uVar3 = (ushort)ptVar6->mbcasemap[bVar1 + 4];
          }
        }
        else if (*pbVar7 == 0) {
          uVar3 = 0;
        }
        else {
          iVar5 = ___crtLCMapStringA(&local_18,*(LPCWSTR *)ptVar6->mbulinfo,0x200,(LPCSTR)_Str2,2,
                                     (LPSTR)&local_8,2,ptVar6->mbcodepage,1);
          if (iVar5 == 1) {
            uVar3 = (ushort)local_8;
          }
          else {
            if (iVar5 != 2) {
LAB_10935676:
              pDVar4 = FUN_1092681e();
              *pDVar4 = 0x16;
              if (local_c != '\0') {
                *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
              }
              return 0x7fffffff;
            }
            uVar3 = (ushort)local_8 * 0x100 + (ushort)local_7;
          }
          pbVar7 = _Str2 + 2;
          ptVar6 = local_18.mbcinfo;
        }
        if (uVar3 != uVar2) {
          iVar5 = (-(uint)(uVar3 < uVar2) & 2) - 1;
          if (local_c == '\0') {
            return iVar5;
          }
          *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
          return iVar5;
        }
        _Str2 = pbVar7;
      } while (uVar2 != 0);
      if (local_c != '\0') {
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      }
      iVar5 = 0;
    }
  }
  return iVar5;
}


// ==== 109356be __mbsicmp

/* Library Function - Single Match
    __mbsicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsicmp(uchar *_Str1,uchar *_Str2)

{
  int iVar1;
  
  iVar1 = __mbsicmp_l(_Str1,_Str2,(_locale_t)0x0);
  return iVar1;
}


// ==== 109356d1 __mbsnbcmp_l

/* Library Function - Single Match
    __mbsnbcmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbcmp_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  size_t sVar1;
  byte bVar2;
  int iVar3;
  DWORD *pDVar4;
  uchar *puVar5;
  uint uVar6;
  ushort uVar7;
  byte *pbVar8;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  if (_MaxCount == 0) {
    iVar3 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
    if (*(int *)(local_10 + 8) == 0) {
      iVar3 = _strncmp((char *)_Str1,(char *)_Str2,_MaxCount);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
    }
    else if (_Str1 == (uchar *)0x0) {
      pDVar4 = FUN_1092681e();
      *pDVar4 = 0x16;
      FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar3 = 0x7fffffff;
    }
    else {
      if (_Str2 != (uchar *)0x0) {
        do {
          bVar2 = *_Str1;
          uVar7 = (ushort)bVar2;
          sVar1 = _MaxCount - 1;
          puVar5 = _Str1 + 1;
          if ((*(byte *)(bVar2 + 0x1d + local_10) & 4) == 0) {
LAB_109357d0:
            _Str1 = puVar5;
            uVar6 = (uint)*_Str2;
            pbVar8 = _Str2 + 1;
            if ((*(byte *)(uVar6 + 0x1d + local_10) & 4) != 0) {
              if (sVar1 != 0) {
                sVar1 = _MaxCount - 2;
                if (*pbVar8 != 0) {
                  uVar6 = (uint)CONCAT11(*_Str2,*pbVar8);
                  pbVar8 = _Str2 + 2;
                  goto LAB_10935800;
                }
              }
              _MaxCount = sVar1;
              uVar6 = 0;
              sVar1 = _MaxCount;
            }
          }
          else {
            if (sVar1 != 0) {
              if (*puVar5 == '\0') {
                uVar7 = 0;
              }
              else {
                uVar7 = CONCAT11(bVar2,*puVar5);
                puVar5 = _Str1 + 2;
              }
              goto LAB_109357d0;
            }
            uVar6 = (uint)*_Str2;
            uVar7 = 0;
            pbVar8 = _Str2;
            _Str1 = puVar5;
            if ((*(byte *)(uVar6 + 0x1d + local_10) & 4) != 0) {
LAB_10935813:
              if (local_8 != '\0') {
                *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
              }
              return 0;
            }
          }
LAB_10935800:
          _MaxCount = sVar1;
          if ((ushort)uVar6 != uVar7) {
            iVar3 = (-(uint)((ushort)uVar6 < uVar7) & 2) - 1;
            if (local_8 == '\0') {
              return iVar3;
            }
            *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
            return iVar3;
          }
          if ((uVar7 == 0) || (_Str2 = pbVar8, _MaxCount == 0)) goto LAB_10935813;
        } while( true );
      }
      pDVar4 = FUN_1092681e();
      *pDVar4 = 0x16;
      FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar3 = 0x7fffffff;
    }
  }
  return iVar3;
}


// ==== 1093583a __mbsnbcmp

/* Library Function - Single Match
    __mbsnbcmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbcmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbcmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


// ==== 10935851 FUN_10935851

void __cdecl FUN_10935851(undefined4 param_1)

{
  DAT_109a14d8 = param_1;
  return;
}


// ==== 1093585b ___crtInitCritSecNoSpinCount@8

/* Library Function - Single Match
    ___crtInitCritSecNoSpinCount@8
   
   Library: Visual Studio 2005 Release */

undefined4 ___crtInitCritSecNoSpinCount_8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return 1;
}


// ==== 1093586b ___crtInitCritSecAndSpinCount

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
  
  local_8 = &DAT_10968f68;
  uStack_c = 0x10935877;
  local_20[0] = 0;
  pcVar1 = (code *)FUN_10924649(DAT_109a14d8);
  if (pcVar1 != (FARPROC)0x0) goto LAB_109358e1;
  iVar2 = __get_osplatform(local_20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_20[0] == 1) {
LAB_109358d0:
    pcVar1 = ___crtInitCritSecNoSpinCount_8;
  }
  else {
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_109358d0;
    pcVar1 = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
    if (pcVar1 == (FARPROC)0x0) goto LAB_109358d0;
  }
  DAT_109a14d8 = FUN_109245d2((int)pcVar1);
LAB_109358e1:
  local_8 = (undefined *)0x0;
  iVar2 = (*pcVar1)(param_1,param_2);
  return iVar2;
}


// ==== 10935930 __lseeki64_nolock

/* Library Function - Single Match
    __lseeki64_nolock
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __lseeki64_nolock(int _FileHandle,longlong _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  DWORD DVar4;
  LONG in_stack_00000008;
  LONG local_8;
  
  local_8 = (LONG)_Offset;
  hFile = (HANDLE)__get_osfhandle(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_1092681e();
    *pDVar2 = 9;
LAB_1093595f:
    DVar3 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar3 = SetFilePointer(hFile,in_stack_00000008,&local_8,_Offset._4_4_);
    if (DVar3 == 0xffffffff) {
      DVar4 = GetLastError();
      if (DVar4 != 0) {
        FUN_10926844(DVar4);
        goto LAB_1093595f;
      }
    }
    pbVar1 = (byte *)((&DAT_109a1660)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar3);
}


// ==== 109359b3 __lseeki64

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __lseeki64
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin)

{
  DWORD *pDVar1;
  int iVar2;
  int in_stack_ffffffc8;
  undefined8 local_28;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_10926831();
    *pDVar1 = 0;
    pDVar1 = FUN_1092681e();
    *pDVar1 = 9;
  }
  else {
    if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_109a160c)) {
      iVar2 = (_FileHandle & 0x1fU) * 0x38;
      if ((*(byte *)((&DAT_109a1660)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
        pDVar1 = FUN_10926831();
        *pDVar1 = 0;
        pDVar1 = FUN_1092681e();
        *pDVar1 = 9;
        FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        local_28._4_4_ = 0xffffffff;
        local_28._0_4_ = 0xffffffff;
      }
      else {
        ___lock_fhandle(_FileHandle);
        if ((*(byte *)((&DAT_109a1660)[_FileHandle >> 5] + 4 + iVar2) & 1) == 0) {
          pDVar1 = FUN_1092681e();
          *pDVar1 = 9;
          pDVar1 = FUN_10926831();
          *pDVar1 = 0;
          local_28 = -1;
        }
        else {
          local_28 = __lseeki64_nolock(_FileHandle,_Offset,in_stack_ffffffc8);
        }
        FUN_10935ac2();
      }
      goto LAB_10935abc;
    }
    pDVar1 = FUN_10926831();
    *pDVar1 = 0;
    pDVar1 = FUN_1092681e();
    *pDVar1 = 9;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  local_28._0_4_ = 0xffffffff;
  local_28._4_4_ = 0xffffffff;
LAB_10935abc:
  return CONCAT44(local_28._4_4_,(undefined4)local_28);
}


// ==== 10935ac2 FUN_10935ac2

void FUN_10935ac2(void)

{
  int unaff_EBP;
  
  __unlock_fhandle(*(int *)(unaff_EBP + 8));
  return;
}


// ==== 10935acc __getbuf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __getbuf
   
   Library: Visual Studio 2005 Release */

void __cdecl __getbuf(FILE *_File)

{
  char *pcVar1;
  
  _DAT_109a0af4 = _DAT_109a0af4 + 1;
  pcVar1 = __malloc_crt(0x1000);
  _File->_base = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _File->_flag = _File->_flag | 4;
    _File->_base = (char *)&_File->_charbuf;
    _File->_bufsiz = 2;
  }
  else {
    _File->_flag = _File->_flag | 8;
    _File->_bufsiz = 0x1000;
  }
  _File->_cnt = 0;
  _File->_ptr = _File->_base;
  return;
}


// ==== 10935b10 __isatty

/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2005 Release */

int __cdecl __isatty(int _FileHandle)

{
  DWORD *pDVar1;
  
  if (_FileHandle == -2) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 9;
    return 0;
  }
  if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_109a160c)) {
    return *(byte *)((&DAT_109a1660)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38) & 0x40;
  }
  pDVar1 = FUN_1092681e();
  *pDVar1 = 9;
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0;
}


// ==== 10935cac FUN_10935cac

bool FUN_10935cac(void)

{
  return DAT_109a14dc == (DAT_1096d674 | 1);
}


// ==== 10935cc2 __wctomb_s_l

/* Library Function - Single Match
    __wctomb_s_l
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl
__wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale)

{
  char *lpMultiByteStr;
  size_t _Size;
  DWORD DVar1;
  DWORD *pDVar2;
  int iVar3;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _Size = _SizeInBytes;
  lpMultiByteStr = _MbCh;
  if ((_MbCh == (char *)0x0) && (_SizeInBytes != 0)) {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = 0;
    }
LAB_10935ce4:
    DVar1 = 0;
  }
  else {
    if (_SizeConverted != (int *)0x0) {
      *_SizeConverted = -1;
    }
    if (0x7fffffff < _SizeInBytes) {
      pDVar2 = FUN_1092681e();
      *pDVar2 = 0x16;
      FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      return 0x16;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,_Locale);
    if (*(int *)(local_14[0] + 0x14) == 0) {
      if ((ushort)_WCh < 0x100) {
        if (lpMultiByteStr != (char *)0x0) {
          if (_Size == 0) goto LAB_10935d74;
          *lpMultiByteStr = (char)_WCh;
        }
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = 1;
        }
LAB_10935dab:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        goto LAB_10935ce4;
      }
      if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
        _memset(lpMultiByteStr,0,_Size);
      }
    }
    else {
      _MbCh = (char *)0x0;
      iVar3 = WideCharToMultiByte(*(UINT *)(local_14[0] + 4),0,&_WCh,1,lpMultiByteStr,_Size,
                                  (LPCSTR)0x0,(LPBOOL)&_MbCh);
      if (iVar3 == 0) {
        DVar1 = GetLastError();
        if (DVar1 == 0x7a) {
          if ((lpMultiByteStr != (char *)0x0) && (_Size != 0)) {
            _memset(lpMultiByteStr,0,_Size);
          }
LAB_10935d74:
          pDVar2 = FUN_1092681e();
          *pDVar2 = 0x22;
          FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          if (local_8 == '\0') {
            return 0x22;
          }
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
          return 0x22;
        }
      }
      else if (_MbCh == (char *)0x0) {
        if (_SizeConverted != (int *)0x0) {
          *_SizeConverted = iVar3;
        }
        goto LAB_10935dab;
      }
    }
    pDVar2 = FUN_1092681e();
    *pDVar2 = 0x2a;
    pDVar2 = FUN_1092681e();
    DVar1 = *pDVar2;
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return DVar1;
}


// ==== 10935e21 _wctomb_s

/* Library Function - Single Match
    _wctomb_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl _wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh)

{
  errno_t eVar1;
  
  eVar1 = __wctomb_s_l(_SizeConverted,_MbCh,_SizeInBytes,_WCh,(_locale_t)0x0);
  return eVar1;
}


// ==== 10935e3c __wctomb_l

/* Library Function - Single Match
    __wctomb_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __wctomb_l(char *_MbCh,wchar_t _WCh,_locale_t _Locale)

{
  errno_t eVar1;
  localeinfo_struct local_18;
  int local_10;
  char local_c;
  int local_8;
  
  local_8 = -1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,_Locale);
  eVar1 = __wctomb_s_l(&local_8,_MbCh,(size_t)(local_18.locinfo)->locale_name[3],_WCh,&local_18);
  if (eVar1 != 0) {
    local_8 = -1;
  }
  if (local_c != '\0') {
    *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
  }
  return local_8;
}


// ==== 10935e8b _wctomb

/* Library Function - Single Match
    _wctomb
   
   Library: Visual Studio 2005 Release */

int __cdecl _wctomb(char *_MbCh,wchar_t _WCh)

{
  size_t _SizeInBytes;
  errno_t eVar1;
  _locale_t _Locale;
  int local_8;
  
  local_8 = -1;
  _Locale = (_locale_t)0x0;
  _SizeInBytes = ____mb_cur_max_func();
  eVar1 = __wctomb_s_l(&local_8,_MbCh,_SizeInBytes,_WCh,_Locale);
  if (eVar1 == 0) {
    return local_8;
  }
  return -1;
}


// ==== 10935ebb __isleadbyte_l

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


// ==== 10935ef1 _isleadbyte

/* Library Function - Single Match
    _isleadbyte
   
   Library: Visual Studio 2005 Release */

int __cdecl _isleadbyte(int _C)

{
  int iVar1;
  
  iVar1 = __isleadbyte_l(_C,(_locale_t)0x0);
  return iVar1;
}


// ==== 10936130 __aulldvrm

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


// ==== 109361c5 __validate_param_reuseA

/* Library Function - Single Match
    __validate_param_reuseA
   
   Library: Visual Studio 2005 Release */

bool __cdecl __validate_param_reuseA(int *param_1,int param_2,char param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (char)param_1[2];
  if ((cVar1 == 'p') || (param_3 == 'p')) {
    return cVar1 == param_3;
  }
  if ((cVar1 == 's') || (cVar1 == 'S')) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  if ((param_3 == 's') || (param_3 == 'S')) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (iVar3 != 0) {
    if (iVar3 != iVar2) {
      return false;
    }
    if (((param_1[3] & 0x810U) != 0) != ((param_4 & 0x810) != 0)) {
      return false;
    }
    return true;
  }
  if (iVar2 != 0) {
    return false;
  }
  if (cVar1 == 'd') {
LAB_10936266:
    iVar3 = 1;
  }
  else {
    if ((((((cVar1 != 'i') && (cVar1 != 'o')) && (cVar1 != 'u')) &&
         (((cVar1 != 'x' && (cVar1 != 'X')) &&
          ((param_3 != 'd' && ((param_3 != 'i' && (param_3 != 'o')))))))) && (param_3 != 'u')) &&
       ((param_3 != 'x' && (param_3 != 'X')))) goto LAB_109362a9;
    if ((cVar1 == 'd') ||
       ((((cVar1 == 'i' || (cVar1 == 'o')) || (cVar1 == 'u')) || ((cVar1 == 'x' || (cVar1 == 'X'))))
       )) goto LAB_10936266;
    iVar3 = 0;
  }
  if (((param_3 == 'd') || (param_3 == 'i')) ||
     ((param_3 == 'o' || (((param_3 == 'u' || (param_3 == 'x')) || (param_3 == 'X')))))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (((iVar3 != iVar2) || (((param_1[3] ^ param_4) & 0x10000) != 0)) ||
     (((param_1[3] ^ param_4) & 0x20) != 0)) {
    return false;
  }
LAB_109362a9:
  return *param_1 == param_2;
}


// ==== 109362ee write_char

/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2005 Release */

void __cdecl write_char(void)

{
  int *piVar1;
  byte in_AL;
  uint uVar2;
  FILE *in_ECX;
  int *unaff_ESI;
  
  if (((in_ECX->_flag & 0x40) == 0) || (in_ECX->_base != (char *)0x0)) {
    piVar1 = &in_ECX->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = __flsbuf((int)(char)in_AL,in_ECX);
    }
    else {
      *in_ECX->_ptr = in_AL;
      in_ECX->_ptr = in_ECX->_ptr + 1;
      uVar2 = (uint)in_AL;
    }
    if (uVar2 == 0xffffffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}


// ==== 10936321 write_multi_char

/* Library Function - Single Match
    _write_multi_char
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char();
  } while (*in_EAX != -1);
  return;
}


// ==== 10937327 write_char

/* Library Function - Single Match
    _write_char
   
   Library: Visual Studio 2005 Release */

void __cdecl write_char(void)

{
  int *piVar1;
  byte in_AL;
  uint uVar2;
  FILE *in_ECX;
  int *unaff_ESI;
  
  if (((in_ECX->_flag & 0x40) == 0) || (in_ECX->_base != (char *)0x0)) {
    piVar1 = &in_ECX->_cnt;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = __flsbuf((int)(char)in_AL,in_ECX);
    }
    else {
      *in_ECX->_ptr = in_AL;
      in_ECX->_ptr = in_ECX->_ptr + 1;
      uVar2 = (uint)in_AL;
    }
    if (uVar2 == 0xffffffff) {
      *unaff_ESI = -1;
      return;
    }
  }
  *unaff_ESI = *unaff_ESI + 1;
  return;
}


// ==== 1093735a write_multi_char

/* Library Function - Single Match
    _write_multi_char
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __cdecl write_multi_char(undefined4 param_1,int param_2)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char();
  } while (*in_EAX != -1);
  return;
}


// ==== 10937d78 FUN_10937d78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10937d78(undefined4 param_1)

{
  _DAT_109a14e0 = param_1;
  return;
}


// ==== 10937e86 x_ismbbtype_l

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
    if (uVar1 == 0) goto LAB_10937ec8;
  }
  iVar2 = 1;
LAB_10937ec8:
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar2;
}


// ==== 10938044 __ismbblead

/* Library Function - Single Match
    __ismbblead
   
   Library: Visual Studio 2005 Release */

int __cdecl __ismbblead(uint _C)

{
  int iVar1;
  
  iVar1 = x_ismbbtype_l((localeinfo_struct *)0x0,_C,0,4);
  return iVar1;
}


// ==== 1093807f __ismbbkana_l

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


// ==== 109380e0 __putwch_nolock

/* Library Function - Single Match
    __putwch_nolock
   
   Library: Visual Studio 2005 Release */

wint_t __cdecl __putwch_nolock(wchar_t _WCh)

{
  wint_t wVar1;
  BOOL BVar2;
  DWORD DVar3;
  UINT CodePage;
  wchar_t *lpWideCharStr;
  int cchWideChar;
  CHAR *lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  DWORD local_14;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  if (DAT_1096e500 != 0) {
    if (DAT_1096e744 == (HANDLE)0xfffffffe) {
      ___initconout();
    }
    if (DAT_1096e744 == (HANDLE)0xffffffff) goto LAB_10938189;
    BVar2 = WriteConsoleW(DAT_1096e744,&_WCh,1,&local_14,(LPVOID)0x0);
    if (BVar2 != 0) {
      DAT_1096e500 = 1;
      goto LAB_10938189;
    }
    if ((DAT_1096e500 != 2) || (DVar3 = GetLastError(), DVar3 != 0x78)) goto LAB_10938189;
    DAT_1096e500 = 0;
  }
  lpUsedDefaultChar = (LPBOOL)0x0;
  lpDefaultChar = (LPCSTR)0x0;
  cbMultiByte = 5;
  lpMultiByteStr = local_10;
  cchWideChar = 1;
  lpWideCharStr = &_WCh;
  DVar3 = 0;
  CodePage = GetConsoleOutputCP();
  DVar3 = WideCharToMultiByte(CodePage,DVar3,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  if (DAT_1096e744 != (HANDLE)0xffffffff) {
    WriteConsoleA(DAT_1096e744,local_10,DVar3,&local_14,(LPVOID)0x0);
  }
LAB_10938189:
  wVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return wVar1;
}


// ==== 10938283 __mbtowc_l

/* Library Function - Single Match
    __mbtowc_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale)

{
  wchar_t *pwVar1;
  int iVar2;
  DWORD *pDVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  if ((_SrcCh != (char *)0x0) && (_SrcSizeInBytes != 0)) {
    if (*_SrcCh != '\0') {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
      if ((local_14.locinfo)->lc_category[0].wlocale != (wchar_t *)0x0) {
        iVar2 = __isleadbyte_l((uint)(byte)*_SrcCh,&local_14);
        if (iVar2 == 0) {
          iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,1,_DstCh,
                                      (uint)(_DstCh != (wchar_t *)0x0));
          if (iVar2 != 0) goto LAB_109382ce;
        }
        else {
          pwVar1 = (local_14.locinfo)->locale_name[3];
          if ((((1 < (int)pwVar1) && ((int)pwVar1 <= (int)_SrcSizeInBytes)) &&
              (iVar2 = MultiByteToWideChar((local_14.locinfo)->lc_codepage,9,_SrcCh,(int)pwVar1,
                                           _DstCh,(uint)(_DstCh != (wchar_t *)0x0)), iVar2 != 0)) ||
             (((local_14.locinfo)->locale_name[3] <= _SrcSizeInBytes && (_SrcCh[1] != '\0')))) {
            pwVar1 = (local_14.locinfo)->locale_name[3];
            if (local_8 == '\0') {
              return (int)pwVar1;
            }
            *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
            return (int)pwVar1;
          }
        }
        pDVar3 = FUN_1092681e();
        *pDVar3 = 0x2a;
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return -1;
      }
      if (_DstCh != (wchar_t *)0x0) {
        *_DstCh = (ushort)(byte)*_SrcCh;
      }
LAB_109382ce:
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      return 1;
    }
    if (_DstCh != (wchar_t *)0x0) {
      *_DstCh = L'\0';
    }
  }
  return 0;
}


// ==== 10938396 _mbtowc

/* Library Function - Single Match
    _mbtowc
   
   Library: Visual Studio 2005 Release */

int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  int iVar1;
  
  iVar1 = __mbtowc_l(_DstCh,_SrcCh,_SrcSizeInBytes,(_locale_t)0x0);
  return iVar1;
}


// ==== 109383dc __get_lc_time

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


// ==== 109387f5 ___free_lc_time

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


// ==== 10938985 ___init_time

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
    _Memory = &PTR_DAT_1096e510;
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
  if (ppuVar1 != &PTR_DAT_1096e510) {
    InterlockedDecrement((LONG *)(ppuVar1 + 0x2d));
  }
  *ppiVar3 = (int *)_Memory;
  return 0;
}


// ==== 10938a2b ___free_lconv_num

/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_num(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_1096e5d0) {
      _free((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_1096e5d4) {
      _free((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_1096e5d8) {
      _free((undefined *)param_1[2]);
    }
  }
  return;
}


// ==== 10938a6b ___init_numeric

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
    _LocInfo = (threadlocinfo *)&PTR_DAT_1096e5d0;
LAB_10938bd5:
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
          _Address->refcount = (int)PTR_DAT_1096e5d0;
          _Address->lc_codepage = (uint)PTR_DAT_1096e5d4;
          local_8 = (wchar_t *)0x0;
          _Address->lc_collate_cp = (uint)PTR_DAT_1096e5d8;
        }
        else {
          local_8 = __malloc_crt(4);
          if (local_8 == (wchar_t *)0x0) {
            iVar7 = 1;
LAB_10938afb:
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
            goto LAB_10938afb;
          }
          pcVar5 = (char *)*local_14;
          while (*pcVar5 != '\0') {
            cVar2 = *pcVar5;
            if ((cVar2 < '0') || ('9' < cVar2)) {
              pcVar9 = pcVar5;
              if (cVar2 != ';') goto LAB_10938b85;
              do {
                pcVar1 = pcVar9 + 1;
                *pcVar9 = *pcVar1;
                pcVar9 = pcVar1;
              } while (*pcVar1 != '\0');
            }
            else {
              *pcVar5 = cVar2 + -0x30;
LAB_10938b85:
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
        goto LAB_10938bd5;
      }
      _free(_Address);
    }
    iVar7 = 1;
  }
  return iVar7;
}


// ==== 10938c66 ___free_lconv_mon

/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2005 Release */

void __cdecl ___free_lconv_mon(int param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0xc) != PTR_DAT_1096e5dc) {
      _free(*(undefined **)(param_1 + 0xc));
    }
    if (*(undefined **)(param_1 + 0x10) != PTR_DAT_1096e5e0) {
      _free(*(undefined **)(param_1 + 0x10));
    }
    if (*(undefined **)(param_1 + 0x14) != PTR_DAT_1096e5e4) {
      _free(*(undefined **)(param_1 + 0x14));
    }
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_1096e5e8) {
      _free(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x1c) != PTR_DAT_1096e5ec) {
      _free(*(undefined **)(param_1 + 0x1c));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_1096e5f0) {
      _free(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x24) != PTR_DAT_1096e5f4) {
      _free(*(undefined **)(param_1 + 0x24));
    }
  }
  return;
}


// ==== 10938cef ___init_monetary

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
    _Memory = &PTR_DAT_1096e5d0;
LAB_10938f56:
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
          ppuVar22 = &PTR_DAT_1096e5d0;
          ppuVar23 = _Memory;
          for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 + -1) {
            *ppuVar23 = *ppuVar22;
            ppuVar22 = ppuVar22 + 1;
            ppuVar23 = ppuVar23 + 1;
          }
LAB_10938f21:
          puVar18 = &_LocInfo[1].lc_codepage;
          *_Memory = *(undefined **)*puVar18;
          _Memory[1] = *(undefined **)(*puVar18 + 4);
          _Memory[2] = *(undefined **)(*puVar18 + 8);
          local_c[0] = L'\x01';
          local_c[1] = L'\0';
          if (local_8 != (undefined4 *)0x0) {
            *local_8 = 1;
          }
          goto LAB_10938f56;
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
                if (cVar2 != ';') goto LAB_10938ef6;
                do {
                  pcVar1 = pcVar21 + 1;
                  *pcVar21 = *pcVar1;
                  pcVar21 = pcVar1;
                } while (*pcVar1 != '\0');
              }
              else {
                *pcVar17 = cVar2 + -0x30;
LAB_10938ef6:
                pcVar17 = pcVar17 + 1;
              }
            }
            goto LAB_10938f21;
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


// ==== 10938fb3 ___init_ctype

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
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
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
    _LocInfo[1].lc_category[0].locale = " ";
    _LocInfo[1].lc_category[0].wlocale = (wchar_t *)&DAT_109614c8;
    _LocInfo[1].lc_category[0].refcount = (int *)&DAT_10961648;
    _LocInfo->locale_name[3] = (wchar_t *)0x1;
    goto LAB_10939339;
  }
  if ((_LocInfo->lc_codepage == 0) &&
     (iVar3 = ___getlocaleinfo(&local_4c,0,
                               (LPCWSTR)(uint)*(ushort *)&_LocInfo->lc_category[2].locale,0x1004,
                               &_LocInfo->lc_codepage), iVar3 != 0)) {
LAB_109392cc:
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
        || (local_2c == (void *)0x0)))) goto LAB_109392cc;
    *local_30 = 0;
    iVar3 = 0;
    do {
      local_24[iVar3] = (CHAR)iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
    BVar4 = GetCPInfo(_LocInfo->lc_codepage,&local_1c);
    if ((BVar4 == 0) || (5 < local_1c.MaxCharSize)) goto LAB_109392cc;
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
       iVar3 == 0)) goto LAB_109392cc;
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
LAB_10939339:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


// ==== 10939348 ____mb_cur_max_func

/* Library Function - Single Match
    ____mb_cur_max_func
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl ____mb_cur_max_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_1096df08) && ((p_Var1->_ownlocale & DAT_1096e4e0) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return (int)ptVar2->locale_name[3];
}


// ==== 10939387 ____lc_codepage_func

/* Library Function - Single Match
    ____lc_codepage_func
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

UINT __cdecl ____lc_codepage_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_1096df08) && ((p_Var1->_ownlocale & DAT_1096e4e0) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return ptVar2->lc_codepage;
}


// ==== 109393fc __Getdays_l

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


// ==== 10939503 __Getmonths_l

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


// ==== 1093960a __Gettnames_l

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


// ==== 10939968 FUN_10939968

void __fastcall FUN_10939968(int *param_1,char *param_2)

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


// ==== 109399be FID_conflict:__store_num

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


// ==== 10939a37 FUN_10939a37

undefined4 __fastcall
FUN_10939a37(int *param_1,int *param_2,_locale_t param_3,uint *param_4,int param_5,int param_6)

{
  int iVar1;
  char in_AL;
  DWORD *pDVar2;
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
        goto LAB_10939c82;
      }
LAB_10939bea:
      pDVar2 = FUN_1092681e();
      goto LAB_10939d12;
    }
    if (in_AL < 'J') {
      if (in_AL == 'I') {
        if ((-1 < param_2[2]) && (param_2[2] < 0x18)) {
LAB_10939c7f:
          uVar8 = 2;
LAB_10939c82:
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
            goto LAB_10939e0d;
          }
        }
        else if (in_AL == 'B') {
          iVar7 = param_2[4];
          if ((-1 < iVar7) && (iVar7 < 0xc)) {
            pcVar4 = *(char **)(param_5 + 0x68 + iVar7 * 4);
            goto LAB_10939e0d;
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
            goto LAB_10939a9b;
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
LAB_10939cc9:
              iVar7 = 2;
LAB_10939ccd:
              iVar7 = FUN_10939e1d(param_3,iVar7,(undefined2 *)param_2,param_1,param_4,param_5);
              if (iVar7 == 0) {
                return 0;
              }
              return 1;
            }
            iVar7 = param_2[6];
          }
          if ((((-1 < iVar7) && (iVar7 < 7)) && (-1 < param_2[7])) && (param_2[7] < 0x16e))
          goto LAB_10939c7f;
          goto LAB_10939d0d;
        }
        iVar7 = *param_2;
      }
      if (-1 < iVar7) {
        bVar6 = SBORROW4(iVar7,0x3b);
        iVar7 = iVar7 + -0x3b;
        bVar5 = iVar7 == 0;
LAB_10939a9b:
        if (bVar5 || bVar6 != iVar7 < 0) goto LAB_10939c7f;
      }
    }
  }
  else if (in_AL < 'n') {
    if (in_AL == 'm') {
      if ((-1 < param_2[4]) && (param_2[4] < 0xc)) goto LAB_10939c7f;
    }
    else {
      if (in_AL == 'Z') {
LAB_10939d64:
        ___tzset();
        ppuVar3 = FUN_10943608();
        pcVar4 = ppuVar3[param_2[8] != 0];
LAB_10939e0d:
        FUN_10939968(param_1,pcVar4);
        return 1;
      }
      if (in_AL == 'a') {
        iVar7 = param_2[6];
        if ((-1 < iVar7) && (iVar7 < 7)) {
          pcVar4 = *(char **)(param_5 + iVar7 * 4);
          goto LAB_10939e0d;
        }
      }
      else if (in_AL == 'b') {
        iVar7 = param_2[4];
        if ((-1 < iVar7) && (iVar7 < 0xc)) {
          pcVar4 = *(char **)(param_5 + 0x38 + iVar7 * 4);
          goto LAB_10939e0d;
        }
      }
      else {
        if (in_AL == 'c') {
          iVar7 = FUN_10939e1d(param_3,(uint)(param_6 != 0),(undefined2 *)param_2,param_1,param_4,
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
          goto LAB_10939cc9;
        }
        if (in_AL == 'd') {
          if ((param_2[3] < 1) || (0x1f < param_2[3])) goto LAB_10939bea;
          goto LAB_10939c7f;
        }
        if (in_AL != 'j') {
          return 0;
        }
        if ((-1 < param_2[7]) && (param_2[7] < 0x16e)) {
          uVar8 = 3;
          goto LAB_10939c82;
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
      goto LAB_10939e0d;
    }
  }
  else if (in_AL == 'w') {
    if ((-1 < param_2[6]) && (param_2[6] < 7)) {
      uVar8 = 1;
      goto LAB_10939c82;
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
      goto LAB_10939ccd;
    }
    if (in_AL != 'y') {
      if (in_AL != 'z') {
        return 0;
      }
      goto LAB_10939d64;
    }
    if (-1 < param_2[5]) goto LAB_10939c7f;
  }
LAB_10939d0d:
  pDVar2 = FUN_1092681e();
LAB_10939d12:
  *pDVar2 = 0x16;
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0;
}


// ==== 10939e1d FUN_10939e1d

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void __cdecl
FUN_10939e1d(_locale_t param_1,int param_2,undefined2 *param_3,int *param_4,uint *param_5,
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
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
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
LAB_10939efd:
          puVar6 = puVar2 + 2;
        }
      }
      else {
        puVar2 = _malloc(local_14 + 8U);
        puVar6 = (undefined4 *)0x0;
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0xdddd;
          goto LAB_10939efd;
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
LAB_10939f4f:
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  cVar1 = *_Str1;
joined_r0x10939f65:
  if ((cVar1 == (code)0x0) || (*param_5 == 0)) goto LAB_10939f4f;
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
joined_r0x1093a0e8:
        if ((uVar4 != 1) && (uVar4 != 2)) {
joined_r0x1093a0ee:
          if (uVar4 != 3) goto LAB_10939fb9;
        }
      }
      goto LAB_1093a250;
    }
    if (iVar3 != 0x27) {
      if (iVar3 == 0x41) {
LAB_1093a041:
        iVar3 = ___ascii_stricmp((char *)_Str1,"am/pm");
        if (iVar3 == 0) {
          local_10 = _Str1 + 5;
        }
        else {
          iVar3 = ___ascii_stricmp((char *)_Str1,"a/p");
          if (iVar3 == 0) {
            local_10 = _Str1 + 3;
          }
        }
      }
      else if (iVar3 == 0x48) {
        if (uVar4 != 0) goto joined_r0x1093a240;
        local_c = (undefined4 *)0x1;
      }
      else {
        if (iVar3 != 0x4d) {
          if (iVar3 != 0x61) goto LAB_10939fb9;
          goto LAB_1093a041;
        }
        if (uVar4 != 0) goto joined_r0x1093a0e8;
        local_c = (undefined4 *)0x1;
      }
      goto LAB_1093a250;
    }
    _Str1 = _Str1 + uVar5;
    if ((uVar5 & 1) != 0) {
      cVar1 = *_Str1;
      if (cVar1 == (code)0x0) goto LAB_10939f4f;
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
          if (*pcVar7 == (code)0x0) goto LAB_10939f4f;
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
joined_r0x1093a240:
        if (uVar5 != 2) {
LAB_10939fb9:
          iVar3 = __isleadbyte_l(iVar3,param_1);
          pcVar7 = _Str1;
          if ((iVar3 != 0) && (1 < *param_5)) {
            pcVar7 = _Str1 + 1;
            if (*pcVar7 == (code)0x0) goto LAB_10939f4f;
            *(code *)*param_4 = *_Str1;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          *(code *)*param_4 = *pcVar7;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
          _Str1 = pcVar7 + 1;
          goto LAB_10939ff0;
        }
      }
    }
    else if (iVar3 == 0x6d) {
      if (uVar4 != 0) goto joined_r0x1093a240;
      local_c = (undefined4 *)0x1;
    }
    else if (iVar3 == 0x73) {
      if (uVar4 != 0) goto joined_r0x1093a240;
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
            if (*pcVar8 == '\0') goto LAB_10939f4f;
            *(char *)*param_4 = *pcVar9;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          *(char *)*param_4 = *pcVar8;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
          _Str1 = local_10;
          goto LAB_10939ff0;
        }
        while ((_Str1 = local_10, *pcVar9 != '\0' && (*param_5 != 0))) {
          iVar3 = __isleadbyte_l((int)*pcVar9,param_1);
          pcVar8 = pcVar9;
          if ((iVar3 != 0) && (1 < *param_5)) {
            pcVar8 = pcVar9 + 1;
            if (*pcVar8 == '\0') goto LAB_10939f4f;
            *(char *)*param_4 = *pcVar9;
            *param_4 = *param_4 + 1;
            *param_5 = *param_5 - 1;
          }
          *(char *)*param_4 = *pcVar8;
          *param_4 = *param_4 + 1;
          pcVar9 = pcVar8 + 1;
          *param_5 = *param_5 - 1;
        }
        goto LAB_10939ff0;
      }
      if (iVar3 != 0x79) goto LAB_10939fb9;
      if (uVar4 != 1) goto joined_r0x1093a0ee;
    }
LAB_1093a250:
    iVar3 = FUN_10939a37(param_4,(int *)param_3,param_1,param_5,param_6,(int)local_c);
    _Str1 = local_10;
    if (iVar3 == 0) goto LAB_10939f4f;
  }
LAB_10939ff0:
  cVar1 = *_Str1;
  goto joined_r0x10939f65;
}


// ==== 1093a27a __Strftime_l

/* Library Function - Single Match
    __Strftime_l
   
   Library: Visual Studio 2005 Release */

int __cdecl
__Strftime_l(char *param_1,uint param_2,char *param_3,int *param_4,int *param_5,
            localeinfo_struct *param_6)

{
  char cVar1;
  uint uVar2;
  DWORD *pDVar3;
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
    pDVar3 = FUN_1092681e();
    *pDVar3 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_18 != '\0') {
      *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
    }
    return 0;
  }
  if (param_2 == 0) {
    pDVar3 = FUN_1092681e();
    *pDVar3 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
            pDVar3 = FUN_1092681e();
            *pDVar3 = 0x16;
            goto LAB_1093a416;
          }
          pcVar6 = pcVar5 + 1;
          cVar1 = *pcVar6;
          if (cVar1 == '#') {
            pcVar6 = pcVar5 + 2;
          }
          iVar4 = FUN_10939a37((int *)&param_1,param_4,&local_24,&local_8,(int)local_10,
                               (uint)(cVar1 == '#'));
          if (iVar4 == 0) {
            if (local_8 != 0) {
              local_c = 1;
            }
            goto LAB_1093a3c7;
          }
        }
        else {
          iVar4 = __isleadbyte_l((int)cVar1,&local_24);
          pcVar6 = pcVar5;
          if ((iVar4 != 0) && (1 < local_8)) {
            pcVar6 = pcVar5 + 1;
            if (*pcVar6 == '\0') {
              local_c = 1;
              goto LAB_1093a3c7;
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
LAB_1093a3c7:
    *local_14 = '\0';
    if ((local_c == 0) && (local_8 == 0)) {
      pDVar3 = FUN_1092681e();
      *pDVar3 = 0x22;
      goto LAB_1093a416;
    }
  }
  pDVar3 = FUN_1092681e();
  *pDVar3 = 0x16;
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_1093a416:
  if (local_18 != '\0') {
    *(uint *)(local_1c + 0x70) = *(uint *)(local_1c + 0x70) & 0xfffffffd;
  }
  return 0;
}


// ==== 1093a429 __strftime_l

/* Library Function - Single Match
    __strftime_l
   
   Library: Visual Studio 2005 Release */

size_t __cdecl __strftime_l(char *_Buf,size_t _Max_size,char *_Format,tm *_Tm,_locale_t _Locale)

{
  size_t sVar1;
  
  sVar1 = __Strftime_l(_Buf,_Max_size,_Format,&_Tm->tm_sec,(int *)0x0,_Locale);
  return sVar1;
}


// ==== 1093a464 __Strftime

/* Library Function - Single Match
    __Strftime
   
   Library: Visual Studio 2005 Release */

size_t __cdecl __Strftime(char *param_1,size_t _Maxsize,char *param_3,tm *param_4,void *param_5)

{
  size_t sVar1;
  
  sVar1 = __Strftime_l(param_1,_Maxsize,param_3,&param_4->tm_sec,param_5,(localeinfo_struct *)0x0);
  return sVar1;
}


// ==== 1093a4b0 _strcspn

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


// ==== 1093a4f6 _TranslateName

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


// ==== 1093a56a _ProcessCodePage

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
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  if ((param_1 == (CHAR *)0x0) || (*param_1 == '\0')) {
LAB_1093a5b2:
    LCType = 0x1004;
LAB_1093a5bd:
    iVar1 = GetLocaleInfoA(*(LCID *)(unaff_EDI + 0x1c),LCType,local_10,8);
    if (iVar1 == 0) goto LAB_1093a5d4;
    param_1 = local_10;
  }
  else {
    iVar1 = _strcmp(param_1,"ACP");
    if (iVar1 == 0) goto LAB_1093a5b2;
    iVar1 = _strcmp(param_1,"OCP");
    if (iVar1 == 0) {
      LCType = 0xb;
      goto LAB_1093a5bd;
    }
  }
  _atol(param_1);
LAB_1093a5d4:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1093a5e1 _TestDefaultCountry

/* Library Function - Single Match
    _TestDefaultCountry
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl _TestDefaultCountry(short param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == *(short *)((int)&DAT_10962048 + uVar1)) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x14);
  return 1;
}


// ==== 1093a5ff _LcidFromHexString

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


// ==== 1093a631 _GetPrimaryLen

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


// ==== 1093a64c _CountryEnumProc@4

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
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
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


// ==== 1093a6e2 _TestDefaultLanguage

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
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
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


// ==== 1093a754 _LangCountryEnumProc@4

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
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  this = &p_Var2->_setloc_data;
  Locale = _LcidFromHexString(extraout_ECX,param_1);
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar3 == 0) {
LAB_1093a7a5:
    (p_Var2->_setloc_data).iLocState = 0;
    goto LAB_1093a913;
  }
  iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchCountry,local_80);
  if (iVar3 == 0) {
    iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002
                                  ) + 0x1001,local_80,0x78);
    if (iVar3 == 0) goto LAB_1093a7a5;
    iVar3 = __stricmp((char *)this->pchLanguage,local_80);
    if (iVar3 == 0) {
      piVar1 = &(p_Var2->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 0x304;
      (p_Var2->_setloc_data)._cachecp = Locale;
LAB_1093a855:
      *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
    }
    else if (((p_Var2->_setloc_data).iLocState & 2) == 0) {
      sVar4 = (p_Var2->_setloc_data).iPrimaryLen;
      if ((sVar4 == 0) || (iVar3 = __strnicmp((char *)this->pchLanguage,local_80,sVar4), iVar3 != 0)
         ) {
        if ((((p_Var2->_setloc_data).iLocState & 1U) == 0) &&
           (iVar3 = _TestDefaultCountry((short)Locale), iVar3 != 0)) {
          (p_Var2->_setloc_data).iLocState = extraout_EDX | 1;
          goto LAB_1093a855;
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
  if (((p_Var2->_setloc_data).iLocState & 0x300U) == 0x300) goto LAB_1093a913;
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) goto LAB_1093a7a5;
  iVar3 = __stricmp((char *)this->pchLanguage,local_80);
  if (iVar3 == 0) {
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x200;
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      if (((p_Var2->_setloc_data).iPrimaryLen != 0) &&
         (sVar4 = _strlen((char *)this->pchLanguage), sVar4 == (p_Var2->_setloc_data).iPrimaryLen))
      {
        iVar3 = 1;
        goto LAB_1093a8eb;
      }
      goto LAB_1093a8f9;
    }
    (p_Var2->_setloc_data).iLocState = (p_Var2->_setloc_data).iLocState | 0x100;
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)this->pchLanguage,local_80), iVar3 != 0)) goto LAB_1093a913;
    iVar3 = 0;
LAB_1093a8eb:
    iVar3 = _TestDefaultLanguage(this,Locale,iVar3);
    if (iVar3 == 0) goto LAB_1093a913;
LAB_1093a8f9:
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x100;
  }
  if ((p_Var2->_setloc_data)._cachecp == 0) {
    (p_Var2->_setloc_data)._cachecp = Locale;
  }
LAB_1093a913:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1093a924 _LanguageEnumProc@4

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
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  this = &p_Var2->_setloc_data;
  Locale = _LcidFromHexString(extraout_ECX,param_1);
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) {
    (p_Var2->_setloc_data).iLocState = 0;
    goto LAB_1093a9d3;
  }
  iVar3 = __stricmp((char *)this->pchLanguage,local_80);
  if (iVar3 == 0) {
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      iVar3 = 1;
      goto LAB_1093a9b0;
    }
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)this->pchLanguage,local_80), iVar3 != 0)) goto LAB_1093a9d3;
    iVar3 = 0;
LAB_1093a9b0:
    iVar3 = _TestDefaultLanguage(this,Locale,iVar3);
    if (iVar3 == 0) goto LAB_1093a9d3;
  }
  piVar1 = &(p_Var2->_setloc_data).iLocState;
  *piVar1 = *piVar1 | 4;
  (p_Var2->_setloc_data)._cachecp = Locale;
  *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
LAB_1093a9d3:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1093aa0f _GetLcidFromLangCountry

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


// ==== 1093aa74 _GetLcidFromLanguage

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


// ==== 1093aab0 ___get_qualified_locale

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
LAB_1093ab88:
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
      _TranslateName(0x10961f90,0x16,ppwVar2);
    }
    (p_Var5->_setloc_data).iLocState = 0;
    if ((p_Var11->pchLanguage == (wchar_t *)0x0) || ((char)*p_Var11->pchLanguage == '\0')) {
      pwVar3 = *ppwVar2;
      if ((pwVar3 == (wchar_t *)0x0) || ((char)*pwVar3 == '\0')) {
        (p_Var5->_setloc_data).iLocState = 0x104;
        goto LAB_1093ab88;
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
      if ((p_Var5->_setloc_data).iLocState != 0) goto LAB_1093ab9d;
      bVar4 = _TranslateName(0x10961d88,0x40,&p_Var11->pchLanguage);
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
LAB_1093ab9d:
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
      eVar9 = _strcpy_s((char *)_LpOutStr,0x40,"Norwegian-Nynorsk");
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


// ==== 1093d885 __crtGetStringTypeA_stat

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
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  lpWideCharStr = (LPCWSTR)0x0;
  local_c = in_ECX;
  if (DAT_109a14e8 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_109a14e8 = 2;
      }
      goto LAB_1093d8de;
    }
    DAT_109a14e8 = 1;
  }
  else {
LAB_1093d8de:
    if ((DAT_109a14e8 == 2) || (DAT_109a14e8 == 0)) {
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
      goto LAB_1093da2b;
    }
    if (DAT_109a14e8 != 1) goto LAB_1093da2b;
  }
  local_c = (int *)0x0;
  if (param_5 == (ushort *)0x0) {
    param_5 = *(ushort **)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar((UINT)param_5,(uint)(param_7 != 0) * 8 + 1,(LPCSTR)param_2,
                                    (int)param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1093da2b;
  if ((0 < (int)cchWideChar) && (cchWideChar < 0x7ffffff1)) {
    _Size = cchWideChar * 2 + 8;
    if (_Size < 0x401) {
      puVar3 = (undefined4 *)&stack0xffffffe8;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe8;
      if (&stack0x00000000 != (undefined1 *)0x18) {
LAB_1093d96e:
        lpWideCharStr = (LPCWSTR)(puVar3 + 2);
      }
    }
    else {
      puVar3 = _malloc(_Size);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_1093d96e;
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
LAB_1093da2b:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}


// ==== 1093da3d ___crtGetStringTypeA

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


// ==== 1093da7d _strncmp

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
          goto LAB_1093db37;
        }
        if ((pbVar1[1] == 0) || (pbVar1[1] != pbVar3[1])) {
          uVar2 = (uint)pbVar1[1];
          uVar4 = (uint)pbVar3[1];
          goto LAB_1093db37;
        }
        if ((pbVar1[2] == 0) || (pbVar1[2] != pbVar3[2])) {
          uVar2 = (uint)pbVar1[2];
          uVar4 = (uint)pbVar3[2];
          goto LAB_1093db37;
        }
        if ((pbVar1[3] == 0) || (pbVar1[3] != pbVar3[3])) {
          uVar2 = (uint)pbVar1[3];
          uVar4 = (uint)pbVar3[3];
          goto LAB_1093db37;
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
LAB_1093db37:
        return uVar2 - uVar4;
      }
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
    }
  }
  return 0;
}


// ==== 1093db40 _strpbrk

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


// ==== 1093db9a __crtLCMapStringA_stat

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
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  if (DAT_109a14ec == 0) {
    iVar3 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar3 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x78) {
        DAT_109a14ec = 2;
      }
    }
    else {
      DAT_109a14ec = 1;
    }
  }
  pcVar5 = (char *)param_3;
  pcVar8 = param_4;
  if (0 < (int)param_4) {
    do {
      pcVar8 = pcVar8 + -1;
      if (*pcVar5 == '\0') goto LAB_1093dc09;
      pcVar5 = pcVar5 + 1;
    } while (pcVar8 != (char *)0x0);
    pcVar8 = (char *)0xffffffff;
LAB_1093dc09:
    pcVar5 = param_4 + -(int)pcVar8;
    bVar2 = (int)(pcVar5 + -1) < (int)param_4;
    param_4 = pcVar5 + -1;
    if (bVar2) {
      param_4 = pcVar5;
    }
  }
  if ((DAT_109a14ec == 2) || (DAT_109a14ec == 0)) {
    local_10 = (LPCWSTR)0x0;
    local_14 = (void *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(*in_ECX + 4);
    }
    UVar7 = ___ansicp((LCID)param_1);
    if (UVar7 == 0xffffffff) goto LAB_1093df2a;
    if (UVar7 == param_7) {
      LCMapStringA((LCID)param_1,param_2,(LPCSTR)param_3,(int)param_4,(LPSTR)param_5,(int)param_6);
    }
    else {
      local_10 = (LPCWSTR)___convertcp(param_7,UVar7,(char *)param_3,(uint *)&param_4,(LPSTR)0x0,0);
      if (local_10 == (LPCWSTR)0x0) goto LAB_1093df2a;
      local_c = LCMapStringA((LCID)param_1,param_2,(LPCSTR)local_10,(int)param_4,(LPSTR)0x0,0);
      if (local_c != 0) {
        if (((int)local_c < 1) || (0xffffffe0 < local_c)) {
          pcVar5 = (char *)0x0;
        }
        else if (local_c + 8 < 0x401) {
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_1093df07;
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
LAB_1093df07:
    if (local_10 != (LPCWSTR)0x0) {
      _free(local_10);
    }
    if ((local_14 != (void *)0x0) && ((void *)param_5 != local_14)) {
      _free(local_14);
    }
    goto LAB_1093df2a;
  }
  if (DAT_109a14ec != 1) goto LAB_1093df2a;
  local_c = 0;
  if (param_7 == 0) {
    param_7 = *(int *)(*in_ECX + 4);
  }
  cchWideChar = MultiByteToWideChar(param_7,(uint)(param_8 != 0) * 8 + 1,(LPCSTR)param_3,
                                    (int)param_4,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_1093df2a;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    uVar1 = cchWideChar * 2 + 8;
    if (uVar1 < 0x401) {
      puVar6 = (undefined4 *)&stack0xffffffdc;
      local_10 = (LPCWSTR)&stack0xffffffdc;
      if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_1093dcb1:
        local_10 = (LPCWSTR)(puVar6 + 2);
      }
    }
    else {
      puVar6 = _malloc(uVar1);
      local_10 = (LPCWSTR)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_1093dcb1;
      }
    }
  }
  if (local_10 == (LPCWSTR)0x0) goto LAB_1093df2a;
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
          if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_1093ddc0;
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
LAB_1093ddc0:
  __freea(local_10);
LAB_1093df2a:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}


// ==== 1093df3c ___crtLCMapStringA

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


// ==== 1093df80 __allmul

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


// ==== 1093dfb4 _atol

/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2005 Release */

long __cdecl _atol(char *_Str)

{
  long lVar1;
  
  lVar1 = _strtol(_Str,(char **)0x0,10);
  return lVar1;
}


// ==== 1093e00a __isctype_l

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


// ==== 1093e1bf __RoundMan

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
      if (2 < iVar4) goto LAB_1093e287;
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
LAB_1093e287:
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


// ==== 1093e2ed __ShrMan

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


// ==== 1093e385 __ld12cvt

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
      if (local_24[iVar3] != 0) goto LAB_1093e4f5;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
LAB_1093e86b:
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
          if (param_1 < (ushort *)*puVar7) goto LAB_1093e4aa;
          bVar14 = param_1 < puVar9;
          do {
            local_8 = (ushort *)0x0;
            if (!bVar14) goto LAB_1093e4b1;
LAB_1093e4aa:
            do {
              local_8 = (ushort *)0x1;
LAB_1093e4b1:
              iVar3 = iVar3 + -1;
              *puVar7 = (uint)param_1;
              if ((iVar3 < 0) || (local_8 == (ushort *)0x0)) {
                param_1 = local_8;
                goto LAB_1093e4bf;
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
LAB_1093e4bf:
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
LAB_1093e4f5:
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
          goto LAB_1093e86d;
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
        goto LAB_1093e86b;
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
          if (2 < iVar12) goto LAB_1093e660;
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
LAB_1093e660:
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
LAB_1093e86d:
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


// ==== 1093e8ae FID_conflict:__ld12tod

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
        goto LAB_1093edad;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_1096e618 - 1;
    iVar4 = (int)(DAT_1096e618 + ((int)DAT_1096e618 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_1096e618 & 0x8000001f;
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
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_1093e9e1;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_1093e9e8;
LAB_1093e9e1:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_1093e9e8:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_1093e9f6;
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
LAB_1093e9f6:
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
    if (iVar12 < (int)(DAT_1096e614 - DAT_1096e618)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_1096e614 < iVar12) {
        if (iVar12 < DAT_1096e610) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_1096e624;
          iVar2 = (int)(DAT_1096e61c + ((int)DAT_1096e61c >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1096e61c & 0x8000001f;
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
          iVar12 = (int)(DAT_1096e61c + ((int)DAT_1096e61c >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1096e61c & 0x8000001f;
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
          iVar12 = DAT_1096e624 + DAT_1096e610;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_1093edad;
      }
      local_14 = DAT_1096e614 - local_14;
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
      iVar2 = DAT_1096e618 - 1;
      iVar12 = (int)(DAT_1096e618 + ((int)DAT_1096e618 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_1096e618 & 0x8000001f;
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
          if (2 < iVar12) goto LAB_1093eb99;
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
LAB_1093eb99:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_1096e61c + 1;
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
LAB_1093edad:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_1096e61c & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_1096e620 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_1096e620 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}


// ==== 1093edf0 FID_conflict:__ld12tod

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
        goto LAB_1093f2ef;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_1096e630 - 1;
    iVar4 = (int)(DAT_1096e630 + ((int)DAT_1096e630 >> 0x1f & 0x1fU)) >> 5;
    uVar8 = DAT_1096e630 & 0x8000001f;
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
          if (_Ifp < (_LDBL12 *)*puVar6) goto LAB_1093ef23;
          bVar14 = _Ifp < p_Var9;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_1093ef2a;
LAB_1093ef23:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_1093ef2a:
              iVar4 = iVar4 + -1;
              *puVar6 = (uint)_Ifp;
              if ((iVar4 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_1093ef38;
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
LAB_1093ef38:
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
    if (iVar12 < (int)(DAT_1096e62c - DAT_1096e630)) {
      local_24[0] = 0;
      local_24[1] = 0;
    }
    else {
      if (DAT_1096e62c < iVar12) {
        if (iVar12 < DAT_1096e628) {
          local_24[0] = local_24[0] & 0x7fffffff;
          iVar12 = iVar12 + DAT_1096e63c;
          iVar2 = (int)(DAT_1096e634 + ((int)DAT_1096e634 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1096e634 & 0x8000001f;
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
          iVar12 = (int)(DAT_1096e634 + ((int)DAT_1096e634 >> 0x1f & 0x1fU)) >> 5;
          uVar10 = DAT_1096e634 & 0x8000001f;
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
          iVar12 = DAT_1096e63c + DAT_1096e628;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_1093f2ef;
      }
      local_14 = DAT_1096e62c - local_14;
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
      iVar2 = DAT_1096e630 - 1;
      iVar12 = (int)(DAT_1096e630 + ((int)DAT_1096e630 >> 0x1f & 0x1fU)) >> 5;
      uVar10 = DAT_1096e630 & 0x8000001f;
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
          if (2 < iVar12) goto LAB_1093f0db;
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
LAB_1093f0db:
      *puVar7 = *puVar7 & -1 << ((byte)local_14 & 0x1f);
      iVar12 = local_10 + 1;
      if (iVar12 < 3) {
        puVar7 = local_24 + iVar12;
        for (iVar2 = 3 - iVar12; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
      }
      uVar10 = DAT_1096e634 + 1;
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
LAB_1093f2ef:
  local_24[0] = iVar12 << (0x1fU - (char)DAT_1096e634 & 0x1f) |
                -(uint)(local_24[3] != 0) & 0x80000000 | local_24[0];
  if (DAT_1096e638 == 0x40) {
    *(uint *)((int)&_D->x + 4) = local_24[0];
    *(uint *)&_D->x = local_24[1];
  }
  else if (DAT_1096e638 == 0x20) {
    *(uint *)&_D->x = local_24[0];
  }
  return IVar3;
}


// ==== 1093f332 __ld12told

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
      if (!bVar5) goto LAB_1093f3d0;
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
LAB_1093f3d0:
  local_c = (INTRNCVT_STATUS)(uVar7 == 0x7fff);
  *(uint *)_Ld->ld = uVar6;
  *(uint *)(_Ld->ld + 4) = local_18[0];
  *(ushort *)(_Ld->ld + 8) = uVar2 & 0x8000 | uVar7;
  return local_c;
}


// ==== 1093f44f ___ld12mul

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
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
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
LAB_1093f4be:
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      goto LAB_1093f6b4;
    }
    if (((uVar7 == 0) && (uVar12 = uVar12 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
       ((param_1[1] == 0 && (*param_1 == 0)))) {
      *(undefined2 *)((int)param_1 + 10) = 0;
      goto LAB_1093f6b4;
    }
    if (((uVar9 == 0) && (uVar12 = uVar12 + 1, (param_2[2] & 0x7fffffffU) == 0)) &&
       ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_1093f4be;
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
LAB_1093f5d8:
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
      if ((short)uVar12 < 1) goto LAB_1093f5d8;
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
      goto LAB_1093f6b4;
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
LAB_1093f6b4:
  local_10 = (short)((uint)iVar2 >> 0x10);
  uStack_e = iVar3;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1093f6c3 FUN_1093f6c3

void __cdecl FUN_1093f6c3(int *param_1,uint param_2,int param_3)

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
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  local_2c = &DAT_1096e798;
  if (param_2 == 0) {
LAB_1093f9bf:
    uStack_1e = iVar1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if ((int)param_2 < 0) {
    param_2 = -param_2;
    local_2c = &DAT_1096e8f8;
  }
  if (param_3 == 0) {
    *(undefined2 *)param_1 = 0;
  }
joined_r0x1093f708:
  do {
    if (param_2 == 0) goto LAB_1093f9bf;
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
            goto joined_r0x1093f708;
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
LAB_1093f8b5:
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
              if ((short)local_24 < 1) goto LAB_1093f8b5;
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
            goto joined_r0x1093f708;
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


// ==== 1093f9cc FUN_1093f9cc

void __cdecl
FUN_1093f9cc(undefined2 *param_1,int *param_2,char *param_3,int param_4,int param_5,int param_6,
            int param_7,int *param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  char cVar8;
  ushort uVar9;
  DWORD *pDVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  ushort uVar17;
  char *pcVar18;
  undefined4 uVar19;
  undefined *puVar20;
  short *psVar21;
  uint uVar22;
  undefined4 uVar23;
  ushort uVar24;
  char *pcVar25;
  int local_6c;
  int local_68;
  ushort *local_64;
  ushort *local_60;
  int local_5c;
  char *local_58;
  int local_54;
  uint local_50;
  ushort local_4c;
  undefined4 uStack_4a;
  undefined2 uStack_46;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ushort uStack_38;
  ushort local_36;
  byte local_30;
  undefined1 uStack_2f;
  undefined4 uStack_2e;
  undefined4 uStack_2a;
  ushort uStack_26;
  char local_24 [23];
  char local_d;
  uint local_8;
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  iVar15 = 0;
  pcVar25 = local_24;
  uVar7 = 0;
  local_6c = 1;
  local_50 = 0;
  bVar4 = false;
  bVar6 = false;
  bVar5 = false;
  local_68 = 0;
  local_54 = 0;
  if (param_8 != (int *)0x0) {
    local_58 = param_3;
    for (; (((cVar8 = *param_3, cVar8 == ' ' || (cVar8 == '\t')) || (cVar8 == '\n')) ||
           (cVar8 == '\r')); param_3 = param_3 + 1) {
    }
LAB_1093fa51:
    cVar8 = *param_3;
    pcVar18 = param_3 + 1;
    switch(iVar15) {
    case 0:
      if ((byte)(cVar8 - 0x31U) < 9) {
LAB_1093fa6e:
        iVar15 = 3;
        goto LAB_1093fa70;
      }
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) {
LAB_1093fa85:
        iVar15 = 5;
        param_3 = pcVar18;
      }
      else if (cVar8 == '+') {
        uVar7 = 0;
        iVar15 = 2;
        param_3 = pcVar18;
      }
      else {
        if (cVar8 != '-') {
          if (cVar8 == '0') goto LAB_1093fa9f;
          goto LAB_1093fc2a;
        }
        iVar15 = 2;
        uVar7 = 0x8000;
        param_3 = pcVar18;
      }
      goto LAB_1093fa51;
    case 1:
      bVar4 = true;
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_1093fa6e;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_1093fad6;
      if ((cVar8 == '+') || (cVar8 == '-')) goto LAB_1093fb06;
      if (cVar8 == '0') goto LAB_1093fa9f;
      goto LAB_1093fae6;
    case 2:
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_1093fa6e;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_1093fa85;
      param_3 = local_58;
      if (cVar8 != '0') goto LAB_1093fc55;
LAB_1093fa9f:
      iVar15 = 1;
      param_3 = pcVar18;
      goto LAB_1093fa51;
    case 3:
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar25 = cVar8 + -0x30;
          pcVar25 = pcVar25 + 1;
        }
        else {
          local_54 = local_54 + 1;
        }
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (cVar8 != *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_1093fb79;
LAB_1093fad6:
      bVar4 = true;
      iVar15 = 4;
      param_3 = pcVar18;
      goto LAB_1093fa51;
    case 4:
      bVar6 = true;
      if (local_50 == 0) {
        while (cVar8 == '0') {
          local_54 = local_54 + -1;
          cVar8 = *pcVar18;
          pcVar18 = pcVar18 + 1;
        }
      }
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar25 = cVar8 + -0x30;
          pcVar25 = pcVar25 + 1;
          local_54 = local_54 + -1;
        }
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
LAB_1093fb79:
      if ((cVar8 == '+') || (cVar8 == '-')) {
LAB_1093fb06:
        bVar4 = true;
        iVar15 = 0xb;
        param_3 = pcVar18 + -1;
      }
      else {
LAB_1093fae6:
        bVar4 = true;
        if ((cVar8 < 'D') || (('E' < cVar8 && ((cVar8 < 'd' || ('e' < cVar8)))))) goto LAB_1093fc2a;
        iVar15 = 6;
        param_3 = pcVar18;
      }
      goto LAB_1093fa51;
    case 5:
      bVar6 = true;
      param_3 = local_58;
      if ((byte)(cVar8 - 0x30U) < 10) {
        iVar15 = 4;
        goto LAB_1093fa70;
      }
      goto LAB_1093fc55;
    case 6:
      local_58 = param_3 + -1;
      if (8 < (byte)(cVar8 - 0x31U)) {
        if (cVar8 == '+') goto LAB_1093fc11;
        if (cVar8 == '-') goto LAB_1093fc05;
LAB_1093fbf8:
        param_3 = local_58;
        if (cVar8 != '0') goto LAB_1093fc55;
        iVar15 = 8;
        param_3 = pcVar18;
        goto LAB_1093fa51;
      }
      break;
    case 7:
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_1093fbf8;
      break;
    case 8:
      bVar5 = true;
      while (cVar8 == '0') {
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_1093fc2a;
      break;
    case 9:
      bVar5 = true;
      local_68 = 0;
      goto LAB_1093fcb7;
    default:
      goto switchD_1093fa5d_caseD_a;
    case 0xb:
      if (param_7 != 0) {
        local_58 = param_3;
        if (cVar8 == '+') {
LAB_1093fc11:
          iVar15 = 7;
          param_3 = pcVar18;
        }
        else {
          if (cVar8 != '-') goto LAB_1093fc55;
LAB_1093fc05:
          local_6c = -1;
          iVar15 = 7;
          param_3 = pcVar18;
        }
        goto LAB_1093fa51;
      }
      iVar15 = 10;
      pcVar18 = param_3;
switchD_1093fa5d_caseD_a:
      param_3 = pcVar18;
      if (iVar15 != 10) goto LAB_1093fa51;
      goto LAB_1093fc55;
    }
    iVar15 = 9;
LAB_1093fa70:
    param_3 = pcVar18 + -1;
    goto LAB_1093fa51;
  }
  pDVar10 = FUN_1092681e();
  *pDVar10 = 0x16;
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  goto LAB_1094004d;
LAB_1093fcb7:
  if ((cVar8 < '0') || ('9' < cVar8)) goto LAB_1093fcd2;
  local_68 = local_68 * 10 + -0x30 + (int)cVar8;
  if (local_68 < 0x1451) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    goto LAB_1093fcb7;
  }
  local_68 = 0x1451;
LAB_1093fcd2:
  while (('/' < cVar8 && (cVar8 < ':'))) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
  }
LAB_1093fc2a:
  param_3 = pcVar18 + -1;
LAB_1093fc55:
  *param_2 = (int)param_3;
  if (bVar4) {
    if (0x18 < local_50) {
      if ('\x04' < local_d) {
        local_d = local_d + '\x01';
      }
      pcVar25 = pcVar25 + -1;
      local_54 = local_54 + 1;
      local_50 = 0x18;
    }
    if (local_50 == 0) goto LAB_1094002f;
    while (pcVar25 = pcVar25 + -1, *pcVar25 == '\0') {
      local_50 = local_50 - 1;
      local_54 = local_54 + 1;
    }
    ___mtold12(local_24,local_50,&local_40);
    iVar13 = CONCAT22(local_3c._2_2_,(undefined2)local_3c);
    uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
    uVar22 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e);
    iVar15 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a);
    if (local_6c < 0) {
      local_68 = -local_68;
    }
    local_58 = (char *)(local_68 + local_54);
    if (!bVar5) {
      local_58 = (char *)((int)local_58 + param_5);
    }
    if (!bVar6) {
      local_58 = (char *)((int)local_58 - param_6);
    }
    if ((int)local_58 < 0x1451) {
      if ((int)local_58 < -0x1450) goto LAB_1094002f;
      puVar20 = &DAT_1096e798;
      if (local_58 != (char *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (char *)-(int)local_58;
          puVar20 = &DAT_1096e8f8;
        }
        if (param_4 == 0) {
          local_40._0_2_ = 0;
        }
        iVar15 = uStack_4a;
        uVar22 = uStack_2e;
        iVar1 = uStack_2a;
        uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
        iVar13 = local_3c;
joined_r0x1093fd5d:
        if (local_58 != (char *)0x0) {
          uVar16 = (int)local_58 >> 3;
          puVar20 = puVar20 + 0x54;
          uVar11 = (uint)local_58 & 7;
          local_58 = (char *)uVar16;
          if (uVar11 != 0) {
            puVar12 = (ushort *)(puVar20 + uVar11 * 0xc);
            if (0x7fff < *puVar12) {
              local_4c = (ushort)*(undefined4 *)puVar12;
              uStack_4a._0_2_ = (undefined2)((uint)*(undefined4 *)puVar12 >> 0x10);
              uStack_4a._2_2_ = (undefined2)*(undefined4 *)(puVar12 + 2);
              uStack_46 = (undefined2)((uint)*(undefined4 *)(puVar12 + 2) >> 0x10);
              local_44 = *(undefined4 *)(puVar12 + 4);
              iVar15 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a) + -1;
              uStack_4a._0_2_ = (undefined2)iVar15;
              uStack_4a._2_2_ = (undefined2)((uint)iVar15 >> 0x10);
              puVar12 = &local_4c;
            }
            local_54 = 0;
            local_30 = 0;
            uStack_2f = 0;
            uStack_2e._0_2_ = 0;
            uStack_2e._2_2_ = 0;
            uVar16 = 0;
            uStack_2a._0_2_ = 0;
            uStack_2a._2_2_ = 0;
            iVar3 = 0;
            uStack_26 = 0;
            uVar14 = local_36 & 0x7fff;
            uVar17 = puVar12[5] & 0x7fff;
            uVar9 = (puVar12[5] ^ local_36) & 0x8000;
            uVar24 = uVar17 + uVar14;
            uVar22 = 0;
            iVar1 = 0;
            if (((uVar14 < 0x7fff) && (uVar22 = 0, iVar1 = 0, uVar17 < 0x7fff)) &&
               (uVar22 = uVar16, iVar1 = iVar3, uVar24 < 0xbffe)) {
              if (0x3fbf < uVar24) {
                if (((uVar14 == 0) &&
                    (uVar24 = uVar24 + 1, (CONCAT22(local_36,uStack_38) & 0x7fffffff) == 0)) &&
                   ((iVar13 == 0 && (uVar2 == 0)))) {
                  local_36 = 0;
                }
                else if (((uVar17 == 0) &&
                         (uVar24 = uVar24 + 1, (*(uint *)(puVar12 + 4) & 0x7fffffff) == 0)) &&
                        ((*(int *)(puVar12 + 2) == 0 && (*(int *)puVar12 == 0)))) {
                  uStack_38 = 0;
                  local_36 = 0;
                  local_3c._0_2_ = 0;
                  local_3c._2_2_ = 0;
                  local_40._0_2_ = 0;
                  local_40._2_2_ = 0;
                  uVar2 = 0;
                  iVar13 = 0;
                }
                else {
                  local_6c = 0;
                  psVar21 = (short *)((int)&uStack_2e + 2);
                  local_5c = 5;
                  do {
                    local_68 = local_5c;
                    if (0 < local_5c) {
                      local_60 = (ushort *)((int)&local_40 + local_6c * 2);
                      local_64 = puVar12 + 4;
                      do {
                        bVar4 = false;
                        uVar22 = *(uint *)(psVar21 + -2) + (uint)*local_64 * (uint)*local_60;
                        if ((uVar22 < *(uint *)(psVar21 + -2)) ||
                           (uVar22 < (uint)*local_64 * (uint)*local_60)) {
                          bVar4 = true;
                        }
                        *(uint *)(psVar21 + -2) = uVar22;
                        if (bVar4) {
                          *psVar21 = *psVar21 + 1;
                        }
                        local_60 = local_60 + 1;
                        local_64 = local_64 + -1;
                        local_68 = local_68 + -1;
                      } while (0 < local_68);
                    }
                    psVar21 = psVar21 + 1;
                    local_6c = local_6c + 1;
                    local_5c = local_5c + -1;
                  } while (0 < local_5c);
                  uVar24 = uVar24 + 0xc002;
                  if ((short)uVar24 < 1) {
LAB_1093ff13:
                    uVar24 = uVar24 - 1;
                    if ((short)uVar24 < 0) {
                      uVar22 = (uint)(ushort)-uVar24;
                      uVar24 = 0;
                      do {
                        if ((local_30 & 1) != 0) {
                          local_54 = local_54 + 1;
                        }
                        iVar13 = CONCAT22(uStack_26,uStack_2a._2_2_);
                        uVar2 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        uStack_2a._2_2_ = (ushort)(CONCAT22(uStack_26,uStack_2a._2_2_) >> 1);
                        uStack_26 = uStack_26 >> 1;
                        uStack_2a._0_2_ =
                             (ushort)uStack_2a >> 1 | (ushort)((uint)(iVar13 << 0x1f) >> 0x10);
                        uVar16 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) >> 1;
                        uStack_2e._0_2_ =
                             (ushort)uStack_2e >> 1 | (ushort)((uint)(iVar1 << 0x1f) >> 0x10);
                        uVar22 = uVar22 - 1;
                        uStack_2e._2_2_ = (ushort)(uVar2 >> 1);
                        local_30 = (byte)uVar16;
                        uStack_2f = (undefined1)(uVar16 >> 8);
                      } while (uVar22 != 0);
                      if (local_54 != 0) {
                        local_30 = local_30 | 1;
                      }
                    }
                  }
                  else {
                    do {
                      uVar14 = (ushort)uStack_2e;
                      if ((uStack_26 & 0x8000) != 0) break;
                      iVar1 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) << 1;
                      local_30 = (byte)iVar1;
                      uStack_2f = (undefined1)((uint)iVar1 >> 8);
                      uStack_2e._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_) * 2;
                      uStack_2e._2_2_ = (ushort)iVar1 | uVar14 >> 0xf;
                      iVar13 = CONCAT22(uStack_26,uStack_2a._2_2_) * 2;
                      uStack_2a._2_2_ = (ushort)iVar13 | (ushort)uStack_2a >> 0xf;
                      uVar24 = uVar24 - 1;
                      uStack_2a._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      uStack_26 = (ushort)((uint)iVar13 >> 0x10);
                    } while (0 < (short)uVar24);
                    if ((short)uVar24 < 1) goto LAB_1093ff13;
                  }
                  if ((0x8000 < CONCAT11(uStack_2f,local_30)) ||
                     (iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a),
                     uVar22 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e),
                     (CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) == -1) {
                      uStack_2e._0_2_ = 0;
                      uStack_2e._2_2_ = 0;
                      uVar22 = 0;
                      if (CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) == -1) {
                        uStack_2a._0_2_ = 0;
                        uStack_2a._2_2_ = 0;
                        if (uStack_26 == 0xffff) {
                          uStack_26 = 0x8000;
                          uVar24 = uVar24 + 1;
                          iVar1 = 0;
                          uVar22 = 0;
                        }
                        else {
                          uStack_26 = uStack_26 + 1;
                          iVar1 = 0;
                          uVar22 = 0;
                        }
                      }
                      else {
                        iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) + 1;
                        uStack_2a._0_2_ = (ushort)iVar1;
                        uStack_2a._2_2_ = (ushort)((uint)iVar1 >> 0x10);
                      }
                    }
                    else {
                      uVar22 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) + 1;
                      uStack_2e._0_2_ = (ushort)uVar22;
                      uStack_2e._2_2_ = (ushort)(uVar22 >> 0x10);
                      iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
                    }
                  }
                  if (0x7ffe < uVar24) goto LAB_1093ffd2;
                  local_40 = uVar22;
                  local_3c = iVar1;
                  uStack_38 = uStack_26;
                  local_36 = uVar24 | uVar9;
                  uVar2 = uVar22;
                  iVar13 = iVar1;
                }
                goto joined_r0x1093fd5d;
              }
              iVar13 = 0;
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            else {
LAB_1093ffd2:
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              iVar13 = (-(uint)(uVar9 != 0) & 0x80000000) + 0x7fff8000;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            uStack_38 = (ushort)iVar13;
            local_36 = (ushort)((uint)iVar13 >> 0x10);
            uVar2 = 0;
            iVar13 = 0;
          }
          goto joined_r0x1093fd5d;
        }
      }
      local_3c._2_2_ = (undefined2)((uint)iVar13 >> 0x10);
      local_3c._0_2_ = (undefined2)iVar13;
      local_40._2_2_ = (undefined2)(uVar2 >> 0x10);
      local_40._0_2_ = (undefined2)uVar2;
      uVar23 = CONCAT22((undefined2)local_3c,local_40._2_2_);
      uVar19 = CONCAT22(uStack_38,local_3c._2_2_);
      uVar24 = local_36;
      uStack_4a = iVar15;
      uStack_2e = uVar22;
      uStack_2a = iVar1;
      local_3c = iVar13;
    }
    else {
      uVar23 = 0;
      uVar24 = 0x7fff;
      uVar19 = 0x80000000;
      local_40._0_2_ = 0;
    }
  }
  else {
LAB_1094002f:
    uVar2 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    local_40._0_2_ = 0;
    uVar24 = 0;
    uVar19 = 0;
    uVar23 = 0;
  }
  *param_1 = (undefined2)local_40;
  param_1[5] = uVar24 | uVar7;
  *(undefined4 *)(param_1 + 1) = uVar23;
  *(undefined4 *)(param_1 + 3) = uVar19;
LAB_1094004d:
  local_40 = uVar2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 1094008c FUN_1094008c

void __cdecl FUN_1094008c(_LDOUBLE *param_1,int *param_2,char *param_3,int param_4,int *param_5)

{
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  FUN_1093f9cc((undefined2 *)&local_14,param_2,param_3,param_4,0,0,0,param_5);
  __ld12told(&local_14,param_1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 10940152 FUN_10940152

/* WARNING: Removing unreachable block (ram,0x10940643) */
/* WARNING: Removing unreachable block (ram,0x1094064d) */
/* WARNING: Removing unreachable block (ram,0x10940652) */

void __cdecl
FUN_10940152(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

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
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
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
    goto LAB_109409d0;
  }
  if ((short)uVar14 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((uVar8 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_10940281;
        pcVar25 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_10940281:
          pcVar25 = "1#QNAN";
          goto LAB_10940286;
        }
        pcVar25 = "1#IND";
      }
      eVar6 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar25);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 5;
    }
    else {
      pcVar25 = "1#SNAN";
LAB_10940286:
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
    goto LAB_109409d0;
  }
  local_50 = (short)(((uVar14 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar14 * 0x4d10
                    >> 0x10);
  uVar16 = (uint)local_50;
  local_1a = (undefined1)uVar14;
  bStack_19 = (byte)(uVar14 >> 8);
  local_24._2_2_ = (ushort)param_1;
  local_24._0_2_ = 0;
  local_6c = &DAT_1096e798;
  uStack_20._0_2_ = uStack_12;
  uStack_20._2_2_ = (ushort)local_10;
  uStack_1c = local_10._2_2_;
  if (uVar16 != 0) {
    iVar20 = param_1;
    uVar14 = -uVar16;
    if ((int)-uVar16 < 0) {
      local_6c = &DAT_1096e8f8;
      uVar14 = uVar16;
    }
    while (uVar14 != 0) {
      uStack_20._0_2_ = (ushort)((uint)iVar20 >> 0x10);
      local_24._2_2_ = (ushort)iVar20;
      local_6c = local_6c + 0x54;
      iVar3 = CONCAT22(local_c,local_10._2_2_);
      if ((uVar14 & 7) == 0) goto LAB_109405a7;
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
LAB_109404cb:
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
            if ((short)uVar24 < 1) goto LAB_109404cb;
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
          if (0x7ffe < uVar24) goto LAB_1094058b;
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
LAB_1094058b:
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
LAB_109405a7:
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
          goto LAB_1094080f;
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
LAB_1094071d:
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
          if ((short)uVar24 < 1) goto LAB_1094071d;
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
        goto LAB_1094080f;
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
LAB_1094080f:
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
        goto LAB_109409d0;
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
LAB_109409d0:
  local_24 = uVar16;
  local_10 = param_2;
  uStack_3e = iVar1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 10940a18 __set_controlfp

/* Library Function - Single Match
    __set_controlfp
   
   Library: Visual Studio 2005 Release */

void __cdecl __set_controlfp(uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  ushort in_FPUControlWord;
  
  if ((((_NewValue != 0x9001f) || (_Mask != 0xffffffff)) || ((in_FPUControlWord & 0x1f3d) != 0x23d))
     || ((DAT_109a1790 != 0 && ((MXCSR & 0xfec0) != 0x1e80)))) {
    eVar1 = __controlfp_s((uint *)0x0,_NewValue,_Mask & 0xfff7ffff);
    if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return;
}


// ==== 10940b1b __hw_cw

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


// ==== 10940c84 ___hw_cw_sse2

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


// ==== 10940d6e __statusfp

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
  if (DAT_109a1790 != 0) {
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


// ==== 10940e34 ___statusfp_sse2

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


// ==== 1094102e __statusfp2

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


// ==== 10941086 __clearfp

/* WARNING: Removing unreachable block (ram,0x10941110) */
/* WARNING: Removing unreachable block (ram,0x10941100) */
/* WARNING: Removing unreachable block (ram,0x109410f0) */
/* WARNING: Removing unreachable block (ram,0x109410eb) */
/* WARNING: Removing unreachable block (ram,0x109410f3) */
/* WARNING: Removing unreachable block (ram,0x109410f8) */
/* WARNING: Removing unreachable block (ram,0x109410fb) */
/* WARNING: Removing unreachable block (ram,0x10941103) */
/* WARNING: Removing unreachable block (ram,0x10941108) */
/* WARNING: Removing unreachable block (ram,0x1094110b) */
/* WARNING: Removing unreachable block (ram,0x10941113) */
/* WARNING: Removing unreachable block (ram,0x10941118) */
/* Library Function - Single Match
    __clearfp
   
   Library: Visual Studio 2005 Release */

uint __cdecl __clearfp(void)

{
  uint uVar1;
  ushort in_FPUStatusWord;
  
  if (DAT_109a1790 == 0) {
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


// ==== 1094115d ___control87_2

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
    if (DAT_109a1790 == 0) {
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


// ==== 10941467 __control87

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
  if (DAT_109a1790 != 0) {
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


// ==== 10941a73 __mbsnicmp_l

/* Library Function - Single Match
    __mbsnicmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnicmp_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  byte bVar1;
  int iVar2;
  DWORD *pDVar3;
  uint uVar4;
  uchar *puVar5;
  ushort uVar6;
  byte *pbVar7;
  _LocaleUpdate local_18 [4];
  int local_14;
  int local_10;
  char local_c;
  ushort local_8;
  
  if (_MaxCount == 0) {
    iVar2 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate(local_18,_Locale);
    if (*(int *)(local_14 + 8) == 0) {
      iVar2 = __strnicmp((char *)_Str1,(char *)_Str2,_MaxCount);
      if (local_c != '\0') {
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      }
    }
    else if ((_Str1 == (uchar *)0x0) || (_Str2 == (uchar *)0x0)) {
      pDVar3 = FUN_1092681e();
      *pDVar3 = 0x16;
      FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      if (local_c != '\0') {
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      }
      iVar2 = 0x7fffffff;
    }
    else {
      do {
        uVar4 = (uint)*_Str1;
        _MaxCount = _MaxCount - 1;
        pbVar7 = _Str1 + 1;
        if ((*(byte *)(uVar4 + 0x1d + local_14) & 4) == 0) {
          if ((*(byte *)(uVar4 + local_14 + 0x1d) & 0x10) != 0) {
            uVar4 = (uint)*(byte *)(uVar4 + local_14 + 0x11d);
          }
          local_8 = (ushort)uVar4;
          uVar6 = local_8;
        }
        else {
          bVar1 = *pbVar7;
          if (bVar1 == 0) {
            local_8 = 0;
            uVar6 = local_8;
          }
          else {
            pbVar7 = _Str1 + 2;
            uVar6 = CONCAT11(*_Str1,bVar1);
            if ((uVar6 < *(ushort *)(local_14 + 0x10)) || (*(ushort *)(local_14 + 0x12) < uVar6)) {
              if ((*(ushort *)(local_14 + 0x16) <= uVar6) && (uVar6 <= *(ushort *)(local_14 + 0x18))
                 ) {
                uVar6 = uVar6 + *(short *)(local_14 + 0x1a);
              }
            }
            else {
              uVar6 = uVar6 + *(short *)(local_14 + 0x14);
            }
          }
        }
        bVar1 = *_Str2;
        uVar4 = (uint)bVar1;
        puVar5 = _Str2 + 1;
        if ((*(byte *)(uVar4 + 0x1d + local_14) & 4) == 0) {
          if ((*(byte *)(uVar4 + local_14 + 0x1d) & 0x10) != 0) {
            uVar4 = (uint)*(byte *)(uVar4 + local_14 + 0x11d);
          }
          local_8 = (ushort)uVar4;
          _Str2 = puVar5;
        }
        else if (*puVar5 == '\0') {
          local_8 = 0;
          _Str2 = puVar5;
        }
        else {
          _Str2 = _Str2 + 2;
          local_8 = CONCAT11(bVar1,*puVar5);
          if ((local_8 < *(ushort *)(local_14 + 0x10)) || (*(ushort *)(local_14 + 0x12) < local_8))
          {
            if ((*(ushort *)(local_14 + 0x16) <= local_8) &&
               (local_8 <= *(ushort *)(local_14 + 0x18))) {
              local_8 = local_8 + *(short *)(local_14 + 0x1a);
            }
          }
          else {
            local_8 = local_8 + *(short *)(local_14 + 0x14);
          }
        }
        if (local_8 != uVar6) {
          iVar2 = (-(uint)(local_8 < uVar6) & 2) - 1;
          if (local_c == '\0') {
            return iVar2;
          }
          *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
          return iVar2;
        }
      } while ((uVar6 != 0) && (_Str1 = pbVar7, _MaxCount != 0));
      if (local_c != '\0') {
        *(uint *)(local_10 + 0x70) = *(uint *)(local_10 + 0x70) & 0xfffffffd;
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}


// ==== 10941c3c __mbsnicmp

/* Library Function - Single Match
    __mbsnicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnicmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnicmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


// ==== 10941c53 __getenv_helper_nolock

/* Library Function - Single Match
    __getenv_helper_nolock
   
   Library: Visual Studio 2005 Release */

char * __cdecl __getenv_helper_nolock(char *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (DAT_109a1760 == 0) {
    return (char *)0x0;
  }
  if (((DAT_109a0e64 != (int *)0x0) ||
      (((DAT_109a0e6c != 0 && (iVar1 = ___wtomb_environ(), iVar1 == 0)) &&
       (DAT_109a0e64 != (int *)0x0)))) && (piVar3 = DAT_109a0e64, param_1 != (char *)0x0)) {
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


// ==== 10941cd4 __getenv_s_helper

/* Library Function - Single Match
    __getenv_s_helper
   
   Library: Visual Studio 2005 Release */

undefined4 __cdecl __getenv_s_helper(char *param_1,uint param_2,char *param_3)

{
  uint *in_EAX;
  DWORD *pDVar1;
  char *_Str;
  size_t sVar2;
  errno_t eVar3;
  
  if (in_EAX != (uint *)0x0) {
    *in_EAX = 0;
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) goto LAB_10941d11;
    }
    else if (param_2 != 0) {
LAB_10941d11:
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
  pDVar1 = FUN_1092681e();
  *pDVar1 = 0x16;
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}


// ==== 10941d67 __dupenv_s_helper

/* Library Function - Single Match
    __dupenv_s_helper
   
   Library: Visual Studio 2005 Release */

DWORD __cdecl __dupenv_s_helper(size_t *param_1,char *param_2)

{
  DWORD *pDVar1;
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
          pDVar1 = FUN_1092681e();
          *pDVar1 = 0xc;
          pDVar1 = FUN_1092681e();
          return *pDVar1;
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
  pDVar1 = FUN_1092681e();
  *pDVar1 = 0x16;
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}


// ==== 10941f64 __dupenv_s

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __dupenv_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __dupenv_s(char **_PBuffer,size_t *_PBufferSizeInBytes,char *_VarName)

{
  DWORD *pDVar1;
  char *_Str;
  size_t sVar2;
  char *_Dst;
  errno_t eVar3;
  undefined4 local_20;
  
  __lock(7);
  if (_PBuffer != (char **)0x0) {
    *_PBuffer = (char *)0x0;
    if (_PBufferSizeInBytes != (size_t *)0x0) {
      *_PBufferSizeInBytes = 0;
    }
    if (_VarName != (char *)0x0) {
      _Str = __getenv_helper_nolock(_VarName);
      if (_Str != (char *)0x0) {
        sVar2 = _strlen(_Str);
        sVar2 = sVar2 + 1;
        _Dst = _calloc(sVar2,1);
        *_PBuffer = _Dst;
        if (_Dst == (char *)0x0) {
          pDVar1 = FUN_1092681e();
          *pDVar1 = 0xc;
          pDVar1 = FUN_1092681e();
          local_20 = *pDVar1;
          goto LAB_1094202c;
        }
        eVar3 = _strcpy_s(_Dst,sVar2,_Str);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        if (_PBufferSizeInBytes != (size_t *)0x0) {
          *_PBufferSizeInBytes = sVar2;
        }
      }
      local_20 = 0;
      goto LAB_1094202c;
    }
  }
  pDVar1 = FUN_1092681e();
  *pDVar1 = 0x16;
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  local_20 = 0x16;
LAB_1094202c:
  FUN_10942041();
  return local_20;
}


// ==== 10942041 FUN_10942041

void FUN_10942041(void)

{
  FUN_10929478(7);
  return;
}


// ==== 10942060 _strchr

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


// ==== 1094211e __chsize_nolock

/* Library Function - Single Match
    __chsize_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __chsize_nolock(int _FileHandle,longlong _Size)

{
  int iVar1;
  HANDLE pvVar2;
  LPVOID _Buf;
  DWORD *pDVar3;
  int iVar4;
  uint uVar5;
  BOOL BVar6;
  uint uVar7;
  int unaff_EDI;
  int iVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint in_stack_00000008;
  DWORD DVar13;
  SIZE_T dwBytes;
  uint local_14;
  uint local_10;
  
  local_14 = 0;
  local_10 = 0;
  uVar11 = __lseeki64_nolock(_FileHandle,0x100000000,unaff_EDI);
  if (uVar11 == 0xffffffffffffffff) goto LAB_109421a4;
  lVar12 = __lseeki64_nolock(_FileHandle,0x200000000,unaff_EDI);
  iVar4 = (int)((ulonglong)lVar12 >> 0x20);
  if (lVar12 == -1) goto LAB_109421a4;
  uVar7 = in_stack_00000008 - (uint)lVar12;
  uVar5 = (uint)(in_stack_00000008 < (uint)lVar12);
  iVar1 = (int)_Size - iVar4;
  iVar8 = iVar1 - uVar5;
  if ((iVar8 < 0) ||
     ((iVar8 == 0 || SBORROW4((int)_Size,iVar4) != SBORROW4(iVar1,uVar5) && (uVar7 == 0)))) {
    if ((iVar8 < 1) && (iVar8 < 0)) {
      lVar12 = __lseeki64_nolock(_FileHandle,_Size & 0xffffffff,unaff_EDI);
      if (lVar12 == -1) goto LAB_109421a4;
      pvVar2 = (HANDLE)__get_osfhandle(_FileHandle);
      BVar6 = SetEndOfFile(pvVar2);
      local_14 = (BVar6 != 0) - 1;
      local_10 = (int)local_14 >> 0x1f;
      if ((local_14 & local_10) == 0xffffffff) {
        pDVar3 = FUN_1092681e();
        *pDVar3 = 0xd;
        pDVar3 = FUN_10926831();
        DVar13 = GetLastError();
        *pDVar3 = DVar13;
        goto LAB_109422a2;
      }
    }
  }
  else {
    dwBytes = 0x1000;
    DVar13 = 8;
    pvVar2 = GetProcessHeap();
    _Buf = HeapAlloc(pvVar2,DVar13,dwBytes);
    if (_Buf == (LPVOID)0x0) {
      pDVar3 = FUN_1092681e();
      *pDVar3 = 0xc;
      goto LAB_109421a4;
    }
    iVar4 = __setmode_nolock(_FileHandle,0x8000);
    while( true ) {
      uVar5 = uVar7;
      if ((-1 < iVar8) && ((0 < iVar8 || (0xfff < uVar7)))) {
        uVar5 = 0x1000;
      }
      uVar5 = __write_nolock(_FileHandle,_Buf,uVar5);
      if (uVar5 == 0xffffffff) break;
      bVar9 = uVar7 < uVar5;
      uVar7 = uVar7 - uVar5;
      bVar10 = SBORROW4(iVar8,(int)uVar5 >> 0x1f);
      iVar1 = iVar8 - ((int)uVar5 >> 0x1f);
      iVar8 = iVar1 - (uint)bVar9;
      if ((iVar8 < 0) || ((iVar8 == 0 || bVar10 != SBORROW4(iVar1,(uint)bVar9) && (uVar7 == 0))))
      goto LAB_109421f6;
    }
    pDVar3 = FUN_10926831();
    if (*pDVar3 == 5) {
      pDVar3 = FUN_1092681e();
      *pDVar3 = 0xd;
    }
    local_14 = 0xffffffff;
    local_10 = 0xffffffff;
LAB_109421f6:
    __setmode_nolock(_FileHandle,iVar4);
    DVar13 = 0;
    pvVar2 = GetProcessHeap();
    HeapFree(pvVar2,DVar13,_Buf);
LAB_109422a2:
    if ((local_14 & local_10) == 0xffffffff) goto LAB_109421a4;
  }
  lVar12 = __lseeki64_nolock(_FileHandle,uVar11 >> 0x20,unaff_EDI);
  if (lVar12 != -1) {
    return 0;
  }
LAB_109421a4:
  pDVar3 = FUN_1092681e();
  return *pDVar3;
}


// ==== 109423d7 FUN_109423d7

int __cdecl FUN_109423d7(uint param_1,LPWSTR param_2,LPWSTR param_3)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  WCHAR WVar4;
  DWORD *pDVar5;
  LPWSTR pWVar6;
  BOOL BVar7;
  DWORD DVar8;
  LPWSTR pWVar9;
  int iVar10;
  LPWSTR pWVar11;
  int iVar12;
  int unaff_EDI;
  bool bVar13;
  longlong lVar14;
  LPWSTR local_1c;
  int local_18;
  LPWSTR local_14;
  LPWSTR local_10;
  undefined2 local_c;
  char local_6;
  char local_5;
  
  pWVar11 = param_3;
  local_18 = -2;
  if (param_1 == 0xfffffffe) {
    pDVar5 = FUN_10926831();
    *pDVar5 = 0;
    pDVar5 = FUN_1092681e();
    *pDVar5 = 9;
    return -1;
  }
  if (((int)param_1 < 0) || (DAT_109a160c <= param_1)) {
    pDVar5 = FUN_10926831();
    *pDVar5 = 0;
    pDVar5 = FUN_1092681e();
    *pDVar5 = 9;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  iVar12 = (param_1 & 0x1f) * 0x38;
  piVar1 = &DAT_109a1660 + ((int)param_1 >> 5);
  bVar3 = *(byte *)(*piVar1 + iVar12 + 4);
  if ((bVar3 & 1) == 0) {
    pDVar5 = FUN_10926831();
    *pDVar5 = 0;
    pDVar5 = FUN_1092681e();
    *pDVar5 = 9;
    goto LAB_109424df;
  }
  if (param_3 < (LPWSTR)0x80000000) {
    local_14 = (LPWSTR)0x0;
    if ((param_3 == (LPWSTR)0x0) || ((bVar3 & 2) != 0)) {
      return 0;
    }
    if (param_2 != (LPWSTR)0x0) {
      local_6 = (char)(*(char *)(*piVar1 + iVar12 + 0x24) * '\x02') >> 1;
      if (local_6 == '\x01') {
        if ((~(uint)param_3 & 1) == 0) goto LAB_109424cd;
        pWVar9 = (LPWSTR)((uint)param_3 >> 1);
        param_3 = (LPWSTR)0x4;
        if ((LPWSTR)0x3 < pWVar9) {
          param_3 = pWVar9;
        }
        local_10 = __malloc_crt((size_t)param_3);
        if (local_10 == (LPWSTR)0x0) {
          pDVar5 = FUN_1092681e();
          *pDVar5 = 0xc;
          pDVar5 = FUN_10926831();
          *pDVar5 = 8;
          return -1;
        }
        lVar14 = __lseeki64_nolock(param_1,0x100000000,unaff_EDI);
        iVar10 = *piVar1;
        *(int *)(iVar12 + 0x28 + iVar10) = (int)lVar14;
        *(int *)(iVar12 + 0x2c + iVar10) = (int)((ulonglong)lVar14 >> 0x20);
      }
      else {
        if (local_6 == '\x02') {
          if ((~(uint)param_3 & 1) == 0) goto LAB_109424cd;
          param_3 = (LPWSTR)((uint)param_3 & 0xfffffffe);
        }
        local_10 = param_2;
      }
      pWVar6 = local_10;
      pWVar9 = param_3;
      if ((((*(byte *)(*piVar1 + iVar12 + 4) & 0x48) != 0) &&
          (bVar3 = *(byte *)(*piVar1 + iVar12 + 5), bVar3 != 10)) && (param_3 != (LPWSTR)0x0)) {
        *(byte *)local_10 = bVar3;
        pWVar6 = (LPWSTR)((int)local_10 + 1);
        pWVar9 = (LPWSTR)((int)param_3 + -1);
        local_14 = (LPWSTR)0x1;
        *(undefined1 *)(iVar12 + 5 + *piVar1) = 10;
        if (((local_6 != '\0') && (bVar3 = *(byte *)(iVar12 + 0x25 + *piVar1), bVar3 != 10)) &&
           (pWVar9 != (LPWSTR)0x0)) {
          *(byte *)pWVar6 = bVar3;
          pWVar6 = local_10 + 1;
          pWVar9 = param_3 + -1;
          local_14 = (LPWSTR)0x2;
          *(undefined1 *)(iVar12 + 0x25 + *piVar1) = 10;
          if (((local_6 == '\x01') && (bVar3 = *(byte *)(iVar12 + 0x26 + *piVar1), bVar3 != 10)) &&
             (pWVar9 != (LPWSTR)0x0)) {
            *(byte *)pWVar6 = bVar3;
            pWVar6 = (LPWSTR)((int)local_10 + 3);
            local_14 = (LPWSTR)0x3;
            *(undefined1 *)(iVar12 + 0x26 + *piVar1) = 10;
            pWVar9 = (LPWSTR)((int)param_3 + -3);
          }
        }
      }
      param_3 = pWVar9;
      BVar7 = ReadFile(*(HANDLE *)(iVar12 + *piVar1),pWVar6,(DWORD)param_3,(LPDWORD)&local_1c,
                       (LPOVERLAPPED)0x0);
      if (((BVar7 == 0) || ((int)local_1c < 0)) || (param_3 < local_1c)) {
        DVar8 = GetLastError();
        if (DVar8 != 5) {
          if (DVar8 == 0x6d) {
            local_18 = 0;
            goto LAB_109427ec;
          }
          goto LAB_109427e1;
        }
        pDVar5 = FUN_1092681e();
        *pDVar5 = 9;
        pDVar5 = FUN_10926831();
        *pDVar5 = 5;
      }
      else {
        local_14 = (LPWSTR)((int)local_14 + (int)local_1c);
        pbVar2 = (byte *)(iVar12 + 4 + *piVar1);
        if ((*pbVar2 & 0x80) == 0) goto LAB_109427ec;
        if (local_6 == '\x02') {
          if ((local_1c == (LPWSTR)0x0) || (*local_10 != L'\n')) {
            *pbVar2 = *pbVar2 & 0xfb;
          }
          else {
            *pbVar2 = *pbVar2 | 4;
          }
          local_14 = (LPWSTR)((int)local_14 + (int)local_10);
          param_3 = local_10;
          pWVar11 = local_10;
          if (local_10 < local_14) {
            do {
              WVar4 = *param_3;
              if (WVar4 == L'\x1a') {
                pbVar2 = (byte *)(iVar12 + 4 + *piVar1);
                if ((*pbVar2 & 0x40) == 0) {
                  *pbVar2 = *pbVar2 | 2;
                }
                else {
                  *pWVar11 = *param_3;
                  pWVar11 = pWVar11 + 1;
                }
                break;
              }
              if (WVar4 == L'\r') {
                if (param_3 < local_14 + -1) {
                  if (param_3[1] == L'\n') {
                    pWVar9 = param_3 + 2;
                    goto LAB_1094288f;
                  }
LAB_10942924:
                  param_3 = param_3 + 1;
                  *pWVar11 = L'\r';
                }
                else {
                  pWVar9 = param_3 + 1;
                  BVar7 = ReadFile(*(HANDLE *)(iVar12 + *piVar1),&local_c,2,(LPDWORD)&local_1c,
                                   (LPOVERLAPPED)0x0);
                  if (((BVar7 == 0) && (DVar8 = GetLastError(), DVar8 != 0)) ||
                     (local_1c == (LPWSTR)0x0)) goto LAB_10942924;
                  if ((*(byte *)(iVar12 + 4 + *piVar1) & 0x48) == 0) {
                    if ((pWVar11 == local_10) && (local_c == 10)) goto LAB_1094288f;
                    __lseeki64_nolock(param_1,0x1ffffffff,unaff_EDI);
                    if (local_c == 10) goto LAB_1094292b;
                    goto LAB_10942924;
                  }
                  if (local_c == 10) {
LAB_1094288f:
                    param_3 = pWVar9;
                    *pWVar11 = L'\n';
                  }
                  else {
                    *pWVar11 = L'\r';
                    *(undefined1 *)(iVar12 + 5 + *piVar1) = (undefined1)local_c;
                    *(undefined1 *)(iVar12 + 0x25 + *piVar1) = local_c._1_1_;
                    *(undefined1 *)(iVar12 + 0x26 + *piVar1) = 10;
                    param_3 = pWVar9;
                  }
                }
                pWVar11 = pWVar11 + 1;
                pWVar9 = param_3;
              }
              else {
                *pWVar11 = WVar4;
                pWVar11 = pWVar11 + 1;
                pWVar9 = param_3 + 1;
              }
LAB_1094292b:
              param_3 = pWVar9;
            } while (param_3 < local_14);
          }
          local_14 = (LPWSTR)((int)pWVar11 - (int)local_10);
          goto LAB_109427ec;
        }
        if ((local_1c == (LPWSTR)0x0) || ((byte)*local_10 != 10)) {
          *pbVar2 = *pbVar2 & 0xfb;
        }
        else {
          *pbVar2 = *pbVar2 | 4;
        }
        local_14 = (LPWSTR)((int)local_14 + (int)local_10);
        param_3 = local_10;
        pWVar9 = local_10;
        if (local_10 < local_14) {
          do {
            bVar3 = (byte)*param_3;
            if (bVar3 == 0x1a) {
              pbVar2 = (byte *)(iVar12 + 4 + *piVar1);
              if ((*pbVar2 & 0x40) == 0) {
                *pbVar2 = *pbVar2 | 2;
              }
              else {
                *(byte *)pWVar9 = (byte)*param_3;
                pWVar9 = (LPWSTR)((int)pWVar9 + 1);
              }
              break;
            }
            if (bVar3 == 0xd) {
              if (param_3 < (LPWSTR)((int)local_14 + -1)) {
                if (*(char *)((int)param_3 + 1) == '\n') {
                  pWVar6 = param_3 + 1;
                  goto LAB_1094266c;
                }
LAB_109426e3:
                param_3 = (LPWSTR)((int)param_3 + 1);
                *(byte *)pWVar9 = 0xd;
              }
              else {
                pWVar6 = (LPWSTR)((int)param_3 + 1);
                BVar7 = ReadFile(*(HANDLE *)(iVar12 + *piVar1),&local_5,1,(LPDWORD)&local_1c,
                                 (LPOVERLAPPED)0x0);
                if (((BVar7 == 0) && (DVar8 = GetLastError(), DVar8 != 0)) ||
                   (local_1c == (LPWSTR)0x0)) goto LAB_109426e3;
                if ((*(byte *)(iVar12 + 4 + *piVar1) & 0x48) == 0) {
                  if ((pWVar9 == local_10) && (local_5 == '\n')) goto LAB_1094266c;
                  __lseeki64_nolock(param_1,0x1ffffffff,unaff_EDI);
                  if (local_5 == '\n') goto LAB_109426e7;
                  goto LAB_109426e3;
                }
                if (local_5 == '\n') {
LAB_1094266c:
                  param_3 = pWVar6;
                  *(byte *)pWVar9 = 10;
                }
                else {
                  *(byte *)pWVar9 = 0xd;
                  *(char *)(iVar12 + 5 + *piVar1) = local_5;
                  param_3 = pWVar6;
                }
              }
              pWVar9 = (LPWSTR)((int)pWVar9 + 1);
              pWVar6 = param_3;
            }
            else {
              *(byte *)pWVar9 = bVar3;
              pWVar9 = (LPWSTR)((int)pWVar9 + 1);
              pWVar6 = (LPWSTR)((int)param_3 + 1);
            }
LAB_109426e7:
            param_3 = pWVar6;
          } while (param_3 < local_14);
        }
        local_14 = (LPWSTR)((int)pWVar9 - (int)local_10);
        if ((local_6 != '\x01') || (local_14 == (LPWSTR)0x0)) goto LAB_109427ec;
        bVar3 = *(byte *)((int)pWVar9 + -1);
        if ((char)bVar3 < '\0') {
          iVar10 = 1;
          pWVar9 = (LPWSTR)((int)pWVar9 + -1);
          while ((((&DAT_1096e640)[bVar3] == '\0' && (iVar10 < 5)) && (local_10 <= pWVar9))) {
            pWVar9 = (LPWSTR)((int)pWVar9 + -1);
            bVar3 = *(byte *)pWVar9;
            iVar10 = iVar10 + 1;
          }
          if ((char)(&DAT_1096e640)[(byte)*pWVar9] == 0) {
            pDVar5 = FUN_1092681e();
            *pDVar5 = 0x2a;
            goto LAB_109427e8;
          }
          if ((char)(&DAT_1096e640)[(byte)*pWVar9] + 1 == iVar10) {
            pWVar9 = (LPWSTR)((int)pWVar9 + iVar10);
          }
          else if ((*(byte *)(*piVar1 + iVar12 + 4) & 0x48) == 0) {
            __lseeki64_nolock(param_1,CONCAT44(1,-iVar10 >> 0x1f),unaff_EDI);
          }
          else {
            pWVar6 = (LPWSTR)((int)pWVar9 + 1);
            *(byte *)(*piVar1 + iVar12 + 5) = (byte)*pWVar9;
            if (1 < iVar10) {
              *(byte *)(iVar12 + 0x25 + *piVar1) = *(byte *)pWVar6;
              pWVar6 = pWVar9 + 1;
            }
            if (iVar10 == 3) {
              *(byte *)(iVar12 + 0x26 + *piVar1) = (byte)*pWVar6;
              pWVar6 = (LPWSTR)((int)pWVar6 + 1);
            }
            pWVar9 = (LPWSTR)((int)pWVar6 - iVar10);
          }
        }
        iVar10 = (int)pWVar9 - (int)local_10;
        local_14 = (LPWSTR)MultiByteToWideChar(0xfde9,0,(LPCSTR)local_10,iVar10,param_2,
                                               (uint)pWVar11 >> 1);
        if (local_14 != (LPWSTR)0x0) {
          bVar13 = local_14 != (LPWSTR)iVar10;
          local_14 = (LPWSTR)((int)local_14 * 2);
          *(uint *)(iVar12 + 0x30 + *piVar1) = (uint)bVar13;
          goto LAB_109427ec;
        }
        DVar8 = GetLastError();
LAB_109427e1:
        FUN_10926844(DVar8);
      }
LAB_109427e8:
      local_18 = -1;
LAB_109427ec:
      if (local_10 != param_2) {
        _free(local_10);
      }
      if (local_18 == -2) {
        return (int)local_14;
      }
      return local_18;
    }
  }
LAB_109424cd:
  pDVar5 = FUN_10926831();
  *pDVar5 = 0;
  pDVar5 = FUN_1092681e();
  *pDVar5 = 0x16;
LAB_109424df:
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}


// ==== 10942a95 __lseek_nolock

/* Library Function - Single Match
    __lseek_nolock
   
   Library: Visual Studio 2005 Release */

long __cdecl __lseek_nolock(int _FileHandle,long _Offset,int _Origin)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  hFile = (HANDLE)__get_osfhandle(_FileHandle);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_1092681e();
    *pDVar2 = 9;
    return -1;
  }
  DVar3 = SetFilePointer(hFile,_Offset,(PLONG)0x0,_Origin);
  if (DVar3 == 0xffffffff) {
    DVar4 = GetLastError();
  }
  else {
    DVar4 = 0;
  }
  if (DVar4 == 0) {
    pbVar1 = (byte *)((&DAT_109a1660)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x38);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  else {
    FUN_10926844(DVar4);
    DVar3 = 0xffffffff;
  }
  return DVar3;
}


// ==== 10942be3 __setmode_nolock

/* Library Function - Single Match
    __setmode_nolock
   
   Library: Visual Studio 2005 Release */

int __cdecl __setmode_nolock(int _FileHandle,int _Mode)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  
  iVar7 = (_FileHandle & 0x1fU) * 0x38;
  piVar1 = &DAT_109a1660 + (_FileHandle >> 5);
  iVar4 = *piVar1 + iVar7;
  bVar2 = *(byte *)(iVar4 + 4);
  cVar3 = *(char *)(iVar4 + 0x24);
  if (_Mode == 0x4000) {
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
    pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
    *pbVar5 = *pbVar5 & 0x80;
  }
  else if (_Mode == 0x8000) {
    *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) & 0x7f;
  }
  else {
    if ((_Mode == 0x10000) || (_Mode == 0x20000)) {
      *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
      pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
      bVar6 = *pbVar5 & 0x82 | 2;
    }
    else {
      if (_Mode != 0x40000) goto LAB_10942c82;
      *(byte *)(iVar4 + 4) = *(byte *)(iVar4 + 4) | 0x80;
      pbVar5 = (byte *)(*piVar1 + 0x24 + iVar7);
      bVar6 = *pbVar5 & 0x81 | 1;
    }
    *pbVar5 = bVar6;
  }
LAB_10942c82:
  if ((bVar2 & 0x80) == 0) {
    iVar4 = 0x8000;
  }
  else {
    iVar4 = (-(uint)((char)(cVar3 * '\x02') >> 1 != '\0') & 0xc000) + 0x4000;
  }
  return iVar4;
}


// ==== 10942ce5 FUN_10942ce5

undefined4 __cdecl FUN_10942ce5(undefined4 *param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *param_1 = DAT_109a15a8;
  return 0;
}


// ==== 10942e10 ___ascii_stricmp

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


// ==== 10942e45 __stricmp_l

/* Library Function - Single Match
    __stricmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __stricmp_l(char *_Str1,char *_Str2,_locale_t _Locale)

{
  DWORD *pDVar1;
  int iVar2;
  int iVar3;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_Str1 == (char *)0x0) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else if (_Str2 == (char *)0x0) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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


// ==== 10942f18 __stricmp

/* Library Function - Single Match
    __stricmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __stricmp(char *_Str1,char *_Str2)

{
  DWORD *pDVar1;
  int iVar2;
  
  if (DAT_109a1424 == 0) {
    if ((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) {
      iVar2 = ___ascii_stricmp(_Str1,_Str2);
      return iVar2;
    }
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = __stricmp_l(_Str1,_Str2,(_locale_t)0x0);
  }
  return iVar2;
}


// ==== 1094308e __iswctype_l

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
    local_8[0] = *(ushort *)(PTR_DAT_1096e508 + (uint)_C * 2) & _Type;
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


// ==== 10943110 _iswctype

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
    return (uint)(*(ushort *)(PTR_DAT_1096e508 + (uint)_C * 2) & _Type);
  }
  if (DAT_109a1424 == 0) {
    ___crtGetStringTypeW
              ((localeinfo_struct *)&PTR_DAT_1096df10,1,(wchar_t *)&_C,1,local_8,DAT_1096de34,
               DAT_1096de44);
  }
  iVar1 = __iswctype_l((wint_t)__C,(wctype_t)__Type,(_locale_t)0x0);
  return iVar1;
}


// ==== 10943183 strtoxl

/* Library Function - Single Match
    unsigned long __cdecl strtoxl(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2005 Release */

ulong __cdecl
strtoxl(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  byte *pbVar2;
  DWORD *pDVar3;
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
    pDVar3 = FUN_1092681e();
    *pDVar3 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
LAB_1094323a:
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_1094323a;
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
      goto LAB_109432a0;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_109432a0;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_109432a0;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_109432a0:
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  do {
    uVar1 = *(ushort *)(ptVar5[1].lc_category[0].locale + (uint)bVar8 * 2);
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_109432fa:
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
          pDVar3 = FUN_1092681e();
          *pDVar3 = 0x22;
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
    if ((uint)param_4 <= uVar6) goto LAB_109432fa;
    if ((local_8 < uVar4) ||
       ((local_8 == uVar4 && (uVar6 <= (uint)(0xffffffff % (ulonglong)(uint)param_4))))) {
      local_8 = local_8 * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char **)0x0) goto LAB_109432fa;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}


// ==== 109433ae _strtol

/* Library Function - Single Match
    _strtol
   
   Library: Visual Studio 2005 Release */

long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_109a1424 == 0) {
    ppuVar2 = &PTR_DAT_1096df10;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}


// ==== 109433f2 _strtoul

/* Library Function - Single Match
    _strtoul
   
   Library: Visual Studio 2005 Release */

ulong __cdecl _strtoul(char *_Str,char **_EndPtr,int _Radix)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  if (DAT_109a1424 == 0) {
    ppuVar2 = &PTR_DAT_1096df10;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  uVar1 = strtoxl((localeinfo_struct *)ppuVar2,_Str,_EndPtr,_Radix,1);
  return uVar1;
}


// ==== 10943456 ___initconout

/* Library Function - Single Match
    ___initconout
   
   Library: Visual Studio 2005 Release */

void __cdecl ___initconout(void)

{
  DAT_1096e744 = CreateFileA("CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}


// ==== 109434b8 __get_daylight

/* Library Function - Single Match
    __get_daylight
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __get_daylight(int *_Daylight)

{
  DWORD *pDVar1;
  
  if (_Daylight == (int *)0x0) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *_Daylight = DAT_1096e74c;
  return 0;
}


// ==== 109434ec __get_dstbias

/* Library Function - Single Match
    __get_dstbias
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __get_dstbias(long *_Daylight_savings_bias)

{
  DWORD *pDVar1;
  
  if (_Daylight_savings_bias == (long *)0x0) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *_Daylight_savings_bias = DAT_1096e750;
  return 0;
}


// ==== 10943520 FUN_10943520

undefined4 __cdecl FUN_10943520(undefined4 *param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  *param_1 = DAT_1096e748;
  return 0;
}


// ==== 10943554 __get_tzname

/* Library Function - Single Match
    __get_tzname
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __get_tzname(size_t *_ReturnValue,char *_Buffer,size_t _SizeInBytes,int _Index)

{
  DWORD *pDVar1;
  size_t sVar2;
  errno_t eVar3;
  
  if (_Buffer == (char *)0x0) {
    if (_SizeInBytes != 0) goto LAB_109435a1;
  }
  else if (_SizeInBytes == 0) {
LAB_109435a1:
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  if (_Buffer != (char *)0x0) {
    *_Buffer = '\0';
  }
  if ((_ReturnValue == (size_t *)0x0) || ((_Index != 0 && (_Index != 1)))) {
    pDVar1 = FUN_1092681e();
    eVar3 = 0x16;
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    sVar2 = _strlen((&PTR_DAT_1096e7d8)[_Index]);
    *_ReturnValue = sVar2 + 1;
    if (_Buffer == (char *)0x0) {
      eVar3 = 0;
    }
    else if (_SizeInBytes < sVar2 + 1) {
      eVar3 = 0x22;
    }
    else {
      eVar3 = _strcpy_s(_Buffer,_SizeInBytes,(&PTR_DAT_1096e7d8)[_Index]);
    }
  }
  return eVar3;
}


// ==== 109435f6 FUN_109435f6

undefined4 * FUN_109435f6(void)

{
  return &DAT_1096e74c;
}


// ==== 109435fc FUN_109435fc

undefined4 * FUN_109435fc(void)

{
  return &DAT_1096e750;
}


// ==== 10943602 FUN_10943602

undefined4 * FUN_10943602(void)

{
  return &DAT_1096e748;
}


// ==== 10943608 FUN_10943608

undefined ** FUN_10943608(void)

{
  return &PTR_DAT_1096e7d8;
}


// ==== 10943632 FUN_10943632

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void FUN_10943632(void)

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
  
  local_8 = &DAT_10969108;
  uStack_c = 0x1094363e;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_2c = 0;
  local_24 = (undefined **)0x0;
  __lock(7);
  local_8 = (undefined *)0x0;
  local_24 = FUN_10943608();
  iVar5 = FUN_10943520(local_20);
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
  DAT_109a159c = 0;
  DAT_1096e7ec = 0xffffffff;
  DAT_1096e7e0 = 0xffffffff;
  _Str1 = __getenv_helper_nolock("TZ");
  if ((_Str1 == (char *)0x0) || (*_Str1 == '\0')) {
    if (DAT_109a15a0 != (char *)0x0) {
      _free(DAT_109a15a0);
      DAT_109a15a0 = (char *)0x0;
    }
    DVar8 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_109a14f0);
    if (DVar8 != 0xffffffff) {
      DAT_109a159c = 1;
      local_20[0] = DAT_109a14f0 * 0x3c;
      if (DAT_109a1536 != 0) {
        local_20[0] = local_20[0] + DAT_109a1544 * 0x3c;
      }
      if ((DAT_109a158a == 0) || (DAT_109a1598 == 0)) {
        local_28 = 0;
        local_2c = 0;
      }
      else {
        local_28 = 1;
        local_2c = (DAT_109a1598 - DAT_109a1544) * 0x3c;
      }
      iVar5 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_109a14f4,-1,*local_24,0x3f,(LPCSTR)0x0,
                                  &local_34);
      if ((iVar5 == 0) || (local_34 != 0)) {
        **local_24 = 0;
      }
      else {
        (*local_24)[0x3f] = 0;
      }
      iVar5 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_109a1548,-1,local_24[1],0x3f,(LPCSTR)0x0,
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
    if (DAT_109a15a0 != (char *)0x0) {
      iVar5 = _strcmp(_Str1,DAT_109a15a0);
      if (iVar5 == 0) goto LAB_1094384e;
      if (DAT_109a15a0 != (char *)0x0) {
        _free(DAT_109a15a0);
      }
    }
    sVar7 = _strlen(_Str1);
    DAT_109a15a0 = __malloc_crt(sVar7 + 1);
    if (DAT_109a15a0 != (char *)0x0) {
      pcVar11 = _Str1;
      sVar7 = _strlen(_Str1);
      eVar6 = _strcpy_s(DAT_109a15a0,sVar7 + 1,pcVar11);
      if (eVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_10943855;
    }
  }
LAB_1094384e:
  local_30 = 1;
LAB_10943855:
  iVar4 = local_20[0];
  piVar9 = FUN_10943602();
  iVar5 = local_28;
  *piVar9 = iVar4;
  piVar9 = FUN_109435f6();
  lVar10 = local_2c;
  *piVar9 = iVar5;
  piVar9 = FUN_109435fc();
  *piVar9 = lVar10;
  local_8 = (undefined *)0xfffffffe;
  FUN_109438e1();
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
    piVar9 = FUN_10943602();
    iVar5 = local_28;
    *piVar9 = iVar4;
    piVar9 = FUN_109435f6();
    *piVar9 = iVar5;
  }
  return;
}


// ==== 109438e1 FUN_109438e1

void FUN_109438e1(void)

{
  FUN_10929478(7);
  return;
}


// ==== 1094397b cvtdate

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
      iVar4 = (&DAT_1096eacc)[in_EAX];
    }
    else {
      iVar4 = *(int *)(&DAT_1096eb00 + in_EAX * 4);
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
        iVar2 = *(int *)(&DAT_1096ead0 + in_EAX * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_1096eb04 + in_EAX * 4);
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
      iVar6 = (&DAT_1096eacc)[in_EAX];
    }
    else {
      iVar6 = *(int *)(&DAT_1096eb00 + in_EAX * 4);
    }
    iVar6 = iVar6 + param_6;
  }
  iVar4 = ((in_ECX * 0x3c + param_7) * 0x3c + param_8) * 1000 + param_9;
  if (param_1 == 1) {
    DAT_1096e7e0 = param_3;
    DAT_1096e7e4 = iVar6;
    DAT_1096e7e8 = iVar4;
  }
  else {
    DAT_1096e7f0 = iVar6;
    DAT_1096e7f4 = iVar4;
    eVar3 = __get_dstbias(&local_8);
    if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar2 = local_8 * 1000;
    DAT_1096e7f4 = DAT_1096e7f4 + iVar2;
    if (DAT_1096e7f4 < 0) {
      DAT_1096e7f4 = DAT_1096e7f4 + 86400000;
      DAT_1096e7f0 = DAT_1096e7f0 + -1;
    }
    else {
      iVar2 = 86400000;
      if (86399999 < DAT_1096e7f4) {
        DAT_1096e7f4 = DAT_1096e7f4 + -86400000;
        DAT_1096e7f0 = DAT_1096e7f0 + 1;
      }
    }
    DAT_1096e7ec = param_3;
  }
  return iVar2;
}


// ==== 10943b70 __isindst_nolock

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
  if ((uVar7 != DAT_1096e7e0) || (uVar7 != DAT_1096e7ec)) {
    if (DAT_109a159c == 0) {
      cvtdate(1,1,uVar7,1,0,0,0,0,0);
      cvtdate(0,1,unaff_EDI[5],5,0,0,0,0,0);
    }
    else {
      if (DAT_109a1588 != 0) {
        uVar8 = (uint)DAT_109a158e;
        uVar4 = 0;
        uVar5 = 0;
      }
      else {
        uVar4 = (uint)DAT_109a158c;
        uVar8 = 0;
        uVar5 = (uint)DAT_109a158e;
      }
      cvtdate(1,(uint)(DAT_109a1588 == 0),uVar7,uVar5,uVar4,uVar8,(uint)DAT_109a1592,
              (uint)DAT_109a1594,(uint)DAT_109a1596);
      if (DAT_109a1534 != 0) {
        uVar8 = (uint)DAT_109a153a;
        uVar4 = 0;
        uVar5 = 0;
        uVar7 = unaff_EDI[5];
      }
      else {
        uVar4 = (uint)DAT_109a1538;
        uVar8 = 0;
        uVar5 = (uint)DAT_109a153a;
        uVar7 = unaff_EDI[5];
      }
      cvtdate(0,(uint)(DAT_109a1534 == 0),uVar7,uVar5,uVar4,uVar8,(uint)DAT_109a153e,
              (uint)DAT_109a1540,(uint)DAT_109a1542);
    }
  }
  iVar1 = unaff_EDI[7];
  if (DAT_1096e7e4 < DAT_1096e7f0) {
    if ((iVar1 < DAT_1096e7e4) || (DAT_1096e7f0 < iVar1)) {
      return false;
    }
    if ((DAT_1096e7e4 < iVar1) && (iVar1 < DAT_1096e7f0)) {
      return true;
    }
  }
  else {
    if (iVar1 < DAT_1096e7f0) {
      return true;
    }
    if (DAT_1096e7e4 < iVar1) {
      return true;
    }
    if ((DAT_1096e7f0 < iVar1) && (iVar1 < DAT_1096e7e4)) {
      return false;
    }
  }
  iVar6 = ((unaff_EDI[2] * 0x3c + unaff_EDI[1]) * 0x3c + *unaff_EDI) * 1000;
  if (iVar1 == DAT_1096e7e4) {
    bVar2 = DAT_1096e7e8 <= iVar6;
  }
  else {
    bVar2 = iVar6 < DAT_1096e7f4;
  }
  return bVar2;
}


// ==== 10943d1e ___tzset

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tzset
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___tzset(void)

{
  if (DAT_109a15a4 == 0) {
    __lock(6);
    if (DAT_109a15a4 == 0) {
      FUN_10943632();
      DAT_109a15a4 = DAT_109a15a4 + 1;
    }
    FUN_10943d64();
  }
  return;
}


// ==== 10943d64 FUN_10943d64

void FUN_10943d64(void)

{
  FUN_10929478(6);
  return;
}


// ==== 10943de6 __strnicmp_l

/* Library Function - Single Match
    __strnicmp_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __strnicmp_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  DWORD *pDVar1;
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
      pDVar1 = FUN_1092681e();
      *pDVar1 = 0x16;
      FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
      pDVar1 = FUN_1092681e();
      *pDVar1 = 0x16;
      FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar2 = 0x7fffffff;
    }
  }
  return iVar2;
}


// ==== 10943ed6 __strnicmp

/* Library Function - Single Match
    __strnicmp
   
   Library: Visual Studio 2005 Release */

int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  DWORD *pDVar1;
  int iVar2;
  
  if (DAT_109a1424 == 0) {
    if (((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) && (_MaxCount < 0x80000000)) {
      iVar2 = ___ascii_strnicmp(_Str1,_Str2,_MaxCount);
      return iVar2;
    }
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = 0x7fffffff;
  }
  else {
    iVar2 = __strnicmp_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  }
  return iVar2;
}


// ==== 10943f32 xtoa_s

/* Library Function - Single Match
    _xtoa_s@20
   
   Library: Visual Studio 2005 Release
   __stdcall xtoa_s,20 */

DWORD xtoa_s(uint param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  uint in_EAX;
  DWORD *pDVar3;
  char *in_ECX;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  DWORD DVar7;
  uint local_8;
  
  if (in_ECX == (char *)0x0) {
    pDVar3 = FUN_1092681e();
    *pDVar3 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  if (param_1 == 0) {
LAB_10943f64:
    pDVar3 = FUN_1092681e();
    DVar7 = 0x16;
  }
  else {
    *in_ECX = '\0';
    if ((param_3 != 0) + 1 < param_1) {
      if (0x22 < param_2 - 2) goto LAB_10943f64;
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
    pDVar3 = FUN_1092681e();
    DVar7 = 0x22;
  }
  *pDVar3 = DVar7;
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return DVar7;
}


// ==== 1094400d __itoa_s

/* Library Function - Single Match
    __itoa_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __itoa_s(int _Value,char *_DstBuf,size_t _Size,int _Radix)

{
  DWORD DVar1;
  int iVar2;
  
  if ((_Radix == 10) && (_Value < 0)) {
    iVar2 = 1;
    _Radix = 10;
  }
  else {
    iVar2 = 0;
  }
  DVar1 = xtoa_s(_Size,_Radix,iVar2);
  return DVar1;
}


// ==== 10944035 __ltoa_s

/* Library Function - Single Match
    __ltoa_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __ltoa_s(long _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = 0;
  if ((_Radix == 10) && (_Val < 0)) {
    iVar1 = 1;
  }
  DVar2 = xtoa_s(_Size,_Radix,iVar1);
  return DVar2;
}


// ==== 10944072 x64toa_s

/* Library Function - Single Match
    @x64toa_s@24
   
   Library: Visual Studio 2005 Release
   __fastcall x64toa_s,24 */

DWORD __fastcall
x64toa_s(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6,
        char *param_7)

{
  char *pcVar1;
  DWORD *pDVar2;
  char cVar3;
  uint extraout_ECX;
  char *pcVar4;
  char *unaff_EDI;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  DWORD DVar8;
  uint local_8;
  
  if ((unaff_EDI == (char *)0x0) || (param_5 == 0)) {
LAB_10944080:
    pDVar2 = FUN_1092681e();
    DVar8 = 0x16;
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
        pDVar2 = FUN_1092681e();
        DVar8 = 0x22;
        *pDVar2 = 0x22;
        goto LAB_1094408a;
      }
      goto LAB_10944080;
    }
    pDVar2 = FUN_1092681e();
    DVar8 = 0x22;
  }
  *pDVar2 = DVar8;
LAB_1094408a:
  FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return DVar8;
}


// ==== 10944168 __i64toa_s

/* Library Function - Single Match
    __i64toa_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __i64toa_s(longlong _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  char *pcVar1;
  DWORD DVar2;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  pcVar1 = (char *)0x0;
  if (((_Radix == 10) && (_Val < 0x100000000)) && (_Val < 0)) {
    pcVar1 = (char *)0x1;
  }
  DVar2 = x64toa_s(in_ECX,in_EDX,(uint)_Val,_Val._4_4_,_Size,_Radix,pcVar1);
  return DVar2;
}


// ==== 1094419b __ui64toa_s

/* Library Function - Single Match
    __ui64toa_s
   
   Library: Visual Studio 2005 Release */

errno_t __cdecl __ui64toa_s(ulonglong _Val,char *_DstBuf,size_t _Size,int _Radix)

{
  DWORD DVar1;
  undefined4 in_ECX;
  undefined4 in_EDX;
  
  DVar1 = x64toa_s(in_ECX,in_EDX,(uint)_Val,_Val._4_4_,_Size,_Radix,(char *)0x0);
  return DVar1;
}


// ==== 109441b8 ___ansicp

/* Library Function - Single Match
    ___ansicp
   
   Library: Visual Studio 2005 Release */

void __cdecl ___ansicp(LCID param_1)

{
  int iVar1;
  CHAR local_10 [6];
  undefined1 local_a;
  uint local_8;
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  local_a = 0;
  iVar1 = GetLocaleInfoA(param_1,0x1004,local_10,6);
  if (iVar1 != 0) {
    _atol(local_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 109441ff ___convertcp

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
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  cbMultiByte = *param_4;
  bVar1 = false;
  if (param_1 == param_2) goto LAB_1094439f;
  BVar2 = GetCPInfo(param_1,&local_1c);
  if ((((BVar2 == 0) || (local_1c.MaxCharSize != 1)) ||
      (BVar2 = GetCPInfo(param_2,&local_1c), BVar2 == 0)) || (local_1c.MaxCharSize != 1)) {
    uVar6 = MultiByteToWideChar(param_1,1,param_3,cbMultiByte,(LPWSTR)0x0,0);
    bVar7 = false;
    if (uVar6 == 0) goto LAB_1094439f;
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
LAB_109442df:
        local_20 = (LPCWSTR)(puVar4 + 2);
      }
    }
    else {
      puVar4 = _malloc(_Size);
      local_20 = (LPCWSTR)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xdddd;
        goto LAB_109442df;
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
LAB_1094439f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// ==== 109443b1 strtoxq

/* Library Function - Single Match
    unsigned __int64 __cdecl strtoxq(struct localeinfo_struct *,char const *,char const * *,int,int)
   
   Library: Visual Studio 2005 Release */

__uint64 __cdecl
strtoxq(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5)

{
  ushort uVar1;
  char *pcVar2;
  DWORD *pDVar3;
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
    pDVar3 = FUN_1092681e();
    *pDVar3 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    if (local_30 != '\0') {
      *(uint *)(local_34 + 0x70) = *(uint *)(local_34 + 0x70) & 0xfffffffd;
    }
    local_14._0_4_ = 0;
    local_14._4_4_ = 0;
    goto LAB_10944641;
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
LAB_1094446f:
    local_5 = *pbVar8;
    pbVar8 = pbVar7 + 2;
  }
  else if (local_5 == 0x2b) goto LAB_1094446f;
  local_c = pbVar8;
  if (param_4 == 0) {
    if (local_5 != 0x30) {
      param_4 = 10;
      goto LAB_109444c4;
    }
    if ((*pbVar8 != 0x78) && (*pbVar8 != 0x58)) {
      param_4 = 8;
      goto LAB_109444c4;
    }
    param_4 = 0x10;
  }
  if (((param_4 == 0x10) && (local_5 == 0x30)) && ((*pbVar8 == 0x78 || (*pbVar8 == 0x58)))) {
    local_5 = pbVar8[1];
    local_c = pbVar8 + 2;
  }
LAB_109444c4:
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
    pDVar3 = FUN_1092681e();
    *pDVar3 = 0x22;
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
LAB_10944641:
  return CONCAT44(local_14._4_4_,(uint)local_14);
}


// ==== 10944645 __strtoi64

/* Library Function - Single Match
    __strtoi64
   
   Library: Visual Studio 2005 Release */

longlong __cdecl __strtoi64(char *_String,char **_EndPtr,int _Radix)

{
  __uint64 _Var1;
  undefined **ppuVar2;
  
  if (DAT_109a1424 == 0) {
    ppuVar2 = &PTR_DAT_1096df10;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  _Var1 = strtoxq((localeinfo_struct *)ppuVar2,_String,_EndPtr,_Radix,0);
  return _Var1;
}


// ==== 10944689 __strtoui64

/* Library Function - Single Match
    __strtoui64
   
   Library: Visual Studio 2005 Release */

ulonglong __cdecl __strtoui64(char *_String,char **_EndPtr,int _Radix)

{
  __uint64 _Var1;
  undefined **ppuVar2;
  
  if (DAT_109a1424 == 0) {
    ppuVar2 = &PTR_DAT_1096df10;
  }
  else {
    ppuVar2 = (undefined **)0x0;
  }
  _Var1 = strtoxq((localeinfo_struct *)ppuVar2,_String,_EndPtr,_Radix,1);
  return _Var1;
}


// ==== 109446ce ___mtold12

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
  
  uVar7 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
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


// ==== 109448b1 __ctrlfp

/* Library Function - Single Match
    __ctrlfp
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __ctrlfp(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}


// ==== 1094492e ___get_fpsr_sse2

/* Library Function - Single Match
    ___get_fpsr_sse2
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 ___get_fpsr_sse2(void)

{
  undefined4 local_8;
  
  if (DAT_109a1790 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = MXCSR;
  }
  return local_8;
}


// ==== 1094494a ___set_fpsr_sse2

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___set_fpsr_sse2
   
   Library: Visual Studio 2005 Release */

void __cdecl ___set_fpsr_sse2(uint param_1)

{
  if (DAT_109a1790 != 0) {
    if (((param_1 & 0x40) == 0) || (DAT_1096eacc == 0)) {
      MXCSR = param_1 & 0xffffffbf;
    }
    else {
      MXCSR = param_1;
    }
  }
  return;
}


// ==== 10944a49 __mbsnbicoll_l

/* Library Function - Single Match
    __mbsnbicoll_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbicoll_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  DWORD *pDVar1;
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
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
      if (iVar2 == 0) goto LAB_10944b12;
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_10944b12:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}


// ==== 10944b35 __mbsnbicoll

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2005 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  iVar1 = __mbsnbicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


// ==== 10944b4c ___wtomb_environ

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
  lpWideCharStr = (LPCWSTR)*DAT_109a0e6c;
  puVar2 = DAT_109a0e6c;
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
    iVar1 = FUN_1094546d(&local_8,0);
    if ((iVar1 < 0) && (local_8 != (LPSTR)0x0)) {
      _free(local_8);
      local_8 = (LPSTR)0x0;
    }
    puVar2 = puVar2 + 1;
    lpWideCharStr = (LPCWSTR)*puVar2;
  }
  return -1;
}


// ==== 10944bfb __crtGetStringTypeW_stat

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
  
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  if (param_4 < -1) goto LAB_10944e0d;
  if (DAT_109a15ac == 0) {
    BVar2 = GetStringTypeW(1,L"",1,(LPWORD)&local_c);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        DAT_109a15ac = 2;
      }
      goto LAB_10944c62;
    }
    DAT_109a15ac = 1;
  }
  else {
LAB_10944c62:
    if (DAT_109a15ac != 1) {
      if ((DAT_109a15ac != 2) && (DAT_109a15ac != 0)) goto LAB_10944e0d;
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
      if (_Size_00 == 0) goto LAB_10944e0d;
      if (((int)_Size_00 < 1) || (0xffffffe0 < _Size_00)) {
        local_c = (LPSTR)0x0;
      }
      else if (_Size_00 + 8 < 0x401) {
        puVar4 = (undefined4 *)&stack0xffffffe0;
        local_c = &stack0xffffffe0;
        if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_10944d13:
          local_c = (LPSTR)(puVar4 + 2);
        }
      }
      else {
        puVar4 = _malloc(_Size_00 + 8);
        local_c = (LPSTR)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xdddd;
          goto LAB_10944d13;
        }
      }
      if (local_c == (LPSTR)0x0) goto LAB_10944e0d;
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
            if (&stack0x00000000 == (undefined1 *)0x20) goto LAB_10944e01;
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
LAB_10944e01:
      __freea(local_c);
      goto LAB_10944e0d;
    }
  }
  GetStringTypeW(param_2,param_3,param_4,param_5);
LAB_10944e0d:
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}


// ==== 10944e1f ___crtGetStringTypeW

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


// ==== 10944e60 ___ascii_strnicmp

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
      if (bVar2 != (byte)uVar3) goto LAB_10944eb1;
      _MaxCount = _MaxCount - 1;
    } while (_MaxCount != 0);
    iVar5 = 0;
    bVar2 = (byte)(uVar3 >> 8);
    bVar6 = bVar2 < (byte)uVar3;
    if (bVar2 != (byte)uVar3) {
LAB_10944eb1:
      iVar5 = -1;
      if (!bVar6) {
        iVar5 = 1;
      }
    }
  }
  return iVar5;
}


// ==== 10944edb __crtCompareStringA_stat

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
  local_8 = DAT_1096d674 ^ (uint)&stack0xfffffffc;
  local_20 = param_4;
  if (DAT_109a15b0 == 0) {
    iVar1 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x78) {
        DAT_109a15b0 = 2;
      }
    }
    else {
      DAT_109a15b0 = 1;
    }
  }
  pbVar9 = in_EDX;
  uVar8 = param_3;
  if ((int)param_3 < 1) {
    if ((int)param_3 < -1) goto LAB_10945252;
  }
  else {
    do {
      uVar8 = uVar8 - 1;
      if (*pbVar9 == 0) goto LAB_10944f55;
      pbVar9 = pbVar9 + 1;
    } while (uVar8 != 0);
    uVar8 = 0xffffffff;
LAB_10944f55:
    param_3 = param_3 + (-1 - uVar8);
  }
  pcVar7 = lpMultiByteStr;
  iVar1 = param_5;
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_10945252;
  }
  else {
    do {
      iVar1 = iVar1 + -1;
      if (*pcVar7 == '\0') goto LAB_10944f77;
      pcVar7 = pcVar7 + 1;
    } while (iVar1 != 0);
    iVar1 = -1;
LAB_10944f77:
    param_5 = param_5 + (-1 - iVar1);
  }
  if ((DAT_109a15b0 == 2) || (DAT_109a15b0 == 0)) {
    _Memory = (PCNZCH)0x0;
    pbVar9 = (byte *)0x0;
    if (param_1 == (localeinfo_struct *)0x0) {
      param_1 = *(localeinfo_struct **)(*in_ECX + 0x14);
    }
    if (param_6 == (char *)0x0) {
      param_6 = *(char **)(*in_ECX + 4);
    }
    pcVar7 = (char *)___ansicp((LCID)param_1);
    if (pcVar7 == (char *)0xffffffff) goto LAB_10945252;
    local_28 = in_EDX;
    if (pcVar7 != param_6) {
      pbVar9 = (byte *)___convertcp((UINT)param_6,(UINT)pcVar7,(char *)in_EDX,&param_3,(LPSTR)0x0,0)
      ;
      if (pbVar9 == (byte *)0x0) goto LAB_10945252;
      _Memory = (PCNZCH)___convertcp((UINT)param_6,(UINT)pcVar7,lpMultiByteStr,(uint *)&param_5,
                                     (LPSTR)0x0,0);
      local_28 = pbVar9;
      local_20 = _Memory;
      if (_Memory == (PCNZCH)0x0) {
        _free(pbVar9);
        goto LAB_10945252;
      }
    }
    CompareStringA((LCID)param_1,param_2,(PCNZCH)local_28,param_3,local_20,param_5);
    if (pbVar9 != (byte *)0x0) {
      _free(pbVar9);
      _free(_Memory);
    }
    goto LAB_10945252;
  }
  if (DAT_109a15b0 != 1) goto LAB_10945252;
  if (param_6 == (char *)0x0) {
    param_6 = *(char **)(*in_ECX + 4);
  }
  if ((param_3 == 0) || (param_5 == 0)) {
    if ((param_3 == param_5) ||
       (((1 < param_5 || (1 < (int)param_3)) ||
        (BVar3 = GetCPInfo((UINT)param_6,&local_1c), BVar3 == 0)))) goto LAB_10945252;
    if (0 < (int)param_3) {
      if (1 < local_1c.MaxCharSize) {
        pBVar4 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar4[1] != 0)) &&
               ((*in_EDX < *pBVar4 || (pBVar4[1] < *in_EDX))))) {
          pBVar4 = pBVar4 + 2;
          local_1c.LeadByte[0] = *pBVar4;
        }
      }
      goto LAB_10945252;
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
      goto LAB_10945252;
    }
  }
  cchWideChar = MultiByteToWideChar((UINT)param_6,9,(LPCSTR)in_EDX,param_3,(LPWSTR)0x0,0);
  if (cchWideChar == 0) goto LAB_10945252;
  if (((int)cchWideChar < 1) || (0xffffffe0 / cchWideChar < 2)) {
    local_24 = (PCNZWCH)0x0;
  }
  else {
    uVar6 = cchWideChar * 2 + 8;
    if (uVar6 < 0x401) {
      puVar5 = (undefined4 *)&stack0xffffffc4;
      local_24 = (PCNZWCH)&stack0xffffffc4;
      if (&stack0x00000000 != (undefined1 *)0x3c) {
LAB_109450cb:
        local_24 = (PCNZWCH)(puVar5 + 2);
      }
    }
    else {
      puVar5 = _malloc(uVar6);
      local_24 = (PCNZWCH)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_109450cb;
      }
    }
  }
  if (local_24 == (PCNZWCH)0x0) goto LAB_10945252;
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
        if (&stack0x00000000 == (undefined1 *)0x3c) goto LAB_1094518c;
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
LAB_1094518c:
  __freea(local_24);
LAB_10945252:
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}


// ==== 10945264 ___crtCompareStringA

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


// ==== 109452a4 __strnicoll_l

/* Library Function - Single Match
    __strnicoll_l
   
   Library: Visual Studio 2005 Release */

int __cdecl __strnicoll_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  LPCWSTR _LocaleName;
  DWORD *pDVar1;
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
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
        pDVar1 = FUN_1092681e();
        *pDVar1 = 0x16;
        goto LAB_10945379;
      }
      iVar2 = iVar2 + -2;
    }
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  else {
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
LAB_10945379:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}


// ==== 1094539c __strnicoll

/* Library Function - Single Match
    __strnicoll
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

int __cdecl __strnicoll(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (DAT_109a1424 == 0) {
    iVar1 = __strnicmp(_Str1,_Str2,_MaxCount);
    return iVar1;
  }
  iVar1 = __strnicoll_l(_Str1,_Str2,_MaxCount,(_locale_t)0x0);
  return iVar1;
}


// ==== 109453c3 findenv

/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2005 Release */

int __cdecl findenv(uchar *param_1)

{
  int iVar1;
  int *piVar2;
  size_t unaff_EDI;
  
  piVar2 = DAT_109a0e64;
  while( true ) {
    if ((uchar *)*piVar2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_109a0e64 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*piVar2,unaff_EDI);
    if ((iVar1 == 0) &&
       ((*(char *)(unaff_EDI + *piVar2) == '=' || (*(char *)(unaff_EDI + *piVar2) == '\0')))) break;
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_109a0e64 >> 2;
}


// ==== 10945410 copy_environ

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


// ==== 1094546d FUN_1094546d

undefined4 __cdecl FUN_1094546d(undefined4 *param_1,int param_2)

{
  uint _Size;
  uchar *_Str;
  DWORD *pDVar1;
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
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    FUN_109267a6((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0xffffffff;
  }
  _Str = (uchar *)*param_1;
  if (((_Str == (uchar *)0x0) || (puVar2 = __mbschr(_Str,0x3d), puVar2 == (uchar *)0x0)) ||
     (_Str == puVar2)) {
LAB_109454fb:
    pDVar1 = FUN_1092681e();
    *pDVar1 = 0x16;
    return 0xffffffff;
  }
  bVar9 = puVar2[1] == '\0';
  if (DAT_109a0e64 == DAT_109a0e68) {
    DAT_109a0e64 = copy_environ();
  }
  if (DAT_109a0e64 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_109a0e6c == (undefined4 *)0x0)) {
      if (bVar9) {
        return 0;
      }
      DAT_109a0e64 = __malloc_crt(4);
      if (DAT_109a0e64 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_109a0e64 = 0;
      if (DAT_109a0e6c == (undefined4 *)0x0) {
        DAT_109a0e6c = __malloc_crt(4);
        if (DAT_109a0e6c == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_109a0e6c = 0;
      }
    }
    else {
      iVar3 = ___wtomb_environ();
      if (iVar3 != 0) goto LAB_109454fb;
    }
  }
  piVar4 = DAT_109a0e64;
  if (DAT_109a0e64 == (int *)0x0) {
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
    piVar4 = __recalloc_crt(DAT_109a0e64,4,_Size);
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
      goto LAB_1094560c;
    }
    while (*piVar8 != 0) {
      *piVar8 = piVar8[1];
      _Count = _Count + 1;
      piVar8 = piVar4 + _Count;
    }
    if ((0x3ffffffe < _Count) ||
       (piVar4 = __recalloc_crt(DAT_109a0e64,_Count,4), piVar4 == (int *)0x0)) goto LAB_1094560c;
  }
  DAT_109a0e64 = piVar4;
LAB_1094560c:
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
        pDVar1 = FUN_1092681e();
        *pDVar1 = 0x2a;
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


// ==== 109456b9 __strdup

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


// ==== 1094570a KERNEL32.DLL::RtlUnwind thunk -> EXTERNAL:0000019f

// ==== 10952200 Unwind@10952200

void Unwind_10952200(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WWizardDialog::~WWizardDialog(*(WWizardDialog **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952209 Unwind@10952209

void Unwind_10952209(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WLabel::~WLabel((WLabel *)(*(int *)(unaff_EBP + -0x10) + 0x2fc));
  return;
}


// ==== 10952218 Unwind@10952218

void Unwind_10952218(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952221. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FWindowsBitmap::~FWindowsBitmap((FWindowsBitmap *)(*(int *)(unaff_EBP + -0x10) + 0x33c));
  return;
}


// ==== 10952227 Unwind@10952227

void Unwind_10952227(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x350));
  return;
}


// ==== 10952250 Unwind@10952250

void Unwind_10952250(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WWizardDialog::~WWizardDialog(*(WWizardDialog **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952259 Unwind@10952259

void Unwind_10952259(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WLabel::~WLabel((WLabel *)(*(int *)(unaff_EBP + -0x10) + 0x2fc));
  return;
}


// ==== 10952268 Unwind@10952268

void Unwind_10952268(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952271. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FWindowsBitmap::~FWindowsBitmap((FWindowsBitmap *)(*(int *)(unaff_EBP + -0x10) + 0x33c));
  return;
}


// ==== 10952277 Unwind@10952277

void Unwind_10952277(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x350));
  return;
}


// ==== 109522b0 Unwind@109522b0

void Unwind_109522b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109522b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WWizardPage::~WWizardPage(*(WWizardPage **)(unaff_EBP + -0x10));
  return;
}


// ==== 109522b9 Unwind@109522b9

void Unwind_109522b9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109522bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WButton::~WButton((WButton *)(*(int *)(unaff_EBP + -0x10) + 0x44));
  return;
}


// ==== 109522c5 Unwind@109522c5

void Unwind_109522c5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109522ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WButton::~WButton((WButton *)(*(int *)(unaff_EBP + -0x10) + 0xd8));
  return;
}


// ==== 109522d4 Unwind@109522d4

void Unwind_109522d4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109522dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WButton::~WButton((WButton *)(*(int *)(unaff_EBP + -0x10) + 0x16c));
  return;
}


// ==== 109522e3 Unwind@109522e3

void Unwind_109522e3(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109522ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WButton::~WButton((WButton *)(*(int *)(unaff_EBP + -0x10) + 0x200));
  return;
}


// ==== 109522f2 Unwind@109522f2

void Unwind_109522f2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109522fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WButton::~WButton((WButton *)(*(int *)(unaff_EBP + -0x10) + 0x294));
  return;
}


// ==== 10952330 Unwind@10952330

void Unwind_10952330(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WWizardPage::~WWizardPage(*(WWizardPage **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952339 Unwind@10952339

void Unwind_10952339(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1095233f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WButton::~WButton((WButton *)(*(int *)(unaff_EBP + -0x10) + 0x44));
  return;
}


// ==== 10952345 Unwind@10952345

void Unwind_10952345(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1095234e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WButton::~WButton((WButton *)(*(int *)(unaff_EBP + -0x10) + 0xd8));
  return;
}


// ==== 10952354 Unwind@10952354

void Unwind_10952354(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1095235d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WButton::~WButton((WButton *)(*(int *)(unaff_EBP + -0x10) + 0x16c));
  return;
}


// ==== 10952363 Unwind@10952363

void Unwind_10952363(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1095236c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WButton::~WButton((WButton *)(*(int *)(unaff_EBP + -0x10) + 0x200));
  return;
}


// ==== 10952372 Unwind@10952372

void Unwind_10952372(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1095237b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WButton::~WButton((WButton *)(*(int *)(unaff_EBP + -0x10) + 0x294));
  return;
}


// ==== 109523b0 Unwind@109523b0

void Unwind_109523b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109523b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 109523b9 Unwind@109523b9

void Unwind_109523b9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109523bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x40));
  return;
}


// ==== 109523c2 Unwind@109523c2

void Unwind_109523c2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109523c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x34));
  return;
}


// ==== 109523e0 Unwind@109523e0

void Unwind_109523e0(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 4;
  }
                    /* WARNING: Could not recover jumptable at 0x10952402. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString(*(FString **)(unaff_EBP + -0x14));
  return;
}


// ==== 10952440 Unwind@10952440

void Unwind_10952440(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WCrashBoxDialog::~WCrashBoxDialog((WCrashBoxDialog *)(unaff_EBP + -0x290));
  return;
}


// ==== 10952470 Unwind@10952470

void Unwind_10952470(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 10952510 Unwind@10952510

void Unwind_10952510(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952516. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ==== 10952530 Unwind@10952530

void Unwind_10952530(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 8));
  return;
}


// ==== 10952580 Unwind@10952580

void Unwind_10952580(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 109525b0 Unwind@109525b0

void Unwind_109525b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109525b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 109525d0 Unwind@109525d0

void Unwind_109525d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109525d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 109525f0 Unwind@109525f0

void Unwind_109525f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109525f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 109525fc Unwind@109525fc

void Unwind_109525fc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ==== 10952620 Unwind@10952620

void Unwind_10952620(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TArray<unsigned_char>::~TArray<unsigned_char>((TArray<unsigned_char> *)(unaff_EBP + -0x34));
  return;
}


// ==== 10952640 Unwind@10952640

void Unwind_10952640(void)

{
  int unaff_EBP;
  
  thunk_FUN_10903570(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}


// ==== 10952660 Unwind@10952660

void Unwind_10952660(void)

{
  int unaff_EBP;
  
  thunk_FUN_10903680((undefined4 *)(unaff_EBP + -0x24));
  return;
}


// ==== 10952690 Unwind@10952690

void Unwind_10952690(void)

{
  int unaff_EBP;
  
  thunk_FUN_10903680((undefined4 *)(unaff_EBP + -0x14));
  return;
}


// ==== 109526d0 Unwind@109526d0

void Unwind_109526d0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10904d40(unaff_EBP + -0x2c);
  return;
}


// ==== 109526f0 Unwind@109526f0

void Unwind_109526f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109526f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x40));
  return;
}


// ==== 109526f9 Unwind@109526f9

void Unwind_109526f9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109526fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x30));
  return;
}


// ==== 10952702 Unwind@10952702

void Unwind_10952702(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952705. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x5c));
  return;
}


// ==== 1095270b Unwind@1095270b

void Unwind_1095270b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1095270e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x50));
  return;
}


// ==== 10952740 Unwind@10952740

void Unwind_10952740(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952743. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952760 Unwind@10952760

void Unwind_10952760(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952763. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x18));
  return;
}


// ==== 10952790 Unwind@10952790

void Unwind_10952790(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952793. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x1c));
  return;
}


// ==== 109527b0 Unwind@109527b0

void Unwind_109527b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109527b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 109527d0 Unwind@109527d0

void Unwind_109527d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109527d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 109527f0 Unwind@109527f0

void Unwind_109527f0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10903570(*(undefined4 *)(unaff_EBP + 4));
  return;
}


// ==== 10952810 Unwind@10952810

void Unwind_10952810(void)

{
  int unaff_EBP;
  
  thunk_FUN_10904dd0((undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 10952818 Unwind@10952818

void Unwind_10952818(void)

{
  int unaff_EBP;
  
  thunk_FUN_10904dd0((undefined4 *)(unaff_EBP + 0xc));
  return;
}


// ==== 10952880 Unwind@10952880

void Unwind_10952880(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x10952893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FString::~FString(*(FString **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 109528b0 Unwind@109528b0

void Unwind_109528b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109528b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x10));
  return;
}


// ==== 109528d0 Unwind@109528d0

void Unwind_109528d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109528d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x18));
  return;
}


// ==== 109528f0 Unwind@109528f0

void Unwind_109528f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109528f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArchive::~FArchive(*(FArchive **)(unaff_EBP + -0x18));
  return;
}


// ==== 10952930 Unwind@10952930

void Unwind_10952930(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952950 Unwind@10952950

void Unwind_10952950(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WWizardPage::~WWizardPage(*(WWizardPage **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952959 Unwind@10952959

void Unwind_10952959(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1095295f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WCoolButton::~WCoolButton((WCoolButton *)(*(int *)(unaff_EBP + -0x10) + 0x44));
  return;
}


// ==== 10952965 Unwind@10952965

void Unwind_10952965(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1095296e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WCoolButton::~WCoolButton((WCoolButton *)(*(int *)(unaff_EBP + -0x10) + 0xe0));
  return;
}


// ==== 10952974 Unwind@10952974

void Unwind_10952974(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1095297d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WCoolButton::~WCoolButton((WCoolButton *)(*(int *)(unaff_EBP + -0x10) + 0x17c));
  return;
}


// ==== 109529a0 Unwind@109529a0

void Unwind_109529a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109529a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WWizardPage::~WWizardPage(*(WWizardPage **)(unaff_EBP + -0x10));
  return;
}


// ==== 109529a9 Unwind@109529a9

void Unwind_109529a9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109529af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WCoolButton::~WCoolButton((WCoolButton *)(*(int *)(unaff_EBP + -0x10) + 0x44));
  return;
}


// ==== 109529b5 Unwind@109529b5

void Unwind_109529b5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109529be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WCoolButton::~WCoolButton((WCoolButton *)(*(int *)(unaff_EBP + -0x10) + 0xe0));
  return;
}


// ==== 109529c4 Unwind@109529c4

void Unwind_109529c4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109529cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WCoolButton::~WCoolButton((WCoolButton *)(*(int *)(unaff_EBP + -0x10) + 0x17c));
  return;
}


// ==== 109529f0 Unwind@109529f0

void Unwind_109529f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109529f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952a10 Unwind@10952a10

void Unwind_10952a10(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952a13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952a30 Unwind@10952a30

void Unwind_10952a30(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952a36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 10952a3c Unwind@10952a3c

void Unwind_10952a3c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952a42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ==== 10952a60 Unwind@10952a60

void Unwind_10952a60(void)

{
  int unaff_EBP;
  
  thunk_FUN_10903570(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}


// ==== 10952a6b Unwind@10952a6b

void Unwind_10952a6b(void)

{
  int unaff_EBP;
  
  thunk_FUN_10903570(*(undefined4 *)(unaff_EBP + 0xc));
  return;
}


// ==== 10952a76 Unwind@10952a76

void Unwind_10952a76(void)

{
  int unaff_EBP;
  
  thunk_FUN_10903470(unaff_EBP + -0x48);
  return;
}


// ==== 10952a7e Unwind@10952a7e

void Unwind_10952a7e(void)

{
  int unaff_EBP;
  
  thunk_FUN_10903570(*(undefined4 *)(unaff_EBP + 0xc));
  return;
}


// ==== 10952aa0 Unwind@10952aa0

void Unwind_10952aa0(void)

{
  DAT_109a0adc = DAT_109a0adc & 0xfffffffe;
  return;
}


// ==== 10952aae Unwind@10952aae

void Unwind_10952aae(void)

{
  int unaff_EBP;
  
  thunk_FUN_1090f260((FArray *)(unaff_EBP + -0x6c));
  return;
}


// ==== 10952ab6 Unwind@10952ab6

void Unwind_10952ab6(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952ab9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x50));
  return;
}


// ==== 10952abf Unwind@10952abf

void Unwind_10952abf(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952ac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x38));
  return;
}


// ==== 10952ac8 Unwind@10952ac8

void Unwind_10952ac8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x2c));
  return;
}


// ==== 10952ad1 Unwind@10952ad1

void Unwind_10952ad1(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x20));
  return;
}


// ==== 10952ada Unwind@10952ada

void Unwind_10952ada(void)

{
  int unaff_EBP;
  
  thunk_FUN_109025e0((WWindow *)(unaff_EBP + -0x3d0));
  return;
}


// ==== 10952ae5 Unwind@10952ae5

void Unwind_10952ae5(void)

{
  int unaff_EBP;
  
  thunk_FUN_10903570(*(undefined4 *)(unaff_EBP + -0x30));
  return;
}


// ==== 10952b10 Unwind@10952b10

void Unwind_10952b10(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952b13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + 0x58));
  return;
}


// ==== 10952b30 Unwind@10952b30

void Unwind_10952b30(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952b33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + 8));
  return;
}


// ==== 10952b39 Unwind@10952b39

void Unwind_10952b39(void)

{
  int unaff_EBP;
  
  thunk_FUN_1090f260((FArray *)(*(int *)(unaff_EBP + -0x20) + 0x3c));
  return;
}


// ==== 10952b44 Unwind@10952b44

void Unwind_10952b44(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952b47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + 8));
  return;
}


// ==== 10952b4d Unwind@10952b4d

void Unwind_10952b4d(void)

{
  int unaff_EBP;
  
  thunk_FUN_1090f2d0((FArray *)(*(int *)(unaff_EBP + -0x20) + 0x48));
  return;
}


// ==== 10952b80 Unwind@10952b80

void Unwind_10952b80(void)

{
  int unaff_EBP;
  
  thunk_FUN_1090f260((FArray *)(*(int *)(unaff_EBP + -0x1c) + 0x3c));
  return;
}


// ==== 10952b8b Unwind@10952b8b

void Unwind_10952b8b(void)

{
  int unaff_EBP;
  
  thunk_FUN_1090f2d0((FArray *)(*(int *)(unaff_EBP + -0x1c) + 0x48));
  return;
}


// ==== 10952bb0 Unwind@10952bb0

void Unwind_10952bb0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911330(unaff_EBP + -0x70);
  return;
}


// ==== 10952bd0 Unwind@10952bd0

void Unwind_10952bd0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952bd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x44));
  return;
}


// ==== 10952bd9 Unwind@10952bd9

void Unwind_10952bd9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x38));
  return;
}


// ==== 10952be2 Unwind@10952be2

void Unwind_10952be2(void)

{
  int unaff_EBP;
  
  thunk_FUN_1090f260((FArray *)(unaff_EBP + -0x2c));
  return;
}


// ==== 10952bea Unwind@10952bea

void Unwind_10952bea(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952bed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x50));
  return;
}


// ==== 10952bf3 Unwind@10952bf3

void Unwind_10952bf3(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x44));
  return;
}


// ==== 10952bfc Unwind@10952bfc

void Unwind_10952bfc(void)

{
  int unaff_EBP;
  
  thunk_FUN_1090f260((FArray *)(unaff_EBP + -0x50));
  return;
}


// ==== 10952c04 Unwind@10952c04

void Unwind_10952c04(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952c07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x44));
  return;
}


// ==== 10952c0d Unwind@10952c0d

void Unwind_10952c0d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x50));
  return;
}


// ==== 10952c50 Unwind@10952c50

void Unwind_10952c50(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(unaff_EBP + -0x1c) & 0xfffffffe;
    thunk_FUN_1090f260(*(FArray **)(unaff_EBP + 8));
    return;
  }
  return;
}


// ==== 10952c80 Unwind@10952c80

void Unwind_10952c80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952c83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952ca0 Unwind@10952ca0

void Unwind_10952ca0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911c90(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952cc0 Unwind@10952cc0

void Unwind_10952cc0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911d00(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952ce0 Unwind@10952ce0

void Unwind_10952ce0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911d90(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952ce8 Unwind@10952ce8

void Unwind_10952ce8(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911d00(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952d00 Unwind@10952d00

void Unwind_10952d00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952d06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 4));
  return;
}


// ==== 10952d0c Unwind@10952d0c

void Unwind_10952d0c(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911de0((FArray *)(*(int *)(unaff_EBP + -0x14) + 0x10));
  return;
}


// ==== 10952d17 Unwind@10952d17

void Unwind_10952d17(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911d90(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952d1f Unwind@10952d1f

void Unwind_10952d1f(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911d00(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952d40 Unwind@10952d40

void Unwind_10952d40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 4));
  return;
}


// ==== 10952d4c Unwind@10952d4c

void Unwind_10952d4c(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911de0((FArray *)(*(int *)(unaff_EBP + -0x14) + 0x10));
  return;
}


// ==== 10952d57 Unwind@10952d57

void Unwind_10952d57(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911d90(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952d5f Unwind@10952d5f

void Unwind_10952d5f(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911d00(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952d80 Unwind@10952d80

void Unwind_10952d80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952d83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952da0 Unwind@10952da0

void Unwind_10952da0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912010(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952dc0 Unwind@10952dc0

void Unwind_10952dc0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912080(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952de0 Unwind@10952de0

void Unwind_10952de0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912110(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952de8 Unwind@10952de8

void Unwind_10952de8(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912080(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952e00 Unwind@10952e00

void Unwind_10952e00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952e06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 4));
  return;
}


// ==== 10952e0c Unwind@10952e0c

void Unwind_10952e0c(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912160((FArray *)(*(int *)(unaff_EBP + -0x14) + 0x10));
  return;
}


// ==== 10952e17 Unwind@10952e17

void Unwind_10952e17(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912110(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952e1f Unwind@10952e1f

void Unwind_10952e1f(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912080(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952e40 Unwind@10952e40

void Unwind_10952e40(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952e46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 4));
  return;
}


// ==== 10952e4c Unwind@10952e4c

void Unwind_10952e4c(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912160((FArray *)(*(int *)(unaff_EBP + -0x14) + 0x10));
  return;
}


// ==== 10952e57 Unwind@10952e57

void Unwind_10952e57(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912110(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952e5f Unwind@10952e5f

void Unwind_10952e5f(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912080(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952e80 Unwind@10952e80

void Unwind_10952e80(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952e83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952ea0 Unwind@10952ea0

void Unwind_10952ea0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952ea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952ea9 Unwind@10952ea9

void Unwind_10952ea9(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912380(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952ed0 Unwind@10952ed0

void Unwind_10952ed0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912380(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952ef0 Unwind@10952ef0

void Unwind_10952ef0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912460(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952f10 Unwind@10952f10

void Unwind_10952f10(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912460(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952f30 Unwind@10952f30

void Unwind_10952f30(void)

{
  int unaff_EBP;
  
  thunk_FUN_109033e0(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}


// ==== 10952f38 Unwind@10952f38

void Unwind_10952f38(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912460(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10952f40 Unwind@10952f40

void Unwind_10952f40(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912540((FArray *)(*(int *)(unaff_EBP + -0x14) + 4));
  return;
}


// ==== 10952f4b Unwind@10952f4b

void Unwind_10952f4b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952f51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x18));
  return;
}


// ==== 10952f57 Unwind@10952f57

void Unwind_10952f57(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10952f5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 0x24));
  return;
}


// ==== 10953020 Unwind@10953020

void Unwind_10953020(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10953023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10953040 Unwind@10953040

void Unwind_10953040(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10953046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 1095304c Unwind@1095304c

void Unwind_1095304c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10953052. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ==== 10953070 Unwind@10953070

void Unwind_10953070(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10953076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 1095307c Unwind@1095307c

void Unwind_1095307c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10953082. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ==== 109530a0 Unwind@109530a0

void Unwind_109530a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109530a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 109530e0 Unwind@109530e0

void Unwind_109530e0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109530e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 109530ec Unwind@109530ec

void Unwind_109530ec(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109530f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ==== 10953110 Unwind@10953110

void Unwind_10953110(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10953113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10953130 Unwind@10953130

void Unwind_10953130(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10953133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 10953139 Unwind@10953139

void Unwind_10953139(void)

{
  int unaff_EBP;
  
  thunk_FUN_10913940((undefined4 *)(unaff_EBP + -0x5c));
  return;
}


// ==== 10953141 Unwind@10953141

void Unwind_10953141(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10953144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x34));
  return;
}


// ==== 1095314a Unwind@1095314a

void Unwind_1095314a(void)

{
  int unaff_EBP;
  
  thunk_FUN_10913ce0((undefined4 *)(unaff_EBP + -0x6c));
  return;
}


// ==== 10953152 Unwind@10953152

void Unwind_10953152(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10953155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x40));
  return;
}


// ==== 1095315b Unwind@1095315b

void Unwind_1095315b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1095315e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x4c));
  return;
}


// ==== 10953180 Unwind@10953180

void Unwind_10953180(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911c90(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 109531a0 Unwind@109531a0

void Unwind_109531a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109531a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 109531a9 Unwind@109531a9

void Unwind_109531a9(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911c90(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 109531d0 Unwind@109531d0

void Unwind_109531d0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911d00(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 109531f0 Unwind@109531f0

void Unwind_109531f0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911d00(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10953210 Unwind@10953210

void Unwind_10953210(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911d00(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10953218 Unwind@10953218

void Unwind_10953218(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911d90(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10953230 Unwind@10953230

void Unwind_10953230(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911d00(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10953238 Unwind@10953238

void Unwind_10953238(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911d90(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10953250 Unwind@10953250

void Unwind_10953250(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10953256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 1095325c Unwind@1095325c

void Unwind_1095325c(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911d00(*(FArray **)(unaff_EBP + 4));
  return;
}


// ==== 10953264 Unwind@10953264

void Unwind_10953264(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911d90(*(FArray **)(unaff_EBP + 4));
  return;
}


// ==== 1095326c Unwind@1095326c

void Unwind_1095326c(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911de0((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ==== 10953290 Unwind@10953290

void Unwind_10953290(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10953293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 109532b0 Unwind@109532b0

void Unwind_109532b0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109532b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 109532bc Unwind@109532bc

void Unwind_109532bc(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911d00(*(FArray **)(unaff_EBP + 4));
  return;
}


// ==== 109532c4 Unwind@109532c4

void Unwind_109532c4(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911d90(*(FArray **)(unaff_EBP + 4));
  return;
}


// ==== 109532cc Unwind@109532cc

void Unwind_109532cc(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911de0((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ==== 109532f0 Unwind@109532f0

void Unwind_109532f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109532f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 4));
  return;
}


// ==== 109532fc Unwind@109532fc

void Unwind_109532fc(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911de0((FArray *)(*(int *)(unaff_EBP + -0x14) + 0x10));
  return;
}


// ==== 10953307 Unwind@10953307

void Unwind_10953307(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911d90(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 1095330f Unwind@1095330f

void Unwind_1095330f(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911d00(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10953330 Unwind@10953330

void Unwind_10953330(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912010(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10953350 Unwind@10953350

void Unwind_10953350(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10953353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FArray::~FArray(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10953359 Unwind@10953359

void Unwind_10953359(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912010(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10953380 Unwind@10953380

void Unwind_10953380(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912080(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 109533a0 Unwind@109533a0

void Unwind_109533a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109533a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x38));
  return;
}


// ==== 109533a9 Unwind@109533a9

void Unwind_109533a9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109533ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x44));
  return;
}


// ==== 109533b2 Unwind@109533b2

void Unwind_109533b2(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911de0((FArray *)(unaff_EBP + -0x58));
  return;
}


// ==== 109533d0 Unwind@109533d0

void Unwind_109533d0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912080(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 109533f0 Unwind@109533f0

void Unwind_109533f0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912080(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 109533f8 Unwind@109533f8

void Unwind_109533f8(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912110(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10953410 Unwind@10953410

void Unwind_10953410(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912080(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10953418 Unwind@10953418

void Unwind_10953418(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912110(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 10953430 Unwind@10953430

void Unwind_10953430(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10953436. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


// ==== 1095343c Unwind@1095343c

void Unwind_1095343c(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912160((FArray *)(*(int *)(unaff_EBP + -0x10) + 0x10));
  return;
}


// ==== 10953460 Unwind@10953460

void Unwind_10953460(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10953466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x14) + 4));
  return;
}


// ==== 1095346c Unwind@1095346c

void Unwind_1095346c(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912160((FArray *)(*(int *)(unaff_EBP + -0x14) + 0x10));
  return;
}


// ==== 10953477 Unwind@10953477

void Unwind_10953477(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912110(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 1095347f Unwind@1095347f

void Unwind_1095347f(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912080(*(FArray **)(unaff_EBP + -0x10));
  return;
}


// ==== 109534a0 Unwind@109534a0

void Unwind_109534a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109534a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 109534a9 Unwind@109534a9

void Unwind_109534a9(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912160((FArray *)(unaff_EBP + -0x48));
  return;
}


// ==== 109534d0 Unwind@109534d0

void Unwind_109534d0(void)

{
  int unaff_EBP;
  
  thunk_FUN_10913980((undefined4 *)(unaff_EBP + -0x2c));
  return;
}


// ==== 10953510 Unwind@10953510

void Unwind_10953510(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10953513. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 10953519 Unwind@10953519

void Unwind_10953519(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x1095351c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 10953540 Unwind@10953540

void Unwind_10953540(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10953543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 10953549 Unwind@10953549

void Unwind_10953549(void)

{
  int unaff_EBP;
  
  thunk_FUN_10913ce0((undefined4 *)(unaff_EBP + -0x28));
  return;
}


// ==== 10953570 Unwind@10953570

void Unwind_10953570(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10953573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 10953579 Unwind@10953579

void Unwind_10953579(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911de0((FArray *)(unaff_EBP + -0x30));
  return;
}


// ==== 109535a0 Unwind@109535a0

void Unwind_109535a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109535a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 109535a9 Unwind@109535a9

void Unwind_109535a9(void)

{
  int unaff_EBP;
  
  thunk_FUN_10911de0((FArray *)(unaff_EBP + -0x2c));
  return;
}


// ==== 109535b1 Unwind@109535b1

void Unwind_109535b1(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109535b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x24));
  return;
}


// ==== 109535d0 Unwind@109535d0

void Unwind_109535d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109535d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 109535d9 Unwind@109535d9

void Unwind_109535d9(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    thunk_FUN_10913ce0((undefined4 *)(unaff_EBP + -0x2c));
    return;
  }
  return;
}


// ==== 10953610 Unwind@10953610

void Unwind_10953610(void)

{
  int unaff_EBP;
  
  thunk_FUN_109033e0(*(undefined4 **)(unaff_EBP + -0x18));
  return;
}


// ==== 10953618 Unwind@10953618

void Unwind_10953618(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x18) + 4;
  }
  thunk_FUN_10912540(*(FArray **)(unaff_EBP + -0x1c));
  return;
}


// ==== 1095363f Unwind@1095363f

void Unwind_1095363f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10953645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x18));
  return;
}


// ==== 1095364b Unwind@1095364b

void Unwind_1095364b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x10953651. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(*(int *)(unaff_EBP + -0x18) + 0x24));
  return;
}


// ==== 10953657 Unwind@10953657

void Unwind_10953657(void)

{
  int unaff_EBP;
  
  thunk_FUN_10912460(*(FArray **)(unaff_EBP + -0x1c));
  return;
}


// ==== 10953680 Unwind@10953680

void Unwind_10953680(void)

{
  int unaff_EBP;
  
  thunk_FUN_10903570(*(undefined4 *)(unaff_EBP + -0x10));
  return;
}


// ==== 109536a0 Unwind@109536a0

void Unwind_109536a0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109536a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x34));
  return;
}


// ==== 109536a9 Unwind@109536a9

void Unwind_109536a9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109536ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x48));
  return;
}


// ==== 109536b2 Unwind@109536b2

void Unwind_109536b2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109536b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x48));
  return;
}


// ==== 109536bb Unwind@109536bb

void Unwind_109536bb(void)

{
  int unaff_EBP;
  
  thunk_FUN_10903570(*(undefined4 *)(unaff_EBP + 8));
  return;
}


// ==== 109536c6 Unwind@109536c6

void Unwind_109536c6(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109536c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x1c));
  return;
}


// ==== 109536cf Unwind@109536cf

void Unwind_109536cf(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109536d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x28));
  return;
}


// ==== 109536d8 Unwind@109536d8

void Unwind_109536d8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109536db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x34));
  return;
}


// ==== 109536e1 Unwind@109536e1

void Unwind_109536e1(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109536e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x1c));
  return;
}


// ==== 109536ea Unwind@109536ea

void Unwind_109536ea(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x109536ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FString::~FString((FString *)(unaff_EBP + -0x48));
  return;
}


// ==== 10955b30 FUN_10955b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10955b30(void)

{
  ushort *puVar1;
  FOutputDevice *this;
  
  _DAT_10996f10 = FOutputDeviceFile::vftable;
  if (DAT_10996f14 != (undefined4 *)0x0) {
    puVar1 = appTimestamp();
    FOutputDevice::Logf(this,0x10996f10,(ushort *)0x2f8,L"Log file closed, %s",puVar1);
    if (DAT_10996f14 != (undefined4 *)0x0) {
      (**(code **)*DAT_10996f14)(1);
    }
    DAT_10996f14 = (undefined4 *)0x0;
  }
  return;
}


// ==== 10955ba0 FUN_10955ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10955ba0(void)

{
  ushort *puVar1;
  FOutputDevice *this;
  
  _DAT_1096fc18 = FOutputDeviceFile::vftable;
  if (DAT_1096fc1c != (undefined4 *)0x0) {
    puVar1 = appTimestamp();
    FOutputDevice::Logf(this,0x1096fc18,(ushort *)0x2f8,L"Log file closed, %s",puVar1);
    if (DAT_1096fc1c != (undefined4 *)0x0) {
      (**(code **)*DAT_1096fc1c)(1);
    }
    DAT_1096fc1c = (undefined4 *)0x0;
  }
  return;
}


// ==== 10955c10 FUN_10955c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10955c10(void)

{
  ushort *puVar1;
  FOutputDevice *this;
  
  _DAT_10997f40 = FOutputDeviceFile::vftable;
  if (DAT_10997f44 != (undefined4 *)0x0) {
    puVar1 = appTimestamp();
    FOutputDevice::Logf(this,0x10997f40,(ushort *)0x2f8,L"Log file closed, %s",puVar1);
    if (DAT_10997f44 != (undefined4 *)0x0) {
      (**(code **)*DAT_10997f44)(1);
    }
    DAT_10997f44 = (undefined4 *)0x0;
  }
  return;
}


// ==== 10955c80 FUN_10955c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10955c80(void)

{
  ushort *puVar1;
  FOutputDevice *this;
  
  _DAT_10997730 = FOutputDeviceFile::vftable;
  if (DAT_10997734 != (undefined4 *)0x0) {
    puVar1 = appTimestamp();
    FOutputDevice::Logf(this,0x10997730,(ushort *)0x2f8,L"Log file closed, %s",puVar1);
    if (DAT_10997734 != (undefined4 *)0x0) {
      (**(code **)*DAT_10997734)(1);
    }
    DAT_10997734 = (undefined4 *)0x0;
  }
  return;
}


// ==== 10955cf0 FUN_10955cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10955cf0(void)

{
  _DAT_1096fc10 = FL2RSACodec::vftable;
  return;
}


// ==== 10955d00 FUN_10955d00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10955d00(void)

{
  _DAT_10990af0 = FL2DESCodec::vftable;
  return;
}


