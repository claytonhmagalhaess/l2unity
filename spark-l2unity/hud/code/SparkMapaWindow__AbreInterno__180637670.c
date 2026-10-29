// SparkMapaWindow__AbreInterno__180637670 @ 0x180637670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__AbreInterno__180637670
               (longlong param_1,longlong param_2,uint param_3,char *param_4,undefined1 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fStackX_c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined1 auStack_88 [80];
  
  if (cRam00000001834b3d32 == '\0') {
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_System.Nullable<UnityEngine.Vector2>.get_HasValue);
    FUN_180315380(MR_System.Nullable<UnityEngine.Vector2>.get_Value);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_SparkMapaWindow);
    FUN_180315380(LIT_"'Data/UI/Assets/Mapa/interno/'");
    FUN_180315380(LIT_"'SparkMapaWindow: planta nao encontrada: Data/UI/Assets/M...");
    cRam00000001834b3d32 = '\x01';
  }
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    if (DAT_1834b2f44 == '\0') {
      FUN_180315380(TI_UnityEngine.Vector2);
      DAT_1834b2f44 = '\x01';
    }
    bVar11 = *(longlong *)(param_1 + 0x188) == param_2;
    uVar1 = **(undefined4 **)(TI_UnityEngine.Vector2 + 0xb8);
    *(undefined4 *)(param_1 + 0x238) = (*(undefined4 **)(TI_UnityEngine.Vector2 + 0xb8))[1];
    *(undefined4 *)(param_1 + 0x234) = uVar1;
    *(undefined4 *)(param_1 + 0x248) = 0;
    if (bVar11) {
      bVar12 = *(uint *)(param_1 + 400) != param_3;
    }
    else {
      bVar12 = true;
    }
    *(longlong *)(param_1 + 0x188) = param_2;
    func_0x000180314690(param_1 + 0x188,param_2);
    *(undefined1 *)(param_1 + 0x1a0) = param_5;
    *(uint *)(param_1 + 400) = param_3;
    *(undefined1 *)(param_1 + 0x1f8) = 0;
    if ((param_2 == 0) || (lVar2 = *(longlong *)(param_2 + 0x20), lVar2 == 0)) goto DAT_180637bca;
    if (*(uint *)(lVar2 + 0x18) <= param_3) {
      FUN_1803155c0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar2 = *(longlong *)(lVar2 + 0x20 + (longlong)(int)param_3 * 8);
    if (bVar12) {
      if ((*(longlong *)(param_1 + 0x170) == 0) ||
         (lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x170),0),
         lVar5 == 0)) goto DAT_180637bca;
      puVar6 = (undefined8 *)FUN_180007750(&uStack_b8,10,TI_UnityEngine.UIElements.IStyle,lVar5);
      uStack_108 = *puVar6;
      uStack_100 = puVar6[1];
      uStack_f8 = puVar6[2];
      uStack_f0 = puVar6[3];
      uStack_e8 = puVar6[4];
      puVar6 = (undefined8 *)func_0x0001826000e0(&uStack_b8,&uStack_108,0);
      uStack_e0 = *puVar6;
      uStack_d8 = puVar6[1];
      uStack_d0 = puVar6[2];
      uStack_c8 = puVar6[3];
      uVar7 = func_0x000180a391e0(&uStack_e0,0);
      if (lVar2 == 0) goto DAT_180637bca;
      uVar8 = System_String__Concat(LIT_"'Data/UI/Assets/Mapa/interno/'",*(undefined8 *)(lVar2 + 0x18),0);
      if (*(int *)(TI_SparkArte + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar8 = FUN_180a90ae0(uVar8,MR_SparkArte.Load<UnityEngine.Texture2D>);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = UnityEngine_Object__op_Equality(uVar8,0,0);
      if (cVar4 != '\0') {
        uVar9 = System_String__Concat(LIT_"'SparkMapaWindow: planta nao encontrada: Data/UI/Assets/M...",*(undefined8 *)(lVar2 + 0x18),0);
        if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
          func_0x000180315660();
        }
        UnityEngine_Debug__LogWarning(uVar9,0);
      }
      if (*(longlong *)(param_1 + 0x170) == 0) goto DAT_180637bca;
      lVar5 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x170),0);
      puVar6 = (undefined8 *)UnityEngine_UIElements_StyleBackground__op_Implicit(auStack_88,uVar8,0)
      ;
      if (lVar5 == 0) goto DAT_180637bca;
      uStack_b8 = *puVar6;
      uStack_b0 = puVar6[1];
      uStack_a8 = *(undefined4 *)(puVar6 + 2);
      uStack_a4 = *(undefined4 *)((longlong)puVar6 + 0x14);
      uStack_a0 = *(undefined4 *)(puVar6 + 3);
      uStack_9c = *(undefined4 *)((longlong)puVar6 + 0x1c);
      uStack_98 = puVar6[4];
      FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar5,&uStack_b8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
      if (cVar4 != '\0') {
        if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
          func_0x000180315660();
        }
        cVar4 = UnityEngine_Object__op_Inequality(uVar7,uVar8,0);
        if (cVar4 != '\0') {
          if (*(int *)(TI_SparkMapaWindow + 0xe4) == 0) {
            func_0x000180315660();
          }
          cVar4 = SparkMapaWindow__RadarUsaPlanta__1806460d0(uVar7,0);
          if (cVar4 == '\0') {
            UnityEngine_Resources__UnloadAsset(uVar7,0);
          }
        }
      }
    }
    if (bVar11) {
      if ((bVar12) && (lVar5 = *(longlong *)(param_1 + 0x298), lVar5 != 0)) {
        (**(code **)(lVar5 + 0x18))
                  (*(undefined8 *)(lVar5 + 0x40),param_3,*(undefined8 *)(lVar5 + 0x28));
      }
    }
    else {
      uVar10 = SparkMapaWindow__TamanhoDaVista__180649960(param_1,0);
      fStackX_c = (float)(uVar10 >> 0x20);
      if (fStackX_c <= (float)uVar10) {
        uVar10 = (ulonglong)(uint)fStackX_c;
      }
      fVar13 = (float)uVar10 * 0.0009765625;
      fVar14 = 1.0;
      if (1.0 < fVar13) {
        fVar14 = fVar13;
      }
      *(float *)(param_1 + 0x194) = fVar14;
      SparkMapaWindow__MontaAbas__18063da80(param_1,0);
    }
    if (*param_4 == '\0') {
      if (lVar2 == 0) goto DAT_180637bca;
      uVar7 = SparkMapaWindow_Andar__get_Meio(lVar2,0);
    }
    else {
      uVar7 = FUN_180cb84f0(param_4,MR_System.Nullable<UnityEngine.Vector2>.get_Value);
      if (lVar2 == 0) {
DAT_180637bca:
        FUN_1803155d0();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = SparkMapaWindow_Andar__NaPlanta__180654830(lVar2,uVar7,0);
    }
    fStackX_c = (float)((ulonglong)uVar7 >> 0x20);
    uVar8 = SparkMapaWindow__TamanhoDaVista__180649960(param_1,0);
    fVar14 = *(float *)(param_1 + 0x194) * fStackX_c;
    fStackX_c = (float)((ulonglong)uVar8 >> 0x20);
    *(float *)(param_1 + 0x19c) = fStackX_c * 0.5 - fVar14;
    *(float *)(param_1 + 0x198) = (float)uVar8 * 0.5 - *(float *)(param_1 + 0x194) * (float)uVar7;
    SparkMapaWindow__Redesenha__180646390(param_1,0);
  }
  return;
}

