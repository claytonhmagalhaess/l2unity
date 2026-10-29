// ==== 10103ea4 appStrfind depth=0 from=raiz callees=
// strings: 

/* unsigned short const * __cdecl appStrfind(unsigned short const *,unsigned short const *) */

ushort * __cdecl appStrfind(ushort *param_1,ushort *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort uStack_1c;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
                    /* 0x3ea4  2109  ?appStrfind@@YAPBGPBG0@Z */
  puStack_c = &LAB_101bbfa0;
  pvStack_10 = ExceptionList;
  uStack_8 = 0;
  bVar1 = false;
  uStack_1c = *param_2;
  if ((0x60 < uStack_1c) && (uStack_1c < 0x7b)) {
    uStack_1c = uStack_1c - 0x20;
  }
  ExceptionList = &pvStack_10;
  iVar2 = appStrlen(param_2);
  while( true ) {
    uVar4 = *param_1;
    puVar5 = param_1 + 1;
    if (uVar4 == 0) {
      ExceptionList = pvStack_10;
      return (ushort *)0x0;
    }
    if ((ushort)(uVar4 - 0x61) < 0x1a) {
      uVar4 = uVar4 - 0x20;
    }
    if (((!bVar1) && (uVar4 == uStack_1c)) &&
       (iVar3 = appStrnicmp(puVar5,param_2 + 1,iVar2 + -1), iVar3 == 0)) break;
    param_1 = puVar5;
    if (((uVar4 < 0x41) || (0x5a < uVar4)) && (9 < (ushort)(uVar4 - 0x30))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  ExceptionList = pvStack_10;
  return param_1;
}


