// SparkApiGrafica__get_Pasta__1804958b0 @ 0x1804958b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkApiGrafica__get_Pasta__1804958b0(void)

{
  code *pcVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 *puStack_20;
  undefined1 *puStack_18;
  
  if (cRam00000001834b325f == '\0') {
    puStack_30 = &UNK_1804958c9;
    FUN_180315380(TI_UnityEngine.Application);
    puStack_30 = &UNK_1804958d5;
    FUN_180315380(TI_System.IO.Path);
    cRam00000001834b325f = '\x01';
  }
  if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
    puStack_30 = &UNK_1804958f1;
    func_0x000180315660();
  }
  puStack_30 = &UNK_1804958f8;
  cVar2 = func_0x000180a870f0(0);
  if (cVar2 != '\0') {
    if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
      puStack_30 = &UNK_180495911;
      func_0x000180315660();
    }
    if (cRam00000001834bf6da == '\0') {
      FUN_180315380(TI_UnityEngine.Application);
      cRam00000001834bf6da = '\x01';
    }
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    puStack_20 = &uStack_48;
    puStack_18 = &stack0x00000010;
    if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (pcRam00000001834bf738 == (code *)0x0) {
      pcRam00000001834bf738 = (code *)FUN_180315630(&UNK_1829326e0);
    }
    (*pcRam00000001834bf738)(&uStack_48);
    uStack_38 = (undefined4)uStack_48;
    uStack_34 = uStack_48._4_4_;
    puStack_30 = (undefined *)uStack_40;
    uVar9 = UnityEngine_Bindings_OutStringMarshaller__GetStringAndDispose(&uStack_38,0);
    return uVar9;
  }
  if (*(int *)(TI_UnityEngine.Application + 0xe4) == 0) {
    puStack_30 = &UNK_18049592f;
    func_0x000180315660();
  }
  puStack_30 = &UNK_180495936;
  lVar6 = UnityEngine_Application__get_dataPath(0);
  if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
    puStack_30 = &UNK_18049594e;
    func_0x000180315660();
  }
  if (DAT_1834b9466 == '\0') {
    puStack_30 = (undefined *)0x18187660e;
    FUN_180315380(TI_System.IO.Path,0);
    DAT_1834b9466 = '\x01';
  }
  puStack_30 = (undefined *)0x181876631;
  cVar2 = func_0x0001817058a0(lVar6,**(undefined8 **)(_DAT_1834c62b0 + 0xb8),0);
  if (cVar2 != '\0') {
    puStack_30 = (undefined *)0x18187693d;
    uVar9 = func_0x0001803153a0(TI_System.ArgumentException);
    puStack_30 = (undefined *)0x181876945;
    uVar9 = func_0x000180315580(uVar9);
    puStack_30 = (undefined *)0x181876954;
    uVar8 = func_0x0001803153a0(LIT_"'Invalid path'");
    puStack_30 = (undefined *)0x181876962;
    System_ArgumentException___ctor(uVar9,uVar8,0);
    puStack_30 = (undefined *)0x18187696e;
    uVar8 = func_0x0001803153a0(MD_System.IO.Path.GetDirectoryName);
    puStack_30 = (undefined *)0x181876979;
    FUN_180315590(uVar9,uVar8);
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return uVar9;
  }
  if (lVar6 == 0) {
    return 0;
  }
  if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
    puStack_30 = &LAB_181876657;
    func_0x000180315660();
  }
  puStack_30 = (undefined *)0x181876661;
  uVar9 = System_IO_Path__GetPathRoot(lVar6,0);
  puStack_30 = (undefined *)0x18187666f;
  cVar2 = func_0x0001817058a0(uVar9,lVar6,0);
  if (cVar2 != '\0') {
    return 0;
  }
  puStack_30 = (undefined *)0x18187668b;
  lVar7 = func_0x00018170d270(lVar6,0);
  if (lVar7 == 0) {
LAB_181876a0c:
    puStack_30 = (undefined *)0x181876a11;
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return uVar9;
  }
  if (*(int *)(lVar7 + 0x10) == 0) {
    puStack_30 = (undefined *)0x1818769cf;
    uVar9 = func_0x0001803153a0(TI_System.ArgumentException);
    puStack_30 = (undefined *)0x1818769d7;
    uVar9 = func_0x000180315580(uVar9);
    puStack_30 = (undefined *)0x1818769e6;
    uVar8 = func_0x0001803153a0(LIT_"'Argument string consists of whitespace characters only.'");
    puStack_30 = (undefined *)0x1818769f4;
    System_ArgumentException___ctor(uVar9,uVar8,0);
    puStack_30 = (undefined *)0x181876a00;
    uVar8 = func_0x0001803153a0(MD_System.IO.Path.GetDirectoryName);
    puStack_30 = (undefined *)0x181876a0b;
    FUN_180315590(uVar9,uVar8);
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return uVar9;
  }
  if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
    puStack_30 = (undefined *)0x1818766b6;
    func_0x000180315660(TI_System.IO.Path);
  }
  puStack_30 = (undefined *)0x1818766d2;
  uVar4 = System_String__IndexOfAny(lVar6,**(undefined8 **)(TI_System.IO.Path + 0xb8),0);
  if (uVar4 < 0x80000000) {
    puStack_30 = (undefined *)0x181876986;
    uVar9 = func_0x0001803153a0(TI_System.ArgumentException);
    puStack_30 = (undefined *)0x18187698e;
    uVar9 = func_0x000180315580(uVar9);
    puStack_30 = (undefined *)0x18187699d;
    uVar8 = func_0x0001803153a0(LIT_"'Path contains invalid characters'");
    puStack_30 = (undefined *)0x1818769ab;
    System_ArgumentException___ctor(uVar9,uVar8,0);
    puStack_30 = (undefined *)0x1818769b7;
    uVar8 = func_0x0001803153a0(MD_System.IO.Path.GetDirectoryName);
    puStack_30 = (undefined *)0x1818769c2;
    FUN_180315590(uVar9,uVar8);
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return uVar9;
  }
  if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
    puStack_30 = (undefined *)0x1818766f3;
    func_0x000180315660(TI_System.IO.Path);
  }
  puStack_30 = (undefined *)0x181876710;
  iVar5 = System_String__LastIndexOfAny
                    (lVar6,*(undefined8 *)(*(longlong *)(TI_System.IO.Path + 0xb8) + 0x20),0);
  iVar10 = 1;
  if (iVar5 != 0) {
    iVar10 = iVar5;
  }
  if (iVar10 < 1) {
    return **(undefined8 **)(_DAT_1834c62b0 + 0xb8);
  }
  puStack_30 = (undefined *)0x18187674f;
  lVar7 = System_String__Substring(lVar6,0,iVar10,0);
  if (lVar7 == 0) goto LAB_181876a0c;
  iVar5 = *(int *)(lVar7 + 0x10);
  if (iVar5 < 2) {
LAB_18187682a:
    if (iVar5 == 1) {
      if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
        puStack_30 = (undefined *)0x181876844;
        func_0x000180315660(TI_System.IO.Path);
      }
      if ((*(short *)(*(longlong *)(TI_System.IO.Path + 0xb8) + 10) == 0x5c) &&
         (1 < *(int *)(lVar6 + 0x10))) {
        puStack_30 = (undefined *)0x181876874;
        sVar3 = System_String__get_Chars(lVar6,iVar10,0);
        if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
          puStack_30 = (undefined *)0x18187688f;
          func_0x000180315660(TI_System.IO.Path);
        }
        if (sVar3 == *(short *)(*(longlong *)(TI_System.IO.Path + 0xb8) + 0x18)) {
          if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
            puStack_30 = (undefined *)0x1818768b4;
            func_0x000180315660(TI_System.IO.Path);
          }
          if (*(int *)(_DAT_1834c62a8 + 0xe4) == 0) {
            puStack_30 = (undefined *)0x1818768d0;
            func_0x000180315660();
          }
          lVar6 = *(longlong *)(TI_System.IO.Path + 0xb8) + 0x18;
          goto LAB_1818768e2;
        }
      }
    }
    if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
      puStack_30 = &LAB_18187691d;
      func_0x000180315660(TI_System.IO.Path);
    }
    puStack_30 = (undefined *)0x181876927;
    uVar9 = System_IO_Path__CleanPath(lVar7,0);
  }
  else {
    if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
      puStack_30 = (undefined *)0x181876784;
      func_0x000180315660(TI_System.IO.Path);
    }
    if (*(short *)(*(longlong *)(TI_System.IO.Path + 0xb8) + 10) != 0x5c) goto LAB_18187682a;
    puStack_30 = (undefined *)0x1818767b0;
    sVar3 = System_String__get_Chars(lVar7,iVar5 + -1,0);
    if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
      puStack_30 = (undefined *)0x1818767cc;
      func_0x000180315660(TI_System.IO.Path);
    }
    if (sVar3 != *(short *)(*(longlong *)(TI_System.IO.Path + 0xb8) + 0x18)) goto LAB_18187682a;
    if (*(int *)(TI_System.IO.Path + 0xe4) == 0) {
      puStack_30 = (undefined *)0x1818767f7;
      func_0x000180315660(TI_System.IO.Path);
    }
    if (*(int *)(_DAT_1834c62a8 + 0xe4) == 0) {
      puStack_30 = (undefined *)0x181876813;
      func_0x000180315660();
    }
    lVar6 = *(longlong *)(TI_System.IO.Path + 0xb8) + 10;
LAB_1818768e2:
    puStack_30 = (undefined *)0x1818768e9;
    uVar9 = System_Char__ToString(lVar6,0);
    puStack_30 = &LAB_1818768f7;
    uVar9 = System_String__Concat(lVar7,uVar9,0);
  }
  return uVar9;
}

