// SparkHtml__Textura__18073eaa0 @ 0x18073eaa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkHtml__Textura__18073eaa0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 unaff_RDI;
  
  if (cRam00000001834b425a == '\0') {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(LIT_"'icon'");
    FUN_180315380(LIT_"'SquareBlank'");
    FUN_180315380(LIT_"'Square'");
    FUN_180315380(LIT_"'branchsys2'");
    FUN_180315380(LIT_"'branchsys'");
    FUN_180315380(LIT_"'Data/UI/Assets/html/'");
    FUN_180315380(LIT_"'Data/UI/Assets/html/SquareGray'");
    FUN_180315380(LIT_"'Data/UI/Assets/Vip/'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'VIPmark_'");
    cRam00000001834b425a = '\x01';
  }
  cVar2 = func_0x000181707e50(param_1,0);
  if (cVar2 != '\0') {
    return 0;
  }
  if ((param_1 != 0) && (lVar5 = System_String__Split(param_1,0x2e,0,0), lVar5 != 0)) {
    lVar7 = (longlong)*(int *)(lVar5 + 0x18) + -1;
    if (*(uint *)(lVar5 + 0x18) <= (uint)lVar7) {
code_r0x00018073edc3:
      FUN_1803155c0();
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    lVar7 = *(longlong *)(lVar5 + 0x20 + lVar7 * 8);
    uVar6 = LIT_"''";
    if (1 < *(int *)(lVar5 + 0x18)) {
      if (*(int *)(lVar5 + 0x18) == 0) goto code_r0x00018073edc3;
      if (*(longlong *)(lVar5 + 0x20) == 0) goto code_r0x00018073edc9;
      uVar6 = System_String__ToLowerInvariant(*(longlong *)(lVar5 + 0x20),0);
    }
    cVar2 = func_0x0001817058a0(uVar6,LIT_"'icon'",0);
    if (((cVar2 == '\0') &&
        (cVar2 = func_0x0001817058a0(uVar6,LIT_"'branchsys'",0), cVar2 == '\0')) &&
       (cVar2 = func_0x0001817058a0(uVar6,LIT_"'branchsys2'",0), cVar2 == '\0')) {
      if (lVar7 != 0) {
        cVar2 = System_String__Equals(lVar7,LIT_"'SquareBlank'",5,0);
        if (cVar2 != '\0') {
          return 0;
        }
        uVar6 = System_String__Concat(LIT_"'Data/UI/Assets/html/'",lVar7,0);
        if (*(int *)(TI_SparkArte + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar6 = FUN_180a90ae0(uVar6,MR_SparkArte.Load<UnityEngine.Texture2D>);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar2 = UnityEngine_Object__op_Equality(uVar6,0,0);
        if ((cVar2 != '\0') &&
           (cVar2 = System_String__StartsWith(lVar7,LIT_"'Square'",5,0), cVar2 != '\0')) {
          if (*(int *)(TI_SparkArte + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar6 = FUN_180a90ae0(LIT_"'Data/UI/Assets/html/SquareGray'",MR_SparkArte.Load<UnityEngine.Texture2D>);
        }
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar2 = UnityEngine_Object__op_Equality(uVar6,0,0);
        if ((cVar2 != '\0') &&
           (cVar2 = System_String__StartsWith(lVar7,LIT_"'VIPmark_'",5,0), cVar2 != '\0')) {
          uVar6 = System_String__Concat(LIT_"'Data/UI/Assets/Vip/'",lVar7,0);
          if (*(int *)(TI_SparkArte + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar6 = FUN_180a90ae0(uVar6,MR_SparkArte.Load<UnityEngine.Texture2D>);
        }
        return uVar6;
      }
    }
    else {
      lVar5 = IconTable__get_Instance(0);
      if (lVar5 == 0) {
        return 0;
      }
      lVar5 = IconTable__get_Instance(0);
      if (lVar5 != 0) {
        if (DAT_1834b4033 == '\0') {
          FUN_180315380(TI_UnityEngine.Object,lVar7,0);
          FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
          FUN_180315380(TI_SparkArte);
          FUN_180315380(LIT_"'\\\\'");
          DAT_1834b4033 = '\x01';
        }
        uVar6 = *(undefined8 *)(lVar5 + 0x10);
        if (DAT_1834b4036 == '\0') {
          FUN_180315380(LIT_"'NOIMAGE'");
          DAT_1834b4036 = '\x01';
        }
        cVar2 = func_0x000181707e50(lVar7,0);
        uVar4 = LIT_"'NOIMAGE'";
        if (cVar2 == '\0') {
          if (lVar7 == 0) {
            FUN_1803155d0();
            pcVar1 = (code *)swi(3);
            uVar6 = (*pcVar1)();
            return uVar6;
          }
          iVar3 = func_0x000181709360(lVar7,0x2e,0);
          uVar4 = func_0x00018170c060(lVar7,iVar3 + 1,0);
        }
        uVar6 = System_String__Concat(uVar6,LIT_"'\\\\'",uVar4,0,unaff_RDI);
        if (*(int *)(TI_SparkArte + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar6 = FUN_180a90ae0(uVar6,MR_SparkArte.Load<UnityEngine.Texture2D>);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
        if (cVar2 != '\0') {
          return uVar6;
        }
        return *(undefined8 *)(lVar5 + 0x18);
      }
    }
  }
code_r0x00018073edc9:
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}

