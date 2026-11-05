// SparkMapaWindow__GiraSeta__18063b2a0 @ 0x18063b2a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SparkMapaWindow__GiraSeta__18063b2a0(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  ushort uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uStackX_8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_58 [80];
  
  if (cRam00000001834b3d4b == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_PlayerController);
    cRam00000001834b3d4b = '\x01';
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    if (DAT_1834b2f32 == '\0') {
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    uVar1 = **(undefined8 **)(TI_PlayerEntity + 0xb8);
    if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
      func_0x000180315660();
    }
    cVar6 = UnityEngine_Object__op_Equality(uVar1,0,0);
    if (cVar6 == '\0') {
      if (*(int *)(TI_PlayerController + 0xe4) == 0) {
        func_0x000180315660();
      }
      if (DAT_1834b2f33 == '\0') {
        FUN_180315380(TI_PlayerController);
        DAT_1834b2f33 = '\x01';
      }
      if (*(int *)(TI_PlayerController + 0xe4) == 0) {
        func_0x000180315660();
      }
      uVar1 = **(undefined8 **)(TI_PlayerController + 0xb8);
      if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
        func_0x000180315660();
      }
      cVar6 = UnityEngine_Object__op_Inequality(uVar1,0,0);
      if (cVar6 == '\0') {
        if (DAT_1834b2f32 == '\0') {
          FUN_180315380(TI_PlayerEntity);
          DAT_1834b2f32 = '\x01';
        }
        lVar8 = **(longlong **)(TI_PlayerEntity + 0xb8);
      }
      else {
        if (*(int *)(TI_PlayerController + 0xe4) == 0) {
          func_0x000180315660();
        }
        lVar8 = FUN_1804169a0(0);
      }
      if (((lVar8 == 0) || (lVar8 = UnityEngine_Component__get_transform(lVar8,0), lVar8 == 0)) ||
         ((iVar7 = UnityEngine_Transform__get_childCount(lVar8,0), 0 < iVar7 &&
          (lVar8 = UnityEngine_Transform__GetChild(lVar8,0,0), lVar8 == 0)))) {
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar8 = UnityEngine_Transform__get_eulerAngles(&uStack_98,lVar8,0);
      fVar15 = *(float *)(lVar8 + 4) * 0.017453292;
      uVar13 = FUN_1803a8190(fVar15);
      FUN_1803a95e0(fVar15);
      fVar15 = (float)func_0x0001803a7a00(uVar13);
      fVar15 = fVar15 * 57.29578;
      fVar16 = *(float *)(param_1 + 0x128) - fVar15;
      fVar14 = (float)func_0x0001803a9df0(fVar16 / 360.0);
      fVar16 = fVar16 - fVar14 * 360.0;
      if (fVar16 < 0.0) {
        fVar16 = 0.0;
      }
      else if (360.0 < fVar16) {
        fVar16 = 360.0;
      }
      if (180.0 < fVar16) {
        fVar16 = fVar16 - 360.0;
      }
      if (1.0 <= ABS(fVar16)) {
        *(float *)(param_1 + 0x128) = fVar15;
        if (*(longlong *)(param_1 + 0x120) != 0) {
          plVar9 = (longlong *)
                   UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x120),0)
          ;
          uStackX_8 = 0;
          UnityEngine_UIElements_Angle___ctor(&uStackX_8,fVar15,0,0);
          uStack_88 = 0;
          uStack_98 = 0;
          uStack_90 = 0;
          UnityEngine_UIElements_Rotate___ctor(&uStack_98,uStackX_8,0);
          uStack_78 = (undefined4)uStack_98;
          uStack_74 = uStack_98._4_4_;
          uStack_70 = (undefined4)uStack_90;
          uStack_6c = uStack_90._4_4_;
          uStack_68 = (undefined4)uStack_88;
          uStack_64 = (undefined4)((ulonglong)uStack_88 >> 0x20);
          puVar10 = (undefined4 *)
                    UnityEngine_UIElements_StyleRotate__op_Implicit(auStack_58,&uStack_78,0);
          if (plVar9 != (longlong *)0x0) {
            uStack_78 = *puVar10;
            uStack_74 = puVar10[1];
            uStack_70 = puVar10[2];
            lVar8 = *plVar9;
            uStack_6c = (undefined4)*(undefined8 *)(puVar10 + 3);
            uVar13 = uStack_6c;
            uStack_68 = (undefined4)((ulonglong)*(undefined8 *)(puVar10 + 3) >> 0x20);
            uVar3 = uStack_68;
            uStack_64 = (undefined4)*(undefined8 *)(puVar10 + 5);
            uVar4 = uStack_64;
            uStack_60 = (undefined4)((ulonglong)*(undefined8 *)(puVar10 + 5) >> 0x20);
            uVar5 = uStack_60;
            if (*(ushort *)(lVar8 + 0x12e) != 0) {
              uVar12 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar8 + 0xb0) + (ulonglong)uVar12 * 0x10) ==
                    TI_UnityEngine.UIElements.IStyle) {
                  puVar11 = (undefined8 *)
                            ((longlong)
                             (*(int *)(*(longlong *)(lVar8 + 0xb0) + 8 + (ulonglong)uVar12 * 0x10) +
                             0x6b) * 0x10 + 0x138 + lVar8);
                  goto code_r0x00018063b623;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < *(ushort *)(lVar8 + 0x12e));
            }
            puVar11 = (undefined8 *)FUN_180312860(plVar9,TI_UnityEngine.UIElements.IStyle,0x6b);
code_r0x00018063b623:
            uStack_6c = uVar13;
            uStack_68 = uVar3;
            uStack_64 = uVar4;
            uStack_60 = uVar5;
            (*(code *)*puVar11)(plVar9,&uStack_78,puVar11[1]);
            return;
          }
        }
        FUN_1803155d0();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

