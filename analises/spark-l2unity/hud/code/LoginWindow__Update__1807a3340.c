// LoginWindow__Update__1807a3340 @ 0x1807a3340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LoginWindow__Update__1807a3340(longlong param_1)

{
  float fVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  int aiStackX_8 [2];
  
  if (DAT_1834b44c9 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle,0);
    FUN_180315380(TI_LoginWindow);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Equality);
    FUN_180315380(MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
    FUN_180315380(LIT_"'Too many login attempts.'");
    FUN_180315380(LIT_"' Try again in '");
    FUN_180315380(LIT_"':'");
    FUN_180315380(LIT_"'This IP address is blocked from logging in.'");
    FUN_180315380(LIT_"'Too many connections in a short time.'");
    FUN_180315380(LIT_"'00'");
    DAT_1834b44c9 = '\x01';
  }
  aiStackX_8[0] = 0;
  if ((*(longlong *)(param_1 + 0xa8) == 0) || (*(longlong *)(param_1 + 0xa0) == 0)) {
    return;
  }
  if (*(int *)(TI_LoginWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar4 = LoginWindow__get_BloqueioAtivo(0);
  if (cVar4 == '\0') {
    if (*(int *)(TI_LoginWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (*(char *)(*(longlong *)(TI_LoginWindow + 0xb8) + 0x10) == '\0') {
      if (*(int *)(TI_LoginWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (*(float *)(*(longlong *)(TI_LoginWindow + 0xb8) + 0xc) <= 0.0) {
        return;
      }
      if (*(int *)(TI_LoginWindow + 0xe4) == 0) {
        func_0x000180315660();
      }
      *(undefined4 *)(*(longlong *)(TI_LoginWindow + 0xb8) + 0xc) = 0;
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        func_0x0001825cbbd0(*(longlong *)(param_1 + 0xa0),1,0);
        if (*(longlong *)(param_1 + 0xa8) != 0) {
          lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xa8),0);
          uVar6 = FUN_180eb5810(1,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
          if (lVar5 != 0) {
            FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
            return;
          }
        }
      }
      goto LAB_18079d118;
    }
  }
  if (*(int *)(TI_LoginWindow + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar6 = LIT_"'This IP address is blocked from logging in.'";
  if (*(char *)(*(longlong *)(TI_LoginWindow + 0xb8) + 0x10) == '\0') {
    if (*(int *)(TI_LoginWindow + 0xe4) == 0) {
      func_0x000180315660();
    }
    fVar1 = *(float *)(*(longlong *)(TI_LoginWindow + 0xb8) + 0xc);
    fVar9 = (float)FUN_1824366b0(0);
    if (DAT_1834b3847 == '\0') {
      FUN_180315380(TI_System.Math);
      DAT_1834b3847 = '\x01';
    }
    if (*(int *)(TI_System.Math + 0xe4) == 0) {
      func_0x000180315660();
    }
    dVar10 = (double)func_0x0001803a7e20((double)(fVar1 - fVar9));
    iVar8 = (int)dVar10;
    if (iVar8 == *(int *)(param_1 + 0xb0)) {
      if ((*(longlong *)(param_1 + 0xa8) == 0) ||
         (lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xa8),0),
         lVar5 == 0)) goto LAB_18079d118;
      uVar6 = FUN_1800047d0(0x32,TI_UnityEngine.UIElements.IStyle,lVar5);
      uVar7 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      cVar4 = FUN_180eb54b0(uVar6,uVar7,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Equality);
      if (cVar4 != '\0') goto LAB_18079d0fe;
    }
    *(int *)(param_1 + 0xb0) = iVar8;
    aiStackX_8[0] = iVar8 / 0x3c;
    uVar6 = System_Int32__ToString(aiStackX_8,LIT_"'00'",0);
    aiStackX_8[0] = iVar8 % 0x3c;
    uVar7 = System_Int32__ToString(aiStackX_8,LIT_"'00'",0);
    uVar6 = System_String__Concat(uVar6,LIT_"':'",uVar7,0);
    if (*(int *)(TI_LoginWindow + 0xe4) == 0) {
      func_0x000180315660(TI_LoginWindow);
    }
    uVar7 = LIT_"'Too many login attempts.'";
    if (*(int *)(*(longlong *)(TI_LoginWindow + 0xb8) + 0x14) == 2) {
      uVar7 = LIT_"'Too many connections in a short time.'";
    }
    uVar6 = System_String__Concat(uVar7,LIT_"' Try again in '",uVar6,0);
    if (*(longlong *)(param_1 + 0xa0) == 0) goto LAB_18079d118;
    func_0x0001825cbbd0(*(longlong *)(param_1 + 0xa0),0,0);
  }
  plVar2 = *(longlong **)(param_1 + 0xa8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0xe48))(plVar2,uVar6,*(undefined8 *)(*plVar2 + 0xe50));
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xa8),0);
      uVar6 = FUN_180eb5810(0,MR_UnityEngine.UIElements.StyleEnum<UnityEngine.UIElements.DisplayStyle>.op_Implicit);
      if (lVar5 != 0) {
        FUN_180005060(0x33,TI_UnityEngine.UIElements.IStyle,lVar5,uVar6);
LAB_18079d0fe:
        LoginWindow__PosicionaAviso(param_1,0);
        return;
      }
    }
  }
LAB_18079d118:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

