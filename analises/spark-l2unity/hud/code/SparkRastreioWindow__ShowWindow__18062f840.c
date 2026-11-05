// SparkRastreioWindow__ShowWindow__18062f840 @ 0x18062f840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkRastreioWindow__ShowWindow__18062f840(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  
  if (cRam00000001834b3c9d == '\0') {
    puStack_30 = &UNK_18062f85e;
    FUN_180315380(LIT_"'window_open'");
    cRam00000001834b3c9d = '\x01';
  }
  puStack_30 = &UNK_18062f86f;
  L2PopupWindow__ShowWindow__180778380(param_1,0);
  if (DAT_1834b301f == '\0') {
    puStack_30 = &UNK_18062f884;
    FUN_180315380(TI_AudioManager);
    DAT_1834b301f = '\x01';
  }
  if (**(longlong **)(TI_AudioManager + 0xb8) != 0) {
    puStack_30 = &UNK_18062f8b0;
    AudioManager__PlayUISound(**(longlong **)(TI_AudioManager + 0xb8),LIT_"'window_open'",0);
  }
  if (DAT_1834b31c0 == '\0') {
    puStack_30 = &UNK_18062f8c5;
    FUN_180315380(TI_L2GameUI);
    DAT_1834b31c0 = '\x01';
  }
  if (**(longlong **)(TI_L2GameUI + 0xb8) != 0) {
    puStack_30 = &UNK_18062f8ed;
    L2GameUI__WindowOpened__180776020(**(longlong **)(TI_L2GameUI + 0xb8),param_1,0);
  }
  if (cRam00000001834b3ca1 == '\0') {
    FUN_180315380(MR_System.Collections.Generic.List<SparkRastreio.Linha>.Dispose);
    FUN_180315380(MR_System.Collections.Generic.List<SparkRastreio.Linha>.MoveNext);
    FUN_180315380(MR_System.Collections.Generic.List<SparkRastreio.Linha>.get_Current);
    FUN_180315380(MR_System.Collections.Generic.List<System.ValueTuple<SparkRastreio.Linha,UnityEngine.UIElements.Label>>.Clear);
    FUN_180315380(MR_System.Collections.Generic.List<SparkRastreio.Linha>.GetEnumerator);
    FUN_180315380(TI_SparkRastreio);
    cRam00000001834b3ca1 = '\x01';
  }
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    return;
  }
  SparkRastreioWindow__Cabecalho(param_1,0);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    UnityEngine_UIElements_VisualElement__Clear(*(longlong *)(param_1 + 0xa0),0);
    lVar4 = *(longlong *)(param_1 + 0xa8);
    if (lVar4 != 0) {
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      iVar1 = *(int *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x18) = 0;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
      }
      if (*(char *)(param_1 + 0x89) == '\0') {
        if (*(int *)(TI_SparkRastreio + 0xe4) == 0) {
          func_0x000180315660(TI_SparkRastreio);
        }
        lVar4 = *(longlong *)(*(longlong *)(TI_SparkRastreio + 0xb8) + 0x18);
      }
      else {
        if (*(int *)(TI_SparkRastreio + 0xe4) == 0) {
          func_0x000180315660(TI_SparkRastreio);
        }
        lVar4 = *(longlong *)(*(longlong *)(TI_SparkRastreio + 0xb8) + 0x10);
      }
      if (lVar4 != 0) {
        FUN_180bada40(&uStack_40,lVar4,MR_System.Collections.Generic.List<SparkRastreio.Linha>.GetEnumerator);
        uStack_28 = (undefined4)uStack_40;
        uStack_24 = uStack_40._4_4_;
        uStack_20 = (undefined4)uStack_38;
        uStack_1c = uStack_38._4_4_;
        puStack_18 = puStack_30;
        uStack_40 = 0;
        uStack_38 = &uStack_28;
        while (cVar3 = FUN_1812fa7e0(&uStack_28,MR_System.Collections.Generic.List<SparkRastreio.Linha>.MoveNext), cVar3 != '\0') {
          SparkRastreioWindow__Acrescenta(param_1,puStack_18,0);
        }
        Gear__UpdateWeaponType__1803dadf0(&uStack_28,MR_System.Collections.Generic.List<SparkRastreio.Linha>.Dispose);
        *(undefined1 *)(param_1 + 0xb0) = 1;
        return;
      }
    }
  }
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

