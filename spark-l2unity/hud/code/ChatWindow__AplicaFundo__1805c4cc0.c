// ChatWindow__AplicaFundo__1805c4cc0 @ 0x1805c4cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__AplicaFundo__1805c4cc0(longlong param_1)

{
  float fVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  if (cRam00000001834b3ab9 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(MR_SparkArte.Load<UnityEngine.Texture2D>);
    FUN_180315380(TI_SparkArte);
    FUN_180315380(TI_SparkOpcoes);
    FUN_180315380(TI_UnityEngine.UIElements.VisualElement__);
    FUN_180315380(LIT_"'Data/UI/Assets/SparkChat/ChatWndBg'");
    cRam00000001834b3ab9 = '\x01';
  }
  if (*(int *)(TI_SparkOpcoes + 0xe4) == 0) {
    func_0x000180315660(TI_SparkOpcoes);
  }
  fVar1 = *(float *)(*(longlong *)(TI_SparkOpcoes + 0xb8) + 0xe0);
  plVar3 = (longlong *)func_0x000180314710(TI_UnityEngine.UIElements.VisualElement__,2);
  if (plVar3 == (longlong *)0x0) {
code_r0x0001805c500b:
    FUN_1803155d0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar6 = *(longlong *)(param_1 + 0xb8);
  if (lVar6 != 0) {
    lVar4 = func_0x0001803146b0(lVar6,*(undefined8 *)(*plVar3 + 0x40));
    if (lVar4 == 0) {
      uVar8 = func_0x000180314f80();
      FUN_180315590(uVar8,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar6;
    func_0x000180314690(plVar3 + 4,lVar6);
    lVar6 = *(longlong *)(param_1 + 0xc0);
    if (lVar6 != 0) {
      lVar4 = func_0x0001803146b0(lVar6,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar4 == 0) {
        uVar8 = func_0x000180314f80();
        FUN_180315590(uVar8,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar6;
      func_0x000180314690(plVar3 + 5,lVar6);
      uVar9 = 0;
      do {
        if ((int)plVar3[3] <= (int)uVar9) {
          return;
        }
        if (*(uint *)(plVar3 + 3) <= uVar9) break;
        lVar6 = plVar3[(longlong)(int)uVar9 + 4];
        if (lVar6 != 0) {
          lVar4 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
          if (fVar1 <= 0.68435293) {
            if (*(int *)(TI_SparkArte + 0xe4) == 0) {
              func_0x000180315660();
            }
            uVar8 = FUN_180a90ae0(LIT_"'Data/UI/Assets/SparkChat/ChatWndBg'",MR_SparkArte.Load<UnityEngine.Texture2D>);
            puVar5 = (undefined8 *)
                     UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_48,uVar8,0);
            if (lVar4 == 0) goto code_r0x0001805c500b;
            uStack_78 = *puVar5;
            uStack_70 = puVar5[1];
            uStack_68 = *(undefined4 *)(puVar5 + 2);
            uStack_64 = *(undefined4 *)((longlong)puVar5 + 0x14);
            uStack_60 = *(undefined4 *)(puVar5 + 3);
            uStack_5c = *(undefined4 *)((longlong)puVar5 + 0x1c);
            uStack_58 = puVar5[4];
            FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar4,&uStack_78);
            lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
            puVar7 = (undefined4 *)func_0x0001826005c0(&uStack_78,1,0);
          }
          else {
            puVar5 = (undefined8 *)
                     UnityEngine_UIElements_StyleBackground__op_Implicit(&uStack_48,3,0);
            if (lVar4 == 0) goto code_r0x0001805c500b;
            uStack_78 = *puVar5;
            uStack_70 = puVar5[1];
            uStack_68 = *(undefined4 *)(puVar5 + 2);
            uStack_64 = *(undefined4 *)((longlong)puVar5 + 0x14);
            uStack_60 = *(undefined4 *)(puVar5 + 3);
            uStack_5c = *(undefined4 *)((longlong)puVar5 + 0x1c);
            uStack_58 = puVar5[4];
            FUN_180007050(0xb,TI_UnityEngine.UIElements.IStyle,lVar4,&uStack_78);
            lVar6 = UnityEngine_UIElements_VisualElement__get_style(lVar6,0);
            uStack_88 = 0x3de0e0e1;
            uStack_84 = 0x3dd0d0d1;
            uStack_80 = 0x3da8a8a9;
            fStack_7c = fVar1;
            puVar7 = (undefined4 *)
                     UnityEngine_UIElements_StyleColor__op_Implicit(&uStack_78,&uStack_88,0);
          }
          if (lVar6 == 0) goto code_r0x0001805c500b;
          uStack_48 = *puVar7;
          uStack_44 = puVar7[1];
          uStack_40 = puVar7[2];
          uStack_3c = puVar7[3];
          uStack_38 = puVar7[4];
          FUN_180004fc0(9,TI_UnityEngine.UIElements.IStyle,lVar6,&uStack_48);
        }
        uVar9 = uVar9 + 1;
      } while( true );
    }
  }
  FUN_1803155c0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

