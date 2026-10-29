// SparkMusica__Awake__180453b30 @ 0x180453b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMusica__Awake__180453b30(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  
  if (cRam00000001834b2fff == '\0') {
    FUN_180315380(MR_UnityEngine.GameObject.AddComponent<UnityEngine.AudioSource>);
    cRam00000001834b2fff = '\x01';
  }
  uVar14 = 0;
  do {
    lVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar5 == 0) {
code_r0x000180453c07:
      FUN_1803155d0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar5 = FUN_1809e9600(lVar5,MR_UnityEngine.GameObject.AddComponent<UnityEngine.AudioSource>);
    if (lVar5 == 0) goto code_r0x000180453c07;
    UnityEngine_AudioSource__set_playOnAwake(lVar5,0,0);
    UnityEngine_AudioSource__set_spatialBlend(lVar5,0);
    UnityEngine_AudioSource__set_priority(lVar5,0);
    UnityEngine_AudioSource__set_volume(lVar5);
    lVar6 = *(longlong *)(param_1 + 0x30);
    if (lVar6 == 0) goto code_r0x000180453c07;
    if (*(uint *)(lVar6 + 0x18) <= (uint)uVar14) {
      FUN_1803155c0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(longlong *)(lVar6 + 0x20 + uVar14 * 8) = lVar5;
    func_0x000180314690(lVar6 + uVar14 * 8 + 0x20);
    uVar13 = (uint)uVar14 + 1;
    uVar14 = (ulonglong)uVar13;
  } while ((int)uVar13 < 2);
  if (cRam00000001834b3000 == '\0') {
    FUN_180315380(TI_char__,0);
    FUN_180315380(TI_System.Globalization.CultureInfo);
    FUN_180315380(TI_UnityEngine.Debug);
    FUN_180315380(MR_System.Collections.Generic.Dictionary<int,string__>.set_Item);
    FUN_180315380(MR_System.Collections.Generic.List<SparkMusica.Volume>.Add);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.TextAsset>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_SparkMusica);
    FUN_180315380(TI_SparkMusica.Volume);
    FUN_180315380(LIT_"'V'");
    FUN_180315380(LIT_"'[SPARK] musica: Resources/Data/Music/_musica.txt nao enc...");
    FUN_180315380(LIT_"'l'");
    FUN_180315380(LIT_"'Data/Music/_musica'");
    FUN_180315380(LIT_"'F'");
    cRam00000001834b3000 = '\x01';
  }
  if (*(int *)(TI_SparkArte + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar5 = FUN_180a90ae0(LIT_"'Data/Music/_musica'",MR_SparkArte.Load<UnityEngine.TextAsset>);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar2 = UnityEngine_Object__op_Equality(lVar5,0,0);
  if (cVar2 != '\0') {
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    uVar10 = LIT_"'[SPARK] musica: Resources/Data/Music/_musica.txt nao enc...";
    if (DAT_1834bfa1e == '\0') {
      FUN_180315380(TI_UnityEngine.Debug,0);
      FUN_180315380(TI_UnityEngine.ILogger);
      DAT_1834bfa1e = '\x01';
    }
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    if (DAT_1834b3803 == '\0') {
      FUN_180315380(TI_UnityEngine.Debug);
      DAT_1834b3803 = '\x01';
    }
    if (*(int *)(TI_UnityEngine.Debug + 0xe4) == 0) {
      func_0x000180315660();
    }
    lVar5 = *(longlong *)(*(longlong *)(TI_UnityEngine.Debug + 0xb8) + 8);
    if (lVar5 != 0) {
      FUN_180036090(5,TI_UnityEngine.ILogger,lVar5,2,uVar10);
      return;
    }
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (lVar5 == 0) {
code_r0x00018045411e:
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar6 = UnityEngine_TextAsset__ToString(lVar5,0);
  if (lVar6 == 0) goto code_r0x00018045411e;
  lVar6 = System_String__Split(lVar6,10,0,0);
  if (lVar6 == 0) goto code_r0x00018045411e;
  uVar13 = 0;
code_r0x000180453db0:
  if (*(int *)(lVar6 + 0x18) <= (int)uVar13) {
    if (cRam00000001834c1001 == '\0') {
      FUN_180315380(TI_UnityEngine.ResourcesAPI,0);
      cRam00000001834c1001 = '\x01';
    }
    if (*(int *)(TI_UnityEngine.ResourcesAPI + 0xe4) == 0) {
      func_0x000180315660();
    }
    plVar12 = (longlong *)UnityEngine_ResourcesAPI__get_ActiveAPI(0);
    if (plVar12 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018243381b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar12 + 0x1c8))(plVar12,lVar5,*(undefined8 *)(*plVar12 + 0x1d0));
      return;
    }
    FUN_1803155d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(uint *)(lVar6 + 0x18) <= uVar13) goto DAT_180454118;
  lVar7 = *(longlong *)(lVar6 + 0x20 + (longlong)(int)uVar13 * 8);
  if (lVar7 == 0) goto code_r0x00018045411e;
  lVar7 = System_String__TrimEnd(lVar7,0xd,0);
  if (lVar7 == 0) goto code_r0x00018045411e;
  lVar7 = System_String__Split(lVar7,9,0,0);
  if (lVar7 == 0) goto code_r0x00018045411e;
  if (2 < *(int *)(lVar7 + 0x18)) {
    if (*(int *)(lVar7 + 0x18) == 0) goto DAT_180454118;
    cVar2 = func_0x0001817058a0(*(undefined8 *)(lVar7 + 0x20));
    if (cVar2 != '\0') {
      if (1 < *(uint *)(lVar7 + 0x18)) {
        lVar9 = *(longlong *)(param_1 + 0x20);
        uVar10 = *(undefined8 *)(lVar7 + 0x28);
        if (*(int *)(TI_System.Globalization.CultureInfo + 0xe4) == 0) {
          func_0x000180315660();
        }
        uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        System_Int32__Parse(uVar10,uVar8,0);
        if (*(uint *)(lVar7 + 0x18) < 3) goto DAT_180454118;
        if (*(longlong *)(lVar7 + 0x30) == 0) goto code_r0x00018045411e;
        System_String__Split(*(longlong *)(lVar7 + 0x30),0x2c,0,0);
        if (lVar9 == 0) goto code_r0x00018045411e;
        FUN_1812037f0(lVar9);
        uVar13 = uVar13 + 1;
        goto code_r0x000180453db0;
      }
      goto DAT_180454118;
    }
  }
  if (4 < *(int *)(lVar7 + 0x18)) {
    if (*(int *)(lVar7 + 0x18) == 0) goto DAT_180454118;
    cVar2 = func_0x0001817058a0(*(undefined8 *)(lVar7 + 0x20));
    if (cVar2 != '\0') {
      lVar9 = func_0x000180315580(TI_SparkMusica.Volume);
      func_0x0001803f01b0(lVar9,0);
      if (*(uint *)(lVar7 + 0x18) < 2) {
DAT_180454118:
        FUN_1803155c0();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar10 = *(undefined8 *)(lVar7 + 0x28);
      if (*(int *)(TI_System.Globalization.CultureInfo + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar4 = System_Int32__Parse(uVar10,uVar8,0);
      if (lVar9 == 0) goto code_r0x00018045411e;
      *(undefined4 *)(lVar9 + 0x10) = uVar4;
      if (*(uint *)(lVar7 + 0x18) < 3) goto DAT_180454118;
      if (*(longlong *)(lVar7 + 0x30) == 0) goto code_r0x00018045411e;
      uVar3 = System_String__Contains(*(longlong *)(lVar7 + 0x30),LIT_"'l'",0);
      *(undefined1 *)(lVar9 + 0x14) = uVar3;
      if (*(uint *)(lVar7 + 0x18) < 4) goto DAT_180454118;
      if (*(longlong *)(lVar7 + 0x38) == 0) goto code_r0x00018045411e;
      uVar10 = System_String__Split(*(longlong *)(lVar7 + 0x38),0x2c,0,0);
      if (*(int *)(TI_SparkMusica + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar10 = SparkMusica__Numeros__180454ce0(uVar10,0);
      *(undefined8 *)(lVar9 + 0x18) = uVar10;
      func_0x000180314690(lVar9 + 0x18,uVar10);
      if (*(uint *)(lVar7 + 0x18) < 5) goto DAT_180454118;
      lVar7 = *(longlong *)(lVar7 + 0x40);
      lVar11 = func_0x000180314710(TI_char__,2);
      if (lVar11 == 0) goto code_r0x00018045411e;
      if ((*(int *)(lVar11 + 0x18) == 0) ||
         (*(undefined2 *)(lVar11 + 0x20) = 0x2c, *(uint *)(lVar11 + 0x18) < 2)) goto DAT_180454118;
      *(undefined2 *)(lVar11 + 0x22) = 0x3b;
      if (lVar7 == 0) goto code_r0x00018045411e;
      uVar10 = System_String__Split(lVar7,lVar11,0);
      uVar10 = SparkMusica__Numeros__180454ce0(uVar10,0);
      *(undefined8 *)(lVar9 + 0x20) = uVar10;
      func_0x000180314690(lVar9 + 0x20,uVar10);
      lVar7 = *(longlong *)(lVar9 + 0x18);
      if (lVar7 == 0) goto code_r0x00018045411e;
      if (((*(uint *)(lVar7 + 0x18) < 4) || (*(uint *)(lVar7 + 0x18) < 5)) ||
         (*(uint *)(lVar7 + 0x18) < 6)) goto DAT_180454118;
      *(float *)(lVar9 + 0x28) =
           (*(float *)(lVar7 + 0x30) - *(float *)(lVar7 + 0x24)) *
           (*(float *)(lVar7 + 0x2c) - *(float *)(lVar7 + 0x20)) *
           (*(float *)(lVar7 + 0x34) - *(float *)(lVar7 + 0x28));
      if (*(longlong *)(param_1 + 0x28) == 0) goto code_r0x00018045411e;
      FUN_180002eb0();
    }
  }
  uVar13 = uVar13 + 1;
  goto code_r0x000180453db0;
}

