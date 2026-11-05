// OptionsWindow___c__DisplayClass65_1___AbreSuspensa_b__3__1806c4710 @ 0x1806c4710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow___c__DisplayClass65_1___AbreSuspensa_b__3__1806c4710
               (longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStackX_8 [8];
  undefined4 auStackX_20 [2];
  undefined4 auStack_28 [4];
  
  if (cRam00000001834b3f5f == '\0') {
    FUN_180315380(TI_object__);
    FUN_180315380(TI_OptionsWindow);
    FUN_180315380(MR_UnityEngine.UIElements.PointerEventBase<UnityEngine.UIElements.PointerDownEvent>.get_button);
    FUN_180315380(LIT_"'item {0} ({1}): botao {2}, ja escolheu={3}'");
    FUN_180315380(LIT_"'click_'");
    cRam00000001834b3f5f = '\x01';
  }
  plVar2 = (longlong *)func_0x000180314710(TI_object__,4);
  auStackX_20[0] = *(undefined4 *)(param_1 + 0x18);
  lVar3 = func_0x000180314670(_DAT_1834c6268,auStackX_20);
  if (plVar2 == (longlong *)0x0) {
code_r0x0001806c49ff:
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((lVar3 != 0) &&
     (lVar4 = func_0x0001803146b0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar5 = func_0x000180314f80();
    FUN_180315590(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    func_0x000180314690(plVar2 + 4,lVar3);
    if ((*(longlong *)(param_1 + 0x20) == 0) ||
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10), lVar3 == 0))
    goto code_r0x0001806c49ff;
    if (*(uint *)(param_1 + 0x18) < *(uint *)(lVar3 + 0x18)) {
      lVar3 = *(longlong *)(lVar3 + 0x20 + (longlong)(int)*(uint *)(param_1 + 0x18) * 8);
      if ((lVar3 != 0) &&
         (lVar4 = func_0x0001803146b0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar5 = func_0x000180314f80();
        FUN_180315590(uVar5,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (1 < *(uint *)(plVar2 + 3)) {
        plVar2[5] = lVar3;
        func_0x000180314690(plVar2 + 5,lVar3);
        if (param_2 != 0) {
          auStack_28[0] = *(undefined4 *)(param_2 + 0x94);
          lVar3 = func_0x000180314670(_DAT_1834c6268,auStack_28);
          if ((lVar3 != 0) &&
             (lVar4 = func_0x0001803146b0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
            uVar5 = func_0x000180314f80();
            FUN_180315590(uVar5,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(uint *)(plVar2 + 3) < 3) goto code_r0x0001806c4a4b;
          plVar2[6] = lVar3;
          func_0x000180314690(plVar2 + 6,lVar3);
          if (*(longlong *)(param_1 + 0x20) != 0) {
            auStackX_8[0] = *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x18);
            lVar3 = func_0x000180314670(uRam00000001834c6248,auStackX_8);
            if ((lVar3 != 0) &&
               (lVar4 = func_0x0001803146b0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
              uVar5 = func_0x000180314f80();
              FUN_180315590(uVar5,0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (*(uint *)(plVar2 + 3) < 4) goto code_r0x0001806c4a4b;
            plVar2[7] = lVar3;
            func_0x000180314690(plVar2 + 7,lVar3);
            uVar5 = System_String__Format(LIT_"'item {0} ({1}): botao {2}, ja escolheu={3}'",plVar2,0);
            if (*(int *)(TI_OptionsWindow + 0xe4) == 0) {
              func_0x000180315660();
            }
            func_0x0001803dadf0(uVar5,0);
            if (*(longlong *)(param_1 + 0x20) != 0) {
              if (*(int *)(param_2 + 0x94) != 0 ||
                  *(char *)(*(longlong *)(param_1 + 0x20) + 0x18) != '\0') {
                return;
              }
              *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x18) = 1;
              func_0x00018274f9b0(param_2,0);
              if ((*(longlong *)(param_1 + 0x20) != 0) &&
                 (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20), lVar3 != 0)) {
                OptionsWindow__FechaSuspensa(lVar3,0);
                if ((*(longlong *)(param_1 + 0x20) != 0) &&
                   (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28), lVar3 != 0)) {
                  (**(code **)(lVar3 + 0x18))
                            (*(undefined8 *)(lVar3 + 0x40),*(undefined4 *)(param_1 + 0x18),
                             *(undefined8 *)(lVar3 + 0x28));
                  if (cRam00000001834b301f == '\0') {
                    FUN_180315380(TI_AudioManager);
                    cRam00000001834b301f = '\x01';
                  }
                  if (**(longlong **)(TI_AudioManager + 0xb8) == 0) {
                    return;
                  }
                  AudioManager__PlayUISound
                            (**(longlong **)(TI_AudioManager + 0xb8),LIT_"'click_'",0);
                  return;
                }
              }
              FUN_1803155d0();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
        }
        goto code_r0x0001806c49ff;
      }
    }
  }
code_r0x0001806c4a4b:
  FUN_1803155c0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

