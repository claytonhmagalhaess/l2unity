// SparkMapaWindow__UsaPlanta__18064b260 @ 0x18064b260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong SparkMapaWindow__UsaPlanta__18064b260(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [40];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (cRam00000001834b3d14 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    cRam00000001834b3d14 = '\x01';
  }
  uStack_30 = 0;
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
  uVar2 = UnityEngine_Object__op_Inequality(param_2,0,0);
  if (((char)uVar2 != '\0') && (*(longlong *)(param_1 + 0x170) != 0)) {
    lVar3 = UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0x170),0);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)FUN_180007750(auStack_58,10,TI_UnityEngine.UIElements.IStyle,lVar3);
      uStack_30 = *puVar4;
      uStack_28 = puVar4[1];
      uStack_20 = puVar4[2];
      uStack_18 = puVar4[3];
      uStack_10 = puVar4[4];
      puVar4 = (undefined8 *)func_0x0001826000e0(auStack_58,&uStack_30,0);
      uStack_78 = *puVar4;
      uStack_70 = puVar4[1];
      uStack_68 = puVar4[2];
      uStack_60 = puVar4[3];
      uVar5 = func_0x000180a391e0(&uStack_78,0);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar2 = UnityEngine_Object__op_Equality(uVar5,param_2,0);
      return uVar2;
    }
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  return uVar2 & 0xffffffffffffff00;
}

