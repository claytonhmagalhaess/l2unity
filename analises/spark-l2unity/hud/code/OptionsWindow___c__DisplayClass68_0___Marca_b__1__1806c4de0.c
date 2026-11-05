// OptionsWindow___c__DisplayClass68_0___Marca_b__1__1806c4de0 @ 0x1806c4de0

void OptionsWindow___c__DisplayClass68_0___Marca_b__1__1806c4de0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong lStack_18;
  
  if (cRam00000001834b3f61 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<System.Action>.GetEnumerator);
    FUN_180315380(MR_UnityEngine.UIElements.MouseEventBase<UnityEngine.UIElements.MouseDownEvent>.get_button);
    FUN_180315380(LIT_"'click_'");
    cRam00000001834b3f61 = '\x01';
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x88) != 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      cVar4 = func_0x0001825d6570(*(longlong *)(param_1 + 0x20),0);
      if (cVar4 == '\0') {
        return;
      }
      lVar1 = *(longlong *)(param_1 + 0x18);
      if (lVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x28);
        cVar4 = (**(code **)(lVar1 + 0x18))
                          (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x18))
                    (*(undefined8 *)(lVar2 + 0x40),cVar4 == '\0',*(undefined8 *)(lVar2 + 0x28));
          if ((*(longlong *)(param_1 + 0x30) != 0) &&
             (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xb0), lVar1 != 0)) {
            FUN_180bada40(&uStack_40,lVar1,MR_System.Collections.Generic.List<System.Action>.GetEnumerator);
            uStack_28 = (undefined4)uStack_40;
            uStack_24 = uStack_40._4_4_;
            uStack_20 = (undefined4)uStack_38;
            uStack_1c = uStack_38._4_4_;
            lStack_18 = lStack_30;
            uStack_40 = 0;
            uStack_38 = &uStack_28;
            while( true ) {
              cVar4 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<System.Action>.MoveNext);
              if (cVar4 == '\0') {
                func_0x0001803dadf0(&uStack_28,MR_System.Collections.Generic.List<System.Action>.Dispose);
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
              if (lStack_18 == 0) break;
              (**(code **)(lStack_18 + 0x18))
                        (*(undefined8 *)(lStack_18 + 0x40),*(undefined8 *)(lStack_18 + 0x28));
            }
            goto code_r0x0001806c4fbe;
          }
        }
      }
    }
  }
  FUN_1803155d0();
code_r0x0001806c4fbe:
  FUN_1803155d0();
  FUN_180311490();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

