// NameplatesManagerGame__HandlePlayerNameplate__18067b210 @ 0x18067b210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NameplatesManagerGame__HandlePlayerNameplate__18067b210(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ushort uVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_38;
  undefined *puStack_30;
  
  if (param_1[0xe] == 0) {
    if (DAT_1834b2f32 == '\0') {
      puStack_30 = &UNK_18067b235;
      FUN_180315380(TI_PlayerEntity);
      DAT_1834b2f32 = '\x01';
    }
    puStack_30 = &UNK_18067b258;
    lVar6 = NameplatesManagerGame__CreatePlayerNameplate__18067af60
                      (param_1,**(undefined8 **)(TI_PlayerEntity + 0xb8),0);
    param_1[0xe] = lVar6;
    puStack_30 = &UNK_18067b268;
    func_0x000180314690(param_1 + 0xe,lVar6);
  }
  if (cRam00000001834b3e2a == '\0') {
    puStack_30 = &UNK_18067c3e2;
    FUN_180315380(TI_SparkObservador,0);
    cRam00000001834b3e2a = '\x01';
  }
  lVar6 = param_1[0xe];
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
    cVar5 = (**(code **)(*param_1 + 0x208))
                      (param_1,*(undefined8 *)(param_1[0xe] + 0x40),
                       *(undefined8 *)(*param_1 + 0x210));
  }
  else {
    cVar5 = '\0';
  }
  if (lVar6 != 0) {
    *(bool *)(lVar6 + 0x48) = cVar5 != '\0';
    lVar6 = param_1[0xe];
    if (lVar6 != 0) {
      if (*(char *)(lVar6 + 0x48) == '\0') {
        if (cRam00000001834b3e10 == '\0') {
          puStack_30 = &UNK_18067c4b3;
          FUN_180315380(LIT_"'hidden'");
          cRam00000001834b3e10 = '\x01';
        }
        uVar1 = LIT_"'hidden'";
        if (*(char *)(lVar6 + 0x78) != '\0') {
          lVar3 = *(longlong *)(lVar6 + 0x10);
          if (lVar3 == 0) goto code_r0x00018067c5a7;
          puStack_30 = &UNK_18067c4e2;
          cVar5 = UnityEngine_UIElements_VisualElement__ClassListContains
                            (lVar3,LIT_"'hidden'",0);
          if (cVar5 == '\0') {
            puStack_30 = &UNK_18067c4f4;
            UnityEngine_UIElements_VisualElement__AddToClassList(lVar3,uVar1,0);
          }
          *(undefined1 *)(lVar6 + 0x78) = 0;
        }
        return;
      }
      if (cRam00000001834b3e0f == '\0') {
        puStack_30 = &UNK_18067c51d;
        FUN_180315380(LIT_"'hidden'");
        cRam00000001834b3e0f = '\x01';
      }
      uVar1 = LIT_"'hidden'";
      if (*(char *)(lVar6 + 0x78) == '\0') {
        lVar3 = *(longlong *)(lVar6 + 0x10);
        if (lVar3 == 0) goto code_r0x00018067c5a7;
        puStack_30 = &UNK_18067c54d;
        cVar5 = UnityEngine_UIElements_VisualElement__ClassListContains
                          (lVar3,LIT_"'hidden'",0);
        if (cVar5 != '\0') {
          puStack_30 = &UNK_18067c55f;
          UnityEngine_UIElements_VisualElement__RemoveFromClassList(lVar3,uVar1,0);
        }
        *(undefined1 *)(lVar6 + 0x78) = 1;
      }
      puStack_30 = &UNK_18067c577;
      NameplatesManagerBase__UpdateNameplatePosition__1806798e0(param_1,param_1[0xe],0);
      puStack_30 = &UNK_18067c58e;
      (**(code **)(*param_1 + 0x1e8))(param_1,param_1[0xe],*(undefined8 *)(*param_1 + 0x1f0));
      if (param_1[0xe] == 0) {
        return;
      }
      fVar11 = *(float *)(param_1[0xe] + 0x138);
      fVar10 = (float)FUN_182436650(0,0);
      lVar6 = param_1[0xe];
      if (0.0 < fVar11 - fVar10) {
        fVar11 = (float)FUN_182436650(0);
        if (lVar6 != 0) {
          if (cRam00000001834b3e15 == '\0') {
            FUN_180315380(TI_UnityEngine.UIElements.IStyle);
            cRam00000001834b3e15 = '\x01';
          }
          if (*(char *)(lVar6 + 0x130) == '\0') {
            return;
          }
          fVar11 = (fVar11 - *(float *)(lVar6 + 0x134)) /
                   (*(float *)(lVar6 + 0x138) - *(float *)(lVar6 + 0x134));
          if (fVar11 < 0.0) {
            fVar11 = 0.0;
          }
          else if (1.0 < fVar11) {
            fVar11 = 1.0;
          }
          if (*(longlong *)(lVar6 + 0x140) != 0) {
            plVar7 = (longlong *)
                     UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(lVar6 + 0x140),0)
            ;
            puVar8 = (undefined8 *)
                     UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_38,fVar11 * 80.0,0);
            if (plVar7 != (longlong *)0x0) {
              lVar6 = *plVar7;
              uVar1 = *puVar8;
              uVar2 = *(undefined4 *)(puVar8 + 1);
              if (*(ushort *)(lVar6 + 0x12e) != 0) {
                uVar9 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar6 + 0xb0) + (ulonglong)uVar9 * 0x10) ==
                      TI_UnityEngine.UIElements.IStyle) {
                    puVar8 = (undefined8 *)
                             ((longlong)
                              (*(int *)(*(longlong *)(lVar6 + 0xb0) + 8 + (ulonglong)uVar9 * 0x10) +
                              0xad) * 0x10 + 0x138 + lVar6);
                    goto code_r0x00018067c365;
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 < *(ushort *)(lVar6 + 0x12e));
              }
              puVar8 = (undefined8 *)FUN_180312860(plVar7,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x00018067c365:
              puStack_30 = (undefined *)CONCAT44(puStack_30._4_4_,uVar2);
              uStack_38 = uVar1;
              (*(code *)*puVar8)(plVar7,&uStack_38,puVar8[1]);
              return;
            }
          }
        }
      }
      else if (lVar6 != 0) {
        PlayerNameplate__HideGauge__1806a2530(lVar6,0);
        return;
      }
      FUN_1803155d0();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
code_r0x00018067c5a7:
  puStack_30 = &UNK_18067c5ac;
  FUN_1803155d0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

