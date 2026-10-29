// Nameplate__ManageColors__180676df0 @ 0x180676df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Nameplate__ManageColors__180676df0(longlong param_1)

{
  int iVar1;
  float *pfVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  ushort uVar11;
  longlong lVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 auStack_48 [64];
  
  if (cRam00000001834b3e0b == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(TI_Nameplate);
    cRam00000001834b3e0b = '\x01';
  }
  Nameplate__AtualizaClan__1806751c0(param_1,0);
  if (cRam00000001834b3e0c == '\0') {
    FUN_180315380(LIT_"'Raid Fighter'");
    FUN_180315380(LIT_"'Raid Boss'");
    cRam00000001834b3e0c = '\x01';
  }
  if ((*(longlong *)(param_1 + 0x50) == 0) ||
     (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30), lVar7 == 0))
  goto code_r0x00018067751b;
  if (*(int *)(lVar7 + 0x10) - 2U < 2) {
    lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30) + 0x20);
    cVar4 = func_0x000181707e50(lVar7,0);
    if (cVar4 != '\0') goto code_r0x000180676f03;
    if (lVar7 == 0) goto code_r0x00018067751b;
    uVar6 = func_0x00018170d270(lVar7,0);
    cVar4 = System_String__Equals(uVar6,LIT_"'Raid Boss'",5,0);
    if ((cVar4 == '\0') &&
       (cVar4 = System_String__Equals(uVar6,LIT_"'Raid Fighter'",5,0), cVar4 == '\0'))
    goto code_r0x000180676f03;
    iVar5 = 0x3f8bfe;
  }
  else {
code_r0x000180676f03:
    if ((*(longlong *)(param_1 + 0x50) == 0) ||
       (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x48), lVar7 == 0))
    goto code_r0x00018067751b;
    iVar5 = *(int *)(lVar7 + 0x24);
  }
  if (*(int *)(param_1 + 0x58) != iVar5) {
    iVar1 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar5;
    if (iVar5 == 0) {
      if (0 < iVar1) {
        if (*(longlong *)(param_1 + 0x30) == 0) goto code_r0x00018067751b;
        lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
        puVar8 = (undefined8 *)func_0x0001826005c0(auStack_48,1,0);
        if (lVar7 == 0) goto code_r0x00018067751b;
        uStack_58 = *(undefined4 *)(puVar8 + 2);
        uStack_68 = *puVar8;
        uStack_60 = puVar8[1];
        FUN_180004fc0(0x2f,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_68);
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x30) == 0) goto code_r0x00018067751b;
      plVar10 = (longlong *)
                UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x30),0);
      puVar8 = (undefined8 *)func_0x0001807ac1e0(&uStack_68,*(undefined4 *)(param_1 + 0x58),0);
      uStack_68 = *puVar8;
      uStack_60 = puVar8[1];
      puVar8 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(auStack_48,&uStack_68,0)
      ;
      if (plVar10 == (longlong *)0x0) goto code_r0x00018067751b;
      lVar7 = *plVar10;
      uVar6 = *puVar8;
      uVar18 = puVar8[1];
      uVar14 = *(undefined4 *)(puVar8 + 2);
      if (*(ushort *)(lVar7 + 0x12e) != 0) {
        uVar11 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar11 * 0x10) ==
              TI_UnityEngine.UIElements.IStyle) {
            puVar8 = (undefined8 *)
                     ((longlong)
                      (*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar11 * 0x10) + 0x2f)
                      * 0x10 + 0x138 + lVar7);
            goto code_r0x000180677039;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
      }
      puVar8 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x000180677039:
      uStack_68 = uVar6;
      uStack_60 = uVar18;
      uStack_58 = uVar14;
      (*(code *)*puVar8)(plVar10,&uStack_68,puVar8[1]);
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x50);
  if ((lVar7 == 0) || (lVar12 = *(longlong *)(lVar7 + 0x40), lVar12 == 0))
  goto code_r0x00018067751b;
  if (*(int *)(lVar12 + 0x44) < 1) {
    lVar7 = *(longlong *)(lVar7 + 0x30);
    if (lVar7 == 0) {
code_r0x00018067751b:
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)(lVar7 + 0x2c) != 1) {
      lVar12 = *(longlong *)(param_1 + 0x50);
      if (*(int *)(lVar7 + 0x2c) == 2) {
        if (*(longlong *)(lVar12 + 0x30) != 0) {
          *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(*(longlong *)(lVar12 + 0x30) + 0x2c);
          fVar13 = (float)FUN_182436650(0);
          if (fVar13 - *(float *)(param_1 + 0x7c) <= 0.5) {
            return;
          }
          *(bool *)(param_1 + 0x79) = *(char *)(param_1 + 0x79) == '\0';
          if (*(longlong *)(param_1 + 0x28) != 0) {
            lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x28),0)
            ;
            if (*(char *)(param_1 + 0x79) == '\0') {
              uVar14 = *(undefined4 *)(param_1 + 0x60);
              uVar15 = *(undefined4 *)(param_1 + 100);
              uVar16 = *(undefined4 *)(param_1 + 0x68);
              uVar17 = *(undefined4 *)(param_1 + 0x6c);
            }
            else {
              if (*(int *)(TI_Nameplate + 0xe4) == 0) {
                func_0x000180315660(TI_Nameplate);
              }
              lVar12 = *(longlong *)(TI_Nameplate + 0xb8);
              uVar14 = *(undefined4 *)(lVar12 + 0x20);
              uVar15 = *(undefined4 *)(lVar12 + 0x24);
              uVar16 = *(undefined4 *)(lVar12 + 0x28);
              uVar17 = *(undefined4 *)(lVar12 + 0x2c);
            }
            uStack_68 = CONCAT44(uVar15,uVar14);
            uStack_60 = CONCAT44(uVar17,uVar16);
            puVar8 = (undefined8 *)
                     UnityEngine_UIElements_StyleColor__op_Implicit(auStack_48,&uStack_68,0);
            if (lVar7 != 0) {
              uStack_68 = *puVar8;
              uStack_60 = puVar8[1];
              uStack_58 = *(undefined4 *)(puVar8 + 2);
              FUN_180004fc0(0x2f,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_68);
              uVar14 = FUN_182436650(0);
              *(undefined4 *)(param_1 + 0x7c) = uVar14;
              return;
            }
          }
        }
      }
      else if (*(longlong *)(lVar12 + 0x48) != 0) {
        if (((*(int *)(param_1 + 0x5c) == *(int *)(*(longlong *)(lVar12 + 0x48) + 0x20)) &&
            (*(int *)(*(longlong *)(lVar12 + 0x40) + 0x44) == *(int *)(param_1 + 0x74))) &&
           (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x30) + 0x2c) ==
            *(int *)(param_1 + 0x70))) {
          return;
        }
        *(undefined8 *)(param_1 + 0x70) = 0;
        if ((*(longlong *)(param_1 + 0x50) != 0) &&
           (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x48), lVar7 != 0)) {
          iVar5 = *(int *)(lVar7 + 0x20);
          *(int *)(param_1 + 0x5c) = iVar5;
          if (iVar5 == 0) {
            return;
          }
          puVar9 = (undefined4 *)func_0x0001807ac1e0(&uStack_68,iVar5,0);
          uVar14 = puVar9[1];
          uVar15 = puVar9[2];
          uVar16 = puVar9[3];
          *(undefined4 *)(param_1 + 0x60) = *puVar9;
          *(undefined4 *)(param_1 + 100) = uVar14;
          *(undefined4 *)(param_1 + 0x68) = uVar15;
          *(undefined4 *)(param_1 + 0x6c) = uVar16;
          if (*(longlong *)(param_1 + 0x28) != 0) {
            lVar7 = UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x28),0)
            ;
            uStack_68 = *(undefined8 *)(param_1 + 0x60);
            uStack_60 = *(undefined8 *)(param_1 + 0x68);
            puVar8 = (undefined8 *)
                     UnityEngine_UIElements_StyleColor__op_Implicit(auStack_48,&uStack_68,0);
            if (lVar7 != 0) {
              uStack_68 = *puVar8;
              uStack_60 = puVar8[1];
              uStack_58 = *(undefined4 *)(puVar8 + 2);
              FUN_180004fc0(0x2f,TI_UnityEngine.UIElements.IStyle,lVar7,&uStack_68);
              return;
            }
          }
        }
      }
      goto code_r0x00018067751b;
    }
    if (lVar7 == 0) goto code_r0x00018067751b;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(lVar7 + 0x2c);
    if (*(longlong *)(param_1 + 0x28) == 0) goto code_r0x00018067751b;
    plVar10 = (longlong *)
              UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x28),0);
    if (*(int *)(TI_Nameplate + 0xe4) == 0) {
      func_0x000180315660(TI_Nameplate);
    }
    uStack_68 = *(undefined8 *)(*(longlong *)(TI_Nameplate + 0xb8) + 0x20);
    uStack_60 = *(undefined8 *)(*(longlong *)(TI_Nameplate + 0xb8) + 0x28);
    puVar8 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(auStack_48,&uStack_68,0);
    if (plVar10 == (longlong *)0x0) goto code_r0x00018067751b;
    lVar7 = *plVar10;
    uVar6 = *puVar8;
    uVar18 = puVar8[1];
    uVar14 = *(undefined4 *)(puVar8 + 2);
    if (*(ushort *)(lVar7 + 0x12e) != 0) {
      lVar12 = *(longlong *)(lVar7 + 0xb0);
      uVar11 = 0;
      do {
        if (*(longlong *)(lVar12 + (ulonglong)uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        goto code_r0x0001806774f9;
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
    }
  }
  else {
    if (lVar12 == 0) goto code_r0x00018067751b;
    if (*(int *)(lVar12 + 0x44) == *(int *)(param_1 + 0x74)) {
      return;
    }
    if ((*(longlong *)(param_1 + 0x50) == 0) ||
       (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x40), lVar7 == 0))
    goto code_r0x00018067751b;
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(lVar7 + 0x44);
    if ((*(longlong *)(param_1 + 0x50) == 0) ||
       (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x40), lVar7 == 0))
    goto code_r0x00018067751b;
    fVar13 = (float)*(int *)(lVar7 + 0x44) / 300.0;
    if (fVar13 < 0.25) {
      fVar13 = 0.25;
    }
    else if (1.0 < fVar13) {
      fVar13 = 1.0;
    }
    if (*(longlong *)(param_1 + 0x28) == 0) goto code_r0x00018067751b;
    plVar10 = (longlong *)
              UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0x28),0);
    if (*(int *)(TI_Nameplate + 0xe4) == 0) {
      func_0x000180315660();
    }
    pfVar2 = *(float **)(TI_Nameplate + 0xb8);
    if (fVar13 < 0.0) {
      fVar13 = 0.0;
    }
    else if (1.0 < fVar13) {
      fVar13 = 1.0;
    }
    uStack_68 = CONCAT44((pfVar2[1] - pfVar2[5]) * fVar13 + pfVar2[5],
                         (*pfVar2 - pfVar2[4]) * fVar13 + pfVar2[4]);
    uStack_60 = CONCAT44((pfVar2[3] - pfVar2[7]) * fVar13 + pfVar2[7],
                         (pfVar2[2] - pfVar2[6]) * fVar13 + pfVar2[6]);
    puVar8 = (undefined8 *)UnityEngine_UIElements_StyleColor__op_Implicit(auStack_48,&uStack_68,0);
    if (plVar10 == (longlong *)0x0) goto code_r0x00018067751b;
    lVar7 = *plVar10;
    uVar6 = *puVar8;
    uVar18 = puVar8[1];
    uVar14 = *(undefined4 *)(puVar8 + 2);
    if (*(ushort *)(lVar7 + 0x12e) != 0) {
      lVar12 = *(longlong *)(lVar7 + 0xb0);
      uVar11 = 0;
      do {
        if (*(longlong *)(lVar12 + (ulonglong)uVar11 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        goto code_r0x0001806774f9;
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ushort *)(lVar7 + 0x12e));
    }
  }
  puVar8 = (undefined8 *)FUN_180312860(plVar10,TI_UnityEngine.UIElements.IStyle,0x2f);
code_r0x000180677349:
  uStack_68 = uVar6;
  uStack_60 = uVar18;
  uStack_58 = uVar14;
  (*(code *)*puVar8)(plVar10,&uStack_68,puVar8[1]);
  return;
code_r0x0001806774f9:
  puVar8 = (undefined8 *)
           ((longlong)(*(int *)(lVar12 + 8 + (ulonglong)uVar11 * 0x10) + 0x2f) * 0x10 + 0x138 +
           lVar7);
  goto code_r0x000180677349;
}

