// SparkSons__PlaySound__180585bf0 @ 0x180585bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkSons__PlaySound__180585bf0(undefined8 param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uStack_48;
  float fStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (cRam00000001834b38db == '\0') {
    FUN_180315380(TI_SparkLeitor);
    FUN_180315380(LIT_"'Voice.'");
    FUN_180315380(LIT_"'event:/'");
    FUN_180315380(LIT_"'.'");
    cRam00000001834b38db = '\x01';
  }
  uStack_28 = 0;
  uStack_20 = 0;
  lVar8 = func_0x000180315580(TI_SparkLeitor);
  SparkLeitor___ctor(lVar8,param_1,0);
  if (lVar8 != 0) {
    iVar4 = func_0x00018043efc0(lVar8,0);
    lVar9 = SparkLeitor__S(lVar8,0);
    if ((iVar4 == 2) && (cVar3 = func_0x000181707e50(lVar9,0), cVar3 == '\0')) {
      if (lVar9 == 0) goto code_r0x000180585f90;
      cVar3 = System_String__Contains(lVar9,LIT_"'.'",0);
      if (cVar3 == '\0') {
        lVar9 = System_String__Concat(LIT_"'Voice.'",lVar9,0);
      }
    }
    iVar4 = SparkLeitor__get_Resta(lVar8,0);
    if (iVar4 < 4) {
      iVar4 = 0;
    }
    else {
      iVar4 = func_0x00018043efc0(lVar8,0);
    }
    iVar5 = SparkLeitor__get_Resta(lVar8,0);
    if (iVar5 < 0x10) {
      iVar5 = 0;
      iVar7 = 0;
      iVar6 = 0;
    }
    else {
      func_0x00018043efc0(lVar8,0);
      iVar5 = func_0x00018043efc0(lVar8,0);
      iVar6 = func_0x00018043efc0(lVar8,0);
      iVar7 = func_0x00018043efc0(lVar8,0);
    }
    cVar3 = func_0x000181707e50(lVar9,0);
    if (cVar3 != '\0') {
      return;
    }
    if ((iVar4 == 0) || ((iVar5 == 0 && (iVar6 == 0)))) {
      lVar8 = SparkSons__get_Instance__180586f00(0);
      if (lVar8 != 0) {
        cVar3 = SparkSons__TocaInterface__180586640(lVar8,lVar9,0);
        if (cVar3 != '\0') {
          return;
        }
        if (lVar9 != 0) {
          cVar3 = System_String__Contains(lVar9,LIT_"'.'",0);
          if (cVar3 == '\0') {
            return;
          }
          uVar11 = System_String__Replace(lVar9,0x2e,0x2f,0);
          uVar11 = System_String__Concat(LIT_"'event:/'",uVar11,0);
          puVar10 = (undefined8 *)
                    FMODUnity_RuntimeManager__PathToEventReference(&uStack_38,uVar11,0);
          uStack_28 = *puVar10;
          uStack_20 = puVar10[1];
          cVar3 = func_0x000180899310(&uStack_28,0);
          if (cVar3 != '\0') {
            return;
          }
          lVar8 = FUN_18043ae60(0);
          if (lVar8 == 0) {
            return;
          }
          uStack_38 = uStack_28;
          uStack_30 = uStack_20;
          AudioManager__PlaySound(lVar8,&uStack_38,0);
          return;
        }
      }
    }
    else {
      fStack_40 = (float)iVar7;
      uStack_48 = CONCAT44((float)iVar6,(float)iVar5);
      puVar10 = (undefined8 *)func_0x0001807b6480(&uStack_38,&uStack_48,0);
      uVar11 = *puVar10;
      uVar1 = *(undefined4 *)(puVar10 + 1);
      lVar8 = SparkSons__get_Instance__180586f00(0);
      if (lVar8 != 0) {
        cVar3 = SparkSons__Tem__180585fa0(lVar8,lVar9,0);
        if (cVar3 == '\0') {
          if (cRam00000001834b301f == '\0') {
            FUN_180315380(TI_AudioManager);
            cRam00000001834b301f = '\x01';
          }
          lVar8 = **(longlong **)(TI_AudioManager + 0xb8);
          if (lVar8 != 0) {
            if (lVar9 == 0) goto code_r0x000180585f90;
            uStack_48 = uVar11;
            fStack_40 = (float)uVar1;
            uVar11 = System_String__Replace(lVar9,0x2e,0x2f,0);
            AudioManager__Play3DSoundByReferenceName(lVar8,uVar11,&uStack_48,0);
          }
        }
        else {
          lVar8 = SparkSons__get_Instance__180586f00(0);
          if (lVar8 == 0) goto code_r0x000180585f90;
          uStack_48 = uVar11;
          fStack_40 = (float)uVar1;
          SparkSons__Toca__180586a60(lVar8,lVar9,&uStack_48,0,0,0,0,0);
        }
        return;
      }
    }
  }
code_r0x000180585f90:
  FUN_1803155d0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

