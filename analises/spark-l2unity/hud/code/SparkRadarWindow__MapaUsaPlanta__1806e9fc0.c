// SparkRadarWindow__MapaUsaPlanta__1806e9fc0 @ 0x1806e9fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkRadarWindow__MapaUsaPlanta__1806e9fc0(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [40];
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (cRam00000001834b40a3 == '\0') {
    puStack_30 = &UNK_1806e9fe2;
    FUN_180315380(TI_UnityEngine.Object);
    puStack_30 = &UNK_1806e9fee;
    FUN_180315380(TI_SparkMapaWindow);
    cRam00000001834b40a3 = '\x01';
  }
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    puStack_30 = &UNK_1806ea00a;
    func_0x000180315660();
  }
  if (cRam00000001834b33d3 == '\0') {
    puStack_30 = &UNK_1806ea01f;
    FUN_180315380(TI_SparkMapaWindow);
    cRam00000001834b33d3 = '\x01';
  }
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    puStack_30 = &UNK_1806ea03b;
    func_0x000180315660();
  }
  uVar4 = **(undefined8 **)(TI_SparkMapaWindow + 0xb8);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    puStack_30 = &UNK_1806ea061;
    func_0x000180315660();
  }
  puStack_30 = &UNK_1806ea06e;
  uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((char)uVar5 == '\0') {
    return uVar5;
  }
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    puStack_30 = &UNK_1806ea092;
    func_0x000180315660();
  }
  if (cRam00000001834b33d3 == '\0') {
    puStack_30 = &UNK_1806ea0a7;
    FUN_180315380(TI_SparkMapaWindow);
    cRam00000001834b33d3 = '\x01';
  }
  if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
    puStack_30 = &UNK_1806ea0c3;
    func_0x000180315660();
  }
  lVar2 = **(longlong **)(TI_SparkMapaWindow + 0xb8);
  if (lVar2 != 0) {
    if (cRam00000001834b3d14 == '\0') {
      FUN_180315380(TI_UnityEngine.UIElements.IStyle);
      FUN_180315380(TI_UnityEngine.Object);
      cRam00000001834b3d14 = '\x01';
    }
    puStack_30 = (undefined *)0x0;
    uStack_28 = 0;
    uStack_10 = 0;
    uStack_20 = 0;
    uStack_18 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar5 = UnityEngine_Object__op_Inequality(param_1,0,0);
    if (((char)uVar5 != '\0') && (*(longlong *)(lVar2 + 0x170) != 0)) {
      lVar2 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(lVar2 + 0x170),0);
      if (lVar2 != 0) {
        puVar3 = (undefined8 *)FUN_180007750(auStack_58,10,TI_UnityEngine.UIElements.IStyle,lVar2);
        puStack_30 = (undefined *)*puVar3;
        uStack_28 = puVar3[1];
        uStack_20 = puVar3[2];
        uStack_18 = puVar3[3];
        uStack_10 = puVar3[4];
        puVar3 = (undefined8 *)func_0x0001826000e0(auStack_58,&puStack_30,0);
        uStack_78 = *puVar3;
        uStack_70 = puVar3[1];
        uStack_68 = puVar3[2];
        uStack_60 = puVar3[3];
        uVar4 = func_0x000180a391e0(&uStack_78,0);
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar5 = UnityEngine_Object__op_Equality(uVar4,param_1,0);
        return uVar5;
      }
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    return uVar5 & 0xffffffffffffff00;
  }
  puStack_30 = &UNK_1806ea0f3;
  FUN_1803155d0();
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}

