// ChatWindow__TamanhoPadrao__1805cea60 @ 0x1805cea60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ChatWindow__TamanhoPadrao__1805cea60(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ushort uVar7;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if (cRam00000001834b3ab8 == '\0') {
    FUN_180315380(TI_UnityEngine.UIElements.IStyle);
    FUN_180315380(LIT_"'spark_chat_w'");
    FUN_180315380(LIT_"'spark_sysmsg_h'");
    FUN_180315380(LIT_"'spark_chat_h'");
    cRam00000001834b3ab8 = '\x01';
  }
  UnityEngine_PlayerPrefs__DeleteKey(LIT_"'spark_chat_w'",0);
  UnityEngine_PlayerPrefs__DeleteKey(LIT_"'spark_chat_h'",0);
  UnityEngine_PlayerPrefs__DeleteKey(LIT_"'spark_sysmsg_h'",0);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    plVar5 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0xb8),0);
    puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_48,0x43ae0000,0);
    if (plVar5 == (longlong *)0x0) goto code_r0x0001805ced58;
    uVar1 = *puVar6;
    uVar2 = *(undefined4 *)(puVar6 + 1);
    lVar3 = *plVar5;
    uVar7 = 0;
    if (*(ushort *)(lVar3 + 0x12e) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar7 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar6 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 0xad) *
                    0x10 + 0x138 + lVar3);
          goto code_r0x0001805ceb89;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12e));
    }
    puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0xad);
code_r0x0001805ceb89:
    uStack_48 = uVar1;
    uStack_40 = uVar2;
    (*(code *)*puVar6)(plVar5,&uStack_48,puVar6[1]);
    if (*(longlong *)(param_1 + 0xb8) == 0) goto code_r0x0001805ced58;
    plVar5 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(longlong *)(param_1 + 0xb8),0);
    puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_48,0x433c0000,0);
    if (plVar5 == (longlong *)0x0) goto code_r0x0001805ced58;
    uVar1 = *puVar6;
    uVar2 = *(undefined4 *)(puVar6 + 1);
    lVar3 = *plVar5;
    uVar7 = 0;
    if (*(ushort *)(lVar3 + 0x12e) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar7 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar6 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 0x43) *
                    0x10 + 0x138 + lVar3);
          goto code_r0x0001805cec28;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12e));
    }
    puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001805cec28:
    uStack_48 = uVar1;
    uStack_40 = uVar2;
    (*(code *)*puVar6)(plVar5,&uStack_48,puVar6[1]);
  }
  uVar7 = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    plVar5 = (longlong *)
             UnityEngine_UIElements_VisualElement__get_style(*(undefined8 *)(param_1 + 0xc0),0);
    puVar6 = (undefined8 *)UnityEngine_UIElements_StyleLength__op_Implicit(&uStack_48,0x43680000,0);
    if (plVar5 == (longlong *)0x0) {
code_r0x0001805ced58:
      FUN_1803155d0();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar1 = *puVar6;
    uVar2 = *(undefined4 *)(puVar6 + 1);
    lVar3 = *plVar5;
    if (*(ushort *)(lVar3 + 0x12e) != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar3 + 0xb0) + (ulonglong)uVar7 * 0x10) == TI_UnityEngine.UIElements.IStyle)
        {
          puVar6 = (undefined8 *)
                   ((longlong)
                    (*(int *)(*(longlong *)(lVar3 + 0xb0) + 8 + (ulonglong)uVar7 * 0x10) + 0x43) *
                    0x10 + 0x138 + lVar3);
          goto code_r0x0001805ced12;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12e));
    }
    puVar6 = (undefined8 *)FUN_180312860(plVar5,TI_UnityEngine.UIElements.IStyle,0x43);
code_r0x0001805ced12:
    uStack_48 = uVar1;
    uStack_40 = uVar2;
    (*(code *)*puVar6)(plVar5,&uStack_48,puVar6[1]);
  }
  return;
}

