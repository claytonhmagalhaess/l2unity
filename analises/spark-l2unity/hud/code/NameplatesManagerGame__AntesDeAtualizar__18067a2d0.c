// NameplatesManagerGame__AntesDeAtualizar__18067a2d0 @ 0x18067a2d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerGame__AntesDeAtualizar__18067a2d0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_38;
  undefined *puStack_30;
  
  if (cRam00000001834b3e25 == '\0') {
    puStack_30 = &UNK_18067a2ee;
    FUN_180315380(TI_SparkOpcoes);
    cRam00000001834b3e25 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    puStack_30 = &UNK_18067a30a;
    func_0x000180315660();
  }
  puStack_30 = &UNK_18067a311;
  uVar9 = SparkOpcoes__get_DistanciaDoNome(0);
  *(undefined4 *)(param_1 + 4) = uVar9;
  puStack_30 = &UNK_18067a31d;
  fVar10 = (float)FUN_1824366b0(0);
  if (*(float *)(param_1 + 0xf) <= fVar10) {
    puStack_30 = &UNK_18067a32a;
    fVar10 = (float)FUN_1824366b0(0);
    *(float *)(param_1 + 0xf) = fVar10 + 0.1;
    puStack_30 = &UNK_18067a341;
    NameplatesManagerBase__ScanForEntities__180679620(param_1,0);
    puStack_30 = &UNK_18067a34b;
    NameplatesManagerBase__ProcessNameplateVisibility__1806792b0(param_1,0);
  }
  puStack_30 = &UNK_18067a355;
  NameplatesManagerGame__ConfereParedes__18067aa80(param_1,0);
  puStack_30 = &UNK_18067a35f;
  NameplatesManagerGame__ProcessHoveredEntity__18067b9f0(param_1,0);
  puStack_30 = &UNK_18067a372;
  (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
  if (param_1[0xe] == 0) {
    if (DAT_1834b2f32 == '\0') {
      puStack_30 = &UNK_18067a38e;
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    puStack_30 = &UNK_18067a3b1;
    lVar5 = NameplatesManagerGame__CreatePlayerNameplate__18067af60
                      (param_1,**(undefined8 **)(TI_PlayerEntity + 0xb8),0);
    param_1[0xe] = lVar5;
    puStack_30 = &UNK_18067a3c1;
    func_0x000180314690(param_1 + 0xe,lVar5);
  }
  if (cRam00000001834b3e2a == '\0') {
    puStack_30 = &UNK_18067c3e2;
    FUN_180315380(TI_SparkObservador,0);
    cRam00000001834b3e2a = '\x01';
  }
  lVar5 = param_1[0xe];
  if (*(int *)(TI_SparkObservador + 0xe4) == 0) {
    puStack_30 = &UNK_18067c402;
    func_0x000180315660();
  }
  if (DAT_1834b35e8 == '\0') {
    puStack_30 = &UNK_18067c417;
    FUN_180315380(TI_SparkObservador);
    DAT_1834b35e8 = '\x01';
  }
  if (*(int *)(TI_SparkObservador + 0xe4) == 0) {
    puStack_30 = &UNK_18067c433;
    func_0x000180315660();
  }
  if (*(char *)(*(longlong *)(TI_SparkObservador + 0xb8) + 0x20) == '\0') {
    if (param_1[0xe] == 0) goto code_r0x00018067c5a7;
    puStack_30 = &UNK_18067c474;
    cVar4 = (**(code **)(*param_1 + 0x208))
                      (param_1,*(undefined8 *)(param_1[0xe] + 0x40),
                       *(undefined8 *)(*param_1 + 0x210));
  }
  else {
    cVar4 = '\0';
  }
  if (lVar5 != 0) {
    *(bool *)(lVar5 + 0x48) = cVar4 != '\0';
    lVar5 = param_1[0xe];
    if (lVar5 != 0) {
      if (*(char *)(lVar5 + 0x48) == '\0') {
        if (cRam00000001834b3e10 == '\0') {
          puStack_30 = &UNK_18067c4b3;
          FUN_180315380(LIT_"'hidden'");
          cRam00000001834b3e10 = '\x01';
        }
        uVar1 = LIT_"'hidden'";
        if (*(char *)(lVar5 + 0x78) != '\0') {
          lVar2 = *(longlong *)(lVar5 + 0x10);
          if (lVar2 == 0) goto code_r0x00018067c5a7;
          puStack_30 = &UNK_18067c4e2;
          cVar4 = UnityEngine_UIElements_VisualElement__ClassListContains
                            (lVar2,LIT_"'hidden'",0);
          if (cVar4 == '\0') {
            puStack_30 = &UNK_18067c4f4;
            UnityEngine_UIElements_VisualElement__AddToClassList(lVar2,uVar1,0);
          }
          *(undefined1 *)(lVar5 + 0x78) = 0;
        }
        return;
      }
      if (cRam00000001834b3e0f == '\0') {
        puStack_30 = &UNK_18067c51d;
        FUN_180315380(LIT_"'hidden'");
        cRam00000001834b3e0f = '\x01';
      }
      uVar1 = LIT_"'hidden'";
      if (*(char *)(lVar5 + 0x78) == '\0') {
        lVar2 = *(longlong *)(lVar5 + 0x10);
        if (lVar2 == 0) goto code_r0x00018067c5a7;
        puStack_30 = &UNK_18067c54d;
        cVar4 = UnityEngine_UIElements_VisualElement__ClassListContains
                          (lVar2,LIT_"'hidden'",0);
        if (cVar4 != '\0') {
          puStack_30 = &UNK_18067c55f;
          UnityEngine_UIElements_VisualElement__RemoveFromClassList(lVar2,uVar1,0);
        }
        *(undefined1 *)(lVar5 + 0x78) = 1;
      }
      puStack_30 = &UNK_18067c577;
      NameplatesManagerBase__UpdateNameplatePosition__1806798e0(param_1,param_1[0xe],0);
      puStack_30 = &UNK_18067c58e;
      (**(code **)(*param_1 + 0x1e8))(param_1,param_1[0xe],*(undefined8 *)(*param_1 + 0x1f0));
      if (param_1[0xe] == 0) {
        return;
      }
      fVar10 = *(float *)(param_1[0xe] + 0x138);
      fVar11 = (float)FUN_182436650(0,0);
      lVar5 = param_1[0xe];
      if (0.0 < fVar10 - fVar11) {
        fVar10 = (float)FUN_182436650(0);
        if (lVar5 != 0) {
          if (cRam00000001834b3e15 == '\0') {
            FUN_180315380(TI_UnityEngine.UIElements.IStyle);
            cRam00000001834b3e15 = '\x01';
          }
          if (*(char *)(lVar5 + 0x130) == '\0') {
            return;
          }
          fVar10 = (fVar10 - *(float *)(lVar5 + 0x134)) /
                   (*(float *)(lVar5 + 0x138) - *(float *)(lVar5 + 0x134));
          if (fVar10 < 0.0) {
            fVar10 = 0.0;
          }
          else if (1.0 < fVar10) {
            fVar10 = 1.0;
          }
          if (*(longlong *)(lVar5 + 0x140) != 0) {
            plVar6 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar5 + 0x140),0)
            ;
            puVar7 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_38,fVar10 * 80.0,0);
            if (plVar6 != (longlong *)0x0) {
              lVar5 = *plVar6;
              uVar1 = *puVar7;
              uVar9 = *(undefined4 *)(puVar7 + 1);
              if (*(ushort *)(lVar5 + 0x12e) != 0) {
                uVar8 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar5 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar7 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar5 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10) +
                              0xad) * 0x10 + 0x138 + lVar5);
                    goto code_r0x00018067c365;
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 < *(ushort *)(lVar5 + 0x12e));
              }
              puVar7 = (undefined8 *)FUN_180312860(plVar6,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018067c365:
              puStack_30 = (undefined *)CONCAT44(puStack_30._4_4_,uVar9);
              uStack_38 = uVar1;
              (*(code *)*puVar7)(plVar6,&uStack_38,puVar7[1]);
              return;
            }
          }
        }
      }
      else if (lVar5 != 0) {
        PlayerNameplate__HideGauge__1806a2530(lVar5,0);
        return;
      }
      FUN_1803155d0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
code_r0x00018067c5a7:
  puStack_30 = &UNK_18067c5ac;
  FUN_1803155d0();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

