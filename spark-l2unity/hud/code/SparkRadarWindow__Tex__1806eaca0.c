// SparkRadarWindow__Tex__1806eaca0 @ 0x1806eaca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SparkRadarWindow__Tex__1806eaca0(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (cRam00000001834b408f == '\0') {
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(LIT_"'Data/UI/Assets/Radar/'");
    cRam00000001834b408f = '\x01';
  }
  uVar3 = System_String__Concat(LIT_"'Data/UI/Assets/Radar/'",param_1,0);
  if (*(int *)(TI_SparkArte + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar1 = MR_SparkArte.Load<UnityEngine.Texture2D>;
  if (*(longlong *)(MR_SparkArte.Load<UnityEngine.Texture2D> + 0x38) == 0) {
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TYPE_UnityEngine.UIElements.StyleSheet);
    if (*(longlong *)(lVar1 + 0x38) == 0) {
      FUN_180312fc0(lVar1);
    }
  }
  if (*(int *)(TI_SparkArte + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = SparkArte__get_Ativo(0);
  if (cVar2 != '\0') {
    uVar4 = **(undefined8 **)(lVar1 + 0x38);
    if (*(int *)(_DAT_1834c6300 + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
    if (*(int *)(TI_SparkArte + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = SparkArte__DoPacote(uVar3,uVar4,0);
    lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_180312f40(lVar5);
    }
    uVar4 = func_0x0001803146b0(uVar4,lVar5);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
    if (cVar2 != '\0') {
      return uVar4;
    }
  }
  uVar4 = **(undefined8 **)(lVar1 + 0x38);
  if (*(int *)(_DAT_1834c6300 + 0xe4) == 0) {
    func_0x000180315660();
  }
  uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
  uVar6 = System_Type__GetTypeFromHandle(TYPE_UnityEngine.UIElements.StyleSheet,0);
  cVar2 = func_0x000180b13d30(uVar4,uVar6,0);
  if (cVar2 == '\0') {
    uVar6 = FUN_180a87b30(uVar3,*(undefined8 *)(*(longlong *)(lVar1 + 0x38) + 0x18));
    uVar4 = **(undefined8 **)(lVar1 + 0x38);
    if (*(int *)(_DAT_1834c6300 + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
    if (*(int *)(TI_SparkArte + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar3 = FUN_180a90140(uVar6,uVar3,uVar4,*(undefined8 *)(*(longlong *)(lVar1 + 0x38) + 0x10));
  }
  else {
    if (*(int *)(TI_SparkArte + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar6 = SparkArte__FolhaDeEstilo(uVar3,0);
    uVar4 = **(undefined8 **)(lVar1 + 0x38);
    if (*(int *)(_DAT_1834c6300 + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar7 = System_Type__GetTypeFromHandle(uVar4,0);
    lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 8);
    uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_180312f40(lVar5);
    }
    uVar6 = func_0x0001803146b0(uVar6,lVar5);
    uVar3 = FUN_180a90140(uVar6,uVar3,uVar7,uVar4);
  }
  return uVar3;
}

