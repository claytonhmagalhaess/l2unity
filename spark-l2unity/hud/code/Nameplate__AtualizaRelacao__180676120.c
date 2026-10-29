// Nameplate__AtualizaRelacao__180676120 @ 0x180676120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Nameplate__AtualizaRelacao__180676120(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 uVar10;
  
  if (cRam00000001834b3e08 == '\0') {
    FUN_180315380(TI_Nameplate);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(LIT_"'bothside'");
    FUN_180315380(LIT_"'red'");
    FUN_180315380(LIT_"'flagleader'");
    FUN_180315380(LIT_"'sword'");
    FUN_180315380(LIT_"'crownleader'");
    FUN_180315380(LIT_"'oneside'");
    FUN_180315380(LIT_"'shield'");
    FUN_180315380(LIT_"'blue'");
    cRam00000001834b3e08 = '\x01';
  }
  lVar8 = *(longlong *)(param_1 + 0x50);
  if (lVar8 != 0) {
    lVar2 = *(longlong *)(lVar8 + 0x30);
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    uVar10 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar4 = UnityEngine_Object__op_Equality(lVar8,uVar10,0);
    if (lVar2 != 0) {
      uVar6 = 0;
      uVar7 = 0;
      uVar10 = uVar7;
      if (cVar4 == '\0') {
        uVar1 = *(uint *)(lVar2 + 0x58);
        if ((uVar1 >> 9 & 1) != 0) {
          uVar10 = LIT_"'blue'";
          if ((uVar1 >> 0xc & 1) != 0) {
            uVar10 = LIT_"'red'";
          }
          if ((uVar1 >> 7 & 1) == 0) {
            uVar6 = LIT_"'shield'";
            if ((uVar1 & 0x400) != 0) {
              uVar6 = LIT_"'sword'";
            }
          }
          else {
            uVar6 = LIT_"'crownleader'";
            if ((uVar1 & 0x400) != 0) {
              uVar6 = LIT_"'flagleader'";
            }
          }
          uVar6 = System_String__Concat(uVar10,uVar6,0);
        }
        uVar10 = LIT_"'bothside'";
        if (((uVar1 >> 0xf & 1) == 0) && (uVar10 = uVar7, (uVar1 >> 0x10 & 1) != 0)) {
          uVar10 = LIT_"'oneside'";
        }
      }
      else {
        uVar1 = *(uint *)(lVar2 + 0x5c);
        uVar9 = uVar1 & 0x100;
        if (uVar9 != 0 || uVar9 == 0 && (uVar1 & 0x80) != 0) {
          if ((uVar1 & 0x40) == 0) {
            uVar6 = LIT_"'sword'";
            if (uVar9 == 0) {
              uVar6 = LIT_"'shield'";
            }
          }
          else {
            uVar6 = LIT_"'crownleader'";
            if (uVar9 != 0) {
              uVar6 = LIT_"'flagleader'";
            }
          }
          uVar6 = System_String__Concat(LIT_"'blue'",uVar6,0);
        }
      }
      cVar4 = func_0x0001817058a0(uVar6,*(undefined8 *)(param_1 + 0x120),0);
      if (((cVar4 == '\0') ||
          (cVar4 = func_0x0001817058a0(uVar10,*(undefined8 *)(param_1 + 0x128),0), cVar4 == '\0'))
         || (*(longlong *)(param_1 + 0x110) == 0)) {
        *(undefined8 *)(param_1 + 0x120) = uVar6;
        func_0x000180314690(param_1 + 0x120,uVar6);
        *(undefined8 *)(param_1 + 0x128) = uVar10;
        func_0x000180314690(param_1 + 0x128,uVar10);
        if (*(longlong *)(param_1 + 0x110) == 0) {
          if (*(int *)(TI_Nameplate + 0xe4) == 0) {
            func_0x000180315660();
          }
          uVar7 = Nameplate__Icone__180676a40(0);
          *(undefined8 *)(param_1 + 0x110) = uVar7;
          func_0x000180314690(param_1 + 0x110,uVar7);
          uVar7 = Nameplate__Icone__180676a40(0);
          *(undefined8 *)(param_1 + 0x118) = uVar7;
          func_0x000180314690(param_1 + 0x118,uVar7);
          if (*(longlong *)(param_1 + 0x28) == 0) goto code_r0x00018067648e;
          lVar8 = func_0x0001825d76d0(*(longlong *)(param_1 + 0x28),0);
          if (lVar8 != 0) {
            uVar5 = UnityEngine_UIElements_VisualElement__IndexOf
                              (lVar8,*(undefined8 *)(param_1 + 0x28),0);
            UnityEngine_UIElements_VisualElement__Insert
                      (lVar8,uVar5,*(undefined8 *)(param_1 + 0x118),0);
            UnityEngine_UIElements_VisualElement__Insert
                      (lVar8,uVar5,*(undefined8 *)(param_1 + 0x110),0);
          }
        }
        uVar7 = *(undefined8 *)(param_1 + 0x110);
        if (*(int *)(TI_Nameplate + 0xe4) == 0) {
          func_0x000180315660();
        }
        Nameplate__Mostra__180677530(uVar7,uVar6,0);
        Nameplate__Mostra__180677530(*(undefined8 *)(param_1 + 0x118),uVar10,0);
      }
      return;
    }
  }
code_r0x00018067648e:
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

