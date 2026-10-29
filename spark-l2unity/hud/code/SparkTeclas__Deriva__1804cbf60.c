// SparkTeclas__Deriva__1804cbf60 @ 0x1804cbf60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SparkTeclas__Deriva__1804cbf60(longlong param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [16];
  
  if (cRam00000001834b32f5 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<string>.Add);
    FUN_180315380(MR_System.Collections.Generic.List<string>.Contains);
    FUN_180315380(MR_System.Collections.Generic.List<string>..ctor);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Count);
    FUN_180315380(MR_System.Collections.Generic.List<string>.get_Item);
    FUN_180315380(TI_System.Collections.Generic.List<string>);
    FUN_180315380(MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputBinding>.get_Count);
    FUN_180315380(MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputBinding>.get_Item);
    FUN_180315380(TI_SparkTeclas);
    FUN_180315380(TI_string__);
    FUN_180315380(LIT_"'alt'");
    FUN_180315380(LIT_"'ctrl'");
    FUN_180315380(LIT_"'shift'");
    FUN_180315380(LIT_"''");
    FUN_180315380(LIT_"'binding'");
    cRam00000001834b32f5 = '\x01';
  }
  auStack_168 = ZEXT816(0);
  uStack_48 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  lVar6 = func_0x000180315580(TI_System.Collections.Generic.List<string>);
  FUN_180bba2e0(lVar6,MR_System.Collections.Generic.List<string>..ctor);
  lVar7 = func_0x000180315580(TI_System.Collections.Generic.List<string>);
  FUN_180bba2e0(lVar7,MR_System.Collections.Generic.List<string>..ctor);
  if (param_1 == 0) {
code_r0x0001804cc5f8:
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    lVar6 = (*pcVar1)();
    return lVar6;
  }
  pauVar8 = (undefined1 (*) [16])
            UnityEngine_InputSystem_InputAction__get_bindings(auStack_38,param_1,0);
  iVar12 = 0;
  auStack_168 = *pauVar8;
  if (auStack_168._12_4_ != 0 && -1 < auStack_168._8_8_) {
    do {
      FUN_180d7c5c0(&uStack_158,auStack_168,iVar12,MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputBinding>.get_Item);
      uStack_98 = uStack_158;
      uStack_90 = uStack_150;
      uStack_88 = uStack_148;
      uStack_80 = uStack_140;
      uStack_78 = uStack_138;
      uStack_70 = uStack_130;
      uStack_58 = CONCAT44(uStack_114,uStack_118);
      uStack_50 = CONCAT44(uStack_10c,uStack_110);
      uStack_68 = uStack_128;
      uStack_60 = uStack_120;
      uStack_48 = uStack_108;
      cVar2 = func_0x000181edad90(&uStack_98,0);
      if (cVar2 == '\0') {
        cVar2 = func_0x000181edadf0(&uStack_98,0);
        if (cVar2 == '\0') {
          uVar9 = uStack_88;
          if (param_2 != '\0') {
            uVar9 = func_0x000181edad00(&uStack_98,0);
          }
          cVar2 = func_0x000181707e50(uVar9,0);
          if (cVar2 == '\0') {
            if (lVar6 == 0) goto code_r0x0001804cc5f8;
            FUN_180002eb0(lVar6,uVar9,MR_System.Collections.Generic.List<string>.Add);
          }
        }
      }
      else {
        lVar10 = func_0x000180315580(TI_System.Collections.Generic.List<string>);
        FUN_180bba2e0(lVar10,MR_System.Collections.Generic.List<string>..ctor);
        iVar12 = iVar12 + 1;
        uVar13 = LIT_"''";
        uVar9 = LIT_"''";
        if (iVar12 < (int)auStack_168._12_4_) {
          do {
            FUN_180d7c5c0(&uStack_158,auStack_168,iVar12,MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputBinding>.get_Item);
            uStack_f8 = uStack_158;
            uStack_f0 = uStack_150;
            uStack_e8 = uStack_148;
            uStack_e0 = uStack_140;
            uStack_d8 = uStack_138;
            uStack_d0 = uStack_130;
            uStack_b8 = CONCAT44(uStack_114,uStack_118);
            uStack_b0 = CONCAT44(uStack_10c,uStack_110);
            uStack_c8 = uStack_128;
            uStack_c0 = uStack_120;
            uStack_a8 = uStack_108;
            cVar2 = func_0x000181edadf0(&uStack_f8,0);
            uVar9 = uVar13;
            if (cVar2 == '\0') break;
            FUN_180d7c5c0(&uStack_158,auStack_168,iVar12,MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputBinding>.get_Item);
            uStack_f8 = uStack_158;
            uStack_f0 = uStack_150;
            uStack_d8 = uStack_138;
            uStack_d0 = uStack_130;
            if (param_2 == '\0') {
              uStack_c8 = uStack_128;
              uStack_c0 = uStack_120;
              uStack_a8 = uStack_108;
              uStack_e8 = uStack_148;
              uStack_e0 = uStack_140;
              uVar11 = uStack_148;
            }
            else {
              uStack_e8 = uStack_148;
              uStack_e0 = uStack_140;
              uStack_c8 = uStack_128;
              uStack_c0 = uStack_120;
              uStack_a8 = uStack_108;
              uVar11 = func_0x000181edad00(&uStack_f8,0);
            }
            FUN_180d7c5c0(&uStack_158,auStack_168,iVar12,MR_UnityEngine.InputSystem.Utilities.ReadOnlyArray<UnityEngine.InputSystem.InputBinding>.get_Item);
            uStack_e8 = uStack_148;
            uStack_e0 = uStack_140;
            uStack_d8 = uStack_138;
            uStack_d0 = uStack_130;
            uStack_c8 = uStack_128;
            uStack_c0 = uStack_120;
            uStack_a8 = uStack_108;
            uStack_f8 = uStack_158;
            uStack_f0 = uStack_150;
            uStack_b8 = CONCAT44(uStack_114,uStack_118);
            uStack_b0 = CONCAT44(uStack_10c,uStack_110);
            cVar2 = System_String__Equals(uStack_158,LIT_"'binding'",5,0);
            uVar9 = uVar11;
            if ((cVar2 == '\0') &&
               (cVar2 = func_0x000181707e50(uVar11,0), uVar9 = uVar13, cVar2 == '\0')) {
              if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
                func_0x000180315660();
              }
              uVar9 = SparkTeclas__NomeDoModificador__1804cdd70(uVar11,0);
              if (lVar10 == 0) goto code_r0x0001804cc5f8;
              FUN_180002eb0(lVar10,uVar9,MR_System.Collections.Generic.List<string>.Add);
              uVar9 = uVar13;
            }
            iVar12 = iVar12 + 1;
            uVar13 = uVar9;
          } while (iVar12 < (int)auStack_168._12_4_);
        }
        iVar12 = iVar12 + -1;
        cVar2 = func_0x000181707e50(uVar9,0);
        if (cVar2 == '\0') {
          if (lVar10 == 0) goto code_r0x0001804cc5f8;
          uVar3 = FUN_181647ac0(lVar10,LIT_"'alt'",MR_System.Collections.Generic.List<string>.Contains);
          uVar4 = FUN_181647ac0(lVar10,LIT_"'ctrl'",MR_System.Collections.Generic.List<string>.Contains);
          uVar5 = FUN_181647ac0(lVar10,LIT_"'shift'",MR_System.Collections.Generic.List<string>.Contains);
          if (*(int *)(TI_SparkTeclas + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar9 = SparkTeclas__Junta__1804cc950(uVar3,uVar4,uVar5,uVar9,0);
          if (lVar7 == 0) goto code_r0x0001804cc5f8;
          FUN_180002eb0(lVar7,uVar9,MR_System.Collections.Generic.List<string>.Add);
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)auStack_168._12_4_);
  }
  lVar10 = func_0x000180314710(TI_string__,2);
  if (lVar10 == 0) goto code_r0x0001804cc5f8;
  if (*(int *)(lVar10 + 0x18) == 0) goto code_r0x0001804cc5fe;
  *(undefined8 *)(lVar10 + 0x20) = LIT_"''";
  func_0x000180314690(lVar10 + 0x20);
  if (*(uint *)(lVar10 + 0x18) < 2) goto code_r0x0001804cc5fe;
  *(undefined8 *)(lVar10 + 0x28) = LIT_"''";
  func_0x000180314690(lVar10 + 0x28);
  if (lVar6 == 0) goto code_r0x0001804cc5f8;
  if (0 < *(int *)(lVar6 + 0x18)) {
    uVar9 = FUN_180bbafe0(lVar6,0,MR_System.Collections.Generic.List<string>.get_Item);
    if (*(int *)(lVar10 + 0x18) == 0) goto code_r0x0001804cc5fe;
    *(undefined8 *)(lVar10 + 0x20) = uVar9;
    func_0x000180314690(lVar10 + 0x20,uVar9);
  }
  if (lVar7 == 0) goto code_r0x0001804cc5f8;
  if (*(int *)(lVar7 + 0x18) < 1) {
    if (1 < *(int *)(lVar6 + 0x18)) {
      uVar9 = 1;
      goto code_r0x0001804cc55b;
    }
  }
  else {
    uVar9 = 0;
    lVar6 = lVar7;
code_r0x0001804cc55b:
    uVar9 = FUN_180bbafe0(lVar6,uVar9,MR_System.Collections.Generic.List<string>.get_Item);
    if (*(uint *)(lVar10 + 0x18) < 2) goto code_r0x0001804cc5fe;
    *(undefined8 *)(lVar10 + 0x28) = uVar9;
    func_0x000180314690(lVar10 + 0x28,uVar9);
  }
  if (*(int *)(lVar10 + 0x18) == 0) {
code_r0x0001804cc5fe:
    FUN_1803155c0();
    pcVar1 = (code *)swi(3);
    lVar6 = (*pcVar1)();
    return lVar6;
  }
  cVar2 = func_0x0001817058a0(*(undefined8 *)(lVar10 + 0x20),LIT_"''",0);
  if ((cVar2 != '\0') && (1 < *(int *)(lVar7 + 0x18))) {
    uVar9 = FUN_180bbafe0(lVar7,1,MR_System.Collections.Generic.List<string>.get_Item);
    if (*(int *)(lVar10 + 0x18) == 0) goto code_r0x0001804cc5fe;
    *(undefined8 *)(lVar10 + 0x20) = uVar9;
    func_0x000180314690(lVar10 + 0x20,uVar9);
  }
  return lVar10;
}

