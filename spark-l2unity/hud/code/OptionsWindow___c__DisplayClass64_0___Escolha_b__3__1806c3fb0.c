// OptionsWindow___c__DisplayClass64_0___Escolha_b__3__1806c3fb0 @ 0x1806c3fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass64_0___Escolha_b__3__1806c3fb0
               (longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  char acStackX_10 [8];
  undefined4 auStackX_20 [2];
  
  if (cRam00000001834b3f5a == '\0') {
    FUN_180315380(TI_System.Action<int>);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_button);
    FUN_180315380(MD_OptionsWindow.__c__DisplayClass64_0._Escolha_b__4);
    FUN_180315380(LIT_"'caixa clicada (botao {0}), estava aberta={1}'");
    cRam00000001834b3f5a = '\x01';
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x94) != 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      cVar3 = func_0x0001825d6570(*(longlong *)(param_1 + 0x30),0);
      if (cVar3 == '\0') {
        return;
      }
      lVar7 = *(longlong *)(param_1 + 0x38);
      if (lVar7 != 0) {
        if (*(longlong *)(lVar7 + 0xd8) == 0) {
          bVar8 = false;
        }
        else {
          lVar7 = UnityEngine_UIElements_VisualElement__get_userData
                            (*(undefined8 *)(lVar7 + 0xd8),0);
          bVar8 = lVar7 == *(longlong *)(param_1 + 0x30);
        }
        auStackX_20[0] = *(undefined4 *)(param_2 + 0x94);
        uVar5 = func_0x000180314670(_DAT_1834c6268,auStackX_20);
        acStackX_10[0] = bVar8;
        uVar6 = func_0x000180314670(uRam00000001834c6248,acStackX_10);
        uVar5 = System_String__Format(LIT_"'caixa clicada (botao {0}), estava aberta={1}'",uVar5,uVar6,0);
        if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
          func_0x000180315660();
        }
        func_0x0001803dadf0(uVar5,0);
        if (*(longlong *)(param_1 + 0x38) == 0) {
          FUN_1803155d0();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        OptionsWindow__FechaSuspensa(*(longlong *)(param_1 + 0x38),0);
        if (bVar8 != false) {
code_r0x0001806c41ac:
          func_0x00018274f9b0(param_2,0);
          return;
        }
        lVar7 = *(longlong *)(param_1 + 0x18);
        if (lVar7 != 0) {
          lVar1 = *(longlong *)(param_1 + 0x38);
          uVar5 = *(undefined8 *)(param_1 + 0x30);
          uVar6 = (**(code **)(lVar7 + 0x18))
                            (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
          lVar7 = *(longlong *)(param_1 + 0x20);
          if (lVar7 != 0) {
            uVar4 = (**(code **)(lVar7 + 0x18))
                              (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
            lVar7 = *(longlong *)(param_1 + 0x48);
            if (lVar7 == 0) {
              lVar7 = func_0x000180315580(TI_System.Action<int>);
              FUN_180b7db20(lVar7,param_1,MD_OptionsWindow.__c__DisplayClass64_0._Escolha_b__4,0);
              *(longlong *)(param_1 + 0x48) = lVar7;
              func_0x000180314690(param_1 + 0x48,lVar7);
            }
            if (lVar1 != 0) {
              OptionsWindow__AbreSuspensa(lVar1,uVar5,uVar6,uVar4,lVar7,0);
              goto code_r0x0001806c41ac;
            }
          }
        }
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

