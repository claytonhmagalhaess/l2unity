// NameplatesManagerBase__UpdateNameplatePosition__1806798e0 @ 0x1806798e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerBase__UpdateNameplatePosition__1806798e0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  undefined4 *puVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined1 auStack_68 [96];
  
  if (cRam00000001834b3e1e == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IResolvedStyle);
    FUN_180315380(TI_UnityEngine.Object);
    FUN_180315380(TI_SparkMontaria);
    cRam00000001834b3e1e = '\x01';
  }
  if (param_2 == 0) goto code_r0x000180679be8;
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  if (*(int *)(TI_SparkMontaria + 0xe4) == 0) {
    func_0x000180315660();
  }
  lVar8 = SparkMontaria__AncoraDoNome(uVar4,0);
  if (*(int *)(TI_UnityEngine.Object + 0xe4) == 0) {
    func_0x000180315660();
  }
  cVar6 = UnityEngine_Object__op_Inequality(lVar8,0,0);
  if (cVar6 == '\0') {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      pfVar9 = (float *)UnityEngine_Transform__get_position
                                  (&fStack_78,*(longlong *)(param_2 + 0x40),0);
      goto code_r0x0001806799ce;
    }
  }
  else {
    if (lVar8 == 0) {
      FUN_1803155d0();
code_r0x000180679bcf:
      FUN_1803155d0();
code_r0x000180679bd4:
      FUN_1803155d0();
code_r0x000180679bd9:
      FUN_1803155d0();
    }
    else {
      pfVar9 = (float *)UnityEngine_Transform__get_position(&fStack_78,lVar8,0);
code_r0x0001806799ce:
      fVar1 = pfVar9[2];
      fVar12 = pfVar9[1];
      fVar13 = *pfVar9;
      if (DAT_1834b2f30 == '\0') {
        FUN_180315380(TI_UnityEngine.Vector3);
        DAT_1834b2f30 = '\x01';
      }
      lVar8 = *(longlong *)(TI_UnityEngine.Vector3 + 0xb8);
      fVar2 = *(float *)(param_2 + 0x38);
      if (*(longlong *)(param_1 + 0x40) != 0) {
        fStack_78 = fVar13 + fVar2 * *(float *)(lVar8 + 0x18);
        fStack_74 = fVar12 + fVar2 * *(float *)(lVar8 + 0x1c);
        fStack_70 = fVar1 + fVar2 * *(float *)(lVar8 + 0x20);
        puVar10 = (undefined4 *)
                  UnityEngine_Camera__WorldToScreenPoint
                            (auStack_68,*(longlong *)(param_1 + 0x40),&fStack_78,0);
        if ((float)puVar10[2] <= 0.0) {
          *(undefined4 *)(param_2 + 0x80) = 0x7fc00000;
          Nameplate__Posiciona__180677eb0(param_2);
          return;
        }
        lVar8 = *(longlong *)(param_2 + 0x10);
        if (lVar8 != 0) {
          uVar3 = *puVar10;
          fVar1 = (float)puVar10[1];
          lVar11 = UnityEngine_UIElements_VisualElement__get_resolvedStyle(lVar8,0);
          if (lVar11 != 0) {
            fVar12 = (float)FUN_1800020c0(0x51,TI_UnityEngine.UIElements.IResolvedStyle,lVar11);
            lVar8 = UnityEngine_UIElements_VisualElement__get_resolvedStyle(lVar8,0);
            if (lVar8 != 0) {
              fVar13 = (float)FUN_1800020c0(0x20,TI_UnityEngine.UIElements.IResolvedStyle,lVar8);
              if (0.0 < fVar12) {
                *(float *)(param_2 + 0x94) = fVar12;
              }
              if (0.0 < fVar13) {
                *(float *)(param_2 + 0x98) = fVar13;
              }
              else {
                fVar13 = *(float *)(param_2 + 0x98);
              }
              *(undefined4 *)(param_2 + 0x80) = uVar3;
              iVar7 = FUN_1823e26f0(0);
              *(float *)(param_2 + 0x84) = (float)iVar7 - fVar1;
              FUN_180006040();
              iVar7 = FUN_1823e26f0(0);
              FUN_180006040(((float)iVar7 - fVar1) - fVar13);
              Nameplate__Posiciona__180677eb0(param_2);
              return;
            }
            goto code_r0x000180679bcf;
          }
          goto code_r0x000180679bd4;
        }
        goto code_r0x000180679bd9;
      }
    }
    FUN_1803155d0();
  }
  FUN_1803155d0();
code_r0x000180679be8:
  FUN_1803155d0();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

