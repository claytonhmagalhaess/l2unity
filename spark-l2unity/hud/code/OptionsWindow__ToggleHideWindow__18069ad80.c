// OptionsWindow__ToggleHideWindow__18069ad80 @ 0x18069ad80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OptionsWindow__ToggleHideWindow__18069ad80(longlong *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  
  if (cRam00000001834b3e79 == '\0') {
    puStack_30 = &UNK_18069ad9e;
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3e79 = '\x01';
  }
  if (*(char *)((longlong)param_1 + 0x89) != '\0') {
    if ((char)param_1[7] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00018069adc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c8))(param_1,0,*(undefined8 *)(*param_1 + 0x1d0));
      return;
    }
    if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
      puStack_30 = &UNK_18069ade4;
      func_0x000180315660();
    }
    puStack_30 = &UNK_18069adeb;
    SparkOpcoes__Carrega__1804a3c40(0);
    puStack_30 = &UNK_18069adfe;
    (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    puStack_30 = &UNK_18069ae11;
    (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
    if (cRam00000001834b3e81 == '\0') {
      FUN_180315380(MR_System.Collections.Generic.List<System.Action>.Dispose,0);
      FUN_180315380(MR_System.Collections.Generic.List<System.Action>.MoveNext);
      FUN_180315380(MR_System.Collections.Generic.List<System.Action>.get_Current);
      FUN_180315380(MR_System.Collections.Generic.List<System.Action>.GetEnumerator);
      cRam00000001834b3e81 = '\x01';
    }
    if (param_1[0x16] == 0) {
      FUN_1803155d0();
    }
    else {
      FUN_180bada40(&uStack_40,param_1[0x16],MR_System.Collections.Generic.List<System.Action>.GetEnumerator);
      uStack_28 = (undefined4)uStack_40;
      uStack_24 = uStack_40._4_4_;
      uStack_20 = (undefined4)uStack_38;
      uStack_1c = uStack_38._4_4_;
      puStack_18 = puStack_30;
      uStack_40 = 0;
      uStack_38 = &uStack_28;
      while( true ) {
        cVar2 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<System.Action>.MoveNext);
        if (cVar2 == '\0') {
          Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<System.Action>.Dispose);
          OptionsWindow__MostraTeclas__180698bc0(param_1,0);
          return;
        }
        if (puStack_18 == (undefined *)0x0) break;
        (**(code **)(puStack_18 + 0x18))
                  (*(undefined8 *)(puStack_18 + 0x40),*(undefined8 *)(puStack_18 + 0x28));
      }
    }
    FUN_1803155d0();
    FUN_180311490();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

